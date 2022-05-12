# 0 "project/radare2/shlr/capstone/arch/Sparc/Sparc.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/arch/Sparc/Sparc.h"
# 21 "project/radare2/shlr/capstone/arch/Sparc/Sparc.h"
# 1 "/usr/local/include/capstone/sparc.h" 1 3 4
# 11 "/usr/local/include/capstone/sparc.h" 3 4
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
# 12 "/usr/local/include/capstone/sparc.h" 2 3 4
# 22 "/usr/local/include/capstone/sparc.h" 3 4
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
# 22 "project/radare2/shlr/capstone/arch/Sparc/Sparc.h" 2


# 23 "project/radare2/shlr/capstone/arch/Sparc/Sparc.h"
inline static const char *SPARCCondCodeToString(sparc_cc CC)
{
 switch (CC) {
  default: return NULL;
  case SPARC_CC_ICC_A: return "a";
  case SPARC_CC_ICC_N: return "n";
  case SPARC_CC_ICC_NE: return "ne";
  case SPARC_CC_ICC_E: return "e";
  case SPARC_CC_ICC_G: return "g";
  case SPARC_CC_ICC_LE: return "le";
  case SPARC_CC_ICC_GE: return "ge";
  case SPARC_CC_ICC_L: return "l";
  case SPARC_CC_ICC_GU: return "gu";
  case SPARC_CC_ICC_LEU: return "leu";
  case SPARC_CC_ICC_CC: return "cc";
  case SPARC_CC_ICC_CS: return "cs";
  case SPARC_CC_ICC_POS: return "pos";
  case SPARC_CC_ICC_NEG: return "neg";
  case SPARC_CC_ICC_VC: return "vc";
  case SPARC_CC_ICC_VS: return "vs";

  case SPARC_CC_FCC_A: return "a";
  case SPARC_CC_FCC_N: return "n";
  case SPARC_CC_FCC_U: return "u";
  case SPARC_CC_FCC_G: return "g";
  case SPARC_CC_FCC_UG: return "ug";
  case SPARC_CC_FCC_L: return "l";
  case SPARC_CC_FCC_UL: return "ul";
  case SPARC_CC_FCC_LG: return "lg";
  case SPARC_CC_FCC_NE: return "ne";
  case SPARC_CC_FCC_E: return "e";
  case SPARC_CC_FCC_UE: return "ue";
  case SPARC_CC_FCC_GE: return "ge";
  case SPARC_CC_FCC_UGE: return "uge";
  case SPARC_CC_FCC_LE: return "le";
  case SPARC_CC_FCC_ULE: return "ule";
  case SPARC_CC_FCC_O: return "o";
 }
}
