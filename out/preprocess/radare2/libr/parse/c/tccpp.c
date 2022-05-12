# 0 "project/radare2/libr/parse/c/tccpp.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/parse/c/tccpp.c"
# 21 "project/radare2/libr/parse/c/tccpp.c"
# 1 "project/radare2/libr/parse/c/tcc.h" 1
# 24 "project/radare2/libr/parse/c/tcc.h"
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
# 25 "project/radare2/libr/parse/c/tcc.h" 2



# 1 "project/radare2/libr/parse/c/tcc_config.h" 1
# 29 "project/radare2/libr/parse/c/tcc.h" 2






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 36 "project/radare2/libr/parse/c/tcc.h" 2

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





# 38 "project/radare2/libr/parse/c/tcc.h" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 3 4
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
# 40 "project/radare2/libr/parse/c/tcc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 41 "project/radare2/libr/parse/c/tcc.h" 2

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


# 43 "project/radare2/libr/parse/c/tcc.h" 2
# 58 "project/radare2/libr/parse/c/tcc.h"
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




# 59 "project/radare2/libr/parse/c/tcc.h" 2
# 81 "project/radare2/libr/parse/c/tcc.h"
# 1 "project/radare2/libr/parse/c/stab.h" 1
# 9 "project/radare2/libr/parse/c/stab.h"

# 9 "project/radare2/libr/parse/c/stab.h"
enum __stab_debug_code
{
# 1 "project/radare2/libr/parse/c/stab.def" 1
# 24 "project/radare2/libr/parse/c/stab.def"
N_GSYM=0x20,



N_FNAME=0x22,




N_FUN=0x24,



N_STSYM=0x26,


N_LCSYM=0x28,



N_MAIN=0x2a,



N_PC=0x30,


N_NSYMS=0x32,


N_NOMAP=0x34,



N_OBJ=0x38,




N_OPT=0x3c,


N_RSYM=0x40,


N_M2C=0x42,



N_SLINE=0x44,


N_DSLINE=0x46,


N_BSLINE=0x48,




N_BROWS=0x48,





N_DEFD=0x4a,




N_EHDECL=0x50,

N_MOD2=0x50,






N_CATCH=0x54,


N_SSYM=0x60,



N_SO=0x64,



N_LSYM=0x80,




N_BINCL=0x82,



N_SOL=0x84,



N_PSYM=0xa0,





N_EINCL=0xa2,


N_ENTRY=0xa4,





N_LBRAC=0xc0,





N_EXCL=0xc2,


N_SCOPE=0xc4,



N_RBRAC=0xe0,


N_BCOMM=0xe2,



N_ECOMM=0xe4,



N_ECOML=0xe8,




N_NBTEXT=0xF0,
N_NBDATA=0xF2,
N_NBBSS=0xF4,
N_NBSTS=0xF6,
N_NBLCS=0xF8,



N_LENG=0xfe,
# 12 "project/radare2/libr/parse/c/stab.h" 2
LAST_UNUSED_STAB_CODE
};
# 82 "project/radare2/libr/parse/c/tcc.h" 2
# 1 "project/radare2/libr/parse/c/libtcc.h" 1
# 12 "project/radare2/libr/parse/c/libtcc.h"
struct TCCState;

typedef struct TCCState TCCState;


 TCCState *tcc_new(const char* arch, int bits, const char *os);


 void tcc_delete(TCCState *s);


 void tcc_set_lib_path(TCCState *s, const char *path);


 void tcc_set_error_func(TCCState *s, void *error_opaque,
    void (*error_func)(void *opaque, const char *msg));


 int tcc_set_options(TCCState *s, const char *str);





 int tcc_add_include_path(TCCState *s, const char *pathname);


 int tcc_add_sysinclude_path(TCCState *s, const char *pathname);


 void tcc_define_symbol(TCCState *s, const char *sym, const char *value);


 void tcc_undefine_symbol(TCCState *s, const char *sym);





 int tcc_add_file(TCCState *s, const char *filename, const char *dir);


 int tcc_compile_string(TCCState *s, const char *buf);





 int tcc_set_output_type(TCCState *s, int output_type);







 int tcc_add_library_path(TCCState *s, const char *pathname);


 int tcc_add_library(TCCState *s, const char *libraryname);


 int tcc_add_symbol(TCCState *s, const char *name, const void *val);



 int tcc_output_file(TCCState *s, const char *filename);



 int tcc_run(TCCState *s, int argc, char **argv);


 int tcc_relocate(TCCState *s1, void *ptr);
# 94 "project/radare2/libr/parse/c/libtcc.h"
 void *tcc_get_symbol(TCCState *s, const char *name);


void tcc_set_callback (TCCState *s, void (*cb)(const char *,char**), char **p);
# 83 "project/radare2/libr/parse/c/tcc.h" 2


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4








# 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
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







# 86 "project/radare2/libr/parse/c/tcc.h" 2
# 104 "project/radare2/libr/parse/c/tcc.h"

# 104 "project/radare2/libr/parse/c/tcc.h"
typedef uint64_t addr_t;
# 186 "project/radare2/libr/parse/c/tcc.h"
typedef struct TokenSym {
 struct TokenSym *hash_next;
 struct Sym *sym_define;
 struct Sym *sym_label;
 struct Sym *sym_struct;
 struct Sym *sym_identifier;
 int tok;
 int len;
 char str[1];
} TokenSym;




typedef int nwchar_t;


typedef struct CString {
 int size;
 void *data;
 int size_allocated;
 void *data_allocated;
} CString;


typedef struct CType {
 int t;
 struct Sym *ref;
} CType;


typedef union CValue {
 long double ld;
 double d;
 float f;
 int i;
 unsigned int ui;
 unsigned int ul;
 long long ll;
 unsigned long long ull;
 struct CString *cstr;
 void *ptr;
 int tab[12/4];
} CValue;


typedef struct SValue {
 CType type;
 unsigned short r;
 unsigned short r2;

 CValue c;
 struct Sym *sym;
} SValue;


typedef struct Sym {
 int v;
 char *asm_label;
 unsigned int r;
 union {
  long long c;
  int *d;
 };
 CType type;
 union {
  struct Sym *next;
  long jnext;
 };
 struct Sym *prev;
 struct Sym *prev_tok;
} Sym;


typedef struct AttributeDef {
 unsigned int
  func_call : 3,
         aligned : 5,
         packed : 1,
         func_export : 1,
         func_import : 1,
         func_args : 5,
         mode : 4,
         weak : 1,
         fill : 11;
 int alias_target;
} AttributeDef;
# 324 "project/radare2/libr/parse/c/tcc.h"
typedef struct BufferedFile {
 uint8_t *buf_ptr;
 uint8_t *buf_end;
 int fd;
 struct BufferedFile *prev;
 int line_num;
 int ifndef_macro;
 int ifndef_macro_saved;
 int *ifdef_stack_ptr;
 char filename[1024];
 unsigned char buffer[8192 + 1];
} BufferedFile;







typedef struct ParseState {
 const int *macro_ptr;
 int line_num;
 int tok;
 CValue tokc;
} ParseState;


typedef struct TokenString {
 int *str;
 int len;
 int allocated_len;
 int last_line_num;
} TokenString;


typedef struct InlineFunc {
 int *token_str;
 Sym *sym;
 char filename[1];
} InlineFunc;



typedef struct CachedInclude {
 int ifndef_macro;
 int hash_next;
 char filename[1];
} CachedInclude;



struct TCCState {
 int verbose;

 char *tcc_lib_path;


 int output_type;



 char *arch;
 int bits;
 char *os;


 
# 390 "project/radare2/libr/parse/c/tcc.h" 3 4
_Bool 
# 390 "project/radare2/libr/parse/c/tcc.h"
     char_is_unsigned;


 int warn_write_strings;
 int warn_unsupported;
 int warn_error;
 int warn_none;
 int warn_implicit_function_declaration;


 char **include_paths;
 int nb_include_paths;

 char **sysinclude_paths;
 int nb_sysinclude_paths;


 void *error_opaque;
 void (*error_func)(void *opaque, const char *msg);
 
# 409 "project/radare2/libr/parse/c/tcc.h" 3 4
_Bool 
# 409 "project/radare2/libr/parse/c/tcc.h"
     error_set_jmp_enabled;

 jmp_buf error_jmp_buf;

 int nb_errors;


 FILE *ppfp;


 char **target_deps;
 int nb_target_deps;


 BufferedFile *include_stack[32];
 BufferedFile **include_stack_ptr;

 int ifdef_stack[64];
 int *ifdef_stack_ptr;


 int cached_includes_hash[512];
 CachedInclude **cached_includes;
 int nb_cached_includes;


 int pack_stack[8];
 int *pack_stack_ptr;



 struct InlineFunc **inline_fns;
 int nb_inline_fns;

 struct sym_attr *sym_attrs;
 int nb_sym_attrs;

 int *symtab_to_dynsym;


 Sym *asm_labels;


 char *deps_outfile;
};
# 682 "project/radare2/libr/parse/c/tcc.h"
enum tcc_token {
 TOK_LAST = 256 - 1,

# 1 "project/radare2/libr/parse/c/tcctok.h" 1



TOK_INT8,
TOK_UINT8,
TOK_INT16,
TOK_UINT16,
TOK_INT32,
TOK_UINT32,
TOK_INT64,
TOK_UINT64,
TOK_INT128,
TOK_UINT128,

TOK_INT,
TOK_VOID,
TOK_CHAR,
TOK_IF,
TOK_ELSE,
TOK_WHILE,
TOK_BREAK,
TOK_RETURN,
TOK_FOR,
TOK_EXTERN,
TOK_STATIC,
TOK_UNSIGNED,
TOK_GOTO,
TOK_DO,
TOK_CONTINUE,
TOK_SWITCH,
TOK_CASE,

TOK_CONST1,
TOK_CONST2,
TOK_CONST3,
TOK_VOLATILE1,
TOK_VOLATILE2,
TOK_VOLATILE3,
TOK_LONG,
TOK_REGISTER,
TOK_SIGNED1,
TOK_SIGNED2,
TOK_SIGNED3,
TOK_AUTO,
TOK_INLINE1,
TOK_INLINE2,
TOK_INLINE3,
TOK_RESTRICT1,
TOK_RESTRICT2,
TOK_RESTRICT3,
TOK_EXTENSION,
TOK_FLOAT,
TOK_DOUBLE,
TOK_BOOL,
TOK_STDBOOL,
TOK_SHORT,
TOK_STRUCT,
TOK_UNION,
TOK_TYPEDEF,
TOK_DEFAULT,
TOK_ENUM,
TOK_SIZEOF,
TOK_ATTRIBUTE1,
TOK_ATTRIBUTE2,
TOK_ALIGNOF1,
TOK_ALIGNOF2,
TOK_TYPEOF1,
TOK_TYPEOF2,
TOK_TYPEOF3,
TOK_LABEL,
TOK_ASM1,
TOK_ASM2,
TOK_ASM3,




TOK_DEFINE,
TOK_INCLUDE,
TOK_INCLUDE_NEXT,
TOK_IFDEF,
TOK_IFNDEF,
TOK_ELIF,
TOK_ENDIF,
TOK_DEFINED,
TOK_UNDEF,
TOK_ERROR,
TOK_WARNING,
TOK_LINE,
TOK_PRAGMA,
TOK___LINE__,
TOK___FILE__,
TOK___DATE__,
TOK___TIME__,
TOK___FUNCTION__,
TOK___VA_ARGS__,


TOK___FUNC__,


TOK___NAN__,
TOK___SNAN__,
TOK___INF__,



TOK_SECTION1,
TOK_SECTION2,
TOK_ALIGNED1,
TOK_ALIGNED2,
TOK_PACKED1,
TOK_PACKED2,
TOK_WEAK1,
TOK_WEAK2,
TOK_ALIAS1,
TOK_ALIAS2,
TOK_UNUSED1,
TOK_UNUSED2,
TOK_CDECL1,
TOK_CDECL2,
TOK_CDECL3,
TOK_STDCALL1,
TOK_STDCALL2,
TOK_STDCALL3,
TOK_FASTCALL1,
TOK_FASTCALL2,
TOK_FASTCALL3,
TOK_MODE,
TOK_MODE_DI,
TOK_MODE_HI,
TOK_MODE_SI,
TOK_DLLEXPORT,
TOK_DLLIMPORT,
TOK_NORETURN1,
TOK_NORETURN2,
TOK_builtin_types_compatible_p,
TOK_builtin_constant_p,
TOK_builtin_frame_address,
TOK_builtin_va_start,
TOK_builtin_va_arg_types,
TOK_REGPARM1,
TOK_REGPARM2,


TOK_pack,

TOK_ASM_push,
TOK_ASM_pop,


TOK___aeabi_memcpy,
TOK___aeabi_memcpy4,
TOK___aeabi_memcpy8,
TOK___aeabi_memset,
TOK___aeabi_ldivmod,
TOK___aeabi_uldivmod,
TOK_memcpy,
TOK_memset,
TOK___divdi3,
TOK___moddi3,
TOK___udivdi3,
TOK___umoddi3,
TOK___aeabi_idivmod,
TOK___aeabi_uidivmod,
TOK___aeabi_divsi3,
TOK___aeabi_udivsi3,
TOK___aeabi_floatdisf,
TOK___aeabi_floatdidf,
TOK___aeabi_fixsfdi,
TOK___aeabi_fixdfdi,
TOK___modsi3,
TOK___umodsi3,
TOK___divsi3,
TOK___udivsi3,
TOK___floatdisf,
TOK___floatdidf,
TOK___floatdixf,
TOK___fixunssfsi,
TOK___fixunsdfsi,
TOK___fixunsxfsi,
TOK___fixxfdi,
TOK___fixsfdi,
TOK___fixdfdi,
TOK__divi,
TOK__divu,
TOK__divf,
TOK__divd,
TOK__remi,
TOK__remu,
TOK___tcc_int_fpu_control,
TOK___tcc_fpu_control,
TOK___aeabi_ashrdi3,
TOK___aeabi_lshrdi3,
TOK___aeabi_ashldi3,
TOK___aeabi_floatundisf,
TOK___aeabi_floatundidf,
TOK___aeabi_fixunssfdi,
TOK___aeabi_fixunsdfdi,
TOK___ashrdi3,
TOK___lshrdi3,
TOK___ashldi3,
TOK___floatundisf,
TOK___floatundidf,
TOK___floatundixf,
TOK___fixunsxfdi,
TOK___fixunssfdi,
TOK___fixunsdfdi,
TOK___chkstk,


TOK___bound_ptr_add,
TOK___bound_ptr_indir1,
TOK___bound_ptr_indir2,
TOK___bound_ptr_indir4,
TOK___bound_ptr_indir8,
TOK___bound_ptr_indir12,
TOK___bound_ptr_indir16,
TOK___bound_local_new,
TOK___bound_local_delete,
TOK_malloc,
TOK_free,
TOK_realloc,
TOK_memalign,
TOK_calloc,
TOK_memmove,
TOK_strlen,
TOK_strcpy,
TOK_alloca,
# 686 "project/radare2/libr/parse/c/tcc.h" 2

};
# 708 "project/radare2/libr/parse/c/tcc.h"
extern float strtof (const char *__nptr, char **__endptr);
extern long double strtold (const char *__nptr, char **__endptr);
# 719 "project/radare2/libr/parse/c/tcc.h"
static inline int is_space(int ch)
{
 return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\r';
}

static inline int isid(int c)
{
 return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_';
}

static inline int isnum(int c)
{
 return c >= '0' && c <= '9';
}

static inline int isdot(int c)
{
 return c == '.';
}

static inline int isoct(int c)
{
 return c >= '0' && c <= '7';
}

static inline int toup(int c)
{
 return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c;
}
# 761 "project/radare2/libr/parse/c/tcc.h"
extern char **tcc_cb_ptr;





extern int gnu_ext;

extern int tcc_ext;

extern struct TCCState *tcc_state;

static inline int tcc_nerr(void) {
 return tcc_state->nb_errors;
}
# 788 "project/radare2/libr/parse/c/tcc.h"
 char *pstrcat(char *buf, int buf_size, const char *s);
 char *pstrncpy(char *out, const char *in, size_t num);
 char *tcc_basename(const char *name);
 char *tcc_fileextension (const char *name);
 void tcc_free(void *ptr);
 void *tcc_malloc(unsigned long size);
 void *tcc_mallocz(unsigned long size);
 void *tcc_realloc(void *ptr, unsigned long size);
 char *tcc_strdup(const char *str);
 void tcc_memstats(void);
 void tcc_error_noabort(const char *fmt, ...);
 void tcc_error(const char *fmt, ...);
 void tcc_warning(const char *fmt, ...);
 void strcat_printf(char *buf, int buf_size, const char *fmt, ...);


 void dynarray_add(void ***ptab, int *nb_ptr, void *data);
 void dynarray_reset(void *pp, int *n);
 void cstr_ccat(CString *cstr, int ch);
 void cstr_cat(CString *cstr, const char *str);
 void cstr_wccat(CString *cstr, int ch);
 void cstr_new(CString *cstr);
 void cstr_free(CString *cstr);
 void cstr_reset(CString *cstr);

 void sym_free(Sym *sym);
 Sym *sym_push2(Sym **ps, int v, int t, long long c);
 Sym *sym_find2(Sym *s, int v);
 Sym *sym_push(int v, CType *type, int r, long long c);
 void sym_pop(Sym **ptop, Sym *b);
 Sym *struct_find(int v);
 Sym *sym_find(int v);
 Sym *global_identifier_push(int v, int t, long long c);

 void tcc_open_bf(TCCState *s1, const char *filename, int initlen);
 int tcc_open(TCCState *s1, const char *filename);
 void tcc_close(void);
 int tcc_add_file_internal(TCCState *s1, const char *filename, int flags);
 int tcc_parse_args(TCCState *s, int argc, char **argv);



extern int ch, tok;
extern CValue tokc;
extern const int *macro_ptr;
extern CString tokcstr;


extern int total_lines;
extern int total_bytes;
extern int tok_ident;
extern TokenSym **table_ident;
# 854 "project/radare2/libr/parse/c/tcc.h"
 TokenSym *tok_alloc(const char *str, int len);
 char *get_tok_str(int v, CValue *cv);
 void save_parse_state(ParseState *s);
 void tok_str_new(TokenString *s);
 void tok_str_free(int *str);
 void tok_str_add(TokenString *s, int t);
 void tok_str_add_tok(TokenString *s);
 void define_push(int v, int macro_type, int *str, Sym *first_arg);
 void define_undef(Sym *s);
 Sym *define_find(int v);
 void free_defines(Sym *b);
 void parse_define(void);
 void preprocess(int is_bof);
 void next_nomacro(void);
 void next(void);
 void unget_tok(int last_tok);
 void preprocess_init(TCCState *s1);
 void preprocess_new(void);
 int tcc_preprocess(TCCState *s1);
 void skip(int c);
 void expect(const char *msg);
# 888 "project/radare2/libr/parse/c/tcc.h"
extern CType char_pointer_type, func_old_type;
extern CType int8_type, int16_type, int32_type, int64_type, size_type;
extern SValue __vstack[1+ 1024], *vtop;


 
# 893 "project/radare2/libr/parse/c/tcc.h" 3 4
       _Bool 
# 893 "project/radare2/libr/parse/c/tcc.h"
            is_structured(CType *t);
 
# 894 "project/radare2/libr/parse/c/tcc.h" 3 4
       _Bool 
# 894 "project/radare2/libr/parse/c/tcc.h"
            is_struct(CType *t);
 
# 895 "project/radare2/libr/parse/c/tcc.h" 3 4
       _Bool 
# 895 "project/radare2/libr/parse/c/tcc.h"
            is_union(CType *t);
 
# 896 "project/radare2/libr/parse/c/tcc.h" 3 4
       _Bool 
# 896 "project/radare2/libr/parse/c/tcc.h"
            is_float(int t);
 
# 897 "project/radare2/libr/parse/c/tcc.h" 3 4
       _Bool 
# 897 "project/radare2/libr/parse/c/tcc.h"
            not_structured(CType *t);





 int type_size(CType *type, int *a);
 void mk_pointer(CType *type);
 int lvalue_type(int t);
 void indir(void);
 void unary(void);
 void expr_prod(void);
 void expr_sum(void);
 void gexpr(void);
 long long expr_const(void);
# 921 "project/radare2/libr/parse/c/tcc.h"
 void tcc_appendf(const char *fmt, ...);
 void tcc_typedef_appendf(const char *fmt, ...);
 void tcc_typedef_alias_fields(const char *alias);

extern void (*tcc_cb)(const char *, char **);

 
# 927 "project/radare2/libr/parse/c/tcc.h" 3 4
       _Bool 
# 927 "project/radare2/libr/parse/c/tcc.h"
            nocode_wanted;

static BufferedFile *file;
static char *funcname;
 Sym *define_stack;
 int tok_flags;
 int parse_flags;

 Sym *global_stack;
 Sym *local_stack;
 Sym *define_stack;

 void **sym_pools;
 int nb_sym_pools;

 Sym *sym_free_first;
 char *dir_name;
# 22 "project/radare2/libr/parse/c/tccpp.c" 2




 int tok_flags;






 int parse_flags;
# 42 "project/radare2/libr/parse/c/tccpp.c"
extern struct BufferedFile *file;
 int ch, tok;
 CValue tokc;
 const int *macro_ptr;
 CString tokcstr;


 int total_lines;
 int total_bytes;
 int tok_ident;
 TokenSym **table_ident;



static int *macro_ptr_allocated;
static const int *unget_saved_macro_ptr;
static int unget_saved_buffer[4 + 1];
static int unget_buffer_enabled;
static TokenSym *hash_ident[8192];
static char token_buf[1024 + 1];

static unsigned char isidnum_table[256 - (-1)];

static const char tcc_keywords[] =

# 1 "project/radare2/libr/parse/c/tcctok.h" 1



"int8_t" "\0"
"uint8_t" "\0"
"int16_t" "\0"
"uint16_t" "\0"
"int32_t" "\0"
"uint32_t" "\0"
"int64_t" "\0"
"uint64_t" "\0"
"int128_t" "\0"
"uint128_t" "\0"

"int" "\0"
"void" "\0"
"char" "\0"
"if" "\0"
"else" "\0"
"while" "\0"
"break" "\0"
"return" "\0"
"for" "\0"
"extern" "\0"
"static" "\0"
"unsigned" "\0"
"goto" "\0"
"do" "\0"
"continue" "\0"
"switch" "\0"
"case" "\0"

"const" "\0"
"__const" "\0"
"__const__" "\0"
"volatile" "\0"
"__volatile" "\0"
"__volatile__" "\0"
"long" "\0"
"register" "\0"
"signed" "\0"
"__signed" "\0"
"__signed__" "\0"
"auto" "\0"
"inline" "\0"
"__inline" "\0"
"__inline__" "\0"
"restrict" "\0"
"__restrict" "\0"
"__restrict__" "\0"
"__extension__" "\0"
"float" "\0"
"double" "\0"
"_Bool" "\0"
"bool" "\0"
"short" "\0"
"struct" "\0"
"union" "\0"
"typedef" "\0"
"default" "\0"
"enum" "\0"
"sizeof" "\0"
"__attribute" "\0"
"__attribute__" "\0"
"__alignof" "\0"
"__alignof__" "\0"
"typeof" "\0"
"__typeof" "\0"
"__typeof__" "\0"
"__label__" "\0"
"asm" "\0"
"__asm" "\0"
"__asm__" "\0"




"define" "\0"
"include" "\0"
"include_next" "\0"
"ifdef" "\0"
"ifndef" "\0"
"elif" "\0"
"endif" "\0"
"defined" "\0"
"undef" "\0"
"error" "\0"
"warning" "\0"
"line" "\0"
"pragma" "\0"
"__LINE__" "\0"
"__FILE__" "\0"
"__DATE__" "\0"
"__TIME__" "\0"
"__FUNCTION__" "\0"
"__VA_ARGS__" "\0"


"__func__" "\0"


"__nan__" "\0"
"__snan__" "\0"
"__inf__" "\0"



"section" "\0"
"__section__" "\0"
"aligned" "\0"
"__aligned__" "\0"
"packed" "\0"
"__packed__" "\0"
"weak" "\0"
"__weak__" "\0"
"alias" "\0"
"__alias__" "\0"
"unused" "\0"
"__unused__" "\0"
"cdecl" "\0"
"__cdecl" "\0"
"__cdecl__" "\0"
"stdcall" "\0"
"__stdcall" "\0"
"__stdcall__" "\0"
"fastcall" "\0"
"__fastcall" "\0"
"__fastcall__" "\0"
"__mode__" "\0"
"__DI__" "\0"
"__HI__" "\0"
"__SI__" "\0"
"dllexport" "\0"
"dllimport" "\0"
"noreturn" "\0"
"__noreturn__" "\0"
"__builtin_types_compatible_p" "\0"
"__builtin_constant_p" "\0"
"__builtin_frame_address" "\0"
"__builtin_va_start" "\0"
"__builtin_va_arg_types" "\0"
"regparm" "\0"
"__regparm__" "\0"


"pack" "\0"

"push" "\0"
"pop" "\0"


"__aeabi_memcpy" "\0"
"__aeabi_memcpy4" "\0"
"__aeabi_memcpy8" "\0"
"__aeabi_memset" "\0"
"__aeabi_ldivmod" "\0"
"__aeabi_uldivmod" "\0"
"memcpy" "\0"
"memset" "\0"
"__divdi3" "\0"
"__moddi3" "\0"
"__udivdi3" "\0"
"__umoddi3" "\0"
"__aeabi_idivmod" "\0"
"__aeabi_uidivmod" "\0"
"__aeabi_idiv" "\0"
"__aeabi_uidiv" "\0"
"__aeabi_l2f" "\0"
"__aeabi_l2d" "\0"
"__aeabi_f2lz" "\0"
"__aeabi_d2lz" "\0"
"__modsi3" "\0"
"__umodsi3" "\0"
"__divsi3" "\0"
"__udivsi3" "\0"
"__floatdisf" "\0"
"__floatdidf" "\0"
"__floatdixf" "\0"
"__fixunssfsi" "\0"
"__fixunsdfsi" "\0"
"__fixunsxfsi" "\0"
"__fixxfdi" "\0"
"__fixsfdi" "\0"
"__fixdfdi" "\0"
"_divi" "\0"
"_divu" "\0"
"_divf" "\0"
"_divd" "\0"
"_remi" "\0"
"_remu" "\0"
"__tcc_int_fpu_control" "\0"
"__tcc_fpu_control" "\0"
"__aeabi_lasr" "\0"
"__aeabi_llsr" "\0"
"__aeabi_llsl" "\0"
"__aeabi_ul2f" "\0"
"__aeabi_ul2d" "\0"
"__aeabi_f2ulz" "\0"
"__aeabi_d2ulz" "\0"
"__ashrdi3" "\0"
"__lshrdi3" "\0"
"__ashldi3" "\0"
"__floatundisf" "\0"
"__floatundidf" "\0"
"__floatundixf" "\0"
"__fixunsxfdi" "\0"
"__fixunssfdi" "\0"
"__fixunsdfdi" "\0"
"__chkstk" "\0"


"__bound_ptr_add" "\0"
"__bound_ptr_indir1" "\0"
"__bound_ptr_indir2" "\0"
"__bound_ptr_indir4" "\0"
"__bound_ptr_indir8" "\0"
"__bound_ptr_indir12" "\0"
"__bound_ptr_indir16" "\0"
"__bound_local_new" "\0"
"__bound_local_delete" "\0"
"malloc" "\0"
"free" "\0"
"realloc" "\0"
"memalign" "\0"
"calloc" "\0"
"memmove" "\0"
"strlen" "\0"
"strcpy" "\0"
"alloca" "\0"
# 68 "project/radare2/libr/parse/c/tccpp.c" 2

;


static const unsigned char tok_two_chars[] =
 "<=\236>=\235!=\225&&\240||\241++\244--\242==\224<<\1>>\2+=\253"
 "-=\255*=\252/=\257%=\245&=\246^=\336|=\374->\313..\250##\266";

struct macro_level {
 struct macro_level *prev;
 const int *p;
};

static void next_nomacro_spc(void);
static void macro_subst(
 TokenString *tok_str,
 Sym **nested_list,
 const int *macro_str,
 struct macro_level **can_read_stream
);

 void skip(int c)
{
 if (tok != c) {
  tcc_error ("'%c' expected (got \"%s\")", c, get_tok_str (tok, &tokc));
 }
 next ();
}

 void expect(const char *msg)
{
 tcc_error ("%s expected", msg);
}



static void cstr_realloc(CString *cstr, int new_size)
{
 int size;
 void *data;

 size = cstr->size_allocated;
 if (size == 0) {
  size = 8;
 }
 while (size < new_size)
  size = size * 2;
 data = realloc (cstr->data_allocated, size);
 cstr->data_allocated = data;
 cstr->size_allocated = size;
 cstr->data = data;
}


 void cstr_ccat(CString *cstr, int ch)
{
 int size;
 size = cstr->size + 1;
 if (size > cstr->size_allocated) {
  cstr_realloc (cstr, size);
 }
 ((unsigned char *) cstr->data)[size - 1] = ch;
 cstr->size = size;
}

 void cstr_cat(CString *cstr, const char *str)
{
 int c;
 for (;;) {
  c = *str;
  if (c == '\0') {
   break;
  }
  cstr_ccat (cstr, c);
  str++;
 }
}


 void cstr_wccat(CString *cstr, int ch)
{
 int size;
 size = cstr->size + sizeof(nwchar_t);
 if (size > cstr->size_allocated) {
  cstr_realloc (cstr, size);
 }
 *(nwchar_t *) (((unsigned char *) cstr->data) + size - sizeof(nwchar_t)) = ch;
 cstr->size = size;
}

 void cstr_new(CString *cstr)
{
 
# 160 "project/radare2/libr/parse/c/tccpp.c" 3 4
__builtin___memset_chk (
# 160 "project/radare2/libr/parse/c/tccpp.c"
cstr
# 160 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 
# 160 "project/radare2/libr/parse/c/tccpp.c"
0, sizeof(CString)
# 160 "project/radare2/libr/parse/c/tccpp.c" 3 4
, __builtin_object_size (
# 160 "project/radare2/libr/parse/c/tccpp.c"
cstr
# 160 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 0))
# 160 "project/radare2/libr/parse/c/tccpp.c"
                                 ;
}


 void cstr_free(CString *cstr)
{
 free (cstr->data_allocated);
 cstr_new (cstr);
}


 void cstr_reset(CString *cstr)
{
 cstr->size = 0;
}


static void add_char(CString *cstr, int c)
{
 if (c == '\'' || c == '\"' || c == '\\') {

  cstr_ccat (cstr, '\\');
 }
 if (c >= 32 && c <= 126) {
  cstr_ccat (cstr, c);
 } else {
  cstr_ccat (cstr, '\\');
  if (c == '\n') {
   cstr_ccat (cstr, 'n');
  } else {
   cstr_ccat (cstr, '0' + ((c >> 6) & 7));
   cstr_ccat (cstr, '0' + ((c >> 3) & 7));
   cstr_ccat (cstr, '0' + (c & 7));
  }
 }
}



static TokenSym *tok_alloc_new(TokenSym **pts, const char *str, int len)
{
 TokenSym *ts, **ptable;
 int i;

 if (tok_ident >= 0x10000000) {
  tcc_error ("memory full");
 }


 i = tok_ident - 256;
 if ((i % 512) == 0) {
  ptable = realloc (table_ident, (i + 512) * sizeof(TokenSym *));
  table_ident = ptable;
 }
 ts = malloc (sizeof(TokenSym) + len);
 table_ident[i] = ts;
 ts->tok = tok_ident++;
 ts->sym_define = 
# 217 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 ((void *)0)
# 217 "project/radare2/libr/parse/c/tccpp.c"
                     ;
 ts->sym_label = 
# 218 "project/radare2/libr/parse/c/tccpp.c" 3 4
                ((void *)0)
# 218 "project/radare2/libr/parse/c/tccpp.c"
                    ;
 ts->sym_struct = 
# 219 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 ((void *)0)
# 219 "project/radare2/libr/parse/c/tccpp.c"
                     ;
 ts->sym_identifier = 
# 220 "project/radare2/libr/parse/c/tccpp.c" 3 4
                     ((void *)0)
# 220 "project/radare2/libr/parse/c/tccpp.c"
                         ;
 ts->len = len;
 ts->hash_next = 
# 222 "project/radare2/libr/parse/c/tccpp.c" 3 4
                ((void *)0)
# 222 "project/radare2/libr/parse/c/tccpp.c"
                    ;
 
# 223 "project/radare2/libr/parse/c/tccpp.c" 3 4
__builtin___memcpy_chk (
# 223 "project/radare2/libr/parse/c/tccpp.c"
ts->str
# 223 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 
# 223 "project/radare2/libr/parse/c/tccpp.c"
str, len
# 223 "project/radare2/libr/parse/c/tccpp.c" 3 4
, __builtin_object_size (
# 223 "project/radare2/libr/parse/c/tccpp.c"
ts->str
# 223 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 0))
# 223 "project/radare2/libr/parse/c/tccpp.c"
                          ;
 ts->str[len] = '\0';
 *pts = ts;
 return ts;
}





 TokenSym *tok_alloc(const char *str, int len)
{
 TokenSym *ts, **pts;
 int i;
 unsigned int h;

 h = 1;
 for (i = 0; i < len; i++) {
  h = ((h) * 263 + (((unsigned char *) str)[i]));
 }
 h &= (8192 - 1);

 pts = &hash_ident[h];
 for (;;) {
  ts = *pts;
  if (!ts) {
   break;
  }
  if (ts->len == len && !memcmp (ts->str, str, len)) {
   return ts;
  }
  pts = &(ts->hash_next);
 }
 return tok_alloc_new (pts, str, len);
}



 char *get_tok_str(int v, CValue *cv)
{
 static char buf[1024 + 1];
 static CString cstr_buf;
 CString *cstr;
 char *p;
 int i, len;


 cstr_reset (&cstr_buf);
 cstr_buf.data = buf;
 cstr_buf.size_allocated = sizeof(buf);
 p = buf;

 switch (v) {
 case 0xb3:
 case 0xc8:

  if (cv) {
   
# 280 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___sprintf_chk (
# 280 "project/radare2/libr/parse/c/tccpp.c"
  p
# 280 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 0, __builtin_object_size (
# 280 "project/radare2/libr/parse/c/tccpp.c"
  p
# 280 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 280 "project/radare2/libr/parse/c/tccpp.c"
  "%u", cv->ui
# 280 "project/radare2/libr/parse/c/tccpp.c" 3 4
  )
# 280 "project/radare2/libr/parse/c/tccpp.c"
                           ;
  }
  break;
 case 0xc9:
 case 0xca:

  if (cv) {
   
# 287 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___sprintf_chk (
# 287 "project/radare2/libr/parse/c/tccpp.c"
  p
# 287 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 0, __builtin_object_size (
# 287 "project/radare2/libr/parse/c/tccpp.c"
  p
# 287 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 287 "project/radare2/libr/parse/c/tccpp.c"
  "%"
# 287 "project/radare2/libr/parse/c/tccpp.c" 3 4
  "llu"
# 287 "project/radare2/libr/parse/c/tccpp.c"
  , cv->ull
# 287 "project/radare2/libr/parse/c/tccpp.c" 3 4
  )
# 287 "project/radare2/libr/parse/c/tccpp.c"
                                  ;
  }
  break;
 case 0xb7:
  cstr_ccat (&cstr_buf, 'L');
 case 0xb4:
  cstr_ccat (&cstr_buf, '\'');
  if (cv) {
   add_char (&cstr_buf, cv->i);
  }
  cstr_ccat (&cstr_buf, '\'');
  cstr_ccat (&cstr_buf, '\0');
  break;
 case 0xce:
  cstr = cv->cstr;
  len = cstr->size - 1;
  for (i = 0; i < len; i++) {
   add_char (&cstr_buf, ((unsigned char *) cstr->data)[i]);
  }
  cstr_ccat (&cstr_buf, '\0');
  break;
 case 0xb8:
  cstr_ccat (&cstr_buf, 'L');
 case 0xb5:
  if (cv) {
   cstr = cv->cstr;
   cstr_ccat (&cstr_buf, '\"');
   if (v == 0xb5) {
    len = cstr->size - 1;
    for (i = 0; i < len; i++) {
     add_char (&cstr_buf, ((unsigned char *) cstr->data)[i]);
    }
   } else {
    len = (cstr->size / sizeof(nwchar_t)) - 1;
    for (i = 0; i < len; i++) {
     add_char (&cstr_buf, ((nwchar_t *) cstr->data)[i]);
    }
   }
   cstr_ccat (&cstr_buf, '\"');
   cstr_ccat (&cstr_buf, '\0');
  } else {
   
# 328 "project/radare2/libr/parse/c/tccpp.c" 3 4
  fprintf(__stderrp,
# 328 "project/radare2/libr/parse/c/tccpp.c"
  "cv = nil\n"
# 328 "project/radare2/libr/parse/c/tccpp.c" 3 4
  )
# 328 "project/radare2/libr/parse/c/tccpp.c"
                        ;
  }
  break;
 case 0x9c:
  v = '<';
  goto addv;
 case 0x9f:
  v = '>';
  goto addv;
 case 0xcc:
  return 
# 338 "project/radare2/libr/parse/c/tccpp.c" 3 4
        __builtin___strcpy_chk (
# 338 "project/radare2/libr/parse/c/tccpp.c"
        p
# 338 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , 
# 338 "project/radare2/libr/parse/c/tccpp.c"
        "..."
# 338 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , __builtin_object_size (
# 338 "project/radare2/libr/parse/c/tccpp.c"
        p
# 338 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , 2 > 1 ? 1 : 0))
# 338 "project/radare2/libr/parse/c/tccpp.c"
                         ;
 case 0x81:
  return 
# 340 "project/radare2/libr/parse/c/tccpp.c" 3 4
        __builtin___strcpy_chk (
# 340 "project/radare2/libr/parse/c/tccpp.c"
        p
# 340 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , 
# 340 "project/radare2/libr/parse/c/tccpp.c"
        "<<="
# 340 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , __builtin_object_size (
# 340 "project/radare2/libr/parse/c/tccpp.c"
        p
# 340 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , 2 > 1 ? 1 : 0))
# 340 "project/radare2/libr/parse/c/tccpp.c"
                         ;
 case 0x82:
  return 
# 342 "project/radare2/libr/parse/c/tccpp.c" 3 4
        __builtin___strcpy_chk (
# 342 "project/radare2/libr/parse/c/tccpp.c"
        p
# 342 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , 
# 342 "project/radare2/libr/parse/c/tccpp.c"
        ">>="
# 342 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , __builtin_object_size (
# 342 "project/radare2/libr/parse/c/tccpp.c"
        p
# 342 "project/radare2/libr/parse/c/tccpp.c" 3 4
        , 2 > 1 ? 1 : 0))
# 342 "project/radare2/libr/parse/c/tccpp.c"
                         ;
 default:
  if (v < 256) {

   const unsigned char *q = tok_two_chars;
   while (*q) {
    if (q[2] == v) {
     *p++ = q[0];
     *p++ = q[1];
     *p = '\0';
     return buf;
    }
    q += 3;
   }
addv:
   *p++ = v;
   *p = '\0';
  } else if (v < tok_ident) {
   return table_ident[v - 256]->str;
  } else if (v >= 0x10000000) {

   
# 363 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___sprintf_chk (
# 363 "project/radare2/libr/parse/c/tccpp.c"
  p
# 363 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 0, __builtin_object_size (
# 363 "project/radare2/libr/parse/c/tccpp.c"
  p
# 363 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 363 "project/radare2/libr/parse/c/tccpp.c"
  "%u", v - 0x10000000
# 363 "project/radare2/libr/parse/c/tccpp.c" 3 4
  )
# 363 "project/radare2/libr/parse/c/tccpp.c"
                                       ;
  } else {

   return 
# 366 "project/radare2/libr/parse/c/tccpp.c" 3 4
         ((void *)0)
# 366 "project/radare2/libr/parse/c/tccpp.c"
             ;
  }
  break;
 }
 return cstr_buf.data;
}


static int tcc_peekc_slow(BufferedFile *bf)
{
 int len;

 if (bf->buf_ptr >= bf->buf_end) {
  if (bf->fd != -1) {



   len = 8192;

   len = read (bf->fd, bf->buffer, len);
   if (len < 0) {
    len = 0;
   }
  } else {
   len = 0;
  }
  total_bytes += len;
  bf->buf_ptr = bf->buffer;
  bf->buf_end = bf->buffer + len;
  *bf->buf_end = '\\';
 }
 if (bf->buf_ptr < bf->buf_end) {
  return bf->buf_ptr[0];
 } else {
  bf->buf_ptr = bf->buf_end;
  return (-1);
 }
}



 int handle_eob(void)
{
 return tcc_peekc_slow (file);
}


 void inp(void)
{
 ch = *(++(file->buf_ptr));

 if (ch == '\\') {
  ch = handle_eob ();
 }
}


static int handle_stray_noerror(void)
{
 while (ch == '\\') {
  inp ();
  if (ch == '\n') {
   file->line_num++;
   inp ();
  } else if (ch == '\r') {
   inp ();
   if (ch != '\n') {
    goto fail;
   }
   file->line_num++;
   inp ();
  } else {
fail:
   return 1;
  }
 }
 return 0;
}

static void handle_stray(void)
{
 if (handle_stray_noerror ()) {
  tcc_error ("stray '\\' in program");
 }
}



static int handle_stray1(uint8_t *p)
{
 int c;

 if (p >= file->buf_end) {
  file->buf_ptr = p;
  c = handle_eob ();
  p = file->buf_ptr;
  if (c == '\\') {
   goto parse_stray;
  }
 } else {
parse_stray:
  file->buf_ptr = p;
  ch = *p;
  handle_stray ();
  p = file->buf_ptr;
  c = *p;
 }
 return c;
}
# 502 "project/radare2/libr/parse/c/tccpp.c"
 void minp(void)
{
 inp ();
 if (ch == '\\') {
  handle_stray ();
 }
}



static uint8_t *parse_line_comment(uint8_t *p)
{
 int c;

 p++;
 for (;;) {
  c = *p;
redo:
  if (c == '\n' || c == (-1)) {
   break;
  } else if (c == '\\') {
   file->buf_ptr = p;
   c = handle_eob ();
   p = file->buf_ptr;
   if (c == '\\') {
    { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
    if (c == '\n') {
     file->line_num++;
     { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
    } else if (c == '\r') {
     { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
     if (c == '\n') {
      file->line_num++;
      { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
     }
    }
   } else {
    goto redo;
   }
  } else {
   p++;
  }
 }
 return p;
}


 uint8_t *parse_comment(uint8_t *p)
{
 int c;

 p++;
 for (;;) {

  for (;;) {
   c = *p;
   if (c == '\n' || c == '*' || c == '\\') {
    break;
   }
   p++;
   c = *p;
   if (c == '\n' || c == '*' || c == '\\') {
    break;
   }
   p++;
  }

  if (c == '\n') {
   file->line_num++;
   p++;
  } else if (c == '*') {
   p++;
   for (;;) {
    c = *p;
    if (c == '*') {
     p++;
    } else if (c == '/') {
     goto end_of_comment;
    } else if (c == '\\') {
     file->buf_ptr = p;
     c = handle_eob ();
     p = file->buf_ptr;
     if (c == '\\') {

      while (c == '\\') {
       { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
       if (c == '\n') {
        file->line_num++;
        { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
       } else if (c == '\r') {
        { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
        if (c == '\n') {
         file->line_num++;
         { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
        }
       } else {
        goto after_star;
       }
      }
     }
    } else {
     break;
    }
   }
after_star:
   ;
  } else {

   file->buf_ptr = p;
   c = handle_eob ();
   p = file->buf_ptr;
   if (c == (-1)) {
    tcc_error ("unexpected end of file in comment");
   } else if (c == '\\') {
    p++;
   }
  }
 }
end_of_comment:
 p++;
 return p;
}



static inline void skip_spaces(void)
{
 while (is_space (ch))
  minp ();
}

static inline int check_space(int t, int *spc)
{
 if (is_space (t)) {
  if (*spc) {
   return 1;
  }
  *spc = 1;
 } else {
  *spc = 0;
 }
 return 0;
}


static uint8_t *parse_pp_string(uint8_t *p,
    int sep, CString *str)
{
 int c;
 p++;
 while (tcc_nerr () == 0) {
  c = *p;
  if (c == sep) {
   break;
  } else if (c == '\\') {
   file->buf_ptr = p;
   c = handle_eob ();
   p = file->buf_ptr;
   if (c == (-1)) {
unterminated_string:

    tcc_error ("missing terminating %c character", sep);
    return 
# 664 "project/radare2/libr/parse/c/tccpp.c" 3 4
          ((void *)0)
# 664 "project/radare2/libr/parse/c/tccpp.c"
              ;
   } else if (c == '\\') {

    { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
    if (c == '\n') {
     file->line_num++;
     p++;
    } else if (c == '\r') {
     { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
     if (c != '\n') {
      expect ("'\n' after '\r'");
      return 
# 675 "project/radare2/libr/parse/c/tccpp.c" 3 4
            ((void *)0)
# 675 "project/radare2/libr/parse/c/tccpp.c"
                ;
     }
     file->line_num++;
     p++;
    } else if (c == (-1)) {
     goto unterminated_string;
    } else {
     if (str) {
      cstr_ccat (str, '\\');
      cstr_ccat (str, c);
     }
     p++;
    }
   }
  } else if (c == '\n') {
   file->line_num++;
   goto add_char;
  } else if (c == '\r') {
   { p++; c = *p; if (c == '\\') { file->buf_ptr = p; c = handle_eob (); p = file->buf_ptr; } };
   if (c != '\n') {
    if (str) {
     cstr_ccat (str, '\r');
    }
   } else {
    file->line_num++;
    goto add_char;
   }
  } else {
add_char:
   if (str) {
    cstr_ccat (str, c);
   }
   p++;
  }
 }
 p++;
 return p;
}



static void preprocess_skip(void)
{
 int a, start_of_line, c, in_warn_or_error;
 uint8_t *p;

 p = file->buf_ptr;
 a = 0;
redo_start:
 start_of_line = 1;
 in_warn_or_error = 0;
 while (tcc_nerr () == 0) {
redo_no_start:
  c = *p;
  switch (c) {
  case ' ':
  case '\t':
  case '\f':
  case '\v':
  case '\r':
   p++;
   goto redo_no_start;
  case '\n':
   file->line_num++;
   p++;
   goto redo_start;
  case '\\':
   file->buf_ptr = p;
   c = handle_eob ();
   if (c == (-1)) {
    expect ("#endif");
    return;
   } else if (c == '\\') {
    ch = file->buf_ptr[0];
    handle_stray_noerror ();
   }
   p = file->buf_ptr;
   goto redo_no_start;

  case '\"':
  case '\'':
   if (in_warn_or_error) {
    goto _default;
   }
   p = parse_pp_string (p, c, 
# 759 "project/radare2/libr/parse/c/tccpp.c" 3 4
                             ((void *)0)
# 759 "project/radare2/libr/parse/c/tccpp.c"
                                 );
   if (p == 
# 760 "project/radare2/libr/parse/c/tccpp.c" 3 4
           ((void *)0)
# 760 "project/radare2/libr/parse/c/tccpp.c"
               ) {
    return;
   }
   break;

  case '/':
   if (in_warn_or_error) {
    goto _default;
   }
   file->buf_ptr = p;
   ch = *p;
   minp ();
   p = file->buf_ptr;
   if (ch == '*') {
    p = parse_comment (p);
   } else if (ch == '/') {
    p = parse_line_comment (p);
   }
   break;
  case '#':
   p++;
   if (start_of_line) {
    file->buf_ptr = p;
    next_nomacro ();
    p = file->buf_ptr;
    if (a == 0 &&
        (tok == TOK_ELSE || tok == TOK_ELIF || tok == TOK_ENDIF)) {
     goto the_end;
    }
    if (tok == TOK_IF || tok == TOK_IFDEF || tok == TOK_IFNDEF) {
     a++;
    } else if (tok == TOK_ENDIF) {
     a--;
    } else if (tok == TOK_ERROR || tok == TOK_WARNING) {
     in_warn_or_error = 1;
    } else if (tok == 10) {
     goto redo_start;
    }
   }
   break;
_default:
  default:
   p++;
   break;
  }
  start_of_line = 0;
 }
the_end:
 ;
 file->buf_ptr = p;
}
# 819 "project/radare2/libr/parse/c/tccpp.c"
 void save_parse_state(ParseState *s)
{
 s->line_num = file->line_num;
 s->macro_ptr = macro_ptr;
 s->tok = tok;
 s->tokc = tokc;
}
# 839 "project/radare2/libr/parse/c/tccpp.c"
static inline int tok_ext_size(int t)
{
 switch (t) {

 case 0xb3:
 case 0xc8:
 case 0xb4:
 case 0xb7:
 case 0xb9:
 case 0xba:
  return 1;
 case 0xb5:
 case 0xb8:
 case 0xce:
  tcc_error ("unsupported token");
  return 1;
 case 0xc0:
 case 0xc9:
 case 0xca:
  return 2;
 case 0xc1:
  return 12 / 4;
 default:
  return 0;
 }
}



 void tok_str_new(TokenString *s)
{
 s->str = 
# 870 "project/radare2/libr/parse/c/tccpp.c" 3 4
         ((void *)0)
# 870 "project/radare2/libr/parse/c/tccpp.c"
             ;
 s->len = 0;
 s->allocated_len = 0;
 s->last_line_num = -1;
}

 void tok_str_free(int *str)
{
 free (str);
}

static int *tok_str_realloc(TokenString *s)
{
 int *str, len;

 if (s->allocated_len == 0) {
  len = 8;
 } else {
  len = s->allocated_len * 2;
 }
 str = realloc (s->str, len * sizeof(int));
 s->allocated_len = len;
 s->str = str;
 return str;
}

 void tok_str_add(TokenString *s, int t)
{
 int len, *str;

 len = s->len;
 str = s->str;
 if (len >= s->allocated_len) {
  str = tok_str_realloc (s);
 }
 str[len++] = t;
 s->len = len;
}

static void tok_str_add2(TokenString *s, int t, CValue *cv)
{
 int len, *str;

 len = s->len;
 str = s->str;


 if (len + 4 > s->allocated_len) {
  str = tok_str_realloc (s);
 }
 str[len++] = t;
 switch (t) {
 case 0xb3:
 case 0xc8:
 case 0xb4:
 case 0xb7:
 case 0xb9:
 case 0xba:
  str[len++] = cv->tab[0];
  break;
 case 0xce:
 case 0xb5:
 case 0xb8:
 {
  int nb_words;

  nb_words = (sizeof(CString) + cv->cstr->size + 3) >> 2;
  while ((len + nb_words) > s->allocated_len) {
   str = tok_str_realloc (s);
  }
  CString cstr = {0};
  cstr.data = 
# 941 "project/radare2/libr/parse/c/tccpp.c" 3 4
             ((void *)0)
# 941 "project/radare2/libr/parse/c/tccpp.c"
                 ;
  cstr.size = cv->cstr->size;
  cstr.data_allocated = 
# 943 "project/radare2/libr/parse/c/tccpp.c" 3 4
                       ((void *)0)
# 943 "project/radare2/libr/parse/c/tccpp.c"
                           ;
  cstr.size_allocated = cstr.size;

  
# 946 "project/radare2/libr/parse/c/tccpp.c" 3 4
 unsigned char 
# 946 "project/radare2/libr/parse/c/tccpp.c"
     *p = (
# 946 "project/radare2/libr/parse/c/tccpp.c" 3 4
           unsigned char
# 946 "project/radare2/libr/parse/c/tccpp.c"
              *)(str + len);
  
# 947 "project/radare2/libr/parse/c/tccpp.c" 3 4
 __builtin___memcpy_chk (
# 947 "project/radare2/libr/parse/c/tccpp.c"
 p
# 947 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 
# 947 "project/radare2/libr/parse/c/tccpp.c"
 &cstr, sizeof (CString)
# 947 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , __builtin_object_size (
# 947 "project/radare2/libr/parse/c/tccpp.c"
 p
# 947 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 0))
# 947 "project/radare2/libr/parse/c/tccpp.c"
                                    ;
  
# 948 "project/radare2/libr/parse/c/tccpp.c" 3 4
 __builtin___memcpy_chk (
# 948 "project/radare2/libr/parse/c/tccpp.c"
 p + sizeof (CString)
# 948 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 
# 948 "project/radare2/libr/parse/c/tccpp.c"
 cv->cstr->data, cstr.size
# 948 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , __builtin_object_size (
# 948 "project/radare2/libr/parse/c/tccpp.c"
 p + sizeof (CString)
# 948 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 0))
                             
# 949 "project/radare2/libr/parse/c/tccpp.c"
                            ;
  len += nb_words;
 }
 break;
 case 0xc0:
 case 0xc9:
 case 0xca:



  str[len++] = cv->tab[0];
  str[len++] = cv->tab[1];
  break;

 case 0xc1:
  str[len++] = cv->tab[0];
  str[len++] = cv->tab[1];
  str[len++] = cv->tab[2];
# 976 "project/radare2/libr/parse/c/tccpp.c"
  break;
 default:
  break;
 }
 s->len = len;
}


 void tok_str_add_tok(TokenString *s)
{
 CValue cval;


 if (file->line_num != s->last_line_num) {
  s->last_line_num = file->line_num;
  cval.i = s->last_line_num;
  tok_str_add2 (s, 0xba, &cval);
 }
 tok_str_add2 (s, tok, &tokc);
}



static inline void TOK_GET(int *t, const int **pp, CValue *cv)
{
 const int *p = *pp;
 int n, *tab;

 tab = cv->tab;
 switch (*t = *p++) {
 case 0xb3:
 case 0xc8:
 case 0xb4:
 case 0xb7:
 case 0xb9:
 case 0xba:
  tab[0] = *p++;
  break;
 case 0xb5:
 case 0xb8:
 case 0xce:
  cv->cstr = (CString *) p;
  cv->cstr->data = (char *) p + sizeof(CString);
  p += (sizeof(CString) + cv->cstr->size + 3) >> 2;
  break;
 case 0xc0:
 case 0xc9:
 case 0xca:
  n = 2;
  goto copy;
 case 0xc1:



  n = 3;





copy:
  do {
   *tab++ = *p++;
  } while (--n);
  break;
 default:
  break;
 }
 *pp = p;
}

static int macro_is_equal(const int *a, const int *b)
{
 char buf[1024 + 1];
 CValue cv;
 int t;
 while (*a && *b) {
  TOK_GET (&t, &a, &cv);
  r_str_ncpy (buf, get_tok_str (t, &cv), sizeof (buf));
  TOK_GET (&t, &b, &cv);
  if (strcmp (buf, get_tok_str (t, &cv))) {
   return 0;
  }
 }
 return !(*a || *b);
}


 void define_push(int v, int macro_type, int *str, Sym *first_arg)
{
 Sym *s;

 s = define_find (v);
 if (s && !macro_is_equal (s->d, str)) {
  tcc_warning ("%s redefined", get_tok_str (v, 
# 1070 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                              ((void *)0)
# 1070 "project/radare2/libr/parse/c/tccpp.c"
                                                  ));
 }

 s = sym_push2 (&define_stack, v, macro_type, 0);
 if (!s) {
  return;
 }
 s->d = str;
 s->next = first_arg;
 if (v >= 256) {
  table_ident[v - 256]->sym_define = s;
 }
}


 void define_undef(Sym *s)
{
 int v;
 v = s->v;
 if (v >= 256 && v < tok_ident) {
  table_ident[v - 256]->sym_define = 
# 1090 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                          ((void *)0)
# 1090 "project/radare2/libr/parse/c/tccpp.c"
                                              ;
 }
 s->v = 0;
}

 Sym *define_find(int v)
{
 v -= 256;
 if ((unsigned) v >= (unsigned) (tok_ident - 256)) {
  return 
# 1099 "project/radare2/libr/parse/c/tccpp.c" 3 4
        ((void *)0)
# 1099 "project/radare2/libr/parse/c/tccpp.c"
            ;
 }
 return table_ident[v]->sym_define;
}


 void free_defines(Sym *b)
{
 Sym *top, *top1;
 int v;

 top = define_stack;
 while (top != b) {
  top1 = top->prev;

  if (top->d) {
   tok_str_free (top->d);
  }
  v = top->v;
  if (v >= 256 && v < tok_ident) {
   table_ident[v - 256]->sym_define = 
# 1119 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                           ((void *)0)
# 1119 "project/radare2/libr/parse/c/tccpp.c"
                                               ;
  }
  sym_free (top);
  top = top1;
 }
 define_stack = b;
}



static int expr_preprocess(void)
{
 int c, t;
 TokenString str;

 tok_str_new (&str);
 while (tok != 10 && tok != (-1)) {
  next ();
  if (tok == TOK_DEFINED) {
   next_nomacro ();
   t = tok;
   if (t == '(') {
    next_nomacro ();
   }
   c = define_find (tok) != 0;
   if (t == '(') {
    next_nomacro ();
   }
   tok = 0xb3;
   tokc.i = c;
  } else if (tok >= 256) {

   tok = 0xb3;
   tokc.i = 0;
  }
  tok_str_add_tok (&str);
 }
 tok_str_add (&str, -1);
 tok_str_add (&str, 0);

 macro_ptr = str.str;
 next ();
 c = expr_const ();
 macro_ptr = 
# 1162 "project/radare2/libr/parse/c/tccpp.c" 3 4
            ((void *)0)
# 1162 "project/radare2/libr/parse/c/tccpp.c"
                ;
 tok_str_free (str.str);
 return c != 0;
}
# 1186 "project/radare2/libr/parse/c/tccpp.c"
 void parse_define(void)
{
 Sym *s, *first, **ps;
 int v, t, varg, is_vaargs, spc;
 TokenString str;

 v = tok;
 if (v < 256) {
  tcc_error ("invalid macro name '%s'", get_tok_str (tok, &tokc));
 }

 first = 
# 1197 "project/radare2/libr/parse/c/tccpp.c" 3 4
        ((void *)0)
# 1197 "project/radare2/libr/parse/c/tccpp.c"
            ;
 t = 0;

 next_nomacro_spc ();
 if (tok == '(') {
  next_nomacro ();
  ps = &first;
  while (tok != ')') {
   varg = tok;
   next_nomacro ();
   is_vaargs = 0;
   if (varg == 0xcc) {
    varg = TOK___VA_ARGS__;
    is_vaargs = 1;
   } else if (tok == 0xcc && gnu_ext) {
    is_vaargs = 1;
    next_nomacro ();
   }
   if (varg < 256) {
    tcc_error ("badly punctuated parameter list");
   }
   s = sym_push2 (&define_stack, varg | 0x20000000, is_vaargs, 0);
   if (!s) {
    return;
   }
   *ps = s;
   ps = &s->next;
   if (tok != ',') {
    break;
   }
   next_nomacro ();
  }
  if (tok == ')') {
   next_nomacro_spc ();
  }
  t = 1;
 }
 tok_str_new (&str);
 spc = 2;

 while (tok != 10 && tok != (-1)) {

  if (0xb6 == tok) {
   if (1 == spc) {
    --str.len;
   }
   spc = 2;
  } else if ('#' == tok) {
   spc = 2;
  } else if (check_space (tok, &spc)) {
   goto skip;
  }
  tok_str_add2 (&str, tok, &tokc);
skip:
  next_nomacro_spc ();
 }
 if (spc == 1) {
  --str.len;
 }
 tok_str_add (&str, 0);




 define_push (v, t, str.str, first);
}

static inline int hash_cached_include(const char *filename)
{
 const unsigned char *s;
 unsigned int h;

 h = 1;
 s = (const unsigned char *) filename;
 while (*s) {
  h = ((h) * 263 + (*s));
  s++;
 }
 h &= (512 - 1);
 return h;
}

static CachedInclude *search_cached_include(TCCState *s1, const char *filename)
{
 CachedInclude *e;
 int i, h;
 h = hash_cached_include (filename);
 i = s1->cached_includes_hash[h];
 for (;;) {
  if (i == 0) {
   break;
  }
  e = s1->cached_includes[i - 1];
  if (0 == strcmp (e->filename, filename)) {
   return e;
  }
  i = e->hash_next;
 }
 return 
# 1295 "project/radare2/libr/parse/c/tccpp.c" 3 4
       ((void *)0)
# 1295 "project/radare2/libr/parse/c/tccpp.c"
           ;
}

static inline void add_cached_include(TCCState *s1, const char *filename, int ifndef_macro)
{
 CachedInclude *e;
 int h;

 if (search_cached_include (s1, filename)) {
  return;
 }



 e = malloc (sizeof(CachedInclude) + strlen (filename));
 
# 1310 "project/radare2/libr/parse/c/tccpp.c" 3 4
__builtin___strcpy_chk (
# 1310 "project/radare2/libr/parse/c/tccpp.c"
e->filename
# 1310 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 
# 1310 "project/radare2/libr/parse/c/tccpp.c"
filename
# 1310 "project/radare2/libr/parse/c/tccpp.c" 3 4
, __builtin_object_size (
# 1310 "project/radare2/libr/parse/c/tccpp.c"
e->filename
# 1310 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 2 > 1 ? 1 : 0))
# 1310 "project/radare2/libr/parse/c/tccpp.c"
                              ;
 e->ifndef_macro = ifndef_macro;
 dynarray_add ((void ***) &s1->cached_includes, &s1->nb_cached_includes, e);

 h = hash_cached_include (filename);
 e->hash_next = s1->cached_includes_hash[h];
 s1->cached_includes_hash[h] = s1->nb_cached_includes;
}

static void pragma_parse(TCCState *s1)
{
 int val;

 next ();
 if (tok == TOK_pack) {







  next ();
  skip ('(');
  if (tok == TOK_ASM_pop) {
   next ();
   if (s1->pack_stack_ptr <= s1->pack_stack) {
stk_error:
    tcc_error ("out of pack stack");
   }
   s1->pack_stack_ptr--;
  } else {
   val = 0;
   if (tok != ')') {
    if (tok == TOK_ASM_push) {
     next ();
     if (s1->pack_stack_ptr >= s1->pack_stack + 8 - 1) {
      goto stk_error;
     }
     s1->pack_stack_ptr++;
     skip (',');
    }
    if (tok != 0xb3) {
pack_error:
     tcc_error ("invalid pack pragma");
    }
    val = tokc.i;
    if (val < 1 || val > 16 || (val & (val - 1)) != 0) {
     goto pack_error;
    }
    next ();
   }
   *s1->pack_stack_ptr = val;
   skip (')');
  }
 }
}


 void preprocess(int is_bof)
{
 TCCState *s1 = tcc_state;
 int i, c, n, saved_parse_flags;
 char buf[1024], *q;
 Sym *s;

 saved_parse_flags = parse_flags;
 parse_flags = 0x0001 | 0x0002 |
        0x0004;
 next_nomacro ();
redo:
 switch (tok) {
 case TOK_DEFINE:
  next_nomacro ();
  parse_define ();
  break;
 case TOK_UNDEF:
  next_nomacro ();
  s = define_find (tok);

  if (s) {
   define_undef (s);
  }
  break;
 case TOK_INCLUDE:
 case TOK_INCLUDE_NEXT:
  ch = file->buf_ptr[0];

  skip_spaces ();
  if (ch == '<') {
   c = '>';
   goto read_name;
  } else if (ch == '\"') {
   c = ch;
read_name:
   inp ();
   q = buf;
   while (ch != c && ch != '\n' && ch != (-1)) {
    if ((q - buf) < sizeof(buf) - 1) {
     *q++ = ch;
    }
    if (ch == '\\') {
     if (handle_stray_noerror () == 0) {
      --q;
     }
    } else {
     inp ();
    }
   }
   *q = '\0';
   minp ();






  } else {


   next ();
   buf[0] = '\0';
   if (tok == 0xb5) {
    while (tok != 10) {
     if (tok != 0xb5) {
include_syntax:
      tcc_error ("'#include' expects \"FILENAME\" or <FILENAME>");
     }
     pstrcat (buf, sizeof(buf), (char *) tokc.cstr->data);
     next ();
    }
    c = '\"';
   } else {
    int len;
    while (tok != 10) {
     pstrcat (buf, sizeof(buf), get_tok_str (tok, &tokc));
     next ();
    }
    len = strlen (buf);

    if (len < 2 || buf[0] != '<' || buf[len - 1] != '>') {
     goto include_syntax;
    }
    
# 1453 "project/radare2/libr/parse/c/tccpp.c" 3 4
   __builtin___memmove_chk (
# 1453 "project/radare2/libr/parse/c/tccpp.c"
   buf
# 1453 "project/radare2/libr/parse/c/tccpp.c" 3 4
   , 
# 1453 "project/radare2/libr/parse/c/tccpp.c"
   buf + 1, len - 2
# 1453 "project/radare2/libr/parse/c/tccpp.c" 3 4
   , __builtin_object_size (
# 1453 "project/radare2/libr/parse/c/tccpp.c"
   buf
# 1453 "project/radare2/libr/parse/c/tccpp.c" 3 4
   , 0))
# 1453 "project/radare2/libr/parse/c/tccpp.c"
                                  ;
    buf[len - 2] = '\0';
    c = '>';
   }
  }

  if (s1->include_stack_ptr >= s1->include_stack + 32) {
   tcc_error ("#include recursion too deep");
  }

  *s1->include_stack_ptr = file;

  n = s1->nb_include_paths + s1->nb_sysinclude_paths;
  for (i = -2; i < n; i++) {
   char buf1[sizeof file->filename];
   CachedInclude *e;
   BufferedFile **f;
   const char *path;

   if (i == -2) {

    if (!(buf[0] == '/')) {
     continue;
    }
    buf1[0] = 0;
    i = n;

   } else if (i == -1) {

    if (c != '\"') {
     continue;
    }
    path = file->filename;
    pstrncpy (buf1, path, tcc_basename (path) - path);

   } else {

    if (i < s1->nb_include_paths) {
     path = s1->include_paths[i];
    } else {
     path = s1->sysinclude_paths[i - s1->nb_include_paths];
    }
    r_str_ncpy (buf1, path, sizeof (buf1));
    pstrcat (buf1, sizeof(buf1), "/");
   }

   pstrcat (buf1, sizeof(buf1), buf);

   if (tok == TOK_INCLUDE_NEXT) {
    for (f = s1->include_stack_ptr; f >= s1->include_stack; f--) {
     if (0 == strcmp ((*f)->filename, buf1)) {



      goto include_trynext;
     }
    }
   }

   e = search_cached_include (s1, buf1);
   if (e && define_find (e->ifndef_macro)) {





    goto include_done;
   }

   
# 1522 "project/radare2/libr/parse/c/tccpp.c" 3 4
  _Bool 
# 1522 "project/radare2/libr/parse/c/tccpp.c"
       skip = 
# 1522 "project/radare2/libr/parse/c/tccpp.c" 3 4
              0
# 1522 "project/radare2/libr/parse/c/tccpp.c"
                   ;
   if (strstr (buf1, "_overflow.h")) {
    skip = 
# 1524 "project/radare2/libr/parse/c/tccpp.c" 3 4
          1
# 1524 "project/radare2/libr/parse/c/tccpp.c"
              ;
   }
   if (!skip && tcc_open (s1, buf1) < 0) {
include_trynext:
    continue;
   }
   fprintf (
# 1530 "project/radare2/libr/parse/c/tccpp.c" 3 4
           __stderrp
# 1530 "project/radare2/libr/parse/c/tccpp.c"
                 , "#include \"%s\"\n", buf1);





   dynarray_add ((void ***) &s1->target_deps, &s1->nb_target_deps,
    strdup (buf1));

   ++s1->include_stack_ptr;
   tok_flags |= 0x0002 | 0x0001;
   ch = file->buf_ptr[0];
   goto the_end;
  }

  {
   char filepath[1024];
   int filepath_len;
   char *e = file->filename + strlen (file->filename);
   while (e > file->filename) {
    if (*e == 
# 1550 "project/radare2/libr/parse/c/tccpp.c" 3 4
             "/"
# 1550 "project/radare2/libr/parse/c/tccpp.c"
                      [0]) {
     break;
    }
    e--;
   }
   filepath_len = 
# 1555 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 (((
# 1555 "project/radare2/libr/parse/c/tccpp.c"
                 (size_t) (e - file->filename) + 1
# 1555 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 )>(
# 1555 "project/radare2/libr/parse/c/tccpp.c"
                 sizeof (filepath) - 1
# 1555 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 ))?(
# 1555 "project/radare2/libr/parse/c/tccpp.c"
                 sizeof (filepath) - 1
# 1555 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 ):(
# 1555 "project/radare2/libr/parse/c/tccpp.c"
                 (size_t) (e - file->filename) + 1
# 1555 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 ))
# 1555 "project/radare2/libr/parse/c/tccpp.c"
                                                                                 ;
   
# 1556 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___memcpy_chk (
# 1556 "project/radare2/libr/parse/c/tccpp.c"
  filepath
# 1556 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 
# 1556 "project/radare2/libr/parse/c/tccpp.c"
  file->filename, filepath_len
# 1556 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , __builtin_object_size (
# 1556 "project/radare2/libr/parse/c/tccpp.c"
  filepath
# 1556 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 0))
# 1556 "project/radare2/libr/parse/c/tccpp.c"
                                                 ;
   
# 1557 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___strcpy_chk (
# 1557 "project/radare2/libr/parse/c/tccpp.c"
  filepath + filepath_len
# 1557 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 
# 1557 "project/radare2/libr/parse/c/tccpp.c"
  buf
# 1557 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , __builtin_object_size (
# 1557 "project/radare2/libr/parse/c/tccpp.c"
  filepath + filepath_len
# 1557 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 2 > 1 ? 1 : 0))
# 1557 "project/radare2/libr/parse/c/tccpp.c"
                                       ;
   
# 1558 "project/radare2/libr/parse/c/tccpp.c" 3 4
  _Bool 
# 1558 "project/radare2/libr/parse/c/tccpp.c"
       skip = 
# 1558 "project/radare2/libr/parse/c/tccpp.c" 3 4
              0
# 1558 "project/radare2/libr/parse/c/tccpp.c"
                   ;
   if (strstr (file->filename, "_overflow.h")) {
    skip = 
# 1560 "project/radare2/libr/parse/c/tccpp.c" 3 4
          1
# 1560 "project/radare2/libr/parse/c/tccpp.c"
              ;
   }
   if (!skip && tcc_open (s1, filepath) < 0) {
    if (!dir_name) {
     dir_name = ".";
    }
    int len = 
# 1566 "project/radare2/libr/parse/c/tccpp.c" 3 4
             __builtin___snprintf_chk (
# 1566 "project/radare2/libr/parse/c/tccpp.c"
             filepath
# 1566 "project/radare2/libr/parse/c/tccpp.c" 3 4
             , 
# 1566 "project/radare2/libr/parse/c/tccpp.c"
             sizeof (filepath)
# 1566 "project/radare2/libr/parse/c/tccpp.c" 3 4
             , 0, __builtin_object_size (
# 1566 "project/radare2/libr/parse/c/tccpp.c"
             filepath
# 1566 "project/radare2/libr/parse/c/tccpp.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 1566 "project/radare2/libr/parse/c/tccpp.c"
             "%s/%s", dir_name, buf
# 1566 "project/radare2/libr/parse/c/tccpp.c" 3 4
             )
# 1566 "project/radare2/libr/parse/c/tccpp.c"
                                                                           ;
    if (len >= sizeof (filepath) || tcc_open (s1, filepath) < 0) {
     fprintf (
# 1568 "project/radare2/libr/parse/c/tccpp.c" 3 4
             __stderrp
# 1568 "project/radare2/libr/parse/c/tccpp.c"
                   , "include file '%s' not found\n", filepath);
     goto the_end;
    } else {
     fprintf (
# 1571 "project/radare2/libr/parse/c/tccpp.c" 3 4
             __stderrp
# 1571 "project/radare2/libr/parse/c/tccpp.c"
                   , "#include \"%s\"\n", filepath);
     ++s1->include_stack_ptr;
     tok_flags |= 0x0002 | 0x0001;
     ch = file->buf_ptr[0];
     goto the_end;
    }
   } else {
    fprintf (
# 1578 "project/radare2/libr/parse/c/tccpp.c" 3 4
            __stderrp
# 1578 "project/radare2/libr/parse/c/tccpp.c"
                  , "#include \"%s\"\n", filepath);
    ++s1->include_stack_ptr;
    tok_flags |= 0x0002 | 0x0001;
    ch = file->buf_ptr[0];
    goto the_end;
   }
  }
include_done:
  break;
 case TOK_IFNDEF:
  c = 1;
  goto do_ifdef;
 case TOK_IF:
  c = expr_preprocess ();
  goto do_if;
 case TOK_IFDEF:
  c = 0;
do_ifdef:
  next_nomacro ();
  if (tok < 256) {
   tcc_error ("invalid argument for '#if%sdef'", c? "n": "");
  }
  if (is_bof) {
   if (c) {



    file->ifndef_macro = tok;
   }
  }
  c = (define_find (tok) != 0) ^ c;
do_if:
  if (s1->ifdef_stack_ptr >= s1->ifdef_stack + 64) {
   tcc_error ("memory full");
  }
  *s1->ifdef_stack_ptr++ = c;
  goto test_skip;
 case TOK_ELSE:
  if (s1->ifdef_stack_ptr == s1->ifdef_stack) {
   tcc_error ("#else without matching #if");
  }
  if (s1->ifdef_stack_ptr[-1] & 2) {
   tcc_error ("#else after #else");
  }
  c = (s1->ifdef_stack_ptr[-1] ^= 3);
  goto test_else;
 case TOK_ELIF:
  if (s1->ifdef_stack_ptr == s1->ifdef_stack) {
   tcc_error ("#elif without matching #if");
  }
  c = s1->ifdef_stack_ptr[-1];
  if (c > 1) {
   tcc_error ("#elif after #else");
  }

  if (c == 1) {
   goto skip;
  }
  c = expr_preprocess ();
  s1->ifdef_stack_ptr[-1] = c;
test_else:
  if (s1->ifdef_stack_ptr == file->ifdef_stack_ptr + 1) {
   file->ifndef_macro = 0;
  }
test_skip:
  if (!(c & 1)) {
skip:
   preprocess_skip ();
   is_bof = 0;
   goto redo;
  }
  break;
 case TOK_ENDIF:
  if (s1->ifdef_stack_ptr <= file->ifdef_stack_ptr) {
   tcc_error ("#endif without matching #if");
  }
  s1->ifdef_stack_ptr--;


  if (file->ifndef_macro &&
      s1->ifdef_stack_ptr == file->ifdef_stack_ptr) {
   file->ifndef_macro_saved = file->ifndef_macro;


   file->ifndef_macro = 0;
   while (tok != 10)
    next_nomacro ();
   tok_flags |= 0x0004;
   goto the_end;
  }
  break;
 case TOK_LINE:
  next ();
  if (tok != 0xb3) {
   tcc_error ("#line");
  }
  file->line_num = tokc.i - 1;
  next ();
  if (tok != 10) {
   if (tok != 0xb5) {
    tcc_error ("#line");
   }
   r_str_ncpy (file->filename, (char *) tokc.cstr->data, sizeof(file->filename));
  }
  break;
 case TOK_ERROR:
 case TOK_WARNING:
  c = tok;
  ch = file->buf_ptr[0];
  skip_spaces ();
  q = buf;
  while (ch != '\n' && ch != (-1)) {
   if ((q - buf) < sizeof(buf) - 1) {
    *q++ = ch;
   }
   if (ch == '\\') {
    if (handle_stray_noerror () == 0) {
     --q;
    }
   } else {
    inp ();
   }
  }
  *q = '\0';
  tcc_warning ("#%s %s", c == TOK_ERROR? "error": "warning", buf);
  break;
 case TOK_PRAGMA:
  pragma_parse (s1);
  break;
 default:
  if (tok == 10 || tok == '!' || tok == 0xce) {


  } else {
   if (!(saved_parse_flags & 0x0008)) {
    tcc_warning ("Ignoring unknown preprocessing directive #%s", get_tok_str (tok, &tokc));
   } else {

    file->buf_ptr = parse_line_comment (file->buf_ptr);
    goto the_end;
   }
  }
  break;
 }

 while (tok != 10)
  next_nomacro ();
the_end:
 parse_flags = saved_parse_flags;
}


static void parse_escape_string(CString *outstr, const uint8_t *buf, int is_long)
{
 int c, n;
 const uint8_t *p;

 p = buf;
 for (;;) {
  c = *p;
  if (c == '\0') {
   break;
  }
  if (c == '\\') {
   p++;

   c = *p;
   switch (c) {
   case '0': case '1': case '2': case '3':
   case '4': case '5': case '6': case '7':

    n = c - '0';
    p++;
    c = *p;
    if (isoct (c)) {
     n = n * 8 + c - '0';
     p++;
     c = *p;
     if (isoct (c)) {
      n = n * 8 + c - '0';
      p++;
     }
    }
    c = n;
    goto add_char_nonext;
   case 'x':
   case 'u':
   case 'U':
    p++;
    n = 0;
    for (;;) {
     c = *p;
     if (c >= 'a' && c <= 'f') {
      c = c - 'a' + 10;
     } else if (c >= 'A' && c <= 'F') {
      c = c - 'A' + 10;
     } else if (isnum (c)) {
      c = c - '0';
     } else {
      break;
     }
     n = n * 16 + c;
     p++;
    }
    c = n;
    goto add_char_nonext;
   case 'a':
    c = '\a';
    break;
   case 'b':
    c = '\b';
    break;
   case 'f':
    c = '\f';
    break;
   case 'n':
    c = '\n';
    break;
   case 'r':
    c = '\r';
    break;
   case 't':
    c = '\t';
    break;
   case 'v':
    c = '\v';
    break;
   case 'e':
    if (!gnu_ext) {
     goto invalid_escape;
    }
    c = 27;
    break;
   case '\'':
   case '\"':
   case '\\':
   case '?':
    break;
   default:
invalid_escape:
    if (c >= '!' && c <= '~') {
     tcc_warning ("unknown escape sequence: \'\\%c\'", c);
    } else {
     tcc_warning ("unknown escape sequence: \'\\x%x\'", c);
    }
    break;
   }
  }
  p++;
add_char_nonext:
  if (!is_long) {
   cstr_ccat (outstr, c);
  } else {
   cstr_wccat (outstr, c);
  }
 }

 if (!is_long) {
  cstr_ccat (outstr, '\0');
 } else {
  cstr_wccat (outstr, '\0');
 }
}





static void bn_lshift(unsigned int *bn, int shift, int or_val)
{
 int i;
 unsigned int v;
 for (i = 0; i < 2; i++) {
  v = bn[i];
  bn[i] = (v << shift) | or_val;
  or_val = v >> (32 - shift);
 }
}

static void bn_zero(unsigned int *bn)
{
 int i;
 for (i = 0; i < 2; i++) {
  bn[i] = 0;
 }
}



static void parse_number(const char *p)
{
 int b, t, shift, frac_bits, s, exp_val, ch;
 char *q;
 unsigned int bn[2];
 double d;


 q = token_buf;
 ch = *p++;
 t = ch;
 ch = *p++;
 *q++ = t;
 b = 10;
 if (t == '.') {
  goto float_frac_parse;
 } else if (t == '0') {
  if (ch == 'x' || ch == 'X') {
   q--;
   ch = *p++;
   b = 16;
  } else if (tcc_ext && (ch == 'b' || ch == 'B')) {
   q--;
   ch = *p++;
   b = 2;
  }
 }


 while (1) {
  if (ch >= 'a' && ch <= 'f') {
   t = ch - 'a' + 10;
  } else if (ch >= 'A' && ch <= 'F') {
   t = ch - 'A' + 10;
  } else if (isnum (ch)) {
   t = ch - '0';
  } else {
   break;
  }
  if (t >= b) {
   break;
  }
  if (q >= token_buf + 1024) {
num_too_long:
   tcc_error ("number too long");
  }
  *q++ = ch;
  ch = *p++;
 }
 if (ch == '.' ||
     ((ch == 'e' || ch == 'E') && b == 10) ||
     ((ch == 'p' || ch == 'P') && (b == 16 || b == 2))) {
  if (b != 10) {





   *q = '\0';
   if (b == 16) {
    shift = 4;
   } else {
    shift = 2;
   }
   bn_zero (bn);
   q = token_buf;
   while (1) {
    t = *q++;
    if (t == '\0') {
     break;
    } else if (t >= 'a') {
     t = t - 'a' + 10;
    } else if (t >= 'A') {
     t = t - 'A' + 10;
    } else {
     t = t - '0';
    }
    bn_lshift (bn, shift, t);
   }
   frac_bits = 0;
   if (ch == '.') {
    ch = *p++;
    while (1) {
     t = ch;
     if (t >= 'a' && t <= 'f') {
      t = t - 'a' + 10;
     } else if (t >= 'A' && t <= 'F') {
      t = t - 'A' + 10;
     } else if (t >= '0' && t <= '9') {
      t = t - '0';
     } else {
      break;
     }
     if (t >= b) {
      tcc_error ("invalid digit");
     }
     bn_lshift (bn, shift, t);
     frac_bits += shift;
     ch = *p++;
    }
   }
   if (ch != 'p' && ch != 'P') {
    expect ("exponent");
    return;
   }
   ch = *p++;
   s = 1;
   exp_val = 0;
   if (ch == '+') {
    ch = *p++;
   } else if (ch == '-') {
    s = -1;
    ch = *p++;
   }
   if (ch < '0' || ch > '9') {
    expect ("exponent digits");
    return;
   }
   while (ch >= '0' && ch <= '9') {
    exp_val = exp_val * 10 + ch - '0';
    ch = *p++;
   }
   exp_val = exp_val * s;



   d = (double) bn[1] * 4294967296.0 + (double) bn[0];
   d = ldexp (d, exp_val - frac_bits);
   t = toup (ch);
   if (t == 'F') {
    ch = *p++;
    tok = 0xb9;

    tokc.f = (float) d;
   } else if (t == 'L') {
    ch = *p++;




    tok = 0xc1;

    tokc.ld = (long double) d;

   } else {
    tok = 0xc0;
    tokc.d = d;
   }
  } else {

   if (ch == '.') {
    if (q >= token_buf + 1024) {
     goto num_too_long;
    }
    *q++ = ch;
    ch = *p++;
float_frac_parse:
    while (ch >= '0' && ch <= '9') {
     if (q >= token_buf + 1024) {
      goto num_too_long;
     }
     *q++ = ch;
     ch = *p++;
    }
   }
   if (ch == 'e' || ch == 'E') {
    if (q >= token_buf + 1024) {
     goto num_too_long;
    }
    *q++ = ch;
    ch = *p++;
    if (ch == '-' || ch == '+') {
     if (q >= token_buf + 1024) {
      goto num_too_long;
     }
     *q++ = ch;
     ch = *p++;
    }
    if (ch < '0' || ch > '9') {
     expect ("exponent digits");
     return;
    }
    while (ch >= '0' && ch <= '9') {
     if (q >= token_buf + 1024) {
      goto num_too_long;
     }
     *q++ = ch;
     ch = *p++;
    }
   }
   *q = '\0';
   t = toup (ch);
   
# 2059 "project/radare2/libr/parse/c/tccpp.c" 3 4
  (*__error()) 
# 2059 "project/radare2/libr/parse/c/tccpp.c"
        = 0;
   if (t == 'F') {
    ch = *p++;
    tok = 0xb9;
    tokc.f = strtof (token_buf, 
# 2063 "project/radare2/libr/parse/c/tccpp.c" 3 4
                               ((void *)0)
# 2063 "project/radare2/libr/parse/c/tccpp.c"
                                   );
   } else if (t == 'L') {
    ch = *p++;
    tok = 0xc0;
    tokc.d = strtod (token_buf, 
# 2067 "project/radare2/libr/parse/c/tccpp.c" 3 4
                               ((void *)0)
# 2067 "project/radare2/libr/parse/c/tccpp.c"
                                   );
# 2077 "project/radare2/libr/parse/c/tccpp.c"
   } else {
    tok = 0xc0;
    tokc.d = strtod (token_buf, 
# 2079 "project/radare2/libr/parse/c/tccpp.c" 3 4
                               ((void *)0)
# 2079 "project/radare2/libr/parse/c/tccpp.c"
                                   );
   }
  }
 } else {
  unsigned long long n, n1;
  int lcount, ucount;


  *q = '\0';
  q = token_buf;
  if (b == 10 && *q == '0') {
   b = 8;
   q++;
  }
  n = 0;
  while (1) {
   t = *q++;

   if (t == '\0') {
    break;
   } else if (t >= 'a') {
    t = t - 'a' + 10;
   } else if (t >= 'A') {
    t = t - 'A' + 10;
   } else {
    t = t - '0';
    if (t >= b) {
     tcc_error ("invalid digit");
    }
   }
   n1 = n;
   n = n * b + t;


   if (n < n1) {
    tcc_error ("integer constant overflow");
   }
  }


  if ((n & 0xffffffff00000000LL) != 0) {
   if ((n >> 63) != 0) {
    tok = 0xca;
   } else {
    tok = 0xc9;
   }
  } else if (n > 0x7fffffff) {
   tok = 0xc8;
  } else {
   tok = 0xb3;
  }
  lcount = 0;
  ucount = 0;
  for (;;) {
   t = toup (ch);
   if (t == 'L') {
    if (lcount >= 2) {
     tcc_error ("three 'l's in integer constant");
    }
    lcount++;

    if (lcount == 2) {

    if (tok == 0xb3) {
     tok = 0xc9;
    } else if (tok == 0xc8) {
     tok = 0xca;
    }

   }

    ch = *p++;
   } else if (t == 'U') {
    if (ucount >= 1) {
     tcc_error ("two 'u's in integer constant");
    }
    ucount++;
    if (tok == 0xb3) {
     tok = 0xc8;
    } else if (tok == 0xc9) {
     tok = 0xca;
    }
    ch = *p++;
   } else {
    break;
   }
  }
  if (tok == 0xb3 || tok == 0xc8) {
   tokc.ui = n;
  } else {
   tokc.ull = n;
  }
 }
 if (ch) {
  tcc_error ("invalid number\n");
 }
}
# 2190 "project/radare2/libr/parse/c/tccpp.c"
static inline void next_nomacro1(void)
{
 int t, c, is_long;
 TokenSym *ts;
 uint8_t *p, *p1;
 unsigned int h;

 p = file->buf_ptr;
redo_no_start:
 c = *p;
 switch (c) {
 case ' ':
 case '\t':
  tok = c;
  p++;
  goto keep_tok_flags;
 case '\f':
 case '\v':
 case '\r':
  p++;
  goto redo_no_start;
 case '\\':

  if (p >= file->buf_end) {
   file->buf_ptr = p;
   handle_eob ();
   p = file->buf_ptr;
   if (p >= file->buf_end) {
    goto parse_eof;
   } else {
    goto redo_no_start;
   }
  } else {
   file->buf_ptr = p;
   ch = *p;
   handle_stray ();
   p = file->buf_ptr;
   goto redo_no_start;
  }
parse_eof:
  {
   TCCState *s1 = tcc_state;
   if ((parse_flags & 0x0004)
       && !(tok_flags & 0x0008)) {
    tok_flags |= 0x0008;
    tok = 10;
    goto keep_tok_flags;
   } else if (!(parse_flags & 0x0001)) {
    tok = (-1);
   } else if (s1->ifdef_stack_ptr != file->ifdef_stack_ptr) {
    tcc_error ("missing #endif");
   } else if (s1->include_stack_ptr == s1->include_stack) {

    tok = (-1);
   } else {
    tok_flags &= ~0x0008;




    if (tok_flags & 0x0004) {



     add_cached_include (s1, file->filename, file->ifndef_macro_saved);
     tok_flags &= ~0x0004;
    }


    tcc_close ();
    s1->include_stack_ptr--;
    p = file->buf_ptr;
    goto redo_no_start;
   }
  }
  break;

 case '\n':
  file->line_num++;
  tok_flags |= 0x0001;
  p++;
maybe_newline:
  if (0 == (parse_flags & 0x0004)) {
   goto redo_no_start;
  }
  tok = 10;
  goto keep_tok_flags;

 case '#':

  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if ((tok_flags & 0x0001) &&
      (parse_flags & 0x0001)) {
   file->buf_ptr = p;
   preprocess (tok_flags & 0x0002);
   p = file->buf_ptr;
   goto maybe_newline;
  } else {
   if (c == '#') {
    p++;
    tok = 0xb6;
   } else {
    if (parse_flags & 0x0008) {
     p = parse_line_comment (p - 1);
     goto redo_no_start;
    } else {
     tok = '#';
    }
   }
  }
  break;

 case 'a': case 'b': case 'c': case 'd':
 case 'e': case 'f': case 'g': case 'h':
 case 'i': case 'j': case 'k': case 'l':
 case 'm': case 'n': case 'o': case 'p':
 case 'q': case 'r': case 's': case 't':
 case 'u': case 'v': case 'w': case 'x':
 case 'y': case 'z':
 case 'A': case 'B': case 'C': case 'D':
 case 'E': case 'F': case 'G': case 'H':
 case 'I': case 'J': case 'K':
 case 'M': case 'N': case 'O': case 'P':
 case 'Q': case 'R': case 'S': case 'T':
 case 'U': case 'V': case 'W': case 'X':
 case 'Y': case 'Z':
 case '_': case '.':
parse_ident_fast:
  p1 = p;
  h = 1;
  h = ((h) * 263 + (c));
  p++;
  for (;;) {
   c = *p;
   if (!isidnum_table[*p - (-1)]) {
    break;
   }

   if (isdot (c)) {
    { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
    if (isnum (c)) {
     cstr_reset (&tokcstr);
     cstr_ccat (&tokcstr, '.');
     goto parse_num;
    } else if (isdot (c)) {
     goto parse_dots;
    }
   }
   h = ((h) * 263 + (*p));
   p++;
  }
  if (c != '\\') {
   TokenSym **pts;
   int len;



   len = p - p1;
   h &= (8192 - 1);
   pts = &hash_ident[h];
   for (;;) {
    ts = *pts;
    if (!ts) {
     break;
    }
    if (ts->len == len && !memcmp (ts->str, p1, len)) {
     goto token_found;
    }
    pts = &(ts->hash_next);
   }
   ts = tok_alloc_new (pts, (const char *) p1, len);
token_found:
   ;
  } else {

   cstr_reset (&tokcstr);

   while (p1 < p) {
    cstr_ccat (&tokcstr, *p1);
    p1++;
   }
   p--;
   { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
parse_ident_slow:
   while (isidnum_table[((c > 255)? 255: c) - (-1)]) {
    cstr_ccat (&tokcstr, c);
    { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
   }
   ts = tok_alloc (tokcstr.data, tokcstr.size);
  }
  tok = ts->tok;
  break;
 case 'L':
  t = p[1];
  if (t != '\\' && t != '\'' && t != '\"') {

   goto parse_ident_fast;
  } else {
   { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
   if (c == '\'' || c == '\"') {
    is_long = 1;
    goto str_const;
   } else {
    cstr_reset (&tokcstr);
    cstr_ccat (&tokcstr, 'L');
    goto parse_ident_slow;
   }
  }
  break;
 case '0': case '1': case '2': case '3':
 case '4': case '5': case '6': case '7':
 case '8': case '9':

  cstr_reset (&tokcstr);


parse_num:
  for (;;) {
   t = c;
   cstr_ccat (&tokcstr, c);
   { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
   if (!(isnum (c) || isid (c) || isdot (c) ||
         ((c == '+' || c == '-') &&
          (t == 'e' || t == 'E' || t == 'p' || t == 'P')))) {
    break;
   }
  }

  cstr_ccat (&tokcstr, '\0');
  tokc.cstr = &tokcstr;
  tok = 0xce;
  break;

parse_dots:
  if (!isdot (c)) {
   expect ("'.'");
   return;
  }
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  tok = 0xcc;
  break;
 case '\'':
 case '\"':
  is_long = 0;
str_const:
  {
   CString str;
   int sep;

   sep = c;


   cstr_new (&str);
   p = parse_pp_string (p, sep, &str);
   if (!p) {
    return;
   }
   cstr_ccat (&str, '\0');


   cstr_reset (&tokcstr);
   parse_escape_string (&tokcstr, str.data, is_long);
   cstr_free (&str);

   if (sep == '\'') {
    int char_size;

    if (!is_long) {
     char_size = 1;
    } else {
     char_size = sizeof(nwchar_t);
    }
    if (tokcstr.size <= char_size) {
     tcc_error ("empty character constant");
    }
    if (tokcstr.size > 2 * char_size) {
     tcc_warning ("multi-character character constant");
    }
    if (!is_long) {
     tokc.i = *(int8_t *) tokcstr.data;
     tok = 0xb4;
    } else {
     tokc.i = *(nwchar_t *) tokcstr.data;
     tok = 0xb7;
    }
   } else {
    tokc.cstr = &tokcstr;
    if (!is_long) {
     tok = 0xb5;
    } else {
     tok = 0xb8;
    }
   }
  }
  break;

 case '<':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '=') {
   p++;
   tok = 0x9e;
  } else if (c == '<') {
   { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
   if (c == '=') {
    p++;
    tok = 0x81;
   } else {
    tok = 0x01;
   }
  } else {
   tok = 0x9c;
  }
  break;

 case '>':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '=') {
   p++;
   tok = 0x9d;
  } else if (c == '>') {
   { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
   if (c == '=') {
    p++;
    tok = 0x82;
   } else {
    tok = 0x02;
   }
  } else {
   tok = 0x9f;
  }
  break;

 case '&':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '&') {
   p++;
   tok = 0xa0;
  } else if (c == '=') {
   p++;
   tok = 0xa6;
  } else {
   tok = '&';
  }
  break;

 case '|':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '|') {
   p++;
   tok = 0xa1;
  } else if (c == '=') {
   p++;
   tok = 0xfc;
  } else {
   tok = '|';
  }
  break;

 case '+':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '+') {
   p++;
   tok = 0xa4;
  } else if (c == '=') {
   p++;
   tok = 0xab;
  } else {
   tok = '+';
  }
  break;

 case '-':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '-') {
   p++;
   tok = 0xa2;
  } else if (c == '=') {
   p++;
   tok = 0xad;
  } else if (c == '>') {
   p++;
   tok = 0xcb;
  } else {
   tok = '-';
  }
  break;

  case '!': { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } }; if (c == '=') { p++; tok = 0x95; } else { tok = '!'; } break;
  case '=': { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } }; if (c == '=') { p++; tok = 0x94; } else { tok = '='; } break;
  case '*': { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } }; if (c == '=') { p++; tok = 0xaa; } else { tok = '*'; } break;
  case '%': { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } }; if (c == '=') { p++; tok = 0xa5; } else { tok = '%'; } break;
  case '^': { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } }; if (c == '=') { p++; tok = 0xde; } else { tok = '^'; } break;


 case '/':
  { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
  if (c == '*') {
   p = parse_comment (p);

   tok = ' ';
   goto keep_tok_flags;
  } else if (c == '/') {
   p = parse_line_comment (p);
   tok = ' ';
   goto keep_tok_flags;
  } else if (c == '=') {
   p++;
   tok = 0xaf;
  } else {
   tok = '/';
  }
  break;


 case '(':
 case ')':
 case '[':
 case ']':
 case '{':
 case '}':
 case ',':
 case ';':
 case ':':
 case '?':
 case '~':
 case '$':
 case '@':
  tok = c;
  p++;
  break;
 default:
  tcc_error ("unrecognized character \\x%02x", c);
  break;
 }
 tok_flags = 0;
keep_tok_flags:
 file->buf_ptr = p;



}



static void next_nomacro_spc(void)
{
 if (macro_ptr) {
redo:
  tok = *macro_ptr;
  if (tok) {
   TOK_GET (&tok, &macro_ptr, &tokc);
   if (tok == 0xba) {
    file->line_num = tokc.i;
    goto redo;
   }
  }
 } else {
  next_nomacro1 ();
 }
}

 void next_nomacro(void)
{
 do {
  next_nomacro_spc ();
 } while (tcc_nerr () == 0 && is_space (tok));
}


static int *macro_arg_subst(Sym **nested_list, const int *macro_str, Sym *args)
{
 int last_tok, t, spc;
 const int *st;
 Sym *s;
 CValue cval;
 TokenString str;
 CString cstr;

 tok_str_new (&str);
 last_tok = 0;
 while (tcc_nerr () == 0) {
  TOK_GET (&t, &macro_str, &cval);
  if (!t) {
   break;
  }
  if (t == '#') {

   TOK_GET (&t, &macro_str, &cval);
   if (!t) {
    break;
   }
   s = sym_find2 (args, t);
   if (s) {
    cstr_new (&cstr);
    st = s->d;
    spc = 0;
    while (*st) {
     TOK_GET (&t, &st, &cval);
     if (!check_space (t, &spc)) {
      cstr_cat (&cstr, get_tok_str (t, &cval));
     }
    }
    cstr.size -= spc;
    cstr_ccat (&cstr, '\0');




    cval.cstr = &cstr;
    tok_str_add2 (&str, 0xb5, &cval);
    cstr_free (&cstr);
   } else {
    tok_str_add2 (&str, t, &cval);
   }
  } else if (t >= 256) {
   s = sym_find2 (args, t);
   if (s) {
    st = s->d;

    if (*macro_str == 0xb6 || last_tok == 0xb6) {





     if (gnu_ext && s->type.t &&
         last_tok == 0xb6 &&
         str.len >= 2 && str.str[str.len - 2] == ',') {
      if (*st == 0) {

       str.len -= 2;
      } else {

       str.len--;
       goto add_var;
      }
     } else {
      int t1;
add_var:
      for (;;) {
       TOK_GET (&t1, &st, &cval);
       if (!t1) {
        break;
       }
       tok_str_add2 (&str, t1, &cval);
      }
     }
    } else {


     macro_subst (&str, nested_list, st, 
# 2740 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                        ((void *)0)
# 2740 "project/radare2/libr/parse/c/tccpp.c"
                                            );
    }
   } else {
    tok_str_add (&str, t);
   }
  } else {
   tok_str_add2 (&str, t, &cval);
  }
  last_tok = t;
 }
 tok_str_add (&str, 0);
 return str.str;
}

static char const ab_month_name[12][4] =
{
 "Jan", "Feb", "Mar", "Apr", "May", "Jun",
 "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};





static int macro_subst_tok(TokenString *tok_str,
      Sym **nested_list, Sym *s, struct macro_level **can_read_stream)
{
 Sym *args, *sa, *sa1;
 int mstr_allocated, parlevel, *mstr, t, t1, spc;
 const int *p;
 TokenString str;
 char *cstrval;
 CValue cval;
 CString cstr;
 char buf[32];



 if (tok == TOK___LINE__) {
  
# 2779 "project/radare2/libr/parse/c/tccpp.c" 3 4
 __builtin___snprintf_chk (
# 2779 "project/radare2/libr/parse/c/tccpp.c"
 buf
# 2779 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 
# 2779 "project/radare2/libr/parse/c/tccpp.c"
 sizeof(buf)
# 2779 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 0, __builtin_object_size (
# 2779 "project/radare2/libr/parse/c/tccpp.c"
 buf
# 2779 "project/radare2/libr/parse/c/tccpp.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 2779 "project/radare2/libr/parse/c/tccpp.c"
 "%d", file->line_num
# 2779 "project/radare2/libr/parse/c/tccpp.c" 3 4
 )
# 2779 "project/radare2/libr/parse/c/tccpp.c"
                                                  ;
  cstrval = buf;
  t1 = 0xce;
  goto add_cstr1;
 } else if (tok == TOK___FILE__) {
  cstrval = file->filename;
  goto add_cstr;
 } else if (tok == TOK___DATE__ || tok == TOK___TIME__) {
  time_t ti;
  struct tm *tm;

  time (&ti);
  tm = localtime (&ti);
  if (tok == TOK___DATE__) {
   
# 2793 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___snprintf_chk (
# 2793 "project/radare2/libr/parse/c/tccpp.c"
  buf
# 2793 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 
# 2793 "project/radare2/libr/parse/c/tccpp.c"
  sizeof(buf)
# 2793 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 0, __builtin_object_size (
# 2793 "project/radare2/libr/parse/c/tccpp.c"
  buf
# 2793 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 2793 "project/radare2/libr/parse/c/tccpp.c"
  "%s %2d %d", ab_month_name[tm->tm_mon], tm->tm_mday, tm->tm_year + 1900
# 2793 "project/radare2/libr/parse/c/tccpp.c" 3 4
  )
                                                               
# 2794 "project/radare2/libr/parse/c/tccpp.c"
                                                              ;
  } else {
   
# 2796 "project/radare2/libr/parse/c/tccpp.c" 3 4
  __builtin___snprintf_chk (
# 2796 "project/radare2/libr/parse/c/tccpp.c"
  buf
# 2796 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 
# 2796 "project/radare2/libr/parse/c/tccpp.c"
  sizeof(buf)
# 2796 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 0, __builtin_object_size (
# 2796 "project/radare2/libr/parse/c/tccpp.c"
  buf
# 2796 "project/radare2/libr/parse/c/tccpp.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 2796 "project/radare2/libr/parse/c/tccpp.c"
  "%02d:%02d:%02d", tm->tm_hour, tm->tm_min, tm->tm_sec
# 2796 "project/radare2/libr/parse/c/tccpp.c" 3 4
  )
                                        
# 2797 "project/radare2/libr/parse/c/tccpp.c"
                                       ;
  }
  cstrval = buf;
add_cstr:
  t1 = 0xb5;
add_cstr1:
  cstr_new (&cstr);
  cstr_cat (&cstr, cstrval);
  cstr_ccat (&cstr, '\0');
  cval.cstr = &cstr;
  tok_str_add2 (tok_str, t1, &cval);
  cstr_free (&cstr);
 } else {
  mstr = s->d;
  mstr_allocated = 0;
  if (s->type.t == 1) {


redo:
   if (macro_ptr) {
    p = macro_ptr;
    while (is_space (t = *p) || 10 == t)
     ++p;
    if (t == 0 && can_read_stream) {


     struct macro_level *ml = *can_read_stream;
     macro_ptr = 
# 2824 "project/radare2/libr/parse/c/tccpp.c" 3 4
                ((void *)0)
# 2824 "project/radare2/libr/parse/c/tccpp.c"
                    ;
     if (ml) {
      macro_ptr = ml->p;
      ml->p = 
# 2827 "project/radare2/libr/parse/c/tccpp.c" 3 4
             ((void *)0)
# 2827 "project/radare2/libr/parse/c/tccpp.c"
                 ;
      *can_read_stream = ml->prev;
     }

     (*nested_list)->v = -1;
     goto redo;
    }
   } else {
    ch = file->buf_ptr[0];
    while (is_space (ch) || ch == '\n' || ch == '/') {
     if (ch == '/') {
      int c;
      uint8_t *p = file->buf_ptr;
      { p++; c = *p; if (c == '\\') { c = handle_stray1 (p); p = file->buf_ptr; } };
      if (c == '*') {
       p = parse_comment (p);
       file->buf_ptr = p - 1;
      } else if (c == '/') {
       p = parse_line_comment (p);
       file->buf_ptr = p - 1;
      } else {
       break;
      }
     }
     minp ();
    }
    t = ch;
   }
   if (t != '(') {
    return -1;
   }


   next_nomacro ();
   next_nomacro ();
   args = 
# 2862 "project/radare2/libr/parse/c/tccpp.c" 3 4
         ((void *)0)
# 2862 "project/radare2/libr/parse/c/tccpp.c"
             ;
   sa = s->next;

   while (tcc_nerr () == 0) {

    if (!args && !sa && tok == ')') {
     break;
    }
    if (!sa) {
     tcc_error ("macro '%s' used with too many args",
      get_tok_str (s->v, 0));
    }
    tok_str_new (&str);
    parlevel = spc = 0;

    while ((parlevel > 0 ||
     (tok != ')' &&
      (tok != ',' || (sa && sa->type.t)))) &&
           tok != -1) {
     if (tok == '(') {
      parlevel++;
     } else if (tok == ')') {
      parlevel--;
     }
     if (tok == 10) {
      tok = ' ';
     }
     if (!check_space (tok, &spc)) {
      tok_str_add2 (&str, tok, &tokc);
     }
     next_nomacro_spc ();
    }
    str.len -= spc;
    tok_str_add (&str, 0);
    sa1 = sa ? sym_push2 (&args, sa->v & ~0x20000000, sa->type.t, 0) : 
# 2896 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                                                     ((void *)0)
# 2896 "project/radare2/libr/parse/c/tccpp.c"
                                                                         ;
    if (!sa1) {
     return -1;
    }
    sa1->d = str.str;
    sa = sa->next;
    if (tok == ')') {


     if (sa && sa->type.t && gnu_ext) {
      continue;
     } else {
      break;
     }
    }
    if (tok != ',') {
     expect (",");
     return 1;
    }
    next_nomacro ();
   }
   if (sa) {
    tcc_error ("macro '%s' used with too few args",
     get_tok_str (s->v, 0));
   }


   mstr = macro_arg_subst (nested_list, mstr, args);

   sa = args;
   while (sa) {
    sa1 = sa->prev;
    tok_str_free (sa->d);
    sym_free (sa);
    sa = sa1;
   }
   mstr_allocated = 1;
  }
  if (sym_push2 (nested_list, s->v, 0, 0) == 0) {
   return -1;
  }
  macro_subst (tok_str, nested_list, mstr, can_read_stream);

  sa1 = *nested_list;
  *nested_list = sa1->prev;
  sym_free (sa1);
  if (mstr_allocated) {
   tok_str_free (mstr);
  }
 }
 return 0;
}



static inline int *macro_twosharps(const int *macro_str)
{
 const int *ptr;
 int t;
 TokenString macro_str1;
 CString cstr;
 int n, start_of_nosubsts;


 for (ptr = macro_str;;) {
  CValue cval;
  TOK_GET (&t, &ptr, &cval);
  if (t == 0xb6) {
   break;
  }

  if (t == 0) {
   return 
# 2968 "project/radare2/libr/parse/c/tccpp.c" 3 4
         ((void *)0)
# 2968 "project/radare2/libr/parse/c/tccpp.c"
             ;
  }
 }


 start_of_nosubsts = -1;
 tok_str_new (&macro_str1);
 for (ptr = macro_str;;) {
  TOK_GET (&tok, &ptr, &tokc);
  if (tok == 0) {
   break;
  }
  if (tok == 0xb6) {
   continue;
  }
  if (tok == 0xcf && start_of_nosubsts < 0) {
   start_of_nosubsts = macro_str1.len;
  }
  while (*ptr == 0xb6) {

   if (start_of_nosubsts >= 0) {
    macro_str1.len = start_of_nosubsts;
   }

   t = *++ptr;

   while (t == 0xcf)
    t = *++ptr;
   if (t && t != 0xb6) {
    CValue cval;
    TOK_GET (&t, &ptr, &cval);

    cstr_new (&cstr);
    cstr_cat (&cstr, get_tok_str (tok, &tokc));
    n = cstr.size;
    cstr_cat (&cstr, get_tok_str (t, &cval));
    cstr_ccat (&cstr, '\0');

    tcc_open_bf (tcc_state, ":paste:", cstr.size);
    
# 3007 "project/radare2/libr/parse/c/tccpp.c" 3 4
   __builtin___memcpy_chk (
# 3007 "project/radare2/libr/parse/c/tccpp.c"
   file->buffer
# 3007 "project/radare2/libr/parse/c/tccpp.c" 3 4
   , 
# 3007 "project/radare2/libr/parse/c/tccpp.c"
   cstr.data, cstr.size
# 3007 "project/radare2/libr/parse/c/tccpp.c" 3 4
   , __builtin_object_size (
# 3007 "project/radare2/libr/parse/c/tccpp.c"
   file->buffer
# 3007 "project/radare2/libr/parse/c/tccpp.c" 3 4
   , 0))
# 3007 "project/radare2/libr/parse/c/tccpp.c"
                                              ;
    while (tcc_nerr () == 0) {
     next_nomacro1 ();
     if (0 == *file->buf_ptr) {
      break;
     }
     tok_str_add2 (&macro_str1, tok, &tokc);
     tcc_warning ("pasting \"%.*s\" and \"%s\" does not give a valid preprocessing token",
      n, (char *) cstr.data, (char *) cstr.data + n);
    }
    tcc_close ();
    cstr_free (&cstr);
   }
  }
  if (tok != 0xcf) {
   start_of_nosubsts = -1;
  }
  tok_str_add2 (&macro_str1, tok, &tokc);
 }
 tok_str_add (&macro_str1, 0);
 return macro_str1.str;
}





static void macro_subst(TokenString *tok_str, Sym **nested_list,
   const int *macro_str, struct macro_level **can_read_stream)
{
 Sym *s;
 int *macro_str1;
 const int *ptr;
 int t, ret, spc;
 CValue cval;
 struct macro_level ml;
 int force_blank;


 ptr = macro_str;
 macro_str1 = macro_twosharps (ptr);

 if (macro_str1) {
  ptr = macro_str1;
 }
 spc = 0;
 force_blank = 0;

 while (tcc_nerr () == 0) {


  if (ptr == 
# 3058 "project/radare2/libr/parse/c/tccpp.c" 3 4
            ((void *)0)
# 3058 "project/radare2/libr/parse/c/tccpp.c"
                ) {
   break;
  }
  TOK_GET (&t, &ptr, &cval);
  if (t == 0) {
   break;
  }
  if (t == 0xcf) {

   tok_str_add2 (tok_str, 0xcf, 
# 3067 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                      ((void *)0)
# 3067 "project/radare2/libr/parse/c/tccpp.c"
                                          );
   TOK_GET (&t, &ptr, &cval);
   goto no_subst;
  }
  s = define_find (t);
  if (s != 
# 3072 "project/radare2/libr/parse/c/tccpp.c" 3 4
          ((void *)0)
# 3072 "project/radare2/libr/parse/c/tccpp.c"
              ) {

   if (sym_find2 (*nested_list, t)) {

    tok_str_add2 (tok_str, 0xcf, 
# 3076 "project/radare2/libr/parse/c/tccpp.c" 3 4
                                       ((void *)0)
# 3076 "project/radare2/libr/parse/c/tccpp.c"
                                           );
    goto no_subst;
   }
   ml.p = macro_ptr;
   if (can_read_stream) {
    ml.prev = *can_read_stream, *can_read_stream = &ml;
   }
   macro_ptr = (int *) ptr;
   tok = t;
   ret = macro_subst_tok (tok_str, nested_list, s, can_read_stream);
   ptr = (int *) macro_ptr;
   macro_ptr = ml.p;
   if (can_read_stream && *can_read_stream == &ml) {
    *can_read_stream = ml.prev;
   }
   if (ret != 0) {
    goto no_subst;
   }
   if (parse_flags & 0x0010) {
    force_blank = 1;
   }
  } else {
no_subst:
   if (force_blank) {
    tok_str_add (tok_str, ' ');
    spc = 1;
    force_blank = 0;
   }
   if (!check_space (t, &spc)) {
    tok_str_add2 (tok_str, t, &cval);
   }
  }
 }
 if (macro_str1) {
  tok_str_free (macro_str1);
 }
}


 void next(void)
{
 Sym *nested_list, *s;
 TokenString str;
 struct macro_level *ml;

redo:
 if (parse_flags & 0x0010) {
  next_nomacro_spc ();
 } else {
  next_nomacro ();
 }
 if (!macro_ptr) {


  if (tok >= 256 &&
      (parse_flags & 0x0001)) {
   s = define_find (tok);
   if (s) {

    tok_str_new (&str);
    nested_list = 
# 3136 "project/radare2/libr/parse/c/tccpp.c" 3 4
                 ((void *)0)
# 3136 "project/radare2/libr/parse/c/tccpp.c"
                     ;
    ml = 
# 3137 "project/radare2/libr/parse/c/tccpp.c" 3 4
        ((void *)0)
# 3137 "project/radare2/libr/parse/c/tccpp.c"
            ;
    if (macro_subst_tok (&str, &nested_list, s, &ml) == 0) {

     tok_str_add (&str, 0);
     macro_ptr = str.str;
     macro_ptr_allocated = str.str;
     goto redo;
    }
   }
  }
 } else {
  if (tok == 0) {

   if (unget_buffer_enabled) {
    macro_ptr = unget_saved_macro_ptr;
    unget_buffer_enabled = 0;
   } else {

    tok_str_free (macro_ptr_allocated);
    macro_ptr_allocated = 
# 3156 "project/radare2/libr/parse/c/tccpp.c" 3 4
                         ((void *)0)
# 3156 "project/radare2/libr/parse/c/tccpp.c"
                             ;
    macro_ptr = 
# 3157 "project/radare2/libr/parse/c/tccpp.c" 3 4
               ((void *)0)
# 3157 "project/radare2/libr/parse/c/tccpp.c"
                   ;
   }
   goto redo;
  } else if (tok == 0xcf) {

   goto redo;
  }
 }


 if (tok == 0xce &&
     (parse_flags & 0x0002)) {
  parse_number ((char *) tokc.cstr->data);
 }
}



 void unget_tok(int last_tok)
{
 int i, n;
 int *q;
 if (unget_buffer_enabled) {


 } else {
  unget_saved_macro_ptr = macro_ptr;
  unget_buffer_enabled = 1;
 }
 q = unget_saved_buffer;
 macro_ptr = q;
 *q++ = tok;
 n = tok_ext_size (tok) - 1;
 for (i = 0; i < n; i++) {
  *q++ = tokc.tab[i];
 }
 *q = 0;
 tok = last_tok;
}




 void preprocess_init(TCCState *s1)
{
 s1->include_stack_ptr = s1->include_stack;


 s1->ifdef_stack_ptr = s1->ifdef_stack;
 file->ifdef_stack_ptr = s1->ifdef_stack_ptr;

 vtop = (__vstack + 1) - 1;
 s1->pack_stack[0] = 0;
 s1->pack_stack_ptr = s1->pack_stack;
}

 void preprocess_new(void)
{
 int i, c;
 const char *p, *r;


 for (i = (-1); i < 256; i++) {
  isidnum_table[i - (-1)] = isid (i) || isnum (i) || isdot (i);
 }


 table_ident = 
# 3224 "project/radare2/libr/parse/c/tccpp.c" 3 4
              ((void *)0)
# 3224 "project/radare2/libr/parse/c/tccpp.c"
                  ;
 
# 3225 "project/radare2/libr/parse/c/tccpp.c" 3 4
__builtin___memset_chk (
# 3225 "project/radare2/libr/parse/c/tccpp.c"
hash_ident
# 3225 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 
# 3225 "project/radare2/libr/parse/c/tccpp.c"
0, 8192 * sizeof(TokenSym *)
# 3225 "project/radare2/libr/parse/c/tccpp.c" 3 4
, __builtin_object_size (
# 3225 "project/radare2/libr/parse/c/tccpp.c"
hash_ident
# 3225 "project/radare2/libr/parse/c/tccpp.c" 3 4
, 0))
# 3225 "project/radare2/libr/parse/c/tccpp.c"
                                                          ;

 tok_ident = 256;
 p = tcc_keywords;
 while (*p) {
  r = p;
  for (;;) {
   c = *r++;
   if (c == '\0') {
    break;
   }
  }
  tok_alloc (p, r - p - 1);
  p = r;
 }
}


 int tcc_preprocess(TCCState *s1)
{
 Sym *define_start;

 BufferedFile *file_ref, **iptr, **iptr_new;
 int token_seen, line_ref, d;
 const char *s;

 preprocess_init (s1);
 define_start = define_stack;
 ch = file->buf_ptr[0];
 tok_flags = 0x0001 | 0x0002;
 parse_flags = 0x0008 | 0x0001 |
        0x0004 | 0x0010;
 token_seen = 0;
 line_ref = 0;
 file_ref = 
# 3259 "project/radare2/libr/parse/c/tccpp.c" 3 4
           ((void *)0)
# 3259 "project/radare2/libr/parse/c/tccpp.c"
               ;
 iptr = s1->include_stack_ptr;

 while (tcc_nerr () == 0) {
  next ();
  if (tok == (-1)) {
   break;
  } else if (file != file_ref) {
   goto print_line;
  } else if (tok == 10) {
   if (!token_seen) {
    continue;
   }
   ++line_ref;
   token_seen = 0;
  } else if (!token_seen) {
   d = file->line_num - line_ref;
   if (file != file_ref || d < 0 || d >= 8) {
print_line:
    iptr_new = s1->include_stack_ptr;
    s = iptr_new > iptr? " 1"
        : iptr_new < iptr? " 2"
        : iptr_new > s1->include_stack? " 3"
        : ""
    ;
    iptr = iptr_new;
    fprintf (s1->ppfp, "# %d \"%s\"%s\n", file->line_num, file->filename, s);
   } else {
    while (d)
     fputs ("\n", s1->ppfp), --d;
   }
   line_ref = (file_ref = file)->line_num;
   token_seen = tok != 10;
   if (!token_seen) {
    continue;
   }
  }
  fputs (get_tok_str (tok, &tokc), s1->ppfp);
 }
 free_defines (define_start);
 return 0;
}
