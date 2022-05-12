# 0 "project/brotli/c/enc/entropy_encode.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/enc/entropy_encode.c"
# 9 "project/brotli/c/enc/entropy_encode.c"
# 1 "project/brotli/c/enc/./entropy_encode.h" 1
# 12 "project/brotli/c/enc/./entropy_encode.h"
# 1 "project/brotli/c/enc/./../common/platform.h" 1
# 26 "project/brotli/c/enc/./../common/platform.h"
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
# 27 "project/brotli/c/enc/./../common/platform.h" 2

# 1 "/usr/local/include/brotli/port.h" 1 3 4
# 29 "project/brotli/c/enc/./../common/platform.h" 2
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
# 30 "project/brotli/c/enc/./../common/platform.h" 2
# 340 "project/brotli/c/enc/./../common/platform.h"

# 340 "project/brotli/c/enc/./../common/platform.h"
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
# 502 "project/brotli/c/enc/./../common/platform.h"
static inline __attribute__((__always_inline__)) void BrotliRBit(void) { }
# 516 "project/brotli/c/enc/./../common/platform.h"
static inline __attribute__((__always_inline__)) double brotli_min_double (double a, double b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) double brotli_max_double (double a, double b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_min_float (float a, float b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_max_float (float a, float b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_min_int (int a, int b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_max_int (int a, int b) { return a > b ? a : b; }
static inline __attribute__((__always_inline__)) size_t brotli_min_size_t (size_t a, size_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) size_t brotli_max_size_t (size_t a, size_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_min_uint32_t (uint32_t a, uint32_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_max_uint32_t (uint32_t a, uint32_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_min_uint8_t (uint8_t a, uint8_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_max_uint8_t (uint8_t a, uint8_t b) { return a > b ? a : b; }
# 559 "project/brotli/c/enc/./../common/platform.h"
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
# 13 "project/brotli/c/enc/./entropy_encode.h" 2







typedef struct HuffmanTree {
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
} HuffmanTree;

static inline __attribute__((__always_inline__)) void InitHuffmanTree(HuffmanTree* self, uint32_t count,
    int16_t left, int16_t right) {
  self->total_count_ = count;
  self->index_left_ = left;
  self->index_right_or_value_ = right;
}


__attribute__ ((visibility ("hidden"))) 
# 34 "project/brotli/c/enc/./entropy_encode.h" 3 4
               int 
# 34 "project/brotli/c/enc/./entropy_encode.h"
                           BrotliSetDepth(
    int p, HuffmanTree* pool, uint8_t* depth, int max_depth);
# 49 "project/brotli/c/enc/./entropy_encode.h"
__attribute__ ((visibility ("hidden"))) void BrotliCreateHuffmanTree(const uint32_t* data,
                                             const size_t length,
                                             const int tree_limit,
                                             HuffmanTree* tree,
                                             uint8_t* depth);
# 62 "project/brotli/c/enc/./entropy_encode.h"
__attribute__ ((visibility ("hidden"))) void BrotliOptimizeHuffmanCountsForRle(
    size_t length, uint32_t* counts, uint8_t* good_for_rle);




__attribute__ ((visibility ("hidden"))) void BrotliWriteHuffmanTree(const uint8_t* depth,
                                            size_t num,
                                            size_t* tree_size,
                                            uint8_t* tree,
                                            uint8_t* extra_bits_data);


__attribute__ ((visibility ("hidden"))) void BrotliConvertBitDepthsToSymbols(const uint8_t* depth,
                                                     size_t len,
                                                     uint16_t* bits);

__attribute__ ((visibility ("hidden"))) extern const size_t kBrotliShellGaps[6];

typedef 
# 81 "project/brotli/c/enc/./entropy_encode.h" 3 4
       int 
# 81 "project/brotli/c/enc/./entropy_encode.h"
                   (*HuffmanTreeComparator)(
    const HuffmanTree*, const HuffmanTree*);
static inline __attribute__((__always_inline__)) void SortHuffmanTreeItems(HuffmanTree* items,
    const size_t n, HuffmanTreeComparator comparator) {
  if (n < 13) {

    size_t i;
    for (i = 1; i < n; ++i) {
      HuffmanTree tmp = items[i];
      size_t k = i;
      size_t j = i - 1;
      while (comparator(&tmp, &items[j])) {
        items[k] = items[j];
        k = j;
        if (!j--) break;
      }
      items[k] = tmp;
    }
    return;
  } else {

    int g = n < 57 ? 2 : 0;
    for (; g < 6; ++g) {
      size_t gap = kBrotliShellGaps[g];
      size_t i;
      for (i = gap; i < n; ++i) {
        size_t j = i;
        HuffmanTree tmp = items[i];
        for (; j >= gap && comparator(&tmp, &items[j - gap]); j -= gap) {
          items[j] = items[j - gap];
        }
        items[j] = tmp;
      }
    }
  }
}
# 10 "project/brotli/c/enc/entropy_encode.c" 2



# 1 "project/brotli/c/enc/../common/constants.h" 1
# 15 "project/brotli/c/enc/../common/constants.h"
# 1 "project/brotli/c/enc/../common/./platform.h" 1
# 16 "project/brotli/c/enc/../common/constants.h" 2
# 105 "project/brotli/c/enc/../common/constants.h"
typedef struct BrotliDistanceCodeLimit {
  uint32_t max_alphabet_size;
  uint32_t max_distance;
} BrotliDistanceCodeLimit;
# 127 "project/brotli/c/enc/../common/constants.h"
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
# 14 "project/brotli/c/enc/entropy_encode.c" 2
# 1 "project/brotli/c/enc/../common/platform.h" 1
# 15 "project/brotli/c/enc/entropy_encode.c" 2






const size_t kBrotliShellGaps[] = {132, 57, 23, 10, 4, 1};


# 23 "project/brotli/c/enc/entropy_encode.c" 3 4
int 
# 23 "project/brotli/c/enc/entropy_encode.c"
           BrotliSetDepth(
    int p0, HuffmanTree* pool, uint8_t* depth, int max_depth) {
  int stack[16];
  int level = 0;
  int p = p0;
  ;
  stack[0] = -1;
  while (
# 30 "project/brotli/c/enc/entropy_encode.c" 3 4
        1
# 30 "project/brotli/c/enc/entropy_encode.c"
                   ) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return 
# 33 "project/brotli/c/enc/entropy_encode.c" 3 4
                                   0
# 33 "project/brotli/c/enc/entropy_encode.c"
                                               ;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = (uint8_t)level;
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return 
# 41 "project/brotli/c/enc/entropy_encode.c" 3 4
                         1
# 41 "project/brotli/c/enc/entropy_encode.c"
                                    ;
    p = stack[level];
    stack[level] = -1;
  }
}


static inline __attribute__((__always_inline__)) 
# 48 "project/brotli/c/enc/entropy_encode.c" 3 4
                    int 
# 48 "project/brotli/c/enc/entropy_encode.c"
                                SortHuffmanTree(
    const HuffmanTree* v0, const HuffmanTree* v1) {
  if (v0->total_count_ != v1->total_count_) {
    return 
# 51 "project/brotli/c/enc/entropy_encode.c" 3 4
          (!!(
# 51 "project/brotli/c/enc/entropy_encode.c"
          v0->total_count_ < v1->total_count_
# 51 "project/brotli/c/enc/entropy_encode.c" 3 4
          ) ? 1 : 0)
# 51 "project/brotli/c/enc/entropy_encode.c"
                                                             ;
  }
  return 
# 53 "project/brotli/c/enc/entropy_encode.c" 3 4
        (!!(
# 53 "project/brotli/c/enc/entropy_encode.c"
        v0->index_right_or_value_ > v1->index_right_or_value_
# 53 "project/brotli/c/enc/entropy_encode.c" 3 4
        ) ? 1 : 0)
# 53 "project/brotli/c/enc/entropy_encode.c"
                                                                             ;
}
# 71 "project/brotli/c/enc/entropy_encode.c"
void BrotliCreateHuffmanTree(const uint32_t* data,
                             const size_t length,
                             const int tree_limit,
                             HuffmanTree* tree,
                             uint8_t* depth) {
  uint32_t count_limit;
  HuffmanTree sentinel;
  InitHuffmanTree(&sentinel, 
# 78 "project/brotli/c/enc/entropy_encode.c" 3 4
                            (~((uint32_t)0))
# 78 "project/brotli/c/enc/entropy_encode.c"
                                             , -1, -1);




  for (count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    size_t i;
    size_t j;
    size_t k;
    for (i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = (brotli_max_uint32_t((data[i]), (count_limit)));
        InitHuffmanTree(&tree[n++], count, -1, (int16_t)i);
      }
    }

    if (n == 1) {
      depth[tree[0].index_right_or_value_] = 1;
      break;
    }

    SortHuffmanTreeItems(tree, n, SortHuffmanTree);
# 110 "project/brotli/c/enc/entropy_encode.c"
    tree[n] = sentinel;
    tree[n + 1] = sentinel;

    i = 0;
    j = n + 1;
    for (k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }

      {

        size_t j_end = 2 * n - k;
        tree[j_end].total_count_ =
            tree[left].total_count_ + tree[right].total_count_;
        tree[j_end].index_left_ = (int16_t)left;
        tree[j_end].index_right_or_value_ = (int16_t)right;


        tree[j_end + 1] = sentinel;
      }
    }
    if (BrotliSetDepth((int)(2 * n - 1), &tree[0], depth, tree_limit)) {


      break;
    }
  }
}

static void Reverse(uint8_t* v, size_t start, size_t end) {
  --end;
  while (start < end) {
    uint8_t tmp = v[start];
    v[start] = v[end];
    v[end] = tmp;
    ++start;
    --end;
  }
}

static void BrotliWriteHuffmanTreeRepetitions(
    const uint8_t previous_value,
    const uint8_t value,
    size_t repetitions,
    size_t* tree_size,
    uint8_t* tree,
    uint8_t* extra_bits_data) {
  ;
  if (previous_value != value) {
    tree[*tree_size] = value;
    extra_bits_data[*tree_size] = 0;
    ++(*tree_size);
    --repetitions;
  }
  if (repetitions == 7) {
    tree[*tree_size] = value;
    extra_bits_data[*tree_size] = 0;
    ++(*tree_size);
    --repetitions;
  }
  if (repetitions < 3) {
    size_t i;
    for (i = 0; i < repetitions; ++i) {
      tree[*tree_size] = value;
      extra_bits_data[*tree_size] = 0;
      ++(*tree_size);
    }
  } else {
    size_t start = *tree_size;
    repetitions -= 3;
    while (
# 193 "project/brotli/c/enc/entropy_encode.c" 3 4
          1
# 193 "project/brotli/c/enc/entropy_encode.c"
                     ) {
      tree[*tree_size] = 16;
      extra_bits_data[*tree_size] = repetitions & 0x3;
      ++(*tree_size);
      repetitions >>= 2;
      if (repetitions == 0) {
        break;
      }
      --repetitions;
    }
    Reverse(tree, start, *tree_size);
    Reverse(extra_bits_data, start, *tree_size);
  }
}

static void BrotliWriteHuffmanTreeRepetitionsZeros(
    size_t repetitions,
    size_t* tree_size,
    uint8_t* tree,
    uint8_t* extra_bits_data) {
  if (repetitions == 11) {
    tree[*tree_size] = 0;
    extra_bits_data[*tree_size] = 0;
    ++(*tree_size);
    --repetitions;
  }
  if (repetitions < 3) {
    size_t i;
    for (i = 0; i < repetitions; ++i) {
      tree[*tree_size] = 0;
      extra_bits_data[*tree_size] = 0;
      ++(*tree_size);
    }
  } else {
    size_t start = *tree_size;
    repetitions -= 3;
    while (
# 229 "project/brotli/c/enc/entropy_encode.c" 3 4
          1
# 229 "project/brotli/c/enc/entropy_encode.c"
                     ) {
      tree[*tree_size] = 17;
      extra_bits_data[*tree_size] = repetitions & 0x7;
      ++(*tree_size);
      repetitions >>= 3;
      if (repetitions == 0) {
        break;
      }
      --repetitions;
    }
    Reverse(tree, start, *tree_size);
    Reverse(extra_bits_data, start, *tree_size);
  }
}

void BrotliOptimizeHuffmanCountsForRle(size_t length, uint32_t* counts,
                                       uint8_t* good_for_rle) {
  size_t nonzero_count = 0;
  size_t stride;
  size_t limit;
  size_t sum;
  const size_t streak_limit = 1240;

  size_t i;
  for (i = 0; i < length; i++) {
    if (counts[i]) {
      ++nonzero_count;
    }
  }
  if (nonzero_count < 16) {
    return;
  }
  while (length != 0 && counts[length - 1] == 0) {
    --length;
  }
  if (length == 0) {
    return;
  }

  {
    size_t nonzeros = 0;
    uint32_t smallest_nonzero = 1 << 30;
    for (i = 0; i < length; ++i) {
      if (counts[i] != 0) {
        ++nonzeros;
        if (smallest_nonzero > counts[i]) {
          smallest_nonzero = counts[i];
        }
      }
    }
    if (nonzeros < 5) {

      return;
    }
    if (smallest_nonzero < 4) {
      size_t zeros = length - nonzeros;
      if (zeros < 6) {
        for (i = 1; i < length - 1; ++i) {
          if (counts[i - 1] != 0 && counts[i] == 0 && counts[i + 1] != 0) {
            counts[i] = 1;
          }
        }
      }
    }
    if (nonzeros < 28) {
      return;
    }
  }


  
# 299 "project/brotli/c/enc/entropy_encode.c" 3 4
 __builtin___memset_chk (
# 299 "project/brotli/c/enc/entropy_encode.c"
 good_for_rle
# 299 "project/brotli/c/enc/entropy_encode.c" 3 4
 , 
# 299 "project/brotli/c/enc/entropy_encode.c"
 0, length
# 299 "project/brotli/c/enc/entropy_encode.c" 3 4
 , __builtin_object_size (
# 299 "project/brotli/c/enc/entropy_encode.c"
 good_for_rle
# 299 "project/brotli/c/enc/entropy_encode.c" 3 4
 , 0))
# 299 "project/brotli/c/enc/entropy_encode.c"
                                ;
  {



    uint32_t symbol = counts[0];
    size_t step = 0;
    for (i = 0; i <= length; ++i) {
      if (i == length || counts[i] != symbol) {
        if ((symbol == 0 && step >= 5) ||
            (symbol != 0 && step >= 7)) {
          size_t k;
          for (k = 0; k < step; ++k) {
            good_for_rle[i - k - 1] = 1;
          }
        }
        step = 1;
        if (i != length) {
          symbol = counts[i];
        }
      } else {
        ++step;
      }
    }
  }


  stride = 0;
  limit = 256 * (counts[0] + counts[1] + counts[2]) / 3 + 420;
  sum = 0;
  for (i = 0; i <= length; ++i) {
    if (i == length || good_for_rle[i] ||
        (i != 0 && good_for_rle[i - 1]) ||
        (256 * counts[i] - limit + streak_limit) >= 2 * streak_limit) {
      if (stride >= 4 || (stride >= 3 && sum == 0)) {
        size_t k;

        size_t count = (sum + stride / 2) / stride;
        if (count == 0) {
          count = 1;
        }
        if (sum == 0) {

          count = 0;
        }
        for (k = 0; k < stride; ++k) {


          counts[i - k - 1] = (uint32_t)count;
        }
      }
      stride = 0;
      sum = 0;
      if (i < length - 2) {


        limit = 256 * (counts[i] + counts[i + 1] + counts[i + 2]) / 3 + 420;
      } else if (i < length) {
        limit = 256 * counts[i];
      } else {
        limit = 0;
      }
    }
    ++stride;
    if (i != length) {
      sum += counts[i];
      if (stride >= 4) {
        limit = (256 * sum + stride / 2) / stride;
      }
      if (stride == 4) {
        limit += 120;
      }
    }
  }
}

static void DecideOverRleUse(const uint8_t* depth, const size_t length,
                             
# 376 "project/brotli/c/enc/entropy_encode.c" 3 4
                            int
# 376 "project/brotli/c/enc/entropy_encode.c"
                                       * use_rle_for_non_zero,
                             
# 377 "project/brotli/c/enc/entropy_encode.c" 3 4
                            int
# 377 "project/brotli/c/enc/entropy_encode.c"
                                       * use_rle_for_zero) {
  size_t total_reps_zero = 0;
  size_t total_reps_non_zero = 0;
  size_t count_reps_zero = 1;
  size_t count_reps_non_zero = 1;
  size_t i;
  for (i = 0; i < length;) {
    const uint8_t value = depth[i];
    size_t reps = 1;
    size_t k;
    for (k = i + 1; k < length && depth[k] == value; ++k) {
      ++reps;
    }
    if (reps >= 3 && value == 0) {
      total_reps_zero += reps;
      ++count_reps_zero;
    }
    if (reps >= 4 && value != 0) {
      total_reps_non_zero += reps;
      ++count_reps_non_zero;
    }
    i += reps;
  }
  *use_rle_for_non_zero =
      
# 401 "project/brotli/c/enc/entropy_encode.c" 3 4
     (!!(
# 401 "project/brotli/c/enc/entropy_encode.c"
     total_reps_non_zero > count_reps_non_zero * 2
# 401 "project/brotli/c/enc/entropy_encode.c" 3 4
     ) ? 1 : 0)
# 401 "project/brotli/c/enc/entropy_encode.c"
                                                                  ;
  *use_rle_for_zero = 
# 402 "project/brotli/c/enc/entropy_encode.c" 3 4
                     (!!(
# 402 "project/brotli/c/enc/entropy_encode.c"
                     total_reps_zero > count_reps_zero * 2
# 402 "project/brotli/c/enc/entropy_encode.c" 3 4
                     ) ? 1 : 0)
# 402 "project/brotli/c/enc/entropy_encode.c"
                                                                          ;
}

void BrotliWriteHuffmanTree(const uint8_t* depth,
                            size_t length,
                            size_t* tree_size,
                            uint8_t* tree,
                            uint8_t* extra_bits_data) {
  uint8_t previous_value = 8;
  size_t i;
  
# 412 "project/brotli/c/enc/entropy_encode.c" 3 4
 int 
# 412 "project/brotli/c/enc/entropy_encode.c"
             use_rle_for_non_zero = 
# 412 "project/brotli/c/enc/entropy_encode.c" 3 4
                                    0
# 412 "project/brotli/c/enc/entropy_encode.c"
                                                ;
  
# 413 "project/brotli/c/enc/entropy_encode.c" 3 4
 int 
# 413 "project/brotli/c/enc/entropy_encode.c"
             use_rle_for_zero = 
# 413 "project/brotli/c/enc/entropy_encode.c" 3 4
                                0
# 413 "project/brotli/c/enc/entropy_encode.c"
                                            ;


  size_t new_length = length;
  for (i = 0; i < length; ++i) {
    if (depth[length - i - 1] == 0) {
      --new_length;
    } else {
      break;
    }
  }


  if (length > 50) {


    DecideOverRleUse(depth, new_length,
                     &use_rle_for_non_zero, &use_rle_for_zero);
  }


  for (i = 0; i < new_length;) {
    const uint8_t value = depth[i];
    size_t reps = 1;
    if ((value != 0 && use_rle_for_non_zero) ||
        (value == 0 && use_rle_for_zero)) {
      size_t k;
      for (k = i + 1; k < new_length && depth[k] == value; ++k) {
        ++reps;
      }
    }
    if (value == 0) {
      BrotliWriteHuffmanTreeRepetitionsZeros(
          reps, tree_size, tree, extra_bits_data);
    } else {
      BrotliWriteHuffmanTreeRepetitions(previous_value,
                                        value, reps, tree_size,
                                        tree, extra_bits_data);
      previous_value = value;
    }
    i += reps;
  }
}

static uint16_t BrotliReverseBits(size_t num_bits, uint16_t bits) {
  static const size_t kLut[16] = {
    0x00, 0x08, 0x04, 0x0C, 0x02, 0x0A, 0x06, 0x0E,
    0x01, 0x09, 0x05, 0x0D, 0x03, 0x0B, 0x07, 0x0F
  };
  size_t retval = kLut[bits & 0x0F];
  size_t i;
  for (i = 4; i < num_bits; i += 4) {
    retval <<= 4;
    bits = (uint16_t)(bits >> 4);
    retval |= kLut[bits & 0x0F];
  }
  retval >>= ((0 - num_bits) & 0x03);
  return (uint16_t)retval;
}




void BrotliConvertBitDepthsToSymbols(const uint8_t* depth,
                                     size_t len,
                                     uint16_t* bits) {


  uint16_t bl_count[16] = { 0 };
  uint16_t next_code[16];
  size_t i;
  int code = 0;
  for (i = 0; i < len; ++i) {
    ++bl_count[depth[i]];
  }
  bl_count[0] = 0;
  next_code[0] = 0;
  for (i = 1; i < 16; ++i) {
    code = (code + bl_count[i - 1]) << 1;
    next_code[i] = (uint16_t)code;
  }
  for (i = 0; i < len; ++i) {
    if (depth[i]) {
      bits[i] = BrotliReverseBits(depth[i], next_code[depth[i]]++);
    }
  }
}
