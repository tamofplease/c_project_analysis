# 0 "project/brotli/c/dec/state.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/dec/state.h"
# 12 "project/brotli/c/dec/state.h"
# 1 "project/brotli/c/dec/../common/constants.h" 1
# 15 "project/brotli/c/dec/../common/constants.h"
# 1 "project/brotli/c/dec/../common/./platform.h" 1
# 26 "project/brotli/c/dec/../common/./platform.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
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
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4




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
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 2 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) ;






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 2 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 27 "project/brotli/c/dec/../common/./platform.h" 2

# 1 "/usr/local/include/brotli/port.h" 1 3 4
# 29 "project/brotli/c/dec/../common/./platform.h" 2
# 1 "/usr/local/include/brotli/types.h" 1 3 4
# 15 "/usr/local/include/brotli/types.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 16 "/usr/local/include/brotli/types.h" 2 3 4
# 27 "/usr/local/include/brotli/types.h" 3 4
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
# 28 "/usr/local/include/brotli/types.h" 2 3 4
# 71 "/usr/local/include/brotli/types.h" 3 4
typedef void* (*brotli_alloc_func)(void* opaque, size_t size);
# 81 "/usr/local/include/brotli/types.h" 3 4
typedef void (*brotli_free_func)(void* opaque, void* address);
# 30 "project/brotli/c/dec/../common/./platform.h" 2
# 340 "project/brotli/c/dec/../common/./platform.h"

# 340 "project/brotli/c/dec/../common/./platform.h"
static inline __attribute__((__always_inline__)) uint16_t BrotliUnalignedRead16(const void* p) {
  return *(const uint16_t*)p;
}
static inline __attribute__((__always_inline__)) uint32_t BrotliUnalignedRead32(const void* p) {
  return *(const uint32_t*)p;
}

static inline __attribute__((__always_inline__)) uint64_t BrotliUnalignedRead64(const void* p) {
  return *(const uint64_t*)p;
}
static inline __attribute__((__always_inline__)) void BrotliUnalignedWrite64(void* p, uint64_t v) {
  *(uint64_t*)p = v;
}
# 502 "project/brotli/c/dec/../common/./platform.h"
static inline __attribute__((__always_inline__)) void BrotliRBit(void) { }
# 516 "project/brotli/c/dec/../common/./platform.h"
static inline __attribute__((__always_inline__)) double brotli_min_double (double a, double b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) double brotli_max_double (double a, double b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_min_float (float a, float b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_max_float (float a, float b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_min_int (int a, int b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_max_int (int a, int b) { return a > b ? a : b; }
static inline __attribute__((__always_inline__)) size_t brotli_min_size_t (size_t a, size_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) size_t brotli_max_size_t (size_t a, size_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_min_uint32_t (uint32_t a, uint32_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_max_uint32_t (uint32_t a, uint32_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_min_uint8_t (uint8_t a, uint8_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_max_uint8_t (uint8_t a, uint8_t b) { return a > b ? a : b; }
# 559 "project/brotli/c/dec/../common/./platform.h"
 void* BrotliDefaultAllocFunc(void* opaque, size_t size);


 void BrotliDefaultFreeFunc(void* opaque, void* address);

static inline __attribute__((__always_inline__)) __attribute__ ((unused)) void BrotliSuppressUnusedFunctions(void) {
  (void)(&BrotliSuppressUnusedFunctions);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliRBit);
  (void)(&brotli_min_double);
  (void)(&brotli_max_double);
  (void)(&brotli_min_float);
  (void)(&brotli_max_float);
  (void)(&brotli_min_int);
  (void)(&brotli_max_int);
  (void)(&brotli_min_size_t);
  (void)(&brotli_max_size_t);
  (void)(&brotli_min_uint32_t);
  (void)(&brotli_max_uint32_t);
  (void)(&brotli_min_uint8_t);
  (void)(&brotli_max_uint8_t);
  (void)(&BrotliDefaultAllocFunc);
  (void)(&BrotliDefaultFreeFunc);



}
# 16 "project/brotli/c/dec/../common/constants.h" 2
# 105 "project/brotli/c/dec/../common/constants.h"
typedef struct BrotliDistanceCodeLimit {
  uint32_t max_alphabet_size;
  uint32_t max_distance;
} BrotliDistanceCodeLimit;
# 127 "project/brotli/c/dec/../common/constants.h"
static inline __attribute__((__always_inline__)) __attribute__ ((unused)) BrotliDistanceCodeLimit BrotliCalculateDistanceCodeLimit(
    uint32_t max_distance, uint32_t npostfix, uint32_t ndirect) {
  BrotliDistanceCodeLimit result;


  (void)(&BrotliCalculateDistanceCodeLimit);
  if (max_distance <= ndirect) {

    result.max_alphabet_size = max_distance + 16;
    result.max_distance = max_distance;
    return result;
  } else {

    uint32_t forbidden_distance = max_distance + 1;

    uint32_t offset = forbidden_distance - ndirect - 1;
    uint32_t ndistbits = 0;
    uint32_t tmp;
    uint32_t half;
    uint32_t group;

    uint32_t postfix = (1u << npostfix) - 1;
    uint32_t extra;
    uint32_t start;

    offset = (offset >> npostfix) + 4;

    tmp = offset / 2;

    while (tmp != 0) {ndistbits++; tmp = tmp >> 1;}

    ndistbits--;

    half = (offset >> ndistbits) & 1;

    group = ((ndistbits - 1) << 1) | half;

    if (group == 0) {

      result.max_alphabet_size = ndirect + 16;
      result.max_distance = ndirect;
      return result;
    }

    group--;

    ndistbits = (group >> 1) + 1;

    extra = (1u << ndistbits) - 1;

    start = (1u << (ndistbits + 1)) - 4;

    start += (group & 1) << ndistbits;

    result.max_alphabet_size = ((group << npostfix) | postfix) + ndirect +
        16 + 1;

    result.max_distance = ((start + extra) << npostfix) + postfix + ndirect + 1;
    return result;
  }
}



typedef struct {
  uint16_t offset;
  uint8_t nbits;
} BrotliPrefixCodeRange;


 extern const BrotliPrefixCodeRange
    _kBrotliPrefixCodeRanges[26];
# 13 "project/brotli/c/dec/state.h" 2
# 1 "project/brotli/c/dec/../common/dictionary.h" 1
# 19 "project/brotli/c/dec/../common/dictionary.h"
typedef struct BrotliDictionary {
# 30 "project/brotli/c/dec/../common/dictionary.h"
  uint8_t size_bits_by_length[32];


  uint32_t offsets_by_length[32];


  size_t data_size;




  const uint8_t* data;
} BrotliDictionary;

 const BrotliDictionary* BrotliGetDictionary(void);
# 55 "project/brotli/c/dec/../common/dictionary.h"
 void BrotliSetDictionaryData(const uint8_t* data);
# 14 "project/brotli/c/dec/state.h" 2
# 1 "project/brotli/c/dec/../common/platform.h" 1
# 15 "project/brotli/c/dec/state.h" 2
# 1 "project/brotli/c/dec/../common/transform.h" 1
# 18 "project/brotli/c/dec/../common/transform.h"
enum BrotliWordTransformType {
  BROTLI_TRANSFORM_IDENTITY = 0,
  BROTLI_TRANSFORM_OMIT_LAST_1 = 1,
  BROTLI_TRANSFORM_OMIT_LAST_2 = 2,
  BROTLI_TRANSFORM_OMIT_LAST_3 = 3,
  BROTLI_TRANSFORM_OMIT_LAST_4 = 4,
  BROTLI_TRANSFORM_OMIT_LAST_5 = 5,
  BROTLI_TRANSFORM_OMIT_LAST_6 = 6,
  BROTLI_TRANSFORM_OMIT_LAST_7 = 7,
  BROTLI_TRANSFORM_OMIT_LAST_8 = 8,
  BROTLI_TRANSFORM_OMIT_LAST_9 = 9,
  BROTLI_TRANSFORM_UPPERCASE_FIRST = 10,
  BROTLI_TRANSFORM_UPPERCASE_ALL = 11,
  BROTLI_TRANSFORM_OMIT_FIRST_1 = 12,
  BROTLI_TRANSFORM_OMIT_FIRST_2 = 13,
  BROTLI_TRANSFORM_OMIT_FIRST_3 = 14,
  BROTLI_TRANSFORM_OMIT_FIRST_4 = 15,
  BROTLI_TRANSFORM_OMIT_FIRST_5 = 16,
  BROTLI_TRANSFORM_OMIT_FIRST_6 = 17,
  BROTLI_TRANSFORM_OMIT_FIRST_7 = 18,
  BROTLI_TRANSFORM_OMIT_FIRST_8 = 19,
  BROTLI_TRANSFORM_OMIT_FIRST_9 = 20,
  BROTLI_TRANSFORM_SHIFT_FIRST = 21,
  BROTLI_TRANSFORM_SHIFT_ALL = 22,
  BROTLI_NUM_TRANSFORM_TYPES
};



typedef struct BrotliTransforms {
  uint16_t prefix_suffix_size;

  const uint8_t* prefix_suffix;
  const uint16_t* prefix_suffix_map;
  uint32_t num_transforms;

  const uint8_t* transforms;


  const uint8_t* params;



  int16_t cutOffTransforms[BROTLI_TRANSFORM_OMIT_LAST_9 + 1];
} BrotliTransforms;
# 75 "project/brotli/c/dec/../common/transform.h"
 const BrotliTransforms* BrotliGetTransforms(void);

 int BrotliTransformDictionaryWord(
    uint8_t* dst, const uint8_t* word, int len,
    const BrotliTransforms* transforms, int transform_idx);
# 16 "project/brotli/c/dec/state.h" 2

# 1 "project/brotli/c/dec/./bit_reader.h" 1
# 14 "project/brotli/c/dec/./bit_reader.h"
# 1 "project/brotli/c/dec/./../common/constants.h" 1
# 15 "project/brotli/c/dec/./bit_reader.h" 2
# 1 "project/brotli/c/dec/./../common/platform.h" 1
# 16 "project/brotli/c/dec/./bit_reader.h" 2
# 24 "project/brotli/c/dec/./bit_reader.h"
__attribute__ ((visibility ("hidden"))) extern const uint32_t kBrotliBitMask[33];

static inline __attribute__((__always_inline__)) uint32_t BitMask(uint32_t n) {
  if ((!!__builtin_constant_p(n)) || (!!0)) {


    return ~((0xFFFFFFFFu) << n);
  } else {
    return kBrotliBitMask[n];
  }
}

typedef struct {
  uint64_t val_;
  uint32_t bit_pos_;
  const uint8_t* next_in;
  size_t avail_in;
} BrotliBitReader;

typedef struct {
  uint64_t val_;
  uint32_t bit_pos_;
  const uint8_t* next_in;
  size_t avail_in;
} BrotliBitReaderState;


__attribute__ ((visibility ("hidden"))) void BrotliInitBitReader(BrotliBitReader* const br);






__attribute__ ((visibility ("hidden"))) 
# 58 "project/brotli/c/dec/./bit_reader.h" 3 4
               int 
# 58 "project/brotli/c/dec/./bit_reader.h"
                           BrotliWarmupBitReader(BrotliBitReader* const br);




__attribute__ ((visibility ("hidden"))) __attribute__((__noinline__)) 
# 63 "project/brotli/c/dec/./bit_reader.h" 3 4
                               int 
# 63 "project/brotli/c/dec/./bit_reader.h"
                                           BrotliSafeReadBits32Slow(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val);

static inline __attribute__((__always_inline__)) void BrotliBitReaderSaveState(
    BrotliBitReader* const from, BrotliBitReaderState* to) {
  to->val_ = from->val_;
  to->bit_pos_ = from->bit_pos_;
  to->next_in = from->next_in;
  to->avail_in = from->avail_in;
}

static inline __attribute__((__always_inline__)) void BrotliBitReaderRestoreState(
    BrotliBitReader* const to, BrotliBitReaderState* from) {
  to->val_ = from->val_;
  to->bit_pos_ = from->bit_pos_;
  to->next_in = from->next_in;
  to->avail_in = from->avail_in;
}

static inline __attribute__((__always_inline__)) uint32_t BrotliGetAvailableBits(
    const BrotliBitReader* br) {
  return (1 ? 64 : 32) - br->bit_pos_;
}




static inline __attribute__((__always_inline__)) size_t BrotliGetRemainingBytes(BrotliBitReader* br) {
  static const size_t kCap = (size_t)1 << 30;
  if (br->avail_in > kCap) return kCap;
  return br->avail_in + (BrotliGetAvailableBits(br) >> 3);
}



static inline __attribute__((__always_inline__)) 
# 98 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 98 "project/brotli/c/dec/./bit_reader.h"
                                BrotliCheckInputAmount(
    BrotliBitReader* const br, size_t num) {
  return 
# 100 "project/brotli/c/dec/./bit_reader.h" 3 4
        (!!(
# 100 "project/brotli/c/dec/./bit_reader.h"
        br->avail_in >= num
# 100 "project/brotli/c/dec/./bit_reader.h" 3 4
        ) ? 1 : 0)
# 100 "project/brotli/c/dec/./bit_reader.h"
                                           ;
}





static inline __attribute__((__always_inline__)) void BrotliFillBitWindow(
    BrotliBitReader* const br, uint32_t n_bits) {

  if (!(!!0) && (!!__builtin_constant_p(n_bits)) && (n_bits <= 8)) {
    if (br->bit_pos_ >= 56) {
      br->val_ >>= 56;
      br->bit_pos_ ^= 56;
      br->val_ |= BrotliUnalignedRead64(br->next_in) << 8;
      br->avail_in -= 7;
      br->next_in += 7;
    }
  } else if (
      !(!!0) && (!!__builtin_constant_p(n_bits)) && (n_bits <= 16)) {
    if (br->bit_pos_ >= 48) {
      br->val_ >>= 48;
      br->bit_pos_ ^= 48;
      br->val_ |= BrotliUnalignedRead64(br->next_in) << 16;
      br->avail_in -= 6;
      br->next_in += 6;
    }
  } else {
    if (br->bit_pos_ >= 32) {
      br->val_ >>= 32;
      br->bit_pos_ ^= 32;
      br->val_ |= ((uint64_t)BrotliUnalignedRead32(br->next_in)) << 32;
      br->avail_in -= (sizeof(uint64_t) >> 1);
      br->next_in += (sizeof(uint64_t) >> 1);
    }
  }
# 155 "project/brotli/c/dec/./bit_reader.h"
}



static inline __attribute__((__always_inline__)) void BrotliFillBitWindow16(BrotliBitReader* const br) {
  BrotliFillBitWindow(br, 17);
}



static inline __attribute__((__always_inline__)) 
# 165 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 165 "project/brotli/c/dec/./bit_reader.h"
                                BrotliPullByte(BrotliBitReader* const br) {
  if (br->avail_in == 0) {
    return 
# 167 "project/brotli/c/dec/./bit_reader.h" 3 4
          0
# 167 "project/brotli/c/dec/./bit_reader.h"
                      ;
  }
  br->val_ >>= 8;

  br->val_ |= ((uint64_t)*br->next_in) << 56;



  br->bit_pos_ -= 8;
  --br->avail_in;
  ++br->next_in;
  return 
# 178 "project/brotli/c/dec/./bit_reader.h" 3 4
        1
# 178 "project/brotli/c/dec/./bit_reader.h"
                   ;
}



static inline __attribute__((__always_inline__)) uint64_t BrotliGetBitsUnmasked(
    BrotliBitReader* const br) {
  return br->val_ >> br->bit_pos_;
}



static inline __attribute__((__always_inline__)) uint32_t BrotliGet16BitsUnmasked(
    BrotliBitReader* const br) {
  BrotliFillBitWindow(br, 16);
  return (uint32_t)BrotliGetBitsUnmasked(br);
}



static inline __attribute__((__always_inline__)) uint32_t BrotliGetBits(
    BrotliBitReader* const br, uint32_t n_bits) {
  BrotliFillBitWindow(br, n_bits);
  return (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
}



static inline __attribute__((__always_inline__)) 
# 206 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 206 "project/brotli/c/dec/./bit_reader.h"
                                BrotliSafeGetBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  while (BrotliGetAvailableBits(br) < n_bits) {
    if (!BrotliPullByte(br)) {
      return 
# 210 "project/brotli/c/dec/./bit_reader.h" 3 4
            0
# 210 "project/brotli/c/dec/./bit_reader.h"
                        ;
    }
  }
  *val = (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
  return 
# 214 "project/brotli/c/dec/./bit_reader.h" 3 4
        1
# 214 "project/brotli/c/dec/./bit_reader.h"
                   ;
}


static inline __attribute__((__always_inline__)) void BrotliDropBits(
    BrotliBitReader* const br, uint32_t n_bits) {
  br->bit_pos_ += n_bits;
}

static inline __attribute__((__always_inline__)) void BrotliBitReaderUnload(BrotliBitReader* br) {
  uint32_t unused_bytes = BrotliGetAvailableBits(br) >> 3;
  uint32_t unused_bits = unused_bytes << 3;
  br->avail_in += unused_bytes;
  br->next_in -= unused_bytes;
  if (unused_bits == sizeof(br->val_) << 3) {
    br->val_ = 0;
  } else {
    br->val_ <<= unused_bits;
  }
  br->bit_pos_ += unused_bits;
}



static inline __attribute__((__always_inline__)) void BrotliTakeBits(
  BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  *val = (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(n_bits);
 
                                                                    ;
  BrotliDropBits(br, n_bits);
}




static inline __attribute__((__always_inline__)) uint32_t BrotliReadBits24(
    BrotliBitReader* const br, uint32_t n_bits) {
  ;
  if (1 || (n_bits <= 16)) {
    uint32_t val;
    BrotliFillBitWindow(br, n_bits);
    BrotliTakeBits(br, n_bits, &val);
    return val;
  } else {
    uint32_t low_val;
    uint32_t high_val;
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, 16, &low_val);
    BrotliFillBitWindow(br, 8);
    BrotliTakeBits(br, n_bits - 16, &high_val);
    return low_val | (high_val << 16);
  }
}


static inline __attribute__((__always_inline__)) uint32_t BrotliReadBits32(
    BrotliBitReader* const br, uint32_t n_bits) {
  ;
  if (1 || (n_bits <= 16)) {
    uint32_t val;
    BrotliFillBitWindow(br, n_bits);
    BrotliTakeBits(br, n_bits, &val);
    return val;
  } else {
    uint32_t low_val;
    uint32_t high_val;
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, 16, &low_val);
    BrotliFillBitWindow(br, 16);
    BrotliTakeBits(br, n_bits - 16, &high_val);
    return low_val | (high_val << 16);
  }
}




static inline __attribute__((__always_inline__)) 
# 291 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 291 "project/brotli/c/dec/./bit_reader.h"
                                BrotliSafeReadBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  ;
  while (BrotliGetAvailableBits(br) < n_bits) {
    if (!BrotliPullByte(br)) {
      return 
# 296 "project/brotli/c/dec/./bit_reader.h" 3 4
            0
# 296 "project/brotli/c/dec/./bit_reader.h"
                        ;
    }
  }
  BrotliTakeBits(br, n_bits, val);
  return 
# 300 "project/brotli/c/dec/./bit_reader.h" 3 4
        1
# 300 "project/brotli/c/dec/./bit_reader.h"
                   ;
}


static inline __attribute__((__always_inline__)) 
# 304 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 304 "project/brotli/c/dec/./bit_reader.h"
                                BrotliSafeReadBits32(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  ;
  if (1 || (n_bits <= 24)) {
    while (BrotliGetAvailableBits(br) < n_bits) {
      if (!BrotliPullByte(br)) {
        return 
# 310 "project/brotli/c/dec/./bit_reader.h" 3 4
              0
# 310 "project/brotli/c/dec/./bit_reader.h"
                          ;
      }
    }
    BrotliTakeBits(br, n_bits, val);
    return 
# 314 "project/brotli/c/dec/./bit_reader.h" 3 4
          1
# 314 "project/brotli/c/dec/./bit_reader.h"
                     ;
  } else {
    return BrotliSafeReadBits32Slow(br, n_bits, val);
  }
}



static inline __attribute__((__always_inline__)) 
# 322 "project/brotli/c/dec/./bit_reader.h" 3 4
                    int 
# 322 "project/brotli/c/dec/./bit_reader.h"
                                BrotliJumpToByteBoundary(BrotliBitReader* br) {
  uint32_t pad_bits_count = BrotliGetAvailableBits(br) & 0x7;
  uint32_t pad_bits = 0;
  if (pad_bits_count != 0) {
    BrotliTakeBits(br, pad_bits_count, &pad_bits);
  }
  return 
# 328 "project/brotli/c/dec/./bit_reader.h" 3 4
        (!!(
# 328 "project/brotli/c/dec/./bit_reader.h"
        pad_bits == 0
# 328 "project/brotli/c/dec/./bit_reader.h" 3 4
        ) ? 1 : 0)
# 328 "project/brotli/c/dec/./bit_reader.h"
                                     ;
}




static inline __attribute__((__always_inline__)) void BrotliCopyBytes(uint8_t* dest,
                                          BrotliBitReader* br, size_t num) {
  while (BrotliGetAvailableBits(br) >= 8 && num > 0) {
    *dest = (uint8_t)BrotliGetBitsUnmasked(br);
    BrotliDropBits(br, 8);
    ++dest;
    --num;
  }
  
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 __builtin___memcpy_chk (
# 342 "project/brotli/c/dec/./bit_reader.h"
 dest
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 , 
# 342 "project/brotli/c/dec/./bit_reader.h"
 br->next_in, num
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 , __builtin_object_size (
# 342 "project/brotli/c/dec/./bit_reader.h"
 dest
# 342 "project/brotli/c/dec/./bit_reader.h" 3 4
 , 0))
# 342 "project/brotli/c/dec/./bit_reader.h"
                               ;
  br->avail_in -= num;
  br->next_in += num;
}
# 18 "project/brotli/c/dec/state.h" 2
# 1 "project/brotli/c/dec/./huffman.h" 1
# 38 "project/brotli/c/dec/./huffman.h"
typedef struct {
  uint8_t bits;
  uint16_t value;
} HuffmanCode;

static inline __attribute__((__always_inline__)) HuffmanCode ConstructHuffmanCode(const uint8_t bits,
    const uint16_t value) {
  HuffmanCode h;
  h.bits = bits;
  h.value = value;
  return h;
}
# 91 "project/brotli/c/dec/./huffman.h"
__attribute__ ((visibility ("hidden"))) void BrotliBuildCodeLengthsHuffmanTable(HuffmanCode* root_table,
    const uint8_t* const code_lengths, uint16_t* count);



__attribute__ ((visibility ("hidden"))) uint32_t BrotliBuildHuffmanTable(HuffmanCode* root_table,
    int root_bits, const uint16_t* const symbol_lists, uint16_t* count);





__attribute__ ((visibility ("hidden"))) uint32_t BrotliBuildSimpleHuffmanTable(HuffmanCode* table,
    int root_bits, uint16_t* symbols, uint32_t num_symbols);




typedef struct {
  HuffmanCode** htrees;
  HuffmanCode* codes;
  uint16_t alphabet_size_max;
  uint16_t alphabet_size_limit;
  uint16_t num_htrees;
} HuffmanTreeGroup;
# 19 "project/brotli/c/dec/state.h" 2
# 113 "project/brotli/c/dec/state.h"
typedef enum {
  BROTLI_STATE_UNINITED,
  BROTLI_STATE_LARGE_WINDOW_BITS,
  BROTLI_STATE_INITIALIZE,
  BROTLI_STATE_METABLOCK_BEGIN,
  BROTLI_STATE_METABLOCK_HEADER,
  BROTLI_STATE_METABLOCK_HEADER_2,
  BROTLI_STATE_CONTEXT_MODES,
  BROTLI_STATE_COMMAND_BEGIN,
  BROTLI_STATE_COMMAND_INNER,
  BROTLI_STATE_COMMAND_POST_DECODE_LITERALS,
  BROTLI_STATE_COMMAND_POST_WRAP_COPY,
  BROTLI_STATE_UNCOMPRESSED,
  BROTLI_STATE_METADATA,
  BROTLI_STATE_COMMAND_INNER_WRITE,
  BROTLI_STATE_METABLOCK_DONE,
  BROTLI_STATE_COMMAND_POST_WRITE_1,
  BROTLI_STATE_COMMAND_POST_WRITE_2,
  BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER,
  BROTLI_STATE_HUFFMAN_CODE_0,
  BROTLI_STATE_HUFFMAN_CODE_1,
  BROTLI_STATE_HUFFMAN_CODE_2,
  BROTLI_STATE_HUFFMAN_CODE_3,
  BROTLI_STATE_CONTEXT_MAP_1,
  BROTLI_STATE_CONTEXT_MAP_2,
  BROTLI_STATE_TREE_GROUP,
  BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY,
  BROTLI_STATE_DONE
} BrotliRunningState;

typedef enum {
  BROTLI_STATE_METABLOCK_HEADER_NONE,
  BROTLI_STATE_METABLOCK_HEADER_EMPTY,
  BROTLI_STATE_METABLOCK_HEADER_NIBBLES,
  BROTLI_STATE_METABLOCK_HEADER_SIZE,
  BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED,
  BROTLI_STATE_METABLOCK_HEADER_RESERVED,
  BROTLI_STATE_METABLOCK_HEADER_BYTES,
  BROTLI_STATE_METABLOCK_HEADER_METADATA
} BrotliRunningMetablockHeaderState;

typedef enum {
  BROTLI_STATE_UNCOMPRESSED_NONE,
  BROTLI_STATE_UNCOMPRESSED_WRITE
} BrotliRunningUncompressedState;

typedef enum {
  BROTLI_STATE_TREE_GROUP_NONE,
  BROTLI_STATE_TREE_GROUP_LOOP
} BrotliRunningTreeGroupState;

typedef enum {
  BROTLI_STATE_CONTEXT_MAP_NONE,
  BROTLI_STATE_CONTEXT_MAP_READ_PREFIX,
  BROTLI_STATE_CONTEXT_MAP_HUFFMAN,
  BROTLI_STATE_CONTEXT_MAP_DECODE,
  BROTLI_STATE_CONTEXT_MAP_TRANSFORM
} BrotliRunningContextMapState;

typedef enum {
  BROTLI_STATE_HUFFMAN_NONE,
  BROTLI_STATE_HUFFMAN_SIMPLE_SIZE,
  BROTLI_STATE_HUFFMAN_SIMPLE_READ,
  BROTLI_STATE_HUFFMAN_SIMPLE_BUILD,
  BROTLI_STATE_HUFFMAN_COMPLEX,
  BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS
} BrotliRunningHuffmanState;

typedef enum {
  BROTLI_STATE_DECODE_UINT8_NONE,
  BROTLI_STATE_DECODE_UINT8_SHORT,
  BROTLI_STATE_DECODE_UINT8_LONG
} BrotliRunningDecodeUint8State;

typedef enum {
  BROTLI_STATE_READ_BLOCK_LENGTH_NONE,
  BROTLI_STATE_READ_BLOCK_LENGTH_SUFFIX
} BrotliRunningReadBlockLengthState;

typedef struct BrotliMetablockHeaderArena {
  BrotliRunningTreeGroupState substate_tree_group;
  BrotliRunningContextMapState substate_context_map;
  BrotliRunningHuffmanState substate_huffman;

  uint32_t sub_loop_counter;

  uint32_t repeat_code_len;
  uint32_t prev_code_len;


  uint32_t symbol;
  uint32_t repeat;
  uint32_t space;


  HuffmanCode table[32];

  uint16_t* symbol_lists;

  uint16_t symbols_lists_array[15 + 1 +
                               704];

  int next_symbol[32];
  uint8_t code_length_code_lengths[(17 + 1)];

  uint16_t code_length_histo[16];


  int htree_index;
  HuffmanCode* next;


  uint32_t context_index;
  uint32_t max_run_length_prefix;
  uint32_t code;
  HuffmanCode context_map_table[646];
} BrotliMetablockHeaderArena;

typedef struct BrotliMetablockBodyArena {
  uint8_t dist_extra_bits[544];
  uint32_t dist_offset[544];
} BrotliMetablockBodyArena;

struct BrotliDecoderStateStruct {
  BrotliRunningState state;


  int loop_counter;

  BrotliBitReader br;

  brotli_alloc_func alloc_func;
  brotli_free_func free_func;
  void* memory_manager_opaque;



  union {
    uint64_t u64;
    uint8_t u8[8];
  } buffer;
  uint32_t buffer_length;

  int pos;
  int max_backward_distance;
  int max_distance;
  int ringbuffer_size;
  int ringbuffer_mask;
  int dist_rb_idx;
  int dist_rb[4];
  int error_code;
  uint8_t* ringbuffer;
  uint8_t* ringbuffer_end;
  HuffmanCode* htree_command;
  const uint8_t* context_lookup;
  uint8_t* context_map_slice;
  uint8_t* dist_context_map_slice;



  HuffmanTreeGroup literal_hgroup;
  HuffmanTreeGroup insert_copy_hgroup;
  HuffmanTreeGroup distance_hgroup;
  HuffmanCode* block_type_trees;
  HuffmanCode* block_len_trees;


  int trivial_literal_context;


  int distance_context;
  int meta_block_remaining_len;
  uint32_t block_length_index;
  uint32_t block_length[3];
  uint32_t num_block_types[3];
  uint32_t block_type_rb[6];
  uint32_t distance_postfix_bits;
  uint32_t num_direct_distance_codes;
  uint32_t num_dist_htrees;
  uint8_t* dist_context_map;
  HuffmanCode* literal_htree;
  uint8_t dist_htree_index;

  int copy_length;
  int distance_code;


  size_t rb_roundtrips;
  size_t partial_pos_out;


  uint32_t mtf_upper_bound;
  uint32_t mtf[64 + 1];




  BrotliRunningMetablockHeaderState substate_metablock_header;
  BrotliRunningUncompressedState substate_uncompressed;
  BrotliRunningDecodeUint8State substate_decode_uint8;
  BrotliRunningReadBlockLengthState substate_read_block_length;

  unsigned int is_last_metablock : 1;
  unsigned int is_uncompressed : 1;
  unsigned int is_metadata : 1;
  unsigned int should_wrap_ringbuffer : 1;
  unsigned int canny_ringbuffer_allocation : 1;
  unsigned int large_window : 1;
  unsigned int size_nibbles : 8;
  uint32_t window_bits;

  int new_ringbuffer_size;

  uint32_t num_literal_htrees;
  uint8_t* context_map;
  uint8_t* context_modes;

  const BrotliDictionary* dictionary;
  const BrotliTransforms* transforms;

  uint32_t trivial_literal_contexts[8];

  union {
    BrotliMetablockHeaderArena header;
    BrotliMetablockBodyArena body;
  } arena;
};

typedef struct BrotliDecoderStateStruct BrotliDecoderStateInternal;


__attribute__ ((visibility ("hidden"))) 
# 344 "project/brotli/c/dec/state.h" 3 4
               int 
# 344 "project/brotli/c/dec/state.h"
                           BrotliDecoderStateInit(BrotliDecoderStateInternal* s,
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateCleanup(BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateMetablockBegin(BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) void BrotliDecoderStateCleanupAfterMetablock(
    BrotliDecoderStateInternal* s);
__attribute__ ((visibility ("hidden"))) 
# 350 "project/brotli/c/dec/state.h" 3 4
               int 
# 350 "project/brotli/c/dec/state.h"
                           BrotliDecoderHuffmanTreeGroupInit(
    BrotliDecoderStateInternal* s, HuffmanTreeGroup* group, uint32_t alphabet_size_max,
    uint32_t alphabet_size_limit, uint32_t ntrees);