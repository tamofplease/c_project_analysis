# 0 "project/nginx/src/http/ngx_http_core_module.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nginx/src/http/ngx_http_core_module.c"







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_config.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_config.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/objs/ngx_auto_headers.h" 1 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/objs/ngx_auto_headers.h" 3 4
<ngx_http_perl_module.h>
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_config.h" 2 3 4
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_config.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


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
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 3 4
struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4




struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME = 0,

_CLOCK_MONOTONIC = 6,


_CLOCK_MONOTONIC_RAW = 4,

_CLOCK_MONOTONIC_RAW_APPROX = 5,

_CLOCK_UPTIME_RAW = 8,

_CLOCK_UPTIME_RAW_APPROX = 9,


_CLOCK_PROCESS_CPUTIME_ID = 12,

_CLOCK_THREAD_CPUTIME_ID = 16

} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);



__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);




int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4

int timespec_get(struct timespec *ts, int base);



# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4





int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" "$1050")




;
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4

int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4




int getattrlistbulk(int, void *, void *, size_t, uint64_t) ;
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;
int setattrlistat(int, const char *, void *, void *, size_t, uint32_t) ;


# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4


int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
# 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char * __path, const char * __arg0, ...) ;
int execle(const char * __path, const char * __arg0, ...) ;
int execlp(const char * __file, const char * __arg0, ...) ;
int execv(const char * __path, char * const * __argv) ;
int execve(const char * __file, char * const * __argv, char * const * __envp) ;
int execvp(const char * __file, char * const * __argv) ;
pid_t fork(void) ;
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write" );

# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;

# 525 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 3 4


char *ctermid(char *);


# 526 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4












__attribute__((__deprecated__))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);

void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((__const__)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );






__attribute__((__deprecated__))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void) ;


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);

# 620 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4

int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 1 3 4
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4



int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)




__asm("_" "pselect" "$1050")




;





# 636 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 640 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) ;
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) ;
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) ;
# 656 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) ;
int mkpathat_np(int dfd, const char *path, mode_t omode)
 
  ;
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
 
  ;
int mkostemps(char *path, int slen, int oflags)
 
  ;

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
 
  ;
char *mkdtempat_np(int dfd, char *path)
 
  ;
int mkstempsat_np(int dfd, char *path, int slen)
 
  ;
int mkostempsat_np(int dfd, char *path, int slen, int oflags)
 
  ;
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);

__attribute__((__deprecated__("Use of per-thread security contexts is error-prone and discouraged.")))
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);

int reboot(int);
int revoke(const char *);

__attribute__((__deprecated__)) int rcmd(char **, int, const char *, const char *, const char *, int *);
__attribute__((__deprecated__)) int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
__attribute__((__deprecated__)) int rresvport(int *);
__attribute__((__deprecated__)) int rresvport_af(int *, int);
__attribute__((__deprecated__)) int iruserok(unsigned long, int, const char *, const char *);
__attribute__((__deprecated__)) int iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((__deprecated__)) int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);






int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) ;
int fsetattrlist(int,void*,void*,size_t,unsigned int) ;
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) ;
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
# 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) ;
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) ;




int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;


# 18 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4

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
# 230 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4





extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);



extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);


extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);







# 19 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 78 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



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
# 22 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
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








# 23 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
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
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 25 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
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
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/signal.h" 3 4
extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];



int raise(int);




void (* bsd_signal(int, void (* )(int)))(int);
int kill(pid_t, int) __asm("_" "kill" );
int killpg(pid_t, int) __asm("_" "killpg" );
int pthread_kill(pthread_t, int);
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int sigaction(int, const struct sigaction * restrict,
     struct sigaction * restrict);
int sigaddset(sigset_t *, int);
int sigaltstack(const stack_t * restrict, stack_t * restrict) __asm("_" "sigaltstack" ) ;
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(const sigset_t *, int);
int sigpause(int) __asm("_" "sigpause" );
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int sigrelse(int);
void (* sigset(int, void (* )(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" );
int sigwait(const sigset_t * restrict, int * restrict) __asm("_" "sigwait" );

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);




extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pwd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pwd.h" 3 4
struct passwd {
 char *pw_name;
 char *pw_passwd;
 uid_t pw_uid;
 gid_t pw_gid;
 __darwin_time_t pw_change;
 char *pw_class;
 char *pw_gecos;
 char *pw_dir;
 char *pw_shell;
 __darwin_time_t pw_expire;
};




struct passwd *getpwuid(uid_t);
struct passwd *getpwnam(const char *);
int getpwuid_r(uid_t, struct passwd *, char *, size_t, struct passwd **);
int getpwnam_r(const char *, struct passwd *, char *, size_t, struct passwd **);
struct passwd *getpwent(void);
void setpwent(void);
void endpwent(void);



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/uuid/uuid.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/uuid/uuid.h" 3 4
typedef __darwin_uuid_string_t uuid_string_t;





static const uuid_t UUID_NULL __attribute__ ((unused)) = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};





void uuid_clear(uuid_t uu);

int uuid_compare(const uuid_t uu1, const uuid_t uu2);

void uuid_copy(uuid_t dst, const uuid_t src);

void uuid_generate(uuid_t out);
void uuid_generate_random(uuid_t out);
void uuid_generate_time(uuid_t out);

void uuid_generate_early_random(uuid_t out);

int uuid_is_null(const uuid_t uu);

int uuid_parse(const uuid_string_t in, uuid_t uu);

void uuid_unparse(const uuid_t uu, uuid_string_t out);
void uuid_unparse_lower(const uuid_t uu, uuid_string_t out);
void uuid_unparse_upper(const uuid_t uu, uuid_string_t out);
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pwd.h" 2 3 4

int setpassent(int);
char *user_from_uid(uid_t, int);
struct passwd *getpwuuid(uuid_t);
int getpwuuid_r(uuid_t, struct passwd *, char *, size_t, struct passwd **);

# 28 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/grp.h" 1 3 4
# 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/grp.h" 3 4
struct group {
 char *gr_name;
 char *gr_passwd;
 gid_t gr_gid;
 char **gr_mem;
};





struct group *getgrgid(gid_t);
struct group *getgrnam(const char *);

int getgrgid_r(gid_t, struct group *, char *, size_t, struct group **);
int getgrnam_r(const char *, struct group *, char *, size_t, struct group **);

struct group *getgrent(void);
void setgrent(void);
void endgrent(void);





char *group_from_gid(gid_t, int);
struct group *getgruuid(uuid_t);
int getgruuid_r(uuid_t, struct group *, char *, size_t, struct group **);






void setgrfile(const char *);

int setgroupent(int);

# 29 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 1 3 4
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack(4)
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack()
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
struct dirent { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[1024]; };
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 2 3 4




struct _telldir;


typedef struct {
 int __dd_fd;
 long __dd_loc;
 long __dd_size;
 char *__dd_buf;
 int __dd_len;
 long __dd_seek;
 __attribute__((__unused__)) long __padding;
 int __dd_flags;
 __darwin_pthread_mutex_t __dd_lock;
 struct _telldir *__dd_td;
} DIR;
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4


int closedir(DIR *) __asm("_" "closedir" );

DIR *opendir(const char *) __asm("_" "opendir" "$INODE64" );

struct dirent *readdir(DIR *) __asm("_" "readdir" "$INODE64");
int readdir_r(DIR *, struct dirent *, struct dirent **) __asm("_" "readdir_r" "$INODE64");

void rewinddir(DIR *) __asm("_" "rewinddir" "$INODE64" );

void seekdir(DIR *, long) __asm("_" "seekdir" "$INODE64" );

long telldir(DIR *) __asm("_" "telldir" "$INODE64" );












DIR *fdopendir(int) __asm("_" "fdopendir" "$INODE64" );

int alphasort(const struct dirent **, const struct dirent **) __asm("_" "alphasort" "$INODE64");
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
int dirfd(DIR *dirp) ;


int scandir(const char *, struct dirent ***,
    int (*)(const struct dirent *), int (*)(const struct dirent **, const struct dirent **)) __asm("_" "scandir" "$INODE64");
# 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4







int getdirentries(int, char *, int, long *)






      __asm("_getdirentries_is_not_available_when_64_bit_inodes_are_in_effect")



;

DIR *__opendir2(const char *, int) __asm("_" "__opendir2" "$INODE64" );


# 30 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/glob.h" 1 3 4
# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/glob.h" 3 4
struct dirent;
struct stat;

typedef struct {
 size_t gl_pathc;
 int gl_matchc;
 size_t gl_offs;
 int gl_flags;
 char **gl_pathv;




  int (*gl_errfunc)(const char *, int);
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/glob.h" 3 4
 void (*gl_closedir)(void *);

 struct dirent *(*gl_readdir)(void *);



 void *(*gl_opendir)(const char *);

 int (*gl_lstat)(const char *, struct stat *);
 int (*gl_stat)(const char *, struct stat *);




} glob_t;
# 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/glob.h" 3 4

int glob(const char * restrict, int, int (*)(const char *, int),
      glob_t * restrict) __asm("_" "glob" "$INODE64");
# 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/glob.h" 3 4
void globfree(glob_t *);

# 31 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucred.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucred.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/param.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/param.h" 2 3 4
# 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/param.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/param.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_param.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/param.h" 2 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/param.h" 2 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/param.h" 2 3 4


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 203 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 2 3 4
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/param.h" 2 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucred.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 1 3 4
# 192 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 3 4


typedef uid_t au_id_t;
typedef pid_t au_asid_t;
typedef u_int16_t au_event_t;
typedef u_int16_t au_emod_t;
typedef u_int32_t au_class_t;
typedef u_int64_t au_asflgs_t __attribute__ ((aligned(8)));
typedef unsigned char au_ctlmode_t;

struct au_tid {
 dev_t port;
 u_int32_t machine;
};
typedef struct au_tid au_tid_t;

struct au_tid_addr {
 dev_t at_port;
 u_int32_t at_type;
 u_int32_t at_addr[4];
};
typedef struct au_tid_addr au_tid_addr_t;

struct au_mask {
 unsigned int am_success;
 unsigned int am_failure;
};
typedef struct au_mask au_mask_t;

struct auditinfo {
 au_id_t ai_auid;
 au_mask_t ai_mask;
 au_tid_t ai_termid;
 au_asid_t ai_asid;
};
typedef struct auditinfo auditinfo_t;

struct auditinfo_addr {
 au_id_t ai_auid;
 au_mask_t ai_mask;
 au_tid_addr_t ai_termid;
 au_asid_t ai_asid;
 au_asflgs_t ai_flags;
};
typedef struct auditinfo_addr auditinfo_addr_t;

struct auditpinfo {
 pid_t ap_pid;
 au_id_t ap_auid;
 au_mask_t ap_mask;
 au_tid_t ap_termid;
 au_asid_t ap_asid;
};
typedef struct auditpinfo auditpinfo_t;

struct auditpinfo_addr {
 pid_t ap_pid;
 au_id_t ap_auid;
 au_mask_t ap_mask;
 au_tid_addr_t ap_termid;
 au_asid_t ap_asid;
 au_asflgs_t ap_flags;
};
typedef struct auditpinfo_addr auditpinfo_addr_t;

struct au_session {
 auditinfo_addr_t *as_aia_p;
 au_mask_t as_mask;
};
typedef struct au_session au_session_t;

struct au_expire_after {
 time_t age;
 size_t size;
 unsigned char op_type;
};
typedef struct au_expire_after au_expire_after_t;




typedef struct au_token token_t;
# 283 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 3 4
struct au_qctrl {
 int aq_hiwater;


 int aq_lowater;


 int aq_bufsz;
 int aq_delay;
 int aq_minfree;
};
typedef struct au_qctrl au_qctrl_t;




struct audit_stat {
 unsigned int as_version;
 unsigned int as_numevent;
 int as_generated;
 int as_nonattrib;
 int as_kernel;
 int as_audit;
 int as_auditctl;
 int as_enqueue;
 int as_written;
 int as_wblocked;
 int as_rblocked;
 int as_dropped;
 int as_totalsize;
 unsigned int as_memused;
};
typedef struct audit_stat au_stat_t;




struct audit_fstat {
 u_int64_t af_filesz;
 u_int64_t af_currsz;
};
typedef struct audit_fstat au_fstat_t;




struct au_evclass_map {
 au_event_t ec_number;
 au_class_t ec_class;
};
typedef struct au_evclass_map au_evclass_map_t;
# 347 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 3 4
int audit(const void *, int)
;
int auditon(int, void *, int)
;
int auditctl(const char *)
;
int getauid(au_id_t *);
int setauid(const au_id_t *);
int getaudit_addr(struct auditinfo_addr *, int);
int setaudit_addr(const struct auditinfo_addr *, int);
# 366 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 3 4
int getaudit(struct auditinfo *)

                               ;
int setaudit(const struct auditinfo *)

                               ;
# 381 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 1 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/boolean.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/boolean.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/boolean.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/boolean.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/boolean.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/boolean.h" 3 4
typedef unsigned int boolean_t;
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/boolean.h" 2 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/boolean.h" 2 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/vm_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/vm_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/vm_types.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/vm_types.h" 3 4
typedef __darwin_natural_t natural_t;
typedef int integer_t;






typedef uintptr_t vm_offset_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/vm_types.h" 3 4
typedef uintptr_t vm_size_t;
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/vm_types.h" 3 4
typedef uint64_t mach_vm_address_t;
typedef uint64_t mach_vm_offset_t;
typedef uint64_t mach_vm_size_t;

typedef uint64_t vm_map_offset_t;
typedef uint64_t vm_map_address_t;
typedef uint64_t vm_map_size_t;

typedef mach_vm_address_t mach_port_context_t;
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/vm_types.h" 2 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 2 3 4
# 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_array_t;
# 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 2 3 4


typedef mach_port_t *mach_port_array_t;
# 188 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_right_t;
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_t;



typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_mscount_t;
typedef natural_t mach_port_msgcount_t;
typedef natural_t mach_port_rights_t;






typedef unsigned int mach_port_srights_t;

typedef struct mach_port_status {
 mach_port_rights_t mps_pset;
 mach_port_seqno_t mps_seqno;
 mach_port_mscount_t mps_mscount;
 mach_port_msgcount_t mps_qlimit;
 mach_port_msgcount_t mps_msgcount;
 mach_port_rights_t mps_sorights;
 boolean_t mps_srights;
 boolean_t mps_pdrequest;
 boolean_t mps_nsrequest;
 natural_t mps_flags;
} mach_port_status_t;
# 275 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef struct mach_port_limits {
 mach_port_msgcount_t mpl_qlimit;
} mach_port_limits_t;
# 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef struct mach_port_info_ext {
 mach_port_status_t mpie_status;
 mach_port_msgcount_t mpie_boost_cnt;
 uint32_t reserved[6];
} mach_port_info_ext_t;

typedef integer_t *mach_port_info_t;


typedef int mach_port_flavor_t;
# 318 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef struct mach_port_qos {
 unsigned int name:1;
 unsigned int prealloc:1;
 boolean_t pad1:30;
 natural_t len;
} mach_port_qos_t;
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
typedef struct mach_port_options {
 uint32_t flags;
 mach_port_limits_t mpl;
 union {
  uint64_t reserved[2];
  mach_port_name_t work_interval_port;
 };
}mach_port_options_t;

typedef mach_port_options_t *mach_port_options_ptr_t;
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/port.h" 3 4
enum mach_port_guard_exception_codes {
 kGUARD_EXC_DESTROY = 1u << 0,
 kGUARD_EXC_MOD_REFS = 1u << 1,
 kGUARD_EXC_SET_CONTEXT = 1u << 2,
 kGUARD_EXC_UNGUARDED = 1u << 3,
 kGUARD_EXC_INCORRECT_GUARD = 1u << 4,
 kGUARD_EXC_IMMOVABLE = 1u << 5,
 kGUARD_EXC_STRICT_REPLY = 1u << 6,
 kGUARD_EXC_MSG_FILTERED = 1u << 7,

 kGUARD_EXC_INVALID_RIGHT = 1u << 8,
 kGUARD_EXC_INVALID_NAME = 1u << 9,
 kGUARD_EXC_INVALID_VALUE = 1u << 10,
 kGUARD_EXC_INVALID_ARGUMENT = 1u << 11,
 kGUARD_EXC_RIGHT_EXISTS = 1u << 12,
 kGUARD_EXC_KERN_NO_SPACE = 1u << 13,
 kGUARD_EXC_KERN_FAILURE = 1u << 14,
 kGUARD_EXC_KERN_RESOURCE = 1u << 15,
 kGUARD_EXC_SEND_INVALID_REPLY = 1u << 16,
 kGUARD_EXC_SEND_INVALID_VOUCHER = 1u << 17,
 kGUARD_EXC_SEND_INVALID_RIGHT = 1u << 18,
 kGUARD_EXC_RCV_INVALID_NAME = 1u << 19,
 kGUARD_EXC_RCV_GUARDED_DESC = 1u << 20,
 kGUARD_EXC_MOD_REFS_NON_FATAL = 1u << 21,
 kGUARD_EXC_IMMOVABLE_NON_FATAL = 1u << 22,
};
# 382 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/bsm/audit.h" 2 3 4
mach_port_name_t audit_session_self(void);
au_asid_t audit_session_join(mach_port_name_t port);
int audit_session_port(au_asid_t asid, mach_port_name_t *portname);





# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucred.h" 2 3 4

struct label;


struct ucred;
struct posix_cred;



typedef struct ucred *kauth_cred_t;
typedef struct posix_cred *posix_cred_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ucred.h" 3 4
struct xucred {
 u_int cr_version;
 uid_t cr_uid;
 short cr_ngroups;
 gid_t cr_groups[16];
};
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 2 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 3 4
typedef u_int32_t text_encoding_t;

typedef u_int32_t fsobj_type_t;

typedef u_int32_t fsobj_tag_t;

typedef u_int32_t fsfile_type_t;

typedef u_int32_t fsvolid_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsobj_id_t.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsobj_id_t.h" 3 4
typedef struct fsobj_id {
 u_int32_t fid_objno;
 u_int32_t fid_generation;
} fsobj_id_t;
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 2 3 4

typedef u_int32_t attrgroup_t;

struct attrlist {
 u_short bitmapcount;
 u_int16_t reserved;
 attrgroup_t commonattr;
 attrgroup_t volattr;
 attrgroup_t dirattr;
 attrgroup_t fileattr;
 attrgroup_t forkattr;
};


typedef struct attribute_set {
 attrgroup_t commonattr;
 attrgroup_t volattr;
 attrgroup_t dirattr;
 attrgroup_t fileattr;
 attrgroup_t forkattr;
} attribute_set_t;

typedef struct attrreference {
 int32_t attr_dataoffset;
 u_int32_t attr_length;
} attrreference_t;



struct diskextent {
 u_int32_t startblock;
 u_int32_t blockcount;
};

typedef struct diskextent extentrecord[8];

typedef u_int32_t vol_capabilities_set_t[4];






typedef struct vol_capabilities_attr {
 vol_capabilities_set_t capabilities;
 vol_capabilities_set_t valid;
} vol_capabilities_attr_t;
# 366 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 3 4
typedef struct vol_attributes_attr {
 attribute_set_t validattr;
 attribute_set_t nativeattr;
} vol_attributes_attr_t;
# 563 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/attr.h" 3 4
struct fssearchblock {
 struct attrlist *returnattrs;
 void *returnbuffer;
 size_t returnbuffersize;
 u_long maxmatches;
 struct timeval timelimit;
 void *searchparams1;
 size_t sizeofsearchparams1;
 void *searchparams2;
 size_t sizeofsearchparams2;
 struct attrlist searchattrs;
};


struct searchstate {
 uint32_t ss_union_flags;
 uint32_t ss_union_layer;
 u_char ss_fsstate[548];
} __attribute__((packed));
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/os/base.h" 1 3 4
# 286 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/os/base.h" 3 4
typedef void (*os_function_t)(void *);
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/queue.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsid_t.h" 3 4
typedef struct fsid { int32_t val[2]; } fsid_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 2 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 3 4
struct statfs64 { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[16]; char f_mntonname[1024]; char f_mntfromname[1024]; uint32_t f_flags_ext; uint32_t f_reserved[7]; };





struct statfs { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[16]; char f_mntonname[1024]; char f_mntfromname[1024]; uint32_t f_flags_ext; uint32_t f_reserved[7]; };
# 161 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 3 4
#pragma pack(4)

struct vfsstatfs {
 uint32_t f_bsize;
 size_t f_iosize;
 uint64_t f_blocks;
 uint64_t f_bfree;
 uint64_t f_bavail;
 uint64_t f_bused;
 uint64_t f_files;
 uint64_t f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 uint64_t f_flags;
 char f_fstypename[16];
 char f_mntonname[1024];
 char f_mntfromname[1024];
 uint32_t f_fssubtype;
 void *f_reserved[2];
};

#pragma pack()
# 293 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 3 4
struct mount;
typedef struct mount * mount_t;
struct vnode;
typedef struct vnode * vnode_t;



struct vfsconf {
 uint32_t vfc_reserved1;
 char vfc_name[15];
 int vfc_typenum;
 int vfc_refcount;
 int vfc_flags;
 uint32_t vfc_reserved2;
 uint32_t vfc_reserved3;
};

struct vfsidctl {
 int vc_vers;
 fsid_t vc_fsid;
 void *vc_ptr;
 size_t vc_len;
 u_int32_t vc_spare[12];
};
# 349 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 3 4
struct vfsquery {
 u_int32_t vq_flags;
 u_int32_t vq_spare[31];
};

struct vfs_server {
 int32_t vs_minutes;
 u_int8_t vs_server_name[256 * 3];
};




struct netfs_status {
 u_int32_t ns_status;
 char ns_mountopts[512];
 uint32_t ns_waittime;
 uint32_t ns_threadcount;
 uint64_t ns_threadids[0];
};
# 399 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mount.h" 3 4
struct fhandle {
 unsigned int fh_len;
 unsigned char fh_data[128];
};
typedef struct fhandle fhandle_t;



int fhopen(const struct fhandle *, int);
int fstatfs(int, struct statfs *) __asm("_" "fstatfs" "$INODE64");

int fstatfs64(int, struct statfs64 *) ;

int getfh(const char *, fhandle_t *);
int getfsstat(struct statfs *, int, int) __asm("_" "getfsstat" "$INODE64");

int getfsstat64(struct statfs64 *, int, int) ;

int getmntinfo(struct statfs **, int) __asm("_" "getmntinfo" "$INODE64");
int getmntinfo_r_np(struct statfs **, int) __asm("_" "getmntinfo_r_np" "$INODE64")

 ;

int getmntinfo64(struct statfs64 **, int) ;

int mount(const char *, const char *, int, void *);
int fmount(const char *, int, int, void *) ;
int statfs(const char *, struct statfs *) __asm("_" "statfs" "$INODE64");

int statfs64(const char *, struct statfs64 *) ;

int unmount(const char *, int);
int getvfsbyname(const char *, struct vfsconf *);

# 32 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/filio.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/filio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioccom.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/filio.h" 2 3 4
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 3 4
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4






struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sockio.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4





int ioctl(int, unsigned long, ...);

# 35 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/uio.h" 1 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/uio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 3 4
struct iovec {
 void * iov_base;
 size_t iov_len;
};
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/uio.h" 2 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/uio.h" 3 4
enum uio_rw { UIO_READ, UIO_WRITE };





ssize_t readv(int, const struct iovec *, int) __asm("_" "readv" );
ssize_t writev(int, const struct iovec *, int) __asm("_" "writev" );



ssize_t preadv(int, const struct iovec *, int, off_t) __asm("_" "preadv" ) ;
ssize_t pwritev(int, const struct iovec *, int, off_t) __asm("_" "pwritev" ) ;




# 36 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 242 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 378 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4


int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int lstat(const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" "$INODE64");
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) ;
int fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" "$INODE64") ;
int mkdirat(int, const char *, mode_t) ;




int futimens(int __fd, const struct timespec __times[2]) ;
int utimensat(int __fd, const char *__path, const struct timespec __times[2],
    int __flag) ;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 406 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int lchflags(const char *, __uint32_t) ;
int lchmod(const char *, mode_t) ;
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int umaskx_np(filesec_t) ;



int fstatx64_np(int, struct stat64 *, filesec_t) ;
int lstatx64_np(const char *, struct stat64 *, filesec_t) ;
int statx64_np(const char *, struct stat64 *, filesec_t) ;
int fstat64(int, struct stat64 *) ;
int lstat64(const char *, struct stat64 *) ;
int stat64(const char *, struct stat64 *) ;




# 37 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 1 3 4
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 326 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 350 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
# 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flocktimeout {
 struct flock fl;
 struct timespec timeout;
};
# 378 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct radvisory {
 off_t ra_offset;
 int ra_count;
};
# 391 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;



 size_t fs_fsignatures_size;
 char fs_cdhash[20];
 int fs_hash_type;
} fsignatures_t;

typedef struct fsupplement {
 off_t fs_file_start;
 off_t fs_blob_start;
 size_t fs_blob_size;
 int fs_orig_fd;
} fsupplement_t;
# 422 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fchecklv {
 off_t lv_file_start;
 size_t lv_error_message_size;
 void *lv_error_message;
} fchecklv_t;
# 436 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fgetsigsinfo {
 off_t fg_file_start;
 int fg_info_request;
 int fg_sig_is_platform;
} fgetsigsinfo_t;
# 451 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef struct fstore {
 unsigned int fst_flags;
 int fst_posmode;
 off_t fst_offset;
 off_t fst_length;
 off_t fst_bytesalloc;
} fstore_t;


typedef struct fpunchhole {
 unsigned int fp_flags;
 unsigned int reserved;
 off_t fp_offset;
 off_t fp_length;
} fpunchhole_t;


typedef struct ftrimactivefile {
 off_t fta_offset;
 off_t fta_length;
} ftrimactivefile_t;


typedef struct fspecread {
 unsigned int fsr_flags;
 unsigned int reserved;
 off_t fsr_offset;
 off_t fsr_length;
} fspecread_t;



typedef struct fbootstraptransfer {
 off_t fbt_offset;
 size_t fbt_length;
 void *fbt_buffer;
} fbootstraptransfer_t;
# 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#pragma pack(4)

struct log2phys {
 unsigned int l2p_flags;
 off_t l2p_contigbytes;


 off_t l2p_devoffset;


};

#pragma pack()
# 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
typedef enum {
 FILESEC_OWNER = 1,
 FILESEC_GROUP = 2,
 FILESEC_UUID = 3,
 FILESEC_MODE = 4,
 FILESEC_ACL = 5,
 FILESEC_GRPUUID = 6,


 FILESEC_ACL_RAW = 100,
 FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;






int open(const char *, int, ...) __asm("_" "open" );

int openat(int, const char *, int, ...) __asm("_" "openat" ) ;

int creat(const char *, mode_t) __asm("_" "creat" );
int fcntl(int, int, ...) __asm("_" "fcntl" );


int openx_np(const char *, int, filesec_t);




int open_dprotected_np( const char *, int, int, int, ...);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_unset_property(filesec_t, filesec_property_t) ;




# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 2 3 4
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mman.h" 1 3 4
# 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/mman.h" 3 4


int mlockall(int);
int munlockall(void);

int mlock(const void *, size_t);



void * mmap(void *, size_t, int, int, int, off_t) __asm("_" "mmap" );


int mprotect(void *, size_t, int) __asm("_" "mprotect" );

int msync(void *, size_t, int) __asm("_" "msync" );

int munlock(const void *, size_t);

int munmap(void *, size_t) __asm("_" "munmap" );

int shm_open(const char *, int, ...);
int shm_unlink(const char *);

int posix_madvise(void *, size_t, int);


int madvise(void *, size_t, int);
int mincore(const void *, size_t, char *);
int minherit(void *, size_t, int);




# 41 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sched.h" 1 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sched.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/pthread_impl.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sched.h" 2 3 4






struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);

# 43 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 1 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/net/net_kev.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 3 4
typedef __uint8_t sa_family_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 3 4
typedef __darwin_socklen_t socklen_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
typedef __uint32_t sae_associd_t;



typedef __uint32_t sae_connid_t;
# 303 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
typedef struct sa_endpoints {
 unsigned int sae_srcif;
 const struct sockaddr *sae_srcaddr;
 socklen_t sae_srcaddrlen;
 const struct sockaddr *sae_dstaddr;
 socklen_t sae_dstaddrlen;
} sa_endpoints_t;





struct linger {
 int l_onoff;
 int l_linger;
};
# 333 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct so_np_extensions {
 u_int32_t npx_flags;
 u_int32_t npx_mask;
};
# 408 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockaddr {
 __uint8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 421 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockproto {
 __uint16_t sp_family;
 __uint16_t sp_protocol;
};
# 441 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sockaddr_storage {
 __uint8_t ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128 - sizeof(__uint8_t) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
# 548 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 687 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};







int accept(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "accept" );
int bind(int, const struct sockaddr *, socklen_t) __asm("_" "bind" );
int connect(int, const struct sockaddr *, socklen_t) __asm("_" "connect" );
int getpeername(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getpeername" );
int getsockname(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getsockname" );
int getsockopt(int, int, int, void * restrict, socklen_t * restrict);
int listen(int, int) __asm("_" "listen" );
ssize_t recv(int, void *, size_t, int) __asm("_" "recv" );
ssize_t recvfrom(int, void *, size_t, int, struct sockaddr * restrict,
    socklen_t * restrict) __asm("_" "recvfrom" );
ssize_t recvmsg(int, struct msghdr *, int) __asm("_" "recvmsg" );
ssize_t send(int, const void *, size_t, int) __asm("_" "send" );
ssize_t sendmsg(int, const struct msghdr *, int) __asm("_" "sendmsg" );
ssize_t sendto(int, const void *, size_t,
    int, const struct sockaddr *, socklen_t) __asm("_" "sendto" );
int setsockopt(int, int, int, const void *, socklen_t);
int shutdown(int, int);
int sockatmark(int) ;
int socket(int, int, int);
int socketpair(int, int, int, int *) __asm("_" "socketpair" );


int sendfile(int, int, off_t, off_t *, struct sf_hdtr *, int);



void pfctlinput(int, struct sockaddr *);


int connectx(int, const sa_endpoints_t *, sae_associd_t, unsigned int,
    const struct iovec *, unsigned int, size_t *, sae_connid_t *);


int disconnectx(int, sae_associd_t, sae_connid_t);


# 45 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 1 3 4
# 301 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct in_addr {
 in_addr_t s_addr;
};
# 375 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct sockaddr_in {
 __uint8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};
# 398 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct ip_opts {
 struct in_addr ip_dst;
 char ip_opts[40];
};
# 507 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};






struct ip_mreqn {
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

#pragma pack(4)



struct ip_mreq_source {
 struct in_addr imr_multiaddr;
 struct in_addr imr_sourceaddr;
 struct in_addr imr_interface;
};





struct group_req {
 uint32_t gr_interface;
 struct sockaddr_storage gr_group;
};

struct group_source_req {
 uint32_t gsr_interface;
 struct sockaddr_storage gsr_group;
 struct sockaddr_storage gsr_source;
};
# 555 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct __msfilterreq {
 uint32_t msfr_ifindex;
 uint32_t msfr_fmode;
 uint32_t msfr_nsrcs;
 uint32_t __msfr_align;
 struct sockaddr_storage msfr_group;
 struct sockaddr_storage *msfr_srcs;
};



#pragma pack()
struct sockaddr;






int setipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t,
    uint32_t, struct in_addr *) ;
int getipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t *,
    uint32_t *, struct in_addr *) ;
int setsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t, uint32_t, struct sockaddr_storage *) ;
int getsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t *, uint32_t *, struct sockaddr_storage *) ;
# 618 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
struct in_pktinfo {
 unsigned int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 1 3 4
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
typedef struct in6_addr {
 union {
  __uint8_t __u6_addr8[16];
  __uint16_t __u6_addr16[8];
  __uint32_t __u6_addr32[4];
 } __u6_addr;
} in6_addr_t;
# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
struct sockaddr_in6 {
 __uint8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 __uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 __uint32_t sin6_scope_id;
};
# 214 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;

extern const struct in6_addr in6addr_nodelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;
extern const struct in6_addr in6addr_linklocal_allv2routers;
# 541 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};




struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 uint32_t ip6m_mtu;
};
# 639 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet6/in6.h" 3 4

struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const __uint8_t *, int, int);
extern __uint8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, __uint8_t **);
extern int inet6_option_find(const struct cmsghdr *, __uint8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
    unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, __uint8_t, socklen_t,
    __uint8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);

extern int inet6_opt_next(void *, socklen_t, int, __uint8_t *, socklen_t *,
    void **);
extern int inet6_opt_find(void *, socklen_t, int, __uint8_t, socklen_t *,
    void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, const struct in6_addr *);
extern int inet6_rth_reverse(const void *, void *);
extern int inet6_rth_segments(const void *);
extern struct in6_addr *inet6_rth_getaddr(const void *, int);


# 661 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/in.h" 2 3 4






int bindresvport(int, struct sockaddr_in *);
struct sockaddr;
int bindresvport_sa(int, struct sockaddr *);

# 46 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
typedef __uint32_t tcp_seq;
typedef __uint32_t tcp_cc;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
struct tcphdr {
 unsigned short th_sport;
 unsigned short th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 unsigned int th_x2:4,
     th_off:4;





 unsigned char th_flags;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
 unsigned short th_win;
 unsigned short th_sum;
 unsigned short th_urp;
};
# 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netinet/tcp.h" 3 4
struct tcp_connection_info {
 u_int8_t tcpi_state;
 u_int8_t tcpi_snd_wscale;
 u_int8_t tcpi_rcv_wscale;
 u_int8_t __pad1;
 u_int32_t tcpi_options;




 u_int32_t tcpi_flags;


 u_int32_t tcpi_rto;
 u_int32_t tcpi_maxseg;
 u_int32_t tcpi_snd_ssthresh;
 u_int32_t tcpi_snd_cwnd;
 u_int32_t tcpi_snd_wnd;
 u_int32_t tcpi_snd_sbbytes;
 u_int32_t tcpi_rcv_wnd;
 u_int32_t tcpi_rttcur;
 u_int32_t tcpi_srtt;
 u_int32_t tcpi_rttvar;
 u_int32_t
     tcpi_tfo_cookie_req:1,
     tcpi_tfo_cookie_rcv:1,
     tcpi_tfo_syn_loss:1,
     tcpi_tfo_syn_data_sent:1,
     tcpi_tfo_syn_data_acked:1,
     tcpi_tfo_syn_data_rcv:1,
     tcpi_tfo_cookie_req_rcv:1,
     tcpi_tfo_cookie_sent:1,
     tcpi_tfo_cookie_invalid:1,
     tcpi_tfo_cookie_wrong:1,
     tcpi_tfo_no_cookie_rcv:1,
     tcpi_tfo_heuristics_disable:1,
     tcpi_tfo_send_blackhole:1,
     tcpi_tfo_recv_blackhole:1,
     tcpi_tfo_onebyte_proxy:1,
     __pad2:17;
 u_int64_t tcpi_txpackets __attribute__((aligned(8)));
 u_int64_t tcpi_txbytes __attribute__((aligned(8)));
 u_int64_t tcpi_txretransmitbytes __attribute__((aligned(8)));
 u_int64_t tcpi_rxpackets __attribute__((aligned(8)));
 u_int64_t tcpi_rxbytes __attribute__((aligned(8)));
 u_int64_t tcpi_rxoutoforderbytes __attribute__((aligned(8)));
 u_int64_t tcpi_txretransmitpackets __attribute__((aligned(8)));
};
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/arpa/inet.h" 3 4


in_addr_t inet_addr(const char *);
char *inet_ntoa(struct in_addr);
const char *inet_ntop(int, const void *, char *, socklen_t);
int inet_pton(int, const char *, void *);


int ascii2addr(int, const char *, void *);
char *addr2ascii(int, const void *, int, char *);
int inet_aton(const char *, struct in_addr *);
in_addr_t inet_lnaof(struct in_addr);
struct in_addr inet_makeaddr(in_addr_t, in_addr_t);
in_addr_t inet_netof(struct in_addr);
in_addr_t inet_network(const char *);
char *inet_net_ntop(int, const void *, int, char *, __darwin_size_t);
int inet_net_pton(int, const char *, void *, __darwin_size_t);
char *inet_neta(in_addr_t, char *, __darwin_size_t);
unsigned int inet_nsap_addr(const char *, unsigned char *, int);
char *inet_nsap_ntoa(int, const unsigned char *, char *);



# 48 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4
extern int h_errno;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4
struct hostent {
 char *h_name;
 char **h_aliases;
 int h_addrtype;
 int h_length;
 char **h_addr_list;



};





struct netent {
 char *n_name;
 char **n_aliases;
 int n_addrtype;
 uint32_t n_net;
};

struct servent {
 char *s_name;
 char **s_aliases;
 int s_port;
 char *s_proto;
};

struct protoent {
 char *p_name;
 char **p_aliases;
 int p_proto;
};

struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 socklen_t ai_addrlen;
 char *ai_canonname;
 struct sockaddr *ai_addr;
 struct addrinfo *ai_next;
};


struct rpcent {
        char *r_name;
        char **r_aliases;
        int r_number;
};
# 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/netdb.h" 3 4


void endhostent(void);
void endnetent(void);
void endprotoent(void);
void endservent(void);

void freeaddrinfo(struct addrinfo *);
const char *gai_strerror(int);
int getaddrinfo(const char * restrict, const char * restrict,
       const struct addrinfo * restrict,
       struct addrinfo ** restrict);
struct hostent *gethostbyaddr(const void *, socklen_t, int);
struct hostent *gethostbyname(const char *);
struct hostent *gethostent(void);
int getnameinfo(const struct sockaddr * restrict, socklen_t,
         char * restrict, socklen_t, char * restrict,
         socklen_t, int);
struct netent *getnetbyaddr(uint32_t, int);
struct netent *getnetbyname(const char *);
struct netent *getnetent(void);
struct protoent *getprotobyname(const char *);
struct protoent *getprotobynumber(int);
struct protoent *getprotoent(void);
struct servent *getservbyname(const char *, const char *);
struct servent *getservbyport(int, const char *);
struct servent *getservent(void);
void sethostent(int);

void setnetent(int);
void setprotoent(int);
void setservent(int);


void freehostent(struct hostent *);
struct hostent *gethostbyname2(const char *, int);
struct hostent *getipnodebyaddr(const void *, size_t, int, int *);
struct hostent *getipnodebyname(const char *, int, int, int *);
struct rpcent *getrpcbyname(const char *name);

struct rpcent *getrpcbynumber(int number);



struct rpcent *getrpcent(void);
void setrpcent(int stayopen);
void endrpcent(void);
void herror(const char *);
const char *hstrerror(int);
int innetgr(const char *, const char *, const char *, const char *);
int getnetgrent(char **, char **, char **);
void endnetgrent(void);
void setnetgrent(const char *);



# 49 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/un.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/un.h" 3 4
struct sockaddr_un {
 unsigned char sun_len;
 sa_family_t sun_family;
 char sun_path[104];
};
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/proc.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/proc.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/lock.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/proc.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 1 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 3 4
#pragma pack(4)

struct kevent {
 uintptr_t ident;
 int16_t filter;
 uint16_t flags;
 uint32_t fflags;
 intptr_t data;
 void *udata;
};


#pragma pack()

struct kevent64_s {
 uint64_t ident;
 int16_t filter;
 uint16_t flags;
 uint32_t fflags;
 int64_t data;
 uint64_t udata;
 uint64_t ext[2];
};
# 256 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 3 4
enum {
 eNoteReapDeprecated = 0x10000000
};
# 274 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 3 4
enum {
 eNoteExitReparentedDeprecated = 0x00080000
};
# 370 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 3 4
struct knote;
 struct klist { struct knote *slh_first; } ;




struct timespec;


int kqueue(void);
int kevent(int kq,
    const struct kevent *changelist, int nchanges,
    struct kevent *eventlist, int nevents,
    const struct timespec *timeout);
int kevent64(int kq,
    const struct kevent64_s *changelist, int nchanges,
    struct kevent64_s *eventlist, int nevents,
    unsigned int flags,
    const struct timespec *timeout);



# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/proc.h" 2 3 4







struct session;
struct pgrp;
struct proc;
struct proc_ident;


struct extern_proc {
 union {
  struct {
   struct proc *__p_forw;
   struct proc *__p_back;
  } p_st1;
  struct timeval __p_starttime;
 } p_un;



 struct vmspace *p_vmspace;
 struct sigacts *p_sigacts;
 int p_flag;
 char p_stat;
 pid_t p_pid;
 pid_t p_oppid;
 int p_dupfd;

 caddr_t user_stack;
 void *exit_thread;
 int p_debugger;
 boolean_t sigwait;

 u_int p_estcpu;
 int p_cpticks;
 fixpt_t p_pctcpu;
 void *p_wchan;
 char *p_wmesg;
 u_int p_swtime;
 u_int p_slptime;
 struct itimerval p_realtimer;
 struct timeval p_rtime;
 u_quad_t p_uticks;
 u_quad_t p_sticks;
 u_quad_t p_iticks;
 int p_traceflag;
 struct vnode *p_tracep;
 int p_siglist;
 struct vnode *p_textvp;
 int p_holdcnt;
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;
 u_char p_priority;
 u_char p_usrpri;
 char p_nice;
 char p_comm[16 + 1];
 struct pgrp *p_pgrp;
 struct user *p_addr;
 u_short p_xstat;
 u_short p_acflag;
 struct rusage *p_ru;
};
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/vm.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/vm.h" 3 4
struct vmspace {
 int32_t dummy;
 caddr_t dummy2;
 int32_t dummy3[5];
 caddr_t dummy4[3];
};
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 2 3 4
# 133 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 3 4
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
# 449 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 3 4
struct _pcred {
 char pc_lock[72];
 struct ucred *pc_ucred;
 uid_t p_ruid;
 uid_t p_svuid;
 gid_t p_rgid;
 gid_t p_svgid;
 int p_refcnt;
};

struct _ucred {
 int32_t cr_ref;
 uid_t cr_uid;
 short cr_ngroups;
 gid_t cr_groups[16];
};

struct kinfo_proc {
 struct extern_proc kp_proc;
 struct eproc {
  struct proc *e_paddr;
  struct session *e_sess;
  struct _pcred e_pcred;
  struct _ucred e_ucred;
  struct vmspace e_vm;
  pid_t e_ppid;
  pid_t e_pgid;
  short e_jobc;
  dev_t e_tdev;
  pid_t e_tpgid;
  struct session *e_tsess;

  char e_wmesg[7 + 1];
  segsz_t e_xsize;
  short e_xrssize;
  short e_xccount;
  short e_xswrss;
  int32_t e_flag;



  char e_login[12];
  int32_t e_spare[4];
 } kp_eproc;
};
# 533 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 3 4
struct xsw_usage {
 u_int64_t xsu_total;
 u_int64_t xsu_avail;
 u_int64_t xsu_used;
 u_int32_t xsu_pagesize;
 boolean_t xsu_encrypted;
};




struct loadavg {
 fixpt_t ldavg[3];
 long fscale;
};
extern struct loadavg averunnable;
# 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sysctl.h" 3 4

int sysctl(int *, u_int, void *, size_t *, void *, size_t);
int sysctlbyname(const char *, void *, size_t *, void *, size_t);
int sysctlnametomib(const char *, int *, size_t *);

# 52 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_locale.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_locale.h" 3 4
struct lconv {
 char *decimal_point;
 char *thousands_sep;
 char *grouping;
 char *int_curr_symbol;
 char *currency_symbol;
 char *mon_decimal_point;
 char *mon_thousands_sep;
 char *mon_grouping;
 char *positive_sign;
 char *negative_sign;
 char int_frac_digits;
 char frac_digits;
 char p_cs_precedes;
 char p_sep_by_space;
 char n_cs_precedes;
 char n_sep_by_space;
 char p_sign_posn;
 char n_sign_posn;
 char int_p_cs_precedes;
 char int_n_cs_precedes;
 char int_p_sep_by_space;
 char int_n_sep_by_space;
 char int_p_sign_posn;
 char int_n_sign_posn;
};




struct lconv *localeconv(void);

# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_xlocale.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_xlocale.h" 3 4
struct _xlocale;
typedef struct _xlocale * locale_t;


int ___mb_cur_max(void);
int ___mb_cur_max_l(locale_t);

# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4

extern const locale_t _c_locale;

locale_t duplocale(locale_t);
int freelocale(locale_t);
struct lconv * localeconv_l(locale_t);
locale_t newlocale(int, const char *, locale_t);
const char * querylocale(int, locale_t);
locale_t uselocale(locale_t);



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_ctype.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_ctype.h" 3 4

unsigned long ___runetype_l(__darwin_ct_rune_t, locale_t);
__darwin_ct_rune_t ___tolower_l(__darwin_ct_rune_t, locale_t);
__darwin_ct_rune_t ___toupper_l(__darwin_ct_rune_t, locale_t);



int __maskrune_l(__darwin_ct_rune_t, unsigned long, locale_t);


extern __inline __attribute__((__gnu_inline__)) int
__istype_l(__darwin_ct_rune_t _c, unsigned long _f, locale_t _l)
{
 return !!(isascii(_c) ? (_DefaultRuneLocale.__runetype[_c] & _f)
  : __maskrune_l(_c, _f, _l));
}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__toupper_l(__darwin_ct_rune_t _c, locale_t _l)
{
 return isascii(_c) ? _DefaultRuneLocale.__mapupper[_c]
  : ___toupper_l(_c, _l);
}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__tolower_l(__darwin_ct_rune_t _c, locale_t _l)
{
 return isascii(_c) ? _DefaultRuneLocale.__maplower[_c]
  : ___tolower_l(_c, _l);
}

extern __inline __attribute__((__gnu_inline__)) int
__wcwidth_l(__darwin_ct_rune_t _c, locale_t _l)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune_l(_c, 0xe0000000L|0x00040000L, _l);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}



extern __inline __attribute__((__gnu_inline__)) int
digittoint_l(int c, locale_t l)
{
 return (__maskrune_l(c, 0x0F, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isalnum_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000100L|0x00000400L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isalpha_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000100L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isblank_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00020000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
iscntrl_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000200L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isdigit_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000400L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isgraph_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000800L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
ishexnumber_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00010000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isideogram_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00080000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
islower_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00001000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isnumber_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00000400L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isphonogram_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00200000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isprint_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00040000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
ispunct_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00002000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isrune_l(int c, locale_t l)
{
 return (__istype_l(c, 0xFFFFFFF0L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isspace_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00004000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isspecial_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00100000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isupper_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00008000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
isxdigit_l(int c, locale_t l)
{
 return (__istype_l(c, 0x00010000L, l));
}

extern __inline __attribute__((__gnu_inline__)) int
tolower_l(int c, locale_t l)
{
        return (__tolower_l(c, l));
}

extern __inline __attribute__((__gnu_inline__)) int
toupper_l(int c, locale_t l)
{
        return (__toupper_l(c, l));
}
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_inttypes.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_inttypes.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_inttypes.h" 2 3 4



intmax_t strtoimax_l(const char * restrict nptr, char ** restrict endptr,
  int base, locale_t);
uintmax_t strtoumax_l(const char * restrict nptr, char ** restrict endptr,
  int base, locale_t);
intmax_t wcstoimax_l(const wchar_t * restrict nptr,
  wchar_t ** restrict endptr, int base, locale_t);
uintmax_t wcstoumax_l(const wchar_t * restrict nptr,
  wchar_t ** restrict endptr, int base, locale_t);






# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdio.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdio.h" 3 4


int fprintf_l(FILE * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)));
int fscanf_l(FILE * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 3, 4)));
int printf_l(locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 2, 3)));
int scanf_l(locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 2, 3)));
int sprintf_l(char * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4))) ;
int sscanf_l(const char * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 3, 4)));
int vfprintf_l(FILE * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)));
int vprintf_l(locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 2, 0)));
int vsprintf_l(char * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0))) ;


int snprintf_l(char * restrict, size_t, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 4, 5)));
int vfscanf_l(FILE * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 3, 0)));
int vscanf_l(locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 2, 0)));
int vsnprintf_l(char * restrict, size_t, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 4, 0)));
int vsscanf_l(const char * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 3, 0)));



int dprintf_l(int, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4))) ;
int vdprintf_l(int, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0))) ;




int asprintf_l(char ** restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)));
int vasprintf_l(char ** restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)));



# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdlib.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_stdlib.h" 2 3 4



double atof_l(const char *, locale_t);
int atoi_l(const char *, locale_t);
long atol_l(const char *, locale_t);

long long
  atoll_l(const char *, locale_t);

int mblen_l(const char *, size_t, locale_t);
size_t mbstowcs_l(wchar_t * restrict , const char * restrict, size_t,
     locale_t);
int mbtowc_l(wchar_t * restrict, const char * restrict, size_t,
     locale_t);
double strtod_l(const char *, char **, locale_t) __asm("_" "strtod_l" );
float strtof_l(const char *, char **, locale_t) __asm("_" "strtof_l" );
long strtol_l(const char *, char **, int, locale_t);
long double
  strtold_l(const char *, char **, locale_t);
long long
  strtoll_l(const char *, char **, int, locale_t);

long long
  strtoq_l(const char *, char **, int, locale_t);

unsigned long
  strtoul_l(const char *, char **, int, locale_t);
unsigned long long
  strtoull_l(const char *, char **, int, locale_t);

unsigned long long
  strtouq_l(const char *, char **, int, locale_t);

size_t wcstombs_l(char * restrict, const wchar_t * restrict, size_t,
     locale_t);
int wctomb_l(char *, wchar_t, locale_t);






# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_string.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_string.h" 3 4

int strcoll_l(const char *, const char *, locale_t);
size_t strxfrm_l(char *, const char *, size_t, locale_t);
int strcasecmp_l(const char *, const char *, locale_t);
char *strcasestr_l(const char *, const char *, locale_t);
int strncasecmp_l(const char *, const char *, size_t, locale_t);

# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_time.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale/_time.h" 3 4

size_t strftime_l(char * restrict, size_t, const char * restrict,
  const struct tm * restrict, locale_t)
  __asm("_" "strftime_l" ) __attribute__((__format__ (__strftime__, 3, 0)));
char *strptime_l(const char * restrict, const char * restrict,
  struct tm * restrict, locale_t)
  __asm("_" "strptime_l" ) __attribute__((__format__ (__strftime__, 2, 0)));

# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 2 3 4
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dlfcn.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dlfcn.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dlfcn.h" 2 3 4
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dlfcn.h" 3 4
typedef struct dl_info {
        const char *dli_fname;
        void *dli_fbase;
        const char *dli_sname;
        void *dli_saddr;
} Dl_info;

extern int dladdr(const void *, Dl_info *);




extern int dlclose(void * __handle) ;
extern char * dlerror(void) ;
extern void * dlopen(const char * __path, int __mode) ;
extern void * dlsym(void * __handle, const char * __symbol) ;


extern _Bool dlopen_preflight(const char* __path) ;
# 55 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/objs/ngx_auto_config.h" 1 3 4
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 2 3 4
# 97 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin_config.h" 3 4
extern char **environ;
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_config.h" 2 3 4
# 78 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_config.h" 3 4
typedef intptr_t ngx_int_t;
typedef uintptr_t ngx_uint_t;
typedef intptr_t ngx_flag_t;
# 9 "project/nginx/src/http/ngx_http_core_module.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 3 4
typedef struct ngx_module_s ngx_module_t;
typedef struct ngx_conf_s ngx_conf_t;
typedef struct ngx_cycle_s ngx_cycle_t;
typedef struct ngx_pool_s ngx_pool_t;
typedef struct ngx_chain_s ngx_chain_t;
typedef struct ngx_log_s ngx_log_t;
typedef struct ngx_open_file_s ngx_open_file_t;
typedef struct ngx_command_s ngx_command_t;
typedef struct ngx_file_s ngx_file_t;
typedef struct ngx_event_s ngx_event_t;
typedef struct ngx_event_aio_s ngx_event_aio_t;
typedef struct ngx_connection_s ngx_connection_t;
typedef struct ngx_thread_task_s ngx_thread_task_t;
typedef struct ngx_ssl_s ngx_ssl_t;
typedef struct ngx_proxy_protocol_s ngx_proxy_protocol_t;
typedef struct ngx_ssl_connection_s ngx_ssl_connection_t;
typedef struct ngx_udp_connection_s ngx_udp_connection_t;

typedef void (*ngx_event_handler_pt)(ngx_event_t *ev);
typedef void (*ngx_connection_handler_pt)(ngx_connection_t *c);
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_errno.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_errno.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_errno.h" 2 3 4


typedef int ngx_err_t;
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_errno.h" 3 4
u_char *ngx_strerror(ngx_err_t err, u_char *errstr, size_t size);
ngx_int_t ngx_strerror_init(void);
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_atomic.h" 1 3 4
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_atomic.h" 3 4
typedef long ngx_atomic_int_t;
typedef unsigned long ngx_atomic_uint_t;







typedef volatile ngx_atomic_uint_t ngx_atomic_t;
# 307 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_atomic.h" 3 4
void ngx_spinlock(ngx_atomic_t *lock, ngx_atomic_int_t value, ngx_uint_t spin);
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_thread.h" 1 3 4
# 49 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_rbtree.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_rbtree.h" 3 4
typedef ngx_uint_t ngx_rbtree_key_t;
typedef ngx_int_t ngx_rbtree_key_int_t;


typedef struct ngx_rbtree_node_s ngx_rbtree_node_t;

struct ngx_rbtree_node_s {
    ngx_rbtree_key_t key;
    ngx_rbtree_node_t *left;
    ngx_rbtree_node_t *right;
    ngx_rbtree_node_t *parent;
    u_char color;
    u_char data;
};


typedef struct ngx_rbtree_s ngx_rbtree_t;

typedef void (*ngx_rbtree_insert_pt) (ngx_rbtree_node_t *root,
    ngx_rbtree_node_t *node, ngx_rbtree_node_t *sentinel);

struct ngx_rbtree_s {
    ngx_rbtree_node_t *root;
    ngx_rbtree_node_t *sentinel;
    ngx_rbtree_insert_pt insert;
};
# 54 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_rbtree.h" 3 4
void ngx_rbtree_insert(ngx_rbtree_t *tree, ngx_rbtree_node_t *node);
void ngx_rbtree_delete(ngx_rbtree_t *tree, ngx_rbtree_node_t *node);
void ngx_rbtree_insert_value(ngx_rbtree_node_t *root, ngx_rbtree_node_t *node,
    ngx_rbtree_node_t *sentinel);
void ngx_rbtree_insert_timer_value(ngx_rbtree_node_t *root,
    ngx_rbtree_node_t *node, ngx_rbtree_node_t *sentinel);
ngx_rbtree_node_t *ngx_rbtree_next(ngx_rbtree_t *tree,
    ngx_rbtree_node_t *node);
# 76 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_rbtree.h" 3 4
static inline ngx_rbtree_node_t *
ngx_rbtree_min(ngx_rbtree_node_t *node, ngx_rbtree_node_t *sentinel)
{
    while (node->left != sentinel) {
        node = node->left;
    }

    return node;
}
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_time.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_time.h" 3 4
typedef ngx_rbtree_key_t ngx_msec_t;
typedef ngx_rbtree_key_int_t ngx_msec_int_t;

typedef struct tm ngx_tm_t;
# 56 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_time.h" 3 4
void ngx_timezone_update(void);
void ngx_localtime(time_t s, ngx_tm_t *tm);
void ngx_libc_localtime(time_t s, struct tm *tm);
void ngx_libc_gmtime(time_t s, struct tm *tm);
# 51 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_socket.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_socket.h" 3 4
typedef int ngx_socket_t;







int ngx_nonblocking(ngx_socket_t s);
int ngx_blocking(ngx_socket_t s);
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_socket.h" 3 4
int ngx_tcp_nopush(ngx_socket_t s);
int ngx_tcp_push(ngx_socket_t s);
# 52 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 3 4
typedef struct {
    size_t len;
    u_char *data;
} ngx_str_t;


typedef struct {
    ngx_str_t key;
    ngx_str_t value;
} ngx_keyval_t;


typedef struct {
    unsigned len:28;

    unsigned valid:1;
    unsigned no_cacheable:1;
    unsigned not_found:1;
    unsigned escape:1;

    u_char *data;
} ngx_variable_value_t;
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 3 4
void ngx_strlow(u_char *dst, u_char *src, size_t n);
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 3 4
size_t ngx_strnlen(u_char *p, size_t n);



static inline u_char *
ngx_strlchr(u_char *p, u_char *last, u_char c)
{
    while (p < last) {

        if (*p == c) {
            return p;
        }

        p++;
    }

    return ((void *)0);
}
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 3 4
void ngx_explicit_memzero(void *buf, size_t n);
# 151 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 3 4
u_char *ngx_cpystrn(u_char *dst, u_char *src, size_t n);
u_char *ngx_pstrdup(ngx_pool_t *pool, ngx_str_t *src);
u_char * ngx_sprintf(u_char *buf, const char *fmt, ...);
u_char * ngx_snprintf(u_char *buf, size_t max, const char *fmt, ...);
u_char * ngx_slprintf(u_char *buf, u_char *last, const char *fmt,
    ...);
u_char *ngx_vslprintf(u_char *buf, u_char *last, const char *fmt, va_list args);



ngx_int_t ngx_strcasecmp(u_char *s1, u_char *s2);
ngx_int_t ngx_strncasecmp(u_char *s1, u_char *s2, size_t n);

u_char *ngx_strnstr(u_char *s1, char *s2, size_t n);

u_char *ngx_strstrn(u_char *s1, char *s2, size_t n);
u_char *ngx_strcasestrn(u_char *s1, char *s2, size_t n);
u_char *ngx_strlcasestrn(u_char *s1, u_char *last, u_char *s2, size_t n);

ngx_int_t ngx_rstrncmp(u_char *s1, u_char *s2, size_t n);
ngx_int_t ngx_rstrncasecmp(u_char *s1, u_char *s2, size_t n);
ngx_int_t ngx_memn2cmp(u_char *s1, u_char *s2, size_t n1, size_t n2);
ngx_int_t ngx_dns_strcmp(u_char *s1, u_char *s2);
ngx_int_t ngx_filename_cmp(u_char *s1, u_char *s2, size_t n);

ngx_int_t ngx_atoi(u_char *line, size_t n);
ngx_int_t ngx_atofp(u_char *line, size_t n, size_t point);
ssize_t ngx_atosz(u_char *line, size_t n);
off_t ngx_atoof(u_char *line, size_t n);
time_t ngx_atotm(u_char *line, size_t n);
ngx_int_t ngx_hextoi(u_char *line, size_t n);

u_char *ngx_hex_dump(u_char *dst, u_char *src, size_t len);





void ngx_encode_base64(ngx_str_t *dst, ngx_str_t *src);
void ngx_encode_base64url(ngx_str_t *dst, ngx_str_t *src);
ngx_int_t ngx_decode_base64(ngx_str_t *dst, ngx_str_t *src);
ngx_int_t ngx_decode_base64url(ngx_str_t *dst, ngx_str_t *src);

uint32_t ngx_utf8_decode(u_char **p, size_t n);
size_t ngx_utf8_length(u_char *p, size_t n);
u_char *ngx_utf8_cpystrn(u_char *dst, u_char *src, size_t n, size_t len);
# 210 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_string.h" 3 4
uintptr_t ngx_escape_uri(u_char *dst, u_char *src, size_t size,
    ngx_uint_t type);
void ngx_unescape_uri(u_char **dst, u_char **src, size_t size, ngx_uint_t type);
uintptr_t ngx_escape_html(u_char *dst, u_char *src, size_t size);
uintptr_t ngx_escape_json(u_char *dst, u_char *src, size_t size);


typedef struct {
    ngx_rbtree_node_t node;
    ngx_str_t str;
} ngx_str_node_t;


void ngx_str_rbtree_insert_value(ngx_rbtree_node_t *temp,
    ngx_rbtree_node_t *node, ngx_rbtree_node_t *sentinel);
ngx_str_node_t *ngx_str_rbtree_lookup(ngx_rbtree_t *rbtree, ngx_str_t *name,
    uint32_t hash);


void ngx_sort(void *base, size_t n, size_t size,
    ngx_int_t (*cmp)(const void *, const void *));
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
typedef int ngx_fd_t;
typedef struct stat ngx_file_info_t;
typedef ino_t ngx_file_uniq_t;


typedef struct {
    u_char *name;
    size_t size;
    void *addr;
    ngx_fd_t fd;
    ngx_log_t *log;
} ngx_file_mapping_t;


typedef struct {
    DIR *dir;
    struct dirent *de;
    struct stat info;

    unsigned type:8;
    unsigned valid_info:1;
} ngx_dir_t;


typedef struct {
    size_t n;
    glob_t pglob;
    u_char *pattern;
    ngx_log_t *log;
    ngx_uint_t test;
} ngx_glob_t;
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
ngx_fd_t ngx_open_tempfile(u_char *name, ngx_uint_t persistent,
    ngx_uint_t access);



ssize_t ngx_read_file(ngx_file_t *file, u_char *buf, size_t size, off_t offset);






ssize_t ngx_write_file(ngx_file_t *file, u_char *buf, size_t size,
    off_t offset);

ssize_t ngx_write_chain_to_file(ngx_file_t *file, ngx_chain_t *ce,
    off_t offset, ngx_pool_t *pool);
# 144 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
static inline ssize_t
ngx_write_fd(ngx_fd_t fd, void *buf, size_t n)
{
    return write(fd, buf, n);
}
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
ngx_int_t ngx_set_file_time(u_char *name, ngx_fd_t fd, time_t s);
# 196 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
ngx_int_t ngx_create_file_mapping(ngx_file_mapping_t *fm);
void ngx_close_file_mapping(ngx_file_mapping_t *fm);
# 219 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
ngx_int_t ngx_open_dir(ngx_str_t *name, ngx_dir_t *dir);







ngx_int_t ngx_read_dir(ngx_dir_t *dir);
# 249 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
static inline ngx_int_t
ngx_de_info(u_char *name, ngx_dir_t *dir)
{
    dir->type = 0;
    return stat((const char *) name, &dir->info);
}
# 289 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
ngx_int_t ngx_open_glob(ngx_glob_t *gl);

ngx_int_t ngx_read_glob(ngx_glob_t *gl, ngx_str_t *name);
void ngx_close_glob(ngx_glob_t *gl);


ngx_err_t ngx_trylock_fd(ngx_fd_t fd);
ngx_err_t ngx_lock_fd(ngx_fd_t fd);
ngx_err_t ngx_unlock_fd(ngx_fd_t fd);
# 351 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_files.h" 3 4
size_t ngx_fs_bsize(u_char *name);
off_t ngx_fs_available(u_char *name);
# 54 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_shmem.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_shmem.h" 3 4
typedef struct {
    u_char *addr;
    size_t size;
    ngx_str_t name;
    ngx_log_t *log;
    ngx_uint_t exists;
} ngx_shm_t;


ngx_int_t ngx_shm_alloc(ngx_shm_t *shm);
void ngx_shm_free(ngx_shm_t *shm);
# 55 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setaffinity.h" 1 3 4
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setaffinity.h" 3 4
typedef uint64_t ngx_cpuset_t;
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setproctitle.h" 1 3 4
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_setproctitle.h" 3 4
ngx_int_t ngx_init_setproctitle(ngx_log_t *log);
void ngx_setproctitle(char *title);
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process.h" 2 3 4


typedef pid_t ngx_pid_t;



typedef void (*ngx_spawn_proc_pt) (ngx_cycle_t *cycle, void *data);

typedef struct {
    ngx_pid_t pid;
    int status;
    ngx_socket_t channel[2];

    ngx_spawn_proc_pt proc;
    void *data;
    char *name;

    unsigned respawn:1;
    unsigned just_spawn:1;
    unsigned detached:1;
    unsigned exiting:1;
    unsigned exited:1;
} ngx_process_t;


typedef struct {
    char *path;
    char *name;
    char *const *argv;
    char *const *envp;
} ngx_exec_ctx_t;
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process.h" 3 4
ngx_pid_t ngx_spawn_process(ngx_cycle_t *cycle,
    ngx_spawn_proc_pt proc, void *data, char *name, ngx_int_t respawn);
ngx_pid_t ngx_execute(ngx_cycle_t *cycle, ngx_exec_ctx_t *ctx);
ngx_int_t ngx_init_signals(ngx_log_t *log);
void ngx_debug_point(void);
# 78 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process.h" 3 4
extern int ngx_argc;
extern char **ngx_argv;
extern char **ngx_os_argv;

extern ngx_pid_t ngx_pid;
extern ngx_pid_t ngx_parent;
extern ngx_socket_t ngx_channel;
extern ngx_int_t ngx_process_slot;
extern ngx_int_t ngx_last_process;
extern ngx_process_t ngx_processes[1024];
# 56 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_user.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_user.h" 3 4
typedef uid_t ngx_uid_t;
typedef gid_t ngx_gid_t;


ngx_int_t ngx_libc_crypt(ngx_pool_t *pool, u_char *key, u_char *salt,
    u_char **encrypted);
# 57 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_dlopen.h" 1 3 4
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_dlopen.h" 3 4
char *ngx_dlerror(void);
# 58 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_parse.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_parse.h" 3 4
ssize_t ngx_parse_size(ngx_str_t *line);
off_t ngx_parse_offset(ngx_str_t *line);
ngx_int_t ngx_parse_time(ngx_str_t *line, ngx_uint_t is_sec);
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_parse_time.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_parse_time.h" 3 4
time_t ngx_parse_http_time(u_char *value, size_t len);
# 60 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_log.h" 1 3 4
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_log.h" 3 4
typedef u_char *(*ngx_log_handler_pt) (ngx_log_t *log, u_char *buf, size_t len);
typedef void (*ngx_log_writer_pt) (ngx_log_t *log, ngx_uint_t level,
    u_char *buf, size_t len);


struct ngx_log_s {
    ngx_uint_t log_level;
    ngx_open_file_t *file;

    ngx_atomic_uint_t connection;

    time_t disk_full_time;

    ngx_log_handler_pt handler;
    void *data;

    ngx_log_writer_pt writer;
    void *wdata;







    char *action;

    ngx_log_t *next;
};
# 88 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_log.h" 3 4
void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log, ngx_err_t err,
    const char *fmt, ...);
# 231 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_log.h" 3 4
ngx_log_t *ngx_log_init(u_char *prefix, u_char *error_log);
void ngx_log_abort(ngx_err_t err, const char *fmt, ...);
void ngx_log_stderr(ngx_err_t err, const char *fmt, ...);
u_char *ngx_log_errno(u_char *buf, u_char *last, ngx_err_t err);
ngx_int_t ngx_log_open_default(ngx_cycle_t *cycle);
ngx_int_t ngx_log_redirect_stderr(ngx_cycle_t *cycle);
ngx_log_t *ngx_log_get_file_log(ngx_log_t *head);
char *ngx_log_set_log(ngx_conf_t *cf, ngx_log_t **head);
# 250 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_log.h" 3 4
static inline void
ngx_write_stderr(char *text)
{
    (void) ngx_write_fd(2, text, strlen((const char *) text));
}


static inline void
ngx_write_stdout(char *text)
{
    (void) ngx_write_fd(1, text, strlen((const char *) text));
}


extern ngx_module_t ngx_errlog_module;
extern ngx_uint_t ngx_use_stderr;
# 61 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_alloc.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_alloc.h" 3 4
void *ngx_alloc(size_t size, ngx_log_t *log);
void *ngx_calloc(size_t size, ngx_log_t *log);
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_alloc.h" 3 4
void *ngx_memalign(size_t alignment, size_t size, ngx_log_t *log);
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_alloc.h" 3 4
extern ngx_uint_t ngx_pagesize;
extern ngx_uint_t ngx_pagesize_shift;
extern ngx_uint_t ngx_cacheline_size;
# 62 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_palloc.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_palloc.h" 3 4
typedef void (*ngx_pool_cleanup_pt)(void *data);

typedef struct ngx_pool_cleanup_s ngx_pool_cleanup_t;

struct ngx_pool_cleanup_s {
    ngx_pool_cleanup_pt handler;
    void *data;
    ngx_pool_cleanup_t *next;
};


typedef struct ngx_pool_large_s ngx_pool_large_t;

struct ngx_pool_large_s {
    ngx_pool_large_t *next;
    void *alloc;
};


typedef struct {
    u_char *last;
    u_char *end;
    ngx_pool_t *next;
    ngx_uint_t failed;
} ngx_pool_data_t;


struct ngx_pool_s {
    ngx_pool_data_t d;
    size_t max;
    ngx_pool_t *current;
    ngx_chain_t *chain;
    ngx_pool_large_t *large;
    ngx_pool_cleanup_t *cleanup;
    ngx_log_t *log;
};


typedef struct {
    ngx_fd_t fd;
    u_char *name;
    ngx_log_t *log;
} ngx_pool_cleanup_file_t;


ngx_pool_t *ngx_create_pool(size_t size, ngx_log_t *log);
void ngx_destroy_pool(ngx_pool_t *pool);
void ngx_reset_pool(ngx_pool_t *pool);

void *ngx_palloc(ngx_pool_t *pool, size_t size);
void *ngx_pnalloc(ngx_pool_t *pool, size_t size);
void *ngx_pcalloc(ngx_pool_t *pool, size_t size);
void *ngx_pmemalign(ngx_pool_t *pool, size_t size, size_t alignment);
ngx_int_t ngx_pfree(ngx_pool_t *pool, void *p);


ngx_pool_cleanup_t *ngx_pool_cleanup_add(ngx_pool_t *p, size_t size);
void ngx_pool_run_cleanup_file(ngx_pool_t *p, ngx_fd_t fd);
void ngx_pool_cleanup_file(void *data);
void ngx_pool_delete_file(void *data);
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_buf.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_buf.h" 3 4
typedef void * ngx_buf_tag_t;

typedef struct ngx_buf_s ngx_buf_t;

struct ngx_buf_s {
    u_char *pos;
    u_char *last;
    off_t file_pos;
    off_t file_last;

    u_char *start;
    u_char *end;
    ngx_buf_tag_t tag;
    ngx_file_t *file;
    ngx_buf_t *shadow;



    unsigned temporary:1;





    unsigned memory:1;


    unsigned mmap:1;

    unsigned recycled:1;
    unsigned in_file:1;
    unsigned flush:1;
    unsigned sync:1;
    unsigned last_buf:1;
    unsigned last_in_chain:1;

    unsigned last_shadow:1;
    unsigned temp_file:1;

               int num;
};


struct ngx_chain_s {
    ngx_buf_t *buf;
    ngx_chain_t *next;
};


typedef struct {
    ngx_int_t num;
    size_t size;
} ngx_bufs_t;


typedef struct ngx_output_chain_ctx_s ngx_output_chain_ctx_t;

typedef ngx_int_t (*ngx_output_chain_filter_pt)(void *ctx, ngx_chain_t *in);

typedef void (*ngx_output_chain_aio_pt)(ngx_output_chain_ctx_t *ctx,
    ngx_file_t *file);

struct ngx_output_chain_ctx_s {
    ngx_buf_t *buf;
    ngx_chain_t *in;
    ngx_chain_t *free;
    ngx_chain_t *busy;

    unsigned sendfile:1;
    unsigned directio:1;
    unsigned unaligned:1;
    unsigned need_in_memory:1;
    unsigned need_in_temp:1;
    unsigned aio:1;
# 101 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_buf.h" 3 4
    off_t alignment;

    ngx_pool_t *pool;
    ngx_int_t allocated;
    ngx_bufs_t bufs;
    ngx_buf_tag_t tag;

    ngx_output_chain_filter_pt output_filter;
    void *filter_ctx;
};


typedef struct {
    ngx_chain_t *out;
    ngx_chain_t **last;
    ngx_connection_t *connection;
    ngx_pool_t *pool;
    off_t limit;
} ngx_chain_writer_ctx_t;
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_buf.h" 3 4
ngx_buf_t *ngx_create_temp_buf(ngx_pool_t *pool, size_t size);
ngx_chain_t *ngx_create_chain_of_bufs(ngx_pool_t *pool, ngx_bufs_t *bufs);





ngx_chain_t *ngx_alloc_chain_link(ngx_pool_t *pool);






ngx_int_t ngx_output_chain(ngx_output_chain_ctx_t *ctx, ngx_chain_t *in);
ngx_int_t ngx_chain_writer(void *ctx, ngx_chain_t *in);

ngx_int_t ngx_chain_add_copy(ngx_pool_t *pool, ngx_chain_t **chain,
    ngx_chain_t *in);
ngx_chain_t *ngx_chain_get_free_buf(ngx_pool_t *p, ngx_chain_t **free);
void ngx_chain_update_chains(ngx_pool_t *p, ngx_chain_t **free,
    ngx_chain_t **busy, ngx_chain_t **out, ngx_buf_tag_t tag);

off_t ngx_chain_coalesce_file(ngx_chain_t **in, off_t limit);

ngx_chain_t *ngx_chain_update_sent(ngx_chain_t *in, off_t sent);
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_queue.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_queue.h" 3 4
typedef struct ngx_queue_s ngx_queue_t;

struct ngx_queue_s {
    ngx_queue_t *prev;
    ngx_queue_t *next;
};
# 107 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_queue.h" 3 4
ngx_queue_t *ngx_queue_middle(ngx_queue_t *queue);
void ngx_queue_sort(ngx_queue_t *queue,
    ngx_int_t (*cmp)(const ngx_queue_t *, const ngx_queue_t *));
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_array.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_array.h" 3 4
typedef struct {
    void *elts;
    ngx_uint_t nelts;
    size_t size;
    ngx_uint_t nalloc;
    ngx_pool_t *pool;
} ngx_array_t;


ngx_array_t *ngx_array_create(ngx_pool_t *p, ngx_uint_t n, size_t size);
void ngx_array_destroy(ngx_array_t *a);
void *ngx_array_push(ngx_array_t *a);
void *ngx_array_push_n(ngx_array_t *a, ngx_uint_t n);


static inline ngx_int_t
ngx_array_init(ngx_array_t *array, ngx_pool_t *pool, ngx_uint_t n, size_t size)
{





    array->nelts = 0;
    array->size = size;
    array->nalloc = n;
    array->pool = pool;

    array->elts = ngx_palloc(pool, n * size);
    if (array->elts == ((void *)0)) {
        return -1;
    }

    return 0;
}
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_list.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_list.h" 3 4
typedef struct ngx_list_part_s ngx_list_part_t;

struct ngx_list_part_s {
    void *elts;
    ngx_uint_t nelts;
    ngx_list_part_t *next;
};


typedef struct {
    ngx_list_part_t *last;
    ngx_list_part_t part;
    size_t size;
    ngx_uint_t nalloc;
    ngx_pool_t *pool;
} ngx_list_t;


ngx_list_t *ngx_list_create(ngx_pool_t *pool, ngx_uint_t n, size_t size);

static inline ngx_int_t
ngx_list_init(ngx_list_t *list, ngx_pool_t *pool, ngx_uint_t n, size_t size)
{
    list->part.elts = ngx_palloc(pool, n * size);
    if (list->part.elts == ((void *)0)) {
        return -1;
    }

    list->part.nelts = 0;
    list->part.next = ((void *)0);
    list->last = &list->part;
    list->size = size;
    list->nalloc = n;
    list->pool = pool;

    return 0;
}
# 80 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_list.h" 3 4
void *ngx_list_push(ngx_list_t *list);
# 67 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_hash.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_hash.h" 3 4
typedef struct {
    void *value;
    u_short len;
    u_char name[1];
} ngx_hash_elt_t;


typedef struct {
    ngx_hash_elt_t **buckets;
    ngx_uint_t size;
} ngx_hash_t;


typedef struct {
    ngx_hash_t hash;
    void *value;
} ngx_hash_wildcard_t;


typedef struct {
    ngx_str_t key;
    ngx_uint_t key_hash;
    void *value;
} ngx_hash_key_t;


typedef ngx_uint_t (*ngx_hash_key_pt) (u_char *data, size_t len);


typedef struct {
    ngx_hash_t hash;
    ngx_hash_wildcard_t *wc_head;
    ngx_hash_wildcard_t *wc_tail;
} ngx_hash_combined_t;


typedef struct {
    ngx_hash_t *hash;
    ngx_hash_key_pt key;

    ngx_uint_t max_size;
    ngx_uint_t bucket_size;

    char *name;
    ngx_pool_t *pool;
    ngx_pool_t *temp_pool;
} ngx_hash_init_t;
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_hash.h" 3 4
typedef struct {
    ngx_uint_t hsize;

    ngx_pool_t *pool;
    ngx_pool_t *temp_pool;

    ngx_array_t keys;
    ngx_array_t *keys_hash;

    ngx_array_t dns_wc_head;
    ngx_array_t *dns_wc_head_hash;

    ngx_array_t dns_wc_tail;
    ngx_array_t *dns_wc_tail_hash;
} ngx_hash_keys_arrays_t;


typedef struct {
    ngx_uint_t hash;
    ngx_str_t key;
    ngx_str_t value;
    u_char *lowcase_key;
} ngx_table_elt_t;


void *ngx_hash_find(ngx_hash_t *hash, ngx_uint_t key, u_char *name, size_t len);
void *ngx_hash_find_wc_head(ngx_hash_wildcard_t *hwc, u_char *name, size_t len);
void *ngx_hash_find_wc_tail(ngx_hash_wildcard_t *hwc, u_char *name, size_t len);
void *ngx_hash_find_combined(ngx_hash_combined_t *hash, ngx_uint_t key,
    u_char *name, size_t len);

ngx_int_t ngx_hash_init(ngx_hash_init_t *hinit, ngx_hash_key_t *names,
    ngx_uint_t nelts);
ngx_int_t ngx_hash_wildcard_init(ngx_hash_init_t *hinit, ngx_hash_key_t *names,
    ngx_uint_t nelts);


ngx_uint_t ngx_hash_key(u_char *data, size_t len);
ngx_uint_t ngx_hash_key_lc(u_char *data, size_t len);
ngx_uint_t ngx_hash_strlow(u_char *dst, u_char *src, size_t n);


ngx_int_t ngx_hash_keys_array_init(ngx_hash_keys_arrays_t *ha, ngx_uint_t type);
ngx_int_t ngx_hash_add_key(ngx_hash_keys_arrays_t *ha, ngx_str_t *key,
    void *value, ngx_uint_t flags);
# 68 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_file.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_file.h" 3 4
struct ngx_file_s {
    ngx_fd_t fd;
    ngx_str_t name;
    ngx_file_info_t info;

    off_t offset;
    off_t sys_offset;

    ngx_log_t *log;
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_file.h" 3 4
    unsigned valid_info:1;
    unsigned directio:1;
};





typedef ngx_msec_t (*ngx_path_manager_pt) (void *data);
typedef ngx_msec_t (*ngx_path_purger_pt) (void *data);
typedef void (*ngx_path_loader_pt) (void *data);


typedef struct {
    ngx_str_t name;
    size_t len;
    size_t level[3];

    ngx_path_manager_pt manager;
    ngx_path_purger_pt purger;
    ngx_path_loader_pt loader;
    void *data;

    u_char *conf_file;
    ngx_uint_t line;
} ngx_path_t;


typedef struct {
    ngx_str_t name;
    size_t level[3];
} ngx_path_init_t;


typedef struct {
    ngx_file_t file;
    off_t offset;
    ngx_path_t *path;
    ngx_pool_t *pool;
    char *warn;

    ngx_uint_t access;

    unsigned log_level:8;
    unsigned persistent:1;
    unsigned clean:1;
    unsigned thread_write:1;
} ngx_temp_file_t;


typedef struct {
    ngx_uint_t access;
    ngx_uint_t path_access;
    time_t time;
    ngx_fd_t fd;

    unsigned create_path:1;
    unsigned delete_file:1;

    ngx_log_t *log;
} ngx_ext_rename_file_t;


typedef struct {
    off_t size;
    size_t buf_size;

    ngx_uint_t access;
    time_t time;

    ngx_log_t *log;
} ngx_copy_file_t;


typedef struct ngx_tree_ctx_s ngx_tree_ctx_t;

typedef ngx_int_t (*ngx_tree_init_handler_pt) (void *ctx, void *prev);
typedef ngx_int_t (*ngx_tree_handler_pt) (ngx_tree_ctx_t *ctx, ngx_str_t *name);

struct ngx_tree_ctx_s {
    off_t size;
    off_t fs_size;
    ngx_uint_t access;
    time_t mtime;

    ngx_tree_init_handler_pt init_handler;
    ngx_tree_handler_pt file_handler;
    ngx_tree_handler_pt pre_tree_handler;
    ngx_tree_handler_pt post_tree_handler;
    ngx_tree_handler_pt spec_handler;

    void *data;
    size_t alloc;

    ngx_log_t *log;
};


ngx_int_t ngx_get_full_name(ngx_pool_t *pool, ngx_str_t *prefix,
    ngx_str_t *name);

ssize_t ngx_write_chain_to_temp_file(ngx_temp_file_t *tf, ngx_chain_t *chain);
ngx_int_t ngx_create_temp_file(ngx_file_t *file, ngx_path_t *path,
    ngx_pool_t *pool, ngx_uint_t persistent, ngx_uint_t clean,
    ngx_uint_t access);
void ngx_create_hashed_filename(ngx_path_t *path, u_char *file, size_t len);
ngx_int_t ngx_create_path(ngx_file_t *file, ngx_path_t *path);
ngx_err_t ngx_create_full_path(u_char *dir, ngx_uint_t access);
ngx_int_t ngx_add_path(ngx_conf_t *cf, ngx_path_t **slot);
ngx_int_t ngx_create_paths(ngx_cycle_t *cycle, ngx_uid_t user);
ngx_int_t ngx_ext_rename_file(ngx_str_t *src, ngx_str_t *to,
    ngx_ext_rename_file_t *ext);
ngx_int_t ngx_copy_file(u_char *from, u_char *to, ngx_copy_file_t *cf);
ngx_int_t ngx_walk_tree(ngx_tree_ctx_t *ctx, ngx_str_t *tree);

ngx_atomic_uint_t ngx_next_temp_number(ngx_uint_t collision);

char *ngx_conf_set_path_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_merge_path_value(ngx_conf_t *cf, ngx_path_t **path,
    ngx_path_t *prev, ngx_path_init_t *init);
char *ngx_conf_set_access_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);


extern ngx_atomic_t *ngx_temp_number;
extern ngx_atomic_int_t ngx_random_number;
# 69 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_crc.h" 1 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_crc.h" 3 4
static inline uint32_t
ngx_crc(u_char *data, size_t len)
{
    uint32_t sum;

    for (sum = 0; len; len--) {






        sum = sum >> 1 | sum << 31;

        sum += *data++;
    }

    return sum;
}
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_crc32.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_crc32.h" 3 4
extern uint32_t *ngx_crc32_table_short;
extern uint32_t ngx_crc32_table256[];


static inline uint32_t
ngx_crc32_short(u_char *p, size_t len)
{
    u_char c;
    uint32_t crc;

    crc = 0xffffffff;

    while (len--) {
        c = *p++;
        crc = ngx_crc32_table_short[(crc ^ (c & 0xf)) & 0xf] ^ (crc >> 4);
        crc = ngx_crc32_table_short[(crc ^ (c >> 4)) & 0xf] ^ (crc >> 4);
    }

    return crc ^ 0xffffffff;
}


static inline uint32_t
ngx_crc32_long(u_char *p, size_t len)
{
    uint32_t crc;

    crc = 0xffffffff;

    while (len--) {
        crc = ngx_crc32_table256[(crc ^ *p++) & 0xff] ^ (crc >> 8);
    }

    return crc ^ 0xffffffff;
}






static inline void
ngx_crc32_update(uint32_t *crc, u_char *p, size_t len)
{
    uint32_t c;

    c = *crc;

    while (len--) {
        c = ngx_crc32_table256[(c ^ *p++) & 0xff] ^ (c >> 8);
    }

    *crc = c;
}






ngx_int_t ngx_crc32_table_init(void);
# 71 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_murmurhash.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_murmurhash.h" 3 4
uint32_t ngx_murmur_hash2(u_char *data, size_t len);
# 72 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_regex.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_regex.h" 3 4
# 1 "/usr/local/include/pcre2.h" 1 3 4
# 90 "/usr/local/include/pcre2.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 91 "/usr/local/include/pcre2.h" 2 3 4
# 458 "/usr/local/include/pcre2.h" 3 4
typedef uint8_t PCRE2_UCHAR8;
typedef uint16_t PCRE2_UCHAR16;
typedef uint32_t PCRE2_UCHAR32;

typedef const PCRE2_UCHAR8 *PCRE2_SPTR8;
typedef const PCRE2_UCHAR16 *PCRE2_SPTR16;
typedef const PCRE2_UCHAR32 *PCRE2_SPTR32;
# 935 "/usr/local/include/pcre2.h" 3 4
struct pcre2_real_general_context_8; typedef struct pcre2_real_general_context_8 pcre2_general_context_8; struct pcre2_real_compile_context_8; typedef struct pcre2_real_compile_context_8 pcre2_compile_context_8; struct pcre2_real_match_context_8; typedef struct pcre2_real_match_context_8 pcre2_match_context_8; struct pcre2_real_convert_context_8; typedef struct pcre2_real_convert_context_8 pcre2_convert_context_8; struct pcre2_real_code_8; typedef struct pcre2_real_code_8 pcre2_code_8; struct pcre2_real_match_data_8; typedef struct pcre2_real_match_data_8 pcre2_match_data_8; struct pcre2_real_jit_stack_8; typedef struct pcre2_real_jit_stack_8 pcre2_jit_stack_8; typedef pcre2_jit_stack_8 *(*pcre2_jit_callback_8)(void *); typedef struct pcre2_callout_block_8 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR8 mark; PCRE2_SPTR8 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; uint32_t callout_flags; } pcre2_callout_block_8; typedef struct pcre2_callout_enumerate_block_8 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; } pcre2_callout_enumerate_block_8; typedef struct pcre2_substitute_callout_block_8 { uint32_t version; PCRE2_SPTR8 input; PCRE2_SPTR8 output; size_t output_offsets[2]; size_t *ovector; uint32_t oveccount; uint32_t subscount; } pcre2_substitute_callout_block_8; extern int pcre2_config_8(uint32_t, void *); extern pcre2_general_context_8 *pcre2_general_context_copy_8(pcre2_general_context_8 *); extern pcre2_general_context_8 *pcre2_general_context_create_8(void *(*)(size_t, void *), void (*)(void *, void *), void *); extern void pcre2_general_context_free_8(pcre2_general_context_8 *); extern pcre2_compile_context_8 *pcre2_compile_context_copy_8(pcre2_compile_context_8 *); extern pcre2_compile_context_8 *pcre2_compile_context_create_8(pcre2_general_context_8 *);extern void pcre2_compile_context_free_8(pcre2_compile_context_8 *); extern int pcre2_set_bsr_8(pcre2_compile_context_8 *, uint32_t); extern int pcre2_set_character_tables_8(pcre2_compile_context_8 *, const uint8_t *); extern int pcre2_set_compile_extra_options_8(pcre2_compile_context_8 *, uint32_t); extern int pcre2_set_max_pattern_length_8(pcre2_compile_context_8 *, size_t); extern int pcre2_set_newline_8(pcre2_compile_context_8 *, uint32_t); extern int pcre2_set_parens_nest_limit_8(pcre2_compile_context_8 *, uint32_t); extern int pcre2_set_compile_recursion_guard_8(pcre2_compile_context_8 *, int (*)(uint32_t, void *), void *); extern pcre2_convert_context_8 *pcre2_convert_context_copy_8(pcre2_convert_context_8 *); extern pcre2_convert_context_8 *pcre2_convert_context_create_8(pcre2_general_context_8 *); extern void pcre2_convert_context_free_8(pcre2_convert_context_8 *); extern int pcre2_set_glob_escape_8(pcre2_convert_context_8 *, uint32_t); extern int pcre2_set_glob_separator_8(pcre2_convert_context_8 *, uint32_t); extern int pcre2_pattern_convert_8(PCRE2_SPTR8, size_t, uint32_t, PCRE2_UCHAR8 **, size_t *, pcre2_convert_context_8 *); extern void pcre2_converted_pattern_free_8(PCRE2_UCHAR8 *); extern pcre2_match_context_8 *pcre2_match_context_copy_8(pcre2_match_context_8 *); extern pcre2_match_context_8 *pcre2_match_context_create_8(pcre2_general_context_8 *); extern void pcre2_match_context_free_8(pcre2_match_context_8 *); extern int pcre2_set_callout_8(pcre2_match_context_8 *, int (*)(pcre2_callout_block_8 *, void *), void *); extern int pcre2_set_substitute_callout_8(pcre2_match_context_8 *, int (*)(pcre2_substitute_callout_block_8 *, void *), void *); extern int pcre2_set_depth_limit_8(pcre2_match_context_8 *, uint32_t); extern int pcre2_set_heap_limit_8(pcre2_match_context_8 *, uint32_t); extern int pcre2_set_match_limit_8(pcre2_match_context_8 *, uint32_t); extern int pcre2_set_offset_limit_8(pcre2_match_context_8 *, size_t); extern int pcre2_set_recursion_limit_8(pcre2_match_context_8 *, uint32_t); extern int pcre2_set_recursion_memory_management_8(pcre2_match_context_8 *, void *(*)(size_t, void *), void (*)(void *, void *), void *); extern pcre2_code_8 *pcre2_compile_8(PCRE2_SPTR8, size_t, uint32_t, int *, size_t *, pcre2_compile_context_8 *); extern void pcre2_code_free_8(pcre2_code_8 *); extern pcre2_code_8 *pcre2_code_copy_8(const pcre2_code_8 *); extern pcre2_code_8 *pcre2_code_copy_with_tables_8(const pcre2_code_8 *); extern int pcre2_pattern_info_8(const pcre2_code_8 *, uint32_t, void *); extern int pcre2_callout_enumerate_8(const pcre2_code_8 *, int (*)(pcre2_callout_enumerate_block_8 *, void *), void *); extern pcre2_match_data_8 *pcre2_match_data_create_8(uint32_t, pcre2_general_context_8 *); extern pcre2_match_data_8 *pcre2_match_data_create_from_pattern_8(const pcre2_code_8 *, pcre2_general_context_8 *); extern int pcre2_dfa_match_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, int *, size_t); extern int pcre2_match_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern void pcre2_match_data_free_8(pcre2_match_data_8 *); extern PCRE2_SPTR8 pcre2_get_mark_8(pcre2_match_data_8 *); extern size_t pcre2_get_match_data_size_8(pcre2_match_data_8 *); extern uint32_t pcre2_get_ovector_count_8(pcre2_match_data_8 *); extern size_t *pcre2_get_ovector_pointer_8(pcre2_match_data_8 *); extern size_t pcre2_get_startchar_8(pcre2_match_data_8 *); extern int pcre2_substring_copy_byname_8(pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 *, size_t *); extern int pcre2_substring_copy_bynumber_8(pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 *, size_t *); extern void pcre2_substring_free_8(PCRE2_UCHAR8 *); extern int pcre2_substring_get_byname_8(pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 **, size_t *); extern int pcre2_substring_get_bynumber_8(pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 **, size_t *); extern int pcre2_substring_length_byname_8(pcre2_match_data_8 *, PCRE2_SPTR8, size_t *); extern int pcre2_substring_length_bynumber_8(pcre2_match_data_8 *, uint32_t, size_t *); extern int pcre2_substring_nametable_scan_8(const pcre2_code_8 *, PCRE2_SPTR8, PCRE2_SPTR8 *, PCRE2_SPTR8 *); extern int pcre2_substring_number_from_name_8(const pcre2_code_8 *, PCRE2_SPTR8); extern void pcre2_substring_list_free_8(PCRE2_SPTR8 *); extern int pcre2_substring_list_get_8(pcre2_match_data_8 *, PCRE2_UCHAR8 ***, size_t **); extern int32_t pcre2_serialize_encode_8(const pcre2_code_8 **, int32_t, uint8_t **, size_t *, pcre2_general_context_8 *); extern int32_t pcre2_serialize_decode_8(pcre2_code_8 **, int32_t, const uint8_t *, pcre2_general_context_8 *); extern int32_t pcre2_serialize_get_number_of_codes_8(const uint8_t *); extern void pcre2_serialize_free_8(uint8_t *); extern int pcre2_substitute_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, PCRE2_SPTR8, size_t, PCRE2_UCHAR8 *, size_t *); extern int pcre2_jit_compile_8(pcre2_code_8 *, uint32_t); extern int pcre2_jit_match_8(const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern void pcre2_jit_free_unused_memory_8(pcre2_general_context_8 *); extern pcre2_jit_stack_8 *pcre2_jit_stack_create_8(size_t, size_t, pcre2_general_context_8 *); extern void pcre2_jit_stack_assign_8(pcre2_match_context_8 *, pcre2_jit_callback_8, void *); extern void pcre2_jit_stack_free_8(pcre2_jit_stack_8 *); extern int pcre2_get_error_message_8(int, PCRE2_UCHAR8 *, size_t); extern const uint8_t *pcre2_maketables_8(pcre2_general_context_8 *); extern void pcre2_maketables_free_8(pcre2_general_context_8 *, const uint8_t *);



struct pcre2_real_general_context_16; typedef struct pcre2_real_general_context_16 pcre2_general_context_16; struct pcre2_real_compile_context_16; typedef struct pcre2_real_compile_context_16 pcre2_compile_context_16; struct pcre2_real_match_context_16; typedef struct pcre2_real_match_context_16 pcre2_match_context_16; struct pcre2_real_convert_context_16; typedef struct pcre2_real_convert_context_16 pcre2_convert_context_16; struct pcre2_real_code_16; typedef struct pcre2_real_code_16 pcre2_code_16; struct pcre2_real_match_data_16; typedef struct pcre2_real_match_data_16 pcre2_match_data_16; struct pcre2_real_jit_stack_16; typedef struct pcre2_real_jit_stack_16 pcre2_jit_stack_16; typedef pcre2_jit_stack_16 *(*pcre2_jit_callback_16)(void *); typedef struct pcre2_callout_block_16 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR16 mark; PCRE2_SPTR16 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; uint32_t callout_flags; } pcre2_callout_block_16; typedef struct pcre2_callout_enumerate_block_16 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; } pcre2_callout_enumerate_block_16; typedef struct pcre2_substitute_callout_block_16 { uint32_t version; PCRE2_SPTR16 input; PCRE2_SPTR16 output; size_t output_offsets[2]; size_t *ovector; uint32_t oveccount; uint32_t subscount; } pcre2_substitute_callout_block_16; extern int pcre2_config_16(uint32_t, void *); extern pcre2_general_context_16 *pcre2_general_context_copy_16(pcre2_general_context_16 *); extern pcre2_general_context_16 *pcre2_general_context_create_16(void *(*)(size_t, void *), void (*)(void *, void *), void *); extern void pcre2_general_context_free_16(pcre2_general_context_16 *); extern pcre2_compile_context_16 *pcre2_compile_context_copy_16(pcre2_compile_context_16 *); extern pcre2_compile_context_16 *pcre2_compile_context_create_16(pcre2_general_context_16 *);extern void pcre2_compile_context_free_16(pcre2_compile_context_16 *); extern int pcre2_set_bsr_16(pcre2_compile_context_16 *, uint32_t); extern int pcre2_set_character_tables_16(pcre2_compile_context_16 *, const uint8_t *); extern int pcre2_set_compile_extra_options_16(pcre2_compile_context_16 *, uint32_t); extern int pcre2_set_max_pattern_length_16(pcre2_compile_context_16 *, size_t); extern int pcre2_set_newline_16(pcre2_compile_context_16 *, uint32_t); extern int pcre2_set_parens_nest_limit_16(pcre2_compile_context_16 *, uint32_t); extern int pcre2_set_compile_recursion_guard_16(pcre2_compile_context_16 *, int (*)(uint32_t, void *), void *); extern pcre2_convert_context_16 *pcre2_convert_context_copy_16(pcre2_convert_context_16 *); extern pcre2_convert_context_16 *pcre2_convert_context_create_16(pcre2_general_context_16 *); extern void pcre2_convert_context_free_16(pcre2_convert_context_16 *); extern int pcre2_set_glob_escape_16(pcre2_convert_context_16 *, uint32_t); extern int pcre2_set_glob_separator_16(pcre2_convert_context_16 *, uint32_t); extern int pcre2_pattern_convert_16(PCRE2_SPTR16, size_t, uint32_t, PCRE2_UCHAR16 **, size_t *, pcre2_convert_context_16 *); extern void pcre2_converted_pattern_free_16(PCRE2_UCHAR16 *); extern pcre2_match_context_16 *pcre2_match_context_copy_16(pcre2_match_context_16 *); extern pcre2_match_context_16 *pcre2_match_context_create_16(pcre2_general_context_16 *); extern void pcre2_match_context_free_16(pcre2_match_context_16 *); extern int pcre2_set_callout_16(pcre2_match_context_16 *, int (*)(pcre2_callout_block_16 *, void *), void *); extern int pcre2_set_substitute_callout_16(pcre2_match_context_16 *, int (*)(pcre2_substitute_callout_block_16 *, void *), void *); extern int pcre2_set_depth_limit_16(pcre2_match_context_16 *, uint32_t); extern int pcre2_set_heap_limit_16(pcre2_match_context_16 *, uint32_t); extern int pcre2_set_match_limit_16(pcre2_match_context_16 *, uint32_t); extern int pcre2_set_offset_limit_16(pcre2_match_context_16 *, size_t); extern int pcre2_set_recursion_limit_16(pcre2_match_context_16 *, uint32_t); extern int pcre2_set_recursion_memory_management_16(pcre2_match_context_16 *, void *(*)(size_t, void *), void (*)(void *, void *), void *); extern pcre2_code_16 *pcre2_compile_16(PCRE2_SPTR16, size_t, uint32_t, int *, size_t *, pcre2_compile_context_16 *); extern void pcre2_code_free_16(pcre2_code_16 *); extern pcre2_code_16 *pcre2_code_copy_16(const pcre2_code_16 *); extern pcre2_code_16 *pcre2_code_copy_with_tables_16(const pcre2_code_16 *); extern int pcre2_pattern_info_16(const pcre2_code_16 *, uint32_t, void *); extern int pcre2_callout_enumerate_16(const pcre2_code_16 *, int (*)(pcre2_callout_enumerate_block_16 *, void *), void *); extern pcre2_match_data_16 *pcre2_match_data_create_16(uint32_t, pcre2_general_context_16 *); extern pcre2_match_data_16 *pcre2_match_data_create_from_pattern_16(const pcre2_code_16 *, pcre2_general_context_16 *); extern int pcre2_dfa_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, int *, size_t); extern int pcre2_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern void pcre2_match_data_free_16(pcre2_match_data_16 *); extern PCRE2_SPTR16 pcre2_get_mark_16(pcre2_match_data_16 *); extern size_t pcre2_get_match_data_size_16(pcre2_match_data_16 *); extern uint32_t pcre2_get_ovector_count_16(pcre2_match_data_16 *); extern size_t *pcre2_get_ovector_pointer_16(pcre2_match_data_16 *); extern size_t pcre2_get_startchar_16(pcre2_match_data_16 *); extern int pcre2_substring_copy_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 *, size_t *); extern int pcre2_substring_copy_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 *, size_t *); extern void pcre2_substring_free_16(PCRE2_UCHAR16 *); extern int pcre2_substring_get_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 **, size_t *); extern int pcre2_substring_get_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 **, size_t *); extern int pcre2_substring_length_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, size_t *); extern int pcre2_substring_length_bynumber_16(pcre2_match_data_16 *, uint32_t, size_t *); extern int pcre2_substring_nametable_scan_16(const pcre2_code_16 *, PCRE2_SPTR16, PCRE2_SPTR16 *, PCRE2_SPTR16 *); extern int pcre2_substring_number_from_name_16(const pcre2_code_16 *, PCRE2_SPTR16); extern void pcre2_substring_list_free_16(PCRE2_SPTR16 *); extern int pcre2_substring_list_get_16(pcre2_match_data_16 *, PCRE2_UCHAR16 ***, size_t **); extern int32_t pcre2_serialize_encode_16(const pcre2_code_16 **, int32_t, uint8_t **, size_t *, pcre2_general_context_16 *); extern int32_t pcre2_serialize_decode_16(pcre2_code_16 **, int32_t, const uint8_t *, pcre2_general_context_16 *); extern int32_t pcre2_serialize_get_number_of_codes_16(const uint8_t *); extern void pcre2_serialize_free_16(uint8_t *); extern int pcre2_substitute_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, PCRE2_SPTR16, size_t, PCRE2_UCHAR16 *, size_t *); extern int pcre2_jit_compile_16(pcre2_code_16 *, uint32_t); extern int pcre2_jit_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern void pcre2_jit_free_unused_memory_16(pcre2_general_context_16 *); extern pcre2_jit_stack_16 *pcre2_jit_stack_create_16(size_t, size_t, pcre2_general_context_16 *); extern void pcre2_jit_stack_assign_16(pcre2_match_context_16 *, pcre2_jit_callback_16, void *); extern void pcre2_jit_stack_free_16(pcre2_jit_stack_16 *); extern int pcre2_get_error_message_16(int, PCRE2_UCHAR16 *, size_t); extern const uint8_t *pcre2_maketables_16(pcre2_general_context_16 *); extern void pcre2_maketables_free_16(pcre2_general_context_16 *, const uint8_t *);



struct pcre2_real_general_context_32; typedef struct pcre2_real_general_context_32 pcre2_general_context_32; struct pcre2_real_compile_context_32; typedef struct pcre2_real_compile_context_32 pcre2_compile_context_32; struct pcre2_real_match_context_32; typedef struct pcre2_real_match_context_32 pcre2_match_context_32; struct pcre2_real_convert_context_32; typedef struct pcre2_real_convert_context_32 pcre2_convert_context_32; struct pcre2_real_code_32; typedef struct pcre2_real_code_32 pcre2_code_32; struct pcre2_real_match_data_32; typedef struct pcre2_real_match_data_32 pcre2_match_data_32; struct pcre2_real_jit_stack_32; typedef struct pcre2_real_jit_stack_32 pcre2_jit_stack_32; typedef pcre2_jit_stack_32 *(*pcre2_jit_callback_32)(void *); typedef struct pcre2_callout_block_32 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR32 mark; PCRE2_SPTR32 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; uint32_t callout_flags; } pcre2_callout_block_32; typedef struct pcre2_callout_enumerate_block_32 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; } pcre2_callout_enumerate_block_32; typedef struct pcre2_substitute_callout_block_32 { uint32_t version; PCRE2_SPTR32 input; PCRE2_SPTR32 output; size_t output_offsets[2]; size_t *ovector; uint32_t oveccount; uint32_t subscount; } pcre2_substitute_callout_block_32; extern int pcre2_config_32(uint32_t, void *); extern pcre2_general_context_32 *pcre2_general_context_copy_32(pcre2_general_context_32 *); extern pcre2_general_context_32 *pcre2_general_context_create_32(void *(*)(size_t, void *), void (*)(void *, void *), void *); extern void pcre2_general_context_free_32(pcre2_general_context_32 *); extern pcre2_compile_context_32 *pcre2_compile_context_copy_32(pcre2_compile_context_32 *); extern pcre2_compile_context_32 *pcre2_compile_context_create_32(pcre2_general_context_32 *);extern void pcre2_compile_context_free_32(pcre2_compile_context_32 *); extern int pcre2_set_bsr_32(pcre2_compile_context_32 *, uint32_t); extern int pcre2_set_character_tables_32(pcre2_compile_context_32 *, const uint8_t *); extern int pcre2_set_compile_extra_options_32(pcre2_compile_context_32 *, uint32_t); extern int pcre2_set_max_pattern_length_32(pcre2_compile_context_32 *, size_t); extern int pcre2_set_newline_32(pcre2_compile_context_32 *, uint32_t); extern int pcre2_set_parens_nest_limit_32(pcre2_compile_context_32 *, uint32_t); extern int pcre2_set_compile_recursion_guard_32(pcre2_compile_context_32 *, int (*)(uint32_t, void *), void *); extern pcre2_convert_context_32 *pcre2_convert_context_copy_32(pcre2_convert_context_32 *); extern pcre2_convert_context_32 *pcre2_convert_context_create_32(pcre2_general_context_32 *); extern void pcre2_convert_context_free_32(pcre2_convert_context_32 *); extern int pcre2_set_glob_escape_32(pcre2_convert_context_32 *, uint32_t); extern int pcre2_set_glob_separator_32(pcre2_convert_context_32 *, uint32_t); extern int pcre2_pattern_convert_32(PCRE2_SPTR32, size_t, uint32_t, PCRE2_UCHAR32 **, size_t *, pcre2_convert_context_32 *); extern void pcre2_converted_pattern_free_32(PCRE2_UCHAR32 *); extern pcre2_match_context_32 *pcre2_match_context_copy_32(pcre2_match_context_32 *); extern pcre2_match_context_32 *pcre2_match_context_create_32(pcre2_general_context_32 *); extern void pcre2_match_context_free_32(pcre2_match_context_32 *); extern int pcre2_set_callout_32(pcre2_match_context_32 *, int (*)(pcre2_callout_block_32 *, void *), void *); extern int pcre2_set_substitute_callout_32(pcre2_match_context_32 *, int (*)(pcre2_substitute_callout_block_32 *, void *), void *); extern int pcre2_set_depth_limit_32(pcre2_match_context_32 *, uint32_t); extern int pcre2_set_heap_limit_32(pcre2_match_context_32 *, uint32_t); extern int pcre2_set_match_limit_32(pcre2_match_context_32 *, uint32_t); extern int pcre2_set_offset_limit_32(pcre2_match_context_32 *, size_t); extern int pcre2_set_recursion_limit_32(pcre2_match_context_32 *, uint32_t); extern int pcre2_set_recursion_memory_management_32(pcre2_match_context_32 *, void *(*)(size_t, void *), void (*)(void *, void *), void *); extern pcre2_code_32 *pcre2_compile_32(PCRE2_SPTR32, size_t, uint32_t, int *, size_t *, pcre2_compile_context_32 *); extern void pcre2_code_free_32(pcre2_code_32 *); extern pcre2_code_32 *pcre2_code_copy_32(const pcre2_code_32 *); extern pcre2_code_32 *pcre2_code_copy_with_tables_32(const pcre2_code_32 *); extern int pcre2_pattern_info_32(const pcre2_code_32 *, uint32_t, void *); extern int pcre2_callout_enumerate_32(const pcre2_code_32 *, int (*)(pcre2_callout_enumerate_block_32 *, void *), void *); extern pcre2_match_data_32 *pcre2_match_data_create_32(uint32_t, pcre2_general_context_32 *); extern pcre2_match_data_32 *pcre2_match_data_create_from_pattern_32(const pcre2_code_32 *, pcre2_general_context_32 *); extern int pcre2_dfa_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, int *, size_t); extern int pcre2_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern void pcre2_match_data_free_32(pcre2_match_data_32 *); extern PCRE2_SPTR32 pcre2_get_mark_32(pcre2_match_data_32 *); extern size_t pcre2_get_match_data_size_32(pcre2_match_data_32 *); extern uint32_t pcre2_get_ovector_count_32(pcre2_match_data_32 *); extern size_t *pcre2_get_ovector_pointer_32(pcre2_match_data_32 *); extern size_t pcre2_get_startchar_32(pcre2_match_data_32 *); extern int pcre2_substring_copy_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 *, size_t *); extern int pcre2_substring_copy_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 *, size_t *); extern void pcre2_substring_free_32(PCRE2_UCHAR32 *); extern int pcre2_substring_get_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 **, size_t *); extern int pcre2_substring_get_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 **, size_t *); extern int pcre2_substring_length_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, size_t *); extern int pcre2_substring_length_bynumber_32(pcre2_match_data_32 *, uint32_t, size_t *); extern int pcre2_substring_nametable_scan_32(const pcre2_code_32 *, PCRE2_SPTR32, PCRE2_SPTR32 *, PCRE2_SPTR32 *); extern int pcre2_substring_number_from_name_32(const pcre2_code_32 *, PCRE2_SPTR32); extern void pcre2_substring_list_free_32(PCRE2_SPTR32 *); extern int pcre2_substring_list_get_32(pcre2_match_data_32 *, PCRE2_UCHAR32 ***, size_t **); extern int32_t pcre2_serialize_encode_32(const pcre2_code_32 **, int32_t, uint8_t **, size_t *, pcre2_general_context_32 *); extern int32_t pcre2_serialize_decode_32(pcre2_code_32 **, int32_t, const uint8_t *, pcre2_general_context_32 *); extern int32_t pcre2_serialize_get_number_of_codes_32(const uint8_t *); extern void pcre2_serialize_free_32(uint8_t *); extern int pcre2_substitute_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, PCRE2_SPTR32, size_t, PCRE2_UCHAR32 *, size_t *); extern int pcre2_jit_compile_32(pcre2_code_32 *, uint32_t); extern int pcre2_jit_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern void pcre2_jit_free_unused_memory_32(pcre2_general_context_32 *); extern pcre2_jit_stack_32 *pcre2_jit_stack_create_32(size_t, size_t, pcre2_general_context_32 *); extern void pcre2_jit_stack_assign_32(pcre2_match_context_32 *, pcre2_jit_callback_32, void *); extern void pcre2_jit_stack_free_32(pcre2_jit_stack_32 *); extern int pcre2_get_error_message_32(int, PCRE2_UCHAR32 *, size_t); extern const uint8_t *pcre2_maketables_32(pcre2_general_context_32 *); extern void pcre2_maketables_free_32(pcre2_general_context_32 *, const uint8_t *);
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_regex.h" 2 3 4



typedef pcre2_code_8 ngx_regex_t;
# 43 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_regex.h" 3 4
typedef struct {
    ngx_str_t pattern;
    ngx_pool_t *pool;
    ngx_uint_t options;

    ngx_regex_t *regex;
    int captures;
    int named_captures;
    int name_size;
    u_char *names;
    ngx_str_t err;
} ngx_regex_compile_t;


typedef struct {
    ngx_regex_t *regex;
    u_char *name;
} ngx_regex_elt_t;


void ngx_regex_init(void);
ngx_int_t ngx_regex_compile(ngx_regex_compile_t *rc);

ngx_int_t ngx_regex_exec(ngx_regex_t *re, ngx_str_t *s, int *captures,
    ngx_uint_t size);







ngx_int_t ngx_regex_exec_array(ngx_array_t *a, ngx_str_t *s, ngx_log_t *log);
# 74 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_radix_tree.h" 1 3 4
# 18 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_radix_tree.h" 3 4
typedef struct ngx_radix_node_s ngx_radix_node_t;

struct ngx_radix_node_s {
    ngx_radix_node_t *right;
    ngx_radix_node_t *left;
    ngx_radix_node_t *parent;
    uintptr_t value;
};


typedef struct {
    ngx_radix_node_t *root;
    ngx_pool_t *pool;
    ngx_radix_node_t *free;
    char *start;
    size_t size;
} ngx_radix_tree_t;


ngx_radix_tree_t *ngx_radix_tree_create(ngx_pool_t *pool,
    ngx_int_t preallocate);

ngx_int_t ngx_radix32tree_insert(ngx_radix_tree_t *tree,
    uint32_t key, uint32_t mask, uintptr_t value);
ngx_int_t ngx_radix32tree_delete(ngx_radix_tree_t *tree,
    uint32_t key, uint32_t mask);
uintptr_t ngx_radix32tree_find(ngx_radix_tree_t *tree, uint32_t key);


ngx_int_t ngx_radix128tree_insert(ngx_radix_tree_t *tree,
    u_char *key, u_char *mask, uintptr_t value);
ngx_int_t ngx_radix128tree_delete(ngx_radix_tree_t *tree,
    u_char *key, u_char *mask);
uintptr_t ngx_radix128tree_find(ngx_radix_tree_t *tree, u_char *key);
# 76 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_times.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_times.h" 3 4
typedef struct {
    time_t sec;
    ngx_uint_t msec;
    ngx_int_t gmtoff;
} ngx_time_t;


void ngx_time_init(void);
void ngx_time_update(void);
void ngx_time_sigsafe_update(void);
u_char *ngx_http_time(u_char *buf, time_t t);
u_char *ngx_http_cookie_time(u_char *buf, time_t t);
void ngx_gmtime(time_t t, ngx_tm_t *tp);

time_t ngx_next_time(time_t when);



extern volatile ngx_time_t *ngx_cached_time;




extern volatile ngx_str_t ngx_cached_err_log_time;
extern volatile ngx_str_t ngx_cached_http_time;
extern volatile ngx_str_t ngx_cached_http_log_time;
extern volatile ngx_str_t ngx_cached_http_log_iso8601;
extern volatile ngx_str_t ngx_cached_syslog_time;





extern volatile ngx_msec_t ngx_current_msec;
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_rwlock.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_rwlock.h" 3 4
void ngx_rwlock_wlock(ngx_atomic_t *lock);
void ngx_rwlock_rlock(ngx_atomic_t *lock);
void ngx_rwlock_unlock(ngx_atomic_t *lock);
void ngx_rwlock_downgrade(ngx_atomic_t *lock);
# 78 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_shmtx.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_shmtx.h" 3 4
typedef struct {
    ngx_atomic_t lock;



} ngx_shmtx_sh_t;


typedef struct {

    ngx_atomic_t *lock;
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_shmtx.h" 3 4
    ngx_uint_t spin;
} ngx_shmtx_t;


ngx_int_t ngx_shmtx_create(ngx_shmtx_t *mtx, ngx_shmtx_sh_t *addr,
    u_char *name);
void ngx_shmtx_destroy(ngx_shmtx_t *mtx);
ngx_uint_t ngx_shmtx_trylock(ngx_shmtx_t *mtx);
void ngx_shmtx_lock(ngx_shmtx_t *mtx);
void ngx_shmtx_unlock(ngx_shmtx_t *mtx);
ngx_uint_t ngx_shmtx_force_unlock(ngx_shmtx_t *mtx, ngx_pid_t pid);
# 79 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_slab.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_slab.h" 3 4
typedef struct ngx_slab_page_s ngx_slab_page_t;

struct ngx_slab_page_s {
    uintptr_t slab;
    ngx_slab_page_t *next;
    uintptr_t prev;
};


typedef struct {
    ngx_uint_t total;
    ngx_uint_t used;

    ngx_uint_t reqs;
    ngx_uint_t fails;
} ngx_slab_stat_t;


typedef struct {
    ngx_shmtx_sh_t lock;

    size_t min_size;
    size_t min_shift;

    ngx_slab_page_t *pages;
    ngx_slab_page_t *last;
    ngx_slab_page_t free;

    ngx_slab_stat_t *stats;
    ngx_uint_t pfree;

    u_char *start;
    u_char *end;

    ngx_shmtx_t mutex;

    u_char *log_ctx;
    u_char zero;

    unsigned log_nomem:1;

    void *data;
    void *addr;
} ngx_slab_pool_t;


void ngx_slab_sizes_init(void);
void ngx_slab_init(ngx_slab_pool_t *pool);
void *ngx_slab_alloc(ngx_slab_pool_t *pool, size_t size);
void *ngx_slab_alloc_locked(ngx_slab_pool_t *pool, size_t size);
void *ngx_slab_calloc(ngx_slab_pool_t *pool, size_t size);
void *ngx_slab_calloc_locked(ngx_slab_pool_t *pool, size_t size);
void ngx_slab_free(ngx_slab_pool_t *pool, void *p);
void ngx_slab_free_locked(ngx_slab_pool_t *pool, void *p);
# 80 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_inet.h" 1 3 4
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_inet.h" 3 4
typedef union {
    struct sockaddr sockaddr;
    struct sockaddr_in sockaddr_in;

    struct sockaddr_in6 sockaddr_in6;


    struct sockaddr_un sockaddr_un;

} ngx_sockaddr_t;


typedef struct {
    in_addr_t addr;
    in_addr_t mask;
} ngx_in_cidr_t;




typedef struct {
    struct in6_addr addr;
    struct in6_addr mask;
} ngx_in6_cidr_t;




typedef struct {
    ngx_uint_t family;
    union {
        ngx_in_cidr_t in;

        ngx_in6_cidr_t in6;

    } u;
} ngx_cidr_t;


typedef struct {
    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t name;
} ngx_addr_t;


typedef struct {
    ngx_str_t url;
    ngx_str_t host;
    ngx_str_t port_text;
    ngx_str_t uri;

    in_port_t port;
    in_port_t default_port;
    in_port_t last_port;
    int family;

    unsigned listen:1;
    unsigned uri_part:1;
    unsigned no_resolve:1;

    unsigned no_port:1;
    unsigned wildcard:1;

    socklen_t socklen;
    ngx_sockaddr_t sockaddr;

    ngx_addr_t *addrs;
    ngx_uint_t naddrs;

    char *err;
} ngx_url_t;


in_addr_t ngx_inet_addr(u_char *text, size_t len);

ngx_int_t ngx_inet6_addr(u_char *p, size_t len, u_char *addr);
size_t ngx_inet6_ntop(u_char *p, u_char *text, size_t len);

size_t ngx_sock_ntop(struct sockaddr *sa, socklen_t socklen, u_char *text,
    size_t len, ngx_uint_t port);
size_t ngx_inet_ntop(int family, void *addr, u_char *text, size_t len);
ngx_int_t ngx_ptocidr(ngx_str_t *text, ngx_cidr_t *cidr);
ngx_int_t ngx_cidr_match(struct sockaddr *sa, ngx_array_t *cidrs);
ngx_int_t ngx_parse_addr(ngx_pool_t *pool, ngx_addr_t *addr, u_char *text,
    size_t len);
ngx_int_t ngx_parse_addr_port(ngx_pool_t *pool, ngx_addr_t *addr,
    u_char *text, size_t len);
ngx_int_t ngx_parse_url(ngx_pool_t *pool, ngx_url_t *u);
ngx_int_t ngx_inet_resolve_host(ngx_pool_t *pool, ngx_url_t *u);
ngx_int_t ngx_cmp_sockaddr(struct sockaddr *sa1, socklen_t slen1,
    struct sockaddr *sa2, socklen_t slen2, ngx_uint_t cmp_port);
in_port_t ngx_inet_get_port(struct sockaddr *sa);
void ngx_inet_set_port(struct sockaddr *sa, in_port_t port);
ngx_uint_t ngx_inet_wildcard(struct sockaddr *sa);
# 81 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_cycle.h" 1 3 4
# 25 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_cycle.h" 3 4
typedef struct ngx_shm_zone_s ngx_shm_zone_t;

typedef ngx_int_t (*ngx_shm_zone_init_pt) (ngx_shm_zone_t *zone, void *data);

struct ngx_shm_zone_s {
    void *data;
    ngx_shm_t shm;
    ngx_shm_zone_init_pt init;
    void *tag;
    void *sync;
    ngx_uint_t noreuse;
};


struct ngx_cycle_s {
    void ****conf_ctx;
    ngx_pool_t *pool;

    ngx_log_t *log;
    ngx_log_t new_log;

    ngx_uint_t log_use_stderr;

    ngx_connection_t **files;
    ngx_connection_t *free_connections;
    ngx_uint_t free_connection_n;

    ngx_module_t **modules;
    ngx_uint_t modules_n;
    ngx_uint_t modules_used;

    ngx_queue_t reusable_connections_queue;
    ngx_uint_t reusable_connections_n;
    time_t connections_reuse_time;

    ngx_array_t listening;
    ngx_array_t paths;

    ngx_array_t config_dump;
    ngx_rbtree_t config_dump_rbtree;
    ngx_rbtree_node_t config_dump_sentinel;

    ngx_list_t open_files;
    ngx_list_t shared_memory;

    ngx_uint_t connection_n;
    ngx_uint_t files_n;

    ngx_connection_t *connections;
    ngx_event_t *read_events;
    ngx_event_t *write_events;

    ngx_cycle_t *old_cycle;

    ngx_str_t conf_file;
    ngx_str_t conf_param;
    ngx_str_t conf_prefix;
    ngx_str_t prefix;
    ngx_str_t error_log;
    ngx_str_t lock_file;
    ngx_str_t hostname;
};


typedef struct {
    ngx_flag_t daemon;
    ngx_flag_t master;

    ngx_msec_t timer_resolution;
    ngx_msec_t shutdown_timeout;

    ngx_int_t worker_processes;
    ngx_int_t debug_points;

    ngx_int_t rlimit_nofile;
    off_t rlimit_core;

    int priority;

    ngx_uint_t cpu_affinity_auto;
    ngx_uint_t cpu_affinity_n;
    ngx_cpuset_t *cpu_affinity;

    char *username;
    ngx_uid_t user;
    ngx_gid_t group;

    ngx_str_t working_directory;
    ngx_str_t lock_file;

    ngx_str_t pid;
    ngx_str_t oldpid;

    ngx_array_t env;
    char **environment;

    ngx_uint_t transparent;
} ngx_core_conf_t;





ngx_cycle_t *ngx_init_cycle(ngx_cycle_t *old_cycle);
ngx_int_t ngx_create_pidfile(ngx_str_t *name, ngx_log_t *log);
void ngx_delete_pidfile(ngx_cycle_t *cycle);
ngx_int_t ngx_signal_process(ngx_cycle_t *cycle, char *sig);
void ngx_reopen_files(ngx_cycle_t *cycle, ngx_uid_t user);
char **ngx_set_environment(ngx_cycle_t *cycle, ngx_uint_t *last);
ngx_pid_t ngx_exec_new_binary(ngx_cycle_t *cycle, char *const *argv);
ngx_cpuset_t *ngx_get_cpu_affinity(ngx_uint_t n);
ngx_shm_zone_t *ngx_shared_memory_add(ngx_conf_t *cf, ngx_str_t *name,
    size_t size, void *tag);
void ngx_set_shutdown_timer(ngx_cycle_t *cycle);


extern volatile ngx_cycle_t *ngx_cycle;
extern ngx_array_t ngx_old_cycles;
extern ngx_module_t ngx_core_module;
extern ngx_uint_t ngx_test_config;
extern ngx_uint_t ngx_dump_config;
extern ngx_uint_t ngx_quiet_mode;
# 82 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_resolver.h" 1 3 4
# 40 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_resolver.h" 3 4
typedef struct ngx_resolver_s ngx_resolver_t;


typedef struct {
    ngx_connection_t *udp;
    ngx_connection_t *tcp;
    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t server;
    ngx_log_t log;
    ngx_buf_t *read_buf;
    ngx_buf_t *write_buf;
    ngx_resolver_t *resolver;
} ngx_resolver_connection_t;


typedef struct ngx_resolver_ctx_s ngx_resolver_ctx_t;

typedef void (*ngx_resolver_handler_pt)(ngx_resolver_ctx_t *ctx);


typedef struct {
    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t name;
    u_short priority;
    u_short weight;
} ngx_resolver_addr_t;


typedef struct {
    ngx_str_t name;
    u_short priority;
    u_short weight;
    u_short port;
} ngx_resolver_srv_t;


typedef struct {
    ngx_str_t name;
    u_short priority;
    u_short weight;
    u_short port;

    ngx_resolver_ctx_t *ctx;
    ngx_int_t state;

    ngx_uint_t naddrs;
    ngx_addr_t *addrs;
} ngx_resolver_srv_name_t;


typedef struct {
    ngx_rbtree_node_t node;
    ngx_queue_t queue;


    u_char *name;



    struct in6_addr addr6;


    u_short nlen;
    u_short qlen;

    u_char *query;

    u_char *query6;


    union {
        in_addr_t addr;
        in_addr_t *addrs;
        u_char *cname;
        ngx_resolver_srv_t *srvs;
    } u;

    u_char code;
    u_short naddrs;
    u_short nsrvs;
    u_short cnlen;


    union {
        struct in6_addr addr6;
        struct in6_addr *addrs6;
    } u6;

    u_short naddrs6;


    time_t expire;
    time_t valid;
    uint32_t ttl;

    unsigned tcp:1;

    unsigned tcp6:1;


    ngx_uint_t last_connection;

    ngx_resolver_ctx_t *waiting;
} ngx_resolver_node_t;


struct ngx_resolver_s {

    ngx_event_t *event;
    void *dummy;
    ngx_log_t *log;


    ngx_int_t ident;


    ngx_array_t connections;
    ngx_uint_t last_connection;

    ngx_rbtree_t name_rbtree;
    ngx_rbtree_node_t name_sentinel;

    ngx_rbtree_t srv_rbtree;
    ngx_rbtree_node_t srv_sentinel;

    ngx_rbtree_t addr_rbtree;
    ngx_rbtree_node_t addr_sentinel;

    ngx_queue_t name_resend_queue;
    ngx_queue_t srv_resend_queue;
    ngx_queue_t addr_resend_queue;

    ngx_queue_t name_expire_queue;
    ngx_queue_t srv_expire_queue;
    ngx_queue_t addr_expire_queue;


    ngx_uint_t ipv6;
    ngx_rbtree_t addr6_rbtree;
    ngx_rbtree_node_t addr6_sentinel;
    ngx_queue_t addr6_resend_queue;
    ngx_queue_t addr6_expire_queue;


    time_t resend_timeout;
    time_t tcp_timeout;
    time_t expire;
    time_t valid;

    ngx_uint_t log_level;
};


struct ngx_resolver_ctx_s {
    ngx_resolver_ctx_t *next;
    ngx_resolver_t *resolver;
    ngx_resolver_node_t *node;


    ngx_int_t ident;

    ngx_int_t state;
    ngx_str_t name;
    ngx_str_t service;

    time_t valid;
    ngx_uint_t naddrs;
    ngx_resolver_addr_t *addrs;
    ngx_resolver_addr_t addr;
    struct sockaddr_in sin;

    ngx_uint_t count;
    ngx_uint_t nsrvs;
    ngx_resolver_srv_name_t *srvs;

    ngx_resolver_handler_pt handler;
    void *data;
    ngx_msec_t timeout;

    unsigned quick:1;
    unsigned async:1;
    unsigned cancelable:1;
    ngx_uint_t recursion;
    ngx_event_t *event;
};


ngx_resolver_t *ngx_resolver_create(ngx_conf_t *cf, ngx_str_t *names,
    ngx_uint_t n);
ngx_resolver_ctx_t *ngx_resolve_start(ngx_resolver_t *r,
    ngx_resolver_ctx_t *temp);
ngx_int_t ngx_resolve_name(ngx_resolver_ctx_t *ctx);
void ngx_resolve_name_done(ngx_resolver_ctx_t *ctx);
ngx_int_t ngx_resolve_addr(ngx_resolver_ctx_t *ctx);
void ngx_resolve_addr_done(ngx_resolver_ctx_t *ctx);
char *ngx_resolver_strerror(ngx_int_t err);
# 83 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process_cycle.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_process_cycle.h" 3 4
typedef struct {
    ngx_event_handler_pt handler;
    char *name;
    ngx_msec_t delay;
} ngx_cache_manager_ctx_t;


void ngx_master_process_cycle(ngx_cycle_t *cycle);
void ngx_single_process_cycle(ngx_cycle_t *cycle);


extern ngx_uint_t ngx_process;
extern ngx_uint_t ngx_worker;
extern ngx_pid_t ngx_pid;
extern ngx_pid_t ngx_new_binary;
extern ngx_uint_t ngx_inherited;
extern ngx_uint_t ngx_daemonized;
extern ngx_uint_t ngx_exiting;

extern sig_atomic_t ngx_reap;
extern sig_atomic_t ngx_sigio;
extern sig_atomic_t ngx_sigalrm;
extern sig_atomic_t ngx_quit;
extern sig_atomic_t ngx_debug_quit;
extern sig_atomic_t ngx_terminate;
extern sig_atomic_t ngx_noaccept;
extern sig_atomic_t ngx_reconfigure;
extern sig_atomic_t ngx_reopen;
extern sig_atomic_t ngx_change_binary;
# 87 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_conf_file.h" 1 3 4
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_conf_file.h" 3 4
struct ngx_command_s {
    ngx_str_t name;
    ngx_uint_t type;
    char *(*set)(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
    ngx_uint_t conf;
    ngx_uint_t offset;
    void *post;
};




struct ngx_open_file_s {
    ngx_fd_t fd;
    ngx_str_t name;

    void (*flush)(ngx_open_file_t *file, ngx_log_t *log);
    void *data;
};


typedef struct {
    ngx_file_t file;
    ngx_buf_t *buffer;
    ngx_buf_t *dump;
    ngx_uint_t line;
} ngx_conf_file_t;


typedef struct {
    ngx_str_t name;
    ngx_buf_t *buffer;
} ngx_conf_dump_t;


typedef char *(*ngx_conf_handler_pt)(ngx_conf_t *cf,
    ngx_command_t *dummy, void *conf);


struct ngx_conf_s {
    char *name;
    ngx_array_t *args;

    ngx_cycle_t *cycle;
    ngx_pool_t *pool;
    ngx_pool_t *temp_pool;
    ngx_conf_file_t *conf_file;
    ngx_log_t *log;

    void *ctx;
    ngx_uint_t module_type;
    ngx_uint_t cmd_type;

    ngx_conf_handler_pt handler;
    void *handler_conf;
};


typedef char *(*ngx_conf_post_handler_pt) (ngx_conf_t *cf,
    void *data, void *conf);

typedef struct {
    ngx_conf_post_handler_pt post_handler;
} ngx_conf_post_t;


typedef struct {
    ngx_conf_post_handler_pt post_handler;
    char *old_name;
    char *new_name;
} ngx_conf_deprecated_t;


typedef struct {
    ngx_conf_post_handler_pt post_handler;
    ngx_int_t low;
    ngx_int_t high;
} ngx_conf_num_bounds_t;


typedef struct {
    ngx_str_t name;
    ngx_uint_t value;
} ngx_conf_enum_t;




typedef struct {
    ngx_str_t name;
    ngx_uint_t mask;
} ngx_conf_bitmask_t;



char * ngx_conf_deprecated(ngx_conf_t *cf, void *post, void *data);
char *ngx_conf_check_num_bounds(ngx_conf_t *cf, void *post, void *data);
# 268 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_conf_file.h" 3 4
char *ngx_conf_param(ngx_conf_t *cf);
char *ngx_conf_parse(ngx_conf_t *cf, ngx_str_t *filename);
char *ngx_conf_include(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);


ngx_int_t ngx_conf_full_name(ngx_cycle_t *cycle, ngx_str_t *name,
    ngx_uint_t conf_prefix);
ngx_open_file_t *ngx_conf_open_file(ngx_cycle_t *cycle, ngx_str_t *name);
void ngx_conf_log_error(ngx_uint_t level, ngx_conf_t *cf,
    ngx_err_t err, const char *fmt, ...);


char *ngx_conf_set_flag_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_str_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_str_array_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
char *ngx_conf_set_keyval_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_num_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_size_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_off_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_msec_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_sec_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_bufs_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_enum_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_conf_set_bitmask_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
# 88 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_module.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_module.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/nginx.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_module.h" 2 3 4
# 222 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_module.h" 3 4
struct ngx_module_s {
    ngx_uint_t ctx_index;
    ngx_uint_t index;

    char *name;

    ngx_uint_t spare0;
    ngx_uint_t spare1;

    ngx_uint_t version;
    const char *signature;

    void *ctx;
    ngx_command_t *commands;
    ngx_uint_t type;

    ngx_int_t (*init_master)(ngx_log_t *log);

    ngx_int_t (*init_module)(ngx_cycle_t *cycle);

    ngx_int_t (*init_process)(ngx_cycle_t *cycle);
    ngx_int_t (*init_thread)(ngx_cycle_t *cycle);
    void (*exit_thread)(ngx_cycle_t *cycle);
    void (*exit_process)(ngx_cycle_t *cycle);

    void (*exit_master)(ngx_cycle_t *cycle);

    uintptr_t spare_hook0;
    uintptr_t spare_hook1;
    uintptr_t spare_hook2;
    uintptr_t spare_hook3;
    uintptr_t spare_hook4;
    uintptr_t spare_hook5;
    uintptr_t spare_hook6;
    uintptr_t spare_hook7;
};


typedef struct {
    ngx_str_t name;
    void *(*create_conf)(ngx_cycle_t *cycle);
    char *(*init_conf)(ngx_cycle_t *cycle, void *conf);
} ngx_core_module_t;


ngx_int_t ngx_preinit_modules(void);
ngx_int_t ngx_cycle_modules(ngx_cycle_t *cycle);
ngx_int_t ngx_init_modules(ngx_cycle_t *cycle);
ngx_int_t ngx_count_modules(ngx_cycle_t *cycle, ngx_uint_t type);


ngx_int_t ngx_add_module(ngx_conf_t *cf, ngx_str_t *file,
    ngx_module_t *module, char **order);


extern ngx_module_t *ngx_modules[];
extern ngx_uint_t ngx_max_module;

extern char *ngx_module_names[];
# 89 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_open_file_cache.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_open_file_cache.h" 3 4
typedef struct {
    ngx_fd_t fd;
    ngx_file_uniq_t uniq;
    time_t mtime;
    off_t size;
    off_t fs_size;
    off_t directio;
    size_t read_ahead;

    ngx_err_t err;
    char *failed;

    time_t valid;

    ngx_uint_t min_uses;


    size_t disable_symlinks_from;
    unsigned disable_symlinks:2;


    unsigned test_dir:1;
    unsigned test_only:1;
    unsigned log:1;
    unsigned errors:1;
    unsigned events:1;

    unsigned is_dir:1;
    unsigned is_file:1;
    unsigned is_link:1;
    unsigned is_exec:1;
    unsigned is_directio:1;
} ngx_open_file_info_t;


typedef struct ngx_cached_open_file_s ngx_cached_open_file_t;

struct ngx_cached_open_file_s {
    ngx_rbtree_node_t node;
    ngx_queue_t queue;

    u_char *name;
    time_t created;
    time_t accessed;

    ngx_fd_t fd;
    ngx_file_uniq_t uniq;
    time_t mtime;
    off_t size;
    ngx_err_t err;

    uint32_t uses;


    size_t disable_symlinks_from;
    unsigned disable_symlinks:2;


    unsigned count:24;
    unsigned close:1;
    unsigned use_event:1;

    unsigned is_dir:1;
    unsigned is_file:1;
    unsigned is_link:1;
    unsigned is_exec:1;
    unsigned is_directio:1;

    ngx_event_t *event;
};


typedef struct {
    ngx_rbtree_t rbtree;
    ngx_rbtree_node_t sentinel;
    ngx_queue_t expire_queue;

    ngx_uint_t current;
    ngx_uint_t max;
    time_t inactive;
} ngx_open_file_cache_t;


typedef struct {
    ngx_open_file_cache_t *cache;
    ngx_cached_open_file_t *file;
    ngx_uint_t min_uses;
    ngx_log_t *log;
} ngx_open_file_cache_cleanup_t;


typedef struct {


    void *data;
    ngx_event_t *read;
    ngx_event_t *write;
    ngx_fd_t fd;

    ngx_cached_open_file_t *file;
    ngx_open_file_cache_t *cache;
} ngx_open_file_cache_event_t;


ngx_open_file_cache_t *ngx_open_file_cache_init(ngx_pool_t *pool,
    ngx_uint_t max, time_t inactive);
ngx_int_t ngx_open_cached_file(ngx_open_file_cache_t *cache, ngx_str_t *name,
    ngx_open_file_info_t *of, ngx_pool_t *pool);
# 90 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_os.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_os.h" 3 4
typedef ssize_t (*ngx_recv_pt)(ngx_connection_t *c, u_char *buf, size_t size);
typedef ssize_t (*ngx_recv_chain_pt)(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);
typedef ssize_t (*ngx_send_pt)(ngx_connection_t *c, u_char *buf, size_t size);
typedef ngx_chain_t *(*ngx_send_chain_pt)(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);

typedef struct {
    ngx_recv_pt recv;
    ngx_recv_chain_pt recv_chain;
    ngx_recv_pt udp_recv;
    ngx_send_pt send;
    ngx_send_pt udp_send;
    ngx_send_chain_pt udp_send_chain;
    ngx_send_chain_pt send_chain;
    ngx_uint_t flags;
} ngx_os_io_t;


ngx_int_t ngx_os_init(ngx_log_t *log);
void ngx_os_status(ngx_log_t *log);
ngx_int_t ngx_os_specific_init(ngx_log_t *log);
void ngx_os_specific_status(ngx_log_t *log);
ngx_int_t ngx_daemon(ngx_log_t *log);
ngx_int_t ngx_os_signal_process(ngx_cycle_t *cycle, char *sig, ngx_pid_t pid);


ssize_t ngx_unix_recv(ngx_connection_t *c, u_char *buf, size_t size);
ssize_t ngx_readv_chain(ngx_connection_t *c, ngx_chain_t *entry, off_t limit);
ssize_t ngx_udp_unix_recv(ngx_connection_t *c, u_char *buf, size_t size);
ssize_t ngx_unix_send(ngx_connection_t *c, u_char *buf, size_t size);
ngx_chain_t *ngx_writev_chain(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);
ssize_t ngx_udp_unix_send(ngx_connection_t *c, u_char *buf, size_t size);
ngx_chain_t *ngx_udp_unix_sendmsg_chain(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_os.h" 3 4
typedef struct {
    struct iovec *iovs;
    ngx_uint_t count;
    size_t size;
    ngx_uint_t nalloc;
} ngx_iovec_t;

ngx_chain_t *ngx_output_chain_to_iovec(ngx_iovec_t *vec, ngx_chain_t *in,
    size_t limit, ngx_log_t *log);


ssize_t ngx_writev(ngx_connection_t *c, ngx_iovec_t *vec);


extern ngx_os_io_t ngx_os_io;
extern ngx_int_t ngx_ncpu;
extern ngx_int_t ngx_max_sockets;
extern ngx_uint_t ngx_inherited_nonblocking;
extern ngx_uint_t ngx_tcp_nodelay_and_tcp_nopush;
# 98 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_os.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin.h" 1 3 4
# 12 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_darwin.h" 3 4
void ngx_debug_init(void);
ngx_chain_t *ngx_darwin_sendfile_chain(ngx_connection_t *c, ngx_chain_t *in,
    off_t limit);

extern int ngx_darwin_kern_osreldate;
extern int ngx_darwin_hw_ncpu;
extern u_long ngx_darwin_net_inet_tcp_sendspace;

extern ngx_uint_t ngx_debug_malloc;
# 99 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/os/unix/ngx_os.h" 2 3 4
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_connection.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_connection.h" 3 4
typedef struct ngx_listening_s ngx_listening_t;

struct ngx_listening_s {
    ngx_socket_t fd;

    struct sockaddr *sockaddr;
    socklen_t socklen;
    size_t addr_text_max_len;
    ngx_str_t addr_text;

    int type;

    int backlog;
    int rcvbuf;
    int sndbuf;







    ngx_connection_handler_pt handler;

    void *servers;

    ngx_log_t log;
    ngx_log_t *logp;

    size_t pool_size;

    size_t post_accept_buffer_size;

    ngx_listening_t *previous;
    ngx_connection_t *connection;

    ngx_rbtree_t rbtree;
    ngx_rbtree_node_t sentinel;

    ngx_uint_t worker;

    unsigned open:1;
    unsigned remain:1;
    unsigned ignore:1;

    unsigned bound:1;
    unsigned inherited:1;
    unsigned nonblocking_accept:1;
    unsigned listen:1;
    unsigned nonblocking:1;
    unsigned shared:1;
    unsigned addr_ntop:1;
    unsigned wildcard:1;


    unsigned ipv6only:1;

    unsigned reuseport:1;
    unsigned add_reuseport:1;
    unsigned keepalive:2;

    unsigned deferred_accept:1;
    unsigned delete_deferred:1;
    unsigned add_deferred:1;
# 88 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_connection.h" 3 4
    int fastopen;


};


typedef enum {
    NGX_ERROR_ALERT = 0,
    NGX_ERROR_ERR,
    NGX_ERROR_INFO,
    NGX_ERROR_IGNORE_ECONNRESET,
    NGX_ERROR_IGNORE_EINVAL
} ngx_connection_log_error_e;


typedef enum {
    NGX_TCP_NODELAY_UNSET = 0,
    NGX_TCP_NODELAY_SET,
    NGX_TCP_NODELAY_DISABLED
} ngx_connection_tcp_nodelay_e;


typedef enum {
    NGX_TCP_NOPUSH_UNSET = 0,
    NGX_TCP_NOPUSH_SET,
    NGX_TCP_NOPUSH_DISABLED
} ngx_connection_tcp_nopush_e;







struct ngx_connection_s {
    void *data;
    ngx_event_t *read;
    ngx_event_t *write;

    ngx_socket_t fd;

    ngx_recv_pt recv;
    ngx_send_pt send;
    ngx_recv_chain_pt recv_chain;
    ngx_send_chain_pt send_chain;

    ngx_listening_t *listening;

    off_t sent;

    ngx_log_t *log;

    ngx_pool_t *pool;

    int type;

    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t addr_text;

    ngx_proxy_protocol_t *proxy_protocol;





    ngx_udp_connection_t *udp;

    struct sockaddr *local_sockaddr;
    socklen_t local_socklen;

    ngx_buf_t *buffer;

    ngx_queue_t queue;

    ngx_atomic_uint_t number;

    ngx_msec_t start_time;
    ngx_uint_t requests;

    unsigned buffered:8;

    unsigned log_error:3;

    unsigned timedout:1;
    unsigned error:1;
    unsigned destroyed:1;

    unsigned idle:1;
    unsigned reusable:1;
    unsigned close:1;
    unsigned shared:1;

    unsigned sendfile:1;
    unsigned sndlowat:1;
    unsigned tcp_nodelay:2;
    unsigned tcp_nopush:2;

    unsigned need_last_buf:1;
# 195 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_connection.h" 3 4
};
# 209 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_connection.h" 3 4
ngx_listening_t *ngx_create_listening(ngx_conf_t *cf, struct sockaddr *sockaddr,
    socklen_t socklen);
ngx_int_t ngx_clone_listening(ngx_cycle_t *cycle, ngx_listening_t *ls);
ngx_int_t ngx_set_inherited_sockets(ngx_cycle_t *cycle);
ngx_int_t ngx_open_listening_sockets(ngx_cycle_t *cycle);
void ngx_configure_listening_sockets(ngx_cycle_t *cycle);
void ngx_close_listening_sockets(ngx_cycle_t *cycle);
void ngx_close_connection(ngx_connection_t *c);
void ngx_close_idle_connections(ngx_cycle_t *cycle);
ngx_int_t ngx_connection_local_sockaddr(ngx_connection_t *c, ngx_str_t *s,
    ngx_uint_t port);
ngx_int_t ngx_tcp_nodelay(ngx_connection_t *c);
ngx_int_t ngx_connection_error(ngx_connection_t *c, ngx_err_t err, char *text);

ngx_connection_t *ngx_get_connection(ngx_socket_t s, ngx_log_t *log);
void ngx_free_connection(ngx_connection_t *c);

void ngx_reusable_connection(ngx_connection_t *c, ngx_uint_t reusable);
# 92 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_syslog.h" 1 3 4
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_syslog.h" 3 4
typedef struct {
    ngx_uint_t facility;
    ngx_uint_t severity;
    ngx_str_t tag;

    ngx_addr_t server;
    ngx_connection_t conn;
    unsigned busy:1;
    unsigned nohostname:1;
} ngx_syslog_peer_t;


char *ngx_syslog_process_conf(ngx_conf_t *cf, ngx_syslog_peer_t *peer);
u_char *ngx_syslog_add_header(ngx_syslog_peer_t *peer, u_char *buf);
void ngx_syslog_writer(ngx_log_t *log, ngx_uint_t level, u_char *buf,
    size_t len);
ssize_t ngx_syslog_send(ngx_syslog_peer_t *peer, u_char *buf, size_t len);
# 93 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_proxy_protocol.h" 1 3 4
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_proxy_protocol.h" 3 4
struct ngx_proxy_protocol_s {
    ngx_str_t src_addr;
    ngx_str_t dst_addr;
    in_port_t src_port;
    in_port_t dst_port;
};


u_char *ngx_proxy_protocol_read(ngx_connection_t *c, u_char *buf,
    u_char *last);
u_char *ngx_proxy_protocol_write(ngx_connection_t *c, u_char *buf,
    u_char *last);
# 94 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 2 3 4
# 105 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/core/ngx_core.h" 3 4
void ngx_cpuinfo(void);
# 10 "project/nginx/src/http/ngx_http_core_module.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 1 3 4
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 3 4
typedef struct ngx_http_request_s ngx_http_request_t;
typedef struct ngx_http_upstream_s ngx_http_upstream_t;
typedef struct ngx_http_cache_s ngx_http_cache_t;
typedef struct ngx_http_file_cache_s ngx_http_file_cache_t;
typedef struct ngx_http_log_ctx_s ngx_http_log_ctx_t;
typedef struct ngx_http_chunked_s ngx_http_chunked_t;
typedef struct ngx_http_v2_stream_s ngx_http_v2_stream_t;

typedef ngx_int_t (*ngx_http_header_handler_pt)(ngx_http_request_t *r,
    ngx_table_elt_t *h, ngx_uint_t offset);
typedef u_char *(*ngx_http_log_handler_pt)(ngx_http_request_t *r,
    ngx_http_request_t *sr, u_char *buf, size_t len);


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_variables.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_variables.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_variables.h" 2 3 4


typedef ngx_variable_value_t ngx_http_variable_value_t;



typedef struct ngx_http_variable_s ngx_http_variable_t;

typedef void (*ngx_http_set_variable_pt) (ngx_http_request_t *r,
    ngx_http_variable_value_t *v, uintptr_t data);
typedef ngx_int_t (*ngx_http_get_variable_pt) (ngx_http_request_t *r,
    ngx_http_variable_value_t *v, uintptr_t data);
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_variables.h" 3 4
struct ngx_http_variable_s {
    ngx_str_t name;
    ngx_http_set_variable_pt set_handler;
    ngx_http_get_variable_pt get_handler;
    uintptr_t data;
    ngx_uint_t flags;
    ngx_uint_t index;
};




ngx_http_variable_t *ngx_http_add_variable(ngx_conf_t *cf, ngx_str_t *name,
    ngx_uint_t flags);
ngx_int_t ngx_http_get_variable_index(ngx_conf_t *cf, ngx_str_t *name);
ngx_http_variable_value_t *ngx_http_get_indexed_variable(ngx_http_request_t *r,
    ngx_uint_t index);
ngx_http_variable_value_t *ngx_http_get_flushed_variable(ngx_http_request_t *r,
    ngx_uint_t index);

ngx_http_variable_value_t *ngx_http_get_variable(ngx_http_request_t *r,
    ngx_str_t *name, ngx_uint_t key);

ngx_int_t ngx_http_variable_unknown_header(ngx_http_variable_value_t *v,
    ngx_str_t *var, ngx_list_part_t *part, size_t prefix);




typedef struct {
    ngx_uint_t capture;
    ngx_int_t index;
} ngx_http_regex_variable_t;


typedef struct {
    ngx_regex_t *regex;
    ngx_uint_t ncaptures;
    ngx_http_regex_variable_t *variables;
    ngx_uint_t nvariables;
    ngx_str_t name;
} ngx_http_regex_t;


typedef struct {
    ngx_http_regex_t *regex;
    void *value;
} ngx_http_map_regex_t;


ngx_http_regex_t *ngx_http_regex_compile(ngx_conf_t *cf,
    ngx_regex_compile_t *rc);
ngx_int_t ngx_http_regex_exec(ngx_http_request_t *r, ngx_http_regex_t *re,
    ngx_str_t *s);




typedef struct {
    ngx_hash_combined_t hash;

    ngx_http_map_regex_t *regex;
    ngx_uint_t nregex;

} ngx_http_map_t;


void *ngx_http_map_find(ngx_http_request_t *r, ngx_http_map_t *map,
    ngx_str_t *match);


ngx_int_t ngx_http_variables_add_core_vars(ngx_conf_t *cf);
ngx_int_t ngx_http_variables_init_vars(ngx_conf_t *cf);


extern ngx_http_variable_value_t ngx_http_variable_null_value;
extern ngx_http_variable_value_t ngx_http_variable_true_value;
# 31 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_config.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_config.h" 3 4
typedef struct {
    void **main_conf;
    void **srv_conf;
    void **loc_conf;
} ngx_http_conf_ctx_t;


typedef struct {
    ngx_int_t (*preconfiguration)(ngx_conf_t *cf);
    ngx_int_t (*postconfiguration)(ngx_conf_t *cf);

    void *(*create_main_conf)(ngx_conf_t *cf);
    char *(*init_main_conf)(ngx_conf_t *cf, void *conf);

    void *(*create_srv_conf)(ngx_conf_t *cf);
    char *(*merge_srv_conf)(ngx_conf_t *cf, void *prev, void *conf);

    void *(*create_loc_conf)(ngx_conf_t *cf);
    char *(*merge_loc_conf)(ngx_conf_t *cf, void *prev, void *conf);
} ngx_http_module_t;
# 32 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_request.h" 1 3 4
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_request.h" 3 4
typedef enum {
    NGX_HTTP_INITING_REQUEST_STATE = 0,
    NGX_HTTP_READING_REQUEST_STATE,
    NGX_HTTP_PROCESS_REQUEST_STATE,

    NGX_HTTP_CONNECT_UPSTREAM_STATE,
    NGX_HTTP_WRITING_UPSTREAM_STATE,
    NGX_HTTP_READING_UPSTREAM_STATE,

    NGX_HTTP_WRITING_REQUEST_STATE,
    NGX_HTTP_LINGERING_CLOSE_STATE,
    NGX_HTTP_KEEPALIVE_STATE
} ngx_http_state_e;


typedef struct {
    ngx_str_t name;
    ngx_uint_t offset;
    ngx_http_header_handler_pt handler;
} ngx_http_header_t;


typedef struct {
    ngx_str_t name;
    ngx_uint_t offset;
} ngx_http_header_out_t;


typedef struct {
    ngx_list_t headers;

    ngx_table_elt_t *host;
    ngx_table_elt_t *connection;
    ngx_table_elt_t *if_modified_since;
    ngx_table_elt_t *if_unmodified_since;
    ngx_table_elt_t *if_match;
    ngx_table_elt_t *if_none_match;
    ngx_table_elt_t *user_agent;
    ngx_table_elt_t *referer;
    ngx_table_elt_t *content_length;
    ngx_table_elt_t *content_range;
    ngx_table_elt_t *content_type;

    ngx_table_elt_t *range;
    ngx_table_elt_t *if_range;

    ngx_table_elt_t *transfer_encoding;
    ngx_table_elt_t *te;
    ngx_table_elt_t *expect;
    ngx_table_elt_t *upgrade;


    ngx_table_elt_t *accept_encoding;
    ngx_table_elt_t *via;


    ngx_table_elt_t *authorization;

    ngx_table_elt_t *keep_alive;


    ngx_array_t x_forwarded_for;
# 234 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_request.h" 3 4
    ngx_str_t user;
    ngx_str_t passwd;

    ngx_array_t cookies;

    ngx_str_t server;
    off_t content_length_n;
    time_t keep_alive_n;

    unsigned connection_type:2;
    unsigned chunked:1;
    unsigned msie:1;
    unsigned msie6:1;
    unsigned opera:1;
    unsigned gecko:1;
    unsigned chrome:1;
    unsigned safari:1;
    unsigned konqueror:1;
} ngx_http_headers_in_t;


typedef struct {
    ngx_list_t headers;
    ngx_list_t trailers;

    ngx_uint_t status;
    ngx_str_t status_line;

    ngx_table_elt_t *server;
    ngx_table_elt_t *date;
    ngx_table_elt_t *content_length;
    ngx_table_elt_t *content_encoding;
    ngx_table_elt_t *location;
    ngx_table_elt_t *refresh;
    ngx_table_elt_t *last_modified;
    ngx_table_elt_t *content_range;
    ngx_table_elt_t *accept_ranges;
    ngx_table_elt_t *www_authenticate;
    ngx_table_elt_t *expires;
    ngx_table_elt_t *etag;

    ngx_str_t *override_charset;

    size_t content_type_len;
    ngx_str_t content_type;
    ngx_str_t charset;
    u_char *content_type_lowcase;
    ngx_uint_t content_type_hash;

    ngx_array_t cache_control;
    ngx_array_t link;

    off_t content_length_n;
    off_t content_offset;
    time_t date_time;
    time_t last_modified_time;
} ngx_http_headers_out_t;


typedef void (*ngx_http_client_body_handler_pt)(ngx_http_request_t *r);

typedef struct {
    ngx_temp_file_t *temp_file;
    ngx_chain_t *bufs;
    ngx_buf_t *buf;
    off_t rest;
    off_t received;
    ngx_chain_t *free;
    ngx_chain_t *busy;
    ngx_http_chunked_t *chunked;
    ngx_http_client_body_handler_pt post_handler;
    unsigned filter_need_buffering:1;
    unsigned last_sent:1;
    unsigned last_saved:1;
} ngx_http_request_body_t;


typedef struct ngx_http_addr_conf_s ngx_http_addr_conf_t;

typedef struct {
    ngx_http_addr_conf_t *addr_conf;
    ngx_http_conf_ctx_t *conf_ctx;
# 324 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_request.h" 3 4
    ngx_chain_t *busy;
    ngx_int_t nbusy;

    ngx_chain_t *free;

    unsigned ssl:1;
    unsigned proxy_protocol:1;
} ngx_http_connection_t;


typedef void (*ngx_http_cleanup_pt)(void *data);

typedef struct ngx_http_cleanup_s ngx_http_cleanup_t;

struct ngx_http_cleanup_s {
    ngx_http_cleanup_pt handler;
    void *data;
    ngx_http_cleanup_t *next;
};


typedef ngx_int_t (*ngx_http_post_subrequest_pt)(ngx_http_request_t *r,
    void *data, ngx_int_t rc);

typedef struct {
    ngx_http_post_subrequest_pt handler;
    void *data;
} ngx_http_post_subrequest_t;


typedef struct ngx_http_postponed_request_s ngx_http_postponed_request_t;

struct ngx_http_postponed_request_s {
    ngx_http_request_t *request;
    ngx_chain_t *out;
    ngx_http_postponed_request_t *next;
};


typedef struct ngx_http_posted_request_s ngx_http_posted_request_t;

struct ngx_http_posted_request_s {
    ngx_http_request_t *request;
    ngx_http_posted_request_t *next;
};


typedef ngx_int_t (*ngx_http_handler_pt)(ngx_http_request_t *r);
typedef void (*ngx_http_event_handler_pt)(ngx_http_request_t *r);


struct ngx_http_request_s {
    uint32_t signature;

    ngx_connection_t *connection;

    void **ctx;
    void **main_conf;
    void **srv_conf;
    void **loc_conf;

    ngx_http_event_handler_pt read_event_handler;
    ngx_http_event_handler_pt write_event_handler;


    ngx_http_cache_t *cache;


    ngx_http_upstream_t *upstream;
    ngx_array_t *upstream_states;


    ngx_pool_t *pool;
    ngx_buf_t *header_in;

    ngx_http_headers_in_t headers_in;
    ngx_http_headers_out_t headers_out;

    ngx_http_request_body_t *request_body;

    time_t lingering_time;
    time_t start_sec;
    ngx_msec_t start_msec;

    ngx_uint_t method;
    ngx_uint_t http_version;

    ngx_str_t request_line;
    ngx_str_t uri;
    ngx_str_t args;
    ngx_str_t exten;
    ngx_str_t unparsed_uri;

    ngx_str_t method_name;
    ngx_str_t http_protocol;
    ngx_str_t schema;

    ngx_chain_t *out;
    ngx_http_request_t *main;
    ngx_http_request_t *parent;
    ngx_http_postponed_request_t *postponed;
    ngx_http_post_subrequest_t *post_subrequest;
    ngx_http_posted_request_t *posted_requests;

    ngx_int_t phase_handler;
    ngx_http_handler_pt content_handler;
    ngx_uint_t access_code;

    ngx_http_variable_value_t *variables;


    ngx_uint_t ncaptures;
    int *captures;
    u_char *captures_data;


    size_t limit_rate;
    size_t limit_rate_after;


    size_t header_size;

    off_t request_length;

    ngx_uint_t err_status;

    ngx_http_connection_t *http_connection;
    ngx_http_v2_stream_t *stream;

    ngx_http_log_handler_pt log_handler;

    ngx_http_cleanup_t *cleanup;

    unsigned count:16;
    unsigned subrequests:8;
    unsigned blocked:8;

    unsigned aio:1;

    unsigned http_state:4;


    unsigned complex_uri:1;


    unsigned quoted_uri:1;


    unsigned plus_in_uri:1;


    unsigned empty_path_in_uri:1;

    unsigned invalid_header:1;

    unsigned add_uri_to_alias:1;
    unsigned valid_location:1;
    unsigned valid_unparsed_uri:1;
    unsigned uri_changed:1;
    unsigned uri_changes:4;

    unsigned request_body_in_single_buf:1;
    unsigned request_body_in_file_only:1;
    unsigned request_body_in_persistent_file:1;
    unsigned request_body_in_clean_file:1;
    unsigned request_body_file_group_access:1;
    unsigned request_body_file_log_level:3;
    unsigned request_body_no_buffering:1;

    unsigned subrequest_in_memory:1;
    unsigned waited:1;


    unsigned cached:1;



    unsigned gzip_tested:1;
    unsigned gzip_ok:1;
    unsigned gzip_vary:1;



    unsigned realloc_captures:1;


    unsigned proxy:1;
    unsigned bypass_cache:1;
    unsigned no_cache:1;






    unsigned limit_conn_status:2;
    unsigned limit_req_status:3;

    unsigned limit_rate_set:1;
    unsigned limit_rate_after_set:1;





    unsigned pipeline:1;
    unsigned chunked:1;
    unsigned header_only:1;
    unsigned expect_trailers:1;
    unsigned keepalive:1;
    unsigned lingering_close:1;
    unsigned discard_body:1;
    unsigned reading_body:1;
    unsigned internal:1;
    unsigned error_page:1;
    unsigned filter_finalize:1;
    unsigned post_action:1;
    unsigned request_complete:1;
    unsigned request_output:1;
    unsigned header_sent:1;
    unsigned expect_tested:1;
    unsigned root_tested:1;
    unsigned done:1;
    unsigned logged:1;

    unsigned buffered:4;

    unsigned main_filter_need_in_memory:1;
    unsigned filter_need_in_memory:1;
    unsigned filter_need_temporary:1;
    unsigned preserve_body:1;
    unsigned allow_ranges:1;
    unsigned subrequest_ranges:1;
    unsigned single_range:1;
    unsigned disable_not_modified:1;
    unsigned stat_reading:1;
    unsigned stat_writing:1;
    unsigned stat_processing:1;

    unsigned background:1;
    unsigned health_check:1;



    ngx_uint_t state;

    ngx_uint_t header_hash;
    ngx_uint_t lowcase_index;
    u_char lowcase_header[32];

    u_char *header_name_start;
    u_char *header_name_end;
    u_char *header_start;
    u_char *header_end;






    u_char *uri_start;
    u_char *uri_end;
    u_char *uri_ext;
    u_char *args_start;
    u_char *request_start;
    u_char *request_end;
    u_char *method_end;
    u_char *schema_start;
    u_char *schema_end;
    u_char *host_start;
    u_char *host_end;
    u_char *port_start;
    u_char *port_end;

    unsigned http_minor:16;
    unsigned http_major:16;
};


typedef struct {
    ngx_http_posted_request_t terminal_posted_request;
} ngx_http_ephemeral_t;





extern ngx_http_header_t ngx_http_headers_in[];
extern ngx_http_header_out_t ngx_http_headers_out[];
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_script.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_script.h" 3 4
typedef struct {
    u_char *ip;
    u_char *pos;
    ngx_http_variable_value_t *sp;

    ngx_str_t buf;
    ngx_str_t line;


    u_char *args;

    unsigned flushed:1;
    unsigned skip:1;
    unsigned quote:1;
    unsigned is_args:1;
    unsigned log:1;

    ngx_int_t status;
    ngx_http_request_t *request;
} ngx_http_script_engine_t;


typedef struct {
    ngx_conf_t *cf;
    ngx_str_t *source;

    ngx_array_t **flushes;
    ngx_array_t **lengths;
    ngx_array_t **values;

    ngx_uint_t variables;
    ngx_uint_t ncaptures;
    ngx_uint_t captures_mask;
    ngx_uint_t size;

    void *main;

    unsigned compile_args:1;
    unsigned complete_lengths:1;
    unsigned complete_values:1;
    unsigned zero:1;
    unsigned conf_prefix:1;
    unsigned root_prefix:1;

    unsigned dup_capture:1;
    unsigned args:1;
} ngx_http_script_compile_t;


typedef struct {
    ngx_str_t value;
    ngx_uint_t *flushes;
    void *lengths;
    void *values;

    union {
        size_t size;
    } u;
} ngx_http_complex_value_t;


typedef struct {
    ngx_conf_t *cf;
    ngx_str_t *value;
    ngx_http_complex_value_t *complex_value;

    unsigned zero:1;
    unsigned conf_prefix:1;
    unsigned root_prefix:1;
} ngx_http_compile_complex_value_t;


typedef void (*ngx_http_script_code_pt) (ngx_http_script_engine_t *e);
typedef size_t (*ngx_http_script_len_code_pt) (ngx_http_script_engine_t *e);


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t len;
} ngx_http_script_copy_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t index;
} ngx_http_script_var_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    ngx_http_set_variable_pt handler;
    uintptr_t data;
} ngx_http_script_var_handler_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t n;
} ngx_http_script_copy_capture_code_t;




typedef struct {
    ngx_http_script_code_pt code;
    ngx_http_regex_t *regex;
    ngx_array_t *lengths;
    uintptr_t size;
    uintptr_t status;
    uintptr_t next;

    unsigned test:1;
    unsigned negative_test:1;
    unsigned uri:1;
    unsigned args:1;


    unsigned add_args:1;

    unsigned redirect:1;
    unsigned break_cycle:1;

    ngx_str_t name;
} ngx_http_script_regex_code_t;


typedef struct {
    ngx_http_script_code_pt code;

    unsigned uri:1;
    unsigned args:1;


    unsigned add_args:1;

    unsigned redirect:1;
} ngx_http_script_regex_end_code_t;




typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t conf_prefix;
} ngx_http_script_full_name_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t status;
    ngx_http_complex_value_t text;
} ngx_http_script_return_code_t;


typedef enum {
    ngx_http_script_file_plain = 0,
    ngx_http_script_file_not_plain,
    ngx_http_script_file_dir,
    ngx_http_script_file_not_dir,
    ngx_http_script_file_exists,
    ngx_http_script_file_not_exists,
    ngx_http_script_file_exec,
    ngx_http_script_file_not_exec
} ngx_http_script_file_op_e;


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t op;
} ngx_http_script_file_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t next;
    void **loc_conf;
} ngx_http_script_if_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    ngx_array_t *lengths;
} ngx_http_script_complex_value_code_t;


typedef struct {
    ngx_http_script_code_pt code;
    uintptr_t value;
    uintptr_t text_len;
    uintptr_t text_data;
} ngx_http_script_value_code_t;


void ngx_http_script_flush_complex_value(ngx_http_request_t *r,
    ngx_http_complex_value_t *val);
ngx_int_t ngx_http_complex_value(ngx_http_request_t *r,
    ngx_http_complex_value_t *val, ngx_str_t *value);
size_t ngx_http_complex_value_size(ngx_http_request_t *r,
    ngx_http_complex_value_t *val, size_t default_value);
ngx_int_t ngx_http_compile_complex_value(ngx_http_compile_complex_value_t *ccv);
char *ngx_http_set_complex_value_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
char *ngx_http_set_complex_value_zero_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
char *ngx_http_set_complex_value_size_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);


ngx_int_t ngx_http_test_predicates(ngx_http_request_t *r,
    ngx_array_t *predicates);
ngx_int_t ngx_http_test_required_predicates(ngx_http_request_t *r,
    ngx_array_t *predicates);
char *ngx_http_set_predicate_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);

ngx_uint_t ngx_http_script_variables_count(ngx_str_t *value);
ngx_int_t ngx_http_script_compile(ngx_http_script_compile_t *sc);
u_char *ngx_http_script_run(ngx_http_request_t *r, ngx_str_t *value,
    void *code_lengths, size_t reserved, void *code_values);
void ngx_http_script_flush_no_cacheable_variables(ngx_http_request_t *r,
    ngx_array_t *indices);

void *ngx_http_script_start_code(ngx_pool_t *pool, ngx_array_t **codes,
    size_t size);
void *ngx_http_script_add_code(ngx_array_t *codes, size_t size, void *code);

size_t ngx_http_script_copy_len_code(ngx_http_script_engine_t *e);
void ngx_http_script_copy_code(ngx_http_script_engine_t *e);
size_t ngx_http_script_copy_var_len_code(ngx_http_script_engine_t *e);
void ngx_http_script_copy_var_code(ngx_http_script_engine_t *e);
size_t ngx_http_script_copy_capture_len_code(ngx_http_script_engine_t *e);
void ngx_http_script_copy_capture_code(ngx_http_script_engine_t *e);
size_t ngx_http_script_mark_args_code(ngx_http_script_engine_t *e);
void ngx_http_script_start_args_code(ngx_http_script_engine_t *e);

void ngx_http_script_regex_start_code(ngx_http_script_engine_t *e);
void ngx_http_script_regex_end_code(ngx_http_script_engine_t *e);

void ngx_http_script_return_code(ngx_http_script_engine_t *e);
void ngx_http_script_break_code(ngx_http_script_engine_t *e);
void ngx_http_script_if_code(ngx_http_script_engine_t *e);
void ngx_http_script_equal_code(ngx_http_script_engine_t *e);
void ngx_http_script_not_equal_code(ngx_http_script_engine_t *e);
void ngx_http_script_file_code(ngx_http_script_engine_t *e);
void ngx_http_script_complex_value_code(ngx_http_script_engine_t *e);
void ngx_http_script_value_code(ngx_http_script_engine_t *e);
void ngx_http_script_set_var_code(ngx_http_script_engine_t *e);
void ngx_http_script_var_set_handler_code(ngx_http_script_engine_t *e);
void ngx_http_script_var_code(ngx_http_script_engine_t *e);
void ngx_http_script_nop_code(ngx_http_script_engine_t *e);
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 1 3 4
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
struct ngx_event_s {
    void *data;

    unsigned write:1;

    unsigned accept:1;


    unsigned instance:1;





    unsigned active:1;

    unsigned disabled:1;


    unsigned ready:1;

    unsigned oneshot:1;


    unsigned complete:1;

    unsigned eof:1;
    unsigned error:1;

    unsigned timedout:1;
    unsigned timer_set:1;

    unsigned delayed:1;

    unsigned deferred_accept:1;


    unsigned pending_eof:1;

    unsigned posted:1;

    unsigned closed:1;


    unsigned channel:1;
    unsigned resolver:1;

    unsigned cancelable:1;


    unsigned kq_vnode:1;


    int kq_errno;
# 101 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
    int available;

    ngx_event_handler_pt handler;






    ngx_uint_t index;

    ngx_log_t *log;

    ngx_rbtree_node_t timer;


    ngx_queue_t queue;
# 138 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
};
# 166 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
typedef struct {
    ngx_int_t (*add)(ngx_event_t *ev, ngx_int_t event, ngx_uint_t flags);
    ngx_int_t (*del)(ngx_event_t *ev, ngx_int_t event, ngx_uint_t flags);

    ngx_int_t (*enable)(ngx_event_t *ev, ngx_int_t event, ngx_uint_t flags);
    ngx_int_t (*disable)(ngx_event_t *ev, ngx_int_t event, ngx_uint_t flags);

    ngx_int_t (*add_conn)(ngx_connection_t *c);
    ngx_int_t (*del_conn)(ngx_connection_t *c, ngx_uint_t flags);

    ngx_int_t (*notify)(ngx_event_handler_pt handler);

    ngx_int_t (*process_events)(ngx_cycle_t *cycle, ngx_msec_t timer,
                                 ngx_uint_t flags);

    ngx_int_t (*init)(ngx_cycle_t *cycle, ngx_msec_t timer);
    void (*done)(ngx_cycle_t *cycle);
} ngx_event_actions_t;


extern ngx_event_actions_t ngx_event_actions;
# 414 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
extern ngx_os_io_t ngx_io;
# 429 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
typedef struct {
    ngx_uint_t connections;
    ngx_uint_t use;

    ngx_flag_t multi_accept;
    ngx_flag_t accept_mutex;

    ngx_msec_t accept_mutex_delay;

    u_char *name;




} ngx_event_conf_t;


typedef struct {
    ngx_str_t *name;

    void *(*create_conf)(ngx_cycle_t *cycle);
    char *(*init_conf)(ngx_cycle_t *cycle, void *conf);

    ngx_event_actions_t actions;
} ngx_event_module_t;


extern ngx_atomic_t *ngx_connection_counter;

extern ngx_atomic_t *ngx_accept_mutex_ptr;
extern ngx_shmtx_t ngx_accept_mutex;
extern ngx_uint_t ngx_use_accept_mutex;
extern ngx_uint_t ngx_accept_events;
extern ngx_uint_t ngx_accept_mutex_held;
extern ngx_msec_t ngx_accept_mutex_delay;
extern ngx_int_t ngx_accept_disabled;
# 484 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
extern sig_atomic_t ngx_event_timer_alarm;
extern ngx_uint_t ngx_event_flags;
extern ngx_module_t ngx_events_module;
extern ngx_module_t ngx_event_core_module;







void ngx_event_accept(ngx_event_t *ev);

void ngx_event_recvmsg(ngx_event_t *ev);
void ngx_udp_rbtree_insert_value(ngx_rbtree_node_t *temp,
    ngx_rbtree_node_t *node, ngx_rbtree_node_t *sentinel);

void ngx_delete_udp_connection(void *data);
ngx_int_t ngx_trylock_accept_mutex(ngx_cycle_t *cycle);
ngx_int_t ngx_enable_accept_events(ngx_cycle_t *cycle);
u_char *ngx_accept_log_error(ngx_log_t *log, u_char *buf, size_t len);





void ngx_process_events_and_timers(ngx_cycle_t *cycle);
ngx_int_t ngx_handle_read_event(ngx_event_t *rev, ngx_uint_t flags);
ngx_int_t ngx_handle_write_event(ngx_event_t *wev, size_t lowat);
# 522 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 3 4
ngx_int_t ngx_send_lowat(ngx_connection_t *c, size_t lowat);






# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_timer.h" 1 3 4
# 14 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_timer.h" 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 1 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_timer.h" 2 3 4







ngx_int_t ngx_event_timer_init(ngx_log_t *log);
ngx_msec_t ngx_event_find_timer(void);
void ngx_event_expire_timers(void);
ngx_int_t ngx_event_no_timers_left(void);


extern ngx_rbtree_t ngx_event_timer_rbtree;


static inline void
ngx_event_del_timer(ngx_event_t *ev)
{
   

                                                             ;

    ngx_rbtree_delete(&ngx_event_timer_rbtree, &ev->timer);







    ev->timer_set = 0;
}


static inline void
ngx_event_add_timer(ngx_event_t *ev, ngx_msec_t timer)
{
    ngx_msec_t key;
    ngx_msec_int_t diff;

    key = ngx_current_msec + timer;

    if (ev->timer_set) {







        diff = (ngx_msec_int_t) (key - ev->timer.key);

        if ((((diff) >= 0) ? (diff) : - (diff)) < 300) {
           

                                                                          ;
            return;
        }

        ngx_event_del_timer(ev);
    }

    ev->timer.key = key;

   

                                                                    ;

    ngx_rbtree_insert(&ngx_event_timer_rbtree, &ev->timer);

    ev->timer_set = 1;
}
# 530 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_posted.h" 1 3 4
# 41 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_posted.h" 3 4
void ngx_event_process_posted(ngx_cycle_t *cycle, ngx_queue_t *posted);
void ngx_event_move_posted_next(ngx_cycle_t *cycle);


extern ngx_queue_t ngx_posted_accept_events;
extern ngx_queue_t ngx_posted_next_events;
extern ngx_queue_t ngx_posted_events;
# 531 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event.h" 2 3 4
# 15 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_connect.h" 1 3 4
# 22 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_connect.h" 3 4
typedef struct ngx_peer_connection_s ngx_peer_connection_t;

typedef ngx_int_t (*ngx_event_get_peer_pt)(ngx_peer_connection_t *pc,
    void *data);
typedef void (*ngx_event_free_peer_pt)(ngx_peer_connection_t *pc, void *data,
    ngx_uint_t state);
typedef void (*ngx_event_notify_peer_pt)(ngx_peer_connection_t *pc,
    void *data, ngx_uint_t type);
typedef ngx_int_t (*ngx_event_set_peer_session_pt)(ngx_peer_connection_t *pc,
    void *data);
typedef void (*ngx_event_save_peer_session_pt)(ngx_peer_connection_t *pc,
    void *data);


struct ngx_peer_connection_s {
    ngx_connection_t *connection;

    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t *name;

    ngx_uint_t tries;
    ngx_msec_t start_time;

    ngx_event_get_peer_pt get;
    ngx_event_free_peer_pt free;
    ngx_event_notify_peer_pt notify;
    void *data;






    ngx_addr_t *local;

    int type;
    int rcvbuf;

    ngx_log_t *log;

    unsigned cached:1;
    unsigned transparent:1;
    unsigned so_keepalive:1;
    unsigned down:1;


    unsigned log_error:2;

   
   
};


ngx_int_t ngx_event_connect_peer(ngx_peer_connection_t *pc);
ngx_int_t ngx_event_get_peer(ngx_peer_connection_t *pc, void *data);
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_pipe.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_pipe.h" 3 4
typedef struct ngx_event_pipe_s ngx_event_pipe_t;

typedef ngx_int_t (*ngx_event_pipe_input_filter_pt)(ngx_event_pipe_t *p,
                                                    ngx_buf_t *buf);
typedef ngx_int_t (*ngx_event_pipe_output_filter_pt)(void *data,
                                                     ngx_chain_t *chain);


struct ngx_event_pipe_s {
    ngx_connection_t *upstream;
    ngx_connection_t *downstream;

    ngx_chain_t *free_raw_bufs;
    ngx_chain_t *in;
    ngx_chain_t **last_in;

    ngx_chain_t *writing;

    ngx_chain_t *out;
    ngx_chain_t *free;
    ngx_chain_t *busy;






    ngx_event_pipe_input_filter_pt input_filter;
    void *input_ctx;

    ngx_event_pipe_output_filter_pt output_filter;
    void *output_ctx;
# 57 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/event/ngx_event_pipe.h" 3 4
    unsigned read:1;
    unsigned cacheable:1;
    unsigned single_buf:1;
    unsigned free_bufs:1;
    unsigned upstream_done:1;
    unsigned upstream_error:1;
    unsigned upstream_eof:1;
    unsigned upstream_blocked:1;
    unsigned downstream_done:1;
    unsigned downstream_error:1;
    unsigned cyclic_temp_file:1;
    unsigned aio:1;

    ngx_int_t allocated;
    ngx_bufs_t bufs;
    ngx_buf_tag_t tag;

    ssize_t busy_size;

    off_t read_length;
    off_t length;

    off_t max_temp_file_size;
    ssize_t temp_file_write_size;

    ngx_msec_t read_timeout;
    ngx_msec_t send_timeout;
    ssize_t send_lowat;

    ngx_pool_t *pool;
    ngx_log_t *log;

    ngx_chain_t *preread_bufs;
    size_t preread_size;
    ngx_buf_t *buf_to_file;

    size_t limit_rate;
    time_t start_sec;

    ngx_temp_file_t *temp_file;

               int num;
};


ngx_int_t ngx_event_pipe(ngx_event_pipe_t *p, ngx_int_t do_write);
ngx_int_t ngx_event_pipe_copy_input_filter(ngx_event_pipe_t *p, ngx_buf_t *buf);
ngx_int_t ngx_event_pipe_add_free_buf(ngx_event_pipe_t *p, ngx_buf_t *b);
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 2 3 4
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 3 4
typedef struct {
    ngx_uint_t status;
    ngx_msec_t response_time;
    ngx_msec_t connect_time;
    ngx_msec_t header_time;
    ngx_msec_t queue_time;
    off_t response_length;
    off_t bytes_received;
    off_t bytes_sent;

    ngx_str_t *peer;
} ngx_http_upstream_state_t;


typedef struct {
    ngx_hash_t headers_in_hash;
    ngx_array_t upstreams;

} ngx_http_upstream_main_conf_t;

typedef struct ngx_http_upstream_srv_conf_s ngx_http_upstream_srv_conf_t;

typedef ngx_int_t (*ngx_http_upstream_init_pt)(ngx_conf_t *cf,
    ngx_http_upstream_srv_conf_t *us);
typedef ngx_int_t (*ngx_http_upstream_init_peer_pt)(ngx_http_request_t *r,
    ngx_http_upstream_srv_conf_t *us);


typedef struct {
    ngx_http_upstream_init_pt init_upstream;
    ngx_http_upstream_init_peer_pt init;
    void *data;
} ngx_http_upstream_peer_t;


typedef struct {
    ngx_str_t name;
    ngx_addr_t *addrs;
    ngx_uint_t naddrs;
    ngx_uint_t weight;
    ngx_uint_t max_conns;
    ngx_uint_t max_fails;
    time_t fail_timeout;
    ngx_msec_t slow_start;
    ngx_uint_t down;

    unsigned backup:1;

   
   
} ngx_http_upstream_server_t;
# 121 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 3 4
struct ngx_http_upstream_srv_conf_s {
    ngx_http_upstream_peer_t peer;
    void **srv_conf;

    ngx_array_t *servers;

    ngx_uint_t flags;
    ngx_str_t host;
    u_char *file_name;
    ngx_uint_t line;
    in_port_t port;
    ngx_uint_t no_port;


    ngx_shm_zone_t *shm_zone;

};


typedef struct {
    ngx_addr_t *addr;
    ngx_http_complex_value_t *value;



} ngx_http_upstream_local_t;


typedef struct {
    ngx_http_upstream_srv_conf_t *upstream;

    ngx_msec_t connect_timeout;
    ngx_msec_t send_timeout;
    ngx_msec_t read_timeout;
    ngx_msec_t next_upstream_timeout;

    size_t send_lowat;
    size_t buffer_size;
    size_t limit_rate;

    size_t busy_buffers_size;
    size_t max_temp_file_size;
    size_t temp_file_write_size;

    size_t busy_buffers_size_conf;
    size_t max_temp_file_size_conf;
    size_t temp_file_write_size_conf;

    ngx_bufs_t bufs;

    ngx_uint_t ignore_headers;
    ngx_uint_t next_upstream;
    ngx_uint_t store_access;
    ngx_uint_t next_upstream_tries;
    ngx_flag_t buffering;
    ngx_flag_t request_buffering;
    ngx_flag_t pass_request_headers;
    ngx_flag_t pass_request_body;

    ngx_flag_t ignore_client_abort;
    ngx_flag_t intercept_errors;
    ngx_flag_t cyclic_temp_file;
    ngx_flag_t force_ranges;

    ngx_path_t *temp_path;

    ngx_hash_t hide_headers_hash;
    ngx_array_t *hide_headers;
    ngx_array_t *pass_headers;

    ngx_http_upstream_local_t *local;
    ngx_flag_t socket_keepalive;


    ngx_shm_zone_t *cache_zone;
    ngx_http_complex_value_t *cache_value;

    ngx_uint_t cache_min_uses;
    ngx_uint_t cache_use_stale;
    ngx_uint_t cache_methods;

    off_t cache_max_range_offset;

    ngx_flag_t cache_lock;
    ngx_msec_t cache_lock_timeout;
    ngx_msec_t cache_lock_age;

    ngx_flag_t cache_revalidate;
    ngx_flag_t cache_convert_head;
    ngx_flag_t cache_background_update;

    ngx_array_t *cache_valid;
    ngx_array_t *cache_bypass;
    ngx_array_t *cache_purge;
    ngx_array_t *no_cache;


    ngx_array_t *store_lengths;
    ngx_array_t *store_values;


    signed cache:2;

    signed store:2;
    unsigned intercept_404:1;
    unsigned change_buffering:1;
    unsigned pass_trailers:1;
    unsigned preserve_output:1;
# 243 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream.h" 3 4
    ngx_str_t module;

   
   
} ngx_http_upstream_conf_t;


typedef struct {
    ngx_str_t name;
    ngx_http_header_handler_pt handler;
    ngx_uint_t offset;
    ngx_http_header_handler_pt copy_handler;
    ngx_uint_t conf;
    ngx_uint_t redirect;
} ngx_http_upstream_header_t;


typedef struct {
    ngx_list_t headers;
    ngx_list_t trailers;

    ngx_uint_t status_n;
    ngx_str_t status_line;

    ngx_table_elt_t *status;
    ngx_table_elt_t *date;
    ngx_table_elt_t *server;
    ngx_table_elt_t *connection;

    ngx_table_elt_t *expires;
    ngx_table_elt_t *etag;
    ngx_table_elt_t *x_accel_expires;
    ngx_table_elt_t *x_accel_redirect;
    ngx_table_elt_t *x_accel_limit_rate;

    ngx_table_elt_t *content_type;
    ngx_table_elt_t *content_length;

    ngx_table_elt_t *last_modified;
    ngx_table_elt_t *location;
    ngx_table_elt_t *accept_ranges;
    ngx_table_elt_t *www_authenticate;
    ngx_table_elt_t *transfer_encoding;
    ngx_table_elt_t *vary;


    ngx_table_elt_t *content_encoding;


    ngx_array_t cache_control;
    ngx_array_t cookies;

    off_t content_length_n;
    time_t last_modified_time;

    unsigned connection_close:1;
    unsigned chunked:1;
} ngx_http_upstream_headers_in_t;


typedef struct {
    ngx_str_t host;
    in_port_t port;
    ngx_uint_t no_port;

    ngx_uint_t naddrs;
    ngx_resolver_addr_t *addrs;

    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t name;

    ngx_resolver_ctx_t *ctx;
} ngx_http_upstream_resolved_t;


typedef void (*ngx_http_upstream_handler_pt)(ngx_http_request_t *r,
    ngx_http_upstream_t *u);


struct ngx_http_upstream_s {
    ngx_http_upstream_handler_pt read_event_handler;
    ngx_http_upstream_handler_pt write_event_handler;

    ngx_peer_connection_t peer;

    ngx_event_pipe_t *pipe;

    ngx_chain_t *request_bufs;

    ngx_output_chain_ctx_t output;
    ngx_chain_writer_ctx_t writer;

    ngx_http_upstream_conf_t *conf;
    ngx_http_upstream_srv_conf_t *upstream;

    ngx_array_t *caches;


    ngx_http_upstream_headers_in_t headers_in;

    ngx_http_upstream_resolved_t *resolved;

    ngx_buf_t from_client;

    ngx_buf_t buffer;
    off_t length;

    ngx_chain_t *out_bufs;
    ngx_chain_t *busy_bufs;
    ngx_chain_t *free_bufs;

    ngx_int_t (*input_filter_init)(void *data);
    ngx_int_t (*input_filter)(void *data, ssize_t bytes);
    void *input_filter_ctx;


    ngx_int_t (*create_key)(ngx_http_request_t *r);

    ngx_int_t (*create_request)(ngx_http_request_t *r);
    ngx_int_t (*reinit_request)(ngx_http_request_t *r);
    ngx_int_t (*process_header)(ngx_http_request_t *r);
    void (*abort_request)(ngx_http_request_t *r);
    void (*finalize_request)(ngx_http_request_t *r,
                                         ngx_int_t rc);
    ngx_int_t (*rewrite_redirect)(ngx_http_request_t *r,
                                         ngx_table_elt_t *h, size_t prefix);
    ngx_int_t (*rewrite_cookie)(ngx_http_request_t *r,
                                         ngx_table_elt_t *h);

    ngx_msec_t start_time;

    ngx_http_upstream_state_t *state;

    ngx_str_t method;
    ngx_str_t schema;
    ngx_str_t uri;





    ngx_http_cleanup_pt *cleanup;

    unsigned store:1;
    unsigned cacheable:1;
    unsigned accel:1;
    unsigned ssl:1;

    unsigned cache_status:3;


    unsigned buffering:1;
    unsigned keepalive:1;
    unsigned upgrade:1;
    unsigned error:1;

    unsigned request_sent:1;
    unsigned request_body_sent:1;
    unsigned request_body_blocked:1;
    unsigned header_sent:1;
};


typedef struct {
    ngx_uint_t status;
    ngx_uint_t mask;
} ngx_http_upstream_next_t;


typedef struct {
    ngx_str_t key;
    ngx_str_t value;
    ngx_uint_t skip_empty;
} ngx_http_upstream_param_t;


ngx_int_t ngx_http_upstream_create(ngx_http_request_t *r);
void ngx_http_upstream_init(ngx_http_request_t *r);
ngx_int_t ngx_http_upstream_non_buffered_filter_init(void *data);
ngx_int_t ngx_http_upstream_non_buffered_filter(void *data, ssize_t bytes);
ngx_http_upstream_srv_conf_t *ngx_http_upstream_add(ngx_conf_t *cf,
    ngx_url_t *u, ngx_uint_t flags);
char *ngx_http_upstream_bind_set_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
char *ngx_http_upstream_param_set_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
ngx_int_t ngx_http_upstream_hide_headers_hash(ngx_conf_t *cf,
    ngx_http_upstream_conf_t *conf, ngx_http_upstream_conf_t *prev,
    ngx_str_t *default_hide_headers, ngx_hash_init_t *hash);






extern ngx_module_t ngx_http_upstream_module;
extern ngx_conf_bitmask_t ngx_http_upstream_cache_method_mask[];
extern ngx_conf_bitmask_t ngx_http_upstream_ignore_headers_masks[];
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream_round_robin.h" 1 3 4
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream_round_robin.h" 3 4
typedef struct ngx_http_upstream_rr_peer_s ngx_http_upstream_rr_peer_t;

struct ngx_http_upstream_rr_peer_s {
    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t name;
    ngx_str_t server;

    ngx_int_t current_weight;
    ngx_int_t effective_weight;
    ngx_int_t weight;

    ngx_uint_t conns;
    ngx_uint_t max_conns;

    ngx_uint_t fails;
    time_t accessed;
    time_t checked;

    ngx_uint_t max_fails;
    time_t fail_timeout;
    ngx_msec_t slow_start;
    ngx_msec_t start_time;

    ngx_uint_t down;







    ngx_atomic_t lock;


    ngx_http_upstream_rr_peer_t *next;

   
   
};


typedef struct ngx_http_upstream_rr_peers_s ngx_http_upstream_rr_peers_t;

struct ngx_http_upstream_rr_peers_s {
    ngx_uint_t number;


    ngx_slab_pool_t *shpool;
    ngx_atomic_t rwlock;
    ngx_http_upstream_rr_peers_t *zone_next;


    ngx_uint_t total_weight;
    ngx_uint_t tries;

    unsigned single:1;
    unsigned weighted:1;

    ngx_str_t *name;

    ngx_http_upstream_rr_peers_t *next;

    ngx_http_upstream_rr_peer_t *peer;
};
# 128 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_upstream_round_robin.h" 3 4
typedef struct {
    ngx_uint_t config;
    ngx_http_upstream_rr_peers_t *peers;
    ngx_http_upstream_rr_peer_t *current;
    uintptr_t *tried;
    uintptr_t data;
} ngx_http_upstream_rr_peer_data_t;


ngx_int_t ngx_http_upstream_init_round_robin(ngx_conf_t *cf,
    ngx_http_upstream_srv_conf_t *us);
ngx_int_t ngx_http_upstream_init_round_robin_peer(ngx_http_request_t *r,
    ngx_http_upstream_srv_conf_t *us);
ngx_int_t ngx_http_upstream_create_round_robin_peer(ngx_http_request_t *r,
    ngx_http_upstream_resolved_t *ur);
ngx_int_t ngx_http_upstream_get_round_robin_peer(ngx_peer_connection_t *pc,
    void *data);
void ngx_http_upstream_free_round_robin_peer(ngx_peer_connection_t *pc,
    void *data, ngx_uint_t state);
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_core_module.h" 1 3 4
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_core_module.h" 3 4
typedef struct ngx_http_location_tree_node_s ngx_http_location_tree_node_t;
typedef struct ngx_http_core_loc_conf_s ngx_http_core_loc_conf_t;


typedef struct {
    struct sockaddr *sockaddr;
    socklen_t socklen;
    ngx_str_t addr_text;

    unsigned set:1;
    unsigned default_server:1;
    unsigned bind:1;
    unsigned wildcard:1;
    unsigned ssl:1;
    unsigned http2:1;

    unsigned ipv6only:1;

    unsigned deferred_accept:1;
    unsigned reuseport:1;
    unsigned so_keepalive:2;
    unsigned proxy_protocol:1;

    int backlog;
    int rcvbuf;
    int sndbuf;




    int fastopen;
# 104 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_core_module.h" 3 4
} ngx_http_listen_opt_t;


typedef enum {
    NGX_HTTP_POST_READ_PHASE = 0,

    NGX_HTTP_SERVER_REWRITE_PHASE,

    NGX_HTTP_FIND_CONFIG_PHASE,
    NGX_HTTP_REWRITE_PHASE,
    NGX_HTTP_POST_REWRITE_PHASE,

    NGX_HTTP_PREACCESS_PHASE,

    NGX_HTTP_ACCESS_PHASE,
    NGX_HTTP_POST_ACCESS_PHASE,

    NGX_HTTP_PRECONTENT_PHASE,

    NGX_HTTP_CONTENT_PHASE,

    NGX_HTTP_LOG_PHASE
} ngx_http_phases;

typedef struct ngx_http_phase_handler_s ngx_http_phase_handler_t;

typedef ngx_int_t (*ngx_http_phase_handler_pt)(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);

struct ngx_http_phase_handler_s {
    ngx_http_phase_handler_pt checker;
    ngx_http_handler_pt handler;
    ngx_uint_t next;
};


typedef struct {
    ngx_http_phase_handler_t *handlers;
    ngx_uint_t server_rewrite_index;
    ngx_uint_t location_rewrite_index;
} ngx_http_phase_engine_t;


typedef struct {
    ngx_array_t handlers;
} ngx_http_phase_t;


typedef struct {
    ngx_array_t servers;

    ngx_http_phase_engine_t phase_engine;

    ngx_hash_t headers_in_hash;

    ngx_hash_t variables_hash;

    ngx_array_t variables;
    ngx_array_t prefix_variables;
    ngx_uint_t ncaptures;

    ngx_uint_t server_names_hash_max_size;
    ngx_uint_t server_names_hash_bucket_size;

    ngx_uint_t variables_hash_max_size;
    ngx_uint_t variables_hash_bucket_size;

    ngx_hash_keys_arrays_t *variables_keys;

    ngx_array_t *ports;

    ngx_http_phase_t phases[NGX_HTTP_LOG_PHASE + 1];
} ngx_http_core_main_conf_t;


typedef struct {

    ngx_array_t server_names;


    ngx_http_conf_ctx_t *ctx;

    u_char *file_name;
    ngx_uint_t line;

    ngx_str_t server_name;

    size_t connection_pool_size;
    size_t request_pool_size;
    size_t client_header_buffer_size;

    ngx_bufs_t large_client_header_buffers;

    ngx_msec_t client_header_timeout;

    ngx_flag_t ignore_invalid_headers;
    ngx_flag_t merge_slashes;
    ngx_flag_t underscores_in_headers;

    unsigned listen:1;

    unsigned captures:1;


    ngx_http_core_loc_conf_t **named_locations;
} ngx_http_core_srv_conf_t;





typedef struct {

    ngx_http_regex_t *regex;

    ngx_http_core_srv_conf_t *server;
    ngx_str_t name;
} ngx_http_server_name_t;


typedef struct {
    ngx_hash_combined_t names;

    ngx_uint_t nregex;
    ngx_http_server_name_t *regex;
} ngx_http_virtual_names_t;


struct ngx_http_addr_conf_s {

    ngx_http_core_srv_conf_t *default_server;

    ngx_http_virtual_names_t *virtual_names;

    unsigned ssl:1;
    unsigned http2:1;
    unsigned proxy_protocol:1;
};


typedef struct {
    in_addr_t addr;
    ngx_http_addr_conf_t conf;
} ngx_http_in_addr_t;




typedef struct {
    struct in6_addr addr6;
    ngx_http_addr_conf_t conf;
} ngx_http_in6_addr_t;




typedef struct {

    void *addrs;
    ngx_uint_t naddrs;
} ngx_http_port_t;


typedef struct {
    ngx_int_t family;
    in_port_t port;
    ngx_array_t addrs;
} ngx_http_conf_port_t;


typedef struct {
    ngx_http_listen_opt_t opt;

    ngx_hash_t hash;
    ngx_hash_wildcard_t *wc_head;
    ngx_hash_wildcard_t *wc_tail;


    ngx_uint_t nregex;
    ngx_http_server_name_t *regex;



    ngx_http_core_srv_conf_t *default_server;
    ngx_array_t servers;
} ngx_http_conf_addr_t;


typedef struct {
    ngx_int_t status;
    ngx_int_t overwrite;
    ngx_http_complex_value_t value;
    ngx_str_t args;
} ngx_http_err_page_t;


struct ngx_http_core_loc_conf_s {
    ngx_str_t name;
    ngx_str_t escaped_name;


    ngx_http_regex_t *regex;


    unsigned noname:1;
    unsigned lmt_excpt:1;
    unsigned named:1;

    unsigned exact_match:1;
    unsigned noregex:1;

    unsigned auto_redirect:1;

    unsigned gzip_disable_msie6:2;
    unsigned gzip_disable_degradation:2;


    ngx_http_location_tree_node_t *static_locations;

    ngx_http_core_loc_conf_t **regex_locations;



    void **loc_conf;

    uint32_t limit_except;
    void **limit_except_loc_conf;

    ngx_http_handler_pt handler;


    size_t alias;
    ngx_str_t root;
    ngx_str_t post_action;

    ngx_array_t *root_lengths;
    ngx_array_t *root_values;

    ngx_array_t *types;
    ngx_hash_t types_hash;
    ngx_str_t default_type;

    off_t client_max_body_size;
    off_t directio;
    off_t directio_alignment;

    size_t client_body_buffer_size;
    size_t send_lowat;
    size_t postpone_output;
    size_t sendfile_max_chunk;
    size_t read_ahead;
    size_t subrequest_output_buffer_size;


    ngx_http_complex_value_t *limit_rate;
    ngx_http_complex_value_t *limit_rate_after;

    ngx_msec_t client_body_timeout;
    ngx_msec_t send_timeout;
    ngx_msec_t keepalive_time;
    ngx_msec_t keepalive_timeout;
    ngx_msec_t lingering_time;
    ngx_msec_t lingering_timeout;
    ngx_msec_t resolver_timeout;
    ngx_msec_t auth_delay;

    ngx_resolver_t *resolver;

    time_t keepalive_header;

    ngx_uint_t keepalive_requests;
    ngx_uint_t keepalive_disable;
    ngx_uint_t satisfy;
    ngx_uint_t lingering_close;
    ngx_uint_t if_modified_since;
    ngx_uint_t max_ranges;
    ngx_uint_t client_body_in_file_only;

    ngx_flag_t client_body_in_single_buffer;

    ngx_flag_t internal;
    ngx_flag_t sendfile;
    ngx_flag_t aio;
    ngx_flag_t aio_write;
    ngx_flag_t tcp_nopush;
    ngx_flag_t tcp_nodelay;
    ngx_flag_t reset_timedout_connection;
    ngx_flag_t absolute_redirect;
    ngx_flag_t server_name_in_redirect;
    ngx_flag_t port_in_redirect;
    ngx_flag_t msie_padding;
    ngx_flag_t msie_refresh;
    ngx_flag_t log_not_found;
    ngx_flag_t log_subrequest;
    ngx_flag_t recursive_error_pages;
    ngx_uint_t server_tokens;
    ngx_flag_t chunked_transfer_encoding;
    ngx_flag_t etag;


    ngx_flag_t gzip_vary;

    ngx_uint_t gzip_http_version;
    ngx_uint_t gzip_proxied;


    ngx_array_t *gzip_disable;
# 420 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_core_module.h" 3 4
    ngx_uint_t disable_symlinks;
    ngx_http_complex_value_t *disable_symlinks_from;


    ngx_array_t *error_pages;

    ngx_path_t *client_body_temp_path;

    ngx_open_file_cache_t *open_file_cache;
    time_t open_file_cache_valid;
    ngx_uint_t open_file_cache_min_uses;
    ngx_flag_t open_file_cache_errors;
    ngx_flag_t open_file_cache_events;

    ngx_log_t *error_log;

    ngx_uint_t types_hash_max_size;
    ngx_uint_t types_hash_bucket_size;

    ngx_queue_t *locations;




};


typedef struct {
    ngx_queue_t queue;
    ngx_http_core_loc_conf_t *exact;
    ngx_http_core_loc_conf_t *inclusive;
    ngx_str_t *name;
    u_char *file_name;
    ngx_uint_t line;
    ngx_queue_t list;
} ngx_http_location_queue_t;


struct ngx_http_location_tree_node_s {
    ngx_http_location_tree_node_t *left;
    ngx_http_location_tree_node_t *right;
    ngx_http_location_tree_node_t *tree;

    ngx_http_core_loc_conf_t *exact;
    ngx_http_core_loc_conf_t *inclusive;

    u_char auto_redirect;
    u_char len;
    u_char name[1];
};


void ngx_http_core_run_phases(ngx_http_request_t *r);
ngx_int_t ngx_http_core_generic_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);
ngx_int_t ngx_http_core_rewrite_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);
ngx_int_t ngx_http_core_find_config_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);
ngx_int_t ngx_http_core_post_rewrite_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);
ngx_int_t ngx_http_core_access_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);
ngx_int_t ngx_http_core_post_access_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);
ngx_int_t ngx_http_core_content_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph);


void *ngx_http_test_content_type(ngx_http_request_t *r, ngx_hash_t *types_hash);
ngx_int_t ngx_http_set_content_type(ngx_http_request_t *r);
void ngx_http_set_exten(ngx_http_request_t *r);
ngx_int_t ngx_http_set_etag(ngx_http_request_t *r);
void ngx_http_weak_etag(ngx_http_request_t *r);
ngx_int_t ngx_http_send_response(ngx_http_request_t *r, ngx_uint_t status,
    ngx_str_t *ct, ngx_http_complex_value_t *cv);
u_char *ngx_http_map_uri_to_path(ngx_http_request_t *r, ngx_str_t *name,
    size_t *root_length, size_t reserved);
ngx_int_t ngx_http_auth_basic_user(ngx_http_request_t *r);

ngx_int_t ngx_http_gzip_ok(ngx_http_request_t *r);



ngx_int_t ngx_http_subrequest(ngx_http_request_t *r,
    ngx_str_t *uri, ngx_str_t *args, ngx_http_request_t **psr,
    ngx_http_post_subrequest_t *ps, ngx_uint_t flags);
ngx_int_t ngx_http_internal_redirect(ngx_http_request_t *r,
    ngx_str_t *uri, ngx_str_t *args);
ngx_int_t ngx_http_named_location(ngx_http_request_t *r, ngx_str_t *name);


ngx_http_cleanup_t *ngx_http_cleanup_add(ngx_http_request_t *r, size_t size);


typedef ngx_int_t (*ngx_http_output_header_filter_pt)(ngx_http_request_t *r);
typedef ngx_int_t (*ngx_http_output_body_filter_pt)
    (ngx_http_request_t *r, ngx_chain_t *chain);
typedef ngx_int_t (*ngx_http_request_body_filter_pt)
    (ngx_http_request_t *r, ngx_chain_t *chain);


ngx_int_t ngx_http_output_filter(ngx_http_request_t *r, ngx_chain_t *chain);
ngx_int_t ngx_http_write_filter(ngx_http_request_t *r, ngx_chain_t *chain);
ngx_int_t ngx_http_request_body_save_filter(ngx_http_request_t *r,
    ngx_chain_t *chain);


ngx_int_t ngx_http_set_disable_symlinks(ngx_http_request_t *r,
    ngx_http_core_loc_conf_t *clcf, ngx_str_t *path, ngx_open_file_info_t *of);

ngx_int_t ngx_http_get_forwarded_addr(ngx_http_request_t *r, ngx_addr_t *addr,
    ngx_array_t *headers, ngx_str_t *value, ngx_array_t *proxies,
    int recursive);


extern ngx_module_t ngx_http_core_module;

extern ngx_uint_t ngx_http_max_module;

extern ngx_str_t ngx_http_core_get_method;
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_cache.h" 1 3 4
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http_cache.h" 3 4
typedef struct {
    ngx_uint_t status;
    time_t valid;
} ngx_http_cache_valid_t;


typedef struct {
    ngx_rbtree_node_t node;
    ngx_queue_t queue;

    u_char key[16
                                         - sizeof(ngx_rbtree_key_t)];

    unsigned count:20;
    unsigned uses:10;
    unsigned valid_msec:10;
    unsigned error:10;
    unsigned exists:1;
    unsigned updating:1;
    unsigned deleting:1;
    unsigned purged:1;


    ngx_file_uniq_t uniq;
    time_t expire;
    time_t valid_sec;
    size_t body_start;
    off_t fs_size;
    ngx_msec_t lock_time;
} ngx_http_file_cache_node_t;


struct ngx_http_cache_s {
    ngx_file_t file;
    ngx_array_t keys;
    uint32_t crc32;
    u_char key[16];
    u_char main[16];

    ngx_file_uniq_t uniq;
    time_t valid_sec;
    time_t updating_sec;
    time_t error_sec;
    time_t last_modified;
    time_t date;

    ngx_str_t etag;
    ngx_str_t vary;
    u_char variant[16];

    size_t buffer_size;
    size_t header_start;
    size_t body_start;
    off_t length;
    off_t fs_size;

    ngx_uint_t min_uses;
    ngx_uint_t error;
    ngx_uint_t valid_msec;
    ngx_uint_t vary_tag;

    ngx_buf_t *buf;

    ngx_http_file_cache_t *file_cache;
    ngx_http_file_cache_node_t *node;





    ngx_msec_t lock_timeout;
    ngx_msec_t lock_age;
    ngx_msec_t lock_time;
    ngx_msec_t wait_time;

    ngx_event_t wait_event;

    unsigned lock:1;
    unsigned waiting:1;

    unsigned updated:1;
    unsigned updating:1;
    unsigned exists:1;
    unsigned temp_file:1;
    unsigned purged:1;
    unsigned reading:1;
    unsigned secondary:1;
    unsigned update_variant:1;
    unsigned background:1;

    unsigned stale_updating:1;
    unsigned stale_error:1;
};


typedef struct {
    ngx_uint_t version;
    time_t valid_sec;
    time_t updating_sec;
    time_t error_sec;
    time_t last_modified;
    time_t date;
    uint32_t crc32;
    u_short valid_msec;
    u_short header_start;
    u_short body_start;
    u_char etag_len;
    u_char etag[128];
    u_char vary_len;
    u_char vary[128];
    u_char variant[16];
} ngx_http_file_cache_header_t;


typedef struct {
    ngx_rbtree_t rbtree;
    ngx_rbtree_node_t sentinel;
    ngx_queue_t queue;
    ngx_atomic_t cold;
    ngx_atomic_t loading;
    off_t size;
    ngx_uint_t count;
    ngx_uint_t watermark;
} ngx_http_file_cache_sh_t;


struct ngx_http_file_cache_s {
    ngx_http_file_cache_sh_t *sh;
    ngx_slab_pool_t *shpool;

    ngx_path_t *path;

    off_t min_free;
    off_t max_size;
    size_t bsize;

    time_t inactive;

    time_t fail_time;

    ngx_uint_t files;
    ngx_uint_t loader_files;
    ngx_msec_t last;
    ngx_msec_t loader_sleep;
    ngx_msec_t loader_threshold;

    ngx_uint_t manager_files;
    ngx_msec_t manager_sleep;
    ngx_msec_t manager_threshold;

    ngx_shm_zone_t *shm_zone;

    ngx_uint_t use_temp_path;

};


ngx_int_t ngx_http_file_cache_new(ngx_http_request_t *r);
ngx_int_t ngx_http_file_cache_create(ngx_http_request_t *r);
void ngx_http_file_cache_create_key(ngx_http_request_t *r);
ngx_int_t ngx_http_file_cache_open(ngx_http_request_t *r);
ngx_int_t ngx_http_file_cache_set_header(ngx_http_request_t *r, u_char *buf);
void ngx_http_file_cache_update(ngx_http_request_t *r, ngx_temp_file_t *tf);
void ngx_http_file_cache_update_header(ngx_http_request_t *r);
ngx_int_t ngx_http_cache_send(ngx_http_request_t *);
void ngx_http_file_cache_free(ngx_http_cache_t *c, ngx_temp_file_t *tf);
time_t ngx_http_file_cache_valid(ngx_array_t *cache_valid, ngx_uint_t status);

char *ngx_http_file_cache_set_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
char *ngx_http_file_cache_valid_set_slot(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);


extern ngx_str_t ngx_http_cache_status[];
# 43 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/modules/ngx_http_ssi_filter_module.h" 1 3 4
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/modules/ngx_http_ssi_filter_module.h" 3 4
typedef struct {
    ngx_hash_t hash;
    ngx_hash_keys_arrays_t commands;
} ngx_http_ssi_main_conf_t;


typedef struct {
    ngx_buf_t *buf;

    u_char *pos;
    u_char *copy_start;
    u_char *copy_end;

    ngx_uint_t key;
    ngx_str_t command;
    ngx_array_t params;
    ngx_table_elt_t *param;
    ngx_table_elt_t params_array[4];

    ngx_chain_t *in;
    ngx_chain_t *out;
    ngx_chain_t **last_out;
    ngx_chain_t *busy;
    ngx_chain_t *free;

    ngx_uint_t state;
    ngx_uint_t saved_state;
    size_t saved;
    size_t looked;

    size_t value_len;

    ngx_list_t *variables;
    ngx_array_t *blocks;


    ngx_uint_t ncaptures;
    int *captures;
    u_char *captures_data;


    unsigned conditional:2;
    unsigned encoding:2;
    unsigned block:1;
    unsigned output:1;
    unsigned output_chosen:1;

    ngx_http_request_t *wait;
    void *value_buf;
    ngx_str_t timefmt;
    ngx_str_t errmsg;
} ngx_http_ssi_ctx_t;


typedef ngx_int_t (*ngx_http_ssi_command_pt) (ngx_http_request_t *r,
    ngx_http_ssi_ctx_t *ctx, ngx_str_t **);


typedef struct {
    ngx_str_t name;
    ngx_uint_t index;

    unsigned mandatory:1;
    unsigned multiple:1;
} ngx_http_ssi_param_t;


typedef struct {
    ngx_str_t name;
    ngx_http_ssi_command_pt handler;
    ngx_http_ssi_param_t *params;

    unsigned conditional:2;
    unsigned block:1;
    unsigned flush:1;
} ngx_http_ssi_command_t;


extern ngx_module_t ngx_http_ssi_filter_module;
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 2 3 4






struct ngx_http_log_ctx_s {
    ngx_connection_t *connection;
    ngx_http_request_t *request;
    ngx_http_request_t *current_request;
};


struct ngx_http_chunked_s {
    ngx_uint_t state;
    off_t size;
    off_t length;
};


typedef struct {
    ngx_uint_t http_version;
    ngx_uint_t code;
    ngx_uint_t count;
    u_char *start;
    u_char *end;
} ngx_http_status_t;






ngx_int_t ngx_http_add_location(ngx_conf_t *cf, ngx_queue_t **locations,
    ngx_http_core_loc_conf_t *clcf);
ngx_int_t ngx_http_add_listen(ngx_conf_t *cf, ngx_http_core_srv_conf_t *cscf,
    ngx_http_listen_opt_t *lsopt);


void ngx_http_init_connection(ngx_connection_t *c);
void ngx_http_close_connection(ngx_connection_t *c);
# 96 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 3 4
ngx_int_t ngx_http_parse_request_line(ngx_http_request_t *r, ngx_buf_t *b);
ngx_int_t ngx_http_parse_uri(ngx_http_request_t *r);
ngx_int_t ngx_http_parse_complex_uri(ngx_http_request_t *r,
    ngx_uint_t merge_slashes);
ngx_int_t ngx_http_parse_status_line(ngx_http_request_t *r, ngx_buf_t *b,
    ngx_http_status_t *status);
ngx_int_t ngx_http_parse_unsafe_uri(ngx_http_request_t *r, ngx_str_t *uri,
    ngx_str_t *args, ngx_uint_t *flags);
ngx_int_t ngx_http_parse_header_line(ngx_http_request_t *r, ngx_buf_t *b,
    ngx_uint_t allow_underscores);
ngx_int_t ngx_http_parse_multi_header_lines(ngx_array_t *headers,
    ngx_str_t *name, ngx_str_t *value);
ngx_int_t ngx_http_parse_set_cookie_lines(ngx_array_t *headers,
    ngx_str_t *name, ngx_str_t *value);
ngx_int_t ngx_http_arg(ngx_http_request_t *r, u_char *name, size_t len,
    ngx_str_t *value);
void ngx_http_split_args(ngx_http_request_t *r, ngx_str_t *uri,
    ngx_str_t *args);
ngx_int_t ngx_http_parse_chunked(ngx_http_request_t *r, ngx_buf_t *b,
    ngx_http_chunked_t *ctx);


ngx_http_request_t *ngx_http_create_request(ngx_connection_t *c);
ngx_int_t ngx_http_process_request_uri(ngx_http_request_t *r);
ngx_int_t ngx_http_process_request_header(ngx_http_request_t *r);
void ngx_http_process_request(ngx_http_request_t *r);
void ngx_http_update_location_config(ngx_http_request_t *r);
void ngx_http_handler(ngx_http_request_t *r);
void ngx_http_run_posted_requests(ngx_connection_t *c);
ngx_int_t ngx_http_post_request(ngx_http_request_t *r,
    ngx_http_posted_request_t *pr);
void ngx_http_finalize_request(ngx_http_request_t *r, ngx_int_t rc);
void ngx_http_free_request(ngx_http_request_t *r, ngx_int_t rc);

void ngx_http_empty_handler(ngx_event_t *wev);
void ngx_http_request_empty_handler(ngx_http_request_t *r);





ngx_int_t ngx_http_send_special(ngx_http_request_t *r, ngx_uint_t flags);


ngx_int_t ngx_http_read_client_request_body(ngx_http_request_t *r,
    ngx_http_client_body_handler_pt post_handler);
ngx_int_t ngx_http_read_unbuffered_request_body(ngx_http_request_t *r);

ngx_int_t ngx_http_send_header(ngx_http_request_t *r);
ngx_int_t ngx_http_special_response_handler(ngx_http_request_t *r,
    ngx_int_t error);
ngx_int_t ngx_http_filter_finalize_request(ngx_http_request_t *r,
    ngx_module_t *m, ngx_int_t error);
void ngx_http_clean_header(ngx_http_request_t *r);


ngx_int_t ngx_http_discard_request_body(ngx_http_request_t *r);
void ngx_http_discarded_request_body_handler(ngx_http_request_t *r);
void ngx_http_block_reading(ngx_http_request_t *r);
void ngx_http_test_reading(ngx_http_request_t *r);


char *ngx_http_types_slot(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
char *ngx_http_merge_types(ngx_conf_t *cf, ngx_array_t **keys,
    ngx_hash_t *types_hash, ngx_array_t **prev_keys,
    ngx_hash_t *prev_types_hash, ngx_str_t *default_types);
ngx_int_t ngx_http_set_default_types(ngx_conf_t *cf, ngx_array_t **types,
    ngx_str_t *default_type);
# 178 "/Users/washi38/University/Labo/c_project_analysis/project/nginx/src/http/ngx_http.h" 3 4
extern ngx_module_t ngx_http_module;

extern ngx_str_t ngx_http_html_default_types[];


extern ngx_http_output_header_filter_pt ngx_http_top_header_filter;
extern ngx_http_output_body_filter_pt ngx_http_top_body_filter;
extern ngx_http_request_body_filter_pt ngx_http_top_request_body_filter;
# 11 "project/nginx/src/http/ngx_http_core_module.c" 2



# 13 "project/nginx/src/http/ngx_http_core_module.c"
typedef struct {
    u_char *name;
    uint32_t method;
} ngx_http_method_name_t;







static ngx_int_t ngx_http_core_auth_delay(ngx_http_request_t *r);
static void ngx_http_core_auth_delay_handler(ngx_http_request_t *r);

static ngx_int_t ngx_http_core_find_location(ngx_http_request_t *r);
static ngx_int_t ngx_http_core_find_static_location(ngx_http_request_t *r,
    ngx_http_location_tree_node_t *node);

static ngx_int_t ngx_http_core_preconfiguration(ngx_conf_t *cf);
static ngx_int_t ngx_http_core_postconfiguration(ngx_conf_t *cf);
static void *ngx_http_core_create_main_conf(ngx_conf_t *cf);
static char *ngx_http_core_init_main_conf(ngx_conf_t *cf, void *conf);
static void *ngx_http_core_create_srv_conf(ngx_conf_t *cf);
static char *ngx_http_core_merge_srv_conf(ngx_conf_t *cf,
    void *parent, void *child);
static void *ngx_http_core_create_loc_conf(ngx_conf_t *cf);
static char *ngx_http_core_merge_loc_conf(ngx_conf_t *cf,
    void *parent, void *child);

static char *ngx_http_core_server(ngx_conf_t *cf, ngx_command_t *cmd,
    void *dummy);
static char *ngx_http_core_location(ngx_conf_t *cf, ngx_command_t *cmd,
    void *dummy);
static ngx_int_t ngx_http_core_regex_location(ngx_conf_t *cf,
    ngx_http_core_loc_conf_t *clcf, ngx_str_t *regex, ngx_uint_t caseless);

static char *ngx_http_core_types(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_type(ngx_conf_t *cf, ngx_command_t *dummy,
    void *conf);

static char *ngx_http_core_listen(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_server_name(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_root(ngx_conf_t *cf, ngx_command_t *cmd, void *conf);
static char *ngx_http_core_limit_except(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_set_aio(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_directio(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_error_page(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_open_file_cache(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_error_log(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_keepalive(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_internal(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);
static char *ngx_http_core_resolver(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);

static ngx_int_t ngx_http_gzip_accept_encoding(ngx_str_t *ae);
static ngx_uint_t ngx_http_gzip_quantity(u_char *p, u_char *last);
static char *ngx_http_gzip_disable(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);

static ngx_int_t ngx_http_get_forwarded_addr_internal(ngx_http_request_t *r,
    ngx_addr_t *addr, u_char *xff, size_t xfflen, ngx_array_t *proxies,
    int recursive);

static char *ngx_http_disable_symlinks(ngx_conf_t *cf, ngx_command_t *cmd,
    void *conf);


static char *ngx_http_core_lowat_check(ngx_conf_t *cf, void *post, void *data);
static char *ngx_http_core_pool_size(ngx_conf_t *cf, void *post, void *data);

static ngx_conf_post_t ngx_http_core_lowat_post =
    { ngx_http_core_lowat_check };

static ngx_conf_post_handler_pt ngx_http_core_pool_size_p =
    ngx_http_core_pool_size;


static ngx_conf_enum_t ngx_http_core_request_body_in_file[] = {
    { 
# 102 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 102 "project/nginx/src/http/ngx_http_core_module.c"
     "off"
# 102 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 102 "project/nginx/src/http/ngx_http_core_module.c"
     "off" 
# 102 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 102 "project/nginx/src/http/ngx_http_core_module.c"
                      , 0 },
    { 
# 103 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 103 "project/nginx/src/http/ngx_http_core_module.c"
     "on"
# 103 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 103 "project/nginx/src/http/ngx_http_core_module.c"
     "on" 
# 103 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 103 "project/nginx/src/http/ngx_http_core_module.c"
                     , 1 },
    { 
# 104 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 104 "project/nginx/src/http/ngx_http_core_module.c"
     "clean"
# 104 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 104 "project/nginx/src/http/ngx_http_core_module.c"
     "clean" 
# 104 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 104 "project/nginx/src/http/ngx_http_core_module.c"
                        , 2 },
    { 
# 105 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 105 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_conf_enum_t ngx_http_core_satisfy[] = {
    { 
# 110 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 110 "project/nginx/src/http/ngx_http_core_module.c"
     "all"
# 110 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 110 "project/nginx/src/http/ngx_http_core_module.c"
     "all" 
# 110 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 110 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 110 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0 
# 110 "project/nginx/src/http/ngx_http_core_module.c"
                                             },
    { 
# 111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 111 "project/nginx/src/http/ngx_http_core_module.c"
     "any"
# 111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 111 "project/nginx/src/http/ngx_http_core_module.c"
     "any" 
# 111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 111 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        1 
# 111 "project/nginx/src/http/ngx_http_core_module.c"
                                             },
    { 
# 112 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 112 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_conf_enum_t ngx_http_core_lingering_close[] = {
    { 
# 117 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 117 "project/nginx/src/http/ngx_http_core_module.c"
     "off"
# 117 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 117 "project/nginx/src/http/ngx_http_core_module.c"
     "off" 
# 117 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 117 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 117 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0 
# 117 "project/nginx/src/http/ngx_http_core_module.c"
                                               },
    { 
# 118 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 118 "project/nginx/src/http/ngx_http_core_module.c"
     "on"
# 118 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 118 "project/nginx/src/http/ngx_http_core_module.c"
     "on" 
# 118 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 118 "project/nginx/src/http/ngx_http_core_module.c"
                     , 
# 118 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       1 
# 118 "project/nginx/src/http/ngx_http_core_module.c"
                                             },
    { 
# 119 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 119 "project/nginx/src/http/ngx_http_core_module.c"
     "always"
# 119 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 119 "project/nginx/src/http/ngx_http_core_module.c"
     "always" 
# 119 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 119 "project/nginx/src/http/ngx_http_core_module.c"
                         , 
# 119 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           2 
# 119 "project/nginx/src/http/ngx_http_core_module.c"
                                                     },
    { 
# 120 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 120 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_conf_enum_t ngx_http_core_server_tokens[] = {
    { 
# 125 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 125 "project/nginx/src/http/ngx_http_core_module.c"
     "off"
# 125 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 125 "project/nginx/src/http/ngx_http_core_module.c"
     "off" 
# 125 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 125 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 125 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0 
# 125 "project/nginx/src/http/ngx_http_core_module.c"
                                                   },
    { 
# 126 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 126 "project/nginx/src/http/ngx_http_core_module.c"
     "on"
# 126 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 126 "project/nginx/src/http/ngx_http_core_module.c"
     "on" 
# 126 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 126 "project/nginx/src/http/ngx_http_core_module.c"
                     , 
# 126 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       1 
# 126 "project/nginx/src/http/ngx_http_core_module.c"
                                                 },
    { 
# 127 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 127 "project/nginx/src/http/ngx_http_core_module.c"
     "build"
# 127 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 127 "project/nginx/src/http/ngx_http_core_module.c"
     "build" 
# 127 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 127 "project/nginx/src/http/ngx_http_core_module.c"
                        , 
# 127 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          2 
# 127 "project/nginx/src/http/ngx_http_core_module.c"
                                                       },
    { 
# 128 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 128 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_conf_enum_t ngx_http_core_if_modified_since[] = {
    { 
# 133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 133 "project/nginx/src/http/ngx_http_core_module.c"
     "off"
# 133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 133 "project/nginx/src/http/ngx_http_core_module.c"
     "off" 
# 133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 133 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0 
# 133 "project/nginx/src/http/ngx_http_core_module.c"
                                         },
    { 
# 134 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 134 "project/nginx/src/http/ngx_http_core_module.c"
     "exact"
# 134 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 134 "project/nginx/src/http/ngx_http_core_module.c"
     "exact" 
# 134 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 134 "project/nginx/src/http/ngx_http_core_module.c"
                        , 
# 134 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1 
# 134 "project/nginx/src/http/ngx_http_core_module.c"
                                             },
    { 
# 135 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 135 "project/nginx/src/http/ngx_http_core_module.c"
     "before"
# 135 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 135 "project/nginx/src/http/ngx_http_core_module.c"
     "before" 
# 135 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 135 "project/nginx/src/http/ngx_http_core_module.c"
                         , 
# 135 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           2 
# 135 "project/nginx/src/http/ngx_http_core_module.c"
                                               },
    { 
# 136 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 136 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_conf_bitmask_t ngx_http_core_keepalive_disable[] = {
    { 
# 141 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 141 "project/nginx/src/http/ngx_http_core_module.c"
     "none"
# 141 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 141 "project/nginx/src/http/ngx_http_core_module.c"
     "none" 
# 141 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 141 "project/nginx/src/http/ngx_http_core_module.c"
                       , 
# 141 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         0x0002 
# 141 "project/nginx/src/http/ngx_http_core_module.c"
                                                         },
    { 
# 142 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 142 "project/nginx/src/http/ngx_http_core_module.c"
     "msie6"
# 142 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 142 "project/nginx/src/http/ngx_http_core_module.c"
     "msie6" 
# 142 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 142 "project/nginx/src/http/ngx_http_core_module.c"
                        , 
# 142 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          0x0004 
# 142 "project/nginx/src/http/ngx_http_core_module.c"
                                                           },
    { 
# 143 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 143 "project/nginx/src/http/ngx_http_core_module.c"
     "safari"
# 143 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 143 "project/nginx/src/http/ngx_http_core_module.c"
     "safari" 
# 143 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 143 "project/nginx/src/http/ngx_http_core_module.c"
                         , 
# 143 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           0x0008 
# 143 "project/nginx/src/http/ngx_http_core_module.c"
                                                             },
    { 
# 144 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 144 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_path_init_t ngx_http_client_temp_path = {
    
# 149 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   { sizeof("client_body_temp") - 1, (u_char *) "client_body_temp" }
# 149 "project/nginx/src/http/ngx_http_core_module.c"
                                        , { 0, 0, 0 }
};




static ngx_conf_enum_t ngx_http_gzip_http_version[] = {
    { 
# 156 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 156 "project/nginx/src/http/ngx_http_core_module.c"
     "1.0"
# 156 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 156 "project/nginx/src/http/ngx_http_core_module.c"
     "1.0" 
# 156 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 156 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 156 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        1000 
# 156 "project/nginx/src/http/ngx_http_core_module.c"
                                            },
    { 
# 157 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 157 "project/nginx/src/http/ngx_http_core_module.c"
     "1.1"
# 157 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 157 "project/nginx/src/http/ngx_http_core_module.c"
     "1.1" 
# 157 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 157 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 157 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        1001 
# 157 "project/nginx/src/http/ngx_http_core_module.c"
                                            },
    { 
# 158 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 158 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_conf_bitmask_t ngx_http_gzip_proxied_mask[] = {
    { 
# 163 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 163 "project/nginx/src/http/ngx_http_core_module.c"
     "off"
# 163 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 163 "project/nginx/src/http/ngx_http_core_module.c"
     "off" 
# 163 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 163 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 163 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x0002 
# 163 "project/nginx/src/http/ngx_http_core_module.c"
                                                  },
    { 
# 164 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 164 "project/nginx/src/http/ngx_http_core_module.c"
     "expired"
# 164 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 164 "project/nginx/src/http/ngx_http_core_module.c"
     "expired" 
# 164 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 164 "project/nginx/src/http/ngx_http_core_module.c"
                          , 
# 164 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            0x0004 
# 164 "project/nginx/src/http/ngx_http_core_module.c"
                                                          },
    { 
# 165 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 165 "project/nginx/src/http/ngx_http_core_module.c"
     "no-cache"
# 165 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 165 "project/nginx/src/http/ngx_http_core_module.c"
     "no-cache" 
# 165 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 165 "project/nginx/src/http/ngx_http_core_module.c"
                           , 
# 165 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             0x0008 
# 165 "project/nginx/src/http/ngx_http_core_module.c"
                                                            },
    { 
# 166 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 166 "project/nginx/src/http/ngx_http_core_module.c"
     "no-store"
# 166 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 166 "project/nginx/src/http/ngx_http_core_module.c"
     "no-store" 
# 166 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 166 "project/nginx/src/http/ngx_http_core_module.c"
                           , 
# 166 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             0x0010 
# 166 "project/nginx/src/http/ngx_http_core_module.c"
                                                            },
    { 
# 167 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 167 "project/nginx/src/http/ngx_http_core_module.c"
     "private"
# 167 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 167 "project/nginx/src/http/ngx_http_core_module.c"
     "private" 
# 167 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 167 "project/nginx/src/http/ngx_http_core_module.c"
                          , 
# 167 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            0x0020 
# 167 "project/nginx/src/http/ngx_http_core_module.c"
                                                          },
    { 
# 168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 168 "project/nginx/src/http/ngx_http_core_module.c"
     "no_last_modified"
# 168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 168 "project/nginx/src/http/ngx_http_core_module.c"
     "no_last_modified" 
# 168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 168 "project/nginx/src/http/ngx_http_core_module.c"
                                   , 
# 168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     0x0040 
# 168 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 },
    { 
# 169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 169 "project/nginx/src/http/ngx_http_core_module.c"
     "no_etag"
# 169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 169 "project/nginx/src/http/ngx_http_core_module.c"
     "no_etag" 
# 169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 169 "project/nginx/src/http/ngx_http_core_module.c"
                          , 
# 169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            0x0080 
# 169 "project/nginx/src/http/ngx_http_core_module.c"
                                                          },
    { 
# 170 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 170 "project/nginx/src/http/ngx_http_core_module.c"
     "auth"
# 170 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 170 "project/nginx/src/http/ngx_http_core_module.c"
     "auth" 
# 170 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 170 "project/nginx/src/http/ngx_http_core_module.c"
                       , 
# 170 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         0x0100 
# 170 "project/nginx/src/http/ngx_http_core_module.c"
                                                    },
    { 
# 171 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 171 "project/nginx/src/http/ngx_http_core_module.c"
     "any"
# 171 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 171 "project/nginx/src/http/ngx_http_core_module.c"
     "any" 
# 171 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 171 "project/nginx/src/http/ngx_http_core_module.c"
                      , 
# 171 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x0200 
# 171 "project/nginx/src/http/ngx_http_core_module.c"
                                                  },
    { 
# 172 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 172 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0 }
};


static ngx_str_t ngx_http_gzip_no_cache = 
# 176 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          { sizeof(
# 176 "project/nginx/src/http/ngx_http_core_module.c"
                                          "no-cache"
# 176 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          ) - 1, (u_char *) 
# 176 "project/nginx/src/http/ngx_http_core_module.c"
                                          "no-cache" 
# 176 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          }
# 176 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;
static ngx_str_t ngx_http_gzip_no_store = 
# 177 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          { sizeof(
# 177 "project/nginx/src/http/ngx_http_core_module.c"
                                          "no-store"
# 177 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          ) - 1, (u_char *) 
# 177 "project/nginx/src/http/ngx_http_core_module.c"
                                          "no-store" 
# 177 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          }
# 177 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;
static ngx_str_t ngx_http_gzip_private = 
# 178 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         { sizeof(
# 178 "project/nginx/src/http/ngx_http_core_module.c"
                                         "private"
# 178 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         ) - 1, (u_char *) 
# 178 "project/nginx/src/http/ngx_http_core_module.c"
                                         "private" 
# 178 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         }
# 178 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;




static ngx_command_t ngx_http_core_commands[] = {

    { 
# 185 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 185 "project/nginx/src/http/ngx_http_core_module.c"
     "variables_hash_max_size"
# 185 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 185 "project/nginx/src/http/ngx_http_core_module.c"
     "variables_hash_max_size" 
# 185 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 185 "project/nginx/src/http/ngx_http_core_module.c"
                                          ,
      
# 186 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 186 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 186 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 186 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_conf_set_num_slot,
      
# 188 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, main_conf)
# 188 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 189 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 189 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_main_conf_t
# 189 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 189 "project/nginx/src/http/ngx_http_core_module.c"
     variables_hash_max_size
# 189 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 189 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ,
      
# 190 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 190 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 192 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 192 "project/nginx/src/http/ngx_http_core_module.c"
     "variables_hash_bucket_size"
# 192 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 192 "project/nginx/src/http/ngx_http_core_module.c"
     "variables_hash_bucket_size" 
# 192 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 192 "project/nginx/src/http/ngx_http_core_module.c"
                                             ,
      
# 193 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 193 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 193 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 193 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_conf_set_num_slot,
      
# 195 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, main_conf)
# 195 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 196 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 196 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_main_conf_t
# 196 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 196 "project/nginx/src/http/ngx_http_core_module.c"
     variables_hash_bucket_size
# 196 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 196 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ,
      
# 197 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 197 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 199 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 199 "project/nginx/src/http/ngx_http_core_module.c"
     "server_names_hash_max_size"
# 199 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 199 "project/nginx/src/http/ngx_http_core_module.c"
     "server_names_hash_max_size" 
# 199 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 199 "project/nginx/src/http/ngx_http_core_module.c"
                                             ,
      
# 200 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 200 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 200 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 200 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_conf_set_num_slot,
      
# 202 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, main_conf)
# 202 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 203 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 203 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_main_conf_t
# 203 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 203 "project/nginx/src/http/ngx_http_core_module.c"
     server_names_hash_max_size
# 203 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 203 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ,
      
# 204 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 204 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 206 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 206 "project/nginx/src/http/ngx_http_core_module.c"
     "server_names_hash_bucket_size"
# 206 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 206 "project/nginx/src/http/ngx_http_core_module.c"
     "server_names_hash_bucket_size" 
# 206 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 206 "project/nginx/src/http/ngx_http_core_module.c"
                                                ,
      
# 207 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 207 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 207 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 207 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_conf_set_num_slot,
      
# 209 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, main_conf)
# 209 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 210 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 210 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_main_conf_t
# 210 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 210 "project/nginx/src/http/ngx_http_core_module.c"
     server_names_hash_bucket_size
# 210 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 210 "project/nginx/src/http/ngx_http_core_module.c"
                                                                       ,
      
# 211 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 211 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 213 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 213 "project/nginx/src/http/ngx_http_core_module.c"
     "server"
# 213 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 213 "project/nginx/src/http/ngx_http_core_module.c"
     "server" 
# 213 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 213 "project/nginx/src/http/ngx_http_core_module.c"
                         ,
      
# 214 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 214 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 214 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000100
# 214 "project/nginx/src/http/ngx_http_core_module.c"
                                      |
# 214 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                       0x00000001
# 214 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ,
      ngx_http_core_server,
      0,
      0,
      
# 218 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 218 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 220 "project/nginx/src/http/ngx_http_core_module.c"
     "connection_pool_size"
# 220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 220 "project/nginx/src/http/ngx_http_core_module.c"
     "connection_pool_size" 
# 220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 220 "project/nginx/src/http/ngx_http_core_module.c"
                                       ,
      
# 221 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 221 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 221 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 221 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 221 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000002
# 221 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      ngx_conf_set_size_slot,
      
# 223 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 223 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 224 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 224 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 224 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 224 "project/nginx/src/http/ngx_http_core_module.c"
     connection_pool_size
# 224 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 224 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ,
      &ngx_http_core_pool_size_p },

    { 
# 227 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 227 "project/nginx/src/http/ngx_http_core_module.c"
     "request_pool_size"
# 227 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 227 "project/nginx/src/http/ngx_http_core_module.c"
     "request_pool_size" 
# 227 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 227 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 228 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 228 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 228 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 228 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 228 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000002
# 228 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      ngx_conf_set_size_slot,
      
# 230 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 230 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 231 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 231 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 231 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 231 "project/nginx/src/http/ngx_http_core_module.c"
     request_pool_size
# 231 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 231 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ,
      &ngx_http_core_pool_size_p },

    { 
# 234 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 234 "project/nginx/src/http/ngx_http_core_module.c"
     "client_header_timeout"
# 234 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 234 "project/nginx/src/http/ngx_http_core_module.c"
     "client_header_timeout" 
# 234 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 234 "project/nginx/src/http/ngx_http_core_module.c"
                                        ,
      
# 235 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 235 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 235 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 235 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 235 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000002
# 235 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      ngx_conf_set_msec_slot,
      
# 237 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 237 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 238 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 238 "project/nginx/src/http/ngx_http_core_module.c"
     client_header_timeout
# 238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 238 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ,
      
# 239 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 239 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 241 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 241 "project/nginx/src/http/ngx_http_core_module.c"
     "client_header_buffer_size"
# 241 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 241 "project/nginx/src/http/ngx_http_core_module.c"
     "client_header_buffer_size" 
# 241 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 241 "project/nginx/src/http/ngx_http_core_module.c"
                                            ,
      
# 242 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 242 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 242 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 242 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 242 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000002
# 242 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      ngx_conf_set_size_slot,
      
# 244 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 244 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 245 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 245 "project/nginx/src/http/ngx_http_core_module.c"
     client_header_buffer_size
# 245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 245 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ,
      
# 246 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 246 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 248 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 248 "project/nginx/src/http/ngx_http_core_module.c"
     "large_client_header_buffers"
# 248 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 248 "project/nginx/src/http/ngx_http_core_module.c"
     "large_client_header_buffers" 
# 248 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 248 "project/nginx/src/http/ngx_http_core_module.c"
                                              ,
      
# 249 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 249 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 249 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 249 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 249 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000004
# 249 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      ngx_conf_set_bufs_slot,
      
# 251 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 251 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 252 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 252 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 252 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 252 "project/nginx/src/http/ngx_http_core_module.c"
     large_client_header_buffers
# 252 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 252 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ,
      
# 253 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 253 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 255 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 255 "project/nginx/src/http/ngx_http_core_module.c"
     "ignore_invalid_headers"
# 255 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 255 "project/nginx/src/http/ngx_http_core_module.c"
     "ignore_invalid_headers" 
# 255 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 255 "project/nginx/src/http/ngx_http_core_module.c"
                                         ,
      
# 256 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 256 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 256 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 256 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 256 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000200
# 256 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ,
      ngx_conf_set_flag_slot,
      
# 258 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 258 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 259 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 259 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 259 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 259 "project/nginx/src/http/ngx_http_core_module.c"
     ignore_invalid_headers
# 259 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 259 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ,
      
# 260 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 260 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 262 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 262 "project/nginx/src/http/ngx_http_core_module.c"
     "merge_slashes"
# 262 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 262 "project/nginx/src/http/ngx_http_core_module.c"
     "merge_slashes" 
# 262 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 262 "project/nginx/src/http/ngx_http_core_module.c"
                                ,
      
# 263 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 263 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 263 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 263 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 263 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000200
# 263 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ,
      ngx_conf_set_flag_slot,
      
# 265 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 265 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 266 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 266 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 266 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 266 "project/nginx/src/http/ngx_http_core_module.c"
     merge_slashes
# 266 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 266 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ,
      
# 267 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 267 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 269 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 269 "project/nginx/src/http/ngx_http_core_module.c"
     "underscores_in_headers"
# 269 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 269 "project/nginx/src/http/ngx_http_core_module.c"
     "underscores_in_headers" 
# 269 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 269 "project/nginx/src/http/ngx_http_core_module.c"
                                         ,
      
# 270 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 270 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 270 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 270 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 270 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000200
# 270 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ,
      ngx_conf_set_flag_slot,
      
# 272 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 272 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 273 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 273 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_srv_conf_t
# 273 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 273 "project/nginx/src/http/ngx_http_core_module.c"
     underscores_in_headers
# 273 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 273 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ,
      
# 274 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 274 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 276 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 276 "project/nginx/src/http/ngx_http_core_module.c"
     "location"
# 276 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 276 "project/nginx/src/http/ngx_http_core_module.c"
     "location" 
# 276 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 276 "project/nginx/src/http/ngx_http_core_module.c"
                           ,
      
# 277 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x04000000
# 277 "project/nginx/src/http/ngx_http_core_module.c"
                      |
# 277 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x08000000
# 277 "project/nginx/src/http/ngx_http_core_module.c"
                                        |
# 277 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000100
# 277 "project/nginx/src/http/ngx_http_core_module.c"
                                                       |
# 277 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                        (0x00000002|0x00000004)
# 277 "project/nginx/src/http/ngx_http_core_module.c"
                                                                       ,
      ngx_http_core_location,
      
# 279 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 279 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 281 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 281 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 283 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 283 "project/nginx/src/http/ngx_http_core_module.c"
     "listen"
# 283 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 283 "project/nginx/src/http/ngx_http_core_module.c"
     "listen" 
# 283 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 283 "project/nginx/src/http/ngx_http_core_module.c"
                         ,
      
# 284 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x04000000
# 284 "project/nginx/src/http/ngx_http_core_module.c"
                      |
# 284 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x00000800
# 284 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      ngx_http_core_listen,
      
# 286 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 286 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 288 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 288 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 290 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 290 "project/nginx/src/http/ngx_http_core_module.c"
     "server_name"
# 290 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 290 "project/nginx/src/http/ngx_http_core_module.c"
     "server_name" 
# 290 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 290 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 291 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x04000000
# 291 "project/nginx/src/http/ngx_http_core_module.c"
                      |
# 291 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x00000800
# 291 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      ngx_http_core_server_name,
      
# 293 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, srv_conf)
# 293 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 295 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 295 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 297 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 297 "project/nginx/src/http/ngx_http_core_module.c"
     "types_hash_max_size"
# 297 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 297 "project/nginx/src/http/ngx_http_core_module.c"
     "types_hash_max_size" 
# 297 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 297 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      
# 298 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 298 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 298 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 298 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 298 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 298 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 298 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 298 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_num_slot,
      
# 300 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 300 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 301 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 301 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 301 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 301 "project/nginx/src/http/ngx_http_core_module.c"
     types_hash_max_size
# 301 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 301 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ,
      
# 302 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 302 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 304 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 304 "project/nginx/src/http/ngx_http_core_module.c"
     "types_hash_bucket_size"
# 304 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 304 "project/nginx/src/http/ngx_http_core_module.c"
     "types_hash_bucket_size" 
# 304 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 304 "project/nginx/src/http/ngx_http_core_module.c"
                                         ,
      
# 305 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 305 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 305 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 305 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 305 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 305 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 305 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 305 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_num_slot,
      
# 307 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 307 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 308 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 308 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 308 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 308 "project/nginx/src/http/ngx_http_core_module.c"
     types_hash_bucket_size
# 308 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 308 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ,
      
# 309 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 309 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 311 "project/nginx/src/http/ngx_http_core_module.c"
     "types"
# 311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 311 "project/nginx/src/http/ngx_http_core_module.c"
     "types" 
# 311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 311 "project/nginx/src/http/ngx_http_core_module.c"
                        ,
      
# 312 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 312 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 312 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 312 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 312 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
                                          
# 313 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 313 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000100
# 313 "project/nginx/src/http/ngx_http_core_module.c"
                                                        |
# 313 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                         0x00000001
# 313 "project/nginx/src/http/ngx_http_core_module.c"
                                                                        ,
      ngx_http_core_types,
      
# 315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 315 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 317 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 317 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 319 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 319 "project/nginx/src/http/ngx_http_core_module.c"
     "default_type"
# 319 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 319 "project/nginx/src/http/ngx_http_core_module.c"
     "default_type" 
# 319 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 319 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 320 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 320 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 320 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 320 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 320 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 320 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 320 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 320 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_str_slot,
      
# 322 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 322 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 323 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 323 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 323 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 323 "project/nginx/src/http/ngx_http_core_module.c"
     default_type
# 323 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 323 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ,
      
# 324 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 324 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 326 "project/nginx/src/http/ngx_http_core_module.c"
     "root"
# 326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 326 "project/nginx/src/http/ngx_http_core_module.c"
     "root" 
# 326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 326 "project/nginx/src/http/ngx_http_core_module.c"
                       ,
      
# 327 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 327 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 327 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 327 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 327 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 327 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 327 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x40000000
                        
# 328 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 328 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 328 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_http_core_root,
      
# 330 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 330 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 332 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 332 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 334 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 334 "project/nginx/src/http/ngx_http_core_module.c"
     "alias"
# 334 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 334 "project/nginx/src/http/ngx_http_core_module.c"
     "alias" 
# 334 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 334 "project/nginx/src/http/ngx_http_core_module.c"
                        ,
      
# 335 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x08000000
# 335 "project/nginx/src/http/ngx_http_core_module.c"
                      |
# 335 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x00000002
# 335 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      ngx_http_core_root,
      
# 337 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 337 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 339 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 339 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 341 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 341 "project/nginx/src/http/ngx_http_core_module.c"
     "limit_except"
# 341 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 341 "project/nginx/src/http/ngx_http_core_module.c"
     "limit_except" 
# 341 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 341 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x08000000
# 342 "project/nginx/src/http/ngx_http_core_module.c"
                      |
# 342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x00000100
# 342 "project/nginx/src/http/ngx_http_core_module.c"
                                     |
# 342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      0x00000800
# 342 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ,
      ngx_http_core_limit_except,
      
# 344 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 344 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 346 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 346 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 348 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 348 "project/nginx/src/http/ngx_http_core_module.c"
     "client_max_body_size"
# 348 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 348 "project/nginx/src/http/ngx_http_core_module.c"
     "client_max_body_size" 
# 348 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 348 "project/nginx/src/http/ngx_http_core_module.c"
                                       ,
      
# 349 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 349 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 349 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 349 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 349 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 349 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 349 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 349 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_off_slot,
      
# 351 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 351 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 352 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 352 "project/nginx/src/http/ngx_http_core_module.c"
     client_max_body_size
# 352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 352 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ,
      
# 353 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 353 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 355 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 355 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_buffer_size"
# 355 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 355 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_buffer_size" 
# 355 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 355 "project/nginx/src/http/ngx_http_core_module.c"
                                          ,
      
# 356 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 356 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 356 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 356 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 356 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 356 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 356 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 356 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_size_slot,
      
# 358 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 358 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 359 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 359 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 359 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 359 "project/nginx/src/http/ngx_http_core_module.c"
     client_body_buffer_size
# 359 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 359 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ,
      
# 360 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 360 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 362 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 362 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_timeout"
# 362 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 362 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_timeout" 
# 362 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 362 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      
# 363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 363 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 363 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 363 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 363 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 365 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 365 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 366 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 366 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 366 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 366 "project/nginx/src/http/ngx_http_core_module.c"
     client_body_timeout
# 366 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 366 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ,
      
# 367 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 367 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 369 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 369 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_temp_path"
# 369 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 369 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_temp_path" 
# 369 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 369 "project/nginx/src/http/ngx_http_core_module.c"
                                        ,
      
# 370 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 370 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 370 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 370 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 370 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 370 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 370 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            (0x00000002|0x00000004|0x00000008 |0x00000010)
# 370 "project/nginx/src/http/ngx_http_core_module.c"
                                                                             ,
      ngx_conf_set_path_slot,
      
# 372 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 372 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 373 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 373 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 373 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 373 "project/nginx/src/http/ngx_http_core_module.c"
     client_body_temp_path
# 373 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 373 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ,
      
# 374 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 374 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 376 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 376 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_in_file_only"
# 376 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 376 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_in_file_only" 
# 376 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 376 "project/nginx/src/http/ngx_http_core_module.c"
                                           ,
      
# 377 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 377 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 377 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 377 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 377 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 377 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 377 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 377 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_enum_slot,
      
# 379 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 379 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 380 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 380 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 380 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 380 "project/nginx/src/http/ngx_http_core_module.c"
     client_body_in_file_only
# 380 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 380 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ,
      &ngx_http_core_request_body_in_file },

    { 
# 383 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 383 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_in_single_buffer"
# 383 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 383 "project/nginx/src/http/ngx_http_core_module.c"
     "client_body_in_single_buffer" 
# 383 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 383 "project/nginx/src/http/ngx_http_core_module.c"
                                               ,
      
# 384 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 384 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 384 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 384 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 384 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 384 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 384 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 384 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 386 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 386 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 387 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 387 "project/nginx/src/http/ngx_http_core_module.c"
     client_body_in_single_buffer
# 387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 387 "project/nginx/src/http/ngx_http_core_module.c"
                                                                     ,
      
# 388 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 388 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 390 "project/nginx/src/http/ngx_http_core_module.c"
     "sendfile"
# 390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 390 "project/nginx/src/http/ngx_http_core_module.c"
     "sendfile" 
# 390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 390 "project/nginx/src/http/ngx_http_core_module.c"
                           ,
      
# 391 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 391 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 391 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 391 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 391 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 391 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 391 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x40000000
                        
# 392 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 392 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000200
# 392 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      ngx_conf_set_flag_slot,
      
# 394 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 394 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 395 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 395 "project/nginx/src/http/ngx_http_core_module.c"
     sendfile
# 395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 395 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ,
      
# 396 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 396 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 398 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 398 "project/nginx/src/http/ngx_http_core_module.c"
     "sendfile_max_chunk"
# 398 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 398 "project/nginx/src/http/ngx_http_core_module.c"
     "sendfile_max_chunk" 
# 398 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 398 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      
# 399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 399 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 399 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 399 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 399 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_size_slot,
      
# 401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 401 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 402 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 402 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 402 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 402 "project/nginx/src/http/ngx_http_core_module.c"
     sendfile_max_chunk
# 402 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 402 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ,
      
# 403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 403 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 405 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 405 "project/nginx/src/http/ngx_http_core_module.c"
     "subrequest_output_buffer_size"
# 405 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 405 "project/nginx/src/http/ngx_http_core_module.c"
     "subrequest_output_buffer_size" 
# 405 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 405 "project/nginx/src/http/ngx_http_core_module.c"
                                                ,
      
# 406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 406 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 406 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 406 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 406 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_size_slot,
      
# 408 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 408 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 409 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 409 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 409 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 409 "project/nginx/src/http/ngx_http_core_module.c"
     subrequest_output_buffer_size
# 409 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 409 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      ,
      
# 410 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 410 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 412 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 412 "project/nginx/src/http/ngx_http_core_module.c"
     "aio"
# 412 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 412 "project/nginx/src/http/ngx_http_core_module.c"
     "aio" 
# 412 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 412 "project/nginx/src/http/ngx_http_core_module.c"
                      ,
      
# 413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 413 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 413 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 413 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 413 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_http_core_set_aio,
      
# 415 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 415 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 417 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 419 "project/nginx/src/http/ngx_http_core_module.c"
     "aio_write"
# 419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 419 "project/nginx/src/http/ngx_http_core_module.c"
     "aio_write" 
# 419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 419 "project/nginx/src/http/ngx_http_core_module.c"
                            ,
      
# 420 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 420 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 420 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 420 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 420 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 420 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 420 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 420 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 422 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 422 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 423 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 423 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 423 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 423 "project/nginx/src/http/ngx_http_core_module.c"
     aio_write
# 423 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 423 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ,
      
# 424 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 424 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 426 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 426 "project/nginx/src/http/ngx_http_core_module.c"
     "read_ahead"
# 426 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 426 "project/nginx/src/http/ngx_http_core_module.c"
     "read_ahead" 
# 426 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 426 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 427 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 427 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 427 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 427 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 427 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 427 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 427 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 427 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_size_slot,
      
# 429 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 429 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 430 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 430 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 430 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 430 "project/nginx/src/http/ngx_http_core_module.c"
     read_ahead
# 430 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 430 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ,
      
# 431 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 431 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 433 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 433 "project/nginx/src/http/ngx_http_core_module.c"
     "directio"
# 433 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 433 "project/nginx/src/http/ngx_http_core_module.c"
     "directio" 
# 433 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 433 "project/nginx/src/http/ngx_http_core_module.c"
                           ,
      
# 434 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 434 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 434 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 434 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 434 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 434 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 434 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 434 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_http_core_directio,
      
# 436 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 436 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 438 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 438 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 440 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 440 "project/nginx/src/http/ngx_http_core_module.c"
     "directio_alignment"
# 440 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 440 "project/nginx/src/http/ngx_http_core_module.c"
     "directio_alignment" 
# 440 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 440 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      
# 441 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 441 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 441 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 441 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 441 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 441 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 441 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 441 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_off_slot,
      
# 443 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 443 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 444 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 444 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 444 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 444 "project/nginx/src/http/ngx_http_core_module.c"
     directio_alignment
# 444 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 444 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ,
      
# 445 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 445 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 447 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 447 "project/nginx/src/http/ngx_http_core_module.c"
     "tcp_nopush"
# 447 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 447 "project/nginx/src/http/ngx_http_core_module.c"
     "tcp_nopush" 
# 447 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 447 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 448 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 448 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 448 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 448 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 448 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 448 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 448 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 448 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 450 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 450 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 451 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 451 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 451 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 451 "project/nginx/src/http/ngx_http_core_module.c"
     tcp_nopush
# 451 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 451 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ,
      
# 452 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 452 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 454 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 454 "project/nginx/src/http/ngx_http_core_module.c"
     "tcp_nodelay"
# 454 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 454 "project/nginx/src/http/ngx_http_core_module.c"
     "tcp_nodelay" 
# 454 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 454 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 455 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 455 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 455 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 455 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 455 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 455 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 455 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 455 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 457 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 457 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 458 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 458 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 458 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 458 "project/nginx/src/http/ngx_http_core_module.c"
     tcp_nodelay
# 458 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 458 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ,
      
# 459 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 459 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 461 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 461 "project/nginx/src/http/ngx_http_core_module.c"
     "send_timeout"
# 461 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 461 "project/nginx/src/http/ngx_http_core_module.c"
     "send_timeout" 
# 461 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 461 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 462 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 462 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 462 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 462 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 462 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 462 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 462 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 462 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 464 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 464 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 465 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 465 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 465 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 465 "project/nginx/src/http/ngx_http_core_module.c"
     send_timeout
# 465 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 465 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ,
      
# 466 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 466 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 468 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 468 "project/nginx/src/http/ngx_http_core_module.c"
     "send_lowat"
# 468 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 468 "project/nginx/src/http/ngx_http_core_module.c"
     "send_lowat" 
# 468 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 468 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 469 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 469 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 469 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 469 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 469 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 469 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 469 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 469 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_size_slot,
      
# 471 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 471 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 472 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 472 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 472 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 472 "project/nginx/src/http/ngx_http_core_module.c"
     send_lowat
# 472 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 472 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ,
      &ngx_http_core_lowat_post },

    { 
# 475 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 475 "project/nginx/src/http/ngx_http_core_module.c"
     "postpone_output"
# 475 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 475 "project/nginx/src/http/ngx_http_core_module.c"
     "postpone_output" 
# 475 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 475 "project/nginx/src/http/ngx_http_core_module.c"
                                  ,
      
# 476 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 476 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 476 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 476 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 476 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 476 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 476 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 476 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_size_slot,
      
# 478 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 478 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 479 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 479 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 479 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 479 "project/nginx/src/http/ngx_http_core_module.c"
     postpone_output
# 479 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 479 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      
# 480 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 480 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 482 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 482 "project/nginx/src/http/ngx_http_core_module.c"
     "limit_rate"
# 482 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 482 "project/nginx/src/http/ngx_http_core_module.c"
     "limit_rate" 
# 482 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 482 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 483 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 483 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 483 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 483 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 483 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 483 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 483 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x40000000
                        
# 484 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 484 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 484 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_http_set_complex_value_size_slot,
      
# 486 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 486 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 487 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 487 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 487 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 487 "project/nginx/src/http/ngx_http_core_module.c"
     limit_rate
# 487 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 487 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ,
      
# 488 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 488 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 490 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 490 "project/nginx/src/http/ngx_http_core_module.c"
     "limit_rate_after"
# 490 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 490 "project/nginx/src/http/ngx_http_core_module.c"
     "limit_rate_after" 
# 490 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 490 "project/nginx/src/http/ngx_http_core_module.c"
                                   ,
      
# 491 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 491 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 491 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 491 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 491 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 491 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 491 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x40000000
                        
# 492 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 492 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 492 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_http_set_complex_value_size_slot,
      
# 494 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 494 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 495 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 495 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 495 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 495 "project/nginx/src/http/ngx_http_core_module.c"
     limit_rate_after
# 495 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 495 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ,
      
# 496 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 496 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 498 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 498 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_time"
# 498 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 498 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_time" 
# 498 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 498 "project/nginx/src/http/ngx_http_core_module.c"
                                 ,
      
# 499 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 499 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 499 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 499 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 499 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 499 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 499 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 499 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 501 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 501 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 502 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 502 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 502 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 502 "project/nginx/src/http/ngx_http_core_module.c"
     keepalive_time
# 502 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 502 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ,
      
# 503 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 503 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 505 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 505 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_timeout"
# 505 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 505 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_timeout" 
# 505 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 505 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 506 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 506 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 506 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 506 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 506 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 506 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 506 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            (0x00000002|0x00000004)
# 506 "project/nginx/src/http/ngx_http_core_module.c"
                                                                           ,
      ngx_http_core_keepalive,
      
# 508 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 508 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 510 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 510 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 512 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 512 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_requests"
# 512 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 512 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_requests" 
# 512 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 512 "project/nginx/src/http/ngx_http_core_module.c"
                                     ,
      
# 513 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 513 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 513 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 513 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 513 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 513 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 513 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 513 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_num_slot,
      
# 515 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 515 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 516 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 516 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 516 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 516 "project/nginx/src/http/ngx_http_core_module.c"
     keepalive_requests
# 516 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 516 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ,
      
# 517 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 517 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 519 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 519 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_disable"
# 519 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 519 "project/nginx/src/http/ngx_http_core_module.c"
     "keepalive_disable" 
# 519 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 519 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 520 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 520 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 520 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 520 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 520 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 520 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 520 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            (0x00000002|0x00000004)
# 520 "project/nginx/src/http/ngx_http_core_module.c"
                                                                           ,
      ngx_conf_set_bitmask_slot,
      
# 522 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 522 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 523 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 523 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 523 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 523 "project/nginx/src/http/ngx_http_core_module.c"
     keepalive_disable
# 523 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 523 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ,
      &ngx_http_core_keepalive_disable },

    { 
# 526 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 526 "project/nginx/src/http/ngx_http_core_module.c"
     "satisfy"
# 526 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 526 "project/nginx/src/http/ngx_http_core_module.c"
     "satisfy" 
# 526 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 526 "project/nginx/src/http/ngx_http_core_module.c"
                          ,
      
# 527 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 527 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 527 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 527 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 527 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 527 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 527 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 527 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_enum_slot,
      
# 529 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 529 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 530 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 530 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 530 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 530 "project/nginx/src/http/ngx_http_core_module.c"
     satisfy
# 530 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 530 "project/nginx/src/http/ngx_http_core_module.c"
                                                ,
      &ngx_http_core_satisfy },

    { 
# 533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 533 "project/nginx/src/http/ngx_http_core_module.c"
     "auth_delay"
# 533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 533 "project/nginx/src/http/ngx_http_core_module.c"
     "auth_delay" 
# 533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 533 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 534 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 534 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 534 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 534 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 534 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 534 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 534 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 534 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 536 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 536 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 537 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 537 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 537 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 537 "project/nginx/src/http/ngx_http_core_module.c"
     auth_delay
# 537 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 537 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ,
      
# 538 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 538 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 540 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 540 "project/nginx/src/http/ngx_http_core_module.c"
     "internal"
# 540 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 540 "project/nginx/src/http/ngx_http_core_module.c"
     "internal" 
# 540 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 540 "project/nginx/src/http/ngx_http_core_module.c"
                           ,
      
# 541 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x08000000
# 541 "project/nginx/src/http/ngx_http_core_module.c"
                      |
# 541 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x00000001
# 541 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_http_core_internal,
      
# 543 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 543 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 545 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 545 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 547 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 547 "project/nginx/src/http/ngx_http_core_module.c"
     "lingering_close"
# 547 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 547 "project/nginx/src/http/ngx_http_core_module.c"
     "lingering_close" 
# 547 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 547 "project/nginx/src/http/ngx_http_core_module.c"
                                  ,
      
# 548 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 548 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 548 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 548 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 548 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 548 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 548 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 548 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_enum_slot,
      
# 550 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 550 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 551 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 551 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 551 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 551 "project/nginx/src/http/ngx_http_core_module.c"
     lingering_close
# 551 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 551 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      &ngx_http_core_lingering_close },

    { 
# 554 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 554 "project/nginx/src/http/ngx_http_core_module.c"
     "lingering_time"
# 554 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 554 "project/nginx/src/http/ngx_http_core_module.c"
     "lingering_time" 
# 554 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 554 "project/nginx/src/http/ngx_http_core_module.c"
                                 ,
      
# 555 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 555 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 555 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 555 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 555 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 555 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 555 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 555 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 557 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 557 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 558 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 558 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 558 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 558 "project/nginx/src/http/ngx_http_core_module.c"
     lingering_time
# 558 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 558 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ,
      
# 559 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 559 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 561 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 561 "project/nginx/src/http/ngx_http_core_module.c"
     "lingering_timeout"
# 561 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 561 "project/nginx/src/http/ngx_http_core_module.c"
     "lingering_timeout" 
# 561 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 561 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 562 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 562 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 562 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 562 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 562 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 562 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 562 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 562 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 564 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 564 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 565 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 565 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 565 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 565 "project/nginx/src/http/ngx_http_core_module.c"
     lingering_timeout
# 565 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 565 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ,
      
# 566 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 566 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 568 "project/nginx/src/http/ngx_http_core_module.c"
     "reset_timedout_connection"
# 568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 568 "project/nginx/src/http/ngx_http_core_module.c"
     "reset_timedout_connection" 
# 568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 568 "project/nginx/src/http/ngx_http_core_module.c"
                                            ,
      
# 569 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 569 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 569 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 569 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 569 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 569 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 569 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 569 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 571 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 572 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 572 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 572 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 572 "project/nginx/src/http/ngx_http_core_module.c"
     reset_timedout_connection
# 572 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 572 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ,
      
# 573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 573 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 575 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 575 "project/nginx/src/http/ngx_http_core_module.c"
     "absolute_redirect"
# 575 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 575 "project/nginx/src/http/ngx_http_core_module.c"
     "absolute_redirect" 
# 575 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 575 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 576 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 576 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 576 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 576 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 576 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 576 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 576 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 576 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 578 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 578 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 579 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 579 "project/nginx/src/http/ngx_http_core_module.c"
     absolute_redirect
# 579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 579 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ,
      
# 580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 580 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 582 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 582 "project/nginx/src/http/ngx_http_core_module.c"
     "server_name_in_redirect"
# 582 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 582 "project/nginx/src/http/ngx_http_core_module.c"
     "server_name_in_redirect" 
# 582 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 582 "project/nginx/src/http/ngx_http_core_module.c"
                                          ,
      
# 583 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 583 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 583 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 583 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 583 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 583 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 583 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 583 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 585 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 585 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 586 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 586 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 586 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 586 "project/nginx/src/http/ngx_http_core_module.c"
     server_name_in_redirect
# 586 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 586 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ,
      
# 587 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 587 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 589 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 589 "project/nginx/src/http/ngx_http_core_module.c"
     "port_in_redirect"
# 589 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 589 "project/nginx/src/http/ngx_http_core_module.c"
     "port_in_redirect" 
# 589 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 589 "project/nginx/src/http/ngx_http_core_module.c"
                                   ,
      
# 590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 590 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 590 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 590 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 590 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 592 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 592 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 593 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 593 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 593 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 593 "project/nginx/src/http/ngx_http_core_module.c"
     port_in_redirect
# 593 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 593 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ,
      
# 594 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 594 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 596 "project/nginx/src/http/ngx_http_core_module.c"
     "msie_padding"
# 596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 596 "project/nginx/src/http/ngx_http_core_module.c"
     "msie_padding" 
# 596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 596 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 597 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 597 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 597 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 597 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 597 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 597 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 597 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 597 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 599 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 599 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 600 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 600 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 600 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 600 "project/nginx/src/http/ngx_http_core_module.c"
     msie_padding
# 600 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 600 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ,
      
# 601 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 601 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 603 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 603 "project/nginx/src/http/ngx_http_core_module.c"
     "msie_refresh"
# 603 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 603 "project/nginx/src/http/ngx_http_core_module.c"
     "msie_refresh" 
# 603 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 603 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 604 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 604 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 604 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 604 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 606 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 606 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 607 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 607 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 607 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 607 "project/nginx/src/http/ngx_http_core_module.c"
     msie_refresh
# 607 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 607 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ,
      
# 608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 608 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 610 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 610 "project/nginx/src/http/ngx_http_core_module.c"
     "log_not_found"
# 610 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 610 "project/nginx/src/http/ngx_http_core_module.c"
     "log_not_found" 
# 610 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 610 "project/nginx/src/http/ngx_http_core_module.c"
                                ,
      
# 611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 611 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 611 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 611 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 611 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 613 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 613 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 614 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 614 "project/nginx/src/http/ngx_http_core_module.c"
     log_not_found
# 614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 614 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ,
      
# 615 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 615 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 617 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 617 "project/nginx/src/http/ngx_http_core_module.c"
     "log_subrequest"
# 617 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 617 "project/nginx/src/http/ngx_http_core_module.c"
     "log_subrequest" 
# 617 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 617 "project/nginx/src/http/ngx_http_core_module.c"
                                 ,
      
# 618 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 618 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 618 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 618 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 618 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 618 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 618 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 618 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 620 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 620 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 621 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 621 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 621 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 621 "project/nginx/src/http/ngx_http_core_module.c"
     log_subrequest
# 621 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 621 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ,
      
# 622 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 622 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 624 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 624 "project/nginx/src/http/ngx_http_core_module.c"
     "recursive_error_pages"
# 624 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 624 "project/nginx/src/http/ngx_http_core_module.c"
     "recursive_error_pages" 
# 624 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 624 "project/nginx/src/http/ngx_http_core_module.c"
                                        ,
      
# 625 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 625 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 625 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 625 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 625 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 625 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 625 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 625 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 627 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 627 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 628 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 628 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 628 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 628 "project/nginx/src/http/ngx_http_core_module.c"
     recursive_error_pages
# 628 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 628 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ,
      
# 629 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 629 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 631 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 631 "project/nginx/src/http/ngx_http_core_module.c"
     "server_tokens"
# 631 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 631 "project/nginx/src/http/ngx_http_core_module.c"
     "server_tokens" 
# 631 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 631 "project/nginx/src/http/ngx_http_core_module.c"
                                ,
      
# 632 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 632 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 632 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 632 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 632 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 632 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 632 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 632 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_enum_slot,
      
# 634 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 634 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 635 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 635 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 635 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 635 "project/nginx/src/http/ngx_http_core_module.c"
     server_tokens
# 635 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 635 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ,
      &ngx_http_core_server_tokens },

    { 
# 638 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 638 "project/nginx/src/http/ngx_http_core_module.c"
     "if_modified_since"
# 638 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 638 "project/nginx/src/http/ngx_http_core_module.c"
     "if_modified_since" 
# 638 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 638 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 639 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 639 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 639 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 639 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 639 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 639 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 639 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 639 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_enum_slot,
      
# 641 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 641 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 642 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 642 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 642 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 642 "project/nginx/src/http/ngx_http_core_module.c"
     if_modified_since
# 642 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 642 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ,
      &ngx_http_core_if_modified_since },

    { 
# 645 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 645 "project/nginx/src/http/ngx_http_core_module.c"
     "max_ranges"
# 645 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 645 "project/nginx/src/http/ngx_http_core_module.c"
     "max_ranges" 
# 645 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 645 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 646 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 646 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 646 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 646 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_num_slot,
      
# 648 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 648 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 649 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 649 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 649 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 649 "project/nginx/src/http/ngx_http_core_module.c"
     max_ranges
# 649 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 649 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ,
      
# 650 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 650 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 652 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 652 "project/nginx/src/http/ngx_http_core_module.c"
     "chunked_transfer_encoding"
# 652 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 652 "project/nginx/src/http/ngx_http_core_module.c"
     "chunked_transfer_encoding" 
# 652 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 652 "project/nginx/src/http/ngx_http_core_module.c"
                                            ,
      
# 653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 653 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 653 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 653 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 653 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 655 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 655 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 656 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 656 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 656 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 656 "project/nginx/src/http/ngx_http_core_module.c"
     chunked_transfer_encoding
# 656 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 656 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ,
      
# 657 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 657 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 659 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 659 "project/nginx/src/http/ngx_http_core_module.c"
     "etag"
# 659 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 659 "project/nginx/src/http/ngx_http_core_module.c"
     "etag" 
# 659 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 659 "project/nginx/src/http/ngx_http_core_module.c"
                       ,
      
# 660 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 660 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 660 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 660 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 660 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 660 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 660 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 660 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 662 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 662 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 663 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 663 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 663 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 663 "project/nginx/src/http/ngx_http_core_module.c"
     etag
# 663 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 663 "project/nginx/src/http/ngx_http_core_module.c"
                                             ,
      
# 664 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 664 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 666 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 666 "project/nginx/src/http/ngx_http_core_module.c"
     "error_page"
# 666 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 666 "project/nginx/src/http/ngx_http_core_module.c"
     "error_page" 
# 666 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 666 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 667 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 667 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 667 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 667 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 667 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 667 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 667 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x40000000
                        
# 668 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 668 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00001000
# 668 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_http_core_error_page,
      
# 670 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 670 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 672 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 672 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 674 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 674 "project/nginx/src/http/ngx_http_core_module.c"
     "post_action"
# 674 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 674 "project/nginx/src/http/ngx_http_core_module.c"
     "post_action" 
# 674 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 674 "project/nginx/src/http/ngx_http_core_module.c"
                              ,
      
# 675 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 675 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 675 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 675 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 675 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 675 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 675 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x40000000
                        
# 676 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 676 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x00000002
# 676 "project/nginx/src/http/ngx_http_core_module.c"
                                      ,
      ngx_conf_set_str_slot,
      
# 678 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 678 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 679 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 679 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 679 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 679 "project/nginx/src/http/ngx_http_core_module.c"
     post_action
# 679 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 679 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ,
      
# 680 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 680 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 682 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 682 "project/nginx/src/http/ngx_http_core_module.c"
     "error_log"
# 682 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 682 "project/nginx/src/http/ngx_http_core_module.c"
     "error_log" 
# 682 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 682 "project/nginx/src/http/ngx_http_core_module.c"
                            ,
      
# 683 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 683 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 683 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 683 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 683 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 683 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 683 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000800
# 683 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_http_core_error_log,
      
# 685 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 685 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 687 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 687 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 689 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 689 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache"
# 689 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 689 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache" 
# 689 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 689 "project/nginx/src/http/ngx_http_core_module.c"
                                  ,
      
# 690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 690 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 690 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 690 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            (0x00000002|0x00000004)
# 690 "project/nginx/src/http/ngx_http_core_module.c"
                                                                           ,
      ngx_http_core_open_file_cache,
      
# 692 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 692 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 693 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 693 "project/nginx/src/http/ngx_http_core_module.c"
     open_file_cache
# 693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 693 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ,
      
# 694 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 694 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 696 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_valid"
# 696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 696 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_valid" 
# 696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 696 "project/nginx/src/http/ngx_http_core_module.c"
                                        ,
      
# 697 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 697 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 697 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 697 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 697 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 697 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 697 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 697 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_sec_slot,
      
# 699 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 699 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 700 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 700 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 700 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 700 "project/nginx/src/http/ngx_http_core_module.c"
     open_file_cache_valid
# 700 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 700 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ,
      
# 701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 701 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 703 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 703 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_min_uses"
# 703 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 703 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_min_uses" 
# 703 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 703 "project/nginx/src/http/ngx_http_core_module.c"
                                           ,
      
# 704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 704 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 704 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 704 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 704 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_num_slot,
      
# 706 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 706 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 707 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 707 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 707 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 707 "project/nginx/src/http/ngx_http_core_module.c"
     open_file_cache_min_uses
# 707 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 707 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ,
      
# 708 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 708 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 710 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_errors"
# 710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 710 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_errors" 
# 710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 710 "project/nginx/src/http/ngx_http_core_module.c"
                                         ,
      
# 711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 711 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 711 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 711 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 711 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 713 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 713 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 714 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 714 "project/nginx/src/http/ngx_http_core_module.c"
     open_file_cache_errors
# 714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 714 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ,
      
# 715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 715 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 717 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 717 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_events"
# 717 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 717 "project/nginx/src/http/ngx_http_core_module.c"
     "open_file_cache_events" 
# 717 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 717 "project/nginx/src/http/ngx_http_core_module.c"
                                         ,
      
# 718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 718 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 718 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 718 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 718 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 720 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 721 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 721 "project/nginx/src/http/ngx_http_core_module.c"
     open_file_cache_events
# 721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 721 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ,
      
# 722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 722 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 724 "project/nginx/src/http/ngx_http_core_module.c"
     "resolver"
# 724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 724 "project/nginx/src/http/ngx_http_core_module.c"
     "resolver" 
# 724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 724 "project/nginx/src/http/ngx_http_core_module.c"
                           ,
      
# 725 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 725 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 725 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 725 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 725 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 725 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 725 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000800
# 725 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_http_core_resolver,
      
# 727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 727 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 729 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 729 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 731 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 731 "project/nginx/src/http/ngx_http_core_module.c"
     "resolver_timeout"
# 731 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 731 "project/nginx/src/http/ngx_http_core_module.c"
     "resolver_timeout" 
# 731 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 731 "project/nginx/src/http/ngx_http_core_module.c"
                                   ,
      
# 732 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 732 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 732 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 732 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 732 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 732 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 732 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 732 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_msec_slot,
      
# 734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 734 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 735 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 735 "project/nginx/src/http/ngx_http_core_module.c"
     resolver_timeout
# 735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 735 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ,
      
# 736 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 736 "project/nginx/src/http/ngx_http_core_module.c"
          },



    { 
# 740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 740 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_vary"
# 740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 740 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_vary" 
# 740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 740 "project/nginx/src/http/ngx_http_core_module.c"
                            ,
      
# 741 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 741 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 741 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 741 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 741 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 741 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 741 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000200
# 741 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ,
      ngx_conf_set_flag_slot,
      
# 743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 743 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 744 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 744 "project/nginx/src/http/ngx_http_core_module.c"
     gzip_vary
# 744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 744 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ,
      
# 745 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 745 "project/nginx/src/http/ngx_http_core_module.c"
          },

    { 
# 747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 747 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_http_version"
# 747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 747 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_http_version" 
# 747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 747 "project/nginx/src/http/ngx_http_core_module.c"
                                    ,
      
# 748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 748 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 748 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 748 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000002
# 748 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_enum_slot,
      
# 750 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 750 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 751 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 751 "project/nginx/src/http/ngx_http_core_module.c"
     gzip_http_version
# 751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 751 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ,
      &ngx_http_gzip_http_version },

    { 
# 754 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 754 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_proxied"
# 754 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 754 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_proxied" 
# 754 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 754 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 755 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 755 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 755 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000800
# 755 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_conf_set_bitmask_slot,
      
# 757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 757 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      
# 758 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (
# 758 "project/nginx/src/http/ngx_http_core_module.c"
     ngx_http_core_loc_conf_t
# 758 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     , 
# 758 "project/nginx/src/http/ngx_http_core_module.c"
     gzip_proxied
# 758 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     )
# 758 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ,
      &ngx_http_gzip_proxied_mask },

    { 
# 761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 761 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_disable"
# 761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 761 "project/nginx/src/http/ngx_http_core_module.c"
     "gzip_disable" 
# 761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 761 "project/nginx/src/http/ngx_http_core_module.c"
                               ,
      
# 762 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 762 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 762 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 762 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 762 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 762 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 762 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0x00000800
# 762 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ,
      ngx_http_gzip_disable,
      
# 764 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 764 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 766 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 766 "project/nginx/src/http/ngx_http_core_module.c"
          },





    { 
# 772 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 772 "project/nginx/src/http/ngx_http_core_module.c"
     "disable_symlinks"
# 772 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 772 "project/nginx/src/http/ngx_http_core_module.c"
     "disable_symlinks" 
# 772 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 772 "project/nginx/src/http/ngx_http_core_module.c"
                                   ,
      
# 773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     0x02000000
# 773 "project/nginx/src/http/ngx_http_core_module.c"
                       |
# 773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x04000000
# 773 "project/nginx/src/http/ngx_http_core_module.c"
                                         |
# 773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x08000000
# 773 "project/nginx/src/http/ngx_http_core_module.c"
                                                           |
# 773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            (0x00000002|0x00000004)
# 773 "project/nginx/src/http/ngx_http_core_module.c"
                                                                           ,
      ngx_http_disable_symlinks,
      
# 775 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     __builtin_offsetof (ngx_http_conf_ctx_t, loc_conf)
# 775 "project/nginx/src/http/ngx_http_core_module.c"
                             ,
      0,
      
# 777 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0) 
# 777 "project/nginx/src/http/ngx_http_core_module.c"
          },



      
# 781 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { { 0, ((void *)0) }, 0, ((void *)0), 0, 0, ((void *)0) }

# 782 "project/nginx/src/http/ngx_http_core_module.c"
};


static ngx_http_module_t ngx_http_core_module_ctx = {
    ngx_http_core_preconfiguration,
    ngx_http_core_postconfiguration,

    ngx_http_core_create_main_conf,
    ngx_http_core_init_main_conf,

    ngx_http_core_create_srv_conf,
    ngx_http_core_merge_srv_conf,

    ngx_http_core_create_loc_conf,
    ngx_http_core_merge_loc_conf
};


ngx_module_t ngx_http_core_module = {
    
# 801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (ngx_uint_t) -1, (ngx_uint_t) -1, ((void *)0), 0, 0, 1021005, 
# 801 "project/nginx/src/http/ngx_http_core_module.c"
   "8" 
# 801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   "," 
# 801 "project/nginx/src/http/ngx_http_core_module.c"
   "4" 
# 801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   "," 
# 801 "project/nginx/src/http/ngx_http_core_module.c"
   "8" 
# 801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   "," "1" "0" "0" "0" "0" "0" "0" "1" "1" "1" "0" "1" "0" "1" "1" "1" "0" "0" "1" "1" "0" "0" "1" "0" "1" "1" "1" "1" "0" "0" "0" "1" "1" "0"
# 801 "project/nginx/src/http/ngx_http_core_module.c"
                ,
    &ngx_http_core_module_ctx,
    ngx_http_core_commands,
    
# 804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   0x50545448
# 804 "project/nginx/src/http/ngx_http_core_module.c"
                  ,
    
# 805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 805 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 806 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 806 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 807 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 808 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 808 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 809 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 810 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 810 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 811 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ((void *)0)
# 811 "project/nginx/src/http/ngx_http_core_module.c"
       ,
    
# 812 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   0, 0, 0, 0, 0, 0, 0, 0

# 813 "project/nginx/src/http/ngx_http_core_module.c"
};


ngx_str_t ngx_http_core_get_method = { 3, (u_char *) "GET" };


void
ngx_http_handler(ngx_http_request_t *r)
{
    ngx_http_core_main_conf_t *cmcf;

    r->connection->log->action = 
# 824 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                ((void *)0)
# 824 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;

    if (!r->internal) {
        switch (r->headers_in.connection_type) {
        case 0:
            r->keepalive = (r->http_version > 
# 829 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                             1000
# 829 "project/nginx/src/http/ngx_http_core_module.c"
                                                                );
            break;

        case 
# 832 "project/nginx/src/http/ngx_http_core_module.c" 3 4
            1
# 832 "project/nginx/src/http/ngx_http_core_module.c"
                                     :
            r->keepalive = 0;
            break;

        case 
# 836 "project/nginx/src/http/ngx_http_core_module.c" 3 4
            2
# 836 "project/nginx/src/http/ngx_http_core_module.c"
                                          :
            r->keepalive = 1;
            break;
        }

        r->lingering_close = (r->headers_in.content_length_n > 0
                              || r->headers_in.chunked);
        r->phase_handler = 0;

    } else {
        cmcf = 
# 846 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (
# 846 "project/nginx/src/http/ngx_http_core_module.c"
              r
# 846 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              )->main_conf[
# 846 "project/nginx/src/http/ngx_http_core_module.c"
              ngx_http_core_module
# 846 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              .ctx_index]
# 846 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ;
        r->phase_handler = cmcf->phase_engine.server_rewrite_index;
    }

    r->valid_location = 1;

    r->gzip_tested = 0;
    r->gzip_ok = 0;
    r->gzip_vary = 0;


    r->write_event_handler = ngx_http_core_run_phases;
    ngx_http_core_run_phases(r);
}


void
ngx_http_core_run_phases(ngx_http_request_t *r)
{
    ngx_int_t rc;
    ngx_http_phase_handler_t *ph;
    ngx_http_core_main_conf_t *cmcf;

    cmcf = 
# 869 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 869 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 869 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->main_conf[
# 869 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 869 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 869 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;

    ph = cmcf->phase_engine.handlers;

    while (ph[r->phase_handler].checker) {

        rc = ph[r->phase_handler].checker(r, &ph[r->phase_handler]);

        if (rc == 
# 877 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 0
# 877 "project/nginx/src/http/ngx_http_core_module.c"
                       ) {
            return;
        }
    }
}


ngx_int_t
ngx_http_core_generic_phase(ngx_http_request_t *r, ngx_http_phase_handler_t *ph)
{
    ngx_int_t rc;






   
                                                          ;

    rc = ph->handler(r);

    if (rc == 
# 899 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             0
# 899 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        r->phase_handler = ph->next;
        return 
# 901 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 901 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (rc == 
# 904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -5
# 904 "project/nginx/src/http/ngx_http_core_module.c"
                         ) {
        r->phase_handler++;
        return 
# 906 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 906 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (rc == 
# 909 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -2 
# 909 "project/nginx/src/http/ngx_http_core_module.c"
                       || rc == 
# 909 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                -4
# 909 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
        return 
# 910 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 910 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }



    ngx_http_finalize_request(r, rc);

    return 
# 917 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 917 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


ngx_int_t
ngx_http_core_rewrite_phase(ngx_http_request_t *r, ngx_http_phase_handler_t *ph)
{
    ngx_int_t rc;

   
                                                          ;

    rc = ph->handler(r);

    if (rc == 
# 931 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -5
# 931 "project/nginx/src/http/ngx_http_core_module.c"
                         ) {
        r->phase_handler++;
        return 
# 933 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 933 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (rc == 
# 936 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -4
# 936 "project/nginx/src/http/ngx_http_core_module.c"
                     ) {
        return 
# 937 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 937 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }



    ngx_http_finalize_request(r, rc);

    return 
# 944 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 944 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


ngx_int_t
ngx_http_core_find_config_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph)
{
    u_char *p;
    size_t len;
    ngx_int_t rc;
    ngx_http_core_loc_conf_t *clcf;

    r->content_handler = 
# 957 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 957 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    r->uri_changed = 0;

    rc = ngx_http_core_find_location(r);

    if (rc == 
# 962 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -1
# 962 "project/nginx/src/http/ngx_http_core_module.c"
                      ) {
        ngx_http_finalize_request(r, 
# 963 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    500
# 963 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  );
        return 
# 964 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 964 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    clcf = 
# 967 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 967 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 967 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 967 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 967 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 967 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (!r->internal && clcf->internal) {
        ngx_http_finalize_request(r, 
# 970 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    404
# 970 "project/nginx/src/http/ngx_http_core_module.c"
                                                      );
        return 
# 971 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 971 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

   


                               ;

    ngx_http_update_location_config(r);

   

                                                                              ;

    if (r->headers_in.content_length_n != -1
        && !r->discard_body
        && clcf->client_max_body_size
        && clcf->client_max_body_size < r->headers_in.content_length_n)
    {
        
# 990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 990 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 990 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 990 "project/nginx/src/http/ngx_http_core_module.c"
       0, "client intended to send too large body: %O bytes", r->headers_in.content_length_n
# 990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )

                                                     
# 992 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;

        r->expect_tested = 1;
        (void) ngx_http_discard_request_body(r);
        ngx_http_finalize_request(r, 
# 996 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    413
# 996 "project/nginx/src/http/ngx_http_core_module.c"
                                                                     );
        return 
# 997 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 997 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    if (rc == 
# 1000 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -4
# 1000 "project/nginx/src/http/ngx_http_core_module.c"
                     ) {
        
# 1001 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if (
# 1001 "project/nginx/src/http/ngx_http_core_module.c"
       r
# 1001 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->headers_out.location) { 
# 1001 "project/nginx/src/http/ngx_http_core_module.c"
       r
# 1001 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->headers_out.location->hash = 0; 
# 1001 "project/nginx/src/http/ngx_http_core_module.c"
       r
# 1001 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->headers_out.location = ((void *)0); }
# 1001 "project/nginx/src/http/ngx_http_core_module.c"
                                 ;

        r->headers_out.location = ngx_list_push(&r->headers_out.headers);
        if (r->headers_out.location == 
# 1004 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      ((void *)0)
# 1004 "project/nginx/src/http/ngx_http_core_module.c"
                                          ) {
            ngx_http_finalize_request(r, 
# 1005 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                        500
# 1005 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      );
            return 
# 1006 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  0
# 1006 "project/nginx/src/http/ngx_http_core_module.c"
                        ;
        }

        r->headers_out.location->hash = 1;
        
# 1010 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       (
# 1010 "project/nginx/src/http/ngx_http_core_module.c"
       &r->headers_out.location->key
# 1010 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->len = sizeof(
# 1010 "project/nginx/src/http/ngx_http_core_module.c"
       "Location"
# 1010 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) - 1; (
# 1010 "project/nginx/src/http/ngx_http_core_module.c"
       &r->headers_out.location->key
# 1010 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->data = (u_char *) 
# 1010 "project/nginx/src/http/ngx_http_core_module.c"
       "Location";

        if (r->args.len == 0) {
            r->headers_out.location->value = clcf->escaped_name;

        } else {
            len = clcf->escaped_name.len + 1 + r->args.len;
            p = ngx_pnalloc(r->pool, len);

            if (p == 
# 1019 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    ((void *)0)
# 1019 "project/nginx/src/http/ngx_http_core_module.c"
                        ) {
                
# 1020 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               if (
# 1020 "project/nginx/src/http/ngx_http_core_module.c"
               r
# 1020 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ->headers_out.location) { 
# 1020 "project/nginx/src/http/ngx_http_core_module.c"
               r
# 1020 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ->headers_out.location->hash = 0; 
# 1020 "project/nginx/src/http/ngx_http_core_module.c"
               r
# 1020 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ->headers_out.location = ((void *)0); }
# 1020 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
                ngx_http_finalize_request(r, 
# 1021 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                            500
# 1021 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          );
                return 
# 1022 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      0
# 1022 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
            }

            r->headers_out.location->value.len = len;
            r->headers_out.location->value.data = p;

            p = 
# 1028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               (((u_char *) __builtin___memcpy_chk (
# 1028 "project/nginx/src/http/ngx_http_core_module.c"
               p
# 1028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , 
# 1028 "project/nginx/src/http/ngx_http_core_module.c"
               clcf->escaped_name.data
# 1028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , 
# 1028 "project/nginx/src/http/ngx_http_core_module.c"
               clcf->escaped_name.len
# 1028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , __builtin_object_size (
# 1028 "project/nginx/src/http/ngx_http_core_module.c"
               p
# 1028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , 0))) + (
# 1028 "project/nginx/src/http/ngx_http_core_module.c"
               clcf->escaped_name.len
# 1028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ))
# 1028 "project/nginx/src/http/ngx_http_core_module.c"
                                                                             ;
            *p++ = '?';
            
# 1030 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           (void) __builtin___memcpy_chk (
# 1030 "project/nginx/src/http/ngx_http_core_module.c"
           p
# 1030 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 1030 "project/nginx/src/http/ngx_http_core_module.c"
           r->args.data
# 1030 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 1030 "project/nginx/src/http/ngx_http_core_module.c"
           r->args.len
# 1030 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , __builtin_object_size (
# 1030 "project/nginx/src/http/ngx_http_core_module.c"
           p
# 1030 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 0))
# 1030 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ;
        }

        ngx_http_finalize_request(r, 
# 1033 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    301
# 1033 "project/nginx/src/http/ngx_http_core_module.c"
                                                              );
        return 
# 1034 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1034 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    r->phase_handler++;
    return 
# 1038 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          -2
# 1038 "project/nginx/src/http/ngx_http_core_module.c"
                   ;
}


ngx_int_t
ngx_http_core_post_rewrite_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph)
{
    ngx_http_core_srv_conf_t *cscf;

   
                                                               ;

    if (!r->uri_changed) {
        r->phase_handler++;
        return 
# 1053 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 1053 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

   
                                                     ;
# 1066 "project/nginx/src/http/ngx_http_core_module.c"
    r->uri_changes--;

    if (r->uri_changes == 0) {
        
# 1069 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 1069 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 1069 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 1069 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 1069 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 1069 "project/nginx/src/http/ngx_http_core_module.c"
       0, "rewrite or internal redirection cycle " "while processing \"%V\"", &r->uri
# 1069 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )

                                                         
# 1071 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ;

        ngx_http_finalize_request(r, 
# 1073 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    500
# 1073 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  );
        return 
# 1074 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1074 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    r->phase_handler = ph->next;

    cscf = 
# 1079 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1079 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1079 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->srv_conf[
# 1079 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1079 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1079 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;
    r->loc_conf = cscf->ctx->loc_conf;

    return 
# 1082 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          -2
# 1082 "project/nginx/src/http/ngx_http_core_module.c"
                   ;
}


ngx_int_t
ngx_http_core_access_phase(ngx_http_request_t *r, ngx_http_phase_handler_t *ph)
{
    ngx_int_t rc;
    ngx_http_core_loc_conf_t *clcf;

    if (r != r->main) {
        r->phase_handler = ph->next;
        return 
# 1094 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 1094 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

   
                                                         ;

    rc = ph->handler(r);

    if (rc == 
# 1102 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -5
# 1102 "project/nginx/src/http/ngx_http_core_module.c"
                         ) {
        r->phase_handler++;
        return 
# 1104 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 1104 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (rc == 
# 1107 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -2 
# 1107 "project/nginx/src/http/ngx_http_core_module.c"
                       || rc == 
# 1107 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                -4
# 1107 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
        return 
# 1108 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1108 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    clcf = 
# 1111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1111 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 1111 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1111 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (clcf->satisfy == 
# 1113 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0
# 1113 "project/nginx/src/http/ngx_http_core_module.c"
                                            ) {

        if (rc == 
# 1115 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 0
# 1115 "project/nginx/src/http/ngx_http_core_module.c"
                       ) {
            r->phase_handler++;
            return 
# 1117 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -2
# 1117 "project/nginx/src/http/ngx_http_core_module.c"
                           ;
        }

    } else {
        if (rc == 
# 1121 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 0
# 1121 "project/nginx/src/http/ngx_http_core_module.c"
                       ) {
            r->access_code = 0;

            if (r->headers_out.www_authenticate) {
                r->headers_out.www_authenticate->hash = 0;
            }

            r->phase_handler = ph->next;
            return 
# 1129 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -2
# 1129 "project/nginx/src/http/ngx_http_core_module.c"
                           ;
        }

        if (rc == 
# 1132 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 403 
# 1132 "project/nginx/src/http/ngx_http_core_module.c"
                                    || rc == 
# 1132 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                             401
# 1132 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ) {
            if (r->access_code != 
# 1133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 401
# 1133 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ) {
                r->access_code = rc;
            }

            r->phase_handler++;
            return 
# 1138 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -2
# 1138 "project/nginx/src/http/ngx_http_core_module.c"
                           ;
        }
    }



    if (rc == 
# 1144 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             401
# 1144 "project/nginx/src/http/ngx_http_core_module.c"
                                  ) {
        return ngx_http_core_auth_delay(r);
    }

    ngx_http_finalize_request(r, rc);
    return 
# 1149 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 1149 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


ngx_int_t
ngx_http_core_post_access_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph)
{
    ngx_int_t access_code;

   
                                                              ;

    access_code = r->access_code;

    if (access_code) {
        r->access_code = 0;

        if (access_code == 
# 1167 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          403
# 1167 "project/nginx/src/http/ngx_http_core_module.c"
                                            ) {
            
# 1168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           if ((
# 1168 "project/nginx/src/http/ngx_http_core_module.c"
           r->connection->log
# 1168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )->log_level >= 4) ngx_log_error_core(4, 
# 1168 "project/nginx/src/http/ngx_http_core_module.c"
           r->connection->log
# 1168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 1168 "project/nginx/src/http/ngx_http_core_module.c"
           0, "access forbidden by rule"
# 1168 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )
                                                     
# 1169 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;
        }

        if (access_code == 
# 1172 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          401
# 1172 "project/nginx/src/http/ngx_http_core_module.c"
                                               ) {
            return ngx_http_core_auth_delay(r);
        }

        ngx_http_finalize_request(r, access_code);
        return 
# 1177 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1177 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    r->phase_handler++;
    return 
# 1181 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          -2
# 1181 "project/nginx/src/http/ngx_http_core_module.c"
                   ;
}


static ngx_int_t
ngx_http_core_auth_delay(ngx_http_request_t *r)
{
    ngx_http_core_loc_conf_t *clcf;

    clcf = 
# 1190 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1190 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1190 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 1190 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1190 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1190 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (clcf->auth_delay == 0) {
        ngx_http_finalize_request(r, 
# 1193 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    401
# 1193 "project/nginx/src/http/ngx_http_core_module.c"
                                                         );
        return 
# 1194 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1194 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    
# 1197 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if ((
# 1197 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->log
# 1197 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->log_level >= 7) ngx_log_error_core(7, 
# 1197 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->log
# 1197 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 
# 1197 "project/nginx/src/http/ngx_http_core_module.c"
   0, "delaying unauthorized request"
# 1197 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )
                                                  
# 1198 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;

    if (r->connection->read->ready) {
        
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if (!(
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->posted) { (
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->posted = 1; (&(
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->queue)->prev = (
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       &ngx_posted_events
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->prev; (&(
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->queue)->prev->next = &(
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->queue; (&(
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->queue)->next = 
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       &ngx_posted_events
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ; (
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       &ngx_posted_events
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->prev = &(
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->read
# 1201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->queue; ; } else { ; }
# 1201 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;

    } else {
        if (ngx_handle_read_event(r->connection->read, 0) != 
# 1204 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0
# 1204 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ) {
            return 
# 1205 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  500
# 1205 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
        }
    }

    r->read_event_handler = ngx_http_test_reading;
    r->write_event_handler = ngx_http_core_auth_delay_handler;

    r->connection->write->delayed = 1;
    
# 1213 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ngx_event_add_timer
# 1213 "project/nginx/src/http/ngx_http_core_module.c"
                (r->connection->write, clcf->auth_delay);






    
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (!(
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->posted) { (
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->posted = 1; (&(
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->queue)->prev = (
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   &ngx_posted_next_events
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->prev; (&(
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->queue)->prev->next = &(
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->queue; (&(
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->queue)->next = 
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   &ngx_posted_next_events
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; (
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   &ngx_posted_next_events
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->prev = &(
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->write
# 1220 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->queue; ; } else { ; }
# 1220 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;

    return 
# 1222 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 1222 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


static void
ngx_http_core_auth_delay_handler(ngx_http_request_t *r)
{
    ngx_event_t *wev;

   
                                        ;

    wev = r->connection->write;

    if (wev->delayed) {

        if (ngx_handle_write_event(wev, 0) != 
# 1238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                             0
# 1238 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ) {
            ngx_http_finalize_request(r, 
# 1239 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                        500
# 1239 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      );
        }

        return;
    }

    ngx_http_finalize_request(r, 
# 1245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                401
# 1245 "project/nginx/src/http/ngx_http_core_module.c"
                                                     );
}


ngx_int_t
ngx_http_core_content_phase(ngx_http_request_t *r,
    ngx_http_phase_handler_t *ph)
{
    size_t root;
    ngx_int_t rc;
    ngx_str_t path;

    if (r->content_handler) {
        r->write_event_handler = ngx_http_request_empty_handler;
        ngx_http_finalize_request(r, r->content_handler(r));
        return 
# 1260 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1260 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

   
                                                          ;

    rc = ph->handler(r);

    if (rc != 
# 1268 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -5
# 1268 "project/nginx/src/http/ngx_http_core_module.c"
                         ) {
        ngx_http_finalize_request(r, rc);
        return 
# 1270 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1270 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }



    ph++;

    if (ph->checker) {
        r->phase_handler++;
        return 
# 1279 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -2
# 1279 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }



    if (r->uri.data[r->uri.len - 1] == '/') {

        if (ngx_http_map_uri_to_path(r, &path, &root, 0) != 
# 1286 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                           ((void *)0)
# 1286 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ) {
            
# 1287 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           if ((
# 1287 "project/nginx/src/http/ngx_http_core_module.c"
           r->connection->log
# 1287 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )->log_level >= 4) ngx_log_error_core(4, 
# 1287 "project/nginx/src/http/ngx_http_core_module.c"
           r->connection->log
# 1287 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 1287 "project/nginx/src/http/ngx_http_core_module.c"
           0, "directory index of \"%s\" is forbidden", path.data
# 1287 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )
                                                                              
# 1288 "project/nginx/src/http/ngx_http_core_module.c"
                                                                             ;
        }

        ngx_http_finalize_request(r, 
# 1291 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    403
# 1291 "project/nginx/src/http/ngx_http_core_module.c"
                                                      );
        return 
# 1292 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1292 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    
# 1295 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if ((
# 1295 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->log
# 1295 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->log_level >= 4) ngx_log_error_core(4, 
# 1295 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->log
# 1295 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 
# 1295 "project/nginx/src/http/ngx_http_core_module.c"
   0, "no handler found"
# 1295 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )
# 1295 "project/nginx/src/http/ngx_http_core_module.c"
                                                                        ;

    ngx_http_finalize_request(r, 
# 1297 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                404
# 1297 "project/nginx/src/http/ngx_http_core_module.c"
                                                  );
    return 
# 1298 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 1298 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


void
ngx_http_update_location_config(ngx_http_request_t *r)
{
    ngx_http_core_loc_conf_t *clcf;

    clcf = 
# 1307 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1307 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1307 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 1307 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1307 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1307 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (r->method & clcf->limit_except) {
        r->loc_conf = clcf->limit_except_loc_conf;
        clcf = 
# 1311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (
# 1311 "project/nginx/src/http/ngx_http_core_module.c"
              r
# 1311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              )->loc_conf[
# 1311 "project/nginx/src/http/ngx_http_core_module.c"
              ngx_http_core_module
# 1311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              .ctx_index]
# 1311 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;
    }

    if (r == r->main) {
        r->connection
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log->file = 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       clcf->error_log
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->file; 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log->next = 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       clcf->error_log
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->next; 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log->writer = 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       clcf->error_log
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->writer; 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log->wdata = 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       clcf->error_log
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->wdata; if (!(
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log->log_level & 0x80000000)) { 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log->log_level = 
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
       clcf->error_log
# 1315 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->log_level; }
# 1315 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;
    }

    if ((ngx_io.flags & 
# 1318 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       1
# 1318 "project/nginx/src/http/ngx_http_core_module.c"
                                      ) && clcf->sendfile) {
        r->connection->sendfile = 1;

    } else {
        r->connection->sendfile = 0;
    }

    if (clcf->client_body_in_file_only) {
        r->request_body_in_file_only = 1;
        r->request_body_in_persistent_file = 1;
        r->request_body_in_clean_file =
            clcf->client_body_in_file_only == 2;
        r->request_body_file_log_level = 
# 1330 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                        6
# 1330 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;

    } else {
        r->request_body_file_log_level = 
# 1333 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                        5
# 1333 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;
    }

    r->request_body_in_single_buf = clcf->client_body_in_single_buffer;

    if (r->keepalive) {
        if (clcf->keepalive_timeout == 0) {
            r->keepalive = 0;

        } else if (r->connection->requests >= clcf->keepalive_requests) {
            r->keepalive = 0;

        } else if (ngx_current_msec - r->connection->start_time
                   > clcf->keepalive_time)
        {
            r->keepalive = 0;

        } else if (r->headers_in.msie6
                   && r->method == 
# 1351 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  0x00000008
                   
# 1352 "project/nginx/src/http/ngx_http_core_module.c"
                  && (clcf->keepalive_disable
                       & 
# 1353 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x0004
# 1353 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ))
        {




            r->keepalive = 0;

        } else if (r->headers_in.safari
                   && (clcf->keepalive_disable
                       & 
# 1363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        0x0008
# 1363 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ))
        {





            r->keepalive = 0;
        }
    }

    if (!clcf->tcp_nopush) {

        r->connection->tcp_nopush = NGX_TCP_NOPUSH_DISABLED;
    }

    if (clcf->handler) {
        r->content_handler = clcf->handler;
    }
}
# 1393 "project/nginx/src/http/ngx_http_core_module.c"
static ngx_int_t
ngx_http_core_find_location(ngx_http_request_t *r)
{
    ngx_int_t rc;
    ngx_http_core_loc_conf_t *pclcf;

    ngx_int_t n;
    ngx_uint_t noregex;
    ngx_http_core_loc_conf_t *clcf, **clcfp;

    noregex = 0;


    pclcf = 
# 1406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           (
# 1406 "project/nginx/src/http/ngx_http_core_module.c"
           r
# 1406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )->loc_conf[
# 1406 "project/nginx/src/http/ngx_http_core_module.c"
           ngx_http_core_module
# 1406 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           .ctx_index]
# 1406 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;

    rc = ngx_http_core_find_static_location(r, pclcf->static_locations);

    if (rc == 
# 1410 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -2
# 1410 "project/nginx/src/http/ngx_http_core_module.c"
                      ) {


        clcf = 
# 1413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (
# 1413 "project/nginx/src/http/ngx_http_core_module.c"
              r
# 1413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              )->loc_conf[
# 1413 "project/nginx/src/http/ngx_http_core_module.c"
              ngx_http_core_module
# 1413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              .ctx_index]
# 1413 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;

        noregex = clcf->noregex;




        rc = ngx_http_core_find_location(r);
    }

    if (rc == 
# 1423 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             0 
# 1423 "project/nginx/src/http/ngx_http_core_module.c"
                    || rc == 
# 1423 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             -4
# 1423 "project/nginx/src/http/ngx_http_core_module.c"
                                     ) {
        return rc;
    }





    if (noregex == 0 && pclcf->regex_locations) {

        for (clcfp = pclcf->regex_locations; *clcfp; clcfp++) {

           
                                                                      ;

            n = ngx_http_regex_exec(r, (*clcfp)->regex, &r->uri);

            if (n == 
# 1440 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    0
# 1440 "project/nginx/src/http/ngx_http_core_module.c"
                          ) {
                r->loc_conf = (*clcfp)->loc_conf;



                rc = ngx_http_core_find_location(r);

                return (rc == 
# 1447 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             -1
# 1447 "project/nginx/src/http/ngx_http_core_module.c"
                                      ) ? rc : 
# 1447 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                               0
# 1447 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ;
            }

            if (n == 
# 1450 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    -5
# 1450 "project/nginx/src/http/ngx_http_core_module.c"
                                ) {
                continue;
            }

            return 
# 1454 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -1
# 1454 "project/nginx/src/http/ngx_http_core_module.c"
                           ;
        }
    }


    return rc;
}
# 1470 "project/nginx/src/http/ngx_http_core_module.c"
static ngx_int_t
ngx_http_core_find_static_location(ngx_http_request_t *r,
    ngx_http_location_tree_node_t *node)
{
    u_char *uri;
    size_t len, n;
    ngx_int_t rc, rv;

    len = r->uri.len;
    uri = r->uri.data;

    rv = 
# 1481 "project/nginx/src/http/ngx_http_core_module.c" 3 4
        -5
# 1481 "project/nginx/src/http/ngx_http_core_module.c"
                    ;

    for ( ;; ) {

        if (node == 
# 1485 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   ((void *)0)
# 1485 "project/nginx/src/http/ngx_http_core_module.c"
                       ) {
            return rv;
        }

       

                                                      ;

        n = (len <= (size_t) node->len) ? len : node->len;

        rc = ngx_filename_cmp(uri, node->name, n);

        if (rc != 0) {
            node = (rc < 0) ? node->left : node->right;

            continue;
        }

        if (len > (size_t) node->len) {

            if (node->inclusive) {

                r->loc_conf = node->inclusive->loc_conf;
                rv = 
# 1508 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    -2
# 1508 "project/nginx/src/http/ngx_http_core_module.c"
                             ;

                node = node->tree;
                uri += n;
                len -= n;

                continue;
            }



            node = node->right;

            continue;
        }

        if (len == (size_t) node->len) {

            if (node->exact) {
                r->loc_conf = node->exact->loc_conf;
                return 
# 1528 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      0
# 1528 "project/nginx/src/http/ngx_http_core_module.c"
                            ;

            } else {
                r->loc_conf = node->inclusive->loc_conf;
                return 
# 1532 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      -2
# 1532 "project/nginx/src/http/ngx_http_core_module.c"
                               ;
            }
        }



        if (len + 1 == (size_t) node->len && node->auto_redirect) {

            r->loc_conf = (node->exact) ? node->exact->loc_conf:
                                          node->inclusive->loc_conf;
            rv = 
# 1542 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                -4
# 1542 "project/nginx/src/http/ngx_http_core_module.c"
                        ;
        }

        node = node->left;
    }
}


void *
ngx_http_test_content_type(ngx_http_request_t *r, ngx_hash_t *types_hash)
{
    u_char c, *lowcase;
    size_t len;
    ngx_uint_t i, hash;

    if (types_hash->size == 0) {
        return (void *) 4;
    }

    if (r->headers_out.content_type.len == 0) {
        return 
# 1562 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 1562 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }

    len = r->headers_out.content_type_len;

    if (r->headers_out.content_type_lowcase == 
# 1567 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                              ((void *)0)
# 1567 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ) {

        lowcase = ngx_pnalloc(r->pool, len);
        if (lowcase == 
# 1570 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ((void *)0)
# 1570 "project/nginx/src/http/ngx_http_core_module.c"
                          ) {
            return 
# 1571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 1571 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
        }

        r->headers_out.content_type_lowcase = lowcase;

        hash = 0;

        for (i = 0; i < len; i++) {
            c = 
# 1579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               (u_char) ((
# 1579 "project/nginx/src/http/ngx_http_core_module.c"
               r->headers_out.content_type.data[i] 
# 1579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               >= 'A' && 
# 1579 "project/nginx/src/http/ngx_http_core_module.c"
               r->headers_out.content_type.data[i] 
# 1579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               <= 'Z') ? (
# 1579 "project/nginx/src/http/ngx_http_core_module.c"
               r->headers_out.content_type.data[i] 
# 1579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               | 0x20) : 
# 1579 "project/nginx/src/http/ngx_http_core_module.c"
               r->headers_out.content_type.data[i]
# 1579 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               )
# 1579 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;
            hash = 
# 1580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((ngx_uint_t) 
# 1580 "project/nginx/src/http/ngx_http_core_module.c"
                  hash 
# 1580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  * 31 + 
# 1580 "project/nginx/src/http/ngx_http_core_module.c"
                  c
# 1580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  )
# 1580 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
            lowcase[i] = c;
        }

        r->headers_out.content_type_hash = hash;
    }

    return ngx_hash_find(types_hash, r->headers_out.content_type_hash,
                         r->headers_out.content_type_lowcase, len);
}


ngx_int_t
ngx_http_set_content_type(ngx_http_request_t *r)
{
    u_char c, *exten;
    ngx_str_t *type;
    ngx_uint_t i, hash;
    ngx_http_core_loc_conf_t *clcf;

    if (r->headers_out.content_type.len) {
        return 
# 1601 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1601 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    clcf = 
# 1604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1604 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 1604 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1604 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (r->exten.len) {

        hash = 0;

        for (i = 0; i < r->exten.len; i++) {
            c = r->exten.data[i];

            if (c >= 'A' && c <= 'Z') {

                exten = ngx_pnalloc(r->pool, r->exten.len);
                if (exten == 
# 1616 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            ((void *)0)
# 1616 "project/nginx/src/http/ngx_http_core_module.c"
                                ) {
                    return 
# 1617 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          -1
# 1617 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
                }

                hash = ngx_hash_strlow(exten, r->exten.data, r->exten.len);

                r->exten.data = exten;

                break;
            }

            hash = 
# 1627 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((ngx_uint_t) 
# 1627 "project/nginx/src/http/ngx_http_core_module.c"
                  hash 
# 1627 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  * 31 + 
# 1627 "project/nginx/src/http/ngx_http_core_module.c"
                  c
# 1627 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  )
# 1627 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
        }

        type = ngx_hash_find(&clcf->types_hash, hash,
                             r->exten.data, r->exten.len);

        if (type) {
            r->headers_out.content_type_len = type->len;
            r->headers_out.content_type = *type;

            return 
# 1637 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  0
# 1637 "project/nginx/src/http/ngx_http_core_module.c"
                        ;
        }
    }

    r->headers_out.content_type_len = clcf->default_type.len;
    r->headers_out.content_type = clcf->default_type;

    return 
# 1644 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 1644 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


void
ngx_http_set_exten(ngx_http_request_t *r)
{
    ngx_int_t i;

    
# 1653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (
# 1653 "project/nginx/src/http/ngx_http_core_module.c"
   &r->exten
# 1653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->len = 0; (
# 1653 "project/nginx/src/http/ngx_http_core_module.c"
   &r->exten
# 1653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->data = ((void *)0)
# 1653 "project/nginx/src/http/ngx_http_core_module.c"
                          ;

    for (i = r->uri.len - 1; i > 1; i--) {
        if (r->uri.data[i] == '.' && r->uri.data[i - 1] != '/') {

            r->exten.len = r->uri.len - i - 1;
            r->exten.data = &r->uri.data[i + 1];

            return;

        } else if (r->uri.data[i] == '/') {
            return;
        }
    }

    return;
}


ngx_int_t
ngx_http_set_etag(ngx_http_request_t *r)
{
    ngx_table_elt_t *etag;
    ngx_http_core_loc_conf_t *clcf;

    clcf = 
# 1678 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1678 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1678 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 1678 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1678 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1678 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (!clcf->etag) {
        return 
# 1681 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1681 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    etag = ngx_list_push(&r->headers_out.headers);
    if (etag == 
# 1685 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ((void *)0)
# 1685 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        return 
# 1686 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 1686 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    etag->hash = 1;
    
# 1690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (
# 1690 "project/nginx/src/http/ngx_http_core_module.c"
   &etag->key
# 1690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->len = sizeof(
# 1690 "project/nginx/src/http/ngx_http_core_module.c"
   "ETag"
# 1690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ) - 1; (
# 1690 "project/nginx/src/http/ngx_http_core_module.c"
   &etag->key
# 1690 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->data = (u_char *) 
# 1690 "project/nginx/src/http/ngx_http_core_module.c"
   "ETag";

    etag->value.data = ngx_pnalloc(r->pool, 
# 1692 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                           (sizeof("-9223372036854775808") - 1) 
# 1692 "project/nginx/src/http/ngx_http_core_module.c"
                                                         + 
# 1692 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                           (sizeof("-9223372036854775808") - 1) 
# 1692 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          + 3);
    if (etag->value.data == 
# 1693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           ((void *)0)
# 1693 "project/nginx/src/http/ngx_http_core_module.c"
                               ) {
        etag->hash = 0;
        return 
# 1695 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 1695 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    etag->value.len = ngx_sprintf(etag->value.data, "\"%xT-%xO\"",
                                  r->headers_out.last_modified_time,
                                  r->headers_out.content_length_n)
                      - etag->value.data;

    r->headers_out.etag = etag;

    return 
# 1705 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 1705 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


void
ngx_http_weak_etag(ngx_http_request_t *r)
{
    size_t len;
    u_char *p;
    ngx_table_elt_t *etag;

    etag = r->headers_out.etag;

    if (etag == 
# 1718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ((void *)0)
# 1718 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        return;
    }

    if (etag->value.len > 2
        && etag->value.data[0] == 'W'
        && etag->value.data[1] == '/')
    {
        return;
    }

    if (etag->value.len < 1 || etag->value.data[0] != '"') {
        r->headers_out.etag->hash = 0;
        r->headers_out.etag = 
# 1731 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             ((void *)0)
# 1731 "project/nginx/src/http/ngx_http_core_module.c"
                                 ;
        return;
    }

    p = ngx_pnalloc(r->pool, etag->value.len + 2);
    if (p == 
# 1736 "project/nginx/src/http/ngx_http_core_module.c" 3 4
            ((void *)0)
# 1736 "project/nginx/src/http/ngx_http_core_module.c"
                ) {
        r->headers_out.etag->hash = 0;
        r->headers_out.etag = 
# 1738 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             ((void *)0)
# 1738 "project/nginx/src/http/ngx_http_core_module.c"
                                 ;
        return;
    }

    len = ngx_sprintf(p, "W/%V", &etag->value) - p;

    etag->value.data = p;
    etag->value.len = len;
}


ngx_int_t
ngx_http_send_response(ngx_http_request_t *r, ngx_uint_t status,
    ngx_str_t *ct, ngx_http_complex_value_t *cv)
{
    ngx_int_t rc;
    ngx_str_t val;
    ngx_buf_t *b;
    ngx_chain_t out;

    rc = ngx_http_discard_request_body(r);

    if (rc != 
# 1760 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             0
# 1760 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        return rc;
    }

    r->headers_out.status = status;

    if (ngx_http_complex_value(r, cv, &val) != 
# 1766 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                              0
# 1766 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ) {
        return 
# 1767 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              500
# 1767 "project/nginx/src/http/ngx_http_core_module.c"
                                            ;
    }

    if (status == 
# 1770 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 301
        
# 1771 "project/nginx/src/http/ngx_http_core_module.c"
       || status == 
# 1771 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    302
        
# 1772 "project/nginx/src/http/ngx_http_core_module.c"
       || status == 
# 1772 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    303
        
# 1773 "project/nginx/src/http/ngx_http_core_module.c"
       || status == 
# 1773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    307
        
# 1774 "project/nginx/src/http/ngx_http_core_module.c"
       || status == 
# 1774 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    308
# 1774 "project/nginx/src/http/ngx_http_core_module.c"
                                               )
    {
        
# 1776 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if (
# 1776 "project/nginx/src/http/ngx_http_core_module.c"
       r
# 1776 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->headers_out.location) { 
# 1776 "project/nginx/src/http/ngx_http_core_module.c"
       r
# 1776 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->headers_out.location->hash = 0; 
# 1776 "project/nginx/src/http/ngx_http_core_module.c"
       r
# 1776 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ->headers_out.location = ((void *)0); }
# 1776 "project/nginx/src/http/ngx_http_core_module.c"
                                 ;

        r->headers_out.location = ngx_list_push(&r->headers_out.headers);
        if (r->headers_out.location == 
# 1779 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      ((void *)0)
# 1779 "project/nginx/src/http/ngx_http_core_module.c"
                                          ) {
            return 
# 1780 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  500
# 1780 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
        }

        r->headers_out.location->hash = 1;
        
# 1784 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       (
# 1784 "project/nginx/src/http/ngx_http_core_module.c"
       &r->headers_out.location->key
# 1784 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->len = sizeof(
# 1784 "project/nginx/src/http/ngx_http_core_module.c"
       "Location"
# 1784 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) - 1; (
# 1784 "project/nginx/src/http/ngx_http_core_module.c"
       &r->headers_out.location->key
# 1784 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->data = (u_char *) 
# 1784 "project/nginx/src/http/ngx_http_core_module.c"
       "Location";
        r->headers_out.location->value = val;

        return status;
    }

    r->headers_out.content_length_n = val.len;

    if (ct) {
        r->headers_out.content_type_len = ct->len;
        r->headers_out.content_type = *ct;

    } else {
        if (ngx_http_set_content_type(r) != 
# 1797 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                           0
# 1797 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ) {
            return 
# 1798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  500
# 1798 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
        }
    }

    if (r != r->main && val.len == 0) {
        return ngx_http_send_header(r);
    }

    b = 
# 1806 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ngx_pcalloc(
# 1806 "project/nginx/src/http/ngx_http_core_module.c"
       r->pool
# 1806 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , sizeof(ngx_buf_t))
# 1806 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
    if (b == 
# 1807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
            ((void *)0)
# 1807 "project/nginx/src/http/ngx_http_core_module.c"
                ) {
        return 
# 1808 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              500
# 1808 "project/nginx/src/http/ngx_http_core_module.c"
                                            ;
    }

    b->pos = val.data;
    b->last = val.data + val.len;
    b->memory = val.len ? 1 : 0;
    b->last_buf = (r == r->main) ? 1 : 0;
    b->last_in_chain = 1;

    out.buf = b;
    out.next = 
# 1818 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 1818 "project/nginx/src/http/ngx_http_core_module.c"
                  ;

    rc = ngx_http_send_header(r);

    if (rc == 
# 1822 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -1 
# 1822 "project/nginx/src/http/ngx_http_core_module.c"
                       || rc > 
# 1822 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               0 
# 1822 "project/nginx/src/http/ngx_http_core_module.c"
                                      || r->header_only) {
        return rc;
    }

    return ngx_http_output_filter(r, &out);
}


ngx_int_t
ngx_http_send_header(ngx_http_request_t *r)
{
    if (r->post_action) {
        return 
# 1834 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1834 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    if (r->header_sent) {
        
# 1838 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 1838 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 1838 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 2) ngx_log_error_core(2, 
# 1838 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 1838 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 1838 "project/nginx/src/http/ngx_http_core_module.c"
       0, "header already sent"
# 1838 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )
                                            
# 1839 "project/nginx/src/http/ngx_http_core_module.c"
                                           ;
        return 
# 1840 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 1840 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (r->err_status) {
        r->headers_out.status = r->err_status;
        r->headers_out.status_line.len = 0;
    }

    return ngx_http_top_header_filter(r);
}


ngx_int_t
ngx_http_output_filter(ngx_http_request_t *r, ngx_chain_t *in)
{
    ngx_int_t rc;
    ngx_connection_t *c;

    c = r->connection;

   
                                                                     ;

    rc = ngx_http_top_body_filter(r, in);

    if (rc == 
# 1865 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             -1
# 1865 "project/nginx/src/http/ngx_http_core_module.c"
                      ) {

        c->error = 1;
    }

    return rc;
}


u_char *
ngx_http_map_uri_to_path(ngx_http_request_t *r, ngx_str_t *path,
    size_t *root_length, size_t reserved)
{
    u_char *last;
    size_t alias;
    ngx_http_core_loc_conf_t *clcf;

    clcf = 
# 1882 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 1882 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 1882 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 1882 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 1882 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 1882 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    alias = clcf->alias;

    if (alias && !r->valid_location) {
        
# 1887 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 1887 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 1887 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 2) ngx_log_error_core(2, 
# 1887 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 1887 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 1887 "project/nginx/src/http/ngx_http_core_module.c"
       0, "\"alias\" cannot be used in location \"%V\" " "where URI was rewritten", &clcf->name
# 1887 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )

                                                             
# 1889 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
        return 
# 1890 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 1890 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }

    if (clcf->root_lengths == 
# 1893 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             ((void *)0)
# 1893 "project/nginx/src/http/ngx_http_core_module.c"
                                 ) {

        *root_length = clcf->root.len;

        path->len = clcf->root.len + reserved + r->uri.len - alias + 1;

        path->data = ngx_pnalloc(r->pool, path->len);
        if (path->data == 
# 1900 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         ((void *)0)
# 1900 "project/nginx/src/http/ngx_http_core_module.c"
                             ) {
            return 
# 1901 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 1901 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
        }

        last = 
# 1904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (((u_char *) __builtin___memcpy_chk (
# 1904 "project/nginx/src/http/ngx_http_core_module.c"
              path->data
# 1904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              , 
# 1904 "project/nginx/src/http/ngx_http_core_module.c"
              clcf->root.data
# 1904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              , 
# 1904 "project/nginx/src/http/ngx_http_core_module.c"
              clcf->root.len
# 1904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              , __builtin_object_size (
# 1904 "project/nginx/src/http/ngx_http_core_module.c"
              path->data
# 1904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              , 0))) + (
# 1904 "project/nginx/src/http/ngx_http_core_module.c"
              clcf->root.len
# 1904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ))
# 1904 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;

    } else {

        if (alias == 
# 1908 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    9223372036854775807LL
# 1908 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
            reserved += r->add_uri_to_alias ? r->uri.len + 1 : 1;

        } else {
            reserved += r->uri.len - alias + 1;
        }

        if (ngx_http_script_run(r, path, clcf->root_lengths->elts, reserved,
                                clcf->root_values->elts)
            == 
# 1917 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 1917 "project/nginx/src/http/ngx_http_core_module.c"
                  )
        {
            return 
# 1919 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 1919 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
        }

        if (ngx_get_full_name(r->pool, (ngx_str_t *) &ngx_cycle->prefix, path)
            != 
# 1923 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 1923 "project/nginx/src/http/ngx_http_core_module.c"
                    )
        {
            return 
# 1925 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 1925 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
        }

        *root_length = path->len - reserved;
        last = path->data + *root_length;

        if (alias == 
# 1931 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    9223372036854775807LL
# 1931 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
            if (!r->add_uri_to_alias) {
                *last = '\0';
                return last;
            }

            alias = 0;
        }
    }

    last = 
# 1941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (((u_char *) __builtin___memcpy_chk (
# 1941 "project/nginx/src/http/ngx_http_core_module.c"
          last
# 1941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , 
# 1941 "project/nginx/src/http/ngx_http_core_module.c"
          r->uri.data + alias
# 1941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , 
# 1941 "project/nginx/src/http/ngx_http_core_module.c"
          r->uri.len - alias
# 1941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , __builtin_object_size (
# 1941 "project/nginx/src/http/ngx_http_core_module.c"
          last
# 1941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , 0))) + (
# 1941 "project/nginx/src/http/ngx_http_core_module.c"
          r->uri.len - alias
# 1941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ))
# 1941 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ;
    *last = '\0';

    return last;
}


ngx_int_t
ngx_http_auth_basic_user(ngx_http_request_t *r)
{
    ngx_str_t auth, encoded;
    ngx_uint_t len;

    if (r->headers_in.user.len == 0 && r->headers_in.user.data != 
# 1954 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                 ((void *)0)
# 1954 "project/nginx/src/http/ngx_http_core_module.c"
                                                                     ) {
        return 
# 1955 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 1955 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if (r->headers_in.authorization == 
# 1958 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      ((void *)0)
# 1958 "project/nginx/src/http/ngx_http_core_module.c"
                                          ) {
        r->headers_in.user.data = (u_char *) "";
        return 
# 1960 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 1960 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    encoded = r->headers_in.authorization->value;

    if (encoded.len < sizeof("Basic ") - 1
        || ngx_strncasecmp(encoded.data, (u_char *) "Basic ",
                           sizeof("Basic ") - 1)
           != 0)
    {
        r->headers_in.user.data = (u_char *) "";
        return 
# 1971 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 1971 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    encoded.len -= sizeof("Basic ") - 1;
    encoded.data += sizeof("Basic ") - 1;

    while (encoded.len && encoded.data[0] == ' ') {
        encoded.len--;
        encoded.data++;
    }

    if (encoded.len == 0) {
        r->headers_in.user.data = (u_char *) "";
        return 
# 1984 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 1984 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    auth.len = 
# 1987 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (((
# 1987 "project/nginx/src/http/ngx_http_core_module.c"
              encoded.len 
# 1987 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              + 3) / 4) * 3)
# 1987 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;
    auth.data = ngx_pnalloc(r->pool, auth.len + 1);
    if (auth.data == 
# 1989 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    ((void *)0)
# 1989 "project/nginx/src/http/ngx_http_core_module.c"
                        ) {
        return 
# 1990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 1990 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (ngx_decode_base64(&auth, &encoded) != 
# 1993 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                             0
# 1993 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ) {
        r->headers_in.user.data = (u_char *) "";
        return 
# 1995 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 1995 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    auth.data[auth.len] = '\0';

    for (len = 0; len < auth.len; len++) {
        if (auth.data[len] == ':') {
            break;
        }
    }

    if (len == 0 || len == auth.len) {
        r->headers_in.user.data = (u_char *) "";
        return 
# 2008 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2008 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    r->headers_in.user.len = len;
    r->headers_in.user.data = auth.data;
    r->headers_in.passwd.len = auth.len - len - 1;
    r->headers_in.passwd.data = &auth.data[len + 1];

    return 
# 2016 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2016 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}




ngx_int_t
ngx_http_gzip_ok(ngx_http_request_t *r)
{
    time_t date, expires;
    ngx_uint_t p;
    ngx_array_t *cc;
    ngx_table_elt_t *e, *d, *ae;
    ngx_http_core_loc_conf_t *clcf;

    r->gzip_tested = 1;

    if (r != r->main) {
        return 
# 2034 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2034 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    ae = r->headers_in.accept_encoding;
    if (ae == 
# 2038 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             ((void *)0)
# 2038 "project/nginx/src/http/ngx_http_core_module.c"
                 ) {
        return 
# 2039 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2039 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if (ae->value.len < sizeof("gzip") - 1) {
        return 
# 2043 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2043 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }
# 2055 "project/nginx/src/http/ngx_http_core_module.c"
    if (
# 2055 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       memcmp((const char *) 
# 2055 "project/nginx/src/http/ngx_http_core_module.c"
       ae->value.data
# 2055 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 2055 "project/nginx/src/http/ngx_http_core_module.c"
       "gzip,"
# 2055 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2055 "project/nginx/src/http/ngx_http_core_module.c"
       5
# 2055 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) 
# 2055 "project/nginx/src/http/ngx_http_core_module.c"
                                              != 0
        && ngx_http_gzip_accept_encoding(&ae->value) != 
# 2056 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                       0
# 2056 "project/nginx/src/http/ngx_http_core_module.c"
                                                             )
    {
        return 
# 2058 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2058 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    clcf = 
# 2061 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 2061 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 2061 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->loc_conf[
# 2061 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 2061 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 2061 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (r->headers_in.msie6 && clcf->gzip_disable_msie6) {
        return 
# 2064 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2064 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if (r->http_version < clcf->gzip_http_version) {
        return 
# 2068 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2068 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if (r->headers_in.via == 
# 2071 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            ((void *)0)
# 2071 "project/nginx/src/http/ngx_http_core_module.c"
                                ) {
        goto ok;
    }

    p = clcf->gzip_proxied;

    if (p & 
# 2077 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           0x0002
# 2077 "project/nginx/src/http/ngx_http_core_module.c"
                                    ) {
        return 
# 2078 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2078 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if (p & 
# 2081 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           0x0200
# 2081 "project/nginx/src/http/ngx_http_core_module.c"
                                    ) {
        goto ok;
    }

    if (r->headers_in.authorization && (p & 
# 2085 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                           0x0100
# 2085 "project/nginx/src/http/ngx_http_core_module.c"
                                                                     )) {
        goto ok;
    }

    e = r->headers_out.expires;

    if (e) {

        if (!(p & 
# 2093 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 0x0004
# 2093 "project/nginx/src/http/ngx_http_core_module.c"
                                              )) {
            return 
# 2094 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -5
# 2094 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
        }

        expires = ngx_parse_http_time(e->value.data, e->value.len);
        if (expires == 
# 2098 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      -1
# 2098 "project/nginx/src/http/ngx_http_core_module.c"
                               ) {
            return 
# 2099 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -5
# 2099 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
        }

        d = r->headers_out.date;

        if (d) {
            date = ngx_parse_http_time(d->value.data, d->value.len);
            if (date == 
# 2106 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       -1
# 2106 "project/nginx/src/http/ngx_http_core_module.c"
                                ) {
                return 
# 2107 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      -5
# 2107 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;
            }

        } else {
            date = 
# 2111 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ngx_cached_time->sec
# 2111 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
        }

        if (expires < date) {
            goto ok;
        }

        return 
# 2118 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2118 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    cc = &r->headers_out.cache_control;

    if (cc->elts) {

        if ((p & 
# 2125 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                0x0008
# 2125 "project/nginx/src/http/ngx_http_core_module.c"
                                              )
            && ngx_http_parse_multi_header_lines(cc, &ngx_http_gzip_no_cache,
                                                 
# 2127 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                ((void *)0)
# 2127 "project/nginx/src/http/ngx_http_core_module.c"
                                                    )
               >= 0)
        {
            goto ok;
        }

        if ((p & 
# 2133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                0x0010
# 2133 "project/nginx/src/http/ngx_http_core_module.c"
                                              )
            && ngx_http_parse_multi_header_lines(cc, &ngx_http_gzip_no_store,
                                                 
# 2135 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                ((void *)0)
# 2135 "project/nginx/src/http/ngx_http_core_module.c"
                                                    )
               >= 0)
        {
            goto ok;
        }

        if ((p & 
# 2141 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                0x0020
# 2141 "project/nginx/src/http/ngx_http_core_module.c"
                                             )
            && ngx_http_parse_multi_header_lines(cc, &ngx_http_gzip_private,
                                                 
# 2143 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                ((void *)0)
# 2143 "project/nginx/src/http/ngx_http_core_module.c"
                                                    )
               >= 0)
        {
            goto ok;
        }

        return 
# 2149 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2149 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if ((p & 
# 2152 "project/nginx/src/http/ngx_http_core_module.c" 3 4
            0x0040
# 2152 "project/nginx/src/http/ngx_http_core_module.c"
                                       ) && r->headers_out.last_modified) {
        return 
# 2153 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2153 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if ((p & 
# 2156 "project/nginx/src/http/ngx_http_core_module.c" 3 4
            0x0080
# 2156 "project/nginx/src/http/ngx_http_core_module.c"
                                         ) && r->headers_out.etag) {
        return 
# 2157 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2157 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

ok:



    if (clcf->gzip_disable && r->headers_in.user_agent) {

        if (ngx_regex_exec_array(clcf->gzip_disable,
                                 &r->headers_in.user_agent->value,
                                 r->connection->log)
            != 
# 2169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2169 "project/nginx/src/http/ngx_http_core_module.c"
                          )
        {
            return 
# 2171 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -5
# 2171 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
        }
    }



    r->gzip_ok = 1;

    return 
# 2179 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2179 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}
# 2190 "project/nginx/src/http/ngx_http_core_module.c"
static ngx_int_t
ngx_http_gzip_accept_encoding(ngx_str_t *ae)
{
    u_char *p, *start, *last;

    start = ae->data;
    last = start + ae->len;

    for ( ;; ) {
        p = ngx_strcasestrn(start, "gzip", 4 - 1);
        if (p == 
# 2200 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                ((void *)0)
# 2200 "project/nginx/src/http/ngx_http_core_module.c"
                    ) {
            return 
# 2201 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -5
# 2201 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
        }

        if (p == start || (*(p - 1) == ',' || *(p - 1) == ' ')) {
            break;
        }

        start = p + 4;
    }

    p += 4;

    while (p < last) {
        switch (*p++) {
        case ',':
            return 
# 2216 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  0
# 2216 "project/nginx/src/http/ngx_http_core_module.c"
                        ;
        case ';':
            goto quantity;
        case ' ':
            continue;
        default:
            return 
# 2222 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -5
# 2222 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
        }
    }

    return 
# 2226 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2226 "project/nginx/src/http/ngx_http_core_module.c"
                ;

quantity:

    while (p < last) {
        switch (*p++) {
        case 'q':
        case 'Q':
            goto equal;
        case ' ':
            continue;
        default:
            return 
# 2238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -5
# 2238 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
        }
    }

    return 
# 2242 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2242 "project/nginx/src/http/ngx_http_core_module.c"
                ;

equal:

    if (p + 2 > last || *p++ != '=') {
        return 
# 2247 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2247 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    if (ngx_http_gzip_quantity(p, last) == 0) {
        return 
# 2251 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -5
# 2251 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
    }

    return 
# 2254 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2254 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


static ngx_uint_t
ngx_http_gzip_quantity(u_char *p, u_char *last)
{
    u_char c;
    ngx_uint_t n, q;

    c = *p++;

    if (c != '0' && c != '1') {
        return 0;
    }

    q = (c - '0') * 100;

    if (p == last) {
        return q;
    }

    c = *p++;

    if (c == ',' || c == ' ') {
        return q;
    }

    if (c != '.') {
        return 0;
    }

    n = 0;

    while (p < last) {
        c = *p++;

        if (c == ',' || c == ' ') {
            break;
        }

        if (c >= '0' && c <= '9') {
            q += c - '0';
            n++;
            continue;
        }

        return 0;
    }

    if (q > 100 || n > 3) {
        return 0;
    }

    return q;
}




ngx_int_t
ngx_http_subrequest(ngx_http_request_t *r,
    ngx_str_t *uri, ngx_str_t *args, ngx_http_request_t **psr,
    ngx_http_post_subrequest_t *ps, ngx_uint_t flags)
{
    ngx_time_t *tp;
    ngx_connection_t *c;
    ngx_http_request_t *sr;
    ngx_http_core_srv_conf_t *cscf;
    ngx_http_postponed_request_t *pr, *p;

    if (r->subrequests == 0) {
        
# 2326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 2326 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 2326 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2326 "project/nginx/src/http/ngx_http_core_module.c"
       0, "subrequests cycle while processing \"%V\"", uri
# 2326 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )
                                                                       
# 2327 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      ;
        return 
# 2328 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2328 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }




    if (r->main->count >= 65535 - 1000) {
        
# 2335 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 2335 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2335 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 3) ngx_log_error_core(3, 
# 2335 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2335 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2335 "project/nginx/src/http/ngx_http_core_module.c"
       0, "request reference counter overflow " "while processing \"%V\"", uri
# 2335 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )

                                                     
# 2337 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;
        return 
# 2338 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2338 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (r->subrequest_in_memory) {
        
# 2342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 2342 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 2342 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2342 "project/nginx/src/http/ngx_http_core_module.c"
       0, "nested in-memory subrequest \"%V\"", uri
# 2342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )
                                                                
# 2343 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;
        return 
# 2344 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2344 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    sr = ngx_pcalloc(r->pool, sizeof(ngx_http_request_t));
    if (sr == 
# 2348 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             ((void *)0)
# 2348 "project/nginx/src/http/ngx_http_core_module.c"
                 ) {
        return 
# 2349 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2349 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    sr->signature = 
# 2352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   0x50545448
# 2352 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;

    c = r->connection;
    sr->connection = c;

    sr->ctx = ngx_pcalloc(r->pool, sizeof(void *) * ngx_http_max_module);
    if (sr->ctx == 
# 2358 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 2358 "project/nginx/src/http/ngx_http_core_module.c"
                      ) {
        return 
# 2359 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2359 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (ngx_list_init(&sr->headers_out.headers, r->pool, 20,
                      sizeof(ngx_table_elt_t))
        != 
# 2364 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2364 "project/nginx/src/http/ngx_http_core_module.c"
                )
    {
        return 
# 2366 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2366 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (ngx_list_init(&sr->headers_out.trailers, r->pool, 4,
                      sizeof(ngx_table_elt_t))
        != 
# 2371 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2371 "project/nginx/src/http/ngx_http_core_module.c"
                )
    {
        return 
# 2373 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2373 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    cscf = 
# 2376 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 2376 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 2376 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->srv_conf[
# 2376 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 2376 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 2376 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;
    sr->main_conf = cscf->ctx->main_conf;
    sr->srv_conf = cscf->ctx->srv_conf;
    sr->loc_conf = cscf->ctx->loc_conf;

    sr->pool = r->pool;

    sr->headers_in = r->headers_in;

    sr
# 2385 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.content_length_n = -1; if (
# 2385 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2385 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.content_length) { 
# 2385 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2385 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.content_length->hash = 0; 
# 2385 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2385 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.content_length = ((void *)0); }
# 2385 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
    sr
# 2386 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->allow_ranges = 0; if (
# 2386 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2386 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.accept_ranges) { 
# 2386 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2386 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.accept_ranges->hash = 0; 
# 2386 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2386 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.accept_ranges = ((void *)0); }
# 2386 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
    sr
# 2387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.last_modified_time = -1; if (
# 2387 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.last_modified) { 
# 2387 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.last_modified->hash = 0; 
# 2387 "project/nginx/src/http/ngx_http_core_module.c"
   sr
# 2387 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ->headers_out.last_modified = ((void *)0); }
# 2387 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;

    sr->request_body = r->request_body;





    sr->method = 
# 2395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                0x00000002
# 2395 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    sr->http_version = r->http_version;

    sr->request_line = r->request_line;
    sr->uri = *uri;

    if (args) {
        sr->args = *args;
    }

   
                                                               ;

    sr->subrequest_in_memory = (flags & 
# 2408 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                       2
# 2408 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ) != 0;
    sr->waited = (flags & 
# 2409 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         4
# 2409 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ) != 0;
    sr->background = (flags & 
# 2410 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             16
# 2410 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ) != 0;

    sr->unparsed_uri = r->unparsed_uri;
    sr->method_name = ngx_http_core_get_method;
    sr->http_protocol = r->http_protocol;
    sr->schema = r->schema;

    ngx_http_set_exten(sr);

    sr->main = r->main;
    sr->parent = r;
    sr->post_subrequest = ps;
    sr->read_event_handler = ngx_http_request_empty_handler;
    sr->write_event_handler = ngx_http_handler;

    sr->variables = r->variables;

    sr->log_handler = r->log_handler;

    if (sr->subrequest_in_memory) {
        sr->filter_need_in_memory = 1;
    }

    if (!sr->background) {
        if (c->data == r && r->postponed == 
# 2434 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                           ((void *)0)
# 2434 "project/nginx/src/http/ngx_http_core_module.c"
                                               ) {
            c->data = sr;
        }

        pr = ngx_palloc(r->pool, sizeof(ngx_http_postponed_request_t));
        if (pr == 
# 2439 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 ((void *)0)
# 2439 "project/nginx/src/http/ngx_http_core_module.c"
                     ) {
            return 
# 2440 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -1
# 2440 "project/nginx/src/http/ngx_http_core_module.c"
                           ;
        }

        pr->request = sr;
        pr->out = 
# 2444 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 ((void *)0)
# 2444 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
        pr->next = 
# 2445 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 2445 "project/nginx/src/http/ngx_http_core_module.c"
                      ;

        if (r->postponed) {
            for (p = r->postponed; p->next; p = p->next) { }
            p->next = pr;

        } else {
            r->postponed = pr;
        }
    }

    sr->internal = 1;

    sr->discard_body = r->discard_body;
    sr->expect_tested = 1;
    sr->main_filter_need_in_memory = r->main_filter_need_in_memory;

    sr->uri_changes = 
# 2462 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                     10 
# 2462 "project/nginx/src/http/ngx_http_core_module.c"
                                              + 1;
    sr->subrequests = r->subrequests - 1;

    tp = 
# 2465 "project/nginx/src/http/ngx_http_core_module.c" 3 4
        (ngx_time_t *) ngx_cached_time
# 2465 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    sr->start_sec = tp->sec;
    sr->start_msec = tp->msec;

    r->main->count++;

    *psr = sr;

    if (flags & 
# 2473 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               8
# 2473 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
        sr->method = r->method;
        sr->method_name = r->method_name;
        sr->loc_conf = r->loc_conf;
        sr->valid_location = r->valid_location;
        sr->valid_unparsed_uri = r->valid_unparsed_uri;
        sr->content_handler = r->content_handler;
        sr->phase_handler = r->phase_handler;
        sr->write_event_handler = ngx_http_core_run_phases;


        sr->ncaptures = r->ncaptures;
        sr->captures = r->captures;
        sr->captures_data = r->captures_data;
        sr->realloc_captures = 1;
        r->realloc_captures = 1;


        ngx_http_update_location_config(sr);
    }

    return ngx_http_post_request(sr, 
# 2494 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    ((void *)0)
# 2494 "project/nginx/src/http/ngx_http_core_module.c"
                                        );
}


ngx_int_t
ngx_http_internal_redirect(ngx_http_request_t *r,
    ngx_str_t *uri, ngx_str_t *args)
{
    ngx_http_core_srv_conf_t *cscf;

    r->uri_changes--;

    if (r->uri_changes == 0) {
        
# 2507 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 2507 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2507 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 2507 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2507 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2507 "project/nginx/src/http/ngx_http_core_module.c"
       0, "rewrite or internal redirection cycle " "while internally redirecting to \"%V\"", uri
# 2507 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )

                                                                    
# 2509 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;

        r->main->count++;
        ngx_http_finalize_request(r, 
# 2512 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    500
# 2512 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  );
        return 
# 2513 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -4
# 2513 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
    }

    r->uri = *uri;

    if (args) {
        r->args = *args;

    } else {
        
# 2522 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       (
# 2522 "project/nginx/src/http/ngx_http_core_module.c"
       &r->args
# 2522 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->len = 0; (
# 2522 "project/nginx/src/http/ngx_http_core_module.c"
       &r->args
# 2522 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->data = ((void *)0)
# 2522 "project/nginx/src/http/ngx_http_core_module.c"
                             ;
    }

   
                                                                 ;

    ngx_http_set_exten(r);


    
# 2531 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 2531 "project/nginx/src/http/ngx_http_core_module.c"
   r->ctx
# 2531 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 2531 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(void *) * ngx_http_max_module
# 2531 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 2531 "project/nginx/src/http/ngx_http_core_module.c"
   r->ctx
# 2531 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 2531 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;

    cscf = 
# 2533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 2533 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 2533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->srv_conf[
# 2533 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 2533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 2533 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;
    r->loc_conf = cscf->ctx->loc_conf;

    ngx_http_update_location_config(r);


    r->cache = 
# 2539 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 2539 "project/nginx/src/http/ngx_http_core_module.c"
                  ;


    r->internal = 1;
    r->valid_unparsed_uri = 0;
    r->add_uri_to_alias = 0;
    r->main->count++;

    ngx_http_handler(r);

    return 
# 2549 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          -4
# 2549 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
}


ngx_int_t
ngx_http_named_location(ngx_http_request_t *r, ngx_str_t *name)
{
    ngx_http_core_srv_conf_t *cscf;
    ngx_http_core_loc_conf_t **clcfp;
    ngx_http_core_main_conf_t *cmcf;

    r->main->count++;
    r->uri_changes--;

    if (r->uri_changes == 0) {
        
# 2564 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 2564 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2564 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 2564 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2564 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2564 "project/nginx/src/http/ngx_http_core_module.c"
       0, "rewrite or internal redirection cycle " "while redirect to named location \"%V\"", name
# 2564 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )

                                                                      
# 2566 "project/nginx/src/http/ngx_http_core_module.c"
                                                                     ;

        ngx_http_finalize_request(r, 
# 2568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    500
# 2568 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  );
        return 
# 2569 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -4
# 2569 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
    }

    if (r->uri.len == 0) {
        
# 2573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       if ((
# 2573 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->log_level >= 4) ngx_log_error_core(4, 
# 2573 "project/nginx/src/http/ngx_http_core_module.c"
       r->connection->log
# 2573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 2573 "project/nginx/src/http/ngx_http_core_module.c"
       0, "empty URI in redirect to named location \"%V\"", name
# 2573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )
                                                                             
# 2574 "project/nginx/src/http/ngx_http_core_module.c"
                                                                            ;

        ngx_http_finalize_request(r, 
# 2576 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    500
# 2576 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  );
        return 
# 2577 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -4
# 2577 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
    }

    cscf = 
# 2580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (
# 2580 "project/nginx/src/http/ngx_http_core_module.c"
          r
# 2580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )->srv_conf[
# 2580 "project/nginx/src/http/ngx_http_core_module.c"
          ngx_http_core_module
# 2580 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          .ctx_index]
# 2580 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    if (cscf->named_locations) {

        for (clcfp = cscf->named_locations; *clcfp; clcfp++) {

           
                                                                    ;

            if (name->len != (*clcfp)->name.len
                || 
# 2590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  strncmp((const char *) 
# 2590 "project/nginx/src/http/ngx_http_core_module.c"
                  name->data
# 2590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  , (const char *) 
# 2590 "project/nginx/src/http/ngx_http_core_module.c"
                  (*clcfp)->name.data
# 2590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  , 
# 2590 "project/nginx/src/http/ngx_http_core_module.c"
                  name->len
# 2590 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ) 
# 2590 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          != 0)
            {
                continue;
            }

           

                                                   ;

            r->internal = 1;
            r->content_handler = 
# 2600 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                ((void *)0)
# 2600 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            r->uri_changed = 0;
            r->loc_conf = (*clcfp)->loc_conf;


            
# 2605 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           (void) __builtin___memset_chk (
# 2605 "project/nginx/src/http/ngx_http_core_module.c"
           r->ctx
# 2605 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 0, 
# 2605 "project/nginx/src/http/ngx_http_core_module.c"
           sizeof(void *) * ngx_http_max_module
# 2605 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , __builtin_object_size (
# 2605 "project/nginx/src/http/ngx_http_core_module.c"
           r->ctx
# 2605 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 0))
# 2605 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ;

            ngx_http_update_location_config(r);

            cmcf = 
# 2609 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (
# 2609 "project/nginx/src/http/ngx_http_core_module.c"
                  r
# 2609 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  )->main_conf[
# 2609 "project/nginx/src/http/ngx_http_core_module.c"
                  ngx_http_core_module
# 2609 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  .ctx_index]
# 2609 "project/nginx/src/http/ngx_http_core_module.c"
                                                                        ;

            r->phase_handler = cmcf->phase_engine.location_rewrite_index;

            r->write_event_handler = ngx_http_core_run_phases;
            ngx_http_core_run_phases(r);

            return 
# 2616 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  -4
# 2616 "project/nginx/src/http/ngx_http_core_module.c"
                          ;
        }
    }

    
# 2620 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if ((
# 2620 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->log
# 2620 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->log_level >= 4) ngx_log_error_core(4, 
# 2620 "project/nginx/src/http/ngx_http_core_module.c"
   r->connection->log
# 2620 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 
# 2620 "project/nginx/src/http/ngx_http_core_module.c"
   0, "could not find named location \"%V\"", name
# 2620 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )
                                                               
# 2621 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;

    ngx_http_finalize_request(r, 
# 2623 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                500
# 2623 "project/nginx/src/http/ngx_http_core_module.c"
                                                              );

    return 
# 2625 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          -4
# 2625 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
}


ngx_http_cleanup_t *
ngx_http_cleanup_add(ngx_http_request_t *r, size_t size)
{
    ngx_http_cleanup_t *cln;

    r = r->main;

    cln = ngx_palloc(r->pool, sizeof(ngx_http_cleanup_t));
    if (cln == 
# 2637 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 2637 "project/nginx/src/http/ngx_http_core_module.c"
                  ) {
        return 
# 2638 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 2638 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }

    if (size) {
        cln->data = ngx_palloc(r->pool, size);
        if (cln->data == 
# 2643 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 2643 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
            return 
# 2644 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 2644 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
        }

    } else {
        cln->data = 
# 2648 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   ((void *)0)
# 2648 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    cln->handler = 
# 2651 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 2651 "project/nginx/src/http/ngx_http_core_module.c"
                      ;
    cln->next = r->cleanup;

    r->cleanup = cln;

   
                                               ;

    return cln;
}


ngx_int_t
ngx_http_set_disable_symlinks(ngx_http_request_t *r,
    ngx_http_core_loc_conf_t *clcf, ngx_str_t *path, ngx_open_file_info_t *of)
{

    u_char *p;
    ngx_str_t from;

    of->disable_symlinks = clcf->disable_symlinks;

    if (clcf->disable_symlinks_from == 
# 2673 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      ((void *)0)
# 2673 "project/nginx/src/http/ngx_http_core_module.c"
                                          ) {
        return 
# 2674 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 2674 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    if (ngx_http_complex_value(r, clcf->disable_symlinks_from, &from)
        != 
# 2678 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2678 "project/nginx/src/http/ngx_http_core_module.c"
                )
    {
        return 
# 2680 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 2680 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    if (from.len == 0
        || from.len > path->len
        || 
# 2685 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          memcmp((const char *) 
# 2685 "project/nginx/src/http/ngx_http_core_module.c"
          path->data
# 2685 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , (const char *) 
# 2685 "project/nginx/src/http/ngx_http_core_module.c"
          from.data
# 2685 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , 
# 2685 "project/nginx/src/http/ngx_http_core_module.c"
          from.len
# 2685 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ) 
# 2685 "project/nginx/src/http/ngx_http_core_module.c"
                                                      != 0)
    {
        return 
# 2687 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 2687 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    if (from.len == path->len) {
        of->disable_symlinks = 
# 2691 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              0
# 2691 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;
        return 
# 2692 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 2692 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    p = path->data + from.len;

    if (*p == '/') {
        of->disable_symlinks_from = from.len;
        return 
# 2699 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 2699 "project/nginx/src/http/ngx_http_core_module.c"
                    ;
    }

    p--;

    if (*p == '/') {
        of->disable_symlinks_from = from.len - 1;
    }


    return 
# 2709 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2709 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


ngx_int_t
ngx_http_get_forwarded_addr(ngx_http_request_t *r, ngx_addr_t *addr,
    ngx_array_t *headers, ngx_str_t *value, ngx_array_t *proxies,
    int recursive)
{
    ngx_int_t rc;
    ngx_uint_t i, found;
    ngx_table_elt_t **h;

    if (headers == 
# 2722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 2722 "project/nginx/src/http/ngx_http_core_module.c"
                      ) {
        return ngx_http_get_forwarded_addr_internal(r, addr, value->data,
                                                    value->len, proxies,
                                                    recursive);
    }

    i = headers->nelts;
    h = headers->elts;

    rc = 
# 2731 "project/nginx/src/http/ngx_http_core_module.c" 3 4
        -5
# 2731 "project/nginx/src/http/ngx_http_core_module.c"
                    ;

    found = 0;

    while (i-- > 0) {
        rc = ngx_http_get_forwarded_addr_internal(r, addr, h[i]->value.data,
                                                  h[i]->value.len, proxies,
                                                  recursive);

        if (!recursive) {
            break;
        }

        if (rc == 
# 2744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 -5 
# 2744 "project/nginx/src/http/ngx_http_core_module.c"
                              && found) {
            rc = 
# 2745 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                -4
# 2745 "project/nginx/src/http/ngx_http_core_module.c"
                        ;
            break;
        }

        if (rc != 
# 2749 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 0
# 2749 "project/nginx/src/http/ngx_http_core_module.c"
                       ) {
            break;
        }

        found = 1;
    }

    return rc;
}


static ngx_int_t
ngx_http_get_forwarded_addr_internal(ngx_http_request_t *r, ngx_addr_t *addr,
    u_char *xff, size_t xfflen, ngx_array_t *proxies, int recursive)
{
    u_char *p;
    ngx_addr_t paddr;
    ngx_uint_t found;

    found = 0;

    do {

        if (ngx_cidr_match(addr->sockaddr, proxies) != 
# 2772 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                      0
# 2772 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ) {
            return found ? 
# 2773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          -4 
# 2773 "project/nginx/src/http/ngx_http_core_module.c"
                                   : 
# 2773 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     -5
# 2773 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
        }

        for (p = xff + xfflen - 1; p > xff; p--, xfflen--) {
            if (*p != ' ' && *p != ',') {
                break;
            }
        }

        for ( ; p > xff; p--) {
            if (*p == ' ' || *p == ',') {
                p++;
                break;
            }
        }

        if (ngx_parse_addr_port(r->pool, &paddr, p, xfflen - (p - xff))
            != 
# 2790 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 2790 "project/nginx/src/http/ngx_http_core_module.c"
                    )
        {
            return found ? 
# 2792 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          -4 
# 2792 "project/nginx/src/http/ngx_http_core_module.c"
                                   : 
# 2792 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     -5
# 2792 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
        }

        *addr = paddr;
        found = 1;
        xfflen = p - 1 - xff;

    } while (recursive && p > xff);

    return 
# 2801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 2801 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


static char *
ngx_http_core_server(ngx_conf_t *cf, ngx_command_t *cmd, void *dummy)
{
    char *rv;
    void *mconf;
    size_t len;
    u_char *p;
    ngx_uint_t i;
    ngx_conf_t pcf;
    ngx_http_module_t *module;
    struct sockaddr_in *sin;
    ngx_http_conf_ctx_t *ctx, *http_ctx;
    ngx_http_listen_opt_t lsopt;
    ngx_http_core_srv_conf_t *cscf, **cscfp;
    ngx_http_core_main_conf_t *cmcf;

    ctx = ngx_pcalloc(cf->pool, sizeof(ngx_http_conf_ctx_t));
    if (ctx == 
# 2822 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 2822 "project/nginx/src/http/ngx_http_core_module.c"
                  ) {
        return 
# 2823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 2823 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    http_ctx = cf->ctx;
    ctx->main_conf = http_ctx->main_conf;



    ctx->srv_conf = ngx_pcalloc(cf->pool, sizeof(void *) * ngx_http_max_module);
    if (ctx->srv_conf == 
# 2832 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 2832 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
        return 
# 2833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 2833 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }



    ctx->loc_conf = ngx_pcalloc(cf->pool, sizeof(void *) * ngx_http_max_module);
    if (ctx->loc_conf == 
# 2839 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 2839 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
        return 
# 2840 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 2840 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    for (i = 0; cf->cycle->modules[i]; i++) {
        if (cf->cycle->modules[i]->type != 
# 2844 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x50545448
# 2844 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ) {
            continue;
        }

        module = cf->cycle->modules[i]->ctx;

        if (module->create_srv_conf) {
            mconf = module->create_srv_conf(cf);
            if (mconf == 
# 2852 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 2852 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
                return 
# 2853 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 2853 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            ctx->srv_conf[cf->cycle->modules[i]->ctx_index] = mconf;
        }

        if (module->create_loc_conf) {
            mconf = module->create_loc_conf(cf);
            if (mconf == 
# 2861 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 2861 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
                return 
# 2862 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 2862 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            ctx->loc_conf[cf->cycle->modules[i]->ctx_index] = mconf;
        }
    }




    cscf = ctx->srv_conf[ngx_http_core_module.ctx_index];
    cscf->ctx = ctx;


    cmcf = ctx->main_conf[ngx_http_core_module.ctx_index];

    cscfp = ngx_array_push(&cmcf->servers);
    if (cscfp == 
# 2879 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                ((void *)0)
# 2879 "project/nginx/src/http/ngx_http_core_module.c"
                    ) {
        return 
# 2880 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 2880 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    *cscfp = cscf;




    pcf = *cf;
    cf->ctx = ctx;
    cf->cmd_type = 
# 2890 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  0x04000000
# 2890 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;

    rv = ngx_conf_parse(cf, 
# 2892 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           ((void *)0)
# 2892 "project/nginx/src/http/ngx_http_core_module.c"
                               );

    *cf = pcf;

    if (rv == 
# 2896 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             ((void *)0) 
# 2896 "project/nginx/src/http/ngx_http_core_module.c"
                         && !cscf->listen) {
        
# 2897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       (void) __builtin___memset_chk (
# 2897 "project/nginx/src/http/ngx_http_core_module.c"
       &lsopt
# 2897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 0, 
# 2897 "project/nginx/src/http/ngx_http_core_module.c"
       sizeof(ngx_http_listen_opt_t)
# 2897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , __builtin_object_size (
# 2897 "project/nginx/src/http/ngx_http_core_module.c"
       &lsopt
# 2897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 0))
# 2897 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ;

        p = ngx_pcalloc(cf->pool, sizeof(struct sockaddr_in));
        if (p == 
# 2900 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                ((void *)0)
# 2900 "project/nginx/src/http/ngx_http_core_module.c"
                    ) {
            return 
# 2901 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 2901 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        lsopt.sockaddr = (struct sockaddr *) p;

        sin = (struct sockaddr_in *) p;

        sin->sin_family = 
# 2908 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         2
# 2908 "project/nginx/src/http/ngx_http_core_module.c"
                                ;



        sin->sin_port = 
# 2912 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       ((__uint16_t)(__builtin_constant_p(
# 2912 "project/nginx/src/http/ngx_http_core_module.c"
                       (getuid() == 0) ? 80 : 8000
# 2912 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       ) ? ((__uint16_t)((((__uint16_t)(
# 2912 "project/nginx/src/http/ngx_http_core_module.c"
                       (getuid() == 0) ? 80 : 8000
# 2912 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       ) & 0xff00U) >> 8) | (((__uint16_t)(
# 2912 "project/nginx/src/http/ngx_http_core_module.c"
                       (getuid() == 0) ? 80 : 8000
# 2912 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       ) & 0x00ffU) << 8))) : _OSSwapInt16(
# 2912 "project/nginx/src/http/ngx_http_core_module.c"
                       (getuid() == 0) ? 80 : 8000
# 2912 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       )))
# 2912 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ;

        sin->sin_addr.s_addr = 
# 2914 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              (u_int32_t)0x00000000
# 2914 "project/nginx/src/http/ngx_http_core_module.c"
                                        ;

        lsopt.socklen = sizeof(struct sockaddr_in);

        lsopt.backlog = 
# 2918 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       -1
# 2918 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
        lsopt.rcvbuf = -1;
        lsopt.sndbuf = -1;




        lsopt.fastopen = -1;

        lsopt.wildcard = 1;

        len = 
# 2929 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             (sizeof("255.255.255.255") - 1) 
# 2929 "project/nginx/src/http/ngx_http_core_module.c"
                                 + sizeof(":65535") - 1;

        p = ngx_pnalloc(cf->pool, len);
        if (p == 
# 2932 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                ((void *)0)
# 2932 "project/nginx/src/http/ngx_http_core_module.c"
                    ) {
            return 
# 2933 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 2933 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        lsopt.addr_text.data = p;
        lsopt.addr_text.len = ngx_sock_ntop(lsopt.sockaddr, lsopt.socklen, p,
                                            len, 1);

        if (ngx_http_add_listen(cf, cscf, &lsopt) != 
# 2940 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                    0
# 2940 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ) {
            return 
# 2941 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 2941 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    return rv;
}


static char *
ngx_http_core_location(ngx_conf_t *cf, ngx_command_t *cmd, void *dummy)
{
    char *rv;
    u_char *mod;
    size_t len;
    ngx_str_t *value, *name;
    ngx_uint_t i;
    ngx_conf_t save;
    ngx_http_module_t *module;
    ngx_http_conf_ctx_t *ctx, *pctx;
    ngx_http_core_loc_conf_t *clcf, *pclcf;

    ctx = ngx_pcalloc(cf->pool, sizeof(ngx_http_conf_ctx_t));
    if (ctx == 
# 2963 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 2963 "project/nginx/src/http/ngx_http_core_module.c"
                  ) {
        return 
# 2964 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 2964 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    pctx = cf->ctx;
    ctx->main_conf = pctx->main_conf;
    ctx->srv_conf = pctx->srv_conf;

    ctx->loc_conf = ngx_pcalloc(cf->pool, sizeof(void *) * ngx_http_max_module);
    if (ctx->loc_conf == 
# 2972 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 2972 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
        return 
# 2973 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 2973 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    for (i = 0; cf->cycle->modules[i]; i++) {
        if (cf->cycle->modules[i]->type != 
# 2977 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x50545448
# 2977 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ) {
            continue;
        }

        module = cf->cycle->modules[i]->ctx;

        if (module->create_loc_conf) {
            ctx->loc_conf[cf->cycle->modules[i]->ctx_index] =
                                                   module->create_loc_conf(cf);
            if (ctx->loc_conf[cf->cycle->modules[i]->ctx_index] == 
# 2986 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                  ((void *)0)
# 2986 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      ) {
                return 
# 2987 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 2987 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }
        }
    }

    clcf = ctx->loc_conf[ngx_http_core_module.ctx_index];
    clcf->loc_conf = ctx->loc_conf;

    value = cf->args->elts;

    if (cf->args->nelts == 3) {

        len = value[1].len;
        mod = value[1].data;
        name = &value[2];

        if (len == 1 && mod[0] == '=') {

            clcf->name = *name;
            clcf->exact_match = 1;

        } else if (len == 2 && mod[0] == '^' && mod[1] == '~') {

            clcf->name = *name;
            clcf->noregex = 1;

        } else if (len == 1 && mod[0] == '~') {

            if (ngx_http_core_regex_location(cf, clcf, name, 0) != 
# 3015 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                  0
# 3015 "project/nginx/src/http/ngx_http_core_module.c"
                                                                        ) {
                return 
# 3016 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3016 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

        } else if (len == 2 && mod[0] == '~' && mod[1] == '*') {

            if (ngx_http_core_regex_location(cf, clcf, name, 1) != 
# 3021 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                  0
# 3021 "project/nginx/src/http/ngx_http_core_module.c"
                                                                        ) {
                return 
# 3022 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3022 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

        } else {
            ngx_conf_log_error(
# 3026 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3026 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "invalid location modifier \"%V\"", &value[1]);
            return 
# 3028 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3028 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

    } else {

        name = &value[1];

        if (name->data[0] == '=') {

            clcf->name.len = name->len - 1;
            clcf->name.data = name->data + 1;
            clcf->exact_match = 1;

        } else if (name->data[0] == '^' && name->data[1] == '~') {

            clcf->name.len = name->len - 2;
            clcf->name.data = name->data + 2;
            clcf->noregex = 1;

        } else if (name->data[0] == '~') {

            name->len--;
            name->data++;

            if (name->data[0] == '*') {

                name->len--;
                name->data++;

                if (ngx_http_core_regex_location(cf, clcf, name, 1) != 
# 3057 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                      0
# 3057 "project/nginx/src/http/ngx_http_core_module.c"
                                                                            ) {
                    return 
# 3058 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          (void *) -1
# 3058 "project/nginx/src/http/ngx_http_core_module.c"
                                        ;
                }

            } else {
                if (ngx_http_core_regex_location(cf, clcf, name, 0) != 
# 3062 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                      0
# 3062 "project/nginx/src/http/ngx_http_core_module.c"
                                                                            ) {
                    return 
# 3063 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          (void *) -1
# 3063 "project/nginx/src/http/ngx_http_core_module.c"
                                        ;
                }
            }

        } else {

            clcf->name = *name;

            if (name->data[0] == '@') {
                clcf->named = 1;
            }
        }
    }

    pclcf = pctx->loc_conf[ngx_http_core_module.ctx_index];

    if (cf->cmd_type == 
# 3079 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       0x08000000
# 3079 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {







        if (pclcf->exact_match) {
            ngx_conf_log_error(
# 3088 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3088 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "location \"%V\" cannot be inside "
                               "the exact location \"%V\"",
                               &clcf->name, &pclcf->name);
            return 
# 3092 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3092 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        if (pclcf->named) {
            ngx_conf_log_error(
# 3096 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3096 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "location \"%V\" cannot be inside "
                               "the named location \"%V\"",
                               &clcf->name, &pclcf->name);
            return 
# 3100 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3100 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        if (clcf->named) {
            ngx_conf_log_error(
# 3104 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3104 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "named location \"%V\" can be "
                               "on the server level only",
                               &clcf->name);
            return 
# 3108 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3108 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        len = pclcf->name.len;


        if (clcf->regex == 
# 3114 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          ((void *)0)
            
# 3115 "project/nginx/src/http/ngx_http_core_module.c"
           && ngx_filename_cmp(clcf->name.data, pclcf->name.data, len) != 0)



        {
            ngx_conf_log_error(
# 3120 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3120 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "location \"%V\" is outside location \"%V\"",
                               &clcf->name, &pclcf->name);
            return 
# 3123 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3123 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    if (ngx_http_add_location(cf, &pclcf->locations, clcf) != 
# 3127 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                             0
# 3127 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ) {
        return 
# 3128 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 3128 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    save = *cf;
    cf->ctx = ctx;
    cf->cmd_type = 
# 3133 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  0x08000000
# 3133 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;

    rv = ngx_conf_parse(cf, 
# 3135 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           ((void *)0)
# 3135 "project/nginx/src/http/ngx_http_core_module.c"
                               );

    *cf = save;

    return rv;
}


static ngx_int_t
ngx_http_core_regex_location(ngx_conf_t *cf, ngx_http_core_loc_conf_t *clcf,
    ngx_str_t *regex, ngx_uint_t caseless)
{

    ngx_regex_compile_t rc;
    u_char errstr[
# 3149 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               1024
# 3149 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ];

    
# 3151 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 3151 "project/nginx/src/http/ngx_http_core_module.c"
   &rc
# 3151 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 3151 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(ngx_regex_compile_t)
# 3151 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 3151 "project/nginx/src/http/ngx_http_core_module.c"
   &rc
# 3151 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 3151 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;

    rc.pattern = *regex;
    rc.err.len = 
# 3154 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                1024
# 3154 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
    rc.err.data = errstr;


    rc.options = 
# 3158 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                0x00000001
# 3158 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;




    clcf->regex = ngx_http_regex_compile(cf, &rc);
    if (clcf->regex == 
# 3164 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ((void *)0)
# 3164 "project/nginx/src/http/ngx_http_core_module.c"
                          ) {
        return 
# 3165 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              -1
# 3165 "project/nginx/src/http/ngx_http_core_module.c"
                       ;
    }

    clcf->name = *regex;

    return 
# 3170 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 3170 "project/nginx/src/http/ngx_http_core_module.c"
                ;
# 3180 "project/nginx/src/http/ngx_http_core_module.c"
}


static char *
ngx_http_core_types(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    char *rv;
    ngx_conf_t save;

    if (clcf->types == 
# 3191 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ((void *)0)
# 3191 "project/nginx/src/http/ngx_http_core_module.c"
                          ) {
        clcf->types = ngx_array_create(cf->pool, 64, sizeof(ngx_hash_key_t));
        if (clcf->types == 
# 3193 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          ((void *)0)
# 3193 "project/nginx/src/http/ngx_http_core_module.c"
                              ) {
            return 
# 3194 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3194 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    save = *cf;
    cf->handler = ngx_http_core_type;
    cf->handler_conf = conf;

    rv = ngx_conf_parse(cf, 
# 3202 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           ((void *)0)
# 3202 "project/nginx/src/http/ngx_http_core_module.c"
                               );

    *cf = save;

    return rv;
}


static char *
ngx_http_core_type(ngx_conf_t *cf, ngx_command_t *dummy, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value, *content_type, *old;
    ngx_uint_t i, n, hash;
    ngx_hash_key_t *type;

    value = cf->args->elts;

    if (
# 3221 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strcmp((const char *) 
# 3221 "project/nginx/src/http/ngx_http_core_module.c"
       value[0].data
# 3221 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 3221 "project/nginx/src/http/ngx_http_core_module.c"
       "include"
# 3221 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) 
# 3221 "project/nginx/src/http/ngx_http_core_module.c"
                                            == 0) {
        if (cf->args->nelts != 2) {
            ngx_conf_log_error(
# 3223 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3223 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "invalid number of arguments"
                               " in \"include\" directive");
            return 
# 3226 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3226 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        return ngx_conf_include(cf, dummy, conf);
    }

    content_type = ngx_palloc(cf->pool, sizeof(ngx_str_t));
    if (content_type == 
# 3233 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       ((void *)0)
# 3233 "project/nginx/src/http/ngx_http_core_module.c"
                           ) {
        return 
# 3234 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 3234 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    *content_type = value[0];

    for (i = 1; i < cf->args->nelts; i++) {

        hash = ngx_hash_strlow(value[i].data, value[i].data, value[i].len);

        type = clcf->types->elts;
        for (n = 0; n < clcf->types->nelts; n++) {
            if (
# 3245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               strcmp((const char *) 
# 3245 "project/nginx/src/http/ngx_http_core_module.c"
               value[i].data
# 3245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , (const char *) 
# 3245 "project/nginx/src/http/ngx_http_core_module.c"
               type[n].key.data
# 3245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ) 
# 3245 "project/nginx/src/http/ngx_http_core_module.c"
                                                           == 0) {
                old = type[n].value;
                type[n].value = content_type;

                ngx_conf_log_error(
# 3249 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  5
# 3249 "project/nginx/src/http/ngx_http_core_module.c"
                                              , cf, 0,
                                   "duplicate extension \"%V\", "
                                   "content type: \"%V\", "
                                   "previous content type: \"%V\"",
                                   &value[i], content_type, old);
                goto next;
            }
        }


        type = ngx_array_push(clcf->types);
        if (type == 
# 3260 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   ((void *)0)
# 3260 "project/nginx/src/http/ngx_http_core_module.c"
                       ) {
            return 
# 3261 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3261 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        type->key = value[i];
        type->key_hash = hash;
        type->value = content_type;

    next:
        continue;
    }

    return 
# 3272 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 3272 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static ngx_int_t
ngx_http_core_preconfiguration(ngx_conf_t *cf)
{
    return ngx_http_variables_add_core_vars(cf);
}


static ngx_int_t
ngx_http_core_postconfiguration(ngx_conf_t *cf)
{
    ngx_http_top_request_body_filter = ngx_http_request_body_save_filter;

    return 
# 3288 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 3288 "project/nginx/src/http/ngx_http_core_module.c"
                ;
}


static void *
ngx_http_core_create_main_conf(ngx_conf_t *cf)
{
    ngx_http_core_main_conf_t *cmcf;

    cmcf = ngx_pcalloc(cf->pool, sizeof(ngx_http_core_main_conf_t));
    if (cmcf == 
# 3298 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ((void *)0)
# 3298 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        return 
# 3299 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 3299 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }

    if (ngx_array_init(&cmcf->servers, cf->pool, 4,
                       sizeof(ngx_http_core_srv_conf_t *))
        != 
# 3304 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 3304 "project/nginx/src/http/ngx_http_core_module.c"
                )
    {
        return 
# 3306 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 3306 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }

    cmcf->server_names_hash_max_size = 
# 3309 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      (ngx_uint_t) -1
# 3309 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ;
    cmcf->server_names_hash_bucket_size = 
# 3310 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         (ngx_uint_t) -1
# 3310 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;

    cmcf->variables_hash_max_size = 
# 3312 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                   (ngx_uint_t) -1
# 3312 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;
    cmcf->variables_hash_bucket_size = 
# 3313 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      (ngx_uint_t) -1
# 3313 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ;

    return cmcf;
}


static char *
ngx_http_core_init_main_conf(ngx_conf_t *cf, void *conf)
{
    ngx_http_core_main_conf_t *cmcf = conf;

    
# 3324 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3324 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->server_names_hash_max_size 
# 3324 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3324 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->server_names_hash_max_size 
# 3324 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = 
# 3324 "project/nginx/src/http/ngx_http_core_module.c"
   512
# 3324 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3324 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ;
    
# 3325 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3325 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->server_names_hash_bucket_size 
# 3325 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3325 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->server_names_hash_bucket_size 
# 3325 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = 
# 3325 "project/nginx/src/http/ngx_http_core_module.c"
   ngx_cacheline_size
# 3325 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                
# 3326 "project/nginx/src/http/ngx_http_core_module.c"
                                               ;

    cmcf->server_names_hash_bucket_size =
            
# 3329 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           (((
# 3329 "project/nginx/src/http/ngx_http_core_module.c"
           cmcf->server_names_hash_bucket_size
# 3329 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) + (
# 3329 "project/nginx/src/http/ngx_http_core_module.c"
           ngx_cacheline_size 
# 3329 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           - 1)) & ~(
# 3329 "project/nginx/src/http/ngx_http_core_module.c"
           ngx_cacheline_size 
# 3329 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           - 1))
# 3329 "project/nginx/src/http/ngx_http_core_module.c"
                                                                             ;


    
# 3332 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3332 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->variables_hash_max_size 
# 3332 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3332 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->variables_hash_max_size 
# 3332 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = 
# 3332 "project/nginx/src/http/ngx_http_core_module.c"
   1024
# 3332 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3332 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;
    
# 3333 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3333 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->variables_hash_bucket_size 
# 3333 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3333 "project/nginx/src/http/ngx_http_core_module.c"
   cmcf->variables_hash_bucket_size 
# 3333 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = 
# 3333 "project/nginx/src/http/ngx_http_core_module.c"
   64
# 3333 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3333 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ;

    cmcf->variables_hash_bucket_size =
               
# 3336 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (((
# 3336 "project/nginx/src/http/ngx_http_core_module.c"
              cmcf->variables_hash_bucket_size
# 3336 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ) + (
# 3336 "project/nginx/src/http/ngx_http_core_module.c"
              ngx_cacheline_size 
# 3336 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              - 1)) & ~(
# 3336 "project/nginx/src/http/ngx_http_core_module.c"
              ngx_cacheline_size 
# 3336 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              - 1))
# 3336 "project/nginx/src/http/ngx_http_core_module.c"
                                                                             ;

    if (cmcf->ncaptures) {
        cmcf->ncaptures = (cmcf->ncaptures + 1) * 3;
    }

    return 
# 3342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 3342 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static void *
ngx_http_core_create_srv_conf(ngx_conf_t *cf)
{
    ngx_http_core_srv_conf_t *cscf;

    cscf = ngx_pcalloc(cf->pool, sizeof(ngx_http_core_srv_conf_t));
    if (cscf == 
# 3352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ((void *)0)
# 3352 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        return 
# 3353 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 3353 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }







    if (ngx_array_init(&cscf->server_names, cf->temp_pool, 4,
                       sizeof(ngx_http_server_name_t))
        != 
# 3364 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 3364 "project/nginx/src/http/ngx_http_core_module.c"
                )
    {
        return 
# 3366 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 3366 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }

    cscf->connection_pool_size = 
# 3369 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                (size_t) -1
# 3369 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ;
    cscf->request_pool_size = 
# 3370 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             (size_t) -1
# 3370 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    cscf->client_header_timeout = 
# 3371 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 (ngx_msec_t) -1
# 3371 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;
    cscf->client_header_buffer_size = 
# 3372 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     (size_t) -1
# 3372 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ;
    cscf->ignore_invalid_headers = 
# 3373 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  -1
# 3373 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    cscf->merge_slashes = 
# 3374 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         -1
# 3374 "project/nginx/src/http/ngx_http_core_module.c"
                                       ;
    cscf->underscores_in_headers = 
# 3375 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  -1
# 3375 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;

    cscf->file_name = cf->conf_file->file.name.data;
    cscf->line = cf->conf_file->line;

    return cscf;
}


static char *
ngx_http_core_merge_srv_conf(ngx_conf_t *cf, void *parent, void *child)
{
    ngx_http_core_srv_conf_t *prev = parent;
    ngx_http_core_srv_conf_t *conf = child;

    ngx_str_t name;
    ngx_http_server_name_t *sn;



    
# 3395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3395 "project/nginx/src/http/ngx_http_core_module.c"
   conf->connection_pool_size 
# 3395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3395 "project/nginx/src/http/ngx_http_core_module.c"
   conf->connection_pool_size 
# 3395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3395 "project/nginx/src/http/ngx_http_core_module.c"
   prev->connection_pool_size 
# 3395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3395 "project/nginx/src/http/ngx_http_core_module.c"
   64 * sizeof(void *) 
# 3395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3395 "project/nginx/src/http/ngx_http_core_module.c"
   prev->connection_pool_size
# 3395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                              
# 3396 "project/nginx/src/http/ngx_http_core_module.c"
                                                                             ;
    
# 3397 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3397 "project/nginx/src/http/ngx_http_core_module.c"
   conf->request_pool_size 
# 3397 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3397 "project/nginx/src/http/ngx_http_core_module.c"
   conf->request_pool_size 
# 3397 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3397 "project/nginx/src/http/ngx_http_core_module.c"
   prev->request_pool_size 
# 3397 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3397 "project/nginx/src/http/ngx_http_core_module.c"
   4096 
# 3397 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3397 "project/nginx/src/http/ngx_http_core_module.c"
   prev->request_pool_size
# 3397 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                            
# 3398 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ;
    
# 3399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3399 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_header_timeout 
# 3399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3399 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_header_timeout 
# 3399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3399 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_header_timeout 
# 3399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3399 "project/nginx/src/http/ngx_http_core_module.c"
   60000 
# 3399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3399 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_header_timeout
# 3399 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                 
# 3400 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;
    
# 3401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3401 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_header_buffer_size 
# 3401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3401 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_header_buffer_size 
# 3401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3401 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_header_buffer_size 
# 3401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3401 "project/nginx/src/http/ngx_http_core_module.c"
   1024 
# 3401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3401 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_header_buffer_size
# 3401 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                    
# 3402 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;
    
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   conf->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .num == 0) { if (
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   prev->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .num) { 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   conf->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .num = 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   prev->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .num; 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   conf->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .size = 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   prev->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .size; } else { 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   conf->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .num = 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   4
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   conf->large_client_header_buffers
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .size = 
# 3403 "project/nginx/src/http/ngx_http_core_module.c"
   8192
# 3403 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; } }

                                      
# 3405 "project/nginx/src/http/ngx_http_core_module.c"
                                     ;

    if (conf->large_client_header_buffers.size < conf->connection_pool_size) {
        ngx_conf_log_error(
# 3408 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 3408 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "the \"large_client_header_buffers\" size must be "
                           "equal to or greater than \"connection_pool_size\"");
        return 
# 3411 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 3411 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    
# 3414 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3414 "project/nginx/src/http/ngx_http_core_module.c"
   conf->ignore_invalid_headers 
# 3414 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3414 "project/nginx/src/http/ngx_http_core_module.c"
   conf->ignore_invalid_headers 
# 3414 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3414 "project/nginx/src/http/ngx_http_core_module.c"
   prev->ignore_invalid_headers 
# 3414 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3414 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3414 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3414 "project/nginx/src/http/ngx_http_core_module.c"
   prev->ignore_invalid_headers
# 3414 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                              
# 3415 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;

    
# 3417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3417 "project/nginx/src/http/ngx_http_core_module.c"
   conf->merge_slashes 
# 3417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3417 "project/nginx/src/http/ngx_http_core_module.c"
   conf->merge_slashes 
# 3417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3417 "project/nginx/src/http/ngx_http_core_module.c"
   prev->merge_slashes 
# 3417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3417 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3417 "project/nginx/src/http/ngx_http_core_module.c"
   prev->merge_slashes
# 3417 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3417 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ;

    
# 3419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3419 "project/nginx/src/http/ngx_http_core_module.c"
   conf->underscores_in_headers 
# 3419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3419 "project/nginx/src/http/ngx_http_core_module.c"
   conf->underscores_in_headers 
# 3419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3419 "project/nginx/src/http/ngx_http_core_module.c"
   prev->underscores_in_headers 
# 3419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3419 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3419 "project/nginx/src/http/ngx_http_core_module.c"
   prev->underscores_in_headers
# 3419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                              
# 3420 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;

    if (conf->server_names.nelts == 0) {

        sn = ngx_array_push(&conf->server_names);

        sn->regex = 
# 3426 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   ((void *)0)
# 3426 "project/nginx/src/http/ngx_http_core_module.c"
                       ;

        sn->server = conf;
        
# 3429 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       (
# 3429 "project/nginx/src/http/ngx_http_core_module.c"
       &sn->name
# 3429 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->len = sizeof(
# 3429 "project/nginx/src/http/ngx_http_core_module.c"
       ""
# 3429 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) - 1; (
# 3429 "project/nginx/src/http/ngx_http_core_module.c"
       &sn->name
# 3429 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )->data = (u_char *) 
# 3429 "project/nginx/src/http/ngx_http_core_module.c"
       "";
    }

    sn = conf->server_names.elts;
    name = sn[0].name;


    if (sn->regex) {
        name.len++;
        name.data--;
    } else


    if (name.data[0] == '.') {
        name.len--;
        name.data++;
    }

    conf->server_name.len = name.len;
    conf->server_name.data = ngx_pstrdup(cf->pool, &name);
    if (conf->server_name.data == 
# 3449 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 ((void *)0)
# 3449 "project/nginx/src/http/ngx_http_core_module.c"
                                     ) {
        return 
# 3450 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 3450 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    return 
# 3453 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 3453 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static void *
ngx_http_core_create_loc_conf(ngx_conf_t *cf)
{
    ngx_http_core_loc_conf_t *clcf;

    clcf = ngx_pcalloc(cf->pool, sizeof(ngx_http_core_loc_conf_t));
    if (clcf == 
# 3463 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ((void *)0)
# 3463 "project/nginx/src/http/ngx_http_core_module.c"
                   ) {
        return 
# 3464 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 3464 "project/nginx/src/http/ngx_http_core_module.c"
                  ;
    }
# 3487 "project/nginx/src/http/ngx_http_core_module.c"
    clcf->client_max_body_size = 
# 3487 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                -1
# 3487 "project/nginx/src/http/ngx_http_core_module.c"
                                              ;
    clcf->client_body_buffer_size = 
# 3488 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                   (size_t) -1
# 3488 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;
    clcf->client_body_timeout = 
# 3489 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               (ngx_msec_t) -1
# 3489 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ;
    clcf->satisfy = 
# 3490 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   (ngx_uint_t) -1
# 3490 "project/nginx/src/http/ngx_http_core_module.c"
                                      ;
    clcf->auth_delay = 
# 3491 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (ngx_msec_t) -1
# 3491 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
    clcf->if_modified_since = 
# 3492 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             (ngx_uint_t) -1
# 3492 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    clcf->max_ranges = 
# 3493 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (ngx_uint_t) -1
# 3493 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
    clcf->client_body_in_file_only = 
# 3494 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    (ngx_uint_t) -1
# 3494 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ;
    clcf->client_body_in_single_buffer = 
# 3495 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                        -1
# 3495 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;
    clcf->internal = 
# 3496 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    -1
# 3496 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;
    clcf->sendfile = 
# 3497 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    -1
# 3497 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;
    clcf->sendfile_max_chunk = 
# 3498 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              (size_t) -1
# 3498 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
    clcf->subrequest_output_buffer_size = 
# 3499 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         (size_t) -1
# 3499 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
    clcf->aio = 
# 3500 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               -1
# 3500 "project/nginx/src/http/ngx_http_core_module.c"
                             ;
    clcf->aio_write = 
# 3501 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                     -1
# 3501 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;




    clcf->read_ahead = 
# 3506 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (size_t) -1
# 3506 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
    clcf->directio = 
# 3507 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    -1
# 3507 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;
    clcf->directio_alignment = 
# 3508 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              -1
# 3508 "project/nginx/src/http/ngx_http_core_module.c"
                                            ;
    clcf->tcp_nopush = 
# 3509 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      -1
# 3509 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
    clcf->tcp_nodelay = 
# 3510 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       -1
# 3510 "project/nginx/src/http/ngx_http_core_module.c"
                                     ;
    clcf->send_timeout = 
# 3511 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        (ngx_msec_t) -1
# 3511 "project/nginx/src/http/ngx_http_core_module.c"
                                           ;
    clcf->send_lowat = 
# 3512 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (size_t) -1
# 3512 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
    clcf->postpone_output = 
# 3513 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           (size_t) -1
# 3513 "project/nginx/src/http/ngx_http_core_module.c"
                                              ;
    clcf->limit_rate = 
# 3514 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3514 "project/nginx/src/http/ngx_http_core_module.c"
                                        ;
    clcf->limit_rate_after = 
# 3515 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            (void *) -1
# 3515 "project/nginx/src/http/ngx_http_core_module.c"
                                              ;
    clcf->keepalive_time = 
# 3516 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          (ngx_msec_t) -1
# 3516 "project/nginx/src/http/ngx_http_core_module.c"
                                             ;
    clcf->keepalive_timeout = 
# 3517 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             (ngx_msec_t) -1
# 3517 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    clcf->keepalive_header = 
# 3518 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            -1
# 3518 "project/nginx/src/http/ngx_http_core_module.c"
                                          ;
    clcf->keepalive_requests = 
# 3519 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              (ngx_uint_t) -1
# 3519 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
    clcf->lingering_close = 
# 3520 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           (ngx_uint_t) -1
# 3520 "project/nginx/src/http/ngx_http_core_module.c"
                                              ;
    clcf->lingering_time = 
# 3521 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          (ngx_msec_t) -1
# 3521 "project/nginx/src/http/ngx_http_core_module.c"
                                             ;
    clcf->lingering_timeout = 
# 3522 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             (ngx_msec_t) -1
# 3522 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    clcf->resolver_timeout = 
# 3523 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            (ngx_msec_t) -1
# 3523 "project/nginx/src/http/ngx_http_core_module.c"
                                               ;
    clcf->reset_timedout_connection = 
# 3524 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     -1
# 3524 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ;
    clcf->absolute_redirect = 
# 3525 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             -1
# 3525 "project/nginx/src/http/ngx_http_core_module.c"
                                           ;
    clcf->server_name_in_redirect = 
# 3526 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                   -1
# 3526 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
    clcf->port_in_redirect = 
# 3527 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            -1
# 3527 "project/nginx/src/http/ngx_http_core_module.c"
                                          ;
    clcf->msie_padding = 
# 3528 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        -1
# 3528 "project/nginx/src/http/ngx_http_core_module.c"
                                      ;
    clcf->msie_refresh = 
# 3529 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        -1
# 3529 "project/nginx/src/http/ngx_http_core_module.c"
                                      ;
    clcf->log_not_found = 
# 3530 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         -1
# 3530 "project/nginx/src/http/ngx_http_core_module.c"
                                       ;
    clcf->log_subrequest = 
# 3531 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          -1
# 3531 "project/nginx/src/http/ngx_http_core_module.c"
                                        ;
    clcf->recursive_error_pages = 
# 3532 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 -1
# 3532 "project/nginx/src/http/ngx_http_core_module.c"
                                               ;
    clcf->chunked_transfer_encoding = 
# 3533 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     -1
# 3533 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ;
    clcf->etag = 
# 3534 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                -1
# 3534 "project/nginx/src/http/ngx_http_core_module.c"
                              ;
    clcf->server_tokens = 
# 3535 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         (ngx_uint_t) -1
# 3535 "project/nginx/src/http/ngx_http_core_module.c"
                                            ;
    clcf->types_hash_max_size = 
# 3536 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               (ngx_uint_t) -1
# 3536 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ;
    clcf->types_hash_bucket_size = 
# 3537 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  (ngx_uint_t) -1
# 3537 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ;

    clcf->open_file_cache = 
# 3539 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           (void *) -1
# 3539 "project/nginx/src/http/ngx_http_core_module.c"
                                             ;
    clcf->open_file_cache_valid = 
# 3540 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 -1
# 3540 "project/nginx/src/http/ngx_http_core_module.c"
                                               ;
    clcf->open_file_cache_min_uses = 
# 3541 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    (ngx_uint_t) -1
# 3541 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ;
    clcf->open_file_cache_errors = 
# 3542 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  -1
# 3542 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    clcf->open_file_cache_events = 
# 3543 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  -1
# 3543 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;


    clcf->gzip_vary = 
# 3546 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                     -1
# 3546 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
    clcf->gzip_http_version = 
# 3547 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             (ngx_uint_t) -1
# 3547 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;

    clcf->gzip_disable = 
# 3549 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        (void *) -1
# 3549 "project/nginx/src/http/ngx_http_core_module.c"
                                          ;

    clcf->gzip_disable_msie6 = 3;






    clcf->disable_symlinks = 
# 3558 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            (ngx_uint_t) -1
# 3558 "project/nginx/src/http/ngx_http_core_module.c"
                                               ;
    clcf->disable_symlinks_from = 
# 3559 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 (void *) -1
# 3559 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ;


    return clcf;
}


static ngx_str_t ngx_http_core_text_html_type = 
# 3566 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                { sizeof(
# 3566 "project/nginx/src/http/ngx_http_core_module.c"
                                                "text/html"
# 3566 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                ) - 1, (u_char *) 
# 3566 "project/nginx/src/http/ngx_http_core_module.c"
                                                "text/html" 
# 3566 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                }
# 3566 "project/nginx/src/http/ngx_http_core_module.c"
                                                                       ;
static ngx_str_t ngx_http_core_image_gif_type = 
# 3567 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                { sizeof(
# 3567 "project/nginx/src/http/ngx_http_core_module.c"
                                                "image/gif"
# 3567 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                ) - 1, (u_char *) 
# 3567 "project/nginx/src/http/ngx_http_core_module.c"
                                                "image/gif" 
# 3567 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                }
# 3567 "project/nginx/src/http/ngx_http_core_module.c"
                                                                       ;
static ngx_str_t ngx_http_core_image_jpeg_type = 
# 3568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                 { sizeof(
# 3568 "project/nginx/src/http/ngx_http_core_module.c"
                                                 "image/jpeg"
# 3568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                 ) - 1, (u_char *) 
# 3568 "project/nginx/src/http/ngx_http_core_module.c"
                                                 "image/jpeg" 
# 3568 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                 }
# 3568 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ;

static ngx_hash_key_t ngx_http_core_default_types[] = {
    { 
# 3571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 3571 "project/nginx/src/http/ngx_http_core_module.c"
     "html"
# 3571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 3571 "project/nginx/src/http/ngx_http_core_module.c"
     "html" 
# 3571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 3571 "project/nginx/src/http/ngx_http_core_module.c"
                       , 0, &ngx_http_core_text_html_type },
    { 
# 3572 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 3572 "project/nginx/src/http/ngx_http_core_module.c"
     "gif"
# 3572 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 3572 "project/nginx/src/http/ngx_http_core_module.c"
     "gif" 
# 3572 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 3572 "project/nginx/src/http/ngx_http_core_module.c"
                      , 0, &ngx_http_core_image_gif_type },
    { 
# 3573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { sizeof(
# 3573 "project/nginx/src/http/ngx_http_core_module.c"
     "jpg"
# 3573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ) - 1, (u_char *) 
# 3573 "project/nginx/src/http/ngx_http_core_module.c"
     "jpg" 
# 3573 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     }
# 3573 "project/nginx/src/http/ngx_http_core_module.c"
                      , 0, &ngx_http_core_image_jpeg_type },
    { 
# 3574 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     { 0, ((void *)0) }
# 3574 "project/nginx/src/http/ngx_http_core_module.c"
                    , 0, 
# 3574 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         ((void *)0) 
# 3574 "project/nginx/src/http/ngx_http_core_module.c"
                              }
};


static char *
ngx_http_core_merge_loc_conf(ngx_conf_t *cf, void *parent, void *child)
{
    ngx_http_core_loc_conf_t *prev = parent;
    ngx_http_core_loc_conf_t *conf = child;

    ngx_uint_t i;
    ngx_hash_key_t *type;
    ngx_hash_init_t types_hash;

    if (conf->root.data == 
# 3588 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          ((void *)0)
# 3588 "project/nginx/src/http/ngx_http_core_module.c"
                              ) {

        conf->alias = prev->alias;
        conf->root = prev->root;
        conf->root_lengths = prev->root_lengths;
        conf->root_values = prev->root_values;

        if (prev->root.data == 
# 3595 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              ((void *)0)
# 3595 "project/nginx/src/http/ngx_http_core_module.c"
                                  ) {
            
# 3596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           (
# 3596 "project/nginx/src/http/ngx_http_core_module.c"
           &conf->root
# 3596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )->len = sizeof(
# 3596 "project/nginx/src/http/ngx_http_core_module.c"
           "html"
# 3596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) - 1; (
# 3596 "project/nginx/src/http/ngx_http_core_module.c"
           &conf->root
# 3596 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )->data = (u_char *) 
# 3596 "project/nginx/src/http/ngx_http_core_module.c"
           "html";

            if (ngx_conf_full_name(cf->cycle, &conf->root, 0) != 
# 3598 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                                0
# 3598 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      ) {
                return 
# 3599 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3599 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }
        }
    }

    if (conf->post_action.data == 
# 3604 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 ((void *)0)
# 3604 "project/nginx/src/http/ngx_http_core_module.c"
                                     ) {
        conf->post_action = prev->post_action;
    }

    
# 3608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3608 "project/nginx/src/http/ngx_http_core_module.c"
   conf->types_hash_max_size 
# 3608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3608 "project/nginx/src/http/ngx_http_core_module.c"
   conf->types_hash_max_size 
# 3608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3608 "project/nginx/src/http/ngx_http_core_module.c"
   prev->types_hash_max_size 
# 3608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 
# 3608 "project/nginx/src/http/ngx_http_core_module.c"
   1024 
# 3608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3608 "project/nginx/src/http/ngx_http_core_module.c"
   prev->types_hash_max_size
# 3608 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                              
# 3609 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;

    
# 3611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3611 "project/nginx/src/http/ngx_http_core_module.c"
   conf->types_hash_bucket_size 
# 3611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3611 "project/nginx/src/http/ngx_http_core_module.c"
   conf->types_hash_bucket_size 
# 3611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3611 "project/nginx/src/http/ngx_http_core_module.c"
   prev->types_hash_bucket_size 
# 3611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 
# 3611 "project/nginx/src/http/ngx_http_core_module.c"
   64 
# 3611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3611 "project/nginx/src/http/ngx_http_core_module.c"
   prev->types_hash_bucket_size
# 3611 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                               
# 3612 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;

    conf->types_hash_bucket_size = 
# 3614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  (((
# 3614 "project/nginx/src/http/ngx_http_core_module.c"
                                  conf->types_hash_bucket_size
# 3614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  ) + (
# 3614 "project/nginx/src/http/ngx_http_core_module.c"
                                  ngx_cacheline_size 
# 3614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  - 1)) & ~(
# 3614 "project/nginx/src/http/ngx_http_core_module.c"
                                  ngx_cacheline_size 
# 3614 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  - 1))
                                                                
# 3615 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;






    if (prev->types && prev->types_hash.buckets == 
# 3622 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                  ((void *)0)
# 3622 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ) {

        types_hash.hash = &prev->types_hash;
        types_hash.key = ngx_hash_key_lc;
        types_hash.max_size = conf->types_hash_max_size;
        types_hash.bucket_size = conf->types_hash_bucket_size;
        types_hash.name = "types_hash";
        types_hash.pool = cf->pool;
        types_hash.temp_pool = 
# 3630 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              ((void *)0)
# 3630 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;

        if (ngx_hash_init(&types_hash, prev->types->elts, prev->types->nelts)
            != 
# 3633 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 3633 "project/nginx/src/http/ngx_http_core_module.c"
                    )
        {
            return 
# 3635 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3635 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    if (conf->types == 
# 3639 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ((void *)0)
# 3639 "project/nginx/src/http/ngx_http_core_module.c"
                          ) {
        conf->types = prev->types;
        conf->types_hash = prev->types_hash;
    }

    if (conf->types == 
# 3644 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ((void *)0)
# 3644 "project/nginx/src/http/ngx_http_core_module.c"
                          ) {
        conf->types = ngx_array_create(cf->pool, 3, sizeof(ngx_hash_key_t));
        if (conf->types == 
# 3646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          ((void *)0)
# 3646 "project/nginx/src/http/ngx_http_core_module.c"
                              ) {
            return 
# 3647 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3647 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        for (i = 0; ngx_http_core_default_types[i].key.len; i++) {
            type = ngx_array_push(conf->types);
            if (type == 
# 3652 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                       ((void *)0)
# 3652 "project/nginx/src/http/ngx_http_core_module.c"
                           ) {
                return 
# 3653 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3653 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            type->key = ngx_http_core_default_types[i].key;
            type->key_hash =
                       ngx_hash_key_lc(ngx_http_core_default_types[i].key.data,
                                       ngx_http_core_default_types[i].key.len);
            type->value = ngx_http_core_default_types[i].value;
        }
    }

    if (conf->types_hash.buckets == 
# 3664 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                   ((void *)0)
# 3664 "project/nginx/src/http/ngx_http_core_module.c"
                                       ) {

        types_hash.hash = &conf->types_hash;
        types_hash.key = ngx_hash_key_lc;
        types_hash.max_size = conf->types_hash_max_size;
        types_hash.bucket_size = conf->types_hash_bucket_size;
        types_hash.name = "types_hash";
        types_hash.pool = cf->pool;
        types_hash.temp_pool = 
# 3672 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              ((void *)0)
# 3672 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;

        if (ngx_hash_init(&types_hash, conf->types->elts, conf->types->nelts)
            != 
# 3675 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              0
# 3675 "project/nginx/src/http/ngx_http_core_module.c"
                    )
        {
            return 
# 3677 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 3677 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    if (conf->error_log == 
# 3681 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          ((void *)0)
# 3681 "project/nginx/src/http/ngx_http_core_module.c"
                              ) {
        if (prev->error_log) {
            conf->error_log = prev->error_log;
        } else {
            conf->error_log = &cf->cycle->new_log;
        }
    }

    if (conf->error_pages == 
# 3689 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            ((void *)0) 
# 3689 "project/nginx/src/http/ngx_http_core_module.c"
                                 && prev->error_pages) {
        conf->error_pages = prev->error_pages;
    }

    
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   conf->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .data == ((void *)0)) { if (
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   prev->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .data) { 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   conf->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .len = 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   prev->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .len; 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   conf->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .data = 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   prev->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .data; } else { 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   conf->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .len = sizeof(
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   "text/plain"
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ) - 1; 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   conf->default_type
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   .data = (u_char *) 
# 3693 "project/nginx/src/http/ngx_http_core_module.c"
   "text/plain"
# 3693 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; } }
                                                               
# 3694 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;

    
# 3696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3696 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_max_body_size 
# 3696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3696 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_max_body_size 
# 3696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3696 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_max_body_size 
# 3696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3696 "project/nginx/src/http/ngx_http_core_module.c"
   1 * 1024 * 1024 
# 3696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3696 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_max_body_size
# 3696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                          
# 3697 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ;
    
# 3698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3698 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_buffer_size 
# 3698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3698 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_buffer_size 
# 3698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3698 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_buffer_size 
# 3698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3698 "project/nginx/src/http/ngx_http_core_module.c"
   (size_t) 2 * ngx_pagesize 
# 3698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3698 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_buffer_size
# 3698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }

                                                        
# 3700 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ;
    
# 3701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3701 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_timeout 
# 3701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3701 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_timeout 
# 3701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3701 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_timeout 
# 3701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3701 "project/nginx/src/http/ngx_http_core_module.c"
   60000 
# 3701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3701 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_timeout
# 3701 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                               
# 3702 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;

    
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_disable 
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == 0) { 
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_disable 
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_disable 
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == 0) ? 
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   (
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   1 
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   |
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   0x0004
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   ) 
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3704 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_disable
# 3704 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }


                                                                  
# 3707 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ;
    
# 3708 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3708 "project/nginx/src/http/ngx_http_core_module.c"
   conf->satisfy 
# 3708 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3708 "project/nginx/src/http/ngx_http_core_module.c"
   conf->satisfy 
# 3708 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3708 "project/nginx/src/http/ngx_http_core_module.c"
   prev->satisfy 
# 3708 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 0 : 
# 3708 "project/nginx/src/http/ngx_http_core_module.c"
   prev->satisfy
# 3708 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                   
# 3709 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ;
    
# 3710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3710 "project/nginx/src/http/ngx_http_core_module.c"
   conf->auth_delay 
# 3710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3710 "project/nginx/src/http/ngx_http_core_module.c"
   conf->auth_delay 
# 3710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3710 "project/nginx/src/http/ngx_http_core_module.c"
   prev->auth_delay 
# 3710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3710 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3710 "project/nginx/src/http/ngx_http_core_module.c"
   prev->auth_delay
# 3710 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3710 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;
    
# 3711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3711 "project/nginx/src/http/ngx_http_core_module.c"
   conf->if_modified_since 
# 3711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3711 "project/nginx/src/http/ngx_http_core_module.c"
   conf->if_modified_since 
# 3711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3711 "project/nginx/src/http/ngx_http_core_module.c"
   prev->if_modified_since 
# 3711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 1 : 
# 3711 "project/nginx/src/http/ngx_http_core_module.c"
   prev->if_modified_since
# 3711 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                 
# 3712 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;
    
# 3713 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3713 "project/nginx/src/http/ngx_http_core_module.c"
   conf->max_ranges 
# 3713 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3713 "project/nginx/src/http/ngx_http_core_module.c"
   conf->max_ranges 
# 3713 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3713 "project/nginx/src/http/ngx_http_core_module.c"
   prev->max_ranges 
# 3713 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? (uint32_t) 0x7fffffff : 
# 3713 "project/nginx/src/http/ngx_http_core_module.c"
   prev->max_ranges
# 3713 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                  
# 3714 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
    
# 3715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3715 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_in_file_only 
# 3715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3715 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_in_file_only 
# 3715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3715 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_in_file_only 
# 3715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 
# 3715 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3715 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_in_file_only
# 3715 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }

                                                             
# 3717 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
    
# 3718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3718 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_in_single_buffer 
# 3718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3718 "project/nginx/src/http/ngx_http_core_module.c"
   conf->client_body_in_single_buffer 
# 3718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3718 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_in_single_buffer 
# 3718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3718 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3718 "project/nginx/src/http/ngx_http_core_module.c"
   prev->client_body_in_single_buffer
# 3718 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                    
# 3719 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;
    
# 3720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3720 "project/nginx/src/http/ngx_http_core_module.c"
   conf->internal 
# 3720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3720 "project/nginx/src/http/ngx_http_core_module.c"
   conf->internal 
# 3720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3720 "project/nginx/src/http/ngx_http_core_module.c"
   prev->internal 
# 3720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3720 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3720 "project/nginx/src/http/ngx_http_core_module.c"
   prev->internal
# 3720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3720 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ;
    
# 3721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3721 "project/nginx/src/http/ngx_http_core_module.c"
   conf->sendfile 
# 3721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3721 "project/nginx/src/http/ngx_http_core_module.c"
   conf->sendfile 
# 3721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3721 "project/nginx/src/http/ngx_http_core_module.c"
   prev->sendfile 
# 3721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3721 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3721 "project/nginx/src/http/ngx_http_core_module.c"
   prev->sendfile
# 3721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3721 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ;
    
# 3722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3722 "project/nginx/src/http/ngx_http_core_module.c"
   conf->sendfile_max_chunk 
# 3722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3722 "project/nginx/src/http/ngx_http_core_module.c"
   conf->sendfile_max_chunk 
# 3722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3722 "project/nginx/src/http/ngx_http_core_module.c"
   prev->sendfile_max_chunk 
# 3722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3722 "project/nginx/src/http/ngx_http_core_module.c"
   2 * 1024 * 1024 
# 3722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3722 "project/nginx/src/http/ngx_http_core_module.c"
   prev->sendfile_max_chunk
# 3722 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                        
# 3723 "project/nginx/src/http/ngx_http_core_module.c"
                                                                       ;
    
# 3724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3724 "project/nginx/src/http/ngx_http_core_module.c"
   conf->subrequest_output_buffer_size 
# 3724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3724 "project/nginx/src/http/ngx_http_core_module.c"
   conf->subrequest_output_buffer_size 
# 3724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3724 "project/nginx/src/http/ngx_http_core_module.c"
   prev->subrequest_output_buffer_size 
# 3724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3724 "project/nginx/src/http/ngx_http_core_module.c"
   (size_t) ngx_pagesize 
# 3724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3724 "project/nginx/src/http/ngx_http_core_module.c"
   prev->subrequest_output_buffer_size
# 3724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }

                                                    
# 3726 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ;
    
# 3727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3727 "project/nginx/src/http/ngx_http_core_module.c"
   conf->aio 
# 3727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3727 "project/nginx/src/http/ngx_http_core_module.c"
   conf->aio 
# 3727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3727 "project/nginx/src/http/ngx_http_core_module.c"
   prev->aio 
# 3727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 0 : 
# 3727 "project/nginx/src/http/ngx_http_core_module.c"
   prev->aio
# 3727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3727 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;
    
# 3728 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3728 "project/nginx/src/http/ngx_http_core_module.c"
   conf->aio_write 
# 3728 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3728 "project/nginx/src/http/ngx_http_core_module.c"
   conf->aio_write 
# 3728 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3728 "project/nginx/src/http/ngx_http_core_module.c"
   prev->aio_write 
# 3728 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3728 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3728 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3728 "project/nginx/src/http/ngx_http_core_module.c"
   prev->aio_write
# 3728 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3728 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;





    
# 3734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3734 "project/nginx/src/http/ngx_http_core_module.c"
   conf->read_ahead 
# 3734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3734 "project/nginx/src/http/ngx_http_core_module.c"
   conf->read_ahead 
# 3734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3734 "project/nginx/src/http/ngx_http_core_module.c"
   prev->read_ahead 
# 3734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3734 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3734 "project/nginx/src/http/ngx_http_core_module.c"
   prev->read_ahead
# 3734 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3734 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;
    
# 3735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3735 "project/nginx/src/http/ngx_http_core_module.c"
   conf->directio 
# 3735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3735 "project/nginx/src/http/ngx_http_core_module.c"
   conf->directio 
# 3735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3735 "project/nginx/src/http/ngx_http_core_module.c"
   prev->directio 
# 3735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 9223372036854775807LL : 
# 3735 "project/nginx/src/http/ngx_http_core_module.c"
   prev->directio
# 3735 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                         
# 3736 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ;
    
# 3737 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3737 "project/nginx/src/http/ngx_http_core_module.c"
   conf->directio_alignment 
# 3737 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3737 "project/nginx/src/http/ngx_http_core_module.c"
   conf->directio_alignment 
# 3737 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3737 "project/nginx/src/http/ngx_http_core_module.c"
   prev->directio_alignment 
# 3737 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3737 "project/nginx/src/http/ngx_http_core_module.c"
   512 
# 3737 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3737 "project/nginx/src/http/ngx_http_core_module.c"
   prev->directio_alignment
# 3737 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                  
# 3738 "project/nginx/src/http/ngx_http_core_module.c"
                                 ;
    
# 3739 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3739 "project/nginx/src/http/ngx_http_core_module.c"
   conf->tcp_nopush 
# 3739 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3739 "project/nginx/src/http/ngx_http_core_module.c"
   conf->tcp_nopush 
# 3739 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3739 "project/nginx/src/http/ngx_http_core_module.c"
   prev->tcp_nopush 
# 3739 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3739 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3739 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3739 "project/nginx/src/http/ngx_http_core_module.c"
   prev->tcp_nopush
# 3739 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3739 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;
    
# 3740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3740 "project/nginx/src/http/ngx_http_core_module.c"
   conf->tcp_nodelay 
# 3740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3740 "project/nginx/src/http/ngx_http_core_module.c"
   conf->tcp_nodelay 
# 3740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3740 "project/nginx/src/http/ngx_http_core_module.c"
   prev->tcp_nodelay 
# 3740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3740 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3740 "project/nginx/src/http/ngx_http_core_module.c"
   prev->tcp_nodelay
# 3740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3740 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;

    
# 3742 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3742 "project/nginx/src/http/ngx_http_core_module.c"
   conf->send_timeout 
# 3742 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3742 "project/nginx/src/http/ngx_http_core_module.c"
   conf->send_timeout 
# 3742 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3742 "project/nginx/src/http/ngx_http_core_module.c"
   prev->send_timeout 
# 3742 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3742 "project/nginx/src/http/ngx_http_core_module.c"
   60000 
# 3742 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3742 "project/nginx/src/http/ngx_http_core_module.c"
   prev->send_timeout
# 3742 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3742 "project/nginx/src/http/ngx_http_core_module.c"
                                                                           ;
    
# 3743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3743 "project/nginx/src/http/ngx_http_core_module.c"
   conf->send_lowat 
# 3743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3743 "project/nginx/src/http/ngx_http_core_module.c"
   conf->send_lowat 
# 3743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3743 "project/nginx/src/http/ngx_http_core_module.c"
   prev->send_lowat 
# 3743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3743 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3743 "project/nginx/src/http/ngx_http_core_module.c"
   prev->send_lowat
# 3743 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3743 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ;
    
# 3744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3744 "project/nginx/src/http/ngx_http_core_module.c"
   conf->postpone_output 
# 3744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) { 
# 3744 "project/nginx/src/http/ngx_http_core_module.c"
   conf->postpone_output 
# 3744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3744 "project/nginx/src/http/ngx_http_core_module.c"
   prev->postpone_output 
# 3744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (size_t) -1) ? 
# 3744 "project/nginx/src/http/ngx_http_core_module.c"
   1460 
# 3744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3744 "project/nginx/src/http/ngx_http_core_module.c"
   prev->postpone_output
# 3744 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                   
# 3745 "project/nginx/src/http/ngx_http_core_module.c"
                                  ;

    
# 3747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3747 "project/nginx/src/http/ngx_http_core_module.c"
   conf->limit_rate 
# 3747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) { 
# 3747 "project/nginx/src/http/ngx_http_core_module.c"
   conf->limit_rate 
# 3747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3747 "project/nginx/src/http/ngx_http_core_module.c"
   prev->limit_rate 
# 3747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) ? ((void *)0) : 
# 3747 "project/nginx/src/http/ngx_http_core_module.c"
   prev->limit_rate
# 3747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3747 "project/nginx/src/http/ngx_http_core_module.c"
                                                                     ;
    
# 3748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3748 "project/nginx/src/http/ngx_http_core_module.c"
   conf->limit_rate_after 
# 3748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) { 
# 3748 "project/nginx/src/http/ngx_http_core_module.c"
   conf->limit_rate_after 
# 3748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3748 "project/nginx/src/http/ngx_http_core_module.c"
   prev->limit_rate_after 
# 3748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) ? ((void *)0) : 
# 3748 "project/nginx/src/http/ngx_http_core_module.c"
   prev->limit_rate_after
# 3748 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                           
# 3749 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ;

    
# 3751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3751 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_time 
# 3751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3751 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_time 
# 3751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3751 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_time 
# 3751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3751 "project/nginx/src/http/ngx_http_core_module.c"
   3600000 
# 3751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3751 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_time
# 3751 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                            
# 3752 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ;
    
# 3753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3753 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_timeout 
# 3753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3753 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_timeout 
# 3753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3753 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_timeout 
# 3753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3753 "project/nginx/src/http/ngx_http_core_module.c"
   75000 
# 3753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3753 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_timeout
# 3753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                             
# 3754 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
    
# 3755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3755 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_header 
# 3755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3755 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_header 
# 3755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3755 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_header 
# 3755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3755 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3755 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_header
# 3755 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                        
# 3756 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ;
    
# 3757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3757 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_requests 
# 3757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3757 "project/nginx/src/http/ngx_http_core_module.c"
   conf->keepalive_requests 
# 3757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3757 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_requests 
# 3757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 
# 3757 "project/nginx/src/http/ngx_http_core_module.c"
   1000 
# 3757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3757 "project/nginx/src/http/ngx_http_core_module.c"
   prev->keepalive_requests
# 3757 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                             
# 3758 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
    
# 3759 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3759 "project/nginx/src/http/ngx_http_core_module.c"
   conf->lingering_close 
# 3759 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3759 "project/nginx/src/http/ngx_http_core_module.c"
   conf->lingering_close 
# 3759 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3759 "project/nginx/src/http/ngx_http_core_module.c"
   prev->lingering_close 
# 3759 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 1 : 
# 3759 "project/nginx/src/http/ngx_http_core_module.c"
   prev->lingering_close
# 3759 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                           
# 3760 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ;
    
# 3761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3761 "project/nginx/src/http/ngx_http_core_module.c"
   conf->lingering_time 
# 3761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3761 "project/nginx/src/http/ngx_http_core_module.c"
   conf->lingering_time 
# 3761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3761 "project/nginx/src/http/ngx_http_core_module.c"
   prev->lingering_time 
# 3761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3761 "project/nginx/src/http/ngx_http_core_module.c"
   30000 
# 3761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3761 "project/nginx/src/http/ngx_http_core_module.c"
   prev->lingering_time
# 3761 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                          
# 3762 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ;
    
# 3763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3763 "project/nginx/src/http/ngx_http_core_module.c"
   conf->lingering_timeout 
# 3763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3763 "project/nginx/src/http/ngx_http_core_module.c"
   conf->lingering_timeout 
# 3763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3763 "project/nginx/src/http/ngx_http_core_module.c"
   prev->lingering_timeout 
# 3763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3763 "project/nginx/src/http/ngx_http_core_module.c"
   5000 
# 3763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3763 "project/nginx/src/http/ngx_http_core_module.c"
   prev->lingering_timeout
# 3763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                            
# 3764 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ;
    
# 3765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3765 "project/nginx/src/http/ngx_http_core_module.c"
   conf->resolver_timeout 
# 3765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) { 
# 3765 "project/nginx/src/http/ngx_http_core_module.c"
   conf->resolver_timeout 
# 3765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3765 "project/nginx/src/http/ngx_http_core_module.c"
   prev->resolver_timeout 
# 3765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_msec_t) -1) ? 
# 3765 "project/nginx/src/http/ngx_http_core_module.c"
   30000 
# 3765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3765 "project/nginx/src/http/ngx_http_core_module.c"
   prev->resolver_timeout
# 3765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                            
# 3766 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ;

    if (conf->resolver == 
# 3768 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         ((void *)0)
# 3768 "project/nginx/src/http/ngx_http_core_module.c"
                             ) {

        if (prev->resolver == 
# 3770 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             ((void *)0)
# 3770 "project/nginx/src/http/ngx_http_core_module.c"
                                 ) {






            prev->resolver = ngx_resolver_create(cf, 
# 3777 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                    ((void *)0)
# 3777 "project/nginx/src/http/ngx_http_core_module.c"
                                                        , 0);
            if (prev->resolver == 
# 3778 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 ((void *)0)
# 3778 "project/nginx/src/http/ngx_http_core_module.c"
                                     ) {
                return 
# 3779 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3779 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }
        }

        conf->resolver = prev->resolver;
    }

    if (ngx_conf_merge_path_value(cf, &conf->client_body_temp_path,
                              prev->client_body_temp_path,
                              &ngx_http_client_temp_path)
        != 
# 3789 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          0
# 3789 "project/nginx/src/http/ngx_http_core_module.c"
                )
    {
        return 
# 3791 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 3791 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    
# 3794 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3794 "project/nginx/src/http/ngx_http_core_module.c"
   conf->reset_timedout_connection 
# 3794 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3794 "project/nginx/src/http/ngx_http_core_module.c"
   conf->reset_timedout_connection 
# 3794 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3794 "project/nginx/src/http/ngx_http_core_module.c"
   prev->reset_timedout_connection 
# 3794 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3794 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3794 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3794 "project/nginx/src/http/ngx_http_core_module.c"
   prev->reset_timedout_connection
# 3794 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                 
# 3795 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;
    
# 3796 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3796 "project/nginx/src/http/ngx_http_core_module.c"
   conf->absolute_redirect 
# 3796 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3796 "project/nginx/src/http/ngx_http_core_module.c"
   conf->absolute_redirect 
# 3796 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3796 "project/nginx/src/http/ngx_http_core_module.c"
   prev->absolute_redirect 
# 3796 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3796 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3796 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3796 "project/nginx/src/http/ngx_http_core_module.c"
   prev->absolute_redirect
# 3796 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                         
# 3797 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ;
    
# 3798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3798 "project/nginx/src/http/ngx_http_core_module.c"
   conf->server_name_in_redirect 
# 3798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3798 "project/nginx/src/http/ngx_http_core_module.c"
   conf->server_name_in_redirect 
# 3798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3798 "project/nginx/src/http/ngx_http_core_module.c"
   prev->server_name_in_redirect 
# 3798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3798 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3798 "project/nginx/src/http/ngx_http_core_module.c"
   prev->server_name_in_redirect
# 3798 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                               
# 3799 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;
    
# 3800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3800 "project/nginx/src/http/ngx_http_core_module.c"
   conf->port_in_redirect 
# 3800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3800 "project/nginx/src/http/ngx_http_core_module.c"
   conf->port_in_redirect 
# 3800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3800 "project/nginx/src/http/ngx_http_core_module.c"
   prev->port_in_redirect 
# 3800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3800 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3800 "project/nginx/src/http/ngx_http_core_module.c"
   prev->port_in_redirect
# 3800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3800 "project/nginx/src/http/ngx_http_core_module.c"
                                                                          ;
    
# 3801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3801 "project/nginx/src/http/ngx_http_core_module.c"
   conf->msie_padding 
# 3801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3801 "project/nginx/src/http/ngx_http_core_module.c"
   conf->msie_padding 
# 3801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3801 "project/nginx/src/http/ngx_http_core_module.c"
   prev->msie_padding 
# 3801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3801 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3801 "project/nginx/src/http/ngx_http_core_module.c"
   prev->msie_padding
# 3801 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3801 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ;
    
# 3802 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3802 "project/nginx/src/http/ngx_http_core_module.c"
   conf->msie_refresh 
# 3802 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3802 "project/nginx/src/http/ngx_http_core_module.c"
   conf->msie_refresh 
# 3802 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3802 "project/nginx/src/http/ngx_http_core_module.c"
   prev->msie_refresh 
# 3802 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3802 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3802 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3802 "project/nginx/src/http/ngx_http_core_module.c"
   prev->msie_refresh
# 3802 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3802 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ;
    
# 3803 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3803 "project/nginx/src/http/ngx_http_core_module.c"
   conf->log_not_found 
# 3803 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3803 "project/nginx/src/http/ngx_http_core_module.c"
   conf->log_not_found 
# 3803 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3803 "project/nginx/src/http/ngx_http_core_module.c"
   prev->log_not_found 
# 3803 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3803 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3803 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3803 "project/nginx/src/http/ngx_http_core_module.c"
   prev->log_not_found
# 3803 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3803 "project/nginx/src/http/ngx_http_core_module.c"
                                                                    ;
    
# 3804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3804 "project/nginx/src/http/ngx_http_core_module.c"
   conf->log_subrequest 
# 3804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3804 "project/nginx/src/http/ngx_http_core_module.c"
   conf->log_subrequest 
# 3804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3804 "project/nginx/src/http/ngx_http_core_module.c"
   prev->log_subrequest 
# 3804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3804 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3804 "project/nginx/src/http/ngx_http_core_module.c"
   prev->log_subrequest
# 3804 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3804 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      ;
    
# 3805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3805 "project/nginx/src/http/ngx_http_core_module.c"
   conf->recursive_error_pages 
# 3805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3805 "project/nginx/src/http/ngx_http_core_module.c"
   conf->recursive_error_pages 
# 3805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3805 "project/nginx/src/http/ngx_http_core_module.c"
   prev->recursive_error_pages 
# 3805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3805 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3805 "project/nginx/src/http/ngx_http_core_module.c"
   prev->recursive_error_pages
# 3805 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                             
# 3806 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
    
# 3807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3807 "project/nginx/src/http/ngx_http_core_module.c"
   conf->chunked_transfer_encoding 
# 3807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3807 "project/nginx/src/http/ngx_http_core_module.c"
   conf->chunked_transfer_encoding 
# 3807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3807 "project/nginx/src/http/ngx_http_core_module.c"
   prev->chunked_transfer_encoding 
# 3807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3807 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3807 "project/nginx/src/http/ngx_http_core_module.c"
   prev->chunked_transfer_encoding
# 3807 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                 
# 3808 "project/nginx/src/http/ngx_http_core_module.c"
                                                                ;
    
# 3809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3809 "project/nginx/src/http/ngx_http_core_module.c"
   conf->etag 
# 3809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3809 "project/nginx/src/http/ngx_http_core_module.c"
   conf->etag 
# 3809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3809 "project/nginx/src/http/ngx_http_core_module.c"
   prev->etag 
# 3809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3809 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3809 "project/nginx/src/http/ngx_http_core_module.c"
   prev->etag
# 3809 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3809 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ;

    
# 3811 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3811 "project/nginx/src/http/ngx_http_core_module.c"
   conf->server_tokens 
# 3811 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3811 "project/nginx/src/http/ngx_http_core_module.c"
   conf->server_tokens 
# 3811 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3811 "project/nginx/src/http/ngx_http_core_module.c"
   prev->server_tokens 
# 3811 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 1 : 
# 3811 "project/nginx/src/http/ngx_http_core_module.c"
   prev->server_tokens
# 3811 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                        
# 3812 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ;

    
# 3814 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3814 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache 
# 3814 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) { 
# 3814 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache 
# 3814 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3814 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache 
# 3814 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) ? ((void *)0) : 
# 3814 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache
# 3814 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                          
# 3815 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ;

    
# 3817 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3817 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_valid 
# 3817 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3817 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_valid 
# 3817 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3817 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_valid 
# 3817 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3817 "project/nginx/src/http/ngx_http_core_module.c"
   60 
# 3817 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3817 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_valid
# 3817 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                              
# 3818 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;

    
# 3820 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3820 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_min_uses 
# 3820 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3820 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_min_uses 
# 3820 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3820 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_min_uses 
# 3820 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 
# 3820 "project/nginx/src/http/ngx_http_core_module.c"
   1 
# 3820 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3820 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_min_uses
# 3820 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                
# 3821 "project/nginx/src/http/ngx_http_core_module.c"
                                                               ;

    
# 3823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3823 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_errors 
# 3823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3823 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_errors 
# 3823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3823 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_errors 
# 3823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3823 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3823 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_errors
# 3823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                              
# 3824 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;

    
# 3826 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3826 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_events 
# 3826 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3826 "project/nginx/src/http/ngx_http_core_module.c"
   conf->open_file_cache_events 
# 3826 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3826 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_events 
# 3826 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3826 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3826 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3826 "project/nginx/src/http/ngx_http_core_module.c"
   prev->open_file_cache_events
# 3826 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                              
# 3827 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ;


    
# 3830 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3830 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_vary 
# 3830 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) { 
# 3830 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_vary 
# 3830 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3830 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_vary 
# 3830 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == -1) ? 
# 3830 "project/nginx/src/http/ngx_http_core_module.c"
   0 
# 3830 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3830 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_vary
# 3830 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3830 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
    
# 3831 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3831 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_http_version 
# 3831 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3831 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_http_version 
# 3831 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3831 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_http_version 
# 3831 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 1001 : 
# 3831 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_http_version
# 3831 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                  
# 3832 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ;
    
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_proxied 
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == 0) { 
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_proxied 
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_proxied 
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == 0) ? 
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   (
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   1
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   |
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   0x0002
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   ) 
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   : 
# 3833 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_proxied
# 3833 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                                               
# 3834 "project/nginx/src/http/ngx_http_core_module.c"
                                                                              ;


    
# 3837 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3837 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_disable 
# 3837 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) { 
# 3837 "project/nginx/src/http/ngx_http_core_module.c"
   conf->gzip_disable 
# 3837 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3837 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_disable 
# 3837 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) ? ((void *)0) : 
# 3837 "project/nginx/src/http/ngx_http_core_module.c"
   prev->gzip_disable
# 3837 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
# 3837 "project/nginx/src/http/ngx_http_core_module.c"
                                                                         ;


    if (conf->gzip_disable_msie6 == 3) {
        conf->gzip_disable_msie6 =
            (prev->gzip_disable_msie6 == 3) ? 0 : prev->gzip_disable_msie6;
    }
# 3857 "project/nginx/src/http/ngx_http_core_module.c"
    
# 3857 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3857 "project/nginx/src/http/ngx_http_core_module.c"
   conf->disable_symlinks 
# 3857 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) { 
# 3857 "project/nginx/src/http/ngx_http_core_module.c"
   conf->disable_symlinks 
# 3857 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3857 "project/nginx/src/http/ngx_http_core_module.c"
   prev->disable_symlinks 
# 3857 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (ngx_uint_t) -1) ? 0 : 
# 3857 "project/nginx/src/http/ngx_http_core_module.c"
   prev->disable_symlinks
# 3857 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                       
# 3858 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;
    
# 3859 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   if (
# 3859 "project/nginx/src/http/ngx_http_core_module.c"
   conf->disable_symlinks_from 
# 3859 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) { 
# 3859 "project/nginx/src/http/ngx_http_core_module.c"
   conf->disable_symlinks_from 
# 3859 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   = (
# 3859 "project/nginx/src/http/ngx_http_core_module.c"
   prev->disable_symlinks_from 
# 3859 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   == (void *) -1) ? ((void *)0) : 
# 3859 "project/nginx/src/http/ngx_http_core_module.c"
   prev->disable_symlinks_from
# 3859 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   ; }
                                                               
# 3860 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;


    return 
# 3863 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 3863 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_listen(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_srv_conf_t *cscf = conf;

    ngx_str_t *value, size;
    ngx_url_t u;
    ngx_uint_t n;
    ngx_http_listen_opt_t lsopt;

    cscf->listen = 1;

    value = cf->args->elts;

    
# 3881 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 3881 "project/nginx/src/http/ngx_http_core_module.c"
   &u
# 3881 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 3881 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(ngx_url_t)
# 3881 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 3881 "project/nginx/src/http/ngx_http_core_module.c"
   &u
# 3881 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 3881 "project/nginx/src/http/ngx_http_core_module.c"
                                     ;

    u.url = value[1];
    u.listen = 1;
    u.default_port = 80;

    if (ngx_parse_url(cf->pool, &u) != 
# 3887 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      0
# 3887 "project/nginx/src/http/ngx_http_core_module.c"
                                            ) {
        if (u.err) {
            ngx_conf_log_error(
# 3889 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 3889 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "%s in \"%V\" of the \"listen\" directive",
                               u.err, &u.url);
        }

        return 
# 3894 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 3894 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    
# 3897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 3897 "project/nginx/src/http/ngx_http_core_module.c"
   &lsopt
# 3897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 3897 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(ngx_http_listen_opt_t)
# 3897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 3897 "project/nginx/src/http/ngx_http_core_module.c"
   &lsopt
# 3897 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 3897 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ;

    lsopt.backlog = 
# 3899 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   -1
# 3899 "project/nginx/src/http/ngx_http_core_module.c"
                                     ;
    lsopt.rcvbuf = -1;
    lsopt.sndbuf = -1;




    lsopt.fastopen = -1;


    lsopt.ipv6only = 1;


    for (n = 2; n < cf->args->nelts; n++) {

        if (
# 3914 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 3914 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 3914 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 3914 "project/nginx/src/http/ngx_http_core_module.c"
           "default_server"
# 3914 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 3914 "project/nginx/src/http/ngx_http_core_module.c"
                                                       == 0
            || 
# 3915 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              strcmp((const char *) 
# 3915 "project/nginx/src/http/ngx_http_core_module.c"
              value[n].data
# 3915 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              , (const char *) 
# 3915 "project/nginx/src/http/ngx_http_core_module.c"
              "default"
# 3915 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ) 
# 3915 "project/nginx/src/http/ngx_http_core_module.c"
                                                   == 0)
        {
            lsopt.default_server = 1;
            continue;
        }

        if (
# 3921 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 3921 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 3921 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 3921 "project/nginx/src/http/ngx_http_core_module.c"
           "bind"
# 3921 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 3921 "project/nginx/src/http/ngx_http_core_module.c"
                                             == 0) {
            lsopt.set = 1;
            lsopt.bind = 1;
            continue;
        }
# 3944 "project/nginx/src/http/ngx_http_core_module.c"
        if (
# 3944 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 3944 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 3944 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 3944 "project/nginx/src/http/ngx_http_core_module.c"
           "fastopen="
# 3944 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 3944 "project/nginx/src/http/ngx_http_core_module.c"
           9
# 3944 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 3944 "project/nginx/src/http/ngx_http_core_module.c"
                                                      == 0) {
            lsopt.fastopen = ngx_atoi(value[n].data + 9, value[n].len - 9);
            lsopt.set = 1;
            lsopt.bind = 1;

            if (lsopt.fastopen == 
# 3949 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 -1
# 3949 "project/nginx/src/http/ngx_http_core_module.c"
                                          ) {
                ngx_conf_log_error(
# 3950 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 3950 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "invalid fastopen \"%V\"", &value[n]);
                return 
# 3952 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3952 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            continue;
        }


        if (
# 3959 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 3959 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 3959 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 3959 "project/nginx/src/http/ngx_http_core_module.c"
           "backlog="
# 3959 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 3959 "project/nginx/src/http/ngx_http_core_module.c"
           8
# 3959 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 3959 "project/nginx/src/http/ngx_http_core_module.c"
                                                     == 0) {
            lsopt.backlog = ngx_atoi(value[n].data + 8, value[n].len - 8);
            lsopt.set = 1;
            lsopt.bind = 1;

            if (lsopt.backlog == 
# 3964 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                -1 
# 3964 "project/nginx/src/http/ngx_http_core_module.c"
                                          || lsopt.backlog == 0) {
                ngx_conf_log_error(
# 3965 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 3965 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "invalid backlog \"%V\"", &value[n]);
                return 
# 3967 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3967 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            continue;
        }

        if (
# 3973 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 3973 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 3973 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 3973 "project/nginx/src/http/ngx_http_core_module.c"
           "rcvbuf="
# 3973 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 3973 "project/nginx/src/http/ngx_http_core_module.c"
           7
# 3973 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 3973 "project/nginx/src/http/ngx_http_core_module.c"
                                                    == 0) {
            size.len = value[n].len - 7;
            size.data = value[n].data + 7;

            lsopt.rcvbuf = ngx_parse_size(&size);
            lsopt.set = 1;
            lsopt.bind = 1;

            if (lsopt.rcvbuf == 
# 3981 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               -1
# 3981 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
                ngx_conf_log_error(
# 3982 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 3982 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "invalid rcvbuf \"%V\"", &value[n]);
                return 
# 3984 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 3984 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            continue;
        }

        if (
# 3990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 3990 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 3990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 3990 "project/nginx/src/http/ngx_http_core_module.c"
           "sndbuf="
# 3990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 3990 "project/nginx/src/http/ngx_http_core_module.c"
           7
# 3990 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 3990 "project/nginx/src/http/ngx_http_core_module.c"
                                                    == 0) {
            size.len = value[n].len - 7;
            size.data = value[n].data + 7;

            lsopt.sndbuf = ngx_parse_size(&size);
            lsopt.set = 1;
            lsopt.bind = 1;

            if (lsopt.sndbuf == 
# 3998 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               -1
# 3998 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
                ngx_conf_log_error(
# 3999 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 3999 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "invalid sndbuf \"%V\"", &value[n]);
                return 
# 4001 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 4001 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            continue;
        }

        if (
# 4007 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 4007 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4007 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4007 "project/nginx/src/http/ngx_http_core_module.c"
           "accept_filter="
# 4007 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 4007 "project/nginx/src/http/ngx_http_core_module.c"
           14
# 4007 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4007 "project/nginx/src/http/ngx_http_core_module.c"
                                                            == 0) {





            ngx_conf_log_error(
# 4013 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4013 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "accept filters \"%V\" are not supported "
                               "on this platform, ignored",
                               &value[n]);

            continue;
        }

        if (
# 4021 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4021 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4021 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4021 "project/nginx/src/http/ngx_http_core_module.c"
           "deferred"
# 4021 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4021 "project/nginx/src/http/ngx_http_core_module.c"
                                                 == 0) {





            ngx_conf_log_error(
# 4027 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4027 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "the deferred accept is not supported "
                               "on this platform, ignored");

            continue;
        }

        if (
# 4034 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 4034 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4034 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4034 "project/nginx/src/http/ngx_http_core_module.c"
           "ipv6only=o"
# 4034 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 4034 "project/nginx/src/http/ngx_http_core_module.c"
           10
# 4034 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4034 "project/nginx/src/http/ngx_http_core_module.c"
                                                        == 0) {

            if (
# 4036 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               strcmp((const char *) 
# 4036 "project/nginx/src/http/ngx_http_core_module.c"
               &value[n].data[10]
# 4036 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , (const char *) 
# 4036 "project/nginx/src/http/ngx_http_core_module.c"
               "n"
# 4036 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ) 
# 4036 "project/nginx/src/http/ngx_http_core_module.c"
                                                   == 0) {
                lsopt.ipv6only = 1;

            } else if (
# 4039 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      strcmp((const char *) 
# 4039 "project/nginx/src/http/ngx_http_core_module.c"
                      &value[n].data[10]
# 4039 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      , (const char *) 
# 4039 "project/nginx/src/http/ngx_http_core_module.c"
                      "ff"
# 4039 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ) 
# 4039 "project/nginx/src/http/ngx_http_core_module.c"
                                                           == 0) {
                lsopt.ipv6only = 0;

            } else {
                ngx_conf_log_error(
# 4043 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 4043 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "invalid ipv6only flags \"%s\"",
                                   &value[n].data[9]);
                return 
# 4046 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 4046 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            lsopt.set = 1;
            lsopt.bind = 1;

            continue;






        }

        if (
# 4061 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4061 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4061 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4061 "project/nginx/src/http/ngx_http_core_module.c"
           "reuseport"
# 4061 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4061 "project/nginx/src/http/ngx_http_core_module.c"
                                                  == 0) {

            lsopt.reuseport = 1;
            lsopt.set = 1;
            lsopt.bind = 1;





            continue;
        }

        if (
# 4074 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4074 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4074 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4074 "project/nginx/src/http/ngx_http_core_module.c"
           "ssl"
# 4074 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4074 "project/nginx/src/http/ngx_http_core_module.c"
                                            == 0) {




            ngx_conf_log_error(
# 4079 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4079 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "the \"ssl\" parameter requires "
                               "ngx_http_ssl_module");
            return 
# 4082 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4082 "project/nginx/src/http/ngx_http_core_module.c"
                                ;

        }

        if (
# 4086 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4086 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4086 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4086 "project/nginx/src/http/ngx_http_core_module.c"
           "http2"
# 4086 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4086 "project/nginx/src/http/ngx_http_core_module.c"
                                              == 0) {




            ngx_conf_log_error(
# 4091 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4091 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "the \"http2\" parameter requires "
                               "ngx_http_v2_module");
            return 
# 4094 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4094 "project/nginx/src/http/ngx_http_core_module.c"
                                ;

        }

        if (
# 4098 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 4098 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4098 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4098 "project/nginx/src/http/ngx_http_core_module.c"
           "so_keepalive="
# 4098 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 4098 "project/nginx/src/http/ngx_http_core_module.c"
           13
# 4098 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4098 "project/nginx/src/http/ngx_http_core_module.c"
                                                           == 0) {

            if (
# 4100 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               strcmp((const char *) 
# 4100 "project/nginx/src/http/ngx_http_core_module.c"
               &value[n].data[13]
# 4100 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               , (const char *) 
# 4100 "project/nginx/src/http/ngx_http_core_module.c"
               "on"
# 4100 "project/nginx/src/http/ngx_http_core_module.c" 3 4
               ) 
# 4100 "project/nginx/src/http/ngx_http_core_module.c"
                                                    == 0) {
                lsopt.so_keepalive = 1;

            } else if (
# 4103 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      strcmp((const char *) 
# 4103 "project/nginx/src/http/ngx_http_core_module.c"
                      &value[n].data[13]
# 4103 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      , (const char *) 
# 4103 "project/nginx/src/http/ngx_http_core_module.c"
                      "off"
# 4103 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      ) 
# 4103 "project/nginx/src/http/ngx_http_core_module.c"
                                                            == 0) {
                lsopt.so_keepalive = 2;

            } else {
# 4166 "project/nginx/src/http/ngx_http_core_module.c"
                ngx_conf_log_error(
# 4166 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 4166 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "the \"so_keepalive\" parameter accepts "
                                   "only \"on\" or \"off\" on this platform");
                return 
# 4169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 4169 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;


            }

            lsopt.set = 1;
            lsopt.bind = 1;

            continue;
# 4187 "project/nginx/src/http/ngx_http_core_module.c"
        }

        if (
# 4189 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4189 "project/nginx/src/http/ngx_http_core_module.c"
           value[n].data
# 4189 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4189 "project/nginx/src/http/ngx_http_core_module.c"
           "proxy_protocol"
# 4189 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4189 "project/nginx/src/http/ngx_http_core_module.c"
                                                       == 0) {
            lsopt.proxy_protocol = 1;
            continue;
        }

        ngx_conf_log_error(
# 4194 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4194 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "invalid parameter \"%V\"", &value[n]);
        return 
# 4196 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4196 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    for (n = 0; n < u.naddrs; n++) {
        lsopt.sockaddr = u.addrs[n].sockaddr;
        lsopt.socklen = u.addrs[n].socklen;
        lsopt.addr_text = u.addrs[n].name;
        lsopt.wildcard = ngx_inet_wildcard(lsopt.sockaddr);

        if (ngx_http_add_listen(cf, cscf, &lsopt) != 
# 4205 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                    0
# 4205 "project/nginx/src/http/ngx_http_core_module.c"
                                                          ) {
            return 
# 4206 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4206 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    return 
# 4210 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4210 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_server_name(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_srv_conf_t *cscf = conf;

    u_char ch;
    ngx_str_t *value;
    ngx_uint_t i;
    ngx_http_server_name_t *sn;

    value = cf->args->elts;

    for (i = 1; i < cf->args->nelts; i++) {

        ch = value[i].data[0];

        if ((ch == '*' && (value[i].len < 3 || value[i].data[1] != '.'))
            || (ch == '.' && value[i].len < 2))
        {
            ngx_conf_log_error(
# 4233 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4233 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "server name \"%V\" is invalid", &value[i]);
            return 
# 4235 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4235 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        if (
# 4238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strchr((const char *) 
# 4238 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 4238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (int) 
# 4238 "project/nginx/src/http/ngx_http_core_module.c"
           '/'
# 4238 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           )
# 4238 "project/nginx/src/http/ngx_http_core_module.c"
                                         ) {
            ngx_conf_log_error(
# 4239 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              5
# 4239 "project/nginx/src/http/ngx_http_core_module.c"
                                          , cf, 0,
                               "server name \"%V\" has suspicious symbols",
                               &value[i]);
        }

        sn = ngx_array_push(&cscf->server_names);
        if (sn == 
# 4245 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 ((void *)0)
# 4245 "project/nginx/src/http/ngx_http_core_module.c"
                     ) {
            return 
# 4246 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4246 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }


        sn->regex = 
# 4250 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   ((void *)0)
# 4250 "project/nginx/src/http/ngx_http_core_module.c"
                       ;

        sn->server = cscf;

        if (ngx_strcasecmp(value[i].data, (u_char *) "$hostname") == 0) {
            sn->name = cf->cycle->hostname;

        } else {
            sn->name = value[i];
        }

        if (value[i].data[0] != '~') {
            ngx_strlow(sn->name.data, sn->name.data, sn->name.len);
            continue;
        }


        {
        u_char *p;
        ngx_regex_compile_t rc;
        u_char errstr[
# 4270 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    1024
# 4270 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ];

        if (value[i].len == 1) {
            ngx_conf_log_error(
# 4273 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4273 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "empty regex in server name \"%V\"", &value[i]);
            return 
# 4275 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4275 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        value[i].len--;
        value[i].data++;

        
# 4281 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       (void) __builtin___memset_chk (
# 4281 "project/nginx/src/http/ngx_http_core_module.c"
       &rc
# 4281 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 0, 
# 4281 "project/nginx/src/http/ngx_http_core_module.c"
       sizeof(ngx_regex_compile_t)
# 4281 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , __builtin_object_size (
# 4281 "project/nginx/src/http/ngx_http_core_module.c"
       &rc
# 4281 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 0))
# 4281 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ;

        rc.pattern = value[i];
        rc.err.len = 
# 4284 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    1024
# 4284 "project/nginx/src/http/ngx_http_core_module.c"
                                       ;
        rc.err.data = errstr;

        for (p = value[i].data; p < value[i].data + value[i].len; p++) {
            if (*p >= 'A' && *p <= 'Z') {
                rc.options = 
# 4289 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            0x00000001
# 4289 "project/nginx/src/http/ngx_http_core_module.c"
                                              ;
                break;
            }
        }

        sn->regex = ngx_http_regex_compile(cf, &rc);
        if (sn->regex == 
# 4295 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 4295 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
            return 
# 4296 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4296 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        sn->name = value[i];
        cscf->captures = (rc.captures > 0);
        }







    }

    return 
# 4311 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4311 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_root(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value;
    ngx_int_t alias;
    ngx_uint_t n;
    ngx_http_script_compile_t sc;

    alias = (cmd->name.len == sizeof("alias") - 1) ? 1 : 0;

    if (clcf->root.data) {

        if ((clcf->alias != 0) == alias) {
            return "is duplicate";
        }

        ngx_conf_log_error(
# 4333 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4333 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "\"%V\" directive is duplicate, "
                           "\"%s\" directive was specified earlier",
                           &cmd->name, clcf->alias ? "alias" : "root");

        return 
# 4338 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4338 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (clcf->named && alias) {
        ngx_conf_log_error(
# 4342 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4342 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "the \"alias\" directive cannot be used "
                           "inside the named location");

        return 
# 4346 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4346 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    value = cf->args->elts;

    if (
# 4351 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strstr((const char *) 
# 4351 "project/nginx/src/http/ngx_http_core_module.c"
       value[1].data
# 4351 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 4351 "project/nginx/src/http/ngx_http_core_module.c"
       "$document_root"
# 4351 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )
        
# 4352 "project/nginx/src/http/ngx_http_core_module.c"
       || 
# 4352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          strstr((const char *) 
# 4352 "project/nginx/src/http/ngx_http_core_module.c"
          value[1].data
# 4352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , (const char *) 
# 4352 "project/nginx/src/http/ngx_http_core_module.c"
          "${document_root}"
# 4352 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )
# 4352 "project/nginx/src/http/ngx_http_core_module.c"
                                                       )
    {
        ngx_conf_log_error(
# 4354 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4354 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "the $document_root variable cannot be used "
                           "in the \"%V\" directive",
                           &cmd->name);

        return 
# 4359 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4359 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (
# 4362 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strstr((const char *) 
# 4362 "project/nginx/src/http/ngx_http_core_module.c"
       value[1].data
# 4362 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 4362 "project/nginx/src/http/ngx_http_core_module.c"
       "$realpath_root"
# 4362 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       )
        
# 4363 "project/nginx/src/http/ngx_http_core_module.c"
       || 
# 4363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          strstr((const char *) 
# 4363 "project/nginx/src/http/ngx_http_core_module.c"
          value[1].data
# 4363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          , (const char *) 
# 4363 "project/nginx/src/http/ngx_http_core_module.c"
          "${realpath_root}"
# 4363 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          )
# 4363 "project/nginx/src/http/ngx_http_core_module.c"
                                                       )
    {
        ngx_conf_log_error(
# 4365 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4365 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "the $realpath_root variable cannot be used "
                           "in the \"%V\" directive",
                           &cmd->name);

        return 
# 4370 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4370 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    clcf->alias = alias ? clcf->name.len : 0;
    clcf->root = value[1];

    if (!alias && clcf->root.len > 0
        && clcf->root.data[clcf->root.len - 1] == '/')
    {
        clcf->root.len--;
    }

    if (clcf->root.data[0] != '$') {
        if (ngx_conf_full_name(cf->cycle, &clcf->root, 0) != 
# 4383 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                            0
# 4383 "project/nginx/src/http/ngx_http_core_module.c"
                                                                  ) {
            return 
# 4384 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4384 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    n = ngx_http_script_variables_count(&clcf->root);

    
# 4390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 4390 "project/nginx/src/http/ngx_http_core_module.c"
   &sc
# 4390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 4390 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(ngx_http_script_compile_t)
# 4390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 4390 "project/nginx/src/http/ngx_http_core_module.c"
   &sc
# 4390 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 4390 "project/nginx/src/http/ngx_http_core_module.c"
                                                      ;
    sc.variables = n;


    if (alias && clcf->regex) {
        clcf->alias = 
# 4395 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                     9223372036854775807LL
# 4395 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
        n = 1;
    }


    if (n) {
        sc.cf = cf;
        sc.source = &clcf->root;
        sc.lengths = &clcf->root_lengths;
        sc.values = &clcf->root_values;
        sc.complete_lengths = 1;
        sc.complete_values = 1;

        if (ngx_http_script_compile(&sc) != 
# 4408 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                           0
# 4408 "project/nginx/src/http/ngx_http_core_module.c"
                                                 ) {
            return 
# 4409 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4409 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    return 
# 4413 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4413 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static ngx_http_method_name_t ngx_methods_names[] = {
    { (u_char *) "GET", (uint32_t) ~
# 4418 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000002 
# 4418 "project/nginx/src/http/ngx_http_core_module.c"
                                                      },
    { (u_char *) "HEAD", (uint32_t) ~
# 4419 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000004 
# 4419 "project/nginx/src/http/ngx_http_core_module.c"
                                                       },
    { (u_char *) "POST", (uint32_t) ~
# 4420 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000008 
# 4420 "project/nginx/src/http/ngx_http_core_module.c"
                                                       },
    { (u_char *) "PUT", (uint32_t) ~
# 4421 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000010 
# 4421 "project/nginx/src/http/ngx_http_core_module.c"
                                                      },
    { (u_char *) "DELETE", (uint32_t) ~
# 4422 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000020 
# 4422 "project/nginx/src/http/ngx_http_core_module.c"
                                                         },
    { (u_char *) "MKCOL", (uint32_t) ~
# 4423 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000040 
# 4423 "project/nginx/src/http/ngx_http_core_module.c"
                                                        },
    { (u_char *) "COPY", (uint32_t) ~
# 4424 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000080 
# 4424 "project/nginx/src/http/ngx_http_core_module.c"
                                                       },
    { (u_char *) "MOVE", (uint32_t) ~
# 4425 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000100 
# 4425 "project/nginx/src/http/ngx_http_core_module.c"
                                                       },
    { (u_char *) "OPTIONS", (uint32_t) ~
# 4426 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000200 
# 4426 "project/nginx/src/http/ngx_http_core_module.c"
                                                          },
    { (u_char *) "PROPFIND", (uint32_t) ~
# 4427 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000400 
# 4427 "project/nginx/src/http/ngx_http_core_module.c"
                                                           },
    { (u_char *) "PROPPATCH", (uint32_t) ~
# 4428 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00000800 
# 4428 "project/nginx/src/http/ngx_http_core_module.c"
                                                            },
    { (u_char *) "LOCK", (uint32_t) ~
# 4429 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00001000 
# 4429 "project/nginx/src/http/ngx_http_core_module.c"
                                                       },
    { (u_char *) "UNLOCK", (uint32_t) ~
# 4430 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00002000 
# 4430 "project/nginx/src/http/ngx_http_core_module.c"
                                                         },
    { (u_char *) "PATCH", (uint32_t) ~
# 4431 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                         0x00004000 
# 4431 "project/nginx/src/http/ngx_http_core_module.c"
                                                        },
    { 
# 4432 "project/nginx/src/http/ngx_http_core_module.c" 3 4
     ((void *)0)
# 4432 "project/nginx/src/http/ngx_http_core_module.c"
         , 0 }
};


static char *
ngx_http_core_limit_except(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *pclcf = conf;

    char *rv;
    void *mconf;
    ngx_str_t *value;
    ngx_uint_t i;
    ngx_conf_t save;
    ngx_http_module_t *module;
    ngx_http_conf_ctx_t *ctx, *pctx;
    ngx_http_method_name_t *name;
    ngx_http_core_loc_conf_t *clcf;

    if (pclcf->limit_except) {
        return "is duplicate";
    }

    pclcf->limit_except = 0xffffffff;

    value = cf->args->elts;

    for (i = 1; i < cf->args->nelts; i++) {
        for (name = ngx_methods_names; name->name; name++) {

            if (ngx_strcasecmp(value[i].data, name->name) == 0) {
                pclcf->limit_except &= name->method;
                goto next;
            }
        }

        ngx_conf_log_error(
# 4468 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4468 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "invalid method \"%V\"", &value[i]);
        return 
# 4470 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4470 "project/nginx/src/http/ngx_http_core_module.c"
                            ;

    next:
        continue;
    }

    if (!(pclcf->limit_except & 
# 4476 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                               0x00000002
# 4476 "project/nginx/src/http/ngx_http_core_module.c"
                                           )) {
        pclcf->limit_except &= (uint32_t) ~
# 4477 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x00000004
# 4477 "project/nginx/src/http/ngx_http_core_module.c"
                                                       ;
    }

    ctx = ngx_pcalloc(cf->pool, sizeof(ngx_http_conf_ctx_t));
    if (ctx == 
# 4481 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 4481 "project/nginx/src/http/ngx_http_core_module.c"
                  ) {
        return 
# 4482 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4482 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    pctx = cf->ctx;
    ctx->main_conf = pctx->main_conf;
    ctx->srv_conf = pctx->srv_conf;

    ctx->loc_conf = ngx_pcalloc(cf->pool, sizeof(void *) * ngx_http_max_module);
    if (ctx->loc_conf == 
# 4490 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 4490 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
        return 
# 4491 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4491 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    for (i = 0; cf->cycle->modules[i]; i++) {
        if (cf->cycle->modules[i]->type != 
# 4495 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          0x50545448
# 4495 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ) {
            continue;
        }

        module = cf->cycle->modules[i]->ctx;

        if (module->create_loc_conf) {

            mconf = module->create_loc_conf(cf);
            if (mconf == 
# 4504 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        ((void *)0)
# 4504 "project/nginx/src/http/ngx_http_core_module.c"
                            ) {
                return 
# 4505 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 4505 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            ctx->loc_conf[cf->cycle->modules[i]->ctx_index] = mconf;
        }
    }


    clcf = ctx->loc_conf[ngx_http_core_module.ctx_index];
    pclcf->limit_except_loc_conf = ctx->loc_conf;
    clcf->loc_conf = ctx->loc_conf;
    clcf->name = pclcf->name;
    clcf->noname = 1;
    clcf->lmt_excpt = 1;

    if (ngx_http_add_location(cf, &pclcf->locations, clcf) != 
# 4520 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                             0
# 4520 "project/nginx/src/http/ngx_http_core_module.c"
                                                                   ) {
        return 
# 4521 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4521 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    save = *cf;
    cf->ctx = ctx;
    cf->cmd_type = 
# 4526 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  0x80000000
# 4526 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;

    rv = ngx_conf_parse(cf, 
# 4528 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                           ((void *)0)
# 4528 "project/nginx/src/http/ngx_http_core_module.c"
                               );

    *cf = save;

    return rv;
}


static char *
ngx_http_core_set_aio(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value;

    if (clcf->aio != 
# 4543 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    -1
# 4543 "project/nginx/src/http/ngx_http_core_module.c"
                                  ) {
        return "is duplicate";
    }






    value = cf->args->elts;

    if (
# 4554 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strcmp((const char *) 
# 4554 "project/nginx/src/http/ngx_http_core_module.c"
       value[1].data
# 4554 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 4554 "project/nginx/src/http/ngx_http_core_module.c"
       "off"
# 4554 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) 
# 4554 "project/nginx/src/http/ngx_http_core_module.c"
                                        == 0) {
        clcf->aio = 
# 4555 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                   0
# 4555 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
        return 
# 4556 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 4556 "project/nginx/src/http/ngx_http_core_module.c"
                         ;
    }

    if (
# 4559 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strcmp((const char *) 
# 4559 "project/nginx/src/http/ngx_http_core_module.c"
       value[1].data
# 4559 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 4559 "project/nginx/src/http/ngx_http_core_module.c"
       "on"
# 4559 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) 
# 4559 "project/nginx/src/http/ngx_http_core_module.c"
                                       == 0) {




        ngx_conf_log_error(
# 4564 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4564 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "\"aio on\" "
                           "is unsupported on this platform");
        return 
# 4567 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4567 "project/nginx/src/http/ngx_http_core_module.c"
                            ;

    }

    if (
# 4571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strncmp((const char *) 
# 4571 "project/nginx/src/http/ngx_http_core_module.c"
       value[1].data
# 4571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 4571 "project/nginx/src/http/ngx_http_core_module.c"
       "threads"
# 4571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , 
# 4571 "project/nginx/src/http/ngx_http_core_module.c"
       7
# 4571 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) 
# 4571 "project/nginx/src/http/ngx_http_core_module.c"
                                                == 0
        && (value[1].len == 7 || value[1].data[7] == '='))
    {
# 4622 "project/nginx/src/http/ngx_http_core_module.c"
        ngx_conf_log_error(
# 4622 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4622 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "\"aio threads\" "
                           "is unsupported on this platform");
        return 
# 4625 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4625 "project/nginx/src/http/ngx_http_core_module.c"
                            ;

    }

    return "invalid value";
}


static char *
ngx_http_core_directio(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value;

    if (clcf->directio != 
# 4640 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         -1
# 4640 "project/nginx/src/http/ngx_http_core_module.c"
                                       ) {
        return "is duplicate";
    }

    value = cf->args->elts;

    if (
# 4646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       strcmp((const char *) 
# 4646 "project/nginx/src/http/ngx_http_core_module.c"
       value[1].data
# 4646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       , (const char *) 
# 4646 "project/nginx/src/http/ngx_http_core_module.c"
       "off"
# 4646 "project/nginx/src/http/ngx_http_core_module.c" 3 4
       ) 
# 4646 "project/nginx/src/http/ngx_http_core_module.c"
                                        == 0) {
        clcf->directio = 
# 4647 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                        9223372036854775807LL
# 4647 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ;
        return 
# 4648 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 4648 "project/nginx/src/http/ngx_http_core_module.c"
                         ;
    }

    clcf->directio = ngx_parse_offset(&value[1]);
    if (clcf->directio == (off_t) 
# 4652 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 -1
# 4652 "project/nginx/src/http/ngx_http_core_module.c"
                                          ) {
        return "invalid value";
    }

    return 
# 4656 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4656 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_error_page(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    u_char *p;
    ngx_int_t overwrite;
    ngx_str_t *value, uri, args;
    ngx_uint_t i, n;
    ngx_http_err_page_t *err;
    ngx_http_complex_value_t cv;
    ngx_http_compile_complex_value_t ccv;

    if (clcf->error_pages == 
# 4673 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            ((void *)0)
# 4673 "project/nginx/src/http/ngx_http_core_module.c"
                                ) {
        clcf->error_pages = ngx_array_create(cf->pool, 4,
                                             sizeof(ngx_http_err_page_t));
        if (clcf->error_pages == 
# 4676 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                ((void *)0)
# 4676 "project/nginx/src/http/ngx_http_core_module.c"
                                    ) {
            return 
# 4677 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4677 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    value = cf->args->elts;

    i = cf->args->nelts - 2;

    if (value[i].data[0] == '=') {
        if (i == 1) {
            ngx_conf_log_error(
# 4687 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4687 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "invalid value \"%V\"", &value[i]);
            return 
# 4689 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4689 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        if (value[i].len > 1) {
            overwrite = ngx_atoi(&value[i].data[1], value[i].len - 1);

            if (overwrite == 
# 4695 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                            -1
# 4695 "project/nginx/src/http/ngx_http_core_module.c"
                                     ) {
                ngx_conf_log_error(
# 4696 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  1
# 4696 "project/nginx/src/http/ngx_http_core_module.c"
                                               , cf, 0,
                                   "invalid value \"%V\"", &value[i]);
                return 
# 4698 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 4698 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

        } else {
            overwrite = 0;
        }

        n = 2;

    } else {
        overwrite = -1;
        n = 1;
    }

    uri = value[cf->args->nelts - 1];

    
# 4714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 4714 "project/nginx/src/http/ngx_http_core_module.c"
   &ccv
# 4714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 4714 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(ngx_http_compile_complex_value_t)
# 4714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 4714 "project/nginx/src/http/ngx_http_core_module.c"
   &ccv
# 4714 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 4714 "project/nginx/src/http/ngx_http_core_module.c"
                                                              ;

    ccv.cf = cf;
    ccv.value = &uri;
    ccv.complex_value = &cv;

    if (ngx_http_compile_complex_value(&ccv) != 
# 4720 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                               0
# 4720 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ) {
        return 
# 4721 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4721 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    
# 4724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (
# 4724 "project/nginx/src/http/ngx_http_core_module.c"
   &args
# 4724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->len = 0; (
# 4724 "project/nginx/src/http/ngx_http_core_module.c"
   &args
# 4724 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   )->data = ((void *)0)
# 4724 "project/nginx/src/http/ngx_http_core_module.c"
                      ;

    if (cv.lengths == 
# 4726 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                     ((void *)0) 
# 4726 "project/nginx/src/http/ngx_http_core_module.c"
                          && uri.len && uri.data[0] == '/') {
        p = (u_char *) 
# 4727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      strchr((const char *) 
# 4727 "project/nginx/src/http/ngx_http_core_module.c"
                      uri.data
# 4727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      , (int) 
# 4727 "project/nginx/src/http/ngx_http_core_module.c"
                      '?'
# 4727 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      )
# 4727 "project/nginx/src/http/ngx_http_core_module.c"
                                               ;

        if (p) {
            cv.value.len = p - uri.data;
            cv.value.data = uri.data;
            p++;
            args.len = (uri.data + uri.len) - p;
            args.data = p;
        }
    }

    for (i = 1; i < cf->args->nelts - n; i++) {
        err = ngx_array_push(clcf->error_pages);
        if (err == 
# 4740 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  ((void *)0)
# 4740 "project/nginx/src/http/ngx_http_core_module.c"
                      ) {
            return 
# 4741 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4741 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        err->status = ngx_atoi(value[i].data, value[i].len);

        if (err->status == 
# 4746 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          -1 
# 4746 "project/nginx/src/http/ngx_http_core_module.c"
                                    || err->status == 499) {
            ngx_conf_log_error(
# 4747 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4747 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "invalid value \"%V\"", &value[i]);
            return 
# 4749 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4749 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        if (err->status < 300 || err->status > 599) {
            ngx_conf_log_error(
# 4753 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4753 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0,
                               "value \"%V\" must be between 300 and 599",
                               &value[i]);
            return 
# 4756 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4756 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        err->overwrite = overwrite;

        if (overwrite == -1) {
            switch (err->status) {
                case 
# 4763 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    497
# 4763 "project/nginx/src/http/ngx_http_core_module.c"
                                     :
                case 
# 4764 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    495
# 4764 "project/nginx/src/http/ngx_http_core_module.c"
                                        :
                case 
# 4765 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    496
# 4765 "project/nginx/src/http/ngx_http_core_module.c"
                                     :
                case 
# 4766 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    494
# 4766 "project/nginx/src/http/ngx_http_core_module.c"
                                                     :
                    err->overwrite = 
# 4767 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    400
# 4767 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ;
            }
        }

        err->value = cv;
        err->args = args;
    }

    return 
# 4775 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4775 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_open_file_cache(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    time_t inactive;
    ngx_str_t *value, s;
    ngx_int_t max;
    ngx_uint_t i;

    if (clcf->open_file_cache != 
# 4789 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                (void *) -1
# 4789 "project/nginx/src/http/ngx_http_core_module.c"
                                                  ) {
        return "is duplicate";
    }

    value = cf->args->elts;

    max = 0;
    inactive = 60;

    for (i = 1; i < cf->args->nelts; i++) {

        if (
# 4800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 4800 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 4800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4800 "project/nginx/src/http/ngx_http_core_module.c"
           "max="
# 4800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 4800 "project/nginx/src/http/ngx_http_core_module.c"
           4
# 4800 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4800 "project/nginx/src/http/ngx_http_core_module.c"
                                                 == 0) {

            max = ngx_atoi(value[i].data + 4, value[i].len - 4);
            if (max <= 0) {
                goto failed;
            }

            continue;
        }

        if (
# 4810 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 4810 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 4810 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4810 "project/nginx/src/http/ngx_http_core_module.c"
           "inactive="
# 4810 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 4810 "project/nginx/src/http/ngx_http_core_module.c"
           9
# 4810 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4810 "project/nginx/src/http/ngx_http_core_module.c"
                                                      == 0) {

            s.len = value[i].len - 9;
            s.data = value[i].data + 9;

            inactive = ngx_parse_time(&s, 1);
            if (inactive == (time_t) 
# 4816 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    -1
# 4816 "project/nginx/src/http/ngx_http_core_module.c"
                                             ) {
                goto failed;
            }

            continue;
        }

        if (
# 4823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4823 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 4823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4823 "project/nginx/src/http/ngx_http_core_module.c"
           "off"
# 4823 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4823 "project/nginx/src/http/ngx_http_core_module.c"
                                            == 0) {

            clcf->open_file_cache = 
# 4825 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                   ((void *)0)
# 4825 "project/nginx/src/http/ngx_http_core_module.c"
                                       ;

            continue;
        }

    failed:

        ngx_conf_log_error(
# 4832 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4832 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "invalid \"open_file_cache\" parameter \"%V\"",
                           &value[i]);
        return 
# 4835 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4835 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (clcf->open_file_cache == 
# 4838 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                ((void *)0)
# 4838 "project/nginx/src/http/ngx_http_core_module.c"
                                    ) {
        return 
# 4839 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 4839 "project/nginx/src/http/ngx_http_core_module.c"
                         ;
    }

    if (max == 0) {
        ngx_conf_log_error(
# 4843 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 4843 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                        "\"open_file_cache\" must have the \"max\" parameter");
        return 
# 4845 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4845 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    clcf->open_file_cache = ngx_open_file_cache_init(cf->pool, max, inactive);
    if (clcf->open_file_cache) {
        return 
# 4850 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 4850 "project/nginx/src/http/ngx_http_core_module.c"
                         ;
    }

    return 
# 4853 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          (void *) -1
# 4853 "project/nginx/src/http/ngx_http_core_module.c"
                        ;
}


static char *
ngx_http_core_error_log(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    return ngx_log_set_log(cf, &clcf->error_log);
}


static char *
ngx_http_core_keepalive(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value;

    if (clcf->keepalive_timeout != 
# 4873 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                  (ngx_msec_t) -1
# 4873 "project/nginx/src/http/ngx_http_core_module.c"
                                                     ) {
        return "is duplicate";
    }

    value = cf->args->elts;

    clcf->keepalive_timeout = ngx_parse_time(&value[1], 0);

    if (clcf->keepalive_timeout == (ngx_msec_t) 
# 4881 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                               -1
# 4881 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ) {
        return "invalid value";
    }

    if (cf->args->nelts == 2) {
        return 
# 4886 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 4886 "project/nginx/src/http/ngx_http_core_module.c"
                         ;
    }

    clcf->keepalive_header = ngx_parse_time(&value[2], 1);

    if (clcf->keepalive_header == (time_t) 
# 4891 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                          -1
# 4891 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ) {
        return "invalid value";
    }

    return 
# 4895 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4895 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_internal(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    if (clcf->internal != 
# 4904 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         -1
# 4904 "project/nginx/src/http/ngx_http_core_module.c"
                                       ) {
        return "is duplicate";
    }

    clcf->internal = 1;

    return 
# 4910 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4910 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_resolver(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value;

    if (clcf->resolver) {
        return "is duplicate";
    }

    value = cf->args->elts;

    clcf->resolver = ngx_resolver_create(cf, &value[1], cf->args->nelts - 1);
    if (clcf->resolver == 
# 4928 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                         ((void *)0)
# 4928 "project/nginx/src/http/ngx_http_core_module.c"
                             ) {
        return 
# 4929 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 4929 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    return 
# 4932 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 4932 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}




static char *
ngx_http_gzip_disable(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;



    ngx_str_t *value;
    ngx_uint_t i;
    ngx_regex_elt_t *re;
    ngx_regex_compile_t rc;
    u_char errstr[
# 4949 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                1024
# 4949 "project/nginx/src/http/ngx_http_core_module.c"
                                                   ];

    if (clcf->gzip_disable == 
# 4951 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                             (void *) -1
# 4951 "project/nginx/src/http/ngx_http_core_module.c"
                                               ) {
        clcf->gzip_disable = ngx_array_create(cf->pool, 2,
                                              sizeof(ngx_regex_elt_t));
        if (clcf->gzip_disable == 
# 4954 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 ((void *)0)
# 4954 "project/nginx/src/http/ngx_http_core_module.c"
                                     ) {
            return 
# 4955 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4955 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }
    }

    value = cf->args->elts;

    
# 4961 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   (void) __builtin___memset_chk (
# 4961 "project/nginx/src/http/ngx_http_core_module.c"
   &rc
# 4961 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0, 
# 4961 "project/nginx/src/http/ngx_http_core_module.c"
   sizeof(ngx_regex_compile_t)
# 4961 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , __builtin_object_size (
# 4961 "project/nginx/src/http/ngx_http_core_module.c"
   &rc
# 4961 "project/nginx/src/http/ngx_http_core_module.c" 3 4
   , 0))
# 4961 "project/nginx/src/http/ngx_http_core_module.c"
                                                ;

    rc.pool = cf->pool;
    rc.err.len = 
# 4964 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                1024
# 4964 "project/nginx/src/http/ngx_http_core_module.c"
                                   ;
    rc.err.data = errstr;

    for (i = 1; i < cf->args->nelts; i++) {

        if (
# 4969 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 4969 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 4969 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 4969 "project/nginx/src/http/ngx_http_core_module.c"
           "msie6"
# 4969 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 4969 "project/nginx/src/http/ngx_http_core_module.c"
                                              == 0) {
            clcf->gzip_disable_msie6 = 1;
            continue;
        }
# 4983 "project/nginx/src/http/ngx_http_core_module.c"
        re = ngx_array_push(clcf->gzip_disable);
        if (re == 
# 4984 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                 ((void *)0)
# 4984 "project/nginx/src/http/ngx_http_core_module.c"
                     ) {
            return 
# 4985 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4985 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        rc.pattern = value[i];
        rc.options = 
# 4989 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                    0x00000001
# 4989 "project/nginx/src/http/ngx_http_core_module.c"
                                      ;

        if (ngx_regex_compile(&rc) != 
# 4991 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     0
# 4991 "project/nginx/src/http/ngx_http_core_module.c"
                                           ) {
            ngx_conf_log_error(
# 4992 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                              1
# 4992 "project/nginx/src/http/ngx_http_core_module.c"
                                           , cf, 0, "%V", &rc.err);
            return 
# 4993 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                  (void *) -1
# 4993 "project/nginx/src/http/ngx_http_core_module.c"
                                ;
        }

        re->regex = rc.regex;
        re->name = value[i].data;
    }

    return 
# 5000 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 5000 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
# 5033 "project/nginx/src/http/ngx_http_core_module.c"
}






static char *
ngx_http_disable_symlinks(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
{
    ngx_http_core_loc_conf_t *clcf = conf;

    ngx_str_t *value;
    ngx_uint_t i;
    ngx_http_compile_complex_value_t ccv;

    if (clcf->disable_symlinks != 
# 5049 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 (ngx_uint_t) -1
# 5049 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ) {
        return "is duplicate";
    }

    value = cf->args->elts;

    for (i = 1; i < cf->args->nelts; i++) {

        if (
# 5057 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 5057 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 5057 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 5057 "project/nginx/src/http/ngx_http_core_module.c"
           "off"
# 5057 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 5057 "project/nginx/src/http/ngx_http_core_module.c"
                                            == 0) {
            clcf->disable_symlinks = 
# 5058 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    0
# 5058 "project/nginx/src/http/ngx_http_core_module.c"
                                                            ;
            continue;
        }

        if (
# 5062 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 5062 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 5062 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 5062 "project/nginx/src/http/ngx_http_core_module.c"
           "if_not_owner"
# 5062 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 5062 "project/nginx/src/http/ngx_http_core_module.c"
                                                     == 0) {
            clcf->disable_symlinks = 
# 5063 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    2
# 5063 "project/nginx/src/http/ngx_http_core_module.c"
                                                                 ;
            continue;
        }

        if (
# 5067 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strcmp((const char *) 
# 5067 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 5067 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 5067 "project/nginx/src/http/ngx_http_core_module.c"
           "on"
# 5067 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 5067 "project/nginx/src/http/ngx_http_core_module.c"
                                           == 0) {
            clcf->disable_symlinks = 
# 5068 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    1
# 5068 "project/nginx/src/http/ngx_http_core_module.c"
                                                           ;
            continue;
        }

        if (
# 5072 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           strncmp((const char *) 
# 5072 "project/nginx/src/http/ngx_http_core_module.c"
           value[i].data
# 5072 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , (const char *) 
# 5072 "project/nginx/src/http/ngx_http_core_module.c"
           "from="
# 5072 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 
# 5072 "project/nginx/src/http/ngx_http_core_module.c"
           5
# 5072 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           ) 
# 5072 "project/nginx/src/http/ngx_http_core_module.c"
                                                  == 0) {
            value[i].len -= 5;
            value[i].data += 5;

            
# 5076 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           (void) __builtin___memset_chk (
# 5076 "project/nginx/src/http/ngx_http_core_module.c"
           &ccv
# 5076 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 0, 
# 5076 "project/nginx/src/http/ngx_http_core_module.c"
           sizeof(ngx_http_compile_complex_value_t)
# 5076 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , __builtin_object_size (
# 5076 "project/nginx/src/http/ngx_http_core_module.c"
           &ccv
# 5076 "project/nginx/src/http/ngx_http_core_module.c" 3 4
           , 0))
# 5076 "project/nginx/src/http/ngx_http_core_module.c"
                                                                      ;

            ccv.cf = cf;
            ccv.value = &value[i];
            ccv.complex_value = ngx_palloc(cf->pool,
                                           sizeof(ngx_http_complex_value_t));
            if (ccv.complex_value == 
# 5082 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                    ((void *)0)
# 5082 "project/nginx/src/http/ngx_http_core_module.c"
                                        ) {
                return 
# 5083 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 5083 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            if (ngx_http_compile_complex_value(&ccv) != 
# 5086 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                                       0
# 5086 "project/nginx/src/http/ngx_http_core_module.c"
                                                             ) {
                return 
# 5087 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                      (void *) -1
# 5087 "project/nginx/src/http/ngx_http_core_module.c"
                                    ;
            }

            clcf->disable_symlinks_from = ccv.complex_value;

            continue;
        }

        ngx_conf_log_error(
# 5095 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 5095 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "invalid parameter \"%V\"", &value[i]);
        return 
# 5097 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 5097 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (clcf->disable_symlinks == 
# 5100 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 (ngx_uint_t) -1
# 5100 "project/nginx/src/http/ngx_http_core_module.c"
                                                    ) {
        ngx_conf_log_error(
# 5101 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 5101 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "\"%V\" must have \"off\", \"on\" "
                           "or \"if_not_owner\" parameter",
                           &cmd->name);
        return 
# 5105 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 5105 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (cf->args->nelts == 2) {
        clcf->disable_symlinks_from = 
# 5109 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                     ((void *)0)
# 5109 "project/nginx/src/http/ngx_http_core_module.c"
                                         ;
        return 
# 5110 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              ((void *)0)
# 5110 "project/nginx/src/http/ngx_http_core_module.c"
                         ;
    }

    if (clcf->disable_symlinks_from == 
# 5113 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                      (void *) -1
# 5113 "project/nginx/src/http/ngx_http_core_module.c"
                                                        ) {
        ngx_conf_log_error(
# 5114 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 5114 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "duplicate parameters \"%V %V\"",
                           &value[1], &value[2]);
        return 
# 5117 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 5117 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (clcf->disable_symlinks == 
# 5120 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                                 0
# 5120 "project/nginx/src/http/ngx_http_core_module.c"
                                                         ) {
        ngx_conf_log_error(
# 5121 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 5121 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "\"from=\" cannot be used with \"off\" parameter");
        return 
# 5123 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 5123 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    return 
# 5126 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 5126 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}




static char *
ngx_http_core_lowat_check(ngx_conf_t *cf, void *post, void *data)
{
# 5157 "project/nginx/src/http/ngx_http_core_module.c"
    return 
# 5157 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 5157 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}


static char *
ngx_http_core_pool_size(ngx_conf_t *cf, void *post, void *data)
{
    size_t *sp = data;

    if (*sp < 
# 5166 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             ((((sizeof(ngx_pool_t) + 2 * sizeof(ngx_pool_large_t))) + (16 - 1)) & ~(16 - 1))
# 5166 "project/nginx/src/http/ngx_http_core_module.c"
                              ) {
        ngx_conf_log_error(
# 5167 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 5167 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "the pool size must be no less than %uz",
                           
# 5169 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          ((((sizeof(ngx_pool_t) + 2 * sizeof(ngx_pool_large_t))) + (16 - 1)) & ~(16 - 1))
# 5169 "project/nginx/src/http/ngx_http_core_module.c"
                                           );
        return 
# 5170 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 5170 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    if (*sp % 
# 5173 "project/nginx/src/http/ngx_http_core_module.c" 3 4
             16
# 5173 "project/nginx/src/http/ngx_http_core_module.c"
                               ) {
        ngx_conf_log_error(
# 5174 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          1
# 5174 "project/nginx/src/http/ngx_http_core_module.c"
                                       , cf, 0,
                           "the pool size must be a multiple of %uz",
                           
# 5176 "project/nginx/src/http/ngx_http_core_module.c" 3 4
                          16
# 5176 "project/nginx/src/http/ngx_http_core_module.c"
                                            );
        return 
# 5177 "project/nginx/src/http/ngx_http_core_module.c" 3 4
              (void *) -1
# 5177 "project/nginx/src/http/ngx_http_core_module.c"
                            ;
    }

    return 
# 5180 "project/nginx/src/http/ngx_http_core_module.c" 3 4
          ((void *)0)
# 5180 "project/nginx/src/http/ngx_http_core_module.c"
                     ;
}
