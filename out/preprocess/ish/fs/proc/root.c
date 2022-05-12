# 0 "project/ish/fs/proc/root.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/fs/proc/root.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
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
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
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
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 2 3 4

struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
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




# 2 "project/ish/fs/proc/root.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 226 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4
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







# 3 "project/ish/fs/proc/root.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4




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






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 2 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 4 "project/ish/fs/proc/root.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 1



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 1 3 4
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 1 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/pthread_impl.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/sched.h" 2 3 4






struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);

# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4





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



# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE = 0x21, QOS_CLASS_USER_INITIATED = 0x19, QOS_CLASS_DEFAULT = 0x15, QOS_CLASS_UTILITY = 0x11, QOS_CLASS_BACKGROUND = 0x09, QOS_CLASS_UNSPECIFIED = 0x00, }; typedef unsigned int qos_class_t
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4
 ;
# 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

qos_class_t
qos_class_self(void);
# 192 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/qos.h" 3 4

qos_class_t
qos_class_main(void);


# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 2 3 4







# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 291 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread/qos.h" 3 4

int
pthread_override_qos_class_end_np(pthread_override_t __override);


# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

int pthread_atfork(void (* )(void), void (* )(void),
  void (* )(void));


int pthread_attr_destroy(pthread_attr_t *);


int pthread_attr_getdetachstate(const pthread_attr_t *, int *);


int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);


int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getstack(const pthread_attr_t * restrict,
  void * * restrict, size_t * restrict);


int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
  void * * restrict);


int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_init(pthread_attr_t *);


int pthread_attr_setdetachstate(pthread_attr_t *, int);


int pthread_attr_setguardsize(pthread_attr_t *, size_t);


int pthread_attr_setinheritsched(pthread_attr_t *, int);


int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);


int pthread_attr_setschedpolicy(pthread_attr_t *, int);


int pthread_attr_setscope(pthread_attr_t *, int);


int pthread_attr_setstack(pthread_attr_t *, void *, size_t);


int pthread_attr_setstackaddr(pthread_attr_t *, void *);


int pthread_attr_setstacksize(pthread_attr_t *, size_t);


int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );


int pthread_cond_broadcast(pthread_cond_t *);


int pthread_cond_destroy(pthread_cond_t *);


int pthread_cond_init(
  pthread_cond_t * restrict,
  const pthread_condattr_t * restrict)
  __asm("_" "pthread_cond_init" );


int pthread_cond_signal(pthread_cond_t *);


int pthread_cond_timedwait(
  pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict)
  __asm("_" "pthread_cond_timedwait" );


int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );


int pthread_condattr_destroy(pthread_condattr_t *);


int pthread_condattr_init(pthread_condattr_t *);


int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);


int pthread_condattr_setpshared(pthread_condattr_t *, int);



int pthread_create(pthread_t * restrict,
  const pthread_attr_t * restrict,
  void * (* )(void * ),
  void * restrict);







int pthread_detach(pthread_t);


int pthread_equal(pthread_t , pthread_t );


void pthread_exit(void * ) __attribute__((__noreturn__));


int pthread_getconcurrency(void);


int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);


void* pthread_getspecific(pthread_key_t);


int pthread_join(pthread_t , void * * )
  __asm("_" "pthread_join" );


int pthread_key_create(pthread_key_t *, void (* )(void *));


int pthread_key_delete(pthread_key_t);


int pthread_mutex_destroy(pthread_mutex_t *);


int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);


int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);


int pthread_mutex_lock(pthread_mutex_t *);


int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);


int pthread_mutex_trylock(pthread_mutex_t *);


int pthread_mutex_unlock(pthread_mutex_t *);


int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );


int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
  int * restrict);


int pthread_mutexattr_init(pthread_mutexattr_t *);


int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);


int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);


int pthread_mutexattr_settype(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);



int pthread_once(pthread_once_t *, void (* )(void));


int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );


int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict)
  __asm("_" "pthread_rwlock_init" );


int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );


int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );


int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );


int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );


int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );


int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);


int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);


int pthread_rwlockattr_init(pthread_rwlockattr_t *);


int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);


pthread_t pthread_self(void);


int pthread_setcancelstate(int , int * )
  __asm("_" "pthread_setcancelstate" );


int pthread_setcanceltype(int , int * )
  __asm("_" "pthread_setcanceltype" );


int pthread_setconcurrency(int);


int pthread_setschedparam(pthread_t, int, const struct sched_param *);


int pthread_setspecific(pthread_key_t , const void * );


void pthread_testcancel(void) __asm("_" "pthread_testcancel" );





int pthread_is_threaded_np(void);


int pthread_threadid_np(pthread_t ,__uint64_t* );



int pthread_getname_np(pthread_t,char*,size_t);


int pthread_setname_np(const char*);



int pthread_main_np(void);



mach_port_t pthread_mach_thread_np(pthread_t);


size_t pthread_get_stacksize_np(pthread_t);


void* pthread_get_stackaddr_np(pthread_t);



int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );



int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec * );




int pthread_create_suspended_np(
  pthread_t * , const pthread_attr_t * ,
  void * (* )(void * ), void * );






int pthread_kill(pthread_t, int);


 pthread_t pthread_from_mach_thread_np(mach_port_t);


int pthread_sigmask(int, const sigset_t * , sigset_t * )
  __asm("_" "pthread_sigmask" );


void pthread_yield_np(void);



void pthread_jit_write_protect_np(int enabled);



int pthread_jit_write_protect_supported_np(void);
# 582 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4

int
pthread_cpu_number_np(size_t *cpu_number_out);



# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 1



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 1






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
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



typedef u_int32_t fixpt_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
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
# 232 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
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
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/mmu.h" 1






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
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/mm.h" 1



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h" 1



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdatomic.h" 1 3 4
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdatomic.h" 3 4

# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdatomic.h" 3 4
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;


typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic unsigned int atomic_char32_t;
typedef _Atomic int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic int atomic_int_least32_t;
typedef _Atomic unsigned int atomic_uint_least32_t;
typedef _Atomic long long int atomic_int_least64_t;
typedef _Atomic long long unsigned int atomic_uint_least64_t;
typedef _Atomic signed char atomic_int_fast8_t;
typedef _Atomic unsigned char atomic_uint_fast8_t;
typedef _Atomic short int atomic_int_fast16_t;
typedef _Atomic short unsigned int atomic_uint_fast16_t;
typedef _Atomic int atomic_int_fast32_t;
typedef _Atomic unsigned int atomic_uint_fast32_t;
typedef _Atomic long long int atomic_int_fast64_t;
typedef _Atomic long long unsigned int atomic_uint_fast64_t;
typedef _Atomic long int atomic_intptr_t;
typedef _Atomic long unsigned int atomic_uintptr_t;
typedef _Atomic long unsigned int atomic_size_t;
typedef _Atomic long int atomic_ptrdiff_t;
typedef _Atomic long int atomic_intmax_t;
typedef _Atomic long unsigned int atomic_uintmax_t;
# 92 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdatomic.h" 3 4
extern void atomic_thread_fence (memory_order);

extern void atomic_signal_fence (memory_order);
# 218 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdatomic.h" 3 4
typedef _Atomic struct
{

  _Bool __val;



} atomic_flag;




extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);


extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);



extern void atomic_flag_clear (volatile atomic_flag *);

extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h" 2
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
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4


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
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4



int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)




__asm("_" "pselect" "$1050")




;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" "$1050")




;
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


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


# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h" 2


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 1




# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 2


# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
struct list {
    struct list *next, *prev;
};



static inline void list_init(struct list *list) {
    list->next = list;
    list->prev = list;
}



static inline 
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 3 4
             _Bool 
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
                  list_null(struct list *list) {
    return list->next == 
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 3 4
                        ((void *)0) 
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
                             && list->prev == 
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 3 4
                                              ((void *)0)
# 21 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
                                                  ;
}

static inline 
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 3 4
             _Bool 
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
                  list_empty(struct list *list) {
    return list->next == list || list_null(list);
}

static inline void _list_add_between(struct list *prev, struct list *next, struct list *item) {
    prev->next = item;
    item->prev = prev;
    item->next = next;
    next->prev = item;
}

static inline void list_add_tail(struct list *list, struct list *item) {
    _list_add_between(list->prev, list, item);
}

static inline void list_add(struct list *list, struct list *item) {
    _list_add_between(list, list->next, item);
}

static inline void list_add_before(struct list *before, struct list *item) {
    list_add_tail(before, item);
}
static inline void list_add_after(struct list *after, struct list *item) {
    list_add(after, item);
}

static inline void list_init_add(struct list *list, struct list *item) {
    if (list_null(list))
        list_init(list);
    list_add(list, item);
}

static inline void list_remove(struct list *item) {
    item->prev->next = item->next;
    item->next->prev = item->prev;
    item->next = item->prev = 
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h" 3 4
                             ((void *)0)
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
                                 ;
}

static inline void list_remove_safe(struct list *item) {
    if (!list_null(item))
        list_remove(item);
}
# 90 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/list.h"
static inline unsigned long list_size(struct list *list) {
    unsigned long count = 0;
    struct list *item;
    for (item = (list)->next; item != (list); item = item->next) {
        count++;
    }
    return count;
}
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 1






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 3 4

# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 3 4
typedef int jmp_buf[((9 * 2) + 3 + 16)];
typedef int sigjmp_buf[((9 * 2) + 3 + 16) + 1];
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/setjmp.h" 3 4

extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int) __attribute__((__noreturn__));


int _setjmp(jmp_buf);
void _longjmp(jmp_buf, int) __attribute__((__noreturn__));
int sigsetjmp(sigjmp_buf, int);
void siglongjmp(sigjmp_buf, int) __attribute__((__noreturn__));



void longjmperror(void);


# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h" 1


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
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








# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h" 2


# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h"
void ish_printk(const char *msg, ...);
void ish_vprintk(const char *msg, va_list args);
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/ish/debug.h"
extern void (*die_handler)(const char *msg);
_Noreturn void die(const char *msg, ...);
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 2





typedef struct {
    pthread_mutex_t m;
    pthread_t owner;
# 26 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
} lock_t;

static inline void lock_init(lock_t *lock) {
    pthread_mutex_init(&lock->m, 
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                                ((void *)0)
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                                    );





}






static inline void __lock(lock_t *lock, __attribute__((unused)) const char *file, __attribute__((unused)) int line) {
    pthread_mutex_lock(&lock->m);
    lock->owner = pthread_self();
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
}

static inline void unlock(lock_t *lock) {





    lock->owner = ((pthread_t[1]){}[0]);
    pthread_mutex_unlock(&lock->m);
}

static inline int trylock(lock_t *lock, __attribute__((unused)) const char *file, __attribute__((unused)) int line) {
    int status = pthread_mutex_trylock(&lock->m);
# 75 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
    return status;
}





typedef struct {
    pthread_cond_t cond;
} cond_t;



void cond_init(cond_t *cond);

void cond_destroy(cond_t *cond);




int __attribute__((warn_unused_result)) wait_for(cond_t *cond, lock_t *lock, struct timespec *timeout);

int wait_for_ignore_signals(cond_t *cond, lock_t *lock, struct timespec *timeout);

void notify(cond_t *cond);

void notify_once(cond_t *cond);





typedef struct {
    pthread_rwlock_t l;



    atomic_int val;
    const char *file;
    int line;
    int pid;
} wrlock_t;
static inline void wrlock_init(wrlock_t *lock) {
    pthread_rwlockattr_t *pattr = 
# 118 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                                 ((void *)0)
# 118 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                                     ;






    if (pthread_rwlock_init(&lock->l, pattr)) __builtin_trap();
    lock->val = lock->line = lock->pid = 0;
    lock->file = 
# 127 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                ((void *)0)
# 127 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                    ;
}

extern int current_pid(void);
static inline void wrlock_destroy(wrlock_t *lock) {
    if (pthread_rwlock_destroy(&lock->l) != 0) __builtin_trap();
}
static inline void read_wrlock(wrlock_t *lock) {
    if (pthread_rwlock_rdlock(&lock->l) != 0) __builtin_trap();
    
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   (__builtin_expect(!(
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   lock->val >= 0
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h", 136, 
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   "lock->val >= 0"
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ) : (void)0)
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                         ;
    lock->val++;
}
static inline void read_wrunlock(wrlock_t *lock) {
    
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   (__builtin_expect(!(
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   lock->val > 0
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h", 140, 
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   "lock->val > 0"
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ) : (void)0)
# 140 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                        ;
    lock->val--;
    if (pthread_rwlock_unlock(&lock->l) != 0) __builtin_trap();
}
static inline void __write_wrlock(wrlock_t *lock, const char *file, int line) {
    if (pthread_rwlock_wrlock(&lock->l) != 0) __builtin_trap();
    
# 146 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   (__builtin_expect(!(
# 146 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   lock->val == 0
# 146 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h", 146, 
# 146 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   "lock->val == 0"
# 146 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ) : (void)0)
# 146 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                         ;
    lock->val = -1;
    lock->file = file;
    lock->line = line;
    lock->pid = current_pid();
}

static inline void write_wrunlock(wrlock_t *lock) {
    
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   (__builtin_expect(!(
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   lock->val == -1
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h", 154, 
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
   "lock->val == -1"
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
   ) : (void)0)
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                          ;
    lock->val = lock->line = lock->pid = 0;
    lock->file = 
# 156 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                ((void *)0)
# 156 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                    ;
    if (pthread_rwlock_unlock(&lock->l) != 0) __builtin_trap();
}

extern __thread sigjmp_buf unwind_buf;
extern __thread 
# 161 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
               _Bool 
# 161 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                    should_unwind;
static inline int sigunwind_start() {
    if (sigsetjmp(unwind_buf, 1)) {
        should_unwind = 
# 164 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                       0
# 164 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                            ;
        return 1;
    } else {
        should_unwind = 
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                       1
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                           ;
        return 0;
    }
}
static inline void sigunwind_end() {
    should_unwind = 
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h" 3 4
                   0
# 172 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/sync.h"
                        ;
}
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h" 2





struct mem {
    struct pt_entry **pgdir;
    int pgdir_used;




    struct mmu mmu;

    wrlock_t lock;
};




void mem_init(struct mem *mem);

void mem_destroy(struct mem *mem);

struct pt_entry *mem_pt(struct mem *mem, page_t page);


void mem_next_page(struct mem *mem, page_t *page);






struct data {
    void *data;
    size_t size;
    atomic_uint refcount;


    struct fd *fd;
    size_t file_offset;
    const char *name;




};
struct pt_entry {
    struct data *data;
    size_t offset;
    unsigned flags;



};
# 82 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h"

# 82 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h" 3 4
_Bool 
# 82 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/memory.h"
    pt_is_hole(struct mem *mem, page_t start, pages_t pages);
page_t pt_find_hole(struct mem *mem, pages_t size);




int pt_map(struct mem *mem, page_t start, pages_t pages, void *memory, size_t offset, unsigned flags);

int pt_map_nothing(struct mem *mem, page_t page, pages_t pages, unsigned flags);

int pt_unmap(struct mem *mem, page_t start, pages_t pages);

int pt_unmap_always(struct mem *mem, page_t start, pages_t pages);

int pt_set_flags(struct mem *mem, page_t start, pages_t pages, int flags);

int pt_copy_on_write(struct mem *src, struct mem *dst, page_t start, page_t pages);


void *mem_ptr(struct mem *mem, addr_t addr, int type);
int mem_segv_reason(struct mem *mem, addr_t addr);

extern size_t real_page_size;
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/mm.h" 2



struct mm {
    atomic_uint refcount;
    struct mem mem;

    addr_t vdso;
    addr_t start_brk;
    addr_t brk;


    addr_t argv_start;
    addr_t argv_end;
    addr_t env_start;
    addr_t env_end;
    addr_t auxv_start;
    addr_t auxv_end;
    addr_t stack_start;
    struct fd *exefile;
};


struct mm *mm_new(void);

struct mm *mm_copy(struct mm *mm);

void mm_retain(struct mm *mem);

void mm_release(struct mm *mem);
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 1





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/stat.h" 1





struct statbuf {
    qword_t dev;
    qword_t inode;
    dword_t mode;
    dword_t nlink;
    dword_t uid;
    dword_t gid;
    qword_t rdev;
    qword_t size;
    dword_t blksize;
    qword_t blocks;
    dword_t atime;
    dword_t atime_nsec;
    dword_t mtime;
    dword_t mtime_nsec;
    dword_t ctime;
    dword_t ctime_nsec;
};

struct oldstat {
    word_t dev;
    word_t ino;
    word_t mode;
    word_t nlink;
    word_t uid;
    word_t gid;
    word_t rdev;
    uint_t size;
    uint_t atime;
    uint_t mtime;
    uint_t ctime;
};

struct newstat {
    dword_t dev;
    dword_t ino;
    word_t mode;
    word_t nlink;
    word_t uid;
    word_t gid;
    dword_t rdev;
    dword_t size;
    dword_t blksize;
    dword_t blocks;
    dword_t atime;
    dword_t atime_nsec;
    dword_t mtime;
    dword_t mtime_nsec;
    dword_t ctime;
    dword_t ctime_nsec;
    char pad[8];
};

struct newstat64 {
    qword_t dev;
    dword_t _pad1;
    dword_t fucked_ino;
    dword_t mode;
    dword_t nlink;
    dword_t uid;
    dword_t gid;
    qword_t rdev;
    dword_t _pad2;
    qword_t size;
    dword_t blksize;
    qword_t blocks;
    dword_t atime;
    dword_t atime_nsec;
    dword_t mtime;
    dword_t mtime_nsec;
    dword_t ctime;
    dword_t ctime_nsec;
    qword_t ino;
} __attribute__((packed));

struct statfsbuf {
    long type;
    long bsize;
    uint64_t blocks;
    uint64_t bfree;
    uint64_t bavail;
    uint64_t files;
    uint64_t ffree;
    uint64_t fsid;
    long namelen;
    long frsize;
    long flags;
    long spare[4];
};

struct statfs_ {
    uint_t type;
    uint_t bsize;
    uint_t blocks;
    uint_t bfree;
    uint_t bavail;
    uint_t files;
    uint_t ffree;
    uint64_t fsid;
    uint_t namelen;
    uint_t frsize;
    uint_t flags;
    uint_t spare[4];
} __attribute__((packed));

struct statfs64_ {
    uint_t type;
    uint_t bsize;
    uint64_t blocks;
    uint64_t bfree;
    uint64_t bavail;
    uint64_t files;
    uint64_t ffree;
    uint64_t fsid;
    uint_t namelen;
    uint_t frsize;
    uint_t flags;
    uint_t pad[4];
} __attribute__((packed));
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 1







# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fd.h" 1


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 1 3 4
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack(4)
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack()
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4

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


# 4 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fd.h" 2



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/bits.h" 1




# 4 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/bits.h"
typedef void bits_t;


static inline 
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/bits.h" 3 4
             _Bool 
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/bits.h"
                  bit_test(size_t i, bits_t *data) {
    char *c = data;
    return c[i >> 3] & (1 << (i & 7)) ? 1 : 0;
}

static inline void bit_set(size_t i, bits_t *data) {
    char *c = data;
    c[i >> 3] |= 1 << (i & 7);
}

static inline void bit_clear(size_t i, bits_t *data) {
    char *c = data;
    c[i >> 3] &= ~(1 << (i & 7));
}
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fd.h" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/proc.h" 1






struct proc_entry {
    struct proc_dir_entry *meta;
    pid_t_ pid;
    sdword_t fd;
};

struct proc_data {
    char *data;
    size_t size;
    size_t capacity;
};

struct proc_dir_entry {
    const char *name;
    mode_t_ mode;


    void (*getname)(struct proc_entry *entry, char *buf);


    int (*show)(struct proc_entry *entry, struct proc_data *data);


    int (*readlink)(struct proc_entry *entry, char *buf);


    struct proc_dir_entry *children;
    size_t children_sizeof;


    
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/proc.h" 3 4
   _Bool 
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/proc.h"
        (*readdir)(struct proc_entry *entry, unsigned long *index, struct proc_entry *next_entry);

    struct proc_dir_entry *parent;
    int inode;
};

extern struct proc_dir_entry proc_root;
extern struct proc_dir_entry proc_pid;

mode_t_ proc_entry_mode(struct proc_entry *entry);
void proc_entry_getname(struct proc_entry *entry, char *buf);
int proc_entry_stat(struct proc_entry *entry, struct statbuf *stat);


# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/proc.h" 3 4
_Bool 
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/proc.h"
    proc_dir_read(struct proc_entry *entry, unsigned long *index, struct proc_entry *next_entry);

void proc_buf_write(struct proc_data *buf, const void *data, size_t size);
void proc_printf(struct proc_data *buf, const char *format, ...);
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fd.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sockrestart.h" 1
# 17 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sockrestart.h"
struct fd;

void sockrestart_begin_listen(struct fd *sock);
void sockrestart_end_listen(struct fd *sock);
void sockrestart_begin_listen_wait(struct fd *sock);
void sockrestart_end_listen_wait(struct fd *sock);

# 23 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sockrestart.h" 3 4
_Bool 
# 23 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sockrestart.h"
    sockrestart_should_restart_listen_wait(void);
void sockrestart_on_suspend(void);
void sockrestart_on_resume(void);

struct fd_sockrestart {
    struct list listen;
};

struct task_sockrestart {
    int count;
    
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sockrestart.h" 3 4
   _Bool 
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sockrestart.h"
        punt;
    struct list listen;
};
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fd.h" 2



struct fd {
    atomic_uint refcount;
    unsigned flags;
    mode_t_ type;
    const struct fd_ops *ops;
    struct list poll_fds;
    lock_t poll_lock;
    unsigned long offset;


    union {

        struct {
            struct tty *tty;


            struct list tty_other_fds;
        };
        struct {
            struct poll *poll;
        } epollfd;
        struct {
            uint64_t val;
        } eventfd;
        struct {
            struct timer *timer;
            uint64_t expirations;
        } timerfd;
        struct {
            int domain;
            int type;
            int protocol;



            struct inode_data *unix_name_inode;
            struct unix_abstract *unix_name_abstract;
            uint8_t unix_name_len;
            char unix_name[108];
            struct fd *unix_peer;
            cond_t unix_got_peer;


            struct list unix_scm;
            struct ucred_ {
                pid_t_ pid;
                uid_t_ uid;
                uid_t_ gid;
            } unix_cred;
        } socket;


        struct {

            uint64_t generation;

            void* buffer;

            size_t buffer_cap;

            size_t buffer_len;
        } clipboard;


        void *data;
    };

    union {
        struct {
            struct proc_entry entry;
            unsigned dir_index;
            struct proc_data data;
        } proc;
        struct {
            int num;
        } devpts;
        struct {
            struct tmp_dirent *dirent;
            struct tmp_dirent *dir_pos;
        } tmpfs;
        void *fs_data;
    };


    struct mount *mount;
    int real_fd;
    DIR *dir;
    struct inode_data *inode;
    ino_t fake_inode;
    struct statbuf stat;
    struct fd_sockrestart sockrestart;


    lock_t lock;
    cond_t cond;
};

typedef sdword_t fd_t;


struct fd *fd_create(const struct fd_ops *ops);
struct fd *fd_retain(struct fd *fd);
int fd_close(struct fd *fd);

int fd_getflags(struct fd *fd);
int fd_setflags(struct fd *fd, int flags);


struct dir_entry {
    qword_t inode;
    char name[255 + 1];
};





struct fd_ops {


    ssize_t (*read)(struct fd *fd, void *buf, size_t bufsize);
    ssize_t (*write)(struct fd *fd, const void *buf, size_t bufsize);
    ssize_t (*pread)(struct fd *fd, void *buf, size_t bufsize, off_t off);
    ssize_t (*pwrite)(struct fd *fd, const void *buf, size_t bufsize, off_t off);
    off_t_ (*lseek)(struct fd *fd, off_t_ off, int whence);



    int (*readdir)(struct fd *fd, struct dir_entry *entry);


    unsigned long (*telldir)(struct fd *fd);


    void (*seekdir)(struct fd *fd, unsigned long ptr);


    int (*mmap)(struct fd *fd, struct mem *mem, page_t start, pages_t pages, off_t offset, int prot, int flags);


    int (*poll)(struct fd *fd);



    ssize_t (*ioctl_size)(int cmd);

    int (*ioctl)(struct fd *fd, int cmd, void *arg);

    int (*fsync)(struct fd *fd);
    int (*close)(struct fd *fd);


    int (*getflags)(struct fd *fd);

    int (*setflags)(struct fd *fd, dword_t arg);
};

struct fdtable {
    atomic_uint refcount;
    unsigned size;
    struct fd **files;
    bits_t *cloexec;
    lock_t lock;
};

struct fdtable *fdtable_new(int size);
void fdtable_release(struct fdtable *table);
struct fdtable *fdtable_copy(struct fdtable *table);
void fdtable_free(struct fdtable *table);
void fdtable_do_cloexec(struct fdtable *table);
struct fd *fdtable_get(struct fdtable *table, fd_t f);

struct fd *f_get(fd_t f);


fd_t f_install(struct fd *fd, int flags);
int f_close(fd_t f);
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 2





typedef uint32_t dev_t_;

static inline dev_t_ dev_make(int major, int minor) {
    return ((minor & 0xfff00) << 12) | (major << 8) | (minor & 0xff);
}
static inline int dev_major(dev_t_ dev) {
    return (dev & 0xfff00) >> 8;
}
static inline int dev_minor(dev_t_ dev) {
    return ((dev & 0xfff00000) >> 12) | (dev & 0xff);
}

static inline dev_t dev_real_from_fake(dev_t_ dev) {
    return 
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
          ((dev_t)(((
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
          dev_major(dev)
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
          ) << 24) | (
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
          dev_minor(dev)
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
          )))
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
                                                 ;
}
static inline dev_t_ dev_fake_from_real(dev_t dev) {
    return dev_make(
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
                   ((int32_t)(((u_int32_t)(
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
                   dev
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
                   ) >> 24) & 0xff))
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
                             , 
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
                               ((int32_t)((
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
                               dev
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h" 3 4
                               ) & 0xffffff))
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/dev.h"
                                         );
}




struct dev_ops {
    int (*open)(int major, int minor, struct fd *fd);
    struct fd_ops fd;
};

extern struct dev_ops *block_devs[];
extern struct dev_ops *char_devs[];

int dev_open(int major, int minor, int type, struct fd *fd);

extern struct dev_ops null_dev;
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4

# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 2 3 4
# 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 extern const char sqlite3_version[];
 const char *sqlite3_libversion(void);


 const char *sqlite3_sourceid(void);

 int sqlite3_libversion_number(void);
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_compileoption_used(const char *zOptName);


 const char *sqlite3_compileoption_get(int N);
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_threadsafe(void);
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3 sqlite3;
# 292 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;

typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
# 336 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_close(sqlite3*);


 int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
# 410 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
# 692 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
# 791 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (*xClose)(sqlite3_file*);
  int (*xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (*xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (*xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (*xSync)(sqlite3_file*, int flags);
  int (*xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (*xLock)(sqlite3_file*, int);
  int (*xUnlock)(sqlite3_file*, int);
  int (*xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (*xFileControl)(sqlite3_file*, int op, void *pArg);
  int (*xSectorSize)(sqlite3_file*);
  int (*xDeviceCharacteristics)(sqlite3_file*);

  int (*xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (*xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (*xShmBarrier)(sqlite3_file*);
  int (*xShmUnmap)(sqlite3_file*, int deleteFlag);

  int (*xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (*xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);


};
# 1195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_mutex sqlite3_mutex;
# 1205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_api_routines sqlite3_api_routines;
# 1376 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (*xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (*xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (*xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (*xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(*xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (*xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (*(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (*xDlClose)(sqlite3_vfs*, void*);
  int (*xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (*xSleep)(sqlite3_vfs*, int microseconds);
  int (*xCurrentTime)(sqlite3_vfs*, double*);
  int (*xGetLastError)(sqlite3_vfs*, int, char *);




  int (*xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);




  int (*xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (*xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(*xNextSystemCall)(sqlite3_vfs*, const char *zName);





};
# 1554 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_initialize(void);
 int sqlite3_shutdown(void);
 int sqlite3_os_init(void);
 int sqlite3_os_end(void);
# 1590 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_config(int, ...);
# 1609 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_db_config(sqlite3*, int op, ...);
# 1674 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(*xMalloc)(int);
  void (*xFree)(void*);
  void *(*xRealloc)(void*,int);
  int (*xSize)(void*);
  int (*xRoundup)(int);
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  void *pAppData;
};
# 2329 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_extended_result_codes(sqlite3*, int onoff);
# 2391 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
# 2401 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
# 2459 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_changes(sqlite3*);
# 2496 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_total_changes(sqlite3*);
# 2533 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void sqlite3_interrupt(sqlite3*);
# 2568 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_complete(const char *sql);
 int sqlite3_complete16(const void *sql);
# 2630 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_busy_handler(sqlite3*,int(*)(void*,int),void*);
# 2653 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_busy_timeout(sqlite3*, int ms);
# 2728 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
 void sqlite3_free_table(char **result);
# 2778 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 char *sqlite3_mprintf(const char*,...);
 char *sqlite3_vmprintf(const char*, va_list);
 char *sqlite3_snprintf(int,char*,const char*, ...);


 char *sqlite3_vsnprintf(int,char*,const char*, va_list);
# 2860 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void *sqlite3_malloc(int);


 void *sqlite3_malloc64(sqlite3_uint64);

 void *sqlite3_realloc(void*, int);


 void *sqlite3_realloc64(void*, sqlite3_uint64);

 void sqlite3_free(void*);


 sqlite3_uint64 sqlite3_msize(void*);
# 2898 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_int64 sqlite3_memory_used(void);
 sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
# 2922 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void sqlite3_randomness(int N, void *P);
# 3013 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
# 3121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void *sqlite3_trace(
  sqlite3*,
  void(*xTrace)(void*,const char*),
  void*
);


 void *sqlite3_profile(
  sqlite3*,
  void(*xProfile)(void*,const char*,sqlite3_uint64),
  void*
);
# 3221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(*xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
# 3261 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
# 3512 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
 int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
 int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
# 3593 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam);


 int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);


 sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);


 const char *sqlite3_uri_key(const char *zFilename, int N);
# 3632 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 const char *sqlite3_filename_database(const char*);


 const char *sqlite3_filename_journal(const char*);


 const char *sqlite3_filename_wal(const char*);
# 3658 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 sqlite3_file *sqlite3_database_file_object(const char*);
# 3706 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 char *sqlite3_create_filename(
  const char *zDatabase,
  const char *zJournal,
  const char *zWal,
  int nParam,
  const char **azParam
);


 void sqlite3_free_filename(char*);
# 3770 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_errcode(sqlite3 *db);
 int sqlite3_extended_errcode(sqlite3 *db);
 const char *sqlite3_errmsg(sqlite3*);
 const void *sqlite3_errmsg16(sqlite3*);


 const char *sqlite3_errstr(int);
# 3802 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_stmt sqlite3_stmt;
# 3844 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_limit(sqlite3*, int id, int newVal);
# 4049 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);


 int sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);

 int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);


 int sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
# 4125 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const char *sqlite3_sql(sqlite3_stmt *pStmt);


 char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);
# 4164 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
# 4177 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_stmt_isexplain(sqlite3_stmt *pStmt);
# 4199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_stmt_busy(sqlite3_stmt*);
# 4242 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_value sqlite3_value;
# 4256 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_context sqlite3_context;
# 4394 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
 int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
 int sqlite3_bind_double(sqlite3_stmt*, int, double);
 int sqlite3_bind_int(sqlite3_stmt*, int, int);
 int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
 int sqlite3_bind_null(sqlite3_stmt*, int);
 int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
 int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
 int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
 int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);


 int sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(*)(void*));

 int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);


 int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
# 4434 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_bind_parameter_count(sqlite3_stmt*);
# 4462 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
# 4480 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
# 4490 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_clear_bindings(sqlite3_stmt*);
# 4506 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_column_count(sqlite3_stmt *pStmt);
# 4535 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const char *sqlite3_column_name(sqlite3_stmt*, int N);
 const void *sqlite3_column_name16(sqlite3_stmt*, int N);
# 4580 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const char *sqlite3_column_database_name(sqlite3_stmt*,int);
 const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_table_name(sqlite3_stmt*,int);
 const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
 const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
# 4617 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const char *sqlite3_column_decltype(sqlite3_stmt*,int);
 const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
# 4702 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_step(sqlite3_stmt*);
# 4723 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_data_count(sqlite3_stmt *pStmt);
# 4966 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
 double sqlite3_column_double(sqlite3_stmt*, int iCol);
 int sqlite3_column_int(sqlite3_stmt*, int iCol);
 sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
 const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
 const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
 sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
 int sqlite3_column_type(sqlite3_stmt*, int iCol);
# 5003 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_finalize(sqlite3_stmt *pStmt);
# 5030 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_reset(sqlite3_stmt *pStmt);
# 5157 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);


 int sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void(*xDestroy)(void*)
);


 int sqlite3_create_window_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void (*xValue)(sqlite3_context*),
  void (*xInverse)(sqlite3_context*,int,sqlite3_value**),
  void(*xDestroy)(void*)
);
# 5298 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_aggregate_count(sqlite3_context*);


 int sqlite3_expired(sqlite3_stmt*);


 int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);


 int sqlite3_global_recover(void);


 void sqlite3_thread_cleanup(void);


 int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
# 5445 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 const void *sqlite3_value_blob(sqlite3_value*);
 double sqlite3_value_double(sqlite3_value*);
 int sqlite3_value_int(sqlite3_value*);
 sqlite3_int64 sqlite3_value_int64(sqlite3_value*);


 void *sqlite3_value_pointer(sqlite3_value*, const char*);

 const unsigned char *sqlite3_value_text(sqlite3_value*);
 const void *sqlite3_value_text16(sqlite3_value*);
 const void *sqlite3_value_text16le(sqlite3_value*);
 const void *sqlite3_value_text16be(sqlite3_value*);
 int sqlite3_value_bytes(sqlite3_value*);
 int sqlite3_value_bytes16(sqlite3_value*);
 int sqlite3_value_type(sqlite3_value*);
 int sqlite3_value_numeric_type(sqlite3_value*);


 int sqlite3_value_nochange(sqlite3_value*);


 int sqlite3_value_frombind(sqlite3_value*);
# 5478 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 unsigned int sqlite3_value_subtype(sqlite3_value*);
# 5495 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 sqlite3_value *sqlite3_value_dup(const sqlite3_value*);


 void sqlite3_value_free(sqlite3_value*);
# 5544 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
# 5559 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void *sqlite3_user_data(sqlite3_context*);
# 5571 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
# 5630 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void *sqlite3_get_auxdata(sqlite3_context*, int N);
 void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
# 5648 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef void (*sqlite3_destructor_type)(void*);
# 5798 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
 void sqlite3_result_double(sqlite3_context*, double);
 void sqlite3_result_error(sqlite3_context*, const char*, int);
 void sqlite3_result_error16(sqlite3_context*, const void*, int);
 void sqlite3_result_error_toobig(sqlite3_context*);
 void sqlite3_result_error_nomem(sqlite3_context*);
 void sqlite3_result_error_code(sqlite3_context*, int);
 void sqlite3_result_int(sqlite3_context*, int);
 void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
 void sqlite3_result_null(sqlite3_context*);
 void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
 void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
 void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_value(sqlite3_context*, sqlite3_value*);


 void sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(*)(void*));

 void sqlite3_result_zeroblob(sqlite3_context*, int n);


 int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
# 5839 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void sqlite3_result_subtype(sqlite3_context*,unsigned int);
# 5923 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
 int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
# 5973 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
 int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);
# 6001 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_sleep(int);
# 6059 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 extern char *sqlite3_temp_directory;
# 6096 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 extern char *sqlite3_data_directory;
# 6121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_get_autocommit(sqlite3*);
# 6134 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
# 6166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName);
# 6177 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
# 6194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
# 6243 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
 void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
# 6295 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 void *sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
# 6340 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_enable_shared_cache(int);
# 6357 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_release_memory(int);
# 6372 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_db_release_memory(sqlite3*);
# 6417 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
# 6429 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void sqlite3_soft_heap_limit(int N);
# 6502 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
# 6550 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_auto_extension(void(*xEntryPoint)(void));
# 6563 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_cancel_auto_extension(void(*xEntryPoint)(void));








 void sqlite3_reset_auto_extension(void);
# 6587 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
# 6608 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
struct sqlite3_module {
  int iVersion;
  int (*xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (*xDisconnect)(sqlite3_vtab *pVTab);
  int (*xDestroy)(sqlite3_vtab *pVTab);
  int (*xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (*xClose)(sqlite3_vtab_cursor*);
  int (*xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (*xNext)(sqlite3_vtab_cursor*);
  int (*xEof)(sqlite3_vtab_cursor*);
  int (*xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (*xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (*xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (*xBegin)(sqlite3_vtab *pVTab);
  int (*xSync)(sqlite3_vtab *pVTab);
  int (*xCommit)(sqlite3_vtab *pVTab);
  int (*xRollback)(sqlite3_vtab *pVTab);
  int (*xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (*xRename)(sqlite3_vtab *pVtab, const char *zNew);


  int (*xSavepoint)(sqlite3_vtab *pVTab, int);
  int (*xRelease)(sqlite3_vtab *pVTab, int);
  int (*xRollbackTo)(sqlite3_vtab *pVTab, int);


  int (*xShadowName)(const char*);
};
# 6748 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
struct sqlite3_index_info {

  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;

  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;

  sqlite3_int64 estimatedRows;

  int idxFlags;

  sqlite3_uint64 colUsed;
};
# 6845 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
 int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
# 6871 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_drop_modules(
  sqlite3 *db,
  const char **azKeep
);
# 6894 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
# 6918 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
# 6931 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
# 6950 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
# 6974 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_blob sqlite3_blob;
# 7059 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
# 7092 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
# 7116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_close(sqlite3_blob *);
# 7132 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_bytes(sqlite3_blob *);
# 7161 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
# 7203 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
# 7234 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
 int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
 int sqlite3_vfs_unregister(sqlite3_vfs*);
# 7350 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_mutex *sqlite3_mutex_alloc(int);
 void sqlite3_mutex_free(sqlite3_mutex*);
 void sqlite3_mutex_enter(sqlite3_mutex*);
 int sqlite3_mutex_try(sqlite3_mutex*);
 void sqlite3_mutex_leave(sqlite3_mutex*);
# 7421 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (*xMutexInit)(void);
  int (*xMutexEnd)(void);
  sqlite3_mutex *(*xMutexAlloc)(int);
  void (*xMutexFree)(sqlite3_mutex *);
  void (*xMutexEnter)(sqlite3_mutex *);
  int (*xMutexTry)(sqlite3_mutex *);
  void (*xMutexLeave)(sqlite3_mutex *);
  int (*xMutexHeld)(sqlite3_mutex *);
  int (*xMutexNotheld)(sqlite3_mutex *);
};
# 7471 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_mutex *sqlite3_db_mutex(sqlite3*);
# 7514 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
# 7533 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_test_control(int op, ...);
# 7623 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_keyword_count(void);


 int sqlite3_keyword_name(int,const char**,int*);


 int sqlite3_keyword_check(const char*,int);
# 7648 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_str sqlite3_str;
# 7675 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 sqlite3_str *sqlite3_str_new(sqlite3*);
# 7691 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 char *sqlite3_str_finish(sqlite3_str*);
# 7726 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void sqlite3_str_appendf(sqlite3_str*, const char *zFormat, ...);


 void sqlite3_str_vappendf(sqlite3_str*, const char *zFormat, va_list);


 void sqlite3_str_append(sqlite3_str*, const char *zIn, int N);


 void sqlite3_str_appendall(sqlite3_str*, const char *zIn);


 void sqlite3_str_appendchar(sqlite3_str*, int N, char C);


 void sqlite3_str_reset(sqlite3_str*);
# 7773 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_str_errcode(sqlite3_str*);


 int sqlite3_str_length(sqlite3_str*);


 char *sqlite3_str_value(sqlite3_str*);
# 7808 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);

 int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
# 7919 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
# 8072 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
# 8148 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_pcache sqlite3_pcache;
# 8160 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
# 8325 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int szExtra, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (*xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
  void (*xShrink)(sqlite3_pcache*);
};






typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  void *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, void*, int discard);
  void (*xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
};
# 8374 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_backup sqlite3_backup;
# 8562 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
 sqlite3_backup *sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
 int sqlite3_backup_step(sqlite3_backup *p, int nPage);
 int sqlite3_backup_finish(sqlite3_backup *p);
 int sqlite3_backup_remaining(sqlite3_backup *p);
 int sqlite3_backup_pagecount(sqlite3_backup *p);
# 8583 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_stricmp(const char *, const char *);


 int sqlite3_strnicmp(const char *, const char *, int);
# 8604 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_strglob(const char *zGlob, const char *zStr);
# 8628 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
# 8651 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void sqlite3_log(int iErrCode, const char *zFormat, ...);
# 8688 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void *sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
# 8724 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
# 8747 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
# 8842 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
# 8883 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_vtab_config(sqlite3*, int op, ...);
# 8962 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_vtab_on_conflict(sqlite3 *);
# 8982 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_vtab_nochange(sqlite3_context*);
# 9088 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
# 9105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# 9138 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_db_cacheflush(sqlite3*);
# 9151 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_system_errno(sqlite3*);
# 9190 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 unsigned char *sqlite3_serialize(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_int64 *piSize,
  unsigned int mFlags
);
# 9243 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_deserialize(
  sqlite3 *db,
  const char *zSchema,
  unsigned char *pData,
  sqlite3_int64 szDb,
  sqlite3_int64 szBuf,
  unsigned mFlags
);
# 9305 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;







  typedef double sqlite3_rtree_dbl;
# 9323 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4

 int sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);






struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void *);
};








 int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
# 9369 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;

  sqlite3_value **apSqlParam;
};
# 9440 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;

typedef void (*fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);

struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
# 9668 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
struct Fts5ExtensionApi {
  int iVersion;

  void *(*xUserData)(Fts5Context*);

  int (*xColumnCount)(Fts5Context*);
  int (*xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (*xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);

  int (*xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (*xToken)(void*, int, const char*, int, int, int)
  );

  int (*xPhraseCount)(Fts5Context*);
  int (*xPhraseSize)(Fts5Context*, int iPhrase);

  int (*xInstCount)(Fts5Context*, int *pnInst);
  int (*xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);

  sqlite3_int64 (*xRowid)(Fts5Context*);
  int (*xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (*xColumnSize)(Fts5Context*, int iCol, int *pnToken);

  int (*xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(*)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (*xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(*xGetAuxdata)(Fts5Context*, int bClear);

  int (*xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (*xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);

  int (*xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (*xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
# 9902 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (*xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (*xDelete)(Fts5Tokenizer*);
  int (*xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (*xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};
# 9939 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;


  int (*xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (*xDestroy)(void*)
  );


  int (*xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );


  int (*xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (*xDestroy)(void*)
  );
};
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fix_path.h" 1




# 4 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fix_path.h"
static inline const char *fix_path(const char *path) {
    if (path[0] == '\0')
        return ".";
    if (path[0] == '/')
        path++;
    return path;
}
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 2


struct fakefs_db {
    sqlite3 *db;
    struct {
        sqlite3_stmt *begin;
        sqlite3_stmt *commit;
        sqlite3_stmt *rollback;
        sqlite3_stmt *path_get_inode;
        sqlite3_stmt *path_read_stat;
        sqlite3_stmt *path_create_stat;
        sqlite3_stmt *path_create_path;
        sqlite3_stmt *inode_read_stat;
        sqlite3_stmt *inode_write_stat;
        sqlite3_stmt *path_link;
        sqlite3_stmt *path_unlink;
        sqlite3_stmt *path_rename;
        sqlite3_stmt *path_from_inode;
        sqlite3_stmt *try_cleanup_inode;
    } stmt;
    sqlite3_mutex *lock;
};

int fake_db_init(struct fakefs_db *fs, const char *db_path, int root_fd);
int fake_db_deinit(struct fakefs_db *fs);

void db_begin(struct fakefs_db *fs);
void db_commit(struct fakefs_db *fs);
void db_rollback(struct fakefs_db *fs);


# 36 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 3 4
_Bool 
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h"
    db_exec(struct fakefs_db *fs, sqlite3_stmt *stmt);
void db_reset(struct fakefs_db *fs, sqlite3_stmt *stmt);
void db_exec_reset(struct fakefs_db *fs, sqlite3_stmt *stmt);

struct ish_stat {
    uint32_t mode;
    uint32_t uid;
    uint32_t gid;
    uint32_t rdev;
};

typedef uint64_t inode_t;

inode_t path_get_inode(struct fakefs_db *fs, const char *path);

# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 3 4
_Bool 
# 50 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h"
    path_read_stat(struct fakefs_db *fs, const char *path, struct ish_stat *stat, uint64_t *inode);
inode_t path_create(struct fakefs_db *fs, const char *path, struct ish_stat *stat);

void inode_read_stat(struct fakefs_db *fs, inode_t inode, struct ish_stat *stat);
void inode_write_stat(struct fakefs_db *fs, inode_t inode, struct ish_stat *stat);

void path_link(struct fakefs_db *fs, const char *src, const char *dst);
inode_t path_unlink(struct fakefs_db *fs, const char *path);
void path_rename(struct fakefs_db *fs, const char *src, const char *dst);
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 2



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 1 3 4
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 2

struct fs_info {
    atomic_uint refcount;
    mode_t_ umask;
    struct fd *pwd;
    struct fd *root;
    lock_t lock;
};
struct fs_info *fs_info_new(void);
struct fs_info *fs_info_copy(struct fs_info *fs);
void fs_info_release(struct fs_info *fs);

void fs_chdir(struct fs_info *fs, struct fd *pwd);




struct attr {
    enum attr_type {
        attr_uid,
        attr_gid,
        attr_mode,
        attr_size,
    } type;
    union {
        uid_t_ uid;
        uid_t_ gid;
        mode_t_ mode;
        off_t_ size;
    };
};





struct fd *generic_open(const char *path, int flags, int mode);
struct fd *generic_openat(struct fd *at, const char *path, int flags, int mode);
int generic_getpath(struct fd *fd, char *buf);
int generic_linkat(struct fd *src_at, const char *src_raw, struct fd *dst_at, const char *dst_raw);
int generic_unlinkat(struct fd *at, const char *path);
int generic_rmdirat(struct fd *at, const char *path);
int generic_renameat(struct fd *src_at, const char *src, struct fd *dst_at, const char *dst);
int generic_symlinkat(const char *target, struct fd *at, const char *link);
int generic_mknodat(struct fd *at, const char *path, mode_t_ mode, dev_t_ dev);
int generic_seek(struct fd *fd, off_t_ off, int whence, size_t size);




int generic_accessat(struct fd *dirfd, const char *path, int mode);
int generic_statat(struct fd *at, const char *path, struct statbuf *stat, 
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 3 4
                                                                         _Bool 
# 64 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h"
                                                                              follow_links);
int generic_setattrat(struct fd *at, const char *path, struct attr attr, 
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 3 4
                                                                        _Bool 
# 65 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h"
                                                                             follow_links);
int generic_utime(struct fd *at, const char *path, struct timespec atime, struct timespec mtime, 
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 3 4
                                                                                                _Bool 
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h"
                                                                                                     follow_links);
ssize_t generic_readlinkat(struct fd *at, const char *path, char *buf, size_t bufsize);
int generic_mkdirat(struct fd *at, const char *path, mode_t_ mode);

int access_check(struct statbuf *stat, int check);

struct mount {
    const char *point;
    const char *source;
    const char *info;
    int flags;
    const struct fs_ops *fs;
    unsigned refcount;
    struct list mounts;

    int root_fd;
    union {
        void *data;
        struct fakefs_db fakefs;
    };
};
extern lock_t mounts_lock;


struct mount *mount_find(char *path);
void mount_retain(struct mount *mount);
void mount_release(struct mount *mount);


int do_mount(const struct fs_ops *fs, const char *source, const char *point, const char *info, int flags);
int do_umount(const char *point);
int mount_remove(struct mount *mount);
extern struct list mounts;


# 100 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 3 4
_Bool 
# 100 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h"
    mount_param_flag(const char *info, const char *flag);
# 123 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h"
struct fs_ops {
    const char *name;
    int magic;

    int (*mount)(struct mount *mount);
    int (*umount)(struct mount *mount);
    int (*statfs)(struct mount *mount, struct statfsbuf *stat);

    struct fd *(*open)(struct mount *mount, const char *path, int flags, int mode);
    ssize_t (*readlink)(struct mount *mount, const char *path, char *buf, size_t bufsize);


    int (*link)(struct mount *mount, const char *src, const char *dst);
    int (*unlink)(struct mount *mount, const char *path);
    int (*rmdir)(struct mount *mount, const char *path);
    int (*rename)(struct mount *mount, const char *src, const char *dst);
    int (*symlink)(struct mount *mount, const char *target, const char *link);
    int (*mknod)(struct mount *mount, const char *path, mode_t_ mode, dev_t_ dev);
    int (*mkdir)(struct mount *mount, const char *path, mode_t_ mode);





    int (*close)(struct fd *fd);

    int (*stat)(struct mount *mount, const char *path, struct statbuf *stat);
    int (*fstat)(struct fd *fd, struct statbuf *stat);
    int (*setattr)(struct mount *mount, const char *path, struct attr attr);
    int (*fsetattr)(struct fd *fd, struct attr attr);
    int (*utime)(struct mount *mount, const char *path, struct timespec atime, struct timespec mtime);

    int (*getpath)(struct fd *fd, char *buf);

    int (*flock)(struct fd *fd, int operation);



    void (*inode_orphaned)(struct mount *mount, ino_t inode);
};

struct mount *find_mount_and_trim_path(char *path);


struct fd *adhoc_fd_create(const struct fd_ops *ops);


# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h" 3 4
_Bool 
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/fs.h"
    is_adhoc_fd(struct fd *fd);


extern const struct fs_ops procfs;
extern const struct fs_ops fakefs;
extern const struct fs_ops devptsfs;
extern const struct fs_ops tmpfs;
void fs_register(const struct fs_ops *fs);
# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h" 1






struct task;

typedef qword_t sigset_t_;
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
struct sigaction_ {
    addr_t handler;
    dword_t flags;
    addr_t restorer;
    sigset_t_ mask;
} __attribute__((packed));
# 69 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
union sigval_ {
    int_t sv_int;
    addr_t sv_ptr;
};

struct siginfo_ {
    int_t sig;
    int_t sig_errno;
    int_t code;
    union {
        struct {
            pid_t_ pid;
            uid_t_ uid;
        } kill;
        struct {
            pid_t_ pid;
            uid_t_ uid;
            int_t status;
            clock_t_ utime;
            clock_t_ stime;
        } child;
        struct {
            addr_t addr;
        } fault;
        struct {
            addr_t addr;
            int_t syscall;
        } sigsys;
        struct {
            int_t timer;
            int_t overrun;
            union sigval_ value;
            int_t _private;
        } timer;
    };
};


static const struct siginfo_ SIGINFO_NIL = {
    .code = 128,
};

struct sigqueue {
    struct list queue;
    struct siginfo_ info;
};

struct sigevent_ {
    union sigval_ value;
    int_t signo;
    int_t method;
    pid_t_ tid;
};



void send_signal(struct task *task, int sig, struct siginfo_ info);

void deliver_signal(struct task *task, int sig, struct siginfo_ info);



# 130 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h" 3 4
_Bool 
# 130 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
    try_self_signal(int sig);

int send_group_signal(dword_t pgid, int sig, struct siginfo_ info);


void receive_signals(void);

void sigmask_set_temp(sigset_t_ mask);

struct sighand {
    atomic_uint refcount;
    struct sigaction_ action[64];
    addr_t altstack;
    dword_t altstack_size;
    lock_t lock;
};
struct sighand *sighand_new(void);
struct sighand *sighand_copy(struct sighand *sighand);
void sighand_release(struct sighand *sighand);

dword_t sys_rt_sigaction(dword_t signum, addr_t action_addr, addr_t oldaction_addr, dword_t sigset_size);
dword_t sys_sigaction(dword_t signum, addr_t action_addr, addr_t oldaction_addr);
dword_t sys_rt_sigreturn(void);
dword_t sys_sigreturn(void);




typedef uint64_t sigset_t_;
dword_t sys_rt_sigprocmask(dword_t how, addr_t set, addr_t oldset, dword_t size);
int_t sys_rt_sigpending(addr_t set_addr);

static inline sigset_t_ sig_mask(int sig) {
    
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h" 3 4
   (__builtin_expect(!(
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
   sig >= 1 && sig < 64
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h" 3 4
   ), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h", 163, 
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
   "sig >= 1 && sig < NUM_SIGS"
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h" 3 4
   ) : (void)0)
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
                                     ;
    return 1l << (sig - 1);
}

static inline 
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h" 3 4
             _Bool 
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/signal.h"
                  sigset_has(sigset_t_ set, int sig) {
    return !!(set & sig_mask(sig));
}
static inline void sigset_add(sigset_t_ *set, int sig) {
    *set |= sig_mask(sig);
}
static inline void sigset_del(sigset_t_ *set, int sig) {
    *set &= ~sig_mask(sig);
}

struct stack_t_ {
    addr_t stack;
    dword_t flags;
    dword_t size;
};



dword_t sys_sigaltstack(addr_t ss, addr_t old_ss);

int_t sys_rt_sigsuspend(addr_t mask_addr, uint_t size);
int_t sys_pause(void);
int_t sys_rt_sigtimedwait(addr_t set_addr, addr_t info_addr, addr_t timeout_addr, uint_t set_size);

dword_t sys_kill(pid_t_ pid, dword_t sig);
dword_t sys_tkill(pid_t_ tid, dword_t sig);
dword_t sys_tgkill(pid_t_ tgid, pid_t_ tid, dword_t sig);




struct sigcontext_ {
    word_t gs, __gsh;
    word_t fs, __fsh;
    word_t es, __esh;
    word_t ds, __dsh;
    dword_t di;
    dword_t si;
    dword_t bp;
    dword_t sp;
    dword_t bx;
    dword_t dx;
    dword_t cx;
    dword_t ax;
    dword_t trapno;
    dword_t err;
    dword_t ip;
    word_t cs, __csh;
    dword_t flags;
    dword_t sp_at_signal;
    word_t ss, __ssh;

    dword_t fpstate;
    dword_t oldmask;
    dword_t cr2;
};

struct ucontext_ {
    uint_t flags;
    uint_t link;
    struct stack_t_ stack;
    struct sigcontext_ mcontext;
    sigset_t_ sigmask;
} __attribute__((packed));

struct fpreg_ {
    word_t significand[4];
    word_t exponent;
};

struct fpxreg_ {
    word_t significand[4];
    word_t exponent;
    word_t padding[3];
};

struct xmmreg_ {
    uint32_t element[4];
};

struct fpstate_ {

    dword_t cw;
    dword_t sw;
    dword_t tag;
    dword_t ipoff;
    dword_t cssel;
    dword_t dataoff;
    dword_t datasel;
    struct fpreg_ st[8];
    word_t status;
    word_t magic;


    dword_t _fxsr_env[6];
    dword_t mxcsr;
    dword_t reserved;
    struct fpxreg_ fxsr_st[8];
    struct xmmreg_ xmm[8];
    dword_t padding[56];
};

struct sigframe_ {
    addr_t restorer;
    dword_t sig;
    struct sigcontext_ sc;
    struct fpstate_ fpstate;
    dword_t extramask;
    char retcode[8];
};

struct rt_sigframe_ {
    addr_t restorer;
    int_t sig;
    addr_t pinfo;
    addr_t puc;
    union {
        struct siginfo_ info;
        char __pad[128];
    };
    struct ucontext_ uc;
    char retcode[8];
};






extern int xsave_extra;
extern int fxsave_extra;
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/resource.h" 1


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/time.h" 1




dword_t sys_time(addr_t time_out);
dword_t sys_stime(addr_t time);




dword_t sys_clock_gettime(dword_t clock, addr_t tp);
dword_t sys_clock_settime(dword_t clock, addr_t tp);
dword_t sys_clock_getres(dword_t clock, addr_t res_addr);

struct timeval_ {
    dword_t sec;
    dword_t usec;
};
struct timespec_ {
    dword_t sec;
    dword_t nsec;
};
struct timezone_ {
    dword_t minuteswest;
    dword_t dsttime;
};

static inline clock_t_ clock_from_timeval(struct timeval_ timeval) {
    return timeval.sec * 100 + timeval.usec / 10000;
}




struct itimerval_ {
    struct timeval_ interval;
    struct timeval_ value;
};

struct itimerspec_ {
    struct timespec_ interval;
    struct timespec_ value;
};

struct tms_ {
    clock_t_ tms_utime;
    clock_t_ tms_stime;
    clock_t_ tms_cutime;
    clock_t_ tms_cstime;
};

int_t sys_setitimer(int_t which, addr_t new_val, addr_t old_val);
uint_t sys_alarm(uint_t seconds);
int_t sys_timer_create(dword_t clock, addr_t sigevent_addr, addr_t timer_addr);
int_t sys_timer_settime(dword_t timer, int_t flags, addr_t new_value_addr, addr_t old_value_addr);
int_t sys_timer_delete(dword_t timer_id);
fd_t sys_timerfd_create(int_t clockid, int_t flags);
int_t sys_timerfd_settime(fd_t f, int_t flags, addr_t new_value_addr, addr_t old_value_addr);

dword_t sys_times(addr_t tbuf);
dword_t sys_nanosleep(addr_t req, addr_t rem);
dword_t sys_gettimeofday(addr_t tv, addr_t tz);
dword_t sys_settimeofday(addr_t tv, addr_t tz);
# 4 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/resource.h" 2

typedef qword_t rlim_t_;
typedef dword_t rlim32_t_;


struct rlimit_ {
    rlim_t_ cur;
    rlim_t_ max;
};

struct rlimit32_ {
    rlim32_t_ cur;
    rlim32_t_ max;
};
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/resource.h"
dword_t sys_getrlimit32(dword_t resource, addr_t rlim_addr);
dword_t sys_setrlimit32(dword_t resource, addr_t rlim_addr);
dword_t sys_prlimit64(pid_t_ pid, dword_t resource, addr_t new_limit_addr, addr_t old_limit_addr);
dword_t sys_old_getrlimit32(dword_t resource, addr_t rlim_addr);

rlim_t_ rlimit(int resource);

struct rusage_ {
    struct timeval_ utime;
    struct timeval_ stime;
    dword_t maxrss;
    dword_t ixrss;
    dword_t idrss;
    dword_t isrss;
    dword_t minflt;
    dword_t majflt;
    dword_t nswap;
    dword_t inblock;
    dword_t oublock;
    dword_t msgsnd;
    dword_t msgrcv;
    dword_t nsignals;
    dword_t nvcsw;
    dword_t nivcsw;
};

struct rusage_ rusage_get_current(void);
void rusage_add(struct rusage_ *dst, struct rusage_ *src);


dword_t sys_getrusage(dword_t who, addr_t rusage_addr);

int_t sys_sched_getaffinity(pid_t_ pid, dword_t cpusetsize, addr_t cpuset_addr);
int_t sys_sched_setaffinity(pid_t_ pid, dword_t cpusetsize, addr_t cpuset_addr);
int_t sys_getpriority(int_t which, pid_t_ who);
int_t sys_setpriority(int_t which, pid_t_ who, int_t prio);

int_t sys_sched_getparam(pid_t_ pid, addr_t param_addr);
int_t sys_sched_getscheduler(pid_t_ UNUSED_pid __attribute__((unused)));
int_t sys_sched_setscheduler(pid_t_ UNUSED_pid __attribute__((unused)), int_t policy, addr_t param_addr);
int_t sys_sched_get_priority_max(int_t policy);

int_t sys_ioprio_set(int_t UNUSED_which __attribute__((unused)), int_t UNUSED_who __attribute__((unused)), int_t UNUSED_ioprio __attribute__((unused)));
int_t sys_ioprio_get(int_t UNUSED_which __attribute__((unused)), int_t UNUSED_who __attribute__((unused)), int_t UNUSED_ioprio __attribute__((unused)));
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 1






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4


# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 2



# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
static inline struct timespec timespec_now(clockid_t clockid) {
    
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   (__builtin_expect(!(
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
   clockid == 
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   _CLOCK_MONOTONIC 
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
   || clockid == 
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   _CLOCK_REALTIME), 0) ? __assert_rtn(__func__, "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h", 11, 
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
   "clockid == CLOCK_MONOTONIC || clockid == CLOCK_REALTIME"
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   ) : (void)0)
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
                                                                  ;
    struct timespec now;
    clock_gettime(clockid, &now);
    return now;
}

static inline struct timespec timespec_add(struct timespec x, struct timespec y) {
    x.tv_sec += y.tv_sec;
    x.tv_nsec += y.tv_nsec;
    if (x.tv_nsec >= 1000000000) {
        x.tv_nsec -= 1000000000;
        x.tv_sec++;
    }
    return x;
}

static inline struct timespec timespec_subtract(struct timespec x, struct timespec y) {
    struct timespec result;
    if (x.tv_nsec < y.tv_nsec) {
        x.tv_sec -= 1;
        x.tv_nsec += 1000000000;
    }
    result.tv_sec = x.tv_sec - y.tv_sec;
    result.tv_nsec = x.tv_nsec - y.tv_nsec;
    return result;
}

static inline 
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
             _Bool 
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
                  timespec_is_zero(struct timespec ts) {
    return ts.tv_sec == 0 && ts.tv_nsec == 0;
}

static inline 
# 42 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
             _Bool 
# 42 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
                  timespec_positive(struct timespec ts) {
    return ts.tv_sec > 0 || (ts.tv_sec == 0 && ts.tv_nsec > 0);
}

static inline struct timespec timespec_normalize(struct timespec ts) {
    ts.tv_sec += ts.tv_nsec / 1000000000;
    ts.tv_nsec %= 1000000000;
    return ts;
}

typedef void (*timer_callback_t)(void *data);
struct timer {
    clockid_t clockid;
    struct timespec start;
    struct timespec end;
    struct timespec interval;

    
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   _Bool 
# 59 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
        active;
    
# 60 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   _Bool 
# 60 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
        thread_running;
    pthread_t thread;
    timer_callback_t callback;
    void *data;
    lock_t lock;

    
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h" 3 4
   _Bool 
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/ish/util/timer.h"
        dead;
};

struct timer *timer_new(clockid_t clockid, timer_callback_t callback, void *data);
void timer_free(struct timer *timer);




struct timer_spec {
    struct timespec value;
    struct timespec interval;
};
int timer_set(struct timer *timer, struct timer_spec spec, struct timer_spec *oldspec);
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 2




struct task {
    struct cpu_state cpu;
    struct mm *mm;
    struct mem *mem;
    pthread_t thread;
    uint64_t threadid;

    struct tgroup *group;
    struct list group_links;
    pid_t_ pid, tgid;
    uid_t_ uid, gid;
    uid_t_ euid, egid;
    uid_t_ suid, sgid;

    unsigned ngroups;
    uid_t_ groups[32];
    char comm[16] __attribute__((nonstring));
    
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
   _Bool 
# 34 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
        did_exec;

    struct fdtable *files;
    struct fs_info *fs;


    struct sighand *sighand;
    sigset_t_ blocked;
    sigset_t_ pending;
    sigset_t_ waiting;
    struct list queue;
    cond_t pause;

    sigset_t_ saved_mask;
    
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
   _Bool 
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
        has_saved_mask;

    struct {

        lock_t lock;
        cond_t cond;

        
# 55 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
       _Bool 
# 55 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
            traced;
        
# 56 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
       _Bool 
# 56 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
            stopped;
        int signal;
        struct siginfo_ info;
        int trap_event;
    } ptrace;


    struct task *parent;
    struct list children;
    struct list siblings;

    addr_t clear_tid;
    addr_t robust_list;


    dword_t exit_code;
    
# 72 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
   _Bool 
# 72 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
        zombie;
    
# 73 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
   _Bool 
# 73 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
        exiting;


    struct vfork_info {
        
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
       _Bool 
# 77 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
            done;
        cond_t cond;
        lock_t lock;
    } *vfork;
    int exit_signal;



    lock_t general_lock;

    struct task_sockrestart sockrestart;


    cond_t *waiting_cond;
    lock_t *waiting_lock;
    lock_t waiting_cond_lock;
};



extern __thread struct task *current;

static inline void task_set_mm(struct task *task, struct mm *mm) {
    task->mm = mm;
    task->mem = &task->mm->mem;
    task->cpu.mmu = &task->mem->mmu;
}




struct task *task_create_(struct task *parent);

void task_destroy(struct task *task);


void vfork_notify(struct task *task);
pid_t_ task_setsid(struct task *task);
void task_leave_session(struct task *task);

struct posix_timer {
    struct timer *timer;
    int_t timer_id;
    struct task *task;
    int_t signal;
    union sigval_ sig_value;
};


struct tgroup {
    struct list threads;
    struct task *leader;
    struct rusage_ rusage;


    pid_t_ sid, pgid;
    struct list session;
    struct list pgroup;

    
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
   _Bool 
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
        stopped;
    cond_t stopped_cond;

    struct tty *tty;
    struct timer *itimer;

    struct posix_timer posix_timers[16];

    struct rlimit_ limits[16];



    
# 148 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
   _Bool 
# 148 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
        doing_group_exit;
    dword_t group_exit_code;

    struct rusage_ children_rusage;
    cond_t child_exit;

    dword_t personality;


    lock_t lock;
};

static inline 
# 160 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h" 3 4
             _Bool 
# 160 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/task.h"
                  task_is_leader(struct task *task) {
    return task->group->leader == task;
}

struct pid {
    dword_t id;
    struct task *task;
    struct list session;
    struct list pgroup;
};


extern lock_t pids_lock;

struct pid *pid_get(dword_t pid);
struct task *pid_get_task(dword_t pid);
struct task *pid_get_task_zombie(dword_t id);




void task_start(struct task *task);
void task_run_current(void);

extern void (*exit_hook)(struct task *task, int code);





void update_thread_name(void);
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/errno.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4


# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4
extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/errno.h" 2
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/errno.h"

# 117 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/errno.h"
int err_map(int err);
int errno_map(void);
# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 2






# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_param.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_param.h" 2 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/net/net_kev.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 3 4

# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sa_family_t.h" 3 4
typedef __uint8_t sa_family_t;
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_socklen_t.h" 3 4
typedef __darwin_socklen_t socklen_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
# 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_iovec_t.h" 3 4
struct iovec {
 void * iov_base;
 size_t iov_len;
};
# 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/socket.h" 2 3 4
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


# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 2
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

# 6 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 2
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
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 2






# 12 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
int_t sys_socketcall(dword_t call_num, addr_t args_addr);

int_t sys_socket(dword_t domain, dword_t type, dword_t protocol);
int_t sys_bind(fd_t sock_fd, addr_t sockaddr_addr, uint_t sockaddr_len);
int_t sys_connect(fd_t sock_fd, addr_t sockaddr_addr, uint_t sockaddr_len);
int_t sys_listen(fd_t sock_fd, int_t backlog);
int_t sys_accept(fd_t sock_fd, addr_t sockaddr_addr, addr_t sockaddr_len_addr);
int_t sys_getsockname(fd_t sock_fd, addr_t sockaddr_addr, addr_t sockaddr_len_addr);
int_t sys_getpeername(fd_t sock_fd, addr_t sockaddr_addr, addr_t sockaddr_len_addr);
int_t sys_socketpair(dword_t domain, dword_t type, dword_t protocol, addr_t sockets_addr);
int_t sys_sendto(fd_t sock_fd, addr_t buffer_addr, dword_t len, dword_t flags, addr_t sockaddr_addr, dword_t sockaddr_len);
int_t sys_recvfrom(fd_t sock_fd, addr_t buffer_addr, dword_t len, dword_t flags, addr_t sockaddr_addr, addr_t sockaddr_len_addr);
int_t sys_shutdown(fd_t sock_fd, dword_t how);
int_t sys_setsockopt(fd_t sock_fd, dword_t level, dword_t option, addr_t value_addr, dword_t value_len);
int_t sys_getsockopt(fd_t sock_fd, dword_t level, dword_t option, addr_t value_addr, dword_t len_addr);
int_t sys_sendmsg(fd_t sock_fd, addr_t msghdr_addr, int_t flags);
int_t sys_recvmsg(fd_t sock_fd, addr_t msghdr_addr, int_t flags);
int_t sys_sendmmsg(fd_t sock_fd, addr_t msgvec_addr, uint_t msgvec_len, int_t flags);



struct sockaddr_ {
    uint16_t family;
    char data[14];
};
struct sockaddr_max_ {
    uint16_t family;
    char data[108];
};

size_t sockaddr_size(void *p);

struct sockaddr *sockaddr_to_real(void *p);

struct msghdr_ {
    addr_t msg_name;
    uint_t msg_namelen;
    addr_t msg_iov;
    uint_t msg_iovlen;
    addr_t msg_control;
    uint_t msg_controllen;
    int_t msg_flags;
};

struct cmsghdr_ {
    dword_t len;
    int_t level;
    int_t type;
    uint8_t data[];
};
# 70 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
struct scm {
    struct list queue;
    unsigned num_fds;
    struct fd *fds[];
};







static inline int sock_family_to_real(int fake) {
    switch (fake) {
        case 1: return 
# 84 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                              1
# 84 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                      ;
        case 2: return 
# 85 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                             2
# 85 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                    ;
        case 10: return 
# 86 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                              30
# 86 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                      ;
    }
    return -1;
}
static inline int sock_family_from_real(int fake) {
    switch (fake) {
        case 
# 92 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
            1
# 92 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                    : return 1;
        case 
# 93 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
            2
# 93 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                   : return 2;
        case 
# 94 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
            30
# 94 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                    : return 10;
    }
    return -1;
}







static inline int sock_type_to_real(int type, int protocol) {
    switch (type & 0xff) {
        case 1:
            if (protocol != 0 && protocol != 
# 108 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                            6
# 108 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                       )
                return -1;
            return 
# 110 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                  1
# 110 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                             ;
        case 2:
            switch (protocol) {
                default:
                    return -1;
                case 0:
                case 
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    17
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                               :
                case 
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    1
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                :
                case 
# 118 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    58
# 118 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                  :
                    break;
            }
            return 
# 121 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                  2
# 121 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                            ;
        case 3:
            switch (protocol) {
                default:
                    return -1;
                case 
# 126 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    255
# 126 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                               :
                case 
# 127 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    17
# 127 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                               :
                case 
# 128 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    1
# 128 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                :
                case 
# 129 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                    58
# 129 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                  :
                    break;
            }
            return 
# 132 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                  2
# 132 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                            ;
    }
    return -1;
}
# 145 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
static inline int sock_flags_to_real(int fake) {
    int real = 0;
    if (fake & 0x1) real |= 
# 147 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                0x1
# 147 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                       ;
    if (fake & 0x2) real |= 
# 148 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                 0x2
# 148 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                         ;
    if (fake & 0x8) real |= 
# 149 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                   0x20
# 149 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                             ;
    if (fake & 0x20) real |= 
# 150 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                  0x10
# 150 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                           ;
    if (fake & 0x40) real |= 
# 151 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                     0x80
# 151 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                 ;
    if (fake & 0x80) real |= 
# 152 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                0x8
# 152 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                       ;
    if (fake & 0x100) real |= 
# 153 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                    0x40
# 153 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                               ;
    if (fake & ~(0x1|0x2|0x8|0x20|0x40|0x80|0x100))
        __use(0, fake);
    return real;
}
static inline int sock_flags_from_real(int real) {
    int fake = 0;
    if (real & 
# 160 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x1
# 160 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                     ) fake |= 0x1;
    if (real & 
# 161 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x2
# 161 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                      ) fake |= 0x2;
    if (real & 
# 162 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x20
# 162 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                        ) fake |= 0x8;
    if (real & 
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x10
# 163 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                       ) fake |= 0x20;
    if (real & 
# 164 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x80
# 164 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                          ) fake |= 0x40;
    if (real & 
# 165 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x8
# 165 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                     ) fake |= 0x80;
    if (real & 
# 166 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0x40
# 166 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                         ) fake |= 0x100;
    if (real & ~(
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                0x1
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                       |
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                        0x2
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                |
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                 0x20
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                           |
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                            0x10
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                     |
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                                      0x80
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                                  |
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                                                   0x8
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                                          |
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                                                           0x40
# 167 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                                                      ))
        __use(0, real);
    return fake;
}
# 202 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
static inline int sock_opt_to_real(int fake, int level) {
    switch (level) {
        case 1: switch (fake) {
            case 2: return 
# 205 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                      0x0004
# 205 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                  ;
            case 3: return 
# 206 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                 0x1008
# 206 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                        ;
            case 4: return 
# 207 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                  0x1007
# 207 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                          ;
            case 6: return 
# 208 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                      0x0020
# 208 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                  ;
            case 9: return 
# 209 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                      0x0008
# 209 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                  ;
            case 13: return 
# 210 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                   0x0080
# 210 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                            ;
            case 7: return 
# 211 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                   0x1001
# 211 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                            ;
            case 8: return 
# 212 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                   0x1002
# 212 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                            ;
            case 29: return 
# 213 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                      0x0400
# 213 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                  ;
        } break;
        case 
# 215 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
            6
# 215 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                       : switch (fake) {
            case 1: return 
# 216 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                     0x01
# 216 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                ;
            case 9: return 0;




        } break;
        case 
# 223 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
            0
# 223 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                      : switch (fake) {
            case 1: return 
# 224 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                3
# 224 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                      ;
            case 2: return 
# 225 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                4
# 225 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                      ;
            case 3: return 
# 226 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                    2
# 226 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                              ;
            case 7: return 
# 227 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                    8
# 227 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                              ;
            case 12: return 
# 228 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                    24
# 228 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                              ;
            case 13: return 
# 229 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                    27
# 229 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                              ;
        } break;
        case 
# 231 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
            41
# 231 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                        : switch (fake) {
            case 16: return 
# 232 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                           4
# 232 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                            ;
            case 67: return 
# 233 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                     36
# 233 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                ;
            case 26: return 
# 234 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
                                     27
# 234 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                                                ;
        } break;
    }
    return -1;
}

static inline int sock_level_to_real(int fake) {
    if (fake == 1)
        return 
# 242 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h" 3 4
              0xffff
# 242 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sock.h"
                        ;
    return fake;
}

extern const char *sock_tmp_prefix;

struct tcp_info_ {
    uint8_t state;
    uint8_t ca_state;
    uint8_t retransmits;
    uint8_t probes;
    uint8_t backoff;
    uint8_t options;
    uint8_t snd_wscale:4, rcv_wscale:4;

    uint32_t rto;
    uint32_t ato;
    uint32_t snd_mss;
    uint32_t rcv_mss;

    uint32_t unacked;
    uint32_t sacked;
    uint32_t lost;
    uint32_t retrans;
    uint32_t fackets;

    uint32_t last_data_sent;
    uint32_t last_ack_sent;
    uint32_t last_data_recv;
    uint32_t last_ack_recv;

    uint32_t pmtu;
    uint32_t rcv_ssthresh;
    uint32_t rtt;
    uint32_t rttvar;
    uint32_t snd_ssthresh;
    uint32_t snd_cwnd;
    uint32_t advmss;
    uint32_t reordering;

    uint32_t rcv_rtt;
    uint32_t rcv_space;

    uint32_t total_retrans;
};
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 2


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/ptrace.h" 1
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/ptrace.h"
struct user_regs_struct_ {
    dword_t ebx;
    dword_t ecx;
    dword_t edx;
    dword_t esi;
    dword_t edi;
    dword_t ebp;
    dword_t eax;
    dword_t xds;
    dword_t xes;
    dword_t xfs;
    dword_t xgs;
    dword_t orig_eax;
    dword_t eip;
    dword_t xcs;
    dword_t eflags;
    dword_t esp;
    dword_t xss;
};

struct user_fpregs_struct_ {
    dword_t cwd;
    dword_t swd;
    dword_t twd;
    dword_t fip;
    dword_t fcs;
    dword_t foo;
    dword_t fos;
    dword_t st_space[20];
};

struct user_ {
    struct user_regs_struct_ user_regs;
    char padding[286 - sizeof(struct user_regs_struct_)];
};

dword_t sys_ptrace(dword_t request, dword_t pid, addr_t addr, dword_t data);
# 16 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 2

void handle_interrupt(int interrupt);

int __attribute__((warn_unused_result)) user_read(addr_t addr, void *buf, size_t count);
int __attribute__((warn_unused_result)) user_write(addr_t addr, const void *buf, size_t count);
int __attribute__((warn_unused_result)) user_read_task(struct task *task, addr_t addr, void *buf, size_t count);
int __attribute__((warn_unused_result)) user_write_task(struct task *task, addr_t addr, const void *buf, size_t count);
int __attribute__((warn_unused_result)) user_read_string(addr_t addr, char *buf, size_t max);
int __attribute__((warn_unused_result)) user_write_string(addr_t addr, const char *buf);






dword_t sys_clone(dword_t flags, addr_t stack, addr_t ptid, addr_t tls, addr_t ctid);
dword_t sys_fork(void);
dword_t sys_vfork(void);
dword_t sys_execve(addr_t file, addr_t argv, addr_t envp);
int do_execve(const char *file, size_t argc, const char *argv, const char *envp);
dword_t sys_exit(dword_t status);

# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 3 4
_Noreturn 
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h"
        void do_exit(int status);

# 38 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h" 3 4
_Noreturn 
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/ish/kernel/calls.h"
        void do_exit_group(int status);
dword_t sys_exit_group(dword_t status);
dword_t sys_wait4(pid_t_ pid, addr_t status_addr, dword_t options, addr_t rusage_addr);
dword_t sys_waitid(int_t idtype, pid_t_ id, addr_t info_addr, int_t options);
dword_t sys_waitpid(pid_t_ pid, addr_t status_addr, dword_t options);


addr_t sys_brk(addr_t new_brk);





addr_t sys_mmap(addr_t args_addr);
addr_t sys_mmap2(addr_t addr, dword_t len, dword_t prot, dword_t flags, fd_t fd_no, dword_t offset);
int_t sys_munmap(addr_t addr, uint_t len);
int_t sys_mprotect(addr_t addr, uint_t len, int_t prot);
int_t sys_mremap(addr_t addr, dword_t old_len, dword_t new_len, dword_t flags);
dword_t sys_madvise(addr_t addr, dword_t len, dword_t advice);
dword_t sys_mbind(addr_t addr, dword_t len, int_t mode, addr_t nodemask, dword_t maxnode, uint_t flags);
int_t sys_mlock(addr_t addr, dword_t len);
int_t sys_msync(addr_t addr, dword_t len, int_t flags);






struct iovec_ {
    addr_t base;
    uint_t len;
};
dword_t sys_read(fd_t fd_no, addr_t buf_addr, dword_t size);
dword_t sys_readv(fd_t fd_no, addr_t iovec_addr, dword_t iovec_count);
dword_t sys_write(fd_t fd_no, addr_t buf_addr, dword_t size);
dword_t sys_writev(fd_t fd_no, addr_t iovec_addr, dword_t iovec_count);
dword_t sys__llseek(fd_t f, dword_t off_high, dword_t off_low, addr_t res_addr, dword_t whence);
dword_t sys_lseek(fd_t f, dword_t off, dword_t whence);
dword_t sys_pread(fd_t f, addr_t buf_addr, dword_t buf_size, off_t_ off);
dword_t sys_pwrite(fd_t f, addr_t buf_addr, dword_t size, off_t_ off);
dword_t sys_ioctl(fd_t f, dword_t cmd, dword_t arg);
dword_t sys_fcntl(fd_t f, dword_t cmd, dword_t arg);
dword_t sys_fcntl32(fd_t fd, dword_t cmd, dword_t arg);
dword_t sys_dup(fd_t fd);
dword_t sys_dup2(fd_t fd, fd_t new_fd);
dword_t sys_dup3(fd_t f, fd_t new_f, int_t flags);
dword_t sys_close(fd_t fd);
dword_t sys_fsync(fd_t f);
dword_t sys_flock(fd_t fd, dword_t operation);
int_t sys_pipe(addr_t pipe_addr);
int_t sys_pipe2(addr_t pipe_addr, int_t flags);
struct pollfd_ {
    fd_t fd;
    word_t events;
    word_t revents;
};
dword_t sys_poll(addr_t fds, dword_t nfds, int_t timeout);
dword_t sys_select(fd_t nfds, addr_t readfds_addr, addr_t writefds_addr, addr_t exceptfds_addr, addr_t timeout_addr);
dword_t sys_pselect(fd_t nfds, addr_t readfds_addr, addr_t writefds_addr, addr_t exceptfds_addr, addr_t timeout_addr, addr_t sigmask_addr);
dword_t sys_ppoll(addr_t fds, dword_t nfds, addr_t timeout_addr, addr_t sigmask_addr, dword_t sigsetsize);
fd_t sys_epoll_create(int_t flags);
fd_t sys_epoll_create0(void);
int_t sys_epoll_ctl(fd_t epoll, int_t op, fd_t fd, addr_t event_addr);
int_t sys_epoll_wait(fd_t epoll, addr_t events_addr, int_t max_events, int_t timeout);
int_t sys_epoll_pwait(fd_t epoll_f, addr_t events_addr, int_t max_events, int_t timeout, addr_t sigmask_addr, dword_t sigsetsize);

int_t sys_eventfd2(uint_t initval, int_t flags);
int_t sys_eventfd(uint_t initval);


fd_t sys_open(addr_t path_addr, dword_t flags, mode_t_ mode);
fd_t sys_openat(fd_t at, addr_t path_addr, dword_t flags, mode_t_ mode);
dword_t sys_close(fd_t fd);
dword_t sys_link(addr_t src_addr, addr_t dst_addr);
dword_t sys_linkat(fd_t src_at_f, addr_t src_addr, fd_t dst_at_f, addr_t dst_addr);
dword_t sys_unlink(addr_t path_addr);
dword_t sys_unlinkat(fd_t at_f, addr_t path_addr, int_t flags);
dword_t sys_rmdir(addr_t path_addr);
dword_t sys_rename(addr_t src_addr, addr_t dst_addr);
dword_t sys_renameat(fd_t src_at_f, addr_t src_addr, fd_t dst_at_f, addr_t dst_addr);
dword_t sys_renameat2(fd_t src_at_f, addr_t src_addr, fd_t dst_at_f, addr_t dst_addr, int_t flags);
dword_t sys_symlink(addr_t target_addr, addr_t link_addr);
dword_t sys_symlinkat(addr_t target_addr, fd_t at_f, addr_t link_addr);
dword_t sys_mknod(addr_t path_addr, mode_t_ mode, dev_t_ dev);
dword_t sys_mknodat(fd_t at_f, addr_t path_addr, mode_t_ mode, dev_t_ dev);
dword_t sys_access(addr_t path_addr, dword_t mode);
dword_t sys_faccessat(fd_t at_f, addr_t path, mode_t_ mode, dword_t flags);
dword_t sys_readlink(addr_t path, addr_t buf, dword_t bufsize);
dword_t sys_readlinkat(fd_t at_f, addr_t path, addr_t buf, dword_t bufsize);
int_t sys_getdents(fd_t f, addr_t dirents, dword_t count);
int_t sys_getdents64(fd_t f, addr_t dirents, dword_t count);
dword_t sys_stat64(addr_t path_addr, addr_t statbuf_addr);
dword_t sys_lstat64(addr_t path_addr, addr_t statbuf_addr);
dword_t sys_fstat64(fd_t fd_no, addr_t statbuf_addr);
dword_t sys_fstatat64(fd_t at, addr_t path_addr, addr_t statbuf_addr, dword_t flags);
dword_t sys_fchmod(fd_t f, dword_t mode);
dword_t sys_fchmodat(fd_t at_f, addr_t path_addr, dword_t mode);
dword_t sys_chmod(addr_t path_addr, dword_t mode);
dword_t sys_fchown32(fd_t f, dword_t owner, dword_t group);
dword_t sys_fchownat(fd_t at_f, addr_t path_addr, dword_t owner, dword_t group, int flags);
dword_t sys_chown32(addr_t path_addr, uid_t_ owner, uid_t_ group);
dword_t sys_lchown(addr_t path_addr, uid_t_ owner, uid_t_ group);
dword_t sys_truncate64(addr_t path_addr, dword_t size_low, dword_t size_high);
dword_t sys_ftruncate64(fd_t f, dword_t size_low, dword_t size_high);
dword_t sys_fallocate(fd_t f, dword_t mode, dword_t offset_low, dword_t offset_high, dword_t len_low, dword_t len_high);
dword_t sys_mkdir(addr_t path_addr, mode_t_ mode);
dword_t sys_mkdirat(fd_t at_f, addr_t path_addr, mode_t_ mode);
dword_t sys_utimensat(fd_t at_f, addr_t path_addr, addr_t times_addr, dword_t flags);
dword_t sys_utimes(addr_t path_addr, addr_t times_addr);
dword_t sys_utime(addr_t path_addr, addr_t times_addr);
dword_t sys_times( addr_t tbuf);
dword_t sys_umask(dword_t mask);

dword_t sys_sendfile(fd_t out_fd, fd_t in_fd, addr_t offset_addr, dword_t count);
dword_t sys_sendfile64(fd_t out_fd, fd_t in_fd, addr_t offset_addr, dword_t count);
dword_t sys_splice(fd_t in_fd, addr_t in_off_addr, fd_t out_fd, addr_t out_off_addr, dword_t count, dword_t flags);
dword_t sys_copy_file_range(fd_t in_fd, addr_t in_off, fd_t out_fd, addr_t out_off, dword_t len, uint_t flags);

dword_t sys_statfs(addr_t path_addr, addr_t buf_addr);
dword_t sys_statfs64(addr_t path_addr, dword_t buf_size, addr_t buf_addr);
dword_t sys_fstatfs(fd_t f, addr_t buf_addr);
dword_t sys_fstatfs64(fd_t f, addr_t buf_addr);






dword_t sys_mount(addr_t source_addr, addr_t target_addr, addr_t type_addr, dword_t flags, addr_t data_addr);
dword_t sys_umount2(addr_t target_addr, dword_t flags);

dword_t sys_xattr_stub(addr_t path_addr, addr_t name_addr, addr_t value_addr, dword_t size, dword_t flags);


pid_t_ sys_getpid(void);
pid_t_ sys_gettid(void);
pid_t_ sys_getppid(void);
pid_t_ sys_getpgid(pid_t_ pid);
dword_t sys_setpgid(pid_t_ pid, pid_t_ pgid);
pid_t_ sys_getpgrp(void);
dword_t sys_setpgrp(void);
uid_t_ sys_getuid32(void);
uid_t_ sys_getuid(void);
int_t sys_setuid(uid_t uid);
uid_t_ sys_geteuid32(void);
uid_t_ sys_geteuid(void);
int_t sys_setgid(uid_t gid);
uid_t_ sys_getgid32(void);
uid_t_ sys_getgid(void);
uid_t_ sys_getegid32(void);
uid_t_ sys_getegid(void);
dword_t sys_setresuid(uid_t_ ruid, uid_t_ euid, uid_t_ suid);
dword_t sys_setresgid(uid_t_ rgid, uid_t_ egid, uid_t_ sgid);
int_t sys_setreuid(uid_t_ ruid, uid_t_ euid);
int_t sys_setregid(uid_t_ rgid, uid_t_ egid);
int_t sys_getresuid(addr_t ruid_addr, addr_t euid_addr, addr_t suid_addr);
int_t sys_getresgid(addr_t rgid_addr, addr_t egid_addr, addr_t sgid_addr);
int_t sys_getgroups(dword_t size, addr_t list);
int_t sys_setgroups(dword_t size, addr_t list);
int_t sys_capget(addr_t header_addr, addr_t data_addr);
int_t sys_capset(addr_t header_addr, addr_t data_addr);
dword_t sys_getcwd(addr_t buf_addr, dword_t size);
dword_t sys_chdir(addr_t path_addr);
dword_t sys_chroot(addr_t path_addr);
dword_t sys_fchdir(fd_t f);
int_t sys_personality(dword_t pers);
int task_set_thread_area(struct task *task, addr_t u_info);
int sys_set_thread_area(addr_t u_info);
int sys_set_tid_address(addr_t blahblahblah);
dword_t sys_setsid(void);
dword_t sys_getsid(void);

int_t sys_sched_yield(void);
int_t sys_prctl(dword_t option, uint_t arg2, uint_t arg3, uint_t arg4, uint_t arg5);
int_t sys_arch_prctl(int_t code, addr_t addr);
int_t sys_reboot(int_t magic, int_t magic2, int_t cmd);



struct uname {
    char system[65];
    char hostname[65];
    char release[65];
    char version[65];
    char arch[65];
    char domain[65];
};
void do_uname(struct uname *uts);
dword_t sys_uname(addr_t uts_addr);
dword_t sys_sethostname(addr_t hostname_addr, dword_t hostname_len);

struct sys_info {
    dword_t uptime;
    dword_t loads[3];
    dword_t totalram;
    dword_t freeram;
    dword_t sharedram;
    dword_t bufferram;
    dword_t totalswap;
    dword_t freeswap;
    word_t procs;
    dword_t totalhigh;
    dword_t freehigh;
    dword_t mem_unit;
    char pad;
};
dword_t sys_sysinfo(addr_t info_addr);


dword_t sys_futex(addr_t uaddr, dword_t op, dword_t val, addr_t timeout_or_val2, addr_t uaddr2, dword_t val3);
int_t sys_set_robust_list(addr_t robust_list, dword_t len);
int_t sys_get_robust_list(pid_t_ pid, addr_t robust_list_ptr, addr_t len_ptr);


dword_t sys_getrandom(addr_t buf_addr, dword_t len, dword_t flags);
int_t sys_syslog(int_t type, addr_t buf_addr, int_t len);
int_t sys_ipc(uint_t call, int_t first, int_t second, int_t third, addr_t ptr, int_t fifth);

typedef int (*syscall_t)(dword_t, dword_t, dword_t, dword_t, dword_t, dword_t);
# 5 "project/ish/fs/proc/root.c" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/platform/platform.h" 1





struct cpu_usage {
    uint64_t user_ticks;
    uint64_t system_ticks;
    uint64_t idle_ticks;
    uint64_t nice_ticks;
};
struct cpu_usage get_cpu_usage(void);

struct mem_usage {
    uint64_t total;
    uint64_t free;
    uint64_t active;
    uint64_t inactive;
};
struct mem_usage get_mem_usage(void);

struct uptime_info {
    uint64_t uptime_ticks;
    uint64_t load_1m, load_5m, load_15m;
};
struct uptime_info get_uptime(void);
# 7 "project/ish/fs/proc/root.c" 2

static int proc_show_version(struct proc_entry *UNUSED_entry __attribute__((unused)), struct proc_data *buf) {
    struct uname uts;
    do_uname(&uts);
    proc_printf(buf, "%s version %s %s\n", uts.system, uts.release, uts.version);
    return 0;
}

static int proc_show_stat(struct proc_entry *UNUSED_entry __attribute__((unused)), struct proc_data *buf) {
    struct cpu_usage usage = get_cpu_usage();
    proc_printf(buf, "cpu  %"
# 17 "project/ish/fs/proc/root.c" 3 4
                            "ll" "u"
# 17 "project/ish/fs/proc/root.c"
                                  " %"
# 17 "project/ish/fs/proc/root.c" 3 4
                                      "ll" "u"
# 17 "project/ish/fs/proc/root.c"
                                            " %"
# 17 "project/ish/fs/proc/root.c" 3 4
                                                "ll" "u"
# 17 "project/ish/fs/proc/root.c"
                                                      " %"
# 17 "project/ish/fs/proc/root.c" 3 4
                                                          "ll" "u"
# 17 "project/ish/fs/proc/root.c"
                                                                "\n", usage.user_ticks, usage.nice_ticks, usage.system_ticks, usage.idle_ticks);
    return 0;
}

static void show_kb(struct proc_data *buf, const char *name, uint64_t value) {
    proc_printf(buf, "%s%8"
# 22 "project/ish/fs/proc/root.c" 3 4
                          "ll" "u"
# 22 "project/ish/fs/proc/root.c"
                                " kB\n", name, value / 1000);
}

static int proc_show_meminfo(struct proc_entry *UNUSED_entry __attribute__((unused)), struct proc_data *buf) {
    struct mem_usage usage = get_mem_usage();
    show_kb(buf, "MemTotal:       ", usage.total);
    show_kb(buf, "MemFree:        ", usage.free);
    show_kb(buf, "MemShared:      ", usage.free);

    show_kb(buf, "Shmem:          ", 0);
    show_kb(buf, "Buffers:        ", 0);
    show_kb(buf, "Cached:         ", 0);
    show_kb(buf, "SwapTotal:      ", 0);
    show_kb(buf, "SwapFree:       ", 0);
    show_kb(buf, "Dirty:          ", 0);
    show_kb(buf, "Writeback:      ", 0);
    show_kb(buf, "AnonPages:      ", 0);
    show_kb(buf, "Mapped:         ", 0);
    show_kb(buf, "Slab:           ", 0);
    return 0;
}

static int proc_show_uptime(struct proc_entry *UNUSED_entry __attribute__((unused)), struct proc_data *buf) {
    struct uptime_info uptime_info = get_uptime();
    unsigned uptime = uptime_info.uptime_ticks;
    proc_printf(buf, "%u.%u %u.%u\n", uptime / 100, uptime % 100, uptime / 100, uptime % 100);
    return 0;
}

static int proc_readlink_self(struct proc_entry *UNUSED_entry __attribute__((unused)), char *buf) {
    
# 52 "project/ish/fs/proc/root.c" 3 4
   __builtin___sprintf_chk (
# 52 "project/ish/fs/proc/root.c"
   buf
# 52 "project/ish/fs/proc/root.c" 3 4
   , 0, __builtin_object_size (
# 52 "project/ish/fs/proc/root.c"
   buf
# 52 "project/ish/fs/proc/root.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 52 "project/ish/fs/proc/root.c"
   "%d/", current->pid
# 52 "project/ish/fs/proc/root.c" 3 4
   )
# 52 "project/ish/fs/proc/root.c"
                                    ;
    return 0;
}

static void proc_print_escaped(struct proc_data *buf, const char *str) {

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (strchr(" \t\\", str[i]) != 
# 59 "project/ish/fs/proc/root.c" 3 4
                                      ((void *)0)
# 59 "project/ish/fs/proc/root.c"
                                          ) {
            proc_printf(buf, "\\%03o", str[i]);
        } else {
            proc_printf(buf, "%c", str[i]);
        }
    }
}






static int proc_show_mounts(struct proc_entry *UNUSED_entry __attribute__((unused)), struct proc_data *buf) {
    struct mount *mount;
    for (mount = ((typeof(*mount) *) ((char *) ((&mounts)->next) - 
# 74 "project/ish/fs/proc/root.c" 3 4
   __builtin_offsetof (
# 74 "project/ish/fs/proc/root.c"
   typeof(*mount)
# 74 "project/ish/fs/proc/root.c" 3 4
   , 
# 74 "project/ish/fs/proc/root.c"
   mounts
# 74 "project/ish/fs/proc/root.c" 3 4
   )
# 74 "project/ish/fs/proc/root.c"
   )); &mount->mounts != (&mounts); mount = ((typeof(*mount) *) ((char *) (mount->mounts.next) - 
# 74 "project/ish/fs/proc/root.c" 3 4
   __builtin_offsetof (
# 74 "project/ish/fs/proc/root.c"
   typeof(*mount)
# 74 "project/ish/fs/proc/root.c" 3 4
   , 
# 74 "project/ish/fs/proc/root.c"
   mounts
# 74 "project/ish/fs/proc/root.c" 3 4
   )
# 74 "project/ish/fs/proc/root.c"
   ))) {
        const char *point = mount->point;
        if (point[0] == '\0')
            point = "/";

        proc_print_escaped(buf, mount->source);
        proc_printf(buf, " ");
        proc_print_escaped(buf, point);
        proc_printf(buf, " %s ", mount->fs->name);
        
# 83 "project/ish/fs/proc/root.c" 3 4
       _Bool 
# 83 "project/ish/fs/proc/root.c"
            at_start = 
# 83 "project/ish/fs/proc/root.c" 3 4
                       1
# 83 "project/ish/fs/proc/root.c"
                           ;
        do { proc_printf((buf), "%s" "%s", *(&at_start) ? "" : ",", mount->flags & (1 << 0) ? "ro" : "rw"); *(&at_start) = 
# 84 "project/ish/fs/proc/root.c" 3 4
       0
# 84 "project/ish/fs/proc/root.c"
       ; } while (0);
        if (mount->flags & (1 << 1))
            do { proc_printf((buf), "%s" "nosuid", *(&at_start) ? "" : ","); *(&at_start) = 
# 86 "project/ish/fs/proc/root.c" 3 4
           0
# 86 "project/ish/fs/proc/root.c"
           ; } while (0);
        if (mount->flags & (1 << 2))
            do { proc_printf((buf), "%s" "nodev", *(&at_start) ? "" : ","); *(&at_start) = 
# 88 "project/ish/fs/proc/root.c" 3 4
           0
# 88 "project/ish/fs/proc/root.c"
           ; } while (0);
        if (mount->flags & (1 << 3))
            do { proc_printf((buf), "%s" "noexec", *(&at_start) ? "" : ","); *(&at_start) = 
# 90 "project/ish/fs/proc/root.c" 3 4
           0
# 90 "project/ish/fs/proc/root.c"
           ; } while (0);
        if (strcmp(mount->info, "") != 0)
            do { proc_printf((buf), "%s" "%s", *(&at_start) ? "" : ",", mount->info); *(&at_start) = 
# 92 "project/ish/fs/proc/root.c" 3 4
           0
# 92 "project/ish/fs/proc/root.c"
           ; } while (0);
        proc_printf(buf, " 0 0\n");
    };
    return 0;
}


struct proc_dir_entry proc_root_entries[] = {
    {"meminfo", .show = proc_show_meminfo},
    {"mounts", .show = proc_show_mounts},
    {"self", 
# 102 "project/ish/fs/proc/root.c" 3 4
            0120000
# 102 "project/ish/fs/proc/root.c"
                   , .readlink = proc_readlink_self},
    {"stat", .show = proc_show_stat},
    {"uptime", .show = proc_show_uptime},
    {"version", .show = proc_show_version},
};


static 
# 109 "project/ish/fs/proc/root.c" 3 4
      _Bool 
# 109 "project/ish/fs/proc/root.c"
           proc_root_readdir(struct proc_entry *UNUSED_entry __attribute__((unused)), unsigned long *index, struct proc_entry *next_entry) {
    if (*index < sizeof(proc_root_entries)/sizeof(proc_root_entries[0])) {
        *next_entry = (struct proc_entry) {&proc_root_entries[*index], 0, 0};
        (*index)++;
        return 
# 113 "project/ish/fs/proc/root.c" 3 4
              1
# 113 "project/ish/fs/proc/root.c"
                  ;
    }

    pid_t_ pid = *index - sizeof(proc_root_entries)/sizeof(proc_root_entries[0]);
    if (pid <= (1 << 15)) {
        __lock(&pids_lock, "project/ish/fs/proc/root.c", 118);
        do {
            pid++;
        } while (pid <= (1 << 15) && pid_get_task(pid) == 
# 121 "project/ish/fs/proc/root.c" 3 4
                                                       ((void *)0)
# 121 "project/ish/fs/proc/root.c"
                                                           );
        unlock(&pids_lock);
        if (pid > (1 << 15))
            return 
# 124 "project/ish/fs/proc/root.c" 3 4
                  0
# 124 "project/ish/fs/proc/root.c"
                       ;
        *next_entry = (struct proc_entry) {&proc_pid, .pid = pid};
        *index = pid + sizeof(proc_root_entries)/sizeof(proc_root_entries[0]);
        return 
# 127 "project/ish/fs/proc/root.c" 3 4
              1
# 127 "project/ish/fs/proc/root.c"
                  ;
    }

    return 
# 130 "project/ish/fs/proc/root.c" 3 4
          0
# 130 "project/ish/fs/proc/root.c"
               ;
}

struct proc_dir_entry proc_root = {
# 133 "project/ish/fs/proc/root.c" 3 4
                                  ((void *)0)
# 133 "project/ish/fs/proc/root.c"
                                      , 
# 133 "project/ish/fs/proc/root.c" 3 4
                                        0040000
# 133 "project/ish/fs/proc/root.c"
                                               , .readdir = proc_root_readdir};
