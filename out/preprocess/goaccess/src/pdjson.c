# 0 "project/goaccess/src/pdjson.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/pdjson.c"
# 12 "project/goaccess/src/pdjson.c"
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
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
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
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4

    void(*signal(int, void (*)(int)))(int);

# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
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

 long ru_opaque[14];
# 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
};
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);



int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);



int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );






# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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





int putenv(char *) __asm("_" "putenv" );
long random(void) ;
int rand_r(unsigned *) ;



char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" );

unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4

# 13 "project/goaccess/src/pdjson.c" 2
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

# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 2 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 14 "project/goaccess/src/pdjson.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
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
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 2 3 4
# 15 "project/goaccess/src/pdjson.c" 2


# 1 "project/goaccess/src/pdjson.h" 1
# 9 "project/goaccess/src/pdjson.h"
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 10 "project/goaccess/src/pdjson.h" 2
# 18 "project/goaccess/src/pdjson.h"
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
# 19 "project/goaccess/src/pdjson.h" 2


# 20 "project/goaccess/src/pdjson.h"
enum json_type {
  JSON_ERROR = 1, JSON_DONE,
  JSON_OBJECT, JSON_OBJECT_END, JSON_ARRAY, JSON_ARRAY_END,
  JSON_STRING, JSON_NUMBER, JSON_TRUE, JSON_FALSE, JSON_NULL
};

struct json_allocator {
  void *(*malloc) (size_t);
  void *(*realloc) (void *, size_t);
  void (*free) (void *);
};

typedef int (*json_user_io) (void *user);

typedef struct json_stream json_stream;
typedef struct json_allocator json_allocator;

 void json_open_buffer (json_stream * json, const void *buffer, size_t size);
 void json_open_string (json_stream * json, const char *string);
 void json_open_stream (json_stream * json, FILE * stream);
 void json_open_user (json_stream * json, json_user_io get, json_user_io peek,
                                      void *user);
 void json_close (json_stream * json);

 void json_set_allocator (json_stream * json, json_allocator * a);
 void json_set_streaming (json_stream * json, 
# 45 "project/goaccess/src/pdjson.h" 3 4
                                                             _Bool 
# 45 "project/goaccess/src/pdjson.h"
                                                                  mode);

 enum json_type json_next (json_stream * json);
 enum json_type json_peek (json_stream * json);
 void json_reset (json_stream * json);
 const char *json_get_string (json_stream * json, size_t *length);
 double json_get_number (json_stream * json);

 enum json_type json_skip (json_stream * json);
 enum json_type json_skip_until (json_stream * json, enum json_type type);

 size_t json_get_lineno (json_stream * json);
 size_t json_get_position (json_stream * json);
 size_t json_get_depth (json_stream * json);
 enum json_type json_get_context (json_stream * json, size_t *count);
 const char *json_get_error (json_stream * json);

 int json_source_get (json_stream * json);
 int json_source_peek (json_stream * json);
 
# 64 "project/goaccess/src/pdjson.h" 3 4
                _Bool 
# 64 "project/goaccess/src/pdjson.h"
                     json_isspace (int c);



struct json_source {
  int (*get) (struct json_source *);
  int (*peek) (struct json_source *);
  size_t position;
  union {
    struct {
      FILE *stream;
    } stream;
    struct {
      const char *buffer;
      size_t length;
    } buffer;
    struct {
      void *ptr;
      json_user_io get;
      json_user_io peek;
    } user;
  } source;
};

struct json_stream {
  size_t lineno;

  struct json_stack *stack;
  size_t stack_top;
  size_t stack_size;
  enum json_type next;
  unsigned flags;

  struct {
    char *string;
    size_t string_fill;
    size_t string_size;
  } data;

  size_t ntokens;

  struct json_source source;
  struct json_allocator alloc;
  char errmsg[128];
};
# 18 "project/goaccess/src/pdjson.c" 2
# 51 "project/goaccess/src/pdjson.c"
struct json_stack {
  enum json_type type;
  long count;
};

static enum json_type
push (json_stream * json, enum json_type type) {
  json->stack_top++;
# 67 "project/goaccess/src/pdjson.c"
  if (json->stack_top >= json->stack_size) {
    struct json_stack *stack;
    size_t size = (json->stack_size + 4) * sizeof (*json->stack);
    stack = (struct json_stack *) json->alloc.realloc (json->stack, size);
    if (stack == 
# 71 "project/goaccess/src/pdjson.c" 3 4
                ((void *)0)
# 71 "project/goaccess/src/pdjson.c"
                    ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 72 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 72 "project/goaccess/src/pdjson.c"
     json->errmsg
# 72 "project/goaccess/src/pdjson.c" 3 4
     , 
# 72 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 72 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 72 "project/goaccess/src/pdjson.c"
     json->errmsg
# 72 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 72 "project/goaccess/src/pdjson.c"
     "%s", "out of memory"
# 72 "project/goaccess/src/pdjson.c" 3 4
     )
# 72 "project/goaccess/src/pdjson.c"
     ; };
      return JSON_ERROR;
    }

    json->stack_size += 4;
    json->stack = stack;
  }

  json->stack[json->stack_top].type = type;
  json->stack[json->stack_top].count = 0;

  return type;
}

static enum json_type
pop (json_stream * json, int c, enum json_type expected) {
  if (json->stack == 
# 88 "project/goaccess/src/pdjson.c" 3 4
                    ((void *)0) 
# 88 "project/goaccess/src/pdjson.c"
                         || json->stack[json->stack_top].type != expected) {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 89 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 89 "project/goaccess/src/pdjson.c"
   json->errmsg
# 89 "project/goaccess/src/pdjson.c" 3 4
   , 
# 89 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 89 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 89 "project/goaccess/src/pdjson.c"
   json->errmsg
# 89 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 89 "project/goaccess/src/pdjson.c"
   "unexpected byte '%c'", c
# 89 "project/goaccess/src/pdjson.c" 3 4
   )
# 89 "project/goaccess/src/pdjson.c"
   ; };
    return JSON_ERROR;
  }
  json->stack_top--;
  return expected == JSON_ARRAY ? JSON_ARRAY_END : JSON_OBJECT_END;
}

static int
buffer_peek (struct json_source *source) {
  if (source->position < source->source.buffer.length)
    return source->source.buffer.buffer[source->position];
  else
    return 
# 101 "project/goaccess/src/pdjson.c" 3 4
          (-1)
# 101 "project/goaccess/src/pdjson.c"
             ;
}

static int
buffer_get (struct json_source *source) {
  int c = source->peek (source);
  source->position++;
  return c;
}

static int
stream_get (struct json_source *source) {
  source->position++;
  return fgetc (source->source.stream.stream);
}

static int
stream_peek (struct json_source *source) {
  int c = fgetc (source->source.stream.stream);
  ungetc (c, source->source.stream.stream);
  return c;
}

static void
init (json_stream * json) {
  json->lineno = 1;
  json->flags = (1u << 1);
  json->errmsg[0] = '\0';
  json->ntokens = 0;
  json->next = (enum json_type) 0;

  json->stack = 
# 132 "project/goaccess/src/pdjson.c" 3 4
               ((void *)0)
# 132 "project/goaccess/src/pdjson.c"
                   ;
  json->stack_top = (size_t) -1;
  json->stack_size = 0;

  json->data.string = 
# 136 "project/goaccess/src/pdjson.c" 3 4
                     ((void *)0)
# 136 "project/goaccess/src/pdjson.c"
                         ;
  json->data.string_size = 0;
  json->data.string_fill = 0;
  json->source.position = 0;

  json->alloc.malloc = malloc;
  json->alloc.realloc = realloc;
  json->alloc.free = free;
}

static enum json_type
is_match (json_stream * json, const char *pattern, enum json_type type) {
  int c;
  const char *p = 
# 149 "project/goaccess/src/pdjson.c" 3 4
                 ((void *)0)
# 149 "project/goaccess/src/pdjson.c"
                     ;
  for (p = pattern; *p; p++) {
    if (*p != (c = json->source.get (&json->source))) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 152 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 152 "project/goaccess/src/pdjson.c"
     json->errmsg
# 152 "project/goaccess/src/pdjson.c" 3 4
     , 
# 152 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 152 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 152 "project/goaccess/src/pdjson.c"
     json->errmsg
# 152 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 152 "project/goaccess/src/pdjson.c"
     "expected '%c' instead of byte '%c'", *p, c
# 152 "project/goaccess/src/pdjson.c" 3 4
     )
# 152 "project/goaccess/src/pdjson.c"
     ; };
      return JSON_ERROR;
    }
  }
  return type;
}

static int
pushchar (json_stream * json, int c) {
  if (json->data.string_fill == json->data.string_size) {
    size_t size = json->data.string_size * 2;
    char *buffer = (char *) json->alloc.realloc (json->data.string, size);
    if (buffer == 
# 164 "project/goaccess/src/pdjson.c" 3 4
                 ((void *)0)
# 164 "project/goaccess/src/pdjson.c"
                     ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 165 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 165 "project/goaccess/src/pdjson.c"
     json->errmsg
# 165 "project/goaccess/src/pdjson.c" 3 4
     , 
# 165 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 165 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 165 "project/goaccess/src/pdjson.c"
     json->errmsg
# 165 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 165 "project/goaccess/src/pdjson.c"
     "%s", "out of memory"
# 165 "project/goaccess/src/pdjson.c" 3 4
     )
# 165 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    } else {
      json->data.string_size = size;
      json->data.string = buffer;
    }
  }
  json->data.string[json->data.string_fill++] = c;
  return 0;
}

static int
init_string (json_stream * json) {
  json->data.string_fill = 0;
  if (json->data.string == 
# 179 "project/goaccess/src/pdjson.c" 3 4
                          ((void *)0)
# 179 "project/goaccess/src/pdjson.c"
                              ) {
    json->data.string_size = 1024;
    json->data.string = (char *) json->alloc.malloc (json->data.string_size);
    if (json->data.string == 
# 182 "project/goaccess/src/pdjson.c" 3 4
                            ((void *)0)
# 182 "project/goaccess/src/pdjson.c"
                                ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 183 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 183 "project/goaccess/src/pdjson.c"
     json->errmsg
# 183 "project/goaccess/src/pdjson.c" 3 4
     , 
# 183 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 183 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 183 "project/goaccess/src/pdjson.c"
     json->errmsg
# 183 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 183 "project/goaccess/src/pdjson.c"
     "%s", "out of memory"
# 183 "project/goaccess/src/pdjson.c" 3 4
     )
# 183 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }
  }
  json->data.string[0] = '\0';
  return 0;
}

static int
encode_utf8 (json_stream * json, unsigned long c) {
  if (c < 0x80UL) {
    return pushchar (json, c);
  } else if (c < 0x0800UL) {
    return !((pushchar (json, (c >> 6 & 0x1F) | 0xC0) == 0) &&
             (pushchar (json, (c >> 0 & 0x3F) | 0x80) == 0));
  } else if (c < 0x010000UL) {
    if (c >= 0xd800 && c <= 0xdfff) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 200 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 200 "project/goaccess/src/pdjson.c"
     json->errmsg
# 200 "project/goaccess/src/pdjson.c" 3 4
     , 
# 200 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 200 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 200 "project/goaccess/src/pdjson.c"
     json->errmsg
# 200 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 200 "project/goaccess/src/pdjson.c"
     "invalid codepoint %06lx", c
# 200 "project/goaccess/src/pdjson.c" 3 4
     )
# 200 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }
    return !((pushchar (json, (c >> 12 & 0x0F) | 0xE0) == 0) &&
             (pushchar (json, (c >> 6 & 0x3F) | 0x80) == 0) &&
             (pushchar (json, (c >> 0 & 0x3F) | 0x80) == 0));
  } else if (c < 0x110000UL) {
    return !((pushchar (json, (c >> 18 & 0x07) | 0xF0) == 0) &&
             (pushchar (json, (c >> 12 & 0x3F) | 0x80) == 0) &&
             (pushchar (json, (c >> 6 & 0x3F) | 0x80) == 0) &&
             (pushchar (json, (c >> 0 & 0x3F) | 0x80) == 0));
  } else {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 212 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 212 "project/goaccess/src/pdjson.c"
   json->errmsg
# 212 "project/goaccess/src/pdjson.c" 3 4
   , 
# 212 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 212 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 212 "project/goaccess/src/pdjson.c"
   json->errmsg
# 212 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 212 "project/goaccess/src/pdjson.c"
   "unable to encode %06lx as UTF-8", c
# 212 "project/goaccess/src/pdjson.c" 3 4
   )
# 212 "project/goaccess/src/pdjson.c"
   ; };
    return -1;
  }
}

static int
hexchar (int c) {
  switch (c) {
  case '0':
    return 0;
  case '1':
    return 1;
  case '2':
    return 2;
  case '3':
    return 3;
  case '4':
    return 4;
  case '5':
    return 5;
  case '6':
    return 6;
  case '7':
    return 7;
  case '8':
    return 8;
  case '9':
    return 9;
  case 'a':
  case 'A':
    return 10;
  case 'b':
  case 'B':
    return 11;
  case 'c':
  case 'C':
    return 12;
  case 'd':
  case 'D':
    return 13;
  case 'e':
  case 'E':
    return 14;
  case 'f':
  case 'F':
    return 15;
  default:
    return -1;
  }
}

static long
read_unicode_cp (json_stream * json) {
  long cp = 0;
  int shift = 12;
  size_t i = 0;

  for (i = 0; i < 4; i++) {
    int c = json->source.get (&json->source);
    int hc;

    if (c == 
# 273 "project/goaccess/src/pdjson.c" 3 4
            (-1)
# 273 "project/goaccess/src/pdjson.c"
               ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 274 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 274 "project/goaccess/src/pdjson.c"
     json->errmsg
# 274 "project/goaccess/src/pdjson.c" 3 4
     , 
# 274 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 274 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 274 "project/goaccess/src/pdjson.c"
     json->errmsg
# 274 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 274 "project/goaccess/src/pdjson.c"
     "%s", "unterminated string literal in Unicode"
# 274 "project/goaccess/src/pdjson.c" 3 4
     )
# 274 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    } else if ((hc = hexchar (c)) == -1) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 277 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 277 "project/goaccess/src/pdjson.c"
     json->errmsg
# 277 "project/goaccess/src/pdjson.c" 3 4
     , 
# 277 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 277 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 277 "project/goaccess/src/pdjson.c"
     json->errmsg
# 277 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 277 "project/goaccess/src/pdjson.c"
     "invalid escape Unicode byte '%c'", c
# 277 "project/goaccess/src/pdjson.c" 3 4
     )
# 277 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }

    cp += hc * (1 << shift);
    shift -= 4;
  }


  return cp;
}

static int
read_unicode (json_stream * json) {
  long cp, h, l;
  int c;

  if ((cp = read_unicode_cp (json)) == -1) {
    return -1;
  }

  if (cp >= 0xd800 && cp <= 0xdbff) {



    h = cp;

    c = json->source.get (&json->source);
    if (c == 
# 305 "project/goaccess/src/pdjson.c" 3 4
            (-1)
# 305 "project/goaccess/src/pdjson.c"
               ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 306 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 306 "project/goaccess/src/pdjson.c"
     json->errmsg
# 306 "project/goaccess/src/pdjson.c" 3 4
     , 
# 306 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 306 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 306 "project/goaccess/src/pdjson.c"
     json->errmsg
# 306 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 306 "project/goaccess/src/pdjson.c"
     "%s", "unterminated string literal in Unicode"
# 306 "project/goaccess/src/pdjson.c" 3 4
     )
# 306 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    } else if (c != '\\') {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 309 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 309 "project/goaccess/src/pdjson.c"
     json->errmsg
# 309 "project/goaccess/src/pdjson.c" 3 4
     , 
# 309 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 309 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 309 "project/goaccess/src/pdjson.c"
     json->errmsg
# 309 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 309 "project/goaccess/src/pdjson.c"
     "invalid continuation for surrogate pair '%c', " "expected '\\'", c
# 309 "project/goaccess/src/pdjson.c" 3 4
     )
# 309 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }

    c = json->source.get (&json->source);
    if (c == 
# 314 "project/goaccess/src/pdjson.c" 3 4
            (-1)
# 314 "project/goaccess/src/pdjson.c"
               ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 315 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 315 "project/goaccess/src/pdjson.c"
     json->errmsg
# 315 "project/goaccess/src/pdjson.c" 3 4
     , 
# 315 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 315 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 315 "project/goaccess/src/pdjson.c"
     json->errmsg
# 315 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 315 "project/goaccess/src/pdjson.c"
     "%s", "unterminated string literal in Unicode"
# 315 "project/goaccess/src/pdjson.c" 3 4
     )
# 315 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    } else if (c != 'u') {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 318 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 318 "project/goaccess/src/pdjson.c"
     json->errmsg
# 318 "project/goaccess/src/pdjson.c" 3 4
     , 
# 318 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 318 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 318 "project/goaccess/src/pdjson.c"
     json->errmsg
# 318 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 318 "project/goaccess/src/pdjson.c"
     "invalid continuation for surrogate pair '%c', " "expected 'u'", c
# 318 "project/goaccess/src/pdjson.c" 3 4
     )
# 318 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }

    if ((l = read_unicode_cp (json)) == -1) {
      return -1;
    }

    if (l < 0xdc00 || l > 0xdfff) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 327 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 327 "project/goaccess/src/pdjson.c"
     json->errmsg
# 327 "project/goaccess/src/pdjson.c" 3 4
     , 
# 327 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 327 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 327 "project/goaccess/src/pdjson.c"
     json->errmsg
# 327 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 327 "project/goaccess/src/pdjson.c"
     "surrogate pair continuation \\u%04lx out " "of range (dc00-dfff)", l
# 327 "project/goaccess/src/pdjson.c" 3 4
     )
# 327 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }

    cp = ((h - 0xd800) * 0x400) + ((l - 0xdc00) + 0x10000);
  } else if (cp >= 0xdc00 && cp <= 0xdfff) {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 333 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 333 "project/goaccess/src/pdjson.c"
   json->errmsg
# 333 "project/goaccess/src/pdjson.c" 3 4
   , 
# 333 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 333 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 333 "project/goaccess/src/pdjson.c"
   json->errmsg
# 333 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 333 "project/goaccess/src/pdjson.c"
   "dangling surrogate \\u%04lx", cp
# 333 "project/goaccess/src/pdjson.c" 3 4
   )
# 333 "project/goaccess/src/pdjson.c"
   ; };
    return -1;
  }

  return encode_utf8 (json, cp);
}

static int
read_escaped (json_stream * json) {
  int c = json->source.get (&json->source);
  if (c == 
# 343 "project/goaccess/src/pdjson.c" 3 4
          (-1)
# 343 "project/goaccess/src/pdjson.c"
             ) {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 344 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 344 "project/goaccess/src/pdjson.c"
   json->errmsg
# 344 "project/goaccess/src/pdjson.c" 3 4
   , 
# 344 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 344 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 344 "project/goaccess/src/pdjson.c"
   json->errmsg
# 344 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 344 "project/goaccess/src/pdjson.c"
   "%s", "unterminated string literal in escape"
# 344 "project/goaccess/src/pdjson.c" 3 4
   )
# 344 "project/goaccess/src/pdjson.c"
   ; };
    return -1;
  } else if (c == 'u') {
    if (read_unicode (json) != 0)
      return -1;
  } else {
    switch (c) {
    case '\\':
    case 'b':
    case 'f':
    case 'n':
    case 'r':
    case 't':
    case '/':
    case '"':
      {
        const char *codes = "\\bfnrt/\"";
        const char *p = strchr (codes, c);
        if (pushchar (json, "\\\b\f\n\r\t/\""[p - codes]) != 0)
          return -1;
      }
      break;
    default:
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 367 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 367 "project/goaccess/src/pdjson.c"
     json->errmsg
# 367 "project/goaccess/src/pdjson.c" 3 4
     , 
# 367 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 367 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 367 "project/goaccess/src/pdjson.c"
     json->errmsg
# 367 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 367 "project/goaccess/src/pdjson.c"
     "invalid escaped byte '%c'", c
# 367 "project/goaccess/src/pdjson.c" 3 4
     )
# 367 "project/goaccess/src/pdjson.c"
     ; };
      return -1;
    }
  }
  return 0;
}

static int
char_needs_escaping (int c) {
  if ((c >= 0) && (c < 0x20 || c == 0x22 || c == 0x5c)) {
    return 1;
  }

  return 0;
}

static int
utf8_seq_length (char byte) {
  unsigned char u = (unsigned char) byte;
  if (u < 0x80)
    return 1;

  if (0x80 <= u && u <= 0xBF) {


    return 0;
  } else if (u == 0xC0 || u == 0xC1) {

    return 0;
  } else if (0xC2 <= u && u <= 0xDF) {

    return 2;
  } else if (0xE0 <= u && u <= 0xEF) {

    return 3;
  } else if (0xF0 <= u && u <= 0xF4) {

    return 4;
  } else {


    return 0;
  }
}

static int
is_legal_utf8 (const unsigned char *bytes, int length) {
  unsigned char a;
  const unsigned char *srcptr;

  if (0 == bytes || 0 == length)
    return 0;

  srcptr = bytes + length;
  switch (length) {
  default:
    return 0;

  case 4:
    if ((a = (*--srcptr)) < 0x80 || a > 0xBF)
      return 0;

  case 3:
    if ((a = (*--srcptr)) < 0x80 || a > 0xBF)
      return 0;

  case 2:
    a = (*--srcptr);
    switch (*bytes) {
    case 0xE0:
      if (a < 0xA0 || a > 0xBF)
        return 0;
      break;
    case 0xED:
      if (a < 0x80 || a > 0x9F)
        return 0;
      break;
    case 0xF0:
      if (a < 0x90 || a > 0xBF)
        return 0;
      break;
    case 0xF4:
      if (a < 0x80 || a > 0x8F)
        return 0;
      break;
    default:
      if (a < 0x80 || a > 0xBF)
        return 0;
      break;
    }

  case 1:
    if (*bytes >= 0x80 && *bytes < 0xC2)
      return 0;
  }
  return *bytes <= 0xF4;
}

static int
read_utf8 (json_stream * json, int next_char) {
  int i;
  char buffer[4];
  int count = utf8_seq_length (next_char);
  if (!count) {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 471 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 471 "project/goaccess/src/pdjson.c"
   json->errmsg
# 471 "project/goaccess/src/pdjson.c" 3 4
   , 
# 471 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 471 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 471 "project/goaccess/src/pdjson.c"
   json->errmsg
# 471 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 471 "project/goaccess/src/pdjson.c"
   "%s", "invalid UTF-8 character"
# 471 "project/goaccess/src/pdjson.c" 3 4
   )
# 471 "project/goaccess/src/pdjson.c"
   ; };
    return -1;
  }

  buffer[0] = next_char;
  for (i = 1; i < count; ++i) {
    buffer[i] = json->source.get (&json->source);;
  }

  if (!is_legal_utf8 ((unsigned char *) buffer, count)) {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 481 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 481 "project/goaccess/src/pdjson.c"
   json->errmsg
# 481 "project/goaccess/src/pdjson.c" 3 4
   , 
# 481 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 481 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 481 "project/goaccess/src/pdjson.c"
   json->errmsg
# 481 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 481 "project/goaccess/src/pdjson.c"
   "%s", "invalid UTF-8 text"
# 481 "project/goaccess/src/pdjson.c" 3 4
   )
# 481 "project/goaccess/src/pdjson.c"
   ; };
    return -1;
  }

  for (i = 0; i < count; ++i) {
    if (pushchar (json, buffer[i]) != 0)
      return -1;
  }
  return 0;
}

static enum json_type
read_string (json_stream * json) {
  if (init_string (json) != 0)
    return JSON_ERROR;
  while (1) {
    int c = json->source.get (&json->source);
    if (c == 
# 498 "project/goaccess/src/pdjson.c" 3 4
            (-1)
# 498 "project/goaccess/src/pdjson.c"
               ) {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 499 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 499 "project/goaccess/src/pdjson.c"
     json->errmsg
# 499 "project/goaccess/src/pdjson.c" 3 4
     , 
# 499 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 499 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 499 "project/goaccess/src/pdjson.c"
     json->errmsg
# 499 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 499 "project/goaccess/src/pdjson.c"
     "%s", "unterminated string literal"
# 499 "project/goaccess/src/pdjson.c" 3 4
     )
# 499 "project/goaccess/src/pdjson.c"
     ; };
      return JSON_ERROR;
    } else if (c == '"') {
      if (pushchar (json, '\0') == 0)
        return JSON_STRING;
      else
        return JSON_ERROR;
    } else if (c == '\\') {
      if (read_escaped (json) != 0)
        return JSON_ERROR;
    } else if ((unsigned) c >= 0x80) {
      if (read_utf8 (json, c) != 0)
        return JSON_ERROR;
    } else {
      if (char_needs_escaping (c)) {
        if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 514 "project/goaccess/src/pdjson.c" 3 4
       __builtin___snprintf_chk (
# 514 "project/goaccess/src/pdjson.c"
       json->errmsg
# 514 "project/goaccess/src/pdjson.c" 3 4
       , 
# 514 "project/goaccess/src/pdjson.c"
       sizeof(json->errmsg)
# 514 "project/goaccess/src/pdjson.c" 3 4
       , 0, __builtin_object_size (
# 514 "project/goaccess/src/pdjson.c"
       json->errmsg
# 514 "project/goaccess/src/pdjson.c" 3 4
       , 2 > 1 ? 1 : 0), 
# 514 "project/goaccess/src/pdjson.c"
       "%s", "unescaped control character in string"
# 514 "project/goaccess/src/pdjson.c" 3 4
       )
# 514 "project/goaccess/src/pdjson.c"
       ; };
        return JSON_ERROR;
      }

      if (pushchar (json, c) != 0)
        return JSON_ERROR;
    }
  }
  return JSON_ERROR;
}

static int
is_digit (int c) {
  return c >= 48 && c <= 57 ;
}

static int
read_digits (json_stream * json) {
  int c;
  unsigned nread = 0;
  while (is_digit (c = json->source.peek (&json->source))) {
    if (pushchar (json, json->source.get (&json->source)) != 0)
      return -1;

    nread++;
  }

  if (nread == 0) {
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 542 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 542 "project/goaccess/src/pdjson.c"
   json->errmsg
# 542 "project/goaccess/src/pdjson.c" 3 4
   , 
# 542 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 542 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 542 "project/goaccess/src/pdjson.c"
   json->errmsg
# 542 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 542 "project/goaccess/src/pdjson.c"
   "expected digit instead of byte '%c'", c
# 542 "project/goaccess/src/pdjson.c" 3 4
   )
# 542 "project/goaccess/src/pdjson.c"
   ; };
    return -1;
  }

  return 0;
}

static enum json_type
read_number (json_stream * json, int c) {
  if (pushchar (json, c) != 0)
    return JSON_ERROR;
  if (c == '-') {
    c = json->source.get (&json->source);
    if (is_digit (c)) {
      return read_number (json, c);
    } else {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 558 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 558 "project/goaccess/src/pdjson.c"
     json->errmsg
# 558 "project/goaccess/src/pdjson.c" 3 4
     , 
# 558 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 558 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 558 "project/goaccess/src/pdjson.c"
     json->errmsg
# 558 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 558 "project/goaccess/src/pdjson.c"
     "unexpected byte '%c' in number", c
# 558 "project/goaccess/src/pdjson.c" 3 4
     )
# 558 "project/goaccess/src/pdjson.c"
     ; };
      return JSON_ERROR;
    }
  } else if (strchr ("123456789", c) != 
# 561 "project/goaccess/src/pdjson.c" 3 4
                                       ((void *)0)
# 561 "project/goaccess/src/pdjson.c"
                                           ) {
    c = json->source.peek (&json->source);
    if (is_digit (c)) {
      if (read_digits (json) != 0)
        return JSON_ERROR;
    }
  }

  c = json->source.peek (&json->source);
  if (strchr (".eE", c) == 
# 570 "project/goaccess/src/pdjson.c" 3 4
                          ((void *)0)
# 570 "project/goaccess/src/pdjson.c"
                              ) {
    if (pushchar (json, '\0') != 0)
      return JSON_ERROR;
    else
      return JSON_NUMBER;
  }
  if (c == '.') {
    json->source.get (&json->source);
    if (pushchar (json, c) != 0)
      return JSON_ERROR;
    if (read_digits (json) != 0)
      return JSON_ERROR;
  }

  c = json->source.peek (&json->source);
  if (c == 'e' || c == 'E') {
    json->source.get (&json->source);
    if (pushchar (json, c) != 0)
      return JSON_ERROR;
    c = json->source.peek (&json->source);
    if (c == '+' || c == '-') {
      json->source.get (&json->source);
      if (pushchar (json, c) != 0)
        return JSON_ERROR;
      if (read_digits (json) != 0)
        return JSON_ERROR;
    } else if (is_digit (c)) {
      if (read_digits (json) != 0)
        return JSON_ERROR;
    } else {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 600 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 600 "project/goaccess/src/pdjson.c"
     json->errmsg
# 600 "project/goaccess/src/pdjson.c" 3 4
     , 
# 600 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 600 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 600 "project/goaccess/src/pdjson.c"
     json->errmsg
# 600 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 600 "project/goaccess/src/pdjson.c"
     "unexpected byte '%c' in number", c
# 600 "project/goaccess/src/pdjson.c" 3 4
     )
# 600 "project/goaccess/src/pdjson.c"
     ; };
      return JSON_ERROR;
    }
  }
  if (pushchar (json, '\0') != 0)
    return JSON_ERROR;
  else
    return JSON_NUMBER;
}


# 610 "project/goaccess/src/pdjson.c" 3 4
_Bool

# 611 "project/goaccess/src/pdjson.c"
json_isspace (int c) {
  switch (c) {
  case 0x09:
  case 0x0a:
  case 0x0d:
  case 0x20:
    return 
# 617 "project/goaccess/src/pdjson.c" 3 4
          1
# 617 "project/goaccess/src/pdjson.c"
              ;
  }

  return 
# 620 "project/goaccess/src/pdjson.c" 3 4
        0
# 620 "project/goaccess/src/pdjson.c"
             ;
}


static int
next (json_stream * json) {
  int c;
  while (json_isspace (c = json->source.get (&json->source)))
    if (c == '\n')
      json->lineno++;
  return c;
}

static enum json_type
read_value (json_stream * json, int c) {
  json->ntokens++;
  switch (c) {
  case 
# 637 "project/goaccess/src/pdjson.c" 3 4
      (-1)
# 637 "project/goaccess/src/pdjson.c"
         :
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 638 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 638 "project/goaccess/src/pdjson.c"
   json->errmsg
# 638 "project/goaccess/src/pdjson.c" 3 4
   , 
# 638 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 638 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 638 "project/goaccess/src/pdjson.c"
   json->errmsg
# 638 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 638 "project/goaccess/src/pdjson.c"
   "%s", "unexpected end of text"
# 638 "project/goaccess/src/pdjson.c" 3 4
   )
# 638 "project/goaccess/src/pdjson.c"
   ; };
    return JSON_ERROR;
  case '{':
    return push (json, JSON_OBJECT);
  case '[':
    return push (json, JSON_ARRAY);
  case '"':
    return read_string (json);
  case 'n':
    return is_match (json, "ull", JSON_NULL);
  case 'f':
    return is_match (json, "alse", JSON_FALSE);
  case 't':
    return is_match (json, "rue", JSON_TRUE);
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case '-':
    if (init_string (json) != 0)
      return JSON_ERROR;
    return read_number (json, c);
  default:
    if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 667 "project/goaccess/src/pdjson.c" 3 4
   __builtin___snprintf_chk (
# 667 "project/goaccess/src/pdjson.c"
   json->errmsg
# 667 "project/goaccess/src/pdjson.c" 3 4
   , 
# 667 "project/goaccess/src/pdjson.c"
   sizeof(json->errmsg)
# 667 "project/goaccess/src/pdjson.c" 3 4
   , 0, __builtin_object_size (
# 667 "project/goaccess/src/pdjson.c"
   json->errmsg
# 667 "project/goaccess/src/pdjson.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 667 "project/goaccess/src/pdjson.c"
   "unexpected byte '%c' in value", c
# 667 "project/goaccess/src/pdjson.c" 3 4
   )
# 667 "project/goaccess/src/pdjson.c"
   ; };
    return JSON_ERROR;
  }
}

enum json_type
json_peek (json_stream * json) {
  enum json_type next;
  if (json->next)
    next = json->next;
  else
    next = json->next = json_next (json);
  return next;
}

enum json_type
json_next (json_stream * json) {
  int c;
  enum json_type value;
  if (json->flags & (1u << 0))
    return JSON_ERROR;
  if (json->next != 0) {
    enum json_type next = json->next;
    json->next = (enum json_type) 0;
    return next;
  }
  if (json->ntokens > 0 && json->stack_top == (size_t) -1) {






    if (!(json->flags & (1u << 1))) {
      do {
        c = json->source.peek (&json->source);
        if (json_isspace (c)) {
          c = json->source.get (&json->source);
        }
      } while (json_isspace (c));

      if (c != 
# 708 "project/goaccess/src/pdjson.c" 3 4
              (-1)
# 708 "project/goaccess/src/pdjson.c"
                 ) {
        if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 709 "project/goaccess/src/pdjson.c" 3 4
       __builtin___snprintf_chk (
# 709 "project/goaccess/src/pdjson.c"
       json->errmsg
# 709 "project/goaccess/src/pdjson.c" 3 4
       , 
# 709 "project/goaccess/src/pdjson.c"
       sizeof(json->errmsg)
# 709 "project/goaccess/src/pdjson.c" 3 4
       , 0, __builtin_object_size (
# 709 "project/goaccess/src/pdjson.c"
       json->errmsg
# 709 "project/goaccess/src/pdjson.c" 3 4
       , 2 > 1 ? 1 : 0), 
# 709 "project/goaccess/src/pdjson.c"
       "expected end of text instead of byte '%c'", c
# 709 "project/goaccess/src/pdjson.c" 3 4
       )
# 709 "project/goaccess/src/pdjson.c"
       ; };
        return JSON_ERROR;
      }
    }

    return JSON_DONE;
  }
  c = next (json);
  if (json->stack_top == (size_t) -1) {
    if (c == 
# 718 "project/goaccess/src/pdjson.c" 3 4
            (-1) 
# 718 "project/goaccess/src/pdjson.c"
                && (json->flags & (1u << 1)))
      return JSON_DONE;

    return read_value (json, c);
  }
  if (json->stack[json->stack_top].type == JSON_ARRAY) {
    if (json->stack[json->stack_top].count == 0) {
      if (c == ']') {
        return pop (json, c, JSON_ARRAY);
      }
      json->stack[json->stack_top].count++;
      return read_value (json, c);
    } else if (c == ',') {
      json->stack[json->stack_top].count++;
      return read_value (json, next (json));
    } else if (c == ']') {
      return pop (json, c, JSON_ARRAY);
    } else {
      if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 736 "project/goaccess/src/pdjson.c" 3 4
     __builtin___snprintf_chk (
# 736 "project/goaccess/src/pdjson.c"
     json->errmsg
# 736 "project/goaccess/src/pdjson.c" 3 4
     , 
# 736 "project/goaccess/src/pdjson.c"
     sizeof(json->errmsg)
# 736 "project/goaccess/src/pdjson.c" 3 4
     , 0, __builtin_object_size (
# 736 "project/goaccess/src/pdjson.c"
     json->errmsg
# 736 "project/goaccess/src/pdjson.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 736 "project/goaccess/src/pdjson.c"
     "unexpected byte '%c'", c
# 736 "project/goaccess/src/pdjson.c" 3 4
     )
# 736 "project/goaccess/src/pdjson.c"
     ; };
      return JSON_ERROR;
    }
  } else if (json->stack[json->stack_top].type == JSON_OBJECT) {
    if (json->stack[json->stack_top].count == 0) {
      if (c == '}') {
        return pop (json, c, JSON_OBJECT);
      }


      value = read_value (json, c);
      if (value != JSON_STRING) {
        if (value != JSON_ERROR)
          if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 749 "project/goaccess/src/pdjson.c" 3 4
         __builtin___snprintf_chk (
# 749 "project/goaccess/src/pdjson.c"
         json->errmsg
# 749 "project/goaccess/src/pdjson.c" 3 4
         , 
# 749 "project/goaccess/src/pdjson.c"
         sizeof(json->errmsg)
# 749 "project/goaccess/src/pdjson.c" 3 4
         , 0, __builtin_object_size (
# 749 "project/goaccess/src/pdjson.c"
         json->errmsg
# 749 "project/goaccess/src/pdjson.c" 3 4
         , 2 > 1 ? 1 : 0), 
# 749 "project/goaccess/src/pdjson.c"
         "%s", "expected member name or '}'"
# 749 "project/goaccess/src/pdjson.c" 3 4
         )
# 749 "project/goaccess/src/pdjson.c"
         ; };
        return JSON_ERROR;
      } else {
        json->stack[json->stack_top].count++;
        return value;
      }
    } else if ((json->stack[json->stack_top].count % 2) == 0) {

      if (c != ',' && c != '}') {
        if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 758 "project/goaccess/src/pdjson.c" 3 4
       __builtin___snprintf_chk (
# 758 "project/goaccess/src/pdjson.c"
       json->errmsg
# 758 "project/goaccess/src/pdjson.c" 3 4
       , 
# 758 "project/goaccess/src/pdjson.c"
       sizeof(json->errmsg)
# 758 "project/goaccess/src/pdjson.c" 3 4
       , 0, __builtin_object_size (
# 758 "project/goaccess/src/pdjson.c"
       json->errmsg
# 758 "project/goaccess/src/pdjson.c" 3 4
       , 2 > 1 ? 1 : 0), 
# 758 "project/goaccess/src/pdjson.c"
       "%s", "expected ',' or '}' after member value"
# 758 "project/goaccess/src/pdjson.c" 3 4
       )
# 758 "project/goaccess/src/pdjson.c"
       ; };
        return JSON_ERROR;
      } else if (c == '}') {
        return pop (json, c, JSON_OBJECT);
      } else {
        value = read_value (json, next (json));
        if (value != JSON_STRING) {
          if (value != JSON_ERROR)
            if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 766 "project/goaccess/src/pdjson.c" 3 4
           __builtin___snprintf_chk (
# 766 "project/goaccess/src/pdjson.c"
           json->errmsg
# 766 "project/goaccess/src/pdjson.c" 3 4
           , 
# 766 "project/goaccess/src/pdjson.c"
           sizeof(json->errmsg)
# 766 "project/goaccess/src/pdjson.c" 3 4
           , 0, __builtin_object_size (
# 766 "project/goaccess/src/pdjson.c"
           json->errmsg
# 766 "project/goaccess/src/pdjson.c" 3 4
           , 2 > 1 ? 1 : 0), 
# 766 "project/goaccess/src/pdjson.c"
           "%s", "expected member name"
# 766 "project/goaccess/src/pdjson.c" 3 4
           )
# 766 "project/goaccess/src/pdjson.c"
           ; };
          return JSON_ERROR;
        } else {
          json->stack[json->stack_top].count++;
          return value;
        }
      }
    } else if ((json->stack[json->stack_top].count % 2) == 1) {

      if (c != ':') {
        if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 776 "project/goaccess/src/pdjson.c" 3 4
       __builtin___snprintf_chk (
# 776 "project/goaccess/src/pdjson.c"
       json->errmsg
# 776 "project/goaccess/src/pdjson.c" 3 4
       , 
# 776 "project/goaccess/src/pdjson.c"
       sizeof(json->errmsg)
# 776 "project/goaccess/src/pdjson.c" 3 4
       , 0, __builtin_object_size (
# 776 "project/goaccess/src/pdjson.c"
       json->errmsg
# 776 "project/goaccess/src/pdjson.c" 3 4
       , 2 > 1 ? 1 : 0), 
# 776 "project/goaccess/src/pdjson.c"
       "%s", "expected ':' after member name"
# 776 "project/goaccess/src/pdjson.c" 3 4
       )
# 776 "project/goaccess/src/pdjson.c"
       ; };
        return JSON_ERROR;
      } else {
        json->stack[json->stack_top].count++;
        return read_value (json, next (json));
      }
    }
  }
  if (!(json->flags & (1u << 0))) { json->flags |= (1u << 0); 
# 784 "project/goaccess/src/pdjson.c" 3 4
 __builtin___snprintf_chk (
# 784 "project/goaccess/src/pdjson.c"
 json->errmsg
# 784 "project/goaccess/src/pdjson.c" 3 4
 , 
# 784 "project/goaccess/src/pdjson.c"
 sizeof(json->errmsg)
# 784 "project/goaccess/src/pdjson.c" 3 4
 , 0, __builtin_object_size (
# 784 "project/goaccess/src/pdjson.c"
 json->errmsg
# 784 "project/goaccess/src/pdjson.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 784 "project/goaccess/src/pdjson.c"
 "%s", "invalid parser state"
# 784 "project/goaccess/src/pdjson.c" 3 4
 )
# 784 "project/goaccess/src/pdjson.c"
 ; };
  return JSON_ERROR;
}

void
json_reset (json_stream * json) {
  json->stack_top = -1;
  json->ntokens = 0;
  json->flags &= ~(1u << 0);
  json->errmsg[0] = '\0';
}

enum json_type
json_skip (json_stream * json) {
  enum json_type type = json_next (json);
  size_t cnt_arr = 0;
  size_t cnt_obj = 0;
  enum json_type skip;

  for (skip = type;; skip = json_next (json)) {
    if (skip == JSON_ERROR || skip == JSON_DONE)
      return skip;

    if (skip == JSON_ARRAY) {
      ++cnt_arr;
    } else if (skip == JSON_ARRAY_END && cnt_arr > 0) {
      --cnt_arr;
    } else if (skip == JSON_OBJECT) {
      ++cnt_obj;
    } else if (skip == JSON_OBJECT_END && cnt_obj > 0) {
      --cnt_obj;
    }

    if (!cnt_arr && !cnt_obj)
      break;
  }

  return type;
}

enum json_type
json_skip_until (json_stream * json, enum json_type type) {
  while (1) {
    enum json_type skip = json_skip (json);

    if (skip == JSON_ERROR || skip == JSON_DONE)
      return skip;

    if (skip == type)
      break;
  }

  return type;
}

const char *
json_get_string (json_stream * json, size_t *length) {
  if (length != 
# 841 "project/goaccess/src/pdjson.c" 3 4
               ((void *)0)
# 841 "project/goaccess/src/pdjson.c"
                   )
    *length = json->data.string_fill;
  if (json->data.string == 
# 843 "project/goaccess/src/pdjson.c" 3 4
                          ((void *)0)
# 843 "project/goaccess/src/pdjson.c"
                              )
    return "";
  else
    return json->data.string;
}

double
json_get_number (json_stream * json) {
  char *p = json->data.string;
  return p == 
# 852 "project/goaccess/src/pdjson.c" 3 4
             ((void *)0) 
# 852 "project/goaccess/src/pdjson.c"
                  ? 0 : strtod (p, 
# 852 "project/goaccess/src/pdjson.c" 3 4
                                   ((void *)0)
# 852 "project/goaccess/src/pdjson.c"
                                       );
}

const char *
json_get_error (json_stream * json) {
  return json->flags & (1u << 0) ? json->errmsg : 
# 857 "project/goaccess/src/pdjson.c" 3 4
                                                       ((void *)0)
# 857 "project/goaccess/src/pdjson.c"
                                                           ;
}

size_t
json_get_lineno (json_stream * json) {
  return json->lineno;
}

size_t
json_get_position (json_stream * json) {
  return json->source.position;
}

size_t
json_get_depth (json_stream * json) {
  return json->stack_top + 1;
}
# 884 "project/goaccess/src/pdjson.c"
enum json_type
json_get_context (json_stream * json, size_t *count) {
  if (json->stack_top == (size_t) -1)
    return JSON_DONE;

  if (count != 
# 889 "project/goaccess/src/pdjson.c" 3 4
              ((void *)0)
# 889 "project/goaccess/src/pdjson.c"
                  )
    *count = json->stack[json->stack_top].count;

  return json->stack[json->stack_top].type;
}

int
json_source_get (json_stream * json) {
  int c = json->source.get (&json->source);
  if (c == '\n')
    json->lineno++;
  return c;
}

int
json_source_peek (json_stream * json) {
  return json->source.peek (&json->source);
}

void
json_open_buffer (json_stream * json, const void *buffer, size_t size) {
  init (json);
  json->source.get = buffer_get;
  json->source.peek = buffer_peek;
  json->source.source.buffer.buffer = (const char *) buffer;
  json->source.source.buffer.length = size;
}

void
json_open_string (json_stream * json, const char *string) {
  json_open_buffer (json, string, strlen (string));
}

void
json_open_stream (json_stream * json, FILE * stream) {
  init (json);
  json->source.get = stream_get;
  json->source.peek = stream_peek;
  json->source.source.stream.stream = stream;
}

static int
user_get (struct json_source *json) {
  return json->source.user.get (json->source.user.ptr);
}

static int
user_peek (struct json_source *json) {
  return json->source.user.peek (json->source.user.ptr);
}

void
json_open_user (json_stream * json, json_user_io get, json_user_io peek, void *user) {
  init (json);
  json->source.get = user_get;
  json->source.peek = user_peek;
  json->source.source.user.ptr = user;
  json->source.source.user.get = get;
  json->source.source.user.peek = peek;
}

void
json_set_allocator (json_stream * json, json_allocator * a) {
  json->alloc = *a;
}

void
json_set_streaming (json_stream * json, 
# 956 "project/goaccess/src/pdjson.c" 3 4
                                       _Bool 
# 956 "project/goaccess/src/pdjson.c"
                                            streaming) {
  if (streaming)
    json->flags |= (1u << 1);
  else
    json->flags &= ~(1u << 1);
}

void
json_close (json_stream * json) {
  json->alloc.free (json->stack);
  json->alloc.free (json->data.string);
}
