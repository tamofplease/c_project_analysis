# 0 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"


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
# 4 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2
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
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2
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








# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2

# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 1



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_util.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 1 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_version.h" 1 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4

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




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


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
# 254 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
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
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 2
# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 1







# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
char *strcat_dup(char *s1, char *s2, 
# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 3 4
                                    int 
# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
                                         n_free);
char *get_hex_str(
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 3 4
                 unsigned int 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
                      hex_num);
# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 2



# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
unsigned int 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
    get_ins_len(
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                unsigned char 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                    opcode);



# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
    get_ins_part(
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                 unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                      pos, 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                           unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                                len);
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2


char *get_tc2_tc1(
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                 unsigned int 
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                      ins_bits) {
 char *res = "tc1";
 if (ins_bits) {
  if (ins_bits != 1) {
   fprintf(
# 14 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          __stderrp
# 14 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                , "Invalid instruction TC2 or TC1 (%d)\n", ins_bits);
   return 
# 15 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
         ((void *)0)
# 15 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
             ;
  }
  res = "tc2";
 }
 return strdup (res);
}

char *get_trans_reg(
# 22 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                   unsigned int 
# 22 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                        ins_bits) {
 char *res = 
# 23 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 23 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (ins_bits) {
 case 6:
  res = "trn0";
  break;
 case 7:
  res = "trn1";
  break;
 case 4:
  res = "trn2";
  break;
 case 5:
  res = "trn3";
  break;
 case 2:
  res = "trn4";
  break;
 case 3:
  res = "trn5";
  break;
 case 0:
  res = "trn6";
  break;
 case 1:
  res = "trn7";
  break;

 default:
  fprintf (
# 52 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          __stderrp
# 52 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                , "Invalid transaction instruction 0x%x\n", ins_bits);
 }
 return res? strdup (res): 
# 54 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                          ((void *)0)
# 54 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
}

char *get_AR_regs_class1(
# 57 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                        unsigned int 
# 57 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                             ins_bits) {
 
# 58 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
unsigned int 
# 58 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
     op = (ins_bits >> 4) & 7;
 char *res = (char *)calloc (1, 50);
 if (!res) {
  return 
# 61 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
        ((void *)0)
# 61 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
            ;
 }
 switch (op) {
 case 0:
  
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar-%ld", (long int)ins_bits & 0xF
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
  break;
 case 1:
  
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar+%ld", (long int)ins_bits & 0xF
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
  break;
 case 2:
  
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar%ld(t0)", (long int)ins_bits & 0xF
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                     ;
  break;
 case 3:
  
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar%ld", (long int)ins_bits & 0xF
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
  break;
 case 4:
  
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld-t0)", (long int)ins_bits & 0xF
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 case 5:
  
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld-t1)", (long int)ins_bits & 0xF
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 case 6:
  
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld+t0)", (long int)ins_bits & 0xF
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 case 7:
  
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld+t1)", (long int)ins_bits & 0xF
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 }
 return res;
}

char *get_AR_regs_class2(
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                        unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                             ins_bits, 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                       unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                            *ret_len, 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                                      unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                           ins_pos, 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                                                    unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                         idx) {
 
# 93 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
unsigned char 
# 93 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    op, op2, reg_num, type;
 char *res = 
# 94 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 94 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 op = ins_bits >> 6;
 op2 = ins_bits & 3;
 reg_num = (ins_bits >> 2) & 0xF;
 if (ret_len) {
  *ret_len = 0;
 }

 res = malloc(50);
 if (!res) {
  return 
# 105 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
        ((void *)0)
# 105 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
            ;
 }
 if(op2 == 2) {
  if(op) {
   
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "*ar%ld(short(#0x%lx))", (long int)reg_num, (long int)idx * op
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
                                           
# 110 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                          ;
  } else {
   
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "*ar%ld", (long int)reg_num
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                           ;
  }
 } else {
  type = (op >> 3 | 2 * op2);
  if(type == 6) {
   
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "@#0x%lx", (long int)idx * (reg_num | 16 * (op & 7))
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                    ;
  } else if(type == 7) {
   
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "*sp(#0x%lx)", (long int)idx * (reg_num | 16 * (op & 7))
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                        ;
  } else {
   type = idx | 16 * op;
   switch(type) {
   case 0:
    
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld-", (long int)reg_num
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 1:
    
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld+", (long int)reg_num
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 2:
    
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t0)", (long int)reg_num
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 3:
    
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t1)", (long int)reg_num
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 4:
    
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t0)", (long int)reg_num
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 5:
    
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t1)", (long int)reg_num
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 6:
    
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t0)", (long int)reg_num
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 7:
    
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t1)", (long int)reg_num
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 8:
    
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*-ar%ld", (long int)reg_num
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 9:
    
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*+ar%ld", (long int)reg_num
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 10:
    
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t2)", (long int)reg_num
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 11:
    
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t3)", (long int)reg_num
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 12:
    
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t2)", (long int)reg_num
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 13:
    
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t3)", (long int)reg_num
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 14:
    
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t2)", (long int)reg_num
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 15:
    
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t3)", (long int)reg_num
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 16:
    
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t0b)", (long int)reg_num
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
    break;
   case 17:
    
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t0b)", (long int)reg_num
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
    break;
   case 18:
    
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t0<<#1)", (long int)reg_num
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                    ;
    break;
   case 19:
    
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t1<<#1)", (long int)reg_num
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                    ;
    break;
   case 23:
    
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(xar15)", (long int)reg_num
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                   ;
    break;

   case 24:
   case 25:
   case 26:
   case 27:
    idx = get_ins_part(ins_pos, 2);
    if(ret_len) {
     *ret_len = 2;
    }
    switch (type) {
    case 24:
     
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*ar%ld(#%ld)", (long int)reg_num, (long int)op * idx
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                       ;
     break;
    case 25:
     
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*+ar%ld(#%ld)", (long int)reg_num, (long int)op * idx
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                        ;
     break;
    case 26:
     
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*abs16(#0x%lx)", (long int)idx
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
     break;
    default:
     
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*port(#0x%lx)", (long int)idx
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
     break;
    }
    break;
   case 28:
   case 29:
   case 30:
    idx = get_ins_part(ins_pos, 3);
    if(ret_len) {
     *ret_len = 3;
    }
    switch (type) {
    case 28:
     
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*ar%ld(#0x%lx)", (long int)reg_num, (long int)idx * op
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                         ;
     break;
    case 29:
     
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*+ar%ld(#0x%lx)", (long int)reg_num, (long int)idx * op
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                          ;
     break;
    default:
     
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*(#0x%lx)", (long int)idx
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                            ;
     break;
    }

    break;
   }
  }
 }

 return res;
}

char *get_reg_pair(
# 237 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                  unsigned int 
# 237 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                       idx) {
 char *res = 
# 238 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 238 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 1: res = "ac0, ac2"; break;
 case 2: res = "ac1, ac3"; break;
 case 3: res = "pair(ac0), pair(ac2)"; break;
 case 4: res = "ar0, ar1"; break;
 case 5: res = "ar0, ar2"; break;
 case 6: res = "ar1, ar3"; break;
 case 7: res = "pair(ar0), pair(ar2)"; break;
 case 9: res = "t0, t2"; break;
 case 10: res = "t1, t3"; break;
 case 11: res = "pair(t0), pair(t2)"; break;
 case 21: res = "ar4, t0"; break;
 case 22: res = "ar5, t1"; break;
 case 23: res = "pair(ar4), pair(t0)"; break;
 case 25: res = "ar6, t2"; break;
 case 26: res = "ar7, t3"; break;
 case 27: res = "pair(ar6), pair(t2)"; break;
 case 31: res = "block(ar4), block(t0)"; break;
 default: res = 
# 258 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 258 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 261 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 261 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }

 return res;
}

char *get_reg_name_3(
# 268 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 268 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 269 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 269 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0: res = "ac0"; break;
 case 1: res = "ac1"; break;
 case 2: res = "ac2"; break;
 case 3: res = "ac3"; break;
 case 4: res = "ac4"; break;
 case 5: res = "ac5"; break;
 case 6: res = "ac6"; break;
 case 7: res = "ac7"; break;
 case 8: res = "ac8"; break;
 case 9: res = "ac9"; break;
 case 10: res = "ac10"; break;
 case 11: res = "ac11"; break;
 case 12: res = "ac12"; break;
 case 13: res = "ac13"; break;
 case 14: res = "ac14"; break;
 case 15: res = "ac15"; break;
 case 16: res = "ac16"; break;
 case 17: res = "ac17"; break;
 case 18: res = "ac18"; break;
 case 19: res = "ac19"; break;
 case 20: res = "ac20"; break;
 case 21: res = "ac21"; break;
 case 22: res = "ac22"; break;
 case 23: res = "ac23"; break;
 case 24: res = "ac24"; break;
 case 25: res = "ac25"; break;
 case 26: res = "ac26"; break;
 case 27: res = "ac27"; break;
 case 28: res = "ac28"; break;
 case 29: res = "ac29"; break;
 case 30: res = "ac30"; break;
 case 31: res = "ac31"; break;
 case 32: res = "xar0"; break;
 case 33: res = "xar1"; break;
 case 34: res = "xar2"; break;
 case 35: res = "xar3"; break;
 case 36: res = "xar4"; break;
 case 37: res = "xar5"; break;
 case 38: res = "xar6"; break;
 case 39: res = "xar7"; break;
 case 40: res = "xar8"; break;
 case 41: res = "xar9"; break;
 case 42: res = "xar10"; break;
 case 43: res = "xar11"; break;
 case 44: res = "xar12"; break;
 case 45: res = "xar13"; break;
 case 46: res = "xar14"; break;
 case 47: res = "xar15"; break;
 case 52: res = "xssp"; break;
 case 53: res = "xsp"; break;
 case 54: res = "xdp"; break;
 default: res = 
# 323 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 323 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 326 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 326 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }
 return res;
}


char *get_reg_name_2(
# 333 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 333 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 334 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 334 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0: res = "ar0"; break;
 case 1: res = "ar1"; break;
 case 2: res = "ar2"; break;
 case 3: res = "ar3"; break;
 case 4: res = "ar4"; break;
 case 5: res = "ar5"; break;
 case 6: res = "ar6"; break;
 case 7: res = "ar7"; break;
 case 8: res = "ar8"; break;
 case 9: res = "ar9"; break;
 case 10: res = "ar10"; break;
 case 11: res = "ar11"; break;
 case 12: res = "ar12"; break;
 case 13: res = "ar13"; break;
 case 14: res = "ar14"; break;
 case 15: res = "ar15"; break;
 case 16: res = "t0"; break;
 case 17: res = "t1"; break;
 case 18: res = "t2"; break;
 case 19: res = "t3"; break;
 case 20: res = "ssp"; break;
 case 21: res = "sp"; break;
 case 22: res = "dp"; break;
 case 32: res = "xar0"; break;
 case 33: res = "xar1"; break;
 case 34: res = "xar2"; break;
 case 35: res = "xar3"; break;
 case 36: res = "xar4"; break;
 case 37: res = "xar5"; break;
 case 38: res = "xar6"; break;
 case 39: res = "xar7"; break;
 case 40: res = "xar8"; break;
 case 41: res = "xar9"; break;
 case 42: res = "xar10"; break;
 case 43: res = "xar11"; break;
 case 44: res = "xar12"; break;
 case 45: res = "xar13"; break;
 case 46: res = "xar14"; break;
 case 47: res = "xar15"; break;
 case 52: res = "xssp"; break;
 case 53: res = "xsp"; break;
 case 54: res = "xdp"; break;
 default: res = 
# 379 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 379 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 382 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 382 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }

 return res;
}

char *get_reg_name_1(
# 389 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 389 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 390 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 390 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0: res = "ac0"; break;
 case 1: res = "ac1"; break;
 case 2: res = "ac2"; break;
 case 3: res = "ac3"; break;
 case 4: res = "ac4"; break;
 case 5: res = "ac5"; break;
 case 6: res = "ac6"; break;
 case 7: res = "ac7"; break;
 case 8: res = "ac8"; break;
 case 9: res = "ac9"; break;
 case 10: res = "ac10"; break;
 case 11: res = "ac11"; break;
 case 12: res = "ac12"; break;
 case 13: res = "ac13"; break;
 case 14: res = "ac14"; break;
 case 15: res = "ac15"; break;
 case 16: res = "ac16"; break;
 case 17: res = "ac17"; break;
 case 18: res = "ac18"; break;
 case 19: res = "ac19"; break;
 case 20: res = "ac20"; break;
 case 21: res = "ac21"; break;
 case 22: res = "ac22"; break;
 case 23: res = "ac23"; break;
 case 24: res = "ac24"; break;
 case 25: res = "ac25"; break;
 case 26: res = "ac26"; break;
 case 27: res = "ac27"; break;
 case 28: res = "ac28"; break;
 case 29: res = "ac29"; break;
 case 30: res = "ac30"; break;
 case 31: res = "ac31"; break;
 case 32: res = "ar0"; break;
 case 33: res = "ar1"; break;
 case 34: res = "ar2"; break;
 case 35: res = "ar3"; break;
 case 36: res = "ar4"; break;
 case 37: res = "ar5"; break;
 case 38: res = "ar6"; break;
 case 39: res = "ar7"; break;
 case 40: res = "ar8"; break;
 case 41: res = "ar9"; break;
 case 42: res = "ar10"; break;
 case 43: res = "ar11"; break;
 case 44: res = "ar12"; break;
 case 45: res = "ar13"; break;
 case 46: res = "ar14"; break;
 case 47: res = "ar15"; break;
 case 48: res = "t0"; break;
 case 49: res = "t1"; break;
 case 50: res = "t2"; break;
 case 51: res = "t3"; break;
 case 52: res = "ssp"; break;
 case 53: res = "sp"; break;
 case 54: res = "dp"; break;
 case 56: res = "csr"; break;
 case 57: res = "rptc"; break;
 case 58: res = "brc0"; break;
 case 59: res = "brc1"; break;
 case 62: res = "config"; break;
 case 63: res = "cpurev"; break;
 case 64: res = "ac0.h"; break;
 case 65: res = "ac1.h"; break;
 case 66: res = "ac2.h"; break;
 case 67: res = "ac3.h"; break;
 case 68: res = "ac4.h"; break;
 case 69: res = "ac5.h"; break;
 case 70: res = "ac6.h"; break;
 case 71: res = "ac7.h"; break;
 case 72: res = "ac8.h"; break;
 case 73: res = "ac9.h"; break;
 case 74: res = "ac10.h"; break;
 case 75: res = "ac11.h"; break;
 case 76: res = "ac12.h"; break;
 case 77: res = "ac13.h"; break;
 case 78: res = "ac14.h"; break;
 case 79: res = "ac15.h"; break;
 case 80: res = "ac16.h"; break;
 case 81: res = "ac17.h"; break;
 case 82: res = "ac18.h"; break;
 case 83: res = "ac19.h"; break;
 case 84: res = "ac20.h"; break;
 case 85: res = "ac21.h"; break;
 case 86: res = "ac22.h"; break;
 case 87: res = "ac23.h"; break;
 case 88: res = "ac24.h"; break;
 case 89: res = "ac25.h"; break;
 case 90: res = "ac26.h"; break;
 case 91: res = "ac27.h"; break;
 case 92: res = "ac28.h"; break;
 case 93: res = "ac29.h"; break;
 case 94: res = "ac30.h"; break;
 case 95: res = "ac31.h"; break;
 case 96: res = "ac0.l"; break;
 case 97: res = "ac1.l"; break;
 case 98: res = "ac2.l"; break;
 case 99: res = "ac3.l"; break;
 case 100: res = "ac4.l"; break;
 case 101: res = "ac5.l"; break;
 case 102: res = "ac6.l"; break;
 case 103: res = "ac7.l"; break;
 case 104: res = "ac8.l"; break;
 case 105: res = "ac9.l"; break;
 case 106: res = "ac10.l"; break;
 case 107: res = "ac11.l"; break;
 case 108: res = "ac12.l"; break;
 case 109: res = "ac13.l"; break;
 case 110: res = "ac14.l"; break;
 case 111: res = "ac15.l"; break;
 case 112: res = "ac16.l"; break;
 case 113: res = "ac17.l"; break;
 case 114: res = "ac18.l"; break;
 case 115: res = "ac19.l"; break;
 case 116: res = "ac20.l"; break;
 case 117: res = "ac21.l"; break;
 case 118: res = "ac22.l"; break;
 case 119: res = "ac23.l"; break;
 case 120: res = "ac24.l"; break;
 case 121: res = "ac25.l"; break;
 case 122: res = "ac26.l"; break;
 case 123: res = "ac27.l"; break;
 case 124: res = "ac28.l"; break;
 case 125: res = "ac29.l"; break;
 case 126: res = "ac30.l"; break;
 case 127: res = "ac31.l"; break;
 case 128: res = "xar0"; break;
 case 129: res = "xar1"; break;
 case 130: res = "xar2"; break;
 case 131: res = "xar3"; break;
 case 132: res = "xar4"; break;
 case 133: res = "xar5"; break;
 case 134: res = "xar6"; break;
 case 135: res = "xar7"; break;
 case 136: res = "xar8"; break;
 case 137: res = "xar9"; break;
 case 138: res = "xar10"; break;
 case 139: res = "xar11"; break;
 case 140: res = "xar12"; break;
 case 141: res = "xar13"; break;
 case 142: res = "xar14"; break;
 case 143: res = "xar15"; break;
 case 148: res = "xssp"; break;
 case 149: res = "xsp"; break;
 case 150: res = "xdp"; break;
 case 152: res = "rsa0"; break;
 case 153: res = "rsa1"; break;
 case 154: res = "rea0"; break;
 case 155: res = "rea1"; break;
 case 156: res = "dbgpaddr"; break;
 case 157: res = "dbgpdata"; break;
 case 159: res = "reta"; break;
 case 160: res = "xar0.h"; break;
 case 161: res = "xar1.h"; break;
 case 162: res = "xar2.h"; break;
 case 163: res = "xar3.h"; break;
 case 164: res = "xar4.h"; break;
 case 165: res = "xar5.h"; break;
 case 166: res = "xar6.h"; break;
 case 167: res = "xar7.h"; break;
 case 168: res = "xar8.h"; break;
 case 169: res = "xar9.h"; break;
 case 170: res = "xar10.h"; break;
 case 171: res = "xar11.h"; break;
 case 172: res = "xar12.h"; break;
 case 173: res = "xar13.h"; break;
 case 174: res = "xar14.h"; break;
 case 175: res = "xar15.h"; break;
 case 180: res = "xssp.h"; break;
 case 181: res = "xsp.h"; break;
 case 182: res = "xdp.h"; break;
 case 183: res = "pdp"; break;
 case 184: res = "bsa01"; break;
 case 185: res = "bsa23"; break;
 case 186: res = "bsa45"; break;
 case 187: res = "bsa67"; break;
 case 188: res = "bsac"; break;
 case 189:
  res = "bkc";
  break;
 case 190: res = "bk03"; break;
 case 191: res = "bk47"; break;
 case 192: res = "ac0.g"; break;
 case 193: res = "ac1.g"; break;
 case 194: res = "ac2.g"; break;
 case 195: res = "ac3.g"; break;
 case 196: res = "ac4.g"; break;
 case 197: res = "ac5.g"; break;
 case 198: res = "ac6.g"; break;
 case 199: res = "ac7.g"; break;
 case 200: res = "ac8.g"; break;
 case 201: res = "ac9.g"; break;
 case 202: res = "ac10.g"; break;
 case 203: res = "ac11.g"; break;
 case 204: res = "ac12.g"; break;
 case 205: res = "ac13.g"; break;
 case 206: res = "ac14.g"; break;
 case 207: res = "ac15.g"; break;
 case 208: res = "ac16.g"; break;
 case 209: res = "ac17.g"; break;
 case 210: res = "ac18.g"; break;
 case 211: res = "ac19.g"; break;
 case 212: res = "ac20.g"; break;
 case 213: res = "ac21.g"; break;
 case 214: res = "ac22.g"; break;
 case 215: res = "ac23.g"; break;
 case 216: res = "ac24.g"; break;
 case 217: res = "ac25.g"; break;
 case 218: res = "ac26.g"; break;
 case 219: res = "ac27.g"; break;
 case 220: res = "ac28.g"; break;
 case 221: res = "ac29.g"; break;
 case 222: res = "ac30.g"; break;
 case 223: res = "ac31.g"; break;
 case 224: res = "st0"; break;
 case 225: res = "st1"; break;
 case 226: res = "st2"; break;
 case 227: res = "st3"; break;
 case 228: res = "st0_55"; break;
 case 229: res = "st1_55"; break;
 case 231: res = "st3_55"; break;
 case 232: res = "ier0"; break;
 case 233: res = "ier1"; break;
 case 234: res = "ifr0"; break;
 case 235: res = "ifr1"; break;
 case 236: res = "dbier0"; break;
 case 237: res = "dbier1"; break;
 case 238: res = "ivpd"; break;
 case 239: res = "ivph"; break;
 case 240: res = "rsa0.h"; break;
 case 241: res = "rsa1.h"; break;
 case 242: res = "rea0.h"; break;
 case 243: res = "rea1.h"; break;
 case 244: res = "bios"; break;
 case 245: res = "brs1"; break;
 case 246: res = "iir"; break;
 case 247: res = "ber"; break;
 case 248: res = "rsa0.l"; break;
 case 249: res = "rsa1.l"; break;
 case 250: res = "rea0.l"; break;
 case 251: res = "rea1.l"; break;
 case 252: res = "tsdr"; break;
 default: res = 
# 634 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 634 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 637 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 637 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }

 return res;
}


char *get_status_regs_and_bits(char *reg_arg, int reg_bit) {
 char *res = 
# 646 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 646 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;
 if (!strncmp (reg_arg, "ST0", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st0_dp07";
   break;
  case 1:
   res = "st0_dp08";
   break;
  case 2:
   res = "st0_dp09";
   break;
  case 3:
   res = "st0_dp10";
   break;
  case 4:
   res = "st0_dp11";
   break;
  case 5:
   res = "st0_dp12";
   break;
  case 6:
   res = "st0_dp13";
   break;
  case 7:
   res = "st0_dp14";
   break;
  case 8:
   res = "st0_dp15";
   break;
  case 9:
   res = "st0_acov1";
   break;
  case 10:
   res = "st0_acov0";
   break;
  case 11:
   res = "st0_carry";
   break;
  case 12:
   res = "st0_tc2";
   break;
  case 13:
   res = "st0_tc1";
   break;
  case 14:
   res = "st0_acov3";
   break;
  case 15:
   res = "st0_acov2";
   break;
  }
 } else if (!strncmp (reg_arg, "ST1", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st1_dr2_00";
   break;
  case 1:
   res = "st1_dr2_01";
   break;
  case 2:
   res = "st1_dr2_02";
   break;
  case 3:
   res = "st1_dr2_03";
   break;
  case 4:
   res = "st1_dr2_04";
   break;
  case 5:
   res = "st1_c54cm";
   break;
  case 6:
   res = "st1_frct";
   break;
  case 7:
   res = "st1_c16";
   break;
  case 8:
   res = "st1_sxmd";
   break;
  case 9:
   res = "st1_satd";
   break;
  case 10:
   res = "st1_m40";
   break;
  case 11:
   res = "st1_intm";
   break;
  case 12:
   res = "st1_hm";
   break;
  case 13:
   res = "st1_xf";
   break;
  case 14:
   res = "st1_cpl";
   break;
  case 15:
   res = "st1_braf";
   break;
  }
 } else if (!strncmp (reg_arg, "ST2", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st2_ar0lc";
   break;
  case 1:
   res = "st2_ar1lc";
   break;
  case 2:
   res = "st2_ar2lc";
   break;
  case 3:
   res = "st2_ar3lc";
   break;
  case 4:
   res = "st2_ar4lc";
   break;
  case 5:
   res = "st2_ar5lc";
   break;
  case 6:
   res = "st2_ar6lc";
   break;
  case 7:
   res = "st2_ar7lc";
   break;
  case 8:
   res = "st2_cdplc";
   break;
  case 9:
   res = "st2_govf";
   break;
  case 10:
   res = "st2_rdm";
   break;
  case 11:
   res = "st2_eallow";
   break;
  case 12:
   res = "st2_dbgm";
   break;
  case 13:
   res = "st2_xcnd";
   break;
  case 14:
   res = "st2_xcna";
   break;
  case 15:
   res = "st2_arms";
   break;
  }
 } else if (!strncmp (reg_arg, "ST3", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st3_sst";
   break;
  case 1:
   res = "st3_smul";
   break;
  case 2:
   res = "st3_clkoff";
   break;
  case 3:
   res = "st3_bptr";
   break;
  case 4:
   res = "st3_avis";
   break;
  case 5:
   res = "st3_sata";
   break;
  case 6:
   res = "st3_mpnmc";
   break;
  case 7:
   res = "st3_cberr";
   break;
  case 8:
   res = "st3_homp";
   break;
  case 9:
   res = "st3_homr";
   break;
  case 10:
   res = "st3_homx";
   break;
  case 11:
   res = "st3_homy";
   break;
  case 12:
   res = "st3_hint";
   break;
  case 13:
   res = "st3_caclr";
   break;
  case 14:
   res = "st3_caen";
   break;
  case 15:
   res = "st3_cafrz";
   break;
  }
 }

 if (res != 
# 853 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 853 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
         res = strdup (res);
 }

 return res;
}


char *get_reg_name_4(
# 861 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 861 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 862 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 862 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0:
  res = "ac0";
  break;
 case 1:
  res = "ac1";
  break;
 case 2:
  res = "ac2";
  break;
 case 3:
  res = "ac3";
  break;
 case 4:
  res = "ac4";
  break;
 case 5:
  res = "ac5";
  break;
 case 6:
  res = "ac6";
  break;
 case 7:
  res = "ac7";
  break;
 case 8:
  res = "t0";
  break;
 case 9:
  res = "t1";
  break;
 case 10:
  res = "t2";
  break;
 case 11:
  res = "t3";
  break;
 case 16:
  res = "ar0";
  break;
 case 17:
  res = "ar1";
  break;
 case 18:
  res = "ar2";
  break;
 case 19:
  res = "ar3";
  break;
 case 20:
  res = "ar4";
  break;
 case 21:
  res = "ar5";
  break;
 case 22:
  res = "ar6";
  break;
 case 23:
  res = "ar7";
  break;
 case 24:
  res = "ac0.l";
  break;
 case 25:
  res = "ac1.l";
  break;
 case 26:
  res = "ac2.l";
  break;
 case 27:
  res = "ac3.l";
  break;
 case 28:
  res = "ac4.l";
  break;
 case 29:
  res = "ac5.l";
  break;
 case 30:
  res = "ac6.l";
  break;
 case 31:
  res = "ac7.l";
  break;
 }
 return res? strdup (res): 
# 950 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                          ((void *)0)
# 950 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
}

char *get_opers(
# 953 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               unsigned char 
# 953 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   oper_byte) {
 switch (oper_byte) {
 case 0xE0u:
  return strdup ("overflow(ac0)");
 case 0xE1u:
  return strdup ("overflow(ac1)");
 case 0xE2u:
  return strdup ("overflow(ac2)");
 case 0xE3u:
  return strdup ("overflow(ac3)");
 case 0xE4u:
  return strdup ("tc1");
 case 0xE5u:
  return strdup ("tc2");
 case 0xE6u:
  return strdup ("carry");
 case 0xE7u:
  return strdup ("overflow(govf)");
 case 0xE8u:
  return strdup ("tc1 & tc2");
 case 0xE9u:
  return strdup ("tc1 & !tc2");
 case 0xEAu:
  return strdup ("!tc1 & tc2");
 case 0xEBu:
  return strdup ("!tc1 & !tc2");
 case 0xECu:
  return strdup ("word_mode");
 case 0xEDu:
  return strdup ("byte_mode");
 case 0xF0u:
  return strdup ("!overflow(ac0)");
 case 0xF1u:
  return strdup ("!overflow(ac1)");
 case 0xF2u:
  return strdup ("!overflow(ac2)");
 case 0xF3u:
  return strdup ("!overflow(ac3)");
 case 0xF4u:
  return strdup ("!tc1");
 case 0xF5u:
  return strdup ("!tc2");
 case 0xF6u:
  return strdup ("!carry");
 case 0xF7u:
  return strdup ("!overflow(govf)");
 case 0xF8u:
  return strdup ("tc1 | tc2");
 case 0xF9u:
  return strdup ("tc1 | !tc2");
 case 0xFAu:
  return strdup ("!tc1 | tc2");
 case 0xFBu:
  return strdup ("!tc1 | !tc2");
 case 0xFCu:
  return strdup ("tc1 ^ tc2");
 case 0xFDu:
  return strdup ("tc1 ^ !tc2");
 case 0xFEu:
  return strdup ("!tc1 ^ tc2");
 case 0xFFu:
  return strdup("!tc1 ^ !tc2");
 default: {
  
# 1016 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 unsigned char 
# 1016 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
     oper_type = oper_byte >> 5;
  if (oper_type != 6) {
   char *reg_name = get_reg_name_4 (oper_byte & 0x1F);
   switch (oper_type) {
   case 1u:
    return strcat_dup (reg_name, " != #0", 1);
   case 0u:
    return strcat_dup (reg_name, " == #0", 1);
   case 2u:
    return strcat_dup (reg_name, " < #0", 1);
   case 3u:
    return strcat_dup (reg_name, " >= #0", 1);
   case 4u:
    return strcat_dup (reg_name, " > #0", 1);
   case 5u:
    return strcat_dup (reg_name, " <= #0", 1);
   default:
    free (reg_name);
    return 
# 1034 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          ((void *)0)
# 1034 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
              ;
   }
  }
  char *reg_name = get_reg_name_1 ((oper_byte & 0xF) + 128);
  oper_type = (oper_byte >> 4) - 12;
  if (oper_type) {
   if (oper_type != 1) {
    free (reg_name);
    return 
# 1042 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          ((void *)0)
# 1042 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
              ;
   }
   return strcat_dup (reg_name, " != #0", 1);
  } else {


   return strcat_dup (reg_name, " == #0", 1);
  }
 }
 }
}

char *get_cmp_op(
# 1054 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                unsigned int 
# 1054 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                     idx) {
 const char *res = 
# 1055 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                  ((void *)0)
# 1055 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                      ;
 switch (idx) {
 case 0: res = "=="; break;
 case 1: res = "!="; break;
 case 2: res = "<"; break;
 case 3: res = ">="; break;
 }
 return res? strdup (res): 
# 1062 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                          ((void *)0)
# 1062 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
}

char *get_sim_reg (char *reg_arg, 
# 1065 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                 unsigned int 
# 1065 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                      ins_bits) {
 
# 1066 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
int 
# 1066 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
     code;
 char *res = 
# 1067 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 1067 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;
 char *aux;
 code = ins_bits & 3;
 switch (code) {
 case 0:
  if(reg_arg && strchr (reg_arg, 'w')) {
   if(code == 62) {
    return strdup ("sim0");
   }
   if(code == 63) {
    return strdup ("sim0");
   }
  }
  aux = get_reg_name_1 (ins_bits >> 2);
  res = strcat_dup ("@", aux, 2);
  break;
 case 2:
  aux = (char *)calloc (1, 50);
  if (!aux) {
   return 
# 1086 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
         ((void *)0)
# 1086 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
             ;
  }
  
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 aux
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 aux
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "@#0x%x", code
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
  res = aux;
  break;
 case 1:
 case 3:
  res = strdup ("<reserved>");
  break;
 }
 return res;
}
