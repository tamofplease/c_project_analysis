# 0 "project/radare2/libr/syscall/d/linux-x86-32.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/syscall/d/linux-x86-32.c"


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
# 4 "project/radare2/libr/syscall/d/linux-x86-32.c" 2
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
# 5 "project/radare2/libr/syscall/d/linux-x86-32.c" 2
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
# 6 "project/radare2/libr/syscall/d/linux-x86-32.c" 2


# 7 "project/radare2/libr/syscall/d/linux-x86-32.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"ssetmask","0x80,69,1,"},
  {"keyctl","0x80,288,5,"},
  {"0x80.74","sethostname"},
  {"0x80.75","setrlimit"},
  {"0x80.131","quotactl"},
  {"0x80.76","getrlimit"},
  {"setitimer","0x80,104,3,"},
  {"0x80.130","get_kernel_syms"},
  {"0x80.269","fstatfs64"},
  {"0x80.77","getrusage"},
  {"0x80.133","fchdir"},
  {"0x80.268","statfs64"},
  {"0x80.70","setreuid"},
  {"0x80.132","getpgid"},
  {"0x80.267","clock_nanosleep"},
  {"0x80.71","setregid"},
  {"fchownat","0x80,298,5,"},
  {"0x80.135","sysfs"},
  {"0x80.266","clock_getres"},
  {"0x80.72","sigsuspend"},
  {"fchmod","0x80,94,2,"},
  {"0x80.134","bdflush"},
  {"0x80.265","clock_gettime"},
  {"0x80.73","sigpending"},
  {"0x80.264","clock_settime"},
  {"0x80.136","personality"},
  {"0x80.263","timer_delete"},
  {"0x80.262","timer_getoverrun"},
  {"io_getevents","0x80,247,5,"},
  {"0x80.261","timer_gettime"},
  {"0x80.260","timer_settime"},
  {"getxattr","0x80,229,4,"},
  {"link","0x80,9,2,zz"},
  {"set_mempolicy","0x80,276,3,"},
  {"pwritev2","0x80,379,6,"},
  {"kcmp","0x80,349,5,"},
  {"0x80.168","poll"},
  {"0x80.49","geteuid"},
  {"0x80.169","nfsservctl"},
  {"0x80.48","signal"},
  {"timer_delete","0x80,263,1,"},
  {"0x80.47","getgid"},
  {"0x80.164","setresuid"},
  {"0x80.46","setgid"},
  {"0x80.165","getresuid"},
  {"0x80.45","brk"},
  {"0x80.166","vm86"},
  {"sigaltstack","0x80,186,2,"},
  {"0x80.278","mq_unlink"},
  {"0x80.167","query_module"},
  {"0x80.279","mq_timedsend"},
  {"0x80.43","times"},
  {"0x80.160","sched_get_priority_min"},
  {"0x80.276","set_mempolicy"},
  {"0x80.42","pipe"},
  {"0x80.161","sched_rr_get_interval"},
  {"0x80.277","mq_open"},
  {"0x80.41","dup"},
  {"0x80.162","nanosleep"},
  {"sched_getscheduler","0x80,157,1,"},
  {"0x80.274","mbind"},
  {"0x80.40","rmdir"},
  {"0x80.163","mremap"},
  {"0x80.275","get_mempolicy"},
  {"0x80.272","fadvise64_64"},
  {"0x80.273","vserver"},
  {"fstat64","0x80,197,2,"},
  {"0x80.270","tgkill"},
  {"0x80.271","utimes"},
  {"get_robust_list","0x80,312,3,"},
  {"time","0x80,13,1,"},
  {"setfsgid32","0x80,216,1,"},
  {"mq_getsetattr","0x80,282,3,"},
  {"sendmmsg","0x80,345,4,"},
  {"fork","0x80,2,0,"},
  {"perf_event_open","0x80,336,5,"},
  {"rename","0x80,38,2,"},
  {"getgroups32","0x80,205,2,"},
  {"getpgid","0x80,132,1,"},
  {"linkat","0x80,303,5,"},
  {"0x80.119","sigreturn"},
  {"inotify_init","0x80,291,0,"},
  {"0x80.118","fsync"},
  {"epoll_wait","0x80,256,4,"},
  {"getuid32","0x80,199,0,"},
  {"0x80.59","olduname"},
  {"0x80.113","vm86old"},
  {"0x80.57","setpgid"},
  {"migrate_pages","0x80,294,4,"},
  {"0x80.112","idle"},
  {"0x80.54","ioctl"},
  {"0x80.111","vhangup"},
  {"nice","0x80,34,1,"},
  {"0x80.55","fcntl"},
  {"0x80.110","iopl"},
  {"set_tid_address","0x80,258,1,"},
  {"0x80.308","pselect6"},
  {"0x80.52","umount"},
  {"sched_get_priority_max","0x80,159,1,"},
  {"syslog","0x80,103,3,"},
  {"0x80.117","ipc"},
  {"0x80.309","ppoll"},
  {"0x80.116","sysinfo"},
  {"0x80.50","getegid"},
  {"0x80.115","swapoff"},
  {"0x80.51","acct"},
  {"0x80.114","wait4"},
  {"setdomainname","0x80,121,2,"},
  {"0x80.300","fstatat64"},
  {"old_readdir","0x80,89,3,"},
  {"userfaultfd","0x80,374,1,"},
  {"0x80.301","unlinkat"},
  {"0x80.302","renameat"},
  {"0x80.303","linkat"},
  {"copy_file_range","0x80,377,6,"},
  {"0x80.304","symlinkat"},
  {"0x80.305","readlinkat"},
  {"0x80.306","fchmodat"},
  {"0x80.307","faccessat"},
  {"mq_timedsend","0x80,279,5,"},
  {"rt_sigqueueinfo","0x80,178,3,"},
  {"old_select","0x80,82,1,"},
  {"tee","0x80,315,4,"},
  {"alarm","0x80,27,1,"},
  {"futex","0x80,240,6,"},
  {"0x80.148","fdatasync"},
  {"0x80.149","sysctl"},
  {"0x80.146","writev"},
  {"finit_module","0x80,350,3,"},
  {"0x80.147","getsid"},
  {"mlock","0x80,150,2,"},
  {"0x80.144","msync"},
  {"0x80.145","readv"},
  {"0x80.142","select"},
  {"0x80.143","flock"},
  {"fchown32","0x80,207,3,"},
  {"0x80.140","llseek"},
  {"mknodat","0x80,297,4,"},
  {"0x80.141","getdents"},
  {"pipe","0x80,42,1,"},
  {"wait4","0x80,114,4,"},
  {"sched_getparam","0x80,155,2,"},
  {"setpriority","0x80,97,3,"},
  {"pivot_root","0x80,217,2,"},
  {"getdents64","0x80,220,3,"},
  {"0x80.179","rt_sigsuspend"},
  {"getpid","0x80,20,0,"},
  {"0x80.178","rt_sigqueueinfo"},
  {"llseek","0x80,140,5,"},
  {"0x80.175","rt_sigprocmask"},
  {"0x80.174","rt_sigaction"},
  {"0x80.177","rt_sigtimedwait"},
  {"0x80.176","rt_sigpending"},
  {"0x80.171","getresgid"},
  {"lsetxattr","0x80,227,5,"},
  {"0x80.170","setresgid"},
  {"0x80.328","eventfd2"},
  {"0x80.173","rt_sigreturn"},
  {"0x80.329","epoll_create1"},
  {"0x80.172","prctl"},
  {"move_pages","0x80,317,6,"},
  {"symlinkat","0x80,304,3,"},
  {"pkey_mprotect","0x80,380,4,"},
  {"geteuid32","0x80,201,0,"},
  {"pkey_alloc","0x80,381,2,"},
  {"setgid32","0x80,214,1,"},
  {"getpriority","0x80,96,2,"},
  {"fsync","0x80,118,1,"},
  {"0x80.322","timerfd_create"},
  {"getitimer","0x80,105,2,"},
  {"0x80.323","eventfd"},
  {"sigreturn","0x80,119,1,"},
  {"0x80.320","utimensat"},
  {"fsetxattr","0x80,228,5,"},
  {"0x80.321","signalfd"},
  {"0x80.326","timerfd_gettime"},
  {"0x80.327","signalfd4"},
  {"0x80.324","fallocate"},
  {"0x80.325","timerfd_settime"},
  {"pwrite","0x80,181,4,"},
  {"arch_prctl","0x80,384,2,"},
  {"readlink","0x80,85,3,"},
  {"setfsuid","0x80,138,1,"},
  {"setresgid32","0x80,210,3,"},
  {"lseek","0x80,19,3,"},
  {"0x80.319","epoll_pwait"},
  {"mmap2","0x80,192,6,"},
  {"sched_setattr","0x80,351,3,"},
  {"0x80.318","getcpu"},
  {"vhangup","0x80,111,0,"},
  {"setxattr","0x80,226,5,"},
  {"ipc","0x80,117,5,"},
  {"clock_gettime","0x80,265,2,"},
  {"0x80.311","set_robust_list"},
  {"0x80.310","unshare"},
  {"0x80.313","splice"},
  {"0x80.312","get_robust_list"},
  {"0x80.315","tee"},
  {"nanosleep","0x80,162,2,"},
  {"0x80.314","sync_file_range"},
  {"0x80.317","move_pages"},
  {"0x80.316","vmsplice"},
  {"unshare","0x80,310,1,"},
  {"setsid","0x80,66,0,"},
  {"readlinkat","0x80,305,4,"},
  {"0x80.159","sched_get_priority_max"},
  {"set_thread_area","0x80,243,1,"},
  {"0x80.158","sched_yield"},
  {"modify_ldt","0x80,123,3,"},
  {"0x80.157","sched_getscheduler"},
  {"0x80.156","sched_setscheduler"},
  {"newfstat","0x80,108,2,"},
  {"poll","0x80,168,3,"},
  {"0x80.155","sched_getparam"},
  {"init_module","0x80,128,2,"},
  {"madvise","0x80,219,3,"},
  {"0x80.154","sched_setparam"},
  {"futimesat","0x80,299,3,"},
  {"0x80.153","munlockall"},
  {"sgetmask","0x80,68,0,"},
  {"0x80.152","mlockall"},
  {"0x80.151","munlock"},
  {"0x80.150","mlock"},
  {"0x80.348","process_vm_writev"},
  {"0x80.349","kcmp"},
  {"statfs","0x80,99,2,"},
  {"0x80.344","syncfs"},
  {"getcpu","0x80,318,3,"},
  {"0x80.345","sendmmsg"},
  {"0x80.346","setns"},
  {"0x80.347","process_vm_readv"},
  {"0x80.340","prlimit64"},
  {"pipe2","0x80,331,2,"},
  {"0x80.341","name_to_handle_at"},
  {"0x80.342","open_by_handle_at"},
  {"bind","0x80,361,3,"},
  {"0x80.343","clock_adjtime"},
  {"io_pgetevents","0x80,385,6,"},
  {"setregid32","0x80,204,2,"},
  {"getcwd","0x80,183,2,"},
  {"rt_sigpending","0x80,176,2,"},
  {"tgkill","0x80,270,3,"},
  {"vm86old","0x80,113,2,"},
  {"fchdir","0x80,133,1,"},
  {"stime","0x80,25,1,"},
  {"0x80.339","fanotify_mark"},
  {"execve","0x80,11,3,zpp"},
  {"0x80.338","fanotify_init"},
  {"fanotify_mark","0x80,339,6,"},
  {"iopl","0x80,110,1,"},
  {"mknod","0x80,14,3,"},
  {"0x80.333","preadv"},
  {"0x80.332","inotify_init1"},
  {"0x80.331","pipe2"},
  {"0x80.330","dup3"},
  {"0x80.337","recvmmsg"},
  {"prctl","0x80,172,5,"},
  {"quotactl","0x80,131,4,"},
  {"uselib","0x80,86,1,"},
  {"0x80.336","perf_event_open"},
  {"unlinkat","0x80,301,3,"},
  {"getresgid32","0x80,211,3,"},
  {"0x80.335","rt_tgsigqueueinfo"},
  {"0x80.334","pwritev"},
  {"remap_file_pages","0x80,257,5,"},
  {"fcntl","0x80,55,3,"},
  {"flock","0x80,143,2,"},
  {"setgroups32","0x80,206,2,"},
  {"newstat","0x80,106,2,"},
  {"lchown32","0x80,198,3,"},
  {"settimeofday","0x80,79,2,"},
  {"utimensat","0x80,320,4,"},
  {"capset","0x80,185,2,"},
  {"setpgid","0x80,57,2,"},
  {"0x80.368","getpeername"},
  {"getsid","0x80,147,1,"},
  {"0x80.369","sendto"},
  {"0x80.366","setsockopt"},
  {"fadvise64","0x80,250,5,"},
  {"0x80.367","getsockname"},
  {"0x80.364","accept4"},
  {"0x80.365","getsockopt"},
  {"vserver","0x80,273,5,"},
  {"0x80.362","connect"},
  {"0x80.363","listen"},
  {"clone","0x80,120,4,"},
  {"0x80.360","socketpair"},
  {"0x80.361","bind"},
  {"mbind","0x80,274,6,"},
  {"create_module","0x80,127,2,"},
  {"clock_adjtime","0x80,343,2,"},
  {"exit_group","0x80,252,1,"},
  {"setresgid","0x80,170,3,"},
  {"utime","0x80,30,2,"},
  {"gettimeofday","0x80,78,2,"},
  {"recvmmsg","0x80,337,5,"},
  {"listen","0x80,363,2,"},
  {"sched_setaffinity","0x80,241,3,"},
  {"mq_notify","0x80,281,2,"},
  {"get_thread_area","0x80,244,1,"},
  {"seccomp","0x80,354,3,"},
  {"0x80.359","socket"},
  {"rt_tgsigqueueinfo","0x80,335,4,"},
  {"0x80.358","execveat"},
  {"0x80.355","getrandom"},
  {"accept4","0x80,364,4,"},
  {"0x80.354","seccomp"},
  {"setreuid","0x80,70,2,"},
  {"0x80.357","bpf"},
  {"uname","0x80,109,1,"},
  {"0x80.356","memfd_create"},
  {"prlimit64","0x80,340,4,"},
  {"0x80.351","sched_setattr"},
  {"ioctl","0x80,54,3,"},
  {"0x80.350","finit_module"},
  {"epoll_ctl","0x80,255,4,"},
  {"0x80.353","renameat2"},
  {"timer_getoverrun","0x80,262,1,"},
  {"0x80.352","sched_getattr"},
  {"connect","0x80,362,3,"},
  {"getppid","0x80,64,0,"},
  {"removexattr","0x80,235,2,"},
  {"lookup_dcookie","0x80,253,4,"},
  {"execveat","0x80,358,5,"},
  {"0x80.281","mq_notify"},
  {"0x80.280","mq_timedreceive"},
  {"mq_unlink","0x80,278,1,"},
  {"0x80.283","kexec_load"},
  {"0x80.282","mq_getsetattr"},
  {"read","0x80,3,3,ipi"},
  {"0x80.284","waitid"},
  {"0x80.287","request_key"},
  {"0x80.286","add_key"},
  {"0x80.289","ioprio_set"},
  {"0x80.288","keyctl"},
  {"sendfile64","0x80,239,4,"},
  {"get_mempolicy","0x80,275,5,"},
  {"chmod","0x80,15,2,"},
  {"sendto","0x80,369,6,"},
  {"sysinfo","0x80,116,1,"},
  {"epoll_pwait","0x80,319,6,"},
  {"preadv","0x80,333,5,"},
  {"recvmsg","0x80,372,3,"},
  {"epoll_create","0x80,254,1,"},
  {"process_vm_writev","0x80,348,6,"},
  {"0x80.290","ioprio_get"},
  {"0x80.291","inotify_init"},
  {"0x80.292","inotify_add_watch"},
  {"_","0x80"},
  {"0x80.293","inotify_rm_watch"},
  {"readv","0x80,145,3,"},
  {"0x80.294","migrate_pages"},
  {"pause","0x80,29,0,"},
  {"sysfs","0x80,135,3,"},
  {"0x80.295","openat"},
  {"0x80.296","mkdirat"},
  {"geteuid","0x80,49,0,"},
  {"0x80.297","mknodat"},
  {"0x80.298","fchownat"},
  {"open_by_handle_at","0x80,342,3,"},
  {"0x80.299","futimesat"},
  {"timerfd_gettime","0x80,326,2,"},
  {"rt_sigreturn","0x80,173,1,"},
  {"clock_getres","0x80,266,2,"},
  {"getgroups","0x80,80,2,"},
  {"0x80.379","pwritev2"},
  {"getuid","0x80,24,0,"},
  {"0x80.378","preadv2"},
  {"0x80.377","copy_file_range"},
  {"0x80.376","mlock2"},
  {"0x80.375","membarrier"},
  {"0x80.374","userfaultfd"},
  {"vfork","0x80,190,0,"},
  {"0x80.373","shutdown"},
  {"0x80.372","recvmsg"},
  {"0x80.371","recvfrom"},
  {"0x80.370","sendmsg"},
  {"ustat","0x80,62,2,"},
  {"flistxattr","0x80,234,3,"},
  {"fcntl64","0x80,221,3,"},
  {"times","0x80,43,1,"},
  {"fchmodat","0x80,306,3,"},
  {"umask","0x80,60,1,"},
  {"sigsuspend","0x80,72,3,"},
  {"epoll_create1","0x80,329,1,"},
  {"getgid32","0x80,200,0,"},
  {"waitid","0x80,284,5,"},
  {"listxattr","0x80,232,3,"},
  {"getresgid","0x80,171,3,"},
  {"munmap","0x80,91,1,"},
  {"0x80.83","symlink"},
  {"0x80.82","old_select"},
  {"sendmsg","0x80,370,3,"},
  {"0x80.81","setgroups"},
  {"0x80.80","getgroups"},
  {"0x80.87","swapon"},
  {"0x80.86","uselib"},
  {"0x80.85","readlink"},
  {"0x80.84","lstat"},
  {"chown","0x80,182,3,"},
  {"ioprio_set","0x80,289,3,"},
  {"mq_timedreceive","0x80,280,5,"},
  {"0x80.89","old_readdir"},
  {"truncate","0x80,92,2,"},
  {"0x80.88","reboot"},
  {"setsockopt","0x80,366,5,"},
  {"fanotify_init","0x80,338,2,"},
  {"chdir","0x80,12,1,z"},
  {"mq_open","0x80,277,4,"},
  {"openat","0x80,295,4,"},
  {"timer_settime","0x80,260,4,"},
  {"swapoff","0x80,115,1,"},
  {"vm86","0x80,166,1,"},
  {"mprotect","0x80,125,3,"},
  {"chroot","0x80,61,1,"},
  {"fstatfs","0x80,100,2,"},
  {"setns","0x80,346,2,"},
  {"0x80.92","truncate"},
  {"0x80.93","ftruncate"},
  {"0x80.90","mmap"},
  {"0x80.91","munmap"},
  {"newlstat","0x80,107,2,"},
  {"0x80.96","getpriority"},
  {"0x80.97","setpriority"},
  {"0x80.94","fchmod"},
  {"0x80.95","fchown"},
  {"sched_getattr","0x80,352,4,"},
  {"setresuid","0x80,164,3,"},
  {"0x80.99","statfs"},
  {"sched_getaffinity","0x80,242,3,"},
  {"getrusage","0x80,77,2,"},
  {"brk","0x80,45,1,"},
  {"creat","0x80,8,2,zx"},
  {"mkdirat","0x80,296,3,"},
  {"sched_yield","0x80,158,0,"},
  {"open","0x80,5,3,zxx"},
  {"vmsplice","0x80,316,4,"},
  {"timer_gettime","0x80,261,2,"},
  {"setregid","0x80,71,2,"},
  {"statfs64","0x80,268,3,"},
  {"fchown","0x80,95,3,"},
  {"ptrace","0x80,26,4,"},
  {"0x80.182","chown"},
  {"munlockall","0x80,153,0,"},
  {"0x80.183","getcwd"},
  {"io_setup","0x80,245,2,"},
  {"0x80.180","pread"},
  {"0x80.181","pwrite"},
  {"sendfile","0x80,187,4,"},
  {"getegid32","0x80,202,0,"},
  {"0x80.186","sigaltstack"},
  {"0x80.187","sendfile"},
  {"sync_file_range","0x80,314,6,"},
  {"0x80.184","capget"},
  {"swapon","0x80,87,2,"},
  {"0x80.185","capset"},
  {"preadv2","0x80,378,6,"},
  {"setfsuid32","0x80,215,1,"},
  {"setgid","0x80,46,1,"},
  {"rt_sigtimedwait","0x80,177,4,"},
  {"getsockopt","0x80,365,5,"},
  {"msync","0x80,144,3,"},
  {"stat","0x80,18,2,"},
  {"set_robust_list","0x80,311,2,"},
  {"mlockall","0x80,152,1,"},
  {"add_key","0x80,286,5,"},
  {"fstatfs64","0x80,269,3,"},
  {"pwritev","0x80,334,5,"},
  {"personality","0x80,136,1,"},
  {"mount","0x80,21,3,"},
  {"getsockname","0x80,367,3,"},
  {"newuname","0x80,122,1,"},
  {"pread","0x80,180,4,"},
  {"rseq","0x80,386,4,"},
  {"sigprocmask","0x80,126,3,"},
  {"signal","0x80,48,2,"},
  {"mremap","0x80,163,4,"},
  {"rt_sigprocmask","0x80,175,3,"},
  {"lstat","0x80,84,2,"},
  {"pselect6","0x80,308,6,"},
  {"inotify_add_watch","0x80,292,3,"},
  {"shutdown","0x80,373,2,"},
  {"setfsgid","0x80,139,1,"},
  {"getresuid32","0x80,209,3,"},
  {"delete_module","0x80,129,1,"},
  {"getpgrp","0x80,65,0,"},
  {"fstat","0x80,28,2,"},
  {"setreuid32","0x80,203,2,"},
  {"socket","0x80,359,3,"},
  {"request_key","0x80,287,4,"},
  {"sync","0x80,36,0,"},
  {"mlock2","0x80,376,3,"},
  {"signalfd4","0x80,327,4,"},
  {"nfsservctl","0x80,169,3,"},
  {"io_submit","0x80,248,3,"},
  {"kexec_load","0x80,283,4,"},
  {"sysctl","0x80,149,1,"},
  {"0x80.192","mmap2"},
  {"0x80.190","vfork"},
  {"0x80.197","fstat64"},
  {"0x80.209","getresuid32"},
  {"sched_get_priority_min","0x80,160,1,"},
  {"0x80.208","setresuid32"},
  {"inotify_init1","0x80,332,1,"},
  {"ftruncate","0x80,93,2,"},
  {"waitpid","0x80,7,3,ipx"},
  {"0x80.199","getuid32"},
  {"rmdir","0x80,40,1,zi"},
  {"0x80.198","lchown32"},
  {"0x80.380","pkey_mprotect"},
  {"0x80.201","geteuid32"},
  {"0x80.381","pkey_alloc"},
  {"0x80.200","getgid32"},
  {"0x80.382","pkey_free"},
  {"0x80.203","setreuid32"},
  {"0x80.383","statx"},
  {"0x80.202","getegid32"},
  {"0x80.384","arch_prctl"},
  {"0x80.205","getgroups32"},
  {"0x80.385","io_pgetevents"},
  {"0x80.204","setregid32"},
  {"0x80.386","rseq"},
  {"rt_sigaction","0x80,174,3,"},
  {"0x80.207","fchown32"},
  {"0x80.206","setgroups32"},
  {"syncfs","0x80,344,1,"},
  {"select","0x80,142,5,"},
  {"0x80.29","pause"},
  {"getrandom","0x80,355,3,pii"},
  {"0x80.28","fstat"},
  {"timerfd_settime","0x80,325,4,"},
  {"ioprio_get","0x80,290,2,"},
  {"acct","0x80,51,1,"},
  {"0x80.218","mincore"},
  {"0x80.219","madvise"},
  {"0x80.21","mount"},
  {"0x80.20","getpid"},
  {"0x80.23","setuid"},
  {"0x80.22","oldumount"},
  {"fadvise64_64","0x80,272,6,"},
  {"0x80.25","stime"},
  {"0x80.24","getuid"},
  {"mkdir","0x80,39,2,zi"},
  {"0x80.210","setresgid32"},
  {"0x80.27","alarm"},
  {"0x80.211","getresgid32"},
  {"0x80.26","ptrace"},
  {"0x80.212","chown32"},
  {"timerfd_create","0x80,322,2,"},
  {"setresuid32","0x80,208,3,"},
  {"idle","0x80,112,0,"},
  {"0x80.213","setuid32"},
  {"mmap","0x80,90,6,"},
  {"0x80.214","setgid32"},
  {"query_module","0x80,167,5,"},
  {"0x80.215","setfsuid32"},
  {"mincore","0x80,218,3,"},
  {"eventfd2","0x80,328,2,"},
  {"0x80.216","setfsgid32"},
  {"0x80.217","pivot_root"},
  {"umount","0x80,52,2,"},
  {"symlink","0x80,83,2,"},
  {"fdatasync","0x80,148,1,"},
  {"capget","0x80,184,2,"},
  {"timer_create","0x80,259,3,"},
  {"fallocate","0x80,324,6,"},
  {"rt_sigsuspend","0x80,179,2,"},
  {"sched_rr_get_interval","0x80,161,2,"},
  {"0x80.38","rename"},
  {"0x80.39","mkdir"},
  {"fstatat64","0x80,300,4,"},
  {"0x80.229","getxattr"},
  {"0x80.30","utime"},
  {"0x80.228","fsetxattr"},
  {"bpf","0x80,357,3,"},
  {"socketpair","0x80,360,4,"},
  {"0x80.33","access"},
  {"0x80.34","nice"},
  {"chown32","0x80,212,3,"},
  {"getdents","0x80,141,3,"},
  {"0x80.36","sync"},
  {"0x80.37","kill"},
  {"0x80.221","fcntl64"},
  {"lremovexattr","0x80,236,2,"},
  {"0x80.220","getdents64"},
  {"0x80.227","lsetxattr"},
  {"0x80.226","setxattr"},
  {"0x80.225","readahead"},
  {"statx","0x80,383,5,"},
  {"0x80.224","gettid"},
  {"oldumount","0x80,22,1,"},
  {"getpeername","0x80,368,3,"},
  {"kill","0x80,37,2,"},
  {"0x80.128","init_module"},
  {"writev","0x80,146,3,"},
  {"0x80.129","delete_module"},
  {"renameat2","0x80,353,5,"},
  {"lchown","0x80,16,3,"},
  {"0x80.238","tkill"},
  {"0x80.239","sendfile64"},
  {"0x80.120","clone"},
  {"renameat","0x80,302,4,"},
  {"0x80.121","setdomainname"},
  {"gettid","0x80,224,0,"},
  {"0x80.122","newuname"},
  {"0x80.123","modify_ldt"},
  {"0x80.124","adjtimex"},
  {"tkill","0x80,238,2,"},
  {"0x80.232","listxattr"},
  {"0x80.125","mprotect"},
  {"0x80.233","llistxattr"},
  {"0x80.126","sigprocmask"},
  {"0x80.230","lgetxattr"},
  {"0x80.127","create_module"},
  {"0x80.231","fgetxattr"},
  {"0x80.236","lremovexattr"},
  {"0x80.237","fremovexattr"},
  {"0x80.234","flistxattr"},
  {"access","0x80,33,2,"},
  {"0x80.235","removexattr"},
  {"recvfrom","0x80,371,6,"},
  {"inotify_rm_watch","0x80,293,2,"},
  {"dup","0x80,41,2,"},
  {"memfd_create","0x80,356,2,"},
  {"io_destroy","0x80,246,1,"},
  {"0x80.18","stat"},
  {"signalfd","0x80,321,3,"},
  {"0x80.19","lseek"},
  {"unlink","0x80,10,1,z"},
  {"sigaction","0x80,67,3,"},
  {"close","0x80,6,1,i"},
  {"pkey_free","0x80,382,1,"},
  {"0x80.9","link"},
  {"0x80.12","chdir"},
  {"0x80.8","creat"},
  {"0x80.249","io_cancel"},
  {"0x80.13","time"},
  {"0x80.248","io_submit"},
  {"clock_nanosleep","0x80,267,4,"},
  {"0x80.10","unlink"},
  {"0x80.11","execve"},
  {"munlock","0x80,151,2,"},
  {"splice","0x80,313,6,"},
  {"write","0x80,4,3,iZi"},
  {"0x80.16","lchown"},
  {"0x80.245","io_setup"},
  {"0x80.3","read"},
  {"0x80.244","get_thread_area"},
  {"0x80.14","mknod"},
  {"io_cancel","0x80,249,3,"},
  {"0x80.2","fork"},
  {"0x80.247","io_getevents"},
  {"0x80.15","chmod"},
  {"setgroups","0x80,81,2,"},
  {"0x80.1","exit"},
  {"0x80.246","io_destroy"},
  {"process_vm_readv","0x80,347,6,"},
  {"0x80.241","sched_setaffinity"},
  {"sched_setparam","0x80,154,2,"},
  {"0x80.7","waitpid"},
  {"0x80.240","futex"},
  {"sched_setscheduler","0x80,156,3,"},
  {"0x80.6","close"},
  {"0x80.243","set_thread_area"},
  {"0x80.5","open"},
  {"0x80.242","sched_getaffinity"},
  {"0x80.4","write"},
  {"reboot","0x80,88,4,"},
  {"setrlimit","0x80,75,2,"},
  {"name_to_handle_at","0x80,341,5,"},
  {"setuid","0x80,23,1,i"},
  {"getresuid","0x80,165,3,"},
  {"getegid","0x80,50,0,"},
  {"olduname","0x80,59,1,"},
  {"utimes","0x80,271,2,"},
  {"fremovexattr","0x80,237,2,"},
  {"membarrier","0x80,375,2,"},
  {"ppoll","0x80,309,5,"},
  {"0x80.108","newfstat"},
  {"0x80.69","ssetmask"},
  {"0x80.109","uname"},
  {"dup2","0x80,63,2,"},
  {"0x80.68","sgetmask"},
  {"dup3","0x80,330,3,"},
  {"setuid32","0x80,213,1,"},
  {"faccessat","0x80,307,3,"},
  {"0x80.65","getpgrp"},
  {"0x80.258","set_tid_address"},
  {"0x80.64","getppid"},
  {"0x80.102","socketcall"},
  {"0x80.259","timer_create"},
  {"0x80.67","sigaction"},
  {"getgid","0x80,47,0,"},
  {"0x80.103","syslog"},
  {"0x80.66","setsid"},
  {"exit","0x80,1,1,i"},
  {"llistxattr","0x80,233,3,"},
  {"0x80.100","fstatfs"},
  {"0x80.61","chroot"},
  {"eventfd","0x80,323,1,"},
  {"0x80.101","ioperm"},
  {"0x80.254","epoll_create"},
  {"clock_settime","0x80,264,2,"},
  {"0x80.60","umask"},
  {"0x80.106","newstat"},
  {"sethostname","0x80,74,2,"},
  {"0x80.255","epoll_ctl"},
  {"0x80.63","dup2"},
  {"0x80.107","newlstat"},
  {"0x80.256","epoll_wait"},
  {"0x80.62","ustat"},
  {"lgetxattr","0x80,230,4,"},
  {"0x80.104","setitimer"},
  {"0x80.257","remap_file_pages"},
  {"adjtimex","0x80,124,1,"},
  {"0x80.105","getitimer"},
  {"0x80.250","fadvise64"},
  {"0x80.252","exit_group"},
  {"bdflush","0x80,134,2,"},
  {"0x80.253","lookup_dcookie"},
  {"get_kernel_syms","0x80,130,1,"},
  {"getrlimit","0x80,76,2,"},
  {"ioperm","0x80,101,3,"},
  {"fgetxattr","0x80,231,4,"},
  {"socketcall","0x80,102,2,"},
  {"readahead","0x80,225,4,"},
  {"0x80.139","setfsgid"},
  {"0x80.138","setfsuid"},
  {"0x80.78","gettimeofday"},
  {"0x80.79","settimeofday"},
  {"sigpending","0x80,73,1,"},
  {
# 740 "project/radare2/libr/syscall/d/linux-x86-32.c" 3 4
  ((void *)0)
# 740 "project/radare2/libr/syscall/d/linux-x86-32.c"
      , 
# 740 "project/radare2/libr/syscall/d/linux-x86-32.c" 3 4
        ((void *)0)
# 740 "project/radare2/libr/syscall/d/linux-x86-32.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_linux_x86_32_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_linux_x86_32_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 755 "project/radare2/libr/syscall/d/linux-x86-32.c" 3 4
        ((void *)0)
# 755 "project/radare2/libr/syscall/d/linux-x86-32.c"
            ;
}

const unsigned int gperf_linux_x86_32_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_linux_x86_32 = {
  .name = "linux-x86-32",
  .get = &gperf_linux_x86_32_get,
  .hash = &gperf_linux_x86_32_hash,
  .foreach = &gperf_linux_x86_32_foreach
};
