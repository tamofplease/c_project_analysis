# 0 "project/radare2/libr/debug/p/native/xnu/xnu_threads.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/debug/p/native/xnu/xnu_threads.h"
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
