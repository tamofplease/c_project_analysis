# 0 "project/brotli/c/dec/huffman.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/dec/huffman.c"
# 9 "project/brotli/c/dec/huffman.c"
# 1 "project/brotli/c/dec/./huffman.h" 1
# 12 "project/brotli/c/dec/./huffman.h"
# 1 "project/brotli/c/dec/./../common/platform.h" 1
# 26 "project/brotli/c/dec/./../common/platform.h"
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
# 27 "project/brotli/c/dec/./../common/platform.h" 2

# 1 "/usr/local/include/brotli/port.h" 1 3 4
# 29 "project/brotli/c/dec/./../common/platform.h" 2
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
# 30 "project/brotli/c/dec/./../common/platform.h" 2
# 340 "project/brotli/c/dec/./../common/platform.h"

# 340 "project/brotli/c/dec/./../common/platform.h"
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
# 502 "project/brotli/c/dec/./../common/platform.h"
static inline __attribute__((__always_inline__)) void BrotliRBit(void) { }
# 516 "project/brotli/c/dec/./../common/platform.h"
static inline __attribute__((__always_inline__)) double brotli_min_double (double a, double b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) double brotli_max_double (double a, double b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_min_float (float a, float b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_max_float (float a, float b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_min_int (int a, int b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_max_int (int a, int b) { return a > b ? a : b; }
static inline __attribute__((__always_inline__)) size_t brotli_min_size_t (size_t a, size_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) size_t brotli_max_size_t (size_t a, size_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_min_uint32_t (uint32_t a, uint32_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_max_uint32_t (uint32_t a, uint32_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_min_uint8_t (uint8_t a, uint8_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_max_uint8_t (uint8_t a, uint8_t b) { return a > b ? a : b; }
# 559 "project/brotli/c/dec/./../common/platform.h"
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
# 13 "project/brotli/c/dec/./huffman.h" 2
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
# 10 "project/brotli/c/dec/huffman.c" 2



# 1 "project/brotli/c/dec/../common/constants.h" 1
# 15 "project/brotli/c/dec/../common/constants.h"
# 1 "project/brotli/c/dec/../common/./platform.h" 1
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
# 14 "project/brotli/c/dec/huffman.c" 2
# 1 "project/brotli/c/dec/../common/platform.h" 1
# 15 "project/brotli/c/dec/huffman.c" 2
# 28 "project/brotli/c/dec/huffman.c"
static uint8_t kReverseBits[1 << 8] = {
  0x00, 0x80, 0x40, 0xC0, 0x20, 0xA0, 0x60, 0xE0,
  0x10, 0x90, 0x50, 0xD0, 0x30, 0xB0, 0x70, 0xF0,
  0x08, 0x88, 0x48, 0xC8, 0x28, 0xA8, 0x68, 0xE8,
  0x18, 0x98, 0x58, 0xD8, 0x38, 0xB8, 0x78, 0xF8,
  0x04, 0x84, 0x44, 0xC4, 0x24, 0xA4, 0x64, 0xE4,
  0x14, 0x94, 0x54, 0xD4, 0x34, 0xB4, 0x74, 0xF4,
  0x0C, 0x8C, 0x4C, 0xCC, 0x2C, 0xAC, 0x6C, 0xEC,
  0x1C, 0x9C, 0x5C, 0xDC, 0x3C, 0xBC, 0x7C, 0xFC,
  0x02, 0x82, 0x42, 0xC2, 0x22, 0xA2, 0x62, 0xE2,
  0x12, 0x92, 0x52, 0xD2, 0x32, 0xB2, 0x72, 0xF2,
  0x0A, 0x8A, 0x4A, 0xCA, 0x2A, 0xAA, 0x6A, 0xEA,
  0x1A, 0x9A, 0x5A, 0xDA, 0x3A, 0xBA, 0x7A, 0xFA,
  0x06, 0x86, 0x46, 0xC6, 0x26, 0xA6, 0x66, 0xE6,
  0x16, 0x96, 0x56, 0xD6, 0x36, 0xB6, 0x76, 0xF6,
  0x0E, 0x8E, 0x4E, 0xCE, 0x2E, 0xAE, 0x6E, 0xEE,
  0x1E, 0x9E, 0x5E, 0xDE, 0x3E, 0xBE, 0x7E, 0xFE,
  0x01, 0x81, 0x41, 0xC1, 0x21, 0xA1, 0x61, 0xE1,
  0x11, 0x91, 0x51, 0xD1, 0x31, 0xB1, 0x71, 0xF1,
  0x09, 0x89, 0x49, 0xC9, 0x29, 0xA9, 0x69, 0xE9,
  0x19, 0x99, 0x59, 0xD9, 0x39, 0xB9, 0x79, 0xF9,
  0x05, 0x85, 0x45, 0xC5, 0x25, 0xA5, 0x65, 0xE5,
  0x15, 0x95, 0x55, 0xD5, 0x35, 0xB5, 0x75, 0xF5,
  0x0D, 0x8D, 0x4D, 0xCD, 0x2D, 0xAD, 0x6D, 0xED,
  0x1D, 0x9D, 0x5D, 0xDD, 0x3D, 0xBD, 0x7D, 0xFD,
  0x03, 0x83, 0x43, 0xC3, 0x23, 0xA3, 0x63, 0xE3,
  0x13, 0x93, 0x53, 0xD3, 0x33, 0xB3, 0x73, 0xF3,
  0x0B, 0x8B, 0x4B, 0xCB, 0x2B, 0xAB, 0x6B, 0xEB,
  0x1B, 0x9B, 0x5B, 0xDB, 0x3B, 0xBB, 0x7B, 0xFB,
  0x07, 0x87, 0x47, 0xC7, 0x27, 0xA7, 0x67, 0xE7,
  0x17, 0x97, 0x57, 0xD7, 0x37, 0xB7, 0x77, 0xF7,
  0x0F, 0x8F, 0x4F, 0xCF, 0x2F, 0xAF, 0x6F, 0xEF,
  0x1F, 0x9F, 0x5F, 0xDF, 0x3F, 0xBF, 0x7F, 0xFF
};
# 70 "project/brotli/c/dec/huffman.c"
static inline __attribute__((__always_inline__)) uint64_t BrotliReverseBits(uint64_t num) {



  return kReverseBits[num];

}



static inline __attribute__((__always_inline__)) void ReplicateValue(HuffmanCode* table,
                                         int step, int end,
                                         HuffmanCode code) {
  do {
    end -= step;
    table[end] = code;
  } while (end > 0);
}




static inline __attribute__((__always_inline__)) int NextTableBitSize(const uint16_t* const count,
                                          int len, int root_bits) {
  int left = 1 << (len - root_bits);
  while (len < 15) {
    left -= count[len];
    if (left <= 0) break;
    ++len;
    left <<= 1;
  }
  return len - root_bits;
}

void BrotliBuildCodeLengthsHuffmanTable(HuffmanCode* table,
                                        const uint8_t* const code_lengths,
                                        uint16_t* count) {
  HuffmanCode code;
  int symbol;
  uint64_t key;
  uint64_t key_step;
  int step;
  int table_size;
  int sorted[(17 + 1)];

  int offset[5 + 1];
  int bits;
  int bits_count;
 
                                        ;


  symbol = -1;
  bits = 1;
  { if ((5 & 1) != 0) {{ symbol += count[bits]; offset[bits] = symbol; bits++; };} if ((5 & 2) != 0) {{ symbol += count[bits]; offset[bits] = symbol; bits++; }; { symbol += count[bits]; offset[bits] = symbol; bits++; };} if ((5 & 4) != 0) {{ symbol += count[bits]; offset[bits] = symbol; bits++; }; { symbol += count[bits]; offset[bits] = symbol; bits++; }; { symbol += count[bits]; offset[bits] = symbol; bits++; }; { symbol += count[bits]; offset[bits] = symbol; bits++; };} }



    ;

  offset[0] = (17 + 1) - 1;


  symbol = (17 + 1);
  do {
    { if ((6 & 1) != 0) {{ symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; };} if ((6 & 2) != 0) {{ symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; }; { symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; };} if ((6 & 4) != 0) {{ symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; }; { symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; }; { symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; }; { symbol--; sorted[offset[code_lengths[symbol]]--] = symbol; };} }


      ;
  } while (symbol != 0);

  table_size = 1 << 5;


  if (offset[0] == 0) {
    code = ConstructHuffmanCode(0, (uint16_t)sorted[0]);
    for (key = 0; key < (uint64_t)table_size; ++key) {
      table[key] = code;
    }
    return;
  }


  key = 0;
  key_step = ((uint64_t)1 << (8 - 1 + 0));
  symbol = 0;
  bits = 1;
  step = 2;
  do {
    for (bits_count = count[bits]; bits_count != 0; --bits_count) {
      code = ConstructHuffmanCode((uint8_t)bits, (uint16_t)sorted[symbol++]);
      ReplicateValue(&table[BrotliReverseBits(key)], step, table_size, code);
      key += key_step;
    }
    step <<= 1;
    key_step >>= 1;
  } while (++bits <= 5);
}

uint32_t BrotliBuildHuffmanTable(HuffmanCode* root_table,
                                 int root_bits,
                                 const uint16_t* const symbol_lists,
                                 uint16_t* count) {
  HuffmanCode code;
  HuffmanCode* table;
  int len;
  int symbol;
  uint64_t key;
  uint64_t key_step;
  uint64_t sub_key;
  uint64_t sub_key_step;
  int step;
  int table_bits;
  int table_size;
  int total_size;
  int max_length = -1;
  int bits;
  int bits_count;

  ;
 
                                        ;

  while (symbol_lists[max_length] == 0xFFFF) max_length--;
  max_length += 15 + 1;

  table = root_table;
  table_bits = root_bits;
  table_size = 1 << table_bits;
  total_size = table_size;



  if (table_bits > max_length) {
    table_bits = max_length;
    table_size = 1 << table_bits;
  }
  key = 0;
  key_step = ((uint64_t)1 << (8 - 1 + 0));
  bits = 1;
  step = 2;
  do {
    symbol = bits - (15 + 1);
    for (bits_count = count[bits]; bits_count != 0; --bits_count) {
      symbol = symbol_lists[symbol];
      code = ConstructHuffmanCode((uint8_t)bits, (uint16_t)symbol);
      ReplicateValue(&table[BrotliReverseBits(key)], step, table_size, code);
      key += key_step;
    }
    step <<= 1;
    key_step >>= 1;
  } while (++bits <= table_bits);


  while (total_size != table_size) {
    
# 225 "project/brotli/c/dec/huffman.c" 3 4
   __builtin___memcpy_chk (
# 225 "project/brotli/c/dec/huffman.c"
   &table[table_size]
# 225 "project/brotli/c/dec/huffman.c" 3 4
   , 
# 225 "project/brotli/c/dec/huffman.c"
   &table[0], (size_t)table_size * sizeof(table[0])
# 225 "project/brotli/c/dec/huffman.c" 3 4
   , __builtin_object_size (
# 225 "project/brotli/c/dec/huffman.c"
   &table[table_size]
# 225 "project/brotli/c/dec/huffman.c" 3 4
   , 0))
                                                 
# 226 "project/brotli/c/dec/huffman.c"
                                                ;
    table_size <<= 1;
  }


  key_step = ((uint64_t)1 << (8 - 1 + 0)) >> (root_bits - 1);
  sub_key = (((uint64_t)1 << (8 - 1 + 0)) << 1);
  sub_key_step = ((uint64_t)1 << (8 - 1 + 0));
  for (len = root_bits + 1, step = 2; len <= max_length; ++len) {
    symbol = len - (15 + 1);
    for (; count[len] != 0; --count[len]) {
      if (sub_key == (((uint64_t)1 << (8 - 1 + 0)) << 1U)) {
        table += table_size;
        table_bits = NextTableBitSize(count, len, root_bits);
        table_size = 1 << table_bits;
        total_size += table_size;
        sub_key = BrotliReverseBits(key);
        key += key_step;
        root_table[sub_key] = ConstructHuffmanCode(
            (uint8_t)(table_bits + root_bits),
            (uint16_t)(((size_t)(table - root_table)) - sub_key));
        sub_key = 0;
      }
      symbol = symbol_lists[symbol];
      code = ConstructHuffmanCode((uint8_t)(len - root_bits), (uint16_t)symbol);
      ReplicateValue(
          &table[BrotliReverseBits(sub_key)], step, table_size, code);
      sub_key += sub_key_step;
    }
    step <<= 1;
    sub_key_step >>= 1;
  }
  return (uint32_t)total_size;
}

uint32_t BrotliBuildSimpleHuffmanTable(HuffmanCode* table,
                                       int root_bits,
                                       uint16_t* val,
                                       uint32_t num_symbols) {
  uint32_t table_size = 1;
  const uint32_t goal_size = 1U << root_bits;
  switch (num_symbols) {
    case 0:
      table[0] = ConstructHuffmanCode(0, val[0]);
      break;
    case 1:
      if (val[1] > val[0]) {
        table[0] = ConstructHuffmanCode(1, val[0]);
        table[1] = ConstructHuffmanCode(1, val[1]);
      } else {
        table[0] = ConstructHuffmanCode(1, val[1]);
        table[1] = ConstructHuffmanCode(1, val[0]);
      }
      table_size = 2;
      break;
    case 2:
      table[0] = ConstructHuffmanCode(1, val[0]);
      table[2] = ConstructHuffmanCode(1, val[0]);
      if (val[2] > val[1]) {
        table[1] = ConstructHuffmanCode(2, val[1]);
        table[3] = ConstructHuffmanCode(2, val[2]);
      } else {
        table[1] = ConstructHuffmanCode(2, val[2]);
        table[3] = ConstructHuffmanCode(2, val[1]);
      }
      table_size = 4;
      break;
    case 3: {
      int i, k;
      for (i = 0; i < 3; ++i) {
        for (k = i + 1; k < 4; ++k) {
          if (val[k] < val[i]) {
            uint16_t t = val[k];
            val[k] = val[i];
            val[i] = t;
          }
        }
      }
      table[0] = ConstructHuffmanCode(2, val[0]);
      table[2] = ConstructHuffmanCode(2, val[1]);
      table[1] = ConstructHuffmanCode(2, val[2]);
      table[3] = ConstructHuffmanCode(2, val[3]);
      table_size = 4;
      break;
    }
    case 4: {
      if (val[3] < val[2]) {
        uint16_t t = val[3];
        val[3] = val[2];
        val[2] = t;
      }
      table[0] = ConstructHuffmanCode(1, val[0]);
      table[1] = ConstructHuffmanCode(2, val[1]);
      table[2] = ConstructHuffmanCode(1, val[0]);
      table[3] = ConstructHuffmanCode(3, val[2]);
      table[4] = ConstructHuffmanCode(1, val[0]);
      table[5] = ConstructHuffmanCode(2, val[1]);
      table[6] = ConstructHuffmanCode(1, val[0]);
      table[7] = ConstructHuffmanCode(3, val[3]);
      table_size = 8;
      break;
    }
  }
  while (table_size != goal_size) {
    
# 330 "project/brotli/c/dec/huffman.c" 3 4
   __builtin___memcpy_chk (
# 330 "project/brotli/c/dec/huffman.c"
   &table[table_size]
# 330 "project/brotli/c/dec/huffman.c" 3 4
   , 
# 330 "project/brotli/c/dec/huffman.c"
   &table[0], (size_t)table_size * sizeof(table[0])
# 330 "project/brotli/c/dec/huffman.c" 3 4
   , __builtin_object_size (
# 330 "project/brotli/c/dec/huffman.c"
   &table[table_size]
# 330 "project/brotli/c/dec/huffman.c" 3 4
   , 0))
                                                 
# 331 "project/brotli/c/dec/huffman.c"
                                                ;
    table_size <<= 1;
  }
  return goal_size;
}
