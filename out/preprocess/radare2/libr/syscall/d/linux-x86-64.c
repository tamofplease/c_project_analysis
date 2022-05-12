# 0 "project/radare2/libr/syscall/d/linux-x86-64.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/linux-x86-64.c"


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
# 4 "project/radare2/libr/syscall/d/linux-x86-64.c" 2
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
# 5 "project/radare2/libr/syscall/d/linux-x86-64.c" 2
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
# 6 "project/radare2/libr/syscall/d/linux-x86-64.c" 2


# 7 "project/radare2/libr/syscall/d/linux-x86-64.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"keyctl","0x80,250,5,"},
  {"0x80.74","fsync"},
  {"0x80.75","fdatasync"},
  {"0x80.131","sigaltstack"},
  {"0x80.76","truncate"},
  {"setitimer","0x80,38,3,"},
  {"0x80.130","rt_sigsuspend"},
  {"0x80.269","faccessat"},
  {"0x80.77","ftruncate"},
  {"0x80.133","mknod"},
  {"0x80.268","fchmodat"},
  {"0x80.70","msgrcv"},
  {"0x80.132","utime"},
  {"0x80.267","readlinkat"},
  {"0x80.71","msgctl"},
  {"fchownat","0x80,260,5,"},
  {"0x80.135","personality"},
  {"0x80.266","symlinkat"},
  {"0x80.72","fcntl"},
  {"fchmod","0x80,91,2,"},
  {"0x80.134","uselib"},
  {"0x80.265","linkat"},
  {"0x80.73","flock"},
  {"0x80.137","statfs"},
  {"0x80.264","renameat"},
  {"0x80.136","ustat"},
  {"0x80.263","unlinkat"},
  {"0x80.262","newfstatat"},
  {"io_getevents","0x80,208,4,"},
  {"0x80.261","futimesat"},
  {"0x80.260","fchownat"},
  {"msgctl","0x80,71,3,"},
  {"getxattr","0x80,191,4,"},
  {"link","0x80,86,2,zz"},
  {"set_mempolicy","0x80,238,3,"},
  {"pwritev2","0x80,328,6,"},
  {"kcmp","0x80,312,5,"},
  {"0x80.168","swapoff"},
  {"0x80.49","bind"},
  {"0x80.169","reboot"},
  {"0x80.48","shutdown"},
  {"timer_delete","0x80,226,1,"},
  {"0x80.47","recvmsg"},
  {"0x80.164","settimeofday"},
  {"0x80.46","sendmsg"},
  {"0x80.165","mount"},
  {"0x80.45","recvfrom"},
  {"0x80.166","umount2"},
  {"sigaltstack","0x80,131,2,"},
  {"0x80.278","vmsplice"},
  {"0x80.44","sendto"},
  {"0x80.167","swapon"},
  {"0x80.279","move_pages"},
  {"0x80.43","accept"},
  {"semget","0x80,64,3,"},
  {"0x80.160","setrlimit"},
  {"0x80.276","tee"},
  {"0x80.42","connect"},
  {"0x80.161","chroot"},
  {"0x80.277","sync_file_range"},
  {"0x80.41","socket"},
  {"0x80.162","sync"},
  {"sched_getscheduler","0x80,145,1,"},
  {"0x80.274","get_robust_list"},
  {"0x80.40","sendfile"},
  {"0x80.163","acct"},
  {"0x80.275","splice"},
  {"0x80.272","unshare"},
  {"0x80.273","set_robust_list"},
  {"0x80.270","pselect6"},
  {"0x80.271","ppoll"},
  {"get_robust_list","0x80,274,3,"},
  {"time","0x80,201,1,"},
  {"mq_getsetattr","0x80,245,3,"},
  {"sendmmsg","0x80,307,4,"},
  {"fork","0x80,57,0,"},
  {"perf_event_open","0x80,298,5,"},
  {"rename","0x80,82,2,"},
  {"getpgid","0x80,121,1,"},
  {"linkat","0x80,265,5,"},
  {"0x80.119","setresgid"},
  {"inotify_init","0x80,253,0,"},
  {"0x80.118","getresuid"},
  {"epoll_wait","0x80,232,4,"},
  {"0x80.58","vfork"},
  {"semtimedop","0x80,220,4,"},
  {"0x80.59","execve"},
  {"0x80.56","clone"},
  {"0x80.113","setreuid"},
  {"0x80.57","fork"},
  {"migrate_pages","0x80,256,4,"},
  {"0x80.112","setsid"},
  {"0x80.54","setsockopt"},
  {"0x80.111","getpgrp"},
  {"0x80.55","getsockopt"},
  {"0x80.110","getppid"},
  {"set_tid_address","0x80,218,1,"},
  {"0x80.308","setns"},
  {"0x80.52","getpeername"},
  {"sched_get_priority_max","0x80,146,1,"},
  {"syslog","0x80,103,3,"},
  {"0x80.117","setresuid"},
  {"0x80.309","getcpu"},
  {"0x80.53","socketpair"},
  {"0x80.116","setgroups"},
  {"0x80.50","listen"},
  {"0x80.115","getgroups"},
  {"0x80.51","getsockname"},
  {"0x80.114","setregid"},
  {"setdomainname","0x80,171,2,"},
  {"shmat","0x80,30,3,"},
  {"0x80.300","fanotify_init"},
  {"userfaultfd","0x80,323,1,"},
  {"0x80.301","fanotify_mark"},
  {"0x80.302","prlimit64"},
  {"0x80.303","name_to_handle_at"},
  {"copy_file_range","0x80,326,6,"},
  {"0x80.304","open_by_handle_at"},
  {"0x80.305","clock_adjtime"},
  {"0x80.306","syncfs"},
  {"0x80.307","sendmmsg"},
  {"mq_timedsend","0x80,242,5,"},
  {"rt_sigqueueinfo","0x80,129,3,"},
  {"tee","0x80,276,4,"},
  {"alarm","0x80,37,1,"},
  {"futex","0x80,202,6,"},
  {"0x80.148","sched_rr_get_interval"},
  {"0x80.149","mlock"},
  {"finit_module","0x80,313,3,"},
  {"0x80.146","sched_get_priority_max"},
  {"0x80.147","sched_get_priority_min"},
  {"mlock","0x80,149,2,"},
  {"0x80.144","sched_setscheduler"},
  {"0x80.145","sched_getscheduler"},
  {"0x80.142","sched_setparam"},
  {"0x80.143","sched_getparam"},
  {"0x80.140","getpriority"},
  {"mknodat","0x80,259,4,"},
  {"0x80.141","setpriority"},
  {"pipe","0x80,22,1,"},
  {"wait4","0x80,61,4,"},
  {"sched_getparam","0x80,143,2,"},
  {"epoll_ctl_old","0x80,214,1,"},
  {"setpriority","0x80,141,3,"},
  {"pivot_root","0x80,155,2,"},
  {"getdents64","0x80,217,3,"},
  {"0x80.179","quotactl"},
  {"getpid","0x80,39,0,"},
  {"0x80.178","query_module"},
  {"0x80.175","init_module"},
  {"0x80.174","create_module"},
  {"0x80.177","get_kernel_syms"},
  {"0x80.176","delete_module"},
  {"0x80.171","setdomainname"},
  {"lsetxattr","0x80,189,5,"},
  {"0x80.170","sethostname"},
  {"0x80.328","pwritev2"},
  {"0x80.173","ioperm"},
  {"0x80.329","pkey_mprotect"},
  {"0x80.172","iopl"},
  {"move_pages","0x80,279,6,"},
  {"symlinkat","0x80,266,3,"},
  {"pkey_mprotect","0x80,329,4,"},
  {"pkey_alloc","0x80,330,2,"},
  {"getpriority","0x80,140,2,"},
  {"fsync","0x80,74,1,"},
  {"0x80.322","execveat"},
  {"getitimer","0x80,36,2,"},
  {"0x80.323","userfaultfd"},
  {"0x80.320","kexec_file_load"},
  {"fsetxattr","0x80,190,5,"},
  {"0x80.321","bpf"},
  {"0x80.326","copy_file_range"},
  {"0x80.327","preadv2"},
  {"0x80.324","membarrier"},
  {"0x80.325","mlock2"},
  {"arch_prctl","0x80,158,3,"},
  {"readlink","0x80,89,3,"},
  {"setfsuid","0x80,122,1,"},
  {"lseek","0x80,8,3,"},
  {"sched_setattr","0x80,314,3,"},
  {"0x80.319","memfd_create"},
  {"0x80.318","getrandom"},
  {"vhangup","0x80,153,0,"},
  {"shmdt","0x80,67,1,"},
  {"setxattr","0x80,188,5,"},
  {"clock_gettime","0x80,228,2,"},
  {"0x80.311","process_vm_writev"},
  {"0x80.310","process_vm_readv"},
  {"0x80.313","finit_module"},
  {"0x80.312","kcmp"},
  {"0x80.315","sched_getattr"},
  {"nanosleep","0x80,35,2,"},
  {"0x80.314","sched_setattr"},
  {"0x80.317","seccomp"},
  {"unshare","0x80,272,1,"},
  {"0x80.316","renameat2"},
  {"setsid","0x80,112,0,"},
  {"umount2","0x80,166,2,"},
  {"shmctl","0x80,31,3,"},
  {"readlinkat","0x80,267,4,"},
  {"0x80.159","adjtimex"},
  {"set_thread_area","0x80,205,2,"},
  {"shmget","0x80,29,3,"},
  {"0x80.158","arch_prctl"},
  {"modify_ldt","0x80,154,3,"},
  {"0x80.157","prctl"},
  {"0x80.156","sysctl"},
  {"poll","0x80,7,3,"},
  {"0x80.155","pivot_root"},
  {"init_module","0x80,175,3,"},
  {"madvise","0x80,28,3,"},
  {"0x80.154","modify_ldt"},
  {"futimesat","0x80,261,3,"},
  {"0x80.153","vhangup"},
  {"0x80.152","munlockall"},
  {"0x80.151","mlockall"},
  {"0x80.150","munlock"},
  {"getpmsg","0x80,181,1,"},
  {"statfs","0x80,137,2,"},
  {"getcpu","0x80,309,3,"},
  {"pipe2","0x80,293,2,"},
  {"bind","0x80,49,3,"},
  {"io_pgetevents","0x80,333,6,"},
  {"getcwd","0x80,79,2,"},
  {"rt_sigpending","0x80,127,2,"},
  {"tgkill","0x80,234,3,"},
  {"newfstatat","0x80,262,4,"},
  {"fchdir","0x80,81,1,"},
  {"execve","0x80,59,3,zzz"},
  {"fanotify_mark","0x80,301,5,"},
  {"iopl","0x80,172,2,"},
  {"mknod","0x80,133,3,"},
  {"0x80.333","io_pgetevents"},
  {"0x80.332","statx"},
  {"0x80.331","pkey_free"},
  {"0x80.330","pkey_alloc"},
  {"prctl","0x80,157,5,"},
  {"quotactl","0x80,179,4,"},
  {"uselib","0x80,134,1,"},
  {"unlinkat","0x80,263,3,"},
  {"0x80.334","rseq"},
  {"remap_file_pages","0x80,216,5,"},
  {"fcntl","0x80,72,3,"},
  {"flock","0x80,73,2,"},
  {"restart_syscall","0x80,219,0,"},
  {"settimeofday","0x80,164,2,"},
  {"utimensat","0x80,280,4,"},
  {"capset","0x80,126,2,"},
  {"setpgid","0x80,109,2,"},
  {"getsid","0x80,124,1,"},
  {"fadvise64","0x80,221,4,"},
  {"msgget","0x80,68,2,"},
  {"vserver","0x80,236,1,"},
  {"clone","0x80,56,4,"},
  {"mbind","0x80,237,6,"},
  {"create_module","0x80,174,1,"},
  {"clock_adjtime","0x80,305,2,"},
  {"exit_group","0x80,231,1,"},
  {"setresgid","0x80,119,3,"},
  {"utime","0x80,132,2,"},
  {"gettimeofday","0x80,96,2,"},
  {"semop","0x80,65,3,"},
  {"listen","0x80,50,2,"},
  {"recvmmsg","0x80,299,5,"},
  {"sched_setaffinity","0x80,203,3,"},
  {"mq_notify","0x80,244,2,"},
  {"get_thread_area","0x80,211,2,"},
  {"seccomp","0x80,317,3,"},
  {"rt_tgsigqueueinfo","0x80,297,4,"},
  {"accept4","0x80,288,4,"},
  {"setreuid","0x80,113,2,"},
  {"msgrcv","0x80,70,5,"},
  {"uname","0x80,63,1,"},
  {"pread64","0x80,17,4,"},
  {"prlimit64","0x80,302,4,"},
  {"ioctl","0x80,16,3,"},
  {"epoll_ctl","0x80,233,4,"},
  {"timer_getoverrun","0x80,225,1,"},
  {"connect","0x80,42,3,"},
  {"getppid","0x80,110,0,"},
  {"removexattr","0x80,197,2,"},
  {"lookup_dcookie","0x80,212,3,"},
  {"execveat","0x80,322,5,"},
  {"0x80.281","epoll_pwait"},
  {"0x80.280","utimensat"},
  {"mq_unlink","0x80,241,1,"},
  {"0x80.283","timerfd_create"},
  {"0x80.282","signalfd"},
  {"0x80.285","fallocate"},
  {"read","0x80,0,3,ipi"},
  {"0x80.284","eventfd"},
  {"0x80.287","timerfd_gettime"},
  {"0x80.286","timerfd_settime"},
  {"0x80.289","signalfd4"},
  {"0x80.288","accept4"},
  {"get_mempolicy","0x80,239,5,"},
  {"chmod","0x80,90,2,"},
  {"sendto","0x80,44,6,"},
  {"sysinfo","0x80,99,1,"},
  {"epoll_pwait","0x80,281,6,"},
  {"preadv","0x80,295,5,"},
  {"recvmsg","0x80,47,3,"},
  {"epoll_create","0x80,213,1,"},
  {"process_vm_writev","0x80,311,6,"},
  {"0x80.290","eventfd2"},
  {"0x80.291","epoll_create1"},
  {"0x80.292","dup3"},
  {"_","0x80"},
  {"0x80.293","pipe2"},
  {"readv","0x80,19,3,"},
  {"0x80.294","inotify_init1"},
  {"pause","0x80,34,0,"},
  {"sysfs","0x80,139,3,"},
  {"0x80.295","preadv"},
  {"0x80.296","pwritev"},
  {"geteuid","0x80,107,0,"},
  {"0x80.297","rt_tgsigqueueinfo"},
  {"open_by_handle_at","0x80,304,5,"},
  {"0x80.298","perf_event_open"},
  {"0x80.299","recvmmsg"},
  {"timerfd_gettime","0x80,287,2,"},
  {"rt_sigreturn","0x80,15,1,"},
  {"clock_getres","0x80,229,2,"},
  {"getgroups","0x80,115,2,"},
  {"getuid","0x80,102,0,"},
  {"epoll_wait_old","0x80,215,1,"},
  {"vfork","0x80,58,0,"},
  {"ustat","0x80,136,2,"},
  {"flistxattr","0x80,196,3,"},
  {"times","0x80,100,1,"},
  {"fchmodat","0x80,268,3,"},
  {"umask","0x80,95,1,"},
  {"epoll_create1","0x80,291,1,"},
  {"waitid","0x80,247,5,"},
  {"listxattr","0x80,194,3,"},
  {"getresgid","0x80,120,3,"},
  {"munmap","0x80,11,1,"},
  {"0x80.83","mkdir"},
  {"sendmsg","0x80,46,3,"},
  {"0x80.82","rename"},
  {"0x80.81","fchdir"},
  {"0x80.80","chdir"},
  {"0x80.87","unlink"},
  {"0x80.86","link"},
  {"0x80.85","creat"},
  {"0x80.84","rmdir"},
  {"chown","0x80,92,3,"},
  {"ioprio_set","0x80,251,3,"},
  {"mq_timedreceive","0x80,243,5,"},
  {"0x80.89","readlink"},
  {"truncate","0x80,76,2,"},
  {"0x80.88","symlink"},
  {"setsockopt","0x80,54,5,"},
  {"fanotify_init","0x80,300,2,"},
  {"chdir","0x80,80,1,z"},
  {"mq_open","0x80,240,4,"},
  {"openat","0x80,257,4,"},
  {"msgsnd","0x80,69,4,"},
  {"timer_settime","0x80,223,4,"},
  {"swapoff","0x80,168,1,"},
  {"mprotect","0x80,10,3,"},
  {"chroot","0x80,161,1,"},
  {"fstatfs","0x80,138,2,"},
  {"setns","0x80,308,2,"},
  {"0x80.92","chown"},
  {"0x80.93","fchown"},
  {"0x80.90","chmod"},
  {"0x80.91","fchmod"},
  {"0x80.96","gettimeofday"},
  {"0x80.97","getrlimit"},
  {"0x80.94","lchown"},
  {"0x80.95","umask"},
  {"0x80.98","getrusage"},
  {"sched_getattr","0x80,315,4,"},
  {"setresuid","0x80,117,3,"},
  {"0x80.99","sysinfo"},
  {"sched_getaffinity","0x80,204,3,"},
  {"getrusage","0x80,98,2,"},
  {"brk","0x80,12,1,"},
  {"creat","0x80,85,2,zx"},
  {"mkdirat","0x80,258,3,"},
  {"sched_yield","0x80,24,0,"},
  {"accept","0x80,43,3,"},
  {"open","0x80,2,3,zxx"},
  {"vmsplice","0x80,278,4,"},
  {"timer_gettime","0x80,224,2,"},
  {"setregid","0x80,114,2,"},
  {"fchown","0x80,93,3,"},
  {"ptrace","0x80,101,4,"},
  {"0x80.182","putpmsg"},
  {"munlockall","0x80,152,0,"},
  {"0x80.183","afs_syscall"},
  {"io_setup","0x80,206,2,"},
  {"0x80.180","nfsservctl"},
  {"0x80.181","getpmsg"},
  {"sendfile","0x80,40,4,"},
  {"0x80.186","gettid"},
  {"0x80.187","readahead"},
  {"sync_file_range","0x80,277,4,"},
  {"0x80.184","tuxcall"},
  {"swapon","0x80,167,2,"},
  {"0x80.185","security"},
  {"preadv2","0x80,327,6,"},
  {"0x80.188","setxattr"},
  {"setgid","0x80,106,1,"},
  {"0x80.189","lsetxattr"},
  {"rt_sigtimedwait","0x80,128,4,"},
  {"putpmsg","0x80,182,1,"},
  {"getsockopt","0x80,55,5,"},
  {"msync","0x80,26,3,"},
  {"stat","0x80,4,2,"},
  {"set_robust_list","0x80,273,2,"},
  {"mlockall","0x80,151,1,"},
  {"add_key","0x80,248,4,"},
  {"pwritev","0x80,296,5,"},
  {"personality","0x80,135,1,"},
  {"mount","0x80,165,5,"},
  {"getsockname","0x80,51,3,"},
  {"rseq","0x80,334,4,"},
  {"mremap","0x80,25,5,"},
  {"rt_sigprocmask","0x80,14,3,"},
  {"lstat","0x80,6,2,"},
  {"pselect6","0x80,270,6,"},
  {"inotify_add_watch","0x80,254,3,"},
  {"shutdown","0x80,48,2,"},
  {"setfsgid","0x80,123,1,"},
  {"delete_module","0x80,176,2,"},
  {"getpgrp","0x80,111,0,"},
  {"fstat","0x80,5,2,"},
  {"socket","0x80,41,3,"},
  {"request_key","0x80,249,4,"},
  {"sync","0x80,162,0,"},
  {"mlock2","0x80,325,3,"},
  {"semctl","0x80,66,4,"},
  {"signalfd4","0x80,289,4,"},
  {"nfsservctl","0x80,180,1,"},
  {"io_submit","0x80,209,3,"},
  {"kexec_load","0x80,246,4,"},
  {"afs_syscall","0x80,183,1,"},
  {"sysctl","0x80,156,1,"},
  {"0x80.193","fgetxattr"},
  {"kexec_file_load","0x80,320,5,"},
  {"security","0x80,185,1,"},
  {"0x80.192","lgetxattr"},
  {"0x80.191","getxattr"},
  {"0x80.190","fsetxattr"},
  {"0x80.197","removexattr"},
  {"0x80.209","io_submit"},
  {"sched_get_priority_min","0x80,147,1,"},
  {"0x80.196","flistxattr"},
  {"0x80.208","io_getevents"},
  {"0x80.195","llistxattr"},
  {"inotify_init1","0x80,294,1,"},
  {"0x80.194","listxattr"},
  {"ftruncate","0x80,77,2,"},
  {"0x80.199","fremovexattr"},
  {"rmdir","0x80,84,1,"},
  {"0x80.198","lremovexattr"},
  {"0x80.201","time"},
  {"0x80.200","tkill"},
  {"0x80.203","sched_setaffinity"},
  {"0x80.202","futex"},
  {"0x80.205","set_thread_area"},
  {"0x80.204","sched_getaffinity"},
  {"rt_sigaction","0x80,13,3,"},
  {"0x80.207","io_destroy"},
  {"0x80.206","io_setup"},
  {"syncfs","0x80,306,1,"},
  {"select","0x80,23,5,"},
  {"0x80.29","shmget"},
  {"getrandom","0x80,318,3,pii"},
  {"0x80.28","madvise"},
  {"timerfd_settime","0x80,286,4,"},
  {"ioprio_get","0x80,252,2,"},
  {"acct","0x80,163,1,"},
  {"0x80.218","set_tid_address"},
  {"0x80.219","restart_syscall"},
  {"0x80.21","access"},
  {"0x80.20","writev"},
  {"0x80.23","select"},
  {"0x80.22","pipe"},
  {"0x80.25","mremap"},
  {"0x80.24","sched_yield"},
  {"mkdir","0x80,83,2,"},
  {"0x80.210","io_cancel"},
  {"0x80.27","mincore"},
  {"0x80.211","get_thread_area"},
  {"0x80.26","msync"},
  {"0x80.212","lookup_dcookie"},
  {"timerfd_create","0x80,283,2,"},
  {"pwrite64","0x80,18,4,"},
  {"0x80.213","epoll_create"},
  {"mmap","0x80,9,6,"},
  {"0x80.214","epoll_ctl_old"},
  {"query_module","0x80,178,1,"},
  {"0x80.215","epoll_wait_old"},
  {"mincore","0x80,27,3,"},
  {"eventfd2","0x80,290,2,"},
  {"0x80.216","remap_file_pages"},
  {"0x80.217","getdents64"},
  {"symlink","0x80,88,2,"},
  {"fdatasync","0x80,75,1,"},
  {"capget","0x80,125,2,"},
  {"timer_create","0x80,222,3,"},
  {"fallocate","0x80,285,4,"},
  {"rt_sigsuspend","0x80,130,2,"},
  {"sched_rr_get_interval","0x80,148,2,"},
  {"0x80.38","setitimer"},
  {"0x80.39","getpid"},
  {"0x80.229","clock_getres"},
  {"0x80.30","shmat"},
  {"0x80.228","clock_gettime"},
  {"bpf","0x80,321,3,"},
  {"0x80.31","shmctl"},
  {"socketpair","0x80,53,4,"},
  {"0x80.32","dup"},
  {"0x80.33","dup2"},
  {"0x80.34","pause"},
  {"0x80.35","nanosleep"},
  {"getdents","0x80,78,3,"},
  {"0x80.223","timer_settime"},
  {"0x80.36","getitimer"},
  {"0x80.222","timer_create"},
  {"0x80.37","alarm"},
  {"0x80.221","fadvise64"},
  {"lremovexattr","0x80,198,2,"},
  {"0x80.220","semtimedop"},
  {"0x80.227","clock_settime"},
  {"0x80.226","timer_delete"},
  {"0x80.225","timer_getoverrun"},
  {"statx","0x80,332,5,"},
  {"0x80.224","timer_gettime"},
  {"getpeername","0x80,52,3,"},
  {"kill","0x80,62,2,"},
  {"0x80.128","rt_sigtimedwait"},
  {"writev","0x80,20,3,"},
  {"0x80.129","rt_sigqueueinfo"},
  {"renameat2","0x80,316,5,"},
  {"lchown","0x80,94,3,"},
  {"0x80.238","set_mempolicy"},
  {"0x80.239","get_mempolicy"},
  {"0x80.120","getresgid"},
  {"renameat","0x80,264,4,"},
  {"0x80.121","getpgid"},
  {"gettid","0x80,186,0,"},
  {"0x80.122","setfsuid"},
  {"0x80.123","setfsgid"},
  {"0x80.124","getsid"},
  {"tkill","0x80,200,2,"},
  {"0x80.232","epoll_wait"},
  {"0x80.125","capget"},
  {"0x80.233","epoll_ctl"},
  {"0x80.126","capset"},
  {"0x80.230","clock_nanosleep"},
  {"0x80.127","rt_sigpending"},
  {"0x80.231","exit_group"},
  {"0x80.236","vserver"},
  {"0x80.237","mbind"},
  {"0x80.234","tgkill"},
  {"access","0x80,21,2,"},
  {"0x80.235","utimes"},
  {"recvfrom","0x80,45,6,"},
  {"inotify_rm_watch","0x80,255,2,"},
  {"dup","0x80,32,2,"},
  {"memfd_create","0x80,319,2,"},
  {"io_destroy","0x80,207,1,"},
  {"0x80.18","pwrite64"},
  {"signalfd","0x80,282,3,"},
  {"0x80.19","readv"},
  {"unlink","0x80,87,1,z"},
  {"close","0x80,3,1,i"},
  {"pkey_free","0x80,331,1,"},
  {"0x80.9","mmap"},
  {"0x80.12","brk"},
  {"0x80.8","lseek"},
  {"0x80.249","request_key"},
  {"0x80.13","rt_sigaction"},
  {"0x80.248","add_key"},
  {"clock_nanosleep","0x80,230,4,"},
  {"0x80.10","mprotect"},
  {"0x80.11","munmap"},
  {"munlock","0x80,150,2,"},
  {"splice","0x80,275,6,"},
  {"write","0x80,1,3,izi"},
  {"0x80.16","ioctl"},
  {"0x80.245","mq_getsetattr"},
  {"0x80.17","pread64"},
  {"0x80.3","close"},
  {"0x80.244","mq_notify"},
  {"0x80.14","rt_sigprocmask"},
  {"io_cancel","0x80,210,3,"},
  {"0x80.2","open"},
  {"0x80.247","waitid"},
  {"0x80.15","rt_sigreturn"},
  {"setgroups","0x80,116,2,"},
  {"0x80.1","write"},
  {"0x80.246","kexec_load"},
  {"process_vm_readv","0x80,310,6,"},
  {"0x80.0","read"},
  {"0x80.241","mq_unlink"},
  {"sched_setparam","0x80,142,2,"},
  {"0x80.7","poll"},
  {"0x80.240","mq_open"},
  {"sched_setscheduler","0x80,144,3,"},
  {"0x80.6","lstat"},
  {"0x80.243","mq_timedreceive"},
  {"0x80.5","fstat"},
  {"0x80.242","mq_timedsend"},
  {"0x80.4","stat"},
  {"reboot","0x80,169,4,"},
  {"name_to_handle_at","0x80,303,5,"},
  {"setrlimit","0x80,160,2,"},
  {"setuid","0x80,105,1,"},
  {"getresuid","0x80,118,3,"},
  {"getegid","0x80,108,0,"},
  {"utimes","0x80,235,2,"},
  {"fremovexattr","0x80,199,2,"},
  {"membarrier","0x80,324,2,"},
  {"ppoll","0x80,271,5,"},
  {"0x80.108","getegid"},
  {"0x80.69","msgsnd"},
  {"0x80.109","setpgid"},
  {"dup2","0x80,33,2,"},
  {"0x80.68","msgget"},
  {"dup3","0x80,292,3,"},
  {"faccessat","0x80,269,3,"},
  {"0x80.65","semop"},
  {"0x80.258","mkdirat"},
  {"0x80.64","semget"},
  {"0x80.102","getuid"},
  {"0x80.259","mknodat"},
  {"0x80.67","shmdt"},
  {"getgid","0x80,104,0,"},
  {"0x80.103","syslog"},
  {"0x80.66","semctl"},
  {"exit","0x80,60,1,i"},
  {"llistxattr","0x80,195,3,"},
  {"0x80.100","times"},
  {"0x80.61","wait4"},
  {"eventfd","0x80,284,1,"},
  {"0x80.101","ptrace"},
  {"0x80.254","inotify_add_watch"},
  {"clock_settime","0x80,227,2,"},
  {"0x80.60","exit"},
  {"0x80.106","setgid"},
  {"sethostname","0x80,170,2,"},
  {"0x80.255","inotify_rm_watch"},
  {"0x80.63","uname"},
  {"0x80.107","geteuid"},
  {"0x80.256","migrate_pages"},
  {"0x80.62","kill"},
  {"lgetxattr","0x80,192,4,"},
  {"0x80.104","getgid"},
  {"0x80.257","openat"},
  {"adjtimex","0x80,159,1,"},
  {"0x80.105","setuid"},
  {"0x80.250","keyctl"},
  {"tuxcall","0x80,184,1,"},
  {"0x80.251","ioprio_set"},
  {"0x80.252","ioprio_get"},
  {"0x80.253","inotify_init"},
  {"get_kernel_syms","0x80,177,1,"},
  {"getrlimit","0x80,97,2,"},
  {"ioperm","0x80,173,3,"},
  {"fgetxattr","0x80,193,4,"},
  {"readahead","0x80,187,3,"},
  {"0x80.139","sysfs"},
  {"0x80.138","fstatfs"},
  {"0x80.78","getdents"},
  {"0x80.79","getcwd"},
  {
# 680 "project/radare2/libr/syscall/d/linux-x86-64.c" 3 4
  ((void *)0)
# 680 "project/radare2/libr/syscall/d/linux-x86-64.c"
      , 
# 680 "project/radare2/libr/syscall/d/linux-x86-64.c" 3 4
        ((void *)0)
# 680 "project/radare2/libr/syscall/d/linux-x86-64.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_linux_x86_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_linux_x86_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 695 "project/radare2/libr/syscall/d/linux-x86-64.c" 3 4
        ((void *)0)
# 695 "project/radare2/libr/syscall/d/linux-x86-64.c"
            ;
}

const unsigned int gperf_linux_x86_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_linux_x86_64 = {
  .name = "linux-x86-64",
  .get = &gperf_linux_x86_64_get,
  .hash = &gperf_linux_x86_64_hash,
  .foreach = &gperf_linux_x86_64_foreach
};
