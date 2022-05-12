# 0 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
# 20 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
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
# 21 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 2
# 1 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 1
# 37 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"

# 37 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
static inline uint32_t Hi_32(uint64_t Value) {
 return (uint32_t)(Value >> 32);
}


static inline uint32_t Lo_32(uint64_t Value) {
 return (uint32_t)(Value);
}



static inline 
# 48 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 3 4
             _Bool 
# 48 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
                  isUIntN(unsigned N, uint64_t x) {
 return x == (x & (~0ULL >> (64 - N)));
}
# 61 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
static inline 
# 61 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 3 4
             _Bool 
# 61 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
                  isMask_32(uint32_t Value) {
 return Value && ((Value + 1) & Value) == 0;
}




static inline 
# 68 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 3 4
             _Bool 
# 68 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
                  isMask_64(uint64_t Value) {
 return Value && ((Value + 1) & Value) == 0;
}




static inline 
# 75 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 3 4
             _Bool 
# 75 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
                  isShiftedMask_32(uint32_t Value) {
 return isMask_32((Value - 1) | Value);
}



static inline 
# 81 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 3 4
             _Bool 
# 81 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
                  isShiftedMask_64(uint64_t Value) {
 return isMask_64((Value - 1) | Value);
}



static inline 
# 87 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h" 3 4
             _Bool 
# 87 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
                  isPowerOf2_32(uint32_t Value) {
 return Value && !(Value & (Value - 1));
}





static inline unsigned CountLeadingZeros_32(uint32_t Value) {
 unsigned Count;



 if (!Value) return 32;

 Count = __builtin_clz(Value);
# 117 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
 return Count;
}





static inline unsigned CountLeadingOnes_32(uint32_t Value) {
 return CountLeadingZeros_32(~Value);
}





static inline unsigned CountLeadingZeros_64(uint64_t Value) {
 unsigned Count;



 if (!Value) return 64;

 Count = __builtin_clzll(Value);
# 175 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
 return Count;
}





static inline unsigned CountLeadingOnes_64(uint64_t Value) {
 return CountLeadingZeros_64(~Value);
}





static inline unsigned CountTrailingZeros_32(uint32_t Value) {

 return Value ? __builtin_ctz(Value) : 32;
# 204 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
}





static inline unsigned CountTrailingOnes_32(uint32_t Value) {
 return CountTrailingZeros_32(~Value);
}





static inline unsigned CountTrailingZeros_64(uint64_t Value) {

 return Value ? __builtin_ctzll(Value) : 64;
# 234 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
}





static inline unsigned CountTrailingOnes_64(uint64_t Value) {
 return CountTrailingZeros_64(~Value);
}




static inline unsigned CountPopulation_32(uint32_t Value) {

 return __builtin_popcount(Value);





}



static inline unsigned CountPopulation_64(uint64_t Value) {

 return __builtin_popcountll(Value);






}




static inline unsigned Log2_32(uint32_t Value) {
 return 31 - CountLeadingZeros_32(Value);
}



static inline unsigned Log2_64(uint64_t Value) {
 return 63 - CountLeadingZeros_64(Value);
}




static inline unsigned Log2_32_Ceil(uint32_t Value) {
 return 32-CountLeadingZeros_32(Value-1);
}



static inline unsigned Log2_64_Ceil(uint64_t Value) {
 return 64-CountLeadingZeros_64(Value-1);
}



static inline uint64_t GreatestCommonDivisor64(uint64_t A, uint64_t B) {
 while (B) {
  uint64_t T = B;
  B = A % B;
  A = T;
 }
 return A;
}



static inline double BitsToDouble(uint64_t Bits) {
 union {
  uint64_t L;
  double D;
 } T;
 T.L = Bits;
 return T.D;
}



static inline float BitsToFloat(uint32_t Bits) {
 union {
  uint32_t I;
  float F;
 } T;
 T.I = Bits;
 return T.F;
}





static inline uint64_t DoubleToBits(double Double) {
 union {
  uint64_t L;
  double D;
 } T;
 T.D = Double;
 return T.L;
}





static inline uint32_t FloatToBits(float Float) {
 union {
  uint32_t I;
  float F;
 } T;
 T.F = Float;
 return T.I;
}



static inline uint64_t MinAlign(uint64_t A, uint64_t B) {





 return (A | B) & (1 + ~(A | B));
}



static inline uint64_t NextPowerOf2(uint64_t A) {
 A |= (A >> 1);
 A |= (A >> 2);
 A |= (A >> 4);
 A |= (A >> 8);
 A |= (A >> 16);
 A |= (A >> 32);
 return A + 1;
}
# 387 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
static inline uint64_t RoundUpToAlignment(uint64_t Value, uint64_t Align) {
 return ((Value + Align - 1) / Align) * Align;
}




static inline uint64_t OffsetToAlignment(uint64_t Value, uint64_t Align) {
 return RoundUpToAlignment(Value, Align) - Value;
}




static inline int64_t abs64(int64_t x) {
 return (x < 0) ? -x : x;
}



static inline int32_t SignExtend32(uint32_t X, unsigned B) {
 return (int32_t)(X << (32 - B)) >> (32 - B);
}



static inline int64_t SignExtend64(uint64_t X, unsigned B) {
 return (int64_t)(X << (64 - B)) >> (64 - B);
}
# 424 "project/radare2/shlr/capstone/arch/ARM/../../MathExtras.h"
static inline unsigned int countLeadingZeros(int x)
{
 int i;
 const unsigned bits = sizeof(x) * 8;
 unsigned count = bits;

 if (x < 0) {
  return 0;
 }
 for (i = bits; --i; ) {
  if (x == 0) break;
  count--;
  x >>= 1;
 }

 return count;
}
# 22 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 2


typedef enum ARM_AM_ShiftOpc {
 ARM_AM_no_shift = 0,
 ARM_AM_asr,
 ARM_AM_lsl,
 ARM_AM_lsr,
 ARM_AM_ror,
 ARM_AM_rrx
} ARM_AM_ShiftOpc;

typedef enum ARM_AM_AddrOpc {
 ARM_AM_sub = 0,
 ARM_AM_add
} ARM_AM_AddrOpc;

static inline const char *ARM_AM_getAddrOpcStr(ARM_AM_AddrOpc Op)
{
 return Op == ARM_AM_sub ? "-" : "";
}

static inline const char *ARM_AM_getShiftOpcStr(ARM_AM_ShiftOpc Op)
{
 switch (Op) {
  default: return "";
  case ARM_AM_asr: return "asr";
  case ARM_AM_lsl: return "lsl";
  case ARM_AM_lsr: return "lsr";
  case ARM_AM_ror: return "ror";
  case ARM_AM_rrx: return "rrx";
 }
}

static inline unsigned ARM_AM_getShiftOpcEncoding(ARM_AM_ShiftOpc Op)
{
 switch (Op) {
  default: return (unsigned int)-1;
  case ARM_AM_asr: return 2;
  case ARM_AM_lsl: return 0;
  case ARM_AM_lsr: return 1;
  case ARM_AM_ror: return 3;
 }
}

typedef enum ARM_AM_AMSubMode {
 ARM_AM_bad_am_submode = 0,
 ARM_AM_ia,
 ARM_AM_ib,
 ARM_AM_da,
 ARM_AM_db
} ARM_AM_AMSubMode;

static inline const char *ARM_AM_getAMSubModeStr(ARM_AM_AMSubMode Mode)
{
 switch (Mode) {
  default: return "";
  case ARM_AM_ia: return "ia";
  case ARM_AM_ib: return "ib";
  case ARM_AM_da: return "da";
  case ARM_AM_db: return "db";
 }
}



static inline unsigned rotr32(unsigned Val, unsigned Amt)
{

 return (Val >> Amt) | (Val << ((32-Amt)&31));
}



static inline unsigned rotl32(unsigned Val, unsigned Amt)
{

 return (Val << Amt) | (Val >> ((32-Amt)&31));
}
# 115 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline unsigned getSORegOpc(ARM_AM_ShiftOpc ShOp, unsigned Imm)
{
 return ShOp | (Imm << 3);
}

static inline unsigned getSORegOffset(unsigned Op)
{
 return Op >> 3;
}

static inline ARM_AM_ShiftOpc ARM_AM_getSORegShOp(unsigned Op)
{
 return (ARM_AM_ShiftOpc)(Op & 7);
}



static inline unsigned getSOImmValImm(unsigned Imm)
{
 return Imm & 0xFF;
}



static inline unsigned getSOImmValRot(unsigned Imm)
{
 return (Imm >> 8) * 2;
}





static inline unsigned getSOImmValRotate(unsigned Imm)
{
 unsigned TZ, RotAmt;


 if ((Imm & ~255U) == 0) return 0;


 TZ = CountTrailingZeros_32(Imm);



 RotAmt = TZ & ~1;


 if ((rotr32(Imm, RotAmt) & ~255U) == 0)
  return (32-RotAmt)&31;



 if (Imm & 63U) {
  unsigned TZ2 = CountTrailingZeros_32(Imm & ~63U);
  unsigned RotAmt2 = TZ2 & ~1;
  if ((rotr32(Imm, RotAmt2) & ~255U) == 0)
   return (32-RotAmt2)&31;
 }




 return (32-RotAmt)&31;
}




static inline int getSOImmVal(unsigned Arg)
{
 unsigned RotAmt;


 if ((Arg & ~255U) == 0) return Arg;

 RotAmt = getSOImmValRotate(Arg);


 if (rotr32(~255U, RotAmt) & Arg)
  return -1;


 return rotl32(Arg, RotAmt) | ((RotAmt>>1) << 8);
}



static inline 
# 203 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
             _Bool 
# 203 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
                  isSOImmTwoPartVal(unsigned V)
{

 V = rotr32(~255U, getSOImmValRotate(V)) & V;
 if (V == 0)
  return 
# 208 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
        0
# 208 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
             ;


 V = rotr32(~255U, getSOImmValRotate(V)) & V;
 return V == 0;
}



static inline unsigned getSOImmTwoPartFirst(unsigned V)
{
 return rotr32(255U, getSOImmValRotate(V)) & V;
}



static inline unsigned getSOImmTwoPartSecond(unsigned V)
{

 V = rotr32(~255U, getSOImmValRotate(V)) & V;



 return V;
}



static inline unsigned getThumbImmValShift(unsigned Imm)
{


 if ((Imm & ~255U) == 0) return 0;


 return CountTrailingZeros_32(Imm);
}



static inline 
# 248 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
             _Bool 
# 248 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
                  isThumbImmShiftedVal(unsigned V)
{

 V = (~255U << getThumbImmValShift(V)) & V;
 return V == 0;
}



static inline unsigned getThumbImm16ValShift(unsigned Imm)
{


 if ((Imm & ~65535U) == 0) return 0;


 return CountTrailingZeros_32(Imm);
}



static inline 
# 269 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
             _Bool 
# 269 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
                  isThumbImm16ShiftedVal(unsigned V)
{

 V = (~65535U << getThumbImm16ValShift(V)) & V;
 return V == 0;
}



static inline unsigned getThumbImmNonShiftedVal(unsigned V)
{
 return V >> getThumbImmValShift(V);
}
# 293 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline int getT2SOImmValSplatVal(unsigned V)
{
 unsigned u, Vs, Imm;

 if ((V & 0xffffff00) == 0)
  return V;


 Vs = ((V & 0xff) == 0) ? V >> 8 : V;

 Imm = Vs & 0xff;

 u = Imm | (Imm << 16);


 if (Vs == u)
  return (((Vs == V) ? 1 : 2) << 8) | Imm;


 if (Vs == (u | (u << 8)))
  return (3 << 8) | Imm;

 return -1;
}





static inline int getT2SOImmValRotateVal(unsigned V)
{
 unsigned RotAmt = CountLeadingZeros_32(V);
 if (RotAmt >= 24)
  return -1;


 if ((rotr32(0xff000000U, RotAmt) & V) == V)
  return (rotr32(V, 24 - RotAmt) & 0x7f) | ((RotAmt + 8) << 7);

 return -1;
}





static inline int getT2SOImmVal(unsigned Arg)
{
 int Rot;

 int Splat = getT2SOImmValSplatVal(Arg);
 if (Splat != -1)
  return Splat;


 Rot = getT2SOImmValRotateVal(Arg);
 if (Rot != -1)
  return Rot;

 return -1;
}

static inline unsigned getT2SOImmValRotate(unsigned V)
{
 unsigned RotAmt;

 if ((V & ~255U) == 0)
  return 0;


 RotAmt = CountTrailingZeros_32(V);
 return (32 - RotAmt) & 31;
}

static inline 
# 367 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
             _Bool 
# 367 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
                  isT2SOImmTwoPartVal (unsigned Imm)
{
 unsigned V = Imm;



 if (getT2SOImmValSplatVal(V) != -1)
  return 
# 374 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
        0
# 374 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
             ;
 V = rotr32 (~255U, getT2SOImmValRotate(V)) & V;
 if (V == 0)
  return 
# 377 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
        0
# 377 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
             ;


 if (getT2SOImmVal(V) != -1) return 
# 380 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
                                   1
# 380 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
                                       ;


 V = Imm;
 if (getT2SOImmValSplatVal(V & 0xff00ff00U) != -1)
  V &= ~0xff00ff00U;
 else if (getT2SOImmValSplatVal(V & 0x00ff00ffU) != -1)
  V &= ~0x00ff00ffU;

 if (getT2SOImmVal(V) != -1) return 
# 389 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
                                   1
# 389 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
                                       ;


 return 
# 392 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
       0
# 392 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
            ;
}

static inline unsigned getT2SOImmTwoPartFirst(unsigned Imm)
{



 unsigned V = rotr32 (~(unsigned int)255, getT2SOImmValRotate(Imm)) & Imm;

 if (getT2SOImmVal(V) != -1) return V;


 if (getT2SOImmValSplatVal(Imm & 0xff00ff00U) != -1)
  return Imm & 0xff00ff00U;



 return Imm & 0x00ff00ffU;
}

static inline unsigned getT2SOImmTwoPartSecond(unsigned Imm)
{

 Imm ^= getT2SOImmTwoPartFirst(Imm);



 return Imm;
}
# 442 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline unsigned ARM_AM_getAM2Opc(ARM_AM_AddrOpc Opc, unsigned Imm12, ARM_AM_ShiftOpc SO,
  unsigned IdxMode)
{

 
# 446 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
_Bool 
# 446 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
     isSub = Opc == ARM_AM_sub;
 return Imm12 | ((int)isSub << 12) | (SO << 13) | (IdxMode << 16) ;
}

static inline unsigned getAM2Offset(unsigned AM2Opc)
{
 return AM2Opc & ((1 << 12)-1);
}

static inline ARM_AM_AddrOpc getAM2Op(unsigned AM2Opc)
{
 return ((AM2Opc >> 12) & 1) ? ARM_AM_sub : ARM_AM_add;
}

static inline ARM_AM_ShiftOpc getAM2ShiftOpc(unsigned AM2Opc)
{
 return (ARM_AM_ShiftOpc)((AM2Opc >> 13) & 7);
}

static inline unsigned getAM2IdxMode(unsigned AM2Opc)
{
 return (AM2Opc >> 16);
}
# 485 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline unsigned getAM3Opc(ARM_AM_AddrOpc Opc, unsigned char Offset,
  unsigned IdxMode)
{
 
# 488 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
_Bool 
# 488 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
     isSub = Opc == ARM_AM_sub;
 return ((int)isSub << 8) | Offset | (IdxMode << 9);
}

static inline unsigned char getAM3Offset(unsigned AM3Opc)
{
 return AM3Opc & 0xFF;
}

static inline ARM_AM_AddrOpc getAM3Op(unsigned AM3Opc)
{
 return ((AM3Opc >> 8) & 1) ? ARM_AM_sub : ARM_AM_add;
}

static inline unsigned getAM3IdxMode(unsigned AM3Opc)
{
 return (AM3Opc >> 9);
}
# 522 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline ARM_AM_AMSubMode getAM4SubMode(unsigned Mode)
{
 return (ARM_AM_AMSubMode)(Mode & 0x7);
}

static inline unsigned getAM4ModeImm(ARM_AM_AMSubMode SubMode)
{
 return (int)SubMode;
}
# 544 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline unsigned ARM_AM_getAM5Opc(ARM_AM_AddrOpc Opc, unsigned char Offset)
{
 
# 546 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
_Bool 
# 546 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
     isSub = Opc == ARM_AM_sub;
 return ((int)isSub << 8) | Offset;
}
static inline unsigned char ARM_AM_getAM5Offset(unsigned AM5Opc)
{
 return AM5Opc & 0xFF;
}
static inline ARM_AM_AddrOpc ARM_AM_getAM5Op(unsigned AM5Opc)
{
 return ((AM5Opc >> 8) & 1) ? ARM_AM_sub : ARM_AM_add;
}
# 570 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline unsigned getAM5FP16Opc(ARM_AM_AddrOpc Opc, unsigned char Offset)
{
 
# 572 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h" 3 4
_Bool 
# 572 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
     isSub = Opc == ARM_AM_sub;
 return ((int)isSub << 8) | Offset;
}

static inline unsigned char getAM5FP16Offset(unsigned AM5Opc)
{
 return AM5Opc & 0xFF;
}

static inline ARM_AM_AddrOpc getAM5FP16Op(unsigned AM5Opc)
{
 return ((AM5Opc >> 8) & 1) ? ARM_AM_sub : ARM_AM_add;
}
# 611 "project/radare2/shlr/capstone/arch/ARM/ARMAddressingModes.h"
static inline unsigned createNEONModImm(unsigned OpCmode, unsigned Val)
{
 return (OpCmode << 8) | Val;
}
static inline unsigned getNEONModImmOpCmode(unsigned ModImm)
{
 return (ModImm >> 8) & 0x1f;
}
static inline unsigned getNEONModImmVal(unsigned ModImm)
{
 return ModImm & 0xff;
}




static inline uint64_t ARM_AM_decodeNEONModImm(unsigned ModImm, unsigned *EltBits)
{
 unsigned OpCmode = getNEONModImmOpCmode(ModImm);
 unsigned Imm8 = getNEONModImmVal(ModImm);
 uint64_t Val = 0;
 unsigned ByteNum;

 if (OpCmode == 0xe) {

  Val = Imm8;
  *EltBits = 8;
 } else if ((OpCmode & 0xc) == 0x8) {

  ByteNum = (OpCmode & 0x6) >> 1;
  Val = (uint64_t)Imm8 << (8 * ByteNum);
  *EltBits = 16;
 } else if ((OpCmode & 0x8) == 0) {

  ByteNum = (OpCmode & 0x6) >> 1;
  Val = (uint64_t)Imm8 << (8 * ByteNum);
  *EltBits = 32;
 } else if ((OpCmode & 0xe) == 0xc) {

  ByteNum = 1 + (OpCmode & 0x1);
  Val = (Imm8 << (8 * ByteNum)) | (0xffff >> (8 * (2 - ByteNum)));
  *EltBits = 32;
 } else if (OpCmode == 0x1e) {

  for (ByteNum = 0; ByteNum < 8; ++ByteNum) {
   if ((ModImm >> ByteNum) & 1)
    Val |= (uint64_t)0xff << (8 * ByteNum);
  }
  *EltBits = 64;
 } else {

 }
 return Val;
}

ARM_AM_AMSubMode getLoadStoreMultipleSubMode(int Opcode);




static inline float getFPImmFloat(unsigned Imm)
{

 union {
  uint32_t I;
  float F;
 } FPUnion;

 uint8_t Sign = (Imm >> 7) & 0x1;
 uint8_t Exp = (Imm >> 4) & 0x7;
 uint8_t Mantissa = Imm & 0xf;






 FPUnion.I = 0;
 FPUnion.I |= ((uint32_t) Sign) << 31;
 FPUnion.I |= ((Exp & 0x4) != 0 ? 0 : 1) << 30;
 FPUnion.I |= ((Exp & 0x4) != 0 ? 0x1f : 0) << 25;
 FPUnion.I |= (Exp & 0x3) << 23;
 FPUnion.I |= Mantissa << 19;
 return FPUnion.F;
}
