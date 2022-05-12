# 0 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
# 23 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
# 1 "/usr/local/include/capstone/arm.h" 1 3 4
# 11 "/usr/local/include/capstone/arm.h" 3 4
# 1 "/usr/local/include/capstone/platform.h" 1 3 4
# 28 "/usr/local/include/capstone/platform.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 29 "/usr/local/include/capstone/platform.h" 2 3 4
# 119 "/usr/local/include/capstone/platform.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 225 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4

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
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4

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





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 63 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 2 3 4
# 230 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4





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







# 120 "/usr/local/include/capstone/platform.h" 2 3 4
# 12 "/usr/local/include/capstone/arm.h" 2 3 4






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
# 24 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 2





# 1 "project/radare2/shlr/capstone/arch/ARM/ARMGenRegisterInfo.inc" 1
# 16 "project/radare2/shlr/capstone/arch/ARM/ARMGenRegisterInfo.inc"

# 16 "project/radare2/shlr/capstone/arch/ARM/ARMGenRegisterInfo.inc"
enum {
  ARM_NoRegister,
  ARM_APSR = 1,
  ARM_APSR_NZCV = 2,
  ARM_CPSR = 3,
  ARM_FPEXC = 4,
  ARM_FPINST = 5,
  ARM_FPSCR = 6,
  ARM_FPSCR_NZCV = 7,
  ARM_FPSID = 8,
  ARM_ITSTATE = 9,
  ARM_LR = 10,
  ARM_PC = 11,
  ARM_SP = 12,
  ARM_SPSR = 13,
  ARM_D0 = 14,
  ARM_D1 = 15,
  ARM_D2 = 16,
  ARM_D3 = 17,
  ARM_D4 = 18,
  ARM_D5 = 19,
  ARM_D6 = 20,
  ARM_D7 = 21,
  ARM_D8 = 22,
  ARM_D9 = 23,
  ARM_D10 = 24,
  ARM_D11 = 25,
  ARM_D12 = 26,
  ARM_D13 = 27,
  ARM_D14 = 28,
  ARM_D15 = 29,
  ARM_D16 = 30,
  ARM_D17 = 31,
  ARM_D18 = 32,
  ARM_D19 = 33,
  ARM_D20 = 34,
  ARM_D21 = 35,
  ARM_D22 = 36,
  ARM_D23 = 37,
  ARM_D24 = 38,
  ARM_D25 = 39,
  ARM_D26 = 40,
  ARM_D27 = 41,
  ARM_D28 = 42,
  ARM_D29 = 43,
  ARM_D30 = 44,
  ARM_D31 = 45,
  ARM_FPINST2 = 46,
  ARM_MVFR0 = 47,
  ARM_MVFR1 = 48,
  ARM_MVFR2 = 49,
  ARM_Q0 = 50,
  ARM_Q1 = 51,
  ARM_Q2 = 52,
  ARM_Q3 = 53,
  ARM_Q4 = 54,
  ARM_Q5 = 55,
  ARM_Q6 = 56,
  ARM_Q7 = 57,
  ARM_Q8 = 58,
  ARM_Q9 = 59,
  ARM_Q10 = 60,
  ARM_Q11 = 61,
  ARM_Q12 = 62,
  ARM_Q13 = 63,
  ARM_Q14 = 64,
  ARM_Q15 = 65,
  ARM_R0 = 66,
  ARM_R1 = 67,
  ARM_R2 = 68,
  ARM_R3 = 69,
  ARM_R4 = 70,
  ARM_R5 = 71,
  ARM_R6 = 72,
  ARM_R7 = 73,
  ARM_R8 = 74,
  ARM_R9 = 75,
  ARM_R10 = 76,
  ARM_R11 = 77,
  ARM_R12 = 78,
  ARM_S0 = 79,
  ARM_S1 = 80,
  ARM_S2 = 81,
  ARM_S3 = 82,
  ARM_S4 = 83,
  ARM_S5 = 84,
  ARM_S6 = 85,
  ARM_S7 = 86,
  ARM_S8 = 87,
  ARM_S9 = 88,
  ARM_S10 = 89,
  ARM_S11 = 90,
  ARM_S12 = 91,
  ARM_S13 = 92,
  ARM_S14 = 93,
  ARM_S15 = 94,
  ARM_S16 = 95,
  ARM_S17 = 96,
  ARM_S18 = 97,
  ARM_S19 = 98,
  ARM_S20 = 99,
  ARM_S21 = 100,
  ARM_S22 = 101,
  ARM_S23 = 102,
  ARM_S24 = 103,
  ARM_S25 = 104,
  ARM_S26 = 105,
  ARM_S27 = 106,
  ARM_S28 = 107,
  ARM_S29 = 108,
  ARM_S30 = 109,
  ARM_S31 = 110,
  ARM_D0_D2 = 111,
  ARM_D1_D3 = 112,
  ARM_D2_D4 = 113,
  ARM_D3_D5 = 114,
  ARM_D4_D6 = 115,
  ARM_D5_D7 = 116,
  ARM_D6_D8 = 117,
  ARM_D7_D9 = 118,
  ARM_D8_D10 = 119,
  ARM_D9_D11 = 120,
  ARM_D10_D12 = 121,
  ARM_D11_D13 = 122,
  ARM_D12_D14 = 123,
  ARM_D13_D15 = 124,
  ARM_D14_D16 = 125,
  ARM_D15_D17 = 126,
  ARM_D16_D18 = 127,
  ARM_D17_D19 = 128,
  ARM_D18_D20 = 129,
  ARM_D19_D21 = 130,
  ARM_D20_D22 = 131,
  ARM_D21_D23 = 132,
  ARM_D22_D24 = 133,
  ARM_D23_D25 = 134,
  ARM_D24_D26 = 135,
  ARM_D25_D27 = 136,
  ARM_D26_D28 = 137,
  ARM_D27_D29 = 138,
  ARM_D28_D30 = 139,
  ARM_D29_D31 = 140,
  ARM_Q0_Q1 = 141,
  ARM_Q1_Q2 = 142,
  ARM_Q2_Q3 = 143,
  ARM_Q3_Q4 = 144,
  ARM_Q4_Q5 = 145,
  ARM_Q5_Q6 = 146,
  ARM_Q6_Q7 = 147,
  ARM_Q7_Q8 = 148,
  ARM_Q8_Q9 = 149,
  ARM_Q9_Q10 = 150,
  ARM_Q10_Q11 = 151,
  ARM_Q11_Q12 = 152,
  ARM_Q12_Q13 = 153,
  ARM_Q13_Q14 = 154,
  ARM_Q14_Q15 = 155,
  ARM_Q0_Q1_Q2_Q3 = 156,
  ARM_Q1_Q2_Q3_Q4 = 157,
  ARM_Q2_Q3_Q4_Q5 = 158,
  ARM_Q3_Q4_Q5_Q6 = 159,
  ARM_Q4_Q5_Q6_Q7 = 160,
  ARM_Q5_Q6_Q7_Q8 = 161,
  ARM_Q6_Q7_Q8_Q9 = 162,
  ARM_Q7_Q8_Q9_Q10 = 163,
  ARM_Q8_Q9_Q10_Q11 = 164,
  ARM_Q9_Q10_Q11_Q12 = 165,
  ARM_Q10_Q11_Q12_Q13 = 166,
  ARM_Q11_Q12_Q13_Q14 = 167,
  ARM_Q12_Q13_Q14_Q15 = 168,
  ARM_R12_SP = 169,
  ARM_R0_R1 = 170,
  ARM_R2_R3 = 171,
  ARM_R4_R5 = 172,
  ARM_R6_R7 = 173,
  ARM_R8_R9 = 174,
  ARM_R10_R11 = 175,
  ARM_D0_D1_D2 = 176,
  ARM_D1_D2_D3 = 177,
  ARM_D2_D3_D4 = 178,
  ARM_D3_D4_D5 = 179,
  ARM_D4_D5_D6 = 180,
  ARM_D5_D6_D7 = 181,
  ARM_D6_D7_D8 = 182,
  ARM_D7_D8_D9 = 183,
  ARM_D8_D9_D10 = 184,
  ARM_D9_D10_D11 = 185,
  ARM_D10_D11_D12 = 186,
  ARM_D11_D12_D13 = 187,
  ARM_D12_D13_D14 = 188,
  ARM_D13_D14_D15 = 189,
  ARM_D14_D15_D16 = 190,
  ARM_D15_D16_D17 = 191,
  ARM_D16_D17_D18 = 192,
  ARM_D17_D18_D19 = 193,
  ARM_D18_D19_D20 = 194,
  ARM_D19_D20_D21 = 195,
  ARM_D20_D21_D22 = 196,
  ARM_D21_D22_D23 = 197,
  ARM_D22_D23_D24 = 198,
  ARM_D23_D24_D25 = 199,
  ARM_D24_D25_D26 = 200,
  ARM_D25_D26_D27 = 201,
  ARM_D26_D27_D28 = 202,
  ARM_D27_D28_D29 = 203,
  ARM_D28_D29_D30 = 204,
  ARM_D29_D30_D31 = 205,
  ARM_D0_D2_D4 = 206,
  ARM_D1_D3_D5 = 207,
  ARM_D2_D4_D6 = 208,
  ARM_D3_D5_D7 = 209,
  ARM_D4_D6_D8 = 210,
  ARM_D5_D7_D9 = 211,
  ARM_D6_D8_D10 = 212,
  ARM_D7_D9_D11 = 213,
  ARM_D8_D10_D12 = 214,
  ARM_D9_D11_D13 = 215,
  ARM_D10_D12_D14 = 216,
  ARM_D11_D13_D15 = 217,
  ARM_D12_D14_D16 = 218,
  ARM_D13_D15_D17 = 219,
  ARM_D14_D16_D18 = 220,
  ARM_D15_D17_D19 = 221,
  ARM_D16_D18_D20 = 222,
  ARM_D17_D19_D21 = 223,
  ARM_D18_D20_D22 = 224,
  ARM_D19_D21_D23 = 225,
  ARM_D20_D22_D24 = 226,
  ARM_D21_D23_D25 = 227,
  ARM_D22_D24_D26 = 228,
  ARM_D23_D25_D27 = 229,
  ARM_D24_D26_D28 = 230,
  ARM_D25_D27_D29 = 231,
  ARM_D26_D28_D30 = 232,
  ARM_D27_D29_D31 = 233,
  ARM_D0_D2_D4_D6 = 234,
  ARM_D1_D3_D5_D7 = 235,
  ARM_D2_D4_D6_D8 = 236,
  ARM_D3_D5_D7_D9 = 237,
  ARM_D4_D6_D8_D10 = 238,
  ARM_D5_D7_D9_D11 = 239,
  ARM_D6_D8_D10_D12 = 240,
  ARM_D7_D9_D11_D13 = 241,
  ARM_D8_D10_D12_D14 = 242,
  ARM_D9_D11_D13_D15 = 243,
  ARM_D10_D12_D14_D16 = 244,
  ARM_D11_D13_D15_D17 = 245,
  ARM_D12_D14_D16_D18 = 246,
  ARM_D13_D15_D17_D19 = 247,
  ARM_D14_D16_D18_D20 = 248,
  ARM_D15_D17_D19_D21 = 249,
  ARM_D16_D18_D20_D22 = 250,
  ARM_D17_D19_D21_D23 = 251,
  ARM_D18_D20_D22_D24 = 252,
  ARM_D19_D21_D23_D25 = 253,
  ARM_D20_D22_D24_D26 = 254,
  ARM_D21_D23_D25_D27 = 255,
  ARM_D22_D24_D26_D28 = 256,
  ARM_D23_D25_D27_D29 = 257,
  ARM_D24_D26_D28_D30 = 258,
  ARM_D25_D27_D29_D31 = 259,
  ARM_D1_D2 = 260,
  ARM_D3_D4 = 261,
  ARM_D5_D6 = 262,
  ARM_D7_D8 = 263,
  ARM_D9_D10 = 264,
  ARM_D11_D12 = 265,
  ARM_D13_D14 = 266,
  ARM_D15_D16 = 267,
  ARM_D17_D18 = 268,
  ARM_D19_D20 = 269,
  ARM_D21_D22 = 270,
  ARM_D23_D24 = 271,
  ARM_D25_D26 = 272,
  ARM_D27_D28 = 273,
  ARM_D29_D30 = 274,
  ARM_D1_D2_D3_D4 = 275,
  ARM_D3_D4_D5_D6 = 276,
  ARM_D5_D6_D7_D8 = 277,
  ARM_D7_D8_D9_D10 = 278,
  ARM_D9_D10_D11_D12 = 279,
  ARM_D11_D12_D13_D14 = 280,
  ARM_D13_D14_D15_D16 = 281,
  ARM_D15_D16_D17_D18 = 282,
  ARM_D17_D18_D19_D20 = 283,
  ARM_D19_D20_D21_D22 = 284,
  ARM_D21_D22_D23_D24 = 285,
  ARM_D23_D24_D25_D26 = 286,
  ARM_D25_D26_D27_D28 = 287,
  ARM_D27_D28_D29_D30 = 288,
  ARM_NUM_TARGET_REGS
};


enum {
  ARM_HPRRegClassID = 0,
  ARM_SPRRegClassID = 1,
  ARM_GPRRegClassID = 2,
  ARM_GPRwithAPSRRegClassID = 3,
  ARM_SPR_8RegClassID = 4,
  ARM_GPRnopcRegClassID = 5,
  ARM_rGPRRegClassID = 6,
  ARM_tGPRwithpcRegClassID = 7,
  ARM_hGPRRegClassID = 8,
  ARM_tGPRRegClassID = 9,
  ARM_GPRnopc_and_hGPRRegClassID = 10,
  ARM_hGPR_and_rGPRRegClassID = 11,
  ARM_tcGPRRegClassID = 12,
  ARM_tGPR_and_tcGPRRegClassID = 13,
  ARM_CCRRegClassID = 14,
  ARM_GPRspRegClassID = 15,
  ARM_hGPR_and_tGPRwithpcRegClassID = 16,
  ARM_hGPR_and_tcGPRRegClassID = 17,
  ARM_DPRRegClassID = 18,
  ARM_DPR_VFP2RegClassID = 19,
  ARM_DPR_8RegClassID = 20,
  ARM_GPRPairRegClassID = 21,
  ARM_GPRPair_with_gsub_1_in_rGPRRegClassID = 22,
  ARM_GPRPair_with_gsub_0_in_tGPRRegClassID = 23,
  ARM_GPRPair_with_gsub_0_in_hGPRRegClassID = 24,
  ARM_GPRPair_with_gsub_0_in_tcGPRRegClassID = 25,
  ARM_GPRPair_with_gsub_1_in_hGPR_and_rGPRRegClassID = 26,
  ARM_GPRPair_with_gsub_1_in_tcGPRRegClassID = 27,
  ARM_GPRPair_with_gsub_1_in_GPRspRegClassID = 28,
  ARM_DPairSpcRegClassID = 29,
  ARM_DPairSpc_with_ssub_0RegClassID = 30,
  ARM_DPairSpc_with_ssub_4RegClassID = 31,
  ARM_DPairSpc_with_dsub_0_in_DPR_8RegClassID = 32,
  ARM_DPairSpc_with_dsub_2_in_DPR_8RegClassID = 33,
  ARM_DPairRegClassID = 34,
  ARM_DPair_with_ssub_0RegClassID = 35,
  ARM_QPRRegClassID = 36,
  ARM_DPair_with_ssub_2RegClassID = 37,
  ARM_DPair_with_dsub_0_in_DPR_8RegClassID = 38,
  ARM_QPR_VFP2RegClassID = 39,
  ARM_DPair_with_dsub_1_in_DPR_8RegClassID = 40,
  ARM_QPR_8RegClassID = 41,
  ARM_DTripleRegClassID = 42,
  ARM_DTripleSpcRegClassID = 43,
  ARM_DTripleSpc_with_ssub_0RegClassID = 44,
  ARM_DTriple_with_ssub_0RegClassID = 45,
  ARM_DTriple_with_qsub_0_in_QPRRegClassID = 46,
  ARM_DTriple_with_ssub_2RegClassID = 47,
  ARM_DTriple_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 48,
  ARM_DTripleSpc_with_ssub_4RegClassID = 49,
  ARM_DTriple_with_ssub_4RegClassID = 50,
  ARM_DTripleSpc_with_ssub_8RegClassID = 51,
  ARM_DTripleSpc_with_dsub_0_in_DPR_8RegClassID = 52,
  ARM_DTriple_with_dsub_0_in_DPR_8RegClassID = 53,
  ARM_DTriple_with_qsub_0_in_QPR_VFP2RegClassID = 54,
  ARM_DTriple_with_ssub_0_and_DTriple_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 55,
  ARM_DTriple_with_dsub_1_in_DPR_8RegClassID = 56,
  ARM_DTriple_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPR_VFP2RegClassID = 57,
  ARM_DTriple_with_ssub_4_and_DTriple_with_qsub_0_in_QPRRegClassID = 58,
  ARM_DTripleSpc_with_dsub_2_in_DPR_8RegClassID = 59,
  ARM_DTriple_with_dsub_2_in_DPR_8RegClassID = 60,
  ARM_DTripleSpc_with_dsub_4_in_DPR_8RegClassID = 61,
  ARM_DTriple_with_dsub_0_in_DPR_8_and_DTriple_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 62,
  ARM_DTriple_with_qsub_0_in_QPR_8RegClassID = 63,
  ARM_DTriple_with_dsub_2_in_DPR_8_and_DTriple_with_qsub_0_in_QPRRegClassID = 64,
  ARM_DTriple_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPR_8RegClassID = 65,
  ARM_DQuadSpcRegClassID = 66,
  ARM_DQuadSpc_with_ssub_0RegClassID = 67,
  ARM_DQuadSpc_with_ssub_4RegClassID = 68,
  ARM_DQuadSpc_with_ssub_8RegClassID = 69,
  ARM_DQuadSpc_with_dsub_0_in_DPR_8RegClassID = 70,
  ARM_DQuadSpc_with_dsub_2_in_DPR_8RegClassID = 71,
  ARM_DQuadSpc_with_dsub_4_in_DPR_8RegClassID = 72,
  ARM_DQuadRegClassID = 73,
  ARM_DQuad_with_ssub_0RegClassID = 74,
  ARM_DQuad_with_ssub_2RegClassID = 75,
  ARM_QQPRRegClassID = 76,
  ARM_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 77,
  ARM_DQuad_with_ssub_4RegClassID = 78,
  ARM_DQuad_with_ssub_6RegClassID = 79,
  ARM_DQuad_with_dsub_0_in_DPR_8RegClassID = 80,
  ARM_DQuad_with_qsub_0_in_QPR_VFP2RegClassID = 81,
  ARM_DQuad_with_ssub_0_and_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 82,
  ARM_DQuad_with_dsub_1_in_DPR_8RegClassID = 83,
  ARM_DQuad_with_qsub_1_in_QPR_VFP2RegClassID = 84,
  ARM_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPR_VFP2RegClassID = 85,
  ARM_DQuad_with_dsub_2_in_DPR_8RegClassID = 86,
  ARM_DQuad_with_ssub_6_and_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 87,
  ARM_DQuad_with_dsub_3_in_DPR_8RegClassID = 88,
  ARM_DQuad_with_dsub_0_in_DPR_8_and_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 89,
  ARM_DQuad_with_qsub_0_in_QPR_8RegClassID = 90,
  ARM_DQuad_with_qsub_1_in_QPR_8RegClassID = 91,
  ARM_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPR_8RegClassID = 92,
  ARM_DQuad_with_dsub_3_in_DPR_8_and_DQuad_with_ssub_2_ssub_3_ssub_4_ssub_5_in_QPRRegClassID = 93,
  ARM_QQQQPRRegClassID = 94,
  ARM_QQQQPR_with_ssub_0RegClassID = 95,
  ARM_QQQQPR_with_ssub_4RegClassID = 96,
  ARM_QQQQPR_with_ssub_8RegClassID = 97,
  ARM_QQQQPR_with_ssub_12RegClassID = 98,
  ARM_QQQQPR_with_dsub_0_in_DPR_8RegClassID = 99,
  ARM_QQQQPR_with_dsub_2_in_DPR_8RegClassID = 100,
  ARM_QQQQPR_with_dsub_4_in_DPR_8RegClassID = 101,
  ARM_QQQQPR_with_dsub_6_in_DPR_8RegClassID = 102,
};


enum {
  ARM_NoSubRegister,
  ARM_dsub_0,
  ARM_dsub_1,
  ARM_dsub_2,
  ARM_dsub_3,
  ARM_dsub_4,
  ARM_dsub_5,
  ARM_dsub_6,
  ARM_dsub_7,
  ARM_gsub_0,
  ARM_gsub_1,
  ARM_qqsub_0,
  ARM_qqsub_1,
  ARM_qsub_0,
  ARM_qsub_1,
  ARM_qsub_2,
  ARM_qsub_3,
  ARM_ssub_0,
  ARM_ssub_1,
  ARM_ssub_2,
  ARM_ssub_3,
  ARM_ssub_4,
  ARM_ssub_5,
  ARM_ssub_6,
  ARM_ssub_7,
  ARM_ssub_8,
  ARM_ssub_9,
  ARM_ssub_10,
  ARM_ssub_11,
  ARM_ssub_12,
  ARM_ssub_13,
  ARM_dsub_7_then_ssub_0,
  ARM_dsub_7_then_ssub_1,
  ARM_ssub_0_ssub_1_ssub_4_ssub_5,
  ARM_ssub_0_ssub_1_ssub_2_ssub_3_ssub_4_ssub_5,
  ARM_ssub_2_ssub_3_ssub_6_ssub_7,
  ARM_ssub_2_ssub_3_ssub_4_ssub_5_ssub_6_ssub_7,
  ARM_ssub_2_ssub_3_ssub_4_ssub_5,
  ARM_ssub_0_ssub_1_ssub_4_ssub_5_ssub_8_ssub_9,
  ARM_ssub_0_ssub_1_ssub_4_ssub_5_ssub_8_ssub_9_ssub_12_ssub_13,
  ARM_ssub_2_ssub_3_ssub_6_ssub_7_dsub_5,
  ARM_ssub_2_ssub_3_ssub_6_ssub_7_dsub_5_dsub_7,
  ARM_ssub_2_ssub_3_ssub_4_ssub_5_ssub_6_ssub_7_ssub_8_ssub_9,
  ARM_ssub_4_ssub_5_ssub_8_ssub_9,
  ARM_ssub_4_ssub_5_ssub_6_ssub_7_ssub_8_ssub_9,
  ARM_ssub_4_ssub_5_ssub_8_ssub_9_ssub_12_ssub_13,
  ARM_ssub_6_ssub_7_dsub_5,
  ARM_ssub_6_ssub_7_ssub_8_ssub_9_dsub_5,
  ARM_ssub_6_ssub_7_dsub_5_dsub_7,
  ARM_ssub_6_ssub_7_ssub_8_ssub_9,
  ARM_ssub_6_ssub_7_ssub_8_ssub_9_dsub_5_ssub_12_ssub_13,
  ARM_ssub_8_ssub_9_ssub_12_ssub_13,
  ARM_ssub_8_ssub_9_dsub_5_ssub_12_ssub_13,
  ARM_dsub_5_dsub_7,
  ARM_dsub_5_ssub_12_ssub_13_dsub_7,
  ARM_dsub_5_ssub_12_ssub_13,
  ARM_ssub_4_ssub_5_ssub_6_ssub_7_qsub_2,
  ARM_NUM_TARGET_SUBREGS
};
# 30 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 2




typedef enum ARMCC_CondCodes {
 ARMCC_EQ,
 ARMCC_NE,
 ARMCC_HS,
 ARMCC_LO,
 ARMCC_MI,
 ARMCC_PL,
 ARMCC_VS,
 ARMCC_VC,
 ARMCC_HI,
 ARMCC_LS,
 ARMCC_GE,
 ARMCC_LT,
 ARMCC_GT,
 ARMCC_LE,
 ARMCC_AL
} ARMCC_CondCodes;

inline static ARMCC_CondCodes ARMCC_getOppositeCondition(ARMCC_CondCodes CC)
{
 switch (CC) {
  case ARMCC_EQ: return ARMCC_NE;
  case ARMCC_NE: return ARMCC_EQ;
  case ARMCC_HS: return ARMCC_LO;
  case ARMCC_LO: return ARMCC_HS;
  case ARMCC_MI: return ARMCC_PL;
  case ARMCC_PL: return ARMCC_MI;
  case ARMCC_VS: return ARMCC_VC;
  case ARMCC_VC: return ARMCC_VS;
  case ARMCC_HI: return ARMCC_LS;
  case ARMCC_LS: return ARMCC_HI;
  case ARMCC_GE: return ARMCC_LT;
  case ARMCC_LT: return ARMCC_GE;
  case ARMCC_GT: return ARMCC_LE;
  case ARMCC_LE: return ARMCC_GT;
  default: return ARMCC_AL;
 }
}

inline static const char *ARMCC_ARMCondCodeToString(ARMCC_CondCodes CC)
{
 switch (CC) {
  case ARMCC_EQ: return "eq";
  case ARMCC_NE: return "ne";
  case ARMCC_HS: return "hs";
  case ARMCC_LO: return "lo";
  case ARMCC_MI: return "mi";
  case ARMCC_PL: return "pl";
  case ARMCC_VS: return "vs";
  case ARMCC_VC: return "vc";
  case ARMCC_HI: return "hi";
  case ARMCC_LS: return "ls";
  case ARMCC_GE: return "ge";
  case ARMCC_LT: return "lt";
  case ARMCC_GT: return "gt";
  case ARMCC_LE: return "le";
  case ARMCC_AL: return "al";
  default: return "";
 }
}

inline static const char *ARM_PROC_IFlagsToString(unsigned val)
{
 switch (val) {
  case ARM_CPSFLAG_F: return "f";
  case ARM_CPSFLAG_I: return "i";
  case ARM_CPSFLAG_A: return "a";
  default: return "";
 }
}

inline static const char *ARM_PROC_IModToString(unsigned val)
{
 switch (val) {
  case ARM_CPSMODE_IE: return "ie";
  case ARM_CPSMODE_ID: return "id";
  default: return "";
 }
}

inline static const char *ARM_MB_MemBOptToString(unsigned val, 
# 114 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 3 4
                                                              _Bool 
# 114 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
                                                                   HasV8)
{

 switch (val + 1) {
  default: return "BUGBUG";
  case ARM_MB_SY: return "sy";
  case ARM_MB_ST: return "st";
  case ARM_MB_LD: return HasV8 ? "ld" : "#0xd";
  case ARM_MB_RESERVED_12: return "#0xc";
  case ARM_MB_ISH: return "ish";
  case ARM_MB_ISHST: return "ishst";
  case ARM_MB_ISHLD: return HasV8 ? "ishld" : "#9";
  case ARM_MB_RESERVED_8: return "#8";
  case ARM_MB_NSH: return "nsh";
  case ARM_MB_NSHST: return "nshst";
  case ARM_MB_NSHLD: return HasV8 ? "nshld" : "#5";
  case ARM_MB_RESERVED_4: return "#4";
  case ARM_MB_OSH: return "osh";
  case ARM_MB_OSHST: return "oshst";
  case ARM_MB_OSHLD: return HasV8 ? "oshld" : "#1";
  case ARM_MB_RESERVED_0: return "#0";
 }
}

enum ARM_ISB_InstSyncBOpt {
    ARM_ISB_RESERVED_0 = 0,
    ARM_ISB_RESERVED_1 = 1,
    ARM_ISB_RESERVED_2 = 2,
    ARM_ISB_RESERVED_3 = 3,
    ARM_ISB_RESERVED_4 = 4,
    ARM_ISB_RESERVED_5 = 5,
    ARM_ISB_RESERVED_6 = 6,
    ARM_ISB_RESERVED_7 = 7,
    ARM_ISB_RESERVED_8 = 8,
    ARM_ISB_RESERVED_9 = 9,
    ARM_ISB_RESERVED_10 = 10,
    ARM_ISB_RESERVED_11 = 11,
    ARM_ISB_RESERVED_12 = 12,
    ARM_ISB_RESERVED_13 = 13,
    ARM_ISB_RESERVED_14 = 14,
    ARM_ISB_SY = 15
};

inline static const char *ARM_ISB_InstSyncBOptToString(unsigned val)
{
 switch (val) {
  default:
  case ARM_ISB_RESERVED_0: return "#0x0";
  case ARM_ISB_RESERVED_1: return "#0x1";
  case ARM_ISB_RESERVED_2: return "#0x2";
  case ARM_ISB_RESERVED_3: return "#0x3";
  case ARM_ISB_RESERVED_4: return "#0x4";
  case ARM_ISB_RESERVED_5: return "#0x5";
  case ARM_ISB_RESERVED_6: return "#0x6";
  case ARM_ISB_RESERVED_7: return "#0x7";
  case ARM_ISB_RESERVED_8: return "#0x8";
  case ARM_ISB_RESERVED_9: return "#0x9";
  case ARM_ISB_RESERVED_10: return "#0xa";
  case ARM_ISB_RESERVED_11: return "#0xb";
  case ARM_ISB_RESERVED_12: return "#0xc";
  case ARM_ISB_RESERVED_13: return "#0xd";
  case ARM_ISB_RESERVED_14: return "#0xe";
  case ARM_ISB_SY: return "sy";
 }
}



static inline 
# 182 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 3 4
             _Bool 
# 182 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
                  isARMLowRegister(unsigned Reg)
{

 switch (Reg) {
  case ARM_R0: case ARM_R1: case ARM_R2: case ARM_R3:
  case ARM_R4: case ARM_R5: case ARM_R6: case ARM_R7:
   return 
# 188 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 3 4
         1
# 188 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
             ;
  default:
   return 
# 190 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 3 4
         0
# 190 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
              ;
 }
}





enum ARMII_IndexMode {
 ARMII_IndexModeNone = 0,
 ARMII_IndexModePre = 1,
 ARMII_IndexModePost = 2,
 ARMII_IndexModeUpd = 3
};


typedef enum ARMII_AddrMode {
 ARMII_AddrModeNone = 0,
 ARMII_AddrMode1 = 1,
 ARMII_AddrMode2 = 2,
 ARMII_AddrMode3 = 3,
 ARMII_AddrMode4 = 4,
 ARMII_AddrMode5 = 5,
 ARMII_AddrMode6 = 6,
 ARMII_AddrModeT1_1 = 7,
 ARMII_AddrModeT1_2 = 8,
 ARMII_AddrModeT1_4 = 9,
 ARMII_AddrModeT1_s = 10,
 ARMII_AddrModeT2_i12 = 11,
 ARMII_AddrModeT2_i8 = 12,
 ARMII_AddrModeT2_so = 13,
 ARMII_AddrModeT2_pc = 14,
 ARMII_AddrModeT2_i8s4 = 15,
 ARMII_AddrMode_i12 = 16
} ARMII_AddrMode;

inline static const char *ARMII_AddrModeToString(ARMII_AddrMode addrmode)
{
 switch (addrmode) {
  case ARMII_AddrModeNone: return "AddrModeNone";
  case ARMII_AddrMode1: return "AddrMode1";
  case ARMII_AddrMode2: return "AddrMode2";
  case ARMII_AddrMode3: return "AddrMode3";
  case ARMII_AddrMode4: return "AddrMode4";
  case ARMII_AddrMode5: return "AddrMode5";
  case ARMII_AddrMode6: return "AddrMode6";
  case ARMII_AddrModeT1_1: return "AddrModeT1_1";
  case ARMII_AddrModeT1_2: return "AddrModeT1_2";
  case ARMII_AddrModeT1_4: return "AddrModeT1_4";
  case ARMII_AddrModeT1_s: return "AddrModeT1_s";
  case ARMII_AddrModeT2_i12: return "AddrModeT2_i12";
  case ARMII_AddrModeT2_i8: return "AddrModeT2_i8";
  case ARMII_AddrModeT2_so: return "AddrModeT2_so";
  case ARMII_AddrModeT2_pc: return "AddrModeT2_pc";
  case ARMII_AddrModeT2_i8s4: return "AddrModeT2_i8s4";
  case ARMII_AddrMode_i12: return "AddrMode_i12";
 }
}


enum ARMII_TOF {



 ARMII_MO_NO_FLAG,



 ARMII_MO_LO16,



 ARMII_MO_HI16,





 ARMII_MO_LO16_NONLAZY,




 ARMII_MO_HI16_NONLAZY,





 ARMII_MO_LO16_NONLAZY_PIC,





 ARMII_MO_HI16_NONLAZY_PIC,



 ARMII_MO_PLT
};

enum {





 ARMII_AddrModeMask = 0x1f,




 ARMII_IndexModeShift = 5,
 ARMII_IndexModeMask = 3 << ARMII_IndexModeShift,




 ARMII_FormShift = 7,
 ARMII_FormMask = 0x3f << ARMII_FormShift,


 ARMII_Pseudo = 0 << ARMII_FormShift,


 ARMII_MulFrm = 1 << ARMII_FormShift,


 ARMII_BrFrm = 2 << ARMII_FormShift,
 ARMII_BrMiscFrm = 3 << ARMII_FormShift,


 ARMII_DPFrm = 4 << ARMII_FormShift,
 ARMII_DPSoRegFrm = 5 << ARMII_FormShift,


 ARMII_LdFrm = 6 << ARMII_FormShift,
 ARMII_StFrm = 7 << ARMII_FormShift,
 ARMII_LdMiscFrm = 8 << ARMII_FormShift,
 ARMII_StMiscFrm = 9 << ARMII_FormShift,
 ARMII_LdStMulFrm = 10 << ARMII_FormShift,

 ARMII_LdStExFrm = 11 << ARMII_FormShift,


 ARMII_ArithMiscFrm = 12 << ARMII_FormShift,
 ARMII_SatFrm = 13 << ARMII_FormShift,


 ARMII_ExtFrm = 14 << ARMII_FormShift,


 ARMII_VFPUnaryFrm = 15 << ARMII_FormShift,
 ARMII_VFPBinaryFrm = 16 << ARMII_FormShift,
 ARMII_VFPConv1Frm = 17 << ARMII_FormShift,
 ARMII_VFPConv2Frm = 18 << ARMII_FormShift,
 ARMII_VFPConv3Frm = 19 << ARMII_FormShift,
 ARMII_VFPConv4Frm = 20 << ARMII_FormShift,
 ARMII_VFPConv5Frm = 21 << ARMII_FormShift,
 ARMII_VFPLdStFrm = 22 << ARMII_FormShift,
 ARMII_VFPLdStMulFrm = 23 << ARMII_FormShift,
 ARMII_VFPMiscFrm = 24 << ARMII_FormShift,


 ARMII_ThumbFrm = 25 << ARMII_FormShift,


 ARMII_MiscFrm = 26 << ARMII_FormShift,


 ARMII_NGetLnFrm = 27 << ARMII_FormShift,
 ARMII_NSetLnFrm = 28 << ARMII_FormShift,
 ARMII_NDupFrm = 29 << ARMII_FormShift,
 ARMII_NLdStFrm = 30 << ARMII_FormShift,
 ARMII_N1RegModImmFrm= 31 << ARMII_FormShift,
 ARMII_N2RegFrm = 32 << ARMII_FormShift,
 ARMII_NVCVTFrm = 33 << ARMII_FormShift,
 ARMII_NVDupLnFrm = 34 << ARMII_FormShift,
 ARMII_N2RegVShLFrm = 35 << ARMII_FormShift,
 ARMII_N2RegVShRFrm = 36 << ARMII_FormShift,
 ARMII_N3RegFrm = 37 << ARMII_FormShift,
 ARMII_N3RegVShFrm = 38 << ARMII_FormShift,
 ARMII_NVExtFrm = 39 << ARMII_FormShift,
 ARMII_NVMulSLFrm = 40 << ARMII_FormShift,
 ARMII_NVTBLFrm = 41 << ARMII_FormShift,






 ARMII_UnaryDP = 1 << 13,



 ARMII_Xform16Bit = 1 << 14,





 ARMII_ThumbArithFlagSetting = 1 << 18,



 ARMII_DomainShift = 15,
 ARMII_DomainMask = 7 << ARMII_DomainShift,
 ARMII_DomainGeneral = 0 << ARMII_DomainShift,
 ARMII_DomainVFP = 1 << ARMII_DomainShift,
 ARMII_DomainNEON = 2 << ARMII_DomainShift,
 ARMII_DomainNEONA8 = 4 << ARMII_DomainShift,







 ARMII_ShiftTypeShift = 4,

 ARMII_M_BitShift = 5,
 ARMII_ShiftImmShift = 5,
 ARMII_ShiftShift = 7,
 ARMII_N_BitShift = 7,
 ARMII_ImmHiShift = 8,
 ARMII_SoRotImmShift = 8,
 ARMII_RegRsShift = 8,
 ARMII_ExtRotImmShift = 10,
 ARMII_RegRdLoShift = 12,
 ARMII_RegRdShift = 12,
 ARMII_RegRdHiShift = 16,
 ARMII_RegRnShift = 16,
 ARMII_S_BitShift = 20,
 ARMII_W_BitShift = 21,
 ARMII_AM3_I_BitShift = 22,
 ARMII_D_BitShift = 22,
 ARMII_U_BitShift = 23,
 ARMII_P_BitShift = 24,
 ARMII_I_BitShift = 25,
 ARMII_CondShift = 28
};

typedef struct MClassSysReg {
 const char *Name;
 arm_sysreg sysreg;
 uint16_t M1Encoding12;
 uint16_t M2M3Encoding8;
 uint16_t Encoding;
 int FeaturesRequired[2];
} MClassSysReg;

enum TraceSyncBOpt {
 CSYNC = 0
};

const MClassSysReg *lookupMClassSysRegByM2M3Encoding8(uint16_t encoding);
const MClassSysReg *lookupMClassSysRegByM1Encoding12(uint16_t M1Encoding12);



static inline const MClassSysReg *lookupMClassSysRegAPSRNonDeprecated(unsigned SYSm)
{
 return lookupMClassSysRegByM2M3Encoding8((1<<9) | (SYSm & 0xFF));
}

static inline const MClassSysReg *lookupMClassSysRegBy8bitSYSmValue(unsigned SYSm)
{
 return lookupMClassSysRegByM2M3Encoding8((1<<8) | (SYSm & 0xFF));
}


static inline 
# 462 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h" 3 4
             _Bool 
# 462 "project/radare2/shlr/capstone/arch/ARM/ARMBaseInfo.h"
                  MClassSysReg_isInRequiredFeatures(const MClassSysReg *TheReg, int TestFeatures)
{
 return (TheReg->FeaturesRequired[0] == TestFeatures || TheReg->FeaturesRequired[1] == TestFeatures);
}



static inline const MClassSysReg *lookupMClassSysRegBy12bitSYSmValue(unsigned SYSm)
{
  return lookupMClassSysRegByM1Encoding12(SYSm);
}

static inline const char *ARM_TSB_TraceSyncBOptToString(unsigned val)
{
 switch (val) {
  default:

   return NULL;

  case CSYNC:
   return "csync";
 }
}
