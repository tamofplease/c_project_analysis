# 0 "project/ish/tests/e2e/qemu/qemu-test.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/tests/e2e/qemu/qemu-test.c"
# 20 "project/ish/tests/e2e/qemu/qemu-test.c"
#pragma GCC diagnostic ignored "-Wsign-compare"

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








# 23 "project/ish/tests/e2e/qemu/qemu-test.c" 2
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
# 24 "project/ish/tests/e2e/qemu/qemu-test.c" 2
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
# 25 "project/ish/tests/e2e/qemu/qemu-test.c" 2
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







# 26 "project/ish/tests/e2e/qemu/qemu-test.c" 2
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





# 27 "project/ish/tests/e2e/qemu/qemu-test.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];



int raise(int);




void (* bsd_signal(int, void (* )(int)))(int);
int kill(pid_t, int) __asm("_" "kill" );
int killpg(pid_t, int) __asm("_" "killpg" );
int pthread_kill(pthread_t, int);
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int sigaction(int, const struct sigaction * restrict,
     struct sigaction * restrict);
int sigaddset(sigset_t *, int);
int sigaltstack(const stack_t * restrict, stack_t * restrict) __asm("_" "sigaltstack" ) ;
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(const sigset_t *, int);
int sigpause(int) __asm("_" "sigpause" );
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int sigrelse(int);
void (* sigset(int, void (* )(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" );
int sigwait(const sigset_t * restrict, int * restrict) __asm("_" "sigwait" );

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);




extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
# 28 "project/ish/tests/e2e/qemu/qemu-test.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 3 4
typedef int jmp_buf[((9 * 2) + 3 + 16)];
typedef int sigjmp_buf[((9 * 2) + 3 + 16) + 1];
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 3 4

extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int) __attribute__((__noreturn__));


int _setjmp(jmp_buf);
void _longjmp(jmp_buf, int) __attribute__((__noreturn__));
int sigsetjmp(sigjmp_buf, int);
void siglongjmp(sigjmp_buf, int) __attribute__((__noreturn__));



void longjmperror(void);


# 29 "project/ish/tests/e2e/qemu/qemu-test.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 30 "project/ish/tests/e2e/qemu/qemu-test.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucontext.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucontext.h" 2 3 4
# 31 "project/ish/tests/e2e/qemu/qemu-test.c" 2
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




# 32 "project/ish/tests/e2e/qemu/qemu-test.c" 2
# 80 "project/ish/tests/e2e/qemu/qemu-test.c"

# 80 "project/ish/tests/e2e/qemu/qemu-test.c"
static inline long i2l(long v)
{
    return v | ((v ^ 0xabcd) << 32);
}
# 92 "project/ish/tests/e2e/qemu/qemu-test.c"
# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_addq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "add" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "add" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_addl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "add" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "add" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_addw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "add" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "add" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_addb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "add" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "add" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_add(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_addq(s0, s1, 0);

    exec_addl(s0, s1, 0);
    exec_addw(s0, s1, 0);
    exec_addb(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void test_add(void)
{
    exec_add(0x12345678, 0x812FADA);
    exec_add(0x12341, 0x12341);
    exec_add(0x12341, -0x12341);
    exec_add(0xffffffff, 0);
    exec_add(0xffffffff, -1);
    exec_add(0xffffffff, 1);
    exec_add(0xffffffff, 2);
    exec_add(0x7fffffff, 0);
    exec_add(0x7fffffff, 1);
    exec_add(0x7fffffff, -1);
    exec_add(0x80000000, -1);
    exec_add(0x80000000, 1);
    exec_add(0x80000000, -2);
    exec_add(0x12347fff, 0);
    exec_add(0x12347fff, 1);
    exec_add(0x12347fff, -1);
    exec_add(0x12348000, -1);
    exec_add(0x12348000, 1);
    exec_add(0x12348000, -2);
    exec_add(0x12347f7f, 0);
    exec_add(0x12347f7f, 1);
    exec_add(0x12347f7f, -1);
    exec_add(0x12348080, -1);
    exec_add(0x12348080, 1);
    exec_add(0x12348080, -2);
}

void *_test_add __attribute__ ((unused,__section__ ("initcall"))) = test_add;
# 93 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_subq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sub" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sub" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_subl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sub" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sub" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_subw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sub" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sub" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_subb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sub" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sub" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_sub(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_subq(s0, s1, 0);

    exec_subl(s0, s1, 0);
    exec_subw(s0, s1, 0);
    exec_subb(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void test_sub(void)
{
    exec_sub(0x12345678, 0x812FADA);
    exec_sub(0x12341, 0x12341);
    exec_sub(0x12341, -0x12341);
    exec_sub(0xffffffff, 0);
    exec_sub(0xffffffff, -1);
    exec_sub(0xffffffff, 1);
    exec_sub(0xffffffff, 2);
    exec_sub(0x7fffffff, 0);
    exec_sub(0x7fffffff, 1);
    exec_sub(0x7fffffff, -1);
    exec_sub(0x80000000, -1);
    exec_sub(0x80000000, 1);
    exec_sub(0x80000000, -2);
    exec_sub(0x12347fff, 0);
    exec_sub(0x12347fff, 1);
    exec_sub(0x12347fff, -1);
    exec_sub(0x12348000, -1);
    exec_sub(0x12348000, 1);
    exec_sub(0x12348000, -2);
    exec_sub(0x12347f7f, 0);
    exec_sub(0x12347f7f, 1);
    exec_sub(0x12347f7f, -1);
    exec_sub(0x12348080, -1);
    exec_sub(0x12348080, 1);
    exec_sub(0x12348080, -2);
}

void *_test_sub __attribute__ ((unused,__section__ ("initcall"))) = test_sub;
# 96 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_xorq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "xor" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "xor" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_xorl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "xor" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "xor" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_xorw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "xor" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "xor" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_xorb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "xor" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "xor" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_xor(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_xorq(s0, s1, 0);

    exec_xorl(s0, s1, 0);
    exec_xorw(s0, s1, 0);
    exec_xorb(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void test_xor(void)
{
    exec_xor(0x12345678, 0x812FADA);
    exec_xor(0x12341, 0x12341);
    exec_xor(0x12341, -0x12341);
    exec_xor(0xffffffff, 0);
    exec_xor(0xffffffff, -1);
    exec_xor(0xffffffff, 1);
    exec_xor(0xffffffff, 2);
    exec_xor(0x7fffffff, 0);
    exec_xor(0x7fffffff, 1);
    exec_xor(0x7fffffff, -1);
    exec_xor(0x80000000, -1);
    exec_xor(0x80000000, 1);
    exec_xor(0x80000000, -2);
    exec_xor(0x12347fff, 0);
    exec_xor(0x12347fff, 1);
    exec_xor(0x12347fff, -1);
    exec_xor(0x12348000, -1);
    exec_xor(0x12348000, 1);
    exec_xor(0x12348000, -2);
    exec_xor(0x12347f7f, 0);
    exec_xor(0x12347f7f, 1);
    exec_xor(0x12347f7f, -1);
    exec_xor(0x12348080, -1);
    exec_xor(0x12348080, 1);
    exec_xor(0x12348080, -2);
}

void *_test_xor __attribute__ ((unused,__section__ ("initcall"))) = test_xor;
# 99 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_andq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "and" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "and" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_andl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "and" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "and" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_andw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "and" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "and" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_andb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "and" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "and" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_and(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_andq(s0, s1, 0);

    exec_andl(s0, s1, 0);
    exec_andw(s0, s1, 0);
    exec_andb(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void test_and(void)
{
    exec_and(0x12345678, 0x812FADA);
    exec_and(0x12341, 0x12341);
    exec_and(0x12341, -0x12341);
    exec_and(0xffffffff, 0);
    exec_and(0xffffffff, -1);
    exec_and(0xffffffff, 1);
    exec_and(0xffffffff, 2);
    exec_and(0x7fffffff, 0);
    exec_and(0x7fffffff, 1);
    exec_and(0x7fffffff, -1);
    exec_and(0x80000000, -1);
    exec_and(0x80000000, 1);
    exec_and(0x80000000, -2);
    exec_and(0x12347fff, 0);
    exec_and(0x12347fff, 1);
    exec_and(0x12347fff, -1);
    exec_and(0x12348000, -1);
    exec_and(0x12348000, 1);
    exec_and(0x12348000, -2);
    exec_and(0x12347f7f, 0);
    exec_and(0x12347f7f, 1);
    exec_and(0x12347f7f, -1);
    exec_and(0x12348080, -1);
    exec_and(0x12348080, 1);
    exec_and(0x12348080, -2);
}

void *_test_and __attribute__ ((unused,__section__ ("initcall"))) = test_and;
# 102 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_orq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "or" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "or" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_orl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "or" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "or" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_orw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "or" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "or" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_orb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "or" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "or" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_or(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_orq(s0, s1, 0);

    exec_orl(s0, s1, 0);
    exec_orw(s0, s1, 0);
    exec_orb(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void test_or(void)
{
    exec_or(0x12345678, 0x812FADA);
    exec_or(0x12341, 0x12341);
    exec_or(0x12341, -0x12341);
    exec_or(0xffffffff, 0);
    exec_or(0xffffffff, -1);
    exec_or(0xffffffff, 1);
    exec_or(0xffffffff, 2);
    exec_or(0x7fffffff, 0);
    exec_or(0x7fffffff, 1);
    exec_or(0x7fffffff, -1);
    exec_or(0x80000000, -1);
    exec_or(0x80000000, 1);
    exec_or(0x80000000, -2);
    exec_or(0x12347fff, 0);
    exec_or(0x12347fff, 1);
    exec_or(0x12347fff, -1);
    exec_or(0x12348000, -1);
    exec_or(0x12348000, 1);
    exec_or(0x12348000, -2);
    exec_or(0x12347f7f, 0);
    exec_or(0x12347f7f, 1);
    exec_or(0x12347f7f, -1);
    exec_or(0x12348080, -1);
    exec_or(0x12348080, 1);
    exec_or(0x12348080, -2);
}

void *_test_or __attribute__ ((unused,__section__ ("initcall"))) = test_or;
# 105 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_cmpq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "cmp" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "cmp" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_cmpl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "cmp" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "cmp" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_cmpw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "cmp" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "cmp" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_cmpb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "cmp" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "cmp" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_cmp(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_cmpq(s0, s1, 0);

    exec_cmpl(s0, s1, 0);
    exec_cmpw(s0, s1, 0);
    exec_cmpb(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void test_cmp(void)
{
    exec_cmp(0x12345678, 0x812FADA);
    exec_cmp(0x12341, 0x12341);
    exec_cmp(0x12341, -0x12341);
    exec_cmp(0xffffffff, 0);
    exec_cmp(0xffffffff, -1);
    exec_cmp(0xffffffff, 1);
    exec_cmp(0xffffffff, 2);
    exec_cmp(0x7fffffff, 0);
    exec_cmp(0x7fffffff, 1);
    exec_cmp(0x7fffffff, -1);
    exec_cmp(0x80000000, -1);
    exec_cmp(0x80000000, 1);
    exec_cmp(0x80000000, -2);
    exec_cmp(0x12347fff, 0);
    exec_cmp(0x12347fff, 1);
    exec_cmp(0x12347fff, -1);
    exec_cmp(0x12348000, -1);
    exec_cmp(0x12348000, 1);
    exec_cmp(0x12348000, -2);
    exec_cmp(0x12347f7f, 0);
    exec_cmp(0x12347f7f, 1);
    exec_cmp(0x12347f7f, -1);
    exec_cmp(0x12348080, -1);
    exec_cmp(0x12348080, 1);
    exec_cmp(0x12348080, -2);
}

void *_test_cmp __attribute__ ((unused,__section__ ("initcall"))) = test_cmp;
# 108 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_adcq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "adc" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "adc" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_adcl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "adc" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "adc" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_adcw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "adc" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "adc" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_adcb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "adc" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "adc" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_adc(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_adcq(s0, s1, 0);

    exec_adcl(s0, s1, 0);
    exec_adcw(s0, s1, 0);
    exec_adcb(s0, s1, 0);


    exec_adcq(s0, s1, 0x0001);

    exec_adcl(s0, s1, 0x0001);
    exec_adcw(s0, s1, 0x0001);
    exec_adcb(s0, s1, 0x0001);

}

void test_adc(void)
{
    exec_adc(0x12345678, 0x812FADA);
    exec_adc(0x12341, 0x12341);
    exec_adc(0x12341, -0x12341);
    exec_adc(0xffffffff, 0);
    exec_adc(0xffffffff, -1);
    exec_adc(0xffffffff, 1);
    exec_adc(0xffffffff, 2);
    exec_adc(0x7fffffff, 0);
    exec_adc(0x7fffffff, 1);
    exec_adc(0x7fffffff, -1);
    exec_adc(0x80000000, -1);
    exec_adc(0x80000000, 1);
    exec_adc(0x80000000, -2);
    exec_adc(0x12347fff, 0);
    exec_adc(0x12347fff, 1);
    exec_adc(0x12347fff, -1);
    exec_adc(0x12348000, -1);
    exec_adc(0x12348000, 1);
    exec_adc(0x12348000, -2);
    exec_adc(0x12347f7f, 0);
    exec_adc(0x12347f7f, 1);
    exec_adc(0x12347f7f, -1);
    exec_adc(0x12348080, -1);
    exec_adc(0x12348080, 1);
    exec_adc(0x12348080, -2);
}

void *_test_adc __attribute__ ((unused,__section__ ("initcall"))) = test_adc;
# 112 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_sbbq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sbb" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sbb" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_sbbl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sbb" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sbb" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_sbbw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sbb" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sbb" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_sbbb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sbb" "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "sbb" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_sbb(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_sbbq(s0, s1, 0);

    exec_sbbl(s0, s1, 0);
    exec_sbbw(s0, s1, 0);
    exec_sbbb(s0, s1, 0);


    exec_sbbq(s0, s1, 0x0001);

    exec_sbbl(s0, s1, 0x0001);
    exec_sbbw(s0, s1, 0x0001);
    exec_sbbb(s0, s1, 0x0001);

}

void test_sbb(void)
{
    exec_sbb(0x12345678, 0x812FADA);
    exec_sbb(0x12341, 0x12341);
    exec_sbb(0x12341, -0x12341);
    exec_sbb(0xffffffff, 0);
    exec_sbb(0xffffffff, -1);
    exec_sbb(0xffffffff, 1);
    exec_sbb(0xffffffff, 2);
    exec_sbb(0x7fffffff, 0);
    exec_sbb(0x7fffffff, 1);
    exec_sbb(0x7fffffff, -1);
    exec_sbb(0x80000000, -1);
    exec_sbb(0x80000000, 1);
    exec_sbb(0x80000000, -2);
    exec_sbb(0x12347fff, 0);
    exec_sbb(0x12347fff, 1);
    exec_sbb(0x12347fff, -1);
    exec_sbb(0x12348000, -1);
    exec_sbb(0x12348000, 1);
    exec_sbb(0x12348000, -2);
    exec_sbb(0x12347f7f, 0);
    exec_sbb(0x12347f7f, 1);
    exec_sbb(0x12347f7f, -1);
    exec_sbb(0x12348080, -1);
    exec_sbb(0x12348080, 1);
    exec_sbb(0x12348080, -2);
}

void *_test_sbb __attribute__ ((unused,__section__ ("initcall"))) = test_sbb;
# 116 "project/ish/tests/e2e/qemu/qemu-test.c" 2




# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 32 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_incq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "inc" "q" " %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "inc" "q", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_incl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "inc" "l" " %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "inc" "l", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_incw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "inc" "w" " %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "inc" "w", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_incb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "inc" "b" " %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "inc" "b", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}
# 100 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_inc(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_incq(s0, s1, 0);

    exec_incl(s0, s1, 0);
    exec_incw(s0, s1, 0);
    exec_incb(s0, s1, 0);


    exec_incq(s0, s1, 0x0001);

    exec_incl(s0, s1, 0x0001);
    exec_incw(s0, s1, 0x0001);
    exec_incb(s0, s1, 0x0001);

}

void test_inc(void)
{
    exec_inc(0x12345678, 0x812FADA);
    exec_inc(0x12341, 0x12341);
    exec_inc(0x12341, -0x12341);
    exec_inc(0xffffffff, 0);
    exec_inc(0xffffffff, -1);
    exec_inc(0xffffffff, 1);
    exec_inc(0xffffffff, 2);
    exec_inc(0x7fffffff, 0);
    exec_inc(0x7fffffff, 1);
    exec_inc(0x7fffffff, -1);
    exec_inc(0x80000000, -1);
    exec_inc(0x80000000, 1);
    exec_inc(0x80000000, -2);
    exec_inc(0x12347fff, 0);
    exec_inc(0x12347fff, 1);
    exec_inc(0x12347fff, -1);
    exec_inc(0x12348000, -1);
    exec_inc(0x12348000, 1);
    exec_inc(0x12348000, -2);
    exec_inc(0x12347f7f, 0);
    exec_inc(0x12347f7f, 1);
    exec_inc(0x12347f7f, -1);
    exec_inc(0x12348080, -1);
    exec_inc(0x12348080, 1);
    exec_inc(0x12348080, -2);
}

void *_test_inc __attribute__ ((unused,__section__ ("initcall"))) = test_inc;
# 121 "project/ish/tests/e2e/qemu/qemu-test.c" 2




# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 32 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_decq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "dec" "q" " %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "dec" "q", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_decl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "dec" "l" " %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "dec" "l", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_decw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "dec" "w" " %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "dec" "w", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_decb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "dec" "b" " %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "dec" "b", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}
# 100 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_dec(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_decq(s0, s1, 0);

    exec_decl(s0, s1, 0);
    exec_decw(s0, s1, 0);
    exec_decb(s0, s1, 0);


    exec_decq(s0, s1, 0x0001);

    exec_decl(s0, s1, 0x0001);
    exec_decw(s0, s1, 0x0001);
    exec_decb(s0, s1, 0x0001);

}

void test_dec(void)
{
    exec_dec(0x12345678, 0x812FADA);
    exec_dec(0x12341, 0x12341);
    exec_dec(0x12341, -0x12341);
    exec_dec(0xffffffff, 0);
    exec_dec(0xffffffff, -1);
    exec_dec(0xffffffff, 1);
    exec_dec(0xffffffff, 2);
    exec_dec(0x7fffffff, 0);
    exec_dec(0x7fffffff, 1);
    exec_dec(0x7fffffff, -1);
    exec_dec(0x80000000, -1);
    exec_dec(0x80000000, 1);
    exec_dec(0x80000000, -2);
    exec_dec(0x12347fff, 0);
    exec_dec(0x12347fff, 1);
    exec_dec(0x12347fff, -1);
    exec_dec(0x12348000, -1);
    exec_dec(0x12348000, 1);
    exec_dec(0x12348000, -2);
    exec_dec(0x12347f7f, 0);
    exec_dec(0x12347f7f, 1);
    exec_dec(0x12347f7f, -1);
    exec_dec(0x12348080, -1);
    exec_dec(0x12348080, 1);
    exec_dec(0x12348080, -2);
}

void *_test_dec __attribute__ ((unused,__section__ ("initcall"))) = test_dec;
# 126 "project/ish/tests/e2e/qemu/qemu-test.c" 2




# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 32 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_negq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "neg" "q" " %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "neg" "q", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_negl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "neg" "l" " %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "neg" "l", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_negw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "neg" "w" " %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "neg" "w", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_negb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "neg" "b" " %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "neg" "b", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}
# 100 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_neg(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_negq(s0, s1, 0);

    exec_negl(s0, s1, 0);
    exec_negw(s0, s1, 0);
    exec_negb(s0, s1, 0);


    exec_negq(s0, s1, 0x0001);

    exec_negl(s0, s1, 0x0001);
    exec_negw(s0, s1, 0x0001);
    exec_negb(s0, s1, 0x0001);

}

void test_neg(void)
{
    exec_neg(0x12345678, 0x812FADA);
    exec_neg(0x12341, 0x12341);
    exec_neg(0x12341, -0x12341);
    exec_neg(0xffffffff, 0);
    exec_neg(0xffffffff, -1);
    exec_neg(0xffffffff, 1);
    exec_neg(0xffffffff, 2);
    exec_neg(0x7fffffff, 0);
    exec_neg(0x7fffffff, 1);
    exec_neg(0x7fffffff, -1);
    exec_neg(0x80000000, -1);
    exec_neg(0x80000000, 1);
    exec_neg(0x80000000, -2);
    exec_neg(0x12347fff, 0);
    exec_neg(0x12347fff, 1);
    exec_neg(0x12347fff, -1);
    exec_neg(0x12348000, -1);
    exec_neg(0x12348000, 1);
    exec_neg(0x12348000, -2);
    exec_neg(0x12347f7f, 0);
    exec_neg(0x12347f7f, 1);
    exec_neg(0x12347f7f, -1);
    exec_neg(0x12348080, -1);
    exec_neg(0x12348080, 1);
    exec_neg(0x12348080, -2);
}

void *_test_neg __attribute__ ((unused,__section__ ("initcall"))) = test_neg;
# 131 "project/ish/tests/e2e/qemu/qemu-test.c" 2




# 1 "project/ish/tests/e2e/qemu/qemu-test.h" 1
# 32 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_notq(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "not" "q" " %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "not" "q", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}


void exec_notl(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "not" "l" " %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "not" "l", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_notw(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "not" "w" " %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "not" "w", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}

void exec_notb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %3\n\t" "popf\n\t" "not" "b" " %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "0" (res), "1" (flags)); printf("%-10s A=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n", "not" "b", s0, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));;
}
# 100 "project/ish/tests/e2e/qemu/qemu-test.h"
void exec_not(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    exec_notq(s0, s1, 0);

    exec_notl(s0, s1, 0);
    exec_notw(s0, s1, 0);
    exec_notb(s0, s1, 0);


    exec_notq(s0, s1, 0x0001);

    exec_notl(s0, s1, 0x0001);
    exec_notw(s0, s1, 0x0001);
    exec_notb(s0, s1, 0x0001);

}

void test_not(void)
{
    exec_not(0x12345678, 0x812FADA);
    exec_not(0x12341, 0x12341);
    exec_not(0x12341, -0x12341);
    exec_not(0xffffffff, 0);
    exec_not(0xffffffff, -1);
    exec_not(0xffffffff, 1);
    exec_not(0xffffffff, 2);
    exec_not(0x7fffffff, 0);
    exec_not(0x7fffffff, 1);
    exec_not(0x7fffffff, -1);
    exec_not(0x80000000, -1);
    exec_not(0x80000000, 1);
    exec_not(0x80000000, -2);
    exec_not(0x12347fff, 0);
    exec_not(0x12347fff, 1);
    exec_not(0x12347fff, -1);
    exec_not(0x12348000, -1);
    exec_not(0x12348000, 1);
    exec_not(0x12348000, -2);
    exec_not(0x12347f7f, 0);
    exec_not(0x12347f7f, 1);
    exec_not(0x12347f7f, -1);
    exec_not(0x12348080, -1);
    exec_not(0x12348080, 1);
    exec_not(0x12348080, -2);
}

void *_test_not __attribute__ ((unused,__section__ ("initcall"))) = test_not;
# 136 "project/ish/tests/e2e/qemu/qemu-test.c" 2





# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shlq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shl" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shl" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_shll(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shl" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shl" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_shlw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shl" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shl" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shlb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shl" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shl" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_shl(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_shlq(s2, s0, s1, 0);

    exec_shll(s2, s0, s1, 0);



    exec_shlw(s2, s0, s1, 0);


    exec_shlb(s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_shl(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_shl(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shl(0x813f3421, 0x82345679, i);
}

void *_test_shl __attribute__ ((unused,__section__ ("initcall"))) = test_shl;
# 142 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shrq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shr" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shr" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_shrl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shr" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shr" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_shrw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shr" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shr" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shrb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shr" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shr" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_shr(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_shrq(s2, s0, s1, 0);

    exec_shrl(s2, s0, s1, 0);



    exec_shrw(s2, s0, s1, 0);


    exec_shrb(s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_shr(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_shr(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shr(0x813f3421, 0x82345679, i);
}

void *_test_shr __attribute__ ((unused,__section__ ("initcall"))) = test_shr;
# 145 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_sarq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sar" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "sar" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_sarl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sar" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "sar" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_sarw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sar" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "sar" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_sarb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "sar" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "sar" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_sar(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_sarq(s2, s0, s1, 0);

    exec_sarl(s2, s0, s1, 0);



    exec_sarw(s2, s0, s1, 0);


    exec_sarb(s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_sar(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_sar(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_sar(0x813f3421, 0x82345679, i);
}

void *_test_sar __attribute__ ((unused,__section__ ("initcall"))) = test_sar;
# 148 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rolq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rol" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rol" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_roll(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rol" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rol" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_rolw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rol" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rol" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rolb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rol" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rol" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_rol(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_rolq(s2, s0, s1, 0);

    exec_roll(s2, s0, s1, 0);



    exec_rolw(s2, s0, s1, 0);


    exec_rolb(s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_rol(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_rol(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_rol(0x813f3421, 0x82345679, i);
}

void *_test_rol __attribute__ ((unused,__section__ ("initcall"))) = test_rol;
# 151 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rorq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "ror" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "ror" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_rorl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "ror" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "ror" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_rorw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "ror" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "ror" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rorb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "ror" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "ror" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_ror(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_rorq(s2, s0, s1, 0);

    exec_rorl(s2, s0, s1, 0);



    exec_rorw(s2, s0, s1, 0);


    exec_rorb(s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_ror(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_ror(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_ror(0x813f3421, 0x82345679, i);
}

void *_test_ror __attribute__ ((unused,__section__ ("initcall"))) = test_ror;
# 154 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rcrq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcr" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcr" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_rcrl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcr" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcr" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_rcrw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcr" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcr" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rcrb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcr" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcr" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_rcr(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_rcrq(s2, s0, s1, 0);

    exec_rcrl(s2, s0, s1, 0);



    exec_rcrw(s2, s0, s1, 0);


    exec_rcrb(s0, s1, 0);



    exec_rcrq(s2, s0, s1, 0x0001);

    exec_rcrl(s2, s0, s1, 0x0001);
    exec_rcrw(s2, s0, s1, 0x0001);
    exec_rcrb(s0, s1, 0x0001);

}

void test_rcr(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_rcr(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_rcr(0x813f3421, 0x82345679, i);
}

void *_test_rcr __attribute__ ((unused,__section__ ("initcall"))) = test_rcr;
# 158 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rclq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcl" "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcl" "q", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_rcll(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcl" "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcl" "l", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}

void exec_rclw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcl" "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcl" "w", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_rclb(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "rcl" "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "rcl" "b", s0, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_rcl(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_rclq(s2, s0, s1, 0);

    exec_rcll(s2, s0, s1, 0);



    exec_rclw(s2, s0, s1, 0);


    exec_rclb(s0, s1, 0);



    exec_rclq(s2, s0, s1, 0x0001);

    exec_rcll(s2, s0, s1, 0x0001);
    exec_rclw(s2, s0, s1, 0x0001);
    exec_rclb(s0, s1, 0x0001);

}

void test_rcl(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_rcl(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_rcl(0x813f3421, 0x82345679, i);
}

void *_test_rcl __attribute__ ((unused,__section__ ("initcall"))) = test_rcl;
# 162 "project/ish/tests/e2e/qemu/qemu-test.c" 2




# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 82 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shldq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shld" "q" " %%cl, %" "" "5, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags), "r" (s2));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " C=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shld" "q", s0, s2, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_shldl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shld" "l" " %%cl, %" "k" "5, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags), "r" (s2));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " C=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shld" "l", s0, s2, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 141 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shld(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_shldq(s2, s0, s1, 0);

    exec_shldl(s2, s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_shld(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_shld(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shld(0x813f3421, 0x82345679, i);
}

void *_test_shld __attribute__ ((unused,__section__ ("initcall"))) = test_shld;
# 167 "project/ish/tests/e2e/qemu/qemu-test.c" 2




# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 82 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shrdq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shrd" "q" " %%cl, %" "" "5, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags), "r" (s2));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " C=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shrd" "q", s0, s2, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}


void exec_shrdl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "shrd" "l" " %%cl, %" "k" "5, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags), "r" (s2));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " C=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "shrd" "l", s0, s2, s1, res, iflags, flags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800));
}
# 141 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_shrd(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_shrdq(s2, s0, s1, 0);

    exec_shrdl(s2, s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_shrd(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_shrd(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shrd(0x813f3421, 0x82345679, i);
}

void *_test_shrd __attribute__ ((unused,__section__ ("initcall"))) = test_shrd;
# 172 "project/ish/tests/e2e/qemu/qemu-test.c" 2







# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_btq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "bt" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "bt" "q", s0, s1, res, iflags, flags & (0x0001));
}


void exec_btl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "bt" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "bt" "l", s0, s1, res, iflags, flags & (0x0001));
}

void exec_btw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "bt" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "bt" "w", s0, s1, res, iflags, flags & (0x0001));
}
# 141 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_bt(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_btq(s2, s0, s1, 0);

    exec_btl(s2, s0, s1, 0);



    exec_btw(s2, s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_bt(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_bt(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_bt(0x813f3421, 0x82345679, i);
}

void *_test_bt __attribute__ ((unused,__section__ ("initcall"))) = test_bt;
# 180 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_btsq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "bts" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "bts" "q", s0, s1, res, iflags, flags & (0x0001));
}


void exec_btsl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "bts" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "bts" "l", s0, s1, res, iflags, flags & (0x0001));
}

void exec_btsw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "bts" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "bts" "w", s0, s1, res, iflags, flags & (0x0001));
}
# 141 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_bts(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_btsq(s2, s0, s1, 0);

    exec_btsl(s2, s0, s1, 0);



    exec_btsw(s2, s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_bts(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_bts(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_bts(0x813f3421, 0x82345679, i);
}

void *_test_bts __attribute__ ((unused,__section__ ("initcall"))) = test_bts;
# 184 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_btrq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "btr" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "btr" "q", s0, s1, res, iflags, flags & (0x0001));
}


void exec_btrl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "btr" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "btr" "l", s0, s1, res, iflags, flags & (0x0001));
}

void exec_btrw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "btr" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "btr" "w", s0, s1, res, iflags, flags & (0x0001));
}
# 141 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_btr(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_btrq(s2, s0, s1, 0);

    exec_btrl(s2, s0, s1, 0);



    exec_btrw(s2, s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_btr(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_btr(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_btr(0x813f3421, 0x82345679, i);
}

void *_test_btr __attribute__ ((unused,__section__ ("initcall"))) = test_btr;
# 188 "project/ish/tests/e2e/qemu/qemu-test.c" 2



# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h" 1
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_btcq(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "btc" "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "btc" "q", s0, s1, res, iflags, flags & (0x0001));
}


void exec_btcl(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "btc" "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "btc" "l", s0, s1, res, iflags, flags & (0x0001));
}

void exec_btcw(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" "btc" "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=g" (res), "=g" (flags) : "r" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CCIN=%04lx CC=%04lx\n",
           "btc" "w", s0, s1, res, iflags, flags & (0x0001));
}
# 141 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void exec_btc(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    exec_btcq(s2, s0, s1, 0);

    exec_btcl(s2, s0, s1, 0);



    exec_btcw(s2, s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void test_btc(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        exec_btc(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_btc(0x813f3421, 0x82345679, i);
}

void *_test_btc __attribute__ ((unused,__section__ ("initcall"))) = test_btc;
# 192 "project/ish/tests/e2e/qemu/qemu-test.c" 2
# 219 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_lea(void)
{
    long eax, ebx, ecx, edx, esi, edi, res;
    eax = i2l(0x0001);
    ebx = i2l(0x0002);
    ecx = i2l(0x0004);
    edx = i2l(0x0008);
    esi = i2l(0x0010);
    edi = i2l(0x0020);

    { asm("lea " "0x4000" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000", res);};

    { asm("lea " "(%%eax)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%eax)", res);};
    { asm("lea " "(%%ebx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%ebx)", res);};
    { asm("lea " "(%%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%ecx)", res);};
    { asm("lea " "(%%edx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%edx)", res);};
    { asm("lea " "(%%esi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%esi)", res);};
    { asm("lea " "(%%edi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%edi)", res);};

    { asm("lea " "0x40(%%eax)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%eax)", res);};
    { asm("lea " "0x40(%%ebx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%ebx)", res);};
    { asm("lea " "0x40(%%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%ecx)", res);};
    { asm("lea " "0x40(%%edx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%edx)", res);};
    { asm("lea " "0x40(%%esi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%esi)", res);};
    { asm("lea " "0x40(%%edi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%edi)", res);};

    { asm("lea " "0x4000(%%eax)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%eax)", res);};
    { asm("lea " "0x4000(%%ebx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%ebx)", res);};
    { asm("lea " "0x4000(%%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%ecx)", res);};
    { asm("lea " "0x4000(%%edx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%edx)", res);};
    { asm("lea " "0x4000(%%esi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%esi)", res);};
    { asm("lea " "0x4000(%%edi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%edi)", res);};

    { asm("lea " "(%%eax, %%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%eax, %%ecx)", res);};
    { asm("lea " "(%%ebx, %%edx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%ebx, %%edx)", res);};
    { asm("lea " "(%%ecx, %%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%ecx, %%ecx)", res);};
    { asm("lea " "(%%edx, %%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%edx, %%ecx)", res);};
    { asm("lea " "(%%esi, %%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%esi, %%ecx)", res);};
    { asm("lea " "(%%edi, %%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%edi, %%ecx)", res);};

    { asm("lea " "0x40(%%eax, %%ecx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%eax, %%ecx)", res);};
    { asm("lea " "0x4000(%%ebx, %%edx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%ebx, %%edx)", res);};

    { asm("lea " "(%%ecx, %%ecx, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%ecx, %%ecx, 2)", res);};
    { asm("lea " "(%%edx, %%ecx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%edx, %%ecx, 4)", res);};
    { asm("lea " "(%%esi, %%ecx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%esi, %%ecx, 8)", res);};

    { asm("lea " "(,%%eax, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(,%%eax, 2)", res);};
    { asm("lea " "(,%%ebx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(,%%ebx, 4)", res);};
    { asm("lea " "(,%%ecx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(,%%ecx, 8)", res);};

    { asm("lea " "0x40(,%%eax, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(,%%eax, 2)", res);};
    { asm("lea " "0x40(,%%ebx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(,%%ebx, 4)", res);};
    { asm("lea " "0x40(,%%ecx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(,%%ecx, 8)", res);};


    { asm("lea " "-10(%%ecx, %%ecx, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "-10(%%ecx, %%ecx, 2)", res);};
    { asm("lea " "-10(%%edx, %%ecx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "-10(%%edx, %%ecx, 4)", res);};
    { asm("lea " "-10(%%esi, %%ecx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "-10(%%esi, %%ecx, 8)", res);};

    { asm("lea " "0x4000(%%ecx, %%ecx, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%ecx, %%ecx, 2)", res);};
    { asm("lea " "0x4000(%%edx, %%ecx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%edx, %%ecx, 4)", res);};
    { asm("lea " "0x4000(%%esi, %%ecx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%esi, %%ecx, 8)", res);};


    { asm("lea " "0x4000" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000", res);};
    { asm("lea " "0x4000(%%rip)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rip)", res);};

    { asm("lea " "(%%rax)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rax)", res);};
    { asm("lea " "(%%rbx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rbx)", res);};
    { asm("lea " "(%%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rcx)", res);};
    { asm("lea " "(%%rdx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rdx)", res);};
    { asm("lea " "(%%rsi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rsi)", res);};
    { asm("lea " "(%%rdi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rdi)", res);};

    { asm("lea " "0x40(%%rax)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rax)", res);};
    { asm("lea " "0x40(%%rbx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rbx)", res);};
    { asm("lea " "0x40(%%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rcx)", res);};
    { asm("lea " "0x40(%%rdx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rdx)", res);};
    { asm("lea " "0x40(%%rsi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rsi)", res);};
    { asm("lea " "0x40(%%rdi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rdi)", res);};

    { asm("lea " "0x4000(%%rax)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rax)", res);};
    { asm("lea " "0x4000(%%rbx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rbx)", res);};
    { asm("lea " "0x4000(%%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rcx)", res);};
    { asm("lea " "0x4000(%%rdx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rdx)", res);};
    { asm("lea " "0x4000(%%rsi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rsi)", res);};
    { asm("lea " "0x4000(%%rdi)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rdi)", res);};

    { asm("lea " "(%%rax, %%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rax, %%rcx)", res);};
    { asm("lea " "(%%rbx, %%rdx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rbx, %%rdx)", res);};
    { asm("lea " "(%%rcx, %%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rcx, %%rcx)", res);};
    { asm("lea " "(%%rdx, %%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rdx, %%rcx)", res);};
    { asm("lea " "(%%rsi, %%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rsi, %%rcx)", res);};
    { asm("lea " "(%%rdi, %%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rdi, %%rcx)", res);};

    { asm("lea " "0x40(%%rax, %%rcx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(%%rax, %%rcx)", res);};
    { asm("lea " "0x4000(%%rbx, %%rdx)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rbx, %%rdx)", res);};

    { asm("lea " "(%%rcx, %%rcx, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rcx, %%rcx, 2)", res);};
    { asm("lea " "(%%rdx, %%rcx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rdx, %%rcx, 4)", res);};
    { asm("lea " "(%%rsi, %%rcx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(%%rsi, %%rcx, 8)", res);};

    { asm("lea " "(,%%rax, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(,%%rax, 2)", res);};
    { asm("lea " "(,%%rbx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(,%%rbx, 4)", res);};
    { asm("lea " "(,%%rcx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "(,%%rcx, 8)", res);};

    { asm("lea " "0x40(,%%rax, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(,%%rax, 2)", res);};
    { asm("lea " "0x40(,%%rbx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(,%%rbx, 4)", res);};
    { asm("lea " "0x40(,%%rcx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x40(,%%rcx, 8)", res);};


    { asm("lea " "-10(%%rcx, %%rcx, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "-10(%%rcx, %%rcx, 2)", res);};
    { asm("lea " "-10(%%rdx, %%rcx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "-10(%%rdx, %%rcx, 4)", res);};
    { asm("lea " "-10(%%rsi, %%rcx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "-10(%%rsi, %%rcx, 8)", res);};

    { asm("lea " "0x4000(%%rcx, %%rcx, 2)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rcx, %%rcx, 2)", res);};
    { asm("lea " "0x4000(%%rdx, %%rcx, 4)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rdx, %%rcx, 4)", res);};
    { asm("lea " "0x4000(%%rsi, %%rcx, 8)" ", %0" : "=r" (res) : "a" (eax), "b" (ebx), "c" (ecx), "d" (edx), "S" (esi), "D" (edi)); printf("lea %s = " "%016lx" "\n", "0x4000(%%rsi, %%rcx, 8)", res);};
# 356 "project/ish/tests/e2e/qemu/qemu-test.c"
}
# 399 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_jcc(void)
{
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ne" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "ne", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ne" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "ne", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ne" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ne" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ne" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ne" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ne" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ne" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ne" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "ne", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ne" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "ne", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ne" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ne" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ne" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ne" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ne" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ne" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "e" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "e", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "e" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "e", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "e" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "e" "q", res); asm("cmpl %2, %1\n\t" "cmov" "e" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "e" "l", res); asm("cmpl %2, %1\n\t" "cmov" "e" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "e" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "e" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "e", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "e" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "e", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "e" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "e" "q", res); asm("cmpl %2, %1\n\t" "cmov" "e" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "e" "l", res); asm("cmpl %2, %1\n\t" "cmov" "e" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "e" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "l" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "l", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "l" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "l", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "l" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "q", res); asm("cmpl %2, %1\n\t" "cmov" "l" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "l", res); asm("cmpl %2, %1\n\t" "cmov" "l" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "l" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "l", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "l" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "l", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "l" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "q", res); asm("cmpl %2, %1\n\t" "cmov" "l" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "l", res); asm("cmpl %2, %1\n\t" "cmov" "l" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "l" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "l", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "l" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "l", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "l" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "q", res); asm("cmpl %2, %1\n\t" "cmov" "l" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "l", res); asm("cmpl %2, %1\n\t" "cmov" "l" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "l" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "le" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "le", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "le" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "le", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "le" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "q", res); asm("cmpl %2, %1\n\t" "cmov" "le" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "l", res); asm("cmpl %2, %1\n\t" "cmov" "le" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "le" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "le", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "le" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "le", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "le" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "q", res); asm("cmpl %2, %1\n\t" "cmov" "le" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "l", res); asm("cmpl %2, %1\n\t" "cmov" "le" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "le" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "le", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "le" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "le", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "le" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "q", res); asm("cmpl %2, %1\n\t" "cmov" "le" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "l", res); asm("cmpl %2, %1\n\t" "cmov" "le" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "le" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ge" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "ge", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ge" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "ge", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ge" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ge" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ge" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ge" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "ge", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ge" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "ge", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ge" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ge" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ge" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ge" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (-1), "r" (1)); printf("%-10s %d\n", "j" "ge", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ge" " %b0\n\t" : "=q" (res) : "r" (-1), "r" (1)); printf("%-10s %d\n", "set" "ge", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ge" "q %3, %0\n\t" : "=r" (res) : "r" (-1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ge" "l %k3, %k0\n\t" : "=r" (res) : "r" (-1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ge" "w %w3, %w0\n\t" : "=r" (res) : "r" (-1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ge" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "g" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "g", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "g" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "g", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "g" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "q", res); asm("cmpl %2, %1\n\t" "cmov" "g" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "l", res); asm("cmpl %2, %1\n\t" "cmov" "g" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "g" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "g", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "g" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "g", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "g" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "q", res); asm("cmpl %2, %1\n\t" "cmov" "g" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "l", res); asm("cmpl %2, %1\n\t" "cmov" "g" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "g" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "g", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "g" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "g", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "g" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "q", res); asm("cmpl %2, %1\n\t" "cmov" "g" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "l", res); asm("cmpl %2, %1\n\t" "cmov" "g" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "g" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "b" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "b", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "b" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "b", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "b" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "q", res); asm("cmpl %2, %1\n\t" "cmov" "b" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "l", res); asm("cmpl %2, %1\n\t" "cmov" "b" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "b" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "b", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "b" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "b", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "b" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "q", res); asm("cmpl %2, %1\n\t" "cmov" "b" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "l", res); asm("cmpl %2, %1\n\t" "cmov" "b" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "b" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "b", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "b" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "b", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "b" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "q", res); asm("cmpl %2, %1\n\t" "cmov" "b" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "l", res); asm("cmpl %2, %1\n\t" "cmov" "b" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "b" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "be" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "be", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "be" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "be", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "be" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "q", res); asm("cmpl %2, %1\n\t" "cmov" "be" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "l", res); asm("cmpl %2, %1\n\t" "cmov" "be" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "be" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "be", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "be" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "be", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "be" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "q", res); asm("cmpl %2, %1\n\t" "cmov" "be" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "l", res); asm("cmpl %2, %1\n\t" "cmov" "be" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "be" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "be", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "be" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "be", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "be" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "q", res); asm("cmpl %2, %1\n\t" "cmov" "be" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "l", res); asm("cmpl %2, %1\n\t" "cmov" "be" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "be" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ae" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "ae", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ae" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "ae", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ae" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ae" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ae" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ae" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "ae", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ae" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "ae", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ae" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ae" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ae" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ae" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "ae", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ae" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "ae", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ae" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ae" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ae" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ae" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "a" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "a", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "a" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "a", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "a" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "q", res); asm("cmpl %2, %1\n\t" "cmov" "a" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "l", res); asm("cmpl %2, %1\n\t" "cmov" "a" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "a" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "a", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "a" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "a", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "a" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "q", res); asm("cmpl %2, %1\n\t" "cmov" "a" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "l", res); asm("cmpl %2, %1\n\t" "cmov" "a" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "a" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "j" "a", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "a" " %b0\n\t" : "=q" (res) : "r" (1), "r" (-1)); printf("%-10s %d\n", "set" "a", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "a" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "q", res); asm("cmpl %2, %1\n\t" "cmov" "a" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "l", res); asm("cmpl %2, %1\n\t" "cmov" "a" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "a" "w", res); } };


    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "p" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "p", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "p" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "p", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "p" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "p" "q", res); asm("cmpl %2, %1\n\t" "cmov" "p" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "p" "l", res); asm("cmpl %2, %1\n\t" "cmov" "p" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "p" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "p" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "p", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "p" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "p", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "p" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "p" "q", res); asm("cmpl %2, %1\n\t" "cmov" "p" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "p" "l", res); asm("cmpl %2, %1\n\t" "cmov" "p" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "p" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "np" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "j" "np", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "np" " %b0\n\t" : "=q" (res) : "r" (1), "r" (1)); printf("%-10s %d\n", "set" "np", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "np" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "np" "q", res); asm("cmpl %2, %1\n\t" "cmov" "np" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "np" "l", res); asm("cmpl %2, %1\n\t" "cmov" "np" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "np" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "np" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "j" "np", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "np" " %b0\n\t" : "=q" (res) : "r" (1), "r" (0)); printf("%-10s %d\n", "set" "np", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "np" "q %3, %0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "np" "q", res); asm("cmpl %2, %1\n\t" "cmov" "np" "l %k3, %k0\n\t" : "=r" (res) : "r" (1), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "np" "l", res); asm("cmpl %2, %1\n\t" "cmov" "np" "w %w3, %w0\n\t" : "=r" (res) : "r" (1), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "np" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "o" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0)); printf("%-10s %d\n", "j" "o", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "o" " %b0\n\t" : "=q" (res) : "r" (0x7fffffff), "r" (0)); printf("%-10s %d\n", "set" "o", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "o" "q %3, %0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "o" "q", res); asm("cmpl %2, %1\n\t" "cmov" "o" "l %k3, %k0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "o" "l", res); asm("cmpl %2, %1\n\t" "cmov" "o" "w %w3, %w0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "o" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "o" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1)); printf("%-10s %d\n", "j" "o", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "o" " %b0\n\t" : "=q" (res) : "r" (0x7fffffff), "r" (-1)); printf("%-10s %d\n", "set" "o", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "o" "q %3, %0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "o" "q", res); asm("cmpl %2, %1\n\t" "cmov" "o" "l %k3, %k0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "o" "l", res); asm("cmpl %2, %1\n\t" "cmov" "o" "w %w3, %w0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "o" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "no" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0)); printf("%-10s %d\n", "j" "no", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "no" " %b0\n\t" : "=q" (res) : "r" (0x7fffffff), "r" (0)); printf("%-10s %d\n", "set" "no", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "no" "q %3, %0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "no" "q", res); asm("cmpl %2, %1\n\t" "cmov" "no" "l %k3, %k0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "no" "l", res); asm("cmpl %2, %1\n\t" "cmov" "no" "w %w3, %w0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "no" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "no" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1)); printf("%-10s %d\n", "j" "no", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "no" " %b0\n\t" : "=q" (res) : "r" (0x7fffffff), "r" (-1)); printf("%-10s %d\n", "set" "no", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "no" "q %3, %0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "no" "q", res); asm("cmpl %2, %1\n\t" "cmov" "no" "l %k3, %k0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "no" "l", res); asm("cmpl %2, %1\n\t" "cmov" "no" "w %w3, %w0\n\t" : "=r" (res) : "r" (0x7fffffff), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "no" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "s" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0), "r" (1)); printf("%-10s %d\n", "j" "s", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "s" " %b0\n\t" : "=q" (res) : "r" (0), "r" (1)); printf("%-10s %d\n", "set" "s", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "s" "q %3, %0\n\t" : "=r" (res) : "r" (0), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "q", res); asm("cmpl %2, %1\n\t" "cmov" "s" "l %k3, %k0\n\t" : "=r" (res) : "r" (0), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "l", res); asm("cmpl %2, %1\n\t" "cmov" "s" "w %w3, %w0\n\t" : "=r" (res) : "r" (0), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "s" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0), "r" (-1)); printf("%-10s %d\n", "j" "s", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "s" " %b0\n\t" : "=q" (res) : "r" (0), "r" (-1)); printf("%-10s %d\n", "set" "s", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "s" "q %3, %0\n\t" : "=r" (res) : "r" (0), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "q", res); asm("cmpl %2, %1\n\t" "cmov" "s" "l %k3, %k0\n\t" : "=r" (res) : "r" (0), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "l", res); asm("cmpl %2, %1\n\t" "cmov" "s" "w %w3, %w0\n\t" : "=r" (res) : "r" (0), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "s" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0), "r" (0)); printf("%-10s %d\n", "j" "s", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "s" " %b0\n\t" : "=q" (res) : "r" (0), "r" (0)); printf("%-10s %d\n", "set" "s", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "s" "q %3, %0\n\t" : "=r" (res) : "r" (0), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "q", res); asm("cmpl %2, %1\n\t" "cmov" "s" "l %k3, %k0\n\t" : "=r" (res) : "r" (0), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "l", res); asm("cmpl %2, %1\n\t" "cmov" "s" "w %w3, %w0\n\t" : "=r" (res) : "r" (0), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "s" "w", res); } };

    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ns" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0), "r" (1)); printf("%-10s %d\n", "j" "ns", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ns" " %b0\n\t" : "=q" (res) : "r" (0), "r" (1)); printf("%-10s %d\n", "set" "ns", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ns" "q %3, %0\n\t" : "=r" (res) : "r" (0), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ns" "l %k3, %k0\n\t" : "=r" (res) : "r" (0), "r" (1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ns" "w %w3, %w0\n\t" : "=r" (res) : "r" (0), "r" (1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ns" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0), "r" (-1)); printf("%-10s %d\n", "j" "ns", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ns" " %b0\n\t" : "=q" (res) : "r" (0), "r" (-1)); printf("%-10s %d\n", "set" "ns", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ns" "q %3, %0\n\t" : "=r" (res) : "r" (0), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ns" "l %k3, %k0\n\t" : "=r" (res) : "r" (0), "r" (-1), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ns" "w %w3, %w0\n\t" : "=r" (res) : "r" (0), "r" (-1), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "w", res); } };
    { int res; asm("movl $1, %0\n\t" "cmpl %2, %1\n\t" "j" "ns" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=r" (res) : "r" (0), "r" (0)); printf("%-10s %d\n", "j" "ns", res); asm("movl $0, %0\n\t" "cmpl %2, %1\n\t" "set" "ns" " %b0\n\t" : "=q" (res) : "r" (0), "r" (0)); printf("%-10s %d\n", "set" "ns", res); if (1) { long val = i2l(1); long res = i2l(0x12345678);asm("cmpl %2, %1\n\t" "cmov" "ns" "q %3, %0\n\t" : "=r" (res) : "r" (0), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "q", res); asm("cmpl %2, %1\n\t" "cmov" "ns" "l %k3, %k0\n\t" : "=r" (res) : "r" (0), "r" (0), "m" (val), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "l", res); asm("cmpl %2, %1\n\t" "cmov" "ns" "w %w3, %w0\n\t" : "=r" (res) : "r" (0), "r" (0), "r" (1), "0" (res)); printf("%-10s R=" "%016lx" "\n", "cmov" "ns" "w", res); } };
}
# 478 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_loop(void)
{
    long ecx, zf;
    const long ecx_vals[] = {
        0,
        1,
        0x10000,
        0x10001,

        0x100000000L,
        0x100000001L,

    };
    int i, res;





    { for(i = 0; i < sizeof(ecx_vals) / sizeof(long); i++) { ecx = ecx_vals[i]; for(zf = 0; zf < 2; zf++) { asm("test %2, %2\n\t" "movl $1, %0\n\t" "jecxz" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=a" (res) : "c" (ecx), "b" (!zf)); printf("%-10s ECX=" "%016lx" " ZF=%ld r=%d\n", "jecxz", ecx, zf, res); } }};
    { for(i = 0; i < sizeof(ecx_vals) / sizeof(long); i++) { ecx = ecx_vals[i]; for(zf = 0; zf < 2; zf++) { asm("test %2, %2\n\t" "movl $1, %0\n\t" "loop" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=a" (res) : "c" (ecx), "b" (!zf)); printf("%-10s ECX=" "%016lx" " ZF=%ld r=%d\n", "loop", ecx, zf, res); } }};
    { for(i = 0; i < sizeof(ecx_vals) / sizeof(long); i++) { ecx = ecx_vals[i]; for(zf = 0; zf < 2; zf++) { asm("test %2, %2\n\t" "movl $1, %0\n\t" "loopz" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=a" (res) : "c" (ecx), "b" (!zf)); printf("%-10s ECX=" "%016lx" " ZF=%ld r=%d\n", "loopz", ecx, zf, res); } }};
    { for(i = 0; i < sizeof(ecx_vals) / sizeof(long); i++) { ecx = ecx_vals[i]; for(zf = 0; zf < 2; zf++) { asm("test %2, %2\n\t" "movl $1, %0\n\t" "loopnz" " 1f\n\t" "movl $0, %0\n\t" "1:\n\t" : "=a" (res) : "c" (ecx), "b" (!zf)); printf("%-10s ECX=" "%016lx" " ZF=%ld r=%d\n", "loopnz", ecx, zf, res); } }};
}
# 511 "project/ish/tests/e2e/qemu/qemu-test.c"
# 1 "project/ish/tests/e2e/qemu/qemu-test-muldiv.h" 1

void test_mulb(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm ("push %4\n\t"
         "popf\n\t"
         "mul""b %b2\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "mul" "b", s0, s1, res, flags & (0x0800 | 0x0001));
}

void test_mulw(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "mul" "w %w3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "mul" "w", op0h, op0, s1, resh, res, flags & (0x0800 | 0x0001));
}

void test_mull(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "mul" "l %k3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "mul" "l", op0h, op0, s1, resh, res, flags & (0x0800 | 0x0001));
}


void test_mulq(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "mul" "q %3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "mul" "q", op0h, op0, s1, resh, res, flags & (0x0800 | 0x0001));
}
# 512 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test-muldiv.h" 1

void test_imulb(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm ("push %4\n\t"
         "popf\n\t"
         "imul""b %b2\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "imul" "b", s0, s1, res, flags & (0x0800 | 0x0001));
}

void test_imulw(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "imul" "w %w3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "imul" "w", op0h, op0, s1, resh, res, flags & (0x0800 | 0x0001));
}

void test_imull(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "imul" "l %k3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "imul" "l", op0h, op0, s1, resh, res, flags & (0x0800 | 0x0001));
}


void test_imulq(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "imul" "q %3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "imul" "q", op0h, op0, s1, resh, res, flags & (0x0800 | 0x0001));
}
# 515 "project/ish/tests/e2e/qemu/qemu-test.c" 2

void test_imulw2(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm volatile ("push %4\n\t"
         "popf\n\t"
         "imulw %w2, %w0\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=q" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "imulw", s0, s1, res, flags & (0x0800 | 0x0001));
}

void test_imull2(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm volatile ("push %4\n\t"
         "popf\n\t"
         "imull %k2, %k0\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=q" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "imull", s0, s1, res, flags & (0x0800 | 0x0001));
}


void test_imulq2(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm volatile ("push %4\n\t"
         "popf\n\t"
         "imulq %2, %0\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=q" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "imulq", s0, s1, res, flags & (0x0800 | 0x0001));
}
# 594 "project/ish/tests/e2e/qemu/qemu-test.c"
# 1 "project/ish/tests/e2e/qemu/qemu-test-muldiv.h" 1

void test_divb(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm ("push %4\n\t"
         "popf\n\t"
         "div""b %b2\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "div" "b", s0, s1, res, flags & (0));
}

void test_divw(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "div" "w %w3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "div" "w", op0h, op0, s1, resh, res, flags & (0));
}

void test_divl(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "div" "l %k3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "div" "l", op0h, op0, s1, resh, res, flags & (0));
}


void test_divq(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "div" "q %3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "div" "q", op0h, op0, s1, resh, res, flags & (0));
}
# 595 "project/ish/tests/e2e/qemu/qemu-test.c" 2


# 1 "project/ish/tests/e2e/qemu/qemu-test-muldiv.h" 1

void test_idivb(long op0, long op1)
{
    long res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
    asm ("push %4\n\t"
         "popf\n\t"
         "idiv""b %b2\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
    printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n",
           "idiv" "b", s0, s1, res, flags & (0));
}

void test_idivw(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "idiv" "w %w3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "idiv" "w", op0h, op0, s1, resh, res, flags & (0));
}

void test_idivl(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "idiv" "l %k3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "idiv" "l", op0h, op0, s1, resh, res, flags & (0));
}


void test_idivq(long op0h, long op0, long op1)
{
    long res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
    asm ("push %5\n\t"
         "popf\n\t"
         "idiv" "q %3\n\t"
         "pushf\n\t"
         "pop %1\n\t"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
    printf("%-10s AH=" "%016lx" " AL=" "%016lx" " B=" "%016lx" " RH=" "%016lx" " RL=" "%016lx" " CC=%04lx\n",
           "idiv" "q", op0h, op0, s1, resh, res, flags & (0));
}
# 598 "project/ish/tests/e2e/qemu/qemu-test.c" 2

void test_mul(void)
{
    test_imulb(0x1234561d, 4);
    test_imulb(3, -4);
    test_imulb(0x80, 0x80);
    test_imulb(0x10, 0x10);

    test_imulw(0, 0x1234001d, 45);
    test_imulw(0, 23, -45);
    test_imulw(0, 0x8000, 0x8000);
    test_imulw(0, 0x100, 0x100);

    test_imull(0, 0x1234001d, 45);
    test_imull(0, 23, -45);
    test_imull(0, 0x80000000, 0x80000000);
    test_imull(0, 0x10000, 0x10000);

    test_mulb(0x1234561d, 4);
    test_mulb(3, -4);
    test_mulb(0x80, 0x80);
    test_mulb(0x10, 0x10);

    test_mulw(0, 0x1234001d, 45);
    test_mulw(0, 23, -45);
    test_mulw(0, 0x8000, 0x8000);
    test_mulw(0, 0x100, 0x100);

    test_mull(0, 0x1234001d, 45);
    test_mull(0, 23, -45);
    test_mull(0, 0x80000000, 0x80000000);
    test_mull(0, 0x10000, 0x10000);

    test_imulw2(0x1234001d, 45);
    test_imulw2(23, -45);
    test_imulw2(0x8000, 0x8000);
    test_imulw2(0x100, 0x100);

    test_imull2(0x1234001d, 45);
    test_imull2(23, -45);
    test_imull2(0x80000000, 0x80000000);
    test_imull2(0x10000, 0x10000);

    { long res, flags, s1; flags = 0; res = 0; s1 = 0x1234; asm volatile ("push %3\n\t" "popf\n\t" "imul" "w" " $" "45" ", %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "w" " im", (long)45, (long)0x1234, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 23; asm volatile ("push %3\n\t" "popf\n\t" "imul" "w" " $" "-45" ", %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "w" " im", (long)-45, (long)23, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 0x80000000; asm volatile ("push %3\n\t" "popf\n\t" "imul" "w" " $" "0x8000" ", %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "w" " im", (long)0x8000, (long)0x80000000, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 0x1000; asm volatile ("push %3\n\t" "popf\n\t" "imul" "w" " $" "0x7fff" ", %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "w" " im", (long)0x7fff, (long)0x1000, res, flags & (0));};

    { long res, flags, s1; flags = 0; res = 0; s1 = 0x1234; asm volatile ("push %3\n\t" "popf\n\t" "imul" "l" " $" "45" ", %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "l" " im", (long)45, (long)0x1234, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 23; asm volatile ("push %3\n\t" "popf\n\t" "imul" "l" " $" "-45" ", %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "l" " im", (long)-45, (long)23, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 0x80000000; asm volatile ("push %3\n\t" "popf\n\t" "imul" "l" " $" "0x8000" ", %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "l" " im", (long)0x8000, (long)0x80000000, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 0x1000; asm volatile ("push %3\n\t" "popf\n\t" "imul" "l" " $" "0x7fff" ", %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "l" " im", (long)0x7fff, (long)0x1000, res, flags & (0));};

    test_idivb(0x12341678, 0x127e);
    test_idivb(0x43210123, -5);
    test_idivb(0x12340004, -1);

    test_idivw(0, 0x12345678, 12347);
    test_idivw(0, -23223, -45);
    test_idivw(0, 0x12348000, -1);
    test_idivw(0x12343, 0x12345678, 0x81238567);

    test_idivl(0, 0x12345678, 12347);
    test_idivl(0, -233223, -45);
    test_idivl(0, 0x80000000, -1);
    test_idivl(0x12343, 0x12345678, 0x81234567);

    test_divb(0x12341678, 0x127e);
    test_divb(0x43210123, -5);
    test_divb(0x12340004, -1);

    test_divw(0, 0x12345678, 12347);
    test_divw(0, -23223, -45);
    test_divw(0, 0x12348000, -1);
    test_divw(0x12343, 0x12345678, 0x81238567);

    test_divl(0, 0x12345678, 12347);
    test_divl(0, -233223, -45);
    test_divl(0, 0x80000000, -1);
    test_divl(0x12343, 0x12345678, 0x81234567);


    test_imulq(0, 0x1234001d1234001d, 45);
    test_imulq(0, 23, -45);
    test_imulq(0, 0x8000000000000000, 0x8000000000000000);
    test_imulq(0, 0x100000000, 0x100000000);

    test_mulq(0, 0x1234001d1234001d, 45);
    test_mulq(0, 23, -45);
    test_mulq(0, 0x8000000000000000, 0x8000000000000000);
    test_mulq(0, 0x100000000, 0x100000000);

    test_imulq2(0x1234001d1234001d, 45);
    test_imulq2(23, -45);
    test_imulq2(0x8000000000000000, 0x8000000000000000);
    test_imulq2(0x100000000, 0x100000000);

    { long res, flags, s1; flags = 0; res = 0; s1 = 0x12341234; asm volatile ("push %3\n\t" "popf\n\t" "imul" "q" " $" "45" ", %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "q" " im", (long)45, (long)0x12341234, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 23; asm volatile ("push %3\n\t" "popf\n\t" "imul" "q" " $" "-45" ", %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "q" " im", (long)-45, (long)23, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 0x8000000000000000; asm volatile ("push %3\n\t" "popf\n\t" "imul" "q" " $" "0x8000" ", %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "q" " im", (long)0x8000, (long)0x8000000000000000, res, flags & (0));};
    { long res, flags, s1; flags = 0; res = 0; s1 = 0x10000000; asm volatile ("push %3\n\t" "popf\n\t" "imul" "q" " $" "0x7fff" ", %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=r" (res), "=g" (flags) : "r" (s1), "1" (flags), "0" (res)); printf("%-10s A=" "%016lx" " B=" "%016lx" " R=" "%016lx" " CC=%04lx\n", "imul" "q" " im", (long)0x7fff, (long)0x10000000, res, flags & (0));};

    test_idivq(0, 0x12345678abcdef, 12347);
    test_idivq(0, -233223, -45);
    test_idivq(0, 0x8000000000000000, -1);
    test_idivq(0x12343, 0x12345678, 0x81234567);

    test_divq(0, 0x12345678abcdef, 12347);
    test_divq(0, -233223, -45);
    test_divq(0, 0x8000000000000000, -1);
    test_divq(0x12343, 0x12345678, 0x81234567);

}
# 724 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_bsx(void)
{
    { long res, val, resz; val = 0; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsrw" " %" "w" "2, %" "w" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsrw", val, res, resz);};
    { long res, val, resz; val = 0x12340128; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsrw" " %" "w" "2, %" "w" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsrw", val, res, resz);};
    { long res, val, resz; val = 0; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsfw" " %" "w" "2, %" "w" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsfw", val, res, resz);};
    { long res, val, resz; val = 0x12340128; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsfw" " %" "w" "2, %" "w" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsfw", val, res, resz);};
    { long res, val, resz; val = 0; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsrl" " %" "k" "2, %" "k" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsrl", val, res, resz);};
    { long res, val, resz; val = 0x00340128; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsrl" " %" "k" "2, %" "k" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsrl", val, res, resz);};
    { long res, val, resz; val = 0; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsfl" " %" "k" "2, %" "k" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsfl", val, res, resz);};
    { long res, val, resz; val = 0x00340128; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsfl" " %" "k" "2, %" "k" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsfl", val, res, resz);};

    { long res, val, resz; val = 0; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsrq" " %" "" "2, %" "" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsrq", val, res, resz);};
    { long res, val, resz; val = 0x003401281234; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsrq" " %" "" "2, %" "" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsrq", val, res, resz);};
    { long res, val, resz; val = 0; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsfq" " %" "" "2, %" "" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsfq", val, res, resz);};
    { long res, val, resz; val = 0x003401281234; asm("xor %1, %1\n" "mov $0x12345678, %0\n" "bsfq" " %" "" "2, %" "" "0 ; setz %b1" : "=&r" (res), "=&q" (resz) : "r" (val)); printf("%-10s A=" "%016lx" " R=" "%016lx" " %ld\n", "bsfq", val, res, resz);};

}



union float64u {
    double d;
    uint64_t l;
};

union float64u q_nan = { .l = 0xFFF8000000000000LL };
union float64u s_nan = { .l = 0xFFF0000000000000LL };

void test_fops(double a, double b)
{
    printf("a=%f b=%f a+b=%f\n", a, b, a + b);
    printf("a=%f b=%f a-b=%f\n", a, b, a - b);
    printf("a=%f b=%f a*b=%f\n", a, b, a * b);
    printf("a=%f b=%f a/b=%f\n", a, b, a / b);
    printf("a=%f b=%f fmod(a, b)=%f\n", a, b, fmod(a, b));
    printf("a=%f sqrt(a)=%f\n", a, sqrt(a));
    printf("a=%f sin(a)=%f\n", a, sin(a));
    printf("a=%f cos(a)=%f\n", a, cos(a));
    printf("a=%f tan(a)=%f\n", a, tan(a));
    printf("a=%f log(a)=%f\n", a, log(a));
    printf("a=%f exp(a)=%f\n", a, exp(a));
    printf("a=%f b=%f atan2(a, b)=%f\n", a, b, atan2(a, b));

    printf("a=%f asin(sin(a))=%f\n", a, asin(sin(a)));
    printf("a=%f acos(cos(a))=%f\n", a, acos(cos(a)));
    printf("a=%f atan(tan(a))=%f\n", a, atan(tan(a)));

}

void fpu_clear_exceptions(void)
{
# 791 "project/ish/tests/e2e/qemu/qemu-test.c"
}





void test_fcmp(double a, double b)
{
    long eflags, fpus;

    fpu_clear_exceptions();
    asm("fcom %2\n"
        "fstsw %%ax\n"
        : "=a" (fpus)
        : "t" (a), "u" (b));
    printf("fcom(%f %f)=%04lx\n",
           a, b, fpus & (0x4500 | 0x0000));
    fpu_clear_exceptions();
    asm("fucom %2\n"
        "fstsw %%ax\n"
        : "=a" (fpus)
        : "t" (a), "u" (b));
    printf("fucom(%f %f)=%04lx\n",
           a, b, fpus & (0x4500 | 0x0000));
    if (1) {

        fpu_clear_exceptions();
        asm("fcomi %3, %2\n"
            "fstsw %%ax\n"
            "pushf\n"
            "pop %0\n"
            : "=r" (eflags), "=a" (fpus)
            : "t" (a), "u" (b));
        printf("fcomi(%f %f)=%04lx %02lx\n",
               a, b, fpus & 0x0000, eflags & (0x0040 | 0x0004 | 0x0001));
        fpu_clear_exceptions();
        asm("fucomi %3, %2\n"
            "fstsw %%ax\n"
            "pushf\n"
            "pop %0\n"
            : "=r" (eflags), "=a" (fpus)
            : "t" (a), "u" (b));
        printf("fucomi(%f %f)=%04lx %02lx\n",
               a, b, fpus & 0x0000, eflags & (0x0040 | 0x0004 | 0x0001));
    }
    fpu_clear_exceptions();
    asm volatile("fxam\n"
                 "fstsw %%ax\n"
                 : "=a" (fpus)
                 : "t" (a));
    printf("fxam(%f)=%04lx\n", a, fpus & 0x4700);
    fpu_clear_exceptions();
}

void test_fcvt(double a)
{
    float fa;
    long double la;
    int16_t fpuc;
    int i;
    int64_t lla;
    int ia;
    int16_t wa;
    double ra;

    fa = a;
    la = a;
    printf("(float)%f = %f\n", a, fa);
    printf("(long double)%f = %Lf\n", a, la);
    printf("a=" "%016lx" "\n", *(uint64_t *)&a);
    printf("la=" "%016lx" " %04x\n", *(uint64_t *)&la,
           *(unsigned short *)((char *)(&la) + 8));


    asm volatile ("fstcw %0" : "=m" (fpuc));
    for(i=0;i<4;i++) {
        uint16_t val16;
        val16 = (fpuc & ~0x0c00) | (i << 10);
        asm volatile ("fldcw %0" : : "m" (val16));
        asm volatile ("fists %0" : "=m" (wa) : "t" (a));
        asm volatile ("fistl %0" : "=m" (ia) : "t" (a));
        asm volatile ("fistpll %0" : "=m" (lla) : "t" (a) : "st");
        asm volatile ("frndint ; fstl %0" : "=m" (ra) : "t" (a));
        asm volatile ("fldcw %0" : : "m" (fpuc));
        printf("(short)a = %d\n", wa);
        printf("(int)a = %d\n", ia);
        printf("(int64_t)a = " "%016lx" "\n", lla);
        printf("rint(a) = %f\n", ra);
    }
}





void test_fconst(void)
{
    double a;
    asm("fld" "1" : "=t" (a)); printf("fld" "1" "= %f\n", a);;
    asm("fld" "l2t" : "=t" (a)); printf("fld" "l2t" "= %f\n", a);;
    asm("fld" "l2e" : "=t" (a)); printf("fld" "l2e" "= %f\n", a);;
    asm("fld" "pi" : "=t" (a)); printf("fld" "pi" "= %f\n", a);;
    asm("fld" "lg2" : "=t" (a)); printf("fld" "lg2" "= %f\n", a);;
    asm("fld" "ln2" : "=t" (a)); printf("fld" "ln2" "= %f\n", a);;
    asm("fld" "z" : "=t" (a)); printf("fld" "z" "= %f\n", a);;
}

void test_fbcd(double a)
{
    unsigned short bcd[5];
    double b;

    asm("fbstp %0" : "=m" (bcd[0]) : "t" (a) : "st");
    asm("fbld %1" : "=t" (b) : "m" (bcd[0]));
    printf("a=%f bcd=%04x%04x%04x%04x%04x b=%f\n",
           a, bcd[4], bcd[3], bcd[2], bcd[1], bcd[0], b);
}
# 926 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_fenv(void)
{
    struct __attribute__((__packed__)) {
        uint16_t fpuc;
        uint16_t dummy1;
        uint16_t fpus;
        uint16_t dummy2;
        uint16_t fptag;
        uint16_t dummy3;
        uint32_t ignored[4];
        long double fpregs[8];
    } float_env32;
    struct __attribute__((__packed__)) {
        uint16_t fpuc;
        uint16_t fpus;
        uint16_t fptag;
        uint16_t ignored[4];
        long double fpregs[8];
    } float_env16;
    double dtab[8];
    double rtab[8];
    int i;

    for(i=0;i<8;i++)
        dtab[i] = i + 1;

    { 
# 952 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 952 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env16)
# 952 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 952 "project/ish/tests/e2e/qemu/qemu-test.c"
   0xaa, sizeof(*(&float_env16))
# 952 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 952 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env16)
# 952 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 952 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i])); asm volatile ("data16 fnstenv" " %0\n" : : "m" (*(&float_env16))); asm volatile ("data16 fldenv" " %0\n": : "m" (*(&float_env16))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]); printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env16)->fpuc, (&float_env16)->fpus & 0xff00, (&float_env16)->fptag);};
    { 
# 953 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 953 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env16)
# 953 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 953 "project/ish/tests/e2e/qemu/qemu-test.c"
   0xaa, sizeof(*(&float_env16))
# 953 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 953 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env16)
# 953 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 953 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i])); asm volatile ("data16 fnsave" " %0\n" : : "m" (*(&float_env16))); asm volatile ("data16 frstor" " %0\n": : "m" (*(&float_env16))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]); printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env16)->fpuc, (&float_env16)->fpus & 0xff00, (&float_env16)->fptag);};
    { 
# 954 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 954 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env32)
# 954 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 954 "project/ish/tests/e2e/qemu/qemu-test.c"
   0xaa, sizeof(*(&float_env32))
# 954 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 954 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env32)
# 954 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 954 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i])); asm volatile ("fnstenv" " %0\n" : : "m" (*(&float_env32))); asm volatile ("fldenv" " %0\n": : "m" (*(&float_env32))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]); printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env32)->fpuc, (&float_env32)->fpus & 0xff00, (&float_env32)->fptag);};
    { 
# 955 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 955 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env32)
# 955 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 955 "project/ish/tests/e2e/qemu/qemu-test.c"
   0xaa, sizeof(*(&float_env32))
# 955 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 955 "project/ish/tests/e2e/qemu/qemu-test.c"
   (&float_env32)
# 955 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 955 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i])); asm volatile ("fnsave" " %0\n" : : "m" (*(&float_env32))); asm volatile ("frstor" " %0\n": : "m" (*(&float_env32))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]); printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env32)->fpuc, (&float_env32)->fpus & 0xff00, (&float_env32)->fptag);};


    for(i=0;i<5;i++)
        asm volatile ("fldl %0" : : "m" (dtab[i]));
    asm volatile("ffree %st(2)");
    asm volatile ("fnstenv %0\n" : : "m" (float_env32));
    asm volatile ("fninit");
    printf("fptag=%04x\n", float_env32.fptag);
}
# 979 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_fcmov(void)
{
    double a, b;
    long eflags, i;

    a = 1.0;
    b = 2.0;
    for(i = 0; i < 4; i++) {
        eflags = 0;
        if (i & 1)
            eflags |= 0x0001;
        if (i & 2)
            eflags |= 0x0040;
        { double res; asm("push %3\n" "popf\n" "fcmov" "b" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags)); printf("fcmov%s eflags=0x%04lx-> %f\n", "b", (long)eflags, res);};
        { double res; asm("push %3\n" "popf\n" "fcmov" "e" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags)); printf("fcmov%s eflags=0x%04lx-> %f\n", "e", (long)eflags, res);};
        { double res; asm("push %3\n" "popf\n" "fcmov" "be" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags)); printf("fcmov%s eflags=0x%04lx-> %f\n", "be", (long)eflags, res);};
        { double res; asm("push %3\n" "popf\n" "fcmov" "nb" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags)); printf("fcmov%s eflags=0x%04lx-> %f\n", "nb", (long)eflags, res);};
        { double res; asm("push %3\n" "popf\n" "fcmov" "ne" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags)); printf("fcmov%s eflags=0x%04lx-> %f\n", "ne", (long)eflags, res);};
        { double res; asm("push %3\n" "popf\n" "fcmov" "nbe" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags)); printf("fcmov%s eflags=0x%04lx-> %f\n", "nbe", (long)eflags, res);};
    }
    { double res; asm("push %3\n" "popf\n" "fcmov" "u" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0)); printf("fcmov%s eflags=0x%04lx-> %f\n", "u", (long)0, res);};
    { double res; asm("push %3\n" "popf\n" "fcmov" "u" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0x0004)); printf("fcmov%s eflags=0x%04lx-> %f\n", "u", (long)0x0004, res);};
    { double res; asm("push %3\n" "popf\n" "fcmov" "nu" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0)); printf("fcmov%s eflags=0x%04lx-> %f\n", "nu", (long)0, res);};
    { double res; asm("push %3\n" "popf\n" "fcmov" "nu" " %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0x0004)); printf("fcmov%s eflags=0x%04lx-> %f\n", "nu", (long)0x0004, res);};
}

void test_floats(void)
{
    test_fops(2, 3);
    test_fops(1.4, -5);
    test_fcmp(2, -1);
    test_fcmp(2, 2);
    test_fcmp(2, 3);
    test_fcmp(2, q_nan.d);
    test_fcmp(q_nan.d, -1);
    test_fcmp(-1.0/0.0, -1);
    test_fcmp(1.0/0.0, -1);
    test_fcvt(0.5);
    test_fcvt(-0.5);
    test_fcvt(1.0/7.0);
    test_fcvt(-1.0/9.0);
    test_fcvt(32768);
    test_fcvt(-1e20);
    test_fcvt(-1.0/0.0);
    test_fcvt(1.0/0.0);
    test_fcvt(q_nan.d);
    test_fconst();



    if (1) {

    }
}
# 1131 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_xchg(void)
{

    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgq" " %" "" "0, %" "" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgq", op0, op1);};

    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgl" " %" "k" "0, %" "k" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgl", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgw" " %" "w" "0, %" "w" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgw", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgb" " %" "b" "0, %" "b" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgb", op0, op1);};


    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgq" " %" "" "0, %" "" "1" : "=q" (op0), "=m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgq", op0, op1);};

    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgl" " %" "k" "0, %" "k" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgl", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgw" " %" "w" "0, %" "w" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgw", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xchgb" " %" "b" "0, %" "b" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xchgb", op0, op1);};


    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddq" " %" "" "0, %" "" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddq", op0, op1);};

    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddl" " %" "k" "0, %" "k" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddl", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddw" " %" "w" "0, %" "w" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddw", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddb" " %" "b" "0, %" "b" "1" : "=q" (op0), "+q" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddb", op0, op1);};

    {
        int res;
        res = 0x12345678;
        asm("xaddl %1, %0" : "=r" (res) : "0" (res));
        printf("xaddl same res=%08x\n", res);
    }


    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddq" " %" "" "0, %" "" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddq", op0, op1);};

    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddl" " %" "k" "0, %" "k" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddl", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddw" " %" "w" "0, %" "w" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddw", op0, op1);};
    { long op0, op1; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); asm("xaddb" " %" "b" "0, %" "b" "1" : "=q" (op0), "+m" (op1) : "0" (op0)); printf("%-10s A=" "%016lx" " B=" "%016lx" "\n", "xaddb", op0, op1);};


    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfbca7654); asm("cmpxchgq" " %" "" "0, %" "" "1" : "=q" (op0), "+q" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgq", op2, op0, op1);};






    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfffefdfc); asm("cmpxchgq" " %" "" "0, %" "" "1" : "=q" (op0), "+q" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgq", op2, op0, op1);};






    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfbca7654); asm("cmpxchgq" " %" "" "0, %" "" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgq", op2, op0, op1);};

    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfbca7654); asm("cmpxchgl" " %" "k" "0, %" "k" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgl", op2, op0, op1);};
    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfbca7654); asm("cmpxchgw" " %" "w" "0, %" "w" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgw", op2, op0, op1);};
    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfbca7654); asm("cmpxchgb" " %" "b" "0, %" "b" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgb", op2, op0, op1);};


    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfffefdfc); asm("cmpxchgq" " %" "" "0, %" "" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgq", op2, op0, op1);};

    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfffefdfc); asm("cmpxchgl" " %" "k" "0, %" "k" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgl", op2, op0, op1);};
    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfffefdfc); asm("cmpxchgw" " %" "w" "0, %" "w" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgw", op2, op0, op1);};
    { long op0, op1, op2; op0 = i2l(0x12345678); op1 = i2l(0xfbca7654); op2 = i2l(0xfffefdfc); asm("cmpxchgb" " %" "b" "0, %" "b" "1" : "=q" (op0), "+m" (op1) : "0" (op0), "a" (op2)); printf("%-10s EAX=" "%016lx" " A=" "%016lx" " C=" "%016lx" "\n", "cmpxchgb", op2, op0, op1);};

    {
        uint64_t op0, op1, op2;
        long eax, edx;
        long i, eflags;

        for(i = 0; i < 2; i++) {
            op0 = 0x123456789abcdLL;
            eax = i2l(op0 & 0xffffffff);
            edx = i2l(op0 >> 32);
            if (i == 0)
                op1 = 0xfbca765423456LL;
            else
                op1 = op0;
            op2 = 0x6532432432434LL;
            asm("lock cmpxchg8b %2\n"
                "pushf\n"
                "pop %3\n"
                : "=a" (eax), "=d" (edx), "=m" (op1), "=g" (eflags)
                : "0" (eax), "1" (edx), "m" (op1), "b" ((int)op2), "c" ((int)(op2 >> 32)));
            printf("cmpxchg8b: eax=" "%016lx" " edx=" "%016lx" " op1=" "%016lx" " CC=%02lx\n",
                   eax, edx, op1, eflags & 0x0040);
        }
    }
}
# 1410 "project/ish/tests/e2e/qemu/qemu-test.c"
asm(".globl func_lret\n"
    "func_lret:\n"
    "movl $0x87654641, %eax\n"
    "lretq\n");
# 1426 "project/ish/tests/e2e/qemu/qemu-test.c"
extern char func_lret;
extern char func_iret;

void test_misc(void)
{
    char table[256];
    long res, i;

    for(i=0;i<256;i++) table[i] = 256 - i;
    res = 0x12345678;
    asm ("xlat" : "=a" (res) : "b" (table), "0" (res));
    printf("xlat: EAX=" "%016lx" "\n", res);
# 1494 "project/ish/tests/e2e/qemu/qemu-test.c"
    asm volatile ("push $12345432 ; push $0x9abcdef ; pop (%%rsp) ; pop %0"
                  : "=g" (res));
    printf("popl esp=" "%016lx" "\n", res);
# 1508 "project/ish/tests/e2e/qemu/qemu-test.c"
}

uint8_t str_buffer[4096];
# 1545 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_string(void)
{
    int i;
    for(i = 0;i < sizeof(str_buffer); i++)
        str_buffer[i] = i + 0x56;
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "stos" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "stos" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "stos" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "stos" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "stos" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "stos" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "stos" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "stos" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "stos" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "stos" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "stos" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "stos" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "stos" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "stos" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "stos" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "stos" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "stos" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "stos" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "lods" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "lods" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "lods" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "lods" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "lods" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "lods" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "lods" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "lods" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "lods" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "movs" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "movs" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "movs" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "movs" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "movs" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "movs" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "movs" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "movs" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "movs" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "movs" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "movs" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "movs" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "rep " "movs" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "movs" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "movs" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "movs" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "rep " "movs" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "rep " "movs" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "lods" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "lods" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "lods" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};


   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "scas" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "scas" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "scas" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "scas" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "scas" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "scas" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "scas" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "scas" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "scas" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "scas" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "scas" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "scas" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "scas" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "scas" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "scas" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "scas" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "scas" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "scas" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "scas" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "scas" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "scas" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "scas" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "scas" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "scas" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "scas" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "scas" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "scas" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "cmps" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "cmps" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "cmps" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "" "cmps" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "cmps" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "cmps" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "cmps" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "" "cmps" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "" "cmps" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "cmps" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "cmps" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "cmps" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repz " "cmps" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "cmps" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "cmps" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "cmps" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repz " "cmps" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repz " "cmps" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
   { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "cmps" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "cmps" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "cmps" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "" "\n\t" "repnz " "cmps" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "cmps" "b" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "b", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "cmps" "w" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "w", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "cmps" "l" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "l", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));}; { long esi, edi, eax, ecx, eflags; esi = (long)(str_buffer + sizeof(str_buffer) / 2); edi = (long)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17; asm volatile ("push $0\n\t" "popf\n\t" "std" "\n\t" "repnz " "cmps" "q" "\n\t" "cld\n\t" "pushf\n\t" "pop %4\n\t" : "=S" (esi), "=D" (edi), "=a" (eax), "=c" (ecx), "=g" (eflags) : "0" (esi), "1" (edi), "2" (eax), "3" (ecx)); printf("%-10s ESI=" "%016lx" " EDI=" "%016lx" " EAX=" "%016lx" " ECX=" "%016lx" " EFL=%04x\n", "repnz " "cmps" "q", esi - (long) str_buffer, edi - (long) str_buffer, eax, ecx, (int)(eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010)));};
}
# 1717 "project/ish/tests/e2e/qemu/qemu-test.c"
jmp_buf jmp_env;
int v1;
int tab[2];

void sig_handler(int sig, siginfo_t *info, void *puc)
{
    ucontext_t *uc = puc;

    printf("si_signo=%d si_errno=%d si_code=%d",
           info->si_signo, info->si_errno, info->si_code);
    printf(" si_addr=0x%08lx",
           (unsigned long)info->si_addr);
    printf("\n");

    printf("trapno=" "%016lx" " err=" "%016lx",
           (long)uc->uc_mcontext.gregs[REG_TRAPNO],
           (long)uc->uc_mcontext.gregs[REG_ERR]);
    printf(" EIP=" "%016lx", (long)uc->uc_mcontext.gregs[REG_RIP]);
    printf("\n");
    longjmp(jmp_env, 1);
}

void test_exceptions(void)
{
    struct sigaction act;
    volatile int val;

    act.
# 1744 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
       __sigaction_u.__sa_sigaction 
# 1744 "project/ish/tests/e2e/qemu/qemu-test.c"
                    = sig_handler;
    
# 1745 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   (*(
# 1745 "project/ish/tests/e2e/qemu/qemu-test.c"
   &act.sa_mask
# 1745 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   ) = 0, 0)
# 1745 "project/ish/tests/e2e/qemu/qemu-test.c"
                            ;
    act.sa_flags = 
# 1746 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                  0x0040 
# 1746 "project/ish/tests/e2e/qemu/qemu-test.c"
                             | 
# 1746 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                               0x0010
# 1746 "project/ish/tests/e2e/qemu/qemu-test.c"
                                         ;
    sigaction(
# 1747 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
             8
# 1747 "project/ish/tests/e2e/qemu/qemu-test.c"
                   , &act, 
# 1747 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                           ((void *)0)
# 1747 "project/ish/tests/e2e/qemu/qemu-test.c"
                               );
    sigaction(
# 1748 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
             4
# 1748 "project/ish/tests/e2e/qemu/qemu-test.c"
                   , &act, 
# 1748 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                           ((void *)0)
# 1748 "project/ish/tests/e2e/qemu/qemu-test.c"
                               );
    sigaction(
# 1749 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
             11
# 1749 "project/ish/tests/e2e/qemu/qemu-test.c"
                    , &act, 
# 1749 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                            ((void *)0)
# 1749 "project/ish/tests/e2e/qemu/qemu-test.c"
                                );
    sigaction(
# 1750 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
             10
# 1750 "project/ish/tests/e2e/qemu/qemu-test.c"
                   , &act, 
# 1750 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                           ((void *)0)
# 1750 "project/ish/tests/e2e/qemu/qemu-test.c"
                               );
    sigaction(
# 1751 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
             5
# 1751 "project/ish/tests/e2e/qemu/qemu-test.c"
                    , &act, 
# 1751 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
                            ((void *)0)
# 1751 "project/ish/tests/e2e/qemu/qemu-test.c"
                                );


    printf("DIVZ exception:\n");
    if (setjmp(jmp_env) == 0) {

        v1 = 0;
        v1 = 2 / v1;
    }
# 1805 "project/ish/tests/e2e/qemu/qemu-test.c"
    printf("PF exception:\n");
    if (setjmp(jmp_env) == 0) {
        val = 1;

        asm volatile ("nop");

        *(char *)0x1234 = 1;
    }


    printf("PF exception:\n");
    if (setjmp(jmp_env) == 0) {
        val = 1;

        v1 = *(char *)0x1234;
    }


    printf("UD2 exception:\n");
    if (setjmp(jmp_env) == 0) {

        asm volatile("ud2");
    }
    printf("lock nop exception:\n");
    if (setjmp(jmp_env) == 0) {

        asm volatile(".byte 0xf0, 0x90");
    }

    printf("INT exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("int $0xfd");
    }
    if (setjmp(jmp_env) == 0) {
        asm volatile ("int $0x01");
    }
    if (setjmp(jmp_env) == 0) {
        asm volatile (".byte 0xcd, 0x03");
    }
    if (setjmp(jmp_env) == 0) {
        asm volatile ("int $0x04");
    }
    if (setjmp(jmp_env) == 0) {
        asm volatile ("int $0x05");
    }

    printf("INT3 exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("int3");
    }

    printf("CLI exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("cli");
    }

    printf("STI exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("cli");
    }
# 1874 "project/ish/tests/e2e/qemu/qemu-test.c"
    printf("OUTB exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("outb %%al, %%dx" : : "d" (0x4321), "a" (0));
    }

    printf("INB exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("inb %%dx, %%al" : "=a" (val) : "d" (0x4321));
    }

    printf("REP OUTSB exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("rep outsb" : : "d" (0x4321), "S" (tab), "c" (1));
    }

    printf("REP INSB exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("rep insb" : : "d" (0x4321), "D" (tab), "c" (1));
    }

    printf("HLT exception:\n");
    if (setjmp(jmp_env) == 0) {
        asm volatile ("hlt");
    }

    printf("single step exception:\n");
    val = 0;
    if (setjmp(jmp_env) == 0) {
        asm volatile ("pushf\n"
                      "orl $0x00100, (%%esp)\n"
                      "popf\n"
                      "movl $0xabcd, %0\n"
                      "movl $0x0, %0\n" : "=m" (val) : : "cc", "memory");
    }
    printf("val=0x%x\n", val);
}
# 2041 "project/ish/tests/e2e/qemu/qemu-test.c"
long enter_stack[4096];
# 2088 "project/ish/tests/e2e/qemu/qemu-test.c"
static void test_enter(void)
{

    { long esp_save, esp_val, ebp_val, ebp_save, i; uint64_t *ptr, *stack_end, *stack_ptr; 
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2091 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint64_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "q" " $8, $" "0" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 0); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint64_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
    { long esp_save, esp_val, ebp_val, ebp_save, i; uint64_t *ptr, *stack_end, *stack_ptr; 
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2092 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint64_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "q" " $8, $" "1" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 1); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint64_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
    { long esp_save, esp_val, ebp_val, ebp_save, i; uint64_t *ptr, *stack_end, *stack_ptr; 
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2093 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint64_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "q" " $8, $" "2" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 2); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint64_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
    { long esp_save, esp_val, ebp_val, ebp_save, i; uint64_t *ptr, *stack_end, *stack_ptr; 
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2094 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint64_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "q" " $8, $" "31" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 31); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint64_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};







    { long esp_save, esp_val, ebp_val, ebp_save, i; uint16_t *ptr, *stack_end, *stack_ptr; 
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2102 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint16_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "w" " $8, $" "0" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 0); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint16_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
    { long esp_save, esp_val, ebp_val, ebp_save, i; uint16_t *ptr, *stack_end, *stack_ptr; 
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2103 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint16_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "w" " $8, $" "1" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 1); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint16_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
    { long esp_save, esp_val, ebp_val, ebp_save, i; uint16_t *ptr, *stack_end, *stack_ptr; 
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2104 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint16_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "w" " $8, $" "2" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 2); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint16_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
    { long esp_save, esp_val, ebp_val, ebp_save, i; uint16_t *ptr, *stack_end, *stack_ptr; 
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   __builtin___memset_chk (
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c"
   0, sizeof(enter_stack)
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , __builtin_object_size (
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c"
   enter_stack
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c" 3 4
   , 0))
# 2105 "project/ish/tests/e2e/qemu/qemu-test.c"
   ; stack_end = stack_ptr = (uint16_t *)(enter_stack + 4096); ebp_val = (long)stack_ptr; for(i=1;i<=32;i++) *--stack_ptr = i; esp_val = (long)stack_ptr; asm("mov " "%%rsp" ", %[esp_save]\n" "mov " "%%rbp" ", %[ebp_save]\n" "mov %[esp_val], " "%%rsp" "\n" "mov %[ebp_val], " "%%rbp" "\n" "enter" "w" " $8, $" "31" "\n" "mov " "%%rsp" ", %[esp_val]\n" "mov " "%%rbp" ", %[ebp_val]\n" "mov %[esp_save], " "%%rsp" "\n" "mov %[ebp_save], " "%%rbp" "\n" : [esp_save] "=r" (esp_save), [ebp_save] "=r" (ebp_save), [esp_val] "=r" (esp_val), [ebp_val] "=r" (ebp_val) : "[esp_val]" (esp_val), "[ebp_val]" (ebp_val)); printf("level=%d:\n", 31); printf("esp_val=" "%016lx" "\n", esp_val - (long)stack_end); printf("ebp_val=" "%016lx" "\n", ebp_val - (long)stack_end); for(ptr = (uint16_t *)esp_val; ptr < stack_end; ptr++) printf("%016lx" "\n", (long)ptr[0]);};
}



typedef int __m64 __attribute__ ((__mode__ (__V2SI__)));
typedef float __m128 __attribute__ ((__mode__(__V4SF__)));

typedef union {
    double d[2];
    float s[4];
    uint32_t l[4];
    uint64_t q[2];
    __m128 dq;
} XMMReg;

static uint64_t __attribute__((aligned(16))) test_values[4][2] = {
    { 0x456723c698694873, 0xdc515cff944a58ec },
    { 0x1f297ccd58bad7ab, 0x41f21efba9e3e146 },
    { 0x007c62c2085427f8, 0x231be9e8cde7438d },
    { 0x0f76255a085427f8, 0xc233e9e8c4c9439a },
};
# 2295 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_sse_comi(double a1, double b1)
{
    { unsigned long eflags; XMMReg a, b; a.s[0] = a1; b.s[0] = b1; asm volatile ("ucomiss" " %2, %1\n" "pushf\n" "pop %0\n" : "=rm" (eflags) : "x" (a.dq), "x" (b.dq)); printf("%-9s: a=%f b=%f cc=%04x\n", "ucomiss", a1, b1, eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));};

    { unsigned long eflags; XMMReg a, b; a.s[0] = a1; b.s[0] = b1; asm volatile ("comiss" " %2, %1\n" "pushf\n" "pop %0\n" : "=rm" (eflags) : "x" (a.dq), "x" (b.dq)); printf("%-9s: a=%f b=%f cc=%04x\n", "comiss", a1, b1, eflags & (0x0001 | 0x0004 | 0x0040 | 0x0080 | 0x0800 | 0x0010));};

}
# 2353 "project/ish/tests/e2e/qemu/qemu-test.c"
struct fpxstate {
    uint16_t fpuc;
    uint16_t fpus;
    uint16_t fptag;
    uint16_t fop;
    uint32_t fpuip;
    uint16_t cs_sel;
    uint16_t dummy0;
    uint32_t fpudp;
    uint16_t ds_sel;
    uint16_t dummy1;
    uint32_t mxcsr;
    uint32_t mxcsr_mask;
    uint8_t fpregs1[8 * 16];
    uint8_t xmm_regs[8 * 16];
    uint8_t dummy2[224];
};

static struct fpxstate fpx_state __attribute__((aligned(16)));
static struct fpxstate fpx_state2 __attribute__((aligned(16)));

void test_fxsave(void)
{
    struct fpxstate *fp = &fpx_state;
    struct fpxstate *fp2 = &fpx_state2;
    int i, nb_xmm;
    XMMReg a, b;
    a.q[0] = test_values[0][0];
    a.q[1] = test_values[0][1];
    b.q[0] = test_values[1][0];
    b.q[1] = test_values[1][1];

    asm("movdqa %2, %%xmm0\n"
        "movdqa %3, %%xmm7\n"

        "movdqa %2, %%xmm15\n"

        " fld1\n"
        " fldpi\n"
        " fldln2\n"
        " fxsave %0\n"
        " fxrstor %0\n"
        " fxsave %1\n"
        " fninit\n"
        : "=m" (*(uint32_t *)fp2), "=m" (*(uint32_t *)fp)
        : "m" (a), "m" (b));
    printf("fpuc=%04x\n", fp->fpuc);
    printf("fpus=%04x\n", fp->fpus);
    printf("fptag=%04x\n", fp->fptag);
    for(i = 0; i < 3; i++) {
        printf("ST%d: " "%016lx" " %04x\n",
               i,
               *(uint64_t *)&fp->fpregs1[i * 16],
               *(uint16_t *)&fp->fpregs1[i * 16 + 8]);
    }
    printf("mxcsr=%08x\n", fp->mxcsr & 0x1f80);

    nb_xmm = 16;



    for(i = 0; i < nb_xmm; i++) {
        printf("xmm%d: " "%016lx" "" "%016lx" "\n",
               i,
               *(uint64_t *)&fp->xmm_regs[i * 16],
               *(uint64_t *)&fp->xmm_regs[i * 16 + 8]);
    }
}

void test_sse(void)
{
    XMMReg r, a, b;
    int i;


    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("punpcklbw" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "punpcklbw", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("punpckldq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "punpckldq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
# 2440 "project/ish/tests/e2e/qemu/qemu-test.c"
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pcmpeqb" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pcmpeqb", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pcmpeqd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pcmpeqd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; b.q[0] = test_values[2*i+1][0]; asm volatile ("paddq" " %2, %0" : "=y" (r.q[0]) : "0" (a.q[0]), "y" (b.q[0])); printf("%-9s: a=" "%016lx" " b=" "%016lx" " r=" "%016lx" "\n", "paddq", a.q[0], b.q[0], r.q[0]); } { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("paddq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "paddq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};};



    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pminub" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pminub", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; b.q[0] = test_values[2*i+1][0]; asm volatile ("pand" " %2, %0" : "=y" (r.q[0]) : "0" (a.q[0]), "y" (b.q[0])); printf("%-9s: a=" "%016lx" " b=" "%016lx" " r=" "%016lx" "\n", "pand", a.q[0], b.q[0], r.q[0]); } { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pand" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pand", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};};


    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pmaxub" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pmaxub", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pandn" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pandn", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};







    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("por" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "por", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};



    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; b.q[0] = test_values[2*i+1][0]; asm volatile ("pxor" " %2, %0" : "=y" (r.q[0]) : "0" (a.q[0]), "y" (b.q[0])); printf("%-9s: a=" "%016lx" " b=" "%016lx" " r=" "%016lx" "\n", "pxor", a.q[0], b.q[0], r.q[0]); } { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pxor" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pxor", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; b.q[0] = test_values[2*i+1][0]; asm volatile ("pmuludq" " %2, %0" : "=y" (r.q[0]) : "0" (a.q[0]), "y" (b.q[0])); printf("%-9s: a=" "%016lx" " b=" "%016lx" " r=" "%016lx" "\n", "pmuludq", a.q[0], b.q[0], r.q[0]); } { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("pmuludq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "pmuludq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};};





    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("psubq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "psubq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("paddb" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "paddb", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("paddd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "paddd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
# 2486 "project/ish/tests/e2e/qemu/qemu-test.c"
    a.q[0] = test_values[0][0];
    a.q[1] = test_values[0][1];



    asm volatile ("pextrw $5, %1, %0" : "=r" (r.l[0]) : "x" (a.dq));
    printf("%-9s: r=%08x\n", "pextrw", r.l[0]);




    asm volatile ("pmovmskb %1, %0" : "=r" (r.l[0]) : "x" (a.dq));
    printf("%-9s: r=%08x\n", "pmovmskb", r.l[0]);
# 2526 "project/ish/tests/e2e/qemu/qemu-test.c"
    asm volatile ("emms");

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("punpcklqdq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "punpcklqdq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("andps" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "andps", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("andpd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "andpd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("andnps" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "andnps", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};

    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("orps" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "orps", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("orpd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "orpd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("xorps" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "xorps", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = test_values[2*i+1][0]; b.q[1] = test_values[2*i+1][1]; { asm volatile ("xorpd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "xorpd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);}; }};
# 2547 "project/ish/tests/e2e/qemu/qemu-test.c"
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("pshufd" " $" "0x78" ", %1, %0" : "=x" (r.dq) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "pshufd", a.q[1], a.q[0], 0x78, r.q[1], r.q[0]); }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("pshuflw" " $" "0x78" ", %1, %0" : "=x" (r.dq) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "pshuflw", a.q[1], a.q[0], 0x78, r.q[1], r.q[0]); }};
# 2565 "project/ish/tests/e2e/qemu/qemu-test.c"
    { int i; { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psrlq" " $" "7" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psrlq", a.q[1], a.q[0], 7, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psrlq" " $" "7" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psrlq", a.q[0], 7, r.q[0]); }}; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = 7; b.q[1] = 0; asm volatile ("psrlq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "psrlq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]); }};
    { int i; { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psrlq" " $" "32" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psrlq", a.q[1], a.q[0], 32, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psrlq" " $" "32" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psrlq", a.q[0], 32, r.q[0]); }}; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = 32; b.q[1] = 0; asm volatile ("psrlq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "psrlq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]); }};
    { int i; { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psllq" " $" "7" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psllq", a.q[1], a.q[0], 7, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psllq" " $" "7" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psllq", a.q[0], 7, r.q[0]); }}; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = 7; b.q[1] = 0; asm volatile ("psllq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "psllq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]); }};
    { int i; { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psllq" " $" "32" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psllq", a.q[1], a.q[0], 32, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psllq" " $" "32" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psllq", a.q[0], 32, r.q[0]); }}; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; b.q[0] = 32; b.q[1] = 0; asm volatile ("psllq" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "psllq", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]); }};



    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("pslldq" " $" "16" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "pslldq", a.q[1], a.q[0], 16, r.q[1], r.q[0]); }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("pslldq" " $" "7" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "pslldq", a.q[1], a.q[0], 7, r.q[1], r.q[0]); }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psrlq" " $" "16" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psrlq", a.q[1], a.q[0], 16, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psrlq" " $" "16" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psrlq", a.q[0], 16, r.q[0]); }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psrlq" " $" "7" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psrlq", a.q[1], a.q[0], 7, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psrlq" " $" "7" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psrlq", a.q[0], 7, r.q[0]); }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psllq" " $" "16" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psllq", a.q[1], a.q[0], 16, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psllq" " $" "16" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psllq", a.q[0], 16, r.q[0]); }};
    { int i; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("psllq" " $" "7" ", %0" : "=x" (r.dq) : "0" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " ib=%02x r=" "%016lx" "" "%016lx" "\n", "psllq", a.q[1], a.q[0], 7, r.q[1], r.q[0]); a.q[0] = test_values[2*i][0]; asm volatile ("psllq" " $" "7" ", %0" : "=y" (r.q[0]) : "0" (a.q[0])); printf("%-9s: a=" "%016lx" " ib=%02x r=" "%016lx" "\n", "psllq", a.q[0], 7, r.q[0]); }};


    { int i, reg; for(i=0;i<2;i++) { a.q[0] = test_values[2*i][0]; a.q[1] = test_values[2*i][1]; asm volatile ("movmskpd" " %1, %0" : "=r" (reg) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " r=%08x\n", "movmskpd", a.q[1], a.q[0], reg); }};


    asm volatile ("emms");
# 2592 "project/ish/tests/e2e/qemu/qemu-test.c"
    test_sse_comi(2, -1);
    test_sse_comi(2, 2);
    test_sse_comi(2, 3);
    test_sse_comi(2, q_nan.d);
    test_sse_comi(q_nan.d, -1);

    for(i = 0; i < 2; i++) {
        a.s[0] = 2.7;
        a.s[1] = 3.4;
        a.s[2] = 4;
        a.s[3] = -6.3;
        b.s[0] = 45.7;
        b.s[1] = 353.4;
        b.s[2] = 4;
        b.s[3] = 56.3;
        if (i == 1) {
            a.s[0] = q_nan.d;
            b.s[3] = q_nan.d;
        }

        { asm volatile ("addss" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "addss", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("mulss" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "mulss", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("subss" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "subss", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;

        { asm volatile ("divss" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "divss", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
# 2629 "project/ish/tests/e2e/qemu/qemu-test.c"
        a.d[0] = 2.7;
        a.d[1] = -3.4;
        b.d[0] = 45.7;
        b.d[1] = -53.4;
        if (i == 1) {
            a.d[0] = q_nan.d;
            b.d[1] = q_nan.d;
        }
        { asm volatile ("addsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "addsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("mulsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "mulsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("subsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "subsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("minsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "minsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("divsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "divsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("maxsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "maxsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("sqrtsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "sqrtsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpeqsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpeqsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpltsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpltsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmplesd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmplesd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpunordsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpunordsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpneqsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpneqsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpnltsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpnltsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpnlesd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpnlesd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
        { asm volatile ("cmpordsd" " %2, %0" : "=x" (r.dq) : "0" (a.dq), "x" (b.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " b=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cmpordsd", a.q[1], a.q[0], b.q[1], b.q[0], r.q[1], r.q[0]);};;
    }


    a.s[0] = 2.7;
    a.s[1] = 3.4;
    a.s[2] = 4;
    a.s[3] = -6.3;

    { asm volatile ("cvtss2sd" " %1, %0" : "=x" (r.dq) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cvtss2sd", a.q[1], a.q[0], r.q[1], r.q[0]);};



    { asm volatile ("cvttss2si" " %1, %0" : "=r" (r.l[0]) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " r=%08x\n", "cvttss2si", a.q[1], a.q[0], r.l[0]);};



    a.d[0] = 2.6;
    a.d[1] = -3.4;

    { asm volatile ("cvtsd2ss" " %1, %0" : "=x" (r.dq) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " r=" "%016lx" "" "%016lx" "\n", "cvtsd2ss", a.q[1], a.q[0], r.q[1], r.q[0]);};



    { asm volatile ("cvttsd2si" " %1, %0" : "=r" (r.l[0]) : "x" (a.dq)); printf("%-9s: a=" "%016lx" "" "%016lx" " r=%08x\n", "cvttsd2si", a.q[1], a.q[0], r.l[0]);};
# 2684 "project/ish/tests/e2e/qemu/qemu-test.c"
    a.l[0] = -6;
    a.l[1] = 2;
    a.l[2] = 100;
    a.l[3] = -60000;


    { asm volatile ("cvtsi2ss" " %1, %0" : "=x" (r.dq) : "r" (a.l[0])); printf("%-9s: a=%08x r=" "%016lx" "" "%016lx" "\n", "cvtsi2ss", a.l[0], r.q[1], r.q[0]);};
    { asm volatile ("cvtsi2sd" " %1, %0" : "=x" (r.dq) : "r" (a.l[0])); printf("%-9s: a=%08x r=" "%016lx" "" "%016lx" "\n", "cvtsi2sd", a.l[0], r.q[1], r.q[0]);};







    asm volatile ("emms");
}
# 2724 "project/ish/tests/e2e/qemu/qemu-test.c"
void test_conv(void)
{
    { unsigned long a, r; a = i2l(0x8234a6f8); r = a; asm volatile("cbw" : "=a" (r) : "0" (r)); printf("%-10s A=" "%016lx" " R=" "%016lx" "\n", "cbw", a, r);};
    { unsigned long a, r; a = i2l(0x8234a6f8); r = a; asm volatile("cwde" : "=a" (r) : "0" (r)); printf("%-10s A=" "%016lx" " R=" "%016lx" "\n", "cwde", a, r);};

    { unsigned long a, r; a = i2l(0x8234a6f8); r = a; asm volatile("cdqe" : "=a" (r) : "0" (r)); printf("%-10s A=" "%016lx" " R=" "%016lx" "\n", "cdqe", a, r);};


    { unsigned long a, d, r, rh; a = i2l(0x8234a6f8); d = i2l(0x8345a1f2); r = a; rh = d; asm volatile("cwd" : "=a" (r), "=d" (rh) : "0" (r), "1" (rh)); printf("%-10s A=" "%016lx" " R=" "%016lx" ":" "%016lx" "\n", "cwd", a, r, rh); };
    { unsigned long a, d, r, rh; a = i2l(0x8234a6f8); d = i2l(0x8345a1f2); r = a; rh = d; asm volatile("cdq" : "=a" (r), "=d" (rh) : "0" (r), "1" (rh)); printf("%-10s A=" "%016lx" " R=" "%016lx" ":" "%016lx" "\n", "cdq", a, r, rh); };

    { unsigned long a, d, r, rh; a = i2l(0x8234a6f8); d = i2l(0x8345a1f2); r = a; rh = d; asm volatile("cqo" : "=a" (r), "=d" (rh) : "0" (r), "1" (rh)); printf("%-10s A=" "%016lx" " R=" "%016lx" ":" "%016lx" "\n", "cqo", a, r, rh); };


    {
        unsigned long a, r;
        a = i2l(0x12345678);
        asm volatile("bswapl %k0" : "=r" (r) : "0" (a));
        printf("%-10s: A=" "%016lx" " R=" "%016lx" "\n", "bswapl", a, r);
    }

    {
        unsigned long a, r;
        a = i2l(0x12345678);
        asm volatile("bswapq %0" : "=r" (r) : "0" (a));
        printf("%-10s: A=" "%016lx" " R=" "%016lx" "\n", "bswapq", a, r);
    }

}

extern void *__start_initcall;
extern void *__stop_initcall;


int main(int argc, char **argv)
{
    void **ptr;
    void (*func)(void);

    ptr = &__start_initcall;
    while (ptr != &__stop_initcall) {
        func = *ptr++;
        func();
    }
    test_bsx();
    test_mul();
    test_jcc();

    test_floats();



    test_xchg();
    test_string();

    test_lea();
# 2793 "project/ish/tests/e2e/qemu/qemu-test.c"
    test_conv();

    test_sse();


    return 0;
}
