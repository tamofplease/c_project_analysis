# 0 "project/radare2/libr/anal/d/types.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/anal/d/types.c"


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
# 4 "project/radare2/libr/anal/d/types.c" 2
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
# 5 "project/radare2/libr/anal/d/types.c" 2
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
# 6 "project/radare2/libr/anal/d/types.c" 2


# 7 "project/radare2/libr/anal/d/types.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"wmemcmp","func"},
  {"func.strcpy_chk.ret","char *"},
  {"func.fts_read_INODE64.arg.0","void*,ftsp"},
  {"func.strtoumax.ret","uintmax_t"},
  {"erff","func"},
  {"func.sinhl.ret","long double"},
  {"short","type"},
  {"func.iswdigit.ret","int"},
  {"func.strncmp.arg.0","const char *,s1"},
  {"func.vwscanf.ret","int"},
  {"func.strncmp.arg.1","const char *,s2"},
  {"func.ctime.args","1"},
  {"erfc","func"},
  {"func.strncmp.arg.2","size_t,n"},
  {"erfl","func"},
  {"asin","func"},
  {"func.swscanf.arg.0","const wchar_t *,s"},
  {"type.long long.size","64"},
  {"func.swscanf.arg.1","const wchar_t *,format"},
  {"func.mktime.arg.0","tm *,timeptr"},
  {"func.socket.args","3"},
  {"func.objc_msgSendSuper2.args","2"},
  {"func.strstr.ret","char *"},
  {"ldexpf","func"},
  {"func.nearbyintf.arg.0","float,x"},
  {"func.nl_langinfo.ret","char *"},
  {"func.mbsinit.ret","int"},
  {"func.signbit.ret","bool"},
  {"func.tgamma.args","1"},
  {"ldexpl","func"},
  {"fetestexcept","func"},
  {"wscanf","func"},
  {"func.vfwprintf.arg.1","const wchar_t *,format"},
  {"func.vfwprintf.arg.0","FILE *,stream"},
  {"func.vfwprintf.arg.2","va_list,arg"},
  {"getuid","func"},
  {"func.tanf.arg.0","float,x"},
  {"imaxdiv","func"},
  {"func.nanf.ret","float"},
  {"func.ldexpf.args","2"},
  {"func.islessgreater.args","2"},
  {"func.getwc.arg.0","FILE *,stream"},
  {"func.write.args","3"},
  {"asinf","func"},
  {"isgraph","func"},
  {"asinh","func"},
  {"func.imaxabs.arg.0","intmax_t,j"},
  {"func.modff.ret","float"},
  {"func.ldexpl.arg.0","long double,value"},
  {"func.ldexpl.arg.1","int,exp"},
  {"vsprintf","func"},
  {"func.ferror.arg.0","FILE *,stream"},
  {"asinl","func"},
  {"func.acoshf.arg.0","float,x"},
  {"__error","func"},
  {"func.socket.ret","int"},
  {"compat_mode","func"},
  {"func.remainder.arg.0","arithmetic,x"},
  {"func.rintf.args","1"},
  {"func.remainder.arg.1","arithmetic,y"},
  {"rintf","func"},
  {"func.fmodl.args","2"},
  {"func.atanhf.ret","float"},
  {"wcscspn","func"},
  {"func.strtof.ret","float"},
  {"rintl","func"},
  {"func.exp2l.arg.0","long double,x"},
  {"func.perror.ret","void"},
  {"func.usleep.ret","int"},
  {"remainderl","func"},
  {"wcstoumax","func"},
  {"feholdexcept","func"},
  {"func.fopen.arg.1","const char *,mode"},
  {"truncl","func"},
  {"func.fopen.arg.0","const char *,filename"},
  {"fegetexceptflag","func"},
  {"func.lroundl.arg.0","long double,x"},
  {"func.asinhf.ret","float"},
  {"powl","func"},
  {"type.uint16_t","w"},
  {"func.setbuf.arg.0","FILE *,stream"},
  {"remainderf","func"},
  {"func.setbuf.arg.1","char *,buf"},
  {"getpid","func"},
  {"truncf","func"},
  {"func.ilogb.args","1"},
  {"func.getc.ret","int"},
  {"func.remainder.ret","floating_point"},
  {"func.lldiv.arg.0","long long,numer"},
  {"func.lldiv.arg.1","long long,denom"},
  {"powf","func"},
  {"func.fabsf.args","1"},
  {"func.puts.args","1"},
  {"func.qsort.args","4"},
  {"func.__maskrune.args","2"},
  {"func.fstat.ret","int"},
  {"func.ldexpf.arg.0","float,value"},
  {"func.lgammaf.arg.0","float,x"},
  {"func.ldexpf.arg.1","int,exp"},
  {"func.btowc.args","1"},
  {"func.sinhl.args","1"},
  {"memchr","func"},
  {"connect","func"},
  {"func.frexpf.arg.0","float,value"},
  {"func.frexpf.arg.1","int *,exp"},
  {"func.fts_children_INODE64.ret","void *"},
  {"func.strchr.ret","char *"},
  {"iswctype","func"},
  {"func.wctype.args","1"},
  {"func.erfl.arg.0","long double,x"},
  {"strpbrk","func"},
  {"func.wmemcpy.ret","wchar_t*"},
  {"func.fwscanf.ret","int"},
  {"fegetround","func"},
  {"func.fdim.arg.1","arithmetic,y"},
  {"humanize_number","func"},
  {"func.fdim.arg.0","arithmetic,x"},
  {"sqrt","func"},
  {"func.strtof.arg.1","char * *,endptr"},
  {"func.atanhl.arg.0","long double,x"},
  {"func.strtof.arg.0","const char *,str"},
  {"func.strtok.arg.0","char *,s1"},
  {"func.strtok.arg.1","const char *,s2"},
  {"func.ioctl.ret","int"},
  {"func.logbl.ret","long double"},
  {"mbsinit","func"},
  {"func.clearerr.args","1"},
  {"func.nextafter.args","2"},
  {"func.nextafterl.arg.0","long double,x"},
  {"fgetpos","func"},
  {"swscanf","func"},
  {"func.nextafterl.arg.1","long double,y"},
  {"xmalloc","func"},
  {"func.inet_ntoa.args","1"},
  {"func.feof.arg.0","FILE *,stream"},
  {"func.srandomdev.ret","void"},
  {"func.fgetpos.ret","int"},
  {"sinf","func"},
  {"logb","func"},
  {"sinh","func"},
  {"nextafter","func"},
  {"logf","func"},
  {"sinl","func"},
  {"func.fegetenv.ret","int"},
  {"func.nexttowardl.ret","long double"},
  {"logl","func"},
  {"func.fflush.args","1"},
  {"func.fminf.ret","float"},
  {"tgammaf","func"},
  {"func.erfcf.ret","float"},
  {"func.feof.args","1"},
  {"func.strtol.arg.2","int,base"},
  {"func.strtol.arg.1","char * *,endptr"},
  {"func.llroundl.args","1"},
  {"func.strtol.arg.0","const char *,str"},
  {"func.strmode.ret","void"},
  {"func.objc_retainAutoreleasedReturnValue.ret","void"},
  {"func.wcslen.args","1"},
  {"tgammal","func"},
  {"func.wcschr.ret","wchar_t*"},
  {"snprintf","func"},
  {"func.llabs.arg.0","long long,j"},
  {"islessgreater","func"},
  {"func.fmax.arg.1","arithmetic,y"},
  {"func.wmemmove.ret","wchar_t*"},
  {"func.fmax.arg.0","arithmetic,x"},
  {"func.wcstoumax.args","3"},
  {"type.unsigned char","b"},
  {"func.strlcpy.ret","char *"},
  {"func.gets.arg.0","char *,s"},
  {"trunc","func"},
  {"func.strncpy.args","3"},
  {"func.lroundf.args","1"},
  {"func.isdigit.args","1"},
  {"func.fprintf.ret","int"},
  {"func.vwprintf.args","2"},
  {"func.remove.ret","int"},
  {"func.free.ret","void"},
  {"func.iswlower.args","1"},
  {"func.isless.args","2"},
  {"func.expm1f.args","1"},
  {"func.fts_close_INODE64.ret","int"},
  {"func.isnormal.args","1"},
  {"func.atanl.ret","long double"},
  {"func.bindtextdomain.ret","char *"},
  {"func.islessgreater.ret","bool"},
  {"func.ftell.arg.0","FILE *,stream"},
  {"localeconv","func"},
  {"func.snprintf_chk.arg.0","char *,s"},
  {"func.memmem.arg.1","int,big_len"},
  {"func.snprintf_chk.arg.1","size_t,size"},
  {"isgreaterequal","func"},
  {"func.memmem.arg.0","const void *,big"},
  {"func.snprintf_chk.arg.2","const char *,format"},
  {"func.memmem.arg.3","int,little_len"},
  {"func.snprintf_chk.arg.3",",..."},
  {"func.signal.args","2"},
  {"func.memmem.arg.2","const void *,little"},
  {"func.fegetenv.args","1"},
  {"func.setstate.arg.0","const char *,state"},
  {"iswblank","func"},
  {"func.copysignf.ret","float"},
  {"log2","func"},
  {"func.scalbln.arg.0","arithmetic,x"},
  {"func.scalbln.arg.1","long,ex"},
  {"iswpunct","func"},
  {"acoshf","func"},
  {"func.logbl.arg.0","long double,x"},
  {"func.fputwc.arg.0","wchar_t,c"},
  {"func.fputwc.arg.1","FILE *,stream"},
  {"type.uint8_t","b"},
  {"func.toupper.ret","int"},
  {"acoshl","func"},
  {"func.log1pf.ret","float"},
  {"func.wcsncpy.args","3"},
  {"tmpfile","func"},
  {"func.reallocf.arg.1","size_t,size"},
  {"type.double","F"},
  {"func.xmalloc.arg.0","size_t,size"},
  {"func.reallocf.arg.0","void *,ptr"},
  {"func.llrint.arg.0","arithmetic,x"},
  {"func.wcstoll.args","3"},
  {"func.strncmp.args","3"},
  {"strncat","func"},
  {"func.wcstol.args","3"},
  {"memcmp","func"},
  {"func.erf.args","1"},
  {"fminl","func"},
  {"func.objc_msgSend.args","2"},
  {"func.exp2.args","1"},
  {"func.wctrans.ret","wctrans_t"},
  {"func.atanh.ret","floating_point"},
  {"func.vfwscanf.arg.2","va_list,arg"},
  {"func.fmod.arg.1","arithmetic,y"},
  {"func.vfwscanf.arg.1","const wchar_t *,format"},
  {"func.fmod.arg.0","arithmetic,x"},
  {"func.vfwscanf.arg.0","FILE *,stream"},
  {"func.memchr.ret","void *"},
  {"fminf","func"},
  {"nexttoward","func"},
  {"func.putwchar.ret","wint_t"},
  {"func.compat_mode.arg.1","const char *,mode"},
  {"func.compat_mode.arg.0","const char *,function"},
  {"func.nexttowardf.args","2"},
  {"func.iswlower.arg.0","wint_t,wc"},
  {"ftell","func"},
  {"func.log.ret","floating_point"},
  {"func.wcstod.arg.1","wchar_t* *,endptr"},
  {"func.tgamma.ret","floating_point"},
  {"func.wcstod.arg.0","const wchar_t *,nptr"},
  {"func.frexp.args","2"},
  {"func.objc_msgSendSuper2.arg.0","void *,instance"},
  {"func.objc_msgSendSuper2.arg.1","char *,selector"},
  {"func.islower.args","1"},
  {"func.coshl.args","1"},
  {"cbrt","func"},
  {"ferror","func"},
  {"func.read.args","3"},
  {"swprintf","func"},
  {"strndup","func"},
  {"func.asinhl.arg.0","long double,x"},
  {"func.textdomain.ret","char *"},
  {"type.int","d"},
  {"func.logbl.args","1"},
  {"func.wcstoimax.arg.0","const,wchar_t*"},
  {"func.wcstoimax.arg.1","wchar_t* *,endptr"},
  {"func.snprintf_chk.ret","int"},
  {"func.wcstoull.ret","long long"},
  {"func.wcstoimax.arg.2","int,base"},
  {"func.erfl.ret","long double"},
  {"isinf","func"},
  {"func.wcstombs.args","3"},
  {"func.iswxdigit.arg.0","wint_t,wc"},
  {"memcpy","func"},
  {"func.fmaf.arg.1","float,y"},
  {"func.fmaf.arg.0","float,x"},
  {"type.char *","z"},
  {"func.fmaf.arg.2","float,z"},
  {"func.vfprintf.ret","int"},
  {"func.fsetpos.arg.1","const fpos_t*,pos"},
  {"func.bindtextdomain.arg.1","char *,dirname"},
  {"func.ilogb.ret","int"},
  {"func.fsetpos.arg.0","FILE *,stream"},
  {"func.bindtextdomain.arg.0","char *,domainname"},
  {"func.log2f.arg.0","float,x"},
  {"func.wcscoll.args","2"},
  {"type.int16_t","w"},
  {"getenv","func"},
  {"func.mbtowc.args","3"},
  {"func.acosl.arg.0","long double,x"},
  {"func.main.arg.2","char **,envp"},
  {"wcstok","func"},
  {"func.floorf.arg.0","float,x"},
  {"func.strmode.arg.1","char *,bp"},
  {"func.main.arg.0","int,argc"},
  {"func.strmode.arg.0","int,mode"},
  {"func.main.arg.1","char **,argv"},
  {"wcstol","func"},
  {"func.srandomdev.args","0"},
  {"func.warnx.arg.0","const char *,format"},
  {"func.vprintf.ret","int"},
  {"func.wcscoll.ret","int"},
  {"pow","func"},
  {"wcstod","func"},
  {"func.putc.ret","int"},
  {"wcstof","func"},
  {"func.vsprintf.ret","int"},
  {"func.isnan.args","1"},
  {"func.sinf.args","1"},
  {"func.ceill.arg.0","long double,x"},
  {"func.group_from_gid.arg.0","gid_t,gid"},
  {"func.hypotl.ret","long double"},
  {"func.group_from_gid.arg.1","int,nogroup"},
  {"func.expl.ret","long double"},
  {"type.int64_t","q"},
  {"func.fmaxl.ret","long double"},
  {"floor","func"},
  {"modff","func"},
  {"isprint","func"},
  {"func.strpbrk.args","2"},
  {"func.acoshl.args","1"},
  {"modfl","func"},
  {"func.cosl.arg.0","long double,x"},
  {"func.vswscanf.arg.2","va_list,arg"},
  {"func.fmaxl.args","2"},
  {"func.vswscanf.arg.0","const wchar_t *,s"},
  {"fabs","func"},
  {"func.vswscanf.arg.1","const wchar_t *,format"},
  {"vfwprintf","func"},
  {"func.wcsstr.arg.1","const wchar_t *,s2"},
  {"func.wcsstr.arg.0","wchar_t *,s1"},
  {"func.iswdigit.arg.0","wint_t,wc"},
  {"func.ldexpl.ret","long double"},
  {"func.tanf.args","1"},
  {"func.ilogbl.args","1"},
  {"func.log2.ret","floating_point"},
  {"func.towctrans.ret","wint_t"},
  {"func.iswxdigit.args","1"},
  {"func.warnx.args","1"},
  {"objc_release","func"},
  {"func.wcsncpy.ret","wchar_t*"},
  {"func.log1pl.args","1"},
  {"func.initstate.arg.0","uint32_t,state"},
  {"type.unsigned int","i"},
  {"func.tmpnam.arg.0","char *,s"},
  {"func.initstate.arg.1","char *,state"},
  {"func.vswscanf.args","3"},
  {"func.initstate.arg.2","size_t,size"},
  {"func.objc_release.arg.0","void *,instance"},
  {"func.wcscspn.arg.0","const wchar_t *,s1"},
  {"func.tolower.ret","int"},
  {"func.wcscspn.arg.1","const wchar_t *,s2"},
  {"time","func"},
  {"func.fminl.args","2"},
  {"func.user_from_uid.include","pwd.h"},
  {"func.group_from_gid.args","2"},
  {"func.initstate.ret","char *"},
  {"func.erfcf.arg.0","float,x"},
  {"long","type"},
  {"inet_ntoa","func"},
  {"func.rename.arg.1","const char *,newpath"},
  {"func.rename.arg.0","const char *,oldpath"},
  {"func.wctob.ret","int"},
  {"func.strtoimax.ret","intmax_t"},
  {"func.strncat.arg.0","char *,s1"},
  {"func.putchar.args","1"},
  {"func.strncat.arg.1","const char *,s2"},
  {"func.fwscanf.args","2"},
  {"func.cos.args","1"},
  {"func.strncat.arg.2","size_t,n"},
  {"func.tanh.args","1"},
  {"func.acosl.args","1"},
  {"func.ctime.ret","char *"},
  {"strftime","func"},
  {"func.mkstemp.ret","int"},
  {"func.mbrtowc.args","4"},
  {"func.objc_retainAutoreleasedReturnValue.arg.0","void *,instance"},
  {"func.fwrite.arg.2","size_t,nitems"},
  {"func.difftime.args","2"},
  {"func.maskrune.ret","int"},
  {"func.fwrite.arg.3","FILE *,stream"},
  {"func.fwrite.arg.0","const void *,ptr"},
  {"func.fwrite.arg.1","size_t,size"},
  {"func.memmem.ret","void *"},
  {"func.initstate.args","3"},
  {"localtime","func"},
  {"exp2l","func"},
  {"func.iswprint.ret","int"},
  {"func.truncf.arg.0","float,x"},
  {"func.strtoumax.arg.2","int,base"},
  {"func.getprogname.ret","const char *"},
  {"func.xmalloc.ret"," void *"},
  {"func.strtoumax.arg.0","const char *,str"},
  {"func.strtoumax.arg.1","char * *,endptr"},
  {"exp2f","func"},
  {"func.compat_mode.ret","bool"},
  {"type.uint16_t.size","16"},
  {"*aligned_alloc","func"},
  {"func.hypotl.args","2"},
  {"expm1","func"},
  {"atan2l","func"},
  {"func.fmodl.ret","long double"},
  {"type.char.size","8"},
  {"func.mbtowc.arg.1","const char *,s"},
  {"func.mbtowc.arg.0","wchar_t *,pwc"},
  {"func.copysign.args","2"},
  {"func.mbtowc.arg.2","size_t,n"},
  {"atan2f","func"},
  {"socket","func"},
  {"func.fts_open_INODE64.args","4"},
  {"func.fesetround.args","1"},
  {"func.objc_enumerationMutation.arg.0","void *,instance"},
  {"func.acoshl.arg.0","long double,x"},
  {"func.wmemcpy.arg.1","const wchar_t *,s2"},
  {"iswalpha","func"},
  {"mmap","func"},
  {"func.wmemcpy.arg.0","wchar_t *,s1"},
  {"llabs","func"},
  {"fscanf","func"},
  {"func.mmap.args","6"},
  {"wctype","func"},
  {"func.wmemcpy.arg.2","size_t,n"},
  {"wcsncmp","func"},
  {"func.inet_ntoa.arg.0","void *,in"},
  {"llroundf","func"},
  {"rewind","func"},
  {"func.imaxdiv.args","2"},
  {"func.towlower.ret","wint_t"},
  {"llroundl","func"},
  {"fesetround","func"},
  {"func.wcscoll.arg.0","const wchar_t *,s1"},
  {"func.feholdexcept.args","1"},
  {"func.wcscoll.arg.1","const wchar_t *,s2"},
  {"func.putwc.arg.0","wchar_t,c"},
  {"func.putwc.arg.1","FILE *,stream"},
  {"func.putwchar.args","1"},
  {"type.void *","p"},
  {"func.fclose.ret","int"},
  {"func.atanl.arg.0","long double,x"},
  {"func.vfscanf.arg.0","FILE *,stream"},
  {"func.remquo.ret","floating_point"},
  {"func.vfscanf.arg.1","const char *,format"},
  {"func.vfscanf.arg.2","va_list,ap"},
  {"func.main.ret","int"},
  {"wcstoul","func"},
  {"func.tgammaf.ret","float"},
  {"func.floorl.ret","long double"},
  {"func.iscntrl.args","1"},
  {"func.iswxdigit.ret","int"},
  {"func.localtime.args","1"},
  {"nexttowardl","func"},
  {"symlink","func"},
  {"func.fesetenv.args","1"},
  {"strdup","func"},
  {"func.wmemset.args","3"},
  {"func.strcspn.args","2"},
  {"func.feupdateenv.ret","int"},
  {"func.scalblnf.args","2"},
  {"func.atoll.arg.0","const char *,str"},
  {"func.ungetwc.args","2"},
  {"func.popen.args","2"},
  {"func.fwscanf.arg.1","const wchar_t *,format"},
  {"fwprintf","func"},
  {"nexttowardf","func"},
  {"func.fwscanf.arg.0","FILE *,stream"},
  {"func.sinf.ret","float"},
  {"int","type"},
  {"func.expm1l.args","1"},
  {"func.chmod.args","2"},
  {"frexp","func"},
  {"func.wctrans.arg.0","const char *,property"},
  {"func.wcslen.arg.0","const wchar_t *,s"},
  {"func.close.args","1"},
  {"func.modf.ret","floating_point"},
  {"func.nextafterl.args","2"},
  {"func.gets.args","1"},
  {"llrintf","func"},
  {"func.llrintf.arg.0","float,x"},
  {"fdimf","func"},
  {"func.fwide.ret","int"},
  {"calloc","func"},
  {"func.user_from_uid.arg.0","uid_t,uid"},
  {"func.user_from_uid.arg.1","int,nouser"},
  {"llrintl","func"},
  {"func.logb.arg.0","arithmetic,x"},
  {"func.nexttowardl.arg.1","long double,y"},
  {"func.nexttowardl.arg.0","long double,x"},
  {"fdiml","func"},
  {"llrint","func"},
  {"feupdateenv","func"},
  {"func.asin.arg.0","arithmetic,x"},
  {"func.feholdexcept.arg.0","fenv_t *,envp"},
  {"func.log10.arg.0","arithmetic,x"},
  {"memset","func"},
  {"uid_t","type"},
  {"func.isinf.arg.0","arithmetic,x"},
  {"func.fwide.args","2"},
  {"func.getwchar.ret","wint_t"},
  {"func.feclearexcept.args","1"},
  {"func.nearbyintl.ret","long double"},
  {"func.clock.ret","clock_t"},
  {"__toupper","func"},
  {"func.localtime.ret","tm*"},
  {"func.mbstowcs.ret","size_t"},
  {"realloc","func"},
  {"func.sprintf.args","3"},
  {"func.munmap.args","2"},
  {"func.acos.ret","floating_point"},
  {"func.imaxdiv.arg.1","intmax_t,denom"},
  {"func.imaxdiv.arg.0","intmax_t,numer"},
  {"func.powf.args","2"},
  {"func.strtol.args","3"},
  {"type.short.size","16"},
  {"func.strlen.args","1"},
  {"func.copysign.arg.1","arithmetic,y"},
  {"func.copysign.arg.0","arithmetic,x"},
  {"lgamma","func"},
  {"tanhf","func"},
  {"func.floor.ret","floating_point"},
  {"func.lstat.args","2"},
  {"func.fmin.ret","floating_point"},
  {"func.hypot.arg.1","arithmetic,y"},
  {"func.isfinite.args","1"},
  {"func.lstat.ret","void"},
  {"func.hypot.arg.0","arithmetic,x"},
  {"round","func"},
  {"tanl","func"},
  {"func.strndup.arg.1","int,n"},
  {"func.ilogbl.arg.0","long double,x"},
  {"int8_t","type"},
  {"func.strndup.arg.0","const char *,src"},
  {"func.cbrt.args","1"},
  {"type.unsigned char.size","8"},
  {"feraiseexcept","func"},
  {"func.roundf.ret","float"},
  {"func.lround.arg.0","arithmetic,x"},
  {"tanh","func"},
  {"tanhl","func"},
  {"tanf","func"},
  {"func.objc_retain.args","1"},
  {"func.wmemmove.args","3"},
  {"func.remquo.args","3"},
  {"func.wcscmp.arg.0","const wchar_t *,s1"},
  {"func.wcscmp.arg.1","const wchar_t *,s2"},
  {"abs","func"},
  {"strxfrm","func"},
  {"fts_read_INODE64","func"},
  {"sqrtf","func"},
  {"func.fmal.ret","long double"},
  {"func.sqrtf.args","1"},
  {"func.rand.ret","int"},
  {"func.fgets.args","3"},
  {"func.inet_aton.arg.0","const char *,cp"},
  {"func.isless.arg.0","arithmetic,x"},
  {"perror","func"},
  {"func.inet_aton.arg.1","void *,pin"},
  {"func.fputc.arg.1","FILE *,stream"},
  {"func.isless.arg.1","arithmetic,y"},
  {"func.fprintf.args","3"},
  {"func.fputc.arg.0","int,c"},
  {"sqrtl","func"},
  {"putchar","func"},
  {"func.floor.args","1"},
  {"func.close.arg.0","int,fildes"},
  {"func.fts_read_INODE64.ret","void *"},
  {"func.truncl.args","1"},
  {"func.nextafterf.ret","float"},
  {"func.expm1l.ret","long double"},
  {"func.acos.arg.0","arithmetic,x"},
  {"hypot","func"},
  {"func.log2l.ret","long double"},
  {"func.log1p.ret","floating_point"},
  {"func.wmemchr.args","3"},
  {"func.fmal.args","3"},
  {"gets","func"},
  {"func.nextafterf.args","2"},
  {"read","func"},
  {"func.fstat.arg.1","void *,buf"},
  {"func.fstat.arg.0","int,fildes"},
  {"func.lrintf.arg.0","float,x"},
  {"func.scalblnl.ret","long double"},
  {"at_quick_exit","func"},
  {"func.fesetexceptflag.args","2"},
  {"func.strncpy.ret","char *"},
  {"getc","func"},
  {"func.strtoll.arg.2","int,base"},
  {"func.printf.arg.0","const char *,format"},
  {"func.strtoll.arg.1","char * *,endptr"},
  {"func.iswcntrl.ret","int"},
  {"func.strtoll.arg.0","const char *,str"},
  {"func.feraiseexcept.args","1"},
  {"func.ungetwc.arg.0","wint_t,c"},
  {"func.exp2.ret","floating_point"},
  {"func.strspn.args","2"},
  {"func.ungetwc.arg.1","FILE *,stream"},
  {"openat","func"},
  {"func.atol.arg.0","const char *,str"},
  {"func.remquol.ret","long double"},
  {"func.expl.arg.0","long double,x"},
  {"type.unsigned short","w"},
  {"func.atof.ret","double"},
  {"func.tgoto.args","3"},
  {"func.strcoll.args","2"},
  {"func.__tolower.ret","int"},
  {"acosh","func"},
  {"func.logl.arg.0","long double,x"},
  {"func.wcsncmp.arg.2","size_t,n"},
  {"func.iswdigit.args","1"},
  {"qsort","func"},
  {"func.fegetround.args","0"},
  {"func.fscanf.ret","int"},
  {"func.rint.args","1"},
  {"func.wcsncmp.arg.0","const wchar_t *,s1"},
  {"func.chmod.arg.0","const char *,path"},
  {"func.wcsncmp.arg.1","const wchar_t *,s2"},
  {"func.wcstoull.arg.0","const wchar_t *,nptr"},
  {"acosl","func"},
  {"func.chmod.arg.1","int,mode"},
  {"func.wcstoull.arg.1","wchar_t* *,endptr"},
  {"mktemp","func"},
  {"func.wcstoull.arg.2","int,base"},
  {"func.lldiv.ret","lldiv_t"},
  {"asinhl","func"},
  {"func.sscanf.args","3"},
  {"func.fts_set_INODE64.args","3"},
  {"acosf","func"},
  {"func.vfwscanf.args","3"},
  {"func.recv.args","4"},
  {"func.__bzero.arg.1","size_t,n"},
  {"recv","func"},
  {"func.__bzero.arg.0","void *,s"},
  {"type.char","c"},
  {"func.log10l.ret","long double"},
  {"asinhf","func"},
  {"func.cbrtl.ret","long double"},
  {"type.uint8_t.size","8"},
  {"func.memcmp.args","3"},
  {"func.nexttowardl.args","2"},
  {"func.basename.ret","char *"},
  {"vsnprintf","func"},
  {"bzero","func"},
  {"func.unlink.arg.0","const char *,path"},
  {"func.xmalloc.args","1"},
  {"func.remove.arg.0","const char *,filename"},
  {"func.srand.args","1"},
  {"imaxabs","func"},
  {"func.open.ret","int"},
  {"uint16_t","type"},
  {"void *","type"},
  {"func.iswupper.arg.0","wint_t,wc"},
  {"func.iswalnum.args","1"},
  {"func.objc_storeStrong.arg.0","void *,instance"},
  {"func.copysignl.args","2"},
  {"func.objc_storeStrong.arg.1","int,type"},
  {"func.iswblank.arg.0","wint_t,wc"},
  {"func.ilogbf.args","1"},
  {"iswxdigit","func"},
  {"func.labs.ret","long"},
  {"func.ldexp.arg.0","arithmetic,value"},
  {"func.fgetws.args","3"},
  {"func.ldexp.arg.1","int,exp"},
  {"floorl","func"},
  {"func.humanize_number.args","1"},
  {"func.popen.ret","file*"},
  {"func.asinhf.args","1"},
  {"func.memmem.args","4"},
  {"func.logbf.args","1"},
  {"func.wctype.arg.0","const char *,property"},
  {"floorf","func"},
  {"func.remquof.arg.2","int *,pquo"},
  {"func.remquof.arg.0","float,x"},
  {"func.remquof.arg.1","float,y"},
  {"memmem","func"},
  {"func.at_quick_exit.args","0"},
  {"func.rintl.ret","long double"},
  {"func.mbsrtowcs.arg.3","mbstate_t *,ps"},
  {"func.mbsrtowcs.arg.2","size_t,len"},
  {"func.mbsrtowcs.arg.1","const char * *,src"},
  {"ctime","func"},
  {"func.mbsrtowcs.arg.0","wchar_t *,dst"},
  {"func.strtoumax.args","3"},
  {"func.malloc.ret"," void *"},
  {"log1pf","func"},
  {"func.ldiv.args","2"},
  {"func.setvbuf.arg.0","FILE*,stream"},
  {"func.setvbuf.arg.1","char *,buf"},
  {"func.isalpha.args","1"},
  {"func.setvbuf.arg.2","int,mode"},
  {"func.strcpy_chk.args","2"},
  {"func.modfl.arg.1","long double *,iptr"},
  {"func.setvbuf.arg.3","size_t,size"},
  {"ptrace","func"},
  {"func.modfl.arg.0","long double,value"},
  {"log1pl","func"},
  {"func.wcstoll.arg.1","wchar_t* *,endptr"},
  {"fopen","func"},
  {"func.wcstoll.arg.0","const wchar_t *,nptr"},
  {"func.wcstoll.arg.2","int,base"},
  {"tolower","func"},
  {"func.exp.arg.0","arithmetic,x"},
  {"func.acosf.args","1"},
  {"func.wcstol.arg.1","wchar_t* *,endptr"},
  {"func.wcstol.arg.0","const wchar_t *,nptr"},
  {"func.wcstol.arg.2","int,base"},
  {"func.srandom.args","1"},
  {"func.logb.ret","floating_point"},
  {"func.log2l.arg.0","long double,x"},
  {"func.ungetwc.ret","wint_t"},
  {"func.puts.arg.0","const char *,s"},
  {"func.tanl.arg.0","long double,x"},
  {"func.nanl.arg.0","const char *,str"},
  {"func.isblank.ret","int"},
  {"func.nearbyint.args","1"},
  {"isunordered","func"},
  {"func.acosh.arg.0","arithmetic,x"},
  {"func.wctrans.args","1"},
  {"func.mbstowcs.arg.1","const char *,s"},
  {"func.hypotf.args","2"},
  {"func.mbstowcs.arg.0","wchar_t *,pwcs"},
  {"func.wctob.arg.0","wint_t,c"},
  {"func.realloc.args","2"},
  {"func.mbstowcs.arg.2","size_t,n"},
  {"func.basename.args","1"},
  {"func.vswprintf.args","4"},
  {"func.vswprintf.ret","int"},
  {"func.close.ret","int"},
  {"mbsrtowcs","func"},
  {"func.vscanf.args","2"},
  {"islower","func"},
  {"func.fmaxf.args","2"},
  {"objc_enumerationMutation","func"},
  {"chmod","func"},
  {"vwprintf","func"},
  {"func.log1pf.arg.0","float,x"},
  {"func.atan2f.ret","float"},
  {"func.fma.arg.2","arithmetic,z"},
  {"func.localtime.arg.0","const time_t *,timer"},
  {"func.fma.arg.1","arithmetic,y"},
  {"func.openat.ret","int"},
  {"func.fma.arg.0","arithmetic,x"},
  {"func.remainderf.arg.0","float,x"},
  {"func.isgraph.arg.0","int,c"},
  {"func.remainderf.arg.1","float,y"},
  {"func.toupper.arg.0","int,c"},
  {"func.logf.ret","float"},
  {"func.isalnum.args","1"},
  {"func.strerror.args","1"},
  {"func.cosh.arg.0","arithmetic,x"},
  {"func.llrintf.ret","long long"},
  {"tgoto","func"},
  {"func.wcstod.args","2"},
  {"func.cosl.args","1"},
  {"type.int16_t.size","16"},
  {"objc_msgSendSuper2","func"},
  {"vswscanf","func"},
  {"func.umask.arg.0","int,m"},
  {"func.wcstoumax.ret","uintmax_t"},
  {"func.__toupper.arg.0","int,c"},
  {"func.scanf.args","1"},
  {"func.scalbnl.ret","long double"},
  {"func.fclose.args","1"},
  {"func.ioctl.arg.0","int,fd"},
  {"func.ioctl.arg.1","unsigned long,request"},
  {"func.time.args","1"},
  {"func.btowc.arg.0","int,c"},
  {"iswdigit","func"},
  {"func.erfcf.args","1"},
  {"strtok","func"},
  {"func.memcpy.arg.2","size_t,n"},
  {"func.signbit.arg.0","arithmetic,x"},
  {"func.wcsstr.args","2"},
  {"func.memcpy.arg.0","void *,s1"},
  {"func.memcpy.arg.1","const void *,s2"},
  {"func.fts_close_INODE64.arg.0","void*,ftsp"},
  {"func.fesetround.arg.0","int,round"},
  {"strtol","func"},
  {"func.cbrtf.arg.0","float,x"},
  {"fmaxf","func"},
  {"func.rintl.arg.0","long double,x"},
  {"bsearch","func"},
  {"strtof","func"},
  {"strtod","func"},
  {"wcsncat","func"},
  {"func.labs.args","1"},
  {"func.geteuid.args","0"},
  {"func.ceil.args","1"},
  {"func.erfcl.arg.0","long double,x"},
  {"fmaxl","func"},
  {"func.scalbn.arg.0","arithmetic,x"},
  {"func.srandom.arg.0","uint32_t,seed"},
  {"func.scalbn.arg.1","int,ex"},
  {"func.erff.args","1"},
  {"func.mbstowcs.args","3"},
  {"func.wcsftime.args","4"},
  {"func.pclose.arg.0","FILE *,stream"},
  {"func.wcrtomb.ret","size_t"},
  {"func.log.arg.0","arithmetic,x"},
  {"ceil","func"},
  {"func.fseek.arg.2","int,whence"},
  {"func.wcscat.arg.0","wchar_t *,s1"},
  {"func.fseek.arg.1","long,offset"},
  {"func.wcscat.arg.1","const wchar_t *,s2"},
  {"func.fseek.arg.0","FILE *,stream"},
  {"func.fwprintf.ret","int"},
  {"func.strcmp.arg.0","const char *,s1"},
  {"func.wcsspn.ret","size_t"},
  {"func.strcmp.arg.1","const char *,s2"},
  {"func.feof.ret","int"},
  {"cosh","func"},
  {"cosl","func"},
  {"func.fmin.args","2"},
  {"frexpl","func"},
  {"func.objc_msgSend.arg.1","char *,selector"},
  {"scanf","func"},
  {"func.objc_msgSend.arg.0","void *,instance"},
  {"cosf","func"},
  {"func.iswgraph.args","1"},
  {"func.system.arg.0","const char *,string"},
  {"func.sinf.arg.0","float,x"},
  {"func.longjmp.args","2"},
  {"func.kill.ret","int"},
  {"func.modff.args","2"},
  {"frexpf","func"},
  {"func.fgetwc.arg.0","FILE *,stream"},
  {"type.int.size","32"},
  {"func.coshf.ret","float"},
  {"func.isunordered.arg.1","arithmetic,y"},
  {"func.isnormal.arg.0","arithmetic,x"},
  {"func.isunordered.arg.0","arithmetic,x"},
  {"func.fesetexceptflag.ret","int"},
  {"func.putchar.ret","int"},
  {"func.isinf.args","1"},
  {"func.rename.args","2"},
  {"func.iswblank.args","1"},
  {"func.fetestexcept.arg.0","int,excepts"},
  {"char","type"},
  {"fmodf","func"},
  {"func.fdiml.ret","long double"},
  {"func.isprint.arg.0","int,c"},
  {"func.lrint.ret","long"},
  {"func.ldiv.ret","ldiv_t"},
  {"fmodl","func"},
  {"func.atoi.args","1"},
  {"func.nanl.ret","long double"},
  {"func.fabsl.args","1"},
  {"func.fgetc.arg.0","FILE *,stream"},
  {"func.setstate.args","1"},
  {"func.nl_langinfo_l.args","2"},
  {"func.warnc.arg.0","const char *,format"},
  {"func.warnc.arg.1","int,opt"},
  {"func.acosf.arg.0","float,x"},
  {"func.scalbnl.arg.0","long double,x"},
  {"func.scalbnl.arg.1","int,ex"},
  {"toupper","func"},
  {"func.sinl.args","1"},
  {"func.ceill.ret","long double"},
  {"func.ilogbl.ret","int"},
  {"func.exp.args","1"},
  {"func.tanhf.ret","float"},
  {"func.llrintf.args","1"},
  {"clearerr","func"},
  {"error","func"},
  {"func.lrint.arg.0","arithmetic,x"},
  {"func.sqrt.arg.0","arithmetic,x"},
  {"func.wscanf.ret","int"},
  {"sleep","func"},
  {"func.scalbn.args","2"},
  {"func.nearbyintl.args","1"},
  {"func.fabs.args","1"},
  {"func.isfinite.ret","bool"},
  {"func.trunc.args","1"},
  {"func.quick_exit.args","1"},
  {"func.isdigit.ret","int"},
  {"func.umask.args","1"},
  {"strcspn","func"},
  {"func.modfl.ret","long double"},
  {"func.strdup.ret","char *"},
  {"func.srand.arg.0","int,seed"},
  {"func.scalbnf.arg.0","float,x"},
  {"func.scalbnf.arg.1","int,ex"},
  {"func.lroundl.ret","long"},
  {"func.fesetexceptflag.arg.1","int,excepts"},
  {"func.fesetexceptflag.arg.0","const,fexcept_t*"},
  {"func.reallocf.ret","void *"},
  {"func.erfc.args","1"},
  {"func.strcpy.ret","char *"},
  {"fread","func"},
  {"func.fesetenv.arg.0","const,fenv_t*"},
  {"wcstold","func"},
  {"func.sinhf.ret","float"},
  {"func.strcpy.arg.0","char *,dest"},
  {"func.strcpy.arg.1","const char *,src"},
  {"func.isatty.arg.0","int,fd"},
  {"func.floor.arg.0","arithmetic,x"},
  {"func.round.arg.0","arithmetic,x"},
  {"func.ldiv.arg.0","long,numer"},
  {"func.localeconv.args","0"},
  {"func.tmpfile.ret","file*"},
  {"func.ldiv.arg.1","long,denom"},
  {"func.nan.arg.0","const char *,str"},
  {"func.calloc.arg.1","size_t,size"},
  {"func.strftime.args","4"},
  {"wcstoll","func"},
  {"ldexp","func"},
  {"func.calloc.arg.0","size_t,nmeb"},
  {"fwrite","func"},
  {"log","func"},
  {"func.nanf.args","1"},
  {"func.wmemcmp.arg.1","const wchar_t *,s2"},
  {"func.swprintf.arg.2","const wchar_t *,format"},
  {"func.tgammaf.args","1"},
  {"func.wmemcmp.arg.0","wchar_t *,s1"},
  {"func.swprintf.arg.0","wchar_t *,s"},
  {"type.double.size","64"},
  {"func.wmemcmp.arg.2","size_t,n"},
  {"func.swprintf.arg.1","size_t,n"},
  {"func.sin.arg.0","arithmetic,x"},
  {"func.fminf.args","2"},
  {"func.vsscanf.ret","int"},
  {"func.strcspn.ret","size_t"},
  {"func.fgets.ret","char *"},
  {"func.fts_open_INODE64.arg.3","void *,ftsen$INODE64t"},
  {"fts_open_INODE64","func"},
  {"func.fts_open_INODE64.arg.2","void *,compar"},
  {"func.isupper.arg.0","int,c"},
  {"func.fts_open_INODE64.arg.1","int,options"},
  {"strtold","func"},
  {"func.wcstof.ret","float"},
  {"func.fts_open_INODE64.arg.0","const char *,path_argv"},
  {"func.mbrtowc.arg.3","mbstate_t *,ps"},
  {"func.mbrtowc.arg.2","size_t,n"},
  {"func.iswcntrl.args","1"},
  {"func.mbrtowc.arg.1","const char *,s"},
  {"func.round.ret","floating_point"},
  {"func.strxfrm.arg.1","const char *,s2"},
  {"func.warn.args","1"},
  {"func.mbrtowc.arg.0","wchar_t *,pwc"},
  {"func.strxfrm.arg.0","char *,s1"},
  {"func.strxfrm.arg.2","size_t,n"},
  {"func.roundf.arg.0","float,x"},
  {"strtoll","func"},
  {"sprintf_chk","func"},
  {"func.free.arg.0","void *,ptr"},
  {"func.strcpy_chk.arg.1","const char *,src"},
  {"func.strcpy_chk.arg.0","char *,dest"},
  {"func.iswpunct.arg.0","wint_t,wc"},
  {"func.pclose.ret","int"},
  {"vfscanf","func"},
  {"func.fwprintf.args","2"},
  {"lgammal","func"},
  {"func.iswupper.ret","int"},
  {"func.fscanf.arg.2",",..."},
  {"towlower","func"},
  {"func.tan.ret","floating_point"},
  {"func.fscanf.arg.0","FILE *,stream"},
  {"lgammaf","func"},
  {"func.fscanf.arg.1","const char *,format"},
  {"func.getwchar.args","0"},
  {"iswgraph","func"},
  {"func.vwprintf.ret","int"},
  {"reallocf","func"},
  {"func.realloc.arg.1","size_t,size"},
  {"func.realloc.arg.0","void *,ptr"},
  {"func.abs.ret","int"},
  {"geteuid","func"},
  {"lldiv","func"},
  {"func.fputc.args","2"},
  {"func.tmpnam.args","1"},
  {"func.vfwscanf.ret","int"},
  {"func.atof.args","1"},
  {"func.strerror.ret","char *"},
  {"func.fmax.args","2"},
  {"func.quick_exit.ret","void"},
  {"func.atan2l.arg.1","long double,x"},
  {"func.atan2l.arg.0","long double,y"},
  {"cbrtf","func"},
  {"func.isgraph.args","1"},
  {"func.tmpnam.ret","char *"},
  {"func.wcscat.ret","wchar_t*"},
  {"func.isalpha.ret","int"},
  {"cbrtl","func"},
  {"func.strxfrm.ret","size_t"},
  {"srandomdev","func"},
  {"func.iswalpha.arg.0","wint_t,wc"},
  {"func.vfwprintf.args","3"},
  {"llround","func"},
  {"func.strdup.args","1"},
  {"func.atanhl.ret","long double"},
  {"modf","func"},
  {"func.__error.arg.1","int,errname"},
  {"func.iswalnum.ret","int"},
  {"func.__error.arg.0","int,status"},
  {"func.getpid.ret","int"},
  {"func.__error.arg.2","char *,format"},
  {"func.fileno.args","1"},
  {"func.atanf.ret","float"},
  {"func.strncmp.ret","int"},
  {"func.fmax.ret","floating_point"},
  {"type.long.size","64"},
  {"func.fegetexceptflag.ret","int"},
  {"func.mblen.args","2"},
  {"func.powl.ret","long double"},
  {"func.sqrtf.ret","float"},
  {"func.atanf.arg.0","float,x"},
  {"func.erf.ret","floating_point"},
  {"unsigned int","type"},
  {"wprintf","func"},
  {"func.frexpl.ret","long double"},
  {"nearbyintf","func"},
  {"func.rename.ret","int"},
  {"func.wcsncat.arg.2","size_t,n"},
  {"func.wcsncat.arg.0","wchar_t *,s1"},
  {"nearbyintl","func"},
  {"func.wcsncat.arg.1","const wchar_t *,s2"},
  {"mbstowcs","func"},
  {"isatty","func"},
  {"func.wcscspn.args","2"},
  {"func.getwc.args","1"},
  {"func.strcspn.arg.0","const char *,s1"},
  {"func.strcspn.arg.1","const char *,s2"},
  {"func.error.args","3"},
  {"func.strrchr.arg.1","int,c"},
  {"func.fread.arg.1","size_t,size"},
  {"func.strrchr.arg.0","const char *,s"},
  {"func.fread.arg.0","void *,ptr"},
  {"func.llrintl.arg.0","long double,x"},
  {"func.wmemset.ret","wchar_t*"},
  {"func.fread.arg.3","FILE *,stream"},
  {"func.fread.arg.2","size_t,nmemb"},
  {"func.clearerr.ret","void"},
  {"func.asinl.args","1"},
  {"func.getpid.args","0"},
  {"scalbnf","func"},
  {"func.*aligned_alloc.args","2"},
  {"atan","func"},
  {"func.erfcl.ret","long double"},
  {"scalbnl","func"},
  {"fclose","func"},
  {"func.logbf.arg.0","float,x"},
  {"copysign","func"},
  {"type.float","f"},
  {"func.strtold.arg.1","char * *,endptr"},
  {"bind","func"},
  {"func.humanize_number.arg.4","int,scale"},
  {"func.strtold.arg.0","const char *,str"},
  {"func.humanize_number.arg.5","int,flags"},
  {"func.isunordered.args","2"},
  {"func.read.arg.2","size_t,nbyte"},
  {"func.read.arg.1","void *,buf"},
  {"func.fegetexceptflag.args","2"},
  {"func.humanize_number.arg.0","char *,buf"},
  {"func.read.ret","ssize_t"},
  {"func.copysignf.args","2"},
  {"func.fmodf.args","2"},
  {"func.div.ret","div_t"},
  {"func.read.arg.0","int,fildes"},
  {"func.toupper.args","1"},
  {"func.cos.arg.0","arithmetic,x"},
  {"func.humanize_number.arg.1","size_t,len"},
  {"func.humanize_number.arg.2","int64_t,number"},
  {"func.humanize_number.arg.3","const char *,suffix"},
  {"func.strcat.arg.0","char *,s1"},
  {"func.strxfrm.args","3"},
  {"func.scalbn.ret","floating_point"},
  {"func.strcat.arg.1","const char *,s2"},
  {"system","func"},
  {"func.wcsxfrm.arg.2","size_t,n"},
  {"func.abs.arg.0","int,j"},
  {"func.wcsxfrm.arg.1","const wchar_t *,s2"},
  {"wmemmove","func"},
  {"func.wcsxfrm.arg.0","wchar_t *,s1"},
  {"func.strtod.args","2"},
  {"func.tanl.ret","long double"},
  {"func.log1pl.ret","long double"},
  {"func.free.args","1"},
  {"func.modf.arg.1","floating_point *,iptr"},
  {"func.feclearexcept.arg.0","int,excepts"},
  {"func.modf.arg.0","floating_point,value"},
  {"func.wcsspn.arg.1","const wchar_t *,s2"},
  {"func.wcsspn.arg.0","const wchar_t *,s1"},
  {"func.freopen.ret","file*"},
  {"func.raise.arg.0","int,sig"},
  {"func.printf.ret","int"},
  {"func.freopen.arg.0","const char *,filename"},
  {"div","func"},
  {"func.fabsf.ret","float"},
  {"func.wcsncat.args","3"},
  {"func.freopen.arg.1","const char *,mode"},
  {"func.bindtextdomain.args","2"},
  {"func.freopen.arg.2","FILE *,stream"},
  {"func.pututxline.ret","void *"},
  {"quick_exit","func"},
  {"func.nexttowardf.ret","float"},
  {"user_from_uid","func"},
  {"func.maskrune.arg.1","unsigned long,f"},
  {"int16_t","type"},
  {"func.remainderl.ret","long double"},
  {"func.maskrune.arg.0","uint32_t,c"},
  {"func.usleep.args","1"},
  {"func.sprintf.arg.1","const char *,format"},
  {"func.sprintf.arg.0","char *,s"},
  {"func.sqrtl.args","1"},
  {"func.nl_langinfo.arg.0","nl_item,item"},
  {"func.sprintf.arg.2",",..."},
  {"expm1f","func"},
  {"fesetexceptflag","func"},
  {"objc_retain","func"},
  {"func.vfprintf.arg.2","va_list,ap"},
  {"func.towupper.ret","wint_t"},
  {"expm1l","func"},
  {"kill","func"},
  {"func.vfprintf.arg.0","FILE *,stream"},
  {"func.truncl.arg.0","long double,x"},
  {"func.fts_children_INODE64.args","2"},
  {"func.vfprintf.arg.1","const char *,format"},
  {"func.erf.arg.0","arithmetic,x"},
  {"func.remainderf.args","2"},
  {"func.openat.arg.0","int,fd"},
  {"func.openat.arg.1","const char *,path"},
  {"func.openat.arg.2","int,oflag"},
  {"strcpy_chk","func"},
  {"labs","func"},
  {"func.frexp.arg.0","arithmetic,value"},
  {"func.munmap.arg.1","size_t,length"},
  {"func.frexp.arg.1","int *,exp"},
  {"func.munmap.arg.0","void*,addr"},
  {"func.wcsrchr.args","2"},
  {"func.__error.ret","void"},
  {"func.tanh.ret","floating_point"},
  {"func.strstr.arg.1","const char *,s2"},
  {"func.fmaf.args","3"},
  {"func.strstr.arg.0","const char *,s1"},
  {"func.expm1.arg.0","arithmetic,x"},
  {"func.difftime.arg.1","time_t,time0"},
  {"func.difftime.arg.0","time_t,time1"},
  {"func.raise.args","1"},
  {"func.wscanf.args","1"},
  {"func.wprintf.ret","int"},
  {"func.mbsrtowcs.args","4"},
  {"func.system.args","1"},
  {"func.strtoull.args","3"},
  {"type.uint32_t.size","32"},
  {"freopen","func"},
  {"func.calloc.args","2"},
  {"strtoull","func"},
  {"func.tanl.args","1"},
  {"func.acosh.args","1"},
  {"func.hypotf.ret","float"},
  {"func.fabsf.arg.0","float,x"},
  {"fwide","func"},
  {"func.trunc.arg.0","arithmetic,x"},
  {"func.nan.ret","double"},
  {"func.lround.ret","long"},
  {"func.sin.args","1"},
  {"func.isgreaterequal.args","2"},
  {"func.logf.args","1"},
  {"func.copysignl.ret","long double"},
  {"func.fpclassify.args","1"},
  {"func.fesetround.ret","int"},
  {"func.symlink.arg.0","const char *,path1"},
  {"func.symlink.arg.1","const char *,path2"},
  {"func.tgoto.arg.2","int,row"},
  {"func.asctime.args","1"},
  {"func.maskrune.args","2"},
  {"func.tgoto.arg.0","const char *,cap"},
  {"func.iswalnum.arg.0","wint_t,wc"},
  {"func.isxdigit.arg.0","int,c"},
  {"func.tgoto.arg.1","int,col"},
  {"func.quick_exit.arg.0","int,status"},
  {"func.strrchr.ret","char *"},
  {"func.floorl.arg.0","long double,x"},
  {"fesetenv","func"},
  {"func.tanhf.args","1"},
  {"func.asin.args","1"},
  {"func.rewind.args","1"},
  {"func.llround.arg.0","arithmetic,x"},
  {"log1p","func"},
  {"func.scanf.ret","int"},
  {"func.isprint.ret","int"},
  {"func.fminl.arg.1","long double,y"},
  {"func.fminl.arg.0","long double,x"},
  {"scalbn","func"},
  {"maskrune","func"},
  {"func.__bzero.args","2"},
  {"func.ceilf.arg.0","float,x"},
  {"func.hypotl.arg.1","long double,y"},
  {"func.hypot.ret","floating_point"},
  {"func.mbsinit.arg.0","const mbstate_t *,ps"},
  {"func.hypotl.arg.0","long double,x"},
  {"func.objc_release.ret","void"},
  {"func.setlocale.ret","char *"},
  {"fpclassify","func"},
  {"func.exp2f.args","1"},
  {"func.asinl.arg.0","long double,x"},
  {"func.system.ret","int"},
  {"func.chmod.ret","int"},
  {"func.lroundl.args","1"},
  {"func.atoi.arg.0","const char *,str"},
  {"func.putwchar.arg.0","wchar_t,c"},
  {"ungetc","func"},
  {"func.fdim.ret","floating_point"},
  {"func.write.arg.0","int,fd"},
  {"func.ftell.args","1"},
  {"func.write.arg.1","const char *,ptr"},
  {"atoll","func"},
  {"func.ilogb.arg.0","arithmetic,x"},
  {"func.write.arg.2","size_t,nbytes"},
  {"func.atoi.ret","int"},
  {"strcasecmp","func"},
  {"func.atan2l.args","2"},
  {"func.mbtowc.ret","int"},
  {"func.cbrtl.arg.0","long double,x"},
  {"func.putc.args","2"},
  {"basename","func"},
  {"func.mktime.ret","time_t"},
  {"func.atanh.args","1"},
  {"func.asin.ret","floating_point"},
  {"func.tgammaf.arg.0","float,x"},
  {"func.isatty.ret","int"},
  {"func.wcspbrk.args","2"},
  {"wcsncpy","func"},
  {"ldiv","func"},
  {"func.pclose.args","1"},
  {"strlen","func"},
  {"fflush","func"},
  {"func.isgreater.ret","bool"},
  {"func.fputwc.args","2"},
  {"func.humanize_number.ret","int"},
  {"func.getchar.args","0"},
  {"func.memmove.args","3"},
  {"func.ungetc.args","2"},
  {"log10","func"},
  {"scalbln","func"},
  {"func.error.arg.1","int,errname"},
  {"func.error.arg.0","int,status"},
  {"fprintf","func"},
  {"func.error.arg.2","char *,format"},
  {"func.iswprint.args","1"},
  {"wctrans","func"},
  {"func.basename.arg.0","char *,path"},
  {"func.fmod.args","2"},
  {"func.fmaxl.arg.1","long double,y"},
  {"fdim","func"},
  {"isdigit","func"},
  {"func.fmaxl.arg.0","long double,x"},
  {"func.malloc.args","1"},
  {"func.nanl.args","1"},
  {"func.iswgraph.ret","int"},
  {"type.uid_t.size","64"},
  {"func.fabs.arg.0","arithmetic,x"},
  {"func.islower.ret","int"},
  {"func.vfscanf.ret","int"},
  {"func.fetestexcept.args","1"},
  {"func.vsscanf.arg.1","const char *,format"},
  {"func.vsscanf.arg.0","const char *,s"},
  {"fabsf","func"},
  {"func.vsscanf.arg.2","va_list,arg"},
  {"iswcntrl","func"},
  {"fabsl","func"},
  {"func.iswctype.ret","int"},
  {"func.textdomain.args","1"},
  {"func.imaxdiv.ret","imaxdiv_t"},
  {"func.memset.args","3"},
  {"malloc","func"},
  {"pututxline","func"},
  {"func.wcstoul.arg.0","const wchar_t *,nptr"},
  {"func.inet_aton.args","2"},
  {"func.wcstoul.arg.1","wchar_t* *,endptr"},
  {"func.wcstoul.arg.2","int,base"},
  {"func.wcscpy.args","2"},
  {"func.tan.args","1"},
  {"func.sleep.ret","int"},
  {"func.remquof.args","3"},
  {"func.strncasecmp.arg.0","const char *,s1"},
  {"func.strncasecmp.arg.1","const char *,s2"},
  {"wcscoll","func"},
  {"func.strncasecmp.arg.2","size_t,n"},
  {"func.iswspace.args","1"},
  {"func.nextafter.arg.0","arithmetic,x"},
  {"func.nextafter.arg.1","arithmetic,y"},
  {"func.objc_enumerationMutation.args","1"},
  {"func.isprint.args","1"},
  {"func.expf.ret","float"},
  {"func.vsnprintf.args","4"},
  {"func.wmemchr.ret","wchar_t*"},
  {"func.expm1f.arg.0","float,x"},
  {"func.getchar.ret","int"},
  {"setjmp","func"},
  {"func.wcsspn.args","2"},
  {"isfinite","func"},
  {"func.islessequal.arg.0","arithmetic,x"},
  {"func.islessequal.arg.1","arithmetic,y"},
  {"func.sinh.ret","floating_point"},
  {"func.vswscanf.ret","int"},
  {"func.signal.arg.1","void *,func"},
  {"func.fts_children_INODE64.arg.0","void*,ftsp"},
  {"func.asinhl.args","1"},
  {"func.signal.arg.0","int,sig"},
  {"func.fts_children_INODE64.arg.1","int,opotions"},
  {"func.cbrtf.args","1"},
  {"func.group_from_gid.ret","char *"},
  {"func.mkstemp.arg.0","char *,template"},
  {"func.ptrace.arg.0","__ptrace_request,request"},
  {"func.ptrace.arg.1","pid_t,pid"},
  {"pclose","func"},
  {"isnormal","func"},
  {"func.ptrace.arg.2","void*,addr"},
  {"func.ptrace.arg.3","void*,data"},
  {"func.round.args","1"},
  {"func.arc4random.args","0"},
  {"func.log2.arg.0","arithmetic,x"},
  {"func.fabs.ret","floating_point"},
  {"func.wprintf.arg.0","const wchar_t *,format"},
  {"func.sprintf_chk.ret","int"},
  {"func.lrintl.ret","long"},
  {"func.sprintf_chk.args","3"},
  {"func.__tolower.args","1"},
  {"func.strtod.ret","double"},
  {"inet_aton","func"},
  {"func.setenv.arg.2","int,overwrite"},
  {"func.wcsrtombs.ret","size_t"},
  {"func.fts_close_INODE64.args","1"},
  {"func.atan2f.args","2"},
  {"func.sprintf_chk.arg.2",",..."},
  {"func.setenv.arg.0","const char *,name"},
  {"func.ferror.args","1"},
  {"func.setenv.arg.1","const char *,value"},
  {"log2f","func"},
  {"func.sprintf_chk.arg.0","char *,s"},
  {"func.sprintf_chk.arg.1","const char *,format"},
  {"type.unsigned short.size","16"},
  {"func.__tolower.arg.0","int,c"},
  {"func.fgetc.ret","int"},
  {"func.wctomb.args","2"},
  {"func.erfcl.args","1"},
  {"hypotl","func"},
  {"bindtextdomain","func"},
  {"func.strcpy.args","2"},
  {"vswprintf","func"},
  {"log2l","func"},
  {"func.lldiv.args","2"},
  {"func.feupdateenv.arg.0","const,fenv_t*"},
  {"type.long","x"},
  {"func.erfl.args","1"},
  {"hypotf","func"},
  {"nearbyint","func"},
  {"atanhf","func"},
  {"func.sinl.ret","long double"},
  {"func.getuid.ret","uid_t"},
  {"func.log10l.args","1"},
  {"write","func"},
  {"func.strtoull.arg.2","int,base"},
  {"func.acoshf.ret","float"},
  {"func.strtoull.arg.0","const char *,str"},
  {"func.strtoull.arg.1","char * *,endptr"},
  {"func.roundl.arg.0","long double,x"},
  {"atanhl","func"},
  {"func.fopen.ret","file*"},
  {"func.setbuf.args","2"},
  {"func.expf.args","1"},
  {"func.wcsftime.ret","size_t"},
  {"func.iscntrl.ret","int"},
  {"type.char **","*z"},
  {"type.uid_t","i"},
  {"func.wcstoul.args","3"},
  {"func.isgreater.arg.1","arithmetic,y"},
  {"func.strrchr.args","2"},
  {"func.isgreater.arg.0","arithmetic,x"},
  {"func.connect.arg.2","size_t,addrlen"},
  {"func.modfl.args","2"},
  {"func.connect.arg.1","void *,addr"},
  {"func.connect.arg.0","int,socket"},
  {"func.nexttoward.args","2"},
  {"func.llroundf.ret","long long"},
  {"func.vscanf.ret","int"},
  {"func.tan.arg.0","arithmetic,x"},
  {"func.llabs.args","1"},
  {"setvbuf","func"},
  {"func.sinl.arg.0","long double,x"},
  {"func.mblen.arg.1","size_t,n"},
  {"func.fchmod.arg.0","int,fd"},
  {"func.mblen.arg.0","const char *,s"},
  {"func.fchmod.arg.1","int,mode"},
  {"func.nextafter.ret","floating_point"},
  {"func.getenv.args","1"},
  {"nl_langinfo_l","func"},
  {"func.tgammal.ret","long double"},
  {"tan","func"},
  {"func.strcasecmp.ret","int"},
  {"func.exp2l.ret","long double"},
  {"func.erff.arg.0","float,x"},
  {"func.strftime.ret","size_t"},
  {"func.llrintl.args","1"},
  {"func.getwc.ret","wint_t"},
  {"func.strerror.arg.0","int,errnum"},
  {"func.isunordered.ret","bool"},
  {"func.scalbnl.args","2"},
  {"func.mktemp.ret","char *"},
  {"func.strcoll.ret","int"},
  {"func.malloc.arg.0","size_t,size"},
  {"signal","func"},
  {"func.wcscpy.arg.0","wchar_t *,s1"},
  {"func.wcscpy.arg.1","const wchar_t *,s2"},
  {"objc_retainAutoreleasedReturnValue","func"},
  {"func.atan.arg.0","arithmetic,x"},
  {"func.fmaf.ret","float"},
  {"func.log.args","1"},
  {"func.objc_enumerationMutation.ret","void"},
  {"func.floorf.ret","float"},
  {"func.warnc.args","2"},
  {"func.inet_ntoa.ret","char *"},
  {"func.sleep.args","1"},
  {"group_from_gid","func"},
  {"func.mmap.arg.0","void*,addr"},
  {"warn","func"},
  {"func.mmap.arg.1","size_t,length"},
  {"func.mmap.arg.2","int,prot"},
  {"func.mmap.arg.3","int,flags"},
  {"func.mmap.arg.4","int,fd"},
  {"func.warnx.ret","void"},
  {"func.mmap.arg.5","size_t,offset"},
  {"func.mbsrtowcs.ret","size_t"},
  {"fileno","func"},
  {"func.atanhf.args","1"},
  {"func.fts_set_INODE64.arg.1","void*,f"},
  {"func.fts_set_INODE64.arg.0","void*,ftsp"},
  {"func.longjmp.arg.0","jmp_buf,env"},
  {"func.isnan.arg.0","arithmetic,x"},
  {"func.longjmp.arg.1","int,val"},
  {"fts_close_INODE64","func"},
  {"iswspace","func"},
  {"func.fts_set_INODE64.arg.2","int,options"},
  {"func.lrintl.arg.0","long double,x"},
  {"func.remainderl.arg.0","long double,x"},
  {"func.nl_langinfo_l.arg.1","locale_t locale"},
  {"func.remainderl.arg.1","long double,y"},
  {"func.feclearexcept.ret","int"},
  {"func.nl_langinfo_l.arg.0","nl_item,item"},
  {"func.setlocale.args","2"},
  {"func.iswcntrl.arg.0","wint_t,wc"},
  {"expl","func"},
  {"func.wcstoumax.arg.0","const,wchar_t*"},
  {"func.wcstoumax.arg.1","wchar_t* *,endptr"},
  {"func.wcstoumax.arg.2","int,base"},
  {"func.btowc.ret","wint_t"},
  {"func.ldexp.ret","floating_point"},
  {"func.roundl.ret","long double"},
  {"expf","func"},
  {"wcrtomb","func"},
  {"func.srand.ret","void"},
  {"type.unsigned int.size","32"},
  {"sinhl","func"},
  {"func.lgamma.ret","floating_point"},
  {"func.vwscanf.args","2"},
  {"func.erfc.ret","floating_point"},
  {"func.lgamma.arg.0","arithmetic,x"},
  {"sinhf","func"},
  {"cos","func"},
  {"func.pow.args","2"},
  {"func.tgammal.args","1"},
  {"type.uint32_t","d"},
  {"strtoumax","func"},
  {"func.putwc.args","2"},
  {"func.nexttoward.ret","floating_point"},
  {"func.__maskrune.ret","int"},
  {"func.nextafterl.ret","long double"},
  {"func.isxdigit.args","1"},
  {"func.fputs.ret","int"},
  {"func.mmap.ret","void*"},
  {"asctime","func"},
  {"fseek","func"},
  {"ispunct","func"},
  {"func.fflush.arg.0","FILE *,stream"},
  {"func.vsprintf.args","3"},
  {"func.strndup.args","2"},
  {"func.memcpy.args","3"},
  {"func.strcat.ret","char *"},
  {"func.ldexpl.args","2"},
  {"uint32_t","type"},
  {"vwscanf","func"},
  {"strlcpy","func"},
  {"func.pututxline.arg.0","void *,utx"},
  {"func.lrintf.args","1"},
  {"func.reallocf.args","2"},
  {"func.cosh.args","1"},
  {"func.fmodl.arg.1","long double,y"},
  {"func.fmodl.arg.0","long double,x"},
  {"func.swprintf.args","3"},
  {"func.fscanf.args","3"},
  {"func.strmode.args","2"},
  {"func.cosh.ret","floating_point"},
  {"func.kill.args","2"},
  {"func.fwrite.ret","size_t"},
  {"func.mblen.ret","int"},
  {"iswlower","func"},
  {"func.vsnprintf.arg.1","size_t,size"},
  {"func.vsnprintf.arg.0","char *,s"},
  {"iscntrl","func"},
  {"func.vsnprintf.arg.3","va_list,arg"},
  {"func.fclose.arg.0","FILE *,stream"},
  {"func.ceill.args","1"},
  {"func.vsnprintf.arg.2","const char *,format"},
  {"func.iscntrl.arg.0","int,c"},
  {"func.powl.arg.1","long double,y"},
  {"func.powl.arg.0","long double,x"},
  {"vscanf","func"},
  {"exp2","func"},
  {"func.iswspace.arg.0","wint_t,wc"},
  {"func.setenv.ret","int"},
  {"initstate","func"},
  {"strcpy","func"},
  {"func.copysignl.arg.1","long double,y"},
  {"func.copysignl.arg.0","long double,x"},
  {"func.lgammal.args","1"},
  {"func.iswctype.arg.1","wctype_t,desc"},
  {"func.frexpl.args","2"},
  {"func.iswctype.arg.0","wint_t,wc"},
  {"func.scalblnf.ret","float"},
  {"atol","func"},
  {"func.fabsl.arg.0","long double,x"},
  {"func.open.args","2"},
  {"func.nl_langinfo_l.ret","char *"},
  {"ceilf","func"},
  {"func.truncl.ret","long double"},
  {"atoi","func"},
  {"func.towctrans.arg.0","wint_t,wc"},
  {"func.strcmp.args","2"},
  {"func.towctrans.arg.1","wctrans_t,desc"},
  {"atof","func"},
  {"func.nextafterf.arg.0","float,x"},
  {"func.rewind.arg.0","FILE *,stream"},
  {"func.nextafterf.arg.1","float,y"},
  {"ceill","func"},
  {"func.llrint.args","1"},
  {"func.send.ret","ssize_t"},
  {"func.islessequal.ret","bool"},
  {"func.cosl.ret","long double"},
  {"func.llrint.ret","long long"},
  {"isalpha","func"},
  {"func.socket.arg.0","int,domain"},
  {"longjmp","func"},
  {"func.socket.arg.1","int,type"},
  {"func.socket.arg.2","int,protocol"},
  {"func.openat.args","3"},
  {"getwchar","func"},
  {"func.recv.arg.3","int,flags"},
  {"func.recv.arg.2","size_t,length"},
  {"func.log2.args","1"},
  {"func.recv.arg.1","void *,buffer"},
  {"func.remquo.arg.0","arithmetic,x"},
  {"func.recv.arg.0","int,socket"},
  {"func.fminf.arg.1","float,y"},
  {"func.remquo.arg.1","arithmetic,y"},
  {"func.fminf.arg.0","float,x"},
  {"func.remquo.arg.2","int *,pquo"},
  {"func.open.arg.1","int,oflag"},
  {"func.open.arg.0","const char *,path"},
  {"logbf","func"},
  {"func.wcsncpy.arg.2","size_t,n"},
  {"func.wcsncpy.arg.0","wchar_t *,s1"},
  {"func.wcsncpy.arg.1","const wchar_t *,s2"},
  {"main","func"},
  {"logbl","func"},
  {"func.coshf.arg.0","float,x"},
  {"func.fmal.arg.2","long double,z"},
  {"func.fmal.arg.1","long double,y"},
  {"func.fmal.arg.0","long double,x"},
  {"func.isnan.ret","bool"},
  {"func.isnormal.ret","bool"},
  {"func.tgoto.ret","char *"},
  {"wcsrtombs","func"},
  {"func.strtoul.ret","long"},
  {"func.sinh.args","1"},
  {"func.asinh.arg.0","arithmetic,x"},
  {"func.iswalpha.ret","int"},
  {"objc_msgSend","func"},
  {"func.printf.args","1"},
  {"func.acosh.ret","floating_point"},
  {"mktime","func"},
  {"__tolower","func"},
  {"func.rand.args","0"},
  {"func.bzero.args","2"},
  {"func.clock.args","0"},
  {"wcsftime","func"},
  {"func.nearbyint.arg.0","arithmetic,x"},
  {"func.fwide.arg.0","FILE *,stream"},
  {"func.vfscanf.args","3"},
  {"func.fdimf.args","2"},
  {"func.fwide.arg.1","int,mode"},
  {"func.lgammal.ret","long double"},
  {"func.compat_mode.args","2"},
  {"func.asinf.ret","float"},
  {"func.wcstoimax.args","3"},
  {"func.logl.ret","long double"},
  {"signbit","func"},
  {"btowc","func"},
  {"func.strcoll.arg.0","const char *,s1"},
  {"func.getc.args","1"},
  {"func.strcoll.arg.1","const char *,s2"},
  {"func.llrintl.ret","long long"},
  {"func.fputwc.ret","wint_t"},
  {"func.div.arg.0","int,numer"},
  {"func.div.arg.1","int,denom"},
  {"lrintl","func"},
  {"func.memset.arg.2","size_t,n"},
  {"func.sinhl.arg.0","long double,x"},
  {"func.memset.arg.0","void *,s"},
  {"func.usleep.arg.0","int,s"},
  {"func.signbit.args","1"},
  {"func.mktemp.arg.0","char *,template"},
  {"func.memset.arg.1","int,c"},
  {"func.snprintf.ret","int"},
  {"func.strncpy.arg.0","char *,dest"},
  {"func.setvbuf.ret","int"},
  {"char *","type"},
  {"wcstoimax","func"},
  {"func.fegetround.ret","int"},
  {"func.strncpy.arg.1","const char *,src"},
  {"lrintf","func"},
  {"func.strtoll.ret","long long"},
  {"func.strncpy.arg.2","size_t, n"},
  {"setstate","func"},
  {"func.getc.arg.0","FILE *,stream"},
  {"func.asinhl.ret","long double"},
  {"func.wctob.args","1"},
  {"func.atan.ret","floating_point"},
  {"isless","func"},
  {"func.bind.arg.0","int,socket"},
  {"func.nexttoward.arg.1","long double,y"},
  {"func.bind.arg.1","struct sockaddr*,address"},
  {"func.nexttoward.arg.0","arithmetic,x"},
  {"func.bind.arg.2","socklen_t,address_len"},
  {"wcscat","func"},
  {"func.wcsncmp.ret","int"},
  {"func.acosl.ret","long double"},
  {"sscanf","func"},
  {"func.kill.arg.1","int,sig"},
  {"random","func"},
  {"func.kill.arg.0","pid_t,pid"},
  {"func.getopt.ret","int"},
  {"vprintf","func"},
  {"func.iswpunct.ret","int"},
  {"func.logbf.ret","float"},
  {"send","func"},
  {"uint8_t","type"},
  {"func.frexp.ret","floating_point"},
  {"func.__toupper.args","1"},
  {"func.gmtime.arg.0","const time_t *,timer"},
  {"func.setenv.args","3"},
  {"strtoul","func"},
  {"func.wcschr.args","2"},
  {"mbrlen","func"},
  {"func.mktemp.args","1"},
  {"func.isupper.ret","int"},
  {"func.nearbyintf.args","1"},
  {"func.arc4random.ret","uint32_t"},
  {"func.islower.arg.0","int,c"},
  {"func.fopen.args","2"},
  {"func.isupper.args","1"},
  {"func.ceil.ret","floating_point"},
  {"func.error.ret","void"},
  {"fputs","func"},
  {"func.log10l.arg.0","long double,x"},
  {"func.sqrt.args","1"},
  {"func.rewind.ret","void"},
  {"func.bsearch.args","5"},
  {"func.ilogbf.ret","int"},
  {"func.fputws.arg.0","const wchar_t *,s"},
  {"func.fputws.arg.1","FILE *,stream"},
  {"feclearexcept","func"},
  {"func.strlen.ret","size_t"},
  {"func.wcrtomb.args","3"},
  {"func.strtold.args","2"},
  {"func.atoll.args","1"},
  {"func.wcstok.args","3"},
  {"func.fseek.ret","int"},
  {"func.logl.args","1"},
  {"func.strtol.ret","long"},
  {"func.strchr.args","2"},
  {"double","type"},
  {"fputc","func"},
  {"acos","func"},
  {"func.fgetc.args","1"},
  {"wcsspn","func"},
  {"wcspbrk","func"},
  {"func.fma.ret","floating_point"},
  {"lstat","func"},
  {"func.tanhl.args","1"},
  {"func.setbuf.ret","void"},
  {"setbuf","func"},
  {"func.at_quick_exit.ret","int"},
  {"func.ferror.ret","int"},
  {"func.strpbrk.ret","char *"},
  {"func.fminl.ret","long double"},
  {"strtoimax","func"},
  {"func.isalpha.arg.0","int,c"},
  {"func.hypotf.arg.1","float,y"},
  {"func.lroundf.ret","long"},
  {"func.hypotf.arg.0","float,x"},
  {"unsigned char","type"},
  {"func.fsetpos.args","2"},
  {"func.objc_msgSendSuper2.ret","void *"},
  {"func.scanf.arg.0","const char *,format"},
  {"lrint","func"},
  {"func.__bzero.ret","void"},
  {"func.scalblnl.arg.0","long double,x"},
  {"func.sqrtf.arg.0","float,x"},
  {"func.wcstoull.args","3"},
  {"func.scalblnl.arg.1","long,ex"},
  {"munmap","func"},
  {"strerror","func"},
  {"func.atoll.ret","long long"},
  {"sprintf","func"},
  {"wmemset","func"},
  {"func.strcasecmp.args","2"},
  {"func.wcscmp.args","2"},
  {"wmemcpy","func"},
  {"func.sscanf.arg.2"," ,..."},
  {"func.ilogbf.arg.0","float,x"},
  {"func.sscanf.arg.1","const char *,format"},
  {"func.fgetwc.ret","wint_t"},
  {"func.sscanf.arg.0","const char *,s"},
  {"type.int32_t.size","32"},
  {"rint","func"},
  {"func.strlcpy.args","3"},
  {"func.mkstemp.args","1"},
  {"__maskrune","func"},
  {"func.coshl.ret","long double"},
  {"isxdigit","func"},
  {"func.strtok.ret","char *"},
  {"func.wcstombs.arg.1","const wchar_t *,pwcs"},
  {"func.copysignf.arg.1","float,y"},
  {"func.wcstombs.arg.0","char *,s"},
  {"func.inet_aton.ret","int"},
  {"func.copysignf.arg.0","float,x"},
  {"func.expl.args","1"},
  {"func.wcstombs.arg.2","size_t,n"},
  {"func.getuid.args","0"},
  {"func.wcstok.ret","wchar_t*"},
  {"int32_t","type"},
  {"ungetwc","func"},
  {"func.towupper.args","1"},
  {"isblank","func"},
  {"func.trunc.ret","floating_point"},
  {"func.iswpunct.args","1"},
  {"func.wmemchr.arg.2","size_t,n"},
  {"func.atol.args","1"},
  {"func.wmemchr.arg.0","wchar_t *,s"},
  {"func.wmemchr.arg.1","wchar_t,c"},
  {"func.sprintf.ret","int"},
  {"func.tanhl.ret","long double"},
  {"func.iswlower.ret","int"},
  {"wcsrchr","func"},
  {"func.warn.arg.0","const char *,format"},
  {"func.fmod.ret","floating_point"},
  {"ilogbl","func"},
  {"clock","func"},
  {"func.isinf.ret","bool"},
  {"ilogbf","func"},
  {"func.asinh.args","1"},
  {"func.sinh.arg.0","arithmetic,x"},
  {"func.wcstold.arg.1","wchar_t* *,endptr"},
  {"func.wcstold.arg.0","const wchar_t *,nptr"},
  {"func.connect.args","3"},
  {"func.vsprintf.arg.2","va_list,arg"},
  {"func.vsprintf.arg.1","const char *,format"},
  {"func.tanhf.arg.0","float,x"},
  {"func.vsprintf.arg.0","char *,s"},
  {"func.rint.ret","floating_point"},
  {"func.remquol.args","3"},
  {"ilogb","func"},
  {"func.gmtime.ret","tm*"},
  {"memmove","func"},
  {"func.strcat.args","2"},
  {"nanf","func"},
  {"nan","func"},
  {"vfprintf","func"},
  {"func.strncat.args","3"},
  {"func.ctime.arg.0","const time_t *,timer"},
  {"srandom","func"},
  {"nanl","func"},
  {"wcsstr","func"},
  {"func.nearbyintl.arg.0","long double,x"},
  {"wcstoull","func"},
  {"func.strpbrk.arg.1","const char *,s2"},
  {"func.strpbrk.arg.0","const char *,s1"},
  {"func.wcsxfrm.ret","size_t"},
  {"func.snprintf.arg.3",",..."},
  {"func.snprintf.arg.2","const char *,format"},
  {"func.snprintf.arg.1","size_t,size"},
  {"func.fflush.ret","int"},
  {"func.snprintf.arg.0","char *,s"},
  {"func.localeconv.ret","lconv*"},
  {"iswprint","func"},
  {"func.fdim.args","2"},
  {"func.fts_open_INODE64.ret","void *"},
  {"func.symlink.ret","int"},
  {"tgamma","func"},
  {"func.memcmp.arg.2","size_t,n"},
  {"func.memcmp.arg.0","const void *,s1"},
  {"func.strndup.ret","char *"},
  {"fmod","func"},
  {"func.memcmp.arg.1","const void *,s2"},
  {"fsetpos","func"},
  {"nextafterf","func"},
  {"func.isspace.arg.0","int,c"},
  {"func.roundf.args","1"},
  {"func.write.ret","ssize_t"},
  {"unsigned short","type"},
  {"func.wprintf.args","1"},
  {"func.lrint.args","1"},
  {"func.exp2f.arg.0","float,x"},
  {"nextafterl","func"},
  {"func.iswblank.ret","int"},
  {"wcschr","func"},
  {"func.mbrlen.arg.2","mbstate_t *,ps"},
  {"func.fstat.args","2"},
  {"func.mbrlen.arg.1","size_t,n"},
  {"fts_children_INODE64","func"},
  {"func.mbrlen.arg.0","const char *,s"},
  {"func.llroundf.arg.0","float,x"},
  {"func.lroundf.arg.0","float,x"},
  {"func.ftell.ret","long"},
  {"func.isdigit.arg.0","int,c"},
  {"func.fgetpos.arg.1","fpos_t*,pos"},
  {"func.iswprint.arg.0","wint_t,wc"},
  {"func.fgetpos.arg.0","FILE *,stream"},
  {"gmtime","func"},
  {"arc4random","func"},
  {"func.fgets.arg.2","FILE *,stream"},
  {"func.mktime.args","1"},
  {"func.fgets.arg.0","char *,s"},
  {"func.fgets.arg.1","int,size"},
  {"strncasecmp","func"},
  {"func.sqrtl.ret","long double"},
  {"func.log10.args","1"},
  {"func.asinf.arg.0","float,x"},
  {"func.llround.ret","long long"},
  {"func.swscanf.args","2"},
  {"func.strftime.arg.3","const tm *,timeptr"},
  {"func.fmaxf.ret","float"},
  {"func.strftime.arg.2","const char *,format"},
  {"func.strftime.arg.1","size_t,maxsize"},
  {"objc_storeStrong","func"},
  {"func.remquol.arg.0","long double,x"},
  {"func.strftime.arg.0","char *,s"},
  {"getwc","func"},
  {"func.objc_storeStrong.args","2"},
  {"func.remquol.arg.1","long double,y"},
  {"func.remquol.arg.2","int *,pquo"},
  {"func.log2f.args","1"},
  {"func.popen.arg.1","const char *,mode"},
  {"func.wcschr.arg.1","wchar_t,c"},
  {"func.popen.arg.0","const char *,filename"},
  {"func.isalnum.arg.0","int,c"},
  {"func.wcschr.arg.0","wchar_t *,s"},
  {"func.fputc.ret","int"},
  {"setlocale","func"},
  {"wctob","func"},
  {"nl_langinfo","func"},
  {"func.logb.args","1"},
  {"func.ispunct.args","1"},
  {"func.rint.arg.0","arithmetic,x"},
  {"func.putchar.arg.0","int,c"},
  {"fma","func"},
  {"func.wmemcmp.ret","int"},
  {"func.atanh.arg.0","arithmetic,x"},
  {"func.remainderl.args","2"},
  {"fmin","func"},
  {"printf","func"},
  {"func.memset.ret","void *"},
  {"func.getopt.arg.0","int,argc"},
  {"func.getopt.arg.1","const char * *,argv"},
  {"func.lrintl.args","1"},
  {"rename","func"},
  {"func.getopt.arg.2","const char *,optstring"},
  {"func.wcsrtombs.arg.3","mbstate_t *,ps"},
  {"func.wcsrtombs.arg.2","size_t,len"},
  {"func.wcsrtombs.arg.1","const wchar_t* *,src"},
  {"coshf","func"},
  {"func.symlink.args","2"},
  {"func.wcsrtombs.arg.0","char *,dst"},
  {"func.tgamma.arg.0","arithmetic,x"},
  {"fstat","func"},
  {"func.swprintf.ret","int"},
  {"func.asinhf.arg.0","float,x"},
  {"func.wmemmove.arg.2","size_t,n"},
  {"coshl","func"},
  {"strspn","func"},
  {"scalblnl","func"},
  {"func.imaxabs.args","1"},
  {"func.wmemmove.arg.0","wchar_t *,s1"},
  {"func.wcstoll.ret","long long"},
  {"func.wmemmove.arg.1","const wchar_t *,s2"},
  {"func.ceilf.args","1"},
  {"func.erff.ret","float"},
  {"func.isalnum.ret","int"},
  {"func.fegetenv.arg.0","fenv_t *,envp"},
  {"func.powf.ret","float"},
  {"scalblnf","func"},
  {"func.logf.arg.0","float,x"},
  {"func.tanf.ret","float"},
  {"func.time.arg.0","time_t *,timer"},
  {"func.strtoul.args","3"},
  {"func.frexpf.ret","float"},
  {"func.powf.arg.1","float,y"},
  {"fgetwc","func"},
  {"func.powf.arg.0","float,x"},
  {"type.uint64_t","q"},
  {"func.user_from_uid.ret","char *"},
  {"func.atanl.args","1"},
  {"func.log1pl.arg.0","long double,x"},
  {"atanl","func"},
  {"func.*aligned_alloc.ret","void"},
  {"func.wcscmp.ret","int"},
  {"atanh","func"},
  {"setenv","func"},
  {"func.remainderf.ret","float"},
  {"atanf","func"},
  {"fgetws","func"},
  {"func.atan2.args","2"},
  {"rand","func"},
  {"func.wcsrchr.arg.1","wchar_t,c"},
  {"func.objc_release.args","1"},
  {"func.wcsrchr.arg.0","wchar_t *,s"},
  {"func.wcsncat.ret","wchar_t*"},
  {"func.wmemcpy.args","3"},
  {"func.fts_set_INODE64.ret","int"},
  {"func.remove.args","1"},
  {"towctrans","func"},
  {"func.strncat.ret","char *"},
  {"puts","func"},
  {"func.vsscanf.args","3"},
  {"type.short","w"},
  {"fgets","func"},
  {"getopt","func"},
  {"func.exp2l.args","1"},
  {"func.strlen.arg.0","const char *,s"},
  {"func.recv.ret","ssize_t"},
  {"func.pow.arg.1","arithmetic,y"},
  {"func.send.arg.1","void *,buffer"},
  {"func.pow.arg.0","arithmetic,x"},
  {"func.fesetenv.ret","int"},
  {"func.send.arg.0","int,socket"},
  {"func.send.arg.3","int,flags"},
  {"putc","func"},
  {"func.send.arg.2","size_t,length"},
  {"func.lround.args","1"},
  {"func.perror.args","1"},
  {"remainder","func"},
  {"func.asctime.arg.0","const tm *,timeptr"},
  {"islessequal","func"},
  {"func.objc_msgSend.ret","void *"},
  {"func.vfprintf.args","3"},
  {"fgetc","func"},
  {"func.wcsncmp.args","3"},
  {"func.expm1.ret","floating_point"},
  {"fwscanf","func"},
  {"func.isatty.args","1"},
  {"func.isgraph.ret","int"},
  {"func.wmemset.arg.1","wchar_t,c"},
  {"func.wcscat.args","2"},
  {"func.expm1.args","1"},
  {"func.wmemset.arg.0","wchar_t *,s"},
  {"func.fread.args","4"},
  {"func.unlink.ret","int"},
  {"func.wmemset.arg.2","size_t,n"},
  {"atan2","func"},
  {"wcscmp","func"},
  {"func.strtold.ret","long double"},
  {"func.ptrace.args","4"},
  {"func.fdimf.arg.1","float,y"},
  {"func.fdimf.arg.0","float,x"},
  {"func.modff.arg.1","float *,iptr"},
  {"func.coshl.arg.0","long double,x"},
  {"func.modff.arg.0","float,value"},
  {"func.erfc.arg.0","arithmetic,x"},
  {"func.imaxabs.ret","intmax_t"},
  {"open","func"},
  {"func.sqrt.ret","floating_point"},
  {"strcat","func"},
  {"func.wcsstr.ret","wchar_t*"},
  {"func.umask.ret","int"},
  {"strstr","func"},
  {"func.random.args","0"},
  {"func.fputws.ret","int"},
  {"func.vswprintf.arg.0","wchar_t *,s"},
  {"func.vswprintf.arg.1","size_t,n"},
  {"fegetenv","func"},
  {"func.vswprintf.arg.2","const wchar_t *,format"},
  {"func.vswprintf.arg.3","va_list,arg"},
  {"towupper","func"},
  {"strmode","func"},
  {"func.islessgreater.arg.0","arithmetic,x"},
  {"func.nanf.arg.0","const char *,str"},
  {"func.islessgreater.arg.1","arithmetic,y"},
  {"func.vscanf.arg.0","const char *,format"},
  {"func.vscanf.arg.1","va_list,ap"},
  {"func.lgammal.arg.0","long double,x"},
  {"func.*aligned_alloc.arg.1","size_t,size"},
  {"func.*aligned_alloc.arg.0","size_t,alignment"},
  {"func.ldexpf.ret","float"},
  {"func.lgamma.args","1"},
  {"getchar","func"},
  {"unlink","func"},
  {"func.isgreaterequal.ret","bool"},
  {"func.atan2f.arg.1","float,x"},
  {"func.mbrlen.ret","size_t"},
  {"func.cos.ret","floating_point"},
  {"func.feholdexcept.ret","int"},
  {"func.atan2f.arg.0","float,y"},
  {"func.fabsl.ret","long double"},
  {"func.fgetwc.args","1"},
  {"func.sinhf.arg.0","float,x"},
  {"func.pututxline.args","1"},
  {"func.ungetc.ret","int"},
  {"func.ioctl.args","2"},
  {"feof","func"},
  {"func.objc_retain.ret","void"},
  {"func.iswctype.args","2"},
  {"wctomb","func"},
  {"mbrtowc","func"},
  {"isspace","func"},
  {"copysignf","func"},
  {"func.iswspace.ret","int"},
  {"func.modf.args","2"},
  {"func.acoshf.args","1"},
  {"sin","func"},
  {"func.fileno.ret","int"},
  {"func.asinf.args","1"},
  {"func.setlocale.arg.1","const char *,locale"},
  {"func.setlocale.arg.0","int,category"},
  {"func.vsnprintf.ret","int"},
  {"copysignl","func"},
  {"wcscpy","func"},
  {"func.memchr.arg.1","int,c"},
  {"func.memchr.arg.0","void *,s"},
  {"func.memchr.arg.2","size_t,n"},
  {"free","func"},
  {"func.fegetexceptflag.arg.1","int,excepts"},
  {"func.fegetexceptflag.arg.0","fexcept_t *,flagp"},
  {"func.strncasecmp.ret","int"},
  {"func.tolower.arg.0","int,c"},
  {"fchmod","func"},
  {"lroundl","func"},
  {"func.difftime.ret","double"},
  {"func.fprintf.arg.0","FILE *,stream"},
  {"func.__toupper.ret","int"},
  {"func.group_from_uid.include","grp.h"},
  {"func.fprintf.arg.1","const char *,format"},
  {"func.fmaxf.arg.1","float,y"},
  {"func.fprintf.arg.2"," ,..."},
  {"func.lgammaf.args","1"},
  {"func.fmaxf.arg.0","float,x"},
  {"lroundf","func"},
  {"char **","type"},
  {"putwc","func"},
  {"func.wcspbrk.arg.1","const wchar_t *,s2"},
  {"func.cbrtl.args","1"},
  {"func.wcspbrk.arg.0","wchar_t *,s1"},
  {"func.isgreater.args","2"},
  {"func.memcmp.ret","int"},
  {"func.floorf.args","1"},
  {"func.munmap.ret","int"},
  {"func.llroundf.args","1"},
  {"func.iswalpha.args","1"},
  {"func.rintf.arg.0","float,x"},
  {"func.tmpfile.args","0"},
  {"func.strspn.ret","size_t"},
  {"func.frexpf.args","2"},
  {"func.fgetpos.args","2"},
  {"func.wctomb.ret","int"},
  {"uint64_t","type"},
  {"func.wctomb.arg.1","wchar_t,wchar"},
  {"func.wctomb.arg.0","char *,s"},
  {"func.lstat.arg.1","void *,buf"},
  {"tmpnam","func"},
  {"func.lstat.arg.0","const char *,path"},
  {"func.fmodf.ret","float"},
  {"func.raise.ret","int"},
  {"func.objc_retainAutoreleasedReturnValue.args","1"},
  {"func.wcstod.ret","double"},
  {"func.wcstoul.ret","long"},
  {"func.putwc.ret","wint_t"},
  {"fmal","func"},
  {"func.towlower.args","1"},
  {"erf","func"},
  {"func.fsetpos.ret","int"},
  {"func.tolower.args","1"},
  {"func.memmove.arg.1","const void *,s2"},
  {"fmaf","func"},
  {"func.memmove.arg.0","void *,s1"},
  {"func.memmove.arg.2","size_t,n"},
  {"func.llround.args","1"},
  {"func.main.args","3"},
  {"func.fgetws.ret","wchar_t*"},
  {"func.wmemcmp.args","3"},
  {"func.scalblnf.arg.0","float,x"},
  {"func.scalblnf.arg.1","long,ex"},
  {"type.int32_t","d"},
  {"func.towctrans.args","2"},
  {"func.__maskrune.arg.1","long,f"},
  {"fmax","func"},
  {"func.__maskrune.arg.0","long,c"},
  {"func.tanh.arg.0","arithmetic,x"},
  {"func.nexttowardf.arg.1","long double,y"},
  {"func.log1p.args","1"},
  {"func.nexttowardf.arg.0","float,x"},
  {"func.cosf.arg.0","float,x"},
  {"func.fchmod.ret","int"},
  {"func.strncasecmp.args","3"},
  {"fts_set_INODE64","func"},
  {"func.nearbyintf.ret","float"},
  {"func.ptrace.ret","long"},
  {"func.fdiml.args","2"},
  {"func.connect.ret","ssize_t"},
  {"func.gets.ret","char *"},
  {"func.setjmp.args","1"},
  {"func.wcsftime.arg.1","size_t,maxsize"},
  {"func.wcsftime.arg.0","wchar_t *,s"},
  {"func.wcsftime.arg.3","const tm *,timeptr"},
  {"func.log2f.ret","float"},
  {"func.wcsftime.arg.2","const wchar_t *,format"},
  {"func.bzero.arg.1","size_t,n"},
  {"func.bzero.arg.0","void *,s"},
  {"func.frexpl.arg.0","long double,value"},
  {"wcsxfrm","func"},
  {"func.frexpl.arg.1","int *,exp"},
  {"isnan","func"},
  {"func.wcstold.args","2"},
  {"func.wcsxfrm.args","3"},
  {"func.atan2.ret","floating_point"},
  {"func.atan.args","1"},
  {"func.getenv.ret","char *"},
  {"func.wcstok.arg.2","wchar_t* *,ptr"},
  {"func.cbrtf.ret","float"},
  {"func.atanhf.arg.0","float,x"},
  {"func.wcstok.arg.0","wchar_t *,s1"},
  {"func.wcstok.arg.1","const wchar_t *,s2"},
  {"func.wcslen.ret","size_t"},
  {"func.putc.arg.1","FILE *,stream"},
  {"func.realloc.ret","void *"},
  {"func.putc.arg.0","int,c"},
  {"mkstemp","func"},
  {"func.strtod.arg.1","char * *,endptr"},
  {"func.strstr.args","2"},
  {"func.strtod.arg.0","const char *,str"},
  {"func.setstate.ret","const char *"},
  {"srand","func"},
  {"func.isgreaterequal.arg.1","arithmetic,y"},
  {"func.scalblnl.args","2"},
  {"textdomain","func"},
  {"func.isgreaterequal.arg.0","arithmetic,x"},
  {"type.int8_t","b"},
  {"usleep","func"},
  {"func.fmodf.arg.1","float,y"},
  {"func.longjmp.ret","void"},
  {"func.snprintf.args","4"},
  {"func.fmodf.arg.0","float,x"},
  {"type.int8_t.size","8"},
  {"func.tanhl.arg.0","long double,x"},
  {"func.labs.arg.0","long,j"},
  {"func.coshf.args","1"},
  {"func.fma.args","3"},
  {"strchr","func"},
  {"putwchar","func"},
  {"isalnum","func"},
  {"func.nl_langinfo.args","1"},
  {"func.srandom.ret","uint32_t"},
  {"func.wcscpy.ret","wchar_t*"},
  {"umask","func"},
  {"func.atan2.arg.1","arithmetic,x"},
  {"func.div.args","2"},
  {"func.fts_read_INODE64.args","1"},
  {"func.atan2.arg.0","arithmetic,y"},
  {"func.snprintf_chk.args","4"},
  {"func.atanhl.args","1"},
  {"func.asctime.ret","char *"},
  {"func.strtoll.args","3"},
  {"isgreater","func"},
  {"func.qsort.arg.2","size_t,size"},
  {"func.qsort.arg.3","int(*compar)(const void *,const void *)"},
  {"func.isblank.arg.0","int,c"},
  {"func.qsort.arg.0","void *,base"},
  {"func.qsort.arg.1","size_t,nmemb"},
  {"func.vwprintf.arg.1","va_list,arg"},
  {"func.vwprintf.arg.0","const wchar_t *,format"},
  {"func.random.ret","uint32_t"},
  {"func.sleep.arg.0","int,s"},
  {"func.ldexp.args","2"},
  {"func.strtof.args","2"},
  {"func.fputs.arg.1","FILE *,stream"},
  {"func.fputs.arg.0","const char *,s"},
  {"wcslen","func"},
  {"strncpy","func"},
  {"close","func"},
  {"func.wcsrtombs.args","4"},
  {"func.towlower.arg.0","wint_t,wc"},
  {"func.atanf.args","1"},
  {"func.exp2f.ret","float"},
  {"func.vfwprintf.ret","int"},
  {"func.expm1f.ret","float"},
  {"func.geteuid.ret","uid_t"},
  {"func.clearerr.arg.0","FILE *,stream"},
  {"func.wcstombs.ret","size_t"},
  {"func.remquof.ret","float"},
  {"func.abs.args","1"},
  {"func.pow.ret","floating_point"},
  {"func.tgammal.arg.0","long double,x"},
  {"func.atol.ret","long"},
  {"func.strtok.args","2"},
  {"func.exp2.arg.0","arithmetic,x"},
  {"func.nan.args","1"},
  {"func.expf.arg.0","float,x"},
  {"func.time.ret","time_t"},
  {"func.llroundl.arg.0","long double,x"},
  {"getprogname","func"},
  {"func.strlcpy.arg.2","size_t, n"},
  {"func.strlcpy.arg.0","char *,dest"},
  {"func.isfinite.arg.0","arithmetic,x"},
  {"func.strlcpy.arg.1","const char *,src"},
  {"popen","func"},
  {"remquo","func"},
  {"func.isspace.args","1"},
  {"func.lrintf.ret","long"},
  {"func.sqrtl.arg.0","long double,x"},
  {"func.perror.arg.0","const char *,s"},
  {"func.textdomain.arg.0","char *,domainname"},
  {"func.strdup.arg.0","const char *,src"},
  {"strcoll","func"},
  {"func.truncf.args","1"},
  {"func.islessequal.args","2"},
  {"type.int64_t.size","64"},
  {"func.llroundl.ret","long long"},
  {"func.isspace.ret","int"},
  {"func.feraiseexcept.arg.0","int,excepts"},
  {"func.strtoul.arg.2","int,base"},
  {"func.wcstold.ret","long double"},
  {"func.strtoul.arg.0","const char *,str"},
  {"func.fseek.args","3"},
  {"func.strtoul.arg.1","char * *,endptr"},
  {"func.acos.args","1"},
  {"long long","type"},
  {"func.calloc.ret","void *"},
  {"func.strtoimax.args","3"},
  {"func.signal.ret","void"},
  {"func.ungetc.arg.1","FILE *,stream"},
  {"func.ungetc.arg.0","int,c"},
  {"func.atan2l.ret","long double"},
  {"func.freopen.args","3"},
  {"func.scalbln.ret","floating_point"},
  {"func.strspn.arg.1","const char *,s2"},
  {"func.acoshl.ret","long double"},
  {"func.strspn.arg.0","const char *,s1"},
  {"func.fetestexcept.ret","int"},
  {"iswupper","func"},
  {"func.fgetws.arg.1","int,n"},
  {"func.fgetws.arg.0","wchar_t *,s"},
  {"float","type"},
  {"func.fgetws.arg.2","FILE *,stream"},
  {"func.feupdateenv.args","1"},
  {"func.unlink.args","1"},
  {"func.strcasecmp.arg.0","const char *,s1"},
  {"func.cbrt.ret","floating_point"},
  {"func.strcasecmp.arg.1","const char *,s2"},
  {"func.log10f.ret","float"},
  {"iswalnum","func"},
  {"func.wcstof.args","2"},
  {"func.hypot.args","2"},
  {"__bzero","func"},
  {"func.rintf.ret","float"},
  {"func.mbrlen.args","3"},
  {"func.log1pf.args","1"},
  {"func.gmtime.args","1"},
  {"func.log10.ret","floating_point"},
  {"func.getenv.arg.0","const char *,name"},
  {"func.fputs.args","2"},
  {"func.wcscspn.ret","size_t"},
  {"func.bind.args","3"},
  {"func.fputws.args","2"},
  {"func.strtoimax.arg.2","int,base"},
  {"func.strtoimax.arg.0","const char *,str"},
  {"func.strtoimax.arg.1","char * *,endptr"},
  {"warnc","func"},
  {"func.ispunct.ret","int"},
  {"func.ispunct.arg.0","int,c"},
  {"func.bzero.ret","void"},
  {"func.mbrtowc.ret","size_t"},
  {"func.user_from_uid.args","2"},
  {"func.wcstof.arg.1","wchar_t* *,endptr"},
  {"func.vwscanf.arg.1","va_list,arg"},
  {"func.wcstof.arg.0","const wchar_t *,nptr"},
  {"func.vwscanf.arg.0","const wchar_t *,format"},
  {"strrchr","func"},
  {"warnx","func"},
  {"difftime","func"},
  {"func.memcpy.ret","void *"},
  {"strcmp","func"},
  {"func.fpclassify.arg.0","arithmetic,x"},
  {"func.fpclassify.ret","int"},
  {"func.objc_storeStrong.ret","void *"},
  {"func.log10f.args","1"},
  {"func.bind.ret","int"},
  {"func.mbsinit.args","1"},
  {"wcstombs","func"},
  {"func.log10f.arg.0","float,x"},
  {"strncmp","func"},
  {"vsscanf","func"},
  {"func.fwrite.args","4"},
  {"func.strchr.arg.1","int,c"},
  {"func.strchr.arg.0","const char *,s"},
  {"func.memchr.args","3"},
  {"func.sin.ret","floating_point"},
  {"func.asinh.ret","floating_point"},
  {"func.llabs.ret","long long"},
  {"func.isblank.args","1"},
  {"ioctl","func"},
  {"func.vprintf.arg.0","const char *,format"},
  {"func.vprintf.arg.1","va_list,ap"},
  {"lround","func"},
  {"func.fread.ret","size_t"},
  {"func.roundl.args","1"},
  {"fputwc","func"},
  {"func.strtoull.ret","long long"},
  {"func.isxdigit.ret","int"},
  {"func.ceilf.ret","float"},
  {"func.log1p.arg.0","arithmetic,x"},
  {"func.warnc.ret","void"},
  {"exp","func"},
  {"func.exp.ret","floating_point"},
  {"type.float.size","32"},
  {"func.setvbuf.args","4"},
  {"func.wcstoimax.ret","intmax_t"},
  {"func.fileno.arg.0","FILE *,stream"},
  {"func.fdiml.arg.1","long double,y"},
  {"fputws","func"},
  {"func.fdiml.arg.0","long double,x"},
  {"wmemchr","func"},
  {"func.setjmp.ret","int"},
  {"raise","func"},
  {"mblen","func"},
  {"func.truncf.ret","float"},
  {"func.setjmp.arg.0","jmpbuf,env"},
  {"func.wcrtomb.arg.2","mbstate_t *,ps"},
  {"func.swscanf.ret","int"},
  {"func.wcrtomb.arg.1","wchar_t,wc"},
  {"func.scalbnf.args","2"},
  {"func.wcrtomb.arg.0","char *,s"},
  {"vfwscanf","func"},
  {"func.remainder.args","2"},
  {"type.long long","q"},
  {"func.atof.arg.0","const char *,str"},
  {"func.wcsrchr.ret","wchar_t*"},
  {"func.fdimf.ret","float"},
  {"func.rintl.args","1"},
  {"func.getopt.args","3"},
  {"func.puts.ret","int"},
  {"func.cosf.ret","float"},
  {"erfcf","func"},
  {"func.log2l.args","1"},
  {"func.getprogname.args","0"},
  {"func.asinl.ret","long double"},
  {"func.bsearch.arg.4","int,(*compar)(const void *,const void *)"},
  {"func.warn.ret","void"},
  {"func.iswupper.args","1"},
  {"erfcl","func"},
  {"func.vprintf.args","2"},
  {"func.bsearch.arg.1","const void *,base"},
  {"func.sscanf.ret","int"},
  {"func.bsearch.arg.0","const void *,key"},
  {"isupper","func"},
  {"func.bsearch.arg.3","size_t,size"},
  {"func.bsearch.arg.2","size_t,nmemb"},
  {"func.ceil.arg.0","arithmetic,x"},
  {"func.objc_retain.arg.0","void *,instance"},
  {"func.fmin.arg.1","arithmetic,y"},
  {"func.fmin.arg.0","arithmetic,x"},
  {"func.iswgraph.arg.0","wint_t,wc"},
  {"func.__error.args","3"},
  {"func.scalbln.args","2"},
  {"func.feraiseexcept.ret","int"},
  {"func.scalbnf.ret","float"},
  {"func.wcspbrk.ret","wchar_t*"},
  {"func.strcmp.ret","int"},
  {"func.send.args","4"},
  {"func.copysign.ret","floating_point"},
  {"type.uint64_t.size","64"},
  {"func.fwprintf.arg.1","const wchar_t *,format"},
  {"func.fwprintf.arg.0","FILE *,stream"},
  {"int64_t","type"},
  {"log10f","func"},
  {"func.lgammaf.ret","float"},
  {"func.acosf.ret","float"},
  {"log10l","func"},
  {"func.memmove.ret","void *"},
  {"func.wctype.ret","wctype_t"},
  {"func.towupper.arg.0","wint_t,wc"},
  {"func.nearbyint.ret","floating_point"},
  {"mbtowc","func"},
  {"remquof","func"},
  {"func.sinhf.args","1"},
  {"func.cosf.args","1"},
  {"func.powl.args","2"},
  {"func.isless.ret","bool"},
  {"roundf","func"},
  {"func.cbrt.arg.0","arithmetic,x"},
  {"func.wcstol.ret","long"},
  {"remquol","func"},
  {"snprintf_chk","func"},
  {"func.fchmod.args","2"},
  {"remove","func"},
  {"func.wscanf.arg.0","const wchar_t *,format"},
  {"func.floorl.args","1"},
  {"func.expm1l.arg.0","long double,x"},
  {"roundl","func"},
  {
# 2424 "project/radare2/libr/anal/d/types.c" 3 4
  ((void *)0)
# 2424 "project/radare2/libr/anal/d/types.c"
      , 
# 2424 "project/radare2/libr/anal/d/types.c" 3 4
        ((void *)0)
# 2424 "project/radare2/libr/anal/d/types.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 2439 "project/radare2/libr/anal/d/types.c" 3 4
        ((void *)0)
# 2439 "project/radare2/libr/anal/d/types.c"
            ;
}

const unsigned int gperf_types_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types = {
  .name = "types",
  .get = &gperf_types_get,
  .hash = &gperf_types_hash,
  .foreach = &gperf_types_foreach
};
