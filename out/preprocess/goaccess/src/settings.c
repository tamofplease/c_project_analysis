# 0 "project/goaccess/src/settings.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/settings.c"
# 33 "project/goaccess/src/settings.c"
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
# 34 "project/goaccess/src/settings.c" 2
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



typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 2 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 2 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

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
# 35 "project/goaccess/src/settings.c" 2
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








# 36 "project/goaccess/src/settings.c" 2
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
# 37 "project/goaccess/src/settings.c" 2
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
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
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
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4






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


# 38 "project/goaccess/src/settings.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 39 "project/goaccess/src/settings.c" 2

# 1 "project/goaccess/src/settings.h" 1
# 34 "project/goaccess/src/settings.h"
# 1 "project/goaccess/src/commons.h" 1
# 37 "project/goaccess/src/commons.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4





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
# 41 "project/goaccess/src/settings.c" 2

# 1 "project/goaccess/src/error.h" 1
# 34 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/commons.h" 1
# 35 "project/goaccess/src/error.h" 2
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
# 43 "project/goaccess/src/settings.c" 2
# 1 "project/goaccess/src/gkhash.h" 1
# 36 "project/goaccess/src/gkhash.h"
# 1 "project/goaccess/src/gstorage.h" 1
# 33 "project/goaccess/src/gstorage.h"
# 1 "project/goaccess/src/commons.h" 1
# 34 "project/goaccess/src/gstorage.h" 2
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
# 35 "project/goaccess/src/gstorage.h" 2






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
# 44 "project/goaccess/src/settings.c" 2
# 1 "project/goaccess/src/labels.h" 1
# 33 "project/goaccess/src/labels.h"
# 1 "/usr/local/include/libintl.h" 1 3 4
# 20 "/usr/local/include/libintl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_locale.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_locale.h" 3 4

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
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
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




int asprintf_l(char ** restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)));
int vasprintf_l(char ** restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)));



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


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_time.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_time.h" 3 4

size_t strftime_l(char * restrict, size_t, const char * restrict,
  const struct tm * restrict, locale_t)
  __asm("_" "strftime_l" ) __attribute__((__format__ (__strftime__, 3, 0)));
char *strptime_l(const char * restrict, const char * restrict,
  struct tm * restrict, locale_t)
  __asm("_" "strptime_l" ) __attribute__((__format__ (__strftime__, 2, 0)));

# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
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
# 45 "project/goaccess/src/settings.c" 2
# 1 "project/goaccess/src/pdjson.h" 1
# 9 "project/goaccess/src/pdjson.h"
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 10 "project/goaccess/src/pdjson.h" 2
# 20 "project/goaccess/src/pdjson.h"

# 20 "project/goaccess/src/pdjson.h"
enum json_type {
  JSON_ERROR = 1, JSON_DONE,
  JSON_OBJECT, JSON_OBJECT_END, JSON_ARRAY, JSON_ARRAY_END,
  JSON_STRING, JSON_NUMBER, JSON_TRUE, JSON_FALSE, JSON_NULL
};

struct json_allocator {
  void *(*malloc) (size_t);
  void *(*realloc) (void *, size_t);
  void (*free) (void *);
};

typedef int (*json_user_io) (void *user);

typedef struct json_stream json_stream;
typedef struct json_allocator json_allocator;

 void json_open_buffer (json_stream * json, const void *buffer, size_t size);
 void json_open_string (json_stream * json, const char *string);
 void json_open_stream (json_stream * json, FILE * stream);
 void json_open_user (json_stream * json, json_user_io get, json_user_io peek,
                                      void *user);
 void json_close (json_stream * json);

 void json_set_allocator (json_stream * json, json_allocator * a);
 void json_set_streaming (json_stream * json, 
# 45 "project/goaccess/src/pdjson.h" 3 4
                                                             _Bool 
# 45 "project/goaccess/src/pdjson.h"
                                                                  mode);

 enum json_type json_next (json_stream * json);
 enum json_type json_peek (json_stream * json);
 void json_reset (json_stream * json);
 const char *json_get_string (json_stream * json, size_t *length);
 double json_get_number (json_stream * json);

 enum json_type json_skip (json_stream * json);
 enum json_type json_skip_until (json_stream * json, enum json_type type);

 size_t json_get_lineno (json_stream * json);
 size_t json_get_position (json_stream * json);
 size_t json_get_depth (json_stream * json);
 enum json_type json_get_context (json_stream * json, size_t *count);
 const char *json_get_error (json_stream * json);

 int json_source_get (json_stream * json);
 int json_source_peek (json_stream * json);
 
# 64 "project/goaccess/src/pdjson.h" 3 4
                _Bool 
# 64 "project/goaccess/src/pdjson.h"
                     json_isspace (int c);



struct json_source {
  int (*get) (struct json_source *);
  int (*peek) (struct json_source *);
  size_t position;
  union {
    struct {
      FILE *stream;
    } stream;
    struct {
      const char *buffer;
      size_t length;
    } buffer;
    struct {
      void *ptr;
      json_user_io get;
      json_user_io peek;
    } user;
  } source;
};

struct json_stream {
  size_t lineno;

  struct json_stack *stack;
  size_t stack_top;
  size_t stack_size;
  enum json_type next;
  unsigned flags;

  struct {
    char *string;
    size_t string_fill;
    size_t string_size;
  } data;

  size_t ntokens;

  struct json_source source;
  struct json_allocator alloc;
  char errmsg[128];
};
# 46 "project/goaccess/src/settings.c" 2
# 1 "project/goaccess/src/util.h" 1
# 59 "project/goaccess/src/util.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 3 4

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
# 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
typedef __int32_t fd_mask;
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
# 60 "project/goaccess/src/util.h" 2



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
# 47 "project/goaccess/src/settings.c" 2
# 1 "project/goaccess/src/xmalloc.h" 1
# 33 "project/goaccess/src/xmalloc.h"
char *xstrdup (const char *s);
void *xcalloc (size_t nmemb, size_t size);
void *xmalloc (size_t size);
void *xrealloc (void *oldptr, size_t size);
# 48 "project/goaccess/src/settings.c" 2

static char **nargv;
static int nargc = 0;


static GEnum LOGTYPE[] = {
  {"COMBINED" , COMBINED} ,
  {"VCOMBINED" , VCOMBINED} ,
  {"COMMON" , COMMON} ,
  {"VCOMMON" , VCOMMON} ,
  {"W3C" , W3C} ,
  {"CLOUDFRONT" , CLOUDFRONT} ,
  {"CLOUDSTORAGE" , CLOUDSTORAGE} ,
  {"AWSELB" , AWSELB} ,
  {"SQUID" , SQUID} ,
  {"AWSS3" , AWSS3} ,
  {"CADDY" , CADDY} ,
  {"AWSALB" , AWSALB} ,
};

static const GPreConfLog logs = {
  "%h %^[%d:%t %^] \"%r\" %s %b \"%R\" \"%u\"",
  "%v:%^ %h %^[%d:%t %^] \"%r\" %s %b \"%R\" \"%u\"",
  "%h %^[%d:%t %^] \"%r\" %s %b",
  "%v:%^ %h %^[%d:%t %^] \"%r\" %s %b",
  "%d %t %^ %m %U %q %^ %^ %h %u %R %s %^ %^ %L",
  "%d\\t%t\\t%^\\t%b\\t%h\\t%m\\t%v\\t%U\\t%s\\t%R\\t%u\\t%q\\t%^\\t%C\\t%^\\t%^\\t%^\\t%^\\t%T\\t%^\\t%K\\t%k\\t%^\\t%H\\t%^",
  "\"%x\",\"%h\",%^,%^,\"%m\",\"%U\",\"%s\",%^,\"%b\",\"%D\",%^,\"%R\",\"%u\"",
  "%^ %dT%t.%^ %^ %h:%^ %^ %^ %T %^ %s %^ %^ %b \"%r\" \"%u\" %k %K %^ \"%^\" \"%v\"",
  "%^ %^ %^ %v %^: %x.%^ %~%L %h %^/%s %b %m %U",
  "%^ %v [%d:%t %^] %h %^\"%r\" %s %^ %b %^ %L %^ \"%R\" \"%u\"",


  "{ \"ts\": \"%x.%^\", \"request\": { \"remote_addr\": \"%h:%^\", \"proto\":"
  "\"%H\", \"method\": \"%m\", \"host\": \"%v\", \"uri\": \"%U\", \"headers\": {"
  "\"User-Agent\": [\"%u\"], \"Referer\": [\"%R\"] }, \"tls\": { \"cipher_suite\":"
  "\"%k\", \"proto\": \"%K\" } }, \"duration\": \"%T\", \"size\": \"%b\","
  "\"status\": \"%s\", \"resp_headers\": { \"Content-Type\": [\"%M\"] } }",

  "%^ %dT%t.%^ %v %h:%^ %^ %^ %T %^ %s %^ %^ %b \"%r\" \"%u\" %k %K %^"
};

static const GPreConfTime times = {
  "%H:%M:%S",
  "%f",
  "%s",
};

static const GPreConfDate dates = {
  "%d/%b/%Y",
  "%Y-%m-%d",
  "%f",
  "%s",
};



static const char *ignore_cmd_opts[] = {
  "help",
  "storage",
  "version",
};





static int
in_ignore_cmd_opts (const char *val) {
  size_t i;
  for (i = 0; i < (sizeof(ignore_cmd_opts) / sizeof(ignore_cmd_opts[0])); i++) {
    if (strstr (val, ignore_cmd_opts[i]) != 
# 119 "project/goaccess/src/settings.c" 3 4
                                           ((void *)0)
# 119 "project/goaccess/src/settings.c"
                                               )
      return 1;
  }
  return 0;
}
# 132 "project/goaccess/src/settings.c"
char *
get_config_file_path (void) {
  char *upath = 
# 134 "project/goaccess/src/settings.c" 3 4
               ((void *)0)
# 134 "project/goaccess/src/settings.c"
                   , *gpath = 
# 134 "project/goaccess/src/settings.c" 3 4
                              ((void *)0)
# 134 "project/goaccess/src/settings.c"
                                  , *rpath = 
# 134 "project/goaccess/src/settings.c" 3 4
                                             ((void *)0)
# 134 "project/goaccess/src/settings.c"
                                                 ;


  if (conf.iconfigfile != 
# 137 "project/goaccess/src/settings.c" 3 4
                         ((void *)0)
# 137 "project/goaccess/src/settings.c"
                             ) {
    rpath = realpath (conf.iconfigfile, 
# 138 "project/goaccess/src/settings.c" 3 4
                                       ((void *)0)
# 138 "project/goaccess/src/settings.c"
                                           );
    if (rpath == 
# 139 "project/goaccess/src/settings.c" 3 4
                ((void *)0)
# 139 "project/goaccess/src/settings.c"
                    )
      do { (void) endwin (); fprintf (
# 140 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 140 "project/goaccess/src/settings.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (
# 140 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 140 "project/goaccess/src/settings.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 140 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 140 "project/goaccess/src/settings.c"
     , "\nFatal error has occurred"); fprintf (
# 140 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 140 "project/goaccess/src/settings.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/settings.c", __FUNCTION__, 140); fprintf (
# 140 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 140 "project/goaccess/src/settings.c"
     , "Unable to open the specified config file. %s", strerror (
# 140 "project/goaccess/src/settings.c" 3 4
     (*__error())
# 140 "project/goaccess/src/settings.c"
     )); fprintf (
# 140 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 140 "project/goaccess/src/settings.c"
     , "\n\n"); do { dbg_fprintf ("Unable to open the specified config file. %s", strerror (
# 140 "project/goaccess/src/settings.c" 3 4
     (*__error())
# 140 "project/goaccess/src/settings.c"
     )); } while (0); exit(
# 140 "project/goaccess/src/settings.c" 3 4
     1
# 140 "project/goaccess/src/settings.c"
     ); } while (0);
    return rpath;
  }


  upath = get_user_config ();

  if ((rpath = realpath (upath, 
# 147 "project/goaccess/src/settings.c" 3 4
                               ((void *)0)
# 147 "project/goaccess/src/settings.c"
                                   )) != 
# 147 "project/goaccess/src/settings.c" 3 4
                                         ((void *)0)
# 147 "project/goaccess/src/settings.c"
                                             ) {
    free (upath);
    return rpath;
  }
  do { dbg_fprintf ("Unable to find user's config file %s %s", upath, strerror (
# 151 "project/goaccess/src/settings.c" 3 4
 (*__error())
# 151 "project/goaccess/src/settings.c"
 )); } while (0);
  free (upath);


  gpath = get_global_config ();
  if ((rpath = realpath (gpath, 
# 156 "project/goaccess/src/settings.c" 3 4
                               ((void *)0)
# 156 "project/goaccess/src/settings.c"
                                   )) != 
# 156 "project/goaccess/src/settings.c" 3 4
                                         ((void *)0) 
# 156 "project/goaccess/src/settings.c"
                                              && conf.load_global_config) {
    free (gpath);
    return rpath;
  }
  do { dbg_fprintf ("Unable to find global config file %s %s", gpath, strerror (
# 160 "project/goaccess/src/settings.c" 3 4
 (*__error())
# 160 "project/goaccess/src/settings.c"
 )); } while (0);
  free (gpath);

  return 
# 163 "project/goaccess/src/settings.c" 3 4
        ((void *)0)
# 163 "project/goaccess/src/settings.c"
            ;
}




void
set_default_static_files (void) {
  size_t i;
  const char *exts[] = {
    ".css",
    ".js ",
    ".jpg",
    ".png",
    ".gif",
    ".ico",
    ".jpeg",
    ".pdf",
    ".txt",
    ".csv",
    ".mpeg",
    ".mpg",
    ".swf",
    ".woff",
    ".woff2",
    ".xls",
    ".xlsx",
    ".doc ",
    ".docx",
    ".ppt ",
    ".pptx",
    ".zip",
    ".mp3",
    ".mp4",
    ".exe",
    ".iso ",
    ".gz  ",
    ".rar ",
    ".svg ",
    ".bmp ",
    ".tar ",
    ".tgz ",
    ".tiff",
    ".tif ",
    ".ttf ",
    ".flv ",
    ".avi",
  };

  if (conf.static_file_idx > 0)
    return;

  for (i = 0; i < (sizeof(exts) / sizeof(exts[0])); i++) {
    if (conf.static_file_max_len < strlen (exts[i]))
      conf.static_file_max_len = strlen (exts[i]);
    conf.static_files[conf.static_file_idx++] = exts[i];
  }
}


void
free_formats (void) {
  free (conf.log_format);
  free (conf.date_format);
  free (conf.date_num_format);
  free (conf.spec_date_time_format);
  free (conf.spec_date_time_num_format);
  free (conf.time_format);
}


void
free_cmd_args (void) {
  int i;
  if (nargc == 0)
    return;
  for (i = 0; i < nargc; i++)
    free (nargv[i]);
  free (nargv);
  free (conf.iconfigfile);
}


static void
append_to_argv (int *argc, char ***argv, char *val) {
  char **_argv = xrealloc (*argv, (*argc + 2) * sizeof (*_argv));
  _argv[*argc] = val;
  _argv[*argc + 1] = (char *) '\0';
  (*argc)++;
  *argv = _argv;
}






int
parse_conf_file (int *argc, char ***argv) {
  char line[4096 + 1];
  char *path = 
# 263 "project/goaccess/src/settings.c" 3 4
              ((void *)0)
# 263 "project/goaccess/src/settings.c"
                  , *val, *opt, *p;
  FILE *file;
  int i, n = 0;
  size_t idx;


  append_to_argv (&nargc, &nargv, xstrdup ((char *) *argv[0]));


  path = get_config_file_path ();
  if (path == 
# 273 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 273 "project/goaccess/src/settings.c"
                 )
    return 
# 274 "project/goaccess/src/settings.c" 3 4
          2
# 274 "project/goaccess/src/settings.c"
                ;


  if ((file = fopen (path, "r")) == 
# 277 "project/goaccess/src/settings.c" 3 4
                                   ((void *)0)
# 277 "project/goaccess/src/settings.c"
                                       ) {
    free (path);
    return 
# 279 "project/goaccess/src/settings.c" 3 4
          2
# 279 "project/goaccess/src/settings.c"
                ;
  }

  while (fgets (line, sizeof line, file) != 
# 282 "project/goaccess/src/settings.c" 3 4
                                           ((void *)0)
# 282 "project/goaccess/src/settings.c"
                                               ) {
    while (line[0] == ' ' || line[0] == '\t')
      
# 284 "project/goaccess/src/settings.c" 3 4
     __builtin___memmove_chk (
# 284 "project/goaccess/src/settings.c"
     line
# 284 "project/goaccess/src/settings.c" 3 4
     , 
# 284 "project/goaccess/src/settings.c"
     line + 1, strlen (line)
# 284 "project/goaccess/src/settings.c" 3 4
     , __builtin_object_size (
# 284 "project/goaccess/src/settings.c"
     line
# 284 "project/goaccess/src/settings.c" 3 4
     , 0))
# 284 "project/goaccess/src/settings.c"
                                            ;
    n++;
    if (line[0] == '\n' || line[0] == '\r' || line[0] == '#')
      continue;


    idx = strcspn (line, " \t");
    if (strlen (line) == idx)
      do { (void) endwin (); fprintf (
# 292 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 292 "project/goaccess/src/settings.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (
# 292 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 292 "project/goaccess/src/settings.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 292 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 292 "project/goaccess/src/settings.c"
     , "\nFatal error has occurred"); fprintf (
# 292 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 292 "project/goaccess/src/settings.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/settings.c", __FUNCTION__, 292); fprintf (
# 292 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 292 "project/goaccess/src/settings.c"
     , "Malformed config key at line: %d", n); fprintf (
# 292 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 292 "project/goaccess/src/settings.c"
     , "\n\n"); do { dbg_fprintf ("Malformed config key at line: %d", n); } while (0); exit(
# 292 "project/goaccess/src/settings.c" 3 4
     1
# 292 "project/goaccess/src/settings.c"
     ); } while (0);

    line[idx] = '\0';



    while ((p = strpbrk (line, "_")) != 
# 298 "project/goaccess/src/settings.c" 3 4
                                       ((void *)0)
# 298 "project/goaccess/src/settings.c"
                                           )
      *p = '-';


    if (in_ignore_cmd_opts (line))
      continue;


    val = line + (idx + 1);
    idx = strspn (val, " \t");
    if (strlen (line) == idx)
      do { (void) endwin (); fprintf (
# 309 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 309 "project/goaccess/src/settings.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (
# 309 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 309 "project/goaccess/src/settings.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 309 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 309 "project/goaccess/src/settings.c"
     , "\nFatal error has occurred"); fprintf (
# 309 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 309 "project/goaccess/src/settings.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/settings.c", __FUNCTION__, 309); fprintf (
# 309 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 309 "project/goaccess/src/settings.c"
     , "Malformed config value at line: %d", n); fprintf (
# 309 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 309 "project/goaccess/src/settings.c"
     , "\n\n"); do { dbg_fprintf ("Malformed config value at line: %d", n); } while (0); exit(
# 309 "project/goaccess/src/settings.c" 3 4
     1
# 309 "project/goaccess/src/settings.c"
     ); } while (0);
    val = val + idx;
    val = trim_str (val);

    if (strcmp ("false", val) == 0)
      continue;


    opt = xmalloc (
# 317 "project/goaccess/src/settings.c" 3 4
                  __builtin___snprintf_chk (((void *)0), 
# 317 "project/goaccess/src/settings.c"
                  0
# 317 "project/goaccess/src/settings.c" 3 4
                  , 0, __builtin_object_size (((void *)0), 2 > 1 ? 1 : 0), 
# 317 "project/goaccess/src/settings.c"
                  "--%s", line
# 317 "project/goaccess/src/settings.c" 3 4
                  ) 
# 317 "project/goaccess/src/settings.c"
                                                   + 1);
    
# 318 "project/goaccess/src/settings.c" 3 4
   __builtin___sprintf_chk (
# 318 "project/goaccess/src/settings.c"
   opt
# 318 "project/goaccess/src/settings.c" 3 4
   , 0, __builtin_object_size (
# 318 "project/goaccess/src/settings.c"
   opt
# 318 "project/goaccess/src/settings.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 318 "project/goaccess/src/settings.c"
   "--%s", line
# 318 "project/goaccess/src/settings.c" 3 4
   )
# 318 "project/goaccess/src/settings.c"
                              ;

    append_to_argv (&nargc, &nargv, opt);
    if (strcmp ("true", val) != 0)
      append_to_argv (&nargc, &nargv, xstrdup (val));
  }


  for (i = 1; i < *argc; i++)
    append_to_argv (&nargc, &nargv, xstrdup ((char *) (*argv)[i]));

  *argc = nargc;
  *argv = (char **) nargv;

  fclose (file);

  if (conf.iconfigfile == 
# 334 "project/goaccess/src/settings.c" 3 4
                         ((void *)0)
# 334 "project/goaccess/src/settings.c"
                             )
    conf.iconfigfile = xstrdup (path);

  free (path);
  return 0;
}






static int
get_log_format_item_enum (const char *str) {
  int ret;
  char *upstr;

  ret = str2enum (LOGTYPE, (sizeof(LOGTYPE) / sizeof(LOGTYPE[0])), str);
  if (ret >= 0)
    return ret;


  upstr = strtoupper (xstrdup (str));
  ret = str2enum (LOGTYPE, (sizeof(LOGTYPE) / sizeof(LOGTYPE[0])), upstr);
  free (upstr);

  return ret;
}






size_t
get_selected_format_idx (void) {
  if (conf.log_format == 
# 370 "project/goaccess/src/settings.c" 3 4
                        ((void *)0)
# 370 "project/goaccess/src/settings.c"
                            )
    return (size_t) -1;
  if (strcmp (conf.log_format, logs.common) == 0)
    return COMMON;
  else if (strcmp (conf.log_format, logs.vcommon) == 0)
    return VCOMMON;
  else if (strcmp (conf.log_format, logs.combined) == 0)
    return COMBINED;
  else if (strcmp (conf.log_format, logs.vcombined) == 0)
    return VCOMBINED;
  else if (strcmp (conf.log_format, logs.w3c) == 0)
    return W3C;
  else if (strcmp (conf.log_format, logs.cloudfront) == 0)
    return CLOUDFRONT;
  else if (strcmp (conf.log_format, logs.cloudstorage) == 0)
    return CLOUDSTORAGE;
  else if (strcmp (conf.log_format, logs.awselb) == 0)
    return AWSELB;
  else if (strcmp (conf.log_format, logs.squid) == 0)
    return SQUID;
  else if (strcmp (conf.log_format, logs.awss3) == 0)
    return AWSS3;
  else if (strcmp (conf.log_format, logs.caddy) == 0)
    return CADDY;
  else if (strcmp (conf.log_format, logs.awsalb) == 0)
    return AWSALB;
  else
    return (size_t) -1;
}






char *
get_selected_format_str (size_t idx) {
  char *fmt = 
# 407 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 407 "project/goaccess/src/settings.c"
                 ;
  switch (idx) {
  case COMBINED:
    fmt = alloc_string (logs.combined);
    break;
  case VCOMBINED:
    fmt = alloc_string (logs.vcombined);
    break;
  case COMMON:
    fmt = alloc_string (logs.common);
    break;
  case VCOMMON:
    fmt = alloc_string (logs.vcommon);
    break;
  case W3C:
    fmt = alloc_string (logs.w3c);
    break;
  case CLOUDFRONT:
    fmt = alloc_string (logs.cloudfront);
    break;
  case CLOUDSTORAGE:
    fmt = alloc_string (logs.cloudstorage);
    break;
  case AWSELB:
    fmt = alloc_string (logs.awselb);
    break;
  case SQUID:
    fmt = alloc_string (logs.squid);
    break;
  case AWSS3:
    fmt = alloc_string (logs.awss3);
    break;
  case CADDY:
    fmt = alloc_string (logs.caddy);
    break;
  case AWSALB:
    fmt = alloc_string (logs.awsalb);
    break;
  }

  return fmt;
}






char *
get_selected_date_str (size_t idx) {
  char *fmt = 
# 457 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 457 "project/goaccess/src/settings.c"
                 ;
  switch (idx) {
  case COMMON:
  case VCOMMON:
  case COMBINED:
  case VCOMBINED:
  case AWSS3:
    fmt = alloc_string (dates.apache);
    break;
  case AWSELB:
  case AWSALB:
  case CLOUDFRONT:
  case W3C:
    fmt = alloc_string (dates.w3c);
    break;
  case CLOUDSTORAGE:
    fmt = alloc_string (dates.usec);
    break;
  case SQUID:
  case CADDY:
    fmt = alloc_string (dates.sec);
    break;
  }

  return fmt;
}






char *
get_selected_time_str (size_t idx) {
  char *fmt = 
# 491 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 491 "project/goaccess/src/settings.c"
                 ;
  switch (idx) {
  case AWSELB:
  case AWSALB:
  case CLOUDFRONT:
  case COMBINED:
  case COMMON:
  case VCOMBINED:
  case VCOMMON:
  case W3C:
  case AWSS3:
    fmt = alloc_string (times.fmt24);
    break;
  case CLOUDSTORAGE:
    fmt = alloc_string (times.usec);
    break;
  case SQUID:
  case CADDY:
    fmt = alloc_string (times.sec);
    break;
  }

  return fmt;
}



const char *
verify_formats (void) {
  if (conf.time_format == 
# 520 "project/goaccess/src/settings.c" 3 4
                         ((void *)0) 
# 520 "project/goaccess/src/settings.c"
                              || *conf.time_format == '\0')
    return dgettext (PACKAGE , "No time format was found on your conf file.");

  if (conf.date_format == 
# 523 "project/goaccess/src/settings.c" 3 4
                         ((void *)0) 
# 523 "project/goaccess/src/settings.c"
                              || *conf.date_format == '\0')
    return dgettext (PACKAGE , "No date format was found on your conf file.");

  if (conf.log_format == 
# 526 "project/goaccess/src/settings.c" 3 4
                        ((void *)0) 
# 526 "project/goaccess/src/settings.c"
                             || *conf.log_format == '\0')
    return dgettext (PACKAGE , "No log format was found on your conf file.");

  return 
# 529 "project/goaccess/src/settings.c" 3 4
        ((void *)0)
# 529 "project/goaccess/src/settings.c"
            ;
}



static char *
append_spec_date_format (const char *date_format, const char *spec_format) {
  char *s = xmalloc (
# 536 "project/goaccess/src/settings.c" 3 4
                    __builtin___snprintf_chk (((void *)0), 
# 536 "project/goaccess/src/settings.c"
                    0
# 536 "project/goaccess/src/settings.c" 3 4
                    , 0, __builtin_object_size (((void *)0), 2 > 1 ? 1 : 0), 
# 536 "project/goaccess/src/settings.c"
                    "%s%s", date_format, spec_format
# 536 "project/goaccess/src/settings.c" 3 4
                    ) 
# 536 "project/goaccess/src/settings.c"
                                                                         + 1);
  
# 537 "project/goaccess/src/settings.c" 3 4
 __builtin___sprintf_chk (
# 537 "project/goaccess/src/settings.c"
 s
# 537 "project/goaccess/src/settings.c" 3 4
 , 0, __builtin_object_size (
# 537 "project/goaccess/src/settings.c"
 s
# 537 "project/goaccess/src/settings.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 537 "project/goaccess/src/settings.c"
 "%s%s", date_format, spec_format
# 537 "project/goaccess/src/settings.c" 3 4
 )
# 537 "project/goaccess/src/settings.c"
                                              ;

  return s;
}







static char *
clean_date_time_format (const char *format) {
  char *fmt = 
# 550 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 550 "project/goaccess/src/settings.c"
                 , *pr = 
# 550 "project/goaccess/src/settings.c" 3 4
                         ((void *)0)
# 550 "project/goaccess/src/settings.c"
                             , *pw = 
# 550 "project/goaccess/src/settings.c" 3 4
                                     ((void *)0)
# 550 "project/goaccess/src/settings.c"
                                         ;
  int special = 0;

  if (format == 
# 553 "project/goaccess/src/settings.c" 3 4
               ((void *)0) 
# 553 "project/goaccess/src/settings.c"
                    || *format == '\0')
    return 
# 554 "project/goaccess/src/settings.c" 3 4
          ((void *)0)
# 554 "project/goaccess/src/settings.c"
              ;

  fmt = xstrdup (format);
  pr = fmt;
  pw = fmt;
  while (*pr) {
    *pw = *pr++;
    if (*pw == '%' || special) {
      special = !special;
      pw++;
    }
  }
  *pw = '\0';

  return fmt;
}





static int
is_date_abbreviated (const char *fdate) {
  if (strpbrk (fdate, "cDF"))
    return 1;

  return 0;
}






static char *
set_format_time (void) {
  char *ftime = 
# 590 "project/goaccess/src/settings.c" 3 4
               ((void *)0)
# 590 "project/goaccess/src/settings.c"
                   ;

  if (has_timestamp (conf.date_format) || !strcmp ("%T", conf.time_format))
    ftime = xstrdup ("%H%M%S");
  else
    ftime = clean_date_time_format (conf.time_format);

  return ftime;
}






static char *
set_format_date (void) {
  char *fdate = 
# 607 "project/goaccess/src/settings.c" 3 4
               ((void *)0)
# 607 "project/goaccess/src/settings.c"
                   ;

  if (has_timestamp (conf.date_format))
    fdate = xstrdup ("%Y%m%d");
  else
    fdate = clean_date_time_format (conf.date_format);

  return fdate;
}






static void
set_spec_date_time_num_format (void) {
  char *buf = 
# 624 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 624 "project/goaccess/src/settings.c"
                 , *tf = set_format_time ();
  const char *df = conf.date_num_format;

  if (!df || !tf) {
    free (tf);
    return;
  }

  if (conf.date_spec_hr && strchr (tf, 'H'))
    buf = append_spec_date_format (df, "%H");
  else
    buf = xstrdup (df);

  conf.spec_date_time_num_format = buf;
  free (tf);
}




static void
set_spec_date_time_format (void) {
  char *buf = 
# 646 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 646 "project/goaccess/src/settings.c"
                 ;
  const char *fmt = conf.spec_date_time_num_format;
  int buflen = 0, flen = 0;

  if (!fmt)
    return;

  flen = (strlen (fmt) * 2) + 1;
  buf = xcalloc (flen, sizeof (char));

  if (strchr (fmt, 'd'))
    buflen += 
# 657 "project/goaccess/src/settings.c" 3 4
             __builtin___snprintf_chk (
# 657 "project/goaccess/src/settings.c"
             buf + buflen
# 657 "project/goaccess/src/settings.c" 3 4
             , 
# 657 "project/goaccess/src/settings.c"
             flen - buflen
# 657 "project/goaccess/src/settings.c" 3 4
             , 0, __builtin_object_size (
# 657 "project/goaccess/src/settings.c"
             buf + buflen
# 657 "project/goaccess/src/settings.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 657 "project/goaccess/src/settings.c"
             "%%d/"
# 657 "project/goaccess/src/settings.c" 3 4
             )
# 657 "project/goaccess/src/settings.c"
                                                           ;
  if (strchr (fmt, 'm'))
    buflen += 
# 659 "project/goaccess/src/settings.c" 3 4
             __builtin___snprintf_chk (
# 659 "project/goaccess/src/settings.c"
             buf + buflen
# 659 "project/goaccess/src/settings.c" 3 4
             , 
# 659 "project/goaccess/src/settings.c"
             flen - buflen
# 659 "project/goaccess/src/settings.c" 3 4
             , 0, __builtin_object_size (
# 659 "project/goaccess/src/settings.c"
             buf + buflen
# 659 "project/goaccess/src/settings.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 659 "project/goaccess/src/settings.c"
             "%%b/"
# 659 "project/goaccess/src/settings.c" 3 4
             )
# 659 "project/goaccess/src/settings.c"
                                                           ;
  if (strchr (fmt, 'Y'))
    buflen += 
# 661 "project/goaccess/src/settings.c" 3 4
             __builtin___snprintf_chk (
# 661 "project/goaccess/src/settings.c"
             buf + buflen
# 661 "project/goaccess/src/settings.c" 3 4
             , 
# 661 "project/goaccess/src/settings.c"
             flen - buflen
# 661 "project/goaccess/src/settings.c" 3 4
             , 0, __builtin_object_size (
# 661 "project/goaccess/src/settings.c"
             buf + buflen
# 661 "project/goaccess/src/settings.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 661 "project/goaccess/src/settings.c"
             "%%Y"
# 661 "project/goaccess/src/settings.c" 3 4
             )
# 661 "project/goaccess/src/settings.c"
                                                          ;
  if (strchr (fmt, 'H'))
    buflen += 
# 663 "project/goaccess/src/settings.c" 3 4
             __builtin___snprintf_chk (
# 663 "project/goaccess/src/settings.c"
             buf + buflen
# 663 "project/goaccess/src/settings.c" 3 4
             , 
# 663 "project/goaccess/src/settings.c"
             flen - buflen
# 663 "project/goaccess/src/settings.c" 3 4
             , 0, __builtin_object_size (
# 663 "project/goaccess/src/settings.c"
             buf + buflen
# 663 "project/goaccess/src/settings.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 663 "project/goaccess/src/settings.c"
             ":%%H"
# 663 "project/goaccess/src/settings.c" 3 4
             )
# 663 "project/goaccess/src/settings.c"
                                                           ;

  conf.spec_date_time_format = buf;
}







static int
set_date_num_format (void) {
  char *fdate = 
# 676 "project/goaccess/src/settings.c" 3 4
               ((void *)0)
# 676 "project/goaccess/src/settings.c"
                   , *buf = 
# 676 "project/goaccess/src/settings.c" 3 4
                            ((void *)0)
# 676 "project/goaccess/src/settings.c"
                                ;
  int buflen = 0, flen = 0;

  fdate = set_format_date ();
  if (!fdate)
    return 1;

  if (is_date_abbreviated (fdate)) {
    free (fdate);
    conf.date_num_format = xstrdup ("%Y%m%d");
    return 0;
  }

  flen = strlen (fdate) + 1;
  flen = (((7)>(flen))?(7):(flen));
  buf = xcalloc (flen, sizeof (char));


  buflen += 
# 694 "project/goaccess/src/settings.c" 3 4
           __builtin___snprintf_chk (
# 694 "project/goaccess/src/settings.c"
           buf + buflen
# 694 "project/goaccess/src/settings.c" 3 4
           , 
# 694 "project/goaccess/src/settings.c"
           flen - buflen
# 694 "project/goaccess/src/settings.c" 3 4
           , 0, __builtin_object_size (
# 694 "project/goaccess/src/settings.c"
           buf + buflen
# 694 "project/goaccess/src/settings.c" 3 4
           , 2 > 1 ? 1 : 0), 
# 694 "project/goaccess/src/settings.c"
           "%%Y"
# 694 "project/goaccess/src/settings.c" 3 4
           )
# 694 "project/goaccess/src/settings.c"
                                                        ;
  if (strpbrk (fdate, "hbmBf*"))
    buflen += 
# 696 "project/goaccess/src/settings.c" 3 4
             __builtin___snprintf_chk (
# 696 "project/goaccess/src/settings.c"
             buf + buflen
# 696 "project/goaccess/src/settings.c" 3 4
             , 
# 696 "project/goaccess/src/settings.c"
             flen - buflen
# 696 "project/goaccess/src/settings.c" 3 4
             , 0, __builtin_object_size (
# 696 "project/goaccess/src/settings.c"
             buf + buflen
# 696 "project/goaccess/src/settings.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 696 "project/goaccess/src/settings.c"
             "%%m"
# 696 "project/goaccess/src/settings.c" 3 4
             )
# 696 "project/goaccess/src/settings.c"
                                                          ;
  if (strpbrk (fdate, "def*"))
    buflen += 
# 698 "project/goaccess/src/settings.c" 3 4
             __builtin___snprintf_chk (
# 698 "project/goaccess/src/settings.c"
             buf + buflen
# 698 "project/goaccess/src/settings.c" 3 4
             , 
# 698 "project/goaccess/src/settings.c"
             flen - buflen
# 698 "project/goaccess/src/settings.c" 3 4
             , 0, __builtin_object_size (
# 698 "project/goaccess/src/settings.c"
             buf + buflen
# 698 "project/goaccess/src/settings.c" 3 4
             , 2 > 1 ? 1 : 0), 
# 698 "project/goaccess/src/settings.c"
             "%%d"
# 698 "project/goaccess/src/settings.c" 3 4
             )
# 698 "project/goaccess/src/settings.c"
                                                          ;

  conf.date_num_format = buf;
  free (fdate);

  return buflen == 0 ? 1 : 0;
}


int
is_json_log_format (const char *fmt) {
  enum json_type t = JSON_ERROR;
  json_stream json;

  json_open_string (&json, fmt);

  json_set_streaming (&json, 
# 714 "project/goaccess/src/settings.c" 3 4
                            0
# 714 "project/goaccess/src/settings.c"
                                 );
  do {
    t = json_next (&json);
    switch (t) {
    case JSON_ERROR:
      json_close (&json);
      return 0;
    default:
      break;
    }
  } while (t != JSON_DONE && t != JSON_ERROR);
  json_close (&json);

  return 1;
}


static void
dec_json_key (char *key) {
  char *ptr = 
# 733 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 733 "project/goaccess/src/settings.c"
                 ;
  if (key && (ptr = strrchr (key, '.')))
    *ptr = '\0';
  else if (key && !(ptr = strrchr (key, '.')))
    key[0] = '\0';
}






int
parse_json_string (void *ptr_data, const char *str, int (*cb) (void *, char *, char *)) {
  char *key = 
# 747 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 747 "project/goaccess/src/settings.c"
                 , *val = 
# 747 "project/goaccess/src/settings.c" 3 4
                          ((void *)0)
# 747 "project/goaccess/src/settings.c"
                              ;
  enum json_type ctx = JSON_ERROR, t = JSON_ERROR;
  int ret = 0;
  size_t len = 0, level = 0;
  json_stream json;

  json_open_string (&json, str);
  do {
    t = json_next (&json);

    switch (t) {
    case JSON_OBJECT:
      if (key == 
# 759 "project/goaccess/src/settings.c" 3 4
                ((void *)0)
# 759 "project/goaccess/src/settings.c"
                    )
        key = xstrdup ("");
      break;
    case JSON_ARRAY_END:
    case JSON_OBJECT_END:
      dec_json_key (key);
      break;
    case JSON_TRUE:
      val = xstrdup ("true");
      if (!key || (ret = (*cb) (ptr_data, key, val)))
        goto clean;
      ctx = json_get_context (&json, &level);
      if (ctx != JSON_ARRAY)
        dec_json_key (key);
      free (val);
      val = 
# 774 "project/goaccess/src/settings.c" 3 4
           ((void *)0)
# 774 "project/goaccess/src/settings.c"
               ;
      break;
    case JSON_FALSE:
      val = xstrdup ("false");
      if (!key || (ret = (*cb) (ptr_data, key, val)))
        goto clean;
      ctx = json_get_context (&json, &level);
      if (ctx != JSON_ARRAY)
        dec_json_key (key);
      free (val);
      val = 
# 784 "project/goaccess/src/settings.c" 3 4
           ((void *)0)
# 784 "project/goaccess/src/settings.c"
               ;
      break;
    case JSON_NULL:
      val = xstrdup ("-");
      if (!key || (ret = (*cb) (ptr_data, key, val)))
        goto clean;
      ctx = json_get_context (&json, &level);
      if (ctx != JSON_ARRAY)
        dec_json_key (key);
      free (val);
      val = 
# 794 "project/goaccess/src/settings.c" 3 4
           ((void *)0)
# 794 "project/goaccess/src/settings.c"
               ;
      break;
    case JSON_STRING:
    case JSON_NUMBER:
      ctx = json_get_context (&json, &level);

      if ((level % 2) != 0 && ctx != JSON_ARRAY) {
        if (strlen (key) != 0)
          append_str (&key, ".");
        append_str (&key, json_get_string (&json, &len));
      }

      else if (key && (ctx == JSON_ARRAY || ((level % 2) == 0 && ctx != JSON_ARRAY))) {
        val = xstrdup (json_get_string (&json, &len));
        if (!key || (ret = (*cb) (ptr_data, key, val)))
          goto clean;
        if (ctx != JSON_ARRAY)
          dec_json_key (key);

        free (val);
        val = 
# 814 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 814 "project/goaccess/src/settings.c"
                 ;
      }
      break;
    case JSON_ERROR:
      ret = -1;
      goto clean;
      break;
    default:
      break;
    }
  } while (t != JSON_DONE && t != JSON_ERROR);

clean:
  free (val);
  free (key);
  json_close (&json);

  return ret;
}



void
set_spec_date_format (void) {
  if (verify_formats ())
    return;

  if (conf.is_json_log_format) {
    if (parse_json_string (
# 842 "project/goaccess/src/settings.c" 3 4
                          ((void *)0)
# 842 "project/goaccess/src/settings.c"
                              , conf.log_format, ht_insert_json_logfmt) == -1)
      do { (void) endwin (); fprintf (
# 843 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 843 "project/goaccess/src/settings.c"
     , "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (
# 843 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 843 "project/goaccess/src/settings.c"
     , "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (
# 843 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 843 "project/goaccess/src/settings.c"
     , "\nFatal error has occurred"); fprintf (
# 843 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 843 "project/goaccess/src/settings.c"
     , "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/settings.c", __FUNCTION__, 843); fprintf (
# 843 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 843 "project/goaccess/src/settings.c"
     , "Invalid JSON log format. Verify the syntax."); fprintf (
# 843 "project/goaccess/src/settings.c" 3 4
     __stderrp
# 843 "project/goaccess/src/settings.c"
     , "\n\n"); do { dbg_fprintf ("Invalid JSON log format. Verify the syntax."); } while (0); exit(
# 843 "project/goaccess/src/settings.c" 3 4
     1
# 843 "project/goaccess/src/settings.c"
     ); } while (0);
  }

  if (conf.date_num_format)
    free (conf.date_num_format);
  if (conf.spec_date_time_format)
    free (conf.spec_date_time_format);
  if (conf.spec_date_time_num_format)
    free (conf.spec_date_time_num_format);

  if (set_date_num_format () == 0) {
    set_spec_date_time_num_format ();
    set_spec_date_time_format ();
  }
}




void
set_date_format_str (const char *oarg) {
  char *fmt = 
# 864 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 864 "project/goaccess/src/settings.c"
                 ;
  int type = get_log_format_item_enum (oarg);


  if (conf.date_format)
    free (conf.date_format);


  if (type == -1) {
    conf.date_format = unescape_str (oarg);
    return;
  }


  if ((fmt = get_selected_date_str (type)) == 
# 878 "project/goaccess/src/settings.c" 3 4
                                             ((void *)0)
# 878 "project/goaccess/src/settings.c"
                                                 ) {
    do { dbg_fprintf ("Unable to set date format from enum: %s\n", oarg); } while (0);
    return;
  }

  conf.date_format = fmt;
}




void
set_time_format_str (const char *oarg) {
  char *fmt = 
# 891 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 891 "project/goaccess/src/settings.c"
                 ;
  int type = get_log_format_item_enum (oarg);


  if (conf.time_format)
    free (conf.time_format);


  if (type == -1) {
    conf.time_format = unescape_str (oarg);
    return;
  }


  if ((fmt = get_selected_time_str (type)) == 
# 905 "project/goaccess/src/settings.c" 3 4
                                             ((void *)0)
# 905 "project/goaccess/src/settings.c"
                                                 ) {
    do { dbg_fprintf ("Unable to set time format from enum: %s\n", oarg); } while (0);
    return;
  }

  conf.time_format = fmt;
}


static void
contains_specifier (void) {
  conf.serve_usecs = conf.bandwidth = 0;
  if (!conf.log_format)
    return;

  if (strstr (conf.log_format, "%b"))
    conf.bandwidth = 1;
  if (strstr (conf.log_format, "%D"))
    conf.serve_usecs = 1;
  if (strstr (conf.log_format, "%T"))
    conf.serve_usecs = 1;
  if (strstr (conf.log_format, "%L"))
    conf.serve_usecs = 1;
}




void
set_log_format_str (const char *oarg) {
  char *fmt = 
# 935 "project/goaccess/src/settings.c" 3 4
             ((void *)0)
# 935 "project/goaccess/src/settings.c"
                 ;
  int type = get_log_format_item_enum (oarg);


  if (conf.log_format)
    free (conf.log_format);

  if (type == -1 && is_json_log_format (oarg)) {
    conf.is_json_log_format = 1;
    conf.log_format = unescape_str (oarg);
    contains_specifier ();
    return;
  }


  if (type == -1) {
    conf.log_format = unescape_str (oarg);
    contains_specifier ();
    return;
  }


  if ((fmt = get_selected_format_str (type)) == 
# 957 "project/goaccess/src/settings.c" 3 4
                                               ((void *)0)
# 957 "project/goaccess/src/settings.c"
                                                   ) {
    do { dbg_fprintf ("Unable to set log format from enum: %s\n", oarg); } while (0);
    return;
  }

  if (is_json_log_format (fmt))
    conf.is_json_log_format = 1;

  conf.log_format = unescape_str (fmt);
  contains_specifier ();


  set_time_format_str (oarg);
  set_date_format_str (oarg);
  free (fmt);
}
