# 0 "project/ish/emu/decode.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/emu/decode.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 1






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 2 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4


# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 1 3 4
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
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4





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
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 1 3 4
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
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 1 3 4
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
 __uint16_t _data
 )
{
 return (__uint16_t)((_data << 8) | (_data >> 8));
}

static inline
__uint32_t
_OSSwapInt32(
 __uint32_t _data
 )
{



 __asm__ ("bswap   %0" : "+r" (_data));
 return _data;

}
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
 __uint64_t _data
 )
{
 __asm__ ("bswap   %0" : "+r" (_data));
 return _data;
}
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 2 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 3 4
typedef unsigned char u_char;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 3 4
typedef unsigned short u_short;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 3 4
typedef unsigned int u_int;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 3 4
typedef char * caddr_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t daddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef u_int32_t fixpt_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 113 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t segsz_t;
typedef int32_t swblk_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 167 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 2 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 3 4

typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int) ;


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_check_fd_set(int _a, const void *_b)
{




 if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {



  return __darwin_check_fd_set_overflow(_a, _b, 0);

 } else {
  return 1;
 }



}


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  return _p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8))));
 }

 return 0;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (sizeof(__int32_t) * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (sizeof(__int32_t) * 8)))));
 }
}
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 201 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 215 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 222 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 234 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdnoreturn.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 32 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 67 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 2 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
# 84 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h"

# 84 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h"
static inline void __use(int dummy __attribute__((unused)), ...) {}
# 106 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h"
typedef int64_t sqword_t;
typedef uint64_t qword_t;
typedef uint32_t dword_t;
typedef int32_t sdword_t;
typedef uint16_t word_t;
typedef uint8_t byte_t;

typedef dword_t addr_t;
typedef dword_t uint_t;
typedef sdword_t int_t;

typedef sdword_t pid_t_;
typedef dword_t uid_t_;
typedef word_t mode_t_;
typedef sqword_t off_t_;
typedef dword_t time_t_;
typedef dword_t clock_t_;
# 2 "project/ish/emu/decode.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 1



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4

# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/mmu.h" 1







# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/mmu.h"
typedef dword_t page_t;
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/mmu.h"
typedef dword_t pages_t;




struct mmu {
    struct mmu_ops *ops;
    struct jit *jit;
    uint64_t changes;
};





struct mmu_ops {

    void *(*translate)(struct mmu *mmu, addr_t addr, int type);
};

static inline void *mmu_translate(struct mmu *mmu, addr_t addr, int type) {
    return mmu->ops->translate(mmu, addr, type);
}
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 1





typedef struct {
    uint64_t signif;
    union {
        uint16_t signExp;
        struct {
            unsigned exp:15;
            unsigned sign:1;
        };
    };
} float80;

float80 f80_from_int(int64_t i);
int64_t f80_to_int(float80 f);
float80 f80_from_double(double d);
double f80_to_double(float80 f);
float80 f80_round(float80 f);


# 23 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 23 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_isnan(float80 f);

# 24 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_isinf(float80 f);

# 25 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 25 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_iszero(float80 f);

# 26 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_isdenormal(float80 f);

# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_is_supported(float80 f);

float80 f80_add(float80 a, float80 b);
float80 f80_sub(float80 a, float80 b);
float80 f80_mul(float80 a, float80 b);
float80 f80_div(float80 a, float80 b);
float80 f80_mod(float80 a, float80 b);
float80 f80_rem(float80 a, float80 b);


# 36 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_lt(float80 a, float80 b);

# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_eq(float80 a, float80 b);

# 38 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h" 3 4
_Bool 
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/float80.h"
    f80_uncomparable(float80 a, float80 b);

float80 f80_neg(float80 f);
float80 f80_abs(float80 f);

float80 f80_log2(float80 x);
float80 f80_sqrt(float80 x);

float80 f80_scale(float80 x, int scale);


void f80_xtract(float80 f, int *exp, float80 *signif);

enum f80_rounding_mode {
    round_to_nearest = 0,
    round_down = 1,
    round_up = 2,
    round_chop = 3,
};
extern __thread enum f80_rounding_mode f80_rounding_mode;
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 2

struct cpu_state;
struct tlb;
int cpu_run_to_interrupt(struct cpu_state *cpu, struct tlb *tlb);

union mm_reg {
    qword_t qw;
    dword_t dw[2];
};
union xmm_reg {
    unsigned __int128 u128;
    qword_t qw[2];
    uint32_t u32[4];
    uint16_t u16[8];
    uint8_t u8[16];
    float f32[4];
    double f64[2];
};

# 26 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (sizeof(union xmm_reg) == 16, "xmm_reg size");

# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (sizeof(union mm_reg) == 8, "mm_reg size");

struct cpu_state {
    struct mmu *mmu;
    long cycle;
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
    union {
        struct {
            union { dword_t eax; word_t ax; struct { byte_t al; byte_t ah; }; };
            union { dword_t ecx; word_t cx; struct { byte_t cl; byte_t ch; }; };
            union { dword_t edx; word_t dx; struct { byte_t dl; byte_t dh; }; };
            union { dword_t ebx; word_t bx; struct { byte_t bl; byte_t bh; }; };
            union { dword_t esp; word_t sp; };
            union { dword_t ebp; word_t bp; };
            union { dword_t esi; word_t si; };
            union { dword_t edi; word_t di; };
        };
        dword_t regs[8];
    };



    dword_t eip;


    union {
        dword_t eflags;
        struct {
            unsigned int cf_bit:1;
            unsigned int pad1_1:1;
            unsigned int pf:1;
            unsigned int pad2_0:1;
            unsigned int af:1;
            unsigned int pad3_0:1;
            unsigned int zf:1;
            unsigned int sf:1;
            unsigned int tf:1;
            unsigned int if_:1;
            unsigned int df:1;
            unsigned int of_bit:1;
            unsigned int iopl:2;
        };






    };

    dword_t df_offset;

    byte_t cf;
    byte_t of;


    dword_t res, op1, op2;
    union {
        struct {
            unsigned int pf_res:1;
            unsigned int zf_res:1;
            unsigned int sf_res:1;
            unsigned int af_ops:1;
        };





        byte_t flags_res;
    };

    union mm_reg mm[8];
    union xmm_reg xmm[8];


    float80 fp[8];
    union {
        word_t fsw;
        struct {
            unsigned int ie:1;
            unsigned int de:1;
            unsigned int ze:1;
            unsigned int oe:1;
            unsigned int ue:1;
            unsigned int pe:1;
            unsigned int stf:1;
            unsigned int es:1;
            unsigned int c0:1;
            unsigned int c1:1;
            unsigned int c2:1;
            unsigned top:3;
            unsigned int c3:1;
            unsigned int b:1;
        };
    };
    union {
        word_t fcw;
        struct {
            unsigned int im:1;
            unsigned int dm:1;
            unsigned int zm:1;
            unsigned int om:1;
            unsigned int um:1;
            unsigned int pm:1;
            unsigned int pad4:2;
            unsigned int pc:2;
            unsigned int rc:2;
            unsigned int y:1;
        };
    };


    word_t gs;
    addr_t tls_ptr;


    addr_t segfault_addr;
    
# 162 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
   _Bool 
# 162 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
        segfault_was_write;

    dword_t trapno;
};




# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             eax
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[0]
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             ecx
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[1]
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 170 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             edx
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[2]
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             ebx
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[3]
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             esp
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[4]
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 173 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             ebp
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[5]
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 174 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             esi
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[6]
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 175 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             __builtin_offsetof (
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             struct cpu_state
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             , 
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
             edi
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
             ) 
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                             == 
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                __builtin_offsetof (
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                struct cpu_state
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                , 
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                regs[7]
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
                                )
# 176 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
                                                   , "register order");

# 177 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 3 4
_Static_assert
# 177 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
            (sizeof(struct cpu_state) < 0xffff, "cpu struct is too big for vector gadgets");
# 187 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h"
static inline void collapse_flags(struct cpu_state *cpu) {
    cpu->zf = (cpu->zf_res ? cpu->res == 0 : cpu->zf);
    cpu->sf = (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf);
    cpu->pf = (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf);
    cpu->zf_res = cpu->sf_res = cpu->pf_res = 0;
    cpu->of_bit = cpu->of;
    cpu->cf_bit = cpu->cf;
    cpu->af = (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af);
    cpu->af_ops = 0;
    cpu->pad1_1 = 1;
    cpu->pad2_0 = cpu->pad3_0 = 0;
    cpu->if_ = 1;
}

static inline void expand_flags(struct cpu_state *cpu) {
    cpu->of = cpu->of_bit;
    cpu->cf = cpu->cf_bit;
    cpu->zf_res = cpu->sf_res = cpu->pf_res = cpu->af_ops = 0;
}

enum reg32 {
    reg_eax = 0, reg_ecx, reg_edx, reg_ebx, reg_esp, reg_ebp, reg_esi, reg_edi, reg_count,
    reg_none = reg_count,
};

static inline const char *reg32_name(enum reg32 reg) {
    switch (reg) {
        case reg_eax: return "eax";
        case reg_ecx: return "ecx";
        case reg_edx: return "edx";
        case reg_ebx: return "ebx";
        case reg_esp: return "esp";
        case reg_ebp: return "ebp";
        case reg_esi: return "esi";
        case reg_edi: return "edi";
        default: return "?";
    }
}
# 3 "project/ish/emu/decode.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 1



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h" 1


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4

# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 78 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
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

# 340 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));

# 365 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

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
# 4 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 1 3 4
# 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 150 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 213 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_ymm_reg
{
 char __ymm_reg[32];
};
# 245 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_zmm_reg
{
 char __zmm_reg[64];
};
# 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_opmask_reg
{
 char __opmask_reg[8];
};
# 281 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};


struct __darwin_i386_avx512_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_opmask_reg __fpu_k0;
 struct __darwin_opmask_reg __fpu_k1;
 struct __darwin_opmask_reg __fpu_k2;
 struct __darwin_opmask_reg __fpu_k3;
 struct __darwin_opmask_reg __fpu_k4;
 struct __darwin_opmask_reg __fpu_k5;
 struct __darwin_opmask_reg __fpu_k6;
 struct __darwin_opmask_reg __fpu_k7;
 struct __darwin_ymm_reg __fpu_zmmh0;
 struct __darwin_ymm_reg __fpu_zmmh1;
 struct __darwin_ymm_reg __fpu_zmmh2;
 struct __darwin_ymm_reg __fpu_zmmh3;
 struct __darwin_ymm_reg __fpu_zmmh4;
 struct __darwin_ymm_reg __fpu_zmmh5;
 struct __darwin_ymm_reg __fpu_zmmh6;
 struct __darwin_ymm_reg __fpu_zmmh7;
};
# 575 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 595 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};


struct __x86_instruction_state
{
        int __insn_stream_valid_bytes;
        int __insn_offset;
 int __out_of_synch;





        __uint8_t __insn_bytes[(2448 - 64 - 4)];

 __uint8_t __insn_cacheline[64];
};


struct __last_branch_record
{
 __uint64_t __from_ip;
 __uint64_t __to_ip;
 __uint32_t __mispredict : 1,
   __tsx_abort : 1,
   __in_tsx : 1,
   __cycle_count: 16,
   __reserved : 13;
};


struct __last_branch_state
{
        int __lbr_count;
 __uint32_t __lbr_supported_tsx : 1,
     __lbr_supported_cycle_count : 1,
     __reserved : 30;

 struct __last_branch_record __lbrs[32];
};
# 702 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __x86_pagein_state
{
 int __pagein_error;
};







struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 771 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_full_state64
{
 struct __darwin_x86_thread_state64 __ss64;
 __uint64_t __ds;
 __uint64_t __es;
 __uint64_t __ss;
 __uint64_t __gsbase;
};
# 794 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};


struct __darwin_x86_avx512_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
 struct __darwin_opmask_reg __fpu_k0;
 struct __darwin_opmask_reg __fpu_k1;
 struct __darwin_opmask_reg __fpu_k2;
 struct __darwin_opmask_reg __fpu_k3;
 struct __darwin_opmask_reg __fpu_k4;
 struct __darwin_opmask_reg __fpu_k5;
 struct __darwin_opmask_reg __fpu_k6;
 struct __darwin_opmask_reg __fpu_k7;
 struct __darwin_ymm_reg __fpu_zmmh0;
 struct __darwin_ymm_reg __fpu_zmmh1;
 struct __darwin_ymm_reg __fpu_zmmh2;
 struct __darwin_ymm_reg __fpu_zmmh3;
 struct __darwin_ymm_reg __fpu_zmmh4;
 struct __darwin_ymm_reg __fpu_zmmh5;
 struct __darwin_ymm_reg __fpu_zmmh6;
 struct __darwin_ymm_reg __fpu_zmmh7;
 struct __darwin_ymm_reg __fpu_zmmh8;
 struct __darwin_ymm_reg __fpu_zmmh9;
 struct __darwin_ymm_reg __fpu_zmmh10;
 struct __darwin_ymm_reg __fpu_zmmh11;
 struct __darwin_ymm_reg __fpu_zmmh12;
 struct __darwin_ymm_reg __fpu_zmmh13;
 struct __darwin_ymm_reg __fpu_zmmh14;
 struct __darwin_ymm_reg __fpu_zmmh15;
 struct __darwin_zmm_reg __fpu_zmm16;
 struct __darwin_zmm_reg __fpu_zmm17;
 struct __darwin_zmm_reg __fpu_zmm18;
 struct __darwin_zmm_reg __fpu_zmm19;
 struct __darwin_zmm_reg __fpu_zmm20;
 struct __darwin_zmm_reg __fpu_zmm21;
 struct __darwin_zmm_reg __fpu_zmm22;
 struct __darwin_zmm_reg __fpu_zmm23;
 struct __darwin_zmm_reg __fpu_zmm24;
 struct __darwin_zmm_reg __fpu_zmm25;
 struct __darwin_zmm_reg __fpu_zmm26;
 struct __darwin_zmm_reg __fpu_zmm27;
 struct __darwin_zmm_reg __fpu_zmm28;
 struct __darwin_zmm_reg __fpu_zmm29;
 struct __darwin_zmm_reg __fpu_zmm30;
 struct __darwin_zmm_reg __fpu_zmm31;
};
# 1252 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 1272 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 1300 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};



struct __darwin_mcontext_avx512_32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx512_state __fs;
};
# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};


struct __darwin_mcontext_avx64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};



struct __darwin_mcontext_avx512_64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};


struct __darwin_mcontext_avx512_64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 2 3 4



struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4



union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4

    void(*signal(int, void (*)(int)))(int);

# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

typedef struct rusage_info_v5 rusage_info_current;
# 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
      w_Coredump:1,
      w_Retcode:8,
      w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
      w_Stopsig:8,
      w_Filler:16;






 } w_S;
};
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 3 4

void *alloca(size_t);

# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 3 4


void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void free(void *);
void *realloc(void *__ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1)));




void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;

int posix_memalign(void **__memptr, size_t __alignment, size_t __size) ;


# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (* )(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* __compar)(const void *, const void *));

div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));

char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);


int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);

void qsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));
int rand(void) ;

void srand(unsigned) ;
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4



int system(const char *) __asm("_" "system" );



size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) ;
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) ;
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) ;
long nrand48(unsigned short[3]) ;
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) ;


int putenv(char *) __asm("_" "putenv" );
long random(void) ;
int rand_r(unsigned *) ;

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );
# 264 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
   
   
   
    ;
void arc4random_buf(void * __buf, size_t __nbytes) ;
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) ;







char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") ;
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
# 309 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





int mergesort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





void psort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *))
     ;





void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *))
     ;





void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
 ;
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *__ptr, size_t __size) __attribute__((alloc_size(2)));
long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
 ;

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;








# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h" 2


# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h"
void ish_printk(const char *msg, ...);
void ish_vprintk(const char *msg, va_list args);
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h"
extern void (*die_handler)(const char *msg);
_Noreturn void die(const char *msg, ...);
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 2


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4


# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
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

# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4

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
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 2




# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
struct tlb_entry {
    page_t page;
    page_t page_if_writable;
    uintptr_t data_minus_addr;
};


struct tlb {
    struct mmu *mmu;
    page_t dirty_page;
    unsigned mem_changes;


    addr_t segfault_addr;
    struct tlb_entry entries[(1 << 10)];
};




void tlb_refresh(struct tlb *tlb, struct mmu *mmu);
void tlb_free(struct tlb *tlb);
void tlb_flush(struct tlb *tlb);
void *tlb_handle_miss(struct tlb *tlb, addr_t addr, int type);

inline __attribute__((always_inline)) __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) void *__tlb_read_ptr(struct tlb *tlb, addr_t addr) {
    struct tlb_entry entry = tlb->entries[(((addr >> 12) & ((1 << 10) - 1)) ^ (addr >> (12 + 10)))];
    if (entry.page == (addr & 0xfffff000)) {
        void *address = (void *) (entry.data_minus_addr + addr);
        
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
       (__builtin_expect(!(
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
       address != 
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
       ((void *)0)), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h", 37, 
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
       "address != NULL"
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
       ) : (void)0)
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                             ;
        return address;
    }
    return tlb_handle_miss(tlb, addr, 0);
}

# 42 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
_Bool 
# 42 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
    __tlb_read_cross_page(struct tlb *tlb, addr_t addr, char *out, unsigned size);
inline __attribute__((always_inline)) __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) 
# 43 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
                           _Bool 
# 43 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                                tlb_read(struct tlb *tlb, addr_t addr, void *out, unsigned size) {
    if (((addr) & ((1 << 12) - 1)) > (1 << 12) - size)
        return __tlb_read_cross_page(tlb, addr, out, size);
    void *ptr = __tlb_read_ptr(tlb, addr);
    if (ptr == 
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
              ((void *)0)
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                  )
        return 
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
              0
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                   ;
    
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   __builtin___memcpy_chk (
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
   out
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   , 
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
   ptr, size
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   , __builtin_object_size (
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
   out
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   , 0))
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                         ;
    return 
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
          1
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
              ;
}

inline __attribute__((always_inline)) __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) void *__tlb_write_ptr(struct tlb *tlb, addr_t addr) {
    struct tlb_entry entry = tlb->entries[(((addr >> 12) & ((1 << 10) - 1)) ^ (addr >> (12 + 10)))];
    if (entry.page_if_writable == (addr & 0xfffff000)) {
        tlb->dirty_page = (addr & 0xfffff000);
        void *address = (void *) (entry.data_minus_addr + addr);
        
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
       (__builtin_expect(!(
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
       address != 
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
       ((void *)0)), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h", 58, 
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
       "address != NULL"
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
       ) : (void)0)
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                             ;
        return address;
    }
    return tlb_handle_miss(tlb, addr, 1);
}

# 63 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
_Bool 
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
    __tlb_write_cross_page(struct tlb *tlb, addr_t addr, const char *value, unsigned size);
inline __attribute__((always_inline)) __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) 
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
                           _Bool 
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                                tlb_write(struct tlb *tlb, addr_t addr, const void *value, unsigned size) {
    if (((addr) & ((1 << 12) - 1)) > (1 << 12) - size)
        return __tlb_write_cross_page(tlb, addr, value, size);
    void *ptr = __tlb_write_ptr(tlb, addr);
    if (ptr == 
# 68 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
              ((void *)0)
# 68 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                  )
        return 
# 69 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
              0
# 69 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                   ;
    
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   __builtin___memcpy_chk (
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
   ptr
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   , 
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
   value, size
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   , __builtin_object_size (
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
   ptr
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
   , 0))
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
                           ;
    return 
# 71 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h" 3 4
          1
# 71 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/tlb.h"
              ;
}
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 2




struct modrm {
    union {
        enum reg32 reg;
        unsigned opcode;
    };
    enum {
        modrm_reg, modrm_mem, modrm_mem_si
    } type;
    union {
        enum reg32 base;
        unsigned rm_opcode;
    };
    int32_t offset;
    enum reg32 index;
    enum {
        times_1 = 0,
        times_2 = 1,
        times_4 = 2,
    } shift;
};

static const unsigned rm_sib = reg_esp;
static const unsigned rm_none = reg_esp;
static const unsigned rm_disp32 = reg_ebp;





static inline 
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 3 4
             _Bool 
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h"
                  modrm_decode32(addr_t *ip, struct tlb *tlb, struct modrm *modrm) {





    byte_t modrm_byte;
    *ip += sizeof(modrm_byte); if (!tlb_read(tlb, *ip - sizeof(modrm_byte), &(modrm_byte), sizeof(modrm_byte))) return 
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 3 4
   0
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h"
                   ;

    enum {
        mode_disp0,
        mode_disp8,
        mode_disp32,
        mode_reg,
    } mode = ((modrm_byte & 0b11000000) >> 6);
    modrm->type = modrm_mem;
    modrm->reg = ((modrm_byte & 0b00111000) >> 3);
    modrm->rm_opcode = ((modrm_byte & 0b00000111) >> 0);
    if (mode == mode_reg) {
        modrm->type = modrm_reg;
    } else if (modrm->rm_opcode == rm_disp32 && mode == mode_disp0) {
        modrm->base = reg_none;
        mode = mode_disp32;
    } else if (modrm->rm_opcode == rm_sib && mode != mode_reg) {
        byte_t sib_byte;
        *ip += sizeof(sib_byte); if (!tlb_read(tlb, *ip - sizeof(sib_byte), &(sib_byte), sizeof(sib_byte))) return 
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 3 4
       0
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h"
                     ;
        modrm->base = ((sib_byte & 0b00000111) >> 0);

        if (modrm->rm_opcode == rm_disp32) {
            if (mode == mode_disp0) {
                modrm->base = reg_none;
                mode = mode_disp32;
            } else {
                modrm->base = reg_ebp;
            }
        }
        modrm->index = ((sib_byte & 0b00111000) >> 3);
        modrm->shift = ((sib_byte & 0b11000000) >> 6);
        if (modrm->index != rm_none)
            modrm->type = modrm_mem_si;
    }

    if (mode == mode_disp0) {
        modrm->offset = 0;
    } else if (mode == mode_disp8) {
        int8_t offset;
        *ip += sizeof(offset); if (!tlb_read(tlb, *ip - sizeof(offset), &(offset), sizeof(offset))) return 
# 87 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 3 4
       0
# 87 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h"
                   ;
        modrm->offset = offset;
    } else if (mode == mode_disp32) {
        int32_t offset;
        *ip += sizeof(offset); if (!tlb_read(tlb, *ip - sizeof(offset), &(offset), sizeof(offset))) return 
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 3 4
       0
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h"
                   ;
        modrm->offset = offset;
    }


    __use(0, reg32_name(modrm->reg), modrm->opcode);
    __use(0, reg32_name(modrm->base));
    if (modrm->type != modrm_reg)
        __use(0, modrm->offset < 0 ? "-" : "", modrm->offset);
    if (modrm->type == modrm_mem_si)
        __use(0, reg32_name(modrm->index), modrm->shift);

    return 
# 103 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h" 3 4
          1
# 103 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/modrm.h"
              ;
}
# 4 "project/ish/emu/decode.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/interrupt.h" 1
# 5 "project/ish/emu/decode.h" 2
# 16 "project/ish/emu/decode.h"
extern int current_pid(void);



__attribute__((no_sanitize("address", "thread", "undefined", "leak"))) DECODER_RET DECODER_NAMEOP_SIZE(DECODER_ARGS) {
    DECLARE_LOCALS;

    byte_t insn;
    uint64_t imm = 0;
    struct modrm modrm;
# 35 "project/ish/emu/decode.h"
restart:
    __use(0, current_pid(), state->ip);
    _READIMM(insn, 8); __use(0, insn);
    switch (insn) {
# 53 "project/ish/emu/decode.h"
        case 0x00 +0x0: __use(0); READMODRM; ADD(modrm_reg, modrm_val,8); break; case 0x00 +0x1: __use(0); READMODRM; ADD(modrm_reg, modrm_val,OP_SIZE); break; case 0x00 +0x2: __use(0); READMODRM; ADD(modrm_val, modrm_reg,8); break; case 0x00 +0x3: __use(0); READMODRM; ADD(modrm_val, modrm_reg,OP_SIZE); break; case 0x00 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; ADD(imm, reg_a,8); break; case 0x00 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); ADD(imm, reg_a,OP_SIZE); break;
        case 0x08 +0x0: __use(0); READMODRM; OR(modrm_reg, modrm_val,8); break; case 0x08 +0x1: __use(0); READMODRM; OR(modrm_reg, modrm_val,OP_SIZE); break; case 0x08 +0x2: __use(0); READMODRM; OR(modrm_val, modrm_reg,8); break; case 0x08 +0x3: __use(0); READMODRM; OR(modrm_val, modrm_reg,OP_SIZE); break; case 0x08 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; OR(imm, reg_a,8); break; case 0x08 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); OR(imm, reg_a,OP_SIZE); break;

        case 0x0f:

            _READIMM(insn, 8); __use(0, insn);
            switch (insn) {
                case 0x18 ... 0x1f: __use(0); READMODRM; break;

                case 0x28: __use(0);
                           READMODRM; VMOV(xmm_modrm_val, xmm_modrm_reg,128); break;
                case 0x29: __use(0);
                           READMODRM; VMOV(xmm_modrm_reg, xmm_modrm_val,128); break;

                case 0x31: __use(0);
                           RDTSC; break;

                case 0x40: __use(0);
                           READMODRM; CMOV(O, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x41: __use(0);
                           READMODRM; CMOVN(O, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x42: __use(0);
                           READMODRM; CMOV(B, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x43: __use(0);
                           READMODRM; CMOVN(B, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x44: __use(0);
                           READMODRM; CMOV(E, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x45: __use(0);
                           READMODRM; CMOVN(E, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x46: __use(0);
                           READMODRM; CMOV(BE, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x47: __use(0);
                           READMODRM; CMOVN(BE, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x48: __use(0);
                           READMODRM; CMOV(S, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x49: __use(0);
                           READMODRM; CMOVN(S, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x4a: __use(0);
                           READMODRM; CMOV(P, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x4b: __use(0);
                           READMODRM; CMOVN(P, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x4c: __use(0);
                           READMODRM; CMOV(L, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x4d: __use(0);
                           READMODRM; CMOVN(L, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x4e: __use(0);
                           READMODRM; CMOV(LE, modrm_val, modrm_reg,OP_SIZE); break;
                case 0x4f: __use(0);
                           READMODRM; CMOVN(LE, modrm_val, modrm_reg,OP_SIZE); break;

                case 0x77: __use(0); break;

                case 0x80: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(O, imm); break;
                case 0x81: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(O, imm); break;
                case 0x82: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(B, imm); break;
                case 0x83: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(B, imm); break;
                case 0x84: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(E, imm); break;
                case 0x85: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(E, imm); break;
                case 0x86: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(BE, imm); break;
                case 0x87: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(BE, imm); break;
                case 0x88: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(S, imm); break;
                case 0x89: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(S, imm); break;
                case 0x8a: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(P, imm); break;
                case 0x8b: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(P, imm); break;
                case 0x8c: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(L, imm); break;
                case 0x8d: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(L, imm); break;
                case 0x8e: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); J_REL(LE, imm); break;
                case 0x8f: __use(0);
                           _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JN_REL(LE, imm); break;

                case 0x90: __use(0);
                           READMODRM; SET(O, modrm_val); break;
                case 0x91: __use(0);
                           READMODRM; SETN(O, modrm_val); break;
                case 0x92: __use(0);
                           READMODRM; SET(B, modrm_val); break;
                case 0x93: __use(0);
                           READMODRM; SETN(B, modrm_val); break;
                case 0x94: __use(0);
                           READMODRM; SET(E, modrm_val); break;
                case 0x95: __use(0);
                           READMODRM; SETN(E, modrm_val); break;
                case 0x96: __use(0);
                           READMODRM; SET(BE, modrm_val); break;
                case 0x97: __use(0);
                           READMODRM; SETN(BE, modrm_val); break;
                case 0x98: __use(0);
                           READMODRM; SET(S, modrm_val); break;
                case 0x99: __use(0);
                           READMODRM; SETN(S, modrm_val); break;
                case 0x9a: __use(0);
                           READMODRM; SET(P, modrm_val); break;
                case 0x9b: __use(0);
                           READMODRM; SETN(P, modrm_val); break;
                case 0x9c: __use(0);
                           READMODRM; SET(L, modrm_val); break;
                case 0x9d: __use(0);
                           READMODRM; SETN(L, modrm_val); break;
                case 0x9e: __use(0);
                           READMODRM; SET(LE, modrm_val); break;
                case 0x9f: __use(0);
                           READMODRM; SETN(LE, modrm_val); break;

                case 0xa2: __use(0); CPUID(); break;

                case 0xa3: __use(0);
                           READMODRM; BT(modrm_reg, modrm_val,OP_SIZE); break;

                case 0xa4: __use(0);
                           READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; SHLD(imm, modrm_reg, modrm_val,OP_SIZE); break;
                case 0xa5: __use(0);
                           READMODRM; SHLD(reg_c, modrm_reg, modrm_val,OP_SIZE); break;

                case 0xab: __use(0);
                           READMODRM; BTS(modrm_reg, modrm_val,OP_SIZE); break;

                case 0xac: __use(0);
                           READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; SHRD(imm, modrm_reg, modrm_val,OP_SIZE); break;
                case 0xad: __use(0);
                           READMODRM; SHRD(reg_c, modrm_reg, modrm_val,OP_SIZE); break;

                case 0xae: __use(0); READMODRM; break;

                case 0xaf: __use(0);
                           READMODRM; IMUL2(modrm_val, modrm_reg,OP_SIZE); break;

                case 0xb0: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; CMPXCHG(modrm_reg, modrm_val,8); break;
                case 0xb1: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; CMPXCHG(modrm_reg, modrm_val,OP_SIZE); break;

                case 0xb3: __use(0);
                           READMODRM; BTR(modrm_reg, modrm_val,OP_SIZE); break;

                case 0xb6: __use(0);
                           READMODRM; MOVZX(modrm_val, modrm_reg,8,OP_SIZE); break;
                case 0xb7: __use(0);
                           READMODRM; MOVZX(modrm_val, modrm_reg,16,OP_SIZE); break;
# 216 "project/ish/emu/decode.h"
                case 0xba: __use(0);
                           READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 4: __use(0); BT(imm, modrm_val,OP_SIZE); break; case 5: __use(0); BTS(imm, modrm_val,OP_SIZE); break; case 6: __use(0); BTR(imm, modrm_val,OP_SIZE); break; case 7: __use(0); BTC(imm, modrm_val,OP_SIZE); break; default: UNDEFINED; }; break;



                case 0xbb: __use(0);
                           READMODRM; BTC(modrm_reg, modrm_val,OP_SIZE); break;
                case 0xbc: __use(0);
                           READMODRM; BSF(modrm_val, modrm_reg,OP_SIZE); break;
                case 0xbd: __use(0);
                           READMODRM; BSR(modrm_val, modrm_reg,OP_SIZE); break;

                case 0xbe: __use(0);
                           READMODRM; MOVSX(modrm_val, modrm_reg,8,OP_SIZE); break;
                case 0xbf: __use(0);
                           READMODRM; MOVSX(modrm_val, modrm_reg,16,OP_SIZE); break;

                case 0xc0: __use(0);
                           READMODRM; XADD(modrm_reg, modrm_val,8); break;
                case 0xc1: __use(0);
                           READMODRM; XADD(modrm_reg, modrm_val,OP_SIZE); break;

                case 0xc7: READMODRM; if (modrm.type == modrm_reg) UNDEFINED; switch (modrm.opcode) {
                               case 1: __use(0);
                                       CMPXCHG8B(modrm_val,64); break;
                               default: UNDEFINED;
                           };
                           break;


                case 0xc8: __use(0);
                           BSWAP(reg_a); break;
                case 0xc9: __use(0);
                           BSWAP(reg_c); break;
                case 0xca: __use(0);
                           BSWAP(reg_d); break;
                case 0xcb: __use(0);
                           BSWAP(reg_b); break;
                case 0xcc: __use(0);
                           BSWAP(reg_sp); break;
                case 0xcd: __use(0);
                           BSWAP(reg_bp); break;
                case 0xce: __use(0);
                           BSWAP(reg_si); break;
                case 0xcf: __use(0);
                           BSWAP(reg_di); break;
# 355 "project/ish/emu/decode.h"
                case 0x10: __use(0);
                           READMODRM; VMOV(xmm_modrm_val, xmm_modrm_reg,128); break;
                case 0x11: __use(0);
                           READMODRM; VMOV(xmm_modrm_reg, xmm_modrm_val,128); break;

                case 0x2e: __use(0);
                           READMODRM; V_OP(single_ucomi, xmm_modrm_val, xmm_modrm_reg,32); break;
                case 0x2f: __use(0);
                           READMODRM; V_OP(single_ucomi, xmm_modrm_val, xmm_modrm_reg,32); break;

                case 0x54: __use(0);
                           READMODRM; V_OP(and, xmm_modrm_val, xmm_modrm_reg,128); break;
                case 0x55: __use(0);
                           READMODRM; V_OP(andn, xmm_modrm_val, xmm_modrm_reg,128); break;
                case 0x56: __use(0);
                           READMODRM; V_OP(or, xmm_modrm_val, xmm_modrm_reg,128); break;
                case 0x57: __use(0);
                           READMODRM; V_OP(xor, xmm_modrm_val, xmm_modrm_reg,128); break;

                case 0x62: __use(0);
                           READMODRM; V_OP(unpack_dq, mm_modrm_val, mm_modrm_reg,64); break;

                case 0x6e: __use(0);
                           READMODRM; VMOV(modrm_val, mm_modrm_reg,32); break;
                case 0x6f: __use(0);
                           READMODRM; VMOV(mm_modrm_val, mm_modrm_reg,64); break;

                case 0x73: READMODRM;
                           switch (modrm.opcode) {
                               case 2: __use(0);
                                          _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; V_OP(imm_shiftr_q, imm, mm_modrm_reg, 64); break;
                               case 6: __use(0);
                                          _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; V_OP(imm_shiftl_q, imm, mm_modrm_reg, 64); break;
                               default: UNDEFINED;
                           }
                           break;

                case 0x7e: __use(0);
                           READMODRM; VMOV(mm_modrm_reg, modrm_val,32); break;
                case 0x7f: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; VMOV(mm_modrm_reg, mm_modrm_val,64); break;

                case 0xc6: __use(0);
                           READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; V_OP_IMM(shuffle_d, xmm_modrm_val, xmm_modrm_reg,128); break;

                case 0xd4: __use(0);
                           READMODRM; V_OP(add_q, mm_modrm_val, mm_modrm_reg,64); break;
                case 0xdb: __use(0);
                           READMODRM; V_OP(and, mm_modrm_val, mm_modrm_reg,64); break;

                case 0xef: __use(0);
                           READMODRM; V_OP(xor, mm_modrm_val, mm_modrm_reg,64); break;

                case 0xf4: __use(0);
                           READMODRM; V_OP(mulu_dq, mm_modrm_val, mm_modrm_reg,64); break;


                default: __use(0);
                         UNDEFINED;
            }
            break;

        case 0x10 +0x0: __use(0); READMODRM; ADC(modrm_reg, modrm_val,8); break; case 0x10 +0x1: __use(0); READMODRM; ADC(modrm_reg, modrm_val,OP_SIZE); break; case 0x10 +0x2: __use(0); READMODRM; ADC(modrm_val, modrm_reg,8); break; case 0x10 +0x3: __use(0); READMODRM; ADC(modrm_val, modrm_reg,OP_SIZE); break; case 0x10 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; ADC(imm, reg_a,8); break; case 0x10 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); ADC(imm, reg_a,OP_SIZE); break;
        case 0x18 +0x0: __use(0); READMODRM; SBB(modrm_reg, modrm_val,8); break; case 0x18 +0x1: __use(0); READMODRM; SBB(modrm_reg, modrm_val,OP_SIZE); break; case 0x18 +0x2: __use(0); READMODRM; SBB(modrm_val, modrm_reg,8); break; case 0x18 +0x3: __use(0); READMODRM; SBB(modrm_val, modrm_reg,OP_SIZE); break; case 0x18 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; SBB(imm, reg_a,8); break; case 0x18 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); SBB(imm, reg_a,OP_SIZE); break;
        case 0x20 +0x0: __use(0); READMODRM; AND(modrm_reg, modrm_val,8); break; case 0x20 +0x1: __use(0); READMODRM; AND(modrm_reg, modrm_val,OP_SIZE); break; case 0x20 +0x2: __use(0); READMODRM; AND(modrm_val, modrm_reg,8); break; case 0x20 +0x3: __use(0); READMODRM; AND(modrm_val, modrm_reg,OP_SIZE); break; case 0x20 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; AND(imm, reg_a,8); break; case 0x20 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); AND(imm, reg_a,OP_SIZE); break;
        case 0x28 +0x0: __use(0); READMODRM; SUB(modrm_reg, modrm_val,8); break; case 0x28 +0x1: __use(0); READMODRM; SUB(modrm_reg, modrm_val,OP_SIZE); break; case 0x28 +0x2: __use(0); READMODRM; SUB(modrm_val, modrm_reg,8); break; case 0x28 +0x3: __use(0); READMODRM; SUB(modrm_val, modrm_reg,OP_SIZE); break; case 0x28 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; SUB(imm, reg_a,8); break; case 0x28 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); SUB(imm, reg_a,OP_SIZE); break;

        case 0x2e: __use(0); goto restart;

        case 0x30 +0x0: __use(0); READMODRM; XOR(modrm_reg, modrm_val,8); break; case 0x30 +0x1: __use(0); READMODRM; XOR(modrm_reg, modrm_val,OP_SIZE); break; case 0x30 +0x2: __use(0); READMODRM; XOR(modrm_val, modrm_reg,8); break; case 0x30 +0x3: __use(0); READMODRM; XOR(modrm_val, modrm_reg,OP_SIZE); break; case 0x30 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; XOR(imm, reg_a,8); break; case 0x30 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); XOR(imm, reg_a,OP_SIZE); break;
        case 0x38 +0x0: __use(0); READMODRM; CMP(modrm_reg, modrm_val,8); break; case 0x38 +0x1: __use(0); READMODRM; CMP(modrm_reg, modrm_val,OP_SIZE); break; case 0x38 +0x2: __use(0); READMODRM; CMP(modrm_val, modrm_reg,8); break; case 0x38 +0x3: __use(0); READMODRM; CMP(modrm_val, modrm_reg,OP_SIZE); break; case 0x38 +0x4: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; CMP(imm, reg_a,8); break; case 0x38 +0x5: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); CMP(imm, reg_a,OP_SIZE); break;

        case 0x3e: __use(0); goto restart;

        case 0x40: __use(0); INC(reg_a,OP_SIZE); break;
        case 0x41: __use(0); INC(reg_c,OP_SIZE); break;
        case 0x42: __use(0); INC(reg_d,OP_SIZE); break;
        case 0x43: __use(0); INC(reg_b,OP_SIZE); break;
        case 0x44: __use(0); INC(reg_sp,OP_SIZE); break;
        case 0x45: __use(0); INC(reg_bp,OP_SIZE); break;
        case 0x46: __use(0); INC(reg_si,OP_SIZE); break;
        case 0x47: __use(0); INC(reg_di,OP_SIZE); break;
        case 0x48: __use(0); DEC(reg_a,OP_SIZE); break;
        case 0x49: __use(0); DEC(reg_c,OP_SIZE); break;
        case 0x4a: __use(0); DEC(reg_d,OP_SIZE); break;
        case 0x4b: __use(0); DEC(reg_b,OP_SIZE); break;
        case 0x4c: __use(0); DEC(reg_sp,OP_SIZE); break;
        case 0x4d: __use(0); DEC(reg_bp,OP_SIZE); break;
        case 0x4e: __use(0); DEC(reg_si,OP_SIZE); break;
        case 0x4f: __use(0); DEC(reg_di,OP_SIZE); break;

        case 0x50: __use(0); PUSH(reg_a,OP_SIZE); break;
        case 0x51: __use(0); PUSH(reg_c,OP_SIZE); break;
        case 0x52: __use(0); PUSH(reg_d,OP_SIZE); break;
        case 0x53: __use(0); PUSH(reg_b,OP_SIZE); break;
        case 0x54: __use(0); PUSH(reg_sp,OP_SIZE); break;
        case 0x55: __use(0); PUSH(reg_bp,OP_SIZE); break;
        case 0x56: __use(0); PUSH(reg_si,OP_SIZE); break;
        case 0x57: __use(0); PUSH(reg_di,OP_SIZE); break;

        case 0x58: __use(0); POP(reg_a,OP_SIZE); break;
        case 0x59: __use(0); POP(reg_c,OP_SIZE); break;
        case 0x5a: __use(0); POP(reg_d,OP_SIZE); break;
        case 0x5b: __use(0); POP(reg_b,OP_SIZE); break;
        case 0x5c: __use(0); POP(reg_sp,OP_SIZE); break;
        case 0x5d: __use(0); POP(reg_bp,OP_SIZE); break;
        case 0x5e: __use(0); POP(reg_si,OP_SIZE); break;
        case 0x5f: __use(0); POP(reg_di,OP_SIZE); break;

        case 0x65: __use(0); SEG_GS(); goto restart;

        case 0x60: __use(0);
                   PUSH(reg_a,OP_SIZE); PUSH(reg_c,OP_SIZE);
                   PUSH(reg_d,OP_SIZE); PUSH(reg_b,OP_SIZE);
                   PUSH(reg_sp,OP_SIZE); PUSH(reg_bp,OP_SIZE);
                   PUSH(reg_si,OP_SIZE); PUSH(reg_di,OP_SIZE);
                   break;
        case 0x61: __use(0);
                   POP(reg_di,OP_SIZE); POP(reg_si,OP_SIZE);

                   POP(reg_bp,OP_SIZE); POP(reg_b,OP_SIZE);
                   POP(reg_b,OP_SIZE); POP(reg_d,OP_SIZE);
                   POP(reg_c,OP_SIZE); POP(reg_a,OP_SIZE);
                   break;

        case 0x66:




            __use(0);
            return DECODER_NAME32(DECODER_PASS_ARGS);


        case 0x67: __use(0); goto restart;

        case 0x68: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); PUSH(imm,OP_SIZE); break;
        case 0x69: __use(0);
                   READMODRM; _READIMM(imm, OP_SIZE); __use(0, (long long) imm); IMUL3(imm, modrm_val, modrm_reg,OP_SIZE); break;
        case 0x6a: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; PUSH(imm,OP_SIZE); break;
        case 0x6b: __use(0);
                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; IMUL3(imm, modrm_val, modrm_reg,OP_SIZE); break;

        case 0x70: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(O, imm); break;
        case 0x71: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(O, imm); break;
        case 0x72: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(B, imm); break;
        case 0x73: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(B, imm); break;
        case 0x74: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(E, imm); break;
        case 0x75: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(E, imm); break;
        case 0x76: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(BE, imm); break;
        case 0x77: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(BE, imm); break;
        case 0x78: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(S, imm); break;
        case 0x79: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(S, imm); break;
        case 0x7a: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(P, imm); break;
        case 0x7b: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(P, imm); break;
        case 0x7c: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(L, imm); break;
        case 0x7d: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(L, imm); break;
        case 0x7e: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; J_REL(LE, imm); break;
        case 0x7f: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JN_REL(LE, imm); break;
# 555 "project/ish/emu/decode.h"
        case 0x80: __use(0);
                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 0: __use(0); ADD(imm, modrm_val,8); break; case 1: __use(0); OR(imm, modrm_val,8); break; case 2: __use(0); ADC(imm, modrm_val,8); break; case 3: __use(0); SBB(imm, modrm_val,8); break; case 4: __use(0); AND(imm, modrm_val,8); break; case 5: __use(0); SUB(imm, modrm_val,8); break; case 6: __use(0); XOR(imm, modrm_val,8); break; case 7: __use(0); CMP(imm, modrm_val,8); break; default: __use(0); UNDEFINED; }; break;
        case 0x81: __use(0);
                   READMODRM; _READIMM(imm, OP_SIZE); __use(0, (long long) imm); switch (modrm.opcode) { case 0: __use(0); ADD(imm, modrm_val,OP_SIZE); break; case 1: __use(0); OR(imm, modrm_val,OP_SIZE); break; case 2: __use(0); ADC(imm, modrm_val,OP_SIZE); break; case 3: __use(0); SBB(imm, modrm_val,OP_SIZE); break; case 4: __use(0); AND(imm, modrm_val,OP_SIZE); break; case 5: __use(0); SUB(imm, modrm_val,OP_SIZE); break; case 6: __use(0); XOR(imm, modrm_val,OP_SIZE); break; case 7: __use(0); CMP(imm, modrm_val,OP_SIZE); break; default: __use(0); UNDEFINED; }; break;
        case 0x83: __use(0);
                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 0: __use(0); ADD(imm, modrm_val,OP_SIZE); break; case 1: __use(0); OR(imm, modrm_val,OP_SIZE); break; case 2: __use(0); ADC(imm, modrm_val,OP_SIZE); break; case 3: __use(0); SBB(imm, modrm_val,OP_SIZE); break; case 4: __use(0); AND(imm, modrm_val,OP_SIZE); break; case 5: __use(0); SUB(imm, modrm_val,OP_SIZE); break; case 6: __use(0); XOR(imm, modrm_val,OP_SIZE); break; case 7: __use(0); CMP(imm, modrm_val,OP_SIZE); break; default: __use(0); UNDEFINED; }; break;



        case 0x84: __use(0);
                   READMODRM; TEST(modrm_reg, modrm_val,8); break;
        case 0x85: __use(0);
                   READMODRM; TEST(modrm_reg, modrm_val,OP_SIZE); break;

        case 0x86: __use(0);
                   READMODRM; XCHG(modrm_reg, modrm_val,8); break;
        case 0x87: __use(0);
                   READMODRM; XCHG(modrm_reg, modrm_val,OP_SIZE); break;

        case 0x88: __use(0);
                   READMODRM; MOV(modrm_reg, modrm_val,8); break;
        case 0x89: __use(0);
                   READMODRM; MOV(modrm_reg, modrm_val,OP_SIZE); break;
        case 0x8a: __use(0);
                   READMODRM; MOV(modrm_val, modrm_reg,8); break;
        case 0x8b: __use(0);
                   READMODRM; MOV(modrm_val, modrm_reg,OP_SIZE); break;

        case 0x8d: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED;
                   MOV(addr, modrm_reg,OP_SIZE); break;



        case 0x8c: __use(0); READMODRM;
            if (modrm.reg != reg_ebp) UNDEFINED;
            MOV(gs, modrm_val,16); break;
        case 0x8e: __use(0); READMODRM;
            if (modrm.reg != reg_ebp) UNDEFINED;
            MOV(modrm_val, gs,16); break;

        case 0x8f: __use(0);
                   READMODRM; POP(modrm_val,OP_SIZE); break;

        case 0x90: __use(0); break;
        case 0x91: __use(0);
                   XCHG(reg_c, reg_a,OP_SIZE); break;
        case 0x92: __use(0);
                   XCHG(reg_d, reg_a,OP_SIZE); break;
        case 0x93: __use(0);
                   XCHG(reg_b, reg_a,OP_SIZE); break;
        case 0x94: __use(0);
                   XCHG(reg_sp, reg_a,OP_SIZE); break;
        case 0x95: __use(0);
                   XCHG(reg_bp, reg_a,OP_SIZE); break;
        case 0x96: __use(0);
                   XCHG(reg_si, reg_a,OP_SIZE); break;
        case 0x97: __use(0);
                   XCHG(reg_di, reg_a,OP_SIZE); break;

        case 0x98: __use(0); CVTE; break;
        case 0x99: __use(0); CVT; break;

        case 0x9b: __use(0); break;

        case 0x9c: __use(0); PUSHF(); break;
        case 0x9d: __use(0); POPF(); break;
        case 0x9e: __use(0); SAHF; break;

        case 0xa0: __use(0);
                   READADDR; MOV(mem_addr, reg_a,8); break;
        case 0xa1: __use(0);
                   READADDR; MOV(mem_addr, reg_a,OP_SIZE); break;
        case 0xa2: __use(0);
                   READADDR; MOV(reg_a, mem_addr,8); break;
        case 0xa3: __use(0);
                   READADDR; MOV(reg_a, mem_addr,OP_SIZE); break;

        case 0xa4: __use(0); STR(movs, 8); break;
        case 0xa5: __use(0); STR(movs, OP_SIZE); break;
        case 0xa6: __use(0); STR(cmps, 8); break;
        case 0xa7: __use(0); STR(cmps, OP_SIZE); break;

        case 0xa8: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; TEST(imm, reg_a,8); break;
        case 0xa9: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); TEST(imm, reg_a,OP_SIZE); break;

        case 0xaa: __use(0); STR(stos, 8); break;
        case 0xab: __use(0); STR(stos, OP_SIZE); break;
        case 0xac: __use(0); STR(lods, 8); break;
        case 0xad: __use(0); STR(lods, OP_SIZE); break;
        case 0xae: __use(0); STR(scas, 8); break;
        case 0xaf: __use(0); STR(scas, OP_SIZE); break;

        case 0xb0: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_a,8); break;
        case 0xb1: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_c,8); break;
        case 0xb2: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_d,8); break;
        case 0xb3: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_b,8); break;
        case 0xb4: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_sp,8); break;
        case 0xb5: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_bp,8); break;
        case 0xb6: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_si,8); break;
        case 0xb7: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, reg_di,8); break;

        case 0xb8: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_a,OP_SIZE); break;
        case 0xb9: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_c,OP_SIZE); break;
        case 0xba: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_d,OP_SIZE); break;
        case 0xbb: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_b,OP_SIZE); break;
        case 0xbc: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_sp,OP_SIZE); break;
        case 0xbd: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_bp,OP_SIZE); break;
        case 0xbe: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_si,OP_SIZE); break;
        case 0xbf: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, reg_di,OP_SIZE); break;
# 695 "project/ish/emu/decode.h"
        case 0xc0: __use(0);
                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 0: __use(0); ROL(imm, modrm_val,8); break; case 1: __use(0); ROR(imm, modrm_val,8); break; case 2: __use(0); RCL(imm, modrm_val,8); break; case 3: __use(0); RCR(imm, modrm_val,8); break; case 4: case 6: __use(0); SHL(imm, modrm_val,8); break; case 5: __use(0); SHR(imm, modrm_val,8); break; case 7: __use(0); SAR(imm, modrm_val,8); break; }; break;
        case 0xc1: __use(0);
                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 0: __use(0); ROL(imm, modrm_val,OP_SIZE); break; case 1: __use(0); ROR(imm, modrm_val,OP_SIZE); break; case 2: __use(0); RCL(imm, modrm_val,OP_SIZE); break; case 3: __use(0); RCR(imm, modrm_val,OP_SIZE); break; case 4: case 6: __use(0); SHL(imm, modrm_val,OP_SIZE); break; case 5: __use(0); SHR(imm, modrm_val,OP_SIZE); break; case 7: __use(0); SAR(imm, modrm_val,OP_SIZE); break; }; break;

        case 0xc2: __use(0);
                   _READIMM(imm, 16); __use(0, (long long) imm); RET_NEAR(imm); break;
        case 0xc3: __use(0);
                   RET_NEAR(0); break;

        case 0xc9: __use(0);
                   MOV(reg_bp, reg_sp,OP_SIZE); POP(reg_bp,OP_SIZE); break;

        case 0xcc: __use(0);
                   INT(3); break;
        case 0xcd: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; INT(imm); break;

        case 0xc6: __use(0);
                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; MOV(imm, modrm_val,8); break;
        case 0xc7: __use(0);
                   READMODRM; _READIMM(imm, OP_SIZE); __use(0, (long long) imm); MOV(imm, modrm_val,OP_SIZE); break;

        case 0xd0: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: __use(0); ROL(1, modrm_val,8); break; case 1: __use(0); ROR(1, modrm_val,8); break; case 2: __use(0); RCL(1, modrm_val,8); break; case 3: __use(0); RCR(1, modrm_val,8); break; case 4: case 6: __use(0); SHL(1, modrm_val,8); break; case 5: __use(0); SHR(1, modrm_val,8); break; case 7: __use(0); SAR(1, modrm_val,8); break; }; break;
        case 0xd1: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: __use(0); ROL(1, modrm_val,OP_SIZE); break; case 1: __use(0); ROR(1, modrm_val,OP_SIZE); break; case 2: __use(0); RCL(1, modrm_val,OP_SIZE); break; case 3: __use(0); RCR(1, modrm_val,OP_SIZE); break; case 4: case 6: __use(0); SHL(1, modrm_val,OP_SIZE); break; case 5: __use(0); SHR(1, modrm_val,OP_SIZE); break; case 7: __use(0); SAR(1, modrm_val,OP_SIZE); break; }; break;
        case 0xd2: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: __use(0); ROL(reg_c, modrm_val,8); break; case 1: __use(0); ROR(reg_c, modrm_val,8); break; case 2: __use(0); RCL(reg_c, modrm_val,8); break; case 3: __use(0); RCR(reg_c, modrm_val,8); break; case 4: case 6: __use(0); SHL(reg_c, modrm_val,8); break; case 5: __use(0); SHR(reg_c, modrm_val,8); break; case 7: __use(0); SAR(reg_c, modrm_val,8); break; }; break;
        case 0xd3: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: __use(0); ROL(reg_c, modrm_val,OP_SIZE); break; case 1: __use(0); ROR(reg_c, modrm_val,OP_SIZE); break; case 2: __use(0); RCL(reg_c, modrm_val,OP_SIZE); break; case 3: __use(0); RCR(reg_c, modrm_val,OP_SIZE); break; case 4: case 6: __use(0); SHL(reg_c, modrm_val,OP_SIZE); break; case 5: __use(0); SHR(reg_c, modrm_val,OP_SIZE); break; case 7: __use(0); SAR(reg_c, modrm_val,OP_SIZE); break; }; break;



        case 0xd8: case 0xd9: case 0xda: case 0xdb: case 0xdc: case 0xdd: case 0xde: case 0xdf:
            __use(0); READMODRM;
            if (modrm.type != modrm_reg) {
                switch (insn << 4 | modrm.opcode) {
                    case 0xd80: __use(0); FADDM(mem_addr_real,32); break;
                    case 0xd81: __use(0); FMULM(mem_addr_real,32); break;
                    case 0xd82: __use(0); FCOMM(mem_addr_real,32); break;
                    case 0xd83: __use(0); FCOMM(mem_addr_real,32); FPOP; break;
                    case 0xd84: __use(0); FSUBM(mem_addr_real,32); break;
                    case 0xd85: __use(0); FSUBRM(mem_addr_real,32); break;
                    case 0xd86: __use(0); FDIVM(mem_addr_real,32); break;
                    case 0xd87: __use(0); FDIVRM(mem_addr_real,32); break;
                    case 0xd90: __use(0); FLDM(mem_addr_real,32); break;
                    case 0xd92: __use(0); FSTM(mem_addr_real,32); break;
                    case 0xd93: __use(0); FSTM(mem_addr_real,32); FPOP; break;



                    case 0xd95: __use(0); FLDCW(mem_addr); break;



                    case 0xd97: __use(0); FSTCW(mem_addr); break;
                    case 0xda0: __use(0); FIADD(mem_addr,32); break;
                    case 0xda1: __use(0); FIMUL(mem_addr,32); break;
                    case 0xda2: __use(0); FICOM(mem_addr,32); break;
                    case 0xda3: __use(0); FICOM(mem_addr,32); FPOP; break;
                    case 0xda4: __use(0); FISUB(mem_addr,32); break;
                    case 0xda5: __use(0); FISUBR(mem_addr,32); break;
                    case 0xda6: __use(0); FIDIV(mem_addr,32); break;
                    case 0xda7: __use(0); FIDIVR(mem_addr,32); break;
                    case 0xdb0: __use(0); FILD(mem_addr,32); break;
                    case 0xdb2: __use(0); FIST(mem_addr,32); break;
                    case 0xdb3: __use(0); FIST(mem_addr,32); FPOP; break;
                    case 0xdb5: __use(0); FLDM(mem_addr_real,80); break;
                    case 0xdb7: __use(0); FSTM(mem_addr_real,80); FPOP; break;
                    case 0xdc0: __use(0); FADDM(mem_addr_real,64); break;
                    case 0xdc1: __use(0); FMULM(mem_addr_real,64); break;
                    case 0xdc2: __use(0); FCOMM(mem_addr_real,64); break;
                    case 0xdc3: __use(0); FCOMM(mem_addr_real,64); FPOP; break;
                    case 0xdc4: __use(0); FSUBM(mem_addr_real,64); break;
                    case 0xdc5: __use(0); FSUBRM(mem_addr_real,64); break;
                    case 0xdc6: __use(0); FDIVM(mem_addr_real,64); break;
                    case 0xdc7: __use(0); FDIVRM(mem_addr_real,64); break;
                    case 0xdd0: __use(0); FLDM(mem_addr_real,64); break;
                    case 0xdd2: __use(0); FSTM(mem_addr_real,64); break;
                    case 0xdd3: __use(0); FSTM(mem_addr_real,64); FPOP; break;
                    case 0xdd4: __use(0); FRESTORE(mem_addr,32); break;
                    case 0xdd6: __use(0); FSAVE(mem_addr,32); break;
                    case 0xde0: __use(0); FIADD(mem_addr,16); break;
                    case 0xde1: __use(0); FIMUL(mem_addr,16); break;
                    case 0xde2: __use(0); FICOM(mem_addr,16); break;
                    case 0xde3: __use(0); FICOM(mem_addr,16); FPOP; break;
                    case 0xde4: __use(0); FISUB(mem_addr,16); break;
                    case 0xde5: __use(0); FISUBR(mem_addr,16); break;
                    case 0xde6: __use(0); FIDIV(mem_addr,16); break;
                    case 0xde7: __use(0); FIDIVR(mem_addr,16); break;
                    case 0xdf0: __use(0); FILD(mem_addr,16); break;
                    case 0xdf2: __use(0); FIST(mem_addr,16); break;
                    case 0xdf3: __use(0); FIST(mem_addr,16); FPOP; break;
                    case 0xdf5: __use(0); FILD(mem_addr,64); break;
                    case 0xdf7: __use(0); FIST(mem_addr,64); FPOP; break;
                    default: __use(0); UNDEFINED;
                }
            } else {
                switch (insn << 4 | modrm.opcode) {
                    case 0xd80: __use(0); FADD(st_i, st_0); break;
                    case 0xd81: __use(0); FMUL(st_i, st_0); break;
                    case 0xd82: __use(0); FCOM(); break;
                    case 0xd83: __use(0); FCOM(); FPOP; break;
                    case 0xd84: __use(0); FSUB(st_i, st_0); break;
                    case 0xd85: __use(0); FSUBR(st_i, st_0); break;
                    case 0xd86: __use(0); FDIV(st_i, st_0); break;
                    case 0xd87: __use(0); FDIVR(st_i, st_0); break;
                    case 0xd90: __use(0); FLD(); break;
                    case 0xd91: __use(0); FXCH(); break;
                    case 0xdb5: __use(0); FUCOMI(); break;
                    case 0xdb6: __use(0); FCOMI(); break;
                    case 0xdc0: __use(0); FADD(st_0, st_i); break;
                    case 0xdc1: __use(0); FMUL(st_0, st_i); break;
                    case 0xdc4: __use(0); FSUBR(st_0, st_i); break;
                    case 0xdc5: __use(0); FSUB(st_0, st_i); break;
                    case 0xdc6: __use(0); FDIVR(st_0, st_i); break;
                    case 0xdc7: __use(0); FDIV(st_0, st_i); break;
                    case 0xdd0: __use(0); break;
                    case 0xdd2: __use(0); FST(); break;
                    case 0xdd3: __use(0); FST(); FPOP; break;
                    case 0xdd4: __use(0); FUCOM(); break;
                    case 0xdd5: __use(0); FUCOM(); FPOP; break;
                    case 0xda5: __use(0); FUCOM(); FPOP; FPOP; break;
                    case 0xde0: __use(0); FADD(st_0, st_i); FPOP; break;
                    case 0xde1: __use(0); FMUL(st_0, st_i); FPOP; break;
                    case 0xde4: __use(0); FSUBR(st_0, st_i); FPOP; break;
                    case 0xde5: __use(0); FSUB(st_0, st_i); FPOP; break;
                    case 0xde6: __use(0); FDIVR(st_0, st_i); FPOP; break;
                    case 0xde7: __use(0); FDIV(st_0, st_i); FPOP; break;
                    case 0xdf0: __use(0); FPOP; break;
                    case 0xdf5: __use(0); FUCOMI(); FPOP; break;
                    case 0xdf6: __use(0); FCOMI(); FPOP; break;
                    default: switch (insn << 8 | modrm.opcode << 4 | modrm.rm_opcode) {
                    case 0xd940: __use(0); FCHS(); break;
                    case 0xd941: __use(0); FABS(); break;
                    case 0xd944: __use(0); FTST(); break;
                    case 0xd945: __use(0); FXAM(); break;
                    case 0xd950: __use(0); FLDC(one); break;
                    case 0xd951: __use(0); FLDC(log2t); break;
                    case 0xd952: __use(0); FLDC(log2e); break;
                    case 0xd953: __use(0); FLDC(pi); break;
                    case 0xd954: __use(0); FLDC(log2); break;
                    case 0xd955: __use(0); FLDC(ln2); break;
                    case 0xd956: __use(0); FLDC(zero); break;
                    case 0xd960: __use(0); F2XM1(); break;
                    case 0xd961: __use(0); FYL2X(); break;
                    case 0xd963: __use(0); FPATAN(); break;
                    case 0xd964: __use(0); FXTRACT(); break;
                    case 0xd967: __use(0); FINCSTP(); break;
                    case 0xd970: __use(0); FPREM(); break;
                    case 0xd972: __use(0); FSQRT(); break;
                    case 0xd974: __use(0); FRNDINT(); break;
                    case 0xd975: __use(0); FSCALE(); break;
                    case 0xd976: __use(0); FSIN(); break;
                    case 0xd977: __use(0); FCOS(); break;
                    case 0xdb42: __use(0); FCLEX(); break;
                    case 0xde31: __use(0); FCOM(); FPOP; FPOP; break;
                    case 0xdf40: __use(0); FSTSW(reg_a); break;
                    default: __use(0); UNDEFINED;
                }}
            }
            break;

        case 0xe3: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JCXZ_REL(imm); break;

        case 0xe8: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); CALL_REL(imm); break;

        case 0xe9: __use(0);
                   _READIMM(imm, OP_SIZE); __use(0, (long long) imm); JMP_REL(imm); break;
        case 0xeb: __use(0);
                   _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; JMP_REL(imm); break;


        case 0xf0:
            lockrestart:
            _READIMM(insn, 8); __use(0, insn);
            switch (insn) {
                case 0x65: __use(0); SEG_GS(); goto lockrestart;

                case 0x66:






                    goto lockrestart;
# 895 "project/ish/emu/decode.h"
                case 0x00 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_ADD(modrm_reg, modrm_val,8); break; case 0x00 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_ADD(modrm_reg, modrm_val,OP_SIZE); break;;
                case 0x08 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_OR(modrm_reg, modrm_val,8); break; case 0x08 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_OR(modrm_reg, modrm_val,OP_SIZE); break;;
                case 0x10 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_ADC(modrm_reg, modrm_val,8); break; case 0x10 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_ADC(modrm_reg, modrm_val,OP_SIZE); break;;
                case 0x18 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_SBB(modrm_reg, modrm_val,8); break; case 0x18 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_SBB(modrm_reg, modrm_val,OP_SIZE); break;;
                case 0x20 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_AND(modrm_reg, modrm_val,8); break; case 0x20 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_AND(modrm_reg, modrm_val,OP_SIZE); break;;
                case 0x28 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_SUB(modrm_reg, modrm_val,8); break; case 0x28 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_SUB(modrm_reg, modrm_val,OP_SIZE); break;;
                case 0x30 +0x0: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_XOR(modrm_reg, modrm_val,8); break; case 0x30 +0x1: __use(0); READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_XOR(modrm_reg, modrm_val,OP_SIZE); break;;
# 917 "project/ish/emu/decode.h"
                case 0x80: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 0: __use(0); ATOMIC_ADD(imm, modrm_val,8); break; case 1: __use(0); ATOMIC_OR(imm, modrm_val,8); break; case 2: __use(0); ATOMIC_ADC(imm, modrm_val,8); break; case 3: __use(0); ATOMIC_SBB(imm, modrm_val,8); break; case 4: __use(0); ATOMIC_AND(imm, modrm_val,8); break; case 5: __use(0); ATOMIC_SUB(imm, modrm_val,8); break; case 6: __use(0); ATOMIC_XOR(imm, modrm_val,8); break; default: __use(0); UNDEFINED; }; break;
                case 0x81: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; _READIMM(imm, OP_SIZE); __use(0, (long long) imm); switch (modrm.opcode) { case 0: __use(0); ATOMIC_ADD(imm, modrm_val,OP_SIZE); break; case 1: __use(0); ATOMIC_OR(imm, modrm_val,OP_SIZE); break; case 2: __use(0); ATOMIC_ADC(imm, modrm_val,OP_SIZE); break; case 3: __use(0); ATOMIC_SBB(imm, modrm_val,OP_SIZE); break; case 4: __use(0); ATOMIC_AND(imm, modrm_val,OP_SIZE); break; case 5: __use(0); ATOMIC_SUB(imm, modrm_val,OP_SIZE); break; case 6: __use(0); ATOMIC_XOR(imm, modrm_val,OP_SIZE); break; default: __use(0); UNDEFINED; }; break;
                case 0x83: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 0: __use(0); ATOMIC_ADD(imm, modrm_val,OP_SIZE); break; case 1: __use(0); ATOMIC_OR(imm, modrm_val,OP_SIZE); break; case 2: __use(0); ATOMIC_ADC(imm, modrm_val,OP_SIZE); break; case 3: __use(0); ATOMIC_SBB(imm, modrm_val,OP_SIZE); break; case 4: __use(0); ATOMIC_AND(imm, modrm_val,OP_SIZE); break; case 5: __use(0); ATOMIC_SUB(imm, modrm_val,OP_SIZE); break; case 6: __use(0); ATOMIC_XOR(imm, modrm_val,OP_SIZE); break; default: __use(0); UNDEFINED; }; break;



                case 0x0f:
                    _READIMM(insn, 8); __use(0, insn);
                    switch (insn) {
                        case 0xab: __use(0);
                                   READMODRM; ATOMIC_BTS(modrm_reg, modrm_val,OP_SIZE); break;
                        case 0xb3: __use(0);
                                   READMODRM; ATOMIC_BTR(modrm_reg, modrm_val,OP_SIZE); break;
                        case 0xbb: __use(0);
                                   READMODRM; ATOMIC_BTC(modrm_reg, modrm_val,OP_SIZE); break;
# 943 "project/ish/emu/decode.h"
                        case 0xba: __use(0);
                                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; switch (modrm.opcode) { case 5: __use(0); ATOMIC_BTS(imm, modrm_val,OP_SIZE); break; case 6: __use(0); ATOMIC_BTR(imm, modrm_val,OP_SIZE); break; case 7: __use(0); ATOMIC_BTC(imm, modrm_val,OP_SIZE); break; default: UNDEFINED; }; break;


                        case 0xb0: __use(0);
                                   READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_CMPXCHG(modrm_reg, modrm_val,8); break;
                        case 0xb1: __use(0);
                                   READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_CMPXCHG(modrm_reg, modrm_val,OP_SIZE); break;

                        case 0xc0: __use(0);
                                   READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_XADD(modrm_reg, modrm_val,8); break;
                        case 0xc1: __use(0);
                                   READMODRM; if (modrm.type == modrm_reg) UNDEFINED; ATOMIC_XADD(modrm_reg, modrm_val,OP_SIZE); break;

                        case 0xc7: READMODRM; if (modrm.type == modrm_reg) UNDEFINED; switch (modrm.opcode) {
                                       case 1: __use(0);
                                               ATOMIC_CMPXCHG8B(modrm_val,64); break;
                                       default: UNDEFINED;
                                   };
                                   break;
                        default: __use(0); UNDEFINED;
                    }
                    break;
# 974 "project/ish/emu/decode.h"
                case 0xfe: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; switch (modrm.opcode) { case 0: __use(0); ATOMIC_INC(modrm_val,8); break; case 1: __use(0); ATOMIC_DEC(modrm_val,8); break; default: __use(0); UNDEFINED; }; break;
                case 0xff: __use(0);
                           READMODRM; if (modrm.type == modrm_reg) UNDEFINED; switch (modrm.opcode) { case 0: __use(0); ATOMIC_INC(modrm_val,OP_SIZE); break; case 1: __use(0); ATOMIC_DEC(modrm_val,OP_SIZE); break; default: __use(0); UNDEFINED; }; break;

                default: __use(0); UNDEFINED;
            }
            break;

        case 0xf2:
            _READIMM(insn, 8); __use(0, insn);
            switch (insn) {
                case 0x0f:
                    _READIMM(insn, 8); __use(0, insn);
                    switch (insn) {
                        case 0x10: __use(0);
                                   READMODRM; VMOV_MERGE_REG(xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x11: __use(0);
                                   READMODRM; VMOV_MERGE_REG(xmm_modrm_reg, xmm_modrm_val,64); break;

                        case 0x2a: __use(0);
                                   READMODRM; V_OP(cvtsi2sd, modrm_val, xmm_modrm_reg,32); break;
                        case 0x2c: __use(0);
                                   READMODRM; V_OP(cvttsd2si, xmm_modrm_val, modrm_reg,64); break;
                        case 0x5a: __use(0);
                                   READMODRM; V_OP(cvtsd2ss, xmm_modrm_val, xmm_modrm_reg,64); break;

                        case 0x51: __use(0);
                                   READMODRM; V_OP(single_fsqrt, xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x58: __use(0);
                                   READMODRM; V_OP(single_fadd, xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x59: __use(0);
                                   READMODRM; V_OP(single_fmul, xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x5c: __use(0);
                                   READMODRM; V_OP(single_fsub, xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x5d: __use(0);
                                   READMODRM; V_OP(single_fmin, xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x5e: __use(0);
                                   READMODRM; V_OP(single_fdiv, xmm_modrm_val, xmm_modrm_reg,64); break;
                        case 0x5f: __use(0);
                                   READMODRM; V_OP(single_fmax, xmm_modrm_val, xmm_modrm_reg,64); break;

                        case 0x70: __use(0);
                                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; V_OP_IMM(shuffle_lw, xmm_modrm_val, xmm_modrm_reg,128); break;

                        case 0xc2: __use(0);
                                   READMODRM; _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; V_OP_IMM(single_fcmp, xmm_modrm_val, xmm_modrm_reg,64); break;

                        case 0x18 ... 0x1f: __use(0); READMODRM; break;
                        default: __use(0); UNDEFINED;
                    }
                    break;

                case 0xa6: __use(0); REPNZ(cmps, 8); break;
                case 0xa7: __use(0); REPNZ(cmps, OP_SIZE); break;
                case 0xae: __use(0); REPNZ(scas, 8); break;
                case 0xaf: __use(0); REPNZ(scas, OP_SIZE); break;
                default: __use(0); UNDEFINED;
            }
            break;

        case 0xf3:
            _READIMM(insn, 8); __use(0, insn);
            switch (insn) {
                case 0x0f:


                    _READIMM(insn, 8); __use(0, insn);
                    switch (insn) {
                        case 0x10: __use(0);
                                   READMODRM; VMOV_MERGE_REG(xmm_modrm_val, xmm_modrm_reg,32); break;
                        case 0x11: __use(0);
                                   READMODRM; VMOV_MERGE_REG(xmm_modrm_reg, xmm_modrm_val,32); break;

                        case 0x2a: __use(0);
                                   READMODRM; V_OP(cvtsi2ss, modrm_val, xmm_modrm_reg,32); break;
                        case 0x2c: __use(0);
                                   READMODRM; V_OP(cvttss2si, xmm_modrm_val, modrm_reg,32); break;
                        case 0x5a: __use(0);
                                   READMODRM; V_OP(cvtss2sd, xmm_modrm_val, xmm_modrm_reg,32); break;

                        case 0x58: __use(0);
                                   READMODRM; V_OP(single_fadd, xmm_modrm_val, xmm_modrm_reg,32); break;
                        case 0x59: __use(0);
                                   READMODRM; V_OP(single_fmul, xmm_modrm_val, xmm_modrm_reg,32); break;
                        case 0x5c: __use(0);
                                   READMODRM; V_OP(single_fsub, xmm_modrm_val, xmm_modrm_reg,32); break;
                        case 0x5e: __use(0);
                                   READMODRM; V_OP(single_fdiv, xmm_modrm_val, xmm_modrm_reg,32); break;

                        case 0x6f: __use(0);
                                   READMODRM; VMOV(xmm_modrm_val, xmm_modrm_reg,128); break;

                        case 0x7e: __use(0);
                                   READMODRM; VMOV(xmm_modrm_val, xmm_modrm_reg,64); break;

                        case 0x18 ... 0x1f: __use(0); READMODRM; break;

                        case 0x7f: __use(0);
                                   READMODRM; VMOV(xmm_modrm_reg, xmm_modrm_val,128); break;



                        case 0xbc: __use(0);
                                   READMODRM; BSF(modrm_val, modrm_reg,OP_SIZE); break;
                        case 0xbd: __use(0);
                                   READMODRM; BSR(modrm_val, modrm_reg,OP_SIZE); break;

                        default: __use(0); UNDEFINED;
                    }
                    break;

                case 0x90: __use(0); break;

                case 0xa4: __use(0); REP(movs, 8); break;
                case 0xa5: __use(0); REP(movs, OP_SIZE); break;
                case 0xa6: __use(0); REPZ(cmps, 8); break;
                case 0xa7: __use(0); REPZ(cmps, OP_SIZE); break;
                case 0xaa: __use(0); REP(stos, 8); break;
                case 0xab: __use(0); REP(stos, OP_SIZE); break;
                case 0xac: __use(0); REP(lods, 8); break;
                case 0xad: __use(0); REP(lods, OP_SIZE); break;
                case 0xae: __use(0); REPZ(scas, 8); break;
                case 0xaf: __use(0); REPZ(scas, OP_SIZE); break;





                case 0xc3: __use(0); RET_NEAR(0); break;
                default: __use(0); UNDEFINED;
            }
            break;
# 1128 "project/ish/emu/decode.h"
        case 0xf6: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: case 1: __use(0); _READIMM(imm, 8); __use(0, (long long) imm); imm = (int8_t) (uint8_t) imm; TEST(imm, modrm_val,8); break; case 2: __use(0); NOT(modrm_val,8); break; case 3: __use(0); NEG(modrm_val,8); break; case 4: __use(0); MUL1(modrm_val,8); break; case 5: __use(0); IMUL1(modrm_val,8); break; case 6: __use(0); DIV(modrm_val,8); break; case 7: __use(0); IDIV(modrm_val,8); break; default: __use(0); UNDEFINED; }; break;
        case 0xf7: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: case 1: __use(0); _READIMM(imm, OP_SIZE); __use(0, (long long) imm); TEST(imm, modrm_val,OP_SIZE); break; case 2: __use(0); NOT(modrm_val,OP_SIZE); break; case 3: __use(0); NEG(modrm_val,OP_SIZE); break; case 4: __use(0); MUL1(modrm_val,OP_SIZE); break; case 5: __use(0); IMUL1(modrm_val,OP_SIZE); break; case 6: __use(0); DIV(modrm_val,OP_SIZE); break; case 7: __use(0); IDIV(modrm_val,OP_SIZE); break; default: __use(0); UNDEFINED; }; break;



        case 0xfc: __use(0); CLD; break;
        case 0xfd: __use(0); STD; break;
# 1155 "project/ish/emu/decode.h"
        case 0xfe: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: __use(0); INC(modrm_val,8); break; case 1: __use(0); DEC(modrm_val,8); break; case 2: __use(0); CALL(modrm_val); break; case 3: __use(0); UNDEFINED; case 4: __use(0); JMP(modrm_val); break; case 5: __use(0); UNDEFINED; case 6: __use(0); PUSH(modrm_val,8); break; case 7: __use(0); UNDEFINED; }; break;
        case 0xff: __use(0);
                   READMODRM; switch (modrm.opcode) { case 0: __use(0); INC(modrm_val,OP_SIZE); break; case 1: __use(0); DEC(modrm_val,OP_SIZE); break; case 2: __use(0); CALL(modrm_val); break; case 3: __use(0); UNDEFINED; case 4: __use(0); JMP(modrm_val); break; case 5: __use(0); UNDEFINED; case 6: __use(0); PUSH(modrm_val,OP_SIZE); break; case 7: __use(0); UNDEFINED; }; break;



        default:
            __use(0);
            UNDEFINED;
    }
    __use(0);
    FINISH;
}
