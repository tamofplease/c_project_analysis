# 0 "project/radare2/libr/util/utf8.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/util/utf8.c"


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
# 4 "project/radare2/libr/util/utf8.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 1 3 4






# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flist.h" 1 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flist.h" 3 4
__attribute__((visibility("default"))) void **r_flist_resize(void **it, int n);
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flist.h" 3 4
static inline void **r_flist_init(void **it, int n) {
 *it = it;
 __builtin___memset_chk (++it, 0, (n+1) * sizeof (void*), __builtin_object_size (++it, 0));
 return it;
}

static inline void **r_flist_new(int n) {
 void **it;
 if (((n + 2) * sizeof(void*)) < sizeof(void*)) return ((void *)0);
 if (!(it = (void **)calloc ((n + 2), sizeof (void*)))) {
  return ((void *)0);
 }
 return r_flist_init (it, n);
}

static inline void **r_flist_prev(void **it) {
 void **p = it--;
 return (it==*it)?p:it;
}

static inline void r_flist_set(void **it, int idx, void *data) {
 while(it!=*it) it--; it++;;
 it[idx] = data;
}

static inline void r_flist_delete(void **it, int idx) {
 while(it!=*it) it--; it++;;
 free (it[idx]);
 for(it += idx; *it; it++) *it = *(it+1);
}





static inline void r_flist_free(void **it) {
 void *pos;
 while(it!=*it) it--; it++;; while (*it!=0 && (pos = *(it++)))
  free (pos);
 while(it!=*it) it--; it++;;
 free (--it);
}

static inline int r_flist_length (void **it) {
 void *pos;
 int len = 0;
 while(it!=*it) it--; it++;; while (*it!=0 && (pos = *(it++)))
  len++;
 return len;
}
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 3 4
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







# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 2 3 4
# 115 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/config.h" 1 3 4
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/types.h" 2 3 4

static inline int seek_set(int fd, off_t pos) {
 return ((fd == -1) || (lseek (fd, (off_t) pos, 0) == -1))? 0:1;
}

static inline void ut32_pack(char s[4], unsigned int u) {
 s[0] = u & 255;
 u >>= 8;
 s[1] = u & 255;
 u >>= 8;
 s[2] = u & 255;
 s[3] = u >> 8;
}

static inline void ut32_pack_big(char s[4], unsigned int u) {
 s[3] = u & 255;
 u >>= 8;
 s[2] = u & 255;
 u >>= 8;
 s[1] = u & 255;
 s[0] = u >> 8;
}

static inline void ut32_unpack(char s[4], unsigned int *u) {
 unsigned int result = 0;
 result = (unsigned char) s[3];
 result <<= 8;
 result += (unsigned char) s[2];
 result <<= 8;
 result += (unsigned char) s[1];
 result <<= 8;
 result += (unsigned char) s[0];
 *u = result;
}
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdbht.h" 1 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pp.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pp.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 1 3 4
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ls.h" 1 3 4






typedef void (*SdbListFree)(void *ptr);
typedef int (*SdbListComparator)(const void *a, const void *b);

typedef struct ls_iter_t {
 void *data;
 struct ls_iter_t *n, *p;
} SdbListIter;

typedef struct ls_t {
 size_t length;
 SdbListIter *head;
 SdbListIter *tail;
 SdbListFree free;
 SdbListComparator cmp;
 _Bool sorted;
} SdbList;
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ls.h" 3 4
__attribute__ ((visibility ("default"))) SdbList *ls_new(void);
__attribute__ ((visibility ("default"))) SdbList *ls_newf(SdbListFree freefn);
__attribute__ ((visibility ("default"))) SdbListIter *ls_append(SdbList *list, void *data);
__attribute__ ((visibility ("default"))) SdbListIter *ls_prepend(SdbList *list, void *data);

__attribute__ ((visibility ("default"))) _Bool ls_sort(SdbList *list, SdbListComparator cmp);
__attribute__ ((visibility ("default"))) _Bool ls_merge_sort(SdbList *list, SdbListComparator cmp);

__attribute__ ((visibility ("default"))) void ls_delete(SdbList *list, SdbListIter *iter);
__attribute__ ((visibility ("default"))) _Bool ls_delete_data(SdbList *list, void *ptr);
__attribute__ ((visibility ("default"))) void ls_iter_init(SdbListIter *iter, SdbList *list);
__attribute__ ((visibility ("default"))) void ls_destroy(SdbList *list);
__attribute__ ((visibility ("default"))) void ls_free(SdbList *list);
__attribute__ ((visibility ("default"))) SdbListIter *ls_item_new(void *data);
__attribute__ ((visibility ("default"))) void ls_unlink(SdbList *list, void *ptr);
__attribute__ ((visibility ("default"))) void ls_split(SdbList *list, void *ptr);

__attribute__ ((visibility ("default"))) void ls_split_iter(SdbList *list, SdbListIter *iter);
__attribute__ ((visibility ("default"))) void *ls_get_n(SdbList *list, int n);
__attribute__ ((visibility ("default"))) void *ls_get_top(SdbList *list);

__attribute__ ((visibility ("default"))) void *ls_pop(SdbList *list);
__attribute__ ((visibility ("default"))) void ls_reverse(SdbList *list);
__attribute__ ((visibility ("default"))) SdbList *ls_clone(SdbList *list);
__attribute__ ((visibility ("default"))) int ls_join(SdbList *first, SdbList *second);
__attribute__ ((visibility ("default"))) int ls_del_n(SdbList *list, int n);
__attribute__ ((visibility ("default"))) SdbListIter *ls_insert(SdbList *list, int n, void *data);
__attribute__ ((visibility ("default"))) void *ls_pop_head(SdbList *list);
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 2 3 4



typedef struct ht_pp_kv {
 void * key;
 void * value;
 unsigned int key_len;
 unsigned int value_len;
} HtPPKv;

typedef void (*HtPPKvFreeFunc)(HtPPKv *);
typedef void * (*HtPPDupKey)(const void *);
typedef void * (*HtPPDupValue)(const void *);
typedef unsigned int (*HtPPCalcSizeK)(const void *);
typedef unsigned int (*HtPPCalcSizeV)(const void *);
typedef unsigned int (*HtPPHashFunction)(const void *);
typedef int (*HtPPListComparator)(const void *, const void *);
typedef _Bool (*HtPPForeachCallback)(void *user, const void *, const void *);

typedef struct ht_pp_bucket_t {
 HtPPKv *arr;
 unsigned int count;
} HtPPBucket;


typedef struct ht_pp_options_t {
 HtPPListComparator cmp;
 HtPPHashFunction hashfn;
 HtPPDupKey dupkey;
 HtPPDupValue dupvalue;
 HtPPCalcSizeK calcsizeK;
 HtPPCalcSizeV calcsizeV;
 HtPPKvFreeFunc freefn;
 size_t elem_size;
} HtPPOptions;


typedef struct ht_pp_t {
 unsigned int size;
 unsigned int count;
 HtPPBucket* table;
 unsigned int prime_idx;
 HtPPOptions opt;
} HtPP;


__attribute__ ((visibility ("default"))) HtPP* ht_pp_new_opt(HtPPOptions *opt);

__attribute__ ((visibility ("default"))) void ht_pp_free(HtPP* ht);

__attribute__ ((visibility ("default"))) _Bool ht_pp_insert(HtPP* ht, const void * key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_pp_update(HtPP* ht, const void * key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_pp_update_key(HtPP* ht, const void * old_key, const void * new_key);

__attribute__ ((visibility ("default"))) _Bool ht_pp_delete(HtPP* ht, const void * key);

__attribute__ ((visibility ("default"))) void * ht_pp_find(HtPP* ht, const void * key, _Bool* found);




__attribute__ ((visibility ("default"))) void ht_pp_foreach(HtPP *ht, HtPPForeachCallback cb, void *user);

__attribute__ ((visibility ("default"))) HtPPKv* ht_pp_find_kv(HtPP* ht, const void * key, _Bool* found);
__attribute__ ((visibility ("default"))) _Bool ht_pp_insert_kv(HtPP *ht, HtPPKv *kv, _Bool update);
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pp.h" 2 3 4

__attribute__ ((visibility ("default"))) HtPP* ht_pp_new0(void);
__attribute__ ((visibility ("default"))) HtPP* ht_pp_new(HtPPDupValue valdup, HtPPKvFreeFunc pair_free, HtPPCalcSizeV valueSize);
__attribute__ ((visibility ("default"))) HtPP* ht_pp_new_size(unsigned int initial_size, HtPPDupValue valdup, HtPPKvFreeFunc pair_free, HtPPCalcSizeV valueSize);
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdbht.h" 2 3 4


typedef struct sdb_kv {

 HtPPKv base;
 unsigned int cas;
 unsigned long long expire;
} SdbKv;

static inline char *sdbkv_key(const SdbKv *kv) {
 return (char *)kv->base.key;
}

static inline char *sdbkv_value(const SdbKv *kv) {
 return (char *)kv->base.value;
}

static inline unsigned int sdbkv_key_len(const SdbKv *kv) {
 return kv->base.key_len;
}

static inline unsigned int sdbkv_value_len(const SdbKv *kv) {
 return kv->base.value_len;
}

__attribute__ ((visibility ("default"))) SdbKv* sdbkv_new2(const char *k, int kl, const char *v, int vl);
__attribute__ ((visibility ("default"))) SdbKv* sdbkv_new(const char *k, const char *v);
extern __attribute__ ((visibility ("default"))) void sdbkv_free(SdbKv *kv);

extern __attribute__ ((visibility ("default"))) unsigned int sdb_hash(const char *key);

__attribute__ ((visibility ("default"))) HtPP* sdb_ht_new(void);

__attribute__ ((visibility ("default"))) void sdb_ht_free(HtPP* ht);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_insert(HtPP* ht, const char* key, const char* value);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_insert_kvp(HtPP* ht, SdbKv *kvp, _Bool update);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_update(HtPP* ht, const char* key, const char* value);

__attribute__ ((visibility ("default"))) _Bool sdb_ht_delete(HtPP* ht, const char* key);

__attribute__ ((visibility ("default"))) char* sdb_ht_find(HtPP* ht, const char* key, _Bool* found);

__attribute__ ((visibility ("default"))) SdbKv* sdb_ht_find_kvp(HtPP* ht, const char* key, _Bool* found);
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/dict.h" 1 3 4




typedef unsigned long long dicti;

typedef struct {
 dicti k;
 dicti v;
 void *u;







} dictkv;






typedef void (*dict_freecb)(void *);
typedef int (*dictkv_cb)(dictkv *, void *);

typedef struct {
 void **table;
 dict_freecb f;
 unsigned int size;
} dict;

typedef dict SdbMini;

__attribute__ ((visibility ("default"))) dict *dict_new(unsigned int size, dict_freecb f);
__attribute__ ((visibility ("default"))) void dict_free(dict*);
__attribute__ ((visibility ("default"))) _Bool dict_init(dict *m, unsigned int, dict_freecb f);
__attribute__ ((visibility ("default"))) void dict_fini(dict *m);
__attribute__ ((visibility ("default"))) void dict_stats(dict *m);
__attribute__ ((visibility ("default"))) dicti dict_hash(const char *s);
__attribute__ ((visibility ("default"))) _Bool dict_set(dict *m, dicti k, dicti v, void *u);
__attribute__ ((visibility ("default"))) dictkv *dict_getr(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dictkv *dict_getr(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dicti dict_get(dict *m, dicti k);
__attribute__ ((visibility ("default"))) dicti dict_get(dict *m, dicti k);
__attribute__ ((visibility ("default"))) void *dict_getu(dict *m, dicti k);
__attribute__ ((visibility ("default"))) _Bool dict_add(dict *m, dicti k, dicti v, void *u);
__attribute__ ((visibility ("default"))) _Bool dict_del(dict *m, dicti k);
__attribute__ ((visibility ("default"))) void dict_foreach(dict *m, dictkv_cb cb, void *u);
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb.h" 3 4
struct cdb {
 char *map;
 int fd;
 unsigned int size;
 unsigned int loop;
 unsigned int khash;
 unsigned int kpos;
 unsigned int hpos;
 unsigned int hslots;
 unsigned int dpos;
 unsigned int dlen;
};


_Bool cdb_getkvlen(struct cdb *db, unsigned int *klen, unsigned int *vlen, unsigned int pos);
void cdb_free(struct cdb *);
_Bool cdb_init(struct cdb *, int fd);
void cdb_findstart(struct cdb *);
_Bool cdb_read(struct cdb *, char *, unsigned int, unsigned int);
int cdb_findnext(struct cdb *, unsigned int u, const char *, unsigned int);
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb_make.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/buffer.h" 1 3 4





typedef int (*BufferOp)(int, const char *, int);

typedef struct buffer {
 char *x;
 unsigned int p;
 unsigned int n;
 int fd;
 BufferOp op;
} buffer;





extern void buffer_init(buffer *,BufferOp,int,char *,unsigned int);

extern int buffer_flush(buffer *);
extern int buffer_put(buffer *,const char *,unsigned int);
extern int buffer_putalign(buffer *,const char *,unsigned int);
extern int buffer_putflush(buffer *,const char *,unsigned int);







extern int buffer_get(buffer *,char *,unsigned int);
extern int buffer_bget(buffer *,char *,unsigned int);
extern int buffer_feed(buffer *);

extern char *buffer_peek(buffer *);
extern void buffer_seek(buffer *,unsigned int);
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/buffer.h" 3 4
extern int buffer_copy(buffer *,buffer *);

extern buffer *buffer_0;
extern buffer *buffer_0small;
extern buffer *buffer_1;
extern buffer *buffer_1small;
extern buffer *buffer_2;
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/cdb_make.h" 2 3 4




struct cdb_hp { unsigned int h; unsigned int p; } ;

struct cdb_hplist {
 struct cdb_hp hp[1000];
 struct cdb_hplist *next;
 int num;
};

struct cdb_make {
 char bspace[8192];
 char final[1024];
 unsigned int count[256];
 unsigned int start[256];
 struct cdb_hplist *head;
 struct cdb_hp *split;
 struct cdb_hp *hash;
 unsigned int numentries;
 unsigned int memsize;
 buffer b;
 unsigned int pos;
 int fd;
};

extern int cdb_make_start(struct cdb_make *,int);
extern int cdb_make_addbegin(struct cdb_make *,unsigned int,unsigned int);
extern int cdb_make_addend(struct cdb_make *,unsigned int,unsigned int,unsigned int);
extern int cdb_make_add(struct cdb_make *,const char *,unsigned int,const char *,unsigned int);
extern int cdb_make_finish(struct cdb_make *);
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb_version.h" 1 3 4
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 2 3 4
# 87 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdb.h" 3 4
typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
typedef struct sdb_gperf_t {
 const char *name;
 const char *(*get)(const char *k);
 unsigned int *(*hash)(const char *k);
 _Bool (*foreach)(GperfForeachCallback cb, void *user);
} SdbGperf;

typedef struct sdb_t {
 char *dir;
 char *path;
 char *name;
 int fd;
 int refs;
 int lock;
 int journal;
 struct cdb db;
 struct cdb_make m;
 HtPP *ht;
 unsigned int eod;
 unsigned int pos;
 SdbGperf *gp;
 int fdump;
 char *ndump;
 unsigned long long expire;
 unsigned long long last;
 int options;
 int ns_lock;
 SdbList *ns;
 SdbList *hooks;
 SdbKv tmpkv;
 unsigned int depth;
 _Bool timestamped;
 SdbMini mht;
} Sdb;

typedef struct sdb_ns_t {
 char *name;
 unsigned int hash;
 Sdb *sdb;
} SdbNs;

__attribute__ ((visibility ("default"))) Sdb* sdb_new0(void);
__attribute__ ((visibility ("default"))) Sdb* sdb_new(const char *path, const char *file, int lock);

__attribute__ ((visibility ("default"))) int sdb_open(Sdb *s, const char *file);
__attribute__ ((visibility ("default"))) int sdb_open_gperf(Sdb *s, SdbGperf *g);
__attribute__ ((visibility ("default"))) void sdb_close(Sdb *s);

__attribute__ ((visibility ("default"))) void sdb_config(Sdb *s, int options);
__attribute__ ((visibility ("default"))) _Bool sdb_free(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_file(Sdb* s, const char *dir);
__attribute__ ((visibility ("default"))) _Bool sdb_merge(Sdb* d, Sdb *s);
__attribute__ ((visibility ("default"))) int sdb_count(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_reset(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_setup(Sdb* s, int options);
__attribute__ ((visibility ("default"))) void sdb_drain(Sdb*, Sdb*);


__attribute__ ((visibility ("default"))) void sdb_copy(Sdb *src, Sdb *dst);

__attribute__ ((visibility ("default"))) _Bool sdb_stats(Sdb *s, unsigned int *disk, unsigned int *mem);
__attribute__ ((visibility ("default"))) _Bool sdb_dump_hasnext (Sdb* s);

typedef _Bool (*SdbForeachCallback)(void *user, const char *k, const char *v);
__attribute__ ((visibility ("default"))) _Bool sdb_foreach(Sdb* s, SdbForeachCallback cb, void *user);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list(Sdb* s, _Bool sorted);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_list_filter(Sdb* s, SdbForeachCallback filter, _Bool sorted);
__attribute__ ((visibility ("default"))) SdbList *sdb_foreach_match(Sdb* s, const char *expr, _Bool sorted);

__attribute__ ((visibility ("default"))) int sdb_query(Sdb* s, const char *cmd);
__attribute__ ((visibility ("default"))) int sdb_queryf(Sdb* s, const char *fmt, ...);
__attribute__ ((visibility ("default"))) int sdb_query_lines(Sdb *s, const char *cmd);
__attribute__ ((visibility ("default"))) char *sdb_querys(Sdb* s, char *buf, size_t len, const char *cmd);
__attribute__ ((visibility ("default"))) char *sdb_querysf(Sdb* s, char *buf, size_t buflen, const char *fmt, ...);
__attribute__ ((visibility ("default"))) int sdb_query_file(Sdb *s, const char* file);
__attribute__ ((visibility ("default"))) _Bool sdb_exists(Sdb*, const char *key);
__attribute__ ((visibility ("default"))) _Bool sdb_remove(Sdb*, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_unset(Sdb*, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_unset_like(Sdb *s, const char *k);
__attribute__ ((visibility ("default"))) char** sdb_like(Sdb *s, const char *k, const char *v, SdbForeachCallback cb);


typedef struct sdb_diff_t {
 const SdbList *path;
 const char *k;
 const char *v;
 _Bool add;
} SdbDiff;


__attribute__ ((visibility ("default"))) int sdb_diff_format(char *str, int size, const SdbDiff *diff);

typedef void (*SdbDiffCallback)(const SdbDiff *diff, void *user);



__attribute__ ((visibility ("default"))) _Bool sdb_diff(Sdb *a, Sdb *b, SdbDiffCallback cb, void *cb_user);


__attribute__ ((visibility ("default"))) char *sdb_get(Sdb*, const char *key, unsigned int *cas);



__attribute__ ((visibility ("default"))) char *sdb_get_len(Sdb*, const char *key, int *vlen, unsigned int *cas);


__attribute__ ((visibility ("default"))) const char *sdb_const_get(Sdb*, const char *key, unsigned int *cas);



__attribute__ ((visibility ("default"))) const char *sdb_const_get_len(Sdb* s, const char *key, int *vlen, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_set(Sdb*, const char *key, const char *data, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_set_owned(Sdb* s, const char *key, char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_concat(Sdb *s, const char *key, const char *value, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_uncat(Sdb *s, const char *key, const char *value, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_add(Sdb* s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_sync(Sdb*);
__attribute__ ((visibility ("default"))) void sdbkv_free(SdbKv *kv);


__attribute__ ((visibility ("default"))) _Bool sdb_num_exists(Sdb*, const char *key);
__attribute__ ((visibility ("default"))) int sdb_num_base(const char *s);
__attribute__ ((visibility ("default"))) unsigned long long sdb_num_get(Sdb* s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_num_set(Sdb* s, const char *key, unsigned long long v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_num_add(Sdb *s, const char *key, unsigned long long v, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_num_inc(Sdb* s, const char *key, unsigned long long n, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_num_dec(Sdb* s, const char *key, unsigned long long n, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_num_min(Sdb* s, const char *key, unsigned long long v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_num_max(Sdb* s, const char *key, unsigned long long v, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_ptr_set(Sdb *db, const char *key, void *p, unsigned int cas);
__attribute__ ((visibility ("default"))) void* sdb_ptr_get(Sdb *db, const char *key, unsigned int *cas);


__attribute__ ((visibility ("default"))) _Bool sdb_disk_create(Sdb* s);
__attribute__ ((visibility ("default"))) _Bool sdb_disk_insert(Sdb* s, const char *key, const char *val);
__attribute__ ((visibility ("default"))) _Bool sdb_disk_finish(Sdb* s);
__attribute__ ((visibility ("default"))) _Bool sdb_disk_unlink(Sdb* s);


__attribute__ ((visibility ("default"))) _Bool sdb_text_save_fd(Sdb *s, int fd, _Bool sort);
__attribute__ ((visibility ("default"))) _Bool sdb_text_save(Sdb *s, const char *file, _Bool sort);
__attribute__ ((visibility ("default"))) _Bool sdb_text_load_buf(Sdb *s, char *buf, size_t sz);
__attribute__ ((visibility ("default"))) _Bool sdb_text_load(Sdb *s, const char *file);
__attribute__ ((visibility ("default"))) _Bool sdb_text_check(Sdb *s, const char *file);


__attribute__ ((visibility ("default"))) void sdb_dump_begin(Sdb* s);
__attribute__ ((visibility ("default"))) SdbKv *sdb_dump_next(Sdb* s);
__attribute__ ((visibility ("default"))) _Bool sdb_dump_dupnext(Sdb* s, char *key, char **value, int *_vlen);


__attribute__ ((visibility ("default"))) _Bool sdb_journal_close(Sdb *s);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_open(Sdb *s);
__attribute__ ((visibility ("default"))) int sdb_journal_load(Sdb *s);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_log(Sdb *s, const char *key, const char *val);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_clear(Sdb *s);
__attribute__ ((visibility ("default"))) _Bool sdb_journal_unlink(Sdb *s);


__attribute__ ((visibility ("default"))) char *sdb_itoa(unsigned long long n, char *s, int base);
__attribute__ ((visibility ("default"))) unsigned long long sdb_atoi(const char *s);
__attribute__ ((visibility ("default"))) const char *sdb_itoca(unsigned long long n);


__attribute__ ((visibility ("default"))) _Bool sdb_lock(const char *s);
__attribute__ ((visibility ("default"))) const char *sdb_lock_file(const char *f);
__attribute__ ((visibility ("default"))) void sdb_unlock(const char *s);
__attribute__ ((visibility ("default"))) _Bool sdb_unlink(Sdb* s);
__attribute__ ((visibility ("default"))) int sdb_lock_wait(const char *s __attribute__((__unused__)));


__attribute__ ((visibility ("default"))) _Bool sdb_expire_set(Sdb* s, const char *key, unsigned long long expire, unsigned int cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_expire_get(Sdb* s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_now(void);
__attribute__ ((visibility ("default"))) unsigned long long sdb_unow(void);
__attribute__ ((visibility ("default"))) unsigned int sdb_hash(const char *key);
__attribute__ ((visibility ("default"))) unsigned int sdb_hash_len(const char *key, unsigned int *len);
__attribute__ ((visibility ("default"))) unsigned char sdb_hash_byte(const char *s);



__attribute__ ((visibility ("default"))) _Bool sdb_isjson(const char *k);
__attribute__ ((visibility ("default"))) char *sdb_json_get_str (const char *json, const char *path);
__attribute__ ((visibility ("default"))) _Bool sdb_json_get_bool(const char *json, const char *path);

__attribute__ ((visibility ("default"))) char *sdb_json_get(Sdb* s, const char *key, const char *p, unsigned int *cas);
__attribute__ ((visibility ("default"))) _Bool sdb_json_set(Sdb* s, const char *k, const char *p, const char *v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_get(Sdb* s, const char *k, const char *p, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_set(Sdb* s, const char *k, const char *p, int v, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_dec(Sdb* s, const char *k, const char *p, int n, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_json_num_inc(Sdb* s, const char *k, const char *p, int n, unsigned int cas);

__attribute__ ((visibility ("default"))) char *sdb_json_indent(const char *s, const char *tab);
__attribute__ ((visibility ("default"))) char *sdb_json_unindent(const char *s);

typedef struct {
 char *buf;
 size_t blen;
 size_t len;
} SdbJsonString;

__attribute__ ((visibility ("default"))) const char *sdb_json_format(SdbJsonString* s, const char *fmt, ...);



__attribute__ ((visibility ("default"))) Sdb* sdb_ns(Sdb *s, const char *name, int create);
__attribute__ ((visibility ("default"))) Sdb *sdb_ns_path(Sdb *s, const char *path, int create);
__attribute__ ((visibility ("default"))) void sdb_ns_init(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_ns_free(Sdb* s);
__attribute__ ((visibility ("default"))) void sdb_ns_lock(Sdb *s, int lock, int depth);
__attribute__ ((visibility ("default"))) void sdb_ns_sync(Sdb* s);
__attribute__ ((visibility ("default"))) int sdb_ns_set(Sdb *s, const char *name, Sdb *r);
__attribute__ ((visibility ("default"))) _Bool sdb_ns_unset(Sdb *s, const char *name, Sdb *r);


__attribute__ ((visibility ("default"))) _Bool sdb_array_contains(Sdb* s, const char *key, const char *val, unsigned int *cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_contains_num(Sdb *s, const char *key, unsigned long long val, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_array_indexof(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_set(Sdb* s, const char *key, int idx, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_set_num(Sdb* s, const char *key, int idx, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_append(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_append_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_prepend(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_array_prepend_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) char *sdb_array_get(Sdb* s, const char *key, int idx, unsigned int *cas);
__attribute__ ((visibility ("default"))) unsigned long long sdb_array_get_num(Sdb* s, const char *key, int idx, unsigned int *cas);
__attribute__ ((visibility ("default"))) int sdb_array_get_idx(Sdb *s, const char *key, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_insert(Sdb* s, const char *key, int idx, const char *val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_insert_num(Sdb* s, const char *key, int idx, unsigned long long val, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_unset(Sdb* s, const char *key, int n, unsigned int cas);
__attribute__ ((visibility ("default"))) int sdb_array_delete(Sdb* s, const char *key, int n, unsigned int cas);
__attribute__ ((visibility ("default"))) void sdb_array_sort(Sdb* s, const char *key, unsigned int cas);
__attribute__ ((visibility ("default"))) void sdb_array_sort_num(Sdb* s, const char *key, unsigned int cas);



__attribute__ ((visibility ("default"))) int sdb_array_add(Sdb* s, const char *key, const char *val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_add_num(Sdb* s, const char *key, unsigned long long val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_add_sorted(Sdb *s, const char *key, const char *val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_add_sorted_num(Sdb *s, const char *key, unsigned long long val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_remove(Sdb *s, const char *key, const char *val, unsigned int cas);


__attribute__ ((visibility ("default"))) int sdb_array_remove_num(Sdb* s, const char *key, unsigned long long val, unsigned int cas);


__attribute__ ((visibility ("default"))) char *sdb_anext(char *str, char **next);
__attribute__ ((visibility ("default"))) const char *sdb_const_anext(const char *str);
__attribute__ ((visibility ("default"))) int sdb_alen(const char *str);
__attribute__ ((visibility ("default"))) int sdb_alen_ignore_empty(const char *str);
__attribute__ ((visibility ("default"))) int sdb_array_size(Sdb* s, const char *key);
__attribute__ ((visibility ("default"))) int sdb_array_length(Sdb* s, const char *key);

int sdb_array_list(Sdb* s, const char *key);


__attribute__ ((visibility ("default"))) _Bool sdb_array_push(Sdb *s, const char *key, const char *val, unsigned int cas);



__attribute__ ((visibility ("default"))) char *sdb_array_pop(Sdb *s, const char *key, unsigned int *cas);


__attribute__ ((visibility ("default"))) int sdb_array_push_num(Sdb *s, const char *key, unsigned long long num, unsigned int cas);


__attribute__ ((visibility ("default"))) unsigned long long sdb_array_pop_num(Sdb *s, const char *key, unsigned int *cas);

__attribute__ ((visibility ("default"))) char *sdb_array_pop_head(Sdb *s, const char *key, unsigned int *cas);
__attribute__ ((visibility ("default"))) char *sdb_array_pop_tail(Sdb *s, const char *key, unsigned int *cas);

typedef void (*SdbHook)(Sdb *s, void *user, const char *k, const char *v);

__attribute__ ((visibility ("default"))) void sdb_global_hook(SdbHook hook, void *user);
__attribute__ ((visibility ("default"))) _Bool sdb_hook(Sdb* s, SdbHook cb, void* user);
__attribute__ ((visibility ("default"))) _Bool sdb_unhook(Sdb* s, SdbHook h);
__attribute__ ((visibility ("default"))) int sdb_hook_call(Sdb *s, const char *k, const char *v);
__attribute__ ((visibility ("default"))) void sdb_hook_free(Sdb *s);

__attribute__ ((visibility ("default"))) int sdb_isnum(const char *s);
__attribute__ ((visibility ("default"))) _Bool sdb_isempty(Sdb *s);

__attribute__ ((visibility ("default"))) const char *sdb_type(const char *k);
__attribute__ ((visibility ("default"))) _Bool sdb_match(const char *str, const char *glob);
__attribute__ ((visibility ("default"))) int sdb_bool_set(Sdb *db, const char *str, _Bool v, unsigned int cas);
__attribute__ ((visibility ("default"))) _Bool sdb_bool_get(Sdb *db, const char *str, unsigned int *cas);


__attribute__ ((visibility ("default"))) unsigned char *sdb_decode(const char *in, int *len);
__attribute__ ((visibility ("default"))) char *sdb_encode(const unsigned char *bin, int len);
__attribute__ ((visibility ("default"))) void sdb_encode_raw(char *bout, const unsigned char *bin, int len);
__attribute__ ((visibility ("default"))) int sdb_decode_raw(unsigned char *bout, const char *bin, int len);


__attribute__ ((visibility ("default"))) char *sdb_fmt(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__ ((visibility ("default"))) int sdb_fmt_init(void *p, const char *fmt);
__attribute__ ((visibility ("default"))) void sdb_fmt_free(void *p, const char *fmt);
__attribute__ ((visibility ("default"))) int sdb_fmt_tobin(const char *_str, const char *fmt, void *stru);
__attribute__ ((visibility ("default"))) char *sdb_fmt_tostr(void *stru, const char *fmt);
__attribute__ ((visibility ("default"))) char** sdb_fmt_array(const char *list);
__attribute__ ((visibility ("default"))) unsigned long long* sdb_fmt_array_num(const char *list);


__attribute__ ((visibility ("default"))) char *sdb_array_compact(char *p);
__attribute__ ((visibility ("default"))) char *sdb_aslice(char *out, int from, int to);
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 2 3 4






typedef void (*RListFree)(void *ptr);

typedef struct r_list_iter_t {
 void *data;
 struct r_list_iter_t *n, *p;
} RListIter;

typedef struct r_list_t {
 RListIter *head;
 RListIter *tail;
 RListFree free;
 int length;
 _Bool sorted;
} RList;

typedef struct r_list_range_t {
 HtPP *h;
 RList *l;
} RListRange;


typedef int (*RListComparator)(const void *a, const void *b);


typedef struct r_oflist_t {
 RList super;
 void** *array;
} ROFList;
# 73 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 3 4
__attribute__((visibility("default"))) RList *r_list_new(void);
__attribute__((visibility("default"))) RList *r_list_newf(RListFree f);
__attribute__((visibility("default"))) RListIter *r_list_iter_get_next(RListIter *list);
__attribute__((visibility("default"))) RListIter *r_list_iter_get_prev(RListIter *list);
__attribute__((visibility("default"))) int r_list_set_n(RList *list, int n, void *p);
__attribute__((visibility("default"))) void *r_list_iter_get_data(RListIter *list);
__attribute__((visibility("default"))) RListIter *r_list_append(RList *list, void *data);
__attribute__((visibility("default"))) RListIter *r_list_prepend(RList *list, void *data);
__attribute__((visibility("default"))) RListIter *r_list_insert(RList *list, unsigned int n, void *data);
__attribute__((visibility("default"))) int r_list_length(const RList *list);
__attribute__((visibility("default"))) size_t r_list_iter_length(RListIter *iter);
__attribute__((visibility("default"))) void *r_list_first(const RList *list);
__attribute__((visibility("default"))) void *r_list_last(const RList *list);
__attribute__((visibility("default"))) RListIter *r_list_add_sorted(RList *list, void *data, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_sort(RList *list, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_merge_sort(RList *list, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_insertion_sort(RList *list, RListComparator cmp);
__attribute__((visibility("default"))) RList *r_list_uniq(const RList *list, RListComparator cmp);
__attribute__((visibility("default"))) void r_list_init(RList *list);
__attribute__((visibility("default"))) void r_list_delete(RList *list, RListIter *iter);
__attribute__((visibility("default"))) _Bool r_list_delete_data(RList *list, void *ptr);
__attribute__((visibility("default"))) void r_list_iter_init(RListIter *iter, RList *list);
__attribute__((visibility("default"))) void r_list_purge(RList *list);
__attribute__((visibility("default"))) void r_list_free(RList *list);
__attribute__((visibility("default"))) RListIter *r_list_item_new(void *data);
__attribute__((visibility("default"))) void r_list_split(RList *list, void *ptr);
__attribute__((visibility("default"))) void r_list_split_iter(RList *list, RListIter *iter);
__attribute__((visibility("default"))) int r_list_join(RList *list1, RList *list2);
__attribute__((visibility("default"))) void *r_list_get_n(const RList *list, int n);
__attribute__((visibility("default"))) int r_list_del_n(RList *list, int n);
__attribute__((visibility("default"))) void *r_list_get_top(const RList *list);
__attribute__((visibility("default"))) void *r_list_get_bottom(const RList *list);
__attribute__((visibility("default"))) void r_list_iter_to_top(RList *list, RListIter *iter);
__attribute__((visibility("default"))) void *r_list_pop(RList *list);
__attribute__((visibility("default"))) void *r_list_pop_head(RList *list);
__attribute__((visibility("default"))) void r_list_reverse(RList *list);
__attribute__((visibility("default"))) RList *r_list_clone(const RList *list);
__attribute__((visibility("default"))) char *r_list_to_str(RList *list, char ch);


__attribute__((visibility("default"))) RListIter *r_list_contains(const RList *list, const void *p);
__attribute__((visibility("default"))) RListIter *r_list_find(const RList *list, const void *p, RListComparator cmp);
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 2 3 4






typedef struct r_regex_t {
 int re_magic;
 size_t re_nsub;
 const char *re_endp;
 struct re_guts *re_g;
 int re_flags;
} RRegex;

typedef struct r_regmatch_t {
 long long rm_so;
 long long rm_eo;
} RRegexMatch;
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 3 4
__attribute__((visibility("default"))) int r_regex_run(const char *pattern, const char *flags, const char *text);
__attribute__((visibility("default"))) _Bool r_regex_match(const char *pattern, const char *flags, const char *text);

__attribute__((visibility("default"))) int r_regex_flags(const char *flags);


__attribute__((visibility("default"))) RRegex *r_regex_new(const char *pattern, const char *cflags);
__attribute__((visibility("default"))) void r_regex_free(RRegex *);
__attribute__((visibility("default"))) int r_regex_init(RRegex*, const char *pattern, int flags);
__attribute__((visibility("default"))) void r_regex_fini(RRegex *);

__attribute__((visibility("default"))) _Bool r_regex_check(const RRegex *rr, const char *str);
__attribute__((visibility("default"))) int r_regex_exec(const RRegex *preg, const char *string, size_t nmatch, RRegexMatch __pmatch[], int eflags);
__attribute__((visibility("default"))) RList *r_regex_match_list(RRegex *rx, const char *text);
__attribute__((visibility("default"))) char *r_regex_error(RRegex *rx, int errcode);
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_getopt.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_getopt.h" 2 3 4

typedef struct r_getopt_t {
 int err;
 int ind;
 int opt;
 int reset;
 const char *arg;

 int argc;
 const char **argv;
 const char *ostr;
} RGetopt;

__attribute__((visibility("default"))) void r_getopt_init(RGetopt *go, int argc, const char **argv, const char *ostr);
__attribute__((visibility("default"))) int r_getopt_next(RGetopt *opt);
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_skiplist.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_skiplist.h" 3 4
typedef struct r_skiplist_node_t {
 void *data;
 struct r_skiplist_node_t **forward;
} RSkipListNode;

typedef struct r_skiplist_t {
 RSkipListNode *head;
 int list_level;
 int size;
 RListFree freefn;
 RListComparator compare;
} RSkipList;

__attribute__((visibility("default"))) RSkipList* r_skiplist_new(RListFree freefn, RListComparator comparefn);
__attribute__((visibility("default"))) void r_skiplist_free(RSkipList *list);
__attribute__((visibility("default"))) void r_skiplist_purge(RSkipList *list);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_insert(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_insert_autofree(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_delete(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_delete_node(RSkipList *list, RSkipListNode *node);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_find(RSkipList* list, void* data);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_find_geq(RSkipList* list, void* data);
__attribute__((visibility("default"))) RSkipListNode* r_skiplist_find_leq(RSkipList* list, void* data);
__attribute__((visibility("default"))) void r_skiplist_join(RSkipList *l1, RSkipList *l2);
__attribute__((visibility("default"))) void *r_skiplist_get_first(RSkipList *list);
__attribute__((visibility("default"))) void *r_skiplist_get_n(RSkipList *list, int n);
__attribute__((visibility("default"))) void* r_skiplist_get_geq(RSkipList* list, void* data);
__attribute__((visibility("default"))) void* r_skiplist_get_leq(RSkipList* list, void* data);
__attribute__((visibility("default"))) _Bool r_skiplist_empty(RSkipList *list);
__attribute__((visibility("default"))) RList *r_skiplist_to_list(RSkipList *list);
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/semaphore.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/semaphore.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/semaphore.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/semaphore.h" 3 4
typedef int sem_t;








int sem_close(sem_t *);
int sem_destroy(sem_t *) __attribute__((__deprecated__));
int sem_getvalue(sem_t * restrict, int * restrict) __attribute__((__deprecated__));
int sem_init(sem_t *, int, unsigned int) __attribute__((__deprecated__));
sem_t * sem_open(const char *, int, ...);
int sem_post(sem_t *);
int sem_trywait(sem_t *);
int sem_unlink(const char *);
int sem_wait(sem_t *) __asm("_" "sem_wait" );

# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/semaphore.h" 2 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 1 3 4
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 1 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/pthread_impl.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 2 3 4






struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);

# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE = 0x21, QOS_CLASS_USER_INITIATED = 0x19, QOS_CLASS_DEFAULT = 0x15, QOS_CLASS_UTILITY = 0x11, QOS_CLASS_BACKGROUND = 0x09, QOS_CLASS_UNSPECIFIED = 0x00, }; typedef unsigned int qos_class_t
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4
 ;
# 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

qos_class_t
qos_class_self(void);
# 192 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

qos_class_t
qos_class_main(void);


# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 2 3 4







# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 291 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_override_qos_class_end_np(pthread_override_t __override);


# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

int pthread_atfork(void (* )(void), void (* )(void),
  void (* )(void));


int pthread_attr_destroy(pthread_attr_t *);


int pthread_attr_getdetachstate(const pthread_attr_t *, int *);


int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);


int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getstack(const pthread_attr_t * restrict,
  void * * restrict, size_t * restrict);


int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
  void * * restrict);


int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_init(pthread_attr_t *);


int pthread_attr_setdetachstate(pthread_attr_t *, int);


int pthread_attr_setguardsize(pthread_attr_t *, size_t);


int pthread_attr_setinheritsched(pthread_attr_t *, int);


int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);


int pthread_attr_setschedpolicy(pthread_attr_t *, int);


int pthread_attr_setscope(pthread_attr_t *, int);


int pthread_attr_setstack(pthread_attr_t *, void *, size_t);


int pthread_attr_setstackaddr(pthread_attr_t *, void *);


int pthread_attr_setstacksize(pthread_attr_t *, size_t);


int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );


int pthread_cond_broadcast(pthread_cond_t *);


int pthread_cond_destroy(pthread_cond_t *);


int pthread_cond_init(
  pthread_cond_t * restrict,
  const pthread_condattr_t * restrict)
  __asm("_" "pthread_cond_init" );


int pthread_cond_signal(pthread_cond_t *);


int pthread_cond_timedwait(
  pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict)
  __asm("_" "pthread_cond_timedwait" );


int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );


int pthread_condattr_destroy(pthread_condattr_t *);


int pthread_condattr_init(pthread_condattr_t *);


int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);


int pthread_condattr_setpshared(pthread_condattr_t *, int);



int pthread_create(pthread_t * restrict,
  const pthread_attr_t * restrict,
  void * (* )(void * ),
  void * restrict);







int pthread_detach(pthread_t);


int pthread_equal(pthread_t , pthread_t );


void pthread_exit(void * ) __attribute__((__noreturn__));


int pthread_getconcurrency(void);


int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);


void* pthread_getspecific(pthread_key_t);


int pthread_join(pthread_t , void * * )
  __asm("_" "pthread_join" );


int pthread_key_create(pthread_key_t *, void (* )(void *));


int pthread_key_delete(pthread_key_t);


int pthread_mutex_destroy(pthread_mutex_t *);


int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);


int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);


int pthread_mutex_lock(pthread_mutex_t *);


int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);


int pthread_mutex_trylock(pthread_mutex_t *);


int pthread_mutex_unlock(pthread_mutex_t *);


int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );


int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_init(pthread_mutexattr_t *);


int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);


int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);


int pthread_mutexattr_settype(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);



int pthread_once(pthread_once_t *, void (* )(void));


int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );


int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict)
  __asm("_" "pthread_rwlock_init" );


int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );


int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );


int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );


int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );


int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );


int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);


int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);


int pthread_rwlockattr_init(pthread_rwlockattr_t *);


int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);


pthread_t pthread_self(void);


int pthread_setcancelstate(int , int * )
  __asm("_" "pthread_setcancelstate" );


int pthread_setcanceltype(int , int * )
  __asm("_" "pthread_setcanceltype" );


int pthread_setconcurrency(int);


int pthread_setschedparam(pthread_t, int, const struct sched_param *);


int pthread_setspecific(pthread_key_t , const void * );


void pthread_testcancel(void) __asm("_" "pthread_testcancel" );





int pthread_is_threaded_np(void);


int pthread_threadid_np(pthread_t ,__uint64_t* );



int pthread_getname_np(pthread_t,char*,size_t);


int pthread_setname_np(const char*);



int pthread_main_np(void);



mach_port_t pthread_mach_thread_np(pthread_t);


size_t pthread_get_stacksize_np(pthread_t);


void* pthread_get_stackaddr_np(pthread_t);



int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );



int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec * );




int pthread_create_suspended_np(
  pthread_t * , const pthread_attr_t * ,
  void * (* )(void * ), void * );






int pthread_kill(pthread_t, int);


 pthread_t pthread_from_mach_thread_np(mach_port_t);


int pthread_sigmask(int, const sigset_t * , sigset_t * )
  __asm("_" "pthread_sigmask" );


void pthread_yield_np(void);



void pthread_jit_write_protect_np(int enabled);



int pthread_jit_write_protect_supported_np(void);
# 582 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

int
pthread_cpu_number_np(size_t *cpu_number_out);



# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 2 3 4
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_th.h" 3 4
typedef enum { R_TH_FREED = -1, R_TH_STOP = 0, R_TH_REPEAT = 1 } RThreadFunctionRet;






typedef struct r_th_sem_t {
 sem_t * sem;
} RThreadSemaphore;

typedef struct r_th_lock_t {
 pthread_mutex_t lock;
} RThreadLock;

typedef struct r_th_cond_t {
 pthread_cond_t cond;
} RThreadCond;

typedef struct r_th_t {
 pthread_t tid;
 RThreadLock *lock;
 RThreadFunctionRet (*fun)(struct r_th_t *);
 void *user;
 int running;
 int breaked;
 int delay;
 int ready;
} RThread;

typedef struct r_th_pool_t {
 int size;
 RThread **threads;
} RThreadPool;


__attribute__((visibility("default"))) RThread *r_th_new(RThreadFunctionRet (*fun)(struct r_th_t *), void *user, int delay);
__attribute__((visibility("default"))) _Bool r_th_start(RThread *th, int enable);
__attribute__((visibility("default"))) int r_th_wait(RThread *th);
__attribute__((visibility("default"))) int r_th_wait_async(RThread *th);
__attribute__((visibility("default"))) void r_th_break(RThread *th);
__attribute__((visibility("default"))) void *r_th_free(RThread *th);
__attribute__((visibility("default"))) void *r_th_kill_free(RThread *th);
__attribute__((visibility("default"))) _Bool r_th_kill(RThread *th, _Bool force);
__attribute__((visibility("default"))) pthread_t r_th_self(void);
__attribute__((visibility("default"))) _Bool r_th_setname(RThread *th, const char *name);
__attribute__((visibility("default"))) _Bool r_th_getname(RThread *th, char *name, size_t len);
__attribute__((visibility("default"))) _Bool r_th_setaffinity(RThread *th, int cpuid);

__attribute__((visibility("default"))) RThreadSemaphore *r_th_sem_new(unsigned int initial);
__attribute__((visibility("default"))) void r_th_sem_free(RThreadSemaphore *sem);
__attribute__((visibility("default"))) void r_th_sem_post(RThreadSemaphore *sem);
__attribute__((visibility("default"))) void r_th_sem_wait(RThreadSemaphore *sem);

__attribute__((visibility("default"))) RThreadLock *r_th_lock_new(_Bool recursive);
__attribute__((visibility("default"))) int r_th_lock_wait(RThreadLock *th);
__attribute__((visibility("default"))) int r_th_lock_tryenter(RThreadLock *thl);
__attribute__((visibility("default"))) int r_th_lock_enter(RThreadLock *thl);
__attribute__((visibility("default"))) int r_th_lock_leave(RThreadLock *thl);
__attribute__((visibility("default"))) void *r_th_lock_free(RThreadLock *thl);

__attribute__((visibility("default"))) RThreadCond *r_th_cond_new(void);
__attribute__((visibility("default"))) void r_th_cond_signal(RThreadCond *cond);
__attribute__((visibility("default"))) void r_th_cond_signal_all(RThreadCond *cond);
__attribute__((visibility("default"))) void r_th_cond_wait(RThreadCond *cond, RThreadLock *lock);
__attribute__((visibility("default"))) void r_th_cond_free(RThreadCond *cond);
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4


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
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 1 3 4
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 3 4
typedef struct ht_up_kv {
 unsigned long long key;
 void * value;
 unsigned int key_len;
 unsigned int value_len;
} HtUPKv;

typedef void (*HtUPKvFreeFunc)(HtUPKv *);
typedef unsigned long long (*HtUPDupKey)(const unsigned long long);
typedef void * (*HtUPDupValue)(const void *);
typedef unsigned int (*HtUPCalcSizeK)(const unsigned long long);
typedef unsigned int (*HtUPCalcSizeV)(const void *);
typedef unsigned int (*HtUPHashFunction)(const unsigned long long);
typedef int (*HtUPListComparator)(const unsigned long long, const unsigned long long);
typedef _Bool (*HtUPForeachCallback)(void *user, const unsigned long long, const void *);

typedef struct ht_up_bucket_t {
 HtUPKv *arr;
 unsigned int count;
} HtUPBucket;


typedef struct ht_up_options_t {
 HtUPListComparator cmp;
 HtUPHashFunction hashfn;
 HtUPDupKey dupkey;
 HtUPDupValue dupvalue;
 HtUPCalcSizeK calcsizeK;
 HtUPCalcSizeV calcsizeV;
 HtUPKvFreeFunc freefn;
 size_t elem_size;
} HtUPOptions;


typedef struct ht_up_t {
 unsigned int size;
 unsigned int count;
 HtUPBucket* table;
 unsigned int prime_idx;
 HtUPOptions opt;
} HtUP;


__attribute__ ((visibility ("default"))) HtUP* ht_up_new_opt(HtUPOptions *opt);

__attribute__ ((visibility ("default"))) void ht_up_free(HtUP* ht);

__attribute__ ((visibility ("default"))) _Bool ht_up_insert(HtUP* ht, const unsigned long long key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_up_update(HtUP* ht, const unsigned long long key, void * value);

__attribute__ ((visibility ("default"))) _Bool ht_up_update_key(HtUP* ht, const unsigned long long old_key, const unsigned long long new_key);

__attribute__ ((visibility ("default"))) _Bool ht_up_delete(HtUP* ht, const unsigned long long key);

__attribute__ ((visibility ("default"))) void * ht_up_find(HtUP* ht, const unsigned long long key, _Bool* found);




__attribute__ ((visibility ("default"))) void ht_up_foreach(HtUP *ht, HtUPForeachCallback cb, void *user);

__attribute__ ((visibility ("default"))) HtUPKv* ht_up_find_kv(HtUP* ht, const unsigned long long key, _Bool* found);
__attribute__ ((visibility ("default"))) _Bool ht_up_insert_kv(HtUP *ht, HtUPKv *kv, _Bool update);
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 2 3 4


__attribute__ ((visibility ("default"))) HtUP* ht_up_new0(void);
__attribute__ ((visibility ("default"))) HtUP* ht_up_new(HtUPDupValue valdup, HtUPKvFreeFunc pair_free, HtUPCalcSizeV valueSize);
__attribute__ ((visibility ("default"))) HtUP* ht_up_new_size(unsigned int initial_size, HtUPDupValue valdup, HtUPKvFreeFunc pair_free, HtUPCalcSizeV valueSize);
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_assert.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 1 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 3 4
typedef enum r_log_level {
 R_LOGLVL_SILLY = 0,
 R_LOGLVL_DEBUG = 1,
 R_LOGLVL_VERBOSE = 2,
 R_LOGLVL_INFO = 3,
 R_LOGLVL_WARN = 4,
 R_LOGLVL_ERROR = 5,
 R_LOGLVL_FATAL = 6,
 R_LOGLVL_NONE = 0xFF
} RLogLevel;







typedef void (*RLogCallback) (const char *output, const char *funcname, const char *filename,
 unsigned int lineno, RLogLevel level, const char *tag, const char *fmtstr, ...) __attribute__ ((format (printf, 7, 8)));
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 3 4
__attribute__((visibility("default"))) void r_log_set_level(RLogLevel level);
__attribute__((visibility("default"))) void r_log_set_file(const char *filename);
__attribute__((visibility("default"))) void r_log_set_srcinfo(_Bool show_info);
__attribute__((visibility("default"))) void r_log_set_colors(_Bool show_colors);
__attribute__((visibility("default"))) void r_log_set_traplevel(RLogLevel level);



__attribute__((visibility("default"))) void r_log_add_callback(RLogCallback cbfunc);
__attribute__((visibility("default"))) void r_log_del_callback(RLogCallback cbfunc);





__attribute__((visibility("default"))) __attribute__ ((weak)) void r_log(const char *funcname, const char *filename,
 unsigned int lineno, RLogLevel level, const char *tag, const char *fmtstr, ...) __attribute__ ((format (printf, 6, 7)));

__attribute__((visibility("default"))) __attribute__ ((weak)) void r_vlog(const char *funcname, const char *filename,
 unsigned int lineno, RLogLevel level, const char *tag, const char *fmtstr, va_list args);
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_assert.h" 2 3 4







__attribute__((visibility("default"))) void r_assert_log(RLogLevel level, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 2 3 4
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 3 4
typedef int (*RPVectorComparator)(const void *a, const void *b);
typedef void (*RVectorFree)(void *e, void *user);
typedef void (*RPVectorFree)(void *e);

typedef struct r_vector_t {
 void *a;
 size_t len;
 size_t capacity;
 size_t elem_size;
 RVectorFree free;
 void *free_user;
} RVector;


typedef struct r_pvector_t { RVector v; } RPVector;




__attribute__((visibility("default"))) void r_vector_init(RVector *vec, size_t elem_size, RVectorFree free, void *free_user);

__attribute__((visibility("default"))) RVector *r_vector_new(size_t elem_size, RVectorFree free, void *free_user);


__attribute__((visibility("default"))) void r_vector_fini(RVector *vec);


__attribute__((visibility("default"))) void r_vector_free(RVector *vec);


__attribute__((visibility("default"))) RVector *r_vector_clone(RVector *vec);

static inline _Bool r_vector_empty(const RVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 73); return (0); } } while (0);
 return vec->len == 0;
}

__attribute__((visibility("default"))) void r_vector_clear(RVector *vec);


static inline size_t r_vector_len(const RVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 81); return (0); } } while (0);
 return vec->len;
}


static inline void *r_vector_index_ptr(RVector *vec, size_t index) {
 do { if (!(vec && index < vec->capacity)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->capacity", 87); return (((void *)0)); } } while (0);
 return (char *)vec->a + vec->elem_size * index;
}



__attribute__((visibility("default"))) void r_vector_assign(RVector *vec, void *p, void *elem);



__attribute__((visibility("default"))) void *r_vector_assign_at(RVector *vec, size_t index, void *elem);



__attribute__((visibility("default"))) void r_vector_remove_at(RVector *vec, size_t index, void *into);



__attribute__((visibility("default"))) void *r_vector_insert(RVector *vec, size_t index, void *x);


__attribute__((visibility("default"))) void *r_vector_insert_range(RVector *vec, size_t index, void *first, size_t count);


__attribute__((visibility("default"))) void r_vector_pop(RVector *vec, void *into);


__attribute__((visibility("default"))) void r_vector_pop_front(RVector *vec, void *into);


__attribute__((visibility("default"))) void *r_vector_push(RVector *vec, void *x);


__attribute__((visibility("default"))) void *r_vector_push_front(RVector *vec, void *x);


__attribute__((visibility("default"))) void *r_vector_reserve(RVector *vec, size_t capacity);


__attribute__((visibility("default"))) void *r_vector_shrink(RVector *vec);

__attribute__((visibility("default"))) void *r_vector_flush(RVector *vec);
# 188 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 3 4
__attribute__((visibility("default"))) void r_pvector_init(RPVector *vec, RPVectorFree free);
__attribute__((visibility("default"))) void r_pvector_fini(RPVector *vec);

__attribute__((visibility("default"))) RPVector *r_pvector_new(RPVectorFree free);

__attribute__((visibility("default"))) RPVector *r_pvector_new_with_len(RPVectorFree free, size_t length);


__attribute__((visibility("default"))) void r_pvector_clear(RPVector *vec);


__attribute__((visibility("default"))) void r_pvector_free(RPVector *vec);


static inline size_t r_pvector_len(const RPVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 203); return (0); } } while (0);
 return vec->v.len;
}

static inline void *r_pvector_at(const RPVector *vec, size_t index) {
 do { if (!(vec && index < vec->v.len)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->v.len", 208); return (((void *)0)); } } while (0);
 return ((void **)vec->v.a)[index];
}

static inline void r_pvector_set(RPVector *vec, size_t index, void *e) {
 do { if (!(vec && index < vec->v.len)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->v.len", 213); return; } } while (0);
 ((void **)vec->v.a)[index] = e;
}

static inline _Bool r_pvector_empty(RPVector *vec) {
 return r_pvector_len (vec) == 0;
}


static inline void **r_pvector_index_ptr(RPVector *vec, size_t index) {
 do { if (!(vec && index < vec->v.capacity)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec && index < vec->v.capacity", 223); return (((void *)0)); } } while (0);
 return ((void **)vec->v.a) + index;
}


static inline void **r_pvector_data(RPVector *vec) {
 do { if (!(vec)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "vec", 229); return (((void *)0)); } } while (0);
 return (void **)vec->v.a;
}


__attribute__((visibility("default"))) void **r_pvector_contains(RPVector *vec, void *x);


__attribute__((visibility("default"))) void *r_pvector_remove_at(RPVector *vec, size_t index);


__attribute__((visibility("default"))) void r_pvector_remove_data(RPVector *vec, void *x);


static inline void **r_pvector_insert(RPVector *vec, size_t index, void *x) {
 return (void **)r_vector_insert (&vec->v, index, &x);
}


static inline void **r_pvector_insert_range(RPVector *vec, size_t index, void **first, size_t count) {
 return (void **)r_vector_insert_range (&vec->v, index, first, count);
}


__attribute__((visibility("default"))) void *r_pvector_pop(RPVector *vec);


__attribute__((visibility("default"))) void *r_pvector_pop_front(RPVector *vec);


static inline void **r_pvector_push(RPVector *vec, void *x) {
 return (void **)r_vector_push (&vec->v, &x);
}


static inline void **r_pvector_push_front(RPVector *vec, void *x) {
 return (void **)r_vector_push_front (&vec->v, &x);
}


__attribute__((visibility("default"))) void r_pvector_sort(RPVector *vec, RPVectorComparator cmp);


__attribute__((visibility("default"))) int r_pvector_bsearch(RPVector *vec, void *needle, RPVectorComparator cmp);

static inline void **r_pvector_reserve(RPVector *vec, size_t capacity) {
 return (void **)r_vector_reserve (&vec->v, capacity);
}

static inline void **r_pvector_shrink(RPVector *vec) {
 return (void **)r_vector_shrink (&vec->v);
}

static inline void **r_pvector_flush(RPVector *vec) {
 return (void **)r_vector_flush (&vec->v);
}
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_event.h" 2 3 4

typedef struct r_event_t {
 void *user;
 _Bool incall;
 HtUP *callbacks;
 RVector all_callbacks;
 int next_handle;
} REvent;

typedef struct r_event_callback_handle_t {
 int handle;
 int type;
} REventCallbackHandle;

typedef void (*REventCallback)(REvent *ev, int type, void *user, void *data);

typedef enum {
 R_EVENT_ALL = 0,
 R_EVENT_META_SET,
 R_EVENT_META_DEL,
 R_EVENT_META_CLEAR,
 R_EVENT_CLASS_NEW,
 R_EVENT_CLASS_DEL,
 R_EVENT_CLASS_RENAME,
 R_EVENT_CLASS_ATTR_SET,
 R_EVENT_CLASS_ATTR_DEL,
 R_EVENT_CLASS_ATTR_RENAME,
 R_EVENT_DEBUG_PROCESS_FINISHED,
 R_EVENT_IO_WRITE,
 R_EVENT_MAX,
} REventType;

typedef struct r_event_meta_t {
 int type;
 unsigned long long addr;
 const char *string;
} REventMeta;

typedef struct r_event_class_t {
 const char *name;
} REventClass;

typedef struct r_event_class_rename_t {
 const char *name_old;
 const char *name_new;
} REventClassRename;

typedef struct r_event_class_attr_t {
 const char *class_name;
 int attr_type;
 const char *attr_id;
} REventClassAttr;

typedef struct r_event_class_attr_set_t {
 REventClassAttr attr;
 const char *content;
} REventClassAttrSet;

typedef struct r_event_class_attr_rename_t {
 REventClassAttr attr;
 const char *attr_id_new;
} REventClassAttrRename;

typedef struct r_event_debug_process_finished_t {
 int pid;
} REventDebugProcessFinished;

typedef struct r_event_io_write_t {
 unsigned long long addr;
 const unsigned char *buf;
 int len;
} REventIOWrite;

__attribute__((visibility("default"))) REvent *r_event_new(void *user);
__attribute__((visibility("default"))) void r_event_free(REvent *ev);
__attribute__((visibility("default"))) REventCallbackHandle r_event_hook(REvent *ev, int type, REventCallback cb, void *user);
__attribute__((visibility("default"))) void r_event_unhook(REvent *ev, REventCallbackHandle handle);
__attribute__((visibility("default"))) void r_event_send(REvent *ev, int type, void *data);
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_assert.h" 1 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_itv.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_itv.h" 3 4
typedef struct r_interval_t {

 unsigned long long addr;
 unsigned long long size;
} RInterval;

typedef RInterval r_itv_t;

static inline RInterval *r_itv_new(unsigned long long addr, unsigned long long size) {
 RInterval *itv = (RInterval*)malloc(sizeof(RInterval));
 if (itv) {
  itv->addr = addr;
  itv->size = size;
 }
 return itv;
}

static inline void r_itv_free(RInterval *itv) {
 free (itv);
}

static inline unsigned long long r_itv_begin(RInterval itv) {
 return itv.addr;
}

static inline unsigned long long r_itv_size(RInterval itv) {
 return itv.size;
}

static inline unsigned long long r_itv_end(RInterval itv) {
 return itv.addr + itv.size;
}


static inline _Bool r_itv_eq(RInterval itv, RInterval itv2) {
 return itv.addr == itv2.addr && itv.size == itv2.size;
}


static inline _Bool r_itv_contain(RInterval itv, unsigned long long addr) {
 const unsigned long long end = itv.addr + itv.size;
 return itv.addr <= addr && (!end || addr < end);
}


static inline _Bool r_itv_include(RInterval itv, RInterval x) {
 const unsigned long long end = itv.addr + itv.size;
 return itv.addr <= x.addr && (!end || (x.addr + x.size && x.addr + x.size <= end));
}


static inline _Bool r_itv_overlap(RInterval itv, RInterval x) {
 const unsigned long long end = itv.addr + itv.size, end1 = x.addr + x.size;
 return (!end1 || itv.addr < end1) && (!end || x.addr < end);
}

static inline _Bool r_itv_overlap2(RInterval itv, unsigned long long addr, unsigned long long size) {
 RInterval rai = {addr, size};
 return r_itv_overlap (itv, rai);
}



static inline RInterval r_itv_intersect(RInterval itv, RInterval x) {
 const unsigned long long addr = (((itv.addr)>(x.addr))?(itv.addr):(x.addr));
 const unsigned long long end = (((itv.addr + itv.size - 1)>(x.addr + x.size - 1))?(x.addr + x.size - 1):(itv.addr + itv.size - 1)) + 1;
 RInterval rai = {addr, end - addr};
 return rai;
}
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_signal.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_signal.h" 3 4
__attribute__((visibility("default"))) int r_signal_from_string(const char *str);


__attribute__((visibility("default"))) const char* r_signal_to_string(int code);
__attribute__((visibility("default"))) const char *r_signal_to_human(int signum);



__attribute__((visibility("default"))) void r_signal_sigmask(int how, const sigset_t *newmask, sigset_t *oldmask);
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_alloc.h" 1 3 4





# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_alloc.h" 2 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_alloc.h" 3 4
typedef void *(RMalloc)(size_t);
typedef void *(RCalloc)(size_t, size_t);
typedef void *(RRealloc)(void *, size_t);
typedef void (RFree)(void *);

__attribute__((visibility("default"))) void* r_malloc_aligned(size_t size, size_t alignment);
__attribute__((visibility("default"))) void r_free_aligned(void *p);
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 1 3 4



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 2 3 4

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 2 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 3 4
typedef struct r_rb_node_t {
 struct r_rb_node_t *parent;
 struct r_rb_node_t *child[2];
 _Bool red;
} RBNode;

typedef RBNode* RBTree;




typedef int (*RBComparator)(const void *incoming, const RBNode *in_tree, void *user);

typedef void (*RBNodeFree)(RBNode *node, void *user);
typedef void (*RBNodeSum)(RBNode *node);

typedef struct r_rb_iter_t {



 size_t len;




 RBNode *path[62];
} RBIter;



__attribute__((visibility("default"))) _Bool r_rbtree_aug_delete(RBNode **root, void *data, RBComparator cmp, void *cmp_user, RBNodeFree freefn, void *free_user, RBNodeSum sum);
__attribute__((visibility("default"))) _Bool r_rbtree_aug_insert(RBNode **root, void *data, RBNode *node, RBComparator cmp, void *cmp_user, RBNodeSum sum);
__attribute__((visibility("default"))) _Bool r_rbtree_aug_update_sum(RBNode *root, void *data, RBNode *node, RBComparator cmp, void *cmp_user, RBNodeSum sum);

__attribute__((visibility("default"))) _Bool r_rbtree_delete(RBNode **root, void *data, RBComparator cmp, void *cmp_user, RBNodeFree freefn, void *free_user);
__attribute__((visibility("default"))) RBNode *r_rbtree_find(RBNode *root, void *data, RBComparator cmp, void *user);
__attribute__((visibility("default"))) void r_rbtree_free(RBNode *root, RBNodeFree freefn, void *user);
__attribute__((visibility("default"))) void r_rbtree_insert(RBNode **root, void *data, RBNode *node, RBComparator cmp, void *user);

__attribute__((visibility("default"))) RBNode *r_rbtree_lower_bound(RBNode *root, void *data, RBComparator cmp, void *user);

__attribute__((visibility("default"))) RBNode *r_rbtree_upper_bound(RBNode *root, void *data, RBComparator cmp, void *user);


__attribute__((visibility("default"))) RBIter r_rbtree_first(RBNode *root);

__attribute__((visibility("default"))) RBIter r_rbtree_last(RBNode *root);


__attribute__((visibility("default"))) RBIter r_rbtree_lower_bound_forward(RBNode *root, void *data, RBComparator cmp, void *user);

__attribute__((visibility("default"))) RBIter r_rbtree_upper_bound_backward(RBNode *root, void *data, RBComparator cmp, void *user);







__attribute__((visibility("default"))) void r_rbtree_iter_next(RBIter *it);

__attribute__((visibility("default"))) void r_rbtree_iter_prev(RBIter *it);
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_new_rbtree.h" 1 3 4
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_new_rbtree.h" 3 4
typedef struct r_crbtree_node {
 struct r_crbtree_node *link[2];
 struct r_crbtree_node *parent;
 unsigned int red;
 void *data;
} RRBNode;

typedef int (*RRBComparator) (void *incoming, void *in, void *user);
typedef void (*RRBFree) (void *data);

typedef struct r_crbtree_t {
 RRBNode *root;
 size_t size;
 RRBFree free;
} RRBTree;

__attribute__((visibility("default"))) RRBTree *r_crbtree_new(RRBFree freefn);
__attribute__((visibility("default"))) void r_crbtree_clear(RRBTree *tree);
__attribute__((visibility("default"))) void r_crbtree_free(RRBTree *tree);
__attribute__((visibility("default"))) RRBNode *r_crbtree_find_node(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) void *r_crbtree_find(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) _Bool r_crbtree_insert(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) void *r_crbtree_take(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) _Bool r_crbtree_delete(RRBTree *tree, void *data, RRBComparator cmp, void *user);
__attribute__((visibility("default"))) RRBNode *r_crbtree_first_node(RRBTree *tree);
__attribute__((visibility("default"))) RRBNode *r_crbtree_last_node(RRBTree *tree);
__attribute__((visibility("default"))) RRBNode *r_rbnode_next(RRBNode *node);
__attribute__((visibility("default"))) RRBNode *r_rbnode_prev(RRBNode *node);
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_rbtree.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 2 3 4
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_intervaltree.h" 3 4
typedef struct r_interval_node_t {
 RBNode node;
 unsigned long long start;
 unsigned long long end;
 unsigned long long max_end;
 void *data;
} RIntervalNode;

typedef void (*RIntervalNodeFree)(void *data);

typedef struct r_interval_tree_t {
 RIntervalNode *root;
 RIntervalNodeFree free;
} RIntervalTree;

__attribute__((visibility("default"))) void r_interval_tree_init(RIntervalTree *tree, RIntervalNodeFree free);
__attribute__((visibility("default"))) void r_interval_tree_fini(RIntervalTree *tree);


__attribute__((visibility("default"))) _Bool r_interval_tree_insert(RIntervalTree *tree, unsigned long long start, unsigned long long end, void *data);





__attribute__((visibility("default"))) _Bool r_interval_tree_delete(RIntervalTree *tree, RIntervalNode *node, _Bool free);





__attribute__((visibility("default"))) _Bool r_interval_tree_resize(RIntervalTree *tree, RIntervalNode *node, unsigned long long new_start, unsigned long long new_end);



__attribute__((visibility("default"))) RBIter r_interval_tree_first_at(RIntervalTree *tree, unsigned long long start);


__attribute__((visibility("default"))) RIntervalNode *r_interval_tree_node_at(RIntervalTree *tree, unsigned long long start);


__attribute__((visibility("default"))) RIntervalNode *r_interval_tree_node_at_data(RIntervalTree *tree, unsigned long long start, void *data);


static inline void *r_interval_tree_at(RIntervalTree *tree, unsigned long long start) {
 RIntervalNode *node = r_interval_tree_node_at (tree, start);
 return node ? node->data : ((void *)0);
}

typedef _Bool (*RIntervalIterCb)(RIntervalNode *node, void *user);


__attribute__((visibility("default"))) _Bool r_interval_tree_all_at(RIntervalTree *tree, unsigned long long start, RIntervalIterCb cb, void *user);



__attribute__((visibility("default"))) _Bool r_interval_tree_all_in(RIntervalTree *tree, unsigned long long value, _Bool end_inclusive, RIntervalIterCb cb, void *user);



__attribute__((visibility("default"))) _Bool r_interval_tree_all_intersect(RIntervalTree *tree, unsigned long long start, unsigned long long end, _Bool end_inclusive, RIntervalIterCb cb, void *user);

typedef RBIter RIntervalTreeIter;

static inline RIntervalNode *r_interval_tree_iter_get(RIntervalTreeIter *it) {
 return (((RIntervalNode *)((char *)(__typeof__(((RIntervalNode *)0)->node) *){(it)->path[(it)->len-1]} - __builtin_offsetof (RIntervalNode, node))));
}
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_big.h" 1 3 4
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_big.h" 3 4
typedef struct r_num_big_t {
 unsigned int array[(512 / 4)];
 int sign;
} RNumBig;


__attribute__((visibility("default"))) RNumBig *r_big_new(void);
__attribute__((visibility("default"))) void r_big_free(RNumBig *b);
__attribute__((visibility("default"))) void r_big_init(RNumBig *b);
__attribute__((visibility("default"))) void r_big_fini(RNumBig *b);


__attribute__((visibility("default"))) void r_big_from_int(RNumBig *b, long long v);
__attribute__((visibility("default"))) long long r_big_to_int(RNumBig *b);
__attribute__((visibility("default"))) void r_big_from_hexstr(RNumBig *b, const char *str);
__attribute__((visibility("default"))) char *r_big_to_hexstr(RNumBig *b);
__attribute__((visibility("default"))) void r_big_assign(RNumBig *dst, RNumBig *src);


__attribute__((visibility("default"))) void r_big_add(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_sub(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_mul(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_div(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_mod(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_divmod(RNumBig *c, RNumBig *d, RNumBig *a, RNumBig *b);


__attribute__((visibility("default"))) void r_big_and(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_or(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_xor(RNumBig *c, RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) void r_big_lshift(RNumBig *c, RNumBig *a, size_t nbits);
__attribute__((visibility("default"))) void r_big_rshift(RNumBig *c, RNumBig *a, size_t nbits);


__attribute__((visibility("default"))) int r_big_cmp(RNumBig *a, RNumBig *b);
__attribute__((visibility("default"))) int r_big_is_zero(RNumBig *a);
__attribute__((visibility("default"))) void r_big_inc(RNumBig *a);
__attribute__((visibility("default"))) void r_big_dec(RNumBig *a);
__attribute__((visibility("default"))) void r_big_powm(RNumBig *c, RNumBig *a, RNumBig *b, RNumBig *m);
__attribute__((visibility("default"))) void r_big_isqrt(RNumBig *c, RNumBig *a);
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_base64.h" 1 3 4







__attribute__((visibility("default"))) int r_base64_encode(char *bout, const unsigned char *bin, int len);
__attribute__((visibility("default"))) int r_base64_decode(unsigned char *bout, const char *bin, int len);
__attribute__((visibility("default"))) unsigned char *r_base64_decode_dyn(const char *in, int len);
__attribute__((visibility("default"))) char *r_base64_encode_dyn(const char *str, int len);
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_base91.h" 1 3 4







__attribute__((visibility("default"))) int r_base91_encode(char *bout, const unsigned char *bin, int len);
__attribute__((visibility("default"))) int r_base91_decode(unsigned char *bout, const char *bin, int len);
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_buf.h" 1 3 4


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_mem.h" 1 3 4







typedef struct r_mmap_t {
 unsigned char *buf;
 unsigned long long base;
 int len;
 int fd;
 int rw;
 char *filename;




} RMmap;

typedef struct r_mem_pool_t {
 unsigned char **nodes;
 int ncount;
 int npool;

 int nodesize;
 int poolsize;
 int poolcount;
} RMemoryPool;

__attribute__((visibility("default"))) unsigned long long r_mem_get_num(const unsigned char *b, int size);


__attribute__((visibility("default"))) RMemoryPool* r_mem_pool_deinit(RMemoryPool *pool);
__attribute__((visibility("default"))) RMemoryPool *r_mem_pool_new(int nodesize, int poolsize, int poolcount);
__attribute__((visibility("default"))) RMemoryPool *r_mem_pool_free(RMemoryPool *pool);
__attribute__((visibility("default"))) void* r_mem_pool_alloc(RMemoryPool *pool);
__attribute__((visibility("default"))) void *r_mem_dup(const void *s, int l);
__attribute__((visibility("default"))) void *r_mem_alloc(int sz);
__attribute__((visibility("default"))) void r_mem_free(void *);
__attribute__((visibility("default"))) void r_mem_memzero(void *, size_t);
__attribute__((visibility("default"))) void r_mem_reverse(unsigned char *b, int l);
__attribute__((visibility("default"))) _Bool r_mem_protect(void *ptr, int size, const char *prot);
__attribute__((visibility("default"))) int r_mem_set_num(unsigned char *dest, int dest_size, unsigned long long num);
__attribute__((visibility("default"))) int r_mem_eq(unsigned char *a, unsigned char *b, int len);
__attribute__((visibility("default"))) void r_mem_copybits(unsigned char *dst, const unsigned char *src, int bits);
__attribute__((visibility("default"))) void r_mem_copybits_delta(unsigned char *dst, int doff, const unsigned char *src, int soff, int bits);
__attribute__((visibility("default"))) void r_mem_copyloop(unsigned char *dest, const unsigned char *orig, int dsize, int osize);
__attribute__((visibility("default"))) void r_mem_swaporcopy(unsigned char *dest, const unsigned char *src, int len, _Bool big_endian);
__attribute__((visibility("default"))) void r_mem_swapendian(unsigned char *dest, const unsigned char *orig, int size);
__attribute__((visibility("default"))) void r_mem_swap(unsigned char *buf, size_t buf_len);
__attribute__((visibility("default"))) int r_mem_cmp_mask(const unsigned char *dest, const unsigned char *orig, const unsigned char *mask, int len);
__attribute__((visibility("default"))) const unsigned char *r_mem_mem(const unsigned char *haystack, int hlen, const unsigned char *needle, int nlen);
__attribute__((visibility("default"))) const unsigned char *r_mem_mem_aligned(const unsigned char *haystack, int hlen, const unsigned char *needle, int nlen, int align);
__attribute__((visibility("default"))) int r_mem_count(const unsigned char **addr);
__attribute__((visibility("default"))) _Bool r_mem_is_printable (const unsigned char *a, int la);
__attribute__((visibility("default"))) _Bool r_mem_is_zero(const unsigned char *b, int l);
__attribute__((visibility("default"))) void *r_mem_mmap_resize(RMmap *m, unsigned long long newsize);
# 4 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_buf.h" 2 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_buf.h" 3 4
typedef struct r_buf_t RBuffer;

typedef _Bool (*RBufferInit)(RBuffer *b, const void *user);
typedef _Bool (*RBufferFini)(RBuffer *b);
typedef long long (*RBufferRead)(RBuffer *b, unsigned char *buf, unsigned long long len);
typedef long long (*RBufferWrite)(RBuffer *b, const unsigned char *buf, unsigned long long len);
typedef unsigned long long (*RBufferGetSize)(RBuffer *b);
typedef _Bool (*RBufferResize)(RBuffer *b, unsigned long long newsize);
typedef long long (*RBufferSeek)(RBuffer *b, long long addr, int whence);
typedef unsigned char *(*RBufferGetWholeBuf)(RBuffer *b, unsigned long long *sz);
typedef void (*RBufferFreeWholeBuf)(RBuffer *b);
typedef RList *(*RBufferNonEmptyList)(RBuffer *b);

typedef struct r_buffer_methods_t {
 RBufferInit init;
 RBufferFini fini;
 RBufferRead read;
 RBufferWrite write;
 RBufferGetSize get_size;
 RBufferResize resize;
 RBufferSeek seek;
 RBufferGetWholeBuf get_whole_buf;
 RBufferFreeWholeBuf free_whole_buf;
 RBufferNonEmptyList nonempty_list;
} RBufferMethods;

struct r_buf_t {
 const RBufferMethods *methods;
 void *priv;
 unsigned char *whole_buf;
 _Bool readonly;
 unsigned char Oxff_priv;
 int refctr;
};


typedef struct r_buf_cache_t {
 unsigned long long from;
 unsigned long long to;
 int size;
 unsigned char *data;
 int written;
} RBufferSparse;


__attribute__((visibility("default"))) RBuffer *r_buf_new(void);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_io(void *iob, int fd);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_bytes(const unsigned char* bytes, unsigned long long len);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_string(const char *msg);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_pointers(const unsigned char *bytes, unsigned long long len, _Bool steal);
__attribute__((visibility("default"))) RBuffer *r_buf_new_file(const char *file, int perm, int mode);
__attribute__((visibility("default"))) RBuffer *r_buf_new_with_buf(RBuffer *b);
__attribute__((visibility("default"))) RBuffer *r_buf_new_slurp(const char *file);
__attribute__((visibility("default"))) RBuffer *r_buf_new_slice(RBuffer *b, unsigned long long offset, unsigned long long size);
__attribute__((visibility("default"))) RBuffer *r_buf_new_empty(unsigned long long len);
__attribute__((visibility("default"))) RBuffer *r_buf_new_mmap(const char *file, int flags);
__attribute__((visibility("default"))) RBuffer *r_buf_new_sparse(unsigned char Oxff);


__attribute__((visibility("default"))) _Bool r_buf_dump(RBuffer *buf, const char *file);
__attribute__((visibility("default"))) _Bool r_buf_set_bytes(RBuffer *b, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) long long r_buf_append_string(RBuffer *b, const char *str);
__attribute__((visibility("default"))) _Bool r_buf_append_buf(RBuffer *b, RBuffer *a);
__attribute__((visibility("default"))) _Bool r_buf_append_bytes(RBuffer *b, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) _Bool r_buf_append_nbytes(RBuffer *b, unsigned long long length);
__attribute__((visibility("default"))) _Bool r_buf_append_ut8(RBuffer *b, unsigned char n);
__attribute__((visibility("default"))) _Bool r_buf_append_ut16(RBuffer *b, unsigned short n);
__attribute__((visibility("default"))) _Bool r_buf_append_buf_slice(RBuffer *b, RBuffer *a, unsigned long long offset, unsigned long long size);
__attribute__((visibility("default"))) _Bool r_buf_append_ut32(RBuffer *b, unsigned int n);
__attribute__((visibility("default"))) _Bool r_buf_append_ut64(RBuffer *b, unsigned long long n);
__attribute__((visibility("default"))) _Bool r_buf_prepend_bytes(RBuffer *b, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) long long r_buf_insert_bytes(RBuffer *b, unsigned long long addr, const unsigned char *buf, unsigned long long length);
__attribute__((visibility("default"))) char *r_buf_to_string(RBuffer *b);
__attribute__((visibility("default"))) char *r_buf_get_string(RBuffer *b, unsigned long long addr);
__attribute__((visibility("default"))) long long r_buf_read(RBuffer *b, unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) unsigned char *r_buf_read_all(RBuffer *b, int *blen);
__attribute__((visibility("default"))) unsigned char r_buf_read8(RBuffer *b);
__attribute__((visibility("default"))) long long r_buf_fread(RBuffer *b, unsigned char *buf, const char *fmt, int n);
__attribute__((visibility("default"))) long long r_buf_read_at(RBuffer *b, unsigned long long addr, unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) unsigned char r_buf_read8_at(RBuffer *b, unsigned long long addr);
__attribute__((visibility("default"))) unsigned long long r_buf_tell(RBuffer *b);
__attribute__((visibility("default"))) long long r_buf_seek(RBuffer *b, long long addr, int whence);
__attribute__((visibility("default"))) long long r_buf_fread_at(RBuffer *b, unsigned long long addr, unsigned char *buf, const char *fmt, int n);
__attribute__((visibility("default"))) long long r_buf_write(RBuffer *b, const unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) long long r_buf_fwrite(RBuffer *b, const unsigned char *buf, const char *fmt, int n);
__attribute__((visibility("default"))) long long r_buf_write_at(RBuffer *b, unsigned long long addr, const unsigned char *buf, unsigned long long len);
__attribute__((visibility("default"))) long long r_buf_fwrite_at(RBuffer *b, unsigned long long addr, const unsigned char *buf, const char *fmt, int n);



 __attribute__((visibility("default"))) const unsigned char *r_buf_data(RBuffer *b, unsigned long long *size);
__attribute__((visibility("default"))) unsigned long long r_buf_size(RBuffer *b);
__attribute__((visibility("default"))) _Bool r_buf_resize(RBuffer *b, unsigned long long newsize);
__attribute__((visibility("default"))) RBuffer *r_buf_ref(RBuffer *b);
__attribute__((visibility("default"))) void r_buf_free(RBuffer *b);
__attribute__((visibility("default"))) void r_buf_fini(RBuffer *b);
__attribute__((visibility("default"))) RList *r_buf_nonempty_list(RBuffer *b);

static inline unsigned short r_buf_read_be16(RBuffer *b) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be16 (buf): 0xFFFFU;
}

static inline unsigned short r_buf_read_be16_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be16 (buf): 0xFFFFU;
}

static inline unsigned int r_buf_read_be32(RBuffer *b) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be32 (buf): 0xFFFFFFFFU;
}

static inline unsigned int r_buf_read_be32_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be32 (buf): 0xFFFFFFFFU;
}

static inline unsigned long long r_buf_read_be64(RBuffer *b) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned long long r_buf_read_be64_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_be64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned short r_buf_read_le16(RBuffer *b) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le16 (buf): 0xFFFFU;
}

static inline unsigned short r_buf_read_le16_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le16 (buf): 0xFFFFU;
}

static inline unsigned int r_buf_read_le32(RBuffer *b) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le32 (buf): 0xFFFFFFFFU;
}

static inline unsigned int r_buf_read_le32_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le32 (buf): 0xFFFFFFFFU;
}

static inline unsigned long long r_buf_read_le64(RBuffer *b) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read (b, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned long long r_buf_read_le64_at(RBuffer *b, unsigned long long addr) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_le64 (buf): 0xFFFFFFFFFFFFFFFFULL;
}

static inline unsigned short r_buf_read_ble16_at(RBuffer *b, unsigned long long addr, _Bool big_endian) {
 unsigned char buf[sizeof (unsigned short)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_ble16 (buf, big_endian): 0xFFFFU;
}

static inline unsigned int r_buf_read_ble32_at(RBuffer *b, unsigned long long addr, _Bool big_endian) {
 unsigned char buf[sizeof (unsigned int)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_ble32 (buf, big_endian): 0xFFFFFFFFU;
}

static inline unsigned long long r_buf_read_ble64_at(RBuffer *b, unsigned long long addr, _Bool big_endian) {
 unsigned char buf[sizeof (unsigned long long)];
 int r = (int) r_buf_read_at (b, addr, buf, sizeof (buf));
 return r == sizeof (buf)? r_read_ble64 (buf, big_endian): 0xFFFFFFFFFFFFFFFFULL;
}

__attribute__((visibility("default"))) long long r_buf_uleb128(RBuffer *b, unsigned long long *v);
__attribute__((visibility("default"))) long long r_buf_sleb128(RBuffer *b, long long *v);

static inline long long r_buf_uleb128_at(RBuffer *b, unsigned long long addr, unsigned long long *v) {
 r_buf_seek (b, addr, 0);
 return r_buf_uleb128 (b, v);
}
static inline long long r_buf_sleb128_at(RBuffer *b, unsigned long long addr, long long *v) {
 r_buf_seek (b, addr, 0);
 return r_buf_sleb128 (b, v);
}
# 39 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_bitmap.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_bitmap.h" 3 4
typedef struct r_bitmap_t {
 int length;
 unsigned long long *bitmap;
} RBitmap;

__attribute__((visibility("default"))) RBitmap *r_bitmap_new(size_t len);
__attribute__((visibility("default"))) void r_bitmap_set_bytes(RBitmap *b, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_bitmap_free(RBitmap *b);
__attribute__((visibility("default"))) void r_bitmap_set(RBitmap *b, size_t bit);
__attribute__((visibility("default"))) void r_bitmap_unset(RBitmap *b, size_t bit);
__attribute__((visibility("default"))) int r_bitmap_test(RBitmap *b, size_t bit);
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_time.h" 1 3 4
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_time.h" 3 4
__attribute__((visibility("default"))) unsigned long long r_time_now(void);


__attribute__((visibility("default"))) unsigned long long r_time_now_mono(void);

__attribute__((visibility("default"))) char *r_time_stamp_to_str(unsigned int timeStamp);
__attribute__((visibility("default"))) unsigned int r_time_dos_time_stamp_to_posix(unsigned int timeStamp);
__attribute__((visibility("default"))) _Bool r_time_stamp_is_dos_format(const unsigned int certainPosixTimeStamp, const unsigned int possiblePosixOrDosTimeStamp);
__attribute__((visibility("default"))) const char *r_time_to_string(unsigned long long ts);


__attribute__((visibility("default"))) char *r_asctime_r(const struct tm *tm, char *buf);
__attribute__((visibility("default"))) char *r_ctime_r(const time_t *timer, char *buf);
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_debruijn.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_debruijn.h" 3 4
__attribute__((visibility("default"))) char* r_debruijn_pattern(int size, int start, const char* charset);



__attribute__((visibility("default"))) int r_debruijn_offset(unsigned long long value, _Bool is_big_endian);
# 42 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_cache.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_cache.h" 3 4
typedef struct r_cache_t {
 unsigned long long base;
 unsigned char *buf;
 unsigned long long len;
} RCache;

typedef struct r_prof_t {
 struct timeval when;
 double result;
} RProfile;

__attribute__((visibility("default"))) RCache* r_cache_new(void);
__attribute__((visibility("default"))) void r_cache_free(RCache *c);
__attribute__((visibility("default"))) const unsigned char* r_cache_get(RCache *c, unsigned long long addr, int *len);
__attribute__((visibility("default"))) int r_cache_set(RCache *c, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_cache_flush(RCache *c);
__attribute__((visibility("default"))) void r_prof_start(RProfile *p);
__attribute__((visibility("default"))) double r_prof_end(RProfile *p);
# 43 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_ctypes.h" 1 3 4







typedef struct r_type_enum {
 const char *name;
 const char *val;
}RTypeEnum;

enum RTypeKind {
 R_TYPE_BASIC = 0,
 R_TYPE_ENUM = 1,
 R_TYPE_STRUCT = 2,
 R_TYPE_UNION = 3,
 R_TYPE_TYPEDEF = 4
};

__attribute__((visibility("default"))) int r_type_set(Sdb *TDB, unsigned long long at, const char *field, unsigned long long val);
__attribute__((visibility("default"))) void r_type_del(Sdb *TDB, const char *name);
__attribute__((visibility("default"))) int r_type_kind(Sdb *TDB, const char *name);
__attribute__((visibility("default"))) char *r_type_enum_member(Sdb *TDB, const char *name, const char *member, unsigned long long val);
__attribute__((visibility("default"))) char *r_type_enum_getbitfield(Sdb *TDB, const char *name, unsigned long long val);
__attribute__((visibility("default"))) RList* r_type_get_enum (Sdb *TDB, const char *name);
__attribute__((visibility("default"))) unsigned long long r_type_get_bitsize (Sdb *TDB, const char *type);
__attribute__((visibility("default"))) RList* r_type_get_by_offset(Sdb *TDB, unsigned long long offset);
__attribute__((visibility("default"))) char *r_type_get_struct_memb(Sdb *TDB, const char *type, int offset);
__attribute__((visibility("default"))) char *r_type_link_at (Sdb *TDB, unsigned long long addr);
__attribute__((visibility("default"))) int r_type_set_link (Sdb *TDB, const char *val, unsigned long long addr);
__attribute__((visibility("default"))) int r_type_unlink(Sdb *TDB, unsigned long long addr);
__attribute__((visibility("default"))) int r_type_link_offset (Sdb *TDB, const char *val, unsigned long long addr);
__attribute__((visibility("default"))) char *r_type_format(Sdb *TDB, const char *t);


__attribute__((visibility("default"))) int r_type_func_exist(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) const char *r_type_func_cc(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) const char *r_type_func_ret(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) int r_type_func_args_count(Sdb *TDB, const char *func_name);
__attribute__((visibility("default"))) char *r_type_func_args_type(Sdb *TDB, const char *func_name, int i);
__attribute__((visibility("default"))) const char *r_type_func_args_name(Sdb *TDB, const char *func_name, int i);
__attribute__((visibility("default"))) char *r_type_func_guess(Sdb *TDB, char *func_name);
# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_file.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_file.h" 3 4
__attribute__((visibility("default"))) _Bool r_file_is_abspath(const char *file);
__attribute__((visibility("default"))) _Bool r_file_is_c(const char *file);
__attribute__((visibility("default"))) _Bool r_file_is_directory(const char *str);
__attribute__((visibility("default"))) _Bool r_file_is_regular(const char *str);

__attribute__((visibility("default"))) _Bool r_file_truncate(const char *filename, unsigned long long newsize);
__attribute__((visibility("default"))) char *r_file_new(const char *root, ...);
__attribute__((visibility("default"))) unsigned long long r_file_size(const char *str);
__attribute__((visibility("default"))) char *r_file_root(const char *root, const char *path);
__attribute__((visibility("default"))) RMmap *r_file_mmap(const char *file, _Bool rw, unsigned long long base);
__attribute__((visibility("default"))) int r_file_mmap_read(const char *file, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_file_mmap_write(const char *file, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_file_mmap_free(RMmap *m);
__attribute__((visibility("default"))) _Bool r_file_chmod(const char *file, const char *mod, int recursive);
__attribute__((visibility("default"))) char *r_file_temp(const char *prefix);
__attribute__((visibility("default"))) char *r_file_path(const char *bin);
__attribute__((visibility("default"))) char *r_file_binsh(void);
__attribute__((visibility("default"))) const char *r_file_basename(const char *path);
__attribute__((visibility("default"))) char *r_file_dirname(const char *path);
__attribute__((visibility("default"))) char *r_file_abspath_rel(const char *cwd, const char *file);
__attribute__((visibility("default"))) char *r_file_abspath(const char *file);
__attribute__((visibility("default"))) unsigned char *r_inflate(const unsigned char *src, int srcLen, int *srcConsumed, int *dstLen);
__attribute__((visibility("default"))) unsigned char *r_inflate_raw(const unsigned char *src, int srcLen, int *srcConsumed, int *dstLen);
__attribute__((visibility("default"))) unsigned char *r_file_gzslurp(const char *str, int *outlen, int origonfail);
__attribute__((visibility("default"))) char *r_stdin_slurp(int *sz);
__attribute__((visibility("default"))) char *r_file_slurp(const char *str, size_t *usz);
__attribute__((visibility("default"))) char *r_file_slurp_range(const char *str, unsigned long long off, int sz, int *osz);
__attribute__((visibility("default"))) char *r_file_slurp_random_line(const char *file);
__attribute__((visibility("default"))) char *r_file_slurp_random_line_count(const char *file, int *linecount);
__attribute__((visibility("default"))) unsigned char *r_file_slurp_hexpairs(const char *str, int *usz);
__attribute__((visibility("default"))) _Bool r_file_dump(const char *file, const unsigned char *buf, int len, _Bool append);
__attribute__((visibility("default"))) _Bool r_file_touch(const char *file);
__attribute__((visibility("default"))) _Bool r_file_hexdump(const char *file, const unsigned char *buf, int len, int append);
__attribute__((visibility("default"))) _Bool r_file_rm(const char *file);
__attribute__((visibility("default"))) _Bool r_file_exists(const char *str);
__attribute__((visibility("default"))) _Bool r_file_fexists(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) char *r_file_slurp_line(const char *file, int line, int context);
__attribute__((visibility("default"))) char *r_file_slurp_lines(const char *file, int line, int count);
__attribute__((visibility("default"))) char *r_file_slurp_lines_from_bottom(const char *file, int line);
__attribute__((visibility("default"))) int r_file_mkstemp(const char *prefix, char **oname);
__attribute__((visibility("default"))) char *r_file_tmpdir(void);
__attribute__((visibility("default"))) char *r_file_readlink(const char *path);
__attribute__((visibility("default"))) _Bool r_file_copy(const char *src, const char *dst);
__attribute__((visibility("default"))) _Bool r_file_move(const char *src, const char *dst);
__attribute__((visibility("default"))) RList* r_file_glob(const char *globbed_path, int maxdepth);
__attribute__((visibility("default"))) RMmap *r_file_mmap_arch(RMmap *map, const char *filename, int fd);
__attribute__((visibility("default"))) RList *r_file_lsrf(const char *dir);
__attribute__((visibility("default"))) _Bool r_file_rm_rf(const char *dir);
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_hex.h" 1 3 4







__attribute__((visibility("default"))) int r_hex_pair2bin(const char *arg);
__attribute__((visibility("default"))) int r_hex_str2bin_until_new(const char *in, unsigned char **out);
__attribute__((visibility("default"))) int r_hex_str2binmask(const char *in, unsigned char *out, unsigned char *mask);
__attribute__((visibility("default"))) int r_hex_str2bin(const char *in, unsigned char *out);
__attribute__((visibility("default"))) int r_hex_bin2str(const unsigned char *in, int len, char *out);
__attribute__((visibility("default"))) char *r_hex_bin2strdup(const unsigned char *in, int len);
__attribute__((visibility("default"))) _Bool r_hex_to_byte(unsigned char *val, unsigned char c);
__attribute__((visibility("default"))) int r_hex_str_is_valid(const char *s);
__attribute__((visibility("default"))) long long r_hex_bin_truncate(unsigned long long in, int n);
__attribute__((visibility("default"))) char *r_hex_from_c(const char *code);
__attribute__((visibility("default"))) char *r_hex_from_py(const char *code);
__attribute__((visibility("default"))) char *r_hex_from_code(const char *code);
__attribute__((visibility("default"))) char *r_hex_no_code(const char *code);
__attribute__((visibility("default"))) char *r_hex_from_py_str(char *out, const char *code);
__attribute__((visibility("default"))) char *r_hex_from_py_array(char *out, const char *code);
__attribute__((visibility("default"))) char *r_hex_from_c_str(char *out, const char **code);
__attribute__((visibility("default"))) char *r_hex_from_c_array(char *out, const char *code);
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 1 3 4
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_mem.h" 1 3 4
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_name.h" 1 3 4







__attribute__((visibility("default"))) _Bool r_name_validate_print(const char ch);

__attribute__((visibility("default"))) _Bool r_name_validate_first(const char ch);
__attribute__((visibility("default"))) _Bool r_name_check(const char *s);
__attribute__((visibility("default"))) const char *r_name_filter_ro(const char *a);
__attribute__((visibility("default"))) _Bool r_name_filter_flag(char *s);
__attribute__((visibility("default"))) _Bool r_name_filter_print(char *s);
__attribute__((visibility("default"))) _Bool r_name_filter(char *name, int maxlen);
__attribute__((visibility("default"))) char *r_name_filter2(const char *name);

static inline _Bool r_name_validate_char(const char ch) {
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ((ch) >= '0' && (ch) <= '9')) {
  return 1;
 }
 return (ch == '.' || ch == ':' || ch == '_');
}
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_num.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_num.h" 3 4
typedef struct {
 double d;
 unsigned long long n;
} RNumCalcValue;

typedef union {
 unsigned short u16;
 unsigned int u32;
 unsigned long long u64;
 short s16;
 int s32;
 long long s64;
 float f32;
 double f64;

} RNumFloat;

typedef enum {
 RNCNAME, RNCNUMBER, RNCEND, RNCINC, RNCDEC,
 RNCLT, RNCGT,
 RNCPLUS='+', RNCMINUS='-', RNCMUL='*', RNCDIV='/', RNCMOD='%',
 RNCNEG='~', RNCAND='&', RNCOR='|', RNCXOR='^',
 RNCPRINT=';', RNCASSIGN='=', RNCLEFTP='(', RNCRIGHTP=')',
 RNCSHL='<', RNCSHR = '>', RNCROL = '#', RNCROR = '$',
} RNumCalcToken;

typedef struct r_num_calc_t {
 RNumCalcToken curr_tok;
 RNumCalcValue number_value;
 char string_value[1024];
 int errors;
 char oc;
 const char *calc_err;
 int calc_i;
 const char *calc_buf;
 int calc_len;
 _Bool under_calc;
} RNumCalc;

typedef struct r_num_t {
 unsigned long long (*callback)(struct r_num_t *userptr, const char *str, int *ok);
 const char *(*cb_from_value)(struct r_num_t *userptr, unsigned long long value, int *ok);

 unsigned long long value;
 double fvalue;
 void *userptr;
 int dbz;
 RNumCalc nc;
} RNum;

typedef unsigned long long (*RNumCallback)(struct r_num_t *self, const char *str, int *ok);
typedef const char *(*RNumCallback2)(struct r_num_t *self, unsigned long long, int *ok);

__attribute__((visibility("default"))) RNum *r_num_new(RNumCallback cb, RNumCallback2 cb2, void *ptr);
__attribute__((visibility("default"))) void r_num_free(RNum *num);
__attribute__((visibility("default"))) char *r_num_units(char *buf, size_t len, unsigned long long number);
__attribute__((visibility("default"))) int r_num_conditional(RNum *num, const char *str);
__attribute__((visibility("default"))) unsigned long long r_num_calc(RNum *num, const char *str, const char **err);
__attribute__((visibility("default"))) const char *r_num_calc_index(RNum *num, const char *p);
__attribute__((visibility("default"))) unsigned long long r_num_chs(int cylinder, int head, int sector, int sectorsize);
__attribute__((visibility("default"))) int r_num_is_valid_input(RNum *num, const char *input_value);
__attribute__((visibility("default"))) unsigned long long r_num_get_input_value(RNum *num, const char *input_value);
__attribute__((visibility("default"))) const char *r_num_get_name(RNum *num, unsigned long long n);
__attribute__((visibility("default"))) char* r_num_as_string(RNum *___, unsigned long long n, _Bool printable_only);
__attribute__((visibility("default"))) unsigned long long r_num_tail(RNum *num, unsigned long long addr, const char *hex);
__attribute__((visibility("default"))) unsigned long long r_num_tail_base(RNum *num, unsigned long long addr, unsigned long long off);
__attribute__((visibility("default"))) _Bool r_num_segaddr(unsigned long long addr, unsigned long long sb, int sg, unsigned int *a, unsigned int *b);
__attribute__((visibility("default"))) void r_num_minmax_swap(unsigned long long *a, unsigned long long *b);
__attribute__((visibility("default"))) void r_num_minmax_swap_i(int *a, int *b);
__attribute__((visibility("default"))) unsigned long long r_num_math(RNum *num, const char *str);
__attribute__((visibility("default"))) unsigned long long r_num_get(RNum *num, const char *str);
__attribute__((visibility("default"))) int r_num_to_bits(char *out, unsigned long long num);
__attribute__((visibility("default"))) int r_num_to_ternary(char *out, unsigned long long num);
__attribute__((visibility("default"))) int r_num_rand(int max);
__attribute__((visibility("default"))) void r_num_irand(void);
__attribute__((visibility("default"))) unsigned long long r_get_input_num_value(RNum *num, const char *input_value);
__attribute__((visibility("default"))) _Bool r_is_valid_input_num_value(RNum *num, const char *input_value);
__attribute__((visibility("default"))) int r_num_between(RNum *num, const char *input_value);
__attribute__((visibility("default"))) _Bool r_num_is_op(const char c);
__attribute__((visibility("default"))) int r_num_str_len(const char *str);
__attribute__((visibility("default"))) int r_num_str_split(char *str);
__attribute__((visibility("default"))) RList *r_num_str_split_list(char *str);
__attribute__((visibility("default"))) void *r_num_dup(unsigned long long n);
__attribute__((visibility("default"))) double r_num_cos(double a);
__attribute__((visibility("default"))) double r_num_sin(double a);
__attribute__((visibility("default"))) size_t r_num_bit_count(unsigned int val);
__attribute__((visibility("default"))) double r_num_get_float(RNum *num, const char *str);

static inline long long r_num_abs(long long num) {
 return num < 0 ? -num : num;
}
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_table.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_table.h" 3 4
typedef struct {
 const char *name;
 RListComparator cmp;
} RTableColumnType;

typedef struct {
 char *name;
 RTableColumnType *type;
 int align;
 int width;
 int maxWidth;
 _Bool forceUppercase;
 int total;
} RTableColumn;

typedef struct {
 char *name;
 RInterval pitv;
 RInterval vitv;
 int perm;
 char *extra;
} RListInfo;

enum {
 R_TABLE_ALIGN_LEFT,
 R_TABLE_ALIGN_RIGHT,
 R_TABLE_ALIGN_CENTER
};

typedef struct {

 RList *items;
} RTableRow;

typedef struct {
 char *name;
 RList *rows;
 RList *cols;
 int totalCols;
 _Bool showHeader;
 _Bool showFancy;
 _Bool showSQL;
 _Bool showJSON;
 _Bool showCSV;
 _Bool showR2;
 _Bool showSum;
 _Bool adjustedCols;
 void *cons;
} RTable;

typedef void (*RTableSelector)(RTableRow *acc, RTableRow *new_row, int nth);

__attribute__((visibility("default"))) void r_table_row_free(void *_row);
__attribute__((visibility("default"))) void r_table_column_free(void *_col);
__attribute__((visibility("default"))) RTableColumn *r_table_column_clone(RTableColumn *col);
__attribute__((visibility("default"))) RTableColumnType *r_table_type(const char *name);
__attribute__((visibility("default"))) RTable *r_table_new(const char *name);
__attribute__((visibility("default"))) RTable *r_table_clone(const RTable *t);
__attribute__((visibility("default"))) void r_table_free(RTable *t);
__attribute__((visibility("default"))) int r_table_column_nth(RTable *t, const char *name);
__attribute__((visibility("default"))) void r_table_add_column(RTable *t, RTableColumnType *type, const char *name, int maxWidth);
__attribute__((visibility("default"))) void r_table_set_columnsf(RTable *t, const char *fmt, ...);
__attribute__((visibility("default"))) RTableRow *r_table_row_new(RList *items);
__attribute__((visibility("default"))) void r_table_add_row(RTable *t, const char *name, ...);
__attribute__((visibility("default"))) void r_table_add_rowf(RTable *t, const char *fmt, ...);
__attribute__((visibility("default"))) void r_table_add_row_list(RTable *t, RList *items);
__attribute__((visibility("default"))) char *r_table_tofancystring(RTable *t);
__attribute__((visibility("default"))) char *r_table_tosimplestring(RTable *t);
__attribute__((visibility("default"))) char *r_table_tostring(RTable *t);
__attribute__((visibility("default"))) char *r_table_tosql(RTable *t);
__attribute__((visibility("default"))) char *r_table_tocsv(RTable *t);
__attribute__((visibility("default"))) char *r_table_tor2cmds(RTable *t);
__attribute__((visibility("default"))) char *r_table_tojson(RTable *t);
__attribute__((visibility("default"))) const char *r_table_help(void);
__attribute__((visibility("default"))) void r_table_filter(RTable *t, int nth, int op, const char *un);
__attribute__((visibility("default"))) void r_table_sort(RTable *t, int nth, _Bool inc);
__attribute__((visibility("default"))) void r_table_uniq(RTable *t);
__attribute__((visibility("default"))) void r_table_group(RTable *t, int nth, RTableSelector fcn);
__attribute__((visibility("default"))) _Bool r_table_query(RTable *t, const char *q);
__attribute__((visibility("default"))) void r_table_hide_header(RTable *t);
__attribute__((visibility("default"))) _Bool r_table_align(RTable *t, int nth, int align);
__attribute__((visibility("default"))) void r_table_visual_list(RTable *table, RList* list, unsigned long long seek, unsigned long long len, int width, _Bool va);
__attribute__((visibility("default"))) RTable *r_table_push(RTable *t);
__attribute__((visibility("default"))) RTable *r_table_pop(RTable *t);
__attribute__((visibility("default"))) void r_table_fromjson(RTable *t, const char *csv);
__attribute__((visibility("default"))) void r_table_fromcsv(RTable *t, const char *csv);
__attribute__((visibility("default"))) char *r_table_tohtml(RTable *t);
__attribute__((visibility("default"))) void r_table_transpose(RTable *t);
__attribute__((visibility("default"))) void r_table_format(RTable *t, int nth, RTableColumnType *type);
__attribute__((visibility("default"))) unsigned long long r_table_reduce(RTable *t, int nth);
__attribute__((visibility("default"))) void r_table_columns(RTable *t, RList *cols);
# 51 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_graph.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_graph.h" 3 4
typedef struct r_graph_node_t {
 unsigned int idx;
 void *data;
 RList *out_nodes;
 RList *in_nodes;
 RList *all_neighbours;
 RListFree free;
} RGraphNode;

typedef struct r_graph_edge_t {
 RGraphNode *from;
 RGraphNode *to;
 int nth;
} RGraphEdge;

typedef struct r_graph_t {
 unsigned int n_nodes;
 unsigned int n_edges;
 int last_index;
 RList *nodes;
} RGraph;

typedef struct r_graph_visitor_t {
 void (*discover_node)(RGraphNode *n, struct r_graph_visitor_t *vis);
 void (*finish_node)(RGraphNode *n, struct r_graph_visitor_t *vis);
 void (*tree_edge)(const RGraphEdge *e, struct r_graph_visitor_t *vis);
 void (*back_edge)(const RGraphEdge *e, struct r_graph_visitor_t *vis);
 void (*fcross_edge)(const RGraphEdge *e, struct r_graph_visitor_t *vis);
 void *data;
} RGraphVisitor;
typedef void (*RGraphNodeCallback)(RGraphNode *n, RGraphVisitor *vis);
typedef void (*RGraphEdgeCallback)(const RGraphEdge *e, RGraphVisitor *vis);


__attribute__((visibility("default"))) RGraph *r_graph_new(void);

__attribute__((visibility("default"))) void r_graph_free(RGraph* g);

__attribute__((visibility("default"))) RGraphNode *r_graph_get_node(const RGraph *g, unsigned int idx);
__attribute__((visibility("default"))) RListIter *r_graph_node_iter(const RGraph *g, unsigned int idx);
__attribute__((visibility("default"))) void r_graph_reset(RGraph *g);
__attribute__((visibility("default"))) RGraphNode *r_graph_add_node(RGraph *g, void *data);
__attribute__((visibility("default"))) RGraphNode *r_graph_add_nodef(RGraph *g, void *data, RListFree user_free);

__attribute__((visibility("default"))) void r_graph_del_node(RGraph *g, RGraphNode *n);
__attribute__((visibility("default"))) void r_graph_add_edge(RGraph *g, RGraphNode *from, RGraphNode *to);
__attribute__((visibility("default"))) void r_graph_add_edge_at(RGraph *g, RGraphNode *from, RGraphNode *to, int nth);
__attribute__((visibility("default"))) RGraphNode *r_graph_node_split_forward(RGraph *g, RGraphNode *split_me, void *data);
__attribute__((visibility("default"))) void r_graph_del_edge(RGraph *g, RGraphNode *from, RGraphNode *to);
__attribute__((visibility("default"))) const RList *r_graph_get_neighbours(const RGraph *g, const RGraphNode *n);
__attribute__((visibility("default"))) RGraphNode *r_graph_nth_neighbour(const RGraph *g, const RGraphNode *n, int nth);
__attribute__((visibility("default"))) const RList *r_graph_innodes(const RGraph *g, const RGraphNode *n);
__attribute__((visibility("default"))) const RList *r_graph_all_neighbours(const RGraph *g, const RGraphNode *n);
__attribute__((visibility("default"))) const RList *r_graph_get_nodes(const RGraph *g);
__attribute__((visibility("default"))) _Bool r_graph_adjacent(const RGraph *g, const RGraphNode *from, const RGraphNode *to);
__attribute__((visibility("default"))) void r_graph_dfs_node(RGraph *g, RGraphNode *n, RGraphVisitor *vis);
__attribute__((visibility("default"))) void r_graph_dfs_node_reverse(RGraph *g, RGraphNode *n, RGraphVisitor *vis);
__attribute__((visibility("default"))) void r_graph_dfs(RGraph *g, RGraphVisitor *vis);
# 52 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_panels.h" 1 3 4







typedef enum {
 PANEL_LAYOUT_VERTICAL,
 PANEL_LAYOUT_HORIZONTAL,
 PANEL_LAYOUT_NONE
} RPanelLayout;

typedef enum {
 PANEL_TYPE_DEFAULT = 0,
 PANEL_TYPE_MENU = 1
} RPanelType;

typedef enum {
 PANEL_EDGE_NONE = 0,
 PANEL_EDGE_BOTTOM,
 PANEL_EDGE_RIGHT
} RPanelEdge;

typedef void (*RPanelMenuUpdateCallback)(void *user, const char *parent);
typedef void (*RPanelDirectionCallback)(void *user, int direction);
typedef void (*RPanelRotateCallback)(void *user, _Bool rev);
typedef void (*RPanelPrintCallback)(void *user, void *p);

typedef struct r_panel_pos_t {
 int x;
 int y;
 int w;
 int h;
} RPanelPos;

typedef struct r_panel_model_t {
 RPanelDirectionCallback directionCb;
 RPanelRotateCallback rotateCb;
 RPanelPrintCallback print_cb;
 RPanelType type;
 char *cmd;
 char *title;
 unsigned long long baseAddr;
 unsigned long long addr;
 _Bool cache;
 char *cmdStrCache;
 char *readOnly;
 char *funcName;
 char **filter;
 int n_filter;
 int rotate;
} RPanelModel;

typedef struct r_panel_view_t {
 RPanelPos pos;
 RPanelPos prevPos;
 int sx;
 int sy;
 int curpos;
 _Bool refresh;
 int edge;
} RPanelView;

typedef struct r_panel_t {
    RPanelModel *model;
    RPanelView *view;
} RPanel;

typedef void (*RPanelAlmightyCallback)(void *user, RPanel *panel, const RPanelLayout dir, const char *title);
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pool.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pool.h" 3 4
typedef struct r_mem_pool_factory_t {
 int limit;
 RMemoryPool **pools;
} RPoolFactory;

__attribute__((visibility("default"))) RPoolFactory *r_poolfactory_instance(void);
__attribute__((visibility("default"))) void r_poolfactory_init (int limit);
__attribute__((visibility("default"))) RPoolFactory* r_poolfactory_new(int limit);
__attribute__((visibility("default"))) void *r_poolfactory_alloc(RPoolFactory *pf, int nodesize);
__attribute__((visibility("default"))) void r_poolfactory_stats(RPoolFactory *pf);
__attribute__((visibility("default"))) void r_poolfactory_free(RPoolFactory *pf);
# 54 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_diff.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/pj.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strbuf.h" 1 3 4







typedef struct {
 char buf[32];
 size_t len;
 char *ptr;
 size_t ptrlen;
 _Bool weakref;
} RStrBuf;


__attribute__((visibility("default"))) RStrBuf *r_strbuf_new(const char *s);
__attribute__((visibility("default"))) const char *r_strbuf_set(RStrBuf *sb, const char *s);
__attribute__((visibility("default"))) _Bool r_strbuf_slice(RStrBuf *sb, int from, int len);
__attribute__((visibility("default"))) _Bool r_strbuf_setbin(RStrBuf *sb, const unsigned char *s, size_t len);
__attribute__((visibility("default"))) unsigned char* r_strbuf_getbin(RStrBuf *sb, int *len);
__attribute__((visibility("default"))) const char *r_strbuf_setf(RStrBuf *sb, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) const char *r_strbuf_vsetf(RStrBuf *sb, const char *fmt, va_list ap);
__attribute__((visibility("default"))) _Bool r_strbuf_append(RStrBuf *sb, const char *s);
__attribute__((visibility("default"))) _Bool r_strbuf_append_n(RStrBuf *sb, const char *s, size_t l);
__attribute__((visibility("default"))) _Bool r_strbuf_prepend(RStrBuf *sb, const char *s);
__attribute__((visibility("default"))) _Bool r_strbuf_appendf(RStrBuf *sb, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) _Bool r_strbuf_vappendf(RStrBuf *sb, const char *fmt, va_list ap);
__attribute__((visibility("default"))) char *r_strbuf_get(RStrBuf *sb);
__attribute__((visibility("default"))) char *r_strbuf_drain(RStrBuf *sb);
__attribute__((visibility("default"))) char *r_strbuf_drain_nofree(RStrBuf *sb);
__attribute__((visibility("default"))) int r_strbuf_length(RStrBuf *sb);
__attribute__((visibility("default"))) int r_strbuf_size(RStrBuf *sb);
__attribute__((visibility("default"))) void r_strbuf_free(RStrBuf *sb);
__attribute__((visibility("default"))) void r_strbuf_fini(RStrBuf *sb);
__attribute__((visibility("default"))) void r_strbuf_init(RStrBuf *sb);
__attribute__((visibility("default"))) const char *r_strbuf_initf(RStrBuf *sb, const char *fmt, ...);
__attribute__((visibility("default"))) _Bool r_strbuf_copy(RStrBuf *dst, RStrBuf *src);
__attribute__((visibility("default"))) _Bool r_strbuf_equals(RStrBuf *sa, RStrBuf *sb);
__attribute__((visibility("default"))) _Bool r_strbuf_reserve(RStrBuf *sb, size_t len);
__attribute__((visibility("default"))) _Bool r_strbuf_is_empty(RStrBuf *sb);
__attribute__((visibility("default"))) _Bool r_strbuf_setptr(RStrBuf *sb, char *p, int l);
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/pj.h" 2 3 4






typedef enum PJEncodingStr {
 PJ_ENCODING_STR_DEFAULT = 0,
 PJ_ENCODING_STR_BASE64,
 PJ_ENCODING_STR_HEX,
 PJ_ENCODING_STR_ARRAY,
 PJ_ENCODING_STR_STRIP
} PJEncodingStr;

typedef enum PJEncodingNum {
 PJ_ENCODING_NUM_DEFAULT = 0,
 PJ_ENCODING_NUM_STR,
 PJ_ENCODING_NUM_HEX
} PJEncodingNum;

typedef struct pj_t {
 RStrBuf sb;
 _Bool is_first;
 _Bool is_key;
 char braces[128];
 int level;
 PJEncodingStr str_encoding;
 PJEncodingNum num_encoding;
} PJ;


__attribute__((visibility("default"))) PJ *pj_new(void);
__attribute__((visibility("default"))) PJ *pj_new_with_encoding(PJEncodingStr str_encoding, PJEncodingNum num_encoding);
__attribute__((visibility("default"))) void pj_free(PJ *j);
__attribute__((visibility("default"))) void pj_reset(PJ *j);
__attribute__((visibility("default"))) char *pj_drain(PJ *j);

__attribute__((visibility("default"))) const char *pj_string(PJ *pj);





__attribute__((visibility("default"))) PJ *pj_end(PJ *j);
__attribute__((visibility("default"))) void pj_raw(PJ *j, const char *k);



__attribute__((visibility("default"))) PJ *pj_o(PJ *j);

__attribute__((visibility("default"))) PJ *pj_a(PJ *j);



__attribute__((visibility("default"))) PJ *pj_k(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_knull(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_kn(PJ *j, const char *k, unsigned long long n);

__attribute__((visibility("default"))) PJ *pj_kN(PJ *j, const char *k, long long n);

__attribute__((visibility("default"))) PJ *pj_ks(PJ *j, const char *k, const char *v);


__attribute__((visibility("default"))) PJ *pj_ka(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_ko(PJ *j, const char *k);


__attribute__((visibility("default"))) PJ *pj_ki(PJ *j, const char *k, int d);
__attribute__((visibility("default"))) PJ *pj_kd(PJ *j, const char *k, double d);
__attribute__((visibility("default"))) PJ *pj_kf(PJ *j, const char *k, float d);
__attribute__((visibility("default"))) PJ *pj_kb(PJ *j, const char *k, _Bool v);


__attribute__((visibility("default"))) PJ *pj_null(PJ *j);


__attribute__((visibility("default"))) PJ *pj_r(PJ *j, const unsigned char *v, size_t v_len);


__attribute__((visibility("default"))) PJ *pj_kr(PJ *j, const char *k, const unsigned char *v, size_t v_len);


__attribute__((visibility("default"))) PJ *pj_s(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_j(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_se(PJ *j, const char *k);

__attribute__((visibility("default"))) PJ *pj_ne(PJ *j, unsigned long long n);


__attribute__((visibility("default"))) PJ *pj_n(PJ *j, unsigned long long n);
__attribute__((visibility("default"))) PJ *pj_N(PJ *j, long long n);
__attribute__((visibility("default"))) PJ *pj_i(PJ *j, int d);
__attribute__((visibility("default"))) PJ *pj_d(PJ *j, double d);
__attribute__((visibility("default"))) PJ *pj_f(PJ *j, float d);
__attribute__((visibility("default"))) PJ *pj_b(PJ *j, _Bool v);
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_graph.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_hex.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_log.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_num.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_panels.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sandbox.h" 1 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sandbox.h" 3 4
__attribute__((visibility("default"))) DIR* r_sandbox_opendir(const char *path);

__attribute__((visibility("default"))) int r_sandbox_truncate(int fd, unsigned long long length);
__attribute__((visibility("default"))) int r_sandbox_lseek(int fd, unsigned long long addr, int mode);
__attribute__((visibility("default"))) int r_sandbox_close(int fd);
__attribute__((visibility("default"))) int r_sandbox_read(int fd, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_sandbox_write(int fd, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_sandbox_enable(_Bool e);
__attribute__((visibility("default"))) _Bool r_sandbox_disable(_Bool e);
__attribute__((visibility("default"))) int r_sandbox_system(const char *x, int fork);
__attribute__((visibility("default"))) _Bool r_sandbox_creat(const char *path, int mode);
__attribute__((visibility("default"))) int r_sandbox_open(const char *path, int mode, int perm);
__attribute__((visibility("default"))) FILE *r_sandbox_fopen(const char *path, const char *mode);
__attribute__((visibility("default"))) int r_sandbox_chdir(const char *path);
__attribute__((visibility("default"))) _Bool r_sandbox_check_path(const char *path);
__attribute__((visibility("default"))) int r_sandbox_kill(int pid, int sig);
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_signal.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_stack.h" 1 3 4







typedef void (*RStackFree)(void *ptr);

typedef struct r_stack_t {
 void **elems;
 unsigned int n_elems;
 int top;
 RStackFree free;
} RStack;

__attribute__((visibility("default"))) RStack *r_stack_new(unsigned int n);
__attribute__((visibility("default"))) void r_stack_free(RStack *s);
__attribute__((visibility("default"))) _Bool r_stack_is_empty(RStack *s);
__attribute__((visibility("default"))) RStack *r_stack_newf(unsigned int n, RStackFree f);
__attribute__((visibility("default"))) _Bool r_stack_push(RStack *s, void *el);
__attribute__((visibility("default"))) void *r_stack_pop(RStack *s);
__attribute__((visibility("default"))) size_t r_stack_size(RStack *s);
__attribute__((visibility("default"))) void *r_stack_peek(RStack *s);
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 1 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 2 3 4







extern __inline __attribute__((__gnu_inline__)) int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

extern __inline __attribute__((__gnu_inline__)) int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4

wctype_t
 wctype(const char *);

# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4




wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * restrict, int, FILE * restrict);
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * restrict, FILE * restrict);
int fwide(FILE *, int);
int fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * restrict, size_t, mbstate_t * restrict);
size_t mbrtowc(wchar_t * restrict, const char * restrict, size_t,
     mbstate_t * restrict);
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * restrict, const char ** restrict, size_t,
     mbstate_t * restrict);
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * restrict, size_t, const wchar_t * restrict, ...);
int swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswprintf(wchar_t * restrict, size_t, const wchar_t * restrict,
     __darwin_va_list);
int vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t *wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * restrict, const wchar_t * restrict);
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * restrict, size_t, const wchar_t * restrict,
     const struct tm * restrict) __asm("_" "wcsftime" );
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * restrict, const wchar_t * restrict, size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * restrict , const wchar_t * restrict, size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * restrict, const wchar_t ** restrict, size_t,
     mbstate_t * restrict);
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t wcsxfrm(wchar_t * restrict, const wchar_t * restrict, size_t);
int wctob(wint_t);
double wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t *wcstok(wchar_t * restrict, const wchar_t * restrict,
     wchar_t ** restrict);
long wcstol(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long
  wcstoul(const wchar_t * restrict, wchar_t ** restrict, int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * restrict, const wchar_t * restrict, size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * restrict, ...);
int wscanf(const wchar_t * restrict, ...);
int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);

# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4

int vfwscanf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswscanf(const wchar_t * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vwscanf(const wchar_t * restrict, __darwin_va_list);
float wcstof(const wchar_t * restrict, wchar_t ** restrict);
long double
 wcstold(const wchar_t * restrict, wchar_t ** restrict);

long long
 wcstoll(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long long
 wcstoull(const wchar_t * restrict, wchar_t ** restrict, int);


# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4

size_t mbsnrtowcs(wchar_t * restrict, const char ** restrict, size_t,
            size_t, mbstate_t * restrict);
wchar_t *wcpcpy(wchar_t * restrict, const wchar_t * restrict) ;
wchar_t *wcpncpy(wchar_t * restrict, const wchar_t * restrict, size_t) ;
wchar_t *wcsdup(const wchar_t *) ;
int wcscasecmp(const wchar_t *, const wchar_t *) ;
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) ;
size_t wcsnlen(const wchar_t *, size_t) ;
size_t wcsnrtombs(char * restrict, const wchar_t ** restrict, size_t,
            size_t, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t ** __bufp, size_t * __sizep) ;









wchar_t *fgetwln(FILE * restrict, size_t *) ;
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);

# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_util.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 2 3 4






typedef enum {
 R_STRING_ENC_LATIN1 = 'a',
 R_STRING_ENC_UTF8 = '8',
 R_STRING_ENC_UTF16LE = 'u',
 R_STRING_ENC_UTF32LE = 'U',
 R_STRING_ENC_UTF16BE = 'b',
 R_STRING_ENC_UTF32BE = 'B',
 R_STRING_ENC_GUESS = 'g',
} RStrEnc;

typedef int (*RStrRangeCallback) (void *, int);

typedef struct r_charset_rune_t {
 unsigned char *ch;
 unsigned char *hx;
 struct r_charset_rune_t *left;
 struct r_charset_rune_t *right;
} RCharsetRune;

typedef struct r_charset_t {
 _Bool loaded;
 Sdb *db;
 Sdb *db_char_to_hex;
 RCharsetRune *custom_charset;
 size_t encode_maxkeylen;
 size_t decode_maxkeylen;
} RCharset;





__attribute__((visibility("default"))) RCharset *r_charset_new(void);
__attribute__((visibility("default"))) void r_charset_free(RCharset *charset);
__attribute__((visibility("default"))) RCharsetRune *r_charset_rune_new(const unsigned char *ch, const unsigned char *hx);
__attribute__((visibility("default"))) void r_charset_rune_free(RCharsetRune *rcr);
__attribute__((visibility("default"))) size_t r_charset_encode_str(RCharset *rc, unsigned char *out, size_t out_len, const unsigned char *in, size_t in_len);
__attribute__((visibility("default"))) size_t r_charset_decode_str(RCharset *rc, unsigned char *out, size_t out_len, const unsigned char *in, size_t in_len);
__attribute__((visibility("default"))) _Bool r_charset_open(RCharset *c, const char *cs);
__attribute__((visibility("default"))) _Bool r_charset_use(RCharset *c, const char *cf);
__attribute__((visibility("default"))) RList *r_charset_list(RCharset *c);
__attribute__((visibility("default"))) void r_charset_close(RCharset *c);
__attribute__((visibility("default"))) RCharsetRune * add_rune(RCharsetRune *rcsr, const unsigned char *ch, const unsigned char *hx);
__attribute__((visibility("default"))) RCharsetRune *search_from_hex(RCharsetRune *rcsr, const unsigned char *hx);
__attribute__((visibility("default"))) RCharsetRune *search_from_char(RCharsetRune *rcsr, const unsigned char *ch);


__attribute__((visibility("default"))) char *r_str_repeat(const char *ch, int sz);
__attribute__((visibility("default"))) const char *r_str_pad(const char ch, int len);
__attribute__((visibility("default"))) const char *r_str_rstr(const char *base, const char *p);
__attribute__((visibility("default"))) const char *r_strstr_ansi (const char *a, const char *b);
__attribute__((visibility("default"))) const char *r_str_rchr(const char *base, const char *p, int ch);
__attribute__((visibility("default"))) const char *r_str_closer_chr(const char *b, const char *s);
__attribute__((visibility("default"))) int r_str_bounds(const char *str, int *h);
__attribute__((visibility("default"))) char *r_str_crop(const char *str, unsigned int x, unsigned int y, unsigned int x2, unsigned int y2);
__attribute__((visibility("default"))) char *r_str_scale(const char *r, int w, int h);
__attribute__((visibility("default"))) _Bool r_str_range_in(const char *r, unsigned long long addr);
__attribute__((visibility("default"))) int r_str_size(const char *s, int *rows);
__attribute__((visibility("default"))) size_t r_str_len_utf8(const char *s);
__attribute__((visibility("default"))) size_t r_str_len_utf8_ansi(const char *str);
__attribute__((visibility("default"))) size_t r_str_len_utf8char(const char *s, int left);
__attribute__((visibility("default"))) size_t r_str_utf8_charsize(const char *str);
__attribute__((visibility("default"))) size_t r_str_utf8_charsize_prev(const char *str, int prev_len);
__attribute__((visibility("default"))) size_t r_str_utf8_charsize_last(const char *str);
__attribute__((visibility("default"))) void r_str_filter_zeroline(char *str, int len);
__attribute__((visibility("default"))) size_t r_str_utf8_codepoint(const char *s, size_t left);
__attribute__((visibility("default"))) _Bool r_str_char_fullwidth(const char *s, size_t left);
__attribute__((visibility("default"))) int r_str_write(int fd, const char *b);
__attribute__((visibility("default"))) size_t r_str_ncpy(char *dst, const char *src, size_t n);
__attribute__((visibility("default"))) void r_str_sanitize(char *c);
__attribute__((visibility("default"))) char *r_str_sanitize_sdb_key(const char *s);
__attribute__((visibility("default"))) const char *r_str_casestr(const char *a, const char *b);
__attribute__((visibility("default"))) const char *r_str_firstbut(const char *s, char ch, const char *but);
__attribute__((visibility("default"))) const char *r_str_firstbut_escape(const char *s, char ch, const char *but);
__attribute__((visibility("default"))) const char *r_str_lastbut(const char *s, char ch, const char *but);
__attribute__((visibility("default"))) int r_str_split(char *str, char ch);
__attribute__((visibility("default"))) RList *r_str_split_list(char *str, const char *c, int n);
__attribute__((visibility("default"))) RList *r_str_split_duplist(const char *str, const char *c, _Bool trim);
__attribute__((visibility("default"))) size_t *r_str_split_lines(char *str, size_t *count);
__attribute__((visibility("default"))) char* r_str_replace(char *str, const char *key, const char *val, int g);
__attribute__((visibility("default"))) char *r_str_replace_icase(char *str, const char *key, const char *val, int g, int keep_case);
__attribute__((visibility("default"))) char *r_str_replace_in(char *str, unsigned int sz, const char *key, const char *val, int g);


__attribute__((visibility("default"))) int r_str_bits(char *strout, const unsigned char *buf, int len, const char *bitz);
__attribute__((visibility("default"))) int r_str_bits64(char *strout, unsigned long long in);
__attribute__((visibility("default"))) unsigned long long r_str_bits_from_string(const char *buf, const char *bitz);
__attribute__((visibility("default"))) int r_str_rwx(const char *str);
__attribute__((visibility("default"))) int r_str_replace_ch(char *s, char a, char b, _Bool g);
__attribute__((visibility("default"))) int r_str_replace_char(char *s, int a, int b);
__attribute__((visibility("default"))) int r_str_replace_char_once(char *s, int a, int b);
__attribute__((visibility("default"))) void r_str_remove_char(char *str, char c);
__attribute__((visibility("default"))) const char *r_str_rwx_i(int rwx);
__attribute__((visibility("default"))) int r_str_fmtargs(const char *fmt);
__attribute__((visibility("default"))) char *r_str_arg_escape(const char *arg);
__attribute__((visibility("default"))) int r_str_arg_unescape(char *arg);
__attribute__((visibility("default"))) char **r_str_argv(const char *str, int *_argc);
__attribute__((visibility("default"))) void r_str_argv_free(char **argv);
__attribute__((visibility("default"))) char *r_str_new(const char *str);
__attribute__((visibility("default"))) int r_snprintf (char *string, int len, const char *fmt, ...) __attribute__ ((format (printf, 3, 4)));
__attribute__((visibility("default"))) _Bool r_str_is_ascii(const char *str);
__attribute__((visibility("default"))) char *r_str_nextword(char *s, char ch);
__attribute__((visibility("default"))) _Bool r_str_is_printable(const char *str);
__attribute__((visibility("default"))) _Bool r_str_is_printable_limited(const char *str, int size);
__attribute__((visibility("default"))) _Bool r_str_is_printable_incl_newlines(const char *str);
__attribute__((visibility("default"))) char *r_str_appendlen(char *ptr, const char *string, int slen);
__attribute__((visibility("default"))) char *r_str_newf(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) char *r_str_newvf(const char *fmt, va_list ap);
__attribute__((visibility("default"))) int r_str_distance(const char *a, const char *b);
__attribute__((visibility("default"))) char *r_str_newlen(const char *str, int len);
__attribute__((visibility("default"))) const char *r_str_sysbits(const int v);
__attribute__((visibility("default"))) char *r_str_trunc_ellipsis(const char *str, int len);
__attribute__((visibility("default"))) const char *r_str_bool(int b);
__attribute__((visibility("default"))) _Bool r_str_is_true(const char *s);
__attribute__((visibility("default"))) _Bool r_str_is_false(const char *s);
__attribute__((visibility("default"))) _Bool r_str_is_bool(const char *val);
__attribute__((visibility("default"))) const char *r_str_ansi_chrn(const char *str, size_t n);
__attribute__((visibility("default"))) size_t r_str_ansi_len(const char *str);
__attribute__((visibility("default"))) size_t r_str_ansi_nlen(const char *str, size_t len);
__attribute__((visibility("default"))) int r_str_ansi_trim(char *str, int str_len, int n);
__attribute__((visibility("default"))) int r_str_ansi_filter(char *str, char **out, int **cposs, int len);
__attribute__((visibility("default"))) char *r_str_ansi_crop(const char *str, unsigned int x, unsigned int y, unsigned int x2, unsigned int y2);
__attribute__((visibility("default"))) int r_str_word_count(const char *string);
__attribute__((visibility("default"))) int r_str_char_count(const char *string, char ch);
__attribute__((visibility("default"))) char *r_str_word_get0set(char *stra, int stralen, int idx, const char *newstr, int *newlen);
__attribute__((visibility("default"))) int r_str_word_set0(char *str);
__attribute__((visibility("default"))) int r_str_word_set0_stack(char *str);
__attribute__((visibility("default"))) const char *r_str_word_get0(const char *str, int idx);
__attribute__((visibility("default"))) char *r_str_word_get_first(const char *string);
__attribute__((visibility("default"))) void r_str_trim(char *str);
__attribute__((visibility("default"))) char *r_str_wrap(const char *str, int w);
__attribute__((visibility("default"))) char *r_str_trim_dup(const char *str);
__attribute__((visibility("default"))) char *r_str_trim_lines(char *str);
__attribute__((visibility("default"))) void r_str_trim_head(char *str);
__attribute__((visibility("default"))) const char *r_str_trim_head_ro(const char *str);
__attribute__((visibility("default"))) const char *r_str_trim_head_wp(const char *str);
__attribute__((visibility("default"))) void r_str_trim_tail(char *str);
__attribute__((visibility("default"))) void r_str_trim_args(char *str);
__attribute__((visibility("default"))) unsigned int r_str_hash(const char *str);
__attribute__((visibility("default"))) unsigned long long r_str_hash64(const char *str);
__attribute__((visibility("default"))) char *r_str_trim_nc(char *str);
__attribute__((visibility("default"))) const char *r_str_nstr(const char *from, const char *to, int size);
__attribute__((visibility("default"))) const char *r_str_lchr(const char *str, char chr);
__attribute__((visibility("default"))) const char *r_sub_str_lchr(const char *str, int start, int end, char chr);
__attribute__((visibility("default"))) const char *r_sub_str_rchr(const char *str, int start, int end, char chr);
__attribute__((visibility("default"))) char *r_str_ichr(char *str, char chr);
__attribute__((visibility("default"))) _Bool r_str_ccmp(const char *dst, const char *orig, int ch);
__attribute__((visibility("default"))) _Bool r_str_cmp_list(const char *list, const char *item, char sep);
__attribute__((visibility("default"))) int r_str_cmp(const char *dst, const char *orig, int len);
__attribute__((visibility("default"))) int r_str_casecmp(const char *dst, const char *orig);
__attribute__((visibility("default"))) int r_str_ncasecmp(const char *dst, const char *orig, size_t n);
__attribute__((visibility("default"))) int r_str_ccpy(char *dst, char *orig, int ch);
__attribute__((visibility("default"))) const char *r_str_get(const char *str);
__attribute__((visibility("default"))) const char *r_str_get_fail(const char *str, const char *failstr);
__attribute__((visibility("default"))) const char *r_str_getf(const char *str);
__attribute__((visibility("default"))) char *r_str_ndup(const char *ptr, int len);
__attribute__((visibility("default"))) char *r_str_dup(char *ptr, const char *string);
__attribute__((visibility("default"))) int r_str_inject(char *begin, char *end, char *str, int maxlen);
__attribute__((visibility("default"))) int r_str_delta(char *p, char a, char b);
__attribute__((visibility("default"))) void r_str_filter(char *str, int len);
__attribute__((visibility("default"))) const char * r_str_tok(const char *str1, const char b, size_t len);
__attribute__((visibility("default"))) wchar_t *r_str_mb_to_wc(const char *buf);
__attribute__((visibility("default"))) char *r_str_wc_to_mb(const wchar_t *buf);
__attribute__((visibility("default"))) wchar_t *r_str_mb_to_wc_l(const char *buf, int len);
__attribute__((visibility("default"))) char *r_str_wc_to_mb_l(const wchar_t *buf, int len);
__attribute__((visibility("default"))) const char *r_str_str_xy(const char *s, const char *word, const char *prev, int *x, int *y);

typedef void(*str_operation)(char *c);

__attribute__((visibility("default"))) int r_str_do_until_token(str_operation op, char *str, const char tok);

__attribute__((visibility("default"))) void r_str_reverse(char *str);
__attribute__((visibility("default"))) int r_str_re_match(const char *str, const char *reg);
__attribute__((visibility("default"))) int r_str_re_replace(const char *str, const char *reg, const char *sub);
__attribute__((visibility("default"))) int r_str_path_unescape(char *path);
__attribute__((visibility("default"))) char *r_str_path_escape(const char *path);
__attribute__((visibility("default"))) int r_str_unescape(char *buf);
__attribute__((visibility("default"))) char *r_str_sanitize_r2(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_raw(const unsigned char *buf, int sz);
__attribute__((visibility("default"))) char *r_str_escape(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_sh(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_sql(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_dot(const char *buf);
__attribute__((visibility("default"))) char *r_str_escape_latin1(const char *buf, _Bool show_asciidot, _Bool esc_bslash, _Bool colors);
__attribute__((visibility("default"))) char *r_str_escape_utf8(const char *buf, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf8_keep_printable(const char *buf, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf16le(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf32le(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf16be(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_escape_utf32be(const char *buf, int buf_size, _Bool show_asciidot, _Bool esc_bslash);
__attribute__((visibility("default"))) void r_str_byte_escape(const char *p, char **dst, int dot_nl, _Bool default_dot, _Bool esc_bslash);
__attribute__((visibility("default"))) char *r_str_format_msvc_argv(size_t argc, const char **argv);
__attribute__((visibility("default"))) void r_str_uri_decode(char *buf);
__attribute__((visibility("default"))) char *r_str_uri_encode(const char *buf);
__attribute__((visibility("default"))) char *r_str_utf16_decode(const unsigned char *s, int len);
__attribute__((visibility("default"))) int r_str_utf16_to_utf8(unsigned char *dst, int len_dst, const unsigned char *src, int len_src, int little_endian);
__attribute__((visibility("default"))) char *r_str_utf16_encode(const char *s, int len);
__attribute__((visibility("default"))) char *r_str_escape_utf8_for_json(const char *s, int len);
__attribute__((visibility("default"))) char *r_str_escape_utf8_for_json_strip(const char *buf, int buf_size);
__attribute__((visibility("default"))) char *r_str_encoded_json(const char *buf, int buf_size, int encoding);
__attribute__((visibility("default"))) char *r_str_home(const char *str);
__attribute__((visibility("default"))) char *r_str_r2_prefix(const char *str);
__attribute__((visibility("default"))) size_t r_str_nlen(const char *s, int n);
__attribute__((visibility("default"))) size_t r_str_nlen_w(const char *s, int n);
__attribute__((visibility("default"))) size_t r_wstr_clen(const char *s);
__attribute__((visibility("default"))) char *r_str_prepend(char *ptr, const char *string);
__attribute__((visibility("default"))) char *r_str_prefix_all(const char *s, const char *pfx);
__attribute__((visibility("default"))) char *r_str_append(char *ptr, const char *string);
__attribute__((visibility("default"))) char *r_str_append_owned(char *ptr, char *string);
__attribute__((visibility("default"))) char *r_str_appendf(char *ptr, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) char *r_str_appendch(char *x, char y);
__attribute__((visibility("default"))) void r_str_case(char *str, _Bool up);
__attribute__((visibility("default"))) void r_str_trim_path(char *s);
__attribute__((visibility("default"))) unsigned char r_str_contains_macro(const char *input_value);
__attribute__((visibility("default"))) void r_str_truncate_cmd(char *string);
__attribute__((visibility("default"))) char* r_str_replace_thunked(char *str, char *clean, int *thunk, int clen,
      const char *key, const char *val, int g);
__attribute__((visibility("default"))) _Bool r_str_glob(const char *str, const char *glob);
__attribute__((visibility("default"))) int r_str_binstr2bin(const char *str, unsigned char *out, int outlen);
__attribute__((visibility("default"))) char *r_str_between(const char *str, const char *prefix, const char *suffix);
__attribute__((visibility("default"))) _Bool r_str_startswith(const char *str, const char *needle);
__attribute__((visibility("default"))) _Bool r_str_endswith(const char *str, const char *needle);
__attribute__((visibility("default"))) _Bool r_str_isnumber (const char *str);
__attribute__((visibility("default"))) const char *r_str_last (const char *in, const char *ch);
__attribute__((visibility("default"))) char* r_str_highlight(char *str, const char *word, const char *color, const char *color_reset);
__attribute__((visibility("default"))) char *r_qrcode_gen(const unsigned char *text, int len, _Bool utf8, _Bool inverted);
__attribute__((visibility("default"))) char *r_str_from_ut64(unsigned long long val);
__attribute__((visibility("default"))) void r_str_stripLine(char *str, const char *key);
__attribute__((visibility("default"))) char *r_str_list_join(RList *str, const char *sep);
__attribute__((visibility("default"))) char *r_str_array_join(const char **a, size_t n, const char *sep);

__attribute__((visibility("default"))) const char *r_str_sep(const char *base, const char *sep);
__attribute__((visibility("default"))) const char *r_str_rsep(const char *base, const char *p, const char *sep);
__attribute__((visibility("default"))) char *r_str_donut(int size);
__attribute__((visibility("default"))) char *r_str_version(const char *program);
__attribute__((visibility("default"))) char *r_str_ss(const char* msg, const char *nl, int cs);
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/sdbht.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 2 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 3 4
typedef struct r_str_constpool_t {
 HtPP *ht;
} RStrConstPool;

__attribute__((visibility("default"))) _Bool r_str_constpool_init(RStrConstPool *pool);
__attribute__((visibility("default"))) void r_str_constpool_fini(RStrConstPool *pool);
__attribute__((visibility("default"))) const char *r_str_constpool_get(RStrConstPool *pool, const char *str);
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 2 3 4
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
typedef struct {
 char *sysname;
 char *nodename;
 char *release;
 char *version;
 char *machine;
} RSysInfo;

__attribute__((visibility("default"))) RSysInfo *r_sys_info(void);
__attribute__((visibility("default"))) void r_sys_info_free(RSysInfo *si);

__attribute__((visibility("default"))) int r_sys_sigaction(int *sig, void (*handler) (int));
__attribute__((visibility("default"))) int r_sys_signal(int sig, void (*handler) (int));
__attribute__((visibility("default"))) void r_sys_env_init(void);
__attribute__((visibility("default"))) char **r_sys_get_environ(void);
__attribute__((visibility("default"))) void r_sys_set_environ(char **e);

__attribute__((visibility("default"))) int r_sys_fork(void);

__attribute__((visibility("default"))) void r_sys_exit(int status, _Bool nocleanup);
__attribute__((visibility("default"))) _Bool r_sys_stop(void);
__attribute__((visibility("default"))) char *r_sys_pid_to_path(int pid);
__attribute__((visibility("default"))) int r_sys_run(const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_sys_run_rop(const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_sys_getpid(void);
__attribute__((visibility("default"))) int r_sys_crash_handler(const char *cmd);
__attribute__((visibility("default"))) const char *r_sys_arch_str(int arch);
__attribute__((visibility("default"))) int r_sys_arch_id(const char *arch);
__attribute__((visibility("default"))) _Bool r_sys_arch_match(const char *archstr, const char *arch);
__attribute__((visibility("default"))) RList *r_sys_dir(const char *path);
__attribute__((visibility("default"))) void r_sys_perror_str(const char *fun);





__attribute__((visibility("default"))) const char *r_sys_prefix(const char *pfx);
__attribute__((visibility("default"))) _Bool r_sys_mkdir(const char *dir);
__attribute__((visibility("default"))) _Bool r_sys_mkdirp(const char *dir);
__attribute__((visibility("default"))) int r_sys_sleep(int secs);
__attribute__((visibility("default"))) int r_sys_usleep(int usecs);
__attribute__((visibility("default"))) char *r_sys_getenv(const char *key);
__attribute__((visibility("default"))) _Bool r_sys_getenv_asbool(const char *key);
__attribute__((visibility("default"))) int r_sys_setenv(const char *key, const char *value);
__attribute__((visibility("default"))) int r_sys_clearenv(void);
__attribute__((visibility("default"))) char *r_sys_whoami(void);
__attribute__((visibility("default"))) int r_sys_uid(void);
__attribute__((visibility("default"))) char *r_sys_getdir(void);
__attribute__((visibility("default"))) _Bool r_sys_chdir(const char *s);
__attribute__((visibility("default"))) _Bool r_sys_aslr(int val);
__attribute__((visibility("default"))) int r_sys_thp_mode(void);
__attribute__((visibility("default"))) int r_sys_cmd_str_full(const char *cmd, const char *input, int ilen, char **output, int *len, char **sterr);
# 96 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
__attribute__((visibility("default"))) int r_sys_truncate(const char *file, int sz);
__attribute__((visibility("default"))) int r_sys_cmd(const char *cmd);
__attribute__((visibility("default"))) int r_sys_cmdbg(const char *cmd);
__attribute__((visibility("default"))) int r_sys_cmdf(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) char *r_sys_cmd_str(const char *cmd, const char *input, int *len);
__attribute__((visibility("default"))) char *r_sys_cmd_strf(const char *cmd, ...) __attribute__ ((format (printf, 1, 2)));

__attribute__((visibility("default"))) void r_sys_backtrace(void);
__attribute__((visibility("default"))) _Bool r_sys_tts(const char *txt, _Bool bg);
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 3 4
__attribute__((visibility("default"))) char *r_syscmd_ls(const char *input, int w);
__attribute__((visibility("default"))) char *r_syscmd_cat(const char *file);
__attribute__((visibility("default"))) char *r_syscmd_mkdir(const char *dir);
__attribute__((visibility("default"))) _Bool r_syscmd_mv(const char *input);
__attribute__((visibility("default"))) char *r_syscmd_uniq(const char *file);
__attribute__((visibility("default"))) char *r_syscmd_head(const char *file, int count);
__attribute__((visibility("default"))) char *r_syscmd_tail(const char *file, int count);
__attribute__((visibility("default"))) char *r_syscmd_join(const char *file1, const char *file2);
__attribute__((visibility("default"))) char *r_syscmd_sort(const char *file);

__attribute__((visibility("default"))) unsigned char *r_sys_unxz (const unsigned char *data, size_t len, size_t *olen);
__attribute__((visibility("default"))) _Bool r_w32_init(void);
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_file.h" 1 3 4
# 22 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/termios.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/termios.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 1 3 4
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4
typedef unsigned long tcflag_t;
typedef unsigned char cc_t;
typedef unsigned long speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 speed_t c_ispeed;
 speed_t c_ospeed;
};
# 330 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4

speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int cfsetispeed(struct termios *, speed_t);
int cfsetospeed(struct termios *, speed_t);
int tcgetattr(int, struct termios *);
int tcsetattr(int, int, const struct termios *);
int tcdrain(int) __asm("_" "tcdrain" );
int tcflow(int, int);
int tcflush(int, int);
int tcsendbreak(int, int);


void cfmakeraw(struct termios *);
int cfsetspeed(struct termios *, speed_t);


# 356 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioccom.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 3 4
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 357 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 2 3 4
# 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttydefaults.h" 1 3 4
# 366 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/termios.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/termios.h" 2 3 4




pid_t tcgetsid(int);

# 33 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 3 4
struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/filio.h" 1 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sockio.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4





int ioctl(int, unsigned long, ...);

# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_param.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 2 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/net/net_kev.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 3 4
typedef __uint8_t sa_family_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 3 4
typedef __darwin_socklen_t socklen_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 3 4
struct iovec {
 void * iov_base;
 size_t iov_len;
};
# 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
typedef __uint32_t sae_associd_t;



typedef __uint32_t sae_connid_t;
# 303 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
typedef struct sa_endpoints {
 unsigned int sae_srcif;
 const struct sockaddr *sae_srcaddr;
 socklen_t sae_srcaddrlen;
 const struct sockaddr *sae_dstaddr;
 socklen_t sae_dstaddrlen;
} sa_endpoints_t;





struct linger {
 int l_onoff;
 int l_linger;
};
# 333 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct so_np_extensions {
 u_int32_t npx_flags;
 u_int32_t npx_mask;
};
# 408 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockaddr {
 __uint8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 421 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockproto {
 __uint16_t sp_family;
 __uint16_t sp_protocol;
};
# 441 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockaddr_storage {
 __uint8_t ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128 - sizeof(__uint8_t) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
# 548 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 687 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};







int accept(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "accept" );
int bind(int, const struct sockaddr *, socklen_t) __asm("_" "bind" );
int connect(int, const struct sockaddr *, socklen_t) __asm("_" "connect" );
int getpeername(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getpeername" );
int getsockname(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getsockname" );
int getsockopt(int, int, int, void * restrict, socklen_t * restrict);
int listen(int, int) __asm("_" "listen" );
ssize_t recv(int, void *, size_t, int) __asm("_" "recv" );
ssize_t recvfrom(int, void *, size_t, int, struct sockaddr * restrict,
    socklen_t * restrict) __asm("_" "recvfrom" );
ssize_t recvmsg(int, struct msghdr *, int) __asm("_" "recvmsg" );
ssize_t send(int, const void *, size_t, int) __asm("_" "send" );
ssize_t sendmsg(int, const struct msghdr *, int) __asm("_" "sendmsg" );
ssize_t sendto(int, const void *, size_t,
    int, const struct sockaddr *, socklen_t) __asm("_" "sendto" );
int setsockopt(int, int, int, const void *, socklen_t);
int shutdown(int, int);
int sockatmark(int) ;
int socket(int, int, int);
int socketpair(int, int, int, int *) __asm("_" "socketpair" );


int sendfile(int, int, off_t, off_t *, struct sf_hdtr *, int);



void pfctlinput(int, struct sockaddr *);


int connectx(int, const sa_endpoints_t *, sae_associd_t, unsigned int,
    const struct iovec *, unsigned int, size_t *, sae_connid_t *);


int disconnectx(int, sae_associd_t, sae_connid_t);


# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 2 3 4
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
__attribute__((visibility("default"))) const char *r_cons_version(void);



typedef int (*RConsGetSize)(int *rows);
typedef int (*RConsGetCursor)(int *rows);
typedef _Bool (*RConsIsBreaked)(void);
typedef void (*RConsFlush)(void);
typedef void (*RConsGrepCallback)(const char *grep);

typedef struct r_cons_bind_t {
 RConsGetSize get_size;
 RConsGetCursor get_cursor;
 PrintfCallback cb_printf;
 RConsIsBreaked is_breaked;
 RConsFlush cb_flush;
 RConsGrepCallback cb_grep;
} RConsBind;

typedef struct r_cons_grep_t {
 char strings[10][64];
 int nstrings;
 char *str;
 int counter;
 _Bool charCounter;
 int less;
 _Bool hud;
 _Bool human;
 int json;
 char *json_path;
 int range_line;
 int line;
 int sort;
 int sort_row;
 _Bool sort_invert;
 int f_line;
 int l_line;
 int tokens[64];
 int tokens_used;
 int amp;
 int zoom;
 int zoomy;
 int neg;
 int begin;
 int end;
 _Bool icase;
 _Bool ascart;
} RConsGrep;

enum { ALPHA_RESET = 0x00, ALPHA_FG = 0x01, ALPHA_BG = 0x02, ALPHA_FGBG = 0x03 };
enum { R_CONS_ATTR_BOLD = 1u << 1,
       R_CONS_ATTR_DIM = 1u << 2,
       R_CONS_ATTR_ITALIC = 1u << 3,
       R_CONS_ATTR_UNDERLINE = 1u << 4,
       R_CONS_ATTR_BLINK = 1u << 5
};

typedef struct rcolor_t {

 unsigned char attr;
 unsigned char a;
 unsigned char r;
 unsigned char g;
 unsigned char b;
 unsigned char r2;
 unsigned char g2;
 unsigned char b2;
 signed char id16;
} RColor;

typedef struct r_cons_palette_t {
 RColor b0x00;
 RColor b0x7f;
 RColor b0xff;
 RColor args;
 RColor bin;
 RColor btext;
 RColor call;
 RColor cjmp;
 RColor cmp;
 RColor comment;
 RColor usercomment;
 RColor creg;
 RColor flag;
 RColor fline;
 RColor floc;
 RColor flow;
 RColor flow2;
 RColor fname;
 RColor help;
 RColor input;
 RColor invalid;
 RColor jmp;
 RColor label;
 RColor math;
 RColor mov;
 RColor nop;
 RColor num;
 RColor offset;
 RColor other;
 RColor pop;
 RColor prompt;
 RColor push;
 RColor crypto;
 RColor reg;
 RColor reset;
 RColor ret;
 RColor swi;
 RColor trap;
 RColor ucall;
 RColor ujmp;
 RColor ai_read;
 RColor ai_write;
 RColor ai_exec;
 RColor ai_seq;
 RColor ai_ascii;
 RColor gui_cflow;
 RColor gui_dataoffset;
 RColor gui_background;
 RColor gui_alt_background;
 RColor gui_border;
 RColor wordhl;
 RColor linehl;
 RColor func_var;
 RColor func_var_type;
 RColor func_var_addr;
 RColor widget_bg;
 RColor widget_sel;


 RColor graph_box;
 RColor graph_box2;
 RColor graph_box3;
 RColor graph_box4;
 RColor graph_true;
 RColor graph_false;
 RColor graph_trufae;
 RColor graph_traced;
 RColor graph_current;
        RColor graph_diff_match;
        RColor graph_diff_unmatch;
        RColor graph_diff_unknown;
        RColor graph_diff_new;
} RConsPalette;

typedef struct r_cons_printable_palette_t {
 char *b0x00;
 char *b0x7f;
 char *b0xff;
 char *args;
 char *bin;
 char *btext;
 char *call;
 char *cjmp;
 char *cmp;
 char *comment;
 char *usercomment;
 char *creg;
 char *flag;
 char *fline;
 char *floc;
 char *flow;
 char *flow2;
 char *fname;
 char *help;
 char *input;
 char *invalid;
 char *jmp;
 char *label;
 char *math;
 char *mov;
 char *nop;
 char *num;
 char *offset;
 char *other;
 char *pop;
 char *prompt;
 char *push;
 char *crypto;
 char *reg;
 char *reset;
 char *ret;
 char *swi;
 char *trap;
 char *ucall;
 char *ujmp;
 char *ai_read;
 char *ai_write;
 char *ai_exec;
 char *ai_seq;
 char *ai_ascii;
 char *ai_unmap;
 char *gui_cflow;
 char *gui_dataoffset;
 char *gui_background;
 char *gui_alt_background;
 char *gui_border;
 char *wordhl;
 char *linehl;
 char *func_var;
 char *func_var_type;
 char *func_var_addr;
 char *widget_bg;
 char *widget_sel;


 char *graph_box;
 char *graph_box2;
 char *graph_box3;
 char *graph_box4;
 char *graph_diff_match;
 char *graph_diff_unmatch;
 char *graph_diff_unknown;
 char *graph_diff_new;
 char *graph_true;
 char *graph_false;
 char *graph_trufae;
 char *graph_traced;
 char *graph_current;
 char **rainbow;
 int rainbow_sz;
} RConsPrintablePalette;

typedef void (*RConsEvent)(void *);



typedef struct r_cons_canvas_t {
 int w;
 int h;
 int x;
 int y;
 char **b;
 int *blen;
 int *bsize;
 const char *attr;
 HtUP *attrs;
 RStrConstPool constpool;
 int sx;
 int sy;
 int color;
 int linemode;
} RConsCanvas;
# 374 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
typedef char *(*RConsEditorCallback)(void *core, const char *file, const char *str);
typedef int (*RConsClickCallback)(void *core, int x, int y);
typedef void (*RConsBreakCallback)(void *core);
typedef void *(*RConsSleepBeginCallback)(void *core);
typedef void (*RConsSleepEndCallback)(void *core, void *user);
typedef void (*RConsQueueTaskOneshot)(void *core, void *task, void *user);
typedef void (*RConsFunctionKey)(void *core, int fkey);

typedef enum { COLOR_MODE_DISABLED = 0, COLOR_MODE_16, COLOR_MODE_256, COLOR_MODE_16M } RConsColorMode;

typedef struct r_cons_context_t {
 RConsGrep grep;
 RStack *cons_stack;
 char *buffer;
 size_t buffer_len;
 size_t buffer_sz;
 RStrBuf *error;
 int errmode;
 _Bool breaked;
 _Bool was_breaked;
 RStack *break_stack;
 RConsEvent event_interrupt;
 void *event_interrupt_data;
 int cmd_depth;
 int cmd_str_depth;
 _Bool noflush;


 RLogCallback log_callback;

 char *lastOutput;
 int lastLength;
 _Bool lastMode;
 _Bool lastEnabled;
 _Bool is_interactive;
 _Bool pageable;

 int color_mode;
 RConsPalette cpal;
 RConsPrintablePalette pal;

 RList *sorted_lines;
 RList *unsorted_lines;
 int sorted_column;
 _Bool demo;
 _Bool is_html;
 _Bool was_html;
 _Bool grep_color;
 _Bool grep_highlight;
 _Bool filter;
 _Bool use_tts;
 _Bool flush;
} RConsContext;



typedef struct {
 int x;
 int y;
} RConsCursorPos;

typedef struct r_cons_t {
 RConsContext *context;
 char *lastline;
 int lines;
 int rows;
 int echo;
 int fps;
 int columns;
 int force_rows;
 int force_columns;
 int fix_rows;
 int fix_columns;
 _Bool break_lines;
 int optimize;

 _Bool show_autocomplete_widget;
 FILE *fdin;
 int fdout;
 const char *teefile;
 int (*user_fgets)(char *buf, int len);
 RConsEvent event_resize;
 void *event_data;
 int mouse_event;

 RConsEditorCallback cb_editor;
 RConsBreakCallback cb_break;
 RConsSleepBeginCallback cb_sleep_begin;
 RConsSleepEndCallback cb_sleep_end;
 RConsClickCallback cb_click;
 RConsQueueTaskOneshot cb_task_oneshot;
 RConsFunctionKey cb_fkey;

 void *user;

 struct termios term_raw, term_buf;






 RNum *num;


 char *pager;
 int blankline;
 char *highlight;
 _Bool enable_highlight;
 int null;
 int mouse;
 int is_wine;
 struct r_line_t *line;
 const char **vline;
 int refcnt;
 _Bool newline;
 int vtmode;
 _Bool use_utf8;
 _Bool use_utf8_curvy;
 _Bool dotted_lines;
 int linesleep;
 int pagesize;
 char *break_word;
 int break_word_len;
 unsigned long long timeout;
 char* (*rgbstr)(char *str, size_t sz, unsigned long long addr);
 _Bool click_set;
 int click_x;
 int click_y;
 _Bool show_vals;

 RConsCursorPos cpos;
} RCons;
# 670 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
enum {
 PAL_PROMPT = 0,
 PAL_ADDRESS,
 PAL_DEFAULT,
 PAL_CHANGED,
 PAL_JUMP,
 PAL_CALL,
 PAL_PUSH,
 PAL_TRAP,
 PAL_CMP,
 PAL_RET,
 PAL_NOP,
 PAL_METADATA,
 PAL_HEADER,
 PAL_PRINTABLE,
 PAL_LINES0,
 PAL_LINES1,
 PAL_LINES2,
 PAL_00,
 PAL_7F,
 PAL_FF
};


enum {
 LINE_NONE = 0,
 LINE_TRUE,
 LINE_FALSE,
 LINE_UNCJMP,
 LINE_NOSYM_VERT,
 LINE_NOSYM_HORIZ
};

typedef enum {
 INSERT_MODE = 'i',
 CONTROL_MODE = 'c'
} RViMode;





typedef struct r_cons_canvas_line_style_t {
 int color;
 int symbol;
 int dot_style;
 const char *ansicolor;
} RCanvasLineStyle;
# 747 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
__attribute__((visibility("default"))) void r_cons_image(const unsigned char *buf, int bufsz, int width, int mode);
__attribute__((visibility("default"))) RConsCanvas* r_cons_canvas_new(int w, int h);
__attribute__((visibility("default"))) void r_cons_canvas_free(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_clear(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_print(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_print_region(RConsCanvas *c);
__attribute__((visibility("default"))) char *r_cons_canvas_to_string(RConsCanvas *c);
__attribute__((visibility("default"))) void r_cons_canvas_attr(RConsCanvas *c,const char * attr);
__attribute__((visibility("default"))) void r_cons_canvas_write(RConsCanvas *c, const char *_s);
__attribute__((visibility("default"))) _Bool r_cons_canvas_gotoxy(RConsCanvas *c, int x, int y);
__attribute__((visibility("default"))) void r_cons_canvas_goto_write(RConsCanvas *c,int x,int y, const char * s);
__attribute__((visibility("default"))) void r_cons_canvas_box(RConsCanvas *c, int x, int y, int w, int h, const char *color);
__attribute__((visibility("default"))) void r_cons_canvas_circle(RConsCanvas *c, int x, int y, int w, int h, const char *color);
__attribute__((visibility("default"))) void r_cons_canvas_line(RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style);
__attribute__((visibility("default"))) void r_cons_canvas_line_diagonal(RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style);
__attribute__((visibility("default"))) void r_cons_canvas_line_square(RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style);
__attribute__((visibility("default"))) int r_cons_canvas_resize(RConsCanvas *c, int w, int h);
__attribute__((visibility("default"))) void r_cons_canvas_fill(RConsCanvas *c, int x, int y, int w, int h, char ch);
__attribute__((visibility("default"))) void r_cons_canvas_line_square_defined (RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style, int bendpoint, int isvert);
__attribute__((visibility("default"))) void r_cons_canvas_line_back_edge (RConsCanvas *c, int x, int y, int x2, int y2, RCanvasLineStyle *style, int ybendpoint1, int xbendpoint, int ybendpoint2, int isvert);
__attribute__((visibility("default"))) RCons *r_cons_new(void);
__attribute__((visibility("default"))) RCons *r_cons_singleton(void);
__attribute__((visibility("default"))) RConsContext *r_cons_context(void);
__attribute__((visibility("default"))) RCons *r_cons_free(void);
__attribute__((visibility("default"))) char *r_cons_lastline(int *size);
__attribute__((visibility("default"))) char *r_cons_lastline_utf8_ansi_len(int *len);
__attribute__((visibility("default"))) void r_cons_set_click(int x, int y);
__attribute__((visibility("default"))) _Bool r_cons_get_click(int *x, int *y);

typedef void (*RConsBreak)(void *);
__attribute__((visibility("default"))) _Bool r_cons_is_breaked(void);
__attribute__((visibility("default"))) _Bool r_cons_was_breaked(void);
__attribute__((visibility("default"))) _Bool r_cons_is_interactive(void);
__attribute__((visibility("default"))) _Bool r_cons_default_context_is_interactive(void);
__attribute__((visibility("default"))) void *r_cons_sleep_begin(void);
__attribute__((visibility("default"))) void r_cons_sleep_end(void *user);


__attribute__((visibility("default"))) void r_cons_break_push(RConsBreak cb, void *user);
__attribute__((visibility("default"))) void r_cons_break_pop(void);
__attribute__((visibility("default"))) void r_cons_break_clear(void);
__attribute__((visibility("default"))) void r_cons_breakword(const char *s);
__attribute__((visibility("default"))) void r_cons_break_end(void);
__attribute__((visibility("default"))) void r_cons_break_timeout(int timeout);


__attribute__((visibility("default"))) int r_cons_pipe_open(const char *file, int fdn, int append);
__attribute__((visibility("default"))) void r_cons_pipe_close(int fd);
# 817 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
enum {
 R_CONS_ERRMODE_NULL,
 R_CONS_ERRMODE_QUIET,
 R_CONS_ERRMODE_ECHO,
 R_CONS_ERRMODE_BUFFER,
 R_CONS_ERRMODE_FLUSH,
};

__attribute__((visibility("default"))) void r_cons_push(void);
__attribute__((visibility("default"))) void r_cons_pop(void);
__attribute__((visibility("default"))) RConsContext *r_cons_context_new( RConsContext *parent);
__attribute__((visibility("default"))) void r_cons_context_free(RConsContext *context);
__attribute__((visibility("default"))) void r_cons_context_load(RConsContext *context);
__attribute__((visibility("default"))) void r_cons_context_reset(void);
__attribute__((visibility("default"))) _Bool r_cons_context_is_main(void);
__attribute__((visibility("default"))) void r_cons_context_break(RConsContext *context);
__attribute__((visibility("default"))) void r_cons_context_break_push(RConsContext *context, RConsBreak cb, void *user, _Bool sig);
__attribute__((visibility("default"))) void r_cons_context_break_pop(RConsContext *context, _Bool sig);


__attribute__((visibility("default"))) char *r_cons_editor(const char *file, const char *str);
__attribute__((visibility("default"))) void r_cons_reset(void);
__attribute__((visibility("default"))) void r_cons_reset_colors(void);
__attribute__((visibility("default"))) char *r_cons_errstr(void);
__attribute__((visibility("default"))) void r_cons_errmode(int mode);
__attribute__((visibility("default"))) void r_cons_errmodes(const char *mode);
__attribute__((visibility("default"))) int r_cons_eprintf(const char *format, ...);
__attribute__((visibility("default"))) void r_cons_eflush(void);
__attribute__((visibility("default"))) void r_cons_print_clear(void);
__attribute__((visibility("default"))) void r_cons_echo(const char *msg);
__attribute__((visibility("default"))) void r_cons_zero(void);
__attribute__((visibility("default"))) void r_cons_highlight(const char *word);
__attribute__((visibility("default"))) void r_cons_clear(void);
__attribute__((visibility("default"))) void r_cons_clear_buffer(void);
__attribute__((visibility("default"))) void r_cons_clear00(void);
__attribute__((visibility("default"))) void r_cons_clear_line(int err);
__attribute__((visibility("default"))) void r_cons_fill_line(void);
__attribute__((visibility("default"))) void r_cons_stdout_open(const char *file, int append);
__attribute__((visibility("default"))) int r_cons_stdout_set_fd(int fd);
__attribute__((visibility("default"))) void r_cons_gotoxy(int x, int y);
__attribute__((visibility("default"))) int r_cons_get_cur_line(void);
__attribute__((visibility("default"))) void r_cons_line(int x, int y, int x2, int y2, int ch);
__attribute__((visibility("default"))) void r_cons_show_cursor(int cursor);
__attribute__((visibility("default"))) char *r_cons_swap_ground(const char *col);
__attribute__((visibility("default"))) _Bool r_cons_drop(int n);
__attribute__((visibility("default"))) void r_cons_chop(void);
__attribute__((visibility("default"))) void r_cons_set_raw(_Bool b);
__attribute__((visibility("default"))) void r_cons_set_interactive(_Bool b);
__attribute__((visibility("default"))) void r_cons_set_last_interactive(void);
__attribute__((visibility("default"))) void r_cons_set_utf8(_Bool b);
__attribute__((visibility("default"))) void r_cons_grep(const char *grep);


__attribute__((visibility("default"))) int r_cons_printf(const char *format, ...) __attribute__ ((format (printf, 1, 2)));
__attribute__((visibility("default"))) void r_cons_printf_list(const char *format, va_list ap);
__attribute__((visibility("default"))) void r_cons_strcat(const char *str);
__attribute__((visibility("default"))) void r_cons_strcat_at(const char *str, int x, char y, int w, int h);

__attribute__((visibility("default"))) void r_cons_println(const char* str);

__attribute__((visibility("default"))) void r_cons_strcat_justify(const char *str, int j, char c);
__attribute__((visibility("default"))) void r_cons_printat(const char *str, int x, char y);
__attribute__((visibility("default"))) int r_cons_write(const char *str, int len);
__attribute__((visibility("default"))) void r_cons_newline(void);
__attribute__((visibility("default"))) void r_cons_filter(void);
__attribute__((visibility("default"))) void r_cons_flush(void);
__attribute__((visibility("default"))) void r_cons_print_fps (int col);
__attribute__((visibility("default"))) void r_cons_last(void);
__attribute__((visibility("default"))) int r_cons_less_str(const char *str, const char *exitkeys);
__attribute__((visibility("default"))) void r_cons_less(void);
__attribute__((visibility("default"))) void r_cons_2048(_Bool color);
__attribute__((visibility("default"))) void r_cons_memset(char ch, int len);
__attribute__((visibility("default"))) void r_cons_visual_flush(void);
__attribute__((visibility("default"))) void r_cons_visual_write(char *buffer);
__attribute__((visibility("default"))) _Bool r_cons_is_utf8(void);
__attribute__((visibility("default"))) _Bool r_cons_is_windows(void);
__attribute__((visibility("default"))) void r_cons_cmd_help(const char * help[], _Bool use_color);
__attribute__((visibility("default"))) void r_cons_log_stub(const char *output, const char *funcname, const char *filename,
 unsigned int lineno, unsigned int level, const char *tag, const char *fmtstr, ...) __attribute__ ((format (printf, 7, 8)));



__attribute__((visibility("default"))) int r_cons_controlz(int ch);
__attribute__((visibility("default"))) int r_cons_readchar(void);
__attribute__((visibility("default"))) _Bool r_cons_readpush(const char *str, int len);
__attribute__((visibility("default"))) void r_cons_readflush(void);
__attribute__((visibility("default"))) void r_cons_switchbuf(_Bool active);
__attribute__((visibility("default"))) int r_cons_readchar_timeout(unsigned int usec);
__attribute__((visibility("default"))) int r_cons_any_key(const char *msg);
__attribute__((visibility("default"))) int r_cons_eof(void);

__attribute__((visibility("default"))) int r_cons_palette_init(const unsigned char *pal);
__attribute__((visibility("default"))) int r_cons_pal_set(const char *key, const char *val);
__attribute__((visibility("default"))) void r_cons_pal_update_event(void);
__attribute__((visibility("default"))) void r_cons_pal_free(RConsContext *ctx);
__attribute__((visibility("default"))) void r_cons_pal_init(RConsContext *ctx);
__attribute__((visibility("default"))) void r_cons_pal_copy(RConsContext *dst, RConsContext *src);
__attribute__((visibility("default"))) char *r_cons_pal_parse(const char *str, RColor *outcol);
__attribute__((visibility("default"))) void r_cons_pal_random(void);
__attribute__((visibility("default"))) RColor r_cons_pal_get(const char *key);
__attribute__((visibility("default"))) RColor r_cons_pal_get_i(int index);
__attribute__((visibility("default"))) const char *r_cons_pal_get_name(int index);
__attribute__((visibility("default"))) int r_cons_pal_len(void);
__attribute__((visibility("default"))) int r_cons_rgb_parse(const char *p, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
__attribute__((visibility("default"))) char *r_cons_rgb_tostring(unsigned char r, unsigned char g, unsigned char b);
__attribute__((visibility("default"))) void r_cons_pal_list(int rad, const char *arg);
__attribute__((visibility("default"))) void r_cons_pal_show(void);
__attribute__((visibility("default"))) int r_cons_get_size(int *rows);
__attribute__((visibility("default"))) _Bool r_cons_is_tty(void);
__attribute__((visibility("default"))) int r_cons_get_cursor(int *rows);
__attribute__((visibility("default"))) int r_cons_arrow_to_hjkl(int ch);
__attribute__((visibility("default"))) char *r_cons_html_filter(const char *ptr, int *newlen);
__attribute__((visibility("default"))) char *r_cons_rainbow_get(int idx, int last, _Bool bg);
__attribute__((visibility("default"))) void r_cons_rainbow_free(RConsContext *ctx);
__attribute__((visibility("default"))) void r_cons_rainbow_new(RConsContext *ctx, int sz);

__attribute__((visibility("default"))) int r_cons_fgets(char *buf, int len, int argc, const char **argv);
__attribute__((visibility("default"))) char *r_cons_hud(RList *list, const char *prompt);
__attribute__((visibility("default"))) char *r_cons_hud_line(RList *list, const char *prompt);
__attribute__((visibility("default"))) char *r_cons_hud_line_string(const char *s);
__attribute__((visibility("default"))) char *r_cons_hud_path(const char *path, int dir);
__attribute__((visibility("default"))) char *r_cons_hud_string(const char *s);
__attribute__((visibility("default"))) char *r_cons_hud_file(const char *f);

__attribute__((visibility("default"))) const char *r_cons_get_buffer(void);
__attribute__((visibility("default"))) int r_cons_get_buffer_len(void);
__attribute__((visibility("default"))) void r_cons_grep_help(void);
__attribute__((visibility("default"))) void r_cons_grep_parsecmd(char *cmd, const char *quotestr);
__attribute__((visibility("default"))) char * r_cons_grep_strip(char *cmd, const char *quotestr);
__attribute__((visibility("default"))) void r_cons_grep_process(char * grep);
__attribute__((visibility("default"))) int r_cons_grep_line(char *buf, int len);
__attribute__((visibility("default"))) void r_cons_grepbuf(void);

__attribute__((visibility("default"))) void r_cons_rgb(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
__attribute__((visibility("default"))) void r_cons_rgb_fgbg(unsigned char r, unsigned char g, unsigned char b, unsigned char R, unsigned char G, unsigned char B);
__attribute__((visibility("default"))) void r_cons_rgb_init(void);
__attribute__((visibility("default"))) char *r_cons_rgb_str_mode(RConsColorMode mode, char *outstr, size_t sz, RColor *rcolor);
__attribute__((visibility("default"))) char *r_cons_rgb_str(char *outstr, size_t sz, RColor *rcolor);
__attribute__((visibility("default"))) char *r_cons_rgb_str_off(char *outstr, size_t sz, unsigned long long off);
__attribute__((visibility("default"))) void r_cons_color(int fg, int r, int g, int b);

__attribute__((visibility("default"))) RColor r_cons_color_random(unsigned char alpha);
__attribute__((visibility("default"))) void r_cons_invert(int set, int color);
__attribute__((visibility("default"))) _Bool r_cons_yesno(int def, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) char *r_cons_input(const char *msg);
__attribute__((visibility("default"))) char *r_cons_password(const char *msg);
__attribute__((visibility("default"))) _Bool r_cons_set_cup(_Bool enable);
__attribute__((visibility("default"))) void r_cons_column(int c);
__attribute__((visibility("default"))) int r_cons_get_column(void);
__attribute__((visibility("default"))) char *r_cons_message(const char *msg);
__attribute__((visibility("default"))) void r_cons_set_title(const char *str);
__attribute__((visibility("default"))) _Bool r_cons_enable_mouse(const _Bool enable);
__attribute__((visibility("default"))) void r_cons_enable_highlight(const _Bool enable);
__attribute__((visibility("default"))) void r_cons_bind(RConsBind *bind);
__attribute__((visibility("default"))) const char* r_cons_get_rune(const unsigned char ch);



typedef struct {
 int w;
 int h;
 unsigned char *buf;
 size_t buf_size;
} RConsPixel;

__attribute__((visibility("default"))) RConsPixel *r_cons_pixel_new(int w, int h);
__attribute__((visibility("default"))) void r_cons_pixel_free(RConsPixel *p);
__attribute__((visibility("default"))) void r_cons_pixel_flush(RConsPixel *p, int sx, int sy);
__attribute__((visibility("default"))) char *r_cons_pixel_drain(RConsPixel *p);
__attribute__((visibility("default"))) unsigned char r_cons_pixel_get(RConsPixel *p, int x, int y);
__attribute__((visibility("default"))) void r_cons_pixel_set(RConsPixel *p, int x, int y, unsigned char v);
__attribute__((visibility("default"))) void r_cons_pixel_sets(RConsPixel *p, int x, int y, const char *s);
__attribute__((visibility("default"))) void r_cons_pixel_fill(RConsPixel *p, int _x, int _y, int w, int h, int v);
__attribute__((visibility("default"))) char *r_cons_pixel_tostring(RConsPixel *p);
# 1003 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_cons.h" 3 4
typedef struct r_selection_widget_t {
 const char **options;
 int options_len;
 int selection;
 int w, h;
 int scroll;
 _Bool complete_common;
 _Bool direction;
} RSelWidget;

typedef struct r_line_hist_t {
 char **data;
 char *match;
 int size;
 int index;
 int top;
 int autosave;
 _Bool do_setup_match;
} RLineHistory;

typedef struct r_line_buffer_t {
 char data[4096];
 int index;
 int length;
} RLineBuffer;

typedef struct r_hud_t {
 int current_entry_n;
 int top_entry_n;
 char activate;
 int vi;
} RLineHud;

typedef struct r_line_t RLine;
typedef struct r_line_comp_t RLineCompletion;

typedef enum { R_LINE_PROMPT_DEFAULT, R_LINE_PROMPT_OFFSET, R_LINE_PROMPT_FILE } RLinePromptType;

typedef int (*RLineCompletionCb)(RLineCompletion *completion, RLineBuffer *buf, RLinePromptType prompt_type, void *user);

struct r_line_comp_t {
 _Bool opt;
 size_t args_limit;
 _Bool quit;
 RPVector args;
 RLineCompletionCb run;
 void *run_user;
};

typedef char* (*RLineEditorCb)(void *core, const char *str);
typedef int (*RLineHistoryUpCb)(RLine* line);
typedef int (*RLineHistoryDownCb)(RLine* line);

struct r_line_t {
 RLineCompletion completion;
 RLineBuffer buffer;
 RLineHistory history;
 RSelWidget *sel_widget;

 RLineHistoryUpCb cb_history_up;
 RLineHistoryDownCb cb_history_down;
 RLineEditorCb cb_editor;

 RConsFunctionKey cb_fkey;

 _Bool echo;
 char *prompt;
 RList *kill_ring;
 int kill_ring_ptr;
 char *clipboard;
 _Bool disable;
 void *user;
 _Bool histfilter;
 int (*hist_up)(void *user);
 int (*hist_down)(void *user);
 char *contents;
 _Bool zerosep;
 _Bool enable_vi_mode;
 int vi_mode;
 _Bool prompt_mode;
 RLinePromptType prompt_type;
 int offset_hist_index;
 int file_hist_index;
 RLineHud *hud;
 RList *sdbshell_hist;
 RListIter *sdbshell_hist_iter;
 int vtmode;
};



__attribute__((visibility("default"))) RLine *r_line_new(void);
__attribute__((visibility("default"))) RLine *r_line_singleton(void);
__attribute__((visibility("default"))) void r_line_free(void);
__attribute__((visibility("default"))) char *r_line_get_prompt(void);
__attribute__((visibility("default"))) void r_line_set_prompt(const char *prompt);
__attribute__((visibility("default"))) int r_line_dietline_init(void);
__attribute__((visibility("default"))) void r_line_clipboard_push (const char *str);
__attribute__((visibility("default"))) void r_line_hist_free(void);

typedef int (RLineReadCallback)(void *user, const char *line);
__attribute__((visibility("default"))) const char *r_line_readline(void);
__attribute__((visibility("default"))) const char *r_line_readline_cb(RLineReadCallback cb, void *user);

__attribute__((visibility("default"))) int r_line_hist_load(const char *file);
__attribute__((visibility("default"))) int r_line_hist_add(const char *line);
__attribute__((visibility("default"))) _Bool r_line_hist_save(const char *file);
__attribute__((visibility("default"))) int r_line_hist_label(const char *label, void (*cb)(const char*));
__attribute__((visibility("default"))) void r_line_label_show(void);
__attribute__((visibility("default"))) int r_line_hist_list(void);
__attribute__((visibility("default"))) const char *r_line_hist_get(int n);

__attribute__((visibility("default"))) int r_line_set_hist_callback(RLine *line, RLineHistoryUpCb cb_up, RLineHistoryDownCb cb_down);
__attribute__((visibility("default"))) int r_line_hist_cmd_up(RLine *line);
__attribute__((visibility("default"))) int r_line_hist_cmd_down(RLine *line);

__attribute__((visibility("default"))) void r_line_completion_init(RLineCompletion *completion, size_t args_limit);
__attribute__((visibility("default"))) void r_line_completion_fini(RLineCompletion *completion);
__attribute__((visibility("default"))) void r_line_completion_push(RLineCompletion *completion, const char *str);
__attribute__((visibility("default"))) void r_line_completion_set(RLineCompletion *completion, int argc, const char **argv);
__attribute__((visibility("default"))) void r_line_completion_clear(RLineCompletion *completion);





typedef int (*RPanelsMenuCallback)(void *user);
typedef struct r_panels_menu_item {
 int n_sub, selectedIndex;
 char *name;
 struct r_panels_menu_item **sub;
 RPanelsMenuCallback cb;
 RPanel *p;
} RPanelsMenuItem;

typedef struct r_panels_menu_t {
 RPanelsMenuItem *root;
 RPanelsMenuItem **history;
 int depth;
 int n_refresh;
 RPanel **refreshPanels;
} RPanelsMenu;

typedef enum {
 PANEL_MODE_DEFAULT,
 PANEL_MODE_MENU,
 PANEL_MODE_ZOOM,
 PANEL_MODE_WINDOW,
 PANEL_MODE_HELP
} RPanelsMode;

typedef enum {
 PANEL_FUN_SNOW,
 PANEL_FUN_SAKURA,
 PANEL_FUN_NOFUN
} RPanelsFun;

typedef enum {
 PANEL_LAYOUT_DEFAULT_STATIC = 0,
 PANEL_LAYOUT_DEFAULT_DYNAMIC = 1
} RPanelsLayout;

typedef struct {
 int x;
 int y;
 _Bool stuck;
} RPanelsSnow;

typedef struct {
 RStrBuf *data;
 RPanelPos pos;
 int idx;
 int offset;
} RModal;

typedef struct r_panels_t {
 RConsCanvas *can;
 RPanel **panel;
 int n_panels;
 int columnWidth;
 int curnode;
 int mouse_orig_x;
 int mouse_orig_y;
 _Bool autoUpdate;
 _Bool mouse_on_edge_x;
 _Bool mouse_on_edge_y;
 RPanelsMenu *panels_menu;
 Sdb *db;
 Sdb *rotate_db;
 Sdb *modal_db;
 HtPP *mht;
 RPanelsMode mode;
 RPanelsFun fun;
 RPanelsMode prevMode;
 RPanelsLayout layout;
 RList *snows;
 char *name;
} RPanels;

typedef enum {
 DEFAULT,
 ROTATE,
 DEL,
 QUIT,
} RPanelsRootState;

typedef struct r_panels_root_t {
 int n_panels;
 int cur_panels;
 Sdb *pdc_caches;
 Sdb *cur_pdc_cache;
 RPanels **panels;
 RPanelsRootState root_state;
} RPanelsRoot;
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_diff.h" 2 3 4





__attribute__((visibility("default"))) const char *r_diff_version(void);
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_diff.h" 3 4
typedef struct r_diff_op_t {

 unsigned long long a_off;
 const unsigned char *a_buf;
 unsigned int a_len;


 unsigned long long b_off;
 const unsigned char *b_buf;
 unsigned int b_len;
} RDiffOp;



typedef struct r_diff_t {
 unsigned long long off_a;
 unsigned long long off_b;
 int delta;
 void *user;
 _Bool verbose;
 int type;
 char *diff_cmd;
 int (*callback)(struct r_diff_t *diff, void *user, RDiffOp *op);
} RDiff;

typedef enum {
 LEVEND,
 LEVNOP,
 LEVSUB,
 LEVADD,
 LEVDEL
} RLevOp;

typedef struct r_lev_buf {
 void *buf;
 unsigned int len;
} RLevBuf;
typedef _Bool (*RLevMatches)(RLevBuf *a, RLevBuf *b, unsigned int ia, unsigned int ib);

typedef int (*RDiffCallback) (RDiff *diff, void *user, RDiffOp *op);

typedef struct r_diffchar_t {
 const unsigned char *align_a;
 const unsigned char *align_b;
 size_t len_buf;
 size_t start_align;
} RDiffChar;



__attribute__((visibility("default"))) RDiff *r_diff_new(void);
__attribute__((visibility("default"))) RDiff *r_diff_new_from(unsigned long long off_a, unsigned long long off_b);
__attribute__((visibility("default"))) void r_diff_free(RDiff *d);

__attribute__((visibility("default"))) int r_diff_buffers(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb);
__attribute__((visibility("default"))) int r_diff_buffers_static(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);
__attribute__((visibility("default"))) int r_diff_buffers_radiff(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);
__attribute__((visibility("default"))) int r_diff_buffers_delta(RDiff *diff, const unsigned char *sa, int la, const unsigned char *sb, int lb);
__attribute__((visibility("default"))) int r_diff_buffers(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb);
__attribute__((visibility("default"))) char *r_diff_buffers_to_string(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);
__attribute__((visibility("default"))) int r_diff_set_callback(RDiff *d, RDiffCallback callback, void *user);
__attribute__((visibility("default"))) _Bool r_diff_buffers_distance(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb, unsigned int *distance, double *similarity);
__attribute__((visibility("default"))) _Bool r_diff_buffers_distance_myers(RDiff *diff, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb, unsigned int *distance, double *similarity);
__attribute__((visibility("default"))) _Bool r_diff_buffers_distance_levenshtein(RDiff *d, const unsigned char *a, unsigned int la, const unsigned char *b, unsigned int lb, unsigned int *distance, double *similarity);
__attribute__((visibility("default"))) char *r_diff_buffers_unified(RDiff *d, const unsigned char *a, int la, const unsigned char *b, int lb);

__attribute__((visibility("default"))) int r_diff_lines(const char *file1, const char *sa, int la, const char *file2, const char *sb, int lb);
__attribute__((visibility("default"))) int r_diff_set_delta(RDiff *d, int delta);
__attribute__((visibility("default"))) int r_diff_gdiff(const char *file1, const char *file2, int rad, int va);

__attribute__((visibility("default"))) RDiffChar *r_diffchar_new(const unsigned char *a, const unsigned char *b);
__attribute__((visibility("default"))) void r_diffchar_print(RDiffChar *diffchar);
__attribute__((visibility("default"))) void r_diffchar_free(RDiffChar *diffchar);
__attribute__((visibility("default"))) int r_diff_levenshtein_path(RLevBuf *bufa, RLevBuf *bufb, unsigned int maxdst, RLevMatches levdiff, RLevOp **chgs);
# 55 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_punycode.h" 1 3 4







__attribute__((visibility("default"))) char *r_punycode_encode(const unsigned char *src, int srclen, int *dstlen);
__attribute__((visibility("default"))) char *r_punycode_decode(const char *src, int srclen, int *dstlen);
# 56 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_queue.h" 1 3 4







typedef struct r_queue_t {
 void **elems;
 unsigned int capacity;
 unsigned int front;
 int rear;
 unsigned int size;
} RQueue;

__attribute__((visibility("default"))) RQueue *r_queue_new(int n);
__attribute__((visibility("default"))) void r_queue_free(RQueue *q);
__attribute__((visibility("default"))) int r_queue_enqueue(RQueue *q, void *el);
__attribute__((visibility("default"))) void *r_queue_dequeue(RQueue *q);
__attribute__((visibility("default"))) int r_queue_is_empty(RQueue *q);
# 57 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_range.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_range.h" 3 4
typedef struct r_range_item_t {
 unsigned long long fr;
 unsigned long long to;
 unsigned char *data;
 int datalen;
} RRangeItem;

typedef struct r_range_t {
 int count;
 int changed;
 RList *ranges;
} RRange;

__attribute__((visibility("default"))) RRange *r_range_new(void);
__attribute__((visibility("default"))) RRange *r_range_new_from_string(const char *string);
__attribute__((visibility("default"))) RRange *r_range_free(RRange *r);
__attribute__((visibility("default"))) RRangeItem *r_range_item_get(RRange *r, unsigned long long addr);
__attribute__((visibility("default"))) unsigned long long r_range_size(RRange *r);
__attribute__((visibility("default"))) int r_range_add_from_string(RRange *rgs, const char *string);
__attribute__((visibility("default"))) RRangeItem *r_range_add(RRange *rgs, unsigned long long from, unsigned long long to, int rw);
__attribute__((visibility("default"))) int r_range_sub(RRange *rgs, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) void r_range_merge(RRange *rgs, RRange *r);
__attribute__((visibility("default"))) int r_range_contains(RRange *rgs, unsigned long long addr);
__attribute__((visibility("default"))) int r_range_sort(RRange *rgs);
__attribute__((visibility("default"))) void r_range_percent(RRange *rgs);
__attribute__((visibility("default"))) int r_range_list(RRange *rgs, int rad);
__attribute__((visibility("default"))) int r_range_get_n(RRange *rgs, int n, unsigned long long *from, unsigned long long *to);
__attribute__((visibility("default"))) RRange *r_range_inverse(RRange *rgs, unsigned long long from, unsigned long long to, int flags);
__attribute__((visibility("default"))) int r_range_overlap(unsigned long long a0, unsigned long long a1, unsigned long long b0, unsigned long long b1, int *d);
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sandbox.h" 1 3 4
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_spaces.h" 1 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_spaces.h" 3 4
typedef struct r_space_t {
 char *name;
} RSpace;

typedef enum {
 R_SPACE_EVENT_COUNT = 1,
 R_SPACE_EVENT_RENAME,
 R_SPACE_EVENT_UNSET,
} RSpaceEventType;

typedef struct r_space_event_t {
 union {
  struct {
   const RSpace *space;
  } count;
  struct {
   const RSpace *space;
  } unset;
  struct {
   const RSpace *space;
   const char *oldname;
   const char *newname;
  } rename;
 } data;
 int res;
} RSpaceEvent;

typedef struct r_spaces_t {
 const char *name;
 RSpace *current;
 RRBTree *spaces;
 RList *spacestack;
 REvent *event;
} RSpaces;


__attribute__((visibility("default"))) RSpaces *r_spaces_new(const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_init(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) void r_spaces_fini(RSpaces *sp);

__attribute__((visibility("default"))) void r_spaces_free(RSpaces *sp);

__attribute__((visibility("default"))) void r_spaces_purge(RSpaces *sp);

__attribute__((visibility("default"))) RSpace *r_spaces_get(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) RSpace *r_spaces_add(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) RSpace *r_spaces_set(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_unset(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_rename(RSpaces *sp, const char *oname, const char *nname);

__attribute__((visibility("default"))) int r_spaces_count(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_push(RSpaces *sp, const char *name);

__attribute__((visibility("default"))) _Bool r_spaces_pop(RSpaces *sp);

static inline RSpace *r_spaces_current(RSpaces *sp) {
 return sp->current;
}

static inline const char *r_spaces_current_name(RSpaces *sp) {
 return sp->current? sp->current->name: "*";
}

static inline _Bool r_spaces_is_empty(RSpaces *sp) {
 return !!r_crbtree_first_node (sp->spaces);
}

typedef RRBNode RSpaceIter;
# 61 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_stack.h" 1 3 4
# 62 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_ascii_table.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_ascii_table.h" 3 4
__attribute__((visibility("default"))) const char *ret_ascii_table(void);
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strbuf.h" 1 3 4
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strpool.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_strpool.h" 3 4
typedef struct {
 char *str;
 int len;
 int size;
} RStrpool;

__attribute__((visibility("default"))) RStrpool* r_strpool_new(int sz);
__attribute__((visibility("default"))) char *r_strpool_alloc(RStrpool *p, int l);
__attribute__((visibility("default"))) int r_strpool_memcat(RStrpool *p, const char *s, int len);
__attribute__((visibility("default"))) int r_strpool_ansi_chop(RStrpool *p, int n);
__attribute__((visibility("default"))) int r_strpool_append(RStrpool *p, const char *s);
__attribute__((visibility("default"))) void r_strpool_free(RStrpool *p);
__attribute__((visibility("default"))) int r_strpool_fit(RStrpool *p);
__attribute__((visibility("default"))) char *r_strpool_get(RStrpool *p, int index);
__attribute__((visibility("default"))) char *r_strpool_get_i(RStrpool *p, int index);
__attribute__((visibility("default"))) int r_strpool_get_index(RStrpool *p, const char *s);
__attribute__((visibility("default"))) char *r_strpool_next(RStrpool *p, int index);
__attribute__((visibility("default"))) char *r_strpool_slice(RStrpool *p, int index);
__attribute__((visibility("default"))) char *r_strpool_empty(RStrpool *p);
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_constpool.h" 1 3 4
# 67 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_sys.h" 1 3 4
# 68 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_tree.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_queue.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_tree.h" 2 3 4





struct r_tree_t;

typedef struct r_tree_node_t {
 struct r_tree_node_t *parent;
 struct r_tree_t *tree;
 RList *children;
 unsigned int n_children;
 int depth;
 RListFree free;
 void *data;
} RTreeNode;

typedef struct r_tree_t {
 RTreeNode *root;
} RTree;

typedef struct r_tree_visitor_t {
 void (*pre_visit)(RTreeNode *, struct r_tree_visitor_t *);
 void (*post_visit)(RTreeNode *, struct r_tree_visitor_t *);
 void (*discover_child)(RTreeNode *, struct r_tree_visitor_t *);
 void *data;
} RTreeVisitor;
typedef void (*RTreeNodeVisitCb)(RTreeNode *n, RTreeVisitor *vis);

__attribute__((visibility("default"))) RTree *r_tree_new(void);
__attribute__((visibility("default"))) RTreeNode *r_tree_add_node(RTree *t, RTreeNode *node, void *child_data);
__attribute__((visibility("default"))) void r_tree_reset(RTree *t);
__attribute__((visibility("default"))) void r_tree_free(RTree *t);
__attribute__((visibility("default"))) void r_tree_dfs(RTree *t, RTreeVisitor *vis);
__attribute__((visibility("default"))) void r_tree_bfs(RTree *t, RTreeVisitor *vis);
# 69 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_uleb128.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_uleb128.h" 3 4
__attribute__((visibility("default"))) const unsigned char *r_uleb128(const unsigned char *data, int datalen, unsigned long long *v, const char **error);
__attribute__((visibility("default"))) const unsigned char *r_uleb128_decode(const unsigned char *data, int *datalen, unsigned long long *v);
__attribute__((visibility("default"))) int r_uleb128_len(const unsigned char *data, int size);
__attribute__((visibility("default"))) unsigned char *r_uleb128_encode(const unsigned long long s, int *len);
__attribute__((visibility("default"))) const unsigned char *r_leb128(const unsigned char *data, int datalen, long long *v);
__attribute__((visibility("default"))) long long r_sleb128(const unsigned char **data, const unsigned char *end);
__attribute__((visibility("default"))) size_t read_u32_leb128(const unsigned char *p, const unsigned char *max, unsigned int *out_val);
__attribute__((visibility("default"))) size_t read_i32_leb128(const unsigned char *p, const unsigned char *max, int *out_val);
__attribute__((visibility("default"))) size_t read_u64_leb128(const unsigned char *p, const unsigned char *max, unsigned long long *out_val);
__attribute__((visibility("default"))) size_t read_i64_leb128(const unsigned char *p, const unsigned char *max, long long *out_val);
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 2 3 4





typedef struct { unsigned int from, to; const char *name; } RUtfBlock;


typedef unsigned int RRune;
__attribute__((visibility("default"))) int r_utf8_encode(unsigned char *ptr, const RRune ch);
__attribute__((visibility("default"))) int r_utf8_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf8_encode_str(const RRune *str, unsigned char *dst, const int dst_length);
__attribute__((visibility("default"))) int r_utf8_size(const unsigned char *ptr);
__attribute__((visibility("default"))) int r_utf8_strlen(const unsigned char *str);
__attribute__((visibility("default"))) int r_isprint(const RRune c);
__attribute__((visibility("default"))) char *r_utf16_to_utf8_l(const wchar_t *wc, int len);
__attribute__((visibility("default"))) const char *r_utf_block_name(int idx);
__attribute__((visibility("default"))) wchar_t *r_utf8_to_utf16_l(const char *cstring, int len);
__attribute__((visibility("default"))) int r_utf_block_idx (RRune ch);
__attribute__((visibility("default"))) int *r_utf_block_list (const unsigned char *str, int len, int **freq_list);
__attribute__((visibility("default"))) RStrEnc r_utf_bom_encoding(const unsigned char *ptr, int ptrlen);
# 71 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf16.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf16.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf8.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf16.h" 2 3 4

__attribute__((visibility("default"))) int r_utf16_decode(const unsigned char *ptr, int ptrlen, RRune *ch, _Bool bigendian);
__attribute__((visibility("default"))) int r_utf16le_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf16be_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf16le_encode(unsigned char *ptr, RRune ch);
# 72 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf32.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_utf32.h" 3 4
__attribute__((visibility("default"))) int r_utf32_decode(const unsigned char *ptr, int ptrlen, RRune *ch, _Bool bigendian);
__attribute__((visibility("default"))) int r_utf32le_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
__attribute__((visibility("default"))) int r_utf32le_decode(const unsigned char *ptr, int ptrlen, RRune *ch);
# 73 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_idpool.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pool.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_idpool.h" 2 3 4







typedef struct r_id_pool_t {
 unsigned int start_id;
 unsigned int last_id;
 unsigned int next_id;
 RQueue *freed_ids;
} RIDPool;

__attribute__((visibility("default"))) RIDPool *r_id_pool_new(unsigned int start_id, unsigned int last_id);
__attribute__((visibility("default"))) _Bool r_id_pool_grab_id(RIDPool *pool, unsigned int *grabber);
__attribute__((visibility("default"))) _Bool r_id_pool_kick_id(RIDPool *pool, unsigned int kick);
__attribute__((visibility("default"))) void r_id_pool_free(RIDPool *pool);

typedef struct r_id_storage_t {
 RIDPool *pool;
 void **data;
 unsigned int top_id;
 unsigned int size;
} RIDStorage;

typedef _Bool (*RIDStorageForeachCb)(void *user, void *data, unsigned int id);
typedef _Bool (*ROIDStorageCompareCb)(void *in, void *incoming, void *user, int *cmp_res);

__attribute__((visibility("default"))) RIDStorage *r_id_storage_new(unsigned int start_id, unsigned int last_id);
__attribute__((visibility("default"))) _Bool r_id_storage_set(RIDStorage *storage, void *data, unsigned int id);
__attribute__((visibility("default"))) _Bool r_id_storage_add(RIDStorage *storage, void *data, unsigned int *id);
__attribute__((visibility("default"))) void *r_id_storage_get(RIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) _Bool r_id_storage_get_next(RIDStorage *storage, unsigned int *id);
__attribute__((visibility("default"))) _Bool r_id_storage_get_prev(RIDStorage *storage, unsigned int *id);
__attribute__((visibility("default"))) void r_id_storage_delete(RIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void *r_id_storage_take(RIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) _Bool r_id_storage_foreach(RIDStorage *storage, RIDStorageForeachCb cb, void *user);
__attribute__((visibility("default"))) void r_id_storage_free(RIDStorage *storage);
__attribute__((visibility("default"))) RList *r_id_storage_list(RIDStorage *s);
__attribute__((visibility("default"))) _Bool r_id_storage_get_lowest(RIDStorage *storage, unsigned int *id);
__attribute__((visibility("default"))) _Bool r_id_storage_get_highest(RIDStorage *storage, unsigned int *id);

typedef struct r_ordered_id_storage_t {
 unsigned int *permutation;
 unsigned int psize;
 unsigned int ptop;
 RIDStorage *data;
 ROIDStorageCompareCb cmp;
} ROIDStorage;

__attribute__((visibility("default"))) ROIDStorage *r_oids_new(unsigned int start_id, unsigned int last_id);
__attribute__((visibility("default"))) void *r_oids_get(ROIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void *r_oids_oget(ROIDStorage *storage, unsigned int od);
__attribute__((visibility("default"))) _Bool r_oids_get_id(ROIDStorage *storage, unsigned int od, unsigned int *id);
__attribute__((visibility("default"))) _Bool r_oids_get_od(ROIDStorage *storage, unsigned int id, unsigned int *od);
__attribute__((visibility("default"))) _Bool r_oids_to_front(ROIDStorage *storage, const unsigned int id);
__attribute__((visibility("default"))) _Bool r_oids_to_rear(ROIDStorage *storage, const unsigned int id);
__attribute__((visibility("default"))) void r_oids_delete(ROIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void r_oids_odelete(ROIDStorage *st, unsigned int od);
__attribute__((visibility("default"))) void r_oids_free(ROIDStorage *storage);
__attribute__((visibility("default"))) _Bool r_oids_add(ROIDStorage *storage, void *data, unsigned int *id, unsigned int *od);
__attribute__((visibility("default"))) void *r_oids_take(ROIDStorage *storage, unsigned int id);
__attribute__((visibility("default"))) void *r_oids_otake(ROIDStorage *st, unsigned int od);
__attribute__((visibility("default"))) _Bool r_oids_foreach(ROIDStorage* storage, RIDStorageForeachCb cb, void* user);
__attribute__((visibility("default"))) _Bool r_oids_foreach_prev(ROIDStorage* storage, RIDStorageForeachCb cb, void* user);
__attribute__((visibility("default"))) _Bool r_oids_insert(ROIDStorage *storage, void *data, unsigned int *id, unsigned int *od, void *user);
__attribute__((visibility("default"))) _Bool r_oids_sort(ROIDStorage *storage, void *user);
__attribute__((visibility("default"))) unsigned int r_oids_find (ROIDStorage *storage, void *incoming, void *user);
__attribute__((visibility("default"))) void *r_oids_last(ROIDStorage *storage);
__attribute__((visibility("default"))) void *r_oids_first(ROIDStorage *storage);
# 74 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_asn1.h" 1 3 4
# 61 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_asn1.h" 3 4
typedef struct r_asn1_string_t {
 unsigned int length;
 const char *string;
 _Bool allocated;
} RASN1String;

typedef struct r_asn1_list_t {
 unsigned int length;
 struct r_asn1_object_t **objects;
} ASN1List;

typedef struct r_asn1_bin_t {
 unsigned int length;
 unsigned char *binary;
} RASN1Binary;

typedef struct r_asn1_object_t {
 unsigned char klass;
 unsigned char form;
 unsigned char tag;
 const unsigned char *sector;
 unsigned int length;
 unsigned long long offset;
 ASN1List list;
} RASN1Object;


__attribute__((visibility("default"))) RASN1Object *r_asn1_create_object (const unsigned char *buffer, unsigned int length, const unsigned char *start_pointer);
__attribute__((visibility("default"))) RASN1Binary *r_asn1_create_binary (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_create_string (const char *string, _Bool allocated, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_bits (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_utctime (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_time (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_integer (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_string (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_bytes (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_boolean (const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) RASN1String *r_asn1_stringify_oid (const unsigned char* buffer, unsigned int length);

__attribute__((visibility("default"))) void r_asn1_free_object (RASN1Object *object);

__attribute__((visibility("default"))) char *r_asn1_to_string (RASN1Object *object, unsigned int depth, RStrBuf *sb);
__attribute__((visibility("default"))) void r_asn1_free_string (RASN1String *string);
__attribute__((visibility("default"))) void r_asn1_free_binary (RASN1Binary *string);
__attribute__((visibility("default"))) void asn1_setformat (int fmt);
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/pj.h" 1 3 4
# 76 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_x509.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_x509.h" 3 4
typedef struct r_x509_validity_t {
 RASN1String *notBefore;
 RASN1String *notAfter;
} RX509Validity;

typedef struct r_x509_name_t {
 unsigned int length;
 RASN1String **oids;
 RASN1String **names;
} RX509Name;

typedef struct r_x509_algorithmidentifier_t {
 RASN1String *algorithm;
 RASN1String *parameters;
} RX509AlgorithmIdentifier;
# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_x509.h" 3 4
typedef struct r_x509_authoritykeyidentifier_t {
 RASN1Binary *keyIdentifier;
 RX509Name authorityCertIssuer;
 RASN1Binary *authorityCertSerialNumber;
} RX509AuthorityKeyIdentifier;

typedef struct r_x509_subjectpublickeyinfo_t {
 RX509AlgorithmIdentifier algorithm;

 RASN1Binary *subjectPublicKey;


 RASN1Binary *subjectPublicKeyExponent;
 RASN1Binary *subjectPublicKeyModule;
} RX509SubjectPublicKeyInfo;

typedef struct r_x509_extension_t {
 RASN1String *extnID;
 _Bool critical;
 RASN1Binary *extnValue;
} RX509Extension;

typedef struct r_x509_extensions_t {
 unsigned int length;
 RX509Extension **extensions;
} RX509Extensions;

typedef struct r_x509_tbscertificate_t {
 unsigned int version;
 RASN1String *serialNumber;
 RX509AlgorithmIdentifier signature;
 RX509Name issuer;
 RX509Validity validity;
 RX509Name subject;
 RX509SubjectPublicKeyInfo subjectPublicKeyInfo;
 RASN1Binary *issuerUniqueID;
 RASN1Binary *subjectUniqueID;
 RX509Extensions extensions;
} RX509TBSCertificate;

typedef struct r_x509_certificate_t {
 RX509TBSCertificate tbsCertificate;
 RX509AlgorithmIdentifier algorithmIdentifier;
 RASN1Binary *signature;
} RX509Certificate;




typedef struct r_x509_crlentry {
 RASN1Binary *userCertificate;
 RASN1String *revocationDate;
} RX509CRLEntry;

typedef struct r_x509_certificaterevocationlist {
 RX509AlgorithmIdentifier signature;
 RX509Name issuer;
 RASN1String *lastUpdate;
 RASN1String *nextUpdate;
 unsigned int length;
 RX509CRLEntry **revokedCertificates;
} RX509CertificateRevocationList;

__attribute__((visibility("default"))) RX509CertificateRevocationList* r_x509_parse_crl(RASN1Object *object);


__attribute__((visibility("default"))) char *r_x509_crl_to_string(RX509CertificateRevocationList *crl, const char* pad);
__attribute__((visibility("default"))) void r_x509_crl_json(PJ* pj, RX509CertificateRevocationList *crl);

__attribute__((visibility("default"))) RX509Certificate *r_x509_parse_certificate(RASN1Object *object);
__attribute__((visibility("default"))) RX509Certificate *r_x509_parse_certificate2(const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) void r_x509_free_certificate(RX509Certificate* certificate);
__attribute__((visibility("default"))) char *r_x509_certificate_to_string(RX509Certificate* certificate, const char* pad);
__attribute__((visibility("default"))) void r_x509_certificate_json(PJ* pj, RX509Certificate *certificate);
__attribute__((visibility("default"))) void r_x509_certificate_dump(RX509Certificate* cert, const char* pad, RStrBuf *sb);
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_pkcs7.h" 1 3 4







typedef struct r_pkcs7_certificaterevocationlists_t {
 unsigned int length;
 RX509CertificateRevocationList **elements;
} RPKCS7CertificateRevocationLists;

typedef struct r_pkcs7_extendedcertificatesandcertificates_t {
 unsigned int length;
 RX509Certificate **elements;
} RPKCS7ExtendedCertificatesAndCertificates;

typedef struct r_pkcs7_digestalgorithmidentifiers_t {
 unsigned int length;
 RX509AlgorithmIdentifier **elements;
} RPKCS7DigestAlgorithmIdentifiers;

typedef struct r_pkcs7_contentinfo_t {
 RASN1String *contentType;
 RASN1Binary *content;
} RPKCS7ContentInfo;

typedef struct r_pkcs7_issuerandserialnumber_t {
 RX509Name issuer;
 RASN1Binary *serialNumber;
} RPKCS7IssuerAndSerialNumber;

typedef struct r_pkcs7_attribute_t {
 RASN1String *oid;
 RASN1Binary *data;
} RPKCS7Attribute;

typedef struct r_pkcs7_attributes_t {
 unsigned int length;
 RPKCS7Attribute **elements;
} RPKCS7Attributes;

typedef struct r_pkcs7_signerinfo_t {
 unsigned int version;
 RPKCS7IssuerAndSerialNumber issuerAndSerialNumber;
 RX509AlgorithmIdentifier digestAlgorithm;
 RPKCS7Attributes authenticatedAttributes;
 RX509AlgorithmIdentifier digestEncryptionAlgorithm;
 RASN1Binary *encryptedDigest;
 RPKCS7Attributes unauthenticatedAttributes;
} RPKCS7SignerInfo;

typedef struct r_pkcs7_signerinfos_t {
 unsigned int length;
 RPKCS7SignerInfo **elements;
} RPKCS7SignerInfos;

typedef struct r_pkcs7_signeddata_t {
 unsigned int version;
 RPKCS7DigestAlgorithmIdentifiers digestAlgorithms;
 RPKCS7ContentInfo contentInfo;
 RPKCS7ExtendedCertificatesAndCertificates certificates;
 RPKCS7CertificateRevocationLists crls;
 RPKCS7SignerInfos signerinfos;
} RPKCS7SignedData;

typedef struct r_pkcs7_container_t {
 RASN1String *contentType;
 RPKCS7SignedData signedData;
} RCMS;

typedef struct {
 RASN1String *type;
 RASN1Binary *data;
} SpcAttributeTypeAndOptionalValue;

typedef struct {
 RX509AlgorithmIdentifier digestAlgorithm;
 RASN1Binary *digest;
} SpcDigestInfo;

typedef struct {
 SpcAttributeTypeAndOptionalValue data;
 SpcDigestInfo messageDigest;
} SpcIndirectDataContent;

__attribute__((visibility("default"))) RCMS *r_pkcs7_parse_cms(const unsigned char *buffer, unsigned int length);
__attribute__((visibility("default"))) void r_pkcs7_free_cms(RCMS* container);
__attribute__((visibility("default"))) char *r_pkcs7_cms_to_string(RCMS* container);
__attribute__((visibility("default"))) PJ *r_pkcs7_cms_json(RCMS* container);
__attribute__((visibility("default"))) SpcIndirectDataContent *r_pkcs7_parse_spcinfo(RCMS *cms);
__attribute__((visibility("default"))) void r_pkcs7_free_spcinfo(SpcIndirectDataContent *spcinfo);
# 78 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_protobuf.h" 1 3 4







__attribute__((visibility("default"))) char *r_protobuf_decode(const unsigned char* buffer, const unsigned long long size, _Bool debug);
# 79 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_w32.h" 1 3 4
# 81 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_axml.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_axml.h" 3 4
__attribute__((visibility("default"))) char *r_axml_decode(const unsigned char* buffer, const unsigned long long size);
# 82 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 2 3 4






__attribute__((visibility("default"))) const char *r_util_version(void);
# 5 "project/radare2/libr/util/utf8.c" 2


# 6 "project/radare2/libr/util/utf8.c"
static const struct { 
# 6 "project/radare2/libr/util/utf8.c" 3 4
                     unsigned int 
# 6 "project/radare2/libr/util/utf8.c"
                          from, to; } nonprintable_ranges[] = {
 { 0x0000, 0x001F }, { 0x007F, 0x009F }, { 0x034F, 0x034F },
 { 0x0378, 0x0379 }, { 0x037F, 0x0383 }, { 0x038B, 0x038B },
 { 0x038D, 0x038D }, { 0x03A2, 0x03A2 }, { 0x0528, 0x0530 },
 { 0x0557, 0x0558 }, { 0x0560, 0x0560 }, { 0x0588, 0x0588 },
 { 0x058B, 0x058E }, { 0x0590, 0x0590 }, { 0x05C8, 0x05CF },
 { 0x05EB, 0x05EF }, { 0x05F5, 0x0605 }, { 0x061C, 0x061D },
 { 0x06DD, 0x06DD }, { 0x070E, 0x070F }, { 0x074B, 0x074C },
 { 0x07B2, 0x07BF }, { 0x07FB, 0x07FF }, { 0x082E, 0x082F },
 { 0x083F, 0x083F }, { 0x085C, 0x085D }, { 0x085F, 0x089F },
 { 0x08A1, 0x08A1 }, { 0x08AD, 0x08E3 }, { 0x08FF, 0x08FF },
 { 0x0978, 0x0978 }, { 0x0980, 0x0980 }, { 0x0984, 0x0984 },
 { 0x098D, 0x098E }, { 0x0991, 0x0992 }, { 0x09A9, 0x09A9 },
 { 0x09B1, 0x09B1 }, { 0x09B3, 0x09B5 }, { 0x09BA, 0x09BB },
 { 0x09C5, 0x09C6 }, { 0x09C9, 0x09CA }, { 0x09CF, 0x09D6 },
 { 0x09D8, 0x09DB }, { 0x09DE, 0x09DE }, { 0x09E4, 0x09E5 },
 { 0x09FC, 0x0A00 }, { 0x0A04, 0x0A04 }, { 0x0A0B, 0x0A0E },
 { 0x0A11, 0x0A12 }, { 0x0A29, 0x0A29 }, { 0x0A31, 0x0A31 },
 { 0x0A34, 0x0A34 }, { 0x0A37, 0x0A37 }, { 0x0A3A, 0x0A3B },
 { 0x0A3D, 0x0A3D }, { 0x0A43, 0x0A46 }, { 0x0A49, 0x0A4A },
 { 0x0A4E, 0x0A50 }, { 0x0A52, 0x0A58 }, { 0x0A5D, 0x0A5D },
 { 0x0A5F, 0x0A65 }, { 0x0A76, 0x0A80 }, { 0x0A84, 0x0A84 },
 { 0x0A8E, 0x0A8E }, { 0x0A92, 0x0A92 }, { 0x0AA9, 0x0AA9 },
 { 0x0AB1, 0x0AB1 }, { 0x0AB4, 0x0AB4 }, { 0x0ABA, 0x0ABB },
 { 0x0AC6, 0x0AC6 }, { 0x0ACA, 0x0ACA }, { 0x0ACE, 0x0ACF },
 { 0x0AD1, 0x0ADF }, { 0x0AE4, 0x0AE5 }, { 0x0AF2, 0x0B00 },
 { 0x0B04, 0x0B04 }, { 0x0B0D, 0x0B0E }, { 0x0B11, 0x0B12 },
 { 0x0B29, 0x0B29 }, { 0x0B31, 0x0B31 }, { 0x0B34, 0x0B34 },
 { 0x0B3A, 0x0B3B }, { 0x0B45, 0x0B46 }, { 0x0B49, 0x0B4A },
 { 0x0B4E, 0x0B55 }, { 0x0B58, 0x0B5B }, { 0x0B5E, 0x0B5E },
 { 0x0B64, 0x0B65 }, { 0x0B78, 0x0B81 }, { 0x0B84, 0x0B84 },
 { 0x0B8B, 0x0B8D }, { 0x0B91, 0x0B91 }, { 0x0B96, 0x0B98 },
 { 0x0B9B, 0x0B9B }, { 0x0B9D, 0x0B9D }, { 0x0BA0, 0x0BA2 },
 { 0x0BA5, 0x0BA7 }, { 0x0BAB, 0x0BAD }, { 0x0BBA, 0x0BBD },
 { 0x0BC3, 0x0BC5 }, { 0x0BC9, 0x0BC9 }, { 0x0BCE, 0x0BCF },
 { 0x0BD1, 0x0BD6 }, { 0x0BD8, 0x0BE5 }, { 0x0BFB, 0x0C00 },
 { 0x0C04, 0x0C04 }, { 0x0C0D, 0x0C0D }, { 0x0C11, 0x0C11 },
 { 0x0C29, 0x0C29 }, { 0x0C34, 0x0C34 }, { 0x0C3A, 0x0C3C },
 { 0x0C45, 0x0C45 }, { 0x0C49, 0x0C49 }, { 0x0C4E, 0x0C54 },
 { 0x0C57, 0x0C57 }, { 0x0C5A, 0x0C5F }, { 0x0C64, 0x0C65 },
 { 0x0C70, 0x0C77 }, { 0x0C80, 0x0C81 }, { 0x0C84, 0x0C84 },
 { 0x0C8D, 0x0C8D }, { 0x0C91, 0x0C91 }, { 0x0CA9, 0x0CA9 },
 { 0x0CB4, 0x0CB4 }, { 0x0CBA, 0x0CBB }, { 0x0CC5, 0x0CC5 },
 { 0x0CC9, 0x0CC9 }, { 0x0CCE, 0x0CD4 }, { 0x0CD7, 0x0CDD },
 { 0x0CDF, 0x0CDF }, { 0x0CE4, 0x0CE5 }, { 0x0CF0, 0x0CF0 },
 { 0x0CF3, 0x0D01 }, { 0x0D04, 0x0D04 }, { 0x0D0D, 0x0D0D },
 { 0x0D11, 0x0D11 }, { 0x0D3B, 0x0D3C }, { 0x0D45, 0x0D45 },
 { 0x0D49, 0x0D49 }, { 0x0D4F, 0x0D56 }, { 0x0D58, 0x0D5F },
 { 0x0D64, 0x0D65 }, { 0x0D76, 0x0D78 }, { 0x0D80, 0x0D81 },
 { 0x0D84, 0x0D84 }, { 0x0D97, 0x0D99 }, { 0x0DB2, 0x0DB2 },
 { 0x0DBC, 0x0DBC }, { 0x0DBE, 0x0DBF }, { 0x0DC7, 0x0DC9 },
 { 0x0DCB, 0x0DCE }, { 0x0DD5, 0x0DD5 }, { 0x0DD7, 0x0DD7 },
 { 0x0DE0, 0x0DF1 }, { 0x0DF5, 0x0E00 }, { 0x0E3B, 0x0E3E },
 { 0x0E5C, 0x0E80 }, { 0x0E83, 0x0E83 }, { 0x0E85, 0x0E86 },
 { 0x0E89, 0x0E89 }, { 0x0E8B, 0x0E8C }, { 0x0E8E, 0x0E93 },
 { 0x0E98, 0x0E98 }, { 0x0EA0, 0x0EA0 }, { 0x0EA4, 0x0EA4 },
 { 0x0EA6, 0x0EA6 }, { 0x0EA8, 0x0EA9 }, { 0x0EAC, 0x0EAC },
 { 0x0EBA, 0x0EBA }, { 0x0EBE, 0x0EBF }, { 0x0EC5, 0x0EC5 },
 { 0x0EC7, 0x0EC7 }, { 0x0ECE, 0x0ECF }, { 0x0EDA, 0x0EDB },
 { 0x0EE0, 0x0EFF }, { 0x0F48, 0x0F48 }, { 0x0F6D, 0x0F70 },
 { 0x0F98, 0x0F98 }, { 0x0FBD, 0x0FBD }, { 0x0FCD, 0x0FCD },
 { 0x0FDB, 0x0FFF }, { 0x10C6, 0x10C6 }, { 0x10C8, 0x10CC },
 { 0x10CE, 0x10CF }, { 0x115F, 0x1160 }, { 0x1249, 0x1249 },
 { 0x124E, 0x124F }, { 0x1257, 0x1257 }, { 0x1259, 0x1259 },
 { 0x125E, 0x125F }, { 0x1289, 0x1289 }, { 0x128E, 0x128F },
 { 0x12B1, 0x12B1 }, { 0x12B6, 0x12B7 }, { 0x12BF, 0x12BF },
 { 0x12C1, 0x12C1 }, { 0x12C6, 0x12C7 }, { 0x12D7, 0x12D7 },
 { 0x1311, 0x1311 }, { 0x1316, 0x1317 }, { 0x135B, 0x135C },
 { 0x137D, 0x137F }, { 0x139A, 0x139F }, { 0x13F5, 0x13FF },
 { 0x169D, 0x169F }, { 0x16F1, 0x16FF }, { 0x170D, 0x170D },
 { 0x1715, 0x171F }, { 0x1737, 0x173F }, { 0x1754, 0x175F },
 { 0x176D, 0x176D }, { 0x1771, 0x1771 }, { 0x1774, 0x177F },
 { 0x17B4, 0x17B5 }, { 0x17DE, 0x17DF }, { 0x17EA, 0x17EF },
 { 0x17FA, 0x17FF }, { 0x180B, 0x180D }, { 0x180F, 0x180F },
 { 0x181A, 0x181F }, { 0x1878, 0x187F }, { 0x18AB, 0x18AF },
 { 0x18F6, 0x18FF }, { 0x191D, 0x191F }, { 0x192C, 0x192F },
 { 0x193C, 0x193F }, { 0x1941, 0x1943 }, { 0x196E, 0x196F },
 { 0x1975, 0x197F }, { 0x19AC, 0x19AF }, { 0x19CA, 0x19CF },
 { 0x19DB, 0x19DD }, { 0x1A1C, 0x1A1D }, { 0x1A5F, 0x1A5F },
 { 0x1A7D, 0x1A7E }, { 0x1A8A, 0x1A8F }, { 0x1A9A, 0x1A9F },
 { 0x1AAE, 0x1AFF }, { 0x1B4C, 0x1B4F }, { 0x1B7D, 0x1B7F },
 { 0x1BF4, 0x1BFB }, { 0x1C38, 0x1C3A }, { 0x1C4A, 0x1C4C },
 { 0x1C80, 0x1CBF }, { 0x1CC8, 0x1CCF }, { 0x1CF7, 0x1CFF },
 { 0x1DE7, 0x1DFB }, { 0x1F16, 0x1F17 }, { 0x1F1E, 0x1F1F },
 { 0x1F46, 0x1F47 }, { 0x1F4E, 0x1F4F }, { 0x1F58, 0x1F58 },
 { 0x1F5A, 0x1F5A }, { 0x1F5C, 0x1F5C }, { 0x1F5E, 0x1F5E },
 { 0x1F7E, 0x1F7F }, { 0x1FB5, 0x1FB5 }, { 0x1FC5, 0x1FC5 },
 { 0x1FD4, 0x1FD5 }, { 0x1FDC, 0x1FDC }, { 0x1FF0, 0x1FF1 },
 { 0x1FF5, 0x1FF5 }, { 0x1FFF, 0x1FFF }, { 0x200B, 0x200F },
 { 0x202A, 0x202E }, { 0x2060, 0x206F }, { 0x2072, 0x2073 },
 { 0x208F, 0x208F }, { 0x209D, 0x209F }, { 0x20BB, 0x20CF },
 { 0x20F1, 0x20FF }, { 0x218A, 0x218F }, { 0x23F4, 0x23FF },
 { 0x2427, 0x243F }, { 0x244B, 0x245F }, { 0x2700, 0x2700 },
 { 0x2B4D, 0x2B4F }, { 0x2B5A, 0x2BFF }, { 0x2C2F, 0x2C2F },
 { 0x2C5F, 0x2C5F }, { 0x2CF4, 0x2CF8 }, { 0x2D26, 0x2D26 },
 { 0x2D28, 0x2D2C }, { 0x2D2E, 0x2D2F }, { 0x2D68, 0x2D6E },
 { 0x2D71, 0x2D7E }, { 0x2D97, 0x2D9F }, { 0x2DA7, 0x2DA7 },
 { 0x2DAF, 0x2DAF }, { 0x2DB7, 0x2DB7 }, { 0x2DBF, 0x2DBF },
 { 0x2DC7, 0x2DC7 }, { 0x2DCF, 0x2DCF }, { 0x2DD7, 0x2DD7 },
 { 0x2DDF, 0x2DDF }, { 0x2E3C, 0x2E7F }, { 0x2E9A, 0x2E9A },
 { 0x2EF4, 0x2EFF }, { 0x2FD6, 0x2FEF }, { 0x2FFC, 0x2FFF },
 { 0x3040, 0x3040 }, { 0x3097, 0x3098 }, { 0x3100, 0x3104 },
 { 0x312E, 0x3130 }, { 0x3164, 0x3164 }, { 0x318F, 0x318F },
 { 0x31BB, 0x31BF }, { 0x31E4, 0x31EF }, { 0x321F, 0x321F },
 { 0x32FF, 0x32FF }, { 0x4DB6, 0x4DBF }, { 0x9FCD, 0x9FFF },
 { 0xA48D, 0xA48F }, { 0xA4C7, 0xA4CF }, { 0xA62C, 0xA63F },
 { 0xA698, 0xA69E }, { 0xA6F8, 0xA6FF }, { 0xA78F, 0xA78F },
 { 0xA794, 0xA79F }, { 0xA7AB, 0xA7F7 }, { 0xA82C, 0xA82F },
 { 0xA83A, 0xA83F }, { 0xA878, 0xA87F }, { 0xA8C5, 0xA8CD },
 { 0xA8DA, 0xA8DF }, { 0xA8FC, 0xA8FF }, { 0xA954, 0xA95E },
 { 0xA97D, 0xA97F }, { 0xA9CE, 0xA9CE }, { 0xA9DA, 0xA9DD },
 { 0xA9E0, 0xA9FF }, { 0xAA37, 0xAA3F }, { 0xAA4E, 0xAA4F },
 { 0xAA5A, 0xAA5B }, { 0xAA7C, 0xAA7F }, { 0xAAC3, 0xAADA },
 { 0xAAF7, 0xAB00 }, { 0xAB07, 0xAB08 }, { 0xAB0F, 0xAB10 },
 { 0xAB17, 0xAB1F }, { 0xAB27, 0xAB27 }, { 0xAB2F, 0xABBF },
 { 0xABEE, 0xABEF }, { 0xABFA, 0xABFF }, { 0xD7A4, 0xD7AF },
 { 0xD7C7, 0xD7CA }, { 0xD7FC, 0xDFFF }, { 0xFA6E, 0xFA6F },
 { 0xFADA, 0xFAFF }, { 0xFB07, 0xFB12 }, { 0xFB18, 0xFB1C },
 { 0xFB37, 0xFB37 }, { 0xFB3D, 0xFB3D }, { 0xFB3F, 0xFB3F },
 { 0xFB42, 0xFB42 }, { 0xFB45, 0xFB45 }, { 0xFBC2, 0xFBD2 },
 { 0xFD40, 0xFD4F }, { 0xFD90, 0xFD91 }, { 0xFDC8, 0xFDEF },
 { 0xFDFE, 0xFE0F }, { 0xFE1A, 0xFE1F }, { 0xFE27, 0xFE2F },
 { 0xFE53, 0xFE53 }, { 0xFE67, 0xFE67 }, { 0xFE6C, 0xFE6F },
 { 0xFE75, 0xFE75 }, { 0xFEFD, 0xFEFF }, { 0xFF00, 0xFF00 },
 { 0xFFA0, 0xFFA0 }, { 0xFFBF, 0xFFC1 }, { 0xFFC8, 0xFFC9 },
 { 0xFFD0, 0xFFD1 }, { 0xFFD8, 0xFFD9 }, { 0xFFDD, 0xFFDF },
 { 0xFFE7, 0xFFE7 }, { 0xFFEF, 0xFFFB }, { 0xFFFE, 0xFFFF },
 { 0x1000C, 0x1000C }, { 0x10027, 0x10027 }, { 0x1003B, 0x1003B },
 { 0x1003E, 0x1003E }, { 0x1004E, 0x1004F }, { 0x1005E, 0x1007F },
 { 0x100FB, 0x100FF }, { 0x10103, 0x10106 }, { 0x10134, 0x10136 },
 { 0x1018B, 0x1018F }, { 0x1019C, 0x101CF }, { 0x101FE, 0x1027F },
 { 0x1029D, 0x1029F }, { 0x102D1, 0x102FF }, { 0x1031F, 0x1031F },
 { 0x10324, 0x1032F }, { 0x1034B, 0x1037F }, { 0x1039E, 0x1039E },
 { 0x103C4, 0x103C7 }, { 0x103D6, 0x103FF }, { 0x1049E, 0x1049F },
 { 0x104AA, 0x107FF }, { 0x10806, 0x10807 }, { 0x10809, 0x10809 },
 { 0x10836, 0x10836 }, { 0x10839, 0x1083B }, { 0x1083D, 0x1083E },
 { 0x10856, 0x10856 }, { 0x10860, 0x108FF }, { 0x1091C, 0x1091E },
 { 0x1093A, 0x1093E }, { 0x10940, 0x1097F }, { 0x109B8, 0x109BD },
 { 0x109C0, 0x109FF }, { 0x10A04, 0x10A04 }, { 0x10A07, 0x10A0B },
 { 0x10A14, 0x10A14 }, { 0x10A18, 0x10A18 }, { 0x10A34, 0x10A37 },
 { 0x10A3B, 0x10A3E }, { 0x10A48, 0x10A4F }, { 0x10A59, 0x10A5F },
 { 0x10A80, 0x10AFF }, { 0x10B36, 0x10B38 }, { 0x10B56, 0x10B57 },
 { 0x10B73, 0x10B77 }, { 0x10B80, 0x10BFF }, { 0x10C49, 0x10E5F },
 { 0x10E7F, 0x10FFF }, { 0x1104E, 0x11051 }, { 0x11070, 0x1107F },
 { 0x110BD, 0x110BD }, { 0x110C2, 0x110CF }, { 0x110E9, 0x110EF },
 { 0x110FA, 0x110FF }, { 0x11135, 0x11135 }, { 0x11144, 0x1117F },
 { 0x111C9, 0x111CF }, { 0x111DA, 0x1167F }, { 0x116B8, 0x116BF },
 { 0x116CA, 0x11FFF }, { 0x1236F, 0x123FF }, { 0x12463, 0x1246F },
 { 0x12474, 0x12FFF }, { 0x1342F, 0x167FF }, { 0x16A39, 0x16EFF },
 { 0x16F45, 0x16F4F }, { 0x16F7F, 0x16F8E }, { 0x16FA0, 0x1AFFF },
 { 0x1B002, 0x1CFFF }, { 0x1D0F6, 0x1D0FF }, { 0x1D127, 0x1D128 },
 { 0x1D173, 0x1D17A }, { 0x1D1DE, 0x1D1FF }, { 0x1D246, 0x1D2FF },
 { 0x1D357, 0x1D35F }, { 0x1D372, 0x1D3FF }, { 0x1D455, 0x1D455 },
 { 0x1D49D, 0x1D49D }, { 0x1D4A0, 0x1D4A1 }, { 0x1D4A3, 0x1D4A4 },
 { 0x1D4A7, 0x1D4A8 }, { 0x1D4AD, 0x1D4AD }, { 0x1D4BA, 0x1D4BA },
 { 0x1D4BC, 0x1D4BC }, { 0x1D4C4, 0x1D4C4 }, { 0x1D506, 0x1D506 },
 { 0x1D50B, 0x1D50C }, { 0x1D515, 0x1D515 }, { 0x1D51D, 0x1D51D },
 { 0x1D53A, 0x1D53A }, { 0x1D53F, 0x1D53F }, { 0x1D545, 0x1D545 },
 { 0x1D547, 0x1D549 }, { 0x1D551, 0x1D551 }, { 0x1D6A6, 0x1D6A7 },
 { 0x1D7CC, 0x1D7CD }, { 0x1D800, 0x1EDFF }, { 0x1EE04, 0x1EE04 },
 { 0x1EE20, 0x1EE20 }, { 0x1EE23, 0x1EE23 }, { 0x1EE25, 0x1EE26 },
 { 0x1EE28, 0x1EE28 }, { 0x1EE33, 0x1EE33 }, { 0x1EE38, 0x1EE38 },
 { 0x1EE3A, 0x1EE3A }, { 0x1EE3C, 0x1EE41 }, { 0x1EE43, 0x1EE46 },
 { 0x1EE48, 0x1EE48 }, { 0x1EE4A, 0x1EE4A }, { 0x1EE4C, 0x1EE4C },
 { 0x1EE50, 0x1EE50 }, { 0x1EE53, 0x1EE53 }, { 0x1EE55, 0x1EE56 },
 { 0x1EE58, 0x1EE58 }, { 0x1EE5A, 0x1EE5A }, { 0x1EE5C, 0x1EE5C },
 { 0x1EE5E, 0x1EE5E }, { 0x1EE60, 0x1EE60 }, { 0x1EE63, 0x1EE63 },
 { 0x1EE65, 0x1EE66 }, { 0x1EE6B, 0x1EE6B }, { 0x1EE73, 0x1EE73 },
 { 0x1EE78, 0x1EE78 }, { 0x1EE7D, 0x1EE7D }, { 0x1EE7F, 0x1EE7F },
 { 0x1EE8A, 0x1EE8A }, { 0x1EE9C, 0x1EEA0 }, { 0x1EEA4, 0x1EEA4 },
 { 0x1EEAA, 0x1EEAA }, { 0x1EEBC, 0x1EEEF }, { 0x1EEF2, 0x1EFFF },
 { 0x1F02C, 0x1F02F }, { 0x1F094, 0x1F09F }, { 0x1F0AF, 0x1F0B0 },
 { 0x1F0BF, 0x1F0C0 }, { 0x1F0D0, 0x1F0D0 }, { 0x1F0E0, 0x1F0FF },
 { 0x1F10B, 0x1F10F }, { 0x1F12F, 0x1F12F }, { 0x1F16C, 0x1F16F },
 { 0x1F19B, 0x1F1E5 }, { 0x1F203, 0x1F20F }, { 0x1F23B, 0x1F23F },
 { 0x1F249, 0x1F24F }, { 0x1F252, 0x1F2FF }, { 0x1F321, 0x1F32F },
 { 0x1F336, 0x1F336 }, { 0x1F37D, 0x1F37F }, { 0x1F394, 0x1F39F },
 { 0x1F3C5, 0x1F3C5 }, { 0x1F3CB, 0x1F3DF }, { 0x1F3F1, 0x1F3FF },
 { 0x1F43F, 0x1F43F }, { 0x1F441, 0x1F441 }, { 0x1F4F8, 0x1F4F8 },
 { 0x1F4FD, 0x1F4FF }, { 0x1F53E, 0x1F53F }, { 0x1F544, 0x1F54F },
 { 0x1F568, 0x1F5FA }, { 0x1F641, 0x1F644 }, { 0x1F650, 0x1F67F },
 { 0x1F6C6, 0x1F6FF }, { 0x1F774, 0x1FFFF }, { 0x2A6D7, 0x2A6FF },
 { 0x2B735, 0x2B73F }, { 0x2B81E, 0x2F7FF }, { 0x2FA1E, 0xF0000 },
 { 0xFFFFE, 0xFFFFF }, { 0x10FFFE, 0x10FFFF }, { 0x110000, 0xFFFFFFFF }
};
static const int nonprintable_ranges_count = sizeof (nonprintable_ranges) / sizeof (nonprintable_ranges[0]);

static const int lastUtfBlock = 281;

const RUtfBlock r_utf_blocks[] = {
 { 0x0000, 0x007F, "Basic Latin" },
 { 0x0080, 0x00FF, "Latin-1 Supplement" },
 { 0x0100, 0x017F, "Latin Extended-A" },
 { 0x0180, 0x024F, "Latin Extended-B" },
 { 0x0250, 0x02AF, "IPA Extensions" },
 { 0x02B0, 0x02FF, "Spacing Modifier Letters" },
 { 0x0300, 0x036F, "Combining Diacritical Marks" },
 { 0x0370, 0x03FF, "Greek and Coptic" },
 { 0x0400, 0x04FF, "Cyrillic" },
 { 0x0500, 0x052F, "Cyrillic Supplement" },
 { 0x0530, 0x058F, "Armenian" },
 { 0x0590, 0x05FF, "Hebrew" },
 { 0x0600, 0x06FF, "Arabic" },
 { 0x0700, 0x074F, "Syriac" },
 { 0x0750, 0x077F, "Arabic Supplement" },
 { 0x0780, 0x07BF, "Thaana" },
 { 0x07C0, 0x07FF, "NKo" },
 { 0x0800, 0x083F, "Samaritan" },
 { 0x0840, 0x085F, "Mandaic" },
 { 0x0860, 0x086F, "Syriac Supplement" },
 { 0x08A0, 0x08FF, "Arabic Extended-A" },
 { 0x0900, 0x097F, "Devanagari" },
 { 0x0980, 0x09FF, "Bengali" },
 { 0x0A00, 0x0A7F, "Gurmukhi" },
 { 0x0A80, 0x0AFF, "Gujarati" },
 { 0x0B00, 0x0B7F, "Oriya" },
 { 0x0B80, 0x0BFF, "Tamil" },
 { 0x0C00, 0x0C7F, "Telugu" },
 { 0x0C80, 0x0CFF, "Kannada" },
 { 0x0D00, 0x0D7F, "Malayalam" },
 { 0x0D80, 0x0DFF, "Sinhala" },
 { 0x0E00, 0x0E7F, "Thai" },
 { 0x0E80, 0x0EFF, "Lao" },
 { 0x0F00, 0x0FFF, "Tibetan" },
 { 0x1000, 0x109F, "Myanmar" },
 { 0x10A0, 0x10FF, "Georgian" },
 { 0x1100, 0x11FF, "Hangul Jamo" },
 { 0x1200, 0x137F, "Ethiopic" },
 { 0x1380, 0x139F, "Ethiopic Supplement" },
 { 0x13A0, 0x13FF, "Cherokee" },
 { 0x1400, 0x167F, "Unified Canadian Aboriginal Syllabics" },
 { 0x1680, 0x169F, "Ogham" },
 { 0x16A0, 0x16FF, "Runic" },
 { 0x1700, 0x171F, "Tagalog" },
 { 0x1720, 0x173F, "Hanunoo" },
 { 0x1740, 0x175F, "Buhid" },
 { 0x1760, 0x177F, "Tagbanwa" },
 { 0x1780, 0x17FF, "Khmer" },
 { 0x1800, 0x18AF, "Mongolian" },
 { 0x18B0, 0x18FF, "Unified Canadian Aboriginal Syllabics Extended" },
 { 0x1900, 0x194F, "Limbu" },
 { 0x1950, 0x197F, "Tai Le" },
 { 0x1980, 0x19DF, "New Tai Lue" },
 { 0x19E0, 0x19FF, "Khmer Symbols" },
 { 0x1A00, 0x1A1F, "Buginese" },
 { 0x1A20, 0x1AAF, "Tai Tham" },
 { 0x1AB0, 0x1AFF, "Combining Diacritical Marks Extended" },
 { 0x1B00, 0x1B7F, "Balinese" },
 { 0x1B80, 0x1BBF, "Sundanese" },
 { 0x1BC0, 0x1BFF, "Batak" },
 { 0x1C00, 0x1C4F, "Lepcha" },
 { 0x1C50, 0x1C7F, "Ol Chiki" },
 { 0x1C80, 0x1C8F, "Cyrillic Extended-C" },
 { 0x1CC0, 0x1CCF, "Sundanese Supplement" },
 { 0x1CD0, 0x1CFF, "Vedic Extensions" },
 { 0x1D00, 0x1D7F, "Phonetic Extensions" },
 { 0x1D80, 0x1DBF, "Phonetic Extensions Supplement" },
 { 0x1DC0, 0x1DFF, "Combining Diacritical Marks Supplement" },
 { 0x1E00, 0x1EFF, "Latin Extended Additional" },
 { 0x1F00, 0x1FFF, "Greek Extended" },
 { 0x2000, 0x206F, "General Punctuation" },
 { 0x2070, 0x209F, "Superscripts and Subscripts" },
 { 0x20A0, 0x20CF, "Currency Symbols" },
 { 0x20D0, 0x20FF, "Combining Diacritical Marks for Symbols" },
 { 0x2100, 0x214F, "Letterlike Symbols" },
 { 0x2150, 0x218F, "Number Forms" },
 { 0x2190, 0x21FF, "Arrows" },
 { 0x2200, 0x22FF, "Mathematical Operators" },
 { 0x2300, 0x23FF, "Miscellaneous Technical" },
 { 0x2400, 0x243F, "Control Pictures" },
 { 0x2440, 0x245F, "Optical Character Recognition" },
 { 0x2460, 0x24FF, "Enclosed Alphanumerics" },
 { 0x2500, 0x257F, "Box Drawing" },
 { 0x2580, 0x259F, "Block Elements" },
 { 0x25A0, 0x25FF, "Geometric Shapes" },
 { 0x2600, 0x26FF, "Miscellaneous Symbols" },
 { 0x2700, 0x27BF, "Dingbats" },
 { 0x27C0, 0x27EF, "Miscellaneous Mathematical Symbols-A" },
 { 0x27F0, 0x27FF, "Supplemental Arrows-A" },
 { 0x2800, 0x28FF, "Braille Patterns" },
 { 0x2900, 0x297F, "Supplemental Arrows-B" },
 { 0x2980, 0x29FF, "Miscellaneous Mathematical Symbols-B" },
 { 0x2A00, 0x2AFF, "Supplemental Mathematical Operators" },
 { 0x2B00, 0x2BFF, "Miscellaneous Symbols and Arrows" },
 { 0x2C00, 0x2C5F, "Glagolitic" },
 { 0x2C60, 0x2C7F, "Latin Extended-C" },
 { 0x2C80, 0x2CFF, "Coptic" },
 { 0x2D00, 0x2D2F, "Georgian Supplement" },
 { 0x2D30, 0x2D7F, "Tifinagh" },
 { 0x2D80, 0x2DDF, "Ethiopic Extended" },
 { 0x2DE0, 0x2DFF, "Cyrillic Extended-A" },
 { 0x2E00, 0x2E7F, "Supplemental Punctuation" },
 { 0x2E80, 0x2EFF, "CJK Radicals Supplement" },
 { 0x2F00, 0x2FDF, "Kangxi Radicals" },
 { 0x2FF0, 0x2FFF, "Ideographic Description Characters" },
 { 0x3000, 0x303F, "CJK Symbols and Punctuation" },
 { 0x3040, 0x309F, "Hiragana" },
 { 0x30A0, 0x30FF, "Katakana" },
 { 0x3100, 0x312F, "Bopomofo" },
 { 0x3130, 0x318F, "Hangul Compatibility Jamo" },
 { 0x3190, 0x319F, "Kanbun" },
 { 0x31A0, 0x31BF, "Bopomofo Extended" },
 { 0x31C0, 0x31EF, "CJK Strokes" },
 { 0x31F0, 0x31FF, "Katakana Phonetic Extensions" },
 { 0x3200, 0x32FF, "Enclosed CJK Letters and Months" },
 { 0x3300, 0x33FF, "CJK Compatibility" },
 { 0x3400, 0x4DBF, "CJK Unified Ideographs Extension A" },
 { 0x4DC0, 0x4DFF, "Yijing Hexagram Symbols" },
 { 0x4E00, 0x9FFF, "CJK Unified Ideographs" },
 { 0xA000, 0xA48F, "Yi Syllables" },
 { 0xA490, 0xA4CF, "Yi Radicals" },
 { 0xA4D0, 0xA4FF, "Lisu" },
 { 0xA500, 0xA63F, "Vai" },
 { 0xA640, 0xA69F, "Cyrillic Extended-B" },
 { 0xA6A0, 0xA6FF, "Bamum" },
 { 0xA700, 0xA71F, "Modifier Tone Letters" },
 { 0xA720, 0xA7FF, "Latin Extended-D" },
 { 0xA800, 0xA82F, "Syloti Nagri" },
 { 0xA830, 0xA83F, "Common Indic Number Forms" },
 { 0xA840, 0xA87F, "Phags-pa" },
 { 0xA880, 0xA8DF, "Saurashtra" },
 { 0xA8E0, 0xA8FF, "Devanagari Extended" },
 { 0xA900, 0xA92F, "Kayah Li" },
 { 0xA930, 0xA95F, "Rejang" },
 { 0xA960, 0xA97F, "Hangul Jamo Extended-A" },
 { 0xA980, 0xA9DF, "Javanese" },
 { 0xA9E0, 0xA9FF, "Myanmar Extended-B" },
 { 0xAA00, 0xAA5F, "Cham" },
 { 0xAA60, 0xAA7F, "Myanmar Extended-A" },
 { 0xAA80, 0xAADF, "Tai Viet" },
 { 0xAAE0, 0xAAFF, "Meetei Mayek Extensions" },
 { 0xAB00, 0xAB2F, "Ethiopic Extended-A" },
 { 0xAB30, 0xAB6F, "Latin Extended-E" },
 { 0xAB70, 0xABBF, "Cherokee Supplement" },
 { 0xABC0, 0xABFF, "Meetei Mayek" },
 { 0xAC00, 0xD7AF, "Hangul Syllables" },
 { 0xD7B0, 0xD7FF, "Hangul Jamo Extended-B" },
 { 0xD800, 0xDB7F, "High Surrogates" },
 { 0xDB80, 0xDBFF, "High Private Use Surrogates" },
 { 0xDC00, 0xDFFF, "Low Surrogates" },
 { 0xE000, 0xF8FF, "Private Use Area" },
 { 0xF900, 0xFAFF, "CJK Compatibility Ideographs" },
 { 0xFB00, 0xFB4F, "Alphabetic Presentation Forms" },
 { 0xFB50, 0xFDFF, "Arabic Presentation Forms-A" },
 { 0xFE00, 0xFE0F, "Variation Selectors" },
 { 0xFE10, 0xFE1F, "Vertical Forms" },
 { 0xFE20, 0xFE2F, "Combining Half Marks" },
 { 0xFE30, 0xFE4F, "CJK Compatibility Forms" },
 { 0xFE50, 0xFE6F, "Small Form Variants" },
 { 0xFE70, 0xFEFF, "Arabic Presentation Forms-B" },
 { 0xFF00, 0xFFEF, "Halfwidth and Fullwidth Forms" },
 { 0xFFF0, 0xFFFF, "Specials" },
 { 0x10000, 0x1007F, "Linear B Syllabary" },
 { 0x10080, 0x100FF, "Linear B Ideograms" },
 { 0x10100, 0x1013F, "Aegean Numbers" },
 { 0x10140, 0x1018F, "Ancient Greek Numbers" },
 { 0x10190, 0x101CF, "Ancient Symbols" },
 { 0x101D0, 0x101FF, "Phaistos Disc" },
 { 0x10280, 0x1029F, "Lycian" },
 { 0x102A0, 0x102DF, "Carian" },
 { 0x102E0, 0x102FF, "Coptic Epact Numbers" },
 { 0x10300, 0x1032F, "Old Italic" },
 { 0x10330, 0x1034F, "Gothic" },
 { 0x10350, 0x1037F, "Old Permic" },
 { 0x10380, 0x1039F, "Ugaritic" },
 { 0x103A0, 0x103DF, "Old Persian" },
 { 0x10400, 0x1044F, "Deseret" },
 { 0x10450, 0x1047F, "Shavian" },
 { 0x10480, 0x104AF, "Osmanya" },
 { 0x104B0, 0x104FF, "Osage" },
 { 0x10500, 0x1052F, "Elbasan" },
 { 0x10530, 0x1056F, "Caucasian Albanian" },
 { 0x10600, 0x1077F, "Linear A" },
 { 0x10800, 0x1083F, "Cypriot Syllabary" },
 { 0x10840, 0x1085F, "Imperial Aramaic" },
 { 0x10860, 0x1087F, "Palmyrene" },
 { 0x10880, 0x108AF, "Nabataean" },
 { 0x108E0, 0x108FF, "Hatran" },
 { 0x10900, 0x1091F, "Phoenician" },
 { 0x10920, 0x1093F, "Lydian" },
 { 0x10980, 0x1099F, "Meroitic Hieroglyphs" },
 { 0x109A0, 0x109FF, "Meroitic Cursive" },
 { 0x10A00, 0x10A5F, "Kharoshthi" },
 { 0x10A60, 0x10A7F, "Old South Arabian" },
 { 0x10A80, 0x10A9F, "Old North Arabian" },
 { 0x10AC0, 0x10AFF, "Manichaean" },
 { 0x10B00, 0x10B3F, "Avestan" },
 { 0x10B40, 0x10B5F, "Inscriptional Parthian" },
 { 0x10B60, 0x10B7F, "Inscriptional Pahlavi" },
 { 0x10B80, 0x10BAF, "Psalter Pahlavi" },
 { 0x10C00, 0x10C4F, "Old Turkic" },
 { 0x10C80, 0x10CFF, "Old Hungarian" },
 { 0x10E60, 0x10E7F, "Rumi Numeral Symbols" },
 { 0x11000, 0x1107F, "Brahmi" },
 { 0x11080, 0x110CF, "Kaithi" },
 { 0x110D0, 0x110FF, "Sora Sompeng" },
 { 0x11100, 0x1114F, "Chakma" },
 { 0x11150, 0x1117F, "Mahajani" },
 { 0x11180, 0x111DF, "Sharada" },
 { 0x111E0, 0x111FF, "Sinhala Archaic Numbers" },
 { 0x11200, 0x1124F, "Khojki" },
 { 0x11280, 0x112AF, "Multani" },
 { 0x112B0, 0x112FF, "Khudawadi" },
 { 0x11300, 0x1137F, "Grantha" },
 { 0x11400, 0x1147F, "Newa" },
 { 0x11480, 0x114DF, "Tirhuta" },
 { 0x11580, 0x115FF, "Siddham" },
 { 0x11600, 0x1165F, "Modi" },
 { 0x11660, 0x1167F, "Mongolian Supplement" },
 { 0x11680, 0x116CF, "Takri" },
 { 0x11700, 0x1173F, "Ahom" },
 { 0x118A0, 0x118FF, "Warang Citi" },
 { 0x11A00, 0x11A4F, "Zanabazar Square" },
 { 0x11A50, 0x11AAF, "Soyombo" },
 { 0x11AC0, 0x11AFF, "Pau Cin Hau" },
 { 0x11C00, 0x11C6F, "Bhaiksuki" },
 { 0x11C70, 0x11CBF, "Marchen" },
 { 0x11D00, 0x11D5F, "Masaram Gondi" },
 { 0x12000, 0x123FF, "Cuneiform" },
 { 0x12400, 0x1247F, "Cuneiform Numbers and Punctuation" },
 { 0x12480, 0x1254F, "Early Dynastic Cuneiform" },
 { 0x13000, 0x1342F, "Egyptian Hieroglyphs" },
 { 0x14400, 0x1467F, "Anatolian Hieroglyphs" },
 { 0x16800, 0x16A3F, "Bamum Supplement" },
 { 0x16A40, 0x16A6F, "Mro" },
 { 0x16AD0, 0x16AFF, "Bassa Vah" },
 { 0x16B00, 0x16B8F, "Pahawh Hmong" },
 { 0x16F00, 0x16F9F, "Miao" },
 { 0x16FE0, 0x16FFF, "Ideographic Symbols and Punctuation" },
 { 0x17000, 0x187FF, "Tangut" },
 { 0x18800, 0x18AFF, "Tangut Components" },
 { 0x1B000, 0x1B0FF, "Kana Supplement" },
 { 0x1B100, 0x1B12F, "Kana Extended-A" },
 { 0x1B170, 0x1B2FF, "Nushu" },
 { 0x1BC00, 0x1BC9F, "Duployan" },
 { 0x1BCA0, 0x1BCAF, "Shorthand Format Controls" },
 { 0x1D000, 0x1D0FF, "Byzantine Musical Symbols" },
 { 0x1D100, 0x1D1FF, "Musical Symbols" },
 { 0x1D200, 0x1D24F, "Ancient Greek Musical Notation" },
 { 0x1D300, 0x1D35F, "Tai Xuan Jing Symbols" },
 { 0x1D360, 0x1D37F, "Counting Rod Numerals" },
 { 0x1D400, 0x1D7FF, "Mathematical Alphanumeric Symbols" },
 { 0x1D800, 0x1DAAF, "Sutton SignWriting" },
 { 0x1E000, 0x1E02F, "Glagolitic Supplement" },
 { 0x1E800, 0x1E8DF, "Mende Kikakui" },
 { 0x1E900, 0x1E95F, "Adlam" },
 { 0x1EE00, 0x1EEFF, "Arabic Mathematical Alphabetic Symbols" },
 { 0x1F000, 0x1F02F, "Mahjong Tiles" },
 { 0x1F030, 0x1F09F, "Domino Tiles" },
 { 0x1F0A0, 0x1F0FF, "Playing Cards" },
 { 0x1F100, 0x1F1FF, "Enclosed Alphanumeric Supplement" },
 { 0x1F200, 0x1F2FF, "Enclosed Ideographic Supplement" },
 { 0x1F300, 0x1F5FF, "Miscellaneous Symbols and Pictographs" },
 { 0x1F600, 0x1F64F, "Emoticons" },
 { 0x1F650, 0x1F67F, "Ornamental Dingbats" },
 { 0x1F680, 0x1F6FF, "Transport and Map Symbols" },
 { 0x1F700, 0x1F77F, "Alchemical Symbols" },
 { 0x1F780, 0x1F7FF, "Geometric Shapes Extended" },
 { 0x1F800, 0x1F8FF, "Supplemental Arrows-C" },
 { 0x1F900, 0x1F9FF, "Supplemental Symbols and Pictographs" },
 { 0x20000, 0x2A6DF, "CJK Unified Ideographs Extension B" },
 { 0x2A700, 0x2B73F, "CJK Unified Ideographs Extension C" },
 { 0x2B740, 0x2B81F, "CJK Unified Ideographs Extension D" },
 { 0x2B820, 0x2CEAF, "CJK Unified Ideographs Extension E" },
 { 0x2CEB0, 0x2EBEF, "CJK Unified Ideographs Extension F" },
 { 0x2F800, 0x2FA1F, "CJK Compatibility Ideographs Supplement" },
 { 0xE0000, 0xE007F, "Tags" },
 { 0xE0100, 0xE01EF, "Variation Selectors Supplement" },
 { 0xF0000, 0xFFFFF, "Supplementary Private Use Area-A" },
 { 0x100000, 0x10FFFF, "Supplementary Private Use Area-B" },
 { 0x110000, 0xFFFFFFFF, "No_Block" }
};


# 479 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 479 "project/radare2/libr/util/utf8.c"
     const char *r_utf_block_name(int idx) {
 if (idx < 0 || idx >= lastUtfBlock) {
  return 
# 481 "project/radare2/libr/util/utf8.c" 3 4
        ((void *)0)
# 481 "project/radare2/libr/util/utf8.c"
            ;
 }
 return r_utf_blocks[idx].name;
}





# 489 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 489 "project/radare2/libr/util/utf8.c"
     int r_utf8_decode(const 
# 489 "project/radare2/libr/util/utf8.c" 3 4
                             unsigned char 
# 489 "project/radare2/libr/util/utf8.c"
                                 *ptr, int ptrlen, RRune *ch) {
 if (ptrlen < 1) {
  return 0;
 }
 if (ptr[0] < 0x80) {
  if (ch) {
   *ch = (
# 495 "project/radare2/libr/util/utf8.c" 3 4
         unsigned int
# 495 "project/radare2/libr/util/utf8.c"
             )ptr[0];
  }
  return 1;
 } else if (ptrlen>1 && (ptr[0]&0xe0) == 0xc0 && (ptr[1]&0xc0) == 0x80) {
  if (ch) {
   *ch = (ptr[0] & 0x1f) << 6 | (ptr[1] & 0x3f);
  }
  return 2;
 } else if (ptrlen>2 && (ptr[0]&0xf0) == 0xe0 && (ptr[1]&0xc0) == 0x80 && (ptr[2]&0xc0) == 0x80) {
  if (ch) {
   *ch = (ptr[0] & 0xf) << 12 | (ptr[1] & 0x3f) << 6 | (ptr[2] & 0x3f);
  }
  return 3;
 } else if (ptrlen>3 && (ptr[0]&0xf8) == 0xf0 && (ptr[1]&0xc0) == 0x80 && (ptr[2]&0xc0) == 0x80 && (ptr[3]&0xc0) == 0x80) {
  if (ch) {
   *ch = (ptr[0] & 7) << 18 | (ptr[1] & 0x3f) << 12 | (ptr[2] & 0x3f) << 6 | (ptr[3] & 0x3f);
  }
  return 4;
 }
 return 0;
}



# 518 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 518 "project/radare2/libr/util/utf8.c"
     int r_utf8_encode(
# 518 "project/radare2/libr/util/utf8.c" 3 4
                       unsigned char 
# 518 "project/radare2/libr/util/utf8.c"
                           *ptr, const RRune ch) {
 if (ch < 0x80) {
  ptr[0] = (
# 520 "project/radare2/libr/util/utf8.c" 3 4
           unsigned char
# 520 "project/radare2/libr/util/utf8.c"
              )ch;
  return 1;
 }
 else if (ch < 0x800) {
  ptr[0] = 0xc0 | (ch >> 6);
  ptr[1] = 0x80 | (ch & 0x3f);
  return 2;
 }
 else if (ch < 0x10000) {
  ptr[0] = 0xe0 | (ch >> 12);
  ptr[1] = 0x80 | ((ch >> 6) & 0x3f);
  ptr[2] = 0x80 | (ch & 0x3f);
  return 3;
 }
 else if (ch < 0x200000) {
  ptr[0] = 0xf0 | (ch >> 18);
  ptr[1] = 0x80 | ((ch >> 12) & 0x3f);
  ptr[2] = 0x80 | ((ch >> 6) & 0x3f);
  ptr[3] = 0x80 | (ch & 0x3f );
  return 4;
 }
 return 0;
}



# 545 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 545 "project/radare2/libr/util/utf8.c"
     int r_utf8_encode_str(const RRune *str, 
# 545 "project/radare2/libr/util/utf8.c" 3 4
                                             unsigned char 
# 545 "project/radare2/libr/util/utf8.c"
                                                 *dst, const int dst_length) {
 int i, pos = 0;

 if (!str || !dst) {
  return -1;
 }

 for (i = 0; i < sizeof (str) - 1 && str[i] && pos < dst_length - 1; i++) {
  pos += r_utf8_encode (&dst[pos], str[i]);
 }

 dst[pos++] = '\0';
 return pos;
}



# 561 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 561 "project/radare2/libr/util/utf8.c"
     int r_utf8_size(const 
# 561 "project/radare2/libr/util/utf8.c" 3 4
                           unsigned char 
# 561 "project/radare2/libr/util/utf8.c"
                               *ptr) {
 const int utf8_size[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 };
 return (ptr[0]&0x80) ? utf8_size[ptr[0]^0x80] : 1;
}


# 575 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 575 "project/radare2/libr/util/utf8.c"
     int r_utf8_strlen(const 
# 575 "project/radare2/libr/util/utf8.c" 3 4
                             unsigned char 
# 575 "project/radare2/libr/util/utf8.c"
                                 *str) {
 int i, len = 0;

 for (i = 0; str[i]; i++) {
  if ((str[i] & 0xc0) != 0x80) {
   len++;
  }
 }

 return len;
}


# 587 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 587 "project/radare2/libr/util/utf8.c"
     int r_isprint(const RRune c) {

 if (c < 0x34F) {





  return !( c <= 0x1F || ( c >= 0x7F && c <= 0x9F));
 }

 const int last = nonprintable_ranges_count;

 int low = 0;
 int hi = last - 1;

 do {
  int mid = (low + hi) >> 1;
  if (c >= nonprintable_ranges[mid].from && c <= nonprintable_ranges[mid].to) {
   return 
# 606 "project/radare2/libr/util/utf8.c" 3 4
         0
# 606 "project/radare2/libr/util/utf8.c"
              ;
  }
  if (mid < last && c > nonprintable_ranges[mid].to) {
   low = mid + 1;
  }
  if (mid < last && c < nonprintable_ranges[mid].from) {
   hi = mid - 1;
  }
 } while (low <= hi);

 return 
# 616 "project/radare2/libr/util/utf8.c" 3 4
       1
# 616 "project/radare2/libr/util/utf8.c"
           ;
}
# 720 "project/radare2/libr/util/utf8.c"

# 720 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 720 "project/radare2/libr/util/utf8.c"
     int r_utf_block_idx(RRune ch) {
 const int last = (sizeof (r_utf_blocks) / sizeof (r_utf_blocks[0]));
 int low, hi, mid;

 low = 0;
 hi = last - 1;

 do {
  mid = (low + hi) >> 1;
  if (ch >= r_utf_blocks[mid].from && ch <= r_utf_blocks[mid].to) {
   return mid;
  }
  if (mid < last && ch > r_utf_blocks[mid].to) {
   low = mid + 1;
  }
  if (mid < last && ch < r_utf_blocks[mid].from) {
   hi = mid - 1;
  }
 } while (low <= hi);

 return (sizeof (r_utf_blocks) / sizeof (r_utf_blocks[0])) - 1;
}



# 744 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 744 "project/radare2/libr/util/utf8.c"
     int *r_utf_block_list(const 
# 744 "project/radare2/libr/util/utf8.c" 3 4
                                 unsigned char 
# 744 "project/radare2/libr/util/utf8.c"
                                     *str, int len, int **freq_list) {
 if (!str) {
  return 
# 746 "project/radare2/libr/util/utf8.c" 3 4
        ((void *)0)
# 746 "project/radare2/libr/util/utf8.c"
            ;
 }
 if (len < 0) {
  len = strlen ((const char *)str);
 }
 static int block_freq[(sizeof (r_utf_blocks) / sizeof (r_utf_blocks[0]))] = {0};
 int *list = 
# 752 "project/radare2/libr/util/utf8.c" 3 4
            (
# 752 "project/radare2/libr/util/utf8.c"
            int
# 752 "project/radare2/libr/util/utf8.c" 3 4
            *)malloc(sizeof(
# 752 "project/radare2/libr/util/utf8.c"
            int
# 752 "project/radare2/libr/util/utf8.c" 3 4
            )*(
# 752 "project/radare2/libr/util/utf8.c"
            len + 1
# 752 "project/radare2/libr/util/utf8.c" 3 4
            ))
# 752 "project/radare2/libr/util/utf8.c"
                                 ;
 if (!list) {
  return 
# 754 "project/radare2/libr/util/utf8.c" 3 4
        ((void *)0)
# 754 "project/radare2/libr/util/utf8.c"
            ;
 }
 int *freq_list_ptr = 
# 756 "project/radare2/libr/util/utf8.c" 3 4
                     ((void *)0)
# 756 "project/radare2/libr/util/utf8.c"
                         ;
 if (freq_list) {
  *freq_list = 
# 758 "project/radare2/libr/util/utf8.c" 3 4
              (
# 758 "project/radare2/libr/util/utf8.c"
              int
# 758 "project/radare2/libr/util/utf8.c" 3 4
              *)malloc(sizeof(
# 758 "project/radare2/libr/util/utf8.c"
              int
# 758 "project/radare2/libr/util/utf8.c" 3 4
              )*(
# 758 "project/radare2/libr/util/utf8.c"
              len + 1
# 758 "project/radare2/libr/util/utf8.c" 3 4
              ))
# 758 "project/radare2/libr/util/utf8.c"
                                   ;
  if (!*freq_list) {
   free (list);
   return 
# 761 "project/radare2/libr/util/utf8.c" 3 4
         ((void *)0)
# 761 "project/radare2/libr/util/utf8.c"
             ;
  }
  freq_list_ptr = *freq_list;
 }
 int *list_ptr = list;
 const 
# 766 "project/radare2/libr/util/utf8.c" 3 4
      unsigned char 
# 766 "project/radare2/libr/util/utf8.c"
          *str_ptr = str;
 const 
# 767 "project/radare2/libr/util/utf8.c" 3 4
      unsigned char 
# 767 "project/radare2/libr/util/utf8.c"
          *str_end = str + len;
 RRune ch;
 while (str_ptr < str_end) {
  int block_idx;
  int ch_bytes = r_utf8_decode (str_ptr, str_end - str_ptr, &ch);
  if (!ch_bytes) {
   block_idx = (sizeof (r_utf_blocks) / sizeof (r_utf_blocks[0])) - 1;
   ch_bytes = 1;
  } else {
   block_idx = r_utf_block_idx (ch);
  }
  if (!block_freq[block_idx]) {
   *list_ptr = block_idx;
   list_ptr++;
  }
  block_freq[block_idx]++;
  str_ptr += ch_bytes;
 }
 *list_ptr = -1;
 if (freq_list_ptr) {
  for (list_ptr = list; *list_ptr != -1; list_ptr++) {
   *freq_list_ptr = block_freq[*list_ptr];
   freq_list_ptr++;
  }
  *freq_list_ptr = -1;
 }
 for (list_ptr = list; *list_ptr != -1; list_ptr++) {
  block_freq[*list_ptr] = 0;
 }
 return list;
}


# 799 "project/radare2/libr/util/utf8.c" 3 4
__attribute__((visibility("default"))) 
# 799 "project/radare2/libr/util/utf8.c"
     RStrEnc r_utf_bom_encoding(const 
# 799 "project/radare2/libr/util/utf8.c" 3 4
                                      unsigned char 
# 799 "project/radare2/libr/util/utf8.c"
                                          *ptr, int ptrlen) {
 if (ptrlen > 3) {
  if (ptr[0] == 0xff && ptr[1] == 0xfe && !ptr[2] && !ptr[3]) {
   return R_STRING_ENC_UTF32LE;
  }
  if (!ptr[0] && !ptr[1] && ptr[2] == 0xfe && ptr[3] == 0xff) {
   return R_STRING_ENC_UTF32BE;
  }
 }
 if (ptrlen > 2) {
  if (ptr[0] == 0xef && ptr[1] == 0xbb && ptr[2] == 0xbf) {
   return R_STRING_ENC_UTF8;
  }
 }
 if (ptrlen > 1) {
  if (ptr[0] == 0xff && ptr[1] == 0xfe) {
   return R_STRING_ENC_UTF16LE;
  }
  if (ptr[0] == 0xfe && ptr[1] == 0xff) {
   return R_STRING_ENC_UTF16BE;
  }
 }
 return R_STRING_ENC_GUESS;
}
