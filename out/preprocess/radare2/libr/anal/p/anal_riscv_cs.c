# 0 "project/radare2/libr/anal/p/anal_riscv_cs.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/anal/p/anal_riscv_cs.c"


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_asm.h" 1 3 4





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
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_asm.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 1 3 4



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
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pu.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pu.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 1 3 4
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_inc.h" 3 4
typedef struct ht_pu_kv {
 void * key;
 unsigned long long value;
 unsigned int key_len;
 unsigned int value_len;
} HtPUKv;

typedef void (*HtPUKvFreeFunc)(HtPUKv *);
typedef void * (*HtPUDupKey)(const void *);
typedef unsigned long long (*HtPUDupValue)(const unsigned long long);
typedef unsigned int (*HtPUCalcSizeK)(const void *);
typedef unsigned int (*HtPUCalcSizeV)(const unsigned long long);
typedef unsigned int (*HtPUHashFunction)(const void *);
typedef int (*HtPUListComparator)(const void *, const void *);
typedef _Bool (*HtPUForeachCallback)(void *user, const void *, const unsigned long long);

typedef struct ht_pu_bucket_t {
 HtPUKv *arr;
 unsigned int count;
} HtPUBucket;


typedef struct ht_pu_options_t {
 HtPUListComparator cmp;
 HtPUHashFunction hashfn;
 HtPUDupKey dupkey;
 HtPUDupValue dupvalue;
 HtPUCalcSizeK calcsizeK;
 HtPUCalcSizeV calcsizeV;
 HtPUKvFreeFunc freefn;
 size_t elem_size;
} HtPUOptions;


typedef struct ht_pu_t {
 unsigned int size;
 unsigned int count;
 HtPUBucket* table;
 unsigned int prime_idx;
 HtPUOptions opt;
} HtPU;


__attribute__ ((visibility ("default"))) HtPU* ht_pu_new_opt(HtPUOptions *opt);

__attribute__ ((visibility ("default"))) void ht_pu_free(HtPU* ht);

__attribute__ ((visibility ("default"))) _Bool ht_pu_insert(HtPU* ht, const void * key, unsigned long long value);

__attribute__ ((visibility ("default"))) _Bool ht_pu_update(HtPU* ht, const void * key, unsigned long long value);

__attribute__ ((visibility ("default"))) _Bool ht_pu_update_key(HtPU* ht, const void * old_key, const void * new_key);

__attribute__ ((visibility ("default"))) _Bool ht_pu_delete(HtPU* ht, const void * key);

__attribute__ ((visibility ("default"))) unsigned long long ht_pu_find(HtPU* ht, const void * key, _Bool* found);




__attribute__ ((visibility ("default"))) void ht_pu_foreach(HtPU *ht, HtPUForeachCallback cb, void *user);

__attribute__ ((visibility ("default"))) HtPUKv* ht_pu_find_kv(HtPU* ht, const void * key, _Bool* found);
__attribute__ ((visibility ("default"))) _Bool ht_pu_insert_kv(HtPU *ht, HtPUKv *kv, _Bool update);
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_pu.h" 2 3 4

__attribute__ ((visibility ("default"))) HtPU* ht_pu_new0(void);
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bind.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bind.h" 3 4
typedef int (*RCoreCmd)(void *core, const char *cmd);
typedef int (*RCoreCmdF)(void *user, const char *fmt, ...);
typedef int (*RCoreDebugBpHit)(void *core, void *bp);
typedef void (*RCoreDebugSyscallHit)(void *core);
typedef char* (*RCoreCmdStr)(void *core, const char *cmd);
typedef char* (*RCoreCmdStrF)(void *core, const char *cmd, ...);
typedef void (*RCorePuts)(const char *cmd);
typedef void (*RCoreSetArchBits)(void *core, const char *arch, int bits);
typedef _Bool (*RCoreIsMapped)(void *core, unsigned long long addr, int perm);
typedef _Bool (*RCoreDebugMapsSync)(void *core);
typedef const char *(*RCoreGetName)(void *core, unsigned long long off);
typedef char *(*RCoreGetNameDelta)(void *core, unsigned long long off);
typedef void (*RCoreSeekArchBits)(void *core, unsigned long long addr);
typedef int (*RCoreConfigGetI)(void *core, const char *key);
typedef const char *(*RCoreConfigGet)(void *core, const char *key);
typedef unsigned long long (*RCoreNumGet)(void *core, const char *str);
typedef void *(*RCorePJWithEncoding)(void *core);

typedef struct r_core_bind_t {
 void *core;
 RCoreCmd cmd;
 RCoreCmdF cmdf;
 RCoreCmdStr cmdstr;
 RCoreCmdStrF cmdstrf;
 RCorePuts puts;
 RCoreDebugBpHit bphit;
 RCoreDebugSyscallHit syshit;
 RCoreSetArchBits setab;
 RCoreGetName getName;
 RCoreGetNameDelta getNameDelta;
 RCoreSeekArchBits archbits;
 RCoreConfigGetI cfggeti;
 RCoreConfigGet cfgGet;
 RCoreNumGet numGet;
 RCoreIsMapped isMapped;
 RCoreDebugMapsSync syncDebugMaps;
 RCorePJWithEncoding pjWithEncoding;
} RCoreBind;
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_list.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4

__attribute__((visibility("default"))) const char *r_socket_version(void);


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 1 3 4
# 301 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct in_addr {
 in_addr_t s_addr;
};
# 375 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct sockaddr_in {
 __uint8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};
# 398 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct ip_opts {
 struct in_addr ip_dst;
 char ip_opts[40];
};
# 507 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};






struct ip_mreqn {
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

#pragma pack(4)



struct ip_mreq_source {
 struct in_addr imr_multiaddr;
 struct in_addr imr_sourceaddr;
 struct in_addr imr_interface;
};





struct group_req {
 uint32_t gr_interface;
 struct sockaddr_storage gr_group;
};

struct group_source_req {
 uint32_t gsr_interface;
 struct sockaddr_storage gsr_group;
 struct sockaddr_storage gsr_source;
};
# 555 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct __msfilterreq {
 uint32_t msfr_ifindex;
 uint32_t msfr_fmode;
 uint32_t msfr_nsrcs;
 uint32_t __msfr_align;
 struct sockaddr_storage msfr_group;
 struct sockaddr_storage *msfr_srcs;
};



#pragma pack()
struct sockaddr;






int setipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t,
    uint32_t, struct in_addr *) ;
int getipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t *,
    uint32_t *, struct in_addr *) ;
int setsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t, uint32_t, struct sockaddr_storage *) ;
int getsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t *, uint32_t *, struct sockaddr_storage *) ;
# 618 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct in_pktinfo {
 unsigned int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 1 3 4
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
typedef struct in6_addr {
 union {
  __uint8_t __u6_addr8[16];
  __uint16_t __u6_addr16[8];
  __uint32_t __u6_addr32[4];
 } __u6_addr;
} in6_addr_t;
# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
struct sockaddr_in6 {
 __uint8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 __uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 __uint32_t sin6_scope_id;
};
# 214 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;

extern const struct in6_addr in6addr_nodelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;
extern const struct in6_addr in6addr_linklocal_allv2routers;
# 541 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};




struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 uint32_t ip6m_mtu;
};
# 639 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4

struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const __uint8_t *, int, int);
extern __uint8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, __uint8_t **);
extern int inet6_option_find(const struct cmsghdr *, __uint8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
    unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, __uint8_t, socklen_t,
    __uint8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);

extern int inet6_opt_next(void *, socklen_t, int, __uint8_t *, socklen_t *,
    void **);
extern int inet6_opt_find(void *, socklen_t, int, __uint8_t, socklen_t *,
    void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, const struct in6_addr *);
extern int inet6_rth_reverse(const void *, void *);
extern int inet6_rth_segments(const void *);
extern struct in6_addr *inet6_rth_getaddr(const void *, int);


# 661 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 2 3 4






int bindresvport(int, struct sockaddr_in *);
struct sockaddr;
int bindresvport_sa(int, struct sockaddr *);

# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/un.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/un.h" 3 4
struct sockaddr_un {
 unsigned char sun_len;
 sa_family_t sun_family;
 char sun_path[104];
};
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/poll.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/poll.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/poll.h" 1 3 4
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/poll.h" 3 4
struct pollfd {
 int fd;
 short events;
 short revents;
};

typedef unsigned int nfds_t;










extern int poll(struct pollfd *, nfds_t, int) __asm("_" "poll" );


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/poll.h" 2 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 3 4


in_addr_t inet_addr(const char *);
char *inet_ntoa(struct in_addr);
const char *inet_ntop(int, const void *, char *, socklen_t);
int inet_pton(int, const char *, void *);


int ascii2addr(int, const char *, void *);
char *addr2ascii(int, const void *, int, char *);
int inet_aton(const char *, struct in_addr *);
in_addr_t inet_lnaof(struct in_addr);
struct in_addr inet_makeaddr(in_addr_t, in_addr_t);
in_addr_t inet_netof(struct in_addr);
in_addr_t inet_network(const char *);
char *inet_net_ntop(int, const void *, int, char *, __darwin_size_t);
int inet_net_pton(int, const char *, void *, __darwin_size_t);
char *inet_neta(in_addr_t, char *, __darwin_size_t);
unsigned int inet_nsap_addr(const char *, unsigned char *, int);
char *inet_nsap_ntoa(int, const unsigned char *, char *);



# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4
extern int h_errno;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4
struct hostent {
 char *h_name;
 char **h_aliases;
 int h_addrtype;
 int h_length;
 char **h_addr_list;



};





struct netent {
 char *n_name;
 char **n_aliases;
 int n_addrtype;
 uint32_t n_net;
};

struct servent {
 char *s_name;
 char **s_aliases;
 int s_port;
 char *s_proto;
};

struct protoent {
 char *p_name;
 char **p_aliases;
 int p_proto;
};

struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 socklen_t ai_addrlen;
 char *ai_canonname;
 struct sockaddr *ai_addr;
 struct addrinfo *ai_next;
};


struct rpcent {
        char *r_name;
        char **r_aliases;
        int r_number;
};
# 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4


void endhostent(void);
void endnetent(void);
void endprotoent(void);
void endservent(void);

void freeaddrinfo(struct addrinfo *);
const char *gai_strerror(int);
int getaddrinfo(const char * restrict, const char * restrict,
       const struct addrinfo * restrict,
       struct addrinfo ** restrict);
struct hostent *gethostbyaddr(const void *, socklen_t, int);
struct hostent *gethostbyname(const char *);
struct hostent *gethostent(void);
int getnameinfo(const struct sockaddr * restrict, socklen_t,
         char * restrict, socklen_t, char * restrict,
         socklen_t, int);
struct netent *getnetbyaddr(uint32_t, int);
struct netent *getnetbyname(const char *);
struct netent *getnetent(void);
struct protoent *getprotobyname(const char *);
struct protoent *getprotobynumber(int);
struct protoent *getprotoent(void);
struct servent *getservbyname(const char *, const char *);
struct servent *getservbyport(int, const char *);
struct servent *getservent(void);
void sethostent(int);

void setnetent(int);
void setprotoent(int);
void setservent(int);


void freehostent(struct hostent *);
struct hostent *gethostbyname2(const char *, int);
struct hostent *getipnodebyaddr(const void *, size_t, int, int *);
struct hostent *getipnodebyname(const char *, int, int, int *);
struct rpcent *getrpcbyname(const char *name);

struct rpcent *getrpcbynumber(int number);



struct rpcent *getrpcent(void);
void setrpcent(int stayopen);
void endrpcent(void);
void herror(const char *);
const char *hstrerror(int);
int innetgr(const char *, const char *, const char *, const char *);
int getnetgrent(char **, char **, char **);
void endnetgrent(void);
void setnetgrent(const char *);



# 21 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
typedef __uint32_t tcp_seq;
typedef __uint32_t tcp_cc;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
struct tcphdr {
 unsigned short th_sport;
 unsigned short th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 unsigned int th_x2:4,
     th_off:4;





 unsigned char th_flags;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
 unsigned short th_win;
 unsigned short th_sum;
 unsigned short th_urp;
};
# 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
struct tcp_connection_info {
 u_int8_t tcpi_state;
 u_int8_t tcpi_snd_wscale;
 u_int8_t tcpi_rcv_wscale;
 u_int8_t __pad1;
 u_int32_t tcpi_options;




 u_int32_t tcpi_flags;


 u_int32_t tcpi_rto;
 u_int32_t tcpi_maxseg;
 u_int32_t tcpi_snd_ssthresh;
 u_int32_t tcpi_snd_cwnd;
 u_int32_t tcpi_snd_wnd;
 u_int32_t tcpi_snd_sbbytes;
 u_int32_t tcpi_rcv_wnd;
 u_int32_t tcpi_rttcur;
 u_int32_t tcpi_srtt;
 u_int32_t tcpi_rttvar;
 u_int32_t
     tcpi_tfo_cookie_req:1,
     tcpi_tfo_cookie_rcv:1,
     tcpi_tfo_syn_loss:1,
     tcpi_tfo_syn_data_sent:1,
     tcpi_tfo_syn_data_acked:1,
     tcpi_tfo_syn_data_rcv:1,
     tcpi_tfo_cookie_req_rcv:1,
     tcpi_tfo_cookie_sent:1,
     tcpi_tfo_cookie_invalid:1,
     tcpi_tfo_cookie_wrong:1,
     tcpi_tfo_no_cookie_rcv:1,
     tcpi_tfo_heuristics_disable:1,
     tcpi_tfo_send_blackhole:1,
     tcpi_tfo_recv_blackhole:1,
     tcpi_tfo_onebyte_proxy:1,
     __pad2:17;
 u_int64_t tcpi_txpackets __attribute__((aligned(8)));
 u_int64_t tcpi_txbytes __attribute__((aligned(8)));
 u_int64_t tcpi_txretransmitbytes __attribute__((aligned(8)));
 u_int64_t tcpi_rxpackets __attribute__((aligned(8)));
 u_int64_t tcpi_rxbytes __attribute__((aligned(8)));
 u_int64_t tcpi_rxoutoforderbytes __attribute__((aligned(8)));
 u_int64_t tcpi_txretransmitpackets __attribute__((aligned(8)));
};
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 2 3 4
# 51 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 3 4
typedef struct {




 int child;
 int input[2];
 int output[2];

 RCoreBind coreb;
} R2Pipe;

typedef struct r_socket_t {



 int fd;

 _Bool is_ssl;
 int proto;
 int local;
 int port;
 struct sockaddr_in sa;





} RSocket;

typedef struct r_socket_http_options {
 RList *authtokens;
 _Bool accept_timeout;
 int timeout;
 _Bool httpauth;
} RSocketHTTPOptions;
# 96 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_socket.h" 3 4
__attribute__((visibility("default"))) RSocket *r_socket_new_from_fd(int fd);
__attribute__((visibility("default"))) RSocket *r_socket_new(_Bool is_ssl);
__attribute__((visibility("default"))) _Bool r_socket_spawn(RSocket *s, const char *cmd, unsigned int timeout);
__attribute__((visibility("default"))) _Bool r_socket_connect(RSocket *s, const char *host, const char *port, int proto, unsigned int timeout);
__attribute__((visibility("default"))) int r_socket_connect_serial(RSocket *sock, const char *path, int speed, int parity);







__attribute__((visibility("default"))) _Bool r_socket_listen(RSocket *s, const char *port, const char *certfile);
__attribute__((visibility("default"))) int r_socket_port_by_name(const char *name);
__attribute__((visibility("default"))) int r_socket_close_fd(RSocket *s);
__attribute__((visibility("default"))) int r_socket_close(RSocket *s);
__attribute__((visibility("default"))) int r_socket_free(RSocket *s);
__attribute__((visibility("default"))) RSocket *r_socket_accept(RSocket *s);
__attribute__((visibility("default"))) RSocket *r_socket_accept_timeout(RSocket *s, unsigned int timeout);
__attribute__((visibility("default"))) _Bool r_socket_block_time(RSocket *s, _Bool block, int sec, int usec);
__attribute__((visibility("default"))) int r_socket_flush(RSocket *s);
__attribute__((visibility("default"))) int r_socket_ready(RSocket *s, int secs, int usecs);
__attribute__((visibility("default"))) char *r_socket_to_string(RSocket *s);
__attribute__((visibility("default"))) int r_socket_write(RSocket *s, const void *buf, int len);
__attribute__((visibility("default"))) int r_socket_puts(RSocket *s, char *buf);
__attribute__((visibility("default"))) void r_socket_printf(RSocket *s, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) int r_socket_read(RSocket *s, unsigned char *read, int len);
__attribute__((visibility("default"))) int r_socket_read_block(RSocket *s, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_socket_gets(RSocket *s, char *buf, int size);
__attribute__((visibility("default"))) unsigned char *r_socket_slurp(RSocket *s, int *len);
__attribute__((visibility("default"))) _Bool r_socket_is_connected(RSocket *);


typedef struct r_socket_proc_t {
 int fd0[2];
 int fd1[2];
 int pid;
} RSocketProc;

__attribute__((visibility("default"))) RSocketProc *r_socket_proc_open(char *const argv[]);
__attribute__((visibility("default"))) int r_socket_proc_close(RSocketProc *sp);
__attribute__((visibility("default"))) int r_socket_proc_read(RSocketProc *sp, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_socket_proc_gets(RSocketProc *sp, char *buf, int size);
__attribute__((visibility("default"))) int r_socket_proc_write(RSocketProc *sp, void *buf, int len);
__attribute__((visibility("default"))) void r_socket_proc_printf(RSocketProc *sp, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
__attribute__((visibility("default"))) int r_socket_proc_ready(RSocketProc *sp, int secs, int usecs);


__attribute__((visibility("default"))) char *r_socket_http_get(const char *url, int *code, int *rlen);
__attribute__((visibility("default"))) char *r_socket_http_post(const char *url, const char *data, int *code, int *rlen);
__attribute__((visibility("default"))) void r_socket_http_server_set_breaked(_Bool *b);

typedef struct r_socket_http_request {
 RSocket *s;
 char *path;
 char *host;
 char *agent;
 char *method;
 char *referer;
 unsigned char *data;
 int data_length;
 _Bool auth;
} RSocketHTTPRequest;

__attribute__((visibility("default"))) RSocketHTTPRequest *r_socket_http_accept(RSocket *s, RSocketHTTPOptions *so);
__attribute__((visibility("default"))) void r_socket_http_response(RSocketHTTPRequest *rs, int code, const char *out, int x, const char *headers);
__attribute__((visibility("default"))) void r_socket_http_close(RSocketHTTPRequest *rs);
__attribute__((visibility("default"))) unsigned char *r_socket_http_handle_upload(const unsigned char *str, int len, int *olen);
__attribute__((visibility("default"))) void r_socket_http_free(RSocketHTTPRequest *rs);

typedef int (*rap_server_open)(void *user, const char *file, int flg, int mode);
typedef int (*rap_server_seek)(void *user, unsigned long long offset, int whence);
typedef int (*rap_server_read)(void *user, unsigned char *buf, int len);
typedef int (*rap_server_write)(void *user, unsigned char *buf, int len);
typedef char *(*rap_server_cmd)(void *user, const char *command);
typedef int (*rap_server_close)(void *user, int fd);

enum {
 RAP_PACKET_OPEN = 1,
 RAP_PACKET_READ = 2,
 RAP_PACKET_WRITE = 3,
 RAP_PACKET_SEEK = 4,
 RAP_PACKET_CLOSE = 5,

 RAP_PACKET_CMD = 7,
 RAP_PACKET_REPLY = 0x80,
 RAP_PACKET_MAX = 4096
};

typedef struct r_socket_rap_server_t {
 RSocket *fd;
 char *port;
 unsigned char buf[RAP_PACKET_MAX + 32];
 rap_server_open open;
 rap_server_seek seek;
 rap_server_read read;
 rap_server_write write;
 rap_server_cmd system;
 rap_server_cmd cmd;
 rap_server_close close;
 void *user;
} RSocketRapServer;

__attribute__((visibility("default"))) RSocketRapServer *r_socket_rap_server_new(_Bool is_ssl, const char *port);
__attribute__((visibility("default"))) RSocketRapServer *r_socket_rap_server_create(const char *pathname);
__attribute__((visibility("default"))) void r_socket_rap_server_free(RSocketRapServer *rap_s);
__attribute__((visibility("default"))) _Bool r_socket_rap_server_listen(RSocketRapServer *rap_s, const char *certfile);
__attribute__((visibility("default"))) RSocket *r_socket_rap_server_accept(RSocketRapServer *rap_s);
__attribute__((visibility("default"))) _Bool r_socket_rap_server_continue(RSocketRapServer *rap_s);


__attribute__((visibility("default"))) int r_socket_rap_client_open(RSocket *s, const char *file, int rw);
__attribute__((visibility("default"))) char *r_socket_rap_client_command(RSocket *s, const char *cmd, RCoreBind *c);
__attribute__((visibility("default"))) int r_socket_rap_client_write(RSocket *s, const unsigned char *buf, int count);
__attribute__((visibility("default"))) int r_socket_rap_client_read(RSocket *s, unsigned char *buf, int count);
__attribute__((visibility("default"))) int r_socket_rap_client_seek(RSocket *s, unsigned long long offset, int whence);



typedef struct r_run_profile_t {
 char *_args[512];
 int _argc;
 _Bool _daemon;
 char *_system;
 char *_program;
 char *_runlib;
 char *_runlib_fcn;
 char *_stdio;
 char *_stdin;
 char *_stdout;
 char *_stderr;
 char *_chgdir;
 char *_chroot;
 char *_libpath;
 char *_preload;
 int _bits;
 int _pid;
 char *_pidfile;
 int _r2preload;
 int _docore;
 int _dofork;
 int _dodebug;
 int _aslr;
 int _maxstack;
 int _maxproc;
 int _maxfd;
 int _r2sleep;
 int _execve;
 char *_setuid;
 char *_seteuid;
 char *_setgid;
 char *_setegid;
 char *_input;
 char *_connect;
 char *_listen;
 int _pty;
 int _timeout;
 int _timeout_sig;
 int _nice;
} RRunProfile;

__attribute__((visibility("default"))) RRunProfile *r_run_new(const char *str);
__attribute__((visibility("default"))) _Bool r_run_parse(RRunProfile *pf, const char *profile);
__attribute__((visibility("default"))) void r_run_free(RRunProfile *r);
__attribute__((visibility("default"))) _Bool r_run_parseline(RRunProfile *p, const char *b);
__attribute__((visibility("default"))) const char *r_run_help(void);
__attribute__((visibility("default"))) int r_run_config_env(RRunProfile *p);
__attribute__((visibility("default"))) int r_run_start(RRunProfile *p);
__attribute__((visibility("default"))) void r_run_reset(RRunProfile *p);
__attribute__((visibility("default"))) _Bool r_run_parsefile(RRunProfile *p, const char *b);
__attribute__((visibility("default"))) char *r_run_get_environ_profile(char **env);


__attribute__((visibility("default"))) R2Pipe *rap_open(const char *cmd);
__attribute__((visibility("default"))) R2Pipe *rap_open_corebind(RCoreBind *coreb);
__attribute__((visibility("default"))) int rap_close(R2Pipe *rap);

__attribute__((visibility("default"))) char *rap_cmd(R2Pipe *rap, const char *str);
__attribute__((visibility("default"))) char *rap_cmdf(R2Pipe *rap, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));

__attribute__((visibility("default"))) int rap_write(R2Pipe *rap, const char *str);
__attribute__((visibility("default"))) char *rap_read(R2Pipe *rap);

__attribute__((visibility("default"))) int r2pipe_write(R2Pipe *r2pipe, const char *str);
__attribute__((visibility("default"))) char *r2pipe_read(R2Pipe *r2pipe);
__attribute__((visibility("default"))) int r2pipe_close(R2Pipe *r2pipe);
__attribute__((visibility("default"))) R2Pipe *r2pipe_open_corebind(RCoreBind *coreb);
__attribute__((visibility("default"))) R2Pipe *r2pipe_open(const char *cmd);
__attribute__((visibility("default"))) R2Pipe *r2pipe_open_dl(const char *file);
__attribute__((visibility("default"))) char *r2pipe_cmd(R2Pipe *r2pipe, const char *str);
__attribute__((visibility("default"))) char *r2pipe_cmdf(R2Pipe *r2pipe, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_skyline.h" 1 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_vector.h" 1 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_skyline.h" 2 3 4






typedef struct r_skyline_item_t {
 RInterval itv;
 void *user;
} RSkylineItem;

typedef struct r_skyline_t {
 RVector v;
} RSkyline;

__attribute__((visibility("default"))) _Bool r_skyline_add(RSkyline *skyline, RInterval itv, void *user);
__attribute__((visibility("default"))) const RSkylineItem *r_skyline_get_item_intersect(RSkyline *skyline, unsigned long long addr, unsigned long long len);

static inline void r_skyline_init(RSkyline *skyline) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 24); return; } } while (0);
 r_vector_init (&skyline->v, sizeof (RSkylineItem), ((void *)0), ((void *)0));
}

static inline void r_skyline_fini(RSkyline *skyline) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 29); return; } } while (0);
 r_vector_fini (&skyline->v);
}

static inline void r_skyline_clear(RSkyline *skyline) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 34); return; } } while (0);
 r_vector_clear (&skyline->v);
}

static inline const RSkylineItem *r_skyline_get_item(RSkyline *skyline, unsigned long long addr) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 39); return (((void *)0)); } } while (0);
 return r_skyline_get_item_intersect (skyline, addr, 0);
}

static inline void *r_skyline_get(RSkyline *skyline, unsigned long long addr) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 44); return (((void *)0)); } } while (0);
 const RSkylineItem *item = r_skyline_get_item (skyline, addr);
 return item ? item->user : ((void *)0);
}

static inline void *r_skyline_get_intersect(RSkyline *skyline, unsigned long long addr, unsigned long long len) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 50); return (((void *)0)); } } while (0);
 const RSkylineItem *item = r_skyline_get_item_intersect (skyline, addr, len);
 return item ? item->user : ((void *)0);
}

static inline _Bool r_skyline_contains(RSkyline *skyline, unsigned long long addr) {
 do { if (!(skyline)) { r_assert_log (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", ((const char*) (__func__)), "skyline", 56); return (0); } } while (0);
 return (_Bool)r_skyline_get_item (skyline, addr);
}
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_w32dw.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 2 3 4
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ptrace.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ptrace.h" 3 4
enum {
 ePtAttachDeprecated = 10
};
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ptrace.h" 3 4



int ptrace(int _request, pid_t _pid, caddr_t _addr, int _data);



# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 2 3 4
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 3 4
typedef int r_ptrace_request_t;
typedef int r_ptrace_data_t;
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_io.h" 3 4
__attribute__((visibility("default"))) const char *r_io_version(void);

typedef struct r_io_undos_t {
 unsigned long long off;
 int cursor;
} RIOUndos;

typedef struct r_io_undo_t {
 int s_enable;
 int w_enable;

 RList *w_list;
 int w_init;

 int idx;
 int undos;
 int redos;
 RIOUndos seek[64];

} RIOUndo;

typedef struct r_io_undo_w_t {
 _Bool set;
 unsigned long long off;
 unsigned char *o;
 unsigned char *n;
 size_t len;
} RIOUndoWrite;

typedef struct r_io_t {
 struct r_io_desc_t *desc;
 unsigned long long off;
 unsigned int bank;
 int bits;
 int va;
 _Bool ff;
 unsigned char Oxff;
 size_t addrbytes;
 _Bool aslr;
 _Bool autofd;
 unsigned int cached;
 _Bool cachemode;
 unsigned int p_cache;
 unsigned long long mts;
 RIDStorage *files;
 RIDStorage *maps;
 RIDStorage *banks;
 RCache *buffer;
 RPVector cache;
 RSkyline cache_skyline;
 unsigned char *write_mask;
 int write_mask_len;
 unsigned long long mask;
 RIOUndo undo;
 SdbList *plugins;
 _Bool nodup;
 char *runprofile;
 char *envprofile;
 char *args;
 REvent *event;
 PrintfCallback cb_printf;
 RCoreBind corebind;

 _Bool want_ptrace_wrap;







} RIO;

typedef struct r_io_desc_t {
 int fd;
 int perm;
 char *uri;
 char *name;
 char *referer;
 HtUP *cache;
 void *data;
 struct r_io_plugin_t *plugin;
 RIO *io;
} RIODesc;


typedef struct {
 RSocket *fd;
 RSocket *client;
 _Bool listener;
} RIORap;

typedef struct r_io_plugin_t {
 const char *name;
 const char *desc;
 const char *version;
 const char *author;
 const char *license;
 void *widget;
 const char *uris;
 int (*listener)(RIODesc *io);
 _Bool (*init)(void);
 RIOUndo undo;
 _Bool isdbg;

 char *(*system)(RIO *io, RIODesc *fd, const char *);
 RIODesc* (*open)(RIO *io, const char *, int perm, int mode);
 RList* (*open_many)(RIO *io, const char *, int perm, int mode);
 int (*read)(RIO *io, RIODesc *fd, unsigned char *buf, int count);
 unsigned long long (*seek)(RIO *io, RIODesc *fd, unsigned long long offset, int whence);
 int (*write)(RIO *io, RIODesc *fd, const unsigned char *buf, int count);
 _Bool (*close)(RIODesc *desc);
 _Bool (*is_blockdevice)(RIODesc *desc);
 _Bool (*is_chardevice)(RIODesc *desc);
 int (*getpid)(RIODesc *desc);
 int (*gettid)(RIODesc *desc);
 _Bool (*getbase)(RIODesc *desc, unsigned long long *base);
 _Bool (*resize)(RIO *io, RIODesc *fd, unsigned long long size);
 int (*extend)(RIO *io, RIODesc *fd, unsigned long long size);
 _Bool (*accept)(RIO *io, RIODesc *desc, int fd);
 int (*create)(RIO *io, const char *file, int mode, int type);
 _Bool (*check)(RIO *io, const char *, _Bool many);
} RIOPlugin;

typedef struct r_io_map_t {
 int fd;
 int perm;
 unsigned int id;
 unsigned long long ts;
 RInterval itv;
 unsigned long long delta;
 char *name;
} RIOMap;

typedef struct r_io_map_ref_t {
 unsigned int id;
 unsigned long long ts;
} RIOMapRef;

typedef struct r_io_submap_t {
 RIOMapRef mapref;
 RInterval itv;
} RIOSubMap;

typedef struct r_io_bank_t {
 char *name;
 RRBTree *submaps;
 RList *maprefs;
 RQueue *todo;
 RRBNode *last_used;
 unsigned int id;
} RIOBank;

typedef struct r_io_cache_t {
 RInterval itv;
 unsigned char *data;
 unsigned char *odata;
 int written;
} RIOCache;


typedef struct r_io_desc_cache_t {
 unsigned long long cached;
 unsigned char cdata[(sizeof(unsigned long long) * 8)];
} RIODescCache;

struct r_io_bind_t;

typedef _Bool (*RIODescUse)(RIO *io, int fd);
typedef RIODesc *(*RIODescGet)(RIO *io, int fd);
typedef unsigned long long(*RIODescSize)(RIODesc *desc);
typedef RIODesc *(*RIOOpen)(RIO *io, const char *uri, int flags, int mode);
typedef RIODesc *(*RIOOpenAt)(RIO *io, const char *uri, int flags, int mode, unsigned long long at);
typedef _Bool (*RIOClose)(RIO *io, int fd);
typedef _Bool (*RIOReadAt)(RIO *io, unsigned long long addr, unsigned char *buf, int len);
typedef _Bool (*RIOWriteAt)(RIO *io, unsigned long long addr, const unsigned char *buf, int len);
typedef char *(*RIOSystem)(RIO *io, const char* cmd);
typedef int (*RIOFdOpen)(RIO *io, const char *uri, int flags, int mode);
typedef _Bool (*RIOFdClose)(RIO *io, int fd);
typedef unsigned long long (*RIOFdSeek)(RIO *io, int fd, unsigned long long addr, int whence);
typedef unsigned long long (*RIOFdSize)(RIO *io, int fd);
typedef _Bool (*RIOFdResize)(RIO *io, int fd, unsigned long long newsize);
typedef unsigned long long (*RIOP2V)(RIO *io, unsigned long long pa);
typedef unsigned long long (*RIOV2P)(RIO *io, unsigned long long va);
typedef int (*RIOFdRead)(RIO *io, int fd, unsigned char *buf, int len);
typedef int (*RIOFdWrite)(RIO *io, int fd, const unsigned char *buf, int len);
typedef int (*RIOFdReadAt)(RIO *io, int fd, unsigned long long addr, unsigned char *buf, int len);
typedef int (*RIOFdWriteAt)(RIO *io, int fd, unsigned long long addr, const unsigned char *buf, int len);
typedef _Bool (*RIOFdIsDbg)(RIO *io, int fd);
typedef const char *(*RIOFdGetName)(RIO *io, int fd);
typedef RList *(*RIOFdGetMap)(RIO *io, int fd);
typedef _Bool (*RIOFdRemap)(RIO *io, int fd, unsigned long long addr);
typedef _Bool (*RIOIsValidOff)(RIO *io, unsigned long long addr, int hasperm);
typedef RIOBank *(*RIOBankGet)(RIO *io, unsigned int bankid);
typedef RIOMap *(*RIOMapGet)(RIO *io, unsigned int id);
typedef RIOMap *(*RIOMapGetAt)(RIO *io, unsigned long long addr);
typedef RIOMap *(*RIOMapGetPaddr)(RIO *io, unsigned long long paddr);
typedef _Bool (*RIOAddrIsMapped)(RIO *io, unsigned long long addr);
typedef RIOMap *(*RIOMapAdd)(RIO *io, int fd, int flags, unsigned long long delta, unsigned long long addr, unsigned long long size);

typedef long (*RIOPtraceFn)(RIO *io, r_ptrace_request_t request, pid_t pid, void *addr, r_ptrace_data_t data);
typedef void *(*RIOPtraceFuncFn)(RIO *io, void *(*func)(void *), void *user);


typedef struct r_io_bind_t {
 int init;
 RIO *io;
 RIODescUse desc_use;
 RIODescGet desc_get;
 RIODescSize desc_size;
 RIOOpen open;
 RIOOpenAt open_at;
 RIOClose close;
 RIOReadAt read_at;
 RIOWriteAt write_at;
 RIOSystem system;
 RIOFdOpen fd_open;
 RIOFdClose fd_close;
 RIOFdSeek fd_seek;
 RIOFdSize fd_size;
 RIOFdResize fd_resize;
 RIOFdRead fd_read;
 RIOFdWrite fd_write;
 RIOFdReadAt fd_read_at;
 RIOFdWriteAt fd_write_at;
 RIOFdIsDbg fd_is_dbg;
 RIOFdGetName fd_get_name;
 RIOFdGetMap fd_get_map;
 RIOFdRemap fd_remap;
 RIOIsValidOff is_valid_offset;
 RIOAddrIsMapped addr_is_mapped;
 RIOBankGet bank_get;
 RIOMapGet map_get;
 RIOMapGetAt map_get_at;
 RIOMapGetPaddr map_get_paddr;
 RIOMapAdd map_add;
 RIOV2P v2p;
 RIOP2V p2v;

 RIOPtraceFn ptrace;
 RIOPtraceFuncFn ptrace_func;

} RIOBind;


__attribute__((visibility("default"))) void r_io_map_init(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_map_remap(RIO *io, unsigned int id, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_io_map_remap_fd(RIO *io, int fd, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_io_map_exists(RIO *io, RIOMap *map);
__attribute__((visibility("default"))) _Bool r_io_map_exists_for_id(RIO *io, unsigned int id);
__attribute__((visibility("default"))) RIOMap *r_io_map_get(RIO *io, unsigned int id);
__attribute__((visibility("default"))) RIOMap *r_io_map_add(RIO *io, int fd, int flags, unsigned long long delta, unsigned long long addr, unsigned long long size);
__attribute__((visibility("default"))) RIOMap *r_io_map_add_bottom(RIO *io, int fd, int flags, unsigned long long delta, unsigned long long addr, unsigned long long size);
__attribute__((visibility("default"))) RIOMap *r_io_map_get_at(RIO *io, unsigned long long addr);
__attribute__((visibility("default"))) RIOMap *r_io_map_get_by_ref(RIO *io, RIOMapRef *ref);
__attribute__((visibility("default"))) _Bool r_io_map_is_mapped(RIO* io, unsigned long long addr);
__attribute__((visibility("default"))) RIOMap *r_io_map_get_paddr(RIO *io, unsigned long long paddr);
__attribute__((visibility("default"))) void r_io_map_reset(RIO* io);
__attribute__((visibility("default"))) void r_io_map_del(RIO *io, unsigned int id);
__attribute__((visibility("default"))) _Bool r_io_map_del_for_fd(RIO *io, int fd);
__attribute__((visibility("default"))) _Bool r_io_map_depriorize(RIO* io, unsigned int id);
__attribute__((visibility("default"))) _Bool r_io_map_priorize(RIO *io, unsigned int id);
__attribute__((visibility("default"))) _Bool r_io_map_priorize_for_fd(RIO *io, int fd);
__attribute__((visibility("default"))) void r_io_map_cleanup(RIO *io);
__attribute__((visibility("default"))) void r_io_map_fini(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_map_is_in_range(RIOMap *map, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) void r_io_map_set_name(RIOMap *map, const char *name);
__attribute__((visibility("default"))) void r_io_map_del_name(RIOMap *map);
__attribute__((visibility("default"))) RList* r_io_map_get_by_fd(RIO *io, int fd);
__attribute__((visibility("default"))) _Bool r_io_map_resize(RIO *io, unsigned int id, unsigned long long newsize);


__attribute__((visibility("default"))) _Bool r_io_map_locate(RIO *io, unsigned long long *addr, const unsigned long long size, unsigned long long load_align);



__attribute__((visibility("default"))) unsigned long long r_io_p2v(RIO *io, unsigned long long pa);
__attribute__((visibility("default"))) unsigned long long r_io_v2p(RIO *io, unsigned long long va);


__attribute__((visibility("default"))) RIOSubMap *r_io_submap_new(RIO *io, RIOMapRef *mapref);
__attribute__((visibility("default"))) _Bool r_io_submap_set_from(RIOSubMap *sm, const unsigned long long from);
__attribute__((visibility("default"))) _Bool r_io_submap_set_to(RIOSubMap *sm, const unsigned long long to);


__attribute__((visibility("default"))) RIOBank *r_io_bank_new(const char *name);
__attribute__((visibility("default"))) void r_io_bank_del(RIO *io, const unsigned int bankid);
__attribute__((visibility("default"))) unsigned int r_io_bank_first(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_bank_add(RIO *io, RIOBank *bank);
__attribute__((visibility("default"))) void r_io_bank_clear(RIOBank *bank);
__attribute__((visibility("default"))) void r_io_bank_free(RIOBank *bank);
__attribute__((visibility("default"))) void r_io_bank_init(RIO *io);
__attribute__((visibility("default"))) void r_io_bank_fini(RIO *io);
__attribute__((visibility("default"))) RIOBank *r_io_bank_get(RIO *io, const unsigned int bankid);
__attribute__((visibility("default"))) _Bool r_io_bank_use(RIO *io, unsigned int bankid);
__attribute__((visibility("default"))) _Bool r_io_bank_map_add_top(RIO *io, const unsigned int bankid, const unsigned int mapid);
__attribute__((visibility("default"))) _Bool r_io_bank_map_add_bottom(RIO *io, const unsigned int bankid, const unsigned int mapid);
__attribute__((visibility("default"))) _Bool r_io_bank_map_priorize (RIO *io, const unsigned int bankid, const unsigned int mapid);
__attribute__((visibility("default"))) _Bool r_io_bank_map_depriorize(RIO *io, const unsigned int bankid, const unsigned int mapid);
__attribute__((visibility("default"))) _Bool r_io_bank_update_map_boundaries(RIO *io, const unsigned int bankid, const unsigned int mapid, unsigned long long ofrom, unsigned long long oto);
__attribute__((visibility("default"))) _Bool r_io_bank_locate(RIO *io, const unsigned int bankid, unsigned long long *addr, const unsigned long long size, unsigned long long load_align);
__attribute__((visibility("default"))) void r_io_bank_del_map(RIO *io, const unsigned int bankid, const unsigned int mapid);
__attribute__((visibility("default"))) RIOMap *r_io_bank_get_map_at(RIO *io, const unsigned int bankid, const unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_io_bank_read_at(RIO *io, const unsigned int bankid, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_bank_write_at(RIO *io, const unsigned int bankid, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_bank_read_from_submap_at(RIO *io, const unsigned int bankid, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_bank_write_to_submap_at(RIO *io, const unsigned int bankid, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_io_bank_drain(RIO *io, const unsigned int bankid);


__attribute__((visibility("default"))) RIO *r_io_new(void);
__attribute__((visibility("default"))) RIO *r_io_init(RIO *io);
__attribute__((visibility("default"))) RIODesc *r_io_open_nomap(RIO *io, const char *uri, int flags, int mode);
__attribute__((visibility("default"))) RIODesc *r_io_open(RIO *io, const char *uri, int flags, int mode);
__attribute__((visibility("default"))) RIODesc *r_io_open_at(RIO *io, const char *uri, int flags, int mode, unsigned long long at);
__attribute__((visibility("default"))) RList *r_io_open_many(RIO *io, const char *uri, int flags, int mode);
__attribute__((visibility("default"))) RIODesc* r_io_open_buffer(RIO *io, RBuffer *b, int flags, int mode);
__attribute__((visibility("default"))) _Bool r_io_close(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_reopen(RIO *io, int fd, int flags, int mode);
__attribute__((visibility("default"))) void r_io_close_all(RIO *io);
__attribute__((visibility("default"))) int r_io_pread_at(RIO *io, unsigned long long paddr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_pwrite_at(RIO *io, unsigned long long paddr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_vread_at(RIO *io, unsigned long long vaddr, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_vwrite_at(RIO *io, unsigned long long vaddr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_read_at(RIO *io, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_read_at_mapped(RIO *io, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_nread_at(RIO *io, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_write_at(RIO *io, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_read(RIO *io, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_write(RIO *io, unsigned char *buf, int len);
__attribute__((visibility("default"))) unsigned long long r_io_size(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_is_listener(RIO *io);
__attribute__((visibility("default"))) char *r_io_system(RIO *io, const char* cmd);
__attribute__((visibility("default"))) _Bool r_io_resize(RIO *io, unsigned long long newsize);
__attribute__((visibility("default"))) int r_io_extend_at(RIO *io, unsigned long long addr, unsigned long long size);
__attribute__((visibility("default"))) _Bool r_io_set_write_mask(RIO *io, const unsigned char *mask, int len);
__attribute__((visibility("default"))) void r_io_bind(RIO *io, RIOBind *bnd);
__attribute__((visibility("default"))) _Bool r_io_shift(RIO *io, unsigned long long start, unsigned long long end, long long move);
__attribute__((visibility("default"))) unsigned long long r_io_seek(RIO *io, unsigned long long offset, int whence);
__attribute__((visibility("default"))) void r_io_fini(RIO *io);
__attribute__((visibility("default"))) void r_io_free(RIO *io);


__attribute__((visibility("default"))) _Bool r_io_plugin_init(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_plugin_add(RIO *io, RIOPlugin *plugin);
__attribute__((visibility("default"))) int r_io_plugin_list(RIO *io);
__attribute__((visibility("default"))) int r_io_plugin_list_json(RIO *io);
__attribute__((visibility("default"))) int r_io_plugin_read(RIODesc *desc, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_plugin_write(RIODesc *desc, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_plugin_read_at(RIODesc *desc, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_plugin_write_at(RIODesc *desc, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) RIOPlugin *r_io_plugin_resolve(RIO *io, const char *filename, _Bool many);
__attribute__((visibility("default"))) RIOPlugin *r_io_plugin_get_default(RIO *io, const char *filename, _Bool many);




__attribute__((visibility("default"))) int r_io_undo_init(RIO *io);
__attribute__((visibility("default"))) void r_io_undo_enable(RIO *io, int seek, int write);

__attribute__((visibility("default"))) RIOUndos *r_io_sundo(RIO *io, unsigned long long offset);
__attribute__((visibility("default"))) RIOUndos *r_io_sundo_redo(RIO *io);
__attribute__((visibility("default"))) void r_io_sundo_push(RIO *io, unsigned long long off, int cursor);
__attribute__((visibility("default"))) void r_io_sundo_reset(RIO *io);
__attribute__((visibility("default"))) RList *r_io_sundo_list(RIO *io, int mode);

__attribute__((visibility("default"))) void r_io_wundo_new(RIO *io, unsigned long long off, const unsigned char *data, int len);
__attribute__((visibility("default"))) void r_io_wundo_apply_all(RIO *io, int set);
__attribute__((visibility("default"))) int r_io_wundo_apply(RIO *io, struct r_io_undo_w_t *u, int set);
__attribute__((visibility("default"))) void r_io_wundo_clear(RIO *io);
__attribute__((visibility("default"))) int r_io_wundo_size(RIO *io);
__attribute__((visibility("default"))) void r_io_wundo_list(RIO *io);
__attribute__((visibility("default"))) int r_io_wundo_set_t(RIO *io, RIOUndoWrite *u, int set) ;
__attribute__((visibility("default"))) void r_io_wundo_set_all(RIO *io, int set);
__attribute__((visibility("default"))) int r_io_wundo_set(RIO *io, int n, int set);


__attribute__((visibility("default"))) RIODesc *r_io_desc_new(RIO *io, RIOPlugin *plugin, const char *uri, int flags, int mode, void *data);
__attribute__((visibility("default"))) RIODesc *r_io_desc_open(RIO *io, const char *uri, int flags, int mode);
__attribute__((visibility("default"))) RIODesc *r_io_desc_open_plugin(RIO *io, RIOPlugin *plugin, const char *uri, int flags, int mode);
__attribute__((visibility("default"))) _Bool r_io_desc_close(RIODesc *desc);
__attribute__((visibility("default"))) int r_io_desc_read(RIODesc *desc, unsigned char *buf, int count);
__attribute__((visibility("default"))) int r_io_desc_write(RIODesc *desc, const unsigned char *buf, int count);
__attribute__((visibility("default"))) void r_io_desc_free(RIODesc *desc);
__attribute__((visibility("default"))) _Bool r_io_desc_add(RIO *io, RIODesc *desc);
__attribute__((visibility("default"))) _Bool r_io_desc_del(RIO *io, int fd);
__attribute__((visibility("default"))) RIODesc *r_io_desc_get(RIO *io, int fd);
__attribute__((visibility("default"))) RIODesc *r_io_desc_get_byuri(RIO *io, const char *uri);
__attribute__((visibility("default"))) RIODesc *r_io_desc_get_next(RIO *io, RIODesc *desc);
__attribute__((visibility("default"))) RIODesc *r_io_desc_get_prev(RIO *io, RIODesc *desc);
__attribute__((visibility("default"))) RIODesc *r_io_desc_get_highest(RIO *io);
__attribute__((visibility("default"))) RIODesc *r_io_desc_get_lowest(RIO *io);
__attribute__((visibility("default"))) unsigned long long r_io_desc_seek(RIODesc *desc, unsigned long long offset, int whence);
__attribute__((visibility("default"))) _Bool r_io_desc_resize(RIODesc *desc, unsigned long long newsize);
__attribute__((visibility("default"))) unsigned long long r_io_desc_size(RIODesc *desc);
__attribute__((visibility("default"))) _Bool r_io_desc_is_blockdevice(RIODesc *desc);
__attribute__((visibility("default"))) _Bool r_io_desc_is_chardevice(RIODesc *desc);
__attribute__((visibility("default"))) _Bool r_io_desc_exchange(RIO *io, int fd, int fdx);
__attribute__((visibility("default"))) _Bool r_io_desc_is_dbg(RIODesc *desc);
__attribute__((visibility("default"))) int r_io_desc_get_pid(RIODesc *desc);
__attribute__((visibility("default"))) int r_io_desc_get_tid(RIODesc *desc);
__attribute__((visibility("default"))) _Bool r_io_desc_get_base(RIODesc *desc, unsigned long long *base);
__attribute__((visibility("default"))) int r_io_desc_read_at(RIODesc *desc, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_desc_write_at(RIODesc *desc, unsigned long long addr, const unsigned char *buf, int len);


 _Bool r_io_desc_init(RIO *io);
 void r_io_desc_fini(RIO *io);


__attribute__((visibility("default"))) int r_io_cache_invalidate(RIO *io, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) _Bool r_io_cache_at(RIO *io, unsigned long long addr);
__attribute__((visibility("default"))) void r_io_cache_commit(RIO *io, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) void r_io_cache_init(RIO *io);
__attribute__((visibility("default"))) void r_io_cache_fini(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_cache_list(RIO *io, int rad);
__attribute__((visibility("default"))) void r_io_cache_reset(RIO *io, int set);
__attribute__((visibility("default"))) _Bool r_io_cache_write(RIO *io, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_cache_read(RIO *io, unsigned long long addr, unsigned char *buf, int len);


__attribute__((visibility("default"))) _Bool r_io_desc_cache_init(RIODesc *desc);
__attribute__((visibility("default"))) int r_io_desc_cache_write(RIODesc *desc, unsigned long long paddr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_desc_cache_read(RIODesc *desc, unsigned long long paddr, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_desc_cache_commit(RIODesc *desc);
__attribute__((visibility("default"))) void r_io_desc_cache_cleanup(RIODesc *desc);
__attribute__((visibility("default"))) void r_io_desc_cache_fini(RIODesc *desc);
__attribute__((visibility("default"))) void r_io_desc_cache_fini_all(RIO *io);
__attribute__((visibility("default"))) RList *r_io_desc_cache_list(RIODesc *desc);
__attribute__((visibility("default"))) int r_io_desc_extend(RIODesc *desc, unsigned long long size);


__attribute__((visibility("default"))) int r_io_buffer_read(RIO* io, unsigned long long addr, unsigned char* buf, int len);
__attribute__((visibility("default"))) int r_io_buffer_load(RIO* io, unsigned long long addr, int len);
__attribute__((visibility("default"))) void r_io_buffer_close(RIO* io);


__attribute__((visibility("default"))) int r_io_fd_open(RIO *io, const char *uri, int flags, int mode);
__attribute__((visibility("default"))) _Bool r_io_fd_close(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_read(RIO *io, int fd, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_fd_write(RIO *io, int fd, const unsigned char *buf, int len);
__attribute__((visibility("default"))) unsigned long long r_io_fd_seek(RIO *io, int fd, unsigned long long addr, int whence);
__attribute__((visibility("default"))) unsigned long long r_io_fd_size(RIO *io, int fd);
__attribute__((visibility("default"))) _Bool r_io_fd_resize(RIO *io, int fd, unsigned long long newsize);
__attribute__((visibility("default"))) _Bool r_io_fd_is_blockdevice(RIO *io, int fd);
__attribute__((visibility("default"))) _Bool r_io_fd_is_chardevice(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_read_at(RIO *io, int fd, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_io_fd_write_at(RIO *io, int fd, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_io_fd_is_dbg(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_get_pid(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_get_tid(RIO *io, int fd);
__attribute__((visibility("default"))) _Bool r_io_fd_get_base(RIO *io, int fd, unsigned long long *base);
__attribute__((visibility("default"))) const char *r_io_fd_get_name(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_get_current(RIO *io);
__attribute__((visibility("default"))) _Bool r_io_use_fd(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_get_next(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_get_prev(RIO *io, int fd);
__attribute__((visibility("default"))) int r_io_fd_get_highest(RIO *io);
__attribute__((visibility("default"))) int r_io_fd_get_lowest(RIO *io);






__attribute__((visibility("default"))) _Bool r_io_is_valid_offset(RIO *io, unsigned long long offset, int hasperm);
__attribute__((visibility("default"))) _Bool r_io_addr_is_mapped(RIO *io, unsigned long long vaddr);
__attribute__((visibility("default"))) _Bool r_io_read_i(RIO* io, unsigned long long addr, unsigned long long *val, int size, _Bool endian);
__attribute__((visibility("default"))) _Bool r_io_write_i(RIO* io, unsigned long long addr, unsigned long long *val, int size, _Bool endian);


__attribute__((visibility("default"))) long r_io_ptrace(RIO *io, r_ptrace_request_t request, pid_t pid, void *addr, r_ptrace_data_t data);
__attribute__((visibility("default"))) pid_t r_io_ptrace_fork(RIO *io, void (*child_callback)(void *), void *child_callback_user);
__attribute__((visibility("default"))) void *r_io_ptrace_func(RIO *io, void *(*func)(void *), void *user);


extern RIOPlugin r_io_plugin_procpid;
extern RIOPlugin r_io_plugin_malloc;
extern RIOPlugin r_io_plugin_sparse;
extern RIOPlugin r_io_plugin_ptrace;
extern RIOPlugin r_io_plugin_w32dbg;
extern RIOPlugin r_io_plugin_windbg;
extern RIOPlugin r_io_plugin_mach;
extern RIOPlugin r_io_plugin_debug;
extern RIOPlugin r_io_plugin_shm;
extern RIOPlugin r_io_plugin_gdb;
extern RIOPlugin r_io_plugin_rap;
extern RIOPlugin r_io_plugin_http;
extern RIOPlugin r_io_plugin_bfdbg;
extern RIOPlugin r_io_plugin_w32;
extern RIOPlugin r_io_plugin_zip;
extern RIOPlugin r_io_plugin_mmap;
extern RIOPlugin r_io_plugin_default;
extern RIOPlugin r_io_plugin_ihex;
extern RIOPlugin r_io_plugin_self;
extern RIOPlugin r_io_plugin_gzip;
extern RIOPlugin r_io_plugin_winkd;
extern RIOPlugin r_io_plugin_r2pipe;
extern RIOPlugin r_io_plugin_r2web;
extern RIOPlugin r_io_plugin_qnx;
extern RIOPlugin r_io_plugin_r2k;
extern RIOPlugin r_io_plugin_tcpslurp;
extern RIOPlugin r_io_plugin_bochs;
extern RIOPlugin r_io_plugin_null;
extern RIOPlugin r_io_plugin_ar;
extern RIOPlugin r_io_plugin_rbuf;
extern RIOPlugin r_io_plugin_winedbg;
extern RIOPlugin r_io_plugin_gprobe;
extern RIOPlugin r_io_plugin_fd;
extern RIOPlugin r_io_plugin_socket;
extern RIOPlugin r_io_plugin_isotp;
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 2 3 4



typedef struct r_bin_t RBin;

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin_dwarf.h" 1 3 4
# 626 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin_dwarf.h" 3 4
typedef struct {
 unsigned int total_length;
 unsigned short version;
 unsigned int plen;
 unsigned char mininstlen;
 unsigned char is_stmt;
 char line_base;
 unsigned char line_range;
 unsigned char opcode_base;
 unsigned int oplentable[12];
 const char **incdirs;
 const char *file[128];
} RBinDwarfInfoHeader;


typedef struct {
 unsigned long long address;
 unsigned int file;
 unsigned int line;
 unsigned int column;
 int is_stmt;
 int basic_block;
 int end_sequence;
} RBinDwarfState;

typedef struct {
 unsigned long long address;
 char *file;
 unsigned int line;
 unsigned int column;
} RBinDwarfRow;


typedef union {
 unsigned int offset32;
 unsigned long long offset64;
} section_offset;

typedef struct {
 unsigned long long unit_length;
 unsigned short version;
 section_offset debug_abbrev_offset;
 unsigned char address_size;
 unsigned long long type_signature;
 section_offset type_offset;
} RBinDwarfTypeUnitHeader;

typedef struct {
 unsigned long long unit_length;
 unsigned short version;
 section_offset debug_info_offset;
 unsigned char address_size;
 unsigned char segment_size;
} RBinDwarfAddressRangeTable;

typedef struct {
 unsigned long long attr_name;
 unsigned long long attr_form;
 long long special;
} RBinDwarfAttrDef;

typedef struct {
 unsigned long long length;
 unsigned char *data;
} RBinDwarfBlock;


typedef enum {
 DW_AT_KIND_ADDRESS,
 DW_AT_KIND_BLOCK,
 DW_AT_KIND_CONSTANT,
 DW_AT_KIND_EXPRLOC,
 DW_AT_KIND_FLAG,
 DW_AT_KIND_LINEPTR,
 DW_AT_KIND_LOCLISTPTR,
 DW_AT_KIND_MACPTR,
 DW_AT_KIND_RANGELISTPTR,
 DW_AT_KIND_REFERENCE,
 DW_AT_KIND_STRING,
} RBinDwarfAttrKind;

typedef struct dwarf_attr_kind {
 unsigned long long attr_name;
 unsigned long long attr_form;
 RBinDwarfAttrKind kind;



 union {
  unsigned long long address;
  unsigned long long uconstant;
  long long sconstant;
  unsigned char flag;
  unsigned long long reference;
  RBinDwarfBlock block;
  struct {
   unsigned long long offset;
   const char *content;
  } string;
 };
} RBinDwarfAttrValue;

typedef struct {


 unsigned long long length;
 unsigned short version;

 unsigned long long abbrev_offset;


 unsigned char address_size;
 unsigned char unit_type;
 unsigned char dwo_id;
 unsigned long long type_sig;
 unsigned long long type_offset;
 unsigned long long header_size;
 unsigned long long unit_offset;
 _Bool is_64bit;
} RBinDwarfCompUnitHdr;

typedef struct {
 unsigned long long tag;
 unsigned long long abbrev_code;
 size_t count;
 size_t capacity;
 unsigned long long offset;
 _Bool has_children;
 RBinDwarfAttrValue *attr_values;
} RBinDwarfDie;

typedef struct {
 RBinDwarfCompUnitHdr hdr;
 unsigned long long offset;
 size_t count;
 size_t capacity;
 RBinDwarfDie *dies;
} RBinDwarfCompUnit;



typedef struct {
 size_t count;
 size_t capacity;
 RBinDwarfCompUnit *comp_units;
 HtUP *lookup_table;
} RBinDwarfDebugInfo;



typedef struct {
 unsigned long long code;
 unsigned long long tag;
 unsigned long long offset;
 unsigned char has_children;
 size_t count;
 size_t capacity;
 RBinDwarfAttrDef *defs;
} RBinDwarfAbbrevDecl;



typedef struct {
 size_t count;
 size_t capacity;
 RBinDwarfAbbrevDecl *decls;
} RBinDwarfDebugAbbrev;




typedef struct {
 unsigned long long address;
 unsigned long long op_index;
 unsigned long long file;
 unsigned long long line;
 unsigned long long column;
 unsigned char is_stmt;
 unsigned char basic_block;
 unsigned char end_sequence;
 unsigned char prologue_end;
 unsigned char epilogue_begin;
 unsigned long long isa;
 unsigned long long discriminator;
} RBinDwarfSMRegisters;

typedef struct {
 char *name;
 unsigned int id_idx, mod_time, file_len;
} file_entry;

typedef struct {
 unsigned long long unit_length;
 unsigned short version;
 unsigned long long header_length;
 unsigned char min_inst_len;
 unsigned char max_ops_per_inst;
 unsigned char default_is_stmt;
 int line_base;
 unsigned char line_range;
 unsigned char opcode_base;
 unsigned char address_size;
 unsigned char segment_selector_size;
 _Bool is_64bit;

 unsigned char *std_opcode_lengths;
 char **include_directories;
 file_entry *file_names;
 size_t file_names_count;
} RBinDwarfLineHeader;

typedef struct r_bin_dwarf_loc_entry_t {
 unsigned long long start;
 unsigned long long end;
 RBinDwarfBlock *expression;
} RBinDwarfLocRange;

typedef struct r_bin_dwarf_loc_list_t {
 RList *list;
 unsigned long long offset;
} RBinDwarfLocList;



__attribute__((visibility("default"))) RList *r_bin_dwarf_parse_aranges(RBin *a, int mode);
__attribute__((visibility("default"))) RList *r_bin_dwarf_parse_line(RBin *a, int mode);
__attribute__((visibility("default"))) RBinDwarfDebugAbbrev *r_bin_dwarf_parse_abbrev(RBin *a, int mode);
__attribute__((visibility("default"))) RBinDwarfDebugInfo *r_bin_dwarf_parse_info(RBinDwarfDebugAbbrev *da, RBin *a, int mode);
__attribute__((visibility("default"))) HtUP *r_bin_dwarf_parse_loc(RBin *bin, int addr_size);
__attribute__((visibility("default"))) void r_bin_dwarf_print_loc(HtUP *loc_table, int addr_size, PrintfCallback print);
__attribute__((visibility("default"))) void r_bin_dwarf_free_loc(HtUP *loc_table);
__attribute__((visibility("default"))) void r_bin_dwarf_free_debug_info(RBinDwarfDebugInfo *inf);
__attribute__((visibility("default"))) void r_bin_dwarf_free_debug_abbrev(RBinDwarfDebugAbbrev *da);
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_pdb.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_pdb.h" 2 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_pdb.h" 3 4
struct R_PDB7_ROOT_STREAM;

typedef struct r_pdb_t {
 _Bool (*pdb_parse)(struct r_pdb_t *pdb);
 void (*finish_pdb_parse)(struct r_pdb_t *pdb);
 void (*print_types)(const struct r_pdb_t *pdb, PJ *pj, int mode);

 PrintfCallback cb_printf;
 struct R_PDB7_ROOT_STREAM *root_stream;
 void *stream_map;
 RList *pdb_streams;
 RList *pdb_streams2;
 RBuffer *buf;


 void (*print_gvars)(struct r_pdb_t *pdb, unsigned long long img_base, PJ *pj, int format);
} RPdb;

__attribute__((visibility("default"))) _Bool init_pdb_parser(RPdb *pdb, const char *filename);
__attribute__((visibility("default"))) _Bool init_pdb_parser_with_buf(RPdb *pdb, RBuffer *buf);
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 2 3 4





__attribute__((visibility("default"))) const char *r_bin_version(void);
# 126 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 3 4
enum {
 R_BIN_SYM_ENTRY,
 R_BIN_SYM_INIT,
 R_BIN_SYM_MAIN,
 R_BIN_SYM_FINI,
 R_BIN_SYM_LAST
};



enum {
 R_BIN_NM_NONE = 0,
 R_BIN_NM_JAVA = 1,
 R_BIN_NM_C = 1<<1,
 R_BIN_NM_GO = 1<<2,
 R_BIN_NM_CXX = 1<<3,
 R_BIN_NM_OBJC = 1<<4,
 R_BIN_NM_SWIFT = 1<<5,
 R_BIN_NM_DLANG = 1<<6,
 R_BIN_NM_MSVC = 1<<7,
 R_BIN_NM_RUST = 1<<8,
 R_BIN_NM_KOTLIN = 1<<9,
 R_BIN_NM_BLOCKS = 1<<31,
 R_BIN_NM_ANY = -1,
};

enum {
 R_STRING_TYPE_DETECT = '?',
 R_STRING_TYPE_ASCII = 'a',
 R_STRING_TYPE_UTF8 = 'u',
 R_STRING_TYPE_WIDE = 'w',
 R_STRING_TYPE_WIDE32 = 'W',
 R_STRING_TYPE_BASE64 = 'b',
};

enum {
 R_BIN_CLASS_PRIVATE,
 R_BIN_CLASS_PUBLIC,
 R_BIN_CLASS_FRIENDLY,
 R_BIN_CLASS_PROTECTED,
};

enum {
 R_BIN_RELOC_1 = 1,
 R_BIN_RELOC_2 = 2,
 R_BIN_RELOC_4 = 4,
 R_BIN_RELOC_8 = 8,
 R_BIN_RELOC_16 = 16,
 R_BIN_RELOC_24= 24,
 R_BIN_RELOC_32 = 32,
 R_BIN_RELOC_48= 48,
 R_BIN_RELOC_64 = 64
};

enum {
 R_BIN_TYPE_DEFAULT = 0,
 R_BIN_TYPE_CORE = 1
};

typedef struct r_bin_addr_t {
 unsigned long long vaddr;
 unsigned long long paddr;
 unsigned long long hvaddr;
 unsigned long long hpaddr;
 int type;
 int bits;
} RBinAddr;

typedef struct r_bin_hash_t {
 const char *type;
 unsigned long long addr;
 int len;
 unsigned long long from;
 unsigned long long to;
 unsigned char buf[32];
 const char *cmd;
} RBinHash;

typedef struct r_bin_file_hash_t {
 const char *type;
 const char *hex;
} RBinFileHash;

typedef struct r_bin_info_t {
 char *file;
 char *type;
 char *bclass;
 char *rclass;
 char *arch;
 char *cpu;
 char *machine;
 char *head_flag;
 char *features;
 char *os;
 char *subsystem;
 char *rpath;
 char *guid;
 char *debug_file_name;
 const char *lang;
 char *default_cc;
 RList *file_hashes;
 int bits;
 int has_va;
 int has_pi;
 int has_canary;
 int has_retguard;
 int has_sanitizers;
 int has_crypto;
 int has_nx;
 int big_endian;
 _Bool has_lit;
 char *actual_checksum;
 char *claimed_checksum;
 int pe_overlay;
 _Bool signature;
 unsigned long long dbg_info;
 RBinHash sum[3];
 unsigned long long baddr;
 char *intrp;
 char *compiler;
} RBinInfo;

typedef struct r_bin_object_t {
 unsigned long long baddr;
 long long baddr_shift;
 unsigned long long loadaddr;
 unsigned long long boffset;
 unsigned long long size;
 unsigned long long obj_size;
 RList *sections;
 RList *imports;
 RList *symbols;
 RList *entries;
 RList *fields;
 RList *libs;
 RRBTree *relocs;
 RList *strings;
 RList *classes;
 HtPP *classes_ht;
 HtPP *methods_ht;
 RList *lines;
 HtUP *strings_db;
 RList *mem;
 RList *maps;
 char *regstate;
 RBinInfo *info;
 RBinAddr *binsym[R_BIN_SYM_LAST];
 struct r_bin_plugin_t *plugin;
 int lang;
 Sdb *kv;
 HtUP *addr2klassmethod;
 void *bin_obj;
} RBinObject;



typedef struct r_bin_file_t {
 char *file;
 int fd;
 int size;
 int rawstr;
 int strmode;
 unsigned int id;
 RBuffer *buf;
 unsigned long long offset;
 RBinObject *o;
 void *xtr_obj;
 unsigned long long loadaddr;

 int minstrlen;
 int maxstrlen;
 int narch;
 struct r_bin_xtr_plugin_t *curxtr;

 RList *xtr_data;
 Sdb *sdb;
 Sdb *sdb_info;
 Sdb *sdb_addrinfo;
 struct r_bin_t *rbin;
} RBinFile;

typedef struct r_bin_file_options_t {
 const char *pluginname;
 unsigned long long baseaddr;
 unsigned long long loadaddr;

 unsigned long long sz;
 int xtr_idx;
 int rawstr;
 int fd;
 const char *filename;
} RBinFileOptions;

struct r_bin_t {
 const char *file;
 RBinFile *cur;
 int narch;
 void *user;

 int debase64;
 int minstrlen;
 int maxstrlen;
 unsigned long long maxstrbuf;
 int rawstr;
 Sdb *sdb;
 RIDStorage *ids;
 RList *plugins;
 RList *binxtrs;
 RList *binldrs;
 RList *binfiles;
 PrintfCallback cb_printf;
 int loadany;
 RIOBind iob;
 RConsBind consb;
 char *force;
 _Bool want_dbginfo;
 int filter;
 char strfilter;
 char *strpurge;
 char *srcdir;
 char *prefix;
 char *strenc;
 unsigned long long filter_rules;
 _Bool demangle_usecmd;
 _Bool demangle_trylib;
 _Bool verbose;
 _Bool use_xtr;
 _Bool use_ldr;
 RStrConstPool constpool;
 _Bool is_reloc_patched;
};

typedef struct r_bin_xtr_metadata_t {
 char *arch;
 int bits;
 char *libname;
 char *machine;
 char *type;
 const char *xtr_type;
} RBinXtrMetadata;

typedef int (*FREE_XTR)(void *xtr_obj);
typedef struct r_bin_xtr_extract_t {
 char *file;
 RBuffer *buf;
 unsigned long long size;
 unsigned long long offset;
 unsigned long long baddr;
 unsigned long long laddr;
 int file_count;
 _Bool loaded;
 RBinXtrMetadata *metadata;
} RBinXtrData;

__attribute__((visibility("default"))) RBinXtrData *r_bin_xtrdata_new(RBuffer *buf, unsigned long long offset, unsigned long long size, unsigned int file_count, RBinXtrMetadata *metadata);
__attribute__((visibility("default"))) void r_bin_xtrdata_free(void *data);

typedef struct r_bin_xtr_plugin_t {
 char *name;
 char *desc;
 char *license;
 int (*init)(void *user);
 int (*fini)(void *user);
 _Bool (*check_buffer)(RBinFile *bf, RBuffer *buf);

 RBinXtrData *(*extract_from_bytes)(RBin *bin, const unsigned char *buf, unsigned long long size, int idx);
 RBinXtrData *(*extract_from_buffer)(RBin *bin, RBuffer *buf, int idx);
 RList *(*extractall_from_bytes)(RBin *bin, const unsigned char *buf, unsigned long long size);
 RList *(*extractall_from_buffer)(RBin *bin, RBuffer *buf);
 RBinXtrData *(*extract)(RBin *bin, int idx);
 RList *(*extractall)(RBin *bin);

 _Bool (*load)(RBin *bin);
 int (*size)(RBin *bin);
 void (*destroy)(RBin *bin);
 void (*free_xtr)(void *xtr_obj);
} RBinXtrPlugin;

typedef struct r_bin_ldr_plugin_t {
 char *name;
 char *desc;
 char *license;
 int (*init)(void *user);
 int (*fini)(void *user);
 _Bool (*load)(RBin *bin);
} RBinLdrPlugin;

typedef struct r_bin_arch_options_t {
 const char *arch;
 int bits;
} RBinArchOptions;

typedef struct r_bin_trycatch_t {
 unsigned long long source;
 unsigned long long from;
 unsigned long long to;
 unsigned long long handler;
 unsigned long long filter;

} RBinTrycatch;

__attribute__((visibility("default"))) RBinTrycatch *r_bin_trycatch_new(unsigned long long source, unsigned long long from, unsigned long long to, unsigned long long handler, unsigned long long filter);
__attribute__((visibility("default"))) void r_bin_trycatch_free(RBinTrycatch *tc);

typedef struct r_bin_plugin_t {
 char *name;
 char *desc;
 char *author;
 char *version;
 char *license;
 int (*init)(void *user);
 int (*fini)(void *user);
 Sdb * (*get_sdb)(RBinFile *obj);
 _Bool (*load_buffer)(RBinFile *bf, void **bin_obj, RBuffer *buf, unsigned long long loadaddr, Sdb *sdb);
 unsigned long long (*size)(RBinFile *bin);
 void (*destroy)(RBinFile *bf);
 _Bool (*check_buffer)(RBinFile *bf, RBuffer *buf);
 unsigned long long (*baddr)(RBinFile *bf);
 unsigned long long (*boffset)(RBinFile *bf);
 RBinAddr* (*binsym)(RBinFile *bf, int num);
 RList * (*entries)(RBinFile *bf);
 RList * (*sections)(RBinFile *bf);
 RList * (*lines)(RBinFile *bf);
 RList * (*symbols)(RBinFile *bf);
 RList * (*imports)(RBinFile *bf);
 RList * (*strings)(RBinFile *bf);
 RBinInfo * (*info)(RBinFile *bf);
 RList * (*fields)(RBinFile *bf);
 RList * (*libs)(RBinFile *bf);
 RList * (*relocs)(RBinFile *bf);
 RList * (*trycatch)(RBinFile *bf);
 RList * (*classes)(RBinFile *bf);
 RList * (*mem)(RBinFile *bf);
 RList * (*patch_relocs)(RBin *bin);
 RList * (*maps)(RBinFile *bf);
 RList * (*hashes)(RBinFile *bf);
 void (*header)(RBinFile *bf);
 char* (*signature)(RBinFile *bf, _Bool json);
 int (*demangle_type)(const char *str);
 struct r_bin_dbginfo_t *dbginfo;
 struct r_bin_write_t *write;
 int (*get_offset)(RBinFile *bf, int type, int idx);
 const char* (*get_name)(RBinFile *bf, int type, int idx, _Bool simplified);
 unsigned long long (*get_vaddr)(RBinFile *bf, unsigned long long baddr, unsigned long long paddr, unsigned long long vaddr);
 RBuffer* (*create)(RBin *bin, const unsigned char *code, int codelen, const unsigned char *data, int datalen, RBinArchOptions *opt);
 char* (*demangle)(const char *str);
 char* (*regstate)(RBinFile *bf);
 int (*file_type)(RBinFile *bf);

 int minstrlen;
 char strfilter;
 void *user;
} RBinPlugin;

typedef void (*RBinSymbollCallback)(RBinObject *obj, void *symbol);

typedef struct r_bin_section_t {
 char *name;
 unsigned long long size;
 unsigned long long vsize;
 unsigned long long vaddr;
 unsigned long long paddr;
 unsigned int perm;

 const char *arch;
 char *format;
 int bits;
 _Bool has_strings;
 _Bool add;
 _Bool is_data;
 _Bool is_segment;
} RBinSection;

typedef struct r_bin_class_t {
 char *name;

 char *super;
 char *visibility_str;
 int index;
 unsigned long long addr;
 RList *methods;
 RList *fields;

 int visibility;
} RBinClass;
# 525 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 3 4
typedef struct r_bin_symbol_t {

 char *name;
 char *dname;
 char *libname;
 char *classname;

 const char *forwarder;
 const char *bind;
 const char *type;
   const char *rtype;
 _Bool is_imported;

 const char *visibility_str;


 unsigned long long vaddr;
 unsigned long long paddr;
 unsigned int size;
 unsigned int ordinal;
 unsigned int visibility;
 int bits;

 unsigned long long method_flags;
 int dup_count;
} RBinSymbol;

typedef struct r_bin_import_t {
 char *name;
 char *libname;
 const char *bind;
 const char *type;
 char *classname;
 char *descriptor;
 unsigned int ordinal;
 unsigned int visibility;
} RBinImport;

typedef struct r_bin_reloc_t {
 unsigned char type;
 unsigned char additive;
 RBinSymbol *symbol;
 RBinImport *import;
 long long addend;
 unsigned long long vaddr;
 unsigned long long paddr;
 unsigned int visibility;





 _Bool is_ifunc;
} RBinReloc;

typedef struct r_bin_string_t {

 char *string;
 unsigned long long vaddr;
 unsigned long long paddr;
 unsigned int ordinal;
 unsigned int size;
 unsigned int length;
 char type;
} RBinString;

typedef struct r_bin_field_t {
 unsigned long long vaddr;
 unsigned long long paddr;
 int size;
 int offset;
 unsigned int visibility;
 char *name;
 char *type;
 char *comment;
 char *format;
 _Bool format_named;
 unsigned long long flags;
} RBinField;

__attribute__((visibility("default"))) RBinField *r_bin_field_new(unsigned long long paddr, unsigned long long vaddr, int size, const char *name, const char *comment, const char *format, _Bool format_named);
__attribute__((visibility("default"))) void r_bin_field_free(void *);

typedef struct r_bin_mem_t {
 char *name;
 unsigned long long addr;
 int size;
 int perms;
 RList *mirrors;
} RBinMem;

typedef struct r_bin_map_t {
 unsigned long long addr;
 unsigned long long offset;
 int size;
 int perms;
 char *file;
} RBinMap;

typedef struct r_bin_dbginfo_t {
 _Bool (*get_line)(RBinFile *arch, unsigned long long addr, char *file, int len, int *line);
} RBinDbgInfo;

typedef struct r_bin_write_t {
 unsigned long long (*scn_resize)(RBinFile *bf, const char *name, unsigned long long size);
 _Bool (*scn_perms)(RBinFile *bf, const char *name, int perms);
 int (*rpath_del)(RBinFile *bf);
 _Bool (*entry)(RBinFile *bf, unsigned long long addr);
 _Bool (*addlib)(RBinFile *bf, const char *lib);
} RBinWrite;




typedef int (*RBinGetOffset)(RBin *bin, int type, int idx);
typedef const char *(*RBinGetName)(RBin *bin, int type, int idx, _Bool sd);
typedef RList *(*RBinGetSections)(RBin *bin);
typedef RBinSection *(*RBinGetSectionAt)(RBin *bin, unsigned long long addr);
typedef char *(*RBinDemangle)(RBinFile *bf, const char *def, const char *str, unsigned long long vaddr, _Bool libs);

typedef struct r_bin_bind_t {
 RBin *bin;
 RBinGetOffset get_offset;
 RBinGetName get_name;
 RBinGetSections get_sections;
 RBinGetSectionAt get_vsect_at;
 RBinDemangle demangle;
 unsigned int visibility;
} RBinBind;

 RBinSection *r_bin_section_new(const char *name);
 void r_bin_section_free(RBinSection *bs);
__attribute__((visibility("default"))) void r_bin_info_free(RBinInfo *rb);
__attribute__((visibility("default"))) void r_bin_import_free(RBinImport *imp);
__attribute__((visibility("default"))) void r_bin_symbol_free(void *_sym);
__attribute__((visibility("default"))) RBinSymbol *r_bin_symbol_new(const char *name, unsigned long long paddr, unsigned long long vaddr);
__attribute__((visibility("default"))) void r_bin_string_free(void *_str);



__attribute__((visibility("default"))) RBinImport *r_bin_import_clone(RBinImport *o);
__attribute__((visibility("default"))) const char *r_bin_symbol_name(RBinSymbol *s);
typedef void (*RBinSymbolCallback)(RBinObject *obj, RBinSymbol *symbol);


__attribute__((visibility("default"))) void r_bin_file_options_init(RBinFileOptions *opt, int fd, unsigned long long baseaddr, unsigned long long loadaddr, int rawstr);
__attribute__((visibility("default"))) void r_bin_arch_options_init(RBinArchOptions *opt, const char *arch, int bits);


__attribute__((visibility("default"))) RBin *r_bin_new(void);
__attribute__((visibility("default"))) void r_bin_free(RBin *bin);
__attribute__((visibility("default"))) _Bool r_bin_open(RBin *bin, const char *file, RBinFileOptions *opt);
__attribute__((visibility("default"))) _Bool r_bin_open_io(RBin *bin, RBinFileOptions *opt);
__attribute__((visibility("default"))) _Bool r_bin_open_buf(RBin *bin, RBuffer *buf, RBinFileOptions *opt);
__attribute__((visibility("default"))) _Bool r_bin_reload(RBin *bin, unsigned int bf_id, unsigned long long baseaddr);


__attribute__((visibility("default"))) void r_bin_bind(RBin *b, RBinBind *bnd);
__attribute__((visibility("default"))) _Bool r_bin_add(RBin *bin, RBinPlugin *foo);
__attribute__((visibility("default"))) _Bool r_bin_xtr_add(RBin *bin, RBinXtrPlugin *foo);
__attribute__((visibility("default"))) _Bool r_bin_ldr_add(RBin *bin, RBinLdrPlugin *foo);
__attribute__((visibility("default"))) void r_bin_list(RBin *bin, PJ *pj, int format);
__attribute__((visibility("default"))) _Bool r_bin_list_plugin(RBin *bin, const char *name, PJ *pj, int json);
__attribute__((visibility("default"))) RBinPlugin *r_bin_get_binplugin_by_buffer(RBin *bin, RBinFile *bf, RBuffer *buf);
__attribute__((visibility("default"))) void r_bin_force_plugin(RBin *bin, const char *pname);


__attribute__((visibility("default"))) unsigned long long r_bin_get_baddr(RBin *bin);
__attribute__((visibility("default"))) unsigned long long r_bin_file_get_baddr(RBinFile *bf);
__attribute__((visibility("default"))) void r_bin_set_user_ptr(RBin *bin, void *user);
__attribute__((visibility("default"))) RBinInfo *r_bin_get_info(RBin *bin);
__attribute__((visibility("default"))) void r_bin_set_baddr(RBin *bin, unsigned long long baddr);
__attribute__((visibility("default"))) unsigned long long r_bin_get_laddr(RBin *bin);
__attribute__((visibility("default"))) unsigned long long r_bin_get_size(RBin *bin);
__attribute__((visibility("default"))) RBinAddr *r_bin_get_sym(RBin *bin, int sym);
__attribute__((visibility("default"))) RList *r_bin_raw_strings(RBinFile *a, int min);
__attribute__((visibility("default"))) RList *r_bin_dump_strings(RBinFile *a, int min, int raw);


__attribute__((visibility("default"))) RList *r_bin_get_entries(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_get_fields(RBin *bin);
__attribute__((visibility("default"))) const RList *r_bin_get_imports(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_get_libs(RBin *bin);
__attribute__((visibility("default"))) RRBTree *r_bin_patch_relocs(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_patch_relocs_list(RBin *bin);
__attribute__((visibility("default"))) RRBTree *r_bin_get_relocs(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_get_relocs_list(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_get_sections(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_get_classes(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_get_strings(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_file_get_trycatch(RBinFile *bf);
__attribute__((visibility("default"))) RList *r_bin_get_symbols(RBin *bin);
__attribute__((visibility("default"))) RList *r_bin_reset_strings(RBin *bin);
__attribute__((visibility("default"))) int r_bin_is_string(RBin *bin, unsigned long long va);
__attribute__((visibility("default"))) int r_bin_is_big_endian(RBin *bin);
__attribute__((visibility("default"))) int r_bin_is_static(RBin *bin);
__attribute__((visibility("default"))) unsigned long long r_bin_get_vaddr(RBin *bin, unsigned long long paddr, unsigned long long vaddr);
__attribute__((visibility("default"))) unsigned long long r_bin_file_get_vaddr(RBinFile *bf, unsigned long long paddr, unsigned long long vaddr);
__attribute__((visibility("default"))) unsigned long long r_bin_a2b(RBin *bin, unsigned long long addr);

__attribute__((visibility("default"))) int r_bin_load_languages(RBinFile *binfile);
__attribute__((visibility("default"))) RBinFile *r_bin_cur(RBin *bin);
__attribute__((visibility("default"))) RBinObject *r_bin_cur_object(RBin *bin);


__attribute__((visibility("default"))) _Bool r_bin_select(RBin *bin, const char *arch, int bits, const char *name);
__attribute__((visibility("default"))) _Bool r_bin_select_bfid(RBin *bin, unsigned int bf_id);
__attribute__((visibility("default"))) _Bool r_bin_use_arch(RBin *bin, const char *arch, int bits, const char *name);
__attribute__((visibility("default"))) void r_bin_list_archs(RBin *bin, PJ *pj, int mode);
__attribute__((visibility("default"))) RBuffer *r_bin_create(RBin *bin, const char *plugin_name, const unsigned char *code, int codelen, const unsigned char *data, int datalen, RBinArchOptions *opt);
__attribute__((visibility("default"))) RBuffer *r_bin_package(RBin *bin, const char *type, const char *file, RList *files);

__attribute__((visibility("default"))) const char *r_bin_string_type(int type);
__attribute__((visibility("default"))) const char *r_bin_entry_type_string(int etype);

__attribute__((visibility("default"))) _Bool r_bin_file_object_new_from_xtr_data(RBin *bin, RBinFile *bf, unsigned long long baseaddr, unsigned long long loadaddr, RBinXtrData *data);




__attribute__((visibility("default"))) _Bool r_bin_file_close(RBin *bin, int bd);
__attribute__((visibility("default"))) void r_bin_file_free(void *bf_);

__attribute__((visibility("default"))) RBinFile *r_bin_file_at(RBin *bin, unsigned long long addr);
__attribute__((visibility("default"))) RBinFile *r_bin_file_find_by_object_id(RBin *bin, unsigned int binobj_id);
__attribute__((visibility("default"))) RList *r_bin_file_get_symbols(RBinFile *bf);

__attribute__((visibility("default"))) unsigned long long r_bin_file_get_vaddr(RBinFile *bf, unsigned long long paddr, unsigned long long vaddr);

__attribute__((visibility("default"))) RBinClass *r_bin_file_add_class(RBinFile *binfile, const char *name, const char *super, int view);
__attribute__((visibility("default"))) RBinSymbol *r_bin_file_add_method(RBinFile *bf, const char *classname, const char *name, int nargs);
__attribute__((visibility("default"))) RBinField *r_bin_file_add_field(RBinFile *binfile, const char *classname, const char *name);

__attribute__((visibility("default"))) RBinFile *r_bin_file_find_by_arch_bits(RBin *bin, const char *arch, int bits);
__attribute__((visibility("default"))) RBinFile *r_bin_file_find_by_id(RBin *bin, unsigned int bin_id);
__attribute__((visibility("default"))) RBinFile *r_bin_file_find_by_fd(RBin *bin, unsigned int bin_fd);
__attribute__((visibility("default"))) RBinFile *r_bin_file_find_by_name(RBin *bin, const char *name);

__attribute__((visibility("default"))) _Bool r_bin_file_set_cur_binfile(RBin *bin, RBinFile *bf);
__attribute__((visibility("default"))) _Bool r_bin_file_set_cur_by_name(RBin *bin, const char *name);
__attribute__((visibility("default"))) _Bool r_bin_file_deref(RBin *bin, RBinFile *a);
__attribute__((visibility("default"))) _Bool r_bin_file_set_cur_by_fd(RBin *bin, unsigned int bin_fd);
__attribute__((visibility("default"))) _Bool r_bin_file_set_cur_by_id(RBin *bin, unsigned int bin_id);
__attribute__((visibility("default"))) _Bool r_bin_file_set_cur_by_name(RBin *bin, const char *name);
__attribute__((visibility("default"))) unsigned long long r_bin_file_delete_all(RBin *bin);
__attribute__((visibility("default"))) _Bool r_bin_file_delete(RBin *bin, unsigned int bin_id);
__attribute__((visibility("default"))) RList *r_bin_file_compute_hashes(RBin *bin, unsigned long long limit);
__attribute__((visibility("default"))) RList *r_bin_file_set_hashes(RBin *bin, RList *new_hashes);
__attribute__((visibility("default"))) RBinPlugin *r_bin_file_cur_plugin(RBinFile *binfile);
__attribute__((visibility("default"))) void r_bin_file_hash_free(RBinFileHash *fhash);


__attribute__((visibility("default"))) int r_bin_object_set_items(RBinFile *binfile, RBinObject *o);
__attribute__((visibility("default"))) _Bool r_bin_object_delete(RBin *bin, unsigned int binfile_id);
__attribute__((visibility("default"))) void r_bin_mem_free(void *data);


__attribute__((visibility("default"))) char *r_bin_demangle(RBinFile *binfile, const char *lang, const char *str, unsigned long long vaddr, _Bool libs);
__attribute__((visibility("default"))) char *r_bin_demangle_java(const char *str);
__attribute__((visibility("default"))) char *r_bin_demangle_cxx(RBinFile *binfile, const char *str, unsigned long long vaddr);
__attribute__((visibility("default"))) char *r_bin_demangle_msvc(const char *str);
__attribute__((visibility("default"))) char *r_bin_demangle_swift(const char *s, _Bool syscmd, _Bool trylib);
__attribute__((visibility("default"))) char *r_bin_demangle_objc(RBinFile *binfile, const char *sym);
__attribute__((visibility("default"))) char *r_bin_demangle_rust(RBinFile *binfile, const char *str, unsigned long long vaddr);
__attribute__((visibility("default"))) int r_bin_demangle_type(const char *str);
__attribute__((visibility("default"))) void r_bin_demangle_list(RBin *bin);
__attribute__((visibility("default"))) char *r_bin_demangle_plugin(RBin *bin, const char *name, const char *str);
__attribute__((visibility("default"))) const char *r_bin_get_meth_flag_string(unsigned long long flag, _Bool compact);

__attribute__((visibility("default"))) RBinSection *r_bin_get_section_at(RBinObject *o, unsigned long long off, int va);


__attribute__((visibility("default"))) _Bool r_bin_addr2line(RBin *bin, unsigned long long addr, char *file, int len, int *line);
__attribute__((visibility("default"))) _Bool r_bin_addr2line2(RBin *bin, unsigned long long addr, char *file, int len, int *line);
__attribute__((visibility("default"))) char *r_bin_addr2text(RBin *bin, unsigned long long addr, int origin);
__attribute__((visibility("default"))) char *r_bin_addr2fileline(RBin *bin, unsigned long long addr);

__attribute__((visibility("default"))) _Bool r_bin_wr_addlib(RBin *bin, const char *lib);
__attribute__((visibility("default"))) unsigned long long r_bin_wr_scn_resize(RBin *bin, const char *name, unsigned long long size);
__attribute__((visibility("default"))) _Bool r_bin_wr_scn_perms(RBin *bin, const char *name, int perms);
__attribute__((visibility("default"))) _Bool r_bin_wr_rpath_del(RBin *bin);
__attribute__((visibility("default"))) _Bool r_bin_wr_entry(RBin *bin, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_bin_wr_output(RBin *bin, const char *filename);

__attribute__((visibility("default"))) RList *r_bin_get_mem(RBin *bin);


__attribute__((visibility("default"))) void r_bin_load_filter(RBin *bin, unsigned long long rules);
__attribute__((visibility("default"))) void r_bin_filter_symbols(RBinFile *bf, RList *list);
__attribute__((visibility("default"))) void r_bin_filter_sections(RBinFile *bf, RList *list);
__attribute__((visibility("default"))) char *r_bin_filter_name(RBinFile *bf, HtPU *db, unsigned long long addr, char *name);
__attribute__((visibility("default"))) void r_bin_filter_sym(RBinFile *bf, HtPP *ht, unsigned long long vaddr, RBinSymbol *sym);
__attribute__((visibility("default"))) _Bool r_bin_strpurge(RBin *bin, const char *str, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_bin_string_filter(RBin *bin, const char *str, unsigned long long addr);


extern RBinPlugin r_bin_plugin_any;
extern RBinPlugin r_bin_plugin_fs;
extern RBinPlugin r_bin_plugin_cgc;
extern RBinPlugin r_bin_plugin_elf;
extern RBinPlugin r_bin_plugin_elf64;
extern RBinPlugin r_bin_plugin_p9;
extern RBinPlugin r_bin_plugin_ne;
extern RBinPlugin r_bin_plugin_le;
extern RBinPlugin r_bin_plugin_pe;
extern RBinPlugin r_bin_plugin_mz;
extern RBinPlugin r_bin_plugin_pe64;
extern RBinPlugin r_bin_plugin_pebble;
extern RBinPlugin r_bin_plugin_bios;
extern RBinPlugin r_bin_plugin_bf;
extern RBinPlugin r_bin_plugin_te;
extern RBinPlugin r_bin_plugin_symbols;
extern RBinPlugin r_bin_plugin_mach0;
extern RBinPlugin r_bin_plugin_mach064;
extern RBinPlugin r_bin_plugin_mdmp;
extern RBinPlugin r_bin_plugin_java;
extern RBinPlugin r_bin_plugin_dex;
extern RBinPlugin r_bin_plugin_coff;
extern RBinPlugin r_bin_plugin_ningb;
extern RBinPlugin r_bin_plugin_ningba;
extern RBinPlugin r_bin_plugin_ninds;
extern RBinPlugin r_bin_plugin_nin3ds;
extern RBinPlugin r_bin_plugin_xbe;
extern RBinPlugin r_bin_plugin_bflt;
extern RBinXtrPlugin r_bin_xtr_plugin_xtr_fatmach0;
extern RBinXtrPlugin r_bin_xtr_plugin_xtr_dyldcache;
extern RBinXtrPlugin r_bin_xtr_plugin_xtr_pemixed;
extern RBinXtrPlugin r_bin_xtr_plugin_xtr_sep64;
extern RBinLdrPlugin r_bin_ldr_plugin_ldr_linux;
extern RBinPlugin r_bin_plugin_zimg;
extern RBinPlugin r_bin_plugin_omf;
extern RBinPlugin r_bin_plugin_art;
extern RBinPlugin r_bin_plugin_bootimg;
extern RBinPlugin r_bin_plugin_dol;
extern RBinPlugin r_bin_plugin_nes;
extern RBinPlugin r_bin_plugin_qnx;
extern RBinPlugin r_bin_plugin_mbn;
extern RBinPlugin r_bin_plugin_smd;
extern RBinPlugin r_bin_plugin_msx;
extern RBinPlugin r_bin_plugin_sms;
extern RBinPlugin r_bin_plugin_psxexe;
extern RBinPlugin r_bin_plugin_vsf;
extern RBinPlugin r_bin_plugin_dyldcache;
extern RBinPlugin r_bin_plugin_xnu_kernelcache;
extern RBinPlugin r_bin_plugin_avr;
extern RBinPlugin r_bin_plugin_menuet;
extern RBinPlugin r_bin_plugin_wad;
extern RBinPlugin r_bin_plugin_wasm;
extern RBinPlugin r_bin_plugin_nro;
extern RBinPlugin r_bin_plugin_nso;
extern RBinPlugin r_bin_plugin_sfc;
extern RBinPlugin r_bin_plugin_z64;
extern RBinPlugin r_bin_plugin_prg;
extern RBinPlugin r_bin_plugin_dmp64;
extern RBinPlugin r_bin_plugin_pyc;
extern RBinPlugin r_bin_plugin_off;
extern RBinPlugin r_bin_plugin_tic;
extern RBinPlugin r_bin_plugin_hunk;
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_asm.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_parse.h" 1 3 4






# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flag.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_flag.h" 3 4
__attribute__((visibility("default"))) const char *r_flag_version(void);







typedef struct r_flag_zone_item_t {
 unsigned long long from;
 unsigned long long to;



 char *name;

} RFlagZoneItem;



typedef struct r_flags_at_offset_t {
 unsigned long long off;
 RList *flags;
} RFlagsAtOffset;

typedef struct r_flag_item_t {
 char *name;
 char *realname;
 _Bool demangled;
 unsigned long long offset;
 unsigned long long size;
 RSpace *space;
 char *color;
 char *comment;
 char *alias;
 char *type;
} RFlagItem;

typedef struct r_flag_t {
 RSpaces spaces;
 long long base;
 _Bool realnames;
 Sdb *tags;
 RNum *num;
 RSkipList *by_off;
 HtPP *ht_name;
 PrintfCallback cb_printf;
 RList *zones;
 unsigned long long mask;
} RFlag;



typedef _Bool (*RFlagExistAt)(RFlag *f, const char *flag_prefix, unsigned short fp_size, unsigned long long off);
typedef RFlagItem* (*RFlagGet)(RFlag *f, const char *name);
typedef RFlagItem* (*RFlagGetAtAddr) (RFlag *f, unsigned long long);
typedef RFlagItem* (*RFlagGetAt)(RFlag *f, unsigned long long addr, _Bool closest);
typedef const RList* (*RFlagGetList)(RFlag *f, unsigned long long addr);
typedef RFlagItem* (*RFlagSet)(RFlag *f, const char *name, unsigned long long addr, unsigned int size);
typedef _Bool (*RFlagUnset)(RFlag *f, RFlagItem *item);
typedef _Bool (*RFlagUnsetName)(RFlag *f, const char *name);
typedef _Bool (*RFlagUnsetOff)(RFlag *f, unsigned long long addr);
typedef RSpace *(*RFlagSetSpace)(RFlag *f, const char *name);
typedef _Bool (*RFlagPopSpace)(RFlag *f);
typedef _Bool (*RFlagPushSpace)(RFlag *f, const char *name);

typedef _Bool (*RFlagItemCb)(RFlagItem *fi, void *user);

typedef struct r_flag_bind_t {
 int init;
 RFlag *f;
 RFlagExistAt exist_at;
 RFlagGet get;
 RFlagGetAt get_at;
 RFlagGetList get_list;
 RFlagSet set;
 RFlagUnset unset;
 RFlagUnsetName unset_name;
 RFlagUnsetOff unset_off;
 RFlagSetSpace set_fs;
 RFlagPushSpace push_fs;
 RFlagPopSpace pop_fs;
} RFlagBind;


__attribute__((visibility("default"))) void r_flag_bind(RFlag *io, RFlagBind *bnd);


__attribute__((visibility("default"))) RFlag * r_flag_new(void);
__attribute__((visibility("default"))) RFlag * r_flag_free(RFlag *f);
__attribute__((visibility("default"))) void r_flag_list(RFlag *f, int rad, const char *pfx);
__attribute__((visibility("default"))) _Bool r_flag_exist_at(RFlag *f, const char *flag_prefix, unsigned short fp_size, unsigned long long off);
__attribute__((visibility("default"))) RFlagItem *r_flag_get(RFlag *f, const char *name);
__attribute__((visibility("default"))) RFlagItem *r_flag_get_i(RFlag *f, unsigned long long off);
__attribute__((visibility("default"))) RFlagItem *r_flag_get_by_spaces(RFlag *f, unsigned long long off, ...);
__attribute__((visibility("default"))) RFlagItem *r_flag_get_at(RFlag *f, unsigned long long off, _Bool closest);
__attribute__((visibility("default"))) RList *r_flag_all_list(RFlag *f, _Bool by_space);
__attribute__((visibility("default"))) const RList* r_flag_get_list(RFlag *f, unsigned long long off);
__attribute__((visibility("default"))) char *r_flag_get_liststr(RFlag *f, unsigned long long off);
__attribute__((visibility("default"))) _Bool r_flag_unset(RFlag *f, RFlagItem *item);
__attribute__((visibility("default"))) _Bool r_flag_unset_name(RFlag *f, const char *name);
__attribute__((visibility("default"))) void r_flag_item_set_type(RFlagItem *fi, const char *type);
__attribute__((visibility("default"))) _Bool r_flag_unset_off(RFlag *f, unsigned long long addr);
__attribute__((visibility("default"))) void r_flag_unset_all (RFlag *f);
__attribute__((visibility("default"))) RFlagItem *r_flag_set(RFlag *fo, const char *name, unsigned long long addr, unsigned int size);
__attribute__((visibility("default"))) RFlagItem *r_flag_set_inspace(RFlag *f, const char *space, const char *name, unsigned long long off, unsigned int size);
__attribute__((visibility("default"))) RFlagItem *r_flag_set_next(RFlag *fo, const char *name, unsigned long long addr, unsigned int size);
__attribute__((visibility("default"))) void r_flag_item_set_alias(RFlagItem *item, const char *alias);
__attribute__((visibility("default"))) void r_flag_item_free (RFlagItem *item);
__attribute__((visibility("default"))) void r_flag_item_set_comment(RFlagItem *item, const char *comment);
__attribute__((visibility("default"))) void r_flag_item_set_realname(RFlagItem *item, const char *realname);
__attribute__((visibility("default"))) const char *r_flag_item_set_color(RFlagItem *item, const char *color);
__attribute__((visibility("default"))) RFlagItem *r_flag_item_clone(RFlagItem *item);
__attribute__((visibility("default"))) int r_flag_unset_glob(RFlag *f, const char *name);
__attribute__((visibility("default"))) int r_flag_rename(RFlag *f, RFlagItem *item, const char *name);
__attribute__((visibility("default"))) int r_flag_relocate(RFlag *f, unsigned long long off, unsigned long long off_mask, unsigned long long to);
__attribute__((visibility("default"))) _Bool r_flag_move (RFlag *f, unsigned long long at, unsigned long long to);
__attribute__((visibility("default"))) int r_flag_count(RFlag *f, const char *glob);
__attribute__((visibility("default"))) void r_flag_foreach(RFlag *f, RFlagItemCb cb, void *user);
__attribute__((visibility("default"))) void r_flag_foreach_prefix(RFlag *f, const char *pfx, int pfx_len, RFlagItemCb cb, void *user);
__attribute__((visibility("default"))) void r_flag_foreach_range(RFlag *f, unsigned long long from, unsigned long long to, RFlagItemCb cb, void *user);
__attribute__((visibility("default"))) void r_flag_foreach_glob(RFlag *f, const char *glob, RFlagItemCb cb, void *user);
__attribute__((visibility("default"))) void r_flag_foreach_space(RFlag *f, const RSpace *space, RFlagItemCb cb, void *user);
__attribute__((visibility("default"))) void r_flag_foreach_space_glob(RFlag *f, const char *glob, const RSpace *space, RFlagItemCb cb, void *user);


static inline RSpace *r_flag_space_get(RFlag *f, const char *name) {
 return r_spaces_get (&f->spaces, name);
}

static inline RSpace *r_flag_space_cur(RFlag *f) {
 return r_spaces_current (&f->spaces);
}

static inline const char *r_flag_space_cur_name(RFlag *f) {
 return r_spaces_current_name (&f->spaces);
}

static inline RSpace *r_flag_space_set(RFlag *f, const char *name) {
 return r_spaces_set (&f->spaces, name);
}

static inline _Bool r_flag_space_unset(RFlag *f, const char *name) {
 return r_spaces_unset (&f->spaces, name);
}

static inline _Bool r_flag_space_rename(RFlag *f, const char *oname, const char *nname) {
 return r_spaces_rename (&f->spaces, oname, nname);
}

static inline _Bool r_flag_space_push(RFlag *f, const char *name) {
 return r_spaces_push (&f->spaces, name);
}

static inline _Bool r_flag_space_pop(RFlag *f) {
 return r_spaces_pop (&f->spaces);
}

static inline int r_flag_space_count(RFlag *f, const char *name) {
 return r_spaces_count (&f->spaces, name);
}

static inline _Bool r_flag_space_is_empty(RFlag *f) {
 return r_spaces_is_empty (&f->spaces);
}




__attribute__((visibility("default"))) RList *r_flag_tags_list(RFlag *f, const char *name);
__attribute__((visibility("default"))) RList *r_flag_tags_set(RFlag *f, const char *name, const char *words);
__attribute__((visibility("default"))) void r_flag_tags_reset(RFlag *f, const char *name);
__attribute__((visibility("default"))) RList *r_flag_tags_get(RFlag *f, const char *name);



__attribute__((visibility("default"))) void r_flag_zone_item_free(void *a);
__attribute__((visibility("default"))) _Bool r_flag_zone_add(RFlag *fz, const char *name, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_flag_zone_del(RFlag *fz, const char *name);
__attribute__((visibility("default"))) _Bool r_flag_zone_around(RFlag *fz, unsigned long long addr, const char **prev, const char **next);
__attribute__((visibility("default"))) _Bool r_flag_zone_list(RFlag *fz, int mode);
__attribute__((visibility("default"))) _Bool r_flag_zone_reset(RFlag *f);
__attribute__((visibility("default"))) RList *r_flag_zone_barlist(RFlag *f, unsigned long long from, unsigned long long bsize, int rows);
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_parse.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_reg.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_reg.h" 3 4
__attribute__((visibility("default"))) const char *r_reg_version(void);





typedef enum {
 R_REG_TYPE_GPR,
 R_REG_TYPE_DRX,
 R_REG_TYPE_FPU,
 R_REG_TYPE_MMX,
 R_REG_TYPE_XMM,
 R_REG_TYPE_YMM,
 R_REG_TYPE_FLG,
 R_REG_TYPE_SEG,
 R_REG_TYPE_LAST,
 R_REG_TYPE_ALL = -1,
} RRegisterType;





typedef enum {
 R_REG_NAME_PC,
 R_REG_NAME_SP,
 R_REG_NAME_SR,
 R_REG_NAME_BP,
 R_REG_NAME_LR,
 R_REG_NAME_RS,

 R_REG_NAME_A0,
 R_REG_NAME_A1,
 R_REG_NAME_A2,
 R_REG_NAME_A3,
 R_REG_NAME_A4,
 R_REG_NAME_A5,
 R_REG_NAME_A6,
 R_REG_NAME_A7,
 R_REG_NAME_A8,
 R_REG_NAME_A9,

 R_REG_NAME_R0,
 R_REG_NAME_R1,
 R_REG_NAME_R2,
 R_REG_NAME_R3,

 R_REG_NAME_ZF,
 R_REG_NAME_SF,
 R_REG_NAME_CF,
 R_REG_NAME_OF,

 R_REG_NAME_SN,
 R_REG_NAME_LAST,
} RRegisterId;
# 90 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_reg.h" 3 4
typedef struct r_reg_item_t {
 char *name;
 int type;
 int size;
 int offset;
 int packed_size;
 _Bool is_float;
 char *flags;
 char *comment;
 int index;
 int arena;
} RRegItem;

typedef struct r_reg_arena_t {
 unsigned char *bytes;
 int size;
} RRegArena;

typedef struct r_reg_set_t {
 RRegArena *arena;
 RList *pool;
 RList *regs;
 HtPP *ht_regs;
 RListIter *cur;
 int maskregstype;
} RRegSet;

typedef struct r_reg_t {
 char *profile;
 char *reg_profile_cmt;
 char *reg_profile_str;
 char *name[R_REG_NAME_LAST];
 RRegSet regset[R_REG_TYPE_LAST];
 RList *allregs;
 RList *roregs;
 int iters;
 int arch;
 int bits;
 int size;
 int bits_default;
 _Bool is_thumb;
 _Bool big_endian;
} RReg;

typedef struct r_reg_flags_t {
 _Bool s;
 _Bool z;
 _Bool a;
 _Bool c;
 _Bool o;
 _Bool p;
} RRegFlags;


__attribute__((visibility("default"))) void r_reg_free(RReg *reg);
__attribute__((visibility("default"))) void r_reg_free_internal(RReg *reg, _Bool init);
__attribute__((visibility("default"))) RReg *r_reg_new(void);
__attribute__((visibility("default"))) RReg *r_reg_init(RReg *reg);
__attribute__((visibility("default"))) _Bool r_reg_set_name(RReg *reg, int role, const char *name);
__attribute__((visibility("default"))) _Bool r_reg_set_profile_string(RReg *reg, const char *profile);
__attribute__((visibility("default"))) char* r_reg_profile_to_cc(RReg *reg);
__attribute__((visibility("default"))) _Bool r_reg_set_profile(RReg *reg, const char *profile);
__attribute__((visibility("default"))) char *r_reg_parse_gdb_profile(const char *profile);
__attribute__((visibility("default"))) _Bool r_reg_is_readonly(RReg *reg, RRegItem *item);

__attribute__((visibility("default"))) RRegSet *r_reg_regset_get(RReg *r, int type);
__attribute__((visibility("default"))) unsigned long long r_reg_getv(RReg *reg, const char *name);
__attribute__((visibility("default"))) unsigned long long r_reg_setv(RReg *reg, const char *name, unsigned long long val);
__attribute__((visibility("default"))) const char *r_reg_32_to_64(RReg *reg, const char *rreg32);
__attribute__((visibility("default"))) const char *r_reg_64_to_32(RReg *reg, const char *rreg64);
__attribute__((visibility("default"))) const char *r_reg_get_name_by_type(RReg *reg, const char *name);
__attribute__((visibility("default"))) const char *r_reg_get_type(int idx);
__attribute__((visibility("default"))) const char *r_reg_get_name(RReg *reg, int kind);
__attribute__((visibility("default"))) const char *r_reg_get_role(int role);
__attribute__((visibility("default"))) RRegItem *r_reg_get(RReg *reg, const char *name, int type);
__attribute__((visibility("default"))) RList *r_reg_get_list(RReg *reg, int type);
__attribute__((visibility("default"))) RRegItem *r_reg_get_at(RReg *reg, int type, int regsize, int delta);
__attribute__((visibility("default"))) RRegItem *r_reg_next_diff(RReg *reg, int type, const unsigned char *buf, int buflen, RRegItem *prev_ri, int regsize);

__attribute__((visibility("default"))) void r_reg_reindex(RReg *reg);
__attribute__((visibility("default"))) RRegItem *r_reg_index_get(RReg *reg, int idx);


__attribute__((visibility("default"))) void r_reg_item_free(RRegItem *item);


__attribute__((visibility("default"))) int r_reg_type_by_name(const char *str);
__attribute__((visibility("default"))) int r_reg_get_name_idx(const char *type);

__attribute__((visibility("default"))) RRegItem *r_reg_cond_get(RReg *reg, const char *name);
__attribute__((visibility("default"))) void r_reg_cond_apply(RReg *r, RRegFlags *f);
__attribute__((visibility("default"))) _Bool r_reg_cond_set(RReg *reg, const char *name, _Bool val);
__attribute__((visibility("default"))) _Bool r_reg_cond_get_value(RReg *r, const char *name);
__attribute__((visibility("default"))) _Bool r_reg_cond_bits_set(RReg *r, int type, RRegFlags *f, _Bool v);
__attribute__((visibility("default"))) int r_reg_cond_bits(RReg *r, int type, RRegFlags *f);
__attribute__((visibility("default"))) RRegFlags *r_reg_cond_retrieve(RReg *r, RRegFlags *);
__attribute__((visibility("default"))) int r_reg_cond(RReg *r, int type);


__attribute__((visibility("default"))) unsigned long long r_reg_get_value(RReg *reg, RRegItem *item);
__attribute__((visibility("default"))) unsigned long long r_reg_get_value_big(RReg *reg, RRegItem *item, utX *val);
__attribute__((visibility("default"))) unsigned long long r_reg_get_value_by_role(RReg *reg, RRegisterId role);
__attribute__((visibility("default"))) _Bool r_reg_set_value(RReg *reg, RRegItem *item, unsigned long long value);
__attribute__((visibility("default"))) _Bool r_reg_set_value_by_role(RReg *reg, RRegisterId role, unsigned long long value);


__attribute__((visibility("default"))) float r_reg_get_float(RReg *reg, RRegItem *item);
__attribute__((visibility("default"))) _Bool r_reg_set_float(RReg *reg, RRegItem *item, float value);


__attribute__((visibility("default"))) double r_reg_get_double(RReg *reg, RRegItem *item);
__attribute__((visibility("default"))) _Bool r_reg_set_double(RReg *reg, RRegItem *item, double value);


__attribute__((visibility("default"))) long double r_reg_get_longdouble(RReg *reg, RRegItem *item);
__attribute__((visibility("default"))) _Bool r_reg_set_longdouble(RReg *reg, RRegItem *item, long double value);


__attribute__((visibility("default"))) char *r_reg_get_bvalue(RReg *reg, RRegItem *item);
__attribute__((visibility("default"))) unsigned long long r_reg_set_bvalue(RReg *reg, RRegItem *item, const char *str);


__attribute__((visibility("default"))) int r_reg_set_pack(RReg *reg, RRegItem *item, int packidx, int packbits, unsigned long long val);
__attribute__((visibility("default"))) unsigned long long r_reg_get_pack(RReg *reg, RRegItem *item, int packidx, int packbits);


__attribute__((visibility("default"))) int r_reg_default_bits(RReg *reg);
__attribute__((visibility("default"))) unsigned char *r_reg_get_bytes(RReg *reg, int type, int *size);
__attribute__((visibility("default"))) _Bool r_reg_set_bytes(RReg *reg, int type, const unsigned char *buf, const int len);
__attribute__((visibility("default"))) _Bool r_reg_read_regs(RReg *reg, unsigned char *buf, const int len);
__attribute__((visibility("default"))) int r_reg_arena_set_bytes(RReg *reg, const char *str);
__attribute__((visibility("default"))) RRegArena *r_reg_arena_new(int size);
__attribute__((visibility("default"))) void r_reg_arena_free(RRegArena *ra);
__attribute__((visibility("default"))) int r_reg_fit_arena(RReg *reg);
__attribute__((visibility("default"))) void r_reg_arena_swap(RReg *reg, int copy);
__attribute__((visibility("default"))) int r_reg_arena_push(RReg *reg);
__attribute__((visibility("default"))) void r_reg_arena_pop(RReg *reg);
__attribute__((visibility("default"))) void r_reg_arena_zero(RReg *reg);

__attribute__((visibility("default"))) unsigned char *r_reg_arena_peek(RReg *reg, int *len);
__attribute__((visibility("default"))) void r_reg_arena_poke(RReg *reg, const unsigned char *buf, int len);
__attribute__((visibility("default"))) unsigned char *r_reg_arena_dup(RReg *reg, const unsigned char *source);
__attribute__((visibility("default"))) const char *r_reg_cond_to_string(int n);
__attribute__((visibility("default"))) int r_reg_cond_from_string(const char *str);
__attribute__((visibility("default"))) void r_reg_arena_shrink(RReg *reg);
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_print.h" 1 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bind.h" 1 3 4
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_print.h" 2 3 4
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_print.h" 3 4
typedef struct {
 char str[4];
} RBraile;

__attribute__((visibility("default"))) RBraile r_print_braile(int u);

typedef int (*RPrintZoomCallback)(void *user, int mode, unsigned long long addr, unsigned char *bufz, unsigned long long size);
typedef const char *(*RPrintNameCallback)(void *user, unsigned long long addr);
typedef int (*RPrintSizeCallback)(void *user, unsigned long long addr);
typedef char *(*RPrintCommentCallback)(void *user, unsigned long long addr);
typedef const char *(*RPrintSectionGet)(void *user, unsigned long long addr);
typedef const char *(*RPrintColorFor)(void *user, unsigned long long addr, _Bool verbose);
typedef char *(*RPrintHasRefs)(void *user, unsigned long long addr, int mode);

typedef struct r_print_zoom_t {
 unsigned char *buf;
 unsigned long long from;
 unsigned long long to;
 int size;
 int mode;
} RPrintZoom;

typedef struct r_print_t {
 void *user;
 RIOBind iob;
 _Bool pava;
 RCoreBind coreb;
 const char *cfmt;
 char datefmt[32];
 int datezone;
 int (*write)(const unsigned char *buf, int len);
 PrintfCallback cb_printf;
 PrintfCallback cb_eprintf;
 char *(*cb_color)(int idx, int last, _Bool bg);
 _Bool scr_prompt;
 int (*disasm)(void *p, unsigned long long addr);
 PrintfCallback oprintf;
 int big_endian;
 int width;
 int limit;
 int bits;
 _Bool histblock;

 _Bool cur_enabled;

 int cur;


 int ocur;
 int cols;
 int flags;
 _Bool use_comments;
 int addrmod;
 int col;
 int stride;
 int bytespace;
 int pairs;
 _Bool resetbg;
 RPrintZoom *zoom;
 RPrintNameCallback offname;
 RPrintSizeCallback offsize;
 RPrintColorFor colorfor;
 RPrintHasRefs hasrefs;
 RPrintCommentCallback get_comments;
 RPrintSectionGet get_section_name;
 Sdb *formats;
 Sdb *sdb_types;
 RCons *cons;
 RConsBind consbind;
 RNum *num;
 RReg *reg;
 RRegItem* (*get_register)(RReg *reg, const char *name, int type);
 unsigned long long (*get_register_value)(RReg *reg, RRegItem *item);
 _Bool (*exists_var)(struct r_print_t *print, unsigned long long func_addr, char *str);
 unsigned long long* lines_cache;
 int lines_cache_sz;
 int lines_abs;
 _Bool esc_bslash;
 _Bool wide_offsets;
 const char *strconv_mode;
 RList *vars;
 char io_unalloc_ch;
 _Bool show_offset;


 _Bool calc_row_offsets;


 unsigned int *row_offsets;

 int row_offsets_sz;

 _Bool vflush;


 unsigned long long screen_bounds;


 _Bool enable_progressbar;
 RCharset *charset;


 int seggrn;
 int segbas;
} RPrint;




typedef _Bool (*RPrintIsInterruptedCallback)();

__attribute__((visibility("default"))) _Bool r_print_is_interrupted(void);
__attribute__((visibility("default"))) void r_print_set_is_interrupted_cb(RPrintIsInterruptedCallback cb);


__attribute__((visibility("default"))) char *r_print_hexpair(RPrint *p, const char *str, int idx);
__attribute__((visibility("default"))) void r_print_hex_from_bin(RPrint *p, char *bin_str);
__attribute__((visibility("default"))) RPrint *r_print_new(void);
__attribute__((visibility("default"))) RPrint *r_print_free(RPrint *p);
__attribute__((visibility("default"))) _Bool r_print_mute(RPrint *p, int x);
__attribute__((visibility("default"))) void r_print_set_flags(RPrint *p, int _flags);
__attribute__((visibility("default"))) void r_print_unset_flags(RPrint *p, int flags);
__attribute__((visibility("default"))) void r_print_addr(RPrint *p, unsigned long long addr);
__attribute__((visibility("default"))) void r_print_section(RPrint *p, unsigned long long at);
__attribute__((visibility("default"))) void r_print_columns(RPrint *p, const unsigned char *buf, int len, int height);
__attribute__((visibility("default"))) void r_print_hexii(RPrint *p, unsigned long long addr, const unsigned char *buf, int len, int step);
__attribute__((visibility("default"))) void r_print_hexdump(RPrint *p, unsigned long long addr, const unsigned char *buf, int len, int base, int step, size_t zoomsz);
__attribute__((visibility("default"))) void r_print_hexdump_simple(const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_print_jsondump(RPrint *p, const unsigned char *buf, int len, int wordsize);
__attribute__((visibility("default"))) void r_print_hexpairs(RPrint *p, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_print_hexdiff(RPrint *p, unsigned long long aa, const unsigned char* a, unsigned long long ba, const unsigned char *b, int len, int scndcol);
__attribute__((visibility("default"))) void r_print_bytes(RPrint *p, const unsigned char* buf, int len, const char *fmt);
__attribute__((visibility("default"))) void r_print_fill(RPrint *p, const unsigned char *arr, int size, unsigned long long addr, int step);
__attribute__((visibility("default"))) void r_print_byte(RPrint *p, const char *fmt, int idx, unsigned char ch);
__attribute__((visibility("default"))) const char *r_print_byte_color(RPrint *p, int ch);
__attribute__((visibility("default"))) void r_print_c(RPrint *p, const unsigned char *str, int len);
__attribute__((visibility("default"))) void r_print_raw(RPrint *p, unsigned long long addr, const unsigned char* buf, int len, int offlines);
__attribute__((visibility("default"))) _Bool r_print_have_cursor(RPrint *p, int cur, int len);
__attribute__((visibility("default"))) _Bool r_print_cursor_pointer(RPrint *p, int cur, int len);
__attribute__((visibility("default"))) void r_print_cursor(RPrint *p, int cur, int len, int set);
__attribute__((visibility("default"))) void r_print_cursor_range(RPrint *p, int cur, int to, int set);
__attribute__((visibility("default"))) int r_print_get_cursor(RPrint *p);
__attribute__((visibility("default"))) void r_print_set_cursor(RPrint *p, int curset, int ocursor, int cursor);
__attribute__((visibility("default"))) void r_print_code(RPrint *p, unsigned long long addr, const unsigned char *buf, int len, char lang);
# 222 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_print.h" 3 4
__attribute__((visibility("default"))) int r_print_format_struct_size(RPrint *p, const char *format, int mode, int n);
__attribute__((visibility("default"))) int r_print_format(RPrint *p, unsigned long long seek, const unsigned char* buf, const int len, const char *fmt, int elem, const char *setval, char *field);
__attribute__((visibility("default"))) const char *r_print_format_byname(RPrint *p, const char *name);
__attribute__((visibility("default"))) void r_print_offset(RPrint *p, unsigned long long off, int invert, int delta, const char *label);
__attribute__((visibility("default"))) void r_print_offset_sg(RPrint *p, unsigned long long off, int invert, int offseg, int seggrn, int offdec, int delta, const char *label);






__attribute__((visibility("default"))) int r_print_string(RPrint *p, unsigned long long seek, const unsigned char *str, int len, int options);
__attribute__((visibility("default"))) int r_print_date_dos(RPrint *p, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_print_date_hfs(RPrint *p, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_print_date_w32(RPrint *p, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_print_date_unix(RPrint *p, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_print_date_get_now(RPrint *p, char *str);
__attribute__((visibility("default"))) void r_print_zoom(RPrint *p, void *user, RPrintZoomCallback cb, unsigned long long from, unsigned long long to, int len, int maxlen);
__attribute__((visibility("default"))) void r_print_zoom_buf(RPrint *p, void *user, RPrintZoomCallback cb, unsigned long long from, unsigned long long to, int len, int maxlen);
__attribute__((visibility("default"))) void r_print_progressbar(RPrint *pr, int pc, int _cols);
__attribute__((visibility("default"))) void r_print_progressbar_with_count(RPrint *pr, unsigned int pc, unsigned int total, int _cols, _Bool reset_line);
__attribute__((visibility("default"))) void r_print_portionbar(RPrint *p, const unsigned long long *portions, int n_portions);
__attribute__((visibility("default"))) void r_print_rangebar(RPrint *p, unsigned long long startA, unsigned long long endA, unsigned long long min, unsigned long long max, int cols);
__attribute__((visibility("default"))) char * r_print_randomart(const unsigned char *dgst_raw, unsigned int dgst_raw_len, unsigned long long addr);
__attribute__((visibility("default"))) void r_print_2bpp_row(RPrint *p, unsigned char *buf, const char **colors);
__attribute__((visibility("default"))) void r_print_2bpp_tiles(RPrint *p, unsigned char *buf, size_t buflen, unsigned int tiles, const char **colors);
__attribute__((visibility("default"))) char * r_print_colorize_opcode(RPrint *print, char *p, const char *reg, const char *num, _Bool partial_reset, unsigned long long func_addr);
__attribute__((visibility("default"))) const char * r_print_color_op_type(RPrint *p, unsigned int anal_type);
__attribute__((visibility("default"))) void r_print_set_interrupted(int i);
__attribute__((visibility("default"))) void r_print_init_rowoffsets(RPrint *p);
__attribute__((visibility("default"))) unsigned int r_print_rowoff(RPrint *p, int i);
__attribute__((visibility("default"))) void r_print_set_rowoff(RPrint *p, int i, unsigned int offset, _Bool overwrite);
__attribute__((visibility("default"))) int r_print_row_at_off(RPrint *p, unsigned int offset);
__attribute__((visibility("default"))) int r_print_pie(RPrint *p, unsigned long long *values, int nvalues, int size);

__attribute__((visibility("default"))) const char* r_print_rowlog(RPrint *print, const char *str);
__attribute__((visibility("default"))) void r_print_rowlog_done(RPrint *print, const char *str);
__attribute__((visibility("default"))) void r_print_graphline(RPrint *print, const unsigned char *buf, size_t len);


__attribute__((visibility("default"))) int r_print_unpack7bit(const char *src, char *dest);
__attribute__((visibility("default"))) int r_print_pack7bit(const char *src, char *dest);
__attribute__((visibility("default"))) char *r_print_stereogram_bytes(const unsigned char *buf, int len);
__attribute__((visibility("default"))) char *r_print_stereogram(const char *bump, int w, int h);
__attribute__((visibility("default"))) void r_print_stereogram_print(RPrint *p, const char *buf);
__attribute__((visibility("default"))) void r_print_set_screenbounds(RPrint *p, unsigned long long addr);
__attribute__((visibility("default"))) int r_util_lines_getline(unsigned long long *lines_cache, int lines_cache_sz, unsigned long long off);
__attribute__((visibility("default"))) char* r_print_json_indent(const char* s, _Bool color, const char *tab, const char **colors);
__attribute__((visibility("default"))) char* r_print_json_human(const char* s);
__attribute__((visibility("default"))) char* r_print_json_path(const char* s, int pos);
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_search.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_search.h" 3 4
__attribute__((visibility("default"))) const char *r_search_version(void);

enum {
 R_SEARCH_ESIL,
 R_SEARCH_KEYWORD,
 R_SEARCH_REGEXP,
 R_SEARCH_PATTERN,
 R_SEARCH_STRING,
 R_SEARCH_XREFS,
 R_SEARCH_AES,
 R_SEARCH_PRIV_KEY,
 R_SEARCH_DELTAKEY,
 R_SEARCH_MAGIC,
 R_SEARCH_LAST
};






typedef struct r_search_keyword_t {
 unsigned char *bin_keyword;
 unsigned char *bin_binmask;
 unsigned int keyword_length;
 unsigned int binmask_length;
 void *data;
 int count;
 int kwidx;
 int icase;
 int type;
 unsigned long long last;
} RSearchKeyword;

typedef struct r_search_uds_t {
 unsigned long long addr;
 int stride;
 int score;
} RSearchUds;

typedef struct r_search_hit_t {
 RSearchKeyword *kw;
 unsigned long long addr;
} RSearchHit;

typedef int (*RSearchCallback)(RSearchKeyword *kw, void *user, unsigned long long where);
typedef void (RSearchDFree)(void *ptr);

typedef struct r_search_t {
 int n_kws;
 int mode;
 unsigned int pattern_size;
 unsigned int string_min;
 unsigned int string_max;
 void *data;
 RSearchDFree *datafree;
 void *user;
 RSearchCallback callback;
 unsigned long long nhits;
 unsigned long long maxhits;
 RList *hits;
 int distance;
 int inverse;
 _Bool overlap;
 int contiguous;
 int align;
 int (*update)(struct r_search_t *s, unsigned long long from, const unsigned char *buf, int len);
 RList *kws;
 RIOBind iob;
 char bckwrds;
} RSearch;





__attribute__((visibility("default"))) RSearch *r_search_new(int mode);
__attribute__((visibility("default"))) int r_search_set_mode(RSearch *s, int mode);
__attribute__((visibility("default"))) void r_search_free(RSearch *s);


__attribute__((visibility("default"))) RList *r_search_find(RSearch *s, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) RList *r_search_find_uds(RSearch *search, unsigned long long addr, const unsigned char *data, size_t size, _Bool verbose);
__attribute__((visibility("default"))) int r_search_update(RSearch *s, unsigned long long from, const unsigned char *buf, long len);

__attribute__((visibility("default"))) void r_search_keyword_free (RSearchKeyword *kw);
__attribute__((visibility("default"))) RSearchKeyword* r_search_keyword_new(const unsigned char *kw, int kwlen, const unsigned char *bm, int bmlen, const char *data);
__attribute__((visibility("default"))) RSearchKeyword* r_search_keyword_new_str(const char *kw, const char *bm, const char *data, int icase);
__attribute__((visibility("default"))) RSearchKeyword* r_search_keyword_new_wide(const char *kw, const char *bm, const char *data, int icase);
__attribute__((visibility("default"))) RSearchKeyword* r_search_keyword_new_hex(const char *kwstr, const char *bmstr, const char *data);
__attribute__((visibility("default"))) RSearchKeyword* r_search_keyword_new_hexmask(const char *kwstr, const char *data);
__attribute__((visibility("default"))) RSearchKeyword *r_search_keyword_new_regexp (const char *str, const char *data);

__attribute__((visibility("default"))) int r_search_kw_add(RSearch *s, RSearchKeyword *kw);
__attribute__((visibility("default"))) void r_search_reset(RSearch *s, int mode);
__attribute__((visibility("default"))) void r_search_kw_reset(RSearch *s);
__attribute__((visibility("default"))) void r_search_string_prepare_backward(RSearch *s);
__attribute__((visibility("default"))) void r_search_kw_reset(RSearch *s);

__attribute__((visibility("default"))) int r_search_range_add(RSearch *s, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) int r_search_range_set(RSearch *s, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) int r_search_range_reset(RSearch *s);


__attribute__((visibility("default"))) int r_search_hit_new(RSearch *s, RSearchKeyword *kw, unsigned long long addr);
__attribute__((visibility("default"))) void r_search_set_distance(RSearch *s, int dist);
__attribute__((visibility("default"))) int r_search_strings(RSearch *s, unsigned int min, unsigned int max);
__attribute__((visibility("default"))) int r_search_set_string_limits(RSearch *s, unsigned int min, unsigned int max);

__attribute__((visibility("default"))) void r_search_set_callback(RSearch *s, RSearchCallback(callback), void *user);
__attribute__((visibility("default"))) int r_search_begin(RSearch *s);


__attribute__((visibility("default"))) void r_search_pattern_size(RSearch *s, int size);
__attribute__((visibility("default"))) int r_search_pattern(RSearch *s, unsigned long long from, unsigned long long to);
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_syscall.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_syscall.h" 3 4
__attribute__((visibility("default"))) const char *r_syscall_version(void);



typedef struct r_syscall_item_t {
 char *name;
 int swi;
 int num;
 int args;
 char *sargs;
} RSyscallItem;

typedef struct r_syscall_port_t {
 int port;
 const char *name;
} RSyscallPort;

typedef struct r_syscall_t {
 FILE *fd;

 char *arch;
 char *os;
 int bits;
 char *cpu;

 RSyscallItem *sysptr;
 RSyscallPort *sysport;
 Sdb *db;
 Sdb *srdb;
 int refs;
} RSyscall;
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_syscall.h" 3 4
typedef struct r_syscall_plugin_t {
 char *name;
 char *arch;
 char *os;
 char *desc;
 int bits;
 int nargs;
 struct r_syscall_args_t *args;
} RSyscallPlugin;

typedef struct r_syscall_arch_plugin_t {
 char *name;
 char *arch;
 char *desc;
 int *bits;
 int nargs;
 struct r_syscall_args_t **args;
} RSyscallArchPlugin;


__attribute__((visibility("default"))) RSyscallItem *r_syscall_item_new_from_string(const char *name, const char *s);
__attribute__((visibility("default"))) void r_syscall_item_free(RSyscallItem *si);

__attribute__((visibility("default"))) RSyscall *r_syscall_new(void);
__attribute__((visibility("default"))) void r_syscall_free(RSyscall *ctx);
__attribute__((visibility("default"))) RSyscall* r_syscall_ref(RSyscall *sc);
__attribute__((visibility("default"))) _Bool r_syscall_setup(RSyscall *s, const char *arch, int bits, const char *cpu, const char *os);
__attribute__((visibility("default"))) RSyscallItem *r_syscall_get(RSyscall *ctx, int num, int swi);
__attribute__((visibility("default"))) int r_syscall_get_num(RSyscall *ctx, const char *str);
__attribute__((visibility("default"))) const char *r_syscall_get_i(RSyscall *ctx, int num, int swi);
__attribute__((visibility("default"))) const char* r_syscall_sysreg(RSyscall *s, const char *type, unsigned long long num);
__attribute__((visibility("default"))) RList *r_syscall_list(RSyscall *ctx);
__attribute__((visibility("default"))) int r_syscall_get_swi(RSyscall *s);


__attribute__((visibility("default"))) const char *r_syscall_get_io(RSyscall *s, int ioport);
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/set.h" 1 3 4




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/ht_up.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/shlr/sdb/src/set.h" 2 3 4

typedef HtPP SetP;
typedef _Bool (*set_p_foreach_cb)(void *userdata, const void *p);
typedef _Bool (*set_u_foreach_cb)(void *userdata, const unsigned long long u);

__attribute__ ((visibility ("default"))) SetP *set_p_new(void);
__attribute__ ((visibility ("default"))) void set_p_add(SetP *p, void *u);
__attribute__ ((visibility ("default"))) _Bool set_p_contains(SetP *s, void *u);
__attribute__ ((visibility ("default"))) void set_p_delete(SetP *s, void *u);
__attribute__ ((visibility ("default"))) void set_p_free(SetP *p);
__attribute__ ((visibility ("default"))) void set_p_foreach(SetP *p, set_p_foreach_cb cb, void *u);

typedef HtUP SetU;

__attribute__ ((visibility ("default"))) SetU *set_u_new(void);
__attribute__ ((visibility ("default"))) void set_u_add(SetU *p, unsigned long long u);
__attribute__ ((visibility ("default"))) _Bool set_u_contains(SetU *s, unsigned long long u);
__attribute__ ((visibility ("default"))) void set_u_delete(SetU *s, unsigned long long u);
__attribute__ ((visibility ("default"))) void set_u_free(SetU *p);

__attribute__ ((visibility ("default"))) void set_u_foreach(SetU *s, set_u_foreach_cb cb, void *u);
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_codemeta.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_codemeta.h" 3 4
typedef enum r_syntax_highlight_type_t {
 R_SYNTAX_HIGHLIGHT_TYPE_KEYWORD,
 R_SYNTAX_HIGHLIGHT_TYPE_COMMENT,
 R_SYNTAX_HIGHLIGHT_TYPE_DATATYPE,
 R_SYNTAX_HIGHLIGHT_TYPE_FUNCTION_NAME,
 R_SYNTAX_HIGHLIGHT_TYPE_FUNCTION_PARAMETER,
 R_SYNTAX_HIGHLIGHT_TYPE_LOCAL_VARIABLE,
 R_SYNTAX_HIGHLIGHT_TYPE_CONSTANT_VARIABLE,
 R_SYNTAX_HIGHLIGHT_TYPE_GLOBAL_VARIABLE,
} RSyntaxHighlightType;


typedef enum r_code_annotation_type_t {
 R_CODEMETA_TYPE_OFFSET,
 R_CODEMETA_TYPE_SYNTAX_HIGHLIGHT,
 R_CODEMETA_TYPE_FUNCTION_NAME,
 R_CODEMETA_TYPE_GLOBAL_VARIABLE,
 R_CODEMETA_TYPE_CONSTANT_VARIABLE,
 R_CODEMETA_TYPE_LOCAL_VARIABLE,
 R_CODEMETA_TYPE_FUNCTION_PARAMETER,

} RCodeMetaItemType;




typedef struct r_codemeta_item_t {
 size_t start;
 size_t end;
 RCodeMetaItemType type;
 union {
  struct {
   unsigned long long offset;
  } offset;
  struct {
   RSyntaxHighlightType type;
  } syntax_highlight;

  struct {
   char *name;
   unsigned long long offset;
  } reference;

  struct {
   char *name;
  } variable;
 };
} RCodeMetaItem;

typedef struct r_codemeta_t {
 char *code;
 RVector annotations;
 RRBTree *tree;
} RCodeMeta;

__attribute__((visibility("default"))) RCodeMeta *r_codemeta_new(const char *code);
__attribute__((visibility("default"))) void r_codemeta_free(RCodeMeta *code);
__attribute__((visibility("default"))) RCodeMetaItem *r_codemeta_item_new(void);
__attribute__((visibility("default"))) void r_codemeta_item_free(RCodeMetaItem *e);
__attribute__((visibility("default"))) void r_codemeta_item_fini(RCodeMetaItem *e);
__attribute__((visibility("default"))) _Bool r_codemeta_item_is_reference(RCodeMetaItem *annotation);
__attribute__((visibility("default"))) _Bool r_codemeta_item_is_variable(RCodeMetaItem *annotation);
__attribute__((visibility("default"))) void r_codemeta_add_item(RCodeMeta *code, RCodeMetaItem *annotation);


__attribute__((visibility("default"))) void r_codemeta_print_json(RCodeMeta *code);
__attribute__((visibility("default"))) void r_codemeta_print(RCodeMeta *code, RVector *line_offsets);
__attribute__((visibility("default"))) void r_codemeta_print_disasm(RCodeMeta *code, RVector *line_offsets, void *anal);
__attribute__((visibility("default"))) void r_codemeta_print_comment_cmds(RCodeMeta *code);



__attribute__((visibility("default"))) RPVector *r_codemeta_at(RCodeMeta *code, size_t offset);
__attribute__((visibility("default"))) RPVector *r_codemeta_in(RCodeMeta *code, size_t start, size_t end);
__attribute__((visibility("default"))) RVector *r_codemeta_line_offsets(RCodeMeta *code);
__attribute__((visibility("default"))) RCodeMetaItem *r_codemeta_item_clone(RCodeMetaItem *code);
__attribute__((visibility("default"))) RCodeMeta *r_codemeta_clone(RCodeMeta *code);
# 23 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4





__attribute__((visibility("default"))) const char *r_anal_version(void);


typedef struct r_anal_dwarf_context {
 const RBinDwarfDebugInfo *info;
 HtUP *loc;

} RAnalDwarfContext;
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
typedef struct {
 struct r_anal_t *anal;
 int type;
 int rad;
 SdbForeachCallback cb;
 void *user;
 int count;
 struct r_anal_function_t *fcn;
 PJ *pj;
} RAnalMetaUserItem;

typedef struct r_anal_range_t {
 unsigned long long from;
 unsigned long long to;
 int bits;
 unsigned long long rb_max_addr;
 RBNode rb;
} RAnalRange;







enum {
 R_ANAL_DATA_TYPE_NULL = 0,
 R_ANAL_DATA_TYPE_UNKNOWN = 1,
 R_ANAL_DATA_TYPE_STRING = 2,
 R_ANAL_DATA_TYPE_WIDE_STRING = 3,
 R_ANAL_DATA_TYPE_POINTER = 4,
 R_ANAL_DATA_TYPE_NUMBER = 5,
 R_ANAL_DATA_TYPE_INVALID = 6,
 R_ANAL_DATA_TYPE_HEADER = 7,
 R_ANAL_DATA_TYPE_SEQUENCE = 8,
 R_ANAL_DATA_TYPE_PATTERN = 9,
};
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
typedef struct r_anal_type_var_t {
 char *name;
 int index;
 int scope;
 unsigned short type;
 unsigned char size;
 union {
  unsigned char v8;
  unsigned short v16;
  unsigned int v32;
  unsigned long long v64;
 } value;
} RAnalTypeVar;

typedef struct r_anal_type_ptr_t {
 char *name;
 unsigned short type;
 unsigned char size;
 union {
  unsigned char v8;
  unsigned short v16;
  unsigned int v32;
  unsigned long long v64;
 } value;
} RAnalTypePtr;

typedef struct r_anal_type_array_t {
 char *name;
 unsigned short type;
 unsigned char size;
 unsigned long long count;
 union {
  unsigned char *v8;
  unsigned short *v16;
  unsigned int *v32;
  unsigned long long *v64;
 } value;
} RAnalTypeArray;

typedef struct r_anal_type_struct_t RAnalTypeStruct;
typedef struct r_anal_type_t RAnalType;

struct r_anal_type_struct_t {
 char *name;
 unsigned char type;
 unsigned int size;
 void *parent;
 RAnalType *items;
};

typedef struct r_anal_type_union_t {
 char *name;
 unsigned char type;
 unsigned int size;
 void *parent;
 RAnalType *items;
} RAnalTypeUnion;

typedef struct r_anal_type_alloca_t {
 long address;
 long size;
 void *parent;
 RAnalType *items;
} RAnalTypeAlloca;

enum {
 R_ANAL_FQUALIFIER_NONE = 0,
 R_ANAL_FQUALIFIER_STATIC = 1,
 R_ANAL_FQUALIFIER_VOLATILE = 2,
 R_ANAL_FQUALIFIER_INLINE = 3,
 R_ANAL_FQUALIFIER_NAKED = 4,
 R_ANAL_FQUALIFIER_VIRTUAL = 5,
};



enum {
 R_ANAL_FCN_TYPE_NULL = 0,
 R_ANAL_FCN_TYPE_FCN = 1 << 0,
 R_ANAL_FCN_TYPE_LOC = 1 << 1,
 R_ANAL_FCN_TYPE_SYM = 1 << 2,
 R_ANAL_FCN_TYPE_IMP = 1 << 3,
 R_ANAL_FCN_TYPE_INT = 1 << 4,
 R_ANAL_FCN_TYPE_ROOT = 1 << 5,
 R_ANAL_FCN_TYPE_ANY = -1
};



enum {
 R_ANAL_DIFF_TYPE_NULL = 0,
 R_ANAL_DIFF_TYPE_MATCH = 'm',
 R_ANAL_DIFF_TYPE_UNMATCH = 'u'
};

typedef struct r_anal_enum_case_t {
 char *name;
 int val;
} RAnalEnumCase;

typedef struct r_anal_struct_member_t {
 char *name;
 char *type;
 size_t offset;
 size_t size;
} RAnalStructMember;

typedef struct r_anal_union_member_t {
 char *name;
 char *type;
 size_t offset;
 size_t size;
} RAnalUnionMember;

typedef enum {
 R_ANAL_BASE_TYPE_KIND_STRUCT,
 R_ANAL_BASE_TYPE_KIND_UNION,
 R_ANAL_BASE_TYPE_KIND_ENUM,
 R_ANAL_BASE_TYPE_KIND_TYPEDEF,
 R_ANAL_BASE_TYPE_KIND_ATOMIC,
} RAnalBaseTypeKind;

typedef struct r_anal_base_type_struct_t {
 RVector members;
} RAnalBaseTypeStruct;

typedef struct r_anal_base_type_union_t {
 RVector members;
} RAnalBaseTypeUnion;

typedef struct r_anal_base_type_enum_t {
 RVector cases;
} RAnalBaseTypeEnum;

typedef struct r_anal_base_type_t {
 char *name;
 char *type;
 unsigned long long size;
 RAnalBaseTypeKind kind;
 union {
  RAnalBaseTypeStruct struct_data;
  RAnalBaseTypeEnum enum_data;
  RAnalBaseTypeUnion union_data;
 };
} RAnalBaseType;

typedef struct r_anal_diff_t {
 int type;
 unsigned long long addr;
 double dist;
 char *name;
 unsigned int size;
} RAnalDiff;
typedef struct r_anal_attr_t RAnalAttr;
struct r_anal_attr_t {
 char *key;
 long value;
 RAnalAttr *next;
};



typedef struct r_anal_function_meta_t {



 unsigned long long _min;
 unsigned long long _max;

 int numrefs;
 int numcallrefs;
} RAnalFcnMeta;

typedef struct r_anal_function_t {
 char *name;
 int bits;
 int type;
 const char *cc;
 unsigned long long addr;
 HtUP *labels;
 HtPP *label_addrs;
 RPVector vars;
 HtUP *inst_vars;
 unsigned long long reg_save_area;
 long long bp_off;
 long long stack;
 int maxstack;
 int ninstr;
 _Bool folded;
 _Bool is_pure;
 _Bool is_variadic;
 _Bool has_changed;
 _Bool bp_frame;
 _Bool is_noreturn;
 unsigned char *fingerprint;
 size_t fingerprint_size;
 RAnalDiff *diff;
 RList *bbs;
 RAnalFcnMeta meta;
 RList *imports;
 struct r_anal_t *anal;
} RAnalFunction;

typedef struct r_anal_func_arg_t {
 const char *name;
 const char *fmt;
 const char *cc_source;
 char *orig_c_type;
 char *c_type;
 unsigned long long size;
 unsigned long long src;
} RAnalFuncArg;

struct r_anal_type_t {
 char *name;
 unsigned int type;
 unsigned int size;
 RList *content;
};

typedef enum {
 R_META_TYPE_ANY = -1,
 R_META_TYPE_DATA = 'd',
 R_META_TYPE_CODE = 'c',
 R_META_TYPE_STRING = 's',
 R_META_TYPE_FORMAT = 'f',
 R_META_TYPE_MAGIC = 'm',
 R_META_TYPE_HIDE = 'h',
 R_META_TYPE_COMMENT = 'C',
 R_META_TYPE_RUN = 'r',
 R_META_TYPE_HIGHLIGHT = 'H',
 R_META_TYPE_VARTYPE = 't',
} RAnalMetaType;


typedef struct r_anal_meta_item_t {
 RAnalMetaType type;
 int subtype;
 char *str;
 const RSpace *space;
} RAnalMetaItem;


typedef enum {
 R_ANAL_OP_FAMILY_UNKNOWN = -1,
 R_ANAL_OP_FAMILY_CPU = 0,
 R_ANAL_OP_FAMILY_FPU,
 R_ANAL_OP_FAMILY_MMX,
 R_ANAL_OP_FAMILY_SSE,
 R_ANAL_OP_FAMILY_PRIV,
 R_ANAL_OP_FAMILY_CRYPTO,
 R_ANAL_OP_FAMILY_THREAD,
 R_ANAL_OP_FAMILY_VIRT,
 R_ANAL_OP_FAMILY_SECURITY,
 R_ANAL_OP_FAMILY_IO,
 R_ANAL_OP_FAMILY_LAST
} RAnalOpFamily;
# 396 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
 typedef enum {
  R_ANAL_OP_PREFIX_COND = 1,
  R_ANAL_OP_PREFIX_REP = 1<<1,
  R_ANAL_OP_PREFIX_REPNE = 1<<2,
  R_ANAL_OP_PREFIX_LOCK = 1<<3,
  R_ANAL_OP_PREFIX_LIKELY = 1<<4,
  R_ANAL_OP_PREFIX_UNLIKELY = 1<<5

 } RAnalOpPrefix;




typedef enum {
 R_ANAL_OP_TYPE_COND = 0x80000000,

 R_ANAL_OP_TYPE_REP = 0x40000000,
 R_ANAL_OP_TYPE_MEM = 0x20000000,
 R_ANAL_OP_TYPE_REG = 0x10000000,
 R_ANAL_OP_TYPE_IND = 0x08000000,
 R_ANAL_OP_TYPE_NULL = 0,
 R_ANAL_OP_TYPE_JMP = 1,
 R_ANAL_OP_TYPE_UJMP = 2,
 R_ANAL_OP_TYPE_RJMP = R_ANAL_OP_TYPE_REG | R_ANAL_OP_TYPE_UJMP,
 R_ANAL_OP_TYPE_IJMP = R_ANAL_OP_TYPE_IND | R_ANAL_OP_TYPE_UJMP,
 R_ANAL_OP_TYPE_IRJMP = R_ANAL_OP_TYPE_IND | R_ANAL_OP_TYPE_REG | R_ANAL_OP_TYPE_UJMP,
 R_ANAL_OP_TYPE_CJMP = R_ANAL_OP_TYPE_COND | R_ANAL_OP_TYPE_JMP,
 R_ANAL_OP_TYPE_RCJMP = R_ANAL_OP_TYPE_REG | R_ANAL_OP_TYPE_CJMP,
 R_ANAL_OP_TYPE_MJMP = R_ANAL_OP_TYPE_MEM | R_ANAL_OP_TYPE_JMP,
 R_ANAL_OP_TYPE_MCJMP = R_ANAL_OP_TYPE_MEM | R_ANAL_OP_TYPE_CJMP,
 R_ANAL_OP_TYPE_UCJMP = R_ANAL_OP_TYPE_COND | R_ANAL_OP_TYPE_UJMP,
 R_ANAL_OP_TYPE_CALL = 3,
 R_ANAL_OP_TYPE_UCALL = 4,
 R_ANAL_OP_TYPE_RCALL = R_ANAL_OP_TYPE_REG | R_ANAL_OP_TYPE_UCALL,
 R_ANAL_OP_TYPE_ICALL = R_ANAL_OP_TYPE_IND | R_ANAL_OP_TYPE_UCALL,
 R_ANAL_OP_TYPE_IRCALL= R_ANAL_OP_TYPE_IND | R_ANAL_OP_TYPE_REG | R_ANAL_OP_TYPE_UCALL,
 R_ANAL_OP_TYPE_CCALL = R_ANAL_OP_TYPE_COND | R_ANAL_OP_TYPE_CALL,
 R_ANAL_OP_TYPE_UCCALL= R_ANAL_OP_TYPE_COND | R_ANAL_OP_TYPE_UCALL,
 R_ANAL_OP_TYPE_RET = 5,
 R_ANAL_OP_TYPE_CRET = R_ANAL_OP_TYPE_COND | R_ANAL_OP_TYPE_RET,
 R_ANAL_OP_TYPE_ILL = 6,
 R_ANAL_OP_TYPE_UNK = 7,
 R_ANAL_OP_TYPE_NOP = 8,
 R_ANAL_OP_TYPE_MOV = 9,
 R_ANAL_OP_TYPE_CMOV = 9 | R_ANAL_OP_TYPE_COND,
 R_ANAL_OP_TYPE_TRAP = 10,
 R_ANAL_OP_TYPE_SWI = 11,
 R_ANAL_OP_TYPE_CSWI = 11 | R_ANAL_OP_TYPE_COND,
 R_ANAL_OP_TYPE_UPUSH = 12,
 R_ANAL_OP_TYPE_RPUSH = R_ANAL_OP_TYPE_UPUSH | R_ANAL_OP_TYPE_REG,
 R_ANAL_OP_TYPE_PUSH = 13,
 R_ANAL_OP_TYPE_POP = 14,
 R_ANAL_OP_TYPE_CMP = 15,
 R_ANAL_OP_TYPE_ACMP = 16,
 R_ANAL_OP_TYPE_ADD = 17,
 R_ANAL_OP_TYPE_SUB = 18,
 R_ANAL_OP_TYPE_IO = 19,
 R_ANAL_OP_TYPE_MUL = 20,
 R_ANAL_OP_TYPE_DIV = 21,
 R_ANAL_OP_TYPE_SHR = 22,
 R_ANAL_OP_TYPE_SHL = 23,
 R_ANAL_OP_TYPE_SAL = 24,
 R_ANAL_OP_TYPE_SAR = 25,
 R_ANAL_OP_TYPE_OR = 26,
 R_ANAL_OP_TYPE_AND = 27,
 R_ANAL_OP_TYPE_XOR = 28,
 R_ANAL_OP_TYPE_NOR = 29,
 R_ANAL_OP_TYPE_NOT = 30,
 R_ANAL_OP_TYPE_STORE = 31,
 R_ANAL_OP_TYPE_LOAD = 32,
 R_ANAL_OP_TYPE_LEA = 33,
 R_ANAL_OP_TYPE_LEAVE = 34,
 R_ANAL_OP_TYPE_ROR = 35,
 R_ANAL_OP_TYPE_ROL = 36,
 R_ANAL_OP_TYPE_XCHG = 37,
 R_ANAL_OP_TYPE_MOD = 38,
 R_ANAL_OP_TYPE_SWITCH = 39,
 R_ANAL_OP_TYPE_CASE = 40,
 R_ANAL_OP_TYPE_LENGTH = 41,
 R_ANAL_OP_TYPE_CAST = 42,
 R_ANAL_OP_TYPE_NEW = 43,
 R_ANAL_OP_TYPE_ABS = 44,
 R_ANAL_OP_TYPE_CPL = 45,
 R_ANAL_OP_TYPE_CRYPTO = 46,
 R_ANAL_OP_TYPE_SYNC = 47,





} _RAnalOpType;

typedef enum {
 R_ANAL_OP_MASK_BASIC = 0,
 R_ANAL_OP_MASK_ESIL = 1,
 R_ANAL_OP_MASK_VAL = 2,
 R_ANAL_OP_MASK_HINT = 4,
 R_ANAL_OP_MASK_OPEX = 8,
 R_ANAL_OP_MASK_DISASM = 16,
 R_ANAL_OP_MASK_ALL = 1 | 2 | 4 | 8 | 16
} RAnalOpMask;


typedef enum {
 R_ANAL_COND_AL = 0,
 R_ANAL_COND_EQ,
 R_ANAL_COND_NE,
 R_ANAL_COND_GE,
 R_ANAL_COND_GT,
 R_ANAL_COND_LE,
 R_ANAL_COND_LT,
 R_ANAL_COND_NV,
 R_ANAL_COND_HS,
 R_ANAL_COND_LO,
 R_ANAL_COND_MI,
 R_ANAL_COND_PL,
 R_ANAL_COND_VS,
 R_ANAL_COND_VC,
 R_ANAL_COND_HI,
 R_ANAL_COND_LS
} _RAnalCond;

typedef enum {
 R_ANAL_STACK_NULL = 0,
 R_ANAL_STACK_NOP,
 R_ANAL_STACK_INC,
 R_ANAL_STACK_GET,
 R_ANAL_STACK_SET,
 R_ANAL_STACK_RESET,
 R_ANAL_STACK_ALIGN,
} RAnalStackOp;

enum {
 R_ANAL_REFLINE_TYPE_UTF8 = 1,
 R_ANAL_REFLINE_TYPE_WIDE = 2,
 R_ANAL_REFLINE_TYPE_MIDDLE_BEFORE = 4,

 R_ANAL_REFLINE_TYPE_MIDDLE_AFTER = 8
};

enum {
 R_ANAL_RET_NOP = 0,
 R_ANAL_RET_ERROR = -1,
 R_ANAL_RET_DUP = -2,
 R_ANAL_RET_NEW = -3,
 R_ANAL_RET_END = -4
};

typedef struct r_anal_case_obj_t {
 unsigned long long addr;
 unsigned long long jump;
 unsigned long long value;
} RAnalCaseOp;

typedef struct r_anal_switch_obj_t {
 unsigned long long addr;
 unsigned long long min_val;
 unsigned long long def_val;
 unsigned long long max_val;
 RList *cases;
} RAnalSwitchOp;

struct r_anal_t;
struct r_anal_bb_t;
typedef struct r_anal_callbacks_t {
 int (*on_fcn_new) (struct r_anal_t *, void *user, RAnalFunction *fcn);
 int (*on_fcn_delete) (struct r_anal_t *, void *user, RAnalFunction *fcn);
 int (*on_fcn_rename) (struct r_anal_t *, void *user, RAnalFunction *fcn, const char *oldname);
 int (*on_fcn_bb_new) (struct r_anal_t *, void *user, RAnalFunction *fcn, struct r_anal_bb_t *bb);
} RAnalCallbacks;



typedef struct r_anal_options_t {
 int depth;
 int graph_depth;
 _Bool vars;
 _Bool varname_stack;
 int cjmpref;
 int jmpref;
 int jmpabove;
 _Bool ijmp;
 _Bool jmpmid;
 _Bool loads;
 _Bool ignbithints;
 int followdatarefs;
 int searchstringrefs;
 int followbrokenfcnsrefs;
 int bb_max_size;
 _Bool trycatch;
 _Bool norevisit;
 int recont;
 int noncode;
 int nopskip;
 int hpskip;
 int jmptbl;
 int nonull;
 _Bool pushret;
 _Bool armthumb;
 _Bool endsize;
 _Bool delay;
 int tailcall;
 _Bool retpoline;
} RAnalOptions;

typedef enum {
 R_ANAL_CPP_ABI_ITANIUM = 0,
 R_ANAL_CPP_ABI_MSVC
} RAnalCPPABI;

typedef struct r_anal_hint_cb_t {

 void (*on_bits) (struct r_anal_t *a, unsigned long long addr, int bits, _Bool set);
} RHintCb;

typedef struct r_anal_t {
 char *cpu;
 char *os;
 int bits;
 int lineswidth;
 int big_endian;
 int sleep;
 RAnalCPPABI cpp_abi;
 void *user;
 unsigned long long gp;
 RBTree bb_tree;
 RList *fcns;
 HtUP *ht_addr_fun;
 HtPP *ht_name_fun;
 RReg *reg;
 unsigned char *last_disasm_reg;
 int last_disasm_reg_size;
 RSyscall *syscall;
 int diff_ops;
 double diff_thbb;
 double diff_thfcn;
 RIOBind iob;
 RFlagBind flb;
 RFlagSet flg_class_set;
 RFlagGet flg_class_get;
 RFlagSet flg_fcn_set;
 RBinBind binb;
 RCoreBind coreb;
 int maxreflines;
 int esil_goto_limit;
 int pcalign;
 struct r_anal_esil_t *esil;
 struct r_anal_plugin_t *cur;
 struct r_anal_esil_plugin_t *esil_cur;
 RAnalRange *limit;
 RList *plugins;
 RList *esil_plugins;
 Sdb *sdb_types;
 Sdb *sdb_fmts;
 Sdb *sdb_zigns;
 HtUP *dict_refs;
 HtUP *dict_xrefs;
 _Bool recursive_noreturn;
 RSpaces zign_spaces;
 char *zign_path;
 PrintfCallback cb_printf;
 RPrint *print;

 Sdb *sdb;
 Sdb *sdb_pins;
 HtUP *addr_hints;
 RBTree arch_hints;
 RBTree bits_hints;
 RHintCb hint_cbs;
 RIntervalTree meta;
 RSpaces meta_spaces;
 Sdb *sdb_cc;
 Sdb *sdb_classes;
 Sdb *sdb_classes_attrs;
 RAnalCallbacks cb;
 RAnalOptions opt;
 RList *reflines;

 RListComparator columnSort;
 int stackptr;
 _Bool (*log)(struct r_anal_t *anal, const char *msg);
 _Bool (*read_at)(struct r_anal_t *anal, unsigned long long addr, unsigned char *buf, int len);
 _Bool verbose;
 int seggrn;
 RFlagGetAtAddr flag_get;
 REvent *ev;
 RList *imports;
 SetU *visited;
 RStrConstPool constpool;
 RList *leaddrs;
 char *pincmd;
} RAnal;

typedef enum r_anal_addr_hint_type_t {
 R_ANAL_ADDR_HINT_TYPE_IMMBASE,
 R_ANAL_ADDR_HINT_TYPE_JUMP,
 R_ANAL_ADDR_HINT_TYPE_FAIL,
 R_ANAL_ADDR_HINT_TYPE_STACKFRAME,
 R_ANAL_ADDR_HINT_TYPE_PTR,
 R_ANAL_ADDR_HINT_TYPE_NWORD,
 R_ANAL_ADDR_HINT_TYPE_RET,
 R_ANAL_ADDR_HINT_TYPE_NEW_BITS,
 R_ANAL_ADDR_HINT_TYPE_SIZE,
 R_ANAL_ADDR_HINT_TYPE_SYNTAX,
 R_ANAL_ADDR_HINT_TYPE_OPTYPE,
 R_ANAL_ADDR_HINT_TYPE_OPCODE,
 R_ANAL_ADDR_HINT_TYPE_TYPE_OFFSET,
 R_ANAL_ADDR_HINT_TYPE_ESIL,
 R_ANAL_ADDR_HINT_TYPE_HIGH,
 R_ANAL_ADDR_HINT_TYPE_VAL
} RAnalAddrHintType;

typedef struct r_anal_addr_hint_record_t {
 RAnalAddrHintType type;
 union {
  char *type_offset;
  int nword;
  unsigned long long jump;
  unsigned long long fail;
  int newbits;
  int immbase;
  unsigned long long ptr;
  unsigned long long retval;
  char *syntax;
  char *opcode;
  char *esil;
  int optype;
  unsigned long long size;
  unsigned long long stackframe;
  unsigned long long val;
 };
} RAnalAddrHintRecord;

typedef struct r_anal_hint_t {
 unsigned long long addr;
 unsigned long long ptr;
 unsigned long long val;
 unsigned long long jump;
 unsigned long long fail;
 unsigned long long ret;
 char *arch;
 char *opcode;
 char *syntax;
 char *esil;
 char *offset;
 unsigned int type;
 unsigned long long size;
 int bits;
 int new_bits;
 int immbase;
 _Bool high;
 int nword;
 unsigned long long stackframe;
} RAnalHint;

typedef const char *(*RAnalLabelAt) (RAnalFunction *fcn, unsigned long long);

typedef enum {
 R_ANAL_VAR_KIND_REG = 'r',
 R_ANAL_VAR_KIND_BPV = 'b',
 R_ANAL_VAR_KIND_SPV = 's'
} RAnalVarKind;




typedef enum {
 R_ANAL_VAR_ACCESS_TYPE_PTR = 0,
 R_ANAL_VAR_ACCESS_TYPE_READ = (1 << 0),
 R_ANAL_VAR_ACCESS_TYPE_WRITE = (1 << 1)
} RAnalVarAccessType;

typedef struct r_anal_var_access_t {
 const char *reg;
 long long offset;
 long long stackptr;
 unsigned char type;
} RAnalVarAccess;

typedef struct r_anal_var_constraint_t {
 _RAnalCond cond;
 unsigned long long val;
} RAnalVarConstraint;


typedef struct r_anal_var_t {
 RAnalFunction *fcn;
 char *name;
 char *type;
 RAnalVarKind kind;
 _Bool isarg;
 int delta;
 char *regname;
 RVector accesses;
 char *comment;
 RVector constraints;


 int argnum;
} RAnalVar;


typedef struct r_anal_var_proto_t {
 char *name;
 char *type;
 RAnalVarKind kind;
 _Bool isarg;
 int delta;
} RAnalVarProt;


 typedef struct r_anal_var_field_t {
 char *name;
 long long delta;
 _Bool field;
} RAnalVarField;

typedef enum {
 R_ANAL_ACC_UNKNOWN = 0,
 R_ANAL_ACC_R = (1 << 0),
 R_ANAL_ACC_W = (1 << 1),
} RAnalValueAccess;

typedef enum {
 R_ANAL_VAL_REG,
 R_ANAL_VAL_MEM,
 R_ANAL_VAL_IMM,
} RAnalValueType;


typedef struct r_anal_value_t {
 RAnalValueType type;
 RAnalValueAccess access;
 int absolute;
 int memref;
 unsigned long long base ;
 long long delta;
 long long imm;
 int mul;
 RRegItem *seg;
 RRegItem *reg;
 RRegItem *regdelta;
} RAnalValue;

typedef enum {
 R_ANAL_OP_DIR_READ = 1,
 R_ANAL_OP_DIR_WRITE = 2,
 R_ANAL_OP_DIR_EXEC = 4,
 R_ANAL_OP_DIR_REF = 8,
} RAnalOpDirection;

typedef enum r_anal_data_type_t {
 R_ANAL_DATATYPE_NULL = 0,
 R_ANAL_DATATYPE_ARRAY,
 R_ANAL_DATATYPE_OBJECT,
 R_ANAL_DATATYPE_STRING,
 R_ANAL_DATATYPE_CLASS,
 R_ANAL_DATATYPE_BOOLEAN,
 R_ANAL_DATATYPE_INT16,
 R_ANAL_DATATYPE_INT32,
 R_ANAL_DATATYPE_INT64,
 R_ANAL_DATATYPE_FLOAT,
} RAnalDataType;

typedef struct r_anal_op_t {
 char *mnemonic;
 unsigned long long addr;
 unsigned int type;
 RAnalOpPrefix prefix;
 unsigned int type2;
 RAnalStackOp stackop;
 _RAnalCond cond;
 int size;
 int nopcode;
 int cycles;
 int failcycles;
 RAnalOpFamily family;
 int id;
 _Bool eob;
 _Bool sign;

 int delay;
 unsigned long long jump;
 unsigned long long fail;
 RAnalOpDirection direction;
 long long ptr;
 unsigned long long val;
 int ptrsize;
 long long stackptr;
 int refptr;
 RAnalValue *src[3];
 RAnalValue *dst;
 RList *access;
 RStrBuf esil;
 RStrBuf opex;
 const char *reg;
 const char *ireg;
 int scale;
 unsigned long long disp;
 RAnalSwitchOp *switch_op;
 RAnalHint hint;
 RAnalDataType datatype;
 int vliw;
} RAnalOp;

typedef RAnalFunction *(* RAnalGetFcnIn)(RAnal *anal, unsigned long long addr, int type);
typedef RAnalHint *(* RAnalGetHint)(RAnal *anal, unsigned long long addr);
typedef int (* RAnalDecode)(RAnal *anal, RAnalOp *op, unsigned long long addr, const unsigned char *data, int len, RAnalOpMask mask);
typedef void (* RAnalOpInit)(RAnalOp *op);
typedef void (* RAnalOpFini)(RAnalOp *op);

typedef struct r_anal_bind_t {
 RAnal *anal;
 RAnalGetFcnIn get_fcn_in;
 RAnalGetHint get_hint;
 RAnalDecode decode;
 RAnalOpInit opinit;
 RAnalOpFini opfini;
} RAnalBind;



typedef struct r_anal_cond_t {
 int type;
 RAnalValue *arg[2];
} RAnalCond;

typedef struct r_anal_bb_t {
 RBNode _rb;
 unsigned long long _max_end;

 unsigned long long addr;
 unsigned long long size;
 unsigned long long jump;
 unsigned long long fail;
 _Bool traced;
 _Bool folded;
 RColor color;
 unsigned char *fingerprint;
 RAnalDiff *diff;
 RAnalCond *cond;
 RAnalSwitchOp *switch_op;
 unsigned short *op_pos;
 unsigned char *op_bytes;
 unsigned char *parent_reg_arena;
 int parent_reg_arena_size;
 int op_pos_size;
 int ninstr;
 int stackptr;
 int parent_stackptr;
 unsigned long long cmpval;
 const char *cmpreg;
 unsigned int bbhash;

 RList *fcns;
 RAnal *anal;
 int ref;

} RAnalBlock;

typedef enum {
 R_ANAL_REF_TYPE_NULL = 0,
 R_ANAL_REF_TYPE_CODE = 'c',
 R_ANAL_REF_TYPE_CALL = 'C',
 R_ANAL_REF_TYPE_DATA = 'd',
 R_ANAL_REF_TYPE_STRING='s'
} RAnalRefType;

typedef struct r_anal_ref_t {
 unsigned long long addr;
 unsigned long long at;
 RAnalRefType type;
} RAnalRef;
__attribute__((visibility("default"))) const char *r_anal_ref_type_tostring(RAnalRefType t);


typedef struct r_anal_refline_t {
 unsigned long long from;
 unsigned long long to;
 int index;
 int level;
 int type;
 int direction;
} RAnalRefline;

typedef struct r_anal_cycle_frame_t {
 unsigned long long naddr;
 RList *hooks;
 struct r_anal_cycle_frame_t *prev;
} RAnalCycleFrame;

typedef struct r_anal_cycle_hook_t {
 unsigned long long addr;
 int cycles;
} RAnalCycleHook;

typedef struct r_anal_esil_word_t {
 int type;
 const char *str;
} RAnalEsilWord;


enum {
 R_ANAL_ESIL_FLAG_ZERO = 1,
 R_ANAL_ESIL_FLAG_CARRY = 2,
 R_ANAL_ESIL_FLAG_OVERFLOW = 4,
 R_ANAL_ESIL_FLAG_PARITY = 8,
 R_ANAL_ESIL_FLAG_SIGN = 16,

};

enum {
 R_ANAL_TRAP_NONE = 0,
 R_ANAL_TRAP_UNHANDLED = 1,
 R_ANAL_TRAP_BREAKPOINT = 2,
 R_ANAL_TRAP_DIVBYZERO = 3,
 R_ANAL_TRAP_WRITE_ERR = 4,
 R_ANAL_TRAP_READ_ERR = 5,
 R_ANAL_TRAP_EXEC_ERR = 6,
 R_ANAL_TRAP_INVALID = 7,
 R_ANAL_TRAP_UNALIGNED = 8,
 R_ANAL_TRAP_TODO = 9,
 R_ANAL_TRAP_HALT = 10,
};

enum {
 R_ANAL_ESIL_PARM_INVALID = 0,
 R_ANAL_ESIL_PARM_REG,
 R_ANAL_ESIL_PARM_NUM,
};
# 1056 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
typedef enum {
 REIL_NOP, REIL_UNK, REIL_JCC, REIL_STR, REIL_STM, REIL_LDM, REIL_ADD, REIL_SUB, REIL_NEG, REIL_MUL, REIL_DIV, REIL_MOD, REIL_SMUL, REIL_SDIV, REIL_SMOD, REIL_SHL, REIL_SHR, REIL_AND, REIL_OR, REIL_XOR, REIL_NOT, REIL_EQ, REIL_LT,
} RAnalReilOpcode;

typedef enum {
 ARG_REG,
 ARG_TEMP,
 ARG_CONST,
 ARG_ESIL_INTERNAL,
 ARG_NONE
} RAnalReilArgType;


typedef struct r_anal_reil_arg {
 RAnalReilArgType type;
 unsigned char size;
 char name[32];
} RAnalReilArg;

typedef struct r_anal_ref_char {
 char *str;
 char *cols;
} RAnalRefStr;


typedef struct r_anal_reil_inst {
 RAnalReilOpcode opcode;
 RAnalReilArg *arg[3];
} RAnalReilInst;

typedef struct r_anal_reil {
 char old[32];
 char cur[32];
 unsigned char lastsz;
 unsigned long long reilNextTemp;
 unsigned long long addr;
 unsigned char seq_num;
 int skip;
 int cmd_count;
 char if_buf[64];
 char pc[8];
} RAnalReil;






typedef _Bool (*RAnalEsilHandlerCB)(struct r_anal_esil_t *esil, unsigned int h, void *user);

typedef struct r_anal_esil_handler_t {
 RAnalEsilHandlerCB cb;
 void *user;
} RAnalEsilHandler;

typedef struct r_anal_esil_change_reg_t {
 int idx;
 unsigned long long data;
} RAnalEsilRegChange;

typedef struct r_anal_esil_change_mem_t {
 int idx;
 unsigned char data;
} RAnalEsilMemChange;

typedef struct r_anal_esil_trace_t {
 int idx;
 int end_idx;
 HtUP *registers;
 HtUP *memory;
 RRegArena *arena[R_REG_TYPE_LAST];
 unsigned long long stack_addr;
 unsigned long long stack_size;
 unsigned char *stack_data;

 Sdb *db;
} RAnalEsilTrace;

typedef _Bool (*RAnalEsilHookRegWriteCB)(struct r_anal_esil_t *esil, const char *name, unsigned long long *val);

typedef struct r_anal_esil_callbacks_t {
 void *user;

 _Bool (*hook_flag_read)(struct r_anal_esil_t *esil, const char *flag, unsigned long long *num);
 _Bool (*hook_command)(struct r_anal_esil_t *esil, const char *op);
 _Bool (*hook_mem_read)(struct r_anal_esil_t *esil, unsigned long long addr, unsigned char *buf, int len);
 _Bool (*mem_read)(struct r_anal_esil_t *esil, unsigned long long addr, unsigned char *buf, int len);
 _Bool (*hook_mem_write)(struct r_anal_esil_t *esil, unsigned long long addr, const unsigned char *buf, int len);
 _Bool (*mem_write)(struct r_anal_esil_t *esil, unsigned long long addr, const unsigned char *buf, int len);
 _Bool (*hook_reg_read)(struct r_anal_esil_t *esil, const char *name, unsigned long long *res, int *size);
 _Bool (*reg_read)(struct r_anal_esil_t *esil, const char *name, unsigned long long *res, int *size);
 RAnalEsilHookRegWriteCB hook_reg_write;
 _Bool (*reg_write)(struct r_anal_esil_t *esil, const char *name, unsigned long long val);
} RAnalEsilCallbacks;

typedef struct r_anal_esil_t {
 RAnal *anal;
 char **stack;
 unsigned long long addrmask;
 int stacksize;
 int stackptr;
 unsigned int skip;
 int nowrite;
 int iotrap;
 int exectrap;
 int parse_stop;
 int parse_goto;
 int parse_goto_count;
 int verbose;
 unsigned long long flags;
 unsigned long long address;
 unsigned long long stack_addr;
 unsigned int stack_size;
 int delay;
 unsigned long long jump_target;
 int jump_target_set;
 int trap;
 unsigned int trap_code;

 unsigned long long old;
 unsigned long long cur;
 unsigned char lastsz;

 HtPP *ops;
 char *current_opstr;
 SdbMini *interrupts;
 SdbMini *syscalls;

 RAnalEsilHandler *intr0;
 RAnalEsilHandler *sysc0;
 RList *plugins;
 RList *active_plugins;

 Sdb *stats;
 RAnalEsilTrace *trace;
 RAnalEsilCallbacks cb;
 RAnalReil *Reil;
 char *pending;


 char *cmd_step;
 char *cmd_step_out;
 char *cmd_intr;
 char *cmd_trap;
 char *cmd_mdev;
 char *cmd_todo;
 char *cmd_ioer;
 char *mdev_range;
 _Bool (*cmd)(struct r_anal_esil_t *esil, const char *name, unsigned long long a0, unsigned long long a1);
 void *user;
 int stack_fd;
} RAnalEsil;




enum {
 R_ANAL_ESIL_OP_TYPE_UNKNOWN = 0x1,
 R_ANAL_ESIL_OP_TYPE_CONTROL_FLOW,
 R_ANAL_ESIL_OP_TYPE_MEM_READ = 0x4,
 R_ANAL_ESIL_OP_TYPE_MEM_WRITE = 0x8,
 R_ANAL_ESIL_OP_TYPE_REG_WRITE = 0x10,
 R_ANAL_ESIL_OP_TYPE_MATH = 0x20,
 R_ANAL_ESIL_OP_TYPE_CUSTOM = 0x40
};


typedef _Bool (*RAnalEsilOpCb)(RAnalEsil *esil);

typedef struct r_anal_esil_operation_t {
 RAnalEsilOpCb code;
 unsigned int push;
 unsigned int pop;
 unsigned int type;
} RAnalEsilOp;



typedef struct r_anal_esil_expr_offset_t {
 unsigned long long off;
 unsigned short idx;
} RAnalEsilEOffset;

typedef enum {
 R_ANAL_ESIL_BLOCK_ENTER_NORMAL = 0,
 R_ANAL_ESIL_BLOCK_ENTER_TRUE,
 R_ANAL_ESIL_BLOCK_ENTER_FALSE,
 R_ANAL_ESIL_BLOCK_ENTER_GLUE,
} RAnalEsilBlockEnterType;

typedef struct r_anal_esil_basic_block_t {
 RAnalEsilEOffset first;
 RAnalEsilEOffset last;
 char *expr;
 RAnalEsilBlockEnterType enter;
} RAnalEsilBB;

typedef struct r_anal_esil_cfg_t {
 RGraphNode *start;
 RGraphNode *end;
 RGraph *g;
} RAnalEsilCFG;

enum {
 R_ANAL_ESIL_DFG_BLOCK_CONST = 1,
 R_ANAL_ESIL_DFG_BLOCK_VAR = 2,
 R_ANAL_ESIL_DFG_BLOCK_PTR = 4,
 R_ANAL_ESIL_DFG_BLOCK_RESULT = 8,
 R_ANAL_ESIL_DFG_BLOCK_GENERATIVE = 16,
};

typedef struct r_anal_esil_dfg_t {
 unsigned int idx;
 Sdb *regs;
 RRBTree *reg_vars;
 RQueue *todo;
 void *insert;
 RGraph *flow;
 RGraphNode *cur;
 RGraphNode *old;
 _Bool malloc_failed;
} RAnalEsilDFG;

typedef struct r_anal_esil_dfg_node_t {

 unsigned int idx;
 RStrBuf *content;
 unsigned int type;
} RAnalEsilDFGNode;

typedef int (*RAnalCmdExt)( RAnal *anal, const char* input);


typedef int (*RAnalOpCallback)(RAnal *a, RAnalOp *op, unsigned long long addr, const unsigned char *data, int len, RAnalOpMask mask);

typedef _Bool (*RAnalRegProfCallback)(RAnal *a);
typedef char*(*RAnalRegProfGetCallback)(RAnal *a);
typedef int (*RAnalFPBBCallback)(RAnal *a, RAnalBlock *bb);
typedef int (*RAnalFPFcnCallback)(RAnal *a, RAnalFunction *fcn);
typedef int (*RAnalDiffBBCallback)(RAnal *anal, RAnalFunction *fcn, RAnalFunction *fcn2);
typedef int (*RAnalDiffFcnCallback)(RAnal *anal, RList *fcns, RList *fcns2);
typedef int (*RAnalDiffEvalCallback)(RAnal *anal);

typedef int (*RAnalEsilCB)(RAnalEsil *esil);
typedef int (*RAnalEsilLoopCB)(RAnalEsil *esil, RAnalOp *op);
typedef int (*RAnalEsilTrapCB)(RAnalEsil *esil, int trap_type, int trap_code);

typedef struct r_anal_plugin_t {
 char *name;
 char *desc;
 char *license;
 char *arch;
 char *author;
 char *version;
 int bits;
 int esil;
 int fileformat_type;
 int (*init)(void *user);
 int (*fini)(void *user);

 int (*archinfo)(RAnal *anal, int query);
 unsigned char* (*anal_mask)(RAnal *anal, int size, const unsigned char *data, unsigned long long at);
 RList* (*preludes)(RAnal *anal);


 RAnalOpCallback op;


 RAnalCmdExt cmd_ext;

 RAnalRegProfCallback set_reg_profile;
 RAnalRegProfGetCallback get_reg_profile;
 RAnalFPBBCallback fingerprint_bb;
 RAnalFPFcnCallback fingerprint_fcn;
 RAnalDiffBBCallback diff_bb;
 RAnalDiffFcnCallback diff_fcn;
 RAnalDiffEvalCallback diff_eval;

 RAnalEsilCB esil_init;
 RAnalEsilLoopCB esil_post_loop;
 RAnalEsilTrapCB esil_trap;
 RAnalEsilCB esil_fini;
} RAnalPlugin;

typedef struct r_anal_esil_plugin_t {
 char *name;
 char *desc;
 char *license;
 char *arch;
 char *author;
 char *version;
 void *(*init)(RAnalEsil *esil);
 void (*fini)(RAnalEsil *esil, void *user);
} RAnalEsilPlugin;


typedef struct r_anal_esil_active_plugin_t {
 RAnalEsilPlugin *plugin;
 void *user;
} RAnalEsilActivePlugin;


int * (r_anal_compare) (RAnalFunction , RAnalFunction );




__attribute__((visibility("default"))) RListRange* r_listrange_new (void);
__attribute__((visibility("default"))) void r_listrange_free(RListRange *s);
__attribute__((visibility("default"))) void r_listrange_add(RListRange *s, RAnalFunction *f);
__attribute__((visibility("default"))) void r_listrange_del(RListRange *s, RAnalFunction *f);
__attribute__((visibility("default"))) void r_listrange_resize(RListRange *s, RAnalFunction *f, int newsize);
__attribute__((visibility("default"))) RAnalFunction *r_listrange_find_in_range(RListRange* s, unsigned long long addr);
__attribute__((visibility("default"))) RAnalFunction *r_listrange_find_root(RListRange* s, unsigned long long addr);


__attribute__((visibility("default"))) RAnalType *r_anal_type_new(void);
__attribute__((visibility("default"))) void r_anal_type_add(RAnal *l, RAnalType *t);
__attribute__((visibility("default"))) RAnalType *r_anal_type_find(RAnal *a, const char* name);
__attribute__((visibility("default"))) void r_anal_type_list(RAnal *a, short category, short enabled);
__attribute__((visibility("default"))) const char *r_anal_datatype_to_string(RAnalDataType t);
__attribute__((visibility("default"))) RAnalType *r_anal_str_to_type(RAnal *a, const char* s);
__attribute__((visibility("default"))) _Bool r_anal_op_nonlinear(int t);
__attribute__((visibility("default"))) _Bool r_anal_op_ismemref(int t);
__attribute__((visibility("default"))) const char *r_anal_optype_to_string(int t);
__attribute__((visibility("default"))) int r_anal_optype_from_string(const char *type);
__attribute__((visibility("default"))) const char *r_anal_op_family_to_string (int n);
__attribute__((visibility("default"))) int r_anal_op_family_from_string(const char *f);
__attribute__((visibility("default"))) int r_anal_op_hint(RAnalOp *op, RAnalHint *hint);
__attribute__((visibility("default"))) RAnalType *r_anal_type_free(RAnalType *t);
__attribute__((visibility("default"))) RAnalType *r_anal_type_loadfile(RAnal *a, const char *path);


typedef _Bool (*RAnalBlockCb)(RAnalBlock *block, void *user);
typedef _Bool (*RAnalAddrCb)(unsigned long long addr, void *user);


__attribute__((visibility("default"))) void r_anal_block_ref(RAnalBlock *bb);
__attribute__((visibility("default"))) void r_anal_block_unref(RAnalBlock *bb);



__attribute__((visibility("default"))) RAnalBlock *r_anal_create_block(RAnal *anal, unsigned long long addr, unsigned long long size);

static inline _Bool r_anal_block_contains(RAnalBlock *bb, unsigned long long addr) {
 return addr >= bb->addr && addr < bb->addr + bb->size;
}




__attribute__((visibility("default"))) RAnalBlock *r_anal_block_split(RAnalBlock *bb, unsigned long long addr);

static inline _Bool r_anal_block_is_contiguous(RAnalBlock *a, RAnalBlock *b) {
 return (a->addr + a->size) == b->addr;
}





__attribute__((visibility("default"))) _Bool r_anal_block_merge(RAnalBlock *a, RAnalBlock *b);



__attribute__((visibility("default"))) void r_anal_delete_block(RAnalBlock *bb);

__attribute__((visibility("default"))) void r_anal_block_set_size(RAnalBlock *block, unsigned long long size);



__attribute__((visibility("default"))) _Bool r_anal_block_relocate(RAnalBlock *block, unsigned long long addr, unsigned long long size);

__attribute__((visibility("default"))) RAnalBlock *r_anal_get_block_at(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_blocks_foreach_in(RAnal *anal, unsigned long long addr, RAnalBlockCb cb, void *user);
__attribute__((visibility("default"))) RList *r_anal_get_blocks_in(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_blocks_foreach_intersect(RAnal *anal, unsigned long long addr, unsigned long long size, RAnalBlockCb cb, void *user);
__attribute__((visibility("default"))) RList *r_anal_get_blocks_intersect(RAnal *anal, unsigned long long addr, unsigned long long size);



__attribute__((visibility("default"))) _Bool r_anal_block_successor_addrs_foreach(RAnalBlock *block, RAnalAddrCb cb, void *user);



__attribute__((visibility("default"))) _Bool r_anal_block_recurse(RAnalBlock *block, RAnalBlockCb cb, void *user);




__attribute__((visibility("default"))) _Bool r_anal_block_recurse_followthrough(RAnalBlock *block, RAnalBlockCb cb, void *user);




__attribute__((visibility("default"))) _Bool r_anal_block_recurse_depth_first(RAnalBlock *block, RAnalBlockCb cb, RAnalBlockCb on_exit, void *user);


__attribute__((visibility("default"))) RList *r_anal_block_recurse_list(RAnalBlock *block);


__attribute__((visibility("default"))) RList *r_anal_block_shortest_path(RAnalBlock *block, unsigned long long dst);



__attribute__((visibility("default"))) void r_anal_block_add_switch_case(RAnalBlock *block, unsigned long long switch_addr, unsigned long long case_value, unsigned long long case_addr);







__attribute__((visibility("default"))) RAnalBlock *r_anal_block_chop_noreturn(RAnalBlock *block, unsigned long long addr);



__attribute__((visibility("default"))) void r_anal_block_automerge(RList *blocks);


__attribute__((visibility("default"))) _Bool r_anal_block_op_starts_at(RAnalBlock *block, unsigned long long addr);


__attribute__((visibility("default"))) void r_anal_block_update_hash(RAnalBlock *block);


__attribute__((visibility("default"))) _Bool r_anal_block_was_modified(RAnalBlock *block);





__attribute__((visibility("default"))) RAnalFunction *r_anal_function_new(RAnal *anal);
__attribute__((visibility("default"))) void r_anal_function_free(RAnalFunction *fcn);


__attribute__((visibility("default"))) _Bool r_anal_add_function(RAnal *anal, RAnalFunction *fcn);


__attribute__((visibility("default"))) RAnalFunction *r_anal_create_function(RAnal *anal, const char *name, unsigned long long addr, int type, RAnalDiff *diff);


__attribute__((visibility("default"))) RList *r_anal_get_functions_in(RAnal *anal, unsigned long long addr);


__attribute__((visibility("default"))) RAnalFunction *r_anal_get_function_at(RAnal *anal, unsigned long long addr);

__attribute__((visibility("default"))) _Bool r_anal_function_delete(RAnalFunction *fcn);



__attribute__((visibility("default"))) _Bool r_anal_function_relocate(RAnalFunction *fcn, unsigned long long addr);



__attribute__((visibility("default"))) _Bool r_anal_function_rename(RAnalFunction *fcn, const char *name);

__attribute__((visibility("default"))) void r_anal_function_add_block(RAnalFunction *fcn, RAnalBlock *bb);
__attribute__((visibility("default"))) void r_anal_function_remove_block(RAnalFunction *fcn, RAnalBlock *bb);




__attribute__((visibility("default"))) unsigned long long r_anal_function_linear_size(RAnalFunction *fcn);


__attribute__((visibility("default"))) unsigned long long r_anal_function_min_addr(RAnalFunction *fcn);


__attribute__((visibility("default"))) unsigned long long r_anal_function_max_addr(RAnalFunction *fcn);


__attribute__((visibility("default"))) unsigned long long r_anal_function_size_from_entry(RAnalFunction *fcn);



__attribute__((visibility("default"))) unsigned long long r_anal_function_realsize(const RAnalFunction *fcn);



__attribute__((visibility("default"))) _Bool r_anal_function_contains(RAnalFunction *fcn, unsigned long long addr);


__attribute__((visibility("default"))) _Bool r_anal_function_was_modified(RAnalFunction *fcn);


__attribute__((visibility("default"))) RAnal *r_anal_new(void);
__attribute__((visibility("default"))) void r_anal_purge(RAnal *anal);
__attribute__((visibility("default"))) RAnal *r_anal_free(RAnal *r);
__attribute__((visibility("default"))) void r_anal_set_user_ptr(RAnal *anal, void *user);
__attribute__((visibility("default"))) void r_anal_plugin_free (RAnalPlugin *p);
__attribute__((visibility("default"))) int r_anal_add(RAnal *anal, RAnalPlugin *foo);
__attribute__((visibility("default"))) int r_anal_archinfo(RAnal *anal, int query);
__attribute__((visibility("default"))) _Bool r_anal_use(RAnal *anal, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_esil_use(RAnal *anal, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_set_reg_profile(RAnal *anal, const char *rp);
__attribute__((visibility("default"))) char *r_anal_get_reg_profile(RAnal *anal);
__attribute__((visibility("default"))) unsigned long long r_anal_get_bbaddr(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_set_bits(RAnal *anal, int bits);
__attribute__((visibility("default"))) _Bool r_anal_set_os(RAnal *anal, const char *os);
__attribute__((visibility("default"))) void r_anal_set_cpu(RAnal *anal, const char *cpu);
__attribute__((visibility("default"))) void r_anal_set_big_endian(RAnal *anal, int boolean);
__attribute__((visibility("default"))) unsigned char *r_anal_mask(RAnal *anal, int size, const unsigned char *data, unsigned long long at);
__attribute__((visibility("default"))) void r_anal_trace_bb(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) const char *r_anal_functiontype_tostring(int type);
__attribute__((visibility("default"))) int r_anal_function_bb(RAnal *anal, RAnalFunction *fcn, unsigned long long addr, int depth);
__attribute__((visibility("default"))) void r_anal_bind(RAnal *b, RAnalBind *bnd);
__attribute__((visibility("default"))) _Bool r_anal_set_triplet(RAnal *anal, const char *os, const char *arch, int bits);
__attribute__((visibility("default"))) void r_anal_add_import(RAnal *anal, const char *imp);
__attribute__((visibility("default"))) void r_anal_remove_import(RAnal *anal, const char *imp);
__attribute__((visibility("default"))) void r_anal_purge_imports(RAnal *anal);


__attribute__((visibility("default"))) RAnalBlock *r_anal_bb_from_offset(RAnal *anal, unsigned long long off);
__attribute__((visibility("default"))) _Bool r_anal_bb_set_offset(RAnalBlock *bb, int i, unsigned short v);
__attribute__((visibility("default"))) unsigned short r_anal_bb_offset_inst(const RAnalBlock *bb, int i);
__attribute__((visibility("default"))) unsigned long long r_anal_bb_opaddr_i(RAnalBlock *bb, int i);
__attribute__((visibility("default"))) unsigned long long r_anal_bb_opaddr_at(RAnalBlock *bb, unsigned long long addr);
__attribute__((visibility("default"))) unsigned long long r_anal_bb_size_i(RAnalBlock *bb, int i);


__attribute__((visibility("default"))) const char *r_anal_stackop_tostring(int s);
__attribute__((visibility("default"))) RAnalOp *r_anal_op_new(void);
__attribute__((visibility("default"))) void r_anal_op_free(void *op);
__attribute__((visibility("default"))) void r_anal_op_init(RAnalOp *op);
__attribute__((visibility("default"))) void r_anal_op_fini(RAnalOp *op);
__attribute__((visibility("default"))) int r_anal_op_reg_delta(RAnal *anal, unsigned long long addr, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_op_is_eob(RAnalOp *op);
__attribute__((visibility("default"))) RList *r_anal_op_list_new(void);
__attribute__((visibility("default"))) int r_anal_op(RAnal *anal, RAnalOp *op, unsigned long long addr, const unsigned char *data, int len, RAnalOpMask mask);
__attribute__((visibility("default"))) RAnalOp *r_anal_op_hexstr(RAnal *anal, unsigned long long addr, const char *hexstr);
__attribute__((visibility("default"))) char *r_anal_op_to_string(RAnal *anal, RAnalOp *op);

__attribute__((visibility("default"))) RAnalEsil *r_anal_esil_new(int stacksize, int iotrap, unsigned int addrsize);
__attribute__((visibility("default"))) _Bool r_anal_esil_set_pc(RAnalEsil *esil, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_esil_setup(RAnalEsil *esil, RAnal *anal, int romem, int stats, int nonull);
__attribute__((visibility("default"))) void r_anal_esil_setup_macros(RAnalEsil *esil);
__attribute__((visibility("default"))) void r_anal_esil_setup_ops(RAnalEsil *esil);
__attribute__((visibility("default"))) void r_anal_esil_free(RAnalEsil *esil);
__attribute__((visibility("default"))) _Bool r_anal_esil_runword(RAnalEsil *esil, const char *word);
__attribute__((visibility("default"))) _Bool r_anal_esil_parse(RAnalEsil *esil, const char *str);
__attribute__((visibility("default"))) _Bool r_anal_esil_dumpstack(RAnalEsil *esil);
__attribute__((visibility("default"))) _Bool r_anal_esil_mem_read(RAnalEsil *esil, unsigned long long addr, unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_anal_esil_mem_write(RAnalEsil *esil, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) _Bool r_anal_esil_reg_read(RAnalEsil *esil, const char *regname, unsigned long long *num, int *size);
__attribute__((visibility("default"))) _Bool r_anal_esil_reg_write(RAnalEsil *esil, const char *dst, unsigned long long num);
__attribute__((visibility("default"))) _Bool r_anal_esil_pushnum(RAnalEsil *esil, unsigned long long num);
__attribute__((visibility("default"))) _Bool r_anal_esil_push(RAnalEsil *esil, const char *str);
__attribute__((visibility("default"))) char *r_anal_esil_pop(RAnalEsil *esil);
__attribute__((visibility("default"))) _Bool r_anal_esil_set_op(RAnalEsil *esil, const char *op, RAnalEsilOpCb code, unsigned int push, unsigned int pop, unsigned int type);
__attribute__((visibility("default"))) RAnalEsilOp *r_anal_esil_get_op(RAnalEsil *esil, const char *op);
__attribute__((visibility("default"))) void r_anal_esil_del_op(RAnalEsil *esil, const char *op);
__attribute__((visibility("default"))) void r_anal_esil_stack_free(RAnalEsil *esil);
__attribute__((visibility("default"))) int r_anal_esil_get_parm_type(RAnalEsil *esil, const char *str);
__attribute__((visibility("default"))) int r_anal_esil_get_parm(RAnalEsil *esil, const char *str, unsigned long long *num);
__attribute__((visibility("default"))) int r_anal_esil_condition(RAnalEsil *esil, const char *str);


__attribute__((visibility("default"))) void r_anal_esil_handlers_init(RAnalEsil *esil);
__attribute__((visibility("default"))) _Bool r_anal_esil_set_interrupt(RAnalEsil *esil, unsigned int intr_num, RAnalEsilHandlerCB cb, void *user);
__attribute__((visibility("default"))) RAnalEsilHandlerCB r_anal_esil_get_interrupt(RAnalEsil *esil, unsigned int intr_num);
__attribute__((visibility("default"))) void r_anal_esil_del_interrupt(RAnalEsil *esil, unsigned int intr_num);
__attribute__((visibility("default"))) _Bool r_anal_esil_set_syscall(RAnalEsil *esil, unsigned int sysc_num, RAnalEsilHandlerCB cb, void *user);
__attribute__((visibility("default"))) RAnalEsilHandlerCB r_anal_esil_get_syscall(RAnalEsil *esil, unsigned int sysc_num);
__attribute__((visibility("default"))) void r_anal_esil_del_syscall(RAnalEsil *esil, unsigned int sysc_num);
__attribute__((visibility("default"))) int r_anal_esil_fire_interrupt(RAnalEsil *esil, unsigned int intr_num);
__attribute__((visibility("default"))) int r_anal_esil_do_syscall(RAnalEsil *esil, unsigned int sysc_num);
__attribute__((visibility("default"))) void r_anal_esil_handlers_fini(RAnalEsil *esil);


__attribute__((visibility("default"))) void r_anal_esil_plugins_init(RAnalEsil *esil);
__attribute__((visibility("default"))) void r_anal_esil_plugins_fini(RAnalEsil *esil);
__attribute__((visibility("default"))) _Bool r_anal_esil_plugin_add(RAnalEsil *esil, RAnalEsilPlugin *plugin);
__attribute__((visibility("default"))) _Bool r_anal_esil_plugin_activate(RAnalEsil *esil, const char *name);
__attribute__((visibility("default"))) void r_anal_esil_plugin_deactivate(RAnalEsil *esil, const char *name);

__attribute__((visibility("default"))) void r_anal_esil_mem_ro(RAnalEsil *esil, int mem_readonly);
__attribute__((visibility("default"))) void r_anal_esil_stats(RAnalEsil *esil, int enable);


__attribute__((visibility("default"))) RAnalEsilTrace *r_anal_esil_trace_new(RAnalEsil *esil);
__attribute__((visibility("default"))) void r_anal_esil_trace_free(RAnalEsilTrace *trace);
__attribute__((visibility("default"))) void r_anal_esil_trace_op(RAnalEsil *esil, RAnalOp *op);
__attribute__((visibility("default"))) void r_anal_esil_trace_list(RAnalEsil *esil);
__attribute__((visibility("default"))) void r_anal_esil_trace_show(RAnalEsil *esil, int idx);
__attribute__((visibility("default"))) void r_anal_esil_trace_restore(RAnalEsil *esil, int idx);


__attribute__((visibility("default"))) void r_anal_pin_init(RAnal *a);
__attribute__((visibility("default"))) void r_anal_pin_fini(RAnal *a);
__attribute__((visibility("default"))) void r_anal_pin(RAnal *a, unsigned long long addr, const char *name);
__attribute__((visibility("default"))) void r_anal_pin_unset(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) const char *r_anal_pin_call(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_pin_list(RAnal *a);


__attribute__((visibility("default"))) unsigned int r_anal_function_cost(RAnalFunction *fcn);
__attribute__((visibility("default"))) int r_anal_function_count_edges(const RAnalFunction *fcn, int *ebbs);


 __attribute__((visibility("default"))) RAnalFunction *r_anal_get_fcn_in(RAnal *anal, unsigned long long addr, int type);
 __attribute__((visibility("default"))) RAnalFunction *r_anal_get_fcn_in_bounds(RAnal *anal, unsigned long long addr, int type);

__attribute__((visibility("default"))) RAnalFunction *r_anal_get_function_byname(RAnal *anal, const char *name);

__attribute__((visibility("default"))) int r_anal_function(RAnal *anal, RAnalFunction *fcn, unsigned long long addr, unsigned long long len, int reftype);
__attribute__((visibility("default"))) int r_anal_function_del(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) int r_anal_function_del_locs(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_function_add_bb(RAnal *anal, RAnalFunction *fcn,
  unsigned long long addr, unsigned long long size,
  unsigned long long jump, unsigned long long fail, RAnalDiff *diff);
__attribute__((visibility("default"))) _Bool r_anal_check_fcn(RAnal *anal, unsigned char *buf, unsigned short bufsz, unsigned long long addr, unsigned long long low, unsigned long long high);
__attribute__((visibility("default"))) void r_anal_function_invalidate_read_ahead_cache(void);

__attribute__((visibility("default"))) void r_anal_function_check_bp_use(RAnalFunction *fcn);
__attribute__((visibility("default"))) void r_anal_update_analysis_range(RAnal *anal, unsigned long long addr, int size);
__attribute__((visibility("default"))) void r_anal_function_update_analysis(RAnalFunction *fcn);




__attribute__((visibility("default"))) int r_anal_function_var_del_byindex (RAnal *a, unsigned long long fna, const char kind, int scope, unsigned int idx);

__attribute__((visibility("default"))) int r_anal_var_count(RAnal *a, RAnalFunction *fcn, int kind, int type);


__attribute__((visibility("default"))) _Bool r_anal_var_display(RAnal *anal, RAnalVar *var);

__attribute__((visibility("default"))) int r_anal_function_complexity(RAnalFunction *fcn);
__attribute__((visibility("default"))) int r_anal_function_loops(RAnalFunction *fcn);
__attribute__((visibility("default"))) void r_anal_trim_jmprefs(RAnal *anal, RAnalFunction *fcn);
__attribute__((visibility("default"))) void r_anal_del_jmprefs(RAnal *anal, RAnalFunction *fcn);
__attribute__((visibility("default"))) char *r_anal_function_get_json(RAnalFunction *function);
__attribute__((visibility("default"))) RAnalFunction *r_anal_function_next(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) char *r_anal_function_get_signature(RAnalFunction *function);
__attribute__((visibility("default"))) int r_anal_str_to_fcn(RAnal *a, RAnalFunction *f, const char *_str);
__attribute__((visibility("default"))) int r_anal_function_count (RAnal *a, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) RAnalBlock *r_anal_function_bbget_in(const RAnal *anal, RAnalFunction *fcn, unsigned long long addr);
__attribute__((visibility("default"))) RAnalBlock *r_anal_function_bbget_at(RAnal *anal, RAnalFunction *fcn, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_function_bbadd(RAnalFunction *fcn, RAnalBlock *bb);
__attribute__((visibility("default"))) int r_anal_function_resize(RAnalFunction *fcn, int newsize);
__attribute__((visibility("default"))) _Bool r_anal_function_purity(RAnalFunction *fcn);

typedef _Bool (* RAnalRefCmp)(RAnalRef *ref, void *data);
__attribute__((visibility("default"))) RList *r_anal_ref_list_new(void);
__attribute__((visibility("default"))) unsigned long long r_anal_xrefs_count(RAnal *anal);
__attribute__((visibility("default"))) const char *r_anal_xrefs_type_tostring(RAnalRefType type);
__attribute__((visibility("default"))) RAnalRefType r_anal_xrefs_type(char ch);
__attribute__((visibility("default"))) RList *r_anal_xrefs_get(RAnal *anal, unsigned long long to);
__attribute__((visibility("default"))) RList *r_anal_refs_get(RAnal *anal, unsigned long long to);
__attribute__((visibility("default"))) RList *r_anal_xrefs_get_from(RAnal *anal, unsigned long long from);
__attribute__((visibility("default"))) void r_anal_xrefs_list(RAnal *anal, int rad);
__attribute__((visibility("default"))) RList *r_anal_function_get_refs(RAnalFunction *fcn);
__attribute__((visibility("default"))) RList *r_anal_function_get_xrefs(RAnalFunction *fcn);
__attribute__((visibility("default"))) _Bool r_anal_xrefs_from(RAnal *anal, RList *list, const char *kind, const RAnalRefType type, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_xrefs_set(RAnal *anal, unsigned long long from, unsigned long long to, const RAnalRefType type);
__attribute__((visibility("default"))) _Bool r_anal_xrefs_deln(RAnal *anal, unsigned long long from, unsigned long long to, const RAnalRefType type);
__attribute__((visibility("default"))) _Bool r_anal_xref_del(RAnal *anal, unsigned long long at, unsigned long long addr);

__attribute__((visibility("default"))) RList *r_anal_get_fcns(RAnal *anal);


__attribute__((visibility("default"))) void r_anal_remove_parsed_type(RAnal *anal, const char *name);
__attribute__((visibility("default"))) void r_anal_save_parsed_type(RAnal *anal, const char *parsed);


__attribute__((visibility("default"))) char *r_anal_function_autoname_var(RAnalFunction *fcn, char kind, const char *pfx, int ptr);
__attribute__((visibility("default"))) RAnalVar *r_anal_function_set_var(RAnalFunction *fcn, int delta, char kind, const char *type, int size, _Bool isarg, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_function_set_var_prot(RAnalFunction *fcn, RList *l);
__attribute__((visibility("default"))) RAnalVar *r_anal_function_get_var(RAnalFunction *fcn, char kind, int delta);
__attribute__((visibility("default"))) RList *r_anal_var_deserialize(const char *ser);
__attribute__((visibility("default"))) char *r_anal_var_prot_serialize(RList *l, _Bool spaces);
__attribute__((visibility("default"))) RList *r_anal_var_get_prots(RAnalFunction *fcn);
__attribute__((visibility("default"))) RAnalVar *r_anal_function_get_var_byname(RAnalFunction *fcn, const char *name);
__attribute__((visibility("default"))) void r_anal_function_delete_vars_by_kind(RAnalFunction *fcn, RAnalVarKind kind);
__attribute__((visibility("default"))) void r_anal_function_delete_all_vars(RAnalFunction *fcn);
__attribute__((visibility("default"))) void r_anal_function_delete_unused_vars(RAnalFunction *fcn);
__attribute__((visibility("default"))) void r_anal_function_delete_var(RAnalFunction *fcn, RAnalVar *var);
__attribute__((visibility("default"))) _Bool r_anal_function_rebase_vars(RAnal *a, RAnalFunction *fcn);
__attribute__((visibility("default"))) long long r_anal_function_get_var_stackptr_at(RAnalFunction *fcn, long long delta, unsigned long long addr);
__attribute__((visibility("default"))) const char *r_anal_function_get_var_reg_at(RAnalFunction *fcn, long long delta, unsigned long long addr);
__attribute__((visibility("default"))) RPVector *r_anal_function_get_vars_used_at(RAnalFunction *fcn, unsigned long long op_addr);


__attribute__((visibility("default"))) RAnalVar *r_anal_get_used_function_var(RAnal *anal, unsigned long long addr);

__attribute__((visibility("default"))) _Bool r_anal_var_rename(RAnalVar *var, const char *new_name, _Bool verbose);
__attribute__((visibility("default"))) void r_anal_var_set_type(RAnalVar *var, const char *type);
__attribute__((visibility("default"))) void r_anal_var_delete(RAnalVar *var);
__attribute__((visibility("default"))) unsigned long long r_anal_var_addr(RAnalVar *var);
__attribute__((visibility("default"))) void r_anal_var_set_access(RAnalVar *var, const char *reg, unsigned long long access_addr, int access_type, long long stackptr);
__attribute__((visibility("default"))) void r_anal_var_remove_access_at(RAnalVar *var, unsigned long long address);
__attribute__((visibility("default"))) void r_anal_var_clear_accesses(RAnalVar *var);
__attribute__((visibility("default"))) void r_anal_var_add_constraint(RAnalVar *var, RAnalVarConstraint *constraint);
__attribute__((visibility("default"))) char *r_anal_var_get_constraints_readable(RAnalVar *var);


__attribute__((visibility("default"))) RAnalVarAccess *r_anal_var_get_access_at(RAnalVar *var, unsigned long long addr);

__attribute__((visibility("default"))) int r_anal_var_get_argnum(RAnalVar *var);

__attribute__((visibility("default"))) void r_anal_extract_vars(RAnal *anal, RAnalFunction *fcn, RAnalOp *op);
__attribute__((visibility("default"))) void r_anal_extract_rarg(RAnal *anal, RAnalOp *op, RAnalFunction *fcn, int *reg_set, int *count);




__attribute__((visibility("default"))) RAnalVar *r_anal_var_get_dst_var(RAnalVar *var);

typedef struct r_anal_function_vars_cache {
 RList *bvars;
 RList *rvars;
 RList *svars;
} RAnalFcnVarsCache;
__attribute__((visibility("default"))) void r_anal_function_vars_cache_init(RAnal *anal, RAnalFcnVarsCache *cache, RAnalFunction *fcn);
__attribute__((visibility("default"))) void r_anal_function_vars_cache_fini(RAnalFcnVarsCache *cache);

__attribute__((visibility("default"))) char *r_anal_function_format_sig( RAnal *anal, RAnalFunction *fcn, char *fcn_name,
  RAnalFcnVarsCache *reuse_cache, const char *fcn_name_pre, const char *fcn_name_post);



__attribute__((visibility("default"))) _Bool r_anal_xrefs_init (RAnal *anal);





__attribute__((visibility("default"))) RAnalDiff *r_anal_diff_new(void);
__attribute__((visibility("default"))) void r_anal_diff_setup(RAnal *anal, int doops, double thbb, double thfcn);
__attribute__((visibility("default"))) void r_anal_diff_setup_i(RAnal *anal, int doops, int thbb, int thfcn);
__attribute__((visibility("default"))) void r_anal_diff_free(RAnalDiff *diff);
__attribute__((visibility("default"))) int r_anal_diff_fingerprint_bb(RAnal *anal, RAnalBlock *bb);
__attribute__((visibility("default"))) size_t r_anal_diff_fingerprint_fcn(RAnal *anal, RAnalFunction *fcn);
__attribute__((visibility("default"))) _Bool r_anal_diff_bb(RAnal *anal, RAnalFunction *fcn, RAnalFunction *fcn2);
__attribute__((visibility("default"))) int r_anal_diff_fcn(RAnal *anal, RList *fcns, RList *fcns2);
__attribute__((visibility("default"))) int r_anal_diff_eval(RAnal *anal);


__attribute__((visibility("default"))) RAnalValue *r_anal_value_new(void);
__attribute__((visibility("default"))) RAnalValue *r_anal_value_copy (RAnalValue *ov);
__attribute__((visibility("default"))) RAnalValue *r_anal_value_new_from_string(const char *str);
__attribute__((visibility("default"))) long long r_anal_value_eval(RAnalValue *value);
__attribute__((visibility("default"))) char *r_anal_value_to_string (RAnalValue *value);
__attribute__((visibility("default"))) unsigned long long r_anal_value_to_ut64(RAnal *anal, RAnalValue *val);
__attribute__((visibility("default"))) int r_anal_value_set_ut64(RAnal *anal, RAnalValue *val, unsigned long long num);
__attribute__((visibility("default"))) void r_anal_value_free(RAnalValue *value);

__attribute__((visibility("default"))) RAnalCond *r_anal_cond_new(void);
__attribute__((visibility("default"))) RAnalCond *r_anal_cond_new_from_op(RAnalOp *op);
__attribute__((visibility("default"))) void r_anal_cond_fini(RAnalCond *c);
__attribute__((visibility("default"))) void r_anal_cond_free(RAnalCond *c);
__attribute__((visibility("default"))) char *r_anal_cond_to_string(RAnalCond *cond);
__attribute__((visibility("default"))) int r_anal_cond_eval(RAnal *anal, RAnalCond *cond);
__attribute__((visibility("default"))) RAnalCond *r_anal_cond_new_from_string(const char *str);
__attribute__((visibility("default"))) const char *r_anal_cond_tostring(int cc);


__attribute__((visibility("default"))) _Bool r_anal_jmptbl(RAnal *anal, RAnalFunction *fcn, RAnalBlock *block, unsigned long long jmpaddr, unsigned long long table, unsigned long long tablesize, unsigned long long default_addr);


__attribute__((visibility("default"))) _Bool try_get_delta_jmptbl_info(RAnal *a, RAnalFunction *fcn, unsigned long long jmp_addr, unsigned long long lea_addr, unsigned long long *table_size, unsigned long long *default_case, long long *start_casenum_shift);
__attribute__((visibility("default"))) _Bool try_walkthrough_jmptbl(RAnal *analysis, RAnalFunction *fcn, RAnalBlock *block, int depth, unsigned long long ip, long long start_casenum_shift, unsigned long long jmptbl_loc, unsigned long long jmptbl_off, unsigned long long sz, unsigned long long jmptbl_size, unsigned long long default_case, _Bool ret0);
__attribute__((visibility("default"))) _Bool try_walkthrough_casetbl(RAnal *analysis, RAnalFunction *fcn, RAnalBlock *block, int depth, unsigned long long ip, long long start_casenum_shift, unsigned long long jmptbl_loc, unsigned long long casetbl_loc, unsigned long long jmptbl_off, unsigned long long sz, unsigned long long jmptbl_size, unsigned long long default_case, _Bool ret0);
__attribute__((visibility("default"))) _Bool try_get_jmptbl_info(RAnal *analysis, RAnalFunction *fcn, unsigned long long addr, RAnalBlock *my_bb, unsigned long long *table_size, unsigned long long *default_case, long long *start_casenum_shift);
__attribute__((visibility("default"))) int walkthrough_arm_jmptbl_style(RAnal *anal, RAnalFunction *fcn, RAnalBlock *block, int depth, unsigned long long ip, unsigned long long jmptbl_loc, unsigned long long sz, unsigned long long jmptbl_size, unsigned long long default_case, int ret0);


__attribute__((visibility("default"))) RList* r_anal_reflines_get(RAnal *anal,
  unsigned long long addr, const unsigned char *buf, unsigned long long len, int nlines, int linesout, int linescall);
__attribute__((visibility("default"))) int r_anal_reflines_middle(RAnal *anal, RList *list, unsigned long long addr, int len);
__attribute__((visibility("default"))) RAnalRefStr *r_anal_reflines_str(void *core, unsigned long long addr, int opts);
__attribute__((visibility("default"))) void r_anal_reflines_str_free(RAnalRefStr *refstr);

__attribute__((visibility("default"))) void r_anal_var_list_show(RAnal *anal, RAnalFunction *fcn, int kind, int mode, PJ* pj);
__attribute__((visibility("default"))) RList *r_anal_var_list(RAnal *anal, RAnalFunction *fcn, int kind);
__attribute__((visibility("default"))) RList *r_anal_var_all_list(RAnal *anal, RAnalFunction *fcn);
__attribute__((visibility("default"))) RList *r_anal_function_get_var_fields(RAnalFunction *fcn, int kind);


__attribute__((visibility("default"))) _Bool r_anal_cc_exist(RAnal *anal, const char *convention);
__attribute__((visibility("default"))) void r_anal_cc_del(RAnal *anal, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_cc_set(RAnal *anal, const char *expr);
__attribute__((visibility("default"))) char *r_anal_cc_get(RAnal *anal, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_cc_once(RAnal *anal);
__attribute__((visibility("default"))) void r_anal_cc_get_json(RAnal *anal, PJ *pj, const char *name);
__attribute__((visibility("default"))) const char *r_anal_cc_arg(RAnal *anal, const char *convention, int n);
__attribute__((visibility("default"))) const char *r_anal_cc_self(RAnal *anal, const char *convention);
__attribute__((visibility("default"))) void r_anal_cc_set_self(RAnal *anal, const char *convention, const char *self);
__attribute__((visibility("default"))) const char *r_anal_cc_error(RAnal *anal, const char *convention);
__attribute__((visibility("default"))) void r_anal_cc_set_error(RAnal *anal, const char *convention, const char *error);
__attribute__((visibility("default"))) int r_anal_cc_max_arg(RAnal *anal, const char *cc);
__attribute__((visibility("default"))) const char *r_anal_cc_ret(RAnal *anal, const char *convention);
__attribute__((visibility("default"))) const char *r_anal_cc_default(RAnal *anal);
__attribute__((visibility("default"))) void r_anal_set_cc_default(RAnal *anal, const char *convention);
__attribute__((visibility("default"))) const char *r_anal_syscc_default(RAnal *anal);
__attribute__((visibility("default"))) void r_anal_set_syscc_default(RAnal *anal, const char *convention);
__attribute__((visibility("default"))) const char *r_anal_cc_func(RAnal *anal, const char *func_name);
__attribute__((visibility("default"))) _Bool r_anal_noreturn_at(RAnal *anal, unsigned long long addr);

typedef struct r_anal_data_t {
 unsigned long long addr;
 int type;
 unsigned long long ptr;
 char *str;
 int len;
 unsigned char *buf;
 unsigned char sbuf[8];
} RAnalData;

__attribute__((visibility("default"))) RAnalData *r_anal_data (RAnal *anal, unsigned long long addr, const unsigned char *buf, int size, int wordsize);
__attribute__((visibility("default"))) const char *r_anal_data_kind (RAnal *anal, unsigned long long addr, const unsigned char *buf, int len);
__attribute__((visibility("default"))) RAnalData *r_anal_data_new_string (unsigned long long addr, const char *p, int size, int wide);
__attribute__((visibility("default"))) RAnalData *r_anal_data_new (unsigned long long addr, int type, unsigned long long n, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_anal_data_free (RAnalData *d);

__attribute__((visibility("default"))) char *r_anal_data_to_string(RAnalData *d, RConsPrintablePalette *pal);
# 1883 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
static inline unsigned long long r_meta_item_size(unsigned long long start, unsigned long long end) {

 return end - start + 1;
}

static inline unsigned long long r_meta_node_size(RIntervalNode *node) {
 return r_meta_item_size (node->start, node->end);
}



__attribute__((visibility("default"))) _Bool r_meta_set(RAnal *a, RAnalMetaType type, unsigned long long addr, unsigned long long size, const char *str);


__attribute__((visibility("default"))) _Bool r_meta_set_with_subtype(RAnal *m, RAnalMetaType type, int subtype, unsigned long long addr, unsigned long long size, const char *str);



__attribute__((visibility("default"))) void r_meta_del(RAnal *a, RAnalMetaType type, unsigned long long addr, unsigned long long size);


__attribute__((visibility("default"))) _Bool r_meta_set_string(RAnal *a, RAnalMetaType type, unsigned long long addr, const char *s);


__attribute__((visibility("default"))) const char *r_meta_get_string(RAnal *a, RAnalMetaType type, unsigned long long addr);


__attribute__((visibility("default"))) void r_meta_set_data_at(RAnal *a, unsigned long long addr, unsigned long long wordsz);


__attribute__((visibility("default"))) RAnalMetaItem *r_meta_get_at(RAnal *a, unsigned long long addr, RAnalMetaType type, unsigned long long *size);



__attribute__((visibility("default"))) RIntervalNode *r_meta_get_in(RAnal *a, unsigned long long addr, RAnalMetaType type);


__attribute__((visibility("default"))) RPVector *r_meta_get_all_at(RAnal *a, unsigned long long at);


__attribute__((visibility("default"))) RPVector *r_meta_get_all_in(RAnal *a, unsigned long long at, RAnalMetaType type);


__attribute__((visibility("default"))) RPVector *r_meta_get_all_intersect(RAnal *a, unsigned long long start, unsigned long long size, RAnalMetaType type);


__attribute__((visibility("default"))) void r_meta_space_unset_for(RAnal *a, const RSpace *space);


__attribute__((visibility("default"))) int r_meta_space_count_for(RAnal *a, const RSpace *space);


__attribute__((visibility("default"))) void r_meta_rebase(RAnal *anal, unsigned long long diff);


__attribute__((visibility("default"))) unsigned long long r_meta_get_size(RAnal *a, RAnalMetaType type);

__attribute__((visibility("default"))) const char *r_meta_type_to_string(int type);
__attribute__((visibility("default"))) void r_meta_print(RAnal *a, RAnalMetaItem *d, unsigned long long start, unsigned long long size, int rad, PJ *pj, _Bool show_full);
__attribute__((visibility("default"))) void r_meta_print_list_all(RAnal *a, int type, int rad, const char *tq);
__attribute__((visibility("default"))) void r_meta_print_list_at(RAnal *a, unsigned long long addr, int rad, const char *tq);
__attribute__((visibility("default"))) void r_meta_print_list_in_function(RAnal *a, int type, int rad, unsigned long long addr, const char *tq);



__attribute__((visibility("default"))) void r_anal_hint_del(RAnal *anal, unsigned long long addr, unsigned long long size);
__attribute__((visibility("default"))) void r_anal_hint_clear (RAnal *a);
__attribute__((visibility("default"))) void r_anal_hint_free (RAnalHint *h);
__attribute__((visibility("default"))) void r_anal_hint_set_syntax (RAnal *a, unsigned long long addr, const char *syn);
__attribute__((visibility("default"))) void r_anal_hint_set_type(RAnal *a, unsigned long long addr, int type);
__attribute__((visibility("default"))) void r_anal_hint_set_jump(RAnal *a, unsigned long long addr, unsigned long long jump);
__attribute__((visibility("default"))) void r_anal_hint_set_fail(RAnal *a, unsigned long long addr, unsigned long long fail);
__attribute__((visibility("default"))) void r_anal_hint_set_newbits(RAnal *a, unsigned long long addr, int bits);
__attribute__((visibility("default"))) void r_anal_hint_set_nword(RAnal *a, unsigned long long addr, int nword);
__attribute__((visibility("default"))) void r_anal_hint_set_offset(RAnal *a, unsigned long long addr, const char *typeoff);
__attribute__((visibility("default"))) void r_anal_hint_set_immbase(RAnal *a, unsigned long long addr, int base);
__attribute__((visibility("default"))) void r_anal_hint_set_size(RAnal *a, unsigned long long addr, unsigned long long size);
__attribute__((visibility("default"))) void r_anal_hint_set_opcode(RAnal *a, unsigned long long addr, const char *str);
__attribute__((visibility("default"))) void r_anal_hint_set_esil(RAnal *a, unsigned long long addr, const char *str);
__attribute__((visibility("default"))) void r_anal_hint_set_pointer(RAnal *a, unsigned long long addr, unsigned long long ptr);
__attribute__((visibility("default"))) void r_anal_hint_set_ret(RAnal *a, unsigned long long addr, unsigned long long val);
__attribute__((visibility("default"))) void r_anal_hint_set_high(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_set_stackframe(RAnal *a, unsigned long long addr, unsigned long long size);
__attribute__((visibility("default"))) void r_anal_hint_set_val(RAnal *a, unsigned long long addr, unsigned long long v);
__attribute__((visibility("default"))) void r_anal_hint_set_arch(RAnal *a, unsigned long long addr, const char *arch);
__attribute__((visibility("default"))) void r_anal_hint_set_bits(RAnal *a, unsigned long long addr, int bits);
__attribute__((visibility("default"))) void r_anal_hint_unset_val (RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_high(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_immbase(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_nword(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_size(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_type(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_esil(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_opcode(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_syntax(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_pointer(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_ret(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_offset(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_jump(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_fail(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_newbits(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_stackframe(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_arch(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) void r_anal_hint_unset_bits(RAnal *a, unsigned long long addr);
__attribute__((visibility("default"))) const RVector *r_anal_addr_hints_at(RAnal *anal, unsigned long long addr);
typedef _Bool (*RAnalAddrHintRecordsCb)(unsigned long long addr, const RVector *records, void *user);
__attribute__((visibility("default"))) void r_anal_addr_hints_foreach(RAnal *anal, RAnalAddrHintRecordsCb cb, void *user);
typedef _Bool (*RAnalArchHintCb)(unsigned long long addr, const char *arch, void *user);
__attribute__((visibility("default"))) void r_anal_arch_hints_foreach(RAnal *anal, RAnalArchHintCb cb, void *user);
typedef _Bool (*RAnalBitsHintCb)(unsigned long long addr, int bits, void *user);
__attribute__((visibility("default"))) void r_anal_bits_hints_foreach(RAnal *anal, RAnalBitsHintCb cb, void *user);




__attribute__((visibility("default"))) const char *r_anal_hint_arch_at(RAnal *anal, unsigned long long addr, unsigned long long *hint_addr);




__attribute__((visibility("default"))) int r_anal_hint_bits_at(RAnal *anal, unsigned long long addr, unsigned long long *hint_addr);

__attribute__((visibility("default"))) RAnalHint *r_anal_hint_get(RAnal *anal, unsigned long long addr);


__attribute__((visibility("default"))) RAnalSwitchOp *r_anal_switch_op_new(unsigned long long addr, unsigned long long min_val, unsigned long long max_val, unsigned long long def_val);
__attribute__((visibility("default"))) void r_anal_switch_op_free(RAnalSwitchOp * swop);
__attribute__((visibility("default"))) RAnalCaseOp* r_anal_switch_op_add_case(RAnalSwitchOp * swop, unsigned long long addr, unsigned long long value, unsigned long long jump);


__attribute__((visibility("default"))) RAnalCycleFrame* r_anal_cycle_frame_new (void);
__attribute__((visibility("default"))) void r_anal_cycle_frame_free (RAnalCycleFrame *cf);


__attribute__((visibility("default"))) unsigned long long r_anal_function_get_label(RAnalFunction *fcn, const char *name);
__attribute__((visibility("default"))) const char *r_anal_function_get_label_at(RAnalFunction *fcn, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_function_set_label(RAnalFunction *fcn, const char *name, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_function_delete_label(RAnalFunction *fcn, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_function_delete_label_at(RAnalFunction *fcn, unsigned long long addr);


__attribute__((visibility("default"))) void r_anal_set_limits(RAnal *anal, unsigned long long from, unsigned long long to);
__attribute__((visibility("default"))) void r_anal_unset_limits(RAnal *anal);


__attribute__((visibility("default"))) int r_anal_esil_to_reil_setup (RAnalEsil *esil, RAnal *anal, int romem, int stats);


__attribute__((visibility("default"))) void r_anal_noreturn_list(RAnal *anal, int mode);
__attribute__((visibility("default"))) _Bool r_anal_noreturn_add(RAnal *anal, const char *name, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_noreturn_drop(RAnal *anal, const char *expr);
__attribute__((visibility("default"))) _Bool r_anal_noreturn_at_addr(RAnal *anal, unsigned long long addr);


__attribute__((visibility("default"))) int r_sign_space_count_for(RAnal *a, const RSpace *space);
__attribute__((visibility("default"))) void r_sign_space_unset_for(RAnal *a, const RSpace *space);
__attribute__((visibility("default"))) void r_sign_space_rename_for(RAnal *a, const RSpace *space, const char *oname, const char *nname);


typedef struct {
 RAnal *anal;
 RAnalCPPABI abi;
 unsigned char word_size;
 _Bool (*read_addr) (RAnal *anal, unsigned long long addr, unsigned long long *buf);
} RVTableContext;

typedef struct vtable_info_t {
 unsigned long long saddr;
 RVector methods;
} RVTableInfo;

typedef struct vtable_method_info_t {
 unsigned long long addr;
 unsigned long long vtable_offset;
} RVTableMethodInfo;

__attribute__((visibility("default"))) void r_anal_vtable_info_free(RVTableInfo *vtable);
__attribute__((visibility("default"))) unsigned long long r_anal_vtable_info_get_size(RVTableContext *context, RVTableInfo *vtable);
__attribute__((visibility("default"))) _Bool r_anal_vtable_begin(RAnal *anal, RVTableContext *context);
__attribute__((visibility("default"))) RVTableInfo *r_anal_vtable_parse_at(RVTableContext *context, unsigned long long addr);
__attribute__((visibility("default"))) RList *r_anal_vtable_search(RVTableContext *context);
__attribute__((visibility("default"))) void r_anal_list_vtables(RAnal *anal, int rad);


__attribute__((visibility("default"))) char *r_anal_rtti_msvc_demangle_class_name(RVTableContext *context, const char *name);
__attribute__((visibility("default"))) void r_anal_rtti_msvc_print_complete_object_locator(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_msvc_print_type_descriptor(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_msvc_print_class_hierarchy_descriptor(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_msvc_print_base_class_descriptor(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) _Bool r_anal_rtti_msvc_print_at_vtable(RVTableContext *context, unsigned long long addr, int mode, _Bool strict);
__attribute__((visibility("default"))) void r_anal_rtti_msvc_recover_all(RVTableContext *vt_context, RList *vtables);

__attribute__((visibility("default"))) char *r_anal_rtti_itanium_demangle_class_name(RVTableContext *context, const char *name);
__attribute__((visibility("default"))) void r_anal_rtti_itanium_print_class_type_info(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_itanium_print_si_class_type_info(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_itanium_print_vmi_class_type_info(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) _Bool r_anal_rtti_itanium_print_at_vtable(RVTableContext *context, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_itanium_recover_all(RVTableContext *vt_context, RList *vtables);

__attribute__((visibility("default"))) char *r_anal_rtti_demangle_class_name(RAnal *anal, const char *name);
__attribute__((visibility("default"))) void r_anal_rtti_print_at_vtable(RAnal *anal, unsigned long long addr, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_print_all(RAnal *anal, int mode);
__attribute__((visibility("default"))) void r_anal_rtti_recover_all(RAnal *anal);

__attribute__((visibility("default"))) RList *r_anal_preludes(RAnal *anal);
__attribute__((visibility("default"))) _Bool r_anal_is_prelude(RAnal *anal, const unsigned char *data, int len);


typedef struct r_anal_method_t {
 char *name;
 unsigned long long addr;
 long long vtable_offset;
} RAnalMethod;

typedef struct r_anal_base_class_t {
 char *id;
 unsigned long long offset;
 char *class_name;
} RAnalBaseClass;

typedef struct r_anal_vtable_t {
 char *id;
 unsigned long long offset;
 unsigned long long addr;
 unsigned long long size;
} RAnalVTable;

typedef enum {
 R_ANAL_CLASS_ERR_SUCCESS = 0,
 R_ANAL_CLASS_ERR_CLASH,
 R_ANAL_CLASS_ERR_NONEXISTENT_ATTR,
 R_ANAL_CLASS_ERR_NONEXISTENT_CLASS,
 R_ANAL_CLASS_ERR_OTHER
} RAnalClassErr;

__attribute__((visibility("default"))) void r_anal_class_create(RAnal *anal, const char *name);
__attribute__((visibility("default"))) void r_anal_class_delete(RAnal *anal, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_class_exists(RAnal *anal, const char *name);
__attribute__((visibility("default"))) SdbList *r_anal_class_get_all(RAnal *anal, _Bool sorted);
__attribute__((visibility("default"))) void r_anal_class_foreach(RAnal *anal, SdbForeachCallback cb, void *user);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_rename(RAnal *anal, const char *old_name, const char *new_name);

__attribute__((visibility("default"))) void r_anal_class_method_fini(RAnalMethod *meth);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_method_get(RAnal *anal, const char *class_name, const char *meth_name, RAnalMethod *meth);
__attribute__((visibility("default"))) RVector *r_anal_class_method_get_all(RAnal *anal, const char *class_name);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_method_set(RAnal *anal, const char *class_name, RAnalMethod *meth);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_method_rename(RAnal *anal, const char *class_name, const char *old_meth_name, const char *new_meth_name);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_method_delete(RAnal *anal, const char *class_name, const char *meth_name);

__attribute__((visibility("default"))) void r_anal_class_base_fini(RAnalBaseClass *base);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_base_get(RAnal *anal, const char *class_name, const char *base_id, RAnalBaseClass *base);
__attribute__((visibility("default"))) RVector *r_anal_class_base_get_all(RAnal *anal, const char *class_name);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_base_set(RAnal *anal, const char *class_name, RAnalBaseClass *base);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_base_delete(RAnal *anal, const char *class_name, const char *base_id);

__attribute__((visibility("default"))) void r_anal_class_vtable_fini(RAnalVTable *vtable);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_vtable_get(RAnal *anal, const char *class_name, const char *vtable_id, RAnalVTable *vtable);
__attribute__((visibility("default"))) RVector *r_anal_class_vtable_get_all(RAnal *anal, const char *class_name);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_vtable_set(RAnal *anal, const char *class_name, RAnalVTable *vtable);
__attribute__((visibility("default"))) RAnalClassErr r_anal_class_vtable_delete(RAnal *anal, const char *class_name, const char *vtable_id);

__attribute__((visibility("default"))) void r_anal_class_print(RAnal *anal, const char *class_name, _Bool detailed);
__attribute__((visibility("default"))) void r_anal_class_json(RAnal *anal, PJ *j, const char *class_name);
__attribute__((visibility("default"))) void r_anal_class_list(RAnal *anal, int mode);
__attribute__((visibility("default"))) void r_anal_class_list_bases(RAnal *anal, const char *class_name);
__attribute__((visibility("default"))) void r_anal_class_list_vtables(RAnal *anal, const char *class_name);
__attribute__((visibility("default"))) void r_anal_class_list_vtable_offset_functions(RAnal *anal, const char *class_name, unsigned long long offset);
__attribute__((visibility("default"))) RGraph *r_anal_class_get_inheritance_graph(RAnal *anal);

__attribute__((visibility("default"))) RAnalEsilCFG *r_anal_esil_cfg_expr(RAnalEsilCFG *cfg, RAnal *anal, const unsigned long long off, char *expr);
__attribute__((visibility("default"))) RAnalEsilCFG *r_anal_esil_cfg_op(RAnalEsilCFG *cfg, RAnal *anal, RAnalOp *op);
__attribute__((visibility("default"))) void r_anal_esil_cfg_merge_blocks(RAnalEsilCFG *cfg);
__attribute__((visibility("default"))) void r_anal_esil_cfg_free(RAnalEsilCFG *cfg);
__attribute__((visibility("default"))) SdbGperf *r_anal_get_gperf_cc(const char *k);
__attribute__((visibility("default"))) SdbGperf *r_anal_get_gperf_types(const char *k);

__attribute__((visibility("default"))) RAnalEsilDFGNode *r_anal_esil_dfg_node_new(RAnalEsilDFG *edf, const char *c);
__attribute__((visibility("default"))) RAnalEsilDFG *r_anal_esil_dfg_new(RReg *regs);
__attribute__((visibility("default"))) void r_anal_esil_dfg_free(RAnalEsilDFG *dfg);
__attribute__((visibility("default"))) RAnalEsilDFG *r_anal_esil_dfg_expr(RAnal *anal, RAnalEsilDFG *dfg, const char *expr);
__attribute__((visibility("default"))) void r_anal_esil_dfg_fold_const(RAnal *anal, RAnalEsilDFG *dfg);
__attribute__((visibility("default"))) RStrBuf *r_anal_esil_dfg_filter(RAnalEsilDFG *dfg, const char *reg);
__attribute__((visibility("default"))) RStrBuf *r_anal_esil_dfg_filter_expr(RAnal *anal, const char *expr, const char *reg);
__attribute__((visibility("default"))) RList *r_anal_types_from_fcn(RAnal *anal, RAnalFunction *fcn);

__attribute__((visibility("default"))) RAnalBaseType *r_anal_get_base_type(RAnal *anal, const char *name);
__attribute__((visibility("default"))) void r_parse_pdb_types(const RAnal *anal, const RPdb *pdb);
__attribute__((visibility("default"))) void r_anal_save_base_type(const RAnal *anal, const RAnalBaseType *type);
__attribute__((visibility("default"))) void r_anal_base_type_free(RAnalBaseType *type);
__attribute__((visibility("default"))) RAnalBaseType *r_anal_base_type_new(RAnalBaseTypeKind kind);
__attribute__((visibility("default"))) void r_anal_dwarf_process_info(const RAnal *anal, RAnalDwarfContext *ctx);
__attribute__((visibility("default"))) void r_anal_dwarf_integrate_functions(RAnal *anal, RFlag *flags, Sdb *dwarf_sdb);

__attribute__((visibility("default"))) RFlagItem *r_anal_global_get(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_global_add(RAnal *anal, unsigned long long addr, const char *type_name, const char *name);
__attribute__((visibility("default"))) _Bool r_anal_global_del(RAnal *anal, unsigned long long addr);
__attribute__((visibility("default"))) _Bool r_anal_global_retype(RAnal *anal, unsigned long long addr, const char *new_type);
__attribute__((visibility("default"))) _Bool r_anal_global_rename(RAnal *anal, unsigned long long addr, const char *new_name);
__attribute__((visibility("default"))) const char *r_anal_global_get_type(RAnal *anal, unsigned long long addr);


extern RAnalPlugin r_anal_plugin_null;
extern RAnalPlugin r_anal_plugin_6502;
extern RAnalPlugin r_anal_plugin_6502_cs;
extern RAnalPlugin r_anal_plugin_8051;
extern RAnalPlugin r_anal_plugin_amd29k;
extern RAnalPlugin r_anal_plugin_arc;
extern RAnalPlugin r_anal_plugin_arm_cs;
extern RAnalPlugin r_anal_plugin_arm_gnu;
extern RAnalPlugin r_anal_plugin_avr;
extern RAnalPlugin r_anal_plugin_bf;
extern RAnalPlugin r_anal_plugin_chip8;
extern RAnalPlugin r_anal_plugin_cr16;
extern RAnalPlugin r_anal_plugin_cris;
extern RAnalPlugin r_anal_plugin_dalvik;
extern RAnalPlugin r_anal_plugin_ebc;
extern RAnalPlugin r_anal_plugin_gb;
extern RAnalPlugin r_anal_plugin_h8300;
extern RAnalPlugin r_anal_plugin_hexagon;
extern RAnalPlugin r_anal_plugin_i4004;
extern RAnalPlugin r_anal_plugin_i8080;
extern RAnalPlugin r_anal_plugin_java;
extern RAnalPlugin r_anal_plugin_m68k_cs;
extern RAnalPlugin r_anal_plugin_m680x_cs;
extern RAnalPlugin r_anal_plugin_malbolge;
extern RAnalPlugin r_anal_plugin_mcore;
extern RAnalPlugin r_anal_plugin_mips_cs;
extern RAnalPlugin r_anal_plugin_mips_gnu;
extern RAnalPlugin r_anal_plugin_msp430;
extern RAnalPlugin r_anal_plugin_nios2;
extern RAnalPlugin r_anal_plugin_or1k;
extern RAnalPlugin r_anal_plugin_pic;
extern RAnalPlugin r_anal_plugin_ppc_cs;
extern RAnalPlugin r_anal_plugin_ppc_gnu;
extern RAnalPlugin r_anal_plugin_propeller;
extern RAnalPlugin r_anal_plugin_riscv;
extern RAnalPlugin r_anal_plugin_riscv_cs;
extern RAnalPlugin r_anal_plugin_rsp;
extern RAnalPlugin r_anal_plugin_sh;
extern RAnalPlugin r_anal_plugin_snes;
extern RAnalPlugin r_anal_plugin_sparc_cs;
extern RAnalPlugin r_anal_plugin_sparc_gnu;
extern RAnalPlugin r_anal_plugin_s390_cs;
extern RAnalPlugin r_anal_plugin_tms320;
extern RAnalPlugin r_anal_plugin_tms320c64x;
extern RAnalPlugin r_anal_plugin_tricore;
extern RAnalPlugin r_anal_plugin_v810;
extern RAnalPlugin r_anal_plugin_v850;
extern RAnalPlugin r_anal_plugin_vax;
extern RAnalPlugin r_anal_plugin_wasm;
extern RAnalPlugin r_anal_plugin_ws;
extern RAnalPlugin r_anal_plugin_x86;
extern RAnalPlugin r_anal_plugin_x86_cs;
extern RAnalPlugin r_anal_plugin_x86_im;
extern RAnalPlugin r_anal_plugin_x86_simple;
extern RAnalPlugin r_anal_plugin_x86_udis;
extern RAnalPlugin r_anal_plugin_xap;
extern RAnalPlugin r_anal_plugin_xcore_cs;
extern RAnalPlugin r_anal_plugin_xtensa;
extern RAnalPlugin r_anal_plugin_arm_v35;
extern RAnalPlugin r_anal_plugin_z80;
extern RAnalPlugin r_anal_plugin_pyc;
extern RAnalEsilPlugin r_esil_plugin_dummy;
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_parse.h" 2 3 4





__attribute__((visibility("default"))) const char *r_parse_version(void);

typedef RList* (*RAnalVarList)(RAnalFunction *fcn, int kind);

typedef struct r_parse_t {
 void *user;
 RSpace *flagspace;
 RSpace *notin_flagspace;
 _Bool pseudo;
 _Bool subreg;
 _Bool subrel;
 _Bool subtail;
 _Bool localvar_only;
 unsigned long long subrel_addr;
 int maxflagnamelen;
 int minval;
 char *retleave_asm;
 struct r_parse_plugin_t *cur;

 RList *parsers;
 RAnalVarList varlist;
 long long (*get_ptr_at)(RAnalFunction *fcn, long long delta, unsigned long long addr);
 const char *(*get_reg_at)(RAnalFunction *fcn, long long delta, unsigned long long addr);
 char* (*get_op_ireg)(void *user, unsigned long long addr);
 RAnalBind analb;
 RFlagGetAtAddr flag_get;
 RAnalLabelAt label_get;
} RParse;

typedef struct r_parse_plugin_t {
 char *name;
 char *desc;
 _Bool (*init)(RParse *p, void *user);
 int (*fini)(RParse *p, void *user);
 int (*parse)(RParse *p, const char *data, char *str);
 _Bool (*assemble)(RParse *p, char *data, char *str);
 int (*filter)(RParse *p, unsigned long long addr, RFlag *f, char *data, char *str, int len, _Bool big_endian);
 _Bool (*subvar)(RParse *p, RAnalFunction *f, unsigned long long addr, int oplen, char *data, char *str, int len);
 int (*replace)(int argc, const char *argv[], char *newstr);
} RParsePlugin;




__attribute__((visibility("default"))) struct r_parse_t *r_parse_new(void);
__attribute__((visibility("default"))) void r_parse_free(RParse *p);


__attribute__((visibility("default"))) void r_parse_set_user_ptr(RParse *p, void *user);
__attribute__((visibility("default"))) _Bool r_parse_add(RParse *p, RParsePlugin *foo);
__attribute__((visibility("default"))) _Bool r_parse_use(RParse *p, const char *name);


__attribute__((visibility("default"))) _Bool r_parse_parse(RParse *p, const char *data, char *str);
__attribute__((visibility("default"))) _Bool r_parse_assemble(RParse *p, char *data, char *str);
__attribute__((visibility("default"))) _Bool r_parse_filter(RParse *p, unsigned long long addr, RFlag *f, RAnalHint *hint, char *data, char *str, int len, _Bool big_endian);
__attribute__((visibility("default"))) _Bool r_parse_subvar(RParse *p, RAnalFunction *f, unsigned long long addr, int oplen, char *data, char *str, int len);
__attribute__((visibility("default"))) char *r_parse_immtrim(char *opstr);



__attribute__((visibility("default"))) char *r_parse_c_string(RAnal *anal, const char *code, char **error_msg);
__attribute__((visibility("default"))) char *r_parse_c_file(RAnal *anal, const char *path, const char *dir, char **error_msg);
__attribute__((visibility("default"))) void r_parse_c_reset(RParse *p);


extern RParsePlugin r_parse_plugin_6502_pseudo;
extern RParsePlugin r_parse_plugin_arm_pseudo;
extern RParsePlugin r_parse_plugin_att2intel;
extern RParsePlugin r_parse_plugin_avr_pseudo;
extern RParsePlugin r_parse_plugin_chip8_pseudo;
extern RParsePlugin r_parse_plugin_dalvik_pseudo;
extern RParsePlugin r_parse_plugin_dummy;
extern RParsePlugin r_parse_plugin_m68k_pseudo;
extern RParsePlugin r_parse_plugin_mips_pseudo;
extern RParsePlugin r_parse_plugin_ppc_pseudo;
extern RParsePlugin r_parse_plugin_sh_pseudo;
extern RParsePlugin r_parse_plugin_wasm_pseudo;
extern RParsePlugin r_parse_plugin_riscv_pseudo;
extern RParsePlugin r_parse_plugin_x86_pseudo;
extern RParsePlugin r_parse_plugin_z80_pseudo;
extern RParsePlugin r_parse_plugin_tms320_pseudo;
extern RParsePlugin r_parse_plugin_v850_pseudo;
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_asm.h" 2 3 4






__attribute__((visibility("default"))) const char *r_asm_version(void);
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_asm.h" 3 4
enum {
 R_ASM_SYNTAX_NONE = 0,
 R_ASM_SYNTAX_INTEL,
 R_ASM_SYNTAX_ATT,
 R_ASM_SYNTAX_MASM,
 R_ASM_SYNTAX_REGNUM,
 R_ASM_SYNTAX_JZ,
};

enum {
 R_ASM_MOD_RAWVALUE = 'r',
 R_ASM_MOD_VALUE = 'v',
 R_ASM_MOD_DSTREG = 'd',
 R_ASM_MOD_SRCREG0 = '0',
 R_ASM_MOD_SRCREG1 = '1',
 R_ASM_MOD_SRCREG2 = '2'
};

typedef struct r_asm_op_t {
 int size;
 int bitsize;
 int payload;

 RStrBuf buf;
 RStrBuf buf_asm;
 RBuffer *buf_inc;
} RAsmOp;

typedef struct r_asm_code_t {

 int len;
 unsigned char *bytes;
 char *assembly;



 RList *equs;
 unsigned long long code_offset;
 unsigned long long data_offset;
 int code_align;
} RAsmCode;


typedef struct {
 char *key;
 char *value;
} RAsmEqu;


typedef struct r_asm_t {
 char *cpu;
 int bits;
 int big_endian;
 int syntax;
 unsigned long long pc;
 void *user;
 struct r_asm_plugin_t *cur;
 struct r_asm_plugin_t *acur;
 RList *plugins;
 RBinBind binb;
 RAnalBind analb;
 RParse *ifilter;
 RParse *ofilter;
 Sdb *pair;
 RSyscall *syscall;
 RNum *num;
 char *features;
 int invhex;
 int pcalign;
 int dataalign;
 int bitshift;
 _Bool immdisp;
 HtPP *flags;
 int seggrn;
 _Bool pseudo;
} RAsm;

typedef _Bool (*RAsmModifyCallback)(RAsm *a, unsigned char *buf, int field, unsigned long long val);

typedef struct r_asm_plugin_t {
 const char *name;
 const char *arch;
 const char *author;
 const char *version;
 const char *cpus;
 const char *desc;
 const char *license;
 void *user;
 int bits;
 int endian;
 _Bool (*init)(void *user);
 _Bool (*fini)(void *user);
 int (*disassemble)(RAsm *a, RAsmOp *op, const unsigned char *buf, int len);
 int (*assemble)(RAsm *a, RAsmOp *op, const char *buf);
 RAsmModifyCallback modify;
 char *(*mnemonics)(RAsm *a, int id, _Bool json);
 const char *features;
} RAsmPlugin;



__attribute__((visibility("default"))) RAsm *r_asm_new(void);
__attribute__((visibility("default"))) void r_asm_free(RAsm *a);
__attribute__((visibility("default"))) _Bool r_asm_modify(RAsm *a, unsigned char *buf, int field, unsigned long long val);
__attribute__((visibility("default"))) char *r_asm_mnemonics(RAsm *a, int id, _Bool json);
__attribute__((visibility("default"))) int r_asm_mnemonics_byname(RAsm *a, const char *name);
__attribute__((visibility("default"))) void r_asm_set_user_ptr(RAsm *a, void *user);
__attribute__((visibility("default"))) _Bool r_asm_add(RAsm *a, RAsmPlugin *foo);
__attribute__((visibility("default"))) _Bool r_asm_setup(RAsm *a, const char *arch, int bits, int big_endian);
__attribute__((visibility("default"))) _Bool r_asm_is_valid(RAsm *a, const char *name);
__attribute__((visibility("default"))) _Bool r_asm_use(RAsm *a, const char *name);
__attribute__((visibility("default"))) _Bool r_asm_use_assembler(RAsm *a, const char *name);
__attribute__((visibility("default"))) _Bool r_asm_set_arch(RAsm *a, const char *name, int bits);
__attribute__((visibility("default"))) int r_asm_set_bits(RAsm *a, int bits);
__attribute__((visibility("default"))) void r_asm_set_cpu(RAsm *a, const char *cpu);
__attribute__((visibility("default"))) _Bool r_asm_set_big_endian(RAsm *a, _Bool big_endian);
__attribute__((visibility("default"))) _Bool r_asm_set_syntax(RAsm *a, int syntax);
__attribute__((visibility("default"))) int r_asm_syntax_from_string(const char *name);
__attribute__((visibility("default"))) int r_asm_set_pc(RAsm *a, unsigned long long pc);
__attribute__((visibility("default"))) int r_asm_disassemble(RAsm *a, RAsmOp *op, const unsigned char *buf, int len);
__attribute__((visibility("default"))) int r_asm_assemble(RAsm *a, RAsmOp *op, const char *buf);
__attribute__((visibility("default"))) RAsmCode* r_asm_mdisassemble(RAsm *a, const unsigned char *buf, int len);
__attribute__((visibility("default"))) RAsmCode* r_asm_mdisassemble_hexstr(RAsm *a, RParse *p, const char *hexstr);
__attribute__((visibility("default"))) RAsmCode* r_asm_massemble(RAsm *a, const char *buf);
__attribute__((visibility("default"))) RAsmCode* r_asm_rasm_assemble(RAsm *a, const char *buf, _Bool use_spp);
__attribute__((visibility("default"))) char *r_asm_to_string(RAsm *a, unsigned long long addr, const unsigned char *b, int l);

__attribute__((visibility("default"))) unsigned char *r_asm_from_string(RAsm *a, unsigned long long addr, const char *b, int *l);
__attribute__((visibility("default"))) int r_asm_sub_names_input(RAsm *a, const char *f);
__attribute__((visibility("default"))) int r_asm_sub_names_output(RAsm *a, const char *f);
__attribute__((visibility("default"))) char *r_asm_describe(RAsm *a, const char* str);
__attribute__((visibility("default"))) RList* r_asm_get_plugins(RAsm *a);
__attribute__((visibility("default"))) void r_asm_list_directives(void);
__attribute__((visibility("default"))) SdbGperf *r_asm_get_gperf(const char *k);


__attribute__((visibility("default"))) RAsmCode *r_asm_code_new(void);
__attribute__((visibility("default"))) void* r_asm_code_free(RAsmCode *acode);
__attribute__((visibility("default"))) void r_asm_equ_item_free(RAsmEqu *equ);
__attribute__((visibility("default"))) _Bool r_asm_code_set_equ(RAsmCode *code, const char *key, const char *value);
__attribute__((visibility("default"))) char *r_asm_code_equ_replace(RAsmCode *code, char *str);
__attribute__((visibility("default"))) char* r_asm_code_get_hex(RAsmCode *acode);


__attribute__((visibility("default"))) RAsmOp *r_asm_op_new(void);
__attribute__((visibility("default"))) void r_asm_op_init(RAsmOp *op);
__attribute__((visibility("default"))) void r_asm_op_free(RAsmOp *op);
__attribute__((visibility("default"))) void r_asm_op_fini(RAsmOp *op);
__attribute__((visibility("default"))) char *r_asm_op_get_hex(RAsmOp *op);
__attribute__((visibility("default"))) char *r_asm_op_get_asm(RAsmOp *op);
__attribute__((visibility("default"))) int r_asm_op_get_size(RAsmOp *op);
__attribute__((visibility("default"))) void r_asm_op_set_asm(RAsmOp *op, const char *str);
__attribute__((visibility("default"))) int r_asm_op_set_hex(RAsmOp *op, const char *str);
__attribute__((visibility("default"))) int r_asm_op_set_hexbuf(RAsmOp *op, const unsigned char *buf, int len);
__attribute__((visibility("default"))) void r_asm_op_set_buf(RAsmOp *op, const unsigned char *str, int len);
__attribute__((visibility("default"))) unsigned char *r_asm_op_get_buf(RAsmOp *op);


extern RAsmPlugin r_asm_plugin_6502;
extern RAsmPlugin r_asm_plugin_6502_cs;
extern RAsmPlugin r_asm_plugin_8051;
extern RAsmPlugin r_asm_plugin_amd29k;
extern RAsmPlugin r_asm_plugin_arc;
extern RAsmPlugin r_asm_plugin_arm_as;
extern RAsmPlugin r_asm_plugin_arm_cs;
extern RAsmPlugin r_asm_plugin_arm_gnu;
extern RAsmPlugin r_asm_plugin_arm_winedbg;
extern RAsmPlugin r_asm_plugin_avr;
extern RAsmPlugin r_asm_plugin_bf;
extern RAsmPlugin r_asm_plugin_null;
extern RAsmPlugin r_asm_plugin_chip8;
extern RAsmPlugin r_asm_plugin_cr16;
extern RAsmPlugin r_asm_plugin_cris_gnu;
extern RAsmPlugin r_asm_plugin_dalvik;
extern RAsmPlugin r_asm_plugin_dcpu16;
extern RAsmPlugin r_asm_plugin_ebc;
extern RAsmPlugin r_asm_plugin_gb;
extern RAsmPlugin r_asm_plugin_h8300;
extern RAsmPlugin r_asm_plugin_hexagon;
extern RAsmPlugin r_asm_plugin_hexagon_gnu;
extern RAsmPlugin r_asm_plugin_hppa_gnu;
extern RAsmPlugin r_asm_plugin_i4004;
extern RAsmPlugin r_asm_plugin_i8080;
extern RAsmPlugin r_asm_plugin_java;
extern RAsmPlugin r_asm_plugin_lanai_gnu;
extern RAsmPlugin r_asm_plugin_lh5801;
extern RAsmPlugin r_asm_plugin_lm32;
extern RAsmPlugin r_asm_plugin_m68k_cs;
extern RAsmPlugin r_asm_plugin_m680x_cs;
extern RAsmPlugin r_asm_plugin_malbolge;
extern RAsmPlugin r_asm_plugin_mcore;
extern RAsmPlugin r_asm_plugin_mcs96;
extern RAsmPlugin r_asm_plugin_mips_cs;
extern RAsmPlugin r_asm_plugin_mips_gnu;
extern RAsmPlugin r_asm_plugin_msp430;
extern RAsmPlugin r_asm_plugin_nios2;
extern RAsmPlugin r_asm_plugin_or1k;
extern RAsmPlugin r_asm_plugin_pic;
extern RAsmPlugin r_asm_plugin_ppc_as;
extern RAsmPlugin r_asm_plugin_ppc_cs;
extern RAsmPlugin r_asm_plugin_ppc_gnu;
extern RAsmPlugin r_asm_plugin_propeller;
extern RAsmPlugin r_asm_plugin_riscv;
extern RAsmPlugin r_asm_plugin_riscv_cs;
extern RAsmPlugin r_asm_plugin_rsp;
extern RAsmPlugin r_asm_plugin_sh;
extern RAsmPlugin r_asm_plugin_snes;
extern RAsmPlugin r_asm_plugin_sparc_cs;
extern RAsmPlugin r_asm_plugin_sparc_gnu;
extern RAsmPlugin r_asm_plugin_s390_cs;
extern RAsmPlugin r_asm_plugin_s390_gnu;
extern RAsmPlugin r_asm_plugin_tms320;
extern RAsmPlugin r_asm_plugin_tms320c64x;
extern RAsmPlugin r_asm_plugin_tricore;
extern RAsmPlugin r_asm_plugin_v810;
extern RAsmPlugin r_asm_plugin_v850;
extern RAsmPlugin r_asm_plugin_v850_gnu;
extern RAsmPlugin r_asm_plugin_m68k_gnu;
extern RAsmPlugin r_asm_plugin_vax;
extern RAsmPlugin r_asm_plugin_wasm;
extern RAsmPlugin r_asm_plugin_ws;
extern RAsmPlugin r_asm_plugin_x86_as;
extern RAsmPlugin r_asm_plugin_x86_cs;
extern RAsmPlugin r_asm_plugin_x86_nasm;
extern RAsmPlugin r_asm_plugin_x86_nz;
extern RAsmPlugin r_asm_plugin_xap;
extern RAsmPlugin r_asm_plugin_xcore_cs;
extern RAsmPlugin r_asm_plugin_xtensa;
extern RAsmPlugin r_asm_plugin_z80;
extern RAsmPlugin r_asm_plugin_arm_v35;
extern RAsmPlugin r_asm_plugin_pyc;
extern RAsmPlugin r_asm_plugin_pdp11_gnu;
extern RAsmPlugin r_asm_plugin_alpha;
extern RAsmPlugin r_asm_plugin_vasm;
extern RAsmPlugin r_asm_plugin_jdh8;
# 4 "project/radare2/libr/anal/p/anal_riscv_cs.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_lib.h" 1 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dlfcn.h" 1 3 4
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dlfcn.h" 3 4
typedef struct dl_info {
        const char *dli_fname;
        void *dli_fbase;
        const char *dli_sname;
        void *dli_saddr;
} Dl_info;

extern int dladdr(const void *, Dl_info *);




extern int dlclose(void * __handle) ;
extern char * dlerror(void) ;
extern void * dlopen(const char * __path, int __mode) ;
extern void * dlsym(void * __handle, const char * __symbol) ;


extern _Bool dlopen_preflight(const char* __path) ;
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_lib.h" 2 3 4






__attribute__((visibility("default"))) const char *r_lib_version(void);
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_lib.h" 3 4
typedef struct r_lib_plugin_t {
 int type;
 char *file;
 void *data;
 struct r_lib_handler_t *handler;
 void *dl_handler;
 char *author;
 char *version;
 void (*free)(void *data);
} RLibPlugin;


typedef struct r_lib_handler_t {
 int type;
 char desc[128];
 void *user;
 int (*constructor)(RLibPlugin *, void *user, void *data);
 int (*destructor)(RLibPlugin *, void *user, void *data);
} RLibHandler;



typedef struct r_lib_struct_t {
 int type;
 void *data;
 const char *version;
 void (*free)(void *data);
 const char *pkgname;
} RLibStruct;

typedef RLibStruct* (*RLibStructFunc) (void);


enum {
 R_LIB_TYPE_IO,
 R_LIB_TYPE_DBG,
 R_LIB_TYPE_LANG,
 R_LIB_TYPE_ASM,
 R_LIB_TYPE_ANAL,
 R_LIB_TYPE_PARSE,
 R_LIB_TYPE_BIN,
 R_LIB_TYPE_BIN_XTR,
 R_LIB_TYPE_BIN_LDR,
 R_LIB_TYPE_BP,
 R_LIB_TYPE_SYSCALL,
 R_LIB_TYPE_FASTCALL,
 R_LIB_TYPE_CRYPTO,
 R_LIB_TYPE_CORE,
 R_LIB_TYPE_EGG,
 R_LIB_TYPE_FS,
 R_LIB_TYPE_ESIL,
 R_LIB_TYPE_LAST
};

typedef struct r_lib_t {



 char *symname;
 char *symnamefunc;
 RList *plugins;
 RList *handlers;
 _Bool ignore_version;
} RLib;



__attribute__((visibility("default"))) void *r_lib_dl_open(const char *libname);

__attribute__((visibility("default"))) void *r_lib_dl_sym(void *handler, const char *name);
__attribute__((visibility("default"))) int r_lib_dl_close(void *handler);


typedef int (*RLibCallback)(RLibPlugin *, void *, void *);
__attribute__((visibility("default"))) RLib *r_lib_new(const char *symname, const char *symnamefunc);
__attribute__((visibility("default"))) void r_lib_free(RLib *lib);
__attribute__((visibility("default"))) int r_lib_run_handler(RLib *lib, RLibPlugin *plugin, RLibStruct *symbol);
__attribute__((visibility("default"))) RLibHandler *r_lib_get_handler(RLib *lib, int type);
__attribute__((visibility("default"))) int r_lib_open(RLib *lib, const char *file);
__attribute__((visibility("default"))) _Bool r_lib_opendir(RLib *lib, const char *path);
__attribute__((visibility("default"))) int r_lib_open_ptr (RLib *lib, const char *file, void *handler, RLibStruct *stru);
__attribute__((visibility("default"))) char *r_lib_path(const char *libname);
__attribute__((visibility("default"))) void r_lib_list(RLib *lib);
__attribute__((visibility("default"))) _Bool r_lib_add_handler(RLib *lib, int type, const char *desc, RLibCallback ct, RLibCallback dt, void *user);
__attribute__((visibility("default"))) _Bool r_lib_del_handler(RLib *lib, int type);
__attribute__((visibility("default"))) int r_lib_close(RLib *lib, const char *file);

__attribute__((visibility("default"))) const char *r_lib_types_get(int idx);
__attribute__((visibility("default"))) int r_lib_types_get_i(const char *str);
# 5 "project/radare2/libr/anal/p/anal_riscv_cs.c" 2

# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 1 3 4
# 20 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/platform.h" 1 3 4
# 21 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 71 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
typedef size_t csh;


typedef enum cs_arch {
 CS_ARCH_ARM = 0,
 CS_ARCH_ARM64,
 CS_ARCH_MIPS,
 CS_ARCH_X86,
 CS_ARCH_PPC,
 CS_ARCH_SPARC,
 CS_ARCH_SYSZ,
 CS_ARCH_XCORE,
 CS_ARCH_M68K,
 CS_ARCH_TMS320C64X,
 CS_ARCH_M680X,
 CS_ARCH_EVM,
 CS_ARCH_MAX,
 CS_ARCH_ALL = 0xFFFF,
} cs_arch;
# 102 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
typedef enum cs_mode {
 CS_MODE_LITTLE_ENDIAN = 0,
 CS_MODE_ARM = 0,
 CS_MODE_16 = 1 << 1,
 CS_MODE_32 = 1 << 2,
 CS_MODE_64 = 1 << 3,
 CS_MODE_THUMB = 1 << 4,
 CS_MODE_MCLASS = 1 << 5,
 CS_MODE_V8 = 1 << 6,
 CS_MODE_MICRO = 1 << 4,
 CS_MODE_MIPS3 = 1 << 5,
 CS_MODE_MIPS32R6 = 1 << 6,
 CS_MODE_MIPS2 = 1 << 7,
 CS_MODE_V9 = 1 << 4,
 CS_MODE_QPX = 1 << 4,
 CS_MODE_M68K_000 = 1 << 1,
 CS_MODE_M68K_010 = 1 << 2,
 CS_MODE_M68K_020 = 1 << 3,
 CS_MODE_M68K_030 = 1 << 4,
 CS_MODE_M68K_040 = 1 << 5,
 CS_MODE_M68K_060 = 1 << 6,
 CS_MODE_BIG_ENDIAN = 1 << 31,
 CS_MODE_MIPS32 = CS_MODE_32,
 CS_MODE_MIPS64 = CS_MODE_64,
 CS_MODE_M680X_6301 = 1 << 1,
 CS_MODE_M680X_6309 = 1 << 2,
 CS_MODE_M680X_6800 = 1 << 3,
 CS_MODE_M680X_6801 = 1 << 4,
 CS_MODE_M680X_6805 = 1 << 5,
 CS_MODE_M680X_6808 = 1 << 6,
 CS_MODE_M680X_6809 = 1 << 7,
 CS_MODE_M680X_6811 = 1 << 8,
 CS_MODE_M680X_CPU12 = 1 << 9,

 CS_MODE_M680X_HCS08 = 1 << 10,
} cs_mode;

typedef void* ( *cs_malloc_t)(size_t size);
typedef void* ( *cs_calloc_t)(size_t nmemb, size_t size);
typedef void* ( *cs_realloc_t)(void *ptr, size_t size);
typedef void ( *cs_free_t)(void *ptr);
typedef int ( *cs_vsnprintf_t)(char *str, size_t size, const char *format, va_list ap);




typedef struct cs_opt_mem {
 cs_malloc_t malloc;
 cs_calloc_t calloc;
 cs_realloc_t realloc;
 cs_free_t free;
 cs_vsnprintf_t vsnprintf;
} cs_opt_mem;





typedef struct cs_opt_mnem {

 unsigned int id;

 const char *mnemonic;
} cs_opt_mnem;


typedef enum cs_opt_type {
 CS_OPT_INVALID = 0,
 CS_OPT_SYNTAX,
 CS_OPT_DETAIL,
 CS_OPT_MODE,
 CS_OPT_MEM,
 CS_OPT_SKIPDATA,
 CS_OPT_SKIPDATA_SETUP,
 CS_OPT_MNEMONIC,
 CS_OPT_UNSIGNED,
} cs_opt_type;


typedef enum cs_opt_value {
 CS_OPT_OFF = 0,
 CS_OPT_ON = 3,
 CS_OPT_SYNTAX_DEFAULT = 0,
 CS_OPT_SYNTAX_INTEL,
 CS_OPT_SYNTAX_ATT,
 CS_OPT_SYNTAX_NOREGNAME,
 CS_OPT_SYNTAX_MASM,
} cs_opt_value;


typedef enum cs_op_type {
 CS_OP_INVALID = 0,
 CS_OP_REG,
 CS_OP_IMM,
 CS_OP_MEM,
 CS_OP_FP,
} cs_op_type;



typedef enum cs_ac_type {
 CS_AC_INVALID = 0,
 CS_AC_READ = 1 << 0,
 CS_AC_WRITE = 1 << 1,
} cs_ac_type;


typedef enum cs_group_type {
 CS_GRP_INVALID = 0,
 CS_GRP_JUMP,
 CS_GRP_CALL,
 CS_GRP_RET,
 CS_GRP_INT,
 CS_GRP_IRET,
 CS_GRP_PRIVILEGE,
 CS_GRP_BRANCH_RELATIVE,
} cs_group_type;
# 234 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
typedef size_t ( *cs_skipdata_cb_t)(const uint8_t *code, size_t code_size, size_t offset, void *user_data);


typedef struct cs_opt_skipdata {



 const char *mnemonic;
# 260 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
 cs_skipdata_cb_t callback;


 void *user_data;
} cs_opt_skipdata;


# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/arm.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/arm.h" 3 4
typedef enum arm_shifter {
 ARM_SFT_INVALID = 0,
 ARM_SFT_ASR,
 ARM_SFT_LSL,
 ARM_SFT_LSR,
 ARM_SFT_ROR,
 ARM_SFT_RRX,
 ARM_SFT_ASR_REG,
 ARM_SFT_LSL_REG,
 ARM_SFT_LSR_REG,
 ARM_SFT_ROR_REG,
 ARM_SFT_RRX_REG,
} arm_shifter;


typedef enum arm_cc {
 ARM_CC_INVALID = 0,
 ARM_CC_EQ,
 ARM_CC_NE,
 ARM_CC_HS,
 ARM_CC_LO,
 ARM_CC_MI,
 ARM_CC_PL,
 ARM_CC_VS,
 ARM_CC_VC,
 ARM_CC_HI,
 ARM_CC_LS,
 ARM_CC_GE,
 ARM_CC_LT,
 ARM_CC_GT,
 ARM_CC_LE,
 ARM_CC_AL
} arm_cc;

typedef enum arm_sysreg {

 ARM_SYSREG_INVALID = 0,


 ARM_SYSREG_SPSR_C = 1,
 ARM_SYSREG_SPSR_X = 2,
 ARM_SYSREG_SPSR_S = 4,
 ARM_SYSREG_SPSR_F = 8,


 ARM_SYSREG_CPSR_C = 16,
 ARM_SYSREG_CPSR_X = 32,
 ARM_SYSREG_CPSR_S = 64,
 ARM_SYSREG_CPSR_F = 128,


 ARM_SYSREG_APSR = 256,
 ARM_SYSREG_APSR_G,
 ARM_SYSREG_APSR_NZCVQ,
 ARM_SYSREG_APSR_NZCVQG,

 ARM_SYSREG_IAPSR,
 ARM_SYSREG_IAPSR_G,
 ARM_SYSREG_IAPSR_NZCVQG,
 ARM_SYSREG_IAPSR_NZCVQ,

 ARM_SYSREG_EAPSR,
 ARM_SYSREG_EAPSR_G,
 ARM_SYSREG_EAPSR_NZCVQG,
 ARM_SYSREG_EAPSR_NZCVQ,

 ARM_SYSREG_XPSR,
 ARM_SYSREG_XPSR_G,
 ARM_SYSREG_XPSR_NZCVQG,
 ARM_SYSREG_XPSR_NZCVQ,

 ARM_SYSREG_IPSR,
 ARM_SYSREG_EPSR,
 ARM_SYSREG_IEPSR,

 ARM_SYSREG_MSP,
 ARM_SYSREG_PSP,
 ARM_SYSREG_PRIMASK,
 ARM_SYSREG_BASEPRI,
 ARM_SYSREG_BASEPRI_MAX,
 ARM_SYSREG_FAULTMASK,
 ARM_SYSREG_CONTROL,


 ARM_SYSREG_R8_USR,
 ARM_SYSREG_R9_USR,
 ARM_SYSREG_R10_USR,
 ARM_SYSREG_R11_USR,
 ARM_SYSREG_R12_USR,
 ARM_SYSREG_SP_USR,
 ARM_SYSREG_LR_USR,
 ARM_SYSREG_R8_FIQ,
 ARM_SYSREG_R9_FIQ,
 ARM_SYSREG_R10_FIQ,
 ARM_SYSREG_R11_FIQ,
 ARM_SYSREG_R12_FIQ,
 ARM_SYSREG_SP_FIQ,
 ARM_SYSREG_LR_FIQ,
 ARM_SYSREG_LR_IRQ,
 ARM_SYSREG_SP_IRQ,
 ARM_SYSREG_LR_SVC,
 ARM_SYSREG_SP_SVC,
 ARM_SYSREG_LR_ABT,
 ARM_SYSREG_SP_ABT,
 ARM_SYSREG_LR_UND,
 ARM_SYSREG_SP_UND,
 ARM_SYSREG_LR_MON,
 ARM_SYSREG_SP_MON,
 ARM_SYSREG_ELR_HYP,
 ARM_SYSREG_SP_HYP,

 ARM_SYSREG_SPSR_FIQ,
 ARM_SYSREG_SPSR_IRQ,
 ARM_SYSREG_SPSR_SVC,
 ARM_SYSREG_SPSR_ABT,
 ARM_SYSREG_SPSR_UND,
 ARM_SYSREG_SPSR_MON,
 ARM_SYSREG_SPSR_HYP,
} arm_sysreg;



typedef enum arm_mem_barrier {
 ARM_MB_INVALID = 0,
 ARM_MB_RESERVED_0,
 ARM_MB_OSHLD,
 ARM_MB_OSHST,
 ARM_MB_OSH,
 ARM_MB_RESERVED_4,
 ARM_MB_NSHLD,
 ARM_MB_NSHST,
 ARM_MB_NSH,
 ARM_MB_RESERVED_8,
 ARM_MB_ISHLD,
 ARM_MB_ISHST,
 ARM_MB_ISH,
 ARM_MB_RESERVED_12,
 ARM_MB_LD,
 ARM_MB_ST,
 ARM_MB_SY,
} arm_mem_barrier;


typedef enum arm_op_type {
 ARM_OP_INVALID = 0,
 ARM_OP_REG,
 ARM_OP_IMM,
 ARM_OP_MEM,
 ARM_OP_FP,
 ARM_OP_CIMM = 64,
 ARM_OP_PIMM,
 ARM_OP_SETEND,
 ARM_OP_SYSREG,
} arm_op_type;


typedef enum arm_setend_type {
 ARM_SETEND_INVALID = 0,
 ARM_SETEND_BE,
 ARM_SETEND_LE,
} arm_setend_type;

typedef enum arm_cpsmode_type {
 ARM_CPSMODE_INVALID = 0,
 ARM_CPSMODE_IE = 2,
 ARM_CPSMODE_ID = 3
} arm_cpsmode_type;


typedef enum arm_cpsflag_type {
 ARM_CPSFLAG_INVALID = 0,
 ARM_CPSFLAG_F = 1,
 ARM_CPSFLAG_I = 2,
 ARM_CPSFLAG_A = 4,
 ARM_CPSFLAG_NONE = 16,
} arm_cpsflag_type;


typedef enum arm_vectordata_type {
 ARM_VECTORDATA_INVALID = 0,


 ARM_VECTORDATA_I8,
 ARM_VECTORDATA_I16,
 ARM_VECTORDATA_I32,
 ARM_VECTORDATA_I64,


 ARM_VECTORDATA_S8,
 ARM_VECTORDATA_S16,
 ARM_VECTORDATA_S32,
 ARM_VECTORDATA_S64,


 ARM_VECTORDATA_U8,
 ARM_VECTORDATA_U16,
 ARM_VECTORDATA_U32,
 ARM_VECTORDATA_U64,


 ARM_VECTORDATA_P8,


 ARM_VECTORDATA_F32,
 ARM_VECTORDATA_F64,


 ARM_VECTORDATA_F16F64,
 ARM_VECTORDATA_F64F16,
 ARM_VECTORDATA_F32F16,
 ARM_VECTORDATA_F16F32,
 ARM_VECTORDATA_F64F32,
 ARM_VECTORDATA_F32F64,


 ARM_VECTORDATA_S32F32,
 ARM_VECTORDATA_U32F32,
 ARM_VECTORDATA_F32S32,
 ARM_VECTORDATA_F32U32,
 ARM_VECTORDATA_F64S16,
 ARM_VECTORDATA_F32S16,
 ARM_VECTORDATA_F64S32,
 ARM_VECTORDATA_S16F64,
 ARM_VECTORDATA_S16F32,
 ARM_VECTORDATA_S32F64,
 ARM_VECTORDATA_U16F64,
 ARM_VECTORDATA_U16F32,
 ARM_VECTORDATA_U32F64,
 ARM_VECTORDATA_F64U16,
 ARM_VECTORDATA_F32U16,
 ARM_VECTORDATA_F64U32,
} arm_vectordata_type;


typedef enum arm_reg {
 ARM_REG_INVALID = 0,
 ARM_REG_APSR,
 ARM_REG_APSR_NZCV,
 ARM_REG_CPSR,
 ARM_REG_FPEXC,
 ARM_REG_FPINST,
 ARM_REG_FPSCR,
 ARM_REG_FPSCR_NZCV,
 ARM_REG_FPSID,
 ARM_REG_ITSTATE,
 ARM_REG_LR,
 ARM_REG_PC,
 ARM_REG_SP,
 ARM_REG_SPSR,
 ARM_REG_D0,
 ARM_REG_D1,
 ARM_REG_D2,
 ARM_REG_D3,
 ARM_REG_D4,
 ARM_REG_D5,
 ARM_REG_D6,
 ARM_REG_D7,
 ARM_REG_D8,
 ARM_REG_D9,
 ARM_REG_D10,
 ARM_REG_D11,
 ARM_REG_D12,
 ARM_REG_D13,
 ARM_REG_D14,
 ARM_REG_D15,
 ARM_REG_D16,
 ARM_REG_D17,
 ARM_REG_D18,
 ARM_REG_D19,
 ARM_REG_D20,
 ARM_REG_D21,
 ARM_REG_D22,
 ARM_REG_D23,
 ARM_REG_D24,
 ARM_REG_D25,
 ARM_REG_D26,
 ARM_REG_D27,
 ARM_REG_D28,
 ARM_REG_D29,
 ARM_REG_D30,
 ARM_REG_D31,
 ARM_REG_FPINST2,
 ARM_REG_MVFR0,
 ARM_REG_MVFR1,
 ARM_REG_MVFR2,
 ARM_REG_Q0,
 ARM_REG_Q1,
 ARM_REG_Q2,
 ARM_REG_Q3,
 ARM_REG_Q4,
 ARM_REG_Q5,
 ARM_REG_Q6,
 ARM_REG_Q7,
 ARM_REG_Q8,
 ARM_REG_Q9,
 ARM_REG_Q10,
 ARM_REG_Q11,
 ARM_REG_Q12,
 ARM_REG_Q13,
 ARM_REG_Q14,
 ARM_REG_Q15,
 ARM_REG_R0,
 ARM_REG_R1,
 ARM_REG_R2,
 ARM_REG_R3,
 ARM_REG_R4,
 ARM_REG_R5,
 ARM_REG_R6,
 ARM_REG_R7,
 ARM_REG_R8,
 ARM_REG_R9,
 ARM_REG_R10,
 ARM_REG_R11,
 ARM_REG_R12,
 ARM_REG_S0,
 ARM_REG_S1,
 ARM_REG_S2,
 ARM_REG_S3,
 ARM_REG_S4,
 ARM_REG_S5,
 ARM_REG_S6,
 ARM_REG_S7,
 ARM_REG_S8,
 ARM_REG_S9,
 ARM_REG_S10,
 ARM_REG_S11,
 ARM_REG_S12,
 ARM_REG_S13,
 ARM_REG_S14,
 ARM_REG_S15,
 ARM_REG_S16,
 ARM_REG_S17,
 ARM_REG_S18,
 ARM_REG_S19,
 ARM_REG_S20,
 ARM_REG_S21,
 ARM_REG_S22,
 ARM_REG_S23,
 ARM_REG_S24,
 ARM_REG_S25,
 ARM_REG_S26,
 ARM_REG_S27,
 ARM_REG_S28,
 ARM_REG_S29,
 ARM_REG_S30,
 ARM_REG_S31,

 ARM_REG_ENDING,


 ARM_REG_R13 = ARM_REG_SP,
 ARM_REG_R14 = ARM_REG_LR,
 ARM_REG_R15 = ARM_REG_PC,

 ARM_REG_SB = ARM_REG_R9,
 ARM_REG_SL = ARM_REG_R10,
 ARM_REG_FP = ARM_REG_R11,
 ARM_REG_IP = ARM_REG_R12,
} arm_reg;



typedef struct arm_op_mem {
 arm_reg base;
 arm_reg index;
 int scale;
 int disp;


 int lshift;
} arm_op_mem;


typedef struct cs_arm_op {
 int vector_index;

 struct {
  arm_shifter type;
  unsigned int value;
 } shift;

 arm_op_type type;

 union {
  int reg;
  int32_t imm;
  double fp;
  arm_op_mem mem;
  arm_setend_type setend;
 };




 _Bool subtracted;




 uint8_t access;


 int8_t neon_lane;
} cs_arm_op;


typedef struct cs_arm {
 _Bool usermode;
 int vector_size;
 arm_vectordata_type vector_data;
 arm_cpsmode_type cps_mode;
 arm_cpsflag_type cps_flag;
 arm_cc cc;
 _Bool update_flags;
 _Bool writeback;
 arm_mem_barrier mem_barrier;



 uint8_t op_count;

 cs_arm_op operands[36];
} cs_arm;


typedef enum arm_insn {
 ARM_INS_INVALID = 0,

 ARM_INS_ADC,
 ARM_INS_ADD,
 ARM_INS_ADR,
 ARM_INS_AESD,
 ARM_INS_AESE,
 ARM_INS_AESIMC,
 ARM_INS_AESMC,
 ARM_INS_AND,
 ARM_INS_BFC,
 ARM_INS_BFI,
 ARM_INS_BIC,
 ARM_INS_BKPT,
 ARM_INS_BL,
 ARM_INS_BLX,
 ARM_INS_BX,
 ARM_INS_BXJ,
 ARM_INS_B,
 ARM_INS_CDP,
 ARM_INS_CDP2,
 ARM_INS_CLREX,
 ARM_INS_CLZ,
 ARM_INS_CMN,
 ARM_INS_CMP,
 ARM_INS_CPS,
 ARM_INS_CRC32B,
 ARM_INS_CRC32CB,
 ARM_INS_CRC32CH,
 ARM_INS_CRC32CW,
 ARM_INS_CRC32H,
 ARM_INS_CRC32W,
 ARM_INS_DBG,
 ARM_INS_DMB,
 ARM_INS_DSB,
 ARM_INS_EOR,
 ARM_INS_ERET,
 ARM_INS_VMOV,
 ARM_INS_FLDMDBX,
 ARM_INS_FLDMIAX,
 ARM_INS_VMRS,
 ARM_INS_FSTMDBX,
 ARM_INS_FSTMIAX,
 ARM_INS_HINT,
 ARM_INS_HLT,
 ARM_INS_HVC,
 ARM_INS_ISB,
 ARM_INS_LDA,
 ARM_INS_LDAB,
 ARM_INS_LDAEX,
 ARM_INS_LDAEXB,
 ARM_INS_LDAEXD,
 ARM_INS_LDAEXH,
 ARM_INS_LDAH,
 ARM_INS_LDC2L,
 ARM_INS_LDC2,
 ARM_INS_LDCL,
 ARM_INS_LDC,
 ARM_INS_LDMDA,
 ARM_INS_LDMDB,
 ARM_INS_LDM,
 ARM_INS_LDMIB,
 ARM_INS_LDRBT,
 ARM_INS_LDRB,
 ARM_INS_LDRD,
 ARM_INS_LDREX,
 ARM_INS_LDREXB,
 ARM_INS_LDREXD,
 ARM_INS_LDREXH,
 ARM_INS_LDRH,
 ARM_INS_LDRHT,
 ARM_INS_LDRSB,
 ARM_INS_LDRSBT,
 ARM_INS_LDRSH,
 ARM_INS_LDRSHT,
 ARM_INS_LDRT,
 ARM_INS_LDR,
 ARM_INS_MCR,
 ARM_INS_MCR2,
 ARM_INS_MCRR,
 ARM_INS_MCRR2,
 ARM_INS_MLA,
 ARM_INS_MLS,
 ARM_INS_MOV,
 ARM_INS_MOVT,
 ARM_INS_MOVW,
 ARM_INS_MRC,
 ARM_INS_MRC2,
 ARM_INS_MRRC,
 ARM_INS_MRRC2,
 ARM_INS_MRS,
 ARM_INS_MSR,
 ARM_INS_MUL,
 ARM_INS_MVN,
 ARM_INS_ORR,
 ARM_INS_PKHBT,
 ARM_INS_PKHTB,
 ARM_INS_PLDW,
 ARM_INS_PLD,
 ARM_INS_PLI,
 ARM_INS_QADD,
 ARM_INS_QADD16,
 ARM_INS_QADD8,
 ARM_INS_QASX,
 ARM_INS_QDADD,
 ARM_INS_QDSUB,
 ARM_INS_QSAX,
 ARM_INS_QSUB,
 ARM_INS_QSUB16,
 ARM_INS_QSUB8,
 ARM_INS_RBIT,
 ARM_INS_REV,
 ARM_INS_REV16,
 ARM_INS_REVSH,
 ARM_INS_RFEDA,
 ARM_INS_RFEDB,
 ARM_INS_RFEIA,
 ARM_INS_RFEIB,
 ARM_INS_RSB,
 ARM_INS_RSC,
 ARM_INS_SADD16,
 ARM_INS_SADD8,
 ARM_INS_SASX,
 ARM_INS_SBC,
 ARM_INS_SBFX,
 ARM_INS_SDIV,
 ARM_INS_SEL,
 ARM_INS_SETEND,
 ARM_INS_SHA1C,
 ARM_INS_SHA1H,
 ARM_INS_SHA1M,
 ARM_INS_SHA1P,
 ARM_INS_SHA1SU0,
 ARM_INS_SHA1SU1,
 ARM_INS_SHA256H,
 ARM_INS_SHA256H2,
 ARM_INS_SHA256SU0,
 ARM_INS_SHA256SU1,
 ARM_INS_SHADD16,
 ARM_INS_SHADD8,
 ARM_INS_SHASX,
 ARM_INS_SHSAX,
 ARM_INS_SHSUB16,
 ARM_INS_SHSUB8,
 ARM_INS_SMC,
 ARM_INS_SMLABB,
 ARM_INS_SMLABT,
 ARM_INS_SMLAD,
 ARM_INS_SMLADX,
 ARM_INS_SMLAL,
 ARM_INS_SMLALBB,
 ARM_INS_SMLALBT,
 ARM_INS_SMLALD,
 ARM_INS_SMLALDX,
 ARM_INS_SMLALTB,
 ARM_INS_SMLALTT,
 ARM_INS_SMLATB,
 ARM_INS_SMLATT,
 ARM_INS_SMLAWB,
 ARM_INS_SMLAWT,
 ARM_INS_SMLSD,
 ARM_INS_SMLSDX,
 ARM_INS_SMLSLD,
 ARM_INS_SMLSLDX,
 ARM_INS_SMMLA,
 ARM_INS_SMMLAR,
 ARM_INS_SMMLS,
 ARM_INS_SMMLSR,
 ARM_INS_SMMUL,
 ARM_INS_SMMULR,
 ARM_INS_SMUAD,
 ARM_INS_SMUADX,
 ARM_INS_SMULBB,
 ARM_INS_SMULBT,
 ARM_INS_SMULL,
 ARM_INS_SMULTB,
 ARM_INS_SMULTT,
 ARM_INS_SMULWB,
 ARM_INS_SMULWT,
 ARM_INS_SMUSD,
 ARM_INS_SMUSDX,
 ARM_INS_SRSDA,
 ARM_INS_SRSDB,
 ARM_INS_SRSIA,
 ARM_INS_SRSIB,
 ARM_INS_SSAT,
 ARM_INS_SSAT16,
 ARM_INS_SSAX,
 ARM_INS_SSUB16,
 ARM_INS_SSUB8,
 ARM_INS_STC2L,
 ARM_INS_STC2,
 ARM_INS_STCL,
 ARM_INS_STC,
 ARM_INS_STL,
 ARM_INS_STLB,
 ARM_INS_STLEX,
 ARM_INS_STLEXB,
 ARM_INS_STLEXD,
 ARM_INS_STLEXH,
 ARM_INS_STLH,
 ARM_INS_STMDA,
 ARM_INS_STMDB,
 ARM_INS_STM,
 ARM_INS_STMIB,
 ARM_INS_STRBT,
 ARM_INS_STRB,
 ARM_INS_STRD,
 ARM_INS_STREX,
 ARM_INS_STREXB,
 ARM_INS_STREXD,
 ARM_INS_STREXH,
 ARM_INS_STRH,
 ARM_INS_STRHT,
 ARM_INS_STRT,
 ARM_INS_STR,
 ARM_INS_SUB,
 ARM_INS_SVC,
 ARM_INS_SWP,
 ARM_INS_SWPB,
 ARM_INS_SXTAB,
 ARM_INS_SXTAB16,
 ARM_INS_SXTAH,
 ARM_INS_SXTB,
 ARM_INS_SXTB16,
 ARM_INS_SXTH,
 ARM_INS_TEQ,
 ARM_INS_TRAP,
 ARM_INS_TST,
 ARM_INS_UADD16,
 ARM_INS_UADD8,
 ARM_INS_UASX,
 ARM_INS_UBFX,
 ARM_INS_UDF,
 ARM_INS_UDIV,
 ARM_INS_UHADD16,
 ARM_INS_UHADD8,
 ARM_INS_UHASX,
 ARM_INS_UHSAX,
 ARM_INS_UHSUB16,
 ARM_INS_UHSUB8,
 ARM_INS_UMAAL,
 ARM_INS_UMLAL,
 ARM_INS_UMULL,
 ARM_INS_UQADD16,
 ARM_INS_UQADD8,
 ARM_INS_UQASX,
 ARM_INS_UQSAX,
 ARM_INS_UQSUB16,
 ARM_INS_UQSUB8,
 ARM_INS_USAD8,
 ARM_INS_USADA8,
 ARM_INS_USAT,
 ARM_INS_USAT16,
 ARM_INS_USAX,
 ARM_INS_USUB16,
 ARM_INS_USUB8,
 ARM_INS_UXTAB,
 ARM_INS_UXTAB16,
 ARM_INS_UXTAH,
 ARM_INS_UXTB,
 ARM_INS_UXTB16,
 ARM_INS_UXTH,
 ARM_INS_VABAL,
 ARM_INS_VABA,
 ARM_INS_VABDL,
 ARM_INS_VABD,
 ARM_INS_VABS,
 ARM_INS_VACGE,
 ARM_INS_VACGT,
 ARM_INS_VADD,
 ARM_INS_VADDHN,
 ARM_INS_VADDL,
 ARM_INS_VADDW,
 ARM_INS_VAND,
 ARM_INS_VBIC,
 ARM_INS_VBIF,
 ARM_INS_VBIT,
 ARM_INS_VBSL,
 ARM_INS_VCEQ,
 ARM_INS_VCGE,
 ARM_INS_VCGT,
 ARM_INS_VCLE,
 ARM_INS_VCLS,
 ARM_INS_VCLT,
 ARM_INS_VCLZ,
 ARM_INS_VCMP,
 ARM_INS_VCMPE,
 ARM_INS_VCNT,
 ARM_INS_VCVTA,
 ARM_INS_VCVTB,
 ARM_INS_VCVT,
 ARM_INS_VCVTM,
 ARM_INS_VCVTN,
 ARM_INS_VCVTP,
 ARM_INS_VCVTT,
 ARM_INS_VDIV,
 ARM_INS_VDUP,
 ARM_INS_VEOR,
 ARM_INS_VEXT,
 ARM_INS_VFMA,
 ARM_INS_VFMS,
 ARM_INS_VFNMA,
 ARM_INS_VFNMS,
 ARM_INS_VHADD,
 ARM_INS_VHSUB,
 ARM_INS_VLD1,
 ARM_INS_VLD2,
 ARM_INS_VLD3,
 ARM_INS_VLD4,
 ARM_INS_VLDMDB,
 ARM_INS_VLDMIA,
 ARM_INS_VLDR,
 ARM_INS_VMAXNM,
 ARM_INS_VMAX,
 ARM_INS_VMINNM,
 ARM_INS_VMIN,
 ARM_INS_VMLA,
 ARM_INS_VMLAL,
 ARM_INS_VMLS,
 ARM_INS_VMLSL,
 ARM_INS_VMOVL,
 ARM_INS_VMOVN,
 ARM_INS_VMSR,
 ARM_INS_VMUL,
 ARM_INS_VMULL,
 ARM_INS_VMVN,
 ARM_INS_VNEG,
 ARM_INS_VNMLA,
 ARM_INS_VNMLS,
 ARM_INS_VNMUL,
 ARM_INS_VORN,
 ARM_INS_VORR,
 ARM_INS_VPADAL,
 ARM_INS_VPADDL,
 ARM_INS_VPADD,
 ARM_INS_VPMAX,
 ARM_INS_VPMIN,
 ARM_INS_VQABS,
 ARM_INS_VQADD,
 ARM_INS_VQDMLAL,
 ARM_INS_VQDMLSL,
 ARM_INS_VQDMULH,
 ARM_INS_VQDMULL,
 ARM_INS_VQMOVUN,
 ARM_INS_VQMOVN,
 ARM_INS_VQNEG,
 ARM_INS_VQRDMULH,
 ARM_INS_VQRSHL,
 ARM_INS_VQRSHRN,
 ARM_INS_VQRSHRUN,
 ARM_INS_VQSHL,
 ARM_INS_VQSHLU,
 ARM_INS_VQSHRN,
 ARM_INS_VQSHRUN,
 ARM_INS_VQSUB,
 ARM_INS_VRADDHN,
 ARM_INS_VRECPE,
 ARM_INS_VRECPS,
 ARM_INS_VREV16,
 ARM_INS_VREV32,
 ARM_INS_VREV64,
 ARM_INS_VRHADD,
 ARM_INS_VRINTA,
 ARM_INS_VRINTM,
 ARM_INS_VRINTN,
 ARM_INS_VRINTP,
 ARM_INS_VRINTR,
 ARM_INS_VRINTX,
 ARM_INS_VRINTZ,
 ARM_INS_VRSHL,
 ARM_INS_VRSHRN,
 ARM_INS_VRSHR,
 ARM_INS_VRSQRTE,
 ARM_INS_VRSQRTS,
 ARM_INS_VRSRA,
 ARM_INS_VRSUBHN,
 ARM_INS_VSELEQ,
 ARM_INS_VSELGE,
 ARM_INS_VSELGT,
 ARM_INS_VSELVS,
 ARM_INS_VSHLL,
 ARM_INS_VSHL,
 ARM_INS_VSHRN,
 ARM_INS_VSHR,
 ARM_INS_VSLI,
 ARM_INS_VSQRT,
 ARM_INS_VSRA,
 ARM_INS_VSRI,
 ARM_INS_VST1,
 ARM_INS_VST2,
 ARM_INS_VST3,
 ARM_INS_VST4,
 ARM_INS_VSTMDB,
 ARM_INS_VSTMIA,
 ARM_INS_VSTR,
 ARM_INS_VSUB,
 ARM_INS_VSUBHN,
 ARM_INS_VSUBL,
 ARM_INS_VSUBW,
 ARM_INS_VSWP,
 ARM_INS_VTBL,
 ARM_INS_VTBX,
 ARM_INS_VCVTR,
 ARM_INS_VTRN,
 ARM_INS_VTST,
 ARM_INS_VUZP,
 ARM_INS_VZIP,
 ARM_INS_ADDW,
 ARM_INS_ASR,
 ARM_INS_DCPS1,
 ARM_INS_DCPS2,
 ARM_INS_DCPS3,
 ARM_INS_IT,
 ARM_INS_LSL,
 ARM_INS_LSR,
 ARM_INS_ORN,
 ARM_INS_ROR,
 ARM_INS_RRX,
 ARM_INS_SUBW,
 ARM_INS_TBB,
 ARM_INS_TBH,
 ARM_INS_CBNZ,
 ARM_INS_CBZ,
 ARM_INS_POP,
 ARM_INS_PUSH,


 ARM_INS_NOP,
 ARM_INS_YIELD,
 ARM_INS_WFE,
 ARM_INS_WFI,
 ARM_INS_SEV,
 ARM_INS_SEVL,
 ARM_INS_VPUSH,
 ARM_INS_VPOP,

 ARM_INS_ENDING,
} arm_insn;


typedef enum arm_insn_group {
 ARM_GRP_INVALID = 0,



 ARM_GRP_JUMP,
 ARM_GRP_CALL,
 ARM_GRP_INT = 4,
 ARM_GRP_PRIVILEGE = 6,
 ARM_GRP_BRANCH_RELATIVE,


 ARM_GRP_CRYPTO = 128,
 ARM_GRP_DATABARRIER,
 ARM_GRP_DIVIDE,
 ARM_GRP_FPARMV8,
 ARM_GRP_MULTPRO,
 ARM_GRP_NEON,
 ARM_GRP_T2EXTRACTPACK,
 ARM_GRP_THUMB2DSP,
 ARM_GRP_TRUSTZONE,
 ARM_GRP_V4T,
 ARM_GRP_V5T,
 ARM_GRP_V5TE,
 ARM_GRP_V6,
 ARM_GRP_V6T2,
 ARM_GRP_V7,
 ARM_GRP_V8,
 ARM_GRP_VFP2,
 ARM_GRP_VFP3,
 ARM_GRP_VFP4,
 ARM_GRP_ARM,
 ARM_GRP_MCLASS,
 ARM_GRP_NOTMCLASS,
 ARM_GRP_THUMB,
 ARM_GRP_THUMB1ONLY,
 ARM_GRP_THUMB2,
 ARM_GRP_PREV8,
 ARM_GRP_FPVMLX,
 ARM_GRP_MULOPS,
 ARM_GRP_CRC,
 ARM_GRP_DPVFP,
 ARM_GRP_V6M,
 ARM_GRP_VIRTUALIZATION,

 ARM_GRP_ENDING,
} arm_insn_group;
# 268 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/arm64.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/arm64.h" 3 4
typedef enum arm64_shifter {
 ARM64_SFT_INVALID = 0,
 ARM64_SFT_LSL = 1,
 ARM64_SFT_MSL = 2,
 ARM64_SFT_LSR = 3,
 ARM64_SFT_ASR = 4,
 ARM64_SFT_ROR = 5,
} arm64_shifter;


typedef enum arm64_extender {
 ARM64_EXT_INVALID = 0,
 ARM64_EXT_UXTB = 1,
 ARM64_EXT_UXTH = 2,
 ARM64_EXT_UXTW = 3,
 ARM64_EXT_UXTX = 4,
 ARM64_EXT_SXTB = 5,
 ARM64_EXT_SXTH = 6,
 ARM64_EXT_SXTW = 7,
 ARM64_EXT_SXTX = 8,
} arm64_extender;


typedef enum arm64_cc {
 ARM64_CC_INVALID = 0,
 ARM64_CC_EQ = 1,
 ARM64_CC_NE = 2,
 ARM64_CC_HS = 3,
 ARM64_CC_LO = 4,
 ARM64_CC_MI = 5,
 ARM64_CC_PL = 6,
 ARM64_CC_VS = 7,
 ARM64_CC_VC = 8,
 ARM64_CC_HI = 9,
 ARM64_CC_LS = 10,
 ARM64_CC_GE = 11,
 ARM64_CC_LT = 12,
 ARM64_CC_GT = 13,
 ARM64_CC_LE = 14,
 ARM64_CC_AL = 15,
 ARM64_CC_NV = 16,


} arm64_cc;


typedef enum arm64_sysreg {

 ARM64_SYSREG_INVALID = 0,
 ARM64_SYSREG_MDCCSR_EL0 = 0x9808,
 ARM64_SYSREG_DBGDTRRX_EL0 = 0x9828,
 ARM64_SYSREG_MDRAR_EL1 = 0x8080,
 ARM64_SYSREG_OSLSR_EL1 = 0x808c,
 ARM64_SYSREG_DBGAUTHSTATUS_EL1 = 0x83f6,
 ARM64_SYSREG_PMCEID0_EL0 = 0xdce6,
 ARM64_SYSREG_PMCEID1_EL0 = 0xdce7,
 ARM64_SYSREG_MIDR_EL1 = 0xc000,
 ARM64_SYSREG_CCSIDR_EL1 = 0xc800,
 ARM64_SYSREG_CLIDR_EL1 = 0xc801,
 ARM64_SYSREG_CTR_EL0 = 0xd801,
 ARM64_SYSREG_MPIDR_EL1 = 0xc005,
 ARM64_SYSREG_REVIDR_EL1 = 0xc006,
 ARM64_SYSREG_AIDR_EL1 = 0xc807,
 ARM64_SYSREG_DCZID_EL0 = 0xd807,
 ARM64_SYSREG_ID_PFR0_EL1 = 0xc008,
 ARM64_SYSREG_ID_PFR1_EL1 = 0xc009,
 ARM64_SYSREG_ID_DFR0_EL1 = 0xc00a,
 ARM64_SYSREG_ID_AFR0_EL1 = 0xc00b,
 ARM64_SYSREG_ID_MMFR0_EL1 = 0xc00c,
 ARM64_SYSREG_ID_MMFR1_EL1 = 0xc00d,
 ARM64_SYSREG_ID_MMFR2_EL1 = 0xc00e,
 ARM64_SYSREG_ID_MMFR3_EL1 = 0xc00f,
 ARM64_SYSREG_ID_ISAR0_EL1 = 0xc010,
 ARM64_SYSREG_ID_ISAR1_EL1 = 0xc011,
 ARM64_SYSREG_ID_ISAR2_EL1 = 0xc012,
 ARM64_SYSREG_ID_ISAR3_EL1 = 0xc013,
 ARM64_SYSREG_ID_ISAR4_EL1 = 0xc014,
 ARM64_SYSREG_ID_ISAR5_EL1 = 0xc015,
 ARM64_SYSREG_ID_A64PFR0_EL1 = 0xc020,
 ARM64_SYSREG_ID_A64PFR1_EL1 = 0xc021,
 ARM64_SYSREG_ID_A64DFR0_EL1 = 0xc028,
 ARM64_SYSREG_ID_A64DFR1_EL1 = 0xc029,
 ARM64_SYSREG_ID_A64AFR0_EL1 = 0xc02c,
 ARM64_SYSREG_ID_A64AFR1_EL1 = 0xc02d,
 ARM64_SYSREG_ID_A64ISAR0_EL1 = 0xc030,
 ARM64_SYSREG_ID_A64ISAR1_EL1 = 0xc031,
 ARM64_SYSREG_ID_A64MMFR0_EL1 = 0xc038,
 ARM64_SYSREG_ID_A64MMFR1_EL1 = 0xc039,
 ARM64_SYSREG_MVFR0_EL1 = 0xc018,
 ARM64_SYSREG_MVFR1_EL1 = 0xc019,
 ARM64_SYSREG_MVFR2_EL1 = 0xc01a,
 ARM64_SYSREG_RVBAR_EL1 = 0xc601,
 ARM64_SYSREG_RVBAR_EL2 = 0xe601,
 ARM64_SYSREG_RVBAR_EL3 = 0xf601,
 ARM64_SYSREG_ISR_EL1 = 0xc608,
 ARM64_SYSREG_CNTPCT_EL0 = 0xdf01,
 ARM64_SYSREG_CNTVCT_EL0 = 0xdf02,


 ARM64_SYSREG_TRCSTATR = 0x8818,
 ARM64_SYSREG_TRCIDR8 = 0x8806,
 ARM64_SYSREG_TRCIDR9 = 0x880e,
 ARM64_SYSREG_TRCIDR10 = 0x8816,
 ARM64_SYSREG_TRCIDR11 = 0x881e,
 ARM64_SYSREG_TRCIDR12 = 0x8826,
 ARM64_SYSREG_TRCIDR13 = 0x882e,
 ARM64_SYSREG_TRCIDR0 = 0x8847,
 ARM64_SYSREG_TRCIDR1 = 0x884f,
 ARM64_SYSREG_TRCIDR2 = 0x8857,
 ARM64_SYSREG_TRCIDR3 = 0x885f,
 ARM64_SYSREG_TRCIDR4 = 0x8867,
 ARM64_SYSREG_TRCIDR5 = 0x886f,
 ARM64_SYSREG_TRCIDR6 = 0x8877,
 ARM64_SYSREG_TRCIDR7 = 0x887f,
 ARM64_SYSREG_TRCOSLSR = 0x888c,
 ARM64_SYSREG_TRCPDSR = 0x88ac,
 ARM64_SYSREG_TRCDEVAFF0 = 0x8bd6,
 ARM64_SYSREG_TRCDEVAFF1 = 0x8bde,
 ARM64_SYSREG_TRCLSR = 0x8bee,
 ARM64_SYSREG_TRCAUTHSTATUS = 0x8bf6,
 ARM64_SYSREG_TRCDEVARCH = 0x8bfe,
 ARM64_SYSREG_TRCDEVID = 0x8b97,
 ARM64_SYSREG_TRCDEVTYPE = 0x8b9f,
 ARM64_SYSREG_TRCPIDR4 = 0x8ba7,
 ARM64_SYSREG_TRCPIDR5 = 0x8baf,
 ARM64_SYSREG_TRCPIDR6 = 0x8bb7,
 ARM64_SYSREG_TRCPIDR7 = 0x8bbf,
 ARM64_SYSREG_TRCPIDR0 = 0x8bc7,
 ARM64_SYSREG_TRCPIDR1 = 0x8bcf,
 ARM64_SYSREG_TRCPIDR2 = 0x8bd7,
 ARM64_SYSREG_TRCPIDR3 = 0x8bdf,
 ARM64_SYSREG_TRCCIDR0 = 0x8be7,
 ARM64_SYSREG_TRCCIDR1 = 0x8bef,
 ARM64_SYSREG_TRCCIDR2 = 0x8bf7,
 ARM64_SYSREG_TRCCIDR3 = 0x8bff,


 ARM64_SYSREG_ICC_IAR1_EL1 = 0xc660,
 ARM64_SYSREG_ICC_IAR0_EL1 = 0xc640,
 ARM64_SYSREG_ICC_HPPIR1_EL1 = 0xc662,
 ARM64_SYSREG_ICC_HPPIR0_EL1 = 0xc642,
 ARM64_SYSREG_ICC_RPR_EL1 = 0xc65b,
 ARM64_SYSREG_ICH_VTR_EL2 = 0xe659,
 ARM64_SYSREG_ICH_EISR_EL2 = 0xe65b,
 ARM64_SYSREG_ICH_ELSR_EL2 = 0xe65d,
} arm64_sysreg;

typedef enum arm64_msr_reg {

 ARM64_SYSREG_DBGDTRTX_EL0 = 0x9828,
 ARM64_SYSREG_OSLAR_EL1 = 0x8084,
 ARM64_SYSREG_PMSWINC_EL0 = 0xdce4,


 ARM64_SYSREG_TRCOSLAR = 0x8884,
 ARM64_SYSREG_TRCLAR = 0x8be6,


 ARM64_SYSREG_ICC_EOIR1_EL1 = 0xc661,
 ARM64_SYSREG_ICC_EOIR0_EL1 = 0xc641,
 ARM64_SYSREG_ICC_DIR_EL1 = 0xc659,
 ARM64_SYSREG_ICC_SGI1R_EL1 = 0xc65d,
 ARM64_SYSREG_ICC_ASGI1R_EL1 = 0xc65e,
 ARM64_SYSREG_ICC_SGI0R_EL1 = 0xc65f,
} arm64_msr_reg;


typedef enum arm64_pstate {
 ARM64_PSTATE_INVALID = 0,
 ARM64_PSTATE_SPSEL = 0x05,
 ARM64_PSTATE_DAIFSET = 0x1e,
 ARM64_PSTATE_DAIFCLR = 0x1f
} arm64_pstate;


typedef enum arm64_vas {
 ARM64_VAS_INVALID = 0,
 ARM64_VAS_8B,
 ARM64_VAS_16B,
 ARM64_VAS_4H,
 ARM64_VAS_8H,
 ARM64_VAS_2S,
 ARM64_VAS_4S,
 ARM64_VAS_1D,
 ARM64_VAS_2D,
 ARM64_VAS_1Q,
} arm64_vas;


typedef enum arm64_vess {
 ARM64_VESS_INVALID = 0,
 ARM64_VESS_B,
 ARM64_VESS_H,
 ARM64_VESS_S,
 ARM64_VESS_D,
} arm64_vess;


typedef enum arm64_barrier_op {
 ARM64_BARRIER_INVALID = 0,
 ARM64_BARRIER_OSHLD = 0x1,
 ARM64_BARRIER_OSHST = 0x2,
 ARM64_BARRIER_OSH = 0x3,
 ARM64_BARRIER_NSHLD = 0x5,
 ARM64_BARRIER_NSHST = 0x6,
 ARM64_BARRIER_NSH = 0x7,
 ARM64_BARRIER_ISHLD = 0x9,
 ARM64_BARRIER_ISHST = 0xa,
 ARM64_BARRIER_ISH = 0xb,
 ARM64_BARRIER_LD = 0xd,
 ARM64_BARRIER_ST = 0xe,
 ARM64_BARRIER_SY = 0xf
} arm64_barrier_op;


typedef enum arm64_op_type {
 ARM64_OP_INVALID = 0,
 ARM64_OP_REG,
 ARM64_OP_IMM,
 ARM64_OP_MEM,
 ARM64_OP_FP,
 ARM64_OP_CIMM = 64,
 ARM64_OP_REG_MRS,
 ARM64_OP_REG_MSR,
 ARM64_OP_PSTATE,
 ARM64_OP_SYS,
 ARM64_OP_PREFETCH,
 ARM64_OP_BARRIER,
} arm64_op_type;


typedef enum arm64_tlbi_op {
 ARM64_TLBI_INVALID = 0,
 ARM64_TLBI_VMALLE1IS,
 ARM64_TLBI_VAE1IS,
 ARM64_TLBI_ASIDE1IS,
 ARM64_TLBI_VAAE1IS,
 ARM64_TLBI_VALE1IS,
 ARM64_TLBI_VAALE1IS,
 ARM64_TLBI_ALLE2IS,
 ARM64_TLBI_VAE2IS,
 ARM64_TLBI_ALLE1IS,
 ARM64_TLBI_VALE2IS,
 ARM64_TLBI_VMALLS12E1IS,
 ARM64_TLBI_ALLE3IS,
 ARM64_TLBI_VAE3IS,
 ARM64_TLBI_VALE3IS,
 ARM64_TLBI_IPAS2E1IS,
 ARM64_TLBI_IPAS2LE1IS,
 ARM64_TLBI_IPAS2E1,
 ARM64_TLBI_IPAS2LE1,
 ARM64_TLBI_VMALLE1,
 ARM64_TLBI_VAE1,
 ARM64_TLBI_ASIDE1,
 ARM64_TLBI_VAAE1,
 ARM64_TLBI_VALE1,
 ARM64_TLBI_VAALE1,
 ARM64_TLBI_ALLE2,
 ARM64_TLBI_VAE2,
 ARM64_TLBI_ALLE1,
 ARM64_TLBI_VALE2,
 ARM64_TLBI_VMALLS12E1,
 ARM64_TLBI_ALLE3,
 ARM64_TLBI_VAE3,
 ARM64_TLBI_VALE3,
} arm64_tlbi_op;


typedef enum arm64_at_op {
 ARM64_AT_S1E1R,
 ARM64_AT_S1E1W,
 ARM64_AT_S1E0R,
 ARM64_AT_S1E0W,
 ARM64_AT_S1E2R,
 ARM64_AT_S1E2W,
 ARM64_AT_S12E1R,
 ARM64_AT_S12E1W,
 ARM64_AT_S12E0R,
 ARM64_AT_S12E0W,
 ARM64_AT_S1E3R,
 ARM64_AT_S1E3W,
} arm64_at_op;


typedef enum arm64_dc_op {
 ARM64_DC_INVALID = 0,
 ARM64_DC_ZVA,
 ARM64_DC_IVAC,
 ARM64_DC_ISW,
 ARM64_DC_CVAC,
 ARM64_DC_CSW,
 ARM64_DC_CVAU,
 ARM64_DC_CIVAC,
 ARM64_DC_CISW,
} arm64_dc_op;


typedef enum arm64_ic_op {
 ARM64_IC_INVALID = 0,
 ARM64_IC_IALLUIS,
 ARM64_IC_IALLU,
 ARM64_IC_IVAU,
} arm64_ic_op;


typedef enum arm64_prefetch_op {
 ARM64_PRFM_INVALID = 0,
 ARM64_PRFM_PLDL1KEEP = 0x00 + 1,
 ARM64_PRFM_PLDL1STRM = 0x01 + 1,
 ARM64_PRFM_PLDL2KEEP = 0x02 + 1,
 ARM64_PRFM_PLDL2STRM = 0x03 + 1,
 ARM64_PRFM_PLDL3KEEP = 0x04 + 1,
 ARM64_PRFM_PLDL3STRM = 0x05 + 1,
 ARM64_PRFM_PLIL1KEEP = 0x08 + 1,
 ARM64_PRFM_PLIL1STRM = 0x09 + 1,
 ARM64_PRFM_PLIL2KEEP = 0x0a + 1,
 ARM64_PRFM_PLIL2STRM = 0x0b + 1,
 ARM64_PRFM_PLIL3KEEP = 0x0c + 1,
 ARM64_PRFM_PLIL3STRM = 0x0d + 1,
 ARM64_PRFM_PSTL1KEEP = 0x10 + 1,
 ARM64_PRFM_PSTL1STRM = 0x11 + 1,
 ARM64_PRFM_PSTL2KEEP = 0x12 + 1,
 ARM64_PRFM_PSTL2STRM = 0x13 + 1,
 ARM64_PRFM_PSTL3KEEP = 0x14 + 1,
 ARM64_PRFM_PSTL3STRM = 0x15 + 1,
} arm64_prefetch_op;



typedef enum arm64_reg {
 ARM64_REG_INVALID = 0,

 ARM64_REG_X29,
 ARM64_REG_X30,
 ARM64_REG_NZCV,
 ARM64_REG_SP,
 ARM64_REG_WSP,
 ARM64_REG_WZR,
 ARM64_REG_XZR,
 ARM64_REG_B0,
 ARM64_REG_B1,
 ARM64_REG_B2,
 ARM64_REG_B3,
 ARM64_REG_B4,
 ARM64_REG_B5,
 ARM64_REG_B6,
 ARM64_REG_B7,
 ARM64_REG_B8,
 ARM64_REG_B9,
 ARM64_REG_B10,
 ARM64_REG_B11,
 ARM64_REG_B12,
 ARM64_REG_B13,
 ARM64_REG_B14,
 ARM64_REG_B15,
 ARM64_REG_B16,
 ARM64_REG_B17,
 ARM64_REG_B18,
 ARM64_REG_B19,
 ARM64_REG_B20,
 ARM64_REG_B21,
 ARM64_REG_B22,
 ARM64_REG_B23,
 ARM64_REG_B24,
 ARM64_REG_B25,
 ARM64_REG_B26,
 ARM64_REG_B27,
 ARM64_REG_B28,
 ARM64_REG_B29,
 ARM64_REG_B30,
 ARM64_REG_B31,
 ARM64_REG_D0,
 ARM64_REG_D1,
 ARM64_REG_D2,
 ARM64_REG_D3,
 ARM64_REG_D4,
 ARM64_REG_D5,
 ARM64_REG_D6,
 ARM64_REG_D7,
 ARM64_REG_D8,
 ARM64_REG_D9,
 ARM64_REG_D10,
 ARM64_REG_D11,
 ARM64_REG_D12,
 ARM64_REG_D13,
 ARM64_REG_D14,
 ARM64_REG_D15,
 ARM64_REG_D16,
 ARM64_REG_D17,
 ARM64_REG_D18,
 ARM64_REG_D19,
 ARM64_REG_D20,
 ARM64_REG_D21,
 ARM64_REG_D22,
 ARM64_REG_D23,
 ARM64_REG_D24,
 ARM64_REG_D25,
 ARM64_REG_D26,
 ARM64_REG_D27,
 ARM64_REG_D28,
 ARM64_REG_D29,
 ARM64_REG_D30,
 ARM64_REG_D31,
 ARM64_REG_H0,
 ARM64_REG_H1,
 ARM64_REG_H2,
 ARM64_REG_H3,
 ARM64_REG_H4,
 ARM64_REG_H5,
 ARM64_REG_H6,
 ARM64_REG_H7,
 ARM64_REG_H8,
 ARM64_REG_H9,
 ARM64_REG_H10,
 ARM64_REG_H11,
 ARM64_REG_H12,
 ARM64_REG_H13,
 ARM64_REG_H14,
 ARM64_REG_H15,
 ARM64_REG_H16,
 ARM64_REG_H17,
 ARM64_REG_H18,
 ARM64_REG_H19,
 ARM64_REG_H20,
 ARM64_REG_H21,
 ARM64_REG_H22,
 ARM64_REG_H23,
 ARM64_REG_H24,
 ARM64_REG_H25,
 ARM64_REG_H26,
 ARM64_REG_H27,
 ARM64_REG_H28,
 ARM64_REG_H29,
 ARM64_REG_H30,
 ARM64_REG_H31,
 ARM64_REG_Q0,
 ARM64_REG_Q1,
 ARM64_REG_Q2,
 ARM64_REG_Q3,
 ARM64_REG_Q4,
 ARM64_REG_Q5,
 ARM64_REG_Q6,
 ARM64_REG_Q7,
 ARM64_REG_Q8,
 ARM64_REG_Q9,
 ARM64_REG_Q10,
 ARM64_REG_Q11,
 ARM64_REG_Q12,
 ARM64_REG_Q13,
 ARM64_REG_Q14,
 ARM64_REG_Q15,
 ARM64_REG_Q16,
 ARM64_REG_Q17,
 ARM64_REG_Q18,
 ARM64_REG_Q19,
 ARM64_REG_Q20,
 ARM64_REG_Q21,
 ARM64_REG_Q22,
 ARM64_REG_Q23,
 ARM64_REG_Q24,
 ARM64_REG_Q25,
 ARM64_REG_Q26,
 ARM64_REG_Q27,
 ARM64_REG_Q28,
 ARM64_REG_Q29,
 ARM64_REG_Q30,
 ARM64_REG_Q31,
 ARM64_REG_S0,
 ARM64_REG_S1,
 ARM64_REG_S2,
 ARM64_REG_S3,
 ARM64_REG_S4,
 ARM64_REG_S5,
 ARM64_REG_S6,
 ARM64_REG_S7,
 ARM64_REG_S8,
 ARM64_REG_S9,
 ARM64_REG_S10,
 ARM64_REG_S11,
 ARM64_REG_S12,
 ARM64_REG_S13,
 ARM64_REG_S14,
 ARM64_REG_S15,
 ARM64_REG_S16,
 ARM64_REG_S17,
 ARM64_REG_S18,
 ARM64_REG_S19,
 ARM64_REG_S20,
 ARM64_REG_S21,
 ARM64_REG_S22,
 ARM64_REG_S23,
 ARM64_REG_S24,
 ARM64_REG_S25,
 ARM64_REG_S26,
 ARM64_REG_S27,
 ARM64_REG_S28,
 ARM64_REG_S29,
 ARM64_REG_S30,
 ARM64_REG_S31,
 ARM64_REG_W0,
 ARM64_REG_W1,
 ARM64_REG_W2,
 ARM64_REG_W3,
 ARM64_REG_W4,
 ARM64_REG_W5,
 ARM64_REG_W6,
 ARM64_REG_W7,
 ARM64_REG_W8,
 ARM64_REG_W9,
 ARM64_REG_W10,
 ARM64_REG_W11,
 ARM64_REG_W12,
 ARM64_REG_W13,
 ARM64_REG_W14,
 ARM64_REG_W15,
 ARM64_REG_W16,
 ARM64_REG_W17,
 ARM64_REG_W18,
 ARM64_REG_W19,
 ARM64_REG_W20,
 ARM64_REG_W21,
 ARM64_REG_W22,
 ARM64_REG_W23,
 ARM64_REG_W24,
 ARM64_REG_W25,
 ARM64_REG_W26,
 ARM64_REG_W27,
 ARM64_REG_W28,
 ARM64_REG_W29,
 ARM64_REG_W30,
 ARM64_REG_X0,
 ARM64_REG_X1,
 ARM64_REG_X2,
 ARM64_REG_X3,
 ARM64_REG_X4,
 ARM64_REG_X5,
 ARM64_REG_X6,
 ARM64_REG_X7,
 ARM64_REG_X8,
 ARM64_REG_X9,
 ARM64_REG_X10,
 ARM64_REG_X11,
 ARM64_REG_X12,
 ARM64_REG_X13,
 ARM64_REG_X14,
 ARM64_REG_X15,
 ARM64_REG_X16,
 ARM64_REG_X17,
 ARM64_REG_X18,
 ARM64_REG_X19,
 ARM64_REG_X20,
 ARM64_REG_X21,
 ARM64_REG_X22,
 ARM64_REG_X23,
 ARM64_REG_X24,
 ARM64_REG_X25,
 ARM64_REG_X26,
 ARM64_REG_X27,
 ARM64_REG_X28,

 ARM64_REG_V0,
 ARM64_REG_V1,
 ARM64_REG_V2,
 ARM64_REG_V3,
 ARM64_REG_V4,
 ARM64_REG_V5,
 ARM64_REG_V6,
 ARM64_REG_V7,
 ARM64_REG_V8,
 ARM64_REG_V9,
 ARM64_REG_V10,
 ARM64_REG_V11,
 ARM64_REG_V12,
 ARM64_REG_V13,
 ARM64_REG_V14,
 ARM64_REG_V15,
 ARM64_REG_V16,
 ARM64_REG_V17,
 ARM64_REG_V18,
 ARM64_REG_V19,
 ARM64_REG_V20,
 ARM64_REG_V21,
 ARM64_REG_V22,
 ARM64_REG_V23,
 ARM64_REG_V24,
 ARM64_REG_V25,
 ARM64_REG_V26,
 ARM64_REG_V27,
 ARM64_REG_V28,
 ARM64_REG_V29,
 ARM64_REG_V30,
 ARM64_REG_V31,

 ARM64_REG_ENDING,



 ARM64_REG_IP0 = ARM64_REG_X16,
 ARM64_REG_IP1 = ARM64_REG_X17,
 ARM64_REG_FP = ARM64_REG_X29,
 ARM64_REG_LR = ARM64_REG_X30,
} arm64_reg;



typedef struct arm64_op_mem {
 arm64_reg base;
 arm64_reg index;
 int32_t disp;
} arm64_op_mem;


typedef struct cs_arm64_op {
 int vector_index;
 arm64_vas vas;
 arm64_vess vess;
 struct {
  arm64_shifter type;
  unsigned int value;
 } shift;
 arm64_extender ext;
 arm64_op_type type;
 union {
  arm64_reg reg;
  int64_t imm;
  double fp;
  arm64_op_mem mem;
  arm64_pstate pstate;
  unsigned int sys;
  arm64_prefetch_op prefetch;
  arm64_barrier_op barrier;
 };




 uint8_t access;
} cs_arm64_op;


typedef struct cs_arm64 {
 arm64_cc cc;
 _Bool update_flags;
 _Bool writeback;



 uint8_t op_count;

 cs_arm64_op operands[8];
} cs_arm64;


typedef enum arm64_insn {
 ARM64_INS_INVALID = 0,

 ARM64_INS_ABS,
 ARM64_INS_ADC,
 ARM64_INS_ADDHN,
 ARM64_INS_ADDHN2,
 ARM64_INS_ADDP,
 ARM64_INS_ADD,
 ARM64_INS_ADDV,
 ARM64_INS_ADR,
 ARM64_INS_ADRP,
 ARM64_INS_AESD,
 ARM64_INS_AESE,
 ARM64_INS_AESIMC,
 ARM64_INS_AESMC,
 ARM64_INS_AND,
 ARM64_INS_ASR,
 ARM64_INS_B,
 ARM64_INS_BFM,
 ARM64_INS_BIC,
 ARM64_INS_BIF,
 ARM64_INS_BIT,
 ARM64_INS_BL,
 ARM64_INS_BLR,
 ARM64_INS_BR,
 ARM64_INS_BRK,
 ARM64_INS_BSL,
 ARM64_INS_CBNZ,
 ARM64_INS_CBZ,
 ARM64_INS_CCMN,
 ARM64_INS_CCMP,
 ARM64_INS_CLREX,
 ARM64_INS_CLS,
 ARM64_INS_CLZ,
 ARM64_INS_CMEQ,
 ARM64_INS_CMGE,
 ARM64_INS_CMGT,
 ARM64_INS_CMHI,
 ARM64_INS_CMHS,
 ARM64_INS_CMLE,
 ARM64_INS_CMLT,
 ARM64_INS_CMTST,
 ARM64_INS_CNT,
 ARM64_INS_MOV,
 ARM64_INS_CRC32B,
 ARM64_INS_CRC32CB,
 ARM64_INS_CRC32CH,
 ARM64_INS_CRC32CW,
 ARM64_INS_CRC32CX,
 ARM64_INS_CRC32H,
 ARM64_INS_CRC32W,
 ARM64_INS_CRC32X,
 ARM64_INS_CSEL,
 ARM64_INS_CSINC,
 ARM64_INS_CSINV,
 ARM64_INS_CSNEG,
 ARM64_INS_DCPS1,
 ARM64_INS_DCPS2,
 ARM64_INS_DCPS3,
 ARM64_INS_DMB,
 ARM64_INS_DRPS,
 ARM64_INS_DSB,
 ARM64_INS_DUP,
 ARM64_INS_EON,
 ARM64_INS_EOR,
 ARM64_INS_ERET,
 ARM64_INS_EXTR,
 ARM64_INS_EXT,
 ARM64_INS_FABD,
 ARM64_INS_FABS,
 ARM64_INS_FACGE,
 ARM64_INS_FACGT,
 ARM64_INS_FADD,
 ARM64_INS_FADDP,
 ARM64_INS_FCCMP,
 ARM64_INS_FCCMPE,
 ARM64_INS_FCMEQ,
 ARM64_INS_FCMGE,
 ARM64_INS_FCMGT,
 ARM64_INS_FCMLE,
 ARM64_INS_FCMLT,
 ARM64_INS_FCMP,
 ARM64_INS_FCMPE,
 ARM64_INS_FCSEL,
 ARM64_INS_FCVTAS,
 ARM64_INS_FCVTAU,
 ARM64_INS_FCVT,
 ARM64_INS_FCVTL,
 ARM64_INS_FCVTL2,
 ARM64_INS_FCVTMS,
 ARM64_INS_FCVTMU,
 ARM64_INS_FCVTNS,
 ARM64_INS_FCVTNU,
 ARM64_INS_FCVTN,
 ARM64_INS_FCVTN2,
 ARM64_INS_FCVTPS,
 ARM64_INS_FCVTPU,
 ARM64_INS_FCVTXN,
 ARM64_INS_FCVTXN2,
 ARM64_INS_FCVTZS,
 ARM64_INS_FCVTZU,
 ARM64_INS_FDIV,
 ARM64_INS_FMADD,
 ARM64_INS_FMAX,
 ARM64_INS_FMAXNM,
 ARM64_INS_FMAXNMP,
 ARM64_INS_FMAXNMV,
 ARM64_INS_FMAXP,
 ARM64_INS_FMAXV,
 ARM64_INS_FMIN,
 ARM64_INS_FMINNM,
 ARM64_INS_FMINNMP,
 ARM64_INS_FMINNMV,
 ARM64_INS_FMINP,
 ARM64_INS_FMINV,
 ARM64_INS_FMLA,
 ARM64_INS_FMLS,
 ARM64_INS_FMOV,
 ARM64_INS_FMSUB,
 ARM64_INS_FMUL,
 ARM64_INS_FMULX,
 ARM64_INS_FNEG,
 ARM64_INS_FNMADD,
 ARM64_INS_FNMSUB,
 ARM64_INS_FNMUL,
 ARM64_INS_FRECPE,
 ARM64_INS_FRECPS,
 ARM64_INS_FRECPX,
 ARM64_INS_FRINTA,
 ARM64_INS_FRINTI,
 ARM64_INS_FRINTM,
 ARM64_INS_FRINTN,
 ARM64_INS_FRINTP,
 ARM64_INS_FRINTX,
 ARM64_INS_FRINTZ,
 ARM64_INS_FRSQRTE,
 ARM64_INS_FRSQRTS,
 ARM64_INS_FSQRT,
 ARM64_INS_FSUB,
 ARM64_INS_HINT,
 ARM64_INS_HLT,
 ARM64_INS_HVC,
 ARM64_INS_INS,

 ARM64_INS_ISB,
 ARM64_INS_LD1,
 ARM64_INS_LD1R,
 ARM64_INS_LD2R,
 ARM64_INS_LD2,
 ARM64_INS_LD3R,
 ARM64_INS_LD3,
 ARM64_INS_LD4,
 ARM64_INS_LD4R,

 ARM64_INS_LDARB,
 ARM64_INS_LDARH,
 ARM64_INS_LDAR,
 ARM64_INS_LDAXP,
 ARM64_INS_LDAXRB,
 ARM64_INS_LDAXRH,
 ARM64_INS_LDAXR,
 ARM64_INS_LDNP,
 ARM64_INS_LDP,
 ARM64_INS_LDPSW,
 ARM64_INS_LDRB,
 ARM64_INS_LDR,
 ARM64_INS_LDRH,
 ARM64_INS_LDRSB,
 ARM64_INS_LDRSH,
 ARM64_INS_LDRSW,
 ARM64_INS_LDTRB,
 ARM64_INS_LDTRH,
 ARM64_INS_LDTRSB,

 ARM64_INS_LDTRSH,
 ARM64_INS_LDTRSW,
 ARM64_INS_LDTR,
 ARM64_INS_LDURB,
 ARM64_INS_LDUR,
 ARM64_INS_LDURH,
 ARM64_INS_LDURSB,
 ARM64_INS_LDURSH,
 ARM64_INS_LDURSW,
 ARM64_INS_LDXP,
 ARM64_INS_LDXRB,
 ARM64_INS_LDXRH,
 ARM64_INS_LDXR,
 ARM64_INS_LSL,
 ARM64_INS_LSR,
 ARM64_INS_MADD,
 ARM64_INS_MLA,
 ARM64_INS_MLS,
 ARM64_INS_MOVI,
 ARM64_INS_MOVK,
 ARM64_INS_MOVN,
 ARM64_INS_MOVZ,
 ARM64_INS_MRS,
 ARM64_INS_MSR,
 ARM64_INS_MSUB,
 ARM64_INS_MUL,
 ARM64_INS_MVNI,
 ARM64_INS_NEG,
 ARM64_INS_NOT,
 ARM64_INS_ORN,
 ARM64_INS_ORR,
 ARM64_INS_PMULL2,
 ARM64_INS_PMULL,
 ARM64_INS_PMUL,
 ARM64_INS_PRFM,
 ARM64_INS_PRFUM,
 ARM64_INS_RADDHN,
 ARM64_INS_RADDHN2,
 ARM64_INS_RBIT,
 ARM64_INS_RET,
 ARM64_INS_REV16,
 ARM64_INS_REV32,
 ARM64_INS_REV64,
 ARM64_INS_REV,
 ARM64_INS_ROR,
 ARM64_INS_RSHRN2,
 ARM64_INS_RSHRN,
 ARM64_INS_RSUBHN,
 ARM64_INS_RSUBHN2,
 ARM64_INS_SABAL2,
 ARM64_INS_SABAL,

 ARM64_INS_SABA,
 ARM64_INS_SABDL2,
 ARM64_INS_SABDL,
 ARM64_INS_SABD,
 ARM64_INS_SADALP,
 ARM64_INS_SADDLP,
 ARM64_INS_SADDLV,
 ARM64_INS_SADDL2,
 ARM64_INS_SADDL,
 ARM64_INS_SADDW2,
 ARM64_INS_SADDW,
 ARM64_INS_SBC,
 ARM64_INS_SBFM,
 ARM64_INS_SCVTF,
 ARM64_INS_SDIV,
 ARM64_INS_SHA1C,
 ARM64_INS_SHA1H,
 ARM64_INS_SHA1M,
 ARM64_INS_SHA1P,
 ARM64_INS_SHA1SU0,
 ARM64_INS_SHA1SU1,
 ARM64_INS_SHA256H2,
 ARM64_INS_SHA256H,
 ARM64_INS_SHA256SU0,
 ARM64_INS_SHA256SU1,
 ARM64_INS_SHADD,
 ARM64_INS_SHLL2,
 ARM64_INS_SHLL,
 ARM64_INS_SHL,
 ARM64_INS_SHRN2,
 ARM64_INS_SHRN,
 ARM64_INS_SHSUB,
 ARM64_INS_SLI,
 ARM64_INS_SMADDL,
 ARM64_INS_SMAXP,
 ARM64_INS_SMAXV,
 ARM64_INS_SMAX,
 ARM64_INS_SMC,
 ARM64_INS_SMINP,
 ARM64_INS_SMINV,
 ARM64_INS_SMIN,
 ARM64_INS_SMLAL2,
 ARM64_INS_SMLAL,
 ARM64_INS_SMLSL2,
 ARM64_INS_SMLSL,
 ARM64_INS_SMOV,
 ARM64_INS_SMSUBL,
 ARM64_INS_SMULH,
 ARM64_INS_SMULL2,
 ARM64_INS_SMULL,
 ARM64_INS_SQABS,
 ARM64_INS_SQADD,
 ARM64_INS_SQDMLAL,
 ARM64_INS_SQDMLAL2,
 ARM64_INS_SQDMLSL,
 ARM64_INS_SQDMLSL2,
 ARM64_INS_SQDMULH,
 ARM64_INS_SQDMULL,
 ARM64_INS_SQDMULL2,
 ARM64_INS_SQNEG,
 ARM64_INS_SQRDMULH,
 ARM64_INS_SQRSHL,
 ARM64_INS_SQRSHRN,
 ARM64_INS_SQRSHRN2,
 ARM64_INS_SQRSHRUN,
 ARM64_INS_SQRSHRUN2,
 ARM64_INS_SQSHLU,
 ARM64_INS_SQSHL,
 ARM64_INS_SQSHRN,
 ARM64_INS_SQSHRN2,
 ARM64_INS_SQSHRUN,
 ARM64_INS_SQSHRUN2,
 ARM64_INS_SQSUB,
 ARM64_INS_SQXTN2,
 ARM64_INS_SQXTN,
 ARM64_INS_SQXTUN2,
 ARM64_INS_SQXTUN,
 ARM64_INS_SRHADD,
 ARM64_INS_SRI,
 ARM64_INS_SRSHL,
 ARM64_INS_SRSHR,
 ARM64_INS_SRSRA,
 ARM64_INS_SSHLL2,
 ARM64_INS_SSHLL,
 ARM64_INS_SSHL,
 ARM64_INS_SSHR,
 ARM64_INS_SSRA,
 ARM64_INS_SSUBL2,
 ARM64_INS_SSUBL,
 ARM64_INS_SSUBW2,
 ARM64_INS_SSUBW,
 ARM64_INS_ST1,
 ARM64_INS_ST2,
 ARM64_INS_ST3,
 ARM64_INS_ST4,
 ARM64_INS_STLRB,
 ARM64_INS_STLRH,
 ARM64_INS_STLR,
 ARM64_INS_STLXP,
 ARM64_INS_STLXRB,
 ARM64_INS_STLXRH,
 ARM64_INS_STLXR,
 ARM64_INS_STNP,
 ARM64_INS_STP,
 ARM64_INS_STRB,
 ARM64_INS_STR,
 ARM64_INS_STRH,
 ARM64_INS_STTRB,
 ARM64_INS_STTRH,
 ARM64_INS_STTR,
 ARM64_INS_STURB,
 ARM64_INS_STUR,
 ARM64_INS_STURH,
 ARM64_INS_STXP,
 ARM64_INS_STXRB,
 ARM64_INS_STXRH,
 ARM64_INS_STXR,
 ARM64_INS_SUBHN,
 ARM64_INS_SUBHN2,
 ARM64_INS_SUB,
 ARM64_INS_SUQADD,
 ARM64_INS_SVC,
 ARM64_INS_SYSL,
 ARM64_INS_SYS,
 ARM64_INS_TBL,
 ARM64_INS_TBNZ,
 ARM64_INS_TBX,
 ARM64_INS_TBZ,
 ARM64_INS_TRN1,
 ARM64_INS_TRN2,
 ARM64_INS_UABAL2,
 ARM64_INS_UABAL,
 ARM64_INS_UABA,
 ARM64_INS_UABDL2,
 ARM64_INS_UABDL,
 ARM64_INS_UABD,
 ARM64_INS_UADALP,
 ARM64_INS_UADDLP,
 ARM64_INS_UADDLV,
 ARM64_INS_UADDL2,
 ARM64_INS_UADDL,
 ARM64_INS_UADDW2,
 ARM64_INS_UADDW,
 ARM64_INS_UBFM,
 ARM64_INS_UCVTF,
 ARM64_INS_UDIV,
 ARM64_INS_UHADD,
 ARM64_INS_UHSUB,
 ARM64_INS_UMADDL,
 ARM64_INS_UMAXP,
 ARM64_INS_UMAXV,
 ARM64_INS_UMAX,
 ARM64_INS_UMINP,
 ARM64_INS_UMINV,
 ARM64_INS_UMIN,
 ARM64_INS_UMLAL2,
 ARM64_INS_UMLAL,
 ARM64_INS_UMLSL2,
 ARM64_INS_UMLSL,
 ARM64_INS_UMOV,
 ARM64_INS_UMSUBL,
 ARM64_INS_UMULH,
 ARM64_INS_UMULL2,
 ARM64_INS_UMULL,
 ARM64_INS_UQADD,
 ARM64_INS_UQRSHL,
 ARM64_INS_UQRSHRN,
 ARM64_INS_UQRSHRN2,
 ARM64_INS_UQSHL,
 ARM64_INS_UQSHRN,
 ARM64_INS_UQSHRN2,
 ARM64_INS_UQSUB,
 ARM64_INS_UQXTN2,
 ARM64_INS_UQXTN,
 ARM64_INS_URECPE,
 ARM64_INS_URHADD,
 ARM64_INS_URSHL,
 ARM64_INS_URSHR,
 ARM64_INS_URSQRTE,
 ARM64_INS_URSRA,
 ARM64_INS_USHLL2,
 ARM64_INS_USHLL,
 ARM64_INS_USHL,
 ARM64_INS_USHR,
 ARM64_INS_USQADD,
 ARM64_INS_USRA,
 ARM64_INS_USUBL2,
 ARM64_INS_USUBL,
 ARM64_INS_USUBW2,
 ARM64_INS_USUBW,
 ARM64_INS_UZP1,
 ARM64_INS_UZP2,
 ARM64_INS_XTN2,
 ARM64_INS_XTN,
 ARM64_INS_ZIP1,
 ARM64_INS_ZIP2,


 ARM64_INS_MNEG,
 ARM64_INS_UMNEGL,
 ARM64_INS_SMNEGL,
 ARM64_INS_NOP,
 ARM64_INS_YIELD,
 ARM64_INS_WFE,
 ARM64_INS_WFI,
 ARM64_INS_SEV,
 ARM64_INS_SEVL,
 ARM64_INS_NGC,
 ARM64_INS_SBFIZ,
 ARM64_INS_UBFIZ,
 ARM64_INS_SBFX,
 ARM64_INS_UBFX,
 ARM64_INS_BFI,
 ARM64_INS_BFXIL,
 ARM64_INS_CMN,
 ARM64_INS_MVN,
 ARM64_INS_TST,
 ARM64_INS_CSET,
 ARM64_INS_CINC,
 ARM64_INS_CSETM,
 ARM64_INS_CINV,
 ARM64_INS_CNEG,
 ARM64_INS_SXTB,
 ARM64_INS_SXTH,
 ARM64_INS_SXTW,
 ARM64_INS_CMP,
 ARM64_INS_UXTB,
 ARM64_INS_UXTH,
 ARM64_INS_UXTW,
 ARM64_INS_IC,
 ARM64_INS_DC,
 ARM64_INS_AT,
 ARM64_INS_TLBI,

 ARM64_INS_NEGS,
 ARM64_INS_NGCS,

 ARM64_INS_ENDING,
} arm64_insn;


typedef enum arm64_insn_group {
 ARM64_GRP_INVALID = 0,



 ARM64_GRP_JUMP,
 ARM64_GRP_CALL,
 ARM64_GRP_RET,
 ARM64_GRP_INT,
 ARM64_GRP_PRIVILEGE = 6,
 ARM64_GRP_BRANCH_RELATIVE,


 ARM64_GRP_CRYPTO = 128,
 ARM64_GRP_FPARMV8,
 ARM64_GRP_NEON,
 ARM64_GRP_CRC,

 ARM64_GRP_ENDING,
} arm64_insn_group;
# 269 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/m68k.h" 1 3 4
# 20 "/usr/local/Cellar/capstone/4.0.2/include/capstone/m68k.h" 3 4
typedef enum m68k_reg {
 M68K_REG_INVALID = 0,

 M68K_REG_D0,
 M68K_REG_D1,
 M68K_REG_D2,
 M68K_REG_D3,
 M68K_REG_D4,
 M68K_REG_D5,
 M68K_REG_D6,
 M68K_REG_D7,

 M68K_REG_A0,
 M68K_REG_A1,
 M68K_REG_A2,
 M68K_REG_A3,
 M68K_REG_A4,
 M68K_REG_A5,
 M68K_REG_A6,
 M68K_REG_A7,

 M68K_REG_FP0,
 M68K_REG_FP1,
 M68K_REG_FP2,
 M68K_REG_FP3,
 M68K_REG_FP4,
 M68K_REG_FP5,
 M68K_REG_FP6,
 M68K_REG_FP7,

 M68K_REG_PC,

 M68K_REG_SR,
 M68K_REG_CCR,
 M68K_REG_SFC,
 M68K_REG_DFC,
 M68K_REG_USP,
 M68K_REG_VBR,
 M68K_REG_CACR,
 M68K_REG_CAAR,
 M68K_REG_MSP,
 M68K_REG_ISP,
 M68K_REG_TC,
 M68K_REG_ITT0,
 M68K_REG_ITT1,
 M68K_REG_DTT0,
 M68K_REG_DTT1,
 M68K_REG_MMUSR,
 M68K_REG_URP,
 M68K_REG_SRP,

 M68K_REG_FPCR,
 M68K_REG_FPSR,
 M68K_REG_FPIAR,

 M68K_REG_ENDING,
} m68k_reg;


typedef enum m68k_address_mode {
 M68K_AM_NONE = 0,

 M68K_AM_REG_DIRECT_DATA,
 M68K_AM_REG_DIRECT_ADDR,

 M68K_AM_REGI_ADDR,
 M68K_AM_REGI_ADDR_POST_INC,
 M68K_AM_REGI_ADDR_PRE_DEC,
 M68K_AM_REGI_ADDR_DISP,

 M68K_AM_AREGI_INDEX_8_BIT_DISP,
 M68K_AM_AREGI_INDEX_BASE_DISP,

 M68K_AM_MEMI_POST_INDEX,
 M68K_AM_MEMI_PRE_INDEX,

 M68K_AM_PCI_DISP,

 M68K_AM_PCI_INDEX_8_BIT_DISP,
 M68K_AM_PCI_INDEX_BASE_DISP,

 M68K_AM_PC_MEMI_POST_INDEX,
 M68K_AM_PC_MEMI_PRE_INDEX,

 M68K_AM_ABSOLUTE_DATA_SHORT,
 M68K_AM_ABSOLUTE_DATA_LONG,
 M68K_AM_IMMEDIATE,

 M68K_AM_BRANCH_DISPLACEMENT,
} m68k_address_mode;


typedef enum m68k_op_type {
 M68K_OP_INVALID = 0,
 M68K_OP_REG,
 M68K_OP_IMM,
 M68K_OP_MEM,
 M68K_OP_FP_SINGLE,
 M68K_OP_FP_DOUBLE,
 M68K_OP_REG_BITS,
 M68K_OP_REG_PAIR,
 M68K_OP_BR_DISP,
} m68k_op_type;



typedef struct m68k_op_mem {
 m68k_reg base_reg;
 m68k_reg index_reg;
 m68k_reg in_base_reg;
 uint32_t in_disp;
 uint32_t out_disp;
 int16_t disp;
 uint8_t scale;
 uint8_t bitfield;
 uint8_t width;
 uint8_t offset;
 uint8_t index_size;
} m68k_op_mem;


typedef enum m68k_op_br_disp_size {
 M68K_OP_BR_DISP_SIZE_INVALID = 0,
 M68K_OP_BR_DISP_SIZE_BYTE = 1,
 M68K_OP_BR_DISP_SIZE_WORD = 2,
 M68K_OP_BR_DISP_SIZE_LONG = 4,
} m68k_op_br_disp_size;

typedef struct m68k_op_br_disp {
 int32_t disp;
 uint8_t disp_size;
} m68k_op_br_disp;


typedef struct cs_m68k_op_reg_pair {
 m68k_reg reg_0;
 m68k_reg reg_1;
} cs_m68k_op_reg_pair;


typedef struct cs_m68k_op {
 union {
  uint64_t imm;
  double dimm;
  float simm;
  m68k_reg reg;
  cs_m68k_op_reg_pair reg_pair;
 };

 m68k_op_mem mem;
 m68k_op_br_disp br_disp;
 uint32_t register_bits;
 m68k_op_type type;
 m68k_address_mode address_mode;
} cs_m68k_op;


typedef enum m68k_cpu_size {
 M68K_CPU_SIZE_NONE = 0,
 M68K_CPU_SIZE_BYTE = 1,
 M68K_CPU_SIZE_WORD = 2,
 M68K_CPU_SIZE_LONG = 4,
} m68k_cpu_size;


typedef enum m68k_fpu_size {
 M68K_FPU_SIZE_NONE = 0,
 M68K_FPU_SIZE_SINGLE = 4,
 M68K_FPU_SIZE_DOUBLE = 8,
 M68K_FPU_SIZE_EXTENDED = 12,
} m68k_fpu_size;


typedef enum m68k_size_type {
 M68K_SIZE_TYPE_INVALID = 0,

 M68K_SIZE_TYPE_CPU,
 M68K_SIZE_TYPE_FPU,
} m68k_size_type;


typedef struct m68k_op_size {
 m68k_size_type type;
 union {
  m68k_cpu_size cpu_size;
  m68k_fpu_size fpu_size;
 };
} m68k_op_size;


typedef struct cs_m68k {

 cs_m68k_op operands[4];
 m68k_op_size op_size;
 uint8_t op_count;
} cs_m68k;


typedef enum m68k_insn {
 M68K_INS_INVALID = 0,

 M68K_INS_ABCD,
 M68K_INS_ADD,
 M68K_INS_ADDA,
 M68K_INS_ADDI,
 M68K_INS_ADDQ,
 M68K_INS_ADDX,
 M68K_INS_AND,
 M68K_INS_ANDI,
 M68K_INS_ASL,
 M68K_INS_ASR,
 M68K_INS_BHS,
 M68K_INS_BLO,
 M68K_INS_BHI,
 M68K_INS_BLS,
 M68K_INS_BCC,
 M68K_INS_BCS,
 M68K_INS_BNE,
 M68K_INS_BEQ,
 M68K_INS_BVC,
 M68K_INS_BVS,
 M68K_INS_BPL,
 M68K_INS_BMI,
 M68K_INS_BGE,
 M68K_INS_BLT,
 M68K_INS_BGT,
 M68K_INS_BLE,
 M68K_INS_BRA,
 M68K_INS_BSR,
 M68K_INS_BCHG,
 M68K_INS_BCLR,
 M68K_INS_BSET,
 M68K_INS_BTST,
 M68K_INS_BFCHG,
 M68K_INS_BFCLR,
 M68K_INS_BFEXTS,
 M68K_INS_BFEXTU,
 M68K_INS_BFFFO,
 M68K_INS_BFINS,
 M68K_INS_BFSET,
 M68K_INS_BFTST,
 M68K_INS_BKPT,
 M68K_INS_CALLM,
 M68K_INS_CAS,
 M68K_INS_CAS2,
 M68K_INS_CHK,
 M68K_INS_CHK2,
 M68K_INS_CLR,
 M68K_INS_CMP,
 M68K_INS_CMPA,
 M68K_INS_CMPI,
 M68K_INS_CMPM,
 M68K_INS_CMP2,
 M68K_INS_CINVL,
 M68K_INS_CINVP,
 M68K_INS_CINVA,
 M68K_INS_CPUSHL,
 M68K_INS_CPUSHP,
 M68K_INS_CPUSHA,
 M68K_INS_DBT,
 M68K_INS_DBF,
 M68K_INS_DBHI,
 M68K_INS_DBLS,
 M68K_INS_DBCC,
 M68K_INS_DBCS,
 M68K_INS_DBNE,
 M68K_INS_DBEQ,
 M68K_INS_DBVC,
 M68K_INS_DBVS,
 M68K_INS_DBPL,
 M68K_INS_DBMI,
 M68K_INS_DBGE,
 M68K_INS_DBLT,
 M68K_INS_DBGT,
 M68K_INS_DBLE,
 M68K_INS_DBRA,
 M68K_INS_DIVS,
 M68K_INS_DIVSL,
 M68K_INS_DIVU,
 M68K_INS_DIVUL,
 M68K_INS_EOR,
 M68K_INS_EORI,
 M68K_INS_EXG,
 M68K_INS_EXT,
 M68K_INS_EXTB,
 M68K_INS_FABS,
 M68K_INS_FSABS,
 M68K_INS_FDABS,
 M68K_INS_FACOS,
 M68K_INS_FADD,
 M68K_INS_FSADD,
 M68K_INS_FDADD,
 M68K_INS_FASIN,
 M68K_INS_FATAN,
 M68K_INS_FATANH,
 M68K_INS_FBF,
 M68K_INS_FBEQ,
 M68K_INS_FBOGT,
 M68K_INS_FBOGE,
 M68K_INS_FBOLT,
 M68K_INS_FBOLE,
 M68K_INS_FBOGL,
 M68K_INS_FBOR,
 M68K_INS_FBUN,
 M68K_INS_FBUEQ,
 M68K_INS_FBUGT,
 M68K_INS_FBUGE,
 M68K_INS_FBULT,
 M68K_INS_FBULE,
 M68K_INS_FBNE,
 M68K_INS_FBT,
 M68K_INS_FBSF,
 M68K_INS_FBSEQ,
 M68K_INS_FBGT,
 M68K_INS_FBGE,
 M68K_INS_FBLT,
 M68K_INS_FBLE,
 M68K_INS_FBGL,
 M68K_INS_FBGLE,
 M68K_INS_FBNGLE,
 M68K_INS_FBNGL,
 M68K_INS_FBNLE,
 M68K_INS_FBNLT,
 M68K_INS_FBNGE,
 M68K_INS_FBNGT,
 M68K_INS_FBSNE,
 M68K_INS_FBST,
 M68K_INS_FCMP,
 M68K_INS_FCOS,
 M68K_INS_FCOSH,
 M68K_INS_FDBF,
 M68K_INS_FDBEQ,
 M68K_INS_FDBOGT,
 M68K_INS_FDBOGE,
 M68K_INS_FDBOLT,
 M68K_INS_FDBOLE,
 M68K_INS_FDBOGL,
 M68K_INS_FDBOR,
 M68K_INS_FDBUN,
 M68K_INS_FDBUEQ,
 M68K_INS_FDBUGT,
 M68K_INS_FDBUGE,
 M68K_INS_FDBULT,
 M68K_INS_FDBULE,
 M68K_INS_FDBNE,
 M68K_INS_FDBT,
 M68K_INS_FDBSF,
 M68K_INS_FDBSEQ,
 M68K_INS_FDBGT,
 M68K_INS_FDBGE,
 M68K_INS_FDBLT,
 M68K_INS_FDBLE,
 M68K_INS_FDBGL,
 M68K_INS_FDBGLE,
 M68K_INS_FDBNGLE,
 M68K_INS_FDBNGL,
 M68K_INS_FDBNLE,
 M68K_INS_FDBNLT,
 M68K_INS_FDBNGE,
 M68K_INS_FDBNGT,
 M68K_INS_FDBSNE,
 M68K_INS_FDBST,
 M68K_INS_FDIV,
 M68K_INS_FSDIV,
 M68K_INS_FDDIV,
 M68K_INS_FETOX,
 M68K_INS_FETOXM1,
 M68K_INS_FGETEXP,
 M68K_INS_FGETMAN,
 M68K_INS_FINT,
 M68K_INS_FINTRZ,
 M68K_INS_FLOG10,
 M68K_INS_FLOG2,
 M68K_INS_FLOGN,
 M68K_INS_FLOGNP1,
 M68K_INS_FMOD,
 M68K_INS_FMOVE,
 M68K_INS_FSMOVE,
 M68K_INS_FDMOVE,
 M68K_INS_FMOVECR,
 M68K_INS_FMOVEM,
 M68K_INS_FMUL,
 M68K_INS_FSMUL,
 M68K_INS_FDMUL,
 M68K_INS_FNEG,
 M68K_INS_FSNEG,
 M68K_INS_FDNEG,
 M68K_INS_FNOP,
 M68K_INS_FREM,
 M68K_INS_FRESTORE,
 M68K_INS_FSAVE,
 M68K_INS_FSCALE,
 M68K_INS_FSGLDIV,
 M68K_INS_FSGLMUL,
 M68K_INS_FSIN,
 M68K_INS_FSINCOS,
 M68K_INS_FSINH,
 M68K_INS_FSQRT,
 M68K_INS_FSSQRT,
 M68K_INS_FDSQRT,
 M68K_INS_FSF,
 M68K_INS_FSBEQ,
 M68K_INS_FSOGT,
 M68K_INS_FSOGE,
 M68K_INS_FSOLT,
 M68K_INS_FSOLE,
 M68K_INS_FSOGL,
 M68K_INS_FSOR,
 M68K_INS_FSUN,
 M68K_INS_FSUEQ,
 M68K_INS_FSUGT,
 M68K_INS_FSUGE,
 M68K_INS_FSULT,
 M68K_INS_FSULE,
 M68K_INS_FSNE,
 M68K_INS_FST,
 M68K_INS_FSSF,
 M68K_INS_FSSEQ,
 M68K_INS_FSGT,
 M68K_INS_FSGE,
 M68K_INS_FSLT,
 M68K_INS_FSLE,
 M68K_INS_FSGL,
 M68K_INS_FSGLE,
 M68K_INS_FSNGLE,
 M68K_INS_FSNGL,
 M68K_INS_FSNLE,
 M68K_INS_FSNLT,
 M68K_INS_FSNGE,
 M68K_INS_FSNGT,
 M68K_INS_FSSNE,
 M68K_INS_FSST,
 M68K_INS_FSUB,
 M68K_INS_FSSUB,
 M68K_INS_FDSUB,
 M68K_INS_FTAN,
 M68K_INS_FTANH,
 M68K_INS_FTENTOX,
 M68K_INS_FTRAPF,
 M68K_INS_FTRAPEQ,
 M68K_INS_FTRAPOGT,
 M68K_INS_FTRAPOGE,
 M68K_INS_FTRAPOLT,
 M68K_INS_FTRAPOLE,
 M68K_INS_FTRAPOGL,
 M68K_INS_FTRAPOR,
 M68K_INS_FTRAPUN,
 M68K_INS_FTRAPUEQ,
 M68K_INS_FTRAPUGT,
 M68K_INS_FTRAPUGE,
 M68K_INS_FTRAPULT,
 M68K_INS_FTRAPULE,
 M68K_INS_FTRAPNE,
 M68K_INS_FTRAPT,
 M68K_INS_FTRAPSF,
 M68K_INS_FTRAPSEQ,
 M68K_INS_FTRAPGT,
 M68K_INS_FTRAPGE,
 M68K_INS_FTRAPLT,
 M68K_INS_FTRAPLE,
 M68K_INS_FTRAPGL,
 M68K_INS_FTRAPGLE,
 M68K_INS_FTRAPNGLE,
 M68K_INS_FTRAPNGL,
 M68K_INS_FTRAPNLE,
 M68K_INS_FTRAPNLT,
 M68K_INS_FTRAPNGE,
 M68K_INS_FTRAPNGT,
 M68K_INS_FTRAPSNE,
 M68K_INS_FTRAPST,
 M68K_INS_FTST,
 M68K_INS_FTWOTOX,
 M68K_INS_HALT,
 M68K_INS_ILLEGAL,
 M68K_INS_JMP,
 M68K_INS_JSR,
 M68K_INS_LEA,
 M68K_INS_LINK,
 M68K_INS_LPSTOP,
 M68K_INS_LSL,
 M68K_INS_LSR,
 M68K_INS_MOVE,
 M68K_INS_MOVEA,
 M68K_INS_MOVEC,
 M68K_INS_MOVEM,
 M68K_INS_MOVEP,
 M68K_INS_MOVEQ,
 M68K_INS_MOVES,
 M68K_INS_MOVE16,
 M68K_INS_MULS,
 M68K_INS_MULU,
 M68K_INS_NBCD,
 M68K_INS_NEG,
 M68K_INS_NEGX,
 M68K_INS_NOP,
 M68K_INS_NOT,
 M68K_INS_OR,
 M68K_INS_ORI,
 M68K_INS_PACK,
 M68K_INS_PEA,
 M68K_INS_PFLUSH,
 M68K_INS_PFLUSHA,
 M68K_INS_PFLUSHAN,
 M68K_INS_PFLUSHN,
 M68K_INS_PLOADR,
 M68K_INS_PLOADW,
 M68K_INS_PLPAR,
 M68K_INS_PLPAW,
 M68K_INS_PMOVE,
 M68K_INS_PMOVEFD,
 M68K_INS_PTESTR,
 M68K_INS_PTESTW,
 M68K_INS_PULSE,
 M68K_INS_REMS,
 M68K_INS_REMU,
 M68K_INS_RESET,
 M68K_INS_ROL,
 M68K_INS_ROR,
 M68K_INS_ROXL,
 M68K_INS_ROXR,
 M68K_INS_RTD,
 M68K_INS_RTE,
 M68K_INS_RTM,
 M68K_INS_RTR,
 M68K_INS_RTS,
 M68K_INS_SBCD,
 M68K_INS_ST,
 M68K_INS_SF,
 M68K_INS_SHI,
 M68K_INS_SLS,
 M68K_INS_SCC,
 M68K_INS_SHS,
 M68K_INS_SCS,
 M68K_INS_SLO,
 M68K_INS_SNE,
 M68K_INS_SEQ,
 M68K_INS_SVC,
 M68K_INS_SVS,
 M68K_INS_SPL,
 M68K_INS_SMI,
 M68K_INS_SGE,
 M68K_INS_SLT,
 M68K_INS_SGT,
 M68K_INS_SLE,
 M68K_INS_STOP,
 M68K_INS_SUB,
 M68K_INS_SUBA,
 M68K_INS_SUBI,
 M68K_INS_SUBQ,
 M68K_INS_SUBX,
 M68K_INS_SWAP,
 M68K_INS_TAS,
 M68K_INS_TRAP,
 M68K_INS_TRAPV,
 M68K_INS_TRAPT,
 M68K_INS_TRAPF,
 M68K_INS_TRAPHI,
 M68K_INS_TRAPLS,
 M68K_INS_TRAPCC,
 M68K_INS_TRAPHS,
 M68K_INS_TRAPCS,
 M68K_INS_TRAPLO,
 M68K_INS_TRAPNE,
 M68K_INS_TRAPEQ,
 M68K_INS_TRAPVC,
 M68K_INS_TRAPVS,
 M68K_INS_TRAPPL,
 M68K_INS_TRAPMI,
 M68K_INS_TRAPGE,
 M68K_INS_TRAPLT,
 M68K_INS_TRAPGT,
 M68K_INS_TRAPLE,
 M68K_INS_TST,
 M68K_INS_UNLK,
 M68K_INS_UNPK,
 M68K_INS_ENDING,
} m68k_insn;


typedef enum m68k_group_type {
 M68K_GRP_INVALID = 0,
 M68K_GRP_JUMP,
 M68K_GRP_RET = 3,
 M68K_GRP_IRET = 5,
 M68K_GRP_BRANCH_RELATIVE = 7,

 M68K_GRP_ENDING,
} m68k_group_type;
# 270 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/mips.h" 1 3 4
# 22 "/usr/local/Cellar/capstone/4.0.2/include/capstone/mips.h" 3 4
typedef enum mips_op_type {
 MIPS_OP_INVALID = 0,
 MIPS_OP_REG,
 MIPS_OP_IMM,
 MIPS_OP_MEM,
} mips_op_type;


typedef enum mips_reg {
 MIPS_REG_INVALID = 0,

 MIPS_REG_PC,

 MIPS_REG_0,
 MIPS_REG_1,
 MIPS_REG_2,
 MIPS_REG_3,
 MIPS_REG_4,
 MIPS_REG_5,
 MIPS_REG_6,
 MIPS_REG_7,
 MIPS_REG_8,
 MIPS_REG_9,
 MIPS_REG_10,
 MIPS_REG_11,
 MIPS_REG_12,
 MIPS_REG_13,
 MIPS_REG_14,
 MIPS_REG_15,
 MIPS_REG_16,
 MIPS_REG_17,
 MIPS_REG_18,
 MIPS_REG_19,
 MIPS_REG_20,
 MIPS_REG_21,
 MIPS_REG_22,
 MIPS_REG_23,
 MIPS_REG_24,
 MIPS_REG_25,
 MIPS_REG_26,
 MIPS_REG_27,
 MIPS_REG_28,
 MIPS_REG_29,
 MIPS_REG_30,
 MIPS_REG_31,


 MIPS_REG_DSPCCOND,
 MIPS_REG_DSPCARRY,
 MIPS_REG_DSPEFI,
 MIPS_REG_DSPOUTFLAG,
 MIPS_REG_DSPOUTFLAG16_19,
 MIPS_REG_DSPOUTFLAG20,
 MIPS_REG_DSPOUTFLAG21,
 MIPS_REG_DSPOUTFLAG22,
 MIPS_REG_DSPOUTFLAG23,
 MIPS_REG_DSPPOS,
 MIPS_REG_DSPSCOUNT,


 MIPS_REG_AC0,
 MIPS_REG_AC1,
 MIPS_REG_AC2,
 MIPS_REG_AC3,


 MIPS_REG_CC0,
 MIPS_REG_CC1,
 MIPS_REG_CC2,
 MIPS_REG_CC3,
 MIPS_REG_CC4,
 MIPS_REG_CC5,
 MIPS_REG_CC6,
 MIPS_REG_CC7,


 MIPS_REG_F0,
 MIPS_REG_F1,
 MIPS_REG_F2,
 MIPS_REG_F3,
 MIPS_REG_F4,
 MIPS_REG_F5,
 MIPS_REG_F6,
 MIPS_REG_F7,
 MIPS_REG_F8,
 MIPS_REG_F9,
 MIPS_REG_F10,
 MIPS_REG_F11,
 MIPS_REG_F12,
 MIPS_REG_F13,
 MIPS_REG_F14,
 MIPS_REG_F15,
 MIPS_REG_F16,
 MIPS_REG_F17,
 MIPS_REG_F18,
 MIPS_REG_F19,
 MIPS_REG_F20,
 MIPS_REG_F21,
 MIPS_REG_F22,
 MIPS_REG_F23,
 MIPS_REG_F24,
 MIPS_REG_F25,
 MIPS_REG_F26,
 MIPS_REG_F27,
 MIPS_REG_F28,
 MIPS_REG_F29,
 MIPS_REG_F30,
 MIPS_REG_F31,

 MIPS_REG_FCC0,
 MIPS_REG_FCC1,
 MIPS_REG_FCC2,
 MIPS_REG_FCC3,
 MIPS_REG_FCC4,
 MIPS_REG_FCC5,
 MIPS_REG_FCC6,
 MIPS_REG_FCC7,


 MIPS_REG_W0,
 MIPS_REG_W1,
 MIPS_REG_W2,
 MIPS_REG_W3,
 MIPS_REG_W4,
 MIPS_REG_W5,
 MIPS_REG_W6,
 MIPS_REG_W7,
 MIPS_REG_W8,
 MIPS_REG_W9,
 MIPS_REG_W10,
 MIPS_REG_W11,
 MIPS_REG_W12,
 MIPS_REG_W13,
 MIPS_REG_W14,
 MIPS_REG_W15,
 MIPS_REG_W16,
 MIPS_REG_W17,
 MIPS_REG_W18,
 MIPS_REG_W19,
 MIPS_REG_W20,
 MIPS_REG_W21,
 MIPS_REG_W22,
 MIPS_REG_W23,
 MIPS_REG_W24,
 MIPS_REG_W25,
 MIPS_REG_W26,
 MIPS_REG_W27,
 MIPS_REG_W28,
 MIPS_REG_W29,
 MIPS_REG_W30,
 MIPS_REG_W31,

 MIPS_REG_HI,
 MIPS_REG_LO,

 MIPS_REG_P0,
 MIPS_REG_P1,
 MIPS_REG_P2,

 MIPS_REG_MPL0,
 MIPS_REG_MPL1,
 MIPS_REG_MPL2,

 MIPS_REG_ENDING,


 MIPS_REG_ZERO = MIPS_REG_0,
 MIPS_REG_AT = MIPS_REG_1,
 MIPS_REG_V0 = MIPS_REG_2,
 MIPS_REG_V1 = MIPS_REG_3,
 MIPS_REG_A0 = MIPS_REG_4,
 MIPS_REG_A1 = MIPS_REG_5,
 MIPS_REG_A2 = MIPS_REG_6,
 MIPS_REG_A3 = MIPS_REG_7,
 MIPS_REG_T0 = MIPS_REG_8,
 MIPS_REG_T1 = MIPS_REG_9,
 MIPS_REG_T2 = MIPS_REG_10,
 MIPS_REG_T3 = MIPS_REG_11,
 MIPS_REG_T4 = MIPS_REG_12,
 MIPS_REG_T5 = MIPS_REG_13,
 MIPS_REG_T6 = MIPS_REG_14,
 MIPS_REG_T7 = MIPS_REG_15,
 MIPS_REG_S0 = MIPS_REG_16,
 MIPS_REG_S1 = MIPS_REG_17,
 MIPS_REG_S2 = MIPS_REG_18,
 MIPS_REG_S3 = MIPS_REG_19,
 MIPS_REG_S4 = MIPS_REG_20,
 MIPS_REG_S5 = MIPS_REG_21,
 MIPS_REG_S6 = MIPS_REG_22,
 MIPS_REG_S7 = MIPS_REG_23,
 MIPS_REG_T8 = MIPS_REG_24,
 MIPS_REG_T9 = MIPS_REG_25,
 MIPS_REG_K0 = MIPS_REG_26,
 MIPS_REG_K1 = MIPS_REG_27,
 MIPS_REG_GP = MIPS_REG_28,
 MIPS_REG_SP = MIPS_REG_29,
 MIPS_REG_FP = MIPS_REG_30, MIPS_REG_S8 = MIPS_REG_30,
 MIPS_REG_RA = MIPS_REG_31,

 MIPS_REG_HI0 = MIPS_REG_AC0,
 MIPS_REG_HI1 = MIPS_REG_AC1,
 MIPS_REG_HI2 = MIPS_REG_AC2,
 MIPS_REG_HI3 = MIPS_REG_AC3,

 MIPS_REG_LO0 = MIPS_REG_HI0,
 MIPS_REG_LO1 = MIPS_REG_HI1,
 MIPS_REG_LO2 = MIPS_REG_HI2,
 MIPS_REG_LO3 = MIPS_REG_HI3,
} mips_reg;



typedef struct mips_op_mem {
 mips_reg base;
 int64_t disp;
} mips_op_mem;


typedef struct cs_mips_op {
 mips_op_type type;
 union {
  mips_reg reg;
  int64_t imm;
  mips_op_mem mem;
 };
} cs_mips_op;


typedef struct cs_mips {


 uint8_t op_count;
 cs_mips_op operands[10];
} cs_mips;


typedef enum mips_insn {
 MIPS_INS_INVALID = 0,

 MIPS_INS_ABSQ_S,
 MIPS_INS_ADD,
 MIPS_INS_ADDIUPC,
 MIPS_INS_ADDIUR1SP,
 MIPS_INS_ADDIUR2,
 MIPS_INS_ADDIUS5,
 MIPS_INS_ADDIUSP,
 MIPS_INS_ADDQH,
 MIPS_INS_ADDQH_R,
 MIPS_INS_ADDQ,
 MIPS_INS_ADDQ_S,
 MIPS_INS_ADDSC,
 MIPS_INS_ADDS_A,
 MIPS_INS_ADDS_S,
 MIPS_INS_ADDS_U,
 MIPS_INS_ADDU16,
 MIPS_INS_ADDUH,
 MIPS_INS_ADDUH_R,
 MIPS_INS_ADDU,
 MIPS_INS_ADDU_S,
 MIPS_INS_ADDVI,
 MIPS_INS_ADDV,
 MIPS_INS_ADDWC,
 MIPS_INS_ADD_A,
 MIPS_INS_ADDI,
 MIPS_INS_ADDIU,
 MIPS_INS_ALIGN,
 MIPS_INS_ALUIPC,
 MIPS_INS_AND,
 MIPS_INS_AND16,
 MIPS_INS_ANDI16,
 MIPS_INS_ANDI,
 MIPS_INS_APPEND,
 MIPS_INS_ASUB_S,
 MIPS_INS_ASUB_U,
 MIPS_INS_AUI,
 MIPS_INS_AUIPC,
 MIPS_INS_AVER_S,
 MIPS_INS_AVER_U,
 MIPS_INS_AVE_S,
 MIPS_INS_AVE_U,
 MIPS_INS_B16,
 MIPS_INS_BADDU,
 MIPS_INS_BAL,
 MIPS_INS_BALC,
 MIPS_INS_BALIGN,
 MIPS_INS_BBIT0,
 MIPS_INS_BBIT032,
 MIPS_INS_BBIT1,
 MIPS_INS_BBIT132,
 MIPS_INS_BC,
 MIPS_INS_BC0F,
 MIPS_INS_BC0FL,
 MIPS_INS_BC0T,
 MIPS_INS_BC0TL,
 MIPS_INS_BC1EQZ,
 MIPS_INS_BC1F,
 MIPS_INS_BC1FL,
 MIPS_INS_BC1NEZ,
 MIPS_INS_BC1T,
 MIPS_INS_BC1TL,
 MIPS_INS_BC2EQZ,
 MIPS_INS_BC2F,
 MIPS_INS_BC2FL,
 MIPS_INS_BC2NEZ,
 MIPS_INS_BC2T,
 MIPS_INS_BC2TL,
 MIPS_INS_BC3F,
 MIPS_INS_BC3FL,
 MIPS_INS_BC3T,
 MIPS_INS_BC3TL,
 MIPS_INS_BCLRI,
 MIPS_INS_BCLR,
 MIPS_INS_BEQ,
 MIPS_INS_BEQC,
 MIPS_INS_BEQL,
 MIPS_INS_BEQZ16,
 MIPS_INS_BEQZALC,
 MIPS_INS_BEQZC,
 MIPS_INS_BGEC,
 MIPS_INS_BGEUC,
 MIPS_INS_BGEZ,
 MIPS_INS_BGEZAL,
 MIPS_INS_BGEZALC,
 MIPS_INS_BGEZALL,
 MIPS_INS_BGEZALS,
 MIPS_INS_BGEZC,
 MIPS_INS_BGEZL,
 MIPS_INS_BGTZ,
 MIPS_INS_BGTZALC,
 MIPS_INS_BGTZC,
 MIPS_INS_BGTZL,
 MIPS_INS_BINSLI,
 MIPS_INS_BINSL,
 MIPS_INS_BINSRI,
 MIPS_INS_BINSR,
 MIPS_INS_BITREV,
 MIPS_INS_BITSWAP,
 MIPS_INS_BLEZ,
 MIPS_INS_BLEZALC,
 MIPS_INS_BLEZC,
 MIPS_INS_BLEZL,
 MIPS_INS_BLTC,
 MIPS_INS_BLTUC,
 MIPS_INS_BLTZ,
 MIPS_INS_BLTZAL,
 MIPS_INS_BLTZALC,
 MIPS_INS_BLTZALL,
 MIPS_INS_BLTZALS,
 MIPS_INS_BLTZC,
 MIPS_INS_BLTZL,
 MIPS_INS_BMNZI,
 MIPS_INS_BMNZ,
 MIPS_INS_BMZI,
 MIPS_INS_BMZ,
 MIPS_INS_BNE,
 MIPS_INS_BNEC,
 MIPS_INS_BNEGI,
 MIPS_INS_BNEG,
 MIPS_INS_BNEL,
 MIPS_INS_BNEZ16,
 MIPS_INS_BNEZALC,
 MIPS_INS_BNEZC,
 MIPS_INS_BNVC,
 MIPS_INS_BNZ,
 MIPS_INS_BOVC,
 MIPS_INS_BPOSGE32,
 MIPS_INS_BREAK,
 MIPS_INS_BREAK16,
 MIPS_INS_BSELI,
 MIPS_INS_BSEL,
 MIPS_INS_BSETI,
 MIPS_INS_BSET,
 MIPS_INS_BZ,
 MIPS_INS_BEQZ,
 MIPS_INS_B,
 MIPS_INS_BNEZ,
 MIPS_INS_BTEQZ,
 MIPS_INS_BTNEZ,
 MIPS_INS_CACHE,
 MIPS_INS_CEIL,
 MIPS_INS_CEQI,
 MIPS_INS_CEQ,
 MIPS_INS_CFC1,
 MIPS_INS_CFCMSA,
 MIPS_INS_CINS,
 MIPS_INS_CINS32,
 MIPS_INS_CLASS,
 MIPS_INS_CLEI_S,
 MIPS_INS_CLEI_U,
 MIPS_INS_CLE_S,
 MIPS_INS_CLE_U,
 MIPS_INS_CLO,
 MIPS_INS_CLTI_S,
 MIPS_INS_CLTI_U,
 MIPS_INS_CLT_S,
 MIPS_INS_CLT_U,
 MIPS_INS_CLZ,
 MIPS_INS_CMPGDU,
 MIPS_INS_CMPGU,
 MIPS_INS_CMPU,
 MIPS_INS_CMP,
 MIPS_INS_COPY_S,
 MIPS_INS_COPY_U,
 MIPS_INS_CTC1,
 MIPS_INS_CTCMSA,
 MIPS_INS_CVT,
 MIPS_INS_C,
 MIPS_INS_CMPI,
 MIPS_INS_DADD,
 MIPS_INS_DADDI,
 MIPS_INS_DADDIU,
 MIPS_INS_DADDU,
 MIPS_INS_DAHI,
 MIPS_INS_DALIGN,
 MIPS_INS_DATI,
 MIPS_INS_DAUI,
 MIPS_INS_DBITSWAP,
 MIPS_INS_DCLO,
 MIPS_INS_DCLZ,
 MIPS_INS_DDIV,
 MIPS_INS_DDIVU,
 MIPS_INS_DERET,
 MIPS_INS_DEXT,
 MIPS_INS_DEXTM,
 MIPS_INS_DEXTU,
 MIPS_INS_DI,
 MIPS_INS_DINS,
 MIPS_INS_DINSM,
 MIPS_INS_DINSU,
 MIPS_INS_DIV,
 MIPS_INS_DIVU,
 MIPS_INS_DIV_S,
 MIPS_INS_DIV_U,
 MIPS_INS_DLSA,
 MIPS_INS_DMFC0,
 MIPS_INS_DMFC1,
 MIPS_INS_DMFC2,
 MIPS_INS_DMOD,
 MIPS_INS_DMODU,
 MIPS_INS_DMTC0,
 MIPS_INS_DMTC1,
 MIPS_INS_DMTC2,
 MIPS_INS_DMUH,
 MIPS_INS_DMUHU,
 MIPS_INS_DMUL,
 MIPS_INS_DMULT,
 MIPS_INS_DMULTU,
 MIPS_INS_DMULU,
 MIPS_INS_DOTP_S,
 MIPS_INS_DOTP_U,
 MIPS_INS_DPADD_S,
 MIPS_INS_DPADD_U,
 MIPS_INS_DPAQX_SA,
 MIPS_INS_DPAQX_S,
 MIPS_INS_DPAQ_SA,
 MIPS_INS_DPAQ_S,
 MIPS_INS_DPAU,
 MIPS_INS_DPAX,
 MIPS_INS_DPA,
 MIPS_INS_DPOP,
 MIPS_INS_DPSQX_SA,
 MIPS_INS_DPSQX_S,
 MIPS_INS_DPSQ_SA,
 MIPS_INS_DPSQ_S,
 MIPS_INS_DPSUB_S,
 MIPS_INS_DPSUB_U,
 MIPS_INS_DPSU,
 MIPS_INS_DPSX,
 MIPS_INS_DPS,
 MIPS_INS_DROTR,
 MIPS_INS_DROTR32,
 MIPS_INS_DROTRV,
 MIPS_INS_DSBH,
 MIPS_INS_DSHD,
 MIPS_INS_DSLL,
 MIPS_INS_DSLL32,
 MIPS_INS_DSLLV,
 MIPS_INS_DSRA,
 MIPS_INS_DSRA32,
 MIPS_INS_DSRAV,
 MIPS_INS_DSRL,
 MIPS_INS_DSRL32,
 MIPS_INS_DSRLV,
 MIPS_INS_DSUB,
 MIPS_INS_DSUBU,
 MIPS_INS_EHB,
 MIPS_INS_EI,
 MIPS_INS_ERET,
 MIPS_INS_EXT,
 MIPS_INS_EXTP,
 MIPS_INS_EXTPDP,
 MIPS_INS_EXTPDPV,
 MIPS_INS_EXTPV,
 MIPS_INS_EXTRV_RS,
 MIPS_INS_EXTRV_R,
 MIPS_INS_EXTRV_S,
 MIPS_INS_EXTRV,
 MIPS_INS_EXTR_RS,
 MIPS_INS_EXTR_R,
 MIPS_INS_EXTR_S,
 MIPS_INS_EXTR,
 MIPS_INS_EXTS,
 MIPS_INS_EXTS32,
 MIPS_INS_ABS,
 MIPS_INS_FADD,
 MIPS_INS_FCAF,
 MIPS_INS_FCEQ,
 MIPS_INS_FCLASS,
 MIPS_INS_FCLE,
 MIPS_INS_FCLT,
 MIPS_INS_FCNE,
 MIPS_INS_FCOR,
 MIPS_INS_FCUEQ,
 MIPS_INS_FCULE,
 MIPS_INS_FCULT,
 MIPS_INS_FCUNE,
 MIPS_INS_FCUN,
 MIPS_INS_FDIV,
 MIPS_INS_FEXDO,
 MIPS_INS_FEXP2,
 MIPS_INS_FEXUPL,
 MIPS_INS_FEXUPR,
 MIPS_INS_FFINT_S,
 MIPS_INS_FFINT_U,
 MIPS_INS_FFQL,
 MIPS_INS_FFQR,
 MIPS_INS_FILL,
 MIPS_INS_FLOG2,
 MIPS_INS_FLOOR,
 MIPS_INS_FMADD,
 MIPS_INS_FMAX_A,
 MIPS_INS_FMAX,
 MIPS_INS_FMIN_A,
 MIPS_INS_FMIN,
 MIPS_INS_MOV,
 MIPS_INS_FMSUB,
 MIPS_INS_FMUL,
 MIPS_INS_MUL,
 MIPS_INS_NEG,
 MIPS_INS_FRCP,
 MIPS_INS_FRINT,
 MIPS_INS_FRSQRT,
 MIPS_INS_FSAF,
 MIPS_INS_FSEQ,
 MIPS_INS_FSLE,
 MIPS_INS_FSLT,
 MIPS_INS_FSNE,
 MIPS_INS_FSOR,
 MIPS_INS_FSQRT,
 MIPS_INS_SQRT,
 MIPS_INS_FSUB,
 MIPS_INS_SUB,
 MIPS_INS_FSUEQ,
 MIPS_INS_FSULE,
 MIPS_INS_FSULT,
 MIPS_INS_FSUNE,
 MIPS_INS_FSUN,
 MIPS_INS_FTINT_S,
 MIPS_INS_FTINT_U,
 MIPS_INS_FTQ,
 MIPS_INS_FTRUNC_S,
 MIPS_INS_FTRUNC_U,
 MIPS_INS_HADD_S,
 MIPS_INS_HADD_U,
 MIPS_INS_HSUB_S,
 MIPS_INS_HSUB_U,
 MIPS_INS_ILVEV,
 MIPS_INS_ILVL,
 MIPS_INS_ILVOD,
 MIPS_INS_ILVR,
 MIPS_INS_INS,
 MIPS_INS_INSERT,
 MIPS_INS_INSV,
 MIPS_INS_INSVE,
 MIPS_INS_J,
 MIPS_INS_JAL,
 MIPS_INS_JALR,
 MIPS_INS_JALRS16,
 MIPS_INS_JALRS,
 MIPS_INS_JALS,
 MIPS_INS_JALX,
 MIPS_INS_JIALC,
 MIPS_INS_JIC,
 MIPS_INS_JR,
 MIPS_INS_JR16,
 MIPS_INS_JRADDIUSP,
 MIPS_INS_JRC,
 MIPS_INS_JALRC,
 MIPS_INS_LB,
 MIPS_INS_LBU16,
 MIPS_INS_LBUX,
 MIPS_INS_LBU,
 MIPS_INS_LD,
 MIPS_INS_LDC1,
 MIPS_INS_LDC2,
 MIPS_INS_LDC3,
 MIPS_INS_LDI,
 MIPS_INS_LDL,
 MIPS_INS_LDPC,
 MIPS_INS_LDR,
 MIPS_INS_LDXC1,
 MIPS_INS_LH,
 MIPS_INS_LHU16,
 MIPS_INS_LHX,
 MIPS_INS_LHU,
 MIPS_INS_LI16,
 MIPS_INS_LL,
 MIPS_INS_LLD,
 MIPS_INS_LSA,
 MIPS_INS_LUXC1,
 MIPS_INS_LUI,
 MIPS_INS_LW,
 MIPS_INS_LW16,
 MIPS_INS_LWC1,
 MIPS_INS_LWC2,
 MIPS_INS_LWC3,
 MIPS_INS_LWL,
 MIPS_INS_LWM16,
 MIPS_INS_LWM32,
 MIPS_INS_LWPC,
 MIPS_INS_LWP,
 MIPS_INS_LWR,
 MIPS_INS_LWUPC,
 MIPS_INS_LWU,
 MIPS_INS_LWX,
 MIPS_INS_LWXC1,
 MIPS_INS_LWXS,
 MIPS_INS_LI,
 MIPS_INS_MADD,
 MIPS_INS_MADDF,
 MIPS_INS_MADDR_Q,
 MIPS_INS_MADDU,
 MIPS_INS_MADDV,
 MIPS_INS_MADD_Q,
 MIPS_INS_MAQ_SA,
 MIPS_INS_MAQ_S,
 MIPS_INS_MAXA,
 MIPS_INS_MAXI_S,
 MIPS_INS_MAXI_U,
 MIPS_INS_MAX_A,
 MIPS_INS_MAX,
 MIPS_INS_MAX_S,
 MIPS_INS_MAX_U,
 MIPS_INS_MFC0,
 MIPS_INS_MFC1,
 MIPS_INS_MFC2,
 MIPS_INS_MFHC1,
 MIPS_INS_MFHI,
 MIPS_INS_MFLO,
 MIPS_INS_MINA,
 MIPS_INS_MINI_S,
 MIPS_INS_MINI_U,
 MIPS_INS_MIN_A,
 MIPS_INS_MIN,
 MIPS_INS_MIN_S,
 MIPS_INS_MIN_U,
 MIPS_INS_MOD,
 MIPS_INS_MODSUB,
 MIPS_INS_MODU,
 MIPS_INS_MOD_S,
 MIPS_INS_MOD_U,
 MIPS_INS_MOVE,
 MIPS_INS_MOVEP,
 MIPS_INS_MOVF,
 MIPS_INS_MOVN,
 MIPS_INS_MOVT,
 MIPS_INS_MOVZ,
 MIPS_INS_MSUB,
 MIPS_INS_MSUBF,
 MIPS_INS_MSUBR_Q,
 MIPS_INS_MSUBU,
 MIPS_INS_MSUBV,
 MIPS_INS_MSUB_Q,
 MIPS_INS_MTC0,
 MIPS_INS_MTC1,
 MIPS_INS_MTC2,
 MIPS_INS_MTHC1,
 MIPS_INS_MTHI,
 MIPS_INS_MTHLIP,
 MIPS_INS_MTLO,
 MIPS_INS_MTM0,
 MIPS_INS_MTM1,
 MIPS_INS_MTM2,
 MIPS_INS_MTP0,
 MIPS_INS_MTP1,
 MIPS_INS_MTP2,
 MIPS_INS_MUH,
 MIPS_INS_MUHU,
 MIPS_INS_MULEQ_S,
 MIPS_INS_MULEU_S,
 MIPS_INS_MULQ_RS,
 MIPS_INS_MULQ_S,
 MIPS_INS_MULR_Q,
 MIPS_INS_MULSAQ_S,
 MIPS_INS_MULSA,
 MIPS_INS_MULT,
 MIPS_INS_MULTU,
 MIPS_INS_MULU,
 MIPS_INS_MULV,
 MIPS_INS_MUL_Q,
 MIPS_INS_MUL_S,
 MIPS_INS_NLOC,
 MIPS_INS_NLZC,
 MIPS_INS_NMADD,
 MIPS_INS_NMSUB,
 MIPS_INS_NOR,
 MIPS_INS_NORI,
 MIPS_INS_NOT16,
 MIPS_INS_NOT,
 MIPS_INS_OR,
 MIPS_INS_OR16,
 MIPS_INS_ORI,
 MIPS_INS_PACKRL,
 MIPS_INS_PAUSE,
 MIPS_INS_PCKEV,
 MIPS_INS_PCKOD,
 MIPS_INS_PCNT,
 MIPS_INS_PICK,
 MIPS_INS_POP,
 MIPS_INS_PRECEQU,
 MIPS_INS_PRECEQ,
 MIPS_INS_PRECEU,
 MIPS_INS_PRECRQU_S,
 MIPS_INS_PRECRQ,
 MIPS_INS_PRECRQ_RS,
 MIPS_INS_PRECR,
 MIPS_INS_PRECR_SRA,
 MIPS_INS_PRECR_SRA_R,
 MIPS_INS_PREF,
 MIPS_INS_PREPEND,
 MIPS_INS_RADDU,
 MIPS_INS_RDDSP,
 MIPS_INS_RDHWR,
 MIPS_INS_REPLV,
 MIPS_INS_REPL,
 MIPS_INS_RINT,
 MIPS_INS_ROTR,
 MIPS_INS_ROTRV,
 MIPS_INS_ROUND,
 MIPS_INS_SAT_S,
 MIPS_INS_SAT_U,
 MIPS_INS_SB,
 MIPS_INS_SB16,
 MIPS_INS_SC,
 MIPS_INS_SCD,
 MIPS_INS_SD,
 MIPS_INS_SDBBP,
 MIPS_INS_SDBBP16,
 MIPS_INS_SDC1,
 MIPS_INS_SDC2,
 MIPS_INS_SDC3,
 MIPS_INS_SDL,
 MIPS_INS_SDR,
 MIPS_INS_SDXC1,
 MIPS_INS_SEB,
 MIPS_INS_SEH,
 MIPS_INS_SELEQZ,
 MIPS_INS_SELNEZ,
 MIPS_INS_SEL,
 MIPS_INS_SEQ,
 MIPS_INS_SEQI,
 MIPS_INS_SH,
 MIPS_INS_SH16,
 MIPS_INS_SHF,
 MIPS_INS_SHILO,
 MIPS_INS_SHILOV,
 MIPS_INS_SHLLV,
 MIPS_INS_SHLLV_S,
 MIPS_INS_SHLL,
 MIPS_INS_SHLL_S,
 MIPS_INS_SHRAV,
 MIPS_INS_SHRAV_R,
 MIPS_INS_SHRA,
 MIPS_INS_SHRA_R,
 MIPS_INS_SHRLV,
 MIPS_INS_SHRL,
 MIPS_INS_SLDI,
 MIPS_INS_SLD,
 MIPS_INS_SLL,
 MIPS_INS_SLL16,
 MIPS_INS_SLLI,
 MIPS_INS_SLLV,
 MIPS_INS_SLT,
 MIPS_INS_SLTI,
 MIPS_INS_SLTIU,
 MIPS_INS_SLTU,
 MIPS_INS_SNE,
 MIPS_INS_SNEI,
 MIPS_INS_SPLATI,
 MIPS_INS_SPLAT,
 MIPS_INS_SRA,
 MIPS_INS_SRAI,
 MIPS_INS_SRARI,
 MIPS_INS_SRAR,
 MIPS_INS_SRAV,
 MIPS_INS_SRL,
 MIPS_INS_SRL16,
 MIPS_INS_SRLI,
 MIPS_INS_SRLRI,
 MIPS_INS_SRLR,
 MIPS_INS_SRLV,
 MIPS_INS_SSNOP,
 MIPS_INS_ST,
 MIPS_INS_SUBQH,
 MIPS_INS_SUBQH_R,
 MIPS_INS_SUBQ,
 MIPS_INS_SUBQ_S,
 MIPS_INS_SUBSUS_U,
 MIPS_INS_SUBSUU_S,
 MIPS_INS_SUBS_S,
 MIPS_INS_SUBS_U,
 MIPS_INS_SUBU16,
 MIPS_INS_SUBUH,
 MIPS_INS_SUBUH_R,
 MIPS_INS_SUBU,
 MIPS_INS_SUBU_S,
 MIPS_INS_SUBVI,
 MIPS_INS_SUBV,
 MIPS_INS_SUXC1,
 MIPS_INS_SW,
 MIPS_INS_SW16,
 MIPS_INS_SWC1,
 MIPS_INS_SWC2,
 MIPS_INS_SWC3,
 MIPS_INS_SWL,
 MIPS_INS_SWM16,
 MIPS_INS_SWM32,
 MIPS_INS_SWP,
 MIPS_INS_SWR,
 MIPS_INS_SWXC1,
 MIPS_INS_SYNC,
 MIPS_INS_SYNCI,
 MIPS_INS_SYSCALL,
 MIPS_INS_TEQ,
 MIPS_INS_TEQI,
 MIPS_INS_TGE,
 MIPS_INS_TGEI,
 MIPS_INS_TGEIU,
 MIPS_INS_TGEU,
 MIPS_INS_TLBP,
 MIPS_INS_TLBR,
 MIPS_INS_TLBWI,
 MIPS_INS_TLBWR,
 MIPS_INS_TLT,
 MIPS_INS_TLTI,
 MIPS_INS_TLTIU,
 MIPS_INS_TLTU,
 MIPS_INS_TNE,
 MIPS_INS_TNEI,
 MIPS_INS_TRUNC,
 MIPS_INS_V3MULU,
 MIPS_INS_VMM0,
 MIPS_INS_VMULU,
 MIPS_INS_VSHF,
 MIPS_INS_WAIT,
 MIPS_INS_WRDSP,
 MIPS_INS_WSBH,
 MIPS_INS_XOR,
 MIPS_INS_XOR16,
 MIPS_INS_XORI,


 MIPS_INS_NOP,
 MIPS_INS_NEGU,


 MIPS_INS_JALR_HB,
 MIPS_INS_JR_HB,

 MIPS_INS_ENDING,
} mips_insn;


typedef enum mips_insn_group {
 MIPS_GRP_INVALID = 0,



 MIPS_GRP_JUMP,

 MIPS_GRP_CALL,

 MIPS_GRP_RET,

 MIPS_GRP_INT,

 MIPS_GRP_IRET,

 MIPS_GRP_PRIVILEGE,

 MIPS_GRP_BRANCH_RELATIVE,


 MIPS_GRP_BITCOUNT = 128,
 MIPS_GRP_DSP,
 MIPS_GRP_DSPR2,
 MIPS_GRP_FPIDX,
 MIPS_GRP_MSA,
 MIPS_GRP_MIPS32R2,
 MIPS_GRP_MIPS64,
 MIPS_GRP_MIPS64R2,
 MIPS_GRP_SEINREG,
 MIPS_GRP_STDENC,
 MIPS_GRP_SWAP,
 MIPS_GRP_MICROMIPS,
 MIPS_GRP_MIPS16MODE,
 MIPS_GRP_FP64BIT,
 MIPS_GRP_NONANSFPMATH,
 MIPS_GRP_NOTFP64BIT,
 MIPS_GRP_NOTINMICROMIPS,
 MIPS_GRP_NOTNACL,
 MIPS_GRP_NOTMIPS32R6,
 MIPS_GRP_NOTMIPS64R6,
 MIPS_GRP_CNMIPS,
 MIPS_GRP_MIPS32,
 MIPS_GRP_MIPS32R6,
 MIPS_GRP_MIPS64R6,
 MIPS_GRP_MIPS2,
 MIPS_GRP_MIPS3,
 MIPS_GRP_MIPS3_32,
 MIPS_GRP_MIPS3_32R2,
 MIPS_GRP_MIPS4_32,
 MIPS_GRP_MIPS4_32R2,
 MIPS_GRP_MIPS5_32R2,
 MIPS_GRP_GP32BIT,
 MIPS_GRP_GP64BIT,

 MIPS_GRP_ENDING,
} mips_insn_group;
# 271 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/ppc.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/ppc.h" 3 4
typedef enum ppc_bc {
 PPC_BC_INVALID = 0,
 PPC_BC_LT = (0 << 5) | 12,
 PPC_BC_LE = (1 << 5) | 4,
 PPC_BC_EQ = (2 << 5) | 12,
 PPC_BC_GE = (0 << 5) | 4,
 PPC_BC_GT = (1 << 5) | 12,
 PPC_BC_NE = (2 << 5) | 4,
 PPC_BC_UN = (3 << 5) | 12,
 PPC_BC_NU = (3 << 5) | 4,


 PPC_BC_SO = (4 << 5) | 12,
 PPC_BC_NS = (4 << 5) | 4,
} ppc_bc;


typedef enum ppc_bh {
 PPC_BH_INVALID = 0,
 PPC_BH_PLUS,
 PPC_BH_MINUS,
} ppc_bh;


typedef enum ppc_op_type {
 PPC_OP_INVALID = 0,
 PPC_OP_REG,
 PPC_OP_IMM,
 PPC_OP_MEM,
 PPC_OP_CRX = 64,
} ppc_op_type;


typedef enum ppc_reg {
 PPC_REG_INVALID = 0,

 PPC_REG_CARRY,
 PPC_REG_CR0,
 PPC_REG_CR1,
 PPC_REG_CR2,
 PPC_REG_CR3,
 PPC_REG_CR4,
 PPC_REG_CR5,
 PPC_REG_CR6,
 PPC_REG_CR7,
 PPC_REG_CTR,
 PPC_REG_F0,
 PPC_REG_F1,
 PPC_REG_F2,
 PPC_REG_F3,
 PPC_REG_F4,
 PPC_REG_F5,
 PPC_REG_F6,
 PPC_REG_F7,
 PPC_REG_F8,
 PPC_REG_F9,
 PPC_REG_F10,
 PPC_REG_F11,
 PPC_REG_F12,
 PPC_REG_F13,
 PPC_REG_F14,
 PPC_REG_F15,
 PPC_REG_F16,
 PPC_REG_F17,
 PPC_REG_F18,
 PPC_REG_F19,
 PPC_REG_F20,
 PPC_REG_F21,
 PPC_REG_F22,
 PPC_REG_F23,
 PPC_REG_F24,
 PPC_REG_F25,
 PPC_REG_F26,
 PPC_REG_F27,
 PPC_REG_F28,
 PPC_REG_F29,
 PPC_REG_F30,
 PPC_REG_F31,
 PPC_REG_LR,
 PPC_REG_R0,
 PPC_REG_R1,
 PPC_REG_R2,
 PPC_REG_R3,
 PPC_REG_R4,
 PPC_REG_R5,
 PPC_REG_R6,
 PPC_REG_R7,
 PPC_REG_R8,
 PPC_REG_R9,
 PPC_REG_R10,
 PPC_REG_R11,
 PPC_REG_R12,
 PPC_REG_R13,
 PPC_REG_R14,
 PPC_REG_R15,
 PPC_REG_R16,
 PPC_REG_R17,
 PPC_REG_R18,
 PPC_REG_R19,
 PPC_REG_R20,
 PPC_REG_R21,
 PPC_REG_R22,
 PPC_REG_R23,
 PPC_REG_R24,
 PPC_REG_R25,
 PPC_REG_R26,
 PPC_REG_R27,
 PPC_REG_R28,
 PPC_REG_R29,
 PPC_REG_R30,
 PPC_REG_R31,
 PPC_REG_V0,
 PPC_REG_V1,
 PPC_REG_V2,
 PPC_REG_V3,
 PPC_REG_V4,
 PPC_REG_V5,
 PPC_REG_V6,
 PPC_REG_V7,
 PPC_REG_V8,
 PPC_REG_V9,
 PPC_REG_V10,
 PPC_REG_V11,
 PPC_REG_V12,
 PPC_REG_V13,
 PPC_REG_V14,
 PPC_REG_V15,
 PPC_REG_V16,
 PPC_REG_V17,
 PPC_REG_V18,
 PPC_REG_V19,
 PPC_REG_V20,
 PPC_REG_V21,
 PPC_REG_V22,
 PPC_REG_V23,
 PPC_REG_V24,
 PPC_REG_V25,
 PPC_REG_V26,
 PPC_REG_V27,
 PPC_REG_V28,
 PPC_REG_V29,
 PPC_REG_V30,
 PPC_REG_V31,
 PPC_REG_VRSAVE,
 PPC_REG_VS0,
 PPC_REG_VS1,
 PPC_REG_VS2,
 PPC_REG_VS3,
 PPC_REG_VS4,
 PPC_REG_VS5,
 PPC_REG_VS6,
 PPC_REG_VS7,
 PPC_REG_VS8,
 PPC_REG_VS9,
 PPC_REG_VS10,
 PPC_REG_VS11,
 PPC_REG_VS12,
 PPC_REG_VS13,
 PPC_REG_VS14,
 PPC_REG_VS15,
 PPC_REG_VS16,
 PPC_REG_VS17,
 PPC_REG_VS18,
 PPC_REG_VS19,
 PPC_REG_VS20,
 PPC_REG_VS21,
 PPC_REG_VS22,
 PPC_REG_VS23,
 PPC_REG_VS24,
 PPC_REG_VS25,
 PPC_REG_VS26,
 PPC_REG_VS27,
 PPC_REG_VS28,
 PPC_REG_VS29,
 PPC_REG_VS30,
 PPC_REG_VS31,
 PPC_REG_VS32,
 PPC_REG_VS33,
 PPC_REG_VS34,
 PPC_REG_VS35,
 PPC_REG_VS36,
 PPC_REG_VS37,
 PPC_REG_VS38,
 PPC_REG_VS39,
 PPC_REG_VS40,
 PPC_REG_VS41,
 PPC_REG_VS42,
 PPC_REG_VS43,
 PPC_REG_VS44,
 PPC_REG_VS45,
 PPC_REG_VS46,
 PPC_REG_VS47,
 PPC_REG_VS48,
 PPC_REG_VS49,
 PPC_REG_VS50,
 PPC_REG_VS51,
 PPC_REG_VS52,
 PPC_REG_VS53,
 PPC_REG_VS54,
 PPC_REG_VS55,
 PPC_REG_VS56,
 PPC_REG_VS57,
 PPC_REG_VS58,
 PPC_REG_VS59,
 PPC_REG_VS60,
 PPC_REG_VS61,
 PPC_REG_VS62,
 PPC_REG_VS63,
 PPC_REG_Q0,
 PPC_REG_Q1,
 PPC_REG_Q2,
 PPC_REG_Q3,
 PPC_REG_Q4,
 PPC_REG_Q5,
 PPC_REG_Q6,
 PPC_REG_Q7,
 PPC_REG_Q8,
 PPC_REG_Q9,
 PPC_REG_Q10,
 PPC_REG_Q11,
 PPC_REG_Q12,
 PPC_REG_Q13,
 PPC_REG_Q14,
 PPC_REG_Q15,
 PPC_REG_Q16,
 PPC_REG_Q17,
 PPC_REG_Q18,
 PPC_REG_Q19,
 PPC_REG_Q20,
 PPC_REG_Q21,
 PPC_REG_Q22,
 PPC_REG_Q23,
 PPC_REG_Q24,
 PPC_REG_Q25,
 PPC_REG_Q26,
 PPC_REG_Q27,
 PPC_REG_Q28,
 PPC_REG_Q29,
 PPC_REG_Q30,
 PPC_REG_Q31,


 PPC_REG_RM,
 PPC_REG_CTR8,
 PPC_REG_LR8,
 PPC_REG_CR1EQ,
 PPC_REG_X2,

 PPC_REG_ENDING,
} ppc_reg;



typedef struct ppc_op_mem {
 ppc_reg base;
 int32_t disp;
} ppc_op_mem;

typedef struct ppc_op_crx {
 unsigned int scale;
 ppc_reg reg;
 ppc_bc cond;
} ppc_op_crx;


typedef struct cs_ppc_op {
 ppc_op_type type;
 union {
  ppc_reg reg;
  int64_t imm;
  ppc_op_mem mem;
  ppc_op_crx crx;
 };
} cs_ppc_op;


typedef struct cs_ppc {

 ppc_bc bc;


 ppc_bh bh;


 _Bool update_cr0;



 uint8_t op_count;
 cs_ppc_op operands[8];
} cs_ppc;


typedef enum ppc_insn {
 PPC_INS_INVALID = 0,

 PPC_INS_ADD,
 PPC_INS_ADDC,
 PPC_INS_ADDE,
 PPC_INS_ADDI,
 PPC_INS_ADDIC,
 PPC_INS_ADDIS,
 PPC_INS_ADDME,
 PPC_INS_ADDZE,
 PPC_INS_AND,
 PPC_INS_ANDC,
 PPC_INS_ANDIS,
 PPC_INS_ANDI,
 PPC_INS_ATTN,
 PPC_INS_B,
 PPC_INS_BA,
 PPC_INS_BC,
 PPC_INS_BCCTR,
 PPC_INS_BCCTRL,
 PPC_INS_BCL,
 PPC_INS_BCLR,
 PPC_INS_BCLRL,
 PPC_INS_BCTR,
 PPC_INS_BCTRL,
 PPC_INS_BCT,
 PPC_INS_BDNZ,
 PPC_INS_BDNZA,
 PPC_INS_BDNZL,
 PPC_INS_BDNZLA,
 PPC_INS_BDNZLR,
 PPC_INS_BDNZLRL,
 PPC_INS_BDZ,
 PPC_INS_BDZA,
 PPC_INS_BDZL,
 PPC_INS_BDZLA,
 PPC_INS_BDZLR,
 PPC_INS_BDZLRL,
 PPC_INS_BL,
 PPC_INS_BLA,
 PPC_INS_BLR,
 PPC_INS_BLRL,
 PPC_INS_BRINC,
 PPC_INS_CMPB,
 PPC_INS_CMPD,
 PPC_INS_CMPDI,
 PPC_INS_CMPLD,
 PPC_INS_CMPLDI,
 PPC_INS_CMPLW,
 PPC_INS_CMPLWI,
 PPC_INS_CMPW,
 PPC_INS_CMPWI,
 PPC_INS_CNTLZD,
 PPC_INS_CNTLZW,
 PPC_INS_CREQV,
 PPC_INS_CRXOR,
 PPC_INS_CRAND,
 PPC_INS_CRANDC,
 PPC_INS_CRNAND,
 PPC_INS_CRNOR,
 PPC_INS_CROR,
 PPC_INS_CRORC,
 PPC_INS_DCBA,
 PPC_INS_DCBF,
 PPC_INS_DCBI,
 PPC_INS_DCBST,
 PPC_INS_DCBT,
 PPC_INS_DCBTST,
 PPC_INS_DCBZ,
 PPC_INS_DCBZL,
 PPC_INS_DCCCI,
 PPC_INS_DIVD,
 PPC_INS_DIVDU,
 PPC_INS_DIVW,
 PPC_INS_DIVWU,
 PPC_INS_DSS,
 PPC_INS_DSSALL,
 PPC_INS_DST,
 PPC_INS_DSTST,
 PPC_INS_DSTSTT,
 PPC_INS_DSTT,
 PPC_INS_EQV,
 PPC_INS_EVABS,
 PPC_INS_EVADDIW,
 PPC_INS_EVADDSMIAAW,
 PPC_INS_EVADDSSIAAW,
 PPC_INS_EVADDUMIAAW,
 PPC_INS_EVADDUSIAAW,
 PPC_INS_EVADDW,
 PPC_INS_EVAND,
 PPC_INS_EVANDC,
 PPC_INS_EVCMPEQ,
 PPC_INS_EVCMPGTS,
 PPC_INS_EVCMPGTU,
 PPC_INS_EVCMPLTS,
 PPC_INS_EVCMPLTU,
 PPC_INS_EVCNTLSW,
 PPC_INS_EVCNTLZW,
 PPC_INS_EVDIVWS,
 PPC_INS_EVDIVWU,
 PPC_INS_EVEQV,
 PPC_INS_EVEXTSB,
 PPC_INS_EVEXTSH,
 PPC_INS_EVLDD,
 PPC_INS_EVLDDX,
 PPC_INS_EVLDH,
 PPC_INS_EVLDHX,
 PPC_INS_EVLDW,
 PPC_INS_EVLDWX,
 PPC_INS_EVLHHESPLAT,
 PPC_INS_EVLHHESPLATX,
 PPC_INS_EVLHHOSSPLAT,
 PPC_INS_EVLHHOSSPLATX,
 PPC_INS_EVLHHOUSPLAT,
 PPC_INS_EVLHHOUSPLATX,
 PPC_INS_EVLWHE,
 PPC_INS_EVLWHEX,
 PPC_INS_EVLWHOS,
 PPC_INS_EVLWHOSX,
 PPC_INS_EVLWHOU,
 PPC_INS_EVLWHOUX,
 PPC_INS_EVLWHSPLAT,
 PPC_INS_EVLWHSPLATX,
 PPC_INS_EVLWWSPLAT,
 PPC_INS_EVLWWSPLATX,
 PPC_INS_EVMERGEHI,
 PPC_INS_EVMERGEHILO,
 PPC_INS_EVMERGELO,
 PPC_INS_EVMERGELOHI,
 PPC_INS_EVMHEGSMFAA,
 PPC_INS_EVMHEGSMFAN,
 PPC_INS_EVMHEGSMIAA,
 PPC_INS_EVMHEGSMIAN,
 PPC_INS_EVMHEGUMIAA,
 PPC_INS_EVMHEGUMIAN,
 PPC_INS_EVMHESMF,
 PPC_INS_EVMHESMFA,
 PPC_INS_EVMHESMFAAW,
 PPC_INS_EVMHESMFANW,
 PPC_INS_EVMHESMI,
 PPC_INS_EVMHESMIA,
 PPC_INS_EVMHESMIAAW,
 PPC_INS_EVMHESMIANW,
 PPC_INS_EVMHESSF,
 PPC_INS_EVMHESSFA,
 PPC_INS_EVMHESSFAAW,
 PPC_INS_EVMHESSFANW,
 PPC_INS_EVMHESSIAAW,
 PPC_INS_EVMHESSIANW,
 PPC_INS_EVMHEUMI,
 PPC_INS_EVMHEUMIA,
 PPC_INS_EVMHEUMIAAW,
 PPC_INS_EVMHEUMIANW,
 PPC_INS_EVMHEUSIAAW,
 PPC_INS_EVMHEUSIANW,
 PPC_INS_EVMHOGSMFAA,
 PPC_INS_EVMHOGSMFAN,
 PPC_INS_EVMHOGSMIAA,
 PPC_INS_EVMHOGSMIAN,
 PPC_INS_EVMHOGUMIAA,
 PPC_INS_EVMHOGUMIAN,
 PPC_INS_EVMHOSMF,
 PPC_INS_EVMHOSMFA,
 PPC_INS_EVMHOSMFAAW,
 PPC_INS_EVMHOSMFANW,
 PPC_INS_EVMHOSMI,
 PPC_INS_EVMHOSMIA,
 PPC_INS_EVMHOSMIAAW,
 PPC_INS_EVMHOSMIANW,
 PPC_INS_EVMHOSSF,
 PPC_INS_EVMHOSSFA,
 PPC_INS_EVMHOSSFAAW,
 PPC_INS_EVMHOSSFANW,
 PPC_INS_EVMHOSSIAAW,
 PPC_INS_EVMHOSSIANW,
 PPC_INS_EVMHOUMI,
 PPC_INS_EVMHOUMIA,
 PPC_INS_EVMHOUMIAAW,
 PPC_INS_EVMHOUMIANW,
 PPC_INS_EVMHOUSIAAW,
 PPC_INS_EVMHOUSIANW,
 PPC_INS_EVMRA,
 PPC_INS_EVMWHSMF,
 PPC_INS_EVMWHSMFA,
 PPC_INS_EVMWHSMI,
 PPC_INS_EVMWHSMIA,
 PPC_INS_EVMWHSSF,
 PPC_INS_EVMWHSSFA,
 PPC_INS_EVMWHUMI,
 PPC_INS_EVMWHUMIA,
 PPC_INS_EVMWLSMIAAW,
 PPC_INS_EVMWLSMIANW,
 PPC_INS_EVMWLSSIAAW,
 PPC_INS_EVMWLSSIANW,
 PPC_INS_EVMWLUMI,
 PPC_INS_EVMWLUMIA,
 PPC_INS_EVMWLUMIAAW,
 PPC_INS_EVMWLUMIANW,
 PPC_INS_EVMWLUSIAAW,
 PPC_INS_EVMWLUSIANW,
 PPC_INS_EVMWSMF,
 PPC_INS_EVMWSMFA,
 PPC_INS_EVMWSMFAA,
 PPC_INS_EVMWSMFAN,
 PPC_INS_EVMWSMI,
 PPC_INS_EVMWSMIA,
 PPC_INS_EVMWSMIAA,
 PPC_INS_EVMWSMIAN,
 PPC_INS_EVMWSSF,
 PPC_INS_EVMWSSFA,
 PPC_INS_EVMWSSFAA,
 PPC_INS_EVMWSSFAN,
 PPC_INS_EVMWUMI,
 PPC_INS_EVMWUMIA,
 PPC_INS_EVMWUMIAA,
 PPC_INS_EVMWUMIAN,
 PPC_INS_EVNAND,
 PPC_INS_EVNEG,
 PPC_INS_EVNOR,
 PPC_INS_EVOR,
 PPC_INS_EVORC,
 PPC_INS_EVRLW,
 PPC_INS_EVRLWI,
 PPC_INS_EVRNDW,
 PPC_INS_EVSLW,
 PPC_INS_EVSLWI,
 PPC_INS_EVSPLATFI,
 PPC_INS_EVSPLATI,
 PPC_INS_EVSRWIS,
 PPC_INS_EVSRWIU,
 PPC_INS_EVSRWS,
 PPC_INS_EVSRWU,
 PPC_INS_EVSTDD,
 PPC_INS_EVSTDDX,
 PPC_INS_EVSTDH,
 PPC_INS_EVSTDHX,
 PPC_INS_EVSTDW,
 PPC_INS_EVSTDWX,
 PPC_INS_EVSTWHE,
 PPC_INS_EVSTWHEX,
 PPC_INS_EVSTWHO,
 PPC_INS_EVSTWHOX,
 PPC_INS_EVSTWWE,
 PPC_INS_EVSTWWEX,
 PPC_INS_EVSTWWO,
 PPC_INS_EVSTWWOX,
 PPC_INS_EVSUBFSMIAAW,
 PPC_INS_EVSUBFSSIAAW,
 PPC_INS_EVSUBFUMIAAW,
 PPC_INS_EVSUBFUSIAAW,
 PPC_INS_EVSUBFW,
 PPC_INS_EVSUBIFW,
 PPC_INS_EVXOR,
 PPC_INS_EXTSB,
 PPC_INS_EXTSH,
 PPC_INS_EXTSW,
 PPC_INS_EIEIO,
 PPC_INS_FABS,
 PPC_INS_FADD,
 PPC_INS_FADDS,
 PPC_INS_FCFID,
 PPC_INS_FCFIDS,
 PPC_INS_FCFIDU,
 PPC_INS_FCFIDUS,
 PPC_INS_FCMPU,
 PPC_INS_FCPSGN,
 PPC_INS_FCTID,
 PPC_INS_FCTIDUZ,
 PPC_INS_FCTIDZ,
 PPC_INS_FCTIW,
 PPC_INS_FCTIWUZ,
 PPC_INS_FCTIWZ,
 PPC_INS_FDIV,
 PPC_INS_FDIVS,
 PPC_INS_FMADD,
 PPC_INS_FMADDS,
 PPC_INS_FMR,
 PPC_INS_FMSUB,
 PPC_INS_FMSUBS,
 PPC_INS_FMUL,
 PPC_INS_FMULS,
 PPC_INS_FNABS,
 PPC_INS_FNEG,
 PPC_INS_FNMADD,
 PPC_INS_FNMADDS,
 PPC_INS_FNMSUB,
 PPC_INS_FNMSUBS,
 PPC_INS_FRE,
 PPC_INS_FRES,
 PPC_INS_FRIM,
 PPC_INS_FRIN,
 PPC_INS_FRIP,
 PPC_INS_FRIZ,
 PPC_INS_FRSP,
 PPC_INS_FRSQRTE,
 PPC_INS_FRSQRTES,
 PPC_INS_FSEL,
 PPC_INS_FSQRT,
 PPC_INS_FSQRTS,
 PPC_INS_FSUB,
 PPC_INS_FSUBS,
 PPC_INS_ICBI,
 PPC_INS_ICBT,
 PPC_INS_ICCCI,
 PPC_INS_ISEL,
 PPC_INS_ISYNC,
 PPC_INS_LA,
 PPC_INS_LBZ,
 PPC_INS_LBZCIX,
 PPC_INS_LBZU,
 PPC_INS_LBZUX,
 PPC_INS_LBZX,
 PPC_INS_LD,
 PPC_INS_LDARX,
 PPC_INS_LDBRX,
 PPC_INS_LDCIX,
 PPC_INS_LDU,
 PPC_INS_LDUX,
 PPC_INS_LDX,
 PPC_INS_LFD,
 PPC_INS_LFDU,
 PPC_INS_LFDUX,
 PPC_INS_LFDX,
 PPC_INS_LFIWAX,
 PPC_INS_LFIWZX,
 PPC_INS_LFS,
 PPC_INS_LFSU,
 PPC_INS_LFSUX,
 PPC_INS_LFSX,
 PPC_INS_LHA,
 PPC_INS_LHAU,
 PPC_INS_LHAUX,
 PPC_INS_LHAX,
 PPC_INS_LHBRX,
 PPC_INS_LHZ,
 PPC_INS_LHZCIX,
 PPC_INS_LHZU,
 PPC_INS_LHZUX,
 PPC_INS_LHZX,
 PPC_INS_LI,
 PPC_INS_LIS,
 PPC_INS_LMW,
 PPC_INS_LSWI,
 PPC_INS_LVEBX,
 PPC_INS_LVEHX,
 PPC_INS_LVEWX,
 PPC_INS_LVSL,
 PPC_INS_LVSR,
 PPC_INS_LVX,
 PPC_INS_LVXL,
 PPC_INS_LWA,
 PPC_INS_LWARX,
 PPC_INS_LWAUX,
 PPC_INS_LWAX,
 PPC_INS_LWBRX,
 PPC_INS_LWZ,
 PPC_INS_LWZCIX,
 PPC_INS_LWZU,
 PPC_INS_LWZUX,
 PPC_INS_LWZX,
 PPC_INS_LXSDX,
 PPC_INS_LXVD2X,
 PPC_INS_LXVDSX,
 PPC_INS_LXVW4X,
 PPC_INS_MBAR,
 PPC_INS_MCRF,
 PPC_INS_MCRFS,
 PPC_INS_MFCR,
 PPC_INS_MFCTR,
 PPC_INS_MFDCR,
 PPC_INS_MFFS,
 PPC_INS_MFLR,
 PPC_INS_MFMSR,
 PPC_INS_MFOCRF,
 PPC_INS_MFSPR,
 PPC_INS_MFSR,
 PPC_INS_MFSRIN,
 PPC_INS_MFTB,
 PPC_INS_MFVSCR,
 PPC_INS_MSYNC,
 PPC_INS_MTCRF,
 PPC_INS_MTCTR,
 PPC_INS_MTDCR,
 PPC_INS_MTFSB0,
 PPC_INS_MTFSB1,
 PPC_INS_MTFSF,
 PPC_INS_MTFSFI,
 PPC_INS_MTLR,
 PPC_INS_MTMSR,
 PPC_INS_MTMSRD,
 PPC_INS_MTOCRF,
 PPC_INS_MTSPR,
 PPC_INS_MTSR,
 PPC_INS_MTSRIN,
 PPC_INS_MTVSCR,
 PPC_INS_MULHD,
 PPC_INS_MULHDU,
 PPC_INS_MULHW,
 PPC_INS_MULHWU,
 PPC_INS_MULLD,
 PPC_INS_MULLI,
 PPC_INS_MULLW,
 PPC_INS_NAND,
 PPC_INS_NEG,
 PPC_INS_NOP,
 PPC_INS_ORI,
 PPC_INS_NOR,
 PPC_INS_OR,
 PPC_INS_ORC,
 PPC_INS_ORIS,
 PPC_INS_POPCNTD,
 PPC_INS_POPCNTW,
 PPC_INS_QVALIGNI,
 PPC_INS_QVESPLATI,
 PPC_INS_QVFABS,
 PPC_INS_QVFADD,
 PPC_INS_QVFADDS,
 PPC_INS_QVFCFID,
 PPC_INS_QVFCFIDS,
 PPC_INS_QVFCFIDU,
 PPC_INS_QVFCFIDUS,
 PPC_INS_QVFCMPEQ,
 PPC_INS_QVFCMPGT,
 PPC_INS_QVFCMPLT,
 PPC_INS_QVFCPSGN,
 PPC_INS_QVFCTID,
 PPC_INS_QVFCTIDU,
 PPC_INS_QVFCTIDUZ,
 PPC_INS_QVFCTIDZ,
 PPC_INS_QVFCTIW,
 PPC_INS_QVFCTIWU,
 PPC_INS_QVFCTIWUZ,
 PPC_INS_QVFCTIWZ,
 PPC_INS_QVFLOGICAL,
 PPC_INS_QVFMADD,
 PPC_INS_QVFMADDS,
 PPC_INS_QVFMR,
 PPC_INS_QVFMSUB,
 PPC_INS_QVFMSUBS,
 PPC_INS_QVFMUL,
 PPC_INS_QVFMULS,
 PPC_INS_QVFNABS,
 PPC_INS_QVFNEG,
 PPC_INS_QVFNMADD,
 PPC_INS_QVFNMADDS,
 PPC_INS_QVFNMSUB,
 PPC_INS_QVFNMSUBS,
 PPC_INS_QVFPERM,
 PPC_INS_QVFRE,
 PPC_INS_QVFRES,
 PPC_INS_QVFRIM,
 PPC_INS_QVFRIN,
 PPC_INS_QVFRIP,
 PPC_INS_QVFRIZ,
 PPC_INS_QVFRSP,
 PPC_INS_QVFRSQRTE,
 PPC_INS_QVFRSQRTES,
 PPC_INS_QVFSEL,
 PPC_INS_QVFSUB,
 PPC_INS_QVFSUBS,
 PPC_INS_QVFTSTNAN,
 PPC_INS_QVFXMADD,
 PPC_INS_QVFXMADDS,
 PPC_INS_QVFXMUL,
 PPC_INS_QVFXMULS,
 PPC_INS_QVFXXCPNMADD,
 PPC_INS_QVFXXCPNMADDS,
 PPC_INS_QVFXXMADD,
 PPC_INS_QVFXXMADDS,
 PPC_INS_QVFXXNPMADD,
 PPC_INS_QVFXXNPMADDS,
 PPC_INS_QVGPCI,
 PPC_INS_QVLFCDUX,
 PPC_INS_QVLFCDUXA,
 PPC_INS_QVLFCDX,
 PPC_INS_QVLFCDXA,
 PPC_INS_QVLFCSUX,
 PPC_INS_QVLFCSUXA,
 PPC_INS_QVLFCSX,
 PPC_INS_QVLFCSXA,
 PPC_INS_QVLFDUX,
 PPC_INS_QVLFDUXA,
 PPC_INS_QVLFDX,
 PPC_INS_QVLFDXA,
 PPC_INS_QVLFIWAX,
 PPC_INS_QVLFIWAXA,
 PPC_INS_QVLFIWZX,
 PPC_INS_QVLFIWZXA,
 PPC_INS_QVLFSUX,
 PPC_INS_QVLFSUXA,
 PPC_INS_QVLFSX,
 PPC_INS_QVLFSXA,
 PPC_INS_QVLPCLDX,
 PPC_INS_QVLPCLSX,
 PPC_INS_QVLPCRDX,
 PPC_INS_QVLPCRSX,
 PPC_INS_QVSTFCDUX,
 PPC_INS_QVSTFCDUXA,
 PPC_INS_QVSTFCDUXI,
 PPC_INS_QVSTFCDUXIA,
 PPC_INS_QVSTFCDX,
 PPC_INS_QVSTFCDXA,
 PPC_INS_QVSTFCDXI,
 PPC_INS_QVSTFCDXIA,
 PPC_INS_QVSTFCSUX,
 PPC_INS_QVSTFCSUXA,
 PPC_INS_QVSTFCSUXI,
 PPC_INS_QVSTFCSUXIA,
 PPC_INS_QVSTFCSX,
 PPC_INS_QVSTFCSXA,
 PPC_INS_QVSTFCSXI,
 PPC_INS_QVSTFCSXIA,
 PPC_INS_QVSTFDUX,
 PPC_INS_QVSTFDUXA,
 PPC_INS_QVSTFDUXI,
 PPC_INS_QVSTFDUXIA,
 PPC_INS_QVSTFDX,
 PPC_INS_QVSTFDXA,
 PPC_INS_QVSTFDXI,
 PPC_INS_QVSTFDXIA,
 PPC_INS_QVSTFIWX,
 PPC_INS_QVSTFIWXA,
 PPC_INS_QVSTFSUX,
 PPC_INS_QVSTFSUXA,
 PPC_INS_QVSTFSUXI,
 PPC_INS_QVSTFSUXIA,
 PPC_INS_QVSTFSX,
 PPC_INS_QVSTFSXA,
 PPC_INS_QVSTFSXI,
 PPC_INS_QVSTFSXIA,
 PPC_INS_RFCI,
 PPC_INS_RFDI,
 PPC_INS_RFI,
 PPC_INS_RFID,
 PPC_INS_RFMCI,
 PPC_INS_RLDCL,
 PPC_INS_RLDCR,
 PPC_INS_RLDIC,
 PPC_INS_RLDICL,
 PPC_INS_RLDICR,
 PPC_INS_RLDIMI,
 PPC_INS_RLWIMI,
 PPC_INS_RLWINM,
 PPC_INS_RLWNM,
 PPC_INS_SC,
 PPC_INS_SLBIA,
 PPC_INS_SLBIE,
 PPC_INS_SLBMFEE,
 PPC_INS_SLBMTE,
 PPC_INS_SLD,
 PPC_INS_SLW,
 PPC_INS_SRAD,
 PPC_INS_SRADI,
 PPC_INS_SRAW,
 PPC_INS_SRAWI,
 PPC_INS_SRD,
 PPC_INS_SRW,
 PPC_INS_STB,
 PPC_INS_STBCIX,
 PPC_INS_STBU,
 PPC_INS_STBUX,
 PPC_INS_STBX,
 PPC_INS_STD,
 PPC_INS_STDBRX,
 PPC_INS_STDCIX,
 PPC_INS_STDCX,
 PPC_INS_STDU,
 PPC_INS_STDUX,
 PPC_INS_STDX,
 PPC_INS_STFD,
 PPC_INS_STFDU,
 PPC_INS_STFDUX,
 PPC_INS_STFDX,
 PPC_INS_STFIWX,
 PPC_INS_STFS,
 PPC_INS_STFSU,
 PPC_INS_STFSUX,
 PPC_INS_STFSX,
 PPC_INS_STH,
 PPC_INS_STHBRX,
 PPC_INS_STHCIX,
 PPC_INS_STHU,
 PPC_INS_STHUX,
 PPC_INS_STHX,
 PPC_INS_STMW,
 PPC_INS_STSWI,
 PPC_INS_STVEBX,
 PPC_INS_STVEHX,
 PPC_INS_STVEWX,
 PPC_INS_STVX,
 PPC_INS_STVXL,
 PPC_INS_STW,
 PPC_INS_STWBRX,
 PPC_INS_STWCIX,
 PPC_INS_STWCX,
 PPC_INS_STWU,
 PPC_INS_STWUX,
 PPC_INS_STWX,
 PPC_INS_STXSDX,
 PPC_INS_STXVD2X,
 PPC_INS_STXVW4X,
 PPC_INS_SUBF,
 PPC_INS_SUBFC,
 PPC_INS_SUBFE,
 PPC_INS_SUBFIC,
 PPC_INS_SUBFME,
 PPC_INS_SUBFZE,
 PPC_INS_SYNC,
 PPC_INS_TD,
 PPC_INS_TDI,
 PPC_INS_TLBIA,
 PPC_INS_TLBIE,
 PPC_INS_TLBIEL,
 PPC_INS_TLBIVAX,
 PPC_INS_TLBLD,
 PPC_INS_TLBLI,
 PPC_INS_TLBRE,
 PPC_INS_TLBSX,
 PPC_INS_TLBSYNC,
 PPC_INS_TLBWE,
 PPC_INS_TRAP,
 PPC_INS_TW,
 PPC_INS_TWI,
 PPC_INS_VADDCUW,
 PPC_INS_VADDFP,
 PPC_INS_VADDSBS,
 PPC_INS_VADDSHS,
 PPC_INS_VADDSWS,
 PPC_INS_VADDUBM,
 PPC_INS_VADDUBS,
 PPC_INS_VADDUDM,
 PPC_INS_VADDUHM,
 PPC_INS_VADDUHS,
 PPC_INS_VADDUWM,
 PPC_INS_VADDUWS,
 PPC_INS_VAND,
 PPC_INS_VANDC,
 PPC_INS_VAVGSB,
 PPC_INS_VAVGSH,
 PPC_INS_VAVGSW,
 PPC_INS_VAVGUB,
 PPC_INS_VAVGUH,
 PPC_INS_VAVGUW,
 PPC_INS_VCFSX,
 PPC_INS_VCFUX,
 PPC_INS_VCLZB,
 PPC_INS_VCLZD,
 PPC_INS_VCLZH,
 PPC_INS_VCLZW,
 PPC_INS_VCMPBFP,
 PPC_INS_VCMPEQFP,
 PPC_INS_VCMPEQUB,
 PPC_INS_VCMPEQUD,
 PPC_INS_VCMPEQUH,
 PPC_INS_VCMPEQUW,
 PPC_INS_VCMPGEFP,
 PPC_INS_VCMPGTFP,
 PPC_INS_VCMPGTSB,
 PPC_INS_VCMPGTSD,
 PPC_INS_VCMPGTSH,
 PPC_INS_VCMPGTSW,
 PPC_INS_VCMPGTUB,
 PPC_INS_VCMPGTUD,
 PPC_INS_VCMPGTUH,
 PPC_INS_VCMPGTUW,
 PPC_INS_VCTSXS,
 PPC_INS_VCTUXS,
 PPC_INS_VEQV,
 PPC_INS_VEXPTEFP,
 PPC_INS_VLOGEFP,
 PPC_INS_VMADDFP,
 PPC_INS_VMAXFP,
 PPC_INS_VMAXSB,
 PPC_INS_VMAXSD,
 PPC_INS_VMAXSH,
 PPC_INS_VMAXSW,
 PPC_INS_VMAXUB,
 PPC_INS_VMAXUD,
 PPC_INS_VMAXUH,
 PPC_INS_VMAXUW,
 PPC_INS_VMHADDSHS,
 PPC_INS_VMHRADDSHS,
 PPC_INS_VMINUD,
 PPC_INS_VMINFP,
 PPC_INS_VMINSB,
 PPC_INS_VMINSD,
 PPC_INS_VMINSH,
 PPC_INS_VMINSW,
 PPC_INS_VMINUB,
 PPC_INS_VMINUH,
 PPC_INS_VMINUW,
 PPC_INS_VMLADDUHM,
 PPC_INS_VMRGHB,
 PPC_INS_VMRGHH,
 PPC_INS_VMRGHW,
 PPC_INS_VMRGLB,
 PPC_INS_VMRGLH,
 PPC_INS_VMRGLW,
 PPC_INS_VMSUMMBM,
 PPC_INS_VMSUMSHM,
 PPC_INS_VMSUMSHS,
 PPC_INS_VMSUMUBM,
 PPC_INS_VMSUMUHM,
 PPC_INS_VMSUMUHS,
 PPC_INS_VMULESB,
 PPC_INS_VMULESH,
 PPC_INS_VMULESW,
 PPC_INS_VMULEUB,
 PPC_INS_VMULEUH,
 PPC_INS_VMULEUW,
 PPC_INS_VMULOSB,
 PPC_INS_VMULOSH,
 PPC_INS_VMULOSW,
 PPC_INS_VMULOUB,
 PPC_INS_VMULOUH,
 PPC_INS_VMULOUW,
 PPC_INS_VMULUWM,
 PPC_INS_VNAND,
 PPC_INS_VNMSUBFP,
 PPC_INS_VNOR,
 PPC_INS_VOR,
 PPC_INS_VORC,
 PPC_INS_VPERM,
 PPC_INS_VPKPX,
 PPC_INS_VPKSHSS,
 PPC_INS_VPKSHUS,
 PPC_INS_VPKSWSS,
 PPC_INS_VPKSWUS,
 PPC_INS_VPKUHUM,
 PPC_INS_VPKUHUS,
 PPC_INS_VPKUWUM,
 PPC_INS_VPKUWUS,
 PPC_INS_VPOPCNTB,
 PPC_INS_VPOPCNTD,
 PPC_INS_VPOPCNTH,
 PPC_INS_VPOPCNTW,
 PPC_INS_VREFP,
 PPC_INS_VRFIM,
 PPC_INS_VRFIN,
 PPC_INS_VRFIP,
 PPC_INS_VRFIZ,
 PPC_INS_VRLB,
 PPC_INS_VRLD,
 PPC_INS_VRLH,
 PPC_INS_VRLW,
 PPC_INS_VRSQRTEFP,
 PPC_INS_VSEL,
 PPC_INS_VSL,
 PPC_INS_VSLB,
 PPC_INS_VSLD,
 PPC_INS_VSLDOI,
 PPC_INS_VSLH,
 PPC_INS_VSLO,
 PPC_INS_VSLW,
 PPC_INS_VSPLTB,
 PPC_INS_VSPLTH,
 PPC_INS_VSPLTISB,
 PPC_INS_VSPLTISH,
 PPC_INS_VSPLTISW,
 PPC_INS_VSPLTW,
 PPC_INS_VSR,
 PPC_INS_VSRAB,
 PPC_INS_VSRAD,
 PPC_INS_VSRAH,
 PPC_INS_VSRAW,
 PPC_INS_VSRB,
 PPC_INS_VSRD,
 PPC_INS_VSRH,
 PPC_INS_VSRO,
 PPC_INS_VSRW,
 PPC_INS_VSUBCUW,
 PPC_INS_VSUBFP,
 PPC_INS_VSUBSBS,
 PPC_INS_VSUBSHS,
 PPC_INS_VSUBSWS,
 PPC_INS_VSUBUBM,
 PPC_INS_VSUBUBS,
 PPC_INS_VSUBUDM,
 PPC_INS_VSUBUHM,
 PPC_INS_VSUBUHS,
 PPC_INS_VSUBUWM,
 PPC_INS_VSUBUWS,
 PPC_INS_VSUM2SWS,
 PPC_INS_VSUM4SBS,
 PPC_INS_VSUM4SHS,
 PPC_INS_VSUM4UBS,
 PPC_INS_VSUMSWS,
 PPC_INS_VUPKHPX,
 PPC_INS_VUPKHSB,
 PPC_INS_VUPKHSH,
 PPC_INS_VUPKLPX,
 PPC_INS_VUPKLSB,
 PPC_INS_VUPKLSH,
 PPC_INS_VXOR,
 PPC_INS_WAIT,
 PPC_INS_WRTEE,
 PPC_INS_WRTEEI,
 PPC_INS_XOR,
 PPC_INS_XORI,
 PPC_INS_XORIS,
 PPC_INS_XSABSDP,
 PPC_INS_XSADDDP,
 PPC_INS_XSCMPODP,
 PPC_INS_XSCMPUDP,
 PPC_INS_XSCPSGNDP,
 PPC_INS_XSCVDPSP,
 PPC_INS_XSCVDPSXDS,
 PPC_INS_XSCVDPSXWS,
 PPC_INS_XSCVDPUXDS,
 PPC_INS_XSCVDPUXWS,
 PPC_INS_XSCVSPDP,
 PPC_INS_XSCVSXDDP,
 PPC_INS_XSCVUXDDP,
 PPC_INS_XSDIVDP,
 PPC_INS_XSMADDADP,
 PPC_INS_XSMADDMDP,
 PPC_INS_XSMAXDP,
 PPC_INS_XSMINDP,
 PPC_INS_XSMSUBADP,
 PPC_INS_XSMSUBMDP,
 PPC_INS_XSMULDP,
 PPC_INS_XSNABSDP,
 PPC_INS_XSNEGDP,
 PPC_INS_XSNMADDADP,
 PPC_INS_XSNMADDMDP,
 PPC_INS_XSNMSUBADP,
 PPC_INS_XSNMSUBMDP,
 PPC_INS_XSRDPI,
 PPC_INS_XSRDPIC,
 PPC_INS_XSRDPIM,
 PPC_INS_XSRDPIP,
 PPC_INS_XSRDPIZ,
 PPC_INS_XSREDP,
 PPC_INS_XSRSQRTEDP,
 PPC_INS_XSSQRTDP,
 PPC_INS_XSSUBDP,
 PPC_INS_XSTDIVDP,
 PPC_INS_XSTSQRTDP,
 PPC_INS_XVABSDP,
 PPC_INS_XVABSSP,
 PPC_INS_XVADDDP,
 PPC_INS_XVADDSP,
 PPC_INS_XVCMPEQDP,
 PPC_INS_XVCMPEQSP,
 PPC_INS_XVCMPGEDP,
 PPC_INS_XVCMPGESP,
 PPC_INS_XVCMPGTDP,
 PPC_INS_XVCMPGTSP,
 PPC_INS_XVCPSGNDP,
 PPC_INS_XVCPSGNSP,
 PPC_INS_XVCVDPSP,
 PPC_INS_XVCVDPSXDS,
 PPC_INS_XVCVDPSXWS,
 PPC_INS_XVCVDPUXDS,
 PPC_INS_XVCVDPUXWS,
 PPC_INS_XVCVSPDP,
 PPC_INS_XVCVSPSXDS,
 PPC_INS_XVCVSPSXWS,
 PPC_INS_XVCVSPUXDS,
 PPC_INS_XVCVSPUXWS,
 PPC_INS_XVCVSXDDP,
 PPC_INS_XVCVSXDSP,
 PPC_INS_XVCVSXWDP,
 PPC_INS_XVCVSXWSP,
 PPC_INS_XVCVUXDDP,
 PPC_INS_XVCVUXDSP,
 PPC_INS_XVCVUXWDP,
 PPC_INS_XVCVUXWSP,
 PPC_INS_XVDIVDP,
 PPC_INS_XVDIVSP,
 PPC_INS_XVMADDADP,
 PPC_INS_XVMADDASP,
 PPC_INS_XVMADDMDP,
 PPC_INS_XVMADDMSP,
 PPC_INS_XVMAXDP,
 PPC_INS_XVMAXSP,
 PPC_INS_XVMINDP,
 PPC_INS_XVMINSP,
 PPC_INS_XVMSUBADP,
 PPC_INS_XVMSUBASP,
 PPC_INS_XVMSUBMDP,
 PPC_INS_XVMSUBMSP,
 PPC_INS_XVMULDP,
 PPC_INS_XVMULSP,
 PPC_INS_XVNABSDP,
 PPC_INS_XVNABSSP,
 PPC_INS_XVNEGDP,
 PPC_INS_XVNEGSP,
 PPC_INS_XVNMADDADP,
 PPC_INS_XVNMADDASP,
 PPC_INS_XVNMADDMDP,
 PPC_INS_XVNMADDMSP,
 PPC_INS_XVNMSUBADP,
 PPC_INS_XVNMSUBASP,
 PPC_INS_XVNMSUBMDP,
 PPC_INS_XVNMSUBMSP,
 PPC_INS_XVRDPI,
 PPC_INS_XVRDPIC,
 PPC_INS_XVRDPIM,
 PPC_INS_XVRDPIP,
 PPC_INS_XVRDPIZ,
 PPC_INS_XVREDP,
 PPC_INS_XVRESP,
 PPC_INS_XVRSPI,
 PPC_INS_XVRSPIC,
 PPC_INS_XVRSPIM,
 PPC_INS_XVRSPIP,
 PPC_INS_XVRSPIZ,
 PPC_INS_XVRSQRTEDP,
 PPC_INS_XVRSQRTESP,
 PPC_INS_XVSQRTDP,
 PPC_INS_XVSQRTSP,
 PPC_INS_XVSUBDP,
 PPC_INS_XVSUBSP,
 PPC_INS_XVTDIVDP,
 PPC_INS_XVTDIVSP,
 PPC_INS_XVTSQRTDP,
 PPC_INS_XVTSQRTSP,
 PPC_INS_XXLAND,
 PPC_INS_XXLANDC,
 PPC_INS_XXLEQV,
 PPC_INS_XXLNAND,
 PPC_INS_XXLNOR,
 PPC_INS_XXLOR,
 PPC_INS_XXLORC,
 PPC_INS_XXLXOR,
 PPC_INS_XXMRGHW,
 PPC_INS_XXMRGLW,
 PPC_INS_XXPERMDI,
 PPC_INS_XXSEL,
 PPC_INS_XXSLDWI,
 PPC_INS_XXSPLTW,
 PPC_INS_BCA,
 PPC_INS_BCLA,


 PPC_INS_SLWI,
 PPC_INS_SRWI,
 PPC_INS_SLDI,

 PPC_INS_BTA,
 PPC_INS_CRSET,
 PPC_INS_CRNOT,
 PPC_INS_CRMOVE,
 PPC_INS_CRCLR,
 PPC_INS_MFBR0,
 PPC_INS_MFBR1,
 PPC_INS_MFBR2,
 PPC_INS_MFBR3,
 PPC_INS_MFBR4,
 PPC_INS_MFBR5,
 PPC_INS_MFBR6,
 PPC_INS_MFBR7,
 PPC_INS_MFXER,
 PPC_INS_MFRTCU,
 PPC_INS_MFRTCL,
 PPC_INS_MFDSCR,
 PPC_INS_MFDSISR,
 PPC_INS_MFDAR,
 PPC_INS_MFSRR2,
 PPC_INS_MFSRR3,
 PPC_INS_MFCFAR,
 PPC_INS_MFAMR,
 PPC_INS_MFPID,
 PPC_INS_MFTBLO,
 PPC_INS_MFTBHI,
 PPC_INS_MFDBATU,
 PPC_INS_MFDBATL,
 PPC_INS_MFIBATU,
 PPC_INS_MFIBATL,
 PPC_INS_MFDCCR,
 PPC_INS_MFICCR,
 PPC_INS_MFDEAR,
 PPC_INS_MFESR,
 PPC_INS_MFSPEFSCR,
 PPC_INS_MFTCR,
 PPC_INS_MFASR,
 PPC_INS_MFPVR,
 PPC_INS_MFTBU,
 PPC_INS_MTCR,
 PPC_INS_MTBR0,
 PPC_INS_MTBR1,
 PPC_INS_MTBR2,
 PPC_INS_MTBR3,
 PPC_INS_MTBR4,
 PPC_INS_MTBR5,
 PPC_INS_MTBR6,
 PPC_INS_MTBR7,
 PPC_INS_MTXER,
 PPC_INS_MTDSCR,
 PPC_INS_MTDSISR,
 PPC_INS_MTDAR,
 PPC_INS_MTSRR2,
 PPC_INS_MTSRR3,
 PPC_INS_MTCFAR,
 PPC_INS_MTAMR,
 PPC_INS_MTPID,
 PPC_INS_MTTBL,
 PPC_INS_MTTBU,
 PPC_INS_MTTBLO,
 PPC_INS_MTTBHI,
 PPC_INS_MTDBATU,
 PPC_INS_MTDBATL,
 PPC_INS_MTIBATU,
 PPC_INS_MTIBATL,
 PPC_INS_MTDCCR,
 PPC_INS_MTICCR,
 PPC_INS_MTDEAR,
 PPC_INS_MTESR,
 PPC_INS_MTSPEFSCR,
 PPC_INS_MTTCR,
 PPC_INS_NOT,
 PPC_INS_MR,
 PPC_INS_ROTLD,
 PPC_INS_ROTLDI,
 PPC_INS_CLRLDI,
 PPC_INS_ROTLWI,
 PPC_INS_CLRLWI,
 PPC_INS_ROTLW,
 PPC_INS_SUB,
 PPC_INS_SUBC,
 PPC_INS_LWSYNC,
 PPC_INS_PTESYNC,
 PPC_INS_TDLT,
 PPC_INS_TDEQ,
 PPC_INS_TDGT,
 PPC_INS_TDNE,
 PPC_INS_TDLLT,
 PPC_INS_TDLGT,
 PPC_INS_TDU,
 PPC_INS_TDLTI,
 PPC_INS_TDEQI,
 PPC_INS_TDGTI,
 PPC_INS_TDNEI,
 PPC_INS_TDLLTI,
 PPC_INS_TDLGTI,
 PPC_INS_TDUI,
 PPC_INS_TLBREHI,
 PPC_INS_TLBRELO,
 PPC_INS_TLBWEHI,
 PPC_INS_TLBWELO,
 PPC_INS_TWLT,
 PPC_INS_TWEQ,
 PPC_INS_TWGT,
 PPC_INS_TWNE,
 PPC_INS_TWLLT,
 PPC_INS_TWLGT,
 PPC_INS_TWU,
 PPC_INS_TWLTI,
 PPC_INS_TWEQI,
 PPC_INS_TWGTI,
 PPC_INS_TWNEI,
 PPC_INS_TWLLTI,
 PPC_INS_TWLGTI,
 PPC_INS_TWUI,
 PPC_INS_WAITRSV,
 PPC_INS_WAITIMPL,
 PPC_INS_XNOP,
 PPC_INS_XVMOVDP,
 PPC_INS_XVMOVSP,
 PPC_INS_XXSPLTD,
 PPC_INS_XXMRGHD,
 PPC_INS_XXMRGLD,
 PPC_INS_XXSWAPD,
 PPC_INS_BT,
 PPC_INS_BF,
 PPC_INS_BDNZT,
 PPC_INS_BDNZF,
 PPC_INS_BDZF,
 PPC_INS_BDZT,
 PPC_INS_BFA,
 PPC_INS_BDNZTA,
 PPC_INS_BDNZFA,
 PPC_INS_BDZTA,
 PPC_INS_BDZFA,
 PPC_INS_BTCTR,
 PPC_INS_BFCTR,
 PPC_INS_BTCTRL,
 PPC_INS_BFCTRL,
 PPC_INS_BTL,
 PPC_INS_BFL,
 PPC_INS_BDNZTL,
 PPC_INS_BDNZFL,
 PPC_INS_BDZTL,
 PPC_INS_BDZFL,
 PPC_INS_BTLA,
 PPC_INS_BFLA,
 PPC_INS_BDNZTLA,
 PPC_INS_BDNZFLA,
 PPC_INS_BDZTLA,
 PPC_INS_BDZFLA,
 PPC_INS_BTLR,
 PPC_INS_BFLR,
 PPC_INS_BDNZTLR,
 PPC_INS_BDZTLR,
 PPC_INS_BDZFLR,
 PPC_INS_BTLRL,
 PPC_INS_BFLRL,
 PPC_INS_BDNZTLRL,
 PPC_INS_BDNZFLRL,
 PPC_INS_BDZTLRL,
 PPC_INS_BDZFLRL,


 PPC_INS_QVFAND,
 PPC_INS_QVFCLR,
 PPC_INS_QVFANDC,
 PPC_INS_QVFCTFB,
 PPC_INS_QVFXOR,
 PPC_INS_QVFOR,
 PPC_INS_QVFNOR,
 PPC_INS_QVFEQU,
 PPC_INS_QVFNOT,
 PPC_INS_QVFORC,
 PPC_INS_QVFNAND,
 PPC_INS_QVFSET,

 PPC_INS_ENDING,
} ppc_insn;


typedef enum ppc_insn_group {
 PPC_GRP_INVALID = 0,



 PPC_GRP_JUMP,


 PPC_GRP_ALTIVEC = 128,
 PPC_GRP_MODE32,
 PPC_GRP_MODE64,
 PPC_GRP_BOOKE,
 PPC_GRP_NOTBOOKE,
 PPC_GRP_SPE,
 PPC_GRP_VSX,
 PPC_GRP_E500,
 PPC_GRP_PPC4XX,
 PPC_GRP_PPC6XX,
 PPC_GRP_ICBT,
 PPC_GRP_P8ALTIVEC,
 PPC_GRP_P8VECTOR,
 PPC_GRP_QPX,

 PPC_GRP_ENDING,
} ppc_insn_group;
# 272 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/sparc.h" 1 3 4
# 22 "/usr/local/Cellar/capstone/4.0.2/include/capstone/sparc.h" 3 4
typedef enum sparc_cc {
 SPARC_CC_INVALID = 0,

 SPARC_CC_ICC_A = 8+256,
 SPARC_CC_ICC_N = 0+256,
 SPARC_CC_ICC_NE = 9+256,
 SPARC_CC_ICC_E = 1+256,
 SPARC_CC_ICC_G = 10+256,
 SPARC_CC_ICC_LE = 2+256,
 SPARC_CC_ICC_GE = 11+256,
 SPARC_CC_ICC_L = 3+256,
 SPARC_CC_ICC_GU = 12+256,
 SPARC_CC_ICC_LEU = 4+256,
 SPARC_CC_ICC_CC = 13+256,
 SPARC_CC_ICC_CS = 5+256,
 SPARC_CC_ICC_POS = 14+256,
 SPARC_CC_ICC_NEG = 6+256,
 SPARC_CC_ICC_VC = 15+256,
 SPARC_CC_ICC_VS = 7+256,


 SPARC_CC_FCC_A = 8+16+256,
 SPARC_CC_FCC_N = 0+16+256,
 SPARC_CC_FCC_U = 7+16+256,
 SPARC_CC_FCC_G = 6+16+256,
 SPARC_CC_FCC_UG = 5+16+256,
 SPARC_CC_FCC_L = 4+16+256,
 SPARC_CC_FCC_UL = 3+16+256,
 SPARC_CC_FCC_LG = 2+16+256,
 SPARC_CC_FCC_NE = 1+16+256,
 SPARC_CC_FCC_E = 9+16+256,
 SPARC_CC_FCC_UE = 10+16+256,
 SPARC_CC_FCC_GE = 11+16+256,
 SPARC_CC_FCC_UGE = 12+16+256,
 SPARC_CC_FCC_LE = 13+16+256,
 SPARC_CC_FCC_ULE = 14+16+256,
 SPARC_CC_FCC_O = 15+16+256,
} sparc_cc;


typedef enum sparc_hint {
 SPARC_HINT_INVALID = 0,
 SPARC_HINT_A = 1 << 0,
 SPARC_HINT_PT = 1 << 1,
 SPARC_HINT_PN = 1 << 2,
} sparc_hint;


typedef enum sparc_op_type {
 SPARC_OP_INVALID = 0,
 SPARC_OP_REG,
 SPARC_OP_IMM,
 SPARC_OP_MEM,
} sparc_op_type;


typedef enum sparc_reg {
 SPARC_REG_INVALID = 0,

 SPARC_REG_F0,
 SPARC_REG_F1,
 SPARC_REG_F2,
 SPARC_REG_F3,
 SPARC_REG_F4,
 SPARC_REG_F5,
 SPARC_REG_F6,
 SPARC_REG_F7,
 SPARC_REG_F8,
 SPARC_REG_F9,
 SPARC_REG_F10,
 SPARC_REG_F11,
 SPARC_REG_F12,
 SPARC_REG_F13,
 SPARC_REG_F14,
 SPARC_REG_F15,
 SPARC_REG_F16,
 SPARC_REG_F17,
 SPARC_REG_F18,
 SPARC_REG_F19,
 SPARC_REG_F20,
 SPARC_REG_F21,
 SPARC_REG_F22,
 SPARC_REG_F23,
 SPARC_REG_F24,
 SPARC_REG_F25,
 SPARC_REG_F26,
 SPARC_REG_F27,
 SPARC_REG_F28,
 SPARC_REG_F29,
 SPARC_REG_F30,
 SPARC_REG_F31,
 SPARC_REG_F32,
 SPARC_REG_F34,
 SPARC_REG_F36,
 SPARC_REG_F38,
 SPARC_REG_F40,
 SPARC_REG_F42,
 SPARC_REG_F44,
 SPARC_REG_F46,
 SPARC_REG_F48,
 SPARC_REG_F50,
 SPARC_REG_F52,
 SPARC_REG_F54,
 SPARC_REG_F56,
 SPARC_REG_F58,
 SPARC_REG_F60,
 SPARC_REG_F62,
 SPARC_REG_FCC0,
 SPARC_REG_FCC1,
 SPARC_REG_FCC2,
 SPARC_REG_FCC3,
 SPARC_REG_FP,
 SPARC_REG_G0,
 SPARC_REG_G1,
 SPARC_REG_G2,
 SPARC_REG_G3,
 SPARC_REG_G4,
 SPARC_REG_G5,
 SPARC_REG_G6,
 SPARC_REG_G7,
 SPARC_REG_I0,
 SPARC_REG_I1,
 SPARC_REG_I2,
 SPARC_REG_I3,
 SPARC_REG_I4,
 SPARC_REG_I5,
 SPARC_REG_I7,
 SPARC_REG_ICC,
 SPARC_REG_L0,
 SPARC_REG_L1,
 SPARC_REG_L2,
 SPARC_REG_L3,
 SPARC_REG_L4,
 SPARC_REG_L5,
 SPARC_REG_L6,
 SPARC_REG_L7,
 SPARC_REG_O0,
 SPARC_REG_O1,
 SPARC_REG_O2,
 SPARC_REG_O3,
 SPARC_REG_O4,
 SPARC_REG_O5,
 SPARC_REG_O7,
 SPARC_REG_SP,
 SPARC_REG_Y,


 SPARC_REG_XCC,

 SPARC_REG_ENDING,


 SPARC_REG_O6 = SPARC_REG_SP,
 SPARC_REG_I6 = SPARC_REG_FP,
} sparc_reg;



typedef struct sparc_op_mem {
 uint8_t base;


 uint8_t index;
 int32_t disp;
} sparc_op_mem;


typedef struct cs_sparc_op {
 sparc_op_type type;
 union {
  sparc_reg reg;
  int64_t imm;
  sparc_op_mem mem;
 };
} cs_sparc_op;


typedef struct cs_sparc {
 sparc_cc cc;
 sparc_hint hint;


 uint8_t op_count;
 cs_sparc_op operands[4];
} cs_sparc;


typedef enum sparc_insn {
 SPARC_INS_INVALID = 0,

 SPARC_INS_ADDCC,
 SPARC_INS_ADDX,
 SPARC_INS_ADDXCC,
 SPARC_INS_ADDXC,
 SPARC_INS_ADDXCCC,
 SPARC_INS_ADD,
 SPARC_INS_ALIGNADDR,
 SPARC_INS_ALIGNADDRL,
 SPARC_INS_ANDCC,
 SPARC_INS_ANDNCC,
 SPARC_INS_ANDN,
 SPARC_INS_AND,
 SPARC_INS_ARRAY16,
 SPARC_INS_ARRAY32,
 SPARC_INS_ARRAY8,
 SPARC_INS_B,
 SPARC_INS_JMP,
 SPARC_INS_BMASK,
 SPARC_INS_FB,
 SPARC_INS_BRGEZ,
 SPARC_INS_BRGZ,
 SPARC_INS_BRLEZ,
 SPARC_INS_BRLZ,
 SPARC_INS_BRNZ,
 SPARC_INS_BRZ,
 SPARC_INS_BSHUFFLE,
 SPARC_INS_CALL,
 SPARC_INS_CASX,
 SPARC_INS_CAS,
 SPARC_INS_CMASK16,
 SPARC_INS_CMASK32,
 SPARC_INS_CMASK8,
 SPARC_INS_CMP,
 SPARC_INS_EDGE16,
 SPARC_INS_EDGE16L,
 SPARC_INS_EDGE16LN,
 SPARC_INS_EDGE16N,
 SPARC_INS_EDGE32,
 SPARC_INS_EDGE32L,
 SPARC_INS_EDGE32LN,
 SPARC_INS_EDGE32N,
 SPARC_INS_EDGE8,
 SPARC_INS_EDGE8L,
 SPARC_INS_EDGE8LN,
 SPARC_INS_EDGE8N,
 SPARC_INS_FABSD,
 SPARC_INS_FABSQ,
 SPARC_INS_FABSS,
 SPARC_INS_FADDD,
 SPARC_INS_FADDQ,
 SPARC_INS_FADDS,
 SPARC_INS_FALIGNDATA,
 SPARC_INS_FAND,
 SPARC_INS_FANDNOT1,
 SPARC_INS_FANDNOT1S,
 SPARC_INS_FANDNOT2,
 SPARC_INS_FANDNOT2S,
 SPARC_INS_FANDS,
 SPARC_INS_FCHKSM16,
 SPARC_INS_FCMPD,
 SPARC_INS_FCMPEQ16,
 SPARC_INS_FCMPEQ32,
 SPARC_INS_FCMPGT16,
 SPARC_INS_FCMPGT32,
 SPARC_INS_FCMPLE16,
 SPARC_INS_FCMPLE32,
 SPARC_INS_FCMPNE16,
 SPARC_INS_FCMPNE32,
 SPARC_INS_FCMPQ,
 SPARC_INS_FCMPS,
 SPARC_INS_FDIVD,
 SPARC_INS_FDIVQ,
 SPARC_INS_FDIVS,
 SPARC_INS_FDMULQ,
 SPARC_INS_FDTOI,
 SPARC_INS_FDTOQ,
 SPARC_INS_FDTOS,
 SPARC_INS_FDTOX,
 SPARC_INS_FEXPAND,
 SPARC_INS_FHADDD,
 SPARC_INS_FHADDS,
 SPARC_INS_FHSUBD,
 SPARC_INS_FHSUBS,
 SPARC_INS_FITOD,
 SPARC_INS_FITOQ,
 SPARC_INS_FITOS,
 SPARC_INS_FLCMPD,
 SPARC_INS_FLCMPS,
 SPARC_INS_FLUSHW,
 SPARC_INS_FMEAN16,
 SPARC_INS_FMOVD,
 SPARC_INS_FMOVQ,
 SPARC_INS_FMOVRDGEZ,
 SPARC_INS_FMOVRQGEZ,
 SPARC_INS_FMOVRSGEZ,
 SPARC_INS_FMOVRDGZ,
 SPARC_INS_FMOVRQGZ,
 SPARC_INS_FMOVRSGZ,
 SPARC_INS_FMOVRDLEZ,
 SPARC_INS_FMOVRQLEZ,
 SPARC_INS_FMOVRSLEZ,
 SPARC_INS_FMOVRDLZ,
 SPARC_INS_FMOVRQLZ,
 SPARC_INS_FMOVRSLZ,
 SPARC_INS_FMOVRDNZ,
 SPARC_INS_FMOVRQNZ,
 SPARC_INS_FMOVRSNZ,
 SPARC_INS_FMOVRDZ,
 SPARC_INS_FMOVRQZ,
 SPARC_INS_FMOVRSZ,
 SPARC_INS_FMOVS,
 SPARC_INS_FMUL8SUX16,
 SPARC_INS_FMUL8ULX16,
 SPARC_INS_FMUL8X16,
 SPARC_INS_FMUL8X16AL,
 SPARC_INS_FMUL8X16AU,
 SPARC_INS_FMULD,
 SPARC_INS_FMULD8SUX16,
 SPARC_INS_FMULD8ULX16,
 SPARC_INS_FMULQ,
 SPARC_INS_FMULS,
 SPARC_INS_FNADDD,
 SPARC_INS_FNADDS,
 SPARC_INS_FNAND,
 SPARC_INS_FNANDS,
 SPARC_INS_FNEGD,
 SPARC_INS_FNEGQ,
 SPARC_INS_FNEGS,
 SPARC_INS_FNHADDD,
 SPARC_INS_FNHADDS,
 SPARC_INS_FNOR,
 SPARC_INS_FNORS,
 SPARC_INS_FNOT1,
 SPARC_INS_FNOT1S,
 SPARC_INS_FNOT2,
 SPARC_INS_FNOT2S,
 SPARC_INS_FONE,
 SPARC_INS_FONES,
 SPARC_INS_FOR,
 SPARC_INS_FORNOT1,
 SPARC_INS_FORNOT1S,
 SPARC_INS_FORNOT2,
 SPARC_INS_FORNOT2S,
 SPARC_INS_FORS,
 SPARC_INS_FPACK16,
 SPARC_INS_FPACK32,
 SPARC_INS_FPACKFIX,
 SPARC_INS_FPADD16,
 SPARC_INS_FPADD16S,
 SPARC_INS_FPADD32,
 SPARC_INS_FPADD32S,
 SPARC_INS_FPADD64,
 SPARC_INS_FPMERGE,
 SPARC_INS_FPSUB16,
 SPARC_INS_FPSUB16S,
 SPARC_INS_FPSUB32,
 SPARC_INS_FPSUB32S,
 SPARC_INS_FQTOD,
 SPARC_INS_FQTOI,
 SPARC_INS_FQTOS,
 SPARC_INS_FQTOX,
 SPARC_INS_FSLAS16,
 SPARC_INS_FSLAS32,
 SPARC_INS_FSLL16,
 SPARC_INS_FSLL32,
 SPARC_INS_FSMULD,
 SPARC_INS_FSQRTD,
 SPARC_INS_FSQRTQ,
 SPARC_INS_FSQRTS,
 SPARC_INS_FSRA16,
 SPARC_INS_FSRA32,
 SPARC_INS_FSRC1,
 SPARC_INS_FSRC1S,
 SPARC_INS_FSRC2,
 SPARC_INS_FSRC2S,
 SPARC_INS_FSRL16,
 SPARC_INS_FSRL32,
 SPARC_INS_FSTOD,
 SPARC_INS_FSTOI,
 SPARC_INS_FSTOQ,
 SPARC_INS_FSTOX,
 SPARC_INS_FSUBD,
 SPARC_INS_FSUBQ,
 SPARC_INS_FSUBS,
 SPARC_INS_FXNOR,
 SPARC_INS_FXNORS,
 SPARC_INS_FXOR,
 SPARC_INS_FXORS,
 SPARC_INS_FXTOD,
 SPARC_INS_FXTOQ,
 SPARC_INS_FXTOS,
 SPARC_INS_FZERO,
 SPARC_INS_FZEROS,
 SPARC_INS_JMPL,
 SPARC_INS_LDD,
 SPARC_INS_LD,
 SPARC_INS_LDQ,
 SPARC_INS_LDSB,
 SPARC_INS_LDSH,
 SPARC_INS_LDSW,
 SPARC_INS_LDUB,
 SPARC_INS_LDUH,
 SPARC_INS_LDX,
 SPARC_INS_LZCNT,
 SPARC_INS_MEMBAR,
 SPARC_INS_MOVDTOX,
 SPARC_INS_MOV,
 SPARC_INS_MOVRGEZ,
 SPARC_INS_MOVRGZ,
 SPARC_INS_MOVRLEZ,
 SPARC_INS_MOVRLZ,
 SPARC_INS_MOVRNZ,
 SPARC_INS_MOVRZ,
 SPARC_INS_MOVSTOSW,
 SPARC_INS_MOVSTOUW,
 SPARC_INS_MULX,
 SPARC_INS_NOP,
 SPARC_INS_ORCC,
 SPARC_INS_ORNCC,
 SPARC_INS_ORN,
 SPARC_INS_OR,
 SPARC_INS_PDIST,
 SPARC_INS_PDISTN,
 SPARC_INS_POPC,
 SPARC_INS_RD,
 SPARC_INS_RESTORE,
 SPARC_INS_RETT,
 SPARC_INS_SAVE,
 SPARC_INS_SDIVCC,
 SPARC_INS_SDIVX,
 SPARC_INS_SDIV,
 SPARC_INS_SETHI,
 SPARC_INS_SHUTDOWN,
 SPARC_INS_SIAM,
 SPARC_INS_SLLX,
 SPARC_INS_SLL,
 SPARC_INS_SMULCC,
 SPARC_INS_SMUL,
 SPARC_INS_SRAX,
 SPARC_INS_SRA,
 SPARC_INS_SRLX,
 SPARC_INS_SRL,
 SPARC_INS_STBAR,
 SPARC_INS_STB,
 SPARC_INS_STD,
 SPARC_INS_ST,
 SPARC_INS_STH,
 SPARC_INS_STQ,
 SPARC_INS_STX,
 SPARC_INS_SUBCC,
 SPARC_INS_SUBX,
 SPARC_INS_SUBXCC,
 SPARC_INS_SUB,
 SPARC_INS_SWAP,
 SPARC_INS_TADDCCTV,
 SPARC_INS_TADDCC,
 SPARC_INS_T,
 SPARC_INS_TSUBCCTV,
 SPARC_INS_TSUBCC,
 SPARC_INS_UDIVCC,
 SPARC_INS_UDIVX,
 SPARC_INS_UDIV,
 SPARC_INS_UMULCC,
 SPARC_INS_UMULXHI,
 SPARC_INS_UMUL,
 SPARC_INS_UNIMP,
 SPARC_INS_FCMPED,
 SPARC_INS_FCMPEQ,
 SPARC_INS_FCMPES,
 SPARC_INS_WR,
 SPARC_INS_XMULX,
 SPARC_INS_XMULXHI,
 SPARC_INS_XNORCC,
 SPARC_INS_XNOR,
 SPARC_INS_XORCC,
 SPARC_INS_XOR,


 SPARC_INS_RET,
 SPARC_INS_RETL,

 SPARC_INS_ENDING,
} sparc_insn;


typedef enum sparc_insn_group {
 SPARC_GRP_INVALID = 0,



 SPARC_GRP_JUMP,


 SPARC_GRP_HARDQUAD = 128,
 SPARC_GRP_V9,
 SPARC_GRP_VIS,
 SPARC_GRP_VIS2,
 SPARC_GRP_VIS3,
 SPARC_GRP_32BIT,
 SPARC_GRP_64BIT,

 SPARC_GRP_ENDING,
} sparc_insn_group;
# 273 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/systemz.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/systemz.h" 3 4
typedef enum sysz_cc {
 SYSZ_CC_INVALID = 0,

 SYSZ_CC_O,
 SYSZ_CC_H,
 SYSZ_CC_NLE,
 SYSZ_CC_L,
 SYSZ_CC_NHE,
 SYSZ_CC_LH,
 SYSZ_CC_NE,
 SYSZ_CC_E,
 SYSZ_CC_NLH,
 SYSZ_CC_HE,
 SYSZ_CC_NL,
 SYSZ_CC_LE,
 SYSZ_CC_NH,
 SYSZ_CC_NO,
} sysz_cc;


typedef enum sysz_op_type {
 SYSZ_OP_INVALID = 0,
 SYSZ_OP_REG,
 SYSZ_OP_IMM,
 SYSZ_OP_MEM,
 SYSZ_OP_ACREG = 64,
} sysz_op_type;


typedef enum sysz_reg {
 SYSZ_REG_INVALID = 0,

 SYSZ_REG_0,
 SYSZ_REG_1,
 SYSZ_REG_2,
 SYSZ_REG_3,
 SYSZ_REG_4,
 SYSZ_REG_5,
 SYSZ_REG_6,
 SYSZ_REG_7,
 SYSZ_REG_8,
 SYSZ_REG_9,
 SYSZ_REG_10,
 SYSZ_REG_11,
 SYSZ_REG_12,
 SYSZ_REG_13,
 SYSZ_REG_14,
 SYSZ_REG_15,
 SYSZ_REG_CC,
 SYSZ_REG_F0,
 SYSZ_REG_F1,
 SYSZ_REG_F2,
 SYSZ_REG_F3,
 SYSZ_REG_F4,
 SYSZ_REG_F5,
 SYSZ_REG_F6,
 SYSZ_REG_F7,
 SYSZ_REG_F8,
 SYSZ_REG_F9,
 SYSZ_REG_F10,
 SYSZ_REG_F11,
 SYSZ_REG_F12,
 SYSZ_REG_F13,
 SYSZ_REG_F14,
 SYSZ_REG_F15,

 SYSZ_REG_R0L,

 SYSZ_REG_ENDING,
} sysz_reg;



typedef struct sysz_op_mem {
 uint8_t base;


 uint8_t index;
 uint64_t length;
 int64_t disp;
} sysz_op_mem;


typedef struct cs_sysz_op {
 sysz_op_type type;
 union {
  sysz_reg reg;
  int64_t imm;
  sysz_op_mem mem;
 };
} cs_sysz_op;


typedef struct cs_sysz {
 sysz_cc cc;


 uint8_t op_count;
 cs_sysz_op operands[6];
} cs_sysz;


typedef enum sysz_insn {
 SYSZ_INS_INVALID = 0,

 SYSZ_INS_A,
 SYSZ_INS_ADB,
 SYSZ_INS_ADBR,
 SYSZ_INS_AEB,
 SYSZ_INS_AEBR,
 SYSZ_INS_AFI,
 SYSZ_INS_AG,
 SYSZ_INS_AGF,
 SYSZ_INS_AGFI,
 SYSZ_INS_AGFR,
 SYSZ_INS_AGHI,
 SYSZ_INS_AGHIK,
 SYSZ_INS_AGR,
 SYSZ_INS_AGRK,
 SYSZ_INS_AGSI,
 SYSZ_INS_AH,
 SYSZ_INS_AHI,
 SYSZ_INS_AHIK,
 SYSZ_INS_AHY,
 SYSZ_INS_AIH,
 SYSZ_INS_AL,
 SYSZ_INS_ALC,
 SYSZ_INS_ALCG,
 SYSZ_INS_ALCGR,
 SYSZ_INS_ALCR,
 SYSZ_INS_ALFI,
 SYSZ_INS_ALG,
 SYSZ_INS_ALGF,
 SYSZ_INS_ALGFI,
 SYSZ_INS_ALGFR,
 SYSZ_INS_ALGHSIK,
 SYSZ_INS_ALGR,
 SYSZ_INS_ALGRK,
 SYSZ_INS_ALHSIK,
 SYSZ_INS_ALR,
 SYSZ_INS_ALRK,
 SYSZ_INS_ALY,
 SYSZ_INS_AR,
 SYSZ_INS_ARK,
 SYSZ_INS_ASI,
 SYSZ_INS_AXBR,
 SYSZ_INS_AY,
 SYSZ_INS_BCR,
 SYSZ_INS_BRC,
 SYSZ_INS_BRCL,
 SYSZ_INS_CGIJ,
 SYSZ_INS_CGRJ,
 SYSZ_INS_CIJ,
 SYSZ_INS_CLGIJ,
 SYSZ_INS_CLGRJ,
 SYSZ_INS_CLIJ,
 SYSZ_INS_CLRJ,
 SYSZ_INS_CRJ,
 SYSZ_INS_BER,
 SYSZ_INS_JE,
 SYSZ_INS_JGE,
 SYSZ_INS_LOCE,
 SYSZ_INS_LOCGE,
 SYSZ_INS_LOCGRE,
 SYSZ_INS_LOCRE,
 SYSZ_INS_STOCE,
 SYSZ_INS_STOCGE,
 SYSZ_INS_BHR,
 SYSZ_INS_BHER,
 SYSZ_INS_JHE,
 SYSZ_INS_JGHE,
 SYSZ_INS_LOCHE,
 SYSZ_INS_LOCGHE,
 SYSZ_INS_LOCGRHE,
 SYSZ_INS_LOCRHE,
 SYSZ_INS_STOCHE,
 SYSZ_INS_STOCGHE,
 SYSZ_INS_JH,
 SYSZ_INS_JGH,
 SYSZ_INS_LOCH,
 SYSZ_INS_LOCGH,
 SYSZ_INS_LOCGRH,
 SYSZ_INS_LOCRH,
 SYSZ_INS_STOCH,
 SYSZ_INS_STOCGH,
 SYSZ_INS_CGIJNLH,
 SYSZ_INS_CGRJNLH,
 SYSZ_INS_CIJNLH,
 SYSZ_INS_CLGIJNLH,
 SYSZ_INS_CLGRJNLH,
 SYSZ_INS_CLIJNLH,
 SYSZ_INS_CLRJNLH,
 SYSZ_INS_CRJNLH,
 SYSZ_INS_CGIJE,
 SYSZ_INS_CGRJE,
 SYSZ_INS_CIJE,
 SYSZ_INS_CLGIJE,
 SYSZ_INS_CLGRJE,
 SYSZ_INS_CLIJE,
 SYSZ_INS_CLRJE,
 SYSZ_INS_CRJE,
 SYSZ_INS_CGIJNLE,
 SYSZ_INS_CGRJNLE,
 SYSZ_INS_CIJNLE,
 SYSZ_INS_CLGIJNLE,
 SYSZ_INS_CLGRJNLE,
 SYSZ_INS_CLIJNLE,
 SYSZ_INS_CLRJNLE,
 SYSZ_INS_CRJNLE,
 SYSZ_INS_CGIJH,
 SYSZ_INS_CGRJH,
 SYSZ_INS_CIJH,
 SYSZ_INS_CLGIJH,
 SYSZ_INS_CLGRJH,
 SYSZ_INS_CLIJH,
 SYSZ_INS_CLRJH,
 SYSZ_INS_CRJH,
 SYSZ_INS_CGIJNL,
 SYSZ_INS_CGRJNL,
 SYSZ_INS_CIJNL,
 SYSZ_INS_CLGIJNL,
 SYSZ_INS_CLGRJNL,
 SYSZ_INS_CLIJNL,
 SYSZ_INS_CLRJNL,
 SYSZ_INS_CRJNL,
 SYSZ_INS_CGIJHE,
 SYSZ_INS_CGRJHE,
 SYSZ_INS_CIJHE,
 SYSZ_INS_CLGIJHE,
 SYSZ_INS_CLGRJHE,
 SYSZ_INS_CLIJHE,
 SYSZ_INS_CLRJHE,
 SYSZ_INS_CRJHE,
 SYSZ_INS_CGIJNHE,
 SYSZ_INS_CGRJNHE,
 SYSZ_INS_CIJNHE,
 SYSZ_INS_CLGIJNHE,
 SYSZ_INS_CLGRJNHE,
 SYSZ_INS_CLIJNHE,
 SYSZ_INS_CLRJNHE,
 SYSZ_INS_CRJNHE,
 SYSZ_INS_CGIJL,
 SYSZ_INS_CGRJL,
 SYSZ_INS_CIJL,
 SYSZ_INS_CLGIJL,
 SYSZ_INS_CLGRJL,
 SYSZ_INS_CLIJL,
 SYSZ_INS_CLRJL,
 SYSZ_INS_CRJL,
 SYSZ_INS_CGIJNH,
 SYSZ_INS_CGRJNH,
 SYSZ_INS_CIJNH,
 SYSZ_INS_CLGIJNH,
 SYSZ_INS_CLGRJNH,
 SYSZ_INS_CLIJNH,
 SYSZ_INS_CLRJNH,
 SYSZ_INS_CRJNH,
 SYSZ_INS_CGIJLE,
 SYSZ_INS_CGRJLE,
 SYSZ_INS_CIJLE,
 SYSZ_INS_CLGIJLE,
 SYSZ_INS_CLGRJLE,
 SYSZ_INS_CLIJLE,
 SYSZ_INS_CLRJLE,
 SYSZ_INS_CRJLE,
 SYSZ_INS_CGIJNE,
 SYSZ_INS_CGRJNE,
 SYSZ_INS_CIJNE,
 SYSZ_INS_CLGIJNE,
 SYSZ_INS_CLGRJNE,
 SYSZ_INS_CLIJNE,
 SYSZ_INS_CLRJNE,
 SYSZ_INS_CRJNE,
 SYSZ_INS_CGIJLH,
 SYSZ_INS_CGRJLH,
 SYSZ_INS_CIJLH,
 SYSZ_INS_CLGIJLH,
 SYSZ_INS_CLGRJLH,
 SYSZ_INS_CLIJLH,
 SYSZ_INS_CLRJLH,
 SYSZ_INS_CRJLH,
 SYSZ_INS_BLR,
 SYSZ_INS_BLER,
 SYSZ_INS_JLE,
 SYSZ_INS_JGLE,
 SYSZ_INS_LOCLE,
 SYSZ_INS_LOCGLE,
 SYSZ_INS_LOCGRLE,
 SYSZ_INS_LOCRLE,
 SYSZ_INS_STOCLE,
 SYSZ_INS_STOCGLE,
 SYSZ_INS_BLHR,
 SYSZ_INS_JLH,
 SYSZ_INS_JGLH,
 SYSZ_INS_LOCLH,
 SYSZ_INS_LOCGLH,
 SYSZ_INS_LOCGRLH,
 SYSZ_INS_LOCRLH,
 SYSZ_INS_STOCLH,
 SYSZ_INS_STOCGLH,
 SYSZ_INS_JL,
 SYSZ_INS_JGL,
 SYSZ_INS_LOCL,
 SYSZ_INS_LOCGL,
 SYSZ_INS_LOCGRL,
 SYSZ_INS_LOCRL,
 SYSZ_INS_LOC,
 SYSZ_INS_LOCG,
 SYSZ_INS_LOCGR,
 SYSZ_INS_LOCR,
 SYSZ_INS_STOCL,
 SYSZ_INS_STOCGL,
 SYSZ_INS_BNER,
 SYSZ_INS_JNE,
 SYSZ_INS_JGNE,
 SYSZ_INS_LOCNE,
 SYSZ_INS_LOCGNE,
 SYSZ_INS_LOCGRNE,
 SYSZ_INS_LOCRNE,
 SYSZ_INS_STOCNE,
 SYSZ_INS_STOCGNE,
 SYSZ_INS_BNHR,
 SYSZ_INS_BNHER,
 SYSZ_INS_JNHE,
 SYSZ_INS_JGNHE,
 SYSZ_INS_LOCNHE,
 SYSZ_INS_LOCGNHE,
 SYSZ_INS_LOCGRNHE,
 SYSZ_INS_LOCRNHE,
 SYSZ_INS_STOCNHE,
 SYSZ_INS_STOCGNHE,
 SYSZ_INS_JNH,
 SYSZ_INS_JGNH,
 SYSZ_INS_LOCNH,
 SYSZ_INS_LOCGNH,
 SYSZ_INS_LOCGRNH,
 SYSZ_INS_LOCRNH,
 SYSZ_INS_STOCNH,
 SYSZ_INS_STOCGNH,
 SYSZ_INS_BNLR,
 SYSZ_INS_BNLER,
 SYSZ_INS_JNLE,
 SYSZ_INS_JGNLE,
 SYSZ_INS_LOCNLE,
 SYSZ_INS_LOCGNLE,
 SYSZ_INS_LOCGRNLE,
 SYSZ_INS_LOCRNLE,
 SYSZ_INS_STOCNLE,
 SYSZ_INS_STOCGNLE,
 SYSZ_INS_BNLHR,
 SYSZ_INS_JNLH,
 SYSZ_INS_JGNLH,
 SYSZ_INS_LOCNLH,
 SYSZ_INS_LOCGNLH,
 SYSZ_INS_LOCGRNLH,
 SYSZ_INS_LOCRNLH,
 SYSZ_INS_STOCNLH,
 SYSZ_INS_STOCGNLH,
 SYSZ_INS_JNL,
 SYSZ_INS_JGNL,
 SYSZ_INS_LOCNL,
 SYSZ_INS_LOCGNL,
 SYSZ_INS_LOCGRNL,
 SYSZ_INS_LOCRNL,
 SYSZ_INS_STOCNL,
 SYSZ_INS_STOCGNL,
 SYSZ_INS_BNOR,
 SYSZ_INS_JNO,
 SYSZ_INS_JGNO,
 SYSZ_INS_LOCNO,
 SYSZ_INS_LOCGNO,
 SYSZ_INS_LOCGRNO,
 SYSZ_INS_LOCRNO,
 SYSZ_INS_STOCNO,
 SYSZ_INS_STOCGNO,
 SYSZ_INS_BOR,
 SYSZ_INS_JO,
 SYSZ_INS_JGO,
 SYSZ_INS_LOCO,
 SYSZ_INS_LOCGO,
 SYSZ_INS_LOCGRO,
 SYSZ_INS_LOCRO,
 SYSZ_INS_STOCO,
 SYSZ_INS_STOCGO,
 SYSZ_INS_STOC,
 SYSZ_INS_STOCG,
 SYSZ_INS_BASR,
 SYSZ_INS_BR,
 SYSZ_INS_BRAS,
 SYSZ_INS_BRASL,
 SYSZ_INS_J,
 SYSZ_INS_JG,
 SYSZ_INS_BRCT,
 SYSZ_INS_BRCTG,
 SYSZ_INS_C,
 SYSZ_INS_CDB,
 SYSZ_INS_CDBR,
 SYSZ_INS_CDFBR,
 SYSZ_INS_CDGBR,
 SYSZ_INS_CDLFBR,
 SYSZ_INS_CDLGBR,
 SYSZ_INS_CEB,
 SYSZ_INS_CEBR,
 SYSZ_INS_CEFBR,
 SYSZ_INS_CEGBR,
 SYSZ_INS_CELFBR,
 SYSZ_INS_CELGBR,
 SYSZ_INS_CFDBR,
 SYSZ_INS_CFEBR,
 SYSZ_INS_CFI,
 SYSZ_INS_CFXBR,
 SYSZ_INS_CG,
 SYSZ_INS_CGDBR,
 SYSZ_INS_CGEBR,
 SYSZ_INS_CGF,
 SYSZ_INS_CGFI,
 SYSZ_INS_CGFR,
 SYSZ_INS_CGFRL,
 SYSZ_INS_CGH,
 SYSZ_INS_CGHI,
 SYSZ_INS_CGHRL,
 SYSZ_INS_CGHSI,
 SYSZ_INS_CGR,
 SYSZ_INS_CGRL,
 SYSZ_INS_CGXBR,
 SYSZ_INS_CH,
 SYSZ_INS_CHF,
 SYSZ_INS_CHHSI,
 SYSZ_INS_CHI,
 SYSZ_INS_CHRL,
 SYSZ_INS_CHSI,
 SYSZ_INS_CHY,
 SYSZ_INS_CIH,
 SYSZ_INS_CL,
 SYSZ_INS_CLC,
 SYSZ_INS_CLFDBR,
 SYSZ_INS_CLFEBR,
 SYSZ_INS_CLFHSI,
 SYSZ_INS_CLFI,
 SYSZ_INS_CLFXBR,
 SYSZ_INS_CLG,
 SYSZ_INS_CLGDBR,
 SYSZ_INS_CLGEBR,
 SYSZ_INS_CLGF,
 SYSZ_INS_CLGFI,
 SYSZ_INS_CLGFR,
 SYSZ_INS_CLGFRL,
 SYSZ_INS_CLGHRL,
 SYSZ_INS_CLGHSI,
 SYSZ_INS_CLGR,
 SYSZ_INS_CLGRL,
 SYSZ_INS_CLGXBR,
 SYSZ_INS_CLHF,
 SYSZ_INS_CLHHSI,
 SYSZ_INS_CLHRL,
 SYSZ_INS_CLI,
 SYSZ_INS_CLIH,
 SYSZ_INS_CLIY,
 SYSZ_INS_CLR,
 SYSZ_INS_CLRL,
 SYSZ_INS_CLST,
 SYSZ_INS_CLY,
 SYSZ_INS_CPSDR,
 SYSZ_INS_CR,
 SYSZ_INS_CRL,
 SYSZ_INS_CS,
 SYSZ_INS_CSG,
 SYSZ_INS_CSY,
 SYSZ_INS_CXBR,
 SYSZ_INS_CXFBR,
 SYSZ_INS_CXGBR,
 SYSZ_INS_CXLFBR,
 SYSZ_INS_CXLGBR,
 SYSZ_INS_CY,
 SYSZ_INS_DDB,
 SYSZ_INS_DDBR,
 SYSZ_INS_DEB,
 SYSZ_INS_DEBR,
 SYSZ_INS_DL,
 SYSZ_INS_DLG,
 SYSZ_INS_DLGR,
 SYSZ_INS_DLR,
 SYSZ_INS_DSG,
 SYSZ_INS_DSGF,
 SYSZ_INS_DSGFR,
 SYSZ_INS_DSGR,
 SYSZ_INS_DXBR,
 SYSZ_INS_EAR,
 SYSZ_INS_FIDBR,
 SYSZ_INS_FIDBRA,
 SYSZ_INS_FIEBR,
 SYSZ_INS_FIEBRA,
 SYSZ_INS_FIXBR,
 SYSZ_INS_FIXBRA,
 SYSZ_INS_FLOGR,
 SYSZ_INS_IC,
 SYSZ_INS_ICY,
 SYSZ_INS_IIHF,
 SYSZ_INS_IIHH,
 SYSZ_INS_IIHL,
 SYSZ_INS_IILF,
 SYSZ_INS_IILH,
 SYSZ_INS_IILL,
 SYSZ_INS_IPM,
 SYSZ_INS_L,
 SYSZ_INS_LA,
 SYSZ_INS_LAA,
 SYSZ_INS_LAAG,
 SYSZ_INS_LAAL,
 SYSZ_INS_LAALG,
 SYSZ_INS_LAN,
 SYSZ_INS_LANG,
 SYSZ_INS_LAO,
 SYSZ_INS_LAOG,
 SYSZ_INS_LARL,
 SYSZ_INS_LAX,
 SYSZ_INS_LAXG,
 SYSZ_INS_LAY,
 SYSZ_INS_LB,
 SYSZ_INS_LBH,
 SYSZ_INS_LBR,
 SYSZ_INS_LCDBR,
 SYSZ_INS_LCEBR,
 SYSZ_INS_LCGFR,
 SYSZ_INS_LCGR,
 SYSZ_INS_LCR,
 SYSZ_INS_LCXBR,
 SYSZ_INS_LD,
 SYSZ_INS_LDEB,
 SYSZ_INS_LDEBR,
 SYSZ_INS_LDGR,
 SYSZ_INS_LDR,
 SYSZ_INS_LDXBR,
 SYSZ_INS_LDXBRA,
 SYSZ_INS_LDY,
 SYSZ_INS_LE,
 SYSZ_INS_LEDBR,
 SYSZ_INS_LEDBRA,
 SYSZ_INS_LER,
 SYSZ_INS_LEXBR,
 SYSZ_INS_LEXBRA,
 SYSZ_INS_LEY,
 SYSZ_INS_LFH,
 SYSZ_INS_LG,
 SYSZ_INS_LGB,
 SYSZ_INS_LGBR,
 SYSZ_INS_LGDR,
 SYSZ_INS_LGF,
 SYSZ_INS_LGFI,
 SYSZ_INS_LGFR,
 SYSZ_INS_LGFRL,
 SYSZ_INS_LGH,
 SYSZ_INS_LGHI,
 SYSZ_INS_LGHR,
 SYSZ_INS_LGHRL,
 SYSZ_INS_LGR,
 SYSZ_INS_LGRL,
 SYSZ_INS_LH,
 SYSZ_INS_LHH,
 SYSZ_INS_LHI,
 SYSZ_INS_LHR,
 SYSZ_INS_LHRL,
 SYSZ_INS_LHY,
 SYSZ_INS_LLC,
 SYSZ_INS_LLCH,
 SYSZ_INS_LLCR,
 SYSZ_INS_LLGC,
 SYSZ_INS_LLGCR,
 SYSZ_INS_LLGF,
 SYSZ_INS_LLGFR,
 SYSZ_INS_LLGFRL,
 SYSZ_INS_LLGH,
 SYSZ_INS_LLGHR,
 SYSZ_INS_LLGHRL,
 SYSZ_INS_LLH,
 SYSZ_INS_LLHH,
 SYSZ_INS_LLHR,
 SYSZ_INS_LLHRL,
 SYSZ_INS_LLIHF,
 SYSZ_INS_LLIHH,
 SYSZ_INS_LLIHL,
 SYSZ_INS_LLILF,
 SYSZ_INS_LLILH,
 SYSZ_INS_LLILL,
 SYSZ_INS_LMG,
 SYSZ_INS_LNDBR,
 SYSZ_INS_LNEBR,
 SYSZ_INS_LNGFR,
 SYSZ_INS_LNGR,
 SYSZ_INS_LNR,
 SYSZ_INS_LNXBR,
 SYSZ_INS_LPDBR,
 SYSZ_INS_LPEBR,
 SYSZ_INS_LPGFR,
 SYSZ_INS_LPGR,
 SYSZ_INS_LPR,
 SYSZ_INS_LPXBR,
 SYSZ_INS_LR,
 SYSZ_INS_LRL,
 SYSZ_INS_LRV,
 SYSZ_INS_LRVG,
 SYSZ_INS_LRVGR,
 SYSZ_INS_LRVR,
 SYSZ_INS_LT,
 SYSZ_INS_LTDBR,
 SYSZ_INS_LTEBR,
 SYSZ_INS_LTG,
 SYSZ_INS_LTGF,
 SYSZ_INS_LTGFR,
 SYSZ_INS_LTGR,
 SYSZ_INS_LTR,
 SYSZ_INS_LTXBR,
 SYSZ_INS_LXDB,
 SYSZ_INS_LXDBR,
 SYSZ_INS_LXEB,
 SYSZ_INS_LXEBR,
 SYSZ_INS_LXR,
 SYSZ_INS_LY,
 SYSZ_INS_LZDR,
 SYSZ_INS_LZER,
 SYSZ_INS_LZXR,
 SYSZ_INS_MADB,
 SYSZ_INS_MADBR,
 SYSZ_INS_MAEB,
 SYSZ_INS_MAEBR,
 SYSZ_INS_MDB,
 SYSZ_INS_MDBR,
 SYSZ_INS_MDEB,
 SYSZ_INS_MDEBR,
 SYSZ_INS_MEEB,
 SYSZ_INS_MEEBR,
 SYSZ_INS_MGHI,
 SYSZ_INS_MH,
 SYSZ_INS_MHI,
 SYSZ_INS_MHY,
 SYSZ_INS_MLG,
 SYSZ_INS_MLGR,
 SYSZ_INS_MS,
 SYSZ_INS_MSDB,
 SYSZ_INS_MSDBR,
 SYSZ_INS_MSEB,
 SYSZ_INS_MSEBR,
 SYSZ_INS_MSFI,
 SYSZ_INS_MSG,
 SYSZ_INS_MSGF,
 SYSZ_INS_MSGFI,
 SYSZ_INS_MSGFR,
 SYSZ_INS_MSGR,
 SYSZ_INS_MSR,
 SYSZ_INS_MSY,
 SYSZ_INS_MVC,
 SYSZ_INS_MVGHI,
 SYSZ_INS_MVHHI,
 SYSZ_INS_MVHI,
 SYSZ_INS_MVI,
 SYSZ_INS_MVIY,
 SYSZ_INS_MVST,
 SYSZ_INS_MXBR,
 SYSZ_INS_MXDB,
 SYSZ_INS_MXDBR,
 SYSZ_INS_N,
 SYSZ_INS_NC,
 SYSZ_INS_NG,
 SYSZ_INS_NGR,
 SYSZ_INS_NGRK,
 SYSZ_INS_NI,
 SYSZ_INS_NIHF,
 SYSZ_INS_NIHH,
 SYSZ_INS_NIHL,
 SYSZ_INS_NILF,
 SYSZ_INS_NILH,
 SYSZ_INS_NILL,
 SYSZ_INS_NIY,
 SYSZ_INS_NR,
 SYSZ_INS_NRK,
 SYSZ_INS_NY,
 SYSZ_INS_O,
 SYSZ_INS_OC,
 SYSZ_INS_OG,
 SYSZ_INS_OGR,
 SYSZ_INS_OGRK,
 SYSZ_INS_OI,
 SYSZ_INS_OIHF,
 SYSZ_INS_OIHH,
 SYSZ_INS_OIHL,
 SYSZ_INS_OILF,
 SYSZ_INS_OILH,
 SYSZ_INS_OILL,
 SYSZ_INS_OIY,
 SYSZ_INS_OR,
 SYSZ_INS_ORK,
 SYSZ_INS_OY,
 SYSZ_INS_PFD,
 SYSZ_INS_PFDRL,
 SYSZ_INS_RISBG,
 SYSZ_INS_RISBHG,
 SYSZ_INS_RISBLG,
 SYSZ_INS_RLL,
 SYSZ_INS_RLLG,
 SYSZ_INS_RNSBG,
 SYSZ_INS_ROSBG,
 SYSZ_INS_RXSBG,
 SYSZ_INS_S,
 SYSZ_INS_SDB,
 SYSZ_INS_SDBR,
 SYSZ_INS_SEB,
 SYSZ_INS_SEBR,
 SYSZ_INS_SG,
 SYSZ_INS_SGF,
 SYSZ_INS_SGFR,
 SYSZ_INS_SGR,
 SYSZ_INS_SGRK,
 SYSZ_INS_SH,
 SYSZ_INS_SHY,
 SYSZ_INS_SL,
 SYSZ_INS_SLB,
 SYSZ_INS_SLBG,
 SYSZ_INS_SLBR,
 SYSZ_INS_SLFI,
 SYSZ_INS_SLG,
 SYSZ_INS_SLBGR,
 SYSZ_INS_SLGF,
 SYSZ_INS_SLGFI,
 SYSZ_INS_SLGFR,
 SYSZ_INS_SLGR,
 SYSZ_INS_SLGRK,
 SYSZ_INS_SLL,
 SYSZ_INS_SLLG,
 SYSZ_INS_SLLK,
 SYSZ_INS_SLR,
 SYSZ_INS_SLRK,
 SYSZ_INS_SLY,
 SYSZ_INS_SQDB,
 SYSZ_INS_SQDBR,
 SYSZ_INS_SQEB,
 SYSZ_INS_SQEBR,
 SYSZ_INS_SQXBR,
 SYSZ_INS_SR,
 SYSZ_INS_SRA,
 SYSZ_INS_SRAG,
 SYSZ_INS_SRAK,
 SYSZ_INS_SRK,
 SYSZ_INS_SRL,
 SYSZ_INS_SRLG,
 SYSZ_INS_SRLK,
 SYSZ_INS_SRST,
 SYSZ_INS_ST,
 SYSZ_INS_STC,
 SYSZ_INS_STCH,
 SYSZ_INS_STCY,
 SYSZ_INS_STD,
 SYSZ_INS_STDY,
 SYSZ_INS_STE,
 SYSZ_INS_STEY,
 SYSZ_INS_STFH,
 SYSZ_INS_STG,
 SYSZ_INS_STGRL,
 SYSZ_INS_STH,
 SYSZ_INS_STHH,
 SYSZ_INS_STHRL,
 SYSZ_INS_STHY,
 SYSZ_INS_STMG,
 SYSZ_INS_STRL,
 SYSZ_INS_STRV,
 SYSZ_INS_STRVG,
 SYSZ_INS_STY,
 SYSZ_INS_SXBR,
 SYSZ_INS_SY,
 SYSZ_INS_TM,
 SYSZ_INS_TMHH,
 SYSZ_INS_TMHL,
 SYSZ_INS_TMLH,
 SYSZ_INS_TMLL,
 SYSZ_INS_TMY,
 SYSZ_INS_X,
 SYSZ_INS_XC,
 SYSZ_INS_XG,
 SYSZ_INS_XGR,
 SYSZ_INS_XGRK,
 SYSZ_INS_XI,
 SYSZ_INS_XIHF,
 SYSZ_INS_XILF,
 SYSZ_INS_XIY,
 SYSZ_INS_XR,
 SYSZ_INS_XRK,
 SYSZ_INS_XY,

 SYSZ_INS_ENDING,
} sysz_insn;


typedef enum sysz_insn_group {
 SYSZ_GRP_INVALID = 0,



 SYSZ_GRP_JUMP,


 SYSZ_GRP_DISTINCTOPS = 128,
 SYSZ_GRP_FPEXTENSION,
 SYSZ_GRP_HIGHWORD,
 SYSZ_GRP_INTERLOCKEDACCESS1,
 SYSZ_GRP_LOADSTOREONCOND,

 SYSZ_GRP_ENDING,
} sysz_insn_group;
# 274 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/x86.h" 1 3 4
# 19 "/usr/local/Cellar/capstone/4.0.2/include/capstone/x86.h" 3 4
typedef enum x86_reg {
 X86_REG_INVALID = 0,
 X86_REG_AH, X86_REG_AL, X86_REG_AX, X86_REG_BH, X86_REG_BL,
 X86_REG_BP, X86_REG_BPL, X86_REG_BX, X86_REG_CH, X86_REG_CL,
 X86_REG_CS, X86_REG_CX, X86_REG_DH, X86_REG_DI, X86_REG_DIL,
 X86_REG_DL, X86_REG_DS, X86_REG_DX, X86_REG_EAX, X86_REG_EBP,
 X86_REG_EBX, X86_REG_ECX, X86_REG_EDI, X86_REG_EDX, X86_REG_EFLAGS,
 X86_REG_EIP, X86_REG_EIZ, X86_REG_ES, X86_REG_ESI, X86_REG_ESP,
 X86_REG_FPSW, X86_REG_FS, X86_REG_GS, X86_REG_IP, X86_REG_RAX,
 X86_REG_RBP, X86_REG_RBX, X86_REG_RCX, X86_REG_RDI, X86_REG_RDX,
 X86_REG_RIP, X86_REG_RIZ, X86_REG_RSI, X86_REG_RSP, X86_REG_SI,
 X86_REG_SIL, X86_REG_SP, X86_REG_SPL, X86_REG_SS, X86_REG_CR0,
 X86_REG_CR1, X86_REG_CR2, X86_REG_CR3, X86_REG_CR4, X86_REG_CR5,
 X86_REG_CR6, X86_REG_CR7, X86_REG_CR8, X86_REG_CR9, X86_REG_CR10,
 X86_REG_CR11, X86_REG_CR12, X86_REG_CR13, X86_REG_CR14, X86_REG_CR15,
 X86_REG_DR0, X86_REG_DR1, X86_REG_DR2, X86_REG_DR3, X86_REG_DR4,
 X86_REG_DR5, X86_REG_DR6, X86_REG_DR7, X86_REG_DR8, X86_REG_DR9,
 X86_REG_DR10, X86_REG_DR11, X86_REG_DR12, X86_REG_DR13, X86_REG_DR14,
 X86_REG_DR15, X86_REG_FP0, X86_REG_FP1, X86_REG_FP2, X86_REG_FP3,
 X86_REG_FP4, X86_REG_FP5, X86_REG_FP6, X86_REG_FP7,
 X86_REG_K0, X86_REG_K1, X86_REG_K2, X86_REG_K3, X86_REG_K4,
 X86_REG_K5, X86_REG_K6, X86_REG_K7, X86_REG_MM0, X86_REG_MM1,
 X86_REG_MM2, X86_REG_MM3, X86_REG_MM4, X86_REG_MM5, X86_REG_MM6,
 X86_REG_MM7, X86_REG_R8, X86_REG_R9, X86_REG_R10, X86_REG_R11,
 X86_REG_R12, X86_REG_R13, X86_REG_R14, X86_REG_R15,
 X86_REG_ST0, X86_REG_ST1, X86_REG_ST2, X86_REG_ST3,
 X86_REG_ST4, X86_REG_ST5, X86_REG_ST6, X86_REG_ST7,
 X86_REG_XMM0, X86_REG_XMM1, X86_REG_XMM2, X86_REG_XMM3, X86_REG_XMM4,
 X86_REG_XMM5, X86_REG_XMM6, X86_REG_XMM7, X86_REG_XMM8, X86_REG_XMM9,
 X86_REG_XMM10, X86_REG_XMM11, X86_REG_XMM12, X86_REG_XMM13, X86_REG_XMM14,
 X86_REG_XMM15, X86_REG_XMM16, X86_REG_XMM17, X86_REG_XMM18, X86_REG_XMM19,
 X86_REG_XMM20, X86_REG_XMM21, X86_REG_XMM22, X86_REG_XMM23, X86_REG_XMM24,
 X86_REG_XMM25, X86_REG_XMM26, X86_REG_XMM27, X86_REG_XMM28, X86_REG_XMM29,
 X86_REG_XMM30, X86_REG_XMM31, X86_REG_YMM0, X86_REG_YMM1, X86_REG_YMM2,
 X86_REG_YMM3, X86_REG_YMM4, X86_REG_YMM5, X86_REG_YMM6, X86_REG_YMM7,
 X86_REG_YMM8, X86_REG_YMM9, X86_REG_YMM10, X86_REG_YMM11, X86_REG_YMM12,
 X86_REG_YMM13, X86_REG_YMM14, X86_REG_YMM15, X86_REG_YMM16, X86_REG_YMM17,
 X86_REG_YMM18, X86_REG_YMM19, X86_REG_YMM20, X86_REG_YMM21, X86_REG_YMM22,
 X86_REG_YMM23, X86_REG_YMM24, X86_REG_YMM25, X86_REG_YMM26, X86_REG_YMM27,
 X86_REG_YMM28, X86_REG_YMM29, X86_REG_YMM30, X86_REG_YMM31, X86_REG_ZMM0,
 X86_REG_ZMM1, X86_REG_ZMM2, X86_REG_ZMM3, X86_REG_ZMM4, X86_REG_ZMM5,
 X86_REG_ZMM6, X86_REG_ZMM7, X86_REG_ZMM8, X86_REG_ZMM9, X86_REG_ZMM10,
 X86_REG_ZMM11, X86_REG_ZMM12, X86_REG_ZMM13, X86_REG_ZMM14, X86_REG_ZMM15,
 X86_REG_ZMM16, X86_REG_ZMM17, X86_REG_ZMM18, X86_REG_ZMM19, X86_REG_ZMM20,
 X86_REG_ZMM21, X86_REG_ZMM22, X86_REG_ZMM23, X86_REG_ZMM24, X86_REG_ZMM25,
 X86_REG_ZMM26, X86_REG_ZMM27, X86_REG_ZMM28, X86_REG_ZMM29, X86_REG_ZMM30,
 X86_REG_ZMM31, X86_REG_R8B, X86_REG_R9B, X86_REG_R10B, X86_REG_R11B,
 X86_REG_R12B, X86_REG_R13B, X86_REG_R14B, X86_REG_R15B, X86_REG_R8D,
 X86_REG_R9D, X86_REG_R10D, X86_REG_R11D, X86_REG_R12D, X86_REG_R13D,
 X86_REG_R14D, X86_REG_R15D, X86_REG_R8W, X86_REG_R9W, X86_REG_R10W,
 X86_REG_R11W, X86_REG_R12W, X86_REG_R13W, X86_REG_R14W, X86_REG_R15W,

 X86_REG_ENDING
} x86_reg;
# 158 "/usr/local/Cellar/capstone/4.0.2/include/capstone/x86.h" 3 4
typedef enum x86_op_type {
 X86_OP_INVALID = 0,
 X86_OP_REG,
 X86_OP_IMM,
 X86_OP_MEM,
} x86_op_type;


typedef enum x86_xop_cc {
 X86_XOP_CC_INVALID = 0,
 X86_XOP_CC_LT,
 X86_XOP_CC_LE,
 X86_XOP_CC_GT,
 X86_XOP_CC_GE,
 X86_XOP_CC_EQ,
 X86_XOP_CC_NEQ,
 X86_XOP_CC_FALSE,
 X86_XOP_CC_TRUE,
} x86_xop_cc;


typedef enum x86_avx_bcast {
 X86_AVX_BCAST_INVALID = 0,
 X86_AVX_BCAST_2,
 X86_AVX_BCAST_4,
 X86_AVX_BCAST_8,
 X86_AVX_BCAST_16,
} x86_avx_bcast;


typedef enum x86_sse_cc {
 X86_SSE_CC_INVALID = 0,
 X86_SSE_CC_EQ,
 X86_SSE_CC_LT,
 X86_SSE_CC_LE,
 X86_SSE_CC_UNORD,
 X86_SSE_CC_NEQ,
 X86_SSE_CC_NLT,
 X86_SSE_CC_NLE,
 X86_SSE_CC_ORD,
} x86_sse_cc;


typedef enum x86_avx_cc {
 X86_AVX_CC_INVALID = 0,
 X86_AVX_CC_EQ,
 X86_AVX_CC_LT,
 X86_AVX_CC_LE,
 X86_AVX_CC_UNORD,
 X86_AVX_CC_NEQ,
 X86_AVX_CC_NLT,
 X86_AVX_CC_NLE,
 X86_AVX_CC_ORD,
 X86_AVX_CC_EQ_UQ,
 X86_AVX_CC_NGE,
 X86_AVX_CC_NGT,
 X86_AVX_CC_FALSE,
 X86_AVX_CC_NEQ_OQ,
 X86_AVX_CC_GE,
 X86_AVX_CC_GT,
 X86_AVX_CC_TRUE,
 X86_AVX_CC_EQ_OS,
 X86_AVX_CC_LT_OQ,
 X86_AVX_CC_LE_OQ,
 X86_AVX_CC_UNORD_S,
 X86_AVX_CC_NEQ_US,
 X86_AVX_CC_NLT_UQ,
 X86_AVX_CC_NLE_UQ,
 X86_AVX_CC_ORD_S,
 X86_AVX_CC_EQ_US,
 X86_AVX_CC_NGE_UQ,
 X86_AVX_CC_NGT_UQ,
 X86_AVX_CC_FALSE_OS,
 X86_AVX_CC_NEQ_OS,
 X86_AVX_CC_GE_OQ,
 X86_AVX_CC_GT_OQ,
 X86_AVX_CC_TRUE_US,
} x86_avx_cc;


typedef enum x86_avx_rm {
 X86_AVX_RM_INVALID = 0,
 X86_AVX_RM_RN,
 X86_AVX_RM_RD,
 X86_AVX_RM_RU,
 X86_AVX_RM_RZ,
} x86_avx_rm;


typedef enum x86_prefix {
 X86_PREFIX_LOCK = 0xf0,
 X86_PREFIX_REP = 0xf3,
 X86_PREFIX_REPE = 0xf3,
 X86_PREFIX_REPNE = 0xf2,

 X86_PREFIX_CS = 0x2e,
 X86_PREFIX_SS = 0x36,
 X86_PREFIX_DS = 0x3e,
 X86_PREFIX_ES = 0x26,
 X86_PREFIX_FS = 0x64,
 X86_PREFIX_GS = 0x65,

 X86_PREFIX_OPSIZE = 0x66,
 X86_PREFIX_ADDRSIZE = 0x67,
} x86_prefix;



typedef struct x86_op_mem {
 x86_reg segment;
 x86_reg base;
 x86_reg index;
 int scale;
 int64_t disp;
} x86_op_mem;


typedef struct cs_x86_op {
  x86_op_type type;
  union {
   x86_reg reg;
   int64_t imm;
   x86_op_mem mem;
  };


  uint8_t size;




  uint8_t access;


  x86_avx_bcast avx_bcast;


  _Bool avx_zero_opmask;
} cs_x86_op;

typedef struct cs_x86_encoding {

 uint8_t modrm_offset;


 uint8_t disp_offset;
 uint8_t disp_size;


 uint8_t imm_offset;
 uint8_t imm_size;
} cs_x86_encoding;


typedef struct cs_x86 {







 uint8_t prefix[4];




 uint8_t opcode[4];


 uint8_t rex;


 uint8_t addr_size;


 uint8_t modrm;


 uint8_t sib;


 int64_t disp;


 x86_reg sib_index;

 int8_t sib_scale;

 x86_reg sib_base;


 x86_xop_cc xop_cc;


 x86_sse_cc sse_cc;


 x86_avx_cc avx_cc;


 _Bool avx_sae;


 x86_avx_rm avx_rm;


 union {


  uint64_t eflags;


  uint64_t fpu_flags;
 };



 uint8_t op_count;

 cs_x86_op operands[8];

 cs_x86_encoding encoding;
} cs_x86;


typedef enum x86_insn {
 X86_INS_INVALID = 0,

 X86_INS_AAA,
 X86_INS_AAD,
 X86_INS_AAM,
 X86_INS_AAS,
 X86_INS_FABS,
 X86_INS_ADC,
 X86_INS_ADCX,
 X86_INS_ADD,
 X86_INS_ADDPD,
 X86_INS_ADDPS,
 X86_INS_ADDSD,
 X86_INS_ADDSS,
 X86_INS_ADDSUBPD,
 X86_INS_ADDSUBPS,
 X86_INS_FADD,
 X86_INS_FIADD,
 X86_INS_FADDP,
 X86_INS_ADOX,
 X86_INS_AESDECLAST,
 X86_INS_AESDEC,
 X86_INS_AESENCLAST,
 X86_INS_AESENC,
 X86_INS_AESIMC,
 X86_INS_AESKEYGENASSIST,
 X86_INS_AND,
 X86_INS_ANDN,
 X86_INS_ANDNPD,
 X86_INS_ANDNPS,
 X86_INS_ANDPD,
 X86_INS_ANDPS,
 X86_INS_ARPL,
 X86_INS_BEXTR,
 X86_INS_BLCFILL,
 X86_INS_BLCI,
 X86_INS_BLCIC,
 X86_INS_BLCMSK,
 X86_INS_BLCS,
 X86_INS_BLENDPD,
 X86_INS_BLENDPS,
 X86_INS_BLENDVPD,
 X86_INS_BLENDVPS,
 X86_INS_BLSFILL,
 X86_INS_BLSI,
 X86_INS_BLSIC,
 X86_INS_BLSMSK,
 X86_INS_BLSR,
 X86_INS_BOUND,
 X86_INS_BSF,
 X86_INS_BSR,
 X86_INS_BSWAP,
 X86_INS_BT,
 X86_INS_BTC,
 X86_INS_BTR,
 X86_INS_BTS,
 X86_INS_BZHI,
 X86_INS_CALL,
 X86_INS_CBW,
 X86_INS_CDQ,
 X86_INS_CDQE,
 X86_INS_FCHS,
 X86_INS_CLAC,
 X86_INS_CLC,
 X86_INS_CLD,
 X86_INS_CLFLUSH,
 X86_INS_CLFLUSHOPT,
 X86_INS_CLGI,
 X86_INS_CLI,
 X86_INS_CLTS,
 X86_INS_CLWB,
 X86_INS_CMC,
 X86_INS_CMOVA,
 X86_INS_CMOVAE,
 X86_INS_CMOVB,
 X86_INS_CMOVBE,
 X86_INS_FCMOVBE,
 X86_INS_FCMOVB,
 X86_INS_CMOVE,
 X86_INS_FCMOVE,
 X86_INS_CMOVG,
 X86_INS_CMOVGE,
 X86_INS_CMOVL,
 X86_INS_CMOVLE,
 X86_INS_FCMOVNBE,
 X86_INS_FCMOVNB,
 X86_INS_CMOVNE,
 X86_INS_FCMOVNE,
 X86_INS_CMOVNO,
 X86_INS_CMOVNP,
 X86_INS_FCMOVNU,
 X86_INS_CMOVNS,
 X86_INS_CMOVO,
 X86_INS_CMOVP,
 X86_INS_FCMOVU,
 X86_INS_CMOVS,
 X86_INS_CMP,
 X86_INS_CMPSB,
 X86_INS_CMPSQ,
 X86_INS_CMPSW,
 X86_INS_CMPXCHG16B,
 X86_INS_CMPXCHG,
 X86_INS_CMPXCHG8B,
 X86_INS_COMISD,
 X86_INS_COMISS,
 X86_INS_FCOMP,
 X86_INS_FCOMIP,
 X86_INS_FCOMI,
 X86_INS_FCOM,
 X86_INS_FCOS,
 X86_INS_CPUID,
 X86_INS_CQO,
 X86_INS_CRC32,
 X86_INS_CVTDQ2PD,
 X86_INS_CVTDQ2PS,
 X86_INS_CVTPD2DQ,
 X86_INS_CVTPD2PS,
 X86_INS_CVTPS2DQ,
 X86_INS_CVTPS2PD,
 X86_INS_CVTSD2SI,
 X86_INS_CVTSD2SS,
 X86_INS_CVTSI2SD,
 X86_INS_CVTSI2SS,
 X86_INS_CVTSS2SD,
 X86_INS_CVTSS2SI,
 X86_INS_CVTTPD2DQ,
 X86_INS_CVTTPS2DQ,
 X86_INS_CVTTSD2SI,
 X86_INS_CVTTSS2SI,
 X86_INS_CWD,
 X86_INS_CWDE,
 X86_INS_DAA,
 X86_INS_DAS,
 X86_INS_DATA16,
 X86_INS_DEC,
 X86_INS_DIV,
 X86_INS_DIVPD,
 X86_INS_DIVPS,
 X86_INS_FDIVR,
 X86_INS_FIDIVR,
 X86_INS_FDIVRP,
 X86_INS_DIVSD,
 X86_INS_DIVSS,
 X86_INS_FDIV,
 X86_INS_FIDIV,
 X86_INS_FDIVP,
 X86_INS_DPPD,
 X86_INS_DPPS,
 X86_INS_RET,
 X86_INS_ENCLS,
 X86_INS_ENCLU,
 X86_INS_ENTER,
 X86_INS_EXTRACTPS,
 X86_INS_EXTRQ,
 X86_INS_F2XM1,
 X86_INS_LCALL,
 X86_INS_LJMP,
 X86_INS_FBLD,
 X86_INS_FBSTP,
 X86_INS_FCOMPP,
 X86_INS_FDECSTP,
 X86_INS_FEMMS,
 X86_INS_FFREE,
 X86_INS_FICOM,
 X86_INS_FICOMP,
 X86_INS_FINCSTP,
 X86_INS_FLDCW,
 X86_INS_FLDENV,
 X86_INS_FLDL2E,
 X86_INS_FLDL2T,
 X86_INS_FLDLG2,
 X86_INS_FLDLN2,
 X86_INS_FLDPI,
 X86_INS_FNCLEX,
 X86_INS_FNINIT,
 X86_INS_FNOP,
 X86_INS_FNSTCW,
 X86_INS_FNSTSW,
 X86_INS_FPATAN,
 X86_INS_FPREM,
 X86_INS_FPREM1,
 X86_INS_FPTAN,
 X86_INS_FFREEP,
 X86_INS_FRNDINT,
 X86_INS_FRSTOR,
 X86_INS_FNSAVE,
 X86_INS_FSCALE,
 X86_INS_FSETPM,
 X86_INS_FSINCOS,
 X86_INS_FNSTENV,
 X86_INS_FXAM,
 X86_INS_FXRSTOR,
 X86_INS_FXRSTOR64,
 X86_INS_FXSAVE,
 X86_INS_FXSAVE64,
 X86_INS_FXTRACT,
 X86_INS_FYL2X,
 X86_INS_FYL2XP1,
 X86_INS_MOVAPD,
 X86_INS_MOVAPS,
 X86_INS_ORPD,
 X86_INS_ORPS,
 X86_INS_VMOVAPD,
 X86_INS_VMOVAPS,
 X86_INS_XORPD,
 X86_INS_XORPS,
 X86_INS_GETSEC,
 X86_INS_HADDPD,
 X86_INS_HADDPS,
 X86_INS_HLT,
 X86_INS_HSUBPD,
 X86_INS_HSUBPS,
 X86_INS_IDIV,
 X86_INS_FILD,
 X86_INS_IMUL,
 X86_INS_IN,
 X86_INS_INC,
 X86_INS_INSB,
 X86_INS_INSERTPS,
 X86_INS_INSERTQ,
 X86_INS_INSD,
 X86_INS_INSW,
 X86_INS_INT,
 X86_INS_INT1,
 X86_INS_INT3,
 X86_INS_INTO,
 X86_INS_INVD,
 X86_INS_INVEPT,
 X86_INS_INVLPG,
 X86_INS_INVLPGA,
 X86_INS_INVPCID,
 X86_INS_INVVPID,
 X86_INS_IRET,
 X86_INS_IRETD,
 X86_INS_IRETQ,
 X86_INS_FISTTP,
 X86_INS_FIST,
 X86_INS_FISTP,
 X86_INS_UCOMISD,
 X86_INS_UCOMISS,
 X86_INS_VCOMISD,
 X86_INS_VCOMISS,
 X86_INS_VCVTSD2SS,
 X86_INS_VCVTSI2SD,
 X86_INS_VCVTSI2SS,
 X86_INS_VCVTSS2SD,
 X86_INS_VCVTTSD2SI,
 X86_INS_VCVTTSD2USI,
 X86_INS_VCVTTSS2SI,
 X86_INS_VCVTTSS2USI,
 X86_INS_VCVTUSI2SD,
 X86_INS_VCVTUSI2SS,
 X86_INS_VUCOMISD,
 X86_INS_VUCOMISS,
 X86_INS_JAE,
 X86_INS_JA,
 X86_INS_JBE,
 X86_INS_JB,
 X86_INS_JCXZ,
 X86_INS_JECXZ,
 X86_INS_JE,
 X86_INS_JGE,
 X86_INS_JG,
 X86_INS_JLE,
 X86_INS_JL,
 X86_INS_JMP,
 X86_INS_JNE,
 X86_INS_JNO,
 X86_INS_JNP,
 X86_INS_JNS,
 X86_INS_JO,
 X86_INS_JP,
 X86_INS_JRCXZ,
 X86_INS_JS,
 X86_INS_KANDB,
 X86_INS_KANDD,
 X86_INS_KANDNB,
 X86_INS_KANDND,
 X86_INS_KANDNQ,
 X86_INS_KANDNW,
 X86_INS_KANDQ,
 X86_INS_KANDW,
 X86_INS_KMOVB,
 X86_INS_KMOVD,
 X86_INS_KMOVQ,
 X86_INS_KMOVW,
 X86_INS_KNOTB,
 X86_INS_KNOTD,
 X86_INS_KNOTQ,
 X86_INS_KNOTW,
 X86_INS_KORB,
 X86_INS_KORD,
 X86_INS_KORQ,
 X86_INS_KORTESTB,
 X86_INS_KORTESTD,
 X86_INS_KORTESTQ,
 X86_INS_KORTESTW,
 X86_INS_KORW,
 X86_INS_KSHIFTLB,
 X86_INS_KSHIFTLD,
 X86_INS_KSHIFTLQ,
 X86_INS_KSHIFTLW,
 X86_INS_KSHIFTRB,
 X86_INS_KSHIFTRD,
 X86_INS_KSHIFTRQ,
 X86_INS_KSHIFTRW,
 X86_INS_KUNPCKBW,
 X86_INS_KXNORB,
 X86_INS_KXNORD,
 X86_INS_KXNORQ,
 X86_INS_KXNORW,
 X86_INS_KXORB,
 X86_INS_KXORD,
 X86_INS_KXORQ,
 X86_INS_KXORW,
 X86_INS_LAHF,
 X86_INS_LAR,
 X86_INS_LDDQU,
 X86_INS_LDMXCSR,
 X86_INS_LDS,
 X86_INS_FLDZ,
 X86_INS_FLD1,
 X86_INS_FLD,
 X86_INS_LEA,
 X86_INS_LEAVE,
 X86_INS_LES,
 X86_INS_LFENCE,
 X86_INS_LFS,
 X86_INS_LGDT,
 X86_INS_LGS,
 X86_INS_LIDT,
 X86_INS_LLDT,
 X86_INS_LMSW,
 X86_INS_OR,
 X86_INS_SUB,
 X86_INS_XOR,
 X86_INS_LODSB,
 X86_INS_LODSD,
 X86_INS_LODSQ,
 X86_INS_LODSW,
 X86_INS_LOOP,
 X86_INS_LOOPE,
 X86_INS_LOOPNE,
 X86_INS_RETF,
 X86_INS_RETFQ,
 X86_INS_LSL,
 X86_INS_LSS,
 X86_INS_LTR,
 X86_INS_XADD,
 X86_INS_LZCNT,
 X86_INS_MASKMOVDQU,
 X86_INS_MAXPD,
 X86_INS_MAXPS,
 X86_INS_MAXSD,
 X86_INS_MAXSS,
 X86_INS_MFENCE,
 X86_INS_MINPD,
 X86_INS_MINPS,
 X86_INS_MINSD,
 X86_INS_MINSS,
 X86_INS_CVTPD2PI,
 X86_INS_CVTPI2PD,
 X86_INS_CVTPI2PS,
 X86_INS_CVTPS2PI,
 X86_INS_CVTTPD2PI,
 X86_INS_CVTTPS2PI,
 X86_INS_EMMS,
 X86_INS_MASKMOVQ,
 X86_INS_MOVD,
 X86_INS_MOVDQ2Q,
 X86_INS_MOVNTQ,
 X86_INS_MOVQ2DQ,
 X86_INS_MOVQ,
 X86_INS_PABSB,
 X86_INS_PABSD,
 X86_INS_PABSW,
 X86_INS_PACKSSDW,
 X86_INS_PACKSSWB,
 X86_INS_PACKUSWB,
 X86_INS_PADDB,
 X86_INS_PADDD,
 X86_INS_PADDQ,
 X86_INS_PADDSB,
 X86_INS_PADDSW,
 X86_INS_PADDUSB,
 X86_INS_PADDUSW,
 X86_INS_PADDW,
 X86_INS_PALIGNR,
 X86_INS_PANDN,
 X86_INS_PAND,
 X86_INS_PAVGB,
 X86_INS_PAVGW,
 X86_INS_PCMPEQB,
 X86_INS_PCMPEQD,
 X86_INS_PCMPEQW,
 X86_INS_PCMPGTB,
 X86_INS_PCMPGTD,
 X86_INS_PCMPGTW,
 X86_INS_PEXTRW,
 X86_INS_PHADDSW,
 X86_INS_PHADDW,
 X86_INS_PHADDD,
 X86_INS_PHSUBD,
 X86_INS_PHSUBSW,
 X86_INS_PHSUBW,
 X86_INS_PINSRW,
 X86_INS_PMADDUBSW,
 X86_INS_PMADDWD,
 X86_INS_PMAXSW,
 X86_INS_PMAXUB,
 X86_INS_PMINSW,
 X86_INS_PMINUB,
 X86_INS_PMOVMSKB,
 X86_INS_PMULHRSW,
 X86_INS_PMULHUW,
 X86_INS_PMULHW,
 X86_INS_PMULLW,
 X86_INS_PMULUDQ,
 X86_INS_POR,
 X86_INS_PSADBW,
 X86_INS_PSHUFB,
 X86_INS_PSHUFW,
 X86_INS_PSIGNB,
 X86_INS_PSIGND,
 X86_INS_PSIGNW,
 X86_INS_PSLLD,
 X86_INS_PSLLQ,
 X86_INS_PSLLW,
 X86_INS_PSRAD,
 X86_INS_PSRAW,
 X86_INS_PSRLD,
 X86_INS_PSRLQ,
 X86_INS_PSRLW,
 X86_INS_PSUBB,
 X86_INS_PSUBD,
 X86_INS_PSUBQ,
 X86_INS_PSUBSB,
 X86_INS_PSUBSW,
 X86_INS_PSUBUSB,
 X86_INS_PSUBUSW,
 X86_INS_PSUBW,
 X86_INS_PUNPCKHBW,
 X86_INS_PUNPCKHDQ,
 X86_INS_PUNPCKHWD,
 X86_INS_PUNPCKLBW,
 X86_INS_PUNPCKLDQ,
 X86_INS_PUNPCKLWD,
 X86_INS_PXOR,
 X86_INS_MONITOR,
 X86_INS_MONTMUL,
 X86_INS_MOV,
 X86_INS_MOVABS,
 X86_INS_MOVBE,
 X86_INS_MOVDDUP,
 X86_INS_MOVDQA,
 X86_INS_MOVDQU,
 X86_INS_MOVHLPS,
 X86_INS_MOVHPD,
 X86_INS_MOVHPS,
 X86_INS_MOVLHPS,
 X86_INS_MOVLPD,
 X86_INS_MOVLPS,
 X86_INS_MOVMSKPD,
 X86_INS_MOVMSKPS,
 X86_INS_MOVNTDQA,
 X86_INS_MOVNTDQ,
 X86_INS_MOVNTI,
 X86_INS_MOVNTPD,
 X86_INS_MOVNTPS,
 X86_INS_MOVNTSD,
 X86_INS_MOVNTSS,
 X86_INS_MOVSB,
 X86_INS_MOVSD,
 X86_INS_MOVSHDUP,
 X86_INS_MOVSLDUP,
 X86_INS_MOVSQ,
 X86_INS_MOVSS,
 X86_INS_MOVSW,
 X86_INS_MOVSX,
 X86_INS_MOVSXD,
 X86_INS_MOVUPD,
 X86_INS_MOVUPS,
 X86_INS_MOVZX,
 X86_INS_MPSADBW,
 X86_INS_MUL,
 X86_INS_MULPD,
 X86_INS_MULPS,
 X86_INS_MULSD,
 X86_INS_MULSS,
 X86_INS_MULX,
 X86_INS_FMUL,
 X86_INS_FIMUL,
 X86_INS_FMULP,
 X86_INS_MWAIT,
 X86_INS_NEG,
 X86_INS_NOP,
 X86_INS_NOT,
 X86_INS_OUT,
 X86_INS_OUTSB,
 X86_INS_OUTSD,
 X86_INS_OUTSW,
 X86_INS_PACKUSDW,
 X86_INS_PAUSE,
 X86_INS_PAVGUSB,
 X86_INS_PBLENDVB,
 X86_INS_PBLENDW,
 X86_INS_PCLMULQDQ,
 X86_INS_PCMPEQQ,
 X86_INS_PCMPESTRI,
 X86_INS_PCMPESTRM,
 X86_INS_PCMPGTQ,
 X86_INS_PCMPISTRI,
 X86_INS_PCMPISTRM,
 X86_INS_PCOMMIT,
 X86_INS_PDEP,
 X86_INS_PEXT,
 X86_INS_PEXTRB,
 X86_INS_PEXTRD,
 X86_INS_PEXTRQ,
 X86_INS_PF2ID,
 X86_INS_PF2IW,
 X86_INS_PFACC,
 X86_INS_PFADD,
 X86_INS_PFCMPEQ,
 X86_INS_PFCMPGE,
 X86_INS_PFCMPGT,
 X86_INS_PFMAX,
 X86_INS_PFMIN,
 X86_INS_PFMUL,
 X86_INS_PFNACC,
 X86_INS_PFPNACC,
 X86_INS_PFRCPIT1,
 X86_INS_PFRCPIT2,
 X86_INS_PFRCP,
 X86_INS_PFRSQIT1,
 X86_INS_PFRSQRT,
 X86_INS_PFSUBR,
 X86_INS_PFSUB,
 X86_INS_PHMINPOSUW,
 X86_INS_PI2FD,
 X86_INS_PI2FW,
 X86_INS_PINSRB,
 X86_INS_PINSRD,
 X86_INS_PINSRQ,
 X86_INS_PMAXSB,
 X86_INS_PMAXSD,
 X86_INS_PMAXUD,
 X86_INS_PMAXUW,
 X86_INS_PMINSB,
 X86_INS_PMINSD,
 X86_INS_PMINUD,
 X86_INS_PMINUW,
 X86_INS_PMOVSXBD,
 X86_INS_PMOVSXBQ,
 X86_INS_PMOVSXBW,
 X86_INS_PMOVSXDQ,
 X86_INS_PMOVSXWD,
 X86_INS_PMOVSXWQ,
 X86_INS_PMOVZXBD,
 X86_INS_PMOVZXBQ,
 X86_INS_PMOVZXBW,
 X86_INS_PMOVZXDQ,
 X86_INS_PMOVZXWD,
 X86_INS_PMOVZXWQ,
 X86_INS_PMULDQ,
 X86_INS_PMULHRW,
 X86_INS_PMULLD,
 X86_INS_POP,
 X86_INS_POPAW,
 X86_INS_POPAL,
 X86_INS_POPCNT,
 X86_INS_POPF,
 X86_INS_POPFD,
 X86_INS_POPFQ,
 X86_INS_PREFETCH,
 X86_INS_PREFETCHNTA,
 X86_INS_PREFETCHT0,
 X86_INS_PREFETCHT1,
 X86_INS_PREFETCHT2,
 X86_INS_PREFETCHW,
 X86_INS_PSHUFD,
 X86_INS_PSHUFHW,
 X86_INS_PSHUFLW,
 X86_INS_PSLLDQ,
 X86_INS_PSRLDQ,
 X86_INS_PSWAPD,
 X86_INS_PTEST,
 X86_INS_PUNPCKHQDQ,
 X86_INS_PUNPCKLQDQ,
 X86_INS_PUSH,
 X86_INS_PUSHAW,
 X86_INS_PUSHAL,
 X86_INS_PUSHF,
 X86_INS_PUSHFD,
 X86_INS_PUSHFQ,
 X86_INS_RCL,
 X86_INS_RCPPS,
 X86_INS_RCPSS,
 X86_INS_RCR,
 X86_INS_RDFSBASE,
 X86_INS_RDGSBASE,
 X86_INS_RDMSR,
 X86_INS_RDPMC,
 X86_INS_RDRAND,
 X86_INS_RDSEED,
 X86_INS_RDTSC,
 X86_INS_RDTSCP,
 X86_INS_ROL,
 X86_INS_ROR,
 X86_INS_RORX,
 X86_INS_ROUNDPD,
 X86_INS_ROUNDPS,
 X86_INS_ROUNDSD,
 X86_INS_ROUNDSS,
 X86_INS_RSM,
 X86_INS_RSQRTPS,
 X86_INS_RSQRTSS,
 X86_INS_SAHF,
 X86_INS_SAL,
 X86_INS_SALC,
 X86_INS_SAR,
 X86_INS_SARX,
 X86_INS_SBB,
 X86_INS_SCASB,
 X86_INS_SCASD,
 X86_INS_SCASQ,
 X86_INS_SCASW,
 X86_INS_SETAE,
 X86_INS_SETA,
 X86_INS_SETBE,
 X86_INS_SETB,
 X86_INS_SETE,
 X86_INS_SETGE,
 X86_INS_SETG,
 X86_INS_SETLE,
 X86_INS_SETL,
 X86_INS_SETNE,
 X86_INS_SETNO,
 X86_INS_SETNP,
 X86_INS_SETNS,
 X86_INS_SETO,
 X86_INS_SETP,
 X86_INS_SETS,
 X86_INS_SFENCE,
 X86_INS_SGDT,
 X86_INS_SHA1MSG1,
 X86_INS_SHA1MSG2,
 X86_INS_SHA1NEXTE,
 X86_INS_SHA1RNDS4,
 X86_INS_SHA256MSG1,
 X86_INS_SHA256MSG2,
 X86_INS_SHA256RNDS2,
 X86_INS_SHL,
 X86_INS_SHLD,
 X86_INS_SHLX,
 X86_INS_SHR,
 X86_INS_SHRD,
 X86_INS_SHRX,
 X86_INS_SHUFPD,
 X86_INS_SHUFPS,
 X86_INS_SIDT,
 X86_INS_FSIN,
 X86_INS_SKINIT,
 X86_INS_SLDT,
 X86_INS_SMSW,
 X86_INS_SQRTPD,
 X86_INS_SQRTPS,
 X86_INS_SQRTSD,
 X86_INS_SQRTSS,
 X86_INS_FSQRT,
 X86_INS_STAC,
 X86_INS_STC,
 X86_INS_STD,
 X86_INS_STGI,
 X86_INS_STI,
 X86_INS_STMXCSR,
 X86_INS_STOSB,
 X86_INS_STOSD,
 X86_INS_STOSQ,
 X86_INS_STOSW,
 X86_INS_STR,
 X86_INS_FST,
 X86_INS_FSTP,
 X86_INS_FSTPNCE,
 X86_INS_FXCH,
 X86_INS_SUBPD,
 X86_INS_SUBPS,
 X86_INS_FSUBR,
 X86_INS_FISUBR,
 X86_INS_FSUBRP,
 X86_INS_SUBSD,
 X86_INS_SUBSS,
 X86_INS_FSUB,
 X86_INS_FISUB,
 X86_INS_FSUBP,
 X86_INS_SWAPGS,
 X86_INS_SYSCALL,
 X86_INS_SYSENTER,
 X86_INS_SYSEXIT,
 X86_INS_SYSRET,
 X86_INS_T1MSKC,
 X86_INS_TEST,
 X86_INS_UD2,
 X86_INS_FTST,
 X86_INS_TZCNT,
 X86_INS_TZMSK,
 X86_INS_FUCOMIP,
 X86_INS_FUCOMI,
 X86_INS_FUCOMPP,
 X86_INS_FUCOMP,
 X86_INS_FUCOM,
 X86_INS_UD2B,
 X86_INS_UNPCKHPD,
 X86_INS_UNPCKHPS,
 X86_INS_UNPCKLPD,
 X86_INS_UNPCKLPS,
 X86_INS_VADDPD,
 X86_INS_VADDPS,
 X86_INS_VADDSD,
 X86_INS_VADDSS,
 X86_INS_VADDSUBPD,
 X86_INS_VADDSUBPS,
 X86_INS_VAESDECLAST,
 X86_INS_VAESDEC,
 X86_INS_VAESENCLAST,
 X86_INS_VAESENC,
 X86_INS_VAESIMC,
 X86_INS_VAESKEYGENASSIST,
 X86_INS_VALIGND,
 X86_INS_VALIGNQ,
 X86_INS_VANDNPD,
 X86_INS_VANDNPS,
 X86_INS_VANDPD,
 X86_INS_VANDPS,
 X86_INS_VBLENDMPD,
 X86_INS_VBLENDMPS,
 X86_INS_VBLENDPD,
 X86_INS_VBLENDPS,
 X86_INS_VBLENDVPD,
 X86_INS_VBLENDVPS,
 X86_INS_VBROADCASTF128,
 X86_INS_VBROADCASTI32X4,
 X86_INS_VBROADCASTI64X4,
 X86_INS_VBROADCASTSD,
 X86_INS_VBROADCASTSS,
 X86_INS_VCOMPRESSPD,
 X86_INS_VCOMPRESSPS,
 X86_INS_VCVTDQ2PD,
 X86_INS_VCVTDQ2PS,
 X86_INS_VCVTPD2DQX,
 X86_INS_VCVTPD2DQ,
 X86_INS_VCVTPD2PSX,
 X86_INS_VCVTPD2PS,
 X86_INS_VCVTPD2UDQ,
 X86_INS_VCVTPH2PS,
 X86_INS_VCVTPS2DQ,
 X86_INS_VCVTPS2PD,
 X86_INS_VCVTPS2PH,
 X86_INS_VCVTPS2UDQ,
 X86_INS_VCVTSD2SI,
 X86_INS_VCVTSD2USI,
 X86_INS_VCVTSS2SI,
 X86_INS_VCVTSS2USI,
 X86_INS_VCVTTPD2DQX,
 X86_INS_VCVTTPD2DQ,
 X86_INS_VCVTTPD2UDQ,
 X86_INS_VCVTTPS2DQ,
 X86_INS_VCVTTPS2UDQ,
 X86_INS_VCVTUDQ2PD,
 X86_INS_VCVTUDQ2PS,
 X86_INS_VDIVPD,
 X86_INS_VDIVPS,
 X86_INS_VDIVSD,
 X86_INS_VDIVSS,
 X86_INS_VDPPD,
 X86_INS_VDPPS,
 X86_INS_VERR,
 X86_INS_VERW,
 X86_INS_VEXP2PD,
 X86_INS_VEXP2PS,
 X86_INS_VEXPANDPD,
 X86_INS_VEXPANDPS,
 X86_INS_VEXTRACTF128,
 X86_INS_VEXTRACTF32X4,
 X86_INS_VEXTRACTF64X4,
 X86_INS_VEXTRACTI128,
 X86_INS_VEXTRACTI32X4,
 X86_INS_VEXTRACTI64X4,
 X86_INS_VEXTRACTPS,
 X86_INS_VFMADD132PD,
 X86_INS_VFMADD132PS,
 X86_INS_VFMADDPD,
 X86_INS_VFMADD213PD,
 X86_INS_VFMADD231PD,
 X86_INS_VFMADDPS,
 X86_INS_VFMADD213PS,
 X86_INS_VFMADD231PS,
 X86_INS_VFMADDSD,
 X86_INS_VFMADD213SD,
 X86_INS_VFMADD132SD,
 X86_INS_VFMADD231SD,
 X86_INS_VFMADDSS,
 X86_INS_VFMADD213SS,
 X86_INS_VFMADD132SS,
 X86_INS_VFMADD231SS,
 X86_INS_VFMADDSUB132PD,
 X86_INS_VFMADDSUB132PS,
 X86_INS_VFMADDSUBPD,
 X86_INS_VFMADDSUB213PD,
 X86_INS_VFMADDSUB231PD,
 X86_INS_VFMADDSUBPS,
 X86_INS_VFMADDSUB213PS,
 X86_INS_VFMADDSUB231PS,
 X86_INS_VFMSUB132PD,
 X86_INS_VFMSUB132PS,
 X86_INS_VFMSUBADD132PD,
 X86_INS_VFMSUBADD132PS,
 X86_INS_VFMSUBADDPD,
 X86_INS_VFMSUBADD213PD,
 X86_INS_VFMSUBADD231PD,
 X86_INS_VFMSUBADDPS,
 X86_INS_VFMSUBADD213PS,
 X86_INS_VFMSUBADD231PS,
 X86_INS_VFMSUBPD,
 X86_INS_VFMSUB213PD,
 X86_INS_VFMSUB231PD,
 X86_INS_VFMSUBPS,
 X86_INS_VFMSUB213PS,
 X86_INS_VFMSUB231PS,
 X86_INS_VFMSUBSD,
 X86_INS_VFMSUB213SD,
 X86_INS_VFMSUB132SD,
 X86_INS_VFMSUB231SD,
 X86_INS_VFMSUBSS,
 X86_INS_VFMSUB213SS,
 X86_INS_VFMSUB132SS,
 X86_INS_VFMSUB231SS,
 X86_INS_VFNMADD132PD,
 X86_INS_VFNMADD132PS,
 X86_INS_VFNMADDPD,
 X86_INS_VFNMADD213PD,
 X86_INS_VFNMADD231PD,
 X86_INS_VFNMADDPS,
 X86_INS_VFNMADD213PS,
 X86_INS_VFNMADD231PS,
 X86_INS_VFNMADDSD,
 X86_INS_VFNMADD213SD,
 X86_INS_VFNMADD132SD,
 X86_INS_VFNMADD231SD,
 X86_INS_VFNMADDSS,
 X86_INS_VFNMADD213SS,
 X86_INS_VFNMADD132SS,
 X86_INS_VFNMADD231SS,
 X86_INS_VFNMSUB132PD,
 X86_INS_VFNMSUB132PS,
 X86_INS_VFNMSUBPD,
 X86_INS_VFNMSUB213PD,
 X86_INS_VFNMSUB231PD,
 X86_INS_VFNMSUBPS,
 X86_INS_VFNMSUB213PS,
 X86_INS_VFNMSUB231PS,
 X86_INS_VFNMSUBSD,
 X86_INS_VFNMSUB213SD,
 X86_INS_VFNMSUB132SD,
 X86_INS_VFNMSUB231SD,
 X86_INS_VFNMSUBSS,
 X86_INS_VFNMSUB213SS,
 X86_INS_VFNMSUB132SS,
 X86_INS_VFNMSUB231SS,
 X86_INS_VFRCZPD,
 X86_INS_VFRCZPS,
 X86_INS_VFRCZSD,
 X86_INS_VFRCZSS,
 X86_INS_VORPD,
 X86_INS_VORPS,
 X86_INS_VXORPD,
 X86_INS_VXORPS,
 X86_INS_VGATHERDPD,
 X86_INS_VGATHERDPS,
 X86_INS_VGATHERPF0DPD,
 X86_INS_VGATHERPF0DPS,
 X86_INS_VGATHERPF0QPD,
 X86_INS_VGATHERPF0QPS,
 X86_INS_VGATHERPF1DPD,
 X86_INS_VGATHERPF1DPS,
 X86_INS_VGATHERPF1QPD,
 X86_INS_VGATHERPF1QPS,
 X86_INS_VGATHERQPD,
 X86_INS_VGATHERQPS,
 X86_INS_VHADDPD,
 X86_INS_VHADDPS,
 X86_INS_VHSUBPD,
 X86_INS_VHSUBPS,
 X86_INS_VINSERTF128,
 X86_INS_VINSERTF32X4,
 X86_INS_VINSERTF32X8,
 X86_INS_VINSERTF64X2,
 X86_INS_VINSERTF64X4,
 X86_INS_VINSERTI128,
 X86_INS_VINSERTI32X4,
 X86_INS_VINSERTI32X8,
 X86_INS_VINSERTI64X2,
 X86_INS_VINSERTI64X4,
 X86_INS_VINSERTPS,
 X86_INS_VLDDQU,
 X86_INS_VLDMXCSR,
 X86_INS_VMASKMOVDQU,
 X86_INS_VMASKMOVPD,
 X86_INS_VMASKMOVPS,
 X86_INS_VMAXPD,
 X86_INS_VMAXPS,
 X86_INS_VMAXSD,
 X86_INS_VMAXSS,
 X86_INS_VMCALL,
 X86_INS_VMCLEAR,
 X86_INS_VMFUNC,
 X86_INS_VMINPD,
 X86_INS_VMINPS,
 X86_INS_VMINSD,
 X86_INS_VMINSS,
 X86_INS_VMLAUNCH,
 X86_INS_VMLOAD,
 X86_INS_VMMCALL,
 X86_INS_VMOVQ,
 X86_INS_VMOVDDUP,
 X86_INS_VMOVD,
 X86_INS_VMOVDQA32,
 X86_INS_VMOVDQA64,
 X86_INS_VMOVDQA,
 X86_INS_VMOVDQU16,
 X86_INS_VMOVDQU32,
 X86_INS_VMOVDQU64,
 X86_INS_VMOVDQU8,
 X86_INS_VMOVDQU,
 X86_INS_VMOVHLPS,
 X86_INS_VMOVHPD,
 X86_INS_VMOVHPS,
 X86_INS_VMOVLHPS,
 X86_INS_VMOVLPD,
 X86_INS_VMOVLPS,
 X86_INS_VMOVMSKPD,
 X86_INS_VMOVMSKPS,
 X86_INS_VMOVNTDQA,
 X86_INS_VMOVNTDQ,
 X86_INS_VMOVNTPD,
 X86_INS_VMOVNTPS,
 X86_INS_VMOVSD,
 X86_INS_VMOVSHDUP,
 X86_INS_VMOVSLDUP,
 X86_INS_VMOVSS,
 X86_INS_VMOVUPD,
 X86_INS_VMOVUPS,
 X86_INS_VMPSADBW,
 X86_INS_VMPTRLD,
 X86_INS_VMPTRST,
 X86_INS_VMREAD,
 X86_INS_VMRESUME,
 X86_INS_VMRUN,
 X86_INS_VMSAVE,
 X86_INS_VMULPD,
 X86_INS_VMULPS,
 X86_INS_VMULSD,
 X86_INS_VMULSS,
 X86_INS_VMWRITE,
 X86_INS_VMXOFF,
 X86_INS_VMXON,
 X86_INS_VPABSB,
 X86_INS_VPABSD,
 X86_INS_VPABSQ,
 X86_INS_VPABSW,
 X86_INS_VPACKSSDW,
 X86_INS_VPACKSSWB,
 X86_INS_VPACKUSDW,
 X86_INS_VPACKUSWB,
 X86_INS_VPADDB,
 X86_INS_VPADDD,
 X86_INS_VPADDQ,
 X86_INS_VPADDSB,
 X86_INS_VPADDSW,
 X86_INS_VPADDUSB,
 X86_INS_VPADDUSW,
 X86_INS_VPADDW,
 X86_INS_VPALIGNR,
 X86_INS_VPANDD,
 X86_INS_VPANDND,
 X86_INS_VPANDNQ,
 X86_INS_VPANDN,
 X86_INS_VPANDQ,
 X86_INS_VPAND,
 X86_INS_VPAVGB,
 X86_INS_VPAVGW,
 X86_INS_VPBLENDD,
 X86_INS_VPBLENDMB,
 X86_INS_VPBLENDMD,
 X86_INS_VPBLENDMQ,
 X86_INS_VPBLENDMW,
 X86_INS_VPBLENDVB,
 X86_INS_VPBLENDW,
 X86_INS_VPBROADCASTB,
 X86_INS_VPBROADCASTD,
 X86_INS_VPBROADCASTMB2Q,
 X86_INS_VPBROADCASTMW2D,
 X86_INS_VPBROADCASTQ,
 X86_INS_VPBROADCASTW,
 X86_INS_VPCLMULQDQ,
 X86_INS_VPCMOV,
 X86_INS_VPCMPB,
 X86_INS_VPCMPD,
 X86_INS_VPCMPEQB,
 X86_INS_VPCMPEQD,
 X86_INS_VPCMPEQQ,
 X86_INS_VPCMPEQW,
 X86_INS_VPCMPESTRI,
 X86_INS_VPCMPESTRM,
 X86_INS_VPCMPGTB,
 X86_INS_VPCMPGTD,
 X86_INS_VPCMPGTQ,
 X86_INS_VPCMPGTW,
 X86_INS_VPCMPISTRI,
 X86_INS_VPCMPISTRM,
 X86_INS_VPCMPQ,
 X86_INS_VPCMPUB,
 X86_INS_VPCMPUD,
 X86_INS_VPCMPUQ,
 X86_INS_VPCMPUW,
 X86_INS_VPCMPW,
 X86_INS_VPCOMB,
 X86_INS_VPCOMD,
 X86_INS_VPCOMPRESSD,
 X86_INS_VPCOMPRESSQ,
 X86_INS_VPCOMQ,
 X86_INS_VPCOMUB,
 X86_INS_VPCOMUD,
 X86_INS_VPCOMUQ,
 X86_INS_VPCOMUW,
 X86_INS_VPCOMW,
 X86_INS_VPCONFLICTD,
 X86_INS_VPCONFLICTQ,
 X86_INS_VPERM2F128,
 X86_INS_VPERM2I128,
 X86_INS_VPERMD,
 X86_INS_VPERMI2D,
 X86_INS_VPERMI2PD,
 X86_INS_VPERMI2PS,
 X86_INS_VPERMI2Q,
 X86_INS_VPERMIL2PD,
 X86_INS_VPERMIL2PS,
 X86_INS_VPERMILPD,
 X86_INS_VPERMILPS,
 X86_INS_VPERMPD,
 X86_INS_VPERMPS,
 X86_INS_VPERMQ,
 X86_INS_VPERMT2D,
 X86_INS_VPERMT2PD,
 X86_INS_VPERMT2PS,
 X86_INS_VPERMT2Q,
 X86_INS_VPEXPANDD,
 X86_INS_VPEXPANDQ,
 X86_INS_VPEXTRB,
 X86_INS_VPEXTRD,
 X86_INS_VPEXTRQ,
 X86_INS_VPEXTRW,
 X86_INS_VPGATHERDD,
 X86_INS_VPGATHERDQ,
 X86_INS_VPGATHERQD,
 X86_INS_VPGATHERQQ,
 X86_INS_VPHADDBD,
 X86_INS_VPHADDBQ,
 X86_INS_VPHADDBW,
 X86_INS_VPHADDDQ,
 X86_INS_VPHADDD,
 X86_INS_VPHADDSW,
 X86_INS_VPHADDUBD,
 X86_INS_VPHADDUBQ,
 X86_INS_VPHADDUBW,
 X86_INS_VPHADDUDQ,
 X86_INS_VPHADDUWD,
 X86_INS_VPHADDUWQ,
 X86_INS_VPHADDWD,
 X86_INS_VPHADDWQ,
 X86_INS_VPHADDW,
 X86_INS_VPHMINPOSUW,
 X86_INS_VPHSUBBW,
 X86_INS_VPHSUBDQ,
 X86_INS_VPHSUBD,
 X86_INS_VPHSUBSW,
 X86_INS_VPHSUBWD,
 X86_INS_VPHSUBW,
 X86_INS_VPINSRB,
 X86_INS_VPINSRD,
 X86_INS_VPINSRQ,
 X86_INS_VPINSRW,
 X86_INS_VPLZCNTD,
 X86_INS_VPLZCNTQ,
 X86_INS_VPMACSDD,
 X86_INS_VPMACSDQH,
 X86_INS_VPMACSDQL,
 X86_INS_VPMACSSDD,
 X86_INS_VPMACSSDQH,
 X86_INS_VPMACSSDQL,
 X86_INS_VPMACSSWD,
 X86_INS_VPMACSSWW,
 X86_INS_VPMACSWD,
 X86_INS_VPMACSWW,
 X86_INS_VPMADCSSWD,
 X86_INS_VPMADCSWD,
 X86_INS_VPMADDUBSW,
 X86_INS_VPMADDWD,
 X86_INS_VPMASKMOVD,
 X86_INS_VPMASKMOVQ,
 X86_INS_VPMAXSB,
 X86_INS_VPMAXSD,
 X86_INS_VPMAXSQ,
 X86_INS_VPMAXSW,
 X86_INS_VPMAXUB,
 X86_INS_VPMAXUD,
 X86_INS_VPMAXUQ,
 X86_INS_VPMAXUW,
 X86_INS_VPMINSB,
 X86_INS_VPMINSD,
 X86_INS_VPMINSQ,
 X86_INS_VPMINSW,
 X86_INS_VPMINUB,
 X86_INS_VPMINUD,
 X86_INS_VPMINUQ,
 X86_INS_VPMINUW,
 X86_INS_VPMOVDB,
 X86_INS_VPMOVDW,
 X86_INS_VPMOVM2B,
 X86_INS_VPMOVM2D,
 X86_INS_VPMOVM2Q,
 X86_INS_VPMOVM2W,
 X86_INS_VPMOVMSKB,
 X86_INS_VPMOVQB,
 X86_INS_VPMOVQD,
 X86_INS_VPMOVQW,
 X86_INS_VPMOVSDB,
 X86_INS_VPMOVSDW,
 X86_INS_VPMOVSQB,
 X86_INS_VPMOVSQD,
 X86_INS_VPMOVSQW,
 X86_INS_VPMOVSXBD,
 X86_INS_VPMOVSXBQ,
 X86_INS_VPMOVSXBW,
 X86_INS_VPMOVSXDQ,
 X86_INS_VPMOVSXWD,
 X86_INS_VPMOVSXWQ,
 X86_INS_VPMOVUSDB,
 X86_INS_VPMOVUSDW,
 X86_INS_VPMOVUSQB,
 X86_INS_VPMOVUSQD,
 X86_INS_VPMOVUSQW,
 X86_INS_VPMOVZXBD,
 X86_INS_VPMOVZXBQ,
 X86_INS_VPMOVZXBW,
 X86_INS_VPMOVZXDQ,
 X86_INS_VPMOVZXWD,
 X86_INS_VPMOVZXWQ,
 X86_INS_VPMULDQ,
 X86_INS_VPMULHRSW,
 X86_INS_VPMULHUW,
 X86_INS_VPMULHW,
 X86_INS_VPMULLD,
 X86_INS_VPMULLQ,
 X86_INS_VPMULLW,
 X86_INS_VPMULUDQ,
 X86_INS_VPORD,
 X86_INS_VPORQ,
 X86_INS_VPOR,
 X86_INS_VPPERM,
 X86_INS_VPROTB,
 X86_INS_VPROTD,
 X86_INS_VPROTQ,
 X86_INS_VPROTW,
 X86_INS_VPSADBW,
 X86_INS_VPSCATTERDD,
 X86_INS_VPSCATTERDQ,
 X86_INS_VPSCATTERQD,
 X86_INS_VPSCATTERQQ,
 X86_INS_VPSHAB,
 X86_INS_VPSHAD,
 X86_INS_VPSHAQ,
 X86_INS_VPSHAW,
 X86_INS_VPSHLB,
 X86_INS_VPSHLD,
 X86_INS_VPSHLQ,
 X86_INS_VPSHLW,
 X86_INS_VPSHUFB,
 X86_INS_VPSHUFD,
 X86_INS_VPSHUFHW,
 X86_INS_VPSHUFLW,
 X86_INS_VPSIGNB,
 X86_INS_VPSIGND,
 X86_INS_VPSIGNW,
 X86_INS_VPSLLDQ,
 X86_INS_VPSLLD,
 X86_INS_VPSLLQ,
 X86_INS_VPSLLVD,
 X86_INS_VPSLLVQ,
 X86_INS_VPSLLW,
 X86_INS_VPSRAD,
 X86_INS_VPSRAQ,
 X86_INS_VPSRAVD,
 X86_INS_VPSRAVQ,
 X86_INS_VPSRAW,
 X86_INS_VPSRLDQ,
 X86_INS_VPSRLD,
 X86_INS_VPSRLQ,
 X86_INS_VPSRLVD,
 X86_INS_VPSRLVQ,
 X86_INS_VPSRLW,
 X86_INS_VPSUBB,
 X86_INS_VPSUBD,
 X86_INS_VPSUBQ,
 X86_INS_VPSUBSB,
 X86_INS_VPSUBSW,
 X86_INS_VPSUBUSB,
 X86_INS_VPSUBUSW,
 X86_INS_VPSUBW,
 X86_INS_VPTESTMD,
 X86_INS_VPTESTMQ,
 X86_INS_VPTESTNMD,
 X86_INS_VPTESTNMQ,
 X86_INS_VPTEST,
 X86_INS_VPUNPCKHBW,
 X86_INS_VPUNPCKHDQ,
 X86_INS_VPUNPCKHQDQ,
 X86_INS_VPUNPCKHWD,
 X86_INS_VPUNPCKLBW,
 X86_INS_VPUNPCKLDQ,
 X86_INS_VPUNPCKLQDQ,
 X86_INS_VPUNPCKLWD,
 X86_INS_VPXORD,
 X86_INS_VPXORQ,
 X86_INS_VPXOR,
 X86_INS_VRCP14PD,
 X86_INS_VRCP14PS,
 X86_INS_VRCP14SD,
 X86_INS_VRCP14SS,
 X86_INS_VRCP28PD,
 X86_INS_VRCP28PS,
 X86_INS_VRCP28SD,
 X86_INS_VRCP28SS,
 X86_INS_VRCPPS,
 X86_INS_VRCPSS,
 X86_INS_VRNDSCALEPD,
 X86_INS_VRNDSCALEPS,
 X86_INS_VRNDSCALESD,
 X86_INS_VRNDSCALESS,
 X86_INS_VROUNDPD,
 X86_INS_VROUNDPS,
 X86_INS_VROUNDSD,
 X86_INS_VROUNDSS,
 X86_INS_VRSQRT14PD,
 X86_INS_VRSQRT14PS,
 X86_INS_VRSQRT14SD,
 X86_INS_VRSQRT14SS,
 X86_INS_VRSQRT28PD,
 X86_INS_VRSQRT28PS,
 X86_INS_VRSQRT28SD,
 X86_INS_VRSQRT28SS,
 X86_INS_VRSQRTPS,
 X86_INS_VRSQRTSS,
 X86_INS_VSCATTERDPD,
 X86_INS_VSCATTERDPS,
 X86_INS_VSCATTERPF0DPD,
 X86_INS_VSCATTERPF0DPS,
 X86_INS_VSCATTERPF0QPD,
 X86_INS_VSCATTERPF0QPS,
 X86_INS_VSCATTERPF1DPD,
 X86_INS_VSCATTERPF1DPS,
 X86_INS_VSCATTERPF1QPD,
 X86_INS_VSCATTERPF1QPS,
 X86_INS_VSCATTERQPD,
 X86_INS_VSCATTERQPS,
 X86_INS_VSHUFPD,
 X86_INS_VSHUFPS,
 X86_INS_VSQRTPD,
 X86_INS_VSQRTPS,
 X86_INS_VSQRTSD,
 X86_INS_VSQRTSS,
 X86_INS_VSTMXCSR,
 X86_INS_VSUBPD,
 X86_INS_VSUBPS,
 X86_INS_VSUBSD,
 X86_INS_VSUBSS,
 X86_INS_VTESTPD,
 X86_INS_VTESTPS,
 X86_INS_VUNPCKHPD,
 X86_INS_VUNPCKHPS,
 X86_INS_VUNPCKLPD,
 X86_INS_VUNPCKLPS,
 X86_INS_VZEROALL,
 X86_INS_VZEROUPPER,
 X86_INS_WAIT,
 X86_INS_WBINVD,
 X86_INS_WRFSBASE,
 X86_INS_WRGSBASE,
 X86_INS_WRMSR,
 X86_INS_XABORT,
 X86_INS_XACQUIRE,
 X86_INS_XBEGIN,
 X86_INS_XCHG,
 X86_INS_XCRYPTCBC,
 X86_INS_XCRYPTCFB,
 X86_INS_XCRYPTCTR,
 X86_INS_XCRYPTECB,
 X86_INS_XCRYPTOFB,
 X86_INS_XEND,
 X86_INS_XGETBV,
 X86_INS_XLATB,
 X86_INS_XRELEASE,
 X86_INS_XRSTOR,
 X86_INS_XRSTOR64,
 X86_INS_XRSTORS,
 X86_INS_XRSTORS64,
 X86_INS_XSAVE,
 X86_INS_XSAVE64,
 X86_INS_XSAVEC,
 X86_INS_XSAVEC64,
 X86_INS_XSAVEOPT,
 X86_INS_XSAVEOPT64,
 X86_INS_XSAVES,
 X86_INS_XSAVES64,
 X86_INS_XSETBV,
 X86_INS_XSHA1,
 X86_INS_XSHA256,
 X86_INS_XSTORE,
 X86_INS_XTEST,
 X86_INS_FDISI8087_NOP,
 X86_INS_FENI8087_NOP,


 X86_INS_CMPSS,
 X86_INS_CMPEQSS,
 X86_INS_CMPLTSS,
 X86_INS_CMPLESS,
 X86_INS_CMPUNORDSS,
 X86_INS_CMPNEQSS,
 X86_INS_CMPNLTSS,
 X86_INS_CMPNLESS,
 X86_INS_CMPORDSS,

 X86_INS_CMPSD,
 X86_INS_CMPEQSD,
 X86_INS_CMPLTSD,
 X86_INS_CMPLESD,
 X86_INS_CMPUNORDSD,
 X86_INS_CMPNEQSD,
 X86_INS_CMPNLTSD,
 X86_INS_CMPNLESD,
 X86_INS_CMPORDSD,

 X86_INS_CMPPS,
 X86_INS_CMPEQPS,
 X86_INS_CMPLTPS,
 X86_INS_CMPLEPS,
 X86_INS_CMPUNORDPS,
 X86_INS_CMPNEQPS,
 X86_INS_CMPNLTPS,
 X86_INS_CMPNLEPS,
 X86_INS_CMPORDPS,

 X86_INS_CMPPD,
 X86_INS_CMPEQPD,
 X86_INS_CMPLTPD,
 X86_INS_CMPLEPD,
 X86_INS_CMPUNORDPD,
 X86_INS_CMPNEQPD,
 X86_INS_CMPNLTPD,
 X86_INS_CMPNLEPD,
 X86_INS_CMPORDPD,

 X86_INS_VCMPSS,
 X86_INS_VCMPEQSS,
 X86_INS_VCMPLTSS,
 X86_INS_VCMPLESS,
 X86_INS_VCMPUNORDSS,
 X86_INS_VCMPNEQSS,
 X86_INS_VCMPNLTSS,
 X86_INS_VCMPNLESS,
 X86_INS_VCMPORDSS,
 X86_INS_VCMPEQ_UQSS,
 X86_INS_VCMPNGESS,
 X86_INS_VCMPNGTSS,
 X86_INS_VCMPFALSESS,
 X86_INS_VCMPNEQ_OQSS,
 X86_INS_VCMPGESS,
 X86_INS_VCMPGTSS,
 X86_INS_VCMPTRUESS,
 X86_INS_VCMPEQ_OSSS,
 X86_INS_VCMPLT_OQSS,
 X86_INS_VCMPLE_OQSS,
 X86_INS_VCMPUNORD_SSS,
 X86_INS_VCMPNEQ_USSS,
 X86_INS_VCMPNLT_UQSS,
 X86_INS_VCMPNLE_UQSS,
 X86_INS_VCMPORD_SSS,
 X86_INS_VCMPEQ_USSS,
 X86_INS_VCMPNGE_UQSS,
 X86_INS_VCMPNGT_UQSS,
 X86_INS_VCMPFALSE_OSSS,
 X86_INS_VCMPNEQ_OSSS,
 X86_INS_VCMPGE_OQSS,
 X86_INS_VCMPGT_OQSS,
 X86_INS_VCMPTRUE_USSS,

 X86_INS_VCMPSD,
 X86_INS_VCMPEQSD,
 X86_INS_VCMPLTSD,
 X86_INS_VCMPLESD,
 X86_INS_VCMPUNORDSD,
 X86_INS_VCMPNEQSD,
 X86_INS_VCMPNLTSD,
 X86_INS_VCMPNLESD,
 X86_INS_VCMPORDSD,
 X86_INS_VCMPEQ_UQSD,
 X86_INS_VCMPNGESD,
 X86_INS_VCMPNGTSD,
 X86_INS_VCMPFALSESD,
 X86_INS_VCMPNEQ_OQSD,
 X86_INS_VCMPGESD,
 X86_INS_VCMPGTSD,
 X86_INS_VCMPTRUESD,
 X86_INS_VCMPEQ_OSSD,
 X86_INS_VCMPLT_OQSD,
 X86_INS_VCMPLE_OQSD,
 X86_INS_VCMPUNORD_SSD,
 X86_INS_VCMPNEQ_USSD,
 X86_INS_VCMPNLT_UQSD,
 X86_INS_VCMPNLE_UQSD,
 X86_INS_VCMPORD_SSD,
 X86_INS_VCMPEQ_USSD,
 X86_INS_VCMPNGE_UQSD,
 X86_INS_VCMPNGT_UQSD,
 X86_INS_VCMPFALSE_OSSD,
 X86_INS_VCMPNEQ_OSSD,
 X86_INS_VCMPGE_OQSD,
 X86_INS_VCMPGT_OQSD,
 X86_INS_VCMPTRUE_USSD,

 X86_INS_VCMPPS,
 X86_INS_VCMPEQPS,
 X86_INS_VCMPLTPS,
 X86_INS_VCMPLEPS,
 X86_INS_VCMPUNORDPS,
 X86_INS_VCMPNEQPS,
 X86_INS_VCMPNLTPS,
 X86_INS_VCMPNLEPS,
 X86_INS_VCMPORDPS,
 X86_INS_VCMPEQ_UQPS,
 X86_INS_VCMPNGEPS,
 X86_INS_VCMPNGTPS,
 X86_INS_VCMPFALSEPS,
 X86_INS_VCMPNEQ_OQPS,
 X86_INS_VCMPGEPS,
 X86_INS_VCMPGTPS,
 X86_INS_VCMPTRUEPS,
 X86_INS_VCMPEQ_OSPS,
 X86_INS_VCMPLT_OQPS,
 X86_INS_VCMPLE_OQPS,
 X86_INS_VCMPUNORD_SPS,
 X86_INS_VCMPNEQ_USPS,
 X86_INS_VCMPNLT_UQPS,
 X86_INS_VCMPNLE_UQPS,
 X86_INS_VCMPORD_SPS,
 X86_INS_VCMPEQ_USPS,
 X86_INS_VCMPNGE_UQPS,
 X86_INS_VCMPNGT_UQPS,
 X86_INS_VCMPFALSE_OSPS,
 X86_INS_VCMPNEQ_OSPS,
 X86_INS_VCMPGE_OQPS,
 X86_INS_VCMPGT_OQPS,
 X86_INS_VCMPTRUE_USPS,

 X86_INS_VCMPPD,
 X86_INS_VCMPEQPD,
 X86_INS_VCMPLTPD,
 X86_INS_VCMPLEPD,
 X86_INS_VCMPUNORDPD,
 X86_INS_VCMPNEQPD,
 X86_INS_VCMPNLTPD,
 X86_INS_VCMPNLEPD,
 X86_INS_VCMPORDPD,
 X86_INS_VCMPEQ_UQPD,
 X86_INS_VCMPNGEPD,
 X86_INS_VCMPNGTPD,
 X86_INS_VCMPFALSEPD,
 X86_INS_VCMPNEQ_OQPD,
 X86_INS_VCMPGEPD,
 X86_INS_VCMPGTPD,
 X86_INS_VCMPTRUEPD,
 X86_INS_VCMPEQ_OSPD,
 X86_INS_VCMPLT_OQPD,
 X86_INS_VCMPLE_OQPD,
 X86_INS_VCMPUNORD_SPD,
 X86_INS_VCMPNEQ_USPD,
 X86_INS_VCMPNLT_UQPD,
 X86_INS_VCMPNLE_UQPD,
 X86_INS_VCMPORD_SPD,
 X86_INS_VCMPEQ_USPD,
 X86_INS_VCMPNGE_UQPD,
 X86_INS_VCMPNGT_UQPD,
 X86_INS_VCMPFALSE_OSPD,
 X86_INS_VCMPNEQ_OSPD,
 X86_INS_VCMPGE_OQPD,
 X86_INS_VCMPGT_OQPD,
 X86_INS_VCMPTRUE_USPD,

 X86_INS_UD0,
 X86_INS_ENDBR32,
 X86_INS_ENDBR64,

 X86_INS_ENDING,
} x86_insn;


typedef enum x86_insn_group {
 X86_GRP_INVALID = 0,



 X86_GRP_JUMP,

 X86_GRP_CALL,

 X86_GRP_RET,

 X86_GRP_INT,

 X86_GRP_IRET,

 X86_GRP_PRIVILEGE,

 X86_GRP_BRANCH_RELATIVE,


 X86_GRP_VM = 128,
 X86_GRP_3DNOW,
 X86_GRP_AES,
 X86_GRP_ADX,
 X86_GRP_AVX,
 X86_GRP_AVX2,
 X86_GRP_AVX512,
 X86_GRP_BMI,
 X86_GRP_BMI2,
 X86_GRP_CMOV,
 X86_GRP_F16C,
 X86_GRP_FMA,
 X86_GRP_FMA4,
 X86_GRP_FSGSBASE,
 X86_GRP_HLE,
 X86_GRP_MMX,
 X86_GRP_MODE32,
 X86_GRP_MODE64,
 X86_GRP_RTM,
 X86_GRP_SHA,
 X86_GRP_SSE1,
 X86_GRP_SSE2,
 X86_GRP_SSE3,
 X86_GRP_SSE41,
 X86_GRP_SSE42,
 X86_GRP_SSE4A,
 X86_GRP_SSSE3,
 X86_GRP_PCLMUL,
 X86_GRP_XOP,
 X86_GRP_CDI,
 X86_GRP_ERI,
 X86_GRP_TBM,
 X86_GRP_16BITMODE,
 X86_GRP_NOT64BITMODE,
 X86_GRP_SGX,
 X86_GRP_DQI,
 X86_GRP_BWI,
 X86_GRP_PFI,
 X86_GRP_VLX,
 X86_GRP_SMAP,
 X86_GRP_NOVLX,
 X86_GRP_FPU,

 X86_GRP_ENDING
} x86_insn_group;
# 275 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/xcore.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/xcore.h" 3 4
typedef enum xcore_op_type {
 XCORE_OP_INVALID = 0,
 XCORE_OP_REG,
 XCORE_OP_IMM,
 XCORE_OP_MEM,
} xcore_op_type;


typedef enum xcore_reg {
 XCORE_REG_INVALID = 0,

 XCORE_REG_CP,
 XCORE_REG_DP,
 XCORE_REG_LR,
 XCORE_REG_SP,
 XCORE_REG_R0,
 XCORE_REG_R1,
 XCORE_REG_R2,
 XCORE_REG_R3,
 XCORE_REG_R4,
 XCORE_REG_R5,
 XCORE_REG_R6,
 XCORE_REG_R7,
 XCORE_REG_R8,
 XCORE_REG_R9,
 XCORE_REG_R10,
 XCORE_REG_R11,


 XCORE_REG_PC,



 XCORE_REG_SCP,
 XCORE_REG_SSR,
 XCORE_REG_ET,
 XCORE_REG_ED,
 XCORE_REG_SED,
 XCORE_REG_KEP,
 XCORE_REG_KSP,
 XCORE_REG_ID,

 XCORE_REG_ENDING,
} xcore_reg;



typedef struct xcore_op_mem {
 uint8_t base;


 uint8_t index;
 int32_t disp;
 int direct;
} xcore_op_mem;


typedef struct cs_xcore_op {
 xcore_op_type type;
 union {
  xcore_reg reg;
  int32_t imm;
  xcore_op_mem mem;
 };
} cs_xcore_op;


typedef struct cs_xcore {


 uint8_t op_count;
 cs_xcore_op operands[8];
} cs_xcore;


typedef enum xcore_insn {
 XCORE_INS_INVALID = 0,

 XCORE_INS_ADD,
 XCORE_INS_ANDNOT,
 XCORE_INS_AND,
 XCORE_INS_ASHR,
 XCORE_INS_BAU,
 XCORE_INS_BITREV,
 XCORE_INS_BLA,
 XCORE_INS_BLAT,
 XCORE_INS_BL,
 XCORE_INS_BF,
 XCORE_INS_BT,
 XCORE_INS_BU,
 XCORE_INS_BRU,
 XCORE_INS_BYTEREV,
 XCORE_INS_CHKCT,
 XCORE_INS_CLRE,
 XCORE_INS_CLRPT,
 XCORE_INS_CLRSR,
 XCORE_INS_CLZ,
 XCORE_INS_CRC8,
 XCORE_INS_CRC32,
 XCORE_INS_DCALL,
 XCORE_INS_DENTSP,
 XCORE_INS_DGETREG,
 XCORE_INS_DIVS,
 XCORE_INS_DIVU,
 XCORE_INS_DRESTSP,
 XCORE_INS_DRET,
 XCORE_INS_ECALLF,
 XCORE_INS_ECALLT,
 XCORE_INS_EDU,
 XCORE_INS_EEF,
 XCORE_INS_EET,
 XCORE_INS_EEU,
 XCORE_INS_ENDIN,
 XCORE_INS_ENTSP,
 XCORE_INS_EQ,
 XCORE_INS_EXTDP,
 XCORE_INS_EXTSP,
 XCORE_INS_FREER,
 XCORE_INS_FREET,
 XCORE_INS_GETD,
 XCORE_INS_GET,
 XCORE_INS_GETN,
 XCORE_INS_GETR,
 XCORE_INS_GETSR,
 XCORE_INS_GETST,
 XCORE_INS_GETTS,
 XCORE_INS_INCT,
 XCORE_INS_INIT,
 XCORE_INS_INPW,
 XCORE_INS_INSHR,
 XCORE_INS_INT,
 XCORE_INS_IN,
 XCORE_INS_KCALL,
 XCORE_INS_KENTSP,
 XCORE_INS_KRESTSP,
 XCORE_INS_KRET,
 XCORE_INS_LADD,
 XCORE_INS_LD16S,
 XCORE_INS_LD8U,
 XCORE_INS_LDA16,
 XCORE_INS_LDAP,
 XCORE_INS_LDAW,
 XCORE_INS_LDC,
 XCORE_INS_LDW,
 XCORE_INS_LDIVU,
 XCORE_INS_LMUL,
 XCORE_INS_LSS,
 XCORE_INS_LSUB,
 XCORE_INS_LSU,
 XCORE_INS_MACCS,
 XCORE_INS_MACCU,
 XCORE_INS_MJOIN,
 XCORE_INS_MKMSK,
 XCORE_INS_MSYNC,
 XCORE_INS_MUL,
 XCORE_INS_NEG,
 XCORE_INS_NOT,
 XCORE_INS_OR,
 XCORE_INS_OUTCT,
 XCORE_INS_OUTPW,
 XCORE_INS_OUTSHR,
 XCORE_INS_OUTT,
 XCORE_INS_OUT,
 XCORE_INS_PEEK,
 XCORE_INS_REMS,
 XCORE_INS_REMU,
 XCORE_INS_RETSP,
 XCORE_INS_SETCLK,
 XCORE_INS_SET,
 XCORE_INS_SETC,
 XCORE_INS_SETD,
 XCORE_INS_SETEV,
 XCORE_INS_SETN,
 XCORE_INS_SETPSC,
 XCORE_INS_SETPT,
 XCORE_INS_SETRDY,
 XCORE_INS_SETSR,
 XCORE_INS_SETTW,
 XCORE_INS_SETV,
 XCORE_INS_SEXT,
 XCORE_INS_SHL,
 XCORE_INS_SHR,
 XCORE_INS_SSYNC,
 XCORE_INS_ST16,
 XCORE_INS_ST8,
 XCORE_INS_STW,
 XCORE_INS_SUB,
 XCORE_INS_SYNCR,
 XCORE_INS_TESTCT,
 XCORE_INS_TESTLCL,
 XCORE_INS_TESTWCT,
 XCORE_INS_TSETMR,
 XCORE_INS_START,
 XCORE_INS_WAITEF,
 XCORE_INS_WAITET,
 XCORE_INS_WAITEU,
 XCORE_INS_XOR,
 XCORE_INS_ZEXT,

 XCORE_INS_ENDING,
} xcore_insn;


typedef enum xcore_insn_group {
 XCORE_GRP_INVALID = 0,



 XCORE_GRP_JUMP,

 XCORE_GRP_ENDING,
} xcore_insn_group;
# 276 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/tms320c64x.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/tms320c64x.h" 3 4
typedef enum tms320c64x_op_type {
 TMS320C64X_OP_INVALID = 0,
 TMS320C64X_OP_REG,
 TMS320C64X_OP_IMM,
 TMS320C64X_OP_MEM,
 TMS320C64X_OP_REGPAIR = 64,
} tms320c64x_op_type;

typedef enum tms320c64x_mem_disp {
 TMS320C64X_MEM_DISP_INVALID = 0,
 TMS320C64X_MEM_DISP_CONSTANT,
 TMS320C64X_MEM_DISP_REGISTER,
} tms320c64x_mem_disp;

typedef enum tms320c64x_mem_dir {
 TMS320C64X_MEM_DIR_INVALID = 0,
 TMS320C64X_MEM_DIR_FW,
 TMS320C64X_MEM_DIR_BW,
} tms320c64x_mem_dir;

typedef enum tms320c64x_mem_mod {
 TMS320C64X_MEM_MOD_INVALID = 0,
 TMS320C64X_MEM_MOD_NO,
 TMS320C64X_MEM_MOD_PRE,
 TMS320C64X_MEM_MOD_POST,
} tms320c64x_mem_mod;

typedef struct tms320c64x_op_mem {
 unsigned int base;
 unsigned int disp;
 unsigned int unit;
 unsigned int scaled;
 unsigned int disptype;
 unsigned int direction;
 unsigned int modify;
} tms320c64x_op_mem;

typedef struct cs_tms320c64x_op {
 tms320c64x_op_type type;
 union {
  unsigned int reg;
  int32_t imm;
  tms320c64x_op_mem mem;
 };
} cs_tms320c64x_op;

typedef struct cs_tms320c64x {
 uint8_t op_count;
 cs_tms320c64x_op operands[8];
 struct {
  unsigned int reg;
  unsigned int zero;
 } condition;
 struct {
  unsigned int unit;
  unsigned int side;
  unsigned int crosspath;
 } funit;
 unsigned int parallel;
} cs_tms320c64x;

typedef enum tms320c64x_reg {
 TMS320C64X_REG_INVALID = 0,

 TMS320C64X_REG_AMR,
 TMS320C64X_REG_CSR,
 TMS320C64X_REG_DIER,
 TMS320C64X_REG_DNUM,
 TMS320C64X_REG_ECR,
 TMS320C64X_REG_GFPGFR,
 TMS320C64X_REG_GPLYA,
 TMS320C64X_REG_GPLYB,
 TMS320C64X_REG_ICR,
 TMS320C64X_REG_IER,
 TMS320C64X_REG_IERR,
 TMS320C64X_REG_ILC,
 TMS320C64X_REG_IRP,
 TMS320C64X_REG_ISR,
 TMS320C64X_REG_ISTP,
 TMS320C64X_REG_ITSR,
 TMS320C64X_REG_NRP,
 TMS320C64X_REG_NTSR,
 TMS320C64X_REG_REP,
 TMS320C64X_REG_RILC,
 TMS320C64X_REG_SSR,
 TMS320C64X_REG_TSCH,
 TMS320C64X_REG_TSCL,
 TMS320C64X_REG_TSR,
 TMS320C64X_REG_A0,
 TMS320C64X_REG_A1,
 TMS320C64X_REG_A2,
 TMS320C64X_REG_A3,
 TMS320C64X_REG_A4,
 TMS320C64X_REG_A5,
 TMS320C64X_REG_A6,
 TMS320C64X_REG_A7,
 TMS320C64X_REG_A8,
 TMS320C64X_REG_A9,
 TMS320C64X_REG_A10,
 TMS320C64X_REG_A11,
 TMS320C64X_REG_A12,
 TMS320C64X_REG_A13,
 TMS320C64X_REG_A14,
 TMS320C64X_REG_A15,
 TMS320C64X_REG_A16,
 TMS320C64X_REG_A17,
 TMS320C64X_REG_A18,
 TMS320C64X_REG_A19,
 TMS320C64X_REG_A20,
 TMS320C64X_REG_A21,
 TMS320C64X_REG_A22,
 TMS320C64X_REG_A23,
 TMS320C64X_REG_A24,
 TMS320C64X_REG_A25,
 TMS320C64X_REG_A26,
 TMS320C64X_REG_A27,
 TMS320C64X_REG_A28,
 TMS320C64X_REG_A29,
 TMS320C64X_REG_A30,
 TMS320C64X_REG_A31,
 TMS320C64X_REG_B0,
 TMS320C64X_REG_B1,
 TMS320C64X_REG_B2,
 TMS320C64X_REG_B3,
 TMS320C64X_REG_B4,
 TMS320C64X_REG_B5,
 TMS320C64X_REG_B6,
 TMS320C64X_REG_B7,
 TMS320C64X_REG_B8,
 TMS320C64X_REG_B9,
 TMS320C64X_REG_B10,
 TMS320C64X_REG_B11,
 TMS320C64X_REG_B12,
 TMS320C64X_REG_B13,
 TMS320C64X_REG_B14,
 TMS320C64X_REG_B15,
 TMS320C64X_REG_B16,
 TMS320C64X_REG_B17,
 TMS320C64X_REG_B18,
 TMS320C64X_REG_B19,
 TMS320C64X_REG_B20,
 TMS320C64X_REG_B21,
 TMS320C64X_REG_B22,
 TMS320C64X_REG_B23,
 TMS320C64X_REG_B24,
 TMS320C64X_REG_B25,
 TMS320C64X_REG_B26,
 TMS320C64X_REG_B27,
 TMS320C64X_REG_B28,
 TMS320C64X_REG_B29,
 TMS320C64X_REG_B30,
 TMS320C64X_REG_B31,
 TMS320C64X_REG_PCE1,

 TMS320C64X_REG_ENDING,


 TMS320C64X_REG_EFR = TMS320C64X_REG_ECR,
 TMS320C64X_REG_IFR = TMS320C64X_REG_ISR,
} tms320c64x_reg;

typedef enum tms320c64x_insn {
 TMS320C64X_INS_INVALID = 0,

 TMS320C64X_INS_ABS,
 TMS320C64X_INS_ABS2,
 TMS320C64X_INS_ADD,
 TMS320C64X_INS_ADD2,
 TMS320C64X_INS_ADD4,
 TMS320C64X_INS_ADDAB,
 TMS320C64X_INS_ADDAD,
 TMS320C64X_INS_ADDAH,
 TMS320C64X_INS_ADDAW,
 TMS320C64X_INS_ADDK,
 TMS320C64X_INS_ADDKPC,
 TMS320C64X_INS_ADDU,
 TMS320C64X_INS_AND,
 TMS320C64X_INS_ANDN,
 TMS320C64X_INS_AVG2,
 TMS320C64X_INS_AVGU4,
 TMS320C64X_INS_B,
 TMS320C64X_INS_BDEC,
 TMS320C64X_INS_BITC4,
 TMS320C64X_INS_BNOP,
 TMS320C64X_INS_BPOS,
 TMS320C64X_INS_CLR,
 TMS320C64X_INS_CMPEQ,
 TMS320C64X_INS_CMPEQ2,
 TMS320C64X_INS_CMPEQ4,
 TMS320C64X_INS_CMPGT,
 TMS320C64X_INS_CMPGT2,
 TMS320C64X_INS_CMPGTU4,
 TMS320C64X_INS_CMPLT,
 TMS320C64X_INS_CMPLTU,
 TMS320C64X_INS_DEAL,
 TMS320C64X_INS_DOTP2,
 TMS320C64X_INS_DOTPN2,
 TMS320C64X_INS_DOTPNRSU2,
 TMS320C64X_INS_DOTPRSU2,
 TMS320C64X_INS_DOTPSU4,
 TMS320C64X_INS_DOTPU4,
 TMS320C64X_INS_EXT,
 TMS320C64X_INS_EXTU,
 TMS320C64X_INS_GMPGTU,
 TMS320C64X_INS_GMPY4,
 TMS320C64X_INS_LDB,
 TMS320C64X_INS_LDBU,
 TMS320C64X_INS_LDDW,
 TMS320C64X_INS_LDH,
 TMS320C64X_INS_LDHU,
 TMS320C64X_INS_LDNDW,
 TMS320C64X_INS_LDNW,
 TMS320C64X_INS_LDW,
 TMS320C64X_INS_LMBD,
 TMS320C64X_INS_MAX2,
 TMS320C64X_INS_MAXU4,
 TMS320C64X_INS_MIN2,
 TMS320C64X_INS_MINU4,
 TMS320C64X_INS_MPY,
 TMS320C64X_INS_MPY2,
 TMS320C64X_INS_MPYH,
 TMS320C64X_INS_MPYHI,
 TMS320C64X_INS_MPYHIR,
 TMS320C64X_INS_MPYHL,
 TMS320C64X_INS_MPYHLU,
 TMS320C64X_INS_MPYHSLU,
 TMS320C64X_INS_MPYHSU,
 TMS320C64X_INS_MPYHU,
 TMS320C64X_INS_MPYHULS,
 TMS320C64X_INS_MPYHUS,
 TMS320C64X_INS_MPYLH,
 TMS320C64X_INS_MPYLHU,
 TMS320C64X_INS_MPYLI,
 TMS320C64X_INS_MPYLIR,
 TMS320C64X_INS_MPYLSHU,
 TMS320C64X_INS_MPYLUHS,
 TMS320C64X_INS_MPYSU,
 TMS320C64X_INS_MPYSU4,
 TMS320C64X_INS_MPYU,
 TMS320C64X_INS_MPYU4,
 TMS320C64X_INS_MPYUS,
 TMS320C64X_INS_MVC,
 TMS320C64X_INS_MVD,
 TMS320C64X_INS_MVK,
 TMS320C64X_INS_MVKL,
 TMS320C64X_INS_MVKLH,
 TMS320C64X_INS_NOP,
 TMS320C64X_INS_NORM,
 TMS320C64X_INS_OR,
 TMS320C64X_INS_PACK2,
 TMS320C64X_INS_PACKH2,
 TMS320C64X_INS_PACKH4,
 TMS320C64X_INS_PACKHL2,
 TMS320C64X_INS_PACKL4,
 TMS320C64X_INS_PACKLH2,
 TMS320C64X_INS_ROTL,
 TMS320C64X_INS_SADD,
 TMS320C64X_INS_SADD2,
 TMS320C64X_INS_SADDU4,
 TMS320C64X_INS_SADDUS2,
 TMS320C64X_INS_SAT,
 TMS320C64X_INS_SET,
 TMS320C64X_INS_SHFL,
 TMS320C64X_INS_SHL,
 TMS320C64X_INS_SHLMB,
 TMS320C64X_INS_SHR,
 TMS320C64X_INS_SHR2,
 TMS320C64X_INS_SHRMB,
 TMS320C64X_INS_SHRU,
 TMS320C64X_INS_SHRU2,
 TMS320C64X_INS_SMPY,
 TMS320C64X_INS_SMPY2,
 TMS320C64X_INS_SMPYH,
 TMS320C64X_INS_SMPYHL,
 TMS320C64X_INS_SMPYLH,
 TMS320C64X_INS_SPACK2,
 TMS320C64X_INS_SPACKU4,
 TMS320C64X_INS_SSHL,
 TMS320C64X_INS_SSHVL,
 TMS320C64X_INS_SSHVR,
 TMS320C64X_INS_SSUB,
 TMS320C64X_INS_STB,
 TMS320C64X_INS_STDW,
 TMS320C64X_INS_STH,
 TMS320C64X_INS_STNDW,
 TMS320C64X_INS_STNW,
 TMS320C64X_INS_STW,
 TMS320C64X_INS_SUB,
 TMS320C64X_INS_SUB2,
 TMS320C64X_INS_SUB4,
 TMS320C64X_INS_SUBAB,
 TMS320C64X_INS_SUBABS4,
 TMS320C64X_INS_SUBAH,
 TMS320C64X_INS_SUBAW,
 TMS320C64X_INS_SUBC,
 TMS320C64X_INS_SUBU,
 TMS320C64X_INS_SWAP4,
 TMS320C64X_INS_UNPKHU4,
 TMS320C64X_INS_UNPKLU4,
 TMS320C64X_INS_XOR,
 TMS320C64X_INS_XPND2,
 TMS320C64X_INS_XPND4,

 TMS320C64X_INS_IDLE,
 TMS320C64X_INS_MV,
 TMS320C64X_INS_NEG,
 TMS320C64X_INS_NOT,
 TMS320C64X_INS_SWAP2,
 TMS320C64X_INS_ZERO,

 TMS320C64X_INS_ENDING,
} tms320c64x_insn;

typedef enum tms320c64x_insn_group {
 TMS320C64X_GRP_INVALID = 0,

 TMS320C64X_GRP_JUMP,

 TMS320C64X_GRP_FUNIT_D = 128,
 TMS320C64X_GRP_FUNIT_L,
 TMS320C64X_GRP_FUNIT_M,
 TMS320C64X_GRP_FUNIT_S,
 TMS320C64X_GRP_FUNIT_NO,

 TMS320C64X_GRP_ENDING,
} tms320c64x_insn_group;

typedef enum tms320c64x_funit {
 TMS320C64X_FUNIT_INVALID = 0,
 TMS320C64X_FUNIT_D,
 TMS320C64X_FUNIT_L,
 TMS320C64X_FUNIT_M,
 TMS320C64X_FUNIT_S,
 TMS320C64X_FUNIT_NO
} tms320c64x_funit;
# 277 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/m680x.h" 1 3 4
# 20 "/usr/local/Cellar/capstone/4.0.2/include/capstone/m680x.h" 3 4
typedef enum m680x_reg {
 M680X_REG_INVALID = 0,

 M680X_REG_A,
 M680X_REG_B,
 M680X_REG_E,
 M680X_REG_F,
 M680X_REG_0,

 M680X_REG_D,
 M680X_REG_W,

 M680X_REG_CC,
 M680X_REG_DP,
 M680X_REG_MD,

 M680X_REG_HX,
 M680X_REG_H,
 M680X_REG_X,
 M680X_REG_Y,
 M680X_REG_S,
 M680X_REG_U,
 M680X_REG_V,

 M680X_REG_Q,

 M680X_REG_PC,

 M680X_REG_TMP2,
 M680X_REG_TMP3,

 M680X_REG_ENDING,
} m680x_reg;


typedef enum m680x_op_type {
 M680X_OP_INVALID = 0,
 M680X_OP_REGISTER,
 M680X_OP_IMMEDIATE,
 M680X_OP_INDEXED,
 M680X_OP_EXTENDED,
 M680X_OP_DIRECT,
 M680X_OP_RELATIVE,
 M680X_OP_CONSTANT,

} m680x_op_type;
# 81 "/usr/local/Cellar/capstone/4.0.2/include/capstone/m680x.h" 3 4
typedef struct m680x_op_idx {
 m680x_reg base_reg;

 m680x_reg offset_reg;

 int16_t offset;
 uint16_t offset_addr;

 uint8_t offset_bits;
 int8_t inc_dec;





 uint8_t flags;
} m680x_op_idx;


typedef struct m680x_op_rel {
 uint16_t address;


 int16_t offset;
} m680x_op_rel;


typedef struct m680x_op_ext {
 uint16_t address;
 _Bool indirect;
} m680x_op_ext;


typedef struct cs_m680x_op {
 m680x_op_type type;
 union {
  int32_t imm;
  m680x_reg reg;
  m680x_op_idx idx;
  m680x_op_rel rel;
  m680x_op_ext ext;
  uint8_t direct_addr;
  uint8_t const_val;
 };
 uint8_t size;



 uint8_t access;
} cs_m680x_op;


typedef enum m680x_group_type {
 M680X_GRP_INVALID = 0,


 M680X_GRP_JUMP,

 M680X_GRP_CALL,

 M680X_GRP_RET,

 M680X_GRP_INT,

 M680X_GRP_IRET,

 M680X_GRP_PRIV,

 M680X_GRP_BRAREL,


 M680X_GRP_ENDING,
} m680x_group_type;
# 165 "/usr/local/Cellar/capstone/4.0.2/include/capstone/m680x.h" 3 4
typedef struct cs_m680x {
 uint8_t flags;
 uint8_t op_count;
 cs_m680x_op operands[9];
} cs_m680x;


typedef enum m680x_insn {
 M680X_INS_INVLD = 0,
 M680X_INS_ABA,
 M680X_INS_ABX,
 M680X_INS_ABY,
 M680X_INS_ADC,
 M680X_INS_ADCA,
 M680X_INS_ADCB,
 M680X_INS_ADCD,
 M680X_INS_ADCR,
 M680X_INS_ADD,
 M680X_INS_ADDA,
 M680X_INS_ADDB,
 M680X_INS_ADDD,
 M680X_INS_ADDE,
 M680X_INS_ADDF,
 M680X_INS_ADDR,
 M680X_INS_ADDW,
 M680X_INS_AIM,
 M680X_INS_AIS,
 M680X_INS_AIX,
 M680X_INS_AND,
 M680X_INS_ANDA,
 M680X_INS_ANDB,
 M680X_INS_ANDCC,
 M680X_INS_ANDD,
 M680X_INS_ANDR,
 M680X_INS_ASL,
 M680X_INS_ASLA,
 M680X_INS_ASLB,
 M680X_INS_ASLD,
 M680X_INS_ASR,
 M680X_INS_ASRA,
 M680X_INS_ASRB,
 M680X_INS_ASRD,
 M680X_INS_ASRX,
 M680X_INS_BAND,
 M680X_INS_BCC,
 M680X_INS_BCLR,
 M680X_INS_BCS,
 M680X_INS_BEOR,
 M680X_INS_BEQ,
 M680X_INS_BGE,
 M680X_INS_BGND,
 M680X_INS_BGT,
 M680X_INS_BHCC,
 M680X_INS_BHCS,
 M680X_INS_BHI,
 M680X_INS_BIAND,
 M680X_INS_BIEOR,
 M680X_INS_BIH,
 M680X_INS_BIL,
 M680X_INS_BIOR,
 M680X_INS_BIT,
 M680X_INS_BITA,
 M680X_INS_BITB,
 M680X_INS_BITD,
 M680X_INS_BITMD,
 M680X_INS_BLE,
 M680X_INS_BLS,
 M680X_INS_BLT,
 M680X_INS_BMC,
 M680X_INS_BMI,
 M680X_INS_BMS,
 M680X_INS_BNE,
 M680X_INS_BOR,
 M680X_INS_BPL,
 M680X_INS_BRCLR,
 M680X_INS_BRSET,
 M680X_INS_BRA,
 M680X_INS_BRN,
 M680X_INS_BSET,
 M680X_INS_BSR,
 M680X_INS_BVC,
 M680X_INS_BVS,
 M680X_INS_CALL,
 M680X_INS_CBA,
 M680X_INS_CBEQ,
 M680X_INS_CBEQA,
 M680X_INS_CBEQX,
 M680X_INS_CLC,
 M680X_INS_CLI,
 M680X_INS_CLR,
 M680X_INS_CLRA,
 M680X_INS_CLRB,
 M680X_INS_CLRD,
 M680X_INS_CLRE,
 M680X_INS_CLRF,
 M680X_INS_CLRH,
 M680X_INS_CLRW,
 M680X_INS_CLRX,
 M680X_INS_CLV,
 M680X_INS_CMP,
 M680X_INS_CMPA,
 M680X_INS_CMPB,
 M680X_INS_CMPD,
 M680X_INS_CMPE,
 M680X_INS_CMPF,
 M680X_INS_CMPR,
 M680X_INS_CMPS,
 M680X_INS_CMPU,
 M680X_INS_CMPW,
 M680X_INS_CMPX,
 M680X_INS_CMPY,
 M680X_INS_COM,
 M680X_INS_COMA,
 M680X_INS_COMB,
 M680X_INS_COMD,
 M680X_INS_COME,
 M680X_INS_COMF,
 M680X_INS_COMW,
 M680X_INS_COMX,
 M680X_INS_CPD,
 M680X_INS_CPHX,
 M680X_INS_CPS,
 M680X_INS_CPX,
 M680X_INS_CPY,
 M680X_INS_CWAI,
 M680X_INS_DAA,
 M680X_INS_DBEQ,
 M680X_INS_DBNE,
 M680X_INS_DBNZ,
 M680X_INS_DBNZA,
 M680X_INS_DBNZX,
 M680X_INS_DEC,
 M680X_INS_DECA,
 M680X_INS_DECB,
 M680X_INS_DECD,
 M680X_INS_DECE,
 M680X_INS_DECF,
 M680X_INS_DECW,
 M680X_INS_DECX,
 M680X_INS_DES,
 M680X_INS_DEX,
 M680X_INS_DEY,
 M680X_INS_DIV,
 M680X_INS_DIVD,
 M680X_INS_DIVQ,
 M680X_INS_EDIV,
 M680X_INS_EDIVS,
 M680X_INS_EIM,
 M680X_INS_EMACS,
 M680X_INS_EMAXD,
 M680X_INS_EMAXM,
 M680X_INS_EMIND,
 M680X_INS_EMINM,
 M680X_INS_EMUL,
 M680X_INS_EMULS,
 M680X_INS_EOR,
 M680X_INS_EORA,
 M680X_INS_EORB,
 M680X_INS_EORD,
 M680X_INS_EORR,
 M680X_INS_ETBL,
 M680X_INS_EXG,
 M680X_INS_FDIV,
 M680X_INS_IBEQ,
 M680X_INS_IBNE,
 M680X_INS_IDIV,
 M680X_INS_IDIVS,
 M680X_INS_ILLGL,
 M680X_INS_INC,
 M680X_INS_INCA,
 M680X_INS_INCB,
 M680X_INS_INCD,
 M680X_INS_INCE,
 M680X_INS_INCF,
 M680X_INS_INCW,
 M680X_INS_INCX,
 M680X_INS_INS,
 M680X_INS_INX,
 M680X_INS_INY,
 M680X_INS_JMP,
 M680X_INS_JSR,
 M680X_INS_LBCC,
 M680X_INS_LBCS,
 M680X_INS_LBEQ,
 M680X_INS_LBGE,
 M680X_INS_LBGT,
 M680X_INS_LBHI,
 M680X_INS_LBLE,
 M680X_INS_LBLS,
 M680X_INS_LBLT,
 M680X_INS_LBMI,
 M680X_INS_LBNE,
 M680X_INS_LBPL,
 M680X_INS_LBRA,
 M680X_INS_LBRN,
 M680X_INS_LBSR,
 M680X_INS_LBVC,
 M680X_INS_LBVS,
 M680X_INS_LDA,
 M680X_INS_LDAA,
 M680X_INS_LDAB,
 M680X_INS_LDB,
 M680X_INS_LDBT,
 M680X_INS_LDD,
 M680X_INS_LDE,
 M680X_INS_LDF,
 M680X_INS_LDHX,
 M680X_INS_LDMD,
 M680X_INS_LDQ,
 M680X_INS_LDS,
 M680X_INS_LDU,
 M680X_INS_LDW,
 M680X_INS_LDX,
 M680X_INS_LDY,
 M680X_INS_LEAS,
 M680X_INS_LEAU,
 M680X_INS_LEAX,
 M680X_INS_LEAY,
 M680X_INS_LSL,
 M680X_INS_LSLA,
 M680X_INS_LSLB,
 M680X_INS_LSLD,
 M680X_INS_LSLX,
 M680X_INS_LSR,
 M680X_INS_LSRA,
 M680X_INS_LSRB,
 M680X_INS_LSRD,
 M680X_INS_LSRW,
 M680X_INS_LSRX,
 M680X_INS_MAXA,
 M680X_INS_MAXM,
 M680X_INS_MEM,
 M680X_INS_MINA,
 M680X_INS_MINM,
 M680X_INS_MOV,
 M680X_INS_MOVB,
 M680X_INS_MOVW,
 M680X_INS_MUL,
 M680X_INS_MULD,
 M680X_INS_NEG,
 M680X_INS_NEGA,
 M680X_INS_NEGB,
 M680X_INS_NEGD,
 M680X_INS_NEGX,
 M680X_INS_NOP,
 M680X_INS_NSA,
 M680X_INS_OIM,
 M680X_INS_ORA,
 M680X_INS_ORAA,
 M680X_INS_ORAB,
 M680X_INS_ORB,
 M680X_INS_ORCC,
 M680X_INS_ORD,
 M680X_INS_ORR,
 M680X_INS_PSHA,
 M680X_INS_PSHB,
 M680X_INS_PSHC,
 M680X_INS_PSHD,
 M680X_INS_PSHH,
 M680X_INS_PSHS,
 M680X_INS_PSHSW,
 M680X_INS_PSHU,
 M680X_INS_PSHUW,
 M680X_INS_PSHX,
 M680X_INS_PSHY,
 M680X_INS_PULA,
 M680X_INS_PULB,
 M680X_INS_PULC,
 M680X_INS_PULD,
 M680X_INS_PULH,
 M680X_INS_PULS,
 M680X_INS_PULSW,
 M680X_INS_PULU,
 M680X_INS_PULUW,
 M680X_INS_PULX,
 M680X_INS_PULY,
 M680X_INS_REV,
 M680X_INS_REVW,
 M680X_INS_ROL,
 M680X_INS_ROLA,
 M680X_INS_ROLB,
 M680X_INS_ROLD,
 M680X_INS_ROLW,
 M680X_INS_ROLX,
 M680X_INS_ROR,
 M680X_INS_RORA,
 M680X_INS_RORB,
 M680X_INS_RORD,
 M680X_INS_RORW,
 M680X_INS_RORX,
 M680X_INS_RSP,
 M680X_INS_RTC,
 M680X_INS_RTI,
 M680X_INS_RTS,
 M680X_INS_SBA,
 M680X_INS_SBC,
 M680X_INS_SBCA,
 M680X_INS_SBCB,
 M680X_INS_SBCD,
 M680X_INS_SBCR,
 M680X_INS_SEC,
 M680X_INS_SEI,
 M680X_INS_SEV,
 M680X_INS_SEX,
 M680X_INS_SEXW,
 M680X_INS_SLP,
 M680X_INS_STA,
 M680X_INS_STAA,
 M680X_INS_STAB,
 M680X_INS_STB,
 M680X_INS_STBT,
 M680X_INS_STD,
 M680X_INS_STE,
 M680X_INS_STF,
 M680X_INS_STOP,
 M680X_INS_STHX,
 M680X_INS_STQ,
 M680X_INS_STS,
 M680X_INS_STU,
 M680X_INS_STW,
 M680X_INS_STX,
 M680X_INS_STY,
 M680X_INS_SUB,
 M680X_INS_SUBA,
 M680X_INS_SUBB,
 M680X_INS_SUBD,
 M680X_INS_SUBE,
 M680X_INS_SUBF,
 M680X_INS_SUBR,
 M680X_INS_SUBW,
 M680X_INS_SWI,
 M680X_INS_SWI2,
 M680X_INS_SWI3,
 M680X_INS_SYNC,
 M680X_INS_TAB,
 M680X_INS_TAP,
 M680X_INS_TAX,
 M680X_INS_TBA,
 M680X_INS_TBEQ,
 M680X_INS_TBL,
 M680X_INS_TBNE,
 M680X_INS_TEST,
 M680X_INS_TFM,
 M680X_INS_TFR,
 M680X_INS_TIM,
 M680X_INS_TPA,
 M680X_INS_TST,
 M680X_INS_TSTA,
 M680X_INS_TSTB,
 M680X_INS_TSTD,
 M680X_INS_TSTE,
 M680X_INS_TSTF,
 M680X_INS_TSTW,
 M680X_INS_TSTX,
 M680X_INS_TSX,
 M680X_INS_TSY,
 M680X_INS_TXA,
 M680X_INS_TXS,
 M680X_INS_TYS,
 M680X_INS_WAI,
 M680X_INS_WAIT,
 M680X_INS_WAV,
 M680X_INS_WAVR,
 M680X_INS_XGDX,
 M680X_INS_XGDY,
 M680X_INS_ENDING,
} m680x_insn;
# 278 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4
# 1 "/usr/local/Cellar/capstone/4.0.2/include/capstone/evm.h" 1 3 4
# 18 "/usr/local/Cellar/capstone/4.0.2/include/capstone/evm.h" 3 4
typedef struct cs_evm {
    unsigned char pop;
    unsigned char push;
    unsigned int fee;
} cs_evm;


typedef enum evm_insn {
 EVM_INS_STOP = 0,
 EVM_INS_ADD = 1,
 EVM_INS_MUL = 2,
 EVM_INS_SUB = 3,
 EVM_INS_DIV = 4,
 EVM_INS_SDIV = 5,
 EVM_INS_MOD = 6,
 EVM_INS_SMOD = 7,
 EVM_INS_ADDMOD = 8,
 EVM_INS_MULMOD = 9,
 EVM_INS_EXP = 10,
 EVM_INS_SIGNEXTEND = 11,
 EVM_INS_LT = 16,
 EVM_INS_GT = 17,
 EVM_INS_SLT = 18,
 EVM_INS_SGT = 19,
 EVM_INS_EQ = 20,
 EVM_INS_ISZERO = 21,
 EVM_INS_AND = 22,
 EVM_INS_OR = 23,
 EVM_INS_XOR = 24,
 EVM_INS_NOT = 25,
 EVM_INS_BYTE = 26,
 EVM_INS_SHA3 = 32,
 EVM_INS_ADDRESS = 48,
 EVM_INS_BALANCE = 49,
 EVM_INS_ORIGIN = 50,
 EVM_INS_CALLER = 51,
 EVM_INS_CALLVALUE = 52,
 EVM_INS_CALLDATALOAD = 53,
 EVM_INS_CALLDATASIZE = 54,
 EVM_INS_CALLDATACOPY = 55,
 EVM_INS_CODESIZE = 56,
 EVM_INS_CODECOPY = 57,
 EVM_INS_GASPRICE = 58,
 EVM_INS_EXTCODESIZE = 59,
 EVM_INS_EXTCODECOPY = 60,
 EVM_INS_RETURNDATASIZE = 61,
 EVM_INS_RETURNDATACOPY = 62,
 EVM_INS_BLOCKHASH = 64,
 EVM_INS_COINBASE = 65,
 EVM_INS_TIMESTAMP = 66,
 EVM_INS_NUMBER = 67,
 EVM_INS_DIFFICULTY = 68,
 EVM_INS_GASLIMIT = 69,
 EVM_INS_POP = 80,
 EVM_INS_MLOAD = 81,
 EVM_INS_MSTORE = 82,
 EVM_INS_MSTORE8 = 83,
 EVM_INS_SLOAD = 84,
 EVM_INS_SSTORE = 85,
 EVM_INS_JUMP = 86,
 EVM_INS_JUMPI = 87,
 EVM_INS_PC = 88,
 EVM_INS_MSIZE = 89,
 EVM_INS_GAS = 90,
 EVM_INS_JUMPDEST = 91,
 EVM_INS_PUSH1 = 96,
 EVM_INS_PUSH2 = 97,
 EVM_INS_PUSH3 = 98,
 EVM_INS_PUSH4 = 99,
 EVM_INS_PUSH5 = 100,
 EVM_INS_PUSH6 = 101,
 EVM_INS_PUSH7 = 102,
 EVM_INS_PUSH8 = 103,
 EVM_INS_PUSH9 = 104,
 EVM_INS_PUSH10 = 105,
 EVM_INS_PUSH11 = 106,
 EVM_INS_PUSH12 = 107,
 EVM_INS_PUSH13 = 108,
 EVM_INS_PUSH14 = 109,
 EVM_INS_PUSH15 = 110,
 EVM_INS_PUSH16 = 111,
 EVM_INS_PUSH17 = 112,
 EVM_INS_PUSH18 = 113,
 EVM_INS_PUSH19 = 114,
 EVM_INS_PUSH20 = 115,
 EVM_INS_PUSH21 = 116,
 EVM_INS_PUSH22 = 117,
 EVM_INS_PUSH23 = 118,
 EVM_INS_PUSH24 = 119,
 EVM_INS_PUSH25 = 120,
 EVM_INS_PUSH26 = 121,
 EVM_INS_PUSH27 = 122,
 EVM_INS_PUSH28 = 123,
 EVM_INS_PUSH29 = 124,
 EVM_INS_PUSH30 = 125,
 EVM_INS_PUSH31 = 126,
 EVM_INS_PUSH32 = 127,
 EVM_INS_DUP1 = 128,
 EVM_INS_DUP2 = 129,
 EVM_INS_DUP3 = 130,
 EVM_INS_DUP4 = 131,
 EVM_INS_DUP5 = 132,
 EVM_INS_DUP6 = 133,
 EVM_INS_DUP7 = 134,
 EVM_INS_DUP8 = 135,
 EVM_INS_DUP9 = 136,
 EVM_INS_DUP10 = 137,
 EVM_INS_DUP11 = 138,
 EVM_INS_DUP12 = 139,
 EVM_INS_DUP13 = 140,
 EVM_INS_DUP14 = 141,
 EVM_INS_DUP15 = 142,
 EVM_INS_DUP16 = 143,
 EVM_INS_SWAP1 = 144,
 EVM_INS_SWAP2 = 145,
 EVM_INS_SWAP3 = 146,
 EVM_INS_SWAP4 = 147,
 EVM_INS_SWAP5 = 148,
 EVM_INS_SWAP6 = 149,
 EVM_INS_SWAP7 = 150,
 EVM_INS_SWAP8 = 151,
 EVM_INS_SWAP9 = 152,
 EVM_INS_SWAP10 = 153,
 EVM_INS_SWAP11 = 154,
 EVM_INS_SWAP12 = 155,
 EVM_INS_SWAP13 = 156,
 EVM_INS_SWAP14 = 157,
 EVM_INS_SWAP15 = 158,
 EVM_INS_SWAP16 = 159,
 EVM_INS_LOG0 = 160,
 EVM_INS_LOG1 = 161,
 EVM_INS_LOG2 = 162,
 EVM_INS_LOG3 = 163,
 EVM_INS_LOG4 = 164,
 EVM_INS_CREATE = 240,
 EVM_INS_CALL = 241,
 EVM_INS_CALLCODE = 242,
 EVM_INS_RETURN = 243,
 EVM_INS_DELEGATECALL = 244,
 EVM_INS_CALLBLACKBOX = 245,
 EVM_INS_STATICCALL = 250,
 EVM_INS_REVERT = 253,
 EVM_INS_SUICIDE = 255,

 EVM_INS_INVALID = 512,
 EVM_INS_ENDING,
} evm_insn;


typedef enum evm_insn_group {
 EVM_GRP_INVALID = 0,

 EVM_GRP_JUMP,

 EVM_GRP_MATH = 8,
 EVM_GRP_STACK_WRITE,
 EVM_GRP_STACK_READ,
 EVM_GRP_MEM_WRITE,
 EVM_GRP_MEM_READ,
 EVM_GRP_STORE_WRITE,
 EVM_GRP_STORE_READ,
 EVM_GRP_HALT,

 EVM_GRP_ENDING,
} evm_insn_group;
# 279 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 2 3 4






typedef struct cs_detail {
 uint16_t regs_read[12];
 uint8_t regs_read_count;

 uint16_t regs_write[20];
 uint8_t regs_write_count;

 uint8_t groups[8];
 uint8_t groups_count;


 union {
  cs_x86 x86;
  cs_arm64 arm64;
  cs_arm arm;
  cs_m68k m68k;
  cs_mips mips;
  cs_ppc ppc;
  cs_sparc sparc;
  cs_sysz sysz;
  cs_xcore xcore;
  cs_tms320c64x tms320c64x;
  cs_m680x m680x;
  cs_evm evm;
 };
} cs_detail;


typedef struct cs_insn {






 unsigned int id;



 uint64_t address;



 uint16_t size;



 uint8_t bytes[16];



 char mnemonic[32];



 char op_str[160];
# 349 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
 cs_detail *detail;
} cs_insn;
# 361 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
typedef enum cs_err {
 CS_ERR_OK = 0,
 CS_ERR_MEM,
 CS_ERR_ARCH,
 CS_ERR_HANDLE,
 CS_ERR_CSH,
 CS_ERR_MODE,
 CS_ERR_OPTION,
 CS_ERR_DETAIL,
 CS_ERR_MEMSETUP,
 CS_ERR_VERSION,
 CS_ERR_DIET,
 CS_ERR_SKIPDATA,
 CS_ERR_X86_ATT,
 CS_ERR_X86_INTEL,
 CS_ERR_X86_MASM,
} cs_err;
# 396 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
unsigned int cs_version(int *major, int *minor);
# 413 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
_Bool cs_support(int query);
# 426 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
cs_err cs_open(cs_arch arch, cs_mode mode, csh *handle);
# 443 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
cs_err cs_close(csh *handle);
# 460 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
cs_err cs_option(csh handle, cs_opt_type type, size_t value);
# 471 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
cs_err cs_errno(csh handle);
# 483 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
const char * cs_strerror(cs_err code);
# 519 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
size_t cs_disasm(csh handle,
  const uint8_t *code, size_t code_size,
  uint64_t address,
  size_t count,
  cs_insn **insn);





__attribute__((visibility("default")))
__attribute__((deprecated))
size_t cs_disasm_ex(csh handle,
  const uint8_t *code, size_t code_size,
  uint64_t address,
  size_t count,
  cs_insn **insn);
# 545 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
void cs_free(cs_insn *insn, size_t count);
# 557 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
cs_insn * cs_malloc(csh handle);
# 595 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
_Bool cs_disasm_iter(csh handle,
 const uint8_t **code, size_t *size,
 uint64_t *address, cs_insn *insn);
# 613 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
const char * cs_reg_name(csh handle, unsigned int reg_id);
# 628 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
const char * cs_insn_name(csh handle, unsigned int insn_id);
# 643 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
const char * cs_group_name(csh handle, unsigned int group_id);
# 662 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
_Bool cs_insn_group(csh handle, const cs_insn *insn, unsigned int group_id);
# 680 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
_Bool cs_reg_read(csh handle, const cs_insn *insn, unsigned int reg_id);
# 698 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
_Bool cs_reg_write(csh handle, const cs_insn *insn, unsigned int reg_id);
# 714 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
int cs_op_count(csh handle, const cs_insn *insn, unsigned int op_type);
# 733 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
int cs_op_index(csh handle, const cs_insn *insn, unsigned int op_type,
  unsigned int position);


typedef uint16_t cs_regs[64];
# 757 "/usr/local/Cellar/capstone/4.0.2/include/capstone/capstone.h" 3 4
__attribute__((visibility("default")))
cs_err cs_regs_access(csh handle, const cs_insn *insn,
  cs_regs regs_read, uint8_t *regs_read_count,
  cs_regs regs_write, uint8_t *regs_write_count);
# 7 "project/radare2/libr/anal/p/anal_riscv_cs.c" 2
# 616 "project/radare2/libr/anal/p/anal_riscv_cs.c"

# 616 "project/radare2/libr/anal/p/anal_riscv_cs.c"
RAnalPlugin r_anal_plugin_riscv_cs = {0};


# 618 "project/radare2/libr/anal/p/anal_riscv_cs.c" 3 4
__attribute__((visibility("default"))) 
# 618 "project/radare2/libr/anal/p/anal_riscv_cs.c"
     RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_ANAL,
 .version = 
# 620 "project/radare2/libr/anal/p/anal_riscv_cs.c" 3 4
           "5.5.4"

# 621 "project/radare2/libr/anal/p/anal_riscv_cs.c"
};
