# 0 "project/goaccess/src/gdashboard.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/gdashboard.c"
# 33 "project/goaccess/src/gdashboard.c"
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
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 2 3 4
# 34 "project/goaccess/src/gdashboard.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 78 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
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
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 2 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 2 3 4
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
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 3 4

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
# 35 "project/goaccess/src/gdashboard.c" 2
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

 struct __darwin_mcontext64 __mcontext_data;

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

 long ru_opaque[14];
# 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
};
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);



int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);



int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );






# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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





int putenv(char *) __asm("_" "putenv" );
long random(void) ;
int rand_r(unsigned *) ;



char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" );

unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4

# 36 "project/goaccess/src/gdashboard.c" 2
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

# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 37 "project/goaccess/src/gdashboard.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 203 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
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

# 544 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
char *crypt(const char *, const char *);

void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);
# 567 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );
# 588 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
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

# 38 "project/goaccess/src/gdashboard.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 3 4
typedef char * caddr_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t daddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef u_int32_t fixpt_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

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





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
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
# 39 "project/goaccess/src/gdashboard.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_regex.h" 1 3 4
# 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_regex.h" 3 4
typedef __darwin_off_t regoff_t;

typedef struct {
 int re_magic;
 size_t re_nsub;
 const char *re_endp;
 struct re_guts *re_g;
} regex_t;

typedef struct {
 regoff_t rm_so;
 regoff_t rm_eo;
} regmatch_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 2 3 4
# 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 3 4

int regcomp(regex_t * restrict, const char * restrict, int) __asm("_" "regcomp" );
size_t regerror(int, const regex_t * restrict, char * restrict, size_t) __attribute__((__cold__));




int regexec(const regex_t * restrict, const char * restrict, size_t,
     regmatch_t __pmatch[ restrict], int);
void regfree(regex_t *);
# 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 3 4

# 40 "project/goaccess/src/gdashboard.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4

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







# 41 "project/goaccess/src/gdashboard.c" 2

# 1 "project/goaccess/src/gdashboard.h" 1
# 39 "project/goaccess/src/gdashboard.h"
# 1 "project/goaccess/src/ui.h" 1
# 48 "project/goaccess/src/ui.h"
# 1 "project/goaccess/src/labels.h" 1
# 33 "project/goaccess/src/labels.h"
# 1 "/usr/local/include/libintl.h" 1 3 4
# 20 "/usr/local/include/libintl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_locale.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_locale.h" 3 4
struct lconv {
 char *decimal_point;
 char *thousands_sep;
 char *grouping;
 char *int_curr_symbol;
 char *currency_symbol;
 char *mon_decimal_point;
 char *mon_thousands_sep;
 char *mon_grouping;
 char *positive_sign;
 char *negative_sign;
 char int_frac_digits;
 char frac_digits;
 char p_cs_precedes;
 char p_sep_by_space;
 char n_cs_precedes;
 char n_sep_by_space;
 char p_sign_posn;
 char n_sign_posn;
 char int_p_cs_precedes;
 char int_n_cs_precedes;
 char int_p_sep_by_space;
 char int_n_sep_by_space;
 char int_p_sign_posn;
 char int_n_sign_posn;
};




struct lconv *localeconv(void);

# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 2 3 4
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 3 4

char *setlocale(int, const char *);

# 21 "/usr/local/include/libintl.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_xlocale.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_xlocale.h" 3 4
struct _xlocale;
typedef struct _xlocale * locale_t;


int ___mb_cur_max(void);
int ___mb_cur_max_l(locale_t);

# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4

extern const locale_t _c_locale;

locale_t duplocale(locale_t);
int freelocale(locale_t);
struct lconv * localeconv_l(locale_t);
locale_t newlocale(int, const char *, locale_t);
const char * querylocale(int, locale_t);
locale_t uselocale(locale_t);



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_ctype.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_ctype.h" 3 4

unsigned long ___runetype_l(__darwin_ct_rune_t, locale_t);
__darwin_ct_rune_t ___tolower_l(__darwin_ct_rune_t, locale_t);
__darwin_ct_rune_t ___toupper_l(__darwin_ct_rune_t, locale_t);



int __maskrune_l(__darwin_ct_rune_t, unsigned long, locale_t);


extern __inline __attribute__((__gnu_inline__)) int
__istype_l(__darwin_ct_rune_t _c, unsigned long _f, locale_t _l)
{
 return !!(isascii(_c) ? (_DefaultRuneLocale.__runetype[_c] & _f)
  : __maskrune_l(_c, _f, _l));
}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__toupper_l(__darwin_ct_rune_t _c, locale_t _l)
{
 return isascii(_c) ? _DefaultRuneLocale.__mapupper[_c]
  : ___toupper_l(_c, _l);
}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__tolower_l(__darwin_ct_rune_t _c, locale_t _l)
{
 return isascii(_c) ? _DefaultRuneLocale.__maplower[_c]
  : ___tolower_l(_c, _l);
}

extern __inline __attribute__((__gnu_inline__)) int
__wcwidth_l(__darwin_ct_rune_t _c, locale_t _l)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune_l(_c, 0xe0000000L|0x00040000L, _l);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}



extern __inline __attribute__((__gnu_inline__)) int
digittoint_l(int c, locale_t l)
{
 return (__maskrune_l(c, 0x0F, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isalnum_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000100L|0x00000400L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isalpha_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000100L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isblank_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00020000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
iscntrl_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000200L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isdigit_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000400L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isgraph_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000800L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
ishexnumber_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00010000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isideogram_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00080000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
islower_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00001000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isnumber_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000400L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isphonogram_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00200000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isprint_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00040000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
ispunct_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00002000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isrune_l(int c, locale_t l)
{
 return (__istype_l(c, 0xFFFFFFF0L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isspace_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00004000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isspecial_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00100000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isupper_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00008000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isxdigit_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00010000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
tolower_l(int c, locale_t l)
{
        return (__tolower_l(c, l));
}

extern __inline __attribute__((__gnu_inline__)) int
toupper_l(int c, locale_t l)
{
        return (__toupper_l(c, l));
}
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_inttypes.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_inttypes.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_inttypes.h" 2 3 4



intmax_t strtoimax_l(const char * restrict nptr, char ** restrict endptr,
  int base, locale_t);
uintmax_t strtoumax_l(const char * restrict nptr, char ** restrict endptr,
  int base, locale_t);
intmax_t wcstoimax_l(const wchar_t * restrict nptr,
  wchar_t ** restrict endptr, int base, locale_t);
uintmax_t wcstoumax_l(const wchar_t * restrict nptr,
  wchar_t ** restrict endptr, int base, locale_t);






# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_regex.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_regex.h" 3 4


int regcomp_l(regex_t * restrict, const char * restrict, int,
     locale_t restrict)
     ;
# 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_regex.h" 3 4

# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdio.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdio.h" 3 4


int fprintf_l(FILE * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)));
int fscanf_l(FILE * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 3, 4)));
int printf_l(locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 2, 3)));
int scanf_l(locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 2, 3)));
int sprintf_l(char * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4))) ;
int sscanf_l(const char * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 3, 4)));
int vfprintf_l(FILE * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)));
int vprintf_l(locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 2, 0)));
int vsprintf_l(char * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0))) ;


int snprintf_l(char * restrict, size_t, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 4, 5)));
int vfscanf_l(FILE * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 3, 0)));
int vscanf_l(locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 2, 0)));
int vsnprintf_l(char * restrict, size_t, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 4, 0)));
int vsscanf_l(const char * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 3, 0)));



int dprintf_l(int, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4))) ;
int vdprintf_l(int, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0))) ;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdio.h" 3 4

# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdlib.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdlib.h" 2 3 4



double atof_l(const char *, locale_t);
int atoi_l(const char *, locale_t);
long atol_l(const char *, locale_t);

long long
  atoll_l(const char *, locale_t);

int mblen_l(const char *, size_t, locale_t);
size_t mbstowcs_l(wchar_t * restrict , const char * restrict, size_t,
     locale_t);
int mbtowc_l(wchar_t * restrict, const char * restrict, size_t,
     locale_t);
double strtod_l(const char *, char **, locale_t) __asm("_" "strtod_l" );
float strtof_l(const char *, char **, locale_t) __asm("_" "strtof_l" );
long strtol_l(const char *, char **, int, locale_t);
long double
  strtold_l(const char *, char **, locale_t);
long long
  strtoll_l(const char *, char **, int, locale_t);

long long
  strtoq_l(const char *, char **, int, locale_t);

unsigned long
  strtoul_l(const char *, char **, int, locale_t);
unsigned long long
  strtoull_l(const char *, char **, int, locale_t);

unsigned long long
  strtouq_l(const char *, char **, int, locale_t);

size_t wcstombs_l(char * restrict, const wchar_t * restrict, size_t,
     locale_t);
int wctomb_l(char *, wchar_t, locale_t);






# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_string.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_string.h" 3 4

int strcoll_l(const char *, const char *, locale_t);
size_t strxfrm_l(char *, const char *, size_t, locale_t);
int strcasecmp_l(const char *, const char *, locale_t);
char *strcasestr_l(const char *, const char *, locale_t);
int strncasecmp_l(const char *, const char *, size_t, locale_t);

# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 23 "/usr/local/include/libintl.h" 2 3 4
# 58 "/usr/local/include/libintl.h" 3 4
extern int libintl_version;
# 136 "/usr/local/include/libintl.h" 3 4
extern char *gettext (const char *__msgid)
       __asm__ ("_" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));
# 156 "/usr/local/include/libintl.h" 3 4
extern char *dgettext (const char *__domainname, const char *__msgid)
       __asm__ ("_" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));
# 177 "/usr/local/include/libintl.h" 3 4
extern char *dcgettext (const char *__domainname, const char *__msgid,
                        int __category)
       __asm__ ("_" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));
# 201 "/usr/local/include/libintl.h" 3 4
extern char *ngettext (const char *__msgid1, const char *__msgid2,
                       unsigned long int __n)
       __asm__ ("_" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
# 224 "/usr/local/include/libintl.h" 3 4
extern char *dngettext (const char *__domainname,
                        const char *__msgid1, const char *__msgid2,
                        unsigned long int __n)
       __asm__ ("_" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 250 "/usr/local/include/libintl.h" 3 4
extern char *dcngettext (const char *__domainname,
                         const char *__msgid1, const char *__msgid2,
                         unsigned long int __n, int __category)
       __asm__ ("_" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 272 "/usr/local/include/libintl.h" 3 4
extern char *textdomain (const char *__domainname)
       __asm__ ("_" "libintl_textdomain");
# 290 "/usr/local/include/libintl.h" 3 4
extern char *bindtextdomain (const char *__domainname, const char *__dirname)
       __asm__ ("_" "libintl_bindtextdomain");
# 329 "/usr/local/include/libintl.h" 3 4
extern char *bind_textdomain_codeset (const char *__domainname,
                                      const char *__codeset)
       __asm__ ("_" "libintl_bind_textdomain_codeset");
# 489 "/usr/local/include/libintl.h" 3 4
extern char *libintl_setlocale (int, const char *);
# 498 "/usr/local/include/libintl.h" 3 4
extern locale_t libintl_newlocale (int, const char *, locale_t);
# 514 "/usr/local/include/libintl.h" 3 4
extern void
       libintl_set_relocation_prefix (const char *orig_prefix,
                                      const char *curr_prefix);
# 34 "project/goaccess/src/labels.h" 2
# 49 "project/goaccess/src/ui.h" 2
# 1 "project/goaccess/src/commons.h" 1
# 37 "project/goaccess/src/commons.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4

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
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME = 0,

_CLOCK_MONOTONIC = 6,
# 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
_CLOCK_PROCESS_CPUTIME_ID = 12,

_CLOCK_THREAD_CPUTIME_ID = 16

} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);








int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4

int timespec_get(struct timespec *ts, int base);





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_time.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_time.h" 3 4

size_t strftime_l(char * restrict, size_t, const char * restrict,
  const struct tm * restrict, locale_t)
  __asm("_" "strftime_l" ) __attribute__((__format__ (__strftime__, 3, 0)));
char *strptime_l(const char * restrict, const char * restrict,
  struct tm * restrict, locale_t)
  __asm("_" "strptime_l" ) __attribute__((__format__ (__strftime__, 2, 0)));

# 206 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 38 "project/goaccess/src/commons.h" 2

# 1 "project/goaccess/src/gslist.h" 1
# 34 "project/goaccess/src/gslist.h"

# 34 "project/goaccess/src/gslist.h"
typedef struct GSLList_ {
  void *data;
  struct GSLList_ *next;
} GSLList;
# 48 "project/goaccess/src/gslist.h"
GSLList *list_create (void *data);
GSLList *list_find (GSLList * node, int (*func) (void *, void *), void *data);
GSLList *list_insert_append (GSLList * node, void *data);
GSLList *list_insert_prepend (GSLList * list, void *data);
GSLList *list_copy (GSLList * node);
int list_count (GSLList * list);
int list_foreach (GSLList * node, int (*func) (void *, void *), void *user_data);
int list_remove_node (GSLList ** list, GSLList * node);
int list_remove_nodes (GSLList * list);
# 40 "project/goaccess/src/commons.h" 2
# 48 "project/goaccess/src/commons.h"
extern struct tm now_tm;
# 85 "project/goaccess/src/commons.h"
typedef enum {
  TYPE_IPINV,
  TYPE_IPV4,
  TYPE_IPV6
} GTypeIP;


typedef enum MODULES {
  VISITORS,
  REQUESTS,
  REQUESTS_STATIC,
  NOT_FOUND,
  HOSTS,
  OS,
  BROWSERS,
  VISIT_TIMES,
  VIRTUAL_HOSTS,
  REFERRERS,
  REFERRING_SITES,
  KEYPHRASES,
  STATUS_CODES,
  REMOTE_USER,
  CACHE_STATUS,



  MIME_TYPE,
  TLS_TYPE,
} GModule;



typedef struct GPercTotals_ {
  uint32_t hits;
  uint32_t visitors;
  uint64_t bw;
} GPercTotals;


typedef struct GMetrics {


  uint8_t id;
  char *data;
  char *method;
  char *protocol;

  float hits_perc;
  float visitors_perc;
  float bw_perc;

  uint64_t hits;
  uint64_t visitors;



  union {
    char *sbw;
    uint64_t nbw;
  } bw;



  union {
    char *sts;
    uint64_t nts;
  } avgts;



  union {
    char *sts;
    uint64_t nts;
  } cumts;



  union {
    char *sts;
    uint64_t nts;
  } maxts;
} GMetrics;


typedef struct GSubItem_ {
  GModule module;
  GMetrics *metrics;
  struct GSubItem_ *prev;
  struct GSubItem_ *next;
} GSubItem;


typedef struct GSubList_ {
  int size;
  struct GSubItem_ *head;
  struct GSubItem_ *tail;
} GSubList;


typedef struct GHolderItem_ {
  GSubList *sub_list;
  GMetrics *metrics;
} GHolderItem;


typedef struct GHolder_ {
  GHolderItem *items;
  GModule module;
  int idx;
  int holder_size;
  uint32_t ht_size;
  int sub_items_size;
} GHolder;


typedef struct GEnum_ {
  const char *str;
  int idx;
} GEnum;


typedef struct GDataMap_ {
  int data;
  int root;
} GDataMap;

typedef struct GAgentItem_ {
  char *agent;
} GAgentItem;

typedef struct GAgents_ {
  int size;
  int idx;
  struct GAgentItem_ *items;
} GAgents;





extern time_t end_proc;
extern time_t timestamp;
extern time_t start_proc;


extern int module_list[17];


GAgents *new_gagents (uint32_t size);
void free_agents_array (GAgents *agents);

char *enum2str (const GEnum map[], int len, int idx);
char *get_module_str (GModule module);
float get_percentage (unsigned long long total, unsigned long long hit);
int get_max_choices (void);
int get_module_enum (const char *str);
int has_timestamp (const char *fmt);
int str2enum (const GEnum map[], int len, const char *str);

int enable_panel (GModule mod);
int get_module_index (int module);
int get_next_module (GModule module);
int get_prev_module (GModule module);
int ignore_panel (GModule mod);
int init_modules (void);
int remove_module(GModule module);
uint32_t get_num_modules (void);
void verify_panels (void);

char *get_log_source_str (int max_len);
intmax_t get_log_sizes (void);

void display_default_config_file (void);
void display_storage (void);
void display_version (void);
# 50 "project/goaccess/src/ui.h" 2
# 155 "project/goaccess/src/ui.h"
# 1 "project/goaccess/src/color.h" 1
# 36 "project/goaccess/src/color.h"
typedef enum CSTM_COLORS {
  COLOR_NORMAL,
  COLOR_MTRC_HITS,
  COLOR_MTRC_VISITORS,
  COLOR_MTRC_DATA,
  COLOR_MTRC_BW,
  COLOR_MTRC_AVGTS,
  COLOR_MTRC_CUMTS,
  COLOR_MTRC_MAXTS,
  COLOR_MTRC_PROT,
  COLOR_MTRC_MTHD,
  COLOR_MTRC_HITS_PERC,
  COLOR_MTRC_HITS_PERC_MAX,
  COLOR_MTRC_VISITORS_PERC,
  COLOR_MTRC_VISITORS_PERC_MAX,
  COLOR_PANEL_COLS,
  COLOR_BARS,
  COLOR_ERROR,
  COLOR_SELECTED,
  COLOR_PANEL_ACTIVE,
  COLOR_PANEL_HEADER,
  COLOR_PANEL_DESC,
  COLOR_OVERALL_LBLS,
  COLOR_OVERALL_VALS,
  COLOR_OVERALL_PATH,
  COLOR_ACTIVE_LABEL,
  COLOR_BG,
  COLOR_DEFAULT,
  COLOR_PROGRESS,
} GColorItem;


typedef enum SCHEMES {
  NO_COLOR,
  MONOCHROME,
  STD_GREEN,
  MONOKAI,
} GShemes;

# 1 "project/goaccess/src/commons.h" 1
# 76 "project/goaccess/src/color.h" 2


typedef struct GColorPair_ {
  short idx;
  short fg;
  short bg;
} GColorPair;


typedef struct GColors_ {
  GColorItem item;
  GColorPair *pair;
  int attr;
  short module;
} GColors;

GColors *color_default (void);
GColors *color_error (void);
GColors *color_overall_lbls (void);
GColors *color_overall_path (void);
GColors *color_overall_vals (void);
GColors *color_panel_active (void);
GColors *color_panel_desc (void);
GColors *color_panel_header (void);
GColors *color_progress (void);
GColors *color_selected (void);
GColors *get_color_by_item_module (GColorItem item, GModule module);
GColors *get_color (GColorItem item);
GColors *get_color_normal (void);
void free_color_lists (void);
void set_colors (int force);
void set_normal_color (void);
# 156 "project/goaccess/src/ui.h" 2
# 1 "project/goaccess/src/commons.h" 1
# 157 "project/goaccess/src/ui.h" 2
# 1 "project/goaccess/src/sort.h" 1
# 37 "project/goaccess/src/sort.h"
# 1 "project/goaccess/src/commons.h" 1
# 38 "project/goaccess/src/sort.h" 2
# 1 "project/goaccess/src/parser.h" 1
# 51 "project/goaccess/src/parser.h"
# 1 "project/goaccess/src/commons.h" 1
# 52 "project/goaccess/src/parser.h" 2



typedef struct GLogItem_ {
  char *agent;
  char *browser;
  char *browser_type;
  char *continent;
  char *country;
  char *date;
  char *host;
  char *keyphrase;
  char *method;
  char *os;
  char *os_type;
  char *protocol;
  char *qstr;
  char *ref;
  char *req;
  char *req_key;
  char *status;
  char *time;
  char *uniq_key;
  char *vhost;
  char *userid;
  char *cache_status;

  char site[511 + 1];
  char agent_hex[64];

  uint64_t resp_size;
  uint64_t serve_time;

  uint32_t numdate;
  uint32_t agent_hash;
  int ignorelevel;
  int type_ip;
  int is_404;
  int is_static;
  int uniq_nkey;
  int agent_nkey;


  char *mime_type;
  char *tls_type;
  char *tls_cypher;
  char *tls_type_cypher;

  char *errstr;
  struct tm dt;
} GLogItem;

typedef struct GLastParse_ {
  uint32_t line;
  int64_t ts;
  uint64_t size;
  uint16_t snippetlen;
  char snippet[4096u + 1];
} GLastParse;


typedef struct GLog_ {
  uint8_t piping:1;
  uint8_t log_erridx;
  uint32_t read;
  uint32_t inode;
  uint64_t bytes;
  uint64_t size;
  uint64_t length;
  uint64_t invalid;
  uint64_t processed;


  uint16_t snippetlen;
  char snippet[4096u + 1];

  GLogItem *items;
  GLastParse lp;

  char *filename;
  char **errors;

  FILE *pipe;
} GLog;


typedef struct Logs_ {
  uint8_t restored:1;
  uint8_t load_from_disk_only:1;
  uint64_t *processed;
  uint64_t offset;
  int size;
  char *filename;
  GLog *glog;
} Logs;


typedef enum {
  U32,
  STR
} datatype;


typedef struct GRawDataItem_ {
  uint32_t nkey;
  union {
    const char *data;
    uint32_t hits;
  };
} GRawDataItem;


typedef struct GRawData_ {
  GRawDataItem *items;
  GModule module;
  datatype type;
  int idx;
  int size;
} GRawData;


char *extract_by_delim (char **str, const char *end);
char *fgetline (FILE * fp);
char **test_format (Logs * logs, int *len);
int parse_log (Logs * logs, int dry_run);
int pre_process_log (GLog * glog, char *line, int dry_run);
int set_initial_persisted_data (GLog * glog, FILE * fp, const char *fn);
void free_logerrors (GLog * glog);
void free_logs (Logs * logs);
void free_raw_data (GRawData * raw_data);
void output_logerrors (void);
void reset_struct (Logs * logs);

GLogItem *init_log_item (GLog * glog);
GRawDataItem *new_grawdata_item (unsigned int size);
GRawData *new_grawdata (void);
Logs *init_logs (int size);
# 39 "project/goaccess/src/sort.h" 2
# 48 "project/goaccess/src/sort.h"
typedef enum GSortField_ {
  SORT_BY_HITS,
  SORT_BY_VISITORS,
  SORT_BY_DATA,
  SORT_BY_BW,
  SORT_BY_AVGTS,
  SORT_BY_CUMTS,
  SORT_BY_MAXTS,
  SORT_BY_PROT,
  SORT_BY_MTHD,
} GSortField;


typedef enum GSortOrder_ {
  SORT_ASC,
  SORT_DESC
} GSortOrder;


typedef struct GSort_ {
  GModule module;
  GSortField field;
  GSortOrder sort;
} GSort;

extern GSort module_sort[17];
extern const int sort_choices[][11];;

GRawData *sort_raw_num_data (GRawData * raw_data, int ht_size);
GRawData *sort_raw_str_data (GRawData * raw_data, int ht_size);
const char *get_sort_field_key (GSortField field);
const char *get_sort_field_str (GSortField field);
const char *get_sort_order_str (GSortOrder order);
int can_sort_module (GModule module, int field);
int get_sort_field_enum (const char *str);
int get_sort_order_enum (const char *str);
int strcmp_asc (const void *a, const void *b);
int cmp_ui32_asc (const void *a, const void *b);
int cmp_ui32_desc (const void *a, const void *b);
void parse_initial_sort (void);
void set_initial_sort (const char *smod, const char *sfield, const char *ssort);
void sort_holder_items (GHolderItem * items, int size, GSort sort);
# 158 "project/goaccess/src/ui.h" 2


typedef struct GFind_ {
  GModule module;
  char *pattern;
  int next_idx;
  int next_parent_idx;
  int next_sub_idx;
  int look_in_sub;
  int done;
  int icase;
} GFind;


typedef struct GScrollModule_ {
  int scroll;
  int offset;
} GScrollModule;


typedef struct GScroll_ {
  GScrollModule module[17];
  GModule current;
  int dash;
  int expanded;
} GScroll;


typedef struct GSpinner_ {
  const char *label;
  GColors *(*color) (void);
  int curses;
  int spin_x;
  int w;
  int x;
  int y;
  pthread_mutex_t mutex;
  pthread_t thread;
  uint64_t **processed;
  char **filename;
  WINDOW *win;
  enum {
    SPN_RUN,
    SPN_END
  } state;
} GSpinner;



typedef struct GOutput_ {
  GModule module;
  int8_t visitors;
  int8_t hits;
  int8_t percent;
  int8_t bw;
  int8_t avgts;
  int8_t cumts;
  int8_t maxts;
  int8_t protocol;
  int8_t method;
  int8_t data;
  int8_t graph;
  int8_t sub_graph;
} GOutput;


GOutput *output_lookup (GModule module);
GSpinner *new_gspinner (void);

char *get_browser_type (char *line);
char *get_overall_header (GHolder *h);
char *input_string (WINDOW * win, int pos_y, int pos_x, size_t max_width, const char *str, int enable_case, int *toggle_case);
const char *module_to_desc (GModule module);
const char *module_to_head (GModule module);
const char *module_to_id (GModule module);
const char *module_to_label (GModule module);
GAgents *load_host_agents (const char *addr);
int get_start_end_parsing_dates (char **start, char **end, const char *f);
int render_confdlg (Logs * logs, GSpinner * spinner);
void close_win (WINDOW * w);
void display_general (WINDOW * win, GHolder *h);
void draw_header (WINDOW * win, const char *s, const char *fmt, int y, int x, int w, GColors * (*func) (void));
void end_spinner (void);
void generate_time (void);
void init_colors (int force);
void init_windows (WINDOW ** header_win, WINDOW ** main_win);
void load_agent_list (WINDOW * main_win, char *addr);
void load_help_popup (WINDOW * main_win);
void load_schemes_win (WINDOW * main_win);
void load_sort_win (WINDOW * main_win, GModule module, GSort * sort);
void lock_spinner (void);
void set_curses_spinner (GSpinner *spinner);
void set_input_opts (void);
void set_wbkgd (WINDOW *main_win, WINDOW *header_win);
void term_size (WINDOW * main_win, int *main_win_height);
void ui_spinner_create (GSpinner * spinner);
void unlock_spinner (void);
void update_active_module (WINDOW * header_win, GModule current);
void update_header (WINDOW * header_win, int current);
# 40 "project/goaccess/src/gdashboard.h" 2
# 60 "project/goaccess/src/gdashboard.h"
typedef struct GDashRender_ {
  WINDOW *win;
  int y;
  int w;
  int idx;
  int sel;
} GDashRender;


typedef struct GDashData_ {
  GMetrics *metrics;
  short is_subitem;
} GDashData;


typedef struct GDashMeta_ {
  uint64_t max_hits;
  uint64_t max_visitors;



  int hits_len;
  int hits_perc_len;
  int visitors_len;
  int visitors_perc_len;
  int bw_len;
  int avgts_len;
  int cumts_len;
  int maxts_len;
  int method_len;
  int protocol_len;
  int data_len;
} GDashMeta;


typedef struct GDashModule_ {
  GDashData *data;
  GModule module;
  GDashMeta meta;

  const char *head;
  const char *desc;

  int alloc_data;

  int dash_size;
  int holder_size;
  int ht_size;
  int idx_data;

  unsigned short pos_y;
} GDashModule;


typedef struct GDash_ {
  int total_alloc;
  GDashModule module[17];
} GDash;


GDashData *new_gdata (uint32_t size);
GDash *new_gdash (void);
int get_num_collapsed_data_rows (void);
int get_num_expanded_data_rows (void);
int perform_next_find (GHolder * h, GScroll * scroll);
int render_find_dialog (WINDOW * main_win, GScroll * scroll);
int set_module_from_mouse_event (GScroll * scroll, GDash * dash, int y);
uint32_t get_ht_size_by_module (GModule module);
void display_content (WINDOW * win, GDash * dash, GScroll * scroll);
void free_dashboard (GDash * dash);
void load_data_to_dash (GHolder * h, GDash * dash, GModule module, GScroll * scroll);
void reset_find (void);
void reset_scroll_offsets (GScroll * scroll);
# 43 "project/goaccess/src/gdashboard.c" 2

# 1 "project/goaccess/src/gkhash.h" 1
# 36 "project/goaccess/src/gkhash.h"
# 1 "project/goaccess/src/gstorage.h" 1
# 33 "project/goaccess/src/gstorage.h"
# 1 "project/goaccess/src/commons.h" 1
# 34 "project/goaccess/src/gstorage.h" 2







typedef enum GSMetric_ {
  MTRC_KEYMAP,
  MTRC_ROOTMAP,
  MTRC_DATAMAP,
  MTRC_UNIQMAP,
  MTRC_ROOT,
  MTRC_HITS,
  MTRC_VISITORS,
  MTRC_BW,
  MTRC_CUMTS,
  MTRC_MAXTS,
  MTRC_METHODS,
  MTRC_PROTOCOLS,
  MTRC_AGENTS,
  MTRC_METADATA,
  MTRC_UNIQUE_KEYS,
  MTRC_AGENT_KEYS,
  MTRC_AGENT_VALS,
  MTRC_CNT_VALID,
  MTRC_CNT_BW,
} GSMetric;



typedef enum GAMetric_ {
  MTRC_DATES,
  MTRC_SEQS,
  MTRC_CNT_OVERALL,
  MTRC_HOSTNAMES,
  MTRC_LAST_PARSE,
  MTRC_JSON_LOGFMT,
  MTRC_METH_PROTO,
  MTRC_DB_PROPS,
} GAMetric;




typedef struct GKeyData_ {
  const void *data;
  uint32_t dhash;
  uint32_t data_nkey;
  uint32_t cdnkey;

  uint32_t rhash;
  const void *root;
  const void *root_key;
  uint32_t root_nkey;
  uint32_t crnkey;

  void *uniq_key;
  uint32_t uniq_nkey;

  uint32_t numdate;
} GKeyData;

typedef struct GParse_ {
  GModule module;
  int (*key_data) (GKeyData * kdata, GLogItem * logitem);


  void (*datamap) (GModule module, GKeyData * kdata);
  void (*rootmap) (GModule module, GKeyData * kdata);
  void (*hits) (GModule module, GKeyData * kdata);
  void (*visitor) (GModule module, GKeyData * kdata);
  void (*bw) (GModule module, GKeyData * kdata, uint64_t size);
  void (*cumts) (GModule module, GKeyData * kdata, uint64_t ts);
  void (*maxts) (GModule module, GKeyData * kdata, uint64_t ts);
  void (*method) (GModule module, GKeyData * kdata, const char *data);
  void (*protocol) (GModule module, GKeyData * kdata, const char *data);
  void (*agent) (GModule module, GKeyData * kdata, uint32_t agent_nkey);
} GParse;

typedef struct httpmethods_ {
  const char *method;
  int len;
} httpmethods;

typedef struct httpprotocols_ {
  const char *protocol;
  int len;
} httpprotocols;

extern const httpmethods http_methods[];
extern const httpprotocols http_protocols[];
extern size_t http_methods_len;
extern size_t http_protocols_len;

char *get_mtr_str (GSMetric metric);
int excluded_ip (GLogItem * logitem);
uint32_t *i322ptr (uint32_t val);
uint64_t *uint642ptr (uint64_t val);
void count_process_and_invalid (GLog * glog, const char *line);
void count_process (GLog * glog);
void free_gmetrics (GMetrics * metric);
void insert_methods_protocols (void);
void process_log (GLogItem * logitem);
void set_data_metrics (GMetrics * ometrics, GMetrics ** nmetrics, GPercTotals totals);
void set_module_totals (GPercTotals * totals);
void uncount_invalid (GLog * glog);
void uncount_processed (GLog * glog);
GMetrics *new_gmetrics (void);
# 37 "project/goaccess/src/gkhash.h" 2
# 1 "project/goaccess/src/khash.h" 1
# 130 "project/goaccess/src/khash.h"
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
# 131 "project/goaccess/src/khash.h" 2




typedef unsigned int khint32_t;





typedef unsigned long khint64_t;
# 162 "project/goaccess/src/khash.h"
typedef khint32_t khint_t;
typedef khint_t khiter_t;
# 192 "project/goaccess/src/khash.h"
static const double __ac_HASH_UPPER = 0.77;
# 442 "project/goaccess/src/khash.h"
  static inline khint_t __ac_X31_hash_string (const char *s) {
  khint_t h = (khint_t) * s;
  if (h)
    for (++s; *s; ++s)
      h = (h << 5) - h + (khint_t) * s;
  return h;
  }
# 461 "project/goaccess/src/khash.h"
static inline khint_t
__ac_Wang_hash (khint_t key) {
  key += ~(key << 15);
  key ^= (key >> 10);
  key += (key << 3);
  key ^= (key >> 6);
  key += ~(key << 11);
  key ^= (key >> 16);
  return key;
}
# 662 "project/goaccess/src/khash.h"
typedef const char *kh_cstr_t;
# 38 "project/goaccess/src/gkhash.h" 2






typedef enum GSMetricType_ {

  MTRC_TYPE_II32,

  MTRC_TYPE_IS32,

  MTRC_TYPE_IU64,

  MTRC_TYPE_SI32,

  MTRC_TYPE_SI08,

  MTRC_TYPE_II08,

  MTRC_TYPE_SS32,

  MTRC_TYPE_IGSL,

  MTRC_TYPE_SU64,

  MTRC_TYPE_IGKH,

  MTRC_TYPE_U648,

  MTRC_TYPE_IGLP,
} GSMetricType;

typedef struct GKDB_ GKDB;
typedef struct GKHashStorage_ GKHashStorage;



typedef struct kh_igdb_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GKDB * *vals; } kh_igdb_t; static inline __attribute__ ((__unused__)) kh_igdb_t *kh_init_igdb(void) { return (kh_igdb_t*) calloc(1,sizeof(kh_igdb_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_igdb(kh_igdb_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_igdb(kh_igdb_t *h) { if (h && h->flags) { 
# 76 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 76 "project/goaccess/src/gkhash.h"
h->flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 
# 76 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 76 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 76 "project/goaccess/src/gkhash.h"
h->flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 76 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_igdb(const kh_igdb_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_igdb(kh_igdb_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 76 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 76 "project/goaccess/src/gkhash.h"
new_flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 
# 76 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 76 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 76 "project/goaccess/src/gkhash.h"
new_flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 76 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GKDB * *new_vals = (GKDB * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKDB *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GKDB * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GKDB * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GKDB * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKDB *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_igdb(kh_igdb_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_igdb (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_igdb (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_igdb(kh_igdb_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_igkh_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GKHashStorage * *vals; } kh_igkh_t; static inline __attribute__ ((__unused__)) kh_igkh_t *kh_init_igkh(void) { return (kh_igkh_t*) calloc(1,sizeof(kh_igkh_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_igkh(kh_igkh_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_igkh(kh_igkh_t *h) { if (h && h->flags) { 
# 78 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 78 "project/goaccess/src/gkhash.h"
h->flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 
# 78 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 78 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 78 "project/goaccess/src/gkhash.h"
h->flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 78 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_igkh(const kh_igkh_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_igkh(kh_igkh_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 78 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 78 "project/goaccess/src/gkhash.h"
new_flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 
# 78 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 78 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 78 "project/goaccess/src/gkhash.h"
new_flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 78 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GKHashStorage * *new_vals = (GKHashStorage * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKHashStorage *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GKHashStorage * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GKHashStorage * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GKHashStorage * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKHashStorage *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_igkh(kh_igkh_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_igkh (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_igkh (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_igkh(kh_igkh_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_ii32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; uint32_t *vals; } kh_ii32_t; static inline __attribute__ ((__unused__)) kh_ii32_t *kh_init_ii32(void) { return (kh_ii32_t*) calloc(1,sizeof(kh_ii32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_ii32(kh_ii32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_ii32(kh_ii32_t *h) { if (h && h->flags) { 
# 80 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 80 "project/goaccess/src/gkhash.h"
h->flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 
# 80 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 80 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 80 "project/goaccess/src/gkhash.h"
h->flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 80 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_ii32(const kh_ii32_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_ii32(kh_ii32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 80 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 80 "project/goaccess/src/gkhash.h"
new_flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 
# 80 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 80 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 80 "project/goaccess/src/gkhash.h"
new_flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 80 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint32_t *new_vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; uint32_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint32_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_ii32(kh_ii32_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_ii32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_ii32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_ii32(kh_ii32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_is32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; char * *vals; } kh_is32_t; static inline __attribute__ ((__unused__)) kh_is32_t *kh_init_is32(void) { return (kh_is32_t*) calloc(1,sizeof(kh_is32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_is32(kh_is32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_is32(kh_is32_t *h) { if (h && h->flags) { 
# 82 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 82 "project/goaccess/src/gkhash.h"
h->flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 
# 82 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 82 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 82 "project/goaccess/src/gkhash.h"
h->flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 82 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_is32(const kh_is32_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_is32(kh_is32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 82 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 82 "project/goaccess/src/gkhash.h"
new_flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 
# 82 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 82 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 82 "project/goaccess/src/gkhash.h"
new_flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 82 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { char * *new_vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; char * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { char * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_is32(kh_is32_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_is32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_is32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_is32(kh_is32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_iu64_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; uint64_t *vals; } kh_iu64_t; static inline __attribute__ ((__unused__)) kh_iu64_t *kh_init_iu64(void) { return (kh_iu64_t*) calloc(1,sizeof(kh_iu64_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_iu64(kh_iu64_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_iu64(kh_iu64_t *h) { if (h && h->flags) { 
# 84 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 84 "project/goaccess/src/gkhash.h"
h->flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 
# 84 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 84 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 84 "project/goaccess/src/gkhash.h"
h->flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 84 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_iu64(const kh_iu64_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_iu64(kh_iu64_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 84 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 84 "project/goaccess/src/gkhash.h"
new_flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 
# 84 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 84 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 84 "project/goaccess/src/gkhash.h"
new_flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 84 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint64_t *new_vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; uint64_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint64_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_iu64(kh_iu64_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_iu64 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_iu64 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_iu64(kh_iu64_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_si32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; uint32_t *vals; } kh_si32_t; static inline __attribute__ ((__unused__)) kh_si32_t *kh_init_si32(void) { return (kh_si32_t*) calloc(1,sizeof(kh_si32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_si32(kh_si32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_si32(kh_si32_t *h) { if (h && h->flags) { 
# 86 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 86 "project/goaccess/src/gkhash.h"
h->flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 
# 86 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 86 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 86 "project/goaccess/src/gkhash.h"
h->flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 86 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_si32(const kh_si32_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_si32(kh_si32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 86 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 86 "project/goaccess/src/gkhash.h"
new_flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 
# 86 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 86 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 86 "project/goaccess/src/gkhash.h"
new_flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 86 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint32_t *new_vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; uint32_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint32_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_si32(kh_si32_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_si32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_si32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_si32(kh_si32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_si08_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; uint8_t *vals; } kh_si08_t; static inline __attribute__ ((__unused__)) kh_si08_t *kh_init_si08(void) { return (kh_si08_t*) calloc(1,sizeof(kh_si08_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_si08(kh_si08_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_si08(kh_si08_t *h) { if (h && h->flags) { 
# 88 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 88 "project/goaccess/src/gkhash.h"
h->flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 
# 88 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 88 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 88 "project/goaccess/src/gkhash.h"
h->flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 88 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_si08(const kh_si08_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_si08(kh_si08_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 88 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 88 "project/goaccess/src/gkhash.h"
new_flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 
# 88 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 88 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 88 "project/goaccess/src/gkhash.h"
new_flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 88 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint8_t *new_vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; uint8_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint8_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_si08(kh_si08_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_si08 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_si08 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_si08(kh_si08_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_ii08_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; uint8_t *vals; } kh_ii08_t; static inline __attribute__ ((__unused__)) kh_ii08_t *kh_init_ii08(void) { return (kh_ii08_t*) calloc(1,sizeof(kh_ii08_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_ii08(kh_ii08_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_ii08(kh_ii08_t *h) { if (h && h->flags) { 
# 90 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 90 "project/goaccess/src/gkhash.h"
h->flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 
# 90 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 90 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 90 "project/goaccess/src/gkhash.h"
h->flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 90 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_ii08(const kh_ii08_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_ii08(kh_ii08_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 90 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 90 "project/goaccess/src/gkhash.h"
new_flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 
# 90 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 90 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 90 "project/goaccess/src/gkhash.h"
new_flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 90 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint8_t *new_vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; uint8_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint8_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_ii08(kh_ii08_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_ii08 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_ii08 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_ii08(kh_ii08_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_ss32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; char * *vals; } kh_ss32_t; static inline __attribute__ ((__unused__)) kh_ss32_t *kh_init_ss32(void) { return (kh_ss32_t*) calloc(1,sizeof(kh_ss32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_ss32(kh_ss32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_ss32(kh_ss32_t *h) { if (h && h->flags) { 
# 92 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 92 "project/goaccess/src/gkhash.h"
h->flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 
# 92 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 92 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 92 "project/goaccess/src/gkhash.h"
h->flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 92 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_ss32(const kh_ss32_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_ss32(kh_ss32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 92 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 92 "project/goaccess/src/gkhash.h"
new_flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 
# 92 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 92 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 92 "project/goaccess/src/gkhash.h"
new_flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 92 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { char * *new_vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; char * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { char * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_ss32(kh_ss32_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_ss32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_ss32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_ss32(kh_ss32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_iglp_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GLastParse *vals; } kh_iglp_t; static inline __attribute__ ((__unused__)) kh_iglp_t *kh_init_iglp(void) { return (kh_iglp_t*) calloc(1,sizeof(kh_iglp_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_iglp(kh_iglp_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_iglp(kh_iglp_t *h) { if (h && h->flags) { 
# 94 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 94 "project/goaccess/src/gkhash.h"
h->flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 
# 94 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 94 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 94 "project/goaccess/src/gkhash.h"
h->flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 94 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_iglp(const kh_iglp_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_iglp(kh_iglp_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 94 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 94 "project/goaccess/src/gkhash.h"
new_flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 
# 94 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 94 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 94 "project/goaccess/src/gkhash.h"
new_flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 94 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GLastParse *new_vals = (GLastParse *) realloc((void *) h->vals,new_n_buckets * sizeof (GLastParse)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GLastParse val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GLastParse tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GLastParse *) realloc((void *) h->vals,new_n_buckets * sizeof (GLastParse)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_iglp(kh_iglp_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_iglp (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_iglp (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_iglp(kh_iglp_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_igsl_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GSLList * *vals; } kh_igsl_t; static inline __attribute__ ((__unused__)) kh_igsl_t *kh_init_igsl(void) { return (kh_igsl_t*) calloc(1,sizeof(kh_igsl_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_igsl(kh_igsl_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_igsl(kh_igsl_t *h) { if (h && h->flags) { 
# 96 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 96 "project/goaccess/src/gkhash.h"
h->flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 
# 96 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 96 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 96 "project/goaccess/src/gkhash.h"
h->flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 96 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_igsl(const kh_igsl_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_igsl(kh_igsl_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 96 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 96 "project/goaccess/src/gkhash.h"
new_flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 
# 96 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 96 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 96 "project/goaccess/src/gkhash.h"
new_flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 96 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GSLList * *new_vals = (GSLList * *) realloc((void *) h->vals,new_n_buckets * sizeof (GSLList *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GSLList * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GSLList * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GSLList * *) realloc((void *) h->vals,new_n_buckets * sizeof (GSLList *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_igsl(kh_igsl_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_igsl (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_igsl (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_igsl(kh_igsl_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_su64_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; uint64_t *vals; } kh_su64_t; static inline __attribute__ ((__unused__)) kh_su64_t *kh_init_su64(void) { return (kh_su64_t*) calloc(1,sizeof(kh_su64_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_su64(kh_su64_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_su64(kh_su64_t *h) { if (h && h->flags) { 
# 98 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 98 "project/goaccess/src/gkhash.h"
h->flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 
# 98 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 98 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 98 "project/goaccess/src/gkhash.h"
h->flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 98 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_su64(const kh_su64_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_su64(kh_su64_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 98 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 98 "project/goaccess/src/gkhash.h"
new_flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 
# 98 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 98 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 98 "project/goaccess/src/gkhash.h"
new_flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 98 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint64_t *new_vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; uint64_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint64_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_su64(kh_su64_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_su64 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_su64 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_su64(kh_su64_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_u648_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint64_t *keys; uint8_t *vals; } kh_u648_t; static inline __attribute__ ((__unused__)) kh_u648_t *kh_init_u648(void) { return (kh_u648_t*) calloc(1,sizeof(kh_u648_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_u648(kh_u648_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_u648(kh_u648_t *h) { if (h && h->flags) { 
# 100 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 100 "project/goaccess/src/gkhash.h"
h->flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 
# 100 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 100 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 100 "project/goaccess/src/gkhash.h"
h->flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 100 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_u648(const kh_u648_t *h, khint64_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)((key)>>33^(key)^(key)<<11); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_u648(kh_u648_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 100 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 100 "project/goaccess/src/gkhash.h"
new_flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 
# 100 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 100 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 100 "project/goaccess/src/gkhash.h"
new_flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 100 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint64_t *new_keys = (khint64_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint64_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint8_t *new_vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint64_t key = h->keys[j]; uint8_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)((key)>>33^(key)^(key)<<11); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint64_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint8_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint64_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint64_t)); if (1) h->vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_u648(kh_u648_t *h, khint64_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_u648 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_u648 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)((key)>>33^(key)^(key)<<11); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_u648(kh_u648_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };


typedef struct GKHashMetric_ {
  union {
    GSMetric storem;
    GAMetric dbm;
  } metric;
  GSMetricType type;
  void *(*alloc) (void);
  void (*des) (void *, uint8_t free_data);
  void (*del) (void *, uint8_t free_data);
  uint8_t free_data:1;
  void *hash;
  const char *filename;
} GKHashMetric;


typedef struct GKHashModule_ {
  GModule module;
  GKHashMetric metrics[19];
} GKHashModule;


typedef struct GKHashGlobal_ {
  GKHashMetric metrics[19];
} GKHashGlobal;

struct GKHashStorage_ {
  GKHashModule *mhash;
  GKHashGlobal *ghash;
};


typedef struct GKHashDB_ {
  GKHashMetric metrics[8];
} GKHashDB;


struct GKDB_ {
  GKHashDB *hdb;
  GKHashModule *cache;
  GKHashStorage *store;
  Logs *logs;
};
# 167 "project/goaccess/src/gkhash.h"
extern GKHashMetric module_metrics[];
extern const GKHashMetric global_metrics[];
extern const GKHashMetric app_metrics[];
extern size_t global_metrics_len;
extern size_t module_metrics_len;
extern size_t app_metrics_len;
# 335 "project/goaccess/src/gkhash.h"
char *get_mtr_type_str (GSMetricType type);
char *ht_get_datamap (GModule module, uint32_t key);
char *ht_get_host_agent_val (uint32_t key);
char *ht_get_hostname (const char *host);
char *ht_get_json_logfmt (const char *key);
char *ht_get_method (GModule module, uint32_t key);
char *ht_get_protocol (GModule module, uint32_t key);
char *ht_get_root (GModule module, uint32_t key);
int ht_inc_cnt_bw (uint32_t date, uint64_t inc);
int ht_insert_agent (GModule module, uint32_t date, uint32_t key, uint32_t value);
int ht_insert_agent_value (uint32_t date, uint32_t key, char *value);
int ht_insert_bw (GModule module, uint32_t date, uint32_t key, uint64_t inc, uint32_t ckey);
int ht_insert_cumts (GModule module, uint32_t date, uint32_t key, uint64_t inc, uint32_t ckey);
int ht_insert_datamap (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_date (uint32_t key);
int ht_insert_hostname (const char *ip, const char *host);
int ht_insert_json_logfmt (__attribute__((unused)) void *userdata, char *key, char *spec);
int ht_insert_last_parse (uint32_t key, GLastParse lp);
int ht_insert_maxts (GModule module, uint32_t date, uint32_t key, uint64_t value, uint32_t ckey);
int ht_insert_meta_data (GModule module, uint32_t date, const char *key, uint64_t value);
int ht_insert_method (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_protocol (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_root (GModule module, uint32_t date, uint32_t key, uint32_t value, uint32_t dkey, uint32_t rkey);
int ht_insert_rootmap (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_uniqmap (GModule module, uint32_t date, uint32_t key, uint32_t value);
int invalidate_date (int date);
int rebuild_rawdata_cache (void);
uint32_t *get_sorted_dates (uint32_t *len);
uint32_t ht_get_excluded_ips (void);
uint32_t ht_get_hits (GModule module, int key);
uint32_t ht_get_invalid (void);
uint32_t ht_get_keymap (GModule module, const char *key);
uint32_t ht_get_processed (void);
uint32_t ht_get_processing_time (void);
uint32_t ht_get_size_datamap (GModule module);
uint32_t ht_get_size_dates (void);
uint32_t ht_get_size_uniqmap (GModule module);
uint32_t ht_get_visitors (GModule module, uint32_t key);
uint32_t ht_inc_cnt_overall (const char *key, uint32_t val);
uint32_t ht_inc_cnt_valid (uint32_t date, uint32_t inc);
uint32_t ht_insert_agent_key (uint32_t date, uint32_t key);
uint32_t ht_insert_hits (GModule module, uint32_t date, uint32_t key, uint32_t inc, uint32_t ckey);
uint32_t ht_insert_keymap (GModule module, uint32_t date, uint32_t key, uint32_t * ckey);
uint32_t ht_insert_unique_key (uint32_t date, const char *key);
uint32_t ht_insert_unique_seq (const char *key);
uint32_t ht_insert_visitor (GModule module, uint32_t date, uint32_t key, uint32_t inc, uint32_t ckey);
uint32_t ht_sum_valid (void);
uint64_t ht_get_bw (GModule module, uint32_t key);
uint64_t ht_get_cumts (GModule module, uint32_t key);
uint64_t ht_get_maxts (GModule module, uint32_t key);
uint64_t ht_get_meta_data (GModule module, const char *key);
uint64_t ht_sum_bw (void);
uint8_t ht_insert_meth_proto (const char *key);
void destroy_date_stores (int date);
void free_storage (void);
void ht_get_bw_min_max (GModule module, uint64_t * min, uint64_t * max);
void ht_get_cumts_min_max (GModule module, uint64_t * min, uint64_t * max);
void ht_get_hits_min_max (GModule module, uint32_t * min, uint32_t * max);
void ht_get_maxts_min_max (GModule module, uint64_t * min, uint64_t * max);
void ht_get_visitors_min_max (GModule module, uint32_t * min, uint32_t * max);
void init_pre_storage (Logs *logs);
void init_storage (void);
void u64decode (uint64_t n, uint32_t * x, uint32_t * y);

int ins_iglp (kh_iglp_t * hash, uint32_t key, GLastParse lp);
int ins_igsl (kh_igsl_t * hash, uint32_t key, uint32_t value);
int ins_ii08 (kh_ii08_t * hash, uint32_t key, uint8_t value);
int ins_ii32 (kh_ii32_t * hash, uint32_t key, uint32_t value);
int ins_is32 (kh_is32_t * hash, uint32_t key, char *value);
int ins_iu64 (kh_iu64_t * hash, uint32_t key, uint64_t value);
int ins_si08 (kh_si08_t * hash, const char *key, uint8_t value);
int ins_si32 (kh_si32_t * hash, const char *key, uint32_t value);
int ins_su64 (kh_su64_t * hash, const char *key, uint64_t value);
int ins_u648 (kh_u648_t * hash, uint64_t key, uint8_t value);
void *get_db_instance (uint32_t key);
void * get_hash (int module, uint64_t key, GSMetric metric);
void *get_hdb (GKDB * db, GAMetric mtrc);

GLastParse ht_get_last_parse (uint32_t key);
GRawData *parse_raw_data (GModule module);
GSLList *ht_get_host_agent_list (GModule module, uint32_t key);
GSLList *ht_get_keymap_list_from_key (GModule module, uint32_t key);
Logs *get_db_logs(uint32_t instance);
# 45 "project/goaccess/src/gdashboard.c" 2
# 1 "project/goaccess/src/gholder.h" 1
# 37 "project/goaccess/src/gholder.h"
# 1 "project/goaccess/src/commons.h" 1
# 38 "project/goaccess/src/gholder.h" 2
# 1 "project/goaccess/src/sort.h" 1
# 39 "project/goaccess/src/gholder.h" 2


GHolder *new_gholder (uint32_t size);
void *add_hostname_node (void *ptr_holder);
void free_holder_by_module (GHolder ** holder, GModule module);
void free_holder (GHolder ** holder);
void load_holder_data (GRawData * raw_data, GHolder * h, GModule module, GSort sort);
void load_host_to_holder (GHolder * h, char *ip);
int dup_key_list (void *val, GSLList ** user_data);
# 46 "project/goaccess/src/gdashboard.c" 2

# 1 "project/goaccess/src/error.h" 1
# 34 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/commons.h" 1
# 35 "project/goaccess/src/error.h" 2
# 47 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/settings.h" 1
# 34 "project/goaccess/src/settings.h"
# 1 "project/goaccess/src/commons.h" 1
# 35 "project/goaccess/src/settings.h" 2
# 47 "project/goaccess/src/settings.h"
typedef enum LOGTYPE {
  COMBINED,
  VCOMBINED,
  COMMON,
  VCOMMON,
  W3C,
  CLOUDFRONT,
  CLOUDSTORAGE,
  AWSELB,
  SQUID,
  AWSS3,
  CADDY,
  AWSALB,
} GLogType;


typedef struct GPreConfTime_ {
  const char *fmt24;
  const char *usec;
  const char *sec;
} GPreConfTime;


typedef struct GPreConfDate_ {
  const char *apache;
  const char *w3c;
  const char *usec;
  const char *sec;
} GPreConfDate;


typedef struct GPreConfLog_ {
  const char *combined;
  const char *vcombined;
  const char *common;
  const char *vcommon;
  const char *w3c;
  const char *cloudfront;
  const char *cloudstorage;
  const char *awselb;
  const char *squid;
  const char *awss3;
  const char *caddy;
  const char *awsalb;
} GPreConfLog;



typedef struct GConf_
{

  const char *colors[64];
  const char *enable_panels[17];
  const char *filenames[3072];
  const char *hide_referers[64];
  const char *ignore_ips[1024 + 128];
  const char *ignore_panels[17];
  const char *ignore_referers[64];
  const char *ignore_status[64];
  const char *output_formats[3];
  const char *sort_panels[17];
  const char *static_files[128];


  char *date_format;
  char *date_num_format;
  char *time_format;
  char *spec_date_time_format;
  char *spec_date_time_num_format;
  char *log_format;
  char *iconfigfile;
  char ***user_browsers_hash;

  const char *debug_log;
  const char *geoip_database;
  const char *html_custom_css;
  const char *html_custom_js;
  const char *html_prefs;
  const char *html_report_title;
  const char *invalid_requests_log;
  const char *unknowns_log;
  const char *pidfile;
  const char *browsers_file;
  const char *db_path;


  const char *addr;
  const char *fifo_in;
  const char *fifo_out;
  const char *origin;
  const char *port;
  const char *sslcert;
  const char *sslkey;
  const char *ws_url;
  const char *unix_socket;


  int all_static_files;
  int anonymize_ip;
  int append_method;
  int append_protocol;
  int client_err_to_unique_count;
  int code444_as_404;
  int color_scheme;
  int crawlers_only ;
  int daemonize;
  const char *username;
  int double_decode;
  int enable_html_resolver;
  int geo_db;
  int hl_header;
  int ignore_crawlers;
  int ignore_qstr;
  int ignore_statics;
  int json_pretty_print;
  int list_agents;
  int load_conf_dlg;
  int load_global_config;
  int max_items;
  int mouse_support;
  int no_color;
  int no_strict_status;
  int no_column_names;
  int no_csv_summary;
  int no_html_last_updated;
  int no_ip_validation;
  int no_parsing_spinner;
  int no_progress;
  int no_tab_scroll;
  int output_stdout;
  int persist;
  int process_and_exit;
  int real_os;
  int real_time_html;
  int restore;
  int skip_term_resolver;
  int is_json_log_format;
  uint32_t keep_last;
  uint32_t num_tests;
  uint64_t html_refresh;
  uint64_t log_size;


  int bandwidth;
  int date_spec_hr;
  int has_geocity;
  int has_geocountry;
  int hour_spec_min;
  int read_stdin;
  int serve_usecs;
  int stop_processing;
  int tailing_mode;


  int color_idx;
  int enable_panel_idx;
  int filenames_idx;
  int hide_referer_idx;
  int ignore_ip_idx;
  int ignore_panel_idx;
  int ignore_referer_idx;
  int ignore_status_idx;
  int output_format_idx;
  int sort_panel_idx;
  int static_file_idx;
  int browsers_hash_idx;

  size_t static_file_max_len;

} GConf;


char *get_selected_date_str (size_t idx);
char *get_selected_format_str (size_t idx);
char *get_selected_time_str (size_t idx);
const char *verify_formats (void);
int is_json_log_format (const char *fmt);
int parse_json_string (void *userdata, const char *str, int (*cb) (void *, char *, char *));
size_t get_selected_format_idx (void);
void set_date_format_str (const char *optarg);
void set_log_format_str (const char *optarg);
void set_spec_date_format (void);
void set_time_format_str (const char *optarg);

extern GConf conf;

char *get_config_file_path (void);
int parse_conf_file (int *argc, char ***argv);
void free_cmd_args (void);
void free_formats (void);
void set_default_static_files (void);
# 48 "project/goaccess/src/error.h" 2
# 80 "project/goaccess/src/error.h"
int access_log_open (const char *path);
void access_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void access_log_close (void);
void dbg_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void dbg_log_close (void);
void dbg_log_open (const char *file);
void dbg_printf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void invalid_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void unknowns_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void invalid_log_close (void);
void invalid_log_open (const char *path);
void set_signal_data (void *p);
void setup_sigsegv_handler (void);
void sigsegv_handler (int sig);
void unknowns_log_close (void);
void unknowns_log_open (const char *path);
# 48 "project/goaccess/src/gdashboard.c" 2

# 1 "project/goaccess/src/util.h" 1
# 62 "project/goaccess/src/util.h"
char *alloc_string (const char *str);
char *char_repeat (int n, char c);
char *char_replace (char *str, char o, char n);
char *deblank (char *str);
char *escape_str (const char *src);
char *filesize_str (unsigned long long log_size);
char *float2str (float d, int width);
char *get_global_config (void);
char *get_user_config (void);
char *get_visitors_date (const char *odate, const char *from, const char *to);
char *int2str (int d, int width);
char *left_pad_str (const char *s, int indent);
char *ltrim (char *s);
char *replace_str (const char *str, const char *old, const char *new);
char *rtrim (char *s);
char *secs_to_str (int secs);
char *strtoupper(char *str);
char *substring (const char *str, int begin, int len);
char *trim_str (char *str);
char *u322str (uint32_t d, int width);
char *u642str (uint64_t d, int width);
char *unescape_str (const char *src);
char *usecs_to_str (unsigned long long usec);
const char *verify_status_code (char *str);
const char *verify_status_code_type (const char *str);
int convert_date (char *res, const char *data, const char *from, const char *to, int size);
int count_matches (const char *s1, char c);
int find_output_type (char **filename, const char *ext, int alloc);
int hide_referer (const char *ref);
int ignore_referer (const char *ref);
int intlen (uint64_t num);
int invalid_ipaddr (char *str, int *ipvx);
int ip_in_range (const char *ip);
int ptr2int(char *ptr);
int str2int (const char *date);
int str_inarray (const char *s, const char *arr[], int size);
int str_to_time (const char *str, const char *fmt, struct tm *tm);
int valid_output_type (const char *filename);
off_t file_size (const char *filename);
size_t append_str (char **dest, const char *src);
uint32_t djb2(const unsigned char *str);
uint32_t ip_to_binary (const char *ip);
void genstr(char *dest, size_t len);
void strip_newlines (char *str);
void xstrncpy (char *dest, const char *source, const size_t dest_size);
# 50 "project/goaccess/src/gdashboard.c" 2
# 1 "project/goaccess/src/xmalloc.h" 1
# 33 "project/goaccess/src/xmalloc.h"
char *xstrdup (const char *s);
void *xcalloc (size_t nmemb, size_t size);
void *xmalloc (size_t size);
void *xrealloc (void *oldptr, size_t size);
# 51 "project/goaccess/src/gdashboard.c" 2

static GFind find_t;


void
reset_find (void) {
  if (find_t.pattern != 
# 57 "project/goaccess/src/gdashboard.c" 3 4
                       ((void *)0) 
# 57 "project/goaccess/src/gdashboard.c"
                            && *find_t.pattern != '\0')
    free (find_t.pattern);

  find_t.look_in_sub = 0;
  find_t.module = 0;
  find_t.next_idx = 0;
  find_t.next_parent_idx = 0;
  find_t.next_sub_idx = 0;
  find_t.pattern = 
# 65 "project/goaccess/src/gdashboard.c" 3 4
                  ((void *)0)
# 65 "project/goaccess/src/gdashboard.c"
                      ;
}




GDash *
new_gdash (void) {
  GDash *dash = xmalloc (sizeof (GDash));
  
# 74 "project/goaccess/src/gdashboard.c" 3 4
 __builtin___memset_chk (
# 74 "project/goaccess/src/gdashboard.c"
 dash
# 74 "project/goaccess/src/gdashboard.c" 3 4
 , 
# 74 "project/goaccess/src/gdashboard.c"
 0, sizeof *dash
# 74 "project/goaccess/src/gdashboard.c" 3 4
 , __builtin_object_size (
# 74 "project/goaccess/src/gdashboard.c"
 dash
# 74 "project/goaccess/src/gdashboard.c" 3 4
 , 0))
# 74 "project/goaccess/src/gdashboard.c"
                               ;
  dash->total_alloc = 0;

  return dash;
}




GDashData *
new_gdata (uint32_t size) {
  GDashData *data = xcalloc (size, sizeof (GDashData));

  return data;
}



static void
free_dashboard_data (GDashData item) {
  if (item.metrics == 
# 94 "project/goaccess/src/gdashboard.c" 3 4
                     ((void *)0)
# 94 "project/goaccess/src/gdashboard.c"
                         )
    return;

  if (item.metrics->data)
    free (item.metrics->data);
  if (item.metrics->bw.sbw)
    free (item.metrics->bw.sbw);
  if (conf.serve_usecs && item.metrics->avgts.sts)
    free (item.metrics->avgts.sts);
  if (conf.serve_usecs && item.metrics->cumts.sts)
    free (item.metrics->cumts.sts);
  if (conf.serve_usecs && item.metrics->maxts.sts)
    free (item.metrics->maxts.sts);
  free (item.metrics);
}



void
free_dashboard (GDash * dash) {
  GModule module;
  int j;
  size_t idx = 0;

  for (; (idx < (sizeof(module_list) / sizeof(module_list[0]))) && module_list[idx] != -1; ++idx) {
    module = module_list[idx];
    for (j = 0; j < dash->module[module].alloc_data; j++) {
      free_dashboard_data (dash->module[module].data[j]);
    }
    free (dash->module[module].data);
  }
  free (dash);
}






static GModule
get_find_current_module (GDash * dash, int offset) {
  GModule module;
  size_t idx = 0;

  for (; (idx < (sizeof(module_list) / sizeof(module_list[0]))) && module_list[idx] != -1; ++idx) {
    module = module_list[idx];


    if (dash->module[module].pos_y == offset)
      return module;

    if (dash->module[module].pos_y > offset)
      return module - 1;
  }

  return 0;
}




int
get_num_collapsed_data_rows (void) {

  int size = 12 - 5;


  return conf.no_column_names ? size + 2 : size;
}




int
get_num_expanded_data_rows (void) {

  int size = 32 - 5;


  return conf.no_column_names ? size + 2 : size;
}





static int
get_data_pos_rows (void) {
  return conf.no_column_names ? 4 - 2 : 4;
}





static int
get_xpos (void) {
  return 1;
}






int
set_module_from_mouse_event (GScroll * gscroll, GDash * dash, int y) {
  int module = 0;
  int offset = y - 7 - 1 + 1;
  if (gscroll->expanded) {
    module = get_find_current_module (dash, offset);
  } else {
    offset += gscroll->dash;
    module = offset / 12;
  }

  if (module >= 17)
    module = 17 - 1;
  else if (module < 0)
    module = 0;

  if ((int) gscroll->current == module)
    return 1;

  gscroll->current = module;
  return 0;
}





static char *
render_child_node (const char *data) {
  char *buf;
  int len = 0;






  const char *bend = "|";
  const char *horz = "`-";


  if (data == 
# 240 "project/goaccess/src/gdashboard.c" 3 4
             ((void *)0) 
# 240 "project/goaccess/src/gdashboard.c"
                  || *data == '\0')
    return 
# 241 "project/goaccess/src/gdashboard.c" 3 4
          ((void *)0)
# 241 "project/goaccess/src/gdashboard.c"
              ;

  len = 
# 243 "project/goaccess/src/gdashboard.c" 3 4
       __builtin___snprintf_chk (((void *)0), 
# 243 "project/goaccess/src/gdashboard.c"
       0
# 243 "project/goaccess/src/gdashboard.c" 3 4
       , 0, __builtin_object_size (((void *)0), 2 > 1 ? 1 : 0), 
# 243 "project/goaccess/src/gdashboard.c"
       " %s%s %s", bend, horz, data
# 243 "project/goaccess/src/gdashboard.c" 3 4
       )
# 243 "project/goaccess/src/gdashboard.c"
                                                       ;
  buf = xmalloc (len + 3);
  
# 245 "project/goaccess/src/gdashboard.c" 3 4
 __builtin___sprintf_chk (
# 245 "project/goaccess/src/gdashboard.c"
 buf
# 245 "project/goaccess/src/gdashboard.c" 3 4
 , 0, __builtin_object_size (
# 245 "project/goaccess/src/gdashboard.c"
 buf
# 245 "project/goaccess/src/gdashboard.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 245 "project/goaccess/src/gdashboard.c"
 " %s%s %s", bend, horz, data
# 245 "project/goaccess/src/gdashboard.c" 3 4
 )
# 245 "project/goaccess/src/gdashboard.c"
                                            ;

  return buf;
}





static char *
get_bars (int n, int max, int x) {
  int w, h;
  float len = 0.0;

  getmaxyx (stdscr, h, w);
  (void) h;

  len = ((((float) n) / max));
  len *= (w - x);
  if (len < 1)
    len = 1;
  return char_repeat (len, '|');
}





static void
set_max_metrics (GDashMeta * meta, GDashData * idata) {
  if (meta->max_hits < idata->metrics->hits)
    meta->max_hits = idata->metrics->hits;
  if (meta->max_visitors < idata->metrics->visitors)
    meta->max_visitors = idata->metrics->visitors;
}


static void
set_max_hit_len (GDashMeta * meta, GDashData * idata) {
  int vlen = intlen (idata->metrics->hits);
  int llen = strlen (dgettext (PACKAGE , "Hits"));

  if (vlen > meta->hits_len)
    meta->hits_len = vlen;



  if (llen > meta->hits_len)
    meta->hits_len = llen;
}


static void
set_max_hit_perc_len (GDashMeta * meta, GDashData * idata) {
  int vlen = intlen (idata->metrics->hits_perc);
  int llen = strlen (dgettext (PACKAGE , "h%"));

  if (vlen > meta->hits_perc_len)
    meta->hits_perc_len = vlen;



  if (llen > meta->hits_perc_len)
    meta->hits_perc_len = llen;
}


static void
set_max_visitors_len (GDashMeta * meta, GDashData * idata) {
  int vlen = intlen (idata->metrics->visitors);
  int llen = strlen (dgettext (PACKAGE , "Vis."));

  if (vlen > meta->visitors_len)
    meta->visitors_len = vlen;



  if (llen > meta->visitors_len)
    meta->visitors_len = llen;
}


static void
set_max_visitors_perc_len (GDashMeta * meta, GDashData * idata) {
  int vlen = intlen (idata->metrics->visitors_perc);
  int llen = strlen (dgettext (PACKAGE , "v%"));

  if (vlen > meta->visitors_perc_len)
    meta->visitors_perc_len = vlen;



  if (llen > meta->visitors_perc_len)
    meta->visitors_perc_len = llen;
}


static void
set_max_bw_len (GDashMeta * meta, GDashData * idata) {
  int vlen = strlen (idata->metrics->bw.sbw);
  int llen = strlen (dgettext (PACKAGE , "Tx. Amount"));

  if (vlen > meta->bw_len)
    meta->bw_len = vlen;



  if (llen > meta->bw_len)
    meta->bw_len = llen;
}


static void
set_max_avgts_len (GDashMeta * meta, GDashData * idata) {
  int vlen = 0, llen = 0;

  if (!conf.serve_usecs || !idata->metrics->avgts.sts)
    return;

  vlen = strlen (idata->metrics->avgts.sts);
  llen = strlen (dgettext (PACKAGE , "Avg. T.S."));

  if (vlen > meta->avgts_len)
    meta->avgts_len = vlen;



  if (llen > meta->avgts_len)
    meta->avgts_len = llen;
}


static void
set_max_cumts_len (GDashMeta * meta, GDashData * idata) {
  int vlen = 0, llen = 0;

  if (!conf.serve_usecs || !idata->metrics->cumts.sts)
    return;

  vlen = strlen (idata->metrics->cumts.sts);
  llen = strlen (dgettext (PACKAGE , "Avg. T.S."));

  if (vlen > meta->cumts_len)
    meta->cumts_len = vlen;



  if (llen > meta->cumts_len)
    meta->cumts_len = llen;
}


static void
set_max_maxts_len (GDashMeta * meta, GDashData * idata) {
  int vlen = 0, llen = 0;

  if (!conf.serve_usecs || !idata->metrics->maxts.sts)
    return;

  vlen = strlen (idata->metrics->maxts.sts);
  llen = strlen (dgettext (PACKAGE , "Avg. T.S."));

  if (vlen > meta->maxts_len)
    meta->maxts_len = vlen;



  if (llen > meta->maxts_len)
    meta->maxts_len = llen;
}


static void
set_max_method_len (GDashMeta * meta, GDashData * idata) {
  int vlen = 0, llen = 0;

  if (!conf.append_method || !idata->metrics->method)
    return;

  vlen = strlen (idata->metrics->method);
  llen = strlen (dgettext (PACKAGE , "Mtd"));

  if (vlen > meta->method_len)
    meta->method_len = vlen;



  if (llen > meta->method_len)
    meta->method_len = llen;
}


static void
set_max_protocol_len (GDashMeta * meta, GDashData * idata) {
  int vlen = 0, llen = 0;

  if (!conf.append_protocol || !idata->metrics->protocol)
    return;

  vlen = strlen (idata->metrics->protocol);
  llen = strlen (dgettext (PACKAGE , "Proto"));

  if (vlen > meta->protocol_len)
    meta->protocol_len = vlen;



  if (llen > meta->protocol_len)
    meta->protocol_len = llen;
}


static void
set_max_data_len (GDashMeta * meta, GDashData * idata) {
  int vlen = 0, llen = 0;

  vlen = strlen (idata->metrics->data);
  llen = strlen (dgettext (PACKAGE , "Data"));

  if (vlen > meta->data_len)
    meta->data_len = vlen;



  if (llen > meta->data_len)
    meta->data_len = llen;
}

static void
set_metrics_len (GDashMeta * meta, GDashData * idata) {

  set_max_hit_len (meta, idata);
  set_max_hit_perc_len (meta, idata);
  set_max_visitors_len (meta, idata);
  set_max_visitors_perc_len (meta, idata);


  set_max_bw_len (meta, idata);
  set_max_avgts_len (meta, idata);
  set_max_cumts_len (meta, idata);
  set_max_maxts_len (meta, idata);

  set_max_method_len (meta, idata);
  set_max_protocol_len (meta, idata);
  set_max_data_len (meta, idata);
}


static void
render_data_hosts (WINDOW * win, GDashRender render, char *value, int x) {
  char *padded_data;

  padded_data = left_pad_str (value, x);
  draw_header (win, padded_data, "%s", render.y, 0, render.w, color_selected);
  free (padded_data);
}





static char *
set_visitors_date (const char *value) {
  return get_visitors_date (value, conf.spec_date_time_num_format, conf.spec_date_time_format);
}

static char *
get_fixed_fmt_width (int w, char type) {
  char *fmt = xmalloc (
# 513 "project/goaccess/src/gdashboard.c" 3 4
                      __builtin___snprintf_chk (((void *)0), 
# 513 "project/goaccess/src/gdashboard.c"
                      0
# 513 "project/goaccess/src/gdashboard.c" 3 4
                      , 0, __builtin_object_size (((void *)0), 2 > 1 ? 1 : 0), 
# 513 "project/goaccess/src/gdashboard.c"
                      "%%%d%c", w, type
# 513 "project/goaccess/src/gdashboard.c" 3 4
                      ) 
# 513 "project/goaccess/src/gdashboard.c"
                                                            + 1);
  
# 514 "project/goaccess/src/gdashboard.c" 3 4
 __builtin___sprintf_chk (
# 514 "project/goaccess/src/gdashboard.c"
 fmt
# 514 "project/goaccess/src/gdashboard.c" 3 4
 , 0, __builtin_object_size (
# 514 "project/goaccess/src/gdashboard.c"
 fmt
# 514 "project/goaccess/src/gdashboard.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 514 "project/goaccess/src/gdashboard.c"
 "%%%d%c", w, type
# 514 "project/goaccess/src/gdashboard.c" 3 4
 )
# 514 "project/goaccess/src/gdashboard.c"
                                 ;

  return fmt;
}


static void
render_total_label (WINDOW * win, GDashModule * data, int y, GColors * (*func) (void)) {
  char *s;
  int win_h, win_w, total, ht_size;

  total = data->holder_size;
  ht_size = data->ht_size;

  s = xmalloc (
# 528 "project/goaccess/src/gdashboard.c" 3 4
              __builtin___snprintf_chk (((void *)0), 
# 528 "project/goaccess/src/gdashboard.c"
              0
# 528 "project/goaccess/src/gdashboard.c" 3 4
              , 0, __builtin_object_size (((void *)0), 2 > 1 ? 1 : 0), 
# 528 "project/goaccess/src/gdashboard.c"
              "%s: %d/%d", dgettext (PACKAGE , "Total"), total, ht_size
# 528 "project/goaccess/src/gdashboard.c" 3 4
              ) 
# 528 "project/goaccess/src/gdashboard.c"
                                                                         + 1);
  getmaxyx (win, win_h, win_w);
  (void) win_h;

  
# 532 "project/goaccess/src/gdashboard.c" 3 4
 __builtin___sprintf_chk (
# 532 "project/goaccess/src/gdashboard.c"
 s
# 532 "project/goaccess/src/gdashboard.c" 3 4
 , 0, __builtin_object_size (
# 532 "project/goaccess/src/gdashboard.c"
 s
# 532 "project/goaccess/src/gdashboard.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 532 "project/goaccess/src/gdashboard.c"
 "%s: %d/%d", dgettext (PACKAGE , "Total"), total, ht_size
# 532 "project/goaccess/src/gdashboard.c" 3 4
 )
# 532 "project/goaccess/src/gdashboard.c"
                                                    ;
  draw_header (win, s, "%s", y, win_w - strlen (s) - 2, win_w, func);
  free (s);
}


static void
render_bars (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color (COLOR_BARS);
  WINDOW *win = render.win;
  char *bar;
  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;

  bar = get_bars (data->data[idx].metrics->hits, data->meta.max_hits, *x);
  if (sel)
    draw_header (win, bar, "%s", y, *x, w, color_selected);
  else {
    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%s", bar);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }
  free (bar);
}


static void
render_data (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_DATA, data->module);
  WINDOW *win = render.win;

  char *date = 
# 562 "project/goaccess/src/gdashboard.c" 3 4
              ((void *)0)
# 562 "project/goaccess/src/gdashboard.c"
                  , *value = 
# 562 "project/goaccess/src/gdashboard.c" 3 4
                             ((void *)0)
# 562 "project/goaccess/src/gdashboard.c"
                                 , *buf = 
# 562 "project/goaccess/src/gdashboard.c" 3 4
                                          ((void *)0)
# 562 "project/goaccess/src/gdashboard.c"
                                              ;
  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  int date_len = 0;

  value = substring (data->data[idx].metrics->data, 0, w - *x);
  if (data->module == VISITORS) {
    date = set_visitors_date (value);
    date_len = strlen (date);
  }

  if (sel && data->module == HOSTS && data->data[idx].is_subitem) {
    render_data_hosts (win, render, value, *x);
  } else if (sel) {
    buf = data->module == VISITORS ? date : value;
    draw_header (win, buf, "%s", y, *x, w, color_selected);
  } else {
    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%s", data->module == VISITORS ? date : value);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

  *x += data->module == VISITORS ? date_len : data->meta.data_len;
  *x += 1;
  free (value);
  free (date);
}





static void
render_method (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_MTHD, data->module);
  WINDOW *win = render.win;

  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  char *method = data->data[idx].metrics->method;

  if (method == 
# 601 "project/goaccess/src/gdashboard.c" 3 4
               ((void *)0) 
# 601 "project/goaccess/src/gdashboard.c"
                    || *method == '\0')
    return;

  if (sel) {

    draw_header (win, method, "%s", y, *x, w, color_selected);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%s", method);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

  *x += data->meta.method_len + 1;
}





static void
render_proto (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_PROT, data->module);
  WINDOW *win = render.win;

  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  char *protocol = data->data[idx].metrics->protocol;

  if (protocol == 
# 629 "project/goaccess/src/gdashboard.c" 3 4
                 ((void *)0) 
# 629 "project/goaccess/src/gdashboard.c"
                      || *protocol == '\0')
    return;

  if (sel) {

    draw_header (win, protocol, "%s", y, *x, w, color_selected);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%s", protocol);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

  *x += 9 - 1 + 1;
}


static void
render_avgts (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_AVGTS, data->module);
  WINDOW *win = render.win;

  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  char *avgts = data->data[idx].metrics->avgts.sts;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (sel) {

    draw_header (win, avgts, "%9s", y, *x, w, color_selected);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%9s", avgts);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

out:
  *x += 9 + 1;
}


static void
render_cumts (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_CUMTS, data->module);
  WINDOW *win = render.win;

  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  char *cumts = data->data[idx].metrics->cumts.sts;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (sel) {

    draw_header (win, cumts, "%9s", y, *x, w, color_selected);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%9s", cumts);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

out:
  *x += 9 + 1;
}


static void
render_maxts (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_MAXTS, data->module);
  WINDOW *win = render.win;

  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  char *maxts = data->data[idx].metrics->maxts.sts;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (sel) {

    draw_header (win, maxts, "%9s", y, *x, w, color_selected);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%9s", maxts);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

out:
  *x += 9 + 1;
}


static void
render_bw (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_BW, data->module);
  WINDOW *win = render.win;

  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  char *bw = data->data[idx].metrics->bw.sbw;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (sel) {
    char *fw = get_fixed_fmt_width (data->meta.bw_len, 's');

    draw_header (win, bw, fw, y, *x, w, color_selected);
    free (fw);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%*s", data->meta.bw_len, bw);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

out:
  *x += data->meta.bw_len + 1;
}


static void
render_percent (GDashRender render, GColors * color, float perc, int len, int x) {
  WINDOW *win = render.win;
  char *percent;
  int y = render.y, w = render.w, sel = render.sel;

  if (sel) {

    percent = float2str (perc, len);
    draw_header (win, percent, "%s%%", y, x, w, color_selected);
    free (percent);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, x, "%*.2f%%", len, perc);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }
}


static void
render_hits_percent (GDashModule * data, GDashRender render, int *x) {
  GColorItem item = COLOR_MTRC_HITS_PERC;
  GColors *color;
  int l = data->meta.hits_perc_len + 3, idx = render.idx;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (data->meta.max_hits == data->data[idx].metrics->hits)
    item = COLOR_MTRC_HITS_PERC_MAX;

  color = get_color_by_item_module (item, data->module);
  render_percent (render, color, data->data[idx].metrics->hits_perc, l, *x);

out:
  *x += l + 1 + 1;
}


static void
render_visitors_percent (GDashModule * data, GDashRender render, int *x) {
  GColorItem item = COLOR_MTRC_VISITORS_PERC;
  GColors *color;
  int l = data->meta.visitors_perc_len + 3, idx = render.idx;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (data->meta.max_visitors == data->data[idx].metrics->visitors)
    item = COLOR_MTRC_VISITORS_PERC_MAX;

  color = get_color_by_item_module (item, data->module);
  render_percent (render, color, data->data[idx].metrics->visitors_perc, l, *x);

out:
  *x += l + 1 + 1;
}


static void
render_hits (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_HITS, data->module);
  WINDOW *win = render.win;

  char *hits;
  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  int len = data->meta.hits_len;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (sel) {

    hits = u642str (data->data[idx].metrics->hits, len);
    draw_header (win, hits, " %s", y, 0, w, color_selected);
    free (hits);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%*" 
# 832 "project/goaccess/src/gdashboard.c" 3 4
                               "ll" "u" 
# 832 "project/goaccess/src/gdashboard.c"
                                      "", len, data->data[idx].metrics->hits);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

out:
  *x += len + 1;
}


static void
render_visitors (GDashModule * data, GDashRender render, int *x) {
  GColors *color = get_color_by_item_module (COLOR_MTRC_VISITORS, data->module);
  WINDOW *win = render.win;

  char *visitors;
  int y = render.y, w = render.w, idx = render.idx, sel = render.sel;
  int len = data->meta.visitors_len;

  if (data->module == HOSTS && data->data[idx].is_subitem)
    goto out;

  if (sel) {

    visitors = u642str (data->data[idx].metrics->visitors, len);
    draw_header (win, visitors, "%s", y, *x, w, color_selected);
    free (visitors);
  } else {

    wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
    mvwprintw (win, y, *x, "%*" 
# 861 "project/goaccess/src/gdashboard.c" 3 4
                               "ll" "u" 
# 861 "project/goaccess/src/gdashboard.c"
                                      "", len, data->data[idx].metrics->visitors);
    wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
  }

out:
  *x += len + 1;
}


static void
render_header (WINDOW * win, GDashModule * data, GModule cur_module, int *y) {
  GColors *(*func) (void);
  char ind;
  char *hd;
  int k, w, h;

  getmaxyx (win, h, w);
  (void) h;

  k = data->module + 1;
  ind = cur_module == data->module ? '>' : ' ';
  func = cur_module == data->module &&
    conf.hl_header ? color_panel_active : color_panel_header;
  hd = xmalloc (
# 884 "project/goaccess/src/gdashboard.c" 3 4
               __builtin___snprintf_chk (((void *)0), 
# 884 "project/goaccess/src/gdashboard.c"
               0
# 884 "project/goaccess/src/gdashboard.c" 3 4
               , 0, __builtin_object_size (((void *)0), 2 > 1 ? 1 : 0), 
# 884 "project/goaccess/src/gdashboard.c"
               "%c %d - %s", ind, k, data->head
# 884 "project/goaccess/src/gdashboard.c" 3 4
               ) 
# 884 "project/goaccess/src/gdashboard.c"
                                                                    + 1);
  
# 885 "project/goaccess/src/gdashboard.c" 3 4
 __builtin___sprintf_chk (
# 885 "project/goaccess/src/gdashboard.c"
 hd
# 885 "project/goaccess/src/gdashboard.c" 3 4
 , 0, __builtin_object_size (
# 885 "project/goaccess/src/gdashboard.c"
 hd
# 885 "project/goaccess/src/gdashboard.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 885 "project/goaccess/src/gdashboard.c"
 "%c %d - %s", ind, k, data->head
# 885 "project/goaccess/src/gdashboard.c" 3 4
 )
# 885 "project/goaccess/src/gdashboard.c"
                                               ;

  draw_header (win, hd, " %s", (*y), 0, w, func);
  free (hd);

  render_total_label (win, data, (*y), func);
  data->pos_y = (*y);
  (*y)++;
}


static void
render_description (WINDOW * win, GDashModule * data, int *y) {
  int w, h;

  getmaxyx (win, h, w);
  (void) h;

  draw_header (win, data->desc, " %s", (*y), 0, w, color_panel_desc);

  data->pos_y = (*y);
  (*y)++;
  (*y)++;
}



static void
render_metrics (GDashModule * data, GDashRender render, int expanded) {
  int x = get_xpos ();
  GModule module = data->module;
  const GOutput *output = output_lookup (module);


  if (output->hits)
    render_hits (data, render, &x);
  if (output->percent)
    render_hits_percent (data, render, &x);
  if (output->visitors)
    render_visitors (data, render, &x);
  if (output->percent)
    render_visitors_percent (data, render, &x);


  if (conf.bandwidth && output->bw)
    render_bw (data, render, &x);


  if (output->avgts && conf.serve_usecs)
    render_avgts (data, render, &x);
  if (output->cumts && conf.serve_usecs)
    render_cumts (data, render, &x);
  if (output->maxts && conf.serve_usecs)
    render_maxts (data, render, &x);


  if (output->method && conf.append_method)
    render_method (data, render, &x);

  if (output->protocol && conf.append_protocol)
    render_proto (data, render, &x);
  if (output->data)
    render_data (data, render, &x);


  if ((output->graph && !expanded) || (output->sub_graph && expanded))
    render_bars (data, render, &x);
}


static void
render_data_line (WINDOW * win, GDashModule * data, int *y, int j, GScroll * gscroll) {
  GDashRender render;
  GModule module = data->module;
  int expanded = 0, sel = 0;
  int w, h;

  getmaxyx (win, h, w);
  (void) h;

  if (gscroll->expanded && module == gscroll->current)
    expanded = 1;

  if (j >= data->idx_data)
    goto out;

  sel = expanded && j == gscroll->module[module].scroll ? 1 : 0;

  render.win = win;
  render.y = *y;
  render.w = w;
  render.idx = j;
  render.sel = sel;

  render_metrics (data, render, expanded);

out:
  (*y)++;
}


static void
print_horizontal_dash (WINDOW * win, int y, int x, int len) {
  mvwprintw (win, y, x, "%.*s", len, "----------------");
}


static void
lprint_col (WINDOW * win, int y, int *x, int len, const char *str) {
  GColors *color = get_color (COLOR_PANEL_COLS);

  wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
  mvwprintw (win, y, *x, "%s", str);
  print_horizontal_dash (win, y + 1, *x, len);
  wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));

  *x += len + 1;
}


static void
rprint_col (WINDOW * win, int y, int *x, int len, const char *str) {
  GColors *color = get_color (COLOR_PANEL_COLS);

  wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
  mvwprintw (win, y, *x, "%*s", len, str);
  print_horizontal_dash (win, y + 1, *x, len);
  wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));

  *x += len + 1;
}



static void
render_cols (WINDOW * win, GDashModule * data, int *y) {
  GModule module = data->module;
  const GOutput *output = output_lookup (module);
  int x = get_xpos ();

  if (data->idx_data == 0 || conf.no_column_names)
    return;

  if (output->hits)
    lprint_col (win, *y, &x, data->meta.hits_len, dgettext (PACKAGE , "Hits"));

  if (output->percent)
    rprint_col (win, *y, &x, data->meta.hits_perc_len + 4, dgettext (PACKAGE , "h%"));

  if (output->visitors)
    rprint_col (win, *y, &x, data->meta.visitors_len, dgettext (PACKAGE , "Vis."));

  if (output->percent)
    rprint_col (win, *y, &x, data->meta.visitors_perc_len + 4, dgettext (PACKAGE , "v%"));

  if (output->bw && conf.bandwidth)
    rprint_col (win, *y, &x, data->meta.bw_len, dgettext (PACKAGE , "Tx. Amount"));

  if (output->avgts && conf.serve_usecs)
    rprint_col (win, *y, &x, 9, dgettext (PACKAGE , "Avg. T.S."));

  if (output->cumts && conf.serve_usecs)
    rprint_col (win, *y, &x, 9, dgettext (PACKAGE , "Cum. T.S."));

  if (output->maxts && conf.serve_usecs)
    rprint_col (win, *y, &x, 9, dgettext (PACKAGE , "Max. T.S."));

  if (output->method && conf.append_method)
    lprint_col (win, *y, &x, data->meta.method_len, dgettext (PACKAGE , "Mtd"));

  if (output->protocol && conf.append_protocol)
    lprint_col (win, *y, &x, 8, dgettext (PACKAGE , "Proto"));

  if (output->data)
    lprint_col (win, *y, &x, 4, dgettext (PACKAGE , "Data"));
}


static void
render_content (WINDOW * win, GDashModule * data, int *y, int *offset,
                int *total, GScroll * gscroll) {
  GModule module = data->module;
  int i, j, size, h, w, data_pos = get_data_pos_rows ();

  getmaxyx (win, h, w);
  (void) w;

  size = data->dash_size;
  for (i = *offset; i < size; i++) {

    if ((i % size) == 0) {
      render_header (win, data, gscroll->current, y);
    } else if ((i % size) == 1 && conf.no_column_names) {

      render_description (win, data, y);
    } else if ((i % size) == 1 || (i % size) == size - 1) {

      (*y)++;
    } else if ((i % size) == 3 && !conf.no_column_names) {

      (*y)++;
    } else if ((i % size) == 2 && !conf.no_column_names) {

      render_cols (win, data, y);
      (*y)++;
    } else if ((i % size) >= data_pos || (i % size) <= size - 2) {

      j = ((i % size) - data_pos) + gscroll->module[module].offset;

      render_data_line (win, data, y, j, gscroll);
    } else {

      (*y)++;
    }
    (*total)++;
    if (*y >= h)
      break;
  }
}


void
display_content (WINDOW * win, GDash * dash, GScroll * gscroll) {
  GModule module;
  int j = 0;
  size_t idx = 0;

  int y = 0, offset = 0, total = 0;
  int dash_scroll = gscroll->dash;

  werase (win);

  for (; (idx < (sizeof(module_list) / sizeof(module_list[0]))) && module_list[idx] != -1; ++idx) {
    module = module_list[idx];

    offset = 0;
    for (j = 0; j < dash->module[module].dash_size; j++) {
      if (dash_scroll > total) {
        offset++;
        total++;
      }
    }

    dash->module[module].module = module;

    render_content (win, &dash->module[module], &y, &offset, &total, gscroll);
  }
  wrefresh (win);
}


void
reset_scroll_offsets (GScroll * gscroll) {
  GModule module;
  size_t idx = 0;

  for (; (idx < (sizeof(module_list) / sizeof(module_list[0]))) && module_list[idx] != -1; ++idx) {
    module = module_list[idx];

    gscroll->module[module].scroll = 0;
    gscroll->module[module].offset = 0;
  }
}





static int
regexp_init (regex_t * regex, const char *pattern) {
  int y, x, rc;
  char buf[100];

  getmaxyx (stdscr, y, x);
  rc = regcomp (regex, pattern, 
# 1159 "project/goaccess/src/gdashboard.c" 3 4
                               0001 
# 1159 "project/goaccess/src/gdashboard.c"
                                            | (find_t.icase ? 
# 1159 "project/goaccess/src/gdashboard.c" 3 4
                                                              0002 
# 1159 "project/goaccess/src/gdashboard.c"
                                                                        : 0));

  if (rc != 0) {
    regerror (rc, regex, buf, sizeof (buf));
    draw_header (stdscr, buf, "%s", y - 1, 0, x, color_error);
    refresh ();
    return 1;
  }
  return 0;
}


static void
perform_find_dash_scroll (GScroll * gscroll, GModule module) {
  int *scrll, *offset;
  int exp_size = get_num_expanded_data_rows ();


  if (gscroll->current != module)
    reset_scroll_offsets (gscroll);

  scrll = &gscroll->module[module].scroll;
  offset = &gscroll->module[module].offset;

  (*scrll) = find_t.next_idx;
  if (*scrll >= exp_size && *scrll >= *offset + exp_size)
    (*offset) = (*scrll) < exp_size - 1 ? 0 : (*scrll) - exp_size + 1;

  gscroll->current = module;
  gscroll->dash = get_module_index (module) * 12;
  gscroll->expanded = 1;
  find_t.module = module;
}





static int
find_next_sub_item (GSubList * sub_list, regex_t * regex) {
  GSubItem *iter;
  int i = 0, rc;

  if (sub_list == 
# 1202 "project/goaccess/src/gdashboard.c" 3 4
                 ((void *)0)
# 1202 "project/goaccess/src/gdashboard.c"
                     )
    goto out;

  for (iter = sub_list->head; iter; iter = iter->next) {
    if (i >= find_t.next_sub_idx) {
      rc = regexec (regex, iter->metrics->data, 0, 
# 1207 "project/goaccess/src/gdashboard.c" 3 4
                                                  ((void *)0)
# 1207 "project/goaccess/src/gdashboard.c"
                                                      , 0);
      if (rc == 0) {
        find_t.next_idx++;
        find_t.next_sub_idx = (1 + i);
        return 0;
      }
      find_t.next_idx++;
    }
    i++;
  }
out:
  find_t.next_parent_idx++;
  find_t.next_sub_idx = 0;
  find_t.look_in_sub = 0;

  return 1;
}





int
perform_next_find (GHolder * h, GScroll * gscroll) {
  GModule module;
  GSubList *sub_list;
  regex_t regex;
  char buf[100], *data;
  int y, x, j, n, rc;
  size_t idx = 0;

  getmaxyx (stdscr, y, x);

  if (find_t.pattern == 
# 1240 "project/goaccess/src/gdashboard.c" 3 4
                       ((void *)0) 
# 1240 "project/goaccess/src/gdashboard.c"
                            || *find_t.pattern == '\0')
    return 1;


  if (regexp_init (&regex, find_t.pattern))
    return 1;


  idx = find_t.module;
  for (; (idx < (sizeof(module_list) / sizeof(module_list[0]))) && module_list[idx] != -1; ++idx) {
    module = module_list[idx];

    n = h[module].idx;
    for (j = find_t.next_parent_idx; j < n; j++, find_t.next_idx++) {
      data = h[module].items[j].metrics->data;

      rc = regexec (&regex, data, 0, 
# 1256 "project/goaccess/src/gdashboard.c" 3 4
                                    ((void *)0)
# 1256 "project/goaccess/src/gdashboard.c"
                                        , 0);

      if (rc != 0 && rc != 
# 1258 "project/goaccess/src/gdashboard.c" 3 4
                          1
# 1258 "project/goaccess/src/gdashboard.c"
                                     ) {
        regerror (rc, &regex, buf, sizeof (buf));
        draw_header (stdscr, buf, "%s", y - 1, 0, x, color_error);
        refresh ();
        regfree (&regex);
        return 1;
      }

      else if (rc == 0 && !find_t.look_in_sub) {
        find_t.look_in_sub = 1;
        perform_find_dash_scroll (gscroll, module);
        goto out;
      }

      else {
        sub_list = h[module].items[j].sub_list;
        if (find_next_sub_item (sub_list, &regex) == 0) {
          perform_find_dash_scroll (gscroll, module);
          goto out;
        }
      }
    }


    find_t.next_idx = 0;
    find_t.next_parent_idx = 0;
    find_t.next_sub_idx = 0;

    if (find_t.module != module) {
      reset_scroll_offsets (gscroll);
      gscroll->expanded = 0;
    }
    if (module == 17 - 1) {
      find_t.module = 0;
      goto out;
    }
  }

out:
  regfree (&regex);
  return 0;
}





int
render_find_dialog (WINDOW * main_win, GScroll * gscroll) {
  int y, x, valid = 1;
  int w = 50;
  int h = 8;
  char *query = 
# 1310 "project/goaccess/src/gdashboard.c" 3 4
               ((void *)0)
# 1310 "project/goaccess/src/gdashboard.c"
                   ;
  WINDOW *win;

  getmaxyx (stdscr, y, x);

  win = newwin (h, w, (y - h) / 2, (x - w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');
  draw_header (win, dgettext (PACKAGE , "Find pattern in all views"), " %s", 1, 1, w - 2, color_panel_header);
  mvwprintw (win, 2, 1, " %s", dgettext (PACKAGE , "Regex allowed - ^g to cancel - TAB switch case"));

  find_t.icase = 0;
  query = input_string (win, 4, 2, w - 3, "", 1, &find_t.icase);
  if (query != 
# 1323 "project/goaccess/src/gdashboard.c" 3 4
              ((void *)0) 
# 1323 "project/goaccess/src/gdashboard.c"
                   && *query != '\0') {
    reset_scroll_offsets (gscroll);
    reset_find ();
    find_t.pattern = xstrdup (query);
    valid = 0;
  }
  if (query != 
# 1329 "project/goaccess/src/gdashboard.c" 3 4
              ((void *)0)
# 1329 "project/goaccess/src/gdashboard.c"
                  )
    free (query);
  touchwin (main_win);
  close_win (win);
  wrefresh (main_win);

  return valid;
}

static void
set_dash_metrics (GDash ** dash, GMetrics * metrics, GModule module,
                  GPercTotals totals, int is_subitem) {
  GDashData *idata = 
# 1341 "project/goaccess/src/gdashboard.c" 3 4
                    ((void *)0)
# 1341 "project/goaccess/src/gdashboard.c"
                        ;
  GDashMeta *meta = 
# 1342 "project/goaccess/src/gdashboard.c" 3 4
                   ((void *)0)
# 1342 "project/goaccess/src/gdashboard.c"
                       ;
  char *data = 
# 1343 "project/goaccess/src/gdashboard.c" 3 4
              ((void *)0)
# 1343 "project/goaccess/src/gdashboard.c"
                  ;
  int *idx;

  if (!metrics->data)
    return;

  idx = &(*dash)->module[module].idx_data;
  idata = &(*dash)->module[module].data[(*idx)];
  meta = &(*dash)->module[module].meta;

  idata->metrics = new_gmetrics ();
  idata->is_subitem = is_subitem;

  data = is_subitem ? render_child_node (metrics->data) : metrics->data;

  idata->metrics->hits = metrics->hits;
  idata->metrics->hits_perc = get_percentage (totals.hits, metrics->hits);
  idata->metrics->visitors = metrics->visitors;
  idata->metrics->visitors_perc = get_percentage (totals.visitors, metrics->visitors);
  idata->metrics->bw.sbw = filesize_str (metrics->bw.nbw);
  idata->metrics->data = xstrdup (data);

  if (conf.append_method && metrics->method)
    idata->metrics->method = metrics->method;
  if (conf.append_protocol && metrics->protocol)
    idata->metrics->protocol = metrics->protocol;

  if (!conf.serve_usecs)
    goto out;

  idata->metrics->avgts.sts = usecs_to_str (metrics->avgts.nts);
  idata->metrics->cumts.sts = usecs_to_str (metrics->cumts.nts);
  idata->metrics->maxts.sts = usecs_to_str (metrics->maxts.nts);

out:
  if (is_subitem)
    free (data);

  set_metrics_len (meta, idata);
  set_max_metrics (meta, idata);

  (*idx)++;
}





static void
add_sub_item_to_dash (GDash ** dash, GHolderItem item, GModule module, GPercTotals totals,
                      int *i) {
  GSubList *sub_list = item.sub_list;
  GSubItem *iter;

  if (sub_list == 
# 1397 "project/goaccess/src/gdashboard.c" 3 4
                 ((void *)0)
# 1397 "project/goaccess/src/gdashboard.c"
                     )
    return;

  for (iter = sub_list->head; iter; iter = iter->next, (*i)++) {
    set_dash_metrics (dash, iter->metrics, module, totals, 1);
  }
}




static void
add_item_to_dash (GDash ** dash, GHolderItem item, GModule module, GPercTotals totals) {
  set_dash_metrics (dash, item.metrics, module, totals, 0);
}


void
load_data_to_dash (GHolder * h, GDash * dash, GModule module, GScroll * gscroll) {
  int alloc_size = 0;
  int i, j;
  GPercTotals totals;

  alloc_size = dash->module[module].alloc_data;
  if (gscroll->expanded && module == gscroll->current)
    alloc_size += h->sub_items_size;

  dash->module[module].alloc_data = alloc_size;
  dash->module[module].data = new_gdata (alloc_size);
  dash->module[module].holder_size = h->holder_size;
  
# 1427 "project/goaccess/src/gdashboard.c" 3 4
 __builtin___memset_chk (
# 1427 "project/goaccess/src/gdashboard.c"
 &dash->module[module].meta
# 1427 "project/goaccess/src/gdashboard.c" 3 4
 , 
# 1427 "project/goaccess/src/gdashboard.c"
 0, sizeof (GDashData)
# 1427 "project/goaccess/src/gdashboard.c" 3 4
 , __builtin_object_size (
# 1427 "project/goaccess/src/gdashboard.c"
 &dash->module[module].meta
# 1427 "project/goaccess/src/gdashboard.c" 3 4
 , 0))
# 1427 "project/goaccess/src/gdashboard.c"
                                                           ;

  set_module_totals (&totals);

  for (i = 0, j = 0; i < alloc_size; i++) {
    if (h->items[j].metrics->data == 
# 1432 "project/goaccess/src/gdashboard.c" 3 4
                                    ((void *)0)
# 1432 "project/goaccess/src/gdashboard.c"
                                        )
      continue;

    add_item_to_dash (&dash, h->items[j], module, totals);
    if (gscroll->expanded && module == gscroll->current && h->sub_items_size)
      add_sub_item_to_dash (&dash, h->items[j], module, totals, &i);
    j++;
  }
}
