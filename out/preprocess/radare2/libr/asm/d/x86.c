# 0 "project/radare2/libr/asm/d/x86.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/d/x86.c"


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
# 4 "project/radare2/libr/asm/d/x86.c" 2
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
# 5 "project/radare2/libr/asm/d/x86.c" 2
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
# 6 "project/radare2/libr/asm/d/x86.c" 2


# 7 "project/radare2/libr/asm/d/x86.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"insb","input from port to string"},
  {"jae","jump short if above or equal (cf=0)"},
  {"insd","input from port to string"},
  {"vshufi32x4","shuffle packed values at 128-bit granularity"},
  {"lodsq","Load string quadword"},
  {"vmovntdq","store packed integers using non-temporal hint"},
  {"vextracti64x4","extract packed integer values"},
  {"ucomiss","unordered compare scalar single-fp values and set eflags"},
  {"vfmadd132pd","fused multiply-add of packed double-precision floating-point values"},
  {"vmxoff","leave vmx operation"},
  {"lodsw","Load string word"},
  {"vextracti64x2","extract packed integer values"},
  {"rsm","resume from system management mode"},
  {"lodsb","Load string byte"},
  {"wrmsr","write to model specific register"},
  {"bswap","byte swap"},
  {"fnstcw","store x87 fpu control word"},
  {"lodsd","Load string doubleword"},
  {"cvtpi2ps","convert packed dw integers to single-fp values"},
  {"vshufpd","packed interleave shuffle of pairs of double-precision floating-point values"},
  {"kmovq","move from and to mask registers"},
  {"movq","move quadword"},
  {"pmovzxwq","zero extend the lower 16-bit integer of each packed qword element into packed signed qword integers"},
  {"vfmaddsub132ps","fused multiply-alternating add/subtract of packed single-precision floating-point values"},
  {"kmovw","move from and to mask registers"},
  {"movs","move data from string to string"},
  {"vrangeps","range restriction calculation for packed pairs of float32 values"},
  {"fst","store floating point value"},
  {"fcmovu","fp conditional move - unordered (pf=1)"},
  {"vpslldq","shift double quadword left logical"},
  {"setnge","set byte on condition - not greater nor equal/less (sf!=of)"},
  {"vshufps","packed interleave shuffle of quadruplets of single-precision floating-point values"},
  {"vcvtpd2dq","convert packed double-precision floating-point values to packed doubleword integers"},
  {"vinserti128","insert packed integer values"},
  {"repne cmps","repeat string operation prefix"},
  {"pmovzxwd","zero extend the lower 16-bit integer of each packed dword element into packed signed dword integers"},
  {"vfmaddsub132pd","fused multiply-alternating add/subtract of packed double-precision floating-point values"},
  {"kmovb","move from and to mask registers"},
  {"sahf","store ah into flags"},
  {"vrangepd","range restriction calculation for packed pairs of float64 values"},
  {"cvtpi2pd","convert packed dw integers to double-fp values"},
  {"vpmovzxdq","packed move with zero extend"},
  {"movsldup","move packed single-fp low and duplicate"},
  {"kmovd","move from and to mask registers"},
  {"movd","move doubleword"},
  {"fcmove","fp conditional move - equal (zf=1)"},
  {"fcmovb","fp conditional move - below (cf=1)"},
  {"vinsertf64x2","insert packed floating-point values"},
  {"vpxord","logical exclusive or"},
  {"vinsertf64x4","insert packed floating-point values"},
  {"vcvttss2si","convert with truncation scalar single-precision floating-point value to integer"},
  {"orpd","bitwise logical or of double-fp values"},
  {"cdqe","sign extend eax into rax"},
  {"rep ins","repeat string operation prefix"},
  {"fld","load floating point value"},
  {"sar","arithmetic right shift"},
  {"vaeskeygenassist","aes round key generation assist"},
  {"vgetexpps","convert exponents of packed sp fp values to sp fp values"},
  {"vmovhps","move high packed single-precision floating-point values"},
  {"bt","bit test"},
  {"roundss","round scalar single-fp values"},
  {"orps","bitwise logical or of single-fp values"},
  {"vpxorq","logical exclusive or"},
  {"cbw","convert byte to word"},
  {"vmovdqu64","move unaligned packed integer values"},
  {"roundsd","round scalar double-fp values"},
  {"vmovhpd","move high packed double-precision floating-point value"},
  {"vgetexppd","convert exponents of packed dp fp values to dp fp values"},
  {"sal","arithmetic left shift"},
  {"outs","output string to port"},
  {"into","call to interrupt if overflow"},
  {"rdfsbase","read fs/gs segment base"},
  {"vmovdqu8","move unaligned packed integer values"},
  {"vcvttps2dq","convert with truncation packed single-precision floating-point values to packed signed doubleword integer values"},
  {"vtestps","packed bit test"},
  {"phaddw","packed horizontal add"},
  {"valignq","align doubleword/quadword vectors"},
  {"rex.wrxb","rex.w, rex.r, rex.x and rex.b combination"},
  {"vtestpd","packed bit test"},
  {"jnbe","jump short if not below or equal/above (cf=0 and zf=0)"},
  {"pminsd","minimum of packed signed dword integers"},
  {"vpmovusdw","down convert dword to word"},
  {"cs","cs segment override prefix"},
  {"rep outs","repeat string operation prefix"},
  {"phaddd","packed horizontal add"},
  {"fldlg2","load constant onto stack: logarithm base 10 (2)"},
  {"pshufw","shuffle packed words"},
  {"loopz","decrement count; jump short if ecx!=0 and zf=1"},
  {"fchs","change sign"},
  {"pminsb","minimum of packed signed byte integers"},
  {"valignd","align doubleword/quadword vectors"},
  {"not","one's complement negation"},
  {"adc","add with carry"},
  {"vptestmq","logical and and set mask"},
  {"add","adds src and dst, stores result on dst"},
  {"nop","no operation"},
  {"vptestmw","logical and and set mask"},
  {"pshufd","shuffle packed doublewords"},
  {"pminsw","minimum of packed signed word integers"},
  {"crc32","accumulate crc32 value"},
  {"vpsrad","shift packed data right arithmetic"},
  {"pminsq","minimum of packed signed integers"},
  {"vpmovusdb","down convert dword to byte"},
  {"rsqrtss","compute recipr. of square root of scalar single-fp value"},
  {"pshufb","packed shuffle bytes"},
  {"vptestmb","logical and and set mask"},
  {"vshufi64x2","shuffle packed values at 128-bit granularity"},
  {"vptestmd","logical and and set mask"},
  {"int3","int 3, software breakpoint"},
  {"test","set eflags after comparing two registers (AF, CF, OF, PF, SF, ZF)"},
  {"loope","decrement count; jump short if ecx!=0 and zf=1"},
  {"int1","call to interrupt procedure"},
  {"jmpf","jump"},
  {"vpsraq","shift packed data right arithmetic"},
  {"jmpe","jump to ia-64 instruction set"},
  {"vpsraw","shift packed data right arithmetic"},
  {"vpmovsxdq","packed move with sign extend"},
  {"mfence","memory fence"},
  {"bound","check array index against bounds"},
  {"jcxz","jump short if ecx register is 0"},
  {"pmovsxbd","sign extend the lower 8-bit integer of each packed dword element into packed signed dword integers"},
  {"cdq","sign extends eax into edx (convert doubleword to quadword)"},
  {"movbe","move data after swapping bytes"},
  {"invd","invalidate internal caches"},
  {"pmuludq","multiply packed unsigned dw integers"},
  {"vpavgw","average packed integers"},
  {"vinsertf128","insert packed floating-point values"},
  {"aesimc","assist in aes Inverse Mix Columns"},
  {"in","input from port"},
  {"vscatterpf1qps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint with intent to write"},
  {"pshuflw","shuffle packed low words"},
  {"pmovsxbq","sign extend the lower 8-bit integer of each packed qword element into packed signed qword integers"},
  {"kunpckdq","unpack for mask registers"},
  {"vpavgb","average packed integers"},
  {"pmovsxbw","sign extend the lower 8-bit integer of each packed word element into packed signed word integers"},
  {"rcpps","compute reciprocals of packed single-fp values"},
  {"vpcmpw","compare packed word values into mask"},
  {"vptest","ptest- logical compare"},
  {"bndmov","move bounds"},
  {"vpsubsw","subtract packed signed integers with signed saturation"},
  {"vpcmpq","compare packed integer values into mask"},
  {"mpsadbw","compute multiple packed sums of absolute difference"},
  {"vmresume","resume virtual machine"},
  {"fsave","store x87 fpu state"},
  {"vinsertps","insert scalar single-precision floating-point value"},
  {"psadbw","compute sum of absolute differences"},
  {"punpckhwd","unpack high data"},
  {"fscale","scale"},
  {"cmpxchg","compare and exchange"},
  {"jecxz","jump short if ecx is 0"},
  {"vdivss","divide scalar single-precision floating-point values"},
  {"pslld","shift packed data left logical"},
  {"vpmullq","multiply packed integers and store low result"},
  {"fxrstor","restore x87 fpu, mmx, xmm, and mxcsr state"},
  {"vunpcklpd","unpack and interleave low packed double-precision floating-point values"},
  {"vscatterpf1qpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint with intent to write"},
  {"vcvttpd2uqq","convert with truncation packed double-precision floating-point values to packed unsigned quadword integers"},
  {"vpmullw","multiply packed signed integers and store low result"},
  {"vrangess","range restriction calculation from a pair of scalar float32 values"},
  {"vaesenc","perform one round of an aes encryption flow"},
  {"fstsw","store x87 fpu status word"},
  {"vpcmpd","compare packed integer values into mask"},
  {"vcvttps2udq","convert with truncation packed single-precision floating-point values to packed unsigned doubleword integer values"},
  {"vpunpckldq","unpack low data"},
  {"frndint","round to integer"},
  {"vfmsubadd132ps","fused multiply-alternating subtract/add of packed single-precision floating-point values"},
  {"vfmsub132ps","fused multiply-subtract of packed single-precision floating-point values"},
  {"vpsubsb","subtract packed signed integers with signed saturation"},
  {"lldt","load local descriptor table register"},
  {"vcvtps2pd","convert packed single-precision floating-point values to packed double-precision floating-point values"},
  {"vminsd","return minimum scalar double-precision floating-point value"},
  {"vpcmpb","compare packed byte values into mask"},
  {"pclmulqdq","performs a carry-less multiplication of two 64-bit polynomials over the finite field GF(2)."},
  {"psllw","shift packed data left logical"},
  {"vcvtps2ph","convert single-precision fp value to 16-bit fp value"},
  {"vrangesd","range restriction calculation from a pair of scalar float64 values"},
  {"vfmsub132pd","fused multiply-subtract of packed double-precision floating-point values"},
  {"psllq","shift packed data left logical"},
  {"vpmulld","multiply packed integers and store low result"},
  {"vfmsubadd132pd","fused multiply-alternating subtract/add of packed double-precision floating-point values"},
  {"vdivsd","divide scalar double-precision floating-point value"},
  {"vunpcklps","unpack and interleave low packed single-precision floating-point values"},
  {"vminss","return minimum scalar single-precision floating-point value"},
  {"cvttpd2dq","convert with trunc. packed double-fp values to dw integers"},
  {"vcvtps2qq","convert packed single precision floating-point values to packed singed quadword integer values"},
  {"jnae","jump short if not above nor equal/below (cf=1)"},
  {"vbroadcastf64x2","load with broadcast floating-point data"},
  {"vbroadcastf64x4","load with broadcast floating-point data"},
  {"vpmovsxbw","packed move with sign extend"},
  {"aesdec","perform one round of an AES decryption flow"},
  {"aad","ascii adjust ax before division"},
  {"vpmovsxbq","packed move with sign extend"},
  {"repe cmps","repeat string operation prefix"},
  {"aaa","ascii adjust after addition"},
  {"aam","ascii adjust ax after multiply"},
  {"vminpd","minimum of packed double-precision floating-point values"},
  {"outsw","Output string word to port"},
  {"vpmovsxbd","packed move with sign extend"},
  {"pmovsxdq","sign extend the lower 32-bit integer of each packed qword element into packed signed qword integers"},
  {"vgetexpss","convert exponents of scalar sp fp values to sp fp value"},
  {"knotq","not mask register"},
  {"aas","ascii adjust al after subtraction"},
  {"ptwrite","ptwrite - write data to a processor trace packet"},
  {"roundps","round packed single-fp values"},
  {"knotw","not mask register"},
  {"vminps","minimum of packed single-precision floating-point values"},
  {"outsb","Output string byte to port"},
  {"fyl2xp1","compute y times log2(x+1) and pop"},
  {"vblendvps","variable blend packed single precision floating-point values"},
  {"outsd","Output string doubleword to port"},
  {"vpermi2d","full permute from two tables overwriting the index"},
  {"rdpid","read processor id"},
  {"cvttss2si","convert with trunc. scalar single-fp value to dw integer"},
  {"vpsrlvq","variable bit shift right logical"},
  {"xsave","save processor extended states"},
  {"vpcmpistri","packed compare implicit length strings, return index"},
  {"or","logical inclusive or"},
  {"rex.b","extension of r/m field, base field, or opcode reg field"},
  {"rdpkru","read protection key rights for user pages"},
  {"vblendvpd","variable blend packed double precision floating-point values"},
  {"vpcmpistrm","packed compare implicit length strings, return mask"},
  {"vpsrlvw","variable bit shift right logical"},
  {"vmovdqu32","move unaligned packed integer values"},
  {"addps","add packed single-fp values"},
  {"knotb","not mask register"},
  {"packssdw","pack with signed saturation"},
  {"roundpd","round packed double-fp values"},
  {"vpermi2q","full permute from two tables overwriting the index"},
  {"vpunpcklbw","unpack low data"},
  {"cvtpd2ps","convert packed double-fp values to single-fp values"},
  {"fldl2t","load constant onto stack: logarithm base 2 (10)"},
  {"vpermi2w","full permute from two tables overwriting the index"},
  {"vgetexpsd","convert exponents of scalar dp fp values to dp fp value"},
  {"knotd","not mask register"},
  {"addpd","add packed double-fp values"},
  {"rex.wrb","rex.w, rex.r and rex.b combination"},
  {"rex.w","64 bit operand size"},
  {"clac","clear ac flag in eflags register"},
  {"vrndscalesd","round scalar float64 value to include a given number of fraction bits"},
  {"vpsrlvd","variable bit shift right logical"},
  {"rex.r","extension of modr/m reg field"},
  {"fcomi","compare floating point values and set eflags"},
  {"comiss","compare scalar ordered single-fp values and set eflags"},
  {"xchg","exchange register/memory with register"},
  {"rex.x","extension of sib index field"},
  {"vcvtusi2ss","convert unsigned integer to scalar single-precision floating-point value"},
  {"fcomp","floating point compare and pop"},
  {"syscall","fast system call"},
  {"jnge","jump short if not greater/less (sf!=of)"},
  {"fldl2e","load constant onto stack: logarithm base 2 (e)"},
  {"smsw","store machine status word"},
  {"fucompp","unordered compare floating point values and pop twice"},
  {"xtest","test if in transactional execution"},
  {"sfence","store fence"},
  {"vpshufb","packed shuffle bytes"},
  {"vrndscaless","round scalar float32 value to include a given number of fraction bits"},
  {"punpckhqdq","unpack high data"},
  {"vinserti64x4","insert packed integer values"},
  {"comisd","compare scalar ordered double-fp values and set eflags"},
  {"vcvtusi2sd","convert unsigned integer to scalar double-precision floating-point value"},
  {"vinserti64x2","insert packed integer values"},
  {"getsec","getsec leaf functions"},
  {"vdivps","divide packed single-precision floating-point values"},
  {"vpshufd","shuffle packed doublewords"},
  {"rex.wrx","rex.w, rex.r and rex.x combination"},
  {"cvtpd2pi","convert packed double-fp values to dw integers"},
  {"cvtdq2ps","convert packed dw integers to single-fp values"},
  {"pshufhw","shuffle packed high words"},
  {"mwait","monitor wait"},
  {"vextracti32x8","extract packed integer values"},
  {"vextracti32x4","extract packed integer values"},
  {"fnop","no operation"},
  {"rsqrtps","compute recipr. of square roots of packed single-fp values"},
  {"fdiv","floating point divide"},
  {"vpackuswb","pack with unsigned saturation"},
  {"vdivpd","divide packed double-precision floating-point values"},
  {"pavgb","average packed integers"},
  {"vcvtsi2sd","convert doubleword integer to scalar double-precision floating-point value"},
  {"fsubr","reverse subtract"},
  {"fsubp","subtract and pop"},
  {"fsubrp","reverse subtract and pop"},
  {"movlpd","move low packed double-fp value"},
  {"cvtdq2pd","convert packed dw integers to double-fp values"},
  {"vmread","read field from virtual-machine control structure"},
  {"vmovdqu16","move unaligned packed integer values"},
  {"vpmulhw","multiply packed signed integers and store high result"},
  {"vpermilpd","permute in-lane of pairs of double-precision floating-point values"},
  {"paddsb","add packed signed integers with signed saturation"},
  {"invlpg","invalidate tlb entry"},
  {"pavgw","average packed integers"},
  {"lidt","load interrupt descriptor table register"},
  {"vcvtsi2ss","convert doubleword integer to scalar single-precision floating-point value"},
  {"haddps","packed single-fp horizontal add"},
  {"jo","jump short if overflow (of=1)"},
  {"pause","spin loop hint"},
  {"paddsw","add packed signed integers with signed saturation"},
  {"jl","jump short if less/not greater (sf!=of)"},
  {"vmpsadbw","compute multiple packed sums of absolute difference"},
  {"haddpd","packed double-fp horizontal add"},
  {"movlps","move low packed single-fp values"},
  {"and","binary and operation between src and dst, stores result on dst"},
  {"jg","jump short if greater (zf=0 and sf=of)"},
  {"je","jump short if equal (zf=1)"},
  {"sqrtss","compute square root of scalar single-fp value"},
  {"lddqu","load unaligned integer 128 bits"},
  {"jc","jump short if carry (cf=1)"},
  {"rcpss","compute reciprocal of scalar single-fp values"},
  {"jb","jump short if below/not above nor equal/carry (cf=1)"},
  {"vpermilps","permute in-lane of quadruples of single-precision floating-point values"},
  {"ja","jump short if above (cf=0 and zf=0)"},
  {"vmulss","multiply scalar single-precision floating-point values"},
  {"bndldx","load extended bounds using address translation"},
  {"divsd","divide scalar double-fp values"},
  {"idiv","signed divide"},
  {"jz","jump short if zero/equal (zf=1)"},
  {"vmulsd","multiply scalar double-precision floating-point value"},
  {"js","jump short if sign (sf=1)"},
  {"fdivrp","floating point reverse divide and pop"},
  {"vpgatherqq","gather packed dword, packed qword with signed qword indices"},
  {"jp","jump short if parity/parity even (pf=1)"},
  {"korq","bitwise logical or masks"},
  {"fldln2","load constant onto stack: natural logarithm (2)"},
  {"vpsllq","shift packed data left logical"},
  {"paddw","add packed integers"},
  {"sqrtsd","compute square root of scalar double-fp value"},
  {"vperm2f128","permute floating-point values"},
  {"vfmsub132ss","fused multiply-subtract of scalar single-precision floating-point values"},
  {"korw","bitwise logical or masks"},
  {"paddq","add packed quadword integers"},
  {"sysexit","fast return from fast system call"},
  {"sha256msg2","perform a final calculation for the next four sha256 message dwords"},
  {"vpmovmskb","move byte mask"},
  {"sha256msg1","perform an intermediate calculation for the next four sha256 message dwords"},
  {"vpsllw","shift packed data left logical"},
  {"divss","divide scalar single-fp values"},
  {"blsr","reset lowest set bit"},
  {"vpmovzxbw","packed move with zero extend"},
  {"sidt","store interrupt descriptor table register"},
  {"vpgatherqd","gather packed dword, packed qword with signed qword indices"},
  {"kaddd","add two masks"},
  {"sqrtps","compute square roots of packed single-fp values"},
  {"paddd","add packed integers"},
  {"korb","bitwise logical or masks"},
  {"kaddb","add two masks"},
  {"cmc","complement carry flag"},
  {"vblendmpd","blend float64/float32 vectors using an opmask control"},
  {"vfmsub132sd","fused multiply-subtract of scalar double-precision floating-point values"},
  {"vpmovzxbq","packed move with zero extend"},
  {"blsi","extract lowest set isolated bit"},
  {"vpslld","shift packed data left logical"},
  {"paddb","add packed integers"},
  {"shr","logic right shift (0 padding)"},
  {"kord","bitwise logical or masks"},
  {"vphsubsw","packed horizontal subtract and saturate"},
  {"rdpmc","read performance-monitoring counters"},
  {"cvttps2pi","convert with trunc. packed single-fp values to dw integers"},
  {"vpand","logical and"},
  {"kaddw","add two masks"},
  {"shl","logic left shift (0 padding)"},
  {"vucomiss","unordered compare scalar single-precision floating-point values and set eflags"},
  {"verw","verify a segment for writing"},
  {"vpmovzxbd","packed move with zero extend"},
  {"ffree","free floating-point register"},
  {"kaddq","add two masks"},
  {"sqrtpd","compute square roots of packed double-fp values"},
  {"verr","verify a segment for reading"},
  {"invpcid","invalidate process-context identifier"},
  {"vblendmps","blend float64/float32 vectors using an opmask control"},
  {"cmp","compare two operands"},
  {"fcom","floating point compare"},
  {"rex.wr","rex.w and rex.r combination"},
  {"vmcall","call to vm monitor"},
  {"setge","set byte on condition - greater or equal/not less (sf=of)"},
  {"vucomisd","unordered compare scalar double-precision floating-point values and set eflags"},
  {"cli","clear interrupt flag"},
  {"fldcw","load x87 fpu control word"},
  {"rex.wx","rex.w and rex.x combination"},
  {"clc","clear carry flag"},
  {"fdivp","floting point divide and pop"},
  {"lmsw","load machine status word"},
  {"cld","clear direction flag"},
  {"rex.wb","rex.w and rex.b combination"},
  {"fdivr","floating point divide reversed"},
  {"wrfsbase","write fs/gs segment base"},
  {"addss","add scalar single-fp values"},
  {"stmxcsr","store mxcsr register state"},
  {"fcos","floating point cosine"},
  {"vmwrite","write field to virtual-machine control structure"},
  {"fprem","partial remainder (for compatibility with i8087 and i287)"},
  {"vscatterpf0dpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint with intent to write"},
  {"vpaddb","add packed integers"},
  {"pusha","push all general-purpose registers"},
  {"vgatherpf1qps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint"},
  {"cpuid","cpu identification"},
  {"pushf","push flags register onto the stack"},
  {"addsd","add scalar double-fp values"},
  {"vpaddd","add packed integers"},
  {"vrndscalepd","round packed float64 values to include a given number of fraction bits"},
  {"vpunpcklqdq","unpack low data"},
  {"rdgsbase","read fs/gs segment base"},
  {"vscatterpf0dps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint with intent to write"},
  {"repne","repeat string operation prefix"},
  {"mul","unsigned multiply"},
  {"vrndscaleps","round packed float32 values to include a given number of fraction bits"},
  {"vgatherpf1qpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint"},
  {"vldmxcsr","load mxcsr register"},
  {"vpackssdw","pack with signed saturation"},
  {"vpaddq","add packed integers"},
  {"kshiftrw","shift right mask registers"},
  {"vpaddw","add packed integers"},
  {"lar","load acces right byte"},
  {"out","output to port"},
  {"kshiftrq","shift right mask registers"},
  {"vxorpd","bitwise logical xor of packed double precision floating-point values"},
  {"fild","load integer"},
  {"fsincos","sine and cosine"},
  {"repnz","repeat string operation prefix"},
  {"kshiftrd","shift right mask registers"},
  {"vfmaddsub213ps","fused multiply-alternating add/subtract of packed single-precision floating-point values"},
  {"kshiftrb","shift right mask registers"},
  {"movsxd","move with sign-extension"},
  {"vxorps","bitwise logical xor of packed single precision floating-point values"},
  {"vfmaddsub213pd","fused multiply-alternating add/subtract of packed double-precision floating-point values"},
  {"cmovpe","conditional move - parity even/parity (pf=1)"},
  {"fpatan","partial arctangent and pop"},
  {"lfs","load far pointer"},
  {"cmovpo","conditional move - parity odd/not parity (pf=0)"},
  {"xrstors","restore processor extended states supervisor"},
  {"sldt","store local descriptor table register."},
  {"jpo","jump short if parity odd/not parity (pf=0)"},
  {"vmxon","enter vmx operation"},
  {"movshdup","move packed single-fp high and duplicate"},
  {"kunpckbw","unpack for mask registers"},
  {"vpmaddwd","multiply and add packed integers"},
  {"vmulps","multiply packed single-precision floating-point values"},
  {"jpe","jump short if parity even/parity (pf=1)"},
  {"vmaskmovdqu","store selected bytes of double quadword"},
  {"vfnmsub231ps","fused negative multiply-subtract of packed single-precision floating-point values"},
  {"vcvtpd2udq","convert packed double-precision floating-point values to packed unsigned doubleword integers"},
  {"fmul","floating point multiply"},
  {"vshuff32x4","shuffle packed values at 128-bit granularity"},
  {"lgs","load far pointer"},
  {"vmulpd","multiply packed double-precision floating-point values"},
  {"pdep","parallel bits deposit"},
  {"rorx","rotate right logical without affecting flags"},
  {"vhsubpd","packed double-fp horizontal subtract"},
  {"vmovlps","move low packed single-precision floating-point values"},
  {"vcvttpd2udq","convert with truncation packed double-precision floating-point values to packed unsigned doubleword integers"},
  {"pcmpestri","packed compare explicit length strings, return index"},
  {"vcvtsd2si","convert scalar double-precision floating-point value to doubleword integer"},
  {"fnstsw","store x87 fpu status word"},
  {"vpmovdw","down convert dword to word"},
  {"rcr","rotate bits right (with CF)"},
  {"inc","increment by 1"},
  {"pcmpestrm","packed compare explicit length strings, return mask"},
  {"vcvttps2uqq","convert with truncation packed single precision floating-point values to packed unsigned quadword integer values"},
  {"punpcklqdq","unpack low data"},
  {"vfnmsub231pd","fused negative multiply-subtract of packed double-precision floating-point values"},
  {"vhsubps","packed single-fp horizontal subtract"},
  {"movddup","move one double-fp and duplicate"},
  {"vcvtsd2ss","convert scalar double-precision floating-point value to scalar single-precision floating-point value"},
  {"psubq","subtract packed quadword integers"},
  {"vpmovdb","down convert dword to byte"},
  {"kandnb","bitwise logical and not masks"},
  {"psubw","subtract packed integers"},
  {"vcvttsd2si","convert with truncation scalar double-precision floating-point value to signed integer"},
  {"vfnmsub231ss","fused negative multiply-subtract of scalar single-precision floating-point values"},
  {"vcvtss2usi","convert scalar single-precision floating-point value to unsigned doubleword integer"},
  {"ins","input from port to string"},
  {"fld1","load constant onto stack +1.0f"},
  {"rcl","rotate bits left (with CF)"},
  {"vmovlpd","move low packed double-precision floating-point value"},
  {"lds","load far pointer"},
  {"kandnd","bitwise logical and not masks"},
  {"int","call to interrupt procedure"},
  {"psubb","subtract packed integers"},
  {"psubd","subtract packed integers"},
  {"vgatherpf0dpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint"},
  {"kandnq","bitwise logical and not masks"},
  {"kandnw","bitwise logical and not masks"},
  {"vfnmsub231sd","fused negative multiply-subtract of scalar double-precision floating-point values"},
  {"lea","load effective address"},
  {"lfence","load fence"},
  {"vpsrld","shift packed data right logical"},
  {"insertps","insert scalar single-precision floating-point value"},
  {"rex.rx","rex.r and rex.x combination"},
  {"divpd","divide packed double-fp values"},
  {"neg","two's complement negation"},
  {"jnle","jump short if not less nor equal/greater (zf=0 and sf=of)"},
  {"rex.rb","rex.r and rex.b combination"},
  {"vpsrlw","shift packed data right logical"},
  {"fnsetpm","set protected mode (8087 only, otherwise FNOP)"},
  {"les","load far pointer"},
  {"vgatherpf0dps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint"},
  {"vpternlogd","bitwise ternary logic"},
  {"cwde","convert word to doubleword"},
  {"vpsrlq","shift packed data right logical"},
  {"sha1rnds4","perform four rounds of sha1 operation"},
  {"vprord","bit rotate right"},
  {"divps","divide packed single-fp values"},
  {"rep","repeats next instruction ECX times"},
  {"movapd","move aligned packed double-fp values"},
  {"pmaddwd","multiply and add packed integers"},
  {"fndisi","disable npx (numeric coprocessor extension) interrupts (8087 only, otherwise, FNOP)"},
  {"ret","return from subroutine. pop 4 bytes from esp and jump there."},
  {"packuswb","pack with unsigned saturation"},
  {"vpternlogq","bitwise ternary logic"},
  {"ficomp","integer compare and pop"},
  {"rex","access to new 8-bit registers"},
  {"fldz","load constant onto stack 0.0f"},
  {"punpckhbw","unpack high data"},
  {"movaps","move aligned packed single-fp values"},
  {"ud1","undefined instruction"},
  {"ud2","undefined instruction"},
  {"fcmovbe","fp conditional move - below or equal (cf=1 or zf=1)"},
  {"vprorq","bit rotate right"},
  {"ldmxcsr","load mxcsr register"},
  {"ss","ss segment override prefix"},
  {"prorq","bit rotate right"},
  {"vfnmadd132ss","fused negative multiply-add of scalar single-precision floating-point values"},
  {"fcomip","compare floating point values and set eflags and pop"},
  {"rep stos","repeat string operation prefix"},
  {"vmovntdqa","load double quadword non-temporal aligned hint"},
  {"arpl","adjust rpl field of segment selector"},
  {"vfnmadd132sd","fused negative multiply-add of scalar double-precision floating-point values"},
  {"vunpckhpd","unpack and interleave high packed double-precision floating-point values"},
  {"wbinvd","write back and invalidate cache"},
  {"pmulhrsw","packed multiply high with round and scale"},
  {"fisub","integer substract"},
  {"push","push word, doubleword or quadword onto the stack"},
  {"invvpid","invalidate translations based on vpid"},
  {"prord","bit rotate right"},
  {"invept","invalidate translations derived from ept"},
  {"lahf","load status flags into ah register"},
  {"rdmsr","read from model specific register"},
  {"vprolq","bit rotate left"},
  {"movhlps","move packed single-fp values high to low"},
  {"vstmxcsr","store mxcsr register state"},
  {"pxor","logical exclusive or"},
  {"rex.xb","rex.x and rex.b combination"},
  {"vhaddpd","packed double-fp horizontal add"},
  {"vunpckhps","unpack and interleave high packed single-precision floating-point values"},
  {"emms","empty mmx technology state"},
  {"vcvtdq2pd","convert packed doubleword integers to packed double-precision floating-point values"},
  {"cmovs","conditional move - sign (sf=1)"},
  {"vpcompressd","store sparse packed doubleword integer values into dense memory/register"},
  {"cmovp","conditional move - parity/parity even (pf=1)"},
  {"cvtss2sd","convert scalar single-fp value to scalar double-fp value"},
  {"pmaddubsw","multiply and add packed signed and unsigned bytes"},
  {"vhaddps","packed single-fp horizontal add"},
  {"ror","rotate bits right"},
  {"cmovz","conditional move - zero/equal (zf=1)"},
  {"pabsd","packed absolute value"},
  {"xacquire","hardware lock elision prefix hints"},
  {"vprold","bit rotate left"},
  {"punpckhdq","unpack high data"},
  {"cvtss2si","convert scalar single-fp value to dw integer"},
  {"pabsb","packed absolute value"},
  {"cmovb","conditional move - below/not above nor equal/carry (cf=1)"},
  {"vpbroadcastmb2q","broadcast mask to vector register"},
  {"cmovc","conditional move - carry/below/not above or equal (cf=1)"},
  {"rol","rotate bits left"},
  {"cmova","conditional move - above/not below nor equal (cf=0 and zf=0)"},
  {"vmptrld","load pointer to virtual-machine control structure"},
  {"cmovg","conditional move - greater/not less nor equal (zf=0 and sf=of)"},
  {"vpcompressq","store sparse packed quadword integer values into dense memory/register"},
  {"vplzcntd","count the number of leading zero bits for packed dword, packed qword values"},
  {"vcvtdq2ps","convert packed doubleword integers to packed single-precision floating-point values"},
  {"cmove","conditional move - equal/zero (zf=1)"},
  {"maxsd","return maximum scalar double-fp value"},
  {"pabsw","packed absolute value"},
  {"cvttsd2si","conv. with trunc. scalar double-fp value to signed dw int"},
  {"pabsq","packed absolute value"},
  {"vpunpckhqdq","unpack high data"},
  {"vzeroupper","zero upper bits of ymm registers"},
  {"rdrand","read random number"},
  {"cmovo","conditional move - overflow (of=1)"},
  {"cmovl","conditional move - less/not greater nor equal (sf!=of)"},
  {"sarx","shift without affecting flags"},
  {"fwait","check pending unmasked floating-point exceptions"},
  {"maxss","return maximum scalar single-fp value"},
  {"vpaddsw","add packed signed integers with signed saturation"},
  {"ptest","logical compare"},
  {"vpmovd2m","convert a vector register to a mask"},
  {"rdtscp","read time-stamp counter and processor id"},
  {"vplzcntq","count the number of leading zero bits for packed dword, packed qword values"},
  {"vmovshdup","replicate single fp values"},
  {"vpaddsb","add packed signed integers with signed saturation"},
  {"vpblendd","blend packed dwords"},
  {"xabort","transactional abort"},
  {"cwd","convert word to doubleword"},
  {"vpunpckhbw","unpack high data"},
  {"vscatterpf1dpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint with intent to write"},
  {"maxpd","return maximum packed double-fp values"},
  {"vpscatterdd","scatter packed dword, packed qword with signed dword, signed qword indices"},
  {"xrelease","hardware lock elision prefix hints"},
  {"setae","set byte on condition - above or equal/not below/not carry (cf=0)"},
  {"prefetchnta","prefetch data into caches"},
  {"vpblendw","blend packed words"},
  {"vpscatterdq","scatter packed dword, packed qword with signed dword, signed qword indices"},
  {"vandpd","bitwise logical and of packed double precision floating-point values"},
  {"maxps","return maximum packed single-fp values"},
  {"rex.wxb","rex.w, rex.x and rex.b combination"},
  {"bndstx","store extended bounds using address translation"},
  {"kxnord","bitwise logical xnor masks"},
  {"vscatterpf1dps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint with intent to write"},
  {"extractps","extract packed single-fp value"},
  {"kxnorb","bitwise logical xnor masks"},
  {"fcmovnu","fp conditional move - not unordered (pf=0)"},
  {"vandps","bitwise logical and of packed single precision floating-point values"},
  {"vpaddusb","add packed unsigned integers with unsigned saturation"},
  {"vlddqu","load unaligned integer 128 bits"},
  {"vcompresspd","store sparse packed double-precision floating-point values into dense memory"},
  {"vpmulhuw","multiply packed unsigned integers and store high result"},
  {"fcmovnb","fp conditional move - not below (cf=0)"},
  {"phsubw","packed horizontal subtract"},
  {"int 3","call to interrupt procedure"},
  {"kxnorw","bitwise logical xnor masks"},
  {"setbe","set byte on condition - below or equal/not above (cf=1 or zf=1)"},
  {"vphaddd","packed horizontal add"},
  {"kxnorq","bitwise logical xnor masks"},
  {"vpaddusw","add packed unsigned integers with unsigned saturation"},
  {"fcmovne","fp conditional move - not equal (zf=0)"},
  {"fprem1","ieee partial remainder"},
  {"vpconflictq","detect conflicts within a vector of packed dword/qword values into dense memory/ register"},
  {"vcvttsd2usi","convert with truncation scalar double-precision floating-point value to unsigned integer"},
  {"movhpd","move high packed double-fp value"},
  {"phsubd","packed horizontal subtract"},
  {"vphaddw","packed horizontal add"},
  {"vcompressps","store sparse packed single-precision floating-point values into dense memory"},
  {"fnclex","clear exceptions"},
  {"vpconflictd","detect conflicts within a vector of packed dword/qword values into dense memory/ register"},
  {"bzhi","zero high bits starting with specified bit position"},
  {"cvtps2pd","convert packed single-fp values to double-fp values"},
  {"palignr","packed align right"},
  {"fninit","initialize fpu (floating-point unit)"},
  {"sysret","return from fast system call"},
  {"pmovsxwq","sign extend the lower 16-bit integer of each packed qword element into packed signed qword integers"},
  {"movhps","move high packed single-fp values"},
  {"adcx","unsigned integer addition of two operands with carry flag"},
  {"repne scas","repeat string operation prefix"},
  {"lods","load string"},
  {"cqo","sign extends rax into rdx (convert quadword to double-quadword)"},
  {"fdisi","disable npx (numeric coprocessor extension) interrupt"},
  {"por","bitwise logical or"},
  {"ftst","test"},
  {"dppd","dot product of packed double-fp values"},
  {"pop","pops last element of stack and stores the result in argument"},
  {"cvtps2pi","convert packed single-fp values to dw integers"},
  {"vmovupd","move unaligned packed double-precision floating-point values"},
  {"vpmovsdb","down convert dword to byte"},
  {"vfnmadd132ps","fused negative multiply-add of packed single-precision floating-point values"},
  {"pmovsxwd","sign extend the lower 16-bit integer of each packed dword element into packed signed dword integers"},
  {"vcvtqq2ps","convert packed quadword integers to packed single-precision floating-point values"},
  {"sgdt","store global descriptor table register"},
  {"kortestd","or masks and set flags"},
  {"vorps","bitwise logical or of packed single precision floating-point values"},
  {"vdbpsadbw","double block packed sum-absolute-differences (sad) on unsigned bytes"},
  {"dpps","dot product of packed single-fp values"},
  {"vmovups","move unaligned packed single-precision floating-point values"},
  {"kortestb","or masks and set flags"},
  {"vpsravw","variable bit shift right arithmetic"},
  {"vcvtss2sd","convert scalar single-precision floating-point value to scalar double-precision floating-point value"},
  {"vfnmadd132pd","fused negative multiply-add of packed double-precision floating-point values"},
  {"vpsravq","variable bit shift right arithmetic"},
  {"vcvtss2si","convert scalar single-precision floating-point value to doubleword integer"},
  {"vorpd","bitwise logical or of packed double precision floating-point values"},
  {"vcvtqq2pd","convert packed quadword integers to packed double-precision floating-point values"},
  {"vpmovsdw","down convert dword to word"},
  {"kortestw","or masks and set flags"},
  {"kortestq","or masks and set flags"},
  {"vpsravd","variable bit shift right arithmetic"},
  {"vmaskmovpd","conditional simd packed loads and stores"},
  {"vrsqrt14ps","compute approximate reciprocals of square roots of packed float32 values"},
  {"cmovbe","conditional move - below or equal/not above (cf=1 or zf=1)"},
  {"shrd","double precision shift right"},
  {"fbld","load binary coded decimal"},
  {"pmuldq","multiply packed doubleword integers"},
  {"vmaskmovps","conditional simd packed loads and stores"},
  {"pinsrq","insert a qword value from a register or memory into an XMM register"},
  {"setle","set byte on condition - less or equal/not greater (zf=1 or sf!=of)"},
  {"pinsrw","insert a word value from a register or memory into an XMM register"},
  {"shrx","shift without affecting flags"},
  {"prolvq","bit rotate left"},
  {"vrsqrt14pd","compute approximate reciprocals of square roots of packed float64 values"},
  {"pblendw","blend packed words"},
  {"fnstenv","store x87 fpu environment"},
  {"fidivr","integer divide reserved"},
  {"pinsrb","insert a byte value from a register or memory into an XMM register"},
  {"vpbroadcastmw2d","broadcast mask to vector register"},
  {"pinsrd","insert a dword value from a register or memory into an XMM register"},
  {"prolvd","bit rotate left"},
  {"lzcnt","count the number of leading zero bits"},
  {"pmaxuw","maximum of packed unsigned word integers"},
  {"pmaxuq","maximum of packed unsigned integers"},
  {"fxch","exchange register contents"},
  {"prefetcht2","prefetch data into caches"},
  {"prefetcht0","prefetch data into caches"},
  {"vbroadcasti32x8","load integer and broadcast"},
  {"pmaxud","maximum of packed unsigned dword integers"},
  {"prefetcht1","prefetch data into caches"},
  {"pmaxub","maximum of packed unsigned byte integers"},
  {"xadd","exchange and add"},
  {"vscatterdpd","scatter packed single, packed double with signed dword and qword indices"},
  {"vbroadcasti32x2","load integer and broadcast"},
  {"fistp","store integer and pop"},
  {"fsub","floating point subtract"},
  {"setnl","set byte on condition - not less/greater or equal (sf=of)"},
  {"setno","set byte on condition - not overflow (of=0)"},
  {"vfmadd231ps","fused multiply-add of packed single-precision floating-point values"},
  {"vpunpcklwd","unpack low data"},
  {"setna","set byte on condition - not above/below or equal (cf=1 or zf=1)"},
  {"punpcklwd","unpack low data"},
  {"vscatterdps","scatter packed single, packed double with signed dword and qword indices"},
  {"lss","load far pointer"},
  {"unpckhps","unpack and interleave high packed single-fp values"},
  {"setnc","set byte on condition - not carry/above or equal/not below (cf=0)"},
  {"setnb","set byte on condition - not below/above or equal/not carry (cf=0)"},
  {"bndmk","make bounds"},
  {"setne","set byte on condition - not equal/not zero (zf=0)"},
  {"vphaddsw","packed horizontal add and saturate"},
  {"setng","set byte on condition - not greater/less or equal (zf=1 or sf!=of)"},
  {"fcompp","floating point compare and pop twice"},
  {"vmovmskpd","extract packed double-precision floating-point sign mask"},
  {"setnz","set byte on condition - not zero/not equal (zf=0)"},
  {"lsl","load segment limit"},
  {"vinserti32x4","insert packed integer values"},
  {"unpckhpd","unpack and interleave high packed double-fp values"},
  {"movntdq","store double quadword using non-temporal hint"},
  {"setnp","set byte on condition - not parity/parity odd (pf=0)"},
  {"pushal","push all general-purpose registers"},
  {"vfmadd231pd","fused multiply-add of packed double-precision floating-point values"},
  {"setns","set byte on condition - not sign (sf=0)"},
  {"vcvttpd2dq","convert with truncation packed double-precision floating-point values to packed doubleword integers"},
  {"vpunpckhdq","unpack high data"},
  {"vmovmskps","extract packed single-precision floating-point sign mask"},
  {"aesenc","perform one round of an AES encryption flow"},
  {"vpor","bitwise logical or"},
  {"pushad","push all general-purpose registers"},
  {"vpmulhrsw","packed multiply high with round and scale"},
  {"vinserti32x8","insert packed integer values"},
  {"movdq2q","move quadword from xmm to mmx technology register"},
  {"clflushopt","flush cache line optimized"},
  {"vpalignr","packed align right"},
  {"pmaxsq","maximum of packed signed integers"},
  {"vcvtpd2uqq","convert packed double-precision floating-point values to packed unsigned quadword integers"},
  {"pmaxsw","maximum of packed signed word integers"},
  {"vporq","bitwise logical or"},
  {"fsetpm","set protected mode"},
  {"kunpckwd","unpack for mask registers"},
  {"cmovnle","conditional move - not less nor equal/greater (zf=0 and sf=of)"},
  {"fstp","store floating point value and pop"},
  {"pmaxsb","maximum of packed signed byte integers"},
  {"stosw","store string word"},
  {"vpclmulqdq","pclmulqdq - carry-less multiplication quadword"},
  {"cmpxchg16b","compare and exchange bytes"},
  {"vzeroall","zero all ymm registers"},
  {"vpord","bitwise logical or"},
  {"vcomisd","compare scalar ordered double-precision floating-point values and set eflags"},
  {"pmaxsd","maximum of packed signed dword integers"},
  {"stosq","store string quadword"},
  {"lock","instruction prefix to setup the LOCK pin"},
  {"vmlaunch","launch virtual machine"},
  {"vfnmsub132ps","fused negative multiply-subtract of packed single-precision floating-point values"},
  {"vinsertf32x8","insert packed floating-point values"},
  {"phsubsw","packed horizontal subtract and saturate"},
  {"stosd","store string dword"},
  {"vpermq","qwords element permutation"},
  {"stosb","store string byte"},
  {"vcomiss","compare scalar ordered single-precision floating-point values and set eflags"},
  {"vinsertf32x4","insert packed floating-point values"},
  {"prorvd","bit rotate right"},
  {"vpermw","permute packed doublewords/words elements"},
  {"clts","clear task-switched flag in cr0"},
  {"vpshufhw","shuffle packed high words"},
  {"vpsubd","subtract packed integers"},
  {"pmulhw","multiply packed signed integers and store high result"},
  {"vpsubb","subtract packed integers"},
  {"vfnmsub132pd","fused negative multiply-subtract of packed double-precision floating-point values"},
  {"feni","enable npx (numeric coprocessor extension) interrupt"},
  {"fcmovnbe","fp conditional move - not below or equal (cf=0 and zf=0)"},
  {"pmovzxbd","zero extend the lower 8-bit integer of each packed dword element into packed signed dword integers"},
  {"popal","pop all general-purpose registers"},
  {"vpermd","permute packed doublewords/words elements"},
  {"vpsubw","subtract packed integers"},
  {"movdqa","move aligned double quadword"},
  {"vfnmsub132ss","fused negative multiply-subtract of scalar single-precision floating-point values"},
  {"prorvq","bit rotate right"},
  {"vfmadd213ss","fused multiply-add of scalar single-precision floating-point values"},
  {"popad","pop all general-purpose registers"},
  {"vrsqrt14ss","compute approximate reciprocal of square root of scalar float32 value"},
  {"vpsubq","subtract packed quadword integers"},
  {"pmovzxbq","zero extend the lower 8-bit integer of each packed qword element into packed signed qword integers"},
  {"cmovae","conditional move - above or equal/not below/not carry (cf=0)"},
  {"xor","logical exclusive or"},
  {"psrldq","shift double quadword right logical"},
  {"pmovzxbw","zero extend the lower 8-bit integer of each packed word element into packed signed word integers"},
  {"movdqu","move unaligned double quadword"},
  {"vfpclassss","tests types of a scalar float32 values"},
  {"vpermpd","permute double-precision floating-point elements"},
  {"vsubsd","subtract scalar double-precision floating-point value"},
  {"andn","logical and not"},
  {"vfnmsub132sd","fused negative multiply-subtract of scalar double-precision floating-point values"},
  {"jna","jump short if not above/equal (cf=1 or zf=1)"},
  {"pslldq","shift double quadword left logical"},
  {"jnc","jump short if not carry (cf=0)"},
  {"vextractf128","extra ct packed floating-point values"},
  {"jnb","jump short if not below/above or equal/not carry (cf=0)"},
  {"vfmadd213sd","fused multiply-add of scalar double-precision floating-point values"},
  {"jne","jump short if not equal/not zero (zf=0)"},
  {"vpermps","permute single-precision floating-point elements"},
  {"vaesdec","perform one round of an aes decryption flow"},
  {"vrsqrt14sd","compute approximate reciprocal of square root of scalar float64 value"},
  {"jng","jump short if not greater/less or equal (zf=1 or sf!=of)"},
  {"vfpclasssd","tests types of a scalar float64 values"},
  {"blsmsk","get mask up to lowest set bit"},
  {"vpacksswb","pack with signed saturation"},
  {"fxtract","extract exponent and significand"},
  {"jnl","jump short if not less/greater or equal (sf=of)"},
  {"rdseed","read random seed"},
  {"jno","jump short if not overflow (of=0)"},
  {"cmpsb","cmp DS:[esi], (byte)ES:[edi] (esi++, edi++)"},
  {"vfmadd213ps","fused multiply-add of packed single-precision floating-point values"},
  {"jnp","jump short if not parity/parity odd (pf=0)"},
  {"cmpsd","cmp DS:[esi], (dword)ES:[edi] (esi+=4, edi+=4)/compare scalar double-fp values"},
  {"vsubss","subtract scalar single-precision floating-point value"},
  {"jns","jump short if not sign (sf=0)"},
  {"fincstp","increment floating-point stack pointer"},
  {"ktestq","packed bit test masks and set flags"},
  {"jnz","jump short if not zero/not equal (zf=0)"},
  {"vmaxss","return maximum scalar single-precision floating-point value"},
  {"vmovddup","replicate double fp values"},
  {"ktestw","packed bit test masks and set flags"},
  {"iret","return from interrupt"},
  {"cmpsq","cmp DS:[rsi], (qword)ES:[rdi] (rsi+=8, rdi+=8)"},
  {"leave","one byte alias for mov esp, ebp ; pop ebp"},
  {"cmpss","compare scalar single-fp values"},
  {"psraw","shift packed data right arithmetic"},
  {"vfmadd213pd","fused multiply-add of packed double-precision floating-point values"},
  {"frstor","restore x87 fpu state"},
  {"psraq","shift packed data right arithmetic"},
  {"vmaxsd","return maximum scalar double-precision floating-point value"},
  {"cmpsw","cmp DS:[esi], (word)ES:[edi] (esi+=2, edi+=2)"},
  {"ktestb","packed bit test masks and set flags"},
  {"ktestd","packed bit test masks and set flags"},
  {"psrad","shift packed data right arithmetic"},
  {"vpmuludq","multiply packed unsigned doubleword integers"},
  {"vpxor","logical exclusive or"},
  {"movabs","absolute data moves"},
  {"sub","substract src and dst, stores result on dst"},
  {"vcvtsd2usi","convert scalar double-precision floating-point value to unsigned doubleword integer"},
  {"vscatterqps","scatter packed single, packed double with signed dword and qword indices"},
  {"vfmsub231ps","fused multiply-subtract of packed single-precision floating-point values"},
  {"vprolvd","bit rotate left"},
  {"finit","initialize fpu (floating-point unit)"},
  {"pcmpeqw","compare packed data for equal"},
  {"punpcklbw","unpack low data"},
  {"ltr","load task register"},
  {"fneni","enable npx (numeric coprocessor extension) interrupts (8087 only, otherwise, FNOP)"},
  {"pushfq","push rflags register onto the stack"},
  {"fxam","examine"},
  {"vscatterqpd","scatter packed single, packed double with signed dword and qword indices"},
  {"vfmsub231pd","fused multiply-subtract of packed double-precision floating-point values"},
  {"pcmpeqq","compare packed qword data for equal"},
  {"vfixupimmss","fix up special scalar float32 value"},
  {"vfnmadd213ss","fused negative multiply-add of scalar single-precision floating-point values"},
  {"pmulld","multiply packed signed dword integers and store low result"},
  {"pushfd","push eflags register onto the stack"},
  {"vpsllvd","variable bit shift left logical"},
  {"vrcpps","compute reciprocals of packed single-precision floating-point values"},
  {"fldpi","load constant onto stack: pi (3.141592...)"},
  {"vprolvq","bit rotate left"},
  {"loadalld","loads All Registers from memory address es:edi"},
  {"vfnmadd213sd","fused negative multiply-add of scalar double-precision floating-point values"},
  {"pcmpeqd","compare packed data for equal"},
  {"pcmpeqb","compare packed data for equal"},
  {"vperm2i128","permute integer values"},
  {"vpmaddubsw","multiply and add packed signed and unsigned bytes"},
  {"stc","set carry flag"},
  {"packusdw","pack with unsigned saturation"},
  {"loop","decrement count; jump short if ecx!=0"},
  {"std","set direction flag"},
  {"kshiftlb","shift left mask registers"},
  {"vpshuflw","shuffle packed low words"},
  {"fucomip","unordered compare floating point values and set eflags and pop"},
  {"vpsllvw","variable bit shift left logical"},
  {"rep movs","repeat string operation prefix"},
  {"pmullw","multiply packed signed integers and store low result"},
  {"vfixupimmsd","fix up special scalar float64 value"},
  {"fiadd","integer add"},
  {"pmullq","multiply packed integers and store low result"},
  {"sti","set interrupt flag"},
  {"vfnmadd231ps","fused negative multiply-add of packed single-precision floating-point values"},
  {"kshiftld","shift left mask registers"},
  {"vpsllvq","variable bit shift left logical"},
  {"pcmpistrm","packed compare implicit length strings, return mask"},
  {"vgetmantpd","extract float64 vector of normalized mantissas from float64 vector"},
  {"str","store task register"},
  {"vcvtuqq2pd","convert packed unsigned quadword integers to packed double-precision floating-point values"},
  {"pcmpistri","packed compare implicit length strings, return index"},
  {"vfmsubadd231ps","fused multiply-alternating subtract/add of packed single-precision floating-point values"},
  {"cmovnge","conditional move - not greater nor equal/less (sf!=of)"},
  {"vgetmantps","extract float32 vector of normalized mantissas from float32 vector"},
  {"kshiftlq","shift left mask registers"},
  {"vrcpss","compute reciprocal of scalar single-precision floating-point values"},
  {"vfnmadd231pd","fused negative multiply-add of packed double-precision floating-point values"},
  {"kshiftlw","shift left mask registers"},
  {"vfmsubadd231pd","fused multiply-alternating subtract/add of packed double-precision floating-point values"},
  {"vrsqrtss","compute reciprocal of square root of scalar single-precision floating-point value"},
  {"movlhps","move packed single-fp values low to high"},
  {"vfmadd231ss","fused multiply-add of scalar single-precision floating-point values"},
  {"pandn","logical and not"},
  {"vcvtuqq2ps","convert packed unsigned quadword integers to packed single-precision floating-point values"},
  {"vpmovzxwd","packed move with zero extend"},
  {"fmulp","floating point multiply and pop"},
  {"vmovlhps","move packed single-precision floating-point values low to high"},
  {"fbstp","store binary coded decimal integer and pop"},
  {"vpmovusqb","down convert qword to byte"},
  {"vpmovusqd","down convert qword to dword"},
  {"vgatherqps","gather packed single, packed double with signed qword indices"},
  {"f2xm1","compute pow(2,x) - 1"},
  {"bextr","bit field extract"},
  {"vpbroadcastw","load with broadcast integer data from general purpose register"},
  {"cvtsd2ss","convert scalar double-fp value to scalar single-fp value"},
  {"vpmovzxwq","packed move with zero extend"},
  {"jrcxz","jump short if rcx register is 0"},
  {"vpbroadcastq","load with broadcast integer data from general purpose register"},
  {"vfmadd231sd","fused multiply-add of scalar double-precision floating-point values"},
  {"vcvttps2qq","convert with truncation packed single precision floating-point values to packed singed quadword integer values"},
  {"vmovdqa32","move aligned packed integer values"},
  {"minss","return minimum scalar single-fp value"},
  {"repe scas","repeat string operation prefix"},
  {"vgatherqpd","gather packed single, packed double with signed qword indices"},
  {"vextractf64x2","extra ct packed floating-point values"},
  {"vrsqrtps","compute reciprocals of square roots of packed single-precision floating-point values"},
  {"vfpclassps","tests types of a packed float32 values"},
  {"vpbroadcastd","load with broadcast integer data from general purpose register"},
  {"vpmovusqw","down convert qword to word"},
  {"shlx","shift without affecting flags"},
  {"fist","store integer"},
  {"minsd","return minimum scalar double-fp value"},
  {"fdecstp","decrement floating point stack pointer"},
  {"vphminposuw","packed horizontal word minimum"},
  {"vextractf64x4","extra ct packed floating-point values"},
  {"vpbroadcastb","load with broadcast integer data from general purpose register"},
  {"pblendvb","variable blend packed bytes"},
  {"vpandn","logical and not"},
  {"vaesenclast","perform last round of an aes encryption flow"},
  {"vsubpd","subtract packed double-precision floating-point values"},
  {"maskmovdqu","store selected bytes of double quadword"},
  {"popa","pop all general-purpose registers"},
  {"popf","pop stack into flags register"},
  {"shld","double precision shift left"},
  {"cvtsd2si","convert scalar double-fp value to dw integer"},
  {"vpandd","logical and"},
  {"vmovsldup","replicate single fp values"},
  {"cvtps2dq","convert packed single-fp values to dw integers"},
  {"pext","parallel bits extract"},
  {"adox","unsigned integer addition of two operands with overflow flag"},
  {"vfixupimmps","fix up special packed float32 values"},
  {"fxsave","save x87 fpu, mmx, xmm, and mxcsr state"},
  {"vfpclasspd","tests types of a packed float64 values"},
  {"cmovge","conditional move - greater or equal/not less (sf=of)"},
  {"vpandq","logical and"},
  {"vgatherpf0qps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint"},
  {"vsubps","subtract packed single-precision floating-point values"},
  {"imul","signed multiply"},
  {"cmppd","compare packed double-fp values"},
  {"vmaxps","maximum of packed single-precision floating-point values"},
  {"vfixupimmpd","fix up special packed float64 values"},
  {"cmpps","compare packed single-fp values"},
  {"vgetmantsd","extract float64 of normalized mantissas from float64 scalar"},
  {"vfnmadd231ss","fused negative multiply-add of scalar single-precision floating-point values"},
  {"vbroadcastss","load with broadcast floating-point data"},
  {"vgatherpf0qpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint"},
  {"cmovnz","conditional move - not zero/not equal (zf=0)"},
  {"vpminsq","minimum of packed signed integers"},
  {"jle","jump short if less or equal/not greater (zf=1 or sf!=of)"},
  {"vmaxpd","maximum of packed double-precision floating-point values"},
  {"vpminsw","minimum of packed signed integers"},
  {"popfd","pop stack into eflags register"},
  {"psrlq","shift packed data right logical"},
  {"hlt","stop process until external interrupt received"},
  {"vfnmadd231sd","fused negative multiply-add of scalar double-precision floating-point values"},
  {"cmovnp","conditional move - not parity/parity odd (pf=0)"},
  {"vgetmantss","extract float32 vector of normalized mantissa from float32 vector"},
  {"cmovns","conditional move - not sign (sf=0)"},
  {"pextrd","extract a dword from an XMM register and insert the value into a general-purpose register or memory"},
  {"cmovnl","conditional move - not less/greater or equal (sf=of)"},
  {"psrlw","shift packed data right logical"},
  {"wrpkru","write data to user page key register"},
  {"pextrb","extract a byte from an XMM register and insert the value into a general-purpose register or memory"},
  {"vbroadcastsd","load with broadcast floating-point data"},
  {"cmovno","conditional move - not overflow (of=0)"},
  {"vpminsb","minimum of packed signed integers"},
  {"vfmsub231ss","fused multiply-subtract of scalar single-precision floating-point values"},
  {"cvtsi2ss","convert dw integer to scalar single-fp value"},
  {"cmovne","conditional move - not equal/not zero (zf=0)"},
  {"bsr","bit scan reverse"},
  {"vpminsd","minimum of packed signed integers"},
  {"cmovng","conditional move - not greater/less or equal (zf=1 or sf!=of)"},
  {"cmovna","conditional move - not above/below or equal (cf=1 or zf=1)"},
  {"cmovnb","conditional move - not below/above or equal/not carry (cf=0)"},
  {"psrld","shift packed data right logical"},
  {"cmovnc","conditional move - not carry/above or equal/not below (cf=0)"},
  {"pextrw","extract a word from an XMM register and insert the value into a general-purpose register or memory"},
  {"popfq","pop stack into rflags register"},
  {"andnps","bitwise logical and not of packed single-fp values"},
  {"vbroadcastf32x2","load with broadcast floating-point data"},
  {"psubusw","subtract packed unsigned integers with unsigned saturation"},
  {"setpe","set byte on condition - parity even/parity (pf=1)"},
  {"vpsadbw","compute sum of absolute differences"},
  {"psignd","packed sign"},
  {"vfmsubadd213ps","fused multiply-alternating subtract/add of packed single-precision floating-point values"},
  {"vfnmadd213ps","fused negative multiply-add of packed single-precision floating-point values"},
  {"psignb","packed sign"},
  {"pextrq","extract a qword from an XMM register and insert the value into a general-purpose register or memory"},
  {"fucomp","unordered compare floating point values and pop"},
  {"vfmsub231sd","fused multiply-subtract of scalar double-precision floating-point values"},
  {"vbroadcastf32x4","load with broadcast floating-point data"},
  {"bsf","bit scan forward"},
  {"cvtsi2sd","convert dw integer to scalar double-fp value"},
  {"vblendpd","blend packed double precision floating-point values"},
  {"setpo","set byte on condition - parity odd/not parity (pf=0)"},
  {"clflush","flush cache line"},
  {"vbroadcastf32x8","load with broadcast floating-point data"},
  {"blendps","blend packed single-fp values"},
  {"vpmaxsd","maximum of packed signed integers"},
  {"vpcmpgtd","compare packed signed integers for greater than"},
  {"vmovdqa64","move aligned packed integer values"},
  {"vpcmpgtb","compare packed signed integers for greater than"},
  {"vfmsubadd213pd","fused multiply-alternating subtract/add of packed double-precision floating-point values"},
  {"andnpd","bitwise logical and not of packed double-fp values"},
  {"vpmaxsb","maximum of packed signed integers"},
  {"psignw","packed sign"},
  {"vmovntpd","store packed double-precision floating-point values using non-temporal hint"},
  {"vblendps","blend packed single precision floating-point values"},
  {"blendpd","blend packed double-fp values"},
  {"vfnmadd213pd","fused negative multiply-add of packed double-precision floating-point values"},
  {"bts","bit test and set"},
  {"vroundsd","round scalar double precision floating-point values"},
  {"fisttp","store integer with truncation and pop"},
  {"psubusb","subtract packed unsigned integers with unsigned saturation"},
  {"kandd","bitwise logical and masks"},
  {"btr","bit test and reset"},
  {"jmp","jump"},
  {"vcvttpd2qq","convert with truncation packed double-precision floating-point values to packed quadword integers"},
  {"vmptrst","store pointer to virtual-machine control structure"},
  {"vpcmpgtw","compare packed signed integers for greater than"},
  {"vextractps","extract packed floating-point values"},
  {"wrgsbase","write fs/gs segment base"},
  {"kandb","bitwise logical and masks"},
  {"fucomi","unordered compare floating point values and set eflags"},
  {"vpmaxsw","maximum of packed signed integers"},
  {"vpackusdw","pack with unsigned saturation"},
  {"vroundss","round scalar single precision floating-point values"},
  {"vpmaxsq","maximum of packed signed integers"},
  {"vrcp28sd","approximation to the reciprocal of scalar double-precision floating-point value with less than 2^-28 relative error"},
  {"vpcmpgtq","compare packed data for greater than"},
  {"ficom","integer compare"},
  {"vprorvq","bit rotate right"},
  {"callf","call procedure"},
  {"btc","bit test and complement"},
  {"vpandnd","logical and not"},
  {"vcvtpd2qq","convert packed double-precision floating-point values to packed quadword integers"},
  {"vrsqrt28ss","approximation to the reciprocal square root of scalar single-precision floating-point value with less than 2^-28 relative error"},
  {"kandw","bitwise logical and masks"},
  {"cmovnbe","conditional move - not below nor equal/above (cf=0 and zf=0)"},
  {"kandq","bitwise logical and masks"},
  {"vmovntps","store packed single-precision floating-point values using non-temporal hint"},
  {"vrcp28ss","approximation to the reciprocal of scalar single-precision floating-point value with less than 2^-28 relative error"},
  {"fsqrt","square root"},
  {"addsubps","packed single-fp add/subtract"},
  {"fidiv","integer divide"},
  {"vrsqrt28sd","approximation to the reciprocal square root of scalar double-precision floating-point value with less than 2^-28 relative error"},
  {"movntps","store packed single-fp values using non-temporal hint"},
  {"movsb","ES:[edi] = (byte)DS:[esi] (esi++, edi++)"},
  {"vroundpd","round packed double precision floating-point values"},
  {"vprorvd","bit rotate right"},
  {"kxorb","bitwise logical xor masks"},
  {"vphsubd","packed horizontal subtract"},
  {"movsd","ES:[edi] = (dword)DS:[esi] (esi+=4, edi+=4)/move scalar double-fp value"},
  {"vpandnq","logical and not"},
  {"kxord","bitwise logical xor masks"},
  {"addsubpd","packed double-fp add/subtract"},
  {"prefetchw","prefetch data into caches"},
  {"rtdsc","read time-stamp counter into edx:eax"},
  {"aeskeygenassist","assist in AES round key generation"},
  {"vroundps","round packed single precision floating-point values"},
  {"vbroadcasti64x4","load integer and broadcast"},
  {"xsaveopt","save processor extended states optimized"},
  {"vphsubw","packed horizontal subtract"},
  {"vaddpd","add packed double-precision floating-point values"},
  {"movss","move scalar single-fp values"},
  {"cmovnae","conditional move - not above nor equal/below/carry (cf=1)"},
  {"movsq","ES:[rdi] = (qword)DS:[rsi] (rsi+=8, rdi+=8)"},
  {"kxorq","bitwise logical xor masks"},
  {"vcvtpd2ps","convert packed double-precision floating-point values to packed single-precision floating-point values"},
  {"movsw","ES:[edi] = (word)DS:[esi] (esi+=2, edi+=2)"},
  {"kxorw","bitwise logical xor masks"},
  {"movntpd","store packed double-fp values using non-temporal hint"},
  {"vpmaxub","maximum of packed unsigned integers"},
  {"movsx","move with sign-extension"},
  {"fabs","absolute value"},
  {"minps","return minimum packed single-fp values"},
  {"vaddps","add packed single-precision floating-point values"},
  {"jge","jump short if greater or equal (sf=of)"},
  {"xlatb","table look-up translation"},
  {"vpmaxud","maximum of packed unsigned integers"},
  {"vmclear","clear virtual-machine control structure"},
  {"sha1msg2","perform a final calculation for the next four sha1 message dwords"},
  {"vpextrq","extract byte/dword/qword"},
  {"sysenter","fast system call"},
  {"pand","logical and"},
  {"sha1msg1","perform an intermediate calculation for the next four sha1 message dwords"},
  {"vpsrldq","shift double quadword right logical"},
  {"vpextrw","extract word"},
  {"xlat","table look-up translation"},
  {"vaesdeclast","perform last round of an aes decryption flow"},
  {"pmovzxdq","zero extend the lower 32-bit integer of each packed qword element into packed signed qword integers"},
  {"vcvtph2ps","convert 16-bit fp values to single-precision fp values"},
  {"fstcw","store x87 fpu control word"},
  {"minpd","return minimum packed double-fp values"},
  {"vpmaxuq","maximum of packed unsigned integers"},
  {"daa","decimal adjust al after addition"},
  {"vpmaxuw","maximum of packed unsigned integers"},
  {"vpsignw","packed sign"},
  {"vaddsd","add scalar double-precision floating-point values"},
  {"vpextrb","extract byte/dword/qword"},
  {"vpextrd","extract byte/dword/qword"},
  {"shufps","shuffle packed single-fp values"},
  {"rex.rxb","rex.r, rex.x and rex.b combination"},
  {"enter","alias for push ebp; mov ebp, esp"},
  {"vpsignb","packed sign"},
  {"unpcklps","unpack and interleave low packed single-fp values"},
  {"andps","bitwise logical and of packed single-fp values"},
  {"loadall","load all of the cpu registers"},
  {"vpsignd","packed sign"},
  {"vaddss","add scalar single-precision floating-point values"},
  {"shufpd","shuffle packed double-fp values"},
  {"das","decimal adjust al after subtraction"},
  {"setnae","set byte on condition - not above nor equal/below/carry (cf=1)"},
  {"ffreep","free floating-point register and pop (undocumented)"},
  {"movnti","store doubleword using non-temporal hint"},
  {"loopnz","decrement count; jump short if ecx!=0 and zf=0"},
  {"andpd","bitwise logical and of packed double-fp values"},
  {"sha256rnds2","perform two rounds of sha256 operation"},
  {"vrcp28pd","approximation to the reciprocal of packed double-precision floating-point values with less than 2^-28 relative error"},
  {"loopne","decrement count; jump short if ecx!=0 and zf=0"},
  {"movups","move unaligned packed single-fp values"},
  {"unpcklpd","unpack and interleave low packed double-fp values"},
  {"vreducesd","perform a reduction transformation on a scalar float64 value"},
  {"vsqrtsd","compute square root of scalar double-precision floating-point value"},
  {"mulsd","multiply scalar double-fp values"},
  {"movupd","move unaligned packed double-fp values"},
  {"vrcp28ps","approximation to the reciprocal of packed single-precision floating-point values with less than 2^-28 relative error"},
  {"vpgatherdd","gather packed dword values using signed dword/qword indices"},
  {"fstpnce","store floating point value and pop (undocumented)"},
  {"movntq","store of quadword using non-temporal hint"},
  {"vpermi2ps","full permute from two tables overwriting the index"},
  {"vrcp14pd","compute approximate reciprocals of packed float64 values"},
  {"stac","set ac flag in eflags register"},
  {"mulss","multiply scalar single-fp value"},
  {"mulx","unsigned multiply without affecting flags"},
  {"vreducess","perform a reduction transformation on a scalar float32 value"},
  {"fisubr","integer susbtract reversed"},
  {"vpgatherdq","gather packed qword values using signed dword/qword indices"},
  {"fstenv","store x87 fpu environment"},
  {"punpckldq","unpack low data"},
  {"ds","ds segment override prefix"},
  {"vsqrtss","compute square root of scalar single-precision value"},
  {"swapgs","swap gs base register"},
  {"xrstor","restore processor extended states"},
  {"vfmsub213ps","fused multiply-subtract of packed single-precision floating-point values"},
  {"vrcp14ps","compute approximate reciprocals of packed float32 values"},
  {"vpermi2pd","full permute from two tables overwriting the index"},
  {"subss","subtract scalar single-fp values"},
  {"icebp","Single byte single-step exception / Invoke ICE"},
  {"vmovss","move or merge scalar single-precision floating-point value"},
  {"vpminuw","minimum of packed unsigned integers"},
  {"mulpd","multiply packed double-fp values"},
  {"vpminuq","minimum of packed unsigned integers"},
  {"jbe","jump short if below or equal/not above (cf=1 or zf=1)"},
  {"prold","bit rotate left"},
  {"vpinsrd","insert byte/dword/qword"},
  {"rep lods","repeat string operation prefix"},
  {"vfmsub213pd","fused multiply-subtract of packed double-precision floating-point values"},
  {"vpscatterqq","scatter packed dword, packed qword with signed dword, signed qword indices"},
  {"vmovsd","move or merge scalar double-precision floating-point value"},
  {"vpinsrb","insert byte/dword/qword"},
  {"phaddsw","packed horizontal add and saturate"},
  {"faddp","floating point add and pop"},
  {"vpminud","minimum of packed unsigned integers"},
  {"cmps","compare string operands"},
  {"vpmovsqw","down convert qword to word"},
  {"mulps","multiply packed single-fp values"},
  {"vshuff64x2","shuffle packed values at 128-bit granularity"},
  {"vptestnmw","logical nand and set"},
  {"vaesimc","perform the aes invmixcolumn transformation"},
  {"vpscatterqd","scatter packed dword, packed qword with signed dword, signed qword indices"},
  {"cmovle","conditional move - less or equal/not greater (zf=1 or sf!=of)"},
  {"vpminub","minimum of packed unsigned integers"},
  {"subsd","subtract scalar double-fp values"},
  {"wait","stop process execution until TEST pin activated"},
  {"fyl2x","compute y times log2(x) and pop"},
  {"vpinsrw","insert word"},
  {"pmovmskb","move byte mask"},
  {"vpinsrq","insert byte/dword/qword"},
  {"vptestnmq","logical nand and set"},
  {"vgatherdpd","gather packed single, packed double with signed dword"},
  {"vpmovb2m","convert a vector register to a mask"},
  {"prolq","bit rotate left"},
  {"es","es segment override prefix"},
  {"vpabsq","packed absolute value"},
  {"vrsqrt28ps","approximation to the reciprocal square root of packed single-precision floating-point values with less than 2^-28 relative error"},
  {"pcmpgtq","compare packed data for greater than"},
  {"vpabsw","packed absolute value"},
  {"vpmovm2b","convert a mask register to a vector register"},
  {"vpmovsqd","down convert qword to dword"},
  {"setnle","set byte on condition - not less nor equal/greater (zf=0 and sf=of)"},
  {"vpmovm2d","convert a mask register to a vector register"},
  {"subps","subtract packed single-fp values"},
  {"pcmpgtw","compare packed signed integers for greater than"},
  {"vptestnmd","logical nand and set"},
  {"vgatherdps","gather packed sp fp values using signed dword/qword indices"},
  {"vpmovsxwd","packed move with sign extend"},
  {"vpmovsqb","down convert qword to byte"},
  {"phminposuw","packed horizontal word minimum"},
  {"vptestnmb","logical nand and set"},
  {"xgetbv","get value of extended control register"},
  {"vpabsb","packed absolute value"},
  {"vcvtps2dq","convert packed single-precision floating-point values to packed signed doubleword integer values"},
  {"vrsqrt28pd","approximation to the reciprocal square root of packed double-precision floating-point values with less than 2^-28 relative error"},
  {"setg","set byte on condition - greater/not less nor equal (zf=0 and sf=of)"},
  {"vpmovm2q","convert a mask register to a vector register"},
  {"pcmpgtb","compare packed signed integers for greater than"},
  {"sete","set byte on condition - equal/zero (zf=1)"},
  {"vpmovsxwq","packed move with sign extend"},
  {"pcmpgtd","compare packed signed integers for greater than"},
  {"setc","set byte on condition - carry/below/not above nor equal (cf=1)"},
  {"vpabsd","packed absolute value"},
  {"setb","set byte on condition - below/not above nor equal/carry (cf=1)"},
  {"seta","set byte on condition - above/not below nor equal (cf=0 and zf=0)"},
  {"vpmovm2w","convert a mask register to a vector register"},
  {"subpd","subtract packed double-fp values"},
  {"seto","set byte on condition - overflow (of=1)"},
  {"vextractf32x4","extra ct packed floating-point values"},
  {"setl","set byte on condition - less/not greater nor equal (sf!=of)"},
  {"vcmpss","compare scalar single-precision floating-point value"},
  {"vextractf32x8","extra ct packed floating-point values"},
  {"movntdqa","load double quadword non-temporal aligned hint"},
  {"vmovdqu","move unaligned packed integer values"},
  {"vpmovuswb","down convert word to byte"},
  {"vgatherpf1dpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint"},
  {"dec","decrement by 1"},
  {"sets","set byte on condition - sign (sf=1)"},
  {"vpmovw2m","convert a vector register to a mask"},
  {"xsaves","save processor extended states supervisor"},
  {"setp","set byte on condition - parity/parity even (pf=1)"},
  {"vscalefss","scale scalar float32 value with float32 value"},
  {"call","calls a subroutine, push eip into the stack (esp)"},
  {"fnsave","store x87 fpu state"},
  {"vmovd","move doubleword/move quadword"},
  {"cvttpd2pi","convert with trunc. packed double-fp values to dw integers"},
  {"vcvtps2uqq","convert packed single precision floating-point values to packed unsigned quadword integer values"},
  {"vcmpsd","compare scalar double-precision floating-point value"},
  {"vpmovq2m","convert a vector register to a mask"},
  {"vpexpandd","load sparse packed doubleword integer values from dense memory / register"},
  {"vmovdqa","move aligned packed integer values"},
  {"setz","set byte on condition - zero/equal (zf=1)"},
  {"vrcp14sd","compute approximate reciprocal of scalar float64 value"},
  {"bndcn","check upper bound"},
  {"movq2dq","move quadword from mmx technology to xmm register"},
  {"popcnt","bit population count"},
  {"bndcl","check lower bound"},
  {"vcvtudq2ps","convert packed unsigned doubleword integers to packed single-precision floating-point values"},
  {"cmpxchg8b","compare and exchange bytes"},
  {"vaddsubpd","packed double-fp add/subtract"},
  {"vpmovwb","down convert word to byte"},
  {"vscalefsd","scale scalar float64 values with float64 values"},
  {"sha1nexte","calculate sha1 state variable e after four rounds"},
  {"xsavec","save processor extended states with compaction"},
  {"vgatherpf1dps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t1 hint"},
  {"vmovq","move quadword"},
  {"repe","repeat string"},
  {"blendvpd","variable blend packed double-fp values"},
  {"fptan","partial tangent"},
  {"vcmpps","compare packed single-precision floating-point values"},
  {"vpexpandq","load sparse packed quadword integer values from dense memory / register"},
  {"tzcnt","count the number of trailing zero bits"},
  {"mov","moves data from src to dst"},
  {"psubsb","subtract packed signed integers with signed saturation"},
  {"vandnpd","bitwise logical and not of packed double precision floating-point values"},
  {"vpmovswb","down convert word to byte"},
  {"vexpandpd","load sparse packed double-precision floating-point values from dense memory"},
  {"vcvtudq2pd","convert packed unsigned doubleword integers to packed double-precision floating-point values"},
  {"vpblendmd","blend int32/int64 vectors using an opmask control"},
  {"vrcp14ss","compute approximate reciprocal of scalar float32 value"},
  {"vscatterpf0qps","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint with intent to write"},
  {"vpblendmb","blend byte/word vectors using an opmask control"},
  {"vaddsubps","packed single-fp add/subtract"},
  {"blendvps","variable blend packed single-fp values"},
  {"vscalefps","scale packed float32 values with float32 values"},
  {"vcmppd","compare packed double-precision floating-point values"},
  {"pmulhuw","multiply packed unsigned integers and store high result"},
  {"vbroadcastf128","load with broadcast floating-point data"},
  {"bndcu","check upper bound"},
  {"vpsubusb","subtract packed unsigned integers with unsigned saturation"},
  {"vfmaddsub231ps","fused multiply-alternating add/subtract of packed single-precision floating-point values"},
  {"repz","repeat string operation prefix"},
  {"xorps","bitwise logical xor for single-fp values"},
  {"xbegin","transactional begin"},
  {"monitor","set up monitor address"},
  {"vpblendmw","blend byte/word vectors using an opmask control"},
  {"hsubps","packed single-fp horizontal subtract"},
  {"maskmovq","store selected bytes of quadword"},
  {"setnbe","set byte on condition - not below nor equal/above (cf=0 and zf=0)"},
  {"fclex","clear exceptions"},
  {"rdtsc","read time-stamp counter"},
  {"vscalefpd","scale packed float64 values with float64 values"},
  {"vandnps","bitwise logical and not of packed single precision floating-point values"},
  {"vpblendmq","blend int32/int64 vectors using an opmask control"},
  {"vfmaddsub231pd","fused multiply-alternating add/subtract of packed double-precision floating-point values"},
  {"psubsw","subtract packed signed integers with signed saturation"},
  {"xend","transactional end"},
  {"vexpandps","load sparse packed single-precision floating-point values from dense memory"},
  {"vscatterpf0qpd","sparse prefetch packed sp/dp data values with signed dword, signed qword indices using t0 hint with intent to write"},
  {"paddusw","add packed unsigned integers with unsigned saturation"},
  {"iretd","interrupt return"},
  {"vpsubusw","subtract packed unsigned integers with unsigned saturation"},
  {"xorpd","bitwise logical xor for double-fp values"},
  {"hsubpd","packed double-fp horizontal subtract"},
  {"movzx","move dst register size padding with zeroes"},
  {"cvtpd2dq","convert packed double-fp values to dw integers"},
  {"packsswb","pack with signed saturation"},
  {"vdpps","dot product of packed single precision floating-point values"},
  {"paddusb","add packed unsigned integers with unsigned saturation"},
  {"scasd","cmp eax, ES:[edi+=4]"},
  {"vreducepd","perform reduction transformation on packed float64 values"},
  {"lgdt","load global descriptor table register"},
  {"scasb","cmp al, ES:[edi++]"},
  {"vsqrtpd","square root of double-precision floating-point values"},
  {"vpcmpeqb","compare packed data for equal"},
  {"vpcmpeqd","compare packed data for equal"},
  {"vreduceps","perform reduction transformation on packed float32 values"},
  {"iretq","interrupt return (64 bit)"},
  {"salc","set al if carry"},
  {"vpmovqd","down convert qword to dword"},
  {"scasw","cmp ax, ES:[edi+=2]"},
  {"vdppd","dot product of packed double precision floating-point values"},
  {"aesdeclast","perform the last round of an AES decryption flow"},
  {"vpmovqb","down convert qword to byte"},
  {"vcvttss2usi","convert with truncation scalar single-precision floating-point value to unsigned integer"},
  {"vmovaps","move aligned packed single-precision floating-point values"},
  {"fldenv","load x87 fpu environment"},
  {"hint_nop","hintable nop"},
  {"scasq","cmp rax, ES:[rdi+=8]"},
  {"vfnmsub213ps","fused negative multiply-subtract of packed single-precision floating-point values"},
  {"vpcmpeqq","compare packed qword data for equal"},
  {"vsqrtps","square root of single-precision floating-point values"},
  {"vpmuldq","multiply packed doubleword integers"},
  {"vfmsub213ss","fused multiply-subtract of scalar single-precision floating-point values"},
  {"vpcmpeqw","compare packed data for equal"},
  {"pminub","minimum of packed unsigned byte integers"},
  {"vpmovqw","down convert qword to word"},
  {"vexp2ps","approximation to the exponential 2^x of packed single-precision floating-point values with less than 2^-23 relative error"},
  {"fsin","sine"},
  {"movmskps","extract packed single-fp sign mask"},
  {"vmovapd","move aligned packed double-precision floating-point values"},
  {"pminud","minimum of packed unsigned dword integers"},
  {"sbb","integer subtraction with borrow"},
  {"prefetchwt1","prefetch vector data into caches with intent to write and t1 hint"},
  {"vexp2pd","approximation to the exponential 2^x of packed double-precision floating-point values with less than 2^-23 relative error"},
  {"vfmsub213sd","fused multiply-subtract of scalar double-precision floating-point values"},
  {"movmskpd","extract packed double-fp sign mask"},
  {"vfnmsub213pd","fused negative multiply-subtract of packed double-precision floating-point values"},
  {"pminuq","minimum of packed unsigned integers"},
  {"pminuw","minimum of packed unsigned word integers"},
  {"fucom","unordered compare floating point values"},
  {"vpmaskmovd","conditional simd integer packed loads and stores"},
  {"vfnmsub213ss","fused negative multiply-subtract of scalar single-precision floating-point values"},
  {"vpcmpestrm","packed compare explicit length strings, return mask"},
  {"fs","fs segment override prefix"},
  {"vfmadd132ss","fused multiply-add of scalar single-precision floating-point values"},
  {"vpcmpestri","packed compare explicit length strings, return index"},
  {"vpmaskmovq","conditional simd integer packed loads and stores"},
  {"vmovhlps","move packed single-precision floating-point values high to low"},
  {"fimul","integer multiply"},
  {"vpunpckhwd","unpack high data"},
  {"vfnmsub213sd","fused negative multiply-subtract of scalar double-precision floating-point values"},
  {"vpblendvb","variable blend packed bytes"},
  {"vpcmpub","compare packed byte values into mask"},
  {"stos","store string"},
  {"vpcmpud","compare packed integer values into mask"},
  {"vfmadd132sd","fused multiply-add of scalar double-precision floating-point values"},
  {"retf","return from procedure"},
  {"vcvtps2udq","convert packed single-precision floating-point values to packed unsigned doubleword integer values"},
  {"fadd","floating point add"},
  {"div","unsigned divide"},
  {"insw","input from port to string"},
  {"cvttps2dq","convert with trunc. packed single-fp values to dw integers"},
  {"gs","gs segment override prefix"},
  {"retn","return from procedure"},
  {"vpcmpuq","compare packed integer values into mask"},
  {"vfmadd132ps","fused multiply-add of packed single-precision floating-point values"},
  {"xsetbv","set extended control register"},
  {"aesenclast","perform the last round of an AES encryption flow"},
  {"vextracti128","extract packed integer values"},
  {"scas","scan string"},
  {"vpcmpuw","compare packed word values into mask"},
  {"ucomisd","unordered compare scalar double-fp values and set eflags"},
  {
# 1420 "project/radare2/libr/asm/d/x86.c" 3 4
  ((void *)0)
# 1420 "project/radare2/libr/asm/d/x86.c"
      , 
# 1420 "project/radare2/libr/asm/d/x86.c" 3 4
        ((void *)0)
# 1420 "project/radare2/libr/asm/d/x86.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_x86_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_x86_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 1435 "project/radare2/libr/asm/d/x86.c" 3 4
        ((void *)0)
# 1435 "project/radare2/libr/asm/d/x86.c"
            ;
}

const unsigned int gperf_x86_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_x86 = {
  .name = "x86",
  .get = &gperf_x86_get,
  .hash = &gperf_x86_hash,
  .foreach = &gperf_x86_foreach
};