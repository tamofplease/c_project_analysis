# 0 "project/radare2/libr/syscall/d/ios-arm-32.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/ios-arm-32.c"


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
# 4 "project/radare2/libr/syscall/d/ios-arm-32.c" 2
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
# 5 "project/radare2/libr/syscall/d/ios-arm-32.c" 2
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
# 6 "project/radare2/libr/syscall/d/ios-arm-32.c" 2


# 7 "project/radare2/libr/syscall/d/ios-arm-32.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"write_nocancel","0x81,397,0,"},
  {"setpgid","0x81,82,0,"},
  {"fpathconf","0x81,192,0,"},
  {"fstatat64","0x81,470,0,"},
  {"fchown","0x81,123,0,"},
  {"chroot","0x81,61,0,"},
  {"unmount","0x81,159,0,"},
  {"exit","0x81,1,1,"},
  {"acct","0x81,51,0,"},
  {"shutdown","0x81,134,0,"},
  {"setegid","0x81,182,0,"},
  {"recvmsg","0x81,27,3,"},
  {"setxattr","0x81,236,0,"},
  {"thread_selfid","0x81,372,0,"},
  {"csops","0x81,169,0,"},
  {"setsgroups","0x81,287,0,"},
  {"fchmodat","0x81,467,0,"},
  {"fsctl","0x81,242,0,"},
  {"sigaction","0x81,46,0,"},
  {"ioctl","0x81,54,0,"},
  {"fchdir","0x81,13,1,i"},
  {"statfs64","0x81,345,0,"},
  {"setuid","0x81,23,1,i"},
  {"mprotect","0x81,74,0,"},
  {"fsgetpath","0x81,427,0,"},
  {"quotactl","0x81,165,0,"},
  {"__mac_get_mount","0x81,425,0,"},
  {"psynch_rw_wrlock","0x81,307,0,"},
  {"mkcomplex","0x81,216,0,"},
  {"sendmsg","0x81,28,3,"},
  {"setaudit_addr","0x81,358,0,"},
  {"umask_extended","0x81,278,0,"},
  {"fsync","0x81,95,0,"},
  {"stat64_extended","0x81,341,0,"},
  {"aio_return","0x81,314,0,"},
  {"setreuid","0x81,126,0,"},
  {"work_interval_ctl","0x81,499,0,"},
  {"psynch_cvclrprepost","0x81,312,0,"},
  {"select","0x81,93,0,"},
  {"psynch_rw_upgrade","0x81,300,0,"},
  {"sfi_ctl","0x81,456,0,"},
  {"__mac_set_file","0x81,383,0,"},
  {"setpriority","0x81,96,0,"},
  {"bsdthread_ctl","0x81,478,0,"},
  {"wait4","0x81,7,3,"},
  {"0x81.381","__mac_syscall"},
  {"fgetattrlist","0x81,228,0,"},
  {"0x81.380","__mac_execve"},
  {"pid_hibernate","0x81,435,0,"},
  {"0x81.383","__mac_set_file"},
  {"0x81.382","__mac_get_file"},
  {"0x81.385","__mac_set_link"},
  {"0x81.384","__mac_get_link"},
  {"0x81.387","__mac_set_proc"},
  {"0x81.386","__mac_get_proc"},
  {"setitimer","0x81,83,0,"},
  {"0x81.389","__mac_set_fd"},
  {"audit","0x81,350,0,"},
  {"0x81.388","__mac_get_fd"},
  {"fileport_makeport","0x81,430,0,"},
  {"proc_trace_log","0x81,477,0,"},
  {"connect_nocancel","0x81,409,0,"},
  {"listen","0x81,106,0,"},
  {"munlockall","0x81,325,0,"},
  {"getpgid","0x81,151,0,"},
  {"adjtime","0x81,140,0,"},
  {"setgid","0x81,181,0,"},
  {"lstat64_extended","0x81,342,0,"},
  {"proc_telemetry","0x81,451,0,"},
  {"kevent","0x81,363,0,"},
  {"__nexus_destroy","0x81,507,0,"},
  {"auditctl","0x81,359,0,"},
  {"auditon","0x81,351,0,"},
  {"0x81.390","__mac_get_pid"},
  {"workq_kernreturn","0x81,368,0,"},
  {"0x81.391","__mac_get_lcid"},
  {"0x81.392","__mac_get_lctx"},
  {"0x81.393","__mac_set_lctx"},
  {"accept","0x81,30,1,i"},
  {"0x81.394","setlcid"},
  {"openat_nocancel","0x81,464,0,"},
  {"0x81.395","getlcid"},
  {"umask","0x81,60,0,"},
  {"0x81.396","read_nocancel"},
  {"sigreturn","0x81,184,0,"},
  {"0x81.397","write_nocancel"},
  {"posix_spawn","0x81,244,0,"},
  {"0x81.398","open_nocancel"},
  {"0x81.399","close_nocancel"},
  {"sigsuspend_nocancel","0x81,410,0,"},
  {"guarded_writev_np","0x81,487,0,"},
  {"change_fdguard_np","0x81,444,0,"},
  {"getsgroups","0x81,288,0,"},
  {"__mac_get_link","0x81,384,0,"},
  {"socket","0x81,97,0,"},
  {"fsetattrlist","0x81,229,0,"},
  {"link","0x81,9,2,zz"},
  {"pipe","0x81,42,0,"},
  {"gettid","0x81,286,0,"},
  {"msync","0x81,65,0,"},
  {"truncate","0x81,200,0,"},
  {"sigpending","0x81,52,0,"},
  {"bsdthread_terminate","0x81,361,0,"},
  {"waitid","0x81,173,0,"},
  {"readv_nocancel","0x81,411,0,"},
  {"getdtablesize","0x81,89,0,"},
  {"0x81.280","lstat_extended"},
  {"0x81.281","fstat_extended"},
  {"chud","0x81,185,0,"},
  {"0x81.282","chmod_extended"},
  {"0x81.283","fchmod_extended"},
  {"0x81.284","access_extended"},
  {"lchown","0x81,364,0,"},
  {"0x81.285","settid"},
  {"0x81.286","gettid"},
  {"0x81.287","setsgroups"},
  {"aio_suspend","0x81,315,0,"},
  {"0x81.288","getsgroups"},
  {"0x81.289","setwgroups"},
  {"stack_snapshot_with_config","0x81,491,0,"},
  {"write","0x81,4,3,"},
  {"setrlimit","0x81,195,0,"},
  {"psynch_cvsignal","0x81,304,0,"},
  {"chmod","0x81,15,2,zi"},
  {"__mac_syscall","0x81,381,0,"},
  {"chflags","0x81,34,0,"},
  {"fcntl_nocancel","0x81,406,0,"},
  {"fstatfs","0x81,158,0,"},
  {"__pthread_fchdir","0x81,349,0,"},
  {"getdirentries","0x81,196,0,"},
  {"setwgroups","0x81,289,0,"},
  {"shm_open","0x81,266,0,"},
  {"psynch_cvbroad","0x81,303,0,"},
  {"listxattr","0x81,240,0,"},
  {"exchangedata","0x81,223,0,"},
  {"__semwait_signal_nocancel","0x81,423,0,"},
  {"proc_connectx","0x81,447,0,"},
  {"pathconf","0x81,191,0,"},
  {"getppid","0x81,39,0,"},
  {"chdir","0x81,12,1,z"},
  {"getgroups","0x81,79,0,"},
  {"symlink","0x81,57,0,"},
  {"msync_nocancel","0x81,405,0,"},
  {"mkdir_extended","0x81,292,0,"},
  {"aio_error","0x81,317,0,"},
  {"stat","0x81,188,0,"},
  {"fchflags","0x81,35,0,"},
  {"shared_region_check_np","0x81,294,0,"},
  {"sem_unlink","0x81,270,0,"},
  {"getrlimit","0x81,194,0,"},
  {"_","0x81"},
  {"ffsctl","0x81,245,0,"},
  {"psynch_rw_rdlock","0x81,306,0,"},
  {"rename_ext","0x81,488,0,"},
  {"open_nocancel","0x81,398,0,"},
  {"memorystatus_get_level","0x81,453,0,"},
  {"sem_wait_nocancel","0x81,420,0,"},
  {"linkat","0x81,471,0,"},
  {"proc_disconnectx","0x81,448,0,"},
  {"0x81.486","guarded_pwrite_np"},
  {"0x81.291","mkfifo_extended"},
  {"mkfifo","0x81,132,0,"},
  {"0x81.487","guarded_writev_np"},
  {"0x81.290","getwgroups"},
  {"chmod_extended","0x81,282,0,"},
  {"0x81.484","guarded_open_dprotected_np"},
  {"lstat64","0x81,340,0,"},
  {"0x81.485","guarded_write_np"},
  {"0x81.292","mkdir_extended"},
  {"0x81.482","thread_selfusage"},
  {"0x81.294","shared_region_check_np"},
  {"__mac_get_fd","0x81,388,0,"},
  {"0x81.480","recvmsg_x"},
  {"0x81.297","psynch_rw_longrdlock"},
  {"0x81.481","sendmsg_x"},
  {"delete","0x81,226,0,"},
  {"0x81.296","vm_pressure_monitor"},
  {"0x81.299","psynch_rw_downgrade"},
  {"0x81.298","psynch_rw_yieldwrlock"},
  {"getattrlist","0x81,220,0,"},
  {"getpeername","0x81,31,0,"},
  {"audit_session_self","0x81,428,0,"},
  {"0x81.488","rename_ext"},
  {"0x81.489","mremap_encrypted"},
  {"fstat64","0x81,339,0,"},
  {"__pthread_chdir","0x81,348,0,"},
  {"getaudit_addr","0x81,357,0,"},
  {"sem_init","0x81,275,0,"},
  {"setsockopt","0x81,105,0,"},
  {"audit_session_port","0x81,432,0,"},
  {"fcntl","0x81,92,0,"},
  {"swapon","0x81,85,0,"},
  {"open_extended","0x81,277,0,"},
  {"fstat","0x81,189,0,"},
  {"psynch_cvwait","0x81,305,0,"},
  {"getdirentries64","0x81,344,0,"},
  {"fs_snapshot","0x81,518,0,"},
  {"0x81.309","psynch_rw_unlock2"},
  {"access","0x81,33,0,"},
  {"sendmsg_nocancel","0x81,402,0,"},
  {"0x81.308","psynch_rw_unlock"},
  {"unlinkat","0x81,472,0,"},
  {"0x81.301","psynch_mutexwait"},
  {"0x81.468","fchownat"},
  {"getegid","0x81,43,0,"},
  {"0x81.300","psynch_rw_upgrade"},
  {"writev_nocancel","0x81,412,0,"},
  {"0x81.469","fstatat"},
  {"0x81.303","psynch_cvbroad"},
  {"0x81.302","psynch_mutexdrop"},
  {"0x81.305","psynch_cvwait"},
  {"0x81.304","psynch_cvsignal"},
  {"0x81.307","psynch_rw_wrlock"},
  {"geteuid","0x81,25,0,"},
  {"utimes","0x81,138,0,"},
  {"0x81.306","psynch_rw_rdlock"},
  {"symlinkat","0x81,474,0,"},
  {"__sigwait","0x81,330,0,"},
  {"0x81.460","necp_match_policy"},
  {"recvmsg_x","0x81,480,0,"},
  {"0x81.461","getattrlistbulk"},
  {"0x81.462","placeholder for clonefile"},
  {"0x81.463","openat"},
  {"psynch_mutexwait","0x81,301,0,"},
  {"0x81.464","openat_nocancel"},
  {"0x81.465","renameat"},
  {"mlock","0x81,203,0,"},
  {"0x81.466","faccessat"},
  {"0x81.467","fchmodat"},
  {"__mac_execve","0x81,380,0,"},
  {"psynch_rw_unlock2","0x81,309,0,"},
  {"iopolicysys","0x81,322,0,"},
  {"__mac_get_file","0x81,382,0,"},
  {"0x81.318","aio_read"},
  {"getitimer","0x81,86,0,"},
  {"dup2","0x81,90,0,"},
  {"0x81.319","aio_write"},
  {"pwrite","0x81,154,0,"},
  {"aio_write","0x81,319,0,"},
  {"0x81.310","getsid"},
  {"removexattr","0x81,238,0,"},
  {"0x81.311","settid_with_pid"},
  {"0x81.312","psynch_cvclrprepost"},
  {"0x81.313","aio_fsync"},
  {"0x81.494","persona"},
  {"0x81.314","aio_return"},
  {"readlinkat","0x81,473,0,"},
  {"0x81.493","grab_pgo_data"},
  {"0x81.520","terminate_with_payload"},
  {"0x81.315","aio_suspend"},
  {"0x81.492","microstackshot"},
  {"0x81.316","aio_cancel"},
  {"vm_pressure_monitor","0x81,296,0,"},
  {"0x81.491","stack_snapshot_with_config"},
  {"0x81.317","aio_error"},
  {"0x81.490","netagent_trigger"},
  {"poll_nocancel","0x81,417,0,"},
  {"0x81.499","work_interval_ctl"},
  {"mkfifo_extended","0x81,291,0,"},
  {"lseek","0x81,199,0,"},
  {"__old_semwait_signal_nocancel","0x81,371,0,"},
  {"getauid","0x81,353,0,"},
  {"0x81.329","__pthread_sigmask"},
  {"0x81.328","__pthread_kill"},
  {"guarded_kqueue_np","0x81,443,0,"},
  {"0x81.323","process_policy"},
  {"0x81.322","iopolicysys"},
  {"waitevent","0x81,232,0,"},
  {"0x81.448","proc_disconnectx"},
  {"gethostuuid","0x81,142,0,"},
  {"0x81.320","lio_listio"},
  {"sfi_pidctl","0x81,457,0,"},
  {"0x81.449","proc_peeloff"},
  {"0x81.327","issetugid"},
  {"close_nocancel","0x81,399,0,"},
  {"0x81.325","munlockall"},
  {"0x81.324","mlockall"},
  {"getpid","0x81,20,0,"},
  {"0x81.442","guarded_close_np"},
  {"sem_post","0x81,273,0,"},
  {"0x81.443","guarded_kqueue_np"},
  {"mkdirat","0x81,475,0,"},
  {"0x81.183","seteuid"},
  {"0x81.440","memorystatus_control"},
  {"__mac_set_proc","0x81,387,0,"},
  {"0x81.182","setegid"},
  {"0x81.441","guarded_open_np"},
  {"0x81.181","setgid"},
  {"0x81.446","proc_rlimit_control"},
  {"guarded_write_np","0x81,485,0,"},
  {"0x81.180","kdebug_trace"},
  {"0x81.447","proc_connectx"},
  {"0x81.187","fdatasync"},
  {"0x81.444","change_fdguard_np"},
  {"__nexus_register","0x81,504,0,"},
  {"0x81.445","old __proc_suppress"},
  {"psynch_rw_downgrade","0x81,299,0,"},
  {"0x81.185","chud"},
  {"settimeofday","0x81,122,0,"},
  {"0x81.184","sigreturn"},
  {"0x81.189","fstat"},
  {"__mac_getfsstat","0x81,426,0,"},
  {"stat_extended","0x81,279,0,"},
  {"0x81.188","stat"},
  {"workq_open","0x81,367,0,"},
  {"proc_info","0x81,336,0,"},
  {"fremovexattr","0x81,239,0,"},
  {"0x81.338","stat64"},
  {"bind","0x81,104,0,"},
  {"0x81.339","fstat64"},
  {"aio_cancel","0x81,316,0,"},
  {"0x81.509","__nexus_set_opt"},
  {"pwrite_nocancel","0x81,415,0,"},
  {"minherit","0x81,250,0,"},
  {"0x81.508","__nexus_get_opt"},
  {"0x81.507","__nexus_destroy"},
  {"0x81.332","__pthread_markcancel"},
  {"0x81.506","__nexus_create"},
  {"0x81.479","openbyid_np"},
  {"0x81.333","__pthread_canceled"},
  {"fstatfs64","0x81,346,0,"},
  {"0x81.505","__nexus_deregister"},
  {"0x81.478","bsdthread_ctl"},
  {"0x81.330","__sigwait"},
  {"0x81.504","__nexus_register"},
  {"0x81.331","__disable_threadsignal"},
  {"readv","0x81,120,0,"},
  {"0x81.503","__nexus_open"},
  {"0x81.336","proc_info"},
  {"0x81.502","necp_client_action"},
  {"0x81.501","necp_open"},
  {"0x81.334","__semwait_signal"},
  {"0x81.500","getentropy"},
  {"system_override","0x81,454,0,"},
  {"lstat","0x81,190,0,"},
  {"0x81.471","linkat"},
  {"0x81.200","truncate"},
  {"0x81.470","fstatat64"},
  {"__disable_threadsignal","0x81,331,0,"},
  {"0x81.201","ftruncate"},
  {"0x81.192","fpathconf"},
  {"0x81.473","readlinkat"},
  {"0x81.202","__sysctl"},
  {"0x81.472","unlinkat"},
  {"0x81.203","mlock"},
  {"0x81.190","lstat"},
  {"0x81.475","mkdirat"},
  {"0x81.204","munlock"},
  {"0x81.191","pathconf"},
  {"0x81.474","symlinkat"},
  {"0x81.205","undelete"},
  {"0x81.196","getdirentries"},
  {"read_nocancel","0x81,396,0,"},
  {"0x81.477","proc_trace_log"},
  {"0x81.197","mmap"},
  {"0x81.476","getattrlistat"},
  {"0x81.194","getrlimit"},
  {"0x81.195","setrlimit"},
  {"getentropy","0x81,500,0,"},
  {"0x81.93","select"},
  {"psynch_rw_yieldwrlock","0x81,298,0,"},
  {"0x81.92","fcntl"},
  {"persona","0x81,494,0,"},
  {"0x81.199","lseek"},
  {"0x81.90","dup2"},
  {"getgid","0x81,47,0,"},
  {"recvfrom","0x81,29,3,"},
  {"0x81.97","socket"},
  {"0x81.96","setpriority"},
  {"0x81.95","fsync"},
  {"flock","0x81,131,0,"},
  {"getuid","0x81,24,0,"},
  {"0x81.349","__pthread_fchdir"},
  {"0x81.348","__pthread_chdir"},
  {"0x81.98","connect"},
  {"0x81.518","fs_snapshot"},
  {"__nexus_open","0x81,503,0,"},
  {"0x81.516","ulock_wake"},
  {"0x81.345","statfs64"},
  {"0x81.517","fclonefileat"},
  {"0x81.344","getdirentries64"},
  {"reboot","0x81,55,0,"},
  {"__channel_sync","0x81,512,0,"},
  {"0x81.514","__channel_set_opt"},
  {"0x81.347","getfsstat64"},
  {"getfsstat64","0x81,347,0,"},
  {"0x81.515","ulock_wait"},
  {"fchownat","0x81,468,0,"},
  {"0x81.346","fstatfs64"},
  {"0x81.512","__channel_sync"},
  {"0x81.341","stat64_extended"},
  {"0x81.428","audit_session_self"},
  {"0x81.513","__channel_get_opt"},
  {"0x81.340","lstat64"},
  {"fstat_extended","0x81,281,0,"},
  {"0x81.429","audit_session_join"},
  {"0x81.510","__channel_open"},
  {"0x81.343","fstat64_extended"},
  {"0x81.511","__channel_get_info"},
  {"0x81.342","lstat64_extended"},
  {"guarded_close_np","0x81,442,0,"},
  {"0x81.424","__mac_mount"},
  {"0x81.425","__mac_get_mount"},
  {"170","0x81,170,0,"},
  {"0x81.426","__mac_getfsstat"},
  {"0x81.427","fsgetpath"},
  {"0x81.420","sem_wait_nocancel"},
  {"0x81.421","aio_suspend_nocancel"},
  {"0x81.422","__sigwait_nocancel"},
  {"0x81.423","__semwait_signal_nocancel"},
  {"openat","0x81,463,0,"},
  {"read","0x81,3,3,"},
  {"0x81.82","setpgid"},
  {"0x81.83","setitimer"},
  {"0x81.80","setgroups"},
  {"0x81.81","getpgrp"},
  {"0x81.86","getitimer"},
  {"__nexus_set_opt","0x81,509,0,"},
  {"0x81.85","swapon"},
  {"copyfile","0x81,227,0,"},
  {"fsetxattr","0x81,237,0,"},
  {"0x81.358","setaudit_addr"},
  {"0x81.359","auditctl"},
  {"0x81.89","getdtablesize"},
  {"waitid_nocancel","0x81,416,0,"},
  {"__sysctl","0x81,202,0,"},
  {"0x81.354","setauid"},
  {"sem_getvalue","0x81,274,0,"},
  {"0x81.459","coalition_info"},
  {"0x81.357","getaudit_addr"},
  {"0x81.228","fgetattrlist"},
  {"0x81.458","coalition"},
  {"0x81.350","audit"},
  {"0x81.229","fsetattrlist"},
  {"0x81.351","auditon"},
  {"0x81.353","getauid"},
  {"0x81.453","memorystatus_get_level"},
  {"netagent_trigger","0x81,490,0,"},
  {"0x81.222","getdirentriesattr"},
  {"0x81.452","proc_uuid_policy"},
  {"0x81.223","exchangedata"},
  {"0x81.451","proc_telemetry"},
  {"0x81.220","getattrlist"},
  {"initgroups","0x81,243,0,"},
  {"0x81.450","proc_socket_delegate"},
  {"0x81.221","setattrlist"},
  {"0x81.457","sfi_pidctl"},
  {"0x81.456","sfi_ctl"},
  {"0x81.226","delete"},
  {"0x81.455","vfs_purge"},
  {"0x81.227","copyfile"},
  {"0x81.454","system_override"},
  {"0x81.225","searchfs"},
  {"grab_pgo_data","0x81,493,0,"},
  {"vfs_purge","0x81,455,0,"},
  {"pread","0x81,153,0,"},
  {"0x81.9","link"},
  {"__semwait_signal","0x81,334,0,"},
  {"0x81.2","fork"},
  {"socketpair","0x81,135,0,"},
  {"pid_resume","0x81,434,0,"},
  {"0x81.3","read"},
  {"ptrace","0x81,26,4,"},
  {"dup","0x81,41,0,"},
  {"0x81.1","exit"},
  {"0x81.369","kevent64"},
  {"mkdir","0x81,136,0,"},
  {"modwatch","0x81,233,0,"},
  {"0x81.6","close"},
  {"0x81.368","workq_kernreturn"},
  {"fstat64_extended","0x81,343,0,"},
  {"0x81.7","wait4"},
  {"0x81.367","workq_open"},
  {"__channel_open","0x81,510,0,"},
  {"0x81.4","write"},
  {"0x81.366","bsdthread_register"},
  {"0x81.5","open"},
  {"0x81.365","stack_snapshot"},
  {"0x81.364","lchown"},
  {"0x81.363","kevent"},
  {"writev","0x81,121,0,"},
  {"0x81.362","kqueue"},
  {"0x81.408","fsync_nocancel"},
  {"0x81.361","bsdthread_terminate"},
  {"0x81.409","connect_nocancel"},
  {"0x81.360","bsdthread_create"},
  {"0x81.406","fcntl_nocancel"},
  {"0x81.407","select_nocancel"},
  {"0x81.404","accept_nocancel"},
  {"0x81.405","msync_nocancel"},
  {"0x81.402","sendmsg_nocancel"},
  {"0x81.403","recvfrom_nocancel"},
  {"0x81.400","wait4_nocancel"},
  {"0x81.401","recvmsg_nocancel"},
  {"__sigwait_nocancel","0x81,422,0,"},
  {"0x81.216","mkcomplex"},
  {"close","0x81,6,1,"},
  {"statfs","0x81,157,0,"},
  {"__old_semwait_signal","0x81,370,0,"},
  {"proc_rlimit_control","0x81,446,0,"},
  {"renameat","0x81,465,0,"},
  {"0x81.439","kas_info"},
  {"0x81.372","thread_selfid"},
  {"0x81.438","shared_region_map_and_slide_np"},
  {"0x81.373","ledger"},
  {"ulock_wake","0x81,516,0,"},
  {"__mac_get_proc","0x81,386,0,"},
  {"__nexus_deregister","0x81,505,0,"},
  {"0x81.370","__old_semwait_signal"},
  {"madvise","0x81,75,0,"},
  {"0x81.371","__old_semwait_signal_nocancel"},
  {"0x81.435","pid_hibernate"},
  {"0x81.434","pid_resume"},
  {"0x81.244","posix_spawn"},
  {"0x81.245","ffsctl"},
  {"0x81.436","pid_shutdown_sockets"},
  {"aio_fsync","0x81,313,0,"},
  {"getpgrp","0x81,81,0,"},
  {"0x81.431","fileport_makefd"},
  {"0x81.430","fileport_makeport"},
  {"0x81.240","listxattr"},
  {"0x81.433","pid_suspend"},
  {"0x81.241","flistxattr"},
  {"0x81.432","audit_session_port"},
  {"0x81.242","fsctl"},
  {"0x81.243","initgroups"},
  {"aio_suspend_nocancel","0x81,421,0,"},
  {"pid_shutdown_sockets","0x81,436,0,"},
  {"poll","0x81,230,0,"},
  {"process_policy","0x81,323,0,"},
  {"sem_destroy","0x81,276,0,"},
  {"fsync_nocancel","0x81,408,0,"},
  {"0x81.239","fremovexattr"},
  {"0x81.238","removexattr"},
  {"getrusage","0x81,117,0,"},
  {"microstackshot","0x81,492,0,"},
  {"0x81.233","modwatch"},
  {"psynch_rw_longrdlock","0x81,297,0,"},
  {"0x81.232","waitevent"},
  {"0x81.231","watchevent"},
  {"0x81.128","rename"},
  {"0x81.230","poll"},
  {"0x81.237","fsetxattr"},
  {"fclonefileat","0x81,517,0,"},
  {"0x81.236","setxattr"},
  {"0x81.235","fgetxattr"},
  {"pread_nocancel","0x81,414,0,"},
  {"0x81.234","getxattr"},
  {"0x81.121","writev"},
  {"settid_with_pid","0x81,311,0,"},
  {"0x81.120","readv"},
  {"0x81.123","fchown"},
  {"sem_wait","0x81,271,0,"},
  {"0x81.122","settimeofday"},
  {"necp_open","0x81,501,0,"},
  {"flistxattr","0x81,241,0,"},
  {"0x81.124","fchmod"},
  {"setlogin","0x81,50,0,"},
  {"0x81.127","setregid"},
  {"0x81.126","setreuid"},
  {"__nexus_get_opt","0x81,508,0,"},
  {"necp_client_action","0x81,502,0,"},
  {"setattrlist","0x81,221,0,"},
  {"__mac_set_fd","0x81,389,0,"},
  {"placeholder for clonefile","0x81,462,0,"},
  {"__mac_get_lcid","0x81,391,0,"},
  {"chown","0x81,16,3,zii"},
  {"0x81.268","sem_open"},
  {"0x81.417","poll_nocancel"},
  {"0x81.269","sem_close"},
  {"0x81.416","waitid_nocancel"},
  {"0x81.266","shm_open"},
  {"0x81.415","pwrite_nocancel"},
  {"0x81.267","shm_unlink"},
  {"0x81.138","utimes"},
  {"__channel_get_info","0x81,511,0,"},
  {"0x81.414","pread_nocancel"},
  {"mlockall","0x81,324,0,"},
  {"0x81.139","futimes"},
  {"0x81.413","sendto_nocancel"},
  {"searchfs","0x81,225,0,"},
  {"0x81.412","writev_nocancel"},
  {"0x81.411","readv_nocancel"},
  {"kill","0x81,37,0,"},
  {"__pthread_sigmask","0x81,329,0,"},
  {"0x81.410","sigsuspend_nocancel"},
  {"recvmsg_nocancel","0x81,401,0,"},
  {"sem_open","0x81,268,0,"},
  {"0x81.39","getppid"},
  {"watchevent","0x81,231,0,"},
  {"0x81.131","flock"},
  {"0x81.132","mkfifo"},
  {"rmdir","0x81,137,0,"},
  {"0x81.133","sendto"},
  {"0x81.134","shutdown"},
  {"0x81.135","socketpair"},
  {"0x81.136","mkdir"},
  {"0x81.137","rmdir"},
  {"__channel_get_opt","0x81,513,0,"},
  {"0x81.31","getpeername"},
  {"settid","0x81,285,0,"},
  {"0x81.30","accept"},
  {"0x81.33","access"},
  {"0x81.32","getsockname"},
  {"getxattr","0x81,234,0,"},
  {"0x81.35","fchflags"},
  {"0x81.34","chflags"},
  {"getlcid","0x81,395,0,"},
  {"0x81.37","kill"},
  {"0x81.36","sync"},
  {"rename","0x81,128,0,"},
  {"proc_peeloff","0x81,449,0,"},
  {"mount","0x81,167,0,"},
  {"gettimeofday","0x81,116,0,"},
  {"0x81.250","minherit"},
  {"0x81.28","sendmsg"},
  {"0x81.29","recvfrom"},
  {"__mac_set_lctx","0x81,393,0,"},
  {"0x81.100","getpriority"},
  {"sendto","0x81,133,0,"},
  {"0x81.106","listen"},
  {"0x81.105","setsockopt"},
  {"0x81.104","bind"},
  {"0x81.20","getpid"},
  {"0x81.23","setuid"},
  {"guarded_open_np","0x81,441,0,"},
  {"coalition","0x81,458,0,"},
  {"0x81.24","getuid"},
  {"0x81.25","geteuid"},
  {"0x81.26","ptrace"},
  {"kqueue","0x81,362,0,"},
  {"0x81.27","recvmsg"},
  {"sync","0x81,36,0,"},
  {"futimes","0x81,139,0,"},
  {"mincore","0x81,78,0,"},
  {"munlock","0x81,204,0,"},
  {"aio_read","0x81,318,0,"},
  {"fileport_makefd","0x81,431,0,"},
  {"mknod","0x81,14,3,zii"},
  {"0x81.118","getsockopt"},
  {"audit_session_join","0x81,429,0,"},
  {"0x81.111","sigsuspend"},
  {"issetugid","0x81,327,0,"},
  {"0x81.18","getfsstat"},
  {"old __proc_suppress","0x81,445,0,"},
  {"__pthread_markcancel","0x81,332,0,"},
  {"ftruncate","0x81,201,0,"},
  {"0x81.116","gettimeofday"},
  {"0x81.117","getrusage"},
  {"proc_uuid_policy","0x81,452,0,"},
  {"select_nocancel","0x81,407,0,"},
  {"0x81.13","fchdir"},
  {"0x81.12","chdir"},
  {"0x81.10","unlink"},
  {"ledger","0x81,373,0,"},
  {"0x81.16","chown"},
  {"0x81.15","chmod"},
  {"0x81.14","mknod"},
  {"open","0x81,5,3,"},
  {"setregid","0x81,127,0,"},
  {"0x81.279","stat_extended"},
  {"0x81.278","umask_extended"},
  {"0x81.277","open_extended"},
  {"sem_trywait","0x81,272,0,"},
  {"pid_suspend","0x81,433,0,"},
  {"0x81.276","sem_destroy"},
  {"fchmod_extended","0x81,283,0,"},
  {"0x81.275","sem_init"},
  {"setsid","0x81,147,0,"},
  {"0x81.274","sem_getvalue"},
  {"mremap_encrypted","0x81,489,0,"},
  {"vfork","0x81,66,0,"},
  {"0x81.273","sem_post"},
  {"access_extended","0x81,284,0,"},
  {"0x81.169","csops"},
  {"0x81.272","sem_trywait"},
  {"0x81.271","sem_wait"},
  {"guarded_open_dprotected_np","0x81,484,0,"},
  {"0x81.270","sem_unlink"},
  {"stack_snapshot","0x81,365,0,"},
  {"getsid","0x81,310,0,"},
  {"munmap","0x81,73,0,"},
  {"0x81.165","quotactl"},
  {"0x81.167","mount"},
  {"readlink","0x81,58,0,"},
  {"__mac_set_link","0x81,385,0,"},
  {"__pthread_kill","0x81,328,0,"},
  {"ulock_wait","0x81,515,0,"},
  {"__mac_get_pid","0x81,390,0,"},
  {"kdebug_trace","0x81,180,0,"},
  {"coalition_info","0x81,459,0,"},
  {"guarded_pwrite_np","0x81,486,0,"},
  {"accept_nocancel","0x81,404,0,"},
  {"bsdthread_create","0x81,360,0,"},
  {"__mac_mount","0x81,424,0,"},
  {"stat64","0x81,338,0,"},
  {"undelete","0x81,205,0,"},
  {"kas_info","0x81,439,0,"},
  {"0x81.170","170"},
  {"0x81.79","getgroups"},
  {"0x81.78","mincore"},
  {"getsockname","0x81,32,0,"},
  {"0x81.173","waitid"},
  {"fgetxattr","0x81,235,0,"},
  {"0x81.75","madvise"},
  {"0x81.74","mprotect"},
  {"sendmsg_x","0x81,481,0,"},
  {"fchmod","0x81,124,0,"},
  {"setgroups","0x81,80,0,"},
  {"__channel_set_opt","0x81,514,0,"},
  {"sigprocmask","0x81,48,0,"},
  {"faccessat","0x81,466,0,"},
  {"0x81.73","munmap"},
  {"getfsstat","0x81,18,3,pii"},
  {"execve","0x81,59,0,"},
  {"setauid","0x81,354,0,"},
  {"psynch_rw_unlock","0x81,308,0,"},
  {"thread_selfusage","0x81,482,0,"},
  {"0x81.147","setsid"},
  {"connect","0x81,98,0,"},
  {"fdatasync","0x81,187,0,"},
  {"setlcid","0x81,394,0,"},
  {"0x81.142","gethostuuid"},
  {"terminate_with_payload","0x81,520,0,"},
  {"0x81.140","adjtime"},
  {"0x81.65","msync"},
  {"0x81.66","vfork"},
  {"lio_listio","0x81,320,0,"},
  {"0x81.60","umask"},
  {"getdirentriesattr","0x81,222,0,"},
  {"0x81.61","chroot"},
  {"__pthread_canceled","0x81,333,0,"},
  {"wait4_nocancel","0x81,400,0,"},
  {"mmap","0x81,197,0,"},
  {"memorystatus_control","0x81,440,0,"},
  {"0x81.158","fstatfs"},
  {"sigsuspend","0x81,111,0,"},
  {"shm_unlink","0x81,267,0,"},
  {"0x81.159","unmount"},
  {"getattrlistbulk","0x81,461,0,"},
  {"0x81.157","statfs"},
  {"getwgroups","0x81,290,0,"},
  {"0x81.154","pwrite"},
  {"0x81.152","setprivexec"},
  {"getlogin","0x81,49,0,"},
  {"0x81.153","pread"},
  {"fstatat","0x81,469,0,"},
  {"0x81.59","execve"},
  {"kevent64","0x81,369,7,"},
  {"0x81.151","getpgid"},
  {"0x81.58","readlink"},
  {"__nexus_create","0x81,506,0,"},
  {"0x81.57","symlink"},
  {"necp_match_policy","0x81,460,0,"},
  {"0x81.56","revoke"},
  {"0x81.55","reboot"},
  {"seteuid","0x81,183,0,"},
  {"0x81.54","ioctl"},
  {"0x81.53","sigaltstack"},
  {"0x81.52","sigpending"},
  {"0x81.51","acct"},
  {"0x81.50","setlogin"},
  {"psynch_mutexdrop","0x81,302,0,"},
  {"sem_close","0x81,269,0,"},
  {"lstat_extended","0x81,280,0,"},
  {"proc_socket_delegate","0x81,450,0,"},
  {"revoke","0x81,56,0,"},
  {"shared_region_map_and_slide_np","0x81,438,0,"},
  {"unlink","0x81,10,1,z"},
  {"sigaltstack","0x81,53,0,"},
  {"sendto_nocancel","0x81,413,0,"},
  {"openbyid_np","0x81,479,0,"},
  {"bsdthread_register","0x81,366,0,"},
  {"0x81.48","sigprocmask"},
  {"0x81.49","getlogin"},
  {"getsockopt","0x81,118,0,"},
  {"0x81.46","sigaction"},
  {"0x81.47","getgid"},
  {"__mac_get_lctx","0x81,392,0,"},
  {"getpriority","0x81,100,0,"},
  {"fork","0x81,2,0,"},
  {"0x81.42","pipe"},
  {"0x81.43","getegid"},
  {"recvfrom_nocancel","0x81,403,0,"},
  {"0x81.41","dup"},
  {"getattrlistat","0x81,476,0,"},
  {"setprivexec","0x81,152,0,"},
  {
# 796 "project/radare2/libr/syscall/d/ios-arm-32.c" 3 4
  ((void *)0)
# 796 "project/radare2/libr/syscall/d/ios-arm-32.c"
      , 
# 796 "project/radare2/libr/syscall/d/ios-arm-32.c" 3 4
        ((void *)0)
# 796 "project/radare2/libr/syscall/d/ios-arm-32.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_ios_arm_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_ios_arm_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 811 "project/radare2/libr/syscall/d/ios-arm-32.c" 3 4
        ((void *)0)
# 811 "project/radare2/libr/syscall/d/ios-arm-32.c"
            ;
}

const unsigned int gperf_ios_arm_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_ios_arm_32 = {
  .name = "ios-arm-32",
  .get = &gperf_ios_arm_32_get,
  .hash = &gperf_ios_arm_32_hash,
  .foreach = &gperf_ios_arm_32_foreach
};
