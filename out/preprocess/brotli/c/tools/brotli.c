# 0 "project/brotli/c/tools/brotli.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/tools/brotli.c"
# 14 "project/brotli/c/tools/brotli.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4

# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 2 3 4



extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 15 "project/brotli/c/tools/brotli.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 1 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 3 4
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
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 326 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 332 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4
# 350 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};

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
# 359 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4






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
# 534 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 535 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4

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
# 16 "project/brotli/c/tools/brotli.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 14 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
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
# 17 "project/brotli/c/tools/brotli.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
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

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

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

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

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
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
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
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4







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
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
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
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4







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
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
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







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 261 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4



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








# 18 "project/brotli/c/tools/brotli.c" 2
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
# 19 "project/brotli/c/tools/brotli.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4

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




# 20 "project/brotli/c/tools/brotli.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
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






typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




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
# 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
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
# 21 "project/brotli/c/tools/brotli.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
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



# 22 "project/brotli/c/tools/brotli.c" 2

# 1 "project/brotli/c/tools/../common/constants.h" 1
# 15 "project/brotli/c/tools/../common/constants.h"
# 1 "project/brotli/c/tools/../common/./platform.h" 1
# 28 "project/brotli/c/tools/../common/./platform.h"
# 1 "/usr/local/include/brotli/port.h" 1 3 4
# 29 "project/brotli/c/tools/../common/./platform.h" 2
# 1 "/usr/local/include/brotli/types.h" 1 3 4
# 15 "/usr/local/include/brotli/types.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 16 "/usr/local/include/brotli/types.h" 2 3 4
# 71 "/usr/local/include/brotli/types.h" 3 4
typedef void* (*brotli_alloc_func)(void* opaque, size_t size);
# 81 "/usr/local/include/brotli/types.h" 3 4
typedef void (*brotli_free_func)(void* opaque, void* address);
# 30 "project/brotli/c/tools/../common/./platform.h" 2
# 340 "project/brotli/c/tools/../common/./platform.h"

# 340 "project/brotli/c/tools/../common/./platform.h"
static inline __attribute__((__always_inline__)) uint16_t BrotliUnalignedRead16(const void* p) {
  return *(const uint16_t*)p;
}
static inline __attribute__((__always_inline__)) uint32_t BrotliUnalignedRead32(const void* p) {
  return *(const uint32_t*)p;
}

static inline __attribute__((__always_inline__)) uint64_t BrotliUnalignedRead64(const void* p) {
  return *(const uint64_t*)p;
}
static inline __attribute__((__always_inline__)) void BrotliUnalignedWrite64(void* p, uint64_t v) {
  *(uint64_t*)p = v;
}
# 502 "project/brotli/c/tools/../common/./platform.h"
static inline __attribute__((__always_inline__)) void BrotliRBit(void) { }
# 516 "project/brotli/c/tools/../common/./platform.h"
static inline __attribute__((__always_inline__)) double brotli_min_double (double a, double b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) double brotli_max_double (double a, double b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_min_float (float a, float b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) float brotli_max_float (float a, float b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_min_int (int a, int b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) int brotli_max_int (int a, int b) { return a > b ? a : b; }
static inline __attribute__((__always_inline__)) size_t brotli_min_size_t (size_t a, size_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) size_t brotli_max_size_t (size_t a, size_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_min_uint32_t (uint32_t a, uint32_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint32_t brotli_max_uint32_t (uint32_t a, uint32_t b) { return a > b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_min_uint8_t (uint8_t a, uint8_t b) { return a < b ? a : b; } static inline __attribute__((__always_inline__)) uint8_t brotli_max_uint8_t (uint8_t a, uint8_t b) { return a > b ? a : b; }
# 559 "project/brotli/c/tools/../common/./platform.h"
 void* BrotliDefaultAllocFunc(void* opaque, size_t size);


 void BrotliDefaultFreeFunc(void* opaque, void* address);

static inline __attribute__((__always_inline__)) __attribute__ ((unused)) void BrotliSuppressUnusedFunctions(void) {
  (void)(&BrotliSuppressUnusedFunctions);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliUnalignedRead16);
  (void)(&BrotliUnalignedRead32);
  (void)(&BrotliUnalignedRead64);
  (void)(&BrotliUnalignedWrite64);
  (void)(&BrotliRBit);
  (void)(&brotli_min_double);
  (void)(&brotli_max_double);
  (void)(&brotli_min_float);
  (void)(&brotli_max_float);
  (void)(&brotli_min_int);
  (void)(&brotli_max_int);
  (void)(&brotli_min_size_t);
  (void)(&brotli_max_size_t);
  (void)(&brotli_min_uint32_t);
  (void)(&brotli_max_uint32_t);
  (void)(&brotli_min_uint8_t);
  (void)(&brotli_max_uint8_t);
  (void)(&BrotliDefaultAllocFunc);
  (void)(&BrotliDefaultFreeFunc);



}
# 16 "project/brotli/c/tools/../common/constants.h" 2
# 105 "project/brotli/c/tools/../common/constants.h"
typedef struct BrotliDistanceCodeLimit {
  uint32_t max_alphabet_size;
  uint32_t max_distance;
} BrotliDistanceCodeLimit;
# 127 "project/brotli/c/tools/../common/constants.h"
static inline __attribute__((__always_inline__)) __attribute__ ((unused)) BrotliDistanceCodeLimit BrotliCalculateDistanceCodeLimit(
    uint32_t max_distance, uint32_t npostfix, uint32_t ndirect) {
  BrotliDistanceCodeLimit result;


  (void)(&BrotliCalculateDistanceCodeLimit);
  if (max_distance <= ndirect) {

    result.max_alphabet_size = max_distance + 16;
    result.max_distance = max_distance;
    return result;
  } else {

    uint32_t forbidden_distance = max_distance + 1;

    uint32_t offset = forbidden_distance - ndirect - 1;
    uint32_t ndistbits = 0;
    uint32_t tmp;
    uint32_t half;
    uint32_t group;

    uint32_t postfix = (1u << npostfix) - 1;
    uint32_t extra;
    uint32_t start;

    offset = (offset >> npostfix) + 4;

    tmp = offset / 2;

    while (tmp != 0) {ndistbits++; tmp = tmp >> 1;}

    ndistbits--;

    half = (offset >> ndistbits) & 1;

    group = ((ndistbits - 1) << 1) | half;

    if (group == 0) {

      result.max_alphabet_size = ndirect + 16;
      result.max_distance = ndirect;
      return result;
    }

    group--;

    ndistbits = (group >> 1) + 1;

    extra = (1u << ndistbits) - 1;

    start = (1u << (ndistbits + 1)) - 4;

    start += (group & 1) << ndistbits;

    result.max_alphabet_size = ((group << npostfix) | postfix) + ndirect +
        16 + 1;

    result.max_distance = ((start + extra) << npostfix) + postfix + ndirect + 1;
    return result;
  }
}



typedef struct {
  uint16_t offset;
  uint8_t nbits;
} BrotliPrefixCodeRange;


 extern const BrotliPrefixCodeRange
    _kBrotliPrefixCodeRanges[26];
# 24 "project/brotli/c/tools/brotli.c" 2
# 1 "project/brotli/c/tools/../common/version.h" 1
# 25 "project/brotli/c/tools/brotli.c" 2
# 1 "/usr/local/include/brotli/decode.h" 1 3 4
# 28 "/usr/local/include/brotli/decode.h" 3 4

# 28 "/usr/local/include/brotli/decode.h" 3 4
typedef struct BrotliDecoderStateStruct BrotliDecoderState;





typedef enum {

  BROTLI_DECODER_RESULT_ERROR = 0,

  BROTLI_DECODER_RESULT_SUCCESS = 1,

  BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT = 2,

  BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT = 3
} BrotliDecoderResult;
# 112 "/usr/local/include/brotli/decode.h" 3 4
typedef enum {



  BROTLI_DECODER_NO_ERROR = 0 , BROTLI_DECODER_SUCCESS = 1 , BROTLI_DECODER_NEEDS_MORE_INPUT = 2 , BROTLI_DECODER_NEEDS_MORE_OUTPUT = 3 , BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE = -1 , BROTLI_DECODER_ERROR_FORMAT_RESERVED = -2 , BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE = -3 , BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET = -4 , BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME = -5 , BROTLI_DECODER_ERROR_FORMAT_CL_SPACE = -6 , BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE = -7 , BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT = -8 , BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1 = -9 , BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2 = -10 , BROTLI_DECODER_ERROR_FORMAT_TRANSFORM = -11 , BROTLI_DECODER_ERROR_FORMAT_DICTIONARY = -12 , BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS = -13 , BROTLI_DECODER_ERROR_FORMAT_PADDING_1 = -14 , BROTLI_DECODER_ERROR_FORMAT_PADDING_2 = -15 , BROTLI_DECODER_ERROR_FORMAT_DISTANCE = -16 , BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET = -19 , BROTLI_DECODER_ERROR_INVALID_ARGUMENTS = -20 , BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES = -21 , BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS = -22 , BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP = -25 , BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1 = -26 , BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2 = -27 , BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES = -30 , BROTLI_DECODER_ERROR_UNREACHABLE = -31
} BrotliDecoderErrorCode;
# 131 "/usr/local/include/brotli/decode.h" 3 4
typedef enum BrotliDecoderParameter {






  BROTLI_DECODER_PARAM_DISABLE_RING_BUFFER_REALLOCATION = 0,



  BROTLI_DECODER_PARAM_LARGE_WINDOW = 1
} BrotliDecoderParameter;
# 154 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderSetParameter(
    BrotliDecoderState* state, BrotliDecoderParameter param, uint32_t value);
# 175 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderState* BrotliDecoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);






 void BrotliDecoderDestroyInstance(BrotliDecoderState* state);
# 202 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderResult BrotliDecoderDecompress(
    size_t encoded_size,
    const uint8_t encoded_buffer[(encoded_size)],
    size_t* decoded_size,
    uint8_t decoded_buffer[(*decoded_size)]);
# 246 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderResult BrotliDecoderDecompressStream(
  BrotliDecoderState* state, size_t* available_in, const uint8_t** next_in,
  size_t* available_out, uint8_t** next_out, size_t* total_out);
# 257 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderHasMoreOutput(
    const BrotliDecoderState* state);
# 288 "/usr/local/include/brotli/decode.h" 3 4
 const uint8_t* BrotliDecoderTakeOutput(
    BrotliDecoderState* state, size_t* size);
# 301 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderIsUsed(const BrotliDecoderState* state);
# 311 "/usr/local/include/brotli/decode.h" 3 4
 int BrotliDecoderIsFinished(
    const BrotliDecoderState* state);
# 325 "/usr/local/include/brotli/decode.h" 3 4
 BrotliDecoderErrorCode BrotliDecoderGetErrorCode(
    const BrotliDecoderState* state);




 const char* BrotliDecoderErrorString(BrotliDecoderErrorCode c);






 uint32_t BrotliDecoderVersion(void);
# 26 "project/brotli/c/tools/brotli.c" 2
# 1 "/usr/local/include/brotli/encode.h" 1 3 4
# 45 "/usr/local/include/brotli/encode.h" 3 4
typedef enum BrotliEncoderMode {






  BROTLI_MODE_GENERIC = 0,

  BROTLI_MODE_TEXT = 1,

  BROTLI_MODE_FONT = 2
} BrotliEncoderMode;
# 67 "/usr/local/include/brotli/encode.h" 3 4
typedef enum BrotliEncoderOperation {





  BROTLI_OPERATION_PROCESS = 0,
# 90 "/usr/local/include/brotli/encode.h" 3 4
  BROTLI_OPERATION_FLUSH = 1,
# 109 "/usr/local/include/brotli/encode.h" 3 4
  BROTLI_OPERATION_FINISH = 2,
# 130 "/usr/local/include/brotli/encode.h" 3 4
  BROTLI_OPERATION_EMIT_METADATA = 3
} BrotliEncoderOperation;


typedef enum BrotliEncoderParameter {





  BROTLI_PARAM_MODE = 0,






  BROTLI_PARAM_QUALITY = 1,
# 158 "/usr/local/include/brotli/encode.h" 3 4
  BROTLI_PARAM_LGWIN = 2,
# 172 "/usr/local/include/brotli/encode.h" 3 4
  BROTLI_PARAM_LGBLOCK = 3,





  BROTLI_PARAM_DISABLE_LITERAL_CONTEXT_MODELING = 4,





  BROTLI_PARAM_SIZE_HINT = 5,



  BROTLI_PARAM_LARGE_WINDOW = 6,







  BROTLI_PARAM_NPOSTFIX = 7,







  BROTLI_PARAM_NDIRECT = 8,
# 220 "/usr/local/include/brotli/encode.h" 3 4
  BROTLI_PARAM_STREAM_OFFSET = 9
} BrotliEncoderParameter;







typedef struct BrotliEncoderStateStruct BrotliEncoderState;
# 245 "/usr/local/include/brotli/encode.h" 3 4
 int BrotliEncoderSetParameter(
    BrotliEncoderState* state, BrotliEncoderParameter param, uint32_t value);
# 262 "/usr/local/include/brotli/encode.h" 3 4
 BrotliEncoderState* BrotliEncoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque);






 void BrotliEncoderDestroyInstance(BrotliEncoderState* state);
# 282 "/usr/local/include/brotli/encode.h" 3 4
 size_t BrotliEncoderMaxCompressedSize(size_t input_size);
# 312 "/usr/local/include/brotli/encode.h" 3 4
 int BrotliEncoderCompress(
    int quality, int lgwin, BrotliEncoderMode mode, size_t input_size,
    const uint8_t input_buffer[(input_size)],
    size_t* encoded_size,
    uint8_t encoded_buffer[(*encoded_size)]);
# 380 "/usr/local/include/brotli/encode.h" 3 4
 int BrotliEncoderCompressStream(
    BrotliEncoderState* state, BrotliEncoderOperation op, size_t* available_in,
    const uint8_t** next_in, size_t* available_out, uint8_t** next_out,
    size_t* total_out);
# 393 "/usr/local/include/brotli/encode.h" 3 4
 int BrotliEncoderIsFinished(BrotliEncoderState* state);
# 402 "/usr/local/include/brotli/encode.h" 3 4
 int BrotliEncoderHasMoreOutput(
    BrotliEncoderState* state);
# 433 "/usr/local/include/brotli/encode.h" 3 4
 const uint8_t* BrotliEncoderTakeOutput(
    BrotliEncoderState* state, size_t* size);







 uint32_t BrotliEncoderVersion(void);
# 27 "project/brotli/c/tools/brotli.c" 2


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

# 532 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4






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


# 30 "project/brotli/c/tools/brotli.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/utime.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/utime.h" 3 4
struct utimbuf {
 time_t actime;
 time_t modtime;
};




int utime(const char *, const struct utimbuf *);

# 31 "project/brotli/c/tools/brotli.c" 2
# 76 "project/brotli/c/tools/brotli.c"

# 76 "project/brotli/c/tools/brotli.c"
typedef enum {
  COMMAND_COMPRESS,
  COMMAND_DECOMPRESS,
  COMMAND_HELP,
  COMMAND_INVALID,
  COMMAND_TEST_INTEGRITY,
  COMMAND_NOOP,
  COMMAND_VERSION
} Command;





typedef struct {

  int quality;
  int lgwin;
  int verbosity;
  
# 95 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 95 "project/brotli/c/tools/brotli.c"
             force_overwrite;
  
# 96 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 96 "project/brotli/c/tools/brotli.c"
             junk_source;
  
# 97 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 97 "project/brotli/c/tools/brotli.c"
             copy_stat;
  
# 98 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 98 "project/brotli/c/tools/brotli.c"
             write_to_stdout;
  
# 99 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 99 "project/brotli/c/tools/brotli.c"
             test_integrity;
  
# 100 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 100 "project/brotli/c/tools/brotli.c"
             decompress;
  
# 101 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 101 "project/brotli/c/tools/brotli.c"
             large_window;
  const char* output_path;
  const char* suffix;
  int not_input_indices[20];
  size_t longest_path_len;
  size_t input_count;


  int argc;
  char** argv;
  char* modified_path;
  int iterator;
  int ignore;
  
# 114 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 114 "project/brotli/c/tools/brotli.c"
             iterator_error;
  uint8_t* buffer;
  uint8_t* input;
  uint8_t* output;
  const char* current_input_path;
  const char* current_output_path;
  int64_t input_file_length;
  FILE* fin;
  FILE* fout;


  size_t available_in;
  const uint8_t* next_in;
  size_t available_out;
  uint8_t* next_out;




  size_t total_in;
  size_t total_out;
} Context;


static 
# 138 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 138 "project/brotli/c/tools/brotli.c"
                  ParseInt(const char* s, int low, int high, int* result) {
  int value = 0;
  int i;
  for (i = 0; i < 5; ++i) {
    char c = s[i];
    if (c == 0) break;
    if (s[i] < '0' || s[i] > '9') return 
# 144 "project/brotli/c/tools/brotli.c" 3 4
                                        0
# 144 "project/brotli/c/tools/brotli.c"
                                                    ;
    value = (10 * value) + (c - '0');
  }
  if (i == 0) return 
# 147 "project/brotli/c/tools/brotli.c" 3 4
                    0
# 147 "project/brotli/c/tools/brotli.c"
                                ;
  if (i > 1 && s[0] == '0') return 
# 148 "project/brotli/c/tools/brotli.c" 3 4
                                  0
# 148 "project/brotli/c/tools/brotli.c"
                                              ;
  if (s[i] != 0) return 
# 149 "project/brotli/c/tools/brotli.c" 3 4
                       0
# 149 "project/brotli/c/tools/brotli.c"
                                   ;
  if (value < low || value > high) return 
# 150 "project/brotli/c/tools/brotli.c" 3 4
                                         0
# 150 "project/brotli/c/tools/brotli.c"
                                                     ;
  *result = value;
  return 
# 152 "project/brotli/c/tools/brotli.c" 3 4
        1
# 152 "project/brotli/c/tools/brotli.c"
                   ;
}


static const char* FileName(const char* path) {
  const char* separator_position = strrchr(path, '/');
  if (separator_position) path = separator_position + 1;
  separator_position = strrchr(path, '\\');
  if (separator_position) path = separator_position + 1;
  return path;
}


static Command ParseAlias(const char* name) {

  const char* unbrotli = "unbrotli";
  size_t unbrotli_len = strlen(unbrotli);
  name = FileName(name);

  if (strncmp(name, unbrotli, unbrotli_len) == 0) {
    char terminator = name[unbrotli_len];
    if (terminator == 0 || terminator == '.') return COMMAND_DECOMPRESS;
  }
  return COMMAND_COMPRESS;
}

static Command ParseParams(Context* params) {
  int argc = params->argc;
  char** argv = params->argv;
  int i;
  int next_option_index = 0;
  size_t input_count = 0;
  size_t longest_path_len = 1;
  
# 185 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 185 "project/brotli/c/tools/brotli.c"
             command_set = 
# 185 "project/brotli/c/tools/brotli.c" 3 4
                           0
# 185 "project/brotli/c/tools/brotli.c"
                                       ;
  
# 186 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 186 "project/brotli/c/tools/brotli.c"
             quality_set = 
# 186 "project/brotli/c/tools/brotli.c" 3 4
                           0
# 186 "project/brotli/c/tools/brotli.c"
                                       ;
  
# 187 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 187 "project/brotli/c/tools/brotli.c"
             output_set = 
# 187 "project/brotli/c/tools/brotli.c" 3 4
                          0
# 187 "project/brotli/c/tools/brotli.c"
                                      ;
  
# 188 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 188 "project/brotli/c/tools/brotli.c"
             keep_set = 
# 188 "project/brotli/c/tools/brotli.c" 3 4
                        0
# 188 "project/brotli/c/tools/brotli.c"
                                    ;
  
# 189 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 189 "project/brotli/c/tools/brotli.c"
             lgwin_set = 
# 189 "project/brotli/c/tools/brotli.c" 3 4
                         0
# 189 "project/brotli/c/tools/brotli.c"
                                     ;
  
# 190 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 190 "project/brotli/c/tools/brotli.c"
             suffix_set = 
# 190 "project/brotli/c/tools/brotli.c" 3 4
                          0
# 190 "project/brotli/c/tools/brotli.c"
                                      ;
  
# 191 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 191 "project/brotli/c/tools/brotli.c"
             after_dash_dash = 
# 191 "project/brotli/c/tools/brotli.c" 3 4
                               0
# 191 "project/brotli/c/tools/brotli.c"
                                           ;
  Command command = ParseAlias(argv[0]);

  for (i = 1; i < argc; ++i) {
    const char* arg = argv[i];


    size_t arg_len = arg ? strlen(arg) : 0;

    if (arg_len == 0) {
      params->not_input_indices[next_option_index++] = i;
      continue;
    }





    if (next_option_index > (20 - 2)) {
      fprintf(
# 210 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 210 "project/brotli/c/tools/brotli.c"
                   , "too many options passed\n");
      return COMMAND_INVALID;
    }


    if (after_dash_dash || arg[0] != '-' || arg_len == 1) {
      input_count++;
      if (longest_path_len < arg_len) longest_path_len = arg_len;
      continue;
    }


    params->not_input_indices[next_option_index++] = i;


    if (arg_len == 2 && arg[1] == '-') {
      after_dash_dash = 
# 226 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 226 "project/brotli/c/tools/brotli.c"
                                  ;
      continue;
    }


    if (arg[1] != '-') {
      size_t j;
      for (j = 1; j < arg_len; ++j) {
        char c = arg[j];
        if (c >= '0' && c <= '9') {
          if (quality_set) {
            fprintf(
# 237 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 237 "project/brotli/c/tools/brotli.c"
                         , "quality already set\n");
            return COMMAND_INVALID;
          }
          quality_set = 
# 240 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 240 "project/brotli/c/tools/brotli.c"
                                  ;
          params->quality = c - '0';
          continue;
        } else if (c == 'c') {
          if (output_set) {
            fprintf(
# 245 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 245 "project/brotli/c/tools/brotli.c"
                         , "write to standard output already set\n");
            return COMMAND_INVALID;
          }
          output_set = 
# 248 "project/brotli/c/tools/brotli.c" 3 4
                      1
# 248 "project/brotli/c/tools/brotli.c"
                                 ;
          params->write_to_stdout = 
# 249 "project/brotli/c/tools/brotli.c" 3 4
                                   1
# 249 "project/brotli/c/tools/brotli.c"
                                              ;
          continue;
        } else if (c == 'd') {
          if (command_set) {
            fprintf(
# 253 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 253 "project/brotli/c/tools/brotli.c"
                         , "command already set when parsing -d\n");
            return COMMAND_INVALID;
          }
          command_set = 
# 256 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 256 "project/brotli/c/tools/brotli.c"
                                  ;
          command = COMMAND_DECOMPRESS;
          continue;
        } else if (c == 'f') {
          if (params->force_overwrite) {
            fprintf(
# 261 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 261 "project/brotli/c/tools/brotli.c"
                         , "force output overwrite already set\n");
            return COMMAND_INVALID;
          }
          params->force_overwrite = 
# 264 "project/brotli/c/tools/brotli.c" 3 4
                                   1
# 264 "project/brotli/c/tools/brotli.c"
                                              ;
          continue;
        } else if (c == 'h') {

          return COMMAND_HELP;
        } else if (c == 'j' || c == 'k') {
          if (keep_set) {
            fprintf(
# 271 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 271 "project/brotli/c/tools/brotli.c"
                         , "argument --rm / -j or --keep / -k already set\n");
            return COMMAND_INVALID;
          }
          keep_set = 
# 274 "project/brotli/c/tools/brotli.c" 3 4
                    1
# 274 "project/brotli/c/tools/brotli.c"
                               ;
          params->junk_source = 
# 275 "project/brotli/c/tools/brotli.c" 3 4
                               (!!(
# 275 "project/brotli/c/tools/brotli.c"
                               c == 'j'
# 275 "project/brotli/c/tools/brotli.c" 3 4
                               ) ? 1 : 0)
# 275 "project/brotli/c/tools/brotli.c"
                                                       ;
          continue;
        } else if (c == 'n') {
          if (!params->copy_stat) {
            fprintf(
# 279 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 279 "project/brotli/c/tools/brotli.c"
                         , "argument --no-copy-stat / -n already set\n");
            return COMMAND_INVALID;
          }
          params->copy_stat = 
# 282 "project/brotli/c/tools/brotli.c" 3 4
                             0
# 282 "project/brotli/c/tools/brotli.c"
                                         ;
          continue;
        } else if (c == 't') {
          if (command_set) {
            fprintf(
# 286 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 286 "project/brotli/c/tools/brotli.c"
                         , "command already set when parsing -t\n");
            return COMMAND_INVALID;
          }
          command_set = 
# 289 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 289 "project/brotli/c/tools/brotli.c"
                                  ;
          command = COMMAND_TEST_INTEGRITY;
          continue;
        } else if (c == 'v') {
          if (params->verbosity > 0) {
            fprintf(
# 294 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 294 "project/brotli/c/tools/brotli.c"
                         , "argument --verbose / -v already set\n");
            return COMMAND_INVALID;
          }
          params->verbosity = 1;
          continue;
        } else if (c == 'V') {

          return COMMAND_VERSION;
        } else if (c == 'Z') {
          if (quality_set) {
            fprintf(
# 304 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 304 "project/brotli/c/tools/brotli.c"
                         , "quality already set\n");
            return COMMAND_INVALID;
          }
          quality_set = 
# 307 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 307 "project/brotli/c/tools/brotli.c"
                                  ;
          params->quality = 11;
          continue;
        }

        if (c != 'o' && c != 'q' && c != 'w' && c != 'D' && c != 'S') {
          fprintf(
# 313 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 313 "project/brotli/c/tools/brotli.c"
                       , "invalid argument -%c\n", c);
          return COMMAND_INVALID;
        }
        if (j + 1 != arg_len) {
          fprintf(
# 317 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 317 "project/brotli/c/tools/brotli.c"
                       , "expected parameter for argument -%c\n", c);
          return COMMAND_INVALID;
        }
        i++;
        if (i == argc || !argv[i] || argv[i][0] == 0) {
          fprintf(
# 322 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 322 "project/brotli/c/tools/brotli.c"
                       , "expected parameter for argument -%c\n", c);
          return COMMAND_INVALID;
        }
        params->not_input_indices[next_option_index++] = i;
        if (c == 'o') {
          if (output_set) {
            fprintf(
# 328 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 328 "project/brotli/c/tools/brotli.c"
                         , "write to standard output already set (-o)\n");
            return COMMAND_INVALID;
          }
          params->output_path = argv[i];
        } else if (c == 'q') {
          if (quality_set) {
            fprintf(
# 334 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 334 "project/brotli/c/tools/brotli.c"
                         , "quality already set\n");
            return COMMAND_INVALID;
          }
          quality_set = ParseInt(argv[i], 
# 337 "project/brotli/c/tools/brotli.c" 3 4
                                         0
# 337 "project/brotli/c/tools/brotli.c"
                                                           ,
                                 
# 338 "project/brotli/c/tools/brotli.c" 3 4
                                11
# 338 "project/brotli/c/tools/brotli.c"
                                                  , &params->quality);
          if (!quality_set) {
            fprintf(
# 340 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 340 "project/brotli/c/tools/brotli.c"
                         , "error parsing quality value [%s]\n", argv[i]);
            return COMMAND_INVALID;
          }
        } else if (c == 'w') {
          if (lgwin_set) {
            fprintf(
# 345 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 345 "project/brotli/c/tools/brotli.c"
                         , "lgwin parameter already set\n");
            return COMMAND_INVALID;
          }
          lgwin_set = ParseInt(argv[i], 0,
                               
# 349 "project/brotli/c/tools/brotli.c" 3 4
                              24
# 349 "project/brotli/c/tools/brotli.c"
                                                    , &params->lgwin);
          if (!lgwin_set) {
            fprintf(
# 351 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 351 "project/brotli/c/tools/brotli.c"
                         , "error parsing lgwin value [%s]\n", argv[i]);
            return COMMAND_INVALID;
          }
          if (params->lgwin != 0 && params->lgwin < 
# 354 "project/brotli/c/tools/brotli.c" 3 4
                                                   10
# 354 "project/brotli/c/tools/brotli.c"
                                                                         ) {
            fprintf(
# 355 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 355 "project/brotli/c/tools/brotli.c"
                         ,
                    "lgwin parameter (%d) smaller than the minimum (%d)\n",
                    params->lgwin, 
# 357 "project/brotli/c/tools/brotli.c" 3 4
                                  10
# 357 "project/brotli/c/tools/brotli.c"
                                                        );
            return COMMAND_INVALID;
          }
        } else if (c == 'S') {
          if (suffix_set) {
            fprintf(
# 362 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 362 "project/brotli/c/tools/brotli.c"
                         , "suffix already set\n");
            return COMMAND_INVALID;
          }
          suffix_set = 
# 365 "project/brotli/c/tools/brotli.c" 3 4
                      1
# 365 "project/brotli/c/tools/brotli.c"
                                 ;
          params->suffix = argv[i];
        }
      }
    } else {
      arg = &arg[2];
      if (strcmp("best", arg) == 0) {
        if (quality_set) {
          fprintf(
# 373 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 373 "project/brotli/c/tools/brotli.c"
                       , "quality already set\n");
          return COMMAND_INVALID;
        }
        quality_set = 
# 376 "project/brotli/c/tools/brotli.c" 3 4
                     1
# 376 "project/brotli/c/tools/brotli.c"
                                ;
        params->quality = 11;
      } else if (strcmp("decompress", arg) == 0) {
        if (command_set) {
          fprintf(
# 380 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 380 "project/brotli/c/tools/brotli.c"
                       , "command already set when parsing --decompress\n");
          return COMMAND_INVALID;
        }
        command_set = 
# 383 "project/brotli/c/tools/brotli.c" 3 4
                     1
# 383 "project/brotli/c/tools/brotli.c"
                                ;
        command = COMMAND_DECOMPRESS;
      } else if (strcmp("force", arg) == 0) {
        if (params->force_overwrite) {
          fprintf(
# 387 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 387 "project/brotli/c/tools/brotli.c"
                       , "force output overwrite already set\n");
          return COMMAND_INVALID;
        }
        params->force_overwrite = 
# 390 "project/brotli/c/tools/brotli.c" 3 4
                                 1
# 390 "project/brotli/c/tools/brotli.c"
                                            ;
      } else if (strcmp("help", arg) == 0) {

        return COMMAND_HELP;
      } else if (strcmp("keep", arg) == 0) {
        if (keep_set) {
          fprintf(
# 396 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 396 "project/brotli/c/tools/brotli.c"
                       , "argument --rm / -j or --keep / -k already set\n");
          return COMMAND_INVALID;
        }
        keep_set = 
# 399 "project/brotli/c/tools/brotli.c" 3 4
                  1
# 399 "project/brotli/c/tools/brotli.c"
                             ;
        params->junk_source = 
# 400 "project/brotli/c/tools/brotli.c" 3 4
                             0
# 400 "project/brotli/c/tools/brotli.c"
                                         ;
      } else if (strcmp("no-copy-stat", arg) == 0) {
        if (!params->copy_stat) {
          fprintf(
# 403 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 403 "project/brotli/c/tools/brotli.c"
                       , "argument --no-copy-stat / -n already set\n");
          return COMMAND_INVALID;
        }
        params->copy_stat = 
# 406 "project/brotli/c/tools/brotli.c" 3 4
                           0
# 406 "project/brotli/c/tools/brotli.c"
                                       ;
      } else if (strcmp("rm", arg) == 0) {
        if (keep_set) {
          fprintf(
# 409 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 409 "project/brotli/c/tools/brotli.c"
                       , "argument --rm / -j or --keep / -k already set\n");
          return COMMAND_INVALID;
        }
        keep_set = 
# 412 "project/brotli/c/tools/brotli.c" 3 4
                  1
# 412 "project/brotli/c/tools/brotli.c"
                             ;
        params->junk_source = 
# 413 "project/brotli/c/tools/brotli.c" 3 4
                             1
# 413 "project/brotli/c/tools/brotli.c"
                                        ;
      } else if (strcmp("stdout", arg) == 0) {
        if (output_set) {
          fprintf(
# 416 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 416 "project/brotli/c/tools/brotli.c"
                       , "write to standard output already set\n");
          return COMMAND_INVALID;
        }
        output_set = 
# 419 "project/brotli/c/tools/brotli.c" 3 4
                    1
# 419 "project/brotli/c/tools/brotli.c"
                               ;
        params->write_to_stdout = 
# 420 "project/brotli/c/tools/brotli.c" 3 4
                                 1
# 420 "project/brotli/c/tools/brotli.c"
                                            ;
      } else if (strcmp("test", arg) == 0) {
        if (command_set) {
          fprintf(
# 423 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 423 "project/brotli/c/tools/brotli.c"
                       , "command already set when parsing --test\n");
          return COMMAND_INVALID;
        }
        command_set = 
# 426 "project/brotli/c/tools/brotli.c" 3 4
                     1
# 426 "project/brotli/c/tools/brotli.c"
                                ;
        command = COMMAND_TEST_INTEGRITY;
      } else if (strcmp("verbose", arg) == 0) {
        if (params->verbosity > 0) {
          fprintf(
# 430 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 430 "project/brotli/c/tools/brotli.c"
                       , "argument --verbose / -v already set\n");
          return COMMAND_INVALID;
        }
        params->verbosity = 1;
      } else if (strcmp("version", arg) == 0) {

        return COMMAND_VERSION;
      } else {

        const char* value = strrchr(arg, '=');
        size_t key_len;
        if (!value || value[1] == 0) {
          fprintf(
# 442 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 442 "project/brotli/c/tools/brotli.c"
                       , "must pass the parameter as --%s=value\n", arg);
          return COMMAND_INVALID;
        }
        key_len = (size_t)(value - arg);
        value++;
        if (strncmp("lgwin", arg, key_len) == 0) {
          if (lgwin_set) {
            fprintf(
# 449 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 449 "project/brotli/c/tools/brotli.c"
                         , "lgwin parameter already set\n");
            return COMMAND_INVALID;
          }
          lgwin_set = ParseInt(value, 0,
                               
# 453 "project/brotli/c/tools/brotli.c" 3 4
                              24
# 453 "project/brotli/c/tools/brotli.c"
                                                    , &params->lgwin);
          if (!lgwin_set) {
            fprintf(
# 455 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 455 "project/brotli/c/tools/brotli.c"
                         , "error parsing lgwin value [%s]\n", value);
            return COMMAND_INVALID;
          }
          if (params->lgwin != 0 && params->lgwin < 
# 458 "project/brotli/c/tools/brotli.c" 3 4
                                                   10
# 458 "project/brotli/c/tools/brotli.c"
                                                                         ) {
            fprintf(
# 459 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 459 "project/brotli/c/tools/brotli.c"
                         ,
                    "lgwin parameter (%d) smaller than the minimum (%d)\n",
                    params->lgwin, 
# 461 "project/brotli/c/tools/brotli.c" 3 4
                                  10
# 461 "project/brotli/c/tools/brotli.c"
                                                        );
            return COMMAND_INVALID;
          }
        } else if (strncmp("large_window", arg, key_len) == 0) {

          if (lgwin_set) {
            fprintf(
# 467 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 467 "project/brotli/c/tools/brotli.c"
                         , "lgwin parameter already set\n");
            return COMMAND_INVALID;
          }
          lgwin_set = ParseInt(value, 0,
                               
# 471 "project/brotli/c/tools/brotli.c" 3 4
                              30
# 471 "project/brotli/c/tools/brotli.c"
                                                          , &params->lgwin);
          if (!lgwin_set) {
            fprintf(
# 473 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 473 "project/brotli/c/tools/brotli.c"
                         , "error parsing lgwin value [%s]\n", value);
            return COMMAND_INVALID;
          }
          if (params->lgwin != 0 && params->lgwin < 
# 476 "project/brotli/c/tools/brotli.c" 3 4
                                                   10
# 476 "project/brotli/c/tools/brotli.c"
                                                                         ) {
            fprintf(
# 477 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 477 "project/brotli/c/tools/brotli.c"
                         ,
                    "lgwin parameter (%d) smaller than the minimum (%d)\n",
                    params->lgwin, 
# 479 "project/brotli/c/tools/brotli.c" 3 4
                                  10
# 479 "project/brotli/c/tools/brotli.c"
                                                        );
            return COMMAND_INVALID;
          }
        } else if (strncmp("output", arg, key_len) == 0) {
          if (output_set) {
            fprintf(
# 484 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 484 "project/brotli/c/tools/brotli.c"
                         ,
                    "write to standard output already set (--output)\n");
            return COMMAND_INVALID;
          }
          params->output_path = value;
        } else if (strncmp("quality", arg, key_len) == 0) {
          if (quality_set) {
            fprintf(
# 491 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 491 "project/brotli/c/tools/brotli.c"
                         , "quality already set\n");
            return COMMAND_INVALID;
          }
          quality_set = ParseInt(value, 
# 494 "project/brotli/c/tools/brotli.c" 3 4
                                       0
# 494 "project/brotli/c/tools/brotli.c"
                                                         ,
                                 
# 495 "project/brotli/c/tools/brotli.c" 3 4
                                11
# 495 "project/brotli/c/tools/brotli.c"
                                                  , &params->quality);
          if (!quality_set) {
            fprintf(
# 497 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 497 "project/brotli/c/tools/brotli.c"
                         , "error parsing quality value [%s]\n", value);
            return COMMAND_INVALID;
          }
        } else if (strncmp("suffix", arg, key_len) == 0) {
          if (suffix_set) {
            fprintf(
# 502 "project/brotli/c/tools/brotli.c" 3 4
                   __stderrp
# 502 "project/brotli/c/tools/brotli.c"
                         , "suffix already set\n");
            return COMMAND_INVALID;
          }
          suffix_set = 
# 505 "project/brotli/c/tools/brotli.c" 3 4
                      1
# 505 "project/brotli/c/tools/brotli.c"
                                 ;
          params->suffix = value;
        } else {
          fprintf(
# 508 "project/brotli/c/tools/brotli.c" 3 4
                 __stderrp
# 508 "project/brotli/c/tools/brotli.c"
                       , "invalid parameter: [%s]\n", arg);
          return COMMAND_INVALID;
        }
      }
    }
  }

  params->input_count = input_count;
  params->longest_path_len = longest_path_len;
  params->decompress = (command == COMMAND_DECOMPRESS);
  params->test_integrity = (command == COMMAND_TEST_INTEGRITY);

  if (input_count > 1 && output_set) return COMMAND_INVALID;
  if (params->test_integrity) {
    if (params->output_path) return COMMAND_INVALID;
    if (params->write_to_stdout) return COMMAND_INVALID;
  }
  if (strchr(params->suffix, '/') || strchr(params->suffix, '\\')) {
    return COMMAND_INVALID;
  }

  return command;
}

static void PrintVersion(void) {
  int major = 0x1000009 >> 24;
  int minor = (0x1000009 >> 12) & 0xFFF;
  int patch = 0x1000009 & 0xFFF;
  fprintf(
# 536 "project/brotli/c/tools/brotli.c" 3 4
         __stdoutp
# 536 "project/brotli/c/tools/brotli.c"
               , "brotli %d.%d.%d\n", major, minor, patch);
}

static void PrintHelp(const char* name, 
# 539 "project/brotli/c/tools/brotli.c" 3 4
                                       int 
# 539 "project/brotli/c/tools/brotli.c"
                                                   error) {
  FILE* media = error ? 
# 540 "project/brotli/c/tools/brotli.c" 3 4
                       __stderrp 
# 540 "project/brotli/c/tools/brotli.c"
                              : 
# 540 "project/brotli/c/tools/brotli.c" 3 4
                                __stdoutp
# 540 "project/brotli/c/tools/brotli.c"
                                      ;

  fprintf(media,
"Usage: %s [OPTION]... [FILE]...\n",
          name);
  fprintf(media,
"Options:\n"
"  -#                          compression level (0-9)\n"
"  -c, --stdout                write on standard output\n"
"  -d, --decompress            decompress\n"
"  -f, --force                 force output file overwrite\n"
"  -h, --help                  display this help and exit\n");
  fprintf(media,
"  -j, --rm                    remove source file(s)\n"
"  -k, --keep                  keep source file(s) (default)\n"
"  -n, --no-copy-stat          do not copy source file(s) attributes\n"
"  -o FILE, --output=FILE      output file (only if 1 input file)\n");
  fprintf(media,
"  -q NUM, --quality=NUM       compression level (%d-%d)\n",
          
# 559 "project/brotli/c/tools/brotli.c" 3 4
         0
# 559 "project/brotli/c/tools/brotli.c"
                           , 
# 559 "project/brotli/c/tools/brotli.c" 3 4
                             11
# 559 "project/brotli/c/tools/brotli.c"
                                               );
  fprintf(media,
"  -t, --test                  test compressed file integrity\n"
"  -v, --verbose               verbose mode\n");
  fprintf(media,
"  -w NUM, --lgwin=NUM         set LZ77 window size (0, %d-%d)\n"
"                              window size = 2**NUM - 16\n"
"                              0 lets compressor choose the optimal value\n",
          
# 567 "project/brotli/c/tools/brotli.c" 3 4
         10
# 567 "project/brotli/c/tools/brotli.c"
                               , 
# 567 "project/brotli/c/tools/brotli.c" 3 4
                                 24
# 567 "project/brotli/c/tools/brotli.c"
                                                       );
  fprintf(media,
"  --large_window=NUM          use incompatible large-window brotli\n"
"                              bitstream with window size (0, %d-%d)\n"
"                              WARNING: this format is not compatible\n"
"                              with brotli RFC 7932 and may not be\n"
"                              decodable with regular brotli decoders\n",
          
# 574 "project/brotli/c/tools/brotli.c" 3 4
         10
# 574 "project/brotli/c/tools/brotli.c"
                               , 
# 574 "project/brotli/c/tools/brotli.c" 3 4
                                 30
# 574 "project/brotli/c/tools/brotli.c"
                                                             );
  fprintf(media,
"  -S SUF, --suffix=SUF        output file suffix (default:'%s')\n",
          ".br");
  fprintf(media,
"  -V, --version               display version and exit\n"
"  -Z, --best                  use best compression level (11) (default)\n"
"Simple options could be coalesced, i.e. '-9kf' is equivalent to '-9 -k -f'.\n"
"With no FILE, or when FILE is -, read standard input.\n"
"All arguments after '--' are treated as files.\n");
}

static const char* PrintablePath(const char* path) {
  return path ? path : "con";
}

static 
# 590 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 590 "project/brotli/c/tools/brotli.c"
                  OpenInputFile(const char* input_path, FILE** f) {
  *f = 
# 591 "project/brotli/c/tools/brotli.c" 3 4
      ((void *)0)
# 591 "project/brotli/c/tools/brotli.c"
          ;
  if (!input_path) {
    *f = fdopen((
# 593 "project/brotli/c/tools/brotli.c" 3 4
               0
# 593 "project/brotli/c/tools/brotli.c"
               ), "rb");
    return 
# 594 "project/brotli/c/tools/brotli.c" 3 4
          1
# 594 "project/brotli/c/tools/brotli.c"
                     ;
  }
  *f = fopen(input_path, "rb");
  if (!*f) {
    fprintf(
# 598 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 598 "project/brotli/c/tools/brotli.c"
                 , "failed to open input file [%s]: %s\n",
            PrintablePath(input_path), strerror(
# 599 "project/brotli/c/tools/brotli.c" 3 4
                                               (*__error())
# 599 "project/brotli/c/tools/brotli.c"
                                                    ));
    return 
# 600 "project/brotli/c/tools/brotli.c" 3 4
          0
# 600 "project/brotli/c/tools/brotli.c"
                      ;
  }
  return 
# 602 "project/brotli/c/tools/brotli.c" 3 4
        1
# 602 "project/brotli/c/tools/brotli.c"
                   ;
}

static 
# 605 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 605 "project/brotli/c/tools/brotli.c"
                  OpenOutputFile(const char* output_path, FILE** f,
                                  
# 606 "project/brotli/c/tools/brotli.c" 3 4
                                 int 
# 606 "project/brotli/c/tools/brotli.c"
                                             force) {
  int fd;
  *f = 
# 608 "project/brotli/c/tools/brotli.c" 3 4
      ((void *)0)
# 608 "project/brotli/c/tools/brotli.c"
          ;
  if (!output_path) {
    *f = fdopen((
# 610 "project/brotli/c/tools/brotli.c" 3 4
               1
# 610 "project/brotli/c/tools/brotli.c"
               ), "wb");
    return 
# 611 "project/brotli/c/tools/brotli.c" 3 4
          1
# 611 "project/brotli/c/tools/brotli.c"
                     ;
  }
  fd = open(output_path, 
# 613 "project/brotli/c/tools/brotli.c" 3 4
                        0x00000200 
# 613 "project/brotli/c/tools/brotli.c"
                                | (force ? 0 : 
# 613 "project/brotli/c/tools/brotli.c" 3 4
                                               0x00000800
# 613 "project/brotli/c/tools/brotli.c"
                                                     ) | 
# 613 "project/brotli/c/tools/brotli.c" 3 4
                                                         0x0001 
# 613 "project/brotli/c/tools/brotli.c"
                                                                  | 
# 613 "project/brotli/c/tools/brotli.c" 3 4
                                                                    0x00000400
# 613 "project/brotli/c/tools/brotli.c"
                                                                           ,
            
# 614 "project/brotli/c/tools/brotli.c" 3 4
           0000400 
# 614 "project/brotli/c/tools/brotli.c"
                   | 
# 614 "project/brotli/c/tools/brotli.c" 3 4
                     0000200
# 614 "project/brotli/c/tools/brotli.c"
                            );
  if (fd < 0) {
    fprintf(
# 616 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 616 "project/brotli/c/tools/brotli.c"
                 , "failed to open output file [%s]: %s\n",
            PrintablePath(output_path), strerror(
# 617 "project/brotli/c/tools/brotli.c" 3 4
                                                (*__error())
# 617 "project/brotli/c/tools/brotli.c"
                                                     ));
    return 
# 618 "project/brotli/c/tools/brotli.c" 3 4
          0
# 618 "project/brotli/c/tools/brotli.c"
                      ;
  }
  *f = fdopen(fd, "wb");
  if (!*f) {
    fprintf(
# 622 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 622 "project/brotli/c/tools/brotli.c"
                 , "failed to open output file [%s]: %s\n",
            PrintablePath(output_path), strerror(
# 623 "project/brotli/c/tools/brotli.c" 3 4
                                                (*__error())
# 623 "project/brotli/c/tools/brotli.c"
                                                     ));
    return 
# 624 "project/brotli/c/tools/brotli.c" 3 4
          0
# 624 "project/brotli/c/tools/brotli.c"
                      ;
  }
  return 
# 626 "project/brotli/c/tools/brotli.c" 3 4
        1
# 626 "project/brotli/c/tools/brotli.c"
                   ;
}

static int64_t FileSize(const char* path) {
  FILE* f = fopen(path, "rb");
  int64_t retval;
  if (f == 
# 632 "project/brotli/c/tools/brotli.c" 3 4
          ((void *)0)
# 632 "project/brotli/c/tools/brotli.c"
              ) {
    return -1;
  }
  if (fseek(f, 0L, 
# 635 "project/brotli/c/tools/brotli.c" 3 4
                  2
# 635 "project/brotli/c/tools/brotli.c"
                          ) != 0) {
    fclose(f);
    return -1;
  }
  retval = ftell(f);
  if (fclose(f) != 0) {
    return -1;
  }
  return retval;
}




static void CopyStat(const char* input_path, const char* output_path) {
  struct stat statbuf;
  struct utimbuf times;
  int res;
  if (input_path == 0 || output_path == 0) {
    return;
  }
  if (stat(input_path, &statbuf) != 0) {
    return;
  }
  times.actime = statbuf.
# 659 "project/brotli/c/tools/brotli.c" 3 4
                        st_atimespec.tv_sec
# 659 "project/brotli/c/tools/brotli.c"
                                ;
  times.modtime = statbuf.
# 660 "project/brotli/c/tools/brotli.c" 3 4
                         st_mtimespec.tv_sec
# 660 "project/brotli/c/tools/brotli.c"
                                 ;
  utime(output_path, &times);
  res = chmod(output_path, statbuf.st_mode & (
# 662 "project/brotli/c/tools/brotli.c" 3 4
                                             0000700 
# 662 "project/brotli/c/tools/brotli.c"
                                                     | 
# 662 "project/brotli/c/tools/brotli.c" 3 4
                                                       0000070 
# 662 "project/brotli/c/tools/brotli.c"
                                                               | 
# 662 "project/brotli/c/tools/brotli.c" 3 4
                                                                 0000007
# 662 "project/brotli/c/tools/brotli.c"
                                                                        ));
  if (res != 0) {
    fprintf(
# 664 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 664 "project/brotli/c/tools/brotli.c"
                 , "setting access bits failed for [%s]: %s\n",
            PrintablePath(output_path), strerror(
# 665 "project/brotli/c/tools/brotli.c" 3 4
                                                (*__error())
# 665 "project/brotli/c/tools/brotli.c"
                                                     ));
  }
  res = chown(output_path, (uid_t)-1, statbuf.st_gid);
  if (res != 0) {
    fprintf(
# 669 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 669 "project/brotli/c/tools/brotli.c"
                 , "setting group failed for [%s]: %s\n",
            PrintablePath(output_path), strerror(
# 670 "project/brotli/c/tools/brotli.c" 3 4
                                                (*__error())
# 670 "project/brotli/c/tools/brotli.c"
                                                     ));
  }
  res = chown(output_path, statbuf.st_uid, (gid_t)-1);
  if (res != 0) {
    fprintf(
# 674 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 674 "project/brotli/c/tools/brotli.c"
                 , "setting user failed for [%s]: %s\n",
            PrintablePath(output_path), strerror(
# 675 "project/brotli/c/tools/brotli.c" 3 4
                                                (*__error())
# 675 "project/brotli/c/tools/brotli.c"
                                                     ));
  }
}

static 
# 679 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 679 "project/brotli/c/tools/brotli.c"
                  NextFile(Context* context) {
  const char* arg;
  size_t arg_len;


  context->iterator++;

  context->input_file_length = -1;


  if (context->input_count == 0) {
    if (context->iterator > 1) return 
# 690 "project/brotli/c/tools/brotli.c" 3 4
                                     0
# 690 "project/brotli/c/tools/brotli.c"
                                                 ;
    context->current_input_path = 
# 691 "project/brotli/c/tools/brotli.c" 3 4
                                 ((void *)0)
# 691 "project/brotli/c/tools/brotli.c"
                                     ;

    context->current_output_path = context->output_path;
    return 
# 694 "project/brotli/c/tools/brotli.c" 3 4
          1
# 694 "project/brotli/c/tools/brotli.c"
                     ;
  }


  while (context->iterator == context->not_input_indices[context->ignore]) {
    context->iterator++;
    context->ignore++;
  }


  if (context->iterator >= context->argc) return 
# 704 "project/brotli/c/tools/brotli.c" 3 4
                                                0
# 704 "project/brotli/c/tools/brotli.c"
                                                            ;


  arg = context->argv[context->iterator];
  arg_len = strlen(arg);

  if (arg_len == 1 && arg[0] == '-') {
    context->current_input_path = 
# 711 "project/brotli/c/tools/brotli.c" 3 4
                                 ((void *)0)
# 711 "project/brotli/c/tools/brotli.c"
                                     ;
    context->current_output_path = context->output_path;
    return 
# 713 "project/brotli/c/tools/brotli.c" 3 4
          1
# 713 "project/brotli/c/tools/brotli.c"
                     ;
  }

  context->current_input_path = arg;
  context->input_file_length = FileSize(arg);
  context->current_output_path = context->output_path;

  if (context->output_path) return 
# 720 "project/brotli/c/tools/brotli.c" 3 4
                                  1
# 720 "project/brotli/c/tools/brotli.c"
                                             ;
  if (context->write_to_stdout) return 
# 721 "project/brotli/c/tools/brotli.c" 3 4
                                      1
# 721 "project/brotli/c/tools/brotli.c"
                                                 ;

  
# 723 "project/brotli/c/tools/brotli.c" 3 4
 __builtin___strcpy_chk (
# 723 "project/brotli/c/tools/brotli.c"
 context->modified_path
# 723 "project/brotli/c/tools/brotli.c" 3 4
 , 
# 723 "project/brotli/c/tools/brotli.c"
 arg
# 723 "project/brotli/c/tools/brotli.c" 3 4
 , __builtin_object_size (
# 723 "project/brotli/c/tools/brotli.c"
 context->modified_path
# 723 "project/brotli/c/tools/brotli.c" 3 4
 , 2 > 1 ? 1 : 0))
# 723 "project/brotli/c/tools/brotli.c"
                                    ;
  context->current_output_path = context->modified_path;

  if (context->decompress) {
    size_t suffix_len = strlen(context->suffix);
    char* name = (char*)FileName(context->modified_path);
    char* name_suffix;
    size_t name_len = strlen(name);
    if (name_len < suffix_len + 1) {
      fprintf(
# 732 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 732 "project/brotli/c/tools/brotli.c"
                   , "empty output file name for [%s] input file\n",
              PrintablePath(arg));
      context->iterator_error = 
# 734 "project/brotli/c/tools/brotli.c" 3 4
                               1
# 734 "project/brotli/c/tools/brotli.c"
                                          ;
      return 
# 735 "project/brotli/c/tools/brotli.c" 3 4
            0
# 735 "project/brotli/c/tools/brotli.c"
                        ;
    }
    name_suffix = name + name_len - suffix_len;
    if (strcmp(context->suffix, name_suffix) != 0) {
      fprintf(
# 739 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 739 "project/brotli/c/tools/brotli.c"
                   , "input file [%s] suffix mismatch\n",
              PrintablePath(arg));
      context->iterator_error = 
# 741 "project/brotli/c/tools/brotli.c" 3 4
                               1
# 741 "project/brotli/c/tools/brotli.c"
                                          ;
      return 
# 742 "project/brotli/c/tools/brotli.c" 3 4
            0
# 742 "project/brotli/c/tools/brotli.c"
                        ;
    }
    name_suffix[0] = 0;
    return 
# 745 "project/brotli/c/tools/brotli.c" 3 4
          1
# 745 "project/brotli/c/tools/brotli.c"
                     ;
  } else {
    
# 747 "project/brotli/c/tools/brotli.c" 3 4
   __builtin___strcpy_chk (
# 747 "project/brotli/c/tools/brotli.c"
   context->modified_path + arg_len
# 747 "project/brotli/c/tools/brotli.c" 3 4
   , 
# 747 "project/brotli/c/tools/brotli.c"
   context->suffix
# 747 "project/brotli/c/tools/brotli.c" 3 4
   , __builtin_object_size (
# 747 "project/brotli/c/tools/brotli.c"
   context->modified_path + arg_len
# 747 "project/brotli/c/tools/brotli.c" 3 4
   , 2 > 1 ? 1 : 0))
# 747 "project/brotli/c/tools/brotli.c"
                                                            ;
    return 
# 748 "project/brotli/c/tools/brotli.c" 3 4
          1
# 748 "project/brotli/c/tools/brotli.c"
                     ;
  }
}

static 
# 752 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 752 "project/brotli/c/tools/brotli.c"
                  OpenFiles(Context* context) {
  
# 753 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 753 "project/brotli/c/tools/brotli.c"
             is_ok = OpenInputFile(context->current_input_path, &context->fin);
  if (!context->test_integrity && is_ok) {
    is_ok = OpenOutputFile(
        context->current_output_path, &context->fout, context->force_overwrite);
  }
  return is_ok;
}

static 
# 761 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 761 "project/brotli/c/tools/brotli.c"
                  CloseFiles(Context* context, 
# 761 "project/brotli/c/tools/brotli.c" 3 4
                                               int 
# 761 "project/brotli/c/tools/brotli.c"
                                                           success) {
  
# 762 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 762 "project/brotli/c/tools/brotli.c"
             is_ok = 
# 762 "project/brotli/c/tools/brotli.c" 3 4
                     1
# 762 "project/brotli/c/tools/brotli.c"
                                ;
  if (!context->test_integrity && context->fout) {
    if (!success && context->current_output_path) {
      unlink(context->current_output_path);
    }
    if (fclose(context->fout) != 0) {
      if (success) {
        fprintf(
# 769 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 769 "project/brotli/c/tools/brotli.c"
                     , "fclose failed [%s]: %s\n",
                PrintablePath(context->current_output_path), strerror(
# 770 "project/brotli/c/tools/brotli.c" 3 4
                                                                     (*__error())
# 770 "project/brotli/c/tools/brotli.c"
                                                                          ));
      }
      is_ok = 
# 772 "project/brotli/c/tools/brotli.c" 3 4
             0
# 772 "project/brotli/c/tools/brotli.c"
                         ;
    }


    if (success && is_ok && context->copy_stat) {
      CopyStat(context->current_input_path, context->current_output_path);
    }
  }

  if (context->fin) {
    if (fclose(context->fin) != 0) {
      if (is_ok) {
        fprintf(
# 784 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 784 "project/brotli/c/tools/brotli.c"
                     , "fclose failed [%s]: %s\n",
                PrintablePath(context->current_input_path), strerror(
# 785 "project/brotli/c/tools/brotli.c" 3 4
                                                                    (*__error())
# 785 "project/brotli/c/tools/brotli.c"
                                                                         ));
      }
      is_ok = 
# 787 "project/brotli/c/tools/brotli.c" 3 4
             0
# 787 "project/brotli/c/tools/brotli.c"
                         ;
    }
  }
  if (success && context->junk_source && context->current_input_path) {
    unlink(context->current_input_path);
  }

  context->fin = 
# 794 "project/brotli/c/tools/brotli.c" 3 4
                ((void *)0)
# 794 "project/brotli/c/tools/brotli.c"
                    ;
  context->fout = 
# 795 "project/brotli/c/tools/brotli.c" 3 4
                 ((void *)0)
# 795 "project/brotli/c/tools/brotli.c"
                     ;

  return is_ok;
}

static const size_t kFileBufferSize = 1 << 19;

static void InitializeBuffers(Context* context) {
  context->available_in = 0;
  context->next_in = 
# 804 "project/brotli/c/tools/brotli.c" 3 4
                    ((void *)0)
# 804 "project/brotli/c/tools/brotli.c"
                        ;
  context->available_out = kFileBufferSize;
  context->next_out = context->output;
  context->total_in = 0;
  context->total_out = 0;
}



static 
# 813 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 813 "project/brotli/c/tools/brotli.c"
                  HasMoreInput(Context* context) {
  return feof(context->fin) ? 
# 814 "project/brotli/c/tools/brotli.c" 3 4
                             0 
# 814 "project/brotli/c/tools/brotli.c"
                                          : 
# 814 "project/brotli/c/tools/brotli.c" 3 4
                                            1
# 814 "project/brotli/c/tools/brotli.c"
                                                       ;
}

static 
# 817 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 817 "project/brotli/c/tools/brotli.c"
                  ProvideInput(Context* context) {
  context->available_in =
      fread(context->input, 1, kFileBufferSize, context->fin);
  context->total_in += context->available_in;
  context->next_in = context->input;
  if (ferror(context->fin)) {
    fprintf(
# 823 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 823 "project/brotli/c/tools/brotli.c"
                 , "failed to read input [%s]: %s\n",
            PrintablePath(context->current_input_path), strerror(
# 824 "project/brotli/c/tools/brotli.c" 3 4
                                                                (*__error())
# 824 "project/brotli/c/tools/brotli.c"
                                                                     ));
    return 
# 825 "project/brotli/c/tools/brotli.c" 3 4
          0
# 825 "project/brotli/c/tools/brotli.c"
                      ;
  }
  return 
# 827 "project/brotli/c/tools/brotli.c" 3 4
        1
# 827 "project/brotli/c/tools/brotli.c"
                   ;
}


static 
# 831 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 831 "project/brotli/c/tools/brotli.c"
                  WriteOutput(Context* context) {
  size_t out_size = (size_t)(context->next_out - context->output);
  context->total_out += out_size;
  if (out_size == 0) return 
# 834 "project/brotli/c/tools/brotli.c" 3 4
                           1
# 834 "project/brotli/c/tools/brotli.c"
                                      ;
  if (context->test_integrity) return 
# 835 "project/brotli/c/tools/brotli.c" 3 4
                                     1
# 835 "project/brotli/c/tools/brotli.c"
                                                ;

  fwrite(context->output, 1, out_size, context->fout);
  if (ferror(context->fout)) {
    fprintf(
# 839 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 839 "project/brotli/c/tools/brotli.c"
                 , "failed to write output [%s]: %s\n",
            PrintablePath(context->current_output_path), strerror(
# 840 "project/brotli/c/tools/brotli.c" 3 4
                                                                 (*__error())
# 840 "project/brotli/c/tools/brotli.c"
                                                                      ));
    return 
# 841 "project/brotli/c/tools/brotli.c" 3 4
          0
# 841 "project/brotli/c/tools/brotli.c"
                      ;
  }
  return 
# 843 "project/brotli/c/tools/brotli.c" 3 4
        1
# 843 "project/brotli/c/tools/brotli.c"
                   ;
}

static 
# 846 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 846 "project/brotli/c/tools/brotli.c"
                  ProvideOutput(Context* context) {
  if (!WriteOutput(context)) return 
# 847 "project/brotli/c/tools/brotli.c" 3 4
                                   0
# 847 "project/brotli/c/tools/brotli.c"
                                               ;
  context->available_out = kFileBufferSize;
  context->next_out = context->output;
  return 
# 850 "project/brotli/c/tools/brotli.c" 3 4
        1
# 850 "project/brotli/c/tools/brotli.c"
                   ;
}

static 
# 853 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 853 "project/brotli/c/tools/brotli.c"
                  FlushOutput(Context* context) {
  if (!WriteOutput(context)) return 
# 854 "project/brotli/c/tools/brotli.c" 3 4
                                   0
# 854 "project/brotli/c/tools/brotli.c"
                                               ;
  context->available_out = 0;
  return 
# 856 "project/brotli/c/tools/brotli.c" 3 4
        1
# 856 "project/brotli/c/tools/brotli.c"
                   ;
}

static void PrintBytes(size_t value) {
  if (value < 1024) {
    fprintf(
# 861 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 861 "project/brotli/c/tools/brotli.c"
                 , "%d B", (int)value);
  } else if (value < 1048576) {
    fprintf(
# 863 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 863 "project/brotli/c/tools/brotli.c"
                 , "%0.3f KiB", (double)value / 1024.0);
  } else if (value < 1073741824) {
    fprintf(
# 865 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 865 "project/brotli/c/tools/brotli.c"
                 , "%0.3f MiB", (double)value / 1048576.0);
  } else {
    fprintf(
# 867 "project/brotli/c/tools/brotli.c" 3 4
           __stderrp
# 867 "project/brotli/c/tools/brotli.c"
                 , "%0.3f GiB", (double)value / 1073741824.0);
  }
}

static void PrintFileProcessingProgress(Context* context) {
  fprintf(
# 872 "project/brotli/c/tools/brotli.c" 3 4
         __stderrp
# 872 "project/brotli/c/tools/brotli.c"
               , "[%s]: ", PrintablePath(context->current_input_path));
  PrintBytes(context->total_in);
  fprintf(
# 874 "project/brotli/c/tools/brotli.c" 3 4
         __stderrp
# 874 "project/brotli/c/tools/brotli.c"
               , " -> ");
  PrintBytes(context->total_out);
}

static 
# 878 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 878 "project/brotli/c/tools/brotli.c"
                  DecompressFile(Context* context, BrotliDecoderState* s) {
  BrotliDecoderResult result = BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT;
  InitializeBuffers(context);
  for (;;) {
    if (result == BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT) {
      if (!HasMoreInput(context)) {
        fprintf(
# 884 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 884 "project/brotli/c/tools/brotli.c"
                     , "corrupt input [%s]\n",
                PrintablePath(context->current_input_path));
        return 
# 886 "project/brotli/c/tools/brotli.c" 3 4
              0
# 886 "project/brotli/c/tools/brotli.c"
                          ;
      }
      if (!ProvideInput(context)) return 
# 888 "project/brotli/c/tools/brotli.c" 3 4
                                        0
# 888 "project/brotli/c/tools/brotli.c"
                                                    ;
    } else if (result == BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT) {
      if (!ProvideOutput(context)) return 
# 890 "project/brotli/c/tools/brotli.c" 3 4
                                         0
# 890 "project/brotli/c/tools/brotli.c"
                                                     ;
    } else if (result == BROTLI_DECODER_RESULT_SUCCESS) {
      if (!FlushOutput(context)) return 
# 892 "project/brotli/c/tools/brotli.c" 3 4
                                       0
# 892 "project/brotli/c/tools/brotli.c"
                                                   ;
      int has_more_input =
          (context->available_in != 0) || (fgetc(context->fin) != 
# 894 "project/brotli/c/tools/brotli.c" 3 4
                                                                 (-1)
# 894 "project/brotli/c/tools/brotli.c"
                                                                    );
      if (has_more_input) {
        fprintf(
# 896 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 896 "project/brotli/c/tools/brotli.c"
                     , "corrupt input [%s]\n",
                PrintablePath(context->current_input_path));
        return 
# 898 "project/brotli/c/tools/brotli.c" 3 4
              0
# 898 "project/brotli/c/tools/brotli.c"
                          ;
      }
      if (context->verbosity > 0) {
        fprintf(
# 901 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 901 "project/brotli/c/tools/brotli.c"
                     , "Decompressed ");
        PrintFileProcessingProgress(context);
        fprintf(
# 903 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 903 "project/brotli/c/tools/brotli.c"
                     , "\n");
      }
      return 
# 905 "project/brotli/c/tools/brotli.c" 3 4
            1
# 905 "project/brotli/c/tools/brotli.c"
                       ;
    } else {
      fprintf(
# 907 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 907 "project/brotli/c/tools/brotli.c"
                   , "corrupt input [%s]\n",
              PrintablePath(context->current_input_path));
      return 
# 909 "project/brotli/c/tools/brotli.c" 3 4
            0
# 909 "project/brotli/c/tools/brotli.c"
                        ;
    }

    result = BrotliDecoderDecompressStream(s, &context->available_in,
        &context->next_in, &context->available_out, &context->next_out, 0);
  }
}

static 
# 917 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 917 "project/brotli/c/tools/brotli.c"
                  DecompressFiles(Context* context) {
  while (NextFile(context)) {
    
# 919 "project/brotli/c/tools/brotli.c" 3 4
   int 
# 919 "project/brotli/c/tools/brotli.c"
               is_ok = 
# 919 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 919 "project/brotli/c/tools/brotli.c"
                                  ;
    BrotliDecoderState* s = BrotliDecoderCreateInstance(
# 920 "project/brotli/c/tools/brotli.c" 3 4
                                                       ((void *)0)
# 920 "project/brotli/c/tools/brotli.c"
                                                           , 
# 920 "project/brotli/c/tools/brotli.c" 3 4
                                                             ((void *)0)
# 920 "project/brotli/c/tools/brotli.c"
                                                                 , 
# 920 "project/brotli/c/tools/brotli.c" 3 4
                                                                   ((void *)0)
# 920 "project/brotli/c/tools/brotli.c"
                                                                       );
    if (!s) {
      fprintf(
# 922 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 922 "project/brotli/c/tools/brotli.c"
                   , "out of memory\n");
      return 
# 923 "project/brotli/c/tools/brotli.c" 3 4
            0
# 923 "project/brotli/c/tools/brotli.c"
                        ;
    }



    BrotliDecoderSetParameter(s, BROTLI_DECODER_PARAM_LARGE_WINDOW, 1u);
    is_ok = OpenFiles(context);
    if (is_ok && !context->current_input_path &&
        !context->force_overwrite && isatty(
# 931 "project/brotli/c/tools/brotli.c" 3 4
                                           0
# 931 "project/brotli/c/tools/brotli.c"
                                                       )) {
      fprintf(
# 932 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 932 "project/brotli/c/tools/brotli.c"
                   , "Use -h help. Use -f to force input from a terminal.\n");
      is_ok = 
# 933 "project/brotli/c/tools/brotli.c" 3 4
             0
# 933 "project/brotli/c/tools/brotli.c"
                         ;
    }
    if (is_ok) is_ok = DecompressFile(context, s);
    BrotliDecoderDestroyInstance(s);
    if (!CloseFiles(context, is_ok)) is_ok = 
# 937 "project/brotli/c/tools/brotli.c" 3 4
                                            0
# 937 "project/brotli/c/tools/brotli.c"
                                                        ;
    if (!is_ok) return 
# 938 "project/brotli/c/tools/brotli.c" 3 4
                      0
# 938 "project/brotli/c/tools/brotli.c"
                                  ;
  }
  return 
# 940 "project/brotli/c/tools/brotli.c" 3 4
        1
# 940 "project/brotli/c/tools/brotli.c"
                   ;
}

static 
# 943 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 943 "project/brotli/c/tools/brotli.c"
                  CompressFile(Context* context, BrotliEncoderState* s) {
  
# 944 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 944 "project/brotli/c/tools/brotli.c"
             is_eof = 
# 944 "project/brotli/c/tools/brotli.c" 3 4
                      0
# 944 "project/brotli/c/tools/brotli.c"
                                  ;
  InitializeBuffers(context);
  for (;;) {
    if (context->available_in == 0 && !is_eof) {
      if (!ProvideInput(context)) return 
# 948 "project/brotli/c/tools/brotli.c" 3 4
                                        0
# 948 "project/brotli/c/tools/brotli.c"
                                                    ;
      is_eof = !HasMoreInput(context);
    }

    if (!BrotliEncoderCompressStream(s,
        is_eof ? BROTLI_OPERATION_FINISH : BROTLI_OPERATION_PROCESS,
        &context->available_in, &context->next_in,
        &context->available_out, &context->next_out, 
# 955 "project/brotli/c/tools/brotli.c" 3 4
                                                    ((void *)0)
# 955 "project/brotli/c/tools/brotli.c"
                                                        )) {

      fprintf(
# 957 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 957 "project/brotli/c/tools/brotli.c"
                   , "failed to compress data [%s]\n",
              PrintablePath(context->current_input_path));
      return 
# 959 "project/brotli/c/tools/brotli.c" 3 4
            0
# 959 "project/brotli/c/tools/brotli.c"
                        ;
    }

    if (context->available_out == 0) {
      if (!ProvideOutput(context)) return 
# 963 "project/brotli/c/tools/brotli.c" 3 4
                                         0
# 963 "project/brotli/c/tools/brotli.c"
                                                     ;
    }

    if (BrotliEncoderIsFinished(s)) {
      if (!FlushOutput(context)) return 
# 967 "project/brotli/c/tools/brotli.c" 3 4
                                       0
# 967 "project/brotli/c/tools/brotli.c"
                                                   ;
      if (context->verbosity > 0) {
        fprintf(
# 969 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 969 "project/brotli/c/tools/brotli.c"
                     , "Compressed ");
        PrintFileProcessingProgress(context);
        fprintf(
# 971 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 971 "project/brotli/c/tools/brotli.c"
                     , "\n");
      }
      return 
# 973 "project/brotli/c/tools/brotli.c" 3 4
            1
# 973 "project/brotli/c/tools/brotli.c"
                       ;
    }
  }
}

static 
# 978 "project/brotli/c/tools/brotli.c" 3 4
      int 
# 978 "project/brotli/c/tools/brotli.c"
                  CompressFiles(Context* context) {
  while (NextFile(context)) {
    
# 980 "project/brotli/c/tools/brotli.c" 3 4
   int 
# 980 "project/brotli/c/tools/brotli.c"
               is_ok = 
# 980 "project/brotli/c/tools/brotli.c" 3 4
                       1
# 980 "project/brotli/c/tools/brotli.c"
                                  ;
    BrotliEncoderState* s = BrotliEncoderCreateInstance(
# 981 "project/brotli/c/tools/brotli.c" 3 4
                                                       ((void *)0)
# 981 "project/brotli/c/tools/brotli.c"
                                                           , 
# 981 "project/brotli/c/tools/brotli.c" 3 4
                                                             ((void *)0)
# 981 "project/brotli/c/tools/brotli.c"
                                                                 , 
# 981 "project/brotli/c/tools/brotli.c" 3 4
                                                                   ((void *)0)
# 981 "project/brotli/c/tools/brotli.c"
                                                                       );
    if (!s) {
      fprintf(
# 983 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 983 "project/brotli/c/tools/brotli.c"
                   , "out of memory\n");
      return 
# 984 "project/brotli/c/tools/brotli.c" 3 4
            0
# 984 "project/brotli/c/tools/brotli.c"
                        ;
    }
    BrotliEncoderSetParameter(s,
        BROTLI_PARAM_QUALITY, (uint32_t)context->quality);
    if (context->lgwin > 0) {


      if (context->lgwin > 
# 991 "project/brotli/c/tools/brotli.c" 3 4
                          24
# 991 "project/brotli/c/tools/brotli.c"
                                                ) {
        BrotliEncoderSetParameter(s, BROTLI_PARAM_LARGE_WINDOW, 1u);
      }
      BrotliEncoderSetParameter(s,
          BROTLI_PARAM_LGWIN, (uint32_t)context->lgwin);
    } else {

      uint32_t lgwin = 24;

      if (context->input_file_length >= 0) {
        lgwin = 
# 1001 "project/brotli/c/tools/brotli.c" 3 4
               10
# 1001 "project/brotli/c/tools/brotli.c"
                                     ;
        while ((((size_t)1 << (lgwin)) - 16) <
               (uint64_t)context->input_file_length) {
          lgwin++;
          if (lgwin == 
# 1005 "project/brotli/c/tools/brotli.c" 3 4
                      24
# 1005 "project/brotli/c/tools/brotli.c"
                                            ) break;
        }
      }
      BrotliEncoderSetParameter(s, BROTLI_PARAM_LGWIN, lgwin);
    }
    if (context->input_file_length > 0) {
      uint32_t size_hint = context->input_file_length < (1 << 30) ?
          (uint32_t)context->input_file_length : (1u << 30);
      BrotliEncoderSetParameter(s, BROTLI_PARAM_SIZE_HINT, size_hint);
    }
    is_ok = OpenFiles(context);
    if (is_ok && !context->current_output_path &&
        !context->force_overwrite && isatty(
# 1017 "project/brotli/c/tools/brotli.c" 3 4
                                           1
# 1017 "project/brotli/c/tools/brotli.c"
                                                        )) {
      fprintf(
# 1018 "project/brotli/c/tools/brotli.c" 3 4
             __stderrp
# 1018 "project/brotli/c/tools/brotli.c"
                   , "Use -h help. Use -f to force output to a terminal.\n");
      is_ok = 
# 1019 "project/brotli/c/tools/brotli.c" 3 4
             0
# 1019 "project/brotli/c/tools/brotli.c"
                         ;
    }
    if (is_ok) is_ok = CompressFile(context, s);
    BrotliEncoderDestroyInstance(s);
    if (!CloseFiles(context, is_ok)) is_ok = 
# 1023 "project/brotli/c/tools/brotli.c" 3 4
                                            0
# 1023 "project/brotli/c/tools/brotli.c"
                                                        ;
    if (!is_ok) return 
# 1024 "project/brotli/c/tools/brotli.c" 3 4
                      0
# 1024 "project/brotli/c/tools/brotli.c"
                                  ;
  }
  return 
# 1026 "project/brotli/c/tools/brotli.c" 3 4
        1
# 1026 "project/brotli/c/tools/brotli.c"
                   ;
}

int main(int argc, char** argv) {
  Command command;
  Context context;
  
# 1032 "project/brotli/c/tools/brotli.c" 3 4
 int 
# 1032 "project/brotli/c/tools/brotli.c"
             is_ok = 
# 1032 "project/brotli/c/tools/brotli.c" 3 4
                     1
# 1032 "project/brotli/c/tools/brotli.c"
                                ;
  int i;

  context.quality = 11;
  context.lgwin = -1;
  context.verbosity = 0;
  context.force_overwrite = 
# 1038 "project/brotli/c/tools/brotli.c" 3 4
                           0
# 1038 "project/brotli/c/tools/brotli.c"
                                       ;
  context.junk_source = 
# 1039 "project/brotli/c/tools/brotli.c" 3 4
                       0
# 1039 "project/brotli/c/tools/brotli.c"
                                   ;
  context.copy_stat = 
# 1040 "project/brotli/c/tools/brotli.c" 3 4
                     1
# 1040 "project/brotli/c/tools/brotli.c"
                                ;
  context.test_integrity = 
# 1041 "project/brotli/c/tools/brotli.c" 3 4
                          0
# 1041 "project/brotli/c/tools/brotli.c"
                                      ;
  context.write_to_stdout = 
# 1042 "project/brotli/c/tools/brotli.c" 3 4
                           0
# 1042 "project/brotli/c/tools/brotli.c"
                                       ;
  context.decompress = 
# 1043 "project/brotli/c/tools/brotli.c" 3 4
                      0
# 1043 "project/brotli/c/tools/brotli.c"
                                  ;
  context.large_window = 
# 1044 "project/brotli/c/tools/brotli.c" 3 4
                        0
# 1044 "project/brotli/c/tools/brotli.c"
                                    ;
  context.output_path = 
# 1045 "project/brotli/c/tools/brotli.c" 3 4
                       ((void *)0)
# 1045 "project/brotli/c/tools/brotli.c"
                           ;
  context.suffix = ".br";
  for (i = 0; i < 20; ++i) context.not_input_indices[i] = 0;
  context.longest_path_len = 1;
  context.input_count = 0;

  context.argc = argc;
  context.argv = argv;
  context.modified_path = 
# 1053 "project/brotli/c/tools/brotli.c" 3 4
                         ((void *)0)
# 1053 "project/brotli/c/tools/brotli.c"
                             ;
  context.iterator = 0;
  context.ignore = 0;
  context.iterator_error = 
# 1056 "project/brotli/c/tools/brotli.c" 3 4
                          0
# 1056 "project/brotli/c/tools/brotli.c"
                                      ;
  context.buffer = 
# 1057 "project/brotli/c/tools/brotli.c" 3 4
                  ((void *)0)
# 1057 "project/brotli/c/tools/brotli.c"
                      ;
  context.current_input_path = 
# 1058 "project/brotli/c/tools/brotli.c" 3 4
                              ((void *)0)
# 1058 "project/brotli/c/tools/brotli.c"
                                  ;
  context.current_output_path = 
# 1059 "project/brotli/c/tools/brotli.c" 3 4
                               ((void *)0)
# 1059 "project/brotli/c/tools/brotli.c"
                                   ;
  context.fin = 
# 1060 "project/brotli/c/tools/brotli.c" 3 4
               ((void *)0)
# 1060 "project/brotli/c/tools/brotli.c"
                   ;
  context.fout = 
# 1061 "project/brotli/c/tools/brotli.c" 3 4
                ((void *)0)
# 1061 "project/brotli/c/tools/brotli.c"
                    ;

  command = ParseParams(&context);

  if (command == COMMAND_COMPRESS || command == COMMAND_DECOMPRESS ||
      command == COMMAND_TEST_INTEGRITY) {
    if (is_ok) {
      size_t modified_path_len =
          context.longest_path_len + strlen(context.suffix) + 1;
      context.modified_path = (char*)malloc(modified_path_len);
      context.buffer = (uint8_t*)malloc(kFileBufferSize * 2);
      if (!context.modified_path || !context.buffer) {
        fprintf(
# 1073 "project/brotli/c/tools/brotli.c" 3 4
               __stderrp
# 1073 "project/brotli/c/tools/brotli.c"
                     , "out of memory\n");
        is_ok = 
# 1074 "project/brotli/c/tools/brotli.c" 3 4
               0
# 1074 "project/brotli/c/tools/brotli.c"
                           ;
      } else {
        context.input = context.buffer;
        context.output = context.buffer + kFileBufferSize;
      }
    }
  }

  if (!is_ok) command = COMMAND_NOOP;

  switch (command) {
    case COMMAND_NOOP:
      break;

    case COMMAND_VERSION:
      PrintVersion();
      break;

    case COMMAND_COMPRESS:
      is_ok = CompressFiles(&context);
      break;

    case COMMAND_DECOMPRESS:
    case COMMAND_TEST_INTEGRITY:
      is_ok = DecompressFiles(&context);
      break;

    case COMMAND_HELP:
    case COMMAND_INVALID:
    default:
      is_ok = (command == COMMAND_HELP);
      PrintHelp(FileName(argv[0]), is_ok);
      break;
  }

  if (context.iterator_error) is_ok = 
# 1109 "project/brotli/c/tools/brotli.c" 3 4
                                     0
# 1109 "project/brotli/c/tools/brotli.c"
                                                 ;

  free(context.modified_path);
  free(context.buffer);

  if (!is_ok) exit(1);
  return 0;
}
