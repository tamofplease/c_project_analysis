# 0 "project/radare2/libr/syscall/d/darwin-x86-32.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/darwin-x86-32.c"


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
# 4 "project/radare2/libr/syscall/d/darwin-x86-32.c" 2
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
# 5 "project/radare2/libr/syscall/d/darwin-x86-32.c" 2
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
# 6 "project/radare2/libr/syscall/d/darwin-x86-32.c" 2


# 7 "project/radare2/libr/syscall/d/darwin-x86-32.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"semaphore_signal_all_trap","0x80,0x22,1,"},
  {"write_nocancel","0x80,0x18d,3,"},
  {"setpgid","0x80,0x52,2,"},
  {"fpathconf","0x80,0xc0,2,"},
  {"0x80.0x89","rmdir"},
  {"fstatat64","0x80,0x1d6,4,"},
  {"0x80.0x88","mkdir"},
  {"0x80.0x112","sysctlbyname"},
  {"0x80.0xfe","semctl"},
  {"0x80.0x111","sem_post"},
  {"0x80.0xfd","shmsys"},
  {"0x80.0x110","sem_trywait"},
  {"fchown","0x80,0x7b,3,"},
  {"0x80.0x117","stat_extended"},
  {"0x80.0xff","semget"},
  {"0x80.0x116","umask_extended"},
  {"chroot","0x80,0x3d,1,"},
  {"unmount","0x80,0x9f,2,"},
  {"0x80.0x83","flock"},
  {"0x80.0xfa","minherit"},
  {"0x80.0x115","open_extended"},
  {"exit","0x80,0x1,1,"},
  {"acct","0x80,0x33,1,"},
  {"0x80.0xfc","msgsys"},
  {"shutdown","0x80,0x86,2,"},
  {"0x80.0x80","rename"},
  {"0x80.0xfb","semsys"},
  {"0x80.0x87","socketpair"},
  {"0x80.0x119","fstat_extended"},
  {"0x80.0x86","shutdown"},
  {"0x80.0x118","lstat_extended"},
  {"0x80.0x85","sendto"},
  {"0x80.0x84","mkfifo"},
  {"_kernelrpc_mach_port_deallocate_trap","0x80,0x12,2,"},
  {"0x80.0x16e","bsdthread_register"},
  {"0x80.0x16f","workq_open"},
  {"0x80.0x16a","kqueue"},
  {"0x80.0x16b","kevent"},
  {"setegid","0x80,0xb6,1,"},
  {"0x80.0x16c","lchown"},
  {"kdebug_typefilter","0x80,0xb1,2,"},
  {"recvmsg","0x80,0x1b,3,"},
  {"setxattr","0x80,0xec,6,"},
  {"thread_selfid","0x80,0x174,0,"},
  {"0x80.0x98","setprivexec"},
  {"0x80.0x99","pread"},
  {"0x80.0xd8","open_dprotected_np"},
  {"0x80.0x147","issetugid"},
  {"0x80.0x144","mlockall"},
  {"0x80.0x145","munlockall"},
  {"csops","0x80,0xa9,4,"},
  {"0x80.0x142","iopolicysys"},
  {"swtch","0x80,0x3c,0,"},
  {"0x80.0x143","process_policy"},
  {"setsgroups","0x80,0x11f,2,"},
  {"0x80.0x140","lio_listio"},
  {"0x80.0x93","setsid"},
  {"fchmodat","0x80,0x1d3,4,"},
  {"fsctl","0x80,0xf2,4,"},
  {"sigaction","0x80,0x2e,3,"},
  {"0x80.0x97","getpgid"},
  {"ioctl","0x80,0x36,3,"},
  {"0x80.0x148","__pthread_kill"},
  {"0x80.0x149","__pthread_sigmask"},
  {"msgsys","0x80,0xfc,5,"},
  {"0x80.0x11c","access_extended"},
  {"0x80.0x11b","fchmod_extended"},
  {"_kernelrpc_mach_vm_map_trap","0x80,0xf,6,"},
  {"0x80.0xe6","poll"},
  {"0x80.0x11a","chmod_extended"},
  {"0x80.0xe7","watchevent"},
  {"_kernelrpc_mach_port_insert_member_trap","0x80,0x16,3,"},
  {"0x80.0xe4","fgetattrlist"},
  {"0x80.0xe5","fsetattrlist"},
  {"0x80.0x11f","setsgroups"},
  {"0x80.0xe2","delete"},
  {"0x80.0x11e","gettid"},
  {"fchdir","0x80,0xd,1,"},
  {"0x80.0xe3","copyfile"},
  {"0x80.0x11d","settid"},
  {"0x80.0xe1","searchfs"},
  {"statfs64","0x80,0x159,2,"},
  {"setuid","0x80,0x17,1,"},
  {"mprotect","0x80,0x4a,3,"},
  {"fsgetpath","0x80,0x1ab,4,"},
  {"0x80.0xe8","waitevent"},
  {"0x80.0x175","ledger"},
  {"0x80.0xe9","modwatch"},
  {"0x80.0x174","thread_selfid"},
  {"0x80.0x177","kevent_id"},
  {"0x80.0x176","kevent_qos"},
  {"0x80.0x171","kevent64"},
  {"0x80.0x170","workq_kernreturn"},
  {"quotactl","0x80,0xa5,4,"},
  {"0x80.0x173","__old_semwait_signal_nocancel"},
  {"__mac_get_mount","0x80,0x1a9,2,"},
  {"0x80.0x172","__old_semwait_signal"},
  {"swtch_pri","0x80,0x3b,0,"},
  {"psynch_rw_wrlock","0x80,0x133,5,"},
  {"sendmsg","0x80,0x1c,3,"},
  {"setaudit_addr","0x80,0x166,2,"},
  {"umask_extended","0x80,0x116,2,"},
  {"mk_timer_arm_leeway_trap","0x80,0x5f,4,"},
  {"_kernelrpc_mach_port_mod_refs_trap","0x80,0x13,4,"},
  {"pfz_exit","0x80,0x3a,0,"},
  {"fsync","0x80,0x5f,1,"},
  {"stat64_extended","0x80,0x155,4,"},
  {"aio_return","0x80,0x13a,1,"},
  {"setreuid","0x80,0x7e,2,"},
  {"work_interval_ctl","0x80,0x1f3,4,"},
  {"psynch_cvclrprepost","0x80,0x138,7,"},
  {"0x80.0x8c","adjtime"},
  {"0x80.0x8b","futimes"},
  {"0x80.0x8a","utimes"},
  {"0x80.0x18b","pselect_nocancel"},
  {"select","0x80,0x5d,5,"},
  {"0x80.0x18c","read_nocancel"},
  {"_kernelrpc_mach_port_move_member_trap","0x80,0x14,3,"},
  {"kevent_qos","0x80,0x176,8,"},
  {"0x80.0x18a","pselect"},
  {"0x80.0x8e","gethostuuid"},
  {"0x80.0x18f","close_nocancel"},
  {"psynch_rw_upgrade","0x80,0x12c,5,"},
  {"sfi_ctl","0x80,0x1c8,4,"},
  {"__mac_set_file","0x80,0x17f,2,"},
  {"0x80.0x18d","write_nocancel"},
  {"0x80.0x18e","open_nocancel"},
  {"macx_triggers","0x80,0x33,4,"},
  {"setpriority","0x80,0x60,3,"},
  {"bsdthread_ctl","0x80,0x1de,4,"},
  {"wait4","0x80,0x7,4,"},
  {"fgetattrlist","0x80,0xe4,5,"},
  {"pid_hibernate","0x80,0x1b3,1,"},
  {"setitimer","0x80,0x53,3,"},
  {"audit","0x80,0x15e,2,"},
  {"msgget","0x80,0x103,2,"},
  {"fileport_makeport","0x80,0x1ae,2,"},
  {"disconnectx","0x80,0x1c0,3,"},
  {"0x80.0x9b","nfssvc"},
  {"proc_trace_log","0x80,0x1dd,2,"},
  {"necp_session_action","0x80,0x20b,6,"},
  {"0x80.0x9a","pwrite"},
  {"0x80.0x9f","unmount"},
  {"connect_nocancel","0x80,0x199,3,"},
  {"listen","0x80,0x6a,2,"},
  {"munlockall","0x80,0x145,1,"},
  {"0x80.0x9d","statfs"},
  {"0x80.0x9e","fstatfs"},
  {"getpgid","0x80,0x97,1,"},
  {"macx_backing_store_suspend","0x80,0x34,1,"},
  {"adjtime","0x80,0x8c,2,"},
  {"setgid","0x80,0xb5,1,"},
  {"0x80.0x157","fstat64_extended"},
  {"lstat64_extended","0x80,0x156,4,"},
  {"0x80.0x156","lstat64_extended"},
  {"0x80.0x155","stat64_extended"},
  {"kevent","0x80,0x16b,6,"},
  {"0x80.0x154","lstat64"},
  {"0x80.0x153","fstat64"},
  {"auditctl","0x80,0x167,1,"},
  {"0x80.0x152","stat64"},
  {"0x80.0x151","sendfile"},
  {"auditon","0x80,0x15f,3,"},
  {"workq_kernreturn","0x80,0x170,4,"},
  {"0x80.0x150","proc_info"},
  {"accept","0x80,0x1e,3,"},
  {"openat_nocancel","0x80,0x1d0,4,"},
  {"umask","0x80,0x3c,1,"},
  {"sigreturn","0x80,0xb8,2,"},
  {"semop","0x80,0x100,3,"},
  {"posix_spawn","0x80,0xf4,5,"},
  {"0x80.0x159","statfs64"},
  {"0x80.0x158","getdirentries64"},
  {"sigsuspend_nocancel","0x80,0x19a,1,"},
  {"guarded_writev_np","0x80,0x1e7,4,"},
  {"change_fdguard_np","0x80,0x1bc,6,"},
  {"getsgroups","0x80,0x120,2,"},
  {"__mac_get_link","0x80,0x180,2,"},
  {"socket","0x80,0x61,3,"},
  {"shmat","0x80,0x106,3,"},
  {"fsetattrlist","0x80,0xe5,5,"},
  {"0x80.0x182","__mac_get_proc"},
  {"0x80.0x183","__mac_set_proc"},
  {"0x80.0x180","__mac_get_link"},
  {"0x80.0x181","__mac_set_link"},
  {"0x80.0x186","__mac_get_pid"},
  {"sendfile","0x80,0x151,6,"},
  {"0x80.0x184","__mac_get_fd"},
  {"0x80.0x185","__mac_set_fd"},
  {"kdebug_trace64","0x80,0xb3,5,"},
  {"0x80.0x15f","auditon"},
  {"0x80.0x15e","audit"},
  {"0x80.0x15d","__pthread_fchdir"},
  {"0x80.0x15c","__pthread_chdir"},
  {"0x80.0x15b","getfsstat64"},
  {"link","0x80,0x9,2,"},
  {"0x80.0x15a","fstatfs64"},
  {"pipe","0x80,0x2a,0,"},
  {"semaphore_timedwait_trap","0x80,0x26,3,"},
  {"gettid","0x80,0x11e,2,"},
  {"task_name_for_pid","0x80,0x2c,3,"},
  {"msync","0x80,0x41,3,"},
  {"truncate","0x80,0xc8,2,"},
  {"sigpending","0x80,0x34,1,"},
  {"bsdthread_terminate","0x80,0x169,4,"},
  {"waitid","0x80,0xad,4,"},
  {"readv_nocancel","0x80,0x19b,3,"},
  {"getdtablesize","0x80,0x59,0,"},
  {"semaphore_wait_signal_trap","0x80,0x25,2,"},
  {"lchown","0x80,0x16c,3,"},
  {"kdebug_trace_string","0x80,0xb2,3,"},
  {"aio_suspend","0x80,0x13b,3,"},
  {"_kernelrpc_mach_port_allocate_trap","0x80,0x10,3,"},
  {"mach_timebase_info_trap","0x80,0x59,1,"},
  {"stack_snapshot_with_config","0x80,0x1eb,3,"},
  {"write","0x80,0x4,3,"},
  {"setrlimit","0x80,0xc3,2,"},
  {"psynch_cvsignal","0x80,0x130,8,"},
  {"chmod","0x80,0xf,2,"},
  {"fmount","0x80,0x20e,4,"},
  {"__mac_syscall","0x80,0x17d,3,"},
  {"chflags","0x80,0x22,2,"},
  {"fcntl_nocancel","0x80,0x196,3,"},
  {"fstatfs","0x80,0x9e,2,"},
  {"__pthread_fchdir","0x80,0x15d,1,"},
  {"getdirentries","0x80,0xc4,4,"},
  {"setwgroups","0x80,0x121,2,"},
  {"shm_open","0x80,0x10a,3,"},
  {"shmget","0x80,0x109,3,"},
  {"psynch_cvbroad","0x80,0x12f,7,"},
  {"shmdt","0x80,0x108,1,"},
  {"listxattr","0x80,0xf0,4,"},
  {"exchangedata","0x80,0xdf,3,"},
  {"__semwait_signal_nocancel","0x80,0x1a7,6,"},
  {"pathconf","0x80,0xbf,2,"},
  {"0x80.0x199","connect_nocancel"},
  {"0x80.0x198","fsync_nocancel"},
  {"getppid","0x80,0x27,0,"},
  {"chdir","0x80,0xc,1,"},
  {"getgroups","0x80,0x4f,2,"},
  {"symlink","0x80,0x39,2,"},
  {"0x80.0x193","recvfrom_nocancel"},
  {"0x80.0x192","sendmsg_nocancel"},
  {"0x80.0x191","recvmsg_nocancel"},
  {"0x80.0x190","wait4_nocancel"},
  {"0x80.0x197","select_nocancel"},
  {"shmctl","0x80,0x107,3,"},
  {"0x80.0x196","fcntl_nocancel"},
  {"msync_nocancel","0x80,0x195,3,"},
  {"0x80.0x195","msync_nocancel"},
  {"mkdir_extended","0x80,0x124,5,"},
  {"0x80.0x194","accept_nocancel"},
  {"aio_error","0x80,0x13d,1,"},
  {"stat","0x80,0xbc,2,"},
  {"_kernelrpc_mach_vm_deallocate_trap","0x80,0xc,3,"},
  {"fchflags","0x80,0x23,2,"},
  {"shared_region_check_np","0x80,0x126,1,"},
  {"sem_unlink","0x80,0x10e,1,"},
  {"getrlimit","0x80,0xc2,2,"},
  {"_","0x80"},
  {"ffsctl","0x80,0xf5,4,"},
  {"psynch_rw_rdlock","0x80,0x132,5,"},
  {"semaphore_timedwait_signal_trap","0x80,0x27,4,"},
  {"open_nocancel","0x80,0x18e,3,"},
  {"memorystatus_get_level","0x80,0x1c5,1,"},
  {"sem_wait_nocancel","0x80,0x1a4,1,"},
  {"linkat","0x80,0x1d7,5,"},
  {"0x80.0x20a","necp_session_open"},
  {"0x80.0x20c","setattrlistat"},
  {"mkfifo","0x80,0x84,2,"},
  {"0x80.0x20b","necp_session_action"},
  {"chmod_extended","0x80,0x11a,5,"},
  {"lstat64","0x80,0x154,2,"},
  {"0x80.0x20e","fmount"},
  {"0x80.0x20d","net_qos_guideline"},
  {"0x80.0x20f","ntp_adjtime"},
  {"__mac_get_fd","0x80,0x184,2,"},
  {"delete","0x80,0xe2,1,"},
  {"open_dprotected_np","0x80,0xd8,5,"},
  {"getattrlist","0x80,0xdc,5,"},
  {"csops_audittoken","0x80,0xaa,5,"},
  {"0x80.0x19c","writev_nocancel"},
  {"0x80.0x19b","readv_nocancel"},
  {"0x80.0x19a","sigsuspend_nocancel"},
  {"getpeername","0x80,0x1f,3,"},
  {"audit_session_self","0x80,0x1ac,0,"},
  {"0x80.0x19f","pwrite_nocancel"},
  {"0x80.0x19e","pread_nocancel"},
  {"0x80.0x19d","sendto_nocancel"},
  {"usrctl","0x80,0x1bd,1,"},
  {"fstat64","0x80,0x153,2,"},
  {"__pthread_chdir","0x80,0x15c,1,"},
  {"getaudit_addr","0x80,0x165,2,"},
  {"semaphore_signal_trap","0x80,0x21,1,"},
  {"setsockopt","0x80,0x69,5,"},
  {"audit_session_port","0x80,0x1b0,2,"},
  {"os_fault_with_payload","0x80,0x211,6,"},
  {"fcntl","0x80,0x5c,3,"},
  {"swapon","0x80,0x55,0,"},
  {"open_extended","0x80,0x115,6,"},
  {"fstat","0x80,0xbd,2,"},
  {"psynch_cvwait","0x80,0x131,8,"},
  {"getdirentries64","0x80,0x158,4,"},
  {"fs_snapshot","0x80,0x206,6,"},
  {"access","0x80,0x21,2,"},
  {"sendmsg_nocancel","0x80,0x192,3,"},
  {"msgsnd","0x80,0x104,4,"},
  {"unlinkat","0x80,0x1d8,3,"},
  {"getegid","0x80,0x2b,0,"},
  {"writev_nocancel","0x80,0x19c,3,"},
  {"socket_delegate","0x80,0x1c2,4,"},
  {"geteuid","0x80,0x19,0,"},
  {"utimes","0x80,0x8a,2,"},
  {"symlinkat","0x80,0x1da,3,"},
  {"__sigwait","0x80,0x14a,2,"},
  {"recvmsg_x","0x80,0x1e0,4,"},
  {"psynch_mutexwait","0x80,0x12d,5,"},
  {"clock_sleep_trap","0x80,0x3e,5,"},
  {"mlock","0x80,0xcb,2,"},
  {"iokit_user_client_trap","0x80,0x64,8,"},
  {"__mac_execve","0x80,0x17c,4,"},
  {"0x80.0x203","ulock_wait"},
  {"psynch_rw_unlock2","0x80,0x135,5,"},
  {"0x80.0x205","fclonefileat"},
  {"0x80.0x204","ulock_wake"},
  {"0x80.0x206","fs_snapshot"},
  {"iopolicysys","0x80,0x142,2,"},
  {"0x80.0x209","abort_with_payload"},
  {"__mac_get_file","0x80,0x17e,2,"},
  {"0x80.0x208","terminate_with_payload"},
  {"getitimer","0x80,0x56,2,"},
  {"dup2","0x80,0x5a,2,"},
  {"pwrite","0x80,0x9a,4,"},
  {"aio_write","0x80,0x13f,1,"},
  {"msgrcv_nocancel","0x80,0x1a3,5,"},
  {"removexattr","0x80,0xee,3,"},
  {"readlinkat","0x80,0x1d9,4,"},
  {"vm_pressure_monitor","0x80,0x128,3,"},
  {"poll_nocancel","0x80,0x1a1,3,"},
  {"0x80.0x210","ntp_gettime"},
  {"connectx","0x80,0x1bf,8,"},
  {"mkfifo_extended","0x80,0x123,5,"},
  {"0x80.0x211","os_fault_with_payload"},
  {"lseek","0x80,0xc7,3,"},
  {"__old_semwait_signal_nocancel","0x80,0x173,5,"},
  {"getauid","0x80,0x161,1,"},
  {"setattrlistat","0x80,0x20c,6,"},
  {"mach_reply_port","0x80,0x1a,0,"},
  {"guarded_kqueue_np","0x80,0x1bb,2,"},
  {"renameatx_np","0x80,0x1e8,5,"},
  {"waitevent","0x80,0xe8,2,"},
  {"gethostuuid","0x80,0x8e,3,"},
  {"sfi_pidctl","0x80,0x1c9,4,"},
  {"close_nocancel","0x80,0x18f,1,"},
  {"getpid","0x80,0x14,0,"},
  {"sem_post","0x80,0x111,1,"},
  {"mkdirat","0x80,0x1db,3,"},
  {"__mac_set_proc","0x80,0x183,1,"},
  {"guarded_write_np","0x80,0x1e5,4,"},
  {"_kernelrpc_mach_port_destroy_trap","0x80,0x11,2,"},
  {"psynch_rw_downgrade","0x80,0x12b,5,"},
  {"settimeofday","0x80,0x7a,2,"},
  {"__mac_getfsstat","0x80,0x1aa,5,"},
  {"stat_extended","0x80,0x117,4,"},
  {"workq_open","0x80,0x16f,0,"},
  {"proc_info","0x80,0x150,6,"},
  {"fremovexattr","0x80,0xef,3,"},
  {"bind","0x80,0x68,3,"},
  {"aio_cancel","0x80,0x13c,2,"},
  {"pwrite_nocancel","0x80,0x19f,4,"},
  {"minherit","0x80,0xfa,3,"},
  {"fstatfs64","0x80,0x15a,2,"},
  {"readv","0x80,0x78,3,"},
  {"system_override","0x80,0x1c6,2,"},
  {"lstat","0x80,0xbe,2,"},
  {"__disable_threadsignal","0x80,0x14b,1,"},
  {"_kernelrpc_mach_vm_protect_trap","0x80,0xe,5,"},
  {"sysctl","0x80,0xca,6,"},
  {"read_nocancel","0x80,0x18c,3,"},
  {"psynch_rw_yieldwrlock","0x80,0x12a,5,"},
  {"getentropy","0x80,0x1f4,2,"},
  {"persona","0x80,0x1ee,5,"},
  {"getgid","0x80,0x2f,0,"},
  {"recvfrom","0x80,0x1d,6,"},
  {"flock","0x80,0x83,2,"},
  {"getuid","0x80,0x18,0,"},
  {"reboot","0x80,0x37,2,"},
  {"getfsstat64","0x80,0x15b,3,"},
  {"fchownat","0x80,0x1d4,5,"},
  {"semctl","0x80,0xfe,4,"},
  {"fstat_extended","0x80,0x119,4,"},
  {"guarded_close_np","0x80,0x1ba,2,"},
  {"openat","0x80,0x1cf,4,"},
  {"read","0x80,0x3,3,"},
  {"copyfile","0x80,0xe3,4,"},
  {"mk_timer_arm_trap","0x80,0x5d,2,"},
  {"fsetxattr","0x80,0xed,6,"},
  {"semaphore_signal_thread_trap","0x80,0x23,2,"},
  {"waitid_nocancel","0x80,0x1a0,4,"},
  {"shmsys","0x80,0xfd,4,"},
  {"pselect_nocancel","0x80,0x18b,6,"},
  {"netagent_trigger","0x80,0x1ea,2,"},
  {"initgroups","0x80,0xf3,3,"},
  {"mach_wait_until_trap","0x80,0x5a,1,"},
  {"mk_timer_cancel_trap","0x80,0x5e,2,"},
  {"grab_pgo_data","0x80,0x1ed,4,"},
  {"mach_voucher_extract_attr_recipe_trap","0x80,0x48,4,"},
  {"vfs_purge","0x80,0x1c7,0,"},
  {"pread","0x80,0x99,4,"},
  {"0x80.0x2a","_kernelrpc_mach_port_unguard_trap"},
  {"__semwait_signal","0x80,0x14e,6,"},
  {"0x80.0x2c","task_name_for_pid"},
  {"0x80.0x2b","mach_generate_activity_id"},
  {"ntp_gettime","0x80,0x210,1,"},
  {"0x80.0x2e","pid_for_task"},
  {"socketpair","0x80,0x87,4,"},
  {"pid_resume","0x80,0x1b2,1,"},
  {"0x80.0x2d","task_for_pid"},
  {"0x80.0x2f","getgid"},
  {"ptrace","0x80,0x1a,4,"},
  {"dup","0x80,0x29,1,"},
  {"mkdir","0x80,0x88,2,"},
  {"modwatch","0x80,0xe9,2,"},
  {"fstat64_extended","0x80,0x157,4,"},
  {"abort_with_payload","0x80,0x209,6,"},
  {"semsys","0x80,0xfb,5,"},
  {"writev","0x80,0x79,3,"},
  {"0x80.0x1ba","guarded_close_np"},
  {"0x80.0x1bb","guarded_kqueue_np"},
  {"net_qos_guideline","0x80,0x20d,2,"},
  {"0x80.0x1bc","change_fdguard_np"},
  {"thread_self_trap","0x80,0x1b,0,"},
  {"msgsnd_nocancel","0x80,0x1a2,4,"},
  {"0x80.0x1bd","usrctl"},
  {"0x80.0x1be","proc_rlimit_control"},
  {"0x80.0x1bf","connectx"},
  {"__sigwait_nocancel","0x80,0x1a6,2,"},
  {"thread_selfcounts","0x80,0xba,3,"},
  {"mk_timer_destroy_trap","0x80,0x5c,1,"},
  {"close","0x80,0x6,1,"},
  {"statfs","0x80,0x9d,2,"},
  {"0x80.0x3a","pfz_exit"},
  {"0x80.0x3b","swtch_pri"},
  {"__old_semwait_signal","0x80,0x172,5,"},
  {"0x80.0x3c","swtch"},
  {"mach_msg_trap","0x80,0x1f,7,"},
  {"0x80.0x3d","thread_switch"},
  {"peeloff","0x80,0x1c1,2,"},
  {"proc_rlimit_control","0x80,0x1be,3,"},
  {"0x80.0x3e","clock_sleep_trap"},
  {"renameat","0x80,0x1d1,4,"},
  {"ulock_wake","0x80,0x204,3,"},
  {"__mac_get_proc","0x80,0x182,1,"},
  {"0x80.0x21","semaphore_signal_trap"},
  {"madvise","0x80,0x4b,3,"},
  {"0x80.0x20","mach_msg_overwrite_trap"},
  {"0x80.0x23","semaphore_signal_thread_trap"},
  {"0x80.0x22","semaphore_signal_all_trap"},
  {"0x80.0x25","semaphore_wait_signal_trap"},
  {"aio_fsync","0x80,0x139,2,"},
  {"0x80.0x24","semaphore_wait_trap"},
  {"getpgrp","0x80,0x51,0,"},
  {"0x80.0x27","semaphore_timedwait_signal_trap"},
  {"0x80.0x26","semaphore_timedwait_trap"},
  {"0x80.0x29","_kernelrpc_mach_port_guard_trap"},
  {"mach_msg_overwrite_trap","0x80,0x20,8,"},
  {"mach_generate_activity_id","0x80,0x2b,3,"},
  {"0x80.0x1b0","audit_session_port"},
  {"0x80.0x1b1","pid_suspend"},
  {"0x80.0x1b2","pid_resume"},
  {"aio_suspend_nocancel","0x80,0x1a5,3,"},
  {"0x80.0x1b3","pid_hibernate"},
  {"pid_shutdown_sockets","0x80,0x1b4,2,"},
  {"0x80.0x1b4","pid_shutdown_sockets"},
  {"0x80.0xc","_kernelrpc_mach_vm_deallocate_trap"},
  {"0x80.0x1b6","shared_region_map_and_slide_np"},
  {"0x80.0x1b7","kas_info"},
  {"0x80.0xb","_kernelrpc_mach_vm_purgable_control_trap"},
  {"0x80.0xa","_kernelrpc_mach_vm_allocate_trap"},
  {"0x80.0x1b8","memorystatus_control"},
  {"_kernelrpc_mach_port_unguard_trap","0x80,0x2a,3,"},
  {"poll","0x80,0xe6,3,"},
  {"process_policy","0x80,0x143,7,"},
  {"0x80.0x1b9","guarded_open_np"},
  {"_kernelrpc_mach_port_construct_trap","0x80,0x18,4,"},
  {"0x80.0xf","_kernelrpc_mach_vm_map_trap"},
  {"0x80.0xe","_kernelrpc_mach_vm_protect_trap"},
  {"0x80.0xd","fchdir"},
  {"semget","0x80,0xff,3,"},
  {"fsync_nocancel","0x80,0x198,1,"},
  {"0x80.0x30","macx_swapon"},
  {"0x80.0x31","macx_swapoff"},
  {"getrusage","0x80,0x75,2,"},
  {"0x80.0x32","thread_get_special_reply_port"},
  {"pselect","0x80,0x18a,6,"},
  {"microstackshot","0x80,0x1ec,3,"},
  {"0x80.0x33","macx_triggers"},
  {"psynch_rw_longrdlock","0x80,0x129,5,"},
  {"0x80.0x34","macx_backing_store_suspend"},
  {"0x80.0x35","macx_backing_store_recovery"},
  {"0x80.0x36","ioctl"},
  {"0x80.0x37","reboot"},
  {"fclonefileat","0x80,0x205,4,"},
  {"0x80.0x38","revoke"},
  {"0x80.0x39","symlink"},
  {"pread_nocancel","0x80,0x19e,4,"},
  {"thread_get_special_reply_port","0x80,0x32,0,"},
  {"settid_with_pid","0x80,0x137,2,"},
  {"_kernelrpc_mach_vm_purgable_control_trap","0x80,0xb,4,"},
  {"sem_wait","0x80,0x10f,1,"},
  {"necp_open","0x80,0x1f5,1,"},
  {"flistxattr","0x80,0xf1,4,"},
  {"setlogin","0x80,0x32,1,"},
  {"necp_client_action","0x80,0x1f6,6,"},
  {"setattrlist","0x80,0xdd,5,"},
  {"__mac_set_fd","0x80,0x185,2,"},
  {"chown","0x80,0x10,3,"},
  {"mlockall","0x80,0x144,1,"},
  {"searchfs","0x80,0xe1,6,"},
  {"kill","0x80,0x25,3,"},
  {"__pthread_sigmask","0x80,0x149,3,"},
  {"task_for_pid","0x80,0x2d,3,"},
  {"recvmsg_nocancel","0x80,0x191,3,"},
  {"host_create_mach_voucher_trap","0x80,0x46,4,"},
  {"sem_open","0x80,0x10c,4,"},
  {"watchevent","0x80,0xe7,2,"},
  {"task_self_trap","0x80,0x1c,0,"},
  {"sysctlbyname","0x80,0x112,6,"},
  {"rmdir","0x80,0x89,1,"},
  {"0x80.0x6f","sigsuspend"},
  {"settid","0x80,0x11d,2,"},
  {"0x80.0x6a","listen"},
  {"getxattr","0x80,0xea,6,"},
  {"rename","0x80,0x80,2,"},
  {"0x80.0x12","_kernelrpc_mach_port_deallocate_trap"},
  {"0x80.0x13","_kernelrpc_mach_port_mod_refs_trap"},
  {"0x80.0x10","_kernelrpc_mach_port_allocate_trap"},
  {"mount","0x80,0xa7,4,"},
  {"0x80.0x11","_kernelrpc_mach_port_destroy_trap"},
  {"0x80.0x3","read"},
  {"0x80.0x16","_kernelrpc_mach_port_insert_member_trap"},
  {"getfh","0x80,0xa1,2,"},
  {"0x80.0x2","fork"},
  {"0x80.0x17","_kernelrpc_mach_port_extract_member_trap"},
  {"0x80.0x1","exit"},
  {"0x80.0x14","_kernelrpc_mach_port_move_member_trap"},
  {"gettimeofday","0x80,0x74,3,"},
  {"0x80.0x15","_kernelrpc_mach_port_insert_right_trap"},
  {"0x80.0x7","wait4"},
  {"0x80.0x6","close"},
  {"0x80.0x5","open"},
  {"0x80.0x18","_kernelrpc_mach_port_construct_trap"},
  {"nfssvc","0x80,0x9b,2,"},
  {"0x80.0x4","write"},
  {"0x80.0x19","_kernelrpc_mach_port_destruct_trap"},
  {"_kernelrpc_mach_port_destruct_trap","0x80,0x19,4,"},
  {"0x80.0x9","link"},
  {"0x80.0x1c1","peeloff"},
  {"0x80.0x1c0","disconnectx"},
  {"0x80.0x1c3","telemetry"},
  {"sendto","0x80,0x85,6,"},
  {"0x80.0x7e","setreuid"},
  {"0x80.0x1c2","socket_delegate"},
  {"0x80.0x7f","setregid"},
  {"0x80.0x1c5","memorystatus_get_level"},
  {"0x80.0x1c4","proc_uuid_policy"},
  {"0x80.0x1c7","vfs_purge"},
  {"0x80.0x7a","settimeofday"},
  {"0x80.0x1c6","system_override"},
  {"0x80.0x7b","fchown"},
  {"0x80.0x1c9","sfi_pidctl"},
  {"guarded_open_np","0x80,0x1b9,5,"},
  {"0x80.0x7c","fchmod"},
  {"0x80.0x1c8","sfi_ctl"},
  {"coalition","0x80,0x1ca,3,"},
  {"_kernelrpc_mach_vm_allocate_trap","0x80,0xa,4,"},
  {"_kernelrpc_mach_port_insert_right_trap","0x80,0x15,4,"},
  {"kqueue","0x80,0x16a,0,"},
  {"sync","0x80,0x24,0,"},
  {"0x80.0x1ac","audit_session_self"},
  {"futimes","0x80,0x8b,2,"},
  {"0x80.0x1ab","fsgetpath"},
  {"necp_session_open","0x80,0x20a,1,"},
  {"ntp_adjtime","0x80,0x20f,1,"},
  {"0x80.0x1aa","__mac_getfsstat"},
  {"0x80.0x64","iokit_user_client_trap"},
  {"mincore","0x80,0x4e,3,"},
  {"0x80.0x1af","fileport_makefd"},
  {"munlock","0x80,0xcc,2,"},
  {"aio_read","0x80,0x13e,1,"},
  {"fileport_makefd","0x80,0x1af,1,"},
  {"0x80.0x61","socket"},
  {"0x80.0x1ae","fileport_makeport"},
  {"telemetry","0x80,0x1c3,6,"},
  {"mknod","0x80,0xe,3,"},
  {"0x80.0x60","setpriority"},
  {"0x80.0x1ad","audit_session_join"},
  {"host_self_trap","0x80,0x1d,0,"},
  {"nfsclnt","0x80,0xf7,2,"},
  {"0x80.0x62","connect"},
  {"audit_session_join","0x80,0x1ad,1,"},
  {"0x80.0x69","setsockopt"},
  {"0x80.0x68","bind"},
  {"0x80.0x1f4","getentropy"},
  {"issetugid","0x80,0x147,0,"},
  {"__pthread_markcancel","0x80,0x14c,1,"},
  {"ftruncate","0x80,0xc9,2,"},
  {"0x80.0x1f5","necp_open"},
  {"0x80.0x1f6","necp_client_action"},
  {"proc_uuid_policy","0x80,0x1c4,4,"},
  {"0x80.0x10b","shm_unlink"},
  {"select_nocancel","0x80,0x197,5,"},
  {"0x80.0x10c","sem_open"},
  {"0x80.0xb1","kdebug_typefilter"},
  {"0x80.0x1f3","work_interval_ctl"},
  {"0x80.0x10a","shm_open"},
  {"0x80.0xb3","kdebug_trace64"},
  {"0x80.0x10f","sem_wait"},
  {"ledger","0x80,0x175,4,"},
  {"0x80.0xb2","kdebug_trace_string"},
  {"0x80.0xb5","setgid"},
  {"0x80.0x10d","sem_close"},
  {"0x80.0xb4","kdebug_trace"},
  {"0x80.0x10e","sem_unlink"},
  {"0x80.0xb7","seteuid"},
  {"open","0x80,0x5,3,"},
  {"0x80.0xb6","setegid"},
  {"0x80.0xb8","sigreturn"},
  {"0x80.0x74","gettimeofday"},
  {"setregid","0x80,0x7f,2,"},
  {"0x80.0x75","getrusage"},
  {"0x80.0x76","getsockopt"},
  {"0x80.0x120","getsgroups"},
  {"sem_trywait","0x80,0x110,1,"},
  {"0x80.0x121","setwgroups"},
  {"pid_suspend","0x80,0x1b1,1,"},
  {"fchmod_extended","0x80,0x11b,5,"},
  {"0x80.0x122","getwgroups"},
  {"0x80.0x123","mkfifo_extended"},
  {"setsid","0x80,0x93,0,"},
  {"0x80.0x124","mkdir_extended"},
  {"vfork","0x80,0x42,0,"},
  {"mremap_encrypted","0x80,0x1e9,5,"},
  {"access_extended","0x80,0x11c,4,"},
  {"0x80.0xaa","csops_audittoken"},
  {"0x80.0x125","identitysvc"},
  {"0x80.0x126","shared_region_check_np"},
  {"guarded_open_dprotected_np","0x80,0x1e4,7,"},
  {"0x80.0xad","waitid"},
  {"0x80.0x128","vm_pressure_monitor"},
  {"getsid","0x80,0x136,1,"},
  {"munmap","0x80,0x49,2,"},
  {"0x80.0x129","psynch_rw_longrdlock"},
  {"0x80.0x78","readv"},
  {"0x80.0x79","writev"},
  {"readlink","0x80,0x3a,3,"},
  {"__mac_set_link","0x80,0x181,2,"},
  {"0x80.0x1a3","msgrcv_nocancel"},
  {"pid_for_task","0x80,0x2e,2,"},
  {"__pthread_kill","0x80,0x148,2,"},
  {"0x80.0x1a2","msgsnd_nocancel"},
  {"_kernelrpc_mach_port_extract_member_trap","0x80,0x17,3,"},
  {"0x80.0x1b","thread_self_trap"},
  {"0x80.0x1a1","poll_nocancel"},
  {"mk_timer_create_trap","0x80,0x5b,0,"},
  {"0x80.0x1c","task_self_trap"},
  {"0x80.0x1a0","waitid_nocancel"},
  {"0x80.0x1a7","__semwait_signal_nocancel"},
  {"ulock_wait","0x80,0x203,4,"},
  {"0x80.0x13a","aio_return"},
  {"__mac_get_pid","0x80,0x186,2,"},
  {"0x80.0x1a","mach_reply_port"},
  {"0x80.0x1a6","__sigwait_nocancel"},
  {"0x80.0x1f","mach_msg_trap"},
  {"0x80.0x1a5","aio_suspend_nocancel"},
  {"0x80.0xc0","fpathconf"},
  {"0x80.0x13c","aio_cancel"},
  {"0x80.0x1a4","sem_wait_nocancel"},
  {"0x80.0x13b","aio_suspend"},
  {"kdebug_trace","0x80,0xb4,5,"},
  {"0x80.0x1d","host_self_trap"},
  {"fhopen","0x80,0xf8,2,"},
  {"0x80.0xc2","getrlimit"},
  {"0x80.0x13e","aio_read"},
  {"0x80.0x1e","accept"},
  {"coalition_info","0x80,0x1cb,4,"},
  {"0x80.0xc3","setrlimit"},
  {"0x80.0x13d","aio_error"},
  {"0x80.0x1a9","__mac_get_mount"},
  {"0x80.0xc4","getdirentries"},
  {"0x80.0x1a8","__mac_mount"},
  {"0x80.0xc5","mmap"},
  {"0x80.0x13f","aio_write"},
  {"guarded_pwrite_np","0x80,0x1e6,5,"},
  {"0x80.0xc7","lseek"},
  {"0x80.0xc8","truncate"},
  {"0x80.0xc9","ftruncate"},
  {"0x80.0x1ca","coalition"},
  {"0x80.0x1cc","necp_match_policy"},
  {"accept_nocancel","0x80,0x194,3,"},
  {"0x80.0x1cb","coalition_info"},
  {"0x80.0x46","host_create_mach_voucher_trap"},
  {"0x80.0x1ce","clonefileat"},
  {"0x80.0x1cd","getattrlistbulk"},
  {"0x80.0xba","thread_selfcounts"},
  {"0x80.0x42","vfork"},
  {"0x80.0x1cf","openat"},
  {"0x80.0x41","msync"},
  {"thread_switch","0x80,0x3d,3,"},
  {"0x80.0xbc","stat"},
  {"bsdthread_create","0x80,0x168,5,"},
  {"0x80.0xbb","fdatasync"},
  {"__mac_mount","0x80,0x1a8,5,"},
  {"0x80.0xbe","lstat"},
  {"stat64","0x80,0x152,2,"},
  {"0x80.0xbd","fstat"},
  {"undelete","0x80,0xcd,1,"},
  {"kas_info","0x80,0x1b7,3,"},
  {"0x80.0xbf","pathconf"},
  {"identitysvc","0x80,0x125,2,"},
  {"0x80.0x49","munmap"},
  {"0x80.0x1d6","fstatat64"},
  {"0x80.0x1d7","linkat"},
  {"0x80.0x48","mach_voucher_extract_attr_recipe_trap"},
  {"0x80.0x1d4","fchownat"},
  {"getsockname","0x80,0x20,3,"},
  {"0x80.0x1d5","fstatat"},
  {"0x80.0x1d2","faccessat"},
  {"0x80.0x1d3","fchmodat"},
  {"fgetxattr","0x80,0xeb,6,"},
  {"0x80.0x12a","psynch_rw_yieldwrlock"},
  {"0x80.0x1d0","openat_nocancel"},
  {"0x80.0x12b","psynch_rw_downgrade"},
  {"0x80.0x1d1","renameat"},
  {"0x80.0x12c","psynch_rw_upgrade"},
  {"sendmsg_x","0x80,0x1e1,4,"},
  {"fchmod","0x80,0x7c,2,"},
  {"0x80.0x12d","psynch_mutexwait"},
  {"0x80.0x12e","psynch_mutexdrop"},
  {"setgroups","0x80,0x50,2,"},
  {"0x80.0x12f","psynch_cvbroad"},
  {"sigprocmask","0x80,0x30,3,"},
  {"faccessat","0x80,0x1d2,4,"},
  {"0x80.0x1d8","unlinkat"},
  {"getfsstat","0x80,0x12,3,"},
  {"0x80.0x1d9","readlinkat"},
  {"0x80.0x56","getitimer"},
  {"execve","0x80,0x3b,3,"},
  {"0x80.0x102","msgctl"},
  {"0x80.0x55","swapon"},
  {"0x80.0x103","msgget"},
  {"0x80.0x52","setpgid"},
  {"0x80.0x100","semop"},
  {"0x80.0x53","setitimer"},
  {"setauid","0x80,0x162,1,"},
  {"0x80.0xca","sysctl"},
  {"0x80.0x50","setgroups"},
  {"0x80.0xcb","mlock"},
  {"0x80.0x106","shmat"},
  {"0x80.0x51","getpgrp"},
  {"0x80.0xcc","munlock"},
  {"0x80.0x107","shmctl"},
  {"psynch_rw_unlock","0x80,0x134,5,"},
  {"0x80.0xcd","undelete"},
  {"0x80.0x104","msgsnd"},
  {"0x80.0x105","msgrcv"},
  {"thread_selfusage","0x80,0x1e2,0,"},
  {"0x80.0x108","shmdt"},
  {"connect","0x80,0x62,3,"},
  {"fdatasync","0x80,0xbb,1,"},
  {"0x80.0x109","shmget"},
  {"kevent_id","0x80,0x177,8,"},
  {"0x80.0x59","mach_timebase_info_trap"},
  {"msgrcv","0x80,0x105,5,"},
  {"terminate_with_payload","0x80,0x208,7,"},
  {"clonefileat","0x80,0x1ce,5,"},
  {"lio_listio","0x80,0x140,4,"},
  {"semaphore_wait_trap","0x80,0x24,1,"},
  {"0x80.0xa1","getfh"},
  {"getdirentriesattr","0x80,0xde,8,"},
  {"macx_backing_store_recovery","0x80,0x35,1,"},
  {"__pthread_canceled","0x80,0x14d,1,"},
  {"0x80.0xa7","mount"},
  {"csrctl","0x80,0x1e3,3,"},
  {"0x80.0xa5","quotactl"},
  {"_kernelrpc_mach_port_guard_trap","0x80,0x29,4,"},
  {"0x80.0xa9","csops"},
  {"0x80.0x1ee","persona"},
  {"0x80.0x1ed","grab_pgo_data"},
  {"0x80.0x1ec","microstackshot"},
  {"0x80.0x131","psynch_cvwait"},
  {"0x80.0x1eb","stack_snapshot_with_config"},
  {"0x80.0x130","psynch_cvsignal"},
  {"0x80.0x1ea","netagent_trigger"},
  {"0x80.0x133","psynch_rw_wrlock"},
  {"wait4_nocancel","0x80,0x190,4,"},
  {"0x80.0xdf","exchangedata"},
  {"0x80.0x132","psynch_rw_rdlock"},
  {"0x80.0xde","getdirentriesattr"},
  {"0x80.0x135","psynch_rw_unlock2"},
  {"mmap","0x80,0xc5,6,"},
  {"0x80.0xdd","setattrlist"},
  {"0x80.0x134","psynch_rw_unlock"},
  {"memorystatus_control","0x80,0x1b8,5,"},
  {"0x80.0xdc","getattrlist"},
  {"0x80.0x137","settid_with_pid"},
  {"0x80.0x136","getsid"},
  {"sigsuspend","0x80,0x6f,1,"},
  {"shm_unlink","0x80,0x10b,1,"},
  {"0x80.0x139","aio_fsync"},
  {"getattrlistbulk","0x80,0x1cd,5,"},
  {"0x80.0x138","psynch_cvclrprepost"},
  {"getwgroups","0x80,0x122,2,"},
  {"getlogin","0x80,0x31,2,"},
  {"fstatat","0x80,0x1d5,4,"},
  {"0x80.0x4f","getgroups"},
  {"0x80.0x4e","mincore"},
  {"kevent64","0x80,0x171,7,"},
  {"necp_match_policy","0x80,0x1cc,3,"},
  {"0x80.0xf5","ffsctl"},
  {"0x80.0x14d","__pthread_canceled"},
  {"0x80.0x4b","madvise"},
  {"0x80.0xf4","posix_spawn"},
  {"0x80.0x14e","__semwait_signal"},
  {"seteuid","0x80,0xb7,1,"},
  {"0x80.0x4a","mprotect"},
  {"0x80.0xf7","nfsclnt"},
  {"0x80.0x14b","__disable_threadsignal"},
  {"0x80.0x14c","__pthread_markcancel"},
  {"0x80.0xf1","flistxattr"},
  {"0x80.0xf0","listxattr"},
  {"0x80.0x14a","__sigwait"},
  {"0x80.0xf3","initgroups"},
  {"0x80.0xf2","fsctl"},
  {"0x80.0x1df","openbyid_np"},
  {"psynch_mutexdrop","0x80,0x12e,5,"},
  {"sem_close","0x80,0x10d,1,"},
  {"0x80.0x1dd","proc_trace_log"},
  {"0x80.0x1de","bsdthread_ctl"},
  {"0x80.0xf8","fhopen"},
  {"0x80.0x1db","mkdirat"},
  {"lstat_extended","0x80,0x118,4,"},
  {"0x80.0x1dc","getattrlistat"},
  {"0x80.0x165","getaudit_addr"},
  {"revoke","0x80,0x38,1,"},
  {"shared_region_map_and_slide_np","0x80,0x1b6,6,"},
  {"0x80.0xef","fremovexattr"},
  {"0x80.0x166","setaudit_addr"},
  {"0x80.0x1da","symlinkat"},
  {"0x80.0x167","auditctl"},
  {"0x80.0xed","fsetxattr"},
  {"0x80.0xee","removexattr"},
  {"0x80.0x161","getauid"},
  {"0x80.0xeb","fgetxattr"},
  {"0x80.0x162","setauid"},
  {"0x80.0xec","setxattr"},
  {"unlink","0x80,0xa,1,"},
  {"sigaltstack","0x80,0x35,2,"},
  {"0x80.0xea","getxattr"},
  {"sendto_nocancel","0x80,0x19d,6,"},
  {"openbyid_np","0x80,0x1df,3,"},
  {"0x80.0x1e7","guarded_writev_np"},
  {"0x80.0x168","bsdthread_create"},
  {"0x80.0x1e6","guarded_pwrite_np"},
  {"0x80.0x169","bsdthread_terminate"},
  {"bsdthread_register","0x80,0x16e,7,"},
  {"0x80.0x5f","mk_timer_arm_leeway_trap"},
  {"0x80.0x1e5","guarded_write_np"},
  {"0x80.0x1e4","guarded_open_dprotected_np"},
  {"0x80.0x5d","mk_timer_arm_trap"},
  {"0x80.0x1e3","csrctl"},
  {"0x80.0x17e","__mac_get_file"},
  {"getsockopt","0x80,0x76,5,"},
  {"0x80.0x1e2","thread_selfusage"},
  {"macx_swapon","0x80,0x30,4,"},
  {"0x80.0x5e","mk_timer_cancel_trap"},
  {"0x80.0x17d","__mac_syscall"},
  {"0x80.0x1e1","sendmsg_x"},
  {"0x80.0x5b","mk_timer_create_trap"},
  {"0x80.0x5c","mk_timer_destroy_trap"},
  {"0x80.0x1e0","recvmsg_x"},
  {"getpriority","0x80,0x64,2,"},
  {"0x80.0x17f","__mac_set_file"},
  {"msgctl","0x80,0x102,3,"},
  {"fork","0x80,0x2,0,"},
  {"0x80.0x5a","mach_wait_until_trap"},
  {"0x80.0x17c","__mac_execve"},
  {"recvfrom_nocancel","0x80,0x193,6,"},
  {"getattrlistat","0x80,0x1dc,6,"},
  {"macx_swapoff","0x80,0x31,2,"},
  {"0x80.0x1e9","mremap_encrypted"},
  {"0x80.0x1e8","renameatx_np"},
  {"setprivexec","0x80,0x98,1,"},
  {
# 902 "project/radare2/libr/syscall/d/darwin-x86-32.c" 3 4
  ((void *)0)
# 902 "project/radare2/libr/syscall/d/darwin-x86-32.c"
      , 
# 902 "project/radare2/libr/syscall/d/darwin-x86-32.c" 3 4
        ((void *)0)
# 902 "project/radare2/libr/syscall/d/darwin-x86-32.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_darwin_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_darwin_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 917 "project/radare2/libr/syscall/d/darwin-x86-32.c" 3 4
        ((void *)0)
# 917 "project/radare2/libr/syscall/d/darwin-x86-32.c"
            ;
}

const unsigned int gperf_darwin_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_darwin_x86_32 = {
  .name = "darwin-x86-32",
  .get = &gperf_darwin_x86_32_get,
  .hash = &gperf_darwin_x86_32_hash,
  .foreach = &gperf_darwin_x86_32_foreach
};
