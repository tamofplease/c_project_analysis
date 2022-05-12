# 0 "project/radare2/libr/parse/c/tccgen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/parse/c/tccgen.c"
# 21 "project/radare2/libr/parse/c/tccgen.c"
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
# 22 "project/radare2/libr/parse/c/tccgen.c" 2






 char **tcc_cb_ptr;
# 38 "project/radare2/libr/parse/c/tccgen.c"
 int anon_sym = 0x10000000, loc;
 Sym *sym_free_first;
 void **sym_pools;
 int nb_sym_pools;

static size_t arraysize = 0;
static const char *global_symname = 
# 44 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                   ((void *)0)
# 44 "project/radare2/libr/parse/c/tccgen.c"
                                       ;
static const char *global_type = 
# 45 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                ((void *)0)
# 45 "project/radare2/libr/parse/c/tccgen.c"
                                    ;

 Sym *global_stack;
 Sym *local_stack;
 Sym *define_stack;

 
# 51 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 51 "project/radare2/libr/parse/c/tccgen.c"
            const_wanted = 0;
 int global_expr;






 CType char_pointer_type, func_old_type;
 CType int8_type, int16_type, int32_type, int64_type, size_type;


static inline CType *pointed_type(CType *type);
static int is_compatible_types(CType *type1, CType *type2);
static int parse_btype(CType *type, AttributeDef *ad);
static void type_decl(CType *type, AttributeDef *ad, int *v, int td);
static void parse_expr_type(CType *type);
static void decl_initializer(CType *type, unsigned long c, int first, int size_only);
static void decl_initializer_alloc(CType *type, AttributeDef *ad, int r, int has_init, int v, char *asm_label, int scope);
static int decl0(int l, int is_for_loop_init);
static void expr_eq(void);
static void unary_type(CType *type);
static int is_compatible_parameter_types(CType *type1, CType *type2);
static void expr_type(CType *type);


 
# 77 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 77 "project/radare2/libr/parse/c/tccgen.c"
            is_structured(CType *t) {
 return (t->t & 0x000f) == 7 || (t->t & 0x000f) == 8;
}

 
# 81 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 81 "project/radare2/libr/parse/c/tccgen.c"
            is_struct(CType *t) {
 return (t->t & 0x000f) == 7;
}

 
# 85 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 85 "project/radare2/libr/parse/c/tccgen.c"
            is_union(CType *t) {
 return (t->t & 0x000f) == 8;
}

 
# 89 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 89 "project/radare2/libr/parse/c/tccgen.c"
            is_enum(CType *t) {
 return (t->t & 0x000f) == 5;
}

 
# 93 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 93 "project/radare2/libr/parse/c/tccgen.c"
            is_float(int t) {
 int bt;
 bt = t & 0x000f;
 return bt == 11 || bt == 10 || bt == 9 || bt == 0x0010;
}

 
# 99 "project/radare2/libr/parse/c/tccgen.c" 3 4
       _Bool 
# 99 "project/radare2/libr/parse/c/tccgen.c"
            not_structured(CType *t) {
 return (t->t & 0x000f) != 7 && (t->t & 0x000f) != 8;
}
# 114 "project/radare2/libr/parse/c/tccgen.c"
 void test_lvalue(void) {
 if (!(vtop->r & 0x0100)) {
  expect ("lvalue");
 }
}



static Sym *__sym_malloc(void) {
 Sym *sym_pool, *sym, *last_sym;
 int i;
 int sym_pool_size = (8192 / sizeof(Sym)) * sizeof(Sym);
 sym_pool = malloc (sym_pool_size);
 
# 127 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memset_chk (
# 127 "project/radare2/libr/parse/c/tccgen.c"
sym_pool
# 127 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 
# 127 "project/radare2/libr/parse/c/tccgen.c"
0, sym_pool_size
# 127 "project/radare2/libr/parse/c/tccgen.c" 3 4
, __builtin_object_size (
# 127 "project/radare2/libr/parse/c/tccgen.c"
sym_pool
# 127 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 127 "project/radare2/libr/parse/c/tccgen.c"
                                   ;
 dynarray_add (&sym_pools, &nb_sym_pools, sym_pool);

 last_sym = sym_free_first;
 sym = sym_pool;
 for (i = 0; i < (8192 / sizeof(Sym)); i++) {
  sym->next = last_sym;
  last_sym = sym;
  sym++;
 }
 sym_free_first = last_sym;
 return last_sym;
}

static inline Sym *sym_malloc(void) {
 Sym *sym;
 sym = sym_free_first;
 if (!sym) {
  sym = __sym_malloc ();
 }
 sym_free_first = sym->next;
 return sym;
}

 void sym_free(Sym *sym) {
 sym->next = sym_free_first;
 free (sym->asm_label);
 sym_free_first = sym;
}


 Sym *sym_push2(Sym **ps, int v, int t, long long c) {
 Sym *s;
# 173 "project/radare2/libr/parse/c/tccgen.c"
 s = sym_malloc ();
 s->asm_label = 
# 174 "project/radare2/libr/parse/c/tccgen.c" 3 4
               ((void *)0)
# 174 "project/radare2/libr/parse/c/tccgen.c"
                   ;
 s->v = v;
 s->type.t = t;
 s->type.ref = 
# 177 "project/radare2/libr/parse/c/tccgen.c" 3 4
              ((void *)0)
# 177 "project/radare2/libr/parse/c/tccgen.c"
                  ;
 s->c = c;
 s->next = 
# 179 "project/radare2/libr/parse/c/tccgen.c" 3 4
          ((void *)0)
# 179 "project/radare2/libr/parse/c/tccgen.c"
              ;

 s->prev = *ps;
 *ps = s;
 return s;
}



 Sym *sym_find2(Sym *s, int v) {
 while (s) {
  if (s->v == v) {
   return s;
  }
  s = s->prev;
 }
 return 
# 195 "project/radare2/libr/parse/c/tccgen.c" 3 4
       ((void *)0)
# 195 "project/radare2/libr/parse/c/tccgen.c"
           ;
}


 Sym *struct_find(int v) {
 v -= 256;
 if ((unsigned) v >= (unsigned) (tok_ident - 256)) {
  return 
# 202 "project/radare2/libr/parse/c/tccgen.c" 3 4
        ((void *)0)
# 202 "project/radare2/libr/parse/c/tccgen.c"
            ;
 }
 return table_ident[v]->sym_struct;
}


 Sym *sym_find(int v) {
 v -= 256;
 if ((unsigned) v >= (unsigned) (tok_ident - 256)) {
  return 
# 211 "project/radare2/libr/parse/c/tccgen.c" 3 4
        ((void *)0)
# 211 "project/radare2/libr/parse/c/tccgen.c"
            ;
 }
 return table_ident[v]->sym_identifier;
}



int tcc_sym_push(char *typename, int typesize, int meta) {
 CType *new_type = (CType *) malloc (sizeof(CType));
 if (!new_type) {
  return 0;
 }
 new_type->ref = sym_malloc ();
 new_type->t = meta;

 if (!sym_push (0, new_type, 0, 0)) {
  return 0;
 }

 free (new_type);
 return 1;
}

void dump_type(CType *type, int depth) {
 if (depth <= 0) {
  return;
 }
 
# 238 "project/radare2/libr/parse/c/tccgen.c" 3 4
fprintf(__stderrp,
# 238 "project/radare2/libr/parse/c/tccgen.c"
"------------------------\n"
# 238 "project/radare2/libr/parse/c/tccgen.c" 3 4
)
# 238 "project/radare2/libr/parse/c/tccgen.c"
                                      ;
 int bt = type->t & 0x000f;
 
# 240 "project/radare2/libr/parse/c/tccgen.c" 3 4
fprintf(__stderrp,
# 240 "project/radare2/libr/parse/c/tccgen.c"
"BTYPE = %d ", bt
# 240 "project/radare2/libr/parse/c/tccgen.c" 3 4
)
# 240 "project/radare2/libr/parse/c/tccgen.c"
                           ;
 switch (bt) {
 case 8: 
# 242 "project/radare2/libr/parse/c/tccgen.c" 3 4
               fprintf(__stderrp,
# 242 "project/radare2/libr/parse/c/tccgen.c"
               "[UNION]\n"
# 242 "project/radare2/libr/parse/c/tccgen.c" 3 4
               )
# 242 "project/radare2/libr/parse/c/tccgen.c"
                                    ;
  break;
 case 7: 
# 244 "project/radare2/libr/parse/c/tccgen.c" 3 4
                fprintf(__stderrp,
# 244 "project/radare2/libr/parse/c/tccgen.c"
                "[STRUCT]\n"
# 244 "project/radare2/libr/parse/c/tccgen.c" 3 4
                )
# 244 "project/radare2/libr/parse/c/tccgen.c"
                                      ;
  break;
 case 4: 
# 246 "project/radare2/libr/parse/c/tccgen.c" 3 4
             fprintf(__stderrp,
# 246 "project/radare2/libr/parse/c/tccgen.c"
             "[PTR]\n"
# 246 "project/radare2/libr/parse/c/tccgen.c" 3 4
             )
# 246 "project/radare2/libr/parse/c/tccgen.c"
                                ;
  break;
 case 5: 
# 248 "project/radare2/libr/parse/c/tccgen.c" 3 4
              fprintf(__stderrp,
# 248 "project/radare2/libr/parse/c/tccgen.c"
              "[ENUM]\n"
# 248 "project/radare2/libr/parse/c/tccgen.c" 3 4
              )
# 248 "project/radare2/libr/parse/c/tccgen.c"
                                  ;
  break;
 case 13: 
# 250 "project/radare2/libr/parse/c/tccgen.c" 3 4
               fprintf(__stderrp,
# 250 "project/radare2/libr/parse/c/tccgen.c"
               "[INT64_T]\n"
# 250 "project/radare2/libr/parse/c/tccgen.c" 3 4
               )
# 250 "project/radare2/libr/parse/c/tccgen.c"
                                      ;
  break;
 case 0: 
# 252 "project/radare2/libr/parse/c/tccgen.c" 3 4
               fprintf(__stderrp,
# 252 "project/radare2/libr/parse/c/tccgen.c"
               "[INT32_T]\n"
# 252 "project/radare2/libr/parse/c/tccgen.c" 3 4
               )
# 252 "project/radare2/libr/parse/c/tccgen.c"
                                      ;
  break;
 case 1: 
# 254 "project/radare2/libr/parse/c/tccgen.c" 3 4
               fprintf(__stderrp,
# 254 "project/radare2/libr/parse/c/tccgen.c"
               "[INT16_T]\n"
# 254 "project/radare2/libr/parse/c/tccgen.c" 3 4
               )
# 254 "project/radare2/libr/parse/c/tccgen.c"
                                      ;
  break;
 case 2: 
# 256 "project/radare2/libr/parse/c/tccgen.c" 3 4
              fprintf(__stderrp,
# 256 "project/radare2/libr/parse/c/tccgen.c"
              "[INT8_T]\n"
# 256 "project/radare2/libr/parse/c/tccgen.c" 3 4
              )
# 256 "project/radare2/libr/parse/c/tccgen.c"
                                    ;
  break;
 default:
  
# 259 "project/radare2/libr/parse/c/tccgen.c" 3 4
 fprintf(__stderrp,
# 259 "project/radare2/libr/parse/c/tccgen.c"
 "\n"
# 259 "project/radare2/libr/parse/c/tccgen.c" 3 4
 )
# 259 "project/radare2/libr/parse/c/tccgen.c"
               ;
  break;
 }
 if (type->ref) {
  
# 263 "project/radare2/libr/parse/c/tccgen.c" 3 4
 fprintf(__stderrp,
# 263 "project/radare2/libr/parse/c/tccgen.c"
 "v = %d\n", type->ref->v
# 263 "project/radare2/libr/parse/c/tccgen.c" 3 4
 )
# 263 "project/radare2/libr/parse/c/tccgen.c"
                                   ;
  char *varstr = 
# 264 "project/radare2/libr/parse/c/tccgen.c" 3 4
                ((void *)0)
# 264 "project/radare2/libr/parse/c/tccgen.c"
                    ;
  varstr = get_tok_str (type->ref->v, 
# 265 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                     ((void *)0)
# 265 "project/radare2/libr/parse/c/tccgen.c"
                                         );
  if (varstr) {
   
# 267 "project/radare2/libr/parse/c/tccgen.c" 3 4
  fprintf(__stderrp,
# 267 "project/radare2/libr/parse/c/tccgen.c"
  "var = %s\n", varstr
# 267 "project/radare2/libr/parse/c/tccgen.c" 3 4
  )
# 267 "project/radare2/libr/parse/c/tccgen.c"
                                ;
  }
  if (type->ref->asm_label) {
   
# 270 "project/radare2/libr/parse/c/tccgen.c" 3 4
  fprintf(__stderrp,
# 270 "project/radare2/libr/parse/c/tccgen.c"
  "asm_label = %s\n", type->ref->asm_label
# 270 "project/radare2/libr/parse/c/tccgen.c" 3 4
  )
# 270 "project/radare2/libr/parse/c/tccgen.c"
                                                    ;
  }
  
# 272 "project/radare2/libr/parse/c/tccgen.c" 3 4
 fprintf(__stderrp,
# 272 "project/radare2/libr/parse/c/tccgen.c"
 "r = %d\n", type->ref->r
# 272 "project/radare2/libr/parse/c/tccgen.c" 3 4
 )
# 272 "project/radare2/libr/parse/c/tccgen.c"
                                   ;
  
# 273 "project/radare2/libr/parse/c/tccgen.c" 3 4
 fprintf(__stderrp,
# 273 "project/radare2/libr/parse/c/tccgen.c"
 "associated type:\n"
# 273 "project/radare2/libr/parse/c/tccgen.c" 3 4
 )
# 273 "project/radare2/libr/parse/c/tccgen.c"
                               ;

 }
}


 Sym *sym_push(int v, CType *type, int r, long long c) {
 Sym *s, **ps;
 TokenSym *ts;

 if (local_stack) {
  ps = &local_stack;
 } else {
  ps = &global_stack;
 }

 s = sym_push2 (ps, v, type->t, c);
 if (!s) {
  return 
# 291 "project/radare2/libr/parse/c/tccgen.c" 3 4
        ((void *)0)
# 291 "project/radare2/libr/parse/c/tccgen.c"
            ;
 }
 s->type.ref = type->ref;
 s->r = r;


 if (!(v & 0x20000000) && (v & ~0x40000000) < 0x10000000) {
  int i = (v & ~0x40000000);
  if (i < 256) {
   return 
# 300 "project/radare2/libr/parse/c/tccgen.c" 3 4
         ((void *)0)
# 300 "project/radare2/libr/parse/c/tccgen.c"
             ;
  }


  ts = table_ident[(v & ~0x40000000) - 256];
  if (v & 0x40000000) {
   ps = &ts->sym_struct;
  } else {
   ps = &ts->sym_identifier;
  }
  s->prev_tok = *ps;
  *ps = s;
 }
 return s;
}



 Sym *global_identifier_push(int v, int t, long long c) {
 Sym *s, **ps;
 s = sym_push2 (&global_stack, v, t, c);

 if (s && v < 0x10000000) {
  int i = (v & ~0x40000000);
  if (i < 256) {
   
# 325 "project/radare2/libr/parse/c/tccgen.c" 3 4
  fprintf(__stderrp,
# 325 "project/radare2/libr/parse/c/tccgen.c"
  "Not found\n"
# 325 "project/radare2/libr/parse/c/tccgen.c" 3 4
  )
# 325 "project/radare2/libr/parse/c/tccgen.c"
                         ;
   return 
# 326 "project/radare2/libr/parse/c/tccgen.c" 3 4
         ((void *)0)
# 326 "project/radare2/libr/parse/c/tccgen.c"
             ;
  }
  ps = &table_ident[i - 256]->sym_identifier;


  while (*ps) {
   ps = &(*ps)->prev_tok;
  }
  s->prev_tok = 
# 334 "project/radare2/libr/parse/c/tccgen.c" 3 4
               ((void *)0)
# 334 "project/radare2/libr/parse/c/tccgen.c"
                   ;
  *ps = s;
 }
 return s;
}



 void sym_pop(Sym **ptop, Sym *b) {
 Sym *s, *ss, **ps;
 TokenSym *ts;
 int v;
 if (!b) {
  return;
 }

 s = *ptop;
 while (s != b) {
  ss = s->prev;
  v = s->v;


  if (!(v & 0x20000000) && (v & ~0x40000000) < 0x10000000) {
   int i = (v & ~0x40000000);
   if (i < 256) {
    
# 359 "project/radare2/libr/parse/c/tccgen.c" 3 4
   fprintf(__stderrp,
# 359 "project/radare2/libr/parse/c/tccgen.c"
   "Not found\n"
# 359 "project/radare2/libr/parse/c/tccgen.c" 3 4
   )
# 359 "project/radare2/libr/parse/c/tccgen.c"
                          ;
    return;
   }
   ts = table_ident[i - 256];
   if (v & 0x40000000) {
    ps = &ts->sym_struct;
   } else {
    ps = &ts->sym_identifier;
   }
   *ps = s->prev_tok;
  }
  sym_free (s);
  s = ss;
 }
 *ptop = b;
}

static void weaken_symbol(Sym *sym) {
 sym->type.t |= 0x00020000;
}




static void vsetc(CType *type, int r, CValue *vc) {
 if (vtop >= (__vstack + 1) + (1024 - 1)) {
  do { tcc_error ("memory full"); return; } while (0);
 }
 vtop++;
 vtop->type = *type;
 vtop->r = r;
 vtop->r2 = 0x0030;
 vtop->c = *vc;
}


void vpush(CType *type) {
 CValue cval = { 0 };
 vsetc (type, 0x0030, &cval);
}


 void vpushi(int v) {
 CValue cval = { 0 };
 cval.i = v;
 vsetc (&int32_type, 0x0030, &cval);
}


static void vpushs(long long v) {
 CValue cval;
 if (4 == 4) {
  cval.i = (int) v;
 } else {
  cval.ull = v;
 }
 vsetc (&size_type, 0x0030, &cval);
}


void vpush64(int ty, unsigned long long v) {
 CValue cval;
 CType ctype;
 ctype.t = ty;
 ctype.ref = 
# 423 "project/radare2/libr/parse/c/tccgen.c" 3 4
            ((void *)0)
# 423 "project/radare2/libr/parse/c/tccgen.c"
                ;
 cval.ull = v;
 vsetc (&ctype, 0x0030, &cval);
}


 void vpushll(long long v) {
 CValue cval;
 cval.ll = v;
 vsetc (&int64_type, 0x0030, &cval);
}

 void vset(CType *type, int r, int v) {
 CValue cval;

 cval.i = v;
 vsetc (type, r, &cval);
}

static void vseti(int r, int v) {
 CType type = { 0 };
 type.t = 0;
 type.ref = 
# 445 "project/radare2/libr/parse/c/tccgen.c" 3 4
           ((void *)0)
# 445 "project/radare2/libr/parse/c/tccgen.c"
               ;
 vset (&type, r, v);
}

 void vswap(void) {
 SValue tmp;



 tmp = vtop[0];
 vtop[0] = vtop[-1];
 vtop[-1] = tmp;





}

 void vpushv(SValue *v) {
 if (vtop >= (__vstack + 1) + (1024 - 1)) {
  do { tcc_error ("memory full"); return; } while (0);
 }
 vtop++;
 *vtop = *v;
}

static void vdup(void) {
 vpushv (vtop);
}


static void gaddrof(void) {
 vtop->r &= ~0x0100;

 if ((vtop->r & 0x003f) == 0x0031) {
  vtop->r = (vtop->r & ~(0x003f | (0x1000 | 0x2000 | 0x4000))) | 0x0032 | 0x0100;
 }
}

static int pointed_size(CType *type) {
 int align;
 return type_size (pointed_type (type), &align);
}

static inline int is_integer_btype(int bt) {
 return bt == 2 || bt == 1 || bt == 0 || bt == 13;
}


 int type_size(CType *type, int *a) {
 Sym *s;
 int bt;

 bt = type->t & 0x000f;
 if (is_structured(type)) {

  s = type->ref;
  *a = s->r;
  return s->c;
 } else if (bt == 4) {
  if (type->t & 0x0040) {
   int ts;

   s = type->ref;
   ts = type_size (&s->type, a);

   if (ts < 0 && s->c < 0) {
    ts = -ts;
   }

   return ts * s->c;
  } else {
   *a = 4;
   return 4;
  }
 } else if (bt == 11) {
  *a = 4;
  return 12;
 } else if (bt == 10 || bt == 13) {
  if (!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 32) {
   if (!strncmp (tcc_state->os, "windows", 7)) {
    *a = 8;
   } else {
    *a = 4;
   }
  } else if (!strncmp (tcc_state->arch, "arm", 3)) {
# 540 "project/radare2/libr/parse/c/tccgen.c"
   *a = 8;
  } else {
   *a = 8;
  }
  return 8;
 } else if (bt == 5) {


  *a = 8;
  return 8;
 } else if (bt == 0 || bt == 9) {
  *a = 4;
  return 4;
 } else if (bt == 1) {
  *a = 2;
  return 2;
 } else if (bt == 15 || bt == 0x0010) {
  *a = 8;
  return 16;
 } else {

  *a = 1;
  return 1;
 }
}


static inline CType *pointed_type(CType *type) {
 return &type->ref->type;
}


 void mk_pointer(CType *type) {
 Sym *s;
 s = sym_push (0x20000000, type, 0, -1);
 if (!s) {
  return;
 }
 type->t = 4 | (type->t & ~(~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000))));
 type->ref = s;
}


static int is_compatible_func(CType *type1, CType *type2) {
 Sym *s1, *s2;

 s1 = type1->ref;
 s2 = type2->ref;
 if (!is_compatible_types (&s1->type, &s2->type)) {
  return 0;
 }

 if ((((AttributeDef*)&(s1->r))->func_call) != (((AttributeDef*)&(s2->r))->func_call)) {
  return 0;
 }

 if (s1->c == 2 || s2->c == 2) {
  return 1;
 }
 if (s1->c != s2->c) {
  return 0;
 }
 while (s1 != 
# 602 "project/radare2/libr/parse/c/tccgen.c" 3 4
             ((void *)0)
# 602 "project/radare2/libr/parse/c/tccgen.c"
                 ) {
  if (s2 == 
# 603 "project/radare2/libr/parse/c/tccgen.c" 3 4
           ((void *)0)
# 603 "project/radare2/libr/parse/c/tccgen.c"
               ) {
   return 0;
  }
  if (!is_compatible_parameter_types (&s1->type, &s2->type)) {
   return 0;
  }
  s1 = s1->next;
  s2 = s2->next;
 }
 if (s2) {
  return 0;
 }
 return 1;
}






static int compare_types(CType *type1, CType *type2, int unqualified) {
 int t1 = type1->t & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000)));
 int t2 = type2->t & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000)));
 if (unqualified) {

  t1 &= ~(0x1000 | 0x2000);
  t2 &= ~(0x1000 | 0x2000);
 }

 if (t1 != t2) {
  return 0;
 }

 int bt1 = t1 & 0x000f;
 if (bt1 == 4) {
  type1 = pointed_type (type1);
  type2 = pointed_type (type2);
  return is_compatible_types (type1, type2);
 } else if (bt1 == 7 || bt1 == 8) {
  return type1->ref == type2->ref;
 } else if (bt1 == 6) {
  return is_compatible_func (type1, type2);
 } else {
  return 1;
 }
}




static int is_compatible_types(CType *type1, CType *type2) {
 return compare_types (type1, type2, 0);
}



static int is_compatible_parameter_types(CType *type1, CType *type2) {
 return compare_types (type1, type2, 1);
}





static void type_to_str(char *buf, int buf_size, CType *type, const char *varstr) {
 int bt, v, t;
 Sym *s, *sa;
 char buf1[256];
 const char *tstr;
 t = type->t & (~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000)));
 bt = t & 0x000f;
 buf[0] = '\0';
 if (t & 0x1000) {
  pstrcat (buf, buf_size, "const ");
 }
 if (t & 0x2000) {
  pstrcat (buf, buf_size, "volatile ");
 }
 switch (bt) {
 case 3:
  tstr = "void";
  goto add_tstr;
 case 12:
  tstr = "bool";
  goto add_tstr;
 case 2:
  if (t & 0x0020) {
   tstr = "uint8_t";
  } else {
   if (t & 0x00040000) {
    tstr = "char";
   } else {
    tstr = "int8_t";
   }
  }
  goto add_tstr;
 case 1:
  if (t & 0x0020) {
   tstr = "uint16_t";
  } else {
   tstr = "int16_t";
  }
  goto add_tstr;
 case 0:
  if (t & 0x0020) {
   tstr = "uint32_t";
  } else {
   tstr = "int32_t";
  }
  goto add_tstr;
 case 14:
  tstr = "long";
  goto add_tstr;
 case 13:
  if (t & 0x0020) {
   tstr = "uint64_t";
  } else {
   tstr = "int64_t";
  }
  goto add_tstr;
 case 9:
  tstr = "float";
  goto add_tstr;
 case 10:
  tstr = "double";
  goto add_tstr;
 case 11:
  tstr = "long double";
add_tstr:
  pstrcat (buf, buf_size, tstr);
  if ((t & 0x0020) && (bt != 2) &&
      (bt != 1) && (bt != 0) &&
      (bt != 13)) {
   pstrcat (buf, buf_size, "unsigned ");
  }
  break;
 case 5:
 case 7:
 case 8:
  if (bt == 7) {
   tstr = "struct";
  } else if (bt == 8) {
   tstr = "union";
  } else {
   tstr = "enum";
  }
  pstrcat (buf, buf_size, tstr);
  v = type->ref->v & ~0x40000000;
  if (v < 0x10000000) {
   pstrcat (buf, buf_size, " ");
   pstrcat (buf, buf_size, get_tok_str (v, 
# 753 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                          ((void *)0)
# 753 "project/radare2/libr/parse/c/tccgen.c"
                                              ));
  }
  break;
 case 6:
  s = type->ref;
  type_to_str (buf, buf_size, &s->type, varstr);
  pstrcat (buf, buf_size, "(");
  sa = s->next;
  while (sa != 
# 761 "project/radare2/libr/parse/c/tccgen.c" 3 4
              ((void *)0)
# 761 "project/radare2/libr/parse/c/tccgen.c"
                  ) {
   type_to_str (buf1, sizeof(buf1), &sa->type, 
# 762 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                              ((void *)0)
# 762 "project/radare2/libr/parse/c/tccgen.c"
                                                  );
   pstrcat (buf, buf_size, buf1);
   sa = sa->next;
   if (sa) {
    pstrcat (buf, buf_size, ", ");
   }
  }
  pstrcat (buf, buf_size, ")");
  goto no_var;
 case 4:
  s = type->ref;
  if (t & 0x0040) {
   type_to_str (buf, buf_size, &s->type, 
# 774 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                        ((void *)0)
# 774 "project/radare2/libr/parse/c/tccgen.c"
                                            );
  } else {
   r_str_ncpy (buf1, "*", sizeof (buf1));
   if (varstr) {
    pstrcat (buf1, sizeof(buf1), varstr);
   }
   type_to_str (buf, buf_size, &s->type, buf1);
  }
  goto no_var;
 }
 if (varstr) {
  pstrcat (buf, buf_size, " ");
  pstrcat (buf, buf_size, varstr);
 }
no_var:
 ;
}
# 799 "project/radare2/libr/parse/c/tccgen.c"
static void parse_attribute(AttributeDef *ad) {
 int t;
 long long n;

 while (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
  next ();
  skip ('(');
  skip ('(');
  while (tok != ')') {
   if (tok < 256) {
    expect ("attribute name");
   }
   t = tok;
   next ();
   switch (t) {
   case TOK_ALIAS1:
   case TOK_ALIAS2:
    skip ('(');
    if (tok != 0xb5) {
     expect ("alias(\"target\")");
    }
    ad->alias_target =
         tok_alloc ((char *) tokc.cstr->data, tokc.cstr->size - 1)->tok;
    next ();
    skip (')');
    break;
   case TOK_ALIGNED1:
   case TOK_ALIGNED2:
    if (tok == '(') {
     next ();
     n = expr_const ();
     if (n <= 0 || (n & (n - 1)) != 0) {
      do { tcc_error ("alignment must be a positive power of two"); return; } while (0);
     }
     skip (')');
    } else {
     n = 8;
    }
    ad->aligned = n;
    break;
   case TOK_PACKED1:
   case TOK_PACKED2:
    ad->packed = 1;
    break;
   case TOK_WEAK1:
   case TOK_WEAK2:
    ad->weak = 1;
    break;
   case TOK_UNUSED1:
   case TOK_UNUSED2:


    break;
   case TOK_NORETURN1:
   case TOK_NORETURN2:


    break;
   case TOK_CDECL1:
   case TOK_CDECL2:
   case TOK_CDECL3:
    ad->func_call = 0;
    break;
   case TOK_STDCALL1:
   case TOK_STDCALL2:
   case TOK_STDCALL3:
    ad->func_call = 1;
    break;
# 888 "project/radare2/libr/parse/c/tccgen.c"
   case TOK_MODE:
    skip ('(');
    switch (tok) {
    case TOK_MODE_DI:
     ad->mode = 13 + 1;
     break;
    case TOK_MODE_HI:
     ad->mode = 1 + 1;
     break;
    case TOK_MODE_SI:
     ad->mode = 0 + 1;
     break;
    default:
     tcc_warning ("__mode__(%s) not supported\n", get_tok_str (tok, 
# 901 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                                                   ((void *)0)
# 901 "project/radare2/libr/parse/c/tccgen.c"
                                                                       ));
     break;
    }
    next ();
    skip (')');
    break;
   case TOK_DLLEXPORT:
    ad->func_export = 1;
    break;
   case TOK_DLLIMPORT:
    ad->func_import = 1;
    break;
   default:
    if (tcc_state->warn_unsupported) {
     tcc_warning ("'%s' attribute ignored", get_tok_str (t, 
# 915 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                                           ((void *)0)
# 915 "project/radare2/libr/parse/c/tccgen.c"
                                                               ));
    }

    if (tok == '(') {
     int parenthesis = 0;
     do {
      if (tok == '(') {
       parenthesis++;
      } else if (tok == ')') {
       parenthesis--;
      }
      next ();
     } while (parenthesis && tok != -1);
    }
    break;
   }
   if (tok != ',') {
    break;
   }
   next ();
  }
  skip (')');
  skip (')');
 }
}


static void struct_decl(CType *type, int u, 
# 942 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                           _Bool 
# 942 "project/radare2/libr/parse/c/tccgen.c"
                                                is_typedef) {
 int a, v, size, align, maxalign, offset;
 long long c = 0;
 int bit_size, bit_pos, bsize, bt, lbit_pos, prevbt;
 char buf[1024 + 1];
 Sym *s, *ss, *ass, **ps;
 AttributeDef ad;
 const char *name = 
# 949 "project/radare2/libr/parse/c/tccgen.c" 3 4
                   ((void *)0)
# 949 "project/radare2/libr/parse/c/tccgen.c"
                       ;
 
# 950 "project/radare2/libr/parse/c/tccgen.c" 3 4
_Bool 
# 950 "project/radare2/libr/parse/c/tccgen.c"
     autonamed = 
# 950 "project/radare2/libr/parse/c/tccgen.c" 3 4
                 0
# 950 "project/radare2/libr/parse/c/tccgen.c"
                      ;
 CType type1; 
# 951 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memset_chk (&
# 951 "project/radare2/libr/parse/c/tccgen.c"
type1
# 951 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0, sizeof (
# 951 "project/radare2/libr/parse/c/tccgen.c"
type1
# 951 "project/radare2/libr/parse/c/tccgen.c" 3 4
), __builtin_object_size (&
# 951 "project/radare2/libr/parse/c/tccgen.c"
type1
# 951 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 951 "project/radare2/libr/parse/c/tccgen.c"
                         ;
 CType btype; 
# 952 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memset_chk (&
# 952 "project/radare2/libr/parse/c/tccgen.c"
btype
# 952 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0, sizeof (
# 952 "project/radare2/libr/parse/c/tccgen.c"
btype
# 952 "project/radare2/libr/parse/c/tccgen.c" 3 4
), __builtin_object_size (&
# 952 "project/radare2/libr/parse/c/tccgen.c"
btype
# 952 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 952 "project/radare2/libr/parse/c/tccgen.c"
                         ;

 a = tok;
 next ();
 name = get_tok_str (tok, 
# 956 "project/radare2/libr/parse/c/tccgen.c" 3 4
                         ((void *)0)
# 956 "project/radare2/libr/parse/c/tccgen.c"
                             );
 if (tok != '{') {
  v = tok;
  next ();

  if (v < 256) {
   expect ("struct/union/enum name");
  }
  s = struct_find (v);
  if (s) {
   if (s->type.t != a) {
    do { tcc_error ("invalid type"); return; } while (0);
   }
   goto do_decl;
  }
 } else {
  v = anon_sym++;
  
# 973 "project/radare2/libr/parse/c/tccgen.c" 3 4
 __builtin___snprintf_chk (
# 973 "project/radare2/libr/parse/c/tccgen.c"
 buf
# 973 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 
# 973 "project/radare2/libr/parse/c/tccgen.c"
 sizeof(buf)
# 973 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 0, __builtin_object_size (
# 973 "project/radare2/libr/parse/c/tccgen.c"
 buf
# 973 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 973 "project/radare2/libr/parse/c/tccgen.c"
 "%u", v - 0x10000000
# 973 "project/radare2/libr/parse/c/tccgen.c" 3 4
 )
# 973 "project/radare2/libr/parse/c/tccgen.c"
                                                      ;
  name = buf;
  autonamed = 
# 975 "project/radare2/libr/parse/c/tccgen.c" 3 4
             1
# 975 "project/radare2/libr/parse/c/tccgen.c"
                 ;
 }
 type1.t = a;

 s = sym_push (v | 0x40000000, &type1, 0, -1);
 if (!s) {
  return;
 }
 s->r = 0;


do_decl:
 type->t = u;
 type->ref = s;

 if (tok == '{') {
  next ();
  if (s->c != -1) {
   do { tcc_error ("struct/union/enum already defined"); return; } while (0);
  }

  c = 0LL;

  if (a == TOK_ENUM) {
   if (!strcmp (name, "{")) {

    fprintf (
# 1001 "project/radare2/libr/parse/c/tccgen.c" 3 4
            __stderrp
# 1001 "project/radare2/libr/parse/c/tccgen.c"
                  , "anonymous enums are ignored\n");
   }
   while (tcc_nerr () == 0) {
    v = tok;
    if (v < TOK_DEFINE) {
     expect ("identifier");
    }
    next ();
    if (tok == '=') {
     next ();
     c = expr_const ();
    }

    if (strcmp (name, "{")) {
     char *varstr = get_tok_str (v, 
# 1015 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                   ((void *)0)
# 1015 "project/radare2/libr/parse/c/tccgen.c"
                                       );
     tcc_appendf ("%s=enum\n", name);
     tcc_appendf ("[+]enum.%s=%s\n",name, varstr);
     tcc_appendf ("enum.%s.%s=0x%"
# 1018 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                 "llx" 
# 1018 "project/radare2/libr/parse/c/tccgen.c"
                                         "\n", name, varstr, c);
     tcc_appendf ("enum.%s.0x%"
# 1019 "project/radare2/libr/parse/c/tccgen.c" 3 4
                              "llx" 
# 1019 "project/radare2/libr/parse/c/tccgen.c"
                                      "=%s\n", name, c, varstr);


    }

    ss = sym_push (v, &int64_type, 0x0030, c);
    if (!ss) {
     return;
    }
    ss->type.t |= 0x00000100;
    if (tok != ',') {
     break;
    }
    next ();
    c++;

    if (tok == '}') {
     break;
    }
   }
   skip ('}');
  } else {
   maxalign = 1;
   ps = &s->next;
   prevbt = 0;
   bit_pos = 0;
   offset = 0;

   const char *ctype = (a == TOK_UNION)? "union": "struct";
   if (!is_typedef || !autonamed) {
    tcc_appendf ("%s=%s\n", name, ctype);
   }

   while (tok != '}') {
    if (!parse_btype (&btype, &ad)) {
     expect ("bracket");
     break;
    }
    while (tcc_nerr () == 0) {
     bit_size = -1;
     v = 0;
     
# 1060 "project/radare2/libr/parse/c/tccgen.c" 3 4
    __builtin___memcpy_chk (
# 1060 "project/radare2/libr/parse/c/tccgen.c"
    &type1
# 1060 "project/radare2/libr/parse/c/tccgen.c" 3 4
    , 
# 1060 "project/radare2/libr/parse/c/tccgen.c"
    &btype, sizeof(type1)
# 1060 "project/radare2/libr/parse/c/tccgen.c" 3 4
    , __builtin_object_size (
# 1060 "project/radare2/libr/parse/c/tccgen.c"
    &type1
# 1060 "project/radare2/libr/parse/c/tccgen.c" 3 4
    , 0))
# 1060 "project/radare2/libr/parse/c/tccgen.c"
                                          ;
     if (tok != ':') {
      type_decl (&type1, &ad, &v, 2 | 1);
      if (v == 0 && not_structured(&type1)) {
       expect ("identifier");
      }
      if ((type1.t & 0x000f) == 6 ||
          (type1.t & (0x00000200 | 0x00000100 | 0x00000080 | 0x00000400))) {
       do { tcc_error ("invalid type for '%s'", get_tok_str (v, 
# 1068 "project/radare2/libr/parse/c/tccgen.c" 3 4
      ((void *)0)
# 1068 "project/radare2/libr/parse/c/tccgen.c"
      )); return; } while (0)
                              ;
      }
     }
     if (tok == ':') {
      next ();
      bit_size = (int) expr_const ();

      if (bit_size < 0) {
       do { tcc_error ("negative width in bit-field '%s'", get_tok_str (v, 
# 1077 "project/radare2/libr/parse/c/tccgen.c" 3 4
      ((void *)0)
# 1077 "project/radare2/libr/parse/c/tccgen.c"
      )); return; } while (0)
                              ;
      }
      if (v && bit_size == 0) {
       do { tcc_error ("zero width for bit-field '%s'", get_tok_str (v, 
# 1081 "project/radare2/libr/parse/c/tccgen.c" 3 4
      ((void *)0)
# 1081 "project/radare2/libr/parse/c/tccgen.c"
      )); return; } while (0)
                              ;
      }
     }
     size = type_size (&type1, &align);
     if (ad.aligned) {
      if (align < ad.aligned) {
       align = ad.aligned;
      }
     } else if (ad.packed) {
      align = 1;
     } else if (*tcc_state->pack_stack_ptr) {
      if (align > *tcc_state->pack_stack_ptr) {
       align = *tcc_state->pack_stack_ptr;
      }
     }
     lbit_pos = 0;



     if (bit_size >= 0) {
      bt = type1.t & 0x000f;
      if (bt != 2 &&
          bt != 1 &&
          bt != 0 &&
          bt != 13 &&
          bt != 5 &&
          bt != 12) {
       do { tcc_error ("bitfields must have scalar type"); return; } while (0);
      }
      bsize = size * 8;
      if (bit_size > bsize) {
       do { tcc_error ("width of '%s' exceeds its type", get_tok_str (v, 
# 1113 "project/radare2/libr/parse/c/tccgen.c" 3 4
      ((void *)0)
# 1113 "project/radare2/libr/parse/c/tccgen.c"
      )); return; } while (0)
                              ;
      } else if (bit_size == bsize) {

       bit_pos = 0;
      } else if (bit_size == 0) {



       bit_pos = 0;
      } else {



       if ((bit_pos + bit_size) > bsize ||
           bt != prevbt || a == TOK_UNION) {
        bit_pos = 0;
       }
       lbit_pos = bit_pos;

       type1.t |= 0x0800 |
           (bit_pos << 18) |
           (bit_size << (18 + 6));
       bit_pos += bit_size;
      }
      prevbt = bt;
     } else {
      bit_pos = 0;
     }
     if (v != 0 || is_structured(&type1)) {


      if (lbit_pos == 0) {
       if (a == TOK_STRUCT) {
        c = (c + align - 1) & - align;
        offset = c;
        if (size > 0) {
         c += size;
        }
       } else {
        offset = 0;
        if (size > c) {
         c = size;
        }
       }
       if (align > maxalign) {
        maxalign = align;
       }
      }


      char b[1024];
      char *varstr = get_tok_str (v, 
# 1165 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                    ((void *)0)
# 1165 "project/radare2/libr/parse/c/tccgen.c"
                                        );
      type_to_str (b, sizeof(b), &type1, 
# 1166 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                        ((void *)0)
# 1166 "project/radare2/libr/parse/c/tccgen.c"
                                            );
      {
       int type_bt = type1.t & 0x000f;

       if (is_typedef && autonamed) {
        tcc_typedef_appendf ("[+]typedef.%%s.fields=%s\n", varstr);
        tcc_typedef_appendf ("typedef.%%s.%s.meta=%d\n", varstr, type_bt);
        tcc_typedef_appendf ("typedef.%%s.%s=%s,%d,%d\n", varstr, b, offset, (int)arraysize);
       } else {
        tcc_appendf ("[+]%s.%s=%s\n",
         ctype, name, varstr);
        tcc_appendf ("%s.%s.%s.meta=%d\n",
         ctype, name, varstr, type_bt);

        tcc_appendf ("%s.%s.%s=%s,%d,%d\n",
         ctype, name, varstr, b, offset, (int)arraysize);
       }






       arraysize = 0;
       if (type1.t & 0x0800) {
        tcc_appendf ("%s.%s.%s.bitfield.pos=%d\n",
         ctype, name, varstr, (type1.t >> 18) & 0x3f);
        tcc_appendf ("%s.%s.%s.bitfield.size=%d\n",
         ctype, name, varstr, (type1.t >> (18 + 6)) & 0x3f);
       }

      }

     }
     if (v == 0 && is_structured (&type1)) {
      ass = type1.ref;
      while ((ass = ass->next) != 
# 1202 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                 ((void *)0)
# 1202 "project/radare2/libr/parse/c/tccgen.c"
                                     ) {
       ss = sym_push (ass->v, &ass->type, 0, offset + ass->c);
       if (!ss) {
        return;
       }
       *ps = ss;
       ps = &ss->next;
      }
     } else if (v) {
      ss = sym_push (v | 0x20000000, &type1, 0, offset);
      if (!ss) {
       return;
      }
      *ps = ss;
      ps = &ss->next;
     }
     if (tok == ';' || tok == (-1)) {
      break;
     }
     skip (',');
    }
    skip (';');
   }
   skip ('}');

   s->c = (c + maxalign - 1) & - maxalign;
   s->r = maxalign;
  }
 }
}




static int parse_btype(CType *type, AttributeDef *ad) {
 int t, u, type_found, typespec_found, typedef_found;
 Sym *s;
 CType type1; 
# 1239 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memset_chk (&
# 1239 "project/radare2/libr/parse/c/tccgen.c"
type1
# 1239 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0, sizeof (
# 1239 "project/radare2/libr/parse/c/tccgen.c"
type1
# 1239 "project/radare2/libr/parse/c/tccgen.c" 3 4
), __builtin_object_size (&
# 1239 "project/radare2/libr/parse/c/tccgen.c"
type1
# 1239 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 1239 "project/radare2/libr/parse/c/tccgen.c"
                         ;

 
# 1241 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memset_chk (
# 1241 "project/radare2/libr/parse/c/tccgen.c"
ad
# 1241 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 
# 1241 "project/radare2/libr/parse/c/tccgen.c"
0, sizeof(AttributeDef)
# 1241 "project/radare2/libr/parse/c/tccgen.c" 3 4
, __builtin_object_size (
# 1241 "project/radare2/libr/parse/c/tccgen.c"
ad
# 1241 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 1241 "project/radare2/libr/parse/c/tccgen.c"
                                    ;
 type_found = 0;
 typespec_found = 0;
 typedef_found = 0;

 t = 0;
 while (tcc_nerr () == 0) {
  switch (tok) {
  case TOK_EXTENSION:

   next ();
   continue;






  case TOK_UINT8:
   t |= 0x0020;

  case TOK_INT8:
   u = 2;
   goto basic_type;
  case TOK_CHAR:
   u = 2;

   t |= 0x00040000;
basic_type:
   next ();
basic_type1:
   if ((t & 0x000f) != 0) {
    tcc_error ("too many basic types");
    return 0;
   }
   t |= u;
   typespec_found = 1;
   break;


  case TOK_VOID:
   u = 3;
   goto basic_type;


  case TOK_UINT16:
   t |= 0x0020;

  case TOK_INT16:
  case TOK_SHORT:
   u = 1;
   goto basic_type;


  case TOK_UINT32:
   t |= 0x0020;

  case TOK_INT32:
   u = 0;
   goto basic_type;
  case TOK_INT:
   next ();
   typespec_found = 1;
   break;


  case TOK_UINT64:
   t |= 0x0020;

  case TOK_INT64:
   u = 13;
   goto basic_type;
  case TOK_LONG:
   next ();

   if ((t & 0x000f) == 10) {
    if (strncmp (tcc_state->os, "windows", 7)) {
     t = (t & ~0x000f) | 11;
    }
   } else if ((t & 0x000f) == 14) {
    t = (t & ~0x000f) | 13;
   } else {
    u = 14;
    goto basic_type1;
   }
   break;
  case TOK_BOOL:
  case TOK_STDBOOL:
   u = 12;
   goto basic_type;
  case TOK_FLOAT:
   u = 9;
   goto basic_type;
  case TOK_DOUBLE:
   next ();
   if ((t & 0x000f) == 14) {
    if (!strncmp (tcc_state->os, "windows", 7)) {
     t = (t & ~0x000f) | 10;
    } else {
     t = (t & ~0x000f) | 11;
    }
   } else {
    u = 10;
    goto basic_type1;
   }
   break;
  case TOK_ENUM:
   struct_decl (&type1, 5, (
# 1348 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                 _Bool
# 1348 "project/radare2/libr/parse/c/tccgen.c"
                                     )(t & 5));
basic_type2:
   u = type1.t;
   type->ref = type1.ref;
   goto basic_type1;
  case TOK_STRUCT:
   struct_decl (&type1, 7, (
# 1354 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                   _Bool
# 1354 "project/radare2/libr/parse/c/tccgen.c"
                                       )(t & 0x00000200));
   goto basic_type2;
  case TOK_UNION:
   struct_decl (&type1, 8, (
# 1357 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                  _Bool
# 1357 "project/radare2/libr/parse/c/tccgen.c"
                                      )(t & 8));
   goto basic_type2;


  case TOK_CONST1:
  case TOK_CONST2:
  case TOK_CONST3:
   t |= 0x1000;
   next ();
   break;
  case TOK_VOLATILE1:
  case TOK_VOLATILE2:
  case TOK_VOLATILE3:
   t |= 0x2000;
   next ();
   break;
  case TOK_SIGNED1:
  case TOK_SIGNED2:
  case TOK_SIGNED3:
   typespec_found = 1;
   t |= 0x4000;
   next ();
   break;
  case TOK_REGISTER:
  case TOK_AUTO:
  case TOK_RESTRICT1:
  case TOK_RESTRICT2:
  case TOK_RESTRICT3:
   next ();
   break;
  case TOK_UNSIGNED:
   t |= 0x0020;
   next ();
   typespec_found = 1;
   break;


  case TOK_EXTERN:
   t |= 0x00000080;
   next ();
   break;
  case TOK_STATIC:
   t |= 0x00000100;
   next ();
   break;
  case TOK_TYPEDEF:
   t |= 0x00000200;
   next ();
   break;
  case TOK_INLINE1:
  case TOK_INLINE2:
  case TOK_INLINE3:
   t |= 0x00000400;
   next ();
   break;


  case TOK_ATTRIBUTE1:
  case TOK_ATTRIBUTE2:
   parse_attribute (ad);
   if (ad->mode) {
    u = ad->mode - 1;
    t = (t & ~0x000f) | u;
   }
   break;

  case TOK_TYPEOF1:
  case TOK_TYPEOF2:
  case TOK_TYPEOF3:
   next ();
   parse_expr_type (&type1);

   type1.t &= ~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000) & ~0x00000200);
   goto basic_type2;
  default:
   if (typespec_found || typedef_found) {
    goto the_end;
   }
   s = sym_find (tok);
   if (!s || !(s->type.t & 0x00000200)) {
    goto the_end;
   }
   typedef_found = 1;
   t |= (s->type.t & ~0x00000200);
   type->ref = s->type.ref;
   if (s->r) {

    if (0 == ad->aligned) {
     ad->aligned = (((AttributeDef*)&(s->r))->aligned);
    }
    if (0 == ad->func_call) {
     ad->func_call = (((AttributeDef*)&(s->r))->func_call);
    }
    ad->packed |= (((AttributeDef*)&(s->r))->packed);
   }
   next ();
   typespec_found = 1;
   break;
  }
  type_found = 1;
 }
the_end:
 if ((t & (0x4000 | 0x0020)) == (0x4000 | 0x0020)) {
  tcc_error ("signed and unsigned modifier");
  return 0;
 }
 if (tcc_state->char_is_unsigned) {
  if ((t & (0x4000 | 0x0020 | 0x000f)) == 2) {
   t |= 0x0020;
  }
 }
 t &= ~0x4000;


 if ((t & 0x000f) == 14) {
  if (!strncmp (tcc_state->os, "windows", 7) ||
      (!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 32)) {
   t = (t & ~0x000f) | 0;
  } else {
   t = (t & ~0x000f) | 13;
  }
 }
 type->t = t;

 return type_found;
}



static inline void convert_parameter_type(CType *pt) {


 pt->t &= ~(0x1000 | 0x2000);

 pt->t &= ~0x0040;
 if ((pt->t & 0x000f) == 6) {
  mk_pointer (pt);
 }
}

static void post_type(CType *type, AttributeDef *ad) {
 int n, l, t1, arg_size, align;
 Sym **plast, *s, *first;
 AttributeDef ad1;
 CType pt = {0};
 char *symname = 
# 1502 "project/radare2/libr/parse/c/tccgen.c" 3 4
                ((void *)0)
# 1502 "project/radare2/libr/parse/c/tccgen.c"
                    ;
 int narg = 0;

 if (tok == '(') {

  next ();
  l = 0;
  first = 
# 1509 "project/radare2/libr/parse/c/tccgen.c" 3 4
         ((void *)0)
# 1509 "project/radare2/libr/parse/c/tccgen.c"
             ;
  plast = &first;
  {
   const char *ret_type = global_type;
   free (symname);
   symname = strdup (global_symname);
   tcc_appendf ("func.%s.ret=%s\n", symname, ret_type);
   tcc_appendf ("func.%s.cc=%s\n", symname, "cdecl");
   tcc_appendf ("%s=func\n", symname);
  }
  arg_size = 0;
  if (tok != ')') {
   while (tcc_nerr () == 0) {

    if (l != 2) {
     if (!parse_btype (&pt, &ad1)) {
      if (l) {
       do { tcc_error ("invalid type"); return; } while (0);
      } else {
       l = 2;
       goto old_proto;
      }
     }
     l = 1;
     if ((pt.t & 0x000f) == 3 && tok == ')') {
      break;
     }
     type_decl (&pt, &ad1, &n, 2 | 1);
     if ((pt.t & 0x000f) == 3) {
      do { tcc_error ("parameter declared as void"); return; } while (0);
     }
     arg_size += (type_size (&pt, &align) + 4 - 1) / 4;
    } else {
old_proto:
     n = tok;
     if (n < TOK_DEFINE) {
      expect ("identifier");
     }
     pt.t = 0;
     next ();
    }
    convert_parameter_type (&pt);
    s = sym_push (n | 0x20000000, &pt, 0, 0);
    if (!s) {
     return;
    } else {
     char kind[1024];
     type_to_str (kind, sizeof (kind), &pt, 
# 1556 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                           ((void *)0)
# 1556 "project/radare2/libr/parse/c/tccgen.c"
                                               );
     tcc_appendf ("func.%s.arg.%d=%s,%s\n",
      symname, narg, kind, global_symname);
     narg++;
    }
    *plast = s;
    plast = &s->next;
    if (tok == ')') {
     break;
    }
    skip (',');
    if (l == 1 && tok == 0xcc) {
     l = 3;
     next ();
     break;
    }
   }
  }
  tcc_appendf ("func.%s.args=%d\n", symname, narg);

  if (l == 0) {
   l = 2;
  }
  skip (')');


  type->t &= ~0x1000;



  if (tok == '[') {
   next ();
   skip (']');
   type->t |= 4;
  }

  ad->func_args = arg_size;
  s = sym_push (0x20000000, type, (*(int*)(ad)), l);
  if (!s) {
   return;
  }
  s->next = first;
  type->t = 6;
  type->ref = s;
  
# 1600 "project/radare2/libr/parse/c/tccgen.c" 3 4
 { free((void *)
# 1600 "project/radare2/libr/parse/c/tccgen.c"
 symname
# 1600 "project/radare2/libr/parse/c/tccgen.c" 3 4
 ); 
# 1600 "project/radare2/libr/parse/c/tccgen.c"
 symname 
# 1600 "project/radare2/libr/parse/c/tccgen.c" 3 4
 = ((void *)0); }
# 1600 "project/radare2/libr/parse/c/tccgen.c"
                 ;
 } else if (tok == '[') {

  next ();
  if (tok == TOK_RESTRICT1) {
   next ();
  }
  n = -1;
  t1 = 0;
  if (tok != ']') {
   if (!local_stack || nocode_wanted) {
    vpushll (expr_const ());
   } else {
    gexpr ();
   }
   if ((vtop->r & (0x003f | 0x0100 | 0x0200)) == 0x0030) {
    n = vtop->c.i;
    if (n < 0) {
     do { tcc_error ("invalid array size"); return; } while (0);
    }
   } else {
    if (!is_integer_btype (vtop->type.t & 0x000f)) {
     do { tcc_error ("size of variable length array should be an integer"); return; } while (0);
    }
    t1 = 0x00080000;
   }
  }
  skip (']');

  post_type (type, ad);



  arraysize = n;
  if (n < 0) {
   
# 1635 "project/radare2/libr/parse/c/tccgen.c" 3 4
  fprintf(__stderrp,
# 1635 "project/radare2/libr/parse/c/tccgen.c"
  "array with no size []\n"
# 1635 "project/radare2/libr/parse/c/tccgen.c" 3 4
  )
# 1635 "project/radare2/libr/parse/c/tccgen.c"
                                     ;




  }
  s = sym_push (0x20000000, type, 0, n);
  if (!s) {
   return;
  }
  type->t = (t1? 0x00080000: 0x0040) | 4;
  type->ref = s;
 }
}







static void type_decl(CType *type, AttributeDef *ad, int *v, int td) {
 Sym *s;
 int qualifiers, storage;
 CType *type1 = 
# 1659 "project/radare2/libr/parse/c/tccgen.c" 3 4
               (
# 1659 "project/radare2/libr/parse/c/tccgen.c"
               CType
# 1659 "project/radare2/libr/parse/c/tccgen.c" 3 4
               *)calloc(1,sizeof(
# 1659 "project/radare2/libr/parse/c/tccgen.c"
               CType
# 1659 "project/radare2/libr/parse/c/tccgen.c" 3 4
               ))
# 1659 "project/radare2/libr/parse/c/tccgen.c"
                             ;
 CType *type2 = 
# 1660 "project/radare2/libr/parse/c/tccgen.c" 3 4
               (
# 1660 "project/radare2/libr/parse/c/tccgen.c"
               CType
# 1660 "project/radare2/libr/parse/c/tccgen.c" 3 4
               *)calloc(1,sizeof(
# 1660 "project/radare2/libr/parse/c/tccgen.c"
               CType
# 1660 "project/radare2/libr/parse/c/tccgen.c" 3 4
               ))
# 1660 "project/radare2/libr/parse/c/tccgen.c"
                             ;
 if (!type1 || !type2) {
  free (type1);
  free (type2);
  return;
 }

 while (tok == '*') {
  qualifiers = 0;
redo:
  next ();
  switch (tok) {
  case TOK_CONST1:
  case TOK_CONST2:
  case TOK_CONST3:
   qualifiers |= 0x1000;
   goto redo;
  case TOK_VOLATILE1:
  case TOK_VOLATILE2:
  case TOK_VOLATILE3:
   qualifiers |= 0x2000;
   goto redo;
  case TOK_RESTRICT1:
  case TOK_RESTRICT2:
  case TOK_RESTRICT3:
   goto redo;
  }
  mk_pointer (type);
  type->t |= qualifiers;
 }


 if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
  parse_attribute (ad);
 }



 type1->t = 0;
 if (tok == '(') {
  next ();


  if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
   parse_attribute (ad);
  }
  type_decl (type1, ad, v, td);
  skip (')');
 } else {

  if (tok >= 256 && (td & 2)) {
   *v = tok;
   next ();
  } else {
   if (!(td & 1)) {
    expect ("identifier");
   }
   *v = 0;
  }
 }
 storage = type->t & (0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000);
 type->t &= ~(0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000);
 if (storage & 0x00000100) {
  int saved_nocode_wanted = nocode_wanted;
  nocode_wanted = 1;

  post_type (type, ad);
  nocode_wanted = saved_nocode_wanted;
 } else {
  static char kind[1024];
  char *name = get_tok_str (*v, 
# 1730 "project/radare2/libr/parse/c/tccgen.c" 3 4
                               ((void *)0)
# 1730 "project/radare2/libr/parse/c/tccgen.c"
                                   );
  type_to_str (kind, sizeof(kind), type, 
# 1731 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                        ((void *)0)
# 1731 "project/radare2/libr/parse/c/tccgen.c"
                                            );

  global_symname = name;
  global_type = kind;
  post_type (type, ad);
 }
 type->t |= storage;
 if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
  parse_attribute (ad);
 }

 if (!type1->t) {
  free (type1);
  free (type2);
  return;
 }

 type2 = type1;
 for (;;) {
  s = type2->ref;
  type2 = &s->type;
  if (!type2->t) {
   *type2 = *type;
   break;
  }
 }
 
# 1757 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memcpy_chk (
# 1757 "project/radare2/libr/parse/c/tccgen.c"
type
# 1757 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 
# 1757 "project/radare2/libr/parse/c/tccgen.c"
type1, sizeof(*type)
# 1757 "project/radare2/libr/parse/c/tccgen.c" 3 4
, __builtin_object_size (
# 1757 "project/radare2/libr/parse/c/tccgen.c"
type
# 1757 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 1757 "project/radare2/libr/parse/c/tccgen.c"
                                   ;
}


 int lvalue_type(int t) {
 int bt, r;
 r = 0x0100;
 bt = t & 0x000f;
 if (bt == 2 || bt == 12) {
  r |= 0x1000;
 } else if (bt == 1) {
  r |= 0x2000;
 } else {
  return r;
 }
 if (t & 0x0020) {
  r |= 0x4000;
 }
 return r;
}


 void indir(void) {
 if ((vtop->type.t & 0x000f) != 4) {
  if ((vtop->type.t & 0x000f) == 6) {
   return;
  }
  expect ("pointer");
 }
 vtop->type = *pointed_type (&vtop->type);

 if (!(vtop->type.t & 0x0040) && !(vtop->type.t & 0x00080000)
     && (vtop->type.t & 0x000f) != 6) {
  vtop->r |= lvalue_type (vtop->type.t);






 }
}



static void parse_expr_type(CType *type) {
 int n;
 AttributeDef ad;

 skip ('(');
 if (parse_btype (type, &ad)) {
  type_decl (type, &ad, &n, 1);
 } else {
  expr_type (type);
 }
 skip (')');
}

static void parse_type(CType *type) {
 AttributeDef ad;
 int n;

 if (!parse_btype (type, &ad)) {
  expect ("type");
 }
 type_decl (type, &ad, &n, 1);
}

static void vpush_tokc(int t) {
 CType type = { 0 };
 type.t = t;
 type.ref = 
# 1828 "project/radare2/libr/parse/c/tccgen.c" 3 4
           ((void *)0)
# 1828 "project/radare2/libr/parse/c/tccgen.c"
               ;
 vsetc (&type, 0x0030, &tokc);
}

 void unary(void) {
 int n, t, align, size, r, sizeof_caller;
 CType type = { 0 };
 Sym *s;
 AttributeDef ad;
 static int in_sizeof = 0;

 sizeof_caller = in_sizeof;
 in_sizeof = 0;


tok_next:
 switch (tok) {
 case TOK_EXTENSION:
  next ();
  goto tok_next;
 case 0xb3:
 case 0xb4:
 case 0xb7:
  vpushi (tokc.i);
  next ();
  break;
 case 0xc8:
  vpush_tokc (0 | 0x0020);
  next ();
  break;
 case 0xc9:
  vpush_tokc (13);
  next ();
  break;
 case 0xca:
  vpush_tokc (13 | 0x0020);
  next ();
  break;
 case 0xb9:
  vpush_tokc (9);
  next ();
  break;
 case 0xc0:
  vpush_tokc (10);
  next ();
  break;
 case 0xc1:
  vpush_tokc (11);
  next ();
  break;
 case TOK___FUNCTION__:
  if (!gnu_ext) {
   goto tok_identifier;
  }

 case TOK___FUNC__:
 {

  int len;

  len = strlen (funcname) + 1;

  type.t = 2;
  mk_pointer (&type);
  type.t |= 0x0040;
  if (type.ref) {
   type.ref->c = len;
  }


  next ();
 }
 break;
 case 0xb8:
  if (!strncmp (tcc_state->os, "windows", 7)) {
   t = 1 | 0x0020;
  } else {
   t = 0;
  }
  goto str_init;
 case 0xb5:

  t = 2;
str_init:
  if (tcc_state->warn_write_strings) {
   t |= 0x1000;
  }
  type.t = t;
  mk_pointer (&type);
  type.t |= 0x0040;
  
# 1918 "project/radare2/libr/parse/c/tccgen.c" 3 4
 __builtin___memset_chk (
# 1918 "project/radare2/libr/parse/c/tccgen.c"
 &ad
# 1918 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 
# 1918 "project/radare2/libr/parse/c/tccgen.c"
 0, sizeof(AttributeDef)
# 1918 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , __builtin_object_size (
# 1918 "project/radare2/libr/parse/c/tccgen.c"
 &ad
# 1918 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 0))
# 1918 "project/radare2/libr/parse/c/tccgen.c"
                                      ;
  decl_initializer_alloc (&type, &ad, 0x0030, 2, 0, 
# 1919 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                                     ((void *)0)
# 1919 "project/radare2/libr/parse/c/tccgen.c"
                                                         , 0);
  break;
 case '(':
  next ();

  if (parse_btype (&type, &ad)) {
   type_decl (&type, &ad, &n, 1);
   skip (')');

   if (tok == '{') {

    if (global_expr) {
     r = 0x0030;
    } else {
     r = 0x0032;
    }

    if (!(type.t & 0x0040)) {
     r |= lvalue_type (type.t);
    }
    
# 1939 "project/radare2/libr/parse/c/tccgen.c" 3 4
   __builtin___memset_chk (
# 1939 "project/radare2/libr/parse/c/tccgen.c"
   &ad
# 1939 "project/radare2/libr/parse/c/tccgen.c" 3 4
   , 
# 1939 "project/radare2/libr/parse/c/tccgen.c"
   0, sizeof(AttributeDef)
# 1939 "project/radare2/libr/parse/c/tccgen.c" 3 4
   , __builtin_object_size (
# 1939 "project/radare2/libr/parse/c/tccgen.c"
   &ad
# 1939 "project/radare2/libr/parse/c/tccgen.c" 3 4
   , 0))
# 1939 "project/radare2/libr/parse/c/tccgen.c"
                                        ;
    decl_initializer_alloc (&type, &ad, r, 1, 0, 
# 1940 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                                ((void *)0)
# 1940 "project/radare2/libr/parse/c/tccgen.c"
                                                    , 0);
   } else {
    if (sizeof_caller) {
     vpush (&type);
     return;
    }
    unary ();
   }
  } else if (tok == '{') {


   skip (')');
  } else {
   gexpr ();
   skip (')');
  }
  break;
 case '*':
  next ();
  unary ();
  indir ();
  break;
 case '!':
  next ();
  unary ();
  if ((vtop->r & 0x003f) == 0x0033) {
   vtop->c.i = vtop->c.i ^ 1;
  }
  break;
 case TOK_SIZEOF:
 case TOK_ALIGNOF1:
 case TOK_ALIGNOF2:
  t = tok;
  next ();
  in_sizeof++;
  unary_type (&type);
  size = type_size (&type, &align);
  if (t == TOK_SIZEOF) {
   if (!(type.t & 0x00080000)) {
    if (size < 0) {
     do { tcc_error ("sizeof applied to an incomplete type"); return; } while (0);
    }
    vpushs (size);
   }
  } else {
   vpushs (align);
  }
  vtop->type.t |= 0x0020;
  break;

 case TOK_builtin_types_compatible_p:
 {
  CType type1; 
# 1992 "project/radare2/libr/parse/c/tccgen.c" 3 4
 __builtin___memset_chk (&
# 1992 "project/radare2/libr/parse/c/tccgen.c"
 type1
# 1992 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 0, sizeof (
# 1992 "project/radare2/libr/parse/c/tccgen.c"
 type1
# 1992 "project/radare2/libr/parse/c/tccgen.c" 3 4
 ), __builtin_object_size (&
# 1992 "project/radare2/libr/parse/c/tccgen.c"
 type1
# 1992 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 0))
# 1992 "project/radare2/libr/parse/c/tccgen.c"
                          ;
  CType type2; 
# 1993 "project/radare2/libr/parse/c/tccgen.c" 3 4
 __builtin___memset_chk (&
# 1993 "project/radare2/libr/parse/c/tccgen.c"
 type2
# 1993 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 0, sizeof (
# 1993 "project/radare2/libr/parse/c/tccgen.c"
 type2
# 1993 "project/radare2/libr/parse/c/tccgen.c" 3 4
 ), __builtin_object_size (&
# 1993 "project/radare2/libr/parse/c/tccgen.c"
 type2
# 1993 "project/radare2/libr/parse/c/tccgen.c" 3 4
 , 0))
# 1993 "project/radare2/libr/parse/c/tccgen.c"
                          ;
  next ();
  skip ('(');
  parse_type (&type1);
  skip (',');
  parse_type (&type2);
  skip (')');
  type1.t &= ~(0x1000 | 0x2000);
  type2.t &= ~(0x1000 | 0x2000);
  vpushi (is_compatible_types (&type1, &type2));
 }
 break;
 case TOK_builtin_constant_p:
 {
  int saved_nocode_wanted;
  long long res;
  next ();
  skip ('(');
  saved_nocode_wanted = nocode_wanted;
  nocode_wanted = 1;
  gexpr ();
  res = (vtop->r & (0x003f | 0x0100 | 0x0200)) == 0x0030;
  nocode_wanted = saved_nocode_wanted;
  skip (')');
  vpushll (res);
 }
 break;
 case TOK_builtin_frame_address:
 {
  int level;
  CType type = { 0 };
  next ();
  skip ('(');
  if (tok != 0xb3 || tokc.i < 0) {
   do { tcc_error ("__builtin_frame_address only takes positive integers"); return; } while (0);
  }
  level = tokc.i;
  next ();
  skip (')');
  type.t = 3;
  mk_pointer (&type);
  vset (&type, 0x0032, 0);
  while (level--) {
   mk_pointer (&vtop->type);
   indir ();
  }
 }
 break;
 case TOK_builtin_va_start:
  if (!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 64 &&
      !strncmp (tcc_state->os, "windows", 7)) {
   next ();
   skip ('(');
   expr_eq ();
   skip (',');
   expr_eq ();
   skip (')');
   if ((vtop->r & 0x003f) != 0x0032) {
    do { tcc_error ("__builtin_va_start expects a local variable"); return; } while (0);
   }
   vtop->r &= ~(0x0100 | 0x0040);
   vtop->type = char_pointer_type;
  }
  break;
 case TOK_builtin_va_arg_types:
  if (!(!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 64 &&
        !strncmp (tcc_state->os, "windows", 7))) {
   CType type = { 0 };
   next ();
   skip ('(');
   parse_type (&type);
   skip (')');


  }
  break;


 case TOK___NAN__:
  vpush64 (10, 0x7ff8000000000000ULL);
  next ();
  break;
 case TOK___SNAN__:
  vpush64 (10, 0x7ff0000000000001ULL);
  next ();
  break;
 case TOK___INF__:
  vpush64 (10, 0x7ff0000000000000ULL);
  next ();
  break;

 default:
tok_identifier:
  t = tok;
  next ();
  if (t < TOK_DEFINE) {
   expect ("identifier");
  }
  s = sym_find (t);
  if (!s) {
   if (tok != '(') {
    do { tcc_error ("'%s' undeclared", get_tok_str (t, 
# 2094 "project/radare2/libr/parse/c/tccgen.c" 3 4
   ((void *)0)
# 2094 "project/radare2/libr/parse/c/tccgen.c"
   )); return; } while (0);
   }
  }
  if (!s) {
   do { tcc_error ("invalid declaration '%s'", get_tok_str (t, 
# 2098 "project/radare2/libr/parse/c/tccgen.c" 3 4
  ((void *)0)
# 2098 "project/radare2/libr/parse/c/tccgen.c"
  )); return; } while (0);
  } else {
   if ((s->type.t & (0x00000100 | 0x00000400 | 0x000f)) ==
       (0x00000100 | 0x00000400 | 6)) {




    r = 0x0200 | 0x0030;
   } else {
    r = s->r;
   }
   vset (&s->type, r, s->c);

   if (vtop->r & 0x0200) {
    vtop->sym = s;
    vtop->c.ul = 0;
   }
  }
  break;
 }


 while (1) {
  if (tok == '.' || tok == 0xcb) {
   int qualifiers;

   if (tok == 0xcb) {
    indir ();
   }
   qualifiers = vtop->type.t & (0x1000 | 0x2000);
   test_lvalue ();
   gaddrof ();
   next ();

   if (not_structured(&vtop->type)) {
    expect ("struct or union");
   }
   s = vtop->type.ref;

   tok |= 0x20000000;
   while ((s = s->next) != 
# 2139 "project/radare2/libr/parse/c/tccgen.c" 3 4
                          ((void *)0)
# 2139 "project/radare2/libr/parse/c/tccgen.c"
                              ) {
    if (s->v == tok) {
     break;
    }
   }
   if (!s) {
    do { tcc_error ("field not found: %s", get_tok_str (tok & ~0x20000000, 
# 2145 "project/radare2/libr/parse/c/tccgen.c" 3 4
   ((void *)0)
# 2145 "project/radare2/libr/parse/c/tccgen.c"
   )); return; } while (0);
   }

   vtop->type = char_pointer_type;
   vpushi (s->c);

   vtop->type = s->type;
   vtop->type.t |= qualifiers;

   if (!(vtop->type.t & 0x0040)) {
    vtop->r |= lvalue_type (vtop->type.t);






   }
   next ();
  } else if (tok == '[') {
   next ();
   gexpr ();
   indir ();
   skip (']');






  } else {
   break;
  }
 }
}

 void expr_prod(void) {
 unary ();
 while (tok == '*' || tok == '/' || tok == '%') {
  next ();
  unary ();
 }
}

 void expr_sum(void) {
 expr_prod ();
 while (tok == '+' || tok == '-') {
  next ();
  expr_prod ();
 }
}

static void expr_shift(void) {
 expr_sum ();
 while (tok == 0x01 || tok == 0x02) {
  next ();
  expr_sum ();
 }
}

static void expr_cmp(void) {
 expr_shift ();
 while ((tok >= 0x96 && tok <= 0x9f) ||
        tok == 0x92 || tok == 0x93) {
  next ();
  expr_shift ();
 }
}

static void expr_cmpeq(void) {
 expr_cmp ();
 while (tok == 0x94 || tok == 0x95) {
  next ();
  expr_cmp ();
 }
}

static void expr_and(void) {
 expr_cmpeq ();
 while (tok == '&') {
  next ();
  expr_cmpeq ();
 }
}

static void expr_xor(void) {
 expr_and ();
 while (tok == '^') {
  next ();
  expr_and ();
 }
}

static void expr_or(void) {
 expr_xor ();
 while (tok == '|') {
  next ();
  expr_xor ();
 }
}


static void expr_land_const(void) {
 expr_or ();
 while (tok == 0xa0) {
  next ();
  expr_or ();
 }
}


static void expr_lor_const(void) {
 expr_land_const ();
 while (tok == 0xa1) {
  next ();
  expr_land_const ();
 }
}


static void expr_land(void) {
 expr_or ();
 if (tok == 0xa0) {
  while (tcc_nerr () == 0) {
   if (tok != 0xa0) {
    break;
   }
   next ();
   expr_or ();
  }
 }
}

static void expr_lor(void) {
 expr_land ();
 if (tok == 0xa1) {
  while (tcc_nerr () == 0) {
   if (tok != 0xa1) {
    break;
   }
   next ();
   expr_land ();
  }
 }
}


static void expr_cond(void) {
 if (const_wanted) {
  expr_lor_const ();
  if (tok == '?') {
   vdup ();
   next ();
   if (tok != ':' || !gnu_ext) {
    gexpr ();
   }
   skip (':');
   expr_cond ();
  }
 } else {
  expr_lor ();
 }
}

static void expr_eq(void) {
 int t;

 expr_cond ();
 if (tok == '=' ||
     (tok >= 0xa5 && tok <= 0xaf) ||
     tok == 0xde || tok == 0xfc ||
     tok == 0x81 || tok == 0x82) {
  test_lvalue ();
  t = tok;
  next ();
  if (t == '=') {
   expr_eq ();
  } else {
   vdup ();
   expr_eq ();
  }
 }
}

 void gexpr(void) {
 while (tcc_nerr () == 0) {
  expr_eq ();
  if (tok != ',') {
   break;
  }
  next ();
 }
}


static void expr_type(CType *type) {
 
# 2341 "project/radare2/libr/parse/c/tccgen.c" 3 4
_Bool 
# 2341 "project/radare2/libr/parse/c/tccgen.c"
     saved_nocode_wanted = nocode_wanted;
 nocode_wanted = 
# 2342 "project/radare2/libr/parse/c/tccgen.c" 3 4
                1
# 2342 "project/radare2/libr/parse/c/tccgen.c"
                    ;
 gexpr ();
 *type = vtop->type;
 nocode_wanted = saved_nocode_wanted;
}



static void unary_type(CType *type) {
 
# 2351 "project/radare2/libr/parse/c/tccgen.c" 3 4
_Bool 
# 2351 "project/radare2/libr/parse/c/tccgen.c"
     a = nocode_wanted;
 nocode_wanted = 
# 2352 "project/radare2/libr/parse/c/tccgen.c" 3 4
                1
# 2352 "project/radare2/libr/parse/c/tccgen.c"
                    ;
 unary ();
 *type = vtop->type;
 nocode_wanted = a;
}


static void expr_const1(void) {
 int a;
 a = const_wanted;
 const_wanted = 
# 2362 "project/radare2/libr/parse/c/tccgen.c" 3 4
               1
# 2362 "project/radare2/libr/parse/c/tccgen.c"
                   ;
 expr_cond ();
 const_wanted = a;
}


 long long expr_const(void) {
 long long c = 0LL;
 expr_const1 ();
 if ((vtop->r & (0x003f | 0x0100 | 0x0200)) != 0x0030) {
  expect ("constant expression");
 }
 c = vtop->c.ll;
 return c;
}



static int is_label(void) {
 int last_tok;


 if (tok < TOK_DEFINE) {
  return 0;
 }

 last_tok = tok;
 next ();
 if (tok == ':') {
  next ();
  return last_tok;
 } else {
  unget_tok (last_tok);
  return 0;
 }
}





static void decl_designator(CType *type, unsigned long c,
       long long *cur_index, Sym **cur_field,
       int size_only)
{
 Sym *s, *f = 
# 2407 "project/radare2/libr/parse/c/tccgen.c" 3 4
             ((void *)0)
# 2407 "project/radare2/libr/parse/c/tccgen.c"
                 ;
 long long index, index_last;
 int notfirst, align, l, nb_elems, elem_size;
 CType type1; 
# 2410 "project/radare2/libr/parse/c/tccgen.c" 3 4
__builtin___memset_chk (&
# 2410 "project/radare2/libr/parse/c/tccgen.c"
type1
# 2410 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0, sizeof (
# 2410 "project/radare2/libr/parse/c/tccgen.c"
type1
# 2410 "project/radare2/libr/parse/c/tccgen.c" 3 4
), __builtin_object_size (&
# 2410 "project/radare2/libr/parse/c/tccgen.c"
type1
# 2410 "project/radare2/libr/parse/c/tccgen.c" 3 4
, 0))
# 2410 "project/radare2/libr/parse/c/tccgen.c"
                         ;

 notfirst = 0;
 if (gnu_ext && (l = is_label ()) != 0) {
  goto struct_field;
 }
 while (tok == '[' || tok == '.') {
  if (tok == '[') {
   if (!(type->t & 0x0040)) {
    expect ("array type");
   }
   s = type->ref;
   next ();
   index = expr_const ();
   if (index < 0 || (s->c >= 0 && index >= s->c)) {
    expect ("invalid index");
   }
   if (tok == 0xcc && gnu_ext) {
    next ();
    index_last = expr_const ();
    if (index_last < 0 ||
        (s->c >= 0 && index_last >= s->c) ||
        index_last < index) {
     expect ("invalid index");
    }
   } else {
    index_last = index;
   }
   skip (']');
   if (!notfirst && cur_index) {
    *cur_index = index_last;
   }
   type = pointed_type (type);
   elem_size = type_size (type, &align);
   c += index * elem_size;

   nb_elems = index_last - index + 1;
   if (nb_elems != 1) {
    notfirst = 1;
    break;
   }
  } else {
   next ();
   l = tok;
   next ();
struct_field:
   if (not_structured(type)) {
    expect ("struct/union type");
   }
   s = type->ref;
   l |= 0x20000000;
   f = s->next;
   while (f) {
    if (f->v == l) {
     break;
    }
    f = f->next;
   }
   if (!f) {
    expect ("field");
   }
   if (!notfirst && cur_field) {
    *cur_field = f;
   }

   if (f) {
    type1 = f->type;
    type1.t |= (type->t & ~(~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000))));
    type = &type1;
    c += f->c;
   }
  }
  notfirst = 1;
 }
 if (notfirst) {
  if (tok == '=') {
   next ();
  } else {
   if (!gnu_ext) {
    expect ("=");
   }
  }
 } else {
  if (type->t & 0x0040) {
   index = cur_index ? *cur_index : 0;
   type = pointed_type (type);
   c += index * type_size (type, &align);
  } else {
   f = cur_field ? *cur_field : 
# 2498 "project/radare2/libr/parse/c/tccgen.c" 3 4
                               ((void *)0)
# 2498 "project/radare2/libr/parse/c/tccgen.c"
                                   ;
   if (!f) {
    do { tcc_error ("too many field init"); return; } while (0);
   }

   if (f) {
    type1 = f->type;
    type1.t |= (type->t & ~(~((0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000))));
    type = &type1;
    c += f->c;
   }
  }
 }
 decl_initializer (type, c, 0, size_only);
}






static void init_putv(CType *type, unsigned long c, long long v, int expr_type) {
 int saved_global_expr;
 CType dtype;

 switch (expr_type) {
 case 0:
  vpushll (v);
  break;
 case 1:

  saved_global_expr = global_expr;
  global_expr = 1;
  expr_const1 ();
  global_expr = saved_global_expr;

  if ((vtop->r & (0x003f | 0x0100)) != 0x0030) {
   do { tcc_error ("initializer element is not constant"); return; } while (0);
  }
  break;
 case 2:
  expr_eq ();
  break;
 }

 dtype = *type;
 dtype.t &= ~0x1000;

 vset (&dtype, 0x0032 | 0x0100, c);
 vswap ();
}


static void init_putz(CType *t, unsigned long c, int size) {
 vseti (0x0032, c);
 vpushi (0);
 vpushs (size);
}






static void decl_initializer(CType *type, unsigned long c, int first, int size_only) {
 long long index;
 int n, no_oblock, nb, parlevel, parlevel1;
 size_t array_length, size1, i;
 int align1, expr_type;
 Sym *s, *f;
 CType *t1;

 if (type->t & 0x0040) {
  s = type->ref;
  n = s->c;
  array_length = 0;
  t1 = pointed_type (type);
  size1 = type_size (t1, &align1);

  no_oblock = 1;
  if ((first && tok != 0xb8 && tok != 0xb5) ||
      tok == '{') {
   if (tok != '{') {
    do { tcc_error ("character array initializer must be a literal," " optionally enclosed in braces"); return; } while (0)
                                      ;
   }
   skip ('{');
   no_oblock = 0;
  }



  if ((tok == 0xb8 &&




       (t1->t & 0x000f) == 0

      ) || (tok == 0xb5 && (t1->t & 0x000f) == 2)) {
   while (tcc_nerr() == 0 && (tok == 0xb5 || tok == 0xb8)) {
    int cstr_len, ch;
    CString *cstr;

    cstr = tokc.cstr;

    if (tok == 0xb5) {
     cstr_len = cstr->size;
    } else {
     cstr_len = cstr->size / sizeof(nwchar_t);
    }
    cstr_len--;
    nb = cstr_len;
    if (n >= 0 && nb > (n - array_length)) {
     nb = n - array_length;
    }
    if (!size_only) {
     if (cstr_len > nb) {
      tcc_warning ("initializer-string for array is too long");
     }



     for (i = 0; i < nb; i++) {
      if (tok == 0xb5) {
       ch = ((unsigned char *) cstr->data)[i];
      } else {
       ch = ((nwchar_t *) cstr->data)[i];
      }
      init_putv (t1, c + (array_length + i) * size1,
       ch, 0);
     }
    }
    array_length += nb;
    next ();
   }


   if (n < 0 || array_length < n) {
    if (!size_only) {
     init_putv (t1, c + (array_length * size1), 0, 0);
    }
    array_length++;
   }
  } else {
   index = 0;
   while (tok != '}') {
    decl_designator (type, c, &index, 
# 2645 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                     ((void *)0)
# 2645 "project/radare2/libr/parse/c/tccgen.c"
                                         , size_only);
    if (n >= 0 && index >= n) {
     do { tcc_error ("index too large"); return; } while (0);
    }


    if (!size_only && array_length < index) {
     init_putz (t1, c + array_length * size1,
      (index - array_length) * size1);
    }
    index++;
    if (index > array_length) {
     array_length = index;
    }



    if (index >= n && no_oblock) {
     break;
    }
    if (tok == '}') {
     break;
    }
    skip (',');
   }
  }
  if (!no_oblock) {
   skip ('}');
  }

  if (!size_only && n >= 0 && array_length < n) {
   init_putz (t1, c + array_length * size1,
    (n - array_length) * size1);
  }

  if (n < 0) {
   s->c = array_length;
  }
 } else if (is_structured(type) && (!first || tok == '{')) {
  int par_count;
# 2694 "project/radare2/libr/parse/c/tccgen.c"
  par_count = 0;
  if (tok == '(') {
   AttributeDef ad1;
   CType type1; 
# 2697 "project/radare2/libr/parse/c/tccgen.c" 3 4
  __builtin___memset_chk (&
# 2697 "project/radare2/libr/parse/c/tccgen.c"
  type1
# 2697 "project/radare2/libr/parse/c/tccgen.c" 3 4
  , 0, sizeof (
# 2697 "project/radare2/libr/parse/c/tccgen.c"
  type1
# 2697 "project/radare2/libr/parse/c/tccgen.c" 3 4
  ), __builtin_object_size (&
# 2697 "project/radare2/libr/parse/c/tccgen.c"
  type1
# 2697 "project/radare2/libr/parse/c/tccgen.c" 3 4
  , 0))
# 2697 "project/radare2/libr/parse/c/tccgen.c"
                           ;
   next ();
   while (tok == '(') {
    par_count++;
    next ();
   }
   if (!parse_btype (&type1, &ad1)) {
    expect ("cast");
   }
   type_decl (&type1, &ad1, &n, 1);





   skip (')');
  }
  no_oblock = 1;
  if (first || tok == '{') {
   skip ('{');
   no_oblock = 0;
  }
  s = type->ref;
  f = s->next;
  array_length = 0;
  index = 0;
  n = s->c;
  while (tok != '}') {
   decl_designator (type, c, 
# 2725 "project/radare2/libr/parse/c/tccgen.c" 3 4
                            ((void *)0)
# 2725 "project/radare2/libr/parse/c/tccgen.c"
                                , &f, size_only);
   index = f->c;
   if (!size_only && array_length < index) {
    init_putz (type, c + array_length,
     index - array_length);
   }
   index = index + type_size (&f->type, &align1);
   if (index > array_length) {
    array_length = index;
   }


   while (f->next) {


    if (f->next->c != f->c) {
     break;
    }

    if ((f->type.t & 0x0800) && (f->next->type.t & 0x0800)) {
     int bit_pos_1 = (f->type.t >> 18) & 0x3f;
     int bit_pos_2 = (f->next->type.t >> 18) & 0x3f;

     if (bit_pos_1 != bit_pos_2) {
      break;
     }
    }
    f = f->next;
   }

   f = f->next;
   if (no_oblock && f == 
# 2756 "project/radare2/libr/parse/c/tccgen.c" 3 4
                        ((void *)0)
# 2756 "project/radare2/libr/parse/c/tccgen.c"
                            ) {
    break;
   }
   if (tok == '}') {
    break;
   }
   skip (',');
  }

  if (!size_only && array_length < n) {
   init_putz (type, c + array_length,
    n - array_length);
  }
  if (!no_oblock) {
   skip ('}');
  }
  while (par_count) {
   skip (')');
   par_count--;
  }
 } else if (tok == '{') {
  next ();
  decl_initializer (type, c, first, size_only);
  skip ('}');
 } else if (size_only) {

  parlevel = parlevel1 = 0;
  while ((parlevel > 0 || parlevel1 > 0 ||
   (tok != '}' && tok != ',')) && tok != -1) {
   if (tok == '(') {
    parlevel++;
   } else if (tok == ')') {
    parlevel--;
   } else if (tok == '{') {
    parlevel1++;
   } else if (tok == '}') {
    parlevel1--;
   }
   next ();
  }
 } else {


  expr_type = 1;
  init_putv (type, c, 0, expr_type);
 }
}
# 2812 "project/radare2/libr/parse/c/tccgen.c"
static void decl_initializer_alloc(CType *type, AttributeDef *ad, int r, int has_init, int v, char *asm_label, int scope) {
 int size, align, addr;
 int level;
 ParseState saved_parse_state = {
  0
 };
 TokenString init_str;
 Sym *flexible_array;

 flexible_array = 
# 2821 "project/radare2/libr/parse/c/tccgen.c" 3 4
                 ((void *)0)
# 2821 "project/radare2/libr/parse/c/tccgen.c"
                     ;
 if (is_struct(type)) {
  Sym *field;
  field = type->ref;
  while (field && field->next)
   field = field->next;
  if (field && (field->type.t & 0x0040) && (field->type.ref->c < 0)) {
   flexible_array = field;
  }
 }

 size = type_size (type, &align);






 tok_str_new (&init_str);
 if (size < 0 || (flexible_array && has_init)) {
  if (!has_init) {
   do { tcc_error ("unknown type size"); return; } while (0);
  }

  if (has_init == 2) {

   while (tok == 0xb5 || tok == 0xb8) {
    tok_str_add_tok (&init_str);
    next ();
   }
  } else {
   level = 0;
   while (tcc_nerr() == 0 && (level > 0 || (tok != ',' && tok != ';'))) {
    if (tok < 0) {
     do { tcc_error ("unexpected end of file in initializer"); return; } while (0);
    }
    tok_str_add_tok (&init_str);
    if (tok == '{') {
     level++;
    } else if (tok == '}') {
     level--;
     if (level <= 0) {
      next ();
      break;
     }
    }
    next ();
   }
  }
  tok_str_add (&init_str, -1);
  tok_str_add (&init_str, 0);


  save_parse_state (&saved_parse_state);

  macro_ptr = init_str.str;
  next ();
  decl_initializer (type, 0, 1, 1);

  macro_ptr = init_str.str;
  next ();


  size = type_size (type, &align);
  if (size < 0) {
   do { tcc_error ("unknown type size"); return; } while (0);
  }
 }
 if (flexible_array) {
  size += flexible_array->type.ref->c * pointed_size (&flexible_array->type);
 }

 if (ad->aligned) {
  if (ad->aligned > align) {
   align = ad->aligned;
  }
 } else if (ad->packed) {
  align = 1;
 }
 if ((r & 0x003f) == 0x0032) {
  loc = (loc - size) & - align;
  addr = loc;
  if (v) {

   sym_push (v, type, r, addr);
  } else {

   vset (type, r, addr);
  }
 } else {
  Sym *sym;

  sym = 
# 2913 "project/radare2/libr/parse/c/tccgen.c" 3 4
       ((void *)0)
# 2913 "project/radare2/libr/parse/c/tccgen.c"
           ;
  if (v && scope == 0x0030) {

   sym = sym_find (v);
   if (sym) {
    if (!is_compatible_types (&sym->type, type)) {
     do { tcc_error ("incompatible types for redefinition of '%s'", get_tok_str (v, 
# 2919 "project/radare2/libr/parse/c/tccgen.c" 3 4
    ((void *)0)
# 2919 "project/radare2/libr/parse/c/tccgen.c"
    )); return; } while (0)
                            ;
    }
    if (sym->type.t & 0x00000080) {

     sym->type.t &= ~0x00000080;


     if ((sym->type.t & 0x0040) &&
         sym->type.ref->c < 0 &&
         type->ref->c >= 0) {
      sym->type.ref->c = type->ref->c;
     }
    } else {







     if (!has_init) {
      goto no_alloc;
     }
    }
   }
  }

  if (v) {
   if (scope != 0x0030 || !sym) {
    sym = sym_push (v, type, r | 0x0200, 0);
    sym->asm_label = asm_label;
   }
  } else {
   CValue cval = { 0 };
   vsetc (type, 0x0030 | 0x0200, &cval);
   vtop->sym = sym;
  }

  if ((type->t & 0x00020000) && sym) {
   weaken_symbol (sym);
  }
 }
no_alloc:
 ;
}




static void func_decl_list(Sym *func_sym) {
 AttributeDef ad;
 int v;
 Sym *s = 
# 2972 "project/radare2/libr/parse/c/tccgen.c" 3 4
         ((void *)0)
# 2972 "project/radare2/libr/parse/c/tccgen.c"
             ;
 CType btype, type;


 while (tcc_nerr () == 0 && tok != '{' && tok != ';' && tok != ',' && tok != (-1) &&
        tok != TOK_ASM1 && tok != TOK_ASM2 && tok != TOK_ASM3) {
  if (!parse_btype (&btype, &ad)) {
   expect ("declaration list");
  }
  if ((is_enum(&btype) || is_structured(&btype)) && tok == ';') {

  } else {
   while (tcc_nerr () == 0) {
    int found;
    type = btype;
    type_decl (&type, &ad, &v, 2);

    s = func_sym;
    found = 0;
    while ((s = s->next) != 
# 2991 "project/radare2/libr/parse/c/tccgen.c" 3 4
                           ((void *)0)
# 2991 "project/radare2/libr/parse/c/tccgen.c"
                               ) {
     if ((s->v & ~0x20000000) == v) {
      found = 1;
      break;
     }
    }
    if (found == 0) {
     do { tcc_error ("declaration for parameter '%s' but no such parameter", get_tok_str (v, 
# 2998 "project/radare2/libr/parse/c/tccgen.c" 3 4
    ((void *)0)
# 2998 "project/radare2/libr/parse/c/tccgen.c"
    )); return; } while (0)
                            ;
    }

    if (type.t & (0x00000080 | 0x00000100 | 0x00000200 | 0x00000400 | 0x00008000 | 0x00010000 | 0x00020000)) {
     do { tcc_error ("storage class specified for '%s'", get_tok_str (v, 
# 3003 "project/radare2/libr/parse/c/tccgen.c" 3 4
    ((void *)0)
# 3003 "project/radare2/libr/parse/c/tccgen.c"
    )); return; } while (0);
    }
    convert_parameter_type (&type);

    if (s) {
     s->type = type;
    }

    if (tok == ',') {
     next ();
    } else {
     break;
    }
   }
  }
  skip (';');
 }
}




static int decl0(int l, int is_for_loop_init) {
 int v, has_init, r;
 CType type = {.t = 0, .ref = 
# 3027 "project/radare2/libr/parse/c/tccgen.c" 3 4
                             ((void *)0)
# 3027 "project/radare2/libr/parse/c/tccgen.c"
                                 }, btype = {.t = 0, .ref = 
# 3027 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                                            ((void *)0)
# 3027 "project/radare2/libr/parse/c/tccgen.c"
                                                                };
 Sym *sym = 
# 3028 "project/radare2/libr/parse/c/tccgen.c" 3 4
           ((void *)0)
# 3028 "project/radare2/libr/parse/c/tccgen.c"
               ;
 AttributeDef ad;

 while (tcc_nerr () == 0) {
  if (!parse_btype (&btype, &ad)) {
   if (is_for_loop_init) {
    return 0;
   }


   if (tok == ';') {
    next ();
    continue;
   }
   if (l == 0x0030 &&
       (tok == TOK_ASM1 || tok == TOK_ASM2 || tok == TOK_ASM3)) {


    
# 3046 "project/radare2/libr/parse/c/tccgen.c" 3 4
   fprintf(__stderrp,
# 3046 "project/radare2/libr/parse/c/tccgen.c"
   "global asm not supported\n"
# 3046 "project/radare2/libr/parse/c/tccgen.c" 3 4
   )
# 3046 "project/radare2/libr/parse/c/tccgen.c"
                                         ;
    return 1;


    continue;
   }


   if (l == 0x0032 || tok < TOK_DEFINE) {
    break;
   }
   btype.t = 0;
  }
  if ((is_enum(&btype) || is_structured(&btype)) && tok == ';') {

   next ();
   continue;
  }

  while (tcc_nerr () == 0) {
   type = btype;
   type_decl (&type, &ad, &v, 2);







   if ((type.t & 0x000f) == 6) {
    if ((type.t & 0x00000100) && (l == 0x0032)) {
     tcc_error ("function without file scope cannot be static");
     return 1;
    }


    sym = type.ref;
    if (sym->c == 2) {
     func_decl_list (sym);
    }
   }

   if (ad.weak) {
    type.t |= 0x00020000;
   }
# 3099 "project/radare2/libr/parse/c/tccgen.c"
   if (tok == '{') {
    if (l == 0x0032) {
     tcc_error ("cannot use local functions");
     return 1;
    }
    if ((type.t & 0x000f) != 6) {
     expect ("function definition");
    }


    sym = type.ref;
    if (sym) {
     while ((sym = sym->next) != 
# 3111 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                ((void *)0)
# 3111 "project/radare2/libr/parse/c/tccgen.c"
                                    )
      if (!(sym->v & ~0x20000000)) {
       expect ("identifier");
      }
    } else {
     return 0;
    }


    if ((type.t & (0x00000080 | 0x00000400)) == (0x00000080 | 0x00000400)) {
     type.t = (type.t & ~0x00000080) | 0x00000100;
    }

    sym = sym_find (v);
    if (sym) {
     if ((sym->type.t & 0x000f) != 6) {
      goto func_error1;
     }

     r = sym->type.ref->r;

     if ((((AttributeDef*)&(r))->func_call) != 0
         && (((AttributeDef*)&(type.ref->r))->func_call) == 0) {
      (((AttributeDef*)&(type.ref->r))->func_call) = (((AttributeDef*)&(r))->func_call);
     }


     if ((((AttributeDef*)&(r))->func_export)) {
      (((AttributeDef*)&(type.ref->r))->func_export) = 1;
     }


     if (sym->type.t & 0x00000100) {
      type.t = (type.t & ~0x00000080) | 0x00000100;
     }

     if (!is_compatible_types (&sym->type, &type)) {
func_error1:
      tcc_error ("incompatible types for redefinition of '%s'",
       get_tok_str (v, 
# 3150 "project/radare2/libr/parse/c/tccgen.c" 3 4
                      ((void *)0)
# 3150 "project/radare2/libr/parse/c/tccgen.c"
                          ));
      return 1;
     }

     sym->type = type;
    } else {

     sym = global_identifier_push (v, type.t, 0);
     if (!sym) {
      return 1;
     }
     sym->type.ref = type.ref;
    }
    break;
   } else {
    if (btype.t & 0x00000200) {


     if (tok != ';') {
      v = tok;
      next();
     }
     sym = sym_push (v, &type, (*(int*)(&ad)), 0);
     if (!sym) {
      return 1;
     }
     sym->type.t |= 0x00000200;

     const char *alias = 
# 3178 "project/radare2/libr/parse/c/tccgen.c" 3 4
                        ((void *)0)
# 3178 "project/radare2/libr/parse/c/tccgen.c"
                            ;
     char buf[500];
     alias = get_tok_str(v, 
# 3180 "project/radare2/libr/parse/c/tccgen.c" 3 4
                           ((void *)0)
# 3180 "project/radare2/libr/parse/c/tccgen.c"
                               );
     type_to_str(buf, sizeof(buf), &sym->type, 
# 3181 "project/radare2/libr/parse/c/tccgen.c" 3 4
                                              ((void *)0)
# 3181 "project/radare2/libr/parse/c/tccgen.c"
                                                  );
     tcc_appendf ("%s=typedef\n", alias);
     tcc_appendf ("typedef.%s=%s\n", alias, buf);
     tcc_typedef_alias_fields (alias);
    } else {
     r = 0;
     if ((type.t & 0x000f) == 6) {


      type.ref->r = (*(int*)(&ad));
     } else if (!(type.t & 0x0040)) {

      r |= lvalue_type (type.t);
     }
     has_init = (tok == '=');
     if (has_init && (type.t & 0x00080000)) {
      tcc_error ("Variable length array cannot be initialized");
      return 1;
     }
    }
    if (tok != ',') {
     if (is_for_loop_init) {
      return 1;
     }
     skip (';');
     break;
    }
    next ();
   }
   ad.aligned = 0;
  }
 }
 return 0;
}
