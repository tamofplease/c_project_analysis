# 0 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
# 21 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
# 1 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h" 1
# 36 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 37 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h" 2
# 56 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h"
extern char *stpcpy (char *__dest, const char *__src);
# 22 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 2
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h" 1
# 24 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 1
# 24 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
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
# 25 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 26 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 2
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 1
# 25 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 1 3 4
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/symcat.h" 1 3 4
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 2 3 4
# 62 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef long long bfd_int64_t;
typedef unsigned long long bfd_uint64_t;
# 79 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef struct bfd bfd;
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef int bfd_boolean;
# 104 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef unsigned long long bfd_vma;
typedef long long bfd_signed_vma;
typedef unsigned long long bfd_size_type;
typedef unsigned long long symvalue;
# 159 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef long long file_ptr;
typedef unsigned long long ufile_ptr;

extern void bfd_sprintf_vma (bfd *, char *, bfd_vma);
extern void bfd_fprintf_vma (bfd *, void *, bfd_vma);




typedef unsigned int flagword;
typedef unsigned char bfd_byte;



typedef enum bfd_format
{
  bfd_unknown = 0,
  bfd_object,
  bfd_archive,
  bfd_core,
  bfd_type_end
}
bfd_format;
# 250 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef unsigned long symindex;


typedef const struct reloc_howto_struct reloc_howto_type;
# 272 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef struct carsym
{
  char *name;
  file_ptr file_offset;
}
carsym;



struct orl
{
  char **name;
  union
  {
    file_ptr pos;
    bfd *abfd;
  } u;
  int namidx;
};


typedef struct lineno_cache_entry
{
  unsigned int line_number;
  union
  {
    struct bfd_symbol *sym;
    bfd_vma offset;
  } u;
}
alent;






typedef struct bfd_section *sec_ptr;
# 334 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef struct stat stat_type;

typedef enum bfd_print_symbol
{
  bfd_print_symbol_name,
  bfd_print_symbol_more,
  bfd_print_symbol_all
} bfd_print_symbol_type;



typedef struct _symbol_info
{
  symvalue value;
  char type;
  const char *name;
  unsigned char stab_type;
  char stab_other;
  short stab_desc;
  const char *stab_name;
} symbol_info;



extern const char *bfd_get_stab_name (int);






struct bfd_hash_entry
{

  struct bfd_hash_entry *next;

  const char *string;


  unsigned long hash;
};



struct bfd_hash_table
{

  struct bfd_hash_entry **table;

  unsigned int size;

  unsigned int entsize;







  struct bfd_hash_entry *(*newfunc)
    (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);


  void *memory;
};


extern bfd_boolean bfd_hash_table_init
  (struct bfd_hash_table *,
   struct bfd_hash_entry *(*) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int);


extern bfd_boolean bfd_hash_table_init_n
  (struct bfd_hash_table *,
   struct bfd_hash_entry *(*) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int, unsigned int);


extern void bfd_hash_table_free
  (struct bfd_hash_table *);





extern struct bfd_hash_entry *bfd_hash_lookup
  (struct bfd_hash_table *, const char *, bfd_boolean create,
   bfd_boolean copy);


extern void bfd_hash_replace
  (struct bfd_hash_table *, struct bfd_hash_entry *old,
   struct bfd_hash_entry *nw);


extern struct bfd_hash_entry *bfd_hash_newfunc
  (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);


extern void *bfd_hash_allocate
  (struct bfd_hash_table *, unsigned int);




extern void bfd_hash_traverse
  (struct bfd_hash_table *,
   bfd_boolean (*) (struct bfd_hash_entry *, void *),
   void *info);




extern void bfd_hash_set_default_size (bfd_size_type);




struct stab_info
{

  struct bfd_strtab_hash *strings;

  struct bfd_hash_table includes;

  struct bfd_section *stabstr;
};
# 474 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd_size_type bfd_bread (void *, bfd_size_type, bfd *);
extern bfd_size_type bfd_bwrite (const void *, bfd_size_type, bfd *);
extern int bfd_seek (bfd *, file_ptr, int);
extern file_ptr bfd_tell (bfd *);
extern int bfd_flush (bfd *);
extern int bfd_stat (bfd *, struct stat *);
# 506 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern void warn_deprecated (const char *, const char *, int, const char *);
# 544 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd_boolean bfd_cache_close
  (bfd *abfd);


extern bfd_boolean bfd_cache_close_all (void);

extern bfd_boolean bfd_record_phdr
  (bfd *, unsigned long, bfd_boolean, flagword, bfd_boolean, bfd_vma,
   bfd_boolean, bfd_boolean, unsigned int, struct bfd_section **);



bfd_uint64_t bfd_getb64 (const void *);
bfd_uint64_t bfd_getl64 (const void *);
bfd_int64_t bfd_getb_signed_64 (const void *);
bfd_int64_t bfd_getl_signed_64 (const void *);
bfd_signed_vma bfd_getb_signed_32 (const void *);
bfd_signed_vma bfd_getl_signed_32 (const void *);






bfd_signed_vma bfd_getb_signed_16 (const void *);
bfd_signed_vma bfd_getl_signed_16 (const void *);
void bfd_putb64 (bfd_uint64_t, void *);
void bfd_putl64 (bfd_uint64_t, void *);
void bfd_putb32 (bfd_vma, void *);
void bfd_putl32 (bfd_vma, void *);
void bfd_putb16 (bfd_vma, void *);
void bfd_putl16 (bfd_vma, void *);




static inline bfd_uint64_t
bfd_get_bits (const void *p, int bits, bfd_boolean big_p)
{
  const bfd_byte *addr = (const bfd_byte *) p;
  bfd_uint64_t data;
  int i;
  int bytes;

  if (bits % 8 != 0)
    return 0;

  data = 0;
  bytes = bits / 8;
  for (i = 0; i < bytes; i++)
    {
      int addr_index = big_p ? i : bytes - i - 1;

      data = (data << 8) | addr[addr_index];
    }

  return data;
}
void bfd_put_bits (bfd_uint64_t, void *, int, bfd_boolean);

extern bfd_boolean bfd_section_already_linked_table_init (void);
extern void bfd_section_already_linked_table_free (void);




struct ecoff_debug_info;
struct ecoff_debug_swap;
struct ecoff_extr;
struct bfd_symbol;
struct bfd_link_info;
struct bfd_link_hash_entry;
struct bfd_elf_version_tree;

extern bfd_vma bfd_ecoff_get_gp_value
  (bfd * abfd);
extern bfd_boolean bfd_ecoff_set_gp_value
  (bfd *abfd, bfd_vma gp_value);
extern bfd_boolean bfd_ecoff_set_regmasks
  (bfd *abfd, unsigned long gprmask, unsigned long fprmask,
   unsigned long *cprmask);
extern void *bfd_ecoff_debug_init
  (bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, struct bfd_link_info *);
extern void bfd_ecoff_debug_free
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_accumulate
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, bfd *input_bfd,
   struct ecoff_debug_info *input_debug,
   const struct ecoff_debug_swap *input_swap, struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_accumulate_other
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, bfd *input_bfd,
   struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_externals
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, bfd_boolean relocatable,
   bfd_boolean (*get_extr) (struct bfd_symbol *, struct ecoff_extr *),
   void (*set_index) (struct bfd_symbol *, bfd_size_type));
extern bfd_boolean bfd_ecoff_debug_one_external
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, const char *name,
   struct ecoff_extr *esym);
extern bfd_size_type bfd_ecoff_debug_size
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap);
extern bfd_boolean bfd_ecoff_write_debug
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, file_ptr where);
extern bfd_boolean bfd_ecoff_write_accumulated_debug
  (void *handle, bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap,
   struct bfd_link_info *info, file_ptr where);



struct bfd_link_needed_list
{
  struct bfd_link_needed_list *next;
  bfd *by;
  const char *name;
};

enum dynamic_lib_link_class {
  DYN_NORMAL = 0,
  DYN_AS_NEEDED = 1,
  DYN_DT_NEEDED = 2,
  DYN_NO_ADD_NEEDED = 4,
  DYN_NO_NEEDED = 8
};

extern bfd_boolean bfd_elf_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *, bfd_boolean,
   bfd_boolean);
extern struct bfd_link_needed_list *bfd_elf_get_needed_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_elf_get_bfd_needed_list
  (bfd *, struct bfd_link_needed_list **);
extern bfd_boolean bfd_elf_size_dynamic_sections
  (bfd *, const char *, const char *, const char *, const char * const *,
   struct bfd_link_info *, struct bfd_section **,
   struct bfd_elf_version_tree *);
extern bfd_boolean bfd_elf_size_dynsym_hash_dynstr
  (bfd *, struct bfd_link_info *);
extern void bfd_elf_set_dt_needed_name
  (bfd *, const char *);
extern const char *bfd_elf_get_dt_soname
  (bfd *);
extern void bfd_elf_set_dyn_lib_class
  (bfd *, int);
extern int bfd_elf_get_dyn_lib_class
  (bfd *);
extern struct bfd_link_needed_list *bfd_elf_get_runpath_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_elf_discard_info
  (bfd *, struct bfd_link_info *);
extern unsigned int _bfd_elf_default_action_discarded
  (struct bfd_section *);




extern long bfd_get_elf_phdr_upper_bound
  (bfd *abfd);
# 718 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern int bfd_get_elf_phdrs
  (bfd *abfd, void *phdrs);
# 733 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd *bfd_elf_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma vma, bfd_byte *myaddr, int len));


extern int bfd_get_arch_size
  (bfd *);


extern int bfd_get_sign_extend_vma
  (bfd *);

extern struct bfd_section *_bfd_elf_tls_setup
  (bfd *, struct bfd_link_info *);

extern void _bfd_fix_excluded_sec_syms
  (bfd *, struct bfd_link_info *);

extern unsigned bfd_m68k_mach_to_features (int);

extern int bfd_m68k_features_to_mach (unsigned);

extern bfd_boolean bfd_m68k_elf32_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *,
   char **);

extern bfd_boolean bfd_bfin_elf32_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *,
   char **);



extern struct bfd_link_needed_list *bfd_sunos_get_needed_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_sunos_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_sunos_size_dynamic_sections
  (bfd *, struct bfd_link_info *, struct bfd_section **,
   struct bfd_section **, struct bfd_section **);



extern bfd_boolean bfd_i386linux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_m68klinux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_sparclinux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);



struct _bfd_window_internal;
typedef struct _bfd_window_internal bfd_window_internal;

typedef struct _bfd_window
{

  void *data;
  bfd_size_type size;






  struct _bfd_window_internal *i;
}
bfd_window;

extern void bfd_init_window
  (bfd_window *);
extern void bfd_free_window
  (bfd_window *);
extern bfd_boolean bfd_get_file_window
  (bfd *, file_ptr, bfd_size_type, bfd_window *, bfd_boolean);



extern bfd_boolean bfd_xcoff_link_record_set
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_size_type);
extern bfd_boolean bfd_xcoff_import_symbol
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_vma,
   const char *, const char *, const char *, unsigned int);
extern bfd_boolean bfd_xcoff_export_symbol
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *);
extern bfd_boolean bfd_xcoff_link_count_reloc
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_xcoff_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_xcoff_size_dynamic_sections
  (bfd *, struct bfd_link_info *, const char *, const char *,
   unsigned long, unsigned long, unsigned long, bfd_boolean,
   int, bfd_boolean, bfd_boolean, struct bfd_section **, bfd_boolean);
extern bfd_boolean bfd_xcoff_link_generate_rtinit
  (bfd *, const char *, const char *, bfd_boolean);


extern bfd_boolean bfd_xcoff_ar_archive_set_magic
  (bfd *, char *);




struct internal_syment;
union internal_auxent;


extern bfd_boolean bfd_coff_get_syment
  (bfd *, struct bfd_symbol *, struct internal_syment *);

extern bfd_boolean bfd_coff_get_auxent
  (bfd *, struct bfd_symbol *, int, union internal_auxent *);

extern bfd_boolean bfd_coff_set_symbol_class
  (bfd *, struct bfd_symbol *, unsigned int);

extern bfd_boolean bfd_m68k_coff_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *, char **);


extern bfd_boolean bfd_arm_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_arm_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

extern bfd_boolean bfd_arm_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_arm_pe_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_arm_pe_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

extern bfd_boolean bfd_arm_pe_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_elf32_arm_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_elf32_arm_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

void bfd_elf32_arm_set_target_relocs
  (struct bfd_link_info *, int, char *, int, int);

extern bfd_boolean bfd_elf32_arm_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf32_arm_add_glue_sections_to_bfd
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_is_arm_mapping_symbol_name
  (const char * name);


extern bfd_boolean bfd_arm_merge_machines
  (bfd *, bfd *);

extern bfd_boolean bfd_arm_update_notes
  (bfd *, const char *);

extern unsigned int bfd_arm_get_mach_from_notes
  (bfd *, const char *);


extern void bfd_ticoff_set_section_load_page
  (struct bfd_section *, int);

extern int bfd_ticoff_get_section_load_page
  (struct bfd_section *);


extern bfd_vma bfd_h8300_pad_address
  (bfd *, bfd_vma);


extern void bfd_elf32_ia64_after_parse
  (int);

extern void bfd_elf64_ia64_after_parse
  (int);






struct coff_comdat_info
{

  const char *name;





  long symbol;
};

extern struct coff_comdat_info *bfd_coff_get_comdat_section
  (bfd *, struct bfd_section *);


void bfd_init (void);


bfd *bfd_fopen (const char *filename, const char *target,
    const char *mode, int fd);

bfd *bfd_openr (const char *filename, const char *target);

bfd *bfd_fdopenr (const char *filename, const char *target, int fd);

bfd *bfd_openstreamr (const char *, const char *, void *);

bfd *bfd_openr_iovec (const char *filename, const char *target,
    void *(*open) (struct bfd *nbfd,
    void *open_closure),
    void *open_closure,
    file_ptr (*pread) (struct bfd *nbfd,
    void *stream,
    void *buf,
    file_ptr nbytes,
    file_ptr offset),
    int (*close) (struct bfd *nbfd,
    void *stream));

bfd *bfd_openw (const char *filename, const char *target);

bfd_boolean bfd_close (bfd *abfd);

bfd_boolean bfd_close_all_done (bfd *);

bfd *bfd_create (const char *filename, bfd *templ);

bfd_boolean bfd_make_writable (bfd *abfd);

bfd_boolean bfd_make_readable (bfd *abfd);

unsigned long bfd_calc_gnu_debuglink_crc32
   (unsigned long crc, const unsigned char *buf, bfd_size_type len);

char *bfd_follow_gnu_debuglink (bfd *abfd, const char *dir);

struct bfd_section *bfd_create_gnu_debuglink_section
   (bfd *abfd, const char *filename);

bfd_boolean bfd_fill_in_gnu_debuglink_section
   (bfd *abfd, struct bfd_section *sect, const char *filename);
# 1102 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
long bfd_get_mtime (bfd *abfd);

long bfd_get_size (bfd *abfd);



typedef struct bfd_section
{


  const char *name;


  int id;


  int index;


  struct bfd_section *next;


  struct bfd_section *prev;




  flagword flags;
# 1304 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  unsigned int user_set_vma : 1;


  unsigned int linker_mark : 1;



  unsigned int linker_has_input : 1;


  unsigned int gc_mark : 1;
  unsigned int gc_mark_from_eh : 1;




  unsigned int segment_mark : 1;


  unsigned int sec_info_type:3;







  unsigned int use_rela_p:1;





  unsigned int has_tls_reloc:1;


  unsigned int has_gp_reloc:1;


  unsigned int need_finalize_relax:1;


  unsigned int reloc_done : 1;
# 1356 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma vma;




  bfd_vma lma;




  bfd_size_type size;
# 1376 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_size_type rawsize;
# 1385 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma output_offset;


  struct bfd_section *output_section;



  unsigned int alignment_power;



  struct reloc_cache_entry *relocation;



  struct reloc_cache_entry **orelocation;


  unsigned reloc_count;





  file_ptr filepos;


  file_ptr rel_filepos;


  file_ptr line_filepos;


  void *userdata;



  unsigned char *contents;


  alent *lineno;


  unsigned int lineno_count;


  unsigned int entsize;



  struct bfd_section *kept_section;



  file_ptr moving_line_filepos;


  int target_index;

  void *used_by_bfd;



  struct relent_chain *constructor_chain;


  bfd *owner;


  struct bfd_symbol *symbol;
  struct bfd_symbol **symbol_ptr_ptr;





  union {
    struct bfd_link_order *link_order;
    struct bfd_section *s;
  } map_head, map_tail;
} asection;
# 1478 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern asection bfd_abs_section;



extern asection bfd_und_section;



extern asection bfd_com_section;


extern asection bfd_ind_section;
# 1499 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern const struct bfd_symbol * const bfd_abs_symbol;
extern const struct bfd_symbol * const bfd_com_symbol;
extern const struct bfd_symbol * const bfd_und_symbol;
extern const struct bfd_symbol * const bfd_ind_symbol;
# 1635 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
void bfd_section_list_clear (bfd *);

asection *bfd_get_section_by_name (bfd *abfd, const char *name);

asection *bfd_get_section_by_name_if
   (bfd *abfd,
    const char *name,
    bfd_boolean (*func) (bfd *abfd, asection *sect, void *obj),
    void *obj);

char *bfd_get_unique_section_name
   (bfd *abfd, const char *templat, int *count);

asection *bfd_make_section_old_way (bfd *abfd, const char *name);

asection *bfd_make_section_anyway_with_flags
   (bfd *abfd, const char *name, flagword flags);

asection *bfd_make_section_anyway (bfd *abfd, const char *name);

asection *bfd_make_section_with_flags
   (bfd *, const char *name, flagword flags);

asection *bfd_make_section (bfd *, const char *name);

bfd_boolean bfd_set_section_flags
   (bfd *abfd, asection *sec, flagword flags);

void bfd_map_over_sections
   (bfd *abfd,
    void (*func) (bfd *abfd, asection *sect, void *obj),
    void *obj);

asection *bfd_sections_find_if
   (bfd *abfd,
    bfd_boolean (*operation) (bfd *abfd, asection *sect, void *obj),
    void *obj);

bfd_boolean bfd_set_section_size
   (bfd *abfd, asection *sec, bfd_size_type val);

bfd_boolean bfd_set_section_contents
   (bfd *abfd, asection *section, const void *data,
    file_ptr offset, bfd_size_type count);

bfd_boolean bfd_get_section_contents
   (bfd *abfd, asection *section, void *location, file_ptr offset,
    bfd_size_type count);

bfd_boolean bfd_malloc_and_get_section
   (bfd *abfd, asection *section, bfd_byte **buf);

bfd_boolean bfd_copy_private_section_data
   (bfd *ibfd, asection *isec, bfd *obfd, asection *osec);




bfd_boolean bfd_generic_is_group_section (bfd *, const asection *sec);

bfd_boolean bfd_generic_discard_group (bfd *abfd, asection *group);


enum bfd_architecture
{
  bfd_arch_unknown,
  bfd_arch_obscure,
  bfd_arch_m68k,
# 1727 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_vax,
  bfd_arch_i960,
# 1746 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_or32,

  bfd_arch_sparc,
# 1767 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_mips,
# 1816 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_i386,





  bfd_arch_we32k,
  bfd_arch_tahoe,
  bfd_arch_i860,
  bfd_arch_i370,
  bfd_arch_romp,
  bfd_arch_convex,
  bfd_arch_m88k,
  bfd_arch_m98k,
  bfd_arch_pyramid,
  bfd_arch_h8300,







  bfd_arch_pdp11,
  bfd_arch_powerpc,
# 1861 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_rs6000,




  bfd_arch_hppa,




  bfd_arch_d10v,



  bfd_arch_d30v,
  bfd_arch_dlx,
  bfd_arch_m68hc11,
  bfd_arch_m68hc12,



  bfd_arch_z8k,


  bfd_arch_h8500,
  bfd_arch_sh,
# 1908 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_alpha,



  bfd_arch_arm,
# 1927 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_ns32k,
  bfd_arch_w65,
  bfd_arch_tic30,
  bfd_arch_tic4x,


  bfd_arch_tic54x,
  bfd_arch_tic80,
  bfd_arch_v850,



  bfd_arch_arc,




 bfd_arch_m32c,


  bfd_arch_m32r,



  bfd_arch_mn10200,
  bfd_arch_mn10300,



  bfd_arch_fr30,

  bfd_arch_frv,
# 1967 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_mcore,
  bfd_arch_ia64,


  bfd_arch_ip2k,


 bfd_arch_iq2000,


  bfd_arch_mt,



  bfd_arch_pj,
  bfd_arch_avr,






  bfd_arch_bfin,

  bfd_arch_cr16c,

  bfd_arch_crx,

  bfd_arch_cris,



  bfd_arch_s390,


  bfd_arch_openrisc,
  bfd_arch_mmix,
  bfd_arch_xstormy16,

  bfd_arch_msp430,
# 2022 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_arch_xc16x,



  bfd_arch_xtensa,

  bfd_arch_tricore,

   bfd_arch_maxq,


  bfd_arch_z80,




  bfd_arch_last
  };

typedef struct bfd_arch_info
{
  int bits_per_word;
  int bits_per_address;
  int bits_per_byte;
  enum bfd_architecture arch;
  unsigned long mach;
  const char *arch_name;
  const char *printable_name;
  unsigned int section_align_power;



  bfd_boolean the_default;
  const struct bfd_arch_info * (*compatible)
    (const struct bfd_arch_info *a, const struct bfd_arch_info *b);

  bfd_boolean (*scan) (const struct bfd_arch_info *, const char *);

  const struct bfd_arch_info *next;
}
bfd_arch_info_type;

const char *bfd_printable_name (bfd *abfd);

const bfd_arch_info_type *bfd_scan_arch (const char *string);

const char **bfd_arch_list (void);

const bfd_arch_info_type *bfd_arch_get_compatible
   (const bfd *abfd, const bfd *bbfd, bfd_boolean accept_unknowns);

void bfd_set_arch_info (bfd *abfd, const bfd_arch_info_type *arg);

enum bfd_architecture bfd_get_arch (bfd *abfd);

unsigned long bfd_get_mach (bfd *abfd);

unsigned int bfd_arch_bits_per_byte (bfd *abfd);

unsigned int bfd_arch_bits_per_address (bfd *abfd);

const bfd_arch_info_type *bfd_get_arch_info (bfd *abfd);

const bfd_arch_info_type *bfd_lookup_arch
   (enum bfd_architecture arch, unsigned long machine);

const char *bfd_printable_arch_mach
   (enum bfd_architecture arch, unsigned long machine);

unsigned int bfd_octets_per_byte (bfd *abfd);

unsigned int bfd_arch_mach_octets_per_byte
   (enum bfd_architecture arch, unsigned long machine);


typedef enum bfd_reloc_status
{

  bfd_reloc_ok,


  bfd_reloc_overflow,


  bfd_reloc_outofrange,


  bfd_reloc_continue,


  bfd_reloc_notsupported,


  bfd_reloc_other,


  bfd_reloc_undefined,





  bfd_reloc_dangerous
 }
 bfd_reloc_status_type;


typedef struct reloc_cache_entry
{

  struct bfd_symbol **sym_ptr_ptr;


  bfd_size_type address;


  bfd_vma addend;


  reloc_howto_type *howto;

}
arelent;

enum complain_overflow
{

  complain_overflow_dont,




  complain_overflow_bitfield,



  complain_overflow_signed,



  complain_overflow_unsigned
};

struct reloc_howto_struct
{






  unsigned int type;



  unsigned int rightshift;




  int size;



  unsigned int bitsize;





  bfd_boolean pc_relative;



  unsigned int bitpos;



  enum complain_overflow complain_on_overflow;





  bfd_reloc_status_type (*special_function)
    (bfd *, arelent *, struct bfd_symbol *, void *, asection *,
     bfd *, char **);


  char *name;
# 2228 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean partial_inplace;
# 2238 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma src_mask;



  bfd_vma dst_mask;







  bfd_boolean pcrel_offset;
};
# 2278 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
unsigned int bfd_get_reloc_size (reloc_howto_type *);

typedef struct relent_chain
{
  arelent relent;
  struct relent_chain *next;
}
arelent_chain;

bfd_reloc_status_type bfd_check_overflow
   (enum complain_overflow how,
    unsigned int bitsize,
    unsigned int rightshift,
    unsigned int addrsize,
    bfd_vma relocation);

bfd_reloc_status_type bfd_perform_relocation
   (bfd *abfd,
    arelent *reloc_entry,
    void *data,
    asection *input_section,
    bfd *output_bfd,
    char **error_message);

bfd_reloc_status_type bfd_install_relocation
   (bfd *abfd,
    arelent *reloc_entry,
    void *data, bfd_vma data_start,
    asection *input_section,
    char **error_message);

enum bfd_reloc_code_real {
  _dummy_first_bfd_reloc_code_real,



  BFD_RELOC_64,
  BFD_RELOC_32,
  BFD_RELOC_26,
  BFD_RELOC_24,
  BFD_RELOC_16,
  BFD_RELOC_14,
  BFD_RELOC_8,






  BFD_RELOC_64_PCREL,
  BFD_RELOC_32_PCREL,
  BFD_RELOC_24_PCREL,
  BFD_RELOC_16_PCREL,
  BFD_RELOC_12_PCREL,
  BFD_RELOC_8_PCREL,


  BFD_RELOC_32_SECREL,


  BFD_RELOC_32_GOT_PCREL,
  BFD_RELOC_16_GOT_PCREL,
  BFD_RELOC_8_GOT_PCREL,
  BFD_RELOC_32_GOTOFF,
  BFD_RELOC_16_GOTOFF,
  BFD_RELOC_LO16_GOTOFF,
  BFD_RELOC_HI16_GOTOFF,
  BFD_RELOC_HI16_S_GOTOFF,
  BFD_RELOC_8_GOTOFF,
  BFD_RELOC_64_PLT_PCREL,
  BFD_RELOC_32_PLT_PCREL,
  BFD_RELOC_24_PLT_PCREL,
  BFD_RELOC_16_PLT_PCREL,
  BFD_RELOC_8_PLT_PCREL,
  BFD_RELOC_64_PLTOFF,
  BFD_RELOC_32_PLTOFF,
  BFD_RELOC_16_PLTOFF,
  BFD_RELOC_LO16_PLTOFF,
  BFD_RELOC_HI16_PLTOFF,
  BFD_RELOC_HI16_S_PLTOFF,
  BFD_RELOC_8_PLTOFF,


  BFD_RELOC_68K_GLOB_DAT,
  BFD_RELOC_68K_JMP_SLOT,
  BFD_RELOC_68K_RELATIVE,


  BFD_RELOC_32_BASEREL,
  BFD_RELOC_16_BASEREL,
  BFD_RELOC_LO16_BASEREL,
  BFD_RELOC_HI16_BASEREL,
  BFD_RELOC_HI16_S_BASEREL,
  BFD_RELOC_8_BASEREL,
  BFD_RELOC_RVA,


  BFD_RELOC_8_FFnn,







  BFD_RELOC_32_PCREL_S2,
  BFD_RELOC_16_PCREL_S2,
  BFD_RELOC_23_PCREL_S2,



  BFD_RELOC_HI22,
  BFD_RELOC_LO10,





  BFD_RELOC_GPREL16,
  BFD_RELOC_GPREL32,


  BFD_RELOC_I960_CALLJ,



  BFD_RELOC_NONE,
  BFD_RELOC_SPARC_WDISP22,
  BFD_RELOC_SPARC22,
  BFD_RELOC_SPARC13,
  BFD_RELOC_SPARC_GOT10,
  BFD_RELOC_SPARC_GOT13,
  BFD_RELOC_SPARC_GOT22,
  BFD_RELOC_SPARC_PC10,
  BFD_RELOC_SPARC_PC22,
  BFD_RELOC_SPARC_WPLT30,
  BFD_RELOC_SPARC_COPY,
  BFD_RELOC_SPARC_GLOB_DAT,
  BFD_RELOC_SPARC_JMP_SLOT,
  BFD_RELOC_SPARC_RELATIVE,
  BFD_RELOC_SPARC_UA16,
  BFD_RELOC_SPARC_UA32,
  BFD_RELOC_SPARC_UA64,


  BFD_RELOC_SPARC_BASE13,
  BFD_RELOC_SPARC_BASE22,



  BFD_RELOC_SPARC_10,
  BFD_RELOC_SPARC_11,
  BFD_RELOC_SPARC_OLO10,
  BFD_RELOC_SPARC_HH22,
  BFD_RELOC_SPARC_HM10,
  BFD_RELOC_SPARC_LM22,
  BFD_RELOC_SPARC_PC_HH22,
  BFD_RELOC_SPARC_PC_HM10,
  BFD_RELOC_SPARC_PC_LM22,
  BFD_RELOC_SPARC_WDISP16,
  BFD_RELOC_SPARC_WDISP19,
  BFD_RELOC_SPARC_7,
  BFD_RELOC_SPARC_6,
  BFD_RELOC_SPARC_5,

  BFD_RELOC_SPARC_PLT32,
  BFD_RELOC_SPARC_PLT64,
  BFD_RELOC_SPARC_HIX22,
  BFD_RELOC_SPARC_LOX10,
  BFD_RELOC_SPARC_H44,
  BFD_RELOC_SPARC_M44,
  BFD_RELOC_SPARC_L44,
  BFD_RELOC_SPARC_REGISTER,


  BFD_RELOC_SPARC_REV32,


  BFD_RELOC_SPARC_TLS_GD_HI22,
  BFD_RELOC_SPARC_TLS_GD_LO10,
  BFD_RELOC_SPARC_TLS_GD_ADD,
  BFD_RELOC_SPARC_TLS_GD_CALL,
  BFD_RELOC_SPARC_TLS_LDM_HI22,
  BFD_RELOC_SPARC_TLS_LDM_LO10,
  BFD_RELOC_SPARC_TLS_LDM_ADD,
  BFD_RELOC_SPARC_TLS_LDM_CALL,
  BFD_RELOC_SPARC_TLS_LDO_HIX22,
  BFD_RELOC_SPARC_TLS_LDO_LOX10,
  BFD_RELOC_SPARC_TLS_LDO_ADD,
  BFD_RELOC_SPARC_TLS_IE_HI22,
  BFD_RELOC_SPARC_TLS_IE_LO10,
  BFD_RELOC_SPARC_TLS_IE_LD,
  BFD_RELOC_SPARC_TLS_IE_LDX,
  BFD_RELOC_SPARC_TLS_IE_ADD,
  BFD_RELOC_SPARC_TLS_LE_HIX22,
  BFD_RELOC_SPARC_TLS_LE_LOX10,
  BFD_RELOC_SPARC_TLS_DTPMOD32,
  BFD_RELOC_SPARC_TLS_DTPMOD64,
  BFD_RELOC_SPARC_TLS_DTPOFF32,
  BFD_RELOC_SPARC_TLS_DTPOFF64,
  BFD_RELOC_SPARC_TLS_TPOFF32,
  BFD_RELOC_SPARC_TLS_TPOFF64,







  BFD_RELOC_ALPHA_GPDISP_HI16,





  BFD_RELOC_ALPHA_GPDISP_LO16,




  BFD_RELOC_ALPHA_GPDISP,
# 2523 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  BFD_RELOC_ALPHA_LITERAL,
  BFD_RELOC_ALPHA_ELF_LITERAL,
  BFD_RELOC_ALPHA_LITUSE,




  BFD_RELOC_ALPHA_HINT,



  BFD_RELOC_ALPHA_LINKAGE,



  BFD_RELOC_ALPHA_CODEADDR,



  BFD_RELOC_ALPHA_GPREL_HI16,
  BFD_RELOC_ALPHA_GPREL_LO16,




  BFD_RELOC_ALPHA_BRSGP,


  BFD_RELOC_ALPHA_TLSGD,
  BFD_RELOC_ALPHA_TLSLDM,
  BFD_RELOC_ALPHA_DTPMOD64,
  BFD_RELOC_ALPHA_GOTDTPREL16,
  BFD_RELOC_ALPHA_DTPREL64,
  BFD_RELOC_ALPHA_DTPREL_HI16,
  BFD_RELOC_ALPHA_DTPREL_LO16,
  BFD_RELOC_ALPHA_DTPREL16,
  BFD_RELOC_ALPHA_GOTTPREL16,
  BFD_RELOC_ALPHA_TPREL64,
  BFD_RELOC_ALPHA_TPREL_HI16,
  BFD_RELOC_ALPHA_TPREL_LO16,
  BFD_RELOC_ALPHA_TPREL16,



  BFD_RELOC_MIPS_JMP,


  BFD_RELOC_MIPS16_JMP,


  BFD_RELOC_MIPS16_GPREL,


  BFD_RELOC_HI16,





  BFD_RELOC_HI16_S,


  BFD_RELOC_LO16,


  BFD_RELOC_HI16_PCREL,


  BFD_RELOC_HI16_S_PCREL,


  BFD_RELOC_LO16_PCREL,


  BFD_RELOC_MIPS16_HI16,





  BFD_RELOC_MIPS16_HI16_S,


  BFD_RELOC_MIPS16_LO16,


  BFD_RELOC_MIPS_LITERAL,


  BFD_RELOC_MIPS_GOT16,
  BFD_RELOC_MIPS_CALL16,
  BFD_RELOC_MIPS_GOT_HI16,
  BFD_RELOC_MIPS_GOT_LO16,
  BFD_RELOC_MIPS_CALL_HI16,
  BFD_RELOC_MIPS_CALL_LO16,
  BFD_RELOC_MIPS_SUB,
  BFD_RELOC_MIPS_GOT_PAGE,
  BFD_RELOC_MIPS_GOT_OFST,
  BFD_RELOC_MIPS_GOT_DISP,
  BFD_RELOC_MIPS_SHIFT5,
  BFD_RELOC_MIPS_SHIFT6,
  BFD_RELOC_MIPS_INSERT_A,
  BFD_RELOC_MIPS_INSERT_B,
  BFD_RELOC_MIPS_DELETE,
  BFD_RELOC_MIPS_HIGHEST,
  BFD_RELOC_MIPS_HIGHER,
  BFD_RELOC_MIPS_SCN_DISP,
  BFD_RELOC_MIPS_REL16,
  BFD_RELOC_MIPS_RELGOT,
  BFD_RELOC_MIPS_JALR,
  BFD_RELOC_MIPS_TLS_DTPMOD32,
  BFD_RELOC_MIPS_TLS_DTPREL32,
  BFD_RELOC_MIPS_TLS_DTPMOD64,
  BFD_RELOC_MIPS_TLS_DTPREL64,
  BFD_RELOC_MIPS_TLS_GD,
  BFD_RELOC_MIPS_TLS_LDM,
  BFD_RELOC_MIPS_TLS_DTPREL_HI16,
  BFD_RELOC_MIPS_TLS_DTPREL_LO16,
  BFD_RELOC_MIPS_TLS_GOTTPREL,
  BFD_RELOC_MIPS_TLS_TPREL32,
  BFD_RELOC_MIPS_TLS_TPREL64,
  BFD_RELOC_MIPS_TLS_TPREL_HI16,
  BFD_RELOC_MIPS_TLS_TPREL_LO16,



  BFD_RELOC_MIPS_COPY,
  BFD_RELOC_MIPS_JUMP_SLOT,



  BFD_RELOC_FRV_LABEL16,
  BFD_RELOC_FRV_LABEL24,
  BFD_RELOC_FRV_LO16,
  BFD_RELOC_FRV_HI16,
  BFD_RELOC_FRV_GPREL12,
  BFD_RELOC_FRV_GPRELU12,
  BFD_RELOC_FRV_GPREL32,
  BFD_RELOC_FRV_GPRELHI,
  BFD_RELOC_FRV_GPRELLO,
  BFD_RELOC_FRV_GOT12,
  BFD_RELOC_FRV_GOTHI,
  BFD_RELOC_FRV_GOTLO,
  BFD_RELOC_FRV_FUNCDESC,
  BFD_RELOC_FRV_FUNCDESC_GOT12,
  BFD_RELOC_FRV_FUNCDESC_GOTHI,
  BFD_RELOC_FRV_FUNCDESC_GOTLO,
  BFD_RELOC_FRV_FUNCDESC_VALUE,
  BFD_RELOC_FRV_FUNCDESC_GOTOFF12,
  BFD_RELOC_FRV_FUNCDESC_GOTOFFHI,
  BFD_RELOC_FRV_FUNCDESC_GOTOFFLO,
  BFD_RELOC_FRV_GOTOFF12,
  BFD_RELOC_FRV_GOTOFFHI,
  BFD_RELOC_FRV_GOTOFFLO,
  BFD_RELOC_FRV_GETTLSOFF,
  BFD_RELOC_FRV_TLSDESC_VALUE,
  BFD_RELOC_FRV_GOTTLSDESC12,
  BFD_RELOC_FRV_GOTTLSDESCHI,
  BFD_RELOC_FRV_GOTTLSDESCLO,
  BFD_RELOC_FRV_TLSMOFF12,
  BFD_RELOC_FRV_TLSMOFFHI,
  BFD_RELOC_FRV_TLSMOFFLO,
  BFD_RELOC_FRV_GOTTLSOFF12,
  BFD_RELOC_FRV_GOTTLSOFFHI,
  BFD_RELOC_FRV_GOTTLSOFFLO,
  BFD_RELOC_FRV_TLSOFF,
  BFD_RELOC_FRV_TLSDESC_RELAX,
  BFD_RELOC_FRV_GETTLSOFF_RELAX,
  BFD_RELOC_FRV_TLSOFF_RELAX,
  BFD_RELOC_FRV_TLSMOFF,



  BFD_RELOC_MN10300_GOTOFF24,



  BFD_RELOC_MN10300_GOT32,



  BFD_RELOC_MN10300_GOT24,



  BFD_RELOC_MN10300_GOT16,


  BFD_RELOC_MN10300_COPY,


  BFD_RELOC_MN10300_GLOB_DAT,


  BFD_RELOC_MN10300_JMP_SLOT,


  BFD_RELOC_MN10300_RELATIVE,



  BFD_RELOC_386_GOT32,
  BFD_RELOC_386_PLT32,
  BFD_RELOC_386_COPY,
  BFD_RELOC_386_GLOB_DAT,
  BFD_RELOC_386_JUMP_SLOT,
  BFD_RELOC_386_RELATIVE,
  BFD_RELOC_386_GOTOFF,
  BFD_RELOC_386_GOTPC,
  BFD_RELOC_386_TLS_TPOFF,
  BFD_RELOC_386_TLS_IE,
  BFD_RELOC_386_TLS_GOTIE,
  BFD_RELOC_386_TLS_LE,
  BFD_RELOC_386_TLS_GD,
  BFD_RELOC_386_TLS_LDM,
  BFD_RELOC_386_TLS_LDO_32,
  BFD_RELOC_386_TLS_IE_32,
  BFD_RELOC_386_TLS_LE_32,
  BFD_RELOC_386_TLS_DTPMOD32,
  BFD_RELOC_386_TLS_DTPOFF32,
  BFD_RELOC_386_TLS_TPOFF32,
  BFD_RELOC_386_TLS_GOTDESC,
  BFD_RELOC_386_TLS_DESC_CALL,
  BFD_RELOC_386_TLS_DESC,


  BFD_RELOC_X86_64_GOT32,
  BFD_RELOC_X86_64_PLT32,
  BFD_RELOC_X86_64_COPY,
  BFD_RELOC_X86_64_GLOB_DAT,
  BFD_RELOC_X86_64_JUMP_SLOT,
  BFD_RELOC_X86_64_RELATIVE,
  BFD_RELOC_X86_64_GOTPCREL,
  BFD_RELOC_X86_64_32S,
  BFD_RELOC_X86_64_DTPMOD64,
  BFD_RELOC_X86_64_DTPOFF64,
  BFD_RELOC_X86_64_TPOFF64,
  BFD_RELOC_X86_64_TLSGD,
  BFD_RELOC_X86_64_TLSLD,
  BFD_RELOC_X86_64_DTPOFF32,
  BFD_RELOC_X86_64_GOTTPOFF,
  BFD_RELOC_X86_64_TPOFF32,
  BFD_RELOC_X86_64_GOTOFF64,
  BFD_RELOC_X86_64_GOTPC32,
  BFD_RELOC_X86_64_GOT64,
  BFD_RELOC_X86_64_GOTPCREL64,
  BFD_RELOC_X86_64_GOTPC64,
  BFD_RELOC_X86_64_GOTPLT64,
  BFD_RELOC_X86_64_PLTOFF64,
  BFD_RELOC_X86_64_GOTPC32_TLSDESC,
  BFD_RELOC_X86_64_TLSDESC_CALL,
  BFD_RELOC_X86_64_TLSDESC,


  BFD_RELOC_NS32K_IMM_8,
  BFD_RELOC_NS32K_IMM_16,
  BFD_RELOC_NS32K_IMM_32,
  BFD_RELOC_NS32K_IMM_8_PCREL,
  BFD_RELOC_NS32K_IMM_16_PCREL,
  BFD_RELOC_NS32K_IMM_32_PCREL,
  BFD_RELOC_NS32K_DISP_8,
  BFD_RELOC_NS32K_DISP_16,
  BFD_RELOC_NS32K_DISP_32,
  BFD_RELOC_NS32K_DISP_8_PCREL,
  BFD_RELOC_NS32K_DISP_16_PCREL,
  BFD_RELOC_NS32K_DISP_32_PCREL,


  BFD_RELOC_PDP11_DISP_8_PCREL,
  BFD_RELOC_PDP11_DISP_6_PCREL,


  BFD_RELOC_PJ_CODE_HI16,
  BFD_RELOC_PJ_CODE_LO16,
  BFD_RELOC_PJ_CODE_DIR16,
  BFD_RELOC_PJ_CODE_DIR32,
  BFD_RELOC_PJ_CODE_REL16,
  BFD_RELOC_PJ_CODE_REL32,


  BFD_RELOC_PPC_B26,
  BFD_RELOC_PPC_BA26,
  BFD_RELOC_PPC_TOC16,
  BFD_RELOC_PPC_B16,
  BFD_RELOC_PPC_B16_BRTAKEN,
  BFD_RELOC_PPC_B16_BRNTAKEN,
  BFD_RELOC_PPC_BA16,
  BFD_RELOC_PPC_BA16_BRTAKEN,
  BFD_RELOC_PPC_BA16_BRNTAKEN,
  BFD_RELOC_PPC_COPY,
  BFD_RELOC_PPC_GLOB_DAT,
  BFD_RELOC_PPC_JMP_SLOT,
  BFD_RELOC_PPC_RELATIVE,
  BFD_RELOC_PPC_LOCAL24PC,
  BFD_RELOC_PPC_EMB_NADDR32,
  BFD_RELOC_PPC_EMB_NADDR16,
  BFD_RELOC_PPC_EMB_NADDR16_LO,
  BFD_RELOC_PPC_EMB_NADDR16_HI,
  BFD_RELOC_PPC_EMB_NADDR16_HA,
  BFD_RELOC_PPC_EMB_SDAI16,
  BFD_RELOC_PPC_EMB_SDA2I16,
  BFD_RELOC_PPC_EMB_SDA2REL,
  BFD_RELOC_PPC_EMB_SDA21,
  BFD_RELOC_PPC_EMB_MRKREF,
  BFD_RELOC_PPC_EMB_RELSEC16,
  BFD_RELOC_PPC_EMB_RELST_LO,
  BFD_RELOC_PPC_EMB_RELST_HI,
  BFD_RELOC_PPC_EMB_RELST_HA,
  BFD_RELOC_PPC_EMB_BIT_FLD,
  BFD_RELOC_PPC_EMB_RELSDA,
  BFD_RELOC_PPC64_HIGHER,
  BFD_RELOC_PPC64_HIGHER_S,
  BFD_RELOC_PPC64_HIGHEST,
  BFD_RELOC_PPC64_HIGHEST_S,
  BFD_RELOC_PPC64_TOC16_LO,
  BFD_RELOC_PPC64_TOC16_HI,
  BFD_RELOC_PPC64_TOC16_HA,
  BFD_RELOC_PPC64_TOC,
  BFD_RELOC_PPC64_PLTGOT16,
  BFD_RELOC_PPC64_PLTGOT16_LO,
  BFD_RELOC_PPC64_PLTGOT16_HI,
  BFD_RELOC_PPC64_PLTGOT16_HA,
  BFD_RELOC_PPC64_ADDR16_DS,
  BFD_RELOC_PPC64_ADDR16_LO_DS,
  BFD_RELOC_PPC64_GOT16_DS,
  BFD_RELOC_PPC64_GOT16_LO_DS,
  BFD_RELOC_PPC64_PLT16_LO_DS,
  BFD_RELOC_PPC64_SECTOFF_DS,
  BFD_RELOC_PPC64_SECTOFF_LO_DS,
  BFD_RELOC_PPC64_TOC16_DS,
  BFD_RELOC_PPC64_TOC16_LO_DS,
  BFD_RELOC_PPC64_PLTGOT16_DS,
  BFD_RELOC_PPC64_PLTGOT16_LO_DS,


  BFD_RELOC_PPC_TLS,
  BFD_RELOC_PPC_DTPMOD,
  BFD_RELOC_PPC_TPREL16,
  BFD_RELOC_PPC_TPREL16_LO,
  BFD_RELOC_PPC_TPREL16_HI,
  BFD_RELOC_PPC_TPREL16_HA,
  BFD_RELOC_PPC_TPREL,
  BFD_RELOC_PPC_DTPREL16,
  BFD_RELOC_PPC_DTPREL16_LO,
  BFD_RELOC_PPC_DTPREL16_HI,
  BFD_RELOC_PPC_DTPREL16_HA,
  BFD_RELOC_PPC_DTPREL,
  BFD_RELOC_PPC_GOT_TLSGD16,
  BFD_RELOC_PPC_GOT_TLSGD16_LO,
  BFD_RELOC_PPC_GOT_TLSGD16_HI,
  BFD_RELOC_PPC_GOT_TLSGD16_HA,
  BFD_RELOC_PPC_GOT_TLSLD16,
  BFD_RELOC_PPC_GOT_TLSLD16_LO,
  BFD_RELOC_PPC_GOT_TLSLD16_HI,
  BFD_RELOC_PPC_GOT_TLSLD16_HA,
  BFD_RELOC_PPC_GOT_TPREL16,
  BFD_RELOC_PPC_GOT_TPREL16_LO,
  BFD_RELOC_PPC_GOT_TPREL16_HI,
  BFD_RELOC_PPC_GOT_TPREL16_HA,
  BFD_RELOC_PPC_GOT_DTPREL16,
  BFD_RELOC_PPC_GOT_DTPREL16_LO,
  BFD_RELOC_PPC_GOT_DTPREL16_HI,
  BFD_RELOC_PPC_GOT_DTPREL16_HA,
  BFD_RELOC_PPC64_TPREL16_DS,
  BFD_RELOC_PPC64_TPREL16_LO_DS,
  BFD_RELOC_PPC64_TPREL16_HIGHER,
  BFD_RELOC_PPC64_TPREL16_HIGHERA,
  BFD_RELOC_PPC64_TPREL16_HIGHEST,
  BFD_RELOC_PPC64_TPREL16_HIGHESTA,
  BFD_RELOC_PPC64_DTPREL16_DS,
  BFD_RELOC_PPC64_DTPREL16_LO_DS,
  BFD_RELOC_PPC64_DTPREL16_HIGHER,
  BFD_RELOC_PPC64_DTPREL16_HIGHERA,
  BFD_RELOC_PPC64_DTPREL16_HIGHEST,
  BFD_RELOC_PPC64_DTPREL16_HIGHESTA,


  BFD_RELOC_I370_D12,




  BFD_RELOC_CTOR,



  BFD_RELOC_ARM_PCREL_BRANCH,




  BFD_RELOC_ARM_PCREL_BLX,




  BFD_RELOC_THUMB_PCREL_BLX,


  BFD_RELOC_ARM_PCREL_CALL,


  BFD_RELOC_ARM_PCREL_JUMP,






  BFD_RELOC_THUMB_PCREL_BRANCH7,
  BFD_RELOC_THUMB_PCREL_BRANCH9,
  BFD_RELOC_THUMB_PCREL_BRANCH12,
  BFD_RELOC_THUMB_PCREL_BRANCH20,
  BFD_RELOC_THUMB_PCREL_BRANCH23,
  BFD_RELOC_THUMB_PCREL_BRANCH25,


  BFD_RELOC_ARM_OFFSET_IMM,


  BFD_RELOC_ARM_THUMB_OFFSET,



  BFD_RELOC_ARM_TARGET1,


  BFD_RELOC_ARM_ROSEGREL32,


  BFD_RELOC_ARM_SBREL32,




  BFD_RELOC_ARM_TARGET2,


  BFD_RELOC_ARM_PREL31,


  BFD_RELOC_ARM_JUMP_SLOT,
  BFD_RELOC_ARM_GLOB_DAT,
  BFD_RELOC_ARM_GOT32,
  BFD_RELOC_ARM_PLT32,
  BFD_RELOC_ARM_RELATIVE,
  BFD_RELOC_ARM_GOTOFF,
  BFD_RELOC_ARM_GOTPC,


  BFD_RELOC_ARM_TLS_GD32,
  BFD_RELOC_ARM_TLS_LDO32,
  BFD_RELOC_ARM_TLS_LDM32,
  BFD_RELOC_ARM_TLS_DTPOFF32,
  BFD_RELOC_ARM_TLS_DTPMOD32,
  BFD_RELOC_ARM_TLS_TPOFF32,
  BFD_RELOC_ARM_TLS_IE32,
  BFD_RELOC_ARM_TLS_LE32,



  BFD_RELOC_ARM_IMMEDIATE,
  BFD_RELOC_ARM_ADRL_IMMEDIATE,
  BFD_RELOC_ARM_T32_IMMEDIATE,
  BFD_RELOC_ARM_T32_IMM12,
  BFD_RELOC_ARM_T32_ADD_PC12,
  BFD_RELOC_ARM_SHIFT_IMM,
  BFD_RELOC_ARM_SMC,
  BFD_RELOC_ARM_SWI,
  BFD_RELOC_ARM_MULTI,
  BFD_RELOC_ARM_CP_OFF_IMM,
  BFD_RELOC_ARM_CP_OFF_IMM_S2,
  BFD_RELOC_ARM_T32_CP_OFF_IMM,
  BFD_RELOC_ARM_T32_CP_OFF_IMM_S2,
  BFD_RELOC_ARM_ADR_IMM,
  BFD_RELOC_ARM_LDR_IMM,
  BFD_RELOC_ARM_LITERAL,
  BFD_RELOC_ARM_IN_POOL,
  BFD_RELOC_ARM_OFFSET_IMM8,
  BFD_RELOC_ARM_T32_OFFSET_U8,
  BFD_RELOC_ARM_T32_OFFSET_IMM,
  BFD_RELOC_ARM_HWLITERAL,
  BFD_RELOC_ARM_THUMB_ADD,
  BFD_RELOC_ARM_THUMB_IMM,
  BFD_RELOC_ARM_THUMB_SHIFT,


  BFD_RELOC_SH_PCDISP8BY2,
  BFD_RELOC_SH_PCDISP12BY2,
  BFD_RELOC_SH_IMM3,
  BFD_RELOC_SH_IMM3U,
  BFD_RELOC_SH_DISP12,
  BFD_RELOC_SH_DISP12BY2,
  BFD_RELOC_SH_DISP12BY4,
  BFD_RELOC_SH_DISP12BY8,
  BFD_RELOC_SH_DISP20,
  BFD_RELOC_SH_DISP20BY8,
  BFD_RELOC_SH_IMM4,
  BFD_RELOC_SH_IMM4BY2,
  BFD_RELOC_SH_IMM4BY4,
  BFD_RELOC_SH_IMM8,
  BFD_RELOC_SH_IMM8BY2,
  BFD_RELOC_SH_IMM8BY4,
  BFD_RELOC_SH_PCRELIMM8BY2,
  BFD_RELOC_SH_PCRELIMM8BY4,
  BFD_RELOC_SH_SWITCH16,
  BFD_RELOC_SH_SWITCH32,
  BFD_RELOC_SH_USES,
  BFD_RELOC_SH_COUNT,
  BFD_RELOC_SH_ALIGN,
  BFD_RELOC_SH_CODE,
  BFD_RELOC_SH_DATA,
  BFD_RELOC_SH_LABEL,
  BFD_RELOC_SH_LOOP_START,
  BFD_RELOC_SH_LOOP_END,
  BFD_RELOC_SH_COPY,
  BFD_RELOC_SH_GLOB_DAT,
  BFD_RELOC_SH_JMP_SLOT,
  BFD_RELOC_SH_RELATIVE,
  BFD_RELOC_SH_GOTPC,
  BFD_RELOC_SH_GOT_LOW16,
  BFD_RELOC_SH_GOT_MEDLOW16,
  BFD_RELOC_SH_GOT_MEDHI16,
  BFD_RELOC_SH_GOT_HI16,
  BFD_RELOC_SH_GOTPLT_LOW16,
  BFD_RELOC_SH_GOTPLT_MEDLOW16,
  BFD_RELOC_SH_GOTPLT_MEDHI16,
  BFD_RELOC_SH_GOTPLT_HI16,
  BFD_RELOC_SH_PLT_LOW16,
  BFD_RELOC_SH_PLT_MEDLOW16,
  BFD_RELOC_SH_PLT_MEDHI16,
  BFD_RELOC_SH_PLT_HI16,
  BFD_RELOC_SH_GOTOFF_LOW16,
  BFD_RELOC_SH_GOTOFF_MEDLOW16,
  BFD_RELOC_SH_GOTOFF_MEDHI16,
  BFD_RELOC_SH_GOTOFF_HI16,
  BFD_RELOC_SH_GOTPC_LOW16,
  BFD_RELOC_SH_GOTPC_MEDLOW16,
  BFD_RELOC_SH_GOTPC_MEDHI16,
  BFD_RELOC_SH_GOTPC_HI16,
  BFD_RELOC_SH_COPY64,
  BFD_RELOC_SH_GLOB_DAT64,
  BFD_RELOC_SH_JMP_SLOT64,
  BFD_RELOC_SH_RELATIVE64,
  BFD_RELOC_SH_GOT10BY4,
  BFD_RELOC_SH_GOT10BY8,
  BFD_RELOC_SH_GOTPLT10BY4,
  BFD_RELOC_SH_GOTPLT10BY8,
  BFD_RELOC_SH_GOTPLT32,
  BFD_RELOC_SH_SHMEDIA_CODE,
  BFD_RELOC_SH_IMMU5,
  BFD_RELOC_SH_IMMS6,
  BFD_RELOC_SH_IMMS6BY32,
  BFD_RELOC_SH_IMMU6,
  BFD_RELOC_SH_IMMS10,
  BFD_RELOC_SH_IMMS10BY2,
  BFD_RELOC_SH_IMMS10BY4,
  BFD_RELOC_SH_IMMS10BY8,
  BFD_RELOC_SH_IMMS16,
  BFD_RELOC_SH_IMMU16,
  BFD_RELOC_SH_IMM_LOW16,
  BFD_RELOC_SH_IMM_LOW16_PCREL,
  BFD_RELOC_SH_IMM_MEDLOW16,
  BFD_RELOC_SH_IMM_MEDLOW16_PCREL,
  BFD_RELOC_SH_IMM_MEDHI16,
  BFD_RELOC_SH_IMM_MEDHI16_PCREL,
  BFD_RELOC_SH_IMM_HI16,
  BFD_RELOC_SH_IMM_HI16_PCREL,
  BFD_RELOC_SH_PT_16,
  BFD_RELOC_SH_TLS_GD_32,
  BFD_RELOC_SH_TLS_LD_32,
  BFD_RELOC_SH_TLS_LDO_32,
  BFD_RELOC_SH_TLS_IE_32,
  BFD_RELOC_SH_TLS_LE_32,
  BFD_RELOC_SH_TLS_DTPMOD32,
  BFD_RELOC_SH_TLS_DTPOFF32,
  BFD_RELOC_SH_TLS_TPOFF32,





  BFD_RELOC_ARC_B22_PCREL,




  BFD_RELOC_ARC_B26,


  BFD_RELOC_BFIN_16_IMM,


  BFD_RELOC_BFIN_16_HIGH,


  BFD_RELOC_BFIN_4_PCREL,


  BFD_RELOC_BFIN_5_PCREL,


  BFD_RELOC_BFIN_16_LOW,


  BFD_RELOC_BFIN_10_PCREL,


  BFD_RELOC_BFIN_11_PCREL,


  BFD_RELOC_BFIN_12_PCREL_JUMP,


  BFD_RELOC_BFIN_12_PCREL_JUMP_S,


  BFD_RELOC_BFIN_24_PCREL_CALL_X,


  BFD_RELOC_BFIN_24_PCREL_JUMP_L,


  BFD_RELOC_BFIN_GOT17M4,
  BFD_RELOC_BFIN_GOTHI,
  BFD_RELOC_BFIN_GOTLO,
  BFD_RELOC_BFIN_FUNCDESC,
  BFD_RELOC_BFIN_FUNCDESC_GOT17M4,
  BFD_RELOC_BFIN_FUNCDESC_GOTHI,
  BFD_RELOC_BFIN_FUNCDESC_GOTLO,
  BFD_RELOC_BFIN_FUNCDESC_VALUE,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFF17M4,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFFHI,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFFLO,
  BFD_RELOC_BFIN_GOTOFF17M4,
  BFD_RELOC_BFIN_GOTOFFHI,
  BFD_RELOC_BFIN_GOTOFFLO,


  BFD_RELOC_BFIN_GOT,


  BFD_RELOC_BFIN_PLTPC,


  BFD_ARELOC_BFIN_PUSH,


  BFD_ARELOC_BFIN_CONST,


  BFD_ARELOC_BFIN_ADD,


  BFD_ARELOC_BFIN_SUB,


  BFD_ARELOC_BFIN_MULT,


  BFD_ARELOC_BFIN_DIV,


  BFD_ARELOC_BFIN_MOD,


  BFD_ARELOC_BFIN_LSHIFT,


  BFD_ARELOC_BFIN_RSHIFT,


  BFD_ARELOC_BFIN_AND,


  BFD_ARELOC_BFIN_OR,


  BFD_ARELOC_BFIN_XOR,


  BFD_ARELOC_BFIN_LAND,


  BFD_ARELOC_BFIN_LOR,


  BFD_ARELOC_BFIN_LEN,


  BFD_ARELOC_BFIN_NEG,


  BFD_ARELOC_BFIN_COMP,


  BFD_ARELOC_BFIN_PAGE,


  BFD_ARELOC_BFIN_HWPAGE,


  BFD_ARELOC_BFIN_ADDR,




  BFD_RELOC_D10V_10_PCREL_R,






  BFD_RELOC_D10V_10_PCREL_L,



  BFD_RELOC_D10V_18,



  BFD_RELOC_D10V_18_PCREL,



  BFD_RELOC_D30V_6,



  BFD_RELOC_D30V_9_PCREL,





  BFD_RELOC_D30V_9_PCREL_R,



  BFD_RELOC_D30V_15,



  BFD_RELOC_D30V_15_PCREL,





  BFD_RELOC_D30V_15_PCREL_R,



  BFD_RELOC_D30V_21,



  BFD_RELOC_D30V_21_PCREL,





  BFD_RELOC_D30V_21_PCREL_R,


  BFD_RELOC_D30V_32,


  BFD_RELOC_D30V_32_PCREL,


  BFD_RELOC_DLX_HI16_S,


  BFD_RELOC_DLX_LO16,


  BFD_RELOC_DLX_JMP26,


  BFD_RELOC_M32C_HI8,
  BFD_RELOC_M32C_RL_JUMP,
  BFD_RELOC_M32C_RL_1ADDR,
  BFD_RELOC_M32C_RL_2ADDR,



  BFD_RELOC_M32R_24,


  BFD_RELOC_M32R_10_PCREL,


  BFD_RELOC_M32R_18_PCREL,


  BFD_RELOC_M32R_26_PCREL,



  BFD_RELOC_M32R_HI16_ULO,



  BFD_RELOC_M32R_HI16_SLO,


  BFD_RELOC_M32R_LO16,



  BFD_RELOC_M32R_SDA16,


  BFD_RELOC_M32R_GOT24,
  BFD_RELOC_M32R_26_PLTREL,
  BFD_RELOC_M32R_COPY,
  BFD_RELOC_M32R_GLOB_DAT,
  BFD_RELOC_M32R_JMP_SLOT,
  BFD_RELOC_M32R_RELATIVE,
  BFD_RELOC_M32R_GOTOFF,
  BFD_RELOC_M32R_GOTOFF_HI_ULO,
  BFD_RELOC_M32R_GOTOFF_HI_SLO,
  BFD_RELOC_M32R_GOTOFF_LO,
  BFD_RELOC_M32R_GOTPC24,
  BFD_RELOC_M32R_GOT16_HI_ULO,
  BFD_RELOC_M32R_GOT16_HI_SLO,
  BFD_RELOC_M32R_GOT16_LO,
  BFD_RELOC_M32R_GOTPC_HI_ULO,
  BFD_RELOC_M32R_GOTPC_HI_SLO,
  BFD_RELOC_M32R_GOTPC_LO,



  BFD_RELOC_V850_9_PCREL,


  BFD_RELOC_V850_22_PCREL,


  BFD_RELOC_V850_SDA_16_16_OFFSET,



  BFD_RELOC_V850_SDA_15_16_OFFSET,


  BFD_RELOC_V850_ZDA_16_16_OFFSET,



  BFD_RELOC_V850_ZDA_15_16_OFFSET,



  BFD_RELOC_V850_TDA_6_8_OFFSET,



  BFD_RELOC_V850_TDA_7_8_OFFSET,


  BFD_RELOC_V850_TDA_7_7_OFFSET,


  BFD_RELOC_V850_TDA_16_16_OFFSET,



  BFD_RELOC_V850_TDA_4_5_OFFSET,


  BFD_RELOC_V850_TDA_4_4_OFFSET,



  BFD_RELOC_V850_SDA_16_16_SPLIT_OFFSET,



  BFD_RELOC_V850_ZDA_16_16_SPLIT_OFFSET,


  BFD_RELOC_V850_CALLT_6_7_OFFSET,


  BFD_RELOC_V850_CALLT_16_16_OFFSET,


  BFD_RELOC_V850_LONGCALL,


  BFD_RELOC_V850_LONGJUMP,


  BFD_RELOC_V850_ALIGN,



  BFD_RELOC_V850_LO16_SPLIT_OFFSET,


  BFD_RELOC_V850_16_PCREL,


  BFD_RELOC_V850_17_PCREL,


  BFD_RELOC_V850_23,


  BFD_RELOC_V850_32_PCREL,


  BFD_RELOC_V850_32_ABS,


  BFD_RELOC_V850_16_SPLIT_OFFSET,


  BFD_RELOC_V850_16_S1,


  BFD_RELOC_V850_LO16_S1,


  BFD_RELOC_V850_CALLT_15_16_OFFSET,


  BFD_RELOC_V850_32_GOTPCREL,


  BFD_RELOC_V850_16_GOT,


  BFD_RELOC_V850_32_GOT,


  BFD_RELOC_V850_22_PLT_PCREL,


  BFD_RELOC_V850_32_PLT_PCREL,


  BFD_RELOC_V850_COPY,


  BFD_RELOC_V850_GLOB_DAT,


  BFD_RELOC_V850_JMP_SLOT,


  BFD_RELOC_V850_RELATIVE,


  BFD_RELOC_V850_16_GOTOFF,


  BFD_RELOC_V850_32_GOTOFF,


  BFD_RELOC_V850_CODE,


  BFD_RELOC_V850_DATA,



  BFD_RELOC_MN10300_32_PCREL,



  BFD_RELOC_MN10300_16_PCREL,




  BFD_RELOC_TIC30_LDP,




  BFD_RELOC_TIC54X_PARTLS7,




  BFD_RELOC_TIC54X_PARTMS9,


  BFD_RELOC_TIC54X_23,




  BFD_RELOC_TIC54X_16_OF_23,




  BFD_RELOC_TIC54X_MS7_OF_23,


  BFD_RELOC_FR30_48,



  BFD_RELOC_FR30_20,



  BFD_RELOC_FR30_6_IN_4,



  BFD_RELOC_FR30_8_IN_8,



  BFD_RELOC_FR30_9_IN_8,



  BFD_RELOC_FR30_10_IN_8,



  BFD_RELOC_FR30_9_PCREL,



  BFD_RELOC_FR30_12_PCREL,


  BFD_RELOC_MCORE_PCREL_IMM8BY4,
  BFD_RELOC_MCORE_PCREL_IMM11BY2,
  BFD_RELOC_MCORE_PCREL_IMM4BY2,
  BFD_RELOC_MCORE_PCREL_32,
  BFD_RELOC_MCORE_PCREL_JSR_IMM11BY2,
  BFD_RELOC_MCORE_RVA,


  BFD_RELOC_MMIX_GETA,
  BFD_RELOC_MMIX_GETA_1,
  BFD_RELOC_MMIX_GETA_2,
  BFD_RELOC_MMIX_GETA_3,


  BFD_RELOC_MMIX_CBRANCH,
  BFD_RELOC_MMIX_CBRANCH_J,
  BFD_RELOC_MMIX_CBRANCH_1,
  BFD_RELOC_MMIX_CBRANCH_2,
  BFD_RELOC_MMIX_CBRANCH_3,


  BFD_RELOC_MMIX_PUSHJ,
  BFD_RELOC_MMIX_PUSHJ_1,
  BFD_RELOC_MMIX_PUSHJ_2,
  BFD_RELOC_MMIX_PUSHJ_3,
  BFD_RELOC_MMIX_PUSHJ_STUBBABLE,


  BFD_RELOC_MMIX_JMP,
  BFD_RELOC_MMIX_JMP_1,
  BFD_RELOC_MMIX_JMP_2,
  BFD_RELOC_MMIX_JMP_3,



  BFD_RELOC_MMIX_ADDR19,


  BFD_RELOC_MMIX_ADDR27,



  BFD_RELOC_MMIX_REG_OR_BYTE,



  BFD_RELOC_MMIX_REG,



  BFD_RELOC_MMIX_BASE_PLUS_OFFSET,



  BFD_RELOC_MMIX_LOCAL,



  BFD_RELOC_AVR_7_PCREL,



  BFD_RELOC_AVR_13_PCREL,



  BFD_RELOC_AVR_16_PM,



  BFD_RELOC_AVR_LO8_LDI,



  BFD_RELOC_AVR_HI8_LDI,



  BFD_RELOC_AVR_HH8_LDI,



  BFD_RELOC_AVR_MS8_LDI,



  BFD_RELOC_AVR_LO8_LDI_NEG,




  BFD_RELOC_AVR_HI8_LDI_NEG,




  BFD_RELOC_AVR_HH8_LDI_NEG,



  BFD_RELOC_AVR_MS8_LDI_NEG,



  BFD_RELOC_AVR_LO8_LDI_PM,





  BFD_RELOC_AVR_LO8_LDI_GS,



  BFD_RELOC_AVR_HI8_LDI_PM,





  BFD_RELOC_AVR_HI8_LDI_GS,



  BFD_RELOC_AVR_HH8_LDI_PM,



  BFD_RELOC_AVR_LO8_LDI_PM_NEG,




  BFD_RELOC_AVR_HI8_LDI_PM_NEG,




  BFD_RELOC_AVR_HH8_LDI_PM_NEG,



  BFD_RELOC_AVR_CALL,



  BFD_RELOC_AVR_LDI,



  BFD_RELOC_AVR_6,



  BFD_RELOC_AVR_6_ADIW,


  BFD_RELOC_390_12,


  BFD_RELOC_390_GOT12,


  BFD_RELOC_390_PLT32,


  BFD_RELOC_390_COPY,


  BFD_RELOC_390_GLOB_DAT,


  BFD_RELOC_390_JMP_SLOT,


  BFD_RELOC_390_RELATIVE,


  BFD_RELOC_390_GOTPC,


  BFD_RELOC_390_GOT16,


  BFD_RELOC_390_PC16DBL,


  BFD_RELOC_390_PLT16DBL,


  BFD_RELOC_390_PC32DBL,


  BFD_RELOC_390_PLT32DBL,


  BFD_RELOC_390_GOTPCDBL,


  BFD_RELOC_390_GOT64,


  BFD_RELOC_390_PLT64,


  BFD_RELOC_390_GOTENT,


  BFD_RELOC_390_GOTOFF64,


  BFD_RELOC_390_GOTPLT12,


  BFD_RELOC_390_GOTPLT16,


  BFD_RELOC_390_GOTPLT32,


  BFD_RELOC_390_GOTPLT64,


  BFD_RELOC_390_GOTPLTENT,


  BFD_RELOC_390_PLTOFF16,


  BFD_RELOC_390_PLTOFF32,


  BFD_RELOC_390_PLTOFF64,


  BFD_RELOC_390_TLS_LOAD,
  BFD_RELOC_390_TLS_GDCALL,
  BFD_RELOC_390_TLS_LDCALL,
  BFD_RELOC_390_TLS_GD32,
  BFD_RELOC_390_TLS_GD64,
  BFD_RELOC_390_TLS_GOTIE12,
  BFD_RELOC_390_TLS_GOTIE32,
  BFD_RELOC_390_TLS_GOTIE64,
  BFD_RELOC_390_TLS_LDM32,
  BFD_RELOC_390_TLS_LDM64,
  BFD_RELOC_390_TLS_IE32,
  BFD_RELOC_390_TLS_IE64,
  BFD_RELOC_390_TLS_IEENT,
  BFD_RELOC_390_TLS_LE32,
  BFD_RELOC_390_TLS_LE64,
  BFD_RELOC_390_TLS_LDO32,
  BFD_RELOC_390_TLS_LDO64,
  BFD_RELOC_390_TLS_DTPMOD,
  BFD_RELOC_390_TLS_DTPOFF,
  BFD_RELOC_390_TLS_TPOFF,


  BFD_RELOC_390_20,
  BFD_RELOC_390_GOT20,
  BFD_RELOC_390_GOTPLT20,
  BFD_RELOC_390_TLS_GOTIE20,


  BFD_RELOC_IP2K_FR9,


  BFD_RELOC_IP2K_BANK,


  BFD_RELOC_IP2K_ADDR16CJP,


  BFD_RELOC_IP2K_PAGE3,


  BFD_RELOC_IP2K_LO8DATA,
  BFD_RELOC_IP2K_HI8DATA,
  BFD_RELOC_IP2K_EX8DATA,


  BFD_RELOC_IP2K_LO8INSN,
  BFD_RELOC_IP2K_HI8INSN,


  BFD_RELOC_IP2K_PC_SKIP,


  BFD_RELOC_IP2K_TEXT,


  BFD_RELOC_IP2K_FR_OFFSET,


  BFD_RELOC_VPE4KMATH_DATA,
  BFD_RELOC_VPE4KMATH_INSN,
# 3873 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  BFD_RELOC_VTABLE_INHERIT,
  BFD_RELOC_VTABLE_ENTRY,


  BFD_RELOC_IA64_IMM14,
  BFD_RELOC_IA64_IMM22,
  BFD_RELOC_IA64_IMM64,
  BFD_RELOC_IA64_DIR32MSB,
  BFD_RELOC_IA64_DIR32LSB,
  BFD_RELOC_IA64_DIR64MSB,
  BFD_RELOC_IA64_DIR64LSB,
  BFD_RELOC_IA64_GPREL22,
  BFD_RELOC_IA64_GPREL64I,
  BFD_RELOC_IA64_GPREL32MSB,
  BFD_RELOC_IA64_GPREL32LSB,
  BFD_RELOC_IA64_GPREL64MSB,
  BFD_RELOC_IA64_GPREL64LSB,
  BFD_RELOC_IA64_LTOFF22,
  BFD_RELOC_IA64_LTOFF64I,
  BFD_RELOC_IA64_PLTOFF22,
  BFD_RELOC_IA64_PLTOFF64I,
  BFD_RELOC_IA64_PLTOFF64MSB,
  BFD_RELOC_IA64_PLTOFF64LSB,
  BFD_RELOC_IA64_FPTR64I,
  BFD_RELOC_IA64_FPTR32MSB,
  BFD_RELOC_IA64_FPTR32LSB,
  BFD_RELOC_IA64_FPTR64MSB,
  BFD_RELOC_IA64_FPTR64LSB,
  BFD_RELOC_IA64_PCREL21B,
  BFD_RELOC_IA64_PCREL21BI,
  BFD_RELOC_IA64_PCREL21M,
  BFD_RELOC_IA64_PCREL21F,
  BFD_RELOC_IA64_PCREL22,
  BFD_RELOC_IA64_PCREL60B,
  BFD_RELOC_IA64_PCREL64I,
  BFD_RELOC_IA64_PCREL32MSB,
  BFD_RELOC_IA64_PCREL32LSB,
  BFD_RELOC_IA64_PCREL64MSB,
  BFD_RELOC_IA64_PCREL64LSB,
  BFD_RELOC_IA64_LTOFF_FPTR22,
  BFD_RELOC_IA64_LTOFF_FPTR64I,
  BFD_RELOC_IA64_LTOFF_FPTR32MSB,
  BFD_RELOC_IA64_LTOFF_FPTR32LSB,
  BFD_RELOC_IA64_LTOFF_FPTR64MSB,
  BFD_RELOC_IA64_LTOFF_FPTR64LSB,
  BFD_RELOC_IA64_SEGREL32MSB,
  BFD_RELOC_IA64_SEGREL32LSB,
  BFD_RELOC_IA64_SEGREL64MSB,
  BFD_RELOC_IA64_SEGREL64LSB,
  BFD_RELOC_IA64_SECREL32MSB,
  BFD_RELOC_IA64_SECREL32LSB,
  BFD_RELOC_IA64_SECREL64MSB,
  BFD_RELOC_IA64_SECREL64LSB,
  BFD_RELOC_IA64_REL32MSB,
  BFD_RELOC_IA64_REL32LSB,
  BFD_RELOC_IA64_REL64MSB,
  BFD_RELOC_IA64_REL64LSB,
  BFD_RELOC_IA64_LTV32MSB,
  BFD_RELOC_IA64_LTV32LSB,
  BFD_RELOC_IA64_LTV64MSB,
  BFD_RELOC_IA64_LTV64LSB,
  BFD_RELOC_IA64_IPLTMSB,
  BFD_RELOC_IA64_IPLTLSB,
  BFD_RELOC_IA64_COPY,
  BFD_RELOC_IA64_LTOFF22X,
  BFD_RELOC_IA64_LDXMOV,
  BFD_RELOC_IA64_TPREL14,
  BFD_RELOC_IA64_TPREL22,
  BFD_RELOC_IA64_TPREL64I,
  BFD_RELOC_IA64_TPREL64MSB,
  BFD_RELOC_IA64_TPREL64LSB,
  BFD_RELOC_IA64_LTOFF_TPREL22,
  BFD_RELOC_IA64_DTPMOD64MSB,
  BFD_RELOC_IA64_DTPMOD64LSB,
  BFD_RELOC_IA64_LTOFF_DTPMOD22,
  BFD_RELOC_IA64_DTPREL14,
  BFD_RELOC_IA64_DTPREL22,
  BFD_RELOC_IA64_DTPREL64I,
  BFD_RELOC_IA64_DTPREL32MSB,
  BFD_RELOC_IA64_DTPREL32LSB,
  BFD_RELOC_IA64_DTPREL64MSB,
  BFD_RELOC_IA64_DTPREL64LSB,
  BFD_RELOC_IA64_LTOFF_DTPREL22,



  BFD_RELOC_M68HC11_HI8,



  BFD_RELOC_M68HC11_LO8,



  BFD_RELOC_M68HC11_3B,






  BFD_RELOC_M68HC11_RL_JUMP,





  BFD_RELOC_M68HC11_RL_GROUP,





  BFD_RELOC_M68HC11_LO16,





  BFD_RELOC_M68HC11_PAGE,





  BFD_RELOC_M68HC11_24,



  BFD_RELOC_M68HC12_5B,


  BFD_RELOC_16C_NUM08,
  BFD_RELOC_16C_NUM08_C,
  BFD_RELOC_16C_NUM16,
  BFD_RELOC_16C_NUM16_C,
  BFD_RELOC_16C_NUM32,
  BFD_RELOC_16C_NUM32_C,
  BFD_RELOC_16C_DISP04,
  BFD_RELOC_16C_DISP04_C,
  BFD_RELOC_16C_DISP08,
  BFD_RELOC_16C_DISP08_C,
  BFD_RELOC_16C_DISP16,
  BFD_RELOC_16C_DISP16_C,
  BFD_RELOC_16C_DISP24,
  BFD_RELOC_16C_DISP24_C,
  BFD_RELOC_16C_DISP24a,
  BFD_RELOC_16C_DISP24a_C,
  BFD_RELOC_16C_REG04,
  BFD_RELOC_16C_REG04_C,
  BFD_RELOC_16C_REG04a,
  BFD_RELOC_16C_REG04a_C,
  BFD_RELOC_16C_REG14,
  BFD_RELOC_16C_REG14_C,
  BFD_RELOC_16C_REG16,
  BFD_RELOC_16C_REG16_C,
  BFD_RELOC_16C_REG20,
  BFD_RELOC_16C_REG20_C,
  BFD_RELOC_16C_ABS20,
  BFD_RELOC_16C_ABS20_C,
  BFD_RELOC_16C_ABS24,
  BFD_RELOC_16C_ABS24_C,
  BFD_RELOC_16C_IMM04,
  BFD_RELOC_16C_IMM04_C,
  BFD_RELOC_16C_IMM16,
  BFD_RELOC_16C_IMM16_C,
  BFD_RELOC_16C_IMM20,
  BFD_RELOC_16C_IMM20_C,
  BFD_RELOC_16C_IMM24,
  BFD_RELOC_16C_IMM24_C,
  BFD_RELOC_16C_IMM32,
  BFD_RELOC_16C_IMM32_C,


  BFD_RELOC_CRX_REL4,
  BFD_RELOC_CRX_REL8,
  BFD_RELOC_CRX_REL8_CMP,
  BFD_RELOC_CRX_REL16,
  BFD_RELOC_CRX_REL24,
  BFD_RELOC_CRX_REL32,
  BFD_RELOC_CRX_REGREL12,
  BFD_RELOC_CRX_REGREL22,
  BFD_RELOC_CRX_REGREL28,
  BFD_RELOC_CRX_REGREL32,
  BFD_RELOC_CRX_ABS16,
  BFD_RELOC_CRX_ABS32,
  BFD_RELOC_CRX_NUM8,
  BFD_RELOC_CRX_NUM16,
  BFD_RELOC_CRX_NUM32,
  BFD_RELOC_CRX_IMM16,
  BFD_RELOC_CRX_IMM32,
  BFD_RELOC_CRX_SWITCH8,
  BFD_RELOC_CRX_SWITCH16,
  BFD_RELOC_CRX_SWITCH32,



  BFD_RELOC_CRIS_BDISP8,
  BFD_RELOC_CRIS_UNSIGNED_5,
  BFD_RELOC_CRIS_SIGNED_6,
  BFD_RELOC_CRIS_UNSIGNED_6,
  BFD_RELOC_CRIS_SIGNED_8,
  BFD_RELOC_CRIS_UNSIGNED_8,
  BFD_RELOC_CRIS_SIGNED_16,
  BFD_RELOC_CRIS_UNSIGNED_16,
  BFD_RELOC_CRIS_LAPCQ_OFFSET,
  BFD_RELOC_CRIS_UNSIGNED_4,


  BFD_RELOC_CRIS_COPY,
  BFD_RELOC_CRIS_GLOB_DAT,
  BFD_RELOC_CRIS_JUMP_SLOT,
  BFD_RELOC_CRIS_RELATIVE,


  BFD_RELOC_CRIS_32_GOT,


  BFD_RELOC_CRIS_16_GOT,


  BFD_RELOC_CRIS_32_GOTPLT,


  BFD_RELOC_CRIS_16_GOTPLT,


  BFD_RELOC_CRIS_32_GOTREL,


  BFD_RELOC_CRIS_32_PLT_GOTREL,


  BFD_RELOC_CRIS_32_PLT_PCREL,


  BFD_RELOC_860_COPY,
  BFD_RELOC_860_GLOB_DAT,
  BFD_RELOC_860_JUMP_SLOT,
  BFD_RELOC_860_RELATIVE,
  BFD_RELOC_860_PC26,
  BFD_RELOC_860_PLT26,
  BFD_RELOC_860_PC16,
  BFD_RELOC_860_LOW0,
  BFD_RELOC_860_SPLIT0,
  BFD_RELOC_860_LOW1,
  BFD_RELOC_860_SPLIT1,
  BFD_RELOC_860_LOW2,
  BFD_RELOC_860_SPLIT2,
  BFD_RELOC_860_LOW3,
  BFD_RELOC_860_LOGOT0,
  BFD_RELOC_860_SPGOT0,
  BFD_RELOC_860_LOGOT1,
  BFD_RELOC_860_SPGOT1,
  BFD_RELOC_860_LOGOTOFF0,
  BFD_RELOC_860_SPGOTOFF0,
  BFD_RELOC_860_LOGOTOFF1,
  BFD_RELOC_860_SPGOTOFF1,
  BFD_RELOC_860_LOGOTOFF2,
  BFD_RELOC_860_LOGOTOFF3,
  BFD_RELOC_860_LOPC,
  BFD_RELOC_860_HIGHADJ,
  BFD_RELOC_860_HAGOT,
  BFD_RELOC_860_HAGOTOFF,
  BFD_RELOC_860_HAPC,
  BFD_RELOC_860_HIGH,
  BFD_RELOC_860_HIGOT,
  BFD_RELOC_860_HIGOTOFF,


  BFD_RELOC_OPENRISC_ABS_26,
  BFD_RELOC_OPENRISC_REL_26,


  BFD_RELOC_H8_DIR16A8,
  BFD_RELOC_H8_DIR16R8,
  BFD_RELOC_H8_DIR24A8,
  BFD_RELOC_H8_DIR24R8,
  BFD_RELOC_H8_DIR32A16,


  BFD_RELOC_XSTORMY16_REL_12,
  BFD_RELOC_XSTORMY16_12,
  BFD_RELOC_XSTORMY16_24,
  BFD_RELOC_XSTORMY16_FPTR16,


  BFD_RELOC_XC16X_PAG,
  BFD_RELOC_XC16X_POF,
  BFD_RELOC_XC16X_SEG,
  BFD_RELOC_XC16X_SOF,


  BFD_RELOC_VAX_GLOB_DAT,
  BFD_RELOC_VAX_JMP_SLOT,
  BFD_RELOC_VAX_RELATIVE,


  BFD_RELOC_MT_PC16,


  BFD_RELOC_MT_HI16,


  BFD_RELOC_MT_LO16,


  BFD_RELOC_MT_GNU_VTINHERIT,


  BFD_RELOC_MT_GNU_VTENTRY,


  BFD_RELOC_MT_PCINSN8,


  BFD_RELOC_MSP430_10_PCREL,
  BFD_RELOC_MSP430_16_PCREL,
  BFD_RELOC_MSP430_16,
  BFD_RELOC_MSP430_16_PCREL_BYTE,
  BFD_RELOC_MSP430_16_BYTE,
  BFD_RELOC_MSP430_2X_PCREL,
  BFD_RELOC_MSP430_RL_PCREL,


  BFD_RELOC_IQ2000_OFFSET_16,
  BFD_RELOC_IQ2000_OFFSET_21,
  BFD_RELOC_IQ2000_UHI16,




  BFD_RELOC_XTENSA_RTLD,


  BFD_RELOC_XTENSA_GLOB_DAT,
  BFD_RELOC_XTENSA_JMP_SLOT,
  BFD_RELOC_XTENSA_RELATIVE,



  BFD_RELOC_XTENSA_PLT,







  BFD_RELOC_XTENSA_DIFF8,
  BFD_RELOC_XTENSA_DIFF16,
  BFD_RELOC_XTENSA_DIFF32,





  BFD_RELOC_XTENSA_SLOT0_OP,
  BFD_RELOC_XTENSA_SLOT1_OP,
  BFD_RELOC_XTENSA_SLOT2_OP,
  BFD_RELOC_XTENSA_SLOT3_OP,
  BFD_RELOC_XTENSA_SLOT4_OP,
  BFD_RELOC_XTENSA_SLOT5_OP,
  BFD_RELOC_XTENSA_SLOT6_OP,
  BFD_RELOC_XTENSA_SLOT7_OP,
  BFD_RELOC_XTENSA_SLOT8_OP,
  BFD_RELOC_XTENSA_SLOT9_OP,
  BFD_RELOC_XTENSA_SLOT10_OP,
  BFD_RELOC_XTENSA_SLOT11_OP,
  BFD_RELOC_XTENSA_SLOT12_OP,
  BFD_RELOC_XTENSA_SLOT13_OP,
  BFD_RELOC_XTENSA_SLOT14_OP,



  BFD_RELOC_XTENSA_SLOT0_ALT,
  BFD_RELOC_XTENSA_SLOT1_ALT,
  BFD_RELOC_XTENSA_SLOT2_ALT,
  BFD_RELOC_XTENSA_SLOT3_ALT,
  BFD_RELOC_XTENSA_SLOT4_ALT,
  BFD_RELOC_XTENSA_SLOT5_ALT,
  BFD_RELOC_XTENSA_SLOT6_ALT,
  BFD_RELOC_XTENSA_SLOT7_ALT,
  BFD_RELOC_XTENSA_SLOT8_ALT,
  BFD_RELOC_XTENSA_SLOT9_ALT,
  BFD_RELOC_XTENSA_SLOT10_ALT,
  BFD_RELOC_XTENSA_SLOT11_ALT,
  BFD_RELOC_XTENSA_SLOT12_ALT,
  BFD_RELOC_XTENSA_SLOT13_ALT,
  BFD_RELOC_XTENSA_SLOT14_ALT,



  BFD_RELOC_XTENSA_OP0,
  BFD_RELOC_XTENSA_OP1,
  BFD_RELOC_XTENSA_OP2,




  BFD_RELOC_XTENSA_ASM_EXPAND,





  BFD_RELOC_XTENSA_ASM_SIMPLIFY,


  BFD_RELOC_Z80_DISP8,


  BFD_RELOC_Z8K_DISP7,


  BFD_RELOC_Z8K_CALLR,


  BFD_RELOC_Z8K_IMM4L,
  BFD_RELOC_UNUSED };
typedef enum bfd_reloc_code_real bfd_reloc_code_real_type;
reloc_howto_type *bfd_reloc_type_lookup
   (bfd *abfd, bfd_reloc_code_real_type code);

const char *bfd_get_reloc_code_name (bfd_reloc_code_real_type code);



typedef struct bfd_symbol
{
# 4312 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  struct bfd *the_bfd;



  const char *name;




  symvalue value;
# 4408 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  flagword flags;




  struct bfd_section *section;


  union
    {
      void *p;
      bfd_vma i;
    }
  udata;
}
asymbol;




bfd_boolean bfd_is_local_label (bfd *abfd, asymbol *sym);

bfd_boolean bfd_is_local_label_name (bfd *abfd, const char *name);




bfd_boolean bfd_is_target_special_symbol (bfd *abfd, asymbol *sym);







bfd_boolean bfd_set_symtab
   (bfd *abfd, asymbol **location, unsigned int count);

void bfd_print_symbol_vandf (bfd *abfd, void *file, asymbol *symbol);




asymbol *_bfd_generic_make_empty_symbol (bfd *);




int bfd_decode_symclass (asymbol *symbol);

bfd_boolean bfd_is_undefined_symclass (int symclass);

void bfd_symbol_info (asymbol *symbol, symbol_info *ret);

bfd_boolean bfd_copy_private_symbol_data
   (bfd *ibfd, asymbol *isym, bfd *obfd, asymbol *osym);






struct bfd
{

  unsigned int id;


  const char *filename;


  const struct bfd_target *xvec;



  void *iostream;
  const struct bfd_iovec *iovec;



  bfd_boolean cacheable;




  bfd_boolean target_defaulted;



  struct bfd *lru_prev, *lru_next;



  ufile_ptr where;


  bfd_boolean opened_once;



  bfd_boolean mtime_set;


  long mtime;


  int ifd;


  bfd_format format;


  enum bfd_direction
    {
      no_direction = 0,
      read_direction = 1,
      write_direction = 2,
      both_direction = 3
    }
  direction;


  flagword flags;




  ufile_ptr origin;



  bfd_boolean output_has_begun;


  struct bfd_hash_table section_htab;


  struct bfd_section *sections;


  struct bfd_section *section_last;


  unsigned int section_count;



  bfd_vma start_address;


  unsigned int symcount;


  struct bfd_symbol **outsymbols;


  unsigned int dynsymcount;


  const struct bfd_arch_info *arch_info;


  bfd_boolean no_export;


  void *arelt_data;
  struct bfd *my_archive;
  struct bfd *next;
  struct bfd *archive_head;
  bfd_boolean has_armap;


  struct bfd *link_next;



  int archive_pass;


  union
    {
      struct aout_data_struct *aout_data;
      struct artdata *aout_ar_data;
      struct _oasys_data *oasys_obj_data;
      struct _oasys_ar_data *oasys_ar_data;
      struct coff_tdata *coff_obj_data;
      struct pe_tdata *pe_obj_data;
      struct xcoff_tdata *xcoff_obj_data;
      struct ecoff_tdata *ecoff_obj_data;
      struct ieee_data_struct *ieee_data;
      struct ieee_ar_data_struct *ieee_ar_data;
      struct srec_data_struct *srec_data;
      struct ihex_data_struct *ihex_data;
      struct tekhex_data_struct *tekhex_data;
      struct elf_obj_tdata *elf_obj_data;
      struct nlm_obj_tdata *nlm_obj_data;
      struct bout_data_struct *bout_data;
      struct mmo_data_struct *mmo_data;
      struct sun_core_struct *sun_core_data;
      struct sco5_core_struct *sco5_core_data;
      struct trad_core_struct *trad_core_data;
      struct som_data_struct *som_data;
      struct hpux_core_struct *hpux_core_data;
      struct hppabsd_core_struct *hppabsd_core_data;
      struct sgi_core_struct *sgi_core_data;
      struct lynx_core_struct *lynx_core_data;
      struct osf_core_struct *osf_core_data;
      struct cisco_core_struct *cisco_core_data;
      struct versados_data_struct *versados_data;
      struct netbsd_core_struct *netbsd_core_data;
      struct mach_o_data_struct *mach_o_data;
      struct mach_o_fat_data_struct *mach_o_fat_data;
      struct bfd_pef_data_struct *pef_data;
      struct bfd_pef_xlib_data_struct *pef_xlib_data;
      struct bfd_sym_data_struct *sym_data;
      void *any;
    }
  tdata;


  void *usrdata;




  void *memory;
};

typedef enum bfd_error
{
  bfd_error_no_error = 0,
  bfd_error_system_call,
  bfd_error_invalid_target,
  bfd_error_wrong_format,
  bfd_error_wrong_object_format,
  bfd_error_invalid_operation,
  bfd_error_no_memory,
  bfd_error_no_symbols,
  bfd_error_no_armap,
  bfd_error_no_more_archived_files,
  bfd_error_malformed_archive,
  bfd_error_file_not_recognized,
  bfd_error_file_ambiguously_recognized,
  bfd_error_no_contents,
  bfd_error_nonrepresentable_section,
  bfd_error_no_debug_section,
  bfd_error_bad_value,
  bfd_error_file_truncated,
  bfd_error_file_too_big,
  bfd_error_invalid_error_code
}
bfd_error_type;

bfd_error_type bfd_get_error (void);

void bfd_set_error (bfd_error_type error_tag);

const char *bfd_errmsg (bfd_error_type error_tag);

void bfd_perror (const char *message);

typedef void (*bfd_error_plugin_type) (const char *, ...);

bfd_error_plugin_type bfd_set_error_handler (bfd_error_plugin_type);

void bfd_set_error_program_name (const char *);

bfd_error_plugin_type bfd_get_error_handler (void);

long bfd_get_reloc_upper_bound (bfd *abfd, asection *sect);

long bfd_canonicalize_reloc
   (bfd *abfd, asection *sec, arelent **loc, asymbol **syms);

void bfd_set_reloc
   (bfd *abfd, asection *sec, arelent **rel, unsigned int count);

bfd_boolean bfd_set_file_flags (bfd *abfd, flagword flags);

int bfd_get_arch_size (bfd *abfd);

int bfd_get_sign_extend_vma (bfd *abfd);

bfd_boolean bfd_set_start_address (bfd *abfd, bfd_vma vma);

unsigned int bfd_get_gp_size (bfd *abfd);

void bfd_set_gp_size (bfd *abfd, unsigned int i);

bfd_vma bfd_scan_vma (const char *string, const char **end, int base);

bfd_boolean bfd_copy_private_header_data (bfd *ibfd, bfd *obfd);




bfd_boolean bfd_copy_private_bfd_data (bfd *ibfd, bfd *obfd);




bfd_boolean bfd_merge_private_bfd_data (bfd *ibfd, bfd *obfd);




bfd_boolean bfd_set_private_flags (bfd *abfd, flagword flags);
# 4803 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd_byte *bfd_get_relocated_section_contents
  (bfd *, struct bfd_link_info *, struct bfd_link_order *, bfd_byte *,
   bfd_boolean, asymbol **);

bfd_boolean bfd_alt_mach_code (bfd *abfd, int alternative);

struct bfd_preserve
{
  void *marker;
  void *tdata;
  flagword flags;
  const struct bfd_arch_info *arch_info;
  struct bfd_section *sections;
  struct bfd_section *section_last;
  unsigned int section_count;
  struct bfd_hash_table section_htab;
};

bfd_boolean bfd_preserve_save (bfd *, struct bfd_preserve *);

void bfd_preserve_restore (bfd *, struct bfd_preserve *);

void bfd_preserve_finish (bfd *, struct bfd_preserve *);


symindex bfd_get_next_mapent
   (bfd *abfd, symindex previous, carsym **sym);

bfd_boolean bfd_set_archive_head (bfd *output, bfd *new_head);

bfd *bfd_openr_next_archived_file (bfd *archive, bfd *previous);


const char *bfd_core_file_failing_command (bfd *abfd);

int bfd_core_file_failing_signal (bfd *abfd);

bfd_boolean core_file_matches_executable_p
   (bfd *core_bfd, bfd *exec_bfd);

bfd_boolean generic_core_file_matches_executable_p
   (bfd *core_bfd, bfd *exec_bfd);
# 4868 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
enum bfd_flavour
{
  bfd_target_unknown_flavour,
  bfd_target_aout_flavour,
  bfd_target_coff_flavour,
  bfd_target_ecoff_flavour,
  bfd_target_xcoff_flavour,
  bfd_target_elf_flavour,
  bfd_target_ieee_flavour,
  bfd_target_nlm_flavour,
  bfd_target_oasys_flavour,
  bfd_target_tekhex_flavour,
  bfd_target_srec_flavour,
  bfd_target_ihex_flavour,
  bfd_target_som_flavour,
  bfd_target_os9k_flavour,
  bfd_target_versados_flavour,
  bfd_target_msdos_flavour,
  bfd_target_ovax_flavour,
  bfd_target_evax_flavour,
  bfd_target_mmo_flavour,
  bfd_target_mach_o_flavour,
  bfd_target_pef_flavour,
  bfd_target_pef_xlib_flavour,
  bfd_target_sym_flavour
};

enum bfd_endian { BFD_ENDIAN_BIG, BFD_ENDIAN_LITTLE, BFD_ENDIAN_UNKNOWN };


typedef struct bfd_link_info _bfd_link_info;

typedef struct bfd_target
{

  char *name;



  enum bfd_flavour flavour;


  enum bfd_endian byteorder;


  enum bfd_endian header_byteorder;



  flagword object_flags;



  flagword section_flags;



  char symbol_leading_char;


  char ar_pad_char;


  unsigned short ar_max_namelen;




  bfd_uint64_t (*bfd_getx64) (const void *);
  bfd_int64_t (*bfd_getx_signed_64) (const void *);
  void (*bfd_putx64) (bfd_uint64_t, void *);
  bfd_vma (*bfd_getx32) (const void *);
  bfd_signed_vma (*bfd_getx_signed_32) (const void *);
  void (*bfd_putx32) (bfd_vma, void *);
  bfd_vma (*bfd_getx16) (const void *);
  bfd_signed_vma (*bfd_getx_signed_16) (const void *);
  void (*bfd_putx16) (bfd_vma, void *);


  bfd_uint64_t (*bfd_h_getx64) (const void *);
  bfd_int64_t (*bfd_h_getx_signed_64) (const void *);
  void (*bfd_h_putx64) (bfd_uint64_t, void *);
  bfd_vma (*bfd_h_getx32) (const void *);
  bfd_signed_vma (*bfd_h_getx_signed_32) (const void *);
  void (*bfd_h_putx32) (bfd_vma, void *);
  bfd_vma (*bfd_h_getx16) (const void *);
  bfd_signed_vma (*bfd_h_getx_signed_16) (const void *);
  void (*bfd_h_putx16) (bfd_vma, void *);





  const struct bfd_target *(*_bfd_check_format[bfd_type_end]) (bfd *);


  bfd_boolean (*_bfd_set_format[bfd_type_end]) (bfd *);


  bfd_boolean (*_bfd_write_contents[bfd_type_end]) (bfd *);
# 4979 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_close_and_cleanup) (bfd *);

  bfd_boolean (*_bfd_free_cached_info) (bfd *);

  bfd_boolean (*_new_section_hook) (bfd *, sec_ptr);

  bfd_boolean (*_bfd_get_section_contents)
    (bfd *, sec_ptr, void *, file_ptr, bfd_size_type);
  bfd_boolean (*_bfd_get_section_contents_in_window)
    (bfd *, sec_ptr, bfd_window *, file_ptr, bfd_size_type);
# 5003 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_bfd_copy_private_bfd_data) (bfd *, bfd *);


  bfd_boolean (*_bfd_merge_private_bfd_data) (bfd *, bfd *);




  bfd_boolean (*_bfd_init_private_section_data)
    (bfd *, sec_ptr, bfd *, sec_ptr, struct bfd_link_info *);


  bfd_boolean (*_bfd_copy_private_section_data)
    (bfd *, sec_ptr, bfd *, sec_ptr);


  bfd_boolean (*_bfd_copy_private_symbol_data)
    (bfd *, asymbol *, bfd *, asymbol *);


  bfd_boolean (*_bfd_copy_private_header_data)
    (bfd *, bfd *);

  bfd_boolean (*_bfd_set_private_flags) (bfd *, flagword);


  bfd_boolean (*_bfd_print_private_bfd_data) (bfd *, void *);







  char * (*_core_file_failing_command) (bfd *);
  int (*_core_file_failing_signal) (bfd *);
  bfd_boolean (*_core_file_matches_executable_p) (bfd *, bfd *);
# 5054 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_bfd_slurp_armap) (bfd *);
  bfd_boolean (*_bfd_slurp_extended_name_table) (bfd *);
  bfd_boolean (*_bfd_construct_extended_name_table)
    (bfd *, char **, bfd_size_type *, const char **);
  void (*_bfd_truncate_arname) (bfd *, const char *, char *);
  bfd_boolean (*write_armap)
    (bfd *, unsigned int, struct orl *, unsigned int, int);
  void * (*_bfd_read_ar_hdr_fn) (bfd *);
  bfd * (*openr_next_archived_file) (bfd *, bfd *);

  bfd * (*_bfd_get_elt_at_index) (bfd *, symindex);
  int (*_bfd_stat_arch_elt) (bfd *, struct stat *);
  bfd_boolean (*_bfd_update_armap_timestamp) (bfd *);
# 5085 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  long (*_bfd_get_symtab_upper_bound) (bfd *);
  long (*_bfd_canonicalize_symtab)
    (bfd *, struct bfd_symbol **);
  struct bfd_symbol *
              (*_bfd_make_empty_symbol) (bfd *);
  void (*_bfd_print_symbol)
    (bfd *, void *, struct bfd_symbol *, bfd_print_symbol_type);

  void (*_bfd_get_symbol_info)
    (bfd *, struct bfd_symbol *, symbol_info *);

  bfd_boolean (*_bfd_is_local_label_name) (bfd *, const char *);
  bfd_boolean (*_bfd_is_target_special_symbol) (bfd *, asymbol *);
  alent * (*_get_lineno) (bfd *, struct bfd_symbol *);
  bfd_boolean (*_bfd_find_nearest_line)
    (bfd *, struct bfd_section *, struct bfd_symbol **, bfd_vma,
     const char **, const char **, unsigned int *);
  bfd_boolean (*_bfd_find_line)
    (bfd *, struct bfd_symbol **, struct bfd_symbol *,
     const char **, unsigned int *);
  bfd_boolean (*_bfd_find_inliner_info)
    (bfd *, const char **, const char **, unsigned int *);



  asymbol * (*_bfd_make_debug_symbol)
    (bfd *, void *, unsigned long size);


  long (*_read_minisymbols)
    (bfd *, bfd_boolean, void **, unsigned int *);


  asymbol * (*_minisymbol_to_symbol)
    (bfd *, bfd_boolean, const void *, asymbol *);







  long (*_get_reloc_upper_bound) (bfd *, sec_ptr);
  long (*_bfd_canonicalize_reloc)
    (bfd *, sec_ptr, arelent **, struct bfd_symbol **);

  reloc_howto_type *
              (*reloc_type_lookup) (bfd *, bfd_reloc_code_real_type);






  bfd_boolean (*_bfd_set_arch_mach)
    (bfd *, enum bfd_architecture, unsigned long);
  bfd_boolean (*_bfd_set_section_contents)
    (bfd *, sec_ptr, const void *, file_ptr, bfd_size_type);
# 5161 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  int (*_bfd_sizeof_headers) (bfd *, bfd_boolean);
  bfd_byte * (*_bfd_get_relocated_section_contents)
    (bfd *, struct bfd_link_info *, struct bfd_link_order *,
     bfd_byte *, bfd_boolean, struct bfd_symbol **);

  bfd_boolean (*_bfd_relax_section)
    (bfd *, struct bfd_section *, struct bfd_link_info *, bfd_boolean *);



  struct bfd_link_hash_table *
              (*_bfd_link_hash_table_create) (bfd *);


  void (*_bfd_link_hash_table_free) (struct bfd_link_hash_table *);


  bfd_boolean (*_bfd_link_add_symbols) (bfd *, struct bfd_link_info *);


  void (*_bfd_link_just_syms) (asection *, struct bfd_link_info *);



  bfd_boolean (*_bfd_final_link) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_link_split_section) (bfd *, struct bfd_section *);


  bfd_boolean (*_bfd_gc_sections) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_merge_sections) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_is_group_section) (bfd *, const struct bfd_section *);


  bfd_boolean (*_bfd_discard_group) (bfd *, struct bfd_section *);



  void (*_section_already_linked) (bfd *, struct bfd_section *);
# 5215 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  long (*_bfd_get_dynamic_symtab_upper_bound) (bfd *);

  long (*_bfd_canonicalize_dynamic_symtab)
    (bfd *, struct bfd_symbol **);

  long (*_bfd_get_synthetic_symtab)
    (bfd *, long, struct bfd_symbol **, long, struct bfd_symbol **,
     struct bfd_symbol **);

  long (*_bfd_get_dynamic_reloc_upper_bound) (bfd *);

  long (*_bfd_canonicalize_dynamic_reloc)
    (bfd *, arelent **, struct bfd_symbol **);


  const struct bfd_target * alternative_target;



  const void *backend_data;

} bfd_target;

bfd_boolean bfd_set_default_target (const char *name);

const bfd_target *bfd_find_target (const char *target_name, bfd *abfd);

const char ** bfd_target_list (void);

const bfd_target *bfd_search_for_target
   (int (*search_func) (const bfd_target *, void *),
    void *);


bfd_boolean bfd_check_format (bfd *abfd, bfd_format format);

bfd_boolean bfd_check_format_matches
   (bfd *abfd, bfd_format format, char ***matching);

bfd_boolean bfd_set_format (bfd *abfd, bfd_format format);

const char *bfd_format_string (bfd_format format);


bfd_boolean bfd_link_split_section (bfd *abfd, asection *sec);




void bfd_section_already_linked (bfd *abfd, asection *sec);





bfd_byte *bfd_simple_get_relocated_section_contents
   (bfd *abfd, asection *sec, bfd_byte *outbuf, asymbol **symbol_table);







static inline bfd_vma bfd_getl16 (const void *p) {
  const bfd_byte *addr = p;
  return (addr[1] << 8) | addr[0];
}

static inline bfd_vma bfd_getb16 (const void *p) {
  const bfd_byte *addr = p;
  return (addr[0] << 8) | addr[1];
}


static inline bfd_vma bfd_getb32 (const void *p) {
  const bfd_byte *addr = p;
  unsigned long v;

  v = (unsigned long) addr[0] << 24;
  v |= (unsigned long) addr[1] << 16;
  v |= (unsigned long) addr[2] << 8;
  v |= (unsigned long) addr[3];
  return v;
}

static inline bfd_vma bfd_getl32 (const void *p) {
  const bfd_byte *addr = p;
  unsigned long v;

  v = (unsigned long) addr[0];
  v |= (unsigned long) addr[1] << 8;
  v |= (unsigned long) addr[2] << 16;
  v |= (unsigned long) addr[3] << 24;
  return v;
}
# 26 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 2

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
# 28 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 2
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








# 29 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 2
# 37 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"

# 37 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
typedef uint32_t aarch64_insn;
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
typedef unsigned long long aarch64_feature_set;
# 120 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
enum aarch64_operand_class
{
  AARCH64_OPND_CLASS_NIL,
  AARCH64_OPND_CLASS_INT_REG,
  AARCH64_OPND_CLASS_MODIFIED_REG,
  AARCH64_OPND_CLASS_FP_REG,
  AARCH64_OPND_CLASS_SIMD_REG,
  AARCH64_OPND_CLASS_SIMD_ELEMENT,
  AARCH64_OPND_CLASS_SISD_REG,
  AARCH64_OPND_CLASS_SIMD_REGLIST,
  AARCH64_OPND_CLASS_SVE_REG,
  AARCH64_OPND_CLASS_PRED_REG,
  AARCH64_OPND_CLASS_ADDRESS,
  AARCH64_OPND_CLASS_IMMEDIATE,
  AARCH64_OPND_CLASS_SYSTEM,
  AARCH64_OPND_CLASS_COND,
};




enum aarch64_opnd
{
  AARCH64_OPND_NIL,

  AARCH64_OPND_Rd,
  AARCH64_OPND_Rn,
  AARCH64_OPND_Rm,
  AARCH64_OPND_Rt,
  AARCH64_OPND_Rt2,
  AARCH64_OPND_Rs,
  AARCH64_OPND_Ra,
  AARCH64_OPND_Rt_SYS,

  AARCH64_OPND_Rd_SP,
  AARCH64_OPND_Rn_SP,
  AARCH64_OPND_Rm_SP,
  AARCH64_OPND_PAIRREG,
  AARCH64_OPND_Rm_EXT,
  AARCH64_OPND_Rm_SFT,

  AARCH64_OPND_Fd,
  AARCH64_OPND_Fn,
  AARCH64_OPND_Fm,
  AARCH64_OPND_Fa,
  AARCH64_OPND_Ft,
  AARCH64_OPND_Ft2,

  AARCH64_OPND_Sd,
  AARCH64_OPND_Sn,
  AARCH64_OPND_Sm,

  AARCH64_OPND_Va,
  AARCH64_OPND_Vd,
  AARCH64_OPND_Vn,
  AARCH64_OPND_Vm,
  AARCH64_OPND_VdD1,
  AARCH64_OPND_VnD1,
  AARCH64_OPND_Ed,
  AARCH64_OPND_En,
  AARCH64_OPND_Em,
  AARCH64_OPND_Em16,

  AARCH64_OPND_LVn,
  AARCH64_OPND_LVt,
  AARCH64_OPND_LVt_AL,

  AARCH64_OPND_LEt,

  AARCH64_OPND_CRn,
  AARCH64_OPND_CRm,

  AARCH64_OPND_IDX,
  AARCH64_OPND_MASK,
  AARCH64_OPND_IMM_VLSL,
  AARCH64_OPND_IMM_VLSR,
  AARCH64_OPND_SIMD_IMM,
  AARCH64_OPND_SIMD_IMM_SFT,
  AARCH64_OPND_SIMD_FPIMM,
  AARCH64_OPND_SHLL_IMM,

  AARCH64_OPND_IMM0,
  AARCH64_OPND_FPIMM0,
  AARCH64_OPND_FPIMM,
  AARCH64_OPND_IMMR,
  AARCH64_OPND_IMMS,
  AARCH64_OPND_WIDTH,
  AARCH64_OPND_IMM,
  AARCH64_OPND_IMM_2,
  AARCH64_OPND_UIMM3_OP1,
  AARCH64_OPND_UIMM3_OP2,
  AARCH64_OPND_UIMM4,
  AARCH64_OPND_UIMM7,
  AARCH64_OPND_BIT_NUM,
  AARCH64_OPND_EXCEPTION,
  AARCH64_OPND_CCMP_IMM,
  AARCH64_OPND_SIMM5,
  AARCH64_OPND_NZCV,


  AARCH64_OPND_LIMM,
  AARCH64_OPND_AIMM,
  AARCH64_OPND_HALF,
  AARCH64_OPND_FBITS,
  AARCH64_OPND_IMM_MOV,
  AARCH64_OPND_IMM_ROT1,
  AARCH64_OPND_IMM_ROT2,
  AARCH64_OPND_IMM_ROT3,

  AARCH64_OPND_COND,
  AARCH64_OPND_COND1,

  AARCH64_OPND_ADDR_ADRP,
  AARCH64_OPND_ADDR_PCREL14,
  AARCH64_OPND_ADDR_PCREL19,
  AARCH64_OPND_ADDR_PCREL21,
  AARCH64_OPND_ADDR_PCREL26,

  AARCH64_OPND_ADDR_SIMPLE,
  AARCH64_OPND_ADDR_REGOFF,
  AARCH64_OPND_ADDR_SIMM7,
  AARCH64_OPND_ADDR_SIMM9,
  AARCH64_OPND_ADDR_SIMM9_2,






  AARCH64_OPND_ADDR_SIMM10,
  AARCH64_OPND_ADDR_UIMM12,
  AARCH64_OPND_SIMD_ADDR_SIMPLE,
  AARCH64_OPND_ADDR_OFFSET,
  AARCH64_OPND_SIMD_ADDR_POST,

  AARCH64_OPND_SYSREG,
  AARCH64_OPND_PSTATEFIELD,
  AARCH64_OPND_SYSREG_AT,
  AARCH64_OPND_SYSREG_DC,
  AARCH64_OPND_SYSREG_IC,
  AARCH64_OPND_SYSREG_TLBI,
  AARCH64_OPND_BARRIER,
  AARCH64_OPND_BARRIER_ISB,
  AARCH64_OPND_PRFOP,
  AARCH64_OPND_BARRIER_PSB,

  AARCH64_OPND_SVE_ADDR_RI_S4x16,
  AARCH64_OPND_SVE_ADDR_RI_S4xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x2xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x3xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x4xVL,
  AARCH64_OPND_SVE_ADDR_RI_S6xVL,
  AARCH64_OPND_SVE_ADDR_RI_S9xVL,
  AARCH64_OPND_SVE_ADDR_RI_U6,
  AARCH64_OPND_SVE_ADDR_RI_U6x2,
  AARCH64_OPND_SVE_ADDR_RI_U6x4,
  AARCH64_OPND_SVE_ADDR_RI_U6x8,
  AARCH64_OPND_SVE_ADDR_R,
  AARCH64_OPND_SVE_ADDR_RR,
  AARCH64_OPND_SVE_ADDR_RR_LSL1,
  AARCH64_OPND_SVE_ADDR_RR_LSL2,
  AARCH64_OPND_SVE_ADDR_RR_LSL3,
  AARCH64_OPND_SVE_ADDR_RX,
  AARCH64_OPND_SVE_ADDR_RX_LSL1,
  AARCH64_OPND_SVE_ADDR_RX_LSL2,
  AARCH64_OPND_SVE_ADDR_RX_LSL3,
  AARCH64_OPND_SVE_ADDR_RZ,
  AARCH64_OPND_SVE_ADDR_RZ_LSL1,
  AARCH64_OPND_SVE_ADDR_RZ_LSL2,
  AARCH64_OPND_SVE_ADDR_RZ_LSL3,
  AARCH64_OPND_SVE_ADDR_RZ_XTW_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW1_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW1_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW2_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW2_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW3_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW3_22,

  AARCH64_OPND_SVE_ADDR_ZI_U5,
  AARCH64_OPND_SVE_ADDR_ZI_U5x2,
  AARCH64_OPND_SVE_ADDR_ZI_U5x4,
  AARCH64_OPND_SVE_ADDR_ZI_U5x8,
  AARCH64_OPND_SVE_ADDR_ZZ_LSL,
  AARCH64_OPND_SVE_ADDR_ZZ_SXTW,
  AARCH64_OPND_SVE_ADDR_ZZ_UXTW,
  AARCH64_OPND_SVE_AIMM,
  AARCH64_OPND_SVE_ASIMM,
  AARCH64_OPND_SVE_FPIMM8,
  AARCH64_OPND_SVE_I1_HALF_ONE,
  AARCH64_OPND_SVE_I1_HALF_TWO,
  AARCH64_OPND_SVE_I1_ZERO_ONE,
  AARCH64_OPND_SVE_IMM_ROT1,
  AARCH64_OPND_SVE_IMM_ROT2,
  AARCH64_OPND_SVE_INV_LIMM,
  AARCH64_OPND_SVE_LIMM,
  AARCH64_OPND_SVE_LIMM_MOV,
  AARCH64_OPND_SVE_PATTERN,
  AARCH64_OPND_SVE_PATTERN_SCALED,
  AARCH64_OPND_SVE_PRFOP,
  AARCH64_OPND_SVE_Pd,
  AARCH64_OPND_SVE_Pg3,
  AARCH64_OPND_SVE_Pg4_5,
  AARCH64_OPND_SVE_Pg4_10,
  AARCH64_OPND_SVE_Pg4_16,
  AARCH64_OPND_SVE_Pm,
  AARCH64_OPND_SVE_Pn,
  AARCH64_OPND_SVE_Pt,
  AARCH64_OPND_SVE_Rm,
  AARCH64_OPND_SVE_Rn_SP,
  AARCH64_OPND_SVE_SHLIMM_PRED,
  AARCH64_OPND_SVE_SHLIMM_UNPRED,
  AARCH64_OPND_SVE_SHRIMM_PRED,
  AARCH64_OPND_SVE_SHRIMM_UNPRED,
  AARCH64_OPND_SVE_SIMM5,
  AARCH64_OPND_SVE_SIMM5B,
  AARCH64_OPND_SVE_SIMM6,
  AARCH64_OPND_SVE_SIMM8,
  AARCH64_OPND_SVE_UIMM3,
  AARCH64_OPND_SVE_UIMM7,
  AARCH64_OPND_SVE_UIMM8,
  AARCH64_OPND_SVE_UIMM8_53,
  AARCH64_OPND_SVE_VZn,
  AARCH64_OPND_SVE_Vd,
  AARCH64_OPND_SVE_Vm,
  AARCH64_OPND_SVE_Vn,
  AARCH64_OPND_SVE_Za_5,
  AARCH64_OPND_SVE_Za_16,
  AARCH64_OPND_SVE_Zd,
  AARCH64_OPND_SVE_Zm_5,
  AARCH64_OPND_SVE_Zm_16,
  AARCH64_OPND_SVE_Zm3_INDEX,
  AARCH64_OPND_SVE_Zm3_22_INDEX,
  AARCH64_OPND_SVE_Zm4_INDEX,
  AARCH64_OPND_SVE_Zn,
  AARCH64_OPND_SVE_Zn_INDEX,
  AARCH64_OPND_SVE_ZnxN,
  AARCH64_OPND_SVE_Zt,
  AARCH64_OPND_SVE_ZtxN,
  AARCH64_OPND_SM3_IMM2,
};






enum aarch64_opnd_qualifier
{

  AARCH64_OPND_QLF_NIL,



  AARCH64_OPND_QLF_W,
  AARCH64_OPND_QLF_X,
  AARCH64_OPND_QLF_WSP,
  AARCH64_OPND_QLF_SP,
# 397 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
  AARCH64_OPND_QLF_S_B,
  AARCH64_OPND_QLF_S_H,
  AARCH64_OPND_QLF_S_S,
  AARCH64_OPND_QLF_S_D,
  AARCH64_OPND_QLF_S_Q,




  AARCH64_OPND_QLF_S_4B,







  AARCH64_OPND_QLF_V_4B,
  AARCH64_OPND_QLF_V_8B,
  AARCH64_OPND_QLF_V_16B,
  AARCH64_OPND_QLF_V_2H,
  AARCH64_OPND_QLF_V_4H,
  AARCH64_OPND_QLF_V_8H,
  AARCH64_OPND_QLF_V_2S,
  AARCH64_OPND_QLF_V_4S,
  AARCH64_OPND_QLF_V_1D,
  AARCH64_OPND_QLF_V_2D,
  AARCH64_OPND_QLF_V_1Q,

  AARCH64_OPND_QLF_P_Z,
  AARCH64_OPND_QLF_P_M,


  AARCH64_OPND_QLF_CR,
  AARCH64_OPND_QLF_imm_0_7,
  AARCH64_OPND_QLF_imm_0_15,
  AARCH64_OPND_QLF_imm_0_31,
  AARCH64_OPND_QLF_imm_0_63,
  AARCH64_OPND_QLF_imm_1_32,
  AARCH64_OPND_QLF_imm_1_64,



  AARCH64_OPND_QLF_LSL,
  AARCH64_OPND_QLF_MSL,



  AARCH64_OPND_QLF_RETRIEVE,
};



enum aarch64_insn_class
{
  addsub_carry,
  addsub_ext,
  addsub_imm,
  addsub_shift,
  asimdall,
  asimddiff,
  asimdelem,
  asimdext,
  asimdimm,
  asimdins,
  asimdmisc,
  asimdperm,
  asimdsame,
  asimdshf,
  asimdtbl,
  asisddiff,
  asisdelem,
  asisdlse,
  asisdlsep,
  asisdlso,
  asisdlsop,
  asisdmisc,
  asisdone,
  asisdpair,
  asisdsame,
  asisdshf,
  bitfield,
  branch_imm,
  branch_reg,
  compbranch,
  condbranch,
  condcmp_imm,
  condcmp_reg,
  condsel,
  cryptoaes,
  cryptosha2,
  cryptosha3,
  dp_1src,
  dp_2src,
  dp_3src,
  exception,
  extract,
  float2fix,
  float2int,
  floatccmp,
  floatcmp,
  floatdp1,
  floatdp2,
  floatdp3,
  floatimm,
  floatsel,
  ldst_immpost,
  ldst_immpre,
  ldst_imm9,
  ldst_imm10,
  ldst_pos,
  ldst_regoff,
  ldst_unpriv,
  ldst_unscaled,
  ldstexcl,
  ldstnapair_offs,
  ldstpair_off,
  ldstpair_indexed,
  loadlit,
  log_imm,
  log_shift,
  lse_atomic,
  movewide,
  pcreladdr,
  ic_system,
  sve_cpy,
  sve_index,
  sve_limm,
  sve_misc,
  sve_movprfx,
  sve_pred_zm,
  sve_shift_pred,
  sve_shift_unpred,
  sve_size_bhs,
  sve_size_bhsd,
  sve_size_hsd,
  sve_size_sd,
  testbranch,
  cryptosm3,
  cryptosm4,
  dotproduct,
};



enum aarch64_op
{
  OP_NIL,
  OP_STRB_POS,
  OP_LDRB_POS,
  OP_LDRSB_POS,
  OP_STRH_POS,
  OP_LDRH_POS,
  OP_LDRSH_POS,
  OP_STR_POS,
  OP_LDR_POS,
  OP_STRF_POS,
  OP_LDRF_POS,
  OP_LDRSW_POS,
  OP_PRFM_POS,

  OP_STURB,
  OP_LDURB,
  OP_LDURSB,
  OP_STURH,
  OP_LDURH,
  OP_LDURSH,
  OP_STUR,
  OP_LDUR,
  OP_STURV,
  OP_LDURV,
  OP_LDURSW,
  OP_PRFUM,

  OP_LDR_LIT,
  OP_LDRV_LIT,
  OP_LDRSW_LIT,
  OP_PRFM_LIT,

  OP_ADD,
  OP_B,
  OP_BL,

  OP_MOVN,
  OP_MOVZ,
  OP_MOVK,

  OP_MOV_IMM_LOG,
  OP_MOV_IMM_WIDE,
  OP_MOV_IMM_WIDEN,

  OP_MOV_V,

  OP_ASR_IMM,
  OP_LSR_IMM,
  OP_LSL_IMM,

  OP_BIC,

  OP_UBFX,
  OP_BFXIL,
  OP_SBFX,
  OP_SBFIZ,
  OP_BFI,
  OP_BFC,
  OP_UBFIZ,
  OP_UXTB,
  OP_UXTH,
  OP_UXTW,

  OP_CINC,
  OP_CINV,
  OP_CNEG,
  OP_CSET,
  OP_CSETM,

  OP_FCVT,
  OP_FCVTN,
  OP_FCVTN2,
  OP_FCVTL,
  OP_FCVTL2,
  OP_FCVTXN_S,

  OP_ROR_IMM,

  OP_SXTL,
  OP_SXTL2,
  OP_UXTL,
  OP_UXTL2,

  OP_MOV_P_P,
  OP_MOV_Z_P_Z,
  OP_MOV_Z_V,
  OP_MOV_Z_Z,
  OP_MOV_Z_Zi,
  OP_MOVM_P_P_P,
  OP_MOVS_P_P,
  OP_MOVZS_P_P_P,
  OP_MOVZ_P_P_P,
  OP_NOTS_P_P_P_Z,
  OP_NOT_P_P_P_Z,

  OP_FCMLA_ELEM,

  OP_TOTAL_NUM,
};






typedef unsigned char aarch64_opnd_qualifier_t;

typedef aarch64_opnd_qualifier_t
   aarch64_opnd_qualifier_seq_t [6];


static inline bfd_boolean
empty_qualifier_sequence_p (const aarch64_opnd_qualifier_t *qualifiers)
{
  int i;
  for (i = 0; i < 6; ++i)
    if (qualifiers[i] != AARCH64_OPND_QLF_NIL)
      return 
# 661 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
            0
# 661 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                 ;
  return 
# 662 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
        1
# 662 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
            ;
}



struct aarch64_opcode
{

  const char *name;



  aarch64_insn opcode;





  aarch64_insn mask;


  enum aarch64_insn_class iclass;


  enum aarch64_op op;


  const aarch64_feature_set *avariant;




  enum aarch64_opnd operands[6];





  aarch64_opnd_qualifier_seq_t qualifiers_list[10];


  uint32_t flags;



  unsigned char tied_operand;


  bfd_boolean (* verifier) (const struct aarch64_opcode *, const aarch64_insn);
};

typedef struct aarch64_opcode aarch64_opcode;


extern aarch64_opcode aarch64_opcode_table[];
# 776 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
static inline bfd_boolean
alias_opcode_p (const aarch64_opcode *opcode)
{
  return (opcode->flags & (1 << 0)) ? 
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                    1 
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                         : 
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                           0
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                ;
}

static inline bfd_boolean
opcode_has_alias (const aarch64_opcode *opcode)
{
  return (opcode->flags & (1 << 1)) ? 
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                        1 
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                             : 
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                               0
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                    ;
}


static inline int
opcode_priority (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 2) & 0x3;
}

static inline bfd_boolean
pseudo_opcode_p (const aarch64_opcode *opcode)
{
  return (opcode->flags & (1 << 21)) != 0lu ? 
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                            1 
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                 : 
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                                   0
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                        ;
}

static inline bfd_boolean
optional_operand_p (const aarch64_opcode *opcode, unsigned int idx)
{
  return (((opcode->flags >> 12) & 0x7) == idx + 1)
    ? 
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
     1 
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
          : 
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
            0
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                 ;
}

static inline aarch64_insn
get_optional_operand_default_value (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 15) & 0x1f;
}

static inline unsigned int
get_opcode_dependent_value (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 24) & 0x7;
}

static inline bfd_boolean
opcode_has_special_coder (const aarch64_opcode *opcode)
{
  return (opcode->flags & ((1 << 5) | (1 << 27) | (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9)
   | (1 << 10) | (1 << 11) | (1 << 22) | (1 << 23) | (1 << 4))) ? 
# 824 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                                            1
    
# 825 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
   : 
# 825 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
     0
# 825 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
          ;
}

struct aarch64_name_value_pair
{
  const char * name;
  aarch64_insn value;
};

extern const struct aarch64_name_value_pair aarch64_operand_modifiers [];
extern const struct aarch64_name_value_pair aarch64_barrier_options [16];
extern const struct aarch64_name_value_pair aarch64_prfops [32];
extern const struct aarch64_name_value_pair aarch64_hint_options [];

typedef struct
{
  const char * name;
  aarch64_insn value;
  uint32_t flags;
} aarch64_sys_reg;

extern const aarch64_sys_reg aarch64_sys_regs [];
extern const aarch64_sys_reg aarch64_pstatefields [];
extern bfd_boolean aarch64_sys_reg_deprecated_p (const aarch64_sys_reg *);
extern bfd_boolean aarch64_sys_reg_supported_p (const aarch64_feature_set,
      const aarch64_sys_reg *);
extern bfd_boolean aarch64_pstatefield_supported_p (const aarch64_feature_set,
          const aarch64_sys_reg *);

typedef struct
{
  const char *name;
  uint32_t value;
  uint32_t flags ;
} aarch64_sys_ins_reg;

extern bfd_boolean aarch64_sys_ins_reg_has_xt (const aarch64_sys_ins_reg *);
extern bfd_boolean
aarch64_sys_ins_reg_supported_p (const aarch64_feature_set,
     const aarch64_sys_ins_reg *);

extern const aarch64_sys_ins_reg aarch64_sys_regs_ic [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_dc [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_at [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_tlbi [];



enum aarch64_modifier_kind
{
  AARCH64_MOD_NONE,
  AARCH64_MOD_MSL,
  AARCH64_MOD_ROR,
  AARCH64_MOD_ASR,
  AARCH64_MOD_LSR,
  AARCH64_MOD_LSL,
  AARCH64_MOD_UXTB,
  AARCH64_MOD_UXTH,
  AARCH64_MOD_UXTW,
  AARCH64_MOD_UXTX,
  AARCH64_MOD_SXTB,
  AARCH64_MOD_SXTH,
  AARCH64_MOD_SXTW,
  AARCH64_MOD_SXTX,
  AARCH64_MOD_MUL,
  AARCH64_MOD_MUL_VL,
};

bfd_boolean
aarch64_extend_operator_p (enum aarch64_modifier_kind);

enum aarch64_modifier_kind
aarch64_get_operand_modifier (const struct aarch64_name_value_pair *);


typedef struct
{


  const char *names[4];
  aarch64_insn value;
} aarch64_cond;

extern const aarch64_cond aarch64_conds[16];

const aarch64_cond* get_cond_from_value (aarch64_insn value);
const aarch64_cond* get_inverted_cond (const aarch64_cond *cond);



struct aarch64_opnd_info
{
  enum aarch64_opnd type;
  aarch64_opnd_qualifier_t qualifier;
  int idx;

  union
    {
      struct
 {
   unsigned regno;
 } reg;
      struct
 {
   unsigned int regno;
   int64_t index;
 } reglane;

      struct
 {
   unsigned first_regno : 5;
   unsigned num_regs : 3;

   unsigned has_index : 1;

   int64_t index;
 } reglist;

      struct
 {
   int64_t value;
   unsigned is_fp : 1;
 } imm;

      struct
 {
   unsigned base_regno;
   struct
     {
       union
  {
    int imm;
    unsigned regno;
  };
       unsigned is_reg;
     } offset;
   unsigned pcrel : 1;
   unsigned writeback : 1;
   unsigned preind : 1;
   unsigned postind : 1;
 } addr;

      struct
 {

   aarch64_insn value;


   uint32_t flags;
 } sysreg;

      const aarch64_cond *cond;

      aarch64_insn pstatefield;
      const aarch64_sys_ins_reg *sysins_op;
      const struct aarch64_name_value_pair *barrier;
      const struct aarch64_name_value_pair *hint_option;
      const struct aarch64_name_value_pair *prfop;
    };



  struct
    {
      enum aarch64_modifier_kind kind;
      unsigned operator_present: 1;

      unsigned amount_present: 1;
      int64_t amount;
    } shifter;

  unsigned skip:1;







  unsigned present:1;

};

typedef struct aarch64_opnd_info aarch64_opnd_info;
# 1020 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
struct aarch64_inst
{

  aarch64_insn value;


  const aarch64_opcode *opcode;


  const aarch64_cond *cond;


  aarch64_opnd_info operands[6];
};

typedef struct aarch64_inst aarch64_inst;
# 1089 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
enum aarch64_operand_error_kind
{
  AARCH64_OPDE_NIL,
  AARCH64_OPDE_RECOVERABLE,
  AARCH64_OPDE_SYNTAX_ERROR,
  AARCH64_OPDE_FATAL_SYNTAX_ERROR,
  AARCH64_OPDE_INVALID_VARIANT,
  AARCH64_OPDE_UNTIED_OPERAND,
  AARCH64_OPDE_OUT_OF_RANGE,
  AARCH64_OPDE_UNALIGNED,
  AARCH64_OPDE_REG_LIST,
  AARCH64_OPDE_OTHER_ERROR
};


struct aarch64_operand_error
{
  enum aarch64_operand_error_kind kind;
  int index;
  const char *error;
  int data[3];
  bfd_boolean non_fatal;
};

typedef struct aarch64_operand_error aarch64_operand_error;



extern int
aarch64_opcode_encode (const aarch64_opcode *, const aarch64_inst *,
         aarch64_insn *, aarch64_opnd_qualifier_t *,
         aarch64_operand_error *);

extern const aarch64_opcode *
aarch64_replace_opcode (struct aarch64_inst *,
   const aarch64_opcode *);




extern const aarch64_opcode *
aarch64_get_opcode (enum aarch64_op);


extern void
aarch64_print_operand (char *, size_t, bfd_vma, const aarch64_opcode *,
         const aarch64_opnd_info *, int, int *, bfd_vma *,
         char **);



extern int
aarch64_operand_index (const enum aarch64_opnd *, enum aarch64_opnd);

extern aarch64_opnd_qualifier_t
aarch64_get_expected_qualifier (const aarch64_opnd_qualifier_seq_t *, int,
    const aarch64_opnd_qualifier_t, int);

extern int
aarch64_num_of_operands (const aarch64_opcode *);

extern int
aarch64_stack_pointer_p (const aarch64_opnd_info *);

extern int
aarch64_zero_register_p (const aarch64_opnd_info *);

extern int
aarch64_decode_insn (aarch64_insn, aarch64_inst *, bfd_boolean,
       aarch64_operand_error *errors);



extern unsigned char
aarch64_get_qualifier_esize (aarch64_opnd_qualifier_t);

extern enum aarch64_operand_class
aarch64_get_operand_class (enum aarch64_opnd);

extern const char *
aarch64_get_operand_name (enum aarch64_opnd);

extern const char *
aarch64_get_operand_desc (enum aarch64_opnd);

extern bfd_boolean
aarch64_sve_dupm_mov_immediate_p (uint64_t, int);
# 1199 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
extern const char *const aarch64_sve_pattern_array[32];
extern const char *const aarch64_sve_prfop_array[16];
# 27 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 2



enum aarch64_field_kind
{
  FLD_NIL,
  FLD_cond2,
  FLD_nzcv,
  FLD_defgh,
  FLD_abc,
  FLD_imm19,
  FLD_immhi,
  FLD_immlo,
  FLD_size,
  FLD_vldst_size,
  FLD_op,
  FLD_Q,
  FLD_Rt,
  FLD_Rd,
  FLD_Rn,
  FLD_Rt2,
  FLD_Ra,
  FLD_op2,
  FLD_CRm,
  FLD_CRn,
  FLD_op1,
  FLD_op0,
  FLD_imm3,
  FLD_cond,
  FLD_opcode,
  FLD_cmode,
  FLD_asisdlso_opcode,
  FLD_len,
  FLD_Rm,
  FLD_Rs,
  FLD_option,
  FLD_S,
  FLD_hw,
  FLD_opc,
  FLD_opc1,
  FLD_shift,
  FLD_type,
  FLD_ldst_size,
  FLD_imm6,
  FLD_imm6_2,
  FLD_imm4,
  FLD_imm4_2,
  FLD_imm5,
  FLD_imm7,
  FLD_imm8,
  FLD_imm9,
  FLD_imm12,
  FLD_imm14,
  FLD_imm16,
  FLD_imm26,
  FLD_imms,
  FLD_immr,
  FLD_immb,
  FLD_immh,
  FLD_S_imm10,
  FLD_N,
  FLD_index,
  FLD_index2,
  FLD_sf,
  FLD_lse_sz,
  FLD_H,
  FLD_L,
  FLD_M,
  FLD_b5,
  FLD_b40,
  FLD_scale,
  FLD_SVE_M_4,
  FLD_SVE_M_14,
  FLD_SVE_M_16,
  FLD_SVE_N,
  FLD_SVE_Pd,
  FLD_SVE_Pg3,
  FLD_SVE_Pg4_5,
  FLD_SVE_Pg4_10,
  FLD_SVE_Pg4_16,
  FLD_SVE_Pm,
  FLD_SVE_Pn,
  FLD_SVE_Pt,
  FLD_SVE_Rm,
  FLD_SVE_Rn,
  FLD_SVE_Vd,
  FLD_SVE_Vm,
  FLD_SVE_Vn,
  FLD_SVE_Za_5,
  FLD_SVE_Za_16,
  FLD_SVE_Zd,
  FLD_SVE_Zm_5,
  FLD_SVE_Zm_16,
  FLD_SVE_Zn,
  FLD_SVE_Zt,
  FLD_SVE_i1,
  FLD_SVE_i3h,
  FLD_SVE_imm3,
  FLD_SVE_imm4,
  FLD_SVE_imm5,
  FLD_SVE_imm5b,
  FLD_SVE_imm6,
  FLD_SVE_imm7,
  FLD_SVE_imm8,
  FLD_SVE_imm9,
  FLD_SVE_immr,
  FLD_SVE_imms,
  FLD_SVE_msz,
  FLD_SVE_pattern,
  FLD_SVE_prfop,
  FLD_SVE_rot1,
  FLD_SVE_rot2,
  FLD_SVE_sz,
  FLD_SVE_tsz,
  FLD_SVE_tszh,
  FLD_SVE_tszl_8,
  FLD_SVE_tszl_19,
  FLD_SVE_xs_14,
  FLD_SVE_xs_22,
  FLD_rotate1,
  FLD_rotate2,
  FLD_rotate3,
  FLD_SM3_imm2
};


struct aarch64_field
{
  int lsb;
  int width;
};

typedef struct aarch64_field aarch64_field;

extern const aarch64_field fields[];



struct aarch64_operand
{
  enum aarch64_operand_class op_class;



  const char *name;

  unsigned int flags;



  enum aarch64_field_kind fields[4];


  const char *desc;
};

typedef struct aarch64_operand aarch64_operand;

extern const aarch64_operand aarch64_operands[];
# 220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
static inline bfd_boolean
operand_has_inserter (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000001) ? 
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                1 
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                     : 
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                       0
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                            ;
}

static inline bfd_boolean
operand_has_extractor (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000002) ? 
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                 1 
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                      : 
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                        0
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                             ;
}

static inline bfd_boolean
operand_need_sign_extension (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000004) ? 
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                        1 
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                             : 
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                               0
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                    ;
}

static inline bfd_boolean
operand_need_shift_by_two (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000008) ? 
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                              1 
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                   : 
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                     0
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                          ;
}

static inline bfd_boolean
operand_maybe_stack_pointer (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000010) ? 
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                            1 
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                 : 
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                   0
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                        ;
}


static inline unsigned int
get_operand_specific_data (const aarch64_operand *operand)
{
  return (operand->flags & 0x000000e0) >> 5;
}


static inline unsigned
get_operand_field_width (const aarch64_operand *operand, unsigned n)
{
  
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 operand->fields[n] != FLD_NIL
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 261, 
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "operand->fields[n] != FLD_NIL"
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                       ;
  return fields[operand->fields[n]].width;
}


static inline unsigned
get_operand_fields_width (const aarch64_operand *operand)
{
  int i = 0;
  unsigned width = 0;
  while (operand->fields[i] != FLD_NIL)
    width += fields[operand->fields[i++]].width;
  
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 width > 0 && width < 32
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 273, 
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "width > 0 && width < 32"
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                 ;
  return width;
}

static inline const aarch64_operand *
get_operand_from_code (enum aarch64_opnd code)
{
  return aarch64_operands + code;
}



int aarch64_match_operands_constraint (aarch64_inst *,
           aarch64_operand_error *);


const char* aarch64_get_qualifier_name (aarch64_opnd_qualifier_t);
unsigned char aarch64_get_qualifier_nelem (aarch64_opnd_qualifier_t);
aarch64_insn aarch64_get_qualifier_standard_value (aarch64_opnd_qualifier_t);
int aarch64_find_best_match (const aarch64_inst *,
        const aarch64_opnd_qualifier_seq_t *,
        int, aarch64_opnd_qualifier_t *);

static inline void
reset_operand_qualifier (aarch64_inst *inst, int idx)
{
  
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 idx >=0 && idx < aarch64_num_of_operands (inst->opcode)
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 299, 
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "idx >=0 && idx < aarch64_num_of_operands (inst->opcode)"
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                                 ;
  inst->operands[idx].qualifier = AARCH64_OPND_QLF_NIL;
}





static inline aarch64_insn
gen_mask (int width)
{
  return ((aarch64_insn) 1 << width) - 1;
}


static inline int
gen_sub_field (enum aarch64_field_kind kind, int lsb_rel, int width, aarch64_field *ret)
{
  const aarch64_field *field = &fields[kind];
  if (lsb_rel < 0 || width <= 0 || lsb_rel + width > field->width)
    return 0;
  ret->lsb = field->lsb + lsb_rel;
  ret->width = width;
  return 1;
}




static inline void
insert_field_2 (const aarch64_field *field, aarch64_insn *code,
  aarch64_insn value, aarch64_insn mask)
{
  
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 field->width < 32 && field->width >= 1 && field->lsb >= 0 && field->lsb + field->width <= 32
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 332, 
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "field->width < 32 && field->width >= 1 && field->lsb >= 0 && field->lsb + field->width <= 32"
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
                                      
# 333 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                     ;
  value &= gen_mask (field->width);
  value <<= field->lsb;


  value &= ~mask;
  *code |= value;
}




static inline aarch64_insn
extract_field_2 (const aarch64_field *field, aarch64_insn code,
   aarch64_insn mask)
{
  aarch64_insn value;

  code &= ~mask;
  value = (code >> field->lsb) & gen_mask (field->width);
  return value;
}




static inline void
insert_field (enum aarch64_field_kind kind, aarch64_insn *code,
       aarch64_insn value, aarch64_insn mask)
{
  insert_field_2 (&fields[kind], code, value, mask);
}




static inline aarch64_insn
extract_field (enum aarch64_field_kind kind, aarch64_insn code,
        aarch64_insn mask)
{
  return extract_field_2 (&fields[kind], code, mask);
}

extern aarch64_insn
extract_fields (aarch64_insn code, aarch64_insn mask, ...);







static inline int
select_operand_for_sf_field_coding (const aarch64_opcode *opcode)
{
  int idx = -1;
  if (aarch64_get_operand_class (opcode->operands[0])
      == AARCH64_OPND_CLASS_INT_REG)

    idx = 0;
  else if (aarch64_get_operand_class (opcode->operands[1])
    == AARCH64_OPND_CLASS_INT_REG)

    idx = 1;
  else
    { 
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 398, 
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ; abort (); }
  return idx;
}





static inline int
select_operand_for_fptype_field_coding (const aarch64_opcode *opcode)
{
  int idx;
  if (aarch64_get_operand_class (opcode->operands[1])
      == AARCH64_OPND_CLASS_FP_REG)

    idx = 1;
  else if (aarch64_get_operand_class (opcode->operands[0])
    == AARCH64_OPND_CLASS_FP_REG)

    idx = 0;
  else
    { 
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 419, 
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ; abort (); }
  return idx;
}






static inline int
select_operand_for_scalar_size_field_coding (const aarch64_opcode *opcode)
{
  int src_size = 0, dst_size = 0;
  if (aarch64_get_operand_class (opcode->operands[0])
      == AARCH64_OPND_CLASS_SISD_REG)
    dst_size = aarch64_get_qualifier_esize (opcode->qualifiers_list[0][0]);
  if (aarch64_get_operand_class (opcode->operands[1])
      == AARCH64_OPND_CLASS_SISD_REG)
    src_size = aarch64_get_qualifier_esize (opcode->qualifiers_list[0][1]);
  if (src_size == dst_size && src_size == 0)
    { 
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 439, 
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ; abort (); }

  if (dst_size == 0 || dst_size == src_size << 1)
    return 1;
  else
    return 0;
}




int aarch64_select_operand_for_sizeq_field_coding (const aarch64_opcode *);



aarch64_insn aarch64_get_operand_modifier_value (enum aarch64_modifier_kind);
enum aarch64_modifier_kind
aarch64_get_operand_modifier_from_value (aarch64_insn, bfd_boolean);


bfd_boolean aarch64_wide_constant_p (int64_t, int, unsigned int *);
bfd_boolean aarch64_logical_immediate_p (uint64_t, int, aarch64_insn *);
int aarch64_shrink_expanded_imm8 (uint64_t);


static inline void
copy_operand_info (aarch64_inst *inst, int dst, int src)
{
  
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 dst >= 0 && src >= 0 && dst < 6 && src < 6
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 467, 
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "dst >= 0 && src >= 0 && dst < AARCH64_MAX_OPND_NUM && src < AARCH64_MAX_OPND_NUM"
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
                                 
# 468 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                ;
  
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 __builtin___memcpy_chk (
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 &inst->operands[dst]
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 , 
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 &inst->operands[src], sizeof (aarch64_opnd_info)
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 , __builtin_object_size (
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 &inst->operands[dst]
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 , 0))
                              
# 470 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                             ;
  inst->operands[dst].idx = dst;
}



static inline unsigned int
get_logsz (unsigned int size)
{
  const unsigned char ls[16] =
    {0, 1, -1, 2, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, 4};
  if (size > 16)
    {
      
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 483, 
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ;
      return -1;
    }
  
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 ls[size - 1] != (unsigned char)-1
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 486, 
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "ls[size - 1] != (unsigned char)-1"
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                           ;
  return ls[size - 1];
}
# 25 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h" 2
# 36 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
const aarch64_opcode* aarch64_opcode_lookup (uint32_t);
const aarch64_opcode* aarch64_find_next_opcode (const aarch64_opcode *);
# 48 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
const aarch64_opcode* aarch64_find_alias_opcode (const aarch64_opcode *);
const aarch64_opcode* aarch64_find_next_alias_opcode (const aarch64_opcode *);



bfd_boolean
aarch64_extract_operand (const aarch64_operand *, aarch64_opnd_info *,
    const aarch64_insn, const aarch64_inst *,
    aarch64_operand_error *);
# 65 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
bfd_boolean aarch64_ext_regno (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_regno_pair (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_regrt_sysins (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reglane (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reglist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ldst_reglist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ldst_reglist_r (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ldst_elemlist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_advsimd_imm_shift (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_shll_imm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm_half (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_advsimd_imm_modified (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_fpimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_fbits (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_aimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_limm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_inv_limm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ft (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_simple (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_offset (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_regoff (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_simm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_simm10 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_uimm12 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_simd_addr_post (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_cond (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sysreg (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_pstatefield (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sysins_op (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_barrier (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_hint (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_prfop (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reg_extended (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reg_shifted (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s4 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s4xvl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s6xvl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s9xvl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_u6 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_rr_lsl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_rz_xtw (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zi_u5 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zz_lsl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zz_sxtw (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zz_uxtw (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_aimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_asimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_float_half_one (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_float_half_two (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_float_zero_one (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_index (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_limm_mov (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_quad_index (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_reglist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_scale (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_shlimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_shrimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm_rotate1 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm_rotate2 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
# 23 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 2



static int
aarch64_opcode_lookup_1 (uint32_t word)
{
  if (((word >> 26) & 0x1) == 0)
    {
      if (((word >> 25) & 0x1) == 0)
        {
          if (((word >> 27) & 0x1) == 0)
            {
              if (((word >> 24) & 0x1) == 0)
                {
                  if (((word >> 31) & 0x1) == 0)
                    {




                      return 1155;
                    }
                  else
                    {




                      return 1156;
                    }
                }
              else
                {
                  if (((word >> 29) & 0x1) == 0)
                    {
                      if (((word >> 30) & 0x1) == 0)
                        {




                          return 12;
                        }
                      else
                        {




                          return 16;
                        }
                    }
                  else
                    {
                      if (((word >> 30) & 0x1) == 0)
                        {




                          return 14;
                        }
                      else
                        {




                          return 17;
                        }
                    }
                }
            }
          else
            {
              if (((word >> 28) & 0x1) == 0)
                {
                  if (((word >> 22) & 0x1) == 0)
                    {
                      if (((word >> 23) & 0x1) == 0)
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 910;
                                            }
                                          else
                                            {




                                              return 916;
                                            }
                                        }
                                      else
                                        {




                                          return 922;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 990;
                                        }
                                      else
                                        {




                                          return 924;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 911;
                                            }
                                          else
                                            {




                                              return 917;
                                            }
                                        }
                                      else
                                        {




                                          return 923;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 992;
                                        }
                                      else
                                        {




                                          return 925;
                                        }
                                    }
                                }
                            }
                          else
                            {




                              return 941;
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 939;
                                        }
                                      else
                                        {




                                          return 938;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 978;
                                            }
                                          else
                                            {




                                              return 979;
                                            }
                                        }
                                      else
                                        {




                                          return 980;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 914;
                                            }
                                          else
                                            {




                                              return 920;
                                            }
                                        }
                                      else
                                        {




                                          return 930;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 982;
                                            }
                                          else
                                            {




                                              return 985;
                                            }
                                        }
                                      else
                                        {




                                          return 988;
                                        }
                                    }
                                }
                            }
                          else
                            {




                              return 950;
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 23) & 0x1) == 0)
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 912;
                                            }
                                          else
                                            {




                                              return 918;
                                            }
                                        }
                                      else
                                        {




                                          return 926;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 991;
                                        }
                                      else
                                        {




                                          return 928;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 913;
                                            }
                                          else
                                            {




                                              return 919;
                                            }
                                        }
                                      else
                                        {




                                          return 927;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 993;
                                        }
                                      else
                                        {




                                          return 929;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 942;
                                }
                              else
                                {




                                  return 949;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 936;
                                            }
                                          else
                                            {




                                              return 937;
                                            }
                                        }
                                      else
                                        {




                                          return 935;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 981;
                                            }
                                          else
                                            {




                                              return 984;
                                            }
                                        }
                                      else
                                        {




                                          return 987;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 915;
                                            }
                                          else
                                            {




                                              return 921;
                                            }
                                        }
                                      else
                                        {




                                          return 931;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 983;
                                            }
                                          else
                                            {




                                              return 986;
                                            }
                                        }
                                      else
                                        {




                                          return 989;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 951;
                                }
                              else
                                {




                                  return 954;
                                }
                            }
                        }
                    }
                }
              else
                {
                  if (((word >> 24) & 0x1) == 0)
                    {
                      if (((word >> 29) & 0x1) == 0)
                        {
                          if (((word >> 31) & 0x1) == 0)
                            {




                              return 955;
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 957;
                                }
                              else
                                {




                                  return 958;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 10) & 0x1) == 0)
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 896;
                                                    }
                                                  else
                                                    {




                                                      return 901;
                                                    }
                                                }
                                              else
                                                {




                                                  return 904;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 897;
                                                    }
                                                  else
                                                    {




                                                      return 902;
                                                    }
                                                }
                                              else
                                                {




                                                  return 905;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {




                                                  return 898;
                                                }
                                              else
                                                {




                                                  return 906;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {




                                                  return 903;
                                                }
                                              else
                                                {




                                                  return 907;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1006;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1007;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1008;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1009;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1012;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1015;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1010;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1013;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1016;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1011;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1014;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1017;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 994;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 995;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 996;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 997;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1000;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1003;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 998;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1001;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1004;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 999;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1002;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1005;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1054;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1055;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1056;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1057;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1060;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1063;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1058;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1061;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1064;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 30) & 0x1) == 0)
                                                                    {




                                                                      return 1059;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1062;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1065;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 31) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 932;
                                                            }
                                                          else
                                                            {




                                                              return 933;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 934;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1030;
                                                                }
                                                              else
                                                                {




                                                                  return 1031;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1032;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1033;
                                                                }
                                                              else
                                                                {




                                                                  return 1036;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1039;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1034;
                                                                }
                                                              else
                                                                {




                                                                  return 1037;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1040;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1035;
                                                                }
                                                              else
                                                                {




                                                                  return 1038;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1041;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1078;
                                                                }
                                                              else
                                                                {




                                                                  return 1079;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1080;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1081;
                                                                }
                                                              else
                                                                {




                                                                  return 1084;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1087;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1082;
                                                                }
                                                              else
                                                                {




                                                                  return 1085;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1088;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1083;
                                                                }
                                                              else
                                                                {




                                                                  return 1086;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1089;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1018;
                                                                }
                                                              else
                                                                {




                                                                  return 1019;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1020;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1021;
                                                                }
                                                              else
                                                                {




                                                                  return 1024;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1027;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1022;
                                                                }
                                                              else
                                                                {




                                                                  return 1025;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1028;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1023;
                                                                }
                                                              else
                                                                {




                                                                  return 1026;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1029;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1066;
                                                                }
                                                              else
                                                                {




                                                                  return 1067;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1068;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1069;
                                                                }
                                                              else
                                                                {




                                                                  return 1072;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1075;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1070;
                                                                }
                                                              else
                                                                {




                                                                  return 1073;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1076;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1071;
                                                                }
                                                              else
                                                                {




                                                                  return 1074;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1077;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1042;
                                                                }
                                                              else
                                                                {




                                                                  return 1043;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1044;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1045;
                                                                }
                                                              else
                                                                {




                                                                  return 1048;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1051;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1046;
                                                                }
                                                              else
                                                                {




                                                                  return 1049;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1052;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1047;
                                                                }
                                                              else
                                                                {




                                                                  return 1050;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1053;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1090;
                                                                }
                                                              else
                                                                {




                                                                  return 1091;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1092;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1093;
                                                                }
                                                              else
                                                                {




                                                                  return 1096;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1099;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1094;
                                                                }
                                                              else
                                                                {




                                                                  return 1097;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1100;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 1095;
                                                                }
                                                              else
                                                                {




                                                                  return 1098;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1101;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 887;
                                                    }
                                                  else
                                                    {




                                                      return 890;
                                                    }
                                                }
                                              else
                                                {




                                                  return 893;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 888;
                                                    }
                                                  else
                                                    {




                                                      return 891;
                                                    }
                                                }
                                              else
                                                {




                                                  return 894;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {




                                                  return 889;
                                                }
                                              else
                                                {




                                                  return 895;
                                                }
                                            }
                                          else
                                            {




                                              return 892;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 875;
                                                    }
                                                  else
                                                    {




                                                      return 880;
                                                    }
                                                }
                                              else
                                                {




                                                  return 883;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 876;
                                                    }
                                                  else
                                                    {




                                                      return 881;
                                                    }
                                                }
                                              else
                                                {




                                                  return 884;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {




                                                  return 877;
                                                }
                                              else
                                                {




                                                  return 885;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {




                                                  return 882;
                                                }
                                              else
                                                {




                                                  return 886;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 21) & 0x1) == 0)
                                {
                                  if (((word >> 23) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 852;
                                                }
                                              else
                                                {




                                                  return 857;
                                                }
                                            }
                                          else
                                            {




                                              return 860;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 853;
                                                }
                                              else
                                                {




                                                  return 858;
                                                }
                                            }
                                          else
                                            {




                                              return 861;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 854;
                                            }
                                          else
                                            {




                                              return 862;
                                            }
                                        }
                                      else
                                        {




                                          return 859;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 23) & 0x1) == 0)
                                    {




                                      return 908;
                                    }
                                  else
                                    {




                                      return 909;
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 23) & 0x1) == 0)
                        {
                          if (((word >> 22) & 0x1) == 0)
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 2046;
                                        }
                                      else
                                        {




                                          return 2054;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 2050;
                                        }
                                      else
                                        {




                                          return 2057;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {




                                          return 863;
                                        }
                                      else
                                        {




                                          return 868;
                                        }
                                    }
                                  else
                                    {




                                      return 871;
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 2047;
                                        }
                                      else
                                        {




                                          return 2055;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 2051;
                                        }
                                      else
                                        {




                                          return 2058;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {




                                          return 864;
                                        }
                                      else
                                        {




                                          return 869;
                                        }
                                    }
                                  else
                                    {




                                      return 872;
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 22) & 0x1) == 0)
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 2049;
                                        }
                                      else
                                        {




                                          return 2056;
                                        }
                                    }
                                  else
                                    {




                                      return 2053;
                                    }
                                }
                              else
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {




                                      return 2048;
                                    }
                                  else
                                    {




                                      return 2052;
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {




                                      return 865;
                                    }
                                  else
                                    {




                                      return 873;
                                    }
                                }
                              else
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {




                                      return 870;
                                    }
                                  else
                                    {




                                      return 874;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      else
        {
          if (((word >> 24) & 0x1) == 0)
            {
              if (((word >> 27) & 0x1) == 0)
                {
                  if (((word >> 23) & 0x1) == 0)
                    {
                      if (((word >> 29) & 0x1) == 0)
                        {
                          if (((word >> 30) & 0x1) == 0)
                            {




                              return 959;
                            }
                          else
                            {




                              return 963;
                            }
                        }
                      else
                        {
                          if (((word >> 30) & 0x1) == 0)
                            {




                              return 961;
                            }
                          else
                            {




                              return 964;
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 29) & 0x1) == 0)
                        {
                          if (((word >> 30) & 0x1) == 0)
                            {




                              return 1150;
                            }
                          else
                            {




                              return 1152;
                            }
                        }
                      else
                        {




                          return 1154;
                        }
                    }
                }
              else
                {
                  if (((word >> 21) & 0x1) == 0)
                    {
                      if (((word >> 28) & 0x1) == 0)
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 966;
                                }
                              else
                                {




                                  return 973;
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 968;
                                }
                              else
                                {




                                  return 975;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 10) & 0x1) == 0)
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 22) & 0x1) == 0)
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 0;
                                                }
                                              else
                                                {




                                                  return 2;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 1;
                                                }
                                              else
                                                {




                                                  return 4;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 656;
                                            }
                                          else
                                            {




                                              return 660;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 654;
                                            }
                                          else
                                            {




                                              return 655;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {




                                                          return 679;
                                                        }
                                                      else
                                                        {




                                                          return 687;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 716;
                                                        }
                                                      else
                                                        {




                                                          return 703;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 707;
                                                    }
                                                  else
                                                    {




                                                      return 695;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {




                                                          return 684;
                                                        }
                                                      else
                                                        {




                                                          return 691;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 720;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 715;
                                                    }
                                                  else
                                                    {




                                                      return 699;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 22) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {




                                          return 2044;
                                        }
                                      else
                                        {




                                          return 2045;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 652;
                                            }
                                          else
                                            {




                                              return 653;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 705;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {
                                                              if (((word >> 31) & 0x1) == 0)
                                                                {




                                                                  return 681;
                                                                }
                                                              else
                                                                {




                                                                  return 686;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 689;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 718;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 711;
                                                    }
                                                  else
                                                    {




                                                      return 697;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 693;
                                                    }
                                                  else
                                                    {




                                                      return 722;
                                                    }
                                                }
                                              else
                                                {




                                                  return 701;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 22) & 0x1) == 0)
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {




                                          return 2043;
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 657;
                                            }
                                          else
                                            {




                                              return 663;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {




                                                      return 680;
                                                    }
                                                  else
                                                    {




                                                      return 688;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 717;
                                                    }
                                                  else
                                                    {




                                                      return 704;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 709;
                                                }
                                              else
                                                {




                                                  return 696;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {




                                                      return 685;
                                                    }
                                                  else
                                                    {




                                                      return 692;
                                                    }
                                                }
                                              else
                                                {




                                                  return 721;
                                                }
                                            }
                                          else
                                            {




                                              return 700;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 12) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 706;
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {




                                                      return 682;
                                                    }
                                                  else
                                                    {




                                                      return 690;
                                                    }
                                                }
                                            }
                                          else
                                            {




                                              return 719;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 713;
                                            }
                                          else
                                            {




                                              return 698;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {




                                              return 694;
                                            }
                                          else
                                            {




                                              return 723;
                                            }
                                        }
                                      else
                                        {




                                          return 702;
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 29) & 0x1) == 0)
                        {
                          if (((word >> 30) & 0x1) == 0)
                            {




                              return 967;
                            }
                          else
                            {




                              return 974;
                            }
                        }
                      else
                        {
                          if (((word >> 30) & 0x1) == 0)
                            {




                              return 971;
                            }
                          else
                            {




                              return 977;
                            }
                        }
                    }
                }
            }
          else
            {
              if (((word >> 27) & 0x1) == 0)
                {
                  if (((word >> 23) & 0x1) == 0)
                    {
                      if (((word >> 29) & 0x1) == 0)
                        {
                          if (((word >> 30) & 0x1) == 0)
                            {




                              return 612;
                            }
                          else
                            {




                              return 623;
                            }
                        }
                      else
                        {




                          return 619;
                        }
                    }
                  else
                    {




                      return 746;
                    }
                }
              else
                {
                  if (((word >> 21) & 0x1) == 0)
                    {
                      if (((word >> 28) & 0x1) == 0)
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 19;
                                }
                              else
                                {




                                  return 22;
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {




                                  return 20;
                                }
                              else
                                {




                                  return 24;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 15) & 0x1) == 0)
                            {
                              if (((word >> 22) & 0x1) == 0)
                                {




                                  return 724;
                                }
                              else
                                {
                                  if (((word >> 23) & 0x1) == 0)
                                    {




                                      return 732;
                                    }
                                  else
                                    {




                                      return 737;
                                    }
                                }
                            }
                          else
                            {




                              return 726;
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 23) & 0x1) == 0)
                        {
                          if (((word >> 28) & 0x1) == 0)
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {




                                      return 6;
                                    }
                                  else
                                    {




                                      return 9;
                                    }
                                }
                              else
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {




                                      return 7;
                                    }
                                  else
                                    {




                                      return 10;
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {




                                  return 728;
                                }
                              else
                                {




                                  return 730;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 15) & 0x1) == 0)
                            {




                              return 733;
                            }
                          else
                            {




                              return 735;
                            }
                        }
                    }
                }
            }
        }
    }
  else
    {
      if (((word >> 27) & 0x1) == 0)
        {
          if (((word >> 28) & 0x1) == 0)
            {
              if (((word >> 24) & 0x1) == 0)
                {
                  if (((word >> 29) & 0x1) == 0)
                    {
                      if (((word >> 13) & 0x1) == 0)
                        {
                          if (((word >> 14) & 0x1) == 0)
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1235;
                                                                }
                                                              else
                                                                {




                                                                  return 1704;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1783;
                                                                }
                                                              else
                                                                {




                                                                  return 1715;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1774;
                                                            }
                                                          else
                                                            {




                                                              return 1765;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1788;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1786;
                                                                }
                                                              else
                                                                {




                                                                  return 1243;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1775;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1904;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1932;
                                                                }
                                                              else
                                                                {




                                                                  return 1330;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1926;
                                                            }
                                                          else
                                                            {




                                                              return 1917;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1906;
                                                                }
                                                              else
                                                                {




                                                                  return 1937;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1935;
                                                                }
                                                              else
                                                                {




                                                                  return 1255;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1927;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1517;
                                                }
                                              else
                                                {




                                                  return 1528;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1521;
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 10) & 0x1) == 0)
                                                    {




                                                      return 1776;
                                                    }
                                                  else
                                                    {




                                                      return 1928;
                                                    }
                                                }
                                              else
                                                {




                                                  return 1532;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 10) & 0x1) == 0)
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {




                                                          return 1233;
                                                        }
                                                      else
                                                        {




                                                          return 1790;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1820;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {




                                                          return 1902;
                                                        }
                                                      else
                                                        {




                                                          return 1938;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1968;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1723;
                                                }
                                              else
                                                {




                                                  return 1529;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1724;
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 10) & 0x1) == 0)
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1777;
                                                        }
                                                      else
                                                        {




                                                          return 1778;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1929;
                                                        }
                                                      else
                                                        {




                                                          return 1930;
                                                        }
                                                    }
                                                }
                                              else
                                                {




                                                  return 1533;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 21) & 0x1) == 0)
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1251;
                                                            }
                                                          else
                                                            {




                                                              return 1249;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1250;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {




                                                          return 1252;
                                                        }
                                                      else
                                                        {




                                                          return 1253;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1695;
                                                                }
                                                              else
                                                                {




                                                                  return 1693;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1694;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1696;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1689;
                                                                }
                                                              else
                                                                {




                                                                  return 1687;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1688;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1690;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 10) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 1247;
                                                    }
                                                  else
                                                    {




                                                      return 1248;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {




                                                          return 1691;
                                                        }
                                                      else
                                                        {




                                                          return 1692;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {




                                                          return 1685;
                                                        }
                                                      else
                                                        {




                                                          return 1686;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1523;
                                                }
                                              else
                                                {




                                                  return 1536;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1493;
                                                }
                                              else
                                                {




                                                  return 1514;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1522;
                                            }
                                          else
                                            {




                                              return 1534;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1527;
                                                }
                                              else
                                                {




                                                  return 1539;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1725;
                                                }
                                              else
                                                {




                                                  return 1535;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 1698;
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1459;
                                                }
                                              else
                                                {




                                                  return 1479;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1464;
                                            }
                                          else
                                            {




                                              return 1484;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {
                                                      if (((word >> 10) & 0x1) == 0)
                                                        {




                                                          return 1450;
                                                        }
                                                      else
                                                        {




                                                          return 1451;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {




                                                              return 1237;
                                                            }
                                                          else
                                                            {




                                                              return 1759;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1236;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 10) & 0x1) == 0)
                                                    {




                                                      return 1452;
                                                    }
                                                  else
                                                    {




                                                      return 1449;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1743;
                                                }
                                              else
                                                {




                                                  return 1480;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1745;
                                            }
                                          else
                                            {




                                              return 1485;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 21) & 0x1) == 0)
                                            {




                                              return 1697;
                                            }
                                          else
                                            {
                                              if (((word >> 10) & 0x1) == 0)
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {




                                                              return 1817;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1811;
                                                                }
                                                              else
                                                                {




                                                                  return 1808;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {




                                                              return 1447;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1443;
                                                                }
                                                              else
                                                                {




                                                                  return 1441;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1803;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {




                                                              return 1797;
                                                            }
                                                          else
                                                            {




                                                              return 1794;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {




                                                              return 1965;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1959;
                                                                }
                                                              else
                                                                {




                                                                  return 1956;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {




                                                              return 1322;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1318;
                                                                }
                                                              else
                                                                {




                                                                  return 1316;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1951;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {




                                                              return 1945;
                                                            }
                                                          else
                                                            {




                                                              return 1942;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1722;
                                                    }
                                                  else
                                                    {




                                                      return 1737;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1466;
                                                    }
                                                  else
                                                    {




                                                      return 1488;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1495;
                                                }
                                              else
                                                {




                                                  return 1499;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1465;
                                            }
                                          else
                                            {




                                              return 1486;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1471;
                                                }
                                              else
                                                {




                                                  return 1492;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1746;
                                                }
                                              else
                                                {




                                                  return 1487;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 14) & 0x1) == 0)
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 17) & 0x1) == 0)
                                                {
                                                  if (((word >> 19) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {




                                                              return 1766;
                                                            }
                                                          else
                                                            {




                                                              return 1918;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1701;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1784;
                                                            }
                                                          else
                                                            {




                                                              return 1718;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1933;
                                                            }
                                                          else
                                                            {




                                                              return 1333;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {




                                                          return 1787;
                                                        }
                                                      else
                                                        {




                                                          return 1246;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1936;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1617;
                                                }
                                              else
                                                {




                                                  return 1628;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1624;
                                            }
                                          else
                                            {




                                              return 1634;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 1241;
                                                    }
                                                  else
                                                    {




                                                      return 1713;
                                                    }
                                                }
                                              else
                                                {




                                                  return 1736;
                                                }
                                            }
                                          else
                                            {




                                              return 1738;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 1328;
                                                    }
                                                  else
                                                    {




                                                      return 1254;
                                                    }
                                                }
                                              else
                                                {




                                                  return 1629;
                                                }
                                            }
                                          else
                                            {




                                              return 1635;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 21) & 0x1) == 0)
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1909;
                                                            }
                                                          else
                                                            {




                                                              return 1274;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1911;
                                                            }
                                                          else
                                                            {




                                                              return 1336;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1910;
                                                            }
                                                          else
                                                            {




                                                              return 1303;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1232;
                                                            }
                                                          else
                                                            {




                                                              return 1710;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1972;
                                                            }
                                                          else
                                                            {




                                                              return 1275;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1974;
                                                            }
                                                          else
                                                            {




                                                              return 1413;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1973;
                                                            }
                                                          else
                                                            {




                                                              return 1302;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1707;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1238;
                                                        }
                                                      else
                                                        {




                                                          return 1239;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1240;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 10) & 0x1) == 0)
                                                    {
                                                      if (((word >> 11) & 0x1) == 0)
                                                        {




                                                          return 1439;
                                                        }
                                                      else
                                                        {




                                                          return 1383;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1700;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1626;
                                                }
                                              else
                                                {




                                                  return 1638;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1494;
                                                }
                                              else
                                                {




                                                  return 1498;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1625;
                                            }
                                          else
                                            {




                                              return 1636;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1627;
                                                }
                                              else
                                                {




                                                  return 1639;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1739;
                                                }
                                              else
                                                {




                                                  return 1637;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 15) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 1699;
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1583;
                                                }
                                              else
                                                {




                                                  return 1603;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1592;
                                            }
                                          else
                                            {




                                              return 1611;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 1729;
                                            }
                                          else
                                            {




                                              return 1731;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 1604;
                                            }
                                          else
                                            {




                                              return 1612;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 21) & 0x1) == 0)
                                            {




                                              return 1702;
                                            }
                                          else
                                            {
                                              if (((word >> 10) & 0x1) == 0)
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1304;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1308;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1306;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1305;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1440;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1448;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1444;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1442;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1807;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1819;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1813;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1810;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1806;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1818;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1812;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1809;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1793;
                                                                }
                                                              else
                                                                {




                                                                  return 1805;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1799;
                                                                }
                                                              else
                                                                {




                                                                  return 1796;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1792;
                                                                }
                                                              else
                                                                {




                                                                  return 1804;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1798;
                                                                }
                                                              else
                                                                {




                                                                  return 1795;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1315;
                                                                }
                                                              else
                                                                {




                                                                  return 1323;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1319;
                                                                }
                                                              else
                                                                {




                                                                  return 1317;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1954;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1966;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1960;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1957;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1955;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1967;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1961;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1958;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1940;
                                                                }
                                                              else
                                                                {




                                                                  return 1952;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1946;
                                                                }
                                                              else
                                                                {




                                                                  return 1943;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1941;
                                                                }
                                                              else
                                                                {




                                                                  return 1953;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1947;
                                                                }
                                                              else
                                                                {




                                                                  return 1944;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1726;
                                                    }
                                                  else
                                                    {




                                                      return 1740;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1594;
                                                    }
                                                  else
                                                    {




                                                      return 1615;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1496;
                                                }
                                              else
                                                {




                                                  return 1500;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1728;
                                                }
                                              else
                                                {




                                                  return 1742;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1593;
                                                }
                                              else
                                                {




                                                  return 1613;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1595;
                                                }
                                              else
                                                {




                                                  return 1616;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1732;
                                                }
                                              else
                                                {




                                                  return 1614;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 21) & 0x1) == 0)
                        {
                          if (((word >> 15) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1288;
                                                }
                                              else
                                                {




                                                  return 1285;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1502;
                                                }
                                              else
                                                {




                                                  return 1506;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1279;
                                                }
                                              else
                                                {




                                                  return 1282;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1460;
                                                    }
                                                  else
                                                    {




                                                      return 1540;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1462;
                                                    }
                                                  else
                                                    {




                                                      return 1482;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1276;
                                                }
                                              else
                                                {




                                                  return 1299;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1501;
                                                }
                                              else
                                                {




                                                  return 1505;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1297;
                                                }
                                              else
                                                {




                                                  return 1291;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1584;
                                                    }
                                                  else
                                                    {




                                                      return 1640;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1588;
                                                    }
                                                  else
                                                    {




                                                      return 1607;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {




                                      return 1345;
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {




                                              return 1822;
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1826;
                                                }
                                              else
                                                {




                                                  return 1847;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1892;
                                                }
                                              else
                                                {




                                                  return 1896;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1876;
                                                }
                                              else
                                                {




                                                  return 1880;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 13) & 0x1) == 0)
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 4) & 0x1) == 0)
                                            {




                                              return 1280;
                                            }
                                          else
                                            {




                                              return 1283;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1289;
                                                }
                                              else
                                                {




                                                  return 1286;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1675;
                                                    }
                                                  else
                                                    {




                                                      return 1679;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1567;
                                                    }
                                                  else
                                                    {




                                                      return 1571;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {




                                          return 1344;
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1823;
                                                }
                                              else
                                                {




                                                  return 1842;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1827;
                                                }
                                              else
                                                {




                                                  return 1848;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1277;
                                                }
                                              else
                                                {




                                                  return 1300;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 20) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1467;
                                                        }
                                                      else
                                                        {




                                                          return 1545;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1469;
                                                        }
                                                      else
                                                        {




                                                          return 1490;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1659;
                                                        }
                                                      else
                                                        {




                                                          return 1672;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1661;
                                                        }
                                                      else
                                                        {




                                                          return 1665;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1824;
                                                }
                                              else
                                                {




                                                  return 1843;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1831;
                                                }
                                              else
                                                {




                                                  return 1852;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1293;
                                                }
                                              else
                                                {




                                                  return 1295;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1676;
                                                    }
                                                  else
                                                    {




                                                      return 1680;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1568;
                                                    }
                                                  else
                                                    {




                                                      return 1572;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 20) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {




                                                  return 1829;
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1832;
                                                    }
                                                  else
                                                    {




                                                      return 1853;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1893;
                                                    }
                                                  else
                                                    {




                                                      return 1897;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1877;
                                                    }
                                                  else
                                                    {




                                                      return 1881;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 13) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {
                                      if (((word >> 4) & 0x1) == 0)
                                        {




                                          return 1290;
                                        }
                                      else
                                        {




                                          return 1287;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1461;
                                                }
                                              else
                                                {




                                                  return 1481;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1463;
                                                }
                                              else
                                                {




                                                  return 1483;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1559;
                                                }
                                              else
                                                {




                                                  return 1563;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1575;
                                                }
                                              else
                                                {




                                                  return 1579;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 15) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 10) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1398;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1399;
                                                        }
                                                      else
                                                        {




                                                          return 1400;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1402;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {




                                                          return 1403;
                                                        }
                                                      else
                                                        {




                                                          return 1404;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {




                                                  return 1346;
                                                }
                                              else
                                                {




                                                  return 1347;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1825;
                                                }
                                              else
                                                {




                                                  return 1844;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1828;
                                                }
                                              else
                                                {




                                                  return 1849;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {




                                          return 1845;
                                        }
                                      else
                                        {




                                          return 1850;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {
                                      if (((word >> 4) & 0x1) == 0)
                                        {




                                          return 1294;
                                        }
                                      else
                                        {




                                          return 1296;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 20) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1468;
                                                    }
                                                  else
                                                    {




                                                      return 1489;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1470;
                                                    }
                                                  else
                                                    {




                                                      return 1491;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1660;
                                                    }
                                                  else
                                                    {




                                                      return 1664;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1662;
                                                    }
                                                  else
                                                    {




                                                      return 1666;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 15) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1586;
                                                    }
                                                  else
                                                    {




                                                      return 1605;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1590;
                                                    }
                                                  else
                                                    {




                                                      return 1609;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1560;
                                                    }
                                                  else
                                                    {




                                                      return 1564;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1576;
                                                    }
                                                  else
                                                    {




                                                      return 1580;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1409;
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {




                                                  return 1410;
                                                }
                                              else
                                                {




                                                  return 1411;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {




                                              return 1846;
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1833;
                                                }
                                              else
                                                {




                                                  return 1854;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1868;
                                                }
                                              else
                                                {




                                                  return 1872;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1884;
                                                }
                                              else
                                                {




                                                  return 1888;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 20) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1830;
                                                    }
                                                  else
                                                    {




                                                      return 1851;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1834;
                                                    }
                                                  else
                                                    {




                                                      return 1855;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1869;
                                                    }
                                                  else
                                                    {




                                                      return 1873;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1885;
                                                    }
                                                  else
                                                    {




                                                      return 1889;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              else
                {
                  if (((word >> 29) & 0x1) == 0)
                    {
                      if (((word >> 30) & 0x1) == 0)
                        {
                          if (((word >> 31) & 0x1) == 0)
                            {
                              if (((word >> 21) & 0x1) == 0)
                                {
                                  if (((word >> 20) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1714;
                                            }
                                          else
                                            {




                                              return 1242;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1329;
                                            }
                                          else
                                            {




                                              return 1327;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {




                                          return 1312;
                                        }
                                      else
                                        {




                                          return 1359;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 15) & 0x1) == 0)
                                            {




                                              return 1334;
                                            }
                                          else
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1310;
                                                            }
                                                          else
                                                            {




                                                              return 1268;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1762;
                                                            }
                                                          else
                                                            {




                                                              return 1789;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1456;
                                                            }
                                                          else
                                                            {




                                                              return 1269;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1764;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1309;
                                                            }
                                                          else
                                                            {




                                                              return 1271;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1763;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1458;
                                                            }
                                                          else
                                                            {




                                                              return 1272;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1755;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 15) & 0x1) == 0)
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 1325;
                                                    }
                                                  else
                                                    {




                                                      return 1912;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 17) & 0x1) == 0)
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 20) & 0x1) == 0)
                                                                    {




                                                                      return 1324;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1908;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1761;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1453;
                                                                }
                                                              else
                                                                {




                                                                  return 1454;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1971;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 17) & 0x1) == 0)
                                                        {




                                                          return 1907;
                                                        }
                                                      else
                                                        {




                                                          return 1970;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 19) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {




                                                          return 1455;
                                                        }
                                                      else
                                                        {




                                                          return 1270;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1311;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 20) & 0x1) == 0)
                                                    {




                                                      return 1457;
                                                    }
                                                  else
                                                    {




                                                      return 1273;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 10) & 0x1) == 0)
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {
                                                      if (((word >> 13) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1988;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 16) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 18) & 0x1) == 0)
                                                                    {




                                                                      return 1754;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1760;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1753;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1989;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 13) & 0x1) == 0)
                                                        {




                                                          return 1913;
                                                        }
                                                      else
                                                        {




                                                          return 1914;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 1975;
                                                    }
                                                  else
                                                    {




                                                      return 1976;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {
                                                      if (((word >> 13) & 0x1) == 0)
                                                        {




                                                          return 1990;
                                                        }
                                                      else
                                                        {




                                                          return 1991;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 13) & 0x1) == 0)
                                                        {




                                                          return 1915;
                                                        }
                                                      else
                                                        {




                                                          return 1916;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 1977;
                                                    }
                                                  else
                                                    {




                                                      return 1978;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {




                                          return 1779;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 13) & 0x1) == 0)
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {




                                              return 1683;
                                            }
                                          else
                                            {




                                              return 1727;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1512;
                                            }
                                          else
                                            {




                                              return 1509;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 1547;
                                                }
                                              else
                                                {




                                                  return 1548;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {




                                                  return 1684;
                                                }
                                              else
                                                {




                                                  return 1748;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1744;
                                                    }
                                                  else
                                                    {




                                                      return 1730;
                                                    }
                                                }
                                              else
                                                {




                                                  return 1555;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1515;
                                                }
                                              else
                                                {




                                                  return 1511;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {




                                          return 1741;
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1513;
                                            }
                                          else
                                            {




                                              return 1510;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 1647;
                                                }
                                              else
                                                {




                                                  return 1648;
                                                }
                                            }
                                          else
                                            {




                                              return 1734;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1747;
                                                    }
                                                  else
                                                    {




                                                      return 1733;
                                                    }
                                                }
                                              else
                                                {




                                                  return 1657;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1516;
                                                }
                                              else
                                                {




                                                  return 1497;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 13) & 0x1) == 0)
                            {
                              if (((word >> 14) & 0x1) == 0)
                                {
                                  if (((word >> 15) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 1541;
                                        }
                                      else
                                        {




                                          return 1542;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 1543;
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {




                                              return 1546;
                                            }
                                          else
                                            {




                                              return 1544;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 15) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1551;
                                            }
                                          else
                                            {




                                              return 1473;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1552;
                                            }
                                          else
                                            {




                                              return 1474;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1553;
                                            }
                                          else
                                            {




                                              return 1475;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1558;
                                                }
                                              else
                                                {




                                                  return 1478;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1554;
                                                }
                                              else
                                                {




                                                  return 1476;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 14) & 0x1) == 0)
                                {
                                  if (((word >> 15) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 1642;
                                        }
                                      else
                                        {




                                          return 1643;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 1644;
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {




                                              return 1646;
                                            }
                                          else
                                            {




                                              return 1645;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 15) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1653;
                                            }
                                          else
                                            {




                                              return 1598;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 1654;
                                            }
                                          else
                                            {




                                              return 1599;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1749;
                                                }
                                              else
                                                {




                                                  return 1735;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1655;
                                                }
                                              else
                                                {




                                                  return 1600;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1658;
                                                }
                                              else
                                                {




                                                  return 1602;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1656;
                                                }
                                              else
                                                {




                                                  return 1601;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 15) & 0x1) == 0)
                        {
                          if (((word >> 14) & 0x1) == 0)
                            {
                              if (((word >> 13) & 0x1) == 0)
                                {
                                  if (((word >> 30) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1281;
                                                }
                                              else
                                                {




                                                  return 1284;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1508;
                                                }
                                              else
                                                {




                                                  return 1504;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 4) & 0x1) == 0)
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 1985;
                                                    }
                                                  else
                                                    {




                                                      return 1986;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 1981;
                                                    }
                                                  else
                                                    {




                                                      return 1982;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 1979;
                                                    }
                                                  else
                                                    {




                                                      return 1980;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 1983;
                                                    }
                                                  else
                                                    {




                                                      return 1984;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 21) & 0x1) == 0)
                                            {
                                              if (((word >> 10) & 0x1) == 0)
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {




                                                      return 1339;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {




                                                          return 1406;
                                                        }
                                                      else
                                                        {




                                                          return 1419;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 11) & 0x1) == 0)
                                                    {




                                                      return 1432;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 12) & 0x1) == 0)
                                                        {




                                                          return 1438;
                                                        }
                                                      else
                                                        {




                                                          return 1429;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {




                                              return 1397;
                                            }
                                        }
                                      else
                                        {




                                          return 1900;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1298;
                                                }
                                              else
                                                {




                                                  return 1292;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1507;
                                                }
                                              else
                                                {




                                                  return 1503;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 16) & 0x1) == 0)
                                            {
                                              if (((word >> 17) & 0x1) == 0)
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1343;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 4) & 0x1) == 0)
                                                                {




                                                                  return 1350;
                                                                }
                                                              else
                                                                {




                                                                  return 1352;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1342;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1389;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {




                                                      return 1348;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 1390;
                                                        }
                                                      else
                                                        {




                                                          return 1418;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 17) & 0x1) == 0)
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {
                                                      if (((word >> 4) & 0x1) == 0)
                                                        {




                                                          return 1355;
                                                        }
                                                      else
                                                        {




                                                          return 1354;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1395;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {




                                                      return 1356;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 1396;
                                                        }
                                                      else
                                                        {




                                                          return 1428;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 4) & 0x1) == 0)
                                            {




                                              return 1313;
                                            }
                                          else
                                            {




                                              return 1314;
                                            }
                                        }
                                      else
                                        {




                                          return 1401;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 9) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 4) & 0x1) == 0)
                                                            {




                                                              return 1244;
                                                            }
                                                          else
                                                            {




                                                              return 1256;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1258;
                                                            }
                                                          else
                                                            {




                                                              return 1262;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 4) & 0x1) == 0)
                                                        {




                                                          return 1331;
                                                        }
                                                      else
                                                        {




                                                          return 1780;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 1530;
                                                    }
                                                  else
                                                    {




                                                      return 1630;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 9) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {
                                                          if (((word >> 4) & 0x1) == 0)
                                                            {




                                                              return 1716;
                                                            }
                                                          else
                                                            {




                                                              return 1711;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1260;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 4) & 0x1) == 0)
                                                        {




                                                          return 1708;
                                                        }
                                                      else
                                                        {




                                                          return 1705;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 1518;
                                                    }
                                                  else
                                                    {




                                                      return 1618;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 4) & 0x1) == 0)
                                                    {
                                                      if (((word >> 9) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1245;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {




                                                                  return 1259;
                                                                }
                                                              else
                                                                {




                                                                  return 1263;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1332;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1257;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 1549;
                                                    }
                                                  else
                                                    {




                                                      return 1649;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 31) & 0x1) == 0)
                                                {
                                                  if (((word >> 4) & 0x1) == 0)
                                                    {
                                                      if (((word >> 9) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1717;
                                                            }
                                                          else
                                                            {




                                                              return 1261;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1709;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 9) & 0x1) == 0)
                                                        {




                                                          return 1712;
                                                        }
                                                      else
                                                        {




                                                          return 1706;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 1520;
                                                    }
                                                  else
                                                    {




                                                      return 1622;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1531;
                                                }
                                              else
                                                {




                                                  return 1519;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1550;
                                                }
                                              else
                                                {




                                                  return 1472;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1632;
                                                }
                                              else
                                                {




                                                  return 1620;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1651;
                                                }
                                              else
                                                {




                                                  return 1596;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 21) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1351;
                                                }
                                              else
                                                {




                                                  return 1353;
                                                }
                                            }
                                          else
                                            {




                                              return 1415;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {




                                              return 1901;
                                            }
                                          else
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 1860;
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1862;
                                                    }
                                                  else
                                                    {




                                                      return 1839;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1349;
                                                }
                                              else
                                                {




                                                  return 1357;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1898;
                                                    }
                                                  else
                                                    {




                                                      return 1894;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1882;
                                                    }
                                                  else
                                                    {




                                                      return 1878;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 1416;
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1874;
                                                    }
                                                  else
                                                    {




                                                      return 1870;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1890;
                                                    }
                                                  else
                                                    {




                                                      return 1886;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 21) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 4) & 0x1) == 0)
                                            {




                                              return 1278;
                                            }
                                          else
                                            {




                                              return 1301;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 20) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1537;
                                                    }
                                                  else
                                                    {




                                                      return 1524;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1556;
                                                    }
                                                  else
                                                    {




                                                      return 1526;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1670;
                                                    }
                                                  else
                                                    {




                                                      return 1667;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1673;
                                                    }
                                                  else
                                                    {




                                                      return 1669;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 4) & 0x1) == 0)
                                            {
                                              if (((word >> 20) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 1264;
                                                    }
                                                  else
                                                    {




                                                      return 1265;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 1750;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 10) & 0x1) == 0)
                                                            {
                                                              if (((word >> 12) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 13) & 0x1) == 0)
                                                                    {




                                                                      return 1720;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1751;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 22) & 0x1) == 0)
                                                                    {




                                                                      return 1757;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1758;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1719;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 10) & 0x1) == 0)
                                                        {
                                                          if (((word >> 12) & 0x1) == 0)
                                                            {




                                                              return 1752;
                                                            }
                                                          else
                                                            {




                                                              return 1756;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1721;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {




                                                  return 1266;
                                                }
                                              else
                                                {




                                                  return 1267;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1681;
                                                    }
                                                  else
                                                    {




                                                      return 1677;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1573;
                                                    }
                                                  else
                                                    {




                                                      return 1569;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1682;
                                                    }
                                                  else
                                                    {




                                                      return 1678;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1574;
                                                    }
                                                  else
                                                    {




                                                      return 1570;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 19) & 0x1) == 0)
                                                {
                                                  if (((word >> 20) & 0x1) == 0)
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {
                                                          if (((word >> 17) & 0x1) == 0)
                                                            {
                                                              if (((word >> 18) & 0x1) == 0)
                                                                {




                                                                  return 1340;
                                                                }
                                                              else
                                                                {




                                                                  return 1387;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 18) & 0x1) == 0)
                                                                {




                                                                  return 1407;
                                                                }
                                                              else
                                                                {




                                                                  return 1385;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 17) & 0x1) == 0)
                                                            {
                                                              if (((word >> 18) & 0x1) == 0)
                                                                {




                                                                  return 1433;
                                                                }
                                                              else
                                                                {




                                                                  return 1393;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 18) & 0x1) == 0)
                                                                {




                                                                  return 1435;
                                                                }
                                                              else
                                                                {




                                                                  return 1391;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1437;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 17) & 0x1) == 0)
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1335;
                                                                }
                                                              else
                                                                {




                                                                  return 1341;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1381;
                                                                }
                                                              else
                                                                {




                                                                  return 1388;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1412;
                                                                }
                                                              else
                                                                {




                                                                  return 1408;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1386;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 17) & 0x1) == 0)
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1430;
                                                                }
                                                              else
                                                                {




                                                                  return 1434;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1380;
                                                                }
                                                              else
                                                                {




                                                                  return 1394;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {




                                                              return 1436;
                                                            }
                                                          else
                                                            {




                                                              return 1392;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 1358;
                                                }
                                              else
                                                {




                                                  return 1337;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1856;
                                                }
                                              else
                                                {




                                                  return 1835;
                                                }
                                            }
                                          else
                                            {




                                              return 1861;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1424;
                                                                }
                                                              else
                                                                {




                                                                  return 1770;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 22) & 0x1) == 0)
                                                                    {




                                                                      return 1360;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1362;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1370;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1421;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 22) & 0x1) == 0)
                                                                    {




                                                                      return 1769;
                                                                    }
                                                                  else
                                                                    {
                                                                      if (((word >> 23) & 0x1) == 0)
                                                                        {




                                                                          return 1768;
                                                                        }
                                                                      else
                                                                        {




                                                                          return 1772;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1420;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 22) & 0x1) == 0)
                                                                    {




                                                                      return 1369;
                                                                    }
                                                                  else
                                                                    {
                                                                      if (((word >> 23) & 0x1) == 0)
                                                                        {




                                                                          return 1367;
                                                                        }
                                                                      else
                                                                        {




                                                                          return 1371;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1423;
                                                                }
                                                              else
                                                                {




                                                                  return 1767;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1364;
                                                                }
                                                              else
                                                                {




                                                                  return 1366;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1426;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1771;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1773;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1368;
                                                                }
                                                              else
                                                                {




                                                                  return 1372;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1425;
                                                                }
                                                              else
                                                                {




                                                                  return 1922;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 22) & 0x1) == 0)
                                                                    {




                                                                      return 1361;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1363;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1377;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 22) & 0x1) == 0)
                                                                {




                                                                  return 1921;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1920;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1924;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1431;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 22) & 0x1) == 0)
                                                                    {




                                                                      return 1376;
                                                                    }
                                                                  else
                                                                    {
                                                                      if (((word >> 23) & 0x1) == 0)
                                                                        {




                                                                          return 1374;
                                                                        }
                                                                      else
                                                                        {




                                                                          return 1378;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1427;
                                                                }
                                                              else
                                                                {




                                                                  return 1919;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1365;
                                                                }
                                                              else
                                                                {




                                                                  return 1373;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 1422;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 1923;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1925;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 1375;
                                                                }
                                                              else
                                                                {




                                                                  return 1379;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1857;
                                                    }
                                                  else
                                                    {




                                                      return 1836;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1864;
                                                    }
                                                  else
                                                    {




                                                      return 1840;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 1338;
                                            }
                                          else
                                            {
                                              if (((word >> 20) & 0x1) == 0)
                                                {




                                                  return 1865;
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1899;
                                                        }
                                                      else
                                                        {




                                                          return 1895;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1883;
                                                        }
                                                      else
                                                        {




                                                          return 1879;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 20) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 1307;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 10) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 11) & 0x1) == 0)
                                                                    {
                                                                      if (((word >> 12) & 0x1) == 0)
                                                                        {




                                                                          return 1814;
                                                                        }
                                                                      else
                                                                        {




                                                                          return 1987;
                                                                        }
                                                                    }
                                                                  else
                                                                    {




                                                                      return 1816;
                                                                    }
                                                                }
                                                              else
                                                                {




                                                                  return 1815;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 11) & 0x1) == 0)
                                                            {
                                                              if (((word >> 12) & 0x1) == 0)
                                                                {




                                                                  return 1445;
                                                                }
                                                              else
                                                                {




                                                                  return 1781;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1446;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 10) & 0x1) == 0)
                                                        {
                                                          if (((word >> 11) & 0x1) == 0)
                                                            {




                                                              return 1800;
                                                            }
                                                          else
                                                            {




                                                              return 1802;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 1801;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 10) & 0x1) == 0)
                                                    {
                                                      if (((word >> 11) & 0x1) == 0)
                                                        {
                                                          if (((word >> 17) & 0x1) == 0)
                                                            {
                                                              if (((word >> 18) & 0x1) == 0)
                                                                {




                                                                  return 1962;
                                                                }
                                                              else
                                                                {




                                                                  return 1320;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1948;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 17) & 0x1) == 0)
                                                            {
                                                              if (((word >> 18) & 0x1) == 0)
                                                                {




                                                                  return 1963;
                                                                }
                                                              else
                                                                {




                                                                  return 1321;
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 1949;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 17) & 0x1) == 0)
                                                        {




                                                          return 1964;
                                                        }
                                                      else
                                                        {




                                                          return 1950;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1538;
                                                    }
                                                  else
                                                    {




                                                      return 1525;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1557;
                                                    }
                                                  else
                                                    {




                                                      return 1477;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1671;
                                                }
                                              else
                                                {




                                                  return 1668;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1674;
                                                }
                                              else
                                                {




                                                  return 1663;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 16) & 0x1) == 0)
                                            {
                                              if (((word >> 17) & 0x1) == 0)
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1234;
                                                            }
                                                          else
                                                            {




                                                              return 1703;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1782;
                                                            }
                                                          else
                                                            {




                                                              return 1326;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1791;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {




                                                      return 1785;
                                                    }
                                                  else
                                                    {




                                                      return 1821;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 17) & 0x1) == 0)
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 1903;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 1931;
                                                            }
                                                          else
                                                            {




                                                              return 1382;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1939;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 1905;
                                                        }
                                                      else
                                                        {




                                                          return 1934;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 1969;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1565;
                                                    }
                                                  else
                                                    {




                                                      return 1561;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1581;
                                                    }
                                                  else
                                                    {




                                                      return 1577;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1566;
                                                    }
                                                  else
                                                    {




                                                      return 1562;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1582;
                                                    }
                                                  else
                                                    {




                                                      return 1578;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 31) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {




                                              return 1384;
                                            }
                                          else
                                            {




                                              return 1414;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 22) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 1858;
                                                }
                                              else
                                                {




                                                  return 1837;
                                                }
                                            }
                                          else
                                            {




                                              return 1863;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 1405;
                                            }
                                          else
                                            {
                                              if (((word >> 22) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1859;
                                                    }
                                                  else
                                                    {




                                                      return 1838;
                                                    }
                                                }
                                              else
                                                {




                                                  return 1866;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 31) & 0x1) == 0)
                                            {




                                              return 1417;
                                            }
                                          else
                                            {
                                              if (((word >> 20) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 1867;
                                                    }
                                                  else
                                                    {




                                                      return 1841;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1875;
                                                        }
                                                      else
                                                        {




                                                          return 1871;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 1891;
                                                        }
                                                      else
                                                        {




                                                          return 1887;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          else
            {
              if (((word >> 29) & 0x1) == 0)
                {
                  if (((word >> 30) & 0x1) == 0)
                    {
                      if (((word >> 31) & 0x1) == 0)
                        {




                          return 630;
                        }
                      else
                        {




                          return 631;
                        }
                    }
                  else
                    {
                      if (((word >> 24) & 0x1) == 0)
                        {
                          if (((word >> 4) & 0x1) == 0)
                            {
                              if (((word >> 25) & 0x1) == 0)
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {




                                      return 651;
                                    }
                                  else
                                    {
                                      if (((word >> 0) & 0x1) == 0)
                                        {
                                          if (((word >> 1) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 742;
                                                }
                                              else
                                                {




                                                  return 741;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 739;
                                                }
                                              else
                                                {




                                                  return 744;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 1) & 0x1) == 0)
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 738;
                                                }
                                              else
                                                {




                                                  return 743;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 21) & 0x1) == 0)
                                                {




                                                  return 740;
                                                }
                                              else
                                                {




                                                  return 745;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 632;
                                            }
                                          else
                                            {




                                              return 635;
                                            }
                                        }
                                      else
                                        {




                                          return 634;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {




                                          return 633;
                                        }
                                      else
                                        {




                                          return 636;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 10) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 641;
                                            }
                                          else
                                            {




                                              return 647;
                                            }
                                        }
                                      else
                                        {




                                          return 645;
                                        }
                                    }
                                  else
                                    {




                                      return 643;
                                    }
                                }
                              else
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 642;
                                            }
                                          else
                                            {




                                              return 648;
                                            }
                                        }
                                      else
                                        {




                                          return 646;
                                        }
                                    }
                                  else
                                    {




                                      return 644;
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 21) & 0x1) == 0)
                            {
                              if (((word >> 25) & 0x1) == 0)
                                {




                                  return 1157;
                                }
                              else
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {




                                      return 637;
                                    }
                                  else
                                    {




                                      return 638;
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 25) & 0x1) == 0)
                                {




                                  return 1185;
                                }
                              else
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {




                                      return 639;
                                    }
                                  else
                                    {




                                      return 640;
                                    }
                                }
                            }
                        }
                    }
                }
              else
                {
                  if (((word >> 24) & 0x1) == 0)
                    {
                      if (((word >> 25) & 0x1) == 0)
                        {




                          return 649;
                        }
                      else
                        {




                          return 1195;
                        }
                    }
                  else
                    {
                      if (((word >> 25) & 0x1) == 0)
                        {




                          return 650;
                        }
                      else
                        {




                          return 1196;
                        }
                    }
                }
            }
        }
      else
        {
          if (((word >> 25) & 0x1) == 0)
            {
              if (((word >> 28) & 0x1) == 0)
                {
                  if (((word >> 22) & 0x1) == 0)
                    {
                      if (((word >> 23) & 0x1) == 0)
                        {
                          if (((word >> 24) & 0x1) == 0)
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {




                                  return 434;
                                }
                              else
                                {




                                  return 943;
                                }
                            }
                          else
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 450;
                                        }
                                      else
                                        {




                                          return 452;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 451;
                                        }
                                      else
                                        {




                                          return 453;
                                        }
                                    }
                                }
                              else
                                {




                                  return 947;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 21) & 0x1) == 0)
                                {
                                  if (((word >> 24) & 0x1) == 0)
                                    {




                                      return 442;
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {




                                          return 462;
                                        }
                                      else
                                        {




                                          return 463;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {




                                      return 464;
                                    }
                                  else
                                    {




                                      return 465;
                                    }
                                }
                            }
                          else
                            {




                              return 952;
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 23) & 0x1) == 0)
                        {
                          if (((word >> 24) & 0x1) == 0)
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {




                                  return 438;
                                }
                              else
                                {




                                  return 944;
                                }
                            }
                          else
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 454;
                                        }
                                      else
                                        {




                                          return 458;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 21) & 0x1) == 0)
                                        {




                                          return 455;
                                        }
                                      else
                                        {




                                          return 459;
                                        }
                                    }
                                }
                              else
                                {




                                  return 948;
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 21) & 0x1) == 0)
                                {
                                  if (((word >> 24) & 0x1) == 0)
                                    {




                                      return 446;
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {




                                          return 466;
                                        }
                                      else
                                        {




                                          return 467;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {




                                      return 470;
                                    }
                                  else
                                    {




                                      return 471;
                                    }
                                }
                            }
                          else
                            {




                              return 953;
                            }
                        }
                    }
                }
              else
                {
                  if (((word >> 24) & 0x1) == 0)
                    {
                      if (((word >> 29) & 0x1) == 0)
                        {




                          return 956;
                        }
                      else
                        {
                          if (((word >> 10) & 0x1) == 0)
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 22) & 0x1) == 0)
                                    {




                                      return 899;
                                    }
                                  else
                                    {




                                      return 900;
                                    }
                                }
                              else
                                {
                                  if (((word >> 22) & 0x1) == 0)
                                    {




                                      return 878;
                                    }
                                  else
                                    {




                                      return 879;
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 22) & 0x1) == 0)
                                {




                                  return 855;
                                }
                              else
                                {




                                  return 856;
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 22) & 0x1) == 0)
                        {




                          return 866;
                        }
                      else
                        {




                          return 867;
                        }
                    }
                }
            }
          else
            {
              if (((word >> 24) & 0x1) == 0)
                {
                  if (((word >> 21) & 0x1) == 0)
                    {
                      if (((word >> 28) & 0x1) == 0)
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 31) & 0x1) == 0)
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {
                                      if (((word >> 11) & 0x1) == 0)
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {




                                              return 414;
                                            }
                                          else
                                            {




                                              return 415;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 257;
                                                }
                                              else
                                                {




                                                  return 260;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 256;
                                                    }
                                                  else
                                                    {




                                                      return 259;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 258;
                                                    }
                                                  else
                                                    {




                                                      return 261;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 11) & 0x1) == 0)
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 147;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 286;
                                                        }
                                                      else
                                                        {




                                                          return 302;
                                                        }
                                                    }
                                                }
                                              else
                                                {




                                                  return 294;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 290;
                                                        }
                                                      else
                                                        {




                                                          return 306;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 2006;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 296;
                                                    }
                                                  else
                                                    {




                                                      return 308;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 148;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 288;
                                                        }
                                                      else
                                                        {




                                                          return 304;
                                                        }
                                                    }
                                                }
                                              else
                                                {




                                                  return 149;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 152;
                                                    }
                                                  else
                                                    {




                                                      return 292;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 150;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 298;
                                                        }
                                                      else
                                                        {




                                                          return 310;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 22) & 0x1) == 0)
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {




                                          return 2013;
                                        }
                                      else
                                        {




                                          return 2015;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 15) & 0x1) == 0)
                                        {




                                          return 2017;
                                        }
                                      else
                                        {
                                          if (((word >> 10) & 0x1) == 0)
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 2018;
                                                    }
                                                  else
                                                    {




                                                      return 2011;
                                                    }
                                                }
                                              else
                                                {




                                                  return 2020;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 2019;
                                                    }
                                                  else
                                                    {




                                                      return 2024;
                                                    }
                                                }
                                              else
                                                {




                                                  return 2021;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 10) & 0x1) == 0)
                                {




                                  return 130;
                                }
                              else
                                {
                                  if (((word >> 15) & 0x1) == 0)
                                    {
                                      if (((word >> 22) & 0x1) == 0)
                                        {




                                          return 154;
                                        }
                                      else
                                        {
                                          if (((word >> 11) & 0x1) == 0)
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 337;
                                                        }
                                                      else
                                                        {




                                                          return 353;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 343;
                                                        }
                                                      else
                                                        {




                                                          return 357;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 339;
                                                        }
                                                      else
                                                        {




                                                          return 355;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 347;
                                                        }
                                                      else
                                                        {




                                                          return 361;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 345;
                                                    }
                                                  else
                                                    {




                                                      return 359;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {




                                                      return 341;
                                                    }
                                                  else
                                                    {




                                                      return 349;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 11) & 0x1) == 0)
                                                {
                                                  if (((word >> 12) & 0x1) == 0)
                                                    {




                                                      return 364;
                                                    }
                                                  else
                                                    {




                                                      return 2005;
                                                    }
                                                }
                                              else
                                                {




                                                  return 365;
                                                }
                                            }
                                          else
                                            {




                                              return 366;
                                            }
                                        }
                                      else
                                        {




                                          return 367;
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 16) & 0x1) == 0)
                                    {
                                      if (((word >> 17) & 0x1) == 0)
                                        {




                                          return 752;
                                        }
                                      else
                                        {




                                          return 748;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 17) & 0x1) == 0)
                                        {




                                          return 754;
                                        }
                                      else
                                        {




                                          return 750;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 672;
                                                }
                                              else
                                                {




                                                  return 676;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 674;
                                                }
                                              else
                                                {




                                                  return 678;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 673;
                                                }
                                              else
                                                {




                                                  return 677;
                                                }
                                            }
                                          else
                                            {




                                              return 675;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 11) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 529;
                                            }
                                          else
                                            {




                                              return 550;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 548;
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 552;
                                                }
                                              else
                                                {




                                                  return 554;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 12) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {




                                          return 582;
                                        }
                                      else
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 567;
                                            }
                                          else
                                            {




                                              return 573;
                                            }
                                        }
                                    }
                                  else
                                    {




                                      return 571;
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {




                                      return 583;
                                    }
                                  else
                                    {
                                      if (((word >> 23) & 0x1) == 0)
                                        {




                                          return 569;
                                        }
                                      else
                                        {




                                          return 575;
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 28) & 0x1) == 0)
                        {
                          if (((word >> 15) & 0x1) == 0)
                            {
                              if (((word >> 29) & 0x1) == 0)
                                {
                                  if (((word >> 31) & 0x1) == 0)
                                    {
                                      if (((word >> 10) & 0x1) == 0)
                                        {
                                          if (((word >> 11) & 0x1) == 0)
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 42;
                                                            }
                                                          else
                                                            {




                                                              return 43;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 50;
                                                            }
                                                          else
                                                            {




                                                              return 51;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 46;
                                                            }
                                                          else
                                                            {




                                                              return 47;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 54;
                                                            }
                                                          else
                                                            {




                                                              return 55;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 44;
                                                            }
                                                          else
                                                            {




                                                              return 45;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 52;
                                                            }
                                                          else
                                                            {




                                                              return 53;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 48;
                                                            }
                                                          else
                                                            {




                                                              return 49;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 56;
                                                            }
                                                          else
                                                            {




                                                              return 57;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 156;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {




                                                                  return 160;
                                                                }
                                                              else
                                                                {




                                                                  return 665;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 170;
                                                                }
                                                              else
                                                                {




                                                                  return 171;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {




                                                              return 158;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 168;
                                                                }
                                                              else
                                                                {




                                                                  return 169;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {




                                                                  return 162;
                                                                }
                                                              else
                                                                {




                                                                  return 667;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 172;
                                                                }
                                                              else
                                                                {




                                                                  return 173;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 157;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 161;
                                                            }
                                                          else
                                                            {




                                                              return 666;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 159;
                                                            }
                                                          else
                                                            {




                                                              return 27;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {




                                                                  return 163;
                                                                }
                                                              else
                                                                {




                                                                  return 668;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 30) & 0x1) == 0)
                                                                {




                                                                  return 174;
                                                                }
                                                              else
                                                                {




                                                                  return 175;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 11) & 0x1) == 0)
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 262;
                                                        }
                                                      else
                                                        {




                                                          return 269;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 265;
                                                        }
                                                      else
                                                        {




                                                          return 273;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 264;
                                                        }
                                                      else
                                                        {




                                                          return 271;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 267;
                                                        }
                                                      else
                                                        {




                                                          return 275;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 12) & 0x1) == 0)
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 263;
                                                        }
                                                      else
                                                        {




                                                          return 270;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 266;
                                                        }
                                                      else
                                                        {




                                                          return 274;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 13) & 0x1) == 0)
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {
                                                          if (((word >> 22) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 299;
                                                                }
                                                              else
                                                                {




                                                                  return 311;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {




                                                                  return 300;
                                                                }
                                                              else
                                                                {




                                                                  return 313;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 272;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 14) & 0x1) == 0)
                                                        {




                                                          return 268;
                                                        }
                                                      else
                                                        {




                                                          return 276;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {




                                      return 2016;
                                    }
                                }
                              else
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {
                                      if (((word >> 11) & 0x1) == 0)
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 74;
                                                        }
                                                      else
                                                        {




                                                          return 75;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 82;
                                                        }
                                                      else
                                                        {




                                                          return 83;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 78;
                                                        }
                                                      else
                                                        {




                                                          return 79;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 86;
                                                        }
                                                      else
                                                        {




                                                          return 87;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 76;
                                                        }
                                                      else
                                                        {




                                                          return 77;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 84;
                                                        }
                                                      else
                                                        {




                                                          return 85;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 80;
                                                        }
                                                      else
                                                        {




                                                          return 81;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 88;
                                                        }
                                                      else
                                                        {




                                                          return 89;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 207;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {




                                                          return 210;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 220;
                                                            }
                                                          else
                                                            {




                                                              return 221;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {




                                                          return 208;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 216;
                                                            }
                                                          else
                                                            {




                                                              return 217;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {




                                                          return 211;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 222;
                                                            }
                                                          else
                                                            {




                                                              return 223;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {




                                                      return 236;
                                                    }
                                                  else
                                                    {




                                                      return 238;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {




                                                              return 209;
                                                            }
                                                          else
                                                            {




                                                              return 31;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 218;
                                                            }
                                                          else
                                                            {




                                                              return 219;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 212;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 11) & 0x1) == 0)
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 314;
                                                    }
                                                  else
                                                    {




                                                      return 321;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 317;
                                                    }
                                                  else
                                                    {




                                                      return 325;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 316;
                                                    }
                                                  else
                                                    {




                                                      return 323;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 319;
                                                    }
                                                  else
                                                    {




                                                      return 327;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 315;
                                                    }
                                                  else
                                                    {




                                                      return 322;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 318;
                                                    }
                                                  else
                                                    {




                                                      return 326;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 22) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {




                                                              return 350;
                                                            }
                                                          else
                                                            {




                                                              return 362;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {




                                                              return 351;
                                                            }
                                                          else
                                                            {




                                                              return 363;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 324;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 320;
                                                    }
                                                  else
                                                    {




                                                      return 328;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 10) & 0x1) == 0)
                                {
                                  if (((word >> 11) & 0x1) == 0)
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 58;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {




                                                              return 59;
                                                            }
                                                          else
                                                            {




                                                              return 2009;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 90;
                                                        }
                                                      else
                                                        {




                                                          return 91;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 66;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {




                                                              return 67;
                                                            }
                                                          else
                                                            {




                                                              return 2022;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 94;
                                                        }
                                                      else
                                                        {




                                                          return 95;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 62;
                                                        }
                                                      else
                                                        {




                                                          return 63;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 92;
                                                        }
                                                      else
                                                        {




                                                          return 93;
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 22) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 70;
                                                        }
                                                      else
                                                        {




                                                          return 72;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 71;
                                                        }
                                                      else
                                                        {




                                                          return 73;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 60;
                                                    }
                                                  else
                                                    {




                                                      return 61;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 68;
                                                    }
                                                  else
                                                    {




                                                      return 69;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 64;
                                                }
                                              else
                                                {




                                                  return 65;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 31) & 0x1) == 0)
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {




                                                              return 164;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 176;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 196;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 23) & 0x1) == 0)
                                                                    {




                                                                      return 177;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 197;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 2012;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {




                                                          return 213;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 224;
                                                            }
                                                          else
                                                            {




                                                              return 225;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {
                                                              if (((word >> 16) & 0x1) == 0)
                                                                {




                                                                  return 35;
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 19) & 0x1) == 0)
                                                                    {




                                                                      return 184;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 185;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 2025;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {




                                                              return 34;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 19) & 0x1) == 0)
                                                                {




                                                                  return 232;
                                                                }
                                                              else
                                                                {




                                                                  return 233;
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 188;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 239;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 39;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 38;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 189;
                                                                }
                                                              else
                                                                {




                                                                  return 240;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 204;
                                                            }
                                                          else
                                                            {




                                                              return 251;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 20) & 0x1) == 0)
                                                        {




                                                          return 166;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 28;
                                                            }
                                                          else
                                                            {




                                                              return 32;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 180;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 228;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 200;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 247;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 29;
                                                                }
                                                              else
                                                                {




                                                                  return 33;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 181;
                                                                }
                                                              else
                                                                {




                                                                  return 229;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 201;
                                                                }
                                                              else
                                                                {




                                                                  return 248;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 19) & 0x1) == 0)
                                                    {




                                                      return 192;
                                                    }
                                                  else
                                                    {




                                                      return 193;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 165;
                                                        }
                                                      else
                                                        {




                                                          return 214;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 178;
                                                                }
                                                              else
                                                                {




                                                                  return 226;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 198;
                                                                }
                                                              else
                                                                {




                                                                  return 245;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 179;
                                                                }
                                                              else
                                                                {




                                                                  return 227;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 199;
                                                                }
                                                              else
                                                                {




                                                                  return 246;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 190;
                                                            }
                                                          else
                                                            {




                                                              return 241;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 191;
                                                            }
                                                          else
                                                            {




                                                              return 242;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 186;
                                                                }
                                                              else
                                                                {




                                                                  return 234;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 205;
                                                                }
                                                              else
                                                                {




                                                                  return 252;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 187;
                                                                }
                                                              else
                                                                {




                                                                  return 235;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 206;
                                                                }
                                                              else
                                                                {




                                                                  return 253;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 167;
                                                        }
                                                      else
                                                        {




                                                          return 215;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 182;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 230;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 202;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 249;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 30;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 183;
                                                                }
                                                              else
                                                                {




                                                                  return 231;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 203;
                                                                }
                                                              else
                                                                {




                                                                  return 250;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 194;
                                                                }
                                                              else
                                                                {




                                                                  return 243;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 37;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 36;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 41;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 40;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 195;
                                                            }
                                                          else
                                                            {




                                                              return 244;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 254;
                                                        }
                                                      else
                                                        {




                                                          return 255;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 11) & 0x1) == 0)
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 31) & 0x1) == 0)
                                                        {




                                                          return 277;
                                                        }
                                                      else
                                                        {




                                                          return 2010;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 329;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {
                                                          if (((word >> 31) & 0x1) == 0)
                                                            {




                                                              return 285;
                                                            }
                                                          else
                                                            {




                                                              return 2023;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 336;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 301;
                                                        }
                                                      else
                                                        {




                                                          return 352;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 281;
                                                    }
                                                  else
                                                    {




                                                      return 333;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 293;
                                                        }
                                                      else
                                                        {




                                                          return 342;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 356;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 279;
                                                    }
                                                  else
                                                    {




                                                      return 331;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 289;
                                                        }
                                                      else
                                                        {




                                                          return 338;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 305;
                                                        }
                                                      else
                                                        {




                                                          return 354;
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 283;
                                                    }
                                                  else
                                                    {




                                                      return 335;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 295;
                                                        }
                                                      else
                                                        {




                                                          return 346;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 307;
                                                        }
                                                      else
                                                        {




                                                          return 360;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 31) & 0x1) == 0)
                                                        {




                                                          return 278;
                                                        }
                                                      else
                                                        {




                                                          return 2014;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 330;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 287;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 2028;
                                                            }
                                                          else
                                                            {




                                                              return 2032;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 303;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 2029;
                                                            }
                                                          else
                                                            {




                                                              return 2033;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 282;
                                                    }
                                                  else
                                                    {




                                                      return 334;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 2026;
                                                            }
                                                          else
                                                            {




                                                              return 2030;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 344;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {
                                                          if (((word >> 30) & 0x1) == 0)
                                                            {




                                                              return 2027;
                                                            }
                                                          else
                                                            {




                                                              return 2031;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 358;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 280;
                                                    }
                                                  else
                                                    {




                                                      return 332;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 291;
                                                    }
                                                  else
                                                    {




                                                      return 340;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 284;
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 297;
                                                        }
                                                      else
                                                        {




                                                          return 348;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 309;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 10) & 0x1) == 0)
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 12) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 16) & 0x1) == 0)
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 756;
                                                                }
                                                              else
                                                                {




                                                                  return 776;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 772;
                                                                }
                                                              else
                                                                {




                                                                  return 780;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 764;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {




                                                          return 760;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 768;
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 784;
                                                                }
                                                              else
                                                                {




                                                                  return 786;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 17) & 0x1) == 0)
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 758;
                                                                }
                                                              else
                                                                {




                                                                  return 778;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 20) & 0x1) == 0)
                                                                {




                                                                  return 774;
                                                                }
                                                              else
                                                                {




                                                                  return 782;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 766;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 18) & 0x1) == 0)
                                                        {




                                                          return 762;
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 19) & 0x1) == 0)
                                                            {




                                                              return 770;
                                                            }
                                                          else
                                                            {




                                                              return 785;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 17) & 0x1) == 0)
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {




                                                              return 799;
                                                            }
                                                          else
                                                            {




                                                              return 808;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {




                                                              return 803;
                                                            }
                                                          else
                                                            {




                                                              return 812;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 16) & 0x1) == 0)
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {




                                                              return 801;
                                                            }
                                                          else
                                                            {




                                                              return 810;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 18) & 0x1) == 0)
                                                            {




                                                              return 805;
                                                            }
                                                          else
                                                            {




                                                              return 814;
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 18) & 0x1) == 0)
                                                    {




                                                      return 807;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 15) & 0x1) == 0)
                                                        {
                                                          if (((word >> 16) & 0x1) == 0)
                                                            {




                                                              return 816;
                                                            }
                                                          else
                                                            {




                                                              return 818;
                                                            }
                                                        }
                                                      else
                                                        {




                                                          return 820;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 3) & 0x1) == 0)
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 791;
                                                }
                                              else
                                                {




                                                  return 793;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 4) & 0x1) == 0)
                                                {




                                                  return 795;
                                                }
                                              else
                                                {




                                                  return 797;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {




                                          return 848;
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 416;
                                                }
                                              else
                                                {




                                                  return 418;
                                                }
                                            }
                                          else
                                            {




                                              return 417;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 12) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 822;
                                                    }
                                                  else
                                                    {




                                                      return 669;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 838;
                                                        }
                                                      else
                                                        {




                                                          return 476;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 505;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 830;
                                                        }
                                                      else
                                                        {




                                                          return 480;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 509;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 489;
                                                                }
                                                              else
                                                                {




                                                                  return 519;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 533;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 532;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 539;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 538;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 490;
                                                            }
                                                          else
                                                            {




                                                              return 520;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 485;
                                                            }
                                                          else
                                                            {




                                                              return 515;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 486;
                                                            }
                                                          else
                                                            {




                                                              return 516;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 826;
                                                        }
                                                      else
                                                        {




                                                          return 671;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 508;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {




                                                      return 478;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 481;
                                                                }
                                                              else
                                                                {




                                                                  return 511;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 495;
                                                                }
                                                              else
                                                                {




                                                                  return 523;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 482;
                                                                }
                                                              else
                                                                {




                                                                  return 512;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 496;
                                                                }
                                                              else
                                                                {




                                                                  return 524;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 834;
                                                    }
                                                  else
                                                    {




                                                      return 510;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 19) & 0x1) == 0)
                                                    {




                                                      return 493;
                                                    }
                                                  else
                                                    {




                                                      return 494;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 30) & 0x1) == 0)
                                                    {




                                                      return 824;
                                                    }
                                                  else
                                                    {




                                                      return 670;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {




                                                      return 477;
                                                    }
                                                  else
                                                    {




                                                      return 506;
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {




                                                  return 832;
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 491;
                                                                }
                                                              else
                                                                {




                                                                  return 521;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 535;
                                                                }
                                                              else
                                                                {




                                                                  return 534;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 492;
                                                            }
                                                          else
                                                            {




                                                              return 522;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 487;
                                                                }
                                                              else
                                                                {




                                                                  return 517;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 499;
                                                                }
                                                              else
                                                                {




                                                                  return 527;
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 488;
                                                                }
                                                              else
                                                                {




                                                                  return 518;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 500;
                                                                }
                                                              else
                                                                {




                                                                  return 528;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 828;
                                                        }
                                                      else
                                                        {




                                                          return 474;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 503;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 29) & 0x1) == 0)
                                                        {




                                                          return 479;
                                                        }
                                                      else
                                                        {




                                                          return 507;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {
                                                          if (((word >> 20) & 0x1) == 0)
                                                            {
                                                              if (((word >> 23) & 0x1) == 0)
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 483;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 513;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if (((word >> 29) & 0x1) == 0)
                                                                    {




                                                                      return 497;
                                                                    }
                                                                  else
                                                                    {




                                                                      return 525;
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {




                                                              return 531;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 23) & 0x1) == 0)
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 484;
                                                                }
                                                              else
                                                                {




                                                                  return 514;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if (((word >> 29) & 0x1) == 0)
                                                                {




                                                                  return 498;
                                                                }
                                                              else
                                                                {




                                                                  return 526;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {
                                                  if (((word >> 29) & 0x1) == 0)
                                                    {
                                                      if (((word >> 30) & 0x1) == 0)
                                                        {




                                                          return 836;
                                                        }
                                                      else
                                                        {




                                                          return 475;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 504;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 16) & 0x1) == 0)
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 537;
                                                            }
                                                          else
                                                            {




                                                              return 536;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if (((word >> 29) & 0x1) == 0)
                                                            {




                                                              return 541;
                                                            }
                                                          else
                                                            {




                                                              return 540;
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 19) & 0x1) == 0)
                                                        {




                                                          return 501;
                                                        }
                                                      else
                                                        {




                                                          return 502;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 29) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {
                                          if (((word >> 4) & 0x1) == 0)
                                            {




                                              return 787;
                                            }
                                          else
                                            {




                                              return 789;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 559;
                                                    }
                                                  else
                                                    {




                                                      return 557;
                                                    }
                                                }
                                              else
                                                {




                                                  return 549;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {




                                                  return 558;
                                                }
                                              else
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {




                                                      return 555;
                                                    }
                                                  else
                                                    {




                                                      return 546;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 580;
                                                }
                                              else
                                                {




                                                  return 578;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 566;
                                                }
                                              else
                                                {




                                                  return 572;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {




                                                  return 579;
                                                }
                                              else
                                                {




                                                  return 570;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 15) & 0x1) == 0)
                                                {




                                                  return 576;
                                                }
                                              else
                                                {




                                                  return 565;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 29) & 0x1) == 0)
                                    {
                                      if (((word >> 30) & 0x1) == 0)
                                        {




                                          return 850;
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {
                                                      if (((word >> 15) & 0x1) == 0)
                                                        {




                                                          return 542;
                                                        }
                                                      else
                                                        {




                                                          return 560;
                                                        }
                                                    }
                                                  else
                                                    {




                                                      return 544;
                                                    }
                                                }
                                              else
                                                {




                                                  return 543;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 13) & 0x1) == 0)
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {




                                                      return 545;
                                                    }
                                                  else
                                                    {




                                                      return 547;
                                                    }
                                                }
                                              else
                                                {
                                                  if (((word >> 14) & 0x1) == 0)
                                                    {




                                                      return 556;
                                                    }
                                                  else
                                                    {
                                                      if (((word >> 23) & 0x1) == 0)
                                                        {




                                                          return 551;
                                                        }
                                                      else
                                                        {




                                                          return 553;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 15) & 0x1) == 0)
                                                    {




                                                      return 561;
                                                    }
                                                  else
                                                    {




                                                      return 581;
                                                    }
                                                }
                                              else
                                                {




                                                  return 563;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 562;
                                                }
                                              else
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 568;
                                                    }
                                                  else
                                                    {




                                                      return 574;
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 564;
                                            }
                                          else
                                            {




                                              return 577;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              else
                {
                  if (((word >> 15) & 0x1) == 0)
                    {
                      if (((word >> 28) & 0x1) == 0)
                        {
                          if (((word >> 10) & 0x1) == 0)
                            {
                              if (((word >> 12) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 2034;
                                                }
                                              else
                                                {




                                                  return 2038;
                                                }
                                            }
                                          else
                                            {




                                              return 117;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 2035;
                                                }
                                              else
                                                {




                                                  return 2039;
                                                }
                                            }
                                          else
                                            {




                                              return 120;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 96;
                                                }
                                              else
                                                {




                                                  return 97;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 118;
                                                }
                                              else
                                                {




                                                  return 119;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 100;
                                                }
                                              else
                                                {




                                                  return 101;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 121;
                                                }
                                              else
                                                {




                                                  return 122;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 29) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 112;
                                                }
                                              else
                                                {




                                                  return 111;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 114;
                                                }
                                              else
                                                {




                                                  return 113;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 98;
                                                }
                                              else
                                                {




                                                  return 99;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 102;
                                                }
                                              else
                                                {




                                                  return 103;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {




                                      return 129;
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 12) & 0x1) == 0)
                                {
                                  if (((word >> 29) & 0x1) == 0)
                                    {




                                      return 131;
                                    }
                                  else
                                    {




                                      return 139;
                                    }
                                }
                              else
                                {
                                  if (((word >> 29) & 0x1) == 0)
                                    {




                                      return 132;
                                    }
                                  else
                                    {




                                      return 140;
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {




                                      return 840;
                                    }
                                  else
                                    {




                                      return 844;
                                    }
                                }
                              else
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 425;
                                                }
                                              else
                                                {




                                                  return 424;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 23) & 0x1) == 0)
                                                {




                                                  return 427;
                                                }
                                              else
                                                {




                                                  return 426;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 14) & 0x1) == 0)
                                            {




                                              return 419;
                                            }
                                          else
                                            {




                                              return 420;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 584;
                                            }
                                          else
                                            {




                                              return 586;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 585;
                                                }
                                              else
                                                {




                                                  return 588;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {




                                                  return 587;
                                                }
                                              else
                                                {




                                                  return 589;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 12) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {




                                          return 596;
                                        }
                                      else
                                        {




                                          return 600;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {




                                          return 598;
                                        }
                                      else
                                        {




                                          return 602;
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {




                                          return 597;
                                        }
                                      else
                                        {




                                          return 601;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {




                                          return 599;
                                        }
                                      else
                                        {




                                          return 603;
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if (((word >> 28) & 0x1) == 0)
                        {
                          if (((word >> 10) & 0x1) == 0)
                            {
                              if (((word >> 12) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 104;
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 2036;
                                                }
                                              else
                                                {




                                                  return 2040;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 109;
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 2037;
                                                }
                                              else
                                                {




                                                  return 2041;
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 105;
                                                }
                                              else
                                                {




                                                  return 106;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 123;
                                                }
                                              else
                                                {




                                                  return 124;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 2008;
                                            }
                                          else
                                            {




                                              return 2007;
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {
                                              if (((word >> 29) & 0x1) == 0)
                                                {




                                                  return 116;
                                                }
                                              else
                                                {




                                                  return 126;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 29) & 0x1) == 0)
                                                {




                                                  return 115;
                                                }
                                              else
                                                {




                                                  return 125;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 110;
                                            }
                                          else
                                            {




                                              return 127;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 107;
                                            }
                                          else
                                            {




                                              return 108;
                                            }
                                        }
                                      else
                                        {




                                          return 128;
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 11) & 0x1) == 0)
                                {
                                  if (((word >> 14) & 0x1) == 0)
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 133;
                                            }
                                          else
                                            {




                                              return 141;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 134;
                                            }
                                          else
                                            {




                                              return 142;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 135;
                                            }
                                          else
                                            {




                                              return 143;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {
                                              if (((word >> 29) & 0x1) == 0)
                                                {




                                                  return 136;
                                                }
                                              else
                                                {




                                                  return 144;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 29) & 0x1) == 0)
                                                {




                                                  return 137;
                                                }
                                              else
                                                {




                                                  return 146;
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if (((word >> 12) & 0x1) == 0)
                                    {
                                      if (((word >> 29) & 0x1) == 0)
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 376;
                                            }
                                          else
                                            {




                                              return 377;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 30) & 0x1) == 0)
                                            {




                                              return 400;
                                            }
                                          else
                                            {




                                              return 401;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 13) & 0x1) == 0)
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 380;
                                                }
                                              else
                                                {




                                                  return 381;
                                                }
                                            }
                                          else
                                            {
                                              if (((word >> 30) & 0x1) == 0)
                                                {




                                                  return 404;
                                                }
                                              else
                                                {




                                                  return 405;
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 29) & 0x1) == 0)
                                            {




                                              return 138;
                                            }
                                          else
                                            {




                                              return 412;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if (((word >> 29) & 0x1) == 0)
                            {
                              if (((word >> 30) & 0x1) == 0)
                                {
                                  if (((word >> 21) & 0x1) == 0)
                                    {




                                      return 842;
                                    }
                                  else
                                    {




                                      return 846;
                                    }
                                }
                              else
                                {
                                  if (((word >> 10) & 0x1) == 0)
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {




                                          return 422;
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {
                                              if (((word >> 14) & 0x1) == 0)
                                                {
                                                  if (((word >> 23) & 0x1) == 0)
                                                    {




                                                      return 429;
                                                    }
                                                  else
                                                    {




                                                      return 428;
                                                    }
                                                }
                                              else
                                                {




                                                  return 423;
                                                }
                                            }
                                          else
                                            {




                                              return 421;
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 11) & 0x1) == 0)
                                        {
                                          if (((word >> 12) & 0x1) == 0)
                                            {




                                              return 592;
                                            }
                                          else
                                            {




                                              return 590;
                                            }
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 591;
                                            }
                                          else
                                            {




                                              return 594;
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if (((word >> 10) & 0x1) == 0)
                                {
                                  if (((word >> 13) & 0x1) == 0)
                                    {
                                      if (((word >> 14) & 0x1) == 0)
                                        {
                                          if (((word >> 23) & 0x1) == 0)
                                            {




                                              return 431;
                                            }
                                          else
                                            {




                                              return 430;
                                            }
                                        }
                                      else
                                        {




                                          return 432;
                                        }
                                    }
                                  else
                                    {




                                      return 433;
                                    }
                                }
                              else
                                {
                                  if (((word >> 11) & 0x1) == 0)
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 604;
                                            }
                                          else
                                            {




                                              return 608;
                                            }
                                        }
                                      else
                                        {




                                          return 606;
                                        }
                                    }
                                  else
                                    {
                                      if (((word >> 12) & 0x1) == 0)
                                        {




                                          return 605;
                                        }
                                      else
                                        {
                                          if (((word >> 13) & 0x1) == 0)
                                            {




                                              return 607;
                                            }
                                          else
                                            {




                                              return 610;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}




const aarch64_opcode *
aarch64_opcode_lookup (uint32_t word)
{
  return aarch64_opcode_table + aarch64_opcode_lookup_1 (word);
}

const aarch64_opcode *
aarch64_find_next_opcode (const aarch64_opcode *opcode)
{

  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 941: value = 945; break;
    case 945: return 
# 19150 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19150 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 939: value = 940; break;
    case 940: return 
# 19152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 942: value = 946; break;
    case 946: return 
# 19154 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19154 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 1584: value = 1585; break;
    case 1585: return 
# 19156 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19156 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1640: value = 1641; break;
    case 1641: return 
# 19158 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19158 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1588: value = 1589; break;
    case 1589: return 
# 19160 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19160 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1607: value = 1608; break;
    case 1608: return 
# 19162 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19162 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1586: value = 1587; break;
    case 1587: return 
# 19164 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19164 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1605: value = 1606; break;
    case 1606: return 
# 19166 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19166 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1590: value = 1591; break;
    case 1591: return 
# 19168 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19168 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1609: value = 1610; break;
    case 1610: return 
# 19170 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19170 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1630: value = 1631; break;
    case 1631: return 
# 19172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1618: value = 1619; break;
    case 1619: return 
# 19174 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19174 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1649: value = 1650; break;
    case 1650: return 
# 19176 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19176 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1622: value = 1623; break;
    case 1623: return 
# 19178 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19178 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1632: value = 1633; break;
    case 1633: return 
# 19180 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19180 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1620: value = 1621; break;
    case 1621: return 
# 19182 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19182 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1651: value = 1652; break;
    case 1652: return 
# 19184 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19184 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1596: value = 1597; break;
    case 1597: return 
# 19186 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19186 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1157: value = 1158; break;
    case 1158: value = 1173; break;
    case 1173: value = 1174; break;
    case 1174: value = 1177; break;
    case 1177: value = 1178; break;
    case 1178: value = 1179; break;
    case 1179: value = 1184; break;
    case 1184: value = 2042; break;
    case 2042: return 
# 19195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 1185: value = 1186; break;
    case 1186: return 
# 19197 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                     ((void *)0)
# 19197 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                         ;
    case 434: value = 435; break;
    case 435: value = 436; break;
    case 436: value = 437; break;
    case 437: return 
# 19201 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19201 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 442: value = 443; break;
    case 443: value = 444; break;
    case 444: value = 445; break;
    case 445: return 
# 19205 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19205 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 438: value = 439; break;
    case 439: value = 440; break;
    case 440: value = 441; break;
    case 441: return 
# 19209 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19209 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 454: value = 456; break;
    case 456: return 
# 19211 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19211 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 458: value = 460; break;
    case 460: return 
# 19213 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19213 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 455: value = 457; break;
    case 457: return 
# 19215 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19215 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 459: value = 461; break;
    case 461: return 
# 19217 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19217 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 446: value = 447; break;
    case 447: value = 448; break;
    case 448: value = 449; break;
    case 449: return 
# 19221 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19221 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 466: value = 468; break;
    case 468: return 
# 19223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 467: value = 469; break;
    case 469: return 
# 19225 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19225 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 470: value = 472; break;
    case 472: return 
# 19227 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19227 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 471: value = 473; break;
    case 473: return 
# 19229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 752: value = 753; break;
    case 753: return 
# 19231 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19231 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 748: value = 749; break;
    case 749: return 
# 19233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 754: value = 755; break;
    case 755: return 
# 19235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 750: value = 751; break;
    case 751: return 
# 19237 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19237 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 756: value = 757; break;
    case 757: return 
# 19239 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19239 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 776: value = 777; break;
    case 777: return 
# 19241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 772: value = 773; break;
    case 773: return 
# 19243 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19243 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 780: value = 781; break;
    case 781: return 
# 19245 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19245 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 764: value = 765; break;
    case 765: return 
# 19247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 760: value = 761; break;
    case 761: return 
# 19249 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19249 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 768: value = 769; break;
    case 769: return 
# 19251 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19251 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 758: value = 759; break;
    case 759: return 
# 19253 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19253 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 778: value = 779; break;
    case 779: return 
# 19255 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19255 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 774: value = 775; break;
    case 775: return 
# 19257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 782: value = 783; break;
    case 783: return 
# 19259 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19259 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 766: value = 767; break;
    case 767: return 
# 19261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 762: value = 763; break;
    case 763: return 
# 19263 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19263 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 770: value = 771; break;
    case 771: return 
# 19265 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19265 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 799: value = 800; break;
    case 800: return 
# 19267 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19267 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 808: value = 809; break;
    case 809: return 
# 19269 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19269 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 803: value = 804; break;
    case 804: return 
# 19271 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19271 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 812: value = 813; break;
    case 813: return 
# 19273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 801: value = 802; break;
    case 802: return 
# 19275 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19275 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 810: value = 811; break;
    case 811: return 
# 19277 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19277 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 805: value = 806; break;
    case 806: return 
# 19279 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19279 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 814: value = 815; break;
    case 815: return 
# 19281 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19281 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 816: value = 817; break;
    case 817: return 
# 19283 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19283 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 818: value = 819; break;
    case 819: return 
# 19285 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19285 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 820: value = 821; break;
    case 821: return 
# 19287 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19287 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 791: value = 792; break;
    case 792: return 
# 19289 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19289 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 793: value = 794; break;
    case 794: return 
# 19291 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19291 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 795: value = 796; break;
    case 796: return 
# 19293 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19293 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 797: value = 798; break;
    case 798: return 
# 19295 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19295 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 848: value = 849; break;
    case 849: return 
# 19297 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19297 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 822: value = 823; break;
    case 823: return 
# 19299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 838: value = 839; break;
    case 839: return 
# 19301 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19301 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 830: value = 831; break;
    case 831: return 
# 19303 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19303 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 826: value = 827; break;
    case 827: return 
# 19305 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19305 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 834: value = 835; break;
    case 835: return 
# 19307 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19307 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 824: value = 825; break;
    case 825: return 
# 19309 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19309 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 832: value = 833; break;
    case 833: return 
# 19311 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19311 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 828: value = 829; break;
    case 829: return 
# 19313 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19313 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 836: value = 837; break;
    case 837: return 
# 19315 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19315 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 787: value = 788; break;
    case 788: return 
# 19317 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19317 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 789: value = 790; break;
    case 790: return 
# 19319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 850: value = 851; break;
    case 851: return 
# 19321 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19321 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 131: value = 368; break;
    case 368: value = 370; break;
    case 370: return 
# 19324 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19324 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 139: value = 390; break;
    case 390: value = 392; break;
    case 392: value = 394; break;
    case 394: value = 396; break;
    case 396: return 
# 19329 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19329 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 132: value = 369; break;
    case 369: value = 371; break;
    case 371: value = 372; break;
    case 372: value = 373; break;
    case 373: return 
# 19334 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19334 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 140: value = 391; break;
    case 391: value = 393; break;
    case 393: value = 395; break;
    case 395: value = 397; break;
    case 397: return 
# 19339 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19339 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 840: value = 841; break;
    case 841: return 
# 19341 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19341 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 844: value = 845; break;
    case 845: return 
# 19343 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19343 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 133: value = 374; break;
    case 374: value = 375; break;
    case 375: value = 382; break;
    case 382: value = 384; break;
    case 384: return 
# 19348 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19348 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 141: value = 398; break;
    case 398: value = 399; break;
    case 399: value = 406; break;
    case 406: value = 408; break;
    case 408: return 
# 19353 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19353 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 134: value = 378; break;
    case 378: value = 379; break;
    case 379: return 
# 19356 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19356 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 142: value = 402; break;
    case 402: value = 403; break;
    case 403: return 
# 19359 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19359 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 136: value = 386; break;
    case 386: value = 387; break;
    case 387: return 
# 19362 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19362 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 144: value = 145; break;
    case 145: value = 410; break;
    case 410: value = 411; break;
    case 411: return 
# 19366 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19366 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 138: value = 388; break;
    case 388: value = 389; break;
    case 389: return 
# 19369 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19369 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 412: value = 413; break;
    case 413: return 
# 19371 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19371 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 842: value = 843; break;
    case 843: return 
# 19373 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19373 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 846: value = 847; break;
    case 847: return 
# 19375 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19375 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 592: value = 593; break;
    case 593: return 
# 19377 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19377 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 594: value = 595; break;
    case 595: return 
# 19379 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19379 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 608: value = 609; break;
    case 609: return 
# 19381 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19381 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    case 610: value = 611; break;
    case 611: return 
# 19383 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                    ((void *)0)
# 19383 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                        ;
    default: return 
# 19384 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                   ((void *)0)
# 19384 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                       ;
    }

  return aarch64_opcode_table + value;
}

const aarch64_opcode *
aarch64_find_alias_opcode (const aarch64_opcode *opcode)
{

  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 2: value = 3; break;
    case 4: value = 5; break;
    case 7: value = 8; break;
    case 10: value = 11; break;
    case 12: value = 13; break;
    case 14: value = 15; break;
    case 17: value = 18; break;
    case 20: value = 21; break;
    case 22: value = 23; break;
    case 24: value = 25; break;
    case 150: value = 151; break;
    case 152: value = 153; break;
    case 154: value = 155; break;
    case 236: value = 237; break;
    case 311: value = 312; break;
    case 382: value = 383; break;
    case 384: value = 385; break;
    case 406: value = 407; break;
    case 408: value = 409; break;
    case 529: value = 530; break;
    case 612: value = 617; break;
    case 619: value = 621; break;
    case 623: value = 627; break;
    case 657: value = 659; break;
    case 660: value = 662; break;
    case 663: value = 664; break;
    case 682: value = 682; break;
    case 707: value = 708; break;
    case 709: value = 710; break;
    case 711: value = 712; break;
    case 713: value = 714; break;
    case 724: value = 725; break;
    case 726: value = 727; break;
    case 728: value = 729; break;
    case 730: value = 731; break;
    case 733: value = 734; break;
    case 735: value = 736; break;
    case 746: value = 747; break;
    case 959: value = 960; break;
    case 961: value = 962; break;
    case 964: value = 965; break;
    case 968: value = 970; break;
    case 971: value = 972; break;
    case 975: value = 976; break;
    case 1006: value = 1102; break;
    case 1007: value = 1103; break;
    case 1008: value = 1104; break;
    case 1010: value = 1105; break;
    case 1013: value = 1106; break;
    case 1016: value = 1107; break;
    case 1018: value = 1108; break;
    case 1019: value = 1109; break;
    case 1020: value = 1110; break;
    case 1022: value = 1111; break;
    case 1025: value = 1112; break;
    case 1028: value = 1113; break;
    case 1030: value = 1114; break;
    case 1031: value = 1115; break;
    case 1032: value = 1116; break;
    case 1034: value = 1117; break;
    case 1037: value = 1118; break;
    case 1040: value = 1119; break;
    case 1042: value = 1120; break;
    case 1043: value = 1121; break;
    case 1044: value = 1122; break;
    case 1046: value = 1123; break;
    case 1049: value = 1124; break;
    case 1052: value = 1125; break;
    case 1054: value = 1126; break;
    case 1055: value = 1127; break;
    case 1056: value = 1128; break;
    case 1058: value = 1129; break;
    case 1061: value = 1130; break;
    case 1064: value = 1131; break;
    case 1066: value = 1132; break;
    case 1067: value = 1133; break;
    case 1068: value = 1134; break;
    case 1070: value = 1135; break;
    case 1073: value = 1136; break;
    case 1076: value = 1137; break;
    case 1078: value = 1138; break;
    case 1079: value = 1139; break;
    case 1080: value = 1140; break;
    case 1082: value = 1141; break;
    case 1085: value = 1142; break;
    case 1088: value = 1143; break;
    case 1090: value = 1144; break;
    case 1091: value = 1145; break;
    case 1092: value = 1146; break;
    case 1094: value = 1147; break;
    case 1097: value = 1148; break;
    case 1100: value = 1149; break;
    case 1150: value = 1151; break;
    case 1152: value = 1153; break;
    case 1158: value = 1194; break;
    case 1174: value = 1176; break;
    case 1179: value = 1183; break;
    case 1242: value = 1992; break;
    case 1244: value = 1225; break;
    case 1245: value = 1229; break;
    case 1280: value = 1993; break;
    case 1283: value = 1996; break;
    case 1285: value = 1994; break;
    case 1288: value = 1995; break;
    case 1310: value = 1222; break;
    case 1311: value = 1224; break;
    case 1312: value = 2003; break;
    case 1324: value = 1217; break;
    case 1325: value = 1219; break;
    case 1326: value = 2002; break;
    case 1327: value = 1220; break;
    case 1329: value = 1997; break;
    case 1331: value = 1230; break;
    case 1332: value = 1231; break;
    case 1337: value = 1998; break;
    case 1338: value = 1999; break;
    case 1351: value = 2000; break;
    case 1353: value = 2001; break;
    case 1359: value = 1214; break;
    case 1382: value = 1213; break;
    case 1713: value = 1215; break;
    case 1714: value = 2004; break;
    case 1716: value = 1218; break;
    case 1717: value = 1228; break;
    case 1779: value = 1223; break;
    case 1780: value = 1226; break;
    default: return 
# 19524 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                   ((void *)0)
# 19524 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                       ;
    }

  return aarch64_opcode_table + value;
}

const aarch64_opcode *
aarch64_find_next_alias_opcode (const aarch64_opcode *opcode)
{

  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3: value = 2; break;
    case 5: value = 4; break;
    case 8: value = 7; break;
    case 11: value = 10; break;
    case 13: value = 12; break;
    case 15: value = 14; break;
    case 18: value = 17; break;
    case 21: value = 20; break;
    case 23: value = 22; break;
    case 25: value = 26; break;
    case 26: value = 24; break;
    case 151: value = 150; break;
    case 153: value = 152; break;
    case 155: value = 154; break;
    case 237: value = 236; break;
    case 312: value = 311; break;
    case 383: value = 382; break;
    case 385: value = 384; break;
    case 407: value = 406; break;
    case 409: value = 408; break;
    case 530: value = 529; break;
    case 617: value = 616; break;
    case 616: value = 615; break;
    case 615: value = 618; break;
    case 618: value = 614; break;
    case 614: value = 613; break;
    case 613: value = 612; break;
    case 621: value = 622; break;
    case 622: value = 620; break;
    case 620: value = 619; break;
    case 627: value = 626; break;
    case 626: value = 629; break;
    case 629: value = 628; break;
    case 628: value = 625; break;
    case 625: value = 624; break;
    case 624: value = 623; break;
    case 659: value = 658; break;
    case 658: value = 657; break;
    case 662: value = 661; break;
    case 661: value = 660; break;
    case 664: value = 663; break;
    case 682: value = 683; break;
    case 708: value = 707; break;
    case 710: value = 709; break;
    case 712: value = 711; break;
    case 714: value = 713; break;
    case 725: value = 724; break;
    case 727: value = 726; break;
    case 729: value = 728; break;
    case 731: value = 730; break;
    case 734: value = 733; break;
    case 736: value = 735; break;
    case 747: value = 746; break;
    case 960: value = 959; break;
    case 962: value = 961; break;
    case 965: value = 964; break;
    case 970: value = 969; break;
    case 969: value = 968; break;
    case 972: value = 971; break;
    case 976: value = 975; break;
    case 1102: value = 1006; break;
    case 1103: value = 1007; break;
    case 1104: value = 1008; break;
    case 1105: value = 1010; break;
    case 1106: value = 1013; break;
    case 1107: value = 1016; break;
    case 1108: value = 1018; break;
    case 1109: value = 1019; break;
    case 1110: value = 1020; break;
    case 1111: value = 1022; break;
    case 1112: value = 1025; break;
    case 1113: value = 1028; break;
    case 1114: value = 1030; break;
    case 1115: value = 1031; break;
    case 1116: value = 1032; break;
    case 1117: value = 1034; break;
    case 1118: value = 1037; break;
    case 1119: value = 1040; break;
    case 1120: value = 1042; break;
    case 1121: value = 1043; break;
    case 1122: value = 1044; break;
    case 1123: value = 1046; break;
    case 1124: value = 1049; break;
    case 1125: value = 1052; break;
    case 1126: value = 1054; break;
    case 1127: value = 1055; break;
    case 1128: value = 1056; break;
    case 1129: value = 1058; break;
    case 1130: value = 1061; break;
    case 1131: value = 1064; break;
    case 1132: value = 1066; break;
    case 1133: value = 1067; break;
    case 1134: value = 1068; break;
    case 1135: value = 1070; break;
    case 1136: value = 1073; break;
    case 1137: value = 1076; break;
    case 1138: value = 1078; break;
    case 1139: value = 1079; break;
    case 1140: value = 1080; break;
    case 1141: value = 1082; break;
    case 1142: value = 1085; break;
    case 1143: value = 1088; break;
    case 1144: value = 1090; break;
    case 1145: value = 1091; break;
    case 1146: value = 1092; break;
    case 1147: value = 1094; break;
    case 1148: value = 1097; break;
    case 1149: value = 1100; break;
    case 1151: value = 1150; break;
    case 1153: value = 1152; break;
    case 1194: value = 1193; break;
    case 1193: value = 1192; break;
    case 1192: value = 1191; break;
    case 1191: value = 1190; break;
    case 1190: value = 1189; break;
    case 1189: value = 1188; break;
    case 1188: value = 1187; break;
    case 1187: value = 1172; break;
    case 1172: value = 1171; break;
    case 1171: value = 1170; break;
    case 1170: value = 1169; break;
    case 1169: value = 1168; break;
    case 1168: value = 1167; break;
    case 1167: value = 1166; break;
    case 1166: value = 1165; break;
    case 1165: value = 1164; break;
    case 1164: value = 1163; break;
    case 1163: value = 1162; break;
    case 1162: value = 1161; break;
    case 1161: value = 1160; break;
    case 1160: value = 1159; break;
    case 1159: value = 1158; break;
    case 1176: value = 1175; break;
    case 1175: value = 1174; break;
    case 1183: value = 1182; break;
    case 1182: value = 1181; break;
    case 1181: value = 1180; break;
    case 1180: value = 1179; break;
    case 1992: value = 1242; break;
    case 1225: value = 1244; break;
    case 1229: value = 1245; break;
    case 1993: value = 1280; break;
    case 1996: value = 1283; break;
    case 1994: value = 1285; break;
    case 1995: value = 1288; break;
    case 1222: value = 1310; break;
    case 1224: value = 1311; break;
    case 2003: value = 1227; break;
    case 1227: value = 1312; break;
    case 1217: value = 1324; break;
    case 1219: value = 1216; break;
    case 1216: value = 1325; break;
    case 2002: value = 1221; break;
    case 1221: value = 1326; break;
    case 1220: value = 1327; break;
    case 1997: value = 1329; break;
    case 1230: value = 1331; break;
    case 1231: value = 1332; break;
    case 1998: value = 1337; break;
    case 1999: value = 1338; break;
    case 2000: value = 1351; break;
    case 2001: value = 1353; break;
    case 1214: value = 1359; break;
    case 1213: value = 1382; break;
    case 1215: value = 1713; break;
    case 2004: value = 1714; break;
    case 1218: value = 1716; break;
    case 1228: value = 1717; break;
    case 1223: value = 1779; break;
    case 1226: value = 1780; break;
    default: return 
# 19708 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
                   ((void *)0)
# 19708 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                       ;
    }

  return aarch64_opcode_table + value;
}

bfd_boolean
aarch64_extract_operand (const aarch64_operand *self,
      aarch64_opnd_info *info,
      aarch64_insn code, const aarch64_inst *inst,
      aarch64_operand_error *errors)
{

  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 161:
    case 162:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 187:
    case 190:
      return aarch64_ext_regno (self, info, code, inst, errors);
    case 8:
      return aarch64_ext_regrt_sysins (self, info, code, inst, errors);
    case 12:
      return aarch64_ext_regno_pair (self, info, code, inst, errors);
    case 13:
      return aarch64_ext_reg_extended (self, info, code, inst, errors);
    case 14:
      return aarch64_ext_reg_shifted (self, info, code, inst, errors);
    case 19:
      return aarch64_ext_ft (self, info, code, inst, errors);
    case 30:
    case 31:
    case 32:
    case 33:
    case 192:
      return aarch64_ext_reglane (self, info, code, inst, errors);
    case 34:
      return aarch64_ext_reglist (self, info, code, inst, errors);
    case 35:
      return aarch64_ext_ldst_reglist (self, info, code, inst, errors);
    case 36:
      return aarch64_ext_ldst_reglist_r (self, info, code, inst, errors);
    case 37:
      return aarch64_ext_ldst_elemlist (self, info, code, inst, errors);
    case 38:
    case 39:
    case 40:
    case 41:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 150:
    case 152:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
      return aarch64_ext_imm (self, info, code, inst, errors);
    case 42:
    case 43:
      return aarch64_ext_advsimd_imm_shift (self, info, code, inst, errors);
    case 44:
    case 45:
    case 46:
      return aarch64_ext_advsimd_imm_modified (self, info, code, inst, errors);
    case 47:
      return aarch64_ext_shll_imm (self, info, code, inst, errors);
    case 50:
    case 141:
      return aarch64_ext_fpimm (self, info, code, inst, errors);
    case 65:
    case 148:
      return aarch64_ext_limm (self, info, code, inst, errors);
    case 66:
      return aarch64_ext_aimm (self, info, code, inst, errors);
    case 67:
      return aarch64_ext_imm_half (self, info, code, inst, errors);
    case 68:
      return aarch64_ext_fbits (self, info, code, inst, errors);
    case 70:
    case 71:
    case 146:
      return aarch64_ext_imm_rotate2 (self, info, code, inst, errors);
    case 72:
    case 145:
      return aarch64_ext_imm_rotate1 (self, info, code, inst, errors);
    case 73:
    case 74:
      return aarch64_ext_cond (self, info, code, inst, errors);
    case 80:
    case 87:
      return aarch64_ext_addr_simple (self, info, code, inst, errors);
    case 81:
      return aarch64_ext_addr_regoff (self, info, code, inst, errors);
    case 82:
    case 83:
    case 84:
      return aarch64_ext_addr_simm (self, info, code, inst, errors);
    case 85:
      return aarch64_ext_addr_simm10 (self, info, code, inst, errors);
    case 86:
      return aarch64_ext_addr_uimm12 (self, info, code, inst, errors);
    case 88:
      return aarch64_ext_addr_offset (self, info, code, inst, errors);
    case 89:
      return aarch64_ext_simd_addr_post (self, info, code, inst, errors);
    case 90:
      return aarch64_ext_sysreg (self, info, code, inst, errors);
    case 91:
      return aarch64_ext_pstatefield (self, info, code, inst, errors);
    case 92:
    case 93:
    case 94:
    case 95:
      return aarch64_ext_sysins_op (self, info, code, inst, errors);
    case 96:
    case 97:
      return aarch64_ext_barrier (self, info, code, inst, errors);
    case 98:
      return aarch64_ext_prfop (self, info, code, inst, errors);
    case 99:
      return aarch64_ext_hint (self, info, code, inst, errors);
    case 100:
      return aarch64_ext_sve_addr_ri_s4 (self, info, code, inst, errors);
    case 101:
    case 102:
    case 103:
    case 104:
      return aarch64_ext_sve_addr_ri_s4xvl (self, info, code, inst, errors);
    case 105:
      return aarch64_ext_sve_addr_ri_s6xvl (self, info, code, inst, errors);
    case 106:
      return aarch64_ext_sve_addr_ri_s9xvl (self, info, code, inst, errors);
    case 107:
    case 108:
    case 109:
    case 110:
      return aarch64_ext_sve_addr_ri_u6 (self, info, code, inst, errors);
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
      return aarch64_ext_sve_addr_rr_lsl (self, info, code, inst, errors);
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
      return aarch64_ext_sve_addr_rz_xtw (self, info, code, inst, errors);
    case 132:
    case 133:
    case 134:
    case 135:
      return aarch64_ext_sve_addr_zi_u5 (self, info, code, inst, errors);
    case 136:
      return aarch64_ext_sve_addr_zz_lsl (self, info, code, inst, errors);
    case 137:
      return aarch64_ext_sve_addr_zz_sxtw (self, info, code, inst, errors);
    case 138:
      return aarch64_ext_sve_addr_zz_uxtw (self, info, code, inst, errors);
    case 139:
      return aarch64_ext_sve_aimm (self, info, code, inst, errors);
    case 140:
      return aarch64_ext_sve_asimm (self, info, code, inst, errors);
    case 142:
      return aarch64_ext_sve_float_half_one (self, info, code, inst, errors);
    case 143:
      return aarch64_ext_sve_float_half_two (self, info, code, inst, errors);
    case 144:
      return aarch64_ext_sve_float_zero_one (self, info, code, inst, errors);
    case 147:
      return aarch64_ext_inv_limm (self, info, code, inst, errors);
    case 149:
      return aarch64_ext_sve_limm_mov (self, info, code, inst, errors);
    case 151:
      return aarch64_ext_sve_scale (self, info, code, inst, errors);
    case 163:
    case 164:
      return aarch64_ext_sve_shlimm (self, info, code, inst, errors);
    case 165:
    case 166:
      return aarch64_ext_sve_shrimm (self, info, code, inst, errors);
    case 184:
    case 185:
    case 186:
      return aarch64_ext_sve_quad_index (self, info, code, inst, errors);
    case 188:
      return aarch64_ext_sve_index (self, info, code, inst, errors);
    case 189:
    case 191:
      return aarch64_ext_sve_reglist (self, info, code, inst, errors);
    default: 
# 19973 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
            (__builtin_expect(!(
# 19973 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
            0
# 19973 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
            ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c", 19973, 
# 19973 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
            "0"
# 19973 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c" 3 4
            ) : (void)0)
# 19973 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis-2.c"
                      ; abort ();
    }
}
