# 0 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"

# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h" 1
       
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







# 3 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h" 2

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
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

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
# 5 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h" 2
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






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 6 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h" 2






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
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








# 13 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h" 2
# 29 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h"

# 29 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.h"
enum Operation {
 ARMV7_UNDEFINED,
 ARMV7_UNPREDICTABLE,
 ARMV7_ADC,
 ARMV7_ADCS,
 ARMV7_ADD,
 ARMV7_ADDS,
 ARMV7_ADDW,
 ARMV7_ADR,
 ARMV7_AND,
 ARMV7_ANDS,
 ARMV7_ASR,
 ARMV7_ASRS,
 ARMV7_B,
 ARMV7_BFC,
 ARMV7_BFI,
 ARMV7_BIC,
 ARMV7_BICS,
 ARMV7_BKPT,
 ARMV7_BL,
 ARMV7_BLX,
 ARMV7_BX,
 ARMV7_BXJ,
 ARMV7_CBNZ,
 ARMV7_CBZ,
 ARMV7_CDP,
 ARMV7_CDP2,
 ARMV7_CLREX,
 ARMV7_CLZ,
 ARMV7_CMN,
 ARMV7_CMP,
 ARMV7_CPS,
 ARMV7_CPSID,
 ARMV7_CPSIE,
 ARMV7_DBG,
 ARMV7_DMB,
 ARMV7_DSB,
 ARMV7_ENTERX,
 ARMV7_EOR,
 ARMV7_EORS,
 ARMV7_ERET,
 ARMV7_FLDMDBX,
 ARMV7_FLDMIAX,
 ARMV7_FSTMDBX,
 ARMV7_FSTMIAX,
 ARMV7_FSTMX,
 ARMV7_HINT,
 ARMV7_HVC,
 ARMV7_ISB,
 ARMV7_IT,
 ARMV7_LDA,
 ARMV7_LDAB,
 ARMV7_LDAH,
 ARMV7_LDAEX,
 ARMV7_LDAEXB,
 ARMV7_LDAEXH,
 ARMV7_LDAEXD,
 ARMV7_LDC,
 ARMV7_LDC2,
 ARMV7_LDC2L,
 ARMV7_LDCL,
 ARMV7_LDM,
 ARMV7_LDMDA,
 ARMV7_LDMDB,
 ARMV7_LDMIA,
 ARMV7_LDMIB,
 ARMV7_LDR,
 ARMV7_LDRB,
 ARMV7_LDRBT,
 ARMV7_LDRD,
 ARMV7_LDREX,
 ARMV7_LDREXB,
 ARMV7_LDREXD,
 ARMV7_LDREXH,
 ARMV7_LDRH,
 ARMV7_LDRHT,
 ARMV7_LDRSB,
 ARMV7_LDRSBT,
 ARMV7_LDRSH,
 ARMV7_LDRSHT,
 ARMV7_LDRT,
 ARMV7_LEAVEX,
 ARMV7_LSL,
 ARMV7_LSLS,
 ARMV7_LSR,
 ARMV7_LSRS,
 ARMV7_MCR,
 ARMV7_MCR2,
 ARMV7_MCRR,
 ARMV7_MCRR2,
 ARMV7_MLA,
 ARMV7_MLS,
 ARMV7_MOV,
 ARMV7_MOVS,
 ARMV7_MOVT,
 ARMV7_MOVW,
 ARMV7_MRC,
 ARMV7_MRC2,
 ARMV7_MRRC,
 ARMV7_MRRC2,
 ARMV7_MRS,
 ARMV7_MSR,
 ARMV7_MUL,
 ARMV7_MULS,
 ARMV7_MVN,
 ARMV7_MVNS,
 ARMV7_NOP,
 ARMV7_ORN,
 ARMV7_ORR,
 ARMV7_ORRS,
 ARMV7_PKHBT,
 ARMV7_PKHTB,
 ARMV7_PLD,
 ARMV7_PLDW,
 ARMV7_PLI,
 ARMV7_POP,
 ARMV7_PUSH,
 ARMV7_QADD,
 ARMV7_QADD16,
 ARMV7_QADD8,
 ARMV7_QASX,
 ARMV7_QDADD,
 ARMV7_QDSUB,
 ARMV7_QSAX,
 ARMV7_QSUB,
 ARMV7_QSUB16,
 ARMV7_QSUB8,
 ARMV7_RBIT,
 ARMV7_REV,
 ARMV7_REV16,
 ARMV7_REVSH,
 ARMV7_RFE,
 ARMV7_RFEDA,
 ARMV7_RFEDB,
 ARMV7_RFEIA,
 ARMV7_RFEIB,
 ARMV7_ROR,
 ARMV7_RORS,
 ARMV7_RRX,
 ARMV7_RSB,
 ARMV7_RSBS,
 ARMV7_RSC,
 ARMV7_SADD16,
 ARMV7_SADD8,
 ARMV7_SASX,
 ARMV7_SBC,
 ARMV7_SBCS,
 ARMV7_SBFX,
 ARMV7_SDIV,
 ARMV7_SEL,
 ARMV7_SETEND,
 ARMV7_SEV,
 ARMV7_SHADD16,
 ARMV7_SHADD8,
 ARMV7_SHASX,
 ARMV7_SHSAX,
 ARMV7_SHSUB16,
 ARMV7_SHSUB8,
 ARMV7_SMC,
 ARMV7_SMLABB,
 ARMV7_SMLABT,
 ARMV7_SMLAD,
 ARMV7_SMLADX,
 ARMV7_SMLAL,
 ARMV7_SMLALBB,
 ARMV7_SMLALBT,
 ARMV7_SMLALD,
 ARMV7_SMLALDX,
 ARMV7_SMLALTB,
 ARMV7_SMLALTT,
 ARMV7_SMLATB,
 ARMV7_SMLATT,
 ARMV7_SMLAWB,
 ARMV7_SMLAWT,
 ARMV7_SMLSD,
 ARMV7_SMLSDX,
 ARMV7_SMLSLD,
 ARMV7_SMLSLDX,
 ARMV7_SMMLA,
 ARMV7_SMMLAR,
 ARMV7_SMMLS,
 ARMV7_SMMLSR,
 ARMV7_SMMUL,
 ARMV7_SMMULR,
 ARMV7_SMUAD,
 ARMV7_SMUADX,
 ARMV7_SMULBB,
 ARMV7_SMULBT,
 ARMV7_SMULL,
 ARMV7_SMULTB,
 ARMV7_SMULTT,
 ARMV7_SMULWB,
 ARMV7_SMULWT,
 ARMV7_SMUSD,
 ARMV7_SMUSDT,
 ARMV7_SMUSDX,
 ARMV7_SRS,
 ARMV7_SRSDA,
 ARMV7_SRSDB,
 ARMV7_SRSIA,
 ARMV7_SRSIB,
 ARMV7_SSAT,
 ARMV7_SSAT16,
 ARMV7_SSAX,
 ARMV7_SSUB16,
 ARMV7_SSUB8,
 ARMV7_STC,
 ARMV7_STC2,
 ARMV7_STC2L,
 ARMV7_STCL,
 ARMV7_STL,
 ARMV7_STLB,
 ARMV7_STLH,
 ARMV7_STLEX,
 ARMV7_STLEXB,
 ARMV7_STLEXH,
 ARMV7_STLEXD,
 ARMV7_STM,
 ARMV7_STMBD,
 ARMV7_STMDA,
 ARMV7_STMDB,
 ARMV7_STMIA,
 ARMV7_STMIB,
 ARMV7_STR,
 ARMV7_STRB,
 ARMV7_STRBT,
 ARMV7_STRD,
 ARMV7_STREX,
 ARMV7_STREXB,
 ARMV7_STREXD,
 ARMV7_STREXH,
 ARMV7_STRH,
 ARMV7_STRHT,
 ARMV7_STRT,
 ARMV7_SUB,
 ARMV7_SUBS,
 ARMV7_SUBW,
 ARMV7_SVC,
 ARMV7_SWP,
 ARMV7_SWPB,
 ARMV7_SXTAB,
 ARMV7_SXTAB16,
 ARMV7_SXTAH,
 ARMV7_SXTB,
 ARMV7_SXTB16,
 ARMV7_SXTH,
 ARMV7_TBB,
 ARMV7_TBH,
 ARMV7_TEQ,
 ARMV7_TRAP,
 ARMV7_TRT,
 ARMV7_TST,
 ARMV7_UADD16,
 ARMV7_UADD8,
 ARMV7_UASX,
 ARMV7_UBFX,
 ARMV7_UDF,
 ARMV7_UDIV,
 ARMV7_UHADD16,
 ARMV7_UHADD8,
 ARMV7_UHASX,
 ARMV7_UHSAX,
 ARMV7_UHSUB16,
 ARMV7_UHSUB8,
 ARMV7_UMAAL,
 ARMV7_UMLAL,
 ARMV7_UMULL,
 ARMV7_UQADD16,
 ARMV7_UQADD8,
 ARMV7_UQASX,
 ARMV7_UQSAX,
 ARMV7_UQSUB16,
 ARMV7_UQSUB8,
 ARMV7_USAD8,
 ARMV7_USADA8,
 ARMV7_USAT,
 ARMV7_USAT16,
 ARMV7_USAX,
 ARMV7_USUB16,
 ARMV7_USUB8,
 ARMV7_UXTAB,
 ARMV7_UXTAB16,
 ARMV7_UXTAH,
 ARMV7_UXTB,
 ARMV7_UXTB16,
 ARMV7_UXTH,
 ARMV7_VABA,
 ARMV7_VABAL,
 ARMV7_VABD,
 ARMV7_VABDL,
 ARMV7_VABS,
 ARMV7_VACGE,
 ARMV7_VACGT,
 ARMV7_VADD,
 ARMV7_VADDHN,
 ARMV7_VADDL,
 ARMV7_VADDW,
 ARMV7_VAND,
 ARMV7_VBIC,
 ARMV7_VBIF,
 ARMV7_VBIT,
 ARMV7_VBSL,
 ARMV7_VCEQ,
 ARMV7_VCGE,
 ARMV7_VCGT,
 ARMV7_VCLE,
 ARMV7_VCLS,
 ARMV7_VCLT,
 ARMV7_VCLZ,
 ARMV7_VCMP,
 ARMV7_VCMPE,
 ARMV7_VCNT,
 ARMV7_VCVT,
 ARMV7_VCVTA,
 ARMV7_VCVTB,
 ARMV7_VCVTM,
 ARMV7_VCVTN,
 ARMV7_VCVTP,
 ARMV7_VCVTR,
 ARMV7_VCVTT,
 ARMV7_VDIV,
 ARMV7_VDUP,
 ARMV7_VEOR,
 ARMV7_VEXT,
 ARMV7_VFMA,
 ARMV7_VFMS,
 ARMV7_VFNMA,
 ARMV7_VFNMS,
 ARMV7_VHADD,
 ARMV7_VHSUB,
 ARMV7_VLD1,
 ARMV7_VLD2,
 ARMV7_VLD3,
 ARMV7_VLD4,
 ARMV7_VLDM,
 ARMV7_VLDMDB,
 ARMV7_VLDMIA,
 ARMV7_VLDR,
 ARMV7_VMAX,
 ARMV7_VMAXNM,
 ARMV7_VMIN,
 ARMV7_VMINM,
 ARMV7_VMLA,
 ARMV7_VMLAL,
 ARMV7_VMLS,
 ARMV7_VMLSL,
 ARMV7_VMOV,
 ARMV7_VMOVL,
 ARMV7_VMOVN,
 ARMV7_VMRS,
 ARMV7_VMSR,
 ARMV7_VMUL,
 ARMV7_VMULL,
 ARMV7_VMVN,
 ARMV7_VNEG,
 ARMV7_VNMLA,
 ARMV7_VNMLS,
 ARMV7_VNMUL,
 ARMV7_VORN,
 ARMV7_VORR,
 ARMV7_VPADAL,
 ARMV7_VPADD,
 ARMV7_VPADDL,
 ARMV7_VPMAX,
 ARMV7_VPMIN,
 ARMV7_VPOP,
 ARMV7_VPUSH,
 ARMV7_VQABS,
 ARMV7_VQADD,
 ARMV7_VQDMLAL,
 ARMV7_VQDMLSL,
 ARMV7_VQDMULH,
 ARMV7_VQDMULL,
 ARMV7_VQMOVN,
 ARMV7_VQMOVUN,
 ARMV7_VQNEG,
 ARMV7_VQRDMULH,
 ARMV7_VQRSHL,
 ARMV7_VQRSHRN,
 ARMV7_VQRSHRUN,
 ARMV7_VQSHL,
 ARMV7_VQSHLU,
 ARMV7_VQSHRN,
 ARMV7_VQSHRUN,
 ARMV7_VQSUB,
 ARMV7_VRADDHN,
 ARMV7_VRECPE,
 ARMV7_VRECPS,
 ARMV7_VREV16,
 ARMV7_VREV32,
 ARMV7_VREV64,
 ARMV7_VRHADD,
 ARMV7_VRHSUB,
 ARMV7_VRINTA,
 ARMV7_VRINTM,
 ARMV7_VRINTN,
 ARMV7_VRINTP,
 ARMV7_VRINTR,
 ARMV7_VRINTX,
 ARMV7_VRINTZ,
 ARMV7_VRSHL,
 ARMV7_VRSHR,
 ARMV7_VRSHRN,
 ARMV7_VRSQRTE,
 ARMV7_VRSQRTS,
 ARMV7_VRSRA,
 ARMV7_VRSUBHN,
 ARMV7_VSEL,
 ARMV7_VSHL,
 ARMV7_VSHLL,
 ARMV7_VSHR,
 ARMV7_VSHRN,
 ARMV7_VSLI,
 ARMV7_VSQRT,
 ARMV7_VSRA,
 ARMV7_VSRI,
 ARMV7_VST1,
 ARMV7_VST2,
 ARMV7_VST3,
 ARMV7_VST4,
 ARMV7_VSTM,
 ARMV7_VSTMDB,
 ARMV7_VSTMIA,
 ARMV7_VSTR,
 ARMV7_VSUB,
 ARMV7_VSUBHN,
 ARMV7_VSUBL,
 ARMV7_VSUBW,
 ARMV7_VSWP,
 ARMV7_VTBL,
 ARMV7_VTBX,
 ARMV7_VTRN,
 ARMV7_VTST,
 ARMV7_VUZP,
 ARMV7_VZIP,
 ARMV7_WFE,
 ARMV7_WFI,
 ARMV7_YIELD,
 ARMV7_END_INSTRUCTION
};

enum Shift {
 SHIFT_NONE,
 SHIFT_LSL,
 SHIFT_LSR,
 SHIFT_ASR,
 SHIFT_ROR,
 SHIFT_RRX,
 SHIFT_END
};

enum Condition {
 COND_EQ,
 COND_NE,
 COND_CS,
 COND_CC,
 COND_MI,
 COND_PL,
 COND_VS,
 COND_VC,
 COND_HI,
 COND_LS,
 COND_GE,
 COND_LT,
 COND_GT,
 COND_LE,
 COND_NONE,
 COND_NONE2,
 COND_END
};


enum RegisterList {
 REG_LIST_R0 = 0x0001,
 REG_LIST_R1 = 0x0002,
 REG_LIST_R2 = 0x0004,
 REG_LIST_R3 = 0x0008,
 REG_LIST_R4 = 0x0010,
 REG_LIST_R5 = 0x0020,
 REG_LIST_R6 = 0x0040,
 REG_LIST_R7 = 0x0080,
 REG_LIST_R8 = 0x0100,
 REG_LIST_SB = 0x0200,
 REG_LIST_SL = 0x0400,
 REG_LIST_FP = 0x0800,
 REG_LIST_IP = 0x1000,
 REG_LIST_SP = 0x2000,
 REG_LIST_LR = 0x4000,
 REG_LIST_PC = 0x8000,
};

enum Register {
 ARMV7_REG_R0,
 ARMV7_REG_R1,
 ARMV7_REG_R2,
 ARMV7_REG_R3,
 ARMV7_REG_R4,
 ARMV7_REG_R5,
 ARMV7_REG_R6,
 ARMV7_REG_R7,
 ARMV7_REG_R8,
 ARMV7_REG_R9,
 ARMV7_REG_R10,
 ARMV7_REG_R11,
 ARMV7_REG_R12,
 ARMV7_REG_SP, ARMV7_REG_R13 = 13,
 ARMV7_REG_LR, ARMV7_REG_R14 = 14,
 ARMV7_REG_PC, ARMV7_REG_R15 = 15,
 ARMV7_REG_S0,
 ARMV7_REG_S1,
 ARMV7_REG_S2,
 ARMV7_REG_S3,
 ARMV7_REG_S4,
 ARMV7_REG_S5,
 ARMV7_REG_S6,
 ARMV7_REG_S7,
 ARMV7_REG_S8,
 ARMV7_REG_S9,
 ARMV7_REG_S10,
 ARMV7_REG_S11,
 ARMV7_REG_S12,
 ARMV7_REG_S13,
 ARMV7_REG_S14,
 ARMV7_REG_S15,
 ARMV7_REG_S16,
 ARMV7_REG_S17,
 ARMV7_REG_S18,
 ARMV7_REG_S19,
 ARMV7_REG_S20,
 ARMV7_REG_S21,
 ARMV7_REG_S22,
 ARMV7_REG_S23,
 ARMV7_REG_S24,
 ARMV7_REG_S25,
 ARMV7_REG_S26,
 ARMV7_REG_S27,
 ARMV7_REG_S28,
 ARMV7_REG_S29,
 ARMV7_REG_S30,
 ARMV7_REG_S31,
 ARMV7_REG_D0,
 ARMV7_REG_D1,
 ARMV7_REG_D2,
 ARMV7_REG_D3,
 ARMV7_REG_D4,
 ARMV7_REG_D5,
 ARMV7_REG_D6,
 ARMV7_REG_D7,
 ARMV7_REG_D8,
 ARMV7_REG_D9,
 ARMV7_REG_D10,
 ARMV7_REG_D11,
 ARMV7_REG_D12,
 ARMV7_REG_D13,
 ARMV7_REG_D14,
 ARMV7_REG_D15,
 ARMV7_REG_D16,
 ARMV7_REG_D17,
 ARMV7_REG_D18,
 ARMV7_REG_D19,
 ARMV7_REG_D20,
 ARMV7_REG_D21,
 ARMV7_REG_D22,
 ARMV7_REG_D23,
 ARMV7_REG_D24,
 ARMV7_REG_D25,
 ARMV7_REG_D26,
 ARMV7_REG_D27,
 ARMV7_REG_D28,
 ARMV7_REG_D29,
 ARMV7_REG_D30,
 ARMV7_REG_D31,
 ARMV7_REG_Q0,
 ARMV7_REG_Q1,
 ARMV7_REG_Q2,
 ARMV7_REG_Q3,
 ARMV7_REG_Q4,
 ARMV7_REG_Q5,
 ARMV7_REG_Q6,
 ARMV7_REG_Q7,
 ARMV7_REG_Q8,
 ARMV7_REG_Q9,
 ARMV7_REG_Q10,
 ARMV7_REG_Q11,
 ARMV7_REG_Q12,
 ARMV7_REG_Q13,
 ARMV7_REG_Q14,
 ARMV7_REG_Q15,
};

enum BankedRegister {
 REGB_ELR_HYP,
 REGB_LR_ABT,
 REGB_LR_FIQ,
 REGB_LR_IRQ,
 REGB_LR_MON,
 REGB_LR_SVC,
 REGB_LR_UND,
 REGB_LR_USR,
 REGB_R10_FIQ,
 REGB_R10_USR,
 REGB_R11_FIQ,
 REGB_R11_USR,
 REGB_R12_FIQ,
 REGB_R12_USR,
 REGB_R8_FIQ,
 REGB_R8_USR,
 REGB_R9_FIQ,
 REGB_R9_USR,
 REGB_SPSR_ABT,
 REGB_SPSR_FIQ,
 REGB_SPSR_HYP,
 REGB_SPSR_IRQ,
 REGB_SPSR_MON,
 REGB_SPSR_SVC,
 REGB_SPSR_UND,
 REGB_SP_ABT,
 REGB_SP_FIQ,
 REGB_SP_HYP,
 REGB_SP_IRQ,
 REGB_SP_MON,
 REGB_SP_SVC,
 REGB_SP_UND,
 REGB_SP_USR,
 REGB_INVALID,
};

enum SpecRegister {
 REGS_APSR,
 REGS_APSR_G,
 REGS_APSR_NZCVQ,
 REGS_APSR_NZCVQG,
 REGS_CPSR,
 REGS_CPSR_C,
 REGS_CPSR_X,
 REGS_CPSR_XC,
 REGS_CPSR_S,
 REGS_CPSR_SC,
 REGS_CPSR_SX,
 REGS_CPSR_SXC,
 REGS_CPSR_F,
 REGS_CPSR_FC,
 REGS_CPSR_FX,
 REGS_CPSR_FXC,
 REGS_CPSR_FS,
 REGS_CPSR_FSC,
 REGS_CPSR_FSX,
 REGS_CPSR_FSXC,
 REGS_SPSR,
 REGS_SPSR_C,
 REGS_SPSR_X,
 REGS_SPSR_XC,
 REGS_SPSR_S,
 REGS_SPSR_SC,
 REGS_SPSR_SX,
 REGS_SPSR_SXC,
 REGS_SPSR_F,
 REGS_SPSR_FC,
 REGS_SPSR_FX,
 REGS_SPSR_FXC,
 REGS_SPSR_FS,
 REGS_SPSR_FSC,
 REGS_SPSR_FSX,
 REGS_SPSR_FSXC,
 REGS_APSR_NZCV,
 REGS_FPSID,
 REGS_FPSCR,
 REGS_MVFR2,
 REGS_MVFR1,
 REGS_MVFR0,
 REGS_FPEXC,
 REGS_FPINST,
 REGS_FPINST2,
 REGS_END
};

enum CoprocRegisterC {
 ARMV7_REG_C0,
 ARMV7_REG_C1,
 ARMV7_REG_C2,
 ARMV7_REG_C3,
 ARMV7_REG_C4,
 ARMV7_REG_C5,
 ARMV7_REG_C6,
 ARMV7_REG_C7,
 ARMV7_REG_C8,
 ARMV7_REG_C9,
 ARMV7_REG_C10,
 ARMV7_REG_C11,
 ARMV7_REG_C12,
 ARMV7_REG_C13,
 ARMV7_REG_C14,
 ARMV7_REG_C15,
 ARMV7_REG_CEND
};

enum CoprocRegisterP {
 ARMV7_REG_P0,
 ARMV7_REG_P1,
 ARMV7_REG_P2,
 ARMV7_REG_P3,
 ARMV7_REG_P4,
 ARMV7_REG_P5,
 ARMV7_REG_P6,
 ARMV7_REG_P7,
 ARMV7_REG_P8,
 ARMV7_REG_P9,
 ARMV7_REG_P10,
 ARMV7_REG_P11,
 ARMV7_REG_P12,
 ARMV7_REG_P13,
 ARMV7_REG_P14,
 ARMV7_REG_P15,
 ARMV7_REG_PEND
};

enum Iflags {
 IFL_NONE,
 IFL_A,
 IFL_I,
 IFL_IA,
 IFL_F,
 IFL_FA,
 IFL_FI,
 IFL_FIA,
 IFL_END
};

enum EndianSpec {
 ES_LE,
 ES_BE
};

enum DsbOption {
 DSB_NONE0,
 DSB_NONE1,
 DSB_OSHST,
 DSB_OSH,
 DSB_NONE4,
 DSB_NONE5,
 DSB_NSHST,
 DSB_NSH,
 DSB_NONE8,
 DSB_NONE9,
 DSB_ISHST,
 DSB_ISH,
 DSB_NONE12,
 DSB_NONE13,
 DSB_ST,
 DSB_SY,
 DSB_END
};

enum OperandClass {
 OC_NONE,
 OC_IMM,
 OC_IMM64,
 OC_LABEL,
 OC_REG,
 OC_REG_LIST,
 OC_REG_LIST_SINGLE,
 OC_REG_LIST_DOUBLE,
 OC_REG_SPEC,
 OC_REG_BANKED,
 OC_REG_COPROCC,
 OC_REG_COPROCP,
 OC_IFLAGS,
 OC_ENDIAN_SPEC,
 OC_DSB_OPTION,
 OC_MEM_ALIGNED,
 OC_MEM_PRE_IDX,
 OC_MEM_POST_IDX,
 OC_MEM_IMM,
 OC_MEM_OPTION,
 OC_FIMM16,
 OC_FIMM32,
 OC_FIMM64
};

enum DataType {
 DT_NONE = 0,
 DT_S8 = 1,
 DT_S16,
 DT_S32,
 DT_S64,
 DT_U8,
 DT_U16,
 DT_U32,
 DT_U64,
 DT_I8,
 DT_I16,
 DT_I32,
 DT_I64,
 DT_F16,
 DT_F32,
 DT_F64,
 DT_P8,
 DT_P16,
 DT_P32,
 DT_P64,
 DT_8,
 DT_16,
 DT_32,
 DT_64,
 DT_END
};

struct InstructionOperand {
 enum OperandClass cls;
 struct {
  uint32_t wb:1;
  uint32_t add:1;
  uint32_t hasElements:1;
  uint32_t emptyElement:1;
  uint32_t offsetRegUsed:1;
 } flags;
 union {
  enum Register reg;
  enum BankedRegister regb;
  enum SpecRegister regs;
  enum CoprocRegisterP regp;
  enum CoprocRegisterC regc;
  enum DsbOption dsbOpt;
  enum Iflags iflag;
  enum EndianSpec endian;
  enum Condition cond;
 };
 enum Register offset;
 enum Shift shift;
 union {
  uint32_t imm;
  double immd;
  float immf;
  uint64_t imm64;
 };
};

struct Instruction{
 enum Operation operation;
 enum Condition cond;
 enum DataType dataType;
 enum DataType dataType2;
 uint32_t setsFlags;
 uint32_t unpredictable;
 struct InstructionOperand operands[6];
};

typedef union _ieee754 {
 uint32_t value;
 struct {
  uint32_t fraction:23;
  uint32_t exponent:8;
  uint32_t sign:1;
 };
 float fvalue;
}ieee754;

typedef union _ieee754_double {
 uint64_t value;
 struct {
  uint64_t fraction:52;
  uint64_t exponent:11;
  uint64_t sign:1;
 };
 double fvalue;
}ieee754_double;


 typedef enum OperandClass OperandClass;
 typedef enum Operation Operation;
 typedef enum Shift Shift;
 typedef enum Condition Condition;
 typedef enum Register Register;
 typedef enum BankedRegister BankedRegister;
 typedef enum SpecRegister SpecRegister;
 typedef enum CoprocRegisterP CoprocRegisterP;
 typedef enum CoprocRegisterC CoprocRegisterC;
 typedef enum DataType DataType;
 typedef enum Iflags Iflags;
 typedef enum EndianSpec EndianSpec;
 typedef enum DsbOption DsbOption;
 typedef struct InstructionOperand InstructionOperand;
 typedef struct Instruction Instruction;





 uint32_t armv7_decompose(
         uint32_t instructionValue,
         Instruction* restrict instruction,
         uint32_t address,
         uint32_t littleEndian);

 uint32_t armv7_disassemble(
   Instruction* restrict instruction,
   char* outBuffer,
   uint32_t outBufferSize);


 static const char* get_operation(Operation operation);
 char* get_full_operation(char* outBuffer, size_t outBufferSize, Instruction* restrict instruction);
 const char* get_vector_data_type(DataType dataType);
 static const char* get_register_name(Register reg);
 const char* get_banked_register_name(BankedRegister regb);
 const char* get_coproc_register_c_name(CoprocRegisterC regc);
 const char* get_coproc_register_p_name(CoprocRegisterP regp);
 const char* get_spec_register_name(SpecRegister regs);
 const char* get_iflag(Iflags iflag);
 const char* get_endian(EndianSpec spec);
 const char* get_dsb_option(DsbOption opt);
 static const char* get_shift(Shift shift);
 static const char* get_condition(Condition cond);
 static uint32_t get_register_size(Register reg);
 static uint32_t get_register_names(Register reg, const char** regNames, OperandClass type);
# 3 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 2





uint32_t armv7_64_bit_transfers(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_branch_and_block_data_transfer(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_coprocessor_instruction_and_supervisor_call(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_data_processing_and_misc(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_data_processing_imm(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_data_processing_reg_shifted_reg(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_data_processing_reg(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_decompose(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address, uint32_t bigEndian);
uint32_t armv7_extension_register_load_store(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_extra_load_store(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_extra_load_store_unprivilaged(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_floating_point_data_processing(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_halfword_multiply_and_accumulate(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_load_store_word_and_unsigned_byte(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_media_instructions(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_memory_hints_simd_and_misc(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_miscellaneous(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_msr_imm_and_hints(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_multiply_and_accumulate(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_one_register_and_modified_imm(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_parallel_add_sub_reversal(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_parallel_add_sub_signed(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_parallel_add_sub_udiv(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_parallel_add_sub_unsigned(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_saturating_add_sub(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_simd_data_processing(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_simd_load_store(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_synchronization_primitives(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_three_register_different(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_three_register_same(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_transfers(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_two_register_and_shift(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_two_register_misc(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_two_register_scalar(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
uint32_t armv7_unconditional(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);
typedef uint32_t (*armv7_decompose_instruction)(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address);

static Register regMap[2] = {ARMV7_REG_D0, ARMV7_REG_Q0};





static const char* operationString[] = {
 "UNDEFINED",
 "UNPREDICTABLE",
 "adc",
 "adcs",
 "add",
 "adds",
 "addw",
 "adr",
 "and",
 "ands",
 "asr",
 "asrs",
 "b",
 "bfc",
 "bfi",
 "bic",
 "bics",
 "bkpt",
 "bl",
 "blx",
 "bx",
 "bxj",
 "cbnz",
 "cbz",
 "cdp",
 "cdp2",
 "clrex",
 "clz",
 "cmn",
 "cmp",
 "cps",
 "cpsid",
 "cpsie",
 "dbg",
 "dmb",
 "dsb",
 "enterx",
 "eor",
 "eors",
 "eret",
 "fldmdbx",
 "fldmiax",
 "fstmdbx",
 "fstmiax",
 "fstmx",
 "hint",
 "hvc",
 "isb",
 "it",
 "lda",
 "ldab",
 "ldah",
 "ldaex",
 "ldaexb",
 "ldaexh",
 "ldaexd",
 "ldc",
 "ldc2",
 "ldc2l",
 "ldcl",
 "ldm",
 "ldmda",
 "ldmdb",
 "ldmia",
 "ldmib",
 "ldr",
 "ldrb",
 "ldrbt",
 "ldrd",
 "ldrex",
 "ldrexb",
 "ldrexd",
 "ldrexh",
 "ldrh",
 "ldrht",
 "ldrsb",
 "ldrsbt",
 "ldrsh",
 "ldrsht",
 "ldrt",
 "leavex",
 "lsl",
 "lsls",
 "lsr",
 "lsrs",
 "mcr",
 "mcr2",
 "mcrr",
 "mcrr2",
 "mla",
 "mls",
 "mov",
 "movs",
 "movt",
 "movw",
 "mrc",
 "mrc2",
 "mrrc",
 "mrrc2",
 "mrs",
 "msr",
 "mul",
 "muls",
 "mvn",
 "mvns",
 "nop",
 "orn",
 "orr",
 "orrs",
 "pkhbt",
 "pkhtb",
 "pld",
 "pldw",
 "pli",
 "pop",
 "push",
 "qadd",
 "qadd16",
 "qadd8",
 "qasx",
 "qdadd",
 "qdsub",
 "qsax",
 "qsub",
 "qsub16",
 "qsub8",
 "rbit",
 "rev",
 "rev16",
 "revsh",
 "rfe",
 "rfeda",
 "rfedb",
 "rfeia",
 "rfeib",
 "ror",
 "rors",
 "rrx",
 "rsb",
 "rsbs",
 "rsc",
 "sadd16",
 "sadd8",
 "sasx",
 "sbc",
 "sbcs",
 "sbfx",
 "sdiv",
 "sel",
 "setend",
 "sev",
 "shadd16",
 "shadd8",
 "shasx",
 "shsax",
 "shsub16",
 "shsub8",
 "smc",
 "smlabb",
 "smlabt",
 "smlad",
 "smladx",
 "smlal",
 "smlalbb",
 "smlalbt",
 "smlald",
 "smlaldx",
 "smlaltb",
 "smlaltt",
 "smlatb",
 "smlatt",
 "smlawb",
 "smlawt",
 "smlsd",
 "smlsdx",
 "smlsld",
 "smlsldx",
 "smmla",
 "smmlar",
 "smmls",
 "smmlsr",
 "smmul",
 "smmulr",
 "smuad",
 "smuadx",
 "smulbb",
 "smulbt",
 "smull",
 "smultb",
 "smultt",
 "smulwb",
 "smulwt",
 "smusd",
 "smusdt",
 "smusdx",
 "srs",
 "srsda",
 "srsdb",
 "srsia",
 "srsib",
 "ssat",
 "ssat16",
 "ssax",
 "ssub16",
 "ssub8",
 "stc",
 "stc2",
 "stc2l",
 "stcl",
 "stl",
 "stlb",
 "stlh",
 "stlex",
 "stlexb",
 "stlexh",
 "stlexd",
 "stm",
 "stmbd",
 "stmda",
 "stmdb",
 "stmia",
 "stmib",
 "str",
 "strb",
 "strbt",
 "strd",
 "strex",
 "strexb",
 "strexd",
 "strexh",
 "strh",
 "strht",
 "strt",
 "sub",
 "subs",
 "subw",
 "svc",
 "swp",
 "swpb",
 "sxtab",
 "sxtab16",
 "sxtah",
 "sxtb",
 "sxtb16",
 "sxth",
 "tbb",
 "tbh",
 "teq",
 "trap",
 "trt",
 "tst",
 "uadd16",
 "uadd8",
 "uasx",
 "ubfx",
 "udf",
 "udiv",
 "uhadd16",
 "uhadd8",
 "uhasx",
 "uhsax",
 "uhsub16",
 "uhsub8",
 "umaal",
 "umlal",
 "umull",
 "uqadd16",
 "uqadd8",
 "uqasx",
 "uqsax",
 "uqsub16",
 "uqsub8",
 "usad8",
 "usada8",
 "usat",
 "usat16",
 "usax",
 "usub16",
 "usub8",
 "uxtab",
 "uxtab16",
 "uxtah",
 "uxtb",
 "uxtb16",
 "uxth",
 "vaba",
 "vabal",
 "vabd",
 "vabdl",
 "vabs",
 "vacge",
 "vacgt",
 "vadd",
 "vaddhn",
 "vaddl",
 "vaddw",
 "vand",
 "vbic",
 "vbif",
 "vbit",
 "vbsl",
 "vceq",
 "vcge",
 "vcgt",
 "vcle",
 "vcls",
 "vclt",
 "vclz",
 "vcmp",
 "vcmpe",
 "vcnt",
 "vcvt",
 "vcvta",
 "vcvtb",
 "vcvtm",
 "vcvtn",
 "vcvtp",
 "vcvtr",
 "vcvtt",
 "vdiv",
 "vdup",
 "veor",
 "vext",
 "vfma",
 "vfms",
 "vfnma",
 "vfnms",
 "vhadd",
 "vhsub",
 "vld1",
 "vld2",
 "vld3",
 "vld4",
 "vldm",
 "vldmdb",
 "vldmia",
 "vldr",
 "vmax",
 "vmaxnm",
 "vmin",
 "vminm",
 "vmla",
 "vmlal",
 "vmls",
 "vmlsl",
 "vmov",
 "vmovl",
 "vmovn",
 "vmrs",
 "vmsr",
 "vmul",
 "vmull",
 "vmvn",
 "vneg",
 "vnmla",
 "vnmls",
 "vnmul",
 "vorn",
 "vorr",
 "vpadal",
 "vpadd",
 "vpaddl",
 "vpmax",
 "vpmin",
 "vpop",
 "vpush",
 "vqabs",
 "vqadd",
 "vqdmlal",
 "vqdmlsl",
 "vqdmulh",
 "vqdmull",
 "vqmovn",
 "vqmovun",
 "vqneg",
 "vqrdmulh",
 "vqrshl",
 "vqrshrn",
 "vqrshrun",
 "vqshl",
 "vqshlu",
 "vqshrn",
 "vqshrun",
 "vqsub",
 "vraddhn",
 "vrecpe",
 "vrecps",
 "vrev16",
 "vrev32",
 "vrev64",
 "vrhadd",
 "vrhsub",
 "vrinta",
 "vrintm",
 "vrintn",
 "vrintp",
 "vrintr",
 "vrintx",
 "vrintz",
 "vrshl",
 "vrshr",
 "vrshrn",
 "vrsqrte",
 "vrsqrts",
 "vrsra",
 "vrsubhn",
 "vsel",
 "vshl",
 "vshll",
 "vshr",
 "vshrn",
 "vsli",
 "vsqrt",
 "vsra",
 "vsri",
 "vst1",
 "vst2",
 "vst3",
 "vst4",
 "vstm",
 "vstmdb",
 "vstmia",
 "vstr",
 "vsub",
 "vsubhn",
 "vsubl",
 "vsubw",
 "vswp",
 "vtbl",
 "vtbx",
 "vtrn",
 "vtst",
 "vuzp",
 "vzip",
 "wfe",
 "wfi",
 "yield"
};

static const char* registerString[] = {
 "r0",
 "r1",
 "r2",
 "r3",
 "r4",
 "r5",
 "r6",
 "r7",
 "r8",
 "r9",
 "r10",
 "r11",
 "r12",




 "sp",
 "lr",
 "pc",
 "s0",
 "s1",
 "s2",
 "s3",
 "s4",
 "s5",
 "s6",
 "s7",
 "s8",
 "s9",
 "s10",
 "s11",
 "s12",
 "s13",
 "s14",
 "s15",
 "s16",
 "s17",
 "s18",
 "s19",
 "s20",
 "s21",
 "s22",
 "s23",
 "s24",
 "s25",
 "s26",
 "s27",
 "s28",
 "s29",
 "s30",
 "s31",
 "d0",
 "d1",
 "d2",
 "d3",
 "d4",
 "d5",
 "d6",
 "d7",
 "d8",
 "d9",
 "d10",
 "d11",
 "d12",
 "d13",
 "d14",
 "d15",
 "d16",
 "d17",
 "d18",
 "d19",
 "d20",
 "d21",
 "d22",
 "d23",
 "d24",
 "d25",
 "d26",
 "d27",
 "d28",
 "d29",
 "d30",
 "d31",
 "q0",
 "q1",
 "q2",
 "q3",
 "q4",
 "q5",
 "q6",
 "q7",
 "q8",
 "q9",
 "q10",
 "q11",
 "q12",
 "q13",
 "q14",
 "q15",
};

static const char* coprocRegisterCString[] = {
 "c0",
 "c1",
 "c2",
 "c3",
 "c4",
 "c5",
 "c6",
 "c7",
 "c8",
 "c9",
 "c10",
 "c11",
 "c12",
 "c13",
 "c14",
 "c15",
};

static const char* coprocRegisterString[] = {
 "p0",
 "p1",
 "p2",
 "p3",
 "p4",
 "p5",
 "p6",
 "p7",
 "p8",
 "p9",
 "p10",
 "p11",
 "p12",
 "p13",
 "p14",
 "p15",
};

static const char* bankedRegisterString[] = {
 "elr_hyp",
 "lr_abt",
 "lr_fiq",
 "lr_irq",
 "lr_mon",
 "lr_svc",
 "lr_und",
 "lr_usr",
 "r10_fiq",
 "r10_usr",
 "r11_fiq",
 "r11_usr",
 "r12_fiq",
 "r12_usr",
 "r8_fiq",
 "r8_usr",
 "r9_fiq",
 "r9_usr",
 "spsr_abt",
 "spsr_fiq",
 "spsr_hyp",
 "spsr_irq",
 "spsr_mon",
 "spsr_svc",
 "spsr_und",
 "sp_abt",
 "sp_fiq",
 "sp_hyp",
 "sp_irq",
 "sp_mon",
 "sp_svc",
 "sp_und",
 "sp_usr",
};

static const char* condString[] = {
 "eq",
 "ne",
 "hs",
 "lo",
 "mi",
 "pl",
 "vs",
 "vc",
 "hi",
 "ls",
 "ge",
 "lt",
 "gt",
 "le",
 "",
 "",
};

static const char* specRegisterString[] = {
 "apsr",
 "apsr_g",
 "apsr_nzcvq",
 "apsr_nzcvqg",
 "cpsr",
 "cpsr_c",
 "cpsr_x",
 "cpsr_xc",
 "cpsr_s",
 "cpsr_sc",
 "cpsr_sx",
 "cpsr_sxc",
 "cpsr_f",
 "cpsr_fc",
 "cpsr_fx",
 "cpsr_fxc",
 "cpsr_fs",
 "cpsr_fsc",
 "cpsr_fsx",
 "cpsr_fsxc",
 "spsr",
 "spsr_c",
 "spsr_x",
 "spsr_xc",
 "spsr_s",
 "spsr_sc",
 "spsr_sx",
 "spsr_sxc",
 "spsr_f",
 "spsr_fc",
 "spsr_fx",
 "spsr_fxc",
 "spsr_fs",
 "spsr_fsc",
 "spsr_fsx",
 "spsr_fsxc",
 "apsr_nzcv",
 "fpsid",
 "fpscr",
 "mvfr2",
 "mvfr1",
 "mvfr0",
 "fpexc",
 "fpinst",
 "fpinst2",
};

static const char* iflagStrings[] = {
 "none",
 "f",
 "i",
 "if",
 "a",
 "af",
 "ai",
 "aif"
};

static const char* endianSpecStrings[] = {
 "le", "be"
};

static const char* dsbOptionStrings[] = {
 "",
 "oshld",
 "oshst",
 "osh",
 "",
 "nshld",
 "nshst",
 "nsh",
 "",
 "ishld",
 "ishst",
 "ish",
 "",
 "ld",
 "st",
 "sy",
};

static const char* shiftString[] = {
 "",
 "lsl",
 "lsr",
 "asr",
 "ror",
 "rrx"
};

static const char* dataTypeString[] = {
 "",
 ".s8",
 ".s16",
 ".s32",
 ".s64",
 ".u8",
 ".u16",
 ".u32",
 ".u64",
 ".i8",
 ".i16",
 ".i32",
 ".i64",
 ".f16",
 ".f32",
 ".f64",
 ".p8",
 ".p16",
 ".p32",
 ".p64",
 ".8",
 ".16",
 ".32",
 ".64"
};

uint32_t simdExpandImm(uint32_t op, uint32_t cmode, uint64_t imm8, uint64_t* result, DataType* dt, OperandClass* cls)
{
 uint32_t testImm = 0;
 imm8 &= 0xff;
 static uint8_t repBit[2] = {0x00,0xff};
 *cls = OC_IMM;
 switch ((cmode >> 1) & 7)
 {
  case 0:
   testImm = 0;
   *result = (imm8 << 32) | imm8;
   *dt = DT_I32;
   break;
  case 1:
    testImm = 1;
    *result = (imm8 << 40) | (imm8 << 8);
    *dt = DT_I32;
    break;
  case 2:
    testImm = 1;
    *result = (imm8 << 48) | (imm8 << 16);
    *dt = DT_I32;
    break;
  case 3:
    testImm = 1;
    *result = (imm8 << 56) | (imm8 << 24);
    *dt = DT_I32;
    break;
  case 4:
    testImm = 0;
    *result = imm8;
    *dt = DT_I16;
    break;
  case 5:
    testImm = 1;
    *result = (imm8 << 8);
    *dt = DT_I16;
    break;
  case 6:
   testImm = 1;
   *dt = DT_I32;
   if ((cmode & 1) == 0)
    *result = (((imm8 << 8) | 0xff) << 32) | ((imm8 << 8) | 0xff);
   else
    *result = (((imm8 << 16) | 0xffff) << 32) | ((imm8 << 16) | 0xffff);
   break;
  case 7:
   testImm = 0;
   if ((cmode & 1) == 0)
   {
    if (op == 0)
    {
     *dt = DT_I8;
     *result = imm8;
    }
    else
    {
     *dt = DT_I64;
     *cls = OC_IMM64;
     *result = ((uint64_t) repBit[imm8 & 1]) |
      (((uint64_t)repBit[(imm8 >> 1) & 1]) << 8) |
      (((uint64_t)repBit[(imm8 >> 2) & 1]) << 16) |
      (((uint64_t)repBit[(imm8 >> 3) & 1]) << 24) |
      (((uint64_t)repBit[(imm8 >> 4) & 1]) << 32) |
      (((uint64_t)repBit[(imm8 >> 5) & 1]) << 40) |
      (((uint64_t)repBit[(imm8 >> 6) & 1]) << 48) |
      (((uint64_t)repBit[(imm8 >> 7) & 1]) << 56);
    }
   }
   else
   {
    if (op == 0)
    {
     *dt = DT_F32;


     *result = ((imm8 & 0x3f) << 19) |
      ((repBit[(imm8 >> 6) & 1] & 0x1f) << 25)|
      (~((imm8 >> 6) & 1) << 30) |
      (((imm8 >> 7) & 1) << 31);
     *result = (*result << 32) | *result;
    }
    else
    {
     return 0;
    }
   }
 }
 if (testImm == 1 && imm8 == 0)
  return 0;
 return 1;
}

uint64_t VFPExpandImm64(uint64_t imm8)
{
 ieee754_double t;
 uint64_t bit6 = (imm8>>6) & 1;
 uint64_t bit54 = (imm8>>4) & 3;
 uint64_t x = bit6?0xff:0;

 t.sign = imm8>>7;
 t.exponent = (~bit6) << 10 | x << 2 | bit54;
 t.fraction = (imm8 & 0xf) << 48;
 return t.value;
}

uint32_t VFPExpandImm32(uint32_t imm8)
{
 ieee754 t;
 uint32_t bit6 = (imm8>>6) & 1;
 uint32_t bit54 = (imm8>>4) & 3;
 uint32_t x = bit6?0x1f:0;

 t.sign = imm8>>7;
 t.exponent = (~bit6) << 7 | x << 2 | bit54;
 t.fraction = (imm8 & 0xf) << 19;
 return t.value;
}

Shift DecodeRegisterShift(uint32_t type)
{
 return (Shift)((type&3)+1);
}
uint32_t DecodeImmShift(uint32_t type, uint32_t imm, Shift* shift)
{
# 951 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 switch (type & 3)
 {
  case 0:
   *shift = imm==0?SHIFT_NONE:SHIFT_LSL;
   return imm;
  case 1:
   *shift = SHIFT_LSR;
   return imm == 0 ? 32 : imm;
  case 2:
   *shift = SHIFT_ASR;
   return imm == 0 ? 32 : imm;
  case 3:
   if (imm == 0)
   {
    *shift = SHIFT_RRX;
    return 1;
   }
   else
   {
    *shift = SHIFT_ROR;
    return imm;
   }
 }
 return 0;
}


uint32_t ExpandImm(uint32_t imm)
{
 uint32_t base = imm & 0xff;
 uint32_t rot = 2 * (imm >> 8);
 return (base >> rot) | (base << (32-rot));
}


uint32_t bswap32(uint32_t x)
{
 return ((x << 24) & 0xff000000 ) |
  ((x << 8) & 0x00ff0000 ) |
  ((x >> 8) & 0x0000ff00 ) |
  ((x >> 24) & 0x000000ff );
}


uint32_t armv7_decompose(uint32_t instructionValue,
                         Instruction* restrict instruction,
                         uint32_t address,
                         uint32_t bigEndian)
{

 union {
  struct {
   uint32_t group2:4;
   uint32_t op:1;
   uint32_t group1:20;
   uint32_t op1:3;
   uint32_t cond:4;
  };
  uint32_t value;
 } decode;

 if (bigEndian)
  decode.value = bswap32(instructionValue);
 else
  decode.value = instructionValue;


 static armv7_decompose_instruction group[2][8][2] = {
  {
   {armv7_data_processing_and_misc, armv7_data_processing_and_misc},
   {armv7_data_processing_and_misc, armv7_data_processing_and_misc},
   {armv7_load_store_word_and_unsigned_byte, armv7_load_store_word_and_unsigned_byte},
   {armv7_load_store_word_and_unsigned_byte, armv7_media_instructions},
   {armv7_branch_and_block_data_transfer, armv7_branch_and_block_data_transfer},
   {armv7_branch_and_block_data_transfer, armv7_branch_and_block_data_transfer},
   {armv7_coprocessor_instruction_and_supervisor_call, armv7_coprocessor_instruction_and_supervisor_call},
   {armv7_coprocessor_instruction_and_supervisor_call, armv7_coprocessor_instruction_and_supervisor_call}
  },{
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
   {armv7_unconditional, armv7_unconditional},
  }
 };
 return group[decode.cond == 15][decode.op1][decode.op](decode.value, instruction, address);
}

uint32_t armv7_data_processing_and_misc(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t op2:4;
   uint32_t group2:12;
   uint32_t op1:5;
   uint32_t op:1;
   uint32_t id:2;
   uint32_t cond:4;
  };
 } decode;

 decode.value = instructionValue;
 if (decode.op == 0)
 {
  if ((decode.op1 & 0x19) == 0x10)
  {
   if ((decode.op2 & 8) == 0)
    return armv7_miscellaneous(instructionValue, instruction, address);
   else if ((decode.op2 & 9) == 8)
    return armv7_halfword_multiply_and_accumulate(instructionValue, instruction, address);
  }
  else
  {
   if ((decode.op2 & 1) == 0)
   {
    return armv7_data_processing_reg(instructionValue, instruction, address);
   }
   else if ((decode.op2 & 9) == 1)
   {
    return armv7_data_processing_reg_shifted_reg(instructionValue, instruction, address);
   }
  }

  if ((decode.op1 & 0x10) == 0 && decode.op2 == 9)
   return armv7_multiply_and_accumulate(instructionValue, instruction, address);
  else if ((decode.op1 & 0x10) == 0x10 && decode.op2 == 9)
   return armv7_synchronization_primitives(instructionValue, instruction, address);

  if ((decode.op1 & 0x12) == 2)
  {
   if (decode.op2 == 11)
    return armv7_extra_load_store_unprivilaged(instructionValue, instruction, address);
  }
  else
  {
   if (decode.op2 == 11 || (decode.op2 & 13) == 13)
    return armv7_extra_load_store(instructionValue, instruction, address);
  }

  if ((decode.op1 & 0x13) == 2 && (decode.op2 & 13) == 13)
  {
   return armv7_extra_load_store(instructionValue, instruction, address);
  }

  if ((decode.op1 & 0x13) == 3 && (decode.op2 & 13) == 13)
  {
   return armv7_extra_load_store_unprivilaged(instructionValue, instruction, address);
  }
  return 1;
 }
 else if (decode.op == 1)
 {
  if ((decode.op1 & 0x19) != 0x10)
  {
   return armv7_data_processing_imm(instructionValue, instruction, address);
  }
  else
  {
   switch (decode.op1)
   {
    case 0x10:
     {

     union {
      uint32_t value;
      struct {
       uint32_t imm12:12;
       uint32_t rd:4;
       uint32_t imm4:4;
       uint32_t s:1;
       uint32_t group2:7;
       uint32_t cond:4;
      };
     } decode2;
     decode2.value = instructionValue;
     instruction->operation = ARMV7_MOVW;
     instruction->cond = (enum Condition)decode2.cond;
     instruction->setsFlags = 0;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (enum Register)decode2.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = decode2.imm4 << 12 | decode2.imm12;
     return 0;
     }
    case 0x14:
     {

     union {
      uint32_t value;
      struct {
       uint32_t imm12:12;
       uint32_t rd:4;
       uint32_t imm4:4;
       uint32_t group2:8;
       uint32_t cond:4;
      };
     } decode2;
     decode2.value = instructionValue;
     instruction->operation = ARMV7_MOVT;
     instruction->cond = (enum Condition)decode2.cond;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (enum Register)decode2.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = (decode2.imm4 << 12) | decode2.imm12;
     return 0;
     }
    case 0x12:
    case 0x16:
     return armv7_msr_imm_and_hints(instructionValue, instruction, address);
    default:
     return armv7_data_processing_imm(instructionValue, instruction, address);
   }
  }
 }
 return 1;
}

uint32_t armv7_data_processing_reg(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rm:4;
   uint32_t zero:1;
   uint32_t type:2;
   uint32_t imm5:5;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t s:1;
   uint32_t op:4;
   uint32_t group3:3;
   uint32_t cond:4;
  };
 } decode;

 struct opInfo {
  Operation op;
  uint32_t type;
 };
 static struct opInfo operation[] = {
  {ARMV7_AND, 0},
  {ARMV7_EOR, 0},
  {ARMV7_SUB, 0},
  {ARMV7_RSB, 0},
  {ARMV7_ADD, 0},
  {ARMV7_ADC, 0},
  {ARMV7_SBC, 0},
  {ARMV7_RSC, 0},
  {ARMV7_TST, 1},
  {ARMV7_TEQ, 1},
  {ARMV7_CMP, 1},
  {ARMV7_CMN, 1},
  {ARMV7_ORR, 0},
  {ARMV7_MOV, 2},
  {ARMV7_BIC, 0},
  {ARMV7_MVN, 3}
 };
# 1240 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 decode.value = instructionValue;
 struct opInfo* info = &operation[decode.op];
 enum Shift dummy;
 instruction->operation = info->op;
 instruction->cond = (enum Condition)decode.cond;
 instruction->setsFlags = decode.s;

 if (instruction->operation == ARMV7_MOV)
 {
# 1258 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
  static struct opInfo operation2[4][2] = {
   {{ARMV7_MOV, 2}, {ARMV7_LSL, 4}},
   {{ARMV7_LSR, 4}, {ARMV7_LSR, 4}},
   {{ARMV7_ASR, 4}, {ARMV7_ASR, 4}},
   {{ARMV7_RRX, 2}, {ARMV7_ROR, 4}}
  };
  info = &operation2[decode.type][decode.imm5 != 0];
  instruction->operation = info->op;
 }

 switch (info->type)
 {
  case 0:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.rn;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (enum Register)decode.rm;
   instruction->operands[2].imm = DecodeImmShift(decode.type, decode.imm5,
    &instruction->operands[2].shift);
   break;
  case 1:
   instruction->setsFlags = 0;
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.rn;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.rm;
   instruction->operands[1].imm = DecodeImmShift(decode.type, decode.imm5,
    &instruction->operands[1].shift);
   break;
  case 2:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.rm;
   break;
  case 3:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.rm;
   instruction->operands[1].imm = DecodeImmShift(decode.type, decode.imm5,
    &instruction->operands[1].shift);
   break;
  case 4:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.rm;
   instruction->operands[2].cls = OC_IMM;
   instruction->operands[2].imm = DecodeImmShift(decode.type, decode.imm5, &dummy);
   break;
 }
 return 0;
}

uint32_t armv7_data_processing_reg_shifted_reg(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rm:4;
   uint32_t group1:1;
   uint32_t type:2;
   uint32_t group2:1;
   uint32_t rs:4;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t s:1;
   uint32_t op:4;
   uint32_t group3:3;
   uint32_t cond:4;
  } com;
  struct {
   uint32_t rn:4;
   uint32_t group1:4;
   uint32_t rm:4;
   uint32_t rd:4;
   uint32_t group2:4;
   uint32_t s:1;
   uint32_t group3:7;
   uint32_t cond:4;
  }ror;
 } decode;


 struct opInfo {
  Operation op;
  uint32_t type;
 };
 static struct opInfo operation[] = {
  {ARMV7_AND, 0},
  {ARMV7_EOR, 0},
  {ARMV7_SUB, 0},
  {ARMV7_RSB, 0},
  {ARMV7_ADD, 0},
  {ARMV7_ADC, 0},
  {ARMV7_SBC, 0},
  {ARMV7_RSC, 0},
  {ARMV7_TST, 1},
  {ARMV7_TEQ, 1},
  {ARMV7_CMP, 1},
  {ARMV7_CMN, 1},
  {ARMV7_ORR, 0},
  {ARMV7_LSL, 2},
  {ARMV7_BIC, 0},
  {ARMV7_MVN, 3}
 };
# 1390 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 decode.value = instructionValue;
 struct opInfo* op = &operation[decode.com.op];
 instruction->operation = op->op;
 instruction->cond = (enum Condition)decode.com.cond;
 instruction->setsFlags = decode.com.s;

 if (instruction->operation == ARMV7_LSL)
 {
   static struct opInfo operation2[4] = {
    {ARMV7_LSL, 2},
    {ARMV7_LSR, 2},
    {ARMV7_ASR, 2},
    {ARMV7_ROR, 2}
   };
   op = &operation2[decode.com.type];
   instruction->operation = op->op;
   if (decode.ror.rd == 15 || decode.ror.rn == 15 ||
    decode.ror.rm == 15 || decode.ror.group2 != 0)
    instruction->unpredictable = 1;
 }

 switch (op->type)
 {
  case 0:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.com.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.com.rn;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (enum Register)decode.com.rm;
   instruction->operands[2].shift = DecodeRegisterShift(decode.com.type);
   instruction->operands[2].offset = (enum Register)decode.com.rs;
   instruction->operands[2].flags.offsetRegUsed = 1;
   break;
  case 1:
   instruction->setsFlags = 0;
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.com.rn;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.com.rm;
   instruction->operands[1].shift = DecodeRegisterShift(decode.com.type);
   instruction->operands[1].offset = (enum Register)decode.com.rs;
   instruction->operands[1].flags.offsetRegUsed = 1;
   break;
  case 2:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.ror.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.ror.rn;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (enum Register)decode.ror.rm;
   break;
  case 3:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (enum Register)decode.com.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (enum Register)decode.com.rm;
   instruction->operands[1].shift = DecodeRegisterShift(decode.com.type);
   instruction->operands[1].offset = (enum Register)decode.com.rs;
   instruction->operands[1].flags.offsetRegUsed = 1;
   break;
 }
 return 0;
}

uint32_t armv7_data_processing_imm(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t imm:12;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t s:1;
   uint32_t op:4;
   uint32_t group1:3;
   uint32_t cond:4;
  };
 } decode;

 static Operation operation[] = {
  ARMV7_AND,
  ARMV7_EOR,
  ARMV7_SUB,
  ARMV7_RSB,
  ARMV7_ADD,
  ARMV7_ADC,
  ARMV7_SBC,
  ARMV7_RSC,
  ARMV7_TST,
  ARMV7_TEQ,
  ARMV7_CMP,
  ARMV7_CMN,
  ARMV7_ORR,
  ARMV7_MOV,
  ARMV7_BIC,
  ARMV7_MVN,
 };

 decode.value = instructionValue;
 instruction->operation = operation[decode.op];
 instruction->cond = (enum Condition)decode.cond;
 instruction->setsFlags = decode.s;
 if ((instruction->operation == ARMV7_SUB ||
  instruction->operation == ARMV7_ADD) &&
  decode.rn == ARMV7_REG_PC)
 {
  instruction->operands[0].cls = OC_REG;
  instruction->operands[0].reg = (Register)decode.rd;
  instruction->operands[1].cls = OC_LABEL;
  instruction->operands[1].imm = address + 8;
  if (instruction->operation == ARMV7_ADD) {
   instruction->operands[1].imm += ExpandImm(decode.imm);
  }
  else {
   instruction->operands[1].imm -= ExpandImm(decode.imm);
  }
  instruction->operation = ARMV7_ADR;
  return 0;
 }
 uint32_t i = 0;
 if (instruction->operation == ARMV7_CMP ||
  instruction->operation == ARMV7_CMN ||
  instruction->operation == ARMV7_TST ||
  instruction->operation == ARMV7_TEQ)
 {

  instruction->setsFlags = 0;
 }
 else
 {
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)decode.rd;
 }
 if (instruction->operation != ARMV7_MOV &&
  instruction->operation != ARMV7_MVN )
 {
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)decode.rn;
 }
 instruction->operands[i].cls = OC_IMM;
 instruction->operands[i].imm = ExpandImm(decode.imm);
 return 0;
}

uint32_t armv7_multiply_and_accumulate(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rn:4;
   uint32_t group1:4;
   uint32_t rm:4;
   uint32_t group2:4;
   uint32_t rd:4;
   uint32_t op:4;
   uint32_t group3:4;
   uint32_t cond:4;
  };
  struct {
   uint32_t rn:4;
   uint32_t group1:4;
   uint32_t rm:4;
   uint32_t rdlo:4;
   uint32_t rdhi:4;
   uint32_t group2:8;
   uint32_t cond:4;
  } maal;
 } decode;

 static Operation operation[] = {
  ARMV7_MUL,
  ARMV7_MUL,
  ARMV7_MLA,
  ARMV7_MLA,
  ARMV7_UMAAL,
  ARMV7_UNDEFINED,
  ARMV7_MLS,
  ARMV7_UNDEFINED,
  ARMV7_UMULL,
  ARMV7_UMULL,
  ARMV7_UMLAL,
  ARMV7_UMLAL,
  ARMV7_SMULL,
  ARMV7_SMULL,
  ARMV7_SMLAL,
  ARMV7_SMLAL
 };
 decode.value = instructionValue;
 instruction->operation = operation[decode.op];
 instruction->setsFlags = decode.op & 1;
 instruction->cond = (Condition)decode.cond;
 instruction->unpredictable = decode.rd == 15 || decode.rn == 15 || decode.rm == 15;

 uint32_t i = 0;
 if (instruction->operation == ARMV7_MLS ||
  instruction->operation == ARMV7_MLA)
 {
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)(Register)decode.maal.rdhi;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)decode.rn;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)decode.rm;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i].reg = (Register)(Register)decode.maal.rdlo;
 }
 else
 {
  if (instruction->operation != ARMV7_MUL)
  {
   instruction->operands[i].cls = OC_REG;
   instruction->operands[i++].reg = (Register)(Register)decode.maal.rdlo;
  }
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)(Register)decode.maal.rdhi;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)decode.rn;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i].reg = (Register)decode.rm;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_saturating_add_sub(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rm:4;
   uint32_t group1:8;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t op:4;
   uint32_t group3:4;
   uint32_t cond:4;
  };
 } decode;

 static Operation operation[] = {
  ARMV7_QADD,
  ARMV7_QSUB,
  ARMV7_QDADD,
  ARMV7_QDSUB
 };

 decode.value = instructionValue;
 instruction->operation = operation[(decode.op >> 1) & 3];
 instruction->setsFlags = decode.op & 1;
 instruction->cond = (Condition)decode.cond;
 instruction->unpredictable = decode.rd == 15 || decode.rn == 15 || decode.rm == 15;
 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)decode.rd;
 instruction->operands[1].cls = OC_REG;
 instruction->operands[1].reg = (Register)decode.rm;
 instruction->operands[2].cls = OC_REG;
 instruction->operands[2].reg = (Register)decode.rn;
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_halfword_multiply_and_accumulate(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:5;
   uint32_t op:1;
   uint32_t group2:15;
   uint32_t op1:2;
   uint32_t group3:5;
   uint32_t cond:4;
  };
  struct {
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t n:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t rm:4;
   uint32_t ra:4;
   uint32_t rd:4;
   uint32_t group3:8;
   uint32_t cond:4;
  } smla;
  struct {
   uint32_t rn:4;
   uint32_t group1:2;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t rm:4;
   uint32_t ra:4;
   uint32_t rd:4;
   uint32_t group3:8;
   uint32_t cond:4;
  } smlaw;
  struct {
   uint32_t rn:4;
   uint32_t group1:2;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t rm:4;
   uint32_t group3:4;
   uint32_t rd:4;
   uint32_t group4:8;
   uint32_t cond:4;
  } smulw;
  struct {
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t n:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t rm:4;
   uint32_t rdlo:4;
   uint32_t rdhi:4;
   uint32_t group3:8;
   uint32_t cond:4;
  } smlal;
  struct {
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t n:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t rm:4;
   uint32_t group3:4;
   uint32_t rd:4;
   uint32_t group4:8;
   uint32_t cond:4;
  } smul;
 } decode;

 static Operation operation[4][4] = {
  {ARMV7_SMLABB, ARMV7_SMLATB, ARMV7_SMLABT, ARMV7_SMLATT},
  {ARMV7_SMLAWT, ARMV7_SMLAWB, ARMV7_SMULWT, ARMV7_SMULWB},
  {ARMV7_SMLALBB, ARMV7_SMLALTB, ARMV7_SMLALBT, ARMV7_SMLALTT},
  {ARMV7_SMULBB, ARMV7_SMULTB, ARMV7_SMULBT, ARMV7_SMULTT},
 };
 decode.value = instructionValue;
 instruction->operation = operation[decode.op1][decode.op];
 instruction->cond = (Condition)decode.cond;

 switch (decode.op1)
 {
  case 0:
   {
   static Operation operation2[] = {ARMV7_SMLABB, ARMV7_SMLATB, ARMV7_SMLABT, ARMV7_SMLATT};
   instruction->operation = operation2[(decode.smla.m << 1) | decode.smla.n];
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.smla.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)decode.smla.rn;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.smla.rm;
   instruction->operands[3].cls = OC_REG;
   instruction->operands[3].reg = (Register)decode.smla.ra;
   }
   break;
  case 1:
   {
   if (decode.op == 0)
   {
    if (decode.smlaw.m == 1)
     instruction->operation = ARMV7_SMLAWT;
    else
     instruction->operation = ARMV7_SMLAWB;

    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.smlaw.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.smlaw.rn;
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.smlaw.rm;
    instruction->operands[3].cls = OC_REG;
    instruction->operands[3].reg = (Register)decode.smlaw.ra;
   }
   else
   {
    if (decode.smulw.m == 1)
     instruction->operation = ARMV7_SMULWT;
    else
     instruction->operation = ARMV7_SMULWB;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.smulw.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.smulw.rn;
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.smulw.rm;
   }
   }
   break;
  case 2:
   {
   static Operation operation2[] = {ARMV7_SMLALBB, ARMV7_SMLALTB, ARMV7_SMLALBT, ARMV7_SMLALTT};
   instruction->operation = operation2[(decode.smlal.m << 1) | decode.smlal.n];
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.smlal.rdlo;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)decode.smlal.rdhi;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.smlal.rn;
   instruction->operands[3].cls = OC_REG;
   instruction->operands[3].reg = (Register)decode.smlal.rm;
   }
   break;
  case 3:
   {
   static Operation operation2[] = {ARMV7_SMULBB, ARMV7_SMULTB, ARMV7_SMULBT, ARMV7_SMULTT};
   instruction->operation = operation2[(decode.smul.m << 1) | decode.smul.n];
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.smul.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)decode.smul.rn;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.smul.rm;
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_extra_load_store(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:5;
   uint32_t op2:2;
   uint32_t group2:13;
   uint32_t op1:5;
   uint32_t group3:3;
   uint32_t cond:4;
  };
  struct {
   uint32_t rm:4;
   uint32_t group4:4;
   uint32_t immH:4;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group5:1;
   uint32_t w:1;
   uint32_t group6:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t op:3;
   uint32_t group7:7;
  };
 } decode;

 struct opInfo {
  Operation op;
  uint32_t type;
 };


 static struct opInfo operation[4][4] = {
  {{ARMV7_UNDEFINED, 0}, {ARMV7_UNDEFINED, 0}, {ARMV7_UNDEFINED, 0}, {ARMV7_UNDEFINED, 0}},
  {{ARMV7_STRH , 1}, {ARMV7_LDRH , 1}, {ARMV7_STRH , 2}, {ARMV7_LDRH , 2}},
  {{ARMV7_LDRD , 1}, {ARMV7_LDRSB , 1}, {ARMV7_LDRD , 2}, {ARMV7_LDRSB , 2}},
  {{ARMV7_STRD , 1}, {ARMV7_LDRSH , 1}, {ARMV7_STRD , 2}, {ARMV7_LDRSH , 2}},
 };


 decode.value = instructionValue;
 struct opInfo *opinfo = &operation[decode.op2][((decode.op1 >> 1) & 2)|(decode.op1 & 1)];

 instruction->operation = opinfo->op;
 instruction->cond = (Condition)decode.cond;
 uint32_t type = opinfo->type;
 uint32_t i = 0;
 uint32_t wback = decode.p == 0 || decode.w == 1;
 uint32_t index = decode.p;

 instruction->operands[i].cls = OC_REG;
 instruction->operands[i++].reg = (Register)decode.rt;
 if (instruction->operation == ARMV7_STRD || instruction->operation == ARMV7_LDRD)
 {
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)(Register)((decode.rt + 1) % 16);
 }
# 1888 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 switch (type)
 {
  case 1:
   {
   static OperandClass memDecode[2][2] = {
    {OC_NONE, OC_MEM_POST_IDX},
    {OC_MEM_IMM, OC_MEM_PRE_IDX}
   };
   instruction->operands[i].cls = memDecode[index][wback];
   instruction->operands[i].reg = (Register)decode.rn;
   instruction->operands[i].flags.add = decode.u;
   instruction->operands[i].offset = (Register)decode.rm;
   instruction->operands[i].flags.offsetRegUsed = 1;
   break;
   }
  case 2:
   {
   static OperandClass memDecode[2][2] = {
    {OC_NONE, OC_MEM_POST_IDX},
    {OC_MEM_IMM, OC_MEM_PRE_IDX}
   };
   instruction->operands[i].cls = memDecode[index][wback];
   instruction->operands[i].reg = (Register)decode.rn;
   instruction->operands[i].flags.add = decode.u;
   instruction->operands[i].imm = decode.immH << 4 | decode.rm;
   break;
   }
  case 3:
   instruction->operands[i].cls = OC_LABEL;
   if (decode.u == 1)
    instruction->operands[i].imm = address + (decode.immH << 4 | decode.rm);
   else
    instruction->operands[i].imm = address - (decode.immH << 4 | decode.rm);
   break;
  default:
   return 1;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_extra_load_store_unprivilaged(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:5;
   uint32_t op2:2;
   uint32_t group2:13;
   uint32_t op:1;
   uint32_t group3:1;
   uint32_t i:1;
   uint32_t group4:5;
   uint32_t cond:4;
  };
  struct {
   uint32_t rm:4;
   uint32_t group4:8;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group5:2;
   uint32_t i:1;
   uint32_t u:1;
   uint32_t group6:8;
  }reg;
  struct {
   uint32_t immL:4;
   uint32_t group1:4;
   uint32_t immH:4;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group2:2;
   uint32_t i:1;
   uint32_t u:1;
   uint32_t group3:4;
   uint32_t cond:4;
  }imm;
 } decode;

 static Operation operation[4][2] = {
  {ARMV7_UNDEFINED, ARMV7_UNDEFINED},
  {ARMV7_STRHT, ARMV7_LDRHT},
  {ARMV7_UNDEFINED, ARMV7_LDRSBT},
  {ARMV7_UNDEFINED, ARMV7_LDRSHT}
 };

 static OperandClass memType[2] = {OC_MEM_POST_IDX, OC_MEM_POST_IDX};
 decode.value = instructionValue;
 instruction->operation = operation[decode.op2][decode.op];
 instruction->cond = (Condition)decode.cond;
 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)decode.reg.rt;
 instruction->operands[1].cls = memType[decode.i];
 instruction->operands[1].reg = (Register)decode.reg.rn;
 instruction->operands[1].flags.add = decode.reg.u;

 if (decode.i == 0)
 {
  instruction->operands[1].offset = (Register)decode.reg.rm;
  instruction->operands[1].flags.offsetRegUsed = 1;
 }
 else
 {
  instruction->operands[1].imm = decode.imm.immH << 4 | decode.imm.immL;
 }

 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_synchronization_primitives(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rm:4;
   uint32_t group1:8;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t op:4;
   uint32_t group4:4;
   uint32_t cond:4;
  };
  struct {
   uint32_t rt2:4;
   uint32_t group1:4;
   uint32_t group2:4;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group3:2;
   uint32_t b:1;
   uint32_t group4:5;
   uint32_t cond:4;
  } swp;
  struct {
   uint32_t group1:4;
   uint32_t group2:4;
   uint32_t group3:4;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group5:4;
   uint32_t cond:4;
  } ldrex;
  struct {
   uint32_t rt:4;
   uint32_t group1:4;
   uint32_t group2:4;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t group3:4;
   uint32_t cond:4;
  } strexd;
 } decode;

 struct opInfo {
  Operation op;
  uint32_t type;
 };
 static struct opInfo operation[] = {
  {ARMV7_SWP, 0},
  {ARMV7_UNDEFINED,0},
  {ARMV7_UNDEFINED,0},
  {ARMV7_UNDEFINED,0},
  {ARMV7_SWPB, 0},
  {ARMV7_UNDEFINED,0},
  {ARMV7_UNDEFINED,0},
  {ARMV7_UNDEFINED,0},
  {ARMV7_STREX, 0},
  {ARMV7_LDREX, 1},
  {ARMV7_STREXD, 2},
  {ARMV7_LDREXD, 3},
  {ARMV7_STREXB, 4},
  {ARMV7_LDREXB, 1},
  {ARMV7_STREXH, 4},
  {ARMV7_LDREXH, 1}
 };

 decode.value = instructionValue;
 struct opInfo *op = &operation[decode.op];
 instruction->operation = op->op;
 instruction->cond = (Condition)decode.cond;

 switch (op->type)
 {
  case 0:

   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.swp.rt;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)decode.swp.rt2;
   instruction->operands[2].cls = OC_MEM_IMM;
   instruction->operands[2].flags.add = 1;
   instruction->operands[2].reg = (Register)decode.swp.rn;
   break;
  case 1:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.ldrex.rt;
   instruction->operands[1].cls = OC_MEM_IMM;
   instruction->operands[1].flags.add = 1;
   instruction->operands[1].reg = (Register)decode.ldrex.rn;
   break;
  case 2:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.strexd.rd;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)decode.strexd.rt;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)(Register)((decode.strexd.rt + 1) % 16);
   instruction->operands[3].cls = OC_MEM_IMM;
   instruction->operands[3].flags.add = 1;
   instruction->operands[3].reg = (Register)decode.strexd.rn;
   break;
  case 3:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.ldrex.rt;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)(Register)((decode.ldrex.rt + 1) % 16);
   instruction->operands[2].cls = OC_MEM_IMM;
   instruction->operands[2].flags.add = 1;
   instruction->operands[2].reg = (Register)decode.ldrex.rn;
   break;
  case 4:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.swp.rt;
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)decode.swp.rt2;
   instruction->operands[2].cls = OC_MEM_IMM;
   instruction->operands[2].flags.add = 1;
   instruction->operands[2].reg = (Register)decode.swp.rn;
   break;
 }


 uint32_t b11_b8 = (instructionValue & 0xF00) >> 8;
 if(b11_b8 == 0xE) {
  switch(instruction->operation) {
   case ARMV7_LDREX: instruction->operation = ARMV7_LDAEX; break;
   case ARMV7_LDREXB: instruction->operation = ARMV7_LDAEXB; break;
   case ARMV7_LDREXH: instruction->operation = ARMV7_LDAEXH; break;
   case ARMV7_LDREXD: instruction->operation = ARMV7_LDAEXD; break;
   case ARMV7_STREX: instruction->operation = ARMV7_STLEX; break;
   case ARMV7_STREXB: instruction->operation = ARMV7_STLEXB; break;
   case ARMV7_STREXH: instruction->operation = ARMV7_STLEXH; break;
   case ARMV7_STREXD: instruction->operation = ARMV7_STLEXD; break;
   default: break;
  }
 }
 else
 if(b11_b8 == 0xC) {
  switch(instruction->operation) {
   case ARMV7_STREX:
    instruction->operation = ARMV7_STL;
    instruction->operands[0] = instruction->operands[1];
    instruction->operands[1] = instruction->operands[2];
    instruction->operands[2].cls = OC_NONE;
    break;
   default: break;
  }
 }

 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_msr_imm_and_hints(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t op2:8;
   uint32_t rt:4;
   uint32_t rm:4;
   uint32_t op1:4;
   uint32_t group1:2;
   uint32_t op:1;
   uint32_t group3:5;
   uint32_t cond:4;
  };
  struct {
   uint32_t imm12:12;
   uint32_t group1:6;
   uint32_t mask:2;
   uint32_t group2:8;
   uint32_t cond:4;
  }msr;
  struct {
   uint32_t imm12:12;
   uint32_t group1:4;
   uint32_t mask:4;
   uint32_t group2:2;
   uint32_t r:1;
   uint32_t group3:5;
   uint32_t cond:4;
  }msr2;
 } decode;

 decode.value = instructionValue;
 instruction->cond = (Condition)decode.cond;
 if (decode.op == 0 && decode.op1 == 0)
 {
  if (decode.op2 < 5)
  {
   static Operation operation[] = {
    ARMV7_NOP,
    ARMV7_YIELD,
    ARMV7_WFE,
    ARMV7_WFI,
    ARMV7_SEV
   };
   instruction->operation = operation[decode.op2];
   instruction->cond = (Condition)decode.cond;
  }
  else if (decode.op2 >= 240)
  {
   instruction->operation = ARMV7_DBG;
   instruction->operands[0].cls = OC_IMM;
   instruction->operands[0].imm = decode.op2 & 15;
  }
  else
  {
   instruction->operation = ARMV7_HINT;
   instruction->operands[0].cls = OC_IMM;
   instruction->operands[0].imm = decode.op2;
  }
 }
 else if (decode.op == 0 && (decode.op1 == 4 || (decode.op1 & 11) == 8))
 {
  instruction->operation = ARMV7_MSR;
  instruction->operands[0].cls = OC_REG_SPEC;
  instruction->operands[0].reg = (Register)(Register)(REGS_APSR + decode.msr.mask);
  instruction->operands[1].cls = OC_IMM;
  instruction->operands[1].imm = ExpandImm(decode.msr.imm12);
 }
 else if (decode.op == 1 ||
   (decode.op == 0 && ((decode.op1 & 3) == 1 || (decode.op1 & 2) == 2)))
 {
  instruction->operation = ARMV7_MSR;
  instruction->operands[0].cls = OC_REG_SPEC;
  if (decode.msr2.r == 1)
   instruction->operands[0].reg = (Register)(Register)(REGS_SPSR + decode.msr2.mask);
  else
   instruction->operands[0].reg = (Register)(Register)(REGS_CPSR + decode.msr2.mask);
  instruction->operands[1].cls = OC_IMM;
  instruction->operands[1].imm = ExpandImm(decode.msr.imm12);
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_miscellaneous(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t op2:3;
   uint32_t group2:2;
   uint32_t b:1;
   uint32_t group3:6;
   uint32_t op1:4;
   uint32_t group4:1;
   uint32_t op:2;
   uint32_t group5:5;
   uint32_t cond:4;
  };
  struct {
   uint32_t imm4:4;
   uint32_t group1:4;
   uint32_t imm12:12;
   uint32_t group2:12;
  } set1;
  struct {
   uint32_t rm:4;
   uint32_t group1:8;
   uint32_t rd:4;
   uint32_t group2:12;
   uint32_t cond:4;
  } clz;
  struct {
   uint32_t rn:4;
   uint32_t group1:4;
   uint32_t m:1;
   uint32_t group2:3;
   uint32_t rd:4;
   uint32_t m1:4;
   uint32_t group3:2;
   uint32_t r:1;
   uint32_t group4:5;
   uint32_t cond:4;
  } msr;
 } decode;

 decode.value = instructionValue;
 switch (decode.op2)
 {
  case 0:
   if (decode.b)
   {
    uint32_t sysm = decode.msr.m << 4 | decode.msr.m1;
    static BankedRegister banked[2][32] = {
    {
     REGB_R8_USR, REGB_R9_USR, REGB_R10_USR, REGB_R11_USR,
     REGB_R12_USR, REGB_SP_USR, REGB_LR_USR, REGB_INVALID,
     REGB_R8_FIQ, REGB_R9_FIQ, REGB_R10_FIQ, REGB_R11_FIQ,
     REGB_R12_FIQ, REGB_SP_FIQ, REGB_LR_FIQ, REGB_INVALID,
     REGB_LR_IRQ, REGB_SP_IRQ, REGB_LR_SVC, REGB_SP_SVC,
     REGB_LR_ABT, REGB_SP_ABT, REGB_LR_UND, REGB_SP_UND,
     REGB_INVALID, REGB_INVALID, REGB_INVALID, REGB_INVALID,
     REGB_LR_MON, REGB_SP_MON, REGB_ELR_HYP, REGB_SP_HYP
    },{
     REGB_INVALID, REGB_INVALID, REGB_INVALID, REGB_INVALID,
     REGB_INVALID, REGB_INVALID, REGB_INVALID, REGB_INVALID,
     REGB_INVALID, REGB_INVALID, REGB_INVALID, REGB_INVALID,
     REGB_INVALID, REGB_INVALID, REGB_SPSR_FIQ, REGB_INVALID,
     REGB_SPSR_IRQ, REGB_INVALID, REGB_SPSR_SVC, REGB_INVALID,
     REGB_SPSR_ABT, REGB_INVALID, REGB_SPSR_UND, REGB_INVALID,
     REGB_INVALID, REGB_INVALID, REGB_INVALID, REGB_INVALID,
     REGB_SPSR_MON, REGB_INVALID, REGB_SPSR_HYP, REGB_INVALID
    }
    };
    if ((decode.op & 1) == 0)
    {
     instruction->operation = ARMV7_MRS;
     instruction->cond = (Condition)decode.cond;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.msr.rd;
     instruction->operands[1].cls = OC_REG_SPEC;
     instruction->operands[1].regb = banked[decode.msr.r][sysm];
     return instruction->operands[1].regb == REGB_INVALID;
    }
    else
    {
     instruction->operation = ARMV7_MSR;
     instruction->cond = (Condition)decode.cond;
     instruction->operands[0].cls = OC_REG_BANKED;
     instruction->operands[0].regb = banked[decode.msr.r][sysm];
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.msr.rn;
     return instruction->operands[0].regb == REGB_INVALID;
    }
   }
   else
   {
    switch (decode.op)
    {
     case 0:
     case 2:
      instruction->operation = ARMV7_MRS;
      instruction->cond = (Condition)decode.cond;
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)decode.msr.rd;
      instruction->operands[1].cls = OC_REG_SPEC;
      if (decode.msr.r == 1)
       instruction->operands[1].regs = REGS_SPSR;
      else
       instruction->operands[1].regs = REGS_APSR;
      break;
     case 1:
      instruction->operation = ARMV7_MSR;
      instruction->cond = (Condition)decode.cond;
      instruction->operands[0].cls = OC_REG_SPEC;
      if ((decode.op1 & 3) == 0)
       instruction->operands[0].regs = (SpecRegister)(REGS_APSR + (decode.msr.m1 >> 2));
      else
      {
       if (decode.msr.r == 1)
        instruction->operands[0].regs = (SpecRegister)(REGS_SPSR + decode.msr.m1);
       else
        instruction->operands[0].regs = (SpecRegister)(REGS_CPSR + decode.msr.m1);
      }
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)decode.msr.rn;
      break;
     case 3:
      instruction->operation = ARMV7_MSR;
      instruction->cond = (Condition)decode.cond;
      instruction->operands[0].cls = OC_REG_SPEC;
      if (decode.msr.m1 == 8 || decode.msr.m1 == 4 || decode.msr.m1 == 12)
       instruction->operands[0].regs = (SpecRegister)(REGS_APSR + (decode.msr.m1 & 3));
      else
      {
       if (decode.msr.r == 1)
        instruction->operands[0].regs = (SpecRegister)(REGS_SPSR + decode.msr.m1);
       else
        instruction->operands[0].regs = (SpecRegister)(REGS_CPSR + decode.msr.m1);
      }
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)decode.msr.rn;
      break;
    }
   }
   break;
  case 1:
   if (decode.op == 1)
   {
    instruction->operation = ARMV7_BX;
    instruction->cond = (Condition)decode.cond;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.clz.rm;
   }
   else if (decode.op == 3)
   {
    instruction->operation = ARMV7_CLZ;
    instruction->cond = (Condition)decode.cond;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.clz.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.clz.rm;
   }
   break;
  case 2:
   instruction->operation = ARMV7_BXJ;
   instruction->cond = (Condition)decode.cond;
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.clz.rm;
   break;
  case 3:
   instruction->operation = ARMV7_BLX;
   instruction->cond = (Condition)decode.cond;
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.clz.rm;
   break;
  case 5:
   return armv7_saturating_add_sub(instructionValue, instruction, address);
  case 6:
   {
   instruction->operation = ARMV7_ERET;
   instruction->cond = (Condition)decode.cond;
   break;
   }
  case 7:
   {
   static Operation operation[] = {ARMV7_UNDEFINED, ARMV7_BKPT, ARMV7_HVC, ARMV7_SMC};
   instruction->operation = operation[decode.op];
   instruction->cond = (Condition)decode.cond;
   instruction->operands[0].cls = OC_IMM;
   if (instruction->operation == ARMV7_SMC)
    instruction->operands[0].imm = decode.set1.imm4;
   else
    instruction->operands[0].imm = decode.set1.imm12 << 4 | decode.set1.imm4;
   break;
   }
  default:
   return 1;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_load_store_word_and_unsigned_byte(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t b:1;
   uint32_t group2:11;
   uint32_t rn:4;
   uint32_t op1:5;
   uint32_t a:1;
   uint32_t group3:2;
   uint32_t cond:4;
  };
  struct {
   uint32_t imm12:12;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t w:1;
   uint32_t group2:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group3:3;
   uint32_t cond:4;
  }stri;
  struct {
   uint32_t rm:4;
   uint32_t group1:1;
   uint32_t type:2;
   uint32_t imm5:5;
   uint32_t rt:4;
   uint32_t rn:4;
   uint32_t group2:1;
   uint32_t w:1;
   uint32_t group3:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group4:3;
   uint32_t cond:4;
  }strr;
 } decode;

 static Operation operation[32] =
 {
        ARMV7_STR, ARMV7_LDR, ARMV7_STRT, ARMV7_LDRT,
        ARMV7_STRB, ARMV7_LDRB, ARMV7_STRBT, ARMV7_LDRBT,
        ARMV7_STR, ARMV7_LDR, ARMV7_STRT, ARMV7_LDRT,
        ARMV7_STRB, ARMV7_LDRB, ARMV7_STRBT, ARMV7_LDRBT,
        ARMV7_STR, ARMV7_LDR, ARMV7_STR, ARMV7_LDR,
        ARMV7_STRB, ARMV7_LDRB, ARMV7_STRB, ARMV7_LDRB,
        ARMV7_STR, ARMV7_LDR, ARMV7_STR, ARMV7_LDR,
        ARMV7_STRB, ARMV7_LDRB, ARMV7_STRB, ARMV7_LDRB
 };
 decode.value = instructionValue;
 instruction->operation = operation[decode.op1];
 instruction->cond = (Condition)decode.cond;

 static OperandClass memDecode[4] = { OC_MEM_IMM, OC_MEM_POST_IDX, OC_MEM_IMM, OC_MEM_PRE_IDX};
 uint32_t memtype = decode.stri.p << 1 | (decode.stri.p == 0 || decode.stri.w == 1);
 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)decode.stri.rt;
 instruction->operands[1].reg = (Register)decode.stri.rn;
 instruction->operands[1].flags.add = decode.stri.u;

 if (decode.a == 0)
 {
  if (decode.stri.rn == ARMV7_REG_PC)
  {
   instruction->operands[1].cls = OC_LABEL;
   if (decode.stri.u == 1)
    instruction->operands[1].imm = ((address + 3) & ~3) + decode.stri.imm12 + 8;
   else
    instruction->operands[1].imm = ((address + 3) & ~3) - decode.stri.imm12 + 8;
  }
  else
  {
   instruction->operands[1].cls = memDecode[memtype];
   instruction->operands[1].imm = decode.stri.imm12;
  }
 }
 else
 {
  instruction->operands[1].cls = memDecode[memtype];
  instruction->operands[1].offset = (Register)decode.strr.rm;
  instruction->operands[1].flags.offsetRegUsed = 1;
  instruction->operands[1].imm = DecodeImmShift(decode.strr.type, decode.strr.imm5,
    &instruction->operands[1].shift);
 }
 return 0;
}

uint32_t armv7_parallel_add_sub_signed(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rm:4;
   uint32_t group1:1;
   uint32_t op2:3;
   uint32_t group2:4;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t op1:2;
   uint32_t group3:6;
   uint32_t cond:4;
  };
 }decode;
 decode.value = instructionValue;
# 2576 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 static Operation operation[4][8] = {
  {
   ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED,
   ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED
  },{
   ARMV7_SADD16, ARMV7_SASX, ARMV7_SSAX, ARMV7_SSUB16,
   ARMV7_SADD8, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_SSUB8
  },{
   ARMV7_QADD16, ARMV7_QASX, ARMV7_QSAX, ARMV7_QSUB16,
   ARMV7_QADD8, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_QSUB8
  },{
   ARMV7_SHADD16, ARMV7_SHASX, ARMV7_SHSAX, ARMV7_SHSUB16,
   ARMV7_SHADD8, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_SHSUB8
  }
 };

 instruction->operation = operation[decode.op1][decode.op2];
 instruction->cond = (Condition)decode.cond;
 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)decode.rd;
 instruction->operands[1].cls = OC_REG;
 instruction->operands[1].reg = (Register)decode.rn;
 instruction->operands[2].cls = OC_REG;
 instruction->operands[2].reg = (Register)decode.rm;
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_parallel_add_sub_unsigned(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t rm:4;
   uint32_t group1:1;
   uint32_t op2:3;
   uint32_t group2:4;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t op1:2;
   uint32_t group3:6;
   uint32_t cond:4;
  };
 }decode;
 decode.value = instructionValue;
# 2644 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 static Operation operation[4][8] = {
  {
   ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED,
   ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UNDEFINED
  },{
   ARMV7_UADD16, ARMV7_UASX, ARMV7_USAX, ARMV7_USUB16,
   ARMV7_UADD8, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_USUB8
  },{
   ARMV7_UQADD16, ARMV7_UQASX, ARMV7_UQSAX, ARMV7_UQSUB16,
   ARMV7_UQADD8, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UQSUB8
  },{
   ARMV7_UHADD16, ARMV7_UHASX, ARMV7_UHSAX, ARMV7_UHSUB16,
   ARMV7_UHADD8, ARMV7_UNDEFINED, ARMV7_UNDEFINED, ARMV7_UHSUB8
  }
 };

 instruction->operation = operation[decode.op1][decode.op2];
 instruction->cond = (Condition)decode.cond;
 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)decode.rd;
 instruction->operands[1].cls = OC_REG;
 instruction->operands[1].reg = (Register)decode.rn;
 instruction->operands[2].cls = OC_REG;
 instruction->operands[2].reg = (Register)decode.rm;
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_parallel_add_sub_reversal(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:5;
   uint32_t op2:3;
   uint32_t group2:8;
   uint32_t a:4;
   uint32_t op1:3;
   uint32_t group3:5;
   uint32_t cond:4;
  }com;
  struct {
   uint32_t rm:4;
   uint32_t group1:2;
   uint32_t tb:1;
   uint32_t imm5:5;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t group2:8;
   uint32_t cond:4;
  }pkh;
  struct {
   uint32_t rm:4;
   uint32_t group1:6;
   uint32_t rot:2;
   uint32_t rd:4;
   uint32_t rn:4;
   uint32_t group2:8;
   uint32_t cond:4;
  } sxtab;
  struct {
   uint32_t rn:4;
   uint32_t group1:2;
   uint32_t sh:1;
   uint32_t imm5:5;
   uint32_t rd:4;
   uint32_t sat_imm:5;
   uint32_t group2:7;
   uint32_t cond:4;
  }ssat;
 } decode;
 decode.value = instructionValue;
# 2743 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 instruction->cond = (Condition)decode.com.cond;
 switch (decode.com.op1)
 {
  case 0:
   switch (decode.com.op2)
   {
    case 0:
    case 2:
    case 4:
    case 6:
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.pkh.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.pkh.rn;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.pkh.rm;
     instruction->operands[2].imm = DecodeImmShift(
       decode.pkh.tb << 1,
       decode.pkh.imm5,
       &instruction->operands[2].shift);
     if (decode.pkh.tb == 0)
      instruction->operation = ARMV7_PKHBT;
     else
      instruction->operation = ARMV7_PKHTB;
     break;
    case 3:
     {
     static Operation operation2[] = {ARMV7_SXTAB16, ARMV7_SXTB16};
     uint32_t i = 0;
     instruction->operation = operation2[decode.com.a == 15];
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i++].reg = (Register)decode.sxtab.rd;
     if (decode.com.a != 15)
     {
      instruction->operands[i].cls = OC_REG;
      instruction->operands[i++].reg = (Register)decode.sxtab.rn;
     }
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i].reg = (Register)decode.sxtab.rm;
     instruction->operands[i].shift = SHIFT_ROR;
     instruction->operands[i].imm = decode.sxtab.rot << 3;
     break;
     }
    case 5:
     instruction->operation = ARMV7_SEL;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.pkh.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.pkh.rn;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.pkh.rm;
     break;
    default:
     return 1;
   }
   break;
  case 2:
   switch (decode.com.op2)
   {
    case 0:
    case 2:
    case 4:
    case 6:
     instruction->operation = ARMV7_SSAT;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.ssat.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = decode.ssat.sat_imm+1;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.ssat.rn;
     instruction->operands[2].imm = DecodeImmShift(
       decode.ssat.sh << 1,
       decode.ssat.imm5,
       &instruction->operands[2].shift);
     break;
    case 1:
     instruction->operation = ARMV7_SSAT16;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.ssat.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = decode.ssat.sat_imm+1;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.ssat.rn;
     break;
    case 3:
     {
     static Operation operation2[] = {ARMV7_SXTAB, ARMV7_SXTB};
     instruction->operation = operation2[decode.com.a == 15];
     uint32_t i = 0;
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i++].reg = (Register)decode.pkh.rd;
     if (decode.com.a != 15)
     {
      instruction->operands[i].cls = OC_REG;
      instruction->operands[i++].reg = (Register)decode.pkh.rn;
     }
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i].shift = SHIFT_ROR;
     instruction->operands[i].reg = (Register)decode.pkh.rm;
     instruction->operands[i].imm = decode.sxtab.rot << 3;
     break;
     }
    default:
     return 1;
   }
   break;
  case 3:
   switch (decode.com.op2)
   {
    case 0:
    case 2:
    case 4:
    case 6:
     instruction->operation = ARMV7_SSAT;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.ssat.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = decode.ssat.sat_imm+1;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.ssat.rn;
     instruction->operands[2].imm = DecodeImmShift(
       decode.ssat.sh << 1,
       decode.ssat.imm5,
       &instruction->operands[2].shift);
     break;
    case 1:
     instruction->operation = ARMV7_REV;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.pkh.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.pkh.rm;
     break;
    case 3:
     {
      static Operation operation2[2] = {ARMV7_SXTAH, ARMV7_SXTH};
      instruction->operation = operation2[decode.com.a == 15];
      uint32_t i = 0;
      instruction->operands[i].cls = OC_REG;
      instruction->operands[i++].reg = (Register)decode.sxtab.rd;
      if (decode.com.a != 15)
      {
       instruction->operands[i].cls = OC_REG;
       instruction->operands[i++].reg = (Register)decode.sxtab.rn;
      }
      instruction->operands[i].cls = OC_REG;
      instruction->operands[i].shift = SHIFT_ROR;
      instruction->operands[i].reg = (Register)decode.sxtab.rm;
      instruction->operands[i].imm = decode.sxtab.rot << 3;
     }
     break;
    case 5:
     instruction->operation = ARMV7_REV16;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.pkh.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.pkh.rm;
     break;
    default:
     return 1;
   }
   break;
  case 4:
   if (decode.com.op2 == 3)
   {
   static Operation operation2[] = {ARMV7_UXTAB16, ARMV7_UXTB16};
   instruction->operation = operation2[decode.com.a == 15];
   uint32_t i = 0;
   instruction->operands[i].cls = OC_REG;
   instruction->operands[i++].reg = (Register)decode.pkh.rd;
   if (decode.com.a != 15)
   {
    instruction->operands[i].cls = OC_REG;
    instruction->operands[i++].reg = (Register)decode.pkh.rn;
   }
   instruction->operands[i].cls = OC_REG;
   instruction->operands[i].shift = SHIFT_ROR;
   instruction->operands[i].reg = (Register)decode.pkh.rm;
   instruction->operands[i].imm = decode.sxtab.rot << 3;
   }
   break;
  case 6:
  case 7:
   switch (decode.com.op2)
   {
    case 0:
    case 2:
    case 4:
    case 6:
     instruction->operation = ARMV7_USAT;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.ssat.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = decode.ssat.sat_imm;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.ssat.rn;
     instruction->operands[2].imm = DecodeImmShift(
       decode.ssat.sh << 1,
       decode.ssat.imm5,
       &instruction->operands[2].shift);
     break;
    case 1:
     if (decode.com.op1 == 6)
     {
      instruction->operation = ARMV7_USAT16;
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)decode.ssat.rd;
      instruction->operands[1].cls = OC_IMM;
      instruction->operands[1].imm = decode.ssat.sat_imm;
      instruction->operands[2].cls = OC_REG;
      instruction->operands[2].reg = (Register)decode.ssat.rn;
     }
     else
     {
      instruction->operation = ARMV7_RBIT;
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)decode.pkh.rd;
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)decode.pkh.rm;
     }
     break;
    case 3:
     {
     if (decode.com.op1 == 6)
     {
      static Operation operation2[] = {ARMV7_UXTAB, ARMV7_UXTB};
      instruction->operation = operation2[decode.com.a == 15];
     }
     else
     {
      static Operation operation2[] = {ARMV7_UXTAH, ARMV7_UXTH};
      instruction->operation = operation2[decode.com.a == 15];
     }
     uint32_t i = 0;
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i++].reg = (Register)decode.pkh.rd;
     if (decode.com.a != 15)
     {
      instruction->operands[i].cls = OC_REG;
      instruction->operands[i++].reg = (Register)decode.pkh.rn;
     }
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i].shift = SHIFT_ROR;
     instruction->operands[i].reg = (Register)decode.pkh.rm;
     instruction->operands[i].imm = decode.sxtab.rot << 3;
     }
     break;
    case 5:
     instruction->operation = ARMV7_REVSH;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.pkh.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.pkh.rm;
     break;
    default:
     return 1;
   }
   break;
  default:
   return 1;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_parallel_add_sub_udiv(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t group2:1;
   uint32_t op2:3;
   uint32_t group3:4;
   uint32_t a:4;
   uint32_t group4:4;
   uint32_t op1:3;
   uint32_t group5:5;
   uint32_t cond:4;
  }com;
  struct {
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:2;
   uint32_t rm:4;
   uint32_t ra:4;
   uint32_t rd:4;
   uint32_t group3:8;
   uint32_t cond:4;
  } smlad;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)decode.com.cond;
# 3049 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 switch (decode.com.op1)
 {
  case 0:
   {
    static Operation operation[2][2][2] = {
     {
     {ARMV7_SMLAD, ARMV7_SMUAD},
     {ARMV7_SMLSD, ARMV7_SMUSD}
     },{
     {ARMV7_SMLADX, ARMV7_SMUADX},
     {ARMV7_SMLSDX, ARMV7_SMUSDX}
     }
    };
    if (decode.com.op2 > 3)
     break;
    instruction->operation = operation[decode.smlad.m][decode.com.op2 >> 1][decode.com.a == 15];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.smlad.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.smlad.rn;
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.smlad.rm;
    if (decode.com.a != 15)
    {
     instruction->operands[3].cls = OC_REG;
     instruction->operands[3].reg = (Register)decode.smlad.ra;
    }
   }
   break;
  case 1:
   if (decode.com.op2 == 0)
   {
    instruction->operation = ARMV7_SDIV;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.smlad.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.smlad.rn;
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.smlad.rm;
   }
   break;
  case 3:
   if (decode.com.op2 == 0)
   {
    instruction->operation = ARMV7_UDIV;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.smlad.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.smlad.rn;
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.smlad.rm;
   }
   break;
  case 4:
   {
    if (decode.com.op2 > 3)
     break;

    static Operation operation[2][2] = {
     {ARMV7_SMLALD, ARMV7_SMLSLD},
     {ARMV7_SMLALDX, ARMV7_SMLSLDX}
    };
    instruction->operation = operation[decode.smlad.m][decode.com.op2 >> 1];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.smlad.ra;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.smlad.rd;
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.smlad.rn;
    instruction->operands[3].cls = OC_REG;
    instruction->operands[3].reg = (Register)decode.smlad.rm;
   }
   break;
  case 5:
   {
    if (decode.com.op2 < 2)
    {
     static Operation operation[2][2] = {
      {ARMV7_SMMLA, ARMV7_SMMUL},
      {ARMV7_SMMLAR, ARMV7_SMMULR}
     };
     instruction->operation = operation[decode.smlad.m][decode.com.a == 15];
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.smlad.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.smlad.rn;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.smlad.rm;
     if (decode.com.a != 15)
     {
      instruction->operands[3].cls = OC_REG;
      instruction->operands[3].reg = (Register)decode.smlad.ra;
     }
    }
    else if (decode.com.op2 > 5)
    {
     static Operation operation[2] = {ARMV7_SMMLS, ARMV7_SMMLSR};
     instruction->operation = operation[decode.smlad.m];
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.smlad.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.smlad.rn;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.smlad.rm;
     instruction->operands[3].cls = OC_REG;
     instruction->operands[3].reg = (Register)decode.smlad.ra;
    }
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_media_instructions(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 union {
  uint32_t value;
  struct {
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t op2:3;
   uint32_t rm:4;
   uint32_t rd:4;
   uint32_t rx:4;
   uint32_t op1l:3;
   uint32_t op1h:2;
   uint32_t group4:3;
   uint32_t cond:4;
  }com;
  struct {
   uint32_t rn:4;
   uint32_t group1:3;
   uint32_t lsb:5;
   uint32_t rd:4;
   uint32_t widthm1:5;
   uint32_t group2:7;
   uint32_t cond:4;
  }sbfx;
  struct {
   uint32_t rn:4;
   uint32_t group1:3;
   uint32_t lsb:5;
   uint32_t rd:4;
   uint32_t msb:5;
   uint32_t group2:7;
   uint32_t cond:4;
  }bfc;
  struct {
   uint32_t imm4:4;
   uint32_t group1:4;
   uint32_t imm12:12;
   uint32_t group2:12;
  }udf;
 }decode;
 decode.value = instructionValue;

 switch (decode.com.op1h)
 {
  case 0:
   if (decode.com.op1l < 4)
    return armv7_parallel_add_sub_signed(instructionValue, instruction, address);
   return armv7_parallel_add_sub_unsigned(instructionValue, instruction, address);
  case 1:
   return armv7_parallel_add_sub_reversal(instructionValue, instruction, address);
  case 2:
   return armv7_parallel_add_sub_udiv(instructionValue, instruction, address);
 }
# 3224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 instruction->operation = ARMV7_UNDEFINED;
 instruction->cond = (Condition)decode.com.cond;
 switch (decode.com.op1l)
 {
  case 0:
   if (decode.com.op2 == 0)
   {
    if (decode.com.rd == 15)
    {
     instruction->operation = ARMV7_USAD8;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.com.rx;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.com.rn;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.com.rm;
    }
    else
    {
     instruction->operation = ARMV7_USADA8;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.com.rx;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.com.rn;
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.com.rm;
     instruction->operands[3].cls = OC_REG;
     instruction->operands[3].reg = (Register)decode.com.rd;
    }
   }
   break;
  case 2:
  case 3:
   if ((decode.com.op2 & 3) == 2)
   {
    instruction->operation = ARMV7_SBFX;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.sbfx.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.sbfx.rn;
    instruction->operands[2].cls = OC_IMM;
    instruction->operands[2].imm = decode.sbfx.lsb;
    instruction->operands[3].cls = OC_IMM;
    instruction->operands[3].imm = decode.sbfx.widthm1+1;
   }
   break;
  case 4:
  case 5:
   if ((decode.com.op2 & 3) == 0)
   {
    if (decode.com.rn == 15)
    {
     instruction->operation = ARMV7_BFC;
     if (decode.bfc.lsb > decode.bfc.msb)
      decode.bfc.lsb = decode.bfc.msb;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.bfc.rd;
     instruction->operands[1].cls = OC_IMM;
     instruction->operands[1].imm = decode.bfc.lsb;
     instruction->operands[2].cls = OC_IMM;
     instruction->operands[2].imm = decode.bfc.msb + 1 - decode.bfc.lsb;
    }
    else
    {
     instruction->operation = ARMV7_BFI;
     instruction->unpredictable = decode.bfc.lsb > decode.bfc.msb;
     if (decode.bfc.lsb > decode.bfc.msb)
      decode.bfc.lsb = decode.bfc.msb;
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)decode.bfc.rd;
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)decode.bfc.rn;
     instruction->operands[2].cls = OC_IMM;
     instruction->operands[2].imm = decode.bfc.lsb;
     instruction->operands[3].cls = OC_IMM;
     instruction->operands[3].imm = decode.bfc.msb + 1 - decode.bfc.lsb;
    }
   }
   break;
  case 6:
  case 7:
   if ((decode.com.op2 & 3) == 2)
   {
    instruction->operation = ARMV7_UBFX;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)decode.bfc.rd;
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.bfc.rn;
    instruction->operands[2].cls = OC_IMM;
    instruction->operands[2].imm = decode.bfc.lsb;
    instruction->operands[3].cls = OC_IMM;
    instruction->operands[3].imm = decode.bfc.msb + 1;
   }
   else if ((decode.com.op2 & 3) == 3)
   {
    instruction->cond = (Condition)COND_NONE;
    instruction->operation = ARMV7_UDF;
    instruction->operands[0].cls = OC_IMM;
    instruction->operands[0].imm = (decode.udf.imm12 << 4) | decode.udf.imm4;
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_branch_and_block_data_transfer(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:15;
   uint32_t r:1;
   uint32_t rn:4;
   uint32_t op:6;
   uint32_t group2:2;
   uint32_t cond:4;
  }com;
  struct {
   uint32_t registerList:16;
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t w:1;
   uint32_t group2:6;
   uint32_t cond:4;
  }stmda;
  struct {
   uint32_t registerList:16;
   uint32_t rn:4;
   uint32_t group2:1;
   uint32_t w:1;
   uint32_t group3:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group4:7;
  }ldm;
  struct {
   int32_t imm:24;
   uint32_t group1:4;
   uint32_t cond:4;
  }b;
  struct {
   int32_t imm:24;
   uint32_t h:1;
   uint32_t group1:3;
   uint32_t cond:4;
  }blx;
 } decode;
 decode.value = instructionValue;
# 3393 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 instruction->cond = (Condition)decode.com.cond;
 uint32_t type = 0;
 switch (decode.com.op)
 {
  case 0:
  case 2:
   instruction->operation = ARMV7_STMDA;
   break;
  case 1:
  case 3:
   instruction->operation = ARMV7_LDMDA;
   break;
  case 8:
  case 10:
   instruction->operation = ARMV7_STM;
   break;
  case 9:
   instruction->operation = ARMV7_LDM;
   break;
  case 11:
   if (decode.com.rn == ARMV7_REG_SP)
   {
    instruction->operation = ARMV7_POP;
    type = 1;
   }
   else
   {
    instruction->operation = ARMV7_LDM;
   }
   break;
  case 16:
   instruction->operation = ARMV7_STMDB;
   break;
  case 18:
   if (decode.com.rn == ARMV7_REG_SP)
   {
    instruction->operation = ARMV7_PUSH;
    type = 1;
   }
   else
   {
    instruction->operation = ARMV7_STMDB;
   }
   break;
  case 17:
  case 19:
   instruction->operation = ARMV7_LDMDB;
   break;
  case 24:
  case 26:
   instruction->operation = ARMV7_STMIB;
   break;
  case 25:
  case 27:
   instruction->operation = ARMV7_LDMIB;
   break;
  case 4: case 6: case 12: case 14: case 20: case 22: case 28: case 30:
   {
    uint32_t value = decode.ldm.p << 1 | decode.ldm.u;
    switch (value)
    {
     case 0: instruction->operation = ARMV7_STMDA; break;
     case 1: instruction->operation = ARMV7_STM; break;
     case 2: instruction->operation = ARMV7_STMDB; break;
     case 3: instruction->operation = ARMV7_STMIB; break;
    }
    type = 5;
    break;
   }
  case 5: case 7: case 13: case 15: case 21: case 23: case 29: case 31:
   {
    uint32_t value = decode.ldm.p << 1 | decode.ldm.u;
    switch (value)
    {
     case 0: instruction->operation = ARMV7_LDMDA; break;
     case 1: instruction->operation = ARMV7_LDM; break;
     case 2: instruction->operation = ARMV7_LDMDB; break;
     case 3: instruction->operation = ARMV7_LDMIB; break;
    }
    type = 5;
   break;
   }
  case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39:
  case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47:
   instruction->operation = ARMV7_B;
   type = 3;
   break;
  case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55:
  case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63:
   if (decode.com.cond == 15)
   {
    instruction->operation = ARMV7_BLX;
    type = 4;
   }
   else
   {
    instruction->operation = ARMV7_BL;
    type = 3;
   }
   break;
  default:
   return 1;
 }
 switch (type)
 {
  case 0:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.stmda.rn;
   instruction->operands[0].flags.wb = decode.stmda.w;
   instruction->operands[1].cls = OC_REG_LIST;
   instruction->operands[1].flags.hasElements = 0;
   instruction->operands[1].reg = (Register)(Register)decode.stmda.registerList;
   break;
  case 1:
   instruction->operands[0].cls = OC_REG_LIST;
   instruction->operands[0].flags.hasElements = 0;
   instruction->operands[0].reg = (Register)(Register)decode.stmda.registerList;
   break;
  case 2:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.stmda.rn;
   instruction->operands[0].flags.wb = decode.stmda.w;
   instruction->operands[1].cls = OC_REG_LIST;
   instruction->operands[1].flags.hasElements = 0;
   instruction->operands[1].reg = (Register)(Register)(decode.stmda.registerList & 0x7fff);
   break;
  case 3:
   instruction->operands[0].cls = OC_LABEL;
   instruction->operands[0].imm = 8 + (decode.b.imm << 2)+ address;
   break;
  case 4:
   instruction->operands[0].cls = OC_LABEL;

   instruction->operands[0].imm = address + 8 +
    ((int32_t)((decode.blx.imm << 2 | decode.blx.h << 1) << 6) >> 6);
   break;
  case 5:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.ldm.rn;
   instruction->operands[0].flags.wb = decode.ldm.w;
   instruction->operands[1].cls = OC_REG_LIST;
   instruction->operands[1].reg = (Register)(Register)decode.ldm.registerList;
   instruction->operands[1].flags.hasElements = 0;
   instruction->operands[1].flags.wb = 1;
   break;
  case 6:
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.stmda.rn;
   instruction->operands[0].flags.wb = decode.stmda.w;
   instruction->operands[1].cls = OC_REG_LIST;
   instruction->operands[1].reg = (Register)(Register)decode.stmda.registerList;
   instruction->operands[1].flags.hasElements = 0;
   instruction->operands[1].flags.wb = (decode.stmda.registerList >> 15) & 1;
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_coprocessor_instruction_and_supervisor_call(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t op:1;
   uint32_t group2:3;
   uint32_t coproc:4;
   uint32_t group3:4;
   uint32_t rn:4;
   uint32_t op1:6;
   uint32_t group4:2;
   uint32_t cond:4;
  }com;
  struct {
   uint32_t imm:24;
   uint32_t group1:4;
   uint32_t cond:4;
  }svc;
  struct {
   uint32_t imm8:8;
   uint32_t coproc:4;
   uint32_t crd:4;
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t w:1;
   uint32_t d:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group2:3;
   uint32_t cond:4;
  }stc;
  struct {
   uint32_t crm:4;
   uint32_t opc1:4;
   uint32_t coproc:4;
   uint32_t rt:4;
   uint32_t rt2:4;
   uint32_t group1:8;
   uint32_t cond:4;
  } mrrc;
  struct {
   uint32_t crm:4;
   uint32_t group1:1;
   uint32_t opc2:3;
   uint32_t coproc:4;
   uint32_t crd:4;
   uint32_t crn:4;
   uint32_t group2:1;
   uint32_t opc1:3;
   uint32_t group3:4;
   uint32_t cond:4;
  } mcr;
  struct {
   uint32_t crm:4;
   uint32_t group1:1;
   uint32_t opc2:3;
   uint32_t coproc:4;
   uint32_t crd:4;
   uint32_t crn:4;
   uint32_t opc1:4;
   uint32_t group2:4;
   uint32_t cond:4;
  } cdp;
 }decode;
# 3632 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 (void)address;
 decode.value = instructionValue;
 instruction->cond = (Condition)decode.com.cond;
 uint32_t type = 0;
 if (decode.com.op1 >> 1 == 0)
 {
  instruction->operation = ARMV7_UNDEFINED;
 }
 else if (decode.com.op1 >> 4 == 3)
 {
  instruction->operation = ARMV7_SVC;
 }
 else if (decode.com.coproc >> 1 != 5)
 {
  switch (decode.com.op1)
  {
   case 2: case 6: case 8: case 10: case 12: case 14: case 16: case 18:
   case 20: case 22: case 24: case 26: case 28: case 30:
    {
     static Operation operation2[2][2] = {
      {ARMV7_STC, ARMV7_STCL},
      {ARMV7_STC2, ARMV7_STC2L}
     };
     instruction->operation = operation2[decode.stc.cond == 15][decode.stc.d];
     type = 1;
     break;
    }
   case 3: case 7: case 9: case 11: case 13: case 15: case 17: case 19:
   case 21: case 23: case 25: case 27: case 29: case 31:
    {
     static Operation operation2[2][2] = {
      {ARMV7_LDC, ARMV7_LDCL},
      {ARMV7_LDC2, ARMV7_LDC2L}
     };
     instruction->operation = operation2[decode.stc.cond == 15][decode.stc.d];
     type = 1;
     break;
    }
   case 4:
    {
    static Operation operation[2] = {ARMV7_MCRR, ARMV7_MCRR2};
    instruction->operation = operation[decode.com.cond == 15];
    type = 2;
    }
    break;
   case 5:
    {
    static Operation operation[2] = {ARMV7_MRRC, ARMV7_MRRC2};
    instruction->operation = operation[decode.com.cond == 15];
    type = 2;
    }
    break;
   case 32: case 34: case 36: case 38: case 40: case 42: case 44: case 46:
    if (decode.com.op == 0)
    {
     instruction->operation = ARMV7_CDP;
     type = 3;
    }
    else
    {
     static Operation operation[2] = {ARMV7_MCR, ARMV7_MCR2};
     instruction->operation = operation[decode.com.cond == 15];
     type = 4;
    }
    break;
   case 33: case 35: case 37: case 39: case 41: case 43: case 45: case 47:
    if (decode.com.op == 0)
    {
     instruction->operation = ARMV7_CDP;
     type = 3;
    }
    else
    {
     static Operation operation[2] = {ARMV7_MRC, ARMV7_MRC2};
     instruction->operation = operation[decode.com.cond == 15];
     type = 5;
    }
    break;
   default:
    return 1;
  }
 }
 else
 {
  switch (decode.com.op1)
  {
   case 2: case 6: case 8: case 10: case 12: case 14: case 16:
   case 3: case 7: case 9: case 11: case 13: case 15: case 17:
   case 18: case 20: case 22: case 24: case 26: case 28: case 30:
   case 19: case 21: case 23: case 25: case 27: case 29: case 31:
    return armv7_extension_register_load_store(
      instructionValue, instruction, address);
   case 4: case 5:
    return armv7_64_bit_transfers(
      instructionValue, instruction, address);
   case 32: case 34: case 36: case 38: case 40: case 42: case 44: case 46:
   case 33: case 35: case 37: case 39: case 41: case 43: case 45: case 47:
    if (decode.com.op == 0)
     return armv7_floating_point_data_processing(
       instructionValue, instruction, address);
    else
     return armv7_transfers(
       instructionValue, instruction, address);
   default:
    return 1;
  }
 }

 static OperandClass memDecode[2][2] = {
  {OC_MEM_OPTION, OC_MEM_POST_IDX},
  {OC_MEM_IMM, OC_MEM_PRE_IDX}
 };
 instruction->operands[2].flags.add = 0;
 switch (type)
 {
  case 0:
   instruction->operands[0].cls = OC_IMM;
   instruction->operands[0].imm = decode.svc.imm;
   break;
  case 1:
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.stc.coproc;
   instruction->operands[1].cls = OC_REG_COPROCC;
   instruction->operands[1].reg = (Register)decode.stc.crd;
   instruction->operands[2].cls = memDecode[decode.stc.p][decode.stc.w];
   instruction->operands[2].reg = (Register)decode.stc.rn;
   instruction->operands[2].flags.add = decode.stc.u;
   if (instruction->operands[2].cls == OC_MEM_OPTION)
    instruction->operands[2].imm = decode.stc.imm8;
   else
    instruction->operands[2].imm = decode.stc.imm8 << 2;

   break;
  case 2:
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.mrrc.coproc;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.mrrc.opc1;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.mrrc.rt;
   instruction->operands[3].cls = OC_REG;
   instruction->operands[3].reg = (Register)decode.mrrc.rt2;
   instruction->operands[4].cls = OC_REG_COPROCC;
   instruction->operands[4].reg = (Register)decode.mrrc.crm;
   break;
  case 3:
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.cdp.coproc;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.cdp.opc1;
   instruction->operands[2].cls = OC_REG_COPROCC;
   instruction->operands[2].reg = (Register)decode.cdp.crd;
   instruction->operands[3].cls = OC_REG_COPROCC;
   instruction->operands[3].reg = (Register)decode.cdp.crn;
   instruction->operands[4].cls = OC_REG_COPROCC;
   instruction->operands[4].reg = (Register)decode.cdp.crm;
   instruction->operands[5].cls = OC_IMM;
   instruction->operands[5].imm = decode.cdp.opc2;
   break;
  case 4:
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.mcr.coproc;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.mcr.opc1;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.mcr.crd;
   instruction->operands[3].cls = OC_REG_COPROCC;
   instruction->operands[3].reg = (Register)decode.mcr.crn;
   instruction->operands[4].cls = OC_REG_COPROCC;
   instruction->operands[4].reg = (Register)decode.mcr.crm;
   if (decode.mcr.opc2 != 0)
   {
    instruction->operands[5].cls = OC_IMM;
    instruction->operands[5].imm = decode.mcr.opc2;
   }
   break;
  case 5:
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.mcr.coproc;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.mcr.opc1;
   if (decode.mcr.crd == 15)
   {
    instruction->operands[2].cls = OC_REG_SPEC;
    instruction->operands[2].regs = REGS_APSR_NZCV;
   }
   else
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.mcr.crd;
   }
   instruction->operands[3].cls = OC_REG_COPROCC;
   instruction->operands[3].reg = (Register)decode.mcr.crn;
   instruction->operands[4].cls = OC_REG_COPROCC;
   instruction->operands[4].reg = (Register)decode.mcr.crm;
   if (decode.mcr.opc2 != 0)
   {
    instruction->operands[5].cls = OC_IMM;
    instruction->operands[5].imm = decode.mcr.opc2;
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_unconditional(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t op:1;
   uint32_t group2:11;
   uint32_t rn:4;
   uint32_t op1:8;
   uint32_t cond:4;
  } com;
  struct {
   uint32_t mode:5;
   uint32_t group1:16;
   uint32_t w:1;
   uint32_t group2:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group3:7;
  } srs;
  struct {
   uint32_t group1:16;
   uint32_t rn:4;
   uint32_t group2:1;
   uint32_t w:1;
   uint32_t group3:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group4:7;
  } rfe;
  struct {
   uint32_t imm24:24;
   uint32_t h:1;
   uint32_t group1:7;
  } blx;
  struct {
   uint32_t imm:8;
   uint32_t coproc:4;
   uint32_t crd:4;
   uint32_t rn:4;
   uint32_t group1:1;
   uint32_t w:1;
   uint32_t d:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group2:3;
   uint32_t cond:4;
  } stc;
  struct {
   uint32_t crm:4;
   uint32_t group1:1;
   uint32_t opc2:3;
   uint32_t coproc:4;
   uint32_t crd:4;
   uint32_t crn:4;
   uint32_t opc1:4;
   uint32_t group2:4;
   uint32_t cond:4;
  } cdp;
  struct {
   uint32_t crm:4;
   uint32_t opc1:4;
   uint32_t coproc:4;
   uint32_t rt:4;
   uint32_t rt2:4;
   uint32_t group2:12;
  } mcrr;
  struct {
   uint32_t crm:4;
   uint32_t group1:1;
   uint32_t opc2:3;
   uint32_t coproc:4;
   uint32_t rt:4;
   uint32_t crn:4;
   uint32_t group2:1;
   uint32_t opc1:3;
   uint32_t group3:4;
   uint32_t cond:4;
  } mrc;
 } decode;
# 3938 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 decode.value = instructionValue;
 if (decode.com.op1 >> 7 == 0)
  return armv7_memory_hints_simd_and_misc(instructionValue, instruction, address);
 else
 {
  instruction->cond = (Condition)decode.com.cond;
  uint32_t tmp = ((decode.com.op1 >> 3) & ~3) |
   ((decode.com.op1 >> 1) & 2) | (decode.com.op1 & 1);
  if (tmp == 18)
  {
   static Operation operation[2][2] = {
    {ARMV7_SRSDA, ARMV7_SRSIA},
    {ARMV7_SRSDB, ARMV7_SRSIB}
   };
   instruction->operation = operation[decode.srs.p][decode.srs.u];
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)ARMV7_REG_SP;
   instruction->operands[0].flags.wb = decode.srs.w;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.srs.mode;
  }
  else if (tmp == 17)
  {
   static Operation operation[2][2] = {
    {ARMV7_RFEDA, ARMV7_RFEIA},
    {ARMV7_RFEDB, ARMV7_RFEIB}
   };
   instruction->operation = operation[decode.rfe.p][decode.rfe.u];
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)decode.rfe.rn;
   instruction->operands[0].flags.wb = decode.srs.w;
  }
  else if (decode.com.op1 >> 5 == 5)
  {
   instruction->operation = ARMV7_BLX;
   instruction->operands[0].cls = OC_LABEL;

   instruction->operands[0].imm = address + 8 +
    ((int32_t)((decode.blx.imm24 << 2 | decode.blx.h << 1) << 6) >> 6);
  }
  else if (decode.com.op1 >> 4 == 14)
  {
   if (decode.com.op == 0)
   {
    static Operation operation[2] = {ARMV7_CDP, ARMV7_CDP2};
    instruction->operation = operation[decode.cdp.cond == 15];
    instruction->operands[0].cls = OC_REG_COPROCP;
    instruction->operands[0].reg = (Register)decode.cdp.coproc;
    instruction->operands[1].cls = OC_IMM;
    instruction->operands[1].imm = decode.cdp.opc1;
    instruction->operands[2].cls = OC_REG_COPROCC;
    instruction->operands[2].reg = (Register)decode.cdp.crd;
    instruction->operands[3].cls = OC_REG_COPROCC;
    instruction->operands[3].reg = (Register)decode.cdp.crn;
    instruction->operands[4].cls = OC_REG_COPROCC;
    instruction->operands[4].reg = (Register)decode.cdp.crm;
    if (decode.cdp.opc2 != 0)
    {
     instruction->operands[5].cls = OC_IMM;
     instruction->operands[5].imm = decode.cdp.opc2;
    }
   }
   else
   {
    static Operation operation[2][2] = {
     {ARMV7_MCR, ARMV7_MCR2},
     {ARMV7_MRC, ARMV7_MRC2}
    };
    instruction->operation = operation[decode.com.op1 & 1][decode.com.cond == 15];
    instruction->operands[0].cls = OC_REG_COPROCP;
    instruction->operands[0].reg = (Register)decode.mrc.coproc;
    instruction->operands[1].cls = OC_IMM;
    instruction->operands[1].imm = decode.mrc.opc1;
    if ((decode.com.op1 & 1) == 1 && decode.mrc.rt == 15)
    {
     instruction->operands[2].cls = OC_REG_SPEC;
     instruction->operands[2].regs = REGS_APSR_NZCV;
    }
    else
    {
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)decode.mrc.rt;
    }
    instruction->operands[3].cls = OC_REG_COPROCC;
    instruction->operands[3].reg = (Register)decode.mrc.crn;
    instruction->operands[4].cls = OC_REG_COPROCC;
    instruction->operands[4].reg = (Register)decode.mrc.crm;
    if (decode.mrc.opc2 != 0)
    {
     instruction->operands[5].cls = OC_IMM;
     instruction->operands[5].imm = decode.mrc.opc2;
    }
   }
  }
  else if (decode.com.op1 == 196)
  {
   static Operation operation[2] = {ARMV7_MCRR, ARMV7_MCRR2};
   instruction->operation = operation[decode.com.cond == 15];
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.mcrr.coproc;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.mcrr.opc1;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.mcrr.rt;
   instruction->operands[3].cls = OC_REG;
   instruction->operands[3].reg = (Register)decode.mcrr.rt2;
   instruction->operands[4].cls = OC_REG_COPROCC;
   instruction->operands[4].reg = (Register)decode.mcrr.crm;
  }
  else if (decode.com.op1 == 197)
  {
   static Operation operation[2] = {ARMV7_MRRC, ARMV7_MRRC2};
   instruction->operation = operation[decode.com.cond == 15];
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.mcrr.coproc;
   instruction->operands[1].cls = OC_IMM;
   instruction->operands[1].imm = decode.mcrr.opc1;
   instruction->operands[2].cls = OC_REG;
   instruction->operands[2].reg = (Register)decode.mcrr.rt;
   instruction->operands[3].cls = OC_REG;
   instruction->operands[3].reg = (Register)decode.mcrr.rt2;
   instruction->operands[4].cls = OC_REG_COPROCC;
   instruction->operands[4].reg = (Register)decode.mcrr.crm;
  }
  else if ((decode.com.op1 & 1) == 0)
  {
   static Operation operation[2][2] = {
    {ARMV7_STC, ARMV7_STC2},
    {ARMV7_STCL, ARMV7_STC2L}
   };
   static OperandClass memDecode[2][2] = {
    {OC_MEM_OPTION, OC_MEM_POST_IDX},
    {OC_MEM_IMM, OC_MEM_PRE_IDX}
   };
   instruction->operation = operation[decode.stc.d][decode.stc.cond == 15];
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.stc.coproc;
   instruction->operands[1].cls = OC_REG_COPROCC;
   instruction->operands[1].reg = (Register)decode.stc.crd;
   instruction->operands[2].cls = memDecode[decode.stc.p][decode.stc.w];
   instruction->operands[2].reg = (Register)decode.stc.rn;
   if (instruction->operands[2].cls == OC_MEM_OPTION)
    instruction->operands[2].imm = decode.stc.imm;
   else
    instruction->operands[2].imm = decode.stc.imm << 2;
   instruction->operands[2].flags.add = decode.stc.u;
  }
  else if ((((decode.com.op1 >> 4) & 14) | (decode.com.op1 & 1)) == 13)
  {
   static Operation operation[2][2] = {
    {ARMV7_LDC, ARMV7_LDC2},
    {ARMV7_LDCL, ARMV7_LDC2L}
   };
   static OperandClass memDecode[2][2] = {
    {OC_MEM_OPTION, OC_MEM_POST_IDX},
    {OC_MEM_IMM, OC_MEM_PRE_IDX}
   };
   instruction->operation = operation[decode.stc.d][decode.stc.cond == 15];
   instruction->operands[0].cls = OC_REG_COPROCP;
   instruction->operands[0].reg = (Register)decode.stc.coproc;
   instruction->operands[1].cls = OC_REG_COPROCC;
   instruction->operands[1].reg = (Register)decode.stc.crd;
   instruction->operands[2].cls = memDecode[decode.stc.p][decode.stc.w];
   if (instruction->operands[2].cls != OC_MEM_OPTION && decode.com.rn == ARMV7_REG_PC)
   {

    instruction->operands[2].cls = OC_LABEL;
    if (decode.stc.u == 1)
     instruction->operands[2].imm = 8 + (address & ~3) + (decode.stc.imm << 2);
    else
     instruction->operands[2].imm = 8 + (address & ~3) - (decode.stc.imm << 2);
   }
   else
   {

    instruction->operands[2].reg = (Register)decode.stc.rn;
    if (instruction->operands[2].cls == OC_MEM_OPTION)
     instruction->operands[2].imm = decode.stc.imm;
    else
     instruction->operands[2].imm = decode.stc.imm << 2;
    instruction->operands[2].flags.add = decode.stc.u;
   }
  }
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_memory_hints_simd_and_misc(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t op2:4;
   uint32_t group2:8;
   uint32_t rn:4;
   uint32_t op1:7;
   uint32_t group3:5;
  } com;
  struct {
   uint32_t mode:5;
   uint32_t group1:1;
   uint32_t aif:3;
   uint32_t group3:8;
   uint32_t m:1;
   uint32_t imod:2;
   uint32_t group4:12;
  } cps;
  struct {
   uint32_t imm12:12;
   uint32_t group1:4;
   uint32_t rn:4;
   uint32_t group2:2;
   uint32_t r:1;
   uint32_t u:1;
   uint32_t group3:8;
  } pli;
  struct {
   uint32_t rm:4;
   uint32_t group1:1;
   uint32_t type:2;
   uint32_t imm5:5;
   uint32_t group2:4;
   uint32_t rn:4;
   uint32_t group3:1;
   uint32_t w:1;
   uint32_t group4:1;
   uint32_t u:1;
   uint32_t group5:8;
  } plir;
 }decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
 if ((decode.com.op1 >> 5) == 1)
 {
  return armv7_simd_data_processing(instructionValue, instruction, address);
 }
 else if ((decode.com.op1 & 0x71) == 64)
 {
  return armv7_simd_load_store(instructionValue, instruction, address);
 }
 else
 {
  switch (decode.com.op1)
  {
   case 16:
    if ((decode.com.rn & 1) == 0)
    {
     static Operation operation[4] = {ARMV7_CPS, ARMV7_CPS, ARMV7_CPSIE, ARMV7_CPSID};
     instruction->operation = operation[decode.cps.imod];
     uint32_t i = 0;
     if ((decode.cps.m == 1 && decode.cps.aif != 0) || decode.cps.m == 0)
     {
     instruction->operands[i].cls = OC_IFLAGS;
     instruction->operands[i++].iflag = (Iflags)decode.cps.aif;
     }
     if ((decode.cps.m == 0 &&decode.cps.mode != 0) || decode.cps.m == 1)
     {
     instruction->operands[i].cls = OC_IMM;
     instruction->operands[i].imm = decode.cps.mode;
     }
    }
    else
    {
     instruction->operation = ARMV7_SETEND;
     instruction->operands[0].cls = OC_ENDIAN_SPEC;
     instruction->operands[0].endian = (EndianSpec)((instructionValue >> 9) & 1);
    }
    break;
   case 65:
   case 73:
    instruction->operation = ARMV7_NOP;
    break;
   case 69:
   case 77:
    instruction->operation = ARMV7_PLI;
    instruction->operands[0].cls = OC_MEM_IMM;
    instruction->operands[0].reg = (Register)decode.pli.rn;
    instruction->operands[0].imm = decode.pli.imm12;
    instruction->operands[0].flags.add = decode.pli.u;
    break;
   case 81:
   case 89:
    {
     static Operation operation[2] = {ARMV7_PLDW, ARMV7_PLD};
     instruction->operation = operation[decode.pli.r];
     instruction->operands[0].cls = OC_MEM_IMM;
     instruction->operands[0].reg = (Register)decode.pli.rn;
     instruction->operands[0].imm = decode.pli.imm12;
     instruction->operands[0].flags.add = decode.pli.u;
    }
    break;
   case 85:
   case 93:

    {
     static Operation operation[2] = {ARMV7_PLDW, ARMV7_PLD};
     instruction->operation = operation[decode.pli.r];
     instruction->operands[0].cls = OC_MEM_IMM;
     instruction->operands[0].reg = (Register)decode.pli.rn;
     instruction->operands[0].imm = decode.pli.imm12;
     instruction->operands[0].flags.add = decode.pli.u;
    }
# 4252 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
    break;
   case 87:
    switch (decode.com.op2)
    {
     case 1:
      instruction->operation = ARMV7_CLREX;
      break;
     case 4:
      instruction->operation = ARMV7_DSB;
      instruction->operands[0].cls = OC_DSB_OPTION;
      instruction->operands[0].dsbOpt = (DsbOption)(instructionValue & 15);
      break;
     case 5:
      instruction->operation = ARMV7_DMB;
      instruction->operands[0].cls = OC_DSB_OPTION;
      instruction->operands[0].dsbOpt = (DsbOption)(instructionValue & 15);
      break;
     case 6:
      instruction->operation = ARMV7_ISB;
      instruction->operands[0].cls = OC_DSB_OPTION;
      instruction->operands[0].dsbOpt = (DsbOption)(instructionValue & 15);
      break;
     default:
      break;
    }
    break;
   case 97:
   case 105:
    instruction->operation = ARMV7_NOP;
    break;
   case 101:
   case 109:
    {
    instruction->operation = ARMV7_PLI;
    instruction->operands[0].cls = OC_MEM_IMM;
    instruction->operands[0].reg = (Register)decode.plir.rn;
    instruction->operands[0].flags.add = decode.plir.u;
    instruction->operands[0].offset = (Register)decode.plir.rm;
    instruction->operands[0].flags.offsetRegUsed = 1;
    instruction->operands[0].imm = DecodeImmShift(
      decode.plir.type,
      decode.plir.imm5,
      &instruction->operands[0].shift);
    }
    break;
   case 113:
   case 121:
    {
    static Operation operation[2] = {ARMV7_PLDW, ARMV7_PLD};
    instruction->operation = operation[decode.pli.r];
    instruction->operands[0].cls = OC_MEM_IMM;
    instruction->operands[0].reg = (Register)decode.plir.rn;
    instruction->operands[0].flags.add = decode.plir.u;
    instruction->operands[0].offset = (Register)decode.plir.rm;
    instruction->operands[0].flags.offsetRegUsed = 1;
    instruction->operands[0].imm = DecodeImmShift(
      decode.plir.type,
      decode.plir.imm5,
      &instruction->operands[0].shift);
    }
    break;
   case 117:
   case 125:
    {
    static Operation operation[2] = {ARMV7_PLDW, ARMV7_PLD};
    instruction->operation = operation[decode.pli.r];
    instruction->operands[0].cls = OC_MEM_IMM;
    instruction->operands[0].reg = (Register)decode.plir.rn;
    instruction->operands[0].flags.add = decode.plir.u;
    instruction->operands[0].offset = (Register)decode.plir.rm;
    instruction->operands[0].flags.offsetRegUsed = 1;
    instruction->operands[0].imm = DecodeImmShift(
      decode.plir.type,
      decode.plir.imm5,
      &instruction->operands[0].shift);
    }
    break;
  }
 }
 return instruction->operation == ARMV7_UNDEFINED;
}


uint32_t armv7_simd_data_processing(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t c:4;
   uint32_t b:4;
   uint32_t group2:7;
   uint32_t a:5;
   uint32_t u:1;
   uint32_t group3:7;
  } com;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t op:1;
   uint32_t n:1;
   uint32_t len:2;
   uint32_t group2:2;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t group3:2;
   uint32_t d:1;
   uint32_t group4:9;
  } vtbl;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t n:1;
   uint32_t imm4:4;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t group3:2;
   uint32_t d:1;
   uint32_t group4:9;
  } vext;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t group2:5;
   uint32_t vd:4;
   uint32_t imm4:4;
   uint32_t group3:2;
   uint32_t d:1;
   uint32_t group4:9;
  } vdup;
 } decode;
 decode.value = instructionValue;
 if (decode.com.a >> 4 == 0)
  return armv7_three_register_same(instructionValue, instruction, address);

 uint32_t a = decode.com.a & 7;
 if ((decode.com.c & 9) == 1 && a == 0)
  return armv7_one_register_and_modified_imm(instructionValue, instruction, address);

 if ((decode.com.c & 9) == 9 || (a > 0 && (decode.com.c & 1) == 1))
  return armv7_two_register_and_shift(instructionValue, instruction, address);

 if (a <= 5)
 {
  if ((decode.com.c & 5) == 0)
   return armv7_three_register_different(instructionValue, instruction, address);
  if ((decode.com.c & 5) == 4)
   return armv7_two_register_scalar(instructionValue, instruction, address);
 }

 if (decode.com.u == 0)
 {
  if ((decode.com.c & 1) != 0)
   return 1;
  instruction->operation = ARMV7_VEXT;
  instruction->dataType = DT_8;
  instruction->cond = (Condition)COND_NONE;
  instruction->operands[0].cls = OC_REG;
  instruction->operands[0].reg = (Register)(regMap[decode.vext.q] + ((decode.vext.d << 4 | decode.vext.vd) >> decode.vext.q));
  instruction->operands[1].cls = OC_REG;
  instruction->operands[1].reg = (Register)(regMap[decode.vext.q] + ((decode.vext.n << 4 | decode.vext.vn) >> decode.vext.q));
  instruction->operands[2].cls = OC_REG;
  instruction->operands[2].reg = (Register)(regMap[decode.vext.q] + ((decode.vext.m << 4 | decode.vext.vm) >> decode.vext.q));
  instruction->operands[3].cls = OC_IMM;
  instruction->operands[3].imm = decode.vext.imm4 * 8;
  if (decode.vext.q)
   instruction->operands[3].imm <<= 1;
 }
 else if (decode.com.b <= 7)
 {
  if ((decode.com.c & 1) != 0)
   return 1;
  return armv7_two_register_misc(instructionValue, instruction, address);
 }
 else if (decode.com.b <= 11)
 {
  if ((decode.com.c & 1) != 0)
   return 1;

  static Operation operation[2] = {ARMV7_VTBL, ARMV7_VTBX};
  instruction->operation = operation[decode.vtbl.op];
  instruction->dataType = DT_8;
  instruction->cond = (Condition)COND_NONE;
  static uint8_t sizeMap[4] = {1,3,7,15};
  uint32_t n = (decode.vtbl.n << 4) | decode.vtbl.vn;
  instruction->unpredictable = (n + decode.vtbl.len + 1) > 32;
  instruction->operands[0].cls = OC_REG;
  instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vtbl.d << 4) | decode.vtbl.vd));
  instruction->operands[1].cls = OC_REG_LIST_DOUBLE;
  instruction->operands[1].flags.hasElements = 0;
  instruction->operands[1].reg = (Register)(sizeMap[decode.vtbl.len] << (n));
  instruction->operands[2].cls = OC_REG;
  instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vtbl.m << 4) | decode.vtbl.vm));
 }
 else if (decode.com.b == 12)
 {
  if ((decode.com.c & 9) != 0)
   return 1;
  instruction->operation = ARMV7_VDUP;
  instruction->cond = (Condition)COND_NONE;
  instruction->operands[0].cls = OC_REG;
  instruction->operands[0].reg = (Register)(regMap[decode.vdup.q] + ((decode.vdup.d << 4 | decode.vdup.vd) >> decode.vdup.q));
  instruction->operands[1].cls = OC_REG;
  instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + (decode.vdup.m << 4 | decode.vdup.vm));
  instruction->operands[1].flags.hasElements = 1;

  if ((decode.vdup.imm4 & 1) == 1)
  {
   instruction->dataType = DT_8;
   instruction->operands[1].imm = (decode.vdup.imm4 >> 1) & 7;
  }
  else if ((decode.vdup.imm4 & 3) == 2)
  {
   instruction->dataType = DT_16;
   instruction->operands[1].imm = (decode.vdup.imm4 >> 2) & 3;
  }
  else if ((decode.vdup.imm4 & 7) == 4)
  {
   instruction->dataType = DT_32;
   instruction->operands[1].imm = (decode.vdup.imm4 >> 3) & 1;
  }
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_three_register_same(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t b:1;
   uint32_t group2:3;
   uint32_t a:4;
   uint32_t group3:8;
   uint32_t c:2;
   uint32_t group4:2;
   uint32_t u:1;
   uint32_t group5:7;
  } com;
  struct {
   uint32_t vm:4;
   uint32_t b:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t n:1;
   uint32_t sz:1;
   uint32_t op:1;
   uint32_t group1:2;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t size:2;
   uint32_t d:1;
   uint32_t group2:1;
   uint32_t u:1;
   uint32_t group3:7;
  } vh;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
 instruction->operation = ARMV7_UNDEFINED;
 instruction->dataType = (enum DataType)(1+((((decode.vh.u&1))<<2) | ((decode.vh.size)&3)));
 int src1 = 1, src2 = 2;
 switch (decode.com.a)
 {
  case 0:
   {
    if (decode.com.b == 1)
     instruction->operation = ARMV7_VQADD;
    else
    {
     static Operation operation[2] = {ARMV7_VHADD, ARMV7_VHSUB};
     instruction->operation = operation[decode.vh.op];
    }
    break;
   }
  case 1:
   {
    if (decode.com.b == 0)
    {
     instruction->operation = ARMV7_VRHADD;
    }
    else
    {
     if (decode.com.u == 0)
     {
      static Operation operation[4] = {ARMV7_VAND, ARMV7_VBIC, ARMV7_VORR, ARMV7_VORN};
      instruction->operation = operation[decode.com.c];
      if (decode.com.c == 2 && decode.vh.vn == decode.vh.vm)
       instruction->operation = ARMV7_VORR;
     }
     else
     {
      static Operation operation[4] = {ARMV7_VEOR, ARMV7_VBSL, ARMV7_VBIT, ARMV7_VBIF};
      instruction->operation = operation[decode.com.c];
     }
     instruction->dataType = DT_NONE;
    }
    break;
   }
  case 2:
   {
    if (decode.com.b == 0)
    {
     static Operation operation[2]= {ARMV7_VHADD, ARMV7_VHSUB};
     instruction->operation = operation[decode.vh.op];
    }
    else
    {
     instruction->operation = ARMV7_VQSUB;
    }
    break;
   }
  case 3:
   {
    static Operation operation[2] = {ARMV7_VCGT, ARMV7_VCGE};
    instruction->operation = operation[decode.com.b];
    break;
   }
  case 4:
   {
    static Operation operation[2] = {ARMV7_VSHL, ARMV7_VQSHL};
    instruction->operation = operation[decode.com.b];
    src1 = 2;
    src2 = 1;
    break;
   }
  case 5:
   {
    static Operation operation[2] = {ARMV7_VRSHL, ARMV7_VQRSHL};
    instruction->operation = operation[decode.com.b];
    src1 = 2;
    src2 = 1;
    break;
   }
  case 6:
   {
    static Operation operation[2] = {ARMV7_VMAX, ARMV7_VMIN};
    instruction->operation = operation[decode.vh.b];
    break;
   }
  case 7:
   {
    static Operation operation[2] = {ARMV7_VABD, ARMV7_VABA};
    instruction->operation = operation[decode.com.b];
    break;
   }
  case 8:
   {
    static Operation operation[2][2] = {
     {ARMV7_VADD, ARMV7_VSUB},
     {ARMV7_VTST, ARMV7_VCEQ}
    };
    instruction->operation = operation[decode.com.b][decode.com.u];
    if (instruction->operation == ARMV7_VTST)
    {
     instruction->dataType = (DataType)(DT_8 + decode.vh.size);

    }
    else
    {
     instruction->dataType = (DataType)(DT_I8 + decode.vh.size);

    }
    break;
   }
  case 9:
   {
    if (decode.vh.b == 0)
    {
     static Operation operation[2] = {ARMV7_VMLA, ARMV7_VMLS};
     instruction->operation = operation[decode.com.u];
     instruction->dataType = (DataType)(DT_I8 + decode.vh.size);
    }
    else
    {
     instruction->operation = ARMV7_VMUL;
     if (decode.com.u == 1)
      instruction->dataType = (DataType)(DT_P8);
     else
     {
      instruction->dataType = (DataType)(DT_I8 + decode.vh.size);
     }
    }
    break;
   }
  case 10:
   {
    static Operation operation[2] = {ARMV7_VPMAX, ARMV7_VPMIN};
    instruction->operation = operation[decode.vh.b];
    break;
   }
  case 11:
   {
    static Operation operation[2][2] = {
     {ARMV7_VQDMULH, ARMV7_VQRDMULH},
     {ARMV7_VPADD, ARMV7_UNDEFINED}
    };
    instruction->operation = operation[decode.com.b][decode.com.u];
    if (instruction->operation == ARMV7_VPADD)
     instruction->dataType = (DataType)(DT_I8 + decode.vh.size);
    else
     instruction->dataType = (DataType)(DT_S8 + decode.vh.size);
    break;
   }
  case 12:
   {
    if (decode.com.b == 1 && decode.com.u == 0)
    {
     Operation operation[2] = {ARMV7_VFMA, ARMV7_VFMS};
     instruction->operation = operation[decode.vh.size >> 1];
     instruction->dataType = DT_F32;
    }
    break;
   }
  case 13:
   {
    if (decode.com.b == 0)
    {
     static Operation operation[2][2] = {
      {ARMV7_VADD, ARMV7_VSUB},
      {ARMV7_VPADD, ARMV7_VABD}
     };
     instruction->operation = operation[decode.com.u][decode.com.c >> 1];
     instruction->operation = (Operation)((instruction->operation == ARMV7_VMLA && decode.vh.op) + instruction->operation);
    }
    else
    {
     static Operation operation[2][2] = {
      {ARMV7_VMLA, ARMV7_VMLS},
      {ARMV7_VMUL, ARMV7_VMUL}
     };
     instruction->operation = operation[decode.com.u][decode.com.c >> 1];
    }
    instruction->dataType = DT_F32;
    break;
   }
  case 14:
   {
    if (decode.com.b == 0)
    {
     static Operation operation[2][2] = {
      {ARMV7_VCEQ, ARMV7_VCEQ},
      {ARMV7_VCGE, ARMV7_VCGT}
     };
     instruction->operation = operation[decode.com.u][decode.com.c >> 1];
    }
    else
    {
     static Operation operation[2] = {ARMV7_VACGE, ARMV7_VACGT};
     instruction->operation = operation[decode.com.c >> 1];
    }
    instruction->dataType = DT_F32;
    break;
   }
  case 15:
   {
    if (decode.com.b == 0)
    {
     static Operation operation[2][2] = {
      {ARMV7_VMAX, ARMV7_VMIN},
      {ARMV7_VPMAX, ARMV7_VPMIN}
     };
     instruction->operation = operation[decode.com.u][decode.com.c >> 1];
    }
    else
    {
     static Operation operation[2][2] = {
      {ARMV7_VRECPS, ARMV7_VRSQRTS},
      {ARMV7_UNDEFINED, ARMV7_UNDEFINED}
     };
     instruction->operation = operation[decode.com.u][decode.com.c >> 1];
    }
    instruction->dataType = DT_F32;
    break;
   }
 }

 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)(regMap[decode.vh.q] + ((decode.vh.d << 4 | decode.vh.vd) >> decode.vh.q));
 instruction->operands[src1].cls = OC_REG;
 instruction->operands[src1].reg = (Register)(regMap[decode.vh.q] + ((decode.vh.n << 4 | decode.vh.vn) >> decode.vh.q));
 instruction->operands[src2].cls = OC_REG;
 instruction->operands[src2].reg = (Register)(regMap[decode.vh.q] + ((decode.vh.m << 4 | decode.vh.vm) >> decode.vh.q));
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_three_register_different(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:8;
   uint32_t a:4;
   uint32_t group2:8;
   uint32_t b:2;
   uint32_t group3:2;
   uint32_t u:1;
   uint32_t group4:7;
  } com;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t n:1;
   uint32_t op:1;
   uint32_t op2:1;
   uint32_t group3:2;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t size:2;
   uint32_t d:1;
   uint32_t diff:1;
   uint32_t u:1;
   uint32_t group5:7;
  } vcom;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
# 4801 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 switch (decode.com.a)
 {
  case 0:
  case 1:
   {
    static Operation operation[2] = {ARMV7_VADDL, ARMV7_VADDW};
    static DataType dataType[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_U8, DT_U16, DT_U32, DT_NONE}
    };
    instruction->operation = operation[decode.vcom.op];
    instruction->dataType = dataType[decode.vcom.u][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcom.op] + (((decode.vcom.n << 4) | decode.vcom.vn) >> decode.vcom.op));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
    if ((decode.vcom.vd & 1) == 1 ||
     (decode.vcom.op == 1 && (decode.vcom.vn & 1) == 1))
     return 1;
   }
   break;
  case 2:
  case 3:
   {
    static Operation operation[2] = {ARMV7_VSUBL, ARMV7_VSUBW};
    static DataType dataType[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_U8, DT_U16, DT_U32, DT_NONE}
    };
    instruction->operation = operation[decode.vcom.op];
    instruction->dataType = dataType[decode.vcom.u][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcom.op] + (((decode.vcom.n << 4) | decode.vcom.vn) >> decode.vcom.op));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
    if ((decode.vcom.vd & 1) == 1 ||
     (decode.vcom.op == 1 && (decode.vcom.vn & 1) == 1))
     return 1;
   }

   break;
  case 4:
   {
    static DataType dataType[4] = {DT_I16, DT_I32, DT_I64, DT_NONE};
    static Operation operation[2] = {ARMV7_VADDHN, ARMV7_VRADDHN};
    instruction->operation = operation[decode.com.u];
    instruction->dataType = dataType[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.d << 4) | decode.vcom.vd));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.n << 4) | decode.vcom.vn) >> 1));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.m << 4) | decode.vcom.vm) >> 1));
   }
   break;
  case 5:
   {
    static DataType dataType[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_U8, DT_U16, DT_U32, DT_NONE}
    };
    instruction->operation = ARMV7_VABAL;
    instruction->dataType = dataType[decode.vcom.u][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
  case 6:
   {
    static DataType dataType[4] = {DT_I16, DT_I32, DT_I64, DT_NONE};
    static Operation operation[2] = {ARMV7_VSUBHN, ARMV7_VRSUBHN};
    instruction->operation = operation[decode.com.u];
    instruction->dataType = dataType[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.d << 4) | decode.vcom.vd));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.n << 4) | decode.vcom.vn) >> 1));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.m << 4) | decode.vcom.vm) >> 1));
   }
   break;
  case 7:
   {
    static Operation operation[2] = {ARMV7_VABD, ARMV7_VABDL};
    static DataType dataType[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_U8, DT_U16, DT_U32, DT_NONE}
    };
    instruction->operation = operation[decode.vcom.diff];
    instruction->dataType = dataType[decode.vcom.u][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
  case 8:
  case 10:
   {
    static Operation operation[2] = {ARMV7_VMLAL, ARMV7_VMLSL};
    static DataType dataType[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_U8, DT_U16, DT_U32, DT_NONE}
    };
    instruction->operation = operation[decode.vcom.op2];
    instruction->dataType = dataType[decode.vcom.u][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
  case 9:
  case 11:
   if (decode.com.u == 0)
   {
    static Operation operation[2] = {ARMV7_VQDMLAL, ARMV7_VQDMLSL};
    static DataType dataType[4] = {DT_S8, DT_S16, DT_S32, DT_NONE};
    instruction->operation = operation[decode.vcom.op2];
    instruction->dataType = dataType[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
  case 12:
   {
    static DataType dataType[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_U8, DT_U16, DT_U32, DT_NONE}
    };
    instruction->operation = ARMV7_VMULL;
    instruction->dataType = dataType[decode.vcom.u][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
  case 13:
   if (decode.com.u == 0)
   {
    static DataType dataType[4] = {DT_S8, DT_S16, DT_S32, DT_NONE};
    instruction->operation = ARMV7_VQDMULL;
    instruction->dataType = dataType[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
  case 14:
   {
    static DataType dataType[4] = {DT_P8, DT_P16, DT_P32, DT_NONE};
    instruction->operation = ARMV7_VMULL;
    instruction->dataType = dataType[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
   }
   break;
 }

 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_two_register_scalar(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:8;
   uint32_t a:4;
   uint32_t group2:8;
   uint32_t b:2;
   uint32_t group3:2;
   uint32_t u:1;
   uint32_t group4:7;
  }com;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t n:1;
   uint32_t f:1;
   uint32_t l:1;
   uint32_t op:1;
   uint32_t diff:1;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t size:2;
   uint32_t d:1;
   uint32_t group5:1;
   uint32_t q:1;
   uint32_t group6:7;
  }vcom;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
 switch (decode.com.a)
 {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
   {
    static Operation operation[2][2] = {
     {ARMV7_VMLA, ARMV7_VMLS},
     {ARMV7_VMLAL, ARMV7_VMLSL}
    };
    static DataType dtMap[2][4][2] = {
     {{DT_NONE, DT_NONE}, {DT_I16, DT_F16}, {DT_I32, DT_F32}, {DT_NONE, DT_NONE}},
     {{DT_NONE, DT_NONE}, {DT_S16, DT_U16}, {DT_S32, DT_U32}, {DT_NONE, DT_NONE}}
    };
    instruction->operation = operation[decode.vcom.l][decode.vcom.op];
    if (decode.vcom.l == 0)
     instruction->dataType = dtMap[0][decode.vcom.size][decode.vcom.f];
    else
     instruction->dataType = dtMap[1][decode.vcom.size][decode.vcom.q];

    instruction->operands[0].cls = OC_REG;
    if (decode.vcom.l == 0)
     instruction->operands[0].reg = (Register)(regMap[decode.vcom.q] + (((decode.vcom.d << 4) | decode.vcom.vd) >> decode.vcom.q));
    else
     instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcom.q] + (((decode.vcom.n << 4) | decode.vcom.vn) >> decode.vcom.q));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].flags.hasElements = 1;
    if (decode.vcom.size == 0 || (decode.vcom.f == 1 && decode.vcom.size == 1))
    {
     return 1;
    }
    else if (decode.vcom.size == 1)
    {
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
     instruction->operands[2].imm = (decode.vcom.m << 1) |(decode.vcom.vm >> 3);
    }
    else if (decode.vcom.size == 2)
    {
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm));
     instruction->operands[2].imm = decode.vcom.m;
    }
    else
     return 1;
   }
   break;
  case 3:
  case 7:
   if (decode.com.u == 0)
   {

    static Operation operation[2] = {ARMV7_VQDMLAL, ARMV7_VQDMLSL};
    static DataType dtMap[4] = {DT_NONE, DT_S16, DT_S32, DT_NONE};
    instruction->dataType = dtMap[decode.vcom.size];
    if ((decode.vcom.vd & 1) == 1)
     return 1;
    if (decode.vcom.diff == 1)
    {

     instruction->operation = operation[decode.vcom.l];
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.m << 4) | decode.vcom.vm));
    }
    else
    {

     instruction->operation = operation[decode.vcom.op];
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
     instruction->operands[2].cls = OC_REG;
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
     if (decode.vcom.size == 1)
      instruction->operands[2].imm = (decode.vcom.m << 1) | (decode.vcom.vm >> 3);
     else
      instruction->operands[2].imm = decode.vcom.m;

     instruction->operands[2].flags.hasElements = 1;
    }
   }
   break;
  case 8:
  case 9:
   {
    static DataType dtMap[2][4] = {
     {DT_NONE, DT_I16, DT_I32, DT_NONE},
     {DT_NONE, DT_NONE, DT_F32, DT_NONE}
    };
    instruction->operation = ARMV7_VMUL;
    instruction->dataType = dtMap[decode.vcom.f][decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vcom.q] + (((decode.vcom.d << 4) | decode.vcom.vd) >> decode.vcom.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcom.q] + (((decode.vcom.n << 4) | decode.vcom.vn) >> decode.vcom.q));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].flags.hasElements = 1;
    if (decode.vcom.size == 1)
    {
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
     instruction->operands[2].imm = (decode.vcom.m << 1) | (decode.vcom.vm >> 3);
    }
    else if (decode.vcom.size == 2)
    {
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm));
     instruction->operands[2].imm = decode.vcom.m;
    }
    else
     return 1;
   }
   break;
  case 10:
   {
    static DataType dtMap[4] = {DT_NONE, DT_S16, DT_S32, DT_NONE};
    instruction->operation = ARMV7_VMULL;
    instruction->dataType = dtMap[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + (((decode.vcom.n << 4) | decode.vcom.vn) >> decode.vcom.q));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].flags.hasElements = 1;
    if (decode.vcom.size == 1)
    {
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
     instruction->operands[2].imm = (decode.vcom.m << 1) | (decode.vcom.vm >> 3);
    }
    else if (decode.vcom.size == 2)
    {
     instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm));
     instruction->operands[2].imm = decode.vcom.m;
    }
    else
     return 1;
   }
   break;
  case 11:
   if (decode.com.u == 0)
   {
    static DataType dtMap[4] = {DT_NONE, DT_S16, DT_S32, DT_NONE};
    instruction->operation = ARMV7_VQDMULL;
    instruction->dataType = dtMap[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcom.d << 4) | decode.vcom.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcom.n << 4) | decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
    instruction->operands[2].imm = (decode.vcom.m << 1) | (decode.vcom.vm >> 3);
    instruction->operands[2].flags.hasElements = 1;

   }
   break;
   case 12:
   {

    static DataType dtMap[4] = {DT_NONE, DT_S16, DT_S32, DT_NONE};
    instruction->operation = ARMV7_VQDMULH;
    instruction->dataType = dtMap[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vcom.q] + (decode.vcom.vd));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcom.q] + (decode.vcom.vn));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
    instruction->operands[2].imm = (decode.vcom.m << 1) | (decode.vcom.vm >> 3);
    instruction->operands[2].flags.hasElements = 1;
   }
   break;
  case 13:
   {

    static DataType dtMap[4] = {DT_NONE, DT_S16, DT_S32, DT_NONE};
    instruction->operation = ARMV7_VQRDMULH;
    instruction->dataType = dtMap[decode.vcom.size];
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(((regMap[decode.vcom.q] + (((decode.vcom.d << 4) | decode.vcom.vd))) >> decode.vcom.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(((regMap[decode.vcom.q] + (((decode.vcom.n << 4) | decode.vcom.vn))) >> decode.vcom.q));
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)(ARMV7_REG_D0 + (decode.vcom.vm & 7));
    instruction->operands[2].imm = (decode.vcom.m << 1) | (decode.vcom.vm >> 3);
    instruction->operands[2].flags.hasElements = 1;
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_two_register_and_shift(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:6;
   uint32_t b:1;
   uint32_t l:1;
   uint32_t a:4;
   uint32_t group2:7;
   uint32_t imm3:3;
   uint32_t group3:2;
   uint32_t u:1;
   uint32_t group4:7;
  } com;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t l:1;
   uint32_t op:1;
   uint32_t group2:3;
   uint32_t vd:4;
   uint32_t imm6:6;
   uint32_t d:1;
   uint32_t group3:1;
   uint32_t u:1;
   uint32_t group4:7;
  } vshr;
 } decode;
# 5280 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
 switch (decode.com.a)
 {
  case 0:
  case 1:
  case 2:
  case 3:
   {
    static Operation operation[4] = {
     ARMV7_VSHR, ARMV7_VSRA, ARMV7_VRSHR, ARMV7_VRSRA};
    instruction->operation = operation[decode.com.a];

    static DataType dtMap[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_S64},
     {DT_U8, DT_U16, DT_U32, DT_U64}
    };
    uint32_t imm = (decode.vshr.l << 6) | decode.vshr.imm6;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)
     (regMap[decode.vshr.q] + (((decode.vshr.d << 4) | decode.vshr.vd) >> decode.vshr.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)
     (regMap[decode.vshr.q] + (((decode.vshr.m << 4) | decode.vshr.vm) >> decode.vshr.q));
    instruction->operands[2].cls = OC_IMM;
    if (imm < 16)
    {
     instruction->operands[2].imm = 16 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][0];
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = 32 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][1];
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = 64 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][2];
    }
    else if (imm < 128)
    {
     instruction->operands[2].imm = 64 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][3];
    }
   }
   break;
  case 4:
   if (decode.com.u == 1)
   {
    instruction->operation = ARMV7_VSRI;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)
     (regMap[decode.vshr.q] + (((decode.vshr.d << 4) | decode.vshr.vd) >> decode.vshr.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)
     (regMap[decode.vshr.q] + (((decode.vshr.m << 4) | decode.vshr.vm) >> decode.vshr.q));
    instruction->operands[2].cls = OC_IMM;
    uint32_t imm = (decode.vshr.l << 6) | decode.vshr.imm6;
    if (imm < 16)
    {
     instruction->operands[2].imm = 16 - decode.vshr.imm6;
     instruction->dataType = DT_8;
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = 32 - decode.vshr.imm6;
     instruction->dataType = DT_16;
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = 64 - decode.vshr.imm6;
     instruction->dataType = DT_32;
    }
    else if (imm < 128)
    {
     instruction->operands[2].imm = 64 - decode.vshr.imm6;
     instruction->dataType = DT_64;
    }
   }
   break;
  case 5:
   if (decode.com.u == 0)
   {
    instruction->operation = ARMV7_VSHL;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)
     (regMap[decode.vshr.q] + (((decode.vshr.d << 4) | decode.vshr.vd) >> decode.vshr.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)
     (regMap[decode.vshr.q] + (((decode.vshr.m << 4) | decode.vshr.vm) >> decode.vshr.q));
    instruction->operands[2].cls = OC_IMM;
    uint32_t imm = (decode.vshr.l << 6) | decode.vshr.imm6;
    if (imm < 16)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 8;
     instruction->dataType = DT_I8;
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 16;
     instruction->dataType = DT_I16;
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 32;
     instruction->dataType = DT_I32;
    }
    else if (imm < 128)
    {
     instruction->operands[2].imm = decode.vshr.imm6;
     instruction->dataType = DT_I64;
    }
   }
   else
   {
    instruction->operation = ARMV7_VSLI;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vshr.q] + (((decode.vshr.d << 4) | decode.vshr.vd) >> decode.vshr.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vshr.q] + (((decode.vshr.m << 4) | decode.vshr.vm) >> decode.vshr.q));
    instruction->operands[2].cls = OC_IMM;
    uint32_t imm = (decode.vshr.l << 6) | decode.vshr.imm6;
    if (imm < 16)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 8;
     instruction->dataType = DT_8;
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 16;
     instruction->dataType = DT_16;
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 32;
     instruction->dataType = DT_32;
    }
    else if (imm < 128)
    {
     instruction->operands[2].imm = decode.vshr.imm6;
     instruction->dataType = DT_64;
    }
   }
   break;
  case 6:
  case 7:
   {
    if (decode.vshr.op == 0)
    {
     if (decode.vshr.u == 0)
      return 1;
     instruction->operation = ARMV7_VQSHLU;
    }
    else
    {
     instruction->operation = ARMV7_VQSHL;
     decode.com.u = !decode.com.u;
    }
    static DataType dtMap[2][4] = {
     {DT_U8, DT_U16, DT_U32, DT_U64},
     {DT_S8, DT_S16, DT_S32, DT_S64}
    };
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vshr.q] + (((decode.vshr.d << 4) | decode.vshr.vd) >> decode.vshr.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vshr.q] + (((decode.vshr.m << 4) | decode.vshr.vm) >> decode.vshr.q));
    instruction->operands[2].cls = OC_IMM;
    uint32_t imm = (decode.vshr.l << 6) | decode.vshr.imm6;
    if (imm < 16)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 8;
     instruction->dataType = dtMap[decode.vshr.u][0];
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 16;
     instruction->dataType = dtMap[decode.vshr.u][1];
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 32;
     instruction->dataType = dtMap[decode.vshr.u][2];
    }
    else if (imm < 128)
    {
     instruction->operands[2].imm = decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][3];
    }
   }
   break;
  case 8:
   if (decode.com.l == 0)
   {
    if (decode.com.u == 0)
    {
     static Operation operation[2] = {ARMV7_VSHRN, ARMV7_VRSHRN};
     instruction->operation = operation[decode.com.b];
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vshr.d << 4) | decode.vshr.vd));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(ARMV7_REG_Q0 + (((decode.vshr.m << 4) | decode.vshr.vm) >> 1));
     instruction->operands[2].cls = OC_IMM;
     uint32_t imm = decode.vshr.imm6;
     if (imm < 16)
     {
      instruction->operands[2].imm = 16 - decode.vshr.imm6;
      instruction->dataType = DT_I16;
     }
     else if (imm < 32)
     {
      instruction->operands[2].imm = 32 - decode.vshr.imm6;
      instruction->dataType = DT_I32;
     }
     else if (imm < 64)
     {
      instruction->operands[2].imm = 64 - decode.vshr.imm6;
      instruction->dataType = DT_I64;
     }
    }
    else
    {
     static Operation operation[2] = {ARMV7_VQSHRUN, ARMV7_VQRSHRUN};
     instruction->operation = operation[decode.com.b];
     DataType dtMap[2][4] = {
      {DT_U8, DT_U16, DT_U32, DT_U64},
      {DT_S8, DT_S16, DT_S32, DT_S64}
     };
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vshr.d << 4) | decode.vshr.vd));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(ARMV7_REG_Q0 + (((decode.vshr.m << 4) | decode.vshr.vm) >> 1));
     instruction->operands[2].cls = OC_IMM;
     uint32_t imm = decode.vshr.imm6;
     if (imm < 16)
     {
      instruction->operands[2].imm = 16 - decode.vshr.imm6;
      instruction->dataType = dtMap[decode.vshr.u][1];
     }
     else if (imm < 32)
     {
      instruction->operands[2].imm = 32 - decode.vshr.imm6;
      instruction->dataType = dtMap[decode.vshr.u][2];
     }
     else if (imm < 64)
     {
      instruction->operands[2].imm = 64 - decode.vshr.imm6;
      instruction->dataType = dtMap[decode.vshr.u][3];
     }
    }
   }
   break;
  case 9:
   if (decode.com.l == 0)
   {
    static Operation operation[2] = {ARMV7_VQSHRN, ARMV7_VQRSHRN};
    instruction->operation = operation[decode.com.b];
    static DataType dtMap[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_S64},
     {DT_U8, DT_U16, DT_U32, DT_U64}
    };
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vshr.d << 4) | decode.vshr.vd));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_Q0 + (((decode.vshr.m << 4) | decode.vshr.vm) >> 1));
    instruction->operands[2].cls = OC_IMM;
    uint32_t imm = decode.vshr.imm6;
    if (imm < 16)
    {
     instruction->operands[2].imm = 16 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][1];
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = 32 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][2];
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = 64 - decode.vshr.imm6;
     instruction->dataType = dtMap[decode.vshr.u][3];
    }
   }
   break;
  case 10:
   if (decode.com.b == 0 && decode.com.l == 0)
   {
    instruction->operation = ARMV7_VSHLL;
    static DataType dtMap[2][4] = {
     {DT_S8, DT_S16, DT_S32, DT_S64},
     {DT_U8, DT_U16, DT_U32, DT_U64}
    };
    uint32_t imm = decode.vshr.imm6;
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vshr.d << 4) | decode.vshr.vd) >> 1));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vshr.m << 4) | decode.vshr.vm));
    instruction->operands[2].cls = OC_IMM;
    if (imm < 16)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 8;
     instruction->dataType = dtMap[decode.vshr.u][0];
    }
    else if (imm < 32)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 16;
     instruction->dataType = dtMap[decode.vshr.u][1];
    }
    else if (imm < 64)
    {
     instruction->operands[2].imm = decode.vshr.imm6 - 32;
     instruction->dataType = dtMap[decode.vshr.u][2];
    }
    if (instruction->operands[2].imm == 0)
    {
     instruction->operation = ARMV7_VMOVL;
     instruction->operands[2].cls = OC_NONE;
    }
   }
   break;
  case 14:
  case 15:
   instruction->operation = ARMV7_VCVT;
   static DataType dtMap[2] = {DT_S32, DT_U32};
   instruction->operands[0].cls = OC_REG;
   instruction->operands[0].reg = (Register)
    (regMap[decode.vshr.q] + (((decode.vshr.d << 4) | decode.vshr.vd) >> decode.vshr.q));
   instruction->operands[1].cls = OC_REG;
   instruction->operands[1].reg = (Register)
    (regMap[decode.vshr.q] + (((decode.vshr.m << 4) | decode.vshr.vm) >> decode.vshr.q));
   instruction->operands[2].cls = OC_IMM;
   instruction->operands[2].imm = 64 - decode.vshr.imm6;
   if (decode.vshr.op == 1)
   {
    instruction->dataType = dtMap[decode.vshr.u];
    instruction->dataType2 = DT_F32;
   }
   else
   {
    instruction->dataType = DT_F32;
    instruction->dataType2 = dtMap[decode.vshr.u];
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_two_register_misc(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:6;
   uint32_t b:5;
   uint32_t group2:5;
   uint32_t a:2;
   uint32_t group3:14;
  } com;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t op:2;
   uint32_t group2:3;
   uint32_t vd:4;
   uint32_t group3:2;
   uint32_t size:2;
   uint32_t group4:2;
   uint32_t d:1;
   uint32_t group5:9;
  } vrev;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t group2:3;
   uint32_t f:1;
   uint32_t group3:1;
   uint32_t vd:4;
   uint32_t group4:2;
   uint32_t size:2;
   uint32_t group5:2;
   uint32_t d:1;
   uint32_t group6:9;
  } vcgt;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t op:2;
   uint32_t group2:4;
   uint32_t vd:4;
   uint32_t group4:2;
   uint32_t size:2;
   uint32_t group5:2;
   uint32_t d:1;
   uint32_t group6:9;
  } vqmov;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t group2:1;
   uint32_t f:1;
   uint32_t vd:4;
   uint32_t group4:2;
   uint32_t size:2;
   uint32_t group5:2;
   uint32_t d:1;
   uint32_t group6:9;
  } vrsqrte;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:2;
   uint32_t op:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t group4:2;
   uint32_t size:2;
   uint32_t group5:2;
   uint32_t d:1;
   uint32_t group6:9;
  } vcvt;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t q:1;
   uint32_t op:2;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t group4:2;
   uint32_t size:2;
   uint32_t group5:2;
   uint32_t d:1;
   uint32_t group6:9;
  } vcvt2;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;

 switch (decode.com.a)
 {
  case 0:
   {
    static DataType dtMap[5][4] = {
     {DT_S8, DT_S16, DT_S32, DT_S64},
     {DT_U8, DT_U16, DT_U32, DT_U64},
     {DT_I8, DT_I16, DT_I32, DT_I64},
     {DT_8, DT_16, DT_32, DT_64},
     {DT_NONE, DT_NONE, DT_NONE, DT_NONE}
    };
    switch (decode.com.b)
    {
     case 0:
     case 1:
      if (decode.vrev.op + decode.vrev.size >= 3)
       return 1;
      instruction->operation = ARMV7_VREV64;
      instruction->dataType = dtMap[3][decode.vrev.size];
      break;
     case 2:
     case 3:
      if (decode.vrev.op + decode.vrev.size >= 3)
       return 1;
      instruction->operation = ARMV7_VREV32;
      instruction->dataType = dtMap[3][decode.vrev.size];
      break;
     case 4:
     case 5:
      if (decode.vrev.op + decode.vrev.size >= 3)
       return 1;
      instruction->operation = ARMV7_VREV16;
      instruction->dataType = dtMap[3][decode.vrev.size];
      break;
     case 8:
     case 9:
     case 10:
     case 11:
      if (decode.vrev.size == 3)
       return 1;

      instruction->operation = ARMV7_VPADDL;
      instruction->dataType = dtMap[decode.vrev.op][decode.vrev.size];
      break;
     case 16:
     case 17:
      if (decode.vrev.size == 3)
       return 1;
      instruction->operation = ARMV7_VCLS;
      instruction->dataType = dtMap[0][decode.vrev.size];
      break;
     case 18:
     case 19:
      if (decode.vrev.size == 3)
       return 1;
      instruction->operation = ARMV7_VCLZ;
      instruction->dataType = dtMap[2][decode.vrev.size];
      break;
     case 20:
     case 21:
      if (decode.vrev.size != 0)
       return 1;
      instruction->operation = ARMV7_VCNT;
      instruction->dataType = DT_8;
      break;
     case 22:
     case 23:
      if (decode.vrev.size != 0)
       return 1;
      instruction->operation = ARMV7_VMVN;
      instruction->dataType = dtMap[4][decode.vrev.size];
      break;
     case 24:
     case 25:
     case 26:
     case 27:
      if (decode.vrev.size == 3)
       return 1;
      instruction->operation = ARMV7_VPADAL;
      instruction->dataType = dtMap[decode.vrev.op][decode.vrev.size];
      break;
     case 28:
     case 29:
      if (decode.vrev.size == 3)
       return 1;
      instruction->operation = ARMV7_VQABS;
      instruction->dataType = dtMap[0][decode.vrev.size];
      break;
     case 30:
     case 31:
      if (decode.vrev.size == 3)
       return 1;
      instruction->operation = ARMV7_VQNEG;
      instruction->dataType = dtMap[0][decode.vrev.size];
      break;
    }
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vrev.q] + (((decode.vrev.d << 4) | decode.vrev.vd) >> decode.vrev.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vrev.q] + (((decode.vrev.m << 4) | decode.vrev.vm) >> decode.vrev.q));
   }
   break;
  case 1:
   {
    static DataType dtMap[4][4] = {
     {DT_S8, DT_S16, DT_S32, DT_NONE},
     {DT_NONE, DT_NONE, DT_F32, DT_NONE},
     {DT_I8, DT_I16, DT_I32, DT_NONE},
     {DT_NONE, DT_NONE, DT_F32, DT_NONE}
    };
    uint32_t type = 0;
    switch (decode.com.b)
    {
     case 0:
     case 1:
     case 16:
     case 17:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VCGT;
      instruction->dataType = dtMap[decode.vcgt.f][decode.vcgt.size];
      break;
     case 2:
     case 3:
     case 18:
     case 19:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VCGE;
      instruction->dataType = dtMap[decode.vcgt.f][decode.vcgt.size];
      break;
     case 4:
     case 5:
     case 20:
     case 21:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VCEQ;
      instruction->dataType = dtMap[2 + decode.vcgt.f][decode.vcgt.size];
      break;
     case 6:
     case 7:
     case 22:
     case 23:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VCLE;
      instruction->dataType = dtMap[decode.vcgt.f][decode.vcgt.size];
      break;
     case 8:
     case 9:
     case 24:
     case 25:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VCLT;
      instruction->dataType = dtMap[decode.vcgt.f][decode.vcgt.size];
      break;
     case 12:
     case 13:
     case 28:
     case 29:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VABS;
      instruction->dataType = dtMap[decode.vcgt.f][decode.vcgt.size];
      type = 1;
      break;
     case 14:
     case 15:
     case 30:
     case 31:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.f == 1 && decode.vcgt.size != 2))
       return 1;
      instruction->operation = ARMV7_VNEG;
      instruction->dataType = dtMap[decode.vcgt.f][decode.vcgt.size];
      type = 1;
      break;
    }

    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vcgt.q] + (((decode.vrev.d << 4) | decode.vcgt.vd) >> decode.vcgt.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcgt.q] + (((decode.vcgt.m << 4) | decode.vcgt.vm) >> decode.vcgt.q));
    if (type == 0)
    {
     instruction->operands[2].cls = OC_IMM;
     instruction->operands[2].imm = 0;
    }
   }
   break;
  case 2:
   {
    static DataType dtMap[4][4] = {
     {DT_8, DT_16, DT_32, DT_64},
     {DT_I8, DT_I16, DT_I32, DT_I64},
     {DT_S8, DT_S16, DT_S32, DT_S64},
     {DT_U8, DT_U16, DT_U32, DT_U64}
    };
    uint32_t type = 0;
    switch (decode.com.b)
    {
     case 0:
     case 1:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.q == 0 && decode.vcgt.size == 2))
       return 1;
      instruction->operation = ARMV7_VSWP;
      break;
     case 2:
     case 3:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.q == 1 &&
       ((decode.vcgt.vd & 1) == 1 || (decode.vcgt.vm & 1) == 1)))
       return 1;
      instruction->operation = ARMV7_VTRN;
      instruction->dataType = dtMap[0][decode.vcgt.size];
      break;
     case 4:
     case 5:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.q == 1 &&
       ((decode.vcgt.vd & 1) == 1 || (decode.vcgt.vm & 1) == 1)))
       return 1;
      instruction->operation = ARMV7_VUZP;
      instruction->dataType = dtMap[0][decode.vcgt.size];
      break;
     case 6:
     case 7:
      if (decode.vcgt.size == 3 ||
       (decode.vcgt.q == 1 &&
       ((decode.vcgt.vd & 1) == 1 || (decode.vcgt.vm & 1) == 1)))
       return 1;
      instruction->operation = ARMV7_VZIP;
      instruction->dataType = dtMap[0][decode.vcgt.size];
      break;
     case 8:
      if (decode.vcgt.size == 3 || (decode.vcgt.vm & 1) == 1)
       return 1;
      type = 2;
      instruction->operation = ARMV7_VMOVN;
      instruction->dataType = dtMap[1][decode.vcgt.size+1];
      break;
     case 9:
     case 10:
     case 11:
      {
       if (decode.vcgt.size == 3 || (decode.vcgt.vm & 1) == 1)
        return 1;
       Operation operation[4] = {
        ARMV7_UNDEFINED, ARMV7_VQMOVUN, ARMV7_VQMOVN, ARMV7_VQMOVN};
       type = 2;
       instruction->operation = operation[decode.vqmov.op];
       if (instruction->operation == ARMV7_VQMOVUN)
        instruction->dataType = dtMap[2][decode.vcgt.size+1];
       else
       {
        if (decode.vqmov.op == 2)
         instruction->dataType = dtMap[2][decode.vcgt.size+1];
        else if (decode.vqmov.op == 3)
         instruction->dataType = dtMap[3][decode.vcgt.size+1];
       }
      }
      break;
     case 12:
      instruction->operation = ARMV7_VSHLL;
      instruction->operands[2].cls = OC_IMM;
      instruction->operands[2].imm = 8 << decode.vqmov.size;
      instruction->dataType = dtMap[1][decode.vqmov.size];
      type = 1;
      break;
     case 24:
     case 28:
      {
       DataType dtMap2[2] = {DT_F16, DT_F32};
       instruction->operation = ARMV7_VCVT;
       instruction->dataType = dtMap2[decode.vcvt.op];
       instruction->dataType2 = dtMap2[!decode.vcvt.op];
       type = 3;
      }
      break;
    }

    if (type == 0)
    {
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(regMap[decode.vcgt.q] + (((decode.vrev.d << 4) | decode.vcgt.vd) >> decode.vcgt.q));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(regMap[decode.vcgt.q] + (((decode.vcgt.m << 4) | decode.vcgt.vm) >> decode.vcgt.q));
    }
    else if (type == 1)
    {
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vrev.d << 4) | decode.vcgt.vd) >> 1));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcgt.m << 4) | decode.vcgt.vm));
    }
    else if (type == 2)
    {
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vrev.d << 4) | decode.vcgt.vd));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(ARMV7_REG_Q0 + (((decode.vcgt.m << 4) | decode.vcgt.vm) >> 1));
    }
    else
    {
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(regMap[decode.vcvt.op] + (((decode.vrev.d << 4) | decode.vcgt.vd) >> decode.vcvt.op));
     instruction->operands[1].cls = OC_REG;
     instruction->operands[1].reg = (Register)(regMap[!decode.vcvt.op] + (((decode.vcgt.m << 4) | decode.vcgt.vm) >> !decode.vcvt.op));
    }

   }
   break;
  case 3:
   {
    static DataType dtMap[2][4] = {
     {DT_U8, DT_U16, DT_U32, DT_U64},
     {DT_NONE, DT_F16, DT_F32, DT_F64}
    };
    switch (decode.com.b)
    {
     case 16:
     case 17:
     case 20:
     case 21:
      instruction->operation = ARMV7_VRECPE;
      instruction->dataType = dtMap[decode.vrsqrte.f][decode.vcgt.size];
      break;
     case 18:
     case 19:
     case 22:
     case 23:
      instruction->operation = ARMV7_VRSQRTE;
      instruction->dataType = dtMap[decode.vrsqrte.f][decode.vcgt.size];
      break;
     case 24:
     case 25:
     case 26:
     case 27:
     case 28:
     case 29:
     case 30:
     case 31:
      instruction->operation = ARMV7_VCVT;
      if (decode.vcvt2.op < 2)
      {
       instruction->dataType = DT_F32;
       if ((decode.vcvt2.op & 1) == 1)
        instruction->dataType2 = DT_U32;
       else
        instruction->dataType2 = DT_S32;
      }
      else
      {
       instruction->dataType2 = DT_F32;
       if ((decode.vcvt2.op & 1) == 1)
        instruction->dataType = DT_U32;
       else
        instruction->dataType = DT_S32;
      }
      break;
    }
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vcgt.q] + (((decode.vcgt.d << 4) | decode.vcgt.vd) >> decode.vcgt.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)(regMap[decode.vcgt.q] + (((decode.vcgt.m << 4) | decode.vcgt.vm) >> decode.vcgt.q));
   }
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_one_register_and_modified_imm(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:5;
   uint32_t op:1;
   uint32_t group2:2;
   uint32_t cmode:4;
   uint32_t group3:20;
  } com;
  struct {
   uint32_t imm4:4;
   uint32_t group1:1;
   uint32_t op:1;
   uint32_t q:1;
   uint32_t group2:1;
   uint32_t cmode:4;
   uint32_t vd:4;
   uint32_t imm3:3;
   uint32_t group3:3;
   uint32_t d:1;
   uint32_t group4:1;
   uint32_t i:1;
   uint32_t group5:7;
  } vmov;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
 if (decode.com.op == 0)
 {
  switch (decode.com.cmode)
  {
   case 0:
   case 2:
   case 4:
   case 6:
    instruction->operation = ARMV7_VMOV;
    break;
   case 1:
   case 3:
   case 5:
   case 7:
    instruction->operation = ARMV7_VORR;
    break;
   case 8:
   case 10:
    instruction->operation = ARMV7_VMOV;
    break;
   case 9:
   case 11:
    instruction->operation = ARMV7_VORR;
    break;
   case 12:
   case 13:
   case 14:
   case 15:
    instruction->operation = ARMV7_VMOV;
    break;
  }

 }
 else
 {
  switch (decode.com.cmode)
  {
   case 0:
   case 2:
   case 4:
   case 6:
    instruction->operation = ARMV7_VMVN;
    break;
   case 1:
   case 3:
   case 5:
   case 7:
    instruction->operation = ARMV7_VBIC;
    break;
   case 8:
   case 10:
    instruction->operation = ARMV7_VMVN;
    break;
   case 9:
   case 11:
    instruction->operation = ARMV7_VBIC;
    break;
   case 12:
   case 13:
    instruction->operation = ARMV7_VMVN;
    break;
   case 14:
    instruction->operation = ARMV7_VMOV;
    break;
  }
 }
 instruction->operands[0].cls = OC_REG;
 instruction->operands[0].reg = (Register)(regMap[decode.vmov.q] + (((decode.vmov.d << 4) | decode.vmov.vd) >> decode.vmov.q));
 instruction->operands[1].cls = OC_IMM;
 if (simdExpandImm(
   decode.vmov.op,
   decode.vmov.cmode,
   (decode.vmov.i << 7) | (decode.vmov.imm3 << 4) | decode.vmov.imm4,
   &instruction->operands[1].imm64,
   &instruction->dataType,
   &instruction->operands[1].cls) == 0)
  return 1;
 return instruction->operation == ARMV7_UNDEFINED;
}
uint32_t armv7_floating_point_data_processing(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union{
  uint32_t value;
  struct{
   uint32_t opc4:4;
   uint32_t group1:2;
   uint32_t opc3:2;
   uint32_t sz:1;
   uint32_t group2:7;
   uint32_t opc2:4;
   uint32_t opc1:4;
   uint32_t group3:4;
   uint32_t cond:4;
  }com;
  struct{
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t op:1;
   uint32_t n:1;
   uint32_t sz:1;
   uint32_t group2:3;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t group3:2;
   uint32_t d:1;
   uint32_t group4:4;
   uint32_t t:1;
   uint32_t group5:4;
  }vmla;
  struct{
   uint32_t imm4l:4;
   uint32_t group1:4;
   uint32_t sz:1;
   uint32_t group2:3;
   uint32_t vd:4;
   uint32_t imm4h:4;
   uint32_t group3:2;
   uint32_t d:1;
   uint32_t group4:9;
  }vmov;
  struct{
   uint32_t imm4:4;
   uint32_t group1:1;
   uint32_t i:1;
   uint32_t group2:1;
   uint32_t sx:1;
   uint32_t sf:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t u:1;
   uint32_t group4:1;
   uint32_t op:1;
   uint32_t group5:3;
   uint32_t d:1;
   uint32_t group6:9;
  }vcvt;
  struct{
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t op:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t rm:2;
   uint32_t group4:4;
   uint32_t d:1;
   uint32_t group5:9;
  }vcvt2;
  struct{
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t t:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t op:1;
   uint32_t group4:5;
   uint32_t d:1;
   uint32_t group5:9;
  }vcvtt;
  struct{
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t op:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t group4:6;
   uint32_t d:1;
   uint32_t group5:9;
  }vrint;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t op:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t rm:2;
   uint32_t group4:4;
   uint32_t d:1;
   uint32_t group5:9;
  }vcvta;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t op:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t rm:2;
   uint32_t group4:4;
   uint32_t d:1;
   uint32_t group5:9;
  } vcvtr;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:1;
   uint32_t n:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t cc:2;
   uint32_t d:1;
   uint32_t group4:9;
  } vsel;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t op:1;
   uint32_t n:1;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t vn:4;
   uint32_t group4:2;
   uint32_t d:1;
   uint32_t group5:9;
  } vmax;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:2;
   uint32_t sz:1;
   uint32_t group3:3;
   uint32_t vd:4;
   uint32_t rm:2;
   uint32_t group4:4;
   uint32_t d:1;
   uint32_t group5:9;
  } vrint2;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)decode.com.cond;
 instruction->dataType = (DataType)(DT_F32 + decode.vmla.sz);
 uint32_t type = 0;
# 6400 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 switch (decode.com.opc1)
 {
  case 0:
  case 4:
   {
    static Operation operation[2] = {ARMV7_VMLA, ARMV7_VMLS};
    instruction->operation = operation[decode.vmla.op];
    type = 1;
   }
   break;
  case 1:
  case 5:
   {
    static Operation operation[2] = {ARMV7_VNMLS, ARMV7_VNMLA};
    instruction->operation = operation[decode.vmla.op];
    type = 1;
   }
   break;
  case 2:
  case 6:
   {
    static Operation operation[2] = {ARMV7_VMUL, ARMV7_VNMUL};
    instruction->operation = operation[decode.com.opc3 & 1];
    type = 1;
   }
   break;
  case 3:
  case 7:
   {
    static Operation operation[2] = {ARMV7_VADD, ARMV7_VSUB};
    instruction->operation = operation[decode.com.opc3 & 1];
    type = 1;
   }
   break;
  case 8:
  case 12:
   {
    static Operation operation[4] = {ARMV7_VDIV, ARMV7_UNDEFINED, ARMV7_VDIV, ARMV7_UNDEFINED};
    instruction->operation = operation[decode.com.opc3];
    type = 1;
   }
   break;
  case 9:
  case 13:
   {
    static Operation operation[2] = {ARMV7_VFNMS, ARMV7_VFNMA};
    instruction->operation = operation[decode.vmla.op];
    type = 1;
   }
   break;
  case 10:
  case 14:
   {
    static Operation operation[2] = {ARMV7_VFMA, ARMV7_VFMS};
    instruction->operation = operation[decode.vmla.op];
    type = 1;
   }
   break;
  case 11:
  case 15:
# 6490 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
   type = 1;
   static uint32_t fregMap[2] = {ARMV7_REG_S0, ARMV7_REG_D0};
   if ((decode.com.opc3 & 1) == 0)
   {
    instruction->operation = ARMV7_VMOV;
    if (decode.vmla.sz == 0)
    {
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmov.vd << 1) | decode.vmov.d));
     instruction->operands[1].cls = OC_FIMM32;
     instruction->operands[1].imm =
      VFPExpandImm32(decode.vmov.imm4h << 4 | decode.vmov.imm4l);
    }
    else
    {
     instruction->operands[0].cls = OC_REG;
     instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmov.d << 4) | decode.vmov.vd));
     instruction->operands[1].cls = OC_FIMM64;
     instruction->operands[1].imm64 =
      VFPExpandImm64(decode.vmov.imm4h << 4 | decode.vmov.imm4l);
    }
   }
   else
   {
    switch (decode.com.opc2)
    {
     case 0:
      {
       static OperandClass immMap[2] = {OC_FIMM32, OC_FIMM64};
       instruction->operands[0].cls = OC_REG;
       if (decode.com.opc3 == 1)
       {
        instruction->operation = ARMV7_VMOV;
        if (decode.vmla.sz == 0)
        {
         instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.vd << 1) | decode.vmla.d));
         instruction->operands[1].cls = immMap[decode.vmla.sz];
         instruction->operands[1].imm =
          VFPExpandImm32(decode.vmla.vn << 4 | decode.vmla.vm);
        }
        else
        {
         instruction->operands[0].reg = (Register)(ARMV7_REG_Q0 + (((decode.vmla.d << 4) | decode.vmla.vd) >> 1));
         instruction->operands[1].cls = immMap[decode.vmla.sz];
         instruction->operands[1].imm64 =
          VFPExpandImm64(decode.vmla.vn << 4 | decode.vmla.vm);
        }
       }
       else
       {
        instruction->operation = ARMV7_VABS;
        if (decode.vmla.sz == 0)
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
        }
        else
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.m << 4) | decode.vmla.vm));
        }
       }
      }
      break;
     case 1:
      {
       static Operation operation[4] = {
        ARMV7_UNDEFINED, ARMV7_VNEG,
        ARMV7_UNDEFINED, ARMV7_VSQRT,
       };
       instruction->operation = operation[decode.com.opc3];
       if (decode.vmla.sz == 0)
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
       }
       else
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.m << 4) | decode.vmla.vm));
       }
      }
      break;
     case 2:
     case 3:
      {
       static Operation operation[2] = {ARMV7_VCVTB, ARMV7_VCVTT};
       instruction->operation = operation[decode.vcvtt.t];
       static DataType dtMap[2][2] = {
        {DT_F16, DT_F32},
        {DT_F16, DT_F64}
       };
       instruction->dataType = dtMap[decode.vcvtt.sz][!decode.vcvtt.op];
       instruction->dataType2 = dtMap[decode.vcvtt.sz][decode.vcvtt.op];
       if (decode.vcvtt.sz == 0)
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vcvtt.vd << 1) | decode.vcvtt.d));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vcvtt.vm << 1) | decode.vcvtt.m));

       }
       else
       {
        if (decode.vcvtt.op == 0)
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vcvtt.d << 4) | decode.vcvtt.vd));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vcvtt.vm << 1) | decode.vcvtt.m));
        }
        else
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vcvtt.vd << 1) | decode.vcvtt.d));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vcvtt.m << 4) | decode.vcvtt.vm));
        }
       }
      }
      break;
     case 4:
      {
       static Operation operation[2] = {ARMV7_VCMP, ARMV7_VCMPE};
       instruction->operation = operation[decode.vmla.n];
       if (decode.vmla.sz == 0)
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
       }
       else
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.m << 4) | decode.vmla.vm));
       }
      }
      break;
     case 5:
      {
       static Operation operation[2] = {ARMV7_VCMP, ARMV7_VCMPE};
       instruction->operation = operation[decode.vmla.n];
       if (decode.vmla.sz == 0)
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
       }
       else
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
       }
       instruction->operands[1].cls = OC_FIMM32;
      }
      break;
     case 6:
      {
       static Operation operation[2] = {ARMV7_VRINTR, ARMV7_VRINTZ};
       instruction->operation = operation[decode.vrint.op];
       if (decode.vrint.sz == 0)
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vrint.vd << 1) | decode.vrint.d));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vrint.vm << 1) | decode.vrint.m));
       }
       else
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vrint.d << 4) | decode.vrint.vd));
        instruction->operands[1].cls = OC_REG;
        instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vrint.m << 4) | decode.vrint.vm));
       }
      }
      break;
     case 7:
      {
       static DataType dtMap[2] = {DT_F32, DT_F64};
       if (decode.com.opc3 == 3)
       {
        instruction->operation = ARMV7_VCVT;
        instruction->dataType = dtMap[!decode.vmla.sz];
        instruction->dataType2 = dtMap[decode.vmla.sz];
        if (decode.vmla.sz == 1)
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.m << 4) | decode.vmla.vm));
        }
        else
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
        }

       }
       else
       {
        instruction->operation = ARMV7_VRINTX;
        instruction->dataType = dtMap[decode.vmla.sz];
        if (decode.vmla.sz == 0)
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
        }
        else
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.m << 4) | decode.vmla.vm));
        }
       }
      }
      break;
     case 8:
      {
       instruction->operation = ARMV7_VCVT;
       static DataType dtMap1[2] = {DT_F32, DT_F64};
       static DataType dtMap2[2] = {DT_U32, DT_S32};
       instruction->dataType = dtMap1[decode.vcvtr.sz];
       instruction->dataType2 = dtMap2[decode.vcvtr.op];
       instruction->operands[1].cls = OC_REG;
       instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
       if (decode.vmla.sz == 0)
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
       }
       else
       {
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.d << 4) | decode.vmla.vd));
       }

      }
      break;
     case 12:
      {
# 6753 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
       if (decode.vmla.t == 0)
       {
        static Operation operation[2] = {ARMV7_VCVT, ARMV7_VCVTR};
        instruction->operation = operation[decode.vmla.op];
        static DataType dtMap[2] = {DT_F32, DT_F64};
        instruction->dataType = dtMap[!decode.vcvt.u];
        instruction->dataType2 = dtMap[decode.vcvt.u];
        if (decode.vmla.sz == 0)
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.vd << 1) | decode.vmla.d));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
        }
        else
        {
         instruction->operands[0].cls = OC_REG;
         instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.d << 4) | decode.vmla.vd));
         instruction->operands[1].cls = OC_REG;
         instruction->operands[1].reg = (Register)(ARMV7_REG_D0 + ((decode.vmla.m << 4) | decode.vmla.vm));
        }
       }
       else
       {
        Operation operation[2] = {ARMV7_VCVT, ARMV7_VCVTR};
        instruction->operation = operation[!decode.vcvtr.op];
        DataType dtMap2[2] = {DT_F32, DT_F64};
        instruction->dataType = DT_U32;
        instruction->dataType2 = dtMap2[decode.vcvta.sz];
        instruction->operands[0].cls = OC_REG;
        instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vcvta.vd << 1) | decode.vcvta.d));
        instruction->operands[1].cls = OC_REG;
        if (decode.vcvta.sz == 1)
         instruction->operands[1].reg = (Register)(fregMap[decode.vcvta.sz] +
          ((decode.vcvta.m << 4) | decode.vcvta.vm));
        else
         instruction->operands[1].reg = (Register)(fregMap[decode.vcvta.sz] +
          ((decode.vcvta.vm << 1) | decode.vcvta.m));
       }
      }
      break;
     case 13:
      {
       static Operation operation[2] = {ARMV7_VCVTR, ARMV7_VCVT};
       instruction->operation = operation[decode.vcvt.sx];
       static DataType dtMap2[2] = {DT_F32, DT_F64};
       instruction->dataType = DT_S32;
       instruction->dataType2 = dtMap2[decode.vcvta.sz];
       instruction->operands[0].cls = OC_REG;
       instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vcvta.vd << 1) | decode.vcvta.d));
       instruction->operands[1].cls = OC_REG;
       if (decode.vcvta.sz == 1)
        instruction->operands[1].reg = (Register)(fregMap[decode.vcvta.sz] +
         ((decode.vcvta.m << 4) | decode.vcvta.vm));
       else
        instruction->operands[1].reg = (Register)(fregMap[decode.vcvta.sz] +
         ((decode.vcvta.vm << 1) | decode.vcvta.m));
      }
      break;
     case 10:
     case 11:
      {
       static DataType dt[2][2] = {
        {DT_S16, DT_U16},
        {DT_S32, DT_U32}
       };
       static DataType fdt[2] = {DT_F32, DT_F64};
       instruction->operation = ARMV7_VCVT;
       if (decode.vmla.op == 0)
       {
        instruction->dataType = dt[decode.vcvt.sx][decode.vcvt.u];
        instruction->dataType2 = fdt[decode.vcvt.sf];
       }
       else
       {
        instruction->dataType = fdt[decode.vcvt.sf];
        instruction->dataType2 = dt[decode.vcvt.sx][decode.vcvt.u];
       }
       uint32_t reg;
       if (decode.vcvt.sf == 1)
       {
        reg = fregMap[decode.vcvt.sf] + ((decode.vcvt.d << 4) | decode.vcvt.vd);
       }
       else
       {
        reg = fregMap[decode.vcvt.sf] + ((decode.vcvt.vd << 1) | decode.vcvt.d);
       }
       instruction->operands[0].cls = OC_REG;
       instruction->operands[0].reg = (Register)reg;
       instruction->operands[1].cls = OC_REG;
       instruction->operands[1].reg = (Register)reg;
       instruction->operands[2].cls = OC_IMM;
       instruction->operands[2].imm = (16 << decode.vcvt.sx) - ((decode.vcvt.imm4 << 1) | decode.vcvt.i);

      }
      break;
     case 14:
     case 15:
      {






       static DataType dt[2][2] = {
        {DT_S16, DT_U16},
        {DT_S32, DT_U32}
       };
       static DataType fdt[2] = {DT_F32, DT_F64};
       instruction->operation = ARMV7_VCVT;
       if (decode.vmla.op == 1)
       {
        instruction->dataType = dt[decode.vcvt.sx][decode.vcvt.u];
        instruction->dataType2 = fdt[decode.vcvt.sf];
       }
       else
       {
        instruction->dataType = fdt[decode.vcvt.sf];
        instruction->dataType2 = dt[decode.vcvt.sx][decode.vcvt.u];
       }
       uint32_t reg;
       if (decode.vcvt.sf == 1)
       {
        reg = fregMap[decode.vcvt.sf] + ((decode.vcvt.d << 4) | decode.vcvt.vd);
       }
       else
       {
        reg = fregMap[decode.vcvt.sf] + ((decode.vcvt.vd << 1) | decode.vcvt.d);
       }
       instruction->operands[0].cls = OC_REG;
       instruction->operands[0].reg = (Register)reg;
       instruction->operands[1].cls = OC_REG;
       instruction->operands[1].reg = (Register)reg;
       instruction->operands[2].cls = OC_IMM;
       instruction->operands[2].imm = (16 << decode.vcvt.sx) - ((decode.vcvt.imm4 << 1) | decode.vcvt.i);
      }
      break;
    }
   }
   return instruction->operation == ARMV7_UNDEFINED;
 }
# 6968 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
 uint32_t i = 0;
 if (decode.vmla.sz == 1)
 {
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)(ARMV7_REG_D0 + (decode.vmla.vd | (decode.vmla.d << 4)));
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i].reg = (Register)(ARMV7_REG_D0 + (decode.vmla.vn | (decode.vmla.n << 4)));
  i += type;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i].reg = (Register)(ARMV7_REG_D0 + (decode.vmla.vm | (decode.vmla.m << 4)));
 }
 else
 {
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i++].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vd << 1) | decode.vmla.d));
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vn << 1) | decode.vmla.n));
  i += type;
  instruction->operands[i].cls = OC_REG;
  instruction->operands[i].reg = (Register)(ARMV7_REG_S0 + ((decode.vmla.vm << 1) | decode.vmla.m));
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

static uint32_t reg_start_and_size_to_list(uint32_t start, uint32_t size)
{
 if (size > 32)
  size = 32 - start;
 return ((1 << size) - 1) << start;

}

uint32_t armv7_extension_register_load_store(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 union {
  uint32_t value;
  struct {
   uint32_t group1:16;
   uint32_t rn:4;
   uint32_t opcode:5;
   uint32_t group2:3;
   uint32_t cond:4;
  }com;
  struct {
   uint32_t vm:4;
   uint32_t op:4;
   uint32_t c:1;
   uint32_t group2:19;
   uint32_t cond:4;
  }vmov;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:6;
   uint32_t rt:4;
   uint32_t rt2:2;
   uint32_t op:1;
   uint32_t group3:7;
   uint32_t cond:4;
  }vmov1;
  struct {
   uint32_t imm8:8;
   uint32_t size:1;
   uint32_t group1:3;
   uint32_t vd:4;
   uint32_t rn:4;
   uint32_t group2:1;
   uint32_t w:1;
   uint32_t d:1;
   uint32_t u:1;
   uint32_t p:1;
   uint32_t group3:3;
   uint32_t cond:4;
  }vstm;
 }decode;
 (void)address;

 decode.value = instructionValue;
 instruction->cond = (Condition)decode.com.cond;
 switch (decode.com.opcode)
 {
  case 4:
  case 5:
   {
    instruction->operation = ARMV7_VMOV;
    uint32_t fregMap[2] = {ARMV7_REG_S0, ARMV7_REG_R0};
    uint32_t m = (decode.vmov1.vm << 1) | decode.vmov1.m;

    if (decode.vmov.c == 0)
    {
     if (decode.vmov1.op == 1)
     {
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)(fregMap[decode.vmov.op] + (m));
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)(fregMap[decode.vmov.op] + (m+1));
      instruction->operands[2].cls = OC_REG;
      instruction->operands[2].reg = (Register)(fregMap[!decode.vmov.op] + (decode.vmov.vm));
      instruction->operands[3].cls = OC_REG;
      instruction->operands[3].reg = (Register)(fregMap[!decode.vmov.op] + (decode.vmov.vm + 1));
     }
     else
     {
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)(fregMap[!decode.vmov.op] + (decode.vmov.vm));
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)(fregMap[!decode.vmov.op] + (decode.vmov.vm + 1));
      instruction->operands[2].cls = OC_REG;
      instruction->operands[2].reg = (Register)(fregMap[decode.vmov.op] + (m));
      instruction->operands[3].cls = OC_REG;
      instruction->operands[3].reg = (Register)(fregMap[decode.vmov.op] + (m+1));
     }
    }
    else
    {
     if (decode.vmov1.op == 1)
     {
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)m;
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)decode.vmov1.rt;
      instruction->operands[2].cls = OC_REG;
      instruction->operands[2].reg = (Register)decode.vmov1.rt2;
     }
     else
     {
      instruction->operands[0].cls = OC_REG;
      instruction->operands[0].reg = (Register)decode.vmov1.rt;
      instruction->operands[1].cls = OC_REG;
      instruction->operands[1].reg = (Register)decode.vmov1.rt2;
      instruction->operands[2].cls = OC_REG;
      instruction->operands[2].reg = (Register)m;
     }
    }
   }
   break;
  case 18:
  case 22:
  case 8:
  case 10:
  case 12:
  case 14:
   {
    static OperandClass regListType[2] = {OC_REG_LIST_SINGLE, OC_REG_LIST_DOUBLE};
    if ((decode.vstm.p == 0 && decode.vstm.u == 0 && decode.vstm.w == 0) ||
     ((decode.vstm.imm8 & 1) == 1 && decode.vstm.size == 1))
    {
     static Operation operation[2][2] = {
      {ARMV7_UNDEFINED, ARMV7_FSTMIAX},
      {ARMV7_FSTMDBX, ARMV7_UNDEFINED}
     };
     instruction->operation = operation[decode.vstm.p][decode.vstm.u];
    }
    else if (decode.vstm.p == 1 && decode.vstm.u == 0 &&
      decode.vstm.w == 1 && decode.vstm.rn == 13)
    {
     instruction->operation = ARMV7_VPUSH;
    }
    else
    {
     static Operation operation[2][2] = {
      {ARMV7_UNDEFINED, ARMV7_VSTMIA},
      {ARMV7_VSTMDB, ARMV7_UNDEFINED}
     };
     instruction->operation = operation[decode.vstm.p][decode.vstm.u];
    }
    uint32_t i = 0;
    if (instruction->operation != ARMV7_VPUSH)
    {
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i].flags.wb = decode.vstm.w;
     instruction->operands[i++].reg = (Register)decode.vstm.rn;
    }
    instruction->operands[i].cls = regListType[decode.vstm.size];
    instruction->operands[i].flags.hasElements = 0;
    uint32_t d = 0;
    if (decode.vstm.size == 0)
     d = (decode.vstm.vd << 1) | decode.vstm.d;
    else
     d = (decode.vstm.d << 4) | decode.vstm.vd;

    instruction->operands[i].reg = (Register)reg_start_and_size_to_list(d, decode.vstm.imm8 >> decode.vstm.size);
   }
   break;
  case 16:
  case 20:
  case 24:
  case 28:
   instruction->operation = ARMV7_VSTR;
   if (decode.vstm.size == 0)
   {
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vstm.vd << 1) | decode.vstm.d));
   }
   else
   {
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vstm.d << 4) | decode.vstm.vd));
   }
   instruction->operands[1].cls = OC_MEM_IMM;
   instruction->operands[1].reg = (Register)decode.vstm.rn;
   instruction->operands[1].imm = decode.vstm.imm8 << 2;
   instruction->operands[1].flags.add = decode.vstm.u;
   break;
  case 9:
  case 11:
  case 13:
  case 15:
  case 19:
  case 23:
   {
    static OperandClass regListType[2] = {OC_REG_LIST_SINGLE, OC_REG_LIST_DOUBLE};
    if ((decode.vstm.p == 0 && decode.vstm.u == 0 && decode.vstm.w == 0) ||
     ((decode.vstm.imm8 & 1) == 1 && decode.vstm.size == 1))
    {
     static Operation operation[2][2] = {
      {ARMV7_UNDEFINED, ARMV7_FLDMIAX},
      {ARMV7_FLDMDBX, ARMV7_UNDEFINED}
     };
     instruction->operation = operation[decode.vstm.p][decode.vstm.u];
    }
    else if (decode.vstm.p == 0 && decode.vstm.u == 1 &&
      decode.vstm.w == 1 && decode.vstm.rn == 13)
    {
     instruction->operation = ARMV7_VPOP;
    }
    else if (decode.vstm.p == 1 && decode.vstm.w == 0)
    {
     instruction->operation = ARMV7_VLDR;
    }
    else
    {
     static Operation operation[2][2] = {
      {ARMV7_UNDEFINED, ARMV7_VLDMIA},
      {ARMV7_VLDMDB, ARMV7_UNDEFINED}
     };
     instruction->operation = operation[decode.vstm.p][decode.vstm.u];
    }
    uint32_t i = 0;
    if (instruction->operation != ARMV7_VPOP)
    {
     instruction->operands[i].cls = OC_REG;
     instruction->operands[i].flags.wb = decode.vstm.w;
     instruction->operands[i++].reg = (Register)decode.vstm.rn;
    }
    instruction->operands[i].cls = regListType[decode.vstm.size];
    instruction->operands[i].flags.hasElements = 0;
    uint32_t d = 0;
    if (decode.vstm.size == 0)
     d = (decode.vstm.vd << 1) | decode.vstm.d;
    else
     d = (decode.vstm.d << 4) | decode.vstm.vd;

    instruction->operands[i].reg = (Register)reg_start_and_size_to_list(d, decode.vstm.imm8 >> decode.vstm.size);
   }
   break;
  case 17:
  case 21:
  case 25:
  case 29:
   instruction->operation = ARMV7_VLDR;
   if (decode.vstm.size == 0)
   {
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_S0 + ((decode.vstm.vd << 1) | decode.vstm.d));
   }
   else
   {
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(ARMV7_REG_D0 + ((decode.vstm.d << 4) | decode.vstm.vd));
   }
   instruction->operands[1].cls = OC_MEM_IMM;
   instruction->operands[1].reg = (Register)decode.vstm.rn;
   instruction->operands[1].imm = decode.vstm.imm8 << 2;
   instruction->operands[1].flags.add = decode.vstm.u;
   break;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_simd_load_store(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:8;
   uint32_t b:4;
   uint32_t group2:9;
   uint32_t l:1;
   uint32_t group3:1;
   uint32_t a:1;
   uint32_t group4:8;
  } com;
  struct {
   uint32_t rm:4;
   uint32_t align:2;
   uint32_t size:2;
   uint32_t type:4;
   uint32_t vd:4;
   uint32_t rn:4;
   uint32_t group1:2;
   uint32_t d:1;
   uint32_t group2:9;
  } vst;
  struct {
   uint32_t rm:4;
   uint32_t index_align:4;
   uint32_t group1:2;
   uint32_t size:2;
   uint32_t vd:4;
   uint32_t rn:4;
   uint32_t group2:2;
   uint32_t d:1;
   uint32_t group3:9;
  } v2;
  struct {
   uint32_t rm:4;
   uint32_t a:1;
   uint32_t t:1;
   uint32_t size:2;
   uint32_t group1:4;
   uint32_t vd:4;
   uint32_t rn:4;
   uint32_t group2:2;
   uint32_t d:1;
   uint32_t group3:9;
  } v3;
 } decode;
 decode.value = instructionValue;
 instruction->cond = (Condition)COND_NONE;
 static DataType dtMap[4] = {DT_8, DT_16, DT_32, DT_64};
 uint32_t type = -1;
 uint32_t regs = 1;
 if (decode.com.l == 0)
 {
  if (decode.com.a == 0)
  {
   switch (decode.com.b)
   {
    case 2:
    case 6:
    case 7:
    case 10:
     instruction->operation = ARMV7_VST1;
     type = 0;
     break;
    case 3:
    case 8:
    case 9:
     instruction->operation = ARMV7_VST2;
     type = 1;
     break;
    case 4:
    case 5:
     instruction->operation = ARMV7_VST3;
     type = 2;
     break;
    case 0:
    case 1:
     instruction->operation = ARMV7_VST4;
     type = 3;
     break;
   }
  }
  else
  {
   switch (decode.com.b)
   {
    case 0:
    case 4:
    case 8:
     instruction->operation = ARMV7_VST1;
     type = 4;
     break;
    case 1:
    case 5:
    case 9:
     instruction->operation = ARMV7_VST2;
     type = 5;
     break;
    case 2:
    case 6:
    case 10:
     instruction->operation = ARMV7_VST3;
     type = 6;
     break;
    case 3:
    case 7:
    case 11:
     instruction->operation = ARMV7_VST4;
     type = 7;
     break;
   }
  }
 }
 else
 {
  if (decode.com.a == 0)
  {
   switch (decode.com.b)
   {
    case 2:
    case 6:
    case 7:
    case 10:
     instruction->operation = ARMV7_VLD1;
     type = 0;
     break;
    case 3:
    case 8:
    case 9:
     instruction->operation = ARMV7_VLD2;
     type = 1;
     break;
    case 4:
    case 5:
     instruction->operation = ARMV7_VLD3;
     type = 2;
     break;
    case 0:
    case 1:
     instruction->operation = ARMV7_VLD4;
     type = 3;
     break;
   }
  }
  else
  {
   switch (decode.com.b)
   {
    case 0:
    case 4:
    case 8:
     instruction->operation = ARMV7_VLD1;
     type = 4;
     break;
    case 12:
     instruction->operation = ARMV7_VLD1;
     type = 8;
     break;
    case 1:
    case 5:
    case 9:
     instruction->operation = ARMV7_VLD2;
     type = 5;
     break;
    case 13:
     instruction->operation = ARMV7_VLD2;
     type = 9;
     break;
    case 2:
    case 6:
    case 10:
     instruction->operation = ARMV7_VLD3;
     type = 6;
     break;
    case 14:
     instruction->operation = ARMV7_VLD3;
     type = 10;
     break;
    case 3:
    case 7:
    case 11:
     instruction->operation = ARMV7_VLD4;
     type = 7;
     break;
    case 15:
     instruction->operation = ARMV7_VLD4;
     type = 11;
     break;
   }
  }
 }

 switch (type)
 {
  case 0:
   {
   instruction->dataType = dtMap[decode.vst.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].flags.hasElements = 0;
   uint32_t d = (decode.vst.d << 4) | decode.vst.vd;
   if (decode.vst.type == 7)
   {
    instruction->operands[0].reg = (Register)(1 << d);
    if (((decode.vst.align >> 1) & 1) == 1)
     return 1;
   }
   else if (decode.vst.type == 10)
   {
    instruction->operands[0].reg = (Register)(3 << d);
    if ((decode.vst.align & 3) == 3)
     return 1;
   }
   else if (decode.vst.type == 6)
   {
    instruction->operands[0].reg = (Register)(7 << d);
   }
   else if (decode.vst.type == 2)
   {
    instruction->operands[0].reg = (Register)(15 << d);
   }
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.vst.rn;
   instruction->operands[1].flags.wb = decode.vst.rm == 13;
   if (decode.vst.align == 0)
    instruction->operands[1].imm = 0;
   else
    instruction->operands[1].imm = 32 << decode.vst.align;
   if (decode.vst.rm != 15 && decode.vst.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.vst.rm;
   }
   }
   break;
  case 1:
   {
   switch (decode.vst.type)
   {
    case 8:
     if (decode.vst.align == 3)
      return 1;
     regs = 3 << ((decode.vst.d << 4) | decode.vst.vd);
     break;
    case 9:
     if (decode.vst.align == 3)
      return 1;
     regs = 5 << ((decode.vst.d << 4) | decode.vst.vd);
     break;
    case 3:
     regs = 15 << ((decode.vst.d << 4) | decode.vst.vd);
     break;
   }

   instruction->dataType = dtMap[decode.vst.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].flags.hasElements = 0;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.vst.rn;
   instruction->operands[1].flags.wb = decode.vst.rm == 13;
   if (decode.vst.align == 0)
    instruction->operands[1].imm = 0;
   else
    instruction->operands[1].imm = 32 << decode.vst.align;
   if (decode.vst.rm != 15 && decode.vst.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.vst.rm;
   }
   }
   break;
  case 2:
   if (decode.vst.type == 4)
    regs = 7 << ((decode.vst.d << 4) | decode.vst.vd);
   else if (decode.vst.type == 5)
    regs = 21 << ((decode.vst.d << 4) | decode.vst.vd);

   instruction->dataType = dtMap[decode.vst.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].flags.hasElements = 0;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.vst.rn;
   instruction->operands[1].flags.wb = decode.vst.rm == 13;
   if (decode.vst.align == 0)
    instruction->operands[1].imm = 0;
   else
    instruction->operands[1].imm = 32 << decode.vst.align;
   if (decode.vst.rm != 15 && decode.vst.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.vst.rm;
   }
   break;
  case 3:
   if (decode.vst.type == 0)
    regs = ((0xf << (((decode.vst.d << 4) | decode.vst.vd))) | (0xf >> (32-(((decode.vst.d << 4) | decode.vst.vd)))));
   else if (decode.vst.type == 1)
    regs = ((0x55 << (((decode.vst.d << 4) | decode.vst.vd))) | (0x55 >> (32-(((decode.vst.d << 4) | decode.vst.vd)))));

   instruction->dataType = dtMap[decode.vst.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].flags.hasElements = 0;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.vst.rn;
   instruction->operands[1].flags.wb = decode.vst.rm == 13;
   if (decode.vst.align == 0)
    instruction->operands[1].imm = 0;
   else
    instruction->operands[1].imm = 32 << decode.vst.align;
   if (decode.vst.rm != 15 && decode.vst.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.vst.rm;
   }
   break;
  case 4:
   switch (decode.v2.size)
   {
    case 0:
     if ((decode.v2.index_align & 1) != 0)
      return 1;
     regs = 1 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 1) & 7;
     break;
    case 1:
     if ((decode.v2.index_align & 2) != 0)
      return 1;
     if ((decode.v2.index_align & 3) == 1)
      instruction->operands[1].imm = 16;

     regs = 1 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 2) & 3;
     break;
    case 2:
     if ((decode.v2.index_align & 4) != 0)
      return 1;
     if ((decode.v2.index_align & 7) == 3)
      instruction->operands[1].imm = 32;
     regs = 1 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 3) & 1;
     break;
    case 3:
     return 1;
   }
   instruction->dataType = dtMap[decode.v2.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v2.rn;
   instruction->operands[1].flags.wb = decode.v2.rm == 13;
   if (decode.v2.rm != 15 && decode.v2.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v2.rm;
   }
   break;
  case 5:
   switch (decode.v2.size)
   {
    case 0:
     if ((decode.v2.index_align & 1) == 1)
      instruction->operands[1].imm = 16;

     regs = 3 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 1) & 7;
     break;
    case 1:
     if ((decode.v2.index_align & 1) == 1)
      instruction->operands[1].imm = 32;

     if (((decode.v2.index_align >> 1) & 1) == 1)
      regs = 5 << ((decode.v2.d << 4) | decode.v2.vd);
     else
      regs = 3 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 2) & 3;
     break;
    case 2:
     if ((decode.v2.index_align & 3) == 1)
      instruction->operands[1].imm = 64;

     if (((decode.v2.index_align >> 2) & 1) == 1)
      regs = 5 << ((decode.v2.d << 4) | decode.v2.vd);
     else
      regs = 3 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 3) & 1;
     break;
    case 3:
     return 1;
   }
   instruction->dataType = dtMap[decode.v2.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v2.rn;
   instruction->operands[1].flags.wb = decode.v2.rm == 13;
   if (decode.v2.rm != 15 && decode.v2.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v2.rm;
   }
   break;
  case 6:
   switch (decode.v2.size)
   {
    case 0:
     if ((decode.v2.index_align & 1) == 1)
      instruction->operands[1].imm = 16;

     regs = 7 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 1) & 7;
     break;
    case 1:
     if ((decode.v2.index_align & 1) == 1)
      instruction->operands[1].imm = 32;

     if (((decode.v2.index_align >> 1) & 1) == 1)
      regs = 21 << ((decode.v2.d << 4) | decode.v2.vd);
     else
      regs = 7 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 2) & 3;
     break;
    case 2:
     if ((decode.v2.index_align & 3) == 1)
      instruction->operands[1].imm = 64;

     if (((decode.v2.index_align >> 2) & 1) == 1)
      regs = 21 << ((decode.v2.d << 4) | decode.v2.vd);
     else
      regs = 7 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 3) & 1;
     break;
    case 3:
     return 1;
   }
   instruction->dataType = dtMap[decode.v2.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v2.rn;
   instruction->operands[1].flags.wb = decode.v2.rm == 13;
   if (decode.v2.rm != 15 && decode.v2.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v2.rm;
   }
   break;
  case 7:
   switch (decode.v2.size)
   {
    case 0:
     if ((decode.v2.index_align & 1) == 1)
      instruction->operands[1].imm = 32;

     regs = 15 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 1) & 7;
     break;
    case 1:
     if ((decode.v2.index_align & 1) == 1)
      instruction->operands[1].imm = 64;

     if (((decode.v2.index_align >> 1) & 1) == 1)
      regs = 85 << ((decode.v2.d << 4) | decode.v2.vd);
     else
      regs = 15 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 2) & 3;
     break;
    case 2:
     if ((decode.v2.index_align & 3) == 1)
      instruction->operands[1].imm = 64;
     else if ((decode.v2.index_align & 3) == 2)
      instruction->operands[1].imm = 128;

     if (((decode.v2.index_align >> 2) & 1) == 1)
      regs = 85 << ((decode.v2.d << 4) | decode.v2.vd);
     else
      regs = 15 << ((decode.v2.d << 4) | decode.v2.vd);
     instruction->operands[0].imm = (decode.v2.index_align >> 3) & 1;
     break;
    case 3:
     return 1;
   }
   instruction->dataType = dtMap[decode.v2.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)regs;
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v2.rn;
   instruction->operands[1].flags.wb = decode.v2.rm == 13;
   if (decode.v2.rm != 15 && decode.v2.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v2.rm;
   }
   break;
  case 8:
   {
   static uint32_t regNumMap[2] = {1,3};
   instruction->dataType = dtMap[decode.v3.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)(regNumMap[decode.v3.t] << ((decode.v3.d << 4) | decode.v3.vd));
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[0].flags.emptyElement = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v3.rn;
   instruction->operands[1].flags.wb = decode.v3.rm == 13;
   if (decode.v3.rm != 15 && decode.v3.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v3.rm;
   }
   }
   break;
  case 9:
   {
   static uint32_t regNumMap[2] = {3,5};
   instruction->dataType = dtMap[decode.v3.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)(regNumMap[decode.v3.t] << ((decode.v3.d << 4) | decode.v3.vd));
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[0].flags.emptyElement = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v3.rn;
   instruction->operands[1].flags.wb = decode.v3.rm == 13;
   if (decode.v3.rm != 15 && decode.v3.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v3.rm;
   }
   if ((decode.vst.align & 1) == 1)
    instruction->operands[1].imm = 16 << decode.vst.size;
   }
   break;
  case 10:
   {
   static uint32_t regNumMap[2] = {7,21};
   instruction->dataType = dtMap[decode.v3.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)(regNumMap[decode.v3.t] << ((decode.v3.d << 4) | decode.v3.vd));
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[0].flags.emptyElement = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v3.rn;
   instruction->operands[1].flags.wb = decode.v3.rm == 13;
   if (decode.v3.rm != 15 && decode.v3.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v3.rm;
   }
   }
   break;
  case 11:
   {
   static uint32_t regNumMap[2] = {15,85};
   instruction->dataType = dtMap[decode.v3.size];
   instruction->operands[0].cls = OC_REG_LIST_DOUBLE;
   instruction->operands[0].reg = (Register)(regNumMap[decode.v3.t] << ((decode.v3.d << 4) | decode.v3.vd));
   instruction->operands[0].flags.hasElements = 1;
   instruction->operands[0].flags.emptyElement = 1;
   instruction->operands[1].cls = OC_MEM_ALIGNED;
   instruction->operands[1].reg = (Register)decode.v3.rn;
   instruction->operands[1].flags.wb = decode.v3.rm == 13;
   if (decode.v3.rm != 15 && decode.v3.rm != 13)
   {
    instruction->operands[2].cls = OC_REG;
    instruction->operands[2].reg = (Register)decode.v3.rm;
   }
   if ((decode.vst.align & 1) == 1)
   {
    if (decode.vst.size == 0)
     instruction->operands[1].imm = 32;
    else if (decode.vst.size < 3)
     instruction->operands[1].imm = 64;
    else
     instruction->operands[0].imm = 128;
   }
   }
   break;
  default:
   return 1;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_transfers(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:5;
   uint32_t b:2;
   uint32_t group2:1;
   uint32_t c:1;
   uint32_t group3:11;
   uint32_t l:1;
   uint32_t a:3;
   uint32_t group4:4;
   uint32_t cond:4;
  } com;
  struct {
   uint32_t group1:12;
   uint32_t rt:4;
   uint32_t reg:4;
   uint32_t group2:12;
  } vmsr;
  struct {
   uint32_t group1:7;
   uint32_t n:1;
   uint32_t group2:4;
   uint32_t rt:4;
   uint32_t vn:4;
   uint32_t op:1;
   uint32_t group3:11;
  } vmov;
  struct {
   uint32_t group1:5;
   uint32_t opc2:2;
   uint32_t d:1;
   uint32_t group2:4;
   uint32_t rt:4;
   uint32_t vd:4;
   uint32_t group3:1;
   uint32_t opc1:2;
   uint32_t u:1;
   uint32_t group4:8;
  } vmov2;
  struct {
   uint32_t group1:5;
   uint32_t e:1;
   uint32_t group2:1;
   uint32_t d:1;
   uint32_t group3:4;
   uint32_t rt:4;
   uint32_t vd:4;
   uint32_t group4:1;
   uint32_t q:1;
   uint32_t b:1;
   uint32_t group5:9;
  } vdup;
 } decode;

 decode.value = instructionValue;
 instruction->cond = (Condition)decode.com.cond;
 if (decode.com.c == 0)
 {
  if (decode.com.a == 0)
  {
   instruction->operation = ARMV7_VMOV;
   instruction->operands[decode.vmov.op].cls = OC_REG;
   instruction->operands[decode.vmov.op].reg = (Register)(ARMV7_REG_S0 + (((decode.vmov.vn << 1) | decode.vmov.n)));
   instruction->operands[!decode.vmov.op].cls = OC_REG;
   instruction->operands[!decode.vmov.op].reg = (Register)decode.vmov.rt;
  }
  else if (decode.com.a == 7)
  {
   static SpecRegister regs[16] = {
    REGS_FPSID,
    REGS_FPSCR,
    REGS_END,
    REGS_END,
    REGS_END,
    REGS_MVFR2,
    REGS_MVFR1,
    REGS_MVFR0,
    REGS_FPEXC,
    REGS_FPINST,
    REGS_FPINST2,
    REGS_END,
    REGS_END,
    REGS_END,
    REGS_END,
    REGS_END,
   };
   static Operation operation[2] = {ARMV7_VMSR, ARMV7_VMRS};
   instruction->operation = operation[decode.com.l];
   instruction->operands[decode.com.l].cls = OC_REG_SPEC;
   instruction->operands[decode.com.l].regs = regs[decode.vmsr.reg];
   if (instruction->operands[decode.com.l].regs == REGS_END)

    return 1;
   if (instruction->operands[decode.com.l].regs == REGS_FPSCR && decode.vmsr.rt == 15)
   {
    instruction->operands[!decode.com.l].cls = OC_REG_SPEC;
    instruction->operands[!decode.com.l].regs = REGS_APSR_NZCV;
   }
   else
   {
    instruction->operands[!decode.com.l].cls = OC_REG;
    instruction->operands[!decode.com.l].reg = (Register)decode.vmsr.rt;
   }
  }
 }
 else
 {
  if (decode.com.a < 4 || decode.com.l == 1)
  {
   instruction->operation = ARMV7_VMOV;
   instruction->operands[decode.com.l].cls = OC_REG;
   instruction->operands[decode.com.l].reg = (Register)(ARMV7_REG_D0 + (((decode.vmov2.d << 4) | decode.vmov2.vd)));
   instruction->operands[decode.com.l].flags.hasElements = 1;
   if (decode.com.l == 0)
   {
    switch ((decode.vmov2.opc1 << 2) | decode.vmov2.opc2)
    {
     case 8: case 9: case 10: case 11:
     case 12: case 13: case 14: case 15:
      instruction->operands[decode.com.l].imm = ((decode.vmov2.opc1 & 1) << 2) | decode.vmov2.opc2;
      instruction->dataType = DT_8;
      break;
     case 1: case 3: case 5: case 7:
      instruction->operands[decode.com.l].imm =
       ((decode.vmov2.opc1 & 1) << 1) | ((decode.vmov2.opc2 >> 1) & 1);
      instruction->dataType = DT_16;
      break;
     case 0: case 4:
      instruction->operands[decode.com.l].imm = decode.vmov2.opc1 & 1;
      instruction->dataType = DT_32;
      break;
     case 2: case 6:
      return 1;
    }
   }
   else
   {
    uint32_t opc1_1 = (decode.vmov2.opc1 >> 1) & 1;
    uint32_t opc2_0 = decode.vmov2.opc2 & 1;
    uint32_t u = decode.vmov2.u;
    if (u == 0)
    {
     if (u == 0 && opc1_1 == 1)
     {
      instruction->dataType = DT_S8;
      instruction->operands[decode.com.l].imm =
       ((decode.vmov2.opc1 & 1) << 2) | decode.vmov2.opc2;
     }
     else if (u == 0 && opc1_1 == 0 && opc2_0 == 1)
     {
      instruction->dataType = DT_S16;
      instruction->operands[decode.com.l].imm =
       ((decode.vmov2.opc1 & 1) << 1) | ((decode.vmov2.opc2 >> 1) & 1);
     }
     else if (u == 0 && opc1_1 == 0 && decode.vmov2.opc2 == 0)
     {
      instruction->dataType = DT_32;
      instruction->operands[decode.com.l].imm = decode.vmov2.opc1 & 1;
     }
    }
    else
    {
     if (opc1_1 == 1)
     {
      instruction->dataType = DT_U8;
      instruction->operands[decode.com.l].imm =
       ((decode.vmov2.opc1 & 1) << 2) | decode.vmov2.opc2;
     }
     else if (opc1_1 == 0 && opc2_0 == 1)
     {
      instruction->dataType = DT_U16;
      instruction->operands[decode.com.l].imm =
       ((decode.vmov2.opc1 & 1) << 1) | ((decode.vmov2.opc2 >> 1) & 1);
     }
    }
   }
   instruction->operands[!decode.com.l].cls = OC_REG;
   instruction->operands[!decode.com.l].reg = (Register)decode.vmov2.rt;
  }
  else
  {
   if (decode.com.b < 2)
   {
    instruction->operation = ARMV7_VDUP;
    instruction->dataType = (DataType)(DT_32 - ((decode.vdup.b << 1) | decode.vdup.e));
    instruction->operands[0].cls = OC_REG;
    instruction->operands[0].reg = (Register)(regMap[decode.vdup.q] + (((decode.vdup.d << 4) | decode.vdup.vd) >> decode.vdup.q));
    instruction->operands[1].cls = OC_REG;
    instruction->operands[1].reg = (Register)decode.vdup.rt;
   }
  }
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

uint32_t armv7_64_bit_transfers(uint32_t instructionValue, Instruction* restrict instruction, uint32_t address)
{

 (void)address;
 union {
  uint32_t value;
  struct {
   uint32_t group1:4;
   uint32_t one:1;
   uint32_t op:1;
   uint32_t zero:2;
   uint32_t c:1;
   uint32_t group2:17;
   uint32_t cond:4;
  } com;
  struct {
   uint32_t vm:4;
   uint32_t group1:1;
   uint32_t m:1;
   uint32_t group2:6;
   uint32_t rt:4;
   uint32_t rt2:4;
   uint32_t op:1;
   uint32_t group3:7;
   uint32_t cond:4;
  } vmov1;
 } decode;
 decode.value = instructionValue;
 if (decode.com.zero != 0 || decode.com.one != 1)
  return 1;

 instruction->operation = ARMV7_VMOV;
 if (decode.com.c == 0)
 {


  static uint8_t entries[2][4] = {{0,1,2,3}, {2,3,0,1}};
  instruction->operands[entries[decode.vmov1.op][0]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][0]].reg = (Register)(ARMV7_REG_S0 + ((decode.vmov1.vm << 1) | decode.vmov1.m));
  instruction->operands[entries[decode.vmov1.op][1]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][1]].reg = (Register)(ARMV7_REG_S0 + (((decode.vmov1.vm << 1) | decode.vmov1.m) + 1));
  instruction->operands[entries[decode.vmov1.op][2]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][2]].reg = (Register)decode.vmov1.rt;
  instruction->operands[entries[decode.vmov1.op][3]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][3]].reg = (Register)decode.vmov1.rt2;
 }
 else
 {


  static uint8_t entries[2][3] = {{0,1,2}, {2,0,1}};
  instruction->operands[entries[decode.vmov1.op][0]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][0]].reg = (Register)(ARMV7_REG_D0 + ((decode.vmov1.m << 4) | decode.vmov1.vm));
  instruction->operands[entries[decode.vmov1.op][1]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][1]].reg = (Register)decode.vmov1.rt;
  instruction->operands[entries[decode.vmov1.op][2]].cls = OC_REG;
  instruction->operands[entries[decode.vmov1.op][2]].reg = (Register)decode.vmov1.rt2;
 }
 return instruction->operation == ARMV7_UNDEFINED;
}

static
const char* get_operation(Operation operation)
{
 if (operation > ARMV7_UNDEFINED && operation < ARMV7_END_INSTRUCTION)
  return operationString[operation];
 return "";
}

const char* get_vector_data_type(DataType dataType)
{
 if (dataType >= DT_NONE && dataType < DT_END)
  return dataTypeString[dataType];
 return "";
}

static
const char* get_register_name(Register reg)
{
 if (reg >= ARMV7_REG_R0 && reg <= ARMV7_REG_Q15)
  return registerString[reg];
 return 
# 8123 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8123 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

const char* get_banked_register_name(BankedRegister regb)
{
 if (regb >= REGB_ELR_HYP && regb < REGB_INVALID)
  return bankedRegisterString[regb];
 return 
# 8130 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8130 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

const char* get_coproc_register_c_name(CoprocRegisterC regc)
{
 if (regc >= ARMV7_REG_C0 && regc < ARMV7_REG_CEND)
  return coprocRegisterCString[regc];
 return 
# 8137 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8137 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

const char* get_coproc_register_p_name(CoprocRegisterP regp)
{
 if (regp >= ARMV7_REG_P0 && regp < ARMV7_REG_PEND)
  return coprocRegisterString[regp];
 return 
# 8144 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8144 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

const char* get_spec_register_name(SpecRegister regs)
{
 if (regs >= REGS_APSR && regs < REGS_END)
  return specRegisterString[regs];
 return 
# 8151 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8151 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

const char* get_iflag(Iflags iflag)
{
 if (iflag >= IFL_NONE && iflag < IFL_END)
  return iflagStrings[iflag];
 return 
# 8158 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8158 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

const char* get_endian(EndianSpec spec)
{
 return endianSpecStrings[spec == 1];
}

const char* get_dsb_option(DsbOption opt)
{
 if (opt >= DSB_NONE0 && opt < DSB_END)
  return dsbOptionStrings[opt];
 return 
# 8170 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8170 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

static
const char* get_shift(Shift shift)
{
 if (shift >= SHIFT_NONE && shift < SHIFT_END)
  return shiftString[shift];
 return 
# 8178 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
       ((void *)0)
# 8178 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ;
}

static
const char* get_condition(Condition cond)
{
 if (cond >= COND_EQ && cond < COND_END)
  return condString[cond];
 return "";
}

static
uint32_t get_register_names(Register reg, const char** regNames, OperandClass cls)
{
 uint32_t base = ARMV7_REG_R0;
 if (cls == OC_REG_LIST_SINGLE)
  base = ARMV7_REG_S0;
 else if (cls == OC_REG_LIST_DOUBLE)
  base = ARMV7_REG_D0;
 for (int32_t i = 31; i >= 0; i--)
 {
  if (((reg>>i)&1) == 1)
   regNames[i] = get_register_name((Register)(i + base));
  else
   regNames[i] = 0;
 }
 return 0;
}

uint32_t get_register_list(InstructionOperand* op, char* out, OperandClass cls)
{
 const char* regbuf[32] = {0};
 get_register_names(op->reg, regbuf, cls);
 uint32_t first = 1;
 if (out == 
# 8212 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           ((void *)0)
# 8212 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               )
  return 1;

 out[0] = '\0';
 for (uint32_t i = 0; i < 32; i++)
 {
  if (regbuf[i] != 0)
  {
   if (first == 0)
    out += 
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
          __builtin___sprintf_chk (
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
          out
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
          , 0, __builtin_object_size (
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
          out
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
          , 2 > 1 ? 1 : 0), 
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
          ", "
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
          )
# 8221 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                            ;

   first = 0;
   out += 
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
         __builtin___sprintf_chk (
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
         out
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
         , 0, __builtin_object_size (
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
         out
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
         , 2 > 1 ? 1 : 0), 
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
         "%s", regbuf[i]
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
         )
# 8224 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                      ;
   if (op->flags.hasElements == 1)
   {
    if (op->flags.emptyElement == 1)
     out += 
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           __builtin___sprintf_chk (
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           out
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           , 0, __builtin_object_size (
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           out
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           , 2 > 1 ? 1 : 0), 
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           "[]"
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           )
# 8228 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                             ;
    else
     out += 
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           __builtin___sprintf_chk (
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           out
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           , 0, __builtin_object_size (
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           out
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           , 2 > 1 ? 1 : 0), 
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           "[%d]", op->imm
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           )
# 8230 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                        ;
   }
  }
 }
 return 0;
}

UNUSED
uint32_t get_register_size(Register reg)
{
 if (reg <= ARMV7_REG_S31)
  return 4;
 else if (reg <= ARMV7_REG_D31)
  return 8;
 else if (reg <= ARMV7_REG_Q15)
  return 16;
 return 0;
}

char* get_full_operation(char* outBuffer, size_t outBufferSize, Instruction* restrict instruction)
{
 static const char* setsFlags[2] = {"", ".s"};

 
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
__builtin___snprintf_chk (
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
outBuffer
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
outBufferSize
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 0, __builtin_object_size (
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
outBuffer
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 2 > 1 ? 1 : 0), 
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
"%s%s%s%s%s", get_operation(instruction->operation), setsFlags[instruction->setsFlags], get_condition(instruction->cond), get_vector_data_type(instruction->dataType), get_vector_data_type(instruction->dataType2)
# 8253 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
)




                                                
# 8258 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                               ;

 return outBuffer;
}

uint32_t armv7_disassemble(
  Instruction* restrict instruction,
  char* outBuffer,
  uint32_t outBufferSize)
{
 char operands[512];
 char tmpOperand[1024];
 static const char* neg[2] = {"-", ""};
 static const char* wb[2] = {"", "!"};
 static const char* crt[2] = {"", " ^"};
 
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
__builtin___memset_chk (
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
operands
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
0, sizeof(operands)
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, __builtin_object_size (
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
operands
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 0))
# 8273 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                     ;

 char* start = (char*)&operands;

 for (uint32_t i = 0; i < 6 && instruction->operands[i].cls != OC_NONE; i++)
 {
  InstructionOperand* op = &instruction->operands[i];
  if (i != 0)
   start += 
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           __builtin___sprintf_chk (
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           start
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           , 0, __builtin_object_size (
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           start
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           , 2 > 1 ? 1 : 0), 
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
           ", "
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
           )
# 8281 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                               ;
  switch (op->cls)
  {
  case OC_REG:




    if (op->flags.hasElements == 1)
    {
     if (op->flags.emptyElement == 1)
      start += 
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              __builtin___sprintf_chk (
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 0, __builtin_object_size (
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 2 > 1 ? 1 : 0), 
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              "%s[]", get_register_name(op->reg)
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              )
# 8292 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                ;
     else
      start += 
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              __builtin___sprintf_chk (
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 0, __builtin_object_size (
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 2 > 1 ? 1 : 0), 
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              "%s[%d]", get_register_name(op->reg), op->imm
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              )
# 8294 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                           ;
    }
    else if (op->shift == SHIFT_NONE)
    {
     start += 
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "%s%s", get_register_name(op->reg), wb[op->flags.wb]
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )
# 8298 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                                 ;
    }
    else if (op->flags.offsetRegUsed == 1)
    {
     start += 
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "%s, %s %s", get_register_name(op->reg), get_shift(op->shift), get_register_name(op->offset)
# 8302 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )


                                      
# 8305 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                     ;
    }
    else
    {
     if (op->shift == SHIFT_RRX)
      start += 
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              __builtin___sprintf_chk (
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 0, __builtin_object_size (
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 2 > 1 ? 1 : 0), 
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              "%s, %s", get_register_name(op->reg), get_shift(op->shift)
# 8310 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              )

                              
# 8312 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                             ;
     else if (op->imm != 0)
      start += 
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              __builtin___sprintf_chk (
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 0, __builtin_object_size (
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 2 > 1 ? 1 : 0), 
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              "%s, %s #%#x", get_register_name(op->reg), get_shift(op->shift), op->imm
# 8314 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              )


                 
# 8317 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                ;
     else
      start += 
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              __builtin___sprintf_chk (
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 0, __builtin_object_size (
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 2 > 1 ? 1 : 0), 
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              "%s", get_register_name(op->reg)
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              )
# 8319 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                              ;
    }
    break;
   case OC_REG_LIST:
   case OC_REG_LIST_SINGLE:
   case OC_REG_LIST_DOUBLE:
    get_register_list(op, tmpOperand, op->cls);
    start += 
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "{%s}%s", tmpOperand, crt[op->flags.wb]
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8326 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                   ;
    break;
   case OC_REG_SPEC:
    start += 
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_spec_register_name(op->regs)
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8329 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                  ;
    break;
   case OC_REG_BANKED:
    start += 
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_banked_register_name(op->regb)
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8332 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                    ;
    break;
   case OC_REG_COPROCP:
    start += 
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_coproc_register_p_name(op->regp)
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8335 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                      ;
    break;
   case OC_REG_COPROCC:
    start += 
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_coproc_register_c_name(op->regc)
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8338 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                      ;
    break;
   case OC_IFLAGS:
    start += 
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_iflag(op->iflag)
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8341 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                      ;
    break;
   case OC_ENDIAN_SPEC:
    start += 
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_endian(op->endian)
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8344 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                        ;
    break;
   case OC_DSB_OPTION:
    start += 
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%s", get_dsb_option(op->dsbOpt)
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8347 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                            ;
    break;
   case OC_IMM:
    start += 
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "#%#x", op->imm
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8350 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                           ;
    break;
   case OC_LABEL:
    start += 
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "%#x", op->imm
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8353 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                          ;
    break;
   case OC_IMM64:
    start += 
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "#%#" 
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            "ll" "x"
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            , op->imm64
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8356 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                   ;
    break;
   case OC_FIMM32:
    start += 
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "#%f", op->immf
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8359 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                           ;
    break;
   case OC_FIMM64:
    start += 
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "#%e", op->immd
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )
# 8362 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                           ;
    break;
   case OC_MEM_ALIGNED:
    if (op->imm != 0)
     
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
    __builtin___sprintf_chk (
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
    tmpOperand
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
    , 0, __builtin_object_size (
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
    tmpOperand
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
    ":%#x", op->imm
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
    )
# 8366 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                        ;
    else
     tmpOperand[0] = 0;
    start += 
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "[%s%s]%s", get_register_name(op->reg), tmpOperand, wb[op->flags.wb]
# 8369 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )


                       
# 8372 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                      ;
    break;
   case OC_MEM_OPTION:
    start += 
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            __builtin___sprintf_chk (
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 0, __builtin_object_size (
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            start
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            , 2 > 1 ? 1 : 0), 
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
            "[%s], {%#x}", get_register_name(op->reg), op->imm
# 8375 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
            )

              
# 8377 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             ;
    break;
   case OC_MEM_PRE_IDX:
    if (op->flags.offsetRegUsed == 1)
    {
     if (op->imm == 0)
      
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     __builtin___sprintf_chk (
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 0, __builtin_object_size (
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     "%s", get_register_name(op->offset)
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     )
# 8383 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                             ;
     else if (op->shift == SHIFT_RRX)
      
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     __builtin___sprintf_chk (
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 0, __builtin_object_size (
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     "%s, %s", get_register_name(op->offset), get_shift(op->shift)
# 8385 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     )

                            
# 8387 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                           ;
     else
      
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     __builtin___sprintf_chk (
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 0, __builtin_object_size (
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     "%s, %s #%#x", get_register_name(op->offset), get_shift(op->shift), op->imm
# 8389 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     )


               
# 8392 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              ;

     start += 
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "[%s, %s%s]!", get_register_name(op->reg), neg[op->flags.add == 1], tmpOperand
# 8394 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )


                  
# 8397 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                 ;
    }
    else
    {
     start += 
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "[%s, #%s%#x]!", get_register_name(op->reg), neg[op->flags.add == 1], op->imm
# 8401 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )


               
# 8404 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              ;
    }
    break;
   case OC_MEM_POST_IDX:
    if (op->flags.offsetRegUsed == 1)
    {
     if (op->imm == 0)
      
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     __builtin___sprintf_chk (
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 0, __builtin_object_size (
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     tmpOperand
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
     "%s", get_register_name(op->offset)
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
     )
# 8411 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                             ;
     else
      if (op->shift == SHIFT_RRX)
       
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      __builtin___sprintf_chk (
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
      tmpOperand
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      , 0, __builtin_object_size (
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
      tmpOperand
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      , 2 > 1 ? 1 : 0), 
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
      "%s, %s", get_register_name(op->offset), get_shift(op->shift)
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      )
# 8414 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                                        ;
      else
       
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      __builtin___sprintf_chk (
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
      tmpOperand
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      , 0, __builtin_object_size (
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
      tmpOperand
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      , 2 > 1 ? 1 : 0), 
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
      "%s, %s #%#x", get_register_name(op->offset), get_shift(op->shift), op->imm
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
      )
# 8416 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                                                      ;

     start += 
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "[%s], %s%s", get_register_name(op->reg), neg[op->flags.add == 1], tmpOperand
# 8418 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )


                  
# 8421 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                 ;
    }
    else
    {
     start += 
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "[%s], #%s%#x", get_register_name(op->reg), neg[op->flags.add == 1], op->imm
# 8425 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )


               
# 8428 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              ;
    }
    break;
   case OC_MEM_IMM:
    if (op->shift == SHIFT_NONE)
    {
     if (op->flags.offsetRegUsed == 1)
     {
      start += 
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              __builtin___sprintf_chk (
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 0, __builtin_object_size (
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              start
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              , 2 > 1 ? 1 : 0), 
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              "[%s, %s%s]", get_register_name(op->reg), neg[op->flags.add == 1], get_register_name(op->offset)
# 8436 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
              )


                                      
# 8439 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                     ;
     }
     else
     {
      if (op->imm != 0)
       start += 
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               __builtin___sprintf_chk (
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               start
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               , 0, __builtin_object_size (
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               start
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               , 2 > 1 ? 1 : 0), 
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               "[%s, #%s%#x]", get_register_name(op->reg), neg[op->flags.add == 1], op->imm
# 8444 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               )


                 
# 8447 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                ;
      else
       start += 
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               __builtin___sprintf_chk (
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               start
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               , 0, __builtin_object_size (
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               start
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               , 2 > 1 ? 1 : 0), 
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
               "[%s]", get_register_name(op->reg)
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
               )
# 8449 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                                                                 ;
     }
    }
    else if (op->shift == SHIFT_RRX)
     start += 
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "[%s, %s%s, %s]", get_register_name(op->reg), neg[op->flags.add == 1], get_register_name(op->offset), get_shift(op->shift)
# 8453 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )



                            
# 8457 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
                           ;
    else
     start += 
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             __builtin___sprintf_chk (
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 0, __builtin_object_size (
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             start
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
             "[%s, %s%s, %s #%#x]", get_register_name(op->reg), neg[op->flags.add == 1], get_register_name(op->offset), get_shift(op->shift), op->imm
# 8459 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
             )




               
# 8464 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
              ;
    break;
   default:
    return 4;
  }
 }
 
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
__builtin___snprintf_chk (
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
outBuffer
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
outBufferSize
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 0, __builtin_object_size (
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
outBuffer
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
, 2 > 1 ? 1 : 0), 
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
"%s\t%s", get_full_operation(tmpOperand, sizeof(tmpOperand), instruction), operands
# 8470 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c" 3 4
)

           
# 8472 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/armv7.c"
          ;
 return 0;
}
