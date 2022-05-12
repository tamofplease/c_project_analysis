# 0 "project/radare2/libr/syscall/d/ios-x86-32.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/ios-x86-32.c"


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
# 4 "project/radare2/libr/syscall/d/ios-x86-32.c" 2
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
# 5 "project/radare2/libr/syscall/d/ios-x86-32.c" 2
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
# 6 "project/radare2/libr/syscall/d/ios-x86-32.c" 2


# 7 "project/radare2/libr/syscall/d/ios-x86-32.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"adjtime","0x81,140,0,"},
  {"access_extended","0x81,284,0,"},
  {"revoke","0x81,56,0,"},
  {"getauid","0x81,353,0,"},
  {"setitimer","0x81,83,0,"},
  {"0x81.118","getsockopt"},
  {"fchmod","0x81,124,0,"},
  {"fchmod_extended","0x81,283,0,"},
  {"aio_suspend_nocancel","0x81,421,0,"},
  {"getfsstat","0x81,18,3,pii"},
  {"kevent64","0x81,369,7,"},
  {"0x81.111","sigsuspend"},
  {"0x81.116","gettimeofday"},
  {"0x81.117","getrusage"},
  {"getxattr","0x81,234,0,"},
  {"link","0x81,9,2,zz"},
  {"aio_write","0x81,319,0,"},
  {"issetugid","0x81,327,0,"},
  {"pid_shutdown_sockets","0x81,436,0,"},
  {"0x81.408","fsync_nocancel"},
  {"0x81.409","connect_nocancel"},
  {"__mac_set_lctx","0x81,393,0,"},
  {"recvmsg_nocancel","0x81,401,0,"},
  {"0x81.406","fcntl_nocancel"},
  {"0x81.407","select_nocancel"},
  {"0x81.404","accept_nocancel"},
  {"0x81.405","msync_nocancel"},
  {"setprivexec","0x81,152,0,"},
  {"0x81.402","sendmsg_nocancel"},
  {"0x81.403","recvfrom_nocancel"},
  {"0x81.400","wait4_nocancel"},
  {"0x81.401","recvmsg_nocancel"},
  {"sigaltstack","0x81,53,0,"},
  {"0x81.169","csops"},
  {"auditctl","0x81,359,0,"},
  {"stack_snapshot","0x81,365,0,"},
  {"0x81.165","quotactl"},
  {"fstat64","0x81,339,0,"},
  {"0x81.167","mount"},
  {"__pthread_sigmask","0x81,329,0,"},
  {"getlogin","0x81,49,0,"},
  {"fork","0x81,2,0,"},
  {"sendmsg_nocancel","0x81,402,0,"},
  {"rename","0x81,128,0,"},
  {"0x81.439","kas_info"},
  {"0x81.438","shared_region_map_and_slide_np"},
  {"getpgid","0x81,151,0,"},
  {"0x81.435","pid_hibernate"},
  {"0x81.434","pid_resume"},
  {"connect_nocancel","0x81,409,0,"},
  {"0x81.436","pid_shutdown_sockets"},
  {"0x81.431","fileport_makefd"},
  {"0x81.430","fileport_makeport"},
  {"0x81.433","pid_suspend"},
  {"shared_region_map_and_slide_np","0x81,438,0,"},
  {"0x81.432","audit_session_port"},
  {"gethostuuid","0x81,142,0,"},
  {"getsgroups","0x81,288,0,"},
  {"0x81.309","psynch_rw_unlock2"},
  {"0x81.308","psynch_rw_unlock"},
  {"0x81.170","170"},
  {"0x81.173","waitid"},
  {"0x81.280","lstat_extended"},
  {"__mac_set_fd","0x81,389,0,"},
  {"0x81.301","psynch_mutexwait"},
  {"0x81.281","fstat_extended"},
  {"0x81.300","psynch_rw_upgrade"},
  {"0x81.282","chmod_extended"},
  {"0x81.303","psynch_cvbroad"},
  {"0x81.283","fchmod_extended"},
  {"0x81.302","psynch_mutexdrop"},
  {"0x81.284","access_extended"},
  {"0x81.305","psynch_cvwait"},
  {"0x81.285","settid"},
  {"0x81.304","psynch_cvsignal"},
  {"0x81.286","gettid"},
  {"0x81.307","psynch_rw_wrlock"},
  {"0x81.287","setsgroups"},
  {"wait4_nocancel","0x81,400,0,"},
  {"0x81.306","psynch_rw_rdlock"},
  {"0x81.288","getsgroups"},
  {"__disable_threadsignal","0x81,331,0,"},
  {"psynch_rw_unlock2","0x81,309,0,"},
  {"0x81.289","setwgroups"},
  {"mlock","0x81,203,0,"},
  {"__mac_get_proc","0x81,386,0,"},
  {"sigsuspend_nocancel","0x81,410,0,"},
  {"pipe","0x81,42,0,"},
  {"0x81.147","setsid"},
  {"wait4","0x81,7,3,"},
  {"0x81.318","aio_read"},
  {"0x81.319","aio_write"},
  {"0x81.142","gethostuuid"},
  {"psynch_cvsignal","0x81,304,0,"},
  {"0x81.140","adjtime"},
  {"0x81.310","getsid"},
  {"0x81.311","settid_with_pid"},
  {"0x81.312","psynch_cvclrprepost"},
  {"setegid","0x81,182,0,"},
  {"0x81.313","aio_fsync"},
  {"setattrlist","0x81,221,0,"},
  {"0x81.314","aio_return"},
  {"0x81.315","aio_suspend"},
  {"aio_read","0x81,318,0,"},
  {"setpriority","0x81,96,0,"},
  {"0x81.316","aio_cancel"},
  {"0x81.417","poll_nocancel"},
  {"0x81.317","aio_error"},
  {"0x81.416","waitid_nocancel"},
  {"0x81.415","pwrite_nocancel"},
  {"0x81.414","pread_nocancel"},
  {"getpid","0x81,20,0,"},
  {"0x81.413","sendto_nocancel"},
  {"0x81.412","writev_nocancel"},
  {"0x81.411","readv_nocancel"},
  {"0x81.410","sigsuspend_nocancel"},
  {"fcntl_nocancel","0x81,406,0,"},
  {"psynch_cvbroad","0x81,303,0,"},
  {"fstat64_extended","0x81,343,0,"},
  {"0x81.158","fstatfs"},
  {"0x81.159","unmount"},
  {"sem_init","0x81,275,0,"},
  {"0x81.157","statfs"},
  {"0x81.154","pwrite"},
  {"getpriority","0x81,100,0,"},
  {"sem_open","0x81,268,0,"},
  {"__mac_syscall","0x81,381,0,"},
  {"fsync","0x81,95,0,"},
  {"0x81.39","getppid"},
  {"getitimer","0x81,86,0,"},
  {"sigreturn","0x81,184,0,"},
  {"0x81.152","setprivexec"},
  {"0x81.329","__pthread_sigmask"},
  {"0x81.153","pread"},
  {"fsetxattr","0x81,237,0,"},
  {"0x81.328","__pthread_kill"},
  {"0x81.151","getpgid"},
  {"sem_wait_nocancel","0x81,420,0,"},
  {"0x81.323","process_policy"},
  {"0x81.31","getpeername"},
  {"0x81.322","iopolicysys"},
  {"0x81.30","accept"},
  {"0x81.33","access"},
  {"0x81.320","lio_listio"},
  {"0x81.32","getsockname"},
  {"0x81.327","issetugid"},
  {"lstat_extended","0x81,280,0,"},
  {"0x81.35","fchflags"},
  {"pwrite","0x81,154,0,"},
  {"0x81.34","chflags"},
  {"0x81.325","munlockall"},
  {"0x81.37","kill"},
  {"0x81.324","mlockall"},
  {"0x81.36","sync"},
  {"readlink","0x81,58,0,"},
  {"fileport_makefd","0x81,431,0,"},
  {"lseek","0x81,199,0,"},
  {"setxattr","0x81,236,0,"},
  {"modwatch","0x81,233,0,"},
  {"sem_destroy","0x81,276,0,"},
  {"0x81.28","sendmsg"},
  {"0x81.29","recvfrom"},
  {"kdebug_trace","0x81,180,0,"},
  {"0x81.338","stat64"},
  {"0x81.339","fstat64"},
  {"audit_session_join","0x81,429,0,"},
  {"0x81.291","mkfifo_extended"},
  {"0x81.332","__pthread_markcancel"},
  {"0x81.290","getwgroups"},
  {"0x81.20","getpid"},
  {"setsid","0x81,147,0,"},
  {"0x81.333","__pthread_canceled"},
  {"0x81.330","__sigwait"},
  {"0x81.292","mkdir_extended"},
  {"0x81.331","__disable_threadsignal"},
  {"waitid_nocancel","0x81,416,0,"},
  {"0x81.23","setuid"},
  {"0x81.336","proc_info"},
  {"0x81.294","shared_region_check_np"},
  {"0x81.24","getuid"},
  {"0x81.297","psynch_rw_longrdlock"},
  {"0x81.25","geteuid"},
  {"poll_nocancel","0x81,417,0,"},
  {"0x81.334","__semwait_signal"},
  {"0x81.296","vm_pressure_monitor"},
  {"0x81.26","ptrace"},
  {"0x81.299","psynch_rw_downgrade"},
  {"0x81.27","recvmsg"},
  {"0x81.298","psynch_rw_yieldwrlock"},
  {"__mac_getfsstat","0x81,426,0,"},
  {"fsync_nocancel","0x81,408,0,"},
  {"poll","0x81,230,0,"},
  {"madvise","0x81,75,0,"},
  {"0x81.9","link"},
  {"statfs","0x81,157,0,"},
  {"setaudit_addr","0x81,358,0,"},
  {"0x81.2","fork"},
  {"0x81.3","read"},
  {"vm_pressure_monitor","0x81,296,0,"},
  {"0x81.1","exit"},
  {"0x81.18","getfsstat"},
  {"0x81.349","__pthread_fchdir"},
  {"0x81.6","close"},
  {"0x81.348","__pthread_chdir"},
  {"0x81.7","wait4"},
  {"bind","0x81,104,0,"},
  {"0x81.4","write"},
  {"0x81.5","open"},
  {"aio_fsync","0x81,313,0,"},
  {"psynch_rw_wrlock","0x81,307,0,"},
  {"0x81.345","statfs64"},
  {"0x81.13","fchdir"},
  {"0x81.344","getdirentries64"},
  {"0x81.12","chdir"},
  {"0x81.347","getfsstat64"},
  {"0x81.346","fstatfs64"},
  {"setlogin","0x81,50,0,"},
  {"0x81.10","unlink"},
  {"audit","0x81,350,0,"},
  {"0x81.341","stat64_extended"},
  {"0x81.340","lstat64"},
  {"0x81.16","chown"},
  {"0x81.343","fstat64_extended"},
  {"0x81.15","chmod"},
  {"0x81.342","lstat64_extended"},
  {"0x81.14","mknod"},
  {"audit_session_self","0x81,428,0,"},
  {"psynch_rw_upgrade","0x81,300,0,"},
  {"fchdir","0x81,13,1,i"},
  {"kqueue","0x81,362,0,"},
  {"umask_extended","0x81,278,0,"},
  {"execve","0x81,59,0,"},
  {"settid_with_pid","0x81,311,0,"},
  {"__mac_set_proc","0x81,387,0,"},
  {"mknod","0x81,14,3,zii"},
  {"0x81.358","setaudit_addr"},
  {"quotactl","0x81,165,0,"},
  {"0x81.359","auditctl"},
  {"__mac_get_fd","0x81,388,0,"},
  {"0x81.354","setauid"},
  {"fcntl","0x81,92,0,"},
  {"0x81.357","getaudit_addr"},
  {"flock","0x81,131,0,"},
  {"0x81.350","audit"},
  {"0x81.351","auditon"},
  {"open_nocancel","0x81,398,0,"},
  {"0x81.353","getauid"},
  {"__mac_get_mount","0x81,425,0,"},
  {"__old_semwait_signal_nocancel","0x81,371,0,"},
  {"fgetattrlist","0x81,228,0,"},
  {"settid","0x81,285,0,"},
  {"__sigwait_nocancel","0x81,422,0,"},
  {"settimeofday","0x81,122,0,"},
  {"setpgid","0x81,82,0,"},
  {"getsid","0x81,310,0,"},
  {"0x81.79","getgroups"},
  {"0x81.78","mincore"},
  {"0x81.369","kevent64"},
  {"0x81.368","workq_kernreturn"},
  {"0x81.367","workq_open"},
  {"0x81.75","madvise"},
  {"0x81.366","bsdthread_register"},
  {"0x81.74","mprotect"},
  {"0x81.365","stack_snapshot"},
  {"0x81.364","lchown"},
  {"0x81.363","kevent"},
  {"0x81.362","kqueue"},
  {"0x81.361","bsdthread_terminate"},
  {"0x81.73","munmap"},
  {"0x81.360","bsdthread_create"},
  {"setwgroups","0x81,289,0,"},
  {"gettimeofday","0x81,116,0,"},
  {"listen","0x81,106,0,"},
  {"workq_kernreturn","0x81,368,0,"},
  {"setreuid","0x81,126,0,"},
  {"psynch_mutexdrop","0x81,302,0,"},
  {"undelete","0x81,205,0,"},
  {"guarded_close_np","0x81,442,0,"},
  {"ioctl","0x81,54,0,"},
  {"__mac_set_link","0x81,385,0,"},
  {"searchfs","0x81,225,0,"},
  {"connect","0x81,98,0,"},
  {"close_nocancel","0x81,399,0,"},
  {"getppid","0x81,39,0,"},
  {"removexattr","0x81,238,0,"},
  {"pathconf","0x81,191,0,"},
  {"0x81.65","msync"},
  {"mkcomplex","0x81,216,0,"},
  {"0x81.66","vfork"},
  {"0x81.372","thread_selfid"},
  {"0x81.60","umask"},
  {"0x81.373","ledger"},
  {"0x81.61","chroot"},
  {"0x81.370","__old_semwait_signal"},
  {"read","0x81,3,3,"},
  {"stat_extended","0x81,279,0,"},
  {"0x81.371","__old_semwait_signal_nocancel"},
  {"pid_suspend","0x81,433,0,"},
  {"guarded_open_np","0x81,441,0,"},
  {"recvfrom_nocancel","0x81,403,0,"},
  {"chmod","0x81,15,2,zi"},
  {"pread_nocancel","0x81,414,0,"},
  {"sendto","0x81,133,0,"},
  {"process_policy","0x81,323,0,"},
  {"__pthread_chdir","0x81,348,0,"},
  {"recvmsg","0x81,27,3,"},
  {"0x81.59","execve"},
  {"0x81.58","readlink"},
  {"0x81.57","symlink"},
  {"170","0x81,170,0,"},
  {"0x81.56","revoke"},
  {"0x81.55","reboot"},
  {"psynch_rw_downgrade","0x81,299,0,"},
  {"0x81.54","ioctl"},
  {"_","0x81"},
  {"fsctl","0x81,242,0,"},
  {"0x81.53","sigaltstack"},
  {"__mac_get_pid","0x81,390,0,"},
  {"readv","0x81,120,0,"},
  {"0x81.52","sigpending"},
  {"0x81.51","acct"},
  {"0x81.200","truncate"},
  {"0x81.50","setlogin"},
  {"0x81.201","ftruncate"},
  {"geteuid","0x81,25,0,"},
  {"0x81.202","__sysctl"},
  {"0x81.203","mlock"},
  {"0x81.204","munlock"},
  {"0x81.205","undelete"},
  {"seteuid","0x81,183,0,"},
  {"getgroups","0x81,79,0,"},
  {"getuid","0x81,24,0,"},
  {"vfork","0x81,66,0,"},
  {"sem_getvalue","0x81,274,0,"},
  {"0x81.48","sigprocmask"},
  {"0x81.49","getlogin"},
  {"0x81.46","sigaction"},
  {"__mac_get_link","0x81,384,0,"},
  {"0x81.47","getgid"},
  {"lstat64_extended","0x81,342,0,"},
  {"flistxattr","0x81,241,0,"},
  {"0x81.42","pipe"},
  {"0x81.43","getegid"},
  {"getfsstat64","0x81,347,0,"},
  {"0x81.41","dup"},
  {"aio_error","0x81,317,0,"},
  {"fstat_extended","0x81,281,0,"},
  {"umask","0x81,60,0,"},
  {"__mac_set_file","0x81,383,0,"},
  {"sigsuspend","0x81,111,0,"},
  {"waitid","0x81,173,0,"},
  {"listxattr","0x81,240,0,"},
  {"getwgroups","0x81,290,0,"},
  {"munmap","0x81,73,0,"},
  {"chmod_extended","0x81,282,0,"},
  {"psynch_rw_rdlock","0x81,306,0,"},
  {"sendmsg","0x81,28,3,"},
  {"0x81.228","fgetattrlist"},
  {"0x81.229","fsetattrlist"},
  {"accept_nocancel","0x81,404,0,"},
  {"chown","0x81,16,3,zii"},
  {"auditon","0x81,351,0,"},
  {"0x81.222","getdirentriesattr"},
  {"truncate","0x81,200,0,"},
  {"0x81.223","exchangedata"},
  {"setsockopt","0x81,105,0,"},
  {"0x81.220","getattrlist"},
  {"0x81.221","setattrlist"},
  {"0x81.226","delete"},
  {"chdir","0x81,12,1,z"},
  {"0x81.227","copyfile"},
  {"0x81.225","searchfs"},
  {"ffsctl","0x81,245,0,"},
  {"mprotect","0x81,74,0,"},
  {"chroot","0x81,61,0,"},
  {"bsdthread_terminate","0x81,361,0,"},
  {"fstatfs","0x81,158,0,"},
  {"__sigwait","0x81,330,0,"},
  {"fsgetpath","0x81,427,0,"},
  {"csops","0x81,169,0,"},
  {"select_nocancel","0x81,407,0,"},
  {"readv_nocancel","0x81,411,0,"},
  {"getrusage","0x81,117,0,"},
  {"getdirentriesattr","0x81,222,0,"},
  {"__mac_get_file","0x81,382,0,"},
  {"0x81.216","mkcomplex"},
  {"write_nocancel","0x81,397,0,"},
  {"accept","0x81,30,1,i"},
  {"getdirentries64","0x81,344,0,"},
  {"open","0x81,5,3,"},
  {"setregid","0x81,127,0,"},
  {"statfs64","0x81,345,0,"},
  {"fchown","0x81,123,0,"},
  {"ptrace","0x81,26,4,"},
  {"iopolicysys","0x81,322,0,"},
  {"__pthread_kill","0x81,328,0,"},
  {"__semwait_signal","0x81,334,0,"},
  {"munlockall","0x81,325,0,"},
  {"__mac_execve","0x81,380,0,"},
  {"swapon","0x81,85,0,"},
  {"sem_unlink","0x81,270,0,"},
  {"0x81.183","seteuid"},
  {"0x81.182","setegid"},
  {"0x81.244","posix_spawn"},
  {"0x81.181","setgid"},
  {"0x81.245","ffsctl"},
  {"0x81.180","kdebug_trace"},
  {"setgid","0x81,181,0,"},
  {"0x81.187","fdatasync"},
  {"0x81.240","listxattr"},
  {"0x81.185","chud"},
  {"0x81.241","flistxattr"},
  {"getsockopt","0x81,118,0,"},
  {"0x81.184","sigreturn"},
  {"chud","0x81,185,0,"},
  {"0x81.242","fsctl"},
  {"getdirentries","0x81,196,0,"},
  {"0x81.243","initgroups"},
  {"msync","0x81,65,0,"},
  {"0x81.189","fstat"},
  {"0x81.188","stat"},
  {"stat","0x81,188,0,"},
  {"getattrlist","0x81,220,0,"},
  {"__old_semwait_signal","0x81,370,0,"},
  {"fpathconf","0x81,192,0,"},
  {"mlockall","0x81,324,0,"},
  {"lio_listio","0x81,320,0,"},
  {"fstatfs64","0x81,346,0,"},
  {"mount","0x81,167,0,"},
  {"getsockname","0x81,32,0,"},
  {"__mac_get_lcid","0x81,391,0,"},
  {"mkfifo","0x81,132,0,"},
  {"0x81.239","fremovexattr"},
  {"0x81.238","removexattr"},
  {"0x81.192","fpathconf"},
  {"0x81.233","modwatch"},
  {"0x81.190","lstat"},
  {"0x81.232","waitevent"},
  {"0x81.191","pathconf"},
  {"__sysctl","0x81,202,0,"},
  {"shm_open","0x81,266,0,"},
  {"pread","0x81,153,0,"},
  {"exchangedata","0x81,223,0,"},
  {"0x81.231","watchevent"},
  {"0x81.196","getdirentries"},
  {"sigprocmask","0x81,48,0,"},
  {"0x81.230","poll"},
  {"0x81.197","mmap"},
  {"0x81.237","fsetxattr"},
  {"0x81.194","getrlimit"},
  {"0x81.236","setxattr"},
  {"0x81.195","setrlimit"},
  {"0x81.235","fgetxattr"},
  {"0x81.234","getxattr"},
  {"stat64_extended","0x81,341,0,"},
  {"0x81.199","lseek"},
  {"lstat","0x81,190,0,"},
  {"__pthread_markcancel","0x81,332,0,"},
  {"shutdown","0x81,134,0,"},
  {"psynch_cvclrprepost","0x81,312,0,"},
  {"shm_unlink","0x81,267,0,"},
  {"setlcid","0x81,394,0,"},
  {"getpgrp","0x81,81,0,"},
  {"fstat","0x81,189,0,"},
  {"sem_post","0x81,273,0,"},
  {"socket","0x81,97,0,"},
  {"0x81.268","sem_open"},
  {"0x81.269","sem_close"},
  {"sync","0x81,36,0,"},
  {"audit_session_port","0x81,432,0,"},
  {"0x81.266","shm_open"},
  {"0x81.267","shm_unlink"},
  {"bsdthread_create","0x81,360,0,"},
  {"sendto_nocancel","0x81,413,0,"},
  {"sem_close","0x81,269,0,"},
  {"mkdir_extended","0x81,292,0,"},
  {"initgroups","0x81,243,0,"},
  {"writev_nocancel","0x81,412,0,"},
  {"unmount","0x81,159,0,"},
  {"psynch_mutexwait","0x81,301,0,"},
  {"mkfifo_extended","0x81,291,0,"},
  {"ftruncate","0x81,201,0,"},
  {"psynch_rw_unlock","0x81,308,0,"},
  {"rmdir","0x81,137,0,"},
  {"0x81.250","minherit"},
  {"0x81.381","__mac_syscall"},
  {"0x81.380","__mac_execve"},
  {"getaudit_addr","0x81,357,0,"},
  {"0x81.383","__mac_set_file"},
  {"0x81.382","__mac_get_file"},
  {"0x81.385","__mac_set_link"},
  {"0x81.384","__mac_get_link"},
  {"0x81.387","__mac_set_proc"},
  {"lstat64","0x81,340,0,"},
  {"0x81.386","__mac_get_proc"},
  {"0x81.389","__mac_set_fd"},
  {"__mac_get_lctx","0x81,392,0,"},
  {"0x81.388","__mac_get_fd"},
  {"fsetattrlist","0x81,229,0,"},
  {"select","0x81,93,0,"},
  {"acct","0x81,51,0,"},
  {"pwrite_nocancel","0x81,415,0,"},
  {"minherit","0x81,250,0,"},
  {"mkdir","0x81,136,0,"},
  {"futimes","0x81,139,0,"},
  {"aio_cancel","0x81,316,0,"},
  {"setsgroups","0x81,287,0,"},
  {"mmap","0x81,197,0,"},
  {"mincore","0x81,78,0,"},
  {"0x81.390","__mac_get_pid"},
  {"0x81.391","__mac_get_lcid"},
  {"0x81.392","__mac_get_lctx"},
  {"0x81.393","__mac_set_lctx"},
  {"0x81.394","setlcid"},
  {"bsdthread_register","0x81,366,0,"},
  {"symlink","0x81,57,0,"},
  {"fdatasync","0x81,187,0,"},
  {"0x81.395","getlcid"},
  {"0x81.396","read_nocancel"},
  {"0x81.397","write_nocancel"},
  {"0x81.398","open_nocancel"},
  {"0x81.399","close_nocancel"},
  {"thread_selfid","0x81,372,0,"},
  {"__mac_mount","0x81,424,0,"},
  {"msync_nocancel","0x81,405,0,"},
  {"0x81.279","stat_extended"},
  {"0x81.278","umask_extended"},
  {"socketpair","0x81,135,0,"},
  {"0x81.277","open_extended"},
  {"0x81.276","sem_destroy"},
  {"0x81.275","sem_init"},
  {"0x81.274","sem_getvalue"},
  {"waitevent","0x81,232,0,"},
  {"0x81.273","sem_post"},
  {"0x81.272","sem_trywait"},
  {"0x81.271","sem_wait"},
  {"delete","0x81,226,0,"},
  {"0x81.270","sem_unlink"},
  {"posix_spawn","0x81,244,0,"},
  {"read_nocancel","0x81,396,0,"},
  {"copyfile","0x81,227,0,"},
  {"sem_trywait","0x81,272,0,"},
  {"getpeername","0x81,31,0,"},
  {"getdtablesize","0x81,89,0,"},
  {"watchevent","0x81,231,0,"},
  {"kill","0x81,37,0,"},
  {"writev","0x81,121,0,"},
  {"0x81.442","guarded_close_np"},
  {"0x81.440","memorystatus_control"},
  {"lchown","0x81,364,0,"},
  {"0x81.441","guarded_open_np"},
  {"aio_return","0x81,314,0,"},
  {"__semwait_signal_nocancel","0x81,423,0,"},
  {"0x81.128","rename"},
  {"gettid","0x81,286,0,"},
  {"fileport_makeport","0x81,430,0,"},
  {"fchflags","0x81,35,0,"},
  {"0x81.121","writev"},
  {"0x81.120","readv"},
  {"0x81.123","fchown"},
  {"0x81.122","settimeofday"},
  {"access","0x81,33,0,"},
  {"recvfrom","0x81,29,3,"},
  {"0x81.124","fchmod"},
  {"workq_open","0x81,367,0,"},
  {"0x81.127","setregid"},
  {"0x81.126","setreuid"},
  {"dup","0x81,41,0,"},
  {"kas_info","0x81,439,0,"},
  {"ledger","0x81,373,0,"},
  {"__pthread_canceled","0x81,333,0,"},
  {"getlcid","0x81,395,0,"},
  {"unlink","0x81,10,1,z"},
  {"sigaction","0x81,46,0,"},
  {"close","0x81,6,1,"},
  {"0x81.138","utimes"},
  {"0x81.139","futimes"},
  {"setauid","0x81,354,0,"},
  {"munlock","0x81,204,0,"},
  {"write","0x81,4,3,"},
  {"setgroups","0x81,80,0,"},
  {"stat64","0x81,338,0,"},
  {"0x81.131","flock"},
  {"0x81.132","mkfifo"},
  {"0x81.93","select"},
  {"0x81.133","sendto"},
  {"0x81.92","fcntl"},
  {"0x81.134","shutdown"},
  {"reboot","0x81,55,0,"},
  {"0x81.135","socketpair"},
  {"setrlimit","0x81,195,0,"},
  {"0x81.90","dup2"},
  {"0x81.136","mkdir"},
  {"setuid","0x81,23,1,i"},
  {"0x81.97","socket"},
  {"0x81.137","rmdir"},
  {"0x81.96","setpriority"},
  {"0x81.95","fsync"},
  {"getegid","0x81,43,0,"},
  {"aio_suspend","0x81,315,0,"},
  {"0x81.428","audit_session_self"},
  {"0x81.98","connect"},
  {"0x81.429","audit_session_join"},
  {"pid_resume","0x81,434,0,"},
  {"utimes","0x81,138,0,"},
  {"fremovexattr","0x81,239,0,"},
  {"0x81.424","__mac_mount"},
  {"0x81.425","__mac_get_mount"},
  {"0x81.426","__mac_getfsstat"},
  {"dup2","0x81,90,0,"},
  {"0x81.427","fsgetpath"},
  {"0x81.420","sem_wait_nocancel"},
  {"0x81.421","aio_suspend_nocancel"},
  {"0x81.422","__sigwait_nocancel"},
  {"memorystatus_control","0x81,440,0,"},
  {"0x81.423","__semwait_signal_nocancel"},
  {"getgid","0x81,47,0,"},
  {"exit","0x81,1,1,"},
  {"proc_info","0x81,336,0,"},
  {"chflags","0x81,34,0,"},
  {"kevent","0x81,363,0,"},
  {"0x81.82","setpgid"},
  {"0x81.100","getpriority"},
  {"0x81.83","setitimer"},
  {"0x81.80","setgroups"},
  {"0x81.106","listen"},
  {"sem_wait","0x81,271,0,"},
  {"getrlimit","0x81,194,0,"},
  {"__pthread_fchdir","0x81,349,0,"},
  {"0x81.81","getpgrp"},
  {"0x81.105","setsockopt"},
  {"0x81.86","getitimer"},
  {"0x81.104","bind"},
  {"fgetxattr","0x81,235,0,"},
  {"shared_region_check_np","0x81,294,0,"},
  {"open_extended","0x81,277,0,"},
  {"0x81.85","swapon"},
  {"psynch_cvwait","0x81,305,0,"},
  {"0x81.89","getdtablesize"},
  {"pid_hibernate","0x81,435,0,"},
  {"psynch_rw_yieldwrlock","0x81,298,0,"},
  {"psynch_rw_longrdlock","0x81,297,0,"},
  {"sigpending","0x81,52,0,"},
  {
# 652 "project/radare2/libr/syscall/d/ios-x86-32.c" 3 4
  ((void *)0)
# 652 "project/radare2/libr/syscall/d/ios-x86-32.c"
      , 
# 652 "project/radare2/libr/syscall/d/ios-x86-32.c" 3 4
        ((void *)0)
# 652 "project/radare2/libr/syscall/d/ios-x86-32.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_ios_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_ios_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 667 "project/radare2/libr/syscall/d/ios-x86-32.c" 3 4
        ((void *)0)
# 667 "project/radare2/libr/syscall/d/ios-x86-32.c"
            ;
}

const unsigned int gperf_ios_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_ios_x86_32 = {
  .name = "ios-x86-32",
  .get = &gperf_ios_x86_32_get,
  .hash = &gperf_ios_x86_32_hash,
  .foreach = &gperf_ios_x86_32_foreach
};
