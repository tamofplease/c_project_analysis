# 0 "project/goaccess/src/tpl.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/tpl.c"
# 29 "project/goaccess/src/tpl.c"
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








# 30 "project/goaccess/src/tpl.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 31 "project/goaccess/src/tpl.c" 2
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






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 2 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 32 "project/goaccess/src/tpl.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
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

# 365 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

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
# 33 "project/goaccess/src/tpl.c" 2


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4


int getattrlistbulk(int, void *, void *, size_t, uint64_t) ;
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;
int setattrlistat(int, const char *, void *, void *, size_t, uint32_t) ;


# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 203 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
# 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char * __path, const char * __arg0, ...) ;
int execle(const char * __path, const char * __arg0, ...) ;
int execlp(const char * __file, const char * __arg0, ...) ;
int execv(const char * __path, char * const * __argv) ;
int execve(const char * __file, char * const * __argv, char * const * __envp) ;
int execvp(const char * __file, char * const * __argv) ;
pid_t fork(void) ;
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write" );

# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;

# 532 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4






__attribute__((__deprecated__))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);

void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((__const__)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );






__attribute__((__deprecated__))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void) ;


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);

# 620 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 3 4

typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int) ;


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_check_fd_set(int _a, const void *_b)
{




 if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {



  return __darwin_check_fd_set_overflow(_a, _b, 0);

 } else {
  return 1;
 }



}


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  return _p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8))));
 }

 return 0;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)




__asm("_" "pselect" "$1050")




;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" "$1050")




;
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 636 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 640 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) ;
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) ;
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) ;
# 656 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) ;
int mkpathat_np(int dfd, const char *path, mode_t omode)
 
  ;
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
 
  ;
int mkostemps(char *path, int slen, int oflags)
 
  ;

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
 
  ;
char *mkdtempat_np(int dfd, char *path)
 
  ;
int mkstempsat_np(int dfd, char *path, int slen)
 
  ;
int mkostempsat_np(int dfd, char *path, int slen, int oflags)
 
  ;
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);

__attribute__((__deprecated__("Use of per-thread security contexts is error-prone and discouraged.")))
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);

int reboot(int);
int revoke(const char *);

__attribute__((__deprecated__)) int rcmd(char **, int, const char *, const char *, const char *, int *);
__attribute__((__deprecated__)) int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
__attribute__((__deprecated__)) int rresvport(int *);
__attribute__((__deprecated__)) int rresvport_af(int *, int);
__attribute__((__deprecated__)) int iruserok(unsigned long, int, const char *, const char *);
__attribute__((__deprecated__)) int iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((__deprecated__)) int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);






int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) ;
int fsetattrlist(int,void*,void*,size_t,unsigned int) ;
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) ;
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
# 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) ;
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) ;




int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;


# 36 "project/goaccess/src/tpl.c" 2




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 3 4
typedef unsigned char u_char;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 3 4
typedef unsigned short u_short;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 3 4
typedef unsigned int u_int;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 3 4
typedef char * caddr_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 113 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
typedef __int32_t fd_mask;
# 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 222 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 234 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 41 "project/goaccess/src/tpl.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 242 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 378 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4


int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int lstat(const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" "$INODE64");
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) ;
int fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" "$INODE64") ;
int mkdirat(int, const char *, mode_t) ;




int futimens(int __fd, const struct timespec __times[2]) ;
int utimensat(int __fd, const char *__path, const struct timespec __times[2],
    int __flag) ;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 406 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int lchflags(const char *, __uint32_t) ;
int lchmod(const char *, mode_t) ;
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int umaskx_np(filesec_t) ;



int fstatx64_np(int, struct stat64 *, filesec_t) ;
int lstatx64_np(const char *, struct stat64 *, filesec_t) ;
int statx64_np(const char *, struct stat64 *, filesec_t) ;
int fstat64(int, struct stat64 *) ;
int lstat64(const char *, struct stat64 *) ;
int stat64(const char *, struct stat64 *) ;




# 42 "project/goaccess/src/tpl.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 1 3 4
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 326 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 350 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
# 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flocktimeout {
 struct flock fl;
 struct timespec timeout;
};
# 378 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct radvisory {
 off_t ra_offset;
 int ra_count;
};
# 391 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;



 size_t fs_fsignatures_size;
 char fs_cdhash[20];
 int fs_hash_type;
} fsignatures_t;

typedef struct fsupplement {
 off_t fs_file_start;
 off_t fs_blob_start;
 size_t fs_blob_size;
 int fs_orig_fd;
} fsupplement_t;
# 422 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fchecklv {
 off_t lv_file_start;
 size_t lv_error_message_size;
 void *lv_error_message;
} fchecklv_t;
# 436 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fgetsigsinfo {
 off_t fg_file_start;
 int fg_info_request;
 int fg_sig_is_platform;
} fgetsigsinfo_t;
# 451 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fstore {
 unsigned int fst_flags;
 int fst_posmode;
 off_t fst_offset;
 off_t fst_length;
 off_t fst_bytesalloc;
} fstore_t;


typedef struct fpunchhole {
 unsigned int fp_flags;
 unsigned int reserved;
 off_t fp_offset;
 off_t fp_length;
} fpunchhole_t;


typedef struct ftrimactivefile {
 off_t fta_offset;
 off_t fta_length;
} ftrimactivefile_t;


typedef struct fspecread {
 unsigned int fsr_flags;
 unsigned int reserved;
 off_t fsr_offset;
 off_t fsr_length;
} fspecread_t;



typedef struct fbootstraptransfer {
 off_t fbt_offset;
 size_t fbt_length;
 void *fbt_buffer;
} fbootstraptransfer_t;
# 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#pragma pack(4)

struct log2phys {
 unsigned int l2p_flags;
 off_t l2p_contigbytes;


 off_t l2p_devoffset;


};

#pragma pack()
# 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef enum {
 FILESEC_OWNER = 1,
 FILESEC_GROUP = 2,
 FILESEC_UUID = 3,
 FILESEC_MODE = 4,
 FILESEC_ACL = 5,
 FILESEC_GRPUUID = 6,


 FILESEC_ACL_RAW = 100,
 FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;






int open(const char *, int, ...) __asm("_" "open" );

int openat(int, const char *, int, ...) __asm("_" "openat" ) ;

int creat(const char *, mode_t) __asm("_" "creat" );
int fcntl(int, int, ...) __asm("_" "fcntl" );


int openx_np(const char *, int, filesec_t);




int open_dprotected_np( const char *, int, int, int, ...);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_unset_property(filesec_t, filesec_property_t) ;




# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 2 3 4
# 43 "project/goaccess/src/tpl.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 44 "project/goaccess/src/tpl.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4







extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);



extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);


extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);







# 46 "project/goaccess/src/tpl.c" 2
# 63 "project/goaccess/src/tpl.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mman.h" 1 3 4
# 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mman.h" 3 4


int mlockall(int);
int munlockall(void);

int mlock(const void *, size_t);



void * mmap(void *, size_t, int, int, int, off_t) __asm("_" "mmap" );


int mprotect(void *, size_t, int) __asm("_" "mprotect" );

int msync(void *, size_t, int) __asm("_" "msync" );

int munlock(const void *, size_t);

int munmap(void *, size_t) __asm("_" "munmap" );

int shm_open(const char *, int, ...);
int shm_unlink(const char *);

int posix_madvise(void *, size_t, int);


int madvise(void *, size_t, int);
int mincore(const void *, size_t, char *);
int minherit(void *, size_t, int);




# 64 "project/goaccess/src/tpl.c" 2


# 1 "project/goaccess/src/tpl.h" 1
# 27 "project/goaccess/src/tpl.h"
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 28 "project/goaccess/src/tpl.h" 2
# 77 "project/goaccess/src/tpl.h"
  
# 77 "project/goaccess/src/tpl.h"
 typedef int (tpl_print_fcn) (const char *fmt, ...);
  typedef void *(tpl_malloc_fcn) (size_t sz);
  typedef void *(tpl_realloc_fcn) (void *ptr, size_t sz);
  typedef void (tpl_free_fcn) (void *ptr);
  typedef void (tpl_fatal_fcn) (const char *fmt, ...);

  typedef struct tpl_hook_t {
    tpl_print_fcn *oops __attribute__((__format__ (printf, 1, 2)));
    tpl_malloc_fcn *malloc;
    tpl_realloc_fcn *realloc;
    tpl_free_fcn *free;
    tpl_fatal_fcn *fatal __attribute__((__format__ (printf, 1, 2)))
      __attribute__((__noreturn__));
    size_t gather_max;
  } tpl_hook_t;

  typedef struct tpl_node {
    int type;
    void *addr;
    void *data;
    int num;
    size_t ser_osz;
    struct tpl_node *children;
    struct tpl_node *next, *prev;
    struct tpl_node *parent;
  } tpl_node;


  typedef struct tpl_bin {
    void *addr;
    uint32_t sz;
  } tpl_bin;


  typedef struct tpl_gather_t {
    char *img;
    int len;
  } tpl_gather_t;


  typedef int (tpl_gather_cb) (void *img, size_t sz, void *data);


  tpl_node *tpl_map (char *fmt, ...);
  void tpl_free (tpl_node * r);
  int tpl_pack (tpl_node * r, int i);
  int tpl_unpack (tpl_node * r, int i);
  int tpl_dump (tpl_node * r, int mode, ...);
  int tpl_load (tpl_node * r, int mode, ...);
  int tpl_Alen (tpl_node * r, int i);
  char *tpl_peek (int mode, ...);
  int tpl_gather (int mode, ...);
  int tpl_jot (int mode, ...);

  tpl_node *tpl_map_va (char *fmt, va_list ap);
# 67 "project/goaccess/src/tpl.c" 2
# 128 "project/goaccess/src/tpl.c"
typedef struct tpl_pidx {
  struct tpl_node *node;
  struct tpl_pidx *next, *prev;
} tpl_pidx;


typedef struct tpl_atyp {
  uint32_t num;
  size_t sz;
  struct tpl_backbone *bb, *bbtail;
  void *cur;
} tpl_atyp;


typedef struct tpl_backbone {
  struct tpl_backbone *next;





  char data[];

} tpl_backbone;


typedef struct tpl_mmap_rec {
  int fd;
  void *text;
  size_t text_sz;
} tpl_mmap_rec;


typedef struct tpl_root_data {
  int flags;
  tpl_pidx *pidx;
  tpl_mmap_rec mmap;
  char *fmt;
  int *fxlens, num_fxlens;
} tpl_root_data;


struct tpl_type_t {
  char c;
  int sz;
};



static tpl_node *tpl_node_new (tpl_node * parent);
static tpl_node *tpl_find_i (tpl_node * n, int i);
static void *tpl_cpv (void *datav, const void *data, size_t sz);
static void *tpl_extend_backbone (tpl_node * n);
static char *tpl_fmt (tpl_node * r);
static void *tpl_dump_atyp (tpl_node * n, tpl_atyp * at, void *dv);
static size_t tpl_ser_osz (tpl_node * n);
static void tpl_free_atyp (tpl_node * n, tpl_atyp * atyp);
static int tpl_dump_to_mem (tpl_node * r, void *addr, size_t sz);
static int tpl_mmap_file (char *filename, tpl_mmap_rec * map_rec);
static int tpl_mmap_output_file (char *filename, size_t sz, void **text_out);
static int tpl_cpu_bigendian (void);
static int tpl_needs_endian_swap (void *);
static void tpl_byteswap (void *word, int len);
static void tpl_fatal (const char *fmt, ...)
  __attribute__((__format__ (printf, 1, 2))) __attribute__((__noreturn__));
static int tpl_serlen (tpl_node * r, tpl_node * n, void *dv, size_t *serlen);
static int tpl_unpackA0 (tpl_node * r);
static int tpl_oops (const char *fmt, ...)
  __attribute__((__format__ (printf, 1, 2)));
static int tpl_gather_mem (char *buf, size_t len, tpl_gather_t ** gs,
                           tpl_gather_cb * cb, void *data);
static int tpl_gather_nonblocking (int fd, tpl_gather_t ** gs, tpl_gather_cb * cb, void *data);
static int tpl_gather_blocking (int fd, void **img, size_t *sz);







struct tpl_double_alignment_detector {
  char a;
  double d;
};



struct tpl_int64_alignment_detector {
  int i;
  int64_t j;
};

typedef struct {
  size_t inter_elt_len;
  tpl_node *iter_start_node;
  size_t iternum;
} tpl_pound_data;


tpl_hook_t tpl_hook = {
                      tpl_oops,
                      malloc,
                      realloc,
                      free,
                      tpl_fatal,
                      0

};

static const char tpl_fmt_chars[] = "AS($)BiucsfIUjv#";


static const char tpl_datapeek_ok_chars[] = "iucsfIUjv";
static const struct tpl_type_t tpl_types[] = {
                            {'r', 0},
                            {'i', sizeof (int32_t)},
                            {'u', sizeof (uint32_t)},
                            {'c', sizeof (char)},
                            {'s', sizeof (char *)},
                            {'A', 0},
                            {'B', 0},
                            {'f', 8},

                            {'I', sizeof (int64_t)},
                            {'U', sizeof (uint64_t)},
                            {'j', sizeof (int16_t)},
                            {'v', sizeof (uint16_t)},
                            {'#', 0},
};


static int
tpl_oops (const char *fmt, ...) {
  va_list ap;
  
# 262 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 262 "project/goaccess/src/tpl.c"
 ap
# 262 "project/goaccess/src/tpl.c" 3 4
 ,
# 262 "project/goaccess/src/tpl.c"
 fmt
# 262 "project/goaccess/src/tpl.c" 3 4
 )
# 262 "project/goaccess/src/tpl.c"
                   ;
  vfprintf (
# 263 "project/goaccess/src/tpl.c" 3 4
           __stderrp
# 263 "project/goaccess/src/tpl.c"
                 , fmt, ap);
  
# 264 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 264 "project/goaccess/src/tpl.c"
 ap
# 264 "project/goaccess/src/tpl.c" 3 4
 )
# 264 "project/goaccess/src/tpl.c"
            ;
  return 0;
}


static tpl_node *
tpl_node_new (tpl_node * parent) {
  tpl_node *n;
  if ((n = tpl_hook.malloc (sizeof (tpl_node))) == 
# 272 "project/goaccess/src/tpl.c" 3 4
                                                  ((void *)0)
# 272 "project/goaccess/src/tpl.c"
                                                      ) {
    tpl_hook.fatal("out of memory\n");
  }
  n->addr = 
# 275 "project/goaccess/src/tpl.c" 3 4
           ((void *)0)
# 275 "project/goaccess/src/tpl.c"
               ;
  n->data = 
# 276 "project/goaccess/src/tpl.c" 3 4
           ((void *)0)
# 276 "project/goaccess/src/tpl.c"
               ;
  n->num = 1;
  n->ser_osz = 0;
  n->children = 
# 279 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 279 "project/goaccess/src/tpl.c"
                   ;
  n->next = 
# 280 "project/goaccess/src/tpl.c" 3 4
           ((void *)0)
# 280 "project/goaccess/src/tpl.c"
               ;
  n->parent = parent;
  return n;
}
# 293 "project/goaccess/src/tpl.c"
static char *
calc_field_addr (tpl_node * parent, int type, char *struct_addr, int ordinal) {
  tpl_node *prev;
  int offset;
  int align_sz;

  if (ordinal == 1)
    return struct_addr;


  prev = parent->children->prev;
  switch (type) {
  case 7:
    align_sz = sizeof (struct tpl_double_alignment_detector) > 12 ? 8 : 4;
    break;
  case 8:
  case 9:
    align_sz = sizeof (struct tpl_int64_alignment_detector) > 12 ? 8 : 4;
    break;
  default:
    align_sz = tpl_types[type].sz;
    break;
  }
  offset = ((uintptr_t) prev->addr - (uintptr_t) struct_addr)
    + (tpl_types[prev->type].sz * prev->num);
  offset = (offset + align_sz - 1) / align_sz * align_sz;
  return struct_addr + offset;
}

 tpl_node *
tpl_map (char *fmt, ...) {
  va_list ap;
  tpl_node *tn;

  
# 327 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 327 "project/goaccess/src/tpl.c"
 ap
# 327 "project/goaccess/src/tpl.c" 3 4
 ,
# 327 "project/goaccess/src/tpl.c"
 fmt
# 327 "project/goaccess/src/tpl.c" 3 4
 )
# 327 "project/goaccess/src/tpl.c"
                   ;
  tn = tpl_map_va (fmt, ap);
  
# 329 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 329 "project/goaccess/src/tpl.c"
 ap
# 329 "project/goaccess/src/tpl.c" 3 4
 )
# 329 "project/goaccess/src/tpl.c"
            ;
  return tn;
}

 tpl_node *
tpl_map_va (char *fmt, va_list ap) {
  int lparen_level = 0, expect_lparen = 0, t = 0, in_structure = 0, ordinal = 0;
  int in_nested_structure = 0;
  char *c, *peek, *struct_addr = 
# 337 "project/goaccess/src/tpl.c" 3 4
                                ((void *)0)
# 337 "project/goaccess/src/tpl.c"
                                    , *struct_next;
  tpl_node *root, *parent, *n = 
# 338 "project/goaccess/src/tpl.c" 3 4
                               ((void *)0)
# 338 "project/goaccess/src/tpl.c"
                                   , *preceding, *iter_start_node = 
# 338 "project/goaccess/src/tpl.c" 3 4
                                                                    ((void *)0)
# 338 "project/goaccess/src/tpl.c"
                                                                        ,
    *struct_widest_node = 
# 339 "project/goaccess/src/tpl.c" 3 4
                         ((void *)0)
# 339 "project/goaccess/src/tpl.c"
                             , *np;
  tpl_pidx *pidx;
  tpl_pound_data *pd;
  int *fxlens, num_fxlens, pound_num, pound_prod, applies_to_struct;
  int contig_fxlens[10];
  uint32_t num_contig_fxlens;
  uint32_t i;
  int j;
  ptrdiff_t inter_elt_len = 0;


  root = tpl_node_new (
# 350 "project/goaccess/src/tpl.c" 3 4
                      ((void *)0)
# 350 "project/goaccess/src/tpl.c"
                          );
  root->type = 0;
  root->data = (tpl_root_data *) tpl_hook.malloc (sizeof (tpl_root_data));
  if (!root->data)
    tpl_hook.fatal("out of memory\n");
  
# 355 "project/goaccess/src/tpl.c" 3 4
 __builtin___memset_chk (
# 355 "project/goaccess/src/tpl.c"
 (tpl_root_data *) root->data
# 355 "project/goaccess/src/tpl.c" 3 4
 , 
# 355 "project/goaccess/src/tpl.c"
 0, sizeof (tpl_root_data)
# 355 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 355 "project/goaccess/src/tpl.c"
 (tpl_root_data *) root->data
# 355 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 355 "project/goaccess/src/tpl.c"
                                                                 ;


  root->ser_osz = sizeof (uint32_t);
  root->ser_osz += strlen (fmt) + 1;
  root->ser_osz += 4;

  parent = root;

  c = fmt;
  while (*c != '\0') {
    switch (*c) {
    case 'c':
    case 'i':
    case 'u':
    case 'j':
    case 'v':
    case 'I':
    case 'U':
    case 'f':
      if (*c == 'c')
        t = 3;
      else if (*c == 'i')
        t = 1;
      else if (*c == 'u')
        t = 2;
      else if (*c == 'j')
        t = 10;
      else if (*c == 'v')
        t = 11;
      else if (*c == 'I')
        t = 8;
      else if (*c == 'U')
        t = 9;
      else if (*c == 'f')
        t = 7;

      if (expect_lparen)
        goto fail;
      n = tpl_node_new (parent);
      n->type = t;
      if (in_structure) {
        if (ordinal == 1) {

          iter_start_node = n;
          struct_widest_node = n;
        }
        if (tpl_types[n->type].sz > tpl_types[struct_widest_node->type].sz) {
          struct_widest_node = n;
        }
        n->addr = calc_field_addr (parent, n->type, struct_addr, ordinal++);
      } else
        n->addr = (void *) 
# 407 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 407 "project/goaccess/src/tpl.c"
                          ap
# 407 "project/goaccess/src/tpl.c" 3 4
                          ,
# 407 "project/goaccess/src/tpl.c"
                          void *
# 407 "project/goaccess/src/tpl.c" 3 4
                          )
# 407 "project/goaccess/src/tpl.c"
                                             ;
      n->data = tpl_hook.malloc (tpl_types[t].sz);
      if (!n->data)
        tpl_hook.fatal("out of memory\n");
      if (n->parent->type == 5)
        ((tpl_atyp *) (n->parent->data))->sz += tpl_types[t].sz;
      do { if (parent->children) { (n)->prev = (parent->children)->prev; (parent->children)->prev->next = (n); (parent->children)->prev = (n); (n)->next = 
# 413 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 413 "project/goaccess/src/tpl.c"
     ; } else { (parent->children)=(n); (parent->children)->prev = (parent->children); (parent->children)->next = 
# 413 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 413 "project/goaccess/src/tpl.c"
     ; } } while (0);;
      break;
    case 's':
      if (expect_lparen)
        goto fail;
      n = tpl_node_new (parent);
      n->type = 4;
      if (in_structure) {
        if (ordinal == 1) {
          iter_start_node = n;
          struct_widest_node = n;
        }
        if (tpl_types[n->type].sz > tpl_types[struct_widest_node->type].sz) {
          struct_widest_node = n;
        }
        n->addr = calc_field_addr (parent, n->type, struct_addr, ordinal++);
      } else
        n->addr = (void *) 
# 430 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 430 "project/goaccess/src/tpl.c"
                          ap
# 430 "project/goaccess/src/tpl.c" 3 4
                          ,
# 430 "project/goaccess/src/tpl.c"
                          void *
# 430 "project/goaccess/src/tpl.c" 3 4
                          )
# 430 "project/goaccess/src/tpl.c"
                                             ;
      n->data = tpl_hook.malloc (sizeof (char *));
      if (!n->data)
        tpl_hook.fatal("out of memory\n");
      *(char **) (n->data) = 
# 434 "project/goaccess/src/tpl.c" 3 4
                            ((void *)0)
# 434 "project/goaccess/src/tpl.c"
                                ;
      if (n->parent->type == 5)
        ((tpl_atyp *) (n->parent->data))->sz += sizeof (void *);
      do { if (parent->children) { (n)->prev = (parent->children)->prev; (parent->children)->prev->next = (n); (parent->children)->prev = (n); (n)->next = 
# 437 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 437 "project/goaccess/src/tpl.c"
     ; } else { (parent->children)=(n); (parent->children)->prev = (parent->children); (parent->children)->next = 
# 437 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 437 "project/goaccess/src/tpl.c"
     ; } } while (0);;
      break;
    case '#':

      if (!parent->children)
        goto fail;
      preceding = parent->children->prev;
      t = preceding->type;
      applies_to_struct = (*(c - 1) == ')') ? 1 : 0;
      if (!applies_to_struct) {
        if (!(t == 3 || t == 1 ||
              t == 2 || t == 7 ||
              t == 9 || t == 8 ||
              t == 11 || t == 10 || t == 4))
          goto fail;
      }

      pound_prod = 1;
      num_contig_fxlens = 0;
      for (peek = c; *peek == '#'; peek++) {
        pound_num = 
# 457 "project/goaccess/src/tpl.c" 3 4
                   __builtin_va_arg(
# 457 "project/goaccess/src/tpl.c"
                   ap
# 457 "project/goaccess/src/tpl.c" 3 4
                   ,
# 457 "project/goaccess/src/tpl.c"
                   int
# 457 "project/goaccess/src/tpl.c" 3 4
                   )
# 457 "project/goaccess/src/tpl.c"
                                   ;
        if (pound_num < 1) {
          tpl_hook.fatal ("non-positive iteration count %d\n", pound_num);
        }
        if (num_contig_fxlens >= (sizeof (contig_fxlens) / sizeof (contig_fxlens[0]))) {
          tpl_hook.fatal ("contiguous # exceeds hardcoded limit\n");
        }
        contig_fxlens[num_contig_fxlens++] = pound_num;
        pound_prod *= pound_num;
      }

      c = peek - 1;

      if (applies_to_struct) {
        n = tpl_node_new (parent);
        n->type = 12;
        n->num = pound_prod;
        n->data = tpl_hook.malloc (sizeof (tpl_pound_data));
        if (!n->data)
          tpl_hook.fatal("out of memory\n");
        pd = (tpl_pound_data *) n->data;
        pd->inter_elt_len = inter_elt_len;
        pd->iter_start_node = iter_start_node;
        pd->iternum = 0;
        do { if (parent->children) { (n)->prev = (parent->children)->prev; (parent->children)->prev->next = (n); (parent->children)->prev = (n); (n)->next = 
# 481 "project/goaccess/src/tpl.c" 3 4
       ((void *)0)
# 481 "project/goaccess/src/tpl.c"
       ; } else { (parent->children)=(n); (parent->children)->prev = (parent->children); (parent->children)->next = 
# 481 "project/goaccess/src/tpl.c" 3 4
       ((void *)0)
# 481 "project/goaccess/src/tpl.c"
       ; } } while (0);;

        for (np = iter_start_node; np != n; np = np->next) {
          if (n->parent->type == 5) {
            ((tpl_atyp *) (n->parent->data))->sz +=
              tpl_types[np->type].sz * (np->num * (n->num - 1));
          }
          np->data = tpl_hook.realloc (np->data, tpl_types[np->type].sz * np->num * n->num);
          if (!np->data)
            tpl_hook.fatal("out of memory\n");
          
# 491 "project/goaccess/src/tpl.c" 3 4
         __builtin___memset_chk (
# 491 "project/goaccess/src/tpl.c"
         np->data
# 491 "project/goaccess/src/tpl.c" 3 4
         , 
# 491 "project/goaccess/src/tpl.c"
         0, tpl_types[np->type].sz * np->num * n->num
# 491 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 491 "project/goaccess/src/tpl.c"
         np->data
# 491 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 491 "project/goaccess/src/tpl.c"
                                                                        ;
        }
      } else {
        preceding->num = pound_prod;
        preceding->data = tpl_hook.realloc (preceding->data, tpl_types[t].sz * preceding->num);
        if (!preceding->data)
          tpl_hook.fatal("out of memory\n");
        
# 498 "project/goaccess/src/tpl.c" 3 4
       __builtin___memset_chk (
# 498 "project/goaccess/src/tpl.c"
       preceding->data
# 498 "project/goaccess/src/tpl.c" 3 4
       , 
# 498 "project/goaccess/src/tpl.c"
       0, tpl_types[t].sz * preceding->num
# 498 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 498 "project/goaccess/src/tpl.c"
       preceding->data
# 498 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 498 "project/goaccess/src/tpl.c"
                                                                    ;
        if (n->parent->type == 5) {
          ((tpl_atyp *) (n->parent->data))->sz += tpl_types[t].sz * (preceding->num - 1);
        }
      }
      root->ser_osz += (sizeof (uint32_t) * num_contig_fxlens);

      j = ((tpl_root_data *) root->data)->num_fxlens;
      (((tpl_root_data *) root->data)->num_fxlens) += num_contig_fxlens;
      num_fxlens = ((tpl_root_data *) root->data)->num_fxlens;
      fxlens = ((tpl_root_data *) root->data)->fxlens;
      fxlens = tpl_hook.realloc (fxlens, sizeof (int) * num_fxlens);
      if (!fxlens)
        tpl_hook.fatal("out of memory\n");
      ((tpl_root_data *) root->data)->fxlens = fxlens;
      for (i = 0; i < num_contig_fxlens; i++)
        fxlens[j++] = contig_fxlens[i];

      break;
    case 'B':
      if (expect_lparen)
        goto fail;
      if (in_structure)
        goto fail;
      n = tpl_node_new (parent);
      n->type = 6;
      n->addr = (tpl_bin *) 
# 524 "project/goaccess/src/tpl.c" 3 4
                           __builtin_va_arg(
# 524 "project/goaccess/src/tpl.c"
                           ap
# 524 "project/goaccess/src/tpl.c" 3 4
                           ,
# 524 "project/goaccess/src/tpl.c"
                           void *
# 524 "project/goaccess/src/tpl.c" 3 4
                           )
# 524 "project/goaccess/src/tpl.c"
                                              ;
      n->data = tpl_hook.malloc (sizeof (tpl_bin *));
      if (!n->data)
        tpl_hook.fatal("out of memory\n");
      *((tpl_bin **) n->data) = 
# 528 "project/goaccess/src/tpl.c" 3 4
                               ((void *)0)
# 528 "project/goaccess/src/tpl.c"
                                   ;
      if (n->parent->type == 5)
        ((tpl_atyp *) (n->parent->data))->sz += sizeof (tpl_bin);
      do { if (parent->children) { (n)->prev = (parent->children)->prev; (parent->children)->prev->next = (n); (parent->children)->prev = (n); (n)->next = 
# 531 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 531 "project/goaccess/src/tpl.c"
     ; } else { (parent->children)=(n); (parent->children)->prev = (parent->children); (parent->children)->next = 
# 531 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 531 "project/goaccess/src/tpl.c"
     ; } } while (0);;
      break;
    case 'A':
      if (in_structure)
        goto fail;
      n = tpl_node_new (parent);
      n->type = 5;
      do { if (parent->children) { (n)->prev = (parent->children)->prev; (parent->children)->prev->next = (n); (parent->children)->prev = (n); (n)->next = 
# 538 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 538 "project/goaccess/src/tpl.c"
     ; } else { (parent->children)=(n); (parent->children)->prev = (parent->children); (parent->children)->next = 
# 538 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 538 "project/goaccess/src/tpl.c"
     ; } } while (0);;
      parent = n;
      expect_lparen = 1;
      pidx = (tpl_pidx *) tpl_hook.malloc (sizeof (tpl_pidx));
      if (!pidx)
        tpl_hook.fatal("out of memory\n");
      pidx->node = n;
      pidx->next = 
# 545 "project/goaccess/src/tpl.c" 3 4
                  ((void *)0)
# 545 "project/goaccess/src/tpl.c"
                      ;
      do { if (((tpl_root_data *) (root->data))->pidx) { (pidx)->prev = (((tpl_root_data *) (root->data))->pidx)->prev; (((tpl_root_data *) (root->data))->pidx)->prev->next = (pidx); (((tpl_root_data *) (root->data))->pidx)->prev = (pidx); (pidx)->next = 
# 546 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 546 "project/goaccess/src/tpl.c"
     ; } else { (((tpl_root_data *) (root->data))->pidx)=(pidx); (((tpl_root_data *) (root->data))->pidx)->prev = (((tpl_root_data *) (root->data))->pidx); (((tpl_root_data *) (root->data))->pidx)->next = 
# 546 "project/goaccess/src/tpl.c" 3 4
     ((void *)0)
# 546 "project/goaccess/src/tpl.c"
     ; } } while (0);;

      n->data = (tpl_atyp *) tpl_hook.malloc (sizeof (tpl_atyp));
      if (!n->data)
        tpl_hook.fatal("out of memory\n");
      ((tpl_atyp *) (n->data))->num = 0;
      ((tpl_atyp *) (n->data))->sz = 0;
      ((tpl_atyp *) (n->data))->bb = 
# 553 "project/goaccess/src/tpl.c" 3 4
                                    ((void *)0)
# 553 "project/goaccess/src/tpl.c"
                                        ;
      ((tpl_atyp *) (n->data))->bbtail = 
# 554 "project/goaccess/src/tpl.c" 3 4
                                        ((void *)0)
# 554 "project/goaccess/src/tpl.c"
                                            ;
      ((tpl_atyp *) (n->data))->cur = 
# 555 "project/goaccess/src/tpl.c" 3 4
                                     ((void *)0)
# 555 "project/goaccess/src/tpl.c"
                                         ;
      if (n->parent->type == 5)
        ((tpl_atyp *) (n->parent->data))->sz += sizeof (void *);
      break;
    case 'S':
      if (in_structure)
        goto fail;
      expect_lparen = 1;
      ordinal = 1;
      in_structure = 1 + lparen_level;
      struct_addr = (char *) 
# 565 "project/goaccess/src/tpl.c" 3 4
                            __builtin_va_arg(
# 565 "project/goaccess/src/tpl.c"
                            ap
# 565 "project/goaccess/src/tpl.c" 3 4
                            ,
# 565 "project/goaccess/src/tpl.c"
                            void *
# 565 "project/goaccess/src/tpl.c" 3 4
                            )
# 565 "project/goaccess/src/tpl.c"
                                               ;
      break;
    case '$':
      if (!in_structure)
        goto fail;
      expect_lparen = 1;
      in_nested_structure++;
      break;
    case ')':
      lparen_level--;
      if (lparen_level < 0)
        goto fail;
      if (*(c - 1) == '(')
        goto fail;
      if (in_nested_structure)
        in_nested_structure--;
      else if (in_structure && (in_structure - 1 == lparen_level)) {

        struct_next = calc_field_addr (parent, struct_widest_node->type,
                                       struct_addr, ordinal++);
        inter_elt_len = struct_next - struct_addr;
        in_structure = 0;
      } else
        parent = parent->parent;
      break;
    case '(':
      if (!expect_lparen)
        goto fail;
      expect_lparen = 0;
      lparen_level++;
      break;
    default:
      tpl_hook.oops ("unsupported option %c\n", *c);
      goto fail;
    }
    c++;
  }
  if (lparen_level != 0)
    goto fail;


  ((tpl_root_data *) (root->data))->fmt = tpl_hook.malloc (strlen (fmt) + 1);
  if (((tpl_root_data *) (root->data))->fmt == 
# 607 "project/goaccess/src/tpl.c" 3 4
                                              ((void *)0)
# 607 "project/goaccess/src/tpl.c"
                                                  )
    tpl_hook.fatal("out of memory\n");
  
# 609 "project/goaccess/src/tpl.c" 3 4
 __builtin___memcpy_chk (
# 609 "project/goaccess/src/tpl.c"
 ((tpl_root_data *) (root->data))->fmt
# 609 "project/goaccess/src/tpl.c" 3 4
 , 
# 609 "project/goaccess/src/tpl.c"
 fmt, strlen (fmt) + 1
# 609 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 609 "project/goaccess/src/tpl.c"
 ((tpl_root_data *) (root->data))->fmt
# 609 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 609 "project/goaccess/src/tpl.c"
                                                                      ;

  return root;

fail:
  tpl_hook.oops ("failed to parse %s\n", fmt);
  tpl_free (root);
  return 
# 616 "project/goaccess/src/tpl.c" 3 4
        ((void *)0)
# 616 "project/goaccess/src/tpl.c"
            ;
}

static int
tpl_unmap_file (tpl_mmap_rec * mr) {

  if (munmap (mr->text, mr->text_sz) == -1) {
    tpl_hook.oops ("Failed to munmap: %s\n", strerror (
# 623 "project/goaccess/src/tpl.c" 3 4
                                                      (*__error())
# 623 "project/goaccess/src/tpl.c"
                                                           ));
  }
  close (mr->fd);
  mr->text = 
# 626 "project/goaccess/src/tpl.c" 3 4
            ((void *)0)
# 626 "project/goaccess/src/tpl.c"
                ;
  mr->text_sz = 0;
  return 0;
}

static void
tpl_free_keep_map (tpl_node * r) {
  int mmap_bits = ((1 << 10) | (1 << 0));
  int ufree_bits = ((1 << 1) | (1 << 5));
  tpl_node *nxtc, *c;
  int find_next_node = 0, looking, i;
  size_t sz;


  if ((((tpl_root_data *) (r->data))->flags & mmap_bits) == mmap_bits) {
    tpl_unmap_file (&((tpl_root_data *) (r->data))->mmap);
  } else if ((((tpl_root_data *) (r->data))->flags & ufree_bits) == ufree_bits) {
    tpl_hook.free (((tpl_root_data *) (r->data))->mmap.text);
  }

  c = r->children;
  if (c) {
    while (c->type != 0) {
      switch (c->type) {
      case 6:

        if (*((tpl_bin **) (c->data))) {
          if ((*((tpl_bin **) (c->data)))->addr) {
            tpl_hook.free ((*((tpl_bin **) (c->data)))->addr);
          }
          *((tpl_bin **) c->data) = 
# 656 "project/goaccess/src/tpl.c" 3 4
                                   ((void *)0)
# 656 "project/goaccess/src/tpl.c"
                                       ;
        }
        find_next_node = 1;
        break;
      case 4:

        for (i = 0; i < c->num; i++) {
          char *str = ((char **) c->data)[i];
          if (str) {
            tpl_hook.free (str);
            ((char **) c->data)[i] = 
# 666 "project/goaccess/src/tpl.c" 3 4
                                    ((void *)0)
# 666 "project/goaccess/src/tpl.c"
                                        ;
          }
        }
        find_next_node = 1;
        break;
      case 1:
      case 2:
      case 8:
      case 9:
      case 3:
      case 7:
      case 10:
      case 11:
      case 12:
        find_next_node = 1;
        break;
      case 5:
        c->ser_osz = 0;

        sz = ((tpl_atyp *) (c->data))->sz;
        tpl_free_atyp (c, c->data);


        c->data = (tpl_atyp *) tpl_hook.malloc (sizeof (tpl_atyp));
        if (!c->data)
          tpl_hook.fatal("out of memory\n");
        ((tpl_atyp *) (c->data))->num = 0;
        ((tpl_atyp *) (c->data))->sz = sz;
        ((tpl_atyp *) (c->data))->bb = 
# 694 "project/goaccess/src/tpl.c" 3 4
                                      ((void *)0)
# 694 "project/goaccess/src/tpl.c"
                                          ;
        ((tpl_atyp *) (c->data))->bbtail = 
# 695 "project/goaccess/src/tpl.c" 3 4
                                          ((void *)0)
# 695 "project/goaccess/src/tpl.c"
                                              ;
        ((tpl_atyp *) (c->data))->cur = 
# 696 "project/goaccess/src/tpl.c" 3 4
                                       ((void *)0)
# 696 "project/goaccess/src/tpl.c"
                                           ;

        c = c->children;
        break;
      default:
        tpl_hook.fatal ("unsupported format character\n");
        break;
      }

      if (find_next_node) {
        find_next_node = 0;
        looking = 1;
        while (looking) {
          if (c->next) {
            nxtc = c->next;
            c = nxtc;
            looking = 0;
          } else {
            if (c->type == 0)
              break;
            else {
              nxtc = c->parent;
              c = nxtc;
            }
          }
        }
      }
    }
  }

  ((tpl_root_data *) (r->data))->flags = 0;
}

 void
tpl_free (tpl_node * r) {
  int mmap_bits = ((1 << 10) | (1 << 0));
  int ufree_bits = ((1 << 1) | (1 << 5));
  tpl_node *nxtc, *c;
  int find_next_node = 0, looking, num, i;
  tpl_pidx *pidx, *pidx_nxt;


  if ((((tpl_root_data *) (r->data))->flags & mmap_bits) == mmap_bits) {
    tpl_unmap_file (&((tpl_root_data *) (r->data))->mmap);
  } else if ((((tpl_root_data *) (r->data))->flags & ufree_bits) == ufree_bits) {
    tpl_hook.free (((tpl_root_data *) (r->data))->mmap.text);
  }

  c = r->children;
  if (c) {
    while (c->type != 0) {
      switch (c->type) {
      case 6:

        if (*((tpl_bin **) (c->data))) {
          if ((*((tpl_bin **) (c->data)))->sz != 0) {
            tpl_hook.free ((*((tpl_bin **) (c->data)))->addr);
          }
          tpl_hook.free (*((tpl_bin **) c->data));
        }
        tpl_hook.free (c->data);
        find_next_node = 1;
        break;
      case 4:

        num = 1;
        nxtc = c->next;
        while (nxtc) {
          if (nxtc->type == 12) {
            num = nxtc->num;
          }
          nxtc = nxtc->next;
        }
        for (i = 0; i < c->num * num; i++) {
          char *str = ((char **) c->data)[i];
          if (str) {
            tpl_hook.free (str);
            ((char **) c->data)[i] = 
# 773 "project/goaccess/src/tpl.c" 3 4
                                    ((void *)0)
# 773 "project/goaccess/src/tpl.c"
                                        ;
          }
        }
        tpl_hook.free (c->data);
        find_next_node = 1;
        break;
      case 1:
      case 2:
      case 8:
      case 9:
      case 3:
      case 7:
      case 10:
      case 11:
      case 12:
        tpl_hook.free (c->data);
        find_next_node = 1;
        break;
      case 5:
        tpl_free_atyp (c, c->data);
        if (c->children)
          c = c->children;
        else
          find_next_node = 1;
        break;
      default:
        tpl_hook.fatal ("unsupported format character\n");
        break;
      }

      if (find_next_node) {
        find_next_node = 0;
        looking = 1;
        while (looking) {
          if (c->next) {
            nxtc = c->next;
            tpl_hook.free (c);
            c = nxtc;
            looking = 0;
          } else {
            if (c->type == 0)
              break;
            else {
              nxtc = c->parent;
              tpl_hook.free (c);
              c = nxtc;
            }
          }
        }
      }
    }
  }


  for (pidx = ((tpl_root_data *) (r->data))->pidx; pidx; pidx = pidx_nxt) {
    pidx_nxt = pidx->next;
    tpl_hook.free (pidx);
  }
  tpl_hook.free (((tpl_root_data *) (r->data))->fmt);
  if (((tpl_root_data *) (r->data))->num_fxlens > 0) {
    tpl_hook.free (((tpl_root_data *) (r->data))->fxlens);
  }
  tpl_hook.free (r->data);
  tpl_hook.free (r);
}



static tpl_node *
tpl_find_i (tpl_node * n, int i) {
  int j = 0;
  tpl_pidx *pidx;
  if (n->type != 0)
    return 
# 846 "project/goaccess/src/tpl.c" 3 4
          ((void *)0)
# 846 "project/goaccess/src/tpl.c"
              ;
  if (i == 0)
    return n;
  for (pidx = ((tpl_root_data *) (n->data))->pidx; pidx; pidx = pidx->next) {
    if (++j == i)
      return pidx->node;
  }
  return 
# 853 "project/goaccess/src/tpl.c" 3 4
        ((void *)0)
# 853 "project/goaccess/src/tpl.c"
            ;
}

static void *
tpl_cpv (void *datav, const void *data, size_t sz) {
  if (sz > 0)
    
# 859 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 859 "project/goaccess/src/tpl.c"
   datav
# 859 "project/goaccess/src/tpl.c" 3 4
   , 
# 859 "project/goaccess/src/tpl.c"
   data, sz
# 859 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 859 "project/goaccess/src/tpl.c"
   datav
# 859 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 859 "project/goaccess/src/tpl.c"
                           ;
  return (void *) ((uintptr_t) datav + sz);
}

static void *
tpl_extend_backbone (tpl_node * n) {
  tpl_backbone *bb;
  bb = (tpl_backbone *) tpl_hook.malloc (sizeof (tpl_backbone) + ((tpl_atyp *) (n->data))->sz);
  if (!bb)
    tpl_hook.fatal("out of memory\n");



  
# 872 "project/goaccess/src/tpl.c" 3 4
 __builtin___memset_chk (
# 872 "project/goaccess/src/tpl.c"
 bb->data
# 872 "project/goaccess/src/tpl.c" 3 4
 , 
# 872 "project/goaccess/src/tpl.c"
 0, ((tpl_atyp *) (n->data))->sz
# 872 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 872 "project/goaccess/src/tpl.c"
 bb->data
# 872 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 872 "project/goaccess/src/tpl.c"
                                                   ;
  bb->next = 
# 873 "project/goaccess/src/tpl.c" 3 4
            ((void *)0)
# 873 "project/goaccess/src/tpl.c"
                ;

  if (((tpl_atyp *) (n->data))->bb == 
# 875 "project/goaccess/src/tpl.c" 3 4
                                     ((void *)0)
# 875 "project/goaccess/src/tpl.c"
                                         ) {
    ((tpl_atyp *) (n->data))->bb = bb;
    ((tpl_atyp *) (n->data))->bbtail = bb;
  } else {
    ((tpl_atyp *) (n->data))->bbtail->next = bb;
    ((tpl_atyp *) (n->data))->bbtail = bb;
  }

  ((tpl_atyp *) (n->data))->num++;
  return bb->data;
}


static char *
tpl_fmt (tpl_node * r) {
  return ((tpl_root_data *) (r->data))->fmt;
}


static int *
tpl_fxlens (tpl_node * r, int *num_fxlens) {
  *num_fxlens = ((tpl_root_data *) (r->data))->num_fxlens;
  return ((tpl_root_data *) (r->data))->fxlens;
}





static void *
tpl_dump_atyp (tpl_node * n, tpl_atyp * at, void *dv) {
  tpl_backbone *bb;
  tpl_node *c;
  void *datav;
  uint32_t slen;
  tpl_bin *binp;
  char *strp;
  tpl_atyp *atypp;
  tpl_pound_data *pd;
  int i;
  size_t itermax;


  dv = tpl_cpv (dv, &at->num, sizeof (uint32_t));
  for (bb = at->bb; bb; bb = bb->next) {
    datav = bb->data;
    c = n->children;
    while (c) {
      switch (c->type) {
      case 3:
      case 7:
      case 1:
      case 2:
      case 8:
      case 9:
      case 10:
      case 11:
        dv = tpl_cpv (dv, datav, tpl_types[c->type].sz * c->num);
        datav = (void *) ((uintptr_t) datav + tpl_types[c->type].sz * c->num);
        break;
      case 6:

        
# 937 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 937 "project/goaccess/src/tpl.c"
       &binp
# 937 "project/goaccess/src/tpl.c" 3 4
       , 
# 937 "project/goaccess/src/tpl.c"
       datav, sizeof (tpl_bin *)
# 937 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 937 "project/goaccess/src/tpl.c"
       &binp
# 937 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 937 "project/goaccess/src/tpl.c"
                                                ;
        slen = binp->sz;
        dv = tpl_cpv (dv, &slen, sizeof (uint32_t));
        dv = tpl_cpv (dv, binp->addr, slen);
        datav = (void *) ((uintptr_t) datav + sizeof (tpl_bin *));
        break;
      case 4:

        for (i = 0; i < c->num; i++) {
          
# 946 "project/goaccess/src/tpl.c" 3 4
         __builtin___memcpy_chk (
# 946 "project/goaccess/src/tpl.c"
         &strp
# 946 "project/goaccess/src/tpl.c" 3 4
         , 
# 946 "project/goaccess/src/tpl.c"
         datav, sizeof (char *)
# 946 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 946 "project/goaccess/src/tpl.c"
         &strp
# 946 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 946 "project/goaccess/src/tpl.c"
                                               ;
          slen = strp ? (strlen (strp) + 1) : 0;
          dv = tpl_cpv (dv, &slen, sizeof (uint32_t));
          if (slen > 1)
            dv = tpl_cpv (dv, strp, slen - 1);
          datav = (void *) ((uintptr_t) datav + sizeof (char *));
        }
        break;
      case 5:
        
# 955 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 955 "project/goaccess/src/tpl.c"
       &atypp
# 955 "project/goaccess/src/tpl.c" 3 4
       , 
# 955 "project/goaccess/src/tpl.c"
       datav, sizeof (tpl_atyp *)
# 955 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 955 "project/goaccess/src/tpl.c"
       &atypp
# 955 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 955 "project/goaccess/src/tpl.c"
                                                  ;
        dv = tpl_dump_atyp (c, atypp, dv);
        datav = (void *) ((uintptr_t) datav + sizeof (void *));
        break;
      case 12:

        pd = (tpl_pound_data *) c->data;
        itermax = c->num;
        if (++(pd->iternum) < itermax) {
          c = pd->iter_start_node;
          continue;
        } else {
          pd->iternum = 0;
        }
        break;
      default:
        tpl_hook.fatal ("unsupported format character\n");
        break;
      }
      c = c->next;
    }
  }
  return dv;
}


static size_t
tpl_ser_osz (tpl_node * n) {
  tpl_node *c, *np;
  size_t sz, itermax;
  tpl_bin *binp;
  char *strp;
  tpl_pound_data *pd;
  int i;


  if (n->type != 0) {
    tpl_hook.fatal ("internal error: tpl_ser_osz on non-root node\n");
  }

  sz = n->ser_osz;
  c = n->children;
  while (c) {
    switch (c->type) {
    case 3:
    case 7:
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 11:
      sz += tpl_types[c->type].sz * c->num;
      break;
    case 6:
      sz += sizeof (uint32_t);
      
# 1011 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 1011 "project/goaccess/src/tpl.c"
     &binp
# 1011 "project/goaccess/src/tpl.c" 3 4
     , 
# 1011 "project/goaccess/src/tpl.c"
     c->data, sizeof (tpl_bin *)
# 1011 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 1011 "project/goaccess/src/tpl.c"
     &binp
# 1011 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 1011 "project/goaccess/src/tpl.c"
                                                ;
      sz += binp->sz;
      break;
    case 4:
      for (i = 0; i < c->num; i++) {
        sz += sizeof (uint32_t);
        
# 1017 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1017 "project/goaccess/src/tpl.c"
       &strp
# 1017 "project/goaccess/src/tpl.c" 3 4
       , 
# 1017 "project/goaccess/src/tpl.c"
       &((char **) c->data)[i], sizeof (char *)
# 1017 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1017 "project/goaccess/src/tpl.c"
       &strp
# 1017 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1017 "project/goaccess/src/tpl.c"
                                                               ;
        sz += strp ? strlen (strp) : 0;
      }
      break;
    case 5:
      sz += sizeof (uint32_t);
      sz += c->ser_osz;
      break;
    case 12:

      itermax = c->num;
      pd = (tpl_pound_data *) c->data;
      if (++(pd->iternum) < itermax) {
        for (np = pd->iter_start_node; np != c; np = np->next) {
          np->data = (char *) (np->data) + (tpl_types[np->type].sz * np->num);
        }
        c = pd->iter_start_node;
        continue;
      } else {
        pd->iternum = 0;
        for (np = pd->iter_start_node; np != c; np = np->next) {
          np->data = (char *) (np->data) - ((itermax - 1) * tpl_types[np->type].sz * np->num);
        }
      }
      break;
    default:
      tpl_hook.fatal ("unsupported format character\n");
      break;
    }
    c = c->next;
  }
  return sz;
}


 int
tpl_dump (tpl_node * r, int mode, ...) {
  va_list ap;
  char *filename, *bufv;
  void **addr_out, *buf, *pa_addr;
  int fd, rc = 0;
  size_t sz, *sz_out, pa_sz;
  struct stat sbuf;

  if (((tpl_root_data *) (r->data))->flags & (1 << 10)) {
    tpl_hook.oops ("error: tpl_dump called for a loaded tpl\n");
    return -1;
  }

  sz = tpl_ser_osz (r);

  
# 1068 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 1068 "project/goaccess/src/tpl.c"
 ap
# 1068 "project/goaccess/src/tpl.c" 3 4
 ,
# 1068 "project/goaccess/src/tpl.c"
 mode
# 1068 "project/goaccess/src/tpl.c" 3 4
 )
# 1068 "project/goaccess/src/tpl.c"
                    ;
  if (mode & (1 << 0)) {
    filename = 
# 1070 "project/goaccess/src/tpl.c" 3 4
              __builtin_va_arg(
# 1070 "project/goaccess/src/tpl.c"
              ap
# 1070 "project/goaccess/src/tpl.c" 3 4
              ,
# 1070 "project/goaccess/src/tpl.c"
              char *
# 1070 "project/goaccess/src/tpl.c" 3 4
              )
# 1070 "project/goaccess/src/tpl.c"
                                 ;
    fd = tpl_mmap_output_file (filename, sz, &buf);
    if (fd == -1)
      rc = -1;
    else {
      rc = tpl_dump_to_mem (r, buf, sz);
      if (msync (buf, sz, 
# 1076 "project/goaccess/src/tpl.c" 3 4
                         0x0010
# 1076 "project/goaccess/src/tpl.c"
                                ) == -1) {
        tpl_hook.oops ("msync failed on fd %d: %s\n", fd, strerror (
# 1077 "project/goaccess/src/tpl.c" 3 4
                                                                   (*__error())
# 1077 "project/goaccess/src/tpl.c"
                                                                        ));
      }
      if (munmap (buf, sz) == -1) {
        tpl_hook.oops ("munmap failed on fd %d: %s\n", fd, strerror (
# 1080 "project/goaccess/src/tpl.c" 3 4
                                                                    (*__error())
# 1080 "project/goaccess/src/tpl.c"
                                                                         ));
      }
      close (fd);
    }
  } else if (mode & (1 << 4)) {
    fd = 
# 1085 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 1085 "project/goaccess/src/tpl.c"
        ap
# 1085 "project/goaccess/src/tpl.c" 3 4
        ,
# 1085 "project/goaccess/src/tpl.c"
        int
# 1085 "project/goaccess/src/tpl.c" 3 4
        )
# 1085 "project/goaccess/src/tpl.c"
                        ;
    if ((buf = tpl_hook.malloc (sz)) == 
# 1086 "project/goaccess/src/tpl.c" 3 4
                                       ((void *)0)
# 1086 "project/goaccess/src/tpl.c"
                                           )
      tpl_hook.fatal("out of memory\n");
    tpl_dump_to_mem (r, buf, sz);
    bufv = buf;
    do {
      rc = write (fd, bufv, sz);
      if (rc > 0) {
        sz -= rc;
        bufv += rc;
      } else if (rc == -1) {
        if (
# 1096 "project/goaccess/src/tpl.c" 3 4
           (*__error()) 
# 1096 "project/goaccess/src/tpl.c"
                 == 
# 1096 "project/goaccess/src/tpl.c" 3 4
                    4 
# 1096 "project/goaccess/src/tpl.c"
                          || 
# 1096 "project/goaccess/src/tpl.c" 3 4
                             (*__error()) 
# 1096 "project/goaccess/src/tpl.c"
                                   == 
# 1096 "project/goaccess/src/tpl.c" 3 4
                                      35
# 1096 "project/goaccess/src/tpl.c"
                                            )
          continue;
        tpl_hook.oops ("error writing to fd %d: %s\n", fd, strerror (
# 1098 "project/goaccess/src/tpl.c" 3 4
                                                                    (*__error())
# 1098 "project/goaccess/src/tpl.c"
                                                                         ));

        if (fstat (fd, &sbuf) == 0 && 
# 1100 "project/goaccess/src/tpl.c" 3 4
                                     (((
# 1100 "project/goaccess/src/tpl.c"
                                     sbuf.st_mode
# 1100 "project/goaccess/src/tpl.c" 3 4
                                     ) & 0170000) == 0100000)
# 1100 "project/goaccess/src/tpl.c"
                                                           ) {
          if (ftruncate (fd, sbuf.st_size - (bufv - (char *) buf)) == -1) {
            tpl_hook.oops ("can't rewind: %s\n", strerror (
# 1102 "project/goaccess/src/tpl.c" 3 4
                                                          (*__error())
# 1102 "project/goaccess/src/tpl.c"
                                                               ));
          }
        }
        free (buf);
        
# 1106 "project/goaccess/src/tpl.c" 3 4
       __builtin_va_end(
# 1106 "project/goaccess/src/tpl.c"
       ap
# 1106 "project/goaccess/src/tpl.c" 3 4
       )
# 1106 "project/goaccess/src/tpl.c"
                  ;
        return -1;
      }
    } while (sz > 0);
    free (buf);
    rc = 0;
  } else if (mode & (1 << 1)) {
    if (mode & (1 << 2)) {
      pa_addr = (void *) 
# 1114 "project/goaccess/src/tpl.c" 3 4
                        __builtin_va_arg(
# 1114 "project/goaccess/src/tpl.c"
                        ap
# 1114 "project/goaccess/src/tpl.c" 3 4
                        ,
# 1114 "project/goaccess/src/tpl.c"
                        void *
# 1114 "project/goaccess/src/tpl.c" 3 4
                        )
# 1114 "project/goaccess/src/tpl.c"
                                           ;
      pa_sz = 
# 1115 "project/goaccess/src/tpl.c" 3 4
             __builtin_va_arg(
# 1115 "project/goaccess/src/tpl.c"
             ap
# 1115 "project/goaccess/src/tpl.c" 3 4
             ,
# 1115 "project/goaccess/src/tpl.c"
             size_t
# 1115 "project/goaccess/src/tpl.c" 3 4
             )
# 1115 "project/goaccess/src/tpl.c"
                                ;
      if (pa_sz < sz) {
        tpl_hook.oops ("tpl_dump: buffer too small, need %zu bytes\n", sz);
        
# 1118 "project/goaccess/src/tpl.c" 3 4
       __builtin_va_end(
# 1118 "project/goaccess/src/tpl.c"
       ap
# 1118 "project/goaccess/src/tpl.c" 3 4
       )
# 1118 "project/goaccess/src/tpl.c"
                  ;
        return -1;
      }
      rc = tpl_dump_to_mem (r, pa_addr, sz);
    } else {
      addr_out = (void **) 
# 1123 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 1123 "project/goaccess/src/tpl.c"
                          ap
# 1123 "project/goaccess/src/tpl.c" 3 4
                          ,
# 1123 "project/goaccess/src/tpl.c"
                          void *
# 1123 "project/goaccess/src/tpl.c" 3 4
                          )
# 1123 "project/goaccess/src/tpl.c"
                                             ;
      sz_out = 
# 1124 "project/goaccess/src/tpl.c" 3 4
              __builtin_va_arg(
# 1124 "project/goaccess/src/tpl.c"
              ap
# 1124 "project/goaccess/src/tpl.c" 3 4
              ,
# 1124 "project/goaccess/src/tpl.c"
              size_t *
# 1124 "project/goaccess/src/tpl.c" 3 4
              )
# 1124 "project/goaccess/src/tpl.c"
                                   ;
      if ((buf = tpl_hook.malloc (sz)) == 
# 1125 "project/goaccess/src/tpl.c" 3 4
                                         ((void *)0)
# 1125 "project/goaccess/src/tpl.c"
                                             )
        tpl_hook.fatal("out of memory\n");
      *sz_out = sz;
      *addr_out = buf;
      rc = tpl_dump_to_mem (r, buf, sz);
    }
  } else if (mode & (1 << 8)) {
    sz_out = 
# 1132 "project/goaccess/src/tpl.c" 3 4
            __builtin_va_arg(
# 1132 "project/goaccess/src/tpl.c"
            ap
# 1132 "project/goaccess/src/tpl.c" 3 4
            ,
# 1132 "project/goaccess/src/tpl.c"
            size_t *
# 1132 "project/goaccess/src/tpl.c" 3 4
            )
# 1132 "project/goaccess/src/tpl.c"
                                 ;
    *sz_out = sz;
  } else {
    tpl_hook.oops ("unsupported tpl_dump mode %d\n", mode);
    rc = -1;
  }
  
# 1138 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 1138 "project/goaccess/src/tpl.c"
 ap
# 1138 "project/goaccess/src/tpl.c" 3 4
 )
# 1138 "project/goaccess/src/tpl.c"
            ;
  return rc;
}





static int
tpl_dump_to_mem (tpl_node * r, void *addr, size_t sz) {
  uint32_t slen, sz32;
  int *fxlens, num_fxlens, i;
  void *dv;
  char *fmt, flags;
  tpl_node *c, *np;
  tpl_pound_data *pd;
  size_t itermax;

  fmt = tpl_fmt (r);
  flags = 0;
  if (tpl_cpu_bigendian ())
    flags |= (1 << 0);
  if (strchr (fmt, 's'))
    flags |= (1 << 1);
  sz32 = sz;

  dv = addr;
  dv = tpl_cpv (dv, "tpl", 3);
  dv = tpl_cpv (dv, &flags, 1);
  dv = tpl_cpv (dv, &sz32, sizeof (uint32_t));
  dv = tpl_cpv (dv, fmt, strlen (fmt) + 1);
  fxlens = tpl_fxlens (r, &num_fxlens);
  dv = tpl_cpv (dv, fxlens, num_fxlens * sizeof (uint32_t));


  c = r->children;
  while (c) {
    switch (c->type) {
    case 3:
    case 7:
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 11:
      dv = tpl_cpv (dv, c->data, tpl_types[c->type].sz * c->num);
      break;
    case 6:
      slen = (*(tpl_bin **) (c->data))->sz;
      dv = tpl_cpv (dv, &slen, sizeof (uint32_t));
      dv = tpl_cpv (dv, (*(tpl_bin **) (c->data))->addr, slen);
      break;
    case 4:
      for (i = 0; i < c->num; i++) {
        char *str = ((char **) c->data)[i];
        slen = str ? strlen (str) + 1 : 0;
        dv = tpl_cpv (dv, &slen, sizeof (uint32_t));
        if (slen > 1)
          dv = tpl_cpv (dv, str, slen - 1);
      }
      break;
    case 5:
      dv = tpl_dump_atyp (c, (tpl_atyp *) c->data, dv);
      break;
    case 12:
      pd = (tpl_pound_data *) c->data;
      itermax = c->num;
      if (++(pd->iternum) < itermax) {


        for (np = pd->iter_start_node; np != c; np = np->next) {
          np->data = (char *) (np->data) + (tpl_types[np->type].sz * np->num);
        }

        c = pd->iter_start_node;
        continue;

      } else {


        pd->iternum = 0;
        for (np = pd->iter_start_node; np != c; np = np->next) {
          np->data = (char *) (np->data) - ((itermax - 1) * tpl_types[np->type].sz * np->num);
        }

      }
      break;
    default:
      tpl_hook.fatal ("unsupported format character\n");
      break;
    }
    c = c->next;
  }

  return 0;
}

static int
tpl_cpu_bigendian (void) {
  unsigned i = 1;
  char *c;
  c = (char *) &i;
  return (c[0] == 1 ? 0 : 1);
}
# 1253 "project/goaccess/src/tpl.c"
static int
tpl_sanity (tpl_node * r, int excess_ok) {
  uint32_t intlsz;
  int found_nul = 0, rc, octothorpes = 0, num_fxlens, *fxlens, flen;
  void *d, *dv;
  char intlflags, *fmt, c, *mapfmt;
  size_t bufsz, serlen;

  d = ((tpl_root_data *) (r->data))->mmap.text;
  bufsz = ((tpl_root_data *) (r->data))->mmap.text_sz;

  dv = d;
  if (bufsz < (4 + sizeof (uint32_t) + 1))
    return (-1);
  if (memcmp (dv, "tpl", 3) != 0)
    return (-2);
  if (tpl_needs_endian_swap (dv))
    ((tpl_root_data *) (r->data))->flags |= (1 << 11);
  dv = (void *) ((uintptr_t) dv + 3);
  
# 1272 "project/goaccess/src/tpl.c" 3 4
 __builtin___memcpy_chk (
# 1272 "project/goaccess/src/tpl.c"
 &intlflags
# 1272 "project/goaccess/src/tpl.c" 3 4
 , 
# 1272 "project/goaccess/src/tpl.c"
 dv, sizeof (char)
# 1272 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 1272 "project/goaccess/src/tpl.c"
 &intlflags
# 1272 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 1272 "project/goaccess/src/tpl.c"
                                       ;
  if (intlflags & ~3)
    return (-11);



  if (!(intlflags & (1 << 1))) {
    ((tpl_root_data *) (r->data))->flags |= (1 << 12);
  }
  dv = (void *) ((uintptr_t) dv + 1);
  
# 1282 "project/goaccess/src/tpl.c" 3 4
 __builtin___memcpy_chk (
# 1282 "project/goaccess/src/tpl.c"
 &intlsz
# 1282 "project/goaccess/src/tpl.c" 3 4
 , 
# 1282 "project/goaccess/src/tpl.c"
 dv, sizeof (uint32_t)
# 1282 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 1282 "project/goaccess/src/tpl.c"
 &intlsz
# 1282 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 1282 "project/goaccess/src/tpl.c"
                                        ;
  if (((tpl_root_data *) (r->data))->flags & (1 << 11))
    tpl_byteswap (&intlsz, sizeof (uint32_t));
  if (!excess_ok && (intlsz != bufsz))
    return (-3);
  dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));


  fmt = (char *) dv;
  while ((uintptr_t) dv - (uintptr_t) d < bufsz && !found_nul) {
    if ((c = *(char *) dv) != '\0') {
      if (strchr (tpl_fmt_chars, c) == 
# 1293 "project/goaccess/src/tpl.c" 3 4
                                      ((void *)0)
# 1293 "project/goaccess/src/tpl.c"
                                          )
        return (-4);
      if ((c = *(char *) dv) == '#')
        octothorpes++;
      dv = (void *) ((uintptr_t) dv + 1);
    } else
      found_nul = 1;
  }
  if (!found_nul)
    return (-5);
  dv = (void *) ((uintptr_t) dv + 1);


  mapfmt = tpl_fmt (r);
  rc = strcmp (mapfmt, fmt);
  if (rc != 0)
    return (-6);


  if ((((uintptr_t) dv + (octothorpes * 4)) - (uintptr_t) d) > bufsz)
    return (-10);
  fxlens = tpl_fxlens (r, &num_fxlens);
  while (num_fxlens--) {
    
# 1316 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 1316 "project/goaccess/src/tpl.c"
   &flen
# 1316 "project/goaccess/src/tpl.c" 3 4
   , 
# 1316 "project/goaccess/src/tpl.c"
   dv, sizeof (uint32_t)
# 1316 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 1316 "project/goaccess/src/tpl.c"
   &flen
# 1316 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 1316 "project/goaccess/src/tpl.c"
                                        ;
    if (((tpl_root_data *) (r->data))->flags & (1 << 11))
      tpl_byteswap (&flen, sizeof (uint32_t));
    if (flen != *fxlens)
      return (-7);
    dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
    fxlens++;
  }


  rc = tpl_serlen (r, r, dv, &serlen);
  if (rc == -1)
    return (-8);
  serlen += ((uintptr_t) dv - (uintptr_t) d);
  if (excess_ok && (bufsz < serlen))
    return (-9);
  if (!excess_ok && (serlen != bufsz))
    return (-9);
  return 0;
}

static void *
tpl_find_data_start (void *d) {
  int octothorpes = 0;
  d = (void *) ((uintptr_t) d + 4);
  d = (void *) ((uintptr_t) d + 4);
  while (*(char *) d != '\0') {
    if (*(char *) d == '#')
      octothorpes++;
    d = (void *) ((uintptr_t) d + 1);
  }
  d = (void *) ((uintptr_t) d + 1);
  d = (void *) ((uintptr_t) d + (octothorpes * sizeof (uint32_t)));
  return d;
}

static int
tpl_needs_endian_swap (void *d) {
  char *c;
  int cpu_is_bigendian;
  c = (char *) d;
  cpu_is_bigendian = tpl_cpu_bigendian ();
  return ((c[3] & (1 << 0)) == cpu_is_bigendian) ? 0 : 1;
}

static size_t
tpl_size_for (char c) {
  uint32_t i;
  for (i = 0; i < sizeof (tpl_types) / sizeof (tpl_types[0]); i++) {
    if (tpl_types[i].c == c)
      return tpl_types[i].sz;
  }
  return 0;
}

 char *
tpl_peek (int mode, ...) {
  va_list ap;
  int xendian = 0, found_nul = 0, old_string_format = 0;
  char *filename = 
# 1375 "project/goaccess/src/tpl.c" 3 4
                  ((void *)0)
# 1375 "project/goaccess/src/tpl.c"
                      , *datapeek_f = 
# 1375 "project/goaccess/src/tpl.c" 3 4
                                      ((void *)0)
# 1375 "project/goaccess/src/tpl.c"
                                          , *datapeek_c, *datapeek_s;
  void *addr = 
# 1376 "project/goaccess/src/tpl.c" 3 4
              ((void *)0)
# 1376 "project/goaccess/src/tpl.c"
                  , *dv, *datapeek_p = 
# 1376 "project/goaccess/src/tpl.c" 3 4
                                       ((void *)0)
# 1376 "project/goaccess/src/tpl.c"
                                           ;
  size_t sz = 0, fmt_len, first_atom, num_fxlens = 0;
  uint32_t datapeek_ssz, datapeek_csz, datapeek_flen;
  tpl_mmap_rec mr = { 0, 
# 1379 "project/goaccess/src/tpl.c" 3 4
                        ((void *)0)
# 1379 "project/goaccess/src/tpl.c"
                            , 0 };
  char *fmt, *fmt_cpy = 
# 1380 "project/goaccess/src/tpl.c" 3 4
                       ((void *)0)
# 1380 "project/goaccess/src/tpl.c"
                           , c;
  uint32_t intlsz, **fxlens = 
# 1381 "project/goaccess/src/tpl.c" 3 4
                             ((void *)0)
# 1381 "project/goaccess/src/tpl.c"
                                 , *num_fxlens_out = 
# 1381 "project/goaccess/src/tpl.c" 3 4
                                                     ((void *)0)
# 1381 "project/goaccess/src/tpl.c"
                                                         , *fxlensv;

  
# 1383 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 1383 "project/goaccess/src/tpl.c"
 ap
# 1383 "project/goaccess/src/tpl.c" 3 4
 ,
# 1383 "project/goaccess/src/tpl.c"
 mode
# 1383 "project/goaccess/src/tpl.c" 3 4
 )
# 1383 "project/goaccess/src/tpl.c"
                    ;
  if ((mode & (1 << 7)) && (mode & (1 << 6))) {
    tpl_hook.oops ("TPL_FXLENS and TPL_DATAPEEK mutually exclusive\n");
    goto fail;
  }
  if (mode & (1 << 0))
    filename = 
# 1389 "project/goaccess/src/tpl.c" 3 4
              __builtin_va_arg(
# 1389 "project/goaccess/src/tpl.c"
              ap
# 1389 "project/goaccess/src/tpl.c" 3 4
              ,
# 1389 "project/goaccess/src/tpl.c"
              char *
# 1389 "project/goaccess/src/tpl.c" 3 4
              )
# 1389 "project/goaccess/src/tpl.c"
                                 ;
  else if (mode & (1 << 1)) {
    addr = 
# 1391 "project/goaccess/src/tpl.c" 3 4
          __builtin_va_arg(
# 1391 "project/goaccess/src/tpl.c"
          ap
# 1391 "project/goaccess/src/tpl.c" 3 4
          ,
# 1391 "project/goaccess/src/tpl.c"
          void *
# 1391 "project/goaccess/src/tpl.c" 3 4
          )
# 1391 "project/goaccess/src/tpl.c"
                             ;
    sz = 
# 1392 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 1392 "project/goaccess/src/tpl.c"
        ap
# 1392 "project/goaccess/src/tpl.c" 3 4
        ,
# 1392 "project/goaccess/src/tpl.c"
        size_t
# 1392 "project/goaccess/src/tpl.c" 3 4
        )
# 1392 "project/goaccess/src/tpl.c"
                           ;
  } else {
    tpl_hook.oops ("unsupported tpl_peek mode %d\n", mode);
    goto fail;
  }
  if (mode & (1 << 6)) {
    datapeek_f = 
# 1398 "project/goaccess/src/tpl.c" 3 4
                __builtin_va_arg(
# 1398 "project/goaccess/src/tpl.c"
                ap
# 1398 "project/goaccess/src/tpl.c" 3 4
                ,
# 1398 "project/goaccess/src/tpl.c"
                char *
# 1398 "project/goaccess/src/tpl.c" 3 4
                )
# 1398 "project/goaccess/src/tpl.c"
                                   ;
  }
  if (mode & (1 << 7)) {
    num_fxlens_out = 
# 1401 "project/goaccess/src/tpl.c" 3 4
                    __builtin_va_arg(
# 1401 "project/goaccess/src/tpl.c"
                    ap
# 1401 "project/goaccess/src/tpl.c" 3 4
                    ,
# 1401 "project/goaccess/src/tpl.c"
                    uint32_t *
# 1401 "project/goaccess/src/tpl.c" 3 4
                    )
# 1401 "project/goaccess/src/tpl.c"
                                           ;
    fxlens = 
# 1402 "project/goaccess/src/tpl.c" 3 4
            __builtin_va_arg(
# 1402 "project/goaccess/src/tpl.c"
            ap
# 1402 "project/goaccess/src/tpl.c" 3 4
            ,
# 1402 "project/goaccess/src/tpl.c"
            uint32_t **
# 1402 "project/goaccess/src/tpl.c" 3 4
            )
# 1402 "project/goaccess/src/tpl.c"
                                    ;
    *num_fxlens_out = 0;
    *fxlens = 
# 1404 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 1404 "project/goaccess/src/tpl.c"
                 ;
  }

  if (mode & (1 << 0)) {
    if (tpl_mmap_file (filename, &mr) != 0) {
      tpl_hook.oops ("tpl_peek failed for file %s\n", filename);
      goto fail;
    }
    addr = mr.text;
    sz = mr.text_sz;
  }

  dv = addr;
  if (sz < (4 + sizeof (uint32_t) + 1))
    goto fail;
  if (memcmp (dv, "tpl", 3) != 0)
    goto fail;
  if (tpl_needs_endian_swap (dv))
    xendian = 1;
  if ((((char *) dv)[3] & (1 << 1)) == 0)
    old_string_format = 1;
  dv = (void *) ((uintptr_t) dv + 4);
  
# 1426 "project/goaccess/src/tpl.c" 3 4
 __builtin___memcpy_chk (
# 1426 "project/goaccess/src/tpl.c"
 &intlsz
# 1426 "project/goaccess/src/tpl.c" 3 4
 , 
# 1426 "project/goaccess/src/tpl.c"
 dv, sizeof (uint32_t)
# 1426 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 1426 "project/goaccess/src/tpl.c"
 &intlsz
# 1426 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 1426 "project/goaccess/src/tpl.c"
                                        ;
  if (xendian)
    tpl_byteswap (&intlsz, sizeof (uint32_t));
  if (intlsz != sz)
    goto fail;
  dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));


  fmt = (char *) dv;
  while ((uintptr_t) dv - (uintptr_t) addr < sz && !found_nul) {
    if ((c = *(char *) dv) == '\0') {
      found_nul = 1;
    } else if (c == '#') {
      num_fxlens++;
    }
    dv = (void *) ((uintptr_t) dv + 1);
  }
  if (!found_nul)
    goto fail;
  fmt_len = (char *) dv - fmt;
  fmt_cpy = tpl_hook.malloc (fmt_len);
  if (fmt_cpy == 
# 1447 "project/goaccess/src/tpl.c" 3 4
                ((void *)0)
# 1447 "project/goaccess/src/tpl.c"
                    ) {
    tpl_hook.fatal("out of memory\n");
  }
  
# 1450 "project/goaccess/src/tpl.c" 3 4
 __builtin___memcpy_chk (
# 1450 "project/goaccess/src/tpl.c"
 fmt_cpy
# 1450 "project/goaccess/src/tpl.c" 3 4
 , 
# 1450 "project/goaccess/src/tpl.c"
 fmt, fmt_len
# 1450 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 1450 "project/goaccess/src/tpl.c"
 fmt_cpy
# 1450 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 1450 "project/goaccess/src/tpl.c"
                               ;


  if (num_fxlens > 0) {
    if (sz < ((uintptr_t) dv + (num_fxlens * sizeof (uint32_t)) - (uintptr_t) addr)) {
      goto fail;
    }
  }
  if ((mode & (1 << 7)) && (num_fxlens > 0)) {
    *fxlens = tpl_hook.malloc (num_fxlens * sizeof (uint32_t));
    if (*fxlens == 
# 1460 "project/goaccess/src/tpl.c" 3 4
                  ((void *)0)
# 1460 "project/goaccess/src/tpl.c"
                      )
      tpl_hook.fatal ("out of memory");
    *num_fxlens_out = num_fxlens;
    fxlensv = *fxlens;
    while (num_fxlens--) {
      
# 1465 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 1465 "project/goaccess/src/tpl.c"
     fxlensv
# 1465 "project/goaccess/src/tpl.c" 3 4
     , 
# 1465 "project/goaccess/src/tpl.c"
     dv, sizeof (uint32_t)
# 1465 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 1465 "project/goaccess/src/tpl.c"
     fxlensv
# 1465 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 1465 "project/goaccess/src/tpl.c"
                                            ;
      if (xendian)
        tpl_byteswap (fxlensv, sizeof (uint32_t));
      dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
      fxlensv++;
    }
  }

  if (mode & (1 << 6)) {

    first_atom = strspn (fmt, "S()");

    datapeek_flen = strlen (datapeek_f);
    if (strspn (datapeek_f, tpl_datapeek_ok_chars) < datapeek_flen) {
      tpl_hook.oops ("invalid TPL_DATAPEEK format: %s\n", datapeek_f);
      tpl_hook.free (fmt_cpy);
      fmt_cpy = 
# 1481 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 1481 "project/goaccess/src/tpl.c"
                   ;
      goto fail;
    }

    if (strncmp (&fmt[first_atom], datapeek_f, datapeek_flen) != 0) {
      tpl_hook.oops ("TPL_DATAPEEK format mismatches tpl iamge\n");
      tpl_hook.free (fmt_cpy);
      fmt_cpy = 
# 1488 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 1488 "project/goaccess/src/tpl.c"
                   ;
      goto fail;
    }


    dv = (void *) ((uintptr_t) dv + (num_fxlens * sizeof (uint32_t)));
    for (datapeek_c = datapeek_f; *datapeek_c != '\0'; datapeek_c++) {
      datapeek_p = 
# 1495 "project/goaccess/src/tpl.c" 3 4
                  __builtin_va_arg(
# 1495 "project/goaccess/src/tpl.c"
                  ap
# 1495 "project/goaccess/src/tpl.c" 3 4
                  ,
# 1495 "project/goaccess/src/tpl.c"
                  void *
# 1495 "project/goaccess/src/tpl.c" 3 4
                  )
# 1495 "project/goaccess/src/tpl.c"
                                     ;
      if (*datapeek_c == 's') {
        if ((uintptr_t) dv - (uintptr_t) addr + sizeof (uint32_t) > sz) {
          tpl_hook.oops ("tpl_peek: tpl has insufficient length\n");
          tpl_hook.free (fmt_cpy);
          fmt_cpy = 
# 1500 "project/goaccess/src/tpl.c" 3 4
                   ((void *)0)
# 1500 "project/goaccess/src/tpl.c"
                       ;
          goto fail;
        }
        
# 1503 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1503 "project/goaccess/src/tpl.c"
       &datapeek_ssz
# 1503 "project/goaccess/src/tpl.c" 3 4
       , 
# 1503 "project/goaccess/src/tpl.c"
       dv, sizeof (uint32_t)
# 1503 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1503 "project/goaccess/src/tpl.c"
       &datapeek_ssz
# 1503 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1503 "project/goaccess/src/tpl.c"
                                                    ;
        if (xendian)
          tpl_byteswap (&datapeek_ssz, sizeof (uint32_t));
        if (old_string_format)
          datapeek_ssz++;
        dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
        if (datapeek_ssz == 0)
          datapeek_s = 
# 1510 "project/goaccess/src/tpl.c" 3 4
                      ((void *)0)
# 1510 "project/goaccess/src/tpl.c"
                          ;
        else {
          if ((uintptr_t) dv - (uintptr_t) addr + datapeek_ssz - 1 > sz) {
            tpl_hook.oops ("tpl_peek: tpl has insufficient length\n");
            tpl_hook.free (fmt_cpy);
            fmt_cpy = 
# 1515 "project/goaccess/src/tpl.c" 3 4
                     ((void *)0)
# 1515 "project/goaccess/src/tpl.c"
                         ;
            goto fail;
          }
          datapeek_s = tpl_hook.malloc (datapeek_ssz);
          if (datapeek_s == 
# 1519 "project/goaccess/src/tpl.c" 3 4
                           ((void *)0)
# 1519 "project/goaccess/src/tpl.c"
                               )
            tpl_hook.fatal("out of memory\n");
          
# 1521 "project/goaccess/src/tpl.c" 3 4
         __builtin___memcpy_chk (
# 1521 "project/goaccess/src/tpl.c"
         datapeek_s
# 1521 "project/goaccess/src/tpl.c" 3 4
         , 
# 1521 "project/goaccess/src/tpl.c"
         dv, datapeek_ssz - 1
# 1521 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 1521 "project/goaccess/src/tpl.c"
         datapeek_s
# 1521 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 1521 "project/goaccess/src/tpl.c"
                                                  ;
          datapeek_s[datapeek_ssz - 1] = '\0';
          dv = (void *) ((uintptr_t) dv + datapeek_ssz - 1);
        }
        *(char **) datapeek_p = datapeek_s;
      } else {
        datapeek_csz = tpl_size_for (*datapeek_c);
        if ((uintptr_t) dv - (uintptr_t) addr + datapeek_csz > sz) {
          tpl_hook.oops ("tpl_peek: tpl has insufficient length\n");
          tpl_hook.free (fmt_cpy);
          fmt_cpy = 
# 1531 "project/goaccess/src/tpl.c" 3 4
                   ((void *)0)
# 1531 "project/goaccess/src/tpl.c"
                       ;
          goto fail;
        }
        
# 1534 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1534 "project/goaccess/src/tpl.c"
       datapeek_p
# 1534 "project/goaccess/src/tpl.c" 3 4
       , 
# 1534 "project/goaccess/src/tpl.c"
       dv, datapeek_csz
# 1534 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1534 "project/goaccess/src/tpl.c"
       datapeek_p
# 1534 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1534 "project/goaccess/src/tpl.c"
                                            ;
        if (xendian)
          tpl_byteswap (datapeek_p, datapeek_csz);
        dv = (void *) ((uintptr_t) dv + datapeek_csz);
      }
    }
  }

fail:
  
# 1543 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 1543 "project/goaccess/src/tpl.c"
 ap
# 1543 "project/goaccess/src/tpl.c" 3 4
 )
# 1543 "project/goaccess/src/tpl.c"
            ;
  if ((mode & (1 << 0)) && mr.text != 
# 1544 "project/goaccess/src/tpl.c" 3 4
                                     ((void *)0)
# 1544 "project/goaccess/src/tpl.c"
                                         )
    tpl_unmap_file (&mr);
  return fmt_cpy;
}




 int
tpl_jot (int mode, ...) {
  va_list ap;
  char *filename, *fmt;
  size_t *sz;
  int fd, rc = 0;
  void **buf;
  tpl_node *tn;

  
# 1561 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 1561 "project/goaccess/src/tpl.c"
 ap
# 1561 "project/goaccess/src/tpl.c" 3 4
 ,
# 1561 "project/goaccess/src/tpl.c"
 mode
# 1561 "project/goaccess/src/tpl.c" 3 4
 )
# 1561 "project/goaccess/src/tpl.c"
                    ;
  if (mode & (1 << 0)) {
    filename = 
# 1563 "project/goaccess/src/tpl.c" 3 4
              __builtin_va_arg(
# 1563 "project/goaccess/src/tpl.c"
              ap
# 1563 "project/goaccess/src/tpl.c" 3 4
              ,
# 1563 "project/goaccess/src/tpl.c"
              char *
# 1563 "project/goaccess/src/tpl.c" 3 4
              )
# 1563 "project/goaccess/src/tpl.c"
                                 ;
    fmt = 
# 1564 "project/goaccess/src/tpl.c" 3 4
         __builtin_va_arg(
# 1564 "project/goaccess/src/tpl.c"
         ap
# 1564 "project/goaccess/src/tpl.c" 3 4
         ,
# 1564 "project/goaccess/src/tpl.c"
         char *
# 1564 "project/goaccess/src/tpl.c" 3 4
         )
# 1564 "project/goaccess/src/tpl.c"
                            ;
    tn = tpl_map_va (fmt, ap);
    if (tn == 
# 1566 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 1566 "project/goaccess/src/tpl.c"
                 ) {
      rc = -1;
      goto fail;
    }
    tpl_pack (tn, 0);
    rc = tpl_dump (tn, (1 << 0), filename);
    tpl_free (tn);
  } else if (mode & (1 << 1)) {
    buf = 
# 1574 "project/goaccess/src/tpl.c" 3 4
         __builtin_va_arg(
# 1574 "project/goaccess/src/tpl.c"
         ap
# 1574 "project/goaccess/src/tpl.c" 3 4
         ,
# 1574 "project/goaccess/src/tpl.c"
         void *
# 1574 "project/goaccess/src/tpl.c" 3 4
         )
# 1574 "project/goaccess/src/tpl.c"
                            ;
    sz = 
# 1575 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 1575 "project/goaccess/src/tpl.c"
        ap
# 1575 "project/goaccess/src/tpl.c" 3 4
        ,
# 1575 "project/goaccess/src/tpl.c"
        size_t *
# 1575 "project/goaccess/src/tpl.c" 3 4
        )
# 1575 "project/goaccess/src/tpl.c"
                             ;
    fmt = 
# 1576 "project/goaccess/src/tpl.c" 3 4
         __builtin_va_arg(
# 1576 "project/goaccess/src/tpl.c"
         ap
# 1576 "project/goaccess/src/tpl.c" 3 4
         ,
# 1576 "project/goaccess/src/tpl.c"
         char *
# 1576 "project/goaccess/src/tpl.c" 3 4
         )
# 1576 "project/goaccess/src/tpl.c"
                            ;
    tn = tpl_map_va (fmt, ap);
    if (tn == 
# 1578 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 1578 "project/goaccess/src/tpl.c"
                 ) {
      rc = -1;
      goto fail;
    }
    tpl_pack (tn, 0);
    rc = tpl_dump (tn, (1 << 1), buf, sz);
    tpl_free (tn);
  } else if (mode & (1 << 4)) {
    fd = 
# 1586 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 1586 "project/goaccess/src/tpl.c"
        ap
# 1586 "project/goaccess/src/tpl.c" 3 4
        ,
# 1586 "project/goaccess/src/tpl.c"
        int
# 1586 "project/goaccess/src/tpl.c" 3 4
        )
# 1586 "project/goaccess/src/tpl.c"
                        ;
    fmt = 
# 1587 "project/goaccess/src/tpl.c" 3 4
         __builtin_va_arg(
# 1587 "project/goaccess/src/tpl.c"
         ap
# 1587 "project/goaccess/src/tpl.c" 3 4
         ,
# 1587 "project/goaccess/src/tpl.c"
         char *
# 1587 "project/goaccess/src/tpl.c" 3 4
         )
# 1587 "project/goaccess/src/tpl.c"
                            ;
    tn = tpl_map_va (fmt, ap);
    if (tn == 
# 1589 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 1589 "project/goaccess/src/tpl.c"
                 ) {
      rc = -1;
      goto fail;
    }
    tpl_pack (tn, 0);
    rc = tpl_dump (tn, (1 << 4), fd);
    tpl_free (tn);
  } else {
    tpl_hook.fatal ("invalid tpl_jot mode\n");
  }

fail:
  
# 1601 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 1601 "project/goaccess/src/tpl.c"
 ap
# 1601 "project/goaccess/src/tpl.c" 3 4
 )
# 1601 "project/goaccess/src/tpl.c"
            ;
  return rc;
}

 int
tpl_load (tpl_node * r, int mode, ...) {
  va_list ap;
  int rc = 0, fd = 0;
  char *filename = 
# 1609 "project/goaccess/src/tpl.c" 3 4
                  ((void *)0)
# 1609 "project/goaccess/src/tpl.c"
                      ;
  void *addr;
  size_t sz;

  
# 1613 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 1613 "project/goaccess/src/tpl.c"
 ap
# 1613 "project/goaccess/src/tpl.c" 3 4
 ,
# 1613 "project/goaccess/src/tpl.c"
 mode
# 1613 "project/goaccess/src/tpl.c" 3 4
 )
# 1613 "project/goaccess/src/tpl.c"
                    ;
  if (mode & (1 << 0))
    filename = 
# 1615 "project/goaccess/src/tpl.c" 3 4
              __builtin_va_arg(
# 1615 "project/goaccess/src/tpl.c"
              ap
# 1615 "project/goaccess/src/tpl.c" 3 4
              ,
# 1615 "project/goaccess/src/tpl.c"
              char *
# 1615 "project/goaccess/src/tpl.c" 3 4
              )
# 1615 "project/goaccess/src/tpl.c"
                                 ;
  else if (mode & (1 << 1)) {
    addr = 
# 1617 "project/goaccess/src/tpl.c" 3 4
          __builtin_va_arg(
# 1617 "project/goaccess/src/tpl.c"
          ap
# 1617 "project/goaccess/src/tpl.c" 3 4
          ,
# 1617 "project/goaccess/src/tpl.c"
          void *
# 1617 "project/goaccess/src/tpl.c" 3 4
          )
# 1617 "project/goaccess/src/tpl.c"
                             ;
    sz = 
# 1618 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 1618 "project/goaccess/src/tpl.c"
        ap
# 1618 "project/goaccess/src/tpl.c" 3 4
        ,
# 1618 "project/goaccess/src/tpl.c"
        size_t
# 1618 "project/goaccess/src/tpl.c" 3 4
        )
# 1618 "project/goaccess/src/tpl.c"
                           ;
  } else if (mode & (1 << 4)) {
    fd = 
# 1620 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 1620 "project/goaccess/src/tpl.c"
        ap
# 1620 "project/goaccess/src/tpl.c" 3 4
        ,
# 1620 "project/goaccess/src/tpl.c"
        int
# 1620 "project/goaccess/src/tpl.c" 3 4
        )
# 1620 "project/goaccess/src/tpl.c"
                        ;
  } else {
    tpl_hook.oops ("unsupported tpl_load mode %d\n", mode);
    
# 1623 "project/goaccess/src/tpl.c" 3 4
   __builtin_va_end(
# 1623 "project/goaccess/src/tpl.c"
   ap
# 1623 "project/goaccess/src/tpl.c" 3 4
   )
# 1623 "project/goaccess/src/tpl.c"
              ;
    return -1;
  }
  
# 1626 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 1626 "project/goaccess/src/tpl.c"
 ap
# 1626 "project/goaccess/src/tpl.c" 3 4
 )
# 1626 "project/goaccess/src/tpl.c"
            ;

  if (r->type != 0) {
    tpl_hook.oops ("error: tpl_load to non-root node\n");
    return -1;
  }
  if (((tpl_root_data *) (r->data))->flags & ((1 << 9) | (1 << 10))) {

    tpl_free_keep_map (r);
  }
  if (mode & (1 << 0)) {
    if (tpl_mmap_file (filename, &((tpl_root_data *) (r->data))->mmap) != 0) {
      tpl_hook.oops ("tpl_load failed for file %s\n", filename);
      return -1;
    }
    if ((rc = tpl_sanity (r, (mode & (1 << 3)))) != 0) {
      if (rc == (-6)) {
        tpl_hook.oops ("%s: format signature mismatch\n", filename);
      } else if (rc == (-7)) {
        tpl_hook.oops ("%s: array lengths mismatch\n", filename);
      } else {
        tpl_hook.oops ("%s: not a valid tpl file\n", filename);
      }
      tpl_unmap_file (&((tpl_root_data *) (r->data))->mmap);
      return -1;
    }
    ((tpl_root_data *) (r->data))->flags = ((1 << 0) | (1 << 10));
  } else if (mode & (1 << 1)) {
    ((tpl_root_data *) (r->data))->mmap.text = addr;
    ((tpl_root_data *) (r->data))->mmap.text_sz = sz;
    if ((rc = tpl_sanity (r, (mode & (1 << 3)))) != 0) {
      if (rc == (-6)) {
        tpl_hook.oops ("format signature mismatch\n");
      } else {
        tpl_hook.oops ("not a valid tpl file\n");
      }
      return -1;
    }
    ((tpl_root_data *) (r->data))->flags = ((1 << 1) | (1 << 10));
    if (mode & (1 << 5))
      ((tpl_root_data *) (r->data))->flags |= (1 << 5);
  } else if (mode & (1 << 4)) {

    if (tpl_gather (1, fd, &addr, &sz) > 0) {
      return tpl_load (r, (1 << 1) | (1 << 5), addr, sz);
    } else
      return -1;
  } else {
    tpl_hook.oops ("invalid tpl_load mode %d\n", mode);
    return -1;
  }

  if (tpl_needs_endian_swap (((tpl_root_data *) (r->data))->mmap.text))
    ((tpl_root_data *) (r->data))->flags |= (1 << 11);
  tpl_unpackA0 (r);
  return 0;
}

 int
tpl_Alen (tpl_node * r, int i) {
  tpl_node *n;

  n = tpl_find_i (r, i);
  if (n == 
# 1689 "project/goaccess/src/tpl.c" 3 4
          ((void *)0)
# 1689 "project/goaccess/src/tpl.c"
              ) {
    tpl_hook.oops ("invalid index %d to tpl_unpack\n", i);
    return -1;
  }
  if (n->type != 5)
    return -1;
  return ((tpl_atyp *) (n->data))->num;
}

static void
tpl_free_atyp (tpl_node * n, tpl_atyp * atyp) {
  tpl_backbone *bb, *bbnxt;
  tpl_node *c;
  void *dv;
  tpl_bin *binp;
  tpl_atyp *atypp;
  char *strp;
  size_t itermax;
  tpl_pound_data *pd;
  int i;

  bb = atyp->bb;
  while (bb) {
    bbnxt = bb->next;
    dv = bb->data;
    c = n->children;
    while (c) {
      switch (c->type) {
      case 3:
      case 7:
      case 1:
      case 2:
      case 8:
      case 9:
      case 10:
      case 11:
        dv = (void *) ((uintptr_t) dv + tpl_types[c->type].sz * c->num);
        break;
      case 6:
        
# 1728 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1728 "project/goaccess/src/tpl.c"
       &binp
# 1728 "project/goaccess/src/tpl.c" 3 4
       , 
# 1728 "project/goaccess/src/tpl.c"
       dv, sizeof (tpl_bin *)
# 1728 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1728 "project/goaccess/src/tpl.c"
       &binp
# 1728 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1728 "project/goaccess/src/tpl.c"
                                             ;
        if (binp->addr)
          tpl_hook.free (binp->addr);
        tpl_hook.free (binp);
        dv = (void *) ((uintptr_t) dv + sizeof (tpl_bin *));
        break;
      case 4:
        for (i = 0; i < c->num; i++) {
          
# 1736 "project/goaccess/src/tpl.c" 3 4
         __builtin___memcpy_chk (
# 1736 "project/goaccess/src/tpl.c"
         &strp
# 1736 "project/goaccess/src/tpl.c" 3 4
         , 
# 1736 "project/goaccess/src/tpl.c"
         dv, sizeof (char *)
# 1736 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 1736 "project/goaccess/src/tpl.c"
         &strp
# 1736 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 1736 "project/goaccess/src/tpl.c"
                                            ;
          if (strp)
            tpl_hook.free (strp);
          dv = (void *) ((uintptr_t) dv + sizeof (char *));
        }
        break;
      case 12:

        itermax = c->num;
        pd = (tpl_pound_data *) c->data;
        if (++(pd->iternum) < itermax) {
          c = pd->iter_start_node;
          continue;
        } else {
          pd->iternum = 0;
        }
        break;
      case 5:
        
# 1754 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1754 "project/goaccess/src/tpl.c"
       &atypp
# 1754 "project/goaccess/src/tpl.c" 3 4
       , 
# 1754 "project/goaccess/src/tpl.c"
       dv, sizeof (tpl_atyp *)
# 1754 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1754 "project/goaccess/src/tpl.c"
       &atypp
# 1754 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1754 "project/goaccess/src/tpl.c"
                                               ;
        tpl_free_atyp (c, atypp);
        dv = (void *) ((uintptr_t) dv + sizeof (void *));
        break;
      default:
        tpl_hook.fatal ("unsupported format character\n");
        break;
      }
      c = c->next;
    }
    tpl_hook.free (bb);
    bb = bbnxt;
  }
  tpl_hook.free (atyp);
}




static int
tpl_serlen (tpl_node * r, tpl_node * n, void *dv, size_t *serlen) {
  uint32_t slen;
  int num = 0, fidx;
  tpl_node *c;
  size_t len = 0, alen, buf_past, itermax;
  tpl_pound_data *pd;

  buf_past = ((uintptr_t) ((tpl_root_data *) (r->data))->mmap.text +
              ((tpl_root_data *) (r->data))->mmap.text_sz);

  if (n->type == 0)
    num = 1;
  else if (n->type == 5) {
    if ((uintptr_t) dv + sizeof (uint32_t) > buf_past)
      return -1;
    
# 1789 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 1789 "project/goaccess/src/tpl.c"
   &num
# 1789 "project/goaccess/src/tpl.c" 3 4
   , 
# 1789 "project/goaccess/src/tpl.c"
   dv, sizeof (uint32_t)
# 1789 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 1789 "project/goaccess/src/tpl.c"
   &num
# 1789 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 1789 "project/goaccess/src/tpl.c"
                                       ;
    if (((tpl_root_data *) (r->data))->flags & (1 << 11))
      tpl_byteswap (&num, sizeof (uint32_t));
    dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
    len += sizeof (uint32_t);
  } else
    tpl_hook.fatal ("internal error in tpl_serlen\n");

  while (num-- > 0) {
    c = n->children;
    while (c) {
      switch (c->type) {
      case 3:
      case 7:
      case 1:
      case 2:
      case 8:
      case 9:
      case 10:
      case 11:
        for (fidx = 0; fidx < c->num; fidx++) {
          if ((uintptr_t) dv + tpl_types[c->type].sz > buf_past)
            return -1;
          dv = (void *) ((uintptr_t) dv + tpl_types[c->type].sz);
          len += tpl_types[c->type].sz;
        }
        break;
      case 6:
        len += sizeof (uint32_t);
        if ((uintptr_t) dv + sizeof (uint32_t) > buf_past)
          return -1;
        
# 1820 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1820 "project/goaccess/src/tpl.c"
       &slen
# 1820 "project/goaccess/src/tpl.c" 3 4
       , 
# 1820 "project/goaccess/src/tpl.c"
       dv, sizeof (uint32_t)
# 1820 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1820 "project/goaccess/src/tpl.c"
       &slen
# 1820 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1820 "project/goaccess/src/tpl.c"
                                            ;
        if (((tpl_root_data *) (r->data))->flags & (1 << 11))
          tpl_byteswap (&slen, sizeof (uint32_t));
        len += slen;
        dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
        if ((uintptr_t) dv + slen > buf_past)
          return -1;
        dv = (void *) ((uintptr_t) dv + slen);
        break;
      case 4:
        for (fidx = 0; fidx < c->num; fidx++) {
          len += sizeof (uint32_t);
          if ((uintptr_t) dv + sizeof (uint32_t) > buf_past)
            return -1;
          
# 1834 "project/goaccess/src/tpl.c" 3 4
         __builtin___memcpy_chk (
# 1834 "project/goaccess/src/tpl.c"
         &slen
# 1834 "project/goaccess/src/tpl.c" 3 4
         , 
# 1834 "project/goaccess/src/tpl.c"
         dv, sizeof (uint32_t)
# 1834 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 1834 "project/goaccess/src/tpl.c"
         &slen
# 1834 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 1834 "project/goaccess/src/tpl.c"
                                              ;
          if (((tpl_root_data *) (r->data))->flags & (1 << 11))
            tpl_byteswap (&slen, sizeof (uint32_t));
          if (!(((tpl_root_data *) (r->data))->flags & (1 << 12)))
            slen = (slen > 1) ? (slen - 1) : 0;
          len += slen;
          dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
          if ((uintptr_t) dv + slen > buf_past)
            return -1;
          dv = (void *) ((uintptr_t) dv + slen);
        }
        break;
      case 5:
        if (tpl_serlen (r, c, dv, &alen) == -1)
          return -1;
        dv = (void *) ((uintptr_t) dv + alen);
        len += alen;
        break;
      case 12:

        itermax = c->num;
        pd = (tpl_pound_data *) c->data;
        if (++(pd->iternum) < itermax) {
          c = pd->iter_start_node;
          continue;
        } else {
          pd->iternum = 0;
        }
        break;
      default:
        tpl_hook.fatal ("unsupported format character\n");
        break;
      }
      c = c->next;
    }
  }
  *serlen = len;
  return 0;
}

static int
tpl_mmap_output_file (char *filename, size_t sz, void **text_out) {
  void *text;
  int fd, perms;


  perms = 
# 1880 "project/goaccess/src/tpl.c" 3 4
         0000400 
# 1880 "project/goaccess/src/tpl.c"
                 | 
# 1880 "project/goaccess/src/tpl.c" 3 4
                   0000200 
# 1880 "project/goaccess/src/tpl.c"
                           | 
# 1880 "project/goaccess/src/tpl.c" 3 4
                             0000020 
# 1880 "project/goaccess/src/tpl.c"
                                     | 
# 1880 "project/goaccess/src/tpl.c" 3 4
                                       0000040 
# 1880 "project/goaccess/src/tpl.c"
                                               | 
# 1880 "project/goaccess/src/tpl.c" 3 4
                                                 0000004
# 1880 "project/goaccess/src/tpl.c"
                                                        ;
  fd = open (filename, 
# 1881 "project/goaccess/src/tpl.c" 3 4
                      0x00000200 
# 1881 "project/goaccess/src/tpl.c"
                              | 
# 1881 "project/goaccess/src/tpl.c" 3 4
                                0x00000400 
# 1881 "project/goaccess/src/tpl.c"
                                        | 
# 1881 "project/goaccess/src/tpl.c" 3 4
                                          0x0002
# 1881 "project/goaccess/src/tpl.c"
                                                , perms);





  if (fd == -1) {
    tpl_hook.oops ("Couldn't open file %s: %s\n", filename, strerror (
# 1888 "project/goaccess/src/tpl.c" 3 4
                                                                     (*__error())
# 1888 "project/goaccess/src/tpl.c"
                                                                          ));
    return -1;
  }

  text = mmap (0, sz, 
# 1892 "project/goaccess/src/tpl.c" 3 4
                     0x01 
# 1892 "project/goaccess/src/tpl.c"
                               | 
# 1892 "project/goaccess/src/tpl.c" 3 4
                                 0x02
# 1892 "project/goaccess/src/tpl.c"
                                           , 
# 1892 "project/goaccess/src/tpl.c" 3 4
                                             0x0001
# 1892 "project/goaccess/src/tpl.c"
                                                       , fd, 0);
  if (text == 
# 1893 "project/goaccess/src/tpl.c" 3 4
             ((void *)-1)
# 1893 "project/goaccess/src/tpl.c"
                       ) {
    tpl_hook.oops ("Failed to mmap %s: %s\n", filename, strerror (
# 1894 "project/goaccess/src/tpl.c" 3 4
                                                                 (*__error())
# 1894 "project/goaccess/src/tpl.c"
                                                                      ));
    close (fd);
    return -1;
  }
  if (ftruncate (fd, sz) == -1) {
    tpl_hook.oops ("ftruncate failed: %s\n", strerror (
# 1899 "project/goaccess/src/tpl.c" 3 4
                                                      (*__error())
# 1899 "project/goaccess/src/tpl.c"
                                                           ));
    munmap (text, sz);
    close (fd);
    return -1;
  }
  *text_out = text;
  return fd;
}

static int
tpl_mmap_file (char *filename, tpl_mmap_rec * mr) {
  struct stat stat_buf;

  if ((mr->fd = open (filename, 
# 1912 "project/goaccess/src/tpl.c" 3 4
                               0x0000
# 1912 "project/goaccess/src/tpl.c"
                                       )) == -1) {
    tpl_hook.oops ("Couldn't open file %s: %s\n", filename, strerror (
# 1913 "project/goaccess/src/tpl.c" 3 4
                                                                     (*__error())
# 1913 "project/goaccess/src/tpl.c"
                                                                          ));
    return -1;
  }

  if (fstat (mr->fd, &stat_buf) == -1) {
    close (mr->fd);
    tpl_hook.oops ("Couldn't stat file %s: %s\n", filename, strerror (
# 1919 "project/goaccess/src/tpl.c" 3 4
                                                                     (*__error())
# 1919 "project/goaccess/src/tpl.c"
                                                                          ));
    return -1;
  }

  mr->text_sz = (size_t) stat_buf.st_size;
  mr->text = mmap (0, stat_buf.st_size, 
# 1924 "project/goaccess/src/tpl.c" 3 4
                                       0x01
# 1924 "project/goaccess/src/tpl.c"
                                                , 
# 1924 "project/goaccess/src/tpl.c" 3 4
                                                  0x0002
# 1924 "project/goaccess/src/tpl.c"
                                                             , mr->fd, 0);
  if (mr->text == 
# 1925 "project/goaccess/src/tpl.c" 3 4
                 ((void *)-1)
# 1925 "project/goaccess/src/tpl.c"
                           ) {
    close (mr->fd);
    tpl_hook.oops ("Failed to mmap %s: %s\n", filename, strerror (
# 1927 "project/goaccess/src/tpl.c" 3 4
                                                                 (*__error())
# 1927 "project/goaccess/src/tpl.c"
                                                                      ));
    return -1;
  }

  return 0;
}

 int
tpl_pack (tpl_node * r, int i) {
  tpl_node *n, *child, *np;
  void *datav = 
# 1937 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 1937 "project/goaccess/src/tpl.c"
                   ;
  size_t sz, itermax;
  uint32_t slen;
  char *str;
  tpl_bin *bin;
  tpl_pound_data *pd;
  int fidx;

  n = tpl_find_i (r, i);
  if (n == 
# 1946 "project/goaccess/src/tpl.c" 3 4
          ((void *)0)
# 1946 "project/goaccess/src/tpl.c"
              ) {
    tpl_hook.oops ("invalid index %d to tpl_pack\n", i);
    return -1;
  }

  if (((tpl_root_data *) (r->data))->flags & (1 << 10)) {

    tpl_free_keep_map (r);
  }

  ((tpl_root_data *) (r->data))->flags |= (1 << 9);

  if (n->type == 5)
    datav = tpl_extend_backbone (n);
  child = n->children;
  while (child) {
    switch (child->type) {
    case 3:
    case 7:
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 11:

      
# 1972 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 1972 "project/goaccess/src/tpl.c"
     child->data
# 1972 "project/goaccess/src/tpl.c" 3 4
     , 
# 1972 "project/goaccess/src/tpl.c"
     child->addr, tpl_types[child->type].sz * child->num
# 1972 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 1972 "project/goaccess/src/tpl.c"
     child->data
# 1972 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 1972 "project/goaccess/src/tpl.c"
                                                                              ;
      if (datav)
        datav = tpl_cpv (datav, child->data, tpl_types[child->type].sz * child->num);
      if (n->type == 5)
        n->ser_osz += tpl_types[child->type].sz * child->num;
      break;
    case 6:

      slen = ((tpl_bin *) child->addr)->sz;
      if (slen > 0) {
        str = tpl_hook.malloc (slen);
        if (!str)
          tpl_hook.fatal("out of memory\n");
        
# 1985 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 1985 "project/goaccess/src/tpl.c"
       str
# 1985 "project/goaccess/src/tpl.c" 3 4
       , 
# 1985 "project/goaccess/src/tpl.c"
       ((tpl_bin *) child->addr)->addr, slen
# 1985 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 1985 "project/goaccess/src/tpl.c"
       str
# 1985 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 1985 "project/goaccess/src/tpl.c"
                                                          ;
      } else
        str = 
# 1987 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 1987 "project/goaccess/src/tpl.c"
                 ;

      bin = tpl_hook.malloc (sizeof (tpl_bin));
      if (!bin)
        tpl_hook.fatal("out of memory\n");
      bin->addr = str;
      bin->sz = slen;

      if (*(tpl_bin **) (child->data) != 
# 1995 "project/goaccess/src/tpl.c" 3 4
                                        ((void *)0)
# 1995 "project/goaccess/src/tpl.c"
                                            ) {
        if ((*(tpl_bin **) (child->data))->sz != 0) {
          tpl_hook.free ((*(tpl_bin **) (child->data))->addr);
        }
        tpl_hook.free (*(tpl_bin **) (child->data));
      }
      
# 2001 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2001 "project/goaccess/src/tpl.c"
     child->data
# 2001 "project/goaccess/src/tpl.c" 3 4
     , 
# 2001 "project/goaccess/src/tpl.c"
     &bin, sizeof (tpl_bin *)
# 2001 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2001 "project/goaccess/src/tpl.c"
     child->data
# 2001 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2001 "project/goaccess/src/tpl.c"
                                                   ;
      if (datav) {
        datav = tpl_cpv (datav, &bin, sizeof (tpl_bin *));
        *(tpl_bin **) (child->data) = 
# 2004 "project/goaccess/src/tpl.c" 3 4
                                     ((void *)0)
# 2004 "project/goaccess/src/tpl.c"
                                         ;
      }
      if (n->type == 5) {
        n->ser_osz += sizeof (uint32_t);
        n->ser_osz += bin->sz;
      }
      break;
    case 4:
      for (fidx = 0; fidx < child->num; fidx++) {


        char *caddr = ((char **) child->addr)[fidx];
        char **cdata = &((char **) child->data)[fidx];
        slen = caddr ? (strlen (caddr) + 1) : 0;
        if (slen) {
          str = tpl_hook.malloc (slen);
          if (!str)
            tpl_hook.fatal("out of memory\n");
          
# 2022 "project/goaccess/src/tpl.c" 3 4
         __builtin___memcpy_chk (
# 2022 "project/goaccess/src/tpl.c"
         str
# 2022 "project/goaccess/src/tpl.c" 3 4
         , 
# 2022 "project/goaccess/src/tpl.c"
         caddr, slen
# 2022 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 2022 "project/goaccess/src/tpl.c"
         str
# 2022 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 2022 "project/goaccess/src/tpl.c"
                                  ;
        } else {
          str = 
# 2024 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 2024 "project/goaccess/src/tpl.c"
                   ;
        }

        if (*cdata != 
# 2027 "project/goaccess/src/tpl.c" 3 4
                     ((void *)0)
# 2027 "project/goaccess/src/tpl.c"
                         ) {
          tpl_hook.free (*cdata);
        }
        
# 2030 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2030 "project/goaccess/src/tpl.c"
       cdata
# 2030 "project/goaccess/src/tpl.c" 3 4
       , 
# 2030 "project/goaccess/src/tpl.c"
       &str, sizeof (char *)
# 2030 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2030 "project/goaccess/src/tpl.c"
       cdata
# 2030 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2030 "project/goaccess/src/tpl.c"
                                            ;
        if (datav) {
          datav = tpl_cpv (datav, &str, sizeof (char *));
          *cdata = 
# 2033 "project/goaccess/src/tpl.c" 3 4
                  ((void *)0)
# 2033 "project/goaccess/src/tpl.c"
                      ;
        }
        if (n->type == 5) {
          n->ser_osz += sizeof (uint32_t);
          if (slen > 1)
            n->ser_osz += slen - 1;
        }
      }
      break;
    case 5:

      if (datav) {
        sz = ((tpl_atyp *) (child->data))->sz;
        datav = tpl_cpv (datav, &child->data, sizeof (void *));
        child->data = tpl_hook.malloc (sizeof (tpl_atyp));
        if (!child->data)
          tpl_hook.fatal("out of memory\n");
        ((tpl_atyp *) (child->data))->num = 0;
        ((tpl_atyp *) (child->data))->sz = sz;
        ((tpl_atyp *) (child->data))->bb = 
# 2052 "project/goaccess/src/tpl.c" 3 4
                                          ((void *)0)
# 2052 "project/goaccess/src/tpl.c"
                                              ;
        ((tpl_atyp *) (child->data))->bbtail = 
# 2053 "project/goaccess/src/tpl.c" 3 4
                                              ((void *)0)
# 2053 "project/goaccess/src/tpl.c"
                                                  ;
      }

      if (n->type == 5) {
        n->ser_osz += sizeof (uint32_t);
        n->ser_osz += child->ser_osz;
        child->ser_osz = 0;
      }
      break;

    case 12:


      pd = (tpl_pound_data *) child->data;
      itermax = child->num;






      if (++(pd->iternum) < itermax) {


        for (np = pd->iter_start_node; np != child; np = np->next) {
          np->data = (char *) (np->data) + (tpl_types[np->type].sz * np->num);
          np->addr = (char *) (np->addr) + pd->inter_elt_len;
        }

        child = pd->iter_start_node;
        continue;

      } else {


        pd->iternum = 0;
        for (np = pd->iter_start_node; np != child; np = np->next) {
          np->data = (char *) (np->data) - ((itermax - 1) * tpl_types[np->type].sz * np->num);
          np->addr = (char *) (np->addr) - ((itermax - 1) * pd->inter_elt_len);
        }

      }
      break;
    default:
      tpl_hook.fatal ("unsupported format character\n");
      break;
    }
    child = child->next;
  }
  return 0;
}

 int
tpl_unpack (tpl_node * r, int i) {
  tpl_node *n, *c, *np;
  uint32_t slen;
  int rc = 1, fidx;
  char *str;
  void *dv = 
# 2111 "project/goaccess/src/tpl.c" 3 4
            ((void *)0)
# 2111 "project/goaccess/src/tpl.c"
                , *caddr;
  size_t A_bytes, itermax;
  tpl_pound_data *pd;
  void *img;
  size_t sz;




  if (((tpl_root_data *) (r->data))->flags & (1 << 9)) {
    if (tpl_dump (r, (1 << 1), &img, &sz) != 0)
      return -1;
    if (tpl_load (r, (1 << 1) | (1 << 5), img, sz) != 0) {
      tpl_hook.free (img);
      return -1;
    };
  }

  n = tpl_find_i (r, i);
  if (n == 
# 2130 "project/goaccess/src/tpl.c" 3 4
          ((void *)0)
# 2130 "project/goaccess/src/tpl.c"
              ) {
    tpl_hook.oops ("invalid index %d to tpl_unpack\n", i);
    return -1;
  }


  if (n->type == 0) {
    dv = tpl_find_data_start (((tpl_root_data *) (n->data))->mmap.text);
  } else if (n->type == 5) {
    if (((tpl_atyp *) (n->data))->num <= 0)
      return 0;
    else
      rc = ((tpl_atyp *) (n->data))->num--;
    dv = ((tpl_atyp *) (n->data))->cur;
    if (!dv)
      tpl_hook.fatal ("must unpack parent of node before node itself\n");
  }

  c = n->children;
  while (c) {
    switch (c->type) {
    case 3:
    case 7:
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 11:

      if (((tpl_root_data *) (r->data))->flags & (1 << 11)) {
        for (fidx = 0; fidx < c->num; fidx++) {
          caddr = (void *) ((uintptr_t) c->addr + (fidx * tpl_types[c->type].sz));
          
# 2163 "project/goaccess/src/tpl.c" 3 4
         __builtin___memcpy_chk (
# 2163 "project/goaccess/src/tpl.c"
         caddr
# 2163 "project/goaccess/src/tpl.c" 3 4
         , 
# 2163 "project/goaccess/src/tpl.c"
         dv, tpl_types[c->type].sz
# 2163 "project/goaccess/src/tpl.c" 3 4
         , __builtin_object_size (
# 2163 "project/goaccess/src/tpl.c"
         caddr
# 2163 "project/goaccess/src/tpl.c" 3 4
         , 0))
# 2163 "project/goaccess/src/tpl.c"
                                                  ;
          tpl_byteswap (caddr, tpl_types[c->type].sz);
          dv = (void *) ((uintptr_t) dv + tpl_types[c->type].sz);
        }
      } else {

        
# 2169 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2169 "project/goaccess/src/tpl.c"
       c->addr
# 2169 "project/goaccess/src/tpl.c" 3 4
       , 
# 2169 "project/goaccess/src/tpl.c"
       dv, tpl_types[c->type].sz * c->num
# 2169 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2169 "project/goaccess/src/tpl.c"
       c->addr
# 2169 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2169 "project/goaccess/src/tpl.c"
                                                           ;
        dv = (void *) ((uintptr_t) dv + tpl_types[c->type].sz * c->num);
      }
      break;
    case 6:
      
# 2174 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2174 "project/goaccess/src/tpl.c"
     &slen
# 2174 "project/goaccess/src/tpl.c" 3 4
     , 
# 2174 "project/goaccess/src/tpl.c"
     dv, sizeof (uint32_t)
# 2174 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2174 "project/goaccess/src/tpl.c"
     &slen
# 2174 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2174 "project/goaccess/src/tpl.c"
                                          ;
      if (((tpl_root_data *) (r->data))->flags & (1 << 11))
        tpl_byteswap (&slen, sizeof (uint32_t));
      if (slen > 0) {
        str = (char *) tpl_hook.malloc (slen);
        if (!str)
          tpl_hook.fatal("out of memory\n");
      } else
        str = 
# 2182 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 2182 "project/goaccess/src/tpl.c"
                 ;
      dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
      if (slen > 0)
        
# 2185 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2185 "project/goaccess/src/tpl.c"
       str
# 2185 "project/goaccess/src/tpl.c" 3 4
       , 
# 2185 "project/goaccess/src/tpl.c"
       dv, slen
# 2185 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2185 "project/goaccess/src/tpl.c"
       str
# 2185 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2185 "project/goaccess/src/tpl.c"
                             ;
      
# 2186 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2186 "project/goaccess/src/tpl.c"
     &(((tpl_bin *) c->addr)->addr)
# 2186 "project/goaccess/src/tpl.c" 3 4
     , 
# 2186 "project/goaccess/src/tpl.c"
     &str, sizeof (void *)
# 2186 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2186 "project/goaccess/src/tpl.c"
     &(((tpl_bin *) c->addr)->addr)
# 2186 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2186 "project/goaccess/src/tpl.c"
                                                                   ;
      
# 2187 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2187 "project/goaccess/src/tpl.c"
     &(((tpl_bin *) c->addr)->sz)
# 2187 "project/goaccess/src/tpl.c" 3 4
     , 
# 2187 "project/goaccess/src/tpl.c"
     &slen, sizeof (uint32_t)
# 2187 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2187 "project/goaccess/src/tpl.c"
     &(((tpl_bin *) c->addr)->sz)
# 2187 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2187 "project/goaccess/src/tpl.c"
                                                                    ;
      dv = (void *) ((uintptr_t) dv + slen);
      break;
    case 4:
      for (fidx = 0; fidx < c->num; fidx++) {
        
# 2192 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2192 "project/goaccess/src/tpl.c"
       &slen
# 2192 "project/goaccess/src/tpl.c" 3 4
       , 
# 2192 "project/goaccess/src/tpl.c"
       dv, sizeof (uint32_t)
# 2192 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2192 "project/goaccess/src/tpl.c"
       &slen
# 2192 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2192 "project/goaccess/src/tpl.c"
                                            ;
        if (((tpl_root_data *) (r->data))->flags & (1 << 11))
          tpl_byteswap (&slen, sizeof (uint32_t));
        if (((tpl_root_data *) (r->data))->flags & (1 << 12))
          slen += 1;
        dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
        if (slen) {
          str = (char *) tpl_hook.malloc (slen);
          if (!str)
            tpl_hook.fatal("out of memory\n");
          if (slen > 1)
            
# 2203 "project/goaccess/src/tpl.c" 3 4
           __builtin___memcpy_chk (
# 2203 "project/goaccess/src/tpl.c"
           str
# 2203 "project/goaccess/src/tpl.c" 3 4
           , 
# 2203 "project/goaccess/src/tpl.c"
           dv, slen - 1
# 2203 "project/goaccess/src/tpl.c" 3 4
           , __builtin_object_size (
# 2203 "project/goaccess/src/tpl.c"
           str
# 2203 "project/goaccess/src/tpl.c" 3 4
           , 0))
# 2203 "project/goaccess/src/tpl.c"
                                     ;
          str[slen - 1] = '\0';
          dv = (void *) ((uintptr_t) dv + slen - 1);
        } else
          str = 
# 2207 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 2207 "project/goaccess/src/tpl.c"
                   ;
        
# 2208 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2208 "project/goaccess/src/tpl.c"
       &((char **) c->addr)[fidx]
# 2208 "project/goaccess/src/tpl.c" 3 4
       , 
# 2208 "project/goaccess/src/tpl.c"
       &str, sizeof (char *)
# 2208 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2208 "project/goaccess/src/tpl.c"
       &((char **) c->addr)[fidx]
# 2208 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2208 "project/goaccess/src/tpl.c"
                                                                 ;
      }
      break;
    case 12:

      pd = (tpl_pound_data *) c->data;
      itermax = c->num;
      if (++(pd->iternum) < itermax) {

        for (np = pd->iter_start_node; np != c; np = np->next) {
          np->addr = (char *) (np->addr) + pd->inter_elt_len;
        }

        c = pd->iter_start_node;
        continue;

      } else {


        pd->iternum = 0;
        for (np = pd->iter_start_node; np != c; np = np->next) {
          np->addr = (char *) (np->addr) - ((itermax - 1) * pd->inter_elt_len);
        }

      }
      break;
    case 5:
      if (tpl_serlen (r, c, dv, &A_bytes) == -1)
        tpl_hook.fatal ("internal error in unpack\n");
      
# 2237 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2237 "project/goaccess/src/tpl.c"
     &((tpl_atyp *) (c->data))->num
# 2237 "project/goaccess/src/tpl.c" 3 4
     , 
# 2237 "project/goaccess/src/tpl.c"
     dv, sizeof (uint32_t)
# 2237 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2237 "project/goaccess/src/tpl.c"
     &((tpl_atyp *) (c->data))->num
# 2237 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2237 "project/goaccess/src/tpl.c"
                                                                   ;
      if (((tpl_root_data *) (r->data))->flags & (1 << 11))
        tpl_byteswap (&((tpl_atyp *) (c->data))->num, sizeof (uint32_t));
      ((tpl_atyp *) (c->data))->cur = (void *) ((uintptr_t) dv + sizeof (uint32_t));
      dv = (void *) ((uintptr_t) dv + A_bytes);
      break;
    default:
      tpl_hook.fatal ("unsupported format character\n");
      break;
    }

    c = c->next;
  }
  if (n->type == 5)
    ((tpl_atyp *) (n->data))->cur = dv;
  return rc;
}


static int
tpl_unpackA0 (tpl_node * r) {
  tpl_node *n, *c;
  uint32_t slen;
  int rc = 1, fidx, i;
  void *dv;
  size_t A_bytes, itermax;
  tpl_pound_data *pd;

  n = r;
  dv = tpl_find_data_start (((tpl_root_data *) (r->data))->mmap.text);

  c = n->children;
  while (c) {
    switch (c->type) {
    case 3:
    case 7:
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 11:
      for (fidx = 0; fidx < c->num; fidx++) {
        dv = (void *) ((uintptr_t) dv + tpl_types[c->type].sz);
      }
      break;
    case 6:
      
# 2284 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2284 "project/goaccess/src/tpl.c"
     &slen
# 2284 "project/goaccess/src/tpl.c" 3 4
     , 
# 2284 "project/goaccess/src/tpl.c"
     dv, sizeof (uint32_t)
# 2284 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2284 "project/goaccess/src/tpl.c"
     &slen
# 2284 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2284 "project/goaccess/src/tpl.c"
                                          ;
      if (((tpl_root_data *) (r->data))->flags & (1 << 11))
        tpl_byteswap (&slen, sizeof (uint32_t));
      dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
      dv = (void *) ((uintptr_t) dv + slen);
      break;
    case 4:
      for (i = 0; i < c->num; i++) {
        
# 2292 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2292 "project/goaccess/src/tpl.c"
       &slen
# 2292 "project/goaccess/src/tpl.c" 3 4
       , 
# 2292 "project/goaccess/src/tpl.c"
       dv, sizeof (uint32_t)
# 2292 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2292 "project/goaccess/src/tpl.c"
       &slen
# 2292 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2292 "project/goaccess/src/tpl.c"
                                            ;
        if (((tpl_root_data *) (r->data))->flags & (1 << 11))
          tpl_byteswap (&slen, sizeof (uint32_t));
        if (((tpl_root_data *) (r->data))->flags & (1 << 12))
          slen += 1;
        dv = (void *) ((uintptr_t) dv + sizeof (uint32_t));
        if (slen > 1)
          dv = (void *) ((uintptr_t) dv + slen - 1);
      }
      break;
    case 12:

      itermax = c->num;
      pd = (tpl_pound_data *) c->data;
      if (++(pd->iternum) < itermax) {
        c = pd->iter_start_node;
        continue;
      } else {
        pd->iternum = 0;
      }
      break;
    case 5:
      if (tpl_serlen (r, c, dv, &A_bytes) == -1)
        tpl_hook.fatal ("internal error in unpackA0\n");
      
# 2316 "project/goaccess/src/tpl.c" 3 4
     __builtin___memcpy_chk (
# 2316 "project/goaccess/src/tpl.c"
     &((tpl_atyp *) (c->data))->num
# 2316 "project/goaccess/src/tpl.c" 3 4
     , 
# 2316 "project/goaccess/src/tpl.c"
     dv, sizeof (uint32_t)
# 2316 "project/goaccess/src/tpl.c" 3 4
     , __builtin_object_size (
# 2316 "project/goaccess/src/tpl.c"
     &((tpl_atyp *) (c->data))->num
# 2316 "project/goaccess/src/tpl.c" 3 4
     , 0))
# 2316 "project/goaccess/src/tpl.c"
                                                                   ;
      if (((tpl_root_data *) (r->data))->flags & (1 << 11))
        tpl_byteswap (&((tpl_atyp *) (c->data))->num, sizeof (uint32_t));
      ((tpl_atyp *) (c->data))->cur = (void *) ((uintptr_t) dv + sizeof (uint32_t));
      dv = (void *) ((uintptr_t) dv + A_bytes);
      break;
    default:
      tpl_hook.fatal ("unsupported format character\n");
      break;
    }
    c = c->next;
  }
  return rc;
}


static void
tpl_byteswap (void *word, int len) {
  int i;
  char c, *w;
  w = (char *) word;
  for (i = 0; i < len / 2; i++) {
    c = w[i];
    w[i] = w[len - 1 - i];
    w[len - 1 - i] = c;
  }
}

static void
tpl_fatal (const char *fmt, ...) {
  va_list ap;
  char exit_msg[100];

  
# 2349 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 2349 "project/goaccess/src/tpl.c"
 ap
# 2349 "project/goaccess/src/tpl.c" 3 4
 ,
# 2349 "project/goaccess/src/tpl.c"
 fmt
# 2349 "project/goaccess/src/tpl.c" 3 4
 )
# 2349 "project/goaccess/src/tpl.c"
                   ;
  
# 2350 "project/goaccess/src/tpl.c" 3 4
 __builtin___vsnprintf_chk (
# 2350 "project/goaccess/src/tpl.c"
 exit_msg
# 2350 "project/goaccess/src/tpl.c" 3 4
 , 
# 2350 "project/goaccess/src/tpl.c"
 100
# 2350 "project/goaccess/src/tpl.c" 3 4
 , 0, __builtin_object_size (
# 2350 "project/goaccess/src/tpl.c"
 exit_msg
# 2350 "project/goaccess/src/tpl.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 2350 "project/goaccess/src/tpl.c"
 fmt
# 2350 "project/goaccess/src/tpl.c" 3 4
 , 
# 2350 "project/goaccess/src/tpl.c"
 ap
# 2350 "project/goaccess/src/tpl.c" 3 4
 )
# 2350 "project/goaccess/src/tpl.c"
                                   ;
  
# 2351 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 2351 "project/goaccess/src/tpl.c"
 ap
# 2351 "project/goaccess/src/tpl.c" 3 4
 )
# 2351 "project/goaccess/src/tpl.c"
            ;

  tpl_hook.oops ("%s", exit_msg);
  exit (-1);
}

 int
tpl_gather (int mode, ...) {
  va_list ap;
  int fd, rc = 0;
  size_t *szp, sz;
  void **img, *addr, *data;
  tpl_gather_t **gs;
  tpl_gather_cb *cb;

  
# 2366 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_start(
# 2366 "project/goaccess/src/tpl.c"
 ap
# 2366 "project/goaccess/src/tpl.c" 3 4
 ,
# 2366 "project/goaccess/src/tpl.c"
 mode
# 2366 "project/goaccess/src/tpl.c" 3 4
 )
# 2366 "project/goaccess/src/tpl.c"
                    ;
  switch (mode) {
  case 1:
    fd = 
# 2369 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 2369 "project/goaccess/src/tpl.c"
        ap
# 2369 "project/goaccess/src/tpl.c" 3 4
        ,
# 2369 "project/goaccess/src/tpl.c"
        int
# 2369 "project/goaccess/src/tpl.c" 3 4
        )
# 2369 "project/goaccess/src/tpl.c"
                        ;
    img = 
# 2370 "project/goaccess/src/tpl.c" 3 4
         __builtin_va_arg(
# 2370 "project/goaccess/src/tpl.c"
         ap
# 2370 "project/goaccess/src/tpl.c" 3 4
         ,
# 2370 "project/goaccess/src/tpl.c"
         void *
# 2370 "project/goaccess/src/tpl.c" 3 4
         )
# 2370 "project/goaccess/src/tpl.c"
                            ;
    szp = 
# 2371 "project/goaccess/src/tpl.c" 3 4
         __builtin_va_arg(
# 2371 "project/goaccess/src/tpl.c"
         ap
# 2371 "project/goaccess/src/tpl.c" 3 4
         ,
# 2371 "project/goaccess/src/tpl.c"
         size_t *
# 2371 "project/goaccess/src/tpl.c" 3 4
         )
# 2371 "project/goaccess/src/tpl.c"
                              ;
    rc = tpl_gather_blocking (fd, img, szp);
    break;
  case 2:
    fd = 
# 2375 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 2375 "project/goaccess/src/tpl.c"
        ap
# 2375 "project/goaccess/src/tpl.c" 3 4
        ,
# 2375 "project/goaccess/src/tpl.c"
        int
# 2375 "project/goaccess/src/tpl.c" 3 4
        )
# 2375 "project/goaccess/src/tpl.c"
                        ;
    gs = (tpl_gather_t **) 
# 2376 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 2376 "project/goaccess/src/tpl.c"
                          ap
# 2376 "project/goaccess/src/tpl.c" 3 4
                          ,
# 2376 "project/goaccess/src/tpl.c"
                          void *
# 2376 "project/goaccess/src/tpl.c" 3 4
                          )
# 2376 "project/goaccess/src/tpl.c"
                                             ;
    cb = (tpl_gather_cb *) 
# 2377 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 2377 "project/goaccess/src/tpl.c"
                          ap
# 2377 "project/goaccess/src/tpl.c" 3 4
                          ,
# 2377 "project/goaccess/src/tpl.c"
                          tpl_gather_cb *
# 2377 "project/goaccess/src/tpl.c" 3 4
                          )
# 2377 "project/goaccess/src/tpl.c"
                                                      ;
    data = 
# 2378 "project/goaccess/src/tpl.c" 3 4
          __builtin_va_arg(
# 2378 "project/goaccess/src/tpl.c"
          ap
# 2378 "project/goaccess/src/tpl.c" 3 4
          ,
# 2378 "project/goaccess/src/tpl.c"
          void *
# 2378 "project/goaccess/src/tpl.c" 3 4
          )
# 2378 "project/goaccess/src/tpl.c"
                             ;
    rc = tpl_gather_nonblocking (fd, gs, cb, data);
    break;
  case 3:
    addr = 
# 2382 "project/goaccess/src/tpl.c" 3 4
          __builtin_va_arg(
# 2382 "project/goaccess/src/tpl.c"
          ap
# 2382 "project/goaccess/src/tpl.c" 3 4
          ,
# 2382 "project/goaccess/src/tpl.c"
          void *
# 2382 "project/goaccess/src/tpl.c" 3 4
          )
# 2382 "project/goaccess/src/tpl.c"
                             ;
    sz = 
# 2383 "project/goaccess/src/tpl.c" 3 4
        __builtin_va_arg(
# 2383 "project/goaccess/src/tpl.c"
        ap
# 2383 "project/goaccess/src/tpl.c" 3 4
        ,
# 2383 "project/goaccess/src/tpl.c"
        size_t
# 2383 "project/goaccess/src/tpl.c" 3 4
        )
# 2383 "project/goaccess/src/tpl.c"
                           ;
    gs = (tpl_gather_t **) 
# 2384 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 2384 "project/goaccess/src/tpl.c"
                          ap
# 2384 "project/goaccess/src/tpl.c" 3 4
                          ,
# 2384 "project/goaccess/src/tpl.c"
                          void *
# 2384 "project/goaccess/src/tpl.c" 3 4
                          )
# 2384 "project/goaccess/src/tpl.c"
                                             ;
    cb = (tpl_gather_cb *) 
# 2385 "project/goaccess/src/tpl.c" 3 4
                          __builtin_va_arg(
# 2385 "project/goaccess/src/tpl.c"
                          ap
# 2385 "project/goaccess/src/tpl.c" 3 4
                          ,
# 2385 "project/goaccess/src/tpl.c"
                          tpl_gather_cb *
# 2385 "project/goaccess/src/tpl.c" 3 4
                          )
# 2385 "project/goaccess/src/tpl.c"
                                                      ;
    data = 
# 2386 "project/goaccess/src/tpl.c" 3 4
          __builtin_va_arg(
# 2386 "project/goaccess/src/tpl.c"
          ap
# 2386 "project/goaccess/src/tpl.c" 3 4
          ,
# 2386 "project/goaccess/src/tpl.c"
          void *
# 2386 "project/goaccess/src/tpl.c" 3 4
          )
# 2386 "project/goaccess/src/tpl.c"
                             ;
    rc = tpl_gather_mem (addr, sz, gs, cb, data);
    break;
  default:
    tpl_hook.fatal ("unsupported tpl_gather mode %d\n", mode);
    break;
  }
  
# 2393 "project/goaccess/src/tpl.c" 3 4
 __builtin_va_end(
# 2393 "project/goaccess/src/tpl.c"
 ap
# 2393 "project/goaccess/src/tpl.c" 3 4
 )
# 2393 "project/goaccess/src/tpl.c"
            ;
  return rc;
}






static int
tpl_gather_blocking (int fd, void **img, size_t *sz) {
  char preamble[8];
  int rc;
  uint32_t i = 0, tpllen;

  do {
    rc = read (fd, &preamble[i], 8 - i);
    i += (rc > 0) ? rc : 0;
  } while ((rc == -1 && (
# 2411 "project/goaccess/src/tpl.c" 3 4
                        (*__error()) 
# 2411 "project/goaccess/src/tpl.c"
                              == 
# 2411 "project/goaccess/src/tpl.c" 3 4
                                 4 
# 2411 "project/goaccess/src/tpl.c"
                                       || 
# 2411 "project/goaccess/src/tpl.c" 3 4
                                          (*__error()) 
# 2411 "project/goaccess/src/tpl.c"
                                                == 
# 2411 "project/goaccess/src/tpl.c" 3 4
                                                   35
# 2411 "project/goaccess/src/tpl.c"
                                                         )) || (rc > 0 && i < 8));

  if (rc < 0) {
    tpl_hook.oops ("tpl_gather_fd_blocking failed: %s\n", strerror (
# 2414 "project/goaccess/src/tpl.c" 3 4
                                                                   (*__error())
# 2414 "project/goaccess/src/tpl.c"
                                                                        ));
    return -1;
  } else if (rc == 0) {

    return 0;
  } else if (i != 8) {
    tpl_hook.oops ("internal error\n");
    return -1;
  }

  if (preamble[0] == 't' && preamble[1] == 'p' && preamble[2] == 'l') {
    
# 2425 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 2425 "project/goaccess/src/tpl.c"
   &tpllen
# 2425 "project/goaccess/src/tpl.c" 3 4
   , 
# 2425 "project/goaccess/src/tpl.c"
   &preamble[4], 4
# 2425 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 2425 "project/goaccess/src/tpl.c"
   &tpllen
# 2425 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 2425 "project/goaccess/src/tpl.c"
                                    ;
    if (tpl_needs_endian_swap (preamble))
      tpl_byteswap (&tpllen, 4);
  } else {
    tpl_hook.oops ("tpl_gather_fd_blocking: non-tpl input\n");
    return -1;
  }




  if (tpl_hook.gather_max > 0 && tpllen > tpl_hook.gather_max) {
    tpl_hook.oops ("tpl exceeds max length %zu\n", tpl_hook.gather_max);
    return -2;
  }
  *sz = tpllen;
  if ((*img = tpl_hook.malloc (tpllen)) == 
# 2441 "project/goaccess/src/tpl.c" 3 4
                                          ((void *)0)
# 2441 "project/goaccess/src/tpl.c"
                                              ) {
    tpl_hook.fatal("out of memory\n");
  }

  
# 2445 "project/goaccess/src/tpl.c" 3 4
 __builtin___memcpy_chk (
# 2445 "project/goaccess/src/tpl.c"
 *img
# 2445 "project/goaccess/src/tpl.c" 3 4
 , 
# 2445 "project/goaccess/src/tpl.c"
 preamble, 8
# 2445 "project/goaccess/src/tpl.c" 3 4
 , __builtin_object_size (
# 2445 "project/goaccess/src/tpl.c"
 *img
# 2445 "project/goaccess/src/tpl.c" 3 4
 , 0))
# 2445 "project/goaccess/src/tpl.c"
                           ;
  i = 8;
  do {
    rc = read (fd, &((*(char **) img)[i]), tpllen - i);
    i += (rc > 0) ? rc : 0;
  } while ((rc == -1 && (
# 2450 "project/goaccess/src/tpl.c" 3 4
                        (*__error()) 
# 2450 "project/goaccess/src/tpl.c"
                              == 
# 2450 "project/goaccess/src/tpl.c" 3 4
                                 4 
# 2450 "project/goaccess/src/tpl.c"
                                       || 
# 2450 "project/goaccess/src/tpl.c" 3 4
                                          (*__error()) 
# 2450 "project/goaccess/src/tpl.c"
                                                == 
# 2450 "project/goaccess/src/tpl.c" 3 4
                                                   35
# 2450 "project/goaccess/src/tpl.c"
                                                         )) || (rc > 0 && i < tpllen));

  if (rc < 0) {
    tpl_hook.oops ("tpl_gather_fd_blocking failed: %s\n", strerror (
# 2453 "project/goaccess/src/tpl.c" 3 4
                                                                   (*__error())
# 2453 "project/goaccess/src/tpl.c"
                                                                        ));
    tpl_hook.free (*img);
    return -1;
  } else if (rc == 0) {

    tpl_hook.free (*img);
    return 0;
  } else if (i != tpllen) {
    tpl_hook.oops ("internal error\n");
    tpl_hook.free (*img);
    return -1;
  }

  return 1;
}



static int
tpl_gather_nonblocking (int fd, tpl_gather_t ** gs, tpl_gather_cb * cb, void *data) {
  char buf[8192], *img, *tpl;
  int rc, keep_looping, cbrc = 0;
  size_t catlen;
  uint32_t tpllen;

  while (1) {
    rc = read (fd, buf, 8192);
    if (rc == -1) {
      if (
# 2481 "project/goaccess/src/tpl.c" 3 4
         (*__error()) 
# 2481 "project/goaccess/src/tpl.c"
               == 
# 2481 "project/goaccess/src/tpl.c" 3 4
                  4
# 2481 "project/goaccess/src/tpl.c"
                       )
        continue;
      if (
# 2483 "project/goaccess/src/tpl.c" 3 4
         (*__error()) 
# 2483 "project/goaccess/src/tpl.c"
               == 
# 2483 "project/goaccess/src/tpl.c" 3 4
                  35
# 2483 "project/goaccess/src/tpl.c"
                        )
        return 1;
      else {
        tpl_hook.oops ("tpl_gather failed: %s\n", strerror (
# 2486 "project/goaccess/src/tpl.c" 3 4
                                                           (*__error())
# 2486 "project/goaccess/src/tpl.c"
                                                                ));
        if (*gs) {
          tpl_hook.free ((*gs)->img);
          tpl_hook.free (*gs);
          *gs = 
# 2490 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 2490 "project/goaccess/src/tpl.c"
                   ;
        }
        return -1;
      }
    } else if (rc == 0) {
      if (*gs) {
        tpl_hook.oops ("tpl_gather: partial tpl image precedes EOF\n");
        tpl_hook.free ((*gs)->img);
        tpl_hook.free (*gs);
        *gs = 
# 2499 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 2499 "project/goaccess/src/tpl.c"
                 ;
      }
      return 0;
    } else {

      if (*gs) {
        catlen = (*gs)->len + rc;
        if (tpl_hook.gather_max > 0 && catlen > tpl_hook.gather_max) {
          tpl_hook.free ((*gs)->img);
          tpl_hook.free ((*gs));
          *gs = 
# 2509 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 2509 "project/goaccess/src/tpl.c"
                   ;
          tpl_hook.oops ("tpl exceeds max length %zu\n", tpl_hook.gather_max);
          return -2;
        }
        if ((img = tpl_hook.realloc ((*gs)->img, catlen)) == 
# 2513 "project/goaccess/src/tpl.c" 3 4
                                                            ((void *)0)
# 2513 "project/goaccess/src/tpl.c"
                                                                ) {
          tpl_hook.fatal("out of memory\n");
        }
        
# 2516 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2516 "project/goaccess/src/tpl.c"
       img + (*gs)->len
# 2516 "project/goaccess/src/tpl.c" 3 4
       , 
# 2516 "project/goaccess/src/tpl.c"
       buf, rc
# 2516 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2516 "project/goaccess/src/tpl.c"
       img + (*gs)->len
# 2516 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2516 "project/goaccess/src/tpl.c"
                                         ;
        tpl_hook.free (*gs);
        *gs = 
# 2518 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 2518 "project/goaccess/src/tpl.c"
                 ;
      } else {
        img = buf;
        catlen = rc;
      }

      tpl = img;
      keep_looping = (tpl + 8 < img + catlen) ? 1 : 0;
      while (keep_looping) {
        if (strncmp ("tpl", tpl, 3) != 0) {
          tpl_hook.oops ("tpl prefix invalid\n");
          if (img != buf)
            tpl_hook.free (img);
          tpl_hook.free (*gs);
          *gs = 
# 2532 "project/goaccess/src/tpl.c" 3 4
               ((void *)0)
# 2532 "project/goaccess/src/tpl.c"
                   ;
          return -3;
        }
        
# 2535 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2535 "project/goaccess/src/tpl.c"
       &tpllen
# 2535 "project/goaccess/src/tpl.c" 3 4
       , 
# 2535 "project/goaccess/src/tpl.c"
       &tpl[4], 4
# 2535 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2535 "project/goaccess/src/tpl.c"
       &tpllen
# 2535 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2535 "project/goaccess/src/tpl.c"
                                   ;
        if (tpl_needs_endian_swap (tpl))
          tpl_byteswap (&tpllen, 4);
        if (tpl + tpllen <= img + catlen) {
          cbrc = (cb) (tpl, tpllen, data);
          tpl += tpllen;
          if (cbrc < 0)
            keep_looping = 0;
          else
            keep_looping = (tpl + 8 < img + catlen) ? 1 : 0;
        } else
          keep_looping = 0;
      }

      if (cbrc < 0) {
        tpl_hook.oops ("tpl_fd_gather aborted by app callback\n");
        if (img != buf)
          tpl_hook.free (img);
        if (*gs)
          tpl_hook.free (*gs);
        *gs = 
# 2555 "project/goaccess/src/tpl.c" 3 4
             ((void *)0)
# 2555 "project/goaccess/src/tpl.c"
                 ;
        return -4;
      }

      if (tpl == img && img != buf) {

        if ((*gs = tpl_hook.malloc (sizeof (tpl_gather_t))) == 
# 2561 "project/goaccess/src/tpl.c" 3 4
                                                              ((void *)0)
# 2561 "project/goaccess/src/tpl.c"
                                                                  ) {
          tpl_hook.fatal("out of memory\n");
        }
        (*gs)->img = tpl;
        (*gs)->len = catlen;
      } else if (tpl < img + catlen) {

        if ((*gs = tpl_hook.malloc (sizeof (tpl_gather_t))) == 
# 2568 "project/goaccess/src/tpl.c" 3 4
                                                              ((void *)0)
# 2568 "project/goaccess/src/tpl.c"
                                                                  ) {
          tpl_hook.fatal("out of memory\n");
        }
        if (((*gs)->img = tpl_hook.malloc (img + catlen - tpl)) == 
# 2571 "project/goaccess/src/tpl.c" 3 4
                                                                  ((void *)0)
# 2571 "project/goaccess/src/tpl.c"
                                                                      ) {
          tpl_hook.fatal("out of memory\n");
        }
        (*gs)->len = img + catlen - tpl;
        
# 2575 "project/goaccess/src/tpl.c" 3 4
       __builtin___memcpy_chk (
# 2575 "project/goaccess/src/tpl.c"
       (*gs)->img
# 2575 "project/goaccess/src/tpl.c" 3 4
       , 
# 2575 "project/goaccess/src/tpl.c"
       tpl, img + catlen - tpl
# 2575 "project/goaccess/src/tpl.c" 3 4
       , __builtin_object_size (
# 2575 "project/goaccess/src/tpl.c"
       (*gs)->img
# 2575 "project/goaccess/src/tpl.c" 3 4
       , 0))
# 2575 "project/goaccess/src/tpl.c"
                                                   ;

        if (img != buf)
          tpl_hook.free (img);
      } else {

        if (img != buf)
          tpl_hook.free (img);
      }
    }
  }
}


static int
tpl_gather_mem (char *buf, size_t len, tpl_gather_t ** gs, tpl_gather_cb * cb, void *data) {
  char *img, *tpl;
  int keep_looping, cbrc = 0;
  size_t catlen;
  uint32_t tpllen;


  if (*gs) {
    catlen = (*gs)->len + len;
    if (tpl_hook.gather_max > 0 && catlen > tpl_hook.gather_max) {
      tpl_hook.free ((*gs)->img);
      tpl_hook.free ((*gs));
      *gs = 
# 2602 "project/goaccess/src/tpl.c" 3 4
           ((void *)0)
# 2602 "project/goaccess/src/tpl.c"
               ;
      tpl_hook.oops ("tpl exceeds max length %zu\n", tpl_hook.gather_max);
      return -2;
    }
    if ((img = tpl_hook.realloc ((*gs)->img, catlen)) == 
# 2606 "project/goaccess/src/tpl.c" 3 4
                                                        ((void *)0)
# 2606 "project/goaccess/src/tpl.c"
                                                            ) {
      tpl_hook.fatal("out of memory\n");
    }
    
# 2609 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 2609 "project/goaccess/src/tpl.c"
   img + (*gs)->len
# 2609 "project/goaccess/src/tpl.c" 3 4
   , 
# 2609 "project/goaccess/src/tpl.c"
   buf, len
# 2609 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 2609 "project/goaccess/src/tpl.c"
   img + (*gs)->len
# 2609 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 2609 "project/goaccess/src/tpl.c"
                                      ;
    tpl_hook.free (*gs);
    *gs = 
# 2611 "project/goaccess/src/tpl.c" 3 4
         ((void *)0)
# 2611 "project/goaccess/src/tpl.c"
             ;
  } else {
    img = buf;
    catlen = len;
  }

  tpl = img;
  keep_looping = (tpl + 8 < img + catlen) ? 1 : 0;
  while (keep_looping) {
    if (strncmp ("tpl", tpl, 3) != 0) {
      tpl_hook.oops ("tpl prefix invalid\n");
      if (img != buf)
        tpl_hook.free (img);
      tpl_hook.free (*gs);
      *gs = 
# 2625 "project/goaccess/src/tpl.c" 3 4
           ((void *)0)
# 2625 "project/goaccess/src/tpl.c"
               ;
      return -3;
    }
    
# 2628 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 2628 "project/goaccess/src/tpl.c"
   &tpllen
# 2628 "project/goaccess/src/tpl.c" 3 4
   , 
# 2628 "project/goaccess/src/tpl.c"
   &tpl[4], 4
# 2628 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 2628 "project/goaccess/src/tpl.c"
   &tpllen
# 2628 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 2628 "project/goaccess/src/tpl.c"
                               ;
    if (tpl_needs_endian_swap (tpl))
      tpl_byteswap (&tpllen, 4);
    if (tpl + tpllen <= img + catlen) {
      cbrc = (cb) (tpl, tpllen, data);
      tpl += tpllen;
      if (cbrc < 0)
        keep_looping = 0;
      else
        keep_looping = (tpl + 8 < img + catlen) ? 1 : 0;
    } else
      keep_looping = 0;
  }

  if (cbrc < 0) {
    tpl_hook.oops ("tpl_mem_gather aborted by app callback\n");
    if (img != buf)
      tpl_hook.free (img);
    if (*gs)
      tpl_hook.free (*gs);
    *gs = 
# 2648 "project/goaccess/src/tpl.c" 3 4
         ((void *)0)
# 2648 "project/goaccess/src/tpl.c"
             ;
    return -4;
  }

  if (tpl == img && img != buf) {

    if ((*gs = tpl_hook.malloc (sizeof (tpl_gather_t))) == 
# 2654 "project/goaccess/src/tpl.c" 3 4
                                                          ((void *)0)
# 2654 "project/goaccess/src/tpl.c"
                                                              ) {
      tpl_hook.fatal("out of memory\n");
    }
    (*gs)->img = tpl;
    (*gs)->len = catlen;
  } else if (tpl < img + catlen) {

    if ((*gs = tpl_hook.malloc (sizeof (tpl_gather_t))) == 
# 2661 "project/goaccess/src/tpl.c" 3 4
                                                          ((void *)0)
# 2661 "project/goaccess/src/tpl.c"
                                                              ) {
      tpl_hook.fatal("out of memory\n");
    }
    if (((*gs)->img = tpl_hook.malloc (img + catlen - tpl)) == 
# 2664 "project/goaccess/src/tpl.c" 3 4
                                                              ((void *)0)
# 2664 "project/goaccess/src/tpl.c"
                                                                  ) {
      tpl_hook.fatal("out of memory\n");
    }
    (*gs)->len = img + catlen - tpl;
    
# 2668 "project/goaccess/src/tpl.c" 3 4
   __builtin___memcpy_chk (
# 2668 "project/goaccess/src/tpl.c"
   (*gs)->img
# 2668 "project/goaccess/src/tpl.c" 3 4
   , 
# 2668 "project/goaccess/src/tpl.c"
   tpl, img + catlen - tpl
# 2668 "project/goaccess/src/tpl.c" 3 4
   , __builtin_object_size (
# 2668 "project/goaccess/src/tpl.c"
   (*gs)->img
# 2668 "project/goaccess/src/tpl.c" 3 4
   , 0))
# 2668 "project/goaccess/src/tpl.c"
                                               ;

    if (img != buf)
      tpl_hook.free (img);
  } else {

    if (img != buf)
      tpl_hook.free (img);
  }
  return 1;
}
