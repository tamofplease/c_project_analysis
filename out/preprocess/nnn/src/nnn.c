# 0 "project/nnn/src/nnn.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/nnn/src/nnn.c"
# 47 "project/nnn/src/nnn.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4
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
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4

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





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 63 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4




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


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4





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

# 48 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
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




# 49 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/statvfs.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/statvfs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/statvfs.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/statvfs.h" 2 3 4


struct statvfs {
 unsigned long f_bsize;
 unsigned long f_frsize;
 fsblkcnt_t f_blocks;
 fsblkcnt_t f_bfree;
 fsblkcnt_t f_bavail;
 fsfilcnt_t f_files;
 fsfilcnt_t f_ffree;
 fsfilcnt_t f_favail;
 unsigned long f_fsid;
 unsigned long f_flag;
 unsigned long f_namemax;
};






int fstatvfs(int, struct statvfs *);
int statvfs(const char * restrict, struct statvfs * restrict);

# 50 "project/nnn/src/nnn.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
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



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


typedef int32_t segsz_t;
typedef int32_t swblk_t;
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
# 52 "project/nnn/src/nnn.c" 2
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
# 369 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/queue.h" 1 3 4
# 370 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/event.h" 2 3 4
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



# 53 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
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


# 54 "project/nnn/src/nnn.c" 2







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


# 62 "project/nnn/src/nnn.c" 2
# 76 "project/nnn/src/nnn.c"
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


# 77 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 78 "project/nnn/src/nnn.c" 2
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
# 79 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fts.h" 1 3 4
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fts.h" 3 4
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

typedef struct {
 struct _ftsent *fts_cur;
 struct _ftsent *fts_child;
 struct _ftsent **fts_array;
 dev_t fts_dev;
 char *fts_path;
 int fts_rfd;
 int fts_pathlen;
 int fts_nitems;



     int (*fts_compar)();
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fts.h" 3 4
 int fts_options;
} FTS;

typedef struct _ftsent {
 struct _ftsent *fts_cycle;
 struct _ftsent *fts_parent;
 struct _ftsent *fts_link;
 long fts_number;
 void *fts_pointer;
 char *fts_accpath;
 char *fts_path;
 int fts_errno;
 int fts_symfd;
 unsigned short fts_pathlen;
 unsigned short fts_namelen;

 ino_t fts_ino;
 dev_t fts_dev;
 nlink_t fts_nlink;




 short fts_level;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fts.h" 3 4
 unsigned short fts_info;





 unsigned short fts_flags;





 unsigned short fts_instr;

 struct stat *fts_statp;
 char fts_name[1];
} FTSENT;





FTSENT *fts_children(FTS *, int) __asm("_" "fts_children" "$INODE64");
int fts_close(FTS *) __asm("_" "fts_close" "$INODE64");
FTS *fts_open(char * const *, int,
     int (*)(const FTSENT **, const FTSENT **)) __asm("_" "fts_open" "$INODE64");
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fts.h" 3 4
FTSENT *fts_read(FTS *) __asm("_" "fts_read" "$INODE64");
int fts_set(FTS *, FTSENT *, int) __asm("_" "fts_set" "$INODE64");


#pragma clang diagnostic pop
# 80 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libgen.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libgen.h" 3 4




char *basename(char *);
char *dirname(char *);
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libgen.h" 3 4
char *basename_r(const char *, char *)
 
  ;

char *dirname_r(const char *, char *)
 
  ;



# 81 "project/nnn/src/nnn.c" 2
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
# 82 "project/nnn/src/nnn.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 3 4
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

# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 2 3 4
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/locale.h" 3 4

char *setlocale(int, const char *);

# 84 "project/nnn/src/nnn.c" 2

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
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
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



# 86 "project/nnn/src/nnn.c" 2
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
# 87 "project/nnn/src/nnn.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/readline/history.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/readline/history.h" 3 4
typedef int Function(const char *, int);
typedef void VFunction(void);
typedef void VCPFunction(char *);
typedef char *CPFunction(const char *, int);
typedef char **CPPFunction(const char *, int, int);
typedef char *rl_compentry_func_t(const char *, int);
typedef int rl_command_func_t(int, int);


typedef struct {
 int length;
} HISTORY_STATE;

typedef void *histdata_t;

typedef struct _hist_entry {
 const char *line;
 histdata_t data;
} HIST_ENTRY;

typedef struct _keymap_entry {
 char type;



 Function *function;
} KEYMAP_ENTRY;



typedef KEYMAP_ENTRY KEYMAP_ENTRY_ARRAY[256];
typedef KEYMAP_ENTRY *Keymap;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioccom.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttycom.h" 2 3 4
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





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/filio.h" 1 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/sockio.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ioctl.h" 2 3 4





int ioctl(int, unsigned long, ...);

# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/readline/history.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/ttydefaults.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/readline/history.h" 2 3 4
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/readline/history.h" 3 4
extern const char *rl_library_version;
extern int rl_readline_version;
extern char *rl_readline_name;
extern FILE *rl_instream;
extern FILE *rl_outstream;
extern char *rl_line_buffer;
extern int rl_point, rl_end;
extern int history_base, history_length;
extern int max_input_history;
extern char *rl_basic_word_break_characters;
extern char *rl_completer_word_break_characters;
extern char *rl_completer_quote_characters;
extern Function *rl_completion_entry_function;
extern char *(*rl_completion_word_break_hook)(void);
extern CPPFunction *rl_attempted_completion_function;
extern int rl_attempted_completion_over;
extern int rl_completion_type;
extern int rl_completion_query_items;
extern char *rl_special_prefixes;
extern int rl_completion_append_character;
extern int rl_inhibit_completion;
extern Function *rl_pre_input_hook;
extern Function *rl_startup_hook;
extern char *rl_terminal_name;
extern int rl_already_prompted;
extern char *rl_prompt;



extern KEYMAP_ENTRY_ARRAY emacs_standard_keymap,
   emacs_meta_keymap,
   emacs_ctlx_keymap;
extern int rl_filename_completion_desired;
extern int rl_ignore_completion_duplicates;
extern int (*rl_getc_function)(FILE *);
extern VFunction *rl_redisplay_function;
extern VFunction *rl_completion_display_matches_hook;
extern VFunction *rl_prep_term_function;
extern VFunction *rl_deprep_term_function;
extern int readline_echoing_p;
extern int _rl_print_completions_horizontally;


char *readline(const char *);
int rl_initialize(void);

void using_history(void);
int add_history(const char *);
void clear_history(void);
void stifle_history(int);
int unstifle_history(void);
int history_is_stifled(void);
int where_history(void);
HIST_ENTRY *current_history(void);
HIST_ENTRY *history_get(int);
HIST_ENTRY *remove_history(int);
HIST_ENTRY *replace_history_entry(int, const char *, histdata_t);
int history_total_bytes(void);
int history_set_pos(int);
HIST_ENTRY *previous_history(void);
HIST_ENTRY *next_history(void);
int history_search(const char *, int);
int history_search_prefix(const char *, int);
int history_search_pos(const char *, int, int);
int read_history(const char *);
int write_history(const char *);
int history_truncate_file (const char *, int);
int history_expand(char *, char **);
char **history_tokenize(const char *);
const char *get_history_event(const char *, int *, int);
char *history_arg_extract(int, int, const char *);

char *tilde_expand(char *);
char *filename_completion_function(const char *, int);
char *username_completion_function(const char *, int);
int rl_complete(int, int);
int rl_read_key(void);
char **completion_matches(const char *, CPFunction *);
void rl_display_match_list(char **, int, int);

int rl_insert(int, int);
int rl_insert_text(const char *);
void rl_reset_terminal(const char *);
int rl_bind_key(int, rl_command_func_t *);
int rl_newline(int, int);
void rl_callback_read_char(void);
void rl_callback_handler_install(const char *, VCPFunction *);
void rl_callback_handler_remove(void);
void rl_redisplay(void);
int rl_get_previous_history(int, int);
void rl_prep_terminal(int);
void rl_deprep_terminal(void);
int rl_read_init_file(const char *);
int rl_parse_and_bind(const char *);
int rl_variable_bind(const char *, const char *);
void rl_stuff_char(int);
int rl_add_defun(const char *, Function *, int);
HISTORY_STATE *history_get_history_state(void);
void rl_get_screen_size(int *, int *);
void rl_set_screen_size(int, int);
char *rl_filename_completion_function (const char *, int);
int _rl_abort_internal(void);
int _rl_qsort_string_compare(char **, char **);
char **rl_completion_matches(const char *, rl_compentry_func_t *);
void rl_forced_update_display(void);
int rl_set_prompt(const char *);
int rl_on_new_line(void);




int rl_kill_text(int, int);
Keymap rl_get_keymap(void);
void rl_set_keymap(Keymap);
Keymap rl_make_bare_keymap(void);
int rl_generic_bind(int, const char *, const char *, Keymap);
int rl_bind_key_in_map(int, rl_command_func_t *, Keymap);
void rl_cleanup_after_signal(void);
void rl_free_line_state(void);
# 89 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/readline/readline.h" 1 3 4
# 90 "project/nnn/src/nnn.c" 2




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 1 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_regex.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_regex.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_regex.h" 2 3 4


typedef __darwin_off_t regoff_t;

typedef struct {
 int re_magic;
 size_t re_nsub;
 const char *re_endp;
 struct re_guts *re_g;
} regex_t;

typedef struct {
 regoff_t rm_so;
 regoff_t rm_eo;
} regmatch_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 2 3 4
# 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/regex.h" 3 4

int regcomp(regex_t * restrict, const char * restrict, int) __asm("_" "regcomp" );
size_t regerror(int, const regex_t * restrict, char * restrict, size_t) __attribute__((__cold__));




int regexec(const regex_t * restrict, const char * restrict, size_t,
     regmatch_t __pmatch[ restrict], int);
void regfree(regex_t *);




int regncomp(regex_t * restrict, const char * restrict, size_t, int)
     ;
int regnexec(const regex_t * restrict, const char * restrict, size_t,
     size_t, regmatch_t __pmatch[ restrict], int)
     ;
int regwcomp(regex_t * restrict, const wchar_t * restrict, int)
     ;
int regwexec(const regex_t * restrict, const wchar_t * restrict, size_t,
     regmatch_t __pmatch[ restrict], int)
     ;
int regwncomp(regex_t * restrict, const wchar_t * restrict, size_t, int)
     ;
int regwnexec(const regex_t * restrict, const wchar_t * restrict,
     size_t, size_t, regmatch_t __pmatch[ restrict], int)
     ;



# 95 "project/nnn/src/nnn.c" 2

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
# 97 "project/nnn/src/nnn.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 98 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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








# 99 "project/nnn/src/nnn.c" 2
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
# 100 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 1 3 4
# 101 "project/nnn/src/nnn.c" 2

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


# 103 "project/nnn/src/nnn.c" 2



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ftw.h" 1 3 4
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ftw.h" 3 4
struct FTW {
 int base;
 int level;
};


int ftw(const char *, int (*)(const char *, const struct stat *, int), int)
 __asm("_" "ftw" "$INODE64" );
int nftw(const char *, int (*)(const char *, const struct stat *, int,
     struct FTW *), int, int) __asm("_" "nftw" "$INODE64" );

# 107 "project/nnn/src/nnn.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mbstate_t.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 1 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 3 4
typedef __darwin_wint_t wint_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_wctype_t.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
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
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/__wctype.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 2 3 4







extern __inline __attribute__((__gnu_inline__)) int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

extern __inline __attribute__((__gnu_inline__)) int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_wctype.h" 3 4

wctype_t
 wctype(const char *);

# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 2 3 4




wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * restrict, int, FILE * restrict);
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * restrict, FILE * restrict);
int fwide(FILE *, int);
int fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * restrict, size_t, mbstate_t * restrict);
size_t mbrtowc(wchar_t * restrict, const char * restrict, size_t,
     mbstate_t * restrict);
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * restrict, const char ** restrict, size_t,
     mbstate_t * restrict);
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * restrict, size_t, const wchar_t * restrict, ...);
int swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswprintf(wchar_t * restrict, size_t, const wchar_t * restrict,
     __darwin_va_list);
int vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t *wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * restrict, const wchar_t * restrict);
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * restrict, size_t, const wchar_t * restrict,
     const struct tm * restrict) __asm("_" "wcsftime" );
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * restrict, const wchar_t * restrict, size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * restrict , const wchar_t * restrict, size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * restrict, const wchar_t ** restrict, size_t,
     mbstate_t * restrict);
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t wcsxfrm(wchar_t * restrict, const wchar_t * restrict, size_t);
int wctob(wint_t);
double wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t *wcstok(wchar_t * restrict, const wchar_t * restrict,
     wchar_t ** restrict);
long wcstol(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long
  wcstoul(const wchar_t * restrict, wchar_t ** restrict, int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * restrict, const wchar_t * restrict, size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * restrict, ...);
int wscanf(const wchar_t * restrict, ...);
int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);

# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4

int vfwscanf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswscanf(const wchar_t * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vwscanf(const wchar_t * restrict, __darwin_va_list);
float wcstof(const wchar_t * restrict, wchar_t ** restrict);
long double
 wcstold(const wchar_t * restrict, wchar_t ** restrict);

long long
 wcstoll(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long long
 wcstoull(const wchar_t * restrict, wchar_t ** restrict, int);


# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/wchar.h" 3 4

size_t mbsnrtowcs(wchar_t * restrict, const char ** restrict, size_t,
            size_t, mbstate_t * restrict);
wchar_t *wcpcpy(wchar_t * restrict, const wchar_t * restrict) ;
wchar_t *wcpncpy(wchar_t * restrict, const wchar_t * restrict, size_t) ;
wchar_t *wcsdup(const wchar_t *) ;
int wcscasecmp(const wchar_t *, const wchar_t *) ;
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) ;
size_t wcsnlen(const wchar_t *, size_t) ;
size_t wcsnrtombs(char * restrict, const wchar_t ** restrict, size_t,
            size_t, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t ** __bufp, size_t * __sizep) ;









wchar_t *fgetwln(FILE * restrict, size_t *) ;
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);

# 108 "project/nnn/src/nnn.c" 2
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

# 109 "project/nnn/src/nnn.c" 2
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

# 110 "project/nnn/src/nnn.c" 2
# 124 "project/nnn/src/nnn.c"
# 1 "project/nnn/src/nnn.h" 1
# 31 "project/nnn/src/nnn.h"
       

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ncurses_dll.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 2 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
typedef unsigned int chtype;
typedef unsigned long mmask_t;



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unctrl.h" 1 3 4
# 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unctrl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 1 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unctrl.h" 2 3 4


 char * unctrl (chtype);
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 2 3 4


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 2 3 4
# 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
typedef unsigned char NCURSES_BOOL;
# 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 2 3 4
# 231 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
extern chtype acs_map[];
# 321 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
typedef struct screen SCREEN;
typedef struct _win_st WINDOW;

typedef chtype attr_t;
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
typedef struct
{
    attr_t attr;
    wchar_t chars[5];





}
cchar_t;
# 520 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
extern int addch (const chtype);
extern int addchnstr (const chtype *, int);
extern int addchstr (const chtype *);
extern int addnstr (const char *, int);
extern int addstr (const char *);
extern int attroff (int);
extern int attron (int);
extern int attrset (int);
extern int attr_get (attr_t *, short *, void *);
extern int attr_off (attr_t, void *);
extern int attr_on (attr_t, void *);
extern int attr_set (attr_t, short, void *);
extern int baudrate (void);
extern int beep (void);
extern int bkgd (chtype);
extern void bkgdset (chtype);
extern int border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);
extern int box (WINDOW *, chtype, chtype);
extern _Bool can_change_color (void);
extern int cbreak (void);
extern int chgat (int, attr_t, short, const void *);
extern int clear (void);
extern int clearok (WINDOW *,_Bool);
extern int clrtobot (void);
extern int clrtoeol (void);
extern int color_content (short,short*,short*,short*);
extern int color_set (short,void*);
extern int COLOR_PAIR (int);
extern int copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int);
extern int curs_set (int);
extern int def_prog_mode (void);
extern int def_shell_mode (void);
extern int delay_output (int);
extern int delch (void);
extern void delscreen (SCREEN *);
extern int delwin (WINDOW *);
extern int deleteln (void);
extern WINDOW * derwin (WINDOW *,int,int,int,int);
extern int doupdate (void);
extern WINDOW * dupwin (WINDOW *);
extern int echo (void);
extern int echochar (const chtype);
extern int erase (void);
extern int endwin (void);
extern char erasechar (void);
extern void filter (void);
extern int flash (void);
extern int flushinp (void);
extern chtype getbkgd (WINDOW *);
extern int getch (void);
extern int getnstr (char *, int);
extern int getstr (char *);
extern WINDOW * getwin (FILE *);
extern int halfdelay (int);
extern _Bool has_colors (void);
extern _Bool has_ic (void);
extern _Bool has_il (void);
extern int hline (chtype, int);
extern void idcok (WINDOW *, _Bool);
extern int idlok (WINDOW *, _Bool);
extern void immedok (WINDOW *, _Bool);
extern chtype inch (void);
extern int inchnstr (chtype *, int);
extern int inchstr (chtype *);
extern WINDOW * initscr (void);
extern int init_color (short,short,short,short);
extern int init_pair (short,short,short);
extern int innstr (char *, int);
extern int insch (chtype);
extern int insdelln (int);
extern int insertln (void);
extern int insnstr (const char *, int);
extern int insstr (const char *);
extern int instr (char *);
extern int intrflush (WINDOW *,_Bool);
extern _Bool isendwin (void);
extern _Bool is_linetouched (WINDOW *,int);
extern _Bool is_wintouched (WINDOW *);
extern char * keyname (int);
extern int keypad (WINDOW *,_Bool);
extern char killchar (void);
extern int leaveok (WINDOW *,_Bool);
extern char * longname (void);
extern int meta (WINDOW *,_Bool);
extern int move (int, int);
extern int mvaddch (int, int, const chtype);
extern int mvaddchnstr (int, int, const chtype *, int);
extern int mvaddchstr (int, int, const chtype *);
extern int mvaddnstr (int, int, const char *, int);
extern int mvaddstr (int, int, const char *);
extern int mvchgat (int, int, int, attr_t, short, const void *);
extern int mvcur (int,int,int,int);
extern int mvdelch (int, int);
extern int mvderwin (WINDOW *, int, int);
extern int mvgetch (int, int);
extern int mvgetnstr (int, int, char *, int);
extern int mvgetstr (int, int, char *);
extern int mvhline (int, int, chtype, int);
extern chtype mvinch (int, int);
extern int mvinchnstr (int, int, chtype *, int);
extern int mvinchstr (int, int, chtype *);
extern int mvinnstr (int, int, char *, int);
extern int mvinsch (int, int, chtype);
extern int mvinsnstr (int, int, const char *, int);
extern int mvinsstr (int, int, const char *);
extern int mvinstr (int, int, char *);
extern int mvprintw (int,int, const char *,...)
  ;
extern int mvscanw (int,int, char *,...)
  ;
extern int mvvline (int, int, chtype, int);
extern int mvwaddch (WINDOW *, int, int, const chtype);
extern int mvwaddchnstr (WINDOW *, int, int, const chtype *, int);
extern int mvwaddchstr (WINDOW *, int, int, const chtype *);
extern int mvwaddnstr (WINDOW *, int, int, const char *, int);
extern int mvwaddstr (WINDOW *, int, int, const char *);
extern int mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);
extern int mvwdelch (WINDOW *, int, int);
extern int mvwgetch (WINDOW *, int, int);
extern int mvwgetnstr (WINDOW *, int, int, char *, int);
extern int mvwgetstr (WINDOW *, int, int, char *);
extern int mvwhline (WINDOW *, int, int, chtype, int);
extern int mvwin (WINDOW *,int,int);
extern chtype mvwinch (WINDOW *, int, int);
extern int mvwinchnstr (WINDOW *, int, int, chtype *, int);
extern int mvwinchstr (WINDOW *, int, int, chtype *);
extern int mvwinnstr (WINDOW *, int, int, char *, int);
extern int mvwinsch (WINDOW *, int, int, chtype);
extern int mvwinsnstr (WINDOW *, int, int, const char *, int);
extern int mvwinsstr (WINDOW *, int, int, const char *);
extern int mvwinstr (WINDOW *, int, int, char *);
extern int mvwprintw (WINDOW*,int,int, const char *,...)
  ;
extern int mvwscanw (WINDOW *,int,int, char *,...)
  ;
extern int mvwvline (WINDOW *,int, int, chtype, int);
extern int napms (int);
extern WINDOW * newpad (int,int);
extern SCREEN * newterm ( char *,FILE *,FILE *);
extern WINDOW * newwin (int,int,int,int);
extern int nl (void);
extern int nocbreak (void);
extern int nodelay (WINDOW *,_Bool);
extern int noecho (void);
extern int nonl (void);
extern void noqiflush (void);
extern int noraw (void);
extern int notimeout (WINDOW *,_Bool);
extern int overlay (const WINDOW*,WINDOW *);
extern int overwrite (const WINDOW*,WINDOW *);
extern int pair_content (short,short*,short*);
extern int PAIR_NUMBER (int);
extern int pechochar (WINDOW *, const chtype);
extern int pnoutrefresh (WINDOW*,int,int,int,int,int,int);
extern int prefresh (WINDOW *,int,int,int,int,int,int);
extern int printw (const char *,...)
  ;
extern int putwin (WINDOW *, FILE *);
extern void qiflush (void);
extern int raw (void);
extern int redrawwin (WINDOW *);
extern int refresh (void);
extern int resetty (void);
extern int reset_prog_mode (void);
extern int reset_shell_mode (void);
extern int ripoffline (int, int (*)(WINDOW *, int));
extern int savetty (void);
extern int scanw ( char *,...)
  ;
extern int scr_dump (const char *);
extern int scr_init (const char *);
extern int scrl (int);
extern int scroll (WINDOW *);
extern int scrollok (WINDOW *,_Bool);
extern int scr_restore (const char *);
extern int scr_set (const char *);
extern int setscrreg (int,int);
extern SCREEN * set_term (SCREEN *);
extern int slk_attroff (const chtype);
extern int slk_attr_off (const attr_t, void *);
extern int slk_attron (const chtype);
extern int slk_attr_on (attr_t,void*);
extern int slk_attrset (const chtype);
extern attr_t slk_attr (void);
extern int slk_attr_set (const attr_t,short,void*);
extern int slk_clear (void);
extern int slk_color (short);
extern int slk_init (int);
extern char * slk_label (int);
extern int slk_noutrefresh (void);
extern int slk_refresh (void);
extern int slk_restore (void);
extern int slk_set (int,const char *,int);
extern int slk_touch (void);
extern int standout (void);
extern int standend (void);
extern int start_color (void);
extern WINDOW * subpad (WINDOW *, int, int, int, int);
extern WINDOW * subwin (WINDOW *, int, int, int, int);
extern int syncok (WINDOW *, _Bool);
extern chtype termattrs (void);
extern char * termname (void);
extern void timeout (int);
extern int touchline (WINDOW *, int, int);
extern int touchwin (WINDOW *);
extern int typeahead (int);
extern int ungetch (int);
extern int untouchwin (WINDOW *);
extern void use_env (_Bool);
extern int vidattr (chtype);
extern int vidputs (chtype, int (*)(int));
extern int vline (chtype, int);
extern int vwprintw (WINDOW *, const char *,va_list);
extern int vw_printw (WINDOW *, const char *,va_list);
extern int vwscanw (WINDOW *, char *,va_list);
extern int vw_scanw (WINDOW *, char *,va_list);
extern int waddch (WINDOW *, const chtype);
extern int waddchnstr (WINDOW *,const chtype *,int);
extern int waddchstr (WINDOW *,const chtype *);
extern int waddnstr (WINDOW *,const char *,int);
extern int waddstr (WINDOW *,const char *);
extern int wattron (WINDOW *, int);
extern int wattroff (WINDOW *, int);
extern int wattrset (WINDOW *, int);
extern int wattr_get (WINDOW *, attr_t *, short *, void *);
extern int wattr_on (WINDOW *, attr_t, void *);
extern int wattr_off (WINDOW *, attr_t, void *);
extern int wattr_set (WINDOW *, attr_t, short, void *);
extern int wbkgd (WINDOW *, chtype);
extern void wbkgdset (WINDOW *,chtype);
extern int wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);
extern int wchgat (WINDOW *, int, attr_t, short, const void *);
extern int wclear (WINDOW *);
extern int wclrtobot (WINDOW *);
extern int wclrtoeol (WINDOW *);
extern int wcolor_set (WINDOW*,short,void*);
extern void wcursyncup (WINDOW *);
extern int wdelch (WINDOW *);
extern int wdeleteln (WINDOW *);
extern int wechochar (WINDOW *, const chtype);
extern int werase (WINDOW *);
extern int wgetch (WINDOW *);
extern int wgetnstr (WINDOW *,char *,int);
extern int wgetstr (WINDOW *, char *);
extern int whline (WINDOW *, chtype, int);
extern chtype winch (WINDOW *);
extern int winchnstr (WINDOW *, chtype *, int);
extern int winchstr (WINDOW *, chtype *);
extern int winnstr (WINDOW *, char *, int);
extern int winsch (WINDOW *, chtype);
extern int winsdelln (WINDOW *,int);
extern int winsertln (WINDOW *);
extern int winsnstr (WINDOW *, const char *,int);
extern int winsstr (WINDOW *, const char *);
extern int winstr (WINDOW *, char *);
extern int wmove (WINDOW *,int,int);
extern int wnoutrefresh (WINDOW *);
extern int wprintw (WINDOW *, const char *,...)
  ;
extern int wredrawln (WINDOW *,int,int);
extern int wrefresh (WINDOW *);
extern int wscanw (WINDOW *, char *,...)
  ;
extern int wscrl (WINDOW *,int);
extern int wsetscrreg (WINDOW *,int,int);
extern int wstandout (WINDOW *);
extern int wstandend (WINDOW *);
extern void wsyncdown (WINDOW *);
extern void wsyncup (WINDOW *);
extern void wtimeout (WINDOW *,int);
extern int wtouchln (WINDOW *,int,int,int);
extern int wvline (WINDOW *,chtype,int);




extern int tigetflag ( char *);
extern int tigetnum ( char *);
extern char * tigetstr ( char *);
extern int putp (const char *);


extern char * tparm ( char *, ...);
# 811 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
extern int getattrs (const WINDOW *);
extern int getcurx (const WINDOW *);
extern int getcury (const WINDOW *);
extern int getbegx (const WINDOW *);
extern int getbegy (const WINDOW *);
extern int getmaxx (const WINDOW *);
extern int getmaxy (const WINDOW *);
extern int getparx (const WINDOW *);
extern int getpary (const WINDOW *);
# 834 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
typedef int (*NCURSES_WINDOW_CB)(WINDOW *, void *);
typedef int (*NCURSES_SCREEN_CB)(SCREEN *, void *);
extern _Bool is_term_resized (int, int);
extern char * keybound (int, int);
extern const char * curses_version (void);
extern int assume_default_colors (int, int);
extern int define_key (const char *, int);
extern int key_defined (const char *);
extern int keyok (int, _Bool);
extern int resize_term (int, int);
extern int resizeterm (int, int);
extern int set_escdelay (int);
extern int set_tabsize (int);
extern int use_default_colors (void);
extern int use_extended_names (_Bool);
extern int use_legacy_coding (int);
extern int use_screen (SCREEN *, NCURSES_SCREEN_CB, void *);
extern int use_window (WINDOW *, NCURSES_WINDOW_CB, void *);
extern int wresize (WINDOW *, int, int);
extern void nofilter(void);





extern WINDOW * wgetparent (const WINDOW *);
extern _Bool is_cleared (const WINDOW *);
extern _Bool is_idcok (const WINDOW *);
extern _Bool is_idlok (const WINDOW *);
extern _Bool is_immedok (const WINDOW *);
extern _Bool is_keypad (const WINDOW *);
extern _Bool is_leaveok (const WINDOW *);
extern _Bool is_nodelay (const WINDOW *);
extern _Bool is_notimeout (const WINDOW *);
extern _Bool is_scrollok (const WINDOW *);
extern _Bool is_syncok (const WINDOW *);
extern int wgetscrreg (const WINDOW *, int *, int *);
# 1202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
extern WINDOW * curscr;
extern WINDOW * newscr;
extern WINDOW * stdscr;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
# 1335 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
extern cchar_t * _nc_wacs;
# 1398 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
extern int add_wch (const cchar_t *);
extern int add_wchnstr (const cchar_t *, int);
extern int add_wchstr (const cchar_t *);
extern int addnwstr (const wchar_t *, int);
extern int addwstr (const wchar_t *);
extern int bkgrnd (const cchar_t *);
extern void bkgrndset (const cchar_t *);
extern int border_set (const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*);
extern int box_set (WINDOW *, const cchar_t *, const cchar_t *);
extern int echo_wchar (const cchar_t *);
extern int erasewchar (wchar_t*);
extern int get_wch (wint_t *);
extern int get_wstr (wint_t *);
extern int getbkgrnd (cchar_t *);
extern int getcchar (const cchar_t *, wchar_t*, attr_t*, short*, void*);
extern int getn_wstr (wint_t *, int);
extern int hline_set (const cchar_t *, int);
extern int in_wch (cchar_t *);
extern int in_wchnstr (cchar_t *, int);
extern int in_wchstr (cchar_t *);
extern int innwstr (wchar_t *, int);
extern int ins_nwstr (const wchar_t *, int);
extern int ins_wch (const cchar_t *);
extern int ins_wstr (const wchar_t *);
extern int inwstr (wchar_t *);
extern char* key_name (wchar_t);
extern int killwchar (wchar_t *);
extern int mvadd_wch (int, int, const cchar_t *);
extern int mvadd_wchnstr (int, int, const cchar_t *, int);
extern int mvadd_wchstr (int, int, const cchar_t *);
extern int mvaddnwstr (int, int, const wchar_t *, int);
extern int mvaddwstr (int, int, const wchar_t *);
extern int mvget_wch (int, int, wint_t *);
extern int mvget_wstr (int, int, wint_t *);
extern int mvgetn_wstr (int, int, wint_t *, int);
extern int mvhline_set (int, int, const cchar_t *, int);
extern int mvin_wch (int, int, cchar_t *);
extern int mvin_wchnstr (int, int, cchar_t *, int);
extern int mvin_wchstr (int, int, cchar_t *);
extern int mvinnwstr (int, int, wchar_t *, int);
extern int mvins_nwstr (int, int, const wchar_t *, int);
extern int mvins_wch (int, int, const cchar_t *);
extern int mvins_wstr (int, int, const wchar_t *);
extern int mvinwstr (int, int, wchar_t *);
extern int mvvline_set (int, int, const cchar_t *, int);
extern int mvwadd_wch (WINDOW *, int, int, const cchar_t *);
extern int mvwadd_wchnstr (WINDOW *, int, int, const cchar_t *, int);
extern int mvwadd_wchstr (WINDOW *, int, int, const cchar_t *);
extern int mvwaddnwstr (WINDOW *, int, int, const wchar_t *, int);
extern int mvwaddwstr (WINDOW *, int, int, const wchar_t *);
extern int mvwget_wch (WINDOW *, int, int, wint_t *);
extern int mvwget_wstr (WINDOW *, int, int, wint_t *);
extern int mvwgetn_wstr (WINDOW *, int, int, wint_t *, int);
extern int mvwhline_set (WINDOW *, int, int, const cchar_t *, int);
extern int mvwin_wch (WINDOW *, int, int, cchar_t *);
extern int mvwin_wchnstr (WINDOW *, int,int, cchar_t *,int);
extern int mvwin_wchstr (WINDOW *, int, int, cchar_t *);
extern int mvwinnwstr (WINDOW *, int, int, wchar_t *, int);
extern int mvwins_nwstr (WINDOW *, int,int, const wchar_t *,int);
extern int mvwins_wch (WINDOW *, int, int, const cchar_t *);
extern int mvwins_wstr (WINDOW *, int, int, const wchar_t *);
extern int mvwinwstr (WINDOW *, int, int, wchar_t *);
extern int mvwvline_set (WINDOW *, int,int, const cchar_t *,int);
extern int pecho_wchar (WINDOW *, const cchar_t *);
extern int setcchar (cchar_t *, const wchar_t *, const attr_t, short, const void *);
extern int slk_wset (int, const wchar_t *, int);
extern attr_t term_attrs (void);
extern int unget_wch (const wchar_t);
extern int vid_attr (attr_t, short, void *);
extern int vid_puts (attr_t, short, void *, int (*)(int));
extern int vline_set (const cchar_t *, int);
extern int wadd_wch (WINDOW *,const cchar_t *);
extern int wadd_wchnstr (WINDOW *,const cchar_t *,int);
extern int wadd_wchstr (WINDOW *,const cchar_t *);
extern int waddnwstr (WINDOW *,const wchar_t *,int);
extern int waddwstr (WINDOW *,const wchar_t *);
extern int wbkgrnd (WINDOW *,const cchar_t *);
extern void wbkgrndset (WINDOW *,const cchar_t *);
extern int wborder_set (WINDOW *,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*);
extern int wecho_wchar (WINDOW *, const cchar_t *);
extern int wget_wch (WINDOW *, wint_t *);
extern int wget_wstr (WINDOW *, wint_t *);
extern int wgetbkgrnd (WINDOW *, cchar_t *);
extern int wgetn_wstr (WINDOW *,wint_t *, int);
extern int whline_set (WINDOW *, const cchar_t *, int);
extern int win_wch (WINDOW *, cchar_t *);
extern int win_wchnstr (WINDOW *, cchar_t *, int);
extern int win_wchstr (WINDOW *, cchar_t *);
extern int winnwstr (WINDOW *, wchar_t *, int);
extern int wins_nwstr (WINDOW *, const wchar_t *, int);
extern int wins_wch (WINDOW *, const cchar_t *);
extern int wins_wstr (WINDOW *, const wchar_t *);
extern int winwstr (WINDOW *, wchar_t *);
extern wchar_t* wunctrl (cchar_t *);
extern int wvline_set (WINDOW *, const cchar_t *, int);
# 1667 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/curses.h" 3 4
typedef struct
{
    short id;
    int x, y, z;
    mmask_t bstate;
}
MEVENT;

extern int getmouse (MEVENT *);
extern int ungetmouse (MEVENT *);
extern mmask_t mousemask (mmask_t, mmask_t *);
extern _Bool wenclose (const WINDOW *, int, int);
extern int mouseinterval (int);
extern _Bool wmouse_trafo (const WINDOW*, int*, int*, _Bool);
extern _Bool mouse_trafo (int*, int*, _Bool);





extern int mcprint (char *, int);
extern int has_key (int);
# 34 "project/nnn/src/nnn.h" 2
# 46 "project/nnn/src/nnn.h"

# 46 "project/nnn/src/nnn.h"
enum action {
 SEL_BACK = 1,
 SEL_OPEN,
 SEL_NAV_IN,
 SEL_NEXT,
 SEL_PREV,
 SEL_PGDN,
 SEL_PGUP,
 SEL_CTRL_D,
 SEL_CTRL_U,
 SEL_HOME,
 SEL_END,
 SEL_FIRST,
 SEL_CDHOME,
 SEL_CDBEGIN,
 SEL_CDLAST,
 SEL_CDROOT,
 SEL_BMOPEN,
 SEL_REMOTE,
 SEL_CYCLE,
 SEL_CYCLER,
 SEL_CTX1,
 SEL_CTX2,
 SEL_CTX3,
 SEL_CTX4,






 SEL_MARK,
 SEL_BMARK,
 SEL_FLTR,
 SEL_MFLTR,
 SEL_HIDDEN,
 SEL_DETAIL,
 SEL_STATS,
 SEL_CHMODX,
 SEL_ARCHIVE,
 SEL_SORT,
 SEL_REDRAW,
 SEL_SEL,
 SEL_SELMUL,
 SEL_SELALL,
 SEL_SELINV,
 SEL_SELEDIT,
 SEL_CP,
 SEL_MV,
 SEL_CPMVAS,
 SEL_RM,
 SEL_OPENWITH,
 SEL_NEW,
 SEL_RENAME,
 SEL_RENAMEMUL,
 SEL_UMOUNT,
 SEL_HELP,
 SEL_AUTONEXT,
 SEL_EDIT,
 SEL_PLUGIN,
 SEL_SHELL,
 SEL_LAUNCH,
 SEL_PROMPT,
 SEL_LOCK,
 SEL_SESSIONS,
 SEL_EXPORT,
 SEL_TIMETYPE,
 SEL_QUITCTX,
 SEL_QUITCD,
 SEL_QUIT,
 SEL_QUITERR,

 SEL_CLICK,

};


struct key {
 int sym;
 enum action act;
};

static struct key bindings[] = {

 { 
# 130 "project/nnn/src/nnn.h" 3 4
  0404
# 130 "project/nnn/src/nnn.h"
          , SEL_BACK },
 { 'h', SEL_BACK },

 { 
# 133 "project/nnn/src/nnn.h" 3 4
  0527
# 133 "project/nnn/src/nnn.h"
           , SEL_OPEN },
 { '\r', SEL_OPEN },

 { 
# 136 "project/nnn/src/nnn.h" 3 4
  0405
# 136 "project/nnn/src/nnn.h"
           , SEL_NAV_IN },
 { 'l', SEL_NAV_IN },

 { 'j', SEL_NEXT },
 { 
# 140 "project/nnn/src/nnn.h" 3 4
  0402
# 140 "project/nnn/src/nnn.h"
          , SEL_NEXT },

 { 'k', SEL_PREV },
 { 
# 143 "project/nnn/src/nnn.h" 3 4
  0403
# 143 "project/nnn/src/nnn.h"
        , SEL_PREV },

 { 
# 145 "project/nnn/src/nnn.h" 3 4
  0522
# 145 "project/nnn/src/nnn.h"
           , SEL_PGDN },

 { 
# 147 "project/nnn/src/nnn.h" 3 4
  0523
# 147 "project/nnn/src/nnn.h"
           , SEL_PGUP },

 { (('D') & 0x1f), SEL_CTRL_D },

 { (('U') & 0x1f), SEL_CTRL_U },

 { 
# 153 "project/nnn/src/nnn.h" 3 4
  0406
# 153 "project/nnn/src/nnn.h"
          , SEL_HOME },
 { 'g', SEL_HOME },
 { (('A') & 0x1f), SEL_HOME },

 { 
# 157 "project/nnn/src/nnn.h" 3 4
  0550
# 157 "project/nnn/src/nnn.h"
         , SEL_END },
 { 'G', SEL_END },
 { (('E') & 0x1f), SEL_END },

 { '\'', SEL_FIRST },

 { '~', SEL_CDHOME },

 { '@', SEL_CDBEGIN },

 { '-', SEL_CDLAST },

 { '`', SEL_CDROOT },

 { 'b', SEL_BMOPEN },
 { (('_') & 0x1f), SEL_BMOPEN },

 { 'c', SEL_REMOTE },

 { '\t', SEL_CYCLE },

 { 
# 178 "project/nnn/src/nnn.h" 3 4
  0541
# 178 "project/nnn/src/nnn.h"
          , SEL_CYCLER },

 { '1', SEL_CTX1 },
 { '2', SEL_CTX2 },
 { '3', SEL_CTX3 },
 { '4', SEL_CTX4 },







 { ',', SEL_MARK },

 { 'B', SEL_BMARK },

 { '/', SEL_FLTR },

 { (('N') & 0x1f), SEL_MFLTR },

 { '.', SEL_HIDDEN },

 { 'd', SEL_DETAIL },

 { 'f', SEL_STATS },
 { (('F') & 0x1f), SEL_STATS },

 { '*', SEL_CHMODX },

 { 'z', SEL_ARCHIVE },

 { 't', SEL_SORT },
 { (('T') & 0x1f), SEL_SORT },

 { (('L') & 0x1f), SEL_REDRAW },

 { (('J') & 0x1f), SEL_SEL },
 { ' ', SEL_SEL },

 { 'm', SEL_SELMUL },

 { 'a', SEL_SELALL },

 { 'A', SEL_SELINV },

 { 'E', SEL_SELEDIT },

 { 'p', SEL_CP },
 { (('P') & 0x1f), SEL_CP },

 { 'v', SEL_MV },
 { (('V') & 0x1f), SEL_MV },

 { 'w', SEL_CPMVAS },
 { (('W') & 0x1f), SEL_CPMVAS },

 { 'x', SEL_RM },
 { (('X') & 0x1f), SEL_RM },

 { 'o', SEL_OPENWITH },
 { (('O') & 0x1f), SEL_OPENWITH },

 { 'n', SEL_NEW },

 { (('R') & 0x1f), SEL_RENAME },

 { 'r', SEL_RENAMEMUL },

 { 'u', SEL_UMOUNT },

 { '?', SEL_HELP },

 { '+', SEL_AUTONEXT },

 { 'e', SEL_EDIT },

 { ';', SEL_PLUGIN },

 { '!', SEL_SHELL },
 { ((']') & 0x1f), SEL_SHELL },

 { '=', SEL_LAUNCH },

 { ']', SEL_PROMPT },

 { '0', SEL_LOCK },

 { 's', SEL_SESSIONS },

 { '>', SEL_EXPORT },

 { 'T', SEL_TIMETYPE },

 { 'q', SEL_QUITCTX },

 { (('G') & 0x1f), SEL_QUITCD },

 { (('Q') & 0x1f), SEL_QUIT },

 { 'Q', SEL_QUITERR },

 { 
# 280 "project/nnn/src/nnn.h" 3 4
  0631
# 280 "project/nnn/src/nnn.h"
           , SEL_CLICK },

};
# 125 "project/nnn/src/nnn.c" 2
# 1 "project/nnn/src/dbg.h" 1
# 31 "project/nnn/src/dbg.h"
       
# 126 "project/nnn/src/nnn.c" 2
# 266 "project/nnn/src/nnn.c"
typedef unsigned int uint_t;
typedef unsigned char uchar_t;
typedef unsigned short ushort_t;
typedef unsigned long long ullong_t;




typedef struct entry {
 char *name;
 time_t sec;
 uint_t nsec;
 mode_t mode;
 off_t size;
 struct {
  ullong_t blocks : 40;
  ullong_t nlen : 16;
  ullong_t flags : 8;
 };

 uid_t uid;
 gid_t gid;

} *pEntry;


typedef struct {
 char *startpos;
 size_t len;
} selmark;


typedef struct {
 int key;
 int off;
} kv;

typedef struct {



 const regex_t *regex;

 const char *str;
} fltrexp_t;





typedef struct {
 uint_t filtermode : 1;
 uint_t timeorder : 1;
 uint_t sizeorder : 1;
 uint_t apparentsz : 1;
 uint_t blkorder : 1;
 uint_t extnorder : 1;
 uint_t showhidden : 1;
 uint_t reserved0 : 1;
 uint_t showdetail : 1;
 uint_t ctxactive : 1;
 uint_t reverse : 1;
 uint_t version : 1;
 uint_t reserved1 : 1;

 uint_t curctx : 3;
 uint_t prefersel : 1;
 uint_t fileinfo : 1;
 uint_t nonavopen : 1;
 uint_t autoselect : 1;
 uint_t reserved2 : 1;
 uint_t useeditor : 1;
 uint_t reserved3 : 3;
 uint_t regex : 1;
 uint_t x11 : 1;
 uint_t timetype : 2;
 uint_t cliopener : 1;
 uint_t waitedit : 1;
 uint_t rollover : 1;
} settings;


typedef struct {
 uint_t autofifo : 1;
 uint_t autonext : 1;
 uint_t dircolor : 1;
 uint_t dirctx : 1;
 uint_t duinit : 1;
 uint_t fifomode : 1;
 uint_t forcequit : 1;
 uint_t initfile : 1;
 uint_t interrupt : 1;
 uint_t move : 1;
 uint_t oldcolor : 1;
 uint_t picked : 1;
 uint_t picker : 1;
 uint_t pluginit : 1;
 uint_t prstssn : 1;
 uint_t rangesel : 1;
 uint_t runctx : 3;
 uint_t runplugin : 1;
 uint_t selmode : 1;
 uint_t stayonsel : 1;
 uint_t trash : 2;
 uint_t uidgid : 1;
 uint_t reserved : 7;
} runstate;


typedef struct {
 char c_path[
# 376 "project/nnn/src/nnn.c" 3 4
            1024
# 376 "project/nnn/src/nnn.c"
                    ];
 char c_last[
# 377 "project/nnn/src/nnn.c" 3 4
            1024
# 377 "project/nnn/src/nnn.c"
                    ];
 char c_name[
# 378 "project/nnn/src/nnn.c" 3 4
            255 
# 378 "project/nnn/src/nnn.c"
                     + 1];
 char c_fltr[48];
 settings c_cfg;
 uint_t color;
} context;


typedef struct {
 size_t ver;
 size_t pathln[4];
 size_t lastln[4];
 size_t nameln[4];
 size_t fltrln[4];
} session_header_t;





static settings cfg = {
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 1,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 1,
 0,
 0,
 0,
 0,
 0,
 2,
 0,
 0,
 1,
};

static context g_ctx[4] __attribute__ ((aligned));

static int ndents, cur, last, curscroll, last_curscroll, total_dents = 64, scroll_lines = 1;
static int nselected;

static int fifofd = -1;

static uint_t idletimeout, selbufpos, selbuflen;
static ushort_t xlines, xcols;
static ushort_t idle;
static uchar_t maxbm, maxplug, maxorder;
static uchar_t cfgsort[4 + 1];
static char *bmstr;
static char *pluginstr;
static char *orderstr;
static char *opener;
static char *editor;
static char *enveditor;
static char *pager;
static char *shell;
static char *home;
static char *initpath;
static char *cfgpath;
static char *selpath;
static char *listpath;
static char *listroot;
static char *plgpath;
static char *pnamebuf, *pselbuf, *findselpos;
static char *mark;

static char *hostname;


static char *fifopath;

static char *lastcmd;
static ullong_t *ihashbmp;
static struct entry *pdents;
static blkcnt_t dir_blocks;
static kv *bookmark;
static kv *plug;
static kv *order;
static uchar_t tmpfplen, homelen;
static uchar_t blk_shift = 9;

static int middle_click_key;




static regex_t archive_re;







static int threadbmp = -1;
static volatile int active_threads;
static pthread_mutex_t running_mutex = 
# 487 "project/nnn/src/nnn.c" 3 4
                                      {0x32AAABA7, {0}}
# 487 "project/nnn/src/nnn.c"
                                                               ;
static pthread_mutex_t hardlink_mutex = 
# 488 "project/nnn/src/nnn.c" 3 4
                                       {0x32AAABA7, {0}}
# 488 "project/nnn/src/nnn.c"
                                                                ;
static ullong_t *core_files;
static blkcnt_t *core_blocks;
static ullong_t num_files;

typedef struct {
 char path[
# 494 "project/nnn/src/nnn.c" 3 4
          1024
# 494 "project/nnn/src/nnn.c"
                  ];
 int entnum;
 ushort_t core;
 
# 497 "project/nnn/src/nnn.c" 3 4
_Bool 
# 497 "project/nnn/src/nnn.c"
     mntpoint;
} thread_data;

static thread_data *core_data;


static struct sigaction oldsighup;
static struct sigaction oldsigtstp;
static struct sigaction oldsigwinch;


static char g_buf[(
# 508 "project/nnn/src/nnn.c" 3 4
                 1024 
# 508 "project/nnn/src/nnn.c"
                 + ((
# 508 "project/nnn/src/nnn.c" 3 4
                 255 
# 508 "project/nnn/src/nnn.c"
                 + 1) << 1))] __attribute__ ((aligned));


static char g_sel[
# 511 "project/nnn/src/nnn.c" 3 4
                 1024
# 511 "project/nnn/src/nnn.c"
                         ] __attribute__ ((aligned));


static char g_tmpfpath[64] __attribute__ ((aligned));


static char g_pipepath[64] __attribute__ ((aligned));


static runstate g_state;
# 553 "project/nnn/src/nnn.c"
static char * const utils[] = {

 "/usr/bin/open",







 "atool",
 "bsdtar",
 "unzip",
 "tar",

 "bashlock",







 "launch",
 "sh -c",
 "bash",
 "sshfs",
 "rclone",
 "vi",
 "less",
 "sh",
 "fzf",
 ".ntfy",
 ".cbcp",
 ".nmv",
 "trash-put",
 "gio trash",
 "rm -rf",
};
# 638 "project/nnn/src/nnn.c"
static const char * const messages[] = {
 "",
 "0 entries",
 "/.nnnXXXXXX",
 "0 selected",
 "cancelled",
 "failed!",
 "session name: ",
 "'c'p / 'm'v as?",
 "'c'urrent / 's'el?",
 "%s %s? [Esc cancels]",
 "limit exceeded",
 "'f'ile / 'd'ir / 's'ym / 'h'ard?",
 "'c'li / 'g'ui?",
 "overwrite?",
 "'s'ave / 'l'oad / 'r'estore?",
 "Quit all contexts?",
 "remote name (- for hovered): ",
 "archive [path/]name: ",
 "open with: ",
 "[path/]name: ",
 "link prefix [@ for none]: ",
 "copy [path/]name: ",
 "\n'Enter' to continue",
 "open failed",
 "dir inaccessible",
 "empty! edit/open with",
 "?",
 "not set",
 "entry exists",
 "too few cols!",
 "'s'shfs / 'r'clone?",
 "refresh if slow",
 "app name: ",
 "'o'pen / e'x'tract / 'l's / 'm'nt?",
 "keys:",
 "invalid regex",
 "'a'u / 'd'u / 'e'xt / 'r'ev / 's'z / 't'm / 'v'er / 'c'lr / '^T'?",
 "unmount failed! try lazy?",
 "first file (\')/char?",
 "remove tmp file?",
 "invalid key",
 "unchanged",
 "dir changed, range sel off",
};
# 700 "project/nnn/src/nnn.c"
static const char * const env_cfg[] = {
 "NNN_OPTS",
 "NNN_BMS",
 "NNN_PLUG",
 "NNN_OPENER",
 "NNN_COLORS",
 "NNN_FCOLORS",
 "NNNLVL",
 "NNN_PIPE",
 "NNN_MCLICK",
 "NNN_SEL",
 "NNN_ARCHIVE",
 "NNN_ORDER",
 "NNN_HELP",
 "NNN_TRASH",
};
# 724 "project/nnn/src/nnn.c"
static const char * const envs[] = {
 "SHELL",
 "VISUAL",
 "EDITOR",
 "PAGER",
 "nnn",
};
# 741 "project/nnn/src/nnn.c"
static char cp[] = "cp -iRp";
static char mv[] = "mv -i";



static const char * const archive_cmd[] = {"atool -a", "bsdtar -acvf", "zip -r", "tar -acvf"};







static const char * const toks[] = {
 "bookmarks",
 "sessions",
 "mounts",
 "plugins",
};







static const char * const patterns[] = {
 "gsed"" -i 's|^\\(\\(.*/\\)\\(.*\\)$\\)|#\\1\\n\\3|' %s",
 "gsed"" 's|^\\([^#/][^/]\\?.*\\)$|%s/\\1|;s|^#\\(/.*\\)$|\\1|' "
  "%s | tr '\\n' '\\0' | xargs -0 -n2 sh -c '%s \"$0\" \"$@\" < /dev/tty'",
 "\\.(bz|bz2|gz|tar|taz|tbz|tbz2|tgz|z|zip)$",
 "gsed"" -i 's|^%s\\(.*\\)$|%s\\1|' %s",
};
# 794 "project/nnn/src/nnn.c"
static char gcolors[] = "c1e2272e006033f7c6d6abc4";
static uint_t fcolors[((((((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1] = {0};
# 808 "project/nnn/src/nnn.c"
static int kq, event_fd = -1;
static struct kevent events_to_monitor[1];
static uint_t KQUEUE_FFLAGS = 
# 810 "project/nnn/src/nnn.c" 3 4
                             0x00000001 
# 810 "project/nnn/src/nnn.c"
                                         | 
# 810 "project/nnn/src/nnn.c" 3 4
                                           0x00000004 
# 810 "project/nnn/src/nnn.c"
                                                       | 
# 810 "project/nnn/src/nnn.c" 3 4
                                                         0x00000010
       
# 811 "project/nnn/src/nnn.c"
      | 
# 811 "project/nnn/src/nnn.c" 3 4
        0x00000020 
# 811 "project/nnn/src/nnn.c"
                    | 
# 811 "project/nnn/src/nnn.c" 3 4
                      0x00000040 
# 811 "project/nnn/src/nnn.c"
                                  | 
# 811 "project/nnn/src/nnn.c" 3 4
                                    0x00000002
# 811 "project/nnn/src/nnn.c"
                                              ;
static struct timespec gtimeout;
# 845 "project/nnn/src/nnn.c"
static void redraw(char *path);
static int spawn(char *file, char *arg1, char *arg2, char *arg3, ushort_t flag);
static void move_cursor(int target, int ignore_scrolloff);
static char *load_input(int fd, const char *path);
static int set_sort_flags(int r);
static void statusbar(char *path);
static 
# 851 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 851 "project/nnn/src/nnn.c"
           get_output(char *file, char *arg1, char *arg2, int fdout, 
# 851 "project/nnn/src/nnn.c" 3 4
                                                                     _Bool 
# 851 "project/nnn/src/nnn.c"
                                                                          multi, 
# 851 "project/nnn/src/nnn.c" 3 4
                                                                                 _Bool 
# 851 "project/nnn/src/nnn.c"
                                                                                      page);

static void notify_fifo(
# 853 "project/nnn/src/nnn.c" 3 4
                       _Bool 
# 853 "project/nnn/src/nnn.c"
                            force);




static void sigint_handler(int sig)
{
 (void) sig;
 g_state.interrupt = 1;
}

static void clean_exit_sighandler(int sig)
{
 (void) sig;
 endwin();

 exit(
# 869 "project/nnn/src/nnn.c" 3 4
     0
# 869 "project/nnn/src/nnn.c"
                 );
}

static char *xitoa(uint_t val)
{
 static char dst[32] = {'\0'};
 static const char digits[201] =
  "0001020304050607080910111213141516171819"
  "2021222324252627282930313233343536373839"
  "4041424344454647484950515253545556575859"
  "6061626364656667686970717273747576777879"
  "8081828384858687888990919293949596979899";
 uint_t next = 30, quo, i;

 while (val >= 100) {
  quo = val / 100;
  i = (val - (quo * 100)) * 2;
  val = quo;
  dst[next] = digits[i + 1];
  dst[--next] = digits[i];
  --next;
 }


 if (val < 10)
  dst[next] = '0' + val;
 else {
  i = val * 2;
  dst[next] = digits[i + 1];
  dst[--next] = digits[i];
 }

 return &dst[next];
}


static uchar_t xchartohex(uchar_t c)
{
 if (((unsigned int) (c) - '0' <= 9))
  return c - '0';

 if (c >= 'a' && c <= 'f')
  return c - 'a' + 10;

 if (c >= 'A' && c <= 'F')
  return c - 'A' + 10;

 return c;
}




static 
# 922 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 922 "project/nnn/src/nnn.c"
           test_set_bit(uint_t nr)
{
 nr &= (0xFFFFFF);

 pthread_mutex_lock(&hardlink_mutex);
 ullong_t *m = ((ullong_t *)ihashbmp) + (nr >> 6);

 if (*m & (1 << (nr & 63))) {
  pthread_mutex_unlock(&hardlink_mutex);
  return 
# 931 "project/nnn/src/nnn.c" 3 4
        0
# 931 "project/nnn/src/nnn.c"
             ;
 }

 *m |= 1 << (nr & 63);
 pthread_mutex_unlock(&hardlink_mutex);

 return 
# 937 "project/nnn/src/nnn.c" 3 4
       1
# 937 "project/nnn/src/nnn.c"
           ;
}
# 960 "project/nnn/src/nnn.c"
static void *xrealloc(void *pcur, size_t len)
{
 void *pmem = realloc(pcur, len);

 if (!pmem)
  free(pcur);

 return pmem;
}






static size_t xstrsncpy(char *restrict dst, const char *restrict src, size_t n)
{
 char *end = memccpy(dst, src, '\0', n);

 if (!end) {
  dst[n - 1] = '\0';
  end = dst + n;
 }

 return end - dst;
}

static inline size_t xstrlen(const char *restrict s)
{

 return strlen(s);



}

static char *xstrdup(const char *restrict s)
{
 size_t len = xstrlen(s) + 1;
 char *ptr = malloc(len);

 if (ptr)
  xstrsncpy(ptr, s, len);
 return ptr;
}

static 
# 1006 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 1006 "project/nnn/src/nnn.c"
           is_suffix(const char *restrict str, const char *restrict suffix)
{
 if (!str || !suffix)
  return 
# 1009 "project/nnn/src/nnn.c" 3 4
        0
# 1009 "project/nnn/src/nnn.c"
             ;

 size_t lenstr = xstrlen(str);
 size_t lensuffix = xstrlen(suffix);

 if (lensuffix > lenstr)
  return 
# 1015 "project/nnn/src/nnn.c" 3 4
        0
# 1015 "project/nnn/src/nnn.c"
             ;

 return ((*(str + (lenstr - lensuffix)) != *(suffix) ? -1 : strcmp((str + (lenstr - lensuffix)), (suffix))) == 0);
}

static inline 
# 1020 "project/nnn/src/nnn.c" 3 4
             _Bool 
# 1020 "project/nnn/src/nnn.c"
                  is_prefix(const char *restrict str, const char *restrict prefix, size_t len)
{
 return !strncmp(str, prefix, len);
}







static void *xmemrchr(uchar_t *restrict s, uchar_t ch, size_t n)
{




 if (!s || !n)
  return 
# 1038 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 1038 "project/nnn/src/nnn.c"
            ;

 uchar_t *ptr = s + n;

 do {
  if (*--ptr == ch)
   return ptr;
 } while (s != ptr);

 return 
# 1047 "project/nnn/src/nnn.c" 3 4
       ((void *)0)
# 1047 "project/nnn/src/nnn.c"
           ;

}


static char *xdirname(char *path)
{
 char *base = xmemrchr((uchar_t *)path, '/', xstrlen(path));

 if (base == path)
  path[1] = '\0';
 else
  *base = '\0';

 return path;
}

static char *xbasename(char *path)
{
 char *base = xmemrchr((uchar_t *)path, '/', xstrlen(path));

 return base ? base + 1 : path;
}

static inline char *xextension(const char *fname, size_t len)
{
 return xmemrchr((uchar_t *)fname, '.', len);
}







static char *getpwname(uid_t uid)
{
 static uint_t uidcache = 
# 1084 "project/nnn/src/nnn.c" 3 4
                         (0x7fffffff * 2U + 1U)
# 1084 "project/nnn/src/nnn.c"
                                 ;
 static char *namecache;

 if (uidcache != uid) {
  struct passwd *pw = getpwuid(uid);

  uidcache = uid;
  namecache = pw ? pw->pw_name : 
# 1091 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 1091 "project/nnn/src/nnn.c"
                                    ;
 }

 return namecache ? namecache : xitoa(uid);
}

static char *getgrname(gid_t gid)
{
 static uint_t gidcache = 
# 1099 "project/nnn/src/nnn.c" 3 4
                         (0x7fffffff * 2U + 1U)
# 1099 "project/nnn/src/nnn.c"
                                 ;
 static char *grpcache;

 if (gidcache != gid) {
  struct group *gr = getgrgid(gid);

  gidcache = gid;
  grpcache = gr ? gr->gr_name : 
# 1106 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 1106 "project/nnn/src/nnn.c"
                                   ;
 }

 return grpcache ? grpcache : xitoa(gid);
}


static inline 
# 1113 "project/nnn/src/nnn.c" 3 4
             _Bool 
# 1113 "project/nnn/src/nnn.c"
                  getutil(char *util)
{
 return spawn("which", util, 
# 1115 "project/nnn/src/nnn.c" 3 4
                            ((void *)0)
# 1115 "project/nnn/src/nnn.c"
                                , 
# 1115 "project/nnn/src/nnn.c" 3 4
                                  ((void *)0)
# 1115 "project/nnn/src/nnn.c"
                                      , 0x08 | 0x04) == 0;
}







static size_t mkpath(const char *dir, const char *name, char *out)
{
 size_t len = 0;

 if (name[0] != '/') {

  if (((dir)[1] == '\0' && (dir)[0] == '/'))
   len = 1;
  else
   len = xstrsncpy(out, dir, 
# 1133 "project/nnn/src/nnn.c" 3 4
                            1024
# 1133 "project/nnn/src/nnn.c"
                                    );

  out[len - 1] = '/';
 }
 return (xstrsncpy(out + len, name, 
# 1137 "project/nnn/src/nnn.c" 3 4
                                   1024 
# 1137 "project/nnn/src/nnn.c"
                                            - len) + len);
}


static char *common_prefix(const char *path, char *prefix)
{
 const char *x = path, *y = prefix;
 char *sep;

 if (!path || !*path || !prefix)
  return 
# 1147 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 1147 "project/nnn/src/nnn.c"
            ;

 if (!*prefix) {
  xstrsncpy(prefix, path, 
# 1150 "project/nnn/src/nnn.c" 3 4
                         1024
# 1150 "project/nnn/src/nnn.c"
                                 );
  return prefix;
 }

 while (*x && *y && (*x == *y))
  ++x, ++y;


 if (!*x && !*y)
  return prefix;


 if (!*x && *y == '/') {
  xstrsncpy(prefix, path, y - path);
  return prefix;
 }


 if (!*y && *x == '/')
  return prefix;


 prefix[y - prefix] = '\0';

 sep = xmemrchr((uchar_t *)prefix, '/', y - prefix);
 if (sep != prefix)
  *sep = '\0';
 else
  prefix[1] = '\0';

 return prefix;
}






static char *abspath(const char *path, const char *cwd, char *buf)
{
 if (!path)
  return 
# 1191 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 1191 "project/nnn/src/nnn.c"
            ;

 if (path[0] == '~')
  cwd = home;
 else if ((path[0] != '/') && !cwd)
  cwd = getcwd(
# 1196 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 1196 "project/nnn/src/nnn.c"
                  , 0);

 size_t dst_size = 0, src_size = xstrlen(path), cwd_size = cwd ? xstrlen(cwd) : 0;
 size_t len = src_size;
 const char *src;
 char *dst;





 char *resolved_path = buf ? buf : malloc(src_size + cwd_size + 2);

 if (!resolved_path)
  return 
# 1210 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 1210 "project/nnn/src/nnn.c"
            ;


 if (path[0] != '/') {
  if (!cwd) {
   if (!buf)
    free(resolved_path);
   return 
# 1217 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 1217 "project/nnn/src/nnn.c"
             ;
  }
  dst_size = xstrsncpy(resolved_path, cwd, cwd_size + 1) - 1;
 } else
  resolved_path[0] = '\0';

 src = path;
 dst = resolved_path + dst_size;
 for (const char *next = 
# 1225 "project/nnn/src/nnn.c" 3 4
                        ((void *)0)
# 1225 "project/nnn/src/nnn.c"
                            ; next != path + src_size;) {
  next = memchr(src, '/', len);
  if (!next)
   next = path + src_size;

  if (next - src == 2 && src[0] == '.' && src[1] == '.') {
   if (dst - resolved_path) {
    dst = xmemrchr((uchar_t *)resolved_path, '/', dst - resolved_path);
    *dst = '\0';
   }
  } else if (next - src == 1 && src[0] == '.') {

  } else if (next - src) {
   *(dst++) = '/';
   xstrsncpy(dst, src, next - src + 1);
   dst += next - src;
  }

  src = next + 1;
  len = src_size - (src - path);
 }

 if (*resolved_path == '\0') {
  resolved_path[0] = '/';
  resolved_path[1] = '\0';
 }

 return resolved_path;
}

static 
# 1255 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 1255 "project/nnn/src/nnn.c"
           set_tilde_in_path(char *path)
{
 if (is_prefix(path, home, homelen)) {
  home[homelen] = path[homelen - 1];
  path[homelen - 1] = '~';
  return 
# 1260 "project/nnn/src/nnn.c" 3 4
        1
# 1260 "project/nnn/src/nnn.c"
            ;
 }

 return 
# 1263 "project/nnn/src/nnn.c" 3 4
       0
# 1263 "project/nnn/src/nnn.c"
            ;
}

static void reset_tilde_in_path(char *path)
{
 path[homelen - 1] = home[homelen];
 home[homelen] = '\0';
}


static void xterm_cfg(char *path)
{
 if (cfg.x11 && !g_state.picker) {

  printf("\033]7;file://%s%s\033\\", hostname, path);


  
# 1280 "project/nnn/src/nnn.c" 3 4
 _Bool 
# 1280 "project/nnn/src/nnn.c"
      r = set_tilde_in_path(path);

  printf("\033]2;%s\007", r ? &path[homelen - 1] : path);
  fflush(
# 1283 "project/nnn/src/nnn.c" 3 4
        __stdoutp
# 1283 "project/nnn/src/nnn.c"
              );

  if (r)
   reset_tilde_in_path(path);
 }
}


static void convert_tilde(const char *path, char *buf)
{
 if (path[0] == '~') {
  ssize_t len = xstrlen(home);
  ssize_t loclen = xstrlen(path);

  xstrsncpy(buf, home, len + 1);
  xstrsncpy(buf + len, path + 1, loclen);
 }
}

static int create_tmp_file(void)
{
 xstrsncpy(g_tmpfpath + tmpfplen - 1, messages[2], 64 - tmpfplen);

 int fd = mkstemp(g_tmpfpath);

 if (fd == -1) {
  ;
 }

 return fd;
}

static void msg(const char *message)
{
 dprintf(
# 1317 "project/nnn/src/nnn.c" 3 4
        2
# 1317 "project/nnn/src/nnn.c"
                     , "%s\n", message);
}


static void handle_key_resize()
{
 endwin();
 
# 1324 "project/nnn/src/nnn.c" 3 4
wrefresh(stdscr)
# 1324 "project/nnn/src/nnn.c"
         ;
}


static void clearoldprompt(void)
{

 
# 1331 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 1331 "project/nnn/src/nnn.c"
xlines - 2
# 1331 "project/nnn/src/nnn.c" 3 4
,
# 1331 "project/nnn/src/nnn.c"
0
# 1331 "project/nnn/src/nnn.c" 3 4
)
# 1331 "project/nnn/src/nnn.c"
                   ;
 
# 1332 "project/nnn/src/nnn.c" 3 4
wclrtoeol(stdscr)
# 1332 "project/nnn/src/nnn.c"
          ;

 
# 1334 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 1334 "project/nnn/src/nnn.c"
xlines - 1
# 1334 "project/nnn/src/nnn.c" 3 4
,
# 1334 "project/nnn/src/nnn.c"
0
# 1334 "project/nnn/src/nnn.c" 3 4
)
# 1334 "project/nnn/src/nnn.c"
          ;
 
# 1335 "project/nnn/src/nnn.c" 3 4
wclrtoeol(stdscr)
# 1335 "project/nnn/src/nnn.c"
          ;
 handle_key_resize();
}



static inline void printmsg_nc(const char *msg)
{
 
# 1343 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 1343 "project/nnn/src/nnn.c"
xlines - 1
# 1343 "project/nnn/src/nnn.c" 3 4
,
# 1343 "project/nnn/src/nnn.c"
0
# 1343 "project/nnn/src/nnn.c" 3 4
)
# 1343 "project/nnn/src/nnn.c"
          ;
 
# 1344 "project/nnn/src/nnn.c" 3 4
waddnstr(stdscr,
# 1344 "project/nnn/src/nnn.c"
msg
# 1344 "project/nnn/src/nnn.c" 3 4
,-1)
# 1344 "project/nnn/src/nnn.c"
           ;
 
# 1345 "project/nnn/src/nnn.c" 3 4
wclrtoeol(stdscr)
# 1345 "project/nnn/src/nnn.c"
          ;
}

static void printmsg(const char *msg)
{
 
# 1350 "project/nnn/src/nnn.c" 3 4
wattr_on(stdscr, (attr_t)(((
# 1350 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 1350 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 1350 "project/nnn/src/nnn.c"
                                  ;
 printmsg_nc(msg);
 
# 1352 "project/nnn/src/nnn.c" 3 4
wattr_off(stdscr, (attr_t)(((
# 1352 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 1352 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 1352 "project/nnn/src/nnn.c"
                                   ;
}

static void printwait(const char *msg, int *presel)
{
 printmsg(msg);
 if (presel) {
  *presel = '$';
  if (ndents)
   xstrsncpy(g_ctx[cfg.curctx].c_name, pdents[cur].name, 
# 1361 "project/nnn/src/nnn.c" 3 4
                                                        255 
# 1361 "project/nnn/src/nnn.c"
                                                                 + 1);
 }
}


static void printerr(int linenum)
{
 endwin();
 perror(xitoa(linenum));
 if (!g_state.picker && selpath)
  unlink(selpath);
 free(pselbuf);
 exit(1);
}

static inline 
# 1376 "project/nnn/src/nnn.c" 3 4
             _Bool 
# 1376 "project/nnn/src/nnn.c"
                  xconfirm(int c)
{
 return (c == 'y' || c == 'Y');
}

static int get_input(const char *prompt)
{
 if (prompt)
  printmsg(prompt);
 
# 1385 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 1385 "project/nnn/src/nnn.c"
-1
# 1385 "project/nnn/src/nnn.c" 3 4
)
# 1385 "project/nnn/src/nnn.c"
              ;

 int r = 
# 1387 "project/nnn/src/nnn.c" 3 4
        wgetch(stdscr)
# 1387 "project/nnn/src/nnn.c"
               ;


 while (r == 
# 1390 "project/nnn/src/nnn.c" 3 4
            0632
# 1390 "project/nnn/src/nnn.c"
                      ) {
  if (prompt) {
   clearoldprompt();
   xlines = LINES;
   printmsg(prompt);
  }

  r = 
# 1397 "project/nnn/src/nnn.c" 3 4
     wgetch(stdscr)
# 1397 "project/nnn/src/nnn.c"
            ;
 }

 
# 1400 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 1400 "project/nnn/src/nnn.c"
1000
# 1400 "project/nnn/src/nnn.c" 3 4
)
# 1400 "project/nnn/src/nnn.c"
            ;
 return r;
}

static 
# 1404 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 1404 "project/nnn/src/nnn.c"
           isselfileempty(void)
{
 struct stat sb;

 return (stat(selpath, &sb) == -1) || (!sb.st_size);
}

static int get_cur_or_sel(void)
{
 
# 1413 "project/nnn/src/nnn.c" 3 4
_Bool 
# 1413 "project/nnn/src/nnn.c"
     sel = (selbufpos || !isselfileempty());


 if (sel && ndents) {



  if (cfg.prefersel && selbufpos)
   return 's';

  int choice = get_input(messages[8]);

  return ((choice == 'c' || choice == 's') ? choice : 0);
 }

 if (sel)
  return 's';

 if (ndents)
  return 'c';

 return 0;
}

static void xdelay(useconds_t delay)
{
 
# 1439 "project/nnn/src/nnn.c" 3 4
wrefresh(stdscr)
# 1439 "project/nnn/src/nnn.c"
         ;
 usleep(delay);
}

static char confirm_force(
# 1443 "project/nnn/src/nnn.c" 3 4
                         _Bool 
# 1443 "project/nnn/src/nnn.c"
                              selection)
{
 char str[64];

 
# 1447 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 1447 "project/nnn/src/nnn.c"
str
# 1447 "project/nnn/src/nnn.c" 3 4
, 
# 1447 "project/nnn/src/nnn.c"
64
# 1447 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 1447 "project/nnn/src/nnn.c"
str
# 1447 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 1447 "project/nnn/src/nnn.c"
messages[9], g_state.trash ? utils[19] + 4 : utils[20], (selection ? "selection" : "hovered")
# 1447 "project/nnn/src/nnn.c" 3 4
)

                                         
# 1449 "project/nnn/src/nnn.c"
                                        ;

 int r = get_input(str);

 if (r == (27))
  return '\0';
 if (r == 'y' || r == 'Y')
  return 'f';
 return (g_state.trash ? '\0' : 'i');
}


static void writesel(const char *buf, const size_t buflen)
{
 if (!selpath)
  return;

 int fd = open(selpath, 
# 1466 "project/nnn/src/nnn.c" 3 4
                       0x00000200 
# 1466 "project/nnn/src/nnn.c"
                               | 
# 1466 "project/nnn/src/nnn.c" 3 4
                                 0x0001 
# 1466 "project/nnn/src/nnn.c"
                                          | 
# 1466 "project/nnn/src/nnn.c" 3 4
                                            0x00000400
# 1466 "project/nnn/src/nnn.c"
                                                   , 0666);

 if (fd != -1) {
  if (write(fd, buf, buflen) != (ssize_t)buflen)
   printwait(strerror(
# 1470 "project/nnn/src/nnn.c" 3 4
  (*__error())
# 1470 "project/nnn/src/nnn.c"
  ), 
# 1470 "project/nnn/src/nnn.c" 3 4
  ((void *)0)
# 1470 "project/nnn/src/nnn.c"
  );
  close(fd);
 } else
  printwait(strerror(
# 1473 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1473 "project/nnn/src/nnn.c"
 ), 
# 1473 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1473 "project/nnn/src/nnn.c"
 );
}

static void appendfpath(const char *path, const size_t len)
{
 if ((selbufpos >= selbuflen) || ((len + 3) > (selbuflen - selbufpos))) {
  selbuflen += 
# 1479 "project/nnn/src/nnn.c" 3 4
              1024
# 1479 "project/nnn/src/nnn.c"
                      ;
  pselbuf = xrealloc(pselbuf, selbuflen);
  if (!pselbuf)
   printerr(1482);
 }

 selbufpos += xstrsncpy(pselbuf + selbufpos, path, len);
}

static void selbufrealloc(const size_t alloclen)
{
 if ((selbufpos + alloclen) > selbuflen) {
  selbuflen = ((((selbufpos + alloclen) + (
# 1491 "project/nnn/src/nnn.c" 3 4
             1024
# 1491 "project/nnn/src/nnn.c"
             ) - 1) / (
# 1491 "project/nnn/src/nnn.c" 3 4
             1024
# 1491 "project/nnn/src/nnn.c"
             )) * (
# 1491 "project/nnn/src/nnn.c" 3 4
             1024
# 1491 "project/nnn/src/nnn.c"
             ));
  pselbuf = xrealloc(pselbuf, selbuflen);
  if (!pselbuf)
   printerr(1494);
 }
}


static size_t seltofile(int fd, uint_t *pcount)
{
 uint_t lastpos, count = 0;
 char *pbuf = pselbuf;
 size_t pos = 0;
 ssize_t len, prefixlen = 0, initlen = 0;

 if (pcount)
  *pcount = 0;

 if (!selbufpos)
  return 0;

 lastpos = selbufpos - 1;

 if (listpath) {
  prefixlen = (ssize_t)xstrlen(listroot);
  initlen = (ssize_t)xstrlen(listpath);
 }

 while (pos <= lastpos) {
  ;
  len = (ssize_t)xstrlen(pbuf);

  if (!listpath || !is_prefix(pbuf, listpath, initlen)) {
   if (write(fd, pbuf, len) != len)
    return pos;
  } else {
   if (write(fd, listroot, prefixlen) != prefixlen)
    return pos;
   if (write(fd, pbuf + initlen, len - initlen) != (len - initlen))
    return pos;
  }

  pos += len;
  if (pos <= lastpos) {
   if (write(fd, "\n", 1) != 1)
    return pos;
   pbuf += len + 1;
  }
  ++pos;
  ++count;
 }

 if (pcount)
  *pcount = count;

 return pos;
}


static 
# 1550 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 1550 "project/nnn/src/nnn.c"
           listselfile(void)
{
 if (isselfileempty())
  return 
# 1553 "project/nnn/src/nnn.c" 3 4
        0
# 1553 "project/nnn/src/nnn.c"
             ;

 
# 1555 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 1555 "project/nnn/src/nnn.c"
g_buf
# 1555 "project/nnn/src/nnn.c" 3 4
, 
# 1555 "project/nnn/src/nnn.c"
(
# 1555 "project/nnn/src/nnn.c" 3 4
1024 
# 1555 "project/nnn/src/nnn.c"
+ ((
# 1555 "project/nnn/src/nnn.c" 3 4
255 
# 1555 "project/nnn/src/nnn.c"
+ 1) << 1))
# 1555 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 1555 "project/nnn/src/nnn.c"
g_buf
# 1555 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 1555 "project/nnn/src/nnn.c"
"tr \'\\0\' \'\\n\' < %s", selpath
# 1555 "project/nnn/src/nnn.c" 3 4
)
# 1555 "project/nnn/src/nnn.c"
                                                                ;
 spawn(utils[7], g_buf, 
# 1556 "project/nnn/src/nnn.c" 3 4
                                  ((void *)0)
# 1556 "project/nnn/src/nnn.c"
                                      , 
# 1556 "project/nnn/src/nnn.c" 3 4
                                        ((void *)0)
# 1556 "project/nnn/src/nnn.c"
                                            , (0x08 | 0x01) | 0x10);

 return 
# 1558 "project/nnn/src/nnn.c" 3 4
       1
# 1558 "project/nnn/src/nnn.c"
           ;
}


static void resetselind(void)
{
 for (int r = 0; r < ndents; ++r)
  if (pdents[r].flags & 0x10)
   pdents[r].flags &= ~0x10;
}

static void startselection(void)
{
 if (!g_state.selmode) {
  g_state.selmode = 1;
  nselected = 0;

  if (selbufpos) {
   resetselind();
   writesel(
# 1577 "project/nnn/src/nnn.c" 3 4
           ((void *)0)
# 1577 "project/nnn/src/nnn.c"
               , 0);
   selbufpos = 0;
  }
 }
}

static void clearselection(void)
{
 nselected = 0;
 selbufpos = 0;
 g_state.selmode = 0;
 writesel(
# 1588 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 1588 "project/nnn/src/nnn.c"
             , 0);
}

static char *findinsel(char *startpos, int len)
{
 if (!selbufpos)
  return 
# 1594 "project/nnn/src/nnn.c" 3 4
        0
# 1594 "project/nnn/src/nnn.c"
             ;

 if (!startpos)
  startpos = pselbuf;

 char *found = startpos;
 size_t buflen = selbufpos - (startpos - pselbuf);

 while (1) {

  found = memmem(found, buflen - (found - startpos), g_sel, len);
  if (!found)
   return 
# 1606 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 1606 "project/nnn/src/nnn.c"
             ;
  if (found == startpos || *(found - 1) == '\0')
   return found;
  found += len;
  if (found >= startpos + buflen)
   return 
# 1611 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 1611 "project/nnn/src/nnn.c"
             ;
 }
}

static int markcmp(const void *va, const void *vb)
{
 const selmark *ma = (selmark*)va;
 const selmark *mb = (selmark*)vb;

 return ma->startpos - mb->startpos;
}


static inline void findmarkentry(size_t len, struct entry *dentp)
{
 if (!(dentp->flags & 0x20)) {
  if (findinsel(findselpos, len + xstrsncpy(g_sel + len, dentp->name, dentp->nlen)))
   dentp->flags |= 0x10;
  dentp->flags |= 0x20;
 }
}





static void invertselbuf(const int pathlen)
{
 size_t len, endpos, shrinklen = 0, alloclen = 0;
 char * const pbuf = g_sel + pathlen;
 char *found;
 int i, nmarked = 0, prev = 0;
 struct entry *dentp;
 selmark *marked = malloc(nselected * sizeof(selmark));
 
# 1645 "project/nnn/src/nnn.c" 3 4
_Bool 
# 1645 "project/nnn/src/nnn.c"
     scan = 
# 1645 "project/nnn/src/nnn.c" 3 4
            0
# 1645 "project/nnn/src/nnn.c"
                 ;


 for (i = 0; i < ndents; ++i) {
  dentp = &pdents[i];

  if (dentp->flags & 0x20) {
   if (dentp->flags & 0x10) {
    dentp->flags ^= 0x10;
    scan = 
# 1654 "project/nnn/src/nnn.c" 3 4
          1
# 1654 "project/nnn/src/nnn.c"
              ;
   } else {
    dentp->flags |= 0x10;
    alloclen += pathlen + dentp->nlen;
   }
  } else {
   dentp->flags |= 0x20;
   scan = 
# 1661 "project/nnn/src/nnn.c" 3 4
         1
# 1661 "project/nnn/src/nnn.c"
             ;
  }

  if (scan) {
   len = pathlen + xstrsncpy(pbuf, dentp->name, 
# 1665 "project/nnn/src/nnn.c" 3 4
                                               255
# 1665 "project/nnn/src/nnn.c"
                                                       );
   found = findinsel(findselpos, len);
   if (found) {
    if (findselpos == found)
     findselpos += len;

    if (nmarked && (found
        == (marked[nmarked - 1].startpos + marked[nmarked - 1].len)))
     marked[nmarked - 1].len += len;
    else {
     marked[nmarked].startpos = found;
     marked[nmarked].len = len;
     ++nmarked;
    }

    --nselected;
    shrinklen += len;
   } else {
    dentp->flags |= 0x10;
    alloclen += pathlen + dentp->nlen;
   }
   scan = 
# 1686 "project/nnn/src/nnn.c" 3 4
         0
# 1686 "project/nnn/src/nnn.c"
              ;
  }
 }







 qsort(marked, nmarked, sizeof(selmark), &markcmp);


 for (i = 1; i < nmarked; ++i) {
  if (marked[i].startpos == marked[prev].startpos + marked[prev].len)
   marked[prev].len += marked[i].len;
  else {
   ++prev;
   marked[prev].startpos = marked[i].startpos;
   marked[prev].len = marked[i].len;
  }
 }






 if (nmarked)
  nmarked = prev + 1;


 for (i = 0; i < nmarked; ++i) {
# 1727 "project/nnn/src/nnn.c"
  found = marked[i].startpos;
  endpos = (i + 1 == nmarked ? selbufpos : marked[i + 1].startpos - pselbuf);
  len = marked[i].len;


  
# 1732 "project/nnn/src/nnn.c" 3 4
 __builtin___memmove_chk (
# 1732 "project/nnn/src/nnn.c"
 found
# 1732 "project/nnn/src/nnn.c" 3 4
 , 
# 1732 "project/nnn/src/nnn.c"
 found + len, endpos - (found + len - pselbuf)
# 1732 "project/nnn/src/nnn.c" 3 4
 , __builtin_object_size (
# 1732 "project/nnn/src/nnn.c"
 found
# 1732 "project/nnn/src/nnn.c" 3 4
 , 0))
# 1732 "project/nnn/src/nnn.c"
                                                              ;
 }

 free(marked);


 selbufpos -= shrinklen;

 selbufrealloc(alloclen);


 for (i = 0; i < ndents; ++i) {
  if (pdents[i].flags & 0x10) {
   len = pathlen + xstrsncpy(pbuf, pdents[i].name, 
# 1745 "project/nnn/src/nnn.c" 3 4
                                                  255
# 1745 "project/nnn/src/nnn.c"
                                                          );
   appendfpath(g_sel, len);
   ++nselected;
  }
 }

 nselected ? writesel(pselbuf, selbufpos - 1) : clearselection();
}





static void addtoselbuf(const int pathlen, int startid, int endid)
{
 int i;
 size_t len, alloclen = 0;
 struct entry *dentp;
 char *found;
 char * const pbuf = g_sel + pathlen;


 for (i = startid; i <= endid; ++i) {
  dentp = &pdents[i];

  if (findselpos) {
   len = pathlen + xstrsncpy(pbuf, dentp->name, 
# 1771 "project/nnn/src/nnn.c" 3 4
                                               255
# 1771 "project/nnn/src/nnn.c"
                                                       );
   found = findinsel(findselpos, len);
   if (found) {
    dentp->flags |= (0x20 | 0x10);
    if (found == findselpos) {
     findselpos += len;
     if (findselpos == (pselbuf + selbufpos))
      findselpos = 
# 1778 "project/nnn/src/nnn.c" 3 4
                  ((void *)0)
# 1778 "project/nnn/src/nnn.c"
                      ;
    }
   } else
    alloclen += pathlen + dentp->nlen;
  } else
   alloclen += pathlen + dentp->nlen;
 }

 selbufrealloc(alloclen);

 for (i = startid; i <= endid; ++i) {
  if (!(pdents[i].flags & 0x10)) {
   len = pathlen + xstrsncpy(pbuf, pdents[i].name, 
# 1790 "project/nnn/src/nnn.c" 3 4
                                                  255
# 1790 "project/nnn/src/nnn.c"
                                                          );
   appendfpath(g_sel, len);
   ++nselected;
   pdents[i].flags |= (0x20 | 0x10);
  }
 }

 writesel(pselbuf, selbufpos - 1);
}


static void rmfromselbuf(size_t len)
{
 char *found = findinsel(findselpos, len);
 if (!found)
  return;

 
# 1807 "project/nnn/src/nnn.c" 3 4
__builtin___memmove_chk (
# 1807 "project/nnn/src/nnn.c"
found
# 1807 "project/nnn/src/nnn.c" 3 4
, 
# 1807 "project/nnn/src/nnn.c"
found + len, selbufpos - (found + len - pselbuf)
# 1807 "project/nnn/src/nnn.c" 3 4
, __builtin_object_size (
# 1807 "project/nnn/src/nnn.c"
found
# 1807 "project/nnn/src/nnn.c" 3 4
, 0))
# 1807 "project/nnn/src/nnn.c"
                                                                ;
 selbufpos -= len;

 nselected ? writesel(pselbuf, selbufpos - 1) : clearselection();
}

static int scanselforpath(const char *path, 
# 1813 "project/nnn/src/nnn.c" 3 4
                                           _Bool 
# 1813 "project/nnn/src/nnn.c"
                                                getsize)
{
 if (!path[1]) {
  g_sel[0] = '/';
  findselpos = pselbuf;
  return 1;
 }

 size_t off = xstrsncpy(g_sel, path, 
# 1821 "project/nnn/src/nnn.c" 3 4
                                    1024
# 1821 "project/nnn/src/nnn.c"
                                            );

 g_sel[off - 1] = '/';




 findselpos = findinsel(
# 1828 "project/nnn/src/nnn.c" 3 4
                       ((void *)0)
# 1828 "project/nnn/src/nnn.c"
                           , off);

 if (getsize)
  return off;
 return (findselpos ? off : 0);
}


static void endselection(
# 1836 "project/nnn/src/nnn.c" 3 4
                        _Bool 
# 1836 "project/nnn/src/nnn.c"
                             endselmode)
{
 int fd;
 ssize_t count;
 char buf[sizeof(patterns[3]) + 
# 1840 "project/nnn/src/nnn.c" 3 4
                                       1024 
# 1840 "project/nnn/src/nnn.c"
                                                + (64 << 1)];

 if (endselmode && g_state.selmode)
  g_state.selmode = 0;


 if (!listpath || !selbufpos)
  return;

 fd = create_tmp_file();
 if (fd == -1) {
  ;
  return;
 }

 seltofile(fd, 
# 1855 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 1855 "project/nnn/src/nnn.c"
                  );
 if (close(fd)) {
  ;
  printwait(strerror(
# 1858 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1858 "project/nnn/src/nnn.c"
 ), 
# 1858 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1858 "project/nnn/src/nnn.c"
 );
  return;
 }

 
# 1862 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 1862 "project/nnn/src/nnn.c"
buf
# 1862 "project/nnn/src/nnn.c" 3 4
, 
# 1862 "project/nnn/src/nnn.c"
sizeof(buf)
# 1862 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 1862 "project/nnn/src/nnn.c"
buf
# 1862 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 1862 "project/nnn/src/nnn.c"
patterns[3], listpath, listroot, g_tmpfpath
# 1862 "project/nnn/src/nnn.c" 3 4
)
# 1862 "project/nnn/src/nnn.c"
                                                                               ;
 spawn(utils[7], buf, 
# 1863 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 1863 "project/nnn/src/nnn.c"
                                    , 
# 1863 "project/nnn/src/nnn.c" 3 4
                                      ((void *)0)
# 1863 "project/nnn/src/nnn.c"
                                          , (0x08 | 0x01));

 fd = open(g_tmpfpath, 
# 1865 "project/nnn/src/nnn.c" 3 4
                      0x0000
# 1865 "project/nnn/src/nnn.c"
                              );
 if (fd == -1) {
  ;
  printwait(strerror(
# 1868 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1868 "project/nnn/src/nnn.c"
 ), 
# 1868 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1868 "project/nnn/src/nnn.c"
 );
  if (unlink(g_tmpfpath)) {
   ;
   printwait(strerror(
# 1871 "project/nnn/src/nnn.c" 3 4
  (*__error())
# 1871 "project/nnn/src/nnn.c"
  ), 
# 1871 "project/nnn/src/nnn.c" 3 4
  ((void *)0)
# 1871 "project/nnn/src/nnn.c"
  );
  }
  return;
 }

 count = read(fd, pselbuf, selbuflen);
 if (count < 0) {
  ;
  printwait(strerror(
# 1879 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1879 "project/nnn/src/nnn.c"
 ), 
# 1879 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1879 "project/nnn/src/nnn.c"
 );
  if (close(fd) || unlink(g_tmpfpath)) {
   ;
  }
  return;
 }

 if (close(fd) || unlink(g_tmpfpath)) {
  ;
  printwait(strerror(
# 1888 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1888 "project/nnn/src/nnn.c"
 ), 
# 1888 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1888 "project/nnn/src/nnn.c"
 );
  return;
 }

 selbufpos = count;
 pselbuf[--count] = '\0';
 for (--count; count > 0; --count)
  if (pselbuf[count] == '\n' && pselbuf[count+1] == '/')
   pselbuf[count] = '\0';

 writesel(pselbuf, selbufpos - 1);
}


static int editselection(void)
{
 int ret = -1;
 int fd, lines = 0;
 ssize_t count;
 struct stat sb;
 time_t mtime;

 if (!selbufpos)
  return listselfile();

 fd = create_tmp_file();
 if (fd == -1) {
  ;
  return -1;
 }

 seltofile(fd, 
# 1919 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 1919 "project/nnn/src/nnn.c"
                  );
 if (close(fd)) {
  ;
  return -1;
 }


 if (stat(g_tmpfpath, &sb)) {
  ;
  unlink(g_tmpfpath);
  return -1;
 }
 mtime = sb.
# 1931 "project/nnn/src/nnn.c" 3 4
           st_mtimespec.tv_sec
# 1931 "project/nnn/src/nnn.c"
                   ;

 spawn((cfg.waitedit ? enveditor : editor), g_tmpfpath, 
# 1933 "project/nnn/src/nnn.c" 3 4
                                                       ((void *)0)
# 1933 "project/nnn/src/nnn.c"
                                                           , 
# 1933 "project/nnn/src/nnn.c" 3 4
                                                             ((void *)0)
# 1933 "project/nnn/src/nnn.c"
                                                                 , (0x08 | 0x01));

 fd = open(g_tmpfpath, 
# 1935 "project/nnn/src/nnn.c" 3 4
                      0x0000
# 1935 "project/nnn/src/nnn.c"
                              );
 if (fd == -1) {
  ;
  unlink(g_tmpfpath);
  return -1;
 }

 fstat(fd, &sb);

 if (mtime == sb.
# 1944 "project/nnn/src/nnn.c" 3 4
                st_mtimespec.tv_sec
# 1944 "project/nnn/src/nnn.c"
                        ) {
  ;
  unlink(g_tmpfpath);
  return 1;
 }

 if (sb.st_size > selbufpos) {
  ;
  unlink(g_tmpfpath);
  goto emptyedit;
 }

 count = read(fd, pselbuf, selbuflen);
 if (count < 0) {
  ;
  printwait(strerror(
# 1959 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1959 "project/nnn/src/nnn.c"
 ), 
# 1959 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1959 "project/nnn/src/nnn.c"
 );
  if (close(fd) || unlink(g_tmpfpath)) {
   ;
   printwait(strerror(
# 1962 "project/nnn/src/nnn.c" 3 4
  (*__error())
# 1962 "project/nnn/src/nnn.c"
  ), 
# 1962 "project/nnn/src/nnn.c" 3 4
  ((void *)0)
# 1962 "project/nnn/src/nnn.c"
  );
  }
  goto emptyedit;
 }

 if (close(fd) || unlink(g_tmpfpath)) {
  ;
  printwait(strerror(
# 1969 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 1969 "project/nnn/src/nnn.c"
 ), 
# 1969 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 1969 "project/nnn/src/nnn.c"
 );
  goto emptyedit;
 }

 if (!count) {
  ret = 1;
  goto emptyedit;
 }

 resetselind();
 selbufpos = count;

 pselbuf[--count] = '\0';
 for (--count; count > 0; --count) {

  if (pselbuf[count] == '\n' && pselbuf[count + 1] == '/') {
   ++lines;
   pselbuf[count] = '\0';
  }
 }


 ++lines;

 if (lines > nselected) {
  ;
  goto emptyedit;
 }

 nselected = lines;
 writesel(pselbuf, selbufpos - 1);

 return 1;

emptyedit:
 resetselind();
 clearselection();
 return ret;
}

static 
# 2009 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2009 "project/nnn/src/nnn.c"
           selsafe(void)
{

 if (!selpath) {
  printmsg(messages[23]);
  return 
# 2014 "project/nnn/src/nnn.c" 3 4
        0
# 2014 "project/nnn/src/nnn.c"
             ;
 }


 if (access(selpath, 
# 2018 "project/nnn/src/nnn.c" 3 4
                    (1<<2) 
# 2018 "project/nnn/src/nnn.c"
                         | 
# 2018 "project/nnn/src/nnn.c" 3 4
                           (1<<1)
# 2018 "project/nnn/src/nnn.c"
                               ) == -1) {
  
# 2019 "project/nnn/src/nnn.c" 3 4
 (*__error()) 
# 2019 "project/nnn/src/nnn.c"
       == 
# 2019 "project/nnn/src/nnn.c" 3 4
          2 
# 2019 "project/nnn/src/nnn.c"
                 ? printmsg(messages[3]) : printwait(strerror(
# 2019 "project/nnn/src/nnn.c" 3 4
                                                        (*__error())
# 2019 "project/nnn/src/nnn.c"
                                                        ), 
# 2019 "project/nnn/src/nnn.c" 3 4
                                                        ((void *)0)
# 2019 "project/nnn/src/nnn.c"
                                                        );
  return 
# 2020 "project/nnn/src/nnn.c" 3 4
        0
# 2020 "project/nnn/src/nnn.c"
             ;
 }

 return 
# 2023 "project/nnn/src/nnn.c" 3 4
       1
# 2023 "project/nnn/src/nnn.c"
           ;
}

static void export_file_list(void)
{
 if (!ndents)
  return;

 struct entry *pdent = pdents;
 int fd = create_tmp_file();

 if (fd == -1) {
  ;
  return;
 }

 for (int r = 0; r < ndents; ++pdent, ++r) {
  if (write(fd, pdent->name, pdent->nlen - 1) != (pdent->nlen - 1))
   break;

  if ((r != ndents - 1) && (write(fd, "\n", 1) != 1))
   break;
 }

 if (close(fd)) {
  ;
 }

 spawn(editor, g_tmpfpath, 
# 2051 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 2051 "project/nnn/src/nnn.c"
                              , 
# 2051 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 2051 "project/nnn/src/nnn.c"
                                    , (0x08 | 0x01));

 if (xconfirm(get_input(messages[39])))
  unlink(g_tmpfpath);
}

static 
# 2057 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2057 "project/nnn/src/nnn.c"
           init_fcolors(void)
{
 char *f_colors = getenv(env_cfg[5]);

 if (!f_colors || !*f_colors)
  f_colors = gcolors;

 for (uchar_t id = (4 + 1); *f_colors && id <= ((((((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1); ++id) {
  fcolors[id] = xchartohex(*f_colors) << 4;
  if (*++f_colors) {
   fcolors[id] += xchartohex(*f_colors);
   if (fcolors[id])
    init_pair(id, fcolors[id], -1);
  } else
   return 
# 2071 "project/nnn/src/nnn.c" 3 4
         0
# 2071 "project/nnn/src/nnn.c"
              ;
  ++f_colors;
 }

 return 
# 2075 "project/nnn/src/nnn.c" 3 4
       1
# 2075 "project/nnn/src/nnn.c"
           ;
}


static 
# 2079 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2079 "project/nnn/src/nnn.c"
           initcurses(void *oldmask)
{




 if (g_state.picker) {
  if (!newterm(
# 2086 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 2086 "project/nnn/src/nnn.c"
                  , 
# 2086 "project/nnn/src/nnn.c" 3 4
                    __stderrp
# 2086 "project/nnn/src/nnn.c"
                          , 
# 2086 "project/nnn/src/nnn.c" 3 4
                            __stdinp
# 2086 "project/nnn/src/nnn.c"
                                 )) {
   msg("newterm!");
   return 
# 2088 "project/nnn/src/nnn.c" 3 4
         0
# 2088 "project/nnn/src/nnn.c"
              ;
  }
 } else if (!initscr()) {
  msg("initscr!");
  ;
  return 
# 2093 "project/nnn/src/nnn.c" 3 4
        0
# 2093 "project/nnn/src/nnn.c"
             ;
 }

 cbreak();
 noecho();
 nonl();

 keypad(stdscr, 
# 2100 "project/nnn/src/nnn.c" 3 4
               1
# 2100 "project/nnn/src/nnn.c"
                   );


 mousemask(
# 2103 "project/nnn/src/nnn.c" 3 4
          ((002L) << (((1) - 1) * 6)) 
# 2103 "project/nnn/src/nnn.c"
                          | 
# 2103 "project/nnn/src/nnn.c" 3 4
                            ((010L) << (((1) - 1) * 6)) 
# 2103 "project/nnn/src/nnn.c"
                                                   | 
# 2103 "project/nnn/src/nnn.c" 3 4
                                                     ((002L) << (((2) - 1) * 6)) 
# 2103 "project/nnn/src/nnn.c"
                                                                     | 
# 2103 "project/nnn/src/nnn.c" 3 4
                                                                       ((002L) << (((3) - 1) * 6))
# 2103 "project/nnn/src/nnn.c"
                                                                                      ,
    (mmask_t *)oldmask);




 mouseinterval(0);

 curs_set(
# 2111 "project/nnn/src/nnn.c" 3 4
         0
# 2111 "project/nnn/src/nnn.c"
              );

 char *colors = getenv(env_cfg[4]);

 if (colors || !getenv("NO_COLOR")) {
  uint_t *pcode;
  
# 2117 "project/nnn/src/nnn.c" 3 4
 _Bool 
# 2117 "project/nnn/src/nnn.c"
      ext = 
# 2117 "project/nnn/src/nnn.c" 3 4
            0
# 2117 "project/nnn/src/nnn.c"
                 ;

  start_color();
  use_default_colors();


  if (COLORS >= 256) {
   if (!(g_state.oldcolor || init_fcolors())) {
    endwin();
    msg(env_cfg[5]);
    return 
# 2127 "project/nnn/src/nnn.c" 3 4
          0
# 2127 "project/nnn/src/nnn.c"
               ;
   }
  } else
   g_state.oldcolor = 1;

  ;
  ;

  if (colors && *colors == '#') {
   char *sep = strchr(colors, ';');

   if (!g_state.oldcolor && COLORS >= 256) {
    ++colors;
    ext = 
# 2140 "project/nnn/src/nnn.c" 3 4
         1
# 2140 "project/nnn/src/nnn.c"
             ;






    if (sep)
     *sep = '\0';
   } else {
    colors = sep;
    if (colors)
     ++colors;
   }
  }


  for (uchar_t i = 0; i < 4; ++i) {
   pcode = &g_ctx[i].color;

   if (colors && *colors) {
    if (ext) {
     *pcode = xchartohex(*colors) << 4;
     if (*++colors)
      fcolors[i + 1] = *pcode += xchartohex(*colors);
     else {
      endwin();
      msg(env_cfg[4]);
      return 
# 2168 "project/nnn/src/nnn.c" 3 4
            0
# 2168 "project/nnn/src/nnn.c"
                 ;
     }
    } else
     *pcode = (*colors < '0' || *colors > '7') ? 4 : *colors - '0';
    ++colors;
   } else
    *pcode = 4;

   init_pair(i + 1, *pcode, -1);
  }
 }
# 2206 "project/nnn/src/nnn.c"
 
# 2206 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 2206 "project/nnn/src/nnn.c"
1000
# 2206 "project/nnn/src/nnn.c" 3 4
)
# 2206 "project/nnn/src/nnn.c"
            ;
 set_escdelay(25);
 return 
# 2208 "project/nnn/src/nnn.c" 3 4
       1
# 2208 "project/nnn/src/nnn.c"
           ;
}


static char *parseargs(char *cmd, char **argv, int *pindex)
{
 int count = 0;
 size_t len = xstrlen(cmd) + 1;
 char *line = (char *)malloc(len);

 if (!line) {
  ;
  return 
# 2220 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 2220 "project/nnn/src/nnn.c"
            ;
 }

 xstrsncpy(line, cmd, len);
 argv[count++] = line;
 cmd = line;

 while (*line) {
  if (((*line) == ' ' || (*line) == '\t')) {
   *line++ = '\0';

   if (!*line)
    break;

   argv[count++] = line;
   if (count == 10) {
    count = -1;
    break;
   }
  }

  ++line;
 }

 if (count == -1 || count > (10 - 4)) {
  free(cmd);
  cmd = 
# 2246 "project/nnn/src/nnn.c" 3 4
       ((void *)0)
# 2246 "project/nnn/src/nnn.c"
           ;
  ;
 }

 *pindex = count;
 return cmd;
}

static void enable_signals(void)
{
 struct sigaction dfl_act = {.
# 2256 "project/nnn/src/nnn.c" 3 4
                             __sigaction_u.__sa_handler 
# 2256 "project/nnn/src/nnn.c"
                                        = 
# 2256 "project/nnn/src/nnn.c" 3 4
                                          (void (*)(int))0
# 2256 "project/nnn/src/nnn.c"
                                                 };

 sigaction(
# 2258 "project/nnn/src/nnn.c" 3 4
          1
# 2258 "project/nnn/src/nnn.c"
                , &dfl_act, 
# 2258 "project/nnn/src/nnn.c" 3 4
                            ((void *)0)
# 2258 "project/nnn/src/nnn.c"
                                );
 sigaction(
# 2259 "project/nnn/src/nnn.c" 3 4
          2
# 2259 "project/nnn/src/nnn.c"
                , &dfl_act, 
# 2259 "project/nnn/src/nnn.c" 3 4
                            ((void *)0)
# 2259 "project/nnn/src/nnn.c"
                                );
 sigaction(
# 2260 "project/nnn/src/nnn.c" 3 4
          3
# 2260 "project/nnn/src/nnn.c"
                 , &dfl_act, 
# 2260 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 2260 "project/nnn/src/nnn.c"
                                 );
 sigaction(
# 2261 "project/nnn/src/nnn.c" 3 4
          18
# 2261 "project/nnn/src/nnn.c"
                 , &dfl_act, 
# 2261 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 2261 "project/nnn/src/nnn.c"
                                 );
 sigaction(
# 2262 "project/nnn/src/nnn.c" 3 4
          28
# 2262 "project/nnn/src/nnn.c"
                  , &dfl_act, 
# 2262 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 2262 "project/nnn/src/nnn.c"
                                  );
}

static pid_t xfork(uchar_t flag)
{
 pid_t p = fork();

 if (p > 0) {

  sigaction(
# 2271 "project/nnn/src/nnn.c" 3 4
           1
# 2271 "project/nnn/src/nnn.c"
                 , &(struct sigaction){.
# 2271 "project/nnn/src/nnn.c" 3 4
                                        __sigaction_u.__sa_handler 
# 2271 "project/nnn/src/nnn.c"
                                                   = 
# 2271 "project/nnn/src/nnn.c" 3 4
                                                     (void (*)(int))1
# 2271 "project/nnn/src/nnn.c"
                                                            }, &oldsighup);
  sigaction(
# 2272 "project/nnn/src/nnn.c" 3 4
           18
# 2272 "project/nnn/src/nnn.c"
                  , &(struct sigaction){.
# 2272 "project/nnn/src/nnn.c" 3 4
                                         __sigaction_u.__sa_handler 
# 2272 "project/nnn/src/nnn.c"
                                                    = 
# 2272 "project/nnn/src/nnn.c" 3 4
                                                      (void (*)(int))0
# 2272 "project/nnn/src/nnn.c"
                                                             }, &oldsigtstp);
  sigaction(
# 2273 "project/nnn/src/nnn.c" 3 4
           28
# 2273 "project/nnn/src/nnn.c"
                   , &(struct sigaction){.
# 2273 "project/nnn/src/nnn.c" 3 4
                                          __sigaction_u.__sa_handler 
# 2273 "project/nnn/src/nnn.c"
                                                     = 
# 2273 "project/nnn/src/nnn.c" 3 4
                                                       (void (*)(int))1
# 2273 "project/nnn/src/nnn.c"
                                                              }, &oldsigwinch);
 } else if (p == 0) {

  if (flag & 0x02) {
   p = fork();

   if (p > 0)
    _exit(
# 2280 "project/nnn/src/nnn.c" 3 4
         0
# 2280 "project/nnn/src/nnn.c"
                     );
   else if (p == 0) {
    enable_signals();
    setsid();
    return p;
   }

   perror("fork");
   _exit(
# 2288 "project/nnn/src/nnn.c" 3 4
        1
# 2288 "project/nnn/src/nnn.c"
                    );
  }


  enable_signals();
 }


 if (flag & 0x02)
  waitpid(p, 
# 2297 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 2297 "project/nnn/src/nnn.c"
                , 0);

 if (p == -1)
  perror("fork");
 return p;
}

static int join(pid_t p, uchar_t flag)
{
 int status = 0xFFFF;

 if (!(flag & 0x02)) {

  do {
  } while (waitpid(p, &status, 0) == -1);

  if (
# 2313 "project/nnn/src/nnn.c" 3 4
     (((*(int *)&(
# 2313 "project/nnn/src/nnn.c"
     status
# 2313 "project/nnn/src/nnn.c" 3 4
     )) & 0177) == 0)
# 2313 "project/nnn/src/nnn.c"
                      ) {
   status = 
# 2314 "project/nnn/src/nnn.c" 3 4
           (((*(int *)&(
# 2314 "project/nnn/src/nnn.c"
           status
# 2314 "project/nnn/src/nnn.c" 3 4
           )) >> 8) & 0x000000ff)
# 2314 "project/nnn/src/nnn.c"
                              ;
   ;
  }
 }


 sigaction(
# 2320 "project/nnn/src/nnn.c" 3 4
          1
# 2320 "project/nnn/src/nnn.c"
                , &oldsighup, 
# 2320 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 2320 "project/nnn/src/nnn.c"
                                  );
 sigaction(
# 2321 "project/nnn/src/nnn.c" 3 4
          18
# 2321 "project/nnn/src/nnn.c"
                 , &oldsigtstp, 
# 2321 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 2321 "project/nnn/src/nnn.c"
                                    );
 sigaction(
# 2322 "project/nnn/src/nnn.c" 3 4
          28
# 2322 "project/nnn/src/nnn.c"
                  , &oldsigwinch, 
# 2322 "project/nnn/src/nnn.c" 3 4
                                  ((void *)0)
# 2322 "project/nnn/src/nnn.c"
                                      );

 return status;
}





static int spawn(char *file, char *arg1, char *arg2, char *arg3, ushort_t flag)
{
 pid_t pid;
 int status = 0, retstatus = 0xFFFF;
 char *argv[10] = {0};
 char *cmd = 
# 2336 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 2336 "project/nnn/src/nnn.c"
                ;

 if (!file || !*file)
  return retstatus;


 if (!arg1 && arg2) {
  arg1 = arg2;
  if (arg3) {
   arg2 = arg3;
   arg3 = 
# 2346 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 2346 "project/nnn/src/nnn.c"
             ;
  } else
   arg2 = 
# 2348 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 2348 "project/nnn/src/nnn.c"
             ;
 }

 if (flag & 0x01) {
  cmd = parseargs(file, argv, &status);
  if (!cmd)
   return -1;
 } else
  argv[status++] = file;

 argv[status] = arg1;
 argv[++status] = arg2;
 argv[++status] = arg3;

 if (flag & 0x08)
  endwin();

 pid = xfork(flag);
 if (pid == 0) {

  if (flag & 0x04) {
   int fd = open("/dev/null", 
# 2369 "project/nnn/src/nnn.c" 3 4
                             0x0001
# 2369 "project/nnn/src/nnn.c"
                                     , 0200);

   if (flag & 0x40)
    dup2(fd, 
# 2372 "project/nnn/src/nnn.c" 3 4
            0
# 2372 "project/nnn/src/nnn.c"
                        );
   dup2(fd, 
# 2373 "project/nnn/src/nnn.c" 3 4
           1
# 2373 "project/nnn/src/nnn.c"
                        );
   dup2(fd, 
# 2374 "project/nnn/src/nnn.c" 3 4
           2
# 2374 "project/nnn/src/nnn.c"
                        );
   close(fd);
  } else if (flag & 0x100) {

   if (!isatty(
# 2378 "project/nnn/src/nnn.c" 3 4
              1
# 2378 "project/nnn/src/nnn.c"
                           )) {
    int fd = open(ctermid(
# 2379 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 2379 "project/nnn/src/nnn.c"
                             ), 
# 2379 "project/nnn/src/nnn.c" 3 4
                                0x0001
# 2379 "project/nnn/src/nnn.c"
                                        , 0200);
    dup2(fd, 
# 2380 "project/nnn/src/nnn.c" 3 4
            1
# 2380 "project/nnn/src/nnn.c"
                         );
    close(fd);
   }
  }

  execvp(*argv, argv);
  _exit(
# 2386 "project/nnn/src/nnn.c" 3 4
       0
# 2386 "project/nnn/src/nnn.c"
                   );
 } else {
  retstatus = join(pid, flag);
  ;

  if ((flag & 0x10) || ((flag & 0x20) && retstatus)) {
   status = write(
# 2392 "project/nnn/src/nnn.c" 3 4
                 1
# 2392 "project/nnn/src/nnn.c"
                              , messages[22], xstrlen(messages[22]));
   (void)status;
   while ((read(
# 2394 "project/nnn/src/nnn.c" 3 4
               0
# 2394 "project/nnn/src/nnn.c"
                           , &status, 1) > 0) && (status != '\n'));
  }

  if (flag & 0x08)
   
# 2398 "project/nnn/src/nnn.c" 3 4
  wrefresh(stdscr)
# 2398 "project/nnn/src/nnn.c"
           ;

  free(cmd);
 }

 return retstatus;
}


static char *xgetenv(const char * const name, char *fallback)
{
 char *value = getenv(name);

 return value && value[0] ? value : fallback;
}


static inline uint_t xgetenv_val(const char *name)
{
 char *str = getenv(name);

 if (str && str[0])
  return atoi(str);

 return 0;
}


static 
# 2426 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2426 "project/nnn/src/nnn.c"
           xdiraccess(const char *path)
{
 DIR *dirp = opendir(path);

 if (!dirp) {
  printwait(strerror(
# 2431 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 2431 "project/nnn/src/nnn.c"
 ), 
# 2431 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 2431 "project/nnn/src/nnn.c"
 );
  return 
# 2432 "project/nnn/src/nnn.c" 3 4
        0
# 2432 "project/nnn/src/nnn.c"
             ;
 }

 closedir(dirp);
 return 
# 2436 "project/nnn/src/nnn.c" 3 4
       1
# 2436 "project/nnn/src/nnn.c"
           ;
}

static 
# 2439 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2439 "project/nnn/src/nnn.c"
           plugscript(const char *plugin, uchar_t flags)
{
 mkpath(plgpath, plugin, g_buf);
 if (!access(g_buf, 
# 2442 "project/nnn/src/nnn.c" 3 4
                   (1<<0)
# 2442 "project/nnn/src/nnn.c"
                       )) {
  spawn(g_buf, 
# 2443 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 2443 "project/nnn/src/nnn.c"
                  , 
# 2443 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 2443 "project/nnn/src/nnn.c"
                        , 
# 2443 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 2443 "project/nnn/src/nnn.c"
                              , flags);
  return 
# 2444 "project/nnn/src/nnn.c" 3 4
        1
# 2444 "project/nnn/src/nnn.c"
            ;
 }

 return 
# 2447 "project/nnn/src/nnn.c" 3 4
       0
# 2447 "project/nnn/src/nnn.c"
            ;
}

static void opstr(char *buf, char *op)
{
 
# 2452 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 2452 "project/nnn/src/nnn.c"
buf
# 2452 "project/nnn/src/nnn.c" 3 4
, 
# 2452 "project/nnn/src/nnn.c"
(
# 2452 "project/nnn/src/nnn.c" 3 4
1024 
# 2452 "project/nnn/src/nnn.c"
+ ((
# 2452 "project/nnn/src/nnn.c" 3 4
255 
# 2452 "project/nnn/src/nnn.c"
+ 1) << 1))
# 2452 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 2452 "project/nnn/src/nnn.c"
buf
# 2452 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 2452 "project/nnn/src/nnn.c"
"xargs -0 sh -c '%s \"$0\" \"$@\" . < /dev/tty' < %s", op, selpath
# 2452 "project/nnn/src/nnn.c" 3 4
)
               
# 2453 "project/nnn/src/nnn.c"
              ;
}

static 
# 2456 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2456 "project/nnn/src/nnn.c"
           rmmulstr(char *buf)
{
 char r = confirm_force(
# 2458 "project/nnn/src/nnn.c" 3 4
                       1
# 2458 "project/nnn/src/nnn.c"
                           );
 if (!r)
  return 
# 2460 "project/nnn/src/nnn.c" 3 4
        0
# 2460 "project/nnn/src/nnn.c"
             ;

 if (!g_state.trash)
  
# 2463 "project/nnn/src/nnn.c" 3 4
 __builtin___snprintf_chk (
# 2463 "project/nnn/src/nnn.c"
 buf
# 2463 "project/nnn/src/nnn.c" 3 4
 , 
# 2463 "project/nnn/src/nnn.c"
 (
# 2463 "project/nnn/src/nnn.c" 3 4
 1024 
# 2463 "project/nnn/src/nnn.c"
 + ((
# 2463 "project/nnn/src/nnn.c" 3 4
 255 
# 2463 "project/nnn/src/nnn.c"
 + 1) << 1))
# 2463 "project/nnn/src/nnn.c" 3 4
 , 0, __builtin_object_size (
# 2463 "project/nnn/src/nnn.c"
 buf
# 2463 "project/nnn/src/nnn.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 2463 "project/nnn/src/nnn.c"
 "xargs -0 sh -c 'rm -%cr \"$0\" \"$@\" < /dev/tty' < %s", r, selpath
# 2463 "project/nnn/src/nnn.c" 3 4
 )
               
# 2464 "project/nnn/src/nnn.c"
              ;
 else
  
# 2466 "project/nnn/src/nnn.c" 3 4
 __builtin___snprintf_chk (
# 2466 "project/nnn/src/nnn.c"
 buf
# 2466 "project/nnn/src/nnn.c" 3 4
 , 
# 2466 "project/nnn/src/nnn.c"
 (
# 2466 "project/nnn/src/nnn.c" 3 4
 1024 
# 2466 "project/nnn/src/nnn.c"
 + ((
# 2466 "project/nnn/src/nnn.c" 3 4
 255 
# 2466 "project/nnn/src/nnn.c"
 + 1) << 1))
# 2466 "project/nnn/src/nnn.c" 3 4
 , 0, __builtin_object_size (
# 2466 "project/nnn/src/nnn.c"
 buf
# 2466 "project/nnn/src/nnn.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 2466 "project/nnn/src/nnn.c"
 "xargs -0 %s < %s", utils[(g_state.trash == 1) ? 18 : 19], selpath
# 2466 "project/nnn/src/nnn.c" 3 4
 )
                                                                           
# 2467 "project/nnn/src/nnn.c"
                                                                          ;

 return 
# 2469 "project/nnn/src/nnn.c" 3 4
       1
# 2469 "project/nnn/src/nnn.c"
           ;
}


static 
# 2473 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2473 "project/nnn/src/nnn.c"
           xrm(char * const fpath)
{
 char r = confirm_force(
# 2475 "project/nnn/src/nnn.c" 3 4
                       0
# 2475 "project/nnn/src/nnn.c"
                            );
 if (!r)
  return 
# 2477 "project/nnn/src/nnn.c" 3 4
        0
# 2477 "project/nnn/src/nnn.c"
             ;

 if (!g_state.trash) {
  char rm_opts[] = "-ir";

  rm_opts[1] = r;
  spawn("rm", rm_opts, fpath, 
# 2483 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 2483 "project/nnn/src/nnn.c"
                                 , 0x08 | 0x20);
 } else
  spawn(utils[(g_state.trash == 1) ? 18 : 19],
        fpath, 
# 2486 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 2486 "project/nnn/src/nnn.c"
                  , 
# 2486 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 2486 "project/nnn/src/nnn.c"
                        , 0x08 | 0x01);

 return (access(fpath, 
# 2488 "project/nnn/src/nnn.c" 3 4
                      0
# 2488 "project/nnn/src/nnn.c"
                          ) == -1);
}

static void xrmfromsel(char *path, char *fpath)
{

 
# 2494 "project/nnn/src/nnn.c" 3 4
_Bool 
# 2494 "project/nnn/src/nnn.c"
     selected = 
# 2494 "project/nnn/src/nnn.c" 3 4
                1
# 2494 "project/nnn/src/nnn.c"
                    ;


 if ((pdents[cur].flags & 0x01) && scanselforpath(fpath, 
# 2497 "project/nnn/src/nnn.c" 3 4
                                                                 0
# 2497 "project/nnn/src/nnn.c"
                                                                      ))
  clearselection();
 else if (pdents[cur].flags & 0x10) {
  --nselected;
  rmfromselbuf(mkpath(path, pdents[cur].name, g_sel));
 }

 else
  selected = 
# 2505 "project/nnn/src/nnn.c" 3 4
            0
# 2505 "project/nnn/src/nnn.c"
                 ;

 if (selected && cfg.x11)
  plugscript(utils[16], 0x02 | 0x04);

}

static uint_t lines_in_file(int fd, char *buf, size_t buflen)
{
 ssize_t len;
 uint_t count = 0;

 while ((len = read(fd, buf, buflen)) > 0)
  while (len)
   count += (buf[--len] == '\n');


 return ((len < 0) ? 0 : count);
}

static 
# 2525 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2525 "project/nnn/src/nnn.c"
           cpmv_rename(int choice, const char *path)
{
 int fd;
 uint_t count = 0, lines = 0;
 
# 2529 "project/nnn/src/nnn.c" 3 4
_Bool 
# 2529 "project/nnn/src/nnn.c"
     ret = 
# 2529 "project/nnn/src/nnn.c" 3 4
           0
# 2529 "project/nnn/src/nnn.c"
                ;
 char *cmd = (choice == 'c' ? cp : mv);
 char buf[sizeof(patterns[1]) + sizeof(cmd) + (
# 2531 "project/nnn/src/nnn.c" 3 4
                                                      1024 
# 2531 "project/nnn/src/nnn.c"
                                                               << 1)];

 fd = create_tmp_file();
 if (fd == -1)
  return ret;


 if (!selbufpos) {
  
# 2539 "project/nnn/src/nnn.c" 3 4
 __builtin___snprintf_chk (
# 2539 "project/nnn/src/nnn.c"
 buf
# 2539 "project/nnn/src/nnn.c" 3 4
 , 
# 2539 "project/nnn/src/nnn.c"
 sizeof(buf)
# 2539 "project/nnn/src/nnn.c" 3 4
 , 0, __builtin_object_size (
# 2539 "project/nnn/src/nnn.c"
 buf
# 2539 "project/nnn/src/nnn.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 2539 "project/nnn/src/nnn.c"
 "tr '\\0' '\\n' < %s > %s", selpath, g_tmpfpath
# 2539 "project/nnn/src/nnn.c" 3 4
 )
# 2539 "project/nnn/src/nnn.c"
                                                                            ;
  spawn(utils[7], buf, 
# 2540 "project/nnn/src/nnn.c" 3 4
                                 ((void *)0)
# 2540 "project/nnn/src/nnn.c"
                                     , 
# 2540 "project/nnn/src/nnn.c" 3 4
                                       ((void *)0)
# 2540 "project/nnn/src/nnn.c"
                                           , (0x08 | 0x01));

  count = lines_in_file(fd, buf, sizeof(buf));
  if (!count)
   goto finish;
 } else
  seltofile(fd, &count);

 close(fd);

 
# 2550 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 2550 "project/nnn/src/nnn.c"
buf
# 2550 "project/nnn/src/nnn.c" 3 4
, 
# 2550 "project/nnn/src/nnn.c"
sizeof(buf)
# 2550 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 2550 "project/nnn/src/nnn.c"
buf
# 2550 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 2550 "project/nnn/src/nnn.c"
patterns[0], g_tmpfpath
# 2550 "project/nnn/src/nnn.c" 3 4
)
# 2550 "project/nnn/src/nnn.c"
                                                           ;
 spawn(utils[7], buf, 
# 2551 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 2551 "project/nnn/src/nnn.c"
                                    , 
# 2551 "project/nnn/src/nnn.c" 3 4
                                      ((void *)0)
# 2551 "project/nnn/src/nnn.c"
                                          , (0x08 | 0x01));

 spawn((cfg.waitedit ? enveditor : editor), g_tmpfpath, 
# 2553 "project/nnn/src/nnn.c" 3 4
                                                       ((void *)0)
# 2553 "project/nnn/src/nnn.c"
                                                           , 
# 2553 "project/nnn/src/nnn.c" 3 4
                                                             ((void *)0)
# 2553 "project/nnn/src/nnn.c"
                                                                 , (0x08 | 0x01));

 fd = open(g_tmpfpath, 
# 2555 "project/nnn/src/nnn.c" 3 4
                      0x0000
# 2555 "project/nnn/src/nnn.c"
                              );
 if (fd == -1)
  goto finish;

 lines = lines_in_file(fd, buf, sizeof(buf));
 ;
 ;
 if (!lines || (2 * count != lines)) {
  ;
  goto finish;
 }

 
# 2567 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 2567 "project/nnn/src/nnn.c"
buf
# 2567 "project/nnn/src/nnn.c" 3 4
, 
# 2567 "project/nnn/src/nnn.c"
sizeof(buf)
# 2567 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 2567 "project/nnn/src/nnn.c"
buf
# 2567 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 2567 "project/nnn/src/nnn.c"
patterns[1], path, g_tmpfpath, cmd
# 2567 "project/nnn/src/nnn.c" 3 4
)
# 2567 "project/nnn/src/nnn.c"
                                                                      ;
 if (!spawn(utils[7], buf, 
# 2568 "project/nnn/src/nnn.c" 3 4
                                     ((void *)0)
# 2568 "project/nnn/src/nnn.c"
                                         , 
# 2568 "project/nnn/src/nnn.c" 3 4
                                           ((void *)0)
# 2568 "project/nnn/src/nnn.c"
                                               , (0x08 | 0x01) | 0x20))
  ret = 
# 2569 "project/nnn/src/nnn.c" 3 4
       1
# 2569 "project/nnn/src/nnn.c"
           ;
finish:
 if (fd >= 0)
  close(fd);

 return ret;
}

static 
# 2577 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2577 "project/nnn/src/nnn.c"
           cpmvrm_selection(enum action sel, char *path)
{
 int r;

 if (isselfileempty()) {
  if (nselected)
   clearselection();
  printmsg(messages[3]);
  return 
# 2585 "project/nnn/src/nnn.c" 3 4
        0
# 2585 "project/nnn/src/nnn.c"
             ;
 }

 if (!selsafe())
  return 
# 2589 "project/nnn/src/nnn.c" 3 4
        0
# 2589 "project/nnn/src/nnn.c"
             ;

 switch (sel) {
 case SEL_CP:
  opstr(g_buf, cp);
  break;
 case SEL_MV:
  opstr(g_buf, mv);
  break;
 case SEL_CPMVAS:
  r = get_input(messages[7]);
  if (r != 'c' && r != 'm') {
   printmsg(messages[40]);
   return 
# 2602 "project/nnn/src/nnn.c" 3 4
         0
# 2602 "project/nnn/src/nnn.c"
              ;
  }

  if (!cpmv_rename(r, path)) {
   printmsg(messages[5]);
   return 
# 2607 "project/nnn/src/nnn.c" 3 4
         0
# 2607 "project/nnn/src/nnn.c"
              ;
  }
  break;
 default:
  if (!rmmulstr(g_buf)) {
   printmsg(messages[4]);
   return 
# 2613 "project/nnn/src/nnn.c" 3 4
         0
# 2613 "project/nnn/src/nnn.c"
              ;
  }
 }

 if (sel != SEL_CPMVAS && spawn(utils[7], g_buf, 
# 2617 "project/nnn/src/nnn.c" 3 4
                                                           ((void *)0)
# 2617 "project/nnn/src/nnn.c"
                                                               , 
# 2617 "project/nnn/src/nnn.c" 3 4
                                                                 ((void *)0)
# 2617 "project/nnn/src/nnn.c"
                                                                     , (0x08 | 0x01) | 0x20)) {
  printmsg(messages[5]);
  return 
# 2619 "project/nnn/src/nnn.c" 3 4
        0
# 2619 "project/nnn/src/nnn.c"
             ;
 }


 clearselection();

 return 
# 2625 "project/nnn/src/nnn.c" 3 4
       1
# 2625 "project/nnn/src/nnn.c"
           ;
}


static 
# 2629 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 2629 "project/nnn/src/nnn.c"
           batch_rename(void)
{
 int fd1, fd2;
 uint_t count = 0, lines = 0;
 
# 2633 "project/nnn/src/nnn.c" 3 4
_Bool 
# 2633 "project/nnn/src/nnn.c"
     dir = 
# 2633 "project/nnn/src/nnn.c" 3 4
           0
# 2633 "project/nnn/src/nnn.c"
                , ret = 
# 2633 "project/nnn/src/nnn.c" 3 4
                        0
# 2633 "project/nnn/src/nnn.c"
                             ;
 char foriginal[64] = {0};
 static const char batchrenamecmd[] = "paste -d'\n' %s %s | ""gsed"" 'N; /^\\(.*\\)\\n\\1$/!p;d' | "
          "tr '\n' '\\0' | xargs -0 -n2 sh -c 'mv -i \"$0\" \"$@\" <"
          " /dev/tty'";
 char buf[sizeof(batchrenamecmd) + (
# 2638 "project/nnn/src/nnn.c" 3 4
                                   1024 
# 2638 "project/nnn/src/nnn.c"
                                            << 1)];
 int i = get_cur_or_sel();

 if (!i)
  return ret;

 if (i == 'c') {
  selbufpos = 0;
  dir = 
# 2646 "project/nnn/src/nnn.c" 3 4
       1
# 2646 "project/nnn/src/nnn.c"
           ;
 }

 fd1 = create_tmp_file();
 if (fd1 == -1)
  return ret;

 xstrsncpy(foriginal, g_tmpfpath, xstrlen(g_tmpfpath) + 1);

 fd2 = create_tmp_file();
 if (fd2 == -1) {
  unlink(foriginal);
  close(fd1);
  return ret;
 }

 if (dir)
  for (i = 0; i < ndents; ++i)
   appendfpath(pdents[i].name, 
# 2664 "project/nnn/src/nnn.c" 3 4
                              255
# 2664 "project/nnn/src/nnn.c"
                                      );

 seltofile(fd1, &count);
 seltofile(fd2, 
# 2667 "project/nnn/src/nnn.c" 3 4
               ((void *)0)
# 2667 "project/nnn/src/nnn.c"
                   );
 close(fd2);

 if (dir)
  selbufpos = 0;

 spawn((cfg.waitedit ? enveditor : editor), g_tmpfpath, 
# 2673 "project/nnn/src/nnn.c" 3 4
                                                       ((void *)0)
# 2673 "project/nnn/src/nnn.c"
                                                           , 
# 2673 "project/nnn/src/nnn.c" 3 4
                                                             ((void *)0)
# 2673 "project/nnn/src/nnn.c"
                                                                 , (0x08 | 0x01));


 fd2 = open(g_tmpfpath, 
# 2676 "project/nnn/src/nnn.c" 3 4
                       0x0000
# 2676 "project/nnn/src/nnn.c"
                               );
 if (fd2 == -1)
  goto finish;

 lines = lines_in_file(fd2, buf, sizeof(buf));
 ;
 ;
 if (!lines || (count != lines)) {
  ;
  goto finish;
 }

 
# 2688 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 2688 "project/nnn/src/nnn.c"
buf
# 2688 "project/nnn/src/nnn.c" 3 4
, 
# 2688 "project/nnn/src/nnn.c"
sizeof(buf)
# 2688 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 2688 "project/nnn/src/nnn.c"
buf
# 2688 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 2688 "project/nnn/src/nnn.c"
batchrenamecmd, foriginal, g_tmpfpath
# 2688 "project/nnn/src/nnn.c" 3 4
)
# 2688 "project/nnn/src/nnn.c"
                                                                 ;
 spawn(utils[7], buf, 
# 2689 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 2689 "project/nnn/src/nnn.c"
                                    , 
# 2689 "project/nnn/src/nnn.c" 3 4
                                      ((void *)0)
# 2689 "project/nnn/src/nnn.c"
                                          , (0x08 | 0x01));
 ret = 
# 2690 "project/nnn/src/nnn.c" 3 4
      1
# 2690 "project/nnn/src/nnn.c"
          ;

finish:
 if (fd1 >= 0)
  close(fd1);
 unlink(foriginal);

 if (fd2 >= 0)
  close(fd2);
 unlink(g_tmpfpath);

 return ret;
}


static void get_archive_cmd(char *cmd, const char *archive)
{
 uchar_t i = 3;

 if (getutil(utils[1]))
  i = 0;
 else if (getutil(utils[2]))
  i = 1;
 else if (is_suffix(archive, ".zip"))
  i = 2;


 xstrsncpy(cmd, archive_cmd[i], 16);
}

static void archive_selection(const char *cmd, const char *archive, const char *curpath)
{

 char *buf = (char *)malloc((70 + xstrlen(cmd) + xstrlen(archive)
           + xstrlen(curpath) + xstrlen(selpath)) * sizeof(char));
 if (!buf) {
  ;
  printwait(strerror(
# 2727 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 2727 "project/nnn/src/nnn.c"
 ), 
# 2727 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 2727 "project/nnn/src/nnn.c"
 );
  return;
 }

 
# 2731 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 2731 "project/nnn/src/nnn.c"
buf
# 2731 "project/nnn/src/nnn.c" 3 4
, 
# 2731 "project/nnn/src/nnn.c"
(
# 2731 "project/nnn/src/nnn.c" 3 4
1024 
# 2731 "project/nnn/src/nnn.c"
+ ((
# 2731 "project/nnn/src/nnn.c" 3 4
255 
# 2731 "project/nnn/src/nnn.c"
+ 1) << 1))
# 2731 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 2731 "project/nnn/src/nnn.c"
buf
# 2731 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 2731 "project/nnn/src/nnn.c"
"tr '\\0' '\n' < '%s' | ""gsed"" -e 's|^%s/||' | tr '\n' '\\0' | xargs -0 %s %s", selpath, curpath, cmd, archive
# 2731 "project/nnn/src/nnn.c" 3 4
)






   
# 2738 "project/nnn/src/nnn.c"
  ;
 spawn(utils[7], buf, 
# 2739 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 2739 "project/nnn/src/nnn.c"
                                    , 
# 2739 "project/nnn/src/nnn.c" 3 4
                                      ((void *)0)
# 2739 "project/nnn/src/nnn.c"
                                          , (0x08 | 0x01) | 0x10);
 free(buf);
}

static void write_lastdir(const char *curpath, const char *outfile)
{
 if (!outfile)
  xstrsncpy(cfgpath + xstrlen(cfgpath), "/.lastd", 8);
 else
  convert_tilde(outfile, g_buf);

 int fd = open(outfile
   ? (outfile[0] == '~' ? g_buf : outfile)
   : cfgpath, 
# 2752 "project/nnn/src/nnn.c" 3 4
             0x00000200 
# 2752 "project/nnn/src/nnn.c"
                     | 
# 2752 "project/nnn/src/nnn.c" 3 4
                       0x0001 
# 2752 "project/nnn/src/nnn.c"
                                | 
# 2752 "project/nnn/src/nnn.c" 3 4
                                  0x00000400
# 2752 "project/nnn/src/nnn.c"
                                         , 0666);

 if (fd != -1) {
  dprintf(fd, "cd \"%s\"", curpath);
  close(fd);
 }
}
# 2768 "project/nnn/src/nnn.c"
static int xstricmp(const char * const s1, const char * const s2)
{
 char *p1, *p2;

 long long v1 = strtoll(s1, &p1, 10);
 long long v2 = strtoll(s2, &p2, 10);


 if (s1 != p1 || s2 != p2) {

  if (s1 != p1 && s2 != p2) {
   if (v2 > v1)
    return -1;

   if (v1 > v2)
    return 1;
  }


  if (s1 == p1)
   return 1;


  if (s2 == p2)
   return -1;
 }



 return strcoll(s1, s2);



}
# 2818 "project/nnn/src/nnn.c"
static int xstrverscasecmp(const char * const s1, const char * const s2)
{
 const uchar_t *p1 = (const uchar_t *)s1;
 const uchar_t *p2 = (const uchar_t *)s2;
 int state, diff;
 uchar_t c1, c2;





 static const uint8_t next_state[] = {

             0x0, 0x3, 0x9,
             0x0, 0x3, 0x3,
             0x0, 0x6, 0x6,
             0x0, 0x6, 0x9
 };

 static const int8_t result_type[] __attribute__ ((aligned)) = {


             2, 2, 2, 2, 3, 2, 2, 2, 2,
             2, -1, -1, 1, 3, 3, 1, 3, 3,
             2, 2, 2, 2, 2, 2, 2, 2, 2,
             2, 1, 1, -1, 2, 2, -1, 2, 2
 };

 if (p1 == p2)
  return 0;

 c1 = (((*p1) >= 'a' && (*p1) <= 'z') ? ((*p1) - 'a' + 'A') : (*p1));
 ++p1;
 c2 = (((*p2) >= 'a' && (*p2) <= 'z') ? ((*p2) - 'a' + 'A') : (*p2));
 ++p2;


 state = 0x0 + ((c1 == '0') + (((unsigned int) (c1) - '0' <= 9) != 0));

 while ((diff = c1 - c2) == 0) {
  if (c1 == '\0')
   return diff;

  state = next_state[state];
  c1 = (((*p1) >= 'a' && (*p1) <= 'z') ? ((*p1) - 'a' + 'A') : (*p1));
  ++p1;
  c2 = (((*p2) >= 'a' && (*p2) <= 'z') ? ((*p2) - 'a' + 'A') : (*p2));
  ++p2;
  state += (c1 == '0') + (((unsigned int) (c1) - '0' <= 9) != 0);
 }

 state = result_type[state * 3 + (((c2 == '0') + (((unsigned int) (c2) - '0' <= 9) != 0)))];

 switch (state) {
 case 2:
  return diff;
 case 3:
  while (((unsigned int) (*p1++) - '0' <= 9))
   if (!((unsigned int) (*p2++) - '0' <= 9))
    return 1;
  return ((unsigned int) (*p2) - '0' <= 9) ? -1 : diff;
 default:
  return state;
 }
}

static int (*namecmpfn)(const char * const s1, const char * const s2) = &xstricmp;

static char * (*fnstrstr)(const char *haystack, const char *needle) = &strcasestr;




static int regflags = 
# 2891 "project/nnn/src/nnn.c" 3 4
                     0004 
# 2891 "project/nnn/src/nnn.c"
                               | 
# 2891 "project/nnn/src/nnn.c" 3 4
                                 0001 
# 2891 "project/nnn/src/nnn.c"
                                              | 
# 2891 "project/nnn/src/nnn.c" 3 4
                                                0002
# 2891 "project/nnn/src/nnn.c"
                                                         ;
# 2905 "project/nnn/src/nnn.c"
static int setfilter(regex_t *regex, const char *filter)
{
 return regcomp(regex, filter, regflags);
}


static int visible_re(const fltrexp_t *fltrexp, const char *fname)
{



 return regexec(fltrexp->regex, fname, 0, 
# 2916 "project/nnn/src/nnn.c" 3 4
                                         ((void *)0)
# 2916 "project/nnn/src/nnn.c"
                                             , 0) == 0;

}

static int visible_str(const fltrexp_t *fltrexp, const char *fname)
{
 return fnstrstr(fname, fltrexp->str) != 
# 2922 "project/nnn/src/nnn.c" 3 4
                                        ((void *)0)
# 2922 "project/nnn/src/nnn.c"
                                            ;
}

static int (*filterfn)(const fltrexp_t *fltr, const char *fname) = &visible_str;

static void clearfilter(void)
{
 char *fltr = g_ctx[cfg.curctx].c_fltr;

 if (fltr[1]) {
  fltr[48 - 1] = fltr[1];
  fltr[1] = '\0';
 }
}

static int entrycmp(const void *va, const void *vb)
{
 const struct entry *pa = (pEntry)va;
 const struct entry *pb = (pEntry)vb;

 if ((pb->flags & 0x01) != (pa->flags & 0x01)) {
  if (pb->flags & 0x01)
   return 1;
  return -1;
 }


 if (cfg.timeorder) {
  if (pb->sec > pa->sec)
   return 1;
  if (pb->sec < pa->sec)
   return -1;

  if (pb->nsec > pa->nsec)
   return 1;
  if (pb->nsec < pa->nsec)
   return -1;
 } else if (cfg.sizeorder) {
  if (pb->size > pa->size)
   return 1;
  if (pb->size < pa->size)
   return -1;
 } else if (cfg.blkorder) {
  if (pb->blocks > pa->blocks)
   return 1;
  if (pb->blocks < pa->blocks)
   return -1;
 } else if (cfg.extnorder && !(pb->flags & 0x01)) {
  char *extna = xextension(pa->name, pa->nlen - 1);
  char *extnb = xextension(pb->name, pb->nlen - 1);

  if (extna || extnb) {
   if (!extna)
    return -1;

   if (!extnb)
    return 1;

   int ret = strcasecmp(extna, extnb);

   if (ret)
    return ret;
  }
 }

 return namecmpfn(pa->name, pb->name);
}

static int reventrycmp(const void *va, const void *vb)
{
 if ((((pEntry)vb)->flags & 0x01)
     != (((pEntry)va)->flags & 0x01)) {
  if (((pEntry)vb)->flags & 0x01)
   return 1;
  return -1;
 }

 return -entrycmp(va, vb);
}

static int (*entrycmpfn)(const void *va, const void *vb) = &entrycmp;


static int handle_alt_key(wint_t *wch)
{
 
# 3007 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 3007 "project/nnn/src/nnn.c"
0
# 3007 "project/nnn/src/nnn.c" 3 4
)
# 3007 "project/nnn/src/nnn.c"
          ;

 int r = 
# 3009 "project/nnn/src/nnn.c" 3 4
        wget_wch(stdscr,
# 3009 "project/nnn/src/nnn.c"
        wch
# 3009 "project/nnn/src/nnn.c" 3 4
        )
# 3009 "project/nnn/src/nnn.c"
                    ;

 if (r == 
# 3011 "project/nnn/src/nnn.c" 3 4
         (-1)
# 3011 "project/nnn/src/nnn.c"
            )
  *wch = (27);
 
# 3013 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 3013 "project/nnn/src/nnn.c"
-1
# 3013 "project/nnn/src/nnn.c" 3 4
)
# 3013 "project/nnn/src/nnn.c"
              ;

 return r;
}

static inline int handle_event(void)
{
 if (nselected && isselfileempty())
  clearselection();
 return (('L') & 0x1f);
}






static int nextsel(int presel)
{



 int c = presel;
 uint_t i;
 
# 3037 "project/nnn/src/nnn.c" 3 4
_Bool 
# 3037 "project/nnn/src/nnn.c"
     escaped = 
# 3037 "project/nnn/src/nnn.c" 3 4
               0
# 3037 "project/nnn/src/nnn.c"
                    ;

 if (c == 0 || c == '$') {
try_quit:
  c = 
# 3041 "project/nnn/src/nnn.c" 3 4
     wgetch(stdscr)
# 3041 "project/nnn/src/nnn.c"
            ;




  if (c == 
# 3046 "project/nnn/src/nnn.c" 3 4
          0632
# 3046 "project/nnn/src/nnn.c"
                    )
   handle_key_resize();



  if (c == (27)) {
   
# 3052 "project/nnn/src/nnn.c" 3 4
  wtimeout(stdscr,
# 3052 "project/nnn/src/nnn.c"
  0
# 3052 "project/nnn/src/nnn.c" 3 4
  )
# 3052 "project/nnn/src/nnn.c"
            ;
   c = 
# 3053 "project/nnn/src/nnn.c" 3 4
      wgetch(stdscr)
# 3053 "project/nnn/src/nnn.c"
             ;
   if (c != 
# 3054 "project/nnn/src/nnn.c" 3 4
           (-1)
# 3054 "project/nnn/src/nnn.c"
              ) {
    if (c == (27))
     c = (('L') & 0x1f);
    else {
     ungetch(c);
     c = ';';
    }
    
# 3061 "project/nnn/src/nnn.c" 3 4
   wtimeout(stdscr,
# 3061 "project/nnn/src/nnn.c"
   1000
# 3061 "project/nnn/src/nnn.c" 3 4
   )
# 3061 "project/nnn/src/nnn.c"
               ;
   } else if (escaped) {
    
# 3063 "project/nnn/src/nnn.c" 3 4
   wtimeout(stdscr,
# 3063 "project/nnn/src/nnn.c"
   1000
# 3063 "project/nnn/src/nnn.c" 3 4
   )
# 3063 "project/nnn/src/nnn.c"
               ;
    c = (('Q') & 0x1f);
   } else {

    if (!g_state.fifomode)
     notify_fifo(
# 3068 "project/nnn/src/nnn.c" 3 4
                1
# 3068 "project/nnn/src/nnn.c"
                    );

    escaped = 
# 3070 "project/nnn/src/nnn.c" 3 4
             1
# 3070 "project/nnn/src/nnn.c"
                 ;
    
# 3071 "project/nnn/src/nnn.c" 3 4
   wtimeout(stdscr,
# 3071 "project/nnn/src/nnn.c"
   1000
# 3071 "project/nnn/src/nnn.c" 3 4
   )
# 3071 "project/nnn/src/nnn.c"
               ;
    goto try_quit;
   }
  }

  if (c == 
# 3076 "project/nnn/src/nnn.c" 3 4
          (-1) 
# 3076 "project/nnn/src/nnn.c"
              && presel == '$')
   c = (cfg.filtermode || (g_ctx[cfg.curctx].c_fltr[1])) ? '/' : (('L') & 0x1f);
  else if (c == '/' || c == (('L') & 0x1f))

   clearfilter();
 }

 if (c == -1) {
  ++idle;
# 3117 "project/nnn/src/nnn.c"
  if (!cfg.blkorder && event_fd >= 0 && (idle & 1)) {
   struct kevent event_data[1];

   
# 3120 "project/nnn/src/nnn.c" 3 4
  __builtin___memset_chk (
# 3120 "project/nnn/src/nnn.c"
  (void *)event_data
# 3120 "project/nnn/src/nnn.c" 3 4
  , 
# 3120 "project/nnn/src/nnn.c"
  0x0, sizeof(struct kevent) * 1
# 3120 "project/nnn/src/nnn.c" 3 4
  , __builtin_object_size (
# 3120 "project/nnn/src/nnn.c"
  (void *)event_data
# 3120 "project/nnn/src/nnn.c" 3 4
  , 0))
# 3120 "project/nnn/src/nnn.c"
                                                                          ;
   if (kevent(kq, events_to_monitor, 1,
       event_data, 1, &gtimeout) > 0)
    c = handle_event();
  }




 } else
  idle = 0;

 for (i = 0; i < (int)(sizeof(bindings) / sizeof(*(bindings))); ++i)
  if (c == bindings[i].sym)
   return bindings[i].act;

 return 0;
}

static int getorderstr(char *sort)
{
 int i = 0;

 if (cfg.showhidden)
  sort[i++] = 'H';

 if (cfg.timeorder)
  sort[i++] = (cfg.timetype == 2) ? 'M' : ((cfg.timetype == 0) ? 'A' : 'C');
 else if (cfg.sizeorder)
  sort[i++] = 'S';
 else if (cfg.extnorder)
  sort[i++] = 'E';

 if (entrycmpfn == &reventrycmp)
  sort[i++] = 'R';

 if (namecmpfn == &xstrverscasecmp)
  sort[i++] = 'V';

 if (i)
  sort[i] = ' ';

 return i;
}

static void showfilterinfo(void)
{
 int i = 0;
 char info[48] = "\0\0\0\0\0";

 i = getorderstr(info);

 
# 3172 "project/nnn/src/nnn.c" 3 4
__builtin___snprintf_chk (
# 3172 "project/nnn/src/nnn.c"
info + i
# 3172 "project/nnn/src/nnn.c" 3 4
, 
# 3172 "project/nnn/src/nnn.c"
48 - i - 1
# 3172 "project/nnn/src/nnn.c" 3 4
, 0, __builtin_object_size (
# 3172 "project/nnn/src/nnn.c"
info + i
# 3172 "project/nnn/src/nnn.c" 3 4
, 2 > 1 ? 1 : 0), 
# 3172 "project/nnn/src/nnn.c"
"  %s [/], %s [:]", (cfg.regex ? "reg" : "str"), ((fnstrstr == &strcasestr) ? "ic" : "noic")
# 3172 "project/nnn/src/nnn.c" 3 4
)

                                               
# 3174 "project/nnn/src/nnn.c"
                                              ;

 if (cfg.fileinfo && ndents && get_output("file", "-b", pdents[cur].name, -1, 
# 3176 "project/nnn/src/nnn.c" 3 4
                                                                             0
# 3176 "project/nnn/src/nnn.c"
                                                                                  , 
# 3176 "project/nnn/src/nnn.c" 3 4
                                                                                    0
# 3176 "project/nnn/src/nnn.c"
                                                                                         ))
  
# 3177 "project/nnn/src/nnn.c" 3 4
 (wmove(stdscr,
# 3177 "project/nnn/src/nnn.c"
 xlines - 2
# 3177 "project/nnn/src/nnn.c" 3 4
 ,
# 3177 "project/nnn/src/nnn.c"
 2
# 3177 "project/nnn/src/nnn.c" 3 4
 ) == (-1) ? (-1) : waddnstr(stdscr,
# 3177 "project/nnn/src/nnn.c"
 g_buf
# 3177 "project/nnn/src/nnn.c" 3 4
 ,-1))
# 3177 "project/nnn/src/nnn.c"
                               ;

 
# 3179 "project/nnn/src/nnn.c" 3 4
(wmove(stdscr,
# 3179 "project/nnn/src/nnn.c"
xlines - 2
# 3179 "project/nnn/src/nnn.c" 3 4
,
# 3179 "project/nnn/src/nnn.c"
xcols - xstrlen(info)
# 3179 "project/nnn/src/nnn.c" 3 4
) == (-1) ? (-1) : waddnstr(stdscr,
# 3179 "project/nnn/src/nnn.c"
info
# 3179 "project/nnn/src/nnn.c" 3 4
,-1))
# 3179 "project/nnn/src/nnn.c"
                                                 ;
}

static void showfilter(char *str)
{
 
# 3184 "project/nnn/src/nnn.c" 3 4
wattr_on(stdscr, (attr_t)(((
# 3184 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 3184 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 3184 "project/nnn/src/nnn.c"
                                  ;
 showfilterinfo();
 printmsg(str);

}

static inline void swap_ent(int id1, int id2)
{
 struct entry _dent, *pdent1 = &pdents[id1], *pdent2 = &pdents[id2];

 *(&_dent) = *pdent1;
 *pdent1 = *pdent2;
 *pdent2 = *(&_dent);
}




static int fill(const char *fltr, regex_t *re)

{



 fltrexp_t fltrexp = { .regex = re, .str = fltr };


 for (int count = 0; count < ndents; ++count) {
  if (filterfn(&fltrexp, pdents[count].name) == 0) {
   if (count != --ndents) {
    swap_ent(count, ndents);
    --count;
   }

   continue;
  }
 }

 return ndents;
}

static int matches(const char *fltr)
{
# 3239 "project/nnn/src/nnn.c"
 regex_t re;


 if (cfg.regex && setfilter(&re, fltr))
  return -1;

 ndents = fill(fltr, &re);

 if (cfg.regex)
  regfree(&re);


 qsort((pdents), (ndents), sizeof(*(pdents)), (entrycmpfn));

 return ndents;
}





static int dentfind(const char *fname, int n)
{
 for (int i = 0; i < n; ++i)
  if ((*(fname) != *(pdents[i].name) ? -1 : strcmp((fname), (pdents[i].name))) == 0)
   return i;

 return 0;
}

static int filterentries(char *path, char *lastname)
{
 wchar_t *wln = (wchar_t *)
# 3271 "project/nnn/src/nnn.c" 3 4
                          __builtin_alloca(
# 3271 "project/nnn/src/nnn.c"
                          sizeof(wchar_t) * 48
# 3271 "project/nnn/src/nnn.c" 3 4
                          )
# 3271 "project/nnn/src/nnn.c"
                                                             ;
 char *ln = g_ctx[cfg.curctx].c_fltr;
 wint_t ch[2] = {0};
 int r, total = ndents, len;
 char *pln = g_ctx[cfg.curctx].c_fltr + 1;

 ;

 if (ndents && (ln[0] == '/' || ln[0] == '\\') && *pln) {
  if (matches(pln) != -1) {
   move_cursor(dentfind(lastname, ndents), 0);
   redraw(path);
  }

  if (!cfg.filtermode) {
   statusbar(path);
   return 0;
  }

  len = mbstowcs(wln, ln, 48);
 } else {
  ln[0] = wln[0] = cfg.regex ? '\\' : '/';
  ln[1] = wln[1] = '\0';
  len = 1;
 }

 
# 3297 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 3297 "project/nnn/src/nnn.c"
-1
# 3297 "project/nnn/src/nnn.c" 3 4
)
# 3297 "project/nnn/src/nnn.c"
              ;
 curs_set(
# 3298 "project/nnn/src/nnn.c" 3 4
         1
# 3298 "project/nnn/src/nnn.c"
             );
 showfilter(ln);

 while ((r = 
# 3301 "project/nnn/src/nnn.c" 3 4
            wget_wch(stdscr,
# 3301 "project/nnn/src/nnn.c"
            ch
# 3301 "project/nnn/src/nnn.c" 3 4
            )
# 3301 "project/nnn/src/nnn.c"
                       ) != 
# 3301 "project/nnn/src/nnn.c" 3 4
                            (-1)
# 3301 "project/nnn/src/nnn.c"
                               ) {



  switch (*ch) {

  case 0:
  case 
# 3308 "project/nnn/src/nnn.c" 3 4
      0632
# 3308 "project/nnn/src/nnn.c"
                :
   clearoldprompt();
   redraw(path);
   showfilter(ln);
   continue;

  case 
# 3314 "project/nnn/src/nnn.c" 3 4
      0512
# 3314 "project/nnn/src/nnn.c"
            :
  case 
# 3315 "project/nnn/src/nnn.c" 3 4
      0407
# 3315 "project/nnn/src/nnn.c"
                   :
  case '\b':
  case (127):
   if (len != 1) {
    wln[--len] = '\0';
    wcstombs(ln, wln, 48);
    ndents = total;
   } else {
    *ch = '/';
    goto end;
   }

  case (('L') & 0x1f):
   if (*ch == (('L') & 0x1f)) {
    if (wln[1]) {
     ln[48 - 1] = ln[1];
     ln[1] = wln[1] = '\0';
     len = 1;
     ndents = total;
    } else if (ln[48 - 1]) {
     ln[1] = ln[48 - 1];
     ln[48 - 1] = '\0';
     len = mbstowcs(wln, ln, 48);
    } else
     goto end;
   }


   cur = 0;

   if (matches(pln) != -1)
    redraw(path);

   showfilter(ln);
   continue;

  case 
# 3351 "project/nnn/src/nnn.c" 3 4
      0631
# 3351 "project/nnn/src/nnn.c"
               :
   goto end;

  case (27):
   if (handle_alt_key(ch) != 
# 3355 "project/nnn/src/nnn.c" 3 4
                            (-1)
# 3355 "project/nnn/src/nnn.c"
                               ) {
    if (*ch == (27))
     *ch = 'q';
    else {
     unget_wch(*ch);
     *ch = ';';
    }
   }
   goto end;
  }

  if (r != 
# 3366 "project/nnn/src/nnn.c" 3 4
          (0)
# 3366 "project/nnn/src/nnn.c"
            )
   break;


  if (*ch < 128 && keyname(*ch)[0] == '^' && *ch != '^')
   goto end;

  if (len == 1) {
   if (*ch == '?')
    goto end;

   if (cfg.filtermode) {
    switch (*ch) {
    case '\'':
    case '+':
    case ',':
    case '-':
    case '.':
    case ';':
    case '=':
    case '>':
    case '@':
    case ']':
    case '`':
    case '~':
     goto end;
    }
   }


   if (*ch == ':') {
    fnstrstr = (fnstrstr == &strcasestr) ? &strstr : &strcasestr;



    regflags ^= 
# 3401 "project/nnn/src/nnn.c" 3 4
               0002
# 3401 "project/nnn/src/nnn.c"
                        ;

    showfilter(ln);
    continue;
   }


   if (*ch == '/') {
    ln[0] = (ln[0] == '/') ? '\\' : '/';
    wln[0] = (uchar_t)ln[0];
    cfg.regex ^= 1;
    filterfn = cfg.regex ? &visible_re : &visible_str;
    showfilter(ln);
    continue;
   }


   cur = 0;
  } else if (len == 48 - 1)
   continue;

  wln[len] = (wchar_t)*ch;
  wln[++len] = '\0';
  wcstombs(ln, wln, 48);
# 3435 "project/nnn/src/nnn.c"
  if (matches(pln) == -1) {
   showfilter(ln);

   continue;
  }


  if (ndents == 1 && cfg.filtermode
      && cfg.autoselect && (pdents[0].flags & 0x01)) {
   *ch = 
# 3444 "project/nnn/src/nnn.c" 3 4
        0527
# 3444 "project/nnn/src/nnn.c"
                 ;
   cur = 0;
   goto end;
  }
# 3456 "project/nnn/src/nnn.c"
  redraw(path);
  showfilter(ln);
 }
end:


 if (ln[1])
  ln[48 - 1] = ln[1];


 xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 3466 "project/nnn/src/nnn.c" 3 4
255 
# 3466 "project/nnn/src/nnn.c"
+ 1);

 curs_set(
# 3468 "project/nnn/src/nnn.c" 3 4
         0
# 3468 "project/nnn/src/nnn.c"
              );
 
# 3469 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 3469 "project/nnn/src/nnn.c"
1000
# 3469 "project/nnn/src/nnn.c" 3 4
)
# 3469 "project/nnn/src/nnn.c"
            ;


 return *ch;
}


static char *xreadline(const char *prefill, const char *prompt)
{
 size_t len, pos;
 int x, r;
 const int WCHAR_T_WIDTH = sizeof(wchar_t);
 wint_t ch[2] = {0};
 wchar_t * const buf = malloc(sizeof(wchar_t) * 256);

 if (!buf)
  printerr(3485);

 
# 3487 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 3487 "project/nnn/src/nnn.c"
-1
# 3487 "project/nnn/src/nnn.c" 3 4
)
# 3487 "project/nnn/src/nnn.c"
              ;
 printmsg(prompt);

 if (prefill) {
  ;
  len = pos = mbstowcs(buf, prefill, 256);
 } else
  len = (size_t)-1;

 if (len == (size_t)-1) {
  buf[0] = '\0';
  len = pos = 0;
 }

 x = getcurx(stdscr);
 curs_set(
# 3502 "project/nnn/src/nnn.c" 3 4
         1
# 3502 "project/nnn/src/nnn.c"
             );

 while (1) {
  buf[len] = ' ';
  
# 3506 "project/nnn/src/nnn.c" 3 4
 wattr_on(stdscr, (attr_t)(((
# 3506 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 3506 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8))), ((void *)0))
# 3506 "project/nnn/src/nnn.c"
                                   ;
  if (pos > (size_t)(xcols - x)) {
   
# 3508 "project/nnn/src/nnn.c" 3 4
  (wmove(stdscr,
# 3508 "project/nnn/src/nnn.c"
  xlines - 1
# 3508 "project/nnn/src/nnn.c" 3 4
  ,
# 3508 "project/nnn/src/nnn.c"
  x
# 3508 "project/nnn/src/nnn.c" 3 4
  ) == (-1) ? (-1) : waddnwstr(stdscr,
# 3508 "project/nnn/src/nnn.c"
  buf + (pos - (xcols - x) + 1)
# 3508 "project/nnn/src/nnn.c" 3 4
  ,
# 3508 "project/nnn/src/nnn.c"
  xcols - x
# 3508 "project/nnn/src/nnn.c" 3 4
  ))
# 3508 "project/nnn/src/nnn.c"
                                                                     ;
   
# 3509 "project/nnn/src/nnn.c" 3 4
  wmove(stdscr,
# 3509 "project/nnn/src/nnn.c"
  xlines - 1
# 3509 "project/nnn/src/nnn.c" 3 4
  ,
# 3509 "project/nnn/src/nnn.c"
  xcols - 1
# 3509 "project/nnn/src/nnn.c" 3 4
  )
# 3509 "project/nnn/src/nnn.c"
                             ;
  } else {
   
# 3511 "project/nnn/src/nnn.c" 3 4
  (wmove(stdscr,
# 3511 "project/nnn/src/nnn.c"
  xlines - 1
# 3511 "project/nnn/src/nnn.c" 3 4
  ,
# 3511 "project/nnn/src/nnn.c"
  x
# 3511 "project/nnn/src/nnn.c" 3 4
  ) == (-1) ? (-1) : waddnwstr(stdscr,
# 3511 "project/nnn/src/nnn.c"
  buf
# 3511 "project/nnn/src/nnn.c" 3 4
  ,
# 3511 "project/nnn/src/nnn.c"
  len + 1
# 3511 "project/nnn/src/nnn.c" 3 4
  ))
# 3511 "project/nnn/src/nnn.c"
                                         ;
   
# 3512 "project/nnn/src/nnn.c" 3 4
  wmove(stdscr,
# 3512 "project/nnn/src/nnn.c"
  xlines - 1
# 3512 "project/nnn/src/nnn.c" 3 4
  ,
# 3512 "project/nnn/src/nnn.c"
  x + wcswidth(buf, pos)
# 3512 "project/nnn/src/nnn.c" 3 4
  )
# 3512 "project/nnn/src/nnn.c"
                                          ;
  }
  
# 3514 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((
# 3514 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 3514 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8))), ((void *)0))
# 3514 "project/nnn/src/nnn.c"
                                    ;

  r = 
# 3516 "project/nnn/src/nnn.c" 3 4
     wget_wch(stdscr,
# 3516 "project/nnn/src/nnn.c"
     ch
# 3516 "project/nnn/src/nnn.c" 3 4
     )
# 3516 "project/nnn/src/nnn.c"
                ;
  if (r == 
# 3517 "project/nnn/src/nnn.c" 3 4
          (-1)
# 3517 "project/nnn/src/nnn.c"
             )
   continue;

  if (r == 
# 3520 "project/nnn/src/nnn.c" 3 4
          (0)
# 3520 "project/nnn/src/nnn.c"
            ) {
   switch (*ch) {
   case 
# 3522 "project/nnn/src/nnn.c" 3 4
       0527
# 3522 "project/nnn/src/nnn.c"
                :
   case '\n':
   case '\r':
    goto END;
   case (('D') & 0x1f):
    if (pos < len)
     ++pos;
    else if (!(pos || len)) {
     len = 0;
     goto END;
    } else
     continue;

   case (127):
   case '\b':
    if (pos > 0) {
     
# 3538 "project/nnn/src/nnn.c" 3 4
    __builtin___memmove_chk (
# 3538 "project/nnn/src/nnn.c"
    buf + pos - 1
# 3538 "project/nnn/src/nnn.c" 3 4
    , 
# 3538 "project/nnn/src/nnn.c"
    buf + pos, (len - pos) * WCHAR_T_WIDTH
# 3538 "project/nnn/src/nnn.c" 3 4
    , __builtin_object_size (
# 3538 "project/nnn/src/nnn.c"
    buf + pos - 1
# 3538 "project/nnn/src/nnn.c" 3 4
    , 0))
                                  
# 3539 "project/nnn/src/nnn.c"
                                 ;
     --len, --pos;
    }
    continue;
   case '\t':
    if (!(len || pos) && ndents)
     len = pos = mbstowcs(buf, pdents[cur].name, 256);
    continue;
   case (('F') & 0x1f):
    if (pos < len)
     ++pos;
    continue;
   case (('B') & 0x1f):
    if (pos > 0)
     --pos;
    continue;
   case (('W') & 0x1f):
    printmsg(prompt);
    do {
     if (pos == 0)
      break;
     
# 3560 "project/nnn/src/nnn.c" 3 4
    __builtin___memmove_chk (
# 3560 "project/nnn/src/nnn.c"
    buf + pos - 1
# 3560 "project/nnn/src/nnn.c" 3 4
    , 
# 3560 "project/nnn/src/nnn.c"
    buf + pos, (len - pos) * WCHAR_T_WIDTH
# 3560 "project/nnn/src/nnn.c" 3 4
    , __builtin_object_size (
# 3560 "project/nnn/src/nnn.c"
    buf + pos - 1
# 3560 "project/nnn/src/nnn.c" 3 4
    , 0))
                                  
# 3561 "project/nnn/src/nnn.c"
                                 ;
     --pos, --len;
    } while (buf[pos - 1] != ' ' && buf[pos - 1] != '/');
    continue;
   case (('K') & 0x1f):
    printmsg(prompt);
    len = pos;
    continue;
   case (('L') & 0x1f):
    printmsg(prompt);
    len = pos = 0;
    continue;
   case (('A') & 0x1f):
    pos = 0;
    continue;
   case (('E') & 0x1f):
    pos = len;
    continue;
   case (('U') & 0x1f):
    printmsg(prompt);
    
# 3581 "project/nnn/src/nnn.c" 3 4
   __builtin___memmove_chk (
# 3581 "project/nnn/src/nnn.c"
   buf
# 3581 "project/nnn/src/nnn.c" 3 4
   , 
# 3581 "project/nnn/src/nnn.c"
   buf + pos, (len - pos) * WCHAR_T_WIDTH
# 3581 "project/nnn/src/nnn.c" 3 4
   , __builtin_object_size (
# 3581 "project/nnn/src/nnn.c"
   buf
# 3581 "project/nnn/src/nnn.c" 3 4
   , 0))
# 3581 "project/nnn/src/nnn.c"
                                                       ;
    len -= pos;
    pos = 0;
    continue;
   case (27):
    if (handle_alt_key(ch) != 
# 3586 "project/nnn/src/nnn.c" 3 4
                             (-1)
# 3586 "project/nnn/src/nnn.c"
                                )
     continue;

    len = 0;
    goto END;
   }


   if (*ch < 128 && keyname(*ch)[0] == '^')
    continue;

   if (pos < 256 - 1) {
    
# 3598 "project/nnn/src/nnn.c" 3 4
   __builtin___memmove_chk (
# 3598 "project/nnn/src/nnn.c"
   buf + pos + 1
# 3598 "project/nnn/src/nnn.c" 3 4
   , 
# 3598 "project/nnn/src/nnn.c"
   buf + pos, (len - pos) * WCHAR_T_WIDTH
# 3598 "project/nnn/src/nnn.c" 3 4
   , __builtin_object_size (
# 3598 "project/nnn/src/nnn.c"
   buf + pos + 1
# 3598 "project/nnn/src/nnn.c" 3 4
   , 0))
                                 
# 3599 "project/nnn/src/nnn.c"
                                ;
    buf[pos] = *ch;
    ++len, ++pos;
    continue;
   }
  } else {
   switch (*ch) {

   case 
# 3607 "project/nnn/src/nnn.c" 3 4
       0632
# 3607 "project/nnn/src/nnn.c"
                 :
    clearoldprompt();
    xlines = LINES;
    printmsg(prompt);
    break;

   case 
# 3613 "project/nnn/src/nnn.c" 3 4
       0404
# 3613 "project/nnn/src/nnn.c"
               :
    if (pos > 0)
     --pos;
    break;
   case 
# 3617 "project/nnn/src/nnn.c" 3 4
       0405
# 3617 "project/nnn/src/nnn.c"
                :
    if (pos < len)
     ++pos;
    break;
   case 
# 3621 "project/nnn/src/nnn.c" 3 4
       0407
# 3621 "project/nnn/src/nnn.c"
                    :
    if (pos > 0) {
     
# 3623 "project/nnn/src/nnn.c" 3 4
    __builtin___memmove_chk (
# 3623 "project/nnn/src/nnn.c"
    buf + pos - 1
# 3623 "project/nnn/src/nnn.c" 3 4
    , 
# 3623 "project/nnn/src/nnn.c"
    buf + pos, (len - pos) * WCHAR_T_WIDTH
# 3623 "project/nnn/src/nnn.c" 3 4
    , __builtin_object_size (
# 3623 "project/nnn/src/nnn.c"
    buf + pos - 1
# 3623 "project/nnn/src/nnn.c" 3 4
    , 0))
                                  
# 3624 "project/nnn/src/nnn.c"
                                 ;
     --len, --pos;
    }
    break;
   case 
# 3628 "project/nnn/src/nnn.c" 3 4
       0512
# 3628 "project/nnn/src/nnn.c"
             :
    if (pos < len) {
     
# 3630 "project/nnn/src/nnn.c" 3 4
    __builtin___memmove_chk (
# 3630 "project/nnn/src/nnn.c"
    buf + pos
# 3630 "project/nnn/src/nnn.c" 3 4
    , 
# 3630 "project/nnn/src/nnn.c"
    buf + pos + 1, (len - pos - 1) * WCHAR_T_WIDTH
# 3630 "project/nnn/src/nnn.c" 3 4
    , __builtin_object_size (
# 3630 "project/nnn/src/nnn.c"
    buf + pos
# 3630 "project/nnn/src/nnn.c" 3 4
    , 0))
                                      
# 3631 "project/nnn/src/nnn.c"
                                     ;
     --len;
    }
    break;
   case 
# 3635 "project/nnn/src/nnn.c" 3 4
       0550
# 3635 "project/nnn/src/nnn.c"
              :
    pos = len;
    break;
   case 
# 3638 "project/nnn/src/nnn.c" 3 4
       0406
# 3638 "project/nnn/src/nnn.c"
               :
    pos = 0;
    break;
   case 
# 3641 "project/nnn/src/nnn.c" 3 4
       0403
# 3641 "project/nnn/src/nnn.c"
             :
   case 
# 3642 "project/nnn/src/nnn.c" 3 4
       0402
# 3642 "project/nnn/src/nnn.c"
               :
    if (prompt && lastcmd && ((*(prompt) != *(">>> ") ? -1 : strcmp((prompt), (">>> "))) == 0)) {
     printmsg(prompt);
     len = pos = mbstowcs(buf, lastcmd, 256);
    }
   default:
    break;
   }
  }
 }

END:
 curs_set(
# 3654 "project/nnn/src/nnn.c" 3 4
         0
# 3654 "project/nnn/src/nnn.c"
              );
 
# 3655 "project/nnn/src/nnn.c" 3 4
wtimeout(stdscr,
# 3655 "project/nnn/src/nnn.c"
1000
# 3655 "project/nnn/src/nnn.c" 3 4
)
# 3655 "project/nnn/src/nnn.c"
            ;
 printmsg("");

 buf[len] = '\0';

 pos = wcstombs(g_buf, buf, 256 - 1);
 if (pos >= 256 - 1)
  g_buf[256 - 1] = '\0';

 free(buf);
 return g_buf;
}





static char *getreadline(const char *prompt)
{
 endwin();

 char *input = readline(prompt);

 
# 3678 "project/nnn/src/nnn.c" 3 4
wrefresh(stdscr)
# 3678 "project/nnn/src/nnn.c"
         ;

 if (input && input[0]) {
  add_history(input);
  xstrsncpy(g_buf, input, (
# 3682 "project/nnn/src/nnn.c" 3 4
                         1024 
# 3682 "project/nnn/src/nnn.c"
                         + ((
# 3682 "project/nnn/src/nnn.c" 3 4
                         255 
# 3682 "project/nnn/src/nnn.c"
                         + 1) << 1)));
  free(input);
  return g_buf;
 }

 free(input);
 return 
# 3688 "project/nnn/src/nnn.c" 3 4
       ((void *)0)
# 3688 "project/nnn/src/nnn.c"
           ;
}






static int xlink(char *prefix, char *path, char *curfname, char *buf, int *presel, int type)
{
 int count = 0, choice;
 char *psel = pselbuf, *fname;
 size_t pos = 0, len, r;
 int (*link_fn)(const char *, const char *) = 
# 3701 "project/nnn/src/nnn.c" 3 4
                                             ((void *)0)
# 3701 "project/nnn/src/nnn.c"
                                                 ;
 char lnpath[
# 3702 "project/nnn/src/nnn.c" 3 4
            1024
# 3702 "project/nnn/src/nnn.c"
                    ];

 choice = get_cur_or_sel();
 if (!choice)
  return -1;

 if (type == 's')
  link_fn = &symlink;
 else
  link_fn = &link;

 if (choice == 'c' || (nselected == 1)) {
  mkpath(path, prefix, lnpath);
  mkpath(path, (choice == 'c') ? curfname : pselbuf, buf);

  if (!link_fn(buf, lnpath)) {
   if (choice == 's')
    clearselection();
   return 1;
  }

  printwait(strerror(
# 3723 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 3723 "project/nnn/src/nnn.c"
 ), presel);
  return -1;
 }

 while (pos < selbufpos) {
  len = xstrlen(psel);
  fname = xbasename(psel);

  r = xstrsncpy(buf, prefix, 
# 3731 "project/nnn/src/nnn.c" 3 4
                            255 
# 3731 "project/nnn/src/nnn.c"
                                     + 1);
  xstrsncpy(buf + r - 1, fname, 
# 3732 "project/nnn/src/nnn.c" 3 4
                               255 
# 3732 "project/nnn/src/nnn.c"
                                        - r);
  mkpath(path, buf, lnpath);

  if (!link_fn(psel, lnpath))
   ++count;

  pos += len + 1;
  psel += len + 1;
 }

 clearselection();
 return count;
}

static 
# 3746 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 3746 "project/nnn/src/nnn.c"
           parsekvpair(kv **arr, char **envcpy, const uchar_t id, uchar_t *items)
{
 
# 3748 "project/nnn/src/nnn.c" 3 4
_Bool 
# 3748 "project/nnn/src/nnn.c"
     new = 
# 3748 "project/nnn/src/nnn.c" 3 4
           1
# 3748 "project/nnn/src/nnn.c"
               ;
 const uchar_t INCR = 8;
 uint_t i = 0;
 kv *kvarr = 
# 3751 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 3751 "project/nnn/src/nnn.c"
                ;
 char *ptr = getenv(env_cfg[id]);

 if (!ptr || !*ptr)
  return 
# 3755 "project/nnn/src/nnn.c" 3 4
        1
# 3755 "project/nnn/src/nnn.c"
            ;

 *envcpy = xstrdup(ptr);
 if (!*envcpy) {
  perror(xitoa(3759));
  return 
# 3760 "project/nnn/src/nnn.c" 3 4
        0
# 3760 "project/nnn/src/nnn.c"
             ;
 }

 ptr = *envcpy;

 while (*ptr && i < 100) {
  if (new) {
   if (!(i & (INCR - 1))) {
    kvarr = xrealloc(kvarr, sizeof(kv) * (i + INCR));
    *arr = kvarr;
    if (!kvarr) {
     perror(xitoa(3771));
     return 
# 3772 "project/nnn/src/nnn.c" 3 4
           0
# 3772 "project/nnn/src/nnn.c"
                ;
    }
    
# 3774 "project/nnn/src/nnn.c" 3 4
   __builtin___memset_chk (
# 3774 "project/nnn/src/nnn.c"
   kvarr + i
# 3774 "project/nnn/src/nnn.c" 3 4
   , 
# 3774 "project/nnn/src/nnn.c"
   0, sizeof(kv) * INCR
# 3774 "project/nnn/src/nnn.c" 3 4
   , __builtin_object_size (
# 3774 "project/nnn/src/nnn.c"
   kvarr + i
# 3774 "project/nnn/src/nnn.c" 3 4
   , 0))
# 3774 "project/nnn/src/nnn.c"
                                          ;
   }
   kvarr[i].key = (uchar_t)*ptr;
   if (*++ptr != ':' || *++ptr == '\0' || *ptr == ';')
    return 
# 3778 "project/nnn/src/nnn.c" 3 4
          0
# 3778 "project/nnn/src/nnn.c"
               ;
   kvarr[i].off = ptr - *envcpy;
   ++i;

   new = 
# 3782 "project/nnn/src/nnn.c" 3 4
        0
# 3782 "project/nnn/src/nnn.c"
             ;
  }

  if (*ptr == ';') {
   *ptr = '\0';
   new = 
# 3787 "project/nnn/src/nnn.c" 3 4
        1
# 3787 "project/nnn/src/nnn.c"
            ;
  }

  ++ptr;
 }

 *items = i;
 return (i != 0);
}







static char *get_kv_val(kv *kvarr, char *buf, int key, uchar_t max, uchar_t id)
{
 char *val;

 if (!kvarr)
  return 
# 3808 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 3808 "project/nnn/src/nnn.c"
            ;

 for (int r = 0; kvarr[r].key && r < max; ++r) {
  if (kvarr[r].key == key) {

   if (id == 2)
    return pluginstr + kvarr[r].off;

   val = bmstr + kvarr[r].off;
   convert_tilde(val, g_buf);
   return abspath(((val[0] == '~') ? g_buf : val), 
# 3818 "project/nnn/src/nnn.c" 3 4
                                                  ((void *)0)
# 3818 "project/nnn/src/nnn.c"
                                                      , buf);
  }
 }

 ;
 return 
# 3823 "project/nnn/src/nnn.c" 3 4
       ((void *)0)
# 3823 "project/nnn/src/nnn.c"
           ;
}

static int get_kv_key(kv *kvarr, char *val, uchar_t max, uchar_t id)
{
 if (!kvarr)
  return -1;

 if (id != 11)
  return -1;

 for (int r = 0; kvarr[r].key && r < max; ++r) {
  if ((*((orderstr + kvarr[r].off)) != *(val) ? -1 : strcmp(((orderstr + kvarr[r].off)), (val))) == 0)
   return kvarr[r].key;
 }

 return -1;
}

static void resetdircolor(int flags)
{

 if (g_state.dircolor && !(flags & 0x01)) {
  
# 3846 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((
# 3846 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 3846 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8)) 
# 3846 "project/nnn/src/nnn.c"
 | 
# 3846 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((13) + 8))), ((void *)0))
# 3846 "project/nnn/src/nnn.c"
                                             ;
  g_state.dircolor = 0;
 }
}
# 3864 "project/nnn/src/nnn.c"
static wchar_t *unescape(const char *str, uint_t maxcols)
{
 wchar_t * const wbuf = (wchar_t *)g_buf;
 wchar_t *buf = wbuf;
 size_t len = mbstowcs(wbuf, str, maxcols);

 len = wcswidth(wbuf, len);

 if (len >= maxcols) {
  size_t lencount = maxcols;

  while (len > maxcols)
   len = wcswidth(wbuf, --lencount);

  wbuf[lencount] = L'\0';
 }


 while (*buf) {
  if (*buf <= '\x1f' || *buf == '\x7f')
   *buf = '\?';

  ++buf;
 }

 return wbuf;
}

static off_t get_size(off_t size, off_t *pval, int comp)
{
 off_t rem = *pval;
 off_t quo = rem / 10;

 if ((rem - (quo * 10)) >= 5) {
  rem = quo + 1;
  if (rem == comp) {
   ++size;
   rem = 0;
  }
 } else
  rem = quo;

 *pval = rem;
 return size;
}

static char *coolsize(off_t size)
{
 const char * const U = "BKMGTPEZY";
 static char size_buf[12];
 off_t rem = 0;
 size_t ret;
 int i = 0;

 while (size >= 1024) {
  rem = size & (0x3FF);
  size >>= 10;
  ++i;
 }

 if (i == 1) {
  rem = (rem * 1000) >> 10;
  rem /= 10;
  size = get_size(size, &rem, 10);
 } else if (i == 2) {
  rem = (rem * 1000) >> 10;
  size = get_size(size, &rem, 100);
 } else if (i > 2) {
  rem = (rem * 10000) >> 10;
  size = get_size(size, &rem, 1000);
 }

 if (i > 0 && i < 6 && rem) {
  ret = xstrsncpy(size_buf, xitoa(size), 12);
  size_buf[ret - 1] = '.';

  char *frac = xitoa(rem);
  size_t toprint = i > 3 ? 3 : i;
  size_t len = xstrlen(frac);

  if (len < toprint) {
   size_buf[ret] = size_buf[ret + 1] = size_buf[ret + 2] = '0';
   xstrsncpy(size_buf + ret + (toprint - len), frac, len + 1);
  } else
   xstrsncpy(size_buf + ret, frac, toprint + 1);

  ret += toprint;
 } else {
  ret = xstrsncpy(size_buf, size ? xitoa(size) : "0", 12);
  --ret;
 }

 size_buf[ret] = U[i];
 size_buf[ret + 1] = '\0';

 return size_buf;
}


static char *get_lsperms(mode_t mode)
{
 static const char * const rwx[] = {"---", "--x", "-w-", "-wx", "r--", "r-x", "rw-", "rwx"};
 static char bits[11] = {'\0'};

 switch (mode & 
# 3968 "project/nnn/src/nnn.c" 3 4
               0170000
# 3968 "project/nnn/src/nnn.c"
                     ) {
 case 
# 3969 "project/nnn/src/nnn.c" 3 4
     0100000
# 3969 "project/nnn/src/nnn.c"
            :
  bits[0] = '-';
  break;
 case 
# 3972 "project/nnn/src/nnn.c" 3 4
     0040000
# 3972 "project/nnn/src/nnn.c"
            :
  bits[0] = 'd';
  break;
 case 
# 3975 "project/nnn/src/nnn.c" 3 4
     0120000
# 3975 "project/nnn/src/nnn.c"
            :
  bits[0] = 'l';
  break;
 case 
# 3978 "project/nnn/src/nnn.c" 3 4
     0140000
# 3978 "project/nnn/src/nnn.c"
             :
  bits[0] = 's';
  break;
 case 
# 3981 "project/nnn/src/nnn.c" 3 4
     0010000
# 3981 "project/nnn/src/nnn.c"
            :
  bits[0] = 'p';
  break;
 case 
# 3984 "project/nnn/src/nnn.c" 3 4
     0060000
# 3984 "project/nnn/src/nnn.c"
            :
  bits[0] = 'b';
  break;
 case 
# 3987 "project/nnn/src/nnn.c" 3 4
     0020000
# 3987 "project/nnn/src/nnn.c"
            :
  bits[0] = 'c';
  break;
 default:
  bits[0] = '?';
  break;
 }

 xstrsncpy(&bits[1], rwx[(mode >> 6) & 7], 4);
 xstrsncpy(&bits[4], rwx[(mode >> 3) & 7], 4);
 xstrsncpy(&bits[7], rwx[(mode & 7)], 4);

 if (mode & 
# 3999 "project/nnn/src/nnn.c" 3 4
           0004000
# 3999 "project/nnn/src/nnn.c"
                  )
  bits[3] = (mode & 0100) ? 's' : 'S';
 if (mode & 
# 4001 "project/nnn/src/nnn.c" 3 4
           0002000
# 4001 "project/nnn/src/nnn.c"
                  )
  bits[6] = (mode & 0010) ? 's' : 'l';
 if (mode & 
# 4003 "project/nnn/src/nnn.c" 3 4
           0001000
# 4003 "project/nnn/src/nnn.c"
                  )
  bits[9] = (mode & 0001) ? 't' : 'T';

 return bits;
}
# 4070 "project/nnn/src/nnn.c"
static void print_time(const time_t *timep)
{
 struct tm t;

 localtime_r(timep, &t);
 printw("%s-%02d-%02d %02d:%02d",
  xitoa(t.tm_year + 1900), t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min);
}

static char get_detail_ind(const mode_t mode)
{
 switch (mode & 
# 4081 "project/nnn/src/nnn.c" 3 4
               0170000
# 4081 "project/nnn/src/nnn.c"
                     ) {
 case 
# 4082 "project/nnn/src/nnn.c" 3 4
     0040000
# 4082 "project/nnn/src/nnn.c"
            :
 case 
# 4083 "project/nnn/src/nnn.c" 3 4
     0100000
# 4083 "project/nnn/src/nnn.c"
            : return ' ';
 case 
# 4084 "project/nnn/src/nnn.c" 3 4
     0120000
# 4084 "project/nnn/src/nnn.c"
            : return '@';
 case 
# 4085 "project/nnn/src/nnn.c" 3 4
     0140000
# 4085 "project/nnn/src/nnn.c"
             : return '=';
 case 
# 4086 "project/nnn/src/nnn.c" 3 4
     0010000
# 4086 "project/nnn/src/nnn.c"
            : return '|';
 case 
# 4087 "project/nnn/src/nnn.c" 3 4
     0060000
# 4087 "project/nnn/src/nnn.c"
            : return 'b';
 case 
# 4088 "project/nnn/src/nnn.c" 3 4
     0020000
# 4088 "project/nnn/src/nnn.c"
            : return 'c';
 }
 return '?';
}


static uchar_t get_color_pair_name_ind(const struct entry *ent, char *pind, int *pattr)
{
 switch (ent->mode & 
# 4096 "project/nnn/src/nnn.c" 3 4
                    0170000
# 4096 "project/nnn/src/nnn.c"
                          ) {
 case 
# 4097 "project/nnn/src/nnn.c" 3 4
     0100000
# 4097 "project/nnn/src/nnn.c"
            :
  if (!ent->size) {
   if (ent->mode & 0100)
    *pind = '*';
   return ((((((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
  }
  if (ent->flags & 0x02) {
   if (ent->mode & 0100)
    *pind = '*';
   return ((((((4 + 1) + 1) + 1) + 1) + 1) + 1);
  }
  if (ent->mode & 0100) {
   *pind = '*';
   return ((((4 + 1) + 1) + 1) + 1);
  }
  return (((((4 + 1) + 1) + 1) + 1) + 1);
 case 
# 4113 "project/nnn/src/nnn.c" 3 4
     0040000
# 4113 "project/nnn/src/nnn.c"
            :
  *pind = '/';
  if (g_state.oldcolor)
   return (((4 + 1) + 1) + 1);
  *pattr |= 
# 4117 "project/nnn/src/nnn.c" 3 4
           ((1U) << ((13) + 8))
# 4117 "project/nnn/src/nnn.c"
                 ;
  return g_state.dirctx ? cfg.curctx + 1 : (((4 + 1) + 1) + 1);
 case 
# 4119 "project/nnn/src/nnn.c" 3 4
     0120000
# 4119 "project/nnn/src/nnn.c"
            :
  if (ent->flags & 0x01) {
   *pind = '/';
   *pattr |= g_state.oldcolor ? 
# 4122 "project/nnn/src/nnn.c" 3 4
                               ((1U) << ((12) + 8)) 
# 4122 "project/nnn/src/nnn.c"
                                     : 
# 4122 "project/nnn/src/nnn.c" 3 4
                                       ((1U) << ((13) + 8))
# 4122 "project/nnn/src/nnn.c"
                                             ;
  } else {
   *pind = '@';
   if (g_state.oldcolor)
    *pattr |= 
# 4126 "project/nnn/src/nnn.c" 3 4
             ((1U) << ((12) + 8))
# 4126 "project/nnn/src/nnn.c"
                  ;
  }
  if (!g_state.oldcolor || cfg.showdetail)
   return (ent->flags & 0x04) ? (((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) : (((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1);
  return 0;
 case 
# 4131 "project/nnn/src/nnn.c" 3 4
     0140000
# 4131 "project/nnn/src/nnn.c"
             :
  *pind = '=';
  return (((((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
 case 
# 4134 "project/nnn/src/nnn.c" 3 4
     0010000
# 4134 "project/nnn/src/nnn.c"
            :
  *pind = '|';
  return ((((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
 case 
# 4137 "project/nnn/src/nnn.c" 3 4
     0060000
# 4137 "project/nnn/src/nnn.c"
            :
  return (4 + 1);
 case 
# 4139 "project/nnn/src/nnn.c" 3 4
     0020000
# 4139 "project/nnn/src/nnn.c"
            :
  return ((4 + 1) + 1);
 }

 *pind = '?';
 return ((((((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
}

static void printent(const struct entry *ent, uint_t namecols, 
# 4147 "project/nnn/src/nnn.c" 3 4
                                                              _Bool 
# 4147 "project/nnn/src/nnn.c"
                                                                   sel)
{
 char ind = '\0';
 int attrs;

 if (cfg.showdetail) {
  int type = ent->mode & 
# 4153 "project/nnn/src/nnn.c" 3 4
                        0170000
# 4153 "project/nnn/src/nnn.c"
                              ;
  char perms[6] = {' ', ' ', (char)('0' + ((ent->mode >> 6) & 7)),
    (char)('0' + ((ent->mode >> 3) & 7)),
    (char)('0' + (ent->mode & 7)), '\0'};

  
# 4158 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 4158 "project/nnn/src/nnn.c"
 ' '
# 4158 "project/nnn/src/nnn.c" 3 4
 )
# 4158 "project/nnn/src/nnn.c"
           ;
  attrs = g_state.oldcolor ? (resetdircolor(ent->flags), 
# 4159 "project/nnn/src/nnn.c" 3 4
                                                        ((1U) << ((12) + 8))
# 4159 "project/nnn/src/nnn.c"
                                                             )
      : (fcolors[((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)] ? 
# 4160 "project/nnn/src/nnn.c" 3 4
                         ((
# 4160 "project/nnn/src/nnn.c"
                         ((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)
# 4160 "project/nnn/src/nnn.c" 3 4
                         ) << ((0) + 8)) 
# 4160 "project/nnn/src/nnn.c"
                                           : 0);
  if (attrs)
   
# 4162 "project/nnn/src/nnn.c" 3 4
  wattr_on(stdscr, (attr_t)(
# 4162 "project/nnn/src/nnn.c"
  attrs
# 4162 "project/nnn/src/nnn.c" 3 4
  ), ((void *)0))
# 4162 "project/nnn/src/nnn.c"
               ;


  print_time(&ent->sec);

  printw("%s%9s ", perms, (type == 
# 4167 "project/nnn/src/nnn.c" 3 4
                                  0100000 
# 4167 "project/nnn/src/nnn.c"
                                          || type == 
# 4167 "project/nnn/src/nnn.c" 3 4
                                                     0040000
# 4167 "project/nnn/src/nnn.c"
                                                            )
   ? coolsize(cfg.blkorder ? (blkcnt_t)ent->blocks << blk_shift : ent->size)
   : (type = (uchar_t)get_detail_ind(ent->mode), (char *)&type));

  if (attrs)
   
# 4172 "project/nnn/src/nnn.c" 3 4
  wattr_off(stdscr, (attr_t)(
# 4172 "project/nnn/src/nnn.c"
  attrs
# 4172 "project/nnn/src/nnn.c" 3 4
  ), ((void *)0))
# 4172 "project/nnn/src/nnn.c"
                ;
 }

 attrs = 0;

 uchar_t color_pair = get_color_pair_name_ind(ent, &ind, &attrs);

 
# 4179 "project/nnn/src/nnn.c" 3 4
waddch(stdscr,
# 4179 "project/nnn/src/nnn.c"
(ent->flags & 0x10) ? '+' | 
# 4179 "project/nnn/src/nnn.c" 3 4
((1U) << ((10) + 8)) 
# 4179 "project/nnn/src/nnn.c"
| 
# 4179 "project/nnn/src/nnn.c" 3 4
((1U) << ((13) + 8)) 
# 4179 "project/nnn/src/nnn.c"
: ' '
# 4179 "project/nnn/src/nnn.c" 3 4
)
# 4179 "project/nnn/src/nnn.c"
                                                                    ;

 if (g_state.oldcolor)
  resetdircolor(ent->flags);
 else {
  if (ent->flags & 0x08)
   color_pair = ((((((((4 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1);
  if (color_pair && fcolors[color_pair])
   attrs |= 
# 4187 "project/nnn/src/nnn.c" 3 4
           ((
# 4187 "project/nnn/src/nnn.c"
           color_pair
# 4187 "project/nnn/src/nnn.c" 3 4
           ) << ((0) + 8))
# 4187 "project/nnn/src/nnn.c"
                                 ;



 }

 if (sel)
  attrs |= 
# 4194 "project/nnn/src/nnn.c" 3 4
          ((1U) << ((10) + 8))
# 4194 "project/nnn/src/nnn.c"
                   ;
 if (attrs)
  
# 4196 "project/nnn/src/nnn.c" 3 4
 wattr_on(stdscr, (attr_t)(
# 4196 "project/nnn/src/nnn.c"
 attrs
# 4196 "project/nnn/src/nnn.c" 3 4
 ), ((void *)0))
# 4196 "project/nnn/src/nnn.c"
              ;
 if (!ind)
  ++namecols;


 
# 4201 "project/nnn/src/nnn.c" 3 4
waddnwstr(stdscr,
# 4201 "project/nnn/src/nnn.c"
unescape(ent->name, namecols)
# 4201 "project/nnn/src/nnn.c" 3 4
,-1)
# 4201 "project/nnn/src/nnn.c"
                                      ;




 if (attrs)
  
# 4207 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(
# 4207 "project/nnn/src/nnn.c"
 attrs
# 4207 "project/nnn/src/nnn.c" 3 4
 ), ((void *)0))
# 4207 "project/nnn/src/nnn.c"
               ;
 if (ind)
  
# 4209 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 4209 "project/nnn/src/nnn.c"
 ind
# 4209 "project/nnn/src/nnn.c" 3 4
 )
# 4209 "project/nnn/src/nnn.c"
           ;
}

static void savecurctx(char *path, char *curname, int nextctx)
{
 settings tmpcfg = cfg;
 context *ctxr = &g_ctx[nextctx];


 if (curname)
  xstrsncpy(g_ctx[tmpcfg.curctx].c_name, curname, 
# 4219 "project/nnn/src/nnn.c" 3 4
                                                 255 
# 4219 "project/nnn/src/nnn.c"
                                                          + 1);
 else
  g_ctx[tmpcfg.curctx].c_name[0] = '\0';

 g_ctx[tmpcfg.curctx].c_cfg = tmpcfg;

 if (ctxr->c_cfg.ctxactive) {
  tmpcfg = ctxr->c_cfg;

  if (order) {
   cfgsort[4] = cfgsort[nextctx];
   cfgsort[nextctx] = '0';
  }
 } else {
  ctxr->c_cfg.ctxactive = 1;
  xstrsncpy(ctxr->c_path, path, 
# 4234 "project/nnn/src/nnn.c" 3 4
                               1024
# 4234 "project/nnn/src/nnn.c"
                                       );
  ctxr->c_last[0] = ctxr->c_name[0] = ctxr->c_fltr[0] = ctxr->c_fltr[1] = '\0';
  ctxr->c_cfg = tmpcfg;

  if (cfgsort[cfg.curctx] == 'z')
   cfgsort[nextctx] = 'z';
 }

 tmpcfg.curctx = nextctx;
 cfg = tmpcfg;
}


static void save_session(const char *sname, int *presel)
{
 int fd, i;
 session_header_t header;
 
# 4251 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4251 "project/nnn/src/nnn.c"
     status = 
# 4251 "project/nnn/src/nnn.c" 3 4
              0
# 4251 "project/nnn/src/nnn.c"
                   ;
 char ssnpath[
# 4252 "project/nnn/src/nnn.c" 3 4
             1024
# 4252 "project/nnn/src/nnn.c"
                     ];
 char spath[
# 4253 "project/nnn/src/nnn.c" 3 4
           1024
# 4253 "project/nnn/src/nnn.c"
                   ];

 
# 4255 "project/nnn/src/nnn.c" 3 4
__builtin___memset_chk (
# 4255 "project/nnn/src/nnn.c"
&header
# 4255 "project/nnn/src/nnn.c" 3 4
, 
# 4255 "project/nnn/src/nnn.c"
0, sizeof(session_header_t)
# 4255 "project/nnn/src/nnn.c" 3 4
, __builtin_object_size (
# 4255 "project/nnn/src/nnn.c"
&header
# 4255 "project/nnn/src/nnn.c" 3 4
, 0))
# 4255 "project/nnn/src/nnn.c"
                                            ;

 header.ver = 1;

 for (i = 0; i < 4; ++i) {
  if (g_ctx[i].c_cfg.ctxactive) {
   if (cfg.curctx == i && ndents)

    xstrsncpy(g_ctx[i].c_name, pdents[cur].name, 
# 4263 "project/nnn/src/nnn.c" 3 4
                                                255 
# 4263 "project/nnn/src/nnn.c"
                                                         + 1);
   header.pathln[i] = strnlen(g_ctx[i].c_path, 
# 4264 "project/nnn/src/nnn.c" 3 4
                                              1024
# 4264 "project/nnn/src/nnn.c"
                                                      ) + 1;
   header.lastln[i] = strnlen(g_ctx[i].c_last, 
# 4265 "project/nnn/src/nnn.c" 3 4
                                              1024
# 4265 "project/nnn/src/nnn.c"
                                                      ) + 1;
   header.nameln[i] = strnlen(g_ctx[i].c_name, 
# 4266 "project/nnn/src/nnn.c" 3 4
                                              255
# 4266 "project/nnn/src/nnn.c"
                                                      ) + 1;
   header.fltrln[i] = 48;
  }
 }

 mkpath(cfgpath, toks[1], ssnpath);
 mkpath(ssnpath, sname, spath);

 fd = open(spath, 
# 4274 "project/nnn/src/nnn.c" 3 4
                 0x00000200 
# 4274 "project/nnn/src/nnn.c"
                         | 
# 4274 "project/nnn/src/nnn.c" 3 4
                           0x0001 
# 4274 "project/nnn/src/nnn.c"
                                    | 
# 4274 "project/nnn/src/nnn.c" 3 4
                                      0x00000400
# 4274 "project/nnn/src/nnn.c"
                                             , 0666);
 if (fd == -1) {
  printwait(messages[23], presel);
  return;
 }

 if ((write(fd, &header, sizeof(header)) != (ssize_t)sizeof(header))
  || (write(fd, &cfg, sizeof(cfg)) != (ssize_t)sizeof(cfg)))
  goto END;

 for (i = 0; i < 4; ++i)
  if ((write(fd, &g_ctx[i].c_cfg, sizeof(settings)) != (ssize_t)sizeof(settings))
   || (write(fd, &g_ctx[i].color, sizeof(uint_t)) != (ssize_t)sizeof(uint_t))
   || (header.nameln[i] > 0
       && write(fd, g_ctx[i].c_name, header.nameln[i]) != (ssize_t)header.nameln[i])
   || (header.lastln[i] > 0
       && write(fd, g_ctx[i].c_last, header.lastln[i]) != (ssize_t)header.lastln[i])
   || (header.fltrln[i] > 0
       && write(fd, g_ctx[i].c_fltr, header.fltrln[i]) != (ssize_t)header.fltrln[i])
   || (header.pathln[i] > 0
       && write(fd, g_ctx[i].c_path, header.pathln[i]) != (ssize_t)header.pathln[i]))
   goto END;

 status = 
# 4297 "project/nnn/src/nnn.c" 3 4
         1
# 4297 "project/nnn/src/nnn.c"
             ;

END:
 close(fd);

 if (!status)
  printwait(messages[5], presel);
}

static 
# 4306 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4306 "project/nnn/src/nnn.c"
           load_session(const char *sname, char **path, char **lastdir, char **lastname, 
# 4306 "project/nnn/src/nnn.c" 3 4
                                                                                         _Bool 
# 4306 "project/nnn/src/nnn.c"
                                                                                              restore)
{
 int fd, i = 0;
 session_header_t header;
 
# 4310 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4310 "project/nnn/src/nnn.c"
     has_loaded_dynamically = !(sname || restore);
 
# 4311 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4311 "project/nnn/src/nnn.c"
     status = (sname && g_state.picker);
 char ssnpath[
# 4312 "project/nnn/src/nnn.c" 3 4
             1024
# 4312 "project/nnn/src/nnn.c"
                     ];
 char spath[
# 4313 "project/nnn/src/nnn.c" 3 4
           1024
# 4313 "project/nnn/src/nnn.c"
                   ];

 mkpath(cfgpath, toks[1], ssnpath);

 if (!restore) {
  sname = sname ? sname : xreadline(
# 4318 "project/nnn/src/nnn.c" 3 4
                                   ((void *)0)
# 4318 "project/nnn/src/nnn.c"
                                       , messages[6]);
  if (!sname[0])
   return 
# 4320 "project/nnn/src/nnn.c" 3 4
         0
# 4320 "project/nnn/src/nnn.c"
              ;

  mkpath(ssnpath, sname, spath);


  if ((sname[0] == '@') && !sname[1])
   has_loaded_dynamically = 
# 4326 "project/nnn/src/nnn.c" 3 4
                           0
# 4326 "project/nnn/src/nnn.c"
                                ;
 } else
  mkpath(ssnpath, "@", spath);

 if (has_loaded_dynamically)
  save_session("@", 
# 4331 "project/nnn/src/nnn.c" 3 4
                   ((void *)0)
# 4331 "project/nnn/src/nnn.c"
                       );

 fd = open(spath, 
# 4333 "project/nnn/src/nnn.c" 3 4
                 0x0000
# 4333 "project/nnn/src/nnn.c"
                         , 0666);
 if (fd == -1) {
  if (!status) {
   printmsg(messages[23]);
   xdelay((350000));
  }
  return 
# 4339 "project/nnn/src/nnn.c" 3 4
        0
# 4339 "project/nnn/src/nnn.c"
             ;
 }

 status = 
# 4342 "project/nnn/src/nnn.c" 3 4
         0
# 4342 "project/nnn/src/nnn.c"
              ;

 if ((read(fd, &header, sizeof(header)) != (ssize_t)sizeof(header))
  || (header.ver != 1)
  || (read(fd, &cfg, sizeof(cfg)) != (ssize_t)sizeof(cfg)))
  goto END;

 g_ctx[cfg.curctx].c_name[0] = g_ctx[cfg.curctx].c_last[0]
  = g_ctx[cfg.curctx].c_fltr[0] = g_ctx[cfg.curctx].c_fltr[1] = '\0';

 for (; i < 4; ++i)
  if ((read(fd, &g_ctx[i].c_cfg, sizeof(settings)) != (ssize_t)sizeof(settings))
   || (read(fd, &g_ctx[i].color, sizeof(uint_t)) != (ssize_t)sizeof(uint_t))
   || (header.nameln[i] > 0
       && read(fd, g_ctx[i].c_name, header.nameln[i]) != (ssize_t)header.nameln[i])
   || (header.lastln[i] > 0
       && read(fd, g_ctx[i].c_last, header.lastln[i]) != (ssize_t)header.lastln[i])
   || (header.fltrln[i] > 0
       && read(fd, g_ctx[i].c_fltr, header.fltrln[i]) != (ssize_t)header.fltrln[i])
   || (header.pathln[i] > 0
       && read(fd, g_ctx[i].c_path, header.pathln[i]) != (ssize_t)header.pathln[i]))
   goto END;

 *path = g_ctx[cfg.curctx].c_path;
 *lastdir = g_ctx[cfg.curctx].c_last;
 *lastname = g_ctx[cfg.curctx].c_name;
 set_sort_flags('\0');
 status = 
# 4369 "project/nnn/src/nnn.c" 3 4
         1
# 4369 "project/nnn/src/nnn.c"
             ;

END:
 close(fd);

 if (!status) {
  printmsg(messages[5]);
  xdelay((350000));
 } else if (restore)
  unlink(spath);

 return status;
}


static uchar_t get_free_ctx(void)
{
 uchar_t r = cfg.curctx;

 do
  r = (r + 1) & ~4;
 while (g_ctx[r].c_cfg.ctxactive && (r != cfg.curctx));

 return r;
}


static void set_smart_ctx(int ctx, char *nextpath, char **path, char *file, char **lastname, char **lastdir)
{
 if (ctx == '+')
  ctx = (int)(get_free_ctx() + 1);

 if (ctx == 0 || ctx == cfg.curctx + 1) {
  xstrsncpy(*lastdir, *path, 
# 4402 "project/nnn/src/nnn.c" 3 4
                            1024
# 4402 "project/nnn/src/nnn.c"
                                    );
  xstrsncpy(*path, nextpath, 
# 4403 "project/nnn/src/nnn.c" 3 4
                            1024
# 4403 "project/nnn/src/nnn.c"
                                    );
 } else {
  --ctx;

  g_ctx[ctx].c_cfg.ctxactive = 0;
  ;
  savecurctx(nextpath, file, ctx);
  *path = g_ctx[ctx].c_path;
  *lastdir = g_ctx[ctx].c_last;
  *lastname = g_ctx[ctx].c_name;
 }
}





static 
# 4420 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4420 "project/nnn/src/nnn.c"
           get_output(char *file, char *arg1, char *arg2, int fdout, 
# 4420 "project/nnn/src/nnn.c" 3 4
                                                                     _Bool 
# 4420 "project/nnn/src/nnn.c"
                                                                          multi, 
# 4420 "project/nnn/src/nnn.c" 3 4
                                                                                 _Bool 
# 4420 "project/nnn/src/nnn.c"
                                                                                      page)
{
 pid_t pid;
 int pipefd[2];
 int index = 0, flags;
 
# 4425 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4425 "project/nnn/src/nnn.c"
     ret = 
# 4425 "project/nnn/src/nnn.c" 3 4
           0
# 4425 "project/nnn/src/nnn.c"
                ;
 
# 4426 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4426 "project/nnn/src/nnn.c"
     tmpfile = ((fdout == -1) && page);
 char *argv[10] = {0};
 char *cmd = 
# 4428 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 4428 "project/nnn/src/nnn.c"
                ;
 int fd = -1;
 ssize_t len;

 if (tmpfile) {
  fdout = create_tmp_file();
  if (fdout == -1)
   return 
# 4435 "project/nnn/src/nnn.c" 3 4
         0
# 4435 "project/nnn/src/nnn.c"
              ;
 }

 if (multi) {
  cmd = parseargs(file, argv, &index);
  if (!cmd)
   return 
# 4441 "project/nnn/src/nnn.c" 3 4
         0
# 4441 "project/nnn/src/nnn.c"
              ;
 } else
  argv[index++] = file;

 argv[index] = arg1;
 argv[++index] = arg2;

 if (pipe(pipefd) == -1) {
  free(cmd);
  printerr(4450);
 }

 for (index = 0; index < 2; ++index) {

  flags = fcntl(pipefd[index], 
# 4455 "project/nnn/src/nnn.c" 3 4
                              3
# 4455 "project/nnn/src/nnn.c"
                                     , 0);


  flags |= 
# 4458 "project/nnn/src/nnn.c" 3 4
          0x00000004
# 4458 "project/nnn/src/nnn.c"
                    ;


  fcntl(pipefd[index], 
# 4461 "project/nnn/src/nnn.c" 3 4
                      4
# 4461 "project/nnn/src/nnn.c"
                             , flags);
 }

 pid = fork();
 if (pid == 0) {

  close(pipefd[0]);
  dup2(pipefd[1], 
# 4468 "project/nnn/src/nnn.c" 3 4
                 1
# 4468 "project/nnn/src/nnn.c"
                              );
  dup2(pipefd[1], 
# 4469 "project/nnn/src/nnn.c" 3 4
                 2
# 4469 "project/nnn/src/nnn.c"
                              );
  close(pipefd[1]);
  execvp(*argv, argv);
  _exit(
# 4472 "project/nnn/src/nnn.c" 3 4
       0
# 4472 "project/nnn/src/nnn.c"
                   );
 }


 waitpid(pid, 
# 4476 "project/nnn/src/nnn.c" 3 4
             ((void *)0)
# 4476 "project/nnn/src/nnn.c"
                 , 0);
 close(pipefd[1]);
 free(cmd);

 while ((len = read(pipefd[0], g_buf, (
# 4480 "project/nnn/src/nnn.c" 3 4
                                     1024 
# 4480 "project/nnn/src/nnn.c"
                                     + ((
# 4480 "project/nnn/src/nnn.c" 3 4
                                     255 
# 4480 "project/nnn/src/nnn.c"
                                     + 1) << 1)) - 1)) > 0) {
  ret = 
# 4481 "project/nnn/src/nnn.c" 3 4
       1
# 4481 "project/nnn/src/nnn.c"
           ;
  if (fdout == -1)
   break;
  if (write(fdout, g_buf, len) != len)
   break;
 }

 close(pipefd[0]);
 if (!page)
  return ret;

 if (tmpfile) {
  close(fdout);
  close(fd);
 }

 spawn(pager, g_tmpfpath, 
# 4497 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 4497 "project/nnn/src/nnn.c"
                             , 
# 4497 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 4497 "project/nnn/src/nnn.c"
                                   , (0x08 | 0x01) | 0x100);

 if (tmpfile)
  unlink(g_tmpfpath);

 return 
# 4502 "project/nnn/src/nnn.c" 3 4
       1
# 4502 "project/nnn/src/nnn.c"
           ;
}




static 
# 4508 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4508 "project/nnn/src/nnn.c"
           show_stats(char *fpath)
{
 static char * const cmds[] = {

  ("file " "-bIL"),

  "file -b",
  "stat",
 };

 size_t r = (sizeof(cmds) / sizeof(*(cmds)));
 int fd = create_tmp_file();
 if (fd == -1)
  return 
# 4521 "project/nnn/src/nnn.c" 3 4
        0
# 4521 "project/nnn/src/nnn.c"
             ;

 while (r)
  get_output(cmds[--r], fpath, 
# 4524 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 4524 "project/nnn/src/nnn.c"
                                  , fd, 
# 4524 "project/nnn/src/nnn.c" 3 4
                                        1
# 4524 "project/nnn/src/nnn.c"
                                            , 
# 4524 "project/nnn/src/nnn.c" 3 4
                                              0
# 4524 "project/nnn/src/nnn.c"
                                                   );

 close(fd);

 spawn(pager, g_tmpfpath, 
# 4528 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 4528 "project/nnn/src/nnn.c"
                             , 
# 4528 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 4528 "project/nnn/src/nnn.c"
                                   , (0x08 | 0x01) | 0x100);
 unlink(g_tmpfpath);
 return 
# 4530 "project/nnn/src/nnn.c" 3 4
       1
# 4530 "project/nnn/src/nnn.c"
           ;
}

static 
# 4533 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4533 "project/nnn/src/nnn.c"
           xchmod(const char *fpath, mode_t mode)
{

 (0100 & mode) ? (mode &= ~0111) : (mode |= 0111);

 return (chmod(fpath, mode) == 0);
}

static size_t get_fs_info(const char *path, 
# 4541 "project/nnn/src/nnn.c" 3 4
                                           _Bool 
# 4541 "project/nnn/src/nnn.c"
                                                type)
{
 struct statvfs svb;

 if (statvfs(path, &svb) == -1)
  return 0;

 if (type == 1)
  return (size_t)svb.f_blocks << ffs((int)(svb.f_frsize >> 1));

 return (size_t)svb.f_bavail << ffs((int)(svb.f_frsize >> 1));
}


static 
# 4555 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4555 "project/nnn/src/nnn.c"
           xmktree(char *path, 
# 4555 "project/nnn/src/nnn.c" 3 4
                               _Bool 
# 4555 "project/nnn/src/nnn.c"
                                    dir)
{
 char *p = path;
 char *slash = path;

 if (!p || !*p)
  return 
# 4561 "project/nnn/src/nnn.c" 3 4
        0
# 4561 "project/nnn/src/nnn.c"
             ;


 ++p;

 while (*p != '\0') {
  if (*p == '/') {
   slash = p;
   *p = '\0';
  } else {
   ++p;
   continue;
  }


  if (mkdir(path, 0777) == -1 && 
# 4576 "project/nnn/src/nnn.c" 3 4
                                (*__error()) 
# 4576 "project/nnn/src/nnn.c"
                                      != 
# 4576 "project/nnn/src/nnn.c" 3 4
                                         17
# 4576 "project/nnn/src/nnn.c"
                                               ) {
# 4586 "project/nnn/src/nnn.c"
   ;
   ;
   *slash = '/';
   return 
# 4589 "project/nnn/src/nnn.c" 3 4
         0
# 4589 "project/nnn/src/nnn.c"
              ;
  }





  *slash = '/';
  ++p;
 }

 if (dir) {
  if (mkdir(path, 0777) == -1 && 
# 4601 "project/nnn/src/nnn.c" 3 4
                                (*__error()) 
# 4601 "project/nnn/src/nnn.c"
                                      != 
# 4601 "project/nnn/src/nnn.c" 3 4
                                         17
# 4601 "project/nnn/src/nnn.c"
                                               ) {
   ;
   ;
   return 
# 4604 "project/nnn/src/nnn.c" 3 4
         0
# 4604 "project/nnn/src/nnn.c"
              ;
  }
 } else {
  int fd = open(path, 
# 4607 "project/nnn/src/nnn.c" 3 4
                     0x00000200
# 4607 "project/nnn/src/nnn.c"
                            , 0666);

  if (fd == -1 && 
# 4609 "project/nnn/src/nnn.c" 3 4
                 (*__error()) 
# 4609 "project/nnn/src/nnn.c"
                       != 
# 4609 "project/nnn/src/nnn.c" 3 4
                          17
# 4609 "project/nnn/src/nnn.c"
                                ) {
   ;
   ;
   return 
# 4612 "project/nnn/src/nnn.c" 3 4
         0
# 4612 "project/nnn/src/nnn.c"
              ;
  }

  close(fd);
 }

 return 
# 4618 "project/nnn/src/nnn.c" 3 4
       1
# 4618 "project/nnn/src/nnn.c"
           ;
}


static 
# 4622 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4622 "project/nnn/src/nnn.c"
           handle_archive(char *fpath , char op)
{
 char arg[] = "-tvf";
 char *util, *outdir = 
# 4625 "project/nnn/src/nnn.c" 3 4
                      ((void *)0)
# 4625 "project/nnn/src/nnn.c"
                          ;
 
# 4626 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4626 "project/nnn/src/nnn.c"
     x_to = 
# 4626 "project/nnn/src/nnn.c" 3 4
            0
# 4626 "project/nnn/src/nnn.c"
                 ;
 
# 4627 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4627 "project/nnn/src/nnn.c"
     is_atool = getutil(utils[1]);

 if (op == 'x') {
  outdir = xreadline(is_atool ? "." : xbasename(fpath), messages[19]);
  if (!outdir || !*outdir) {
   printwait(messages[4], 
# 4632 "project/nnn/src/nnn.c" 3 4
                                  ((void *)0)
# 4632 "project/nnn/src/nnn.c"
                                      );
   return 
# 4633 "project/nnn/src/nnn.c" 3 4
         0
# 4633 "project/nnn/src/nnn.c"
              ;
  }

  if (!(*outdir == '.' && outdir[1] == '\0')) {
   if (!xmktree(outdir, 
# 4637 "project/nnn/src/nnn.c" 3 4
                       1
# 4637 "project/nnn/src/nnn.c"
                           ) || (chdir(outdir) == -1)) {
    printwait(strerror(
# 4638 "project/nnn/src/nnn.c" 3 4
   (*__error())
# 4638 "project/nnn/src/nnn.c"
   ), 
# 4638 "project/nnn/src/nnn.c" 3 4
   ((void *)0)
# 4638 "project/nnn/src/nnn.c"
   );
    return 
# 4639 "project/nnn/src/nnn.c" 3 4
          0
# 4639 "project/nnn/src/nnn.c"
               ;
   }

   outdir = getcwd(
# 4642 "project/nnn/src/nnn.c" 3 4
                  ((void *)0)
# 4642 "project/nnn/src/nnn.c"
                      , 0);
   x_to = 
# 4643 "project/nnn/src/nnn.c" 3 4
         1
# 4643 "project/nnn/src/nnn.c"
             ;
  }
 }

 if (is_atool) {
  util = utils[1];
  arg[1] = op;
  arg[2] = '\0';
 } else if (getutil(utils[2])) {
  util = utils[2];
  if (op == 'x')
   arg[1] = op;
 } else if (is_suffix(fpath, ".zip")) {
  util = utils[3];
  arg[1] = (op == 'l') ? 'v' : '\0';
  arg[2] = '\0';
 } else {
  util = utils[4];
  if (op == 'x')
   arg[1] = op;
 }

 if (op == 'x')
  spawn(util, arg, fpath, 
# 4666 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 4666 "project/nnn/src/nnn.c"
                             , 0x08 | 0x01);
 else
  get_output(util, arg, fpath, -1, 
# 4668 "project/nnn/src/nnn.c" 3 4
                                  1
# 4668 "project/nnn/src/nnn.c"
                                      , 
# 4668 "project/nnn/src/nnn.c" 3 4
                                        1
# 4668 "project/nnn/src/nnn.c"
                                            );

 if (x_to) {
  if (chdir(xdirname(fpath)) == -1) {
   printwait(strerror(
# 4672 "project/nnn/src/nnn.c" 3 4
  (*__error())
# 4672 "project/nnn/src/nnn.c"
  ), 
# 4672 "project/nnn/src/nnn.c" 3 4
  ((void *)0)
# 4672 "project/nnn/src/nnn.c"
  );
   free(outdir);
   return 
# 4674 "project/nnn/src/nnn.c" 3 4
         0
# 4674 "project/nnn/src/nnn.c"
              ;
  }
  xstrsncpy(fpath, outdir, 
# 4676 "project/nnn/src/nnn.c" 3 4
                          1024
# 4676 "project/nnn/src/nnn.c"
                                  );
  free(outdir);
 } else if (op == 'x')
  fpath[0] = '\0';

 return 
# 4681 "project/nnn/src/nnn.c" 3 4
       1
# 4681 "project/nnn/src/nnn.c"
           ;
}

static char *visit_parent(char *path, char *newpath, int *presel)
{
 char *dir;


 if (((path)[1] == '\0' && (path)[0] == '/')) {

  if (cfg.filtermode && presel)
   *presel = '/';
  return 
# 4693 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 4693 "project/nnn/src/nnn.c"
            ;
 }


 if (newpath)
  xstrsncpy(newpath, path, 
# 4698 "project/nnn/src/nnn.c" 3 4
                          1024
# 4698 "project/nnn/src/nnn.c"
                                  );
 else
  newpath = path;

 dir = xdirname(newpath);
 if (chdir(dir) == -1) {
  printwait(strerror(
# 4704 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 4704 "project/nnn/src/nnn.c"
 ), presel);
  return 
# 4705 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 4705 "project/nnn/src/nnn.c"
            ;
 }

 return dir;
}

static void valid_parent(char *path, char *lastname)
{

 xstrsncpy(lastname, xbasename(path), 
# 4714 "project/nnn/src/nnn.c" 3 4
                                     255 
# 4714 "project/nnn/src/nnn.c"
                                              + 1);

 while (!((path)[1] == '\0' && (path)[0] == '/'))
  if (visit_parent(path, 
# 4717 "project/nnn/src/nnn.c" 3 4
                        ((void *)0)
# 4717 "project/nnn/src/nnn.c"
                            , 
# 4717 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 4717 "project/nnn/src/nnn.c"
                                  ))
   break;

 printwait(strerror(
# 4720 "project/nnn/src/nnn.c" 3 4
(*__error())
# 4720 "project/nnn/src/nnn.c"
), 
# 4720 "project/nnn/src/nnn.c" 3 4
((void *)0)
# 4720 "project/nnn/src/nnn.c"
);
 xdelay((350000));
}

static 
# 4724 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4724 "project/nnn/src/nnn.c"
           archive_mount(char *newpath)
{
 char *str = "install archivemount";
 char *dir, *cmd = str + 8;
 char *name = pdents[cur].name;
 size_t len = pdents[cur].nlen;
 char mntpath[
# 4730 "project/nnn/src/nnn.c" 3 4
             1024
# 4730 "project/nnn/src/nnn.c"
                     ];

 if (!getutil(cmd)) {
  printmsg(str);
  return 
# 4734 "project/nnn/src/nnn.c" 3 4
        0
# 4734 "project/nnn/src/nnn.c"
             ;
 }

 dir = xstrdup(name);
 if (!dir) {
  printmsg(messages[5]);
  return 
# 4740 "project/nnn/src/nnn.c" 3 4
        0
# 4740 "project/nnn/src/nnn.c"
             ;
 }

 while (len > 1)
  if (dir[--len] == '.') {
   dir[len] = '\0';
   break;
  }

 ;


 mkpath(cfgpath, toks[2], mntpath);
 mkpath(mntpath, dir, newpath);
 free(dir);

 if (!xmktree(newpath, 
# 4756 "project/nnn/src/nnn.c" 3 4
                      1
# 4756 "project/nnn/src/nnn.c"
                          )) {
  printwait(strerror(
# 4757 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 4757 "project/nnn/src/nnn.c"
 ), 
# 4757 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 4757 "project/nnn/src/nnn.c"
 );
  return 
# 4758 "project/nnn/src/nnn.c" 3 4
        0
# 4758 "project/nnn/src/nnn.c"
             ;
 }


 ;
 ;
 if (spawn(cmd, name, newpath, 
# 4764 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 4764 "project/nnn/src/nnn.c"
                                  , 0x08)) {
  printmsg(messages[5]);
  return 
# 4766 "project/nnn/src/nnn.c" 3 4
        0
# 4766 "project/nnn/src/nnn.c"
             ;
 }

 return 
# 4769 "project/nnn/src/nnn.c" 3 4
       1
# 4769 "project/nnn/src/nnn.c"
           ;
}

static 
# 4772 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4772 "project/nnn/src/nnn.c"
           remote_mount(char *newpath)
{
 uchar_t flag = (0x08 | 0x01);
 int opt;
 char *tmp, *env;
 
# 4777 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4777 "project/nnn/src/nnn.c"
     r = getutil(utils[10]), s = getutil(utils[9]);
 char mntpath[
# 4778 "project/nnn/src/nnn.c" 3 4
             1024
# 4778 "project/nnn/src/nnn.c"
                     ];

 if (!(r || s)) {
  printmsg("install sshfs/rclone");
  return 
# 4782 "project/nnn/src/nnn.c" 3 4
        0
# 4782 "project/nnn/src/nnn.c"
             ;
 }

 if (r && s)
  opt = get_input(messages[30]);
 else
  opt = (!s) ? 'r' : 's';

 if (opt == 's')
  env = xgetenv("NNN_SSHFS", utils[9]);
 else if (opt == 'r') {
  flag |= 0x02 | 0x04;
  env = xgetenv("NNN_RCLONE", "rclone mount");
 } else {
  printmsg(messages[40]);
  return 
# 4797 "project/nnn/src/nnn.c" 3 4
        0
# 4797 "project/nnn/src/nnn.c"
             ;
 }

 tmp = xreadline(
# 4800 "project/nnn/src/nnn.c" 3 4
                ((void *)0)
# 4800 "project/nnn/src/nnn.c"
                    , "host[:dir] > ");
 if (!tmp[0]) {
  printmsg(messages[4]);
  return 
# 4803 "project/nnn/src/nnn.c" 3 4
        0
# 4803 "project/nnn/src/nnn.c"
             ;
 }

 char *div = strchr(tmp, ':');

 if (div)
  *div = '\0';


 mkpath(cfgpath, toks[2], mntpath);
 mkpath(mntpath, tmp, newpath);
 if (!xmktree(newpath, 
# 4814 "project/nnn/src/nnn.c" 3 4
                      1
# 4814 "project/nnn/src/nnn.c"
                          )) {
  printwait(strerror(
# 4815 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 4815 "project/nnn/src/nnn.c"
 ), 
# 4815 "project/nnn/src/nnn.c" 3 4
 ((void *)0)
# 4815 "project/nnn/src/nnn.c"
 );
  return 
# 4816 "project/nnn/src/nnn.c" 3 4
        0
# 4816 "project/nnn/src/nnn.c"
             ;
 }

 if (!div) {
  size_t len = xstrlen(tmp);

  tmp[len] = ':';
  tmp[len + 1] = '\0';
 } else
  *div = ':';


 if (opt == 's') {
  if (spawn(env, tmp, newpath, 
# 4829 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 4829 "project/nnn/src/nnn.c"
                                  , flag)) {
   printmsg(messages[5]);
   return 
# 4831 "project/nnn/src/nnn.c" 3 4
         0
# 4831 "project/nnn/src/nnn.c"
              ;
  }
 } else {
  spawn(env, tmp, newpath, 
# 4834 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 4834 "project/nnn/src/nnn.c"
                              , flag);
  printmsg(messages[31]);
  xdelay((350000) << 2);
 }

 return 
# 4839 "project/nnn/src/nnn.c" 3 4
       1
# 4839 "project/nnn/src/nnn.c"
           ;
}






static 
# 4847 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 4847 "project/nnn/src/nnn.c"
           unmount(char *name, char *newpath, int *presel, char *currentpath)
{

 static char cmd[] = "umount";




 char *tmp = name;
 struct stat sb, psb;
 
# 4857 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4857 "project/nnn/src/nnn.c"
     child = 
# 4857 "project/nnn/src/nnn.c" 3 4
             0
# 4857 "project/nnn/src/nnn.c"
                  ;
 
# 4858 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4858 "project/nnn/src/nnn.c"
     parent = 
# 4858 "project/nnn/src/nnn.c" 3 4
              0
# 4858 "project/nnn/src/nnn.c"
                   ;
 
# 4859 "project/nnn/src/nnn.c" 3 4
_Bool 
# 4859 "project/nnn/src/nnn.c"
     hovered = 
# 4859 "project/nnn/src/nnn.c" 3 4
               0
# 4859 "project/nnn/src/nnn.c"
                    ;
 char mntpath[
# 4860 "project/nnn/src/nnn.c" 3 4
             1024
# 4860 "project/nnn/src/nnn.c"
                     ];
# 4870 "project/nnn/src/nnn.c"
 mkpath(cfgpath, toks[2], mntpath);

 if (tmp && strcmp(mntpath, currentpath) == 0) {
  mkpath(mntpath, tmp, newpath);
  child = lstat(newpath, &sb) != -1;
  parent = lstat(xdirname(newpath), &psb) != -1;
  if (!child && !parent) {
   *presel = '$';
   return 
# 4878 "project/nnn/src/nnn.c" 3 4
         0
# 4878 "project/nnn/src/nnn.c"
              ;
  }
 }

 if (!tmp || !child || !
# 4882 "project/nnn/src/nnn.c" 3 4
                       (((
# 4882 "project/nnn/src/nnn.c"
                       sb.st_mode
# 4882 "project/nnn/src/nnn.c" 3 4
                       ) & 0170000) == 0040000) 
# 4882 "project/nnn/src/nnn.c"
                                           || (child && parent && sb.st_dev == psb.st_dev)) {
  tmp = xreadline(
# 4883 "project/nnn/src/nnn.c" 3 4
                 ((void *)0)
# 4883 "project/nnn/src/nnn.c"
                     , messages[16]);
  if (!tmp[0])
   return 
# 4885 "project/nnn/src/nnn.c" 3 4
         0
# 4885 "project/nnn/src/nnn.c"
              ;
  if (name && (tmp[0] == '-') && (tmp[1] == '\0')) {
   mkpath(currentpath, name, newpath);
   hovered = 
# 4888 "project/nnn/src/nnn.c" 3 4
            1
# 4888 "project/nnn/src/nnn.c"
                ;
  }
 }

 if (!hovered)
  mkpath(mntpath, tmp, newpath);

 if (!xdiraccess(newpath)) {
  *presel = '$';
  return 
# 4897 "project/nnn/src/nnn.c" 3 4
        0
# 4897 "project/nnn/src/nnn.c"
             ;
 }


 if (spawn(cmd, newpath, 
# 4901 "project/nnn/src/nnn.c" 3 4
                        ((void *)0)
# 4901 "project/nnn/src/nnn.c"
                            , 
# 4901 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 4901 "project/nnn/src/nnn.c"
                                  , 0x08)) {



  if (!xconfirm(get_input(messages[37])))
   return 
# 4906 "project/nnn/src/nnn.c" 3 4
         0
# 4906 "project/nnn/src/nnn.c"
              ;


  if (spawn(cmd, "-l", newpath, 
# 4909 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 4909 "project/nnn/src/nnn.c"
                                   , 0x08)) {





   printwait(messages[5], presel);
   return 
# 4916 "project/nnn/src/nnn.c" 3 4
         0
# 4916 "project/nnn/src/nnn.c"
              ;
  }
 }

 if (rmdir(newpath) == -1) {
  printwait(strerror(
# 4921 "project/nnn/src/nnn.c" 3 4
 (*__error())
# 4921 "project/nnn/src/nnn.c"
 ), presel);
  return 
# 4922 "project/nnn/src/nnn.c" 3 4
        0
# 4922 "project/nnn/src/nnn.c"
             ;
 }

 return 
# 4925 "project/nnn/src/nnn.c" 3 4
       1
# 4925 "project/nnn/src/nnn.c"
           ;
}

static void lock_terminal(void)
{
 spawn(xgetenv("NNN_LOCKER", utils[5]), 
# 4930 "project/nnn/src/nnn.c" 3 4
                                                 ((void *)0)
# 4930 "project/nnn/src/nnn.c"
                                                     , 
# 4930 "project/nnn/src/nnn.c" 3 4
                                                       ((void *)0)
# 4930 "project/nnn/src/nnn.c"
                                                           , 
# 4930 "project/nnn/src/nnn.c" 3 4
                                                             ((void *)0)
# 4930 "project/nnn/src/nnn.c"
                                                                 , (0x08 | 0x01));
}

static void printkv(kv *kvarr, int fd, uchar_t max, uchar_t id)
{
 char *val = (id == 1) ? bmstr : pluginstr;

 for (uchar_t i = 0; i < max && kvarr[i].key; ++i)
  dprintf(fd, " %c: %s\n", (char)kvarr[i].key, val + kvarr[i].off);
}

static void printkeys(kv *kvarr, char *buf, uchar_t max)
{
 uchar_t i = 0;

 for (; i < max && kvarr[i].key; ++i) {
  buf[i << 1] = ' ';
  buf[(i << 1) + 1] = kvarr[i].key;
 }

 buf[i << 1] = '\0';
}

static size_t handle_bookmark(const char *bmark, char *newpath)
{
 int fd = '\r';
 size_t r;

 if (maxbm || bmark) {
  r = xstrsncpy(g_buf, messages[34], (
# 4959 "project/nnn/src/nnn.c" 3 4
                                          1024 
# 4959 "project/nnn/src/nnn.c"
                                          + ((
# 4959 "project/nnn/src/nnn.c" 3 4
                                          255 
# 4959 "project/nnn/src/nnn.c"
                                          + 1) << 1)));

  if (bmark) {
   g_buf[--r] = ' ';
   g_buf[++r] = ',';
   g_buf[++r] = '\0';
   ++r;
  }
  printkeys(bookmark, g_buf + r - 1, maxbm);
  printmsg(g_buf);
  fd = get_input(
# 4969 "project/nnn/src/nnn.c" 3 4
                ((void *)0)
# 4969 "project/nnn/src/nnn.c"
                    );
 }

 r = 
# 4972 "project/nnn/src/nnn.c" 3 4
    0
# 4972 "project/nnn/src/nnn.c"
         ;
 if (fd == ',')
  bmark ? xstrsncpy(newpath, bmark, 
# 4974 "project/nnn/src/nnn.c" 3 4
                                   1024
# 4974 "project/nnn/src/nnn.c"
                                           ) : (r = 27);
 else if (fd == '\r')
  mkpath(cfgpath, toks[0], newpath);
 else if (!get_kv_val(bookmark, newpath, fd, maxbm, 1))
  r = 40;

 if (!r && chdir(newpath) == -1)
  r = 24;

 return r;
}

static void add_bookmark(char *path, char *newpath, int *presel)
{
 char *dir = xbasename(path);

 dir = xreadline(dir[0] ? dir : 
# 4990 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 4990 "project/nnn/src/nnn.c"
                                   , "name: ");
 if (dir && *dir) {
  size_t r = mkpath(cfgpath, toks[0], newpath);

  newpath[r - 1] = '/';
  xstrsncpy(newpath + r, dir, 
# 4995 "project/nnn/src/nnn.c" 3 4
                             1024 
# 4995 "project/nnn/src/nnn.c"
                                      - r);
  printwait((symlink(path, newpath) == -1) ? strerror(
# 4996 "project/nnn/src/nnn.c" 3 4
                                                     (*__error())
# 4996 "project/nnn/src/nnn.c"
                                                          ) : newpath, presel);
 } else
  printwait(messages[4], presel);
}
# 5009 "project/nnn/src/nnn.c"
static void show_help(const char *path)
{
 const char *start, *end;
 const char helpstr[] = {
 "0\n"
 "1NAVIGATION\n"
        "9Up k  Up%-16cPgUp ^U  Page up\n"
        "9Dn j  Down%-14cPgDn ^D  Page down\n"
        "9Lt h  Parent%-12c~ ` @ -  ~, /, start, prev\n"
    "5Ret Rt l  Open%-20c'  First file/match\n"
        "9g ^A  Top%-21c.  Toggle hidden\n"
        "9G ^E  End%-21c+  Toggle auto-advance\n"
       "8B (,)  Book(mark)%-11cb ^/  Select bookmark\n"
  "a1-4  Context%-11c(Sh)Tab  Cycle/new context\n"
     "62Esc ^Q  Quit%-20cq  Quit context\n"
   "b^G  QuitCD%-18cQ  Pick/err, quit\n"
 "0\n"
 "1FILTER & PROMPT\n"
    "c/  Filter%-17c^N  Toggle type-to-nav\n"
  "aEsc  Exit prompt%-12c^L  Toggle last filter\n"
   "d%-20cAlt+Esc  Unfilter, quit context\n"
 "0\n"
 "1FILES\n"
        "9o ^O  Open with%-15cn  Create new/link\n"
        "9f ^F  File stats%-14cd  Detail mode toggle\n"
   "b^R  Rename/dup%-14cr  Batch rename\n"
    "cz  Archive%-17ce  Edit file\n"
    "c*  Toggle exe%-14c>  Export list\n"
    "5Space ^J  (Un)select%-12cm-m  Select range/clear\n"
           "ca  Select all%-14cA  Invert sel\n"
        "9p ^P  Copy here%-12cw ^W  Cp/mv sel as\n"
        "9v ^V  Move here%-15cE  Edit sel list\n"
        "9x ^X  Delete%-16cEsc  Send to FIFO\n"
 "0\n"
 "1MISC\n"
       "8Alt ;  Select plugin%-11c=  Launch app\n"
        "9! ^]  Shell%-19c]  Cmd prompt\n"
    "cc  Connect remote%-10cu  Unmount remote/archive\n"
        "9t ^T  Sort toggles%-12cs  Manage session\n"
    "cT  Set time type%-11c0  Lock\n"
   "b^L  Redraw%-18c?  Help, conf\n"
 };

 int fd = create_tmp_file();
 if (fd == -1)
  return;

 dprintf(fd, "  |V\\_\n"
      "  /. \\\\\n"
      " (;^; ||\n"
      "   /___3\n"
      "  (___n))\n");

 char *prog = xgetenv(env_cfg[12], 
# 5062 "project/nnn/src/nnn.c" 3 4
                                        ((void *)0)
# 5062 "project/nnn/src/nnn.c"
                                            );
 if (prog)
  get_output(prog, 
# 5064 "project/nnn/src/nnn.c" 3 4
                  ((void *)0)
# 5064 "project/nnn/src/nnn.c"
                      , 
# 5064 "project/nnn/src/nnn.c" 3 4
                        ((void *)0)
# 5064 "project/nnn/src/nnn.c"
                            , fd, 
# 5064 "project/nnn/src/nnn.c" 3 4
                                  1
# 5064 "project/nnn/src/nnn.c"
                                      , 
# 5064 "project/nnn/src/nnn.c" 3 4
                                        0
# 5064 "project/nnn/src/nnn.c"
                                             );

 start = end = helpstr;
 while (*end) {
  if (*end == '\n') {
   
# 5069 "project/nnn/src/nnn.c" 3 4
  __builtin___snprintf_chk (
# 5069 "project/nnn/src/nnn.c"
  g_buf
# 5069 "project/nnn/src/nnn.c" 3 4
  , 
# 5069 "project/nnn/src/nnn.c"
  (
# 5069 "project/nnn/src/nnn.c" 3 4
  1024 
# 5069 "project/nnn/src/nnn.c"
  + ((
# 5069 "project/nnn/src/nnn.c" 3 4
  255 
# 5069 "project/nnn/src/nnn.c"
  + 1) << 1))
# 5069 "project/nnn/src/nnn.c" 3 4
  , 0, __builtin_object_size (
# 5069 "project/nnn/src/nnn.c"
  g_buf
# 5069 "project/nnn/src/nnn.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 5069 "project/nnn/src/nnn.c"
  "%*c%.*s", xchartohex(*start), ' ', (int)(end - start), start + 1
# 5069 "project/nnn/src/nnn.c" 3 4
  )
                                                            
# 5070 "project/nnn/src/nnn.c"
                                                           ;
   dprintf(fd, g_buf, ' ');
   start = end + 1;
  }

  ++end;
 }

 dprintf(fd, "\nLOCATIONS:\n");
 for (uchar_t i = 0; i < 4; ++i)
  if (g_ctx[i].c_cfg.ctxactive)
   dprintf(fd, " %u: %s\n", i + 1, g_ctx[i].c_path);

 dprintf(fd, "\nVOLUME: %s of ", coolsize(get_fs_info(path, 0)));
 dprintf(fd, "%s free\n\n", coolsize(get_fs_info(path, 1)));

 if (bookmark) {
  dprintf(fd, "BOOKMARKS\n");
  printkv(bookmark, fd, maxbm, 1);
  dprintf(fd, "\n");
 }

 if (plug) {
  dprintf(fd, "PLUGIN KEYS\n");
  printkv(plug, fd, maxplug, 2);
  dprintf(fd, "\n");
 }

 for (uchar_t i = 3; i <= 13; ++i) {
  start = getenv(env_cfg[i]);
  if (start)
   dprintf(fd, "%s: %s\n", env_cfg[i], start);
 }

 if (selpath)
  dprintf(fd, "SELECTION FILE: %s\n", selpath);

 dprintf(fd, "\nv%s\n%s\n", "4.4", "BSD 2-Clause\nhttps://github.com/jarun/nnn");
 close(fd);

 spawn(pager, g_tmpfpath, 
# 5110 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 5110 "project/nnn/src/nnn.c"
                             , 
# 5110 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 5110 "project/nnn/src/nnn.c"
                                   , (0x08 | 0x01) | 0x100);
 unlink(g_tmpfpath);
}

static void setexports(void)
{
 char dvar[] = "d0";
 char fvar[] = "f0";

 if (ndents) {
  setenv(envs[4], pdents[cur].name, 1);
  xstrsncpy(g_ctx[cfg.curctx].c_name, pdents[cur].name, 
# 5121 "project/nnn/src/nnn.c" 3 4
                                                       255 
# 5121 "project/nnn/src/nnn.c"
                                                                + 1);
 } else if (g_ctx[cfg.curctx].c_name[0])
  g_ctx[cfg.curctx].c_name[0] = '\0';

 for (uchar_t i = 0; i < 4; ++i) {
  if (g_ctx[i].c_cfg.ctxactive) {
   dvar[1] = fvar[1] = '1' + i;
   setenv(dvar, g_ctx[i].c_path, 1);

   if (g_ctx[i].c_name[0]) {
    mkpath(g_ctx[i].c_path, g_ctx[i].c_name, g_buf);
    setenv(fvar, g_buf, 1);
   }
  }
 }
}

static 
# 5138 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5138 "project/nnn/src/nnn.c"
           run_cmd_as_plugin(const char *file, char *runfile, uchar_t flags)
{
 size_t len;

 xstrsncpy(g_buf, file, 
# 5142 "project/nnn/src/nnn.c" 3 4
                       1024
# 5142 "project/nnn/src/nnn.c"
                               );

 len = xstrlen(g_buf);
 if (len > 1 && g_buf[len - 1] == '*') {
  flags &= ~0x10;
  g_buf[len - 1] = '\0';
  --len;
 }

 if (flags & 0x80)
  get_output(g_buf, 
# 5152 "project/nnn/src/nnn.c" 3 4
                   ((void *)0)
# 5152 "project/nnn/src/nnn.c"
                       , 
# 5152 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 5152 "project/nnn/src/nnn.c"
                             , -1, 
# 5152 "project/nnn/src/nnn.c" 3 4
                                   1
# 5152 "project/nnn/src/nnn.c"
                                       , 
# 5152 "project/nnn/src/nnn.c" 3 4
                                         1
# 5152 "project/nnn/src/nnn.c"
                                             );
 else if (flags & 0x04) {
  if (is_suffix(g_buf, " $nnn"))
   g_buf[len - 5] = '\0';
  else
   runfile = 
# 5157 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 5157 "project/nnn/src/nnn.c"
                ;
  spawn(g_buf, runfile, 
# 5158 "project/nnn/src/nnn.c" 3 4
                       ((void *)0)
# 5158 "project/nnn/src/nnn.c"
                           , 
# 5158 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 5158 "project/nnn/src/nnn.c"
                                 , flags);
 } else
  spawn(utils[7], g_buf, 
# 5160 "project/nnn/src/nnn.c" 3 4
                                   ((void *)0)
# 5160 "project/nnn/src/nnn.c"
                                       , 
# 5160 "project/nnn/src/nnn.c" 3 4
                                         ((void *)0)
# 5160 "project/nnn/src/nnn.c"
                                             , flags);

 return 
# 5162 "project/nnn/src/nnn.c" 3 4
       1
# 5162 "project/nnn/src/nnn.c"
           ;
}

static 
# 5165 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5165 "project/nnn/src/nnn.c"
           plctrl_init(void)
{
 size_t len;


 g_tmpfpath[tmpfplen - 1] = '\0';
 len = xstrsncpy(g_pipepath, g_tmpfpath, 64);
 g_pipepath[len - 1] = '/';
 len = xstrsncpy(g_pipepath + len, "nnn-pipe.", 64 - len) + len;
 xstrsncpy(g_pipepath + len - 1, xitoa(getpid()), 64 - len);
 setenv(env_cfg[7], g_pipepath, 
# 5175 "project/nnn/src/nnn.c" 3 4
                                      1
# 5175 "project/nnn/src/nnn.c"
                                          );

 return 
# 5177 "project/nnn/src/nnn.c" 3 4
       0
# 5177 "project/nnn/src/nnn.c"
                   ;
}

static void rmlistpath(void)
{
 if (listpath) {
  ;
  ;
  spawn(utils[20], listpath, 
# 5185 "project/nnn/src/nnn.c" 3 4
                                    ((void *)0)
# 5185 "project/nnn/src/nnn.c"
                                        , 
# 5185 "project/nnn/src/nnn.c" 3 4
                                          ((void *)0)
# 5185 "project/nnn/src/nnn.c"
                                              , 0x04 | 0x01);

  if (listpath != initpath)
   free(listpath);
  listpath = 
# 5189 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 5189 "project/nnn/src/nnn.c"
                ;
 }
}

static ssize_t read_nointr(int fd, void *buf, size_t count)
{
 ssize_t len;

 do
  len = read(fd, buf, count);
 while (len == -1 && 
# 5199 "project/nnn/src/nnn.c" 3 4
                    (*__error()) 
# 5199 "project/nnn/src/nnn.c"
                          == 
# 5199 "project/nnn/src/nnn.c" 3 4
                             4
# 5199 "project/nnn/src/nnn.c"
                                  );

 return len;
}

static char *readpipe(int fd, char *ctxnum, char **path)
{
 char ctx, *nextpath = 
# 5206 "project/nnn/src/nnn.c" 3 4
                      ((void *)0)
# 5206 "project/nnn/src/nnn.c"
                          ;

 if (read_nointr(fd, g_buf, 1) != 1)
  return 
# 5209 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 5209 "project/nnn/src/nnn.c"
            ;

 if (g_buf[0] == '-') {
  clearselection();
  if (read_nointr(fd, g_buf, 1) != 1)
   return 
# 5214 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 5214 "project/nnn/src/nnn.c"
             ;
 }

 if (g_buf[0] == '+')
  ctx = (char)(get_free_ctx() + 1);
 else if (g_buf[0] < '0')
  return 
# 5220 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 5220 "project/nnn/src/nnn.c"
            ;
 else {
  ctx = g_buf[0] - '0';
  if (ctx > 4)
   return 
# 5224 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 5224 "project/nnn/src/nnn.c"
             ;
 }

 if (read_nointr(fd, g_buf, 1) != 1)
  return 
# 5228 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 5228 "project/nnn/src/nnn.c"
            ;

 char op = g_buf[0];

 if (op == 'c') {
  ssize_t len = read_nointr(fd, g_buf, 
# 5233 "project/nnn/src/nnn.c" 3 4
                                      1024
# 5233 "project/nnn/src/nnn.c"
                                              );

  if (len <= 0)
   return 
# 5236 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 5236 "project/nnn/src/nnn.c"
             ;

  g_buf[len] = '\0';
  if (g_buf[0] == '/') {
   nextpath = g_buf;
   len = xstrlen(g_buf);
   while (--len && (g_buf[len] == '/'))
    g_buf[len] = '\0';
  }
 } else if (op == 'l') {
  rmlistpath();
  nextpath = load_input(fd, *path);
 } else if (op == 'p') {
  free(selpath);
  selpath = 
# 5250 "project/nnn/src/nnn.c" 3 4
           ((void *)0)
# 5250 "project/nnn/src/nnn.c"
               ;
  clearselection();
  g_state.picker = 0;
  g_state.picked = 1;
 }

 *ctxnum = ctx;

 return nextpath;
}

static 
# 5261 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5261 "project/nnn/src/nnn.c"
           run_plugin(char **path, const char *file, char *runfile, char **lastname, char **lastdir)
{
 pid_t p;
 char ctx = 0;
 uchar_t flags = 0;
 
# 5266 "project/nnn/src/nnn.c" 3 4
_Bool 
# 5266 "project/nnn/src/nnn.c"
     cmd_as_plugin = 
# 5266 "project/nnn/src/nnn.c" 3 4
                     0
# 5266 "project/nnn/src/nnn.c"
                          ;
 char *nextpath;

 if (!g_state.pluginit) {
  plctrl_init();
  g_state.pluginit = 1;
 }

 setexports();


 if (*file == '!') {
  flags = 0x01 | 0x10;
  ++file;

  if (*file == '|') {
   flags |= 0x80;
   ++file;
  } else if (*file == '&') {
   flags = 0x04 | 0x02;
   ++file;
  }

  if (!*file)
   return 
# 5290 "project/nnn/src/nnn.c" 3 4
         0
# 5290 "project/nnn/src/nnn.c"
              ;

  if ((flags & 0x04) || (flags & 0x80))
   return run_cmd_as_plugin(file, runfile, flags);

  cmd_as_plugin = 
# 5295 "project/nnn/src/nnn.c" 3 4
                 1
# 5295 "project/nnn/src/nnn.c"
                     ;
 }

 if (mkfifo(g_pipepath, 0600) != 0)
  return 
# 5299 "project/nnn/src/nnn.c" 3 4
        0
# 5299 "project/nnn/src/nnn.c"
             ;

 endwin();

 p = fork();

 if (!p) {
  int wfd = open(g_pipepath, 
# 5306 "project/nnn/src/nnn.c" 3 4
                            0x0001 
# 5306 "project/nnn/src/nnn.c"
                                     | 
# 5306 "project/nnn/src/nnn.c" 3 4
                                       0x01000000
# 5306 "project/nnn/src/nnn.c"
                                                );

  if (wfd == -1)
   _exit(
# 5309 "project/nnn/src/nnn.c" 3 4
        1
# 5309 "project/nnn/src/nnn.c"
                    );

  if (!cmd_as_plugin) {
   char *sel = 
# 5312 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 5312 "project/nnn/src/nnn.c"
                  ;
   char std[2] = "-";


   mkpath(plgpath, file, g_buf);

   if (g_state.picker)
    sel = selpath ? selpath : std;

   if (runfile && runfile[0]) {
    xstrsncpy(*lastname, runfile, 
# 5322 "project/nnn/src/nnn.c" 3 4
                                 255
# 5322 "project/nnn/src/nnn.c"
                                         );
    spawn(g_buf, *lastname, *path, sel, 0);
   } else
    spawn(g_buf, 
# 5325 "project/nnn/src/nnn.c" 3 4
                ((void *)0)
# 5325 "project/nnn/src/nnn.c"
                    , *path, sel, 0);
  } else
   run_cmd_as_plugin(file, 
# 5327 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 5327 "project/nnn/src/nnn.c"
                              , flags);

  close(wfd);
  _exit(
# 5330 "project/nnn/src/nnn.c" 3 4
       0
# 5330 "project/nnn/src/nnn.c"
                   );
 }

 int rfd;

 do
  rfd = open(g_pipepath, 
# 5336 "project/nnn/src/nnn.c" 3 4
                        0x0000
# 5336 "project/nnn/src/nnn.c"
                                );
 while (rfd == -1 && 
# 5337 "project/nnn/src/nnn.c" 3 4
                    (*__error()) 
# 5337 "project/nnn/src/nnn.c"
                          == 
# 5337 "project/nnn/src/nnn.c" 3 4
                             4
# 5337 "project/nnn/src/nnn.c"
                                  );

 nextpath = readpipe(rfd, &ctx, path);
 if (nextpath)
  set_smart_ctx(ctx, nextpath, path, runfile, lastname, lastdir);

 close(rfd);


 waitpid(p, 
# 5346 "project/nnn/src/nnn.c" 3 4
           ((void *)0)
# 5346 "project/nnn/src/nnn.c"
               , 0);

 
# 5348 "project/nnn/src/nnn.c" 3 4
wrefresh(stdscr)
# 5348 "project/nnn/src/nnn.c"
         ;

 unlink(g_pipepath);

 return 
# 5352 "project/nnn/src/nnn.c" 3 4
       1
# 5352 "project/nnn/src/nnn.c"
           ;
}

static 
# 5355 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5355 "project/nnn/src/nnn.c"
           launch_app(char *newpath)
{
 int r = 0x08;
 char *tmp = newpath;

 mkpath(plgpath, utils[6], newpath);

 if (!getutil(utils[14]) || access(newpath, 
# 5362 "project/nnn/src/nnn.c" 3 4
                                                 (1<<0)
# 5362 "project/nnn/src/nnn.c"
                                                     ) < 0) {
  tmp = xreadline(
# 5363 "project/nnn/src/nnn.c" 3 4
                 ((void *)0)
# 5363 "project/nnn/src/nnn.c"
                     , messages[32]);
  r = 0x02 | 0x04 | 0x01;
 }

 if (tmp && *tmp)
  spawn(tmp, (r == 0x08) ? "0" : 
# 5368 "project/nnn/src/nnn.c" 3 4
                                    ((void *)0)
# 5368 "project/nnn/src/nnn.c"
                                        , 
# 5368 "project/nnn/src/nnn.c" 3 4
                                          ((void *)0)
# 5368 "project/nnn/src/nnn.c"
                                              , 
# 5368 "project/nnn/src/nnn.c" 3 4
                                                ((void *)0)
# 5368 "project/nnn/src/nnn.c"
                                                    , r);

 return 
# 5370 "project/nnn/src/nnn.c" 3 4
       0
# 5370 "project/nnn/src/nnn.c"
            ;
}


static 
# 5374 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5374 "project/nnn/src/nnn.c"
           prompt_run(void)
{
 
# 5376 "project/nnn/src/nnn.c" 3 4
_Bool 
# 5376 "project/nnn/src/nnn.c"
     ret = 
# 5376 "project/nnn/src/nnn.c" 3 4
           0
# 5376 "project/nnn/src/nnn.c"
                ;
 char *cmdline, *next;
 int cnt_j, cnt_J;
 size_t len;

 const char *xargs_j = "xargs -0 -I{} %s < %s";
 const char *xargs_J = "xargs -0 %s < %s";
 char cmd[(
# 5383 "project/nnn/src/nnn.c" 3 4
         1024 
# 5383 "project/nnn/src/nnn.c"
         + ((
# 5383 "project/nnn/src/nnn.c" 3 4
         255 
# 5383 "project/nnn/src/nnn.c"
         + 1) << 1)) + 32];

 while (1) {

  if (g_state.picker) {

   cmdline = xreadline(
# 5389 "project/nnn/src/nnn.c" 3 4
                      ((void *)0)
# 5389 "project/nnn/src/nnn.c"
                          , ">>> ");

  } else
   cmdline = getreadline("\n"">>> ");


  if (!cmdline || !cmdline[0])
   break;

  free(lastcmd);
  lastcmd = xstrdup(cmdline);
  ret = 
# 5400 "project/nnn/src/nnn.c" 3 4
       1
# 5400 "project/nnn/src/nnn.c"
           ;

  len = xstrlen(cmdline);

  cnt_j = 0;
  next = cmdline;
  while ((next = strstr(next, "%j"))) {
   ++cnt_j;


   next[0] = '{';
   next[1] = '}';

   ++next;
  }

  cnt_J = 0;
  next = cmdline;
  while ((next = strstr(next, "%J"))) {
   ++cnt_J;


   if (next == cmdline + len - 2) {
    cmdline[len - 2] = '\0';
   }

   ++next;
  }


  if (cnt_j && cnt_J)
   break;

  if (cnt_j)
   
# 5434 "project/nnn/src/nnn.c" 3 4
  __builtin___snprintf_chk (
# 5434 "project/nnn/src/nnn.c"
  cmd
# 5434 "project/nnn/src/nnn.c" 3 4
  , 
# 5434 "project/nnn/src/nnn.c"
  (
# 5434 "project/nnn/src/nnn.c" 3 4
  1024 
# 5434 "project/nnn/src/nnn.c"
  + ((
# 5434 "project/nnn/src/nnn.c" 3 4
  255 
# 5434 "project/nnn/src/nnn.c"
  + 1) << 1)) + 32
# 5434 "project/nnn/src/nnn.c" 3 4
  , 0, __builtin_object_size (
# 5434 "project/nnn/src/nnn.c"
  cmd
# 5434 "project/nnn/src/nnn.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 5434 "project/nnn/src/nnn.c"
  xargs_j, cmdline, selpath
# 5434 "project/nnn/src/nnn.c" 3 4
  )
# 5434 "project/nnn/src/nnn.c"
                                                            ;
  else if (cnt_J)
   
# 5436 "project/nnn/src/nnn.c" 3 4
  __builtin___snprintf_chk (
# 5436 "project/nnn/src/nnn.c"
  cmd
# 5436 "project/nnn/src/nnn.c" 3 4
  , 
# 5436 "project/nnn/src/nnn.c"
  (
# 5436 "project/nnn/src/nnn.c" 3 4
  1024 
# 5436 "project/nnn/src/nnn.c"
  + ((
# 5436 "project/nnn/src/nnn.c" 3 4
  255 
# 5436 "project/nnn/src/nnn.c"
  + 1) << 1)) + 32
# 5436 "project/nnn/src/nnn.c" 3 4
  , 0, __builtin_object_size (
# 5436 "project/nnn/src/nnn.c"
  cmd
# 5436 "project/nnn/src/nnn.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 5436 "project/nnn/src/nnn.c"
  xargs_J, cmdline, selpath
# 5436 "project/nnn/src/nnn.c" 3 4
  )
# 5436 "project/nnn/src/nnn.c"
                                                            ;

  spawn(shell, "-c", (cnt_j || cnt_J) ? cmd : cmdline, 
# 5438 "project/nnn/src/nnn.c" 3 4
                                                      ((void *)0)
# 5438 "project/nnn/src/nnn.c"
                                                          , (0x08 | 0x01) | 0x10);
 }

 return ret;
}

static 
# 5444 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5444 "project/nnn/src/nnn.c"
           handle_cmd(enum action sel, char *newpath)
{
 endselection(
# 5446 "project/nnn/src/nnn.c" 3 4
             0
# 5446 "project/nnn/src/nnn.c"
                  );

 if (sel == SEL_LAUNCH)
  return launch_app(newpath);

 setexports();

 if (sel == SEL_PROMPT)
  return prompt_run();


 char *tmp = getenv(env_cfg[6]);
 int r = tmp ? atoi(tmp) : 0;

 setenv(env_cfg[6], xitoa(r + 1), 1);
 spawn(shell, 
# 5461 "project/nnn/src/nnn.c" 3 4
             ((void *)0)
# 5461 "project/nnn/src/nnn.c"
                 , 
# 5461 "project/nnn/src/nnn.c" 3 4
                   ((void *)0)
# 5461 "project/nnn/src/nnn.c"
                       , 
# 5461 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 5461 "project/nnn/src/nnn.c"
                             , (0x08 | 0x01));
 setenv(env_cfg[6], xitoa(r), 1);
 return 
# 5463 "project/nnn/src/nnn.c" 3 4
       1
# 5463 "project/nnn/src/nnn.c"
           ;
}

static void dentfree(void)
{
 free(pnamebuf);
 free(pdents);
 free(mark);


 free(core_blocks);
 free(core_data);
 free(core_files);
}

static void *du_thread(void *p_data)
{
 thread_data *pdata = (thread_data *)p_data;
 char *path[2] = {pdata->path, 
# 5481 "project/nnn/src/nnn.c" 3 4
                              ((void *)0)
# 5481 "project/nnn/src/nnn.c"
                                  };
 ullong_t tfiles = 0;
 blkcnt_t tblocks = 0;
 struct stat *sb;
 FTS *tree = fts_open(path, 
# 5485 "project/nnn/src/nnn.c" 3 4
                           0x010 
# 5485 "project/nnn/src/nnn.c"
                                        | 
# 5485 "project/nnn/src/nnn.c" 3 4
                                          0x040 
# 5485 "project/nnn/src/nnn.c"
                                                   | 
# 5485 "project/nnn/src/nnn.c" 3 4
                                                     0x004
# 5485 "project/nnn/src/nnn.c"
                                                                , 0);
 FTSENT *node;

 while ((node = fts_read(tree))) {
  if (node->fts_info & 
# 5489 "project/nnn/src/nnn.c" 3 4
                      1
# 5489 "project/nnn/src/nnn.c"
                           ) {
   if (g_state.interrupt)
    break;
   continue;
  }

  sb = node->fts_statp;

  if (cfg.apparentsz) {
   if (sb->st_size && (((node->fts_info & 
# 5498 "project/nnn/src/nnn.c" 3 4
                     8
# 5498 "project/nnn/src/nnn.c"
                     ) && (sb->st_nlink <= 1 || test_set_bit((uint_t)sb->st_ino))) || node->fts_info & 
# 5498 "project/nnn/src/nnn.c" 3 4
                     6
# 5498 "project/nnn/src/nnn.c"
                     ))
    tblocks += sb->st_size;
  } else if (sb->st_blocks && (((node->fts_info & 
# 5500 "project/nnn/src/nnn.c" 3 4
                             8
# 5500 "project/nnn/src/nnn.c"
                             ) && (sb->st_nlink <= 1 || test_set_bit((uint_t)sb->st_ino))) || node->fts_info & 
# 5500 "project/nnn/src/nnn.c" 3 4
                             6
# 5500 "project/nnn/src/nnn.c"
                             ))
   tblocks += sb->st_blocks;

  ++tfiles;
 }

 fts_close(tree);

 if (pdata->entnum >= 0)
  pdents[pdata->entnum].blocks = tblocks;

 if (!pdata->mntpoint) {
  core_blocks[pdata->core] += tblocks;
  core_files[pdata->core] += tfiles;
 } else
  core_files[pdata->core] += 1;

 pthread_mutex_lock(&running_mutex);
 threadbmp |= (1 << pdata->core);
 --active_threads;
 pthread_mutex_unlock(&running_mutex);

 return 
# 5522 "project/nnn/src/nnn.c" 3 4
       ((void *)0)
# 5522 "project/nnn/src/nnn.c"
           ;
}

static void dirwalk(char *path, int entnum, 
# 5525 "project/nnn/src/nnn.c" 3 4
                                           _Bool 
# 5525 "project/nnn/src/nnn.c"
                                                mountpoint)
{

 while (active_threads == (4));

 if (g_state.interrupt)
  return;

 pthread_mutex_lock(&running_mutex);
 int core = ffs(threadbmp) - 1;

 threadbmp &= ~(1 << core);
 ++active_threads;
 pthread_mutex_unlock(&running_mutex);

 xstrsncpy(core_data[core].path, path, 
# 5540 "project/nnn/src/nnn.c" 3 4
                                      1024
# 5540 "project/nnn/src/nnn.c"
                                              );
 core_data[core].entnum = entnum;
 core_data[core].core = (ushort_t)core;
 core_data[core].mntpoint = mountpoint;

 pthread_t tid = 0;

 pthread_create(&tid, 
# 5547 "project/nnn/src/nnn.c" 3 4
                     ((void *)0)
# 5547 "project/nnn/src/nnn.c"
                         , du_thread, (void *)&(core_data[core]));

 
# 5549 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 5549 "project/nnn/src/nnn.c"
xlines - 1
# 5549 "project/nnn/src/nnn.c" 3 4
,
# 5549 "project/nnn/src/nnn.c"
0
# 5549 "project/nnn/src/nnn.c" 3 4
)
# 5549 "project/nnn/src/nnn.c"
          ;
 
# 5550 "project/nnn/src/nnn.c" 3 4
waddnstr(stdscr,
# 5550 "project/nnn/src/nnn.c"
xbasename(path)
# 5550 "project/nnn/src/nnn.c" 3 4
,-1)
# 5550 "project/nnn/src/nnn.c"
                       ;
 
# 5551 "project/nnn/src/nnn.c" 3 4
waddnstr(stdscr,
# 5551 "project/nnn/src/nnn.c"
" [^C aborts]\n"
# 5551 "project/nnn/src/nnn.c" 3 4
,-1)
# 5551 "project/nnn/src/nnn.c"
                        ;
 
# 5552 "project/nnn/src/nnn.c" 3 4
wrefresh(stdscr)
# 5552 "project/nnn/src/nnn.c"
         ;
}

static void prep_threads(void)
{
 if (!g_state.duinit) {

  threadbmp >>= (32 - (4));

  core_blocks = calloc((4), sizeof(blkcnt_t));
  core_data = calloc((4), sizeof(thread_data));
  core_files = calloc((4), sizeof(ullong_t));





  g_state.duinit = 
# 5569 "project/nnn/src/nnn.c" 3 4
                  1
# 5569 "project/nnn/src/nnn.c"
                      ;
 } else {
  
# 5571 "project/nnn/src/nnn.c" 3 4
 __builtin___memset_chk (
# 5571 "project/nnn/src/nnn.c"
 core_blocks
# 5571 "project/nnn/src/nnn.c" 3 4
 , 
# 5571 "project/nnn/src/nnn.c"
 0, (4) * sizeof(blkcnt_t)
# 5571 "project/nnn/src/nnn.c" 3 4
 , __builtin_object_size (
# 5571 "project/nnn/src/nnn.c"
 core_blocks
# 5571 "project/nnn/src/nnn.c" 3 4
 , 0))
# 5571 "project/nnn/src/nnn.c"
                                                          ;
  
# 5572 "project/nnn/src/nnn.c" 3 4
 __builtin___memset_chk (
# 5572 "project/nnn/src/nnn.c"
 core_data
# 5572 "project/nnn/src/nnn.c" 3 4
 , 
# 5572 "project/nnn/src/nnn.c"
 0, (4) * sizeof(thread_data)
# 5572 "project/nnn/src/nnn.c" 3 4
 , __builtin_object_size (
# 5572 "project/nnn/src/nnn.c"
 core_data
# 5572 "project/nnn/src/nnn.c" 3 4
 , 0))
# 5572 "project/nnn/src/nnn.c"
                                                           ;
  
# 5573 "project/nnn/src/nnn.c" 3 4
 __builtin___memset_chk (
# 5573 "project/nnn/src/nnn.c"
 core_files
# 5573 "project/nnn/src/nnn.c" 3 4
 , 
# 5573 "project/nnn/src/nnn.c"
 0, (4) * sizeof(ullong_t)
# 5573 "project/nnn/src/nnn.c" 3 4
 , __builtin_object_size (
# 5573 "project/nnn/src/nnn.c"
 core_files
# 5573 "project/nnn/src/nnn.c" 3 4
 , 0))
# 5573 "project/nnn/src/nnn.c"
                                                         ;
 }
}


static 
# 5578 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 5578 "project/nnn/src/nnn.c"
           selforparent(const char *path)
{
 return path[0] == '.' && (path[1] == '\0' || (path[1] == '.' && path[2] == '\0'));
}

static int dentfill(char *path, struct entry **ppdents)
{
 uchar_t entflags = 0;
 int flags = 0;
 struct dirent *dp;
 char *namep, *pnb, *buf;
 struct entry *dentp;
 size_t off = 0, namebuflen = 0x800;
 struct stat sb_path, sb;
 DIR *dirp = opendir(path);

 ndents = 0;

 ;

 if (!dirp)
  return 0;

 int fd = dirfd(dirp);

 if (cfg.blkorder) {
  num_files = 0;
  dir_blocks = 0;
  buf = g_buf;

  if (fstatat(fd, path, &sb_path, 0) == -1)
   goto exit;

  if (!ihashbmp) {
   ihashbmp = calloc(1, ((0xFFFFFF) >> 6) << 3);
   if (!ihashbmp)
    goto exit;
  } else
   
# 5616 "project/nnn/src/nnn.c" 3 4
  __builtin___memset_chk (
# 5616 "project/nnn/src/nnn.c"
  ihashbmp
# 5616 "project/nnn/src/nnn.c" 3 4
  , 
# 5616 "project/nnn/src/nnn.c"
  0, ((0xFFFFFF) >> 6) << 3
# 5616 "project/nnn/src/nnn.c" 3 4
  , __builtin_object_size (
# 5616 "project/nnn/src/nnn.c"
  ihashbmp
# 5616 "project/nnn/src/nnn.c" 3 4
  , 0))
# 5616 "project/nnn/src/nnn.c"
                                       ;

  prep_threads();

  
# 5620 "project/nnn/src/nnn.c" 3 4
 wattr_on(stdscr, (attr_t)(((
# 5620 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 5620 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8))), ((void *)0))
# 5620 "project/nnn/src/nnn.c"
                                   ;
 }





 dp = readdir(dirp);
 if (!dp)
  goto exit;




 if (cfg.blkorder || dp->d_type == 
# 5634 "project/nnn/src/nnn.c" 3 4
                                  0
# 5634 "project/nnn/src/nnn.c"
                                            ) {







  flags = 
# 5642 "project/nnn/src/nnn.c" 3 4
         0x0020
# 5642 "project/nnn/src/nnn.c"
                            ;
 }


 do {
  namep = dp->d_name;

  if (selforparent(namep))
   continue;

  if (!cfg.showhidden && namep[0] == '.') {
   if (!cfg.blkorder)
    continue;

   if (fstatat(fd, namep, &sb, 
# 5656 "project/nnn/src/nnn.c" 3 4
                              0x0020
# 5656 "project/nnn/src/nnn.c"
                                                 ) == -1)
    continue;

   if (
# 5659 "project/nnn/src/nnn.c" 3 4
      (((
# 5659 "project/nnn/src/nnn.c"
      sb.st_mode
# 5659 "project/nnn/src/nnn.c" 3 4
      ) & 0170000) == 0040000)
# 5659 "project/nnn/src/nnn.c"
                         ) {
    if (sb_path.st_dev == sb.st_dev) {
     mkpath(path, namep, buf);
     dirwalk(buf, -1, 
# 5662 "project/nnn/src/nnn.c" 3 4
                     0
# 5662 "project/nnn/src/nnn.c"
                          );

     if (g_state.interrupt)
      goto exit;

    }
   } else {

    if (sb.st_nlink <= 1 || test_set_bit((uint_t)sb.st_ino))
     dir_blocks += (cfg.apparentsz ? sb.st_size : sb.st_blocks);
    ++num_files;
   }

   continue;
  }

  if (fstatat(fd, namep, &sb, flags) == -1) {
   if (flags || (fstatat(fd, namep, &sb, 
# 5679 "project/nnn/src/nnn.c" 3 4
                                        0x0020
# 5679 "project/nnn/src/nnn.c"
                                                           ) == -1)) {

    ;
    if (!flags) {
     ;
     ;
    }

    entflags = 0x08;
    
# 5688 "project/nnn/src/nnn.c" 3 4
   __builtin___memset_chk (
# 5688 "project/nnn/src/nnn.c"
   &sb
# 5688 "project/nnn/src/nnn.c" 3 4
   , 
# 5688 "project/nnn/src/nnn.c"
   0, sizeof(struct stat)
# 5688 "project/nnn/src/nnn.c" 3 4
   , __builtin_object_size (
# 5688 "project/nnn/src/nnn.c"
   &sb
# 5688 "project/nnn/src/nnn.c" 3 4
   , 0))
# 5688 "project/nnn/src/nnn.c"
                                      ;
   } else
    entflags = 0x04;
  }

  if (ndents == total_dents) {
   if (cfg.blkorder)
    while (active_threads);

   total_dents += 64;
   *ppdents = xrealloc(*ppdents, total_dents * sizeof(**ppdents));
   if (!*ppdents) {
    free(pnamebuf);
    closedir(dirp);
    printerr(5702);
   }
   ;
  }


  if (namebuflen - off < 
# 5708 "project/nnn/src/nnn.c" 3 4
                        255 
# 5708 "project/nnn/src/nnn.c"
                                 + 1) {
   namebuflen += 0x800;

   pnb = pnamebuf;
   pnamebuf = (char *)xrealloc(pnamebuf, namebuflen);
   if (!pnamebuf) {
    free(*ppdents);
    closedir(dirp);
    printerr(5716);
   }
   ;


   if (pnb != pnamebuf) {
    dentp = *ppdents;
    dentp->name = pnamebuf;

    for (int count = 1; count < ndents; ++dentp, ++count)

     (dentp + 1)->name = (char *)((size_t)dentp->name + dentp->nlen);
   }
  }

  dentp = *ppdents + ndents;


  dentp->name = (char *)((size_t)pnamebuf + off);
  dentp->nlen = xstrsncpy(dentp->name, namep, 
# 5735 "project/nnn/src/nnn.c" 3 4
                                             255 
# 5735 "project/nnn/src/nnn.c"
                                                      + 1);
  off += dentp->nlen;


  if (cfg.timetype == 2) {
   dentp->sec = sb.
# 5740 "project/nnn/src/nnn.c" 3 4
                  st_mtimespec.tv_sec
# 5740 "project/nnn/src/nnn.c"
                          ;

   dentp->nsec = (uint_t)sb.st_mtimespec.tv_nsec;



  } else if (cfg.timetype == 0) {
   dentp->sec = sb.
# 5747 "project/nnn/src/nnn.c" 3 4
                  st_atimespec.tv_sec
# 5747 "project/nnn/src/nnn.c"
                          ;

   dentp->nsec = (uint_t)sb.st_atimespec.tv_nsec;



  } else {
   dentp->sec = sb.
# 5754 "project/nnn/src/nnn.c" 3 4
                  st_ctimespec.tv_sec
# 5754 "project/nnn/src/nnn.c"
                          ;

   dentp->nsec = (uint_t)sb.st_ctimespec.tv_nsec;



  }


  if (!flags && dp->d_type == 
# 5763 "project/nnn/src/nnn.c" 3 4
                             10
# 5763 "project/nnn/src/nnn.c"
                                   ) {

   dentp->mode = (sb.st_mode & ~
# 5765 "project/nnn/src/nnn.c" 3 4
                               0170000
# 5765 "project/nnn/src/nnn.c"
                                     ) | 
# 5765 "project/nnn/src/nnn.c" 3 4
                                         0120000
# 5765 "project/nnn/src/nnn.c"
                                                ;
   dentp->size = listpath ? sb.st_size : 0;
  } else {
   dentp->mode = sb.st_mode;
   dentp->size = sb.st_size;
  }






  dentp->uid = sb.st_uid;
  dentp->gid = sb.st_gid;


  dentp->flags = 
# 5781 "project/nnn/src/nnn.c" 3 4
                (((
# 5781 "project/nnn/src/nnn.c"
                sb.st_mode
# 5781 "project/nnn/src/nnn.c" 3 4
                ) & 0170000) == 0040000) 
# 5781 "project/nnn/src/nnn.c"
                                    ? 0 : ((sb.st_nlink > 1) ? 0x02 : 0);
  if (entflags) {
   dentp->flags |= entflags;
   entflags = 0;
  }

  if (cfg.blkorder) {
   if (
# 5788 "project/nnn/src/nnn.c" 3 4
      (((
# 5788 "project/nnn/src/nnn.c"
      sb.st_mode
# 5788 "project/nnn/src/nnn.c" 3 4
      ) & 0170000) == 0040000)
# 5788 "project/nnn/src/nnn.c"
                         ) {
    mkpath(path, namep, buf);


    dirwalk(buf, ndents, (sb_path.st_dev != sb.st_dev));

    if (g_state.interrupt)
     goto exit;
   } else {
    dentp->blocks = (cfg.apparentsz ? sb.st_size : sb.st_blocks);

    if (sb.st_nlink <= 1 || test_set_bit((uint_t)sb.st_ino))
     dir_blocks += dentp->blocks;
    ++num_files;
   }
  }

  if (flags) {

   if (
# 5807 "project/nnn/src/nnn.c" 3 4
      (((
# 5807 "project/nnn/src/nnn.c"
      sb.st_mode
# 5807 "project/nnn/src/nnn.c" 3 4
      ) & 0170000) == 0120000)
# 5807 "project/nnn/src/nnn.c"
                         ) {
    sb.st_mode = 0;
    fstatat(fd, namep, &sb, 0);
   }

   if (
# 5812 "project/nnn/src/nnn.c" 3 4
      (((
# 5812 "project/nnn/src/nnn.c"
      sb.st_mode
# 5812 "project/nnn/src/nnn.c" 3 4
      ) & 0170000) == 0040000)
# 5812 "project/nnn/src/nnn.c"
                         )
    dentp->flags |= 0x01;

  } else if (dp->d_type == 
# 5815 "project/nnn/src/nnn.c" 3 4
                          4 
# 5815 "project/nnn/src/nnn.c"
                                 || ((dp->d_type == 
# 5815 "project/nnn/src/nnn.c" 3 4
                                                    10
      
# 5816 "project/nnn/src/nnn.c"
     || dp->d_type == 
# 5816 "project/nnn/src/nnn.c" 3 4
                      0
# 5816 "project/nnn/src/nnn.c"
                                ) && 
# 5816 "project/nnn/src/nnn.c" 3 4
                                     (((
# 5816 "project/nnn/src/nnn.c"
                                     sb.st_mode
# 5816 "project/nnn/src/nnn.c" 3 4
                                     ) & 0170000) == 0040000)
# 5816 "project/nnn/src/nnn.c"
                                                        )) {
   dentp->flags |= 0x01;

  }

  ++ndents;
 } while ((dp = readdir(dirp)));

exit:
 if (cfg.blkorder) {
  while (active_threads);

  
# 5828 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((
# 5828 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 5828 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8))), ((void *)0))
# 5828 "project/nnn/src/nnn.c"
                                    ;
  for (int i = 0; i < (4); ++i) {
   num_files += core_files[i];
   dir_blocks += core_blocks[i];
  }
 }


 if (closedir(dirp) == -1)
  printerr(5837);

 return ndents;
}

static void populate(char *path, char *lastname)
{






 ndents = dentfill(path, &pdents);
 if (!ndents)
  return;

 qsort((pdents), (ndents), sizeof(*(pdents)), (entrycmpfn));
# 5863 "project/nnn/src/nnn.c"
 move_cursor(*lastname ? dentfind(lastname, ndents) : 0, 0);


 last_curscroll = -1;
}


static void notify_fifo(
# 5870 "project/nnn/src/nnn.c" 3 4
                       _Bool 
# 5870 "project/nnn/src/nnn.c"
                            force)
{
 if (!fifopath)
  return;

 if (fifofd == -1) {
  fifofd = open(fifopath, 
# 5876 "project/nnn/src/nnn.c" 3 4
                         0x0001
# 5876 "project/nnn/src/nnn.c"
                                 |
# 5876 "project/nnn/src/nnn.c" 3 4
                                  0x00000004
# 5876 "project/nnn/src/nnn.c"
                                            |
# 5876 "project/nnn/src/nnn.c" 3 4
                                             0x01000000
# 5876 "project/nnn/src/nnn.c"
                                                      );
  if (fifofd == -1) {
   if (
# 5878 "project/nnn/src/nnn.c" 3 4
      (*__error()) 
# 5878 "project/nnn/src/nnn.c"
            != 
# 5878 "project/nnn/src/nnn.c" 3 4
               6
# 5878 "project/nnn/src/nnn.c"
                    )


    fifopath = 
# 5881 "project/nnn/src/nnn.c" 3 4
              ((void *)0)
# 5881 "project/nnn/src/nnn.c"
                  ;
   return;
  }
 }

 static struct entry lastentry;

 if (!force && !memcmp(&lastentry, &pdents[cur], sizeof(struct entry)))
  return;

 lastentry = pdents[cur];

 char path[
# 5893 "project/nnn/src/nnn.c" 3 4
          1024
# 5893 "project/nnn/src/nnn.c"
                  ];
 size_t len = mkpath(g_ctx[cfg.curctx].c_path, ndents ? pdents[cur].name : "", path);

 path[len - 1] = '\n';

 ssize_t ret = write(fifofd, path, len);

 if (ret != (ssize_t)len && !(ret == -1 && (
# 5900 "project/nnn/src/nnn.c" 3 4
                                           (*__error()) 
# 5900 "project/nnn/src/nnn.c"
                                                 == 
# 5900 "project/nnn/src/nnn.c" 3 4
                                                    35 
# 5900 "project/nnn/src/nnn.c"
                                                           || 
# 5900 "project/nnn/src/nnn.c" 3 4
                                                              (*__error()) 
# 5900 "project/nnn/src/nnn.c"
                                                                    == 
# 5900 "project/nnn/src/nnn.c" 3 4
                                                                       32
# 5900 "project/nnn/src/nnn.c"
                                                                            ))) {
  ;
 }
}

static void send_to_explorer(int *presel)
{
 if (nselected) {
  int fd = open(fifopath, 
# 5908 "project/nnn/src/nnn.c" 3 4
                         0x0001
# 5908 "project/nnn/src/nnn.c"
                                 |
# 5908 "project/nnn/src/nnn.c" 3 4
                                  0x00000004
# 5908 "project/nnn/src/nnn.c"
                                            |
# 5908 "project/nnn/src/nnn.c" 3 4
                                             0x01000000
# 5908 "project/nnn/src/nnn.c"
                                                      , 0600);
  if ((fd == -1) || (seltofile(fd, 
# 5909 "project/nnn/src/nnn.c" 3 4
                                  ((void *)0)
# 5909 "project/nnn/src/nnn.c"
                                      ) != (size_t)(selbufpos)))
   printwait(strerror(
# 5910 "project/nnn/src/nnn.c" 3 4
  (*__error())
# 5910 "project/nnn/src/nnn.c"
  ), presel);
  else {
   resetselind();
   clearselection();
  }
  if (fd > 1)
   close(fd);
 } else
  notify_fifo(
# 5918 "project/nnn/src/nnn.c" 3 4
             1
# 5918 "project/nnn/src/nnn.c"
                 );
}


static void move_cursor(int target, int ignore_scrolloff)
{
 int onscreen = xlines - 4;

 target = ((0) > (((ndents - 1) < (target) ? (ndents - 1) : (target))) ? (0) : (((ndents - 1) < (target) ? (ndents - 1) : (target))));
 last_curscroll = curscroll;
 last = cur;
 cur = target;

 if (!ignore_scrolloff) {
  int delta = target - last;
  int scrolloff = ((3) < (onscreen >> 1) ? (3) : (onscreen >> 1));
# 5942 "project/nnn/src/nnn.c"
  if (((cur < (curscroll + scrolloff)) && delta < 0)
      || ((cur > (curscroll + onscreen - scrolloff - 1)) && delta > 0))
   curscroll += delta;
 }
 curscroll = ((curscroll) < (((cur) < (ndents - onscreen) ? (cur) : (ndents - onscreen))) ? (curscroll) : (((cur) < (ndents - onscreen) ? (cur) : (ndents - onscreen))));
 curscroll = ((curscroll) > (((cur - (onscreen - 1)) > (0) ? (cur - (onscreen - 1)) : (0))) ? (curscroll) : (((cur - (onscreen - 1)) > (0) ? (cur - (onscreen - 1)) : (0))));


 if (!g_state.fifomode)
  notify_fifo(
# 5951 "project/nnn/src/nnn.c" 3 4
             0
# 5951 "project/nnn/src/nnn.c"
                  );

}

static void handle_screen_move(enum action sel)
{
 int onscreen;

 switch (sel) {
 case SEL_NEXT:
  if (ndents && (cfg.rollover || (cur != ndents - 1)))
   move_cursor((cur + 1) % ndents, 0);
  break;
 case SEL_PREV:
  if (ndents && (cfg.rollover || cur))
   move_cursor((cur + ndents - 1) % ndents, 0);
  break;
 case SEL_PGDN:
  onscreen = xlines - 4;
  move_cursor(curscroll + (onscreen - 1), 1);
  curscroll += onscreen - 1;
  break;
 case SEL_CTRL_D:
  onscreen = xlines - 4;
  move_cursor(curscroll + (onscreen - 1), 1);
  curscroll += onscreen >> 1;
  break;
 case SEL_PGUP:
  onscreen = xlines - 4;
  move_cursor(curscroll, 1);
  curscroll -= onscreen - 1;
  break;
 case SEL_CTRL_U:
  onscreen = xlines - 4;
  move_cursor(curscroll, 1);
  curscroll -= onscreen >> 1;
  break;
 case SEL_HOME:
  move_cursor(0, 1);
  break;
 case SEL_END:
  move_cursor(ndents - 1, 1);
  break;
 default:
 {
  int c = get_input(messages[38]);

  if (!c)
   break;

  c = (((c) >= 'a' && (c) <= 'z') ? ((c) - 'a' + 'A') : (c));

  int r = (c == (((*pdents[cur].name) >= 'a' && (*pdents[cur].name) <= 'z') ? ((*pdents[cur].name) - 'a' + 'A') : (*pdents[cur].name))) ? (cur + 1) : 0;

  for (; r < ndents; ++r) {
   if (((c == '\'') && !(pdents[r].flags & 0x01))
       || (c == (((*pdents[r].name) >= 'a' && (*pdents[r].name) <= 'z') ? ((*pdents[r].name) - 'a' + 'A') : (*pdents[r].name)))) {
    move_cursor((r) % ndents, 0);
    break;
   }
  }
  break;
 }
 }
}

static void handle_openwith(const char *path, const char *name, char *newpath, char *tmp)
{

 int r = get_input(messages[12]);

 r = (r == 'c' ? (0x08 | 0x01) :
      (r == 'g' ? 0x02 | 0x04 | 0x01 : 0));
 if (r) {
  mkpath(path, name, newpath);
  spawn(tmp, newpath, 
# 6026 "project/nnn/src/nnn.c" 3 4
                     ((void *)0)
# 6026 "project/nnn/src/nnn.c"
                         , 
# 6026 "project/nnn/src/nnn.c" 3 4
                           ((void *)0)
# 6026 "project/nnn/src/nnn.c"
                               , r);
 }
}

static void copynextname(char *lastname)
{
 if (cur) {
  cur += (cur != (ndents - 1)) ? 1 : -1;
  xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 6034 "project/nnn/src/nnn.c" 3 4
 255 
# 6034 "project/nnn/src/nnn.c"
 + 1);
 } else
  lastname[0] = '\0';
}

static int handle_context_switch(enum action sel)
{
 int r = -1;

 switch (sel) {
 case SEL_CYCLE:
 case SEL_CYCLER:

  r = cfg.curctx;
  if (sel == SEL_CYCLE)
   do
    r = (r + 1) & ~4;
   while (!g_ctx[r].c_cfg.ctxactive);
  else {
   do
    r = (r + 1) & ~4;
   while (g_ctx[r].c_cfg.ctxactive && (r != cfg.curctx));

   if (r == cfg.curctx)
    do
     r = (r + (4 - 1)) & (4 - 1);
    while (!g_ctx[r].c_cfg.ctxactive);
  }
 default:
  if (sel >= SEL_CTX1)
   r = sel - SEL_CTX1;

  if (cfg.curctx == r) {
   if (sel == SEL_CYCLE)
    (r == 4 - 1) ? (r = 0) : ++r;
   else if (sel == SEL_CYCLER)
    (r == 0) ? (r = 4 - 1) : --r;
   else
    return -1;
  }
 }

 return r;
}

static int set_sort_flags(int r)
{
 
# 6081 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6081 "project/nnn/src/nnn.c"
     session = (r == '\0');
 
# 6082 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6082 "project/nnn/src/nnn.c"
     reverse = 
# 6082 "project/nnn/src/nnn.c" 3 4
               0
# 6082 "project/nnn/src/nnn.c"
                    ;

 if (((r) >= 'A' && (r) <= 'Z') && (r != 'R') && (r != 'C')) {
  reverse = 
# 6085 "project/nnn/src/nnn.c" 3 4
           1
# 6085 "project/nnn/src/nnn.c"
               ;
  r = (((r) >= 'A' && (r) <= 'Z') ? ((r) - 'A' + 'a') : (r));
 }


 if (session) {
  if (cfg.apparentsz) {
   cfg.apparentsz = 0;
   r = 'a';
  } else if (cfg.blkorder) {
   cfg.blkorder = 0;
   r = 'd';
  }

  if (cfg.version)
   namecmpfn = &xstrverscasecmp;

  if (cfg.reverse)
   entrycmpfn = &reventrycmp;
 } else if (r == (('T') & 0x1f)) {

  if (cfg.timeorder)
   r = 's';
  else if (cfg.sizeorder)
   r = 'c';
  else
   r = 't';
 }

 switch (r) {
 case 'a':
  cfg.apparentsz ^= 1;
  if (cfg.apparentsz) {
   cfg.blkorder = 1;
   blk_shift = 0;
  } else
   cfg.blkorder = 0;

 case 'd':
  if (r == 'd') {
   if (!cfg.apparentsz)
    cfg.blkorder ^= 1;
   cfg.apparentsz = 0;
   blk_shift = ffs(
# 6128 "project/nnn/src/nnn.c" 3 4
                  512
# 6128 "project/nnn/src/nnn.c"
                           ) - 1;
  }

  if (cfg.blkorder)
   cfg.showdetail = 1;
  cfg.timeorder = 0;
  cfg.sizeorder = 0;
  cfg.extnorder = 0;
  if (!session) {
   cfg.reverse = 0;
   entrycmpfn = &entrycmp;
  }
  endselection(
# 6140 "project/nnn/src/nnn.c" 3 4
              1
# 6140 "project/nnn/src/nnn.c"
                  );
  break;
 case 'c':
  cfg.timeorder = 0;
  cfg.sizeorder = 0;
  cfg.apparentsz = 0;
  cfg.blkorder = 0;
  cfg.extnorder = 0;
  cfg.reverse = 0;
  cfg.version = 0;
  entrycmpfn = &entrycmp;
  namecmpfn = &xstricmp;
  break;
 case 'e':
  cfg.extnorder ^= 1;
  cfg.sizeorder = 0;
  cfg.timeorder = 0;
  cfg.apparentsz = 0;
  cfg.blkorder = 0;
  cfg.reverse = 0;
  entrycmpfn = &entrycmp;
  break;
 case 'r':
  cfg.reverse ^= 1;
  entrycmpfn = cfg.reverse ? &reventrycmp : &entrycmp;
  break;
 case 's':
  cfg.sizeorder ^= 1;
  cfg.timeorder = 0;
  cfg.apparentsz = 0;
  cfg.blkorder = 0;
  cfg.extnorder = 0;
  cfg.reverse = 0;
  entrycmpfn = &entrycmp;
  break;
 case 't':
  cfg.timeorder ^= 1;
  cfg.sizeorder = 0;
  cfg.apparentsz = 0;
  cfg.blkorder = 0;
  cfg.extnorder = 0;
  cfg.reverse = 0;
  entrycmpfn = &entrycmp;
  break;
 case 'v':
  cfg.version ^= 1;
  namecmpfn = cfg.version ? &xstrverscasecmp : &xstricmp;
  cfg.timeorder = 0;
  cfg.sizeorder = 0;
  cfg.apparentsz = 0;
  cfg.blkorder = 0;
  cfg.extnorder = 0;
  break;
 default:
  return 0;
 }

 if (reverse) {
  cfg.reverse = 1;
  entrycmpfn = &reventrycmp;
 }

 cfgsort[cfg.curctx] = (uchar_t)r;

 return r;
}

static 
# 6207 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 6207 "project/nnn/src/nnn.c"
           set_time_type(int *presel)
{
 
# 6209 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6209 "project/nnn/src/nnn.c"
     ret = 
# 6209 "project/nnn/src/nnn.c" 3 4
           0
# 6209 "project/nnn/src/nnn.c"
                ;
 char buf[] = "'a'ccess / 'c'hange / 'm'od [ ]";

 buf[sizeof(buf) - 3] = cfg.timetype == 2 ? 'm' : (cfg.timetype == 0 ? 'a' : 'c');

 int r = get_input(buf);

 if (r == 'a' || r == 'c' || r == 'm') {
  r = (r == 'm') ? 2 : ((r == 'a') ? 0 : 1);
  if (cfg.timetype != r) {
   cfg.timetype = r;

   if (cfg.filtermode || g_ctx[cfg.curctx].c_fltr[1])
    *presel = '/';

   ret = 
# 6224 "project/nnn/src/nnn.c" 3 4
        1
# 6224 "project/nnn/src/nnn.c"
            ;
  } else
   r = 41;
 } else
  r = 40;

 if (!ret)
  printwait(messages[r], presel);

 return ret;
}

static void statusbar(char *path)
{
 int i = 0, len = 0;
 char *ptr;
 pEntry pent = &pdents[cur];

 if (!ndents) {
  printmsg("0/0");
  return;
 }


 if (
# 6248 "project/nnn/src/nnn.c" 3 4
    (((
# 6248 "project/nnn/src/nnn.c"
    pent->mode
# 6248 "project/nnn/src/nnn.c" 3 4
    ) & 0170000) == 0100000)
# 6248 "project/nnn/src/nnn.c"
                       ) {
  i = (int)(pent->nlen - 1);
  ptr = xextension(pent->name, i);
  if (ptr)
   len = i - (ptr - pent->name);
  if (!ptr || len > 5 || len < 2)
   ptr = "\b";
 } else
  ptr = "\b";

 
# 6258 "project/nnn/src/nnn.c" 3 4
wattr_on(stdscr, (attr_t)(((
# 6258 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 6258 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 6258 "project/nnn/src/nnn.c"
                                  ;

 if (cfg.fileinfo && get_output("file", "-b", pdents[cur].name, -1, 
# 6260 "project/nnn/src/nnn.c" 3 4
                                                                   0
# 6260 "project/nnn/src/nnn.c"
                                                                        , 
# 6260 "project/nnn/src/nnn.c" 3 4
                                                                          0
# 6260 "project/nnn/src/nnn.c"
                                                                               ))
  
# 6261 "project/nnn/src/nnn.c" 3 4
 (wmove(stdscr,
# 6261 "project/nnn/src/nnn.c"
 xlines - 2
# 6261 "project/nnn/src/nnn.c" 3 4
 ,
# 6261 "project/nnn/src/nnn.c"
 2
# 6261 "project/nnn/src/nnn.c" 3 4
 ) == (-1) ? (-1) : waddnstr(stdscr,
# 6261 "project/nnn/src/nnn.c"
 g_buf
# 6261 "project/nnn/src/nnn.c" 3 4
 ,-1))
# 6261 "project/nnn/src/nnn.c"
                               ;

 
# 6263 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 6263 "project/nnn/src/nnn.c"
xlines - 1
# 6263 "project/nnn/src/nnn.c" 3 4
,
# 6263 "project/nnn/src/nnn.c"
0
# 6263 "project/nnn/src/nnn.c" 3 4
)
# 6263 "project/nnn/src/nnn.c"
          ;

 printw("%d/%s ", cur + 1, xitoa(ndents));

 if (g_state.selmode || nselected) {
  
# 6268 "project/nnn/src/nnn.c" 3 4
 wattr_on(stdscr, (attr_t)(((1U) << ((10) + 8))), ((void *)0))
# 6268 "project/nnn/src/nnn.c"
                  ;
  
# 6269 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6269 "project/nnn/src/nnn.c"
 ' '
# 6269 "project/nnn/src/nnn.c" 3 4
 )
# 6269 "project/nnn/src/nnn.c"
           ;
  if (g_state.rangesel)
   
# 6271 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6271 "project/nnn/src/nnn.c"
  '*'
# 6271 "project/nnn/src/nnn.c" 3 4
  )
# 6271 "project/nnn/src/nnn.c"
            ;
  else if (g_state.selmode)
   
# 6273 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6273 "project/nnn/src/nnn.c"
  '+'
# 6273 "project/nnn/src/nnn.c" 3 4
  )
# 6273 "project/nnn/src/nnn.c"
            ;
  if (nselected)
   
# 6275 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6275 "project/nnn/src/nnn.c"
  xitoa(nselected)
# 6275 "project/nnn/src/nnn.c" 3 4
  ,-1)
# 6275 "project/nnn/src/nnn.c"
                          ;
  
# 6276 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6276 "project/nnn/src/nnn.c"
 ' '
# 6276 "project/nnn/src/nnn.c" 3 4
 )
# 6276 "project/nnn/src/nnn.c"
           ;
  
# 6277 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((1U) << ((10) + 8))), ((void *)0))
# 6277 "project/nnn/src/nnn.c"
                   ;
  
# 6278 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6278 "project/nnn/src/nnn.c"
 ' '
# 6278 "project/nnn/src/nnn.c" 3 4
 )
# 6278 "project/nnn/src/nnn.c"
           ;
 }

 if (cfg.blkorder) {
  char buf[24];

  xstrsncpy(buf, coolsize(dir_blocks << blk_shift), 12);

  printw("%cu:%s free:%s files:%llu %lluB %s\n",
         (cfg.apparentsz ? 'a' : 'd'), buf, coolsize(get_fs_info(path, 0)),
         num_files, (ullong_t)pent->blocks << blk_shift, ptr);
 } else {
  char sort[] = "\0\0\0\0\0";

  if (getorderstr(sort))
   
# 6293 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6293 "project/nnn/src/nnn.c"
  sort
# 6293 "project/nnn/src/nnn.c" 3 4
  ,-1)
# 6293 "project/nnn/src/nnn.c"
              ;


  print_time(&pent->sec);

  
# 6298 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6298 "project/nnn/src/nnn.c"
 ' '
# 6298 "project/nnn/src/nnn.c" 3 4
 )
# 6298 "project/nnn/src/nnn.c"
           ;
  
# 6299 "project/nnn/src/nnn.c" 3 4
 waddnstr(stdscr,
# 6299 "project/nnn/src/nnn.c"
 get_lsperms(pent->mode)
# 6299 "project/nnn/src/nnn.c" 3 4
 ,-1)
# 6299 "project/nnn/src/nnn.c"
                                ;
  
# 6300 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6300 "project/nnn/src/nnn.c"
 ' '
# 6300 "project/nnn/src/nnn.c" 3 4
 )
# 6300 "project/nnn/src/nnn.c"
           ;

  if (g_state.uidgid) {
   
# 6303 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6303 "project/nnn/src/nnn.c"
  getpwname(pent->uid)
# 6303 "project/nnn/src/nnn.c" 3 4
  ,-1)
# 6303 "project/nnn/src/nnn.c"
                              ;
   
# 6304 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6304 "project/nnn/src/nnn.c"
  ':'
# 6304 "project/nnn/src/nnn.c" 3 4
  )
# 6304 "project/nnn/src/nnn.c"
            ;
   
# 6305 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6305 "project/nnn/src/nnn.c"
  getgrname(pent->gid)
# 6305 "project/nnn/src/nnn.c" 3 4
  ,-1)
# 6305 "project/nnn/src/nnn.c"
                              ;
   
# 6306 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6306 "project/nnn/src/nnn.c"
  ' '
# 6306 "project/nnn/src/nnn.c" 3 4
  )
# 6306 "project/nnn/src/nnn.c"
            ;
  }

  if (
# 6309 "project/nnn/src/nnn.c" 3 4
     (((
# 6309 "project/nnn/src/nnn.c"
     pent->mode
# 6309 "project/nnn/src/nnn.c" 3 4
     ) & 0170000) == 0120000)
# 6309 "project/nnn/src/nnn.c"
                        ) {
   if (!cfg.fileinfo) {
    i = readlink(pent->name, g_buf, 
# 6311 "project/nnn/src/nnn.c" 3 4
                                   1024
# 6311 "project/nnn/src/nnn.c"
                                           );
    
# 6312 "project/nnn/src/nnn.c" 3 4
   waddnstr(stdscr,
# 6312 "project/nnn/src/nnn.c"
   coolsize(i >= 0 ? i : pent->size)
# 6312 "project/nnn/src/nnn.c" 3 4
   ,-1)
# 6312 "project/nnn/src/nnn.c"
                                            ;
    if (i > 1) {
     int y;

     
# 6316 "project/nnn/src/nnn.c" 3 4
    waddnstr(stdscr,
# 6316 "project/nnn/src/nnn.c"
    " ->"
# 6316 "project/nnn/src/nnn.c" 3 4
    ,-1)
# 6316 "project/nnn/src/nnn.c"
                 ;
     
# 6317 "project/nnn/src/nnn.c" 3 4
    (
# 6317 "project/nnn/src/nnn.c"
    len 
# 6317 "project/nnn/src/nnn.c" 3 4
    = getcury(
# 6317 "project/nnn/src/nnn.c"
    stdscr
# 6317 "project/nnn/src/nnn.c" 3 4
    ), 
# 6317 "project/nnn/src/nnn.c"
    y 
# 6317 "project/nnn/src/nnn.c" 3 4
    = getcurx(
# 6317 "project/nnn/src/nnn.c"
    stdscr
# 6317 "project/nnn/src/nnn.c" 3 4
    ))
# 6317 "project/nnn/src/nnn.c"
                         ;
     i = ((i) < (xcols - y) ? (i) : (xcols - y));
     g_buf[i] = '\0';
     
# 6320 "project/nnn/src/nnn.c" 3 4
    waddnstr(stdscr,
# 6320 "project/nnn/src/nnn.c"
    g_buf
# 6320 "project/nnn/src/nnn.c" 3 4
    ,-1)
# 6320 "project/nnn/src/nnn.c"
                 ;
    }
   }
  } else {
   
# 6324 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6324 "project/nnn/src/nnn.c"
  coolsize(pent->size)
# 6324 "project/nnn/src/nnn.c" 3 4
  ,-1)
# 6324 "project/nnn/src/nnn.c"
                              ;
   
# 6325 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6325 "project/nnn/src/nnn.c"
  ' '
# 6325 "project/nnn/src/nnn.c" 3 4
  )
# 6325 "project/nnn/src/nnn.c"
            ;
   
# 6326 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6326 "project/nnn/src/nnn.c"
  ptr
# 6326 "project/nnn/src/nnn.c" 3 4
  ,-1)
# 6326 "project/nnn/src/nnn.c"
             ;
   if (pent->flags & 0x02) {
    struct stat sb;

    if (stat(pent->name, &sb) != -1) {
     
# 6331 "project/nnn/src/nnn.c" 3 4
    waddch(stdscr,
# 6331 "project/nnn/src/nnn.c"
    ' '
# 6331 "project/nnn/src/nnn.c" 3 4
    )
# 6331 "project/nnn/src/nnn.c"
              ;
     
# 6332 "project/nnn/src/nnn.c" 3 4
    waddnstr(stdscr,
# 6332 "project/nnn/src/nnn.c"
    xitoa((int)sb.st_nlink)
# 6332 "project/nnn/src/nnn.c" 3 4
    ,-1)
# 6332 "project/nnn/src/nnn.c"
                                   ;
     
# 6333 "project/nnn/src/nnn.c" 3 4
    waddch(stdscr,
# 6333 "project/nnn/src/nnn.c"
    '-'
# 6333 "project/nnn/src/nnn.c" 3 4
    )
# 6333 "project/nnn/src/nnn.c"
              ;
     
# 6334 "project/nnn/src/nnn.c" 3 4
    waddnstr(stdscr,
# 6334 "project/nnn/src/nnn.c"
    xitoa((int)sb.st_ino)
# 6334 "project/nnn/src/nnn.c" 3 4
    ,-1)
# 6334 "project/nnn/src/nnn.c"
                                 ;
    }
   }
  }
  
# 6338 "project/nnn/src/nnn.c" 3 4
 wclrtoeol(stdscr)
# 6338 "project/nnn/src/nnn.c"
           ;
 }

 
# 6341 "project/nnn/src/nnn.c" 3 4
wattr_off(stdscr, (attr_t)(((
# 6341 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 6341 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 6341 "project/nnn/src/nnn.c"
                                   ;

 
# 6343 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 6343 "project/nnn/src/nnn.c"
cur + 2 - curscroll
# 6343 "project/nnn/src/nnn.c" 3 4
,
# 6343 "project/nnn/src/nnn.c"
0
# 6343 "project/nnn/src/nnn.c" 3 4
)
# 6343 "project/nnn/src/nnn.c"
          ;
}

static inline void markhovered(void)
{
 if (cfg.showdetail && ndents) {
  
# 6349 "project/nnn/src/nnn.c" 3 4
 wmove(stdscr,
# 6349 "project/nnn/src/nnn.c"
 cur + 2 - curscroll
# 6349 "project/nnn/src/nnn.c" 3 4
 ,
# 6349 "project/nnn/src/nnn.c"
 0
# 6349 "project/nnn/src/nnn.c" 3 4
 )
# 6349 "project/nnn/src/nnn.c"
           ;



  
# 6353 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6353 "project/nnn/src/nnn.c"
 ' ' | 
# 6353 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((10) + 8)))
# 6353 "project/nnn/src/nnn.c"
                       ;

 }
}

static int adjust_cols(int n)
{




 if (cfg.showdetail) {

  if (n < 36)
   cfg.showdetail ^= 1;
  else
   n -= 32;
 }


 return (n - 2);
}

static void draw_line(int ncols)
{
 
# 6378 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6378 "project/nnn/src/nnn.c"
     dir = 
# 6378 "project/nnn/src/nnn.c" 3 4
           0
# 6378 "project/nnn/src/nnn.c"
                ;

 ncols = adjust_cols(ncols);

 if (g_state.oldcolor && (pdents[last].flags & 0x01)) {
  
# 6383 "project/nnn/src/nnn.c" 3 4
 wattr_on(stdscr, (attr_t)(((
# 6383 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 6383 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8)) 
# 6383 "project/nnn/src/nnn.c"
 | 
# 6383 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((13) + 8))), ((void *)0))
# 6383 "project/nnn/src/nnn.c"
                                            ;
  dir = 
# 6384 "project/nnn/src/nnn.c" 3 4
       1
# 6384 "project/nnn/src/nnn.c"
           ;
 }

 
# 6387 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 6387 "project/nnn/src/nnn.c"
2 + last - curscroll
# 6387 "project/nnn/src/nnn.c" 3 4
,
# 6387 "project/nnn/src/nnn.c"
0
# 6387 "project/nnn/src/nnn.c" 3 4
)
# 6387 "project/nnn/src/nnn.c"
                             ;
 printent(&pdents[last], ncols, 
# 6388 "project/nnn/src/nnn.c" 3 4
                               0
# 6388 "project/nnn/src/nnn.c"
                                    );

 if (g_state.oldcolor && (pdents[cur].flags & 0x01)) {
  if (!dir) {
   
# 6392 "project/nnn/src/nnn.c" 3 4
  wattr_on(stdscr, (attr_t)(((
# 6392 "project/nnn/src/nnn.c"
  cfg.curctx + 1
# 6392 "project/nnn/src/nnn.c" 3 4
  ) << ((0) + 8)) 
# 6392 "project/nnn/src/nnn.c"
  | 
# 6392 "project/nnn/src/nnn.c" 3 4
  ((1U) << ((13) + 8))), ((void *)0))
# 6392 "project/nnn/src/nnn.c"
                                             ;
   dir = 
# 6393 "project/nnn/src/nnn.c" 3 4
        1
# 6393 "project/nnn/src/nnn.c"
            ;
  }
 } else if (dir) {
  
# 6396 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((
# 6396 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 6396 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8)) 
# 6396 "project/nnn/src/nnn.c"
 | 
# 6396 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((13) + 8))), ((void *)0))
# 6396 "project/nnn/src/nnn.c"
                                             ;
  dir = 
# 6397 "project/nnn/src/nnn.c" 3 4
       0
# 6397 "project/nnn/src/nnn.c"
            ;
 }

 
# 6400 "project/nnn/src/nnn.c" 3 4
wmove(stdscr,
# 6400 "project/nnn/src/nnn.c"
2 + cur - curscroll
# 6400 "project/nnn/src/nnn.c" 3 4
,
# 6400 "project/nnn/src/nnn.c"
0
# 6400 "project/nnn/src/nnn.c" 3 4
)
# 6400 "project/nnn/src/nnn.c"
                            ;
 printent(&pdents[cur], ncols, 
# 6401 "project/nnn/src/nnn.c" 3 4
                              1
# 6401 "project/nnn/src/nnn.c"
                                  );


 if (dir)
  
# 6405 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((
# 6405 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 6405 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8)) 
# 6405 "project/nnn/src/nnn.c"
 | 
# 6405 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((13) + 8))), ((void *)0))
# 6405 "project/nnn/src/nnn.c"
                                             ;

 markhovered();
}

static void redraw(char *path)
{
 
# 6412 "project/nnn/src/nnn.c" 3 4
(
# 6412 "project/nnn/src/nnn.c"
xlines 
# 6412 "project/nnn/src/nnn.c" 3 4
= getmaxy(
# 6412 "project/nnn/src/nnn.c"
stdscr
# 6412 "project/nnn/src/nnn.c" 3 4
), 
# 6412 "project/nnn/src/nnn.c"
xcols 
# 6412 "project/nnn/src/nnn.c" 3 4
= getmaxx(
# 6412 "project/nnn/src/nnn.c"
stdscr
# 6412 "project/nnn/src/nnn.c" 3 4
))
# 6412 "project/nnn/src/nnn.c"
                               ;

 int ncols = (xcols <= 
# 6414 "project/nnn/src/nnn.c" 3 4
                      1024
# 6414 "project/nnn/src/nnn.c"
                              ) ? xcols : 
# 6414 "project/nnn/src/nnn.c" 3 4
                                          1024
# 6414 "project/nnn/src/nnn.c"
                                                  ;
 int onscreen = xlines - 4;
 int i, j = 1;


 if (g_state.move) {
  g_state.move = 0;

  if (ndents && (last_curscroll == curscroll))
   return draw_line(ncols);
 }

 ;


 
# 6429 "project/nnn/src/nnn.c" 3 4
werase(stdscr)
# 6429 "project/nnn/src/nnn.c"
       ;


 move_cursor(cur, 1);


 if (ncols <= (4 * 2)) {
  printmsg(messages[29]);
  return;
 }


 ;

 for (i = 0; i < 4; ++i) {
  if (!g_ctx[i].c_cfg.ctxactive)
   
# 6445 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6445 "project/nnn/src/nnn.c"
  i + '1'
# 6445 "project/nnn/src/nnn.c" 3 4
  )
# 6445 "project/nnn/src/nnn.c"
                ;
  else
   
# 6447 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6447 "project/nnn/src/nnn.c"
  (i + '1') | (
# 6447 "project/nnn/src/nnn.c" 3 4
  ((
# 6447 "project/nnn/src/nnn.c"
  i + 1
# 6447 "project/nnn/src/nnn.c" 3 4
  ) << ((0) + 8)) 
# 6447 "project/nnn/src/nnn.c"
  | 
# 6447 "project/nnn/src/nnn.c" 3 4
  ((1U) << ((13) + 8)) 
# 6447 "project/nnn/src/nnn.c"
  | ((cfg.curctx != i) ? 
# 6447 "project/nnn/src/nnn.c" 3 4
  ((1U) << ((9) + 8)) 
# 6447 "project/nnn/src/nnn.c"
  : 
# 6447 "project/nnn/src/nnn.c" 3 4
  ((1U) << ((10) + 8))
# 6447 "project/nnn/src/nnn.c"
  ))
# 6447 "project/nnn/src/nnn.c" 3 4
  )

                                                     
# 6449 "project/nnn/src/nnn.c"
                                                    ;

  
# 6451 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6451 "project/nnn/src/nnn.c"
 ' '
# 6451 "project/nnn/src/nnn.c" 3 4
 )
# 6451 "project/nnn/src/nnn.c"
           ;
 }

 
# 6454 "project/nnn/src/nnn.c" 3 4
wattr_on(stdscr, (attr_t)(((1U) << ((9) + 8)) 
# 6454 "project/nnn/src/nnn.c"
| 
# 6454 "project/nnn/src/nnn.c" 3 4
((
# 6454 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 6454 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 6454 "project/nnn/src/nnn.c"
                                                ;


 
# 6457 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6457 "project/nnn/src/nnn.c"
     in_home = set_tilde_in_path(path);
 char *ptr = in_home ? &path[homelen - 1] : path;

 i = (int)xstrlen(ptr);
 if ((i + (4 * 2)) <= ncols)
  
# 6462 "project/nnn/src/nnn.c" 3 4
 waddnstr(stdscr,
# 6462 "project/nnn/src/nnn.c"
 ptr
# 6462 "project/nnn/src/nnn.c" 3 4
 ,
# 6462 "project/nnn/src/nnn.c"
 ncols - (4 * 2)
# 6462 "project/nnn/src/nnn.c" 3 4
 )
# 6462 "project/nnn/src/nnn.c"
                                      ;
 else {
  char *base = xmemrchr((uchar_t *)ptr, '/', i);

  if (in_home) {
   
# 6467 "project/nnn/src/nnn.c" 3 4
  waddch(stdscr,
# 6467 "project/nnn/src/nnn.c"
  *ptr
# 6467 "project/nnn/src/nnn.c" 3 4
  )
# 6467 "project/nnn/src/nnn.c"
             ;
   ++ptr;
   i = 1;
  } else
   i = 0;

  if (ptr && (base != ptr)) {
   while (ptr < base) {
    if (*ptr == '/') {
     i += 2;
     if (ncols < i + (4 * 2)) {
      base = 
# 6478 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 6478 "project/nnn/src/nnn.c"
                ;
      break;
     }

     
# 6482 "project/nnn/src/nnn.c" 3 4
    waddch(stdscr,
# 6482 "project/nnn/src/nnn.c"
    *ptr
# 6482 "project/nnn/src/nnn.c" 3 4
    )
# 6482 "project/nnn/src/nnn.c"
               ;
     
# 6483 "project/nnn/src/nnn.c" 3 4
    waddch(stdscr,
# 6483 "project/nnn/src/nnn.c"
    *(++ptr)
# 6483 "project/nnn/src/nnn.c" 3 4
    )
# 6483 "project/nnn/src/nnn.c"
                   ;
    }
    ++ptr;
   }
  }

  if (base)
   
# 6490 "project/nnn/src/nnn.c" 3 4
  waddnstr(stdscr,
# 6490 "project/nnn/src/nnn.c"
  base
# 6490 "project/nnn/src/nnn.c" 3 4
  ,
# 6490 "project/nnn/src/nnn.c"
  ncols - ((4 * 2) + i)
# 6490 "project/nnn/src/nnn.c" 3 4
  )
# 6490 "project/nnn/src/nnn.c"
                                              ;
 }

 if (in_home)
  reset_tilde_in_path(path);

 
# 6496 "project/nnn/src/nnn.c" 3 4
wattr_off(stdscr, (attr_t)(((1U) << ((9) + 8)) 
# 6496 "project/nnn/src/nnn.c"
| 
# 6496 "project/nnn/src/nnn.c" 3 4
((
# 6496 "project/nnn/src/nnn.c"
cfg.curctx + 1
# 6496 "project/nnn/src/nnn.c" 3 4
) << ((0) + 8))), ((void *)0))
# 6496 "project/nnn/src/nnn.c"
                                                 ;


 if (curscroll > 0) {
  
# 6500 "project/nnn/src/nnn.c" 3 4
 wmove(stdscr,
# 6500 "project/nnn/src/nnn.c"
 1
# 6500 "project/nnn/src/nnn.c" 3 4
 ,
# 6500 "project/nnn/src/nnn.c"
 0
# 6500 "project/nnn/src/nnn.c" 3 4
 )
# 6500 "project/nnn/src/nnn.c"
           ;



  
# 6504 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6504 "project/nnn/src/nnn.c"
 '^'
# 6504 "project/nnn/src/nnn.c" 3 4
 )
# 6504 "project/nnn/src/nnn.c"
           ;

 }

 if (g_state.oldcolor) {
  
# 6509 "project/nnn/src/nnn.c" 3 4
 wattr_on(stdscr, (attr_t)(((
# 6509 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 6509 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8)) 
# 6509 "project/nnn/src/nnn.c"
 | 
# 6509 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((13) + 8))), ((void *)0))
# 6509 "project/nnn/src/nnn.c"
                                            ;
  g_state.dircolor = 1;
 }

 onscreen = ((onscreen + curscroll) < (ndents) ? (onscreen + curscroll) : (ndents));

 ncols = adjust_cols(ncols);

 int len = scanselforpath(path, 
# 6517 "project/nnn/src/nnn.c" 3 4
                               0
# 6517 "project/nnn/src/nnn.c"
                                    );


 for (i = curscroll; i < onscreen; ++i) {
  
# 6521 "project/nnn/src/nnn.c" 3 4
 wmove(stdscr,
# 6521 "project/nnn/src/nnn.c"
 ++j
# 6521 "project/nnn/src/nnn.c" 3 4
 ,
# 6521 "project/nnn/src/nnn.c"
 0
# 6521 "project/nnn/src/nnn.c" 3 4
 )
# 6521 "project/nnn/src/nnn.c"
             ;

  if (len)
   findmarkentry(len, &pdents[i]);

  printent(&pdents[i], ncols, i == cur);
 }


 if (g_state.dircolor) {
  
# 6531 "project/nnn/src/nnn.c" 3 4
 wattr_off(stdscr, (attr_t)(((
# 6531 "project/nnn/src/nnn.c"
 cfg.curctx + 1
# 6531 "project/nnn/src/nnn.c" 3 4
 ) << ((0) + 8)) 
# 6531 "project/nnn/src/nnn.c"
 | 
# 6531 "project/nnn/src/nnn.c" 3 4
 ((1U) << ((13) + 8))), ((void *)0))
# 6531 "project/nnn/src/nnn.c"
                                             ;
  g_state.dircolor = 0;
 }


 if (onscreen < ndents) {
  
# 6537 "project/nnn/src/nnn.c" 3 4
 wmove(stdscr,
# 6537 "project/nnn/src/nnn.c"
 xlines - 2
# 6537 "project/nnn/src/nnn.c" 3 4
 ,
# 6537 "project/nnn/src/nnn.c"
 0
# 6537 "project/nnn/src/nnn.c" 3 4
 )
# 6537 "project/nnn/src/nnn.c"
                    ;



  
# 6541 "project/nnn/src/nnn.c" 3 4
 waddch(stdscr,
# 6541 "project/nnn/src/nnn.c"
 'v'
# 6541 "project/nnn/src/nnn.c" 3 4
 )
# 6541 "project/nnn/src/nnn.c"
           ;

 }

 markhovered();
}

static 
# 6548 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 6548 "project/nnn/src/nnn.c"
           cdprep(char *lastdir, char *lastname, char *path, char *newpath)
{
 if (lastname)
  lastname[0] = '\0';


 xstrsncpy(lastdir, path, 
# 6554 "project/nnn/src/nnn.c" 3 4
                         1024
# 6554 "project/nnn/src/nnn.c"
                                 );


 xstrsncpy(path, newpath, 
# 6557 "project/nnn/src/nnn.c" 3 4
                         1024
# 6557 "project/nnn/src/nnn.c"
                                 );
 ;

 clearfilter();
 return cfg.filtermode;
}

static 
# 6564 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 6564 "project/nnn/src/nnn.c"
           browse(char *ipath, const char *session, int pkey)
{
 char newpath[
# 6566 "project/nnn/src/nnn.c" 3 4
             1024
# 6566 "project/nnn/src/nnn.c"
                     ] __attribute__ ((aligned)),
      rundir[
# 6567 "project/nnn/src/nnn.c" 3 4
            1024
# 6567 "project/nnn/src/nnn.c"
                    ] __attribute__ ((aligned)),
      runfile[
# 6568 "project/nnn/src/nnn.c" 3 4
             255 
# 6568 "project/nnn/src/nnn.c"
                      + 1] __attribute__ ((aligned));
 char *path, *lastdir, *lastname, *dir, *tmp;
 pEntry pent;
 enum action sel;
 struct stat sb;
 int r = -1, presel, selstartid = 0, selendid = 0;
 const uchar_t opener_flags = (cfg.cliopener ? (0x08 | 0x01) : (0x04 | 0x40 | 0x02));
 
# 6575 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6575 "project/nnn/src/nnn.c"
     watch = 
# 6575 "project/nnn/src/nnn.c" 3 4
             0
# 6575 "project/nnn/src/nnn.c"
                  , cd = 
# 6575 "project/nnn/src/nnn.c" 3 4
                         1
# 6575 "project/nnn/src/nnn.c"
                             ;
 ino_t inode = 0;


 MEVENT event = {0};
 struct timespec mousetimings[2] = {{.tv_sec = 0, .tv_nsec = 0}, {.tv_sec = 0, .tv_nsec = 0} };
 int mousedent[2] = {-1, -1};
 
# 6582 "project/nnn/src/nnn.c" 3 4
_Bool 
# 6582 "project/nnn/src/nnn.c"
     currentmouse = 1, rightclicksel = 0;


 atexit(dentfree);

 
# 6587 "project/nnn/src/nnn.c" 3 4
(
# 6587 "project/nnn/src/nnn.c"
xlines 
# 6587 "project/nnn/src/nnn.c" 3 4
= getmaxy(
# 6587 "project/nnn/src/nnn.c"
stdscr
# 6587 "project/nnn/src/nnn.c" 3 4
), 
# 6587 "project/nnn/src/nnn.c"
xcols 
# 6587 "project/nnn/src/nnn.c" 3 4
= getmaxx(
# 6587 "project/nnn/src/nnn.c"
stdscr
# 6587 "project/nnn/src/nnn.c" 3 4
))
# 6587 "project/nnn/src/nnn.c"
                               ;



 if (!session || !load_session(session, &path, &lastdir, &lastname, 
# 6591 "project/nnn/src/nnn.c" 3 4
                                                                   0
# 6591 "project/nnn/src/nnn.c"
                                                                        )) {



  g_ctx[0].c_last[0] = '\0';
  lastdir = g_ctx[0].c_last;

  if (g_state.initfile) {
   xstrsncpy(g_ctx[0].c_name, xbasename(ipath), sizeof(g_ctx[0].c_name));
   xdirname(ipath);
  } else
   g_ctx[0].c_name[0] = '\0';

  lastname = g_ctx[0].c_name;

  xstrsncpy(g_ctx[0].c_path, ipath, 
# 6606 "project/nnn/src/nnn.c" 3 4
                                   1024
# 6606 "project/nnn/src/nnn.c"
                                           );

  if (g_state.initfile) {
   free(initpath);
   initpath = ipath = getcwd(
# 6610 "project/nnn/src/nnn.c" 3 4
                            ((void *)0)
# 6610 "project/nnn/src/nnn.c"
                                , 0);
  }
  path = g_ctx[0].c_path;

  g_ctx[0].c_fltr[0] = g_ctx[0].c_fltr[1] = '\0';
  g_ctx[0].c_cfg = cfg;

 }


 newpath[0] = rundir[0] = runfile[0] = '\0';

 presel = pkey ? ';' : ((cfg.filtermode
   || (session && (g_ctx[cfg.curctx].c_fltr[0] == '/'
    || g_ctx[cfg.curctx].c_fltr[0] == '\\')
    && g_ctx[cfg.curctx].c_fltr[1])) ? '/' : 0);

 pdents = xrealloc(pdents, total_dents * sizeof(struct entry));
 if (!pdents)
  printerr(6629);


 pnamebuf = (char *)xrealloc(pnamebuf, 0x800);
 if (!pnamebuf)
  printerr(6634);

begin:




 if (chdir(path) == -1) {
  ;
  valid_parent(path, lastname);
  (cfg.filtermode ? (presel = '/') : (watch = 
# 6644 "project/nnn/src/nnn.c" 3 4
 1
# 6644 "project/nnn/src/nnn.c"
 ));
 }


 xterm_cfg(path);
# 6658 "project/nnn/src/nnn.c"
 if ((presel == '/' || watch) && event_fd >= 0) {
  close(event_fd);
  event_fd = -1;
  watch = 
# 6661 "project/nnn/src/nnn.c" 3 4
         0
# 6661 "project/nnn/src/nnn.c"
              ;
 }
# 6671 "project/nnn/src/nnn.c"
 if (order && cd) {
  if (cfgsort[cfg.curctx] != '0') {
   if (cfgsort[cfg.curctx] == 'z')
    set_sort_flags('c');
   if ((!cfgsort[cfg.curctx] || (cfgsort[cfg.curctx] == 'c'))
       && ((r = get_kv_key(order, path, maxorder, 11)) > 0)) {
    set_sort_flags(r);
    cfgsort[cfg.curctx] = 'z';
   }
  } else
   cfgsort[cfg.curctx] = cfgsort[4];
 }
 cd = 
# 6683 "project/nnn/src/nnn.c" 3 4
     1
# 6683 "project/nnn/src/nnn.c"
         ;

 populate(path, lastname);
 if (g_state.interrupt) {
  g_state.interrupt = cfg.apparentsz = cfg.blkorder = 0;
  blk_shift = 9;
  presel = (('L') & 0x1f);
 }





 if (presel != '/' && event_fd == -1) {

  event_fd = open(path, 
# 6698 "project/nnn/src/nnn.c" 3 4
                       0x00008000
# 6698 "project/nnn/src/nnn.c"
                                );



  if (event_fd >= 0)
   
# 6703 "project/nnn/src/nnn.c" 3 4
  do { struct kevent *__kevp__ = (
# 6703 "project/nnn/src/nnn.c"
  &events_to_monitor[0]
# 6703 "project/nnn/src/nnn.c" 3 4
  ); __kevp__->ident = (
# 6703 "project/nnn/src/nnn.c"
  event_fd
# 6703 "project/nnn/src/nnn.c" 3 4
  ); __kevp__->filter = ((-4)); __kevp__->flags = (0x0001 
# 6703 "project/nnn/src/nnn.c"
  | 
# 6703 "project/nnn/src/nnn.c" 3 4
  0x0020); __kevp__->fflags = (
# 6703 "project/nnn/src/nnn.c"
  KQUEUE_FFLAGS
# 6703 "project/nnn/src/nnn.c" 3 4
  ); __kevp__->data = (
# 6703 "project/nnn/src/nnn.c"
  0
# 6703 "project/nnn/src/nnn.c" 3 4
  ); __kevp__->udata = (
# 6703 "project/nnn/src/nnn.c"
  path
# 6703 "project/nnn/src/nnn.c" 3 4
  ); } while(0)
                                                    
# 6704 "project/nnn/src/nnn.c"
                                                   ;
 }




 while (1) {

  if ((presel != '/') || !(g_ctx[cfg.curctx].c_fltr[1])) {
   redraw(path);
   statusbar(path);
  }

nochange:

  if (getppid() == 1)
   _exit(
# 6720 "project/nnn/src/nnn.c" 3 4
        1
# 6720 "project/nnn/src/nnn.c"
                    );


  if (chdir(path) == -1)
   goto begin;


  if (!isatty(
# 6727 "project/nnn/src/nnn.c" 3 4
             0
# 6727 "project/nnn/src/nnn.c"
                         ) && !g_state.picker)
   return 
# 6728 "project/nnn/src/nnn.c" 3 4
         1
# 6728 "project/nnn/src/nnn.c"
                     ;

  sel = nextsel(presel);
  if (presel)
   presel = 0;

  switch (sel) {

  case SEL_CLICK:
   if (getmouse(&event) != 
# 6737 "project/nnn/src/nnn.c" 3 4
                          (0)
# 6737 "project/nnn/src/nnn.c"
                            )
    goto nochange;


   if (event.bstate == 
# 6741 "project/nnn/src/nnn.c" 3 4
                      ((002L) << (((1) - 1) * 6)) 
# 6741 "project/nnn/src/nnn.c"
                                      && event.y == 0) {

    r = event.x >> 1;


    if (r >= 4)
     sel = SEL_BACK;
    else if (r >= 0 && r != cfg.curctx) {
     savecurctx(path, ndents ? pdents[cur].name : 
# 6749 "project/nnn/src/nnn.c" 3 4
                                                 ((void *)0)
# 6749 "project/nnn/src/nnn.c"
                                                     , r);


     path = g_ctx[r].c_path;
     lastdir = g_ctx[r].c_last;
     lastname = g_ctx[r].c_name;

     (cfg.filtermode ? (presel = '/') : (watch = 
# 6756 "project/nnn/src/nnn.c" 3 4
    1
# 6756 "project/nnn/src/nnn.c"
    ));
     goto begin;
    }
   }


  case SEL_BACK:

   if (sel == SEL_BACK) {

    dir = visit_parent(path, newpath, &presel);
    if (!dir)
     goto nochange;


    xstrsncpy(lastname, xbasename(path), 
# 6771 "project/nnn/src/nnn.c" 3 4
                                        255 
# 6771 "project/nnn/src/nnn.c"
                                                 + 1);

    cdprep(lastdir, 
# 6773 "project/nnn/src/nnn.c" 3 4
                   ((void *)0)
# 6773 "project/nnn/src/nnn.c"
                       , path, dir) ? (presel = '/') : (watch = 
# 6773 "project/nnn/src/nnn.c" 3 4
                                                                   1
# 6773 "project/nnn/src/nnn.c"
                                                                       );
    goto begin;

   }




   if (event.bstate == 
# 6781 "project/nnn/src/nnn.c" 3 4
                      ((002L) << (((2) - 1) * 6))
# 6781 "project/nnn/src/nnn.c"
                                     ) {
    presel = middle_click_key;
    goto nochange;
   }
# 6803 "project/nnn/src/nnn.c"
   if (event.y >= xlines - 2 && event.bstate == 
# 6803 "project/nnn/src/nnn.c" 3 4
                                               ((002L) << (((1) - 1) * 6))
# 6803 "project/nnn/src/nnn.c"
                                                              ) {
    clearfilter();
    cfg.filtermode ^= 1;
    if (cfg.filtermode) {
     presel = '/';
     goto nochange;
    }


    watch = 
# 6812 "project/nnn/src/nnn.c" 3 4
           1
# 6812 "project/nnn/src/nnn.c"
               ;
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 6813 "project/nnn/src/nnn.c" 3 4
   255 
# 6813 "project/nnn/src/nnn.c"
   + 1);
    cd = 
# 6814 "project/nnn/src/nnn.c" 3 4
        0
# 6814 "project/nnn/src/nnn.c"
             ;
    goto begin;
   }


   if (event.y >= 2 && event.y <= ndents + 1 &&
     (event.bstate == 
# 6820 "project/nnn/src/nnn.c" 3 4
                     ((002L) << (((1) - 1) * 6)) 
# 6820 "project/nnn/src/nnn.c"
                                     ||
      event.bstate == 
# 6821 "project/nnn/src/nnn.c" 3 4
                     ((002L) << (((3) - 1) * 6))
# 6821 "project/nnn/src/nnn.c"
                                    )) {
    r = curscroll + (event.y - 2);
    if (r != cur)
     move_cursor(r, 1);

    else if ((event.bstate == 
# 6826 "project/nnn/src/nnn.c" 3 4
                             ((002L) << (((1) - 1) * 6))
# 6826 "project/nnn/src/nnn.c"
                                            ) && !g_state.fifomode)
     notify_fifo(
# 6827 "project/nnn/src/nnn.c" 3 4
                1
# 6827 "project/nnn/src/nnn.c"
                    );


    if (event.bstate == 
# 6830 "project/nnn/src/nnn.c" 3 4
                       ((002L) << (((3) - 1) * 6))
# 6830 "project/nnn/src/nnn.c"
                                      ) {
     rightclicksel = 1;
     presel = ' ';
     goto nochange;
    }

    currentmouse ^= 1;
    clock_gettime(

        
# 6839 "project/nnn/src/nnn.c" 3 4
       _CLOCK_MONOTONIC_RAW
# 6839 "project/nnn/src/nnn.c"
                          ,





        &mousetimings[currentmouse]);
    mousedent[currentmouse] = cur;


    if ((mousedent[0] != mousedent[1]) ||
      ((((((mousetimings[0].tv_sec) <= (mousetimings[1].tv_sec)) ? ((mousetimings[1].tv_sec) - (mousetimings[0].tv_sec)) : ((mousetimings[0].tv_sec) - (mousetimings[1].tv_sec))) << 30)
      + ((((mousetimings[0].tv_nsec) <= (mousetimings[1].tv_nsec)) ? ((mousetimings[1].tv_nsec) - (mousetimings[0].tv_nsec)) : ((mousetimings[0].tv_nsec) - (mousetimings[1].tv_nsec)))))
     > (400000000)))
     break;

    mousetimings[currentmouse].tv_sec = 0;
    mousedent[currentmouse] = -1;
    sel = SEL_OPEN;
   } else {
    if (cfg.filtermode || (g_ctx[cfg.curctx].c_fltr[1]))
     presel = '/';
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 6861 "project/nnn/src/nnn.c" 3 4
   255 
# 6861 "project/nnn/src/nnn.c"
   + 1);
    goto nochange;
   }


  case SEL_NAV_IN:
  case SEL_OPEN:

   if (!ndents) {
    cd = 
# 6870 "project/nnn/src/nnn.c" 3 4
        0
# 6870 "project/nnn/src/nnn.c"
             ;
    goto begin;
   }

   pent = &pdents[cur];
   mkpath(path, pent->name, newpath);
   ;


   if (pent->flags & 0x01) {
    if (chdir(newpath) == -1) {
     printwait(strerror(
# 6881 "project/nnn/src/nnn.c" 3 4
    (*__error())
# 6881 "project/nnn/src/nnn.c"
    ), &presel);
     goto nochange;
    }

    cdprep(lastdir, lastname, path, newpath)
     ? (presel = '/') : (watch = 
# 6886 "project/nnn/src/nnn.c" 3 4
                                   1
# 6886 "project/nnn/src/nnn.c"
                                       );
    goto begin;
   }


   if (stat(newpath, &sb) == -1) {
    printwait(strerror(
# 6892 "project/nnn/src/nnn.c" 3 4
   (*__error())
# 6892 "project/nnn/src/nnn.c"
   ), &presel);
    goto nochange;
   }
   ;


   if (!
# 6898 "project/nnn/src/nnn.c" 3 4
       (((
# 6898 "project/nnn/src/nnn.c"
       sb.st_mode
# 6898 "project/nnn/src/nnn.c" 3 4
       ) & 0170000) == 0100000)
# 6898 "project/nnn/src/nnn.c"
                          ) {
    printwait(messages[26], &presel);
    goto nochange;
                        }


   if (g_state.runplugin) {
    g_state.runplugin = 0;

    if ((g_state.runctx == cfg.curctx) && !strcmp(path, plgpath)) {
     endselection(
# 6908 "project/nnn/src/nnn.c" 3 4
                 0
# 6908 "project/nnn/src/nnn.c"
                      );

     xstrsncpy(path, rundir, 
# 6910 "project/nnn/src/nnn.c" 3 4
                            1024
# 6910 "project/nnn/src/nnn.c"
                                    );
     rundir[0] = '\0';
     clearfilter();

     if (chdir(path) == -1
         || !run_plugin(&path, pent->name,
            runfile, &lastname, &lastdir)) {
      ;
     }

     if (g_state.picked)
      return 
# 6921 "project/nnn/src/nnn.c" 3 4
            0
# 6921 "project/nnn/src/nnn.c"
                        ;

     if (runfile[0]) {
      xstrsncpy(lastname, runfile, 
# 6924 "project/nnn/src/nnn.c" 3 4
                                  255 
# 6924 "project/nnn/src/nnn.c"
                                           + 1);
      runfile[0] = '\0';
     }
     (cfg.filtermode ? (presel = '/') : (watch = 
# 6927 "project/nnn/src/nnn.c" 3 4
    1
# 6927 "project/nnn/src/nnn.c"
    ));
     goto begin;
    }
   }


   if (g_state.fifomode && (sel == SEL_OPEN)) {
    send_to_explorer(&presel);
    break;
   }


   if (g_state.picker && (sel == SEL_OPEN)) {
    if (nselected == 0)
     appendfpath(newpath, mkpath(path, pent->name, newpath));
    return 
# 6942 "project/nnn/src/nnn.c" 3 4
          0
# 6942 "project/nnn/src/nnn.c"
                      ;
   }

   if (sel == SEL_NAV_IN) {

    if (listpath && 
# 6947 "project/nnn/src/nnn.c" 3 4
                   (((
# 6947 "project/nnn/src/nnn.c"
                   pent->mode
# 6947 "project/nnn/src/nnn.c" 3 4
                   ) & 0170000) == 0120000)
        
# 6948 "project/nnn/src/nnn.c"
       && is_prefix(path, listpath, xstrlen(listpath))) {
     if (!realpath(pent->name, newpath)) {
      printwait(strerror(
# 6950 "project/nnn/src/nnn.c" 3 4
     (*__error())
# 6950 "project/nnn/src/nnn.c"
     ), &presel);
      goto nochange;
     }

     xdirname(newpath);

     if (chdir(newpath) == -1) {
      printwait(strerror(
# 6957 "project/nnn/src/nnn.c" 3 4
     (*__error())
# 6957 "project/nnn/src/nnn.c"
     ), &presel);
      goto nochange;
     }

     cdprep(lastdir, 
# 6961 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 6961 "project/nnn/src/nnn.c"
                        , path, newpath)
            ? (presel = '/') : (watch = 
# 6962 "project/nnn/src/nnn.c" 3 4
                                          1
# 6962 "project/nnn/src/nnn.c"
                                              );
     xstrsncpy(lastname, pent->name, 
# 6963 "project/nnn/src/nnn.c" 3 4
                                    255 
# 6963 "project/nnn/src/nnn.c"
                                             + 1);
     goto begin;
    }


    if (cfg.nonavopen)
     goto nochange;
   }

   if (!sb.st_size) {
    printwait(messages[25], &presel);
    goto nochange;
   }

   if (cfg.useeditor

       && get_output("file", "-bIL", newpath, -1, 
# 6979 "project/nnn/src/nnn.c" 3 4
                                                         0
# 6979 "project/nnn/src/nnn.c"
                                                              , 
# 6979 "project/nnn/src/nnn.c" 3 4
                                                                0
# 6979 "project/nnn/src/nnn.c"
                                                                     )
       && is_prefix(g_buf, "text/", 5)





   ) {
    spawn(editor, newpath, 
# 6987 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 6987 "project/nnn/src/nnn.c"
                              , 
# 6987 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 6987 "project/nnn/src/nnn.c"
                                    , (0x08 | 0x01));
    if (cfg.filtermode) {
     presel = '/';
     clearfilter();
    }
    continue;
   }


   tmp = xextension(pent->name, pent->nlen - 1);




   if (tmp && !regexec(&archive_re, tmp, 0, 
# 7001 "project/nnn/src/nnn.c" 3 4
                                           ((void *)0)
# 7001 "project/nnn/src/nnn.c"
                                               , 0)) {

    r = get_input(messages[33]);
    if (r == 'l' || r == 'x') {
     mkpath(path, pent->name, newpath);
     if (!handle_archive(newpath, r)) {
      presel = '$';
      goto nochange;
     }
     if (r == 'l') {
      statusbar(path);
      goto nochange;
     }
    }

    if ((r == 'm') && !archive_mount(newpath)) {
     presel = '$';
     goto nochange;
    }

    if (r == 'x' || r == 'm') {
     if (newpath[0])
      set_smart_ctx('+', newpath, &path,
             ndents ? pdents[cur].name : 
# 7024 "project/nnn/src/nnn.c" 3 4
                                        ((void *)0)
# 7024 "project/nnn/src/nnn.c"
                                            ,
             &lastname, &lastdir);
     else
      xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7027 "project/nnn/src/nnn.c" 3 4
     255 
# 7027 "project/nnn/src/nnn.c"
     + 1);
     clearfilter();
     goto begin;
    }

    if (r != 'o') {
     printwait(messages[40], &presel);
     goto nochange;
    }
   }


   spawn(opener, newpath, 
# 7039 "project/nnn/src/nnn.c" 3 4
                         ((void *)0)
# 7039 "project/nnn/src/nnn.c"
                             , 
# 7039 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 7039 "project/nnn/src/nnn.c"
                                   , opener_flags);


   if (g_state.autonext && cur != ndents - 1)
    move_cursor((cur + 1) % ndents, 0);
   if (cfg.filtermode) {
    presel = '/';
    clearfilter();
   }
   continue;
  case SEL_NEXT:
  case SEL_PREV:
  case SEL_PGDN:
  case SEL_CTRL_D:
  case SEL_PGUP:
  case SEL_CTRL_U:
  case SEL_HOME:
  case SEL_END:
  case SEL_FIRST:
   if (ndents) {
    g_state.move = 1;
    handle_screen_move(sel);
   }
   break;
  case SEL_CDHOME:
  case SEL_CDBEGIN:
  case SEL_CDLAST:
  case SEL_CDROOT:
   dir = (sel == SEL_CDHOME) ? home
    : ((sel == SEL_CDBEGIN) ? ipath
    : ((sel == SEL_CDLAST) ? lastdir
    : "/" ));

   if (!dir || !*dir) {
    printwait(messages[27], &presel);
    goto nochange;
   }

   if (strcmp(path, dir) == 0) {
    if (dir == ipath) {
     if (cfg.filtermode)
      presel = '/';
     goto nochange;
    }
    dir = lastdir;
   }

   if (chdir(dir) == -1) {
    presel = '$';
    goto nochange;
   }


   xstrsncpy(newpath, dir, 
# 7092 "project/nnn/src/nnn.c" 3 4
                          1024
# 7092 "project/nnn/src/nnn.c"
                                  );
  case SEL_BMOPEN:
   if (sel == SEL_BMOPEN) {
    r = (int)handle_bookmark(mark, newpath);
    if (r) {
     printwait(messages[r], &presel);
     goto nochange;
    }

    if (strcmp(path, newpath) == 0)
     break;
   }


   cdprep(lastdir, listpath && sel == SEL_CDLAST ? 
# 7106 "project/nnn/src/nnn.c" 3 4
                                                  ((void *)0) 
# 7106 "project/nnn/src/nnn.c"
                                                       : lastname, path, newpath)
          ? (presel = '/') : (watch = 
# 7107 "project/nnn/src/nnn.c" 3 4
                                        1
# 7107 "project/nnn/src/nnn.c"
                                            );
   goto begin;
  case SEL_REMOTE:
   if ((sel == SEL_REMOTE) && !remote_mount(newpath)) {
    presel = '$';
    goto nochange;
   }

   set_smart_ctx('+', newpath, &path,
          ndents ? pdents[cur].name : 
# 7116 "project/nnn/src/nnn.c" 3 4
                                     ((void *)0)
# 7116 "project/nnn/src/nnn.c"
                                         , &lastname, &lastdir);
   clearfilter();
   goto begin;
  case SEL_CYCLE:
  case SEL_CYCLER:
  case SEL_CTX1:
  case SEL_CTX2:
  case SEL_CTX3:
  case SEL_CTX4:






   r = handle_context_switch(sel);
   if (r < 0)
    continue;
   savecurctx(path, ndents ? pdents[cur].name : 
# 7134 "project/nnn/src/nnn.c" 3 4
                                               ((void *)0)
# 7134 "project/nnn/src/nnn.c"
                                                   , r);


   path = g_ctx[r].c_path;
   lastdir = g_ctx[r].c_last;
   lastname = g_ctx[r].c_name;
   tmp = g_ctx[r].c_fltr;

   if (cfg.filtermode || ((tmp[0] == '/' || tmp[0] == '\\') && tmp[1]))
    presel = '/';
   else
    watch = 
# 7145 "project/nnn/src/nnn.c" 3 4
           1
# 7145 "project/nnn/src/nnn.c"
               ;

   goto begin;
  case SEL_MARK:
   free(mark);
   mark = xstrdup(path);
   printwait(mark, &presel);
   goto nochange;
  case SEL_BMARK:
   add_bookmark(path, newpath, &presel);
   goto nochange;
  case SEL_FLTR:
   if (!ndents)
    goto nochange;







   if (event_fd >= 0) {
    close(event_fd);
    event_fd = -1;
   }






   presel = filterentries(path, lastname);
   if (presel == (27)) {
    presel = 0;
    break;
   }
   if (presel == '/') {
    cd = 
# 7182 "project/nnn/src/nnn.c" 3 4
        0
# 7182 "project/nnn/src/nnn.c"
             ;
    goto begin;
   }
   goto nochange;
  case SEL_MFLTR:
  case SEL_HIDDEN:
  case SEL_DETAIL:
  case SEL_SORT:
   switch (sel) {
   case SEL_MFLTR:
    cfg.filtermode ^= 1;
    if (cfg.filtermode) {
     presel = '/';
     clearfilter();
     goto nochange;
    }

    watch = 
# 7199 "project/nnn/src/nnn.c" 3 4
           1
# 7199 "project/nnn/src/nnn.c"
               ;
   case SEL_HIDDEN:
    if (sel == SEL_HIDDEN) {
     cfg.showhidden ^= 1;
     if (cfg.filtermode)
      presel = '/';
     clearfilter();
    }
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7207 "project/nnn/src/nnn.c" 3 4
   255 
# 7207 "project/nnn/src/nnn.c"
   + 1);
    cd = 
# 7208 "project/nnn/src/nnn.c" 3 4
        0
# 7208 "project/nnn/src/nnn.c"
             ;
    goto begin;
   case SEL_DETAIL:
    cfg.showdetail ^= 1;
    cfg.blkorder = 0;
    continue;
   default:
    r = set_sort_flags(get_input(messages[36]));
    if (!r) {
     printwait(messages[40], &presel);
     goto nochange;
    }
   }

   if (cfg.filtermode || (g_ctx[cfg.curctx].c_fltr[1]))
    presel = '/';

   if (ndents) {
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7226 "project/nnn/src/nnn.c" 3 4
   255 
# 7226 "project/nnn/src/nnn.c"
   + 1);

    if (r == 'd' || r == 'a') {
     presel = 0;
     goto begin;
    }

    qsort((pdents), (ndents), sizeof(*(pdents)), (entrycmpfn));
    move_cursor(ndents ? dentfind(lastname, ndents) : 0, 0);
   }
   continue;
  case SEL_STATS:
  case SEL_CHMODX:
   if (ndents) {
    tmp = (listpath && (*(path) != *(listpath) ? -1 : strcmp((path), (listpath))) == 0) ? listroot : path;
    mkpath(tmp, pdents[cur].name, newpath);

    if ((sel == SEL_STATS && !show_stats(newpath))
        || (lstat(newpath, &sb) == -1)
        || (sel == SEL_CHMODX && !xchmod(newpath, sb.st_mode))) {
     printwait(strerror(
# 7246 "project/nnn/src/nnn.c" 3 4
    (*__error())
# 7246 "project/nnn/src/nnn.c"
    ), &presel);
     goto nochange;
    }

    if (sel == SEL_CHMODX)
     pdents[cur].mode ^= 0111;
   }
   break;
  case SEL_REDRAW:
  case SEL_RENAMEMUL:
  case SEL_HELP:
  case SEL_AUTONEXT:
  case SEL_EDIT:
  case SEL_LOCK:
  {
   
# 7261 "project/nnn/src/nnn.c" 3 4
  _Bool 
# 7261 "project/nnn/src/nnn.c"
       refresh = 
# 7261 "project/nnn/src/nnn.c" 3 4
                 0
# 7261 "project/nnn/src/nnn.c"
                      ;

   if (ndents)
    mkpath(path, pdents[cur].name, newpath);
   else if (sel == SEL_EDIT)
    goto nochange;

   switch (sel) {
   case SEL_REDRAW:
    refresh = 
# 7270 "project/nnn/src/nnn.c" 3 4
             1
# 7270 "project/nnn/src/nnn.c"
                 ;
    break;
   case SEL_RENAMEMUL:
    endselection(
# 7273 "project/nnn/src/nnn.c" 3 4
                1
# 7273 "project/nnn/src/nnn.c"
                    );
    setenv("INCLUDE_HIDDEN", xitoa(cfg.showhidden), 1);
    setenv("NNN_LIST", listpath ? listroot : "", 1);

    if (!(getutil(utils[8])
          && plugscript(utils[17], (0x08 | 0x01)))

        && !batch_rename()

    ) {
     printwait(messages[5], &presel);
     goto nochange;
    }
    clearselection();
    refresh = 
# 7287 "project/nnn/src/nnn.c" 3 4
             1
# 7287 "project/nnn/src/nnn.c"
                 ;
    break;
   case SEL_HELP:
    show_help(path);
   case SEL_AUTONEXT:
    if (sel == SEL_AUTONEXT)
     g_state.autonext ^= 1;
    if (cfg.filtermode)
     presel = '/';
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7296 "project/nnn/src/nnn.c" 3 4
   255 
# 7296 "project/nnn/src/nnn.c"
   + 1);
    goto nochange;
   case SEL_EDIT:
    if (!g_state.picker)
     spawn(editor, newpath, 
# 7300 "project/nnn/src/nnn.c" 3 4
                           ((void *)0)
# 7300 "project/nnn/src/nnn.c"
                               , 
# 7300 "project/nnn/src/nnn.c" 3 4
                                 ((void *)0)
# 7300 "project/nnn/src/nnn.c"
                                     , (0x08 | 0x01));
    continue;
   default:
    lock_terminal();
    break;
   }




   if ((cfg.filtermode || (g_ctx[cfg.curctx].c_fltr[1])) && !refresh) {
    presel = '/';
    goto nochange;
   }


   xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7316 "project/nnn/src/nnn.c" 3 4
  255 
# 7316 "project/nnn/src/nnn.c"
  + 1);

   cd = 
# 7318 "project/nnn/src/nnn.c" 3 4
       0
# 7318 "project/nnn/src/nnn.c"
            ;
   goto begin;
  }
  case SEL_SEL:
   if (!ndents)
    goto nochange;

   startselection();
   if (g_state.rangesel)
    g_state.rangesel = 0;


   pdents[cur].flags ^= 0x10;

   if (pdents[cur].flags & 0x10) {
    ++nselected;
    appendfpath(newpath, mkpath(path, pdents[cur].name, newpath));
    writesel(pselbuf, selbufpos - 1);
   } else {
    --nselected;
    rmfromselbuf(mkpath(path, pdents[cur].name, g_sel));
   }


   if (cfg.x11)
    plugscript(utils[16], 0x02 | 0x04);


   if (rightclicksel)
    rightclicksel = 0;
   else


    if (!g_state.stayonsel && (cur != ndents - 1))
     move_cursor((cur + 1) % ndents, 0);
   break;
  case SEL_SELMUL:
   if (!ndents)
    goto nochange;

   startselection();
   g_state.rangesel ^= 1;

   if (stat(path, &sb) == -1) {
    printwait(strerror(
# 7362 "project/nnn/src/nnn.c" 3 4
   (*__error())
# 7362 "project/nnn/src/nnn.c"
   ), &presel);
    goto nochange;
   }

   if (g_state.rangesel) {
    inode = sb.st_ino;
    selstartid = cur;
    continue;
   }

   if (inode != sb.st_ino) {
    printwait(messages[42], &presel);
    goto nochange;
   }

   if (cur < selstartid) {
    selendid = selstartid;
    selstartid = cur;
   } else
    selendid = cur;


   if (selstartid == selendid) {
    resetselind();
    clearselection();
    break;
   }
  case SEL_SELALL:
  case SEL_SELINV:
   if (sel == SEL_SELALL || sel == SEL_SELINV) {
    if (!ndents)
     goto nochange;

    startselection();
    if (g_state.rangesel)
     g_state.rangesel = 0;

    selstartid = 0;
    selendid = ndents - 1;
   }

   if ((nselected > 1000) || (nselected && (ndents > 1000))) {
    printmsg("processing...");
    
# 7405 "project/nnn/src/nnn.c" 3 4
   wrefresh(stdscr)
# 7405 "project/nnn/src/nnn.c"
            ;
   }

   r = scanselforpath(path, 
# 7408 "project/nnn/src/nnn.c" 3 4
                           1
# 7408 "project/nnn/src/nnn.c"
                               );
   ((sel == SEL_SELINV) && findselpos)
    ? invertselbuf(r) : addtoselbuf(r, selstartid, selendid);


   if (cfg.x11)
    plugscript(utils[16], 0x02 | 0x04);

   continue;
  case SEL_SELEDIT:
   r = editselection();
   if (r <= 0) {
    r = !r ? 3 : 5;
    printwait(messages[r], &presel);
   } else {

    if (cfg.x11)
     plugscript(utils[16], 0x02 | 0x04);

    cfg.filtermode ? presel = '/' : statusbar(path);
   }
   goto nochange;
  case SEL_CP:
  case SEL_MV:
  case SEL_CPMVAS:
  case SEL_RM:
  {
   if (sel == SEL_RM) {
    r = get_cur_or_sel();
    if (!r) {
     statusbar(path);
     goto nochange;
    }

    if (r == 'c') {
     tmp = (listpath && (*(path) != *(listpath) ? -1 : strcmp((path), (listpath))) == 0)
           ? listroot : path;
     mkpath(tmp, pdents[cur].name, newpath);
     if (!xrm(newpath))
      continue;

     xrmfromsel(tmp, newpath);

     copynextname(lastname);

     if (cfg.filtermode || (g_ctx[cfg.curctx].c_fltr[1]))
      presel = '/';
     cd = 
# 7455 "project/nnn/src/nnn.c" 3 4
         0
# 7455 "project/nnn/src/nnn.c"
              ;
     goto begin;
    }
   }

   (nselected == 1 && (sel == SEL_CP || sel == SEL_MV))
    ? mkpath(path, xbasename(pselbuf), newpath)
    : (newpath[0] = '\0');

   endselection(
# 7464 "project/nnn/src/nnn.c" 3 4
               1
# 7464 "project/nnn/src/nnn.c"
                   );

   if (!cpmvrm_selection(sel, path)) {
    presel = '$';
    goto nochange;
   }

   if (cfg.filtermode)
    presel = '/';
   clearfilter();



   if (cfg.x11)
    plugscript(utils[15], 0x02 | 0x04);


   if (newpath[0] && !access(newpath, 
# 7481 "project/nnn/src/nnn.c" 3 4
                                     0
# 7481 "project/nnn/src/nnn.c"
                                         ))
    xstrsncpy(lastname, xbasename(newpath), 
# 7482 "project/nnn/src/nnn.c" 3 4
                                           255
# 7482 "project/nnn/src/nnn.c"
                                                   +1);
   else
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7484 "project/nnn/src/nnn.c" 3 4
   255 
# 7484 "project/nnn/src/nnn.c"
   + 1);
   cd = 
# 7485 "project/nnn/src/nnn.c" 3 4
       0
# 7485 "project/nnn/src/nnn.c"
            ;
   goto begin;
  }
  case SEL_ARCHIVE:
  case SEL_OPENWITH:
  case SEL_NEW:
  case SEL_RENAME:
  {
   int fd, ret = 'n';

   if (!ndents && (sel == SEL_OPENWITH || sel == SEL_RENAME))
    break;

   if (sel != SEL_OPENWITH)
    endselection(
# 7499 "project/nnn/src/nnn.c" 3 4
                1
# 7499 "project/nnn/src/nnn.c"
                    );

   switch (sel) {
   case SEL_ARCHIVE:
    r = get_cur_or_sel();
    if (!r) {
     statusbar(path);
     goto nochange;
    }

    if (r == 's') {
     if (!selsafe()) {
      presel = '$';
      goto nochange;
     }

     tmp = 
# 7515 "project/nnn/src/nnn.c" 3 4
          ((void *)0)
# 7515 "project/nnn/src/nnn.c"
              ;
    } else
     tmp = pdents[cur].name;

    tmp = xreadline(tmp, messages[17]);
    break;
   case SEL_OPENWITH:

    if (g_state.picker) {

     tmp = xreadline(
# 7525 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 7525 "project/nnn/src/nnn.c"
                        , messages[18]);

    } else
     tmp = getreadline(messages[18]);

    break;
   case SEL_NEW:
    r = get_input(messages[11]);
    if (r == 'f' || r == 'd')
     tmp = xreadline(
# 7534 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 7534 "project/nnn/src/nnn.c"
                        , messages[19]);
    else if (r == 's' || r == 'h')
     tmp = xreadline(
# 7536 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 7536 "project/nnn/src/nnn.c"
                        ,
      messages[nselected <= 1?19:20]);
    else
     tmp = 
# 7539 "project/nnn/src/nnn.c" 3 4
          ((void *)0)
# 7539 "project/nnn/src/nnn.c"
              ;
    break;
   default:
    tmp = xreadline(pdents[cur].name, "");
    break;
   }

   if (!tmp || !*tmp)
    break;

   switch (sel) {
   case SEL_ARCHIVE:
    if (r == 'c' && strcmp(tmp, pdents[cur].name) == 0)
     goto nochange;

    mkpath(path, tmp, newpath);
    if (access(newpath, 
# 7555 "project/nnn/src/nnn.c" 3 4
                       0
# 7555 "project/nnn/src/nnn.c"
                           ) == 0) {
     if (!xconfirm(get_input(messages[13]))) {
      statusbar(path);
      goto nochange;
     }
    }
    get_archive_cmd(newpath, tmp);
    (r == 's') ? archive_selection(newpath, tmp, path)
        : spawn(newpath, tmp, pdents[cur].name,
         
# 7564 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 7564 "project/nnn/src/nnn.c"
            , (0x08 | 0x01) | 0x10);

    mkpath(path, tmp, newpath);
    if (access(newpath, 
# 7567 "project/nnn/src/nnn.c" 3 4
                       0
# 7567 "project/nnn/src/nnn.c"
                           ) == 0) {
     xstrsncpy(lastname, tmp, 
# 7568 "project/nnn/src/nnn.c" 3 4
                             255 
# 7568 "project/nnn/src/nnn.c"
                                      + 1);
     clearfilter();
     clearselection();
     cd = 
# 7571 "project/nnn/src/nnn.c" 3 4
         0
# 7571 "project/nnn/src/nnn.c"
              ;
     goto begin;
    }
    continue;
   case SEL_OPENWITH:
    handle_openwith(path, pdents[cur].name, newpath, tmp);

    cfg.filtermode ? presel = '/' : statusbar(path);
    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7579 "project/nnn/src/nnn.c" 3 4
   255 
# 7579 "project/nnn/src/nnn.c"
   + 1);
    goto nochange;
   case SEL_RENAME:

    if (strcmp(tmp, pdents[cur].name) == 0) {
     tmp = xreadline(pdents[cur].name, messages[21]);
     if (!tmp || !tmp[0] || !strcmp(tmp, pdents[cur].name)) {
      cfg.filtermode ? presel = '/' : statusbar(path);
      xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7587 "project/nnn/src/nnn.c" 3 4
     255 
# 7587 "project/nnn/src/nnn.c"
     + 1);
      goto nochange;
     }
     ret = 'd';
    }
    break;
   default:
    break;
   }



   fd = open(path, 
# 7599 "project/nnn/src/nnn.c" 3 4
                  0x0000 
# 7599 "project/nnn/src/nnn.c"
                           | 
# 7599 "project/nnn/src/nnn.c" 3 4
                             0x00100000
# 7599 "project/nnn/src/nnn.c"
                                        );



   if (fd == -1) {
    printwait(strerror(
# 7604 "project/nnn/src/nnn.c" 3 4
   (*__error())
# 7604 "project/nnn/src/nnn.c"
   ), &presel);
    goto nochange;
   }


   if (fstatat(fd, tmp, &sb, 
# 7609 "project/nnn/src/nnn.c" 3 4
                            0x0020
# 7609 "project/nnn/src/nnn.c"
                                               ) == 0) {
    if (sel == SEL_RENAME) {

     if (!xconfirm(get_input(messages[13]))) {
      close(fd);
      break;
     }
    } else {

     close(fd);
     printwait(messages[28], &presel);
     goto nochange;
    }
   }

   if (sel == SEL_RENAME) {

    if (ret == 'd')
     spawn("cp -rp", pdents[cur].name, tmp, 
# 7627 "project/nnn/src/nnn.c" 3 4
                                           ((void *)0)
# 7627 "project/nnn/src/nnn.c"
                                               , ((0x08 | 0x01) | 0x04));
    else if (renameat(fd, pdents[cur].name, fd, tmp) != 0) {
     close(fd);
     printwait(strerror(
# 7630 "project/nnn/src/nnn.c" 3 4
    (*__error())
# 7630 "project/nnn/src/nnn.c"
    ), &presel);
     goto nochange;
    }
    close(fd);
    xstrsncpy(lastname, tmp, 
# 7634 "project/nnn/src/nnn.c" 3 4
                            255 
# 7634 "project/nnn/src/nnn.c"
                                     + 1);
   } else {
    close(fd);
    presel = 0;


    if (r == 'f' || r == 'd') {
     mkpath(path, tmp, newpath);
     ret = xmktree(newpath, r == 'f' ? 
# 7642 "project/nnn/src/nnn.c" 3 4
                                      0 
# 7642 "project/nnn/src/nnn.c"
                                            : 
# 7642 "project/nnn/src/nnn.c" 3 4
                                              1
# 7642 "project/nnn/src/nnn.c"
                                                  );
    } else if (r == 's' || r == 'h') {
     if (tmp[0] == '@' && tmp[1] == '\0')
      tmp[0] = '\0';
     ret = xlink(tmp, path, (ndents ? pdents[cur].name : 
# 7646 "project/nnn/src/nnn.c" 3 4
                                                        ((void *)0)
# 7646 "project/nnn/src/nnn.c"
                                                            ),
        newpath, &presel, r);
    }

    if (!ret)
     printwait(messages[5], &presel);

    if (ret <= 0)
     goto nochange;

    if (r == 'f' || r == 'd')
     xstrsncpy(lastname, tmp, 
# 7657 "project/nnn/src/nnn.c" 3 4
                             255 
# 7657 "project/nnn/src/nnn.c"
                                      + 1);
    else if (ndents) {
     if (cfg.filtermode)
      presel = '/';
     xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7661 "project/nnn/src/nnn.c" 3 4
    255 
# 7661 "project/nnn/src/nnn.c"
    + 1);
    }
    clearfilter();
   }

   cd = 
# 7666 "project/nnn/src/nnn.c" 3 4
       0
# 7666 "project/nnn/src/nnn.c"
            ;
   goto begin;
  }
  case SEL_PLUGIN:

   if (!xdiraccess(plgpath)) {
    printwait(strerror(
# 7672 "project/nnn/src/nnn.c" 3 4
   (*__error())
# 7672 "project/nnn/src/nnn.c"
   ), &presel);
    goto nochange;
   }

   if (!pkey) {
    r = xstrsncpy(g_buf, messages[34], (
# 7677 "project/nnn/src/nnn.c" 3 4
                                            1024 
# 7677 "project/nnn/src/nnn.c"
                                            + ((
# 7677 "project/nnn/src/nnn.c" 3 4
                                            255 
# 7677 "project/nnn/src/nnn.c"
                                            + 1) << 1)));
    printkeys(plug, g_buf + r - 1, maxplug);
    printmsg(g_buf);
    r = get_input(
# 7680 "project/nnn/src/nnn.c" 3 4
                 ((void *)0)
# 7680 "project/nnn/src/nnn.c"
                     );
   } else {
    r = pkey;
    pkey = '\0';
   }

   if (r != '\r') {
    endselection(
# 7687 "project/nnn/src/nnn.c" 3 4
                0
# 7687 "project/nnn/src/nnn.c"
                     );
    tmp = get_kv_val(plug, 
# 7688 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 7688 "project/nnn/src/nnn.c"
                              , r, maxplug, 2);
    if (!tmp) {
     printwait(messages[40], &presel);
     goto nochange;
    }

    if (tmp[0] == '-' && tmp[1]) {
     ++tmp;
     r = 
# 7696 "project/nnn/src/nnn.c" 3 4
        0
# 7696 "project/nnn/src/nnn.c"
             ;
    } else
     r = 
# 7698 "project/nnn/src/nnn.c" 3 4
        1
# 7698 "project/nnn/src/nnn.c"
            ;

    if (!run_plugin(&path, tmp, (ndents ? pdents[cur].name : 
# 7700 "project/nnn/src/nnn.c" 3 4
                                                            ((void *)0)
# 7700 "project/nnn/src/nnn.c"
                                                                ),
        &lastname, &lastdir)) {
     printwait(messages[5], &presel);
     goto nochange;
    }

    if (g_state.picked)
     return 
# 7707 "project/nnn/src/nnn.c" 3 4
           0
# 7707 "project/nnn/src/nnn.c"
                       ;

    xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7709 "project/nnn/src/nnn.c" 3 4
   255 
# 7709 "project/nnn/src/nnn.c"
   + 1);

    if (!r) {
     cfg.filtermode ? presel = '/' : statusbar(path);
     goto nochange;
    }
   } else {
    g_state.runplugin ^= 1;
    if (!g_state.runplugin && rundir[0]) {




     if (strcmp(path, plgpath) == 0) {
      xstrsncpy(path, rundir, 
# 7723 "project/nnn/src/nnn.c" 3 4
                             1024
# 7723 "project/nnn/src/nnn.c"
                                     );
      xstrsncpy(lastname, runfile, 
# 7724 "project/nnn/src/nnn.c" 3 4
                                  255 
# 7724 "project/nnn/src/nnn.c"
                                           + 1);
      rundir[0] = runfile[0] = '\0';
      (cfg.filtermode ? (presel = '/') : (watch = 
# 7726 "project/nnn/src/nnn.c" 3 4
     1
# 7726 "project/nnn/src/nnn.c"
     ));
      goto begin;
     }


     g_state.runplugin = 1;
    }

    xstrsncpy(lastdir, path, 
# 7734 "project/nnn/src/nnn.c" 3 4
                            1024
# 7734 "project/nnn/src/nnn.c"
                                    );
    xstrsncpy(rundir, path, 
# 7735 "project/nnn/src/nnn.c" 3 4
                           1024
# 7735 "project/nnn/src/nnn.c"
                                   );
    xstrsncpy(path, plgpath, 
# 7736 "project/nnn/src/nnn.c" 3 4
                            1024
# 7736 "project/nnn/src/nnn.c"
                                    );
    if (ndents)
     xstrsncpy(runfile, pdents[cur].name, 
# 7738 "project/nnn/src/nnn.c" 3 4
                                         255
# 7738 "project/nnn/src/nnn.c"
                                                 );
    g_state.runctx = cfg.curctx;
    lastname[0] = '\0';
   }
   (cfg.filtermode ? (presel = '/') : (watch = 
# 7742 "project/nnn/src/nnn.c" 3 4
  1
# 7742 "project/nnn/src/nnn.c"
  ));
   clearfilter();
   goto begin;
  case SEL_SHELL:
  case SEL_LAUNCH:
  case SEL_PROMPT:
   r = handle_cmd(sel, newpath);


   if (cfg.filtermode)
    presel = '/';


   xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7755 "project/nnn/src/nnn.c" 3 4
  255 
# 7755 "project/nnn/src/nnn.c"
  + 1);

   if (!r)
    goto nochange;


   cd = 
# 7761 "project/nnn/src/nnn.c" 3 4
       0
# 7761 "project/nnn/src/nnn.c"
            ;
   goto begin;
  case SEL_UMOUNT:
   presel = 0;
   if (!unmount((ndents ? pdents[cur].name : 
# 7765 "project/nnn/src/nnn.c" 3 4
                                            ((void *)0)
# 7765 "project/nnn/src/nnn.c"
                                                ), newpath, &presel, path)) {
    if (presel == 0)
     statusbar(path);
    goto nochange;
   }


   copynextname(lastname);
   cd = 
# 7773 "project/nnn/src/nnn.c" 3 4
       0
# 7773 "project/nnn/src/nnn.c"
            ;
   goto begin;

  case SEL_SESSIONS:
   r = get_input(messages[14]);

   if (r == 's') {
    tmp = xreadline(
# 7780 "project/nnn/src/nnn.c" 3 4
                   ((void *)0)
# 7780 "project/nnn/src/nnn.c"
                       , messages[6]);
    if (tmp && *tmp)
     save_session(tmp, &presel);
   } else if (r == 'l' || r == 'r') {
    if (load_session(
# 7784 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 7784 "project/nnn/src/nnn.c"
                        , &path, &lastdir, &lastname, r == 'r')) {
     (cfg.filtermode ? (presel = '/') : (watch = 
# 7785 "project/nnn/src/nnn.c" 3 4
    1
# 7785 "project/nnn/src/nnn.c"
    ));
     goto begin;
    }
   }

   statusbar(path);
   goto nochange;

  case SEL_EXPORT:
   export_file_list();
   cfg.filtermode ? presel = '/' : statusbar(path);
   goto nochange;
  case SEL_TIMETYPE:
   if (!set_time_type(&presel))
    goto nochange;
   cd = 
# 7800 "project/nnn/src/nnn.c" 3 4
       0
# 7800 "project/nnn/src/nnn.c"
            ;
   goto begin;
  case SEL_QUITCTX:
  case SEL_QUITCD:
  case SEL_QUIT:
  case SEL_QUITERR:
   if (sel == SEL_QUITCTX) {
    int ctx = cfg.curctx;

    for (r = (ctx + 1) & ~4;
         (r != ctx) && !g_ctx[r].c_cfg.ctxactive;
         r = ((r + 1) & ~4)) {
    };

    if (r != ctx) {
     g_ctx[ctx].c_cfg.ctxactive = 0;


     path = g_ctx[r].c_path;
     lastdir = g_ctx[r].c_last;
     lastname = g_ctx[r].c_name;

     cfg = g_ctx[r].c_cfg;

     cfg.curctx = r;
     (cfg.filtermode ? (presel = '/') : (watch = 
# 7825 "project/nnn/src/nnn.c" 3 4
    1
# 7825 "project/nnn/src/nnn.c"
    ));
     goto begin;
    }
   } else if (!g_state.forcequit) {
    for (r = 0; r < 4; ++r)
     if (r != cfg.curctx && g_ctx[r].c_cfg.ctxactive) {
      r = get_input(messages[15]);
      break;
     }

    if (!(r == 4 || xconfirm(r)))
     break;
   }


   tmp = getenv("NNN_TMPFILE");
   if ((sel == SEL_QUITCD) || tmp) {
    write_lastdir(path, tmp);

    if ((sel == SEL_QUITCD) && g_state.picker)
     selbufpos = 0;
   }

   if (sel != SEL_QUITERR)
    return 
# 7849 "project/nnn/src/nnn.c" 3 4
          0
# 7849 "project/nnn/src/nnn.c"
                      ;

   if (selbufpos && !g_state.picker) {

    g_state.picker = 1;
    free(selpath);
    selpath = 
# 7855 "project/nnn/src/nnn.c" 3 4
             ((void *)0)
# 7855 "project/nnn/src/nnn.c"
                 ;
    return 
# 7856 "project/nnn/src/nnn.c" 3 4
          0
# 7856 "project/nnn/src/nnn.c"
                      ;
   }

   return 
# 7859 "project/nnn/src/nnn.c" 3 4
         1
# 7859 "project/nnn/src/nnn.c"
                     ;
  default:
   if (xlines != LINES || xcols != COLS)
    continue;

   if (idletimeout && idle == idletimeout) {
    lock_terminal();
    idle = 0;
   }

   xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", 
# 7869 "project/nnn/src/nnn.c" 3 4
  255 
# 7869 "project/nnn/src/nnn.c"
  + 1);
   goto nochange;
  }
 }
}

static char *make_tmp_tree(char **paths, ssize_t entries, const char *prefix)
{


 int err;
 struct stat sb;
 char *slash, *tmp;
 ssize_t len = xstrlen(prefix);
 char *tmpdir = malloc(
# 7883 "project/nnn/src/nnn.c" 3 4
                      1024
# 7883 "project/nnn/src/nnn.c"
                              );

 if (!tmpdir) {
  ;
  return 
# 7887 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 7887 "project/nnn/src/nnn.c"
            ;
 }

 tmp = tmpdir + tmpfplen - 1;
 xstrsncpy(tmpdir, g_tmpfpath, tmpfplen);
 xstrsncpy(tmp, "/nnnXXXXXX", 11);


 tmp += 10;


 if (!prefix[1] && (prefix[0] == '/'))
  len = 0;

 if (!mkdtemp(tmpdir)) {
  free(tmpdir);

  ;
  return 
# 7905 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 7905 "project/nnn/src/nnn.c"
            ;
 }

 listpath = tmpdir;

 for (ssize_t i = 0; i < entries; ++i) {
  if (!paths[i])
   continue;

  err = stat(paths[i], &sb);
  if (err && 
# 7915 "project/nnn/src/nnn.c" 3 4
            (*__error()) 
# 7915 "project/nnn/src/nnn.c"
                  == 
# 7915 "project/nnn/src/nnn.c" 3 4
                     2
# 7915 "project/nnn/src/nnn.c"
                           )
   continue;


  xstrsncpy(tmp, paths[i] + len, xstrlen(paths[i]) - len + 1);


  slash = xmemrchr((uchar_t *)tmp, '/', xstrlen(paths[i]) - len);
  if (slash)
   *slash = '\0';

  xmktree(tmpdir, 
# 7926 "project/nnn/src/nnn.c" 3 4
                 1
# 7926 "project/nnn/src/nnn.c"
                     );

  if (slash)
   *slash = '/';

  if (symlink(paths[i], tmpdir)) {
   ;
   ;
  }
 }


 *tmp = '\0';
 return tmpdir;
}

static char *load_input(int fd, const char *path)
{
 ssize_t i, chunk_count = 1, chunk = (ssize_t)(512 * 1024) , entries = 0;
 char *input = malloc(sizeof(char) * chunk), *tmpdir = 
# 7945 "project/nnn/src/nnn.c" 3 4
                                                      ((void *)0)
# 7945 "project/nnn/src/nnn.c"
                                                          ;
 char cwd[
# 7946 "project/nnn/src/nnn.c" 3 4
         1024
# 7946 "project/nnn/src/nnn.c"
                 ], *next;
 size_t offsets[(1 << 16)];
 char **paths = 
# 7948 "project/nnn/src/nnn.c" 3 4
               ((void *)0)
# 7948 "project/nnn/src/nnn.c"
                   ;
 ssize_t input_read, total_read = 0, off = 0;
 int msgnum = 0;

 if (!input) {
  ;
  return 
# 7954 "project/nnn/src/nnn.c" 3 4
        ((void *)0)
# 7954 "project/nnn/src/nnn.c"
            ;
 }

 if (!path) {
  if (!getcwd(cwd, 
# 7958 "project/nnn/src/nnn.c" 3 4
                  1024
# 7958 "project/nnn/src/nnn.c"
                          )) {
   free(input);
   return 
# 7960 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 7960 "project/nnn/src/nnn.c"
             ;
  }
 } else
  xstrsncpy(cwd, path, 
# 7963 "project/nnn/src/nnn.c" 3 4
                      1024
# 7963 "project/nnn/src/nnn.c"
                              );

 while (chunk_count < 512) {
  input_read = read(fd, input + total_read, chunk);
  if (input_read < 0) {
   ;
   goto malloc_1;
  }

  if (input_read == 0)
   break;

  total_read += input_read;
  ++chunk_count;

  while (off < total_read) {
   next = memchr(input + off, '\0', total_read - off) + 1;
   if (next == (void *)1)
    break;

   if (next - input == off + 1) {
    off = next - input;
    continue;
   }

   if (entries == (1 << 16)) {
    msgnum = 10;
    goto malloc_1;
   }

   offsets[entries++] = off;
   off = next - input;
  }

  if (chunk_count == 512) {
   msgnum = 10;
   goto malloc_1;
  }


  if (chunk_count == (total_read - input_read) / chunk)
   continue;

  chunk_count = total_read / chunk;
  if (total_read % chunk)
   ++chunk_count;

  input = xrealloc(input, (chunk_count + 1) * chunk);
  if (!input)
   return 
# 8012 "project/nnn/src/nnn.c" 3 4
         ((void *)0)
# 8012 "project/nnn/src/nnn.c"
             ;
 }

 if (off != total_read) {
  if (entries == (1 << 16)) {
   msgnum = 10;
   goto malloc_1;
  }

  offsets[entries++] = off;
 }

 ;
 ;
 ;

 if (!entries) {
  msgnum = 1;
  goto malloc_1;
 }

 input[total_read] = '\0';

 paths = malloc(entries * sizeof(char *));
 if (!paths)
  goto malloc_1;

 for (i = 0; i < entries; ++i)
  paths[i] = input + offsets[i];

 listroot = malloc(sizeof(char) * 
# 8042 "project/nnn/src/nnn.c" 3 4
                                 1024
# 8042 "project/nnn/src/nnn.c"
                                         );
 if (!listroot)
  goto malloc_1;
 listroot[0] = '\0';

 ;

 for (i = 0; i < entries; ++i) {
  if (paths[i][0] == '\n' || selforparent(paths[i])) {
   paths[i] = 
# 8051 "project/nnn/src/nnn.c" 3 4
             ((void *)0)
# 8051 "project/nnn/src/nnn.c"
                 ;
   continue;
  }

  paths[i] = abspath(paths[i], cwd, 
# 8055 "project/nnn/src/nnn.c" 3 4
                                   ((void *)0)
# 8055 "project/nnn/src/nnn.c"
                                       );
  if (!paths[i]) {
   entries = i;
   goto malloc_2;

  }

  ;

  xstrsncpy(g_buf, paths[i], 
# 8064 "project/nnn/src/nnn.c" 3 4
                            1024
# 8064 "project/nnn/src/nnn.c"
                                    );
  if (!common_prefix(xdirname(g_buf), listroot)) {
   entries = i + 1;
   goto malloc_2;
  }

  ;
 }

 ;

 if (listroot[0])
  tmpdir = make_tmp_tree(paths, entries, listroot);

malloc_2:
 for (i = entries - 1; i >= 0; --i)
  free(paths[i]);
malloc_1:
 if (msgnum) {
  if (home) {
   printmsg(messages[msgnum]);
   xdelay((350000));
  } else
   msg(messages[msgnum]);
 }
 free(input);
 free(paths);
 return tmpdir;
}

static void check_key_collision(void)
{
 int key;
 
# 8097 "project/nnn/src/nnn.c" 3 4
_Bool 
# 8097 "project/nnn/src/nnn.c"
     bitmap[
# 8097 "project/nnn/src/nnn.c" 3 4
            0777
# 8097 "project/nnn/src/nnn.c"
                   ] = {
# 8097 "project/nnn/src/nnn.c" 3 4
                        0
# 8097 "project/nnn/src/nnn.c"
                             };

 for (ullong_t i = 0; i < sizeof(bindings) / sizeof(struct key); ++i) {
  key = bindings[i].sym;

  if (bitmap[key])
   dprintf(
# 8103 "project/nnn/src/nnn.c" 3 4
          2
# 8103 "project/nnn/src/nnn.c"
                       , "key collision! [%s]\n", keyname(key));
  else
   bitmap[key] = 
# 8105 "project/nnn/src/nnn.c" 3 4
                1
# 8105 "project/nnn/src/nnn.c"
                    ;
 }
}

static void usage(void)
{
 dprintf(
# 8111 "project/nnn/src/nnn.c" 3 4
        2
# 8111 "project/nnn/src/nnn.c"
                     ,
  "%s: nnn [OPTIONS] [PATH]\n\n"
  "The unorthodox terminal file manager.\n\n"
  "positional args:\n"
  "  PATH   start dir/file [default: .]\n\n"
  "optional args:\n"

  " -a      auto NNN_FIFO\n"

  " -A      no dir auto-select\n"
  " -b key  open bookmark key (trumps -s/S)\n"
  " -c      cli-only NNN_OPENER (trumps -e)\n"
  " -C      8-color scheme\n"
  " -d      detail mode\n"
  " -D      dirs in context color\n"
  " -e      text in $VISUAL/$EDITOR/vi\n"
  " -E      internal edits in EDITOR\n"

  " -f      use readline history file\n"


  " -F val  fifo mode [0:preview 1:explore]\n"

  " -g      regex filters\n"
  " -H      show hidden files\n"
  " -i      show current file info\n"
  " -J      no auto-proceed on select\n"
  " -K      detect key collision\n"
  " -l val  set scroll lines\n"
  " -n      type-to-nav mode\n"
  " -o      open files only on Enter\n"
  " -p file selection file [-:stdout]\n"
  " -P key  run plugin key\n"
  " -Q      no quit confirmation\n"
  " -r      use advcpmv patched cp, mv\n"
  " -R      no rollover at edges\n"

  " -s name load session by name\n"
  " -S      persistent session\n"

  " -t secs timeout to lock\n"
  " -T key  sort order [a/d/e/r/s/t/v]\n"
  " -u      use selection (no prompt)\n"

  " -U      show user and group\n"

  " -V      show version\n"

  " -x      notis, selection sync, xterm title\n"

  " -h      show help\n\n"
  "v%s\n%s\n", __func__, "4.4", "BSD 2-Clause\nhttps://github.com/jarun/nnn");
}

static 
# 8165 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 8165 "project/nnn/src/nnn.c"
           setup_config(void)
{
 size_t r, len;
 char *xdgcfg = getenv("XDG_CONFIG_HOME");
 
# 8169 "project/nnn/src/nnn.c" 3 4
_Bool 
# 8169 "project/nnn/src/nnn.c"
     xdg = 
# 8169 "project/nnn/src/nnn.c" 3 4
           0
# 8169 "project/nnn/src/nnn.c"
                ;


 if (xdgcfg && xdgcfg[0]) {
  ;
  if (xdgcfg[0] == '~') {
   r = xstrsncpy(g_buf, home, 
# 8175 "project/nnn/src/nnn.c" 3 4
                             1024
# 8175 "project/nnn/src/nnn.c"
                                     );
   xstrsncpy(g_buf + r - 1, xdgcfg + 1, 
# 8176 "project/nnn/src/nnn.c" 3 4
                                       1024
# 8176 "project/nnn/src/nnn.c"
                                               );
   xdgcfg = g_buf;
   ;
  }

  if (!xdiraccess(xdgcfg)) {
   perror(xitoa(8182));
   return 
# 8183 "project/nnn/src/nnn.c" 3 4
         0
# 8183 "project/nnn/src/nnn.c"
              ;
  }

  len = xstrlen(xdgcfg) + xstrlen("/nnn/bookmarks") + 1;
  xdg = 
# 8187 "project/nnn/src/nnn.c" 3 4
       1
# 8187 "project/nnn/src/nnn.c"
           ;
 }

 if (!xdg)
  len = xstrlen(home) + xstrlen("/.config/nnn/bookmarks") + 1;

 cfgpath = (char *)malloc(len);
 plgpath = (char *)malloc(len);
 if (!cfgpath || !plgpath) {
  perror(xitoa(8196));
  return 
# 8197 "project/nnn/src/nnn.c" 3 4
        0
# 8197 "project/nnn/src/nnn.c"
             ;
 }

 if (xdg) {
  xstrsncpy(cfgpath, xdgcfg, len);
  r = len - xstrlen("/nnn/bookmarks");
 } else {
  r = xstrsncpy(cfgpath, home, len);


  xstrsncpy(cfgpath + r - 1, "/.config", len - r);
  ;
  r += 8;
 }


 xstrsncpy(cfgpath + r - 1, "/nnn", len - r);
 ;


 for (r = 0; r < (sizeof(toks) / sizeof(*(toks))); ++r) {
  mkpath(cfgpath, toks[r], plgpath);
  if (!xmktree(plgpath, 
# 8219 "project/nnn/src/nnn.c" 3 4
                       1
# 8219 "project/nnn/src/nnn.c"
                           )) {
   ;
   perror(xitoa(8221));
   return 
# 8222 "project/nnn/src/nnn.c" 3 4
         0
# 8222 "project/nnn/src/nnn.c"
              ;
  }
 }


 if (!g_state.picker) {
  char *env_sel = xgetenv(env_cfg[9], 
# 8228 "project/nnn/src/nnn.c" 3 4
                                           ((void *)0)
# 8228 "project/nnn/src/nnn.c"
                                               );

  selpath = env_sel ? xstrdup(env_sel)
      : (char *)malloc(len + 3);

  if (!selpath) {
   perror(xitoa(8234));
   return 
# 8235 "project/nnn/src/nnn.c" 3 4
         0
# 8235 "project/nnn/src/nnn.c"
              ;
  }

  if (!env_sel) {
   r = xstrsncpy(selpath, cfgpath, len + 3);
   xstrsncpy(selpath + r - 1, "/.selection", 12);
   ;
  }
 }

 return 
# 8245 "project/nnn/src/nnn.c" 3 4
       1
# 8245 "project/nnn/src/nnn.c"
           ;
}

static 
# 8248 "project/nnn/src/nnn.c" 3 4
      _Bool 
# 8248 "project/nnn/src/nnn.c"
           set_tmp_path(void)
{
 char *tmp = "/tmp";
 char *path = xdiraccess(tmp) ? tmp : getenv("TMPDIR");

 if (!path) {
  msg("set TMPDIR");
  return 
# 8255 "project/nnn/src/nnn.c" 3 4
        0
# 8255 "project/nnn/src/nnn.c"
             ;
 }

 tmpfplen = (uchar_t)xstrsncpy(g_tmpfpath, path, 64);
 ;
 ;

 return 
# 8262 "project/nnn/src/nnn.c" 3 4
       1
# 8262 "project/nnn/src/nnn.c"
           ;
}

static void cleanup(void)
{

 if (cfg.x11 && !g_state.picker) {
  printf("\033[23;0t");
  fflush(
# 8270 "project/nnn/src/nnn.c" 3 4
        __stdoutp
# 8270 "project/nnn/src/nnn.c"
              );

  free(hostname);
 }

 free(selpath);
 free(plgpath);
 free(cfgpath);
 free(initpath);
 free(bmstr);
 free(pluginstr);
 free(listroot);
 free(ihashbmp);
 free(bookmark);
 free(plug);
 free(lastcmd);

 if (g_state.autofifo)
  unlink(fifopath);

 if (g_state.pluginit)
  unlink(g_pipepath);



}

int main(int argc, char *argv[])
{
 char *arg = 
# 8299 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 8299 "project/nnn/src/nnn.c"
                ;
 char *session = 
# 8300 "project/nnn/src/nnn.c" 3 4
                ((void *)0)
# 8300 "project/nnn/src/nnn.c"
                    ;
 int fd, opt, sort = 0, pkey = '\0';

 mmask_t mask;
 char *middle_click_env = xgetenv(env_cfg[8], "\0");

 middle_click_key = (middle_click_env[0] == '^' && middle_click_env[1])
       ? ((middle_click_env[1]) & 0x1f)
       : (uchar_t)middle_click_env[0];


 const char * const env_opts = xgetenv(env_cfg[0], 
# 8311 "project/nnn/src/nnn.c" 3 4
                                                         ((void *)0)
# 8311 "project/nnn/src/nnn.c"
                                                             );
 int env_opts_id = env_opts ? (int)xstrlen(env_opts) : -1;

 
# 8314 "project/nnn/src/nnn.c" 3 4
_Bool 
# 8314 "project/nnn/src/nnn.c"
     rlhist = 
# 8314 "project/nnn/src/nnn.c" 3 4
              0
# 8314 "project/nnn/src/nnn.c"
                   ;


 while ((opt = (env_opts_id > 0
         ? env_opts[--env_opts_id]
         : getopt(argc, argv, "aAb:cCdDeEfF:gHiJKl:nop:P:QrRs:St:T:uUVxh"))) != -1) {
  switch (opt) {

  case 'a':
   g_state.autofifo = 1;
   break;

  case 'A':
   cfg.autoselect = 0;
   break;
  case 'b':
   if (env_opts_id < 0)
    arg = optarg;
   break;
  case 'c':
   cfg.cliopener = 1;
   break;
  case 'C':
   g_state.oldcolor = 1;
   break;
  case 'd':
   cfg.showdetail = 1;
   break;
  case 'D':
   g_state.dirctx = 1;
   break;
  case 'e':
   cfg.useeditor = 1;
   break;
  case 'E':
   cfg.waitedit = 1;
   break;
  case 'f':

   rlhist = 
# 8353 "project/nnn/src/nnn.c" 3 4
           1
# 8353 "project/nnn/src/nnn.c"
               ;

   break;

  case 'F':
   if (env_opts_id < 0) {
    fd = atoi(optarg);
    if ((fd < 0) || (fd > 1))
     return 
# 8361 "project/nnn/src/nnn.c" 3 4
           1
# 8361 "project/nnn/src/nnn.c"
                       ;
    g_state.fifomode = fd;
   }
   break;

  case 'g':
   cfg.regex = 1;
   filterfn = &visible_re;
   break;
  case 'H':
   cfg.showhidden = 1;
   break;
  case 'i':
   cfg.fileinfo = 1;
   break;
  case 'J':
   g_state.stayonsel = 1;
   break;
  case 'K':
   check_key_collision();
   return 
# 8381 "project/nnn/src/nnn.c" 3 4
         0
# 8381 "project/nnn/src/nnn.c"
                     ;
  case 'l':
   if (env_opts_id < 0)
    scroll_lines = atoi(optarg);
   break;
  case 'n':
   cfg.filtermode = 1;
   break;
  case 'o':
   cfg.nonavopen = 1;
   break;
  case 'p':
   if (env_opts_id >= 0)
    break;

   g_state.picker = 1;
   if (!(optarg[0] == '-' && optarg[1] == '\0')) {
    fd = open(optarg, 
# 8398 "project/nnn/src/nnn.c" 3 4
                     0x0001 
# 8398 "project/nnn/src/nnn.c"
                              | 
# 8398 "project/nnn/src/nnn.c" 3 4
                                0x00000200
# 8398 "project/nnn/src/nnn.c"
                                       , 0600);
    if (fd == -1) {
     perror(xitoa(8400));
     return 
# 8401 "project/nnn/src/nnn.c" 3 4
           1
# 8401 "project/nnn/src/nnn.c"
                       ;
    }

    close(fd);
    selpath = abspath(optarg, 
# 8405 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 8405 "project/nnn/src/nnn.c"
                                 , 
# 8405 "project/nnn/src/nnn.c" 3 4
                                   ((void *)0)
# 8405 "project/nnn/src/nnn.c"
                                       );
    unlink(selpath);
   }
   break;
  case 'P':
   if (env_opts_id < 0 && !optarg[1])
    pkey = (uchar_t)optarg[0];
   break;
  case 'Q':
   g_state.forcequit = 1;
   break;
  case 'r':




   break;
  case 'R':
   cfg.rollover = 0;
   break;

  case 's':
   if (env_opts_id < 0)
    session = optarg;
   break;
  case 'S':
   g_state.prstssn = 1;
   if (!session)
    session = "@";
   break;

  case 't':
   if (env_opts_id < 0)
    idletimeout = atoi(optarg);
   break;
  case 'T':
   if (env_opts_id < 0)
    sort = (uchar_t)optarg[0];
   break;
  case 'u':
   cfg.prefersel = 1;
   break;
  case 'U':
   g_state.uidgid = 1;
   break;
  case 'V':
   dprintf(
# 8451 "project/nnn/src/nnn.c" 3 4
          1
# 8451 "project/nnn/src/nnn.c"
                       , "%s\n", "4.4");
   return 
# 8452 "project/nnn/src/nnn.c" 3 4
         0
# 8452 "project/nnn/src/nnn.c"
                     ;
  case 'x':
   cfg.x11 = 1;
   break;
  case 'h':
   usage();
   return 
# 8458 "project/nnn/src/nnn.c" 3 4
         0
# 8458 "project/nnn/src/nnn.c"
                     ;
  default:
   usage();
   return 
# 8461 "project/nnn/src/nnn.c" 3 4
         1
# 8461 "project/nnn/src/nnn.c"
                     ;
  }
  if (env_opts_id == 0)
   env_opts_id = -1;
 }







 if (!set_tmp_path())
  return 
# 8474 "project/nnn/src/nnn.c" 3 4
        1
# 8474 "project/nnn/src/nnn.c"
                    ;

 atexit(cleanup);


 if (!isatty(
# 8479 "project/nnn/src/nnn.c" 3 4
            0
# 8479 "project/nnn/src/nnn.c"
                        )) {

  initpath = load_input(
# 8481 "project/nnn/src/nnn.c" 3 4
                       0
# 8481 "project/nnn/src/nnn.c"
                                   , 
# 8481 "project/nnn/src/nnn.c" 3 4
                                     ((void *)0)
# 8481 "project/nnn/src/nnn.c"
                                         );
  if (!initpath)
   return 
# 8483 "project/nnn/src/nnn.c" 3 4
         1
# 8483 "project/nnn/src/nnn.c"
                     ;


  if (!isatty(
# 8486 "project/nnn/src/nnn.c" 3 4
             1
# 8486 "project/nnn/src/nnn.c"
                          )) {
   fd = open(ctermid(
# 8487 "project/nnn/src/nnn.c" 3 4
                    ((void *)0)
# 8487 "project/nnn/src/nnn.c"
                        ), 
# 8487 "project/nnn/src/nnn.c" 3 4
                           0x0000
# 8487 "project/nnn/src/nnn.c"
                                   , 0400);
   dup2(fd, 
# 8488 "project/nnn/src/nnn.c" 3 4
           0
# 8488 "project/nnn/src/nnn.c"
                       );
   close(fd);
  } else
   dup2(
# 8491 "project/nnn/src/nnn.c" 3 4
       1
# 8491 "project/nnn/src/nnn.c"
                    , 
# 8491 "project/nnn/src/nnn.c" 3 4
                      0
# 8491 "project/nnn/src/nnn.c"
                                  );

  if (session)
   session = 
# 8494 "project/nnn/src/nnn.c" 3 4
            ((void *)0)
# 8494 "project/nnn/src/nnn.c"
                ;
 }

 home = getenv("HOME");
 if (!home) {
  msg("set HOME");
  return 
# 8500 "project/nnn/src/nnn.c" 3 4
        1
# 8500 "project/nnn/src/nnn.c"
                    ;
 }
 ;
 homelen = (uchar_t)xstrlen(home);

 if (!setup_config())
  return 
# 8506 "project/nnn/src/nnn.c" 3 4
        1
# 8506 "project/nnn/src/nnn.c"
                    ;


 opener = xgetenv(env_cfg[3], utils[0]);
 ;


 if (!parsekvpair(&bookmark, &bmstr, 1, &maxbm)) {
  msg(env_cfg[1]);
  return 
# 8515 "project/nnn/src/nnn.c" 3 4
        1
# 8515 "project/nnn/src/nnn.c"
                    ;
 }


 if (!parsekvpair(&plug, &pluginstr, 2, &maxplug)) {
  msg(env_cfg[2]);
  return 
# 8521 "project/nnn/src/nnn.c" 3 4
        1
# 8521 "project/nnn/src/nnn.c"
                    ;
 }


 if (!parsekvpair(&order, &orderstr, 11, &maxorder)) {
  msg(env_cfg[11]);
  return 
# 8527 "project/nnn/src/nnn.c" 3 4
        1
# 8527 "project/nnn/src/nnn.c"
                    ;
 }

 if (!initpath) {
  if (arg) {
   if (!arg[1])
    initpath = get_kv_val(bookmark, 
# 8533 "project/nnn/src/nnn.c" 3 4
                                   ((void *)0)
# 8533 "project/nnn/src/nnn.c"
                                       , *arg, maxbm, 1);

   if (!initpath) {
    msg(messages[40]);
    return 
# 8537 "project/nnn/src/nnn.c" 3 4
          1
# 8537 "project/nnn/src/nnn.c"
                      ;
   }

   if (session)
    session = 
# 8541 "project/nnn/src/nnn.c" 3 4
             ((void *)0)
# 8541 "project/nnn/src/nnn.c"
                 ;
  } else if (argc == optind) {

   char *startpath = getenv("PWD");

   initpath = startpath ? xstrdup(startpath) : getcwd(
# 8546 "project/nnn/src/nnn.c" 3 4
                                                     ((void *)0)
# 8546 "project/nnn/src/nnn.c"
                                                         , 0);
   if (!initpath)
    initpath = "/";
  } else {
   arg = argv[optind];
   ;
   if (xstrlen(arg) > 7 && is_prefix(arg, "file://", 7))
    arg = arg + 7;
   initpath = abspath(arg, 
# 8554 "project/nnn/src/nnn.c" 3 4
                          ((void *)0)
# 8554 "project/nnn/src/nnn.c"
                              , 
# 8554 "project/nnn/src/nnn.c" 3 4
                                ((void *)0)
# 8554 "project/nnn/src/nnn.c"
                                    );
   ;
   if (!initpath) {
    perror(xitoa(8557));
    return 
# 8558 "project/nnn/src/nnn.c" 3 4
          1
# 8558 "project/nnn/src/nnn.c"
                      ;
   }






   struct stat sb;

   if (stat(initpath, &sb) == -1) {
    perror(xitoa(8569));
    return 
# 8570 "project/nnn/src/nnn.c" 3 4
          1
# 8570 "project/nnn/src/nnn.c"
                      ;
   }

   if (!
# 8573 "project/nnn/src/nnn.c" 3 4
       (((
# 8573 "project/nnn/src/nnn.c"
       sb.st_mode
# 8573 "project/nnn/src/nnn.c" 3 4
       ) & 0170000) == 0040000)
# 8573 "project/nnn/src/nnn.c"
                          )
    g_state.initfile = 1;

   if (session)
    session = 
# 8577 "project/nnn/src/nnn.c" 3 4
             ((void *)0)
# 8577 "project/nnn/src/nnn.c"
                 ;
  }
 }


 enveditor = getenv(env_cfg[10]);



 if (setfilter(&archive_re, (enveditor ? enveditor : patterns[2]))) {

  msg(messages[35]);
  return 
# 8589 "project/nnn/src/nnn.c" 3 4
        1
# 8589 "project/nnn/src/nnn.c"
                    ;
 }


 if (cfg.cliopener)
  cfg.useeditor = 0;


 enveditor = xgetenv(envs[2], utils[11]);
 editor = xgetenv(envs[1], enveditor);
 ;
 ;
 ;


 pager = xgetenv(envs[3], utils[12]);
 ;


 shell = xgetenv(envs[0], utils[13]);
 ;

 ;



 if (g_state.autofifo) {
  g_tmpfpath[tmpfplen - 1] = '\0';

  size_t r = mkpath(g_tmpfpath, "nnn-fifo.", g_buf);

  xstrsncpy(g_buf + r - 1, xitoa(getpid()), 
# 8620 "project/nnn/src/nnn.c" 3 4
                                           1024 
# 8620 "project/nnn/src/nnn.c"
                                                    - r);
  setenv("NNN_FIFO", g_buf, 
# 8621 "project/nnn/src/nnn.c" 3 4
                           1
# 8621 "project/nnn/src/nnn.c"
                               );
 }

 fifopath = xgetenv("NNN_FIFO", 
# 8624 "project/nnn/src/nnn.c" 3 4
                               ((void *)0)
# 8624 "project/nnn/src/nnn.c"
                                   );
 if (fifopath) {
  if (mkfifo(fifopath, 0600) != 0 && !(
# 8626 "project/nnn/src/nnn.c" 3 4
                                      (*__error()) 
# 8626 "project/nnn/src/nnn.c"
                                            == 
# 8626 "project/nnn/src/nnn.c" 3 4
                                               17 
# 8626 "project/nnn/src/nnn.c"
                                                      && access(fifopath, 
# 8626 "project/nnn/src/nnn.c" 3 4
                                                                          (1<<1)
# 8626 "project/nnn/src/nnn.c"
                                                                              ) == 0)) {
   perror(xitoa(8627));
   return 
# 8628 "project/nnn/src/nnn.c" 3 4
         1
# 8628 "project/nnn/src/nnn.c"
                     ;
  }

  sigaction(
# 8631 "project/nnn/src/nnn.c" 3 4
           13
# 8631 "project/nnn/src/nnn.c"
                  , &(struct sigaction){.
# 8631 "project/nnn/src/nnn.c" 3 4
                                         __sigaction_u.__sa_handler 
# 8631 "project/nnn/src/nnn.c"
                                                    = 
# 8631 "project/nnn/src/nnn.c" 3 4
                                                      (void (*)(int))1
# 8631 "project/nnn/src/nnn.c"
                                                             }, 
# 8631 "project/nnn/src/nnn.c" 3 4
                                                                ((void *)0)
# 8631 "project/nnn/src/nnn.c"
                                                                    );
 }
# 8643 "project/nnn/src/nnn.c"
 kq = kqueue();
 if (kq < 0) {
  perror(xitoa(8645));
  return 
# 8646 "project/nnn/src/nnn.c" 3 4
        1
# 8646 "project/nnn/src/nnn.c"
                    ;
 }
# 8657 "project/nnn/src/nnn.c"
 opt = xgetenv_val(env_cfg[13]);
 if (opt && opt <= 2)
  g_state.trash = opt;


 struct sigaction act = {.
# 8662 "project/nnn/src/nnn.c" 3 4
                         __sigaction_u.__sa_handler 
# 8662 "project/nnn/src/nnn.c"
                                    = sigint_handler};

 if (sigaction(
# 8664 "project/nnn/src/nnn.c" 3 4
              2
# 8664 "project/nnn/src/nnn.c"
                    , &act, 
# 8664 "project/nnn/src/nnn.c" 3 4
                            ((void *)0)
# 8664 "project/nnn/src/nnn.c"
                                ) < 0) {
  perror(xitoa(8665));
  return 
# 8666 "project/nnn/src/nnn.c" 3 4
        1
# 8666 "project/nnn/src/nnn.c"
                    ;
 }

 act.
# 8669 "project/nnn/src/nnn.c" 3 4
    __sigaction_u.__sa_handler 
# 8669 "project/nnn/src/nnn.c"
               = clean_exit_sighandler;

 if (sigaction(
# 8671 "project/nnn/src/nnn.c" 3 4
              15
# 8671 "project/nnn/src/nnn.c"
                     , &act, 
# 8671 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 8671 "project/nnn/src/nnn.c"
                                 ) < 0 || sigaction(
# 8671 "project/nnn/src/nnn.c" 3 4
                                                    1
# 8671 "project/nnn/src/nnn.c"
                                                          , &act, 
# 8671 "project/nnn/src/nnn.c" 3 4
                                                                  ((void *)0)
# 8671 "project/nnn/src/nnn.c"
                                                                      ) < 0) {
  perror(xitoa(8672));
  return 
# 8673 "project/nnn/src/nnn.c" 3 4
        1
# 8673 "project/nnn/src/nnn.c"
                    ;
 }

 act.
# 8676 "project/nnn/src/nnn.c" 3 4
    __sigaction_u.__sa_handler 
# 8676 "project/nnn/src/nnn.c"
               = 
# 8676 "project/nnn/src/nnn.c" 3 4
                 (void (*)(int))1
# 8676 "project/nnn/src/nnn.c"
                        ;

 if (sigaction(
# 8678 "project/nnn/src/nnn.c" 3 4
              3
# 8678 "project/nnn/src/nnn.c"
                     , &act, 
# 8678 "project/nnn/src/nnn.c" 3 4
                             ((void *)0)
# 8678 "project/nnn/src/nnn.c"
                                 ) < 0) {
  perror(xitoa(8679));
  return 
# 8680 "project/nnn/src/nnn.c" 3 4
        1
# 8680 "project/nnn/src/nnn.c"
                    ;
 }



 setlocale(
# 8685 "project/nnn/src/nnn.c" 3 4
          0
# 8685 "project/nnn/src/nnn.c"
                , "");
# 8697 "project/nnn/src/nnn.c"
 rl_variable_bind("completion-ignore-case", "on");



 rl_bind_key('\t', rl_complete);

 if (rlhist) {
  mkpath(cfgpath, ".history", g_buf);
  read_history(g_buf);
 }



 if (cfg.x11 && !g_state.picker) {

  printf("\033[22;0t");
  fflush(
# 8713 "project/nnn/src/nnn.c" 3 4
        __stdoutp
# 8713 "project/nnn/src/nnn.c"
              );

  hostname = malloc(
# 8715 "project/nnn/src/nnn.c" 3 4
                   255 
# 8715 "project/nnn/src/nnn.c"
                                        + 1);
  if (!hostname) {
   perror(xitoa(8717));
   return 
# 8718 "project/nnn/src/nnn.c" 3 4
         1
# 8718 "project/nnn/src/nnn.c"
                     ;
  }
  gethostname(hostname, 
# 8720 "project/nnn/src/nnn.c" 3 4
                       255
# 8720 "project/nnn/src/nnn.c"
                                           );
  hostname[
# 8721 "project/nnn/src/nnn.c" 3 4
          255
# 8721 "project/nnn/src/nnn.c"
                              ] = '\0';
 }



 if (!initcurses(&mask))



  return 
# 8730 "project/nnn/src/nnn.c" 3 4
        1
# 8730 "project/nnn/src/nnn.c"
                    ;

 if (sort)
  set_sort_flags(sort);

 opt = browse(initpath, session, pkey);


 if (session && g_state.prstssn)
  save_session(session, 
# 8739 "project/nnn/src/nnn.c" 3 4
                       ((void *)0)
# 8739 "project/nnn/src/nnn.c"
                           );



 mousemask(mask, 
# 8743 "project/nnn/src/nnn.c" 3 4
                ((void *)0)
# 8743 "project/nnn/src/nnn.c"
                    );


 endwin();


 if (rlhist) {
  mkpath(cfgpath, ".history", g_buf);
  write_history(g_buf);
 }


 if (g_state.picker) {
  if (selbufpos) {
   fd = selpath ? open(selpath, 
# 8757 "project/nnn/src/nnn.c" 3 4
                               0x0001 
# 8757 "project/nnn/src/nnn.c"
                                        | 
# 8757 "project/nnn/src/nnn.c" 3 4
                                          0x00000200 
# 8757 "project/nnn/src/nnn.c"
                                                  | 
# 8757 "project/nnn/src/nnn.c" 3 4
                                                    0x00000400
# 8757 "project/nnn/src/nnn.c"
                                                           , 0600) : 
# 8757 "project/nnn/src/nnn.c" 3 4
                                                                     1
# 8757 "project/nnn/src/nnn.c"
                                                                                  ;
   if ((fd == -1) || (seltofile(fd, 
# 8758 "project/nnn/src/nnn.c" 3 4
                                   ((void *)0)
# 8758 "project/nnn/src/nnn.c"
                                       ) != (size_t)(selbufpos)))
    perror(xitoa(8759));

   if (fd > 1)
    close(fd);
  }
 } else if (selpath)
  unlink(selpath);


 rmlistpath();





 regfree(&archive_re);



 free(pselbuf);







 if (event_fd >= 0)
  close(event_fd);
 close(kq);





 if (!g_state.fifomode)
  notify_fifo(
# 8795 "project/nnn/src/nnn.c" 3 4
             0
# 8795 "project/nnn/src/nnn.c"
                  );
 if (fifofd != -1)
  close(fifofd);


 return opt;
}
