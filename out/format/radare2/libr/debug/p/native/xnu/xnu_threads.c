# 1 "project/radare2/libr/debug/p/native/xnu/xnu_threads.c"


#include <r_userconf.h>
#if DEBUGGER


#include "xnu_debug.h"
#include "xnu_threads.h"

static void xnu_thread_free(xnu_thread_t *thread) {
 kern_return_t kr;
 if (!thread) {
  return;
 }
 free (thread->name);


 kr = mach_port_deallocate (mach_task_self (), thread->port);
 if (kr != KERN_SUCCESS) {
  eprintf ("failed to deallocate thread port\n");
 }
 free (thread);
}


static bool xnu_thread_get_drx(RDebug *dbg, xnu_thread_t *thread) {
 r_return_val_if_fail (dbg && thread, false);
 kern_return_t rc;
#if __x86_64__ || __i386__
 thread->flavor = x86_DEBUG_STATE;
 thread->count = x86_DEBUG_STATE_COUNT;
 thread->state_size = (dbg->bits == R_SYS_BITS_64)
  ? sizeof (x86_debug_state64_t)
  : sizeof (x86_debug_state32_t);
 thread->state = &thread->drx.uds;
 rc = thread_get_state (thread->port, thread->flavor,
        (thread_state_t)&thread->drx, &thread->count);
#elif __arm64__ || __arm64 || __aarch64 || __aarch64__
 if (dbg->bits == R_SYS_BITS_64) {
  thread->count = ARM_DEBUG_STATE64_COUNT;
  thread->flavor = ARM_DEBUG_STATE64;
  rc = thread_get_state (thread->port, thread->flavor,
           (thread_state_t)&thread->debug.drx64,
           &thread->count);
 } else {
  thread->count = ARM_DEBUG_STATE32_COUNT;
  thread->flavor = ARM_DEBUG_STATE32;
  rc = thread_get_state (thread->port, thread->flavor,
           (thread_state_t)&thread->debug.drx32,
           &thread->count);
 }
#elif __arm__ || __arm || __armv7__
 thread->count = ARM_DEBUG_STATE_COUNT;
 thread->flavor = ARM_DEBUG_STATE;
 rc = thread_get_state (thread->port, thread->flavor,
          (thread_state_t)&thread->debug.drx,
          &thread->count);
#else
#warning xnu_thread_get_drx: Unsupported architecture
 rc = KERN_FAILURE;
#endif
 if (rc != KERN_SUCCESS) {
  perror (__FUNCTION__);
  thread->count = 0;
  return false;
 }
 return true;
}

static bool xnu_thread_set_drx(RDebug *dbg, xnu_thread_t *thread) {
 r_return_val_if_fail (dbg && thread, false);
 kern_return_t rc;
#if __i386__ || __x86_64__
 x86_debug_state_t *regs = &thread->drx;
 if (!regs) {
  return false;
 }
 thread->flavor = x86_DEBUG_STATE;
 thread->count = x86_DEBUG_STATE_COUNT;
 if (dbg->bits == R_SYS_BITS_64) {
  regs->dsh.flavor = x86_DEBUG_STATE64;
  regs->dsh.count = x86_DEBUG_STATE64_COUNT;
 } else {
  regs->dsh.flavor = x86_DEBUG_STATE32;
  regs->dsh.count = x86_DEBUG_STATE32_COUNT;
 }
 rc = thread_set_state (thread->port, thread->flavor,
          (thread_state_t)regs, thread->count);
#elif __arm64__ || __arm64 || __aarch64 || __aarch64__
 if (dbg->bits == R_SYS_BITS_64) {
  thread->count = ARM_DEBUG_STATE64_COUNT;
  thread->flavor = ARM_DEBUG_STATE64;
  rc = thread_set_state (thread->port, thread->flavor,
           (thread_state_t)&thread->debug.drx64,
           thread->count);
 } else {
  thread->count = ARM_DEBUG_STATE32_COUNT;
  thread->flavor = ARM_DEBUG_STATE32;
  rc = thread_set_state (thread->port, thread->flavor,
           (thread_state_t)&thread->debug.drx32,
           thread->count);
 }
#elif __arm__ || __arm || __armv7__
 thread->count = ARM_DEBUG_STATE_COUNT;
 thread->flavor = ARM_DEBUG_STATE;
 rc = thread_set_state (thread->port, thread->flavor,
          (thread_state_t)&thread->debug.drx,
          &thread->count);
#elif __POWERPC__

# ifndef PPC_DEBUG_STATE32
#define PPC_DEBUG_STATE32 1
# endif
 ppc_debug_state_t *regs;


 return false;
#else
 regs->dsh.flavor = 0;
 thread->count = 0;
#endif
 if (rc != KERN_SUCCESS) {
  perror (__FUNCTION__);
  thread->count = 0;
  return false;
 }
 return true;
}

static bool xnu_thread_set_gpr(RDebug *dbg, xnu_thread_t *thread) {
 r_return_val_if_fail (dbg && thread, false);
 kern_return_t rc;
 R_REG_T *regs = (R_REG_T *)&thread->gpr;
 if (!regs) {
  return false;
 }
#if __i386__ || __x86_64__


 thread->state = &regs->uts;

 thread->flavor = x86_THREAD_STATE;
 thread->count = x86_THREAD_STATE_COUNT;
 if (dbg->bits == R_SYS_BITS_64) {
  regs->tsh.flavor = x86_THREAD_STATE64;
  regs->tsh.count = x86_THREAD_STATE64_COUNT;
 } else {
  regs->tsh.flavor = x86_THREAD_STATE32;
  regs->tsh.count = x86_THREAD_STATE32_COUNT;
 }
#elif __arm64 || __aarch64 || __arm64__ || __aarch64__
#if 0

 thread->flavor = ARM_UNIFIED_THREAD_STATE;
 thread->count = ARM_UNIFIED_THREAD_STATE_COUNT;
#endif

 thread->state = &regs->uts;
 if (dbg->bits == R_SYS_BITS_64) {
  thread->flavor = ARM_THREAD_STATE64;
  thread->count = ARM_THREAD_STATE64_COUNT;
  thread->state_size = sizeof (arm_thread_state64_t);
 } else {
  thread->flavor = ARM_THREAD_STATE32;
  thread->count = ARM_THREAD_STATE32_COUNT;
  thread->state_size = sizeof (arm_thread_state32_t);
 }
#elif __arm || __arm__ || __armv7__
 thread->flavor = ARM_THREAD_STATE;
 thread->count = ARM_THREAD_STATE_COUNT;
 thread->state_size = sizeof (arm_thread_state_t);

#endif
 rc = thread_set_state (thread->port, thread->flavor,
          (thread_state_t)regs, thread->count);
 if (rc != KERN_SUCCESS) {
  perror (__FUNCTION__);
  thread->count = 0;
  return false;
 }
 return true;
}

static bool xnu_thread_get_gpr(RDebug *dbg, xnu_thread_t *thread) {
 r_return_val_if_fail (dbg && thread, false);
 R_REG_T *regs = &thread->gpr;
 if (!regs) {
  return false;
 }
 kern_return_t rc;
#if __POWERPC__
 thread->state = regs;
#elif __arm64 || __aarch64 || __arch64__ || __arm64__

 thread->state = &regs->uts;
 if (dbg->bits == R_SYS_BITS_64) {
  thread->flavor = ARM_THREAD_STATE64;
  thread->count = ARM_THREAD_STATE64_COUNT;
  thread->state_size = sizeof (arm_thread_state64_t);
 } else {
  thread->flavor = ARM_THREAD_STATE;
  thread->count = ARM_THREAD_STATE_COUNT;
  thread->state_size = sizeof (arm_thread_state32_t);
 }
#elif __arm || __arm__ || __armv7__
 thread->state = regs;
 thread->flavor = ARM_THREAD_STATE;
 thread->count = ARM_THREAD_STATE_COUNT;
 thread->state_size = sizeof (arm_thread_state_t);
#elif __x86_64__ || __i386__
 thread->state = &regs->uts;
 thread->flavor = x86_THREAD_STATE;
 thread->count = x86_THREAD_STATE_COUNT;
 thread->state_size = (dbg->bits == R_SYS_BITS_64) ?
         sizeof (x86_thread_state64_t) :
         sizeof (x86_thread_state32_t);
#endif
 rc = thread_get_state (thread->port, thread->flavor,
          (thread_state_t)regs, &thread->count);
 if (rc != KERN_SUCCESS) {
  perror (__FUNCTION__);
  thread->count = 0;
  return false;
 }
 return true;
}

static bool xnu_fill_info_thread(RDebug *dbg, xnu_thread_t *thread) {
#if __POWERPC__
 thread->name = strdup ("unknown");
 return false;
#else
 mach_msg_type_number_t count = THREAD_BASIC_INFO_COUNT;
 thread_identifier_info_data_t identifier_info;
 kern_return_t kr = thread_info (thread->port, THREAD_BASIC_INFO,
  (thread_info_t)&thread->basic_info, &count);
 if (kr != KERN_SUCCESS) {
  eprintf ("Fail to get thread_basic_info\n");
  return false;
 }
 count = THREAD_IDENTIFIER_INFO_COUNT;
 kr = thread_info (thread->port, THREAD_IDENTIFIER_INFO,
     (thread_info_t)&identifier_info, &count);
 if (kr != KERN_SUCCESS) {
  eprintf ("Fail to get thread_identifier_info\n");
  return false;
 }
 R_FREE (thread->name);
#if TARGET_OS_IPHONE

 thread->name = strdup ("unknown");
#else
 struct proc_threadinfo proc_threadinfo;
 int ret_proc = proc_pidinfo (dbg->pid, PROC_PIDTHREADINFO,
     identifier_info.thread_handle,
     &proc_threadinfo, PROC_PIDTHREADINFO_SIZE);
 if (ret_proc && proc_threadinfo.pth_name[0]) {
  thread->name = strdup (proc_threadinfo.pth_name);
 } else {
  thread->name = strdup ("unknown");
 }
#endif
#endif
 return true;
}

static xnu_thread_t *xnu_get_thread_with_info(RDebug *dbg, thread_t port) {
 xnu_thread_t *thread = R_NEW0 (xnu_thread_t);
 if (!thread) {
  return NULL;
 }
 thread->port = port;
 if (!xnu_fill_info_thread (dbg, thread)) {
  free (thread->name);
  thread->name = strdup ("unknown");
 }
 return thread;
}

static int xnu_update_thread_info(RDebug *dbg, xnu_thread_t *thread) {
 if (!xnu_fill_info_thread (dbg, thread)) {
  free (thread->name);
  thread->name = strdup ("unknown");
 }
 return true;
}

static int thread_find(thread_t *port, xnu_thread_t *a) {
 return (a && port && (a->port == *port))? 0: 1;
}

static int xnu_update_thread_list(RDebug *dbg) {
 thread_array_t thread_list = NULL;
 unsigned int thread_count = 0;
 xnu_thread_t *thread;
 kern_return_t kr;
 task_t task;
 int i;

 if (!dbg->threads) {
  dbg->threads = r_list_newf ((RListFree)&xnu_thread_free);
  if (!dbg->threads) {
   return false;
  }
 }


 task = pid_to_task (dbg->pid);
 if (!task) {
  return false;
 }
 kr = task_threads (task, &thread_list, &thread_count);
 if (kr != KERN_SUCCESS) {


  eprintf ("Failed to get list of task's threads\n");
  return false;
 }
 if (r_list_empty (dbg->threads)) {

  for (i = 0; i < thread_count; i++) {
   thread = xnu_get_thread_with_info (dbg, thread_list[i]);
   if (!thread) {
    eprintf ("Failed to fill_thread\n");
    continue;
   }
   if (!r_list_append (dbg->threads, thread)) {
    eprintf ("Failed to add thread to list\n");
    xnu_thread_free (thread);
   }
  }
 } else {
  RListIter *iter, *iter2;


  r_list_foreach_safe (dbg->threads, iter, iter2, thread) {
   bool flag = true;

   for (i = 0; i < thread_count; i++) {
    if (thread->port == thread_list[i]) {
     flag = false;
     break;
    }
   }
   if (flag) {


    r_list_delete (dbg->threads, iter);
   } else {

    xnu_update_thread_info (dbg, thread);
   }
  }

  for (i = 0; i < thread_count; i++) {
   xnu_thread_t *t;
   iter = r_list_find (dbg->threads, &thread_list[i],
         (RListComparator)&thread_find);

   if (iter) {

    kr = mach_port_deallocate (mach_task_self (),
          thread_list[i]);
    if (kr != KERN_SUCCESS) {
     eprintf ("Failed to deallocate port\n");
    }
    continue;
   }

   t = xnu_get_thread_with_info (dbg, thread_list[i]);
   r_list_append (dbg->threads, t);
  }
 }

 (void)vm_deallocate (mach_task_self (), (mach_vm_address_t)thread_list,
   thread_count * sizeof (thread_t));
 return true;
}
#endif
