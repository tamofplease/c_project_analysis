# 0 "project/radare2/libr/syscall/d/linux-arm-64.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/linux-arm-64.c"


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
# 4 "project/radare2/libr/syscall/d/linux-arm-64.c" 2
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
# 5 "project/radare2/libr/syscall/d/linux-arm-64.c" 2
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
# 6 "project/radare2/libr/syscall/d/linux-arm-64.c" 2


# 7 "project/radare2/libr/syscall/d/linux-arm-64.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"0.141","getpriority"},
  {"getsockopt","0,209,,"},
  {"0.1028","chmod"},
  {"0.1029","chown"},
  {"setfsgid","0,152,,"},
  {"mount","0,40,,"},
  {"0.269","sendmmsg"},
  {"sigaltstack","0,132,,"},
  {"getsockname","0,204,,"},
  {"bdflush","0,1075,,"},
  {"0.268","setns"},
  {"0.267","syncfs"},
  {"0.266","clock_adjtime"},
  {"0.265","open_by_handle_at"},
  {"0.1024","open"},
  {"0.264","name_to_handle_at"},
  {"0.1025","link"},
  {"0.263","fanotify_mark"},
  {"pread64","0,67,,"},
  {"0.1026","unlink"},
  {"0.262","fanotify_init"},
  {"0.1027","mknod"},
  {"utimes","0,1037,,"},
  {"nanosleep","0,101,,"},
  {"0.261","prlimit64"},
  {"setpriority","0,140,,"},
  {"ioctl","0,29,,"},
  {"fstat","0,1051,,"},
  {"0.260","wait4"},
  {"0.179","sysinfo"},
  {"0.178","gettid"},
  {"readlinkat","0,78,,"},
  {"inotify_init","0,1043,,"},
  {"0.175","geteuid"},
  {"finit_module","0,273,,"},
  {"0.174","getuid"},
  {"0.177","getegid"},
  {"rt_sigaction","0,134,,"},
  {"sched_setaffinity","0,122,,"},
  {"0.176","getgid"},
  {"0.171","adjtimex"},
  {"0.170","settimeofday"},
  {"0.173","getppid"},
  {"recvmsg","0,212,,"},
  {"0.172","getpid"},
  {"getxattr","0,8,,"},
  {"lseek","0,1057,,"},
  {"geteuid","0,175,0,"},
  {"inotify_add_watch","0,27,,"},
  {"sched_getaffinity","0,123,,"},
  {"ftruncate","0,1047,,"},
  {"sched_getscheduler","0,120,,"},
  {"statfs","0,1056,,"},
  {"arch_specific_syscall","0,244,,"},
  {"execve","0,221,,"},
  {"0.276","syscalls"},
  {"0.274","sched_setattr"},
  {"rt_sigtimedwait","0,137,,"},
  {"0.275","sched_getattr"},
  {"0.272","kcmp"},
  {"sethostname","0,161,,"},
  {"0.273","finit_module"},
  {"fstatfs","0,1055,,"},
  {"newfstatat","0,1054,,"},
  {"0.270","process_vm_readv"},
  {"0.271","process_vm_writev"},
  {"swapoff","0,225,,"},
  {"sync","0,81,,"},
  {"umask","0,166,,"},
  {"setreuid","0,145,,"},
  {"semctl","0,191,,"},
  {"bind","0,200,,"},
  {"0.9","lgetxattr"},
  {"0.8","getxattr"},
  {"timer_getoverrun","0,109,,"},
  {"0.3","io_cancel"},
  {"brk","0,214,,"},
  {"sync_file_range","0,84,,"},
  {"0.2","io_submit"},
  {"0.1","io_destroy"},
  {"0.0","io_setup"},
  {"mq_unlink","0,181,1,z"},
  {"0.7","fsetxattr"},
  {"0.6","lsetxattr"},
  {"setdomainname","0,162,,"},
  {"0.5","setxattr"},
  {"perf_event_open","0,241,,"},
  {"0.4","io_getevents"},
  {"clock_settime","0,112,,"},
  {"fsetxattr","0,7,,"},
  {"link","0,1025,,"},
  {"clock_gettime","0,113,,"},
  {"0.159","setgroups"},
  {"0.158","getgroups"},
  {"0.157","setsid"},
  {"setresgid","0,149,,"},
  {"0.156","getsid"},
  {"0.155","getpgid"},
  {"mlock","0,228,,"},
  {"0.154","setpgid"},
  {"0.153","times"},
  {"0.152","setfsgid"},
  {"utimensat","0,88,,"},
  {"0.151","setfsuid"},
  {"0.150","getresgid"},
  {"unlink","0,1026,,"},
  {"getppid","0,173,0,"},
  {"getitimer","0,102,,"},
  {"prctl","0,167,,"},
  {"clock_nanosleep","0,115,,"},
  {"0.1079","fork"},
  {"fadvise64","0,1053,,"},
  {"0.1078","_sysctl"},
  {"restart_syscall","0,128,,"},
  {"pivot_root","0,41,,"},
  {"0.1075","bdflush"},
  {"0.1074","send"},
  {"vfork","0,1071,,"},
  {"0.1077","uselib"},
  {"0.1076","umount"},
  {"0.1071","vfork"},
  {"0.1070","ustat"},
  {"0.1073","recv"},
  {"0.1072","oldwait4"},
  {"listen","0,201,,"},
  {"rt_tgsigqueueinfo","0,240,,"},
  {"chmod","0,1028,2, zx"},
  {"removexattr","0,14,,"},
  {"0.83","fdatasync"},
  {"0.82","fsync"},
  {"0.81","sync"},
  {"0.80","fstat"},
  {"0.87","timerfd_gettime"},
  {"0.86","timerfd_settime"},
  {"0.85","timerfd_create"},
  {"0.84","sync_file_range"},
  {"munlockall","0,231,,"},
  {"dup2","0,1041,2,ii"},
  {"0.1068","poll"},
  {"dup3","0,24,,"},
  {"0.1069","epoll_wait"},
  {"quotactl","0,60,,"},
  {"0.89","acct"},
  {"0.88","utimensat"},
  {"0.1064","creat"},
  {"0.1065","getdents"},
  {"0.1066","futimesat"},
  {"0.1067","select"},
  {"uselib","0,1077,,"},
  {"0.1060","getpgrp"},
  {"0.1061","pause"},
  {"0.1062","time"},
  {"sched_yield","0,124,,"},
  {"msgget","0,186,,"},
  {"0.1063","utime"},
  {"setgid","0,144,,"},
  {"get_robust_list","0,100,,"},
  {"send","0,1074,,"},
  {"request_key","0,218,,"},
  {"setpgid","0,154,,"},
  {"setsockopt","0,208,,"},
  {"fremovexattr","0,16,,"},
  {"sendmsg","0,211,,"},
  {"0.92","personality"},
  {"set_robust_list","0,99,,"},
  {"0.93","exit"},
  {"rt_sigreturn","0,139,,"},
  {"0.90","capget"},
  {"0.91","capset"},
  {"0.96","set_tid_address"},
  {"0.97","unshare"},
  {"0.94","exit_group"},
  {"0.95","waitid"},
  {"syncfs","0,267,,"},
  {"0.1059","alarm"},
  {"0.98","futex"},
  {"0.1058","mmap"},
  {"0.99","set_robust_list"},
  {"0.1057","lseek"},
  {"open_by_handle_at","0,265,,"},
  {"0.1056","statfs"},
  {"creat","0,1064,,"},
  {"0.1055","fstatfs"},
  {"nfsservctl","0,42,,"},
  {"0.1054","newfstatat"},
  {"uname","0,160,,"},
  {"futex","0,98,,"},
  {"0.1053","fadvise64"},
  {"move_pages","0,239,,"},
  {"0.1052","fcntl"},
  {"0.1051","fstat"},
  {"0.1050","lstat"},
  {"gettimeofday","0,169,,"},
  {"set_tid_address","0,96,,"},
  {"epoll_create1","0,20,,"},
  {"personality","0,92,,"},
  {"clock_getres","0,114,,"},
  {"accept4","0,242,,"},
  {"ioprio_set","0,30,,"},
  {"getresgid","0,150,,"},
  {"io_getevents","0,4,,"},
  {"fgetxattr","0,10,,"},
  {"mlockall","0,230,,"},
  {"exit","0,93,1,i"},
  {"0.1048","truncate"},
  {"0.1049","stat"},
  {"0.1046","sendfile"},
  {"ppoll","0,73,,"},
  {"0.1047","ftruncate"},
  {"linkat","0,37,,"},
  {"0.1044","eventfd"},
  {"0.1045","signalfd"},
  {"0.1042","epoll_create"},
  {"0.1043","inotify_init"},
  {"exit_group","0,94,,"},
  {"0.1040","pipe"},
  {"getsid","0,156,,"},
  {"0.1041","dup2"},
  {"llistxattr","0,12,,"},
  {"lsetxattr","0,6,,"},
  {"mq_getsetattr","0,185,,"},
  {"rt_sigpending","0,136,,"},
  {"clock_adjtime","0,266,,"},
  {"sysinfo","0,179,0,"},
  {"semop","0,193,,"},
  {"ioprio_get","0,31,,"},
  {"getuid","0,174,0,"},
  {"0.182","mq_timedsend"},
  {"munlock","0,229,,"},
  {"0.183","mq_timedreceive"},
  {"pipe2","0,59,,"},
  {"0.180","mq_open"},
  {"0.181","mq_unlink"},
  {"0.186","msgget"},
  {"0.187","msgctl"},
  {"0.184","mq_notify"},
  {"0.185","mq_getsetattr"},
  {"signalfd","0,1045,,"},
  {"fchdir","0,50,1,i"},
  {"0.188","msgrcv"},
  {"rmdir","0,1031,,"},
  {"0.189","msgsnd"},
  {"adjtimex","0,171,,"},
  {"tee","0,77,,"},
  {"recvfrom","0,207,,"},
  {"prlimit64","0,261,,"},
  {"writev","0,66,,"},
  {"flock","0,32,,"},
  {"signalfd4","0,74,,"},
  {"pipe","0,1040,,"},
  {"swapon","0,224,,"},
  {"utime","0,1063,,"},
  {"getpeername","0,205,,"},
  {"fsync","0,82,,"},
  {"mq_open","0,180,,"},
  {"gettid","0,178,0,"},
  {"mq_timedreceive","0,183,,"},
  {"pwritev","0,70,,"},
  {"getrusage","0,165,,"},
  {"eventfd","0,1044,,"},
  {"getresuid","0,148,,"},
  {"accept","0,202,,"},
  {"close","0,57,1,i"},
  {"munmap","0,215,,"},
  {"setregid","0,143,,"},
  {"io_cancel","0,3,,"},
  {"set_mempolicy","0,237,,"},
  {"semget","0,190,,"},
  {"mremap","0,216,,"},
  {"acct","0,89,,"},
  {"sched_get_priority_min","0,126,,"},
  {"select","0,1067,,"},
  {"kcmp","0,272,,"},
  {"readahead","0,213,,"},
  {"symlink","0,1036,,"},
  {"0.29","ioctl"},
  {"fchownat","0,54,,"},
  {"epoll_wait","0,1069,,"},
  {"0.28","inotify_rm_watch"},
  {"timerfd_gettime","0,87,,"},
  {"init_module","0,105,,"},
  {"fanotify_init","0,262,,"},
  {"inotify_rm_watch","0,28,,"},
  {"setresuid","0,147,,"},
  {"migrate_pages","0,238,,"},
  {"lgetxattr","0,9,,"},
  {"0.21","epoll_ctl"},
  {"read","0,63,3,ipi"},
  {"0.20","epoll_create1"},
  {"0.193","semop"},
  {"0.23","dup"},
  {"0.192","semtimedop"},
  {"0.22","epoll_pwait"},
  {"0.191","semctl"},
  {"getegid","0,177,0,"},
  {"0.25","fcntl"},
  {"0.190","semget"},
  {"0.24","dup3"},
  {"0.197","shmdt"},
  {"0.27","inotify_add_watch"},
  {"0.196","shmat"},
  {"io_destroy","0,1,,"},
  {"0.26","inotify_init1"},
  {"0.195","shmctl"},
  {"connect","0,203,,"},
  {"0.194","shmget"},
  {"0.199","socketpair"},
  {"0.198","socket"},
  {"chroot","0,51,1,z"},
  {"setfsuid","0,151,,"},
  {"mq_timedsend","0,182,,"},
  {"ustat","0,1070,,"},
  {"splice","0,76,,"},
  {"getpid","0,172,0,"},
  {"sendfile","0,1046,,"},
  {"_","0x0"},
  {"mmap","0,1058,,"},
  {"sched_setscheduler","0,119,,"},
  {"rt_sigqueueinfo","0,138,,"},
  {"0.38","renameat"},
  {"0.39","umount2"},
  {"fchmod","0,52,,"},
  {"getpgrp","0,1060,,"},
  {"0.30","ioprio_set"},
  {"0.31","ioprio_get"},
  {"0.32","flock"},
  {"0.33","mknodat"},
  {"pwrite64","0,68,,"},
  {"mkdir","0,1030,,"},
  {"0.34","mkdirat"},
  {"0.35","unlinkat"},
  {"0.36","symlinkat"},
  {"0.37","linkat"},
  {"pselect6","0,72,,"},
  {"sendto","0,206,,"},
  {"shmctl","0,195,,"},
  {"delete_module","0,106,,"},
  {"time","0,1062,,"},
  {"dup","0,23,,"},
  {"io_submit","0,2,,"},
  {"recv","0,1073,,"},
  {"kill","0,129,,"},
  {"oldwait4","0,1072,,"},
  {"fdatasync","0,83,,"},
  {"setitimer","0,103,,"},
  {"timer_settime","0,110,,"},
  {"fcntl","0,1052,,"},
  {"fstatat","0,79,,"},
  {"getrlimit","0,163,,"},
  {"epoll_pwait","0,22,,"},
  {"sched_setattr","0,274,,"},
  {"wait4","0,260,,"},
  {"setns","0,268,,"},
  {"0.18","lookup_dcookie"},
  {"0.19","eventfd2"},
  {"setgroups","0,159,,"},
  {"0.12","llistxattr"},
  {"0.128","restart_syscall"},
  {"renameat","0,38,,"},
  {"0.13","flistxattr"},
  {"0.129","kill"},
  {"0.10","fgetxattr"},
  {"0.11","listxattr"},
  {"0.16","fremovexattr"},
  {"0.17","getcwd"},
  {"0.14","removexattr"},
  {"0.15","lremovexattr"},
  {"write","0,64,3,izi"},
  {"chown","0,1029,,"},
  {"0.120","sched_getscheduler"},
  {"0.121","sched_getparam"},
  {"0.122","sched_setaffinity"},
  {"0.123","sched_getaffinity"},
  {"0.124","sched_yield"},
  {"0.125","sched_get_priority_max"},
  {"0.126","sched_get_priority_min"},
  {"0.127","sched_rr_get_interval"},
  {"getgroups","0,158,,"},
  {"0.209","getsockopt"},
  {"0.208","setsockopt"},
  {"fork","0,1079,0,"},
  {"flistxattr","0,13,,"},
  {"fchmodat","0,53,,"},
  {"0.201","listen"},
  {"capset","0,91,,"},
  {"0.69","preadv"},
  {"0.200","bind"},
  {"0.68","pwrite64"},
  {"0.203","connect"},
  {"0.202","accept"},
  {"0.205","getpeername"},
  {"0.65","readv"},
  {"0.204","getsockname"},
  {"0.64","write"},
  {"io_setup","0,0,,"},
  {"0.207","recvfrom"},
  {"lremovexattr","0,15,,"},
  {"0.67","pread64"},
  {"0.206","sendto"},
  {"0.66","writev"},
  {"0.61","getdents64"},
  {"epoll_ctl","0,21,,"},
  {"0.60","quotactl"},
  {"0.63","read"},
  {"0.62","lseek"},
  {"mprotect","0,226,,"},
  {"setsid","0,157,,"},
  {"pause","0,1061,,"},
  {"sched_setparam","0,118,,"},
  {"0.218","request_key"},
  {"0.219","keyctl"},
  {"shmat","0,196,,"},
  {"recvmmsg","0,243,,"},
  {"waitid","0,95,,"},
  {"0.210","shutdown"},
  {"getcpu","0,168,,"},
  {"0.78","readlinkat"},
  {"0.211","sendmsg"},
  {"0.79","fstatat"},
  {"0.212","recvmsg"},
  {"open","0,1024,3,zxx"},
  {"rename","0,1034,,"},
  {"0.213","readahead"},
  {"msgsnd","0,189,,"},
  {"0.214","brk"},
  {"0.74","signalfd4"},
  {"0.215","munmap"},
  {"0.75","vmsplice"},
  {"lchown","0,1032,,"},
  {"0.216","mremap"},
  {"0.76","splice"},
  {"0.217","add_key"},
  {"0.108","timer_gettime"},
  {"0.77","tee"},
  {"0.109","timer_getoverrun"},
  {"0.70","pwritev"},
  {"capget","0,90,,"},
  {"inotify_init1","0,26,,"},
  {"0.71","sendfile"},
  {"0.72","pselect6"},
  {"0.73","ppoll"},
  {"0.102","getitimer"},
  {"0.103","setitimer"},
  {"getcwd","0,17,,"},
  {"0.100","get_robust_list"},
  {"0.101","nanosleep"},
  {"get_mempolicy","0,236,,"},
  {"0.106","delete_module"},
  {"0.107","timer_create"},
  {"clone","0,220,,"},
  {"0.104","kexec_load"},
  {"sched_getattr","0,275,,"},
  {"0.105","init_module"},
  {"epoll_create","0,1042,,"},
  {"preadv","0,69,,"},
  {"mknodat","0,33,,"},
  {"access","0,1033,,"},
  {"0.229","munlock"},
  {"symlinkat","0,36,,"},
  {"0.228","mlock"},
  {"getpgid","0,155,,"},
  {"chdir","0,49,1,z"},
  {"0.223","fadvise64"},
  {"0.222","mmap"},
  {"faccessat","0,48,,"},
  {"lstat","0,1050,,"},
  {"0.221","execve"},
  {"0.49","chdir"},
  {"remap_file_pages","0,234,,"},
  {"process_vm_readv","0,270,,"},
  {"0.220","clone"},
  {"rt_sigsuspend","0,133,,"},
  {"0.48","faccessat"},
  {"0.227","msync"},
  {"0.47","fallocate"},
  {"0.226","mprotect"},
  {"0.139","rt_sigreturn"},
  {"eventfd2","0,19,,"},
  {"0.46","ftruncate"},
  {"0.225","swapoff"},
  {"0.138","rt_sigqueueinfo"},
  {"0.45","truncate"},
  {"0.44","fstatfs"},
  {"0.224","swapon"},
  {"0.43","statfs"},
  {"0.42","nfsservctl"},
  {"kexec_load","0,104,,"},
  {"0.41","pivot_root"},
  {"shmget","0,194,,"},
  {"0.40","mount"},
  {"getgid","0,176,0,"},
  {"0.131","tgkill"},
  {"name_to_handle_at","0,264,,"},
  {"0.130","tkill"},
  {"0.133","rt_sigsuspend"},
  {"0.132","sigaltstack"},
  {"0.135","rt_sigprocmask"},
  {"fanotify_mark","0,263,,"},
  {"0.134","rt_sigaction"},
  {"0.137","rt_sigtimedwait"},
  {"0.136","rt_sigpending"},
  {"fallocate","0,47,,"},
  {"tgkill","0,131,,"},
  {"getdents64","0,61,,"},
  {"msgctl","0,187,,"},
  {"0.238","migrate_pages"},
  {"0.239","move_pages"},
  {"vhangup","0,58,,"},
  {"getdents","0,1065,,"},
  {"mq_notify","0,184,,"},
  {"0.232","mincore"},
  {"umount2","0,39,,"},
  {"0.233","madvise"},
  {"times","0,153,,"},
  {"mknod","0,1027,,"},
  {"readlink","0,1035,,"},
  {"0.58","vhangup"},
  {"0.230","mlockall"},
  {"_sysctl","0,1078,,"},
  {"0.59","pipe2"},
  {"0.231","munlockall"},
  {"0.56","openat"},
  {"0.236","get_mempolicy"},
  {"unshare","0,97,,"},
  {"0.57","close"},
  {"0.237","set_mempolicy"},
  {"getpriority","0,141,,"},
  {"0.54","fchownat"},
  {"0.234","remap_file_pages"},
  {"0.55","fchown"},
  {"0.235","mbind"},
  {"reboot","0,142,,"},
  {"vmsplice","0,75,,"},
  {"0.52","fchmod"},
  {"0.53","fchmodat"},
  {"0.168","getcpu"},
  {"mbind","0,235,,"},
  {"0.50","fchdir"},
  {"0.169","gettimeofday"},
  {"lookup_dcookie","0,18,,"},
  {"0.51","chroot"},
  {"semtimedop","0,192,,"},
  {"sendmmsg","0,269,,"},
  {"0.164","setrlimit"},
  {"0.165","getrusage"},
  {"0.166","umask"},
  {"0.167","prctl"},
  {"openat","0,56,,"},
  {"syscalls","0,276,,"},
  {"0.160","uname"},
  {"0.161","sethostname"},
  {"timer_gettime","0,108,,"},
  {"0.162","setdomainname"},
  {"setrlimit","0,164,,"},
  {"0.163","getrlimit"},
  {"madvise","0,233,,"},
  {"sched_get_priority_max","0,125,,"},
  {"shmdt","0,197,,"},
  {"mincore","0,232,,"},
  {"rt_sigprocmask","0,135,,"},
  {"timer_delete","0,111,,"},
  {"sched_rr_get_interval","0,127,,"},
  {"readv","0,65,,"},
  {"poll","0,1068,,"},
  {"stat","0,1049,,"},
  {"0.244","arch_specific_syscall"},
  {"keyctl","0,219,,"},
  {"0.241","perf_event_open"},
  {"sched_getparam","0,121,,"},
  {"0.240","rt_tgsigqueueinfo"},
  {"0.243","recvmmsg"},
  {"0.242","accept4"},
  {"0.119","sched_setscheduler"},
  {"fchown","0,55,,"},
  {"0.118","sched_setparam"},
  {"timerfd_create","0,85,,"},
  {"timer_create","0,107,,"},
  {"0.113","clock_gettime"},
  {"futimesat","0,1066,,"},
  {"0.112","clock_settime"},
  {"0.111","timer_delete"},
  {"0.110","timer_settime"},
  {"listxattr","0,11,,"},
  {"unlinkat","0,35,,"},
  {"0.117","ptrace"},
  {"0.116","syslog"},
  {"0.115","clock_nanosleep"},
  {"0.114","clock_getres"},
  {"mkdirat","0,34,,"},
  {"shutdown","0,210,,"},
  {"0.1039","lstat"},
  {"0.1038","stat"},
  {"umount","0,1076,,"},
  {"tkill","0,130,,"},
  {"timerfd_settime","0,86,,"},
  {"socket","0,198,,"},
  {"0.1031","rmdir"},
  {"process_vm_writev","0,271,,"},
  {"0.1030","mkdir"},
  {"ptrace","0,117,,"},
  {"0.1033","access"},
  {"socketpair","0,199,,"},
  {"0.1032","lchown"},
  {"msync","0,227,,"},
  {"0.1035","readlink"},
  {"0.1034","rename"},
  {"0.1037","utimes"},
  {"0.1036","symlink"},
  {"settimeofday","0,170,,"},
  {"setxattr","0,5,,"},
  {"truncate","0,1048,,"},
  {"syslog","0,116,,"},
  {"0.148","getresuid"},
  {"msgrcv","0,188,,"},
  {"0.149","setresgid"},
  {"0.146","setuid"},
  {"alarm","0,1059,,"},
  {"0.147","setresuid"},
  {"0.144","setgid"},
  {"0.145","setreuid"},
  {"setuid","0,146,,"},
  {"0.142","reboot"},
  {"0.143","setregid"},
  {"add_key","0,217,,"},
  {"0.140","setpriority"},
  {
# 634 "project/radare2/libr/syscall/d/linux-arm-64.c" 3 4
  ((void *)0)
# 634 "project/radare2/libr/syscall/d/linux-arm-64.c"
      , 
# 634 "project/radare2/libr/syscall/d/linux-arm-64.c" 3 4
        ((void *)0)
# 634 "project/radare2/libr/syscall/d/linux-arm-64.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_linux_arm_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_linux_arm_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 649 "project/radare2/libr/syscall/d/linux-arm-64.c" 3 4
        ((void *)0)
# 649 "project/radare2/libr/syscall/d/linux-arm-64.c"
            ;
}

const unsigned int gperf_linux_arm_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_linux_arm_64 = {
  .name = "linux-arm-64",
  .get = &gperf_linux_arm_64_get,
  .hash = &gperf_linux_arm_64_hash,
  .foreach = &gperf_linux_arm_64_foreach
};
