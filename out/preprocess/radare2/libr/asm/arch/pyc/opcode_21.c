# 0 "project/radare2/libr/asm/arch/pyc/opcode_21.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/pyc/opcode_21.c"
# 1 "project/radare2/libr/asm/arch/pyc/opcode.h" 1





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
# 7 "project/radare2/libr/asm/arch/pyc/opcode.h" 2
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
# 8 "project/radare2/libr/asm/arch/pyc/opcode.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util.h" 1 3 4






# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_regex.h" 3 4
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
# 9 "project/radare2/libr/asm/arch/pyc/opcode.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 3 4
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
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4
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
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_bin.h" 1 3 4





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
# 22 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_anal.h" 2 3 4
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
# 10 "project/radare2/libr/asm/arch/pyc/opcode.h" 2




# 13 "project/radare2/libr/asm/arch/pyc/opcode.h"
typedef enum {
 HASCOMPARE = 0x1,
 HASCONDITION = 0x2,
 HASCONST = 0x4,
 HASFREE = 0x8,
 HASJABS = 0x10,
 HASJREL = 0x20,
 HASLOCAL = 0x40,
 HASNAME = 0x80,
 HASNARGS = 0x100,
 HASSTORE = 0x200,
 HASVARGS = 0x400,
 NOFOLLOW = 0x800,
} pyc_opcode_type;

typedef enum {
 NAME_OP = 0x1,
 LOCAL_OP = 0x2,
 FREE_OP = 0x4,
 DEF_OP = 0x8,
} pyc_store_op_func;

typedef struct {
 char *op_name;
 
# 37 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
unsigned short 
# 37 "project/radare2/libr/asm/arch/pyc/opcode.h"
     type;
 
# 38 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
unsigned char 
# 38 "project/radare2/libr/asm/arch/pyc/opcode.h"
    op_code;
 
# 39 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
signed char 
# 39 "project/radare2/libr/asm/arch/pyc/opcode.h"
    op_push;
 
# 40 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
signed char 
# 40 "project/radare2/libr/asm/arch/pyc/opcode.h"
    op_pop;
} pyc_opcode_object;

typedef struct {
 
# 44 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
unsigned char 
# 44 "project/radare2/libr/asm/arch/pyc/opcode.h"
    extended_arg;
 
# 45 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
unsigned char 
# 45 "project/radare2/libr/asm/arch/pyc/opcode.h"
    have_argument;
 
# 46 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
unsigned char 
# 46 "project/radare2/libr/asm/arch/pyc/opcode.h"
    bits;
 void *(*version_sig)();
 RList *opcode_arg_fmt;
 pyc_opcode_object *opcodes;
} pyc_opcodes;

typedef struct {
 char *op_name;
 char *(*formatter)(
# 54 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                   unsigned int 
# 54 "project/radare2/libr/asm/arch/pyc/opcode.h"
                        oparg);
} pyc_arg_fmt;

typedef struct {
 char *version;
 pyc_opcodes *(*opcode_func)();
} version_opcode;

typedef struct {
 char *op_name;
 void (*func)(RAnalOp *op, pyc_opcode_object *op_obj, 
# 64 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                                     unsigned int 
# 64 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                                          oparg);
} op_anal_func;

void anal_pyc_op(RAnalOp *op, pyc_opcode_object *op_obj, 
# 67 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                                        unsigned int 
# 67 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                                             oparg);

pyc_opcodes *opcode_2x(void);
pyc_opcodes *opcode_3x(void);
pyc_opcodes *opcode_10(void);
pyc_opcodes *opcode_11(void);
pyc_opcodes *opcode_12(void);
pyc_opcodes *opcode_13(void);
pyc_opcodes *opcode_14(void);
pyc_opcodes *opcode_15(void);
pyc_opcodes *opcode_16(void);
pyc_opcodes *opcode_20(void);
pyc_opcodes *opcode_21(void);
pyc_opcodes *opcode_22(void);
pyc_opcodes *opcode_23(void);
pyc_opcodes *opcode_24(void);
pyc_opcodes *opcode_25(void);
pyc_opcodes *opcode_26(void);
pyc_opcodes *opcode_27(void);
pyc_opcodes *opcode_30(void);
pyc_opcodes *opcode_31(void);
pyc_opcodes *opcode_32(void);
pyc_opcodes *opcode_33(void);
pyc_opcodes *opcode_34(void);
pyc_opcodes *opcode_35(void);
pyc_opcodes *opcode_36(void);
pyc_opcodes *opcode_37(void);
pyc_opcodes *opcode_38(void);
pyc_opcodes *opcode_39(void);

pyc_opcodes *get_opcode_by_version(char *version);

pyc_opcodes *new_pyc_opcodes();
void free_opcode(pyc_opcodes *opcodes);

# 101 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
_Bool 
# 101 "project/radare2/libr/asm/arch/pyc/opcode.h"
    pyc_opcodes_equal(pyc_opcodes *op, const char *version);

void add_arg_fmt(pyc_opcodes *ret, char *op_name, char *(*formatter) (
# 103 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                                                     unsigned int 
# 103 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                                                          oparg));

char *format_MAKE_FUNCTION_arg_3x(
# 105 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                 unsigned int 
# 105 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                      oparg);
char *format_extended_arg(
# 106 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                         unsigned int 
# 106 "project/radare2/libr/asm/arch/pyc/opcode.h"
                              oparg);
char *format_CALL_FUNCTION_pos_name_encoded(
# 107 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                           unsigned int 
# 107 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                                oparg);
char *format_CALL_FUNCTION_KW_36(
# 108 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                unsigned int 
# 108 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                     oparg);
char *format_CALL_FUNCTION_EX_36(
# 109 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                unsigned int 
# 109 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                     oparg);
char *format_MAKE_FUNCTION_arg_36(
# 110 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                                 unsigned int 
# 110 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                      oparg);
char *format_value_flags_36(
# 111 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                           unsigned int 
# 111 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                oparg);
char *format_extended_arg_36(
# 112 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
                            unsigned int 
# 112 "project/radare2/libr/asm/arch/pyc/opcode.h"
                                 oparg);

struct op_parameter {
 pyc_opcode_object *op_obj;
 const char *op_name;
 
# 117 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
unsigned char 
# 117 "project/radare2/libr/asm/arch/pyc/opcode.h"
    op_code;
 
# 118 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
signed char 
# 118 "project/radare2/libr/asm/arch/pyc/opcode.h"
    pop;
 
# 119 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
signed char 
# 119 "project/radare2/libr/asm/arch/pyc/opcode.h"
    push;
 pyc_store_op_func func;
 
# 121 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
_Bool 
# 121 "project/radare2/libr/asm/arch/pyc/opcode.h"
     conditional;
 
# 122 "project/radare2/libr/asm/arch/pyc/opcode.h" 3 4
_Bool 
# 122 "project/radare2/libr/asm/arch/pyc/opcode.h"
     fallthrough;
};




void (def_opN)(struct op_parameter par);



void (name_opN)(struct op_parameter par);



void (local_opN)(struct op_parameter par);



void (free_opN)(struct op_parameter par);




void (store_opN)(struct op_parameter par);



void (varargs_op)(struct op_parameter par);



void (const_opN)(struct op_parameter par);



void (compare_op)(struct op_parameter par);




void (jabs_opN)(struct op_parameter par);




void (jrel_opN)(struct op_parameter par);



void (nargs_op)(struct op_parameter par);


void (rm_op)(struct op_parameter par);
# 2 "project/radare2/libr/asm/arch/pyc/opcode_21.c" 2

pyc_opcodes *opcode_21(void) {
 pyc_opcodes *ret = opcode_22 ();
 if (!ret) {
  return 
# 6 "project/radare2/libr/asm/arch/pyc/opcode_21.c" 3 4
        ((void *)0)
# 6 "project/radare2/libr/asm/arch/pyc/opcode_21.c"
            ;
 }

 ret->version_sig = (void *(*)())opcode_21;


 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "BINARY_FLOOR_DIVIDE", .op_code = 26 });
 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "BINARY_TRUE_DIVIDE", .op_code = 27 });
 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "INPLACE_FLOOR_DIVIDE", .op_code = 28 });
 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "INPLACE_TRUE_DIVIDE", .op_code = 29 });
 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "GET_ITER", .op_code = 68 });
 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "YIELD_VALUE", .op_code = 86 });
 rm_op((struct op_parameter){ .op_obj = ret->opcodes, .op_name = "FOR_ITER", .op_code = 93 });

 r_list_purge (ret->opcode_arg_fmt);
 add_arg_fmt (ret, "EXTENDED_ARG", format_extended_arg);

 return ret;
}
