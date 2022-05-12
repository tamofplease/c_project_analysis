# 0 "project/radare2/libr/asm/arch/riscv/riscv-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/riscv/riscv-opc.c"
# 23 "project/radare2/libr/asm/arch/riscv/riscv-opc.c"
# 1 "project/radare2/libr/asm/arch/riscv/riscv.h" 1
# 24 "project/radare2/libr/asm/arch/riscv/riscv.h"
# 1 "project/radare2/libr/asm/arch/riscv/riscv-opc.h" 1
# 25 "project/radare2/libr/asm/arch/riscv/riscv.h" 2
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








# 26 "project/radare2/libr/asm/arch/riscv/riscv.h" 2



# 28 "project/radare2/libr/asm/arch/riscv/riscv.h"
typedef uint64_t insn_t;

static inline unsigned int riscv_insn_length (insn_t insn)
{
  if ((insn & 0x3) != 0x3)
    return 2;
  if ((insn & 0x1f) != 0x1f)
    return 4;
  if ((insn & 0x3f) == 0x1f)
    return 6;
  if ((insn & 0x7f) == 0x3f)
    return 8;

  return 2;
}

static const char * const riscv_rm[8] =
{
  "rne", "rtz", "rdn", "rup", "rmm", 0, 0, "dyn"
};

static const char * const riscv_pred_succ[16] =
{
  0, "w", "r", "rw", "o", "ow", "or", "orw",
  "i", "iw", "ir", "irw", "io", "iow", "ior", "iorw"
};
# 266 "project/radare2/libr/asm/arch/riscv/riscv.h"
struct riscv_opcode
{

  const char *name;

  const char *subset;

  const char *args;



  insn_t match;





  insn_t mask;


  int (*match_func) (const struct riscv_opcode *op, insn_t word);



  unsigned long pinfo;
};
# 307 "project/radare2/libr/asm/arch/riscv/riscv.h"
enum
{
  M_LA,
  M_LLA,
  M_LA_TLS_GD,
  M_LA_TLS_IE,
  M_LB,
  M_LBU,
  M_LH,
  M_LHU,
  M_LW,
  M_LWU,
  M_LD,
  M_SB,
  M_SH,
  M_SW,
  M_SD,
  M_FLW,
  M_FLD,
  M_FLQ,
  M_FSW,
  M_FSD,
  M_FSQ,
  M_CALL,
  M_J,
  M_LI,
  M_NUM_MACROS
};
# 24 "project/radare2/libr/asm/arch/riscv/riscv-opc.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4

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
# 25 "project/radare2/libr/asm/arch/riscv/riscv-opc.c" 2




# 28 "project/radare2/libr/asm/arch/riscv/riscv-opc.c"
static const char * const riscv_gpr_names_numeric[32] =
{
  "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7",
  "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15",
  "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23",
  "x24", "x25", "x26", "x27", "x28", "x29", "x30", "x31"
};

static const char * const riscv_gpr_names_abi[32] = {
  "zero", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static const char * const riscv_fpr_names_numeric[32] =
{
  "f0", "f1", "f2", "f3", "f4", "f5", "f6", "f7",
  "f8", "f9", "f10", "f11", "f12", "f13", "f14", "f15",
  "f16", "f17", "f18", "f19", "f20", "f21", "f22", "f23",
  "f24", "f25", "f26", "f27", "f28", "f29", "f30", "f31"
};

static const char * const riscv_fpr_names_abi[32] = {
  "ft0", "ft1", "ft2", "ft3", "ft4", "ft5", "ft6", "ft7",
  "fs0", "fs1", "fa0", "fa1", "fa2", "fa3", "fa4", "fa5",
  "fa6", "fa7", "fs2", "fs3", "fs4", "fs5", "fs6", "fs7",
  "fs8", "fs9", "fs10", "fs11", "ft8", "ft9", "ft10", "ft11"
};
# 82 "project/radare2/libr/asm/arch/riscv/riscv-opc.c"
static int match_opcode(const struct riscv_opcode *op, insn_t insn)
{
  return ((insn ^ op->match) & op->mask) == 0;
}

static int match_never(const struct riscv_opcode *op, insn_t insn)
{
  return 0;
}

static int match_rs1_eq_rs2(const struct riscv_opcode *op, insn_t insn)
{
  int rs1 = (insn & (0x1f << 15)) >> 15;
  int rs2 = (insn & (0x1f << 20)) >> 20;
  return match_opcode (op, insn) && rs1 == rs2;
}

static int match_rd_nonzero(const struct riscv_opcode *op, insn_t insn)
{
  return match_opcode (op, insn) && ((insn & (0x1f << 7)) != 0);
}

static int match_c_add(const struct riscv_opcode *op, insn_t insn)
{
  return match_rd_nonzero (op, insn) && ((insn & (0x1f << 2)) != 0);
}

static int match_c_lui(const struct riscv_opcode *op, insn_t insn)
{
  return match_rd_nonzero (op, insn) && (((insn & (0x1f << 7)) >> 7) != 2);
}

static const struct riscv_opcode riscv_builtin_opcodes[] =
{

{"illegal", "C", "", 0, 0xffffU, match_opcode, 0 },
{"unimp", "I", "", 0x1073 | (0xc00 << 20), 0xffffffffU, match_opcode, 0 },
{"ebreak", "C", "", 0x9002, 0xffff, match_opcode, 0x00000001 },
{"ebreak", "I", "", 0x100073, 0xffffffff, match_opcode, 0 },
{"sbreak", "C", "", 0x9002, 0xffff, match_opcode, 0x00000001 },
{"sbreak", "I", "", 0x100073, 0xffffffff, match_opcode, 0x00000001 },
{"ret", "C", "", 0x8002 | (1 << 7), 0xf07f | (0x1f << 7), match_opcode, 0x00000001 },
{"ret", "I", "", 0x67 | (1 << 15), 0x707f | (0x1f << 7) | (0x1f << 15) | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"jr", "C", "d", 0x8002, 0xf07f, match_rd_nonzero, 0x00000001 },
{"jr", "I", "s", 0x67, 0x707f | (0x1f << 7) | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"jr", "I", "o(s)", 0x67, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"jr", "I", "s,j", 0x67, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"jalr", "C", "d", 0x9002, 0xf07f, match_rd_nonzero, 0x00000001 },
{"jalr", "I", "s", 0x67 | (1 << 7), 0x707f | (0x1f << 7) | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"jalr", "I", "o(s)", 0x67 | (1 << 7), 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"jalr", "I", "s,j", 0x67 | (1 << 7), 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"jalr", "I", "d,s", 0x67, 0x707f | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"jalr", "I", "d,o(s)", 0x67, 0x707f, match_opcode, 0 },
{"jalr", "I", "d,s,j", 0x67, 0x707f, match_opcode, 0 },
{"j", "C", "Ca", 0xa001, 0xe003, match_opcode, 0x00000001 },
{"j", "I", "a", 0x6f, 0x7f | (0x1f << 7), match_opcode, 0x00000001 },
{"jal", "I", "d,a", 0x6f, 0x7f, match_opcode, 0 },
{"jal", "32C", "Ca", 0x2001, 0xe003, match_opcode, 0x00000001 },
{"jal", "I", "a", 0x6f | (1 << 7), 0x7f | (0x1f << 7), match_opcode, 0x00000001 },
{"call", "I", "d,c", (6 << 15), (int) M_CALL, match_never, 0xffffffff },
{"call", "I", "c", (6 << 15) | (1 << 7), (int) M_CALL, match_never, 0xffffffff },
{"tail", "I", "c", (6 << 15), (int) M_CALL, match_never, 0xffffffff },
{"jump", "I", "c,s", 0, (int) M_CALL, match_never, 0xffffffff },
{"nop", "C", "", 0x1, 0xffff, match_opcode, 0x00000001 },
{"nop", "I", "", 0x13, 0x707f | (0x1f << 7) | (0x1f << 15) | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"lui", "C", "d,Cu", 0x6001, 0xe003, match_c_lui, 0x00000001 },
{"lui", "I", "d,u", 0x37, 0x7f, match_opcode, 0 },
{"li", "C", "d,Cv", 0x6001, 0xe003, match_c_lui, 0x00000001 },
{"li", "C", "d,Cj", 0x4001, 0xe003, match_rd_nonzero, 0x00000001 },
{"li", "C", "d,0", 0x4001, 0xe003 | ((((((unsigned int)-1) >> (0)) & ((1 << (5)) - 1)) << 2) | (((((unsigned int)-1) >> (5)) & ((1 << (1)) - 1)) << 12)), match_rd_nonzero, 0x00000001 },
{"li", "I", "d,j", 0x13, 0x707f | (0x1f << 15), match_opcode, 0x00000001 },
{"li", "I", "d,I", 0, (int) M_LI, match_never, 0xffffffff },
{"mv", "C", "d,CV", 0x8002, 0xf003, match_c_add, 0x00000001 },
{"mv", "I", "d,s", 0x13, 0x707f | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"move", "C", "d,CV", 0x8002, 0xf003, match_c_add, 0x00000001 },
{"move", "I", "d,s", 0x13, 0x707f | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"andi", "C", "Cs,Cw,Cj", 0x8801, 0xec03, match_opcode, 0x00000001 },
{"andi", "I", "d,s,j", 0x7013, 0x707f, match_opcode, 0 },
{"and", "C", "Cs,Cw,Ct", 0x8c61, 0xfc63, match_opcode, 0x00000001 },
{"and", "C", "Cs,Ct,Cw", 0x8c61, 0xfc63, match_opcode, 0x00000001 },
{"and", "C", "Cs,Cw,Cj", 0x8801, 0xec03, match_opcode, 0x00000001 },
{"and", "I", "d,s,t", 0x7033, 0xfe00707f, match_opcode, 0 },
{"and", "I", "d,s,j", 0x7013, 0x707f, match_opcode, 0x00000001 },
{"beqz", "C", "Cs,Cp", 0xc001, 0xe003, match_opcode, 0x00000001 },
{"beqz", "I", "s,p", 0x63, 0x707f | (0x1f << 20), match_opcode, 0x00000001 },
{"beq", "I", "s,t,p", 0x63, 0x707f, match_opcode, 0 },
{"blez", "I", "t,p", 0x5063, 0x707f | (0x1f << 15), match_opcode, 0x00000001 },
{"bgez", "I", "s,p", 0x5063, 0x707f | (0x1f << 20), match_opcode, 0x00000001 },
{"ble", "I", "t,s,p", 0x5063, 0x707f, match_opcode, 0x00000001 },
{"bleu", "I", "t,s,p", 0x7063, 0x707f, match_opcode, 0x00000001 },
{"bge", "I", "s,t,p", 0x5063, 0x707f, match_opcode, 0 },
{"bgeu", "I", "s,t,p", 0x7063, 0x707f, match_opcode, 0 },
{"bltz", "I", "s,p", 0x4063, 0x707f | (0x1f << 20), match_opcode, 0x00000001 },
{"bgtz", "I", "t,p", 0x4063, 0x707f | (0x1f << 15), match_opcode, 0x00000001 },
{"blt", "I", "s,t,p", 0x4063, 0x707f, match_opcode, 0 },
{"bltu", "I", "s,t,p", 0x6063, 0x707f, match_opcode, 0 },
{"bgt", "I", "t,s,p", 0x4063, 0x707f, match_opcode, 0x00000001 },
{"bgtu", "I", "t,s,p", 0x6063, 0x707f, match_opcode, 0x00000001 },
{"bnez", "C", "Cs,Cp", 0xe001, 0xe003, match_opcode, 0x00000001 },
{"bnez", "I", "s,p", 0x1063, 0x707f | (0x1f << 20), match_opcode, 0x00000001 },
{"bne", "I", "s,t,p", 0x1063, 0x707f, match_opcode, 0 },
{"addi", "C", "Ct,Cc,CK", 0x0, 0xe003, match_opcode, 0x00000001 },
{"addi", "C", "d,CU,Cj", 0x1, 0xe003, match_rd_nonzero, 0x00000001 },
{"addi", "C", "Cc,Cc,CL", 0x6101, 0xef83, match_opcode, 0x00000001 },
{"addi", "I", "d,s,j", 0x13, 0x707f, match_opcode, 0 },
{"add", "C", "d,CU,CV", 0x9002, 0xf003, match_c_add, 0x00000001 },
{"add", "C", "d,CV,CU", 0x9002, 0xf003, match_c_add, 0x00000001 },
{"add", "C", "d,CU,Cj", 0x1, 0xe003, match_rd_nonzero, 0x00000001 },
{"add", "C", "Ct,Cc,CK", 0x0, 0xe003, match_opcode, 0x00000001 },
{"add", "C", "Cc,Cc,CL", 0x6101, 0xef83, match_opcode, 0x00000001 },
{"add", "I", "d,s,t", 0x33, 0xfe00707f, match_opcode, 0 },
{"add", "I", "d,s,t,0",0x33, 0xfe00707f, match_opcode, 0 },
{"add", "I", "d,s,j", 0x13, 0x707f, match_opcode, 0x00000001 },
{"la", "I", "d,A", 0, (int) M_LA, match_never, 0xffffffff },
{"lla", "I", "d,A", 0, (int) M_LLA, match_never, 0xffffffff },
{"la.tls.gd", "I", "d,A", 0, (int) M_LA_TLS_GD, match_never, 0xffffffff },
{"la.tls.ie", "I", "d,A", 0, (int) M_LA_TLS_IE, match_never, 0xffffffff },
{"neg", "I", "d,t", 0x40000033, 0xfe00707f | (0x1f << 15), match_opcode, 0x00000001 },
{"slli", "C", "d,CU,C>", 0x2, 0xe003, match_rd_nonzero, 0x00000001 },
{"slli", "I", "d,s,>", 0x1013, 0xfc00707f, match_opcode, 0 },
{"sll", "C", "d,CU,C>", 0x2, 0xe003, match_rd_nonzero, 0x00000001 },
{"sll", "I", "d,s,t", 0x1033, 0xfe00707f, match_opcode, 0 },
{"sll", "I", "d,s,>", 0x1013, 0xfc00707f, match_opcode, 0x00000001 },
{"srli", "C", "Cs,Cw,C>", 0x8001, 0xec03, match_rd_nonzero, 0x00000001 },
{"srli", "I", "d,s,>", 0x5013, 0xfc00707f, match_opcode, 0 },
{"srl", "C", "Cs,Cw,C>", 0x8001, 0xec03, match_rd_nonzero, 0x00000001 },
{"srl", "I", "d,s,t", 0x5033, 0xfe00707f, match_opcode, 0 },
{"srl", "I", "d,s,>", 0x5013, 0xfc00707f, match_opcode, 0x00000001 },
{"srai", "C", "Cs,Cw,C>", 0x8401, 0xec03, match_rd_nonzero, 0x00000001 },
{"srai", "I", "d,s,>", 0x40005013, 0xfc00707f, match_opcode, 0 },
{"sra", "C", "Cs,Cw,C>", 0x8401, 0xec03, match_rd_nonzero, 0x00000001 },
{"sra", "I", "d,s,t", 0x40005033, 0xfe00707f, match_opcode, 0 },
{"sra", "I", "d,s,>", 0x40005013, 0xfc00707f, match_opcode, 0x00000001 },
{"sub", "C", "Cs,Cw,Ct", 0x8c01, 0xfc63, match_opcode, 0x00000001 },
{"sub", "I", "d,s,t", 0x40000033, 0xfe00707f, match_opcode, 0 },
{"lb", "I", "d,o(s)", 0x3, 0x707f, match_opcode, 0 },
{"lb", "I", "d,A", 0, (int) M_LB, match_never, 0xffffffff },
{"lbu", "I", "d,o(s)", 0x4003, 0x707f, match_opcode, 0 },
{"lbu", "I", "d,A", 0, (int) M_LBU, match_never, 0xffffffff },
{"lh", "I", "d,o(s)", 0x1003, 0x707f, match_opcode, 0 },
{"lh", "I", "d,A", 0, (int) M_LH, match_never, 0xffffffff },
{"lhu", "I", "d,o(s)", 0x5003, 0x707f, match_opcode, 0 },
{"lhu", "I", "d,A", 0, (int) M_LHU, match_never, 0xffffffff },
{"lw", "C", "d,Cm(Cc)", 0x4002, 0xe003, match_rd_nonzero, 0x00000001 },
{"lw", "C", "Ct,Ck(Cs)", 0x4000, 0xe003, match_opcode, 0x00000001 },
{"lw", "I", "d,o(s)", 0x2003, 0x707f, match_opcode, 0 },
{"lw", "I", "d,A", 0, (int) M_LW, match_never, 0xffffffff },
{"not", "I", "d,s", 0x4013 | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), 0x707f | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"ori", "I", "d,s,j", 0x6013, 0x707f, match_opcode, 0 },
{"or", "C", "Cs,Cw,Ct", 0x8c41, 0xfc63, match_opcode, 0x00000001 },
{"or", "C", "Cs,Ct,Cw", 0x8c41, 0xfc63, match_opcode, 0x00000001 },
{"or", "I", "d,s,t", 0x6033, 0xfe00707f, match_opcode, 0 },
{"or", "I", "d,s,j", 0x6013, 0x707f, match_opcode, 0x00000001 },
{"auipc", "I", "d,u", 0x17, 0x7f, match_opcode, 0 },
{"seqz", "I", "d,s", 0x3013 | ((((1) >> (0)) & ((1 << (12)) - 1)) << 20), 0x707f | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"snez", "I", "d,t", 0x3033, 0xfe00707f | (0x1f << 15), match_opcode, 0x00000001 },
{"sltz", "I", "d,s", 0x2033, 0xfe00707f | (0x1f << 20), match_opcode, 0x00000001 },
{"sgtz", "I", "d,t", 0x2033, 0xfe00707f | (0x1f << 15), match_opcode, 0x00000001 },
{"slti", "I", "d,s,j", 0x2013, 0x707f, match_opcode, 0x00000001 },
{"slt", "I", "d,s,t", 0x2033, 0xfe00707f, match_opcode, 0 },
{"slt", "I", "d,s,j", 0x2013, 0x707f, match_opcode, 0 },
{"sltiu", "I", "d,s,j", 0x3013, 0x707f, match_opcode, 0 },
{"sltu", "I", "d,s,t", 0x3033, 0xfe00707f, match_opcode, 0 },
{"sltu", "I", "d,s,j", 0x3013, 0x707f, match_opcode, 0x00000001 },
{"sgt", "I", "d,t,s", 0x2033, 0xfe00707f, match_opcode, 0x00000001 },
{"sgtu", "I", "d,t,s", 0x3033, 0xfe00707f, match_opcode, 0x00000001 },
{"sb", "I", "t,q(s)", 0x23, 0x707f, match_opcode, 0 },
{"sb", "I", "t,A,s", 0, (int) M_SB, match_never, 0xffffffff },
{"sh", "I", "t,q(s)", 0x1023, 0x707f, match_opcode, 0 },
{"sh", "I", "t,A,s", 0, (int) M_SH, match_never, 0xffffffff },
{"sw", "C", "CV,CM(Cc)", 0xc002, 0xe003, match_opcode, 0x00000001 },
{"sw", "C", "Ct,Ck(Cs)", 0xc000, 0xe003, match_opcode, 0x00000001 },
{"sw", "I", "t,q(s)", 0x2023, 0x707f, match_opcode, 0 },
{"sw", "I", "t,A,s", 0, (int) M_SW, match_never, 0xffffffff },
{"fence", "I", "", 0xf | (0xf << 24) | (0xf << 20), 0x707f | (0x1f << 7) | (0x1f << 15) | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"fence", "I", "P,Q", 0xf, 0x707f | (0x1f << 7) | (0x1f << 15) | ((((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20) & ~(0xf << 24) & ~(0xf << 20)), match_opcode, 0 },
{"fence.i", "I", "", 0x100f, 0x707f | (0x1f << 7) | (0x1f << 15) | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0 },
{"rdcycle", "I", "d", 0xc0002073, 0xfffff07f, match_opcode, 0x00000001 },
{"rdinstret", "I", "d", 0xc0202073, 0xfffff07f, match_opcode, 0x00000001 },
{"rdtime", "I", "d", 0xc0102073, 0xfffff07f, match_opcode, 0x00000001 },
{"rdcycleh", "32I", "d", 0xc8002073, 0xfffff07f, match_opcode, 0x00000001 },
{"rdinstreth","32I", "d", 0xc8202073, 0xfffff07f, match_opcode, 0x00000001 },
{"rdtimeh", "32I", "d", 0xc8102073, 0xfffff07f, match_opcode, 0x00000001 },
{"ecall", "I", "", 0x73, 0xffffffff, match_opcode, 0 },
{"scall", "I", "", 0x73, 0xffffffff, match_opcode, 0 },
{"xori", "I", "d,s,j", 0x4013, 0x707f, match_opcode, 0 },
{"xor", "C", "Cs,Cw,Ct", 0x8c21, 0xfc63, match_opcode, 0x00000001 },
{"xor", "C", "Cs,Ct,Cw", 0x8c21, 0xfc63, match_opcode, 0x00000001 },
{"xor", "I", "d,s,t", 0x4033, 0xfe00707f, match_opcode, 0 },
{"xor", "I", "d,s,j", 0x4013, 0x707f, match_opcode, 0x00000001 },
{"lwu", "64I", "d,o(s)", 0x6003, 0x707f, match_opcode, 0 },
{"lwu", "64I", "d,A", 0, (int) M_LWU, match_never, 0xffffffff },
{"ld", "64C", "d,Cn(Cc)", 0x6002, 0xe003, match_rd_nonzero, 0x00000001 },
{"ld", "64C", "Ct,Cl(Cs)", 0x6000, 0xe003, match_opcode, 0x00000001 },
{"ld", "64I", "d,o(s)", 0x3003, 0x707f, match_opcode, 0 },
{"ld", "64I", "d,A", 0, (int) M_LD, match_never, 0xffffffff },
{"sd", "64C", "CV,CN(Cc)", 0xe002, 0xe003, match_opcode, 0x00000001 },
{"sd", "64C", "Ct,Cl(Cs)", 0xe000, 0xe003, match_opcode, 0x00000001 },
{"sd", "64I", "t,q(s)", 0x3023, 0x707f, match_opcode, 0 },
{"sd", "64I", "t,A,s", 0, (int) M_SD, match_never, 0xffffffff },
{"sext.w", "64C", "d,CU", 0x2001, 0xe003 | ((((((unsigned int)-1) >> (0)) & ((1 << (5)) - 1)) << 2) | (((((unsigned int)-1) >> (5)) & ((1 << (1)) - 1)) << 12)), match_rd_nonzero, 0x00000001 },
{"sext.w", "64I", "d,s", 0x1b, 0x707f | (((((unsigned int)-1) >> (0)) & ((1 << (12)) - 1)) << 20), match_opcode, 0x00000001 },
{"addiw", "64C", "d,CU,Cj", 0x2001, 0xe003, match_rd_nonzero, 0x00000001 },
{"addiw", "64I", "d,s,j", 0x1b, 0x707f, match_opcode, 0 },
{"addw", "64C", "Cs,Cw,Ct", 0x9c21, 0xfc63, match_opcode, 0x00000001 },
{"addw", "64C", "Cs,Ct,Cw", 0x9c21, 0xfc63, match_opcode, 0x00000001 },
{"addw", "64C", "d,CU,Cj", 0x2001, 0xe003, match_rd_nonzero, 0x00000001 },
{"addw", "64I", "d,s,t", 0x3b, 0xfe00707f, match_opcode, 0 },
{"addw", "64I", "d,s,j", 0x1b, 0x707f, match_opcode, 0x00000001 },
{"negw", "64I", "d,t", 0x4000003b, 0xfe00707f | (0x1f << 15), match_opcode, 0x00000001 },
{"slliw", "64I", "d,s,<", 0x101b, 0xfe00707f, match_opcode, 0 },
{"sllw", "64I", "d,s,t", 0x103b, 0xfe00707f, match_opcode, 0 },
{"sllw", "64I", "d,s,<", 0x101b, 0xfe00707f, match_opcode, 0x00000001 },
{"srliw", "64I", "d,s,<", 0x501b, 0xfe00707f, match_opcode, 0 },
{"srlw", "64I", "d,s,t", 0x503b, 0xfe00707f, match_opcode, 0 },
{"srlw", "64I", "d,s,<", 0x501b, 0xfe00707f, match_opcode, 0x00000001 },
{"sraiw", "64I", "d,s,<", 0x4000501b, 0xfe00707f, match_opcode, 0 },
{"sraw", "64I", "d,s,t", 0x4000503b, 0xfe00707f, match_opcode, 0 },
{"sraw", "64I", "d,s,<", 0x4000501b, 0xfe00707f, match_opcode, 0x00000001 },
{"subw", "64C", "Cs,Cw,Ct", 0x9c01, 0xfc63, match_opcode, 0x00000001 },
{"subw", "64I", "d,s,t", 0x4000003b, 0xfe00707f, match_opcode, 0 },


{"lr.w", "A", "d,0(s)", 0x1000202f, 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.w", "A", "d,t,0(s)", 0x1800202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.w", "A", "d,t,0(s)", 0x202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.w", "A", "d,t,0(s)", 0x800202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.w", "A", "d,t,0(s)", 0x6000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.w", "A", "d,t,0(s)", 0x4000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.w", "A", "d,t,0(s)", 0x2000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.w", "A", "d,t,0(s)", 0xa000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.w", "A", "d,t,0(s)", 0xe000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.w", "A", "d,t,0(s)", 0x8000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.w", "A", "d,t,0(s)", 0xc000202f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.w.aq", "A", "d,0(s)", 0x1000202f | (0x1 << 26), 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.w.aq", "A", "d,t,0(s)", 0x1800202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.w.aq", "A", "d,t,0(s)", 0x202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.w.aq", "A", "d,t,0(s)", 0x800202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.w.aq", "A", "d,t,0(s)", 0x6000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.w.aq", "A", "d,t,0(s)", 0x4000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.w.aq", "A", "d,t,0(s)", 0x2000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.w.aq", "A", "d,t,0(s)", 0xa000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.w.aq", "A", "d,t,0(s)", 0xe000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.w.aq", "A", "d,t,0(s)", 0x8000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.w.aq", "A", "d,t,0(s)", 0xc000202f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.w.rl", "A", "d,0(s)", 0x1000202f | (0x1 << 25), 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.w.rl", "A", "d,t,0(s)", 0x1800202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.w.rl", "A", "d,t,0(s)", 0x202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.w.rl", "A", "d,t,0(s)", 0x800202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.w.rl", "A", "d,t,0(s)", 0x6000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.w.rl", "A", "d,t,0(s)", 0x4000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.w.rl", "A", "d,t,0(s)", 0x2000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.w.rl", "A", "d,t,0(s)", 0xa000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.w.rl", "A", "d,t,0(s)", 0xe000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.w.rl", "A", "d,t,0(s)", 0x8000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.w.rl", "A", "d,t,0(s)", 0xc000202f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.w.aqrl", "A", "d,0(s)", 0x1000202f | ((0x1 << 26) | (0x1 << 25)), 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.w.aqrl", "A", "d,t,0(s)", 0x1800202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.w.aqrl", "A", "d,t,0(s)", 0x202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.w.aqrl", "A", "d,t,0(s)", 0x800202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.w.aqrl", "A", "d,t,0(s)", 0x6000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.w.aqrl", "A", "d,t,0(s)", 0x4000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.w.aqrl", "A", "d,t,0(s)", 0x2000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.w.aqrl", "A", "d,t,0(s)", 0xa000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.w.aqrl", "A", "d,t,0(s)", 0xe000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.w.aqrl", "A", "d,t,0(s)", 0x8000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.w.aqrl", "A", "d,t,0(s)", 0xc000202f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.d", "64A", "d,0(s)", 0x1000302f, 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.d", "64A", "d,t,0(s)", 0x1800302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.d", "64A", "d,t,0(s)", 0x302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.d", "64A", "d,t,0(s)", 0x800302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.d", "64A", "d,t,0(s)", 0x6000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.d", "64A", "d,t,0(s)", 0x4000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.d", "64A", "d,t,0(s)", 0x2000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.d", "64A", "d,t,0(s)", 0xa000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.d", "64A", "d,t,0(s)", 0xe000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.d", "64A", "d,t,0(s)", 0x8000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.d", "64A", "d,t,0(s)", 0xc000302f, 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.d.aq", "64A", "d,0(s)", 0x1000302f | (0x1 << 26), 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.d.aq", "64A", "d,t,0(s)", 0x1800302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.d.aq", "64A", "d,t,0(s)", 0x302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.d.aq", "64A", "d,t,0(s)", 0x800302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.d.aq", "64A", "d,t,0(s)", 0x6000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.d.aq", "64A", "d,t,0(s)", 0x4000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.d.aq", "64A", "d,t,0(s)", 0x2000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.d.aq", "64A", "d,t,0(s)", 0xa000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.d.aq", "64A", "d,t,0(s)", 0xe000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.d.aq", "64A", "d,t,0(s)", 0x8000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.d.aq", "64A", "d,t,0(s)", 0xc000302f | (0x1 << 26), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.d.rl", "64A", "d,0(s)", 0x1000302f | (0x1 << 25), 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.d.rl", "64A", "d,t,0(s)", 0x1800302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.d.rl", "64A", "d,t,0(s)", 0x302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.d.rl", "64A", "d,t,0(s)", 0x800302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.d.rl", "64A", "d,t,0(s)", 0x6000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.d.rl", "64A", "d,t,0(s)", 0x4000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.d.rl", "64A", "d,t,0(s)", 0x2000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.d.rl", "64A", "d,t,0(s)", 0xa000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.d.rl", "64A", "d,t,0(s)", 0xe000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.d.rl", "64A", "d,t,0(s)", 0x8000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.d.rl", "64A", "d,t,0(s)", 0xc000302f | (0x1 << 25), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"lr.d.aqrl", "64A", "d,0(s)", 0x1000302f | ((0x1 << 26) | (0x1 << 25)), 0xf9f0707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"sc.d.aqrl", "64A", "d,t,0(s)", 0x1800302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoadd.d.aqrl", "64A", "d,t,0(s)", 0x302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoswap.d.aqrl", "64A", "d,t,0(s)", 0x800302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoand.d.aqrl", "64A", "d,t,0(s)", 0x6000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoor.d.aqrl", "64A", "d,t,0(s)", 0x4000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amoxor.d.aqrl", "64A", "d,t,0(s)", 0x2000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomax.d.aqrl", "64A", "d,t,0(s)", 0xa000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomaxu.d.aqrl", "64A", "d,t,0(s)", 0xe000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amomin.d.aqrl", "64A", "d,t,0(s)", 0x8000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },
{"amominu.d.aqrl", "64A", "d,t,0(s)", 0xc000302f | ((0x1 << 26) | (0x1 << 25)), 0xf800707f | ((0x1 << 26) | (0x1 << 25)), match_opcode, 0 },


{"mul", "M", "d,s,t", 0x2000033, 0xfe00707f, match_opcode, 0 },
{"mulh", "M", "d,s,t", 0x2001033, 0xfe00707f, match_opcode, 0 },
{"mulhu", "M", "d,s,t", 0x2003033, 0xfe00707f, match_opcode, 0 },
{"mulhsu", "M", "d,s,t", 0x2002033, 0xfe00707f, match_opcode, 0 },
{"div", "M", "d,s,t", 0x2004033, 0xfe00707f, match_opcode, 0 },
{"divu", "M", "d,s,t", 0x2005033, 0xfe00707f, match_opcode, 0 },
{"rem", "M", "d,s,t", 0x2006033, 0xfe00707f, match_opcode, 0 },
{"remu", "M", "d,s,t", 0x2007033, 0xfe00707f, match_opcode, 0 },
{"mulw", "64M", "d,s,t", 0x200003b, 0xfe00707f, match_opcode, 0 },
{"divw", "64M", "d,s,t", 0x200403b, 0xfe00707f, match_opcode, 0 },
{"divuw", "64M", "d,s,t", 0x200503b, 0xfe00707f, match_opcode, 0 },
{"remw", "64M", "d,s,t", 0x200603b, 0xfe00707f, match_opcode, 0 },
{"remuw", "64M", "d,s,t", 0x200703b, 0xfe00707f, match_opcode, 0 },


{"frsr", "F", "d", 0x302073, 0xfffff07f, match_opcode, 0 },
{"fssr", "F", "s", 0x301073, 0xfff0707f | (0x1f << 7), match_opcode, 0 },
{"fssr", "F", "d,s", 0x301073, 0xfff0707f, match_opcode, 0 },
{"frcsr", "F", "d", 0x302073, 0xfffff07f, match_opcode, 0 },
{"fscsr", "F", "s", 0x301073, 0xfff0707f | (0x1f << 7), match_opcode, 0 },
{"fscsr", "F", "d,s", 0x301073, 0xfff0707f, match_opcode, 0 },
{"frrm", "F", "d", 0x202073, 0xfffff07f, match_opcode, 0 },
{"fsrm", "F", "s", 0x201073, 0xfff0707f | (0x1f << 7), match_opcode, 0 },
{"fsrm", "F", "d,s", 0x201073, 0xfff0707f, match_opcode, 0 },
{"frflags", "F", "d", 0x102073, 0xfffff07f, match_opcode, 0 },
{"fsflags", "F", "s", 0x101073, 0xfff0707f | (0x1f << 7), match_opcode, 0 },
{"fsflags", "F", "d,s", 0x101073, 0xfff0707f, match_opcode, 0 },
{"flw", "32C", "D,Cm(Cc)", 0x6002, 0xe003, match_opcode, 0x00000001 },
{"flw", "32C", "CD,Ck(Cs)", 0x6000, 0xe003, match_opcode, 0x00000001 },
{"flw", "F", "D,o(s)", 0x2007, 0x707f, match_opcode, 0 },
{"flw", "F", "D,A,s", 0, (int) M_FLW, match_never, 0xffffffff },
{"fsw", "32C", "CT,CM(Cc)", 0xe002, 0xe003, match_opcode, 0x00000001 },
{"fsw", "32C", "CD,Ck(Cs)", 0xe000, 0xe003, match_opcode, 0x00000001 },
{"fsw", "F", "T,q(s)", 0x2027, 0x707f, match_opcode, 0 },
{"fsw", "F", "T,A,s", 0, (int) M_FSW, match_never, 0xffffffff },
{"fmv.x.s", "F", "d,S", 0xe0000053, 0xfff0707f, match_opcode, 0 },
{"fmv.s.x", "F", "D,s", 0xf0000053, 0xfff0707f, match_opcode, 0 },
{"fmv.s", "F", "D,U", 0x20000053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fneg.s", "F", "D,U", 0x20001053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fabs.s", "F", "D,U", 0x20002053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fsgnj.s", "F", "D,S,T", 0x20000053, 0xfe00707f, match_opcode, 0 },
{"fsgnjn.s", "F", "D,S,T", 0x20001053, 0xfe00707f, match_opcode, 0 },
{"fsgnjx.s", "F", "D,S,T", 0x20002053, 0xfe00707f, match_opcode, 0 },
{"fadd.s", "F", "D,S,T", 0x53 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fadd.s", "F", "D,S,T,m", 0x53, 0xfe00007f, match_opcode, 0 },
{"fsub.s", "F", "D,S,T", 0x8000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fsub.s", "F", "D,S,T,m", 0x8000053, 0xfe00007f, match_opcode, 0 },
{"fmul.s", "F", "D,S,T", 0x10000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fmul.s", "F", "D,S,T,m", 0x10000053, 0xfe00007f, match_opcode, 0 },
{"fdiv.s", "F", "D,S,T", 0x18000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fdiv.s", "F", "D,S,T,m", 0x18000053, 0xfe00007f, match_opcode, 0 },
{"fsqrt.s", "F", "D,S", 0x58000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fsqrt.s", "F", "D,S,m", 0x58000053, 0xfff0007f, match_opcode, 0 },
{"fmin.s", "F", "D,S,T", 0x28000053, 0xfe00707f, match_opcode, 0 },
{"fmax.s", "F", "D,S,T", 0x28001053, 0xfe00707f, match_opcode, 0 },
{"fmadd.s", "F", "D,S,T,R", 0x43 | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fmadd.s", "F", "D,S,T,R,m", 0x43, 0x600007f, match_opcode, 0 },
{"fnmadd.s", "F", "D,S,T,R", 0x4f | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fnmadd.s", "F", "D,S,T,R,m", 0x4f, 0x600007f, match_opcode, 0 },
{"fmsub.s", "F", "D,S,T,R", 0x47 | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fmsub.s", "F", "D,S,T,R,m", 0x47, 0x600007f, match_opcode, 0 },
{"fnmsub.s", "F", "D,S,T,R", 0x4b | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fnmsub.s", "F", "D,S,T,R,m", 0x4b, 0x600007f, match_opcode, 0 },
{"fcvt.w.s", "F", "d,S", 0xc0000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.w.s", "F", "d,S,m", 0xc0000053, 0xfff0007f, match_opcode, 0 },
{"fcvt.wu.s", "F", "d,S", 0xc0100053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.wu.s", "F", "d,S,m", 0xc0100053, 0xfff0007f, match_opcode, 0 },
{"fcvt.s.w", "F", "D,s", 0xd0000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.w", "F", "D,s,m", 0xd0000053, 0xfff0007f, match_opcode, 0 },
{"fcvt.s.wu", "F", "D,s", 0xd0100053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.wu", "F", "D,s,m", 0xd0100053, 0xfff0007f, match_opcode, 0 },
{"fclass.s", "F", "d,S", 0xe0001053, 0xfff0707f, match_opcode, 0 },
{"feq.s", "F", "d,S,T", 0xa0002053, 0xfe00707f, match_opcode, 0 },
{"flt.s", "F", "d,S,T", 0xa0001053, 0xfe00707f, match_opcode, 0 },
{"fle.s", "F", "d,S,T", 0xa0000053, 0xfe00707f, match_opcode, 0 },
{"fgt.s", "F", "d,T,S", 0xa0001053, 0xfe00707f, match_opcode, 0 },
{"fge.s", "F", "d,T,S", 0xa0000053, 0xfe00707f, match_opcode, 0 },
{"fcvt.l.s", "64F", "d,S", 0xc0200053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.l.s", "64F", "d,S,m", 0xc0200053, 0xfff0007f, match_opcode, 0 },
{"fcvt.lu.s", "64F", "d,S", 0xc0300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.lu.s", "64F", "d,S,m", 0xc0300053, 0xfff0007f, match_opcode, 0 },
{"fcvt.s.l", "64F", "D,s", 0xd0200053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.l", "64F", "D,s,m", 0xd0200053, 0xfff0007f, match_opcode, 0 },
{"fcvt.s.lu", "64F", "D,s", 0xd0300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.lu", "64F", "D,s,m", 0xd0300053, 0xfff0007f, match_opcode, 0 },


{"fld", "C", "D,Cn(Cc)", 0x2002, 0xe003, match_opcode, 0x00000001 },
{"fld", "C", "CD,Cl(Cs)", 0x2000, 0xe003, match_opcode, 0x00000001 },
{"fld", "D", "D,o(s)", 0x3007, 0x707f, match_opcode, 0 },
{"fld", "D", "D,A,s", 0, (int) M_FLD, match_never, 0xffffffff },
{"fsd", "C", "CT,CN(Cc)", 0xa002, 0xe003, match_opcode, 0x00000001 },
{"fsd", "C", "CD,Cl(Cs)", 0xa000, 0xe003, match_opcode, 0x00000001 },
{"fsd", "D", "T,q(s)", 0x3027, 0x707f, match_opcode, 0 },
{"fsd", "D", "T,A,s", 0, (int) M_FSD, match_never, 0xffffffff },
{"fmv.d", "D", "D,U", 0x22000053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fneg.d", "D", "D,U", 0x22001053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fabs.d", "D", "D,U", 0x22002053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fsgnj.d", "D", "D,S,T", 0x22000053, 0xfe00707f, match_opcode, 0 },
{"fsgnjn.d", "D", "D,S,T", 0x22001053, 0xfe00707f, match_opcode, 0 },
{"fsgnjx.d", "D", "D,S,T", 0x22002053, 0xfe00707f, match_opcode, 0 },
{"fadd.d", "D", "D,S,T", 0x2000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fadd.d", "D", "D,S,T,m", 0x2000053, 0xfe00007f, match_opcode, 0 },
{"fsub.d", "D", "D,S,T", 0xa000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fsub.d", "D", "D,S,T,m", 0xa000053, 0xfe00007f, match_opcode, 0 },
{"fmul.d", "D", "D,S,T", 0x12000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fmul.d", "D", "D,S,T,m", 0x12000053, 0xfe00007f, match_opcode, 0 },
{"fdiv.d", "D", "D,S,T", 0x1a000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fdiv.d", "D", "D,S,T,m", 0x1a000053, 0xfe00007f, match_opcode, 0 },
{"fsqrt.d", "D", "D,S", 0x5a000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fsqrt.d", "D", "D,S,m", 0x5a000053, 0xfff0007f, match_opcode, 0 },
{"fmin.d", "D", "D,S,T", 0x2a000053, 0xfe00707f, match_opcode, 0 },
{"fmax.d", "D", "D,S,T", 0x2a001053, 0xfe00707f, match_opcode, 0 },
{"fmadd.d", "D", "D,S,T,R", 0x2000043 | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fmadd.d", "D", "D,S,T,R,m", 0x2000043, 0x600007f, match_opcode, 0 },
{"fnmadd.d", "D", "D,S,T,R", 0x200004f | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fnmadd.d", "D", "D,S,T,R,m", 0x200004f, 0x600007f, match_opcode, 0 },
{"fmsub.d", "D", "D,S,T,R", 0x2000047 | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fmsub.d", "D", "D,S,T,R,m", 0x2000047, 0x600007f, match_opcode, 0 },
{"fnmsub.d", "D", "D,S,T,R", 0x200004b | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fnmsub.d", "D", "D,S,T,R,m", 0x200004b, 0x600007f, match_opcode, 0 },
{"fcvt.w.d", "D", "d,S", 0xc2000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.w.d", "D", "d,S,m", 0xc2000053, 0xfff0007f, match_opcode, 0 },
{"fcvt.wu.d", "D", "d,S", 0xc2100053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.wu.d", "D", "d,S,m", 0xc2100053, 0xfff0007f, match_opcode, 0 },
{"fcvt.d.w", "D", "D,s", 0xd2000053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.d.wu", "D", "D,s", 0xd2100053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.d.s", "D", "D,S", 0x42000053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.d", "D", "D,S", 0x40100053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.d", "D", "D,S,m", 0x40100053, 0xfff0007f, match_opcode, 0 },
{"fclass.d", "D", "d,S", 0xe2001053, 0xfff0707f, match_opcode, 0 },
{"feq.d", "D", "d,S,T", 0xa2002053, 0xfe00707f, match_opcode, 0 },
{"flt.d", "D", "d,S,T", 0xa2001053, 0xfe00707f, match_opcode, 0 },
{"fle.d", "D", "d,S,T", 0xa2000053, 0xfe00707f, match_opcode, 0 },
{"fgt.d", "D", "d,T,S", 0xa2001053, 0xfe00707f, match_opcode, 0 },
{"fge.d", "D", "d,T,S", 0xa2000053, 0xfe00707f, match_opcode, 0 },
{"fmv.x.d", "64D", "d,S", 0xe2000053, 0xfff0707f, match_opcode, 0 },
{"fmv.d.x", "64D", "D,s", 0xf2000053, 0xfff0707f, match_opcode, 0 },
{"fcvt.l.d", "64D", "d,S", 0xc2200053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.l.d", "64D", "d,S,m", 0xc2200053, 0xfff0007f, match_opcode, 0 },
{"fcvt.lu.d", "64D", "d,S", 0xc2300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.lu.d", "64D", "d,S,m", 0xc2300053, 0xfff0007f, match_opcode, 0 },
{"fcvt.d.l", "64D", "D,s", 0xd2200053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.d.l", "64D", "D,s,m", 0xd2200053, 0xfff0007f, match_opcode, 0 },
{"fcvt.d.lu", "64D", "D,s", 0xd2300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.d.lu", "64D", "D,s,m", 0xd2300053, 0xfff0007f, match_opcode, 0 },


{"flq", "Q", "D,o(s)", 0x4007, 0x707f, match_opcode, 0 },
{"flq", "Q", "D,A,s", 0, (int) M_FLQ, match_never, 0xffffffff },
{"fsq", "Q", "T,q(s)", 0x4027, 0x707f, match_opcode, 0 },
{"fsq", "Q", "T,A,s", 0, (int) M_FSQ, match_never, 0xffffffff },
{"fmv.q", "Q", "D,U", 0x26000053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fneg.q", "Q", "D,U", 0x26001053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fabs.q", "Q", "D,U", 0x26002053, 0xfe00707f, match_rs1_eq_rs2, 0x00000001 },
{"fsgnj.q", "Q", "D,S,T", 0x26000053, 0xfe00707f, match_opcode, 0 },
{"fsgnjn.q", "Q", "D,S,T", 0x26001053, 0xfe00707f, match_opcode, 0 },
{"fsgnjx.q", "Q", "D,S,T", 0x26002053, 0xfe00707f, match_opcode, 0 },
{"fadd.q", "Q", "D,S,T", 0x6000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fadd.q", "Q", "D,S,T,m", 0x6000053, 0xfe00007f, match_opcode, 0 },
{"fsub.q", "Q", "D,S,T", 0xe000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fsub.q", "Q", "D,S,T,m", 0xe000053, 0xfe00007f, match_opcode, 0 },
{"fmul.q", "Q", "D,S,T", 0x16000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fmul.q", "Q", "D,S,T,m", 0x16000053, 0xfe00007f, match_opcode, 0 },
{"fdiv.q", "Q", "D,S,T", 0x1e000053 | (0x7 << 12), 0xfe00007f | (0x7 << 12), match_opcode, 0 },
{"fdiv.q", "Q", "D,S,T,m", 0x1e000053, 0xfe00007f, match_opcode, 0 },
{"fsqrt.q", "Q", "D,S", 0x5e000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fsqrt.q", "Q", "D,S,m", 0x5e000053, 0xfff0007f, match_opcode, 0 },
{"fmin.q", "Q", "D,S,T", 0x2e000053, 0xfe00707f, match_opcode, 0 },
{"fmax.q", "Q", "D,S,T", 0x2e001053, 0xfe00707f, match_opcode, 0 },
{"fmadd.q", "Q", "D,S,T,R", 0x6000043 | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fmadd.q", "Q", "D,S,T,R,m", 0x6000043, 0x600007f, match_opcode, 0 },
{"fnmadd.q", "Q", "D,S,T,R", 0x600004f | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fnmadd.q", "Q", "D,S,T,R,m", 0x600004f, 0x600007f, match_opcode, 0 },
{"fmsub.q", "Q", "D,S,T,R", 0x6000047 | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fmsub.q", "Q", "D,S,T,R,m", 0x6000047, 0x600007f, match_opcode, 0 },
{"fnmsub.q", "Q", "D,S,T,R", 0x600004b | (0x7 << 12), 0x600007f | (0x7 << 12), match_opcode, 0 },
{"fnmsub.q", "Q", "D,S,T,R,m", 0x600004b, 0x600007f, match_opcode, 0 },
{"fcvt.w.q", "Q", "d,S", 0xc6000053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.w.q", "Q", "d,S,m", 0xc6000053, 0xfff0007f, match_opcode, 0 },
{"fcvt.wu.q", "Q", "d,S", 0xc6100053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.wu.q", "Q", "d,S,m", 0xc6100053, 0xfff0007f, match_opcode, 0 },
{"fcvt.q.w", "Q", "D,s", 0xd6000053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.q.wu", "Q", "D,s", 0xd6100053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.q.s", "Q", "D,S", 0x46000053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.q.d", "Q", "D,S", 0x46100053, 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.q", "Q", "D,S", 0x40300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.s.q", "Q", "D,S,m", 0x40300053, 0xfff0007f, match_opcode, 0 },
{"fcvt.d.q", "Q", "D,S", 0x42300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.d.q", "Q", "D,S,m", 0x42300053, 0xfff0007f, match_opcode, 0 },
{"fclass.q", "Q", "d,S", 0xe6001053, 0xfff0707f, match_opcode, 0 },
{"feq.q", "Q", "d,S,T", 0xa6002053, 0xfe00707f, match_opcode, 0 },
{"flt.q", "Q", "d,S,T", 0xa6001053, 0xfe00707f, match_opcode, 0 },
{"fle.q", "Q", "d,S,T", 0xa6000053, 0xfe00707f, match_opcode, 0 },
{"fgt.q", "Q", "d,T,S", 0xa6001053, 0xfe00707f, match_opcode, 0 },
{"fge.q", "Q", "d,T,S", 0xa6000053, 0xfe00707f, match_opcode, 0 },
{"fmv.x.q", "64Q", "d,S", 0xe6000053, 0xfff0707f, match_opcode, 0 },
{"fmv.q.x", "64Q", "D,s", 0xf6000053, 0xfff0707f, match_opcode, 0 },
{"fcvt.l.q", "64Q", "d,S", 0xc6200053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.l.q", "64Q", "d,S,m", 0xc6200053, 0xfff0007f, match_opcode, 0 },
{"fcvt.lu.q", "64Q", "d,S", 0xc6300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.lu.q", "64Q", "d,S,m", 0xc6300053, 0xfff0007f, match_opcode, 0 },
{"fcvt.q.l", "64Q", "D,s", 0xd6200053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.q.l", "64Q", "D,s,m", 0xd6200053, 0xfff0007f, match_opcode, 0 },
{"fcvt.q.lu", "64Q", "D,s", 0xd6300053 | (0x7 << 12), 0xfff0007f | (0x7 << 12), match_opcode, 0 },
{"fcvt.q.lu", "64Q", "D,s,m", 0xd6300053, 0xfff0007f, match_opcode, 0 },


{"c.ebreak", "C", "", 0x9002, 0xffff, match_opcode, 0 },
{"c.jr", "C", "d", 0x8002, 0xf07f, match_rd_nonzero, 0 },
{"c.jalr", "C", "d", 0x9002, 0xf07f, match_rd_nonzero, 0 },
{"c.j", "C", "Ca", 0xa001, 0xe003, match_opcode, 0 },
{"c.jal", "32C", "Ca", 0x2001, 0xe003, match_opcode, 0 },
{"c.beqz", "C", "Cs,Cp", 0xc001, 0xe003, match_opcode, 0 },
{"c.bnez", "C", "Cs,Cp", 0xe001, 0xe003, match_opcode, 0 },
{"c.lwsp", "C", "d,Cm(Cc)", 0x4002, 0xe003, match_rd_nonzero, 0 },
{"c.lw", "C", "Ct,Ck(Cs)", 0x4000, 0xe003, match_opcode, 0 },
{"c.swsp", "C", "CV,CM(Cc)", 0xc002, 0xe003, match_opcode, 0 },
{"c.sw", "C", "Ct,Ck(Cs)", 0xc000, 0xe003, match_opcode, 0 },
{"c.nop", "C", "", 0x1, 0xffff, match_opcode, 0 },
{"c.mv", "C", "d,CV", 0x8002, 0xf003, match_c_add, 0 },
{"c.lui", "C", "d,Cu", 0x6001, 0xe003, match_c_lui, 0 },
{"c.li", "C", "d,Cj", 0x4001, 0xe003, match_rd_nonzero, 0 },
{"c.addi4spn","C", "Ct,Cc,CK", 0x0, 0xe003, match_opcode, 0 },
{"c.addi16sp","C", "Cc,CL", 0x6101, 0xef83, match_opcode, 0 },
{"c.addi", "C", "d,Cj,CU", 0x1, 0xe003, match_rd_nonzero, 0 },
{"c.add", "C", "d,CV,CU", 0x9002, 0xf003, match_c_add, 0 },
{"c.sub", "C", "Cs,Cs,Ct", 0x8c01, 0xfc63, match_opcode, 0 },
{"c.and", "C", "Cs,Cs,Ct", 0x8c61, 0xfc63, match_opcode, 0 },
{"c.or", "C", "Cs,Cs,Ct", 0x8c41, 0xfc63, match_opcode, 0 },
{"c.xor", "C", "Cs,Cs,Ct", 0x8c21, 0xfc63, match_opcode, 0 },
{"c.slli", "C", "d,CU,C>", 0x2, 0xe003, match_rd_nonzero, 0 },
{"c.srli", "C", "Cs,Cs,C>", 0x8001, 0xec03, match_opcode, 0 },
{"c.srai", "C", "Cs,Cs,C>", 0x8401, 0xec03, match_opcode, 0 },
{"c.andi", "C", "Cs,Cj,Cs", 0x8801, 0xec03, match_opcode, 0 },
{"c.addiw", "64C", "d,Cj,CU", 0x2001, 0xe003, match_rd_nonzero, 0 },
{"c.addw", "64C", "Cs,Ct,Cs", 0x9c21, 0xfc63, match_opcode, 0 },
{"c.subw", "64C", "Cs,Cs,Ct", 0x9c01, 0xfc63, match_opcode, 0 },
{"c.ldsp", "64C", "d,Cn(Cc)", 0x6002, 0xe003, match_rd_nonzero, 0 },
{"c.ld", "64C", "Ct,Cl(Cs)", 0x6000, 0xe003, match_opcode, 0 },
{"c.sdsp", "64C", "CV,CN(Cc)", 0xe002, 0xe003, match_opcode, 0 },
{"c.sd", "64C", "Ct,Cl(Cs)", 0xe000, 0xe003, match_opcode, 0 },
{"c.fldsp", "C", "D,Cn(Cc)", 0x2002, 0xe003, match_opcode, 0 },
{"c.fld", "C", "CD,Cl(Cs)", 0x2000, 0xe003, match_opcode, 0 },
{"c.fsdsp", "C", "CT,CN(Cc)", 0xa002, 0xe003, match_opcode, 0 },
{"c.fsd", "C", "CD,Cl(Cs)", 0xa000, 0xe003, match_opcode, 0 },
{"c.flwsp", "32C", "D,Cm(Cc)", 0x6002, 0xe003, match_opcode, 0 },
{"c.flw", "32C", "CD,Ck(Cs)", 0x6000, 0xe003, match_opcode, 0 },
{"c.fswsp", "32C", "CT,CM(Cc)", 0xe002, 0xe003, match_opcode, 0 },
{"c.fsw", "32C", "CD,Ck(Cs)", 0xe000, 0xe003, match_opcode, 0 },


{"csrr", "I", "d,E", 0x2073, 0x707f | (0x1f << 15), match_opcode, 0x00000001 },
{"csrwi", "I", "E,Z", 0x5073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrsi", "I", "E,Z", 0x6073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrci", "I", "E,Z", 0x7073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrw", "I", "E,s", 0x1073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrw", "I", "E,Z", 0x5073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrs", "I", "E,s", 0x2073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrs", "I", "E,Z", 0x6073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrc", "I", "E,s", 0x3073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrc", "I", "E,Z", 0x7073, 0x707f | (0x1f << 7), match_opcode, 0x00000001 },
{"csrrwi", "I", "d,E,Z", 0x5073, 0x707f, match_opcode, 0 },
{"csrrsi", "I", "d,E,Z", 0x6073, 0x707f, match_opcode, 0 },
{"csrrci", "I", "d,E,Z", 0x7073, 0x707f, match_opcode, 0 },
{"csrrw", "I", "d,E,s", 0x1073, 0x707f, match_opcode, 0 },
{"csrrw", "I", "d,E,Z", 0x5073, 0x707f, match_opcode, 0x00000001 },
{"csrrs", "I", "d,E,s", 0x2073, 0x707f, match_opcode, 0 },
{"csrrs", "I", "d,E,Z", 0x6073, 0x707f, match_opcode, 0x00000001 },
{"csrrc", "I", "d,E,s", 0x3073, 0x707f, match_opcode, 0 },
{"csrrc", "I", "d,E,Z", 0x7073, 0x707f, match_opcode, 0x00000001 },
{"uret", "I", "", 0x200073, 0xffffffff, match_opcode, 0 },
{"sret", "I", "", 0x10200073, 0xffffffff, match_opcode, 0 },
{"hret", "I", "", 0x20200073, 0xffffffff, match_opcode, 0 },
{"mret", "I", "", 0x30200073, 0xffffffff, match_opcode, 0 },
{"dret", "I", "", 0x7b200073, 0xffffffff, match_opcode, 0 },
{"sfence.vm", "I", "", 0x10400073, 0xfff07fff | (0x1f << 15), match_opcode, 0 },
{"sfence.vm", "I", "s", 0x10400073, 0xfff07fff, match_opcode, 0 },
{"wfi", "I", "", 0x10500073, 0xffffffff, match_opcode, 0 },
};







static struct riscv_opcode *riscv_opcodes =
  (struct riscv_opcode *) riscv_builtin_opcodes;
static int bfd_riscv_num_opcodes = ((sizeof riscv_builtin_opcodes) / (sizeof (riscv_builtin_opcodes[0])));
