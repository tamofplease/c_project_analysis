# 0 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"


# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 1



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_util.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 1 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_version.h" 1 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4

# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
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








# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 244 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 1 3 4







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
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
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
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
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
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 201 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 203 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 2 3 4
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
typedef __attribute__((aligned(1))) unsigned short uut16;
typedef __attribute__((aligned(1))) unsigned int uut32;
typedef __attribute__((aligned(1))) unsigned long long uut64;
typedef __attribute__((aligned(1))) short ust16;
typedef __attribute__((aligned(1))) int ust32;
typedef __attribute__((aligned(1))) long long ust64;

typedef union {
 unsigned char v8;
 unsigned short v16;
 unsigned int v32;
 unsigned long long v64;
} utAny;

typedef struct _ut80 {
 unsigned long long Low;
 unsigned short High;
} ut80;
typedef struct _ut96 {
 unsigned long long Low;
 unsigned int High;
} ut96;
typedef struct _ut128 {
 unsigned long long Low;
 long long High;
} ut128;
typedef struct _ut256 {
 ut128 Low;
 ut128 High;
} ut256;
typedef struct _utX {
 ut80 v80;
 ut96 v96;
 ut128 v128;
 ut256 v256;
} utX;

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 67 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 142 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 1 3 4
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 3 4
static inline _Bool ST8_DIV_OVFCHK(unsigned char a, unsigned char b) { return (!b || (a == 0x80U && b == 0xFFU)); }
static inline _Bool ST16_DIV_OVFCHK(unsigned short a, unsigned short b) { return (!b || (a == 0x8000U && b == 0xFFFFU)); }
static inline _Bool ST32_DIV_OVFCHK(unsigned int a, unsigned int b) { return (!b || (a == 0x80000000U && b == 0xFFFFFFFFU)); }
static inline _Bool ST64_DIV_OVFCHK(unsigned long long a, unsigned long long b) { return (!b || (a == 0x8000000000000000ULL && b == 0xFFFFFFFFFFFFFFFFULL)); }
static inline _Bool UT8_DIV_OVFCHK(unsigned char a, unsigned char b) { (void)(a); return !b; }
static inline _Bool UT16_DIV_OVFCHK(unsigned short a, unsigned short b) { (void)(a); return !b; }
static inline _Bool UT32_DIV_OVFCHK(unsigned int a, unsigned int b) { (void)(a); return !b; }
static inline _Bool UT64_DIV_OVFCHK(unsigned long long a, unsigned long long b) { (void)(a); return !b; }


static inline _Bool ST8_MUL_OVFCHK(signed char a, signed char b) { if (a > 0) { if (b > 0) { return a > 0x7F / b; } return b < (-0x7F - 1) / a; } if (b > 0) { return a < (-0x7F - 1) / b; } return a && b < 0x7F / a; }
static inline _Bool ST16_MUL_OVFCHK(short a, short b) { if (a > 0) { if (b > 0) { return a > 0x7FFF / b; } return b < (-0x7FFF -1) / a; } if (b > 0) { return a < (-0x7FFF -1) / b; } return a && b < 0x7FFF / a; }
static inline _Bool ST32_MUL_OVFCHK(int a, int b) { if (a > 0) { if (b > 0) { return a > 0x7FFFFFFF / b; } return b < (-0x7FFFFFFF -1) / a; } if (b > 0) { return a < (-0x7FFFFFFF -1) / b; } return a && b < 0x7FFFFFFF / a; }
static inline _Bool ST64_MUL_OVFCHK(long long a, long long b) { if (a > 0) { if (b > 0) { return a > ((long long)0x7FFFFFFFFFFFFFFFULL) / b; } return b < ((long long)(-((long long)0x7FFFFFFFFFFFFFFFULL)-1)) / a; } if (b > 0) { return a < ((long long)(-((long long)0x7FFFFFFFFFFFFFFFULL)-1)) / b; } return a && b < ((long long)0x7FFFFFFFFFFFFFFFULL) / a; }
static inline _Bool SZT_MUL_OVFCHK(size_t a, size_t b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFFFFFFFFFULL / b); }
static inline _Bool UT8_MUL_OVFCHK(unsigned char a, unsigned char b) { return (a > 0 && b > 0 && a > 0xFFU / b); }
static inline _Bool UT16_MUL_OVFCHK(unsigned short a, unsigned short b) { return (a > 0 && b > 0 && a > 0xFFFFU / b); }
static inline _Bool UT32_MUL_OVFCHK(unsigned int a, unsigned int b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFU / b); }
static inline _Bool UT64_MUL_OVFCHK(unsigned long long a, unsigned long long b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFFFFFFFFFULL / b); }
# 143 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 245 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4






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

# 340 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

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
# 252 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
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

# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

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
# 253 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 255 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
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





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 332 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 350 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 359 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4






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
# 534 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 535 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4

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
# 256 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 3 4
static inline unsigned char r_read_ble8(const void *src) {
 if (!src) {
  return 0xFFU;
 }
 return *(const unsigned char *)src;
}

static inline unsigned char r_read_at_ble8(const void *src, size_t offset) {
 return r_read_ble8 (((const unsigned char*)src) + offset);
}

static inline void r_write_ble8(void *dest, unsigned char val) {
 *(unsigned char *)dest = val;
}

static inline void r_write_at_ble8(void *dest, unsigned char val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_ble8 (d, val);
}



static inline unsigned char r_read_be8(const void *src) {
 return r_read_ble8 (src);
}

static inline unsigned char r_read_at_be8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_be8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_be8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_be16(const void *src) {
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[0]) << 8) | (((unsigned short)s[1]) << 0);
}

static inline unsigned short r_read_at_be16(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be16 (s);
}

static inline void r_write_be16(void *dest, unsigned short val) {
 r_write_be8 (dest, val >> 8);
 r_write_at_be8 (dest, (unsigned char)val, sizeof (unsigned char));
}

static inline void r_write_at_be16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be16 (d, val);
}

static inline unsigned int r_read_be32(const void *src) {
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[0]) << 24) | (((unsigned int)s[1]) << 16) |
  (((unsigned int)s[2]) << 8) | (((unsigned int)s[3]) << 0);
}

static inline unsigned int r_read_at_be32(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be32 (s);
}

static inline void r_write_be32(void *dest, unsigned int val) {
 r_write_be16 (dest, val >> 16);
 r_write_at_be16 (dest, val, sizeof (unsigned short));
}

static inline void r_write_be24(void *_dest, unsigned int val) {
 unsigned char *dest = (unsigned char*)_dest;
 r_write_be8 (dest++, val >> 16);
 r_write_be8 (dest++, val >> 8);
 r_write_be8 (dest, val);
}

static inline void r_write_at_be32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be32 (d, val);
}

static inline unsigned long long r_read_be64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_be32 (src))) << 32;
 val |= r_read_at_be32 (src, sizeof (unsigned int));
 return val;
}

static inline unsigned long long r_read_at_be64(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be64 (s);
}

static inline void r_write_be64(void *dest, unsigned long long val) {
 r_write_be32 (dest, val >> 32);
 r_write_at_be32 (dest, (unsigned int)val, sizeof (unsigned int));
}

static inline void r_write_at_be64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be64 (d, val);
}



static inline unsigned char r_read_le8(const void *src) {
 if (!src) {
  return 0xFFU;
 }
 return r_read_ble8 (src);
}

static inline unsigned char r_read_at_le8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_le8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_le8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_le16(const void *src) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[1]) << 8) | (((unsigned short)s[0]) << 0);
}

static inline unsigned short r_read_at_le16(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_le16 (s);
}

static inline void r_write_le16(void *dest, unsigned short val) {
 r_write_le8 (dest, (unsigned char)val);
 r_write_at_le8 (dest, val >> 8, sizeof (unsigned char));
}

static inline void r_write_at_le16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char *)dest + offset;
 r_write_le16 (d, val);
}

static inline void r_write_le24(void *_dest, unsigned int val) {
 unsigned char* dest = (unsigned char*)_dest;
 r_write_le8 (dest++, val);
 r_write_le8 (dest++, val >> 8);
 r_write_le8 (dest, val >> 16);
}

static inline unsigned int r_read_le32(const void *src) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[3]) << 24) | (((unsigned int)s[2]) << 16) |
  (((unsigned int)s[1]) << 8) | (((unsigned int)s[0]) << 0);
}

static inline unsigned int r_read_at_le32(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_le32 (s);
}

static inline void r_write_le32(void *dest, unsigned int val) {
 r_write_le16 (dest, val);
 r_write_at_le16 (dest, val >> 16, sizeof (unsigned short));
}

static inline void r_write_at_le32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = ((unsigned char*)dest) + offset;
 r_write_le32 (d, val);
}

static inline unsigned long long r_read_le64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_at_le32 (src, sizeof (unsigned int)))) << 32;
 val |= r_read_le32 (src);
 return val;
}

static inline unsigned long long r_read_at_le64(const void *src, size_t offset) {
 const unsigned char *s = ((const unsigned char*)src) + offset;
 return r_read_le64 (s);
}

static inline void r_write_le64(void *dest, unsigned long long val) {
 r_write_le32 (dest, (unsigned int)val);
 r_write_at_le32 (dest, val >> 32, sizeof (unsigned int));
}

static inline void r_write_at_le64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_le64 (d, val);
}



static inline unsigned char r_read_me8(const void *src) {
 return src ? r_read_ble8 (src): 0xFFU;
}

static inline unsigned char r_read_at_me8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_me8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_me8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_me16(const void *src) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[0]) << 8) | (((unsigned short)s[1]) << 0);
}

static inline unsigned short r_read_at_me16(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_me16 (s);
}

static inline void r_write_me16(void *dest, unsigned short val) {
 r_write_me8 (dest, val >> 8);
 r_write_at_me8 (dest, (unsigned char)val, sizeof (unsigned char));
}

static inline void r_write_at_me16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char *)dest + offset;
 r_write_me16 (d, val);
}

static inline unsigned int r_read_me32(const void *src) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[2]) << 24) | (((unsigned int)s[1]) << 16) |
  (((unsigned int)s[0]) << 8) | (((unsigned int)s[1]) << 0);
}

static inline unsigned int r_read_at_me32(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_me32 (s);
}

static inline void r_write_me32(void *dest, unsigned int val) {
 r_write_me16 (dest, val);
 r_write_at_me16 (dest, val >> 16, sizeof (unsigned short));
}

static inline void r_write_at_me32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = ((unsigned char*)dest) + offset;
 r_write_me32 (d, val);
}

static inline unsigned long long r_read_me64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_at_me32 (src, sizeof (unsigned int)))) << 32;
 val |= r_read_me32 (src);
 return val;
}

static inline unsigned long long r_read_at_me64(const void *src, size_t offset) {
 const unsigned char *s = ((const unsigned char*)src) + offset;
 return r_read_me64 (s);
}

static inline void r_write_me64(void *dest, unsigned long long val) {
 r_write_me32 (dest, (unsigned int)val);
 r_write_at_me32 (dest, val >> 32, sizeof (unsigned int));
}

static inline void r_write_at_me64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_me64 (d, val);
}



static inline unsigned short r_read_ble16(const void *src, _Bool big_endian) {
 return big_endian? r_read_be16 (src): r_read_le16 (src);
}

static inline unsigned int r_read_ble32(const void *src, _Bool big_endian) {
 return big_endian? r_read_be32 (src): r_read_le32 (src);
}

static inline unsigned long long r_read_ble64(const void *src, _Bool big_endian) {
 return big_endian? r_read_be64 (src): r_read_le64 (src);
}

static inline unsigned short r_read_at_ble16(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be16 (src, offset) : r_read_at_le16 (src, offset);
}

static inline unsigned int r_read_at_ble32(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be32 (src, offset) : r_read_at_le32 (src, offset);
}

static inline unsigned long long r_read_at_ble64(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be64 (src, offset) : r_read_at_le64 (src, offset);
}

static inline unsigned long long r_read_ble(const void *src, _Bool big_endian, int size) {
 switch (size) {
 case 8:
  return (unsigned long long) ((const unsigned char*)src)[0];
 case 16:
  return r_read_ble16 (src, big_endian);
 case 32:
  return r_read_ble32 (src, big_endian);
 case 64:
  return r_read_ble64 (src, big_endian);
 default:
  return 0xFFFFFFFFFFFFFFFFULL;
 }
}

static inline void r_write_ble16(void *dest, unsigned short val, _Bool big_endian) {
 big_endian? r_write_be16 (dest, val): r_write_le16 (dest, val);
}

static inline void r_write_ble24(void *dest, unsigned int val, _Bool big_endian) {
 big_endian? r_write_be24 (dest, val): r_write_le24 (dest, val);
}

static inline void r_write_ble32(void *dest, unsigned int val, _Bool big_endian) {
 big_endian? r_write_be32 (dest, val): r_write_le32 (dest, val);
}

static inline void r_write_ble64(void *dest, unsigned long long val, _Bool big_endian) {
 big_endian? r_write_be64 (dest, val): r_write_le64 (dest, val);
}

static inline void r_write_ble(void *dst, unsigned long long val, _Bool big_endian, int size) {
 switch (size) {
 case 8:
  ((unsigned char*)dst)[0] = (unsigned char) val;
  break;
 case 16:
  r_write_ble16 (dst, (unsigned short) val, big_endian);
  break;
 case 24:
  r_write_ble24 (dst, (unsigned int) val, big_endian);
  break;
 case 32:
  r_write_ble32 (dst, (unsigned int) val, big_endian);
  break;
 case 64:
  r_write_ble64 (dst, val, big_endian);
  break;
 default:
  break;
 }
}
# 400 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 3 4
static inline unsigned short r_swap_ut16(unsigned short val) {
 return (val << 8) | (val >> 8 );
}

static inline short r_swap_st16(short val) {
 val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | (val >> 16);
}

static inline unsigned int r_swap_ut32(unsigned int val) {
 val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | (val >> 16);
}

static inline int r_swap_st32(int val) {
 val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | ((val >> 16) & 0xFFFF);
}

static inline unsigned long long r_swap_ut64(unsigned long long val) {
 val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
 val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
 return (val << 32) | (val >> 32);
}

static inline long long r_swap_st64(long long val) {
 val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
 val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
 return (val << 32) | ((val >> 32) & 0xFFFFFFFFULL);
}


static inline int UT64_ADD(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (0xFFFFFFFFFFFFFFFFULL - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT64_MUL(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (a && 0xFFFFFFFFFFFFFFFFULL / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT64_SUB(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT32_ADD(unsigned int *r, unsigned int a, unsigned int b) {
 if (0xFFFFFFFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT32_MUL(unsigned int *r, unsigned int a, unsigned int b) {
 if (a && 0xFFFFFFFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT32_SUB(unsigned int *r, unsigned int a, unsigned int b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT16_ADD(unsigned short *r, unsigned short a, unsigned short b) {
 if (0xFFFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT16_MUL(unsigned short *r, unsigned short a, unsigned short b) {
 if (a && 0xFFFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT16_SUB(unsigned short *r, unsigned short a, unsigned short b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT8_ADD(unsigned char *r, unsigned char a, unsigned char b) {
 if (0xFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT8_MUL(unsigned char *r, unsigned char a, unsigned char b) {
 if (a && 0xFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT8_SUB(unsigned char *r, unsigned char a, unsigned char b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}
# 257 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 289 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
typedef int (*PrintfCallback)(const char *str, ...) __attribute__ ((format (printf, 1, 2)));
# 340 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
static inline void *r_new_copy(int size, void *data) {
 void *a = malloc(size);
 if (a) {
  __builtin___memcpy_chk (a, data, size, __builtin_object_size (a, 0));
 }
 return a;
}
# 391 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
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




# 392 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 393 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 1 3 4
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack(4)
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack()
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
struct dirent { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[1024]; };
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 2 3 4




struct _telldir;


typedef struct {
 int __dd_fd;
 long __dd_loc;
 long __dd_size;
 char *__dd_buf;
 int __dd_len;
 long __dd_seek;
 __attribute__((__unused__)) long __padding;
 int __dd_flags;
 __darwin_pthread_mutex_t __dd_lock;
 struct _telldir *__dd_td;
} DIR;
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4


int closedir(DIR *) __asm("_" "closedir" );

DIR *opendir(const char *) __asm("_" "opendir" "$INODE64" );

struct dirent *readdir(DIR *) __asm("_" "readdir" "$INODE64");
int readdir_r(DIR *, struct dirent *, struct dirent **) __asm("_" "readdir_r" "$INODE64");

void rewinddir(DIR *) __asm("_" "rewinddir" "$INODE64" );

void seekdir(DIR *, long) __asm("_" "seekdir" "$INODE64" );

long telldir(DIR *) __asm("_" "telldir" "$INODE64" );












DIR *fdopendir(int) __asm("_" "fdopendir" "$INODE64" );

int alphasort(const struct dirent **, const struct dirent **) __asm("_" "alphasort" "$INODE64");
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
int dirfd(DIR *dirp) ;


int scandir(const char *, struct dirent ***,
    int (*)(const struct dirent *), int (*)(const struct dirent **, const struct dirent **)) __asm("_" "scandir" "$INODE64");
# 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4







int getdirentries(int, char *, int, long *)






      __asm("_getdirentries_is_not_available_when_64_bit_inodes_are_in_effect")



;

DIR *__opendir2(const char *, int) __asm("_" "__opendir2" "$INODE64" );


# 394 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
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


# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4


int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
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
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4



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


# 395 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 3 4
struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME = 0,

_CLOCK_MONOTONIC = 6,


_CLOCK_MONOTONIC_RAW = 4,

_CLOCK_MONOTONIC_RAW_APPROX = 5,

_CLOCK_UPTIME_RAW = 8,

_CLOCK_UPTIME_RAW_APPROX = 9,


_CLOCK_PROCESS_CPUTIME_ID = 12,

_CLOCK_THREAD_CPUTIME_ID = 16

} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);



__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);




int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4

int timespec_get(struct timespec *ts, int base);



# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4





int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);



int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


# 396 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 570 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
typedef enum {
 R_SYS_ARCH_NONE = 0,
 R_SYS_ARCH_X86,
 R_SYS_ARCH_ARM,
 R_SYS_ARCH_PPC,
 R_SYS_ARCH_M68K,
 R_SYS_ARCH_JAVA,
 R_SYS_ARCH_MIPS,
 R_SYS_ARCH_SPARC,
 R_SYS_ARCH_XAP,
 R_SYS_ARCH_MSIL,
 R_SYS_ARCH_OBJD,
 R_SYS_ARCH_BF,
 R_SYS_ARCH_SH,
 R_SYS_ARCH_AVR,
 R_SYS_ARCH_DALVIK,
 R_SYS_ARCH_Z80,
 R_SYS_ARCH_ARC,
 R_SYS_ARCH_I8080,
 R_SYS_ARCH_RAR,
 R_SYS_ARCH_8051,
 R_SYS_ARCH_TMS320,
 R_SYS_ARCH_EBC,
 R_SYS_ARCH_H8300,
 R_SYS_ARCH_CR16,
 R_SYS_ARCH_V850,
 R_SYS_ARCH_S390,
 R_SYS_ARCH_XCORE,
 R_SYS_ARCH_PROPELLER,
 R_SYS_ARCH_MSP430,
 R_SYS_ARCH_CRIS,
 R_SYS_ARCH_HPPA,
 R_SYS_ARCH_V810,
 R_SYS_ARCH_LM32,
 R_SYS_ARCH_RISCV
} RSysArch;
# 654 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
static inline void r_run_call1(void *fcn, void *arg1) {
 ((void (*)(void *))(fcn))(arg1);
}

static inline void r_run_call2(void *fcn, void *arg1, void *arg2) {
 ((void (*)(void *, void *))(fcn))(arg1, arg2);
}

static inline void r_run_call3(void *fcn, void *arg1, void *arg2, void *arg3) {
 ((void (*)(void *, void *, void *))(fcn))(arg1, arg2, arg3);
}

static inline void r_run_call4(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4) {
 ((void (*)(void *, void *, void *, void *))(fcn))(arg1, arg2, arg3, arg4);
}

static inline void r_run_call5(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
 ((void (*)(void *, void *, void *, void *, void *))(fcn))(arg1, arg2, arg3, arg4, arg5);
}

static inline void r_run_call6(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6) {
 ((void (*)(void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6);
}

static inline void r_run_call7(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

static inline void r_run_call8(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

static inline void r_run_call9(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8, void *arg9) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

static inline void r_run_call10(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8, void *arg9, void *arg10) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
# 713 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
typedef int RRef;
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 2
# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 1







# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
char *strcat_dup(char *s1, char *s2, 
# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 3 4
                                    int 
# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
                                         n_free);
char *get_hex_str(
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 3 4
                 unsigned int 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
                      hex_num);
# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 2



# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
unsigned int 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
    get_ins_len(
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                unsigned char 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                    opcode);



# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
    get_ins_part(
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                 unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                      pos, 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                           unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                                len);
# 4 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 2


# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned char 
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
   *ins_buff = (
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
                unsigned char 
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
                    *)
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
                      ((void *)0)
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
                          ;

# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned int 
# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
    ins_buff_len = 0;

static unsigned int has_failed = 0;


# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned int 
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
    get_ins_len(
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
                unsigned char 
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
                    opcode) {
 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
     val = (opcode >> 4) & 0xF;
 
# 12 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned int 
# 12 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
     len = 0;

 switch (val) {
 case 0:
 case 1:
  len = 2;
  break;
 case 2:
 case 3:
  len = 1;
  break;
 case 4:
 case 5:
 case 6:
 case 7:
  len = 3;
  break;
 case 8:
 case 9:
 case 10:
  len = 4;
  break;
 case 11:
 case 12:
 case 13:
  len = 5;
  break;
 case 14:
  len = 6;
  break;
 case 15:
  len = 7;
  break;
 }

 return len;
}


# 50 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned int 
# 50 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
    get_ins_part(
# 50 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
                 unsigned int 
# 50 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
                      pos, 
# 50 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
                           unsigned int 
# 50 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
                                len) {
 
# 51 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
unsigned int 
# 51 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
     ret = 0;
 has_failed = 0;
 if (0) {
  printf ("pos => 0x%x len => %d ins_buff_len => %d\n", pos, len, ins_buff_len);
 }

 if ((
# 57 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c" 3 4
     int
# 57 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.c"
         )pos < 0 || pos >= ins_buff_len) {
  has_failed = 1;
  return ret;
 }

 for (; len > 0; len--) {
  ret <<= 8;
  if (pos >= ins_buff_len) {
   has_failed = 1;
  } else {
   ret |= ins_buff[pos++];
  }
 }

 return ret;
}


char* ins_str[] = {
(char *)0x0,
"OOOOOOppHHHhhhhhkkkkkkkk"
,
"while (`HHHhhhhh` && (RPTC < `kkkkkkkk`)) repeat"
,
"RPTCC `kkkkkkkk`, `HHHhhhhh`"
,
(char *)0x1,
"OOOOOOOOHHHhhhhh"
,
"if (`HHHhhhhh`) return"
,
"RETCC `HHHhhhhh`"
,
(char *)0x2,
"OOOOOOOpLLLLLLLLHHHhhhhh"
,
"if (`HHHhhhhh`) goto `LLLLLLLL`"
,
"BCC `LLLLLLLL`, `HHHhhhhh`"
,
(char *)0x3,
"OOOOOOOpLLLLLLLLLLLLLLLL"
,
"`q_SAT,n`goto `LLLLLLLLLLLLLLLL`"
,
"`q_SAT,N`B `LLLLLLLLLLLLLLLL`"
,
(char *)0x4,
"OOOOOOOpLLLLLLLLLLLLLLLL"
,
"call `LLLLLLLLLLLLLLLL`"
,
"CALL `LLLLLLLLLLLLLLLL`"
,
(char *)0x5,
(char *)0x0,
"RPTL_P_64"
,
"RPTL_P_64"
,
(char *)0x6,
"OOOOOOppkkkkkkkkkkkkkkkk"
,
"repeat(`kkkkkkkkkkkkkkkk`)"
,
"RPT `kkkkkkkkkkkkkkkk`"
,
(char *)0x7,
"OOOOOOppllllllllllllllll"
,
"blockrepeat { `llllllllllllllll,i`"
,
"RPTB `llllllllllllllll`"
,
(char *)0x8,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `AAaaaaa,WACx` & (`CCccccc,WACx` <<< `SSSSSS`)"
,
"AND `CCccccc,WACx` << `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0x9,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `AAaaaaa,WACx` | (`CCccccc,WACx` <<< `SSSSSS`)"
,
"OR `CCccccc,WACx` << `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0xA,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `AAaaaaa,WACx` ^ (`CCccccc,WACx` <<< `SSSSSS`)"
,
"XOR `CCccccc,WACx` << `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0xB,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `q_SAT,(``AAaaaaa,WACx` + (`CCccccc,WACx` << `SSSSSS`)`q_SAT,)`"
,
"ADD`q_SAT` `CCccccc,WACx` << `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0xC,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `q_SAT,(``AAaaaaa,WACx` - (`CCccccc,WACx` << `SSSSSS`)`q_SAT,)`"
,
"SUB`q_SAT` `CCccccc,WACx` << `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0xD,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `q_SAT,(``CCccccc,WACx` << `SSSSSS``q_SAT,)`"
,
"SFTS`q_SAT` `CCccccc,WACx`, `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0xE,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `q_SAT,(``CCccccc,WACx` <<C `SSSSSS``q_SAT,)`"
,
"SFTSC`q_SAT` `CCccccc,WACx`, `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0xF,
"OOOOOOOOpAAaaaaapCCccccco-SSSSSS"
,
"`AAaaaaa,WACx` = `CCccccc,WACx` <<< `SSSSSS`"
,
"SFTL `CCccccc,WACx`, `SSSSSS`, `AAaaaaa,WACx`"
,
(char *)0x10,
"OOOOOOOOpAAaaaaap----------ccccc"
,
"`AAaaaaa,RLHx` = exp(`ccccc,ACx`)"
,
"EXP `ccccc,ACx`, `AAaaaaa,RLHx`"
,
(char *)0x11,
"OOOOOOOOpAAaaaaap--bbbbb---ccccc"
,
"`bbbbb,ACx` = mant(`ccccc,ACx`), `AAaaaaa,RLHx` = exp(`ccccc,ACx`)"
,
"MANT `ccccc,ACx`, `bbbbb,ACx` :: NEXP `ccccc,ACx`, `AAaaaaa,RLHx`"
,
(char *)0x12,
"OOOOOOOOpAAaaaaap-Tccccc---ddddd"
,
"`AAaaaaa,RLHx` = count(`ccccc,ACx`, `ddddd,ACx`, `T`)"
,
"BCNT `ccccc,ACx`, `ddddd,ACx`, `T`, `AAaaaaa,RLHx`"
,
(char *)0x13,
"OOOOOOOOp--aaaaap--bbbbb---cccccrrrddddd"
,
"max_diff`q_SAT,a`(`ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, pair(`rrr`))"
,
"MAXDIFF`q_SAT` `ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, pair(`rrr`)"
,
(char *)0x14,
"OOOOOOOOp--aaaaap--bbbbb---cccccrrrddddd"
,
"max_diff_dbl`q_SAT,a`(`ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, `rrr`)"
,
"DMAXDIFF`q_SAT` `ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, `rrr`"
,
(char *)0x15,
"OOOOOOOOp--aaaaap--bbbbb---cccccrrrddddd"
,
"min_diff`q_SAT,a`(`ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, pair(`rrr`))"
,
"MINDIFF`q_SAT` `ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, pair(`rrr`)"
,
(char *)0x16,
"OOOOOOOOp--aaaaap--bbbbb---cccccrrrddddd"
,
"min_diff_dbl`q_SAT,a`(`ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, `rrr`)"
,
"DMINDIFF`q_SAT` `ccccc,ACx`, `ddddd,ACx`, `aaaaa,ACx`, `bbbbb,ACx`, `rrr`"
,
(char *)0x17,
"OOOOOOOOpCCcccccpDDdddddo-$-JJ-T"
,
"`T` = `$`(`CCccccc,Rx` `JJ` `DDddddd,Rx`)"
,
"CMP`$` `CCccccc,Rx` `JJ` `DDddddd,Rx`, `T`"
,
(char *)0x18,
"OOOOOOOOpCCcccccpDDdddddo-$-JJTT"
,
"`TT,2` = `TT,1` & `$`(`CCccccc,Rx` `JJ` `DDddddd,Rx`)"
,
"CMPAND`$` `CCccccc,Rx` `JJ` `DDddddd,Rx`, `TT,1`, `TT,2`"
,
(char *)0x19,
"OOOOOOOOpCCcccccpDDdddddo-$-JJTT"
,
"`TT,2` = !`TT,1` & `$`(`CCccccc,Rx` `JJ` `DDddddd,Rx`)"
,
"CMPAND`$` `CCccccc,Rx` `JJ` `DDddddd,Rx`, !`TT,1`, `TT,2`"
,
(char *)0x1A,
"OOOOOOOOpCCcccccpDDdddddo-$-JJTT"
,
"`TT,2` = `TT,1` | `$`(`CCccccc,Rx` `JJ` `DDddddd,Rx`)"
,
"CMPOR`$` `CCccccc,Rx` `JJ` `DDddddd,Rx`, `TT,1`, `TT,2`"
,
(char *)0x1B,
"OOOOOOOOpCCcccccpDDdddddo-$-JJTT"
,
"`TT,2` = !`TT,1` | `$`(`CCccccc,Rx` `JJ` `DDddddd,Rx`)"
,
"CMPOR`$` `CCccccc,Rx` `JJ` `DDddddd,Rx`, !`TT,1`, `TT,2`"
,
(char *)0x1C,
"OOOOOOOO-AAaaaaapCCccccc------VV"
,
"`AAaaaaa,Rx` = `VV,2` \\ `CCccccc,Rx` \\ `VV,1`"
,
"ROL `VV,2`, `CCccccc,Rx`, `VV,1`, `AAaaaaa,Rx`"
,
(char *)0x1D,
"OOOOOOOO-AAaaaaapCCccccc------VV"
,
"`AAaaaaa,Rx` = `VV,1` // `CCccccc,Rx` // `VV,2`"
,
"ROR `VV,1`, `CCccccc,Rx`, `VV,2`, `AAaaaaa,Rx`"
,
(char *)0x1E,
"OOOOOOOOp-Aaaaaap-Cccccc"
,
"mar(`q_CIRC,(``q_LINR,(``Aaaaaa,WDAx` + `Cccccc,WDAx``q_CIRC,)``q_LINR,)`)"
,
"AADD`q_CIRC``q_LINR` `Cccccc,WDAx`, `Aaaaaa,WDAx`"
,
(char *)0x1F,
"OOOOOOOOp-Aaaaaap-Cccccc"
,
"mar(`q_CIRC,(``q_LINR,(``Aaaaaa,WDAx` = `Cccccc,WDAx``q_CIRC,)``q_LINR,)`)"
,
"AMOV`q_CIRC``q_LINR` `Cccccc,WDAx`, `Aaaaaa,WDAx`"
,
(char *)0x20,
"OOOOOOOOp-Aaaaaap-Cccccc"
,
"mar(`q_CIRC,(``q_LINR,(``Aaaaaa,WDAx` - `Cccccc,WDAx``q_CIRC,)``q_LINR,)`)"
,
"ASUB`q_CIRC``q_LINR` `Cccccc,WDAx`, `Aaaaaa,WDAx`"
,
(char *)0x21,
"OOOOOOOOppAaaaaakkkkkkkkkkkkkkkk"
,
"mar(`q_CIRC,(``q_LINR,(``Aaaaaa,WDAx` + `kkkkkkkkkkkkkkkk``q_CIRC,)``q_LINR,)`)"
,
"AADD`q_CIRC``q_LINR` `kkkkkkkkkkkkkkkk`, `Aaaaaa,WDAx`"
,
(char *)0x22,
(char *)0x0,
"MAR_K_MX"
,
"MAR_K_MX"
,
(char *)0x23,
"OOOOOOOOppAaaaaakkkkkkkkkkkkkkkk"
,
"mar(`q_CIRC,(``q_LINR,(``Aaaaaa,WDAx` - `kkkkkkkkkkkkkkkk``q_CIRC,)``q_LINR,)`)"
,
"ASUB`q_CIRC``q_LINR` `kkkkkkkkkkkkkkkk`, `Aaaaaa,WDAx`"
,
(char *)0x24,
(char *)0x0,
"MAR_DA_AY"
,
"MAR_DA_AY"
,
(char *)0x25,
(char *)0x0,
"MAR_DA_MY"
,
"MAR_DA_MY"
,
(char *)0x26,
(char *)0x0,
"MAR_DA_SY"
,
"MAR_DA_SY"
,
(char *)0x27,
(char *)0x0,
"MAR_K_AY"
,
"MAR_K_AY"
,
(char *)0x28,
(char *)0x0,
"MAR_K_MY"
,
"MAR_K_MY"
,
(char *)0x29,
(char *)0x0,
"MAR_K_SY"
,
"MAR_K_SY"
,
(char *)0x2A,
(char *)0x0,
"LD_RPK_MDP"
,
"LD_RPK_MDP"
,
(char *)0x2B,
(char *)0x0,
"LD_RPK_MDP05"
,
"LD_RPK_MDP05"
,
(char *)0x2C,
(char *)0x0,
"LD_RPK_MDP67"
,
"LD_RPK_MDP67"
,
(char *)0x2D,
(char *)0x0,
"LD_RPK_PDP"
,
"LD_RPK_PDP"
,
(char *)0x2E,
(char *)0x0,
"LD_BK_03"
,
"LD_BK_03"
,
(char *)0x2F,
(char *)0x0,
"LD_BK_47"
,
"LD_BK_47"
,
(char *)0x30,
(char *)0x0,
"LD_BK_C"
,
"LD_BK_C"
,
(char *)0x31,
(char *)0x0,
"LD_BK_CSR"
,
"LD_BK_CSR"
,
(char *)0x32,
(char *)0x0,
"LD_BK_BR0"
,
"LD_BK_BR0"
,
(char *)0x33,
(char *)0x0,
"LD_BK_BR1"
,
"LD_BK_BR1"
,
(char *)0x34,
"OOOOOOOOpp-kkkkk"
,
"sim_trig"
,
"SIM_TRIG"
,
(char *)0x35,
(char *)0x0,
"AND_RBK"
,
"AND_RBK"
,
(char *)0x36,
(char *)0x0,
"OR_RBK"
,
"OR_RBK"
,
(char *)0x37,
(char *)0x0,
"XOR_RBK"
,
"XOR_RBK"
,
(char *)0x38,
"OOOOOOOO-/%aaaaap--------CCcccccKKKKKKKK"
,
"`aaaaa,ACx` = `%,(``/,(``CCccccc,MRx` * `KKKKKKKK``/,)``%,)`"
,
"MPYK`/``q_SAT``%` `KKKKKKKK`, `CCccccc,MRx`, `aaaaa,ACx`"
,
(char *)0x39,
"OOOOOOOO-/%aaaaap--ccccc-DDdddddKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` + `/,(``DDddddd,MRx` * `KKKKKKKK``/,)``%,)``q_SAT,)`"
,
"MACK`/``q_SAT``%` `KKKKKKKK`, `DDddddd,MRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x3A,
"OOOOOOpp"
,
"nop"
,
"NOP"
,
(char *)0x3B,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,RAx` = `q_SAT,(``CCccccc,RAx``q_SAT,)`"
,
"MOV`q_SAT` `CCccccc,RAx`, `AAaaaaa,RAx`"
,
(char *)0x3C,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `q_SAT,(``AAaaaaa,Rx` + `CCccccc,Rx``q_SAT,)`"
,
"ADD`q_SAT` `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x3D,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `q_SAT,(``AAaaaaa,Rx` - `CCccccc,Rx``q_SAT,)`"
,
"SUB`q_SAT` `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x3E,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `AAaaaaa,Rx` & `CCccccc,Rx`"
,
"AND `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x3F,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `AAaaaaa,Rx` | `CCccccc,Rx`"
,
"OR `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x40,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `AAaaaaa,Rx` ^ `CCccccc,Rx`"
,
"XOR `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x41,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = max(`CCccccc,Rx`, `AAaaaaa,Rx`)"
,
"MAX `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x42,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = min(`CCccccc,Rx`, `AAaaaaa,Rx`)"
,
"MIN `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x43,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `q_SAT,(`|`CCccccc,Rx`|`q_SAT,)`"
,
"ABS`q_SAT` `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x44,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = `q_SAT,(`-`CCccccc,Rx``q_SAT,)`"
,
"NEG`q_SAT` `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x45,
"OOOOOOOopAAaaaaapCCccccc"
,
"`AAaaaaa,Rx` = ~`CCccccc,Rx`"
,
"NOT `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0x46,
"OOOOOOOp-CCccccc-DDddddd"
,
"push(`CCccccc,RLHx`, `DDddddd,RLHx`)"
,
"PSH `CCccccc,RLHx`, `DDddddd,RLHx`"
,
(char *)0x47,
"OOOOOOOp-AAaaaaa-BBbbbbb"
,
"`AAaaaaa,RLHx`, `BBbbbbb,RLHx` = pop()"
,
"POP `AAaaaaa,RLHx`, `BBbbbbb,RLHx`"
,
(char *)0x48,
"OOOOOOOOpAAaaaaap-o-kkkk"
,
"`AAaaaaa,Rx` = `kkkk`"
,
"MOV `kkkk`, `AAaaaaa,Rx`"
,
(char *)0x49,
"OOOOOOOOpAAaaaaap-o-kkkk"
,
"`AAaaaaa,Rx` = `kkkk,-`"
,
"MOV `kkkk,-`, `AAaaaaa,Rx`"
,
(char *)0x4A,
"OOOOOOOOpAAaaaaap-o-kkkk"
,
"`AAaaaaa,Rx` = `q_SAT,(``AAaaaaa,Rx` + `kkkk``q_SAT,)`"
,
"ADD`q_SAT` `kkkk`, `AAaaaaa,Rx`"
,
(char *)0x4B,
"OOOOOOOOpAAaaaaap-o-kkkk"
,
"`AAaaaaa,Rx` = `q_SAT,(``AAaaaaa,Rx` - `kkkk``q_SAT,)`"
,
"SUB`q_SAT` `kkkk`, `AAaaaaa,Rx`"
,
(char *)0x4C,
(char *)0x0,
"MV_AC_R"
,
"MV_AC_R"
,
(char *)0x4D,
"OOOOOOOOpAAaaaaap-o-----"
,
"`AAaaaaa,Rx` = `q_SAT,(``AAaaaaa,Rx` >> #1`q_SAT,)`"
,
"SFTS `AAaaaaa,Rx`, #-1"
,
(char *)0x4E,
"OOOOOOOOpAAaaaaap-o-----"
,
"`AAaaaaa,Rx` = `q_SAT,(``AAaaaaa,Rx` << #1`q_SAT,)`"
,
"SFTS`q_SAT` `AAaaaaa,Rx`, #1"
,
(char *)0x4F,
(char *)0x0,
"MV_SP_R"
,
"MV_SP_R"
,
(char *)0x50,
(char *)0x0,
"MV_SSP_R"
,
"MV_SSP_R"
,
(char *)0x51,
(char *)0x0,
"MV_CDP_R"
,
"MV_CDP_R"
,
(char *)0x52,
(char *)0x0,
"MV_BRC0_R"
,
"MV_BRC0_R"
,
(char *)0x53,
(char *)0x0,
"MV_BRC1_R"
,
"MV_BRC1_R"
,
(char *)0x54,
(char *)0x0,
"MV_RPTC_R"
,
"MV_RPTC_R"
,
(char *)0x55,
"OOOOOOOOppq-kkkk"
,
"bit(ST0, #`kkkk,ST0`) = #0"
,
"BCLR `kkkk,ST0`, ST0_55"
,
(char *)0x56,
"OOOOOOOOppq-kkkk"
,
"bit(ST0, #`kkkk,ST0`) = #1"
,
"BSET `kkkk,ST0`, ST0_55"
,
(char *)0x57,
"OOOOOOOOppq-kkkk"
,
"bit(ST1, #`kkkk,ST1`) = #0"
,
"BCLR `kkkk,ST1`, ST1_55"
,
(char *)0x58,
"OOOOOOOOppq-kkkk"
,
"bit(ST1, #`kkkk,ST1`) = #1"
,
"BSET `kkkk,ST1`, ST1_55"
,
(char *)0x59,
"OOOOOOOOppq-kkkk"
,
"bit(ST2, #`kkkk,ST2`) = #0"
,
"BCLR `kkkk,ST2`, ST2_55"
,
(char *)0x5A,
"OOOOOOOOppq-kkkk"
,
"bit(ST2, #`kkkk,ST2`) = #1"
,
"BSET `kkkk,ST2`, ST2_55"
,
(char *)0x5B,
"OOOOOOOOppq-kkkk"
,
"bit(ST3, #`kkkk,ST3`) = #0"
,
"BCLR `kkkk,ST3`, ST3_55"
,
(char *)0x5C,
"OOOOOOOOppq-kkkk"
,
"bit(ST3, #`kkkk,ST3`) = #1"
,
"BSET `kkkk,ST3`, ST3_55"
,
(char *)0x5D,
(char *)0x0,
"eallow()"
,
"EALLOW__"
,
(char *)0x5E,
(char *)0x0,
"edis()"
,
"EDIS__"
,
(char *)0x5F,
"OOOOOOOOppqq----"
,
"aborti()"
,
"ABORTI__"
,
(char *)0x60,
"OOOOOOOOppqq----"
,
"estop_1()"
,
"ESTOP_INC"
,
(char *)0x61,
"OOOOOOOOpp------"
,
"repeat(CSR) "
,
"RPT CSR"
,
(char *)0x62,
"OOOOOOOOpp-ccccc"
,
"repeat(CSR), CSR += `ccccc,DAx`"
,
"RPTADD CSR, `ccccc,DAx`"
,
(char *)0x63,
"OOOOOOOOpp--kkkk"
,
"repeat(CSR), CSR += `kkkk`"
,
"RPTADD CSR, `kkkk`"
,
(char *)0x64,
"OOOOOOOOpp--kkkk"
,
"repeat(CSR), CSR -= `kkkk`"
,
"RPTSUB CSR, `kkkk`"
,
(char *)0x65,
"OOOOOOpp"
,
"return"
,
"RET"
,
(char *)0x66,
"OOOOOOOOppqq----"
,
"return_int"
,
"RETI"
,
(char *)0x67,
(char *)0x0,
"SWT_P_RPT"
,
"SWT_P_RPT"
,
(char *)0x68,
(char *)0x0,
"BR_P_S"
,
"BR_P_S"
,
(char *)0x69,
"OOOOOOpp--------llllllll"
,
"localrepeat { `llllllll,i`"
,
"RPTBLOCAL `llllllll`"
,
(char *)0x6A,
(char *)0x0,
"RPT_P_BK"
,
"RPT_P_BK"
,
(char *)0x6B,
"OOOOOOOOKKKKKKKK"
,
"SP = SP + `KKKKKKKK`"
,
"AADD `KKKKKKKK`, SP"
,
(char *)0x6C,
"OOOOOOOOpAAaaaaap-o-----"
,
"`AAaaaaa,Rx` = `AAaaaaa,Rx` <<< #1"
,
"SFTL `AAaaaaa,Rx`, #1"
,
(char *)0x6D,
"OOOOOOOOpAAaaaaap-o-----"
,
"`AAaaaaa,Rx` = `AAaaaaa,Rx` >>> #1"
,
"SFTL `AAaaaaa,Rx`, #-1"
,
(char *)0x6E,
"OOOOOOOpAAAaaaaa"
,
"`AAAaaaaa,ALLx` = `AAAaaaaa,d(ALLx`pop()`AAAaaaaa,)ALLx`"
,
"POP `AAAaaaaa,d(ALLx``AAAaaaaa,ALLx``AAAaaaaa,)ALLx`"
,
(char *)0x6F,
(char *)0x0,
"DPOPR_SPR_DB"
,
"DPOPR_SPR_DB"
,
(char *)0x70,
"OOOOOOOOp-Aaaaaa"
,
"`Aaaaaa,XRx` = popboth()"
,
"POPBOTH `Aaaaaa,XRx`"
,
(char *)0x71,
"OOOOOOOOp-Cccccc"
,
"pshboth(`Cccccc,XRx`)"
,
"PSHBOTH `Cccccc,XRx`"
,
(char *)0x72,
"OOOOOOOpCCCccccc"
,
"`CCCccccc,d(ALLx`push(`CCCccccc,ALLx`)`CCCccccc,)ALLx`"
,
"PSH `CCCccccc,d(ALLx``CCCccccc,ALLx``CCCccccc,)ALLx`"
,
(char *)0x73,
(char *)0x0,
"DPSHR_SPW_DB"
,
"DPSHR_SPW_DB"
,
(char *)0x74,
(char *)0x0,
"MV_R_ACH"
,
"MV_R_ACH"
,
(char *)0x75,
(char *)0x0,
"MV_R_SP"
,
"MV_R_SP"
,
(char *)0x76,
(char *)0x0,
"MV_R_SSP"
,
"MV_R_SSP"
,
(char *)0x77,
(char *)0x0,
"MV_R_CDP"
,
"MV_R_CDP"
,
(char *)0x78,
(char *)0x0,
"MV_R_CSR"
,
"MV_R_CSR"
,
(char *)0x79,
(char *)0x0,
"MV_R_BRC1"
,
"MV_R_BRC1"
,
(char *)0x7A,
(char *)0x0,
"MV_R_BRC0"
,
"MV_R_BRC0"
,
(char *)0x7B,
"OOOOOOOOp/%aaaaapCCccccc"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` + `/,(`|`CCccccc,MAx`|`/,)``%,)``q_SAT,)`"
,
"ADD`/``q_SAT``%`V `CCccccc,MAx`, `aaaaa,ACx`"
,
(char *)0x7C,
(char *)0x0,
"SQURA_R_RR"
,
"SQURA_R_RR"
,
(char *)0x7D,
(char *)0x0,
"SQURS_R_RR"
,
"SQURS_R_RR"
,
(char *)0x7E,
(char *)0x0,
"MPY_R_RR_AC"
,
"MPY_R_RR_AC"
,
(char *)0x7F,
(char *)0x0,
"SQUR_R_RR"
,
"SQUR_R_RR"
,
(char *)0x80,
"OOOOOOOOp-%aaaaap--ccccc"
,
"`aaaaa,ACx` = `q_SAT,(`rnd(`ccccc,ACx`)`q_SAT,)`"
,
"ROUND`q_SAT` `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x81,
"OOOOOOOOp-%aaaaap--ccccc"
,
"`aaaaa,ACx` = saturate(`%,(``ccccc,ACx``%,)`)"
,
"SAT`%` `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x82,
"OOOOOOO$p/%aaaaapCCccccc#DDddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` + `/,(``$,(``CCccccc,MRx``$,)` * `#,(``DDddddd,MAx``#,)``/,)``%,)``q_SAT,)`"
,
"MAC`/``q_SAT``%` `$,(``CCccccc,MRx``$,)`, `#,(``DDddddd,MAx``#,)`, `aaaaa,ACx`"
,
(char *)0x83,
"OOOOOOO$p/%aaaaapCCccccc#DDddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` - `/,(``$,(``CCccccc,MRx``$,)` * `#,(``DDddddd,MAx``#,)``/,)``%,)``q_SAT,)`"
,
"MAS`/``q_SAT``%` `#,(``DDddddd,MAx``#,)`, `$,(``CCccccc,MRx``$,)`, `aaaaa,ACx`"
,
(char *)0x84,
"OOOOOOO$p/%aaaaapCCccccc#DDddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``/,(``$,(``CCccccc,MRx``$,)` * `#,(``DDddddd,MAx``#,)``/,)``%,)``q_SAT,)`"
,
"MPY`/``q_SAT``%` `#,(``DDddddd,MAx``#,)`, `$,(``CCccccc,MRx``$,)`, `aaaaa,ACx`"
,
(char *)0x85,
"OOOOOOO-p/%aaaaapDDddddd---ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` + `/,(``DDddddd,MRx` * `aaaaa,ACx``/,)``%,)``q_SAT,)`"
,
"MAC`/``q_SAT``%` `aaaaa,ACx`, `DDddddd,MRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x86,
"OOOOOOOOpAAaaaaapCCcccccoNNnnnnn"
,
"`AAaaaaa,WACx` = `q_SAT,(``AAaaaaa,WACx` + (`CCccccc,WACx` << `NNnnnnn,SRx`)`q_SAT,)`"
,
"ADD`q_SAT` `CCccccc,WACx` << `NNnnnnn,SRx`, `AAaaaaa,WACx`"
,
(char *)0x87,
"OOOOOOOOpAAaaaaapCCcccccoNNnnnnn"
,
"`AAaaaaa,WACx` = `q_SAT,(``AAaaaaa,WACx` - (`CCccccc,WACx` << `NNnnnnn,SRx`)`q_SAT,)`"
,
"SUB`q_SAT` `CCccccc,WACx` << `NNnnnnn,SRx`, `AAaaaaa,WACx`"
,
(char *)0x88,
"OOOOOOOOp00aaaaap-Taaaaa--------"
,
"`aaaaa,ACx` = sftc(`aaaaa,ACx`, `T`)"
,
"SFTCC `aaaaa,ACx`, `T`"
,
(char *)0x89,
"OOOOOOOOpAAaaaaapCCcccccoNNnnnnn"
,
"`AAaaaaa,WACx` = `CCccccc,WACx` <<< `NNnnnnn,SRx`"
,
"SFTL `CCccccc,WACx`, `NNnnnnn,SRx`, `AAaaaaa,WACx`"
,
(char *)0x8A,
"OOOOOOOOpAAaaaaapCCcccccoNNnnnnn"
,
"`AAaaaaa,WACx` = `q_SAT,(``CCccccc,WACx` << `NNnnnnn,SRx``q_SAT,)`"
,
"SFTS`q_SAT` `CCccccc,WACx`, `NNnnnnn,SRx`, `AAaaaaa,WACx`"
,
(char *)0x8B,
"OOOOOOOOpAAaaaaapCCcccccoNNnnnnn"
,
"`AAaaaaa,WACx` = `q_SAT,(``CCccccc,WACx` <<C `NNnnnnn,SRx``q_SAT,)`"
,
"SFTSC`q_SAT` `CCccccc,WACx`, `NNnnnnn,SRx`, `AAaaaaa,WACx`"
,
(char *)0x8C,
"OOOOOOOOpp-kkkkk"
,
"swap(`kkkkk,!`)"
,
"SWAP `kkkkk,!`"
,
(char *)0x8D,
(char *)0x0,
"COPR_16"
,
"COPR_16"
,
(char *)0x8E,
"OOOOOOOOppqq----"
,
"nop_16"
,
"NOP_16"
,
(char *)0x8F,
(char *)0x0,
"BRC_P_SD"
,
"BRC_P_SD"
,
(char *)0x90,
"OOOOOOOpllllllllllllllllllllllllHHHhhhhh"
,
"if (`HHHhhhhh`) goto `llllllllllllllllllllllll`"
,
"BCC `llllllllllllllllllllllll`, `HHHhhhhh`"
,
(char *)0x91,
"OOOOOOOpllllllllllllllllllllllllHHHhhhhh"
,
"if (`HHHhhhhh`) call `llllllllllllllllllllllll`"
,
"CALLCC `llllllllllllllllllllllll`, `HHHhhhhh`"
,
(char *)0x92,
"OOOOOOFpllllllllllllllllllllllll"
,
"`q_SAT,n`goto `llllllllllllllllllllllll``F`"
,
"`q_SAT,N`B `llllllllllllllllllllllll``F`"
,
(char *)0x93,
"OOOOOOFpllllllllllllllllllllllll"
,
"call `llllllllllllllllllllllll``F`"
,
"CALL `llllllllllllllllllllllll``F`"
,
(char *)0x94,
"OOOOOOOpLLLLLLLLLLLLLLLLHHHhhhhh"
,
"if (`HHHhhhhh`) goto `LLLLLLLLLLLLLLLL`"
,
"BCC `LLLLLLLLLLLLLLLL`, `HHHhhhhh`"
,
(char *)0x95,
"OOOOOOOpLLLLLLLLLLLLLLLLHHHhhhhh"
,
"if (`HHHhhhhh`) call `LLLLLLLLLLLLLLLL`"
,
"CALLCC `LLLLLLLLLLLLLLLL`, `HHHhhhhh`"
,
(char *)0x96,
"OOOOOOK$JCCcccccJKKKKKKKLLLLLLLLLLLLLLLL"
,
"compare (`$,(``CCccccc,RAx` `JJ` `KKKKKKKK``$,)`) goto `LLLLLLLLLLLLLLLL`"
,
"BCC`$` `LLLLLLLLLLLLLLLL`, `CCccccc,RAx` `JJ` `KKKKKKKK`"
,
(char *)0x97,
"OOOOOOOopssaaaaapsscccccKKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`KKKKKKKKKKKKKKKK` << `ssss`)`q_SAT,)`"
,
"ADD`q_SAT` `KKKKKKKKKKKKKKKK` << `ssss`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x98,
"OOOOOOOopssaaaaapsscccccKKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - (`KKKKKKKKKKKKKKKK` << `ssss`)`q_SAT,)`"
,
"SUB`q_SAT` `KKKKKKKKKKKKKKKK` << `ssss`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x99,
"OOOOOOOopssaaaaapssccccckkkkkkkkkkkkkkkk"
,
"`aaaaa,ACx` = `ccccc,ACx` & (`kkkkkkkkkkkkkkkk` <<< `ssss`)"
,
"AND `kkkkkkkkkkkkkkkk` << `ssss`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x9A,
"OOOOOOOopssaaaaapssccccckkkkkkkkkkkkkkkk"
,
"`aaaaa,ACx` = `ccccc,ACx` | (`kkkkkkkkkkkkkkkk` <<< `ssss`)"
,
"OR `kkkkkkkkkkkkkkkk` << `ssss`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x9B,
"OOOOOOOopssaaaaapssccccckkkkkkkkkkkkkkkk"
,
"`aaaaa,ACx` = `ccccc,ACx` ^ (`kkkkkkkkkkkkkkkk` <<< `ssss`)"
,
"XOR `kkkkkkkkkkkkkkkk` << `ssss`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x9C,
"OOOOOOOopssaaaaapss-----KKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `KKKKKKKKKKKKKKKK` << `ssss`"
,
"MOV `KKKKKKKKKKKKKKKK` << `ssss`, `aaaaa,ACx`"
,
(char *)0x9D,
"OOOOOOOO-AAaaaaap11ccccckkkkkkkkkkkkkkkk"
,
"`AAaaaaa,Rx` = field_extract(`ccccc,ACx`.L, `kkkkkkkkkkkkkkkk`)"
,
"BFXTR `kkkkkkkkkkkkkkkk`, `ccccc,ACx`, `AAaaaaa,Rx`"
,
(char *)0x9E,
"OOOOOOOO-AAaaaaap11ccccckkkkkkkkkkkkkkkk"
,
"`AAaaaaa,Rx` = field_expand(`ccccc,ACx`.L, `kkkkkkkkkkkkkkkk`)"
,
"BFXPA `kkkkkkkkkkkkkkkk`, `ccccc,ACx`, `AAaaaaa,Rx`"
,
(char *)0x9F,
"OOOOOOOO-AAaaaaaKKKKKKKKKKKKKKKK"
,
"`AAaaaaa,Rx` = `q_SAT,(``KKKKKKKKKKKKKKKK``q_SAT,)`"
,
"MOV`q_SAT` `KKKKKKKKKKKKKKKK`, `AAaaaaa,Rx`"
,
(char *)0xA0,
"OOOOOOOOpp-aaaaakkkkkkkkkkkkkkkk"
,
"mar(`aaaaa,DAx` = `kkkkkkkkkkkkkkkk`)"
,
"AMOV `kkkkkkkkkkkkkkkk`, `aaaaa,DAx`"
,
(char *)0xA1,
(char *)0x0,
"LD_RPK_DP"
,
"LD_RPK_DP"
,
(char *)0xA2,
(char *)0x0,
"LD_RPK_SSP"
,
"LD_RPK_SSP"
,
(char *)0xA3,
(char *)0x0,
"LD_RPK_CDP"
,
"LD_RPK_CDP"
,
(char *)0xA4,
(char *)0x0,
"LD_RPK_BF01"
,
"LD_RPK_BF01"
,
(char *)0xA5,
(char *)0x0,
"LD_RPK_BF23"
,
"LD_RPK_BF23"
,
(char *)0xA6,
(char *)0x0,
"LD_RPK_BF45"
,
"LD_RPK_BF45"
,
(char *)0xA7,
(char *)0x0,
"LD_RPK_BF67"
,
"LD_RPK_BF67"
,
(char *)0xA8,
(char *)0x0,
"LD_RPK_BFC"
,
"LD_RPK_BFC"
,
(char *)0xA9,
(char *)0x0,
"LD_RPK_SP"
,
"LD_RPK_SP"
,
(char *)0xAA,
"OOOOOOOO-/%aaaaap--------CCcccccKKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``/,(``CCccccc,MRx` * `KKKKKKKKKKKKKKKK``/,)``%,)``q_SAT,)`"
,
"MPYK`/``q_SAT``%` `KKKKKKKKKKKKKKKK`, `CCccccc,MRx`, `aaaaa,ACx`"
,
(char *)0xAB,
"OOOOOOOO-/%aaaaap--ccccc-DDdddddKKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` + `/,(``DDddddd,MRx` * `KKKKKKKKKKKKKKKK``/,)``%,)``q_SAT,)`"
,
"MACK`/``q_SAT``%` `KKKKKKKKKKKKKKKK`, `DDddddd,MRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xAC,
"OOOOOOOop--aaaaap--cccccKKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`KKKKKKKKKKKKKKKK` << #16)`q_SAT,)`"
,
"ADD`q_SAT` `KKKKKKKKKKKKKKKK` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xAD,
"OOOOOOOop--aaaaap--cccccKKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - (`KKKKKKKKKKKKKKKK` << #16)`q_SAT,)`"
,
"SUB`q_SAT` `KKKKKKKKKKKKKKKK` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xAE,
"OOOOOOOop--aaaaap--ccccckkkkkkkkkkkkkkkk"
,
"`aaaaa,ACx` = `ccccc,ACx` & (`kkkkkkkkkkkkkkkk` <<< #16)"
,
"AND `kkkkkkkkkkkkkkkk` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xAF,
"OOOOOOOop--aaaaap--ccccckkkkkkkkkkkkkkkk"
,
"`aaaaa,ACx` = `ccccc,ACx` | (`kkkkkkkkkkkkkkkk` <<< #16)"
,
"OR `kkkkkkkkkkkkkkkk` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xB0,
"OOOOOOOop--aaaaap--ccccckkkkkkkkkkkkkkkk"
,
"`aaaaa,ACx` = `ccccc,ACx` ^ (`kkkkkkkkkkkkkkkk` <<< #16)"
,
"XOR `kkkkkkkkkkkkkkkk` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xB1,
"OOOOOOOop--aaaaap-------KKKKKKKKKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``KKKKKKKKKKKKKKKK` << #16`q_SAT,)`"
,
"MOV`q_SAT` `KKKKKKKKKKKKKKKK` << #16, `aaaaa,ACx`"
,
(char *)0xB2,
"OOOOOOOOppqq----"
,
"idle"
,
"IDLE"
,
(char *)0xB3,
"OOOOOOOopAAaaaaapCCcccccKKKKKKKKKKKKKKKK"
,
"`AAaaaaa,Rx` = `q_SAT,(``CCccccc,Rx` + `KKKKKKKKKKKKKKKK``q_SAT,)`"
,
"ADD`q_SAT` `KKKKKKKKKKKKKKKK`, `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0xB4,
"OOOOOOOopAAaaaaapCCcccccKKKKKKKKKKKKKKKK"
,
"`AAaaaaa,Rx` = `q_SAT,(``CCccccc,Rx` - `KKKKKKKKKKKKKKKK``q_SAT,)`"
,
"SUB`q_SAT` `KKKKKKKKKKKKKKKK`, `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0xB5,
"OOOOOOOopAAaaaaapCCccccckkkkkkkkkkkkkkkk"
,
"`AAaaaaa,Rx` = `CCccccc,Rx` & `kkkkkkkkkkkkkkkk`"
,
"AND `kkkkkkkkkkkkkkkk`, `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0xB6,
"OOOOOOOopAAaaaaapCCccccckkkkkkkkkkkkkkkk"
,
"`AAaaaaa,Rx` = `CCccccc,Rx` | `kkkkkkkkkkkkkkkk`"
,
"OR `kkkkkkkkkkkkkkkk`, `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0xB7,
"OOOOOOOopAAaaaaapCCccccckkkkkkkkkkkkkkkk"
,
"`AAaaaaa,Rx` = `CCccccc,Rx` ^ `kkkkkkkkkkkkkkkk`"
,
"XOR `kkkkkkkkkkkkkkkk`, `CCccccc,Rx`, `AAaaaaa,Rx`"
,
(char *)0xB8,
(char *)0x0,
"LMVM_MM_L"
,
"LMVM_MM_L"
,
(char *)0xB9,
(char *)0x0,
"MVM_MM_YX"
,
"MVM_MM_YX"
,
(char *)0xBA,
"OOOOOOOO-XXXxxxxp--ccccc-YYYyyyy"
,
"`XXXxxxx,w` = LO(`ccccc,ACx`), `YYYyyyy,w` = HI(`ccccc,ACx`)"
,
"MOV `ccccc,ACx`, `XXXxxxx,w`, `YYYyyyy,w`"
,
(char *)0xBB,
"OOOOOOOOpXXXxxxxp00aaaaa-YYYyyyy"
,
"`aaaaa,ACx` = `q_SAT,(`(`XXXxxxx,r` << #16) + (`YYYyyyy,r` << #16)`q_SAT,)`"
,
"ADD`q_SAT` `XXXxxxx,r` << #16, `YYYyyyy,r` << #16, `aaaaa,ACx`"
,
(char *)0xBC,
"OOOOOOOOpXXXxxxxp00aaaaa-YYYyyyy"
,
"`aaaaa,ACx` = `q_SAT,(`(`XXXxxxx,r` << #16) - (`YYYyyyy,r` << #16)`q_SAT,)`"
,
"SUB`q_SAT` `XXXxxxx,r` << #16, `YYYyyyy,r` << #16, `aaaaa,ACx`"
,
(char *)0xBD,
"OOOOOOOO-XXXxxxxp--aaaaa-YYYyyyy"
,
"LO(`aaaaa,ACx`) = `q_SAT,(``XXXxxxx,r``q_SAT,)`, HI(`aaaaa,ACx`) = `q_SAT,(``YYYyyyy,r``q_SAT,)`"
,
"MOV`q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`"
,
(char *)0xBE,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xBF,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xC0,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xC1,
"OOOOOOO-pXXXxxxxp4$-----%YYYyyyyqq#aaaaa/ZZZzzzz"
,
"mar(`XXXxxxx,r`), `aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``YYYyyyy,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"AMAR `XXXxxxx,r` :: MPY`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0xC2,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xC3,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xC4,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` >> #16 :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xC5,
"OOOOOOO-pXXXxxxxp4$-----%YYYyyyyqq#aaaaa/ZZZzzzz"
,
"mar(`XXXxxxx,r`), `aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"AMAR `XXXxxxx,r` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0xC6,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx` >> #16"
,
(char *)0xC7,
"OOOOOOO-pXXXxxxxp4$-----%YYYyyyyqq#aaaaa/ZZZzzzz"
,
"mar(`XXXxxxx,r`), `aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"AMAR `XXXxxxx,r` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx` >> #16"
,
(char *)0xC8,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx` >> #16"
,
(char *)0xC9,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` >> #16 :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx` >> #16"
,
(char *)0xCA,
"OOOOOOO-pXXXxxxxp4$-----%YYYyyyyqq#aaaaa/ZZZzzzz"
,
"mar(`XXXxxxx,r`), `aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(``YYYyyyy,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"AMAR `XXXxxxx,r` :: MAS`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0xCB,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0xCC,
"OOOOOOO-pXXXxxxxp--------YYYyyyyqq-------ZZZzzzz"
,
"mar(`XXXxxxx,r`), mar(`YYYyyyy,r`), mar(`ZZZzzzz,r`)"
,
"AMAR `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`"
,
(char *)0xCD,
"OOOOOOO-pXXXxxxxp0-aaaaa0YYYyyyyqq-bbbbb/ZZZzzzz"
,
"firs`/,a``q_SAT,a`(`XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aaaaa,ACx`, `bbbbb,ACx`)"
,
"FIRSADD`/``q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aaaaa,ACx`, `bbbbb,ACx`"
,
(char *)0xCE,
"OOOOOOO-pXXXxxxxp0-aaaaa0YYYyyyyqq-bbbbb/ZZZzzzz"
,
"firsn`/,a``q_SAT,a`(`XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aaaaa,ACx`, `bbbbb,ACx`)"
,
"FIRSSUB`/``q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aaaaa,ACx`, `bbbbb,ACx`"
,
(char *)0xCF,
"OOOOOOO3pXXXxxxxp4$aaaaa%YYYyyyy/-#-----"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``XXXxxxx,r``$,)` * `#,(``YYYyyyy,r``#,)``/,)``%,)``4,)``q_SAT,)``XXXxxxx3,3r`"
,
"MPYM`/``q_SAT``%``4` `3``$,(``XXXxxxx,r``$,)`, `#,(``YYYyyyy,r``#,)`, `aaaaa,ACx`"
,
(char *)0xD0,
"OOOOOOO3pXXXxxxxp4$aaaaa%YYYyyyy/-#ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``ccccc,ACx` + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``YYYyyyy,r``#,)``/,)``%,)``4,)``q_SAT,)``XXXxxxx3,3r`"
,
"MACM`/``q_SAT``%``4` `3``$,(``XXXxxxx,r``$,)`, `#,(``YYYyyyy,r``#,)`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xD1,
"OOOOOOO3pXXXxxxxp4$aaaaa%YYYyyyy/-#ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`ccccc,ACx` >> #16) + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``YYYyyyy,r``#,)``/,)``%,)``4,)``q_SAT,)``XXXxxxx3,3r`"
,
"MACM`/``q_SAT``%``4` `3``$,(``XXXxxxx,r``$,)`, `#,(``YYYyyyy,r``#,)`, `ccccc,ACx` >> #16, `aaaaa,ACx`"
,
(char *)0xD2,
"OOOOOOO3pXXXxxxxp4$aaaaa%YYYyyyy/-#ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``ccccc,ACx` - `/,(``$,(``XXXxxxx,r``$,)` * `#,(``YYYyyyy,r``#,)``/,)``%,)``4,)``q_SAT,)``XXXxxxx3,3r`"
,
"MASM`/``q_SAT``%``4` `3``$,(``XXXxxxx,r``$,)`, `#,(``YYYyyyy,r``#,)`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0xD3,
"OOOOOOO3pXXXxxxxp-oaaaaa%YYYyyyy/ccbbbbb"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` - `/`(`cc,Tx` * `XXXxxxx,r`)`%,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``YYYyyyy,r` << #16`q_SAT,)``XXXxxxx3,3r`"
,
"MASM`/``q_SAT``%` `XXXxxxx3,3r`, `cc,Tx`, `aaaaa,ACx` :: MOV`q_SAT` `YYYyyyy,r` << #16, `bbbbb,ACx`"
,
(char *)0xD4,
"OOOOOOO3pXXXxxxxp-oaaaaa%YYYyyyy/ccbbbbb"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` + `/`(`cc,Tx` * `XXXxxxx,r`)`%,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``YYYyyyy,r` << #16`q_SAT,)``XXXxxxx3,3r`"
,
"MACM`/``q_SAT``%` `XXXxxxx3,3r`, `cc,Tx`, `aaaaa,ACx` :: MOV`q_SAT` `YYYyyyy,r` << #16, `bbbbb,ACx`"
,
(char *)0xD5,
"OOOOOOOOpXXXxxxxp--aaaaa1YYYyyyy/--bbbbb"
,
"lms`/,a``q_SAT,a`(`XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`)"
,
"LMS`/``q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`"
,
(char *)0xD6,
"OOOOOOOOpXXXxxxxp--aaaaa0YYYyyyy/--bbbbb"
,
"sqdst`/,a``q_SAT,a`(`XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`)"
,
"SQDST`/``q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`"
,
(char *)0xD7,
"OOOOOOOOpXXXxxxxp--aaaaa0YYYyyyy/--bbbbb"
,
"abdst`/,a``q_SAT,a`(`XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`)"
,
"ABDST`/``q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`"
,
(char *)0xD8,
"OOOOOOO3pXXXxxxxp-oaaaaa%YYYyyyy/ccddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``/,(``cc,Tx` * `XXXxxxx,r``/,)``%,)``q_SAT,)`, `YYYyyyy,w` = `q_SAT,(`HI(`ccccc,ACx` << T2)`q_SAT,)``XXXxxxx3,3r`"
,
"MPYM`/``q_SAT``%` `XXXxxxx3,3r`, `cc,Tx`, `aaaaa,ACx` :: MOV`q_SAT` HI(`ccccc,ACx` << T2), `YYYyyyy,w`"
,
(char *)0xD9,
"OOOOOOO3pXXXxxxxp-oaaaaa%YYYyyyy/ccddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` + `/`(`cc,Tx` * `XXXxxxx,r`)`%,)``q_SAT,)`, `YYYyyyy,w` = `q_SAT,(`HI(`ccccc,ACx` << T2)`q_SAT,)``XXXxxxx3,3r`"
,
"MACM`/``q_SAT``%` `XXXxxxx3,3r`, `cc,Tx`, `aaaaa,ACx` :: MOV`q_SAT` HI(`ccccc,ACx` << T2), `YYYyyyy,w`"
,
(char *)0xDA,
"OOOOOOO3pXXXxxxxp-oaaaaa%YYYyyyy/ccddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``aaaaa,ACx` - `/`(`cc,Tx` * `XXXxxxx,r`)`%,)``q_SAT,)`, `YYYyyyy,w` = `q_SAT,(`HI(`ccccc,ACx` << T2)`q_SAT,)``XXXxxxx3,3r`"
,
"MASM`/``q_SAT``%` `XXXxxxx3,3r`, `cc,Tx`, `aaaaa,ACx` :: MOV`q_SAT` HI(`ccccc,ACx` << T2), `YYYyyyy,w`"
,
(char *)0xDB,
"OOOOOOOOpXXXxxxxp--aaaaa-YYYyyyy---ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`XXXxxxx,r` << #16)`q_SAT,)`, `YYYyyyy,w` = `q_SAT,(`HI(`aaaaa,ACx` << T2)`q_SAT,)`"
,
"ADD`q_SAT` `XXXxxxx,r` << #16, `ccccc,ACx`, `aaaaa,ACx` :: MOV`q_SAT` HI(`aaaaa,ACx` << T2), `YYYyyyy,w`"
,
(char *)0xDC,
"OOOOOOOOpXXXxxxxp--aaaaa-YYYyyyy---ccccc"
,
"`aaaaa,ACx` = `q_SAT,(`(`XXXxxxx,r` << #16) - `ccccc,ACx``q_SAT,)`, `YYYyyyy,w` = `q_SAT,(`HI(`aaaaa,ACx` << T2)`q_SAT,)`"
,
"SUB`q_SAT` `ccccc,ACx`, `XXXxxxx,r` << #16, `aaaaa,ACx` :: MOV`q_SAT` HI(`aaaaa,ACx` << T2), `YYYyyyy,w`"
,
(char *)0xDD,
"OOOOOOOOpXXXxxxxp--aaaaa-YYYyyyy---ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``XXXxxxx,r` << #16`q_SAT,)`, `YYYyyyy,w` = `q_SAT,(`HI(`ccccc,ACx` << T2)`q_SAT,)`"
,
"MOV`q_SAT` `XXXxxxx,r` << #16, `aaaaa,ACx` :: MOV`q_SAT` HI(`ccccc,ACx` << T2), `YYYyyyy,w`"
,
(char *)0xDE,
(char *)0x0,
"SDUAL__"
,
"SDUAL__"
,
(char *)0xDF,
"OOOOOOOOpGFccccc"
,
"`q_SAT,n`goto `ccccc,ACx``G``F`"
,
"`q_SAT,N`B `ccccc,ACx``G``F`"
,
(char *)0xE0,
"OOOOOOOOpGFccccc"
,
"call `ccccc,ACx``G``F`"
,
"CALL `ccccc,ACx``G``F`"
,
(char *)0xE1,
(char *)0x0,
"SWT_P_DA"
,
"SWT_P_DA"
,
(char *)0xE2,
"OOOOOOOOppqq----"
,
"reset"
,
"RESET"
,
(char *)0xE3,
"OOOOOOOOpp-kkkkk"
,
"intr(`kkkkk`)"
,
"INTR `kkkkk`"
,
(char *)0xE4,
"OOOOOOOOpp-kkkkk"
,
"trap(`kkkkk`)"
,
"TRAP `kkkkk`"
,
(char *)0xE5,
(char *)0x0,
"XCN_PMC_S"
,
"XCN_PMC_S"
,
(char *)0xE6,
(char *)0x0,
"XCN_PMU_S"
,
"XCN_PMU_S"
,
(char *)0xE7,
"OOOOOOpp"
,
"estop_0"
,
"ESTOP_BYTE"
,
(char *)0xE8,
"OOOOOOpp"
,
"MMAP"
,
"MMAP"
,
(char *)0xE9,
"OOOOOOpp"
,
"PORT_READ"
,
"PORT_READ"
,
(char *)0xEA,
"OOOOOOpp"
,
"PORT_WRITE"
,
"PORT_WRITE"
,
(char *)0xEB,
(char *)0x0,
"copr(`kkkkkkkk`, `aa,ACx`, `bb,ACx`)"
,
"COPR__"
,
(char *)0xEC,
"OOOOOOpp"
,
"LINR"
,
"LINR"
,
(char *)0xED,
"OOOOOOpp"
,
"CIRC"
,
"CIRC"
,
(char *)0xEE,
"OOOOOOppHHHhhhhh"
,
"if (`HHHhhhhh`) execute (AD_Unit)"
,
"XCC `HHHhhhhh`"
,
(char *)0xEF,
"OOOOOOppHHHhhhhh"
,
"if (`HHHhhhhh`) execute (D_Unit)"
,
"XCCPART `HHHhhhhh`"
,
(char *)0xF0,
"OOOOOOppHHHhhhhh"
,
"if (`HHHhhhhh`) execute (AD_Unit)"
,
"XCC `HHHhhhhh`"
,
(char *)0xF1,
"OOOOOOppHHHhhhhh"
,
"if (`HHHhhhhh`) execute (D_Unit)"
,
"XCCPART `HHHhhhhh`"
,
(char *)0xF2,
(char *)0x0,
"LD_RGM"
,
"LD_RGM"
,
(char *)0xF3,
"OOOOOOqqMMMMxxxxmm-aaaaa"
,
"`aaaaa,ACx` = `q_SAT,(``MMMMxxxxmm,r` << #16`q_SAT,)`"
,
"MOV`q_SAT` `MMMMxxxxmm,r` << #16, `aaaaa,ACx`"
,
(char *)0xF4,
"OOOOOOOOMMMMxxxxmmq--o--"
,
"mar(`MMMMxxxxmm,r`)"
,
"AMAR `MMMMxxxxmm,r`"
,
(char *)0xF5,
"OOOOOOOOMMMMxxxxmmq-p---"
,
"push(`MMMMxxxxmm,r`)"
,
"PSH `MMMMxxxxmm,r`"
,
(char *)0xF6,
"OOOOOOOOMMMMxxxxmm------"
,
"delay(`MMMMxxxxmm`)"
,
"DELAY `MMMMxxxxmm`"
,
(char *)0xF7,
"OOOOOOOOMMMMxxxxmmq-p---"
,
"push(dbl(`MMMMxxxxmm,dr`))"
,
"PSH dbl(`MMMMxxxxmm,dr`)"
,
(char *)0xF8,
"OOOOOOOOMMMMxxxxmmq-p---"
,
"dbl(`MMMMxxxxmm,dw`) = pop()"
,
"POP dbl(`MMMMxxxxmm,dw`)"
,
(char *)0xF9,
"OOOOOOOOMMMMxxxxmmq-p---"
,
"`MMMMxxxxmm,w` = pop()"
,
"POP `MMMMxxxxmm,w`"
,
(char *)0xFA,
(char *)0x0,
"STH_RDM"
,
"STH_RDM"
,
(char *)0xFB,
(char *)0x0,
"ST_RGM"
,
"ST_RGM"
,
(char *)0xFC,
"OOOOOOO3MMMMxxxxmm%aaaaapp$-------#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(``MMMMxxxxmm``$,)` * `#,(``ZZZzzzz``#,)``/,)``%,)``4,)``q_SAT,)``MMMMxxxxmm3,3`, delay(`MMMMxxxxmm`)"
,
"MACMZ`/``q_SAT``%``4` `3``$,(``MMMMxxxxmm,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0xFD,
(char *)0x0,
"MPY_R_MWK"
,
"MPY_R_MWK"
,
(char *)0xFE,
(char *)0x0,
"MAC_R_MP"
,
"MAC_R_MP"
,
(char *)0xFF,
(char *)0x0,
"MAS_R_MP"
,
"MAS_R_MP"
,
(char *)0x100,
(char *)0x0,
"MAC_R_RM_A"
,
"MAC_R_RM_A"
,
(char *)0x101,
(char *)0x0,
"MAS_R_RM_A"
,
"MAS_R_RM_A"
,
(char *)0x102,
"OOOOOOO3MMMMxxxxmm%aaaaapp/ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` + `/`(`MMMMxxxxmm,r` * `MMMMxxxxmm,r`)`%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"SQAM`/``q_SAT``%` `3``MMMMxxxxmm,r`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x103,
"OOOOOOO3MMMMxxxxmm%aaaaapp/ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` - `/`(`MMMMxxxxmm,r` * `MMMMxxxxmm,r`)`%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"SQSM`/``q_SAT``%` `3``MMMMxxxxmm,r`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x104,
(char *)0x0,
"MPY_R_RM_L"
,
"MPY_R_RM_L"
,
(char *)0x105,
"OOOOOOO3MMMMxxxxmm%aaaaapp/-----"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``/,(``MMMMxxxxmm,r` * `MMMMxxxxmm,r``/,)``%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"SQRM`/``q_SAT``%` `3``MMMMxxxxmm,r`, `aaaaa,ACx`"
,
(char *)0x106,
"OOOOOOO3MMMMxxxxmm%aaaaapp$-----/CCccccc"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``/,(``$,(``CCccccc,MRx` * `MMMMxxxxmm,r``$,)``/,)``%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MPYM`/``q_SAT``%``$` `3``MMMMxxxxmm,r`, `CCccccc,MRx`, `aaaaa,ACx`"
,
(char *)0x107,
"OOOOOOO3MMMMxxxxmm%aaaaapp$ccccc/DDddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` + `/,(``$,(``DDddddd,MRx` * `MMMMxxxxmm,r``$,)``/,)``%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MACM`/``q_SAT``%``$` `3``MMMMxxxxmm,r`, `DDddddd,MRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x108,
"OOOOOOO3MMMMxxxxmm%aaaaapp$ccccc/DDddddd"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` - `/,(``$,(``DDddddd,MRx` * `MMMMxxxxmm,r``$,)``/,)``%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MASM`/``q_SAT``%``$` `3``MMMMxxxxmm,r`, `DDddddd,MRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x109,
"OOOOOoppMMMMxxxxmmAaaaaaACCccccc"
,
"`AaaaaaA,!` = `q_SAT,(``CCccccc,Rx` + `MMMMxxxxmm,r``q_SAT,)`"
,
"ADD`q_SAT` `MMMMxxxxmm,r`, `CCccccc,Rx`, `AaaaaaA,!`"
,
(char *)0x10A,
"OOOOOoppMMMMxxxxmmAaaaaaACCccccc"
,
"`AaaaaaA,!` = `q_SAT,(``CCccccc,Rx` - `MMMMxxxxmm,r``q_SAT,)`"
,
"SUB`q_SAT` `MMMMxxxxmm,r`, `CCccccc,Rx`, `AaaaaaA,!`"
,
(char *)0x10B,
"OOOOOoppMMMMxxxxmmAaaaaaACCccccc"
,
"`AaaaaaA,!` = `q_SAT,(``MMMMxxxxmm,r` - `CCccccc,Rx``q_SAT,)`"
,
"SUB`q_SAT` `CCccccc,Rx`, `MMMMxxxxmm,r`, `AaaaaaA,!`"
,
(char *)0x10C,
"OOOOOoppMMMMxxxxmmAaaaaaACCccccc"
,
"`AaaaaaA,!` = `CCccccc,Rx` & `MMMMxxxxmm,r`"
,
"AND`q_SAT` `MMMMxxxxmm,r`, `CCccccc,Rx`, `AaaaaaA,!`"
,
(char *)0x10D,
"OOOOOoppMMMMxxxxmmAaaaaaACCccccc"
,
"`AaaaaaA,!` = `CCccccc,Rx` | `MMMMxxxxmm,r`"
,
"OR`q_SAT` `MMMMxxxxmm,r`, `CCccccc,Rx`, `AaaaaaA,!`"
,
(char *)0x10E,
"OOOOOoppMMMMxxxxmmAaaaaaACCccccc"
,
"`AaaaaaA,!` = `CCccccc,Rx` ^ `MMMMxxxxmm,r`"
,
"XOR`q_SAT` `MMMMxxxxmm,r`, `CCccccc,Rx`, `AaaaaaA,!`"
,
(char *)0x10F,
"OOOOOOOOMMMMxxxxmmTppo------kkkk"
,
"`T` = bit(`MMMMxxxxmm,r`, `kkkk`)"
,
"BTST `kkkk`, `MMMMxxxxmm,r`, `T`"
,
(char *)0x110,
(char *)0x0,
"BIT_MBT_K2"
,
"BIT_MBT_K2"
,
(char *)0x111,
(char *)0x0,
"LD_DP"
,
"LD_DP"
,
(char *)0x112,
(char *)0x0,
"LD_CDP"
,
"LD_CDP"
,
(char *)0x113,
(char *)0x0,
"LD_BOF01"
,
"LD_BOF01"
,
(char *)0x114,
(char *)0x0,
"LD_BOF23"
,
"LD_BOF23"
,
(char *)0x115,
(char *)0x0,
"LD_BOF45"
,
"LD_BOF45"
,
(char *)0x116,
(char *)0x0,
"LD_BOF67"
,
"LD_BOF67"
,
(char *)0x117,
(char *)0x0,
"LD_BOFC"
,
"LD_BOFC"
,
(char *)0x118,
(char *)0x0,
"LD_SP"
,
"LD_SP"
,
(char *)0x119,
(char *)0x0,
"LD_SSP"
,
"LD_SSP"
,
(char *)0x11A,
(char *)0x0,
"LD_BK03"
,
"LD_BK03"
,
(char *)0x11B,
(char *)0x0,
"LD_BK47"
,
"LD_BK47"
,
(char *)0x11C,
(char *)0x0,
"LD_BKC"
,
"LD_BKC"
,
(char *)0x11D,
(char *)0x0,
"LD_MDP"
,
"LD_MDP"
,
(char *)0x11E,
(char *)0x0,
"LD_MDP05"
,
"LD_MDP05"
,
(char *)0x11F,
(char *)0x0,
"LD_MDP67"
,
"LD_MDP67"
,
(char *)0x120,
(char *)0x0,
"LD_PDP"
,
"LD_PDP"
,
(char *)0x121,
(char *)0x0,
"LD_CSR"
,
"LD_CSR"
,
(char *)0x122,
(char *)0x0,
"LD_BRC0"
,
"LD_BRC0"
,
(char *)0x123,
(char *)0x0,
"LD_BRC1"
,
"LD_BRC1"
,
(char *)0x124,
(char *)0x0,
"LD_TRN0"
,
"LD_TRN0"
,
(char *)0x125,
(char *)0x0,
"LD_TRN1"
,
"LD_TRN1"
,
(char *)0x126,
"OOOOOOOOMMMMxxxxmm-aaaaa-p-ccccc-NNnnnnn"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`MMMMxxxxmm,r` << `NNnnnnn,SRx`)`q_SAT,)`"
,
"ADD`q_SAT` `MMMMxxxxmm,r` << `NNnnnnn,SRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x127,
"OOOOOOOOMMMMxxxxmm-aaaaa-p-ccccc-NNnnnnn"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - (`MMMMxxxxmm,r` << `NNnnnnn,SRx`)`q_SAT,)`"
,
"SUB`q_SAT` `MMMMxxxxmm,r` << `NNnnnnn,SRx`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x128,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc-NNnnnnn"
,
"`aaaaa,ACx` = ads2c`q_SAT,a`(`MMMMxxxxmm,r`, `ccccc,ACx`, `NNnnnnn,SRx`, TC1, TC2)"
,
"ADDSUB2CC`q_SAT` `MMMMxxxxmm,r`, `ccccc,ACx`, `NNnnnnn,SRx`, TC1, TC2, `aaaaa,ACx`"
,
(char *)0x129,
"OOOOOOOOMMMMxxxxmm%aaaaa-p$----q-NNnnnnn"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``$,(``MMMMxxxxmm,r``$,)` << `NNnnnnn,SRx``%,)``q_SAT,)`"
,
"MOV`q_SAT` `%,(``$,(``MMMMxxxxmm,r``$,)` << `NNnnnnn,SRx``%,)`, `aaaaa,ACx`"
,
(char *)0x12A,
"OOOOOOOOMMMMxxxxmmTaaaaapp-ccccc--------"
,
"`aaaaa,ACx` = adsc`q_SAT,a`(`MMMMxxxxmm,r`, `ccccc,ACx`, `T`)"
,
"ADDSUBCC`q_SAT` `MMMMxxxxmm,r`, `ccccc,ACx`, `T`, `aaaaa,ACx`"
,
(char *)0x12B,
(char *)0x0,
"ADSC_RM_2"
,
"ADSC_RM_2"
,
(char *)0x12C,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc--------"
,
"`aaaaa,ACx` = adsc`q_SAT,a`(`MMMMxxxxmm,r`, `ccccc,ACx`, TC1, TC2)"
,
"ADDSUBCC`q_SAT` `MMMMxxxxmm,r`, `ccccc,ACx`, TC1, TC2, `aaaaa,ACx`"
,
(char *)0x12D,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc--------"
,
"subc(`MMMMxxxxmm,r`, `ccccc,ACx`, `aaaaa,ACx`)"
,
"SUBC `MMMMxxxxmm,r`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x12E,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`MMMMxxxxmm,r` << #16)`q_SAT,)`"
,
"ADD`q_SAT` `MMMMxxxxmm,r` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x12F,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - (`MMMMxxxxmm,r` << #16)`q_SAT,)`"
,
"SUB`q_SAT` `MMMMxxxxmm,r` << #16, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x130,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc"
,
"`aaaaa,ACx` = `q_SAT,(`(`MMMMxxxxmm,r` << #16) - `ccccc,ACx``q_SAT,)`"
,
"SUB`q_SAT` `ccccc,ACx`, `MMMMxxxxmm,r` << #16, `aaaaa,ACx`"
,
(char *)0x131,
"OOOOOOOOMMMMxxxxmmqaaaaa-po100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(``MMMMxxxxmm,r` + `cc,Tx``q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(``MMMMxxxxmm,r` - `cc,Tx``q_SAT,)`"
,
"ADDSUB`q_SAT` `cc,Tx`, `MMMMxxxxmm,r`, `aaaaa,ACx`"
,
(char *)0x132,
"OOOOOOOOMMMMxxxxmmqaaaaa-po100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(``MMMMxxxxmm,r` - `cc,Tx``q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(``MMMMxxxxmm,r` + `cc,Tx``q_SAT,)`"
,
"SUBADD`q_SAT` `cc,Tx`, `MMMMxxxxmm,r`, `aaaaa,ACx`"
,
(char *)0x133,
"OOOOOOOOMMMMxxxxmmqaaaaapp$---AA"
,
"`AAaaaaa,Rx` = `$,(`high_byte(`MMMMxxxxmm,r`)`$,)`"
,
"MOV `$,(`high_byte(`MMMMxxxxmm,r`)`$,)`, `AAaaaaa,Rx`"
,
(char *)0x134,
"OOOOOOOOMMMMxxxxmmqaaaaapp$---AA"
,
"`AAaaaaa,Rx` = `$,(`low_byte(`MMMMxxxxmm,r`)`$,)`"
,
"MOV `$,(`low_byte(`MMMMxxxxmm,r`)`$,)`, `AAaaaaa,Rx`"
,
(char *)0x135,
"OOOOOOqqMMMMxxxxmm$aaaaa"
,
"`aaaaa,ACx` = `$,(``MMMMxxxxmm,r``$,)`"
,
"MOV `$,(``MMMMxxxxmm,r``$,)`, `aaaaa,ACx`"
,
(char *)0x136,
"OOOOOOOOMMMMxxxxmm$aaaaappoccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + `$,(``MMMMxxxxmm,r``$,)` + Carry`q_SAT,)`"
,
"ADD`q_SAT` `$,(``MMMMxxxxmm,r``$,)`, CARRY, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x137,
"OOOOOOOOMMMMxxxxmm$aaaaappoccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - uns(`MMMMxxxxmm,r`) - Borrow`q_SAT,)`"
,
"SUB`q_SAT` `$,(``MMMMxxxxmm,r``$,)`, BORROW, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x138,
"OOOOOOOOMMMMxxxxmm1aaaaappoccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + uns(`MMMMxxxxmm,r`)`q_SAT,)`"
,
"ADD`q_SAT` uns(`MMMMxxxxmm,r`), `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x139,
"OOOOOOOOMMMMxxxxmm1aaaaappoccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - uns(`MMMMxxxxmm,r`)`q_SAT,)`"
,
"SUB`q_SAT` uns(`MMMMxxxxmm,r`), `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x13A,
"OOOOOOOOMMMMxxxxmmTcccccppo---CC"
,
"`T` = bit(`MMMMxxxxmm,r`, `CCccccc,RLHx`)"
,
"BTST `CCccccc,RLHx`, `MMMMxxxxmm,r`, `T`"
,
(char *)0x13B,
"OOOOOOOOMMMMxxxxmm-aaaaa-p-----q--SSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(`low_byte(`MMMMxxxxmm,r`) << `SSSSSS``q_SAT,)`"
,
"MOV`q_SAT` low_byte(`MMMMxxxxmm,r`) << `SSSSSS`, `aaaaa,ACx`"
,
(char *)0x13C,
"OOOOOOOOMMMMxxxxmm-aaaaa-p-----q--SSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(`high_byte(`MMMMxxxxmm,r`) << `SSSSSS``q_SAT,)`"
,
"MOV`q_SAT` high_byte(`MMMMxxxxmm,r`) << `SSSSSS`, `aaaaa,ACx`"
,
(char *)0x13D,
"OOOOOOOOMMMMxxxxmmTppo------kkkk"
,
"`T` = bit(`MMMMxxxxmm,rw`, `kkkk`), bit(`MMMMxxxxmm,rw`, `kkkk`) = #1"
,
"BTSTSET `kkkk`, `MMMMxxxxmm,rw`, `T`"
,
(char *)0x13E,
(char *)0x0,
"SMBX_MS_2"
,
"SMBX_MS_2"
,
(char *)0x13F,
"OOOOOOOOMMMMxxxxmmTppo------kkkk"
,
"`T` = bit(`MMMMxxxxmm,rw`, `kkkk`), bit(`MMMMxxxxmm,rw`, `kkkk`) = #0"
,
"BTSTCLR `kkkk`, `MMMMxxxxmm,rw`, `T`"
,
(char *)0x140,
(char *)0x0,
"RMBX_MR_2"
,
"RMBX_MR_2"
,
(char *)0x141,
"OOOOOOOOMMMMxxxxmmTppo------kkkk"
,
"`T` = bit(`MMMMxxxxmm,rw`, `kkkk`), cbit(`MMMMxxxxmm,rw`, `kkkk`)"
,
"BTSTNOT `kkkk`, `MMMMxxxxmm,rw`, `T`"
,
(char *)0x142,
(char *)0x0,
"CMBX_MC_2"
,
"CMBX_MC_2"
,
(char *)0x143,
"OOOOOOOOMMMMxxxxmmqcccccppo---CC"
,
"bit(`MMMMxxxxmm,r`, `CCccccc,RLHx`) = #1"
,
"BSET `CCccccc,RLHx`, `MMMMxxxxmm,r`"
,
(char *)0x144,
"OOOOOOOOMMMMxxxxmmqcccccppo---CC"
,
"bit(`MMMMxxxxmm,r`, `CCccccc,RLHx`) = #0"
,
"BCLR `CCccccc,RLHx`, `MMMMxxxxmm,r`"
,
(char *)0x145,
"OOOOOOOOMMMMxxxxmm-cccccppo---CC"
,
"cbit(`MMMMxxxxmm,rw`, `CCccccc,RLHx`)"
,
"BNOT `CCccccc,RLHx`, `MMMMxxxxmm,rw`"
,
(char *)0x146,
"OOOOOOOOMMMMxxxxmm-ccccc-p----CC"
,
"push(`CCccccc,RLHx`, `MMMMxxxxmm,r`)"
,
"PSH `CCccccc,RLHx`, `MMMMxxxxmm,r`"
,
(char *)0x147,
"OOOOOOOOMMMMxxxxmm-aaaaa-p----AA"
,
"`AAaaaaa,RLHx`, `MMMMxxxxmm,w` = pop()"
,
"POP `AAaaaaa,RLHx`, `MMMMxxxxmm,w`"
,
(char *)0x148,
(char *)0x0,
"ST_COPR"
,
"ST_COPR"
,
(char *)0x149,
"OOOOOOOOMMMMxxxxmmqcccccpp----CC"
,
"high_byte(`MMMMxxxxmm,w`) = `CCccccc,Rx`"
,
"MOV `CCccccc,Rx`, high_byte(`MMMMxxxxmm,w`)"
,
(char *)0x14A,
"OOOOOOOOMMMMxxxxmmqcccccpp----CC"
,
"low_byte(`MMMMxxxxmm,w`) = `CCccccc,Rx`"
,
"MOV `CCccccc,Rx`, low_byte(`MMMMxxxxmm,w`)"
,
(char *)0x14B,
(char *)0x0,
"ST_DP"
,
"ST_DP"
,
(char *)0x14C,
(char *)0x0,
"ST_CDP"
,
"ST_CDP"
,
(char *)0x14D,
(char *)0x0,
"ST_BOF01"
,
"ST_BOF01"
,
(char *)0x14E,
(char *)0x0,
"ST_BOF23"
,
"ST_BOF23"
,
(char *)0x14F,
(char *)0x0,
"ST_BOF45"
,
"ST_BOF45"
,
(char *)0x150,
(char *)0x0,
"ST_BOF67"
,
"ST_BOF67"
,
(char *)0x151,
(char *)0x0,
"ST_BOFC"
,
"ST_BOFC"
,
(char *)0x152,
(char *)0x0,
"ST_SP"
,
"ST_SP"
,
(char *)0x153,
(char *)0x0,
"ST_SSP"
,
"ST_SSP"
,
(char *)0x154,
(char *)0x0,
"ST_BK03"
,
"ST_BK03"
,
(char *)0x155,
(char *)0x0,
"ST_BK47"
,
"ST_BK47"
,
(char *)0x156,
(char *)0x0,
"ST_BKC"
,
"ST_BKC"
,
(char *)0x157,
(char *)0x0,
"ST_MDP"
,
"ST_MDP"
,
(char *)0x158,
(char *)0x0,
"ST_MDP05"
,
"ST_MDP05"
,
(char *)0x159,
(char *)0x0,
"ST_MDP67"
,
"ST_MDP67"
,
(char *)0x15A,
(char *)0x0,
"ST_PDP"
,
"ST_PDP"
,
(char *)0x15B,
(char *)0x0,
"ST_CSR"
,
"ST_CSR"
,
(char *)0x15C,
(char *)0x0,
"ST_BRC0"
,
"ST_BRC0"
,
(char *)0x15D,
(char *)0x0,
"ST_BRC1"
,
"ST_BRC1"
,
(char *)0x15E,
(char *)0x0,
"ST_TRN0"
,
"ST_TRN0"
,
(char *)0x15F,
(char *)0x0,
"ST_TRN1"
,
"ST_TRN1"
,
(char *)0x160,
"OOOOOoKKMMMMxxxxmmKKKKKK"
,
"`MMMMxxxxmm,w` = `KKKKKKKK`"
,
"MOV `KKKKKKKK`, `MMMMxxxxmm,w`"
,
(char *)0x161,
(char *)0x0,
"ST_RM_ASM"
,
"ST_RM_ASM"
,
(char *)0x162,
(char *)0x0,
"STH_R_RM_ASM"
,
"STH_R_RM_ASM"
,
(char *)0x163,
"OOOOOOOOMMMMxxxxmm%ccccc@p$---Iq-NNnnnnn"
,
"`MMMMxxxxmm,w` = `I`(`@,(``$,(``%,(``ccccc,ACx` << `NNnnnnn,SRx``%,)``$,)``@,)`)"
,
"MOV `$,(``%,(``I`(`@,(``ccccc,ACx` << `NNnnnnn,SRx``@,)`)`%,)``$,)`, `MMMMxxxxmm,w`"
,
(char *)0x164,
(char *)0x0,
"STH_R_RM"
,
"STH_R_RM"
,
(char *)0x165,
"OOOOOOOOMMMMxxxxmm%ccccc@p$---Iq"
,
"`MMMMxxxxmm,w` = `I`(`@,(``$,(``%,(``ccccc,ACx``%,)``$,)``@,)`)"
,
"MOV `$,(``%,(``I`(`@,(``ccccc,ACx``@,)`)`%,)``$,)`, `MMMMxxxxmm,w`"
,
(char *)0x166,
(char *)0x0,
"ST_RM_SH"
,
"ST_RM_SH"
,
(char *)0x167,
(char *)0x0,
"STH_RM_SH"
,
"STH_RM_SH"
,
(char *)0x168,
(char *)0x0,
"DST_COPR"
,
"DST_COPR"
,
(char *)0x169,
(char *)0x0,
"DST_RPC"
,
"DST_RPC"
,
(char *)0x16A,
(char *)0x0,
"DST_XR"
,
"DST_XR"
,
(char *)0x16B,
(char *)0x0,
"DST_RDLM"
,
"DST_RDLM"
,
(char *)0x16C,
"OOOOOOOOMMMMxxxxmm%ccccc@p$----q"
,
"dbl(`MMMMxxxxmm,dw`) = `@,(``$,(``%,(``ccccc,ACx``%,)``$,)``@,)`"
,
"MOV `$,(``%,(``@,(``ccccc,ACx``@,)``%,)``$,)`, dbl(`MMMMxxxxmm,dw`)"
,
(char *)0x16D,
"OOOOOOOOMMMMxxxxmmqccccc-p----CC"
,
"HI(`MMMMxxxxmm,dw`) = `CCccccc,RL`, LO(`MMMMxxxxmm,dw`) = `CCccccc,RLP`"
,
"MOV pair(`CCccccc,RLHx`), dbl(`MMMMxxxxmm,dw`)"
,
(char *)0x16E,
"OOOOOOOOMMMMxxxxmm-ccccc"
,
"HI(`MMMMxxxxmm,w`) = HI(`ccccc,ACx`) >> #1, LO(`MMMMxxxxmm,w`) = LO(`ccccc,ACx`) >> #1"
,
"MOV `ccccc,ACx` >> #1, dbl(`MMMMxxxxmm,w`)"
,
(char *)0x16F,
(char *)0x0,
"DST_RDLM_HI"
,
"DST_RDLM_HI"
,
(char *)0x170,
(char *)0x0,
"DST_RDLM_LO"
,
"DST_RDLM_LO"
,
(char *)0x171,
"OOOOOOOOMMMMxxxxmmqaaaaappo---AA"
,
"bit(`AAaaaaa,Rx`, `MMMMxxxxmm,baddr`) = #1"
,
"BSET `MMMMxxxxmm,baddr`, `AAaaaaa,Rx`"
,
(char *)0x172,
"OOOOOOOOMMMMxxxxmmqaaaaappo---AA"
,
"bit(`AAaaaaa,Rx`, `MMMMxxxxmm,baddr`) = #0"
,
"BCLR `MMMMxxxxmm,baddr`, `AAaaaaa,Rx`"
,
(char *)0x173,
"OOOOOOOOMMMMxxxxmm-cccccppo---CC"
,
"TC1,TC2 = bit(`CCccccc,Rx`, `MMMMxxxxmm,baddr`)"
,
"BTSTP `MMMMxxxxmm,baddr`, `CCccccc,Rx`"
,
(char *)0x174,
"OOOOOOOOMMMMxxxxmm-aaaaappo---AA"
,
"cbit(`AAaaaaa,Rx`, `MMMMxxxxmm,baddr`)"
,
"BNOT `MMMMxxxxmm,baddr`, `AAaaaaa,Rx`"
,
(char *)0x175,
"OOOOOOOOMMMMxxxxmmTcccccppo---CC"
,
"`T` = bit(`CCccccc,Rx`, `MMMMxxxxmm,baddr`)"
,
"BTST `MMMMxxxxmm,baddr`, `CCccccc,Rx`, `T`"
,
(char *)0x176,
"OOOOOOOOMMMMxxxxmmoaaaaa"
,
"`aaaaa,XDAx` = mar(`MMMMxxxxmm,r`)"
,
"AMAR `MMMMxxxxmm,r`, `aaaaa,XDAx`"
,
(char *)0x177,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + dbl(`MMMMxxxxmm,dr`)`q_SAT,)`"
,
"ADD`q_SAT` dbl(`MMMMxxxxmm,dr`), `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x178,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - dbl(`MMMMxxxxmm,dr`)`q_SAT,)`"
,
"SUB`q_SAT` dbl(`MMMMxxxxmm,dr`), `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x179,
"OOOOOOOOMMMMxxxxmm-aaaaapp-ccccc"
,
"`aaaaa,ACx` = `q_SAT,(`dbl(`MMMMxxxxmm,dr`) - `ccccc,ACx``q_SAT,)`"
,
"SUB`q_SAT` `ccccc,ACx`, dbl(`MMMMxxxxmm,dr`), `aaaaa,ACx`"
,
(char *)0x17A,
(char *)0x0,
"DLD_RPC"
,
"DLD_RPC"
,
(char *)0x17B,
"OOOOOOOOMMMMxxxxmm4aaaaa"
,
"`aaaaa,ACx` = `q_SAT,(``4,(`dbl(`MMMMxxxxmm,dr`)`4,)``q_SAT,)`"
,
"MOV`q_SAT``4` dbl(`MMMMxxxxmm,dr`), `aaaaa,ACx`"
,
(char *)0x17C,
"OOOOOOOOMMMMxxxxmmqaaaaa-p----00"
,
"`aaaaa,ACx` = `q_SAT,(`HI(`MMMMxxxxmm,dr`)<<#16`q_SAT,)`, `aaaaa,ACxP` = `q_SAT,(`LO(`MMMMxxxxmm,dr`)<<#16`q_SAT,)`"
,
"MOV`q_SAT` dbl(`MMMMxxxxmm,dr`), pair(HI(`aaaaa,ACx`))"
,
(char *)0x17D,
(char *)0x0,
"DLD_RDLM_LO"
,
"DLD_RDLM_LO"
,
(char *)0x17E,
"OOOOOOOOMMMMxxxxmmqaaaaa-p----AA"
,
"`AAaaaaa,Rx` = HI(`MMMMxxxxmm,dr`), `AAaaaaa,RxP` = LO(`MMMMxxxxmm,dr`)"
,
"MOV dbl(`MMMMxxxxmm,dr`), pair(`AAaaaaa,RLHx`)"
,
(char *)0x17F,
(char *)0x0,
"DLD_XR"
,
"DLD_XR"
,
(char *)0x180,
"OOOOOOOOMMMMxxxxmm-aaaaappoccccc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`MMMMxxxxmm,r`) + HI(`ccccc,ACx`)`q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`MMMMxxxxmm,r`) + LO(`ccccc,ACx`)`q_SAT,)`"
,
"ADD`q_SAT` dual(`MMMMxxxxmm,r`), `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x181,
"OOOOOOOOMMMMxxxxmm-aaaaappoccccc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`ccccc,ACx`) - HI(`MMMMxxxxmm,r`)`q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`ccccc,ACx`) - LO(`MMMMxxxxmm,r`)`q_SAT,)`"
,
"SUB`q_SAT` dual(`MMMMxxxxmm,r`), `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x182,
"OOOOOOOOMMMMxxxxmm-aaaaappoccccc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`MMMMxxxxmm,r`) - HI(`ccccc,ACx`)`q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`MMMMxxxxmm,r`) - LO(`ccccc,ACx`)`q_SAT,)`"
,
"SUB`q_SAT` `ccccc,ACx`, dual(`MMMMxxxxmm,r`), `aaaaa,ACx`"
,
(char *)0x183,
"OOOOOOOOMMMMxxxxmm-aaaaappo100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(``cc,Tx` - HI(`MMMMxxxxmm,r`)`q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(``cc,Tx` - LO(`MMMMxxxxmm,r`)`q_SAT,)`"
,
"SUB`q_SAT` dual(`MMMMxxxxmm,r`), `cc,Tx`, `aaaaa,ACx`"
,
(char *)0x184,
"OOOOOOOOMMMMxxxxmm-aaaaappo100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`MMMMxxxxmm,r`) + `cc,Tx``q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`MMMMxxxxmm,r`) + `cc,Tx``q_SAT,)`"
,
"ADD`q_SAT` dual(`MMMMxxxxmm,r`), `cc,Tx`, `aaaaa,ACx`"
,
(char *)0x185,
"OOOOOOOOMMMMxxxxmm-aaaaappo100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`MMMMxxxxmm,r`) - `cc,Tx``q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`MMMMxxxxmm,r`) - `cc,Tx``q_SAT,)`"
,
"SUB`q_SAT` `cc,Tx`, dual(`MMMMxxxxmm,r`), `aaaaa,ACx`"
,
(char *)0x186,
"OOOOOOOOMMMMxxxxmmqaaaaa-po100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`MMMMxxxxmm,r`) + `cc,Tx``q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`MMMMxxxxmm,r`) - `cc,Tx``q_SAT,)`"
,
"ADDSUB`q_SAT` `cc,Tx`, dual(`MMMMxxxxmm,r`), `aaaaa,ACx`"
,
(char *)0x187,
"OOOOOOOOMMMMxxxxmmqaaaaa-po100cc"
,
"HI(`aaaaa,ACx`) = `q_SAT,(`HI(`MMMMxxxxmm,r`) - `cc,Tx``q_SAT,)`, LO(`aaaaa,ACx`) = `q_SAT,(`LO(`MMMMxxxxmm,r`) + `cc,Tx``q_SAT,)`"
,
"SUBADD`q_SAT` `cc,Tx`, dual(`MMMMxxxxmm,r`), `aaaaa,ACx`"
,
(char *)0x188,
"OOOOOOOOMMMMxxxxmmq-po---YYYyyyy"
,
"`MMMMxxxxmm,w` = `YYYyyyy,r`"
,
"MOV `YYYyyyy,r`, `MMMMxxxxmm,w`"
,
(char *)0x189,
"OOOOOOOOMMMMxxxxmmq-po---YYYyyyy"
,
"`YYYyyyy,w` = `MMMMxxxxmm,r`"
,
"MOV `MMMMxxxxmm,r`, `YYYyyyy,w`"
,
(char *)0x18A,
"OOOOOOOOMMMMxxxxmmq-po---YYYyyyy"
,
"dbl(`MMMMxxxxmm,dw`) = dbl(`YYYyyyy,r`)"
,
"MOV dbl(`YYYyyyy,r`), dbl(`MMMMxxxxmm,dw`)"
,
(char *)0x18B,
"OOOOOOOOMMMMxxxxmmq-po---YYYyyyy"
,
"dbl(`YYYyyyy,w`) = dbl(`MMMMxxxxmm,dr`)"
,
"MOV dbl(`MMMMxxxxmm,dr`), dbl(`YYYyyyy,w`)"
,
(char *)0x18C,
"OOOOOOOOMMMMxxxxmmT-poJJKKKKKKKKKKKKKKKK"
,
"`T` = (`MMMMxxxxmm,r` `JJ` `KKKKKKKKKKKKKKKK`)"
,
"CMP `MMMMxxxxmm,r` `JJ` `KKKKKKKKKKKKKKKK`, `T`"
,
(char *)0x18D,
(char *)0x0,
"CMPM_MWK_2"
,
"CMPM_MWK_2"
,
(char *)0x18E,
"OOOOOOOOMMMMxxxxmmT-p---kkkkkkkkkkkkkkkk"
,
"`T` = `MMMMxxxxmm,r` & `kkkkkkkkkkkkkkkk`"
,
"BAND `MMMMxxxxmm,r`, `kkkkkkkkkkkkkkkk`, `T`"
,
(char *)0x18F,
(char *)0x0,
"BITF_MWK_2"
,
"BITF_MWK_2"
,
(char *)0x190,
"OOOOOOOOMMMMxxxxmmqppo--kkkkkkkkkkkkkkkk"
,
"`MMMMxxxxmm,rw` = `MMMMxxxxmm,rw` & `kkkkkkkkkkkkkkkk`"
,
"AND `kkkkkkkkkkkkkkkk`, `MMMMxxxxmm,rw`"
,
(char *)0x191,
"OOOOOOOOMMMMxxxxmmqppo--kkkkkkkkkkkkkkkk"
,
"`MMMMxxxxmm,rw` = `MMMMxxxxmm,rw` | `kkkkkkkkkkkkkkkk`"
,
"OR `kkkkkkkkkkkkkkkk`, `MMMMxxxxmm,rw`"
,
(char *)0x192,
"OOOOOOOOMMMMxxxxmmqppo--kkkkkkkkkkkkkkkk"
,
"`MMMMxxxxmm,rw` = `MMMMxxxxmm,rw` ^ `kkkkkkkkkkkkkkkk`"
,
"XOR `kkkkkkkkkkkkkkkk`, `MMMMxxxxmm,rw`"
,
(char *)0x193,
"OOOOOOOOMMMMxxxxmmqppo--KKKKKKKKKKKKKKKK"
,
"`MMMMxxxxmm,rw` = `q_SAT,(``MMMMxxxxmm,rw` + `KKKKKKKKKKKKKKKK``q_SAT,)`"
,
"ADD`q_SAT` `KKKKKKKKKKKKKKKK`, `MMMMxxxxmm,rw`"
,
(char *)0x194,
"OOOOOOO3MMMMxxxxmm%aaaaa-p/-----KKKKKKKK"
,
"`aaaaa,ACx` = `%,(``/,(``MMMMxxxxmm,r` * `KKKKKKKK``/,)``%,)``MMMMxxxxmm3,3r`"
,
"MPYMK`/``%` `3``MMMMxxxxmm,r`, `KKKKKKKK`, `aaaaa,ACx`"
,
(char *)0x195,
"OOOOOOO3MMMMxxxxmm%aaaaa-p/cccccKKKKKKKK"
,
"`aaaaa,ACx` = `q_SAT,(``%,(``ccccc,ACx` + `/,(``MMMMxxxxmm,r` * `KKKKKKKK``/,)``%,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MACMK`/``q_SAT``%` `3``MMMMxxxxmm,r`, `KKKKKKKK`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x196,
"OOOOOOOOMMMMxxxxmm$aaaaapp-cccccqqSSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`$,(``MMMMxxxxmm,r``$,)` << `SSSSSS`)`q_SAT,)`"
,
"ADD`q_SAT` `$,(``MMMMxxxxmm,r``$,)` << `SSSSSS`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x197,
"OOOOOOOOMMMMxxxxmm$aaaaapp-cccccqqSSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - (`$,(``MMMMxxxxmm,r``$,)` << `SSSSSS`)`q_SAT,)`"
,
"SUB`q_SAT` `$,(``MMMMxxxxmm,r``$,)` << `SSSSSS`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x198,
"OOOOOOOOMMMMxxxxmm$aaaaapp------qqSSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(``$,(``MMMMxxxxmm,r``$,)` << `SSSSSS``q_SAT,)`"
,
"MOV`q_SAT` `$,(``MMMMxxxxmm,r``$,)` << `SSSSSS`, `aaaaa,ACx`"
,
(char *)0x199,
(char *)0x0,
"STHS_RM_SHS"
,
"STHS_RM_SHS"
,
(char *)0x19A,
"OOOOOOOOMMMMxxxxmm%ccccc@p$---Iq--SSSSSS"
,
"`MMMMxxxxmm,w` = `I`(`@,(``$,(``%,(``ccccc,ACx` << `SSSSSS``%,)``$,)``@,)`)"
,
"MOV `$,(``%,(``I`(`@,(``ccccc,ACx` << `SSSSSS``@,)`)`%,)``$,)`, `MMMMxxxxmm,w`"
,
(char *)0x19B,
"OOOOOOOOMMMMxxxxmmqppo--iiiiiiiiiiiiiiii"
,
"`MMMMxxxxmm,w` = `iiiiiiiiiiiiiiii`"
,
"MOV `iiiiiiiiiiiiiiii`, `MMMMxxxxmm,w`"
,
(char *)0x19C,
"OOOOOOOOMMMMxxxxmm------LLLLLLLLLLLLLLLL"
,
"if (`MMMMxxxxmm,r` != #0) goto `LLLLLLLLLLLLLLLL`"
,
"BCC `LLLLLLLLLLLLLLLL`, `MMMMxxxxmm,r` != #0"
,
(char *)0x19D,
"OOOOOOOop-Aaaaaap-Cccccc"
,
"`Aaaaaa,XRx` = `Cccccc,XRx`"
,
"MOV `Cccccc,XRx`, `Aaaaaa,XRx`"
,
(char *)0x19E,
(char *)0x0,
"FAR"
,
"FAR"
,
(char *)0x19F,
(char *)0x0,
"LOCAL"
,
"LOCAL"
,
(char *)0x1A0,
(char *)0x0,
"MAR_XAR_AX"
,
"MAR_XAR_AX"
,
(char *)0x1A1,
(char *)0x0,
"MAR_XAR_MX"
,
"MAR_XAR_MX"
,
(char *)0x1A2,
(char *)0x0,
"MAR_XAR_SX"
,
"MAR_XAR_SX"
,
(char *)0x1A3,
(char *)0x0,
"MAR_XAR_AY"
,
"MAR_XAR_AY"
,
(char *)0x1A4,
(char *)0x0,
"MAR_XAR_MY"
,
"MAR_XAR_MY"
,
(char *)0x1A5,
(char *)0x0,
"MAR_XAR_SY"
,
"MAR_XAR_SY"
,
(char *)0x1A6,
(char *)0x0,
"USR"
,
"USR"
,
(char *)0x1A7,
(char *)0x0,
"MMAP_USR"
,
"MMAP_USR"
,
(char *)0x1A8,
"OOOOOOpp"
,
"LOCK"
,
"LOCK"
,
(char *)0x1A9,
(char *)0x0,
"BR_USR"
,
"BR_USR"
,
(char *)0x1AA,
"OOOOOOOOpXXXxxxxp--aaaaa1YYYyyyy/--bbbbb"
,
"lmsf`/,a``q_SAT,a`(`XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`)"
,
"LMSF`/``q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `aaaaa,ACx`, `bbbbb,ACx`"
,
(char *)0x1AB,
"OOOOOOO3MMMMxxxxmm%aaaaapp$-------#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MPYM`/``q_SAT``%``4` `3``$,(``MMMMxxxxmm,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0x1AC,
"OOOOOOO3MMMMxxxxmm%aaaaapp$-------#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MACM`/``q_SAT``%``4` `3``$,(``MMMMxxxxmm,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0x1AD,
"OOOOOOO3MMMMxxxxmm%aaaaapp$-------#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(``ZZZzzzz,r``#,)``/,)``%,)``4,)``q_SAT,)``MMMMxxxxmm3,3r`"
,
"MASM`/``q_SAT``%``4` `3``$,(``MMMMxxxxmm,r``$,)`, `#,(``ZZZzzzz,r``#,)`, `aaaaa,ACx`"
,
(char *)0x1AE,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1AF,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B0,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B1,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B2,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B3,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B4,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B5,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B6,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` >> #16 :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1B7,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx` >> #16"
,
(char *)0x1B8,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx` >> #16"
,
(char *)0x1B9,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` >> #16 :: MAC`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx` >> #16"
,
(char *)0x1BA,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/`(`$,(``MMMMxxxxmm,r``$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(``MMMMxxxxmm,r``$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1BB,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1BC,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1BD,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1BE,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1BF,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1C0,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1C1,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1C2,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1C3,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` >> #16 :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1C4,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx` >> #16"
,
(char *)0x1C5,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx` >> #16"
,
(char *)0x1C6,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(`(`aaaaa,ACx` >> #16) + `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(`(`bbbbb,ACx` >> #16) + `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` >> #16 :: MAC`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx` >> #16"
,
(char *)0x1C7,
"OOOOOOOoMMMMxxxxmm%aaaaapp$bbbbbqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/`(`$,(`LO(`MMMMxxxxmm,r`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/`(`$,(`HI(`MMMMxxxxmm,r`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)`)`%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(`LO(`MMMMxxxxmm,r`)`$,)`, `#,(`LO(`ZZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(`HI(`MMMMxxxxmm,r`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1C8,
(char *)0x0,
"DBLCOEF"
,
"DBLCOEF"
,
(char *)0x1C9,
"OOOOOOOOpp-aaaaakkkkkkkkkkkkkkkkkkkkkkkk"
,
"mar(`aaaaa,XDAx` + `kkkkkkkkkkkkkkkkkkkkkkkk`)"
,
"AADD `kkkkkkkkkkkkkkkkkkkkkkkk`, `aaaaa,XDAx`"
,
(char *)0x1CA,
"OOOOOOOOpp-aaaaakkkkkkkkkkkkkkkkkkkkkkkk"
,
"mar(`aaaaa,XDAx` = `kkkkkkkkkkkkkkkkkkkkkkkk`)"
,
"AMOV `kkkkkkkkkkkkkkkkkkkkkkkk`, `aaaaa,XDAx`"
,
(char *)0x1CB,
"OOOOOOOOpp-aaaaakkkkkkkkkkkkkkkkkkkkkkkk"
,
"mar(`aaaaa,XDAx` - `kkkkkkkkkkkkkkkkkkkkkkkk`)"
,
"ASUB `kkkkkkkkkkkkkkkkkkkkkkkk`, `aaaaa,XDAx`"
,
(char *)0x1CC,
"OOOOOOOOMMMMxxxxmmq--o--"
,
"mar(byte(`MMMMxxxxmm,br`))"
,
"AMAR byte(`MMMMxxxxmm,br`)"
,
(char *)0x1CD,
"OOOOOOO$JCCcccccJDDdddddLLLLLLLLLLLLLLLL"
,
"compare (`$,(``CCccccc,RAx` `JJ` `DDddddd,RAx``$,)`) goto `LLLLLLLLLLLLLLLL`"
,
"BCC`$` `LLLLLLLLLLLLLLLL`, `CCccccc,RAx` `JJ` `DDddddd,RAx`"
,
(char *)0x1CE,
"OOOOOOqqMMMMxxxxmm$aaaaa"
,
"HI(`aaaaa,ACx`) = `q_SAT,(``$,(``MMMMxxxxmm,r``$,)``q_SAT,)`"
,
"MOV`q_SAT` `$,(``MMMMxxxxmm,r``$,)`, `aaaaa,ACx`.H"
,
(char *)0x1CF,
"OOOOOOqqMMMMxxxxmm$aaaaa"
,
"LO(`aaaaa,ACx`) = `q_SAT,(``$,(``MMMMxxxxmm,r``$,)``q_SAT,)`"
,
"MOV`q_SAT` `$,(``MMMMxxxxmm,r``$,)`, `aaaaa,ACx`.L"
,
(char *)0x1D0,
"OOOOOpAAMMMMxxxxmmAaaaaa"
,
"copy(`AAAaaaaa,ALLx` = `AAAaaaaa,d(ALLx``MMMMxxxxmm,!AAAaaaaa!r``AAAaaaaa,)ALLx`)"
,
"COPY `AAAaaaaa,d(ALLx``MMMMxxxxmm,!AAAaaaaa!r``AAAaaaaa,)ALLx`, `AAAaaaaa,ALLx`"
,
(char *)0x1D1,
"OOOOOOOOAAAaaaaakkkkkkkkkkkkkkkk"
,
"`AAAaaaaa,ADRx` = `kkkkkkkkkkkkkkkk`"
,
"MOV `kkkkkkkkkkkkkkkk`, `AAAaaaaa,ADRx`"
,
(char *)0x1D2,
"OOOOOOOpAAAaaaaakkkkkkkkkkkkkkkkkkkkkkkk"
,
"copy(`AAAaaaaa,ALLx` = `AAAaaaaa,d(ALLx``kkkkkkkkkkkkkkkkkkkkkkkk,m``AAAaaaaa,)ALLx`)"
,
"COPY `AAAaaaaa,d(ALLx``kkkkkkkkkkkkkkkkkkkkkkkk,m``AAAaaaaa,)ALLx`, `AAAaaaaa,ALLx`"
,
(char *)0x1D3,
"OOOOOOOOMMMMxxxxmm-aaaaapp$---AA"
,
"`AAaaaaa,RA` = `$,(`byte(`MMMMxxxxmm,br`)`$,)`"
,
"MOV `$,(`byte(`MMMMxxxxmm,br`)`$,)`, `AAaaaaa,RA`"
,
(char *)0x1D4,
(char *)0x0,
"MV_COPR"
,
"MV_COPR"
,
(char *)0x1D5,
"OOOOOOOop00aaaaapCCccccc"
,
"`aaaaa,ACx` = `q_SAT,(``CCccccc,RLHx` << #16`q_SAT,)`"
,
"MOV`q_SAT` `CCccccc,RLHx` << #16, `aaaaa,ACx`"
,
(char *)0x1D6,
"OOOOOOOOMMMMxxxxmmq-po---YYYyyyy"
,
"byte(`MMMMxxxxmm,bw`) = byte(`YYYyyyy,r`)"
,
"MOV byte(`YYYyyyy,r`), byte(`MMMMxxxxmm,bw`)"
,
(char *)0x1D7,
"OOOOOOOOMMMMxxxxmmq-po---YYYyyyy"
,
"byte(`YYYyyyy,w`) = byte(`MMMMxxxxmm,br`)"
,
"MOV byte(`MMMMxxxxmm,br`), byte(`YYYyyyy,w`)"
,
(char *)0x1D8,
"OOOOOOOOpCCcccccpkkkkkkko-$-JJ-T"
,
"`T` = `$`(`CCccccc,Rx` `JJ` `kkkkkkk`)"
,
"CMP`$` `CCccccc,Rx` `JJ` `kkkkkkk`, `T`"
,
(char *)0x1D9,
"OOOOOOOOpXXXxxxxp1Aaaaaa-YYYyyyy"
,
"`Aaaaaa,ACLHx` = `q_SAT,(``XXXxxxx,r` + `YYYyyyy,r``q_SAT,)`"
,
"ADD`q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `Aaaaaa,ACLHx`"
,
(char *)0x1DA,
"OOOOOOOOpXXXxxxxp1Aaaaaa-YYYyyyy"
,
"`Aaaaaa,ACLHx` = `q_SAT,(``XXXxxxx,r` - `YYYyyyy,r``q_SAT,)`"
,
"SUB`q_SAT` `XXXxxxx,r`, `YYYyyyy,r`, `Aaaaaa,ACLHx`"
,
(char *)0x1DB,
"OOOOOOOOppqq----"
,
"return || far()"
,
"FRET"
,
(char *)0x1DC,
"OOOOOOpp"
,
"SAT"
,
"SAT"
,
(char *)0x1DD,
"OOOOOpCCMMMMxxxxmmCccccc"
,
"`CCCccccc,d(ALLx``MMMMxxxxmm,!CCCccccc!w``CCCccccc,)ALLx` = `CCCccccc,ALLx`"
,
"MOV `CCCccccc,ALLx`, `CCCccccc,d(ALLx``MMMMxxxxmm,!CCCccccc!w``CCCccccc,)ALLx`"
,
(char *)0x1DE,
"OOOOOOOpCCCccccckkkkkkkkkkkkkkkkkkkkkkkk"
,
"`CCCccccc,d(ALLx``kkkkkkkkkkkkkkkkkkkkkkkk,m``CCCccccc,)ALLx` = `CCCccccc,ALLx`"
,
"MOV `CCCccccc,ALLx`, `CCCccccc,d(ALLx``kkkkkkkkkkkkkkkkkkkkkkkk,m``CCCccccc,)ALLx`"
,
(char *)0x1DF,
"OOOOOoiiMMMMxxxxmmiiiiii"
,
"byte(`MMMMxxxxmm,bw`) = `iiiiiiii`"
,
"MOV `iiiiiiii`, byte(`MMMMxxxxmm,bw`)"
,
(char *)0x1E0,
"OOOOOOOOMMMMxxxxmm-cccccpp----CC"
,
"byte(`MMMMxxxxmm,bw`) = `CCccccc,RA`"
,
"MOV `CCccccc,RA`, byte(`MMMMxxxxmm,bw`)"
,
(char *)0x1E1,
"OOOOOOpp"
,
"if (!TC1) execute(D_unit) ||"
,
"XCCPART !TC1 ||"
,
(char *)0x1E2,
"OOOOOOpp"
,
"if (TC1) execute(D_unit) ||"
,
"XCCPART TC1 ||"
,
(char *)0x1E3,
"OOOOOOpp"
,
"XPORT_READ"
,
"XPORT_READ"
,
(char *)0x1E4,
"OOOOOOpp"
,
"XPORT_WRITE"
,
"XPORT_WRITE"
,
(char *)0x1E5,
"OOOOOOOOppqq----"
,
"to_word()"
,
"to_word"
,
(char *)0x1E6,
"OOOOOOOOppqq----"
,
"to_byte()"
,
"to_byte"
,
(char *)0x1E7,
"OOOOOOOOkkkkkkkk"
,
"ecopr(`kkkkkkkk`)"
,
"ECOPR__"
,
(char *)0x1E8,
"OOOOOOOOp-------p0-000cc0-------qq-000aa0-------kkkkkkkk"
,
"`aa,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `cc,ACx`, `aa,ACx`)"
,
"COPR_1`q_SAT` `kkkkkkkk`, `cc,ACx`, `aa,ACx`"
,
(char *)0x1E9,
"OOOOOOOOp-------p0-000aa0-------qq-000bb0-------kkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `aa,ACx`, `bb,ACx`)"
,
"COPR_2`q_SAT` `kkkkkkkk`, `aa,ACx`, `bb,ACx`"
,
(char *)0x1EA,
"OOOOOOOOMMMMxxxxmm-000ccpp-000aaqq------0-------kkkkkkkk"
,
"`aa,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `cc,ACx`, `MMMMxxxxmm,r`)"
,
"COPR_M`q_SAT` `kkkkkkkk`, `cc,ACx`, `MMMMxxxxmm,r`, `aa,ACx`"
,
(char *)0x1EB,
"OOOOOOOOMMMMxxxxmm1000aapp-000bbqq------1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `MMMMxxxxmm,r`, dbl(`ZZZzzzz,r`))"
,
"COPR_MZ`q_SAT` `kkkkkkkk`, `MMMMxxxxmm,r`, dbl(`ZZZzzzz,r`), `aa,ACx`, `bb,ACx`"
,
(char *)0x1EC,
"OOOOOOOOMMMMxxxxmm-000ccpp-000aaqq------0-------kkkkkkkk"
,
"`aa,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `cc,ACx`, dbl(`MMMMxxxxmm,dr`))"
,
"COPR_LM`q_SAT` `kkkkkkkk`, `cc,ACx`, dbl(`MMMMxxxxmm,dr`), `aa,ACx`"
,
(char *)0x1ED,
"OOOOOOOOMMMMxxxxmm1000aapp-000bbqq------1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, dbl(`MMMMxxxxmm,dr`), dbl(`ZZZzzzz,r`))"
,
"COPR_LMZ1`q_SAT` `kkkkkkkk`, dbl(`MMMMxxxxmm,dr`), dbl(`ZZZzzzz,r`), `aa,ACx`, `bb,ACx`"
,
(char *)0x1EE,
"OOOOOOOOMMMMxxxxmm1000aapp-000bbqq------1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `aa,ACx`, `bb,ACx`, dbl(`MMMMxxxxmm,r`), dbl(`ZZZzzzz,dr`))"
,
"COPR_LMZ2`q_SAT` `kkkkkkkk`, `aa,ACx`, `bb,ACx`, dbl(`MMMMxxxxmm,dr`), dbl(`ZZZzzzz,r`), `aa,ACx`, `bb,ACx`"
,
(char *)0x1EF,
"OOOOOOOOpXXXxxxxp1-000cc1YYYyyyyqq-000aa0-------kkkkkkkk"
,
"`aa,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `cc,ACx`, `XXXxxxx,r`, `YYYyyyy,r`)"
,
"COPR_XY1`q_SAT` `kkkkkkkk`, `cc,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `aa,ACx`"
,
(char *)0x1F0,
"OOOOOOOOpXXXxxxxp1-000aa1YYYyyyyqq-000bb0-------kkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `aa,ACx`, `bb,ACx`, `XXXxxxx,r`, `YYYyyyy,r`)"
,
"COPR_XY2`q_SAT` `kkkkkkkk`, `aa,ACx`, `bb,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `aa,ACx`, `bb,ACx`"
,
(char *)0x1F1,
"OOOOOOOOpXXXxxxxp10000aa1YYYyyyyqq-000bb1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`)"
,
"COPR_XYZ1`q_SAT` `kkkkkkkk`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aa,ACx`, `bb,ACx`"
,
(char *)0x1F2,
"OOOOOOOOpXXXxxxxp10000aa1YYYyyyyqq-000bb1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `aa,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`)"
,
"COPR_XYZ2`q_SAT` `kkkkkkkk`, `aa,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aa,ACx`, `bb,ACx`"
,
(char *)0x1F3,
"OOOOOOOOpXXXxxxxp10000aa1YYYyyyyqq-000bb1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `bb,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`)"
,
"COPR_XYZ3`q_SAT` `kkkkkkkk`, `bb,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aa,ACx`, `bb,ACx`"
,
(char *)0x1F4,
"OOOOOOOOpXXXxxxxp10000aa1YYYyyyyqq-000bb1ZZZzzzzkkkkkkkk"
,
"`aa,ACx`, `bb,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `aa,ACx`, `bb,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`)"
,
"COPR_XYZ4`q_SAT` `kkkkkkkk`, `aa,ACx`, `bb,ACx`, `XXXxxxx,r`, `YYYyyyy,r`, `ZZZzzzz,r`, `aa,ACx`, `bb,ACx`"
,
(char *)0x1F5,
"OOOOOOOOpXXXxxxxp10000aa1YYYyyyyqq-000001ZZZzzzzkkkkkkkk"
,
"`aa,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `YYYyyyy,r`, `ZZZzzzz,r`), mar(`XXXxxxx,r`)"
,
"COPR_MARXYZ1`q_SAT` `kkkkkkkk`, `YYYyyyy,r`, `ZZZzzzz,r`, `aa,ACx` :: AMAR `XXXxxxx,r`"
,
(char *)0x1F6,
"OOOOOOOOpXXXxxxxp10000aa1YYYyyyyqq-000001ZZZzzzzkkkkkkkk"
,
"`aa,ACx` = copr`q_SAT,a`(`kkkkkkkk`, `aa,ACx`, `YYYyyyy,r`, `ZZZzzzz,r`), mar(`XXXxxxx,r`)"
,
"COPR_MARXYZ2`q_SAT` `kkkkkkkk`, `aa,ACx`, `YYYyyyy,r`, `ZZZzzzz,r`, `aa,ACx` :: AMAR `XXXxxxx,r`"
,
(char *)0x1F7,
"OOOOOOOOMMMMxxxxmmAaaaaa-pCcccccqqDddddd"
,
"`Aaaaaa,ACLHx` = field_extract_r(`Cccccc,ACLHx`, `Dddddd,ACLHx`, `MMMMxxxxmm,baddr`)"
,
"BFXTR `Cccccc,ACLHx`, `Dddddd,ACLHx`, `MMMMxxxxmm,baddr`, `Aaaaaa,ACLHx`"
,
(char *)0x1F8,
"OOOOOOOOMMMMxxxxmmAaaaaa-pCcccccqqDddddd"
,
"`Aaaaaa,ACLHx` = field_extract_l(`Cccccc,ACLHx`, `Dddddd,ACLHx`, `MMMMxxxxmm,baddr`)"
,
"BFXTL `Cccccc,ACLHx`, `Dddddd,ACLHx`, `MMMMxxxxmm,baddr`, `Aaaaaa,ACLHx`"
,
(char *)0x1F9,
"OOOOOOOOMMMMxxxxmm-aaaaa-p-cccccqq-ddddd"
,
"`aaaaa,ACx` = field_extract_r(`ccccc,ACx`, `ddddd,ACx`, `MMMMxxxxmm,baddr`)"
,
"DBFXTR `ccccc,ACx`, `ddddd,ACx`, `MMMMxxxxmm,baddr`, `aaaaa,ACx`"
,
(char *)0x1FA,
"OOOOOOOOMMMMxxxxmm-aaaaa-p-cccccqq-ddddd"
,
"`aaaaa,ACx` = field_extract_l(`ccccc,ACx`, `ddddd,ACx`, `MMMMxxxxmm,baddr`)"
,
"DBFXTL `ccccc,ACx`, `ddddd,ACx`, `MMMMxxxxmm,baddr`, `aaaaa,ACx`"
,
(char *)0x1FB,
"OOOOOOOOMMMMxxxxmmAaaaaa-pCcccccqqDddddd"
,
"`Aaaaaa,ACLHx` = field_insert(`Cccccc,ACLHx`, `Dddddd,ACLHx`, `MMMMxxxxmm,baddr`)"
,
"BFINS `Cccccc,ACLHx`, `Dddddd,ACLHx`, `MMMMxxxxmm,baddr`, `Aaaaaa,ACLHx`"
,
(char *)0x1FC,
"OOOOOOOWp-%aaaaap--bbbbb--$cccccqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`LO(`ccccc,ACx`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(`HI(`ccccc,ACx`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(`LO(`ccccc,ACx`)`$,)`, `#,(`LO(`ZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MPY`/``q_SAT``%``4` `$,(`HI(`ccccc,ACx`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1FD,
"OOOOOOOWp-%aaaaap--bbbbb--$cccccqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(`LO(`ccccc,ACx`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` +`/,(``$,(`HI(`ccccc,ACx`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`ccccc,ACx`)`$,)`, `#,(`LO(`ZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`ccccc,ACx`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1FE,
"OOOOOOOWp-%aaaaap--bbbbb--$cccccqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(`LO(`ccccc,ACx`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` -`/,(``$,(`HI(`ccccc,ACx`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(`LO(`ccccc,ACx`)`$,)`, `#,(`LO(`ZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(`HI(`ccccc,ACx`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x1FF,
"OOOOOOOWp-%aaaaap--bbbbb--$cccccqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(`LO(`ccccc,ACx`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` +`/,(``$,(`HI(`ccccc,ACx`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(`LO(`ccccc,ACx`)`$,)`, `#,(`LO(`ZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(`HI(`ccccc,ACx`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x200,
"OOOOOOOWp-%aaaaap--bbbbb--$cccccqq#4----/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` - `/,(``$,(`LO(`ccccc,ACx`)`$,)` * `#,(`LO(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` -`/,(``$,(`HI(`ccccc,ACx`)`$,)` * `#,(`HI(`ZZZzzzz,r`)`#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAS`/``q_SAT``%``4` `$,(`LO(`ccccc,ACx`)`$,)`, `#,(`LO(`ZZzzzz,r`)`#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(`HI(`ccccc,ACx`)`$,)`, `#,(`HI(`ZZZzzzz,r`)`#,)`, `bbbbb,ACx`"
,
(char *)0x201,
"OOOOOOk$JCCcccccJkkkkkkkLLLLLLLLLLLLLLLL"
,
"compare (uns(`CCccccc,RAx` `JJ` `kkkkkkkk`)) goto `LLLLLLLLLLLLLLLL`"
,
"BCCU `LLLLLLLLLLLLLLLL`, `CCccccc,RAx` `JJ` `kkkkkkkk`"
,
(char *)0x202,
(char *)0x0,
"DLD_R_ABS"
,
"DLD_R_ABS"
,
(char *)0x203,
(char *)0x0,
"DST_R_ABS"
,
"DST_R_ABS"
,
(char *)0x204,
(char *)0x0,
"SUB_MWK"
,
"SUB_MWK"
,
(char *)0x205,
(char *)0x0,
"DPSHR_SPW"
,
"DPSHR_SPW"
,
(char *)0x206,
(char *)0x0,
"DPOPR_SPR"
,
"DPOPR_SPR"
,
(char *)0x207,
(char *)0x0,
"DST_R"
,
"DST_R"
,
(char *)0x208,
(char *)0x0,
"DLD_R"
,
"DLD_R"
,
(char *)0x209,
"OOOOOOOOMMMMxxxxmmoaaaaa"
,
"`aaaaa,XDAx` = mar(byte(`MMMMxxxxmm,r`))"
,
"AMAR byte(`MMMMxxxxmm,r`), `aaaaa,XDAx`"
,
(char *)0x20A,
"OOOOOOOOMMMMxxxxmmqppo--KKKKKKKKKKKKKKKK"
,
"dbl(`MMMMxxxxmm,rw`) = `q_SAT,(`dbl(`MMMMxxxxmm,rw`) + `KKKKKKKKKKKKKKKK``q_SAT,)`"
,
"ADD`q_SAT` `KKKKKKKKKKKKKKKK`, dbl(`MMMMxxxxmm,rw`)"
,
(char *)0x20B,
"OOOOOOOOMMMMxxxxmmqppo--iiiiiiiiiiiiiiii"
,
"dbl(`MMMMxxxxmm,w`) = `iiiiiiiiiiiiiiii`"
,
"MOV `iiiiiiiiiiiiiiii`, dbl(`MMMMxxxxmm,w`)"
,
(char *)0x20C,
"OOOOOOOOMMMMxxxxmmqppo--kkkkkkkkkkkkkkkk"
,
"dbl(`MMMMxxxxmm,rw`) = dbl(`MMMMxxxxmm,rw`) & `kkkkkkkkkkkkkkkk`"
,
"AND `kkkkkkkkkkkkkkkk`, dbl(`MMMMxxxxmm,rw`)"
,
(char *)0x20D,
"OOOOOOOOMMMMxxxxmmqppo--kkkkkkkkkkkkkkkk"
,
"dbl(`MMMMxxxxmm,rw`) = dbl(`MMMMxxxxmm,rw`) | `kkkkkkkkkkkkkkkk`"
,
"OR `kkkkkkkkkkkkkkkk`, dbl(`MMMMxxxxmm,rw`)"
,
(char *)0x20E,
"OOOOOOOOMMMMxxxxmmqppo--kkkkkkkkkkkkkkkk"
,
"dbl(`MMMMxxxxmm,rw`) = dbl(`MMMMxxxxmm,rw`) ^ `kkkkkkkkkkkkkkkk`"
,
"XOR `kkkkkkkkkkkkkkkk`, dbl(`MMMMxxxxmm,rw`)"
,
(char *)0x20F,
"OOOOOOOOMMMMxxxxmm$aaaaapp-cccccqqSSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` + (`$,(`dbl(`MMMMxxxxmm,r`)`$,)` << `SSSSSS`)`q_SAT,)`"
,
"ADD`q_SAT` `$,(`dbl(`MMMMxxxxmm,r`)`$,)` << `SSSSSS`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x210,
"OOOOOOOOMMMMxxxxmm$aaaaapp-cccccqqSSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(``ccccc,ACx` - (`$,(`dbl(`MMMMxxxxmm,r`)`$,)` << `SSSSSS`)`q_SAT,)`"
,
"SUB`q_SAT` `$,(`dbl(`MMMMxxxxmm,r`)`$,)` << `SSSSSS`, `ccccc,ACx`, `aaaaa,ACx`"
,
(char *)0x211,
"OOOOOOOOMMMMxxxxmm$aaaaapp------qqSSSSSS"
,
"`aaaaa,ACx` = `q_SAT,(``$,(`dbl(`MMMMxxxxmm,r`)`$,)` << `SSSSSS``q_SAT,)`"
,
"MOV`q_SAT` `$,(`dbl(`MMMMxxxxmm,r`)`$,)` << `SSSSSS`, `aaaaa,ACx`"
,
(char *)0x212,
"OOOOOOOOMMMMxxxxmm%ccccc@p$----q-NNnnnnn"
,
"dbl(`MMMMxxxxmm,w`) = `@,(``$,(``%,(``ccccc,ACx` << `NNnnnnn,SRx``%,)``$,)``@,)`"
,
"MOV `$,(``%,(``@,(``ccccc,ACx` << `NNnnnnn,SRx``@,)``%,)``$,)`), dbl(`MMMMxxxxmm,w`"
,
(char *)0x213,
"OOOOOOOOMMMMxxxxmm%ccccc@p$----q--SSSSSS"
,
"dbl(`MMMMxxxxmm,w`) = `@,(``$,(``%,(``ccccc,ACx` << `SSSSSS``%,)``$,)``@,)`"
,
"MOV `$,(``%,(``@,(``ccccc,ACx` << `SSSSSS``@,)``%,)``$,)`), dbl(`MMMMxxxxmm,w`"
,
(char *)0x214,
"OOOOOOOOMMMMxxxxmmT-poJJKKKKKKKKKKKKKKKK"
,
"`T` = (dbl(`MMMMxxxxmm,r`) `JJ` `KKKKKKKKKKKKKKKK`)"
,
"CMP dbl(`MMMMxxxxmm,r`) `JJ` `KKKKKKKKKKKKKKKK`, `T`"
,
(char *)0x215,
"OOOOOOOOMMMMxxxxmmTppo-----kkkkk"
,
"`T` = bit(dbl(`MMMMxxxxmm,rw`), `kkkkk`), bit(dbl(`MMMMxxxxmm,rw`), `kkkkk`) = #0"
,
"BTSTCLR `kkkkk`, dbl(`MMMMxxxxmm,rw`), `T`"
,
(char *)0x216,
"OOOOOOOOMMMMxxxxmmTppo-----kkkkk"
,
"`T` = bit(dbl(`MMMMxxxxmm,rw`), `kkkkk`), bit(dbl(`MMMMxxxxmm,rw`), `kkkkk`) = #1"
,
"BTSTSET `kkkkk`, dbl(`MMMMxxxxmm,rw`), `T`"
,
(char *)0x217,
"OOOOOOOOMMMMxxxxmmTppo-----kkkkk"
,
"`T` = bit(dbl(`MMMMxxxxmm,r`), `kkkkk`)"
,
"BTST `kkkkk`, dbl(`MMMMxxxxmm,r`), `T`"
,
(char *)0x218,
"OOOOOOOOMMMMxxxxmmTppo-----kkkkk"
,
"`T` = bit(dbl(`MMMMxxxxmm,rw`), `kkkkk`), cbit(dbl(`MMMMxxxxmm,rw`), `kkkkk`)"
,
"BTSTNOT `kkkkk`, dbl(`MMMMxxxxmm,rw`), `T`"
,
(char *)0x219,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` + `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAC`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0x21A,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MPY`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0x21B,
"OOOOOOOWpXXXxxxxp4$aaaaa%YYYyyyyqq#bbbbb/ZZZzzzz"
,
"`aaaaa,ACx` = `q_SAT,(``4,(``%,(``aaaaa,ACx` + `/,(``$,(``XXXxxxx,r``$,)` * `#,(``W,L(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`, `bbbbb,ACx` = `q_SAT,(``4,(``%,(``bbbbb,ACx` - `/,(``$,(``YYYyyyy,r``$,)` * `#,(``W,H(``ZZZzzzz,r``W,)``#,)``/,)``%,)``4,)``q_SAT,)`"
,
"MAC`/``q_SAT``%``4` `$,(``XXXxxxx,r``$,)`, `#,(``W,L(``ZZZzzzz,r``W,)``#,)`, `aaaaa,ACx` :: MAS`/``q_SAT``%``4` `$,(``YYYyyyy,r``$,)`, `#,(``W,H(``ZZZzzzz,r``W,)``#,)`, `bbbbb,ACx`"
,
(char *)0x21C,
"OOOOOOOOppppqqqq"
,
"debug_data()"
,
"debug_data"
,
(char *)0x21D,
"OOOOOOOOppppqqqq"
,
"debug_prog()"
,
"debug_prog"
,
(char *)0x223,
(char *)0x0,
"NO_OF_INSTR"
,
"NO_OF_INSTR"
,
(char *)0x224,
(char *)0x0,
"FIELDMASK"
,
"FIELDMASK"
,
(char *)0x225,
(char *)0x0,
"REPEAT_LOCAL_END"
,
"REPEAT_LOCAL_END"
,
(char *)0x226,
(char *)0x0,
"REPEAT_BLOCK_END"
,
"REPEAT_BLOCK_END"
,
(char *)0x227,
(char *)0x0,
"REPEAT_STMT_END"
,
"REPEAT_STMT_END"
,
(char *)0x228,
(char *)0x0,
"PARALLEL"
,
"PARALLEL"
,
(char *)0x22E,
(char *)0x0,
"FILLER"
,
"FILLER"
,
(char *)0x22F,
(char *)0x0,
"ILLOP"
,
"ILLOP"
,
(char *)0x230,
(char *)0x0,
"MAX_INSTR_COUNT"
,
"MAX_INSTR_COUNT"
,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
(char *)0x0,
"@(#) $Id: dasm_header,v 1.51 2007/01/31 21:42:44 brett Exp $"
,
"@(#) $Id: tbl_encoding,v 1.9 2007/01/31 21:42:44 brett Exp $"
,
"@(#) $Id: tbl_lengths,v 1.7 2007/01/31 21:42:44 brett Exp $"
,
"@(#) $Id: tbl_opcodes,v 1.10 2007/01/31 21:42:44 brett Exp $"
,
"@(#) $Id: dasm_vars,v 1.3 2004/09/24 19:48:27 brett Exp $"

};
