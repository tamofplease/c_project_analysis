# 0 "project/radare2/libr/debug/p/native/xnu/xnu_excthreads.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/debug/p/native/xnu/xnu_excthreads.c"


# 1 "project/radare2/libr/debug/p/native/xnu/xnu_threads.h" 1
# 30 "project/radare2/libr/debug/p/native/xnu/xnu_threads.h"
typedef struct _exception_info {
 exception_mask_t masks[EXC_TYPES_COUNT];
 mach_port_t ports[EXC_TYPES_COUNT];
 exception_behavior_t behaviors[EXC_TYPES_COUNT];
 thread_state_flavor_t flavors[EXC_TYPES_COUNT];
 mach_msg_type_number_t count;
 pthread_t thread;
 mach_port_t exception_port;
} xnu_exception_info;



typedef struct _xnu_thread {
 thread_t port;
 char *name;
 thread_basic_info_data_t basic_info;
 ut8 stepping;
 x86_thread_state_t gpr;
 void *state;
 ut32 state_size;
# 60 "project/radare2/libr/debug/p/native/xnu/xnu_threads.h"
 x86_debug_state_t drx;

 ut16 flavor;
 ut32 count;
} xnu_thread_t;

typedef struct _exc_msg {
 mach_msg_header_t hdr;

 mach_msg_body_t msg_body;
 mach_msg_port_descriptor_t thread;
 mach_msg_port_descriptor_t task;

 NDR_record_t NDR;
 exception_type_t exception;
 mach_msg_type_number_t code_cnt;

 mach_exception_data_t code;


 char pad[512];
} exc_msg;

typedef struct _rep_msg {
 mach_msg_header_t hdr;
 NDR_record_t NDR;
 kern_return_t ret_code;
} rep_msg;
# 4 "project/radare2/libr/debug/p/native/xnu/xnu_excthreads.c" 2
# 16 "project/radare2/libr/debug/p/native/xnu/xnu_excthreads.c"
static bool modify_trace_bit(RDebug *dbg, xnu_thread_t *th, int enable) {
 x86_thread_state_t *state;
 int ret;
 ret = xnu_thread_get_gpr (dbg, th);
 if (!ret) {
  eprintf ("error to get gpr registers in trace bit intel\n");
  return false;
 }
 state = (x86_thread_state_t *)&th->gpr;
 if (state->tsh.flavor == x86_THREAD_STATE32) {
  state->uts.ts32.__eflags = (state->uts.ts32.__eflags &
     ~0x100UL) | (enable ? 0x100UL : 0);
 } else if (state->tsh.flavor == x86_THREAD_STATE64) {
  state->uts.ts64.__rflags = (state->uts.ts64.__rflags &
     ~0x100UL) | (enable ? 0x100UL : 0);
 } else {
  eprintf ("Invalid bit size\n");
  return false;
 }
 if (!xnu_thread_set_gpr (dbg, th)) {
  eprintf ("error xnu_thread_set_gpr in modify_trace_bit intel\n");
  return false;
 }
 return true;
}
# 222 "project/radare2/libr/debug/p/native/xnu/xnu_excthreads.c"
static xnu_exception_info ex = { { 0 } };

static bool xnu_restore_exception_ports(int pid) {
 kern_return_t kr;
 int i;
 task_t task = pid_to_task (pid);
 if (!task) {
  return false;
 }
 for (i = 0; i < ex.count; i++) {
  kr = task_set_exception_ports (task, ex.masks[i], ex.ports[i],
            ex.behaviors[i], ex.flavors[i]);
  if (kr != KERN_SUCCESS) {
   eprintf ("fail to restore exception ports\n");
   return false;
  }
 }
 kr = mach_port_deallocate (mach_task_self (), ex.exception_port);
 if (kr != KERN_SUCCESS) {
  eprintf ("failed to deallocate exception port\n");
  return false;
 }
 return true;
}



static void encode_reply(mig_reply_error_t *reply, mach_msg_header_t *hdr, int code) {
 mach_msg_header_t *rh = &reply->Head;
 rh->msgh_bits = MACH_MSGH_BITS (MACH_MSGH_BITS_REMOTE(hdr->msgh_bits), 0);
 rh->msgh_remote_port = hdr->msgh_remote_port;
 rh->msgh_size = (mach_msg_size_t) sizeof (mig_reply_error_t);
 rh->msgh_local_port = MACH_PORT_NULL;
 rh->msgh_id = hdr->msgh_id + 100;
 reply->NDR = NDR_record;
 reply->RetCode = code;
}

static bool validate_mach_message(RDebug *dbg, exc_msg *msg) {
 kern_return_t kr;




 if (msg->hdr.msgh_local_port != ex.exception_port) {
  return false;
 }

 if (!(msg->hdr.msgh_bits & MACH_MSGH_BITS_COMPLEX)) {
  return false;
 }


 if (msg->hdr.msgh_id > 2405 || msg->hdr.msgh_id < 2401) {
  return false;
 }

 if (msg->hdr.msgh_size <
     sizeof (mach_msg_header_t) + sizeof (mach_msg_body_t) +
      2 * sizeof (mach_msg_port_descriptor_t) +
      sizeof (NDR_record_t) + sizeof (exception_type_t) +
      sizeof (mach_msg_type_number_t) +
      sizeof (mach_exception_data_t))
  return false;

 if (msg->NDR.mig_vers != NDR_PROTOCOL_2_0 ||
     msg->NDR.if_vers != NDR_PROTOCOL_2_0 ||
     msg->NDR.mig_encoding != NDR_record.mig_encoding ||
     msg->NDR.int_rep != NDR_record.int_rep ||
     msg->NDR.char_rep != NDR_record.char_rep ||
     msg->NDR.float_rep != NDR_record.float_rep) {
  return false;
 }
 if (pid_to_task (dbg->pid) != msg->task.name) {




  kr = mach_port_deallocate (mach_task_self (), msg->task.name);
  if (kr != KERN_SUCCESS) {
   eprintf ("validate_mach_message: failed to deallocate task port\n");
  }
  kr = mach_port_deallocate (mach_task_self (), msg->thread.name);
  if (kr != KERN_SUCCESS) {
   eprintf ("validate_mach_message2: failed to deallocated task port\n");
  }
  return false;
 }
 return true;

}

static bool handle_dead_notify(RDebug *dbg, exc_msg *msg) {
 if (msg->hdr.msgh_id == 0x48) {
  dbg->pid = -1;
  return true;
 }
 return false;
}

static int handle_exception_message(RDebug *dbg, exc_msg *msg, int *ret_code) {
 int ret = R_DEBUG_REASON_UNKNOWN;
 kern_return_t kr;
 *ret_code = KERN_SUCCESS;
 switch (msg->exception) {
 case EXC_BAD_ACCESS:
  ret = R_DEBUG_REASON_SEGFAULT;
  *ret_code = KERN_FAILURE;
  kr = task_suspend (msg->task.name);
  if (kr != KERN_SUCCESS) {
   eprintf ("failed to suspend task bad access\n");
  }
  eprintf ("EXC_BAD_ACCESS\n");
  break;
 case EXC_BAD_INSTRUCTION:
  ret = R_DEBUG_REASON_ILLEGAL;
  *ret_code = KERN_FAILURE;
  kr = task_suspend (msg->task.name);
  if (kr != KERN_SUCCESS) {
   eprintf ("failed to suspend task bad instruction\n");
  }
  eprintf ("EXC_BAD_INSTRUCTION\n");
  break;
 case EXC_ARITHMETIC:
  eprintf ("EXC_ARITHMETIC\n");
  break;
 case EXC_EMULATION:
  eprintf ("EXC_EMULATION\n");
  break;
 case EXC_SOFTWARE:
  eprintf ("EXC_SOFTWARE\n");
  break;
 case EXC_BREAKPOINT:
  kr = task_suspend (msg->task.name);
  if (kr != KERN_SUCCESS) {
   eprintf ("failed to suspend task breakpoint\n");
  }
  ret = R_DEBUG_REASON_BREAKPOINT;
  break;
 default:
  eprintf ("UNKNOWN\n");
  break;
 }
 kr = mach_port_deallocate (mach_task_self (), msg->task.name);
 if (kr != KERN_SUCCESS) {
  eprintf ("failed to deallocate task port\n");
 }
 kr = mach_port_deallocate (mach_task_self (), msg->thread.name);
 if (kr != KERN_SUCCESS) {
  eprintf ("failed to deallocated task port\n");
 }
 return ret;
}

static int __xnu_wait(RDebug *dbg, int pid) {

 kern_return_t kr;
 int ret_code, reason = R_DEBUG_REASON_UNKNOWN;
 mig_reply_error_t reply;
 bool ret;
 exc_msg msg;
 if (!dbg) {
  return reason;
 }
 msg.hdr.msgh_local_port = ex.exception_port;
 msg.hdr.msgh_size = sizeof (exc_msg);
 for (;;) {
  kr = mach_msg (
   &msg.hdr,
   MACH_RCV_MSG | MACH_RCV_INTERRUPT, 0,
   sizeof (exc_msg), ex.exception_port,
   MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
  if (kr == MACH_RCV_INTERRUPTED) {
   reason = R_DEBUG_REASON_MACH_RCV_INTERRUPTED;
   break;
  } else if (kr != MACH_MSG_SUCCESS) {
   eprintf ("message didn't succeeded\n");
   break;
  }
  ret = validate_mach_message (dbg, &msg);
  if (!ret) {
   ret = handle_dead_notify (dbg, &msg);
   if (ret) {
    reason = R_DEBUG_REASON_DEAD;
    break;
   }
  }
  if (!ret) {
   encode_reply (&reply, &msg.hdr, KERN_FAILURE);
   kr = mach_msg (&reply.Head, MACH_SEND_MSG | MACH_SEND_INTERRUPT,
     reply.Head.msgh_size, 0,
     MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE,
     MACH_PORT_NULL);
   if (reply.Head.msgh_remote_port != 0 && kr != MACH_MSG_SUCCESS) {
    kr = mach_port_deallocate(mach_task_self (), reply.Head.msgh_remote_port);
    if (kr != KERN_SUCCESS) {
     eprintf ("failed to deallocate reply port\n");
    }
   }
   continue;
  }

  reason = handle_exception_message (dbg, &msg, &ret_code);
  encode_reply (&reply, &msg.hdr, ret_code);
  kr = mach_msg (&reply.Head, MACH_SEND_MSG | MACH_SEND_INTERRUPT,
    reply.Head.msgh_size, 0,
    MACH_PORT_NULL, 0,
    MACH_PORT_NULL);
  if (reply.Head.msgh_remote_port != 0 && kr != MACH_MSG_SUCCESS) {
   kr = mach_port_deallocate(mach_task_self (), reply.Head.msgh_remote_port);
   if (kr != KERN_SUCCESS)
    eprintf ("failed to deallocate reply port\n");
  }
  break;
 }
 dbg->stopaddr = r_debug_reg_get (dbg, "PC");
 return reason;
}

bool xnu_create_exception_thread(RDebug *dbg, int pid) {



 kern_return_t kr;
 mach_port_t exception_port = MACH_PORT_NULL;
 mach_port_t req_port;

 mach_port_t task_self = mach_task_self ();
 task_t task = pid_to_task (pid);
 if (!task) {
  eprintf ("xnu_start_exception_thread: error to get task for pid %d\n", pid);
  return false;
 }
 r_debug_ptrace (dbg, PT_ATTACHEXC, pid, 0, 0);
 if (!MACH_PORT_VALID (task_self)) {
  eprintf ("error to get the task for the current process"
    " xnu_start_exception_thread\n");
  return false;
 }

 kr = mach_port_allocate (task_self, MACH_PORT_RIGHT_RECEIVE,
   &exception_port);
 if (kr != KERN_SUCCESS) {mach_error ("error to allocate mach_port exception\n", kr); return ((false));};

 kr = mach_port_insert_right (task_self, exception_port, exception_port,
   MACH_MSG_TYPE_MAKE_SEND);
 if (kr != KERN_SUCCESS) {mach_error ("error to allocate insert right\n", kr); return ((false));};


 ex.count = (sizeof (ex.ports) / sizeof (*ex.ports));
 kr = task_swap_exception_ports (task, EXC_MASK_ALL, exception_port,
   EXCEPTION_DEFAULT | MACH_EXCEPTION_CODES, THREAD_STATE_NONE,
   ex.masks, &ex.count, ex.ports, ex.behaviors, ex.flavors);
 if (kr != KERN_SUCCESS) {mach_error ("failed to swap exception ports\n", kr); return ((false));};

 kr = mach_port_request_notification (task_self, task, MACH_NOTIFY_DEAD_NAME,
   0, exception_port, MACH_MSG_TYPE_MAKE_SEND_ONCE, &req_port);
 if (kr != KERN_SUCCESS) {
  eprintf ("Termination notification request failed\n");
 }
 ex.exception_port = exception_port;
 return true;

}
