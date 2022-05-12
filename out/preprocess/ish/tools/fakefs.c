# 0 "project/ish/tools/fakefs.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/tools/fakefs.c"
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
# 2 "project/ish/tools/fakefs.c" 2
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
# 3 "project/ish/tools/fakefs.c" 2
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
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 4 "project/ish/tools/fakefs.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 5 "project/ish/tools/fakefs.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

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


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
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








# 6 "project/ish/tools/fakefs.c" 2
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
# 7 "project/ish/tools/fakefs.c" 2
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




# 8 "project/ish/tools/fakefs.c" 2
# 1 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 1 3 4
# 42 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 43 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 2 3 4
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
# 44 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 2 3 4
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



# 45 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 2 3 4
# 56 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 2 3 4







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







# 57 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 2 3 4
# 69 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
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
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4
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
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
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
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4






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


# 70 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 2 3 4



typedef int64_t la_int64_t;
# 95 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
typedef ssize_t la_ssize_t;
# 153 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_version_number(void);






 const char * archive_version_string(void);
# 169 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 const char * archive_version_details(void);






 const char * archive_zlib_version(void);
 const char * archive_liblzma_version(void);
 const char * archive_bzlib_version(void);
 const char * archive_liblz4_version(void);
 const char * archive_libzstd_version(void);


struct archive;
struct archive_entry;
# 222 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
typedef la_ssize_t archive_read_callback(struct archive *,
       void *_client_data, const void **_buffer);






typedef la_int64_t archive_skip_callback(struct archive *,
       void *_client_data, la_int64_t request);





typedef la_int64_t archive_seek_callback(struct archive *,
    void *_client_data, la_int64_t offset, int whence);


typedef la_ssize_t archive_write_callback(struct archive *,
       void *_client_data,
       const void *_buffer, size_t _length);

typedef int archive_open_callback(struct archive *, void *_client_data);

typedef int archive_close_callback(struct archive *, void *_client_data);

typedef int archive_free_callback(struct archive *, void *_client_data);





typedef int archive_switch_callback(struct archive *, void *_client_data1,
       void *_client_data2);





typedef const char *archive_passphrase_callback(struct archive *,
       void *_client_data);
# 384 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 struct archive *archive_read_new(void);
# 395 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_read_support_compression_all(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_bzip2(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_compress(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_gzip(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_lzip(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_lzma(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_none(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_program(struct archive *,
       const char *command) __attribute__((deprecated));
 int archive_read_support_compression_program_signature
  (struct archive *, const char *,
   const void * , size_t) __attribute__((deprecated));

 int archive_read_support_compression_rpm(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_uu(struct archive *)
  __attribute__((deprecated));
 int archive_read_support_compression_xz(struct archive *)
  __attribute__((deprecated));


 int archive_read_support_filter_all(struct archive *);
 int archive_read_support_filter_by_code(struct archive *, int);
 int archive_read_support_filter_bzip2(struct archive *);
 int archive_read_support_filter_compress(struct archive *);
 int archive_read_support_filter_gzip(struct archive *);
 int archive_read_support_filter_grzip(struct archive *);
 int archive_read_support_filter_lrzip(struct archive *);
 int archive_read_support_filter_lz4(struct archive *);
 int archive_read_support_filter_lzip(struct archive *);
 int archive_read_support_filter_lzma(struct archive *);
 int archive_read_support_filter_lzop(struct archive *);
 int archive_read_support_filter_none(struct archive *);
 int archive_read_support_filter_program(struct archive *,
       const char *command);
 int archive_read_support_filter_program_signature
  (struct archive *, const char * ,
        const void * , size_t);
 int archive_read_support_filter_rpm(struct archive *);
 int archive_read_support_filter_uu(struct archive *);
 int archive_read_support_filter_xz(struct archive *);
 int archive_read_support_filter_zstd(struct archive *);

 int archive_read_support_format_7zip(struct archive *);
 int archive_read_support_format_all(struct archive *);
 int archive_read_support_format_ar(struct archive *);
 int archive_read_support_format_by_code(struct archive *, int);
 int archive_read_support_format_cab(struct archive *);
 int archive_read_support_format_cpio(struct archive *);
 int archive_read_support_format_empty(struct archive *);
 int archive_read_support_format_gnutar(struct archive *);
 int archive_read_support_format_iso9660(struct archive *);
 int archive_read_support_format_lha(struct archive *);
 int archive_read_support_format_mtree(struct archive *);
 int archive_read_support_format_rar(struct archive *);
 int archive_read_support_format_rar5(struct archive *);
 int archive_read_support_format_raw(struct archive *);
 int archive_read_support_format_tar(struct archive *);
 int archive_read_support_format_warc(struct archive *);
 int archive_read_support_format_xar(struct archive *);


 int archive_read_support_format_zip(struct archive *);



 int archive_read_support_format_zip_streamable(struct archive *);

 int archive_read_support_format_zip_seekable(struct archive *);





 int archive_read_set_format(struct archive *, int);
 int archive_read_append_filter(struct archive *, int);
 int archive_read_append_filter_program(struct archive *,
    const char *);
 int archive_read_append_filter_program_signature
    (struct archive *, const char *, const void * , size_t);


 int archive_read_set_open_callback(struct archive *,
    archive_open_callback *);
 int archive_read_set_read_callback(struct archive *,
    archive_read_callback *);
 int archive_read_set_seek_callback(struct archive *,
    archive_seek_callback *);
 int archive_read_set_skip_callback(struct archive *,
    archive_skip_callback *);
 int archive_read_set_close_callback(struct archive *,
    archive_close_callback *);

 int archive_read_set_switch_callback(struct archive *,
    archive_switch_callback *);


 int archive_read_set_callback_data(struct archive *, void *);

 int archive_read_set_callback_data2(struct archive *, void *,
    unsigned int);

 int archive_read_add_callback_data(struct archive *, void *,
    unsigned int);

 int archive_read_append_callback_data(struct archive *, void *);

 int archive_read_prepend_callback_data(struct archive *, void *);


 int archive_read_open1(struct archive *);


 int archive_read_open(struct archive *, void *_client_data,
       archive_open_callback *, archive_read_callback *,
       archive_close_callback *);
 int archive_read_open2(struct archive *, void *_client_data,
       archive_open_callback *, archive_read_callback *,
       archive_skip_callback *, archive_close_callback *);







 int archive_read_open_filename(struct archive *,
       const char *_filename, size_t _block_size);


 int archive_read_open_filenames(struct archive *,
       const char **_filenames, size_t _block_size);
 int archive_read_open_filename_w(struct archive *,
       const wchar_t *_filename, size_t _block_size);

 int archive_read_open_file(struct archive *,
       const char *_filename, size_t _block_size) __attribute__((deprecated));

 int archive_read_open_memory(struct archive *,
       const void * buff, size_t size);

 int archive_read_open_memory2(struct archive *a, const void *buff,
       size_t size, size_t read_size);

 int archive_read_open_fd(struct archive *, int _fd,
       size_t _block_size);


 int archive_read_open_FILE(struct archive *, FILE *_file);


 int archive_read_next_header(struct archive *,
       struct archive_entry **);


 int archive_read_next_header2(struct archive *,
       struct archive_entry *);





 la_int64_t archive_read_header_position(struct archive *);
# 584 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_read_has_encrypted_entries(struct archive *);





 int archive_read_format_capabilities(struct archive *);


 la_ssize_t archive_read_data(struct archive *,
        void *, size_t);


 la_int64_t archive_seek_data(struct archive *, la_int64_t, int);







 int archive_read_data_block(struct archive *a,
      const void **buff, size_t *size, la_int64_t *offset);







 int archive_read_data_skip(struct archive *);
 int archive_read_data_into_fd(struct archive *, int fd);





 int archive_read_set_format_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_read_set_filter_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_read_set_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_read_set_options(struct archive *_a,
       const char *opts);




 int archive_read_add_passphrase(struct archive *, const char *);
 int archive_read_set_passphrase_callback(struct archive *,
       void *client_data, archive_passphrase_callback *);
# 703 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_read_extract(struct archive *, struct archive_entry *,
       int flags);
 int archive_read_extract2(struct archive *, struct archive_entry *,
       struct archive * );
 void archive_read_extract_set_progress_callback(struct archive *,
       void (*_progress_func)(void *), void *_user_data);



 void archive_read_extract_set_skip_file(struct archive *,
       la_int64_t, la_int64_t);


 int archive_read_close(struct archive *);


 int archive_read_free(struct archive *);


 int archive_read_finish(struct archive *) __attribute__((deprecated));
# 740 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 struct archive *archive_write_new(void);
 int archive_write_set_bytes_per_block(struct archive *,
       int bytes_per_block);
 int archive_write_get_bytes_per_block(struct archive *);

 int archive_write_set_bytes_in_last_block(struct archive *,
       int bytes_in_last_block);
 int archive_write_get_bytes_in_last_block(struct archive *);



 int archive_write_set_skip_file(struct archive *,
    la_int64_t, la_int64_t);


 int archive_write_set_compression_bzip2(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_compress(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_gzip(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_lzip(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_lzma(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_none(struct archive *)
  __attribute__((deprecated));
 int archive_write_set_compression_program(struct archive *,
       const char *cmd) __attribute__((deprecated));
 int archive_write_set_compression_xz(struct archive *)
  __attribute__((deprecated));



 int archive_write_add_filter(struct archive *, int filter_code);
 int archive_write_add_filter_by_name(struct archive *,
       const char *name);
 int archive_write_add_filter_b64encode(struct archive *);
 int archive_write_add_filter_bzip2(struct archive *);
 int archive_write_add_filter_compress(struct archive *);
 int archive_write_add_filter_grzip(struct archive *);
 int archive_write_add_filter_gzip(struct archive *);
 int archive_write_add_filter_lrzip(struct archive *);
 int archive_write_add_filter_lz4(struct archive *);
 int archive_write_add_filter_lzip(struct archive *);
 int archive_write_add_filter_lzma(struct archive *);
 int archive_write_add_filter_lzop(struct archive *);
 int archive_write_add_filter_none(struct archive *);
 int archive_write_add_filter_program(struct archive *,
       const char *cmd);
 int archive_write_add_filter_uuencode(struct archive *);
 int archive_write_add_filter_xz(struct archive *);
 int archive_write_add_filter_zstd(struct archive *);



 int archive_write_set_format(struct archive *, int format_code);
 int archive_write_set_format_by_name(struct archive *,
       const char *name);

 int archive_write_set_format_7zip(struct archive *);
 int archive_write_set_format_ar_bsd(struct archive *);
 int archive_write_set_format_ar_svr4(struct archive *);
 int archive_write_set_format_cpio(struct archive *);
 int archive_write_set_format_cpio_bin(struct archive *);
 int archive_write_set_format_cpio_newc(struct archive *);
 int archive_write_set_format_cpio_odc(struct archive *);
 int archive_write_set_format_cpio_pwb(struct archive *);
 int archive_write_set_format_gnutar(struct archive *);
 int archive_write_set_format_iso9660(struct archive *);
 int archive_write_set_format_mtree(struct archive *);
 int archive_write_set_format_mtree_classic(struct archive *);

 int archive_write_set_format_pax(struct archive *);
 int archive_write_set_format_pax_restricted(struct archive *);
 int archive_write_set_format_raw(struct archive *);
 int archive_write_set_format_shar(struct archive *);
 int archive_write_set_format_shar_dump(struct archive *);
 int archive_write_set_format_ustar(struct archive *);
 int archive_write_set_format_v7tar(struct archive *);
 int archive_write_set_format_warc(struct archive *);
 int archive_write_set_format_xar(struct archive *);
 int archive_write_set_format_zip(struct archive *);
 int archive_write_set_format_filter_by_ext(struct archive *a, const char *filename);
 int archive_write_set_format_filter_by_ext_def(struct archive *a, const char *filename, const char * def_ext);
 int archive_write_zip_set_compression_deflate(struct archive *);
 int archive_write_zip_set_compression_store(struct archive *);

 int archive_write_open(struct archive *, void *,
       archive_open_callback *, archive_write_callback *,
       archive_close_callback *);
 int archive_write_open2(struct archive *, void *,
       archive_open_callback *, archive_write_callback *,
       archive_close_callback *, archive_free_callback *);
 int archive_write_open_fd(struct archive *, int _fd);
 int archive_write_open_filename(struct archive *, const char *_file);
 int archive_write_open_filename_w(struct archive *,
       const wchar_t *_file);

 int archive_write_open_file(struct archive *, const char *_file)
  __attribute__((deprecated));
 int archive_write_open_FILE(struct archive *, FILE *);


 int archive_write_open_memory(struct archive *,
   void *_buffer, size_t _buffSize, size_t *_used);





 int archive_write_header(struct archive *,
       struct archive_entry *);
 la_ssize_t archive_write_data(struct archive *,
       const void *, size_t);


 la_ssize_t archive_write_data_block(struct archive *,
        const void *, size_t, la_int64_t);

 int archive_write_finish_entry(struct archive *);
 int archive_write_close(struct archive *);



 int archive_write_fail(struct archive *);


 int archive_write_free(struct archive *);


 int archive_write_finish(struct archive *) __attribute__((deprecated));






 int archive_write_set_format_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_write_set_filter_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_write_set_option(struct archive *_a,
       const char *m, const char *o,
       const char *v);

 int archive_write_set_options(struct archive *_a,
       const char *opts);




 int archive_write_set_passphrase(struct archive *_a, const char *p);
 int archive_write_set_passphrase_callback(struct archive *,
       void *client_data, archive_passphrase_callback *);
# 916 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 struct archive *archive_write_disk_new(void);

 int archive_write_disk_set_skip_file(struct archive *,
    la_int64_t, la_int64_t);


 int archive_write_disk_set_options(struct archive *,
       int flags);
# 941 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_write_disk_set_standard_lookup(struct archive *);





 int archive_write_disk_set_group_lookup(struct archive *,
    void * ,
    la_int64_t (*)(void *, const char *, la_int64_t),
    void (* )(void *));
 int archive_write_disk_set_user_lookup(struct archive *,
    void * ,
    la_int64_t (*)(void *, const char *, la_int64_t),
    void (* )(void *));
 la_int64_t archive_write_disk_gid(struct archive *, const char *, la_int64_t);
 la_int64_t archive_write_disk_uid(struct archive *, const char *, la_int64_t);






 struct archive *archive_read_disk_new(void);



 int archive_read_disk_set_symlink_logical(struct archive *);

 int archive_read_disk_set_symlink_physical(struct archive *);

 int archive_read_disk_set_symlink_hybrid(struct archive *);

 int archive_read_disk_entry_from_file(struct archive *,
    struct archive_entry *, int , const struct stat *);


 const char *archive_read_disk_gname(struct archive *, la_int64_t);
 const char *archive_read_disk_uname(struct archive *, la_int64_t);


 int archive_read_disk_set_standard_lookup(struct archive *);

 int archive_read_disk_set_gname_lookup(struct archive *,
    void * ,
    const char *(* )(void *, la_int64_t),
    void (* )(void *));
 int archive_read_disk_set_uname_lookup(struct archive *,
    void * ,
    const char *(* )(void *, la_int64_t),
    void (* )(void *));

 int archive_read_disk_open(struct archive *, const char *);
 int archive_read_disk_open_w(struct archive *, const wchar_t *);







 int archive_read_disk_descend(struct archive *);
 int archive_read_disk_can_descend(struct archive *);
 int archive_read_disk_current_filesystem(struct archive *);
 int archive_read_disk_current_filesystem_is_synthetic(struct archive *);
 int archive_read_disk_current_filesystem_is_remote(struct archive *);

 int archive_read_disk_set_atime_restored(struct archive *);
# 1030 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_read_disk_set_behavior(struct archive *,
      int flags);







 int archive_read_disk_set_matching(struct archive *,
      struct archive *_matching, void (*_excluded_func)
      (struct archive *, void *, struct archive_entry *),
      void *_client_data);
 int archive_read_disk_set_metadata_filter_callback(struct archive *,
      int (*_metadata_filter_func)(struct archive *, void *,
       struct archive_entry *), void *_client_data);



 int archive_free(struct archive *);
# 1060 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_filter_count(struct archive *);
 la_int64_t archive_filter_bytes(struct archive *, int);
 int archive_filter_code(struct archive *, int);
 const char * archive_filter_name(struct archive *, int);





 la_int64_t archive_position_compressed(struct archive *)
    __attribute__((deprecated));

 la_int64_t archive_position_uncompressed(struct archive *)
    __attribute__((deprecated));

 const char *archive_compression_name(struct archive *)
    __attribute__((deprecated));

 int archive_compression(struct archive *)
    __attribute__((deprecated));


 int archive_errno(struct archive *);
 const char *archive_error_string(struct archive *);
 const char *archive_format_name(struct archive *);
 int archive_format(struct archive *);
 void archive_clear_error(struct archive *);
 void archive_set_error(struct archive *, int _err,
       const char *fmt, ...) __attribute__((__format__ (__printf__, 3, 4)));
 void archive_copy_error(struct archive *dest,
       struct archive *src);
 int archive_file_count(struct archive *);




 struct archive *archive_match_new(void);
 int archive_match_free(struct archive *);







 int archive_match_excluded(struct archive *,
      struct archive_entry *);




 int archive_match_path_excluded(struct archive *,
      struct archive_entry *);

 int archive_match_set_inclusion_recursion(struct archive *, int);

 int archive_match_exclude_pattern(struct archive *, const char *);
 int archive_match_exclude_pattern_w(struct archive *,
      const wchar_t *);

 int archive_match_exclude_pattern_from_file(struct archive *,
      const char *, int _nullSeparator);
 int archive_match_exclude_pattern_from_file_w(struct archive *,
      const wchar_t *, int _nullSeparator);

 int archive_match_include_pattern(struct archive *, const char *);
 int archive_match_include_pattern_w(struct archive *,
      const wchar_t *);

 int archive_match_include_pattern_from_file(struct archive *,
      const char *, int _nullSeparator);
 int archive_match_include_pattern_from_file_w(struct archive *,
      const wchar_t *, int _nullSeparator);




 int archive_match_path_unmatched_inclusions(struct archive *);


 int archive_match_path_unmatched_inclusions_next(
      struct archive *, const char **);
 int archive_match_path_unmatched_inclusions_next_w(
      struct archive *, const wchar_t **);





 int archive_match_time_excluded(struct archive *,
      struct archive_entry *);
# 1167 "/usr/local/Cellar/libarchive/3.6.1/include/archive.h" 3 4
 int archive_match_include_time(struct archive *, int _flag,
      time_t _sec, long _nsec);

 int archive_match_include_date(struct archive *, int _flag,
      const char *_datestr);
 int archive_match_include_date_w(struct archive *, int _flag,
      const wchar_t *_datestr);

 int archive_match_include_file_time(struct archive *,
      int _flag, const char *_pathname);
 int archive_match_include_file_time_w(struct archive *,
      int _flag, const wchar_t *_pathname);

 int archive_match_exclude_entry(struct archive *,
      int _flag, struct archive_entry *);





 int archive_match_owner_excluded(struct archive *,
      struct archive_entry *);

 int archive_match_include_uid(struct archive *, la_int64_t);
 int archive_match_include_gid(struct archive *, la_int64_t);
 int archive_match_include_uname(struct archive *, const char *);
 int archive_match_include_uname_w(struct archive *,
      const wchar_t *);
 int archive_match_include_gname(struct archive *, const char *);
 int archive_match_include_gname_w(struct archive *,
      const wchar_t *);



 int archive_utility_string_sort(char **);
# 9 "project/ish/tools/fakefs.c" 2
# 1 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 1 3 4
# 43 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
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
# 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
typedef __int32_t fd_mask;
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
# 44 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 45 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 2 3 4
# 156 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
struct archive;
struct archive_entry;
# 204 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 struct archive_entry *archive_entry_clear(struct archive_entry *);

 struct archive_entry *archive_entry_clone(struct archive_entry *);
 void archive_entry_free(struct archive_entry *);
 struct archive_entry *archive_entry_new(void);
# 217 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 struct archive_entry *archive_entry_new2(struct archive *);
# 238 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 time_t archive_entry_atime(struct archive_entry *);
 long archive_entry_atime_nsec(struct archive_entry *);
 int archive_entry_atime_is_set(struct archive_entry *);
 time_t archive_entry_birthtime(struct archive_entry *);
 long archive_entry_birthtime_nsec(struct archive_entry *);
 int archive_entry_birthtime_is_set(struct archive_entry *);
 time_t archive_entry_ctime(struct archive_entry *);
 long archive_entry_ctime_nsec(struct archive_entry *);
 int archive_entry_ctime_is_set(struct archive_entry *);
 dev_t archive_entry_dev(struct archive_entry *);
 int archive_entry_dev_is_set(struct archive_entry *);
 dev_t archive_entry_devmajor(struct archive_entry *);
 dev_t archive_entry_devminor(struct archive_entry *);
 mode_t archive_entry_filetype(struct archive_entry *);
 void archive_entry_fflags(struct archive_entry *,
       unsigned long * ,
       unsigned long * );
 const char *archive_entry_fflags_text(struct archive_entry *);
 la_int64_t archive_entry_gid(struct archive_entry *);
 const char *archive_entry_gname(struct archive_entry *);
 const char *archive_entry_gname_utf8(struct archive_entry *);
 const wchar_t *archive_entry_gname_w(struct archive_entry *);
 const char *archive_entry_hardlink(struct archive_entry *);
 const char *archive_entry_hardlink_utf8(struct archive_entry *);
 const wchar_t *archive_entry_hardlink_w(struct archive_entry *);
 la_int64_t archive_entry_ino(struct archive_entry *);
 la_int64_t archive_entry_ino64(struct archive_entry *);
 int archive_entry_ino_is_set(struct archive_entry *);
 mode_t archive_entry_mode(struct archive_entry *);
 time_t archive_entry_mtime(struct archive_entry *);
 long archive_entry_mtime_nsec(struct archive_entry *);
 int archive_entry_mtime_is_set(struct archive_entry *);
 unsigned int archive_entry_nlink(struct archive_entry *);
 const char *archive_entry_pathname(struct archive_entry *);
 const char *archive_entry_pathname_utf8(struct archive_entry *);
 const wchar_t *archive_entry_pathname_w(struct archive_entry *);
 mode_t archive_entry_perm(struct archive_entry *);
 dev_t archive_entry_rdev(struct archive_entry *);
 dev_t archive_entry_rdevmajor(struct archive_entry *);
 dev_t archive_entry_rdevminor(struct archive_entry *);
 const char *archive_entry_sourcepath(struct archive_entry *);
 const wchar_t *archive_entry_sourcepath_w(struct archive_entry *);
 la_int64_t archive_entry_size(struct archive_entry *);
 int archive_entry_size_is_set(struct archive_entry *);
 const char *archive_entry_strmode(struct archive_entry *);
 const char *archive_entry_symlink(struct archive_entry *);
 const char *archive_entry_symlink_utf8(struct archive_entry *);
 int archive_entry_symlink_type(struct archive_entry *);
 const wchar_t *archive_entry_symlink_w(struct archive_entry *);
 la_int64_t archive_entry_uid(struct archive_entry *);
 const char *archive_entry_uname(struct archive_entry *);
 const char *archive_entry_uname_utf8(struct archive_entry *);
 const wchar_t *archive_entry_uname_w(struct archive_entry *);
 int archive_entry_is_data_encrypted(struct archive_entry *);
 int archive_entry_is_metadata_encrypted(struct archive_entry *);
 int archive_entry_is_encrypted(struct archive_entry *);
# 304 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 void archive_entry_set_atime(struct archive_entry *, time_t, long);
 void archive_entry_unset_atime(struct archive_entry *);



 void archive_entry_set_birthtime(struct archive_entry *, time_t, long);
 void archive_entry_unset_birthtime(struct archive_entry *);
 void archive_entry_set_ctime(struct archive_entry *, time_t, long);
 void archive_entry_unset_ctime(struct archive_entry *);
 void archive_entry_set_dev(struct archive_entry *, dev_t);
 void archive_entry_set_devmajor(struct archive_entry *, dev_t);
 void archive_entry_set_devminor(struct archive_entry *, dev_t);
 void archive_entry_set_filetype(struct archive_entry *, unsigned int);
 void archive_entry_set_fflags(struct archive_entry *,
     unsigned long , unsigned long );


 const char *archive_entry_copy_fflags_text(struct archive_entry *,
     const char *);
 const wchar_t *archive_entry_copy_fflags_text_w(struct archive_entry *,
     const wchar_t *);
 void archive_entry_set_gid(struct archive_entry *, la_int64_t);
 void archive_entry_set_gname(struct archive_entry *, const char *);
 void archive_entry_set_gname_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_gname(struct archive_entry *, const char *);
 void archive_entry_copy_gname_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_gname_utf8(struct archive_entry *, const char *);
 void archive_entry_set_hardlink(struct archive_entry *, const char *);
 void archive_entry_set_hardlink_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_hardlink(struct archive_entry *, const char *);
 void archive_entry_copy_hardlink_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_hardlink_utf8(struct archive_entry *, const char *);
 void archive_entry_set_ino(struct archive_entry *, la_int64_t);
 void archive_entry_set_ino64(struct archive_entry *, la_int64_t);
 void archive_entry_set_link(struct archive_entry *, const char *);
 void archive_entry_set_link_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_link(struct archive_entry *, const char *);
 void archive_entry_copy_link_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_link_utf8(struct archive_entry *, const char *);
 void archive_entry_set_mode(struct archive_entry *, mode_t);
 void archive_entry_set_mtime(struct archive_entry *, time_t, long);
 void archive_entry_unset_mtime(struct archive_entry *);
 void archive_entry_set_nlink(struct archive_entry *, unsigned int);
 void archive_entry_set_pathname(struct archive_entry *, const char *);
 void archive_entry_set_pathname_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_pathname(struct archive_entry *, const char *);
 void archive_entry_copy_pathname_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_pathname_utf8(struct archive_entry *, const char *);
 void archive_entry_set_perm(struct archive_entry *, mode_t);
 void archive_entry_set_rdev(struct archive_entry *, dev_t);
 void archive_entry_set_rdevmajor(struct archive_entry *, dev_t);
 void archive_entry_set_rdevminor(struct archive_entry *, dev_t);
 void archive_entry_set_size(struct archive_entry *, la_int64_t);
 void archive_entry_unset_size(struct archive_entry *);
 void archive_entry_copy_sourcepath(struct archive_entry *, const char *);
 void archive_entry_copy_sourcepath_w(struct archive_entry *, const wchar_t *);
 void archive_entry_set_symlink(struct archive_entry *, const char *);
 void archive_entry_set_symlink_type(struct archive_entry *, int);
 void archive_entry_set_symlink_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_symlink(struct archive_entry *, const char *);
 void archive_entry_copy_symlink_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_symlink_utf8(struct archive_entry *, const char *);
 void archive_entry_set_uid(struct archive_entry *, la_int64_t);
 void archive_entry_set_uname(struct archive_entry *, const char *);
 void archive_entry_set_uname_utf8(struct archive_entry *, const char *);
 void archive_entry_copy_uname(struct archive_entry *, const char *);
 void archive_entry_copy_uname_w(struct archive_entry *, const wchar_t *);
 int archive_entry_update_uname_utf8(struct archive_entry *, const char *);
 void archive_entry_set_is_data_encrypted(struct archive_entry *, char is_encrypted);
 void archive_entry_set_is_metadata_encrypted(struct archive_entry *, char is_encrypted);
# 386 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 const struct stat *archive_entry_stat(struct archive_entry *);
 void archive_entry_copy_stat(struct archive_entry *, const struct stat *);
# 396 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 const void * archive_entry_mac_metadata(struct archive_entry *, size_t *);
 void archive_entry_copy_mac_metadata(struct archive_entry *, const void *, size_t);
# 410 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 const unsigned char * archive_entry_digest(struct archive_entry *, int );
# 523 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 void archive_entry_acl_clear(struct archive_entry *);
 int archive_entry_acl_add_entry(struct archive_entry *,
     int , int , int ,
     int , const char * );
 int archive_entry_acl_add_entry_w(struct archive_entry *,
     int , int , int ,
     int , const wchar_t * );






 int archive_entry_acl_reset(struct archive_entry *, int );
 int archive_entry_acl_next(struct archive_entry *, int ,
     int * , int * , int * ,
     int * , const char ** );
# 569 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 wchar_t *archive_entry_acl_to_text_w(struct archive_entry *,
     la_ssize_t * , int );
 char *archive_entry_acl_to_text(struct archive_entry *,
     la_ssize_t * , int );
 int archive_entry_acl_from_text_w(struct archive_entry *,
     const wchar_t * , int );
 int archive_entry_acl_from_text(struct archive_entry *,
     const char * , int );






 const wchar_t *archive_entry_acl_text_w(struct archive_entry *,
      int ) __attribute__((deprecated));
 const char *archive_entry_acl_text(struct archive_entry *,
      int ) __attribute__((deprecated));


 int archive_entry_acl_types(struct archive_entry *);


 int archive_entry_acl_count(struct archive_entry *, int );



struct archive_acl;
 struct archive_acl *archive_entry_acl(struct archive_entry *);





 void archive_entry_xattr_clear(struct archive_entry *);
 void archive_entry_xattr_add_entry(struct archive_entry *,
     const char * , const void * ,
     size_t );






 int archive_entry_xattr_count(struct archive_entry *);
 int archive_entry_xattr_reset(struct archive_entry *);
 int archive_entry_xattr_next(struct archive_entry *,
     const char ** , const void ** , size_t *);





 void archive_entry_sparse_clear(struct archive_entry *);
 void archive_entry_sparse_add_entry(struct archive_entry *,
     la_int64_t , la_int64_t );






 int archive_entry_sparse_count(struct archive_entry *);
 int archive_entry_sparse_reset(struct archive_entry *);
 int archive_entry_sparse_next(struct archive_entry *,
     la_int64_t * , la_int64_t * );
# 664 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
struct archive_entry_linkresolver;
# 706 "/usr/local/Cellar/libarchive/3.6.1/include/archive_entry.h" 3 4
 struct archive_entry_linkresolver *archive_entry_linkresolver_new(void);
 void archive_entry_linkresolver_set_strategy(
 struct archive_entry_linkresolver *, int );
 void archive_entry_linkresolver_free(struct archive_entry_linkresolver *);
 void archive_entry_linkify(struct archive_entry_linkresolver *,
    struct archive_entry **, struct archive_entry **);
 struct archive_entry *archive_entry_partial_links(
    struct archive_entry_linkresolver *res, unsigned int *links);
# 10 "project/ish/tools/fakefs.c" 2


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 1



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
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
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 1






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4


# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 8 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdnoreturn.h" 1 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/ish/misc.h" 2
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
# 7 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/fake-db.h" 2

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
# 13 "project/ish/tools/fakefs.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sqlutil.h" 1


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sqlite3.h" 1 3 4
# 4 "/Users/washi38/University/Labo/c_project_analysis/project/ish/fs/sqlutil.h" 2
# 14 "project/ish/tools/fakefs.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h" 1




struct fakefsify_error {
    int line;
    enum {
        ERR_ARCHIVE,
        ERR_SQLITE,
        ERR_POSIX,
        ERR_CANCELLED,
    } type;
    int code;
    char *message;
};

struct progress {
    void *cookie;
    void (*callback)(void *cookie, double progress, const char *message, 
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h" 3 4
                                                                        _Bool 
# 19 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h"
                                                                             *cancel_out);
};


# 22 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h" 3 4
_Bool 
# 22 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h"
    fakefs_import(const char *archive_path, const char *fs, struct fakefsify_error *err_out, struct progress progress);

# 23 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h" 3 4
_Bool 
# 23 "/Users/washi38/University/Labo/c_project_analysis/project/ish/tools/fakefs.h"
    fakefs_export(const char *fs, const char *archive_path, struct fakefsify_error *err_out, struct progress progress);
# 15 "project/ish/tools/fakefs.c" 2
# 35 "project/ish/tools/fakefs.c"
static 
# 35 "project/ish/tools/fakefs.c" 3 4
      _Bool 
# 35 "project/ish/tools/fakefs.c"
           progress_update(struct progress *p, double progress, const char *message) {
    
# 36 "project/ish/tools/fakefs.c" 3 4
   _Bool 
# 36 "project/ish/tools/fakefs.c"
        cancelled = 
# 36 "project/ish/tools/fakefs.c" 3 4
                    0
# 36 "project/ish/tools/fakefs.c"
                         ;
    if (p && p->callback)
        p->callback(p->cookie, progress, message, &cancelled);
    return !cancelled;
}




static 
# 45 "project/ish/tools/fakefs.c" 3 4
      _Bool 
# 45 "project/ish/tools/fakefs.c"
           path_normalize(const char *path, char *out) {



    while (path[0] != '\0') {
        while (path[0] == '/')
            path++;
        if (path[0] == '\0')
            break;

        if (path[0] == '.' && path[1] == '.' && (path[2] == '\0' || path[2] == '/'))
            return 
# 56 "project/ish/tools/fakefs.c" 3 4
                  0
# 56 "project/ish/tools/fakefs.c"
                       ;
        if (path[0] == '.' && (path[1] == '\0' || path[1] == '/')) {
            path++;
        } else {
            *out++ = '/';
            while (path[0] != '/' && path[0] != '\0')
                *out++ = *path++;
        }
    }
    *out = '\0';
    return 
# 66 "project/ish/tools/fakefs.c" 3 4
          1
# 66 "project/ish/tools/fakefs.c"
              ;
}

static const char *schema = "create table meta (id integer unique default 0, db_inode integer); insert into meta (db_inode) values (0); create table stats (inode integer primary key, stat blob); create table paths (path blob primary key, inode integer references stats(inode)); create index inode_to_path on paths (inode, path); pragma user_version=3;"







 ;


# 79 "project/ish/tools/fakefs.c" 3 4
_Bool 
# 79 "project/ish/tools/fakefs.c"
    fakefs_import(const char *archive_path, const char *fs, struct fakefsify_error *err_out, struct progress p) {
    int err = mkdir(fs, 0777);
    if (err < 0)
        do { err_out->line = 82; err_out->type = ERR_POSIX; err_out->code = 
# 82 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 82 "project/ish/tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 82 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 82 "project/ish/tools/fakefs.c"
       )); return 
# 82 "project/ish/tools/fakefs.c" 3 4
       0
# 82 "project/ish/tools/fakefs.c"
       ; } while (0);


    char path_tmp[
# 85 "project/ish/tools/fakefs.c" 3 4
                 1024
# 85 "project/ish/tools/fakefs.c"
                         ];
    
# 86 "project/ish/tools/fakefs.c" 3 4
   __builtin___snprintf_chk (
# 86 "project/ish/tools/fakefs.c"
   path_tmp
# 86 "project/ish/tools/fakefs.c" 3 4
   , 
# 86 "project/ish/tools/fakefs.c"
   sizeof(path_tmp)
# 86 "project/ish/tools/fakefs.c" 3 4
   , 0, __builtin_object_size (
# 86 "project/ish/tools/fakefs.c"
   path_tmp
# 86 "project/ish/tools/fakefs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 86 "project/ish/tools/fakefs.c"
   "%s/data", fs
# 86 "project/ish/tools/fakefs.c" 3 4
   )
# 86 "project/ish/tools/fakefs.c"
                                                      ;
    err = mkdir(path_tmp, 0777);
    int root_fd = open(path_tmp, 
# 88 "project/ish/tools/fakefs.c" 3 4
                                0x0000
# 88 "project/ish/tools/fakefs.c"
                                        );
    if (root_fd < 0)
        do { err_out->line = 90; err_out->type = ERR_POSIX; err_out->code = 
# 90 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 90 "project/ish/tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 90 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 90 "project/ish/tools/fakefs.c"
       )); return 
# 90 "project/ish/tools/fakefs.c" 3 4
       0
# 90 "project/ish/tools/fakefs.c"
       ; } while (0);


    
# 93 "project/ish/tools/fakefs.c" 3 4
   __builtin___snprintf_chk (
# 93 "project/ish/tools/fakefs.c"
   path_tmp
# 93 "project/ish/tools/fakefs.c" 3 4
   , 
# 93 "project/ish/tools/fakefs.c"
   sizeof(path_tmp)
# 93 "project/ish/tools/fakefs.c" 3 4
   , 0, __builtin_object_size (
# 93 "project/ish/tools/fakefs.c"
   path_tmp
# 93 "project/ish/tools/fakefs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 93 "project/ish/tools/fakefs.c"
   "%s/meta.db", fs
# 93 "project/ish/tools/fakefs.c" 3 4
   )
# 93 "project/ish/tools/fakefs.c"
                                                         ;
    sqlite3 *db;
    err = sqlite3_open_v2(path_tmp, &db, 
# 95 "project/ish/tools/fakefs.c" 3 4
                                        0x00000002 
# 95 "project/ish/tools/fakefs.c"
                                                              | 
# 95 "project/ish/tools/fakefs.c" 3 4
                                                                0x00000004
# 95 "project/ish/tools/fakefs.c"
                                                                                  , 
# 95 "project/ish/tools/fakefs.c" 3 4
                                                                                    ((void *)0)
# 95 "project/ish/tools/fakefs.c"
                                                                                        );
    if (err != 
# 96 "project/ish/tools/fakefs.c" 3 4
   0 
# 96 "project/ish/tools/fakefs.c"
   && err != 
# 96 "project/ish/tools/fakefs.c" 3 4
   100 
# 96 "project/ish/tools/fakefs.c"
   && err != 
# 96 "project/ish/tools/fakefs.c" 3 4
   101
# 96 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 96; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 96 "project/ish/tools/fakefs.c" 3 4
   0
# 96 "project/ish/tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "pragma journal_mode=wal", 
# 97 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 97 "project/ish/tools/fakefs.c"
   , 
# 97 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 97 "project/ish/tools/fakefs.c"
   , 
# 97 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 97 "project/ish/tools/fakefs.c"
   ); if (err != 
# 97 "project/ish/tools/fakefs.c" 3 4
   0 
# 97 "project/ish/tools/fakefs.c"
   && err != 
# 97 "project/ish/tools/fakefs.c" 3 4
   100 
# 97 "project/ish/tools/fakefs.c"
   && err != 
# 97 "project/ish/tools/fakefs.c" 3 4
   101
# 97 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 97; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 97 "project/ish/tools/fakefs.c" 3 4
   0
# 97 "project/ish/tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "begin", 
# 98 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 98 "project/ish/tools/fakefs.c"
   , 
# 98 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 98 "project/ish/tools/fakefs.c"
   , 
# 98 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 98 "project/ish/tools/fakefs.c"
   ); if (err != 
# 98 "project/ish/tools/fakefs.c" 3 4
   0 
# 98 "project/ish/tools/fakefs.c"
   && err != 
# 98 "project/ish/tools/fakefs.c" 3 4
   100 
# 98 "project/ish/tools/fakefs.c"
   && err != 
# 98 "project/ish/tools/fakefs.c" 3 4
   101
# 98 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 98; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 98 "project/ish/tools/fakefs.c" 3 4
   0
# 98 "project/ish/tools/fakefs.c"
   ; } while (0);;
    err = sqlite3_exec(db, schema, 
# 99 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 99 "project/ish/tools/fakefs.c"
   , 
# 99 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 99 "project/ish/tools/fakefs.c"
   , 
# 99 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 99 "project/ish/tools/fakefs.c"
   ); if (err != 
# 99 "project/ish/tools/fakefs.c" 3 4
   0 
# 99 "project/ish/tools/fakefs.c"
   && err != 
# 99 "project/ish/tools/fakefs.c" 3 4
   100 
# 99 "project/ish/tools/fakefs.c"
   && err != 
# 99 "project/ish/tools/fakefs.c" 3 4
   101
# 99 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 99; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 99 "project/ish/tools/fakefs.c" 3 4
   0
# 99 "project/ish/tools/fakefs.c"
   ; } while (0);;


    struct archive *archive = archive_read_new();
    if (archive == 
# 103 "project/ish/tools/fakefs.c" 3 4
                  ((void *)0)
# 103 "project/ish/tools/fakefs.c"
                      )
        do { err_out->line = 104; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 104 "project/ish/tools/fakefs.c" 3 4
       0
# 104 "project/ish/tools/fakefs.c"
       ; } while (0);
    archive_read_support_filter_gzip(archive);
    archive_read_support_format_tar(archive);
    if (archive_read_open_filename(archive, archive_path, 65536) != 
# 107 "project/ish/tools/fakefs.c" 3 4
                                                                   0
# 107 "project/ish/tools/fakefs.c"
                                                                             )
        do { err_out->line = 108; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 108 "project/ish/tools/fakefs.c" 3 4
       0
# 108 "project/ish/tools/fakefs.c"
       ; } while (0);

    struct stat real_stat;
    if (stat(archive_path, &real_stat) < 0)
        do { err_out->line = 112; err_out->type = ERR_POSIX; err_out->code = 
# 112 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 112 "project/ish/tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 112 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 112 "project/ish/tools/fakefs.c"
       )); return 
# 112 "project/ish/tools/fakefs.c" 3 4
       0
# 112 "project/ish/tools/fakefs.c"
       ; } while (0);
    size_t archive_bytes = real_stat.st_size;

    sqlite3_stmt *insert_stat = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "insert into stats (stat) values (?)", -1, &stmt, 
# 115 "project/ish/tools/fakefs.c" 3 4
                               ((void *)0)
# 115 "project/ish/tools/fakefs.c"
                               ); if (err != 
# 115 "project/ish/tools/fakefs.c" 3 4
                               0 
# 115 "project/ish/tools/fakefs.c"
                               && err != 
# 115 "project/ish/tools/fakefs.c" 3 4
                               100 
# 115 "project/ish/tools/fakefs.c"
                               && err != 
# 115 "project/ish/tools/fakefs.c" 3 4
                               101
# 115 "project/ish/tools/fakefs.c"
                               ) do { err_out->line = 115; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 115 "project/ish/tools/fakefs.c" 3 4
                               0
# 115 "project/ish/tools/fakefs.c"
                               ; } while (0); stmt; });
    sqlite3_stmt *insert_path = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "insert or replace into paths values (?, ?)", -1, &stmt, 
# 116 "project/ish/tools/fakefs.c" 3 4
                               ((void *)0)
# 116 "project/ish/tools/fakefs.c"
                               ); if (err != 
# 116 "project/ish/tools/fakefs.c" 3 4
                               0 
# 116 "project/ish/tools/fakefs.c"
                               && err != 
# 116 "project/ish/tools/fakefs.c" 3 4
                               100 
# 116 "project/ish/tools/fakefs.c"
                               && err != 
# 116 "project/ish/tools/fakefs.c" 3 4
                               101
# 116 "project/ish/tools/fakefs.c"
                               ) do { err_out->line = 116; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 116 "project/ish/tools/fakefs.c" 3 4
                               0
# 116 "project/ish/tools/fakefs.c"
                               ; } while (0); stmt; });
    sqlite3_stmt *insert_hardlink = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "insert or replace into paths values (?, (select inode from paths where path = ? limit 1))", -1, &stmt, 
# 117 "project/ish/tools/fakefs.c" 3 4
                                   ((void *)0)
# 117 "project/ish/tools/fakefs.c"
                                   ); if (err != 
# 117 "project/ish/tools/fakefs.c" 3 4
                                   0 
# 117 "project/ish/tools/fakefs.c"
                                   && err != 
# 117 "project/ish/tools/fakefs.c" 3 4
                                   100 
# 117 "project/ish/tools/fakefs.c"
                                   && err != 
# 117 "project/ish/tools/fakefs.c" 3 4
                                   101
# 117 "project/ish/tools/fakefs.c"
                                   ) do { err_out->line = 117; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 117 "project/ish/tools/fakefs.c" 3 4
                                   0
# 117 "project/ish/tools/fakefs.c"
                                   ; } while (0); stmt; });

    
# 119 "project/ish/tools/fakefs.c" 3 4
   _Bool 
# 119 "project/ish/tools/fakefs.c"
        archive_has_root = 
# 119 "project/ish/tools/fakefs.c" 3 4
                           0
# 119 "project/ish/tools/fakefs.c"
                                ;


    struct archive_entry *entry;
    while ((err = archive_read_next_header(archive, &entry)) == 
# 123 "project/ish/tools/fakefs.c" 3 4
                                                               0
# 123 "project/ish/tools/fakefs.c"
                                                                         ) {
        char entry_path[4096];
        if (!path_normalize(archive_entry_pathname(entry), entry_path)) {

            fprintf(
# 127 "project/ish/tools/fakefs.c" 3 4
                   __stderrp
# 127 "project/ish/tools/fakefs.c"
                         , "warning: skipped possible path traversal %s\n", archive_entry_pathname(entry));
            continue;
        }
        if (!progress_update(&p, (double) archive_filter_bytes(archive, -1) / archive_bytes, entry_path))
            do { err_out->line = 131; err_out->type = ERR_CANCELLED; err_out->code = 0; err_out->message = strdup(""); return 
# 131 "project/ish/tools/fakefs.c" 3 4
           0
# 131 "project/ish/tools/fakefs.c"
           ; } while (0);;
        if (strcmp(entry_path, "") == 0)
            archive_has_root = 
# 133 "project/ish/tools/fakefs.c" 3 4
                              1
# 133 "project/ish/tools/fakefs.c"
                                  ;

        const char *hardlink = archive_entry_hardlink(entry);
        if (hardlink) {
            char hardlink_path[4096];
            if (!path_normalize(hardlink, hardlink_path)) {
                fprintf(
# 139 "project/ish/tools/fakefs.c" 3 4
                       __stderrp
# 139 "project/ish/tools/fakefs.c"
                             , "warning: almost pwned by hardlink %s\n", hardlink);
                continue;
            }
            if (linkat(root_fd, fix_path(hardlink_path), root_fd, fix_path(entry_path), 0) < 0)
                do { err_out->line = 143; err_out->type = ERR_POSIX; err_out->code = 
# 143 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 143 "project/ish/tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 143 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 143 "project/ish/tools/fakefs.c"
               )); return 
# 143 "project/ish/tools/fakefs.c" 3 4
               0
# 143 "project/ish/tools/fakefs.c"
               ; } while (0);
            sqlite3_bind_blob64(insert_hardlink, 1, entry_path, strlen(entry_path), 
# 144 "project/ish/tools/fakefs.c" 3 4
                                                                                   ((sqlite3_destructor_type)-1)
# 144 "project/ish/tools/fakefs.c"
                                                                                                   );
            sqlite3_bind_blob64(insert_hardlink, 2, hardlink_path, strlen(hardlink_path), 
# 145 "project/ish/tools/fakefs.c" 3 4
                                                                                         ((sqlite3_destructor_type)-1)
# 145 "project/ish/tools/fakefs.c"
                                                                                                         );
            ({ err = sqlite3_step(insert_hardlink); if (err != 
# 146 "project/ish/tools/fakefs.c" 3 4
           0 
# 146 "project/ish/tools/fakefs.c"
           && err != 
# 146 "project/ish/tools/fakefs.c" 3 4
           100 
# 146 "project/ish/tools/fakefs.c"
           && err != 
# 146 "project/ish/tools/fakefs.c" 3 4
           101
# 146 "project/ish/tools/fakefs.c"
           ) do { err_out->line = 146; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 146 "project/ish/tools/fakefs.c" 3 4
           0
# 146 "project/ish/tools/fakefs.c"
           ; } while (0); err == 
# 146 "project/ish/tools/fakefs.c" 3 4
           100
# 146 "project/ish/tools/fakefs.c"
           ; }); err = sqlite3_reset(insert_hardlink); if (err != 
# 146 "project/ish/tools/fakefs.c" 3 4
           0 
# 146 "project/ish/tools/fakefs.c"
           && err != 
# 146 "project/ish/tools/fakefs.c" 3 4
           100 
# 146 "project/ish/tools/fakefs.c"
           && err != 
# 146 "project/ish/tools/fakefs.c" 3 4
           101
# 146 "project/ish/tools/fakefs.c"
           ) do { err_out->line = 146; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 146 "project/ish/tools/fakefs.c" 3 4
           0
# 146 "project/ish/tools/fakefs.c"
           ; } while (0);
            continue;
        }


        char *entry_path_copy = strdup(entry_path);
        char *slash = entry_path_copy;
        while ((slash = strchr(slash + 1, '/')) != 
# 153 "project/ish/tools/fakefs.c" 3 4
                                                  ((void *)0)
# 153 "project/ish/tools/fakefs.c"
                                                      ) {
            *slash = '\0';
            int err = mkdirat(root_fd, fix_path(entry_path_copy), 0777);
            *slash = '/';
            if (err < 0) {
                if (
# 158 "project/ish/tools/fakefs.c" 3 4
                   (*__error()) 
# 158 "project/ish/tools/fakefs.c"
                         == 
# 158 "project/ish/tools/fakefs.c" 3 4
                            17
# 158 "project/ish/tools/fakefs.c"
                                  ) continue;
                do { err_out->line = 159; err_out->type = ERR_POSIX; err_out->code = 
# 159 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 159 "project/ish/tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 159 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 159 "project/ish/tools/fakefs.c"
               )); return 
# 159 "project/ish/tools/fakefs.c" 3 4
               0
# 159 "project/ish/tools/fakefs.c"
               ; } while (0);
            }
        }
        free(entry_path_copy);

        int fd = -1;
        if (archive_entry_filetype(entry) != 
# 165 "project/ish/tools/fakefs.c" 3 4
                                            ((mode_t)0040000)
# 165 "project/ish/tools/fakefs.c"
                                                    ) {
            fd = openat(root_fd, fix_path(entry_path), 
# 166 "project/ish/tools/fakefs.c" 3 4
                                                      0x0001 
# 166 "project/ish/tools/fakefs.c"
                                                               | 
# 166 "project/ish/tools/fakefs.c" 3 4
                                                                 0x00000200 
# 166 "project/ish/tools/fakefs.c"
                                                                         | 
# 166 "project/ish/tools/fakefs.c" 3 4
                                                                           0x00000400
# 166 "project/ish/tools/fakefs.c"
                                                                                  , 0666);
            if (fd < 0) {
                if (
# 168 "project/ish/tools/fakefs.c" 3 4
                   (*__error()) 
# 168 "project/ish/tools/fakefs.c"
                         == 
# 168 "project/ish/tools/fakefs.c" 3 4
                            21
# 168 "project/ish/tools/fakefs.c"
                                  ) continue;
                do { err_out->line = 169; err_out->type = ERR_POSIX; err_out->code = 
# 169 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 169 "project/ish/tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 169 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 169 "project/ish/tools/fakefs.c"
               )); return 
# 169 "project/ish/tools/fakefs.c" 3 4
               0
# 169 "project/ish/tools/fakefs.c"
               ; } while (0);
            }
        }

        switch (archive_entry_filetype(entry)) {
            case 
# 174 "project/ish/tools/fakefs.c" 3 4
                ((mode_t)0040000)
# 174 "project/ish/tools/fakefs.c"
                        :
                err = mkdirat(root_fd, fix_path(entry_path), 0777);
                if (err < 0 && 
# 176 "project/ish/tools/fakefs.c" 3 4
                              (*__error()) 
# 176 "project/ish/tools/fakefs.c"
                                    != 
# 176 "project/ish/tools/fakefs.c" 3 4
                                       17
# 176 "project/ish/tools/fakefs.c"
                                             )
                    do { err_out->line = 177; err_out->type = ERR_POSIX; err_out->code = 
# 177 "project/ish/tools/fakefs.c" 3 4
                   (*__error())
# 177 "project/ish/tools/fakefs.c"
                   ; err_out->message = strdup(strerror(
# 177 "project/ish/tools/fakefs.c" 3 4
                   (*__error())
# 177 "project/ish/tools/fakefs.c"
                   )); return 
# 177 "project/ish/tools/fakefs.c" 3 4
                   0
# 177 "project/ish/tools/fakefs.c"
                   ; } while (0);
                break;
            case 
# 179 "project/ish/tools/fakefs.c" 3 4
                ((mode_t)0100000)
# 179 "project/ish/tools/fakefs.c"
                        :
                if (archive_read_data_into_fd(archive, fd) != 
# 180 "project/ish/tools/fakefs.c" 3 4
                                                             0
# 180 "project/ish/tools/fakefs.c"
                                                                       )
                    do { err_out->line = 181; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 181 "project/ish/tools/fakefs.c" 3 4
                   0
# 181 "project/ish/tools/fakefs.c"
                   ; } while (0);
                break;
            case 
# 183 "project/ish/tools/fakefs.c" 3 4
                ((mode_t)0120000)
# 183 "project/ish/tools/fakefs.c"
                        :
                err = (int) write(fd, archive_entry_symlink(entry), strlen(archive_entry_symlink(entry)));
                if (err < 0)
                    do { err_out->line = 186; err_out->type = ERR_POSIX; err_out->code = 
# 186 "project/ish/tools/fakefs.c" 3 4
                   (*__error())
# 186 "project/ish/tools/fakefs.c"
                   ; err_out->message = strdup(strerror(
# 186 "project/ish/tools/fakefs.c" 3 4
                   (*__error())
# 186 "project/ish/tools/fakefs.c"
                   )); return 
# 186 "project/ish/tools/fakefs.c" 3 4
                   0
# 186 "project/ish/tools/fakefs.c"
                   ; } while (0);
        }
        if (fd != -1)
            close(fd);

        struct ish_stat stat = {
            .mode = (uint32_t) archive_entry_mode(entry),
            .uid = (uint32_t) archive_entry_uid(entry),
            .gid = (uint32_t) archive_entry_gid(entry),
            .rdev = (uint32_t) archive_entry_rdev(entry),
        };
        sqlite3_bind_blob64(insert_stat, 1, &stat, sizeof(stat), 
# 197 "project/ish/tools/fakefs.c" 3 4
                                                                ((sqlite3_destructor_type)-1)
# 197 "project/ish/tools/fakefs.c"
                                                                                );
        ({ err = sqlite3_step(insert_stat); if (err != 
# 198 "project/ish/tools/fakefs.c" 3 4
       0 
# 198 "project/ish/tools/fakefs.c"
       && err != 
# 198 "project/ish/tools/fakefs.c" 3 4
       100 
# 198 "project/ish/tools/fakefs.c"
       && err != 
# 198 "project/ish/tools/fakefs.c" 3 4
       101
# 198 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 198; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 198 "project/ish/tools/fakefs.c" 3 4
       0
# 198 "project/ish/tools/fakefs.c"
       ; } while (0); err == 
# 198 "project/ish/tools/fakefs.c" 3 4
       100
# 198 "project/ish/tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_stat); if (err != 
# 198 "project/ish/tools/fakefs.c" 3 4
       0 
# 198 "project/ish/tools/fakefs.c"
       && err != 
# 198 "project/ish/tools/fakefs.c" 3 4
       100 
# 198 "project/ish/tools/fakefs.c"
       && err != 
# 198 "project/ish/tools/fakefs.c" 3 4
       101
# 198 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 198; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 198 "project/ish/tools/fakefs.c" 3 4
       0
# 198 "project/ish/tools/fakefs.c"
       ; } while (0);
        sqlite3_bind_blob64(insert_path, 1, entry_path, strlen(entry_path), 
# 199 "project/ish/tools/fakefs.c" 3 4
                                                                           ((sqlite3_destructor_type)-1)
# 199 "project/ish/tools/fakefs.c"
                                                                                           );
        sqlite3_bind_int64(insert_path, 2, sqlite3_last_insert_rowid(db));
        ({ err = sqlite3_step(insert_path); if (err != 
# 201 "project/ish/tools/fakefs.c" 3 4
       0 
# 201 "project/ish/tools/fakefs.c"
       && err != 
# 201 "project/ish/tools/fakefs.c" 3 4
       100 
# 201 "project/ish/tools/fakefs.c"
       && err != 
# 201 "project/ish/tools/fakefs.c" 3 4
       101
# 201 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 201; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 201 "project/ish/tools/fakefs.c" 3 4
       0
# 201 "project/ish/tools/fakefs.c"
       ; } while (0); err == 
# 201 "project/ish/tools/fakefs.c" 3 4
       100
# 201 "project/ish/tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_path); if (err != 
# 201 "project/ish/tools/fakefs.c" 3 4
       0 
# 201 "project/ish/tools/fakefs.c"
       && err != 
# 201 "project/ish/tools/fakefs.c" 3 4
       100 
# 201 "project/ish/tools/fakefs.c"
       && err != 
# 201 "project/ish/tools/fakefs.c" 3 4
       101
# 201 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 201; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 201 "project/ish/tools/fakefs.c" 3 4
       0
# 201 "project/ish/tools/fakefs.c"
       ; } while (0);
    }
    if (err != 
# 203 "project/ish/tools/fakefs.c" 3 4
              1
# 203 "project/ish/tools/fakefs.c"
                         )
        do { err_out->line = 204; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 204 "project/ish/tools/fakefs.c" 3 4
       0
# 204 "project/ish/tools/fakefs.c"
       ; } while (0);


    if (!archive_has_root) {
        struct ish_stat stat = {.mode = 0755};
        sqlite3_bind_blob64(insert_stat, 1, &stat, sizeof(stat), 
# 209 "project/ish/tools/fakefs.c" 3 4
                                                                ((sqlite3_destructor_type)-1)
# 209 "project/ish/tools/fakefs.c"
                                                                                );
        ({ err = sqlite3_step(insert_stat); if (err != 
# 210 "project/ish/tools/fakefs.c" 3 4
       0 
# 210 "project/ish/tools/fakefs.c"
       && err != 
# 210 "project/ish/tools/fakefs.c" 3 4
       100 
# 210 "project/ish/tools/fakefs.c"
       && err != 
# 210 "project/ish/tools/fakefs.c" 3 4
       101
# 210 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 210; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 210 "project/ish/tools/fakefs.c" 3 4
       0
# 210 "project/ish/tools/fakefs.c"
       ; } while (0); err == 
# 210 "project/ish/tools/fakefs.c" 3 4
       100
# 210 "project/ish/tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_stat); if (err != 
# 210 "project/ish/tools/fakefs.c" 3 4
       0 
# 210 "project/ish/tools/fakefs.c"
       && err != 
# 210 "project/ish/tools/fakefs.c" 3 4
       100 
# 210 "project/ish/tools/fakefs.c"
       && err != 
# 210 "project/ish/tools/fakefs.c" 3 4
       101
# 210 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 210; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 210 "project/ish/tools/fakefs.c" 3 4
       0
# 210 "project/ish/tools/fakefs.c"
       ; } while (0);
        sqlite3_bind_blob64(insert_path, 1, "", 0, 
# 211 "project/ish/tools/fakefs.c" 3 4
                                                  ((sqlite3_destructor_type)-1)
# 211 "project/ish/tools/fakefs.c"
                                                                  );
        sqlite3_bind_int64(insert_path, 2, sqlite3_last_insert_rowid(db));
        ({ err = sqlite3_step(insert_path); if (err != 
# 213 "project/ish/tools/fakefs.c" 3 4
       0 
# 213 "project/ish/tools/fakefs.c"
       && err != 
# 213 "project/ish/tools/fakefs.c" 3 4
       100 
# 213 "project/ish/tools/fakefs.c"
       && err != 
# 213 "project/ish/tools/fakefs.c" 3 4
       101
# 213 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 213; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 213 "project/ish/tools/fakefs.c" 3 4
       0
# 213 "project/ish/tools/fakefs.c"
       ; } while (0); err == 
# 213 "project/ish/tools/fakefs.c" 3 4
       100
# 213 "project/ish/tools/fakefs.c"
       ; }); err = sqlite3_reset(insert_path); if (err != 
# 213 "project/ish/tools/fakefs.c" 3 4
       0 
# 213 "project/ish/tools/fakefs.c"
       && err != 
# 213 "project/ish/tools/fakefs.c" 3 4
       100 
# 213 "project/ish/tools/fakefs.c"
       && err != 
# 213 "project/ish/tools/fakefs.c" 3 4
       101
# 213 "project/ish/tools/fakefs.c"
       ) do { err_out->line = 213; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 213 "project/ish/tools/fakefs.c" 3 4
       0
# 213 "project/ish/tools/fakefs.c"
       ; } while (0);
    }

    err = sqlite3_finalize(insert_stat); if (err != 
# 216 "project/ish/tools/fakefs.c" 3 4
   0 
# 216 "project/ish/tools/fakefs.c"
   && err != 
# 216 "project/ish/tools/fakefs.c" 3 4
   100 
# 216 "project/ish/tools/fakefs.c"
   && err != 
# 216 "project/ish/tools/fakefs.c" 3 4
   101
# 216 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 216; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 216 "project/ish/tools/fakefs.c" 3 4
   0
# 216 "project/ish/tools/fakefs.c"
   ; } while (0);
    err = sqlite3_finalize(insert_path); if (err != 
# 217 "project/ish/tools/fakefs.c" 3 4
   0 
# 217 "project/ish/tools/fakefs.c"
   && err != 
# 217 "project/ish/tools/fakefs.c" 3 4
   100 
# 217 "project/ish/tools/fakefs.c"
   && err != 
# 217 "project/ish/tools/fakefs.c" 3 4
   101
# 217 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 217; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 217 "project/ish/tools/fakefs.c" 3 4
   0
# 217 "project/ish/tools/fakefs.c"
   ; } while (0);
    err = sqlite3_finalize(insert_hardlink); if (err != 
# 218 "project/ish/tools/fakefs.c" 3 4
   0 
# 218 "project/ish/tools/fakefs.c"
   && err != 
# 218 "project/ish/tools/fakefs.c" 3 4
   100 
# 218 "project/ish/tools/fakefs.c"
   && err != 
# 218 "project/ish/tools/fakefs.c" 3 4
   101
# 218 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 218; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 218 "project/ish/tools/fakefs.c" 3 4
   0
# 218 "project/ish/tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "commit", 
# 219 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 219 "project/ish/tools/fakefs.c"
   , 
# 219 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 219 "project/ish/tools/fakefs.c"
   , 
# 219 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 219 "project/ish/tools/fakefs.c"
   ); if (err != 
# 219 "project/ish/tools/fakefs.c" 3 4
   0 
# 219 "project/ish/tools/fakefs.c"
   && err != 
# 219 "project/ish/tools/fakefs.c" 3 4
   100 
# 219 "project/ish/tools/fakefs.c"
   && err != 
# 219 "project/ish/tools/fakefs.c" 3 4
   101
# 219 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 219; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 219 "project/ish/tools/fakefs.c" 3 4
   0
# 219 "project/ish/tools/fakefs.c"
   ; } while (0);;
    sqlite3_close(db);
    close(root_fd);

    if (archive_read_free(archive) != 
# 223 "project/ish/tools/fakefs.c" 3 4
                                     0
# 223 "project/ish/tools/fakefs.c"
                                               )
        do { err_out->line = 224; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 224 "project/ish/tools/fakefs.c" 3 4
       0
# 224 "project/ish/tools/fakefs.c"
       ; } while (0);
    return 
# 225 "project/ish/tools/fakefs.c" 3 4
          1
# 225 "project/ish/tools/fakefs.c"
              ;
}


# 228 "project/ish/tools/fakefs.c" 3 4
_Bool 
# 228 "project/ish/tools/fakefs.c"
    fakefs_export(const char *fs, const char *archive_path, struct fakefsify_error *err_out, struct progress p) {

    struct archive *archive = archive_write_new();
    if (archive == 
# 231 "project/ish/tools/fakefs.c" 3 4
                  ((void *)0)
# 231 "project/ish/tools/fakefs.c"
                      )
        do { err_out->line = 232; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 232 "project/ish/tools/fakefs.c" 3 4
       0
# 232 "project/ish/tools/fakefs.c"
       ; } while (0);
    archive_write_add_filter_gzip(archive);
    archive_write_set_format_pax_restricted(archive);
    if (archive_write_open_filename(archive, archive_path) != 
# 235 "project/ish/tools/fakefs.c" 3 4
                                                             0
# 235 "project/ish/tools/fakefs.c"
                                                                       )
        do { err_out->line = 236; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 236 "project/ish/tools/fakefs.c" 3 4
       0
# 236 "project/ish/tools/fakefs.c"
       ; } while (0);


    char path_tmp[
# 239 "project/ish/tools/fakefs.c" 3 4
                 1024
# 239 "project/ish/tools/fakefs.c"
                         ];
    
# 240 "project/ish/tools/fakefs.c" 3 4
   __builtin___snprintf_chk (
# 240 "project/ish/tools/fakefs.c"
   path_tmp
# 240 "project/ish/tools/fakefs.c" 3 4
   , 
# 240 "project/ish/tools/fakefs.c"
   sizeof(path_tmp)
# 240 "project/ish/tools/fakefs.c" 3 4
   , 0, __builtin_object_size (
# 240 "project/ish/tools/fakefs.c"
   path_tmp
# 240 "project/ish/tools/fakefs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 240 "project/ish/tools/fakefs.c"
   "%s/data", fs
# 240 "project/ish/tools/fakefs.c" 3 4
   )
# 240 "project/ish/tools/fakefs.c"
                                                      ;
    int root_fd = open(path_tmp, 
# 241 "project/ish/tools/fakefs.c" 3 4
                                0x0000
# 241 "project/ish/tools/fakefs.c"
                                        );
    if (root_fd < 0)
        do { err_out->line = 243; err_out->type = ERR_POSIX; err_out->code = 
# 243 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 243 "project/ish/tools/fakefs.c"
       ; err_out->message = strdup(strerror(
# 243 "project/ish/tools/fakefs.c" 3 4
       (*__error())
# 243 "project/ish/tools/fakefs.c"
       )); return 
# 243 "project/ish/tools/fakefs.c" 3 4
       0
# 243 "project/ish/tools/fakefs.c"
       ; } while (0);


    
# 246 "project/ish/tools/fakefs.c" 3 4
   __builtin___snprintf_chk (
# 246 "project/ish/tools/fakefs.c"
   path_tmp
# 246 "project/ish/tools/fakefs.c" 3 4
   , 
# 246 "project/ish/tools/fakefs.c"
   sizeof(path_tmp)
# 246 "project/ish/tools/fakefs.c" 3 4
   , 0, __builtin_object_size (
# 246 "project/ish/tools/fakefs.c"
   path_tmp
# 246 "project/ish/tools/fakefs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 246 "project/ish/tools/fakefs.c"
   "%s/meta.db", fs
# 246 "project/ish/tools/fakefs.c" 3 4
   )
# 246 "project/ish/tools/fakefs.c"
                                                         ;
    sqlite3 *db;
    int err = sqlite3_open_v2(path_tmp, &db, 
# 248 "project/ish/tools/fakefs.c" 3 4
                                            0x00000001
# 248 "project/ish/tools/fakefs.c"
                                                                , 
# 248 "project/ish/tools/fakefs.c" 3 4
                                                                  ((void *)0)
# 248 "project/ish/tools/fakefs.c"
                                                                      );
    if (err != 
# 249 "project/ish/tools/fakefs.c" 3 4
   0 
# 249 "project/ish/tools/fakefs.c"
   && err != 
# 249 "project/ish/tools/fakefs.c" 3 4
   100 
# 249 "project/ish/tools/fakefs.c"
   && err != 
# 249 "project/ish/tools/fakefs.c" 3 4
   101
# 249 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 249; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 249 "project/ish/tools/fakefs.c" 3 4
   0
# 249 "project/ish/tools/fakefs.c"
   ; } while (0);
    err = sqlite3_exec(db, "begin", 
# 250 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 250 "project/ish/tools/fakefs.c"
   , 
# 250 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 250 "project/ish/tools/fakefs.c"
   , 
# 250 "project/ish/tools/fakefs.c" 3 4
   ((void *)0)
# 250 "project/ish/tools/fakefs.c"
   ); if (err != 
# 250 "project/ish/tools/fakefs.c" 3 4
   0 
# 250 "project/ish/tools/fakefs.c"
   && err != 
# 250 "project/ish/tools/fakefs.c" 3 4
   100 
# 250 "project/ish/tools/fakefs.c"
   && err != 
# 250 "project/ish/tools/fakefs.c" 3 4
   101
# 250 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 250; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 250 "project/ish/tools/fakefs.c" 3 4
   0
# 250 "project/ish/tools/fakefs.c"
   ; } while (0);;

    sqlite3_stmt *count_stmt = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "select count(path) from paths", -1, &stmt, 
# 252 "project/ish/tools/fakefs.c" 3 4
                              ((void *)0)
# 252 "project/ish/tools/fakefs.c"
                              ); if (err != 
# 252 "project/ish/tools/fakefs.c" 3 4
                              0 
# 252 "project/ish/tools/fakefs.c"
                              && err != 
# 252 "project/ish/tools/fakefs.c" 3 4
                              100 
# 252 "project/ish/tools/fakefs.c"
                              && err != 
# 252 "project/ish/tools/fakefs.c" 3 4
                              101
# 252 "project/ish/tools/fakefs.c"
                              ) do { err_out->line = 252; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 252 "project/ish/tools/fakefs.c" 3 4
                              0
# 252 "project/ish/tools/fakefs.c"
                              ; } while (0); stmt; });
    ({ err = sqlite3_step(count_stmt); if (err != 
# 253 "project/ish/tools/fakefs.c" 3 4
   0 
# 253 "project/ish/tools/fakefs.c"
   && err != 
# 253 "project/ish/tools/fakefs.c" 3 4
   100 
# 253 "project/ish/tools/fakefs.c"
   && err != 
# 253 "project/ish/tools/fakefs.c" 3 4
   101
# 253 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 253; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 253 "project/ish/tools/fakefs.c" 3 4
   0
# 253 "project/ish/tools/fakefs.c"
   ; } while (0); err == 
# 253 "project/ish/tools/fakefs.c" 3 4
   100
# 253 "project/ish/tools/fakefs.c"
   ; });
    int64_t paths_total = sqlite3_column_int64(count_stmt, 0);
    err = sqlite3_finalize(count_stmt); if (err != 
# 255 "project/ish/tools/fakefs.c" 3 4
   0 
# 255 "project/ish/tools/fakefs.c"
   && err != 
# 255 "project/ish/tools/fakefs.c" 3 4
   100 
# 255 "project/ish/tools/fakefs.c"
   && err != 
# 255 "project/ish/tools/fakefs.c" 3 4
   101
# 255 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 255; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 255 "project/ish/tools/fakefs.c" 3 4
   0
# 255 "project/ish/tools/fakefs.c"
   ; } while (0);
    int64_t paths_done = 0;

    struct archive_entry_linkresolver *linkresolver = archive_entry_linkresolver_new();
    archive_entry_linkresolver_set_strategy(linkresolver, 
# 259 "project/ish/tools/fakefs.c" 3 4
                                                         (0x30000 | 3)
# 259 "project/ish/tools/fakefs.c"
                                                                                          );

    sqlite3_stmt *query = ({ sqlite3_stmt *stmt; err = sqlite3_prepare_v2(db, "select path, inode, stat from paths, stats using (inode)", -1, &stmt, 
# 261 "project/ish/tools/fakefs.c" 3 4
                         ((void *)0)
# 261 "project/ish/tools/fakefs.c"
                         ); if (err != 
# 261 "project/ish/tools/fakefs.c" 3 4
                         0 
# 261 "project/ish/tools/fakefs.c"
                         && err != 
# 261 "project/ish/tools/fakefs.c" 3 4
                         100 
# 261 "project/ish/tools/fakefs.c"
                         && err != 
# 261 "project/ish/tools/fakefs.c" 3 4
                         101
# 261 "project/ish/tools/fakefs.c"
                         ) do { err_out->line = 261; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 261 "project/ish/tools/fakefs.c" 3 4
                         0
# 261 "project/ish/tools/fakefs.c"
                         ; } while (0); stmt; });
    while (({ err = sqlite3_step(query); if (err != 
# 262 "project/ish/tools/fakefs.c" 3 4
          0 
# 262 "project/ish/tools/fakefs.c"
          && err != 
# 262 "project/ish/tools/fakefs.c" 3 4
          100 
# 262 "project/ish/tools/fakefs.c"
          && err != 
# 262 "project/ish/tools/fakefs.c" 3 4
          101
# 262 "project/ish/tools/fakefs.c"
          ) do { err_out->line = 262; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 262 "project/ish/tools/fakefs.c" 3 4
          0
# 262 "project/ish/tools/fakefs.c"
          ; } while (0); err == 
# 262 "project/ish/tools/fakefs.c" 3 4
          100
# 262 "project/ish/tools/fakefs.c"
          ; })) {
        struct archive_entry *entry = archive_entry_new();

        const char *path_in_db = sqlite3_column_blob(query, 0);
        size_t path_len = sqlite3_column_bytes(query, 0);
        char *path = malloc(path_len + 2);
        path[0] = '.';
        
# 269 "project/ish/tools/fakefs.c" 3 4
       __builtin___memcpy_chk (
# 269 "project/ish/tools/fakefs.c"
       path + 1
# 269 "project/ish/tools/fakefs.c" 3 4
       , 
# 269 "project/ish/tools/fakefs.c"
       path_in_db, path_len
# 269 "project/ish/tools/fakefs.c" 3 4
       , __builtin_object_size (
# 269 "project/ish/tools/fakefs.c"
       path + 1
# 269 "project/ish/tools/fakefs.c" 3 4
       , 0))
# 269 "project/ish/tools/fakefs.c"
                                             ;
        path[path_len + 1] = '\0';
        archive_entry_set_pathname(entry, path);

        if (!progress_update(&p, (double) paths_done / paths_total, path))
            do { err_out->line = 274; err_out->type = ERR_CANCELLED; err_out->code = 0; err_out->message = strdup(""); return 
# 274 "project/ish/tools/fakefs.c" 3 4
           0
# 274 "project/ish/tools/fakefs.c"
           ; } while (0);;

        archive_entry_set_ino64(entry, sqlite3_column_int64(query, 1));
        struct ish_stat stat = *(struct ish_stat *) sqlite3_column_blob(query, 2);
        archive_entry_set_mode(entry, stat.mode);
        archive_entry_set_uid(entry, stat.uid);
        archive_entry_set_gid(entry, stat.gid);
        archive_entry_set_rdev(entry, stat.rdev);

        struct stat real_stat;
        if (fstatat(root_fd, path, &real_stat, 0) < 0) {
            if (
# 285 "project/ish/tools/fakefs.c" 3 4
               (*__error()) 
# 285 "project/ish/tools/fakefs.c"
                     == 
# 285 "project/ish/tools/fakefs.c" 3 4
                        2
# 285 "project/ish/tools/fakefs.c"
                              ) {
                printf("skipping %s\n", path);
                goto skip;
            }
            do { err_out->line = 289; err_out->type = ERR_POSIX; err_out->code = 
# 289 "project/ish/tools/fakefs.c" 3 4
           (*__error())
# 289 "project/ish/tools/fakefs.c"
           ; err_out->message = strdup(strerror(
# 289 "project/ish/tools/fakefs.c" 3 4
           (*__error())
# 289 "project/ish/tools/fakefs.c"
           )); return 
# 289 "project/ish/tools/fakefs.c" 3 4
           0
# 289 "project/ish/tools/fakefs.c"
           ; } while (0);
        }
        archive_entry_set_size(entry, real_stat.st_size);

        int fd = -1;
        
# 294 "project/ish/tools/fakefs.c" 3 4
       0170000
# 294 "project/ish/tools/fakefs.c"
             ;
        if (
# 295 "project/ish/tools/fakefs.c" 3 4
           (((
# 295 "project/ish/tools/fakefs.c"
           stat.mode
# 295 "project/ish/tools/fakefs.c" 3 4
           ) & 0170000) == 0100000) 
# 295 "project/ish/tools/fakefs.c"
                              || 
# 295 "project/ish/tools/fakefs.c" 3 4
                                 (((
# 295 "project/ish/tools/fakefs.c"
                                 stat.mode
# 295 "project/ish/tools/fakefs.c" 3 4
                                 ) & 0170000) == 0120000)
# 295 "project/ish/tools/fakefs.c"
                                                   )
            fd = openat(root_fd, path, 
# 296 "project/ish/tools/fakefs.c" 3 4
                                      0x0000
# 296 "project/ish/tools/fakefs.c"
                                              );
        if (
# 297 "project/ish/tools/fakefs.c" 3 4
           (((
# 297 "project/ish/tools/fakefs.c"
           stat.mode
# 297 "project/ish/tools/fakefs.c" 3 4
           ) & 0170000) == 0120000)
# 297 "project/ish/tools/fakefs.c"
                             ) {
            char buf[4096 +1];
            ssize_t len = read(fd, buf, sizeof(buf)-1);
            if (len < 0)
                do { err_out->line = 301; err_out->type = ERR_POSIX; err_out->code = 
# 301 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 301 "project/ish/tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 301 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 301 "project/ish/tools/fakefs.c"
               )); return 
# 301 "project/ish/tools/fakefs.c" 3 4
               0
# 301 "project/ish/tools/fakefs.c"
               ; } while (0);
            buf[len] = '\0';
            archive_entry_set_symlink(entry, buf);
        }

        struct archive_entry *sparse;
        archive_entry_linkify(linkresolver, &entry, &sparse);
        if (entry != 
# 308 "project/ish/tools/fakefs.c" 3 4
                    ((void *)0)
# 308 "project/ish/tools/fakefs.c"
                        )
            archive_write_header(archive, entry);
        if (sparse != 
# 310 "project/ish/tools/fakefs.c" 3 4
                     ((void *)0)
# 310 "project/ish/tools/fakefs.c"
                         )
            archive_write_header(archive, sparse);

        if (
# 313 "project/ish/tools/fakefs.c" 3 4
           (((
# 313 "project/ish/tools/fakefs.c"
           stat.mode
# 313 "project/ish/tools/fakefs.c" 3 4
           ) & 0170000) == 0100000) 
# 313 "project/ish/tools/fakefs.c"
                              && archive_entry_size(entry) != 0) {
            char buf[8192];
            ssize_t len;
            while ((len = read(fd, buf, sizeof(buf))) > 0) {
                ssize_t written = archive_write_data(archive, buf, len);
                if (written < 0)
                    do { err_out->line = 319; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 319 "project/ish/tools/fakefs.c" 3 4
                   0
# 319 "project/ish/tools/fakefs.c"
                   ; } while (0);
                if (written != len)
                    printf("uh oh\n");
            }
            if (len < 0)
                do { err_out->line = 324; err_out->type = ERR_POSIX; err_out->code = 
# 324 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 324 "project/ish/tools/fakefs.c"
               ; err_out->message = strdup(strerror(
# 324 "project/ish/tools/fakefs.c" 3 4
               (*__error())
# 324 "project/ish/tools/fakefs.c"
               )); return 
# 324 "project/ish/tools/fakefs.c" 3 4
               0
# 324 "project/ish/tools/fakefs.c"
               ; } while (0);
        }
        if (fd != -1)
            close(fd);

    skip:
        paths_done++;
        free(path);
        archive_entry_free(entry);
    }

    err = sqlite3_finalize(query); if (err != 
# 335 "project/ish/tools/fakefs.c" 3 4
   0 
# 335 "project/ish/tools/fakefs.c"
   && err != 
# 335 "project/ish/tools/fakefs.c" 3 4
   100 
# 335 "project/ish/tools/fakefs.c"
   && err != 
# 335 "project/ish/tools/fakefs.c" 3 4
   101
# 335 "project/ish/tools/fakefs.c"
   ) do { err_out->line = 335; err_out->type = ERR_SQLITE; err_out->code = sqlite3_extended_errcode(db); err_out->message = strdup(sqlite3_errmsg(db)); return 
# 335 "project/ish/tools/fakefs.c" 3 4
   0
# 335 "project/ish/tools/fakefs.c"
   ; } while (0);
    archive_entry_linkresolver_free(linkresolver);
    sqlite3_close(db);
    close(root_fd);
    if (archive_write_close(archive) != 
# 339 "project/ish/tools/fakefs.c" 3 4
                                       0
# 339 "project/ish/tools/fakefs.c"
                                                 )
        do { err_out->line = 340; err_out->type = ERR_ARCHIVE; err_out->code = archive_errno(archive); err_out->message = strdup(archive_error_string(archive)); return 
# 340 "project/ish/tools/fakefs.c" 3 4
       0
# 340 "project/ish/tools/fakefs.c"
       ; } while (0);
    archive_write_free(archive);
    return 
# 342 "project/ish/tools/fakefs.c" 3 4
          1
# 342 "project/ish/tools/fakefs.c"
              ;
}
