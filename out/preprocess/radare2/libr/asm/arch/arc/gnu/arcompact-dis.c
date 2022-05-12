# 0 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
# 23 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
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
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
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
# 24 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 25 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 26 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4

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
# 27 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 1 3 4
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
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
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4

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
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4





  typedef int (*fprintf_ftype) (void *, const char*, ...) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__nonnull__ (2)));

enum dis_insn_type
{
  dis_noninsn,
  dis_nonbranch,
  dis_branch,
  dis_condbranch,
  dis_jsr,
  dis_condjsr,
  dis_dref,
  dis_dref2
};
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
typedef struct disassemble_info
{
  fprintf_ftype fprintf_func;
  void *stream;
  void *application_data;





  enum bfd_flavour flavour;

  enum bfd_architecture arch;

  unsigned long mach;

  enum bfd_endian endian;

  enum bfd_endian endian_code;




  void *insn_sets;




  asection *section;






  asymbol **symbols;

  int num_symbols;



  asymbol **symtab;
  int symtab_pos;
  int symtab_size;




  unsigned long flags;
# 125 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  void *private_data;






  int (*read_memory_func)
    (bfd_vma memaddr, bfd_byte *myaddr, unsigned int length,
     struct disassemble_info *dinfo);





  void (*memory_error_func)
    (int status, bfd_vma memaddr, struct disassemble_info *dinfo);


  void (*print_address_func)
    (bfd_vma addr, struct disassemble_info *dinfo);
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  int (* symbol_at_address_func)
    (bfd_vma addr, struct disassemble_info *dinfo);




  bfd_boolean (* symbol_is_valid)
    (asymbol *, struct disassemble_info *dinfo);


  bfd_byte *buffer;
  bfd_vma buffer_vma;
  unsigned int buffer_length;





  int bytes_per_line;






  int bytes_per_chunk;
  enum bfd_endian display_endian;



  unsigned int octets_per_byte;



  unsigned int skip_zeroes;







  unsigned int skip_zeroes_at_end;


  bfd_boolean disassembler_needs_relocs;
# 208 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  char insn_info_valid;
  char branch_delay_insns;

  char data_size;
  enum dis_insn_type insn_type;
  bfd_vma target;

  bfd_vma target2;


  char * disassembler_options;







  bfd_vma stop_vma;

} disassemble_info;





typedef struct
{
  const char **name;
  const char **description;
} disasm_options_t;




typedef int (*disassembler_ftype) (bfd_vma, disassemble_info *);

extern int print_insn_aarch64 (bfd_vma, disassemble_info *);
extern int print_insn_alpha (bfd_vma, disassemble_info *);
extern int print_insn_avr (bfd_vma, disassemble_info *);
extern int print_insn_bfin (bfd_vma, disassemble_info *);
extern int print_insn_big_arm (bfd_vma, disassemble_info *);
extern int print_insn_big_mips (bfd_vma, disassemble_info *);
extern int print_insn_big_nios2 (bfd_vma, disassemble_info *);
extern int print_insn_big_powerpc (bfd_vma, disassemble_info *);
extern int print_insn_big_score (bfd_vma, disassemble_info *);
extern int print_insn_cr16 (bfd_vma, disassemble_info *);
extern int print_insn_crx (bfd_vma, disassemble_info *);
extern int print_insn_d10v (bfd_vma, disassemble_info *);
extern int print_insn_d30v (bfd_vma, disassemble_info *);
extern int print_insn_dlx (bfd_vma, disassemble_info *);
extern int print_insn_epiphany (bfd_vma, disassemble_info *);
extern int print_insn_fr30 (bfd_vma, disassemble_info *);
extern int print_insn_frv (bfd_vma, disassemble_info *);
extern int print_insn_ft32 (bfd_vma, disassemble_info *);
extern int print_insn_h8300 (bfd_vma, disassemble_info *);
extern int print_insn_h8300h (bfd_vma, disassemble_info *);
extern int print_insn_h8300s (bfd_vma, disassemble_info *);
extern int print_insn_h8500 (bfd_vma, disassemble_info *);
extern int print_insn_lanai (bfd_vma, disassemble_info *);
extern int print_insn_hppa (bfd_vma, disassemble_info *);
extern int print_insn_i370 (bfd_vma, disassemble_info *);
extern int print_insn_i386 (bfd_vma, disassemble_info *);
extern int print_insn_i386_att (bfd_vma, disassemble_info *);
extern int print_insn_i386_intel (bfd_vma, disassemble_info *);
extern int print_insn_i860 (bfd_vma, disassemble_info *);
extern int print_insn_i960 (bfd_vma, disassemble_info *);
extern int print_insn_ia64 (bfd_vma, disassemble_info *);
extern int print_insn_ip2k (bfd_vma, disassemble_info *);
extern int print_insn_iq2000 (bfd_vma, disassemble_info *);
extern int print_insn_little_arm (bfd_vma, disassemble_info *);
extern int print_insn_little_mips (bfd_vma, disassemble_info *);
extern int print_insn_little_nios2 (bfd_vma, disassemble_info *);
extern int print_insn_little_powerpc (bfd_vma, disassemble_info *);
extern int print_insn_riscv (bfd_vma, disassemble_info *);
extern int print_insn_little_score (bfd_vma, disassemble_info *);
extern int print_insn_lm32 (bfd_vma, disassemble_info *);
extern int print_insn_m32c (bfd_vma, disassemble_info *);
extern int print_insn_m32r (bfd_vma, disassemble_info *);
extern int print_insn_m68hc11 (bfd_vma, disassemble_info *);
extern int print_insn_m68hc12 (bfd_vma, disassemble_info *);
extern int print_insn_m9s12x (bfd_vma, disassemble_info *);
extern int print_insn_m9s12xg (bfd_vma, disassemble_info *);
extern int print_insn_m68k (bfd_vma, disassemble_info *);
extern int print_insn_m88k (bfd_vma, disassemble_info *);
extern int print_insn_mcore (bfd_vma, disassemble_info *);
extern int print_insn_mep (bfd_vma, disassemble_info *);
extern int print_insn_metag (bfd_vma, disassemble_info *);
extern int print_insn_microblaze (bfd_vma, disassemble_info *);
extern int print_insn_mmix (bfd_vma, disassemble_info *);
extern int print_insn_mn10200 (bfd_vma, disassemble_info *);
extern int print_insn_mn10300 (bfd_vma, disassemble_info *);
extern int print_insn_moxie (bfd_vma, disassemble_info *);
extern int print_insn_msp430 (bfd_vma, disassemble_info *);
extern int print_insn_mt (bfd_vma, disassemble_info *);
extern int print_insn_nds32 (bfd_vma, disassemble_info *);
extern int print_insn_ns32k (bfd_vma, disassemble_info *);
extern int print_insn_or1k (bfd_vma, disassemble_info *);
extern int print_insn_pdp11 (bfd_vma, disassemble_info *);
extern int print_insn_pj (bfd_vma, disassemble_info *);
extern int print_insn_pru (bfd_vma, disassemble_info *);
extern int print_insn_rs6000 (bfd_vma, disassemble_info *);
extern int print_insn_s390 (bfd_vma, disassemble_info *);
extern int print_insn_sh (bfd_vma, disassemble_info *);
extern int print_insn_sh64 (bfd_vma, disassemble_info *);
extern int print_insn_sh64x_media (bfd_vma, disassemble_info *);
extern int print_insn_sparc (bfd_vma, disassemble_info *);
extern int print_insn_spu (bfd_vma, disassemble_info *);
extern int print_insn_tic30 (bfd_vma, disassemble_info *);
extern int print_insn_tic4x (bfd_vma, disassemble_info *);
extern int print_insn_tic54x (bfd_vma, disassemble_info *);
extern int print_insn_tic6x (bfd_vma, disassemble_info *);
extern int print_insn_tic80 (bfd_vma, disassemble_info *);
extern int print_insn_tilegx (bfd_vma, disassemble_info *);
extern int print_insn_tilepro (bfd_vma, disassemble_info *);
extern int print_insn_v850 (bfd_vma, disassemble_info *);
extern int print_insn_vax (bfd_vma, disassemble_info *);
extern int print_insn_visium (bfd_vma, disassemble_info *);
extern int print_insn_w65 (bfd_vma, disassemble_info *);
extern int print_insn_xc16x (bfd_vma, disassemble_info *);
extern int print_insn_xgate (bfd_vma, disassemble_info *);
extern int print_insn_xstormy16 (bfd_vma, disassemble_info *);
extern int print_insn_xtensa (bfd_vma, disassemble_info *);
extern int print_insn_z80 (bfd_vma, disassemble_info *);
extern int print_insn_z8001 (bfd_vma, disassemble_info *);
extern int print_insn_z8002 (bfd_vma, disassemble_info *);
extern int print_insn_rx (bfd_vma, disassemble_info *);
extern int print_insn_rl78 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g10 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g13 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g14 (bfd_vma, disassemble_info *);

extern disassembler_ftype arc_get_disassembler (bfd *);
extern disassembler_ftype cris_get_disassembler (bfd *);
extern disassembler_ftype rl78_get_disassembler (bfd *);

extern void print_aarch64_disassembler_options (FILE *);
extern void print_i386_disassembler_options (FILE *);
extern void print_mips_disassembler_options (FILE *);
extern void print_ppc_disassembler_options (FILE *);
extern void print_riscv_disassembler_options (FILE *);
extern void print_arm_disassembler_options (FILE *);
extern void print_arc_disassembler_options (FILE *);
extern void print_s390_disassembler_options (FILE *);
extern bfd_boolean aarch64_symbol_is_valid (asymbol *, struct disassemble_info *);
extern bfd_boolean arm_symbol_is_valid (asymbol *, struct disassemble_info *);
extern void disassemble_init_powerpc (struct disassemble_info *);
extern void disassemble_init_s390 (struct disassemble_info *);
extern const disasm_options_t *disassembler_options_powerpc (void);
extern const disasm_options_t *disassembler_options_arm (void);
extern const disasm_options_t *disassembler_options_s390 (void);


extern disassembler_ftype disassembler (bfd *);



extern void disassemble_init_for_target (struct disassemble_info * dinfo);


extern void disassembler_usage (FILE *);


extern char *remove_whitespace_and_extra_commas (char *);



extern int disassembler_options_cmp (const char *, const char *);


static inline char *
next_disassembler_option (char *options)
{
  char *opt = strchr (options, ',');
  if (opt != ((void *)0))
    opt++;
  return opt;
}
# 399 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
extern int buffer_read_memory
  (bfd_vma, bfd_byte *, unsigned int, struct disassemble_info *);



extern void perror_memory (int, bfd_vma, struct disassemble_info *);





extern void generic_print_address
  (bfd_vma, struct disassemble_info *);


extern int generic_symbol_at_address
  (bfd_vma, struct disassemble_info *);


extern bfd_boolean generic_symbol_is_valid
  (asymbol *, struct disassemble_info *);



extern void init_disassemble_info (struct disassemble_info *dinfo, void *stream,
       fprintf_ftype fprintf_func);

extern int print_insn_tricore (bfd_vma memaddr, struct disassemble_info *info);
# 29 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "project/radare2/libr/asm/arch/arc/gnu/arc.h" 1
# 62 "project/radare2/libr/asm/arch/arc/gnu/arc.h"

# 62 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
typedef unsigned int arc_insn;

struct arc_opcode {
  const char *syntax;
  unsigned long mask, value;
  int flags;
# 173 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  struct arc_opcode *next_asm;
  struct arc_opcode *next_dis;
# 186 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  unsigned long mask2,value2;
};

struct arc_operand_value {
  char *name;
  short value;
  unsigned char type;
  unsigned char flags;







};

struct arc_ext_operand_value {
  struct arc_ext_operand_value *next;
  struct arc_operand_value operand;
};



extern struct arc_ext_operand_value *arc_ext_operands;

struct arc_operand {

  unsigned char fmt;


  unsigned char bits;



  unsigned char shift;


  int flags;
# 364 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  arc_insn (*insert) (arc_insn insn, long *extend, const struct arc_operand *operand,
        int mods, const struct arc_operand_value *reg,
        long value, const char **errmsg);
# 392 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  long (*extract) (arc_insn *insn,
     const struct arc_operand *operand, int mods,
     const struct arc_operand_value **opval, int *invalid);
};
# 432 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
extern const struct arc_operand *arc_operands;
extern int arc_operand_count;

extern const struct arc_operand_value *arc_suffixes;
extern int arc_suffixes_count;

extern const struct arc_operand_value *arc_reg_names;
extern int arc_reg_names_count;

extern unsigned char *arc_operand_map;



extern int arc_cond_p;

extern int arc_mach_a4;
extern unsigned long arc_ld_ext_mask;
extern int arc_user_mode_only;


int arc_get_opcode_mach (int, int);

void arc_opcode_init_tables (int);
void arc_opcode_init_insert (void);
void arc_opcode_init_extract (void);
const struct arc_opcode *arc_opcode_lookup_asm (const char *);
const struct arc_opcode *arc_opcode_lookup_dis (unsigned int);
int arc_opcode_limm_p (long *);
const struct arc_operand_value *arc_opcode_lookup_suffix (const struct arc_operand *type, int value);
int arc_opcode_supported (const struct arc_opcode *);
int arc_opval_supported (const struct arc_operand_value *);
int arc_insn_not_jl (arc_insn);

extern char *arc_aux_reg_name (int);
extern struct arc_operand_value *get_ext_suffix (char *,char);

extern int ac_branch_or_jump_insn (arc_insn, int);
extern int ac_lpcc_insn (arc_insn);
extern int ac_constant_operand (const struct arc_operand *);
extern int ac_register_operand (const struct arc_operand *);
extern int ac_symbol_operand (const struct arc_operand *);
extern int ARC700_register_simd_operand (char);
extern int arc_operand_type (int);
extern int ac_add_reg_sdasym_insn (arc_insn);
extern int ac_get_load_sdasym_insn_type (arc_insn, int);
extern int ac_get_store_sdasym_insn_type (arc_insn, int);
extern int arc_limm_fixup_adjust (arc_insn);
extern int arc_test_wb (void);
# 30 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "project/radare2/libr/asm/arch/arc/gnu/arc-ext.h" 1
# 60 "project/radare2/libr/asm/arch/arc/gnu/arc-ext.h"
enum ExtOperType
{
  EXT_INSTRUCTION = 0,
  EXT_CORE_REGISTER = 1,
  EXT_AUX_REGISTER = 2,
  EXT_COND_CODE = 3,
  EXT_INSTRUCTION32 = 4,
  EXT_AC_INSTRUCTION = 4,
  EXT_REMOVE_CORE_REG = 5,
  EXT_LONG_CORE_REGISTER = 6,
  EXT_AUX_REGISTER_EXTENDED = 7,
  EXT_INSTRUCTION32_EXTENDED = 8,
  EXT_CORE_REGISTER_CLASS = 9
};


enum ExtReadWrite
{
  REG_INVALID,
  REG_READ,
  REG_WRITE,
  REG_READWRITE
};



extern void build_ARC_extmap (void* text_bfd);

extern enum ExtReadWrite arcExtMap_coreReadWrite (int regnum);
extern const char* arcExtMap_coreRegName (int regnum);
extern const char* arcExtMap_auxRegName (long regnum);
extern const char* arcExtMap_condCodeName (int code);
extern const char* arcExtMap_instName (int opcode, int insn, int* flags);

void dump_ARC_extmap (void);
# 31 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "project/radare2/libr/asm/arch/arc/gnu/arc-dis.h" 1
# 27 "project/radare2/libr/asm/arch/arc/gnu/arc-dis.h"
enum NullifyMode
{
  BR_exec_when_no_jump,
  BR_exec_always,
  BR_exec_when_jump
};

enum ARC_Debugger_OperandType
{
    ARC_UNDEFINED,
    ARC_LIMM,
    ARC_SHIMM,
    ARC_REGISTER,
    ARCOMPACT_REGISTER


};

enum Flow
{
  noflow,
  direct_jump,
  direct_call,
  indirect_jump,
  indirect_call,
  invalid_instr
};

enum { no_reg = 99 };
enum { allOperandsSize = 256 };

struct arcDisState
{
  void *_this;
  int instructionLen;
  void (*err)(void*, const char*);
  const char *(*coreRegName)(void*, int);
  const char *(*auxRegName)(void*, int);
  const char *(*condCodeName)(void*, int);
  const char *(*instName)(void*, int, int, int*);

  unsigned char* instruction;
  unsigned index;
  const char *comm[6];

  union {
    unsigned int registerNum;
    unsigned int shortimm;
    unsigned int longimm;
  } source_operand;
  enum ARC_Debugger_OperandType sourceType;

  int opWidth;
  int targets[4];

  unsigned int addresses[4];



  enum Flow flow;
  int register_for_indirect_jump;
  int ea_reg1, ea_reg2, _offset;
  int _cond, _opcode;
  unsigned long words[2];
  char *commentBuffer;
  char instrBuffer[40];
  char operandBuffer[allOperandsSize];
  char _ea_present;
  char _addrWriteBack;
  char _mem_load;
  char _load_len;
  enum NullifyMode nullifyMode;
  unsigned char commNum;
  unsigned char isBranch;
  unsigned char tcnt;
  unsigned char acnt;
};




int ARCompact_decodeInstr (bfd_vma address, disassemble_info* info);
# 32 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.h" 1
# 25 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.h"
void arc_print_disassembler_options (FILE *stream);

struct arcDisState
arcAnalyzeInstr(bfd_vma address,
                disassemble_info* info);

int ARCompact_decodeInstr (bfd_vma address, disassemble_info* info);
# 33 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 1 3 4
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/common.h" 1 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 1 3 4
# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 3 4

# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 3 4
typedef struct elf_internal_ehdr {
  unsigned char e_ident[16];
  bfd_vma e_entry;
  bfd_size_type e_phoff;
  bfd_size_type e_shoff;
  unsigned long e_version;
  unsigned long e_flags;
  unsigned short e_type;
  unsigned short e_machine;
  unsigned int e_ehsize;
  unsigned int e_phentsize;
  unsigned int e_phnum;
  unsigned int e_shentsize;
  unsigned int e_shnum;
  unsigned int e_shstrndx;
} Elf_Internal_Ehdr;



struct elf_internal_phdr {
  unsigned long p_type;
  unsigned long p_flags;
  bfd_vma p_offset;
  bfd_vma p_vaddr;
  bfd_vma p_paddr;
  bfd_vma p_filesz;
  bfd_vma p_memsz;
  bfd_vma p_align;
};

typedef struct elf_internal_phdr Elf_Internal_Phdr;



typedef struct elf_internal_shdr {
  unsigned int sh_name;
  unsigned int sh_type;
  bfd_vma sh_flags;
  bfd_vma sh_addr;
  bfd_size_type sh_size;
  bfd_size_type sh_entsize;
  unsigned long sh_link;
  unsigned long sh_info;
  file_ptr sh_offset;
  unsigned int sh_addralign;


  asection * bfd_section;
  unsigned char *contents;
} Elf_Internal_Shdr;



struct elf_internal_sym {
  bfd_vma st_value;
  bfd_vma st_size;
  unsigned long st_name;
  unsigned char st_info;
  unsigned char st_other;
  unsigned int st_shndx;
};

typedef struct elf_internal_sym Elf_Internal_Sym;



typedef struct elf_internal_note {
  unsigned long namesz;
  unsigned long descsz;
  unsigned long type;
  char * namedata;
  char * descdata;
  bfd_vma descpos;
} Elf_Internal_Note;



typedef struct elf_internal_rela {
  bfd_vma r_offset;
  bfd_vma r_info;
  bfd_vma r_addend;
} Elf_Internal_Rela;



typedef struct elf_internal_dyn {

  bfd_vma d_tag;
  union {

    bfd_vma d_val;
    bfd_vma d_ptr;
  } d_un;
} Elf_Internal_Dyn;



typedef struct elf_internal_verdef {
  unsigned short vd_version;
  unsigned short vd_flags;
  unsigned short vd_ndx;
  unsigned short vd_cnt;
  unsigned long vd_hash;
  unsigned long vd_aux;
  unsigned long vd_next;



  bfd *vd_bfd;
  const char *vd_nodename;
  struct elf_internal_verdef *vd_nextdef;
  struct elf_internal_verdaux *vd_auxptr;
  unsigned int vd_exp_refno;
} Elf_Internal_Verdef;



typedef struct elf_internal_verdaux {
  unsigned long vda_name;
  unsigned long vda_next;



  const char *vda_nodename;
  struct elf_internal_verdaux *vda_nextptr;
} Elf_Internal_Verdaux;



typedef struct elf_internal_verneed {
  unsigned short vn_version;
  unsigned short vn_cnt;
  unsigned long vn_file;
  unsigned long vn_aux;
  unsigned long vn_next;



  bfd *vn_bfd;
  const char *vn_filename;
  struct elf_internal_vernaux *vn_auxptr;
  struct elf_internal_verneed *vn_nextref;
} Elf_Internal_Verneed;



typedef struct elf_internal_vernaux {
  unsigned long vna_hash;
  unsigned short vna_flags;
  unsigned short vna_other;
  unsigned long vna_name;
  unsigned long vna_next;



  const char *vna_nodename;
  struct elf_internal_vernaux *vna_nextptr;
} Elf_Internal_Vernaux;




typedef struct elf_internal_versym {
  unsigned short vs_vers;
} Elf_Internal_Versym;


typedef struct
{
  unsigned short int si_boundto;
  unsigned short int si_flags;
} Elf_Internal_Syminfo;


typedef struct
{
  bfd_vma a_type;
  bfd_vma a_val;
} Elf_Internal_Auxv;





struct elf_segment_map
{

  struct elf_segment_map *next;

  unsigned long p_type;

  unsigned long p_flags;

  bfd_vma p_paddr;

  bfd_vma p_vaddr_offset;

  bfd_vma p_align;


  unsigned int p_flags_valid : 1;


  unsigned int p_paddr_valid : 1;


  unsigned int p_align_valid : 1;

  unsigned int includes_filehdr : 1;

  unsigned int includes_phdrs : 1;

  unsigned int count;

  asection *sections[1];
};
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/external.h" 1 3 4
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/external.h" 3 4
typedef struct {
  unsigned char e_ident[16];
  unsigned char e_type[2];
  unsigned char e_machine[2];
  unsigned char e_version[4];
  unsigned char e_entry[4];
  unsigned char e_phoff[4];
  unsigned char e_shoff[4];
  unsigned char e_flags[4];
  unsigned char e_ehsize[2];
  unsigned char e_phentsize[2];
  unsigned char e_phnum[2];
  unsigned char e_shentsize[2];
  unsigned char e_shnum[2];
  unsigned char e_shstrndx[2];
} Elf32_External_Ehdr;

typedef struct {
  unsigned char e_ident[16];
  unsigned char e_type[2];
  unsigned char e_machine[2];
  unsigned char e_version[4];
  unsigned char e_entry[8];
  unsigned char e_phoff[8];
  unsigned char e_shoff[8];
  unsigned char e_flags[4];
  unsigned char e_ehsize[2];
  unsigned char e_phentsize[2];
  unsigned char e_phnum[2];
  unsigned char e_shentsize[2];
  unsigned char e_shnum[2];
  unsigned char e_shstrndx[2];
} Elf64_External_Ehdr;



typedef struct {
  unsigned char p_type[4];
  unsigned char p_offset[4];
  unsigned char p_vaddr[4];
  unsigned char p_paddr[4];
  unsigned char p_filesz[4];
  unsigned char p_memsz[4];
  unsigned char p_flags[4];
  unsigned char p_align[4];
} Elf32_External_Phdr;

typedef struct {
  unsigned char p_type[4];
  unsigned char p_flags[4];
  unsigned char p_offset[8];
  unsigned char p_vaddr[8];
  unsigned char p_paddr[8];
  unsigned char p_filesz[8];
  unsigned char p_memsz[8];
  unsigned char p_align[8];
} Elf64_External_Phdr;



typedef struct {
  unsigned char sh_name[4];
  unsigned char sh_type[4];
  unsigned char sh_flags[4];
  unsigned char sh_addr[4];
  unsigned char sh_offset[4];
  unsigned char sh_size[4];
  unsigned char sh_link[4];
  unsigned char sh_info[4];
  unsigned char sh_addralign[4];
  unsigned char sh_entsize[4];
} Elf32_External_Shdr;

typedef struct {
  unsigned char sh_name[4];
  unsigned char sh_type[4];
  unsigned char sh_flags[8];
  unsigned char sh_addr[8];
  unsigned char sh_offset[8];
  unsigned char sh_size[8];
  unsigned char sh_link[4];
  unsigned char sh_info[4];
  unsigned char sh_addralign[8];
  unsigned char sh_entsize[8];
} Elf64_External_Shdr;



typedef struct {
  unsigned char st_name[4];
  unsigned char st_value[4];
  unsigned char st_size[4];
  unsigned char st_info[1];
  unsigned char st_other[1];
  unsigned char st_shndx[2];
} Elf32_External_Sym;

typedef struct {
  unsigned char st_name[4];
  unsigned char st_info[1];
  unsigned char st_other[1];
  unsigned char st_shndx[2];
  unsigned char st_value[8];
  unsigned char st_size[8];
} Elf64_External_Sym;

typedef struct {
  unsigned char est_shndx[4];
} Elf_External_Sym_Shndx;



typedef struct {
  unsigned char namesz[4];
  unsigned char descsz[4];
  unsigned char type[4];
  char name[1];
} Elf_External_Note;


typedef struct {
  unsigned char r_offset[4];
  unsigned char r_info[4];
} Elf32_External_Rel;

typedef struct {
  unsigned char r_offset[4];
  unsigned char r_info[4];
  unsigned char r_addend[4];
} Elf32_External_Rela;

typedef struct {
  unsigned char r_offset[8];
  unsigned char r_info[8];
} Elf64_External_Rel;

typedef struct {
  unsigned char r_offset[8];
  unsigned char r_info[8];
  unsigned char r_addend[8];
} Elf64_External_Rela;



typedef struct {
  unsigned char d_tag[4];
  union {
    unsigned char d_val[4];
    unsigned char d_ptr[4];
  } d_un;
} Elf32_External_Dyn;

typedef struct {
  unsigned char d_tag[8];
  union {
    unsigned char d_val[8];
    unsigned char d_ptr[8];
  } d_un;
} Elf64_External_Dyn;







typedef struct {
  unsigned char vd_version[2];
  unsigned char vd_flags[2];
  unsigned char vd_ndx[2];
  unsigned char vd_cnt[2];
  unsigned char vd_hash[4];
  unsigned char vd_aux[4];
  unsigned char vd_next[4];
} Elf_External_Verdef;



typedef struct {
  unsigned char vda_name[4];
  unsigned char vda_next[4];
} Elf_External_Verdaux;



typedef struct {
  unsigned char vn_version[2];
  unsigned char vn_cnt[2];
  unsigned char vn_file[4];
  unsigned char vn_aux[4];
  unsigned char vn_next[4];
} Elf_External_Verneed;



typedef struct {
  unsigned char vna_hash[4];
  unsigned char vna_flags[2];
  unsigned char vna_other[2];
  unsigned char vna_name[4];
  unsigned char vna_next[4];
} Elf_External_Vernaux;




typedef struct {
  unsigned char vs_vers[2];
} __attribute__ ((packed)) Elf_External_Versym;


typedef struct
{
  unsigned char si_boundto[2];
  unsigned char si_flags[2];
} Elf_External_Syminfo;



typedef struct
{
  unsigned char a_type[4];
  unsigned char a_val[4];
} Elf32_External_Auxv;

typedef struct
{
  unsigned char a_type[8];
  unsigned char a_val[8];
} Elf64_External_Auxv;
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 1 3 4
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
enum bfd_link_strip
{
  strip_none,
  strip_debugger,
  strip_some,
  strip_all
};



enum bfd_link_discard
{
  discard_sec_merge,

  discard_none,
  discard_l,
  discard_all
};




enum bfd_link_hash_table_type
  {
    bfd_link_generic_hash_table,
    bfd_link_elf_hash_table
  };




enum bfd_link_hash_type
{
  bfd_link_hash_new,
  bfd_link_hash_undefined,
  bfd_link_hash_undefweak,
  bfd_link_hash_defined,
  bfd_link_hash_defweak,
  bfd_link_hash_common,
  bfd_link_hash_indirect,
  bfd_link_hash_warning
};

enum bfd_link_common_skip_ar_aymbols
{
  bfd_link_common_skip_none,
  bfd_link_common_skip_text,
  bfd_link_common_skip_data,
  bfd_link_common_skip_all
};




struct bfd_link_hash_entry
{

  struct bfd_hash_entry root;


  enum bfd_link_hash_type type;


  union
    {


      struct
 {
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
   struct bfd_link_hash_entry *next;
   bfd *abfd;
   bfd *weak;
 } undef;

      struct
 {
   struct bfd_link_hash_entry *next;
   asection *section;
   bfd_vma value;
 } def;

      struct
 {
   struct bfd_link_hash_entry *next;
   struct bfd_link_hash_entry *link;
   const char *warning;
 } i;

      struct
 {
   struct bfd_link_hash_entry *next;
# 147 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
   struct bfd_link_hash_common_entry
     {
       unsigned int alignment_power;
       asection *section;
     } *p;
   bfd_size_type size;
 } c;
    } u;
};




struct bfd_link_hash_table
{

  struct bfd_hash_table table;




  const bfd_target *creator;


  struct bfd_link_hash_entry *undefs;

  struct bfd_link_hash_entry *undefs_tail;

  enum bfd_link_hash_table_type type;
};




extern struct bfd_link_hash_entry *bfd_link_hash_lookup
  (struct bfd_link_hash_table *, const char *, bfd_boolean create,
   bfd_boolean copy, bfd_boolean follow);





extern struct bfd_link_hash_entry *bfd_wrapped_link_hash_lookup
  (bfd *, struct bfd_link_info *, const char *, bfd_boolean,
   bfd_boolean, bfd_boolean);


extern void bfd_link_hash_traverse
  (struct bfd_link_hash_table *,
    bfd_boolean (*) (struct bfd_link_hash_entry *, void *),
    void *);


extern void bfd_link_add_undef
  (struct bfd_link_hash_table *, struct bfd_link_hash_entry *);


extern void bfd_link_repair_undef_list
  (struct bfd_link_hash_table *table);

struct bfd_sym_chain
{
  struct bfd_sym_chain *next;
  const char *name;
};



enum report_method
{



  RM_NOT_YET_SET = 0,
  RM_IGNORE,
  RM_GENERATE_WARNING,
  RM_GENERATE_ERROR
};




struct bfd_link_info
{

  unsigned int relocatable: 1;



  unsigned int emitrelocations: 1;




  unsigned int task_link: 1;


  unsigned int shared: 1;


  unsigned int symbolic: 1;



  unsigned int export_dynamic: 1;


  unsigned int static_link: 1;





  unsigned int traditional_format: 1;



  unsigned int optimize: 1;


  unsigned int allow_multiple_definition: 1;


  unsigned int allow_undefined_version: 1;



  unsigned int create_default_symver: 1;



  unsigned int default_imported_symver: 1;



  unsigned int keep_memory: 1;



  unsigned int notice_all: 1;



  unsigned int nocopyreloc: 1;


  unsigned int new_dtags: 1;



  unsigned int combreloc: 1;



  unsigned int eh_frame_hdr: 1;


  unsigned int strip_discarded: 1;


  unsigned int pie: 1;


  unsigned int executable : 1;



  unsigned int execstack: 1;



  unsigned int noexecstack: 1;


  unsigned int relro: 1;



  unsigned int execheap: 1;



  unsigned int noexecheap: 1;


  unsigned int warn_shared_textrel: 1;


  unsigned int gc_sections: 1;






  enum report_method unresolved_syms_in_objects;



  enum report_method unresolved_syms_in_shared_libs;


  enum bfd_link_strip strip;


  enum bfd_link_discard discard;



  enum bfd_link_common_skip_ar_aymbols common_skip_ar_aymbols;




  char wrap_char;


  const struct bfd_link_callbacks *callbacks;


  struct bfd_link_hash_table *hash;



  struct bfd_hash_table *keep_hash;




  struct bfd_hash_table *notice_hash;



  struct bfd_hash_table *wrap_hash;



  bfd *input_bfds;






  asection *create_object_symbols_section;



  struct bfd_sym_chain *gc_sym_list;


  void *base_file;



  const char *init_function;



  const char *fini_function;





  int relax_pass;




  int pei386_auto_import;




  int pei386_runtime_pseudo_reloc;


  unsigned int spare_dynamic_tags;


  bfd_vma flags;


  bfd_vma flags_1;


  bfd_vma relro_start, relro_end;
};
# 444 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_link_callbacks
{




  bfd_boolean (*add_archive_element)
    (struct bfd_link_info *, bfd *abfd, const char *name);






  bfd_boolean (*multiple_definition)
    (struct bfd_link_info *, const char *name,
     bfd *obfd, asection *osec, bfd_vma oval,
     bfd *nbfd, asection *nsec, bfd_vma nval);
# 473 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
  bfd_boolean (*multiple_common)
    (struct bfd_link_info *, const char *name,
     bfd *obfd, enum bfd_link_hash_type otype, bfd_vma osize,
     bfd *nbfd, enum bfd_link_hash_type ntype, bfd_vma nsize);






  bfd_boolean (*add_to_set)
    (struct bfd_link_info *, struct bfd_link_hash_entry *entry,
     bfd_reloc_code_real_type reloc, bfd *abfd, asection *sec, bfd_vma value);






  bfd_boolean (*constructor)
    (struct bfd_link_info *, bfd_boolean constructor, const char *name,
     bfd *abfd, asection *sec, bfd_vma value);







  bfd_boolean (*warning)
    (struct bfd_link_info *, const char *warning, const char *symbol,
     bfd *abfd, asection *section, bfd_vma address);





  bfd_boolean (*undefined_symbol)
    (struct bfd_link_info *, const char *name, bfd *abfd,
     asection *section, bfd_vma address, bfd_boolean fatal);
# 521 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
  bfd_boolean (*reloc_overflow)
    (struct bfd_link_info *, struct bfd_link_hash_entry *entry,
     const char *name, const char *reloc_name, bfd_vma addend,
     bfd *abfd, asection *section, bfd_vma address);






  bfd_boolean (*reloc_dangerous)
    (struct bfd_link_info *, const char *message,
     bfd *abfd, asection *section, bfd_vma address);






  bfd_boolean (*unattached_reloc)
    (struct bfd_link_info *, const char *name,
     bfd *abfd, asection *section, bfd_vma address);




  bfd_boolean (*notice)
    (struct bfd_link_info *, const char *name,
     bfd *abfd, asection *section, bfd_vma address);

  void (*einfo)
    (const char *fmt, ...);
};






enum bfd_link_order_type
{
  bfd_undefined_link_order,
  bfd_indirect_link_order,
  bfd_data_link_order,
  bfd_section_reloc_link_order,
  bfd_symbol_reloc_link_order
};




struct bfd_link_order
{

  struct bfd_link_order *next;

  enum bfd_link_order_type type;

  bfd_vma offset;

  bfd_size_type size;

  union
    {
      struct
 {






   asection *section;
 } indirect;
      struct
 {




   unsigned int size;

   bfd_byte *contents;
 } data;
      struct
 {



   struct bfd_link_order_reloc *p;
 } reloc;
    } u;
};
# 627 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_link_order_reloc
{

  bfd_reloc_code_real_type reloc;

  union
    {



      asection *section;


      const char *name;
    } u;






  bfd_vma addend;
};


extern struct bfd_link_order *bfd_new_link_order (bfd *, asection *);
# 661 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_elf_version_expr
{

  struct bfd_elf_version_expr *next;

  const char *pattern;

  const char *symbol;

  unsigned int symver : 1;

  unsigned int script : 1;




  unsigned int mask : 3;
};

struct bfd_elf_version_expr_head
{

  struct bfd_elf_version_expr *list;

  void *htab;

  struct bfd_elf_version_expr *remaining;

  unsigned int mask;
};



struct bfd_elf_version_deps
{

  struct bfd_elf_version_deps *next;

  struct bfd_elf_version_tree *version_needed;
};



struct bfd_elf_version_tree
{

  struct bfd_elf_version_tree *next;

  const char *name;

  unsigned int vernum;

  struct bfd_elf_version_expr_head globals;

  struct bfd_elf_version_expr_head locals;

  struct bfd_elf_version_deps *deps;

  unsigned int name_indx;

  int used;

  struct bfd_elf_version_expr *(*match)
    (struct bfd_elf_version_expr_head *head,
     struct bfd_elf_version_expr *prev, const char *sym);
};
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
typedef struct
{

  asymbol symbol;

  Elf_Internal_Sym internal_elf_sym;

  union
    {
      unsigned int hppa_arg_reloc;
      void *mips_extr;
      void *any;
    }
  tc_data;




  unsigned short version;

} elf_symbol_type;

struct elf_strtab_hash;
struct got_entry;
struct plt_entry;



struct elf_link_hash_entry
{
  struct bfd_link_hash_entry root;



  long indx;
# 106 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  long dynindx;
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  union gotplt_union
    {
      bfd_signed_vma refcount;
      bfd_vma offset;
      struct got_entry *glist;
      struct plt_entry *plist;
    } got;


  union gotplt_union plt;


  bfd_size_type size;


  unsigned int type : 8;


  unsigned int other : 8;


  unsigned int ref_regular : 1;

  unsigned int def_regular : 1;

  unsigned int ref_dynamic : 1;

  unsigned int def_dynamic : 1;

  unsigned int ref_regular_nonweak : 1;

  unsigned int dynamic_adjusted : 1;

  unsigned int needs_copy : 1;

  unsigned int needs_plt : 1;

  unsigned int non_elf : 1;

  unsigned int hidden : 1;

  unsigned int forced_local : 1;

  unsigned int dynamic : 1;

  unsigned int mark : 1;


  unsigned int non_got_ref : 1;



  unsigned int dynamic_def : 1;

  unsigned int dynamic_weak : 1;


  unsigned int pointer_equality_needed : 1;


  unsigned long dynstr_index;

  union
  {



    struct elf_link_hash_entry *weakdef;




    unsigned long elf_hash_value;
  } u;


  union
  {



    Elf_Internal_Verdef *verdef;



    struct bfd_elf_version_tree *vertree;
  } verinfo;

  struct
  {




    size_t size;
    bfd_boolean *used;


    struct elf_link_hash_entry *parent;
  } *vtable;
};
# 241 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
struct elf_link_local_dynamic_entry
{
  struct elf_link_local_dynamic_entry *next;


  bfd *input_bfd;


  long input_indx;


  long dynindx;


  Elf_Internal_Sym isym;
};

struct elf_link_loaded_list
{
  struct elf_link_loaded_list *next;
  bfd *abfd;
};


struct eh_cie_fde
{

  struct eh_cie_fde *cie_inf;
  unsigned int size;
  unsigned int offset;
  unsigned int new_offset;
  unsigned char fde_encoding;
  unsigned char lsda_encoding;
  unsigned char lsda_offset;
  unsigned int cie : 1;
  unsigned int removed : 1;
  unsigned int add_augmentation_size : 1;
  unsigned int add_fde_encoding : 1;
  unsigned int make_relative : 1;
  unsigned int make_lsda_relative : 1;
  unsigned int need_lsda_relative : 1;
  unsigned int per_encoding_relative : 1;
  unsigned int *set_loc;
};

struct eh_frame_sec_info
{
  unsigned int count;
  struct eh_cie_fde entry[1];
};

struct eh_frame_array_ent
{
  bfd_vma initial_loc;
  bfd_vma fde;
};

struct htab;

struct eh_frame_hdr_info
{
  struct htab *cies;
  asection *hdr_sec;
  unsigned int fde_count, array_count;
  struct eh_frame_array_ent *array;



  bfd_boolean table;
  bfd_boolean offsets_adjusted;
};



struct elf_link_hash_table
{
  struct bfd_link_hash_table root;



  bfd_boolean dynamic_sections_created;



  bfd_boolean is_relocatable_executable;




  bfd *dynobj;





  union gotplt_union init_got_refcount;
  union gotplt_union init_plt_refcount;



  union gotplt_union init_got_offset;
  union gotplt_union init_plt_offset;



  bfd_size_type dynsymcount;



  struct elf_strtab_hash *dynstr;



  bfd_size_type bucketcount;



  struct bfd_link_needed_list *needed;




  asection *text_index_section;
  asection *data_index_section;


  struct elf_link_hash_entry *hgot;


  struct elf_link_hash_entry *hplt;


  void *merge_info;


  struct stab_info stab_info;


  struct eh_frame_hdr_info eh_info;


  struct elf_link_local_dynamic_entry *dynlocal;



  struct bfd_link_needed_list *runpath;


  asection *tls_sec;
  bfd_size_type tls_size;


  struct elf_link_loaded_list *loaded;
};
# 422 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
struct sym_sec_cache
{
  bfd *abfd;
  unsigned long indx[32];
  unsigned int shndx[32];
};



struct elf_size_info {
  unsigned char sizeof_ehdr, sizeof_phdr, sizeof_shdr;
  unsigned char sizeof_rel, sizeof_rela, sizeof_sym, sizeof_dyn, sizeof_note;


  unsigned char sizeof_hash_entry;



  unsigned char int_rels_per_ext_rel;




  unsigned char arch_size, log_file_align;
  unsigned char elfclass, ev_current;
  int (*write_out_phdrs)
    (bfd *, const Elf_Internal_Phdr *, unsigned int);
  bfd_boolean
    (*write_shdrs_and_ehdr) (bfd *);
  bfd_boolean (*checksum_contents)
    (bfd * , void (*) (const void *, size_t, void *), void *);
  void (*write_relocs)
    (bfd *, asection *, void *);
  bfd_boolean (*swap_symbol_in)
    (bfd *, const void *, const void *, Elf_Internal_Sym *);
  void (*swap_symbol_out)
    (bfd *, const Elf_Internal_Sym *, void *, void *);
  bfd_boolean (*slurp_reloc_table)
    (bfd *, asection *, asymbol **, bfd_boolean);
  long (*slurp_symbol_table)
    (bfd *, asymbol **, bfd_boolean);
  void (*swap_dyn_in)
    (bfd *, const void *, Elf_Internal_Dyn *);
  void (*swap_dyn_out)
    (bfd *, const Elf_Internal_Dyn *, void *);




  void (*swap_reloc_in)
    (bfd *, const bfd_byte *, Elf_Internal_Rela *);


  void (*swap_reloc_out)
    (bfd *, const Elf_Internal_Rela *, bfd_byte *);




  void (*swap_reloca_in)
    (bfd *, const bfd_byte *, Elf_Internal_Rela *);


  void (*swap_reloca_out)
    (bfd *, const Elf_Internal_Rela *, bfd_byte *);
};







enum elf_reloc_type_class {
  reloc_class_normal,
  reloc_class_relative,
  reloc_class_plt,
  reloc_class_copy
};

struct elf_reloc_cookie
{
  Elf_Internal_Rela *rels, *rel, *relend;
  Elf_Internal_Sym *locsyms;
  bfd *abfd;
  size_t locsymcount;
  size_t extsymoff;
  struct elf_link_hash_entry **sym_hashes;
  int r_sym_shift;
  bfd_boolean bad_symtab;
};



typedef enum {
  ict_none,
  ict_irix5,
  ict_irix6
} irix_compat_t;


struct bfd_elf_special_section
{
  const char *prefix;
  int prefix_length;






  int suffix_length;
  int type;
  int attr;
};

enum action_discarded
  {
    COMPLAIN = 1,
    PRETEND = 2
  };

typedef asection * (*elf_gc_mark_hook_fn)
  (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
   struct elf_link_hash_entry *, Elf_Internal_Sym *);

struct elf_backend_data
{

  enum bfd_architecture arch;


  int elf_machine_code;


  int elf_osabi;


  bfd_vma maxpagesize;




  bfd_vma minpagesize;


  bfd_vma commonpagesize;


  flagword dynamic_sec_flags;



  void (*elf_info_to_howto)
    (bfd *, arelent *, Elf_Internal_Rela *);



  void (*elf_info_to_howto_rel)
    (bfd *, arelent *, Elf_Internal_Rela *);






  bfd_boolean (*elf_backend_sym_is_global)
    (bfd *, asymbol *);
# 600 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_object_p)
    (bfd *);




  void (*elf_backend_symbol_processing)
    (bfd *, asymbol *);



  bfd_boolean (*elf_backend_symbol_table_processing)
    (bfd *, elf_symbol_type *, unsigned int);



  int (*elf_backend_get_symbol_type)
    (Elf_Internal_Sym *, int);



  struct elf_link_hash_entry * (*elf_backend_archive_symbol_lookup)
    (bfd *, struct bfd_link_info *, const char *);



  bfd_boolean (*elf_backend_name_local_section_symbols)
    (bfd *);





  bfd_boolean (*elf_backend_section_processing)
    (bfd *, Elf_Internal_Shdr *);



  bfd_boolean (*elf_backend_section_from_shdr)
    (bfd *, Elf_Internal_Shdr *, const char *, int);



  bfd_boolean (*elf_backend_section_flags)
    (flagword *, const Elf_Internal_Shdr *);



  const struct bfd_elf_special_section * (*get_sec_type_attr)
    (bfd *, asection *);



  bfd_boolean (*elf_backend_section_from_phdr)
    (bfd *, Elf_Internal_Phdr *, int, const char *);




  bfd_boolean (*elf_backend_fake_sections)
    (bfd *, Elf_Internal_Shdr *, asection *);





  bfd_boolean (*elf_backend_section_from_bfd_section)
    (bfd *, asection *, int *retval);
# 677 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_add_symbol_hook)
    (bfd *abfd, struct bfd_link_info *info, Elf_Internal_Sym *,
     const char **name, flagword *flags, asection **sec, bfd_vma *value);



  bfd_boolean (*elf_backend_link_output_symbol_hook)
    (struct bfd_link_info *info, const char *, Elf_Internal_Sym *,
     asection *, struct elf_link_hash_entry *);
# 695 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_create_dynamic_sections)
    (bfd *abfd, struct bfd_link_info *info);



  bfd_boolean (*elf_backend_omit_section_dynsym)
    (bfd *output_bfd, struct bfd_link_info *info, asection *osec);
# 713 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*check_relocs)
    (bfd *abfd, struct bfd_link_info *info, asection *o,
     const Elf_Internal_Rela *relocs);





  bfd_boolean (*check_directives)
    (bfd *abfd, struct bfd_link_info *info);





  bfd_boolean (*as_needed_cleanup)
    (bfd *abfd, struct bfd_link_info *info);
# 743 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_adjust_dynamic_symbol)
    (struct bfd_link_info *info, struct elf_link_hash_entry *h);





  bfd_boolean (*elf_backend_always_size_sections)
    (bfd *output_bfd, struct bfd_link_info *info);
# 763 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_size_dynamic_sections)
    (bfd *output_bfd, struct bfd_link_info *info);



  void (*elf_backend_init_index_section)
    (bfd *output_bfd, struct bfd_link_info *info);
# 802 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  int (*elf_backend_relocate_section)
    (bfd *output_bfd, struct bfd_link_info *info, bfd *input_bfd,
     asection *input_section, bfd_byte *contents, Elf_Internal_Rela *relocs,
     Elf_Internal_Sym *local_syms, asection **local_sections);
# 814 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_finish_dynamic_symbol)
    (bfd *output_bfd, struct bfd_link_info *info,
     struct elf_link_hash_entry *h, Elf_Internal_Sym *sym);





  bfd_boolean (*elf_backend_finish_dynamic_sections)
    (bfd *output_bfd, struct bfd_link_info *info);



  void (*elf_backend_begin_write_processing)
    (bfd *, struct bfd_link_info *);




  void (*elf_backend_final_write_processing)
    (bfd *, bfd_boolean linker);




  int (*elf_backend_additional_program_headers)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_modify_segment_map)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_modify_program_headers)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*gc_mark_dynamic_ref)
    (struct elf_link_hash_entry *h, void *inf);



  elf_gc_mark_hook_fn gc_mark_hook;



  bfd_boolean (*gc_mark_extra_sections)
    (struct bfd_link_info *info, elf_gc_mark_hook_fn gc_mark_hook);




  bfd_boolean (*gc_sweep_hook)
    (bfd *abfd, struct bfd_link_info *info, asection *o,
     const Elf_Internal_Rela *relocs);




  void (*elf_backend_post_process_headers)
    (bfd *, struct bfd_link_info *);




  const char *(*elf_backend_print_symbol_all)
    (bfd *, void *, asymbol *);





  bfd_boolean (*elf_backend_output_arch_local_syms)
    (bfd *, struct bfd_link_info *, void *,
     bfd_boolean (*) (void *, const char *, Elf_Internal_Sym *, asection *,
        struct elf_link_hash_entry *));




  bfd_boolean (*elf_backend_output_arch_syms)
    (bfd *, struct bfd_link_info *, void *,
     bfd_boolean (*) (void *, const char *, Elf_Internal_Sym *, asection *,
        struct elf_link_hash_entry *));






  void (*elf_backend_copy_indirect_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *,
     struct elf_link_hash_entry *);



  void (*elf_backend_hide_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);



  bfd_boolean (*elf_backend_fixup_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *);


  void (*elf_backend_merge_symbol_attribute)
    (struct elf_link_hash_entry *, const Elf_Internal_Sym *, bfd_boolean,
     bfd_boolean);



  bfd_boolean (*elf_backend_ignore_undef_symbol)
    (struct elf_link_hash_entry *);



  bfd_boolean (*elf_backend_emit_relocs)
    (bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *,
     struct elf_link_hash_entry **);



  unsigned int (*elf_backend_count_relocs)
    (asection *, Elf_Internal_Rela *);



  bfd_boolean (*elf_backend_grok_prstatus)
    (bfd *, Elf_Internal_Note *);



  bfd_boolean (*elf_backend_grok_psinfo)
    (bfd *, Elf_Internal_Note *);


  char *(*elf_backend_write_core_note)
    (bfd *abfd, char *buf, int *bufsiz, int note_type, ...);


  void (* elf_backend_sprintf_vma)
    (bfd *, char *, bfd_vma);
  void (* elf_backend_fprintf_vma)
    (bfd *, void *, bfd_vma);


  enum elf_reloc_type_class (*elf_backend_reloc_type_class)
    (const Elf_Internal_Rela *);



  bfd_boolean (*elf_backend_discard_info)
    (bfd *, struct elf_reloc_cookie *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_ignore_discarded_relocs)
    (asection *);



  unsigned int (*action_discarded)
    (asection *);




  unsigned int (*elf_backend_eh_frame_address_size)
    (bfd *, asection *);




  bfd_boolean (*elf_backend_can_make_relative_eh_frame)
     (bfd *, struct bfd_link_info *, asection *);
  bfd_boolean (*elf_backend_can_make_lsda_relative_eh_frame)
     (bfd *, struct bfd_link_info *, asection *);





  bfd_byte (*elf_backend_encode_eh_address)
     (bfd *abfd, struct bfd_link_info *info,
      asection *osec, bfd_vma offset,
      asection *loc_sec, bfd_vma loc_offset,
      bfd_vma *encoded);



  bfd_boolean (*elf_backend_write_section)
    (bfd *, struct bfd_link_info *, asection *, bfd_byte *);



  irix_compat_t (*elf_backend_mips_irix_compat)
    (bfd *);

  reloc_howto_type *(*elf_backend_mips_rtype_to_howto)
    (unsigned int, bfd_boolean);



  const struct ecoff_debug_swap *elf_backend_ecoff_debug_swap;



  bfd *(*elf_backend_bfd_from_remote_memory)
     (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
      int (*target_read_memory) (bfd_vma vma, bfd_byte *myaddr, int len));



  bfd_vma (*plt_sym_val) (bfd_vma, const asection *, const arelent *);


  bfd_boolean (*common_definition) (Elf_Internal_Sym *);


  unsigned int (*common_section_index) (asection *);


  asection *(*common_section) (asection *);


  bfd_boolean (*merge_symbol) (struct bfd_link_info *,
          struct elf_link_hash_entry **,
          struct elf_link_hash_entry *,
          Elf_Internal_Sym *, asection **,
          bfd_vma *, unsigned int *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd *, asection **,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd *, asection **);


  bfd_boolean (*elf_hash_symbol) (struct elf_link_hash_entry *);


  bfd_boolean (*is_function_type) (unsigned int type);


  bfd_error_plugin_type link_order_error_handler;


  const char *relplt_name;


  int elf_machine_alt1;
  int elf_machine_alt2;

  const struct elf_size_info *s;


  const struct bfd_elf_special_section *special_sections;



  bfd_vma got_header_size;


  const char *obj_attrs_vendor;


  const char *obj_attrs_section;



  int (*obj_attrs_arg_type) (int);


  unsigned int obj_attrs_section_type;





  unsigned collect : 1;





  unsigned type_change_ok : 1;




  unsigned may_use_rel_p : 1;




  unsigned may_use_rela_p : 1;






  unsigned default_use_rela_p : 1;




  unsigned rela_normal : 1;



  unsigned sign_extend_vma : 1;

  unsigned want_got_plt : 1;
  unsigned plt_readonly : 1;
  unsigned want_plt_sym : 1;
  unsigned plt_not_loaded : 1;
  unsigned plt_alignment : 4;
  unsigned can_gc_sections : 1;
  unsigned can_refcount : 1;
  unsigned want_got_sym : 1;
  unsigned want_dynbss : 1;




  unsigned want_p_paddr_set_to_zero : 1;





  unsigned default_execstack : 1;
};




struct bfd_elf_section_data
{

  Elf_Internal_Shdr this_hdr;



  Elf_Internal_Shdr rel_hdr;



  Elf_Internal_Shdr *rel_hdr2;


  unsigned int rel_count;


  unsigned int rel_count2;


  int this_idx;



  int rel_idx;



  int rel_idx2;





  int dynindx;


  asection *linked_to;



  struct elf_link_hash_entry **rel_hashes;




  Elf_Internal_Rela *relocs;



  void *local_dynrel;


  asection *sreloc;

  union {

    const char *name;


    struct bfd_symbol *id;
  } group;



  asection *sec_group;



  asection *next_in_group;


  void *sec_info;
};
# 1250 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
struct elf_info_failed
{
  bfd_boolean failed;
  struct bfd_link_info *info;
  struct bfd_elf_version_tree *verdefs;
};




struct elf_assign_sym_version_info
{

  bfd *output_bfd;

  struct bfd_link_info *info;

  struct bfd_elf_version_tree *verdefs;

  bfd_boolean failed;
};




struct elf_find_verdep_info
{

  bfd *output_bfd;

  struct bfd_link_info *info;

  unsigned int vers;

  bfd_boolean failed;
};
# 1294 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
typedef struct obj_attribute
{
  int type;
  unsigned int i;
  char *s;
} obj_attribute;

typedef struct obj_attribute_list
{
  struct obj_attribute_list *next;
  int tag;
  obj_attribute attr;
} obj_attribute_list;
# 1318 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
enum
{
  Tag_NULL = 0,
  Tag_File = 1,
  Tag_Section = 2,
  Tag_Symbol = 3,
  Tag_compatibility = 32
};




struct elf_obj_tdata
{
  Elf_Internal_Ehdr elf_header[1];
  Elf_Internal_Shdr **elf_sect_ptr;
  Elf_Internal_Phdr *phdr;
  struct elf_segment_map *segment_map;
  struct elf_strtab_hash *strtab_ptr;
  int num_locals;
  int num_globals;
  unsigned int num_elf_sections;
  int num_section_syms;
  asymbol **section_syms;
  Elf_Internal_Shdr symtab_hdr;
  Elf_Internal_Shdr shstrtab_hdr;
  Elf_Internal_Shdr strtab_hdr;
  Elf_Internal_Shdr dynsymtab_hdr;
  Elf_Internal_Shdr dynstrtab_hdr;
  Elf_Internal_Shdr dynversym_hdr;
  Elf_Internal_Shdr dynverref_hdr;
  Elf_Internal_Shdr dynverdef_hdr;
  Elf_Internal_Shdr symtab_shndx_hdr;
  unsigned int symtab_section, shstrtab_section;
  unsigned int strtab_section, dynsymtab_section;
  unsigned int symtab_shndx_section;
  unsigned int dynversym_section, dynverdef_section, dynverref_section;
  file_ptr next_file_pos;
  bfd_vma gp;
  unsigned int gp_size;


  int core_signal;
  int core_pid;
  int core_lwpid;
  char* core_program;
  char* core_command;




  struct elf_link_hash_entry **sym_hashes;




  union
    {
      bfd_signed_vma *refcounts;
      bfd_vma *offsets;
      struct got_entry **ents;
    } local_got;
# 1389 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  const char *dt_name;


  bfd_size_type program_header_size;


  void *line_info;





  struct mips_elf_find_line *find_line_info;


  struct dwarf1_debug *dwarf1_find_line_info;


  void *dwarf2_find_line_info;




  asection **local_stubs;
  asection **local_call_stubs;



  asection *eh_frame_hdr;

  Elf_Internal_Shdr **group_sect_ptr;
  int num_group;


  unsigned int cverdefs;


  unsigned int cverrefs;


  unsigned int stack_flags;


  bfd_boolean relro;


  Elf_Internal_Verdef *verdef;


  Elf_Internal_Verneed *verref;



  asymbol *elf_data_symbol;
  asymbol *elf_text_symbol;
  asection *elf_data_section;
  asection *elf_text_section;




  enum dynamic_lib_link_class dyn_lib_class;



  bfd_boolean linker;






  bfd_boolean bad_symtab;


  bfd_boolean flags_init;


  void *symbuf;

  obj_attribute known_obj_attributes[2][32];
  obj_attribute_list *other_obj_attributes[2];


  bfd_boolean (*after_write_object_contents) (bfd *);
  void *after_write_object_contents_info;
};
# 1511 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
extern void _bfd_elf_swap_verdef_in
  (bfd *, const Elf_External_Verdef *, Elf_Internal_Verdef *);
extern void _bfd_elf_swap_verdef_out
  (bfd *, const Elf_Internal_Verdef *, Elf_External_Verdef *);
extern void _bfd_elf_swap_verdaux_in
  (bfd *, const Elf_External_Verdaux *, Elf_Internal_Verdaux *);
extern void _bfd_elf_swap_verdaux_out
  (bfd *, const Elf_Internal_Verdaux *, Elf_External_Verdaux *);
extern void _bfd_elf_swap_verneed_in
  (bfd *, const Elf_External_Verneed *, Elf_Internal_Verneed *);
extern void _bfd_elf_swap_verneed_out
  (bfd *, const Elf_Internal_Verneed *, Elf_External_Verneed *);
extern void _bfd_elf_swap_vernaux_in
  (bfd *, const Elf_External_Vernaux *, Elf_Internal_Vernaux *);
extern void _bfd_elf_swap_vernaux_out
  (bfd *, const Elf_Internal_Vernaux *, Elf_External_Vernaux *);
extern void _bfd_elf_swap_versym_in
  (bfd *, const Elf_External_Versym *, Elf_Internal_Versym *);
extern void _bfd_elf_swap_versym_out
  (bfd *, const Elf_Internal_Versym *, Elf_External_Versym *);

extern int _bfd_elf_section_from_bfd_section
  (bfd *, asection *);
extern char *bfd_elf_string_from_elf_section
  (bfd *, unsigned, unsigned);
extern char *bfd_elf_get_str_section
  (bfd *, unsigned);
extern Elf_Internal_Sym *bfd_elf_get_elf_syms
  (bfd *, Elf_Internal_Shdr *, size_t, size_t, Elf_Internal_Sym *, void *,
   Elf_External_Sym_Shndx *);
extern const char *bfd_elf_sym_name
  (bfd *, Elf_Internal_Shdr *, Elf_Internal_Sym *, asection *);

extern bfd_boolean _bfd_elf_copy_private_bfd_data
  (bfd *, bfd *);
extern bfd_boolean _bfd_elf_print_private_bfd_data
  (bfd *, void *);
extern void bfd_elf_print_symbol
  (bfd *, void *, asymbol *, bfd_print_symbol_type);

extern void _bfd_elf_sprintf_vma
  (bfd *, char *, bfd_vma);
extern void _bfd_elf_fprintf_vma
  (bfd *, void *, bfd_vma);

extern unsigned int _bfd_elf_eh_frame_address_size
  (bfd *, asection *);
extern bfd_byte _bfd_elf_encode_eh_address
  (bfd *abfd, struct bfd_link_info *info, asection *osec, bfd_vma offset,
   asection *loc_sec, bfd_vma loc_offset, bfd_vma *encoded);
extern bfd_boolean _bfd_elf_can_make_relative
  (bfd *input_bfd, struct bfd_link_info *info, asection *eh_frame_section);

extern enum elf_reloc_type_class _bfd_elf_reloc_type_class
  (const Elf_Internal_Rela *);
extern bfd_vma _bfd_elf_rela_local_sym
  (bfd *, Elf_Internal_Sym *, asection **, Elf_Internal_Rela *);
extern bfd_vma _bfd_elf_rel_local_sym
  (bfd *, Elf_Internal_Sym *, asection **, bfd_vma);
extern bfd_vma _bfd_elf_section_offset
  (bfd *, struct bfd_link_info *, asection *, bfd_vma);

extern unsigned long bfd_elf_hash
  (const char *);
extern unsigned long bfd_elf_gnu_hash
  (const char *);

extern bfd_reloc_status_type bfd_elf_generic_reloc
  (bfd *, arelent *, asymbol *, void *, asection *, bfd *, char **);
extern bfd_boolean bfd_elf_mkobject
  (bfd *);
extern bfd_boolean bfd_elf_mkcorefile
  (bfd *);
extern Elf_Internal_Shdr *bfd_elf_find_section
  (bfd *, char *);
extern bfd_boolean _bfd_elf_make_section_from_shdr
  (bfd *, Elf_Internal_Shdr *, const char *, int);
extern bfd_boolean _bfd_elf_make_section_from_phdr
  (bfd *, Elf_Internal_Phdr *, int, const char *);
extern struct bfd_hash_entry *_bfd_elf_link_hash_newfunc
  (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);
extern struct bfd_link_hash_table *_bfd_elf_link_hash_table_create
  (bfd *);
extern void _bfd_elf_link_hash_copy_indirect
  (struct bfd_link_info *, struct elf_link_hash_entry *,
   struct elf_link_hash_entry *);
extern void _bfd_elf_link_hash_hide_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);
extern bfd_boolean _bfd_elf_link_hash_fixup_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *);
extern bfd_boolean _bfd_elf_link_hash_table_init
  (struct elf_link_hash_table *, bfd *,
   struct bfd_hash_entry *(*)
     (struct bfd_hash_entry *, struct bfd_hash_table *, const char *),
   unsigned int);
extern bfd_boolean _bfd_elf_slurp_version_tables
  (bfd *, bfd_boolean);
extern bfd_boolean _bfd_elf_merge_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_match_sections_by_type
  (bfd *, const asection *, bfd *, const asection *);
extern bfd_boolean bfd_elf_is_group_section
  (bfd *, const struct bfd_section *);
extern void _bfd_elf_section_already_linked
  (bfd *, struct bfd_section *, struct bfd_link_info *);
extern void bfd_elf_set_group_contents
  (bfd *, asection *, void *);
extern asection *_bfd_elf_check_kept_section
  (asection *, struct bfd_link_info *);
extern void _bfd_elf_link_just_syms
  (asection *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_copy_private_header_data
  (bfd *, bfd *);
extern bfd_boolean _bfd_elf_copy_private_symbol_data
  (bfd *, asymbol *, bfd *, asymbol *);


extern bfd_boolean _bfd_elf_init_private_section_data
  (bfd *, asection *, bfd *, asection *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_copy_private_section_data
  (bfd *, asection *, bfd *, asection *);
extern bfd_boolean _bfd_elf_write_object_contents
  (bfd *);
extern bfd_boolean _bfd_elf_write_corefile_contents
  (bfd *);
extern bfd_boolean _bfd_elf_set_section_contents
  (bfd *, sec_ptr, const void *, file_ptr, bfd_size_type);
extern long _bfd_elf_get_symtab_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_symtab
  (bfd *, asymbol **);
extern long _bfd_elf_get_dynamic_symtab_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_dynamic_symtab
  (bfd *, asymbol **);
extern long _bfd_elf_get_synthetic_symtab
  (bfd *, long, asymbol **, long, asymbol **, asymbol **);
extern long _bfd_elf_get_reloc_upper_bound
  (bfd *, sec_ptr);
extern long _bfd_elf_canonicalize_reloc
  (bfd *, sec_ptr, arelent **, asymbol **);
extern long _bfd_elf_get_dynamic_reloc_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_dynamic_reloc
  (bfd *, arelent **, asymbol **);
extern asymbol *_bfd_elf_make_empty_symbol
  (bfd *);
extern void _bfd_elf_get_symbol_info
  (bfd *, asymbol *, symbol_info *);
extern bfd_boolean _bfd_elf_is_local_label_name
  (bfd *, const char *);
extern alent *_bfd_elf_get_lineno
  (bfd *, asymbol *);
extern bfd_boolean _bfd_elf_set_arch_mach
  (bfd *, enum bfd_architecture, unsigned long);
extern bfd_boolean _bfd_elf_find_nearest_line
  (bfd *, asection *, asymbol **, bfd_vma, const char **, const char **,
   unsigned int *);
extern bfd_boolean _bfd_elf_find_line
  (bfd *, asymbol **, asymbol *, const char **, unsigned int *);

extern bfd_boolean _bfd_elf_find_inliner_info
  (bfd *, const char **, const char **, unsigned int *);


extern int _bfd_elf_sizeof_headers
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_new_section_hook
  (bfd *, asection *);
extern bfd_boolean _bfd_elf_init_reloc_shdr
  (bfd *, Elf_Internal_Shdr *, asection *, bfd_boolean);
extern const struct bfd_elf_special_section *_bfd_elf_get_special_section
  (const char *, const struct bfd_elf_special_section *, unsigned int);
extern const struct bfd_elf_special_section *_bfd_elf_get_sec_type_attr
  (bfd *, asection *);


extern void _bfd_elf_no_info_to_howto
  (bfd *, arelent *, Elf_Internal_Rela *);

extern bfd_boolean bfd_section_from_shdr
  (bfd *, unsigned int shindex);
extern bfd_boolean bfd_section_from_phdr
  (bfd *, Elf_Internal_Phdr *, int);

extern int _bfd_elf_symbol_from_bfd_symbol
  (bfd *, asymbol **);

extern asection *bfd_section_from_r_symndx
  (bfd *, struct sym_sec_cache *, asection *, unsigned long);
extern asection *bfd_section_from_elf_index
  (bfd *, unsigned int);
extern struct bfd_strtab_hash *_bfd_elf_stringtab_init
  (void);

extern struct elf_strtab_hash * _bfd_elf_strtab_init
  (void);
extern void _bfd_elf_strtab_free
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_add
  (struct elf_strtab_hash *, const char *, bfd_boolean);
extern void _bfd_elf_strtab_addref
  (struct elf_strtab_hash *, bfd_size_type);
extern void _bfd_elf_strtab_delref
  (struct elf_strtab_hash *, bfd_size_type);
extern void _bfd_elf_strtab_clear_all_refs
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_size
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_offset
  (struct elf_strtab_hash *, bfd_size_type);
extern bfd_boolean _bfd_elf_strtab_emit
  (bfd *, struct elf_strtab_hash *);
extern void _bfd_elf_strtab_finalize
  (struct elf_strtab_hash *);

extern bfd_boolean _bfd_elf_discard_section_eh_frame
  (bfd *, struct bfd_link_info *, asection *,
   bfd_boolean (*) (bfd_vma, void *), struct elf_reloc_cookie *);
extern bfd_boolean _bfd_elf_discard_section_eh_frame_hdr
  (bfd *, struct bfd_link_info *);
extern bfd_vma _bfd_elf_eh_frame_section_offset
  (bfd *, struct bfd_link_info *, asection *, bfd_vma);
extern bfd_boolean _bfd_elf_write_section_eh_frame
  (bfd *, struct bfd_link_info *, asection *, bfd_byte *);
extern bfd_boolean _bfd_elf_write_section_eh_frame_hdr
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_maybe_strip_eh_frame_hdr
  (struct bfd_link_info *);

extern bfd_boolean _bfd_elf_merge_symbol
  (bfd *, struct bfd_link_info *, const char *, Elf_Internal_Sym *,
   asection **, bfd_vma *, unsigned int *,
   struct elf_link_hash_entry **, bfd_boolean *,
   bfd_boolean *, bfd_boolean *, bfd_boolean *);

extern bfd_boolean _bfd_elf_hash_symbol (struct elf_link_hash_entry *);

extern bfd_boolean _bfd_elf_add_default_symbol
  (bfd *, struct bfd_link_info *, struct elf_link_hash_entry *,
   const char *, Elf_Internal_Sym *, asection **, bfd_vma *,
   bfd_boolean *, bfd_boolean);

extern bfd_boolean _bfd_elf_export_symbol
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_link_find_version_dependencies
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_link_assign_sym_version
  (struct elf_link_hash_entry *, void *);

extern long _bfd_elf_link_lookup_local_dynindx
  (struct bfd_link_info *, bfd *, long);
extern bfd_boolean _bfd_elf_compute_section_file_positions
  (bfd *, struct bfd_link_info *);
extern void _bfd_elf_assign_file_positions_for_relocs
  (bfd *);
extern file_ptr _bfd_elf_assign_file_position_for_section
  (Elf_Internal_Shdr *, file_ptr, bfd_boolean);

extern bfd_boolean _bfd_elf_validate_reloc
  (bfd *, arelent *);

extern bfd_boolean _bfd_elf_link_create_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_link_omit_section_dynsym
  (bfd *, struct bfd_link_info *, asection *);
extern bfd_boolean _bfd_elf_create_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_create_got_section
  (bfd *, struct bfd_link_info *);
extern struct elf_link_hash_entry *_bfd_elf_define_linkage_sym
  (bfd *, struct bfd_link_info *, asection *, const char *);
extern void _bfd_elf_init_1_index_section
  (bfd *, struct bfd_link_info *);
extern void _bfd_elf_init_2_index_sections
  (bfd *, struct bfd_link_info *);

extern bfd_boolean _bfd_elfcore_make_pseudosection
  (bfd *, char *, size_t, ufile_ptr);
extern char *_bfd_elfcore_strndup
  (bfd *, char *, size_t);

extern Elf_Internal_Rela *_bfd_elf_link_read_relocs
  (bfd *, asection *, void *, Elf_Internal_Rela *, bfd_boolean);

extern bfd_boolean _bfd_elf_link_size_reloc_section
  (bfd *, Elf_Internal_Shdr *, asection *);

extern bfd_boolean _bfd_elf_link_output_relocs
  (bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *,
   struct elf_link_hash_entry **);

extern bfd_boolean _bfd_elf_fix_symbol_flags
  (struct elf_link_hash_entry *, struct elf_info_failed *);

extern bfd_boolean _bfd_elf_adjust_dynamic_symbol
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_adjust_dynamic_copy
  (struct elf_link_hash_entry *, asection *);

extern bfd_boolean _bfd_elf_link_sec_merge_syms
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_dynamic_symbol_p
  (struct elf_link_hash_entry *, struct bfd_link_info *, bfd_boolean);

extern bfd_boolean _bfd_elf_symbol_refs_local_p
  (struct elf_link_hash_entry *, struct bfd_link_info *, bfd_boolean);

extern bfd_boolean bfd_elf_match_symbols_in_sections
  (asection *, asection *, struct bfd_link_info *);

extern void bfd_elf_perform_complex_relocation
  (bfd * output_bfd __attribute__ ((__unused__)),
   struct bfd_link_info * info,
   bfd * input_bfd,
   asection * input_section,
   bfd_byte * contents,
   Elf_Internal_Rela * rel,
   Elf_Internal_Sym * local_syms,
   asection ** local_sections);

extern bfd_boolean _bfd_elf_setup_sections
  (bfd *);

extern void _bfd_elf_set_osabi (bfd * , struct bfd_link_info *);

extern const bfd_target *bfd_elf32_object_p
  (bfd *);
extern const bfd_target *bfd_elf32_core_file_p
  (bfd *);
extern char *bfd_elf32_core_file_failing_command
  (bfd *);
extern int bfd_elf32_core_file_failing_signal
  (bfd *);
extern bfd_boolean bfd_elf32_core_file_matches_executable_p
  (bfd *, bfd *);

extern bfd_boolean bfd_elf32_swap_symbol_in
  (bfd *, const void *, const void *, Elf_Internal_Sym *);
extern void bfd_elf32_swap_symbol_out
  (bfd *, const Elf_Internal_Sym *, void *, void *);
extern void bfd_elf32_swap_reloc_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf32_swap_reloc_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf32_swap_reloca_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf32_swap_reloca_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf32_swap_phdr_in
  (bfd *, const Elf32_External_Phdr *, Elf_Internal_Phdr *);
extern void bfd_elf32_swap_phdr_out
  (bfd *, const Elf_Internal_Phdr *, Elf32_External_Phdr *);
extern void bfd_elf32_swap_dyn_in
  (bfd *, const void *, Elf_Internal_Dyn *);
extern void bfd_elf32_swap_dyn_out
  (bfd *, const Elf_Internal_Dyn *, void *);
extern long bfd_elf32_slurp_symbol_table
  (bfd *, asymbol **, bfd_boolean);
extern bfd_boolean bfd_elf32_write_shdrs_and_ehdr
  (bfd *);
extern int bfd_elf32_write_out_phdrs
  (bfd *, const Elf_Internal_Phdr *, unsigned int);
extern bfd_boolean bfd_elf32_checksum_contents
  (bfd * , void (*) (const void *, size_t, void *), void *);
extern void bfd_elf32_write_relocs
  (bfd *, asection *, void *);
extern bfd_boolean bfd_elf32_slurp_reloc_table
  (bfd *, asection *, asymbol **, bfd_boolean);

extern const bfd_target *bfd_elf64_object_p
  (bfd *);
extern const bfd_target *bfd_elf64_core_file_p
  (bfd *);
extern char *bfd_elf64_core_file_failing_command
  (bfd *);
extern int bfd_elf64_core_file_failing_signal
  (bfd *);
extern bfd_boolean bfd_elf64_core_file_matches_executable_p
  (bfd *, bfd *);

extern bfd_boolean bfd_elf64_swap_symbol_in
  (bfd *, const void *, const void *, Elf_Internal_Sym *);
extern void bfd_elf64_swap_symbol_out
  (bfd *, const Elf_Internal_Sym *, void *, void *);
extern void bfd_elf64_swap_reloc_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf64_swap_reloc_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf64_swap_reloca_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf64_swap_reloca_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf64_swap_phdr_in
  (bfd *, const Elf64_External_Phdr *, Elf_Internal_Phdr *);
extern void bfd_elf64_swap_phdr_out
  (bfd *, const Elf_Internal_Phdr *, Elf64_External_Phdr *);
extern void bfd_elf64_swap_dyn_in
  (bfd *, const void *, Elf_Internal_Dyn *);
extern void bfd_elf64_swap_dyn_out
  (bfd *, const Elf_Internal_Dyn *, void *);
extern long bfd_elf64_slurp_symbol_table
  (bfd *, asymbol **, bfd_boolean);
extern bfd_boolean bfd_elf64_write_shdrs_and_ehdr
  (bfd *);
extern int bfd_elf64_write_out_phdrs
  (bfd *, const Elf_Internal_Phdr *, unsigned int);
extern bfd_boolean bfd_elf64_checksum_contents
  (bfd * , void (*) (const void *, size_t, void *), void *);
extern void bfd_elf64_write_relocs
  (bfd *, asection *, void *);
extern bfd_boolean bfd_elf64_slurp_reloc_table
  (bfd *, asection *, asymbol **, bfd_boolean);

extern struct elf_link_hash_entry *_bfd_elf_archive_symbol_lookup
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_elf_link_add_symbols
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_add_dynamic_entry
  (struct bfd_link_info *, bfd_vma, bfd_vma);

extern bfd_boolean bfd_elf_link_record_dynamic_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *);

extern int bfd_elf_link_record_local_dynamic_symbol
  (struct bfd_link_info *, bfd *, long);

extern void bfd_elf_link_mark_dynamic_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *,
   Elf_Internal_Sym *);

extern bfd_boolean _bfd_elf_close_and_cleanup
  (bfd *);

extern bfd_boolean _bfd_elf_common_definition
  (Elf_Internal_Sym *);

extern unsigned int _bfd_elf_common_section_index
  (asection *);

extern asection *_bfd_elf_common_section
  (asection *);

extern void _bfd_dwarf2_cleanup_debug_info
  (bfd *);

extern bfd_reloc_status_type _bfd_elf_rel_vtable_reloc_fn
  (bfd *, arelent *, struct bfd_symbol *, void *,
   asection *, bfd *, char **);

extern bfd_boolean bfd_elf_final_link
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_mark_dynamic_ref_symbol
  (struct elf_link_hash_entry *h, void *inf);

extern bfd_boolean bfd_elf_gc_sections
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_record_vtinherit
  (bfd *, asection *, struct elf_link_hash_entry *, bfd_vma);

extern bfd_boolean bfd_elf_gc_record_vtentry
  (bfd *, asection *, struct elf_link_hash_entry *, bfd_vma);

extern asection *_bfd_elf_gc_mark_hook
  (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
   struct elf_link_hash_entry *, Elf_Internal_Sym *);

extern bfd_boolean _bfd_elf_gc_mark
  (struct bfd_link_info *, asection *,
   asection * (*) (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
     struct elf_link_hash_entry *, Elf_Internal_Sym *));

extern bfd_boolean bfd_elf_gc_common_finalize_got_offsets
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_common_final_link
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_reloc_symbol_deleted_p
  (bfd_vma, void *);

extern struct elf_segment_map * _bfd_elf_make_dynamic_segment
  (bfd *, asection *);

extern bfd_boolean _bfd_elf_map_sections_to_segments
  (bfd *, struct bfd_link_info *);

extern bfd_boolean _bfd_elf_is_function_type (unsigned int);


extern char *elfcore_write_note
  (bfd *, char *, int *, const char *, int, const void *, int);
extern char *elfcore_write_prpsinfo
  (bfd *, char *, int *, const char *, const char *);
extern char *elfcore_write_prstatus
  (bfd *, char *, int *, long, int, const void *);
extern char * elfcore_write_pstatus
  (bfd *, char *, int *, long, int, const void *);
extern char *elfcore_write_prfpreg
  (bfd *, char *, int *, const void *, int);
extern char *elfcore_write_prxfpreg
  (bfd *, char *, int *, const void *, int);
extern char *elfcore_write_lwpstatus
  (bfd *, char *, int *, long, int, const void *);

extern bfd *_bfd_elf32_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma, bfd_byte *, int));
extern bfd *_bfd_elf64_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma, bfd_byte *, int));

extern bfd_vma bfd_elf_obj_attr_size (bfd *);
extern void bfd_elf_set_obj_attr_contents (bfd *, bfd_byte *, bfd_vma);
extern int bfd_elf_get_obj_attr_int (bfd *, int, int);
extern void bfd_elf_add_obj_attr_int (bfd *, int, int, unsigned int);


extern void bfd_elf_add_obj_attr_string (bfd *, int, int, const char *);


extern void bfd_elf_add_obj_attr_compat (bfd *, int, unsigned int,
      const char *);



extern char *_bfd_elf_attr_strdup (bfd *, const char *);
extern void _bfd_elf_copy_obj_attributes (bfd *, bfd *);
extern int _bfd_elf_obj_attrs_arg_type (bfd *, int, int);
extern void _bfd_elf_parse_attributes (bfd *, Elf_Internal_Shdr *);
extern bfd_boolean _bfd_elf_merge_object_attributes (bfd *, bfd *);


extern asection _bfd_elf_large_com_section;



extern bfd_boolean _sh_elf_set_mach_from_flags
  (bfd *);
# 34 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2
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
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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








# 12 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 244 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 1 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
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
# 255 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
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
# 35 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 2






# 40 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
static bfd_vma bfd_getm32 (unsigned int);
static bfd_vma bfd_getm32_ac (unsigned int) 
# 41 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                                           __attribute__ ((__unused__))
# 41 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                                           ;
# 273 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
static short int enable_simd = 0;
static short int enable_insn_stream = 0;


static const char *
core_reg_name(struct arcDisState *state, int val)
{
 if (state->coreRegName) {
  return (*state->coreRegName) (state->_this, val);
 }
 return 0;
}

static const char *
aux_reg_name(struct arcDisState *state, int val)
{
 if (state->auxRegName) {
  return (*state->auxRegName) (state->_this, val);
 }
 return 0;
}

static const char *
cond_code_name(struct arcDisState *state, int val)
{
 if (state->condCodeName) {
  return (*state->condCodeName) (state->_this, val);
 }
 return 0;
}

static const char *
instruction_name(struct arcDisState *state, int op1, int op2, int *flags)
{
 if (state->instName) {
  return (*state->instName) (state->_this, op1, op2, flags);
 }
 return 0;
}

static void
mwerror(struct arcDisState *state, const char *msg)
{
 if (state->err != 0) {
  (*state->err) (state->_this, (msg));
 }
}

static const char *
post_address(struct arcDisState *state, int addr)
{
  static char id[3*(sizeof(state->addresses) / sizeof((state->addresses)[0]))];
  unsigned int j, i = state->acnt;
  if (i < (sizeof(state->addresses) / sizeof((state->addresses)[0]))) {
    state->addresses[i] = addr;
    ++state->acnt;
    j = i*3;
    id[j+0] = '@';
    id[j+1] = '0'+i;
    id[j+2] = 0;
    return id+j;
  }
  return "";
}

static void
my_sprintf (struct arcDisState *state, char *buf, const char*format, ...)
{
  char *bp;
  const char *p;
  int size, leading_zero, regMap[2];
  va_list ap;

  
# 346 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin_va_start(
# 346 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ap
# 346 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 ,
# 346 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 format
# 346 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 346 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                    ;
  bp = buf;
  *bp = 0;
  p = format;
  regMap[0] = 0;
  regMap[1] = 0;
  while (1) {
   switch (*p++) {
   case 0: goto DOCOMM;
   default:
    *bp++ = p[-1];
    break;
   case '%':
    size = 0;
    leading_zero = 0;
   RETRY:;
    switch (*p++) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': {

     size = p[-1] - '0';
     if (size == 0) {
      leading_zero = 1;
     }
     while (*p >= '0' && *p <= '9') {
      size = size * 10 + *p - '0', p++;
     }
     goto RETRY;
    }


 case 'h':
   {
     unsigned u = 
# 387 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                 __builtin_va_arg(
# 387 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ap
# 387 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                 ,
# 387 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 int
# 387 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                 )
# 387 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;






     if (u > 65536) {



       
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___sprintf_chk (
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 0, __builtin_object_size (
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0), 
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "0x%08x",u
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      )
# 398 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;

     } else {
      
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___sprintf_chk (
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 0, __builtin_object_size (
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "0x%x", u
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     )
# 401 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     }
     bp = bp+strlen(bp);
   }
   break;
 case 'X': case 'x':
   {
     int val = 
# 408 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 408 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 408 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 408 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 408 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 408 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     if (size != 0) {
      if (leading_zero) {
       
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___sprintf_chk (
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 0, __builtin_object_size (
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0), 
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "%0*x", size, val
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      )
# 411 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                     ;
      } else {
       
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___sprintf_chk (
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 0, __builtin_object_size (
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0), 
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "%*x", size, val
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      )
# 413 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                    ;
      }
     } else {
      
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___sprintf_chk (
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 0, __builtin_object_size (
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%x", val
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     )
# 416 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     }
     bp = bp+strlen(bp);
   }
   break;
 case 'd':
   {
     int val = 
# 423 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 423 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 423 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 423 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 423 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 423 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     if (size != 0) {
      
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___sprintf_chk (
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 0, __builtin_object_size (
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%*d", size, val
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     )
# 425 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                   ;
     } else {
      
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___sprintf_chk (
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 0, __builtin_object_size (
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%d", val
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     )
# 427 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     }
     bp = bp+strlen(bp);
   }
   break;
 case 'r':
   {

     int val = 
# 435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;



     switch (val)
       {
  case 26: 
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """gp"
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 441 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((26)<32)?0:1] |= 1<<((26)-(((26)<32)?0:32)); break;;
  case 27: 
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """fp"
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 442 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((27)<32)?0:1] |= 1<<((27)-(((27)<32)?0:32)); break;;
  case 28: 
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """sp"
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 443 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((28)<32)?0:1] |= 1<<((28)-(((28)<32)?0:32)); break;;
  case 29: 
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """ilink1"
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 444 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((29)<32)?0:1] |= 1<<((29)-(((29)<32)?0:32)); break;;
  case 30: 
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """ilink2"
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 445 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((30)<32)?0:1] |= 1<<((30)-(((30)<32)?0:32)); break;;
  case 31: 
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """blink"
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 446 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((31)<32)?0:1] |= 1<<((31)-(((31)<32)?0:32)); break;;
  case 60: 
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """lp_count"
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 447 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((60)<32)?0:1] |= 1<<((60)-(((60)<32)?0:32)); break;;
  case 63: 
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___sprintf_chk (
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0, __builtin_object_size (
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 bp
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 """pcl"
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 448 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ; regMap[((63)<32)?0:1] |= 1<<((63)-(((63)<32)?0:32)); break;;
       default:
  {
    const char *ext;
    ext = core_reg_name(state, val);
    if (ext) {
     
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___sprintf_chk (
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 0, __builtin_object_size (
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    "%s", ext
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    )
# 454 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ;
    } else {
     
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___sprintf_chk (
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 0, __builtin_object_size (
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    "r%d", val
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    )
# 456 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
    }
  }break;
       }
     bp = bp+strlen(bp);
   } break;

 case 'a':
   {

     int val = 
# 466 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 466 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 466 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 466 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 466 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 466 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     char *ret;
     ret = arc_aux_reg_name(val);
     if (ret) {
      
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___sprintf_chk (
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 0, __builtin_object_size (
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     bp
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0), 
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%s", ret
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     )
# 470 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     } else {
      const char *ext;
      ext = aux_reg_name (state, val);
      if (ext) {
       
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___sprintf_chk (
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 0, __builtin_object_size (
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      bp
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0), 
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "%s", ext
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      )
# 475 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ;
      } else {
       my_sprintf (state, bp, "%h", val);
      }
       }

     bp = bp+strlen(bp);
   }
   break;
 case 's':
   {
     
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___sprintf_chk (
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 0, __builtin_object_size (
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    "%s",
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin_va_arg(
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    ap
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    ,
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    char*
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    ))
# 486 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                     ;
     bp = bp+strlen(bp);
   }
   break;
 case '*':
   {





        
# 497 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin_va_arg(
# 497 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ap
# 497 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       ,
# 497 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       int
# 497 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       )
# 497 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                     ;
        break;





   }


 case 'S':
   {
     int val = 
# 509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ;

     
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___sprintf_chk (
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 0, __builtin_object_size (
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    "vr%d",val
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    )
# 511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     bp = bp+strlen(bp);
     break;
   }
 case 'I':
   {
     int val = 
# 517 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 517 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 517 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 517 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 517 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 517 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ;

     
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___sprintf_chk (
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 0, __builtin_object_size (
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    "i%d",val
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    )
# 519 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ;
     bp = bp+strlen(bp);
     break;
   }
 case 'D':
   {
     int val = 
# 525 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              __builtin_va_arg(
# 525 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              ap
# 525 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              ,
# 525 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
              int
# 525 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
              )
# 525 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ;

     
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___sprintf_chk (
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 0, __builtin_object_size (
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    bp
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    "dr%d",val
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    )
# 527 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
     bp = bp+strlen(bp);
     break;
   }

 default:
   fprintf(
# 533 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
          __stderrp
# 533 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                ,"?? format %c\n",p[-1]);
   break;
 }
   }
  }

 DOCOMM:
  *bp = 0;
  
# 541 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin_va_end(
# 541 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ap
# 541 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 )
# 541 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
            ;
}

static const char *condName[] =
{

  "" , "z" , "nz" , "p" , "n" , "c" , "nc" , "v" ,
  "nv" , "gt" , "ge" , "lt" , "le" , "hi" , "ls" , "pnz",
  "ss" , "sc"

};

static void
write_instr_name_(struct arcDisState *state,
    const char *instrName,
    int cond,
    int condCodeIsPartOfName,
    int flag,
    int signExtend,
    int addrWriteBack,
    int directMem)
{
 if (!instrName) {
  return;
 }
 
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strncpy_chk (
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
state->instrBuffer
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
instrName, sizeof (state->instrBuffer) - 1
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
state->instrBuffer
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 566 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                                                        ;
 if (cond > 0) {
  int condlim = 0;
  const char *cc = 0;
  if (!condCodeIsPartOfName) {
   
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  state->instrBuffer
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  "."
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  state->instrBuffer
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 571 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                  ;
  }
  condlim = 18;
  if (cond < condlim) {
   cc = condName[cond];
  } else {
   cc = cond_code_name (state, cond);
  }
  if (!cc) {
   cc = "???";
  }
  
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___strcat_chk (
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 state->instrBuffer
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 cc
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , __builtin_object_size (
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 state->instrBuffer
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0))
# 582 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                ;
    }
    if (flag) {
     
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___strcat_chk (
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    state->instrBuffer
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    ".f"
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , __builtin_object_size (
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    state->instrBuffer
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0))
# 585 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                     ;
    }
    if (state->nullifyMode) {
     if (strstr (state->instrBuffer, ".d") == 
# 588 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                                             ((void *)0)
# 588 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                                 ) {
      
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     state->instrBuffer
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ".d"
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     state->instrBuffer
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                      ;
     }
    }
    if (signExtend) {
     
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___strcat_chk (
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    state->instrBuffer
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    ".x"
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , __builtin_object_size (
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    state->instrBuffer
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0))
# 593 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                     ;
    }
    switch (addrWriteBack) {
    case 1: 
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           __builtin___strcat_chk (
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           state->instrBuffer
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , 
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           ".a"
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , __builtin_object_size (
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           state->instrBuffer
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , 2 > 1 ? 1 : 0))
# 596 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                           ; break;
    case 2: 
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           __builtin___strcat_chk (
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           state->instrBuffer
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , 
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           ".ab"
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , __builtin_object_size (
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           state->instrBuffer
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , 2 > 1 ? 1 : 0))
# 597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                            ; break;
    case 3: 
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           __builtin___strcat_chk (
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           state->instrBuffer
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , 
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           ".as"
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , __builtin_object_size (
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
           state->instrBuffer
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           , 2 > 1 ? 1 : 0))
# 598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                            ; break;
  }
  if (directMem) {
   
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  state->instrBuffer
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  ".di"
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  state->instrBuffer
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 601 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                    ;
  }
}






enum
{
  op_BC = 0, op_BLC = 1, op_LD = 2, op_ST = 3, op_MAJOR_4 = 4,

  op_MAJOR_5 = 5, op_MAJOR_6 = 6, op_SIMD=9, op_LD_ADD = 12, op_ADD_SUB_SHIFT = 13,

  op_ADD_MOV_CMP = 14, op_S = 15, op_LD_S = 16, op_LDB_S = 17,
  op_LDW_S = 18, op_LDWX_S = 19, op_ST_S = 20, op_STB_S = 21,
  op_STW_S = 22, op_Su5 = 23, op_SP = 24, op_GP = 25, op_Pcl = 26,
  op_MOV_S = 27, op_ADD_CMP = 28, op_BR_S = 29, op_B_S = 30, op_BL_S = 31
};

extern disassemble_info tm_print_insn_info;





static bfd_vma
bfd_getm32 (data)
     unsigned int data;
{
   bfd_vma value = 0;

   value = ((data & 0xff00) | (data & 0xff)) << 16;
   value |= ((data & 0xff0000) | (data & 0xff000000)) >> 16;
   return value;
}





static bfd_vma
bfd_getm32_ac (data)
     unsigned int data;
{
   bfd_vma value = 0;

   value = ((data & 0xff) << 8 | (data & 0xff00) >> 8);
   return value;
}





static int
sign_extend (int value, int bits)
{
 if (((value) & (1 << ((bits - 1))))) {
  value |= (0xffffffff << bits);
 }
 return value;
}
# 677 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
static int
dsmOneArcInst (bfd_vma addr, struct arcDisState *state, disassemble_info * info)
{

  int subopcode, mul;
  int condCodeIsPartOfName=0;
  int decodingClass;
  const char *instrName;
  int fieldAisReg=1, fieldBisReg=1, fieldCisReg=1;
  int fieldA=0, fieldB=0, fieldC=0;
  int flag=0, cond=0, is_shimm=0, is_limm=0;
  int signExtend=0, addrWriteBack=0, directMem=0;
  int is_linked=0;
  int offset=0;
  int usesAuxReg = 0;
  int usesSimdRegA= 0, usesSimdRegB=0, usesSimdRegC=0,simd_scale_u8=-1;
  int flags = !0x00000000;
  char formatString[60];

  state->nullifyMode = BR_exec_when_no_jump;
  state->isBranch = 0;

  state->_mem_load = 0;
  state->_ea_present = 0;
  state->_load_len = 0;
  state->ea_reg1 = no_reg;
  state->ea_reg2 = no_reg;
  state->_offset = 0;

  state->sourceType = ARC_UNDEFINED;


  if ((info->endian == BFD_ENDIAN_LITTLE) && (state->instructionLen == 4)) {
   state->words[0] = bfd_getm32 (state->words[0]);
  }

  if (state->instructionLen == 4)
  {
   if (!(offset += 4, state->words[0])) {
    return 0;
   }

   state->_opcode = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (31))) >> ((27)+(sizeof((state->words[0]))*8-1 - (31)))));
  }
  else
  {

    if (!(offset += 2, state->words[0])) {
     return 0;
    }

    state->_opcode = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (15))) >> ((11)+(sizeof((state->words[0]))*8-1 - (15)))));
  }

  instrName = 0;
  decodingClass = 0;
  mul = 0;
  condCodeIsPartOfName=0;
  state->commNum = 0;
  state->tcnt = 0;
  state->acnt = 0;
  state->flow = noflow;
# 748 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  switch (state->_opcode)
  {
    case op_BC:

      instrName = "b";
      decodingClass = 13;
      condCodeIsPartOfName = 1;
      state->isBranch = 1;
      break;

    case op_BLC:

      decodingClass = 9;
      state->isBranch = 1;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((16)+(sizeof(state->words[0])*8-1 - (16)))))
      {
 case 0:
  if (!instrName) {
   instrName = "bl";
  }
  decodingClass = 13;
  condCodeIsPartOfName = 1;
  break;
 case 1:
   switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (3))) >> ((0)+(sizeof(state->words[0])*8-1 - (3)))))
   {
     case 0: instrName = "breq"; break;
     case 1: instrName = "brne"; break;
     case 2: instrName = "brlt"; break;
     case 3: instrName = "brge"; break;
     case 4: instrName = "brlo"; break;
     case 5: instrName = "brhs"; break;
     case 14: instrName = "bbit0"; break;
     case 15: instrName = "bbit1"; break;
     default:
       instrName = "??? (0[3])";
       state->flow = invalid_instr;
       break;
   }
   break;
 default:
   instrName = "??? (0[3])";
   state->flow = invalid_instr;
   break;
      }
      break;

    case op_LD:

      decodingClass = 6;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (8))) >> ((7)+(sizeof(state->words[0])*8-1 - (8)))))
      {
 case 0: instrName = "ld"; state->_load_len = 4; break;
 case 1: instrName = "ldb"; state->_load_len = 1; break;
 case 2: instrName = "ldw"; state->_load_len = 2; break;
 default:
   instrName = "??? (0[3])";
   state->flow = invalid_instr;
   break;
      }
      break;

    case op_ST:

      decodingClass = 7;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (2))) >> ((1)+(sizeof(state->words[0])*8-1 - (2)))))
      {
 case 0: instrName = "st"; break;
 case 1: instrName = "stb"; break;
   case 2: instrName = "stw"; break;
 default:
   instrName = "??? (2[3])";
   state->flow = invalid_instr;
   break;
      }
      break;

    case op_MAJOR_4:

      decodingClass = 0;
      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (21))) >> ((16)+(sizeof(state->words[0])*8-1 - (21))));
      switch (subopcode)
      {
        case 0: instrName = "add"; break;
        case 1: instrName = "adc"; break;
        case 2: instrName = "sub"; break;
        case 3: instrName = "sbc"; break;
        case 4: instrName = "and"; break;
        case 5: instrName = "or"; break;
        case 6: instrName = "bic"; break;
        case 7: instrName = "xor"; break;
      case 8: instrName = "max"; break;
      case 9: instrName = "min"; break;
      case 10:
 {
   if(state->words[0] == 0x264a7000)
     {
       instrName = "nop";
       decodingClass = 26;
     }
   else
     {
       instrName = "mov";
       decodingClass = 12;
     }
   break;
 }
      case 11: instrName = "tst"; decodingClass = 2; break;
      case 12: instrName = "cmp"; decodingClass = 2; break;
      case 13: instrName = "rcmp"; decodingClass = 2; break;
      case 14: instrName = "rsub"; break;
      case 15: instrName = "bset"; break;
      case 16: instrName = "bclr"; break;
      case 17: instrName = "btst"; decodingClass = 2; break;
      case 18: instrName = "bxor"; break;
      case 19: instrName = "bmsk"; break;
      case 20: instrName = "add1"; break;
      case 21: instrName = "add2"; break;
      case 22: instrName = "add3"; break;
      case 23: instrName = "sub1"; break;
      case 24: instrName = "sub2"; break;
      case 25: instrName = "sub3"; break;
      case 30: instrName = "mpyw"; break;
      case 31: instrName = "mpyuw"; break;
        case 32:
        case 33:
   instrName = "j";
        case 34:
        case 35:
  if (!instrName) {
   instrName = "jl";
  }
  decodingClass = 4;
  condCodeIsPartOfName = 1;
  state->isBranch = 1;
  break;
        case 40:
   instrName = "lp";
   decodingClass = 11;
   condCodeIsPartOfName = 1;
          state->isBranch = 1;
   break;
        case 41: instrName = "flag"; decodingClass = 3; break;
        case 42: instrName = "lr"; decodingClass = 10; break;
        case 43: instrName = "sr"; decodingClass = 8; break;
        case 47:
   decodingClass = 1;
          switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((0)+(sizeof(state->words[0])*8-1 - (5)))))
   {
   case 0: instrName = "asl"; break;
   case 1: instrName = "asr"; break;
   case 2: instrName = "lsr"; break;
   case 3: instrName = "ror"; break;
   case 4: instrName = "rrc"; break;
   case 5: instrName = "sexb"; break;
   case 6: instrName = "sexw"; break;
   case 7: instrName = "extb"; break;
   case 8: instrName = "extw"; break;
   case 9: instrName = "abs"; break;
   case 10: instrName = "not"; break;
   case 11: instrName = "rlc"; break;
   case 12: instrName = "ex";


     decodingClass = 34;
     break;


   case 16: instrName = "llock"; decodingClass = 34; break;
   case 17: instrName = "scond"; decodingClass = 34; break;


   case 63:
     decodingClass = 26;
     switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (26))) >> ((24)+(sizeof(state->words[0])*8-1 - (26)))))
       {
       case 1 : instrName = "sleep"; decodingClass = 32; break;
       case 2 :
        if ((info->mach) == 8) {
         instrName = "trap0";
        } else {
         instrName = "swi";
        }
        break;
       case 3:

        if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))) == 1) {
         instrName = "sync";
        }

        break;
       case 4 : instrName = "rtie" ; break;
       case 5 : instrName = "brk"; break;
       default:

  instrName = "???";
  state->flow=invalid_instr;
  break;
       }
     break;
   }
   break;
      }

      if (!instrName)
      {
        subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (21))) >> ((17)+(sizeof(state->words[0])*8-1 - (21))));
 decodingClass = 5;
 switch (subopcode)
     {
   case 24: instrName = "ld"; state->_load_len = 4; break;
   case 25: instrName = "ldb"; state->_load_len = 1; break;
   case 26: instrName = "ldw"; state->_load_len = 2; break;
   default:
     instrName = "??? (0[3])";
     state->flow = invalid_instr;
     break;
 }
      }
      break;

    case op_MAJOR_5:

      decodingClass = 0;
      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (21))) >> ((16)+(sizeof(state->words[0])*8-1 - (21))));
      switch (subopcode)
      {
 case 0: instrName = "asl"; break;
 case 1: instrName = "lsr"; break;
 case 2: instrName = "asr"; break;
 case 3: instrName = "ror"; break;
 case 4: instrName = "mul64"; mul =1; decodingClass = 2; break;
 case 5: instrName = "mulu64"; mul =1; decodingClass = 2; break;


      case 6: instrName = "adds" ;break;

      case 7: instrName = "subs"; break;
      case 8: instrName = "divaw"; break;
      case 0xA: instrName = "asls"; break;
      case 0xB: instrName = "asrs"; break;
      case 0x28: instrName = "addsdw";break;
      case 0x29: instrName = "subsdw"; break;

      case 47:
 switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((0)+(sizeof(state->words[0])*8-1 - (5)))))
   {
   case 0: instrName = "swap"; decodingClass = 1; break;
   case 1: instrName = "norm"; decodingClass = 1; break;

   case 2: instrName = "sat16"; decodingClass = 1; break;
   case 3: instrName = "rnd16"; decodingClass = 1; break;
   case 4: instrName = "abssw"; decodingClass = 1; break;
   case 5: instrName = "abss"; decodingClass = 1; break;
   case 6: instrName = "negsw"; decodingClass = 1; break;
   case 7: instrName = "negs"; decodingClass = 1; break;

   case 8: instrName = "normw"; decodingClass = 1; break;


   case 9: instrName = "swape"; decodingClass = 1; break;


   default:
     instrName = "???";
     state->flow =invalid_instr;
     break;

   }
 break;
      default:
 instrName = "??? (2[3])";
 state->flow = invalid_instr;
 break;
      }
    break;


  case op_MAJOR_6:
      decodingClass = 44;
      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((0)+(sizeof(state->words[0])*8-1 - (5))));
      switch (subopcode)
        {
 case 26: instrName = "rtsc"; break;
        default:
   instrName = "??? (2[3])";
   state->flow = invalid_instr;
   break;
 }
    break;



  case op_SIMD:

    if (enable_simd)
      {
 decodingClass = 42;
 subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((17)+(sizeof(state->words[0])*8-1 - (23))));

 switch (subopcode)
   {

   case 68:
     instrName = "vld32";
     decodingClass = 37;
     usesSimdRegA=1;
     usesSimdRegB=2;
     usesSimdRegC=0;
     simd_scale_u8 = 2;
     break;

   case 72:
     instrName = "vld64";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 3;
     break;

   case 74:
     instrName = "vld64w";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 3;
     break;

   case 70:
     instrName = "vld32wl";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 2;
     break;

   case 66:
     instrName = "vld32wh";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 2;
     break;

   case 76:
     instrName = "vld128";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 4;
     break;

   case 78:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vld128r";
    decodingClass = 38;
    usesSimdRegA = 1;
    usesSimdRegB = usesSimdRegC = 0;
    break;
  default:
    instrName = "SIMD";
    state->flow = invalid_instr;
  }
     }
     break;
   case 71:
     instrName = "vst16_0";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 81:
     instrName = "vst16_1";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 67:
     instrName = "vst16_2";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 75:
     instrName = "vst16_3";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 83:
     instrName = "vst16_4";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 89:
     instrName = "vst16_5";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 91:
     instrName = "vst16_6";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 93:
     instrName = "vst16_7";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 1;
     break;

   case 69:
     instrName = "vst32_0";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 2;
     break;

   case 82:
     instrName = "vst32_2";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 2;
     break;

   case 86:
     instrName = "vst32_4";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 2;
     break;

   case 88:
     instrName = "vst32_6";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 2;
     break;

   case 73:
     instrName = "vst64";
     decodingClass = 37 ;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 3;
     break;

   case 77:
     instrName = "vst128";
     decodingClass = 37;
     usesSimdRegA = 1;
     usesSimdRegB = 2;
     usesSimdRegC = 0;
     simd_scale_u8 = 4;
     break;

   case 79:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vst128r";
    decodingClass = 38;
    usesSimdRegA = 1;
    usesSimdRegB = usesSimdRegC = 0;
    break;

  default:
    instrName = "SIMD";
    state->flow = invalid_instr;
  }

     }
     break;
   case 80:
     instrName = "vmvw";
     usesSimdRegA = usesSimdRegB = 1;
     usesSimdRegC = 0;
     decodingClass = 39;
     break;

   case 84:
     instrName = "vmvzw";
     decodingClass = 39;
     usesSimdRegA = usesSimdRegB = 1;
     usesSimdRegC = 0;
     break;

   case 90:
     instrName = "vmovw";
     decodingClass = 39;
     usesSimdRegA = 1;
     usesSimdRegB = usesSimdRegC = 0;
     break;

   case 94:
     instrName = "vmovzw";
     decodingClass = 39;
     usesSimdRegA = 1;
     usesSimdRegB = usesSimdRegC = 0;
     break;

   case 85:
     instrName = "vmvaw";
     decodingClass = 39;
     usesSimdRegA = usesSimdRegB = 1;
     usesSimdRegC = 0;
     break;

   case 95:
     instrName = "vmovaw";
     decodingClass = 39;
     usesSimdRegA = 1;
     usesSimdRegB = usesSimdRegC = 0;
     break;

   case 10:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vaddw"; decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC =1;
    break;

  case 1:
    instrName = "vaddaw"; decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC =1;
    break;

  case 2:
    instrName = "vbaddw"; decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
       break;
     }

   case 11:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vsubw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 1:
    instrName = "vsubaw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 2:
    instrName = "vbsubw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
     }
     break;

   case 12:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vmulw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 1:
    instrName = "vmulaw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 2:
    instrName = "vbmulw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;

  case 3:
    instrName = "vbmulaw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
     }
     break;

   case 13:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vmulfw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 1:
    instrName = "vmulfaw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 2:
    instrName = "vbmulfw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
     }
     break;

   case 15:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vsummw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;
  case 2:
    instrName = "vbrsubw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
     }
     break;

   case 23:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vmr7w";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;

  case 1:
    instrName = "vmr7aw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;


  case 2:
    switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((0)+(sizeof(state->words[0])*8-1 - (5)))))
      {
      case 0:
        instrName = "vaddsuw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 1:
        instrName = "vabsw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 2:
        instrName = "vsignw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 3:
        instrName = "vupbw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 4:
        instrName = "vexch1";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 5:
        instrName = "vexch2";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 6:
        instrName = "vexch4";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 7:
        instrName = "vupsbw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;

      case 8:
        instrName = "vdirun";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = usesSimdRegA = 0;
        break;

      case 9:
        instrName = "vdorun";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = usesSimdRegA = 0;
        break;

      case 10:
        instrName = "vdiwr";
        decodingClass = 40;
        usesSimdRegB = 3;
        usesSimdRegA = usesSimdRegC = 0;
        break;

      case 11:
        instrName = "vdowr";
        decodingClass = 40;
        usesSimdRegB = 3;
        usesSimdRegA = usesSimdRegC = 0;
        break;

      case 12:
        instrName = "vdird";
        decodingClass = 40;
        usesSimdRegB = 1;
        usesSimdRegC = 3;
        usesSimdRegA = 0;
        break;

      case 13:
        instrName = "vdord";
        decodingClass = 40;
        usesSimdRegB = 1;
        usesSimdRegC = 3;
        usesSimdRegA = 0;
        break;

      case 63:
        {
   switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (25))) >> ((24)+(sizeof(state->words[0])*8-1 - (25)))))
     {
     case 0:
       instrName = "vrec";
       decodingClass = 43;
       usesSimdRegC = 0;
       usesSimdRegB = usesSimdRegA = 0;
       break;

     case 1:
       instrName = "vrecrun";
       decodingClass = 43;
       usesSimdRegC = 0;
       usesSimdRegA = usesSimdRegB = 0;
       break;

     case 2:
       instrName = "vrun";
       decodingClass = 43;
       usesSimdRegC = 0;
       usesSimdRegB = usesSimdRegA = 0;
       break;

     case 3:
       instrName = "vendrec";
       decodingClass = 43;
       usesSimdRegC = 0;
       usesSimdRegB = usesSimdRegA = 0;
       break;
     }
        }
        break;
      }
    break;

  case 3:
    switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (2))) >> ((0)+(sizeof(state->words[0])*8-1 - (2)))))
      {
      case 1:
        instrName = "vabsaw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;
      case 3:
        instrName = "vupbaw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;
      case 7:
        instrName = "vupsbaw";
        decodingClass = 40;
        usesSimdRegC = usesSimdRegB = 1;
        usesSimdRegA = 0;
        break;
      }
    break;
  }
     }
     break;

   case 16:
     instrName = "vasrw";
     decodingClass = 42;
     usesSimdRegA = usesSimdRegB = 1;
     usesSimdRegC = 2;
     break;

   case 48:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vasrwi";
    decodingClass = 41;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  case 2:
    instrName = "vasrrwi";
    decodingClass = 41;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
     }
     break;

   case 59:
     instrName = "vasrsrwi";
     decodingClass = 41;
     usesSimdRegA = usesSimdRegB = 1;
     usesSimdRegC = 0;
     break;

   case 18:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vmaxw";
    usesSimdRegC = 1;
    break;
  case 1:
    instrName = "vmaxaw";
    usesSimdRegC = 1;
    break;
  case 2:
    instrName = "vbmaxw";
    usesSimdRegC = 0;
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = 1;
       break;
     }

   case 19:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vminw";
    usesSimdRegC = 1;
    break;
  case 1:
    instrName = "vminaw";
    usesSimdRegC = 0;
    break;
  case 2:
    instrName = "vbminw";
    usesSimdRegC = 0;
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = 1;
       break;
     }

   case 14:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vdifw";
    break;
  case 1:
    instrName = "vdifaw";
    break;
  case 2:
    instrName = "vmrb";
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
       break;
     }

   case 24:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vand";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;
  case 1:
    instrName = "vandaw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;
  }
       break;
     }

   case 25:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vor";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
    break;
  }
       break;
     }

   case 26:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vxor";
    break;
  case 1:
    instrName = "vxoraw";
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
       break;
     }

   case 27:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vbic";
    break;
  case 1:
    instrName = "vbicaw";
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
       break;
     }

   case 4:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vavb";
    break;
  case 2:
    instrName = "vavrb";
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
       break;
     }

   case 28:
     instrName = "veqw";
     decodingClass = 42;
     usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
     break;

   case 29:
     instrName = "vnew";
     decodingClass = 42;
     usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
     break;

   case 30:
     instrName = "vlew";
     decodingClass = 42;
     usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
     break;

   case 31:
     instrName = "vltw";
     decodingClass = 42;
     usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
     break;

   case 49:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vasrpwbi";
    decodingClass = 41;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  case 2:
    instrName = "vasrrpwbi";
    decodingClass = 41;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
       break;
     }

   case 5:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vsr8";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 2;
    break;

  case 1:
    instrName = "vsr8aw";
    decodingClass = 42;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 2;
    break;
  }
       break;
     }

   case 37:
     {
       short sub_subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16))));
       switch (sub_subopcode)
  {
  case 0:
    instrName = "vsr8i";
    decodingClass = 41;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;

  case 1:
    instrName = "vsr8awi";
    decodingClass = 41;
    usesSimdRegA = usesSimdRegB = 1;
    usesSimdRegC = 0;
    break;
  }
       break;
     }

   case 20:
   case 21:
   case 22:
     {
       short subopcode2 = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (18))) >> ((15)+(sizeof(state->words[0])*8-1 - (18))));
       switch (subopcode2)
  {
  case 0:
    instrName = "vmr1w";
    break;

  case 2:
    instrName = "vmr2w";
    break;

  case 4:
    instrName = "vmr3w";
    break;

  case 6:
    instrName = "vmr4w";
    break;

  case 8:
    instrName = "vmr5w";
    break;

  case 10:
    instrName = "vmr6w";
    break;

  case 1:
    instrName = "vmr1aw";
    break;

  case 3:
    instrName = "vmr2aw";
    break;

  case 5:
    instrName = "vmr3aw";
    break;

  case 7:
    instrName = "vmr4aw";
    break;

  case 9:
    instrName = "vmr5aw";
    break;

  case 11:
    instrName = "vmr6aw";
    break;

  }

       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
       break;
     }


   case 7:
   case 6:
     {
       switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (19))) >> ((16)+(sizeof(state->words[0])*8-1 - (19)))))
  {
  case 15:
    instrName = "vh264ft";
    break;
  case 14:
    instrName = "vh264f";
    break;
  case 13:
    instrName = "vvc1ft";
    break;
  case 12:
    instrName = "vvc1f";
    break;
  }
       decodingClass = 42;
       usesSimdRegA = usesSimdRegB = usesSimdRegC = 1;
       break;

     }

   case 92:
     instrName = "vd6tapf";
     decodingClass = 39;
     usesSimdRegA = usesSimdRegB = 1;
     usesSimdRegC = 0;
     break;

   case 55:
     instrName = "vinti";
     decodingClass = 43;
     usesSimdRegA = usesSimdRegB = usesSimdRegC = 0;
     break;

   default:
     instrName = "SIMD";
     state->flow = invalid_instr;
     break;
   }
      }
    else
      {
 instrName = "???_SIMD";
 state->flow = invalid_instr;
      }
 break;


    case op_LD_ADD:

      decodingClass = 15;
      switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))))
 {
 case 0: instrName = "ld_s"; break;
 case 1: instrName = "ldb_s"; break;
 case 2: instrName = "ldw_s"; break;
 case 3: instrName = "add_s"; break;
        default:
   instrName = "??? (2[3])";
   state->flow = invalid_instr;
   break;
 }
      break;

  case op_ADD_SUB_SHIFT:

    decodingClass = 16;
    switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))))
      {
      case 0: instrName = "add_s"; break;
      case 1: instrName = "sub_s"; break;
      case 2: instrName = "asl_s"; break;
      case 3: instrName = "asr_s"; break;
      default:
 instrName = "??? (2[3])";
 state->flow = invalid_instr;
 break;
      }
    break;

    case op_ADD_MOV_CMP:

      decodingClass = 17;
      switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))))
      {
 case 0: instrName = "add_s"; break;
 case 1:
 case 3: instrName = "mov_s"; decodingClass = 18; break;
 case 2: instrName = "cmp_s"; decodingClass = 18; break;
        default:
   instrName = "??? (2[3])";
   state->flow = invalid_instr;
   break;
      }
      break;

    case op_S:

      decodingClass = 22;
      switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))))
      {
 case 0:
   decodingClass = 27;
          switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((5)+(sizeof(state->words[0])*8-1 - (7)))))
   {
            case 0 : instrName = "j_s";
            case 2 :
      if (!instrName) {
       instrName = "jl_s";
      }
      state->isBranch = 1;
      state->nullifyMode = BR_exec_when_no_jump;
      break;
            case 1 :
      if (!instrName) {
       instrName = "j_s.d";
      }
     case 3 :
      if (!instrName) {
       instrName = "jl_s.d";
      }
      state->isBranch = 1;
      state->nullifyMode = BR_exec_always;
      break;
            case 6 : instrName = "sub_s.ne";
              decodingClass = 35;
              break;
            case 7 :
       decodingClass = 26;
              switch((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((8)+(sizeof(state->words[0])*8-1 - (10)))))
       {
               case 0 : instrName = "nop_s"; break;


         case 1: instrName = "unimp_s";break;


         case 4: instrName = "jeq_s [blink]";
  case 5:
   if (!instrName) {
    instrName = "jne_s [blink]";
   }
  case 6:
   if (!instrName) {
    instrName = "j_s [blink]";
   }
   state->isBranch = 1;
   state->nullifyMode = BR_exec_when_no_jump;
   break;
  case 7:
   if (!instrName) {
    instrName = "j_s.d [blink]";
   }
   state->isBranch = 1;
   state->nullifyMode = BR_exec_always;
   break;
                default:
    instrName = "??? (2[3])";
          state->flow = invalid_instr;
    break;
       }
       break;
            default:
       instrName = "??? (2[3])";
       state->flow = invalid_instr;
       break;
   }
   break;
        case 2 : instrName = "sub_s"; break;
        case 4 : instrName = "and_s"; break;
        case 5 : instrName = "or_s"; break;
        case 6 : instrName = "bic_s"; break;
        case 7 : instrName = "xor_s"; break;
 case 11: instrName = "tst_s"; decodingClass = 14; break;
 case 12: instrName = "mul64_s"; mul =1; decodingClass = 14; break;
 case 13: instrName = "sexb_s"; decodingClass = 14; break;
 case 14: instrName = "sexw_s"; decodingClass = 14; break;
 case 15: instrName = "extb_s"; decodingClass = 14; break;
 case 16: instrName = "extw_s"; decodingClass = 14; break;
 case 17: instrName = "abs_s"; decodingClass = 14; break;
 case 18: instrName = "not_s"; decodingClass = 14; break;
 case 19: instrName = "neg_s"; decodingClass = 14; break;
        case 20: instrName = "add1_s"; break;
        case 21: instrName = "add2_s"; break;
        case 22: instrName = "add3_s"; break;
        case 24: instrName = "asl_s"; break;
        case 25: instrName = "lsr_s"; break;
        case 26: instrName = "asr_s"; break;
        case 27: instrName = "asl_s"; decodingClass = 14; break;
        case 28: instrName = "asr_s"; decodingClass = 14; break;
        case 29: instrName = "lsr_s"; decodingClass = 14; break;
      case 30: instrName = "trap_s"; decodingClass = 33; break;
      case 31: instrName = "brk_s"; decodingClass = 26; break;

        default:
   instrName = "??? (2[3])";
   state->flow = invalid_instr;
   break;
      }
      break;

       case op_LD_S:

      instrName = "ld_s";
      decodingClass = 28;
      break;

    case op_LDB_S:

      instrName = "ldb_s";
      decodingClass = 28;
      break;

    case op_LDW_S:

      instrName = "ldw_s";
      decodingClass = 28;
      break;

    case op_LDWX_S:

      instrName = "ldw_s.x";
      decodingClass = 28;
      break;

    case op_ST_S:

      instrName = "st_s";
      decodingClass = 28;
      break;

    case op_STB_S:

      instrName = "stb_s";
      decodingClass = 28;
      break;

    case op_STW_S:

      instrName = "stw_s";
      decodingClass = 28;
      break;

    case op_Su5:

      decodingClass = 23;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((5)+(sizeof(state->words[0])*8-1 - (7)))))
      {
 case 0: instrName = "asl_s"; break;
 case 1: instrName = "lsr_s"; break;
 case 2: instrName = "asr_s"; break;
 case 3: instrName = "sub_s"; break;
 case 4: instrName = "bset_s"; break;
 case 5: instrName = "bclr_s"; break;
 case 6: instrName = "bmsk_s"; break;
 case 7: instrName = "btst_s"; decodingClass = 21; break;
      }
      break;

    case op_SP:

      decodingClass = 19;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((5)+(sizeof(state->words[0])*8-1 - (7)))))
      {
        case 0: instrName = "ld_s"; break;
        case 1: instrName = "ldb_s"; break;
        case 2: instrName = "st_s"; break;
        case 3: instrName = "stb_s"; break;
        case 4: instrName = "add_s"; break;
        case 5:
  if (!(((state->words[0]) << (sizeof(state->words[0])*8-1 - (8))) >> ((8)+(sizeof(state->words[0])*8-1 - (8))))) {
   instrName = "add_s";
  } else {
   instrName = "sub_s";
  }
  break;
        case 6: instrName = "pop_s"; decodingClass = 31; break;
        case 7: instrName = "push_s"; decodingClass = 31; break;
 default:
          instrName = "??? (2[3])";
          state->flow = invalid_instr;
   break;
      }
    break;

    case op_GP:

      decodingClass = 20;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((9)+(sizeof(state->words[0])*8-1 - (10)))))
      {
        case 0: instrName = "ld_s"; break;
        case 1: instrName = "ldb_s"; break;
        case 2: instrName = "ldw_s"; break;
        case 3: instrName = "add_s"; break;
      }
      break;

    case op_Pcl:

      instrName = "ld_s";
      decodingClass = 29;
      break;

    case op_MOV_S:

      instrName = "mov_s";
      decodingClass = 30;
      break;

    case op_ADD_CMP:

      decodingClass = 21;
      if (((state->words[0]) & (1 << (7)))) {
       instrName = "cmp_s";
      } else {
       instrName = "add_s";
      }
      break;

    case op_BR_S:

      decodingClass = 25;
      if (((state->words[0]) & (1 << (7)))) {
       instrName = "brne_s";
      } else {
       instrName = "breq_s";
      }
      state->isBranch = 1;
      break;

    case op_B_S:

      decodingClass = 24;
      state->isBranch = 1;
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((9)+(sizeof(state->words[0])*8-1 - (10)))))
      {
 case 0: instrName = "b_s"; break;
 case 1: instrName = "beq_s"; break;
 case 2: instrName = "bne_s"; break;
 case 3:
          switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (8))) >> ((6)+(sizeof(state->words[0])*8-1 - (8)))))
   {
     case 0: instrName = "bgt_s"; break;
     case 1: instrName = "bge_s"; break;
     case 2: instrName = "blt_s"; break;
     case 3: instrName = "ble_s"; break;
     case 4: instrName = "bhi_s"; break;
     case 5: instrName = "bhs_s"; break;
     case 6: instrName = "blo_s"; break;
     case 7: instrName = "bls_s"; break;
   }
   break;
      }
      break;

    case op_BL_S:

      decodingClass = 24;
      instrName = "bl_s";
      state->isBranch = 1;
      break;

    default:

      instrName = "???";
      state->flow=invalid_instr;
      break;
  }



  if (state->flow == invalid_instr)
    {
   if (!((state->_opcode == op_SIMD) && enable_simd)) {
    instrName = instruction_name (state, state->_opcode,
     state->words[0],
     &flags);
   }

   if (state->instructionLen == 2) {
    switch (flags) {
    case (0x01):
     decodingClass = 22;
     break;
    case ((0x01) << 1):
     decodingClass = 14;
     break;
    case (((0x01) << 1) << 1):
     decodingClass = 36;
     break;
    case ((((0x01) << 1) << 1) << 1):
     decodingClass = 26;
     break;
    default:
     mwerror (state, "Invalid syntax class\n");
    }
 }
      else
 {

   switch (flags)
     {
     case (0x01):
       decodingClass = 0;
       break;
     case ((0x01) << 1):
       decodingClass = 1;
       break;
     case (((0x01) << 1) << 1):
       decodingClass = 32;
       break;
     case ((((0x01) << 1) << 1) << 1):
       break;
     case (((((0x01) << 1) << 1) << 1) << 1):
       break;
     default:
       mwerror(state, "Invalid syntax class\n");
     }
 }

      if (!instrName)
 {
   instrName = "???";
   state->flow=invalid_instr;
 }
    }

  fieldAisReg = fieldBisReg = fieldCisReg = 1;
  flag = cond = is_shimm = is_limm = 0;
  state->nullifyMode = BR_exec_when_no_jump;
  signExtend = addrWriteBack = directMem = 0;
  usesAuxReg = 0;


  switch (decodingClass)
  {
    case 0:



      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23))));
      switch (subopcode)
      {
 case 0:





          { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
        if (!is_limm)
   {

            { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
   }
         else
   {
            { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
     if (!fieldBisReg) {
      fieldB = fieldC;
     }
   }
         { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };
         { flag = ((state->words[0]) & (1 << (15))); };
   break;

 case 1:






          { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
          { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
   fieldCisReg = 0;


   state->_offset += fieldB, state->_ea_present = 0;
         { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };
         { flag = ((state->words[0]) & (1 << (15))); };
   break;

 case 2:






   fieldCisReg = 0;
          fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
          { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };


   state->_offset += fieldB, state->_ea_present = 0;
   if (is_limm) {
    fieldAisReg = fieldA = 0;
   } else {
    fieldA = fieldB;
   }
   { flag = ((state->words[0]) & (1 << (15))); };
   break;

 case 3:







          { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };

   if (is_limm)
   {
     fieldAisReg = fieldA = 0;
            { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
     if (((state->words[0]) & (1 << (5)))) {
      fieldCisReg = 0;
     } else if (fieldC == 62) {
      fieldCisReg = 0;
      fieldC = fieldB;
     }
   }
   else
   {
     fieldA = fieldB;
            if (((state->words[0]) & (1 << (5))))
     {
              { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
              fieldCisReg = 0;
     }
     else
     {
              { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
     }
   }
         { if (is_shimm == 0) { flag = ((state->words[0]) & (1 << (15))); cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); } };
   break;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2507 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2508 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2509 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
      break;

    case 1:




      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
      { flag = ((state->words[0]) & (1 << (15))); };

      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))) == 1) {
       fieldCisReg = 0;
      }
      if (fieldCisReg) {
       state->ea_reg1 = fieldC;


      } else {
       state->_offset += fieldB, state->_ea_present = 0;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2535 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2536 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      break;

    case 2:




      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23))));
      if (subopcode == 0 || ((subopcode == 3) && (!((state->words[0]) & (1 << (5))))))
      {
       { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
 if (is_limm)
 {
   { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
   if (!fieldBisReg) {
    fieldB = fieldC;
   }
 }
 else
 {
         { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
 }
      }
      else if (subopcode == 1 || ((subopcode == 3) && (((state->words[0]) & (1 << (5))))))
      {
 { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
 fieldCisReg = 0;
       { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
      }
      else if (subopcode == 2)
      {
 { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
 fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
 fieldCisReg = 0;
      }
      if (subopcode == 3)
 { if (is_shimm == 0) { cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); } };

      if (fieldCisReg) {
       state->ea_reg1 = fieldC;


      } else {
       state->_offset += fieldB, state->_ea_present = 0;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      if (mul)
      {

 
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 2589 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ;
 
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 2590 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                       ;
        
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
        my_sprintf(state, state->operandBuffer, formatString, 0, fieldB, fieldC);
      }
      else
      {
 
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 2597 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ;
        
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2598 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
        my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      }
      break;

    case 3:



      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23))));

      if (subopcode == 0 || ((subopcode == 3) && (!((state->words[0]) & (1 << (5))))))
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      }
      else if (subopcode == 1 || ((subopcode == 3) && (((state->words[0]) & (1 << (5))))))
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
 fieldCisReg = 0;
      }
      else if (subopcode == 2)
      {
 fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
 fieldCisReg = 0;
      }
      if (subopcode == 3)
        { if (is_shimm == 0) { cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); } };
      flag = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2629 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      my_sprintf(state, state->operandBuffer, formatString, fieldC);
      break;

    case 4:





      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23))));
      if (subopcode == 0 || ((subopcode == 3) && (!((state->words[0]) & (1 << (5))))))
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };

 if (fieldC == 29 || fieldC == 31)
         { flag = ((state->words[0]) & (1 << (15))); };
      }
      else if (subopcode == 1 || ((subopcode == 3) && (((state->words[0]) & (1 << (5))))))
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
 fieldCisReg = 0;
      }
      else if (subopcode == 2)
      {
 fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
 fieldCisReg = 0;
      }

      if (subopcode == 3)
        { if (is_shimm == 0) { cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); } };

      state->nullifyMode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((16)+(sizeof(state->words[0])*8-1 - (16))));

      if (!fieldCisReg)
 {
   state->flow = is_linked ? direct_call : direct_jump;
   (state->targets[state->tcnt++] = (fieldC));
 }
      else
 {
   state->flow = is_linked ? indirect_call : indirect_jump;






   state->register_for_indirect_jump = fieldC;
 }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     (fieldCisReg)?"[%r]":"%s"
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2681 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
                            
# 2682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ;

      if ((fieldCisReg)) {
       my_sprintf (state, state->operandBuffer, formatString, fieldC);
      } else {
       my_sprintf (state, state->operandBuffer, formatString,
        post_address (state, fieldC));
      }
      break;

    case 5:


      { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };
      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };

      if((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))) == 62)
 {
   instrName = "prefetch";
 }



      if (is_limm)
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
 if (!fieldCisReg) {
  fieldC = fieldB;
 }
      }
      else
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      }
      if ((0)) {
       printf ("5:b reg %d %d c reg %d %d  \n",
        fieldBisReg, fieldB, fieldCisReg, fieldC);
      }
      state->_offset = 0;
      state->_ea_present = 1;
      if (fieldBisReg) {
       state->ea_reg1 = fieldB;
      } else {
       state->_offset += fieldB;
      }
      if (fieldCisReg) {
       state->ea_reg2 = fieldC;
      } else {
       state->_offset += fieldC;
      }
      state->_mem_load = 1;

      directMem = ((state->words[0]) & (1 << (15)));
# 2744 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
        addrWriteBack = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23))));
      signExtend = ((state->words[0]) & (1 << (16)));

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };


      if ((fieldAisReg)) {
       
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 2751 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
      } else {
       
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "%*"
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 2753 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
       
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "["
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 2754 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
 }

 if (fieldBisReg || fieldB != 0) {
  
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___strcat_chk (
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 formatString
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , __builtin_object_size (
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 formatString
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 2 > 1 ? 1 : 0))
# 2758 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                   ;
 } else {
  fieldB = fieldC;
 }

 
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegC == 1) ? ", ""%S""]": (usesSimdRegC == 2) ? ", ""%I""]": (usesSimdRegC == 3)? ", ""%D""]": (fieldCisReg) ? ", ""%r""]": usesAuxReg ? ", ""%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""]" : ", ""%h""]")
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 2763 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ;
 my_sprintf (state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
 break;

    case 6:

      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
      { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };



      if((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))) == 62)
 {
   instrName = "prefetch";
 }

      fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (15))) >> ((15)+(sizeof(((signed int)(state->words[0])))*8-1 - (15)))) << 8) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (23))) >> ((16)+(sizeof((state->words[0]))*8-1 - (23))))));
      fieldCisReg = 0;

      if ((0)) {
       
# 2783 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      fprintf(__stderrp,
# 2783 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "6:b reg %d %d c 0x%x  \n", fieldBisReg, fieldB, fieldC
# 2783 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      )
                                    
# 2784 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                   ;
      }
      state->_ea_present = 1;
      state->_offset = fieldC;
      state->_mem_load = 1;
      if (fieldBisReg) {
       state->ea_reg1 = fieldB;


      } else {
       state->_offset += fieldB, state->_ea_present = 0;
      }

      directMem = ((state->words[0]) & (1 << (11)));


      if (fieldBisReg && (fieldB != 62)) {
       addrWriteBack = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((9)+(sizeof(state->words[0])*8-1 - (10))));
      }
      signExtend = ((state->words[0]) & (1 << (6)));

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      if ((fieldAisReg)) {
       
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 2807 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
      } else {
       
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "%*"
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 2809 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
       
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "["
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 2810 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
 }
      if (!fieldBisReg)
 {
   fieldB = state->_offset;
   
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  ((usesSimdRegB == 1) ? """%S""]": (usesSimdRegB == 2) ? """%I""]": (usesSimdRegB == 3)? """%D""]": (fieldBisReg) ? """%r""]": usesAuxReg ? """%a""]" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""]" : """%h""]")
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 2815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
 }
      else
 {
   
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 2819 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                   ;
   
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  ((usesSimdRegC == 1) ? ", ""%S""]": (usesSimdRegC == 2) ? ", ""%I""]": (usesSimdRegC == 3)? ", ""%D""]": (fieldCisReg) ? ", ""%r""]": usesAuxReg ? ", ""%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""]" : ", ""%h""]")
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 2820 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
 }
      my_sprintf(state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
      break;

    case 7:

      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      state->source_operand.registerNum = fieldC;
      state->sourceType = fieldCisReg ? ARC_REGISTER : ARC_LIMM ;
      fieldA = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (15))) >> ((15)+(sizeof(((signed int)(state->words[0])))*8-1 - (15)))) << 8) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (23))) >> ((16)+(sizeof((state->words[0]))*8-1 - (23))))));
      fieldAisReg=0;


      if ((0)) {
       
# 2836 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      fprintf(__stderrp,
# 2836 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "7:b reg %d %x off %x\n", fieldBisReg, fieldB, fieldA
# 2836 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      )
                                    
# 2837 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                   ;
      }
      state->_ea_present = 1;
      state->_offset = fieldA;
      if (fieldBisReg) {
       state->ea_reg1 = fieldB;





      } else {
       state->_offset += fieldB, state->_ea_present = 0;
      }

      directMem = ((state->words[0]) & (1 << (5)));
      addrWriteBack = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4))));

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? """%S"", [": (usesSimdRegC == 2) ? """%I"", [": (usesSimdRegC == 3)? """%D"", [": (fieldCisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d"",[" : """%h"",[")
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2856 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;
      if (fieldA == 0)
      {
        
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? """%S""]": (usesSimdRegB == 2) ? """%I""]": (usesSimdRegB == 3)? """%D""]": (fieldBisReg) ? """%r""]": usesAuxReg ? """%a""]" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""]" : """%h""]")
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2859 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ;
      }
      else
      {
 
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 2863 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ;
        fieldAisReg = 0;
        
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegA == 1) ? ", ""%S""]": (usesSimdRegA == 2) ? ", ""%I""]": (usesSimdRegA == 3)? ", ""%D""]": (fieldAisReg) ? ", ""%r""]": usesAuxReg ? ", ""%a""]" : (((fieldA) < 256) && ((fieldA) > -257)) ? ", ""%d""]" : ", ""%h""]")
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 2865 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
      }
      my_sprintf(state, state->operandBuffer, formatString, fieldC, fieldB, fieldA);
      break;

    case 8:

      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))))
      {
  case 0:
          if (is_limm)
          {
            { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
     if (!fieldCisReg) {
      fieldC = fieldB;
     }
   }
         else
   {
     { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
   }
   break;
 case 1:
   { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
   fieldCisReg = 0;
   break;
 case 2:
   fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
   fieldCisReg = 0;
   break;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S"", [": (usesSimdRegB == 2) ? """%I"", [": (usesSimdRegB == 3)? """%D"", [": (fieldBisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d"",[" : """%h"",[")
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2899 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;

      usesAuxReg = 1;
      
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2902 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "]"
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2903 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      break;

    case 9:


      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      if (is_limm || ((state->words[0]) & (1 << (4))))
      {
 fieldCisReg = 0;
        { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
      }
      else
      {
        { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
      }
      fieldAisReg = fieldA = 0;
      fieldA = ((((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (15))) >> ((15)+(sizeof(((signed int)(state->words[0])))*8-1 - (15)))) << 7) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (23))) >> ((17)+(sizeof((state->words[0]))*8-1 - (23)))))) << 1);
      fieldA += (addr & ~0x3);
      do{ state->nullifyMode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((5)+(sizeof(state->words[0])*8-1 - (5)))); }while(0);

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      (state->targets[state->tcnt++] = (fieldA));
      state->flow = state->_opcode == op_BLC ? direct_call : direct_jump;
      
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2929 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2930 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ",%s"
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2931 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC, post_address(state, fieldA));
      break;

    case 10:

      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))))
      {
  case 0:
   { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; }; break;
 case 1:
   { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
   fieldCisReg = 0;
   break;
 case 2:
   fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
   fieldCisReg = 0;
   break;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S"", [": (usesSimdRegB == 2) ? """%I"", [": (usesSimdRegB == 3)? """%D"", [": (fieldBisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d"",[" : """%h"",[")
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2954 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;

      usesAuxReg = 1;
      
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2957 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "]"
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      break;

    case 11:


      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))) == 3)
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
        { if (is_shimm == 0) { cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); } };
      }
      else
      {
 fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
      }

      fieldC = fieldC << 1;
      fieldC += (addr & ~0x3);

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };


      (state->targets[state->tcnt++] = (fieldC));
      state->flow = state->_opcode == op_BLC ? direct_call : direct_jump;

      fieldCisReg = 0;
      
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%s"
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 2985 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;
      my_sprintf(state, state->operandBuffer, formatString, post_address(state, fieldC));
      break;

    case 12:

      { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
      subopcode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23))));
      if (subopcode == 0 || ((subopcode == 3) && (!((state->words[0]) & (1 << (5))))))
      {
       { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      }
      else if (subopcode == 1 || ((subopcode == 3) && (((state->words[0]) & (1 << (5))))))
      {
       { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
 fieldCisReg = 0;
      }
      else if (subopcode == 2)
      {
 fieldC = (((((((signed int)(state->words[0]))) << (sizeof(((signed int)(state->words[0])))*8-1 - (5))) >> ((0)+(sizeof(((signed int)(state->words[0])))*8-1 - (5)))) << 6) | (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))));
 fieldCisReg = 0;
      }
      if (subopcode == 3)
      {
        { if (is_shimm == 0) { flag = ((state->words[0]) & (1 << (15))); cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); } };
      }
      else
      {
        { flag = ((state->words[0]) & (1 << (15))); };
      }

     { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
     
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___strcat_chk (
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    formatString
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , __builtin_object_size (
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    formatString
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0))
# 3017 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                     ;
     
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    __builtin___strcat_chk (
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    formatString
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , __builtin_object_size (
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    formatString
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
    , 2 > 1 ? 1 : 0))
# 3018 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ;
     if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
     my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
     break;

    case 13:


      fieldA = 0;
      if ((state->_opcode == op_BC && (((state->words[0]) & (1 << (16))))) ||
    (state->_opcode == op_BLC && (((state->words[0]) & (1 << (17))))))
      {

        fieldA = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4))))) << 10;
      }
      fieldA |= (((state->words[0]) << (sizeof(state->words[0])*8-1 - (15))) >> ((6)+(sizeof(state->words[0])*8-1 - (15))));

      if (state->_opcode == op_BLC)
      {


 fieldA = fieldA << 9;
        fieldA |= (((state->words[0]) << (sizeof(state->words[0])*8-1 - (26))) >> ((18)+(sizeof(state->words[0])*8-1 - (26))));
 fieldA = fieldA << 2;
      }
      else
      {
 fieldA = fieldA << 10;
        fieldA |= (((state->words[0]) << (sizeof(state->words[0])*8-1 - (26))) >> ((17)+(sizeof(state->words[0])*8-1 - (26))));
 fieldA = fieldA << 1;
      }

      if ((state->_opcode == op_BC && (((state->words[0]) & (1 << (16))))) ||
       (state->_opcode == op_BLC && (((state->words[0]) & (1 << (17)))))) {

       fieldA = sign_extend (fieldA, 25);
      } else {

       fieldA = sign_extend (fieldA, 21);
      }

      fieldA += (addr & ~0x3);

      if (((state->words[0]) & (1 << (16))) && state->_opcode == op_BC) {
       do{ state->nullifyMode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((5)+(sizeof(state->words[0])*8-1 - (5)))); }while(0);
      } else

       if ((state->_opcode == op_BLC && (((state->words[0]) << (sizeof(state->words[0])*8-1 - (17))) >> ((16)+(sizeof(state->words[0])*8-1 - (17)))) == 2) || (state->_opcode == op_BC && (((state->words[0]) & (1 << (16)))))) {
       do{ state->nullifyMode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((5)+(sizeof(state->words[0])*8-1 - (5)))); }while(0);
      } else {
       do { state->nullifyMode = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((5)+(sizeof(state->words[0])*8-1 - (5)))); cond = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))); }while(0);
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      (state->targets[state->tcnt++] = (fieldA));
      state->flow = state->_opcode == op_BLC
          ? direct_call
          : direct_jump;



      
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%s"
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3080 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;
      my_sprintf(state, state->operandBuffer, formatString, post_address(state, fieldA));
      break;

    case 14:



      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); if (fieldC > 3) { fieldC += 8; } };
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      if (mul)
      {
        fieldA = fieldAisReg = 0;
 
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 3095 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ;
        
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3096 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
      } else {
       
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 3098 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
      }
      
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3100 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      if (mul) {
       my_sprintf (state, state->operandBuffer, formatString, 0, fieldB, fieldC);
      } else {
       my_sprintf (state, state->operandBuffer, formatString, fieldB, fieldC);
      }
      break;

    case 15:



      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); if (fieldC > 3) { fieldC += 8; } };
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (2))) >> ((0)+(sizeof((state->words[0]))*8-1 - (2))))); if (fieldA > 3) { fieldA += 8; } };

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))) != 3)
      {
        
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3121 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
 
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 3122 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ;
 
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegC == 1) ? ", ""%S""]": (usesSimdRegC == 2) ? ", ""%I""]": (usesSimdRegC == 3)? ", ""%D""]": (fieldCisReg) ? ", ""%r""]": usesAuxReg ? ", ""%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""]" : ", ""%h""]")
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 3123 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
      }
      else
      {
        
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3127 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
        
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3128 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3129 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
      }
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
      break;

    case 16:



      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); if (fieldC > 3) { fieldC += 8; } };
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (2))) >> ((0)+(sizeof((state->words[0]))*8-1 - (2)))));
      fieldAisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3145 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3146 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegA == 1) ? ", ""%S""": (usesSimdRegA == 2) ? ", ""%I""": (usesSimdRegA == 3)? ", ""%D""": (fieldAisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? ", ""%d""" : ", ""%h""")
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3147 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldC, fieldB, fieldA);
      break;

    case 17:



      { fieldC = (((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (2))) >> ((0)+(sizeof((state->words[0]))*8-1 - (2)))))) << 3); fieldC |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3160 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3161 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3162 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldB, fieldC);
      break;

    case 18:



      if (((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))) == 1) || ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))) == 2))
      {
       { fieldC = (((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (2))) >> ((0)+(sizeof((state->words[0]))*8-1 - (2)))))) << 3); fieldC |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      }
      else if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))) == 3)
      {
 { fieldC = (((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (2))) >> ((0)+(sizeof((state->words[0]))*8-1 - (2)))))) << 3); fieldC |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); if (fieldC > 60) { fieldCisReg = 0; fieldC = 0; } };
      }
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((3)+(sizeof(state->words[0])*8-1 - (4)))) == 3)
      {
        
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3184 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
        
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3185 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
        my_sprintf(state, state->operandBuffer, formatString, fieldC, fieldB);
      }
      else
      {
        
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3191 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
        
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3192 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
        my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      }
      break;

    case 19:



      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((5)+(sizeof(state->words[0])*8-1 - (7)))) == 5) {
       fieldA = 28;
      } else {
       { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
       fieldA = fieldB;
      }
      fieldB = 28;
      fieldC = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (4))) >> ((0)+(sizeof((state->words[0]))*8-1 - (4)))))) << 2;
      fieldCisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((5)+(sizeof(state->words[0])*8-1 - (7)))))
      {
 case 0:
 case 1:
 case 2:
 case 3:
          
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         __builtin___strcat_chk (
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , __builtin_object_size (
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 2 > 1 ? 1 : 0))
# 3220 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                   ;
   
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 3221 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                   ;
   
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  __builtin___strcat_chk (
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  ((usesSimdRegC == 1) ? ", ""%S""]": (usesSimdRegC == 2) ? ", ""%I""]": (usesSimdRegC == 3)? ", ""%D""]": (fieldCisReg) ? ", ""%r""]": usesAuxReg ? ", ""%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""]" : ", ""%h""]")
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , __builtin_object_size (
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
  formatString
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
  , 2 > 1 ? 1 : 0))
# 3222 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
   break;
 case 4:
 case 5:
          
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         __builtin___strcat_chk (
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         ((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , __builtin_object_size (
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 2 > 1 ? 1 : 0))
# 3226 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
          
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         __builtin___strcat_chk (
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , __builtin_object_size (
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 2 > 1 ? 1 : 0))
# 3227 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                ;
          
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         __builtin___strcat_chk (
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , __builtin_object_size (
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         formatString
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 2 > 1 ? 1 : 0))
# 3228 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                ;
   break;
      }
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
      break;

    case 20:



      fieldA = 0;
      fieldB = 26;
      fieldC = ((((((signed int) (state->words[0]))) << (sizeof(((signed int) (state->words[0])))*8-1 - (8))) >> ((0)+(sizeof(((signed int) (state->words[0])))*8-1 - (8)))));
      switch ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((9)+(sizeof(state->words[0])*8-1 - (10)))))
      {
 case 0:
 case 3:
   fieldC = fieldC << 2; break;
 case 2:
   fieldC = fieldC << 1; break;
      }
      fieldCisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((9)+(sizeof(state->words[0])*8-1 - (10)))) != 3)
      {
        
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3256 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                 ;
 
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 3257 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                 ;
 
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
__builtin___strcat_chk (
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
((usesSimdRegC == 1) ? ", ""%S""]": (usesSimdRegC == 2) ? ", ""%I""]": (usesSimdRegC == 3)? ", ""%D""]": (fieldCisReg) ? ", ""%r""]": usesAuxReg ? ", ""%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""]" : ", ""%h""]")
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, __builtin_object_size (
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
formatString
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
, 2 > 1 ? 1 : 0))
# 3258 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
      }
      else
      {
        
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3262 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
        
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3263 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3264 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
      }
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
      break;

    case 21:



      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      if (state->_opcode == op_Su5) {
       fieldC = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))));
      } else {
       fieldC = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (6))) >> ((0)+(sizeof(state->words[0])*8-1 - (6)))));
      }
      fieldCisReg = 0;
      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      if (!((state->words[0]) & (1 << (7))))
      {
        
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3285 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
        
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3286 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3287 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
        my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldB, fieldC);
      }
      else
      {
        
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3293 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
        
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       __builtin___strcat_chk (
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , __builtin_object_size (
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
       formatString
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
       , 2 > 1 ? 1 : 0))
# 3294 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              ;
        if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
        my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      }
      break;

    case 22:



      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); if (fieldC > 3) { fieldC += 8; } };
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3309 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3310 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3311 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldB, fieldC);
      break;

    case 23:



      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (4))) >> ((0)+(sizeof((state->words[0]))*8-1 - (4)))));
      fieldCisReg = 0;
      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3324 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3325 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3326 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldB, fieldC);
      break;

    case 24:



      if (state->_opcode == op_BL_S)
      {
        fieldA = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((0)+(sizeof(state->words[0])*8-1 - (10))))) << 2;
 fieldA = sign_extend(fieldA, 13);
      }
      else if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (10))) >> ((9)+(sizeof(state->words[0])*8-1 - (10)))) != 3)
      {
        fieldA = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (8))) >> ((0)+(sizeof(state->words[0])*8-1 - (8))))) << 1;
 fieldA = sign_extend(fieldA, 10);
      }
      else
      {
        fieldA = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (5))) >> ((0)+(sizeof(state->words[0])*8-1 - (5))))) << 1;
 fieldA = sign_extend(fieldA, 7);
      }
      fieldA += (addr & ~0x3);

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      (state->targets[state->tcnt++] = (fieldA));
      state->flow = state->_opcode == op_BL_S
          ? direct_call
          : direct_jump;



      
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "%s"
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3361 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;
      my_sprintf(state, state->operandBuffer, formatString, post_address(state, fieldA));
      break;

    case 25:



      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      fieldC = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (6))) >> ((0)+(sizeof(state->words[0])*8-1 - (6))))) << 1;
      fieldC = sign_extend (fieldC, 8);

      fieldC += (addr & ~0x3);
      fieldA = fieldAisReg = fieldCisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      (state->targets[state->tcnt++] = (fieldC));
      state->flow = direct_jump;

      
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3381 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegA == 1) ? ", ""%S""": (usesSimdRegA == 2) ? ", ""%I""": (usesSimdRegA == 3)? ", ""%D""": (fieldAisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? ", ""%d""" : ", ""%h""")
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3382 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ",%s"
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3383 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldA, post_address(state, fieldC));
      break;

    case 26:



      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      state->operandBuffer[0] = '\0';
      break;

    case 27:



      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "[%r]"
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3402 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                ;
      my_sprintf(state, state->operandBuffer, formatString, fieldB);
      break;

    case 28:



      { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7))))); if (fieldC > 3) { fieldC += 8; } };
      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      switch (state->_opcode)
      {
 case op_LD_S :
 case op_ST_S :
         fieldA = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (4))) >> ((0)+(sizeof((state->words[0]))*8-1 - (4)))))) << 2;
   break;
 case op_LDB_S :
 case op_STB_S :
         fieldA = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (4))) >> ((0)+(sizeof((state->words[0]))*8-1 - (4))))));
   break;
 case op_LDW_S :
 case op_LDWX_S :
 case op_STW_S :
         fieldA = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (4))) >> ((0)+(sizeof((state->words[0]))*8-1 - (4)))))) << 1;
   break;
      }
      fieldAisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? """%S"", [": (usesSimdRegC == 2) ? """%I"", [": (usesSimdRegC == 3)? """%D"", [": (fieldCisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d"",[" : """%h"",[")
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3432 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                               ;
      
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3433 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegA == 1) ? ", ""%S""": (usesSimdRegA == 2) ? ", ""%I""": (usesSimdRegA == 3)? ", ""%D""": (fieldAisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? ", ""%d""" : ", ""%h""")
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3434 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     "]"
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3435 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldC, fieldB, fieldA);
      break;

    case 29:



      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      fieldC = 63;
      fieldA = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((0)+(sizeof(state->words[0])*8-1 - (7))))) << 2;
      fieldAisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3451 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3452 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegA == 1) ? ", ""%S""": (usesSimdRegA == 2) ? ", ""%I""": (usesSimdRegA == 3)? ", ""%D""": (fieldAisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? ", ""%d""" : ", ""%h""")
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3453 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC, fieldA);
      break;

    case 30:



      { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      fieldC = ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (7))) >> ((0)+(sizeof(state->words[0])*8-1 - (7)))));
      fieldCisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3468 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3469 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
      break;

    case 31:



      if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))) == 1)
      {
        { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
      } else if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (4))) >> ((0)+(sizeof(state->words[0])*8-1 - (4)))) == 17) {
       fieldB = 31;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3487 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldB);
      break;

    case 32:



      if (!(((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))))
      {
        { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
      }
      else
      {
 { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
 fieldCisReg = 0;
      }

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

      if (!fieldC) {
       state->operandBuffer[0] = '\0';
      } else {
       
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      __builtin___strcat_chk (
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , __builtin_object_size (
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      formatString
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      , 2 > 1 ? 1 : 0))
# 3511 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                        ;
       if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
       my_sprintf (state, state->operandBuffer, formatString, fieldC);
      }
      break;

  case 33:



    fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (7))) >> ((5)+(sizeof((state->words[0]))*8-1 - (7)))));
    fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10)))));
    fieldCisReg = 0;
    fieldBisReg = 0;
    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   "%d"
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3526 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
    my_sprintf(state,state->operandBuffer,formatString, ((fieldB << 3) | fieldC));
    break;

  case 34:
# 3542 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };
    { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); if (fieldB == 62) { fieldBisReg = 0; fieldB = 0; } };
    directMem = ((state->words[0]) & (1 << (15)));

    if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((22)+(sizeof(state->words[0])*8-1 - (23)))) == 1) {
     fieldCisReg = 0;
    }
    if (fieldCisReg) {
     state->ea_reg1 = fieldC;
    }

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegB == 1) ? """%S"", [": (usesSimdRegB == 2) ? """%I"", [": (usesSimdRegB == 3)? """%D"", [": (fieldBisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d"",[" : """%h"",[")
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3554 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ;

    
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegC == 1) ? """%S""]": (usesSimdRegC == 2) ? """%I""]": (usesSimdRegC == 3)? """%D""]": (fieldCisReg) ? """%r""]": usesAuxReg ? """%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""]" : """%h""]")
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3556 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                       ;

    if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
    my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
    break;

  case 35:



    { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };
    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   "%r,%r,%r"
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3568 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                  ;
    my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldB, fieldB);
    break;

  case 36:

    { fieldB = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (10))) >> ((8)+(sizeof((state->words[0]))*8-1 - (10))))); if (fieldB > 3) { fieldB += 8; } };

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };

    
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3578 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                    ;
    if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
    my_sprintf(state, state->operandBuffer, formatString, fieldB);

    break;


  case 44:


      fieldB = fieldBisReg = 0;

      { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
      
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3591 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                      ;
      
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     __builtin___strcat_chk (
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , __builtin_object_size (
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
     formatString
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
     , 2 > 1 ? 1 : 0))
# 3592 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ;
      if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
      my_sprintf(state, state->operandBuffer, formatString, fieldA,
   fieldB);
      break;



  case 37:
  case 39:
  case 41:
# 3613 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
    { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };

    { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
    if (decodingClass == 41)
       {
  { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };
       }
    else
      {
 { fieldC = (((state->words[0]) << (sizeof(state->words[0])*8-1 - (16))) >> ((15)+(sizeof(state->words[0])*8-1 - (16)))); fieldC = fieldC <<6; fieldC |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); fieldCisReg = 0; };

 if (simd_scale_u8 > 0) {
  fieldC = fieldC << simd_scale_u8;
 }
      }

    fieldCisReg = 0;

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    (decodingClass == 37 ? 
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          __builtin___strcat_chk (
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          formatString
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          , 
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          , __builtin_object_size (
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          formatString
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          , 2 > 1 ? 1 : 0)) 
# 3632 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                                     :
                           
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          __builtin___strcat_chk (
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          formatString
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          , 
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ((usesSimdRegA == 1) ? """%S"", ": (usesSimdRegA == 2) ? """%I"", ": (usesSimdRegA == 3)? """%D"", ": (fieldAisReg) ? """%r"", ": usesAuxReg ? """%a"", " : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"", " : """%h"", ")
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          , __builtin_object_size (
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          formatString
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                          , 2 > 1 ? 1 : 0))
# 3633 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                                 );
    
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegB == 1) ? """%S"", ": (usesSimdRegB == 2) ? """%I"", ": (usesSimdRegB == 3)? """%D"", ": (fieldBisReg) ? """%r"", ": usesAuxReg ? """%a"", " : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d"", " : """%h"", ")
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3634 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
    (decodingClass == 37 ? 
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           __builtin___strcat_chk (
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           formatString
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           , 
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ((usesSimdRegC == 1) ? """%S""]": (usesSimdRegC == 2) ? """%I""]": (usesSimdRegC == 3)? """%D""]": (fieldCisReg) ? """%r""]": usesAuxReg ? """%a""]" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""]" : """%h""]")
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           , __builtin_object_size (
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           formatString
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           , 2 > 1 ? 1 : 0))
# 3635 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                               :
                            
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           __builtin___strcat_chk (
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           formatString
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           , 
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           , __builtin_object_size (
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                           formatString
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                           , 2 > 1 ? 1 : 0))
# 3636 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                            );
    if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
    my_sprintf(state,state->operandBuffer, formatString, fieldA, fieldB, fieldC);


    break;
  case 38:




    { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };
    { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegA == 1) ? """%S"", [": (usesSimdRegA == 2) ? """%I"", [": (usesSimdRegA == 3)? """%D"", [": (fieldAisReg) ? """%r"", [": usesAuxReg ? """%a"",[" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d"",[" : """%h"",[")
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3651 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ;
    
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegB == 1) ? """%S""]": (usesSimdRegB == 2) ? """%I""]": (usesSimdRegB == 3)? """%D""]": (fieldBisReg) ? """%r""]": usesAuxReg ? """%a""]" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""]" : """%h""]")
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3652 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                       ;
    if (!fieldAisReg && !flag) (state->comm[state->commNum++] = ("nop"));;
    my_sprintf(state,state->operandBuffer, formatString, fieldA, fieldB);

    break;
  case 40:







    { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
    { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegB == 1) ? """%S""": (usesSimdRegB == 2) ? """%I""": (usesSimdRegB == 3)? """%D""": (fieldBisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? """%d""" : """%h""")
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3669 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                    ;
    
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3670 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
    my_sprintf(state, state->operandBuffer, formatString, fieldB, fieldC);
    break;

  case 42:


    { fieldA = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (5))) >> ((0)+(sizeof((state->words[0]))*8-1 - (5))))); if (fieldA == 62) { fieldAisReg = 0; fieldA = 0; } };
    { fieldB = ((((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (14))) >> ((12)+(sizeof((state->words[0]))*8-1 - (14))))) << 3); fieldB |= (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (26))) >> ((24)+(sizeof((state->words[0]))*8-1 - (26))))); { if ((fieldB) == 62) { is_limm++; fieldBisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldB) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldB) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldB) = state->words[1]; } }; } }; };
    { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); if (fieldC == 62) { fieldCisReg = 0; } };

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegA == 1) ? """%S""": (usesSimdRegA == 2) ? """%I""": (usesSimdRegA == 3)? """%D""": (fieldAisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldA) < 256) && ((fieldA) > -257)) ? """%d""" : """%h""")
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3682 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                    ;
    
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegB == 1) ? ", ""%S""": (usesSimdRegB == 2) ? ", ""%I""": (usesSimdRegB == 3)? ", ""%D""": (fieldBisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldB) < 256) && ((fieldB) > -257)) ? ", ""%d""" : ", ""%h""")
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3683 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
    
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegC == 1) ? ", ""%S""": (usesSimdRegC == 2) ? ", ""%I""": (usesSimdRegC == 3)? ", ""%D""": (fieldCisReg) ? ", ""%r""": usesAuxReg ? ", ""%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? ", ""%d""" : ", ""%h""")
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3684 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                          ;
    my_sprintf(state, state->operandBuffer, formatString, fieldA, fieldB, fieldC);
    break;

  case 43:


    { fieldC = (((((state->words[0])) << (sizeof((state->words[0]))*8-1 - (11))) >> ((6)+(sizeof((state->words[0]))*8-1 - (11))))); { if ((fieldC) == 62) { is_limm++; fieldCisReg = 0; { if (is_limm==1 && !(offset += 4, state->words[1])) mwerror(state, "Illegal limm reference in last instruction!\n"); if (info->endian == BFD_ENDIAN_LITTLE) { (fieldC) = ((state->words[1] & 0xff00) | (state->words[1] & 0xff)) << 16; (fieldC) |= ((state->words[1] & 0xff0000) | (state->words[1] & 0xff000000)) >> 16; } else { (fieldC) = state->words[1]; } }; } }; };

    if ((((state->words[0]) << (sizeof(state->words[0])*8-1 - (23))) >> ((17)+(sizeof(state->words[0])*8-1 - (23)))) == 55) {
     fieldCisReg = 0;
    }

    { write_instr_name_(state, instrName,cond, condCodeIsPartOfName, flag, signExtend, addrWriteBack, directMem); formatString[0] = '\0'; };
    
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   __builtin___strcat_chk (
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   ((usesSimdRegC == 1) ? """%S""": (usesSimdRegC == 2) ? """%I""": (usesSimdRegC == 3)? """%D""": (fieldCisReg) ? """%r""": usesAuxReg ? """%a""" : (((fieldC) < 256) && ((fieldC) > -257)) ? """%d""" : """%h""")
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , __builtin_object_size (
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
   formatString
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
   , 2 > 1 ? 1 : 0))
# 3698 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                    ;
    my_sprintf(state, state->operandBuffer, formatString, fieldC);
    break;


  default:
    mwerror(state, "Bad decoding class in ARC disassembler");
    break;
  }

  state->_cond = cond;
  return state->instructionLen = offset;
}






static const char *
_coreRegName
(
 void *_this 
# 3720 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
            __attribute__ ((__unused__))
# 3720 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ,
 int v
 )
{
  return arcExtMap_coreRegName(v);
}





static const char *
_auxRegName
( void *_this 
# 3733 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
             __attribute__ ((__unused__))
# 3733 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                             ,
  int v
  )
{
  return arcExtMap_auxRegName(v);
}






static const char *
_condCodeName
(
 void *_this 
# 3748 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
            __attribute__ ((__unused__))
# 3748 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ,
 int v
 )
{
  return arcExtMap_condCodeName(v);
}





static const char *
_instName
(
 void *_this 
# 3762 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
            __attribute__ ((__unused__))
# 3762 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ,
 int op1,
 int op2,
 int *flags
 )
{
  return arcExtMap_instName(op1, op2, flags);
}

static void
parse_disassembler_options (char *options)
{
  const char *p;
  for (p = options; p != 
# 3775 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                        ((void *)0)
# 3775 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                            ; )
    {
   if (
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      (strncmp ((
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      p
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      ), (
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "simd"
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      ), sizeof (
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "simd"
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      ) - 1) == 0)
# 3777 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                              )
     {
       enable_simd = 1;
     }
   if (
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      (strncmp ((
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      p
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      ), (
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "insn-stream"
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      ), sizeof (
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
      "insn-stream"
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
      ) - 1) == 0)
# 3781 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                     )
     {
    enable_insn_stream = 1;
     }

   p = strchr (p, ',');

   if (p != 
# 3788 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
           ((void *)0)
# 3788 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
               ) {
    p++;
   }
    }

}



int
ARCompact_decodeInstr (bfd_vma address,
                       disassemble_info* info)
{
  int status;
  bfd_byte buffer[4];
  struct arcDisState s;
  void *stream = info->stream;
  fprintf_ftype func = info->fprintf_func;
  int bytes;
  int lowbyte, highbyte;
  char buf[256];

  if (info->disassembler_options)
    {
      parse_disassembler_options (info->disassembler_options);


      info->disassembler_options = 
# 3815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                                  ((void *)0)
# 3815 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                      ;
    }

  lowbyte = ((info->endian == BFD_ENDIAN_LITTLE) ? 1 : 0);
  highbyte = ((info->endian == BFD_ENDIAN_LITTLE) ? 0 : 1);

  
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___memset_chk (
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 &s
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 0, sizeof(struct arcDisState)
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , __builtin_object_size (
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 &s
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0))
# 3821 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                          ;


  status = (*info->read_memory_func) (address, buffer, 2, info);

  if (status != 0)
    {
      (*info->memory_error_func) (status, address, info);
      return -1;
    }

  if (((buffer[lowbyte] & 0xf8) > 0x38) && ((buffer[lowbyte] & 0xf8) != 0x48))
  {
    s.instructionLen = 2;
    s.words[0] = (buffer[lowbyte] << 8) | buffer[highbyte];
    status = (*info->read_memory_func) (address + 2, buffer, 4, info);
    if (info->endian == BFD_ENDIAN_LITTLE) {
     s.words[1] = bfd_getl32 (buffer);
    } else {
     s.words[1] = bfd_getb32 (buffer);
    }
  }
  else
  {
    s.instructionLen = 4;
    status = (*info->read_memory_func) (address + 2, &buffer[2], 2, info);
    if (status != 0)
    {
      (*info->memory_error_func) (status, address + 2, info);
      return -1;
    }
    if (info->endian == BFD_ENDIAN_LITTLE) {
     s.words[0] = bfd_getl32 (buffer);
    } else {
     s.words[0] = bfd_getb32 (buffer);
    }



    status = (*info->read_memory_func) (address + 4, buffer, 4, info);
    if (info->endian == BFD_ENDIAN_LITTLE) {
     s.words[1] = bfd_getl32 (buffer);
    } else {
     s.words[1] = bfd_getb32 (buffer);
    }
  }

  s._this = &s;
  s.coreRegName = _coreRegName;
  s.auxRegName = _auxRegName;
  s.condCodeName = _condCodeName;
  s.instName = _instName;


  bytes = dsmOneArcInst(address, (void *)&s, info);


  {
    char* instr = s.instrBuffer;
    char* operand = s.operandBuffer;
    char* space = strchr(instr, ' ');

    if (enable_insn_stream)
      {


 if (s.instructionLen == 2) {
  (*func) (stream, "    %04x ", (unsigned int)s.words[0]);
 } else {
  (*func) (stream, "%08x ", (unsigned int)s.words[0]);
 }

 (*func) (stream, "    ");
      }


    if ((space != 
# 3897 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
                 ((void *)0)
# 3897 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                     ) && (operand[0] == '\0'))
      {
          *space = '\0';
          operand = space + 1;
      }

    (*func) (stream, "%s ", instr);

    if (((s).acnt != 0))
      {
        bfd_vma addr;
        char *tmpBuffer;
        int i = 1;

        if (operand[0] != '@')
        {


          
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         __builtin___strncpy_chk (
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         buf
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         operand, sizeof (buf)
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , __builtin_object_size (
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
         buf
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
         , 2 > 1 ? 1 : 0))
# 3915 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                            ;
          buf[sizeof (buf) - 1] = '\0';
          tmpBuffer = strtok(buf,"@");
          (*func) (stream, "%s", tmpBuffer);
          i = strlen(tmpBuffer) + 1;
        }

        addr = s.addresses[operand[i] - '0'];
        (*info->print_address_func) ((bfd_vma) addr, info);

    } else {
     (*func) (stream, "%s", operand);
    }
  }


  info->bytes_per_line = 8;

  return bytes;
}







struct arcDisState
arcAnalyzeInstr
(
 bfd_vma address,
 disassemble_info* info
 )
{
  int status;
  bfd_byte buffer[4];
  struct arcDisState s;
  int bytes;
  int lowbyte, highbyte;

  lowbyte = ((info->endian == BFD_ENDIAN_LITTLE) ? 1 : 0);
  highbyte = ((info->endian == BFD_ENDIAN_LITTLE) ? 0 : 1);

  
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 __builtin___memset_chk (
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 &s
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 0, sizeof(struct arcDisState)
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , __builtin_object_size (
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
 &s
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c" 3 4
 , 0))
# 3958 "project/radare2/libr/asm/arch/arc/gnu/arcompact-dis.c"
                                          ;


  status = (*info->read_memory_func) (address, buffer, 2, info);

  if (status != 0)
    {
      (*info->memory_error_func) (status, address, info);
      s.instructionLen = -1;
      return s;
    }

  if (((buffer[lowbyte] & 0xf8) > 0x38) && ((buffer[lowbyte] & 0xf8) != 0x48))
  {
    s.instructionLen = 2;
    s.words[0] = (buffer[lowbyte] << 8) | buffer[highbyte];
    status = (*info->read_memory_func) (address + 2, buffer, 4, info);
    if (info->endian == BFD_ENDIAN_LITTLE) {
     s.words[1] = bfd_getl32 (buffer);
    } else {
     s.words[1] = bfd_getb32 (buffer);
    }
  }
  else
  {
    s.instructionLen = 4;
    status = (*info->read_memory_func) (address + 2, &buffer[2], 2, info);
    if (status != 0)
    {
      (*info->memory_error_func) (status, address + 2, info);
      s.instructionLen = -1;
      return s;
    }
    if (info->endian == BFD_ENDIAN_LITTLE) {
     s.words[0] = bfd_getl32 (buffer);
    } else {
     s.words[0] = bfd_getb32 (buffer);
    }



    status = (*info->read_memory_func) (address + 4, buffer, 4, info);
    if (info->endian == BFD_ENDIAN_LITTLE) {
     s.words[1] = bfd_getl32 (buffer);
    } else {
     s.words[1] = bfd_getb32 (buffer);
    }
  }

  s._this = &s;
  s.coreRegName = _coreRegName;
  s.auxRegName = _auxRegName;
  s.condCodeName = _condCodeName;
  s.instName = _instName;


  bytes = dsmOneArcInst(address, (void *)&s, info);

  info->bytes_per_line = bytes;
  return s;
}


void
arc_print_disassembler_options (FILE *stream)
{
  fprintf (stream, "\n ARC-specific disassembler options:\n use with the -M switch, with options separated by commas\n\n");



  fprintf (stream, "  insn-stream    Show the instruction byte stream from most\n");
  fprintf (stream, "                 significant byte to least significant byte (excluding LIMM).\n");
  fprintf (stream, "                 This option is useful for viewing the actual encoding of instructions.\n");

  fprintf (stream, "  simd           Enable SIMD instructions disassembly.\n\n");
}
