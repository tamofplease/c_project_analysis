# 0 "project/radare2/libr/asm/d/arm.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/d/arm.c"


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
# 4 "project/radare2/libr/asm/d/arm.c" 2
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
# 5 "project/radare2/libr/asm/d/arm.c" 2
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
# 6 "project/radare2/libr/asm/d/arm.c" 2


# 7 "project/radare2/libr/asm/d/arm.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"cps","change processor state"},
  {"rev","reverse bytes"},
  {"cpp","cache prefetch prediction restriction by context: an alias of sys"},
  {"autiza","authenticate instruction address, using key a"},
  {"steorh","atomic exclusive or on halfword in memory, without return: an alias of ldeorh, ldeorah, ldeoralh, ldeorlh"},
  {"ret","return from subroutine"},
  {"eon","bitwise exclusive or not"},
  {"pacdb","pointer authentication code for data address, using key b"},
  {"cdp","coprocessor data operations"},
  {"ldnp","load pair of registers, with non-temporal hint"},
  {"subg","subtract with tag"},
  {"pacda","pointer authentication code for data address, using key a"},
  {"bhs","variant of bcs"},
  {"ldmia","incrememnt after"},
  {"steorl","atomic exclusive or on word or doubleword in memory, without return: an alias of ldeor, ldeora, ldeoral, ldeorl"},
  {"sbfiz","signed bitfield insert in zero: an alias of sbfm"},
  {"caspal","compare and swap pair of words or doublewords in memory"},
  {"steorb","atomic exclusive or on byte in memory, without return: an alias of ldeorb, ldeorab, ldeoralb, ldeorlb"},
  {"mov","move value between registers"},
  {"ldapursw","load-acquire rcpc register signed word (unscaled)"},
  {"ldmib","increment before"},
  {"sbfm","signed bitfield move"},
  {"dc","data cache operation (alias of sys)"},
  {"msr","move general-purpose register to system register"},
  {"cfinv","invert carry flag"},
  {"ldlarb","load loacquire register byte"},
  {"tbz","test bit and branch if zero"},
  {"tlbi","tlb invalidate operation: an alias of sys"},
  {"subp","subtract pointer"},
  {"subs","substract two values and update flags"},
  {"nop","no operation"},
  {"ldeora","atomic exclusive or on word or doubleword in memory"},
  {"ldlarh","load loacquire register halfword"},
  {"uxtab16","zero extend bytes to halfwords add halfwords"},
  {"ldeorb","atomic exclusive or on byte in memory"},
  {"bic","logical bit clear"},
  {"ldeorl","atomic exclusive or on word or doubleword in memory"},
  {"ldsminab","atomic signed minimum on byte in memory"},
  {"st64bv","single-copy atomic 64-byte store with return"},
  {"ldsminal","atomic signed minimum on word or doubleword in memory"},
  {"ldeorh","atomic exclusive or on halfword in memory"},
  {"pacibz","pointer authentication code for instruction address, using key b"},
  {"eor","logical exclusive OR (XOR)"},
  {"ldsminah","atomic signed minimum on halfword in memory"},
  {"stlurh","store-release register halfword (unscaled)"},
  {"bfc","bitfield clear: an alias of bfm"},
  {"andne","logical AND if Z clear (not equal)"},
  {"bfi","bitfield insert: an alias of bfm"},
  {"stlurb","store-release register byte (unscaled)"},
  {"bfm","bitfield move"},
  {"ngcs","negate with carry, setting flags: an alias of sbcs"},
  {"ldarh","load-acquire register halfword"},
  {"lsr","logical shift right"},
  {"ldarb","load-acquire register byte"},
  {"ands","logical AND that updates flags"},
  {"rsb","reverse substract"},
  {"csetm","conditional set mask: an alias of csinv"},
  {"prfum","prefetch memory (unscaled offset)"},
  {"rsc","reverse substract with carry"},
  {"uxtab","zero extend byte to word, add"},
  {"ldlar","load loacquire register"},
  {"lduminalh","atomic unsigned minimum on halfword in memory"},
  {"lsl","logical shift left"},
  {"stzgm","store tag and zero multiple"},
  {"bics","Bitwise bit clear (shifted register), setting the condition flags."},
  {"bge","branch if N clear and V clear"},
  {"asr","arithmetic shift right"},
  {"ror","rotate right: an alias of rorv"},
  {"ldurh","load register halfword (unscaled)"},
  {"brk","breakpoint instruction"},
  {"lduminalb","atomic unsigned minimum on byte in memory"},
  {"wfet","wait for event with timeout"},
  {"cneg","conditional negate: an alias of csneg"},
  {"ldclra","atomic bit clear on word or doubleword in memory"},
  {"sbcs","subtract with carry, setting flags"},
  {"braa","branch with pointer authentication using A key"},
  {"ldurb","load register byte (unscaled)"},
  {"ldclrb","atomic bit clear on byte in memory"},
  {"brab","branch with pointer authentication using B key"},
  {"ldsetlb","atomic bit set on byte in memory"},
  {"ldclrh","atomic bit clear on halfword in memory"},
  {"bgt","branch if Z, N and V clear"},
  {"rbit","reverse bits"},
  {"ldclrl","atomic bit clear on word or doubleword in memory"},
  {"casp","compare and swap pair of words or doublewords in memory"},
  {"setf8","evaluation of 8 or 16 bit flag values"},
  {"sturb","store register byte (unscaled)"},
  {"ldsetlh","atomic bit set on halfword in memory"},
  {"ldadd","atomic add on word or doubleword in memory"},
  {"psb","profiling synchronization barrier"},
  {"lslv","logical shift left variable"},
  {"sturh","store register halfword (unscaled)"},
  {"ld64b","single-copy atomic 64-byte load"},
  {"stxr","store exclusive register"},
  {"lsls","logical shift left and update flags"},
  {"stxp","store exclusive pair of registers"},
  {"and","logical AND"},
  {"cas","compare and swap word or doubleword in memory"},
  {"ldapr","load-acquire rcpc register"},
  {"casa","compare and swap word or doubleword in memory"},
  {"casb","compare and swap byte in memory"},
  {"xpaci","strip pac from instruction pointer"},
  {"casl","compare and swap word or doubleword in memory"},
  {"pop","load N elements from stack into given registers"},
  {"xpacd","strip pac from data pointer"},
  {"cash","compare and swap halfword in memory"},
  {"cbnz","compare and branch on non-zero"},
  {"stsminh","atomic signed minimum on halfword in memory, without return: an alias of ldsminh, ldsminah, ldsminalh, ldsminlh"},
  {"staddlh","atomic add on halfword in memory, without return: an alias of ldaddh, ldaddah, ldaddalh, ldaddlh"},
  {"caspa","compare and swap pair of words or doublewords in memory"},
  {"stsminl","atomic signed minimum on word or doubleword in memory, without return: an alias of ldsmin, ldsmina, ldsminal, ldsminl"},
  {"stsminb","atomic signed minimum on byte in memory, without return: an alias of ldsminb, ldsminab, ldsminalb, ldsminlb"},
  {"caspl","compare and swap pair of words or doublewords in memory"},
  {"staddlb","atomic add on byte in memory, without return: an alias of ldaddb, ldaddab, ldaddalb, ldaddlb"},
  {"dmb","data memory barrier"},
  {"extr","extract register"},
  {"bti","branch target identification"},
  {"stumin","atomic unsigned minimum on word or doubleword in memory, without return: an alias of ldumin, ldumina, lduminal, lduminl"},
  {"ldumaxalb","atomic unsigned maximum on byte in memory"},
  {"swplh","swap halfword in memory"},
  {"ldumaxalh","atomic unsigned maximum on halfword in memory"},
  {"caslh","compare and swap halfword in memory"},
  {"orreq","logical inclusive OR if Z set (equal)"},
  {"ldumax","atomic unsigned maximum on word or doubleword in memory"},
  {"ldtrsw","load register signed word (unprivileged)"},
  {"mcr","move to coprocessor from ARM register"},
  {"ldtrsh","load register signed halfword (unprivileged)"},
  {"swplb","swap byte in memory"},
  {"esb","error synchronization barrier"},
  {"csdb","consumption of speculative data barrier"},
  {"smaddl","signed multiply-add long"},
  {"caslb","compare and swap byte in memory"},
  {"strh.w","store byte value in register into memory"},
  {"casalh","compare and swap halfword in memory"},
  {"autiaz","authenticate instruction address, using key a"},
  {"ldtrsb","load register signed byte (unprivileged)"},
  {"tsb","trace synchronization barrier"},
  {"sxtw","signed extend word"},
  {"swpab","swap byte in memory"},
  {"pacibsp","function prelude for pointer authentication using B key"},
  {"sxth","extracts bits[15:0] and sign extends to 32 bits."},
  {"casalb","compare and swap byte in memory"},
  {"swpah","swap halfword in memory"},
  {"ldsmaxah","atomic signed maximum on halfword in memory"},
  {"ldsmin","atomic signed minimum on word or doubleword in memory"},
  {"sxtb","extracts bits[7:0] and sign extends to 32 bits."},
  {"swpal","swap word or doubleword in memory"},
  {"ldsmaxal","atomic signed maximum on word or doubleword in memory"},
  {"ldsmaxab","atomic signed maximum on byte in memory"},
  {"stnp","store pair of registers, with non-temporal hint"},
  {"crc32cw","crc32c checksum"},
  {"paciasp","function prelude for pointer authentication using A key"},
  {"stclr","atomic bit clear on word or doubleword in memory, without return: an alias of ldclr, ldclra, ldclral, ldclrl"},
  {"pacib","pointer authentication code for instruction address, using key b"},
  {"tst","test"},
  {"addne","add two values if Z clear (not equal)"},
  {"stz2g","store allocation tags, zeroing"},
  {"pacia","pointer authentication code for instruction address, using key a"},
  {"autib1716","authenticate instruction address, using key b"},
  {"at","address translate: an alias of sys"},
  {"smsubl","signed multiply-subtract long"},
  {"crc32cx","crc32c checksum"},
  {"ldsminalh","atomic signed minimum on halfword in memory"},
  {"cmpp","compare with tag: an alias of subps"},
  {"ldreq","load from memory to register if Z set (equal)"},
  {"dsb","data synchronization barrier."},
  {"crc32cb","crc32c checksum"},
  {"ldsminalb","atomic signed minimum on byte in memory"},
  {"flt","armfpu: convert int to float: flt"},
  {"rorv","rotate right variable"},
  {"bcc","branch if C clear (no carry)"},
  {"umsubl","unsigned multiply-subtract long"},
  {"crc32ch","crc32c checksum"},
  {"eorne","logical exclusive OR (XOR) if Z clear (not equal)"},
  {"ldumaxlb","atomic unsigned maximum on byte in memory"},
  {"st2g","store allocation tags"},
  {"movs","move immediate into register and update flags"},
  {"movt","write 16 bit value on top of halfword"},
  {"movw","write 16 bit value on lower bits"},
  {"ldumaxlh","atomic unsigned maximum on halfword in memory"},
  {"drps","debug restore process state"},
  {"movz","move shifted 16-bit immediate to register."},
  {"cmn","compare negated"},
  {"bcs","branch if C set (carry)"},
  {"pacib1716","pointer authentication code for instruction address, using key b"},
  {"ldapurh","load-acquire rcpc register halfword (unscaled)"},
  {"ldsetalb","atomic bit set on byte in memory"},
  {"ssbb","speculative store bypass barrier: an alias of dsb"},
  {"ldapurb","load-acquire rcpc register byte (unscaled)"},
  {"ldaprh","load-acquire rcpc register halfword"},
  {"sys","system instruction"},
  {"movk","move wide with keep"},
  {"ldsetalh","atomic bit set on halfword in memory"},
  {"ldaprb","load-acquire rcpc register byte"},
  {"ldsetl","atomic bit set on word or doubleword in memory"},
  {"teq","test equivalence"},
  {"addlo","add if C is clear (no carry)"},
  {"movn","move wide with not"},
  {"ldseth","atomic bit set on halfword in memory"},
  {"cmp","compares two registers"},
  {"strne","store register into memory if Z clear (not equal)"},
  {"ldar","load-acquire register"},
  {"ldrsh","load register signed halfword"},
  {"lduminb","atomic unsigned minimum on byte in memory"},
  {"ldsetb","atomic bit set on byte in memory"},
  {"ldseta","atomic bit set on word or doubleword in memory"},
  {"swpa","swap word or doubleword in memory"},
  {"ldumina","atomic unsigned minimum on word or doubleword in memory"},
  {"swpb","swap byte in memory"},
  {"ldr.w","load from memory to register"},
  {"ldrsb","load register signed byte"},
  {"lduminh","atomic unsigned minimum on halfword in memory"},
  {"swph","swap halfword in memory"},
  {"lduminl","atomic unsigned minimum on word or doubleword in memory"},
  {"swpl","swap word or doubleword in memory"},
  {"adrp","form pc-relative address to 4kb page"},
  {"clz","count leading zeros"},
  {"b.cond","branch conditionally"},
  {"bpl","branch if N clear"},
  {"sb","speculation barrier"},
  {"ldrsw","load register signed word"},
  {"ldsmaxalb","atomic signed maximum on byte in memory"},
  {"xpaclri","system strip pointer authentication"},
  {"cls","count leading sign bits"},
  {"lduminlh","atomic unsigned minimum on halfword in memory"},
  {"ngc","negate with carry: an alias of sbc"},
  {"autibsp","authenticate return pointer before returning from function using B key"},
  {"lduminlb","atomic unsigned minimum on byte in memory"},
  {"ldrh","load half word (16bit) from memory to register"},
  {"beq","branches if equal (see 'b') Z is set"},
  {"ldsmaxalh","atomic signed maximum on halfword in memory"},
  {"mcrr","move to coprocessor from two ARM register"},
  {"dvp","data value prediction restriction by context: an alias of sys"},
  {"ldrb","load byte from memory to register"},
  {"ldgm","load tag multiple"},
  {"ldeorlh","atomic exclusive or on halfword in memory"},
  {"eoreq","logical exclusive OR (XOR) if Z set (equal)"},
  {"subps","subtract pointer, setting flags"},
  {"svc","supervisor call"},
  {"cinc","conditional increment: an alias of csinc"},
  {"rev64","reverse bytes: an alias of rev"},
  {"stset","atomic bit set on word or doubleword in memory, without return: an alias of ldset, ldseta, ldsetal, ldsetl"},
  {"strb","store byte value in register into memory"},
  {"ldumaxl","atomic unsigned maximum on word or doubleword in memory"},
  {"ldeorlb","atomic exclusive or on byte in memory"},
  {"strd","store floating point value in memory"},
  {"ldumaxh","atomic unsigned maximum on halfword in memory"},
  {"b","branches the program counter to dst (pc aka r15)"},
  {"tbnz","test bit and branch if nonzero"},
  {"strh","store byte value in register into memory"},
  {"ldpsw","load pair of registers signed word"},
  {"bne","branch if Z clear (not equal)"},
  {"tst.w","logical AND register value with 12-bit immediate value"},
  {"ldumaxa","atomic unsigned maximum on word or doubleword in memory"},
  {"ldumaxb","atomic unsigned maximum on byte in memory"},
  {"stlxr","store-release exclusive register"},
  {"stlxp","store-release exclusive pair of registers"},
  {"stllr","store lorelease register"},
  {"ldtrh","load register halfword (unprivileged)"},
  {"cinv","conditional invert: an alias of csinv"},
  {"addg","add with tag"},
  {"sbc","substract with carry"},
  {"ldtrb","load register byte (unprivileged)"},
  {"autdzb","authenticate data address, using key b"},
  {"autdza","authenticate data address, using key a"},
  {"rev16","reverse bytes in 16-bit halfwords"},
  {"ldm","load to multiple registers from memory"},
  {"strb.w","store byte value in register into memory"},
  {"orrne","logical inclusive OR if Z clear (not equal)"},
  {"ldeor","atomic exclusive or on word or doubleword in memory"},
  {"sev","send event"},
  {"adds","add two values and update flags"},
  {"eors","logical exclusive OR (XOR) and update flags"},
  {"smnegl","signed multiply-negate long: an alias of smsubl"},
  {"ldg","load allocation tag"},
  {"yield","alias for hint instructrion"},
  {"ldf","armfpu: load float value pointed by reg+(offset): ldf f0, [r0,#off]"},
  {"ldrab","load from memory to register authenticanting the pointer using B key"},
  {"bl","branches and link, similar to call in i386, set lr(r14) = pc, changes pc (r15) )"},
  {"ldc","load from memory to coprocessor"},
  {"ldraa","load from memory to register authenticanting the pointer using A key"},
  {"umnegl","unsigned multiply-negate long: an alias of umsubl"},
  {"ldaddal","atomic add on word or doubleword in memory"},
  {"ldaddah","atomic add on halfword in memory"},
  {"smulh","signed multiply high"},
  {"br","branch to register"},
  {"ldrne","load from memory to register if Z clear (not equal)"},
  {"msub","multiply-subtract"},
  {"smull","signed multiply long: an alias of smaddl"},
  {"ldaxrb","load-acquire exclusive register byte"},
  {"ldp","load a pair of registers from memory"},
  {"axflag","convert floating-point condition flags from arm to external format"},
  {"ldr","load register"},
  {"ldaddab","atomic add on byte in memory"},
  {"autiasp","authenticate return pointer before returning from function using A key"},
  {"subne","substract two values if Z clear (not equal)"},
  {"adcs","add with carry and update flags"},
  {"bx","branches and exchanges cpu mode to 16 bits (thumb mode)"},
  {"pacia1716","pointer authentication code for instruction address, using key a"},
  {"ldaddl","atomic add on word or doubleword in memory"},
  {"orrs","logical inclusive OR and update flags"},
  {"hint","hint instruction"},
  {"xaflag","convert floating-point condition flags from external format to arm format"},
  {"stumax","atomic unsigned maximum on word or doubleword in memory, without return: an alias of ldumax, ldumaxa, ldumaxal, ldumaxl"},
  {"stuminl","atomic unsigned minimum on word or doubleword in memory, without return: an alias of ldumin, ldumina, lduminal, lduminl"},
  {"ldaxrh","load-acquire exclusive register halfword"},
  {"sysl","system instruction with result"},
  {"ldaddh","atomic add on halfword in memory"},
  {"stlr","store-release register"},
  {"stuminh","atomic unsigned minimum on halfword in memory, without return: an alias of lduminh, lduminah, lduminalh, lduminlh"},
  {"irg","insert random tag"},
  {"autia1716","authenticate instruction address, using key a"},
  {"madd","multiply-add"},
  {"ldrb.w","load from memory to register"},
  {"autibz","authenticate instruction address, using key b"},
  {"ldadda","atomic add on word or doubleword in memory"},
  {"stsmin","atomic signed minimum on word or doubleword in memory, without return: an alias of ldsmin, ldsmina, ldsminal, ldsminl"},
  {"retab","return with authenticated pointer using B key"},
  {"ldaddb","atomic add on byte in memory"},
  {"retaa","return with authenticated pointer using A key"},
  {"ldxrb","load exclusive register byte"},
  {"stuminb","atomic unsigned minimum on byte in memory, without return: an alias of lduminb, lduminab, lduminalb, lduminlb"},
  {"mneg","multiply-negate: an alias of msub"},
  {"orr","logical inclusive OR"},
  {"stsetlh","atomic bit set on halfword in memory, without return: an alias of ldseth, ldsetah, ldsetalh, ldsetlh"},
  {"st64b","single-copy atomic 64-byte store without return"},
  {"rev32","reverse bytes in 32-bit words"},
  {"asrv","arithmetic shift right variable"},
  {"ldxrh","load exclusive register halfword"},
  {"stlrh","store-release register halfword"},
  {"dcps1","debug change pe state to el1."},
  {"bics.w","word bitwise bit clear and update flags"},
  {"asrs","arithmetic shift right and update flags"},
  {"dcps3","debug change pe state to el3"},
  {"orn","bitwise or not"},
  {"dcps2","debug change pe state to el2."},
  {"stsetlb","atomic bit set on byte in memory, without return: an alias of ldsetb, ldsetab, ldsetalb, ldsetlb"},
  {"stlrb","store-release register byte"},
  {"blrabz","variants of blraa"},
  {"rsbs","subtracts the value from zero, producing the arithmetic negative of the value, and updates flags"},
  {"hlt","external debug breakpoint."},
  {"uxtb.w","zero textend word and add, extend to 32bit value"},
  {"ldclrlh","atomic bit clear on halfword in memory"},
  {"ldumin","atomic unsigned minimum on word or doubleword in memory"},
  {"stsmaxb","atomic signed maximum on byte in memory, without return: an alias of ldsmaxb, ldsmaxab, ldsmaxalb, ldsmaxlb"},
  {"stsmaxl","atomic signed maximum on word or doubleword in memory, without return: an alias of ldsmax, ldsmaxa, ldsmaxal, ldsmaxl"},
  {"stlur","store-release register (unscaled)"},
  {"steor","atomic exclusive or on word or doubleword in memory, without return: an alias of ldeor, ldeora, ldeoral, ldeorl"},
  {"vsri","vector shift right and insert"},
  {"stxrh","store exclusive register halfword"},
  {"stsmaxh","atomic signed maximum on halfword in memory, without return: an alias of ldsmaxh, ldsmaxah, ldsmaxalh, ldsmaxlh"},
  {"swpalh","swap halfword in memory"},
  {"autia","authenticate instruction address, using key a"},
  {"ldsmaxh","atomic signed maximum on halfword in memory"},
  {"ldclrlb","atomic bit clear on byte in memory"},
  {"autib","authenticate instruction address, using key b"},
  {"mrs","move system register"},
  {"stsmaxlh","atomic signed maximum on halfword in memory, without return: an alias of ldsmaxh, ldsmaxah, ldsmaxalh, ldsmaxlh"},
  {"ldsmaxl","atomic signed maximum on word or doubleword in memory"},
  {"ldsmaxb","atomic signed maximum on byte in memory"},
  {"stxrb","store exclusive register byte"},
  {"swpalb","swap byte in memory"},
  {"ldsmaxa","atomic signed maximum on word or doubleword in memory"},
  {"rfe","return from exception (loads pc+cpsr)"},
  {"csinv","conditional select invert"},
  {"ubfx","unsigned bit field extract"},
  {"stsmaxlb","atomic signed maximum on byte in memory, without return: an alias of ldsmaxb, ldsmaxab, ldsmaxalb, ldsmaxlb"},
  {"ccmn","conditional compare negative"},
  {"lsrs","logical shift right and update flags"},
  {"blraaz","variants of blraa"},
  {"lsrv","logical shift right variable"},
  {"srs","store return state"},
  {"csinc","conditional select increment"},
  {"dgh","data gathering hint"},
  {"ic","instruction cache operation (alias of sys)"},
  {"ubfm","unsigned bitfield move"},
  {"mov.w","move 3byte immediate into register"},
  {"ldxp","load exclusive pair of registers"},
  {"cfp","control flow prediction restriction by context: an alias of sys"},
  {"ldxr","load exclusive register"},
  {"ldsmaxlb","atomic signed maximum on byte in memory"},
  {"sub","substract two values"},
  {"ccmp","conditional compare"},
  {"it","if then"},
  {"stsminlb","atomic signed minimum on byte in memory, without return: an alias of ldsminb, ldsminab, ldsminalb, ldsminlb"},
  {"ldsmaxlh","atomic signed maximum on halfword in memory"},
  {"pacdza","pointer authentication code for data address, using key a"},
  {"neg","negate: an alias of sub"},
  {"pacdzb","pointer authentication code for data address, using key b"},
  {"mvns","move bitwise NOT and update flags"},
  {"ldursw","load register signed word (unscaled)"},
  {"stsminlh","atomic signed minimum on halfword in memory, without return: an alias of ldsminh, ldsminah, ldsminalh, ldsminlh"},
  {"wfit","wait for interrupt with timeout"},
  {"ldursh","load register signed halfword (unscaled)"},
  {"ldm.w","load multiple words from memory into registers"},
  {"mla","multiply and accumulate"},
  {"pop.w","load N words from stack into registers"},
  {"ldaxp","load-acquire exclusive pair of registers"},
  {"ldaxr","load-acquire exclusive register"},
  {"andeq","logical AND if Z set (equal)"},
  {"ldursb","load register signed byte (unscaled)"},
  {"pacga","pointer authentication code, using generic key"},
  {"hvc","hypervisor call"},
  {"stc","store from coprocessor to memory"},
  {"stclrlb","atomic bit clear on byte in memory, without return: an alias of ldclrb, ldclrab, ldclralb, ldclrlb"},
  {"lduminab","atomic unsigned minimum on byte in memory"},
  {"stf","armfpu: store float value pointed by reg+(offset): ldf [r0,#off]"},
  {"sttrb","store register byte (unprivileged)"},
  {"stg","store allocation tag"},
  {"blo","variant of bcc"},
  {"mls","multiply and substract"},
  {"sttrh","store register halfword (unprivileged)"},
  {"stclrlh","atomic bit clear on halfword in memory, without return: an alias of ldclrh, ldclrah, ldclralh, ldclrlh"},
  {"stumaxlh","atomic unsigned maximum on halfword in memory, without return: an alias of ldumaxh, ldumaxah, ldumaxalh, ldumaxlh"},
  {"lduminah","atomic unsigned minimum on halfword in memory"},
  {"stm","store multiple registers to memory"},
  {"str","store register into memory"},
  {"staddb","atomic add on byte in memory, without return: an alias of ldaddb, ldaddab, ldaddalb, ldaddlb"},
  {"lduminal","atomic unsigned minimum on word or doubleword in memory"},
  {"wfs","armfpu: write fp status register. wfs r0"},
  {"stumaxlb","atomic unsigned maximum on byte in memory, without return: an alias of ldumaxb, ldumaxab, ldumaxalb, ldumaxlb"},
  {"stp","store register pairs in memory"},
  {"ldsmina","atomic signed minimum on word or doubleword in memory"},
  {"ble","branch if (Z || (N && V)) or !N && V) or !N && V"},
  {"ldsminb","atomic signed minimum on byte in memory"},
  {"stlxrb","store-release exclusive register byte"},
  {"stgm","store tag multiple"},
  {"ldsminl","atomic signed minimum on word or doubleword in memory"},
  {"pssbb","physical speculative store bypass barrier: an alias of dsb"},
  {"blx","branch link and optionally exchange to Thumb"},
  {"ldsetal","atomic bit set on word or doubleword in memory"},
  {"ldsminh","atomic signed minimum on halfword in memory"},
  {"stsetb","atomic bit set on byte in memory, without return: an alias of ldsetb, ldsetab, ldsetalb, ldsetlb"},
  {"stlxrh","store-release exclusive register halfword"},
  {"staddh","atomic add on halfword in memory, without return: an alias of ldaddh, ldaddah, ldaddalh, ldaddlh"},
  {"wfe","wait for event"},
  {"crc32w","crc32 checksum"},
  {"bls","branch if C clear or Z set"},
  {"ldsetah","atomic bit set on halfword in memory"},
  {"blr","branch with link to register"},
  {"staddl","atomic add dword (arm v8.1)"},
  {"brabz","variant of brabz"},
  {"negs","negate, setting flags: an alias of subs"},
  {"stseth","atomic bit set on halfword in memory, without return: an alias of ldseth, ldsetah, ldsetalh, ldsetlh"},
  {"stgp","store allocation tag and pair of registers"},
  {"bxj","branches and exchanges cpu mode to Jazzele (jumps to a bytecode vector)"},
  {"ldsetab","atomic bit set on byte in memory"},
  {"blt","branch if N clear and V set"},
  {"stsetl","atomic bit set on word or doubleword in memory, without return: an alias of ldset, ldseta, ldsetal, ldsetl"},
  {"bmi","branch if N set"},
  {"wfi","wait for interrupt"},
  {"crc32x","crc32 checksum"},
  {"stumaxb","atomic unsigned maximum on byte in memory, without return: an alias of ldumaxb, ldumaxab, ldumaxalb, ldumaxlb"},
  {"crc32b","crc32 checksum"},
  {"paciza","pointer authentication code for instruction address, using key a"},
  {"ldclralh","atomic bit clear on halfword in memory"},
  {"pacizb","pointer authentication code for instruction address, using key b"},
  {"ldapur","load-acquire rcpc register (unscaled)"},
  {"swp","swap word or doubleword in memory"},
  {"ldset","atomic bit set on word or doubleword in memory"},
  {"stumaxh","atomic unsigned maximum on halfword in memory, without return: an alias of ldumaxh, ldumaxah, ldumaxalh, ldumaxlh"},
  {"ldsmax","atomic signed maximum on word or doubleword in memory"},
  {"adc","add with carry"},
  {"add","add two values"},
  {"setf16","evaluation of 8 or 16 bit flag values"},
  {"stumaxl","atomic unsigned maximum on word or doubleword in memory, without return: an alias of ldumax, ldumaxa, ldumaxal, ldumaxl"},
  {"crc32h","crc32 checksum"},
  {"ldclralb","atomic bit clear on byte in memory"},
  {"uxth","extracts bits[15:0] and zero extends to 32 bits."},
  {"gmi","tag mask insert"},
  {"ldmda","decrement after"},
  {"ldmdb","decrement before"},
  {"cset","conditional set: an alias of csinc"},
  {"vadd","vector add"},
  {"cpsid","like msr, but only disable interrupts (i or f)"},
  {"braaz","variant of braa"},
  {"cpsie","like msr, but only enable interrupts (i or f)"},
  {"adr","form pc-relative address"},
  {"uxtb","extracts bits[7:0] and zero extends to 32 bits."},
  {"bvs","branch if V set"},
  {"udiv","unsigned division"},
  {"umaddl","unsigned multiply-add long"},
  {"mvn","move bitwise NOT"},
  {"rsbs.w","substract the negative value"},
  {"ldsminlh","atomic signed minimum on halfword in memory"},
  {"ldumaxal","atomic unsigned maximum on word or doubleword in memory"},
  {"prfm","prefetch memory (literal)"},
  {"eret","return from exception"},
  {"ldumaxah","atomic unsigned maximum on halfword in memory"},
  {"csneg","conditional select negation"},
  {"stzg","store allocation tag, zeroing"},
  {"ldaddalb","atomic add on byte in memory"},
  {"sdiv","signed division"},
  {"ldclr","atomic bit clear on word or doubleword in memory"},
  {"bvc","branch if V clear"},
  {"ldsminlb","atomic signed minimum on byte in memory"},
  {"csel","conditional select"},
  {"paciaz","pointer authentication code for instruction address, using key a"},
  {"ldeoralh","atomic exclusive or on halfword in memory"},
  {"ldeorab","atomic exclusive or on byte in memory"},
  {"stur","store register (unscaled)"},
  {"ldaddalh","atomic add on halfword in memory"},
  {"stuminlb","atomic unsigned minimum on byte in memory, without return: an alias of lduminb, lduminab, lduminalb, lduminlb"},
  {"ldeoral","atomic exclusive or on word or doubleword in memory"},
  {"ldumaxab","atomic unsigned maximum on byte in memory"},
  {"rmif","rotate, mask insert flags"},
  {"ldeorah","atomic exclusive or on halfword in memory"},
  {"ldtr","load register (unprivileged)"},
  {"stuminlh","atomic unsigned minimum on halfword in memory, without return: an alias of lduminh, lduminah, lduminalh, lduminlh"},
  {"stclrl","atomic bit clear on word or doubleword in memory, without return: an alias of ldclr, ldclra, ldclral, ldclrl"},
  {"bfxil","bitfield extract and insert at low end: an alias of bfm"},
  {"ldeoralb","atomic exclusive or on byte in memory"},
  {"stclrh","atomic bit clear on halfword in memory, without return: an alias of ldclrh, ldclrah, ldclralh, ldclrlh"},
  {"ubfiz","unsigned bitfield insert in zero: an alias of ubfm"},
  {"subeq","substract two values if Z set (equal)"},
  {"cbz","compare and branch on zero"},
  {"stclrb","atomic bit clear on byte in memory, without return: an alias of ldclrb, ldclrab, ldclralb, ldclrlb"},
  {"mul","multiply"},
  {"addeq","add two values if Z set (equal)"},
  {"clrex","clear exclusive"},
  {"stllrb","store lorelease register byte"},
  {"isb","instruction synchronization barrier."},
  {"vldmia","vector load memory into paired registers"},
  {"sttr","store register (unprivileged)"},
  {"steorlb","atomic exclusive or on byte in memory, without return: an alias of ldeorb, ldeorab, ldeoralb, ldeorlb"},
  {"stllrh","store lorelease register halfword"},
  {"ldur","load register (unscaled)"},
  {"smc","secure monitor call"},
  {"udf","permanently undefined"},
  {"ldapursh","load-acquire rcpc register signed halfword (unscaled)"},
  {"stsmax","atomic signed maximum on word or doubleword in memory, without return: an alias of ldsmax, ldsmaxa, ldsmaxal, ldsmaxl"},
  {"eretab","exception return, with pointer authentication"},
  {"steorlh","atomic exclusive or on halfword in memory, without return: an alias of ldeorh, ldeorah, ldeoralh, ldeorlh"},
  {"stadd","atomic add word (arm v8.1)"},
  {"eretaa","exception return, with pointer authentication"},
  {"umull","unsigned multiply long: an alias of umaddl"},
  {"st64bv0","single-copy atomic 64-byte el0 store with return"},
  {"bhi","branch if C set and Z clear"},
  {"autda","authenticate data address, using key a"},
  {"umulh","unsigned multiply high"},
  {"ldclrab","atomic bit clear on byte in memory"},
  {"ldapursb","load-acquire rcpc register signed byte (unscaled)"},
  {"autdb","authenticate data address, using key b"},
  {"casab","compare and swap byte in memory"},
  {"sbfx","signed bit field extract"},
  {"casal","compare and swap word or doubleword in memory"},
  {"ldaddlb","atomic add on byte in memory"},
  {"streq","store register into memory if Z set (equal)"},
  {"ldclrah","atomic bit clear on halfword in memory"},
  {"casah","compare and swap halfword in memory"},
  {"sevl","send event local"},
  {"blraa","brank and link with pointer authentication"},
  {"ldclral","atomic bit clear on word or doubleword in memory"},
  {"blrab","variants of blraa"},
  {"ldaddlh","atomic add on halfword in memory"},
  {"autizb","authenticate instruction address, using key b"},
  {
# 565 "project/radare2/libr/asm/d/arm.c" 3 4
  ((void *)0)
# 565 "project/radare2/libr/asm/d/arm.c"
      , 
# 565 "project/radare2/libr/asm/d/arm.c" 3 4
        ((void *)0)
# 565 "project/radare2/libr/asm/d/arm.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_arm_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_arm_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 580 "project/radare2/libr/asm/d/arm.c" 3 4
        ((void *)0)
# 580 "project/radare2/libr/asm/d/arm.c"
            ;
}

const unsigned int gperf_arm_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_arm = {
  .name = "arm",
  .get = &gperf_arm_get,
  .hash = &gperf_arm_hash,
  .foreach = &gperf_arm_foreach
};
