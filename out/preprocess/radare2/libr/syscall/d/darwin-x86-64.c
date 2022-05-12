# 0 "project/radare2/libr/syscall/d/darwin-x86-64.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/darwin-x86-64.c"


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
# 4 "project/radare2/libr/syscall/d/darwin-x86-64.c" 2
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
# 5 "project/radare2/libr/syscall/d/darwin-x86-64.c" 2
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
# 6 "project/radare2/libr/syscall/d/darwin-x86-64.c" 2


# 7 "project/radare2/libr/syscall/d/darwin-x86-64.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"getlogin","0x80,0x2000031,2,"},
  {"audit_session_self","0x80,0x20001ac,0,"},
  {"0x80.0x20000f7","nfsclnt"},
  {"0x80.0x20000f5","ffsctl"},
  {"0x80.0x20000f4","posix_spawn"},
  {"adjtime","0x80,0x200008c,2,"},
  {"0x80.0x20000f3","initgroups"},
  {"readlinkat","0x80,0x20001d9,4,"},
  {"0x80.0x20000f2","fsctl"},
  {"watchevent","0x80,0x20000e7,2,"},
  {"0x80.0x20000f1","flistxattr"},
  {"0x80.0x20000f0","listxattr"},
  {"_kernelrpc_mach_port_destruct_trap","0x80,0x1000019,4,"},
  {"mmap","0x80,0x20000c5,6,"},
  {"setprivexec","0x80,0x2000098,1,"},
  {"swtch_pri","0x80,0x100003b,0,"},
  {"aio_suspend_nocancel","0x80,0x20001a5,3,"},
  {"0x80.0x20000f8","fhopen"},
  {"0x80.0x20000de","getdirentriesattr"},
  {"0x80.0x20000dd","setattrlist"},
  {"getattrlistbulk","0x80,0x20001cd,5,"},
  {"setauid","0x80,0x2000162,1,"},
  {"0x80.0x20000df","exchangedata"},
  {"0x80.0x20000dc","getattrlist"},
  {"sem_wait_nocancel","0x80,0x20001a4,1,"},
  {"reboot","0x80,0x2000037,2,"},
  {"memorystatus_control","0x80,0x20001b8,5,"},
  {"psynch_rw_unlock","0x80,0x2000134,5,"},
  {"bsdthread_terminate","0x80,0x2000169,4,"},
  {"setsgroups","0x80,0x200011f,2,"},
  {"mkdir_extended","0x80,0x2000124,5,"},
  {"msgsnd","0x80,0x2000104,4,"},
  {"0x80.0x20000ed","fsetxattr"},
  {"0x80.0x20000ee","removexattr"},
  {"0x80.0x20000ef","fremovexattr"},
  {"writev_nocancel","0x80,0x200019c,3,"},
  {"sigprocmask","0x80,0x2000030,3,"},
  {"0x80.0x20000ea","getxattr"},
  {"0x80.0x20000eb","fgetxattr"},
  {"aio_return","0x80,0x200013a,1,"},
  {"0x80.0x20000ec","setxattr"},
  {"stack_snapshot_with_config","0x80,0x20001eb,3,"},
  {"net_qos_guideline","0x80,0x200020d,2,"},
  {"_kernelrpc_mach_port_construct_trap","0x80,0x1000018,4,"},
  {"setregid","0x80,0x200007f,2,"},
  {"symlinkat","0x80,0x20001da,3,"},
  {"_","0x80"},
  {"necp_session_open","0x80,0x200020a,1,"},
  {"fsetattrlist","0x80,0x20000e5,5,"},
  {"poll","0x80,0x20000e6,3,"},
  {"terminate_with_payload","0x80,0x2000208,7,"},
  {"__mac_set_file","0x80,0x200017f,2,"},
  {"__pthread_fchdir","0x80,0x200015d,1,"},
  {"sigaltstack","0x80,0x2000035,2,"},
  {"sendto_nocancel","0x80,0x200019d,6,"},
  {"ptrace","0x80,0x200001a,4,"},
  {"setpriority","0x80,0x2000060,3,"},
  {"disconnectx","0x80,0x20001c0,3,"},
  {"minherit","0x80,0x20000fa,3,"},
  {"iokit_user_client_trap","0x80,0x1000064,8,"},
  {"access","0x80,0x2000021,2,"},
  {"chmod","0x80,0x200000f,2,"},
  {"gettid","0x80,0x200011e,2,"},
  {"task_for_pid","0x80,0x100002d,3,"},
  {"fstatat","0x80,0x20001d5,4,"},
  {"fgetattrlist","0x80,0x20000e4,5,"},
  {"getsgroups","0x80,0x2000120,2,"},
  {"undelete","0x80,0x20000cd,1,"},
  {"close","0x80,0x2000006,1,"},
  {"lchown","0x80,0x200016c,3,"},
  {"coalition_info","0x80,0x20001cb,4,"},
  {"fchdir","0x80,0x200000d,1,"},
  {"msgrcv_nocancel","0x80,0x20001a3,5,"},
  {"kevent_id","0x80,0x2000177,8,"},
  {"__sigwait_nocancel","0x80,0x20001a6,2,"},
  {"setreuid","0x80,0x200007e,2,"},
  {"sync","0x80,0x2000024,0,"},
  {"kill","0x80,0x2000025,3,"},
  {"fgetxattr","0x80,0x20000eb,6,"},
  {"getpgid","0x80,0x2000097,1,"},
  {"getfsstat","0x80,0x2000012,3,"},
  {"0x80.0x100000b","_kernelrpc_mach_vm_purgable_control_trap"},
  {"0x80.0x100000c","_kernelrpc_mach_vm_deallocate_trap"},
  {"0x80.0x100000a","_kernelrpc_mach_vm_allocate_trap"},
  {"psynch_rw_upgrade","0x80,0x200012c,5,"},
  {"shmget","0x80,0x2000109,3,"},
  {"0x80.0x100000f","_kernelrpc_mach_vm_map_trap"},
  {"0x80.0x100000e","_kernelrpc_mach_vm_protect_trap"},
  {"_kernelrpc_mach_port_move_member_trap","0x80,0x1000014,3,"},
  {"truncate","0x80,0x20000c8,2,"},
  {"read_nocancel","0x80,0x200018c,3,"},
  {"munmap","0x80,0x2000049,2,"},
  {"sem_post","0x80,0x2000111,1,"},
  {"0x80.0x1000020","mach_msg_overwrite_trap"},
  {"0x80.0x1000021","semaphore_signal_trap"},
  {"0x80.0x1000022","semaphore_signal_all_trap"},
  {"0x80.0x1000023","semaphore_signal_thread_trap"},
  {"0x80.0x1000024","semaphore_wait_trap"},
  {"0x80.0x1000025","semaphore_wait_signal_trap"},
  {"0x80.0x1000026","semaphore_timedwait_trap"},
  {"fchflags","0x80,0x2000023,2,"},
  {"0x80.0x1000027","semaphore_timedwait_signal_trap"},
  {"0x80.0x200010a","shm_open"},
  {"0x80.0x200010b","shm_unlink"},
  {"getpid","0x80,0x2000014,0,"},
  {"0x80.0x1000029","_kernelrpc_mach_port_guard_trap"},
  {"0x80.0x200010c","sem_open"},
  {"0x80.0x200010d","sem_close"},
  {"setlogin","0x80,0x2000032,1,"},
  {"0x80.0x200010e","sem_unlink"},
  {"0x80.0x200010f","sem_wait"},
  {"necp_match_policy","0x80,0x20001cc,3,"},
  {"usrctl","0x80,0x20001bd,1,"},
  {"mach_wait_until_trap","0x80,0x100005a,1,"},
  {"0x80.0x100003a","pfz_exit"},
  {"pid_shutdown_sockets","0x80,0x20001b4,2,"},
  {"0x80.0x100003c","swtch"},
  {"0x80.0x100003b","swtch_pri"},
  {"0x80.0x100003e","clock_sleep_trap"},
  {"0x80.0x100003d","thread_switch"},
  {"setwgroups","0x80,0x2000121,2,"},
  {"getxattr","0x80,0x20000ea,6,"},
  {"_kernelrpc_mach_vm_deallocate_trap","0x80,0x100000c,3,"},
  {"listxattr","0x80,0x20000f0,4,"},
  {"aio_write","0x80,0x200013f,1,"},
  {"fhopen","0x80,0x20000f8,2,"},
  {"psynch_mutexdrop","0x80,0x200012e,5,"},
  {"_kernelrpc_mach_port_insert_member_trap","0x80,0x1000016,3,"},
  {"sendmsg","0x80,0x200001c,3,"},
  {"__mac_set_fd","0x80,0x2000185,2,"},
  {"sfi_ctl","0x80,0x20001c8,4,"},
  {"proc_rlimit_control","0x80,0x20001be,3,"},
  {"unlinkat","0x80,0x20001d8,3,"},
  {"symlink","0x80,0x2000039,2,"},
  {"process_policy","0x80,0x2000143,7,"},
  {"0x80.0x100002a","_kernelrpc_mach_port_unguard_trap"},
  {"0x80.0x100002b","mach_generate_activity_id"},
  {"getgid","0x80,0x200002f,0,"},
  {"0x80.0x100002c","task_name_for_pid"},
  {"0x80.0x100002d","task_for_pid"},
  {"0x80.0x100002e","pid_for_task"},
  {"recvmsg_nocancel","0x80,0x2000191,3,"},
  {"0x80.0x200020c","setattrlistat"},
  {"0x80.0x200020b","necp_session_action"},
  {"writev","0x80,0x2000079,3,"},
  {"openat_nocancel","0x80,0x20001d0,4,"},
  {"0x80.0x200020a","necp_session_open"},
  {"close_nocancel","0x80,0x200018f,1,"},
  {"getuid","0x80,0x2000018,0,"},
  {"task_self_trap","0x80,0x100001c,0,"},
  {"fsctl","0x80,0x20000f2,4,"},
  {"0x80.0x200020f","ntp_adjtime"},
  {"getitimer","0x80,0x2000056,2,"},
  {"0x80.0x200020e","fmount"},
  {"0x80.0x200020d","net_qos_guideline"},
  {"semaphore_timedwait_trap","0x80,0x1000026,3,"},
  {"__pthread_kill","0x80,0x2000148,2,"},
  {"macx_swapoff","0x80,0x1000031,2,"},
  {"setgid","0x80,0x20000b5,1,"},
  {"guarded_write_np","0x80,0x20001e5,4,"},
  {"psynch_rw_downgrade","0x80,0x200012b,5,"},
  {"listen","0x80,0x200006a,2,"},
  {"workq_open","0x80,0x200016f,0,"},
  {"getdirentriesattr","0x80,0x20000de,8,"},
  {"0x80.0x200000a","unlink"},
  {"fmount","0x80,0x200020e,4,"},
  {"shmsys","0x80,0x20000fd,4,"},
  {"0x80.0x2000100","semop"},
  {"lio_listio","0x80,0x2000140,4,"},
  {"0x80.0x200000c","chdir"},
  {"0x80.0x2000102","msgctl"},
  {"0x80.0x200000e","mknod"},
  {"0x80.0x2000103","msgget"},
  {"getsockname","0x80,0x2000020,3,"},
  {"0x80.0x200000d","fchdir"},
  {"0x80.0x2000104","msgsnd"},
  {"0x80.0x2000105","msgrcv"},
  {"faccessat","0x80,0x20001d2,4,"},
  {"0x80.0x200000f","chmod"},
  {"0x80.0x2000106","shmat"},
  {"0x80.0x2000107","shmctl"},
  {"0x80.0x2000108","shmdt"},
  {"unmount","0x80,0x200009f,2,"},
  {"0x80.0x2000109","shmget"},
  {"0x80.0x1000031","macx_swapoff"},
  {"0x80.0x1000030","macx_swapon"},
  {"0x80.0x1000033","macx_triggers"},
  {"0x80.0x1000032","thread_get_special_reply_port"},
  {"nfsclnt","0x80,0x20000f7,2,"},
  {"0x80.0x1000035","macx_backing_store_recovery"},
  {"0x80.0x1000034","macx_backing_store_suspend"},
  {"sigreturn","0x80,0x20000b8,2,"},
  {"necp_session_action","0x80,0x200020b,6,"},
  {"fclonefileat","0x80,0x2000205,4,"},
  {"__pthread_chdir","0x80,0x200015c,1,"},
  {"mk_timer_cancel_trap","0x80,0x100005e,2,"},
  {"auditctl","0x80,0x2000167,1,"},
  {"socketpair","0x80,0x2000087,4,"},
  {"csrctl","0x80,0x20001e3,3,"},
  {"0x80.0x200001a","ptrace"},
  {"removexattr","0x80,0x20000ee,3,"},
  {"0x80.0x200001b","recvmsg"},
  {"0x80.0x200001c","sendmsg"},
  {"0x80.0x200001d","recvfrom"},
  {"0x80.0x200001e","accept"},
  {"0x80.0x200001f","getpeername"},
  {"statfs64","0x80,0x2000159,2,"},
  {"netagent_trigger","0x80,0x20001ea,2,"},
  {"0x80.0x1000064","iokit_user_client_trap"},
  {"necp_client_action","0x80,0x20001f6,6,"},
  {"__mac_set_link","0x80,0x2000181,2,"},
  {"acct","0x80,0x2000033,1,"},
  {"__mac_get_file","0x80,0x200017e,2,"},
  {"0x80.0x200014d","__pthread_canceled"},
  {"0x80.0x200014e","__semwait_signal"},
  {"0x80.0x2000203","ulock_wait"},
  {"recvmsg","0x80,0x200001b,3,"},
  {"0x80.0x200014a","__sigwait"},
  {"0x80.0x200014b","__disable_threadsignal"},
  {"0x80.0x2000206","fs_snapshot"},
  {"0x80.0x200014c","__pthread_markcancel"},
  {"waitid_nocancel","0x80,0x20001a0,4,"},
  {"0x80.0x2000205","fclonefileat"},
  {"0x80.0x2000204","ulock_wake"},
  {"mach_msg_overwrite_trap","0x80,0x1000020,8,"},
  {"setitimer","0x80,0x2000053,3,"},
  {"shm_open","0x80,0x200010a,3,"},
  {"0x80.0x2000209","abort_with_payload"},
  {"0x80.0x2000208","terminate_with_payload"},
  {"initgroups","0x80,0x20000f3,3,"},
  {"pid_hibernate","0x80,0x20001b3,1,"},
  {"0x80.0x2000122","getwgroups"},
  {"0x80.0x2000123","mkfifo_extended"},
  {"0x80.0x2000120","getsgroups"},
  {"mach_timebase_info_trap","0x80,0x1000059,1,"},
  {"sigpending","0x80,0x2000034,1,"},
  {"0x80.0x2000121","setwgroups"},
  {"pid_suspend","0x80,0x20001b1,1,"},
  {"0x80.0x2000126","shared_region_check_np"},
  {"utimes","0x80,0x200008a,2,"},
  {"0x80.0x2000124","mkdir_extended"},
  {"0x80.0x2000125","identitysvc"},
  {"bsdthread_ctl","0x80,0x20001de,4,"},
  {"__semwait_signal_nocancel","0x80,0x20001a7,6,"},
  {"0x80.0x1000013","_kernelrpc_mach_port_mod_refs_trap"},
  {"0x80.0x2000128","vm_pressure_monitor"},
  {"revoke","0x80,0x2000038,1,"},
  {"0x80.0x1000012","_kernelrpc_mach_port_deallocate_trap"},
  {"0x80.0x2000129","psynch_rw_longrdlock"},
  {"mk_timer_create_trap","0x80,0x100005b,0,"},
  {"0x80.0x1000011","_kernelrpc_mach_port_destroy_trap"},
  {"0x80.0x1000010","_kernelrpc_mach_port_allocate_trap"},
  {"getauid","0x80,0x2000161,1,"},
  {"0x80.0x1000017","_kernelrpc_mach_port_extract_member_trap"},
  {"0x80.0x2000001","exit"},
  {"0x80.0x1000016","_kernelrpc_mach_port_insert_member_trap"},
  {"mlockall","0x80,0x2000144,1,"},
  {"0x80.0x1000015","_kernelrpc_mach_port_insert_right_trap"},
  {"0x80.0x200013c","aio_cancel"},
  {"__mac_syscall","0x80,0x200017d,3,"},
  {"0x80.0x2000003","read"},
  {"0x80.0x1000014","_kernelrpc_mach_port_move_member_trap"},
  {"0x80.0x200013b","aio_suspend"},
  {"0x80.0x2000002","fork"},
  {"0x80.0x200013a","aio_return"},
  {"0x80.0x2000005","open"},
  {"0x80.0x2000210","ntp_gettime"},
  {"0x80.0x2000004","write"},
  {"0x80.0x1000019","_kernelrpc_mach_port_destruct_trap"},
  {"0x80.0x2000211","os_fault_with_payload"},
  {"0x80.0x2000007","wait4"},
  {"0x80.0x1000018","_kernelrpc_mach_port_construct_trap"},
  {"0x80.0x200013f","aio_write"},
  {"0x80.0x2000006","close"},
  {"0x80.0x200013e","aio_read"},
  {"0x80.0x2000009","link"},
  {"0x80.0x200013d","aio_error"},
  {"mprotect","0x80,0x200004a,3,"},
  {"fsetxattr","0x80,0x20000ed,6,"},
  {"mk_timer_arm_trap","0x80,0x100005d,2,"},
  {"macx_triggers","0x80,0x1000033,4,"},
  {"0x80.0x2000111","sem_post"},
  {"0x80.0x2000110","sem_trywait"},
  {"msgrcv","0x80,0x2000105,5,"},
  {"0x80.0x2000112","sysctlbyname"},
  {"searchfs","0x80,0x20000e1,6,"},
  {"0x80.0x2000115","open_extended"},
  {"kdebug_typefilter","0x80,0x20000b1,2,"},
  {"umask_extended","0x80,0x2000116,2,"},
  {"0x80.0x2000117","stat_extended"},
  {"0x80.0x2000116","umask_extended"},
  {"0x80.0x2000119","fstat_extended"},
  {"0x80.0x2000118","lstat_extended"},
  {"0x80.0x1000046","host_create_mach_voucher_trap"},
  {"thread_switch","0x80,0x100003d,3,"},
  {"msgget","0x80,0x2000103,2,"},
  {"0x80.0x2000010","chown"},
  {"memorystatus_get_level","0x80,0x20001c5,1,"},
  {"0x80.0x200012b","psynch_rw_downgrade"},
  {"0x80.0x2000012","getfsstat"},
  {"0x80.0x200012c","psynch_rw_upgrade"},
  {"0x80.0x2000014","getpid"},
  {"0x80.0x200012a","psynch_rw_yieldwrlock"},
  {"0x80.0x200012f","psynch_cvbroad"},
  {"0x80.0x2000017","setuid"},
  {"0x80.0x200012d","psynch_mutexwait"},
  {"0x80.0x2000018","getuid"},
  {"0x80.0x200012e","psynch_mutexdrop"},
  {"0x80.0x2000019","geteuid"},
  {"0x80.0x1000048","mach_voucher_extract_attr_recipe_trap"},
  {"0x80.0x100001c","task_self_trap"},
  {"0x80.0x100001b","thread_self_trap"},
  {"psynch_rw_unlock2","0x80,0x2000135,5,"},
  {"0x80.0x100001a","mach_reply_port"},
  {"abort_with_payload","0x80,0x2000209,6,"},
  {"_kernelrpc_mach_port_unguard_trap","0x80,0x100002a,3,"},
  {"getrlimit","0x80,0x20000c2,2,"},
  {"0x80.0x200004e","mincore"},
  {"0x80.0x100001f","mach_msg_trap"},
  {"0x80.0x2000144","mlockall"},
  {"0x80.0x100001d","host_self_trap"},
  {"waitevent","0x80,0x20000e8,2,"},
  {"0x80.0x2000145","munlockall"},
  {"0x80.0x200004f","getgroups"},
  {"0x80.0x200004a","mprotect"},
  {"0x80.0x2000147","issetugid"},
  {"0x80.0x2000140","lio_listio"},
  {"select_nocancel","0x80,0x2000197,5,"},
  {"0x80.0x200004b","madvise"},
  {"0x80.0x2000142","iopolicysys"},
  {"0x80.0x2000143","process_policy"},
  {"pselect","0x80,0x200018a,6,"},
  {"readlink","0x80,0x200003a,3,"},
  {"setxattr","0x80,0x20000ec,6,"},
  {"__mac_set_proc","0x80,0x2000183,1,"},
  {"0x80.0x2000148","__pthread_kill"},
  {"0x80.0x2000149","__pthread_sigmask"},
  {"stat64","0x80,0x2000152,2,"},
  {"0x80.0x2000023","fchflags"},
  {"semaphore_wait_trap","0x80,0x1000024,1,"},
  {"0x80.0x2000022","chflags"},
  {"0x80.0x200011a","chmod_extended"},
  {"sem_trywait","0x80,0x2000110,1,"},
  {"wait4","0x80,0x2000007,4,"},
  {"0x80.0x2000021","access"},
  {"0x80.0x2000020","getsockname"},
  {"0x80.0x200011c","access_extended"},
  {"fstatfs","0x80,0x200009e,2,"},
  {"lstat64","0x80,0x2000154,2,"},
  {"0x80.0x2000027","getppid"},
  {"0x80.0x200011b","fchmod_extended"},
  {"0x80.0x200011e","gettid"},
  {"0x80.0x2000025","kill"},
  {"0x80.0x200011d","settid"},
  {"0x80.0x2000024","sync"},
  {"0x80.0x200011f","setsgroups"},
  {"0x80.0x2000029","dup"},
  {"grab_pgo_data","0x80,0x20001ed,4,"},
  {"0x80.0x200005d","select"},
  {"0x80.0x2000133","psynch_rw_wrlock"},
  {"0x80.0x200005f","fsync"},
  {"0x80.0x2000132","psynch_rw_rdlock"},
  {"0x80.0x2000131","psynch_cvwait"},
  {"0x80.0x2000130","psynch_cvsignal"},
  {"0x80.0x200005a","dup2"},
  {"0x80.0x2000137","settid_with_pid"},
  {"0x80.0x2000136","getsid"},
  {"telemetry","0x80,0x20001c3,6,"},
  {"0x80.0x200005c","fcntl"},
  {"0x80.0x2000135","psynch_rw_unlock2"},
  {"0x80.0x2000134","psynch_rw_unlock"},
  {"stat_extended","0x80,0x2000117,4,"},
  {"0x80.0x2000139","aio_fsync"},
  {"0x80.0x2000138","psynch_cvclrprepost"},
  {"thread_get_special_reply_port","0x80,0x1000032,0,"},
  {"open","0x80,0x2000005,3,"},
  {"guarded_close_np","0x80,0x20001ba,2,"},
  {"0x80.0x2000032","setlogin"},
  {"readv_nocancel","0x80,0x200019b,3,"},
  {"0x80.0x2000033","acct"},
  {"0x80.0x2000030","sigprocmask"},
  {"0x80.0x2000031","getlogin"},
  {"0x80.0x2000036","ioctl"},
  {"0x80.0x2000037","reboot"},
  {"guarded_kqueue_np","0x80,0x20001bb,2,"},
  {"0x80.0x2000034","sigpending"},
  {"0x80.0x2000035","sigaltstack"},
  {"0x80.0x2000038","revoke"},
  {"0x80.0x200018a","pselect"},
  {"0x80.0x2000039","symlink"},
  {"0x80.0x200018b","pselect_nocancel"},
  {"0x80.0x200018c","read_nocancel"},
  {"0x80.0x200018d","write_nocancel"},
  {"0x80.0x200018e","open_nocancel"},
  {"0x80.0x200018f","close_nocancel"},
  {"psynch_cvbroad","0x80,0x200012f,7,"},
  {"0x80.0x200002b","getegid"},
  {"0x80.0x2000166","setaudit_addr"},
  {"lstat_extended","0x80,0x2000118,4,"},
  {"0x80.0x200002a","pipe"},
  {"system_override","0x80,0x20001c6,2,"},
  {"0x80.0x2000167","auditctl"},
  {"0x80.0x2000165","getaudit_addr"},
  {"work_interval_ctl","0x80,0x20001f3,4,"},
  {"0x80.0x200002f","getgid"},
  {"0x80.0x2000162","setauid"},
  {"pfz_exit","0x80,0x100003a,0,"},
  {"getgroups","0x80,0x200004f,2,"},
  {"0x80.0x200002e","sigaction"},
  {"macx_swapon","0x80,0x1000030,4,"},
  {"quotactl","0x80,0x20000a5,4,"},
  {"0x80.0x2000161","getauid"},
  {"psynch_rw_longrdlock","0x80,0x2000129,5,"},
  {"fileport_makefd","0x80,0x20001af,1,"},
  {"0x80.0x2000168","bsdthread_create"},
  {"0x80.0x2000169","bsdthread_terminate"},
  {"_kernelrpc_mach_vm_purgable_control_trap","0x80,0x100000b,4,"},
  {"0x80.0x200017f","__mac_set_file"},
  {"0x80.0x200017e","__mac_get_file"},
  {"0x80.0x2000041","msync"},
  {"0x80.0x200017d","__mac_syscall"},
  {"0x80.0x200017c","__mac_execve"},
  {"0x80.0x2000042","vfork"},
  {"microstackshot","0x80,0x20001ec,3,"},
  {"0x80.0x1000059","mach_timebase_info_trap"},
  {"persona","0x80,0x20001ee,5,"},
  {"0x80.0x2000049","munmap"},
  {"__mac_get_mount","0x80,0x20001a9,2,"},
  {"aio_suspend","0x80,0x200013b,3,"},
  {"0x80.0x200003b","execve"},
  {"0x80.0x200003c","umask"},
  {"0x80.0x2000155","stat64_extended"},
  {"0x80.0x2000154","lstat64"},
  {"0x80.0x200003a","readlink"},
  {"0x80.0x2000157","fstat64_extended"},
  {"__mac_get_pid","0x80,0x2000186,2,"},
  {"accept_nocancel","0x80,0x2000194,3,"},
  {"0x80.0x2000156","lstat64_extended"},
  {"pselect_nocancel","0x80,0x200018b,6,"},
  {"0x80.0x2000151","sendfile"},
  {"0x80.0x200003d","chroot"},
  {"0x80.0x2000150","proc_info"},
  {"0x80.0x2000153","fstat64"},
  {"0x80.0x2000152","stat64"},
  {"lseek","0x80,0x20000c7,3,"},
  {"lstat64_extended","0x80,0x2000156,4,"},
  {"readv","0x80,0x2000078,3,"},
  {"0x80.0x2000159","statfs64"},
  {"0x80.0x2000158","getdirentries64"},
  {"0x80.0x2000055","swapon"},
  {"0x80.0x200016f","workq_open"},
  {"setgroups","0x80,0x2000050,2,"},
  {"0x80.0x2000056","getitimer"},
  {"sigsuspend","0x80,0x200006f,1,"},
  {"semaphore_signal_trap","0x80,0x1000021,1,"},
  {"auditon","0x80,0x200015f,3,"},
  {"0x80.0x2000050","setgroups"},
  {"0x80.0x200016e","bsdthread_register"},
  {"0x80.0x2000051","getpgrp"},
  {"0x80.0x200016b","kevent"},
  {"0x80.0x2000052","setpgid"},
  {"0x80.0x200016c","lchown"},
  {"0x80.0x2000053","setitimer"},
  {"fstat64_extended","0x80,0x2000157,4,"},
  {"0x80.0x200016a","kqueue"},
  {"_kernelrpc_mach_port_insert_right_trap","0x80,0x1000015,4,"},
  {"0x80.0x100005f","mk_timer_arm_leeway_trap"},
  {"0x80.0x2000059","getdtablesize"},
  {"pwrite_nocancel","0x80,0x200019f,4,"},
  {"getsid","0x80,0x2000136,1,"},
  {"0x80.0x100005e","mk_timer_cancel_trap"},
  {"0x80.0x100005d","mk_timer_arm_trap"},
  {"host_create_mach_voucher_trap","0x80,0x1000046,4,"},
  {"0x80.0x100005c","mk_timer_destroy_trap"},
  {"0x80.0x100005b","mk_timer_create_trap"},
  {"chdir","0x80,0x200000c,1,"},
  {"0x80.0x100005a","mach_wait_until_trap"},
  {"0x80.0x200008a","utimes"},
  {"proc_trace_log","0x80,0x20001dd,2,"},
  {"0x80.0x2000180","__mac_get_link"},
  {"0x80.0x200008c","adjtime"},
  {"0x80.0x2000181","__mac_set_link"},
  {"workq_kernreturn","0x80,0x2000170,4,"},
  {"0x80.0x200008b","futimes"},
  {"peeloff","0x80,0x20001c1,2,"},
  {"0x80.0x2000182","__mac_get_proc"},
  {"0x80.0x200008e","gethostuuid"},
  {"0x80.0x2000183","__mac_set_proc"},
  {"flistxattr","0x80,0x20000f1,4,"},
  {"0x80.0x2000184","__mac_get_fd"},
  {"umask","0x80,0x200003c,1,"},
  {"__mac_get_link","0x80,0x2000180,2,"},
  {"0x80.0x2000185","__mac_set_fd"},
  {"pwrite","0x80,0x200009a,4,"},
  {"0x80.0x2000186","__mac_get_pid"},
  {"0x80.0x200015e","audit"},
  {"macx_backing_store_recovery","0x80,0x1000035,1,"},
  {"0x80.0x200015d","__pthread_fchdir"},
  {"0x80.0x2000064","getpriority"},
  {"0x80.0x200015f","auditon"},
  {"munlockall","0x80,0x2000145,1,"},
  {"0x80.0x2000062","connect"},
  {"0x80.0x200015a","fstatfs64"},
  {"0x80.0x2000061","socket"},
  {"0x80.0x2000060","setpriority"},
  {"0x80.0x200015c","__pthread_chdir"},
  {"0x80.0x200015b","getfsstat64"},
  {"mk_timer_destroy_trap","0x80,0x100005c,1,"},
  {"stat64_extended","0x80,0x2000155,4,"},
  {"aio_read","0x80,0x200013e,1,"},
  {"vfork","0x80,0x2000042,0,"},
  {"guarded_writev_np","0x80,0x20001e7,4,"},
  {"0x80.0x2000069","setsockopt"},
  {"0x80.0x2000068","bind"},
  {"renameat","0x80,0x20001d1,4,"},
  {"0x80.0x2000177","kevent_id"},
  {"0x80.0x2000176","kevent_qos"},
  {"0x80.0x2000175","ledger"},
  {"host_self_trap","0x80,0x100001d,0,"},
  {"mkdir","0x80,0x2000088,2,"},
  {"0x80.0x2000174","thread_selfid"},
  {"pid_resume","0x80,0x20001b2,1,"},
  {"0x80.0x2000173","__old_semwait_signal_nocancel"},
  {"0x80.0x2000172","__old_semwait_signal"},
  {"kevent_qos","0x80,0x2000176,8,"},
  {"0x80.0x2000171","kevent64"},
  {"0x80.0x2000170","workq_kernreturn"},
  {"0x80.0x200009a","pwrite"},
  {"0x80.0x200009b","nfssvc"},
  {"waitid","0x80,0x20000ad,4,"},
  {"0x80.0x200009d","statfs"},
  {"__mac_getfsstat","0x80,0x20001aa,5,"},
  {"0x80.0x200009e","fstatfs"},
  {"0x80.0x200009f","unmount"},
  {"madvise","0x80,0x200004b,3,"},
  {"0x80.0x2000076","getsockopt"},
  {"mlock","0x80,0x20000cb,2,"},
  {"0x80.0x2000074","gettimeofday"},
  {"0x80.0x2000075","getrusage"},
  {"mach_generate_activity_id","0x80,0x100002b,3,"},
  {"pipe","0x80,0x200002a,0,"},
  {"thread_selfcounts","0x80,0x20000ba,3,"},
  {"getdtablesize","0x80,0x2000059,0,"},
  {"0x80.0x2000078","readv"},
  {"0x80.0x2000079","writev"},
  {"__pthread_sigmask","0x80,0x2000149,3,"},
  {"0x80.0x200006f","sigsuspend"},
  {"ffsctl","0x80,0x20000f5,4,"},
  {"0x80.0x200006a","listen"},
  {"thread_self_trap","0x80,0x100001b,0,"},
  {"mincore","0x80,0x200004e,3,"},
  {"mremap_encrypted","0x80,0x20001e9,5,"},
  {"identitysvc","0x80,0x2000125,2,"},
  {"audit_session_port","0x80,0x20001b0,2,"},
  {"0x80.0x2000089","rmdir"},
  {"psynch_rw_yieldwrlock","0x80,0x200012a,5,"},
  {"0x80.0x2000088","mkdir"},
  {"recvfrom_nocancel","0x80,0x2000193,6,"},
  {"csops","0x80,0x20000a9,4,"},
  {"_kernelrpc_mach_vm_protect_trap","0x80,0x100000e,5,"},
  {"select","0x80,0x200005d,5,"},
  {"psynch_cvsignal","0x80,0x2000130,8,"},
  {"dup","0x80,0x2000029,1,"},
  {"0x80.0x2000080","rename"},
  {"0x80.0x2000083","flock"},
  {"0x80.0x2000085","sendto"},
  {"mk_timer_arm_leeway_trap","0x80,0x100005f,4,"},
  {"0x80.0x2000084","mkfifo"},
  {"msgctl","0x80,0x2000102,3,"},
  {"0x80.0x2000087","socketpair"},
  {"fcntl_nocancel","0x80,0x2000196,3,"},
  {"0x80.0x2000086","shutdown"},
  {"0x80.0x200007f","setregid"},
  {"0x80.0x2000199","connect_nocancel"},
  {"0x80.0x2000198","fsync_nocancel"},
  {"0x80.0x200007e","setreuid"},
  {"0x80.0x200007b","fchown"},
  {"shm_unlink","0x80,0x200010b,1,"},
  {"0x80.0x200007c","fchmod"},
  {"0x80.0x200007a","settimeofday"},
  {"sem_open","0x80,0x200010c,4,"},
  {"open_dprotected_np","0x80,0x20000d8,5,"},
  {"0x80.0x2000191","recvmsg_nocancel"},
  {"0x80.0x2000190","wait4_nocancel"},
  {"0x80.0x2000193","recvfrom_nocancel"},
  {"0x80.0x2000192","sendmsg_nocancel"},
  {"0x80.0x2000195","msync_nocancel"},
  {"getpgrp","0x80,0x2000051,0,"},
  {"0x80.0x2000194","accept_nocancel"},
  {"0x80.0x2000197","select_nocancel"},
  {"__pthread_markcancel","0x80,0x200014c,1,"},
  {"0x80.0x2000098","setprivexec"},
  {"0x80.0x2000196","fcntl_nocancel"},
  {"bsdthread_register","0x80,0x200016e,7,"},
  {"0x80.0x2000099","pread"},
  {"semget","0x80,0x20000ff,3,"},
  {"mach_voucher_extract_attr_recipe_trap","0x80,0x1000048,4,"},
  {"pread_nocancel","0x80,0x200019e,4,"},
  {"fchown","0x80,0x200007b,3,"},
  {"0x80.0x2000093","setsid"},
  {"0x80.0x2000097","getpgid"},
  {"sysctlbyname","0x80,0x2000112,6,"},
  {"pid_for_task","0x80,0x100002e,2,"},
  {"audit_session_join","0x80,0x20001ad,1,"},
  {"coalition","0x80,0x20001ca,3,"},
  {"psynch_cvclrprepost","0x80,0x2000138,7,"},
  {"fork","0x80,0x2000002,0,"},
  {"rmdir","0x80,0x2000089,1,"},
  {"recvmsg_x","0x80,0x20001e0,4,"},
  {"_kernelrpc_mach_port_extract_member_trap","0x80,0x1000017,3,"},
  {"seteuid","0x80,0x20000b7,1,"},
  {"chflags","0x80,0x2000022,2,"},
  {"0x80.0x200019a","sigsuspend_nocancel"},
  {"0x80.0x200019c","writev_nocancel"},
  {"msgsys","0x80,0x20000fc,5,"},
  {"0x80.0x200019b","readv_nocancel"},
  {"0x80.0x200019e","pread_nocancel"},
  {"0x80.0x200019d","sendto_nocancel"},
  {"guarded_open_np","0x80,0x20001b9,5,"},
  {"0x80.0x200019f","pwrite_nocancel"},
  {"ioctl","0x80,0x2000036,3,"},
  {"getpeername","0x80,0x200001f,3,"},
  {"openbyid_np","0x80,0x20001df,3,"},
  {"shared_region_check_np","0x80,0x2000126,1,"},
  {"setrlimit","0x80,0x20000c3,2,"},
  {"open_nocancel","0x80,0x200018e,3,"},
  {"psynch_mutexwait","0x80,0x200012d,5,"},
  {"_kernelrpc_mach_port_mod_refs_trap","0x80,0x1000013,4,"},
  {"_kernelrpc_mach_port_guard_trap","0x80,0x1000029,4,"},
  {"exit","0x80,0x2000001,1,"},
  {"semaphore_timedwait_signal_trap","0x80,0x1000027,4,"},
  {"swtch","0x80,0x100003c,0,"},
  {"__old_semwait_signal_nocancel","0x80,0x2000173,5,"},
  {"setattrlistat","0x80,0x200020c,6,"},
  {"fstatat64","0x80,0x20001d6,4,"},
  {"fchmod","0x80,0x200007c,2,"},
  {"open_extended","0x80,0x2000115,6,"},
  {"change_fdguard_np","0x80,0x20001bc,6,"},
  {"aio_fsync","0x80,0x2000139,2,"},
  {"semop","0x80,0x2000100,3,"},
  {"socket_delegate","0x80,0x20001c2,4,"},
  {"issetugid","0x80,0x2000147,0,"},
  {"fdatasync","0x80,0x20000bb,1,"},
  {"getfsstat64","0x80,0x200015b,3,"},
  {"vm_pressure_monitor","0x80,0x2000128,3,"},
  {"fchownat","0x80,0x20001d4,5,"},
  {"sem_wait","0x80,0x200010f,1,"},
  {"shared_region_map_and_slide_np","0x80,0x20001b6,6,"},
  {"sem_close","0x80,0x200010d,1,"},
  {"getsockopt","0x80,0x2000076,5,"},
  {"execve","0x80,0x200003b,3,"},
  {"chown","0x80,0x2000010,3,"},
  {"mkfifo_extended","0x80,0x2000123,5,"},
  {"statfs","0x80,0x200009d,2,"},
  {"iopolicysys","0x80,0x2000142,2,"},
  {"fremovexattr","0x80,0x20000ef,3,"},
  {"ulock_wake","0x80,0x2000204,3,"},
  {"sysctl","0x80,0x20000ca,6,"},
  {"kdebug_trace","0x80,0x20000b4,5,"},
  {"guarded_pwrite_np","0x80,0x20001e6,5,"},
  {"task_name_for_pid","0x80,0x100002c,3,"},
  {"clonefileat","0x80,0x20001ce,5,"},
  {"__semwait_signal","0x80,0x200014e,6,"},
  {"sigaction","0x80,0x200002e,3,"},
  {"gettimeofday","0x80,0x2000074,3,"},
  {"connect","0x80,0x2000062,3,"},
  {"_kernelrpc_mach_vm_map_trap","0x80,0x100000f,6,"},
  {"psynch_cvwait","0x80,0x2000131,8,"},
  {"sem_unlink","0x80,0x200010e,1,"},
  {"macx_backing_store_suspend","0x80,0x1000034,1,"},
  {"settid","0x80,0x200011d,2,"},
  {"access_extended","0x80,0x200011c,4,"},
  {"sendmsg_x","0x80,0x20001e1,4,"},
  {"getegid","0x80,0x200002b,0,"},
  {"stat","0x80,0x20000bc,2,"},
  {"futimes","0x80,0x200008b,2,"},
  {"__mac_get_proc","0x80,0x2000182,1,"},
  {"kas_info","0x80,0x20001b7,3,"},
  {"geteuid","0x80,0x2000019,0,"},
  {"posix_spawn","0x80,0x20000f4,5,"},
  {"fcntl","0x80,0x200005c,3,"},
  {"fchmodat","0x80,0x20001d3,4,"},
  {"os_fault_with_payload","0x80,0x2000211,6,"},
  {"clock_sleep_trap","0x80,0x100003e,5,"},
  {"settid_with_pid","0x80,0x2000137,2,"},
  {"wait4_nocancel","0x80,0x2000190,4,"},
  {"mach_msg_trap","0x80,0x100001f,7,"},
  {"psynch_rw_wrlock","0x80,0x2000133,5,"},
  {"link","0x80,0x2000009,2,"},
  {"pathconf","0x80,0x20000bf,2,"},
  {"mkdirat","0x80,0x20001db,3,"},
  {"msgsnd_nocancel","0x80,0x20001a2,4,"},
  {"shmat","0x80,0x2000106,3,"},
  {"nfssvc","0x80,0x200009b,2,"},
  {"ledger","0x80,0x2000175,4,"},
  {"mount","0x80,0x20000a7,4,"},
  {"write","0x80,0x2000004,3,"},
  {"getpriority","0x80,0x2000064,2,"},
  {"getattrlist","0x80,0x20000dc,5,"},
  {"sendfile","0x80,0x2000151,6,"},
  {"csops_audittoken","0x80,0x20000aa,5,"},
  {"read","0x80,0x2000003,3,"},
  {"sfi_pidctl","0x80,0x20001c9,4,"},
  {"flock","0x80,0x2000083,2,"},
  {"0x80.0x20001bb","guarded_kqueue_np"},
  {"0x80.0x20001bc","change_fdguard_np"},
  {"gethostuuid","0x80,0x200008e,3,"},
  {"0x80.0x20001ba","guarded_close_np"},
  {"semctl","0x80,0x20000fe,4,"},
  {"0x80.0x20001bf","connectx"},
  {"0x80.0x20001bd","usrctl"},
  {"connect_nocancel","0x80,0x2000199,3,"},
  {"0x80.0x20001be","proc_rlimit_control"},
  {"__disable_threadsignal","0x80,0x200014b,1,"},
  {"fpathconf","0x80,0x20000c0,2,"},
  {"write_nocancel","0x80,0x200018d,3,"},
  {"__mac_mount","0x80,0x20001a8,5,"},
  {"swapon","0x80,0x2000055,0,"},
  {"delete","0x80,0x20000e2,1,"},
  {"ntp_gettime","0x80,0x2000210,1,"},
  {"semaphore_signal_all_trap","0x80,0x1000022,1,"},
  {"fchmod_extended","0x80,0x200011b,5,"},
  {"sendto","0x80,0x2000085,6,"},
  {"0x80.0x20001aa","__mac_getfsstat"},
  {"0x80.0x20001ac","audit_session_self"},
  {"0x80.0x20001ab","fsgetpath"},
  {"dup2","0x80,0x200005a,2,"},
  {"0x80.0x20001ae","fileport_makeport"},
  {"0x80.0x20001ad","audit_session_join"},
  {"0x80.0x20001af","fileport_makefd"},
  {"bind","0x80,0x2000068,3,"},
  {"mknod","0x80,0x200000e,3,"},
  {"getdirentries64","0x80,0x2000158,4,"},
  {"setuid","0x80,0x2000017,1,"},
  {"fstat","0x80,0x20000bd,2,"},
  {"copyfile","0x80,0x20000e3,4,"},
  {"0x80.0x20001b2","pid_resume"},
  {"0x80.0x20001b3","pid_hibernate"},
  {"0x80.0x20001b0","audit_session_port"},
  {"0x80.0x20001b1","pid_suspend"},
  {"0x80.0x20001b6","shared_region_map_and_slide_np"},
  {"0x80.0x20001b7","kas_info"},
  {"0x80.0x20001b4","pid_shutdown_sockets"},
  {"0x80.0x20001b8","memorystatus_control"},
  {"0x80.0x20001b9","guarded_open_np"},
  {"getentropy","0x80,0x20001f4,2,"},
  {"vfs_purge","0x80,0x20001c7,0,"},
  {"_kernelrpc_mach_vm_allocate_trap","0x80,0x100000a,4,"},
  {"setsockopt","0x80,0x2000069,5,"},
  {"shmdt","0x80,0x2000108,1,"},
  {"fstatfs64","0x80,0x200015a,2,"},
  {"ulock_wait","0x80,0x2000203,4,"},
  {"semsys","0x80,0x20000fb,5,"},
  {"msync_nocancel","0x80,0x2000195,3,"},
  {"ntp_adjtime","0x80,0x200020f,1,"},
  {"0x80.0x20000bc","stat"},
  {"0x80.0x20000bb","fdatasync"},
  {"modwatch","0x80,0x20000e9,2,"},
  {"0x80.0x20001a1","poll_nocancel"},
  {"0x80.0x20000ba","thread_selfcounts"},
  {"0x80.0x20001a0","waitid_nocancel"},
  {"0x80.0x20001a3","msgrcv_nocancel"},
  {"0x80.0x20001a2","msgsnd_nocancel"},
  {"0x80.0x20000bf","pathconf"},
  {"fsync_nocancel","0x80,0x2000198,1,"},
  {"0x80.0x20001a5","aio_suspend_nocancel"},
  {"0x80.0x20000be","lstat"},
  {"0x80.0x20001a4","sem_wait_nocancel"},
  {"0x80.0x20000bd","fstat"},
  {"0x80.0x20001a7","__semwait_signal_nocancel"},
  {"getattrlistat","0x80,0x20001dc,6,"},
  {"setpgid","0x80,0x2000052,2,"},
  {"0x80.0x20001a6","__sigwait_nocancel"},
  {"0x80.0x20001a9","__mac_get_mount"},
  {"0x80.0x20001a8","__mac_mount"},
  {"msync","0x80,0x2000041,3,"},
  {"0x80.0x20000a1","getfh"},
  {"0x80.0x20000a5","quotactl"},
  {"connectx","0x80,0x20001bf,8,"},
  {"0x80.0x20000a7","mount"},
  {"bsdthread_create","0x80,0x2000168,5,"},
  {"0x80.0x20000a9","csops"},
  {"kevent","0x80,0x200016b,6,"},
  {"shutdown","0x80,0x2000086,2,"},
  {"recvfrom","0x80,0x200001d,6,"},
  {"0x80.0x20000cb","mlock"},
  {"0x80.0x20000cc","munlock"},
  {"0x80.0x20001d4","fchownat"},
  {"0x80.0x20001d5","fstatat"},
  {"0x80.0x20000ca","sysctl"},
  {"0x80.0x20001d6","fstatat64"},
  {"0x80.0x20001d7","linkat"},
  {"0x80.0x20001d0","openat_nocancel"},
  {"0x80.0x20000cd","undelete"},
  {"0x80.0x20001d1","renameat"},
  {"kdebug_trace64","0x80,0x20000b3,5,"},
  {"0x80.0x20001d2","faccessat"},
  {"0x80.0x20001d3","fchmodat"},
  {"0x80.0x20001d8","unlinkat"},
  {"0x80.0x20001d9","readlinkat"},
  {"getdirentries","0x80,0x20000c4,4,"},
  {"0x80.0x20000b3","kdebug_trace64"},
  {"0x80.0x20000b2","kdebug_trace_string"},
  {"unlink","0x80,0x200000a,1,"},
  {"0x80.0x20000b1","kdebug_typefilter"},
  {"accept","0x80,0x200001e,3,"},
  {"0x80.0x20000b7","seteuid"},
  {"0x80.0x20000b6","setegid"},
  {"0x80.0x20000b5","setgid"},
  {"linkat","0x80,0x20001d7,5,"},
  {"0x80.0x20000b4","kdebug_trace"},
  {"fstat_extended","0x80,0x2000119,4,"},
  {"_kernelrpc_mach_port_deallocate_trap","0x80,0x1000012,2,"},
  {"0x80.0x20000b8","sigreturn"},
  {"chroot","0x80,0x200003d,1,"},
  {"thread_selfid","0x80,0x2000174,0,"},
  {"0x80.0x20001c3","telemetry"},
  {"0x80.0x20001c2","socket_delegate"},
  {"aio_error","0x80,0x200013d,1,"},
  {"0x80.0x20001c1","peeloff"},
  {"fsync","0x80,0x200005f,1,"},
  {"0x80.0x20001c0","disconnectx"},
  {"0x80.0x20001c7","vfs_purge"},
  {"0x80.0x20001c6","system_override"},
  {"0x80.0x20001c5","memorystatus_get_level"},
  {"getppid","0x80,0x2000027,0,"},
  {"kqueue","0x80,0x200016a,0,"},
  {"0x80.0x20001c4","proc_uuid_policy"},
  {"pread","0x80,0x2000099,4,"},
  {"socket","0x80,0x2000061,3,"},
  {"0x80.0x20001c9","sfi_pidctl"},
  {"0x80.0x20001c8","sfi_ctl"},
  {"setattrlist","0x80,0x20000dd,5,"},
  {"0x80.0x20000c2","getrlimit"},
  {"0x80.0x20000c3","setrlimit"},
  {"0x80.0x20001ee","persona"},
  {"0x80.0x20000c0","fpathconf"},
  {"0x80.0x20001ed","grab_pgo_data"},
  {"chmod_extended","0x80,0x200011a,5,"},
  {"fs_snapshot","0x80,0x2000206,6,"},
  {"fsgetpath","0x80,0x20001ab,4,"},
  {"0x80.0x20000c7","lseek"},
  {"0x80.0x20001ea","netagent_trigger"},
  {"0x80.0x20000c4","getdirentries"},
  {"0x80.0x20000c5","mmap"},
  {"0x80.0x20001ec","microstackshot"},
  {"0x80.0x20001eb","stack_snapshot_with_config"},
  {"kdebug_trace_string","0x80,0x20000b2,3,"},
  {"settimeofday","0x80,0x200007a,2,"},
  {"semaphore_signal_thread_trap","0x80,0x1000023,2,"},
  {"0x80.0x20000c8","truncate"},
  {"guarded_open_dprotected_np","0x80,0x20001e4,7,"},
  {"0x80.0x20000c9","ftruncate"},
  {"necp_open","0x80,0x20001f5,1,"},
  {"munlock","0x80,0x20000cc,2,"},
  {"_kernelrpc_mach_port_destroy_trap","0x80,0x1000011,2,"},
  {"0x80.0x20000aa","csops_audittoken"},
  {"0x80.0x20001f6","necp_client_action"},
  {"fstat64","0x80,0x2000153,2,"},
  {"0x80.0x20001f4","getentropy"},
  {"0x80.0x20000ad","waitid"},
  {"0x80.0x20001f5","necp_open"},
  {"openat","0x80,0x20001cf,4,"},
  {"0x80.0x20001f3","work_interval_ctl"},
  {"semaphore_wait_signal_trap","0x80,0x1000025,2,"},
  {"sendmsg_nocancel","0x80,0x2000192,3,"},
  {"aio_cancel","0x80,0x200013c,2,"},
  {"getrusage","0x80,0x2000075,2,"},
  {"renameatx_np","0x80,0x20001e8,5,"},
  {"kevent64","0x80,0x2000171,7,"},
  {"audit","0x80,0x200015e,2,"},
  {"ftruncate","0x80,0x20000c9,2,"},
  {"0x80.0x20001dd","proc_trace_log"},
  {"0x80.0x20001de","bsdthread_ctl"},
  {"0x80.0x20001df","openbyid_np"},
  {"setsid","0x80,0x2000093,0,"},
  {"psynch_rw_rdlock","0x80,0x2000132,5,"},
  {"0x80.0x20001da","symlinkat"},
  {"proc_uuid_policy","0x80,0x20001c4,4,"},
  {"0x80.0x20001db","mkdirat"},
  {"0x80.0x20001dc","getattrlistat"},
  {"__pthread_canceled","0x80,0x200014d,1,"},
  {"0x80.0x20000d8","open_dprotected_np"},
  {"proc_info","0x80,0x2000150,6,"},
  {"0x80.0x20000ff","semget"},
  {"0x80.0x20001e5","guarded_write_np"},
  {"poll_nocancel","0x80,0x20001a1,3,"},
  {"0x80.0x20000fe","semctl"},
  {"0x80.0x20001e4","guarded_open_dprotected_np"},
  {"mkfifo","0x80,0x2000084,2,"},
  {"0x80.0x20000fd","shmsys"},
  {"0x80.0x20001e7","guarded_writev_np"},
  {"0x80.0x20000fc","msgsys"},
  {"0x80.0x20001e6","guarded_pwrite_np"},
  {"__mac_execve","0x80,0x200017c,4,"},
  {"0x80.0x20000fb","semsys"},
  {"0x80.0x20001e1","sendmsg_x"},
  {"0x80.0x20000fa","minherit"},
  {"0x80.0x20001e0","recvmsg_x"},
  {"0x80.0x20001e3","csrctl"},
  {"rename","0x80,0x2000080,2,"},
  {"0x80.0x20001e2","thread_selfusage"},
  {"0x80.0x20001e9","mremap_encrypted"},
  {"sigsuspend_nocancel","0x80,0x200019a,1,"},
  {"exchangedata","0x80,0x20000df,3,"},
  {"0x80.0x20001e8","renameatx_np"},
  {"0x80.0x20000e4","fgetattrlist"},
  {"0x80.0x20000e5","fsetattrlist"},
  {"0x80.0x20001cc","necp_match_policy"},
  {"0x80.0x20000e6","poll"},
  {"0x80.0x20001cb","coalition_info"},
  {"0x80.0x20000e7","watchevent"},
  {"0x80.0x20001ca","coalition"},
  {"__mac_get_fd","0x80,0x2000184,2,"},
  {"__sigwait","0x80,0x200014a,2,"},
  {"0x80.0x20000e1","searchfs"},
  {"setaudit_addr","0x80,0x2000166,2,"},
  {"0x80.0x20000e2","delete"},
  {"0x80.0x20001cf","openat"},
  {"getwgroups","0x80,0x2000122,2,"},
  {"0x80.0x20000e3","copyfile"},
  {"0x80.0x20001ce","clonefileat"},
  {"0x80.0x20001cd","getattrlistbulk"},
  {"setegid","0x80,0x20000b6,1,"},
  {"mach_reply_port","0x80,0x100001a,0,"},
  {"0x80.0x20000e8","waitevent"},
  {"0x80.0x20000e9","modwatch"},
  {"_kernelrpc_mach_port_allocate_trap","0x80,0x1000010,3,"},
  {"shmctl","0x80,0x2000107,3,"},
  {"lstat","0x80,0x20000be,2,"},
  {"getaudit_addr","0x80,0x2000165,2,"},
  {"getfh","0x80,0x20000a1,2,"},
  {"fileport_makeport","0x80,0x20001ae,2,"},
  {"thread_selfusage","0x80,0x20001e2,0,"},
  {"__old_semwait_signal","0x80,0x2000172,5,"},
  {
# 944 "project/radare2/libr/syscall/d/darwin-x86-64.c" 3 4
  ((void *)0)
# 944 "project/radare2/libr/syscall/d/darwin-x86-64.c"
      , 
# 944 "project/radare2/libr/syscall/d/darwin-x86-64.c" 3 4
        ((void *)0)
# 944 "project/radare2/libr/syscall/d/darwin-x86-64.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_darwin_x86_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_darwin_x86_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 959 "project/radare2/libr/syscall/d/darwin-x86-64.c" 3 4
        ((void *)0)
# 959 "project/radare2/libr/syscall/d/darwin-x86-64.c"
            ;
}

const unsigned int gperf_darwin_x86_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_darwin_x86_64 = {
  .name = "darwin-x86-64",
  .get = &gperf_darwin_x86_64_get,
  .hash = &gperf_darwin_x86_64_hash,
  .foreach = &gperf_darwin_x86_64_foreach
};
