# 0 "project/radare2/shlr/mpc/mpc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/mpc/mpc.c"
# 1 "project/radare2/shlr/mpc/mpc.h" 1
# 17 "project/radare2/shlr/mpc/mpc.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4

# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4



typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 2 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 2 3 4
# 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 150 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 213 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_ymm_reg
{
 char __ymm_reg[32];
};
# 245 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_zmm_reg
{
 char __zmm_reg[64];
};
# 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_opmask_reg
{
 char __opmask_reg[8];
};
# 281 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};


struct __darwin_i386_avx512_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_opmask_reg __fpu_k0;
 struct __darwin_opmask_reg __fpu_k1;
 struct __darwin_opmask_reg __fpu_k2;
 struct __darwin_opmask_reg __fpu_k3;
 struct __darwin_opmask_reg __fpu_k4;
 struct __darwin_opmask_reg __fpu_k5;
 struct __darwin_opmask_reg __fpu_k6;
 struct __darwin_opmask_reg __fpu_k7;
 struct __darwin_ymm_reg __fpu_zmmh0;
 struct __darwin_ymm_reg __fpu_zmmh1;
 struct __darwin_ymm_reg __fpu_zmmh2;
 struct __darwin_ymm_reg __fpu_zmmh3;
 struct __darwin_ymm_reg __fpu_zmmh4;
 struct __darwin_ymm_reg __fpu_zmmh5;
 struct __darwin_ymm_reg __fpu_zmmh6;
 struct __darwin_ymm_reg __fpu_zmmh7;
};
# 575 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 595 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};


struct __x86_instruction_state
{
        int __insn_stream_valid_bytes;
        int __insn_offset;
 int __out_of_synch;





        __uint8_t __insn_bytes[(2448 - 64 - 4)];

 __uint8_t __insn_cacheline[64];
};


struct __last_branch_record
{
 __uint64_t __from_ip;
 __uint64_t __to_ip;
 __uint32_t __mispredict : 1,
   __tsx_abort : 1,
   __in_tsx : 1,
   __cycle_count: 16,
   __reserved : 13;
};


struct __last_branch_state
{
        int __lbr_count;
 __uint32_t __lbr_supported_tsx : 1,
     __lbr_supported_cycle_count : 1,
     __reserved : 30;

 struct __last_branch_record __lbrs[32];
};
# 702 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __x86_pagein_state
{
 int __pagein_error;
};







struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 771 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_full_state64
{
 struct __darwin_x86_thread_state64 __ss64;
 __uint64_t __ds;
 __uint64_t __es;
 __uint64_t __ss;
 __uint64_t __gsbase;
};
# 794 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};


struct __darwin_x86_avx512_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
 struct __darwin_opmask_reg __fpu_k0;
 struct __darwin_opmask_reg __fpu_k1;
 struct __darwin_opmask_reg __fpu_k2;
 struct __darwin_opmask_reg __fpu_k3;
 struct __darwin_opmask_reg __fpu_k4;
 struct __darwin_opmask_reg __fpu_k5;
 struct __darwin_opmask_reg __fpu_k6;
 struct __darwin_opmask_reg __fpu_k7;
 struct __darwin_ymm_reg __fpu_zmmh0;
 struct __darwin_ymm_reg __fpu_zmmh1;
 struct __darwin_ymm_reg __fpu_zmmh2;
 struct __darwin_ymm_reg __fpu_zmmh3;
 struct __darwin_ymm_reg __fpu_zmmh4;
 struct __darwin_ymm_reg __fpu_zmmh5;
 struct __darwin_ymm_reg __fpu_zmmh6;
 struct __darwin_ymm_reg __fpu_zmmh7;
 struct __darwin_ymm_reg __fpu_zmmh8;
 struct __darwin_ymm_reg __fpu_zmmh9;
 struct __darwin_ymm_reg __fpu_zmmh10;
 struct __darwin_ymm_reg __fpu_zmmh11;
 struct __darwin_ymm_reg __fpu_zmmh12;
 struct __darwin_ymm_reg __fpu_zmmh13;
 struct __darwin_ymm_reg __fpu_zmmh14;
 struct __darwin_ymm_reg __fpu_zmmh15;
 struct __darwin_zmm_reg __fpu_zmm16;
 struct __darwin_zmm_reg __fpu_zmm17;
 struct __darwin_zmm_reg __fpu_zmm18;
 struct __darwin_zmm_reg __fpu_zmm19;
 struct __darwin_zmm_reg __fpu_zmm20;
 struct __darwin_zmm_reg __fpu_zmm21;
 struct __darwin_zmm_reg __fpu_zmm22;
 struct __darwin_zmm_reg __fpu_zmm23;
 struct __darwin_zmm_reg __fpu_zmm24;
 struct __darwin_zmm_reg __fpu_zmm25;
 struct __darwin_zmm_reg __fpu_zmm26;
 struct __darwin_zmm_reg __fpu_zmm27;
 struct __darwin_zmm_reg __fpu_zmm28;
 struct __darwin_zmm_reg __fpu_zmm29;
 struct __darwin_zmm_reg __fpu_zmm30;
 struct __darwin_zmm_reg __fpu_zmm31;
};
# 1252 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 1272 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 1300 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};



struct __darwin_mcontext_avx512_32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx512_state __fs;
};
# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};


struct __darwin_mcontext_avx64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};



struct __darwin_mcontext_avx512_64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};


struct __darwin_mcontext_avx512_64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 2 3 4



struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4

    void(*signal(int, void (*)(int)))(int);

# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 32 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 67 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

typedef struct rusage_info_v5 rusage_info_current;
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 1 3 4
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
 __uint16_t _data
 )
{
 return (__uint16_t)((_data << 8) | (_data >> 8));
}

static inline
__uint32_t
_OSSwapInt32(
 __uint32_t _data
 )
{



 __asm__ ("bswap   %0" : "+r" (_data));
 return _data;

}
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
 __uint64_t _data
 )
{
 __asm__ ("bswap   %0" : "+r" (_data));
 return _data;
}
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 2 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 2 3 4
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
      w_Coredump:1,
      w_Retcode:8,
      w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
      w_Stopsig:8,
      w_Filler:16;






 } w_S;
};
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 3 4

void *alloca(size_t);

# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 3 4


void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void free(void *);
void *realloc(void *__ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1)));




void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;

int posix_memalign(void **__memptr, size_t __alignment, size_t __size) ;


# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (* )(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* __compar)(const void *, const void *));

div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));

char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);


int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);

void qsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));
int rand(void) ;

void srand(unsigned) ;
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4



int system(const char *) __asm("_" "system" );



size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) ;
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) ;
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) ;
long nrand48(unsigned short[3]) ;
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) ;


int putenv(char *) __asm("_" "putenv" );
long random(void) ;
int rand_r(unsigned *) ;

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 261 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
   
   
   
    ;
void arc4random_buf(void * __buf, size_t __nbytes) ;
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) ;







char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") ;
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
# 309 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





int mergesort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





void psort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *))
     ;





void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *))
     ;





void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
 ;
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *__ptr, size_t __size) __attribute__((alloc_size(2)));
long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
 ;

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;








# 18 "project/radare2/shlr/mpc/mpc.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 78 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 3 4


int renameat(int, const char *, int, const char *) ;






int renamex_np(const char *, const char *, unsigned int) ;
int renameatx_np(int, const char *, int, const char *, unsigned int) ;




# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _close)(void *);
 int (* _read) (void *, char *, int);
 fpos_t (* _seek) (void *, fpos_t, int);
 int (* _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;
# 79 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;

# 155 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *) __attribute__((__cold__));
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);



__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0))) ;

# 218 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 3 4


char *ctermid(char *);


# 220 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4




FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);

# 241 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

int pclose(FILE *) ;



FILE *popen(const char *, const char *) __asm("_" "popen" ) ;


# 262 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

int __srget(FILE *);
int __svfscanf(FILE *, const char *, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);








extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 299 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);




__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );

# 338 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 339 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));

# 363 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 364 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) ;
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) ;
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode) ;
FILE *open_memstream(char **__bufp, size_t *__sizep) ;









extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (* )(void *, char *, int),
                 int (* )(void *, const char *, int),
                 fpos_t (* )(void *, fpos_t, int),
                 int (* )(void *));

# 421 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 2 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 422 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 19 "project/radare2/shlr/mpc/mpc.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 20 "project/radare2/shlr/mpc/mpc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);

# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

char *strtok_r(char *__str, const char *__sep, char **__lasts);

# 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);

# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) ;
char *strndup(const char *__s1, size_t __n) ;
size_t strnlen(const char *__s1, size_t __n) ;
char *strsignal(int __sig);






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) ;









void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) ;
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) ;
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) ;
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) ;

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);



int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);



int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 3 4



int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) ;
int ffsll(long long) ;
int fls(int) ;
int flsl(long) ;
int flsll(long long) ;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 1 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 21 "project/radare2/shlr/mpc/mpc.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 1 3 4
# 48 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4

# 59 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 126 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 146 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 189 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinited(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinff(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfd(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnand(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormald(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitd(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750796873653722224568e-38F;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= ((double)2.22507385850720138309023271733240406e-308L);
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626267781732175260e-4932L;
}
# 323 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 567 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float __inff(void)
 ;
extern double __inf(void)
 ;
extern long double __infl(void)
 ;
extern float __nan(void)
 ;
# 603 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float __exp10f(float) ;
extern double __exp10(double) ;





extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 620 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;
# 651 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double);
extern int signgam;
# 758 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern long int rinttol(double)
 ;

extern long int roundtol(double)
 ;

extern double drem(double, double)
 ;

extern int finite(double)
 ;

extern double gamma(double)
 ;

extern double significand(double)
 ;



struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};





# 22 "project/radare2/shlr/mpc/mpc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 23 "project/radare2/shlr/mpc/mpc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 3 4
typedef __darwin_wint_t wint_t;
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 2 3 4
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4

unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


extern __inline __attribute__((__gnu_inline__)) int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4

int __maskrune(__darwin_ct_rune_t, unsigned long);



extern __inline __attribute__((__gnu_inline__)) int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4

__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



extern __inline __attribute__((__gnu_inline__)) int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}






extern __inline __attribute__((__gnu_inline__)) int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


extern __inline __attribute__((__gnu_inline__)) int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


extern __inline __attribute__((__gnu_inline__)) int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
toascii(int _c)
{
 return (_c & 0x7F);
}

extern __inline __attribute__((__gnu_inline__)) int
tolower(int _c)
{
        return (__tolower(_c));
}

extern __inline __attribute__((__gnu_inline__)) int
toupper(int _c)
{
        return (__toupper(_c));
}


extern __inline __attribute__((__gnu_inline__)) int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

extern __inline __attribute__((__gnu_inline__)) int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

extern __inline __attribute__((__gnu_inline__)) int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 2 3 4
# 24 "project/radare2/shlr/mpc/mpc.h" 2






# 29 "project/radare2/shlr/mpc/mpc.h"
typedef struct {
  long pos;
  long row;
  long col;
  int term;
} mpc_state_t;





typedef struct {
  mpc_state_t state;
  int expected_num;
  char *filename;
  char *failure;
  char **expected;
  char received;
} mpc_err_t;

void mpc_err_delete(mpc_err_t *e);
char *mpc_err_string(mpc_err_t *e);
void mpc_err_print(mpc_err_t *e);
void mpc_err_print_to(mpc_err_t *e, FILE *f);





typedef void mpc_val_t;

typedef union {
  mpc_err_t *error;
  mpc_val_t *output;
} mpc_result_t;

struct mpc_parser_t;
typedef struct mpc_parser_t mpc_parser_t;

int mpc_parse(const char *filename, const char *string, mpc_parser_t *p, mpc_result_t *r);
int mpc_nparse(const char *filename, const char *string, size_t length, mpc_parser_t *p, mpc_result_t *r);
int mpc_parse_file(const char *filename, FILE *file, mpc_parser_t *p, mpc_result_t *r);
int mpc_parse_pipe(const char *filename, FILE *pipe, mpc_parser_t *p, mpc_result_t *r);
int mpc_parse_contents(const char *filename, mpc_parser_t *p, mpc_result_t *r);





typedef void(*mpc_dtor_t)(mpc_val_t*);
typedef mpc_val_t*(*mpc_ctor_t)(void);

typedef mpc_val_t*(*mpc_apply_t)(mpc_val_t*);
typedef mpc_val_t*(*mpc_apply_to_t)(mpc_val_t*,void*);
typedef mpc_val_t*(*mpc_fold_t)(int,mpc_val_t**);

typedef int(*mpc_check_t)(mpc_val_t**);
typedef int(*mpc_check_with_t)(mpc_val_t**,void*);





mpc_parser_t *mpc_new(const char *name);
mpc_parser_t *mpc_copy(mpc_parser_t *a);
mpc_parser_t *mpc_define(mpc_parser_t *p, mpc_parser_t *a);
mpc_parser_t *mpc_undefine(mpc_parser_t *p);

void mpc_delete(mpc_parser_t *p);
void mpc_cleanup(int n, ...);





mpc_parser_t *mpc_any(void);
mpc_parser_t *mpc_char(char c);
mpc_parser_t *mpc_range(char s, char e);
mpc_parser_t *mpc_oneof(const char *s);
mpc_parser_t *mpc_noneof(const char *s);
mpc_parser_t *mpc_satisfy(int(*f)(char));
mpc_parser_t *mpc_string(const char *s);





mpc_parser_t *mpc_pass(void);
mpc_parser_t *mpc_fail(const char *m);
mpc_parser_t *mpc_failf(const char *fmt, ...);
mpc_parser_t *mpc_lift(mpc_ctor_t f);
mpc_parser_t *mpc_lift_val(mpc_val_t *x);
mpc_parser_t *mpc_anchor(int(*f)(char,char));
mpc_parser_t *mpc_state(void);





mpc_parser_t *mpc_expect(mpc_parser_t *a, const char *e);
mpc_parser_t *mpc_expectf(mpc_parser_t *a, const char *fmt, ...);
mpc_parser_t *mpc_apply(mpc_parser_t *a, mpc_apply_t f);
mpc_parser_t *mpc_apply_to(mpc_parser_t *a, mpc_apply_to_t f, void *x);
mpc_parser_t *mpc_check(mpc_parser_t *a, mpc_dtor_t da, mpc_check_t f, const char *e);
mpc_parser_t *mpc_check_with(mpc_parser_t *a, mpc_dtor_t da, mpc_check_with_t f, void *x, const char *e);
mpc_parser_t *mpc_checkf(mpc_parser_t *a, mpc_dtor_t da, mpc_check_t f, const char *fmt, ...);
mpc_parser_t *mpc_check_withf(mpc_parser_t *a, mpc_dtor_t da, mpc_check_with_t f, void *x, const char *fmt, ...);

mpc_parser_t *mpc_not(mpc_parser_t *a, mpc_dtor_t da);
mpc_parser_t *mpc_not_lift(mpc_parser_t *a, mpc_dtor_t da, mpc_ctor_t lf);
mpc_parser_t *mpc_maybe(mpc_parser_t *a);
mpc_parser_t *mpc_maybe_lift(mpc_parser_t *a, mpc_ctor_t lf);

mpc_parser_t *mpc_many(mpc_fold_t f, mpc_parser_t *a);
mpc_parser_t *mpc_many1(mpc_fold_t f, mpc_parser_t *a);
mpc_parser_t *mpc_count(int n, mpc_fold_t f, mpc_parser_t *a, mpc_dtor_t da);

mpc_parser_t *mpc_or(int n, ...);
mpc_parser_t *mpc_and(int n, mpc_fold_t f, ...);

mpc_parser_t *mpc_predictive(mpc_parser_t *a);





mpc_parser_t *mpc_eoi(void);
mpc_parser_t *mpc_soi(void);

mpc_parser_t *mpc_boundary(void);
mpc_parser_t *mpc_boundary_newline(void);

mpc_parser_t *mpc_whitespace(void);
mpc_parser_t *mpc_whitespaces(void);
mpc_parser_t *mpc_blank(void);

mpc_parser_t *mpc_newline(void);
mpc_parser_t *mpc_tab(void);
mpc_parser_t *mpc_escape(void);

mpc_parser_t *mpc_digit(void);
mpc_parser_t *mpc_hexdigit(void);
mpc_parser_t *mpc_octdigit(void);
mpc_parser_t *mpc_digits(void);
mpc_parser_t *mpc_hexdigits(void);
mpc_parser_t *mpc_octdigits(void);

mpc_parser_t *mpc_lower(void);
mpc_parser_t *mpc_upper(void);
mpc_parser_t *mpc_alpha(void);
mpc_parser_t *mpc_underscore(void);
mpc_parser_t *mpc_alphanum(void);

mpc_parser_t *mpc_int(void);
mpc_parser_t *mpc_hex(void);
mpc_parser_t *mpc_oct(void);
mpc_parser_t *mpc_number(void);

mpc_parser_t *mpc_real(void);
mpc_parser_t *mpc_float(void);

mpc_parser_t *mpc_char_lit(void);
mpc_parser_t *mpc_string_lit(void);
mpc_parser_t *mpc_regex_lit(void);

mpc_parser_t *mpc_ident(void);





mpc_parser_t *mpc_startwith(mpc_parser_t *a);
mpc_parser_t *mpc_endwith(mpc_parser_t *a, mpc_dtor_t da);
mpc_parser_t *mpc_whole(mpc_parser_t *a, mpc_dtor_t da);

mpc_parser_t *mpc_stripl(mpc_parser_t *a);
mpc_parser_t *mpc_stripr(mpc_parser_t *a);
mpc_parser_t *mpc_strip(mpc_parser_t *a);
mpc_parser_t *mpc_tok(mpc_parser_t *a);
mpc_parser_t *mpc_sym(const char *s);
mpc_parser_t *mpc_total(mpc_parser_t *a, mpc_dtor_t da);

mpc_parser_t *mpc_between(mpc_parser_t *a, mpc_dtor_t ad, const char *o, const char *c);
mpc_parser_t *mpc_parens(mpc_parser_t *a, mpc_dtor_t ad);
mpc_parser_t *mpc_braces(mpc_parser_t *a, mpc_dtor_t ad);
mpc_parser_t *mpc_brackets(mpc_parser_t *a, mpc_dtor_t ad);
mpc_parser_t *mpc_squares(mpc_parser_t *a, mpc_dtor_t ad);

mpc_parser_t *mpc_tok_between(mpc_parser_t *a, mpc_dtor_t ad, const char *o, const char *c);
mpc_parser_t *mpc_tok_parens(mpc_parser_t *a, mpc_dtor_t ad);
mpc_parser_t *mpc_tok_braces(mpc_parser_t *a, mpc_dtor_t ad);
mpc_parser_t *mpc_tok_brackets(mpc_parser_t *a, mpc_dtor_t ad);
mpc_parser_t *mpc_tok_squares(mpc_parser_t *a, mpc_dtor_t ad);





void mpcf_dtor_null(mpc_val_t *x);

mpc_val_t *mpcf_ctor_null(void);
mpc_val_t *mpcf_ctor_str(void);

mpc_val_t *mpcf_free(mpc_val_t *x);
mpc_val_t *mpcf_int(mpc_val_t *x);
mpc_val_t *mpcf_hex(mpc_val_t *x);
mpc_val_t *mpcf_oct(mpc_val_t *x);
mpc_val_t *mpcf_float(mpc_val_t *x);
mpc_val_t *mpcf_strtriml(mpc_val_t *x);
mpc_val_t *mpcf_strtrimr(mpc_val_t *x);
mpc_val_t *mpcf_strtrim(mpc_val_t *x);

mpc_val_t *mpcf_escape(mpc_val_t *x);
mpc_val_t *mpcf_escape_regex(mpc_val_t *x);
mpc_val_t *mpcf_escape_string_raw(mpc_val_t *x);
mpc_val_t *mpcf_escape_char_raw(mpc_val_t *x);

mpc_val_t *mpcf_unescape(mpc_val_t *x);
mpc_val_t *mpcf_unescape_regex(mpc_val_t *x);
mpc_val_t *mpcf_unescape_string_raw(mpc_val_t *x);
mpc_val_t *mpcf_unescape_char_raw(mpc_val_t *x);

mpc_val_t *mpcf_null(int n, mpc_val_t** xs);
mpc_val_t *mpcf_fst(int n, mpc_val_t** xs);
mpc_val_t *mpcf_snd(int n, mpc_val_t** xs);
mpc_val_t *mpcf_trd(int n, mpc_val_t** xs);

mpc_val_t *mpcf_fst_free(int n, mpc_val_t** xs);
mpc_val_t *mpcf_snd_free(int n, mpc_val_t** xs);
mpc_val_t *mpcf_trd_free(int n, mpc_val_t** xs);
mpc_val_t *mpcf_all_free(int n, mpc_val_t** xs);

mpc_val_t *mpcf_freefold(int n, mpc_val_t** xs);
mpc_val_t *mpcf_strfold(int n, mpc_val_t** xs);
mpc_val_t *mpcf_maths(int n, mpc_val_t** xs);





enum {
  MPC_RE_DEFAULT = 0,
  MPC_RE_M = 1,
  MPC_RE_S = 2,
  MPC_RE_MULTILINE = 1,
  MPC_RE_DOTALL = 2
};

mpc_parser_t *mpc_re(const char *re);
mpc_parser_t *mpc_re_mode(const char *re, int mode);





typedef struct mpc_ast_t {
  char *tag;
  char *contents;
  mpc_state_t state;
  int children_num;
  struct mpc_ast_t** children;
} mpc_ast_t;

mpc_ast_t *mpc_ast_new(const char *tag, const char *contents);
mpc_ast_t *mpc_ast_build(int n, const char *tag, ...);
mpc_ast_t *mpc_ast_add_root(mpc_ast_t *a);
mpc_ast_t *mpc_ast_add_child(mpc_ast_t *r, mpc_ast_t *a);
mpc_ast_t *mpc_ast_add_tag(mpc_ast_t *a, const char *t);
mpc_ast_t *mpc_ast_add_root_tag(mpc_ast_t *a, const char *t);
mpc_ast_t *mpc_ast_tag(mpc_ast_t *a, const char *t);
mpc_ast_t *mpc_ast_state(mpc_ast_t *a, mpc_state_t s);

void mpc_ast_delete(mpc_ast_t *a);
void mpc_ast_print(mpc_ast_t *a);
void mpc_ast_print_to(mpc_ast_t *a, FILE *fp);

int mpc_ast_get_index(mpc_ast_t *ast, const char *tag);
int mpc_ast_get_index_lb(mpc_ast_t *ast, const char *tag, int lb);
mpc_ast_t *mpc_ast_get_child(mpc_ast_t *ast, const char *tag);
mpc_ast_t *mpc_ast_get_child_lb(mpc_ast_t *ast, const char *tag, int lb);

typedef enum {
  mpc_ast_trav_order_pre,
  mpc_ast_trav_order_post
} mpc_ast_trav_order_t;

typedef struct mpc_ast_trav_t {
  mpc_ast_t *curr_node;
  struct mpc_ast_trav_t *parent;
  int curr_child;
  mpc_ast_trav_order_t order;
} mpc_ast_trav_t;

mpc_ast_trav_t *mpc_ast_traverse_start(mpc_ast_t *ast,
                                       mpc_ast_trav_order_t order);

mpc_ast_t *mpc_ast_traverse_next(mpc_ast_trav_t **trav);

void mpc_ast_traverse_free(mpc_ast_trav_t **trav);




int mpc_ast_eq(mpc_ast_t *a, mpc_ast_t *b);

mpc_val_t *mpcf_fold_ast(int n, mpc_val_t **as);
mpc_val_t *mpcf_str_ast(mpc_val_t *c);
mpc_val_t *mpcf_state_ast(int n, mpc_val_t **xs);

mpc_parser_t *mpca_tag(mpc_parser_t *a, const char *t);
mpc_parser_t *mpca_add_tag(mpc_parser_t *a, const char *t);
mpc_parser_t *mpca_root(mpc_parser_t *a);
mpc_parser_t *mpca_state(mpc_parser_t *a);
mpc_parser_t *mpca_total(mpc_parser_t *a);

mpc_parser_t *mpca_not(mpc_parser_t *a);
mpc_parser_t *mpca_maybe(mpc_parser_t *a);

mpc_parser_t *mpca_many(mpc_parser_t *a);
mpc_parser_t *mpca_many1(mpc_parser_t *a);
mpc_parser_t *mpca_count(int n, mpc_parser_t *a);

mpc_parser_t *mpca_or(int n, ...);
mpc_parser_t *mpca_and(int n, ...);

enum {
  MPCA_LANG_DEFAULT = 0,
  MPCA_LANG_PREDICTIVE = 1,
  MPCA_LANG_WHITESPACE_SENSITIVE = 2
};

mpc_parser_t *mpca_grammar(int flags, const char *grammar, ...);

mpc_err_t *mpca_lang(int flags, const char *language, ...);
mpc_err_t *mpca_lang_file(int flags, FILE *f, ...);
mpc_err_t *mpca_lang_pipe(int flags, FILE *f, ...);
mpc_err_t *mpca_lang_contents(int flags, const char *filename, ...);






void mpc_print(mpc_parser_t *p);
void mpc_optimise(mpc_parser_t *p);
void mpc_stats(mpc_parser_t *p);

int mpc_test_pass(mpc_parser_t *p, const char *s, const void *d,
  int(*tester)(const void*, const void*),
  mpc_dtor_t destructor,
  void(*printer)(const void*));

int mpc_test_fail(mpc_parser_t *p, const char *s, const void *d,
  int(*tester)(const void*, const void*),
  mpc_dtor_t destructor,
  void(*printer)(const void*));
# 2 "project/radare2/shlr/mpc/mpc.c" 2





static mpc_state_t mpc_state_invalid(void) {
  mpc_state_t s;
  s.pos = -1;
  s.row = -1;
  s.col = -1;
  s.term = 0;
  return s;
}

static mpc_state_t mpc_state_new(void) {
  mpc_state_t s;
  s.pos = 0;
  s.row = 0;
  s.col = 0;
  s.term = 0;
  return s;
}
# 60 "project/radare2/shlr/mpc/mpc.c"
enum {
  MPC_INPUT_STRING = 0,
  MPC_INPUT_FILE = 1,
  MPC_INPUT_PIPE = 2
};

enum {
  MPC_INPUT_MARKS_MIN = 32
};

enum {
  MPC_INPUT_MEM_NUM = 512
};

typedef struct {
  char mem[64];
} mpc_mem_t;

typedef struct {

  int type;
  char *filename;
  mpc_state_t state;

  char *string;
  char *buffer;
  FILE *file;

  int suppress;
  int backtrack;
  int marks_slots;
  int marks_num;
  mpc_state_t *marks;

  char *lasts;
  char last;

  size_t mem_index;
  char mem_full[MPC_INPUT_MEM_NUM];
  mpc_mem_t mem[MPC_INPUT_MEM_NUM];

} mpc_input_t;

static mpc_input_t *mpc_input_new_string(const char *filename, const char *string) {

  mpc_input_t *i = malloc(sizeof(mpc_input_t));

  i->filename = malloc(strlen(filename) + 1);
  
# 108 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 108 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 108 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 108 "project/radare2/shlr/mpc/mpc.c"
 filename
# 108 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 108 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 108 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 108 "project/radare2/shlr/mpc/mpc.c"
                              ;
  i->type = MPC_INPUT_STRING;

  i->state = mpc_state_new();

  i->string = malloc(strlen(string) + 1);
  
# 114 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 114 "project/radare2/shlr/mpc/mpc.c"
 i->string
# 114 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 114 "project/radare2/shlr/mpc/mpc.c"
 string
# 114 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 114 "project/radare2/shlr/mpc/mpc.c"
 i->string
# 114 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 114 "project/radare2/shlr/mpc/mpc.c"
                          ;
  i->buffer = 
# 115 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 115 "project/radare2/shlr/mpc/mpc.c"
                 ;
  i->file = 
# 116 "project/radare2/shlr/mpc/mpc.c" 3 4
           ((void *)0)
# 116 "project/radare2/shlr/mpc/mpc.c"
               ;

  i->suppress = 0;
  i->backtrack = 1;
  i->marks_num = 0;
  i->marks_slots = MPC_INPUT_MARKS_MIN;
  i->marks = malloc(sizeof(mpc_state_t) * i->marks_slots);
  i->lasts = malloc(sizeof(char) * i->marks_slots);
  i->last = '\0';

  i->mem_index = 0;
  
# 127 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memset_chk (
# 127 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 127 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 127 "project/radare2/shlr/mpc/mpc.c"
 0, sizeof(char) * MPC_INPUT_MEM_NUM
# 127 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 127 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 127 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 127 "project/radare2/shlr/mpc/mpc.c"
                                                         ;

  return i;
}

static mpc_input_t *mpc_input_new_nstring(const char *filename, const char *string, size_t length) {

  mpc_input_t *i = malloc(sizeof(mpc_input_t));

  i->filename = malloc(strlen(filename) + 1);
  
# 137 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 137 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 137 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 137 "project/radare2/shlr/mpc/mpc.c"
 filename
# 137 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 137 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 137 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 137 "project/radare2/shlr/mpc/mpc.c"
                              ;
  i->type = MPC_INPUT_STRING;

  i->state = mpc_state_new();

  i->string = malloc(length + 1);
  
# 143 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strncpy_chk (
# 143 "project/radare2/shlr/mpc/mpc.c"
 i->string
# 143 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 143 "project/radare2/shlr/mpc/mpc.c"
 string, length
# 143 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 143 "project/radare2/shlr/mpc/mpc.c"
 i->string
# 143 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 143 "project/radare2/shlr/mpc/mpc.c"
                                   ;
  i->string[length] = '\0';
  i->buffer = 
# 145 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 145 "project/radare2/shlr/mpc/mpc.c"
                 ;
  i->file = 
# 146 "project/radare2/shlr/mpc/mpc.c" 3 4
           ((void *)0)
# 146 "project/radare2/shlr/mpc/mpc.c"
               ;

  i->suppress = 0;
  i->backtrack = 1;
  i->marks_num = 0;
  i->marks_slots = MPC_INPUT_MARKS_MIN;
  i->marks = malloc(sizeof(mpc_state_t) * i->marks_slots);
  i->lasts = malloc(sizeof(char) * i->marks_slots);
  i->last = '\0';

  i->mem_index = 0;
  
# 157 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memset_chk (
# 157 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 157 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 157 "project/radare2/shlr/mpc/mpc.c"
 0, sizeof(char) * MPC_INPUT_MEM_NUM
# 157 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 157 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 157 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 157 "project/radare2/shlr/mpc/mpc.c"
                                                         ;

  return i;

}

static mpc_input_t *mpc_input_new_pipe(const char *filename, FILE *pipe) {

  mpc_input_t *i = malloc(sizeof(mpc_input_t));

  i->filename = malloc(strlen(filename) + 1);
  
# 168 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 168 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 168 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 168 "project/radare2/shlr/mpc/mpc.c"
 filename
# 168 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 168 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 168 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 168 "project/radare2/shlr/mpc/mpc.c"
                              ;

  i->type = MPC_INPUT_PIPE;
  i->state = mpc_state_new();

  i->string = 
# 173 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 173 "project/radare2/shlr/mpc/mpc.c"
                 ;
  i->buffer = 
# 174 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 174 "project/radare2/shlr/mpc/mpc.c"
                 ;
  i->file = pipe;

  i->suppress = 0;
  i->backtrack = 1;
  i->marks_num = 0;
  i->marks_slots = MPC_INPUT_MARKS_MIN;
  i->marks = malloc(sizeof(mpc_state_t) * i->marks_slots);
  i->lasts = malloc(sizeof(char) * i->marks_slots);
  i->last = '\0';

  i->mem_index = 0;
  
# 186 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memset_chk (
# 186 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 186 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 186 "project/radare2/shlr/mpc/mpc.c"
 0, sizeof(char) * MPC_INPUT_MEM_NUM
# 186 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 186 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 186 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 186 "project/radare2/shlr/mpc/mpc.c"
                                                         ;

  return i;

}

static mpc_input_t *mpc_input_new_file(const char *filename, FILE *file) {

  mpc_input_t *i = malloc(sizeof(mpc_input_t));

  i->filename = malloc(strlen(filename) + 1);
  
# 197 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 197 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 197 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 197 "project/radare2/shlr/mpc/mpc.c"
 filename
# 197 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 197 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 197 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 197 "project/radare2/shlr/mpc/mpc.c"
                              ;
  i->type = MPC_INPUT_FILE;
  i->state = mpc_state_new();

  i->string = 
# 201 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 201 "project/radare2/shlr/mpc/mpc.c"
                 ;
  i->buffer = 
# 202 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 202 "project/radare2/shlr/mpc/mpc.c"
                 ;
  i->file = file;

  i->suppress = 0;
  i->backtrack = 1;
  i->marks_num = 0;
  i->marks_slots = MPC_INPUT_MARKS_MIN;
  i->marks = malloc(sizeof(mpc_state_t) * i->marks_slots);
  i->lasts = malloc(sizeof(char) * i->marks_slots);
  i->last = '\0';

  i->mem_index = 0;
  
# 214 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memset_chk (
# 214 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 214 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 214 "project/radare2/shlr/mpc/mpc.c"
 0, sizeof(char) * MPC_INPUT_MEM_NUM
# 214 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 214 "project/radare2/shlr/mpc/mpc.c"
 i->mem_full
# 214 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 214 "project/radare2/shlr/mpc/mpc.c"
                                                         ;

  return i;
}

static void mpc_input_delete(mpc_input_t *i) {

  free(i->filename);

  if (i->type == MPC_INPUT_STRING) { free(i->string); }
  if (i->type == MPC_INPUT_PIPE) { free(i->buffer); }

  free(i->marks);
  free(i->lasts);
  free(i);
}

static int mpc_mem_ptr(mpc_input_t *i, void *p) {
  return
    (char*)p >= (char*)(i->mem) &&
    (char*)p < (char*)(i->mem) + (MPC_INPUT_MEM_NUM * sizeof(mpc_mem_t));
}

static void *mpc_malloc(mpc_input_t *i, size_t n) {
  size_t j;
  char *p;

  if (n > sizeof(mpc_mem_t)) { return malloc(n); }

  j = i->mem_index;
  do {
    if (!i->mem_full[i->mem_index]) {
      p = (void*)(i->mem + i->mem_index);
      i->mem_full[i->mem_index] = 1;
      i->mem_index = (i->mem_index+1) % MPC_INPUT_MEM_NUM;
      return p;
    }
    i->mem_index = (i->mem_index+1) % MPC_INPUT_MEM_NUM;
  } while (j != i->mem_index);

  return malloc(n);
}

static void *mpc_calloc(mpc_input_t *i, size_t n, size_t m) {
  char *x = mpc_malloc(i, n * m);
  
# 259 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memset_chk (
# 259 "project/radare2/shlr/mpc/mpc.c"
 x
# 259 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 259 "project/radare2/shlr/mpc/mpc.c"
 0, n * m
# 259 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 259 "project/radare2/shlr/mpc/mpc.c"
 x
# 259 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 259 "project/radare2/shlr/mpc/mpc.c"
                    ;
  return x;
}

static void mpc_free(mpc_input_t *i, void *p) {
  size_t j;
  if (!mpc_mem_ptr(i, p)) { free(p); return; }
  j = ((size_t)(((char*)p) - ((char*)i->mem))) / sizeof(mpc_mem_t);
  i->mem_full[j] = 0;
}

static void *mpc_realloc(mpc_input_t *i, void *p, size_t n) {

  char *q = 
# 272 "project/radare2/shlr/mpc/mpc.c" 3 4
           ((void *)0)
# 272 "project/radare2/shlr/mpc/mpc.c"
               ;

  if (!mpc_mem_ptr(i, p)) { return realloc(p, n); }

  if (n > sizeof(mpc_mem_t)) {
    q = malloc(n);
    
# 278 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___memcpy_chk (
# 278 "project/radare2/shlr/mpc/mpc.c"
   q
# 278 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 278 "project/radare2/shlr/mpc/mpc.c"
   p, sizeof(mpc_mem_t)
# 278 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 278 "project/radare2/shlr/mpc/mpc.c"
   q
# 278 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 0))
# 278 "project/radare2/shlr/mpc/mpc.c"
                                  ;
    mpc_free(i, p);
    return q;
  }

  return p;
}

static void *mpc_export(mpc_input_t *i, void *p) {
  char *q = 
# 287 "project/radare2/shlr/mpc/mpc.c" 3 4
           ((void *)0)
# 287 "project/radare2/shlr/mpc/mpc.c"
               ;
  if (!mpc_mem_ptr(i, p)) { return p; }
  q = malloc(sizeof(mpc_mem_t));
  
# 290 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memcpy_chk (
# 290 "project/radare2/shlr/mpc/mpc.c"
 q
# 290 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 290 "project/radare2/shlr/mpc/mpc.c"
 p, sizeof(mpc_mem_t)
# 290 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 290 "project/radare2/shlr/mpc/mpc.c"
 q
# 290 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 290 "project/radare2/shlr/mpc/mpc.c"
                                ;
  mpc_free(i, p);
  return q;
}

static void mpc_input_backtrack_disable(mpc_input_t *i) { i->backtrack--; }
static void mpc_input_backtrack_enable(mpc_input_t *i) { i->backtrack++; }

static void mpc_input_suppress_disable(mpc_input_t *i) { i->suppress--; }
static void mpc_input_suppress_enable(mpc_input_t *i) { i->suppress++; }

static void mpc_input_mark(mpc_input_t *i) {

  if (i->backtrack < 1) { return; }

  i->marks_num++;

  if (i->marks_num > i->marks_slots) {
    i->marks_slots = i->marks_num + i->marks_num / 2;
    i->marks = realloc(i->marks, sizeof(mpc_state_t) * i->marks_slots);
    i->lasts = realloc(i->lasts, sizeof(char) * i->marks_slots);
  }

  i->marks[i->marks_num-1] = i->state;
  i->lasts[i->marks_num-1] = i->last;

  if (i->type == MPC_INPUT_PIPE && i->marks_num == 1) {
    i->buffer = calloc(1, 1);
  }

}

static void mpc_input_unmark(mpc_input_t *i) {
  int j;

  if (i->backtrack < 1) { return; }

  i->marks_num--;

  if (i->marks_slots > i->marks_num + i->marks_num / 2
  && i->marks_slots > MPC_INPUT_MARKS_MIN) {
    i->marks_slots =
      i->marks_num > MPC_INPUT_MARKS_MIN ?
      i->marks_num : MPC_INPUT_MARKS_MIN;
    i->marks = realloc(i->marks, sizeof(mpc_state_t) * i->marks_slots);
    i->lasts = realloc(i->lasts, sizeof(char) * i->marks_slots);
  }

  if (i->type == MPC_INPUT_PIPE && i->marks_num == 0) {
    for (j = strlen(i->buffer) - 1; j >= 0; j--)
      ungetc(i->buffer[j], i->file);

    free(i->buffer);
    i->buffer = 
# 343 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 343 "project/radare2/shlr/mpc/mpc.c"
                   ;
  }

}

static void mpc_input_rewind(mpc_input_t *i) {

  if (i->backtrack < 1) { return; }

  i->state = i->marks[i->marks_num-1];
  i->last = i->lasts[i->marks_num-1];

  if (i->type == MPC_INPUT_FILE) {
    fseek(i->file, i->state.pos, 
# 356 "project/radare2/shlr/mpc/mpc.c" 3 4
                                0
# 356 "project/radare2/shlr/mpc/mpc.c"
                                        );
  }

  mpc_input_unmark(i);
}

static int mpc_input_buffer_in_range(mpc_input_t *i) {
  return i->state.pos < (long)(strlen(i->buffer) + i->marks[0].pos);
}

static char mpc_input_buffer_get(mpc_input_t *i) {
  return i->buffer[i->state.pos - i->marks[0].pos];
}

static char mpc_input_getc(mpc_input_t *i) {

  char c = '\0';

  switch (i->type) {

    case MPC_INPUT_STRING: return i->string[i->state.pos];
    case MPC_INPUT_FILE: c = fgetc(i->file); return c;
    case MPC_INPUT_PIPE:

      if (!i->buffer) { c = getc(i->file); return c; }

      if (i->buffer && mpc_input_buffer_in_range(i)) {
        c = mpc_input_buffer_get(i);
        return c;
      } else {
        c = getc(i->file);
        return c;
      }

    default: return c;
  }
}

static char mpc_input_peekc(mpc_input_t *i) {

  char c = '\0';

  switch (i->type) {
    case MPC_INPUT_STRING: return i->string[i->state.pos];
    case MPC_INPUT_FILE:

      c = fgetc(i->file);
      if (feof(i->file)) { return '\0'; }

      fseek(i->file, -1, 
# 405 "project/radare2/shlr/mpc/mpc.c" 3 4
                        1
# 405 "project/radare2/shlr/mpc/mpc.c"
                                );
      return c;

    case MPC_INPUT_PIPE:

      if (!i->buffer) {
        c = getc(i->file);
        if (feof(i->file)) { return '\0'; }
        ungetc(c, i->file);
        return c;
      }

      if (i->buffer && mpc_input_buffer_in_range(i)) {
        return mpc_input_buffer_get(i);
      } else {
        c = getc(i->file);
        if (feof(i->file)) { return '\0'; }
        ungetc(c, i->file);
        return c;
      }

    default: return c;
  }

}

static int mpc_input_terminated(mpc_input_t *i) {
  return mpc_input_peekc(i) == '\0';
}

static int mpc_input_failure(mpc_input_t *i, char c) {

  switch (i->type) {
    case MPC_INPUT_STRING: { break; }
    case MPC_INPUT_FILE: fseek(i->file, -1, 
# 439 "project/radare2/shlr/mpc/mpc.c" 3 4
                                           1
# 439 "project/radare2/shlr/mpc/mpc.c"
                                                   ); { break; }
    case MPC_INPUT_PIPE: {

      if (!i->buffer) { ungetc(c, i->file); break; }

      if (i->buffer && mpc_input_buffer_in_range(i)) {
        break;
      } else {
        ungetc(c, i->file);
      }
    }
    default: { break; }
  }
  return 0;
}

static int mpc_input_success(mpc_input_t *i, char c, char **o) {

  if (i->type == MPC_INPUT_PIPE
  && i->buffer && !mpc_input_buffer_in_range(i)) {
    i->buffer = realloc(i->buffer, strlen(i->buffer) + 2);
    i->buffer[strlen(i->buffer) + 1] = '\0';
    i->buffer[strlen(i->buffer) + 0] = c;
  }

  i->last = c;
  i->state.pos++;
  i->state.col++;

  if (c == '\n') {
    i->state.col = 0;
    i->state.row++;
  }

  if (o) {
    (*o) = mpc_malloc(i, 2);
    (*o)[0] = c;
    (*o)[1] = '\0';
  }

  return 1;
}

static int mpc_input_any(mpc_input_t *i, char **o) {
  char x;
  if (mpc_input_terminated(i)) { return 0; }
  x = mpc_input_getc(i);
  return mpc_input_success(i, x, o);
}

static int mpc_input_char(mpc_input_t *i, char c, char **o) {
  char x;
  if (mpc_input_terminated(i)) { return 0; }
  x = mpc_input_getc(i);
  return x == c ? mpc_input_success(i, x, o) : mpc_input_failure(i, x);
}

static int mpc_input_range(mpc_input_t *i, char c, char d, char **o) {
  char x;
  if (mpc_input_terminated(i)) { return 0; }
  x = mpc_input_getc(i);
  return x >= c && x <= d ? mpc_input_success(i, x, o) : mpc_input_failure(i, x);
}

static int mpc_input_oneof(mpc_input_t *i, const char *c, char **o) {
  char x;
  if (mpc_input_terminated(i)) { return 0; }
  x = mpc_input_getc(i);
  return strchr(c, x) != 0 ? mpc_input_success(i, x, o) : mpc_input_failure(i, x);
}

static int mpc_input_noneof(mpc_input_t *i, const char *c, char **o) {
  char x;
  if (mpc_input_terminated(i)) { return 0; }
  x = mpc_input_getc(i);
  return strchr(c, x) == 0 ? mpc_input_success(i, x, o) : mpc_input_failure(i, x);
}

static int mpc_input_satisfy(mpc_input_t *i, int(*cond)(char), char **o) {
  char x;
  if (mpc_input_terminated(i)) { return 0; }
  x = mpc_input_getc(i);
  return cond(x) ? mpc_input_success(i, x, o) : mpc_input_failure(i, x);
}

static int mpc_input_string(mpc_input_t *i, const char *c, char **o) {

  const char *x = c;

  mpc_input_mark(i);
  while (*x) {
    if (!mpc_input_char(i, *x, 
# 530 "project/radare2/shlr/mpc/mpc.c" 3 4
                              ((void *)0)
# 530 "project/radare2/shlr/mpc/mpc.c"
                                  )) {
      mpc_input_rewind(i);
      return 0;
    }
    x++;
  }
  mpc_input_unmark(i);

  *o = mpc_malloc(i, strlen(c) + 1);
  
# 539 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 539 "project/radare2/shlr/mpc/mpc.c"
 *o
# 539 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 539 "project/radare2/shlr/mpc/mpc.c"
 c
# 539 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 539 "project/radare2/shlr/mpc/mpc.c"
 *o
# 539 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 539 "project/radare2/shlr/mpc/mpc.c"
              ;
  return 1;
}

static int mpc_input_anchor(mpc_input_t* i, int(*f)(char,char), char **o) {
  *o = 
# 544 "project/radare2/shlr/mpc/mpc.c" 3 4
      ((void *)0)
# 544 "project/radare2/shlr/mpc/mpc.c"
          ;
  return f(i->last, mpc_input_peekc(i));
}

static int mpc_input_soi(mpc_input_t* i, char **o) {
  *o = 
# 549 "project/radare2/shlr/mpc/mpc.c" 3 4
      ((void *)0)
# 549 "project/radare2/shlr/mpc/mpc.c"
          ;
  return i->last == '\0';
}

static int mpc_input_eoi(mpc_input_t* i, char **o) {
  *o = 
# 554 "project/radare2/shlr/mpc/mpc.c" 3 4
      ((void *)0)
# 554 "project/radare2/shlr/mpc/mpc.c"
          ;
  if (i->state.term) {
    return 0;
  } else if (mpc_input_terminated(i)) {
    i->state.term = 1;
    return 1;
  } else {
    return 0;
  }
}

static mpc_state_t *mpc_input_state_copy(mpc_input_t *i) {
  mpc_state_t *r = mpc_malloc(i, sizeof(mpc_state_t));
  
# 567 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memcpy_chk (
# 567 "project/radare2/shlr/mpc/mpc.c"
 r
# 567 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 567 "project/radare2/shlr/mpc/mpc.c"
 &i->state, sizeof(mpc_state_t)
# 567 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 567 "project/radare2/shlr/mpc/mpc.c"
 r
# 567 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 567 "project/radare2/shlr/mpc/mpc.c"
                                          ;
  return r;
}





void mpc_err_delete(mpc_err_t *x) {
  int i;
  for (i = 0; i < x->expected_num; i++) { free(x->expected[i]); }
  free(x->expected);
  free(x->filename);
  free(x->failure);
  free(x);
}

void mpc_err_print(mpc_err_t *x) {
  mpc_err_print_to(x, 
# 585 "project/radare2/shlr/mpc/mpc.c" 3 4
                     __stdoutp
# 585 "project/radare2/shlr/mpc/mpc.c"
                           );
}

void mpc_err_print_to(mpc_err_t *x, FILE *f) {
  char *str = mpc_err_string(x);
  fprintf(f, "%s", str);
  free(str);
}

static void mpc_err_string_cat(char *buffer, int *pos, int *max, char const *fmt, ...) {

  int left = ((*max) - (*pos));
  va_list va;
  
# 598 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 598 "project/radare2/shlr/mpc/mpc.c"
 va
# 598 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 598 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 598 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 598 "project/radare2/shlr/mpc/mpc.c"
                  ;
  if (left < 0) { left = 0;}
  (*pos) += 
# 600 "project/radare2/shlr/mpc/mpc.c" 3 4
           __builtin___vsprintf_chk (
# 600 "project/radare2/shlr/mpc/mpc.c"
           buffer + (*pos)
# 600 "project/radare2/shlr/mpc/mpc.c" 3 4
           , 0, __builtin_object_size (
# 600 "project/radare2/shlr/mpc/mpc.c"
           buffer + (*pos)
# 600 "project/radare2/shlr/mpc/mpc.c" 3 4
           , 2 > 1 ? 1 : 0), 
# 600 "project/radare2/shlr/mpc/mpc.c"
           fmt
# 600 "project/radare2/shlr/mpc/mpc.c" 3 4
           , 
# 600 "project/radare2/shlr/mpc/mpc.c"
           va
# 600 "project/radare2/shlr/mpc/mpc.c" 3 4
           )
# 600 "project/radare2/shlr/mpc/mpc.c"
                                             ;
  
# 601 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 601 "project/radare2/shlr/mpc/mpc.c"
 va
# 601 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 601 "project/radare2/shlr/mpc/mpc.c"
           ;
}

static char char_unescape_buffer[4];

static const char *mpc_err_char_unescape(char c) {

  char_unescape_buffer[0] = '\'';
  char_unescape_buffer[1] = ' ';
  char_unescape_buffer[2] = '\'';
  char_unescape_buffer[3] = '\0';

  switch (c) {
    case '\a': return "bell";
    case '\b': return "backspace";
    case '\f': return "formfeed";
    case '\r': return "carriage return";
    case '\v': return "vertical tab";
    case '\0': return "end of input";
    case '\n': return "newline";
    case '\t': return "tab";
    case ' ' : return "space";
    default:
      char_unescape_buffer[1] = c;
      return char_unescape_buffer;
  }

}

char *mpc_err_string(mpc_err_t *x) {

  int i;
  int pos = 0;
  int max = 1023;
  char *buffer = calloc(1, 1024);

  if (x->failure) {
    mpc_err_string_cat(buffer, &pos, &max,
    "%s: error: %s\n", x->filename, x->failure);
    return buffer;
  }

  mpc_err_string_cat(buffer, &pos, &max,
    "%s:%li:%li: error: expected ", x->filename, x->state.row+1, x->state.col+1);

  if (x->expected_num == 0) { mpc_err_string_cat(buffer, &pos, &max, "ERROR: NOTHING EXPECTED"); }
  if (x->expected_num == 1) { mpc_err_string_cat(buffer, &pos, &max, "%s", x->expected[0]); }
  if (x->expected_num >= 2) {

    for (i = 0; i < x->expected_num-2; i++) {
      mpc_err_string_cat(buffer, &pos, &max, "%s, ", x->expected[i]);
    }

    mpc_err_string_cat(buffer, &pos, &max, "%s or %s",
      x->expected[x->expected_num-2],
      x->expected[x->expected_num-1]);
  }

  mpc_err_string_cat(buffer, &pos, &max, " at ");
  mpc_err_string_cat(buffer, &pos, &max, mpc_err_char_unescape(x->received));
  mpc_err_string_cat(buffer, &pos, &max, "\n");

  return realloc(buffer, strlen(buffer) + 1);
}

static mpc_err_t *mpc_err_new(mpc_input_t *i, const char *expected) {
  mpc_err_t *x;
  if (i->suppress) { return 
# 668 "project/radare2/shlr/mpc/mpc.c" 3 4
                           ((void *)0)
# 668 "project/radare2/shlr/mpc/mpc.c"
                               ; }
  x = mpc_malloc(i, sizeof(mpc_err_t));
  x->filename = mpc_malloc(i, strlen(i->filename) + 1);
  
# 671 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 671 "project/radare2/shlr/mpc/mpc.c"
 x->filename
# 671 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 671 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 671 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 671 "project/radare2/shlr/mpc/mpc.c"
 x->filename
# 671 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 671 "project/radare2/shlr/mpc/mpc.c"
                                 ;
  x->state = i->state;
  x->expected_num = 1;
  x->expected = mpc_malloc(i, sizeof(char*));
  x->expected[0] = mpc_malloc(i, strlen(expected) + 1);
  
# 676 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 676 "project/radare2/shlr/mpc/mpc.c"
 x->expected[0]
# 676 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 676 "project/radare2/shlr/mpc/mpc.c"
 expected
# 676 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 676 "project/radare2/shlr/mpc/mpc.c"
 x->expected[0]
# 676 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 676 "project/radare2/shlr/mpc/mpc.c"
                                 ;
  x->failure = 
# 677 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 677 "project/radare2/shlr/mpc/mpc.c"
                  ;
  x->received = mpc_input_peekc(i);
  return x;
}

static mpc_err_t *mpc_err_fail(mpc_input_t *i, const char *failure) {
  mpc_err_t *x;
  if (i->suppress) { return 
# 684 "project/radare2/shlr/mpc/mpc.c" 3 4
                           ((void *)0)
# 684 "project/radare2/shlr/mpc/mpc.c"
                               ; }
  x = mpc_malloc(i, sizeof(mpc_err_t));
  x->filename = mpc_malloc(i, strlen(i->filename) + 1);
  
# 687 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 687 "project/radare2/shlr/mpc/mpc.c"
 x->filename
# 687 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 687 "project/radare2/shlr/mpc/mpc.c"
 i->filename
# 687 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 687 "project/radare2/shlr/mpc/mpc.c"
 x->filename
# 687 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 687 "project/radare2/shlr/mpc/mpc.c"
                                 ;
  x->state = i->state;
  x->expected_num = 0;
  x->expected = 
# 690 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 690 "project/radare2/shlr/mpc/mpc.c"
                   ;
  x->failure = mpc_malloc(i, strlen(failure) + 1);
  
# 692 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 692 "project/radare2/shlr/mpc/mpc.c"
 x->failure
# 692 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 692 "project/radare2/shlr/mpc/mpc.c"
 failure
# 692 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 692 "project/radare2/shlr/mpc/mpc.c"
 x->failure
# 692 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 692 "project/radare2/shlr/mpc/mpc.c"
                            ;
  x->received = ' ';
  return x;
}

static mpc_err_t *mpc_err_file(const char *filename, const char *failure) {
  mpc_err_t *x;
  x = malloc(sizeof(mpc_err_t));
  x->filename = malloc(strlen(filename) + 1);
  
# 701 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 701 "project/radare2/shlr/mpc/mpc.c"
 x->filename
# 701 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 701 "project/radare2/shlr/mpc/mpc.c"
 filename
# 701 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 701 "project/radare2/shlr/mpc/mpc.c"
 x->filename
# 701 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 701 "project/radare2/shlr/mpc/mpc.c"
                              ;
  x->state = mpc_state_new();
  x->expected_num = 0;
  x->expected = 
# 704 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 704 "project/radare2/shlr/mpc/mpc.c"
                   ;
  x->failure = malloc(strlen(failure) + 1);
  
# 706 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 706 "project/radare2/shlr/mpc/mpc.c"
 x->failure
# 706 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 706 "project/radare2/shlr/mpc/mpc.c"
 failure
# 706 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 706 "project/radare2/shlr/mpc/mpc.c"
 x->failure
# 706 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 706 "project/radare2/shlr/mpc/mpc.c"
                            ;
  x->received = ' ';
  return x;
}

static void mpc_err_delete_internal(mpc_input_t *i, mpc_err_t *x) {
  int j;
  if (x == 
# 713 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 713 "project/radare2/shlr/mpc/mpc.c"
              ) { return; }
  for (j = 0; j < x->expected_num; j++) { mpc_free(i, x->expected[j]); }
  mpc_free(i, x->expected);
  mpc_free(i, x->filename);
  mpc_free(i, x->failure);
  mpc_free(i, x);
}

static mpc_err_t *mpc_err_export(mpc_input_t *i, mpc_err_t *x) {
  int j;
  for (j = 0; j < x->expected_num; j++) {
    x->expected[j] = mpc_export(i, x->expected[j]);
  }
  x->expected = mpc_export(i, x->expected);
  x->filename = mpc_export(i, x->filename);
  x->failure = mpc_export(i, x->failure);
  return mpc_export(i, x);
}

static int mpc_err_contains_expected(mpc_input_t *i, mpc_err_t *x, char *expected) {
  int j;
  (void)i;
  for (j = 0; j < x->expected_num; j++) {
    if (strcmp(x->expected[j], expected) == 0) { return 1; }
  }
  return 0;
}

static void mpc_err_add_expected(mpc_input_t *i, mpc_err_t *x, char *expected) {
  (void)i;
  x->expected_num++;
  x->expected = mpc_realloc(i, x->expected, sizeof(char*) * x->expected_num);
  x->expected[x->expected_num-1] = mpc_malloc(i, strlen(expected) + 1);
  
# 746 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 746 "project/radare2/shlr/mpc/mpc.c"
 x->expected[x->expected_num-1]
# 746 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 746 "project/radare2/shlr/mpc/mpc.c"
 expected
# 746 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 746 "project/radare2/shlr/mpc/mpc.c"
 x->expected[x->expected_num-1]
# 746 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 746 "project/radare2/shlr/mpc/mpc.c"
                                                 ;
}

static mpc_err_t *mpc_err_or(mpc_input_t *i, mpc_err_t** x, int n) {

  int j, k, fst;
  mpc_err_t *e;

  fst = -1;
  for (j = 0; j < n; j++) {
    if (x[j] != 
# 756 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 756 "project/radare2/shlr/mpc/mpc.c"
                   ) { fst = j; }
  }

  if (fst == -1) { return 
# 759 "project/radare2/shlr/mpc/mpc.c" 3 4
                         ((void *)0)
# 759 "project/radare2/shlr/mpc/mpc.c"
                             ; }

  e = mpc_malloc(i, sizeof(mpc_err_t));
  e->state = mpc_state_invalid();
  e->expected_num = 0;
  e->expected = 
# 764 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 764 "project/radare2/shlr/mpc/mpc.c"
                   ;
  e->failure = 
# 765 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 765 "project/radare2/shlr/mpc/mpc.c"
                  ;
  e->filename = mpc_malloc(i, strlen(x[fst]->filename)+1);
  
# 767 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 767 "project/radare2/shlr/mpc/mpc.c"
 e->filename
# 767 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 767 "project/radare2/shlr/mpc/mpc.c"
 x[fst]->filename
# 767 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 767 "project/radare2/shlr/mpc/mpc.c"
 e->filename
# 767 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 767 "project/radare2/shlr/mpc/mpc.c"
                                      ;

  for (j = 0; j < n; j++) {
    if (x[j] == 
# 770 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 770 "project/radare2/shlr/mpc/mpc.c"
                   ) { continue; }
    if (x[j]->state.pos > e->state.pos) { e->state = x[j]->state; }
  }

  for (j = 0; j < n; j++) {
    if (x[j] == 
# 775 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 775 "project/radare2/shlr/mpc/mpc.c"
                   ) { continue; }
    if (x[j]->state.pos < e->state.pos) { continue; }

    if (x[j]->failure) {
      e->failure = mpc_malloc(i, strlen(x[j]->failure)+1);
      
# 780 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcpy_chk (
# 780 "project/radare2/shlr/mpc/mpc.c"
     e->failure
# 780 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 780 "project/radare2/shlr/mpc/mpc.c"
     x[j]->failure
# 780 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 780 "project/radare2/shlr/mpc/mpc.c"
     e->failure
# 780 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 780 "project/radare2/shlr/mpc/mpc.c"
                                      ;
      break;
    }

    e->received = x[j]->received;

    for (k = 0; k < x[j]->expected_num; k++) {
      if (!mpc_err_contains_expected(i, e, x[j]->expected[k])) {
        mpc_err_add_expected(i, e, x[j]->expected[k]);
      }
    }
  }

  for (j = 0; j < n; j++) {
    if (x[j] == 
# 794 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 794 "project/radare2/shlr/mpc/mpc.c"
                   ) { continue; }
    mpc_err_delete_internal(i, x[j]);
  }

  return e;
}

static mpc_err_t *mpc_err_repeat(mpc_input_t *i, mpc_err_t *x, const char *prefix) {

  int j = 0;
  size_t l = 0;
  char *expect = 
# 805 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 805 "project/radare2/shlr/mpc/mpc.c"
                    ;

  if (x == 
# 807 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 807 "project/radare2/shlr/mpc/mpc.c"
              ) { return 
# 807 "project/radare2/shlr/mpc/mpc.c" 3 4
                         ((void *)0)
# 807 "project/radare2/shlr/mpc/mpc.c"
                             ; }

  if (x->expected_num == 0) {
    expect = mpc_calloc(i, 1, 1);
    x->expected_num = 1;
    x->expected = mpc_realloc(i, x->expected, sizeof(char*) * x->expected_num);
    x->expected[0] = expect;
    return x;
  }

  else if (x->expected_num == 1) {
    expect = mpc_malloc(i, strlen(prefix) + strlen(x->expected[0]) + 1);
    
# 819 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcpy_chk (
# 819 "project/radare2/shlr/mpc/mpc.c"
   expect
# 819 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 819 "project/radare2/shlr/mpc/mpc.c"
   prefix
# 819 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 819 "project/radare2/shlr/mpc/mpc.c"
   expect
# 819 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 819 "project/radare2/shlr/mpc/mpc.c"
                         ;
    
# 820 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcat_chk (
# 820 "project/radare2/shlr/mpc/mpc.c"
   expect
# 820 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 820 "project/radare2/shlr/mpc/mpc.c"
   x->expected[0]
# 820 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 820 "project/radare2/shlr/mpc/mpc.c"
   expect
# 820 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 820 "project/radare2/shlr/mpc/mpc.c"
                                 ;
    mpc_free(i, x->expected[0]);
    x->expected[0] = expect;
    return x;
  }

  else if (x->expected_num > 1) {

    l += strlen(prefix);
    for (j = 0; j < x->expected_num-2; j++) {
      l += strlen(x->expected[j]) + strlen(", ");
    }
    l += strlen(x->expected[x->expected_num-2]);
    l += strlen(" or ");
    l += strlen(x->expected[x->expected_num-1]);

    expect = mpc_malloc(i, l + 1);

    
# 838 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcpy_chk (
# 838 "project/radare2/shlr/mpc/mpc.c"
   expect
# 838 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 838 "project/radare2/shlr/mpc/mpc.c"
   prefix
# 838 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 838 "project/radare2/shlr/mpc/mpc.c"
   expect
# 838 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 838 "project/radare2/shlr/mpc/mpc.c"
                         ;
    for (j = 0; j < x->expected_num-2; j++) {
      
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcat_chk (
# 840 "project/radare2/shlr/mpc/mpc.c"
     expect
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 840 "project/radare2/shlr/mpc/mpc.c"
     x->expected[j]
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 840 "project/radare2/shlr/mpc/mpc.c"
     expect
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 840 "project/radare2/shlr/mpc/mpc.c"
                                   ; 
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     __builtin___strcat_chk (
# 840 "project/radare2/shlr/mpc/mpc.c"
                                     expect
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     , 
# 840 "project/radare2/shlr/mpc/mpc.c"
                                     ", "
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     , __builtin_object_size (
# 840 "project/radare2/shlr/mpc/mpc.c"
                                     expect
# 840 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     , 2 > 1 ? 1 : 0))
# 840 "project/radare2/shlr/mpc/mpc.c"
                                                         ;
    }
    
# 842 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcat_chk (
# 842 "project/radare2/shlr/mpc/mpc.c"
   expect
# 842 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 842 "project/radare2/shlr/mpc/mpc.c"
   x->expected[x->expected_num-2]
# 842 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 842 "project/radare2/shlr/mpc/mpc.c"
   expect
# 842 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 842 "project/radare2/shlr/mpc/mpc.c"
                                                 ;
    
# 843 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcat_chk (
# 843 "project/radare2/shlr/mpc/mpc.c"
   expect
# 843 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 843 "project/radare2/shlr/mpc/mpc.c"
   " or "
# 843 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 843 "project/radare2/shlr/mpc/mpc.c"
   expect
# 843 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 843 "project/radare2/shlr/mpc/mpc.c"
                         ;
    
# 844 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcat_chk (
# 844 "project/radare2/shlr/mpc/mpc.c"
   expect
# 844 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 844 "project/radare2/shlr/mpc/mpc.c"
   x->expected[x->expected_num-1]
# 844 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 844 "project/radare2/shlr/mpc/mpc.c"
   expect
# 844 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 844 "project/radare2/shlr/mpc/mpc.c"
                                                 ;

    for (j = 0; j < x->expected_num; j++) { mpc_free(i, x->expected[j]); }

    x->expected_num = 1;
    x->expected = mpc_realloc(i, x->expected, sizeof(char*) * x->expected_num);
    x->expected[0] = expect;
    return x;
  }

  return 
# 854 "project/radare2/shlr/mpc/mpc.c" 3 4
        ((void *)0)
# 854 "project/radare2/shlr/mpc/mpc.c"
            ;
}

static mpc_err_t *mpc_err_many1(mpc_input_t *i, mpc_err_t *x) {
  return mpc_err_repeat(i, x, "one or more of ");
}

static mpc_err_t *mpc_err_count(mpc_input_t *i, mpc_err_t *x, int n) {
  mpc_err_t *y;
  int digits = n/10 + 1;
  char *prefix;
  prefix = mpc_malloc(i, digits + strlen(" of ") + 1);
  
# 866 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___sprintf_chk (
# 866 "project/radare2/shlr/mpc/mpc.c"
 prefix
# 866 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0, __builtin_object_size (
# 866 "project/radare2/shlr/mpc/mpc.c"
 prefix
# 866 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 866 "project/radare2/shlr/mpc/mpc.c"
 "%i of ", n
# 866 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 866 "project/radare2/shlr/mpc/mpc.c"
                             ;
  y = mpc_err_repeat(i, x, prefix);
  mpc_free(i, prefix);
  return y;
}

static mpc_err_t *mpc_err_merge(mpc_input_t *i, mpc_err_t *x, mpc_err_t *y) {
  mpc_err_t *errs[2];
  errs[0] = x;
  errs[1] = y;
  return mpc_err_or(i, errs, 2);
}





enum {
  MPC_TYPE_UNDEFINED = 0,
  MPC_TYPE_PASS = 1,
  MPC_TYPE_FAIL = 2,
  MPC_TYPE_LIFT = 3,
  MPC_TYPE_LIFT_VAL = 4,
  MPC_TYPE_EXPECT = 5,
  MPC_TYPE_ANCHOR = 6,
  MPC_TYPE_STATE = 7,

  MPC_TYPE_ANY = 8,
  MPC_TYPE_SINGLE = 9,
  MPC_TYPE_ONEOF = 10,
  MPC_TYPE_NONEOF = 11,
  MPC_TYPE_RANGE = 12,
  MPC_TYPE_SATISFY = 13,
  MPC_TYPE_STRING = 14,

  MPC_TYPE_APPLY = 15,
  MPC_TYPE_APPLY_TO = 16,
  MPC_TYPE_PREDICT = 17,
  MPC_TYPE_NOT = 18,
  MPC_TYPE_MAYBE = 19,
  MPC_TYPE_MANY = 20,
  MPC_TYPE_MANY1 = 21,
  MPC_TYPE_COUNT = 22,

  MPC_TYPE_OR = 23,
  MPC_TYPE_AND = 24,

  MPC_TYPE_CHECK = 25,
  MPC_TYPE_CHECK_WITH = 26,

  MPC_TYPE_SOI = 27,
  MPC_TYPE_EOI = 28
};

typedef struct { char *m; } mpc_pdata_fail_t;
typedef struct { mpc_ctor_t lf; void *x; } mpc_pdata_lift_t;
typedef struct { mpc_parser_t *x; char *m; } mpc_pdata_expect_t;
typedef struct { int(*f)(char,char); } mpc_pdata_anchor_t;
typedef struct { char x; } mpc_pdata_single_t;
typedef struct { char x; char y; } mpc_pdata_range_t;
typedef struct { int(*f)(char); } mpc_pdata_satisfy_t;
typedef struct { char *x; } mpc_pdata_string_t;
typedef struct { mpc_parser_t *x; mpc_apply_t f; } mpc_pdata_apply_t;
typedef struct { mpc_parser_t *x; mpc_apply_to_t f; void *d; } mpc_pdata_apply_to_t;
typedef struct { mpc_parser_t *x; mpc_dtor_t dx; mpc_check_t f; char *e; } mpc_pdata_check_t;
typedef struct { mpc_parser_t *x; mpc_dtor_t dx; mpc_check_with_t f; void *d; char *e; } mpc_pdata_check_with_t;
typedef struct { mpc_parser_t *x; } mpc_pdata_predict_t;
typedef struct { mpc_parser_t *x; mpc_dtor_t dx; mpc_ctor_t lf; } mpc_pdata_not_t;
typedef struct { int n; mpc_fold_t f; mpc_parser_t *x; mpc_dtor_t dx; } mpc_pdata_repeat_t;
typedef struct { int n; mpc_parser_t **xs; } mpc_pdata_or_t;
typedef struct { int n; mpc_fold_t f; mpc_parser_t **xs; mpc_dtor_t *dxs; } mpc_pdata_and_t;

typedef union {
  mpc_pdata_fail_t fail;
  mpc_pdata_lift_t lift;
  mpc_pdata_expect_t expect;
  mpc_pdata_anchor_t anchor;
  mpc_pdata_single_t single;
  mpc_pdata_range_t range;
  mpc_pdata_satisfy_t satisfy;
  mpc_pdata_string_t string;
  mpc_pdata_apply_t apply;
  mpc_pdata_apply_to_t apply_to;
  mpc_pdata_check_t check;
  mpc_pdata_check_with_t check_with;
  mpc_pdata_predict_t predict;
  mpc_pdata_not_t not;
  mpc_pdata_repeat_t repeat;
  mpc_pdata_and_t and;
  mpc_pdata_or_t or;
} mpc_pdata_t;

struct mpc_parser_t {
  char *name;
  mpc_pdata_t data;
  char type;
  char retained;
};

static mpc_val_t *mpcf_input_nth_free(mpc_input_t *i, int n, mpc_val_t **xs, int x) {
  int j;
  for (j = 0; j < n; j++) { if (j != x) { mpc_free(i, xs[j]); } }
  return xs[x];
}

static mpc_val_t *mpcf_input_fst_free(mpc_input_t *i, int n, mpc_val_t **xs) { return mpcf_input_nth_free(i, n, xs, 0); }
static mpc_val_t *mpcf_input_snd_free(mpc_input_t *i, int n, mpc_val_t **xs) { return mpcf_input_nth_free(i, n, xs, 1); }
static mpc_val_t *mpcf_input_trd_free(mpc_input_t *i, int n, mpc_val_t **xs) { return mpcf_input_nth_free(i, n, xs, 2); }

static mpc_val_t *mpcf_input_strfold(mpc_input_t *i, int n, mpc_val_t **xs) {
  int j;
  size_t l = 0;
  if (n == 0) { return mpc_calloc(i, 1, 1); }
  for (j = 0; j < n; j++) { l += strlen(xs[j]); }
  xs[0] = mpc_realloc(i, xs[0], l + 1);
  for (j = 1; j < n; j++) { 
# 981 "project/radare2/shlr/mpc/mpc.c" 3 4
                           __builtin___strcat_chk (
# 981 "project/radare2/shlr/mpc/mpc.c"
                           xs[0]
# 981 "project/radare2/shlr/mpc/mpc.c" 3 4
                           , 
# 981 "project/radare2/shlr/mpc/mpc.c"
                           xs[j]
# 981 "project/radare2/shlr/mpc/mpc.c" 3 4
                           , __builtin_object_size (
# 981 "project/radare2/shlr/mpc/mpc.c"
                           xs[0]
# 981 "project/radare2/shlr/mpc/mpc.c" 3 4
                           , 2 > 1 ? 1 : 0))
# 981 "project/radare2/shlr/mpc/mpc.c"
                                               ; mpc_free(i, xs[j]); }
  return xs[0];
}

static mpc_val_t *mpcf_input_state_ast(mpc_input_t *i, int n, mpc_val_t **xs) {
  mpc_state_t *s = ((mpc_state_t**)xs)[0];
  mpc_ast_t *a = ((mpc_ast_t**)xs)[1];
  a = mpc_ast_state(a, *s);
  mpc_free(i, s);
  (void) n;
  return a;
}

static mpc_val_t *mpc_parse_fold(mpc_input_t *i, mpc_fold_t f, int n, mpc_val_t **xs) {
  int j;
  if (f == mpcf_null) { return mpcf_null(n, xs); }
  if (f == mpcf_fst) { return mpcf_fst(n, xs); }
  if (f == mpcf_snd) { return mpcf_snd(n, xs); }
  if (f == mpcf_trd) { return mpcf_trd(n, xs); }
  if (f == mpcf_fst_free) { return mpcf_input_fst_free(i, n, xs); }
  if (f == mpcf_snd_free) { return mpcf_input_snd_free(i, n, xs); }
  if (f == mpcf_trd_free) { return mpcf_input_trd_free(i, n, xs); }
  if (f == mpcf_strfold) { return mpcf_input_strfold(i, n, xs); }
  if (f == mpcf_state_ast) { return mpcf_input_state_ast(i, n, xs); }
  for (j = 0; j < n; j++) { xs[j] = mpc_export(i, xs[j]); }
  return f(j, xs);
}

static mpc_val_t *mpcf_input_free(mpc_input_t *i, mpc_val_t *x) {
  mpc_free(i, x);
  return 
# 1011 "project/radare2/shlr/mpc/mpc.c" 3 4
        ((void *)0)
# 1011 "project/radare2/shlr/mpc/mpc.c"
            ;
}

static mpc_val_t *mpcf_input_str_ast(mpc_input_t *i, mpc_val_t *c) {
  mpc_ast_t *a = mpc_ast_new("", c);
  mpc_free(i, c);
  return a;
}

static mpc_val_t *mpc_parse_apply(mpc_input_t *i, mpc_apply_t f, mpc_val_t *x) {
  if (f == mpcf_free) { return mpcf_input_free(i, x); }
  if (f == mpcf_str_ast) { return mpcf_input_str_ast(i, x); }
  return f(mpc_export(i, x));
}

static mpc_val_t *mpc_parse_apply_to(mpc_input_t *i, mpc_apply_to_t f, mpc_val_t *x, mpc_val_t *d) {
  return f(mpc_export(i, x), d);
}

static void mpc_parse_dtor(mpc_input_t *i, mpc_dtor_t d, mpc_val_t *x) {
  if (d == free) { mpc_free(i, x); return; }
  d(mpc_export(i, x));
}

enum {
  MPC_PARSE_STACK_MIN = 4
};
# 1047 "project/radare2/shlr/mpc/mpc.c"
static int mpc_parse_run(mpc_input_t *i, mpc_parser_t *p, mpc_result_t *r, mpc_err_t **e, int depth) {

  int j = 0, k = 0;
  mpc_result_t results_stk[MPC_PARSE_STACK_MIN];
  mpc_result_t *results;
  int results_slots = MPC_PARSE_STACK_MIN;

  if (depth == 1000)
  {
    r->error = mpc_err_fail(i, "Maximum recursion depth exceeded!"); return 0;
  }

  switch (p->type) {



    case MPC_TYPE_ANY: if (mpc_input_any(i, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1063 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1063 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_SINGLE: if (mpc_input_char(i, p->data.single.x, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1064 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1064 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_RANGE: if (mpc_input_range(i, p->data.range.x, p->data.range.y, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1065 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1065 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_ONEOF: if (mpc_input_oneof(i, p->data.string.x, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1066 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1066 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_NONEOF: if (mpc_input_noneof(i, p->data.string.x, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1067 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1067 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_SATISFY: if (mpc_input_satisfy(i, p->data.satisfy.f, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1068 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1068 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_STRING: if (mpc_input_string(i, p->data.string.x, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1069 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1069 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_ANCHOR: if (mpc_input_anchor(i, p->data.anchor.f, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1070 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1070 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_SOI: if (mpc_input_soi(i, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1071 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1071 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };
    case MPC_TYPE_EOI: if (mpc_input_eoi(i, (char**)&r->output)) { r->output = r->output; return 1; } else { r->error = 
# 1072 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 1072 "project/radare2/shlr/mpc/mpc.c"
                          ; return 0; };



    case MPC_TYPE_UNDEFINED: r->error = mpc_err_fail(i, "Parser Undefined!"); return 0;
    case MPC_TYPE_PASS: r->output = 
# 1077 "project/radare2/shlr/mpc/mpc.c" 3 4
                            ((void *)0)
# 1077 "project/radare2/shlr/mpc/mpc.c"
                            ; return 1;
    case MPC_TYPE_FAIL: r->error = mpc_err_fail(i, p->data.fail.m); return 0;
    case MPC_TYPE_LIFT: r->output = p->data.lift.lf(); return 1;
    case MPC_TYPE_LIFT_VAL: r->output = p->data.lift.x; return 1;
    case MPC_TYPE_STATE: r->output = mpc_input_state_copy(i); return 1;



    case MPC_TYPE_APPLY:
      if (mpc_parse_run(i, p->data.apply.x, r, e, depth+1)) {
        r->output = mpc_parse_apply(i, p->data.apply.f, r->output); return 1;
      } else {
        r->error = r->output; return 0;
      }

    case MPC_TYPE_APPLY_TO:
      if (mpc_parse_run(i, p->data.apply_to.x, r, e, depth+1)) {
        r->output = mpc_parse_apply_to(i, p->data.apply_to.f, r->output, p->data.apply_to.d); return 1;
      } else {
        r->error = r->error; return 0;
      }

    case MPC_TYPE_CHECK:
      if (mpc_parse_run(i, p->data.check.x, r, e, depth+1)) {
        if (p->data.check.f(&r->output)) {
          r->output = r->output; return 1;
        } else {
          mpc_parse_dtor(i, p->data.check.dx, r->output);
          r->error = mpc_err_fail(i, p->data.check.e); return 0;
        }
      } else {
        r->error = r->error; return 0;
      }

    case MPC_TYPE_CHECK_WITH:
      if (mpc_parse_run(i, p->data.check_with.x, r, e, depth+1)) {
        if (p->data.check_with.f(&r->output, p->data.check_with.d)) {
          r->output = r->output; return 1;
        } else {
          mpc_parse_dtor(i, p->data.check.dx, r->output);
          r->error = mpc_err_fail(i, p->data.check_with.e); return 0;
        }
      } else {
        r->error = r->error; return 0;
      }

    case MPC_TYPE_EXPECT:
      mpc_input_suppress_enable(i);
      if (mpc_parse_run(i, p->data.expect.x, r, e, depth+1)) {
        mpc_input_suppress_disable(i);
        r->output = r->output; return 1;
      } else {
        mpc_input_suppress_disable(i);
        r->error = mpc_err_new(i, p->data.expect.m); return 0;
      }

    case MPC_TYPE_PREDICT:
      mpc_input_backtrack_disable(i);
      if (mpc_parse_run(i, p->data.predict.x, r, e, depth+1)) {
        mpc_input_backtrack_enable(i);
        r->output = r->output; return 1;
      } else {
        mpc_input_backtrack_enable(i);
        r->error = r->error; return 0;
      }





    case MPC_TYPE_NOT:
      mpc_input_mark(i);
      mpc_input_suppress_enable(i);
      if (mpc_parse_run(i, p->data.not.x, r, e, depth+1)) {
        mpc_input_rewind(i);
        mpc_input_suppress_disable(i);
        mpc_parse_dtor(i, p->data.not.dx, r->output);
        r->error = mpc_err_new(i, "opposite"); return 0;
      } else {
        mpc_input_unmark(i);
        mpc_input_suppress_disable(i);
        r->output = p->data.not.lf(); return 1;
      }

    case MPC_TYPE_MAYBE:
      if (mpc_parse_run(i, p->data.not.x, r, e, depth+1)) {
        r->output = r->output; return 1;
      } else {
        *e = mpc_err_merge(i, *e, r->error);
        r->output = p->data.not.lf(); return 1;
      }



    case MPC_TYPE_MANY:

      results = results_stk;

      while (mpc_parse_run(i, p->data.repeat.x, &results[j], e, depth+1)) {
        j++;
        if (j == MPC_PARSE_STACK_MIN) {
          results_slots = j + j / 2;
          results = mpc_malloc(i, sizeof(mpc_result_t) * results_slots);
          
# 1180 "project/radare2/shlr/mpc/mpc.c" 3 4
         __builtin___memcpy_chk (
# 1180 "project/radare2/shlr/mpc/mpc.c"
         results
# 1180 "project/radare2/shlr/mpc/mpc.c" 3 4
         , 
# 1180 "project/radare2/shlr/mpc/mpc.c"
         results_stk, sizeof(mpc_result_t) * MPC_PARSE_STACK_MIN
# 1180 "project/radare2/shlr/mpc/mpc.c" 3 4
         , __builtin_object_size (
# 1180 "project/radare2/shlr/mpc/mpc.c"
         results
# 1180 "project/radare2/shlr/mpc/mpc.c" 3 4
         , 0))
# 1180 "project/radare2/shlr/mpc/mpc.c"
                                                                                 ;
        } else if (j >= results_slots) {
          results_slots = j + j / 2;
          results = mpc_realloc(i, results, sizeof(mpc_result_t) * results_slots);
        }
      }

      *e = mpc_err_merge(i, *e, results[j].error);

      r->output = mpc_parse_fold(i, p->data.repeat.f, j, (mpc_val_t**)results); if (j >= MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 1

                                                                ;

    case MPC_TYPE_MANY1:

      results = results_stk;

      while (mpc_parse_run(i, p->data.repeat.x, &results[j], e, depth+1)) {
        j++;
        if (j == MPC_PARSE_STACK_MIN) {
          results_slots = j + j / 2;
          results = mpc_malloc(i, sizeof(mpc_result_t) * results_slots);
          
# 1202 "project/radare2/shlr/mpc/mpc.c" 3 4
         __builtin___memcpy_chk (
# 1202 "project/radare2/shlr/mpc/mpc.c"
         results
# 1202 "project/radare2/shlr/mpc/mpc.c" 3 4
         , 
# 1202 "project/radare2/shlr/mpc/mpc.c"
         results_stk, sizeof(mpc_result_t) * MPC_PARSE_STACK_MIN
# 1202 "project/radare2/shlr/mpc/mpc.c" 3 4
         , __builtin_object_size (
# 1202 "project/radare2/shlr/mpc/mpc.c"
         results
# 1202 "project/radare2/shlr/mpc/mpc.c" 3 4
         , 0))
# 1202 "project/radare2/shlr/mpc/mpc.c"
                                                                                 ;
        } else if (j >= results_slots) {
          results_slots = j + j / 2;
          results = mpc_realloc(i, results, sizeof(mpc_result_t) * results_slots);
        }
      }

      if (j == 0) {
        r->error = mpc_err_many1(i, results[j].error); if (j >= MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 0

                                                                  ;
      } else {

        *e = mpc_err_merge(i, *e, results[j].error);

        r->output = mpc_parse_fold(i, p->data.repeat.f, j, (mpc_val_t**)results); if (j >= MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 1

                                                                  ;
      }

    case MPC_TYPE_COUNT:

      results = p->data.repeat.n > MPC_PARSE_STACK_MIN
        ? mpc_malloc(i, sizeof(mpc_result_t) * p->data.repeat.n)
        : results_stk;

      while (mpc_parse_run(i, p->data.repeat.x, &results[j], e, depth+1)) {
        j++;
        if (j == p->data.repeat.n) { break; }
      }

      if (j == p->data.repeat.n) {
        r->output = mpc_parse_fold(i, p->data.repeat.f, j, (mpc_val_t**)results); if (p->data.repeat.n > MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 1

                                                                                ;
      } else {
        for (k = 0; k < j; k++) {
          mpc_parse_dtor(i, p->data.repeat.dx, results[k].output);
        }
        r->error = mpc_err_count(i, results[j].error, p->data.repeat.n); if (p->data.repeat.n > MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 0

                                                                                ;
      }



    case MPC_TYPE_OR:

      if (p->data.or.n == 0) { r->output = 
# 1250 "project/radare2/shlr/mpc/mpc.c" 3 4
                              ((void *)0)
# 1250 "project/radare2/shlr/mpc/mpc.c"
                              ; return 1; }

      results = p->data.or.n > MPC_PARSE_STACK_MIN
        ? mpc_malloc(i, sizeof(mpc_result_t) * p->data.or.n)
        : results_stk;

      for (j = 0; j < p->data.or.n; j++) {
        if (mpc_parse_run(i, p->data.or.xs[j], &results[j], e, depth+1)) {
          r->output = results[j].output; if (p->data.or.n > MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 1
                                                                              ;
        } else {
          *e = mpc_err_merge(i, *e, results[j].error);
        }
      }

      r->error = 
# 1265 "project/radare2/shlr/mpc/mpc.c" 3 4
     ((void *)0)
# 1265 "project/radare2/shlr/mpc/mpc.c"
     ; if (p->data.or.n > MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 0
                                                                          ;

    case MPC_TYPE_AND:

      if (p->data.and.n == 0) { r->output = 
# 1270 "project/radare2/shlr/mpc/mpc.c" 3 4
                               ((void *)0)
# 1270 "project/radare2/shlr/mpc/mpc.c"
                               ; return 1; }

      results = p->data.or.n > MPC_PARSE_STACK_MIN
        ? mpc_malloc(i, sizeof(mpc_result_t) * p->data.or.n)
        : results_stk;

      mpc_input_mark(i);
      for (j = 0; j < p->data.and.n; j++) {
        if (!mpc_parse_run(i, p->data.and.xs[j], &results[j], e, depth+1)) {
          mpc_input_rewind(i);
          for (k = 0; k < j; k++) {
            mpc_parse_dtor(i, p->data.and.dxs[k], results[k].output);
          }
          r->error = results[j].error; if (p->data.or.n > MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 0
                                                                              ;
        }
      }
      mpc_input_unmark(i);
      r->output = mpc_parse_fold(i, p->data.and.f, j, (mpc_val_t**)results); if (p->data.or.n > MPC_PARSE_STACK_MIN) { mpc_free(i, results); }; return 1

                                                                          ;



    default:

      r->error = mpc_err_fail(i, "Unknown Parser Type Id!"); return 0;
  }

  return 0;

}





int mpc_parse_input(mpc_input_t *i, mpc_parser_t *p, mpc_result_t *r) {
  int x;
  mpc_err_t *e = mpc_err_fail(i, "Unknown Error");
  e->state = mpc_state_invalid();
  x = mpc_parse_run(i, p, r, &e, 0);
  if (x) {
    mpc_err_delete_internal(i, e);
    r->output = mpc_export(i, r->output);
  } else {
    r->error = mpc_err_export(i, mpc_err_merge(i, e, r->error));
  }
  return x;
}

int mpc_parse(const char *filename, const char *string, mpc_parser_t *p, mpc_result_t *r) {
  int x;
  mpc_input_t *i = mpc_input_new_string(filename, string);
  x = mpc_parse_input(i, p, r);
  mpc_input_delete(i);
  return x;
}

int mpc_nparse(const char *filename, const char *string, size_t length, mpc_parser_t *p, mpc_result_t *r) {
  int x;
  mpc_input_t *i = mpc_input_new_nstring(filename, string, length);
  x = mpc_parse_input(i, p, r);
  mpc_input_delete(i);
  return x;
}

int mpc_parse_file(const char *filename, FILE *file, mpc_parser_t *p, mpc_result_t *r) {
  int x;
  mpc_input_t *i = mpc_input_new_file(filename, file);
  x = mpc_parse_input(i, p, r);
  mpc_input_delete(i);
  return x;
}

int mpc_parse_pipe(const char *filename, FILE *pipe, mpc_parser_t *p, mpc_result_t *r) {
  int x;
  mpc_input_t *i = mpc_input_new_pipe(filename, pipe);
  x = mpc_parse_input(i, p, r);
  mpc_input_delete(i);
  return x;
}

int mpc_parse_contents(const char *filename, mpc_parser_t *p, mpc_result_t *r) {

  FILE *f = fopen(filename, "rb");
  int res;

  if (f == 
# 1358 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 1358 "project/radare2/shlr/mpc/mpc.c"
              ) {
    r->output = 
# 1359 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 1359 "project/radare2/shlr/mpc/mpc.c"
                   ;
    r->error = mpc_err_file(filename, "Unable to open file!");
    return 0;
  }

  res = mpc_parse_file(filename, f, p, r);
  fclose(f);
  return res;
}





static void mpc_undefine_unretained(mpc_parser_t *p, int force);

static void mpc_undefine_or(mpc_parser_t *p) {

  int i;
  for (i = 0; i < p->data.or.n; i++) {
    mpc_undefine_unretained(p->data.or.xs[i], 0);
  }
  free(p->data.or.xs);

}

static void mpc_undefine_and(mpc_parser_t *p) {

  int i;
  for (i = 0; i < p->data.and.n; i++) {
    mpc_undefine_unretained(p->data.and.xs[i], 0);
  }
  free(p->data.and.xs);
  free(p->data.and.dxs);

}

static void mpc_undefine_unretained(mpc_parser_t *p, int force) {

  if (p->retained && !force) { return; }

  switch (p->type) {

    case MPC_TYPE_FAIL: free(p->data.fail.m); break;

    case MPC_TYPE_ONEOF:
    case MPC_TYPE_NONEOF:
    case MPC_TYPE_STRING:
      free(p->data.string.x);
      break;

    case MPC_TYPE_APPLY: mpc_undefine_unretained(p->data.apply.x, 0); break;
    case MPC_TYPE_APPLY_TO: mpc_undefine_unretained(p->data.apply_to.x, 0); break;
    case MPC_TYPE_PREDICT: mpc_undefine_unretained(p->data.predict.x, 0); break;

    case MPC_TYPE_MAYBE:
    case MPC_TYPE_NOT:
      mpc_undefine_unretained(p->data.not.x, 0);
      break;

    case MPC_TYPE_EXPECT:
      mpc_undefine_unretained(p->data.expect.x, 0);
      free(p->data.expect.m);
      break;

    case MPC_TYPE_MANY:
    case MPC_TYPE_MANY1:
    case MPC_TYPE_COUNT:
      mpc_undefine_unretained(p->data.repeat.x, 0);
      break;

    case MPC_TYPE_OR: mpc_undefine_or(p); break;
    case MPC_TYPE_AND: mpc_undefine_and(p); break;

    case MPC_TYPE_CHECK:
      mpc_undefine_unretained(p->data.check.x, 0);
      free(p->data.check.e);
      break;

    case MPC_TYPE_CHECK_WITH:
      mpc_undefine_unretained(p->data.check_with.x, 0);
      free(p->data.check_with.e);
      break;

    default: break;
  }

  if (!force) {
    free(p->name);
    free(p);
  }

}

void mpc_delete(mpc_parser_t *p) {
  if (p->retained) {

    if (p->type != MPC_TYPE_UNDEFINED) {
      mpc_undefine_unretained(p, 0);
    }

    free(p->name);
    free(p);

  } else {
    mpc_undefine_unretained(p, 0);
  }
}

static void mpc_soft_delete(mpc_val_t *x) {
  mpc_undefine_unretained(x, 0);
}

static mpc_parser_t *mpc_undefined(void) {
  mpc_parser_t *p = calloc(1, sizeof(mpc_parser_t));
  p->retained = 0;
  p->type = MPC_TYPE_UNDEFINED;
  p->name = 
# 1476 "project/radare2/shlr/mpc/mpc.c" 3 4
           ((void *)0)
# 1476 "project/radare2/shlr/mpc/mpc.c"
               ;
  return p;
}

mpc_parser_t *mpc_new(const char *name) {
  mpc_parser_t *p = mpc_undefined();
  p->retained = 1;
  p->name = realloc(p->name, strlen(name) + 1);
  
# 1484 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1484 "project/radare2/shlr/mpc/mpc.c"
 p->name
# 1484 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1484 "project/radare2/shlr/mpc/mpc.c"
 name
# 1484 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1484 "project/radare2/shlr/mpc/mpc.c"
 p->name
# 1484 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1484 "project/radare2/shlr/mpc/mpc.c"
                      ;
  return p;
}

mpc_parser_t *mpc_copy(mpc_parser_t *a) {
  int i = 0;
  mpc_parser_t *p;

  if (a->retained) { return a; }

  p = mpc_undefined();
  p->retained = a->retained;
  p->type = a->type;
  p->data = a->data;

  if (a->name) {
    p->name = malloc(strlen(a->name)+1);
    
# 1501 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcpy_chk (
# 1501 "project/radare2/shlr/mpc/mpc.c"
   p->name
# 1501 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 1501 "project/radare2/shlr/mpc/mpc.c"
   a->name
# 1501 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 1501 "project/radare2/shlr/mpc/mpc.c"
   p->name
# 1501 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 1501 "project/radare2/shlr/mpc/mpc.c"
                           ;
  }

  switch (a->type) {

    case MPC_TYPE_FAIL:
      p->data.fail.m = malloc(strlen(a->data.fail.m)+1);
      
# 1508 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcpy_chk (
# 1508 "project/radare2/shlr/mpc/mpc.c"
     p->data.fail.m
# 1508 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 1508 "project/radare2/shlr/mpc/mpc.c"
     a->data.fail.m
# 1508 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 1508 "project/radare2/shlr/mpc/mpc.c"
     p->data.fail.m
# 1508 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 1508 "project/radare2/shlr/mpc/mpc.c"
                                           ;
    break;

    case MPC_TYPE_ONEOF:
    case MPC_TYPE_NONEOF:
    case MPC_TYPE_STRING:
      p->data.string.x = malloc(strlen(a->data.string.x)+1);
      
# 1515 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcpy_chk (
# 1515 "project/radare2/shlr/mpc/mpc.c"
     p->data.string.x
# 1515 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 1515 "project/radare2/shlr/mpc/mpc.c"
     a->data.string.x
# 1515 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 1515 "project/radare2/shlr/mpc/mpc.c"
     p->data.string.x
# 1515 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 1515 "project/radare2/shlr/mpc/mpc.c"
                                               ;
      break;

    case MPC_TYPE_APPLY: p->data.apply.x = mpc_copy(a->data.apply.x); break;
    case MPC_TYPE_APPLY_TO: p->data.apply_to.x = mpc_copy(a->data.apply_to.x); break;
    case MPC_TYPE_PREDICT: p->data.predict.x = mpc_copy(a->data.predict.x); break;

    case MPC_TYPE_MAYBE:
    case MPC_TYPE_NOT:
      p->data.not.x = mpc_copy(a->data.not.x);
      break;

    case MPC_TYPE_EXPECT:
      p->data.expect.x = mpc_copy(a->data.expect.x);
      p->data.expect.m = malloc(strlen(a->data.expect.m)+1);
      
# 1530 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcpy_chk (
# 1530 "project/radare2/shlr/mpc/mpc.c"
     p->data.expect.m
# 1530 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 1530 "project/radare2/shlr/mpc/mpc.c"
     a->data.expect.m
# 1530 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 1530 "project/radare2/shlr/mpc/mpc.c"
     p->data.expect.m
# 1530 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 1530 "project/radare2/shlr/mpc/mpc.c"
                                               ;
      break;

    case MPC_TYPE_MANY:
    case MPC_TYPE_MANY1:
    case MPC_TYPE_COUNT:
      p->data.repeat.x = mpc_copy(a->data.repeat.x);
      break;

    case MPC_TYPE_OR:
      p->data.or.xs = malloc(a->data.or.n * sizeof(mpc_parser_t*));
      for (i = 0; i < a->data.or.n; i++) {
        p->data.or.xs[i] = mpc_copy(a->data.or.xs[i]);
      }
    break;
    case MPC_TYPE_AND:
      p->data.and.xs = malloc(a->data.and.n * sizeof(mpc_parser_t*));
      for (i = 0; i < a->data.and.n; i++) {
        p->data.and.xs[i] = mpc_copy(a->data.and.xs[i]);
      }
      p->data.and.dxs = malloc((a->data.and.n-1) * sizeof(mpc_dtor_t));
      for (i = 0; i < a->data.and.n-1; i++) {
        p->data.and.dxs[i] = a->data.and.dxs[i];
      }
    break;

    case MPC_TYPE_CHECK:
      p->data.check.x = mpc_copy(a->data.check.x);
      p->data.check.e = malloc(strlen(a->data.check.e)+1);
      
# 1559 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcpy_chk (
# 1559 "project/radare2/shlr/mpc/mpc.c"
     p->data.check.e
# 1559 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 1559 "project/radare2/shlr/mpc/mpc.c"
     a->data.check.e
# 1559 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 1559 "project/radare2/shlr/mpc/mpc.c"
     p->data.check.e
# 1559 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 1559 "project/radare2/shlr/mpc/mpc.c"
                                             ;
      break;
    case MPC_TYPE_CHECK_WITH:
      p->data.check_with.x = mpc_copy(a->data.check_with.x);
      p->data.check_with.e = malloc(strlen(a->data.check_with.e)+1);
      
# 1564 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcpy_chk (
# 1564 "project/radare2/shlr/mpc/mpc.c"
     p->data.check_with.e
# 1564 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 1564 "project/radare2/shlr/mpc/mpc.c"
     a->data.check_with.e
# 1564 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 1564 "project/radare2/shlr/mpc/mpc.c"
     p->data.check_with.e
# 1564 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 1564 "project/radare2/shlr/mpc/mpc.c"
                                                       ;
      break;

    default: break;
  }


  return p;
}

mpc_parser_t *mpc_undefine(mpc_parser_t *p) {
  mpc_undefine_unretained(p, 1);
  p->type = MPC_TYPE_UNDEFINED;
  return p;
}

mpc_parser_t *mpc_define(mpc_parser_t *p, mpc_parser_t *a) {

  if (p->retained) {
    p->type = a->type;
    p->data = a->data;
  } else {
    mpc_parser_t *a2 = mpc_failf("Attempt to assign to Unretained Parser!");
    p->type = a2->type;
    p->data = a2->data;
    free(a2);
  }

  free(a);
  return p;
}

void mpc_cleanup(int n, ...) {
  int i;
  mpc_parser_t **list = malloc(sizeof(mpc_parser_t*) * n);

  va_list va;
  
# 1601 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1601 "project/radare2/shlr/mpc/mpc.c"
 va
# 1601 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1601 "project/radare2/shlr/mpc/mpc.c"
 n
# 1601 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1601 "project/radare2/shlr/mpc/mpc.c"
                ;
  for (i = 0; i < n; i++) { list[i] = 
# 1602 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     __builtin_va_arg(
# 1602 "project/radare2/shlr/mpc/mpc.c"
                                     va
# 1602 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     ,
# 1602 "project/radare2/shlr/mpc/mpc.c"
                                     mpc_parser_t*
# 1602 "project/radare2/shlr/mpc/mpc.c" 3 4
                                     )
# 1602 "project/radare2/shlr/mpc/mpc.c"
                                                              ; }
  for (i = 0; i < n; i++) { mpc_undefine(list[i]); }
  for (i = 0; i < n; i++) { mpc_delete(list[i]); }
  
# 1605 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1605 "project/radare2/shlr/mpc/mpc.c"
 va
# 1605 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1605 "project/radare2/shlr/mpc/mpc.c"
           ;

  free(list);
}

mpc_parser_t *mpc_pass(void) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_PASS;
  return p;
}

mpc_parser_t *mpc_fail(const char *m) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_FAIL;
  p->data.fail.m = malloc(strlen(m) + 1);
  
# 1620 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1620 "project/radare2/shlr/mpc/mpc.c"
 p->data.fail.m
# 1620 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1620 "project/radare2/shlr/mpc/mpc.c"
 m
# 1620 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1620 "project/radare2/shlr/mpc/mpc.c"
 p->data.fail.m
# 1620 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1620 "project/radare2/shlr/mpc/mpc.c"
                          ;
  return p;
}
# 1644 "project/radare2/shlr/mpc/mpc.c"
mpc_parser_t *mpc_failf(const char *fmt, ...) {

  va_list va;
  char *buffer;

  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_FAIL;

  
# 1652 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1652 "project/radare2/shlr/mpc/mpc.c"
 va
# 1652 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1652 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1652 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1652 "project/radare2/shlr/mpc/mpc.c"
                  ;
  buffer = malloc(2048);
  
# 1654 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___vsprintf_chk (
# 1654 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1654 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0, __builtin_object_size (
# 1654 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1654 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 1654 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1654 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1654 "project/radare2/shlr/mpc/mpc.c"
 va
# 1654 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1654 "project/radare2/shlr/mpc/mpc.c"
                          ;
  
# 1655 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1655 "project/radare2/shlr/mpc/mpc.c"
 va
# 1655 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1655 "project/radare2/shlr/mpc/mpc.c"
           ;

  buffer = realloc(buffer, strlen(buffer) + 1);
  p->data.fail.m = buffer;
  return p;

}

mpc_parser_t *mpc_lift_val(mpc_val_t *x) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_LIFT_VAL;
  p->data.lift.x = x;
  return p;
}

mpc_parser_t *mpc_lift(mpc_ctor_t lf) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_LIFT;
  p->data.lift.lf = lf;
  return p;
}

mpc_parser_t *mpc_anchor(int(*f)(char,char)) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_ANCHOR;
  p->data.anchor.f = f;
  return mpc_expect(p, "anchor");
}

mpc_parser_t *mpc_state(void) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_STATE;
  return p;
}

mpc_parser_t *mpc_expect(mpc_parser_t *a, const char *expected) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_EXPECT;
  p->data.expect.x = a;
  p->data.expect.m = malloc(strlen(expected) + 1);
  
# 1695 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1695 "project/radare2/shlr/mpc/mpc.c"
 p->data.expect.m
# 1695 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1695 "project/radare2/shlr/mpc/mpc.c"
 expected
# 1695 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1695 "project/radare2/shlr/mpc/mpc.c"
 p->data.expect.m
# 1695 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1695 "project/radare2/shlr/mpc/mpc.c"
                                   ;
  return p;
}
# 1719 "project/radare2/shlr/mpc/mpc.c"
mpc_parser_t *mpc_expectf(mpc_parser_t *a, const char *fmt, ...) {
  va_list va;
  char *buffer;

  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_EXPECT;

  
# 1726 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1726 "project/radare2/shlr/mpc/mpc.c"
 va
# 1726 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1726 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1726 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1726 "project/radare2/shlr/mpc/mpc.c"
                  ;
  buffer = malloc(2048);
  
# 1728 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___vsprintf_chk (
# 1728 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1728 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0, __builtin_object_size (
# 1728 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1728 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 1728 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1728 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1728 "project/radare2/shlr/mpc/mpc.c"
 va
# 1728 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1728 "project/radare2/shlr/mpc/mpc.c"
                          ;
  
# 1729 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1729 "project/radare2/shlr/mpc/mpc.c"
 va
# 1729 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1729 "project/radare2/shlr/mpc/mpc.c"
           ;

  buffer = realloc(buffer, strlen(buffer) + 1);
  p->data.expect.x = a;
  p->data.expect.m = buffer;
  return p;
}





mpc_parser_t *mpc_any(void) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_ANY;
  return mpc_expect(p, "any character");
}

mpc_parser_t *mpc_char(char c) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_SINGLE;
  p->data.single.x = c;
  return mpc_expectf(p, "'%c'", c);
}

mpc_parser_t *mpc_range(char s, char e) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_RANGE;
  p->data.range.x = s;
  p->data.range.y = e;
  return mpc_expectf(p, "character between '%c' and '%c'", s, e);
}

mpc_parser_t *mpc_oneof(const char *s) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_ONEOF;
  p->data.string.x = malloc(strlen(s) + 1);
  
# 1766 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1766 "project/radare2/shlr/mpc/mpc.c"
 p->data.string.x
# 1766 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1766 "project/radare2/shlr/mpc/mpc.c"
 s
# 1766 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1766 "project/radare2/shlr/mpc/mpc.c"
 p->data.string.x
# 1766 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1766 "project/radare2/shlr/mpc/mpc.c"
                            ;
  return mpc_expectf(p, "one of '%s'", s);
}

mpc_parser_t *mpc_noneof(const char *s) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_NONEOF;
  p->data.string.x = malloc(strlen(s) + 1);
  
# 1774 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1774 "project/radare2/shlr/mpc/mpc.c"
 p->data.string.x
# 1774 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1774 "project/radare2/shlr/mpc/mpc.c"
 s
# 1774 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1774 "project/radare2/shlr/mpc/mpc.c"
 p->data.string.x
# 1774 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1774 "project/radare2/shlr/mpc/mpc.c"
                            ;
  return mpc_expectf(p, "none of '%s'", s);

}

mpc_parser_t *mpc_satisfy(int(*f)(char)) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_SATISFY;
  p->data.satisfy.f = f;
  return mpc_expectf(p, "character satisfying function %p", f);
}

mpc_parser_t *mpc_string(const char *s) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_STRING;
  p->data.string.x = malloc(strlen(s) + 1);
  
# 1790 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1790 "project/radare2/shlr/mpc/mpc.c"
 p->data.string.x
# 1790 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1790 "project/radare2/shlr/mpc/mpc.c"
 s
# 1790 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1790 "project/radare2/shlr/mpc/mpc.c"
 p->data.string.x
# 1790 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1790 "project/radare2/shlr/mpc/mpc.c"
                            ;
  return mpc_expectf(p, "\"%s\"", s);
}





mpc_parser_t *mpc_apply(mpc_parser_t *a, mpc_apply_t f) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_APPLY;
  p->data.apply.x = a;
  p->data.apply.f = f;
  return p;
}

mpc_parser_t *mpc_apply_to(mpc_parser_t *a, mpc_apply_to_t f, void *x) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_APPLY_TO;
  p->data.apply_to.x = a;
  p->data.apply_to.f = f;
  p->data.apply_to.d = x;
  return p;
}

mpc_parser_t *mpc_check(mpc_parser_t *a, mpc_dtor_t da, mpc_check_t f, const char *e) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_CHECK;
  p->data.check.x = a;
  p->data.check.dx = da;
  p->data.check.f = f;
  p->data.check.e = malloc(strlen(e) + 1);
  
# 1822 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1822 "project/radare2/shlr/mpc/mpc.c"
 p->data.check.e
# 1822 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1822 "project/radare2/shlr/mpc/mpc.c"
 e
# 1822 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1822 "project/radare2/shlr/mpc/mpc.c"
 p->data.check.e
# 1822 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1822 "project/radare2/shlr/mpc/mpc.c"
                           ;
  return p;
}

mpc_parser_t *mpc_check_with(mpc_parser_t *a, mpc_dtor_t da, mpc_check_with_t f, void *x, const char *e) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_CHECK_WITH;
  p->data.check_with.x = a;
  p->data.check_with.dx = da;
  p->data.check_with.f = f;
  p->data.check_with.d = x;
  p->data.check_with.e = malloc(strlen(e) + 1);
  
# 1834 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 1834 "project/radare2/shlr/mpc/mpc.c"
 p->data.check_with.e
# 1834 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1834 "project/radare2/shlr/mpc/mpc.c"
 e
# 1834 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 1834 "project/radare2/shlr/mpc/mpc.c"
 p->data.check_with.e
# 1834 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 1834 "project/radare2/shlr/mpc/mpc.c"
                                ;
  return p;
}

mpc_parser_t *mpc_checkf(mpc_parser_t *a, mpc_dtor_t da, mpc_check_t f, const char *fmt, ...) {
  va_list va;
  char *buffer;
  mpc_parser_t *p;

  
# 1843 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1843 "project/radare2/shlr/mpc/mpc.c"
 va
# 1843 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1843 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1843 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1843 "project/radare2/shlr/mpc/mpc.c"
                  ;
  buffer = malloc(2048);
  
# 1845 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___vsprintf_chk (
# 1845 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1845 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0, __builtin_object_size (
# 1845 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1845 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 1845 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1845 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1845 "project/radare2/shlr/mpc/mpc.c"
 va
# 1845 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1845 "project/radare2/shlr/mpc/mpc.c"
                          ;
  
# 1846 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1846 "project/radare2/shlr/mpc/mpc.c"
 va
# 1846 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1846 "project/radare2/shlr/mpc/mpc.c"
           ;

  p = mpc_check(a, da, f, buffer);
  free(buffer);

  return p;
}

mpc_parser_t *mpc_check_withf(mpc_parser_t *a, mpc_dtor_t da, mpc_check_with_t f, void *x, const char *fmt, ...) {
  va_list va;
  char *buffer;
  mpc_parser_t *p;

  
# 1859 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1859 "project/radare2/shlr/mpc/mpc.c"
 va
# 1859 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1859 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1859 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1859 "project/radare2/shlr/mpc/mpc.c"
                  ;
  buffer = malloc(2048);
  
# 1861 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___vsprintf_chk (
# 1861 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1861 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0, __builtin_object_size (
# 1861 "project/radare2/shlr/mpc/mpc.c"
 buffer
# 1861 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 1861 "project/radare2/shlr/mpc/mpc.c"
 fmt
# 1861 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 1861 "project/radare2/shlr/mpc/mpc.c"
 va
# 1861 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1861 "project/radare2/shlr/mpc/mpc.c"
                          ;
  
# 1862 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1862 "project/radare2/shlr/mpc/mpc.c"
 va
# 1862 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1862 "project/radare2/shlr/mpc/mpc.c"
           ;

  p = mpc_check_with(a, da, f, x, buffer);
  free(buffer);

  return p;
}

mpc_parser_t *mpc_predictive(mpc_parser_t *a) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_PREDICT;
  p->data.predict.x = a;
  return p;
}

mpc_parser_t *mpc_not_lift(mpc_parser_t *a, mpc_dtor_t da, mpc_ctor_t lf) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_NOT;
  p->data.not.x = a;
  p->data.not.dx = da;
  p->data.not.lf = lf;
  return p;
}

mpc_parser_t *mpc_not(mpc_parser_t *a, mpc_dtor_t da) {
  return mpc_not_lift(a, da, mpcf_ctor_null);
}

mpc_parser_t *mpc_maybe_lift(mpc_parser_t *a, mpc_ctor_t lf) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_MAYBE;
  p->data.not.x = a;
  p->data.not.lf = lf;
  return p;
}

mpc_parser_t *mpc_maybe(mpc_parser_t *a) {
  return mpc_maybe_lift(a, mpcf_ctor_null);
}

mpc_parser_t *mpc_many(mpc_fold_t f, mpc_parser_t *a) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_MANY;
  p->data.repeat.x = a;
  p->data.repeat.f = f;
  return p;
}

mpc_parser_t *mpc_many1(mpc_fold_t f, mpc_parser_t *a) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_MANY1;
  p->data.repeat.x = a;
  p->data.repeat.f = f;
  return p;
}

mpc_parser_t *mpc_count(int n, mpc_fold_t f, mpc_parser_t *a, mpc_dtor_t da) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_COUNT;
  p->data.repeat.n = n;
  p->data.repeat.f = f;
  p->data.repeat.x = a;
  p->data.repeat.dx = da;
  return p;
}

mpc_parser_t *mpc_or(int n, ...) {

  int i;
  va_list va;

  mpc_parser_t *p = mpc_undefined();

  p->type = MPC_TYPE_OR;
  p->data.or.n = n;
  p->data.or.xs = malloc(sizeof(mpc_parser_t*) * n);

  
# 1939 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1939 "project/radare2/shlr/mpc/mpc.c"
 va
# 1939 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1939 "project/radare2/shlr/mpc/mpc.c"
 n
# 1939 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1939 "project/radare2/shlr/mpc/mpc.c"
                ;
  for (i = 0; i < n; i++) {
    p->data.or.xs[i] = 
# 1941 "project/radare2/shlr/mpc/mpc.c" 3 4
                      __builtin_va_arg(
# 1941 "project/radare2/shlr/mpc/mpc.c"
                      va
# 1941 "project/radare2/shlr/mpc/mpc.c" 3 4
                      ,
# 1941 "project/radare2/shlr/mpc/mpc.c"
                      mpc_parser_t*
# 1941 "project/radare2/shlr/mpc/mpc.c" 3 4
                      )
# 1941 "project/radare2/shlr/mpc/mpc.c"
                                               ;
  }
  
# 1943 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1943 "project/radare2/shlr/mpc/mpc.c"
 va
# 1943 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1943 "project/radare2/shlr/mpc/mpc.c"
           ;

  return p;
}

mpc_parser_t *mpc_and(int n, mpc_fold_t f, ...) {

  int i;
  va_list va;

  mpc_parser_t *p = mpc_undefined();

  p->type = MPC_TYPE_AND;
  p->data.and.n = n;
  p->data.and.f = f;
  p->data.and.xs = malloc(sizeof(mpc_parser_t*) * n);
  p->data.and.dxs = malloc(sizeof(mpc_dtor_t) * (n-1));

  
# 1961 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 1961 "project/radare2/shlr/mpc/mpc.c"
 va
# 1961 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 1961 "project/radare2/shlr/mpc/mpc.c"
 f
# 1961 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1961 "project/radare2/shlr/mpc/mpc.c"
                ;
  for (i = 0; i < n; i++) {
    p->data.and.xs[i] = 
# 1963 "project/radare2/shlr/mpc/mpc.c" 3 4
                       __builtin_va_arg(
# 1963 "project/radare2/shlr/mpc/mpc.c"
                       va
# 1963 "project/radare2/shlr/mpc/mpc.c" 3 4
                       ,
# 1963 "project/radare2/shlr/mpc/mpc.c"
                       mpc_parser_t*
# 1963 "project/radare2/shlr/mpc/mpc.c" 3 4
                       )
# 1963 "project/radare2/shlr/mpc/mpc.c"
                                                ;
  }
  for (i = 0; i < (n-1); i++) {
    p->data.and.dxs[i] = 
# 1966 "project/radare2/shlr/mpc/mpc.c" 3 4
                        __builtin_va_arg(
# 1966 "project/radare2/shlr/mpc/mpc.c"
                        va
# 1966 "project/radare2/shlr/mpc/mpc.c" 3 4
                        ,
# 1966 "project/radare2/shlr/mpc/mpc.c"
                        mpc_dtor_t
# 1966 "project/radare2/shlr/mpc/mpc.c" 3 4
                        )
# 1966 "project/radare2/shlr/mpc/mpc.c"
                                              ;
  }
  
# 1968 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 1968 "project/radare2/shlr/mpc/mpc.c"
 va
# 1968 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 1968 "project/radare2/shlr/mpc/mpc.c"
           ;

  return p;
}





mpc_parser_t *mpc_soi(void) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_SOI;
  return mpc_expect(p, "start of input");
}

mpc_parser_t *mpc_eoi(void) {
  mpc_parser_t *p = mpc_undefined();
  p->type = MPC_TYPE_EOI;
  return mpc_expect(p, "end of input");
}

static int mpc_boundary_anchor(char prev, char next) {
  const char* word = "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                     "0123456789_";
  if ( strchr(word, next) && prev == '\0') { return 1; }
  if ( strchr(word, prev) && next == '\0') { return 1; }
  if ( strchr(word, next) && !strchr(word, prev)) { return 1; }
  if (!strchr(word, next) && strchr(word, prev)) { return 1; }
  return 0;
}

static int mpc_boundary_newline_anchor(char prev, char next) {
  (void)next;
  return prev == '\n';
}

mpc_parser_t *mpc_boundary(void) { return mpc_expect(mpc_anchor(mpc_boundary_anchor), "word boundary"); }
mpc_parser_t *mpc_boundary_newline(void) { return mpc_expect(mpc_anchor(mpc_boundary_newline_anchor), "start of newline"); }

mpc_parser_t *mpc_whitespace(void) { return mpc_expect(mpc_oneof(" \f\n\r\t\v"), "whitespace"); }
mpc_parser_t *mpc_whitespaces(void) { return mpc_expect(mpc_many(mpcf_strfold, mpc_whitespace()), "spaces"); }
mpc_parser_t *mpc_blank(void) { return mpc_expect(mpc_apply(mpc_whitespaces(), mpcf_free), "whitespace"); }

mpc_parser_t *mpc_newline(void) { return mpc_expect(mpc_char('\n'), "newline"); }
mpc_parser_t *mpc_tab(void) { return mpc_expect(mpc_char('\t'), "tab"); }
mpc_parser_t *mpc_escape(void) { return mpc_and(2, mpcf_strfold, mpc_char('\\'), mpc_any(), free); }

mpc_parser_t *mpc_digit(void) { return mpc_expect(mpc_oneof("0123456789"), "digit"); }
mpc_parser_t *mpc_hexdigit(void) { return mpc_expect(mpc_oneof("0123456789ABCDEFabcdef"), "hex digit"); }
mpc_parser_t *mpc_octdigit(void) { return mpc_expect(mpc_oneof("01234567"), "oct digit"); }
mpc_parser_t *mpc_digits(void) { return mpc_expect(mpc_many1(mpcf_strfold, mpc_digit()), "digits"); }
mpc_parser_t *mpc_hexdigits(void) { return mpc_expect(mpc_many1(mpcf_strfold, mpc_hexdigit()), "hex digits"); }
mpc_parser_t *mpc_octdigits(void) { return mpc_expect(mpc_many1(mpcf_strfold, mpc_octdigit()), "oct digits"); }

mpc_parser_t *mpc_lower(void) { return mpc_expect(mpc_oneof("abcdefghijklmnopqrstuvwxyz"), "lowercase letter"); }
mpc_parser_t *mpc_upper(void) { return mpc_expect(mpc_oneof("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), "uppercase letter"); }
mpc_parser_t *mpc_alpha(void) { return mpc_expect(mpc_oneof("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"), "letter"); }
mpc_parser_t *mpc_underscore(void) { return mpc_expect(mpc_char('_'), "underscore"); }
mpc_parser_t *mpc_alphanum(void) { return mpc_expect(mpc_or(3, mpc_alpha(), mpc_digit(), mpc_underscore()), "alphanumeric"); }

mpc_parser_t *mpc_int(void) { return mpc_expect(mpc_apply(mpc_digits(), mpcf_int), "integer"); }
mpc_parser_t *mpc_hex(void) { return mpc_expect(mpc_apply(mpc_hexdigits(), mpcf_hex), "hexadecimal"); }
mpc_parser_t *mpc_oct(void) { return mpc_expect(mpc_apply(mpc_octdigits(), mpcf_oct), "octadecimal"); }
mpc_parser_t *mpc_number(void) { return mpc_expect(mpc_or(3, mpc_int(), mpc_hex(), mpc_oct()), "number"); }

mpc_parser_t *mpc_real(void) {



  mpc_parser_t *p0, *p1, *p2, *p30, *p31, *p32, *p3;

  p0 = mpc_maybe_lift(mpc_oneof("+-"), mpcf_ctor_str);
  p1 = mpc_digits();
  p2 = mpc_maybe_lift(mpc_and(2, mpcf_strfold, mpc_char('.'), mpc_digits(), free), mpcf_ctor_str);
  p30 = mpc_oneof("eE");
  p31 = mpc_maybe_lift(mpc_oneof("+-"), mpcf_ctor_str);
  p32 = mpc_digits();
  p3 = mpc_maybe_lift(mpc_and(3, mpcf_strfold, p30, p31, p32, free, free), mpcf_ctor_str);

  return mpc_expect(mpc_and(4, mpcf_strfold, p0, p1, p2, p3, free, free, free), "real");

}

mpc_parser_t *mpc_float(void) {
  return mpc_expect(mpc_apply(mpc_real(), mpcf_float), "float");
}

mpc_parser_t *mpc_char_lit(void) {
  return mpc_expect(mpc_between(mpc_or(2, mpc_escape(), mpc_any()), free, "'", "'"), "char");
}

mpc_parser_t *mpc_string_lit(void) {
  mpc_parser_t *strchar = mpc_or(2, mpc_escape(), mpc_noneof("\""));
  return mpc_expect(mpc_between(mpc_many(mpcf_strfold, strchar), free, "\"", "\""), "string");
}

mpc_parser_t *mpc_regex_lit(void) {
  mpc_parser_t *regexchar = mpc_or(2, mpc_escape(), mpc_noneof("/"));
  return mpc_expect(mpc_between(mpc_many(mpcf_strfold, regexchar), free, "/", "/"), "regex");
}

mpc_parser_t *mpc_ident(void) {
  mpc_parser_t *p0, *p1;
  p0 = mpc_or(2, mpc_alpha(), mpc_underscore());
  p1 = mpc_many(mpcf_strfold, mpc_alphanum());
  return mpc_and(2, mpcf_strfold, p0, p1, free);
}





mpc_parser_t *mpc_startwith(mpc_parser_t *a) { return mpc_and(2, mpcf_snd, mpc_soi(), a, mpcf_dtor_null); }
mpc_parser_t *mpc_endwith(mpc_parser_t *a, mpc_dtor_t da) { return mpc_and(2, mpcf_fst, a, mpc_eoi(), da); }
mpc_parser_t *mpc_whole(mpc_parser_t *a, mpc_dtor_t da) { return mpc_and(3, mpcf_snd, mpc_soi(), a, mpc_eoi(), mpcf_dtor_null, da); }

mpc_parser_t *mpc_stripl(mpc_parser_t *a) { return mpc_and(2, mpcf_snd, mpc_blank(), a, mpcf_dtor_null); }
mpc_parser_t *mpc_stripr(mpc_parser_t *a) { return mpc_and(2, mpcf_fst, a, mpc_blank(), mpcf_dtor_null); }
mpc_parser_t *mpc_strip(mpc_parser_t *a) { return mpc_and(3, mpcf_snd, mpc_blank(), a, mpc_blank(), mpcf_dtor_null, mpcf_dtor_null); }
mpc_parser_t *mpc_tok(mpc_parser_t *a) { return mpc_and(2, mpcf_fst, a, mpc_blank(), mpcf_dtor_null); }
mpc_parser_t *mpc_sym(const char *s) { return mpc_tok(mpc_string(s)); }

mpc_parser_t *mpc_total(mpc_parser_t *a, mpc_dtor_t da) { return mpc_whole(mpc_strip(a), da); }

mpc_parser_t *mpc_between(mpc_parser_t *a, mpc_dtor_t ad, const char *o, const char *c) {
  return mpc_and(3, mpcf_snd_free,
    mpc_string(o), a, mpc_string(c),
    free, ad);
}

mpc_parser_t *mpc_parens(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_between(a, ad, "(", ")"); }
mpc_parser_t *mpc_braces(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_between(a, ad, "<", ">"); }
mpc_parser_t *mpc_brackets(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_between(a, ad, "{", "}"); }
mpc_parser_t *mpc_squares(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_between(a, ad, "[", "]"); }

mpc_parser_t *mpc_tok_between(mpc_parser_t *a, mpc_dtor_t ad, const char *o, const char *c) {
  return mpc_and(3, mpcf_snd_free,
    mpc_sym(o), mpc_tok(a), mpc_sym(c),
    free, ad);
}

mpc_parser_t *mpc_tok_parens(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_tok_between(a, ad, "(", ")"); }
mpc_parser_t *mpc_tok_braces(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_tok_between(a, ad, "<", ">"); }
mpc_parser_t *mpc_tok_brackets(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_tok_between(a, ad, "{", "}"); }
mpc_parser_t *mpc_tok_squares(mpc_parser_t *a, mpc_dtor_t ad) { return mpc_tok_between(a, ad, "[", "]"); }
# 2165 "project/radare2/shlr/mpc/mpc.c"
static mpc_val_t *mpcf_re_or(int n, mpc_val_t **xs) {
  (void) n;
  if (xs[1] == 
# 2167 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 2167 "project/radare2/shlr/mpc/mpc.c"
                  ) { return xs[0]; }
  else { return mpc_or(2, xs[0], xs[1]); }
}

static mpc_val_t *mpcf_re_and(int n, mpc_val_t **xs) {
  int i;
  mpc_parser_t *p = mpc_lift(mpcf_ctor_str);
  for (i = 0; i < n; i++) {
    p = mpc_and(2, mpcf_strfold, p, xs[i], free);
  }
  return p;
}

static mpc_val_t *mpcf_re_repeat(int n, mpc_val_t **xs) {
  int num;
  (void) n;
  if (xs[1] == 
# 2183 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 2183 "project/radare2/shlr/mpc/mpc.c"
                  ) { return xs[0]; }
  switch(((char*)xs[1])[0])
  {
    case '*': { free(xs[1]); return mpc_many(mpcf_strfold, xs[0]); }; break;
    case '+': { free(xs[1]); return mpc_many1(mpcf_strfold, xs[0]); }; break;
    case '?': { free(xs[1]); return mpc_maybe_lift(xs[0], mpcf_ctor_str); }; break;
    default:
      num = *(int*)xs[1];
      free(xs[1]);
  }

  return mpc_count(num, mpcf_strfold, xs[0], free);
}

static mpc_parser_t *mpc_re_escape_char(char c) {
  switch (c) {
    case 'a': return mpc_char('\a');
    case 'f': return mpc_char('\f');
    case 'n': return mpc_char('\n');
    case 'r': return mpc_char('\r');
    case 't': return mpc_char('\t');
    case 'v': return mpc_char('\v');
    case 'b': return mpc_and(2, mpcf_snd, mpc_boundary(), mpc_lift(mpcf_ctor_str), free);
    case 'B': return mpc_not_lift(mpc_boundary(), free, mpcf_ctor_str);
    case 'A': return mpc_and(2, mpcf_snd, mpc_soi(), mpc_lift(mpcf_ctor_str), free);
    case 'Z': return mpc_and(2, mpcf_snd, mpc_eoi(), mpc_lift(mpcf_ctor_str), free);
    case 'd': return mpc_digit();
    case 'D': return mpc_not_lift(mpc_digit(), free, mpcf_ctor_str);
    case 's': return mpc_whitespace();
    case 'S': return mpc_not_lift(mpc_whitespace(), free, mpcf_ctor_str);
    case 'w': return mpc_alphanum();
    case 'W': return mpc_not_lift(mpc_alphanum(), free, mpcf_ctor_str);
    default: return 
# 2215 "project/radare2/shlr/mpc/mpc.c" 3 4
                   ((void *)0)
# 2215 "project/radare2/shlr/mpc/mpc.c"
                       ;
  }
}

static mpc_val_t *mpcf_re_escape(mpc_val_t *x, void* data) {

  int mode = *((int*)data);
  char *s = x;
  mpc_parser_t *p;


  if (s[0] == '.') {
    free(s);
    if (mode & MPC_RE_DOTALL) {
      return mpc_any();
    } else {
      return mpc_expect(mpc_noneof("\n"), "any character except a newline");
    }
  }


  if (s[0] == '^') {
    free(s);
    if (mode & MPC_RE_MULTILINE) {
      return mpc_and(2, mpcf_snd, mpc_or(2, mpc_soi(), mpc_boundary_newline()), mpc_lift(mpcf_ctor_str), free);
    } else {
      return mpc_and(2, mpcf_snd, mpc_soi(), mpc_lift(mpcf_ctor_str), free);
    }
  }


  if (s[0] == '$') {
    free(s);
    if (mode & MPC_RE_MULTILINE) {
      return mpc_or(2,
        mpc_newline(),
        mpc_and(2, mpcf_snd, mpc_eoi(), mpc_lift(mpcf_ctor_str), free));
    } else {
      return mpc_or(2,
        mpc_and(2, mpcf_fst, mpc_newline(), mpc_eoi(), free),
        mpc_and(2, mpcf_snd, mpc_eoi(), mpc_lift(mpcf_ctor_str), free));
    }
  }


  if (s[0] == '\\') {
    p = mpc_re_escape_char(s[1]);
    p = (p == 
# 2262 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 2262 "project/radare2/shlr/mpc/mpc.c"
                 ) ? mpc_char(s[1]) : p;
    free(s);
    return p;
  }


  p = mpc_char(s[0]);
  free(s);
  return p;
}

static const char *mpc_re_range_escape_char(char c) {
  switch (c) {
    case '-': return "-";
    case 'a': return "\a";
    case 'f': return "\f";
    case 'n': return "\n";
    case 'r': return "\r";
    case 't': return "\t";
    case 'v': return "\v";
    case 'b': return "\b";
    case 'd': return "0123456789";
    case 's': return " \f\n\r\t\v";
    case 'w': return "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
    default: return 
# 2286 "project/radare2/shlr/mpc/mpc.c" 3 4
                   ((void *)0)
# 2286 "project/radare2/shlr/mpc/mpc.c"
                       ;
  }
}

static mpc_val_t *mpcf_re_range(mpc_val_t *x) {

  mpc_parser_t *out;
  size_t i, j;
  size_t start, end;
  const char *tmp = 
# 2295 "project/radare2/shlr/mpc/mpc.c" 3 4
                   ((void *)0)
# 2295 "project/radare2/shlr/mpc/mpc.c"
                       ;
  const char *s = x;
  int comp = s[0] == '^' ? 1 : 0;
  char *range = calloc(1,1);

  if (s[0] == '\0') { free(range); free(x); return mpc_fail("Invalid Regex Range Expression"); }
  if (s[0] == '^' &&
      s[1] == '\0') { free(range); free(x); return mpc_fail("Invalid Regex Range Expression"); }

  for (i = comp; i < strlen(s); i++){


    if (s[i] == '\\') {
      tmp = mpc_re_range_escape_char(s[i+1]);
      if (tmp != 
# 2309 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 2309 "project/radare2/shlr/mpc/mpc.c"
                    ) {
        range = realloc(range, strlen(range) + strlen(tmp) + 1);
        
# 2311 "project/radare2/shlr/mpc/mpc.c" 3 4
       __builtin___strcat_chk (
# 2311 "project/radare2/shlr/mpc/mpc.c"
       range
# 2311 "project/radare2/shlr/mpc/mpc.c" 3 4
       , 
# 2311 "project/radare2/shlr/mpc/mpc.c"
       tmp
# 2311 "project/radare2/shlr/mpc/mpc.c" 3 4
       , __builtin_object_size (
# 2311 "project/radare2/shlr/mpc/mpc.c"
       range
# 2311 "project/radare2/shlr/mpc/mpc.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2311 "project/radare2/shlr/mpc/mpc.c"
                         ;
      } else {
        range = realloc(range, strlen(range) + 1 + 1);
        range[strlen(range) + 1] = '\0';
        range[strlen(range) + 0] = s[i+1];
      }
      i++;
    }


    else if (s[i] == '-') {
      if (s[i+1] == '\0' || i == 0) {
          range = realloc(range, strlen(range) + strlen("-") + 1);
          
# 2324 "project/radare2/shlr/mpc/mpc.c" 3 4
         __builtin___strcat_chk (
# 2324 "project/radare2/shlr/mpc/mpc.c"
         range
# 2324 "project/radare2/shlr/mpc/mpc.c" 3 4
         , 
# 2324 "project/radare2/shlr/mpc/mpc.c"
         "-"
# 2324 "project/radare2/shlr/mpc/mpc.c" 3 4
         , __builtin_object_size (
# 2324 "project/radare2/shlr/mpc/mpc.c"
         range
# 2324 "project/radare2/shlr/mpc/mpc.c" 3 4
         , 2 > 1 ? 1 : 0))
# 2324 "project/radare2/shlr/mpc/mpc.c"
                           ;
      } else {
        start = s[i-1]+1;
        end = s[i+1]-1;
        for (j = start; j <= end; j++) {
          range = realloc(range, strlen(range) + 1 + 1 + 1);
          range[strlen(range) + 1] = '\0';
          range[strlen(range) + 0] = (char)j;
        }
      }
    }


    else {
      range = realloc(range, strlen(range) + 1 + 1);
      range[strlen(range) + 1] = '\0';
      range[strlen(range) + 0] = s[i];
    }

  }

  out = comp == 1 ? mpc_noneof(range) : mpc_oneof(range);

  free(x);
  free(range);

  return out;
}

mpc_parser_t *mpc_re(const char *re) {
  return mpc_re_mode(re, MPC_RE_DEFAULT);
}

mpc_parser_t *mpc_re_mode(const char *re, int mode) {

  char *err_msg;
  mpc_parser_t *err_out;
  mpc_result_t r;
  mpc_parser_t *Regex, *Term, *Factor, *Base, *Range, *RegexEnclose;

  Regex = mpc_new("regex");
  Term = mpc_new("term");
  Factor = mpc_new("factor");
  Base = mpc_new("base");
  Range = mpc_new("range");

  mpc_define(Regex, mpc_and(2, mpcf_re_or,
    Term,
    mpc_maybe(mpc_and(2, mpcf_snd_free, mpc_char('|'), Regex, free)),
    (mpc_dtor_t)mpc_delete
  ));

  mpc_define(Term, mpc_many(mpcf_re_and, Factor));

  mpc_define(Factor, mpc_and(2, mpcf_re_repeat,
    Base,
    mpc_or(5,
      mpc_char('*'), mpc_char('+'), mpc_char('?'),
      mpc_brackets(mpc_int(), free),
      mpc_pass()),
    (mpc_dtor_t)mpc_delete
  ));

  mpc_define(Base, mpc_or(4,
    mpc_parens(Regex, (mpc_dtor_t)mpc_delete),
    mpc_squares(Range, (mpc_dtor_t)mpc_delete),
    mpc_apply_to(mpc_escape(), mpcf_re_escape, &mode),
    mpc_apply_to(mpc_noneof(")|"), mpcf_re_escape, &mode)
  ));

  mpc_define(Range, mpc_apply(
    mpc_many(mpcf_strfold, mpc_or(2, mpc_escape(), mpc_noneof("]"))),
    mpcf_re_range
  ));

  RegexEnclose = mpc_whole(mpc_predictive(Regex), (mpc_dtor_t)mpc_delete);

  mpc_optimise(RegexEnclose);
  mpc_optimise(Regex);
  mpc_optimise(Term);
  mpc_optimise(Factor);
  mpc_optimise(Base);
  mpc_optimise(Range);

  if(!mpc_parse("<mpc_re_compiler>", re, RegexEnclose, &r)) {
    err_msg = mpc_err_string(r.error);
    err_out = mpc_failf("Invalid Regex: %s", err_msg);
    mpc_err_delete(r.error);
    free(err_msg);
    r.output = err_out;
  }

  mpc_cleanup(6, RegexEnclose, Regex, Term, Factor, Base, Range);

  mpc_optimise(r.output);

  return r.output;

}





void mpcf_dtor_null(mpc_val_t *x) { (void) x; return; }

mpc_val_t *mpcf_ctor_null(void) { return 
# 2430 "project/radare2/shlr/mpc/mpc.c" 3 4
                                        ((void *)0)
# 2430 "project/radare2/shlr/mpc/mpc.c"
                                            ; }
mpc_val_t *mpcf_ctor_str(void) { return calloc(1, 1); }
mpc_val_t *mpcf_free(mpc_val_t *x) { free(x); return 
# 2432 "project/radare2/shlr/mpc/mpc.c" 3 4
                                                    ((void *)0)
# 2432 "project/radare2/shlr/mpc/mpc.c"
                                                        ; }

mpc_val_t *mpcf_int(mpc_val_t *x) {
  int *y = malloc(sizeof(int));
  *y = strtol(x, 
# 2436 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 2436 "project/radare2/shlr/mpc/mpc.c"
                    , 10);
  free(x);
  return y;
}

mpc_val_t *mpcf_hex(mpc_val_t *x) {
  int *y = malloc(sizeof(int));
  *y = strtol(x, 
# 2443 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 2443 "project/radare2/shlr/mpc/mpc.c"
                    , 16);
  free(x);
  return y;
}

mpc_val_t *mpcf_oct(mpc_val_t *x) {
  int *y = malloc(sizeof(int));
  *y = strtol(x, 
# 2450 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 2450 "project/radare2/shlr/mpc/mpc.c"
                    , 8);
  free(x);
  return y;
}

mpc_val_t *mpcf_float(mpc_val_t *x) {
  float *y = malloc(sizeof(float));
  *y = strtod(x, 
# 2457 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 2457 "project/radare2/shlr/mpc/mpc.c"
                    );
  free(x);
  return y;
}

mpc_val_t *mpcf_strtriml(mpc_val_t *x) {
  char *s = x;
  while (isspace((unsigned char)*s)) {
    
# 2465 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___memmove_chk (
# 2465 "project/radare2/shlr/mpc/mpc.c"
   s
# 2465 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 2465 "project/radare2/shlr/mpc/mpc.c"
   s+1, strlen(s)
# 2465 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 2465 "project/radare2/shlr/mpc/mpc.c"
   s
# 2465 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 0))
# 2465 "project/radare2/shlr/mpc/mpc.c"
                             ;
  }
  return s;
}

mpc_val_t *mpcf_strtrimr(mpc_val_t *x) {
  char *s = x;
  size_t l = strlen(s);
  while (l > 0 && isspace((unsigned char)s[l-1])) {
    s[l-1] = '\0'; l--;
  }
  return s;
}

mpc_val_t *mpcf_strtrim(mpc_val_t *x) {
  return mpcf_strtriml(mpcf_strtrimr(x));
}

static const char mpc_escape_input_c[] = {
  '\a', '\b', '\f', '\n', '\r',
  '\t', '\v', '\\', '\'', '\"', '\0'};

static const char *mpc_escape_output_c[] = {
  "\\a", "\\b", "\\f", "\\n", "\\r", "\\t",
  "\\v", "\\\\", "\\'", "\\\"", "\\0", 
# 2489 "project/radare2/shlr/mpc/mpc.c" 3 4
                                      ((void *)0)
# 2489 "project/radare2/shlr/mpc/mpc.c"
                                          };

static const char mpc_escape_input_raw_re[] = { '/' };
static const char *mpc_escape_output_raw_re[] = { "\\/", 
# 2492 "project/radare2/shlr/mpc/mpc.c" 3 4
                                                        ((void *)0) 
# 2492 "project/radare2/shlr/mpc/mpc.c"
                                                             };

static const char mpc_escape_input_raw_cstr[] = { '"' };
static const char *mpc_escape_output_raw_cstr[] = { "\\\"", 
# 2495 "project/radare2/shlr/mpc/mpc.c" 3 4
                                                           ((void *)0) 
# 2495 "project/radare2/shlr/mpc/mpc.c"
                                                                };

static const char mpc_escape_input_raw_cchar[] = { '\'' };
static const char *mpc_escape_output_raw_cchar[] = { "\\'", 
# 2498 "project/radare2/shlr/mpc/mpc.c" 3 4
                                                           ((void *)0) 
# 2498 "project/radare2/shlr/mpc/mpc.c"
                                                                };

static mpc_val_t *mpcf_escape_new(mpc_val_t *x, const char *input, const char **output) {

  int i;
  int found;
  char buff[2];
  char *s = x;
  char *y = calloc(1, 1);

  while (*s) {

    i = 0;
    found = 0;

    while (output[i]) {
      if (*s == input[i]) {
        y = realloc(y, strlen(y) + strlen(output[i]) + 1);
        
# 2516 "project/radare2/shlr/mpc/mpc.c" 3 4
       __builtin___strcat_chk (
# 2516 "project/radare2/shlr/mpc/mpc.c"
       y
# 2516 "project/radare2/shlr/mpc/mpc.c" 3 4
       , 
# 2516 "project/radare2/shlr/mpc/mpc.c"
       output[i]
# 2516 "project/radare2/shlr/mpc/mpc.c" 3 4
       , __builtin_object_size (
# 2516 "project/radare2/shlr/mpc/mpc.c"
       y
# 2516 "project/radare2/shlr/mpc/mpc.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2516 "project/radare2/shlr/mpc/mpc.c"
                           ;
        found = 1;
        break;
      }
      i++;
    }

    if (!found) {
      y = realloc(y, strlen(y) + 2);
      buff[0] = *s; buff[1] = '\0';
      
# 2526 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcat_chk (
# 2526 "project/radare2/shlr/mpc/mpc.c"
     y
# 2526 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 2526 "project/radare2/shlr/mpc/mpc.c"
     buff
# 2526 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 2526 "project/radare2/shlr/mpc/mpc.c"
     y
# 2526 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2526 "project/radare2/shlr/mpc/mpc.c"
                    ;
    }

    s++;
  }


  return y;
}

static mpc_val_t *mpcf_unescape_new(mpc_val_t *x, const char *input, const char **output) {

  int i;
  int found = 0;
  char buff[2];
  char *s = x;
  char *y = calloc(1, 1);

  while (*s) {

    i = 0;
    found = 0;

    while (output[i]) {
      if ((*(s+0)) == output[i][0] &&
          (*(s+1)) == output[i][1]) {
        y = realloc(y, strlen(y) + 1 + 1);
        buff[0] = input[i]; buff[1] = '\0';
        
# 2554 "project/radare2/shlr/mpc/mpc.c" 3 4
       __builtin___strcat_chk (
# 2554 "project/radare2/shlr/mpc/mpc.c"
       y
# 2554 "project/radare2/shlr/mpc/mpc.c" 3 4
       , 
# 2554 "project/radare2/shlr/mpc/mpc.c"
       buff
# 2554 "project/radare2/shlr/mpc/mpc.c" 3 4
       , __builtin_object_size (
# 2554 "project/radare2/shlr/mpc/mpc.c"
       y
# 2554 "project/radare2/shlr/mpc/mpc.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2554 "project/radare2/shlr/mpc/mpc.c"
                      ;
        found = 1;
        s++;
        break;
      }
      i++;
    }

    if (!found) {
      y = realloc(y, strlen(y) + 1 + 1);
      buff[0] = *s; buff[1] = '\0';
      
# 2565 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___strcat_chk (
# 2565 "project/radare2/shlr/mpc/mpc.c"
     y
# 2565 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 2565 "project/radare2/shlr/mpc/mpc.c"
     buff
# 2565 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 2565 "project/radare2/shlr/mpc/mpc.c"
     y
# 2565 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2565 "project/radare2/shlr/mpc/mpc.c"
                    ;
    }

    if (*s == '\0') { break; }
    else { s++; }
  }

  return y;

}

mpc_val_t *mpcf_escape(mpc_val_t *x) {
  mpc_val_t *y = mpcf_escape_new(x, mpc_escape_input_c, mpc_escape_output_c);
  free(x);
  return y;
}

mpc_val_t *mpcf_unescape(mpc_val_t *x) {
  mpc_val_t *y = mpcf_unescape_new(x, mpc_escape_input_c, mpc_escape_output_c);
  free(x);
  return y;
}

mpc_val_t *mpcf_escape_regex(mpc_val_t *x) {
  mpc_val_t *y = mpcf_escape_new(x, mpc_escape_input_raw_re, mpc_escape_output_raw_re);
  free(x);
  return y;
}

mpc_val_t *mpcf_unescape_regex(mpc_val_t *x) {
  mpc_val_t *y = mpcf_unescape_new(x, mpc_escape_input_raw_re, mpc_escape_output_raw_re);
  free(x);
  return y;
}

mpc_val_t *mpcf_escape_string_raw(mpc_val_t *x) {
  mpc_val_t *y = mpcf_escape_new(x, mpc_escape_input_raw_cstr, mpc_escape_output_raw_cstr);
  free(x);
  return y;
}

mpc_val_t *mpcf_unescape_string_raw(mpc_val_t *x) {
  mpc_val_t *y = mpcf_unescape_new(x, mpc_escape_input_raw_cstr, mpc_escape_output_raw_cstr);
  free(x);
  return y;
}

mpc_val_t *mpcf_escape_char_raw(mpc_val_t *x) {
  mpc_val_t *y = mpcf_escape_new(x, mpc_escape_input_raw_cchar, mpc_escape_output_raw_cchar);
  free(x);
  return y;
}

mpc_val_t *mpcf_unescape_char_raw(mpc_val_t *x) {
  mpc_val_t *y = mpcf_unescape_new(x, mpc_escape_input_raw_cchar, mpc_escape_output_raw_cchar);
  free(x);
  return y;
}

mpc_val_t *mpcf_null(int n, mpc_val_t** xs) { (void) n; (void) xs; return 
# 2624 "project/radare2/shlr/mpc/mpc.c" 3 4
                                                                         ((void *)0)
# 2624 "project/radare2/shlr/mpc/mpc.c"
                                                                             ; }
mpc_val_t *mpcf_fst(int n, mpc_val_t **xs) { (void) n; return xs[0]; }
mpc_val_t *mpcf_snd(int n, mpc_val_t **xs) { (void) n; return xs[1]; }
mpc_val_t *mpcf_trd(int n, mpc_val_t **xs) { (void) n; return xs[2]; }

static mpc_val_t *mpcf_nth_free(int n, mpc_val_t **xs, int x) {
  int i;
  for (i = 0; i < n; i++) {
    if (i != x) { free(xs[i]); }
  }
  return xs[x];
}

mpc_val_t *mpcf_fst_free(int n, mpc_val_t **xs) { return mpcf_nth_free(n, xs, 0); }
mpc_val_t *mpcf_snd_free(int n, mpc_val_t **xs) { return mpcf_nth_free(n, xs, 1); }
mpc_val_t *mpcf_trd_free(int n, mpc_val_t **xs) { return mpcf_nth_free(n, xs, 2); }
mpc_val_t *mpcf_all_free(int n, mpc_val_t** xs) {
  int i;
  for (i = 0; i < n; i++) {
    free(xs[i]);
  }
  return 
# 2645 "project/radare2/shlr/mpc/mpc.c" 3 4
        ((void *)0)
# 2645 "project/radare2/shlr/mpc/mpc.c"
            ;
}

mpc_val_t *mpcf_strfold(int n, mpc_val_t **xs) {
  int i;
  size_t l = 0;

  if (n == 0) { return calloc(1, 1); }

  for (i = 0; i < n; i++) { l += strlen(xs[i]); }

  xs[0] = realloc(xs[0], l + 1);

  for (i = 1; i < n; i++) {
    
# 2659 "project/radare2/shlr/mpc/mpc.c" 3 4
   __builtin___strcat_chk (
# 2659 "project/radare2/shlr/mpc/mpc.c"
   xs[0]
# 2659 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 
# 2659 "project/radare2/shlr/mpc/mpc.c"
   xs[i]
# 2659 "project/radare2/shlr/mpc/mpc.c" 3 4
   , __builtin_object_size (
# 2659 "project/radare2/shlr/mpc/mpc.c"
   xs[0]
# 2659 "project/radare2/shlr/mpc/mpc.c" 3 4
   , 2 > 1 ? 1 : 0))
# 2659 "project/radare2/shlr/mpc/mpc.c"
                       ; free(xs[i]);
  }

  return xs[0];
}

mpc_val_t *mpcf_maths(int n, mpc_val_t **xs) {
  int **vs = (int**)xs;
  (void) n;

  switch(((char*)xs[1])[0])
  {
    case '*': { *vs[0] *= *vs[2]; }; break;
    case '/': { *vs[0] /= *vs[2]; }; break;
    case '%': { *vs[0] %= *vs[2]; }; break;
    case '+': { *vs[0] += *vs[2]; }; break;
    case '-': { *vs[0] -= *vs[2]; }; break;
    default: break;
  }

  free(xs[1]); free(xs[2]);

  return xs[0];
}





static void mpc_print_unretained(mpc_parser_t *p, int force) {



  int i;
  char *s, *e;
  char buff[2];

  if (p->retained && !force) {;
    if (p->name) { printf("<%s>", p->name); }
    else { printf("<anon>"); }
    return;
  }

  if (p->type == MPC_TYPE_UNDEFINED) { printf("<?>"); }
  if (p->type == MPC_TYPE_PASS) { printf("<:>"); }
  if (p->type == MPC_TYPE_FAIL) { printf("<!>"); }
  if (p->type == MPC_TYPE_LIFT) { printf("<#>"); }
  if (p->type == MPC_TYPE_STATE) { printf("<S>"); }
  if (p->type == MPC_TYPE_ANCHOR) { printf("<@>"); }
  if (p->type == MPC_TYPE_EXPECT) {
    printf("%s", p->data.expect.m);

  }

  if (p->type == MPC_TYPE_ANY) { printf("<.>"); }
  if (p->type == MPC_TYPE_SATISFY) { printf("<f>"); }

  if (p->type == MPC_TYPE_SINGLE) {
    buff[0] = p->data.single.x; buff[1] = '\0';
    s = mpcf_escape_new(
      buff,
      mpc_escape_input_c,
      mpc_escape_output_c);
    printf("'%s'", s);
    free(s);
  }

  if (p->type == MPC_TYPE_RANGE) {
    buff[0] = p->data.range.x; buff[1] = '\0';
    s = mpcf_escape_new(
      buff,
      mpc_escape_input_c,
      mpc_escape_output_c);
    buff[0] = p->data.range.y; buff[1] = '\0';
    e = mpcf_escape_new(
      buff,
      mpc_escape_input_c,
      mpc_escape_output_c);
    printf("[%s-%s]", s, e);
    free(s);
    free(e);
  }

  if (p->type == MPC_TYPE_ONEOF) {
    s = mpcf_escape_new(
      p->data.string.x,
      mpc_escape_input_c,
      mpc_escape_output_c);
    printf("[%s]", s);
    free(s);
  }

  if (p->type == MPC_TYPE_NONEOF) {
    s = mpcf_escape_new(
      p->data.string.x,
      mpc_escape_input_c,
      mpc_escape_output_c);
    printf("[^%s]", s);
    free(s);
  }

  if (p->type == MPC_TYPE_STRING) {
    s = mpcf_escape_new(
      p->data.string.x,
      mpc_escape_input_c,
      mpc_escape_output_c);
    printf("\"%s\"", s);
    free(s);
  }

  if (p->type == MPC_TYPE_APPLY) { mpc_print_unretained(p->data.apply.x, 0); }
  if (p->type == MPC_TYPE_APPLY_TO) { mpc_print_unretained(p->data.apply_to.x, 0); }
  if (p->type == MPC_TYPE_PREDICT) { mpc_print_unretained(p->data.predict.x, 0); }

  if (p->type == MPC_TYPE_NOT) { mpc_print_unretained(p->data.not.x, 0); printf("!"); }
  if (p->type == MPC_TYPE_MAYBE) { mpc_print_unretained(p->data.not.x, 0); printf("?"); }

  if (p->type == MPC_TYPE_MANY) { mpc_print_unretained(p->data.repeat.x, 0); printf("*"); }
  if (p->type == MPC_TYPE_MANY1) { mpc_print_unretained(p->data.repeat.x, 0); printf("+"); }
  if (p->type == MPC_TYPE_COUNT) { mpc_print_unretained(p->data.repeat.x, 0); printf("{%i}", p->data.repeat.n); }

  if (p->type == MPC_TYPE_OR) {
    printf("(");
    for(i = 0; i < p->data.or.n-1; i++) {
      mpc_print_unretained(p->data.or.xs[i], 0);
      printf(" | ");
    }
    mpc_print_unretained(p->data.or.xs[p->data.or.n-1], 0);
    printf(")");
  }

  if (p->type == MPC_TYPE_AND) {
    printf("(");
    for(i = 0; i < p->data.and.n-1; i++) {
      mpc_print_unretained(p->data.and.xs[i], 0);
      printf(" ");
    }
    mpc_print_unretained(p->data.and.xs[p->data.and.n-1], 0);
    printf(")");
  }

  if (p->type == MPC_TYPE_CHECK) {
    mpc_print_unretained(p->data.check.x, 0);
    printf("->?");
  }
  if (p->type == MPC_TYPE_CHECK_WITH) {
    mpc_print_unretained(p->data.check_with.x, 0);
    printf("->?");
  }

}

void mpc_print(mpc_parser_t *p) {
  mpc_print_unretained(p, 1);
  printf("\n");
}
# 2831 "project/radare2/shlr/mpc/mpc.c"
int mpc_test_fail(mpc_parser_t *p, const char *s, const void *d,
  int(*tester)(const void*, const void*),
  mpc_dtor_t destructor,
  void(*printer)(const void*)) {
  mpc_result_t r;
  (void) printer;
  if (mpc_parse("<test>", s, p, &r)) {

    if (tester(r.output, d)) {
      destructor(r.output);
      return 0;
    } else {
      destructor(r.output);
      return 1;
    }

  } else {
    mpc_err_delete(r.error);
    return 1;
  }

}

int mpc_test_pass(mpc_parser_t *p, const char *s, const void *d,
  int(*tester)(const void*, const void*),
  mpc_dtor_t destructor,
  void(*printer)(const void*)) {

  mpc_result_t r;
  if (mpc_parse("<test>", s, p, &r)) {

    if (tester(r.output, d)) {
      destructor(r.output);
      return 1;
    } else {
      printf("Got "); printer(r.output); printf("\n");
      printf("Expected "); printer(d); printf("\n");
      destructor(r.output);
      return 0;
    }

  } else {
    mpc_err_print(r.error);
    mpc_err_delete(r.error);
    return 0;

  }

}






void mpc_ast_delete(mpc_ast_t *a) {

  int i;

  if (a == 
# 2890 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 2890 "project/radare2/shlr/mpc/mpc.c"
              ) { return; }

  for (i = 0; i < a->children_num; i++) {
    mpc_ast_delete(a->children[i]);
  }

  free(a->children);
  free(a->tag);
  free(a->contents);
  free(a);

}

static void mpc_ast_delete_no_children(mpc_ast_t *a) {
  free(a->children);
  free(a->tag);
  free(a->contents);
  free(a);
}

mpc_ast_t *mpc_ast_new(const char *tag, const char *contents) {

  mpc_ast_t *a = malloc(sizeof(mpc_ast_t));

  a->tag = malloc(strlen(tag) + 1);
  
# 2915 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 2915 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 2915 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2915 "project/radare2/shlr/mpc/mpc.c"
 tag
# 2915 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2915 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 2915 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 2915 "project/radare2/shlr/mpc/mpc.c"
                    ;

  a->contents = malloc(strlen(contents) + 1);
  
# 2918 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 2918 "project/radare2/shlr/mpc/mpc.c"
 a->contents
# 2918 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2918 "project/radare2/shlr/mpc/mpc.c"
 contents
# 2918 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2918 "project/radare2/shlr/mpc/mpc.c"
 a->contents
# 2918 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 2918 "project/radare2/shlr/mpc/mpc.c"
                              ;

  a->state = mpc_state_new();

  a->children_num = 0;
  a->children = 
# 2923 "project/radare2/shlr/mpc/mpc.c" 3 4
               ((void *)0)
# 2923 "project/radare2/shlr/mpc/mpc.c"
                   ;
  return a;

}

mpc_ast_t *mpc_ast_build(int n, const char *tag, ...) {

  mpc_ast_t *a = mpc_ast_new(tag, "");

  int i;
  va_list va;
  
# 2934 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 2934 "project/radare2/shlr/mpc/mpc.c"
 va
# 2934 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 2934 "project/radare2/shlr/mpc/mpc.c"
 tag
# 2934 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 2934 "project/radare2/shlr/mpc/mpc.c"
                  ;

  for (i = 0; i < n; i++) {
    mpc_ast_add_child(a, 
# 2937 "project/radare2/shlr/mpc/mpc.c" 3 4
                        __builtin_va_arg(
# 2937 "project/radare2/shlr/mpc/mpc.c"
                        va
# 2937 "project/radare2/shlr/mpc/mpc.c" 3 4
                        ,
# 2937 "project/radare2/shlr/mpc/mpc.c"
                        mpc_ast_t*
# 2937 "project/radare2/shlr/mpc/mpc.c" 3 4
                        )
# 2937 "project/radare2/shlr/mpc/mpc.c"
                                              );
  }

  
# 2940 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 2940 "project/radare2/shlr/mpc/mpc.c"
 va
# 2940 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 2940 "project/radare2/shlr/mpc/mpc.c"
           ;

  return a;

}

mpc_ast_t *mpc_ast_add_root(mpc_ast_t *a) {

  mpc_ast_t *r;

  if (a == 
# 2950 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 2950 "project/radare2/shlr/mpc/mpc.c"
              ) { return a; }
  if (a->children_num == 0) { return a; }
  if (a->children_num == 1) { return a; }

  r = mpc_ast_new(">", "");
  mpc_ast_add_child(r, a);
  return r;
}

int mpc_ast_eq(mpc_ast_t *a, mpc_ast_t *b) {

  int i;

  if (strcmp(a->tag, b->tag) != 0) { return 0; }
  if (strcmp(a->contents, b->contents) != 0) { return 0; }
  if (a->children_num != b->children_num) { return 0; }

  for (i = 0; i < a->children_num; i++) {
    if (!mpc_ast_eq(a->children[i], b->children[i])) { return 0; }
  }

  return 1;
}

mpc_ast_t *mpc_ast_add_child(mpc_ast_t *r, mpc_ast_t *a) {
  r->children_num++;
  r->children = realloc(r->children, sizeof(mpc_ast_t*) * r->children_num);
  r->children[r->children_num-1] = a;
  return r;
}

mpc_ast_t *mpc_ast_add_tag(mpc_ast_t *a, const char *t) {
  if (a == 
# 2982 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 2982 "project/radare2/shlr/mpc/mpc.c"
              ) { return a; }
  a->tag = realloc(a->tag, strlen(t) + 1 + strlen(a->tag) + 1);
  
# 2984 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memmove_chk (
# 2984 "project/radare2/shlr/mpc/mpc.c"
 a->tag + strlen(t) + 1
# 2984 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2984 "project/radare2/shlr/mpc/mpc.c"
 a->tag, strlen(a->tag)+1
# 2984 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2984 "project/radare2/shlr/mpc/mpc.c"
 a->tag + strlen(t) + 1
# 2984 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 2984 "project/radare2/shlr/mpc/mpc.c"
                                                          ;
  
# 2985 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memmove_chk (
# 2985 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 2985 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2985 "project/radare2/shlr/mpc/mpc.c"
 t, strlen(t)
# 2985 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2985 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 2985 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 2985 "project/radare2/shlr/mpc/mpc.c"
                              ;
  
# 2986 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memmove_chk (
# 2986 "project/radare2/shlr/mpc/mpc.c"
 a->tag + strlen(t)
# 2986 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2986 "project/radare2/shlr/mpc/mpc.c"
 "|", 1
# 2986 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2986 "project/radare2/shlr/mpc/mpc.c"
 a->tag + strlen(t)
# 2986 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 2986 "project/radare2/shlr/mpc/mpc.c"
                                    ;
  return a;
}

mpc_ast_t *mpc_ast_add_root_tag(mpc_ast_t *a, const char *t) {
  if (a == 
# 2991 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 2991 "project/radare2/shlr/mpc/mpc.c"
              ) { return a; }
  a->tag = realloc(a->tag, (strlen(t)-1) + strlen(a->tag) + 1);
  
# 2993 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memmove_chk (
# 2993 "project/radare2/shlr/mpc/mpc.c"
 a->tag + (strlen(t)-1)
# 2993 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2993 "project/radare2/shlr/mpc/mpc.c"
 a->tag, strlen(a->tag)+1
# 2993 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2993 "project/radare2/shlr/mpc/mpc.c"
 a->tag + (strlen(t)-1)
# 2993 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 2993 "project/radare2/shlr/mpc/mpc.c"
                                                          ;
  
# 2994 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___memmove_chk (
# 2994 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 2994 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 2994 "project/radare2/shlr/mpc/mpc.c"
 t, (strlen(t)-1)
# 2994 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 2994 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 2994 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 0))
# 2994 "project/radare2/shlr/mpc/mpc.c"
                                  ;
  return a;
}

mpc_ast_t *mpc_ast_tag(mpc_ast_t *a, const char *t) {
  a->tag = realloc(a->tag, strlen(t) + 1);
  
# 3000 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin___strcpy_chk (
# 3000 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 3000 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 
# 3000 "project/radare2/shlr/mpc/mpc.c"
 t
# 3000 "project/radare2/shlr/mpc/mpc.c" 3 4
 , __builtin_object_size (
# 3000 "project/radare2/shlr/mpc/mpc.c"
 a->tag
# 3000 "project/radare2/shlr/mpc/mpc.c" 3 4
 , 2 > 1 ? 1 : 0))
# 3000 "project/radare2/shlr/mpc/mpc.c"
                  ;
  return a;
}

mpc_ast_t *mpc_ast_state(mpc_ast_t *a, mpc_state_t s) {
  if (a == 
# 3005 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 3005 "project/radare2/shlr/mpc/mpc.c"
              ) { return a; }
  a->state = s;
  return a;
}

static void mpc_ast_print_depth(mpc_ast_t *a, int d, FILE *fp) {

  int i;

  if (a == 
# 3014 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 3014 "project/radare2/shlr/mpc/mpc.c"
              ) {
    fprintf(fp, "NULL\n");
    return;
  }

  for (i = 0; i < d; i++) { fprintf(fp, "  "); }

  if (strlen(a->contents)) {
    fprintf(fp, "%s:%lu:%lu '%s'\n", a->tag,
      (long unsigned int)(a->state.row+1),
      (long unsigned int)(a->state.col+1),
      a->contents);
  } else {
    fprintf(fp, "%s \n", a->tag);
  }

  for (i = 0; i < a->children_num; i++) {
    mpc_ast_print_depth(a->children[i], d+1, fp);
  }

}

void mpc_ast_print(mpc_ast_t *a) {
  mpc_ast_print_depth(a, 0, 
# 3037 "project/radare2/shlr/mpc/mpc.c" 3 4
                           __stdoutp
# 3037 "project/radare2/shlr/mpc/mpc.c"
                                 );
}

void mpc_ast_print_to(mpc_ast_t *a, FILE *fp) {
  mpc_ast_print_depth(a, 0, fp);
}

int mpc_ast_get_index(mpc_ast_t *ast, const char *tag) {
  return mpc_ast_get_index_lb(ast, tag, 0);
}

int mpc_ast_get_index_lb(mpc_ast_t *ast, const char *tag, int lb) {
  int i;

  for(i=lb; i<ast->children_num; i++) {
    if(strcmp(ast->children[i]->tag, tag) == 0) {
      return i;
    }
  }

  return -1;
}

mpc_ast_t *mpc_ast_get_child(mpc_ast_t *ast, const char *tag) {
  return mpc_ast_get_child_lb(ast, tag, 0);
}

mpc_ast_t *mpc_ast_get_child_lb(mpc_ast_t *ast, const char *tag, int lb) {
  int i;

  for(i=lb; i<ast->children_num; i++) {
    if(strcmp(ast->children[i]->tag, tag) == 0) {
      return ast->children[i];
    }
  }

  return 
# 3073 "project/radare2/shlr/mpc/mpc.c" 3 4
        ((void *)0)
# 3073 "project/radare2/shlr/mpc/mpc.c"
            ;
}

mpc_ast_trav_t *mpc_ast_traverse_start(mpc_ast_t *ast,
                                       mpc_ast_trav_order_t order)
{
  mpc_ast_trav_t *trav, *n_trav;
  mpc_ast_t *cnode = ast;


  trav = malloc(sizeof(mpc_ast_trav_t));
  trav->curr_node = cnode;
  trav->parent = 
# 3085 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 3085 "project/radare2/shlr/mpc/mpc.c"
                    ;
  trav->curr_child = 0;
  trav->order = order;


  switch(order) {
    case mpc_ast_trav_order_pre:

      break;

    case mpc_ast_trav_order_post:
      while(cnode->children_num > 0) {
        cnode = cnode->children[0];

        n_trav = malloc(sizeof(mpc_ast_trav_t));
        n_trav->curr_node = cnode;
        n_trav->parent = trav;
        n_trav->curr_child = 0;
        n_trav->order = order;

        trav = n_trav;
      }

      break;

    default:

      break;
  }

  return trav;
}

mpc_ast_t *mpc_ast_traverse_next(mpc_ast_trav_t **trav) {
  mpc_ast_trav_t *n_trav, *to_free;
  mpc_ast_t *ret = 
# 3120 "project/radare2/shlr/mpc/mpc.c" 3 4
                  ((void *)0)
# 3120 "project/radare2/shlr/mpc/mpc.c"
                      ;
  int cchild;


  if(*trav == 
# 3124 "project/radare2/shlr/mpc/mpc.c" 3 4
             ((void *)0)
# 3124 "project/radare2/shlr/mpc/mpc.c"
                 ) return 
# 3124 "project/radare2/shlr/mpc/mpc.c" 3 4
                          ((void *)0)
# 3124 "project/radare2/shlr/mpc/mpc.c"
                              ;

  switch((*trav)->order) {
    case mpc_ast_trav_order_pre:
      ret = (*trav)->curr_node;


      while(*trav != 
# 3131 "project/radare2/shlr/mpc/mpc.c" 3 4
                    ((void *)0) 
# 3131 "project/radare2/shlr/mpc/mpc.c"
                         &&
        (*trav)->curr_child >= (*trav)->curr_node->children_num)
      {
        to_free = *trav;
        *trav = (*trav)->parent;
        free(to_free);
      }


      if(*trav == 
# 3140 "project/radare2/shlr/mpc/mpc.c" 3 4
                 ((void *)0)
# 3140 "project/radare2/shlr/mpc/mpc.c"
                     ) {
        break;
      }


      n_trav = malloc(sizeof(mpc_ast_trav_t));

      cchild = (*trav)->curr_child;
      n_trav->curr_node = (*trav)->curr_node->children[cchild];
      n_trav->parent = *trav;
      n_trav->curr_child = 0;
      n_trav->order = (*trav)->order;

      (*trav)->curr_child++;
      *trav = n_trav;

      break;

    case mpc_ast_trav_order_post:
      ret = (*trav)->curr_node;




      to_free = *trav;
      *trav = (*trav)->parent;
      free(to_free);

      if(*trav == 
# 3168 "project/radare2/shlr/mpc/mpc.c" 3 4
                 ((void *)0)
# 3168 "project/radare2/shlr/mpc/mpc.c"
                     )
        break;


      (*trav)->curr_child++;


      if((*trav)->curr_child >= (*trav)->curr_node->children_num) {
        break;
      }



      while((*trav)->curr_node->children_num > 0) {
        n_trav = malloc(sizeof(mpc_ast_trav_t));

        cchild = (*trav)->curr_child;
        n_trav->curr_node = (*trav)->curr_node->children[cchild];
        n_trav->parent = *trav;
        n_trav->curr_child = 0;
        n_trav->order = (*trav)->order;

        *trav = n_trav;
      }

    default:

      break;
  }

  return ret;
}

void mpc_ast_traverse_free(mpc_ast_trav_t **trav) {
  mpc_ast_trav_t *n_trav;


  while(*trav != 
# 3205 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 3205 "project/radare2/shlr/mpc/mpc.c"
                    ) {
      n_trav = (*trav)->parent;
      free(*trav);
      *trav = n_trav;
  }
}

mpc_val_t *mpcf_fold_ast(int n, mpc_val_t **xs) {

  int i, j;
  mpc_ast_t** as = (mpc_ast_t**)xs;
  mpc_ast_t *r;

  if (n == 0) { return 
# 3218 "project/radare2/shlr/mpc/mpc.c" 3 4
                      ((void *)0)
# 3218 "project/radare2/shlr/mpc/mpc.c"
                          ; }
  if (n == 1) { return xs[0]; }
  if (n == 2 && xs[1] == 
# 3220 "project/radare2/shlr/mpc/mpc.c" 3 4
                        ((void *)0)
# 3220 "project/radare2/shlr/mpc/mpc.c"
                            ) { return xs[0]; }
  if (n == 2 && xs[0] == 
# 3221 "project/radare2/shlr/mpc/mpc.c" 3 4
                        ((void *)0)
# 3221 "project/radare2/shlr/mpc/mpc.c"
                            ) { return xs[1]; }

  r = mpc_ast_new(">", "");

  for (i = 0; i < n; i++) {

    if (as[i] == 
# 3227 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 3227 "project/radare2/shlr/mpc/mpc.c"
                    ) { continue; }

    if (as[i] && as[i]->children_num == 0) {
      mpc_ast_add_child(r, as[i]);
    } else if (as[i] && as[i]->children_num == 1) {
      mpc_ast_add_child(r, mpc_ast_add_root_tag(as[i]->children[0], as[i]->tag));
      mpc_ast_delete_no_children(as[i]);
    } else if (as[i] && as[i]->children_num >= 2) {
      for (j = 0; j < as[i]->children_num; j++) {
        mpc_ast_add_child(r, as[i]->children[j]);
      }
      mpc_ast_delete_no_children(as[i]);
    }

  }

  if (r->children_num) {
    r->state = r->children[0]->state;
  }

  return r;
}

mpc_val_t *mpcf_str_ast(mpc_val_t *c) {
  mpc_ast_t *a = mpc_ast_new("", c);
  free(c);
  return a;
}

mpc_val_t *mpcf_state_ast(int n, mpc_val_t **xs) {
  mpc_state_t *s = ((mpc_state_t**)xs)[0];
  mpc_ast_t *a = ((mpc_ast_t**)xs)[1];
  (void)n;
  a = mpc_ast_state(a, *s);
  free(s);
  return a;
}

mpc_parser_t *mpca_state(mpc_parser_t *a) {
  return mpc_and(2, mpcf_state_ast, mpc_state(), a, free);
}

mpc_parser_t *mpca_tag(mpc_parser_t *a, const char *t) {
  return mpc_apply_to(a, (mpc_apply_to_t)mpc_ast_tag, (void*)t);
}

mpc_parser_t *mpca_add_tag(mpc_parser_t *a, const char *t) {
  return mpc_apply_to(a, (mpc_apply_to_t)mpc_ast_add_tag, (void*)t);
}

mpc_parser_t *mpca_root(mpc_parser_t *a) {
  return mpc_apply(a, (mpc_apply_t)mpc_ast_add_root);
}

mpc_parser_t *mpca_not(mpc_parser_t *a) { return mpc_not(a, (mpc_dtor_t)mpc_ast_delete); }
mpc_parser_t *mpca_maybe(mpc_parser_t *a) { return mpc_maybe(a); }
mpc_parser_t *mpca_many(mpc_parser_t *a) { return mpc_many(mpcf_fold_ast, a); }
mpc_parser_t *mpca_many1(mpc_parser_t *a) { return mpc_many1(mpcf_fold_ast, a); }
mpc_parser_t *mpca_count(int n, mpc_parser_t *a) { return mpc_count(n, mpcf_fold_ast, a, (mpc_dtor_t)mpc_ast_delete); }

mpc_parser_t *mpca_or(int n, ...) {

  int i;
  va_list va;

  mpc_parser_t *p = mpc_undefined();

  p->type = MPC_TYPE_OR;
  p->data.or.n = n;
  p->data.or.xs = malloc(sizeof(mpc_parser_t*) * n);

  
# 3298 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3298 "project/radare2/shlr/mpc/mpc.c"
 va
# 3298 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3298 "project/radare2/shlr/mpc/mpc.c"
 n
# 3298 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3298 "project/radare2/shlr/mpc/mpc.c"
                ;
  for (i = 0; i < n; i++) {
    p->data.or.xs[i] = 
# 3300 "project/radare2/shlr/mpc/mpc.c" 3 4
                      __builtin_va_arg(
# 3300 "project/radare2/shlr/mpc/mpc.c"
                      va
# 3300 "project/radare2/shlr/mpc/mpc.c" 3 4
                      ,
# 3300 "project/radare2/shlr/mpc/mpc.c"
                      mpc_parser_t*
# 3300 "project/radare2/shlr/mpc/mpc.c" 3 4
                      )
# 3300 "project/radare2/shlr/mpc/mpc.c"
                                               ;
  }
  
# 3302 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3302 "project/radare2/shlr/mpc/mpc.c"
 va
# 3302 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3302 "project/radare2/shlr/mpc/mpc.c"
           ;

  return p;

}

mpc_parser_t *mpca_and(int n, ...) {

  int i;
  va_list va;

  mpc_parser_t *p = mpc_undefined();

  p->type = MPC_TYPE_AND;
  p->data.and.n = n;
  p->data.and.f = mpcf_fold_ast;
  p->data.and.xs = malloc(sizeof(mpc_parser_t*) * n);
  p->data.and.dxs = malloc(sizeof(mpc_dtor_t) * (n-1));

  
# 3321 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3321 "project/radare2/shlr/mpc/mpc.c"
 va
# 3321 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3321 "project/radare2/shlr/mpc/mpc.c"
 n
# 3321 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3321 "project/radare2/shlr/mpc/mpc.c"
                ;
  for (i = 0; i < n; i++) {
    p->data.and.xs[i] = 
# 3323 "project/radare2/shlr/mpc/mpc.c" 3 4
                       __builtin_va_arg(
# 3323 "project/radare2/shlr/mpc/mpc.c"
                       va
# 3323 "project/radare2/shlr/mpc/mpc.c" 3 4
                       ,
# 3323 "project/radare2/shlr/mpc/mpc.c"
                       mpc_parser_t*
# 3323 "project/radare2/shlr/mpc/mpc.c" 3 4
                       )
# 3323 "project/radare2/shlr/mpc/mpc.c"
                                                ;
  }
  for (i = 0; i < (n-1); i++) {
    p->data.and.dxs[i] = (mpc_dtor_t)mpc_ast_delete;
  }
  
# 3328 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3328 "project/radare2/shlr/mpc/mpc.c"
 va
# 3328 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3328 "project/radare2/shlr/mpc/mpc.c"
           ;

  return p;
}

mpc_parser_t *mpca_total(mpc_parser_t *a) { return mpc_total(a, (mpc_dtor_t)mpc_ast_delete); }
# 3379 "project/radare2/shlr/mpc/mpc.c"
typedef struct {
  va_list *va;
  int parsers_num;
  mpc_parser_t **parsers;
  int flags;
} mpca_grammar_st_t;

static mpc_val_t *mpcaf_grammar_or(int n, mpc_val_t **xs) {
  (void) n;
  if (xs[1] == 
# 3388 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3388 "project/radare2/shlr/mpc/mpc.c"
                  ) { return xs[0]; }
  else { return mpca_or(2, xs[0], xs[1]); }
}

static mpc_val_t *mpcaf_grammar_and(int n, mpc_val_t **xs) {
  int i;
  mpc_parser_t *p = mpc_pass();
  for (i = 0; i < n; i++) {
    if (xs[i] != 
# 3396 "project/radare2/shlr/mpc/mpc.c" 3 4
                ((void *)0)
# 3396 "project/radare2/shlr/mpc/mpc.c"
                    ) { p = mpca_and(2, p, xs[i]); }
  }
  return p;
}

static mpc_val_t *mpcaf_grammar_repeat(int n, mpc_val_t **xs) {
  int num;
  (void) n;
  if (xs[1] == 
# 3404 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3404 "project/radare2/shlr/mpc/mpc.c"
                  ) { return xs[0]; }
  switch(((char*)xs[1])[0])
  {
    case '*': { free(xs[1]); return mpca_many(xs[0]); }; break;
    case '+': { free(xs[1]); return mpca_many1(xs[0]); }; break;
    case '?': { free(xs[1]); return mpca_maybe(xs[0]); }; break;
    case '!': { free(xs[1]); return mpca_not(xs[0]); }; break;
    default:
      num = *((int*)xs[1]);
      free(xs[1]);
  }
  return mpca_count(num, xs[0]);
}

static mpc_val_t *mpcaf_grammar_string(mpc_val_t *x, void *s) {
  mpca_grammar_st_t *st = s;
  char *y = mpcf_unescape(x);
  mpc_parser_t *p = (st->flags & MPCA_LANG_WHITESPACE_SENSITIVE) ? mpc_string(y) : mpc_tok(mpc_string(y));
  free(y);
  return mpca_state(mpca_tag(mpc_apply(p, mpcf_str_ast), "string"));
}

static mpc_val_t *mpcaf_grammar_char(mpc_val_t *x, void *s) {
  mpca_grammar_st_t *st = s;
  char *y = mpcf_unescape(x);
  mpc_parser_t *p = (st->flags & MPCA_LANG_WHITESPACE_SENSITIVE) ? mpc_char(y[0]) : mpc_tok(mpc_char(y[0]));
  free(y);
  return mpca_state(mpca_tag(mpc_apply(p, mpcf_str_ast), "char"));
}

static mpc_val_t *mpcaf_fold_regex(int n, mpc_val_t **xs) {
  char *y = xs[0];
  char *m = xs[1];
  mpca_grammar_st_t *st = xs[2];
  mpc_parser_t *p;
  int mode = MPC_RE_DEFAULT;

  (void)n;
  if (strchr(m, 'm')) { mode |= MPC_RE_MULTILINE; }
  if (strchr(m, 's')) { mode |= MPC_RE_DOTALL; }
  y = mpcf_unescape_regex(y);
  p = (st->flags & MPCA_LANG_WHITESPACE_SENSITIVE) ? mpc_re_mode(y, mode) : mpc_tok(mpc_re_mode(y, mode));
  free(y);
  free(m);

  return mpca_state(mpca_tag(mpc_apply(p, mpcf_str_ast), "regex"));
}


static int is_number(const char* s) {
  size_t i;
  for (i = 0; i < strlen(s); i++) { if (!strchr("0123456789", s[i])) { return 0; } }
  return 1;
}

static mpc_parser_t *mpca_grammar_find_parser(char *x, mpca_grammar_st_t *st) {

  int i;
  mpc_parser_t *p;


  if (is_number(x)) {

    i = strtol(x, 
# 3467 "project/radare2/shlr/mpc/mpc.c" 3 4
                 ((void *)0)
# 3467 "project/radare2/shlr/mpc/mpc.c"
                     , 10);

    while (st->parsers_num <= i) {
      st->parsers_num++;
      st->parsers = realloc(st->parsers, sizeof(mpc_parser_t*) * st->parsers_num);
      st->parsers[st->parsers_num-1] = 
# 3472 "project/radare2/shlr/mpc/mpc.c" 3 4
                                      __builtin_va_arg(
# 3472 "project/radare2/shlr/mpc/mpc.c"
                                      *st->va
# 3472 "project/radare2/shlr/mpc/mpc.c" 3 4
                                      ,
# 3472 "project/radare2/shlr/mpc/mpc.c"
                                      mpc_parser_t*
# 3472 "project/radare2/shlr/mpc/mpc.c" 3 4
                                      )
# 3472 "project/radare2/shlr/mpc/mpc.c"
                                                                    ;
      if (st->parsers[st->parsers_num-1] == 
# 3473 "project/radare2/shlr/mpc/mpc.c" 3 4
                                           ((void *)0)
# 3473 "project/radare2/shlr/mpc/mpc.c"
                                               ) {
        return mpc_failf("No Parser in position %i! Only supplied %i Parsers!", i, st->parsers_num);
      }
    }

    return st->parsers[st->parsers_num-1];


  } else {


    for (i = 0; i < st->parsers_num; i++) {
      mpc_parser_t *q = st->parsers[i];
      if (q == 
# 3486 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3486 "project/radare2/shlr/mpc/mpc.c"
                  ) { return mpc_failf("Unknown Parser '%s'!", x); }
      if (q->name && strcmp(q->name, x) == 0) { return q; }
    }


    while (1) {

      p = 
# 3493 "project/radare2/shlr/mpc/mpc.c" 3 4
         __builtin_va_arg(
# 3493 "project/radare2/shlr/mpc/mpc.c"
         *st->va
# 3493 "project/radare2/shlr/mpc/mpc.c" 3 4
         ,
# 3493 "project/radare2/shlr/mpc/mpc.c"
         mpc_parser_t*
# 3493 "project/radare2/shlr/mpc/mpc.c" 3 4
         )
# 3493 "project/radare2/shlr/mpc/mpc.c"
                                       ;

      st->parsers_num++;
      st->parsers = realloc(st->parsers, sizeof(mpc_parser_t*) * st->parsers_num);
      st->parsers[st->parsers_num-1] = p;

      if (p == 
# 3499 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0) 
# 3499 "project/radare2/shlr/mpc/mpc.c"
                   || p->name == 
# 3499 "project/radare2/shlr/mpc/mpc.c" 3 4
                                 ((void *)0)
# 3499 "project/radare2/shlr/mpc/mpc.c"
                                     ) { return mpc_failf("Unknown Parser '%s'!", x); }
      if (p->name && strcmp(p->name, x) == 0) { return p; }

    }

  }

}

static mpc_val_t *mpcaf_grammar_id(mpc_val_t *x, void *s) {

  mpca_grammar_st_t *st = s;
  mpc_parser_t *p = mpca_grammar_find_parser(x, st);
  free(x);

  if (p->name) {
    return mpca_state(mpca_root(mpca_add_tag(p, p->name)));
  } else {
    return mpca_state(mpca_root(p));
  }
}

mpc_parser_t *mpca_grammar_st(const char *grammar, mpca_grammar_st_t *st) {

  char *err_msg;
  mpc_parser_t *err_out;
  mpc_result_t r;
  mpc_parser_t *GrammarTotal, *Grammar, *Term, *Factor, *Base;

  GrammarTotal = mpc_new("grammar_total");
  Grammar = mpc_new("grammar");
  Term = mpc_new("term");
  Factor = mpc_new("factor");
  Base = mpc_new("base");

  mpc_define(GrammarTotal,
    mpc_predictive(mpc_total(Grammar, mpc_soft_delete))
  );

  mpc_define(Grammar, mpc_and(2, mpcaf_grammar_or,
    Term,
    mpc_maybe(mpc_and(2, mpcf_snd_free, mpc_sym("|"), Grammar, free)),
    mpc_soft_delete
  ));

  mpc_define(Term, mpc_many1(mpcaf_grammar_and, Factor));

  mpc_define(Factor, mpc_and(2, mpcaf_grammar_repeat,
    Base,
      mpc_or(6,
        mpc_sym("*"),
        mpc_sym("+"),
        mpc_sym("?"),
        mpc_sym("!"),
        mpc_tok_brackets(mpc_int(), free),
        mpc_pass()),
    mpc_soft_delete
  ));

  mpc_define(Base, mpc_or(5,
    mpc_apply_to(mpc_tok(mpc_string_lit()), mpcaf_grammar_string, st),
    mpc_apply_to(mpc_tok(mpc_char_lit()), mpcaf_grammar_char, st),
    mpc_tok(mpc_and(3, mpcaf_fold_regex, mpc_regex_lit(), mpc_many(mpcf_strfold, mpc_oneof("ms")), mpc_lift_val(st), free, free)),
    mpc_apply_to(mpc_tok_braces(mpc_or(2, mpc_digits(), mpc_ident()), free), mpcaf_grammar_id, st),
    mpc_tok_parens(Grammar, mpc_soft_delete)
  ));

  mpc_optimise(GrammarTotal);
  mpc_optimise(Grammar);
  mpc_optimise(Factor);
  mpc_optimise(Term);
  mpc_optimise(Base);

  if(!mpc_parse("<mpc_grammar_compiler>", grammar, GrammarTotal, &r)) {
    err_msg = mpc_err_string(r.error);
    err_out = mpc_failf("Invalid Grammar: %s", err_msg);
    mpc_err_delete(r.error);
    free(err_msg);
    r.output = err_out;
  }

  mpc_cleanup(5, GrammarTotal, Grammar, Term, Factor, Base);

  mpc_optimise(r.output);

  return (st->flags & MPCA_LANG_PREDICTIVE) ? mpc_predictive(r.output) : r.output;

}

mpc_parser_t *mpca_grammar(int flags, const char *grammar, ...) {
  mpca_grammar_st_t st;
  mpc_parser_t *res;
  va_list va;
  
# 3592 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3592 "project/radare2/shlr/mpc/mpc.c"
 va
# 3592 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3592 "project/radare2/shlr/mpc/mpc.c"
 grammar
# 3592 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3592 "project/radare2/shlr/mpc/mpc.c"
                      ;

  st.va = &va;
  st.parsers_num = 0;
  st.parsers = 
# 3596 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3596 "project/radare2/shlr/mpc/mpc.c"
                  ;
  st.flags = flags;

  res = mpca_grammar_st(grammar, &st);
  free(st.parsers);
  
# 3601 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3601 "project/radare2/shlr/mpc/mpc.c"
 va
# 3601 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3601 "project/radare2/shlr/mpc/mpc.c"
           ;
  return res;
}

typedef struct {
  char *ident;
  char *name;
  mpc_parser_t *grammar;
} mpca_stmt_t;

static mpc_val_t *mpca_stmt_afold(int n, mpc_val_t **xs) {
  mpca_stmt_t *stmt = malloc(sizeof(mpca_stmt_t));
  stmt->ident = ((char**)xs)[0];
  stmt->name = ((char**)xs)[1];
  stmt->grammar = ((mpc_parser_t**)xs)[3];
  (void) n;
  free(((char**)xs)[2]);
  free(((char**)xs)[4]);

  return stmt;
}

static mpc_val_t *mpca_stmt_fold(int n, mpc_val_t **xs) {

  int i;
  mpca_stmt_t **stmts = malloc(sizeof(mpca_stmt_t*) * (n+1));

  for (i = 0; i < n; i++) {
    stmts[i] = xs[i];
  }
  stmts[n] = 
# 3631 "project/radare2/shlr/mpc/mpc.c" 3 4
            ((void *)0)
# 3631 "project/radare2/shlr/mpc/mpc.c"
                ;

  return stmts;
}

static void mpca_stmt_list_delete(mpc_val_t *x) {

  mpca_stmt_t **stmts = x;

  while(*stmts) {
    mpca_stmt_t *stmt = *stmts;
    free(stmt->ident);
    free(stmt->name);
    mpc_soft_delete(stmt->grammar);
    free(stmt);
    stmts++;
  }
  free(x);

}

static mpc_val_t *mpca_stmt_list_apply_to(mpc_val_t *x, void *s) {

  mpca_grammar_st_t *st = s;
  mpca_stmt_t *stmt;
  mpca_stmt_t **stmts = x;
  mpc_parser_t *left;

  while(*stmts) {
    stmt = *stmts;
    left = mpca_grammar_find_parser(stmt->ident, st);
    if (st->flags & MPCA_LANG_PREDICTIVE) { stmt->grammar = mpc_predictive(stmt->grammar); }
    if (stmt->name) { stmt->grammar = mpc_expect(stmt->grammar, stmt->name); }
    mpc_optimise(stmt->grammar);
    mpc_define(left, stmt->grammar);
    free(stmt->ident);
    free(stmt->name);
    free(stmt);
    stmts++;
  }

  free(x);

  return 
# 3674 "project/radare2/shlr/mpc/mpc.c" 3 4
        ((void *)0)
# 3674 "project/radare2/shlr/mpc/mpc.c"
            ;
}

static mpc_err_t *mpca_lang_st(mpc_input_t *i, mpca_grammar_st_t *st) {

  mpc_result_t r;
  mpc_err_t *e;
  mpc_parser_t *Lang, *Stmt, *Grammar, *Term, *Factor, *Base;

  Lang = mpc_new("lang");
  Stmt = mpc_new("stmt");
  Grammar = mpc_new("grammar");
  Term = mpc_new("term");
  Factor = mpc_new("factor");
  Base = mpc_new("base");

  mpc_define(Lang, mpc_apply_to(
    mpc_total(mpc_predictive(mpc_many(mpca_stmt_fold, Stmt)), mpca_stmt_list_delete),
    mpca_stmt_list_apply_to, st
  ));

  mpc_define(Stmt, mpc_and(5, mpca_stmt_afold,
    mpc_tok(mpc_ident()), mpc_maybe(mpc_tok(mpc_string_lit())), mpc_sym(":"), Grammar, mpc_sym(";"),
    free, free, free, mpc_soft_delete
  ));

  mpc_define(Grammar, mpc_and(2, mpcaf_grammar_or,
      Term,
      mpc_maybe(mpc_and(2, mpcf_snd_free, mpc_sym("|"), Grammar, free)),
      mpc_soft_delete
  ));

  mpc_define(Term, mpc_many1(mpcaf_grammar_and, Factor));

  mpc_define(Factor, mpc_and(2, mpcaf_grammar_repeat,
    Base,
      mpc_or(6,
        mpc_sym("*"),
        mpc_sym("+"),
        mpc_sym("?"),
        mpc_sym("!"),
        mpc_tok_brackets(mpc_int(), free),
        mpc_pass()),
    mpc_soft_delete
  ));

  mpc_define(Base, mpc_or(5,
    mpc_apply_to(mpc_tok(mpc_string_lit()), mpcaf_grammar_string, st),
    mpc_apply_to(mpc_tok(mpc_char_lit()), mpcaf_grammar_char, st),
    mpc_tok(mpc_and(3, mpcaf_fold_regex, mpc_regex_lit(), mpc_many(mpcf_strfold, mpc_oneof("ms")), mpc_lift_val(st), free, free)),
    mpc_apply_to(mpc_tok_braces(mpc_or(2, mpc_digits(), mpc_ident()), free), mpcaf_grammar_id, st),
    mpc_tok_parens(Grammar, mpc_soft_delete)
  ));

  mpc_optimise(Lang);
  mpc_optimise(Stmt);
  mpc_optimise(Grammar);
  mpc_optimise(Term);
  mpc_optimise(Factor);
  mpc_optimise(Base);

  if (!mpc_parse_input(i, Lang, &r)) {
    e = r.error;
  } else {
    e = 
# 3738 "project/radare2/shlr/mpc/mpc.c" 3 4
       ((void *)0)
# 3738 "project/radare2/shlr/mpc/mpc.c"
           ;
  }

  mpc_cleanup(6, Lang, Stmt, Grammar, Term, Factor, Base);

  return e;
}

mpc_err_t *mpca_lang_file(int flags, FILE *f, ...) {
  mpca_grammar_st_t st;
  mpc_input_t *i;
  mpc_err_t *err;

  va_list va;
  
# 3752 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3752 "project/radare2/shlr/mpc/mpc.c"
 va
# 3752 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3752 "project/radare2/shlr/mpc/mpc.c"
 f
# 3752 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3752 "project/radare2/shlr/mpc/mpc.c"
                ;

  st.va = &va;
  st.parsers_num = 0;
  st.parsers = 
# 3756 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3756 "project/radare2/shlr/mpc/mpc.c"
                  ;
  st.flags = flags;

  i = mpc_input_new_file("<mpca_lang_file>", f);
  err = mpca_lang_st(i, &st);
  mpc_input_delete(i);

  free(st.parsers);
  
# 3764 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3764 "project/radare2/shlr/mpc/mpc.c"
 va
# 3764 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3764 "project/radare2/shlr/mpc/mpc.c"
           ;
  return err;
}

mpc_err_t *mpca_lang_pipe(int flags, FILE *p, ...) {
  mpca_grammar_st_t st;
  mpc_input_t *i;
  mpc_err_t *err;

  va_list va;
  
# 3774 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3774 "project/radare2/shlr/mpc/mpc.c"
 va
# 3774 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3774 "project/radare2/shlr/mpc/mpc.c"
 p
# 3774 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3774 "project/radare2/shlr/mpc/mpc.c"
                ;

  st.va = &va;
  st.parsers_num = 0;
  st.parsers = 
# 3778 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3778 "project/radare2/shlr/mpc/mpc.c"
                  ;
  st.flags = flags;

  i = mpc_input_new_pipe("<mpca_lang_pipe>", p);
  err = mpca_lang_st(i, &st);
  mpc_input_delete(i);

  free(st.parsers);
  
# 3786 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3786 "project/radare2/shlr/mpc/mpc.c"
 va
# 3786 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3786 "project/radare2/shlr/mpc/mpc.c"
           ;
  return err;
}

mpc_err_t *mpca_lang(int flags, const char *language, ...) {

  mpca_grammar_st_t st;
  mpc_input_t *i;
  mpc_err_t *err;

  va_list va;
  
# 3797 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3797 "project/radare2/shlr/mpc/mpc.c"
 va
# 3797 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3797 "project/radare2/shlr/mpc/mpc.c"
 language
# 3797 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3797 "project/radare2/shlr/mpc/mpc.c"
                       ;

  st.va = &va;
  st.parsers_num = 0;
  st.parsers = 
# 3801 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3801 "project/radare2/shlr/mpc/mpc.c"
                  ;
  st.flags = flags;

  i = mpc_input_new_string("<mpca_lang>", language);
  err = mpca_lang_st(i, &st);
  mpc_input_delete(i);

  free(st.parsers);
  
# 3809 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3809 "project/radare2/shlr/mpc/mpc.c"
 va
# 3809 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3809 "project/radare2/shlr/mpc/mpc.c"
           ;
  return err;
}

mpc_err_t *mpca_lang_contents(int flags, const char *filename, ...) {

  mpca_grammar_st_t st;
  mpc_input_t *i;
  mpc_err_t *err;

  va_list va;

  FILE *f = fopen(filename, "rb");

  if (f == 
# 3823 "project/radare2/shlr/mpc/mpc.c" 3 4
          ((void *)0)
# 3823 "project/radare2/shlr/mpc/mpc.c"
              ) {
    err = mpc_err_file(filename, "Unable to open file!");
    return err;
  }

  
# 3828 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_start(
# 3828 "project/radare2/shlr/mpc/mpc.c"
 va
# 3828 "project/radare2/shlr/mpc/mpc.c" 3 4
 ,
# 3828 "project/radare2/shlr/mpc/mpc.c"
 filename
# 3828 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3828 "project/radare2/shlr/mpc/mpc.c"
                       ;

  st.va = &va;
  st.parsers_num = 0;
  st.parsers = 
# 3832 "project/radare2/shlr/mpc/mpc.c" 3 4
              ((void *)0)
# 3832 "project/radare2/shlr/mpc/mpc.c"
                  ;
  st.flags = flags;

  i = mpc_input_new_file(filename, f);
  err = mpca_lang_st(i, &st);
  mpc_input_delete(i);

  free(st.parsers);
  
# 3840 "project/radare2/shlr/mpc/mpc.c" 3 4
 __builtin_va_end(
# 3840 "project/radare2/shlr/mpc/mpc.c"
 va
# 3840 "project/radare2/shlr/mpc/mpc.c" 3 4
 )
# 3840 "project/radare2/shlr/mpc/mpc.c"
           ;

  fclose(f);

  return err;
}

static int mpc_nodecount_unretained(mpc_parser_t* p, int force) {

  int i, total;

  if (p->retained && !force) { return 0; }

  if (p->type == MPC_TYPE_EXPECT) { return 1 + mpc_nodecount_unretained(p->data.expect.x, 0); }

  if (p->type == MPC_TYPE_APPLY) { return 1 + mpc_nodecount_unretained(p->data.apply.x, 0); }
  if (p->type == MPC_TYPE_APPLY_TO) { return 1 + mpc_nodecount_unretained(p->data.apply_to.x, 0); }
  if (p->type == MPC_TYPE_PREDICT) { return 1 + mpc_nodecount_unretained(p->data.predict.x, 0); }

  if (p->type == MPC_TYPE_CHECK) { return 1 + mpc_nodecount_unretained(p->data.check.x, 0); }
  if (p->type == MPC_TYPE_CHECK_WITH) { return 1 + mpc_nodecount_unretained(p->data.check_with.x, 0); }

  if (p->type == MPC_TYPE_NOT) { return 1 + mpc_nodecount_unretained(p->data.not.x, 0); }
  if (p->type == MPC_TYPE_MAYBE) { return 1 + mpc_nodecount_unretained(p->data.not.x, 0); }

  if (p->type == MPC_TYPE_MANY) { return 1 + mpc_nodecount_unretained(p->data.repeat.x, 0); }
  if (p->type == MPC_TYPE_MANY1) { return 1 + mpc_nodecount_unretained(p->data.repeat.x, 0); }
  if (p->type == MPC_TYPE_COUNT) { return 1 + mpc_nodecount_unretained(p->data.repeat.x, 0); }

  if (p->type == MPC_TYPE_OR) {
    total = 1;
    for(i = 0; i < p->data.or.n; i++) {
      total += mpc_nodecount_unretained(p->data.or.xs[i], 0);
    }
    return total;
  }

  if (p->type == MPC_TYPE_AND) {
    total = 1;
    for(i = 0; i < p->data.and.n; i++) {
      total += mpc_nodecount_unretained(p->data.and.xs[i], 0);
    }
    return total;
  }

  return 1;

}

void mpc_stats(mpc_parser_t* p) {
  printf("Stats\n");
  printf("=====\n");
  printf("Node Count: %i\n", mpc_nodecount_unretained(p, 1));
}

static void mpc_optimise_unretained(mpc_parser_t *p, int force) {

  int i, n, m;
  mpc_parser_t *t;

  if (p->retained && !force) { return; }



  if (p->type == MPC_TYPE_EXPECT) { mpc_optimise_unretained(p->data.expect.x, 0); }
  if (p->type == MPC_TYPE_APPLY) { mpc_optimise_unretained(p->data.apply.x, 0); }
  if (p->type == MPC_TYPE_APPLY_TO) { mpc_optimise_unretained(p->data.apply_to.x, 0); }
  if (p->type == MPC_TYPE_CHECK) { mpc_optimise_unretained(p->data.check.x, 0); }
  if (p->type == MPC_TYPE_CHECK_WITH) { mpc_optimise_unretained(p->data.check_with.x, 0); }
  if (p->type == MPC_TYPE_PREDICT) { mpc_optimise_unretained(p->data.predict.x, 0); }
  if (p->type == MPC_TYPE_NOT) { mpc_optimise_unretained(p->data.not.x, 0); }
  if (p->type == MPC_TYPE_MAYBE) { mpc_optimise_unretained(p->data.not.x, 0); }
  if (p->type == MPC_TYPE_MANY) { mpc_optimise_unretained(p->data.repeat.x, 0); }
  if (p->type == MPC_TYPE_MANY1) { mpc_optimise_unretained(p->data.repeat.x, 0); }
  if (p->type == MPC_TYPE_COUNT) { mpc_optimise_unretained(p->data.repeat.x, 0); }

  if (p->type == MPC_TYPE_OR) {
    for(i = 0; i < p->data.or.n; i++) {
      mpc_optimise_unretained(p->data.or.xs[i], 0);
    }
  }

  if (p->type == MPC_TYPE_AND) {
    for(i = 0; i < p->data.and.n; i++) {
      mpc_optimise_unretained(p->data.and.xs[i], 0);
    }
  }



  while (1) {


    if (p->type == MPC_TYPE_OR
    && p->data.or.xs[p->data.or.n-1]->type == MPC_TYPE_OR
    && !p->data.or.xs[p->data.or.n-1]->retained) {
      t = p->data.or.xs[p->data.or.n-1];
      n = p->data.or.n; m = t->data.or.n;
      p->data.or.n = n + m - 1;
      p->data.or.xs = realloc(p->data.or.xs, sizeof(mpc_parser_t*) * (n + m -1));
      
# 3940 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 3940 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs + n - 1
# 3940 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 3940 "project/radare2/shlr/mpc/mpc.c"
     t->data.or.xs, m * sizeof(mpc_parser_t*)
# 3940 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 3940 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs + n - 1
# 3940 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 3940 "project/radare2/shlr/mpc/mpc.c"
                                                                             ;
      free(t->data.or.xs); free(t->name); free(t);
      continue;
    }


    if (p->type == MPC_TYPE_OR
    && p->data.or.xs[0]->type == MPC_TYPE_OR
    && !p->data.or.xs[0]->retained) {
      t = p->data.or.xs[0];
      n = p->data.or.n; m = t->data.or.n;
      p->data.or.n = n + m - 1;
      p->data.or.xs = realloc(p->data.or.xs, sizeof(mpc_parser_t*) * (n + m -1));
      
# 3953 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 3953 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs + m
# 3953 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 3953 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs + 1, (n - 1) * sizeof(mpc_parser_t*)
# 3953 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 3953 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs + m
# 3953 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 3953 "project/radare2/shlr/mpc/mpc.c"
                                                                                   ;
      
# 3954 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 3954 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs
# 3954 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 3954 "project/radare2/shlr/mpc/mpc.c"
     t->data.or.xs, m * sizeof(mpc_parser_t*)
# 3954 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 3954 "project/radare2/shlr/mpc/mpc.c"
     p->data.or.xs
# 3954 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 3954 "project/radare2/shlr/mpc/mpc.c"
                                                                     ;
      free(t->data.or.xs); free(t->name); free(t);
      continue;
    }


    if (p->type == MPC_TYPE_AND
    && p->data.and.n == 2
    && p->data.and.xs[0]->type == MPC_TYPE_PASS
    && !p->data.and.xs[0]->retained
    && p->data.and.f == mpcf_fold_ast) {
      t = p->data.and.xs[1];
      mpc_delete(p->data.and.xs[0]);
      free(p->data.and.xs); free(p->data.and.dxs); free(p->name);
      
# 3968 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memcpy_chk (
# 3968 "project/radare2/shlr/mpc/mpc.c"
     p
# 3968 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 3968 "project/radare2/shlr/mpc/mpc.c"
     t, sizeof(mpc_parser_t)
# 3968 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 3968 "project/radare2/shlr/mpc/mpc.c"
     p
# 3968 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 3968 "project/radare2/shlr/mpc/mpc.c"
                                       ;
      free(t);
      continue;
    }


    if (p->type == MPC_TYPE_AND
    && p->data.and.f == mpcf_fold_ast
    && p->data.and.xs[0]->type == MPC_TYPE_AND
    && !p->data.and.xs[0]->retained
    && p->data.and.xs[0]->data.and.f == mpcf_fold_ast) {
      t = p->data.and.xs[0];
      n = p->data.and.n; m = t->data.and.n;
      p->data.and.n = n + m - 1;
      p->data.and.xs = realloc(p->data.and.xs, sizeof(mpc_parser_t*) * (n + m - 1));
      p->data.and.dxs = realloc(p->data.and.dxs, sizeof(mpc_dtor_t) * (n + m - 1 - 1));
      
# 3984 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 3984 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + m
# 3984 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 3984 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + 1, (n - 1) * sizeof(mpc_parser_t*)
# 3984 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 3984 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + m
# 3984 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 3984 "project/radare2/shlr/mpc/mpc.c"
                                                                                     ;
      
# 3985 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 3985 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs
# 3985 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 3985 "project/radare2/shlr/mpc/mpc.c"
     t->data.and.xs, m * sizeof(mpc_parser_t*)
# 3985 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 3985 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs
# 3985 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 3985 "project/radare2/shlr/mpc/mpc.c"
                                                                       ;
      for (i = 0; i < p->data.and.n-1; i++) { p->data.and.dxs[i] = (mpc_dtor_t)mpc_ast_delete; }
      free(t->data.and.xs); free(t->data.and.dxs); free(t->name); free(t);
      continue;
    }


    if (p->type == MPC_TYPE_AND
    && p->data.and.f == mpcf_fold_ast
    && p->data.and.xs[p->data.and.n-1]->type == MPC_TYPE_AND
    && !p->data.and.xs[p->data.and.n-1]->retained
    && p->data.and.xs[p->data.and.n-1]->data.and.f == mpcf_fold_ast) {
      t = p->data.and.xs[p->data.and.n-1];
      n = p->data.and.n; m = t->data.and.n;
      p->data.and.n = n + m - 1;
      p->data.and.xs = realloc(p->data.and.xs, sizeof(mpc_parser_t*) * (n + m -1));
      p->data.and.dxs = realloc(p->data.and.dxs, sizeof(mpc_dtor_t) * (n + m - 1 - 1));
      
# 4002 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 4002 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + n - 1
# 4002 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 4002 "project/radare2/shlr/mpc/mpc.c"
     t->data.and.xs, m * sizeof(mpc_parser_t*)
# 4002 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 4002 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + n - 1
# 4002 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 4002 "project/radare2/shlr/mpc/mpc.c"
                                                                               ;
      for (i = 0; i < p->data.and.n-1; i++) { p->data.and.dxs[i] = (mpc_dtor_t)mpc_ast_delete; }
      free(t->data.and.xs); free(t->data.and.dxs); free(t->name); free(t);
      continue;
    }


    if (p->type == MPC_TYPE_AND
    && p->data.and.n == 2
    && p->data.and.xs[0]->type == MPC_TYPE_LIFT
    && p->data.and.xs[0]->data.lift.lf == mpcf_ctor_str
    && !p->data.and.xs[0]->retained
    && p->data.and.f == mpcf_strfold) {
      t = p->data.and.xs[1];
      mpc_delete(p->data.and.xs[0]);
      free(p->data.and.xs); free(p->data.and.dxs); free(p->name);
      
# 4018 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memcpy_chk (
# 4018 "project/radare2/shlr/mpc/mpc.c"
     p
# 4018 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 4018 "project/radare2/shlr/mpc/mpc.c"
     t, sizeof(mpc_parser_t)
# 4018 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 4018 "project/radare2/shlr/mpc/mpc.c"
     p
# 4018 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 4018 "project/radare2/shlr/mpc/mpc.c"
                                       ;
      free(t);
      continue;
    }


    if (p->type == MPC_TYPE_AND
    && p->data.and.f == mpcf_strfold
    && p->data.and.xs[0]->type == MPC_TYPE_AND
    && !p->data.and.xs[0]->retained
    && p->data.and.xs[0]->data.and.f == mpcf_strfold) {
      t = p->data.and.xs[0];
      n = p->data.and.n; m = t->data.and.n;
      p->data.and.n = n + m - 1;
      p->data.and.xs = realloc(p->data.and.xs, sizeof(mpc_parser_t*) * (n + m - 1));
      p->data.and.dxs = realloc(p->data.and.dxs, sizeof(mpc_dtor_t) * (n + m - 1 - 1));
      
# 4034 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 4034 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + m
# 4034 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 4034 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + 1, (n - 1) * sizeof(mpc_parser_t*)
# 4034 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 4034 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + m
# 4034 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 4034 "project/radare2/shlr/mpc/mpc.c"
                                                                                     ;
      
# 4035 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 4035 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs
# 4035 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 4035 "project/radare2/shlr/mpc/mpc.c"
     t->data.and.xs, m * sizeof(mpc_parser_t*)
# 4035 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 4035 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs
# 4035 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 4035 "project/radare2/shlr/mpc/mpc.c"
                                                                       ;
      for (i = 0; i < p->data.and.n-1; i++) { p->data.and.dxs[i] = free; }
      free(t->data.and.xs); free(t->data.and.dxs); free(t->name); free(t);
      continue;
    }


    if (p->type == MPC_TYPE_AND
    && p->data.and.f == mpcf_strfold
    && p->data.and.xs[p->data.and.n-1]->type == MPC_TYPE_AND
    && !p->data.and.xs[p->data.and.n-1]->retained
    && p->data.and.xs[p->data.and.n-1]->data.and.f == mpcf_strfold) {
      t = p->data.and.xs[p->data.and.n-1];
      n = p->data.and.n; m = t->data.and.n;
      p->data.and.n = n + m - 1;
      p->data.and.xs = realloc(p->data.and.xs, sizeof(mpc_parser_t*) * (n + m -1));
      p->data.and.dxs = realloc(p->data.and.dxs, sizeof(mpc_dtor_t) * (n + m - 1 - 1));
      
# 4052 "project/radare2/shlr/mpc/mpc.c" 3 4
     __builtin___memmove_chk (
# 4052 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + n - 1
# 4052 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 
# 4052 "project/radare2/shlr/mpc/mpc.c"
     t->data.and.xs, m * sizeof(mpc_parser_t*)
# 4052 "project/radare2/shlr/mpc/mpc.c" 3 4
     , __builtin_object_size (
# 4052 "project/radare2/shlr/mpc/mpc.c"
     p->data.and.xs + n - 1
# 4052 "project/radare2/shlr/mpc/mpc.c" 3 4
     , 0))
# 4052 "project/radare2/shlr/mpc/mpc.c"
                                                                               ;
      for (i = 0; i < p->data.and.n-1; i++) { p->data.and.dxs[i] = free; }
      free(t->data.and.xs); free(t->data.and.dxs); free(t->name); free(t);
      continue;
    }

    return;

  }

}

void mpc_optimise(mpc_parser_t *p) {
  mpc_optimise_unretained(p, 1);
}
