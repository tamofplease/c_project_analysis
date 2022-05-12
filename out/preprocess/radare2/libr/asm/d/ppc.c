# 0 "project/radare2/libr/asm/d/ppc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/d/ppc.c"


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
# 4 "project/radare2/libr/asm/d/ppc.c" 2
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
# 5 "project/radare2/libr/asm/d/ppc.c" 2
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
# 6 "project/radare2/libr/asm/d/ppc.c" 2


# 7 "project/radare2/libr/asm/d/ppc.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"xxpermr","VSX Vector Permute Right-indexed"},
  {"vmrgew","Vector Merge Even Word"},
  {"vcmpnezh.","Vector Compare Not Equal or Zero Halfword"},
  {"xsrqpxp","VSX Scalar Round Quad-Precision to XP"},
  {"mtfsb1","Move To FPSCR Bit 1"},
  {"mtfsb0","Move To FPSCR Bit 0"},
  {"vctuxs","Vector Convert with round to zero FP To Unsigned Word format Saturate"},
  {"li","Load Immediate; li r3, 1; r3 = 1"},
  {"fctiwu","Floating Convert with round Double-Precision To Unsigned Word format"},
  {"bcdcfsq.","Decimal Convert From Signed Quadword & record"},
  {"bclr","Branch Conditional to LR [& Link]"},
  {"se_andc","AND with Complement Short Form"},
  {"xxlor","VSX Vector Logical OR"},
  {"ld","Load Doubleword"},
  {"vspltisw","Vector Splat Immediate Signed Word"},
  {"vmul10cuq","Vector Multiply-by-10 & write Carry Unsigned Quadword"},
  {"xssqrtqp","VSX Scalar Square Root Quad-Precision [with round to Odd]"},
  {"fre","Floating Reciprocal Estimate"},
  {"se_andi","AND Immediate Short Form"},
  {"lq","Load Quadword"},
  {"vspltisb","Vector Splat Immediate Signed Byte"},
  {"lvsr","Load Vector for Shift Right"},
  {"vrlwmi","Vector Rotate Left Word then Mask Insert"},
  {"drrndq.","DFP Reround Quad"},
  {"mtfsb1.","Move To FPSCR Bit 1"},
  {"insrwi","Insert from right immediate"},
  {"lvehx","Load Vector Element Halfword Indexed"},
  {"cntlzd","Count Leading Zeros Doubleword"},
  {"vspltish","Vector Splat Immediate Signed Halfword"},
  {"e_cmphl","Compare Halfword Logical"},
  {"ddedpd","DFP Decode DPD To BCD"},
  {"fctiw.","Floating Convert with round Double-Precision To Signed Word format"},
  {"xvtdivsp","VSX Vector Test for software Divide Single-Precision"},
  {"mtfsfi","Move To FPSCR Field Immediate"},
  {"extlwi","Extract and Left Justify Immediate"},
  {"se_bctrl","Branch to Count Register and Link"},
  {"cntlzw","Count Leading Zeros Word"},
  {"vextuhrx","Vector Extract Unsigned Halfword Right-Indexed"},
  {"dtstex","DFP Test Exponent"},
  {"# r0 "," call arg, return value"},
  {"xvmulsp","VSX Vector Multiply Single-Precision"},
  {"xvtstdcsp","VSX Vector Test Data Class Single-Precision"},
  {"mfbhrbe","Move From BHRB"},
  {"dsubq.","DFP Subtract Quad"},
  {"sthx","Store Halfword Indexed"},
  {"xvcvsxdsp","VSX Vector Convert with round Signed Doubleword to Single-Precision format"},
  {"mr","Move To Register"},
  {"fcpsgn","Floating Copy Sign"},
  {"vcmpgtsd.","Vector Compare Greater Than Signed Doubleword"},
  {"xscpsgndp","VSX Scalar Copy Sign Double-Precision"},
  {"e_crorc","Condition Register OR with Complement"},
  {"sync","Synchronize"},
  {"xsnabsqp","VSX Scalar Negative Absolute Quad-Precision"},
  {"vcmpneh.","Vector Compare Not Equal Halfword"},
  {"xscvdpsp","VSX Scalar Convert with round Double-Precision to Single-Precision format"},
  {"fmadds","Floating Multiply-Add Single"},
  {"xsnmsubasp","VSX Scalar Negative Multiply-Subtract Type-A Single-Precision"},
  {"se_lhz","Load Halfword and Zero Short Form"},
  {"se_cmp","Compare Word"},
  {"stxvll","Store VSX Vector Left-justified with Length"},
  {"bc","Branch Conditional [& Link] [Absolute]"},
  {"xvcvdpuxws","VSX Vector Convert with round to zero Double-Precision to Unsigned Word format"},
  {"sthu","Store Halfword with Update"},
  {"ba","Branch [& Link] [Absolute]"},
  {"lwax","Load Word Algebraic Indexed"},
  {"xscvqpdpo","VSX Scalar Convert with round Quad-Precision to Double-Precision format [with round to Odd]"},
  {"xvnmsubmsp","VSX Vector Negative Multiply-Subtract Type-M Single-Precision"},
  {"lwat","Load Word ATomic"},
  {"bl","Branch [& Link] [Absolute]"},
  {"stxsihx","Store VSX Scalar as Integer Halfword Indexed"},
  {"subfic","Subtract From Immediate Carrying"},
  {"hrfid","Return From Interrupt Doubleword Hypervisor"},
  {"extsw","Extend Sign Word"},
  {"xvcmpgesp","VSX Vector Compare Greater Than or Equal Single-Precision"},
  {"vcmpgefp.","Vector Compare Greater Than or Equal To Floating-Point"},
  {"vperm","Vector Permute"},
  {"bt","Branch if condition true"},
  {"mffscdrn","Move From FPSCR Control & set DRN"},
  {"dtstdg","DFP Test Data Group"},
  {"xscvdpsxds","VSX Scalar Convert with round to zero Double-Precision to Signed Doubleword format"},
  {"vextsh2w","Vector Extend Sign Halfword to Word"},
  {"mulldo","Multiply Low Doubleword"},
  {"dtstdc","DFP Test Data Class"},
  {"xsiexpdp","VSX Scalar Insert Exponent Double-Precision"},
  {"xsredp","VSX Scalar Reciprocal Estimate Double-Precision"},
  {"xsnmaddmdp","VSX Scalar Negative Multiply-Add Type-M Double-Precision"},
  {"extsh","Extend Sign Halfword"},
  {"fnmadd.","Floating Negative Multiply-Add"},
  {"dsub","DFP Subtract"},
  {"daddq.","DFP Add Quad"},
  {"extsb","Extend Sign Byte"},
  {"e_srwi","Shift Right Word Immediate"},
  {"fmadd.","Floating Multiply-Add"},
  {"mtfsf.","Move To FPSCR Fields"},
  {"divweo.","Divide Word Extended"},
  {"vextsh2d","Vector Extend Sign Halfword to Doubleword"},
  {"se_mtlr","Move To Link Register"},
  {"xvnmaddasp","VSX Vector Negative Multiply-Add Type-A Single-Precision"},
  {"bpermd","Bit Permute Doubleword"},
  {"xvcvdpsxws","VSX Vector Convert with round to zero Double-Precision to Signed Word format"},
  {"lhzx","Load Halfword & Zero Indexed"},
  {"vmhraddshs","Vector Multiply-High-Round-Add Signed Halfword Saturate"},
  {"rlwnm","Rotate Left Word then AND with Mask"},
  {"ldcix","Load Doubleword Caching Inhibited Indexed"},
  {"vaddfp","Vector Add Floating-Point"},
  {"dcffixq.","DFP Convert From Fixed Quad"},
  {"se_slw","Shift Left Word"},
  {"# r2 "," rtoc (register table of contents) (like a5 68k reg, not used, global to func (if i dont call a func))"},
  {"ddedpdq.","DFP Decode DPD To BCD Quad"},
  {"lhzu","Load Halfword & Zero with Update"},
  {"xsnmaddadp","VSX Scalar Negative Multiply-Add Type-A Double-Precision"},
  {"fmr","Floating Move Register"},
  {"xscvsxddp","VSX Scalar Convert with round Signed Doubleword to Double-Precision format"},
  {"stfiwx","Store Floating as Integer Word Indexed"},
  {"vand","Vector Logical AND"},
  {"add","Add"},
  {"mtfsb0.","Move To FPSCR Bit 0"},
  {"e_rlwi.","Rotate Left Word Immediate"},
  {"vcmpnew.","Vector Compare Not Equal Word"},
  {"nop","No Operation"},
  {"lha","Load Halfword Algebraic"},
  {"mulhwu.","Multiply High Word Unsigned"},
  {"nor","NOR"},
  {"xvnegsp","VSX Vector Negate Single-Precision"},
  {"vncipher","Vector AES Inverse Cipher"},
  {"vcmpgefp","Vector Compare Greater Than or Equal To Floating-Point"},
  {"scv","System Call Vectored"},
  {"addg6s","Add & Generate Sixes"},
  {"vrsqrtefp","Vector Reciprocal Square Root Estimate Floating-Point"},
  {"se_bl","Branch and Link"},
  {"stdcix","Store Doubleword Caching Inhibited Indexed"},
  {"e_addi.","Add Scaled Immediate"},
  {"xxmrglw","VSX Vector Merge Word Low"},
  {"lqarx","Load Quadword And Reserve Indexed"},
  {"fsel.","Floating Select"},
  {"vgbbd","Vector Gather Bits by Byte by Doubleword"},
  {"e_ori","OR Scaled Immediate"},
  {"# r1 "," stack pointer"},
  {"xsmaxdp","VSX Scalar Maximum Double-Precision"},
  {"se_bc","Branch Conditional Short Form"},
  {"divdeo.","Divide Doubleword Extended"},
  {"mulld.","Multiply Low Doubleword"},
  {"vcipher","Vector AES Cipher"},
  {"lhz","Load Halfword & Zero"},
  {"sraw.","Shift Right Algebraic Word"},
  {"fctiduz","Floating Convert with round to Zero Double-Precision To Unsigned Doubleword format"},
  {"stmw","Store Multiple Word"},
  {"xsmulqp","VSX Scalar Multiply Quad-Precision [with round to Odd]"},
  {"paste.","Paste"},
  {"vsel","Vector Select"},
  {"ori","OR Immediate"},
  {"tlbiel","TLB Invalidate Entry Local"},
  {"nand.","NAND"},
  {"fnmadds","Floating Negative Multiply-Add Single"},
  {"e_cmpli","Compare Logical Scaled Immediate Word"},
  {"crset","cR Set"},
  {"crandc","CR AND with Complement"},
  {"fsubs.","Floating Subtract Single"},
  {"xvmsubasp","VSX Vector Multiply-Subtract Type-A Single-Precision"},
  {"orc","OR with Complement"},
  {"subf","Subtract From"},
  {"vprtybw","Vector Parity Byte Word"},
  {"xsmsubmsp","VSX Scalar Multiply-Subtract Type-M Single-Precision"},
  {"dmul","DFP Multiply"},
  {"cntlzw.","Count Leading Zeros Word"},
  {"vprtybq","Vector Parity Byte Quadword"},
  {"lhzcix","Load Halfword & Zero Caching Inhibited Indexed"},
  {"lis","Load Immediate Shifted; lis r3, 0x7; r3 = 0x70000; r3 = (0x7 << 16)"},
  {"vaddsbs","Vector Add Signed Byte Saturate"},
  {"xssubdp","VSX Scalar Subtract Double-Precision"},
  {"vminsh","Vector Minimum Signed Halfword"},
  {"vprtybd","Vector Parity Byte Doubleword"},
  {"mffsce","Move From FPSCR & Clear Enables"},
  {"vminsb","Vector Minimum Signed Byte"},
  {"xsnegqp","VSX Scalar Negate Quad-Precision"},
  {"stbux","Store Byte with Update Indexed"},
  {"subfme.","Subtract From Minus One Extended"},
  {"vminsd","Vector Minimum Signed Doubleword"},
  {"cbcdtd","Convert Binary Coded Decimal To Declets"},
  {"stwu","Store Word with Update"},
  {"fctidu.","Floating Convert with round Double-Precision To Unsigned Doubleword format"},
  {"e_addic","Add Scaled Immediate Carrying"},
  {"xsrqpi","VSX Scalar Round Quad-Precision to Integral [Exact]"},
  {"mffsl","Move From FPSCR Lightweight"},
  {"vcmpeqfp.","Vector Compare Equal To Floating-Point"},
  {"xsabsdp","VSX Scalar Absolute Double-Precision"},
  {"e_crxor","Condition Register XOR"},
  {"divwo","Divide Word"},
  {"xxlorc","VSX Vector Logical OR with Complement"},
  {"xvcmpgtdp","VSX Vector Compare Greater Than Double-Precision"},
  {"drintxq.","DFP Round To FP Integer With Inexact Quad"},
  {"vclzd","Vector Count Leading Zeros Doubleword"},
  {"stwx","Store Word Indexed"},
  {"vminsw","Vector Minimum Signed Word"},
  {"vclzb","Vector Count Leading Zeros Byte"},
  {"divwe","Divide Word Extended"},
  {"xsrsqrtesp","VSX Scalar Reciprocal Square Root Estimate Single-Precision"},
  {"crclr","Conditional Register clear (xor nth bit with itself)"},
  {"xvrspi","VSX Vector Round Single-Precision to Integral"},
  {"srawi","Shift Right Algebraic Word Immediate"},
  {"xsmulsp","VSX Scalar Multiply Single-Precision"},
  {"dscri","DFP Shift Significand Right Immediate"},
  {"vsubudm","Vector Subtract Unsigned Doubleword Modulo"},
  {"vclzh","Vector Count Leading Zeros Halfword"},
  {"stwcx.","Store Word Conditional Indexed & record"},
  {"vclzw","Vector Count Leading Zeros Word"},
  {"copy","Copy"},
  {"fsub.","Floating Subtract"},
  {"or.","OR"},
  {"divwu","Divide Word Unsigned"},
  {"ddivq","DFP Divide Quad"},
  {"rlwnm.","Rotate Left Word then AND with Mask"},
  {"lxvb16x","Load VSX Vector Byte*16 Indexed"},
  {"xxpermdi","VSX Vector Doubleword Permute Immediate"},
  {"clrbhrb","Clear BHRB"},
  {"stvx","Store Vector Indexed"},
  {"slw","Shift Left Word"},
  {"mulhwu","Multiply High Word Unsigned"},
  {"vcmpgtsb.","Vector Compare Greater Than Signed Byte"},
  {"or","OR"},
  {"xscmpexpdp","VSX Scalar Compare Exponents Double-Precision"},
  {"divwo.","Divide Word"},
  {"dctfixq.","DFP Convert To Fixed Quad"},
  {"extswsli","Extend Sign Word & Shift Left Immediate"},
  {"xscvdpqp","VSX Scalar Convert Double-Precision to Quad-Precision format"},
  {"subfmeo","Subtract From Minus One Extended"},
  {"subfzeo","Subtract From Zero Extended"},
  {"sld","Shift Left Doubleword"},
  {"tw","Trap Word"},
  {"modsw","Modulo Signed Word"},
  {"vmul10euq","Vector Multiply-by-10 Extended Unsigned Quadword"},
  {"fnabs.","Floating Negative Absolute Value"},
  {"mffs.","Move From FPSCR"},
  {"dcffix.","DFP Convert From Fixed"},
  {"xxmrghw","VSX Vector Merge Word High"},
  {"e_mull2i","Multiply (2 operand) Low Immediate"},
  {"vavgsw","Vector Average Signed Word"},
  {"rlwinm.","Rotate Left Word Immediate then AND with Mask"},
  {"divw.","Divide Word"},
  {"dsub.","DFP Subtract"},
  {"modsd","Modulo Signed Doubleword"},
  {"td","Trap Doubleword"},
  {"bnelr","Branch if Not Equal to Link Register"},
  {"vavgsb","Vector Average Signed Byte"},
  {"se_isync","Instruction Synchronize"},
  {"mulhw.","Multiply High Word"},
  {"oris","OR Immediate Shifted"},
  {"vavgsh","Vector Average Signed Halfword"},
  {"xscmpeqdp","VSX Scalar Compare Equal Double-Precision"},
  {"xvmaxsp","VSX Vector Maximum Single-Precision"},
  {"eqv.","Equivalent"},
  {"clrlwi","Clear Left immediate"},
  {"divduo.","Divide Doubleword Unsigned"},
  {"vpopcntd","Vector Population Count Doubleword"},
  {"dscli.","DFP Shift Significand Left Immediate"},
  {"se_sraw","Shift Right Algebraic Word"},
  {"denbcd","DFP Encode BCD To DPD"},
  {"fdiv","Floating Divide"},
  {"e_lhzu","Load Halfword and Zero with Update"},
  {"vpopcntb","Vector Population Count Byte"},
  {"se_cmphl","Compare Halfword Logical Short Form"},
  {"lxsd","Load VSX Scalar Doubleword"},
  {"xsrsp","VSX Scalar Round Double-Precision to Single-Precision"},
  {"ddiv.","DFP Divide"},
  {"fsubs","Floating Subtract Single"},
  {"dcffixq","DFP Convert From Fixed Quad"},
  {"vmulesw","Vector Multiply Even Signed Word"},
  {"bctrl","Branch to Count Register and Link"},
  {"lmw","Load Multiple Word"},
  {"vpopcnth","Vector Population Count Halfword"},
  {"vcmpnezb.","Vector Compare Not Equal or Zero Byte"},
  {"vpopcntw","Vector Population Count Word"},
  {"slbiag","SLB Invalidate All Global"},
  {"stvxl","Store Vector Indexed Last"},
  {"vmulesb","Vector Multiply Even Signed Byte"},
  {"vmsumshm","Vector Multiply-Sum Signed Halfword Modulo"},
  {"moduw","Modulo Unsigned Word"},
  {"e_lwz","Load Word and Zero"},
  {"vmulesh","Vector Multiply Even Signed Halfword"},
  {"xsxexpqp","VSX Scalar Extract Exponent Quad-Precision"},
  {"xvcmpgtsp.","VSX Vector Compare Greater Than Single-Precision"},
  {"subfze.","Subtract From Zero Extended"},
  {"dctdp","DFP Convert To DFP Long"},
  {"sthcx.","Store Halfword Conditional Indexed & record"},
  {"vavguw","Vector Average Unsigned Word"},
  {"and","AND"},
  {"frsqrtes.","Floating Reciprocal Square Root Estimate Single"},
  {"xvcvsxwdp","VSX Vector Convert Signed Word to Double-Precision format"},
  {"vnor","Vector Logical NOR"},
  {"lbz","Load Byte & Zero"},
  {"b","Branch [& Link] [Absolute]"},
  {"dscliq","DFP Shift Significand Left Immediate Quad"},
  {"modud","Modulo Unsigned Doubleword"},
  {"lxsiwzx","Load VSX Scalar as Integer Word & Zero Indexed"},
  {"vmsumshs","Vector Multiply-Sum Signed Halfword Saturate"},
  {"lvebx","Load Vector Element Byte Indexed"},
  {"e_subfic","Subtract From Scaled Immediate Carrying"},
  {"vavgub","Vector Average Unsigned Byte"},
  {"vsubuhm","Vector Subtract Unsigned Halfword Modulo"},
  {"fnmadds.","Floating Negative Multiply-Add Single"},
  {"dsubq","DFP Subtract Quad"},
  {"lbarx","Load Byte And Reserve Indexed"},
  {"xvdivdp","VSX Vector Divide Double-Precision"},
  {"se_lwz","Load Word and Zero Short Form"},
  {"tlbie","TLB Invalidate Entry"},
  {"xvresp","VSX Vector Reciprocal Estimate Single-Precision"},
  {"vavguh","Vector Average Unsigned Halfword"},
  {"diex","DFP Insert Exponent"},
  {"fdivs.","Floating Divide Single"},
  {"stxvb16x","Store VSX Vector Byte*16 Indexed"},
  {"stxsiwx","Store VSX Scalar as Integer Word Indexed"},
  {"stxvh8x","Store VSX Vector Halfword*8 Indexed"},
  {"xvcvuxdsp","VSX Vector Convert with round Unsigned Doubleword to Single-Precision format"},
  {"vsubuhs","Vector Subtract Unsigned Halfword Saturate"},
  {"xvnmsubasp","VSX Vector Negative Multiply-Subtract Type-A Single-Precision"},
  {"addic.","Add Immediate Carrying & record"},
  {"fre.","Floating Reciprocal Estimate"},
  {"xsadddp","VSX Scalar Add Double-Precision"},
  {"vminuh","Vector Minimum Unsigned Halfword"},
  {"fmsub","Floating Multiply-Subtract"},
  {"vminud","Vector Minimum Unsigned Doubleword"},
  {"addpcis","Add PC Immediate Shifted"},
  {"e_xori","XOR Scaled Immediate"},
  {"cmp","Compare"},
  {"bcdcfz.","Decimal Convert From Zoned & record"},
  {"xvcpsgndp","VSX Vector Copy Sign Double-Precision"},
  {"mtvsrdd","Move To VSR Double Doubleword"},
  {"dtstsfi","DFP Test Significance Immediate"},
  {"vminub","Vector Minimum Unsigned Byte"},
  {"se_blrl","Branch to Link Register and Link"},
  {"vcmpgtuh.","Vector Compare Greater Than Unsigned Halfword"},
  {"se_illegal","Illegal Instruction"},
  {"dtstsfq","DFP Test Significance Quad"},
  {"slbmfev","SLB Move From Entry VSID"},
  {"maddhd","Multiply-Add High Doubleword"},
  {"vminuw","Vector Minimum Unsigned Word"},
  {"lxvl","Load VSX Vector with Length"},
  {"e_cmpl16i","Compare Logical Immediate Word"},
  {"fdivs","Floating Divide Single"},
  {"xsxsigdp","VSX Scalar Extract Significand Double-Precision"},
  {"vpkswus","Vector Pack Signed Word Unsigned Saturate"},
  {"vsubcuq","Vector Subtract & write Carry Unsigned Quadword"},
  {"slbmfee","SLB Move From Entry ESID"},
  {"drrnd","DFP Reround"},
  {"fres","Floating Reciprocal Estimate Single"},
  {"vsubcuw","Vector Subtract & Write Carry-Out Unsigned Word"},
  {"vnegw","Vector Negate Word"},
  {"xsiexpqp","VSX Scalar Insert Exponent Quad-Precision"},
  {"lxvx","Load VSX Vector Indexed"},
  {"sld.","Shift Left Doubleword"},
  {"drsp","DFP Round To DFP Short"},
  {"vabsduw","Vector Absolute Difference Unsigned Word"},
  {"xsnmaddmsp","VSX Scalar Negative Multiply-Add Type-M Single-Precision"},
  {"vpkudum","Vector Pack Unsigned Doubleword Unsigned Modulo"},
  {"lxvh8x","Load VSX Vector Halfword*8 Indexed"},
  {"se_cmpli","Compare Logical Immediate Word"},
  {"xxlnor","VSX Vector Logical NOR"},
  {"vsbox","Vector AES S-Box"},
  {"vabsdub","Vector Absolute Difference Unsigned Byte"},
  {"mullwo.","Multiply Low Word"},
  {"vmsumubm","Vector Multiply-Sum Unsigned Byte Modulo"},
  {"slbieg","SLB Invalidate Entry Global"},
  {"fctiwu.","Floating Convert with round Double-Precision To Unsigned Word format"},
  {"xxspltib","VSX Vector Splat Immediate Byte"},
  {"divwe.","Divide Word Extended"},
  {"vnegd","Vector Negate Doubleword"},
  {"xvabssp","VSX Vector Absolute Single-Precision"},
  {"vslo","Vector Shift Left by Octet"},
  {"vslh","Vector Shift Left Halfword"},
  {"vabsduh","Vector Absolute Difference Unsigned Halfword"},
  {"vsld","Vector Shift Left Doubleword"},
  {"vslb","Vector Shift Left Byte"},
  {"vsl","Vector Shift Left"},
  {"tend.","Transaction End & record"},
  {"drintnq","DFP Round To FP Integer Without Inexact Quad"},
  {"vpkudus","Vector Pack Unsigned Doubleword Unsigned Saturate"},
  {"vcmpnezw","Vector Compare Not Equal or Zero Word"},
  {"lfd","Load Floating Double"},
  {"vnmsubfp","Vector Negative Multiply-Subtract Floating-Point"},
  {"vsr","Vector Shift Right"},
  {"xvmsubmsp","VSX Vector Multiply-Subtract Type-M Single-Precision"},
  {"lfdx","Load Floating Double Indexed"},
  {"lxvd2x","Load VSX Vector Doubleword*2 Indexed"},
  {"addze","Add to Zero Extended"},
  {"mfvsrwz","Move From VSR Word & Zero"},
  {"xsrdpi","VSX Scalar Round Double-Precision to Integral"},
  {"vslv","Vector Shift Left Variable"},
  {"vslw","Vector Shift Left Word"},
  {"xsnabsdp","VSX Scalar Negative Absolute Double-Precision"},
  {"stxsdx","Store VSX Scalar Doubleword Indexed"},
  {"vcmpnezh","Vector Compare Not Equal or Zero Halfword"},
  {"dcbtst","Data Cache Block Touch for Store"},
  {"lfdp","Load Floating Double Pair"},
  {"cp_abort","CP_Abort"},
  {"e_crandc","Condition Register AND with Complement"},
  {"se_extsb","Extend Sign Byte Short Form"},
  {"se_bgeni","Bit Generate Immediate"},
  {"fctid.","Floating Convert with round Double-Precision To Signed Doubleword format"},
  {"lfdu","Load Floating Double with Update"},
  {"addeo.","Add Extended"},
  {"lfs","Load Floating Single"},
  {"vpkswss","Vector Pack Signed Word Signed Saturate"},
  {"vcmpnezb","Vector Compare Not Equal or Zero Byte"},
  {"xvcvuxwdp","VSX Vector Convert Unsigned Word to Double-Precision format"},
  {"dcbf","Data Cache Block Flush"},
  {"fdiv.","Floating Divide"},
  {"treclaim.","Transaction Reclaim & record"},
  {"se_extsh","Extend Sign Halfword Short Form"},
  {"fnmsub.","Floating Negative Multiply-Subtract"},
  {"drintn.","DFP Round To FP Integer Without Inexact"},
  {"xvnabssp","VSX Vector Negative Absolute Single-Precision"},
  {"mflr","Move From Link Register"},
  {"fctiwuz","Floating Convert with round to Zero Double-Precision To Unsigned Word format"},
  {"dcbt","Data Cache Block Touch"},
  {"dcbz","Data Cache Block Zero"},
  {"xsnmsubmsp","VSX Scalar Negative Multiply-Subtract Type-M Single-Precision"},
  {"divweo","Divide Word Extended"},
  {"vsubuws","Vector Subtract Unsigned Word Saturate"},
  {"fmul","Floating Multiply"},
  {"lbzcix","Load Byte & Zero Caching Inhibited Indexed"},
  {"vcmpequh.","Vector Compare Equal To Unsigned Halfword"},
  {"vsrv","Vector Shift Right Variable"},
  {"vsrw","Vector Shift Right Word"},
  {"dcffix","DFP Convert From Fixed"},
  {"vaddshs","Vector Add Signed Halfword Saturate"},
  {"creqv","CR Equivalent"},
  {"mtocrf","Move To One CR Field"},
  {"drintnq.","DFP Round To FP Integer Without Inexact Quad"},
  {"xssubqp","VSX Scalar Subtract Quad-Precision [with round to Odd]"},
  {"fctidz","Floating Convert with round to Zero Double-Precision To Signed Doubleword format"},
  {"xsnmaddqp","VSX Scalar Negative Multiply-Add Quad-Precision [with round to Odd]"},
  {"mtspr","Move To SPR"},
  {"isel","Integer Select"},
  {"vsrb","Vector Shift Right Byte"},
  {"vsubuwm","Vector Subtract Unsigned Word Modulo"},
  {"vsrd","Vector Shift Right Doubleword"},
  {"e_b","Branch"},
  {"xvcpsgnsp","VSX Vector Copy Sign Single-Precision"},
  {"fctidu","Floating Convert with round Double-Precision To Unsigned Doubleword format"},
  {"maddld","Multiply-Add Low Doubleword"},
  {"divweu","Divide Word Extended Unsigned"},
  {"se_b","Branch"},
  {"frsqrtes","Floating Reciprocal Square Root Estimate Single"},
  {"vsrh","Vector Shift Right Halfword"},
  {"popcntw","Population Count Words"},
  {"se_bclri","Bit Clear Immediate"},
  {"vsro","Vector Shift Right by Octet"},
  {"prtyd","Parity Doubleword"},
  {"se_rfmci","Return From Machine Check Interrupt"},
  {"ldx","Load Doubleword Indexed"},
  {"vpkuwus","Vector Pack Unsigned Word Unsigned Saturate"},
  {"fmr.","Floating Move Register"},
  {"xsrqpix","VSX Scalar Round Quad-Precision to Integral [Exact]"},
  {"ldu","Load Doubleword with Update"},
  {"xsmsubqp","VSX Scalar Multiply-Subtract Quad-Precision [with round to Odd]"},
  {"isync","Instruction Synchronize"},
  {"veqv","Vector Equivalence"},
  {"vpkuwum","Vector Pack Unsigned Word Unsigned Modulo"},
  {"xvnmaddmsp","VSX Vector Negative Multiply-Add Type-M Single-Precision"},
  {"popcntb","Population Count Byte"},
  {"friz","Floating Round To Integer Zero"},
  {"dqua","DFP Quantize"},
  {"prtyw","Parity Word"},
  {"dctqpq","DFP Convert To DFP Extended"},
  {"fadds.","Floating Add Single"},
  {"popcntd","Population Count Doubleword"},
  {"rldicl.","Rotate Left Doubleword Immediate then Clear Left"},
  {"mulhw","Multiply High Word"},
  {"frip","Floating Round To Integer Plus"},
  {"bge","Branch if Greater Or Equal"},
  {"cnttzw.","Count Trailing Zeros Word"},
  {"xvredp","VSX Vector Reciprocal Estimate Double-Precision"},
  {"vcmpgtsw.","Vector Compare Greater Than Signed Word"},
  {"xscmpgtdp","VSX Scalar Compare Greater Than Double-Precision"},
  {"orc.","OR with Complement"},
  {"inslwi","Insert from left immediate"},
  {"xscvuxddp","VSX Scalar Convert with round Unsigned Doubleword to Double-Precision format"},
  {"vcmpgtsh","Vector Compare Greater Than Signed Halfword"},
  {"fnmsubs","Floating Negative Multiply-Subtract Single"},
  {"dxex","DFP Extract Exponent"},
  {"stwux","Store Word with Update Indexed"},
  {"mfvscr","Move From VSCR"},
  {"rlwimi","Rotate Left Word Immediate then Mask Insert"},
  {"stxv","Store VSX Vector"},
  {"frim","Floating Round To Integer Minus"},
  {"mulhd","Multiply High Doubleword"},
  {"frin","Floating Round To Integer Nearest"},
  {"neg","Negate"},
  {"vcmpgtsd","Vector Compare Greater Than Signed Doubleword"},
  {"xsmaddadp","VSX Scalar Multiply-Add Type-A Double-Precision"},
  {"frsqrte","Floating Reciprocal Square Root Estimate"},
  {"vcfux","Vector Convert with round to nearest Unsigned Word format to FP"},
  {"bgt","Branch if Greater Than"},
  {"ddedpd.","DFP Decode DPD To BCD"},
  {"xscmpudp","VSX Scalar Compare Unordered Double-Precision"},
  {"stwbrx","Store Word Byte-Reverse Indexed"},
  {"maddhdu","Multiply-Add High Doubleword Unsigned"},
  {"crnot","CR NOT"},
  {"xsnmsubqpo","VSX Scalar Negative Multiply-Subtract Quad-Precision [with round to Odd]"},
  {"vcmpgtsb","Vector Compare Greater Than Signed Byte"},
  {"bcdadd.","Decimal Add Modulo & record"},
  {"bcdtrunc.","Decimal Truncate & record"},
  {"vmhaddshs","Vector Multiply-High-Add Signed Halfword Saturate"},
  {"e_rlwimi","Rotate Left Word Immediate then Mask Insert"},
  {"crnor","CR NOR"},
  {"fcfids.","Floating Convert with round Signed Doubleword to Single-Precision format"},
  {"xssubsp","VSX Scalar Subtract Single-Precision"},
  {"vcmpgtub.","Vector Compare Greater Than Unsigned Byte"},
  {"xvmuldp","VSX Vector Multiply Double-Precision"},
  {"dcbst","Data Cache Block Store"},
  {"vcmpgtsw","Vector Compare Greater Than Signed Word"},
  {"xvtstdcdp","VSX Vector Test Data Class Double-Precision"},
  {"bctar","Branch Conditional to BTAR [& Link]"},
  {"dscriq.","DFP Shift Significand Right Immediate Quad"},
  {"lxsihzx","Load VSX Scalar as Integer Halfword & Zero Indexed"},
  {"xsminjdp","VSX Scalar Minimum Type-J Double-Precision"},
  {"xvrsqrtesp","VSX Vector Reciprocal Square Root Estimate Single-Precision"},
  {"xsmaddmdp","VSX Scalar Multiply-Add Type-M Double-Precision"},
  {"vsubuqm","Vector Subtract Unsigned Quadword Modulo"},
  {"cror","CR OR"},
  {"vmaxfp","Vector Maximum Floating-Point"},
  {"mfspr","Move From SPR"},
  {"ddedpdq","DFP Decode DPD To BCD Quad"},
  {"xsmsubasp","VSX Scalar Multiply-Subtract Type-A Single-Precision"},
  {"xvcmpgedp","VSX Vector Compare Greater Than or Equal Double-Precision"},
  {"se_srwi","Shift Right Word Immediate Short Form"},
  {"e_rlwinm","Rotate Left Word Immediate then AND with Mask,"},
  {"mtmsr","Move To MSR"},
  {"xsrsqrtedp","VSX Scalar Reciprocal Square Root Estimate Double-Precision"},
  {"fneg","Floating Negate"},
  {"addzeo","Add to Zero Extended"},
  {"vmuleuw","Vector Multiply Even Unsigned Word"},
  {"bclrl","Branch Conditional to LR [& Link]"},
  {"stfdp","Store Floating Double Pair"},
  {"frsqrte.","Floating Reciprocal Square Root Estimate"},
  {"vpkuhum","Vector Pack Unsigned Halfword Unsigned Modulo"},
  {"vcmpgtuh","Vector Compare Greater Than Unsigned Halfword"},
  {"vmsumudm","Vector Multiply-Sum Unsigned Doubleword Modulo"},
  {"stfdu","Store Floating Double with Update"},
  {"friz.","Floating Round To Integer Zero"},
  {"dquai","DFP Quantize Immediate"},
  {"stfdx","Store Floating Double Indexed"},
  {"vpkuhus","Vector Pack Unsigned Halfword Unsigned Saturate"},
  {"sc","System Call"},
  {"vcmpgtub","Vector Compare Greater Than Unsigned Byte"},
  {"xvnabsdp","VSX Vector Negative Absolute Double-Precision"},
  {"crxor","Conditional Register bit XOR"},
  {"vcmpequd.","Vector Compare Equal To Unsigned Doubleword"},
  {"subfze","Subtract From Zero Extended"},
  {"dquaq","DFP Quantize Quad"},
  {"vcmpgtud","Vector Compare Greater Than Unsigned Doubleword"},
  {"mtvsrd","Move To VSR Doubleword"},
  {"vmuleub","Vector Multiply Even Unsigned Byte"},
  {"xvtsqrtdp","VSX Vector Test for software Square Root Double-Precision"},
  {"se_sc","System Call"},
  {"lxv","Load VSX Vector"},
  {"vcmpgtuw","Vector Compare Greater Than Unsigned Word"},
  {"vmuleuh","Vector Multiply Even Unsigned Halfword"},
  {"e_cmph16i","Compare Halfword Immediate"},
  {"dtstdgq","DFP Test Data Group Quad"},
  {"e_lbz","Load Byte and Zero"},
  {"divweuo.","Divide Word Extended Unsigned"},
  {"vmul10uq","Vector Multiply-by-10 Unsigned Quadword"},
  {"se_mtctr","Move To Count Register"},
  {"xvrdpic","VSX Vector Round Double-Precision to Integral using Current rounding mode"},
  {"fcpsgn.","Floating Copy Sign"},
  {"se_and","AND Short Form"},
  {"xvrdpim","VSX Vector Round Double-Precision to Integral toward -Infinity"},
  {"dctfix","DFP Convert To Fixed"},
  {"bcdctz.","Decimal Convert To Zoned & record"},
  {"vupkhpx","Vector Unpack High Pixel"},
  {"mullw","Multiply Low Word"},
  {"srawi.","Shift Right Algebraic Word Immediate"},
  {"dscri.","DFP Shift Significand Right Immediate"},
  {"vcmpequh","Vector Compare Equal To Unsigned Halfword"},
  {"addze.","Add to Zero Extended"},
  {"xvrdpip","VSX Vector Round Double-Precision to Integral toward +Infinity"},
  {"bca","Branch Conditional [& Link] [Absolute]"},
  {"vcmpequd","Vector Compare Equal To Unsigned Doubleword"},
  {"tabortdc.","Transaction Abort Doubleword Conditional & record"},
  {"e_lbzu","Load Byte and Zero with Update"},
  {"bcl","Branch Conditional [& Link] [Absolute]"},
  {"mulli","Multiply Low Immediate"},
  {"fcfid","Floating Convert with round Signed Doubleword to Double-Precision format"},
  {"vcmpequb","Vector Compare Equal To Unsigned Byte"},
  {"dqua.","DFP Quantize"},
  {"mulld","Multiply Low Doubleword"},
  {"xvrdpiz","VSX Vector Round Double-Precision to Integral toward Zero"},
  {"vcmpbfp.","Vector Compare Bounds Floating-Point"},
  {"subfco.","Subtract From Carrying"},
  {"vrldnm","Vector Rotate Left Doubleword then AND with Mask"},
  {"fcfidus","Floating Convert with round Unsigned Doubleword to Single-Precision format"},
  {"andi.","AND Immediate & record"},
  {"se_extzh","Extend Zero Halfword"},
  {"vcmpequw","Vector Compare Equal To Unsigned Word"},
  {"xvadddp","VSX Vector Add Double-Precision"},
  {"xscvudqp","VSX Scalar Convert Unsigned Doubleword to Quad-Precision format"},
  {"twi","Trap Word Immediate"},
  {"slbsync","SLB Synchronize"},
  {"cmplwi","Compare Logical Word Immediate; cmplwi CR0, r0, 33(unsigned)"},
  {"e_sc","System Call"},
  {"lxsdx","Load VSX Scalar Doubleword Indexed"},
  {"se_extzb","Extend Zero Byte"},
  {"adde","Add Extended"},
  {"vsubecuq","Vector Subtract Extended & write Carry Unsigned Quadword"},
  {"addc","Add Carrying"},
  {"drintn","DFP Round To FP Integer Without Inexact"},
  {"addo","Add"},
  {"xvcvsxddp","VSX Vector Convert with round Signed Doubleword to Double-Precision format"},
  {"addi","Add Immediate"},
  {"xsnmaddasp","VSX Scalar Negative Multiply-Add Type-A Single-Precision"},
  {"msgclr","Message Clear"},
  {"xscpsgnqp","VSX Scalar Copy Sign Quad-Precision"},
  {"xvmindp","VSX Vector Minimum Double-Precision"},
  {"drintx","DFP Round To FP Integer With Inexact"},
  {"bcdctsq.","Decimal Convert To Signed Quadword & record"},
  {"xvcvsxwsp","VSX Vector Convert with round Signed Word to Single-Precision format"},
  {"e_subfic.","Subtract From Scaled Immediate Carrying"},
  {"dctfix.","DFP Convert To Fixed"},
  {"rlwinm","Rotate Left Word Immediate then AND with Mask"},
  {"tbegin.","Transaction Begin & record"},
  {"stdat","Store Doubleword ATomic"},
  {"bdz","Decrement CTR and Branch if its Zero"},
  {"lxsspx","Load VSX Scalar Single-Precision Indexed"},
  {"bcdsub.","Decimal Subtract Modulo & record"},
  {"mtvsrwz","Move To VSR Word & Zero"},
  {"mffscdrni","Move From FPSCR Control & set DRN Immediate"},
  {"mtcrf","Move To CR Fields"},
  {"xscvdpsxws","VSX Scalar Convert with round to zero Double-Precision to Signed Word format"},
  {"xvrdpi","VSX Vector Round Double-Precision to Integral"},
  {"extswsli.","Extend Sign Word & Shift Left Immediate"},
  {"fnabs","Floating Negative Absolute Value"},
  {"mtvsrws","Move To VSR Word & Splat"},
  {"e_li","Load Immediate; e_li r3, 1; r3 = 1"},
  {"dcmpuq","DFP Compare Unordered Quad"},
  {"vmaddfp","Vector Multiply-Add Floating-Point"},
  {"vmsumuhm","Vector Multiply-Sum Unsigned Halfword Modulo"},
  {"fsqrts.","Floating Square Root Single"},
  {"xscvspdp","VSX Scalar Convert Single-Precision to Double-Precision format"},
  {"mfvsrld","Move From VSR Lower Doubleword"},
  {"lfiwzx","Load Floating as Integer Word & Zero Indexed"},
  {"denbcdq.","DFP Encode BCD To DPD Quad"},
  {"lwzu","Load Word & Zero with Update"},
  {"e_cror","Condition Register OR"},
  {"vaddubm","Vector Add Unsigned Byte Modulo"},
  {"srd.","Shift Right Doubleword"},
  {"fmsubs.","Floating Multiply-Subtract Single"},
  {"stvewx","Store Vector Element Word Indexed"},
  {"drrnd.","DFP Reround"},
  {"mtvsrwa","Move To VSR Word Algebraic"},
  {"beq","Branch if Equal bne=Branch if Not Equal"},
  {"xscvqpsdz","VSX Scalar Convert with round to zero Quad-Precision to Signed Doubleword format"},
  {"vcfsx","Vector Convert with round to nearest Signed Word format to FP"},
  {"lwzx","Load Word & Zero Indexed"},
  {"fcfidu.","Floating Convert with round Unsigned Doubleword to Double-Precision format"},
  {"vcmpgtud.","Vector Compare Greater Than Unsigned Doubleword"},
  {"dscriq","DFP Shift Significand Right Immediate Quad"},
  {"vaddubs","Vector Add Unsigned Byte Saturate"},
  {"vlogefp","Vector Log Base 2 Estimate Floating-Point"},
  {"xsmaddasp","VSX Scalar Multiply-Add Type-A Single-Precision"},
  {"e_cmp16i","Compare Immediate Word"},
  {"rldic","Rotate Left Doubleword Immediate then Clear"},
  {"mtlr","Move To Link Register"},
  {"mulhdu","Multiply High Doubleword Unsigned"},
  {"vmsumuhs","Vector Multiply-Sum Unsigned Halfword Saturate"},
  {"e_mulli","Multiply Low Scaled Immediate"},
  {"lharx","Load Halfword And Reserve Indexed Xform"},
  {"bnl","Branch if Not Less"},
  {"add.","Add"},
  {"vsldoi","Vector Shift Left Double by Octet Immediate"},
  {"xsmaddqp","VSX Scalar Multiply-Add Quad-Precision [with round to Odd]"},
  {"slbfee.","SLB Find Entry ESID & record"},
  {"rldimi.","Rotate Left Doubleword Immediate then Mask Insert"},
  {"slbmte","SLB Move To Entry"},
  {"dtstdcq","DFP Test Data Class Quad"},
  {"extsw.","Extend Sign Word"},
  {"fsqrts","Floating Square Root Single"},
  {"xvcvspsxws","VSX Vector Convert with round to zero Single-Precision to Signed Word format"},
  {"vmul10ecuq","Vector Multiply-by-10 Extended & write Carry Unsigned Quadword"},
  {"dctfixq","DFP Convert To Fixed Quad"},
  {"vrldmi","Vector Rotate Left Doubleword then Mask Insert"},
  {"fnmsubs.","Floating Negative Multiply-Subtract Single"},
  {"lhau","Load Halfword Algebraic with Update"},
  {"lhax","Load Halfword Algebraic Indexed"},
  {"bcdus.","Decimal Unsigned Shift & record"},
  {"crorc","CR OR with Complement"},
  {"xsxsigqp","VSX Scalar Extract Significand Quad-Precision"},
  {"xscmpoqp","VSX Scalar Compare Ordered Quad-Precision"},
  {"divduo","Divide Doubleword Unsigned"},
  {"stxssp","Store VSX Scalar Single-Precision"},
  {"dtstsf","DFP Test Significance"},
  {"frip.","Floating Round To Integer Plus"},
  {"stdcx.","Store Doubleword Conditional Indexed & record"},
  {"mtmsrd","Move To MSR Doubleword"},
  {"ldarx","Load Doubleword And Reserve Indexed"},
  {"lxvll","Load VSX Vector Left-justified with Length"},
  {"divweu.","Divide Word Extended Unsigned"},
  {"mtctr","Move To Special Count Register"},
  {"vcmpequb.","Vector Compare Equal To Unsigned Byte"},
  {"xvmaxdp","VSX Vector Maximum Double-Precision"},
  {"icbi","Instruction Cache Block Invalidate"},
  {"xsmuldp","VSX Scalar Multiply Double-Precision"},
  {"vaddudm","Vector Add Unsigned Doubleword Modulo"},
  {"mffs","Move From FPSCR"},
  {"xvmaddmdp","VSX Vector Multiply-Add Type-M Double-Precision"},
  {"divw","Divide Word"},
  {"rldcr","Rotate Left Doubleword then Clear Right"},
  {"fabs.","Floating Absolute"},
  {"rldcl","Rotate Left Doubleword then Clear Left"},
  {"xvcvspuxws","VSX Vector Convert with round to zero Single-Precision to Unsigned Word format"},
  {"vrefp","Vector Reciprocal Estimate Floating-Point"},
  {"vsum4ubs","Vector Sum across Quarter Unsigned Byte Saturate"},
  {"mtfsf","Move To FPSCR Fields"},
  {"fmadd","Floating Multiply-Add"},
  {"drintx.","DFP Round To FP Integer With Inexact"},
  {"e_lwzu","Load Word and Zero with Update"},
  {"lfiwax","Load Floating as Integer Word Algebraic Indexed"},
  {"ftsqrt","Floating Test for software Square Root"},
  {"e_lhz","Load Halfword and Zero"},
  {"fsqrt.","Floating Square Root"},
  {"e_addic.","Add Scaled Immediate Carrying"},
  {"icbt","Instruction Cache Block Touch"},
  {"vaddsws","Vector Add Signed Word Saturate"},
  {"divd","Divide Doubleword"},
  {"e_and2i","AND (two operand) Immediate"},
  {"drrndq","DFP Reround Quad"},
  {"xsaddsp","VSX Scalar Add Single-Precision"},
  {"nor.","NOR"},
  {"mulhd.","Multiply High Doubleword"},
  {"frsp.","Floating Round to Single-Precision"},
  {"vmuluwm","Vector Multiply Unsigned Word Modulo"},
  {"xvsubdp","VSX Vector Subtract Double-Precision"},
  {"xvtdivdp","VSX Vector Test for software Divide Double-Precision"},
  {"dquaiq.","DFP Quantize Immediate Quad"},
  {"ftdiv","Floating Test for software Divide"},
  {"se_cmph","Compare Halfword Short Form"},
  {"se_cmpi","Compare Immediate Word Short Form"},
  {"lwbrx","Load Word Byte-Reverse Indexed"},
  {"xsdivqp","VSX Scalar Divide Quad-Precision [with round to Odd]"},
  {"se_cmpl","Compare Logical Word"},
  {"lxsiwax","Load VSX Scalar as Integer Word Algebraic Indexed"},
  {"e_lha","Load Halfword Algebraic"},
  {"divdu.","Divide Doubleword Unsigned"},
  {"xvcmpgtsp","VSX Vector Compare Greater Than Single-Precision"},
  {"fsub","Floating Subtract"},
  {"vexptefp","Vector 2 Raised to the Exponent Estimate Floating-Point"},
  {"e_xori.","XOR Scaled Immediate"},
  {"se_mullw","Multiply Low Word Short Form"},
  {"diex.","DFP Insert Exponent"},
  {"vupkhsb","Vector Unpack High Signed Byte"},
  {"se_slwi","Shift Left Word Immediate Short Form"},
  {"addme.","Add to Minus One Extended"},
  {"e_lis","Load Immediate Shifted; e_lis r3, 0x7; r3 = 0x70000; r3 = (0x7 << 16)"},
  {"xsmulqpo","VSX Scalar Multiply Quad-Precision [with round to Odd]"},
  {"divweuo","Divide Word Extended Unsigned"},
  {"vextubrx","Vector Extract Unsigned Byte Right-Indexed"},
  {"vupkhsh","Vector Unpack High Signed Halfword"},
  {"lxvdsx","Load VSX Vector Doubleword & Splat Indexed"},
  {"crand","CR AND"},
  {"andc.","AND with Complement"},
  {"drintxq","DFP Round To FP Integer With Inexact Quad"},
  {"vupkhsw","Vector Unpack High Signed Word"},
  {"e_creqv","Condition Register Equivalent"},
  {"neg.","Negate"},
  {"xvcvuxddp","VSX Vector Convert with round Unsigned Doubleword to Double-Precision format"},
  {"xvcmpeqdp","VSX Vector Compare Equal Double-Precision"},
  {"divd.","Divide Doubleword"},
  {"tabortwc.","Transaction Abort Word Conditional & record"},
  {"fmadds.","Floating Multiply-Add Single"},
  {"msgsndp","Message Send Privileged"},
  {"dctdp.","DFP Convert To DFP Long"},
  {"srad","Shift Right Algebraic Doubleword"},
  {"xsmincdp","VSX Scalar Minimum Type-C Double-Precision"},
  {"divdeuo.","Divide Doubleword Extended Unsigned"},
  {"stwcix","Store Word Caching Inhibited Indexed"},
  {"vncipherlast","Vector AES Inverse Cipher Last"},
  {"diexq","DFP Insert Exponent Quad"},
  {"xststdcqp","VSX Scalar Test Data Class Quad-Precision"},
  {"sraw","Shift Right Algebraic Word"},
  {"e_crand","Condition Register AND"},
  {"xscvdpuxds","VSX Scalar Convert with round to zero Double-Precision to Unsigned Doubleword format"},
  {"xsxexpdp","VSX Scalar Extract Exponent Double-Precision"},
  {"sthux","Store Halfword with Update Indexed"},
  {"lxsibzx","Load VSX Scalar as Integer Byte & Zero Indexed"},
  {"e_andi","AND Scaled Immediate"},
  {"mfcr","Move From CR"},
  {"xxbrw","VSX Vector Byte-Reverse Word"},
  {"xsmaxjdp","VSX Scalar Maximum Type-J Double-Precision"},
  {"xxbrq","VSX Vector Byte-Reverse Quadword"},
  {"paste","Paste"},
  {"dscli","DFP Shift Significand Left Immediate"},
  {"e_or2is","OR (2 operand) Immediate Shifted"},
  {"vpermr","Vector Permute Right-indexed"},
  {"e_stwu","Store Word with Update"},
  {"drdpq.","DFP Round To DFP Long"},
  {"xvcmpgtdp.","VSX Vector Compare Greater Than Double-Precision"},
  {"lhaux","Load Halfword Algebraic with Update Indexed"},
  {"xxbrd","VSX Vector Byte-Reverse Doubleword"},
  {"ddivq.","DFP Divide Quad"},
  {"msgsync","Message Synchronize"},
  {"addmeo","Add to Minus One Extended"},
  {"dscliq.","DFP Shift Significand Left Immediate Quad"},
  {"fctiwuz.","Floating Convert with round to Zero Double-Precision To Unsigned Word format"},
  {"msgsnd","Message Send"},
  {"nego","Negate"},
  {"fmuls.","Floating Multiply Single"},
  {"stbcix","Store Byte Caching Inhibited Indexed"},
  {"divdu","Divide Doubleword Unsigned"},
  {"xxbrh","VSX Vector Byte-Reverse Halfword"},
  {"se_rfdi","Return From Debug Interrupt"},
  {"lwzux","Load Word & Zero with Update Indexed"},
  {"divdo","Divide Doubleword"},
  {"mfocrf","Move From One CR Field"},
  {"xvmaddmsp","VSX Vector Multiply-Add Type-M Single-Precision"},
  {"mffscrni","Move From FPSCR Control & set RN Immediate"},
  {"xviexpdp","VSX Vector Insert Exponent Double-Precision"},
  {"xor","XOR"},
  {"lvx","Load Vector Indexed"},
  {"divwu.","Divide Word Unsigned"},
  {"divde","Divide Doubleword Extended"},
  {"bla","Branch [& Link] [Absolute]"},
  {"fctiw","Floating Convert with round Double-Precision To Signed Word format"},
  {"xststdcsp","VSX Scalar Test Data Class Single-Precision"},
  {"vshasigmaw","Vector SHA-256 Sigma Word"},
  {"ble","Branch if Less or Equal"},
  {"vcmpgtfp.","Vector Compare Greater Than Floating-Point"},
  {"vcmpgtfp","Vector Compare Greater Than Floating-Point"},
  {"se_rfci","Return From Critical Interrupt"},
  {"slbia","SLB Invalidate All"},
  {"e_add2i.","Add (2 operand) Immediate and Record"},
  {"xvcvdpsxds","VSX Vector Convert with round to zero Double-Precision to Signed Doubleword format"},
  {"andc","AND with Complement"},
  {"slbie","SLB Invalidate Entry"},
  {"blr","Branch to Link Register"},
  {"dadd","DFP Add"},
  {"vshasigmad","Vector SHA-512 Sigma Doubleword"},
  {"fctid","Floating Convert with round Double-Precision To Signed Doubleword format"},
  {"xsmsubqpo","VSX Scalar Multiply-Subtract Quad-Precision [with round to Odd]"},
  {"se_add","Add Short Form"},
  {"xvmaddadp","VSX Vector Multiply-Add Type-A Double-Precision"},
  {"blt","Branch if Less"},
  {"srd","Shift Right Doubleword"},
  {"lwz","Load Word And Zero"},
  {"vmaxsw","Vector Maximum Signed Word"},
  {"vmsummbm","Vector Multiply-Sum Mixed Byte Modulo"},
  {"e_lmw","Load Multiple Word"},
  {"dadd.","DFP Add"},
  {"fnmadd","Floating Negative Multiply-Add"},
  {"vsumsws","Vector Sum across Signed Word Saturate"},
  {"vmaxsd","Vector Maximum Signed Doubleword"},
  {"srw","Shift Right Word"},
  {"vrlh","Vector Rotate Left Halfword"},
  {"vmaxsb","Vector Maximum Signed Byte"},
  {"vrld","Vector Rotate Left Doubleword"},
  {"lwa","Load Word Algebraic"},
  {"vmaxsh","Vector Maximum Signed Halfword"},
  {"vrlb","Vector Rotate Left Byte"},
  {"xsresp","VSX Scalar Reciprocal Estimate Single-Precision"},
  {"e_lhau","Load Halfword Algebraic with Update"},
  {"stfdpx","Store Floating Double Pair Indexed"},
  {"divwuo","Divide Word Unsigned"},
  {"mcrxrx","Move XER to CR Extended"},
  {"fctiduz.","Floating Convert with round to Zero Double-Precision To Unsigned Doubleword format"},
  {"xsaddqp","VSX Scalar Add Quad-Precision [with round to Odd]"},
  {"and.","AND"},
  {"vrlw","Vector Rotate Left Word"},
  {"vextractuh","Vector Extract Unsigned Halfword"},
  {"dcmpoq","DFP Compare Ordered Quad"},
  {"bcdcpsgn.","Decimal CopySign & record"},
  {"mfvsrd","Move From VSR Doubleword"},
  {"vextractub","Vector Extract Unsigned Byte"},
  {"cnttzd.","Count Trailing Zeros Doubleword"},
  {"lxvwsx","Load VSX Vector Word & Splat Indexed"},
  {"xsdivsp","VSX Scalar Divide Single-Precision"},
  {"tabortwci.","Transaction Abort Word Conditional Immediate & record"},
  {"xvcmpeqdp.","VSX Vector Compare Equal Double-Precision"},
  {"mtctrl","Move To Special Count Register and Link"},
  {"xvminsp","VSX Vector Minimum Single-Precision"},
  {"xvrsqrtedp","VSX Vector Reciprocal Square Root Estimate Double-Precision"},
  {"vsum2sws","Vector Sum across Half Signed Word Saturate"},
  {"fmul.","Floating Multiply"},
  {"vaddeuqm","Vector Add Extended Unsigned Quadword Modulo"},
  {"xsmaddmsp","VSX Scalar Multiply-Add Type-M Single-Precision"},
  {"e_add2is","Add (2 operand) Immediate Shifted"},
  {"stb","Store Byte"},
  {"vminfp","Vector Minimum Floating-Point"},
  {"sradi","Shift Right Algebraic Doubleword Immediate"},
  {"xscvdphp","VSX Scalar Convert with round Double-Precision to Half-Precision format"},
  {"e_slwi.","Shift Left Word Immediate"},
  {"vextractuw","Vector Extract Unsigned Word"},
  {"std","Store Doubleword"},
  {"e_andi.","AND Scaled Immediate"},
  {"xsaddqpo","VSX Scalar Add Quad-Precision [with round to Odd]"},
  {"vmaxuw","Vector Maximum Unsigned Word"},
  {"diexq.","DFP Insert Exponent Quad"},
  {"se_mfar","Move from Alternate Register"},
  {"sth","Store Halfword"},
  {"daddq","DFP Add Quad"},
  {"bcdctn.","Decimal Convert To National & record"},
  {"addmeo.","Add to Minus One Extended"},
  {"mffscrn","Move From FPSCR Control & set RN"},
  {"xscvsdqp","VSX Scalar Convert Signed Doubleword to Quad-Precision format"},
  {"vaddcuw","Vector Add & Write Carry-Out Unsigned Word"},
  {"vmaxub","Vector Maximum Unsigned Byte"},
  {"stq","Store Quadword"},
  {"vaddcuq","Vector Add & write Carry Unsigned Quadword"},
  {"ldat","Load Doubleword ATomic"},
  {"stw","Store Word"},
  {"vmaxud","Vector Maximum Unsigned Doubleword"},
  {"xvrspip","VSX Vector Round Single-Precision to Integral toward +Infinity"},
  {"xxspltw","VSX Vector Splat Word"},
  {"divdo.","Divide Doubleword"},
  {"vmaxuh","Vector Maximum Unsigned Halfword"},
  {"lxssp","Load VSX Scalar Single"},
  {"xvrspiz","VSX Vector Round Single-Precision to Integral toward Zero"},
  {"vxor","Vector Logical XOR"},
  {"xsmaxcdp","VSX Scalar Maximum Type-C Double-Precision"},
  {"xvsqrtdp","VSX Vector Square Root Double-Precision"},
  {"dtstexq","DFP Test Exponent Quad"},
  {"xvaddsp","VSX Vector Add Single-Precision"},
  {"xvrspic","VSX Vector Round Single-Precision to Integral using Current rounding mode"},
  {"bcdsr.","Decimal Shift & Round & record"},
  {"fmuls","Floating Multiply Single"},
  {"vcmpeqfp","Vector Compare Equal To Floating-Point"},
  {"stdux","Store Doubleword with Update Indexed"},
  {"vupklpx","Vector Unpack Low Pixel"},
  {"xsrdpic","VSX Scalar Round Double-Precision to Integral using Current rounding mode"},
  {"e_rlw","Rotate Left Word"},
  {"cmpeqb","Compare Equal Byte"},
  {"xvrspim","VSX Vector Round Single-Precision to Integral toward -Infinity"},
  {"stdbrx","Store Doubleword Byte-Reverse Indexed"},
  {"sthbrx","Store Halfword Byte-Reverse Indexed"},
  {"vnand","Vector NAND"},
  {"se_rfgi","Return From Guest Interrupt"},
  {"fcmpu","Floating Compare Unordered"},
  {"stqcx.","Store Quadword Conditional Indexed & record"},
  {"cmpwi","Compare Word Immediate"},
  {"xsrdpim","VSX Scalar Round Double-Precision to Integral toward -Infinity"},
  {"mfmsr","Move From MSR"},
  {"xsrdpip","VSX Scalar Round Double-Precision to Integral toward +Infinity"},
  {"mullwo","Multiply Low Word"},
  {"fcmpo","Floating Compare Ordered"},
  {"vcmpgtuw.","Vector Compare Greater Than Unsigned Word"},
  {"xsrdpiz","VSX Scalar Round Double-Precision to Integral toward Zero"},
  {"srad.","Shift Right Algebraic Doubleword"},
  {"lhzux","Load Halfword & Zero with Update Indexed"},
  {"stfdux","Store Floating Double with Update Indexed"},
  {"xscmpodp","VSX Scalar Compare Ordered Double-Precision"},
  {"trechkpt.","Transaction Recheckpoint & record"},
  {"vpkshss","Vector Pack Signed Halfword Signed Saturate"},
  {"e_sthu","Store Halfword with Update"},
  {"vmulosw","Vector Multiply Odd Signed Word"},
  {"xxinsertw","VSX Vector Insert Word"},
  {"e_srwi.","Shift Right Word Immediate"},
  {"lwaux","Load Word Algebraic with Update Indexed"},
  {"subf.","Subtract From"},
  {"xscvdpspn","VSX Scalar Convert Double-Precision to Single-Precision Non-signalling format"},
  {"xsnmaddqpo","VSX Scalar Negative Multiply-Add Quad-Precision [with round to Odd]"},
  {"vmulosh","Vector Multiply Odd Signed Halfword"},
  {"crnand","CR NAND"},
  {"vmrghb","Vector Merge High Byte"},
  {"nand","NAND"},
  {"vrfin","Vector Round to Floating-Point Integral Nearest"},
  {"vmulosb","Vector Multiply Odd Signed Byte"},
  {"xvxsigdp","VSX Vector Extract Significand Double-Precision"},
  {"vrfim","Vector Round to Floating-Point Integral toward -Infinity"},
  {"vadduws","Vector Add Unsigned Word Saturate"},
  {"denbcdq","DFP Encode BCD To DPD Quad"},
  {"e_add16i","Add Immediate"},
  {"vmrghh","Vector Merge High Halfword"},
  {"stxvl","Store VSX Vector with Length"},
  {"xvcvspuxds","VSX Vector Convert with round to zero Single-Precision to Unsigned Doubleword format"},
  {"tsr.","Transaction Suspend or Resume & record"},
  {"se_li","Load Immediate Short Form; se_li r3, 1; r3 = 1"},
  {"vextuwrx","Vector Extract Unsigned Word Right-Indexed"},
  {"mtvscr","Move To VSCR"},
  {"vctsxs","Vector Convert with round to zero FP To Signed Word format Saturate"},
  {"nego.","Negate"},
  {"vmrghw","Vector Merge High Word"},
  {"dtstsfiq","DFP Test Significance Immediate Quad"},
  {"xvcvsphp","VSX Vector Convert with round Single-Precision to Half-Precision format"},
  {"eqv","Equivalent"},
  {"vcmpneb","Vector Compare Not Equal Byte"},
  {"xvnmaddadp","VSX Vector Negative Multiply-Add Type-A Double-Precision"},
  {"vrfiz","Vector Round to Floating-Point Integral toward Zero"},
  {"e_and2i.","AND (two operand) Immediate"},
  {"stwat","Store Word ATomic"},
  {"se_addi","Add Immediate Short Form"},
  {"dxex.","DFP Extract Exponent"},
  {"stswi","Store String Word Immediate"},
  {"addeo","Add Extended"},
  {"e_addi","Add Scaled Immediate"},
  {"e_rlwi","Rotate Left Word Immediate"},
  {"lfsx","Load Floating Single Indexed"},
  {"e_bl","Branch and Link"},
  {"stxvx","Store VSX Vector Indexed"},
  {"mullw.","Multiply Low Word"},
  {"vcmpneh","Vector Compare Not Equal Halfword"},
  {"vsubsbs","Vector Subtract Signed Byte Saturate"},
  {"vrfip","Vector Round to Floating-Point Integral toward +Infinity"},
  {"vadduwm","Vector Add Unsigned Word Modulo"},
  {"xsdivdp","VSX Scalar Divide Double-Precision"},
  {"lfsu","Load Floating Single with Update"},
  {"vcmpnew","Vector Compare Not Equal Word"},
  {"lbzux","Load Byte & Zero with Update Indexed"},
  {"vadduhm","Vector Add Unsigned Halfword Modulo"},
  {"e_crnor","Condition Register NOR"},
  {"vctzw","Vector Count Trailing Zeros Word"},
  {"addex","Add Extended using alternate carry"},
  {"vpmsumd","Vector Polynomial Multiply-Sum Doubleword"},
  {"e_bc","Branch Conditional"},
  {"stswx","Store String Word Indexed"},
  {"denbcd.","DFP Encode BCD To DPD"},
  {"stxvd2x","Store VSX Vector Doubleword*2 Indexed"},
  {"xsnegdp","VSX Scalar Negate Double-Precision"},
  {"bcctrl","Branch Conditional to CTR [& Link]"},
  {"vpmsumb","Vector Polynomial Multiply-Sum Byte"},
  {"xscvqpudz","VSX Scalar Convert with round to zero Quad-Precision to Unsigned Doubleword format"},
  {"rldic.","Rotate Left Doubleword Immediate then Clear"},
  {"vpkshus","Vector Pack Signed Halfword Unsigned Saturate"},
  {"subfe","Subtract From Extended"},
  {"vextuhlx","Vector Extract Unsigned Halfword Left-Indexed"},
  {"xoris","XOR Immediate Shifted"},
  {"vctzh","Vector Count Trailing Zeros Halfword"},
  {"se_srawi","Shift Right Algebraic Immediate"},
  {"xxlandc","VSX Vector Logical AND with Complement"},
  {"vpmsumh","Vector Polynomial Multiply-Sum Halfword"},
  {"subfc","Subtract From Carrying"},
  {"stbu","Store Byte with Update"},
  {"vorc","Vector OR with Complement"},
  {"cntlzd.","Count Leading Zeros Doubleword"},
  {"vctzd","Vector Count Trailing Zeros Doubleword"},
  {"subfo","Subtract From"},
  {"stbx","Store Byte Indexed"},
  {"vctzb","Vector Count Trailing Zeros Byte"},
  {"vpmsumw","Vector Polynomial Multiply-Sum Word"},
  {"vextractd","Vector Extract Doubleword"},
  {"cmprb","Compare Ranged Byte"},
  {"xscvqpswz","VSX Scalar Convert with round to zero Quad-Precision to Signed Word format"},
  {"dmul.","DFP Multiply"},
  {"vadduhs","Vector Add Unsigned Halfword Saturate"},
  {"se_rfi","Return From Interrupt"},
  {"fmsubs","Floating Multiply-Subtract Single"},
  {"se_bseti","Bit Set Immediate"},
  {"xvxexpsp","VSX Vector Extract Exponent Single-Precision"},
  {"subfco","Subtract From Carrying"},
  {"rlwimi.","Rotate Left Word Immediate then Mask Insert"},
  {"xsnmsubqp","VSX Scalar Negative Multiply-Subtract Quad-Precision [with round to Odd]"},
  {"subfe.","Subtract From Extended"},
  {"xscmpuqp","VSX Scalar Compare Unordered Quad-Precision"},
  {"vextsw2d","Vector Extend Sign Word to Doubleword"},
  {"vpksdus","Vector Pack Signed Doubleword Unsigned Saturate"},
  {"lhbrx","Load Halfword Byte-Reverse Indexed"},
  {"xvabsdp","VSX Vector Absolute Double-Precision"},
  {"e_stmw","Store Multiple Word"},
  {"lwzcix","Load Word & Zero Caching Inhibited Indexed"},
  {"xxlnand","VSX Vector Logical NAND"},
  {"rfid","Return from Interrupt Doubleword"},
  {"se_sub","Subtract"},
  {"e_rlw.","Rotate Left Word"},
  {"fsqrt","Floating Square Root"},
  {"eieio","Enforce In-order Execution of I/O"},
  {"srwi","Shift Right Word Immedate"},
  {"sthcix","Store Halfword Caching Inhibited Indexed"},
  {"tcheck","Transaction Check & record"},
  {"se_btsti","Bit Test Immediate"},
  {"rldicr","Rotate Left Doubleword Immediate then Clear Right"},
  {"adde.","Add Extended"},
  {"vadduqm","Vector Add Unsigned Quadword Modulo"},
  {"cdtbcd","Convert Declets To Binary Coded Decimal"},
  {"lvxl","Load Vector Indexed Last"},
  {"vcmpbfp","Vector Compare Bounds Floating-Point"},
  {"e_or2i","OR (two operand) Immediate"},
  {"dxexq","DFP Extract Exponent Quad"},
  {"tdi","Trap Doubleword Immediate"},
  {"vandc","Vector Logical AND with Complement"},
  {"dmulq","DFP Multiply Quad"},
  {"fnmsub","Floating Negative Multiply-Subtract"},
  {"e_mcrf","Move CR Field"},
  {"xscvsxdsp","VSX Scalar Convert with round Signed Doubleword to Single-Precision format"},
  {"dquai.","DFP Quantize Immediate"},
  {"fmsub.","Floating Multiply-Subtract"},
  {"se_bmaski","Bit Mask Generate Immediate"},
  {"xvnegdp","VSX Vector Negate Double-Precision"},
  {"xssqrtqpo","VSX Scalar Square Root Quad-Precision [with round to Odd]"},
  {"rldicl","Rotate Left Doubleword Immediate then Clear Left"},
  {"xvcmpgedp.","VSX Vector Compare Greater Than or Equal Double-Precision"},
  {"mftb","Move From Time Base"},
  {"addco.","Add Carrying"},
  {"vextsb2w","Vector Extend Sign Byte to Word"},
  {"e_and2is","AND (2 operand) Immediate Shifted"},
  {"xvcvuxwsp","VSX Vector Convert with round Unsigned Word to Single-Precision format"},
  {"subfeo.","Subtract From Extended"},
  {"ldbrx","Load Doubleword Byte-Reverse Indexed"},
  {"andis.","AND Immediate Shifted & record"},
  {"fcfidus.","Floating Convert with round Unsigned Doubleword to Single-Precision format"},
  {"stxsd","Store VSX Scalar Doubleword"},
  {"lfsux","Load Floating Single with Update Indexed"},
  {"fabs","Floating Absolute"},
  {"se_bctr","Branch to Count Register"},
  {"frin.","Floating Round To Integer Nearest"},
  {"xssqrtdp","VSX Scalar Square Root Double-Precision"},
  {"vextsb2d","Vector Extend Sign Byte to Doubleword"},
  {"vpermxor","Vector Permute & Exclusive-OR"},
  {"xxland","VSX Vector Logical AND"},
  {"xstdivdp","VSX Scalar Test for software Divide Double-Precision"},
  {"vmrglb","Vector Merge Low Byte"},
  {"subfc.","Subtract From Carrying"},
  {"se_subi.","Subtract Immediate"},
  {"subfeo","Subtract From Extended"},
  {"dcmpu","DFP Compare Unordered"},
  {"xnop","Executed No Operation"},
  {"e_stw","Store Word"},
  {"dcmpo","DFP Compare Ordered"},
  {"e_sth","Store Halfword"},
  {"vmrglh","Vector Merge Low Halfword"},
  {"vmrglw","Vector Merge Low Word"},
  {"bcctr","Branch Conditional to CTR [& Link]"},
  {"xscvuxdsp","VSX Scalar Convert with round Unsigned Doubleword to Single-Precision format"},
  {"vupklsb","Vector Unpack Low Signed Byte"},
  {"xvcvspdp","VSX Vector Convert Single-Precision to Double-Precision format"},
  {"e_stb","Store Byte"},
  {"fadd.","Floating Add"},
  {"ddiv","DFP Divide"},
  {"srw.","Shift Right Word"},
  {"lwarx","Load Word & Reserve Indexed"},
  {"fneg.","Floating Negate"},
  {"lfdpx","Load Floating Double Pair Indexed"},
  {"xvsubsp","VSX Vector Subtract Single-Precision"},
  {"se_blr","Branch to Link Register"},
  {"vcipherlast","Vector AES Cipher Last"},
  {"frim.","Floating Round To Integer Minus"},
  {"se_subi","Subtract Immediate"},
  {"sradi.","Shift Right Algebraic Doubleword Immediate"},
  {"vupklsh","Vector Unpack Low Signed Halfword"},
  {"stfd","Store Floating Double"},
  {"vcmpequw.","Vector Compare Equal To Unsigned Word"},
  {"rldimi","Rotate Left Doubleword Immediate then Mask Insert"},
  {"frsp","Floating Round to Single-Precision"},
  {"divdeu","Divide Doubleword Extended Unsigned"},
  {"xvcvdpuxds","VSX Vector Convert with round to zero Double-Precision to Unsigned Doubleword format"},
  {"xor.","XOR"},
  {"se_subf","Subtract From Short Form"},
  {"vupklsw","Vector Unpack Low Signed Word"},
  {"xvcmpeqsp.","VSX Vector Compare Equal Single-Precision"},
  {"divdeo","Divide Doubleword Extended"},
  {"bcdcfn.","Decimal Convert From National & record"},
  {"tlbsync","TLB Synchronize"},
  {"lbzu","Load Byte & Zero with Update"},
  {"vmulouw","Vector Multiply Odd Unsigned Word"},
  {"se_or","OR Short Form"},
  {"slwi","Shift Left Word Immediate"},
  {"xvnmsubmdp","VSX Vector Negative Multiply-Subtract Type-M Double-Precision"},
  {"xscvqpdp","VSX Scalar Convert with round Quad-Precision to Double-Precision format [with round to Odd]"},
  {"xxsel","VSX Vector Select"},
  {"stfs","Store Floating Single"},
  {"dxexq.","DFP Extract Exponent Quad"},
  {"lbzx","Load Byte & Zero Indexed"},
  {"vsum4shs","Vector Sum across Quarter Signed Halfword Saturate"},
  {"bcdutrunc.","Decimal Unsigned Truncate & record"},
  {"vaddecuq","Vector Add Extended & write Carry Unsigned Quadword"},
  {"vsubeuqm","Vector Subtract Extended Unsigned Quadword Modulo"},
  {"e_stbu","Store Byte with Update"},
  {"xvcvhpsp","VSX Vector Convert Half-Precision to Single-Precision format"},
  {"mcrf","Move CR Field"},
  {"stvebx","Store Vector Element Byte Indexed"},
  {"vmulouh","Vector Multiply Odd Unsigned Halfword"},
  {"se_mtar","Move To Alternate Register"},
  {"xvnmaddmdp","VSX Vector Negative Multiply-Add Type-M Double-Precision"},
  {"se_lbz","Load Byte and Zero Short Form"},
  {"extsh.","Extend Sign Halfword"},
  {"vcmpnezw.","Vector Compare Not Equal or Zero Word"},
  {"vcmpneb.","Vector Compare Not Equal Byte"},
  {"dquaiq","DFP Quantize Immediate Quad"},
  {"xsmaddqpo","VSX Scalar Multiply-Add Quad-Precision [with round to Odd]"},
  {"vor","Vector Logical OR"},
  {"fmrgow","Floating Merge Odd Word"},
  {"vmuloub","Vector Multiply Odd Unsigned Byte"},
  {"vextuwlx","Vector Extract Unsigned Word Left-Indexed"},
  {"xvcvdpsp","VSX Vector Convert with round Double-Precision to Single-Precision format"},
  {"stxsibx","Store VSX Scalar as Integer Byte Indexed"},
  {"vinsertd","Vector Insert Doubleword"},
  {"xvnmsubadp","VSX Vector Negative Multiply-Subtract Type-A Double-Precision"},
  {"bctarl","Branch Conditional to BTAR [& Link]"},
  {"xscvspdpn","VSX Scalar Convert Single-Precision to Double-Precision Non-signalling format"},
  {"vinsertb","Vector Insert Byte"},
  {"xsmsubmdp","VSX Scalar Multiply-Subtract Type-M Double-Precision"},
  {"vinserth","Vector Insert Halfword"},
  {"e_and2is.","AND (2 operand) Immediate Shifted"},
  {"fadds","Floating Add Single"},
  {"mulldo.","Multiply Low Doubleword"},
  {"xssubqpo","VSX Scalar Subtract Quad-Precision [with round to Odd]"},
  {"stxvw4x","Store VSX Vector Word*4 Indexed"},
  {"vinsertw","Vector Insert Word"},
  {"cmpw","Compare Word; cmpw CR0, r0, r1 (signed)"},
  {"xori","XOR Immediate"},
  {"wait","Wait for Interrupt"},
  {"xsmindp","VSX Scalar Minimum Double-Precision"},
  {"cmpi","Compare Immediate"},
  {"xsnmsubadp","VSX Scalar Negative Multiply-Subtract Type-A Double-Precision"},
  {"xxperm","VSX Vector Permute"},
  {"cmpl","Compare Logical"},
  {"vpkpx","Vector Pack Pixel"},
  {"tabort.","Transaction Abort & record"},
  {"divde.","Divide Doubleword Extended"},
  {"vmrgow","Vector Merge Odd Word"},
  {"xvmaddasp","VSX Vector Multiply-Add Type-A Single-Precision"},
  {"cmpb","Compare Byte"},
  {"slw.","Shift Left Word"},
  {"fsel","Floating Select"},
  {"stvehx","Store Vector Element Halfword Indexed"},
  {"se_mr","Move Register"},
  {"rldcr.","Rotate Left Doubleword then Clear Right"},
  {"xscmpgedp","VSX Scalar Compare Greater Than or Equal Double-Precision"},
  {"lxvw4x","Load VSX Vector Word*4 Indexed"},
  {"dmulq.","DFP Multiply Quad"},
  {"stfsu","Store Floating Single with Update"},
  {"xscvhpdp","VSX Scalar Convert Half-Precision to Double-Precision format"},
  {"e_slwi","Shift Left Word Immediate"},
  {"vextublx","Vector Extract Unsigned Byte Left-Indexed"},
  {"xsabsqp","VSX Scalar Absolute Quad-Precision"},
  {"vsraw","Vector Shift Right Algebraic Word"},
  {"bcds.","Decimal Shift & record"},
  {"subfo.","Subtract From"},
  {"fres.","Floating Reciprocal Estimate Single"},
  {"setb","Set Boolean"},
  {"vsum4sbs","Vector Sum across Quarter Signed Byte Saturate"},
  {"cnttzw","Count Trailing Zeros Word"},
  {"se_srw","Shift Right Word"},
  {"stfsx","Store Floating Single Indexed"},
  {"xssqrtsp","VSX Scalar Square Root Single-Precision"},
  {"e_cmpi","Compare Scaled Immediate Word"},
  {"e_cmph","Compare Halfword"},
  {"vsrab","Vector Shift Right Algebraic Byte"},
  {"se_mflr","Move From Link Register"},
  {"vsrad","Vector Shift Right Algebraic Doubleword"},
  {"xviexpsp","VSX Vector Insert Exponent Single-Precision"},
  {"e_cmphl16i","Compare Halfword Logical Immediate"},
  {"vpksdss","Vector Pack Signed Doubleword Signed Saturate"},
  {"vsrah","Vector Shift Right Algebraic Halfword"},
  {"cnttzd","Count Trailing Zeros Doubleword"},
  {"subfzeo.","Subtract From Zero Extended"},
  {"addc.","Add Carrying"},
  {"addme","Add to Minus One Extended"},
  {"xvcmpgesp.","VSX Vector Compare Greater Than or Equal Single-Precision"},
  {"xsdivqpo","VSX Scalar Divide Quad-Precision [with round to Odd]"},
  {"ldux","Load Doubleword with Update Indexed"},
  {"mcrfs","Move To CR from FPSCR"},
  {"xscvdpuxws","VSX Scalar Convert with round to zero Double-Precision to Unsigned Word format"},
  {"e_crnand","Condition Register NAND"},
  {"xvtsqrtsp","VSX Vector Test for software Square Root Single-Precision"},
  {"bcdsetsgn.","Decimal Set Sign & record"},
  {"fctidz.","Floating Convert with round to Zero Double-Precision To Signed Doubleword format"},
  {"se_sth","Store Halfword Short Form"},
  {"vrlwnm","Vector Rotate Left Word then AND with Mask"},
  {"drsp.","DFP Round To DFP Short"},
  {"e_ori.","OR Scaled Immediate"},
  {"vctzlsbb","Vector Count Trailing Zero Least-Significant Bits Byte"},
  {"se_stb","Store Byte Short Form"},
  {"divdeuo","Divide Doubleword Extended Unsigned"},
  {"bdzt","Decrement CTR and Branch if its Zero (true)"},
  {"extrwi","Extract and Right Justify Immediate"},
  {"tabortdci.","Transaction Abort Doubleword Conditional Immediate & record"},
  {"lfdux","Load Floating Double with Update Indexed"},
  {"subfmeo.","Subtract From Minus One Extended"},
  {"se_mfctr","Move From Count Register"},
  {"stxsspx","Store VSX Scalar Single-Precision Indexed"},
  {"xvdivsp","VSX Vector Divide Single-Precision"},
  {"vmladduhm","Vector Multiply-Low-Add Unsigned Halfword Modulo"},
  {"xvcmpeqsp","VSX Vector Compare Equal Single-Precision"},
  {"se_stw","Store Word Short Form"},
  {"bdzf","Decrement CTR and Branch if its Zero (false)"},
  {"drdpq","DFP Round To DFP Long"},
  {"mulhdu.","Multiply High Doubleword Unsigned"},
  {"mtfsfi.","Move To FPSCR Field Immediate"},
  {"addzeo.","Add to Zero Extended"},
  {"xxsldwi","VSX Vector Shift Left Double by Word Immediate"},
  {"se_neg","Negate Short Form"},
  {"stbcx.","Store Byte Conditional Indexed & record"},
  {"addco","Add Carrying"},
  {"rldcl.","Rotate Left Doubleword then Clear Left"},
  {"vsububm","Vector Subtract Unsigned Byte Modulo"},
  {"fctiwz.","Floating Convert with round to Zero Double-Precision To Signed Word format"},
  {"fcfids","Floating Convert with round Signed Doubleword to Single-Precision format"},
  {"xvcvspsxds","VSX Vector Convert with round to zero Single-Precision to Signed Doubleword format"},
  {"vsububs","Vector Subtract Unsigned Byte Saturate"},
  {"fcfidu","Floating Convert with round Unsigned Doubleword to Double-Precision format"},
  {"dctqpq.","DFP Convert To DFP Extended"},
  {"xscmpexpqp","VSX Scalar Compare Exponents Quad-Precision"},
  {"stfsux","Store Floating Single with Update Indexed"},
  {"vsubshs","Vector Subtract Signed Halfword Saturate"},
  {"vsubsws","Vector Subtract Signed Word Saturate"},
  {"msgclrp","Message Clear Privileged"},
  {"xstsqrtdp","VSX Scalar Test for software Square Root Double-Precision"},
  {"xxleqv","VSX Vector Logical Equivalence"},
  {"stdu","Store Doubleword with Update"},
  {"cmplw","Compare Logical Word; cmplwi CR0, r0, 33(unsigned)"},
  {"lswi","Load String Word Immediate"},
  {"divdeu.","Divide Doubleword Extended Unsigned"},
  {"xxlxor","VSX Vector Logical XOR"},
  {"vcmpgtsh.","Vector Compare Greater Than Signed Halfword"},
  {"extsb.","Extend Sign Byte"},
  {"stdx","Store Doubleword Indexed"},
  {"vclzlsbb","Vector Count Leading Zero Least-Significant Bits Byte"},
  {"xscvqpuwz","VSX Scalar Convert with round to zero Quad-Precision to Unsigned Word format"},
  {"dquaq.","DFP Quantize Quad"},
  {"lswx","Load String Word Indexed"},
  {"xsmsubadp","VSX Scalar Multiply-Subtract Type-A Double-Precision"},
  {"vsplth","Vector Splat Halfword"},
  {"lvewx","Load Vector Element Word Indexed"},
  {"se_and.","AND Short Form"},
  {"vbpermq","Vector Bit Permute Quadword"},
  {"subfme","Subtract From Minus One Extended"},
  {"fcfid.","Floating Convert with round Signed Doubleword to Double-Precision format"},
  {"fmrgew","Floating Merge Even Word"},
  {"e_bcl","Branch Conditional and Link"},
  {"rldicr.","Rotate Left Doubleword Immediate then Clear Right"},
  {"vspltb","Vector Splat Byte"},
  {"divwuo.","Divide Word Unsigned"},
  {"cmpli","Compare Logical Immediate"},
  {"xvxexpdp","VSX Vector Extract Exponent Double-Precision"},
  {"addo.","Add"},
  {"xvsqrtsp","VSX Vector Square Root Single-Precision"},
  {"xvxsigsp","VSX Vector Extract Significand Single-Precision"},
  {"xsnmsubmdp","VSX Scalar Negative Multiply-Subtract Type-M Double-Precision"},
  {"xvmsubadp","VSX Vector Multiply-Subtract Type-A Double-Precision"},
  {"addic","Add Immediate Carrying and Record ; addic r3, r3, 1"},
  {"vbpermd","Vector Bit Permute Doubleword"},
  {"stop","Stop"},
  {"xxextractuw","VSX Vector Extract Unsigned Word"},
  {"xststdcdp","VSX Scalar Test Data Class Double-Precision"},
  {"vspltw","Vector Splat Word"},
  {"fadd","Floating Add"},
  {"rfscv","Return From System Call Vectored"},
  {"vsubfp","Vector Subtract Floating-Point"},
  {"fctiwz","Floating Convert with round to Zero Double-Precision To Signed Word format"},
  {"addis","Add Immediate Shifted"},
  {"se_not","NOT Short Form"},
  {"bcla","Branch Conditional [& Link] [Absolute]"},
  {"rfebb","Return from Event Based Branch"},
  {"darn","Deliver A Random Number"},
  {"xvmsubmdp","VSX Vector Multiply-Subtract Type-M Double-Precision"},
  {"lvsl","Load Vector for Shift Left"},
  {
# 1352 "project/radare2/libr/asm/d/ppc.c" 3 4
  ((void *)0)
# 1352 "project/radare2/libr/asm/d/ppc.c"
      , 
# 1352 "project/radare2/libr/asm/d/ppc.c" 3 4
        ((void *)0)
# 1352 "project/radare2/libr/asm/d/ppc.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_ppc_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_ppc_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 1367 "project/radare2/libr/asm/d/ppc.c" 3 4
        ((void *)0)
# 1367 "project/radare2/libr/asm/d/ppc.c"
            ;
}

const unsigned int gperf_ppc_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_ppc = {
  .name = "ppc",
  .get = &gperf_ppc_get,
  .hash = &gperf_ppc_hash,
  .foreach = &gperf_ppc_foreach
};
