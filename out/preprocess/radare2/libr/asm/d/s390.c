# 0 "project/radare2/libr/asm/d/s390.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/d/s390.c"


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
# 4 "project/radare2/libr/asm/d/s390.c" 2
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
# 5 "project/radare2/libr/asm/d/s390.c" 2
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
# 6 "project/radare2/libr/asm/d/s390.c" 2


# 7 "project/radare2/libr/asm/d/s390.c"
struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"cxstr","Convert from Signed Packed (ED128)"},
  {"vmalh","Vector Multiply and Add Logical High"},
  {"tmh","Test under Mask High"},
  {"vmalo","Vector Multiply and Add Logical Odd"},
  {"pfdrl","Prefetch Data Relative Long"},
  {"ssch","Start Subchannel"},
  {"mdr","Multiply (LH)"},
  {"vst","Vector Store"},
  {"cgxbra","Convert to Fixed (64EB)"},
  {"srxt","Shift Significand Right (ED)"},
  {"vfch","Vector FP Compare High"},
  {"pt","Program Transfer"},
  {"cegr","Convert from Fixed (SH64)"},
  {"lxdbr","Load Lengthened (EBLB)"},
  {"cdsy","Compare Double and Swap (32)"},
  {"awr","Add Unnormalized (LH)"},
  {"cxr","Compare (EH)"},
  {"slgrk","Subtract Logical (64)"},
  {"pr","Program Return"},
  {"cpxt","Convert to Packed (From Extended DFP)"},
  {"sra","Shift Right Single (32)"},
  {"llc","Load Logical Character (328)"},
  {"srl","Shift Right Single Logical (32)"},
  {"rchp","Reset Channel Path"},
  {"ltgfr","Load and Test (6432)"},
  {"lcxr","Load Complement (EH)"},
  {"cdsg","Compare Double and Swap (64)"},
  {"llh","Load Logical Halfword (3216)"},
  {"clghrl","Compare Logical Relative Long (6416)"},
  {"srk","Subtract (32)"},
  {"pc","Program Call"},
  {"srp","Shift and Round Decimal"},
  {"lgdr","Load GR from FPR (64L)"},
  {"ltxbr","Load and Test (EB)"},
  {"cxzt","Comvert from Zoned (to extended DFP)"},
  {"didbr","Divide to Integer (LB)"},
  {"risbgn","Rotate then Insert Selected Bits (64)"},
  {"lmd","Load Multiple Disjoint (6432&32)"},
  {"fixtr","Load FP Integer (ED)"},
  {"lmg","Load Multiple (64)"},
  {"vfae","Vector Find Any Element Equal"},
  {"cxftr","Convert from Fixed (ED32)"},
  {"vsrab","Vector Shift Right Arithmetic By Byte"},
  {"bpp","Branch Prediction Preload"},
  {"cvby","Convert to Binary (32)"},
  {"vfche","Vector FP Compare High or Equal"},
  {"lmh","Load Multiple High"},
  {"sur","Subtract Unnormalized (SH)"},
  {"stocg","Store on Condition (64)"},
  {"locghi","Load Halfword Immediate on Condition"},
  {"clghsi","Compare Logical Immediate (6416)"},
  {"clfit","Compare Logical Immediate and Trap"},
  {"cvbg","Convert to Binary (64)"},
  {"cegbr","Convert from Fixed (SB64)"},
  {"myr","Multiply Unnormalized (EHLH)"},
  {"cgxtr","Convert to Fixed (64ED)"},
  {"cfer","Convert to Fixed (32SH)"},
  {"stey","Store (S)"},
  {"vs","Vector Subtract"},
  {"risbhg","Rotate then Insert Selected Bits High32)"},
  {"sqxr","Square Root (EH)"},
  {"vfpso","Vector FP Perform Sign Operation"},
  {"ipte","Invalidate Page Table Entry"},
  {"alhhhr","Add Logical High (32)"},
  {"lmy","Load Multiple (32)"},
  {"lpgfr","Load Positive (6432)"},
  {"lgfi","Load Immediate (6432)"},
  {"plo","Perform Locked Operation"},
  {"stc","Store Character"},
  {"lbh","Load Byte High (328)"},
  {"rllg","Rotate Left Single Logical (64)"},
  {"stg","Store (64)"},
  {"vx","Vector Exclusive OR"},
  {"std","Store (L)"},
  {"risbg","Rotate then Insert Selected Bits (64)"},
  {"ste","Store (S)"},
  {"sth","Store Halfword (16)"},
  {"trtt","Translate Two to Two"},
  {"myh","Multiply Unnormalized (EHHLH)"},
  {"va","Vector Add"},
  {"upt","Update Tree"},
  {"trtr","Translate and Test Reverse"},
  {"stm","Store Multiple (32)"},
  {"myl","Multiply Unnormalized (EHLLH)"},
  {"cextr","Compare Biased Exponent (ED)"},
  {"slxt","Shift Significand Left (ED)"},
  {"bxhg","Branch on Index High (64)"},
  {"mxr","Multiply (EH)"},
  {"xrk","Exclusive OR (32)"},
  {"ltgr","Load and Test (64)"},
  {"vo","Vector OR"},
  {"tdgxt","Test Data Group (ED)"},
  {"pfmf","Perform Frame Management Function"},
  {"vn","Vector AND"},
  {"myhr","Multiply Unnormalized (EHHLH)"},
  {"ldxr","Load Rounded (LHEH)"},
  {"cfdr","Convert to Fixed (32LH)"},
  {"alhsik","Add Logical with Signed Immediate"},
  {"vl","Vector Load"},
  {"lgfr","Load (6432)"},
  {"trte","Translate and Test Extended"},
  {"lbr","Load Byte (328)"},
  {"stdy","Store (L)"},
  {"sty","Store (32)"},
  {"cutfu","Convert UTF-8 to Unicode"},
  {"trto","Translate Two to One"},
  {"mxd","Multiply (EHLH)"},
  {"llgfr","Load Logical (6432)"},
  {"stoc","Store on Condition (32)"},
  {"ltgf","Load And Test (6432)"},
  {"alghsik","Add Logical with Signed Immediate"},
  {"cpdt","Convert to Packed (From Long DFP)"},
  {"sxtr","Subtract (ED)"},
  {"niai","Next Instruction Access Intent"},
  {"swr","Subtract Unnormalized (LH)"},
  {"brctg","Branch Relative on Count (64)"},
  {"brcth","Branch Relative on Count High (32)"},
  {"lcr","Load Complement (32)"},
  {"ereg","Extract Stacked Registers (32)"},
  {"sxtra","Subtract (ED)"},
  {"celfbr","Convert from Logical (SB32)"},
  {"etnd","Extract Transaction Nesting Depth"},
  {"dxtra","Divide (ED)"},
  {"clcle","Compare Logical Long Extended"},
  {"slrk","Subtract Logical (32)"},
  {"strag","Store Real Address (64)"},
  {"vpk","Vector Pack"},
  {"lcer","Load Complement (SH)"},
  {"laalg","Load and Add Logical (64)"},
  {"clclu","Compare Logical Long Unicode"},
  {"ahik","Add Immediate (3216)"},
  {"lngfr","Load Negative (6432)"},
  {"clgxtr","Convert to Logical (64ED)"},
  {"mxdbr","Multiply (EBLB)"},
  {"pku","Pack Unicode"},
  {"cdgtr","Convert from Fixed (LD64)"},
  {"asi","Add Immediate (328)"},
  {"clib","Compare Logical Immediate and Branch"},
  {"kxbr","Compare and Signal (EB)"},
  {"vfms","Vector FP Multiply and Subtract"},
  {"sqe","Square Root (SH)"},
  {"sqd","Square Root (LH)"},
  {"dxr","Divide (EH)"},
  {"lam","Load Access Multiple"},
  {"clij","Compare Logical Immediate and Branch"},
  {"lan","Load and AND (32)"},
  {"lao","Load and OR (32)"},
  {"clih","Compare Logical Immediate High (32)"},
  {"laa","Load and Add (32)"},
  {"pka","Pack ASCII"},
  {"trace","Trace (32)"},
  {"fiebr","Load FP Integer (SB)"},
  {"tracg","Trace (64)"},
  {"vfma","Vector FP Multiply and Add"},
  {"lae","Load Address Extended"},
  {"vmao","Vector Multiply and Add Odd"},
  {"lax","Load and Exclusive OR (32)"},
  {"locfh","Load High on Condition (32)"},
  {"lay","Load Address"},
  {"vmal","Vector Multiply and Add Low"},
  {"iac","Insert Address Space Control"},
  {"cgxr","Convert to Fixed (64EH)"},
  {"klmd","Compute Last Message Digest"},
  {"vmah","Vector Multiply and Add High"},
  {"cliy","Compare Logical Immediate"},
  {"msch","Modify Subchannel"},
  {"cdgtra","Convert from Fixed (LD64)"},
  {"adtra","ADD (LD)"},
  {"vmae","Vector Multiply and Add Even"},
  {"lpxr","Load Positive (EH)"},
  {"ledtr","Load Rounded (SDLD)"},
  {"lat","Load and Trap (32)"},
  {"sthh","Store Halfword High (16)"},
  {"rp","Resume Program"},
  {"clhf","Compare Logical High (32)"},
  {"alhhlr","Add Logical High (32)"},
  {"llgcr","Load Logical Character (648)"},
  {"slbgr","Subtract Logical with Borrow (64)"},
  {"lfh","Load High (32)"},
  {"sebr","Subtract (SB)"},
  {"veslv","Vector Element Shift Left"},
  {"spm","Set Program Mask"},
  {"debr","Divide (SB)"},
  {"sthy","Store Halfword (16)"},
  {"vcdlg","Vector FP Convert from Logical 64-bit"},
  {"cgdbra","Convert to Fixed (64LB)"},
  {"fixbr","Load FP Integer (EB)"},
  {"spt","Set CPU Timer"},
  {"alcg","Add Logical with Carry (64)"},
  {"sw","Subtract Unnormalized (LH)"},
  {"mylr","Multiply Unnormalized (EHLLH)"},
  {"st","Store (32)"},
  {"vlgv","Vector Load GR from VR Element"},
  {"su","Subtract Unnormalized (SH)"},
  {"iilh","Insert Immediate (low high)"},
  {"cdpt","Convert from Packed (To Long DFP)"},
  {"sr","Subtract (32)"},
  {"lgbr","Load Byte (648)"},
  {"spx","Set Prefix"},
  {"sp","Subtract Decimal"},
  {"iill","Insert Immediate (low low)"},
  {"srstu","Search String Unicode"},
  {"bprp","Branch Prediction Relative Preload"},
  {"clcl","Compare Logical Long"},
  {"cfc","Compare and Form Codeword"},
  {"alcr","Add Logical with Carry (32)"},
  {"lgh","Load Halfword (6416)"},
  {"nrk","AND (32)"},
  {"ssm","Set System Mask"},
  {"sy","Subtract (32)"},
  {"lgf","Load (6432)"},
  {"sske","Set Storage Key Extended"},
  {"sg","Subtract (64)"},
  {"iilf","Insert Immediate (low)"},
  {"sd","Subtract Normalized (LH)"},
  {"cfi","Compare Immediate (32)"},
  {"cvdy","Convert to Decimal (32)"},
  {"se","Subtract Normalized (SH)"},
  {"axr","Add Normalized (EH)"},
  {"lgb","Load Byte (648)"},
  {"ltebr","Load and Test (SB)"},
  {"cvdg","Convert to Decimal (64)"},
  {"stsi","Store System Information"},
  {"sl","Subtract Logical (32)"},
  {"mvghi","Move (6416)"},
  {"ltdtr","Load and Test (LD)"},
  {"cefbra","Convert from Fixed (SB32)"},
  {"aghik","Add Immediate (6416)"},
  {"sh","Subtract Halfword (3216)"},
  {"lray","Load Real Address (32)"},
  {"madbr","Multiply and Add (LB)"},
  {"sqeb","Square Root (SB)"},
  {"lgr","Load (64)"},
  {"xy","Exclusive Or (32)"},
  {"strv","Store Reversed (32)"},
  {"icmh","Insert Characters under Mask (high)"},
  {"vtm","Vector Test Under Mask"},
  {"lde","Load Lengthened (LHSH)"},
  {"cxgbra","Convert from Fixed (EB64)"},
  {"xr","Exclusive OR (32)"},
  {"cgdtr","Convert to Fixed (64LD)"},
  {"sqer","Square Root (SH)"},
  {"xi","Exclusive OR Immediate"},
  {"vesrlv","Vector Element Shift Right Logical"},
  {"icmy","Insert Characters under Mask (low)"},
  {"cxlftr","Convert from Logical (ED32)"},
  {"xg","Exclusive OR (64)"},
  {"ldy","Load (L)"},
  {"lrag","Load Real Address (64)"},
  {"strl","Store Relative Long (32)"},
  {"xc","Exclusive OR (character)"},
  {"clfxbr","Convert to Logical (32EB)"},
  {"vctz","Vector Count Trailing Zeros"},
  {"vsldb","Vector Shift Left Double By Byte"},
  {"ldr","Load (L)"},
  {"stmh","Store Multiple High (32)"},
  {"stmg","Store Multiple (64)"},
  {"cdzt","Comvert from Zoned (to long DFP)"},
  {"cu12","Convert UTF-8 to UTF-16"},
  {"ssair","Set Secondary ASN with Instance"},
  {"vsumq","Vector Sum Across Quadword"},
  {"wfc","Vector FP Compare Scalar"},
  {"cedtr","Compare Biased Exponent (LD)"},
  {"lrvgr","Load Reversed (64)"},
  {"cu14","Convert UTF-8 to UTF-32"},
  {"mghi","Multiply Halfword Immediate (6416)"},
  {"cxlgbr","Convert from Logical (EB64)"},
  {"clmh","Compare Logical Char. under Mask (high)"},
  {"wfk","Vector FP Compare and Signal Scalar"},
  {"tre","Translate Extended"},
  {"stmy","Store Multiple (32)"},
  {"vesl","Vector Element Shift Left"},
  {"msgr","Multiply Single (64)"},
  {"clgdtr","Convert to Logical (64LD)"},
  {"ley","Load (S)"},
  {"bxh","Branch on Index High (32)"},
  {"vsumg","Vector Sum Across Doubleword"},
  {"clmy","Compare Logical Char. under Mask (low)"},
  {"lcxbr","Load Complement (EB)"},
  {"vavgl","Vector Average Logical"},
  {"trt","Translate and Test"},
  {"ler","Load (S)"},
  {"msgf","Multiply Single (6432)"},
  {"oihh","OR Immediate (high high)"},
  {"cu21","Convert UTF-16 to UTF-8"},
  {"mdeb","Multiply (LBSB)"},
  {"oihl","OR Immediate (high low)"},
  {"cu24","Convert UTF-16 to UTF-32"},
  {"lxdr","Load Lengthened (EHLH)"},
  {"oihf","OR Immediate (high)"},
  {"cfxtr","Convert to Fixed (32ED)"},
  {"msebr","Multiply and Subtract (SB)"},
  {"vlbb","Vector Load to Block Boundary"},
  {"cxfbr","Convert from Fixed (EB32)"},
  {"mder","Multiply (LHSH)"},
  {"algf","Add Logical (6432)"},
  {"cxgtr","Convert from Fixed (ED64)"},
  {"spka","Set PSW Key from Address"},
  {"lxdb","Load Lengthened (EBLB)"},
  {"cdtr","Compare (LD)"},
  {"iihl","Insert Immediate (high low)"},
  {"iihh","Insert Immediate (high high)"},
  {"cgxbr","Convert to Fixed (64EB)"},
  {"lochhi","Load Halfword High Immediate on Condi-"},
  {"cxtr","Compare (ED)"},
  {"cefbr","Convert from Fixed (SB32)"},
  {"iske","Insert Storage Key Extended"},
  {"lrdr","Load Rounded (LHEH)"},
  {"cfxbra","Convert to Fixed (32EB)"},
  {"iihf","Insert Immediate (high)"},
  {"icm","Insert Characters under Mask (low)"},
  {"clgf","Compare Logical (6432)"},
  {"lzrg","Load and Zero Rightmost Byte (64)"},
  {"lzrf","Load and Zero Rightmost Byte (32)"},
  {"lxer","Load Lengthened (EHSH)"},
  {"lochi","Load Halfword Immediate on Condition"},
  {"algr","Add Logical (64)"},
  {"mayhr","Multiply and Add Unnormalized (EHHLH)"},
  {"tcxb","Test Data Class (EB)"},
  {"slhhhr","Subtract Logical High (32)"},
  {"tpi","Test Pending Interruption"},
  {"cfdbr","Convert to Fixed (32LB)"},
  {"alfi","Add Logical Immediate (32)"},
  {"clgt","Compare Logical and Trap (64)"},
  {"cgebr","Convert to Fixed (64SB)"},
  {"lxeb","Load Lengthened (EBSB)"},
  {"lgat","Load and Trap (64)"},
  {"icy","Insert Character"},
  {"clgr","Compare Logical (64)"},
  {"clfi","Compare Logical Immediate (32)"},
  {"lxr","Load (E)"},
  {"ceb","Compare (SB)"},
  {"slgfr","Subtract Logical (6432)"},
  {"lrer","Load Rounded (SHLH)"},
  {"nihh","AND Immediate (high high)"},
  {"kdbr","Compare and Signal (LB)"},
  {"hsch","Halt Subchannel"},
  {"cdutr","Convert from Unsigned Packed (LD64)"},
  {"nihl","AND Immediate (high low)"},
  {"vlde","Vector FP Load Lengthened"},
  {"slgfi","Subtract Logical Immediate (6432)"},
  {"ear","Extract Access"},
  {"hdr","Halve (LH)"},
  {"epsw","Extract PSW"},
  {"tbeginc","Transaction Begin (constrained)"},
  {"nihf","AND Immediate (high)"},
  {"cer","Compare (SH)"},
  {"lxe","Load Lengthened (EHSH)"},
  {"lxd","Load Lengthened (EHLH)"},
  {"mvz","Move Zones"},
  {"clgib","Compare Logical Immediate and Branch"},
  {"sckc","Set Clock Comparator"},
  {"kimd","Compute Intermediate Message Digest"},
  {"srda","Shift Right Double (64)"},
  {"tdget","Test Data Group (SD)"},
  {"clgij","Compare Logical Immediate and Branch"},
  {"lctl","Load Control (32)"},
  {"vleh","Vector Load Element (16)"},
  {"clgit","Compare Logical Immedical and Trap"},
  {"mvn","Move Numerics"},
  {"mvo","Move with Offset"},
  {"cdb","Compare (LB)"},
  {"esta","Extract Stacked State"},
  {"srdl","Shift Right Double Logical (64)"},
  {"fidtr","Load FP Integer (LD)"},
  {"vuplh","Vector Unpack Logical High"},
  {"vleb","Vector Load Element (8)"},
  {"sckpf","Set Clock Programmable Field"},
  {"mvi","Move Immediate"},
  {"llghr","Load Logical Halfword (6416)"},
  {"vupll","Vector Unpack Logical Low"},
  {"vlef","Vector Load Element (32)"},
  {"vleg","Vector Load Element (64)"},
  {"schm","Set Channel Monitor"},
  {"vled","Vector FP Load Rounded"},
  {"srdt","Shift Significand Right (LD)"},
  {"her","Halve (SH)"},
  {"mvc","Move (character)"},
  {"vsbi","Vector Subtract With Borrow Indication"},
  {"bassm","Branch and Save and Set Mode"},
  {"clgfi","Compare Logical Immediate (6432)"},
  {"cdr","Compare (LH)"},
  {"cds","Compare Double and Swap (32)"},
  {"stsch","Store Subchannel"},
  {"tdgdt","Test Data Group (LD)"},
  {"ivsk","Insert Virtual Storage Key"},
  {"stpq","Store Pair to Quadword (64,64128)"},
  {"xiy","Exclusive OR Immediate"},
  {"chlr","Compare High (32)"},
  {"stpt","Store CPU Timer"},
  {"oill","OR Immediate (low low)"},
  {"xsch","Cancel Subchannel"},
  {"stpx","Store Prefix"},
  {"tdcxt","Test Data Class (ED)"},
  {"oilh","OR Immediate (low high)"},
  {"oilf","OR Immediate (low)"},
  {"czxt","Comvert to Zoned (from extended DFP)"},
  {"vacc","Vector Add Compute Carry"},
  {"ltxtr","Load and Test (ED)"},
  {"clgfr","Compare Logical (6432)"},
  {"cgf","Compare (6432)"},
  {"cgh","Compare Halfword (6416)"},
  {"stnsm","Store Then And System Mask"},
  {"vsrlb","Vector Shift Right Logical By Byte"},
  {"mvclu","Move Long Unicode"},
  {"zap","Zero and Add"},
  {"msdr","Multiply and Subtract (LH)"},
  {"lnxr","Load Negative (EH)"},
  {"cgr","Compare (64)"},
  {"dxtr","Divide (ED)"},
  {"pfpo","Perform Floating-Point Operation"},
  {"sxr","Subtract Normalized (EH)"},
  {"sqdb","Square Root (LB)"},
  {"llgtat","Load Logical Thirty One Bits and Trap"},
  {"mxtr","Multiply (ED)"},
  {"mvcle","Move Long Extended"},
  {"cdlftr","Convert from Logical (LD32)"},
  {"msdb","Multiply and Subtract (LB)"},
  {"ddtra","Divide (LD)"},
  {"cxpt","Convert from Packed (To Extended DFP"},
  {"vftci","Vector FP Test Data Class Immediate"},
  {"stamy","Store Access Multiple"},
  {"lfas","Load FPC and Signal"},
  {"lnebr","Load Negative (SB)"},
  {"sqdr","Square Root (LH)"},
  {"stfle","Store Facility List Extended"},
  {"tsch","Test Subchannel"},
  {"maylr","Multiply and Add Unnormalized (EHLLH)"},
  {"slhhlr","Subtract Logical High (32)"},
  {"msy","Multiply Single (32)"},
  {"vch","Vector Compare High"},
  {"mser","Multiply and Subtract (SH)"},
  {"xgr","Exclusive OR (64)"},
  {"sqxbr","Square Root (EB)"},
  {"llgc","Load Logical Character (648)"},
  {"msr","Multiply Single (32)"},
  {"srag","Shift Right Single (64)"},
  {"ddbr","Divide (LB)"},
  {"laog","Load and OR (64)"},
  {"llgf","Load Logical (6432)"},
  {"fixbra","Load FP Integer (EB)"},
  {"vesra","Vector Element Shift Right Arithmetic"},
  {"axtra","ADD (ED)"},
  {"llgh","Load Logical Halfword (6416)"},
  {"mseb","Multiply and Subtract (SB)"},
  {"trtre","Translate and Test Reverse Extended"},
  {"vesrl","Vector Element Shift Right Logical"},
  {"srak","Shift Right Single (32)"},
  {"clfdbr","Convert to Logical (32LB)"},
  {"stckc","Store Clock Comparator"},
  {"nill","AND Immediate (low low)"},
  {"cdstr","Convert from Signed Packed (LD64)"},
  {"cu42","Convert UTF-32 to UTF-16"},
  {"cu41","Convert UTF-32 to UTF-8"},
  {"mxtra","Multiply (ED)"},
  {"stckf","Store Clock Fast"},
  {"nilh","AND Immediate (low high)"},
  {"msg","Multiply Single (64)"},
  {"stcke","Store Clock Extended"},
  {"nilf","AND Immediate (low)"},
  {"llgt","Load Logical Thirty One Bits (6431)"},
  {"mse","Multiply and Subtract (SH)"},
  {"msd","Multiply and Subtract (LH)"},
  {"tdcet","Test Data Class (SD)"},
  {"ptff","Perform Timing-Facility Function"},
  {"algrk","Add Logical (64)"},
  {"msfi","Multiply Single Immediate (32)"},
  {"lpswe","Load PSW Extended"},
  {"lang","Load and AND (64)"},
  {"ltdbr","Load and Test (LB)"},
  {"vlvgp","Vector Load VR from GRs Disjoint"},
  {"sgrk","Subtract (64)"},
  {"ser","Subtract Normalized (SH)"},
  {"cfdtr","Convert to Fixed (32LD)"},
  {"qadtr","Quantize (LD)"},
  {"madb","Multiply and Add (LB)"},
  {"dsgr","Divide Single (64)"},
  {"unpka","Unpack ASCII"},
  {"lpebr","Load Positive (SB)"},
  {"seb","Subtract (SB)"},
  {"tdcdt","Test Data Class (LD)"},
  {"tprot","Test Protection"},
  {"msgfr","Multiply Single (6432)"},
  {"ldetr","Load Lengthened (LDSD)"},
  {"ltxr","Load and Test (EH)"},
  {"dsgf","Divide Single (6432)"},
  {"madr","Multiply and Add (LH)"},
  {"mvcsk","Move with Source Key"},
  {"sqdbr","Square Root (LB)"},
  {"unpku","Unpack Unicode"},
  {"algsi","Add Logical with Signed Immediate (648)"},
  {"lzxr","Load Zero (E)"},
  {"stosm","Store Then Or System Mask"},
  {"msgfi","Multiply Single Immediate (6432)"},
  {"llgfat","Load and Trap (6432)"},
  {"sdr","Subtract Normalized (LH)"},
  {"vfs","Vector FP Subtract"},
  {"vrepi","Vector Replicate Immediate"},
  {"maeb","Multiply and Add (SB)"},
  {"cdlgbr","Convert from Logical (LB64)"},
  {"chhr","Compare High (32)"},
  {"clhhr","Compare Logical High (32)"},
  {"cfdbra","Convert to Fixed (32LB)"},
  {"vseg","Vector Sign Extend to Doubleword"},
  {"lexbr","Load Rounded (SBEB)"},
  {"palb","Purge ALB"},
  {"vfd","Vector FP Divide"},
  {"vsel","Vector Select"},
  {"lrv","Load Reversed (32)"},
  {"cdgbra","Convert from Fixed (LB64)"},
  {"sdb","Subtract (LB)"},
  {"vfa","Vector FP Add"},
  {"iextr","Insert Biased Exponent (ED64&ED)"},
  {"maer","Multiply and Add (SH)"},
  {"vfm","Vector FP Multiply"},
  {"lrl","Load Relative Long (32)"},
  {"vfi","Vector Load FP Integer"},
  {"balr","Branch and Link"},
  {"afi","Add Immediate (32)"},
  {"lamy","Load Access Multiple"},
  {"lra","Load Real Address (32)"},
  {"thder","Convert BFP to HFP (LHSB)"},
  {"srnm","Set BFP Rounding Mode (2 bit)"},
  {"ptf","Perform Topology Function"},
  {"ptlb","Purge TLB"},
  {"pti","Program Transfer with Instance"},
  {"sgr","Subtract (64)"},
  {"sacf","Set Address Space Control Fast"},
  {"pack","Pack"},
  {"ngrk","AND (64)"},
  {"aeb","Add (SB)"},
  {"stocfh","Store High on Condition (32)"},
  {"vgm","Vector Generate Mask"},
  {"mdebr","Multiply (LBSB)"},
  {"sgf","Subtract (6432)"},
  {"cxgr","Convert from Fixed (EH64)"},
  {"clfhsi","Compare Logical Immediate (3216)"},
  {"msdbr","Multiply and Subtract (LB)"},
  {"cegbra","Convert from Fixed (SB64)"},
  {"cxgbr","Convert from Fixed (EB64)"},
  {"aer","Add Normalized (SH)"},
  {"slbr","Subtract Logical with Borrow (32)"},
  {"llch","Load Logical Character High (328)"},
  {"lpq","Load Pair from Quadword (64&64128)"},
  {"clhrl","Compare Logical Relative Long (3216)"},
  {"mvcin","Move Inverse"},
  {"lpr","Load Positive (32)"},
  {"cger","Convert to Fixed (64SH)"},
  {"brxle","Branch Relative on Index Low or Equal (32)"},
  {"llcr","Load Logical Character (328)"},
  {"brxlg","Branch Relative on Index Low or Equal (64)"},
  {"oiy","OR Immediate"},
  {"adb","Add (LB)"},
  {"epair","Extract Primary ASN and Instance"},
  {"celgbr","Convert from Logical (SB64)"},
  {"cxfr","Convert from Fixed (EH32)"},
  {"rnsbg","Rotate then AND Selected Bits (64)"},
  {"lptea","Load Page-Table-Entry Address"},
  {"srlk","Shift Right Single Logical (32)"},
  {"slbg","Subtract Logical with Borrow (64)"},
  {"lpd","Load Pair Disjoint (32)"},
  {"llhh","Load Logical Halfword High (3216)"},
  {"adr","Add Normalized (LH)"},
  {"cfebr","Convert to Fixed (32SB)"},
  {"vpks","Vector Pack Saturate"},
  {"sar","Set Access"},
  {"cli","Compare Logical Immediate"},
  {"ecag","Extract CPU Attribute"},
  {"lpsw","Load PSW"},
  {"srlg","Shift Right Single Logical (64)"},
  {"clm","Compare Logical Char. under Mask (low)"},
  {"ddtr","Divide (LD)"},
  {"clc","Compare Logical (character)"},
  {"de","Divide (SH)"},
  {"vac","Vector Add With Carry"},
  {"dd","Divide (LH)"},
  {"clg","Compare Logical (64)"},
  {"mvhhi","Move (1616)"},
  {"mvcos","Move with Optional Specifications"},
  {"sdtra","Subtract (LD)"},
  {"meeb","Multiply (SB)"},
  {"sac","Set Address Space Control"},
  {"dl","Divide Logical (3264)"},
  {"cly","Compare Logical (32)"},
  {"vpdi","Vector Permute Doubleword Immediate"},
  {"mdbr","Multiply (LB)"},
  {"mayr","Multiply and Add Unnormalized (EHLH)"},
  {"llhr","Load Logical Halfword (3216)"},
  {"kebr","Compare and Signal (SB)"},
  {"dp","Divide Decimal"},
  {"sal","Set Address Limit"},
  {"clr","Compare Logical (32)"},
  {"dr","Divide (3264)"},
  {"lura","Load Using Real Address (32)"},
  {"epar","Extract Primary ASN"},
  {"clt","Compare Logical and Trap (32)"},
  {"ldxtr","Load Rounded (LDED)"},
  {"bct","Branch on Count (32)"},
  {"laal","Load and Add Logical (32)"},
  {"meer","Multiply (SH)"},
  {"stcmh","Store Characters under Mask (high)"},
  {"xilf","Exclusive OR Immediate (low)"},
  {"trap2","Trap"},
  {"vfene","Vector Find Element Not Equal"},
  {"bcr","Branch on Condition"},
  {"clhlr","Compare Logical High (32)"},
  {"verll","Vector Element Rotate Left Logical"},
  {"dsgfr","Divide Single (6432)"},
  {"cfxr","Convert to Fixed (32EH)"},
  {"laag","Load and Add (64)"},
  {"trap4","Trap"},
  {"tabort","Transaction Abort"},
  {"ed","Edit"},
  {"vlrep","Vector Load and Replicate"},
  {"mayh","Multiply and Add Unnormalized (EHHLH)"},
  {"sllg","Shift Left Single Logical (64)"},
  {"lgrl","Load Relative Long (64)"},
  {"vgfma","Vector Galois Field Multiply Sum and"},
  {"mayl","Multiply and Add Unnormalized (EHLLH)"},
  {"cghrl","Compare Halfword Relative Long (6416)"},
  {"stcmy","Store Characters under Mask (low)"},
  {"ipm","Insert Program Mask"},
  {"tend","Transaction End"},
  {"lpdfr","Load Positive (L)"},
  {"csst","Compare and Swap and Store"},
  {"sllk","Shift Left Single Logical (32)"},
  {"ipk","Insert PSW Key"},
  {"ppa","Perform Processor Assist"},
  {"mvpg","Move Page"},
  {"lnxbr","Load Negative (EB)"},
  {"alsi","Add Logical with Signed Immediate (328)"},
  {"ex","Execute"},
  {"mvcdk","Move with Destination Key"},
  {"stcrw","Store Channel Report Word"},
  {"vceq","Vector Compare Equal"},
  {"fiebra","Load FP Integer (SB)"},
  {"cspg","Compare and Swap and Purge (64)"},
  {"cgebra","Convert to Fixed (64SB)"},
  {"clst","Compare Logical String"},
  {"locg","Load on Condition (64)"},
  {"ledr","Load Rounded (SHLH)"},
  {"slgr","Subtract Logical (64)"},
  {"cdfbr","Convert from Fixed (LB32)"},
  {"cghsi","Compare Halfword Immediate (6416)"},
  {"eregg","Extract Stacked Registers (64)"},
  {"laxg","Load and Exclusive OR (64)"},
  {"efpc","Extract FPC"},
  {"cvb","Convert to Binary (32)"},
  {"cvd","Convert to Decimal (32)"},
  {"vscbi","Vector Subtract Compute Borrow Indication"},
  {"tmlh","Test under Mask (low high)"},
  {"tcdb","Test Data Class (LB)"},
  {"cgij","Compare Immediate and Branch Relative"},
  {"slgf","Subtract Logical (6432)"},
  {"vmxl","Vector Maximum Logical"},
  {"tbedr","Convert HFP to BFP (SBLH)"},
  {"lxdtr","Load Lengthened (EDLD)"},
  {"lcebr","Load Complement (SB)"},
  {"tmll","Test under Mask (low low)"},
  {"sck","Set Clock"},
  {"alrk","Add Logical (32)"},
  {"bxleg","Branch on Index Low or Equal (64)"},
  {"locr","Load on Condition (32)"},
  {"cgxtra","Convert to Fixed (64ED)"},
  {"bakr","Branch and Stack"},
  {"cgib","Compare Immediate and Branch (648)"},
  {"lhrl","Load Halfword Relative Long (3216)"},
  {"cij","Compare Immediate and Branch Relative"},
  {"clrt","Compare Logical and Trap (32)"},
  {"axbr","Add (EB)"},
  {"cih","Compare Immediate High (32)"},
  {"brxhg","Branch Relative on Index High (64)"},
  {"vperm","Vector Permute"},
  {"mvst","Move String"},
  {"clrj","Compare Logical and Branch Relative (32)"},
  {"ltr","Load and Test (32)"},
  {"cib","Compare Immediate and Branch (328)"},
  {"clrl","Compare Logical Relative Long (32)"},
  {"cgit","Compare Immediate and Trap (6416)"},
  {"slfi","Subtract Logical Immediate (32)"},
  {"vcdg","Vector FP Convert from Fixed 64-bit"},
  {"llgtr","Load Logical Thirty One Bits (6431)"},
  {"bctgr","Branch on Count (64)"},
  {"clrb","Compare Logical and Branch (32)"},
  {"vfsq","Vector FP Square Root"},
  {"clfxtr","Convert to Logical (32ED)"},
  {"ltg","Load and Test (64)"},
  {"vsbcbi","Vector Subtract With Borrow Compute"},
  {"cxbr","Compare (EB)"},
  {"lndbr","Load Negative (LB)"},
  {"tbegin","Transaction Begin (nonconstrained)"},
  {"cit","Compare Immediate and Trap (3216)"},
  {"stcps","Store Channel Path Status"},
  {"cgfi","Compare Immediate (6432)"},
  {"verim","Vector Element Rotate and Insert Under"},
  {"chi","Compare Halfword Immediate (3216)"},
  {"chf","Compare High (32)"},
  {"cgfr","Compare (6432)"},
  {"shhlr","Subtract High (32)"},
  {"slak","Shift Left Single (32)"},
  {"vmrl","Vector Merge Low"},
  {"vec","Vector Element Compare"},
  {"vmrh","Vector Merge High"},
  {"agf","Add (6432)"},
  {"ledbr","Load Rounded (SBLB)"},
  {"diebr","Divide to Integer (SB)"},
  {"cuse","Compare until Substring Equal"},
  {"clfebr","Convert to Logical (32SB)"},
  {"idte","Invalidate DAT Table Entry"},
  {"slag","Shift Left Single (64)"},
  {"chy","Compare Halfword (3216)"},
  {"sthrl","Store Halfword Relative Long (16)"},
  {"cgfrl","Compare Relative Long (6432)"},
  {"agr","Add (64)"},
  {"esar","Extract Secondary ASN"},
  {"xihf","Exclusive OR Immediate (high)"},
  {"vstrc","Vector String Range Compare"},
  {"vecl","Vector Element Compare Logical"},
  {"sly","Subtract Logical (32)"},
  {"clhhsi","Compare Logical Immediate (1616)"},
  {"cxlfbr","Convert from Logical (EB32)"},
  {"adbr","Add (LB)"},
  {"slr","Subtract Logical (32)"},
  {"ad","Add Normalized (LH)"},
  {"ae","Add Normalized (SH)"},
  {"unpk","Unpack"},
  {"ag","Add (64)"},
  {"vno","Vector NOR"},
  {"vscef","Vector Scatter Element (32)"},
  {"vsceg","Vector Scatter Element (64)"},
  {"ddb","Divide (LB)"},
  {"al","Add Logical (32)"},
  {"laey","Load Address Extended"},
  {"vgfm","Vector Galois Field Multiply Sum"},
  {"vclgd","Vector FP Convert to Logical 64-bit"},
  {"ah","Add Halfword (3216)"},
  {"sll","Shift Left Single Logical (32)"},
  {"cdbr","Compare (LB)"},
  {"srnmb","Set BFP Rounding Mode (3 bit)"},
  {"slb","Subtract Logical with Borrow (32)"},
  {"clgfrl","Compare Logical Relative Long (6432)"},
  {"au","Add Unnormalized (SH)"},
  {"vnc","Vector AND with Complement"},
  {"sla","Shift Left Single (32)"},
  {"aw","Add Unnormalized (LH)"},
  {"lpdbr","Load Positive (LB)"},
  {"locfhr","Load High on Condition (32)"},
  {"slg","Subtract Logical (64)"},
  {"ap","Add Decimal"},
  {"ar","Add (32)"},
  {"ddr","Divide (LH)"},
  {"crt","Compare and Trap (32)"},
  {"mdtr","Multiply (LD)"},
  {"srnmt","Set DFP Rounding Mode"},
  {"ay","Add (32)"},
  {"kmc","Cipher Message with Chaining"},
  {"vgeg","Vector Gather Element (64)"},
  {"vgef","Vector Gather Element (32)"},
  {"kmf","Cipher Message with Cipher Feedback"},
  {"cgdr","Convert to Fixed (64LH)"},
  {"deb","Divide (SB)"},
  {"esdtr","Extract Significance (64LD)"},
  {"sxbr","Subtract (EB)"},
  {"vslb","Vector Shift Left By Byte"},
  {"kmo","Cipher Message with Output Feedback"},
  {"cfxbr","Convert to Fixed (32EB)"},
  {"fier","Load FP Integer (SH)"},
  {"tmhl","Test under Mask (high low)"},
  {"crb","Compare and Branch (32)"},
  {"stfpc","Store FPC"},
  {"crl","Compare Relative Long (32)"},
  {"tmhh","Test under Mask (high high)"},
  {"bal","Branch and Link"},
  {"brxh","Branch Relative on Index High (32)"},
  {"clgebr","Convert to Logical (64SB)"},
  {"der","Divide (SH)"},
  {"crj","Compare and Branch Relative (32)"},
  {"agfi","Add Immediate (6432)"},
  {"bas","Branch and Save"},
  {"lndr","Load Negative (LH)"},
  {"ppno","Perform Pseudorandom Number Operation"},
  {"tar","Test Access"},
  {"mhi","Multiply Halfword Immediate (3216)"},
  {"agfr","Add (6432)"},
  {"cxfbra","Convert from Fixed (EB32)"},
  {"csdtr","Convert to Signed Packed (64LD)"},
  {"vchl","Vector Compare High Logical"},
  {"fidr","Load FP Integer (LH)"},
  {"alc","Add Logical with Carry (32)"},
  {"ahhlr","Add High (32)"},
  {"mhy","Multiply Halfword (6416)"},
  {"lpxbr","Load Positive (EB)"},
  {"alg","Add Logical (64)"},
  {"aly","Add Logical (32)"},
  {"pgout","Page Out"},
  {"lndfr","Load Negative (L)"},
  {"rxsbg","Rotate then Exclusive OR Selected Bit"},
  {"qaxtr","Quantize (ED)"},
  {"ledbra","Load Rounded (SBLB)"},
  {"tam","Test Addressing Mode"},
  {"llzrgf","Load Logical and Zero Rightmost Byte (32)"},
  {"lzdr","Load Zero (L)"},
  {"lner","Load Negative (SH)"},
  {"alr","Add Logical (32)"},
  {"llhrl","Load Logical Halfword Relative Long"},
  {"lh","Load Halfword (3216)"},
  {"vpkls","Vector Pack Logical Saturate"},
  {"lm","Load Multiple (32)"},
  {"shhhr","Subtract High (32)"},
  {"stctg","Store Control (64)"},
  {"la","Load Address"},
  {"lb","Load Byte (328)"},
  {"vcgd","Vector FP Convert to Fixed 64-bit"},
  {"le","Load (S)"},
  {"ld","Load (L)"},
  {"lg","Load (64)"},
  {"vsra","Vector Shift Right Arithmetic"},
  {"stctl","Store Control (32)"},
  {"stidp","Store CPU ID"},
  {"ly","Load (32)"},
  {"sie","Start Interpretive Execution"},
  {"srst","Search String"},
  {"cdgr","Convert from Fixed (LH64)"},
  {"aghi","Add Halfword Immediate (6416)"},
  {"cxutr","Convert from Unsigned Packed (ED128"},
  {"meebr","Multiply (SB)"},
  {"clfdtr","Convert to Logical (32LD)"},
  {"vsrl","Vector Shift Right Logical"},
  {"mviy","Move Immediate"},
  {"lr","Load (32)"},
  {"clgxbr","Convert to Logical (64EB)"},
  {"lzer","Load Zero (S)"},
  {"lt","Load and Test (32)"},
  {"vrep","Vector Replicate"},
  {"shy","Subtract Halfword (3216)"},
  {"sldt","Shift Significand Left (LD)"},
  {"mh","Multiply Halfword (3216)"},
  {"vmnl","Vector Minimum Logical"},
  {"lfpc","Load FPC"},
  {"ml","Multiply Logical (6432)"},
  {"vgbm","Vector Generate Byte Mask"},
  {"sldl","Shift Left Double Logical (64)"},
  {"mxdr","Multiply (EHLH)"},
  {"iedtr","Insert Biased Exponent (LD64&LD)"},
  {"mc","Monitor Call"},
  {"md","Multiply (LH)"},
  {"esea","Extract and Set Extended Authority"},
  {"me","Multiply (LHSH)"},
  {"cghi","Compare Halfword Immediate (6416)"},
  {"tceb","Test Data Class (SB)"},
  {"my","Multiply Unnormalized (EHLH)"},
  {"cdfr","Convert from Fixed (LH32)"},
  {"slda","Shift Left Double (64)"},
  {"lcgfr","Load Complement (6432)"},
  {"mp","Multiply Decimal"},
  {"mr","Multiply (6432)"},
  {"mxdb","Multiply (EBLB)"},
  {"ms","Multiply Single (32)"},
  {"cudtr","Convert to Unsigned Packed (64LD)"},
  {"lctlg","Load Control (64)"},
  {"basr","Branch and Save"},
  {"lngr","Load Negative (64)"},
  {"vlvg","Vector Load VR Element from GR"},
  {"bc","Branch on Condition"},
  {"vsteb","Vector Store Element (8)"},
  {"vsteg","Vector Store Element (64)"},
  {"vstef","Vector Store Element (32)"},
  {"aih","Add Immediate High (32)"},
  {"lgfrl","Load Relative Long (6432)"},
  {"cksm","Checksum"},
  {"mvhi","Move (3216)"},
  {"vsteh","Vector Store Element (16)"},
  {"ldxbra","Load Rounded (LBEB)"},
  {"fixr","Load FP Integer (EH)"},
  {"lxebr","Load Lengthened (EBSB)"},
  {"strvg","Store Reversed (64)"},
  {"br","Branch on Condition"},
  {"niy","AND Immediate"},
  {"dxbr","Divide (EB)"},
  {"mlg","Multiply Logical (12864)"},
  {"vclz","Vector Count Leading Zeros"},
  {"vlr","Vector Load"},
  {"cg","Compare (64)"},
  {"strvh","Store Reversed (16)"},
  {"cd","Compare (LH)"},
  {"vlp","Vector Load Positive"},
  {"ce","Compare (SH)"},
  {"mxbr","Multiply (EB)"},
  {"ogrk","OR (64)"},
  {"vlm","Vector Load Multiple"},
  {"vll","Vector Load With Length"},
  {"ahi","Add Halfword Immediate (3216)"},
  {"edmk","Edit and Mark"},
  {"stch","Store Character High (8)"},
  {"cl","Compare Logical (32)"},
  {"stck","Store Clock"},
  {"esxtr","Extract Significance (64ED)"},
  {"stcm","Store Characters under Mask (low)"},
  {"cxgtra","Convert from Fixed (ED64)"},
  {"mlr","Multiply Logical (6432)"},
  {"ch","Compare Halfword (3216)"},
  {"kxtr","Compare and Signal (ED)"},
  {"vlc","Vector Load Complement"},
  {"tbdr","Convert HFP to BFP (LBLH)"},
  {"sdtr","Subtract (LD)"},
  {"cr","Compare (32)"},
  {"cdgbr","Convert from Fixed (LB64)"},
  {"eedtr","Extract Biased Exponent (64LD)"},
  {"ahhhr","Add High (32)"},
  {"cs","Compare and Swap (32)"},
  {"cp","Compare Decimal"},
  {"stcy","Store Character"},
  {"vmx","Vector Maximum"},
  {"ahy","Add Halfword (3216)"},
  {"llgfrl","Load Logical Relative Long (6432)"},
  {"esair","Extract Secondary ASN and Instance"},
  {"eextr","Extract Biased Exponent (64ED)"},
  {"cy","Compare (32)"},
  {"cxlgtr","Convert from Logical (ED64)"},
  {"llghrl","Load Logical Halfword Relative Long"},
  {"ldeb","Load Lengthened (LBSB)"},
  {"vmn","Vector Minimum"},
  {"vmo","Vector Multiply Odd"},
  {"vml","Vector Multiply Low"},
  {"bctr","Branch on Count (32)"},
  {"pfd","Prefetch Data"},
  {"vmh","Vector Multiply High"},
  {"rosbg","Rotate then OR Selected Bits (64)"},
  {"agsi","Add Immediate (648)"},
  {"cuutf","Convert Unicode to UTF-8"},
  {"vme","Vector Multiply Even"},
  {"lpdr","Load Positive (LH)"},
  {"xgrk","Exclusive OR (64)"},
  {"lder","Load Lengthened (LHSH)"},
  {"clgrt","Compare Logical and Trap (64)"},
  {"vaccc","Vector Add With Carry Compute Carry"},
  {"d","Divide (3264)"},
  {"rsch","Resume Subchannel"},
  {"sam31","Set Addressing Mode (31)"},
  {"a","Add (32)"},
  {"bctg","Branch on Count (64)"},
  {"c","Compare (32)"},
  {"lpdg","Load Pair Disjoint (64)"},
  {"czdt","Comvert to Zoned (from long DFP)"},
  {"clgrl","Compare Logical Relative Long (64)"},
  {"sfasr","Set FPC and Signal"},
  {"vleib","Vector Load Element Immediate (8)"},
  {"m","Multiply (6432)"},
  {"clgrj","Compare Logical and Branch Relative (64"},
  {"l","Load (32)"},
  {"o","OR (32)"},
  {"csp","Compare and Swap and Purge (32)"},
  {"vleig","Vector Load Element Immediate (64)"},
  {"n","AND (32)"},
  {"vllez","Vector Load Logical Element and Zero"},
  {"vleif","Vector Load Element Immediate (32)"},
  {"clgrb","Compare Logical and Branch (64)"},
  {"csy","Compare and Swap (32)"},
  {"vleih","Vector Load Element Immediate (16)"},
  {"sqebr","Square Root (SB)"},
  {"alsihn","Add Logical with Signed Immediate High"},
  {"s","Subtract (32)"},
  {"dlg","Divide Logical (64128)"},
  {"mlgr","Multiply Logical (12864)"},
  {"csg","Compare and Swap (64)"},
  {"alsih","Add Logical with Signed Immediate High"},
  {"ogr","OR (64)"},
  {"lexr","Load Rounded (SHEH)"},
  {"lper","Load Positive (SH)"},
  {"ic","Insert Character"},
  {"brct","Branch Relative on Count (32)"},
  {"x","Exclusive OR (32)"},
  {"llilf","Load Logical Immediate (low)"},
  {"vsum","Vector Sum Across Word"},
  {"cdlfbr","Convert from Logical (LB32)"},
  {"llilh","Load Logical Immediate (low high)"},
  {"ntstg","Nontransactional Store (64)"},
  {"lghrl","Load Halfword Relative Long (6416)"},
  {"llill","Load Logical Immediate (low low)"},
  {"sam24","Set Addressing Mode (24)"},
  {"chsi","Compare Halfword Immediate (3216)"},
  {"ssar","Set Secondary ASN"},
  {"vistr","Vector Isolate String"},
  {"dlr","Divide Logical (3264)"},
  {"cgdtra","Convert to Fixed (64LD)"},
  {"brasl","Branch Relative and Save Long"},
  {"ni","AND Immediate"},
  {"mae","Multiply and Add (SH)"},
  {"stgrl","Store Relative Long (64)"},
  {"mad","Multiply and Add (LH)"},
  {"aur","Add Unnormalized (SH)"},
  {"fidbra","Load FP Integer (LB)"},
  {"may","Multiply and Add Unnormalized (EHLH)"},
  {"nc","AND (character)"},
  {"keb","Compare and Signal (SB)"},
  {"brcl","Branch Relative on Condition Long"},
  {"sfpc","Set FPC"},
  {"ng","AND (64)"},
  {"aebr","Add (SB)"},
  {"vcksm","Vector Checksum"},
  {"ny","AND (32)"},
  {"alcgr","Add Logical with Carry (64)"},
  {"vstl","Vector Store With Length"},
  {"vstm","Vector Store Multiple"},
  {"chrl","Compare Halfword Relative Long (3216)"},
  {"rrbe","Reset Reference Bit Extended"},
  {"nr","AND (32)"},
  {"lcbb","Load Count to Block Boundary"},
  {"dlgr","Divide Logical (64128)"},
  {"rll","Rotate Left Single Logical (32)"},
  {"vmle","Vector Multiply Logical Even"},
  {"vupl","Vector Unpack Low"},
  {"exrl","Execute Relative Long"},
  {"cebr","Compare (SB)"},
  {"vavg","Vector Average"},
  {"cuxtr","Convert to Unsigned Packed (128ED)"},
  {"rrbm","Reset Reference Bits Multiple"},
  {"lasp","Load Address Space Parameters"},
  {"vmlh","Vector Multiply Logical High"},
  {"vuph","Vector Unpack High"},
  {"cgdbr","Convert to Fixed (64LB)"},
  {"oi","OR Immediate"},
  {"vmlo","Vector Multiply Logical Odd"},
  {"lcdfr","Load Complement (L)"},
  {"kdb","Compare and Signal (LB)"},
  {"oc","OR (character)"},
  {"pgin","Page In"},
  {"lexbra","Load Rounded (SBEB)"},
  {"crdte","Compare and Replace DAT Table Entry"},
  {"og","OR (64)"},
  {"cdftr","Convert from Fixed (LD32)"},
  {"oy","OR (32)"},
  {"sgfr","Subtract (6432)"},
  {"cgrt","Compare and Trap (64)"},
  {"bras","Branch Relative and Save"},
  {"or","OR (32)"},
  {"cgrb","Compare and Branch (64)"},
  {"ltdr","Load and Test (LH)"},
  {"brc","Branch Relative on Condition"},
  {"fidbr","Load FP Integer (LB)"},
  {"tp","Test Decimal"},
  {"thdr","Convert BFP to HFP (LHLB)"},
  {"ts","Test and Set"},
  {"tr","Translate"},
  {"ldebr","Load Lengthened (LBSB)"},
  {"clgdbr","Convert to Logical (64LB)"},
  {"cgrj","Compare and Branch Relative (64)"},
  {"algfi","Add Logical Immediate (6432)"},
  {"lurag","Load Using Real Address (64)"},
  {"svc","Supervisor Call"},
  {"stfl","Store Facility List"},
  {"larl","Load Address Relative Long"},
  {"sturg","Store Using Real Address (64)"},
  {"cgrl","Compare Relative Long (64)"},
  {"stfh","Store High (32)"},
  {"stura","Store Using Real Address (32)"},
  {"lhi","Load Halfword Immediate (3216)"},
  {"lhh","Load Halfword High (3216)"},
  {"vpopct","Vector Population Count"},
  {"kdtr","Compare and Signal (LD)"},
  {"tb","Test Block"},
  {"lghi","Load Halfword Immediate (6416)"},
  {"dsg","Divide Single (64)"},
  {"cmpsc","Compression Call"},
  {"lhr","Load Halfword (3216)"},
  {"ngr","AND (64)"},
  {"flogr","Find Leftmost One"},
  {"lghr","Load Halfword (6416)"},
  {"bsg","Branch in Subspace Group"},
  {"tm","Test under Mask"},
  {"bsa","Branch and Set Authority"},
  {"lter","Load and Test (SH)"},
  {"sigp","Signal Processor"},
  {"kmctr","Cipher Message with Counter"},
  {"lhy","Load Halfword (3216)"},
  {"kmac","Compute Message Authentication Code"},
  {"sdbr","Subtract (LB)"},
  {"bsm","Branch and Set Mode"},
  {"algfr","Add Logical (6432)"},
  {"rrdtr","Reround (LD)"},
  {"lrvh","Load Reversed (16)"},
  {"pcc","Perform Cryptographic Computation"},
  {"vesrav","Vector Element Shift Right Arithmetic"},
  {"verllv","Vector Element Rotate Left Logical"},
  {"lrvg","Load Reversed (64)"},
  {"rrxtr","Reround (ED)"},
  {"lcdr","Load Complement (LH)"},
  {"llihf","Load Logical Immediate (high)"},
  {"vfee","Vector Find Element Equal"},
  {"stam","Store Access Multiple"},
  {"mfy","Multiply (6432)"},
  {"cdfbra","Convert from Fixed (LB32)"},
  {"troo","Translate One to One"},
  {"pckmo","Perform Crypto. Key Mgmt. Operations"},
  {"stap","Store CPU Address"},
  {"llihl","Load Logical Immediate (high low)"},
  {"sam64","Set Addressing Mode (64)"},
  {"lfhat","Load and Trap (32H32)"},
  {"llihh","Load Logical Immediate (high high)"},
  {"csch","Clear Subchannel"},
  {"lrvr","Load Reversed (32)"},
  {"mee","Multiply (SH)"},
  {"ork","OR (32)"},
  {"cfebra","Convert to Fixed (32SB)"},
  {"ark","Add (32)"},
  {"risblg","Rotate then Insert Selected Bits Low 2)"},
  {"trot","Translate One to Two"},
  {"ldxbr","Load Rounded (LBEB)"},
  {"ldgr","Load FPR from GR (L64)"},
  {"cpsdr","Copy Sign (L)"},
  {"cdlgtr","Convert from Logical (LD64)"},
  {"lcgr","Load Complement (64)"},
  {"maebr","Multiply and Add (SB)"},
  {"adtr","Add (LD)"},
  {"mer","Multiply (LHSH)"},
  {"mvcp","Move to Primary"},
  {"mvcs","Move to Secondary"},
  {"cpya","Copy Access"},
  {"msta","Modify Stacked State"},
  {"lnr","Load Negative (32)"},
  {"mdtra","Multiply (LD)"},
  {"locgr","Load on Condition (64)"},
  {"mvcl","Move Long"},
  {"axtr","Add (ED)"},
  {"bxle","Branch on Index Low or Equal (32)"},
  {"mde","Multiply (LHSH)"},
  {"mvck","Move with Key"},
  {"km","Cipher Message"},
  {"tmy","Test under Mask"},
  {"cefr","Convert from Fixed (SH32)"},
  {"mdb","Multiply (LB)"},
  {"ectg","Extract CPU Time"},
  {"lcdbr","Load Complement (LB)"},
  {"popcnt","Population Count"},
  {"agrk","Add (64)"},
  {"chhsi","Compare Halfword Immediate (1616)"},
  {"vmale","Vector Multiply and Add Logical Even"},
  {"loc","Load on Condition (32)"},
  {"lpgr","Load Positive (64)"},
  {"csxtr","Convert to Signed Packed (128ED)"},
  {"vfce","Vector FP Compare Equal"},
  {"tml","Test under Mask Low"},
  {"vsl","Vector Shift Left"},
  {
# 1152 "project/radare2/libr/asm/d/s390.c" 3 4
  ((void *)0)
# 1152 "project/radare2/libr/asm/d/s390.c"
      , 
# 1152 "project/radare2/libr/asm/d/s390.c" 3 4
        ((void *)0)
# 1152 "project/radare2/libr/asm/d/s390.c"
            }
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_s390_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_s390_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return 
# 1167 "project/radare2/libr/asm/d/s390.c" 3 4
        ((void *)0)
# 1167 "project/radare2/libr/asm/d/s390.c"
            ;
}

const unsigned int gperf_s390_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_s390 = {
  .name = "s390",
  .get = &gperf_s390_get,
  .hash = &gperf_s390_hash,
  .foreach = &gperf_s390_foreach
};
