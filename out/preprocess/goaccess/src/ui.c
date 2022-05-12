# 0 "project/goaccess/src/ui.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/goaccess/src/ui.c"
# 47 "project/goaccess/src/ui.c"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 1 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
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
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/pthread.h" 2 3 4
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
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 2 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 2 3 4

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



# 48 "project/goaccess/src/ui.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
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
# 49 "project/goaccess/src/ui.c" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/errno.h" 2 3 4



extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/errno.h" 2 3 4
# 51 "project/goaccess/src/ui.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
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







# 52 "project/goaccess/src/ui.c" 2
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

# 53 "project/goaccess/src/ui.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
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
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
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







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 261 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


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








# 54 "project/goaccess/src/ui.c" 2
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
# 55 "project/goaccess/src/ui.c" 2
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
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 2 3 4
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




# 56 "project/goaccess/src/ui.c" 2

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


# 58 "project/goaccess/src/ui.c" 2

# 1 "project/goaccess/src/ui.h" 1
# 48 "project/goaccess/src/ui.h"
# 1 "project/goaccess/src/labels.h" 1
# 33 "project/goaccess/src/labels.h"
# 1 "/usr/local/include/libintl.h" 1 3 4
# 22 "/usr/local/include/libintl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
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
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
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
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/xlocale.h" 3 4
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
# 23 "/usr/local/include/libintl.h" 2 3 4
# 58 "/usr/local/include/libintl.h" 3 4
extern int libintl_version;
# 136 "/usr/local/include/libintl.h" 3 4
extern char *gettext (const char *__msgid)
       __asm__ ("_" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));
# 156 "/usr/local/include/libintl.h" 3 4
extern char *dgettext (const char *__domainname, const char *__msgid)
       __asm__ ("_" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));
# 177 "/usr/local/include/libintl.h" 3 4
extern char *dcgettext (const char *__domainname, const char *__msgid,
                        int __category)
       __asm__ ("_" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));
# 201 "/usr/local/include/libintl.h" 3 4
extern char *ngettext (const char *__msgid1, const char *__msgid2,
                       unsigned long int __n)
       __asm__ ("_" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
# 224 "/usr/local/include/libintl.h" 3 4
extern char *dngettext (const char *__domainname,
                        const char *__msgid1, const char *__msgid2,
                        unsigned long int __n)
       __asm__ ("_" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 250 "/usr/local/include/libintl.h" 3 4
extern char *dcngettext (const char *__domainname,
                         const char *__msgid1, const char *__msgid2,
                         unsigned long int __n, int __category)
       __asm__ ("_" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 272 "/usr/local/include/libintl.h" 3 4
extern char *textdomain (const char *__domainname)
       __asm__ ("_" "libintl_textdomain");
# 290 "/usr/local/include/libintl.h" 3 4
extern char *bindtextdomain (const char *__domainname, const char *__dirname)
       __asm__ ("_" "libintl_bindtextdomain");
# 329 "/usr/local/include/libintl.h" 3 4
extern char *bind_textdomain_codeset (const char *__domainname,
                                      const char *__codeset)
       __asm__ ("_" "libintl_bind_textdomain_codeset");
# 489 "/usr/local/include/libintl.h" 3 4
extern char *libintl_setlocale (int, const char *);
# 498 "/usr/local/include/libintl.h" 3 4
extern locale_t libintl_newlocale (int, const char *, locale_t);
# 514 "/usr/local/include/libintl.h" 3 4
extern void
       libintl_set_relocation_prefix (const char *orig_prefix,
                                      const char *curr_prefix);
# 34 "project/goaccess/src/labels.h" 2
# 49 "project/goaccess/src/ui.h" 2
# 1 "project/goaccess/src/commons.h" 1
# 39 "project/goaccess/src/commons.h"
# 1 "project/goaccess/src/gslist.h" 1
# 34 "project/goaccess/src/gslist.h"

# 34 "project/goaccess/src/gslist.h"
typedef struct GSLList_ {
  void *data;
  struct GSLList_ *next;
} GSLList;
# 48 "project/goaccess/src/gslist.h"
GSLList *list_create (void *data);
GSLList *list_find (GSLList * node, int (*func) (void *, void *), void *data);
GSLList *list_insert_append (GSLList * node, void *data);
GSLList *list_insert_prepend (GSLList * list, void *data);
GSLList *list_copy (GSLList * node);
int list_count (GSLList * list);
int list_foreach (GSLList * node, int (*func) (void *, void *), void *user_data);
int list_remove_node (GSLList ** list, GSLList * node);
int list_remove_nodes (GSLList * list);
# 40 "project/goaccess/src/commons.h" 2
# 48 "project/goaccess/src/commons.h"
extern struct tm now_tm;
# 85 "project/goaccess/src/commons.h"
typedef enum {
  TYPE_IPINV,
  TYPE_IPV4,
  TYPE_IPV6
} GTypeIP;


typedef enum MODULES {
  VISITORS,
  REQUESTS,
  REQUESTS_STATIC,
  NOT_FOUND,
  HOSTS,
  OS,
  BROWSERS,
  VISIT_TIMES,
  VIRTUAL_HOSTS,
  REFERRERS,
  REFERRING_SITES,
  KEYPHRASES,
  STATUS_CODES,
  REMOTE_USER,
  CACHE_STATUS,



  MIME_TYPE,
  TLS_TYPE,
} GModule;



typedef struct GPercTotals_ {
  uint32_t hits;
  uint32_t visitors;
  uint64_t bw;
} GPercTotals;


typedef struct GMetrics {


  uint8_t id;
  char *data;
  char *method;
  char *protocol;

  float hits_perc;
  float visitors_perc;
  float bw_perc;

  uint64_t hits;
  uint64_t visitors;



  union {
    char *sbw;
    uint64_t nbw;
  } bw;



  union {
    char *sts;
    uint64_t nts;
  } avgts;



  union {
    char *sts;
    uint64_t nts;
  } cumts;



  union {
    char *sts;
    uint64_t nts;
  } maxts;
} GMetrics;


typedef struct GSubItem_ {
  GModule module;
  GMetrics *metrics;
  struct GSubItem_ *prev;
  struct GSubItem_ *next;
} GSubItem;


typedef struct GSubList_ {
  int size;
  struct GSubItem_ *head;
  struct GSubItem_ *tail;
} GSubList;


typedef struct GHolderItem_ {
  GSubList *sub_list;
  GMetrics *metrics;
} GHolderItem;


typedef struct GHolder_ {
  GHolderItem *items;
  GModule module;
  int idx;
  int holder_size;
  uint32_t ht_size;
  int sub_items_size;
} GHolder;


typedef struct GEnum_ {
  const char *str;
  int idx;
} GEnum;


typedef struct GDataMap_ {
  int data;
  int root;
} GDataMap;

typedef struct GAgentItem_ {
  char *agent;
} GAgentItem;

typedef struct GAgents_ {
  int size;
  int idx;
  struct GAgentItem_ *items;
} GAgents;





extern time_t end_proc;
extern time_t timestamp;
extern time_t start_proc;


extern int module_list[17];


GAgents *new_gagents (uint32_t size);
void free_agents_array (GAgents *agents);

char *enum2str (const GEnum map[], int len, int idx);
char *get_module_str (GModule module);
float get_percentage (unsigned long long total, unsigned long long hit);
int get_max_choices (void);
int get_module_enum (const char *str);
int has_timestamp (const char *fmt);
int str2enum (const GEnum map[], int len, const char *str);

int enable_panel (GModule mod);
int get_module_index (int module);
int get_next_module (GModule module);
int get_prev_module (GModule module);
int ignore_panel (GModule mod);
int init_modules (void);
int remove_module(GModule module);
uint32_t get_num_modules (void);
void verify_panels (void);

char *get_log_source_str (int max_len);
intmax_t get_log_sizes (void);

void display_default_config_file (void);
void display_storage (void);
void display_version (void);
# 50 "project/goaccess/src/ui.h" 2
# 155 "project/goaccess/src/ui.h"
# 1 "project/goaccess/src/color.h" 1
# 36 "project/goaccess/src/color.h"
typedef enum CSTM_COLORS {
  COLOR_NORMAL,
  COLOR_MTRC_HITS,
  COLOR_MTRC_VISITORS,
  COLOR_MTRC_DATA,
  COLOR_MTRC_BW,
  COLOR_MTRC_AVGTS,
  COLOR_MTRC_CUMTS,
  COLOR_MTRC_MAXTS,
  COLOR_MTRC_PROT,
  COLOR_MTRC_MTHD,
  COLOR_MTRC_HITS_PERC,
  COLOR_MTRC_HITS_PERC_MAX,
  COLOR_MTRC_VISITORS_PERC,
  COLOR_MTRC_VISITORS_PERC_MAX,
  COLOR_PANEL_COLS,
  COLOR_BARS,
  COLOR_ERROR,
  COLOR_SELECTED,
  COLOR_PANEL_ACTIVE,
  COLOR_PANEL_HEADER,
  COLOR_PANEL_DESC,
  COLOR_OVERALL_LBLS,
  COLOR_OVERALL_VALS,
  COLOR_OVERALL_PATH,
  COLOR_ACTIVE_LABEL,
  COLOR_BG,
  COLOR_DEFAULT,
  COLOR_PROGRESS,
} GColorItem;


typedef enum SCHEMES {
  NO_COLOR,
  MONOCHROME,
  STD_GREEN,
  MONOKAI,
} GShemes;

# 1 "project/goaccess/src/commons.h" 1
# 76 "project/goaccess/src/color.h" 2


typedef struct GColorPair_ {
  short idx;
  short fg;
  short bg;
} GColorPair;


typedef struct GColors_ {
  GColorItem item;
  GColorPair *pair;
  int attr;
  short module;
} GColors;

GColors *color_default (void);
GColors *color_error (void);
GColors *color_overall_lbls (void);
GColors *color_overall_path (void);
GColors *color_overall_vals (void);
GColors *color_panel_active (void);
GColors *color_panel_desc (void);
GColors *color_panel_header (void);
GColors *color_progress (void);
GColors *color_selected (void);
GColors *get_color_by_item_module (GColorItem item, GModule module);
GColors *get_color (GColorItem item);
GColors *get_color_normal (void);
void free_color_lists (void);
void set_colors (int force);
void set_normal_color (void);
# 156 "project/goaccess/src/ui.h" 2
# 1 "project/goaccess/src/commons.h" 1
# 157 "project/goaccess/src/ui.h" 2
# 1 "project/goaccess/src/sort.h" 1
# 37 "project/goaccess/src/sort.h"
# 1 "project/goaccess/src/commons.h" 1
# 38 "project/goaccess/src/sort.h" 2
# 1 "project/goaccess/src/parser.h" 1
# 51 "project/goaccess/src/parser.h"
# 1 "project/goaccess/src/commons.h" 1
# 52 "project/goaccess/src/parser.h" 2



typedef struct GLogItem_ {
  char *agent;
  char *browser;
  char *browser_type;
  char *continent;
  char *country;
  char *date;
  char *host;
  char *keyphrase;
  char *method;
  char *os;
  char *os_type;
  char *protocol;
  char *qstr;
  char *ref;
  char *req;
  char *req_key;
  char *status;
  char *time;
  char *uniq_key;
  char *vhost;
  char *userid;
  char *cache_status;

  char site[511 + 1];
  char agent_hex[64];

  uint64_t resp_size;
  uint64_t serve_time;

  uint32_t numdate;
  uint32_t agent_hash;
  int ignorelevel;
  int type_ip;
  int is_404;
  int is_static;
  int uniq_nkey;
  int agent_nkey;


  char *mime_type;
  char *tls_type;
  char *tls_cypher;
  char *tls_type_cypher;

  char *errstr;
  struct tm dt;
} GLogItem;

typedef struct GLastParse_ {
  uint32_t line;
  int64_t ts;
  uint64_t size;
  uint16_t snippetlen;
  char snippet[4096u + 1];
} GLastParse;


typedef struct GLog_ {
  uint8_t piping:1;
  uint8_t log_erridx;
  uint32_t read;
  uint32_t inode;
  uint64_t bytes;
  uint64_t size;
  uint64_t length;
  uint64_t invalid;
  uint64_t processed;


  uint16_t snippetlen;
  char snippet[4096u + 1];

  GLogItem *items;
  GLastParse lp;

  char *filename;
  char **errors;

  FILE *pipe;
} GLog;


typedef struct Logs_ {
  uint8_t restored:1;
  uint8_t load_from_disk_only:1;
  uint64_t *processed;
  uint64_t offset;
  int size;
  char *filename;
  GLog *glog;
} Logs;


typedef enum {
  U32,
  STR
} datatype;


typedef struct GRawDataItem_ {
  uint32_t nkey;
  union {
    const char *data;
    uint32_t hits;
  };
} GRawDataItem;


typedef struct GRawData_ {
  GRawDataItem *items;
  GModule module;
  datatype type;
  int idx;
  int size;
} GRawData;


char *extract_by_delim (char **str, const char *end);
char *fgetline (FILE * fp);
char **test_format (Logs * logs, int *len);
int parse_log (Logs * logs, int dry_run);
int pre_process_log (GLog * glog, char *line, int dry_run);
int set_initial_persisted_data (GLog * glog, FILE * fp, const char *fn);
void free_logerrors (GLog * glog);
void free_logs (Logs * logs);
void free_raw_data (GRawData * raw_data);
void output_logerrors (void);
void reset_struct (Logs * logs);

GLogItem *init_log_item (GLog * glog);
GRawDataItem *new_grawdata_item (unsigned int size);
GRawData *new_grawdata (void);
Logs *init_logs (int size);
# 39 "project/goaccess/src/sort.h" 2
# 48 "project/goaccess/src/sort.h"
typedef enum GSortField_ {
  SORT_BY_HITS,
  SORT_BY_VISITORS,
  SORT_BY_DATA,
  SORT_BY_BW,
  SORT_BY_AVGTS,
  SORT_BY_CUMTS,
  SORT_BY_MAXTS,
  SORT_BY_PROT,
  SORT_BY_MTHD,
} GSortField;


typedef enum GSortOrder_ {
  SORT_ASC,
  SORT_DESC
} GSortOrder;


typedef struct GSort_ {
  GModule module;
  GSortField field;
  GSortOrder sort;
} GSort;

extern GSort module_sort[17];
extern const int sort_choices[][11];;

GRawData *sort_raw_num_data (GRawData * raw_data, int ht_size);
GRawData *sort_raw_str_data (GRawData * raw_data, int ht_size);
const char *get_sort_field_key (GSortField field);
const char *get_sort_field_str (GSortField field);
const char *get_sort_order_str (GSortOrder order);
int can_sort_module (GModule module, int field);
int get_sort_field_enum (const char *str);
int get_sort_order_enum (const char *str);
int strcmp_asc (const void *a, const void *b);
int cmp_ui32_asc (const void *a, const void *b);
int cmp_ui32_desc (const void *a, const void *b);
void parse_initial_sort (void);
void set_initial_sort (const char *smod, const char *sfield, const char *ssort);
void sort_holder_items (GHolderItem * items, int size, GSort sort);
# 158 "project/goaccess/src/ui.h" 2


typedef struct GFind_ {
  GModule module;
  char *pattern;
  int next_idx;
  int next_parent_idx;
  int next_sub_idx;
  int look_in_sub;
  int done;
  int icase;
} GFind;


typedef struct GScrollModule_ {
  int scroll;
  int offset;
} GScrollModule;


typedef struct GScroll_ {
  GScrollModule module[17];
  GModule current;
  int dash;
  int expanded;
} GScroll;


typedef struct GSpinner_ {
  const char *label;
  GColors *(*color) (void);
  int curses;
  int spin_x;
  int w;
  int x;
  int y;
  pthread_mutex_t mutex;
  pthread_t thread;
  uint64_t **processed;
  char **filename;
  WINDOW *win;
  enum {
    SPN_RUN,
    SPN_END
  } state;
} GSpinner;



typedef struct GOutput_ {
  GModule module;
  int8_t visitors;
  int8_t hits;
  int8_t percent;
  int8_t bw;
  int8_t avgts;
  int8_t cumts;
  int8_t maxts;
  int8_t protocol;
  int8_t method;
  int8_t data;
  int8_t graph;
  int8_t sub_graph;
} GOutput;


GOutput *output_lookup (GModule module);
GSpinner *new_gspinner (void);

char *get_browser_type (char *line);
char *get_overall_header (GHolder *h);
char *input_string (WINDOW * win, int pos_y, int pos_x, size_t max_width, const char *str, int enable_case, int *toggle_case);
const char *module_to_desc (GModule module);
const char *module_to_head (GModule module);
const char *module_to_id (GModule module);
const char *module_to_label (GModule module);
GAgents *load_host_agents (const char *addr);
int get_start_end_parsing_dates (char **start, char **end, const char *f);
int render_confdlg (Logs * logs, GSpinner * spinner);
void close_win (WINDOW * w);
void display_general (WINDOW * win, GHolder *h);
void draw_header (WINDOW * win, const char *s, const char *fmt, int y, int x, int w, GColors * (*func) (void));
void end_spinner (void);
void generate_time (void);
void init_colors (int force);
void init_windows (WINDOW ** header_win, WINDOW ** main_win);
void load_agent_list (WINDOW * main_win, char *addr);
void load_help_popup (WINDOW * main_win);
void load_schemes_win (WINDOW * main_win);
void load_sort_win (WINDOW * main_win, GModule module, GSort * sort);
void lock_spinner (void);
void set_curses_spinner (GSpinner *spinner);
void set_input_opts (void);
void set_wbkgd (WINDOW *main_win, WINDOW *header_win);
void term_size (WINDOW * main_win, int *main_win_height);
void ui_spinner_create (GSpinner * spinner);
void unlock_spinner (void);
void update_active_module (WINDOW * header_win, GModule current);
void update_header (WINDOW * header_win, int current);
# 60 "project/goaccess/src/ui.c" 2


# 1 "project/goaccess/src/error.h" 1
# 34 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/commons.h" 1
# 35 "project/goaccess/src/error.h" 2
# 47 "project/goaccess/src/error.h"
# 1 "project/goaccess/src/settings.h" 1
# 34 "project/goaccess/src/settings.h"
# 1 "project/goaccess/src/commons.h" 1
# 35 "project/goaccess/src/settings.h" 2
# 47 "project/goaccess/src/settings.h"
typedef enum LOGTYPE {
  COMBINED,
  VCOMBINED,
  COMMON,
  VCOMMON,
  W3C,
  CLOUDFRONT,
  CLOUDSTORAGE,
  AWSELB,
  SQUID,
  AWSS3,
  CADDY,
  AWSALB,
} GLogType;


typedef struct GPreConfTime_ {
  const char *fmt24;
  const char *usec;
  const char *sec;
} GPreConfTime;


typedef struct GPreConfDate_ {
  const char *apache;
  const char *w3c;
  const char *usec;
  const char *sec;
} GPreConfDate;


typedef struct GPreConfLog_ {
  const char *combined;
  const char *vcombined;
  const char *common;
  const char *vcommon;
  const char *w3c;
  const char *cloudfront;
  const char *cloudstorage;
  const char *awselb;
  const char *squid;
  const char *awss3;
  const char *caddy;
  const char *awsalb;
} GPreConfLog;



typedef struct GConf_
{

  const char *colors[64];
  const char *enable_panels[17];
  const char *filenames[3072];
  const char *hide_referers[64];
  const char *ignore_ips[1024 + 128];
  const char *ignore_panels[17];
  const char *ignore_referers[64];
  const char *ignore_status[64];
  const char *output_formats[3];
  const char *sort_panels[17];
  const char *static_files[128];


  char *date_format;
  char *date_num_format;
  char *time_format;
  char *spec_date_time_format;
  char *spec_date_time_num_format;
  char *log_format;
  char *iconfigfile;
  char ***user_browsers_hash;

  const char *debug_log;
  const char *geoip_database;
  const char *html_custom_css;
  const char *html_custom_js;
  const char *html_prefs;
  const char *html_report_title;
  const char *invalid_requests_log;
  const char *unknowns_log;
  const char *pidfile;
  const char *browsers_file;
  const char *db_path;


  const char *addr;
  const char *fifo_in;
  const char *fifo_out;
  const char *origin;
  const char *port;
  const char *sslcert;
  const char *sslkey;
  const char *ws_url;
  const char *unix_socket;


  int all_static_files;
  int anonymize_ip;
  int append_method;
  int append_protocol;
  int client_err_to_unique_count;
  int code444_as_404;
  int color_scheme;
  int crawlers_only ;
  int daemonize;
  const char *username;
  int double_decode;
  int enable_html_resolver;
  int geo_db;
  int hl_header;
  int ignore_crawlers;
  int ignore_qstr;
  int ignore_statics;
  int json_pretty_print;
  int list_agents;
  int load_conf_dlg;
  int load_global_config;
  int max_items;
  int mouse_support;
  int no_color;
  int no_strict_status;
  int no_column_names;
  int no_csv_summary;
  int no_html_last_updated;
  int no_ip_validation;
  int no_parsing_spinner;
  int no_progress;
  int no_tab_scroll;
  int output_stdout;
  int persist;
  int process_and_exit;
  int real_os;
  int real_time_html;
  int restore;
  int skip_term_resolver;
  int is_json_log_format;
  uint32_t keep_last;
  uint32_t num_tests;
  uint64_t html_refresh;
  uint64_t log_size;


  int bandwidth;
  int date_spec_hr;
  int has_geocity;
  int has_geocountry;
  int hour_spec_min;
  int read_stdin;
  int serve_usecs;
  int stop_processing;
  int tailing_mode;


  int color_idx;
  int enable_panel_idx;
  int filenames_idx;
  int hide_referer_idx;
  int ignore_ip_idx;
  int ignore_panel_idx;
  int ignore_referer_idx;
  int ignore_status_idx;
  int output_format_idx;
  int sort_panel_idx;
  int static_file_idx;
  int browsers_hash_idx;

  size_t static_file_max_len;

} GConf;


char *get_selected_date_str (size_t idx);
char *get_selected_format_str (size_t idx);
char *get_selected_time_str (size_t idx);
const char *verify_formats (void);
int is_json_log_format (const char *fmt);
int parse_json_string (void *userdata, const char *str, int (*cb) (void *, char *, char *));
size_t get_selected_format_idx (void);
void set_date_format_str (const char *optarg);
void set_log_format_str (const char *optarg);
void set_spec_date_format (void);
void set_time_format_str (const char *optarg);

extern GConf conf;

char *get_config_file_path (void);
int parse_conf_file (int *argc, char ***argv);
void free_cmd_args (void);
void free_formats (void);
void set_default_static_files (void);
# 48 "project/goaccess/src/error.h" 2
# 80 "project/goaccess/src/error.h"
int access_log_open (const char *path);
void access_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void access_log_close (void);
void dbg_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void dbg_log_close (void);
void dbg_log_open (const char *file);
void dbg_printf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void invalid_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void unknowns_fprintf (const char *fmt, ...) __attribute__((format (printf, 1, 2)));
void invalid_log_close (void);
void invalid_log_open (const char *path);
void set_signal_data (void *p);
void setup_sigsegv_handler (void);
void sigsegv_handler (int sig);
void unknowns_log_close (void);
void unknowns_log_open (const char *path);
# 63 "project/goaccess/src/ui.c" 2
# 1 "project/goaccess/src/gkhash.h" 1
# 36 "project/goaccess/src/gkhash.h"
# 1 "project/goaccess/src/gstorage.h" 1
# 33 "project/goaccess/src/gstorage.h"
# 1 "project/goaccess/src/commons.h" 1
# 34 "project/goaccess/src/gstorage.h" 2







typedef enum GSMetric_ {
  MTRC_KEYMAP,
  MTRC_ROOTMAP,
  MTRC_DATAMAP,
  MTRC_UNIQMAP,
  MTRC_ROOT,
  MTRC_HITS,
  MTRC_VISITORS,
  MTRC_BW,
  MTRC_CUMTS,
  MTRC_MAXTS,
  MTRC_METHODS,
  MTRC_PROTOCOLS,
  MTRC_AGENTS,
  MTRC_METADATA,
  MTRC_UNIQUE_KEYS,
  MTRC_AGENT_KEYS,
  MTRC_AGENT_VALS,
  MTRC_CNT_VALID,
  MTRC_CNT_BW,
} GSMetric;



typedef enum GAMetric_ {
  MTRC_DATES,
  MTRC_SEQS,
  MTRC_CNT_OVERALL,
  MTRC_HOSTNAMES,
  MTRC_LAST_PARSE,
  MTRC_JSON_LOGFMT,
  MTRC_METH_PROTO,
  MTRC_DB_PROPS,
} GAMetric;




typedef struct GKeyData_ {
  const void *data;
  uint32_t dhash;
  uint32_t data_nkey;
  uint32_t cdnkey;

  uint32_t rhash;
  const void *root;
  const void *root_key;
  uint32_t root_nkey;
  uint32_t crnkey;

  void *uniq_key;
  uint32_t uniq_nkey;

  uint32_t numdate;
} GKeyData;

typedef struct GParse_ {
  GModule module;
  int (*key_data) (GKeyData * kdata, GLogItem * logitem);


  void (*datamap) (GModule module, GKeyData * kdata);
  void (*rootmap) (GModule module, GKeyData * kdata);
  void (*hits) (GModule module, GKeyData * kdata);
  void (*visitor) (GModule module, GKeyData * kdata);
  void (*bw) (GModule module, GKeyData * kdata, uint64_t size);
  void (*cumts) (GModule module, GKeyData * kdata, uint64_t ts);
  void (*maxts) (GModule module, GKeyData * kdata, uint64_t ts);
  void (*method) (GModule module, GKeyData * kdata, const char *data);
  void (*protocol) (GModule module, GKeyData * kdata, const char *data);
  void (*agent) (GModule module, GKeyData * kdata, uint32_t agent_nkey);
} GParse;

typedef struct httpmethods_ {
  const char *method;
  int len;
} httpmethods;

typedef struct httpprotocols_ {
  const char *protocol;
  int len;
} httpprotocols;

extern const httpmethods http_methods[];
extern const httpprotocols http_protocols[];
extern size_t http_methods_len;
extern size_t http_protocols_len;

char *get_mtr_str (GSMetric metric);
int excluded_ip (GLogItem * logitem);
uint32_t *i322ptr (uint32_t val);
uint64_t *uint642ptr (uint64_t val);
void count_process_and_invalid (GLog * glog, const char *line);
void count_process (GLog * glog);
void free_gmetrics (GMetrics * metric);
void insert_methods_protocols (void);
void process_log (GLogItem * logitem);
void set_data_metrics (GMetrics * ometrics, GMetrics ** nmetrics, GPercTotals totals);
void set_module_totals (GPercTotals * totals);
void uncount_invalid (GLog * glog);
void uncount_processed (GLog * glog);
GMetrics *new_gmetrics (void);
# 37 "project/goaccess/src/gkhash.h" 2
# 1 "project/goaccess/src/khash.h" 1
# 130 "project/goaccess/src/khash.h"
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
# 131 "project/goaccess/src/khash.h" 2




typedef unsigned int khint32_t;





typedef unsigned long khint64_t;
# 162 "project/goaccess/src/khash.h"
typedef khint32_t khint_t;
typedef khint_t khiter_t;
# 192 "project/goaccess/src/khash.h"
static const double __ac_HASH_UPPER = 0.77;
# 442 "project/goaccess/src/khash.h"
  static inline khint_t __ac_X31_hash_string (const char *s) {
  khint_t h = (khint_t) * s;
  if (h)
    for (++s; *s; ++s)
      h = (h << 5) - h + (khint_t) * s;
  return h;
  }
# 461 "project/goaccess/src/khash.h"
static inline khint_t
__ac_Wang_hash (khint_t key) {
  key += ~(key << 15);
  key ^= (key >> 10);
  key += (key << 3);
  key ^= (key >> 6);
  key += ~(key << 11);
  key ^= (key >> 16);
  return key;
}
# 662 "project/goaccess/src/khash.h"
typedef const char *kh_cstr_t;
# 38 "project/goaccess/src/gkhash.h" 2






typedef enum GSMetricType_ {

  MTRC_TYPE_II32,

  MTRC_TYPE_IS32,

  MTRC_TYPE_IU64,

  MTRC_TYPE_SI32,

  MTRC_TYPE_SI08,

  MTRC_TYPE_II08,

  MTRC_TYPE_SS32,

  MTRC_TYPE_IGSL,

  MTRC_TYPE_SU64,

  MTRC_TYPE_IGKH,

  MTRC_TYPE_U648,

  MTRC_TYPE_IGLP,
} GSMetricType;

typedef struct GKDB_ GKDB;
typedef struct GKHashStorage_ GKHashStorage;



typedef struct kh_igdb_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GKDB * *vals; } kh_igdb_t; static inline __attribute__ ((__unused__)) kh_igdb_t *kh_init_igdb(void) { return (kh_igdb_t*) calloc(1,sizeof(kh_igdb_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_igdb(kh_igdb_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_igdb(kh_igdb_t *h) { if (h && h->flags) { 
# 76 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 76 "project/goaccess/src/gkhash.h"
h->flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 
# 76 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 76 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 76 "project/goaccess/src/gkhash.h"
h->flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 76 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_igdb(const kh_igdb_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_igdb(kh_igdb_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 76 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 76 "project/goaccess/src/gkhash.h"
new_flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 
# 76 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 76 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 76 "project/goaccess/src/gkhash.h"
new_flags
# 76 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 76 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GKDB * *new_vals = (GKDB * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKDB *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GKDB * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GKDB * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GKDB * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKDB *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_igdb(kh_igdb_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_igdb (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_igdb (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_igdb(kh_igdb_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_igkh_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GKHashStorage * *vals; } kh_igkh_t; static inline __attribute__ ((__unused__)) kh_igkh_t *kh_init_igkh(void) { return (kh_igkh_t*) calloc(1,sizeof(kh_igkh_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_igkh(kh_igkh_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_igkh(kh_igkh_t *h) { if (h && h->flags) { 
# 78 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 78 "project/goaccess/src/gkhash.h"
h->flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 
# 78 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 78 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 78 "project/goaccess/src/gkhash.h"
h->flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 78 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_igkh(const kh_igkh_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_igkh(kh_igkh_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 78 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 78 "project/goaccess/src/gkhash.h"
new_flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 
# 78 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 78 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 78 "project/goaccess/src/gkhash.h"
new_flags
# 78 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 78 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GKHashStorage * *new_vals = (GKHashStorage * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKHashStorage *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GKHashStorage * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GKHashStorage * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GKHashStorage * *) realloc((void *) h->vals,new_n_buckets * sizeof (GKHashStorage *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_igkh(kh_igkh_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_igkh (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_igkh (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_igkh(kh_igkh_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_ii32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; uint32_t *vals; } kh_ii32_t; static inline __attribute__ ((__unused__)) kh_ii32_t *kh_init_ii32(void) { return (kh_ii32_t*) calloc(1,sizeof(kh_ii32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_ii32(kh_ii32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_ii32(kh_ii32_t *h) { if (h && h->flags) { 
# 80 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 80 "project/goaccess/src/gkhash.h"
h->flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 
# 80 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 80 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 80 "project/goaccess/src/gkhash.h"
h->flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 80 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_ii32(const kh_ii32_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_ii32(kh_ii32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 80 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 80 "project/goaccess/src/gkhash.h"
new_flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 
# 80 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 80 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 80 "project/goaccess/src/gkhash.h"
new_flags
# 80 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 80 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint32_t *new_vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; uint32_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint32_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_ii32(kh_ii32_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_ii32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_ii32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_ii32(kh_ii32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_is32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; char * *vals; } kh_is32_t; static inline __attribute__ ((__unused__)) kh_is32_t *kh_init_is32(void) { return (kh_is32_t*) calloc(1,sizeof(kh_is32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_is32(kh_is32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_is32(kh_is32_t *h) { if (h && h->flags) { 
# 82 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 82 "project/goaccess/src/gkhash.h"
h->flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 
# 82 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 82 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 82 "project/goaccess/src/gkhash.h"
h->flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 82 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_is32(const kh_is32_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_is32(kh_is32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 82 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 82 "project/goaccess/src/gkhash.h"
new_flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 
# 82 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 82 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 82 "project/goaccess/src/gkhash.h"
new_flags
# 82 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 82 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { char * *new_vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; char * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { char * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_is32(kh_is32_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_is32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_is32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_is32(kh_is32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_iu64_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; uint64_t *vals; } kh_iu64_t; static inline __attribute__ ((__unused__)) kh_iu64_t *kh_init_iu64(void) { return (kh_iu64_t*) calloc(1,sizeof(kh_iu64_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_iu64(kh_iu64_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_iu64(kh_iu64_t *h) { if (h && h->flags) { 
# 84 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 84 "project/goaccess/src/gkhash.h"
h->flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 
# 84 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 84 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 84 "project/goaccess/src/gkhash.h"
h->flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 84 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_iu64(const kh_iu64_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_iu64(kh_iu64_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 84 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 84 "project/goaccess/src/gkhash.h"
new_flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 
# 84 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 84 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 84 "project/goaccess/src/gkhash.h"
new_flags
# 84 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 84 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint64_t *new_vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; uint64_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint64_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_iu64(kh_iu64_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_iu64 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_iu64 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_iu64(kh_iu64_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_si32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; uint32_t *vals; } kh_si32_t; static inline __attribute__ ((__unused__)) kh_si32_t *kh_init_si32(void) { return (kh_si32_t*) calloc(1,sizeof(kh_si32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_si32(kh_si32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_si32(kh_si32_t *h) { if (h && h->flags) { 
# 86 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 86 "project/goaccess/src/gkhash.h"
h->flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 
# 86 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 86 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 86 "project/goaccess/src/gkhash.h"
h->flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 86 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_si32(const kh_si32_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_si32(kh_si32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 86 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 86 "project/goaccess/src/gkhash.h"
new_flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 
# 86 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 86 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 86 "project/goaccess/src/gkhash.h"
new_flags
# 86 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 86 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint32_t *new_vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; uint32_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint32_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (uint32_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint32_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_si32(kh_si32_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_si32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_si32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_si32(kh_si32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_si08_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; uint8_t *vals; } kh_si08_t; static inline __attribute__ ((__unused__)) kh_si08_t *kh_init_si08(void) { return (kh_si08_t*) calloc(1,sizeof(kh_si08_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_si08(kh_si08_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_si08(kh_si08_t *h) { if (h && h->flags) { 
# 88 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 88 "project/goaccess/src/gkhash.h"
h->flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 
# 88 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 88 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 88 "project/goaccess/src/gkhash.h"
h->flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 88 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_si08(const kh_si08_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_si08(kh_si08_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 88 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 88 "project/goaccess/src/gkhash.h"
new_flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 
# 88 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 88 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 88 "project/goaccess/src/gkhash.h"
new_flags
# 88 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 88 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint8_t *new_vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; uint8_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint8_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_si08(kh_si08_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_si08 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_si08 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_si08(kh_si08_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_ii08_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; uint8_t *vals; } kh_ii08_t; static inline __attribute__ ((__unused__)) kh_ii08_t *kh_init_ii08(void) { return (kh_ii08_t*) calloc(1,sizeof(kh_ii08_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_ii08(kh_ii08_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_ii08(kh_ii08_t *h) { if (h && h->flags) { 
# 90 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 90 "project/goaccess/src/gkhash.h"
h->flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 
# 90 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 90 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 90 "project/goaccess/src/gkhash.h"
h->flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 90 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_ii08(const kh_ii08_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_ii08(kh_ii08_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 90 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 90 "project/goaccess/src/gkhash.h"
new_flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 
# 90 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 90 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 90 "project/goaccess/src/gkhash.h"
new_flags
# 90 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 90 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint8_t *new_vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; uint8_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint8_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_ii08(kh_ii08_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_ii08 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_ii08 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_ii08(kh_ii08_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_ss32_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; char * *vals; } kh_ss32_t; static inline __attribute__ ((__unused__)) kh_ss32_t *kh_init_ss32(void) { return (kh_ss32_t*) calloc(1,sizeof(kh_ss32_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_ss32(kh_ss32_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_ss32(kh_ss32_t *h) { if (h && h->flags) { 
# 92 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 92 "project/goaccess/src/gkhash.h"
h->flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 
# 92 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 92 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 92 "project/goaccess/src/gkhash.h"
h->flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 92 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_ss32(const kh_ss32_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_ss32(kh_ss32_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 92 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 92 "project/goaccess/src/gkhash.h"
new_flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 
# 92 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 92 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 92 "project/goaccess/src/gkhash.h"
new_flags
# 92 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 92 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { char * *new_vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; char * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { char * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (char * *) realloc((void *) h->vals,new_n_buckets * sizeof (char *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_ss32(kh_ss32_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_ss32 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_ss32 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_ss32(kh_ss32_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_iglp_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GLastParse *vals; } kh_iglp_t; static inline __attribute__ ((__unused__)) kh_iglp_t *kh_init_iglp(void) { return (kh_iglp_t*) calloc(1,sizeof(kh_iglp_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_iglp(kh_iglp_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_iglp(kh_iglp_t *h) { if (h && h->flags) { 
# 94 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 94 "project/goaccess/src/gkhash.h"
h->flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 
# 94 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 94 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 94 "project/goaccess/src/gkhash.h"
h->flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 94 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_iglp(const kh_iglp_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_iglp(kh_iglp_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 94 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 94 "project/goaccess/src/gkhash.h"
new_flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 
# 94 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 94 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 94 "project/goaccess/src/gkhash.h"
new_flags
# 94 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 94 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GLastParse *new_vals = (GLastParse *) realloc((void *) h->vals,new_n_buckets * sizeof (GLastParse)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GLastParse val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GLastParse tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GLastParse *) realloc((void *) h->vals,new_n_buckets * sizeof (GLastParse)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_iglp(kh_iglp_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_iglp (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_iglp (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_iglp(kh_iglp_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_igsl_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint32_t *keys; GSLList * *vals; } kh_igsl_t; static inline __attribute__ ((__unused__)) kh_igsl_t *kh_init_igsl(void) { return (kh_igsl_t*) calloc(1,sizeof(kh_igsl_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_igsl(kh_igsl_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_igsl(kh_igsl_t *h) { if (h && h->flags) { 
# 96 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 96 "project/goaccess/src/gkhash.h"
h->flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 
# 96 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 96 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 96 "project/goaccess/src/gkhash.h"
h->flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 96 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_igsl(const kh_igsl_t *h, khint32_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_igsl(kh_igsl_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 96 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 96 "project/goaccess/src/gkhash.h"
new_flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 
# 96 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 96 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 96 "project/goaccess/src/gkhash.h"
new_flags
# 96 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 96 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint32_t *new_keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { GSLList * *new_vals = (GSLList * *) realloc((void *) h->vals,new_n_buckets * sizeof (GSLList *)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint32_t key = h->keys[j]; GSLList * val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint32_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { GSLList * tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint32_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint32_t)); if (1) h->vals = (GSLList * *) realloc((void *) h->vals,new_n_buckets * sizeof (GSLList *)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_igsl(kh_igsl_t *h, khint32_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_igsl (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_igsl (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_igsl(kh_igsl_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_su64_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; kh_cstr_t *keys; uint64_t *vals; } kh_su64_t; static inline __attribute__ ((__unused__)) kh_su64_t *kh_init_su64(void) { return (kh_su64_t*) calloc(1,sizeof(kh_su64_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_su64(kh_su64_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_su64(kh_su64_t *h) { if (h && h->flags) { 
# 98 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 98 "project/goaccess/src/gkhash.h"
h->flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 
# 98 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 98 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 98 "project/goaccess/src/gkhash.h"
h->flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 98 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_su64(const kh_su64_t *h, kh_cstr_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = __ac_X31_hash_string(key); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_su64(kh_su64_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 98 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 98 "project/goaccess/src/gkhash.h"
new_flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 
# 98 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 98 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 98 "project/goaccess/src/gkhash.h"
new_flags
# 98 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 98 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { kh_cstr_t *new_keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint64_t *new_vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { kh_cstr_t key = h->keys[j]; uint64_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = __ac_X31_hash_string(key); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { kh_cstr_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint64_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (kh_cstr_t *) realloc((void *) h->keys,new_n_buckets * sizeof (kh_cstr_t)); if (1) h->vals = (uint64_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint64_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_su64(kh_su64_t *h, kh_cstr_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_su64 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_su64 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = __ac_X31_hash_string(key); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !(strcmp(h->keys[i], key) == 0))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_su64(kh_su64_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };

typedef struct kh_u648_s { khint_t n_buckets, size, n_occupied, upper_bound; khint32_t *flags; khint64_t *keys; uint8_t *vals; } kh_u648_t; static inline __attribute__ ((__unused__)) kh_u648_t *kh_init_u648(void) { return (kh_u648_t*) calloc(1,sizeof(kh_u648_t)); } static inline __attribute__ ((__unused__)) void kh_destroy_u648(kh_u648_t *h) { if (h) { free((void *) h->keys); free(h->flags); free((void *) h->vals); free(h); } } static inline __attribute__ ((__unused__)) void kh_clear_u648(kh_u648_t *h) { if (h && h->flags) { 
# 100 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 100 "project/goaccess/src/gkhash.h"
h->flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 
# 100 "project/goaccess/src/gkhash.h"
0xaa, ((h->n_buckets) < 16? 1 : (h->n_buckets)>>4) * sizeof (khint32_t)
# 100 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 100 "project/goaccess/src/gkhash.h"
h->flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 100 "project/goaccess/src/gkhash.h"
; h->size = h->n_occupied = 0; } } static inline __attribute__ ((__unused__)) khint_t kh_get_u648(const kh_u648_t *h, khint64_t key) { if (h->n_buckets) { khint_t k, i, last, mask, step = 0; mask = h->n_buckets - 1; k = (khint32_t)((key)>>33^(key)^(key)<<11); i = k & mask; last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { i = (i + (++step)) & mask; if (i == last) return h->n_buckets; } return ((h->flags[i>>4]>>((i&0xfU)<<1))&3) ? h->n_buckets : i; } else return 0; } static inline __attribute__ ((__unused__)) int kh_resize_u648(kh_u648_t *h, khint_t new_n_buckets) { khint32_t *new_flags = 0; khint_t j = 1; { (--(new_n_buckets), (new_n_buckets)|=(new_n_buckets)>>1, (new_n_buckets)|=(new_n_buckets)>>2, (new_n_buckets)|=(new_n_buckets)>>4, (new_n_buckets)|=(new_n_buckets)>>8, (new_n_buckets)|=(new_n_buckets)>>16, ++(new_n_buckets)); if (new_n_buckets < 4) new_n_buckets = 4; if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) j = 0; else { new_flags = (khint32_t *) malloc(((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)); if (!new_flags) return -1; 
# 100 "project/goaccess/src/gkhash.h" 3 4
__builtin___memset_chk (
# 100 "project/goaccess/src/gkhash.h"
new_flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 
# 100 "project/goaccess/src/gkhash.h"
0xaa, ((new_n_buckets) < 16? 1 : (new_n_buckets)>>4) * sizeof (khint32_t)
# 100 "project/goaccess/src/gkhash.h" 3 4
, __builtin_object_size (
# 100 "project/goaccess/src/gkhash.h"
new_flags
# 100 "project/goaccess/src/gkhash.h" 3 4
, 0))
# 100 "project/goaccess/src/gkhash.h"
; if (h->n_buckets < new_n_buckets) { khint64_t *new_keys = (khint64_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint64_t)); if (!new_keys) { free(new_flags); return -1; } h->keys = new_keys; if (1) { uint8_t *new_vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); if (!new_vals) { free(new_flags); return -1; } h->vals = new_vals; } } } } if (j) { for (j = 0; j != h->n_buckets; ++j) { if (((h->flags[j>>4]>>((j&0xfU)<<1))&3) == 0) { khint64_t key = h->keys[j]; uint8_t val; khint_t new_mask; new_mask = new_n_buckets - 1; if (1) val = h->vals[j]; (h->flags[j>>4]|=1ul<<((j&0xfU)<<1)); while (1) { khint_t k, i, step = 0; k = (khint32_t)((key)>>33^(key)^(key)<<11); i = k & new_mask; while (!((new_flags[i>>4]>>((i&0xfU)<<1))&2)) i = (i + (++step)) & new_mask; (new_flags[i>>4]&=~(2ul<<((i&0xfU)<<1))); if (i < h->n_buckets && ((h->flags[i>>4]>>((i&0xfU)<<1))&3) == 0) { { khint64_t tmp = h->keys[i]; h->keys[i] = key; key = tmp; } if (1) { uint8_t tmp = h->vals[i]; h->vals[i] = val; val = tmp; } (h->flags[i>>4]|=1ul<<((i&0xfU)<<1)); } else { h->keys[i] = key; if (1) h->vals[i] = val; break; } } } } if (h->n_buckets > new_n_buckets) { h->keys = (khint64_t *) realloc((void *) h->keys,new_n_buckets * sizeof (khint64_t)); if (1) h->vals = (uint8_t *) realloc((void *) h->vals,new_n_buckets * sizeof (uint8_t)); } free(h->flags); h->flags = new_flags; h->n_buckets = new_n_buckets; h->n_occupied = h->size; h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); } return 0; } static inline __attribute__ ((__unused__)) khint_t kh_put_u648(kh_u648_t *h, khint64_t key, int *ret) { khint_t x; if (h->n_occupied >= h->upper_bound) { if (h->n_buckets > (h->size << 1)) { if (kh_resize_u648 (h, h->n_buckets - 1) < 0) { *ret = -1; return h->n_buckets; } } else if (kh_resize_u648 (h, h->n_buckets + 1) < 0) { *ret = -1; return h->n_buckets; } } { khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; x = site = h->n_buckets; k = (khint32_t)((key)>>33^(key)^(key)<<11); i = k & mask; if (((h->flags[i>>4]>>((i&0xfU)<<1))&2)) x = i; else { last = i; while (!((h->flags[i>>4]>>((i&0xfU)<<1))&2) && (((h->flags[i>>4]>>((i&0xfU)<<1))&1) || !((h->keys[i]) == (key)))) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&1)) site = i; i = (i + (++step)) & mask; if (i == last) { x = site; break; } } if (x == h->n_buckets) { if (((h->flags[i>>4]>>((i&0xfU)<<1))&2) && site != h->n_buckets) x = site; else x = i; } } } if (((h->flags[x>>4]>>((x&0xfU)<<1))&2)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; ++h->n_occupied; *ret = 1; } else if (((h->flags[x>>4]>>((x&0xfU)<<1))&1)) { h->keys[x] = key; (h->flags[x>>4]&=~(3ul<<((x&0xfU)<<1))); ++h->size; *ret = 2; } else *ret = 0; return x; } static inline __attribute__ ((__unused__)) void kh_del_u648(kh_u648_t *h, khint_t x) { if (x != h->n_buckets && !((h->flags[x>>4]>>((x&0xfU)<<1))&3)) { (h->flags[x>>4]|=1ul<<((x&0xfU)<<1)); --h->size; } };


typedef struct GKHashMetric_ {
  union {
    GSMetric storem;
    GAMetric dbm;
  } metric;
  GSMetricType type;
  void *(*alloc) (void);
  void (*des) (void *, uint8_t free_data);
  void (*del) (void *, uint8_t free_data);
  uint8_t free_data:1;
  void *hash;
  const char *filename;
} GKHashMetric;


typedef struct GKHashModule_ {
  GModule module;
  GKHashMetric metrics[19];
} GKHashModule;


typedef struct GKHashGlobal_ {
  GKHashMetric metrics[19];
} GKHashGlobal;

struct GKHashStorage_ {
  GKHashModule *mhash;
  GKHashGlobal *ghash;
};


typedef struct GKHashDB_ {
  GKHashMetric metrics[8];
} GKHashDB;


struct GKDB_ {
  GKHashDB *hdb;
  GKHashModule *cache;
  GKHashStorage *store;
  Logs *logs;
};
# 167 "project/goaccess/src/gkhash.h"
extern GKHashMetric module_metrics[];
extern const GKHashMetric global_metrics[];
extern const GKHashMetric app_metrics[];
extern size_t global_metrics_len;
extern size_t module_metrics_len;
extern size_t app_metrics_len;
# 335 "project/goaccess/src/gkhash.h"
char *get_mtr_type_str (GSMetricType type);
char *ht_get_datamap (GModule module, uint32_t key);
char *ht_get_host_agent_val (uint32_t key);
char *ht_get_hostname (const char *host);
char *ht_get_json_logfmt (const char *key);
char *ht_get_method (GModule module, uint32_t key);
char *ht_get_protocol (GModule module, uint32_t key);
char *ht_get_root (GModule module, uint32_t key);
int ht_inc_cnt_bw (uint32_t date, uint64_t inc);
int ht_insert_agent (GModule module, uint32_t date, uint32_t key, uint32_t value);
int ht_insert_agent_value (uint32_t date, uint32_t key, char *value);
int ht_insert_bw (GModule module, uint32_t date, uint32_t key, uint64_t inc, uint32_t ckey);
int ht_insert_cumts (GModule module, uint32_t date, uint32_t key, uint64_t inc, uint32_t ckey);
int ht_insert_datamap (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_date (uint32_t key);
int ht_insert_hostname (const char *ip, const char *host);
int ht_insert_json_logfmt (__attribute__((unused)) void *userdata, char *key, char *spec);
int ht_insert_last_parse (uint32_t key, GLastParse lp);
int ht_insert_maxts (GModule module, uint32_t date, uint32_t key, uint64_t value, uint32_t ckey);
int ht_insert_meta_data (GModule module, uint32_t date, const char *key, uint64_t value);
int ht_insert_method (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_protocol (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_root (GModule module, uint32_t date, uint32_t key, uint32_t value, uint32_t dkey, uint32_t rkey);
int ht_insert_rootmap (GModule module, uint32_t date, uint32_t key, const char *value, uint32_t ckey);
int ht_insert_uniqmap (GModule module, uint32_t date, uint32_t key, uint32_t value);
int invalidate_date (int date);
int rebuild_rawdata_cache (void);
uint32_t *get_sorted_dates (uint32_t *len);
uint32_t ht_get_excluded_ips (void);
uint32_t ht_get_hits (GModule module, int key);
uint32_t ht_get_invalid (void);
uint32_t ht_get_keymap (GModule module, const char *key);
uint32_t ht_get_processed (void);
uint32_t ht_get_processing_time (void);
uint32_t ht_get_size_datamap (GModule module);
uint32_t ht_get_size_dates (void);
uint32_t ht_get_size_uniqmap (GModule module);
uint32_t ht_get_visitors (GModule module, uint32_t key);
uint32_t ht_inc_cnt_overall (const char *key, uint32_t val);
uint32_t ht_inc_cnt_valid (uint32_t date, uint32_t inc);
uint32_t ht_insert_agent_key (uint32_t date, uint32_t key);
uint32_t ht_insert_hits (GModule module, uint32_t date, uint32_t key, uint32_t inc, uint32_t ckey);
uint32_t ht_insert_keymap (GModule module, uint32_t date, uint32_t key, uint32_t * ckey);
uint32_t ht_insert_unique_key (uint32_t date, const char *key);
uint32_t ht_insert_unique_seq (const char *key);
uint32_t ht_insert_visitor (GModule module, uint32_t date, uint32_t key, uint32_t inc, uint32_t ckey);
uint32_t ht_sum_valid (void);
uint64_t ht_get_bw (GModule module, uint32_t key);
uint64_t ht_get_cumts (GModule module, uint32_t key);
uint64_t ht_get_maxts (GModule module, uint32_t key);
uint64_t ht_get_meta_data (GModule module, const char *key);
uint64_t ht_sum_bw (void);
uint8_t ht_insert_meth_proto (const char *key);
void destroy_date_stores (int date);
void free_storage (void);
void ht_get_bw_min_max (GModule module, uint64_t * min, uint64_t * max);
void ht_get_cumts_min_max (GModule module, uint64_t * min, uint64_t * max);
void ht_get_hits_min_max (GModule module, uint32_t * min, uint32_t * max);
void ht_get_maxts_min_max (GModule module, uint64_t * min, uint64_t * max);
void ht_get_visitors_min_max (GModule module, uint32_t * min, uint32_t * max);
void init_pre_storage (Logs *logs);
void init_storage (void);
void u64decode (uint64_t n, uint32_t * x, uint32_t * y);

int ins_iglp (kh_iglp_t * hash, uint32_t key, GLastParse lp);
int ins_igsl (kh_igsl_t * hash, uint32_t key, uint32_t value);
int ins_ii08 (kh_ii08_t * hash, uint32_t key, uint8_t value);
int ins_ii32 (kh_ii32_t * hash, uint32_t key, uint32_t value);
int ins_is32 (kh_is32_t * hash, uint32_t key, char *value);
int ins_iu64 (kh_iu64_t * hash, uint32_t key, uint64_t value);
int ins_si08 (kh_si08_t * hash, const char *key, uint8_t value);
int ins_si32 (kh_si32_t * hash, const char *key, uint32_t value);
int ins_su64 (kh_su64_t * hash, const char *key, uint64_t value);
int ins_u648 (kh_u648_t * hash, uint64_t key, uint8_t value);
void *get_db_instance (uint32_t key);
void * get_hash (int module, uint64_t key, GSMetric metric);
void *get_hdb (GKDB * db, GAMetric mtrc);

GLastParse ht_get_last_parse (uint32_t key);
GRawData *parse_raw_data (GModule module);
GSLList *ht_get_host_agent_list (GModule module, uint32_t key);
GSLList *ht_get_keymap_list_from_key (GModule module, uint32_t key);
Logs *get_db_logs(uint32_t instance);
# 64 "project/goaccess/src/ui.c" 2
# 1 "project/goaccess/src/gmenu.h" 1
# 47 "project/goaccess/src/gmenu.h"
enum ACTION {
  REQ_DOWN,
  REQ_UP,
  REQ_SEL
};

typedef struct GMenu_ GMenu;
typedef struct GItem_ GItem;


struct GItem_ {
  char *name;
  int checked;
};


struct GMenu_ {
  WINDOW *win;

  int count;
  int size;
  int idx;
  int start;
  int h;
  int w;
  int x;
  int y;
  unsigned short multiple;
  unsigned short selectable;
  unsigned short status;
  GItem *items;
};

GMenu *new_gmenu (WINDOW * parent, int h, int w, int y, int x);
int post_gmenu (GMenu * menu);
void gmenu_driver (GMenu * menu, int c);
# 65 "project/goaccess/src/ui.c" 2
# 1 "project/goaccess/src/goaccess.h" 1
# 37 "project/goaccess/src/goaccess.h"
extern GSpinner *parsing_spinner;
extern int active_gdns;

void read_client (void *ptr_data);
# 66 "project/goaccess/src/ui.c" 2
# 1 "project/goaccess/src/util.h" 1
# 59 "project/goaccess/src/util.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 3 4

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
# 232 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 234 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 60 "project/goaccess/src/util.h" 2



# 62 "project/goaccess/src/util.h"
char *alloc_string (const char *str);
char *char_repeat (int n, char c);
char *char_replace (char *str, char o, char n);
char *deblank (char *str);
char *escape_str (const char *src);
char *filesize_str (unsigned long long log_size);
char *float2str (float d, int width);
char *get_global_config (void);
char *get_user_config (void);
char *get_visitors_date (const char *odate, const char *from, const char *to);
char *int2str (int d, int width);
char *left_pad_str (const char *s, int indent);
char *ltrim (char *s);
char *replace_str (const char *str, const char *old, const char *new);
char *rtrim (char *s);
char *secs_to_str (int secs);
char *strtoupper(char *str);
char *substring (const char *str, int begin, int len);
char *trim_str (char *str);
char *u322str (uint32_t d, int width);
char *u642str (uint64_t d, int width);
char *unescape_str (const char *src);
char *usecs_to_str (unsigned long long usec);
const char *verify_status_code (char *str);
const char *verify_status_code_type (const char *str);
int convert_date (char *res, const char *data, const char *from, const char *to, int size);
int count_matches (const char *s1, char c);
int find_output_type (char **filename, const char *ext, int alloc);
int hide_referer (const char *ref);
int ignore_referer (const char *ref);
int intlen (uint64_t num);
int invalid_ipaddr (char *str, int *ipvx);
int ip_in_range (const char *ip);
int ptr2int(char *ptr);
int str2int (const char *date);
int str_inarray (const char *s, const char *arr[], int size);
int str_to_time (const char *str, const char *fmt, struct tm *tm);
int valid_output_type (const char *filename);
off_t file_size (const char *filename);
size_t append_str (char **dest, const char *src);
uint32_t djb2(const unsigned char *str);
uint32_t ip_to_binary (const char *ip);
void genstr(char *dest, size_t len);
void strip_newlines (char *str);
void xstrncpy (char *dest, const char *source, const size_t dest_size);
# 67 "project/goaccess/src/ui.c" 2
# 1 "project/goaccess/src/xmalloc.h" 1
# 33 "project/goaccess/src/xmalloc.h"
char *xstrdup (const char *s);
void *xcalloc (size_t nmemb, size_t size);
void *xmalloc (size_t size);
void *xrealloc (void *oldptr, size_t size);
# 68 "project/goaccess/src/ui.c" 2



static GOutput outputting[] = {
  {VISITORS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1} ,
  {REQUESTS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0} ,
  {REQUESTS_STATIC , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0} ,
  {NOT_FOUND , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0} ,
  {HOSTS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 0} ,
  {OS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1} ,
  {BROWSERS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1} ,
  {VISIT_TIMES , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1} ,
  {VIRTUAL_HOSTS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {REFERRERS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {REFERRING_SITES , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {KEYPHRASES , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {STATUS_CODES , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {REMOTE_USER , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {CACHE_STATUS , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,



  {MIME_TYPE , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
  {TLS_TYPE , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 0 , 0} ,
};



typedef struct Field_ {
  const char *field;

  char *value;
  GColors *(*colorlbl) (void);
  GColors *(*colorval) (void);
  short oneliner;
} Field;





GOutput *
output_lookup (GModule module) {
  int i, num_panels = (sizeof(outputting) / sizeof(outputting[0]));

  for (i = 0; i < num_panels; i++) {
    if (outputting[i].module == module)
      return &outputting[i];
  }
  return 
# 117 "project/goaccess/src/ui.c" 3 4
        ((void *)0)
# 117 "project/goaccess/src/ui.c"
            ;
}


void
init_colors (int force) {

  use_default_colors ();

  set_normal_color ();

  set_colors (force);
}


void
set_input_opts (void) {
  initscr ();
  clear ();
  noecho ();
  halfdelay (10);
  nonl ();
  intrflush (stdscr, FALSE);
  keypad (stdscr, TRUE);
  if (curs_set (0) == ERR)
    do { dbg_fprintf ("Unable to change cursor: %s\n", strerror (
# 142 "project/goaccess/src/ui.c" 3 4
   (*__error())
# 142 "project/goaccess/src/ui.c"
   )); } while (0);

  if (conf.mouse_support)
    mousemask (BUTTON1_CLICKED, 
# 145 "project/goaccess/src/ui.c" 3 4
                               ((void *)0)
# 145 "project/goaccess/src/ui.c"
                                   );
}


void
close_win (WINDOW * w) {
  if (w == 
# 151 "project/goaccess/src/ui.c" 3 4
          ((void *)0)
# 151 "project/goaccess/src/ui.c"
              )
    return;
  wclear (w);
  wrefresh (w);
  delwin (w);
}



void
generate_time (void) {
  timestamp = time (
# 162 "project/goaccess/src/ui.c" 3 4
                   ((void *)0)
# 162 "project/goaccess/src/ui.c"
                       );
  localtime_r (&timestamp, &now_tm);
}


void
end_spinner (void) {
  if (conf.no_parsing_spinner)
    return;

  pthread_mutex_lock (&parsing_spinner->mutex);
  parsing_spinner->state = SPN_END;
  pthread_mutex_unlock (&parsing_spinner->mutex);
  if (!parsing_spinner->curses) {

    struct timespec ts = {.tv_sec = 0,.tv_nsec = 100000000 };
    if (nanosleep (&ts, 
# 178 "project/goaccess/src/ui.c" 3 4
                       ((void *)0)
# 178 "project/goaccess/src/ui.c"
                           ) == -1 && 
# 178 "project/goaccess/src/ui.c" 3 4
                                      (*__error()) 
# 178 "project/goaccess/src/ui.c"
                                            != 
# 178 "project/goaccess/src/ui.c" 3 4
                                               4
# 178 "project/goaccess/src/ui.c"
                                                    )
      do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 179); fprintf (stderr, "nanosleep: %s", strerror (
# 179 "project/goaccess/src/ui.c" 3 4
     (*__error())
# 179 "project/goaccess/src/ui.c"
     )); fprintf (stderr, "\n\n"); do { dbg_fprintf ("nanosleep: %s", strerror (
# 179 "project/goaccess/src/ui.c" 3 4
     (*__error())
# 179 "project/goaccess/src/ui.c"
     )); } while (0); exit(
# 179 "project/goaccess/src/ui.c" 3 4
     1
# 179 "project/goaccess/src/ui.c"
     ); } while (0);
  }
}


void
set_wbkgd (WINDOW * main_win, WINDOW * header_win) {
  GColors *color = get_color (COLOR_BG);


  wbkgd (main_win, COLOR_PAIR (color->pair->idx));
  wbkgd (header_win, COLOR_PAIR (color->pair->idx));
  wbkgd (stdscr, COLOR_PAIR (color->pair->idx));
  wrefresh (main_win);
}




void
init_windows (WINDOW ** header_win, WINDOW ** main_win) {
  int row = 0, col = 0;


  getmaxyx (stdscr, row, col);
  if (row < 8 || col < 0)
    do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 205); fprintf (stderr, "Minimum screen size - 0 columns by 7 lines"); fprintf (stderr, "\n\n"); do { dbg_fprintf ("Minimum screen size - 0 columns by 7 lines"); } while (0); exit(
# 205 "project/goaccess/src/ui.c" 3 4
   1
# 205 "project/goaccess/src/ui.c"
   ); } while (0);


  *header_win = newwin (6, col, 0, 0);
  if (*header_win == 
# 209 "project/goaccess/src/ui.c" 3 4
                    ((void *)0)
# 209 "project/goaccess/src/ui.c"
                        )
    do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 210); fprintf (stderr, "Unable to allocate memory for header_win."); fprintf (stderr, "\n\n"); do { dbg_fprintf ("Unable to allocate memory for header_win."); } while (0); exit(
# 210 "project/goaccess/src/ui.c" 3 4
   1
# 210 "project/goaccess/src/ui.c"
   ); } while (0);
  keypad (*header_win, TRUE);


  *main_win = newwin (row - 8, col, 7, 0);
  if (*main_win == 
# 215 "project/goaccess/src/ui.c" 3 4
                  ((void *)0)
# 215 "project/goaccess/src/ui.c"
                      )
    do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 216); fprintf (stderr, "Unable to allocate memory for main_win."); fprintf (stderr, "\n\n"); do { dbg_fprintf ("Unable to allocate memory for main_win."); } while (0); exit(
# 216 "project/goaccess/src/ui.c" 3 4
   1
# 216 "project/goaccess/src/ui.c"
   ); } while (0);
  keypad (*main_win, TRUE);
  set_wbkgd (*main_win, *header_win);
}

#pragma GCC diagnostic ignored "-Wformat-nonliteral"

void
draw_header (WINDOW * win, const char *s, const char *fmt, int y, int x, int w,
             GColors * (*func) (void)) {
  GColors *color = (*func) ();
  char *buf;

  buf = xmalloc (snprintf (
# 229 "project/goaccess/src/ui.c" 3 4
                          ((void *)0)
# 229 "project/goaccess/src/ui.c"
                              , 0, fmt, s) + 1);
  sprintf (buf, fmt, s);

  wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
  mvwhline (win, y, x, ' ', w);
  mvwaddnstr (win, y, x, buf, w);
  wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));

  free (buf);
}

#pragma GCC diagnostic warning "-Wformat-nonliteral"


void
term_size (WINDOW * main_win, int *main_win_height) {
  int term_h = 0, term_w = 0;

  getmaxyx (stdscr, term_h, term_w);

  *main_win_height = term_h - (7 + 1);
  wresize (main_win, *main_win_height, term_w);
  wmove (main_win, *main_win_height, 0);
}




const char *
module_to_label (GModule module) {
  static const char *modules[] = {
    "Visitors",
    "Requests",
    "Static Requests",
    "Not Found",
    "Hosts",
    "OS",
    "Browsers",
    "Time",
    "Virtual Hosts",
    "Referrers",
    "Referring Sites",
    "Keyphrases",
    "Status Codes",
    "Remote User",
    "Cache Status",



    "MIME Types",
    "TLS Settings",
  };

  return dgettext (PACKAGE , modules[module]);
}




const char *
module_to_id (GModule module) {
  static const char *modules[] = {
    "visitors",
    "requests",
    "static_requests",
    "not_found",
    "hosts",
    "os",
    "browsers",
    "visit_time",
    "vhosts",
    "referrers",
    "referring_sites",
    "keyphrases",
    "status_codes",
    "remote_user",
    "cache_status",



    "mime_type",
    "tls_type",
  };

  return dgettext (PACKAGE , modules[module]);
}




const char *
module_to_head (GModule module) {
  static const char *modules[] = {
    "Unique visitors per day",
    "Requested Files (URLs)",
    "Static Requests",
    "Not Found URLs (404s)",
    "Visitor Hostnames and IPs",
    "Operating Systems",
    "Browsers",
    "Time Distribution",
    "Virtual Hosts",
    "Referrers URLs",
    "Referring Sites",
    "Keyphrases from Google's search engine",
    "HTTP Status Codes",
    "Remote User (HTTP authentication)",
    "The cache status of the object served",



    "MIME Types",
    "Encryption settings",
  };

  if (!conf.ignore_crawlers)
    modules[VISITORS] = "Unique visitors per day - Including spiders";

  return dgettext (PACKAGE , modules[module]);
}





const char *
module_to_desc (GModule module) {
  static const char *modules[] = {
    "Hits having the same IP, date and agent are a unique visit.",
    "Top requests sorted by hits [, avgts, cumts, maxts, mthd, proto]",
    "Top static requests sorted by hits [, avgts, cumts, maxts, mthd, proto]",
    "Top not found URLs sorted by hits [, avgts, cumts, maxts, mthd, proto]",
    "Top visitor hosts sorted by hits [, avgts, cumts, maxts]",
    "Top Operating Systems sorted by hits [, avgts, cumts, maxts]",
    "Top Browsers sorted by hits [, avgts, cumts, maxts]",
    "Data sorted by hour [, avgts, cumts, maxts]",
    "Data sorted by hits [, avgts, cumts, maxts]",
    "Top Requested Referrers sorted by hits [, avgts, cumts, maxts]",
    "Top Referring Sites sorted by hits [, avgts, cumts, maxts]",
    "Top Keyphrases sorted by hits [, avgts, cumts, maxts]",
    "Top HTTP Status Codes sorted by hits [, avgts, cumts, maxts]",
    "Data sorted by hits [, avgts, cumts, maxts]",
    "Data sorted by hits [, avgts, cumts, maxts]",



    "File types shipped out",
    "TLS version and picked algorithm",
  };

  return dgettext (PACKAGE , modules[module]);
}


void
update_active_module (WINDOW * header_win, GModule current) {
  GColors *color = get_color (COLOR_ACTIVE_LABEL);
  const char *module = module_to_label (current);
  int col = getmaxx (stdscr);

  char *lbl = xmalloc (snprintf (
# 389 "project/goaccess/src/ui.c" 3 4
                                ((void *)0)
# 389 "project/goaccess/src/ui.c"
                                    , 0, dgettext (PACKAGE , "[Active Panel: %1$s]"), module) + 1);
  sprintf (lbl, dgettext (PACKAGE , "[Active Panel: %1$s]"), module);

  wmove (header_win, 0, 30);

  wattron (header_win, color->attr | COLOR_PAIR (color->pair->idx));
  mvwprintw (header_win, 0, col - strlen (lbl) - 1, "%s", lbl);
  wattroff (header_win, color->attr | COLOR_PAIR (color->pair->idx));

  wrefresh (header_win);

  free (lbl);
}


static void
render_overall_field (WINDOW * win, const char *s, int y, int x, GColors * color) {
  wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
  mvwprintw (win, y, x, "%s", s);
  wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
}


static void
render_overall_value (WINDOW * win, const char *s, int y, int x, GColors * color) {
  wattron (win, color->attr | COLOR_PAIR (color->pair->idx));
  mvwprintw (win, y, x, "%s", s);
  wattroff (win, color->attr | COLOR_PAIR (color->pair->idx));
}




static char *
get_str_excluded_ips (void) {
  return u642str (ht_get_excluded_ips (), 0);
}




static char *
get_str_failed_reqs (void) {
  return u642str (ht_get_invalid (), 0);
}




static char *
get_str_processed_reqs (void) {
  return u642str (ht_get_processed (), 0);
}




static char *
get_str_valid_reqs (void) {
  return u642str (ht_sum_valid (), 0);
}





static char *
get_str_notfound_reqs (void) {
  return u642str (ht_get_size_datamap (NOT_FOUND), 0);
}




static char *
get_str_ref_reqs (void) {
  return u642str (ht_get_size_datamap (REFERRERS), 0);
}




static char *
get_str_reqs (void) {
  return u642str (ht_get_size_datamap (REQUESTS), 0);
}




static char *
get_str_static_reqs (void) {
  return u642str (ht_get_size_datamap (REQUESTS_STATIC), 0);
}




static char *
get_str_visitors (void) {
  return u642str (ht_get_size_uniqmap (VISITORS), 0);
}





static char *
get_str_proctime (void) {
  char *s = 
# 498 "project/goaccess/src/ui.c" 3 4
           ((void *)0)
# 498 "project/goaccess/src/ui.c"
               ;
  uint32_t secs = ht_get_processing_time ();

  s = xmalloc (snprintf (
# 501 "project/goaccess/src/ui.c" 3 4
                        ((void *)0)
# 501 "project/goaccess/src/ui.c"
                            , 0, "%us", secs) + 1);
  sprintf (s, "%us", secs);

  return s;
}




static char *
get_str_filesize (void) {
  return filesize_str (get_log_sizes ());
}




static char *
get_str_logfile (void) {
  int col = getmaxx (stdscr), left_padding = 20;
  return get_log_source_str (col - left_padding);
}




static char *
get_str_bandwidth (void) {
  return filesize_str (ht_sum_bw ());
}






int
get_start_end_parsing_dates (char **start, char **end, const char *f) {
  uint32_t *dates = 
# 539 "project/goaccess/src/ui.c" 3 4
                   ((void *)0)
# 539 "project/goaccess/src/ui.c"
                       ;
  uint32_t len = 0;
  const char *sndfmt = "%Y%m%d";
  char s[10 + 1];
  char e[10 + 1];

  dates = get_sorted_dates (&len);
  sprintf (s, "%u", dates[0]);
  sprintf (e, "%u", dates[len - 1]);


  *start = get_visitors_date (s, sndfmt, f);
  *end = get_visitors_date (e, sndfmt, f);

  free (dates);

  return 0;
}




char *
get_overall_header (GHolder * h) {
  const char *head = dgettext (PACKAGE , "Dashboard - Overall Analyzed Requests");
  char *hd = 
# 564 "project/goaccess/src/ui.c" 3 4
            ((void *)0)
# 564 "project/goaccess/src/ui.c"
                , *start = 
# 564 "project/goaccess/src/ui.c" 3 4
                           ((void *)0)
# 564 "project/goaccess/src/ui.c"
                               , *end = 
# 564 "project/goaccess/src/ui.c" 3 4
                                        ((void *)0)
# 564 "project/goaccess/src/ui.c"
                                            ;

  if (h->idx == 0 || get_start_end_parsing_dates (&start, &end, "%d/%b/%Y"))
    return xstrdup (head);

  hd = xmalloc (snprintf (
# 569 "project/goaccess/src/ui.c" 3 4
                         ((void *)0)
# 569 "project/goaccess/src/ui.c"
                             , 0, "%s (%s - %s)", head, start, end) + 1);
  sprintf (hd, "%s (%s - %s)", head, start, end);

  free (end);
  free (start);

  return hd;
}


static void
render_overall_header (WINDOW * win, GHolder * h) {
  char *hd = get_overall_header (h);
  int col = getmaxx (stdscr);

  draw_header (win, hd, " %s", 0, 0, col, color_panel_header);
  free (hd);
}



static void
render_overall_statistics (WINDOW * win, Field fields[], size_t n) {
  GColors *color = 
# 592 "project/goaccess/src/ui.c" 3 4
                  ((void *)0)
# 592 "project/goaccess/src/ui.c"
                      ;
  int x_field = 2, x_value;
  size_t i, j, k, max_field = 0, max_value, mod_val, y;

  for (i = 0, k = 0, y = 2; i < n; i++) {

    mod_val = k % 4;


    if (k > 0 && mod_val == 0) {
      max_field = 0;
      x_field = 2;
      y++;
    }


    x_field += max_field;

    color = (*fields[i].colorlbl) ();
    render_overall_field (win, fields[i].field, y, x_field, color);


    max_field = 0;
    for (j = 0; j < n; j++) {
      size_t len = strlen (fields[j].field);
      if (j % 4 == mod_val && len > max_field && !fields[j].oneliner)
        max_field = len;
    }

    max_value = 0;
    for (j = 0; j < n; j++) {
      size_t len = strlen (fields[j].value);
      if (j % 4 == mod_val && len > max_value && !fields[j].oneliner)
        max_value = len;
    }


    x_value = max_field + x_field + 1;
    max_field += max_value + 2;

    color = (*fields[i].colorval) ();
    render_overall_value (win, fields[i].value, y, x_value, color);
    k += fields[i].oneliner ? 4 : 1;
  }
}


void
display_general (WINDOW * win, GHolder * h) {
  GColors *(*colorlbl) (void) = color_overall_lbls;
  GColors *(*colorpth) (void) = color_overall_path;
  GColors *(*colorval) (void) = color_overall_vals;

  size_t n, i;


  Field fields[] = {
    {dgettext (PACKAGE , "Total Requests") , get_str_processed_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Unique Visitors") , get_str_visitors () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Requested Files") , get_str_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Referrers") , get_str_ref_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Valid Requests") , get_str_valid_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Log Parsing Time") , get_str_proctime () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Static Files") , get_str_static_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Log Size") , get_str_filesize () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Failed Requests") , get_str_failed_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Excl. IP Hits") , get_str_excluded_ips () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Not Found") , get_str_notfound_reqs () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Tx. Amount") , get_str_bandwidth () , colorlbl , colorval , 0} ,
    {dgettext (PACKAGE , "Log Source") , get_str_logfile () , colorlbl , colorpth , 1}
  };


  werase (win);
  render_overall_header (win, h);

  n = (sizeof(fields) / sizeof(fields[0]));
  render_overall_statistics (win, fields, n);

  for (i = 0; i < n; i++) {
    free (fields[i].value);
  }
}

static char *
set_default_string (WINDOW * win, int pos_y, int pos_x, size_t max_width, const char *str) {
  char *s = xmalloc (max_width + 1), *tmp;
  size_t len = 0;
  size_t size_x = 0, size_y = 0;
  getmaxyx (win, size_y, size_x);
  (void) size_y;
  size_x -= 4;


  if (!str) {
    s[0] = '\0';
    return s;
  }

  len = ({ __typeof__ (max_width) _a = (max_width); __typeof__ (strlen (str)) _b = (strlen (str)); _a < _b ? _a : _b; });
  
# 692 "project/goaccess/src/ui.c" 3 4
 __builtin___memcpy_chk (
# 692 "project/goaccess/src/ui.c"
 s
# 692 "project/goaccess/src/ui.c" 3 4
 , 
# 692 "project/goaccess/src/ui.c"
 str, len
# 692 "project/goaccess/src/ui.c" 3 4
 , __builtin_object_size (
# 692 "project/goaccess/src/ui.c"
 s
# 692 "project/goaccess/src/ui.c" 3 4
 , 0))
# 692 "project/goaccess/src/ui.c"
                     ;
  s[len] = '\0';


  if (strlen (s) > size_x) {
    tmp = xstrdup (&s[0]);
    tmp[size_x] = '\0';
    mvwprintw (win, pos_y, pos_x, "%s", tmp);
    free (tmp);
  } else {
    mvwprintw (win, pos_y, pos_x, "%s", s);
  }

  return s;
}




char *
input_string (WINDOW * win, int pos_y, int pos_x, size_t max_width, const char *str,
              int enable_case, int *toggle_case) {
  char *s = 
# 714 "project/goaccess/src/ui.c" 3 4
           ((void *)0)
# 714 "project/goaccess/src/ui.c"
               , *tmp;
  size_t i, c, pos = 0, x = 0, quit = 1, size_x = 0, size_y = 0;

  getmaxyx (win, size_y, size_x);
  size_x -= 4;

  s = set_default_string (win, pos_y, pos_x, max_width, str);
  if (str)
    x = pos = 0;

  if (enable_case)
    mvwprintw (win, size_y - 2, 1, " %s", dgettext (PACKAGE , "[x] case sensitive"));

  wmove (win, pos_y, pos_x + x);
  wrefresh (win);

  curs_set (1);
  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case 1:
    case 262:
      pos = x = 0;
      break;
    case 5:
    case 360:
      if (strlen (s) > size_x) {
        x = size_x;
        pos = strlen (s) - size_x;
      } else {
        pos = 0;
        x = strlen (s);
      }
      break;
    case 7:
    case 27:
      pos = x = 0;
      if (str && *str == '\0')
        s[0] = '\0';
      quit = 0;
      break;
    case 9:
      if (!enable_case)
        break;
      *toggle_case = *toggle_case == 0 ? 1 : 0;
      if (*toggle_case)
        mvwprintw (win, size_y - 2, 1, " %s", dgettext (PACKAGE , "[ ] case sensitive"));
      else if (!*toggle_case)
        mvwprintw (win, size_y - 2, 1, " %s", dgettext (PACKAGE , "[x] case sensitive"));
      break;
    case 21:
      s[0] = '\0';
      pos = x = 0;
      break;
    case 8:
    case 127:
    case KEY_BACKSPACE:
      if (pos + x > 0) {
        
# 772 "project/goaccess/src/ui.c" 3 4
       __builtin___memmove_chk (
# 772 "project/goaccess/src/ui.c"
       &s[(pos + x) - 1]
# 772 "project/goaccess/src/ui.c" 3 4
       , 
# 772 "project/goaccess/src/ui.c"
       &s[pos + x], (max_width - (pos + x)) + 1
# 772 "project/goaccess/src/ui.c" 3 4
       , __builtin_object_size (
# 772 "project/goaccess/src/ui.c"
       &s[(pos + x) - 1]
# 772 "project/goaccess/src/ui.c" 3 4
       , 0))
# 772 "project/goaccess/src/ui.c"
                                                                            ;
        if (pos <= 0)
          x--;
        else
          pos--;
      }
      break;
    case KEY_LEFT:
      if (x > 0)
        x--;
      else if (pos > 0)
        pos--;
      break;
    case KEY_RIGHT:
      if ((x + pos) < strlen (s)) {
        if (x < size_x)
          x++;
        else
          pos++;
      }
      break;
    case 0x0a:
    case 0x0d:
    case KEY_ENTER:
      quit = 0;
      break;
    default:
      if (strlen (s) == max_width)
        break;
      if (!isprint (c))
        break;

      if (strlen (s) == pos) {
        s[pos + x] = c;
        s[pos + x + 1] = '\0';
        waddch (win, c);
      } else {
        
# 809 "project/goaccess/src/ui.c" 3 4
       __builtin___memmove_chk (
# 809 "project/goaccess/src/ui.c"
       &s[pos + x + 1]
# 809 "project/goaccess/src/ui.c" 3 4
       , 
# 809 "project/goaccess/src/ui.c"
       &s[pos + x], strlen (&s[pos + x]) + 1
# 809 "project/goaccess/src/ui.c" 3 4
       , __builtin_object_size (
# 809 "project/goaccess/src/ui.c"
       &s[pos + x + 1]
# 809 "project/goaccess/src/ui.c" 3 4
       , 0))
# 809 "project/goaccess/src/ui.c"
                                                                       ;
        s[pos + x] = c;
      }
      if ((x + pos) < max_width) {
        if (x < size_x)
          x++;
        else
          pos++;
      }
    }
    tmp = xstrdup (&s[pos > 0 ? pos : 0]);
    tmp[({ __typeof__ (strlen (tmp)) _a = (strlen (tmp)); __typeof__ (size_x) _b = (size_x); _a < _b ? _a : _b; })] = '\0';
    for (i = strlen (tmp); i < size_x; i++)
      mvwprintw (win, pos_y, pos_x + i, "%s", " ");
    mvwprintw (win, pos_y, pos_x, "%s", tmp);
    free (tmp);

    wmove (win, pos_y, pos_x + x);
    wrefresh (win);
  }
  curs_set (0);

  return s;
}





static int
set_agents (void *val, void *user_data) {
  GAgents *agents = user_data;
  GAgentItem *tmp = 
# 841 "project/goaccess/src/ui.c" 3 4
                   ((void *)0)
# 841 "project/goaccess/src/ui.c"
                       ;
  char *agent = 
# 842 "project/goaccess/src/ui.c" 3 4
               ((void *)0)
# 842 "project/goaccess/src/ui.c"
                   ;
  int newlen = 0, i;

  if (!(agent = ht_get_host_agent_val (*(uint32_t *) val)))
    return 1;

  if (agents->size - 1 == agents->idx) {
    newlen = agents->size + 4;
    if (!(tmp = realloc (agents->items, newlen * sizeof (GAgentItem))))
      do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 851); fprintf (stderr, "Unable to realloc agents"); fprintf (stderr, "\n\n"); do { dbg_fprintf ("Unable to realloc agents"); } while (0); exit(
# 851 "project/goaccess/src/ui.c" 3 4
     1
# 851 "project/goaccess/src/ui.c"
     ); } while (0);

    agents->items = tmp;
    agents->size = newlen;
  }

  for (i = 0; i < agents->idx; ++i) {
    if (strcmp (agent, agents->items[i].agent) == 0) {
      free (agent);
      return 0;
    }
  }
  agents->items[agents->idx++].agent = agent;

  return 0;
}


GAgents *
load_host_agents (const char *addr) {
  GAgents *agents = 
# 871 "project/goaccess/src/ui.c" 3 4
                   ((void *)0)
# 871 "project/goaccess/src/ui.c"
                       ;
  GSLList *keys = 
# 872 "project/goaccess/src/ui.c" 3 4
                 ((void *)0)
# 872 "project/goaccess/src/ui.c"
                     , *list = 
# 872 "project/goaccess/src/ui.c" 3 4
                               ((void *)0)
# 872 "project/goaccess/src/ui.c"
                                   ;
  void *data = 
# 873 "project/goaccess/src/ui.c" 3 4
              ((void *)0)
# 873 "project/goaccess/src/ui.c"
                  ;
  uint32_t items = 4, key = djb2 ((const unsigned char *) addr);

  keys = ht_get_keymap_list_from_key (HOSTS, key);
  if (!keys)
    return 
# 878 "project/goaccess/src/ui.c" 3 4
          ((void *)0)
# 878 "project/goaccess/src/ui.c"
              ;

  agents = new_gagents (items);


  { GSLList *__tmp = keys; while (__tmp) { (data) = __tmp->data; { if ((list = ht_get_host_agent_list (HOSTS, (*(uint32_t *) data)))) { list_foreach (list, set_agents, agents); list_remove_nodes (list); } }; __tmp = __tmp->next; }}




    ;

  list_remove_nodes (keys);

  return agents;
}





static int
fill_host_agents_gmenu (GMenu * menu, GAgents * agents) {
  int i;

  if (agents == 
# 903 "project/goaccess/src/ui.c" 3 4
               ((void *)0)
# 903 "project/goaccess/src/ui.c"
                   )
    return 1;

  menu->items = xcalloc (agents->idx, sizeof (GItem));
  for (i = 0; i < agents->idx; ++i) {
    menu->items[i].name = xstrdup (agents->items[i].agent);
    menu->items[i].checked = 0;
    menu->size++;
  }

  return 0;
}


void
load_agent_list (WINDOW * main_win, char *addr) {
  GMenu *menu;
  GAgents *agents = 
# 920 "project/goaccess/src/ui.c" 3 4
                   ((void *)0)
# 920 "project/goaccess/src/ui.c"
                       ;
  WINDOW *win;

  char buf[256];
  int c, quit = 1, i;
  int y, x, list_h, list_w, menu_w, menu_h;

  if (!conf.list_agents)
    return;

  getmaxyx (stdscr, y, x);
  list_h = y / 2;
  list_w = x - 4;
  menu_h = list_h - 4 - 1;
  menu_w = list_w - 2 - 2;

  win = newwin (list_h, list_w, (y - list_h) / 2, (x - list_w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');


  menu = new_gmenu (win, menu_h, menu_w, 4, 2);
  if (!(agents = load_host_agents (addr)))
    goto out;
  if (fill_host_agents_gmenu (menu, agents) != 0)
    goto out;

  post_gmenu (menu);
  snprintf (buf, sizeof buf, dgettext (PACKAGE , "User Agents for %1$s"), addr);
  draw_header (win, buf, " %s", 1, 1, list_w - 2, color_panel_header);
  mvwprintw (win, 2, 2, dgettext (PACKAGE , "[UP/DOWN] to scroll - [q] to close window"));
  wrefresh (win);

  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case KEY_DOWN:
      gmenu_driver (menu, REQ_DOWN);
      break;
    case KEY_UP:
      gmenu_driver (menu, REQ_UP);
      break;
    case KEY_RESIZE:
    case 'q':
      quit = 0;
      break;
    }
    wrefresh (win);
  }

  touchwin (main_win);
  close_win (win);
  win = 
# 972 "project/goaccess/src/ui.c" 3 4
       ((void *)0)
# 972 "project/goaccess/src/ui.c"
           ;
  wrefresh (main_win);

out:


  for (i = 0; i < menu->size; ++i)
    free (menu->items[i].name);
  if (menu->items)
    free (menu->items);
  free (menu);
  free_agents_array (agents);
  close_win (win);
}


static void
ui_spinner (void *ptr_data) {
  GSpinner *sp = (GSpinner *) ptr_data;
  GColors *color = 
# 991 "project/goaccess/src/ui.c" 3 4
                  ((void *)0)
# 991 "project/goaccess/src/ui.c"
                      ;

  static char const spin_chars[] = "/-\\|";
  char buf[256];
  const char *fn = 
# 995 "project/goaccess/src/ui.c" 3 4
                  ((void *)0)
# 995 "project/goaccess/src/ui.c"
                      ;
  int i = 0;
  long long tdiff = 0, psec = 0;
  time_t begin;
  struct timespec ts = {.tv_sec = 0,.tv_nsec = 100000000 };

  if (sp->curses)
    color = (*sp->color) ();

  time (&begin);
  while (1) {
    pthread_mutex_lock (&sp->mutex);
    if (sp->state == SPN_END) {
      if (!sp->curses && !conf.no_progress)
        fprintf (stderr, "\n");

      pthread_mutex_unlock (&sp->mutex);
      return;
    }

    
# 1015 "project/goaccess/src/ui.c" 3 4
   libintl_setlocale 
# 1015 "project/goaccess/src/ui.c"
             (
# 1015 "project/goaccess/src/ui.c" 3 4
              4
# 1015 "project/goaccess/src/ui.c"
                        , "");
    if (conf.no_progress) {
      snprintf (buf, sizeof buf, "%s", sp->label);
    } else {
      fn = *sp->filename ? *sp->filename : "restoring";
      tdiff = (long long) (time (
# 1020 "project/goaccess/src/ui.c" 3 4
                                ((void *)0)
# 1020 "project/goaccess/src/ui.c"
                                    ) - begin);
      psec = tdiff >= 1 ? **(sp->processed) / tdiff : 0;
      snprintf (buf, sizeof buf, "[%s %s] {%'"
# 1022 "project/goaccess/src/ui.c" 3 4
                                "ll" "u"
# 1022 "project/goaccess/src/ui.c"
                                "} @ {%'lld/s}", sp->label, fn, **(sp->processed), psec);
    }
    
# 1024 "project/goaccess/src/ui.c" 3 4
   libintl_setlocale 
# 1024 "project/goaccess/src/ui.c"
             (
# 1024 "project/goaccess/src/ui.c" 3 4
              4
# 1024 "project/goaccess/src/ui.c"
                        , "POSIX");

    if (sp->curses) {

      draw_header (sp->win, buf, " %s", sp->y, sp->x, sp->w, sp->color);

      wattron (sp->win, COLOR_PAIR (color->pair->idx));
      mvwaddch (sp->win, sp->y, sp->spin_x, spin_chars[i++ & 3]);
      wattroff (sp->win, COLOR_PAIR (color->pair->idx));
      wrefresh (sp->win);
    } else if (!conf.no_progress) {

      fprintf (stderr, " %s\r", buf);
    }

    pthread_mutex_unlock (&sp->mutex);
    if (nanosleep (&ts, 
# 1040 "project/goaccess/src/ui.c" 3 4
                       ((void *)0)
# 1040 "project/goaccess/src/ui.c"
                           ) == -1 && 
# 1040 "project/goaccess/src/ui.c" 3 4
                                      (*__error()) 
# 1040 "project/goaccess/src/ui.c"
                                            != 
# 1040 "project/goaccess/src/ui.c" 3 4
                                               4
# 1040 "project/goaccess/src/ui.c"
                                                    )
      do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 1041); fprintf (stderr, "nanosleep: %s", strerror (
# 1041 "project/goaccess/src/ui.c" 3 4
     (*__error())
# 1041 "project/goaccess/src/ui.c"
     )); fprintf (stderr, "\n\n"); do { dbg_fprintf ("nanosleep: %s", strerror (
# 1041 "project/goaccess/src/ui.c" 3 4
     (*__error())
# 1041 "project/goaccess/src/ui.c"
     )); } while (0); exit(
# 1041 "project/goaccess/src/ui.c" 3 4
     1
# 1041 "project/goaccess/src/ui.c"
     ); } while (0);
  }
}


void
ui_spinner_create (GSpinner * spinner) {
  if (conf.no_parsing_spinner)
    return;

  pthread_create (&(spinner->thread), 
# 1051 "project/goaccess/src/ui.c" 3 4
                                     ((void *)0)
# 1051 "project/goaccess/src/ui.c"
                                         , (void *) &ui_spinner, spinner);
  pthread_detach (spinner->thread);
}


void
set_curses_spinner (GSpinner * spinner) {
  int y, x;
  if (spinner == 
# 1059 "project/goaccess/src/ui.c" 3 4
                ((void *)0)
# 1059 "project/goaccess/src/ui.c"
                    )
    return;

  getmaxyx (stdscr, y, x);

  spinner->color = color_progress;
  spinner->curses = 1;
  spinner->win = stdscr;
  spinner->x = 0;
  spinner->w = x;
  spinner->spin_x = x - 2;
  spinner->y = y - 1;
}


void
lock_spinner (void) {
  if (parsing_spinner != 
# 1076 "project/goaccess/src/ui.c" 3 4
                        ((void *)0) 
# 1076 "project/goaccess/src/ui.c"
                             && parsing_spinner->state == SPN_RUN)
    pthread_mutex_lock (&parsing_spinner->mutex);
}


void
unlock_spinner (void) {
  if (parsing_spinner != 
# 1083 "project/goaccess/src/ui.c" 3 4
                        ((void *)0) 
# 1083 "project/goaccess/src/ui.c"
                             && parsing_spinner->state == SPN_RUN)
    pthread_mutex_unlock (&parsing_spinner->mutex);
}




GSpinner *
new_gspinner (void) {
  GSpinner *spinner;

  spinner = xcalloc (1, sizeof (GSpinner));
  spinner->label = "Parsing...";
  spinner->state = SPN_RUN;
  spinner->curses = 0;



  if (pthread_mutex_init (&(spinner->mutex), 
# 1101 "project/goaccess/src/ui.c" 3 4
                                            ((void *)0)
# 1101 "project/goaccess/src/ui.c"
                                                ))
    do { (void) endwin (); fprintf (stderr, "\nGoAccess - version %s - %s %s\n", "1.5.4", "May 12 2022", "14:56:17"); fprintf (stderr, "Config file: %s\n", conf.iconfigfile ?: "No config file used"); fprintf (stderr, "\nFatal error has occurred"); fprintf (stderr, "\nError occurred at: %s - %s - %d\n", "project/goaccess/src/ui.c", __FUNCTION__, 1102); fprintf (stderr, "Failed init thread mutex"); fprintf (stderr, "\n\n"); do { dbg_fprintf ("Failed init thread mutex"); } while (0); exit(
# 1102 "project/goaccess/src/ui.c" 3 4
   1
# 1102 "project/goaccess/src/ui.c"
   ); } while (0);

  return spinner;
}



static void
clear_confdlg_status_bar (WINDOW * win, int y, int x, int w) {
  draw_header (win, "", "%s", y, x, w + 1, color_default);
}





static char *
get_input_date_format (void) {
  char *date_format = 
# 1120 "project/goaccess/src/ui.c" 3 4
                     ((void *)0)
# 1120 "project/goaccess/src/ui.c"
                         ;

  if (conf.date_format)
    date_format = escape_str (conf.date_format);
  return date_format;
}





static char *
get_input_time_format (void) {
  char *time_format = 
# 1133 "project/goaccess/src/ui.c" 3 4
                     ((void *)0)
# 1133 "project/goaccess/src/ui.c"
                         ;

  if (conf.time_format)
    time_format = escape_str (conf.time_format);
  return time_format;
}





static char *
get_input_log_format (void) {
  char *log_format = 
# 1146 "project/goaccess/src/ui.c" 3 4
                    ((void *)0)
# 1146 "project/goaccess/src/ui.c"
                        ;

  if (conf.log_format)
    log_format = escape_str (conf.log_format);
  return log_format;
}

static void
draw_formats (WINDOW * win, int w2) {
  char *date_format = 
# 1155 "project/goaccess/src/ui.c" 3 4
                     ((void *)0)
# 1155 "project/goaccess/src/ui.c"
                         , *log_format = 
# 1155 "project/goaccess/src/ui.c" 3 4
                                         ((void *)0)
# 1155 "project/goaccess/src/ui.c"
                                             , *time_format = 
# 1155 "project/goaccess/src/ui.c" 3 4
                                                              ((void *)0)
# 1155 "project/goaccess/src/ui.c"
                                                                  ;

  draw_header (win, dgettext (PACKAGE , "Log Format Configuration"), " %s", 1, 1, w2, color_panel_header);
  mvwprintw (win, 2, 2, dgettext (PACKAGE , "[SPACE] to toggle - [ENTER] to proceed - [q] to quit"));


  draw_header (win, dgettext (PACKAGE , "Log Format - [c] to add/edit format"), " %s", 11, 1, w2, color_panel_header);
  if ((log_format = get_input_log_format ())) {
    mvwprintw (win, 12, 2, "%.*s", 67, log_format);

    free (log_format);
  }


  draw_header (win, dgettext (PACKAGE , "Date Format - [d] to add/edit format"), " %s", 14, 1, w2, color_panel_header);
  if ((date_format = get_input_date_format ())) {
    mvwprintw (win, 15, 2, "%.*s", 67, date_format);

    free (date_format);
  }


  draw_header (win, dgettext (PACKAGE , "Time Format - [t] to add/edit format"), " %s", 17, 1, w2, color_panel_header);
  if ((time_format = get_input_time_format ())) {
    mvwprintw (win, 18, 2, "%.*s", 67, time_format);

    free (time_format);
  }
}

static const char *
set_formats (char *date_format, char *log_format, char *time_format) {

  if (!time_format && !conf.time_format)
    return dgettext (PACKAGE , "Select a time format.");
  if (!date_format && !conf.date_format)
    return dgettext (PACKAGE , "Select a date format.");
  if (!log_format && !conf.log_format)
    return dgettext (PACKAGE , "Select a log format.");

  if (time_format) {
    free (conf.time_format);
    conf.time_format = unescape_str (time_format);
  }

  if (date_format) {
    free (conf.date_format);
    conf.date_format = unescape_str (date_format);
  }

  if (log_format) {
    free (conf.log_format);
    conf.log_format = unescape_str (log_format);
  }

  if (is_json_log_format (conf.log_format))
    conf.is_json_log_format = 1;

  set_spec_date_format ();

  return 
# 1215 "project/goaccess/src/ui.c" 3 4
        ((void *)0)
# 1215 "project/goaccess/src/ui.c"
            ;
}


static void
load_confdlg_error (WINDOW * parent_win, char **errors, int nerrors) {
  int c, quit = 1, i = 0;
  int y, x, h = 15, w = 71;
  WINDOW *win;
  GMenu *menu;

  getmaxyx (stdscr, y, x);

  win = newwin (h, w, (y - h) / 2, (x - w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');


  menu = new_gmenu (win, 10, 67, 4, 2);
  menu->size = nerrors;


  menu->items = (GItem *) xcalloc (nerrors, sizeof (GItem));
  for (i = 0; i < nerrors; ++i) {
    menu->items[i].name = alloc_string (errors[i]);
    menu->items[i].checked = 0;
    free (errors[i]);
  }
  free (errors);
  post_gmenu (menu);

  draw_header (win, dgettext (PACKAGE , "Format Errors - Verify your log/date/time format"), " %s", 1, 1, w - 2, color_error);
  mvwprintw (win, 2, 2, dgettext (PACKAGE , "[UP/DOWN] to scroll - [q] to close window"));

  wrefresh (win);
  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case KEY_DOWN:
      gmenu_driver (menu, REQ_DOWN);
      break;
    case KEY_UP:
      gmenu_driver (menu, REQ_UP);
      break;
    case KEY_RESIZE:
    case 'q':
      quit = 0;
      break;
    }
    wrefresh (win);
  }

  for (i = 0; i < nerrors; ++i)
    free (menu->items[i].name);
  free (menu->items);
  free (menu);

  touchwin (parent_win);
  close_win (win);
  wrefresh (parent_win);
}





int
render_confdlg (Logs * logs, GSpinner * spinner) {
  GMenu *menu;
  WINDOW *win;

  const char *log_err = 
# 1286 "project/goaccess/src/ui.c" 3 4
                       ((void *)0)
# 1286 "project/goaccess/src/ui.c"
                           ;
  char *date_format = 
# 1287 "project/goaccess/src/ui.c" 3 4
                     ((void *)0)
# 1287 "project/goaccess/src/ui.c"
                         , *log_format = 
# 1287 "project/goaccess/src/ui.c" 3 4
                                         ((void *)0)
# 1287 "project/goaccess/src/ui.c"
                                             , *time_format = 
# 1287 "project/goaccess/src/ui.c" 3 4
                                                              ((void *)0)
# 1287 "project/goaccess/src/ui.c"
                                                                  ;
  char *cstm_log, *cstm_date, *cstm_time;
  int c, quit = 1, invalid = 1, y, x, h = 20, w = 71;
  int w2 = w - 2;
  size_t i, n, sel;


  const char *choices[] = {
    "NCSA Combined Log Format",
    "NCSA Combined Log Format with Virtual Host",
    "Common Log Format (CLF)",
    "Common Log Format (CLF) with Virtual Host",
    "W3C",
    "CloudFront (Download Distribution)",
    "Google Cloud Storage",
    "AWS Elastic Load Balancing (HTTP/S)",
    "Squid Native Format",
    "AWS Simple Storage Service (S3)",
    "CADDY JSON Structured",
    "AWS Application Load Balancer",
  };
  n = (sizeof(choices) / sizeof(choices[0]));
  getmaxyx (stdscr, y, x);

  win = newwin (h, w, (y - h) / 2, (x - w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');


  menu = new_gmenu (win, 6, 67, 4, 2);
  menu->size = n;
  menu->selectable = 1;


  menu->items = (GItem *) xcalloc (n, sizeof (GItem));
  for (i = 0; i < n; ++i) {
    menu->items[i].name = alloc_string (choices[i]);
    sel = get_selected_format_idx ();
    menu->items[i].checked = sel == i ? 1 : 0;
  }
  post_gmenu (menu);
  draw_formats (win, w2);

  wrefresh (win);
  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case KEY_DOWN:
      gmenu_driver (menu, REQ_DOWN);
      clear_confdlg_status_bar (win, 3, 2, 67);
      break;
    case KEY_UP:
      gmenu_driver (menu, REQ_UP);
      clear_confdlg_status_bar (win, 3, 2, 67);
      break;
    case 32:
      gmenu_driver (menu, REQ_SEL);
      clear_confdlg_status_bar (win, 12, 1, 67);
      clear_confdlg_status_bar (win, 15, 1, 67);
      clear_confdlg_status_bar (win, 18, 1, 67);

      if (time_format)
        free (time_format);
      if (date_format)
        free (date_format);
      if (log_format)
        free (log_format);

      for (i = 0; i < n; ++i) {
        if (menu->items[i].checked != 1)
          continue;

        date_format = get_selected_date_str (i);
        log_format = get_selected_format_str (i);
        time_format = get_selected_time_str (i);

        free (set_default_string (win, 12, 2, 67, log_format));
        free (set_default_string (win, 15, 2, 67, date_format));
        free (set_default_string (win, 18, 2, 67, time_format));
        break;
      }
      break;
    case 99:

      clear_confdlg_status_bar (win, 3, 2, 67);
      wmove (win, 12, 2);


      if (!log_format)
        log_format = get_input_log_format ();

      cstm_log =
        input_string (win, 12, 2, log_format ? strlen (log_format) : 512,
                      log_format, 0, 0);
      if (cstm_log != 
# 1381 "project/goaccess/src/ui.c" 3 4
                     ((void *)0) 
# 1381 "project/goaccess/src/ui.c"
                          && *cstm_log != '\0') {
        if (log_format)
          free (log_format);

        log_format = alloc_string (cstm_log);
        free (cstm_log);
      }

      else {
        if (cstm_log)
          free (cstm_log);
        if (log_format) {
          free (log_format);
          log_format = 
# 1394 "project/goaccess/src/ui.c" 3 4
                      ((void *)0)
# 1394 "project/goaccess/src/ui.c"
                          ;
        }
      }
      break;
    case 100:

      clear_confdlg_status_bar (win, 3, 2, 67);
      wmove (win, 15, 0);


      if (!date_format)
        date_format = get_input_date_format ();

      cstm_date = input_string (win, 15, 2, 14, date_format, 0, 0);
      if (cstm_date != 
# 1408 "project/goaccess/src/ui.c" 3 4
                      ((void *)0) 
# 1408 "project/goaccess/src/ui.c"
                           && *cstm_date != '\0') {
        if (date_format)
          free (date_format);

        date_format = alloc_string (cstm_date);
        free (cstm_date);
      }

      else {
        if (cstm_date)
          free (cstm_date);
        if (date_format) {
          free (date_format);
          date_format = 
# 1421 "project/goaccess/src/ui.c" 3 4
                       ((void *)0)
# 1421 "project/goaccess/src/ui.c"
                           ;
        }
      }
      break;
    case 116:

      clear_confdlg_status_bar (win, 3, 2, 67);
      wmove (win, 15, 0);


      if (!time_format)
        time_format = get_input_time_format ();

      cstm_time = input_string (win, 18, 2, 14, time_format, 0, 0);
      if (cstm_time != 
# 1435 "project/goaccess/src/ui.c" 3 4
                      ((void *)0) 
# 1435 "project/goaccess/src/ui.c"
                           && *cstm_time != '\0') {
        if (time_format)
          free (time_format);

        time_format = alloc_string (cstm_time);
        free (cstm_time);
      }

      else {
        if (cstm_time)
          free (cstm_time);
        if (time_format) {
          free (time_format);
          time_format = 
# 1448 "project/goaccess/src/ui.c" 3 4
                       ((void *)0)
# 1448 "project/goaccess/src/ui.c"
                           ;
        }
      }
      break;
    case 274:
    case 0x0a:
    case 0x0d:
    case KEY_ENTER:
      if ((log_err = set_formats (date_format, log_format, time_format)))
        draw_header (win, log_err, " %s", 3, 2, 67, color_error);

      if (!log_err) {
        char **errors = 
# 1460 "project/goaccess/src/ui.c" 3 4
                       ((void *)0)
# 1460 "project/goaccess/src/ui.c"
                           ;
        int nerrors = 0;


        if ((errors = test_format (logs, &nerrors))) {
          invalid = 1;
          load_confdlg_error (win, errors, nerrors);
        }

        else {
          reset_struct (logs);

          spinner->win = win;
          spinner->y = 3;
          spinner->x = 2;
          spinner->spin_x = 67;
          spinner->w = 67;
          spinner->color = color_progress;
          ui_spinner_create (spinner);

          invalid = 0;
          quit = 0;
        }
      }
      break;
    case KEY_RESIZE:
    case 'q':
      quit = 0;
      break;
    }

    pthread_mutex_lock (&spinner->mutex);
    wrefresh (win);
    pthread_mutex_unlock (&spinner->mutex);
  }

  free (time_format);
  free (date_format);
  free (log_format);


  for (i = 0; i < n; ++i)
    free (menu->items[i].name);
  free (menu->items);
  free (menu);

  return invalid ? 1 : 0;
}



static void
scheme_chosen (const char *name) {
  int force = 0;

  free_color_lists ();
  if (strcmp ("Green", name) == 0) {
    conf.color_scheme = STD_GREEN;
    force = 1;
  } else if (strcmp ("Monochrome", name) == 0) {
    conf.color_scheme = MONOCHROME;
    force = 1;
  } else if (strcmp ("Monokai", name) == 0) {
    conf.color_scheme = MONOKAI;
    force = 1;
  } else if (strcmp ("Custom Scheme", name) == 0) {
    force = 0;
  }
  init_colors (force);
}

static const char **
get_color_schemes (size_t *size) {
  const char *choices[] = {
    "Monokai",
    "Monochrome",
    "Green",
    "Custom Scheme"
  };
  int i, j, n = (sizeof(choices) / sizeof(choices[0]));
  const char **opts = xmalloc (sizeof (char *) * n);

  for (i = 0, j = 0; i < n; ++i) {
    if (!conf.color_idx && !strcmp ("Custom Scheme", choices[i]))
      continue;
    if (COLORS < 256 && !strcmp ("Monokai", choices[i]))
      continue;
    opts[j++] = choices[i];
  }
  *size = j;

  return opts;
}


void
load_schemes_win (WINDOW * main_win) {
  GMenu *menu;
  WINDOW *win;
  int c, quit = 1;
  size_t i, n = 0;
  int y, x, h = 10, w = 42;
  int w2 = w - 2;
  const char **choices = get_color_schemes (&n);

  getmaxyx (stdscr, y, x);

  win = newwin (h, w, (y - h) / 2, (x - w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');


  menu = new_gmenu (win, 4, 38, 4, 2);

  menu->size = n;


  menu->items = (GItem *) xcalloc (n, sizeof (GItem));
  for (i = 0; i < n; ++i) {
    menu->items[i].name = alloc_string (choices[i]);
    menu->items[i].checked = 0;
  }
  post_gmenu (menu);

  draw_header (win, dgettext (PACKAGE , "Scheme Configuration"), " %s", 1, 1, w2, color_panel_header);
  mvwprintw (win, 2, 2, dgettext (PACKAGE , "[ENTER] to use scheme - [q]uit"));

  wrefresh (win);
  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case KEY_DOWN:
      gmenu_driver (menu, REQ_DOWN);
      break;
    case KEY_UP:
      gmenu_driver (menu, REQ_UP);
      break;
    case 32:
    case 0x0a:
    case 0x0d:
    case KEY_ENTER:
      gmenu_driver (menu, REQ_SEL);
      for (i = 0; i < n; ++i) {
        if (menu->items[i].checked != 1)
          continue;
        scheme_chosen (choices[i]);
        break;
      }
      quit = 0;
      break;
    case KEY_RESIZE:
    case 'q':
      quit = 0;
      break;
    }
    wrefresh (win);
  }

  for (i = 0; i < n; ++i)
    free (menu->items[i].name);
  free (menu->items);
  free (menu);
  free (choices);

  touchwin (main_win);
  close_win (win);
  wrefresh (main_win);
}


void
load_sort_win (WINDOW * main_win, GModule module, GSort * sort) {
  GMenu *menu;
  WINDOW *win;
  GSortField opts[11];

  int c, quit = 1;
  int i = 0, k, n = 0;
  int y, x, h = 13, w = 42;
  int w2 = w - 2;

  getmaxyx (stdscr, y, x);


  for (i = 0, k = 0; -1 != sort_choices[module][i]; i++) {
    GSortField field = sort_choices[module][i];
    if (SORT_BY_CUMTS == field && !conf.serve_usecs)
      continue;
    else if (SORT_BY_MAXTS == field && !conf.serve_usecs)
      continue;
    else if (SORT_BY_AVGTS == field && !conf.serve_usecs)
      continue;
    else if (SORT_BY_BW == field && !conf.bandwidth)
      continue;
    else if (SORT_BY_PROT == field && !conf.append_protocol)
      continue;
    else if (SORT_BY_MTHD == field && !conf.append_method)
      continue;
    opts[k++] = field;
    n++;
  }

  win = newwin (h, w, (y - h) / 2, (x - w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');


  menu = new_gmenu (win, 6, 38, 4, 2);
  menu->size = n;
  menu->selectable = 1;


  menu->items = (GItem *) xcalloc (n, sizeof (GItem));


  for (i = 0; i < n; ++i) {
    GSortField field = sort_choices[module][opts[i]];
    if (SORT_BY_HITS == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Hits"));
      if (sort->field == SORT_BY_HITS) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_VISITORS == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Visitors"));
      if (sort->field == SORT_BY_VISITORS) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_DATA == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Data"));
      if (sort->field == SORT_BY_DATA) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_BW == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Tx. Amount"));
      if (sort->field == SORT_BY_BW) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_AVGTS == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Avg. T.S."));
      if (sort->field == SORT_BY_AVGTS) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_CUMTS == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Cum. T.S."));
      if (sort->field == SORT_BY_CUMTS) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_MAXTS == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Max. T.S."));
      if (sort->field == SORT_BY_MAXTS) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_PROT == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Protocol"));
      if (sort->field == SORT_BY_PROT) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    } else if (SORT_BY_MTHD == field) {
      menu->items[i].name = alloc_string (dgettext (PACKAGE , "Method"));
      if (sort->field == SORT_BY_MTHD) {
        menu->items[i].checked = 1;
        menu->idx = i;
      }
    }
  }
  post_gmenu (menu);

  draw_header (win, dgettext (PACKAGE , "Sort active module by"), " %s", 1, 1, w2, color_panel_header);
  mvwprintw (win, 2, 2, dgettext (PACKAGE , "[ENTER] select - [TAB] sort - [q]uit"));

  if (sort->sort == SORT_ASC)
    mvwprintw (win, 13 - 2, 1, " %s", dgettext (PACKAGE , "[x] ASC [ ] DESC"));
  else
    mvwprintw (win, 13 - 2, 1, " %s", dgettext (PACKAGE , "[ ] ASC [x] DESC"));

  wrefresh (win);
  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case KEY_DOWN:
      gmenu_driver (menu, REQ_DOWN);
      break;
    case KEY_UP:
      gmenu_driver (menu, REQ_UP);
      break;
    case 9:
      if (sort->sort == SORT_ASC) {

        sort->sort = SORT_DESC;
        mvwprintw (win, 13 - 2, 1, " %s", dgettext (PACKAGE , "[ ] ASC [x] DESC"));
      } else {

        sort->sort = SORT_ASC;
        mvwprintw (win, 13 - 2, 1, " %s", dgettext (PACKAGE , "[x] ASC [ ] DESC"));
      }
      break;
    case 32:
    case 0x0a:
    case 0x0d:
    case KEY_ENTER:
      gmenu_driver (menu, REQ_SEL);
      for (i = 0; i < n; ++i) {
        if (menu->items[i].checked != 1)
          continue;
        if (strcmp ("Hits", menu->items[i].name) == 0)
          sort->field = SORT_BY_HITS;
        else if (strcmp ("Visitors", menu->items[i].name) == 0)
          sort->field = SORT_BY_VISITORS;
        else if (strcmp ("Data", menu->items[i].name) == 0)
          sort->field = SORT_BY_DATA;
        else if (strcmp ("Tx. Amount", menu->items[i].name) == 0)
          sort->field = SORT_BY_BW;
        else if (strcmp ("Avg. T.S.", menu->items[i].name) == 0)
          sort->field = SORT_BY_AVGTS;
        else if (strcmp ("Cum. T.S.", menu->items[i].name) == 0)
          sort->field = SORT_BY_CUMTS;
        else if (strcmp ("Max. T.S.", menu->items[i].name) == 0)
          sort->field = SORT_BY_MAXTS;
        else if (strcmp ("Protocol", menu->items[i].name) == 0)
          sort->field = SORT_BY_PROT;
        else if (strcmp ("Method", menu->items[i].name) == 0)
          sort->field = SORT_BY_MTHD;
        quit = 0;
        break;
      }
      break;
    case KEY_RESIZE:
    case 'q':
      quit = 0;
      break;
    }
    wrefresh (win);
  }


  for (i = 0; i < n; ++i)
    free (menu->items[i].name);
  free (menu->items);
  free (menu);

  touchwin (main_win);
  close_win (win);
  wrefresh (main_win);
}


static const char *help_main[] = {
  "Copyright (C) 2009-2021 by Gerardo Orellana",
  "https://goaccess.io - <hello@goaccess.io>",
  "Released under the MIT License.",
  "",
  "See `man` page for more details",
  "",
  "GoAccess is an open source real-time web log analyzer and",
  "interactive viewer that runs in a terminal in *nix systems.",
  "It provides fast and valuable HTTP statistics for system",
  "administrators that require a visual server report on the",
  "fly.",
  "",
  "The data collected based on the parsing of the log is",
  "divided into different modules. Modules are automatically",
  "generated and presented to the user.",
  "",
  "The main dashboard displays general statistics, top",
  "visitors, requests, browsers, operating systems,",
  "hosts, etc.",
  "",
  "The user can make use of the following keys:",
  " ^F1^  or ^h^    Main help",
  " ^F5^            Redraw [main window]",
  " ^q^             Quit the program, current window or module",
  " ^o^ or ^ENTER^  Expand selected module",
  " ^[Shift]0-9^    Set selected module to active",
  " ^Up^ arrow      Scroll up main dashboard",
  " ^Down^ arrow    Scroll down main dashboard",
  " ^j^             Scroll down within expanded module",
  " ^k^             Scroll up within expanded module",
  " ^c^             Set or change scheme color",
  " ^CTRL^ + ^f^    Scroll forward one screen within",
  "                 active module",
  " ^CTRL^ + ^b^    Scroll backward one screen within",
  "                 active module",
  " ^TAB^           Iterate modules (forward)",
  " ^SHIFT^ + ^TAB^ Iterate modules (backward)",
  " ^s^             Sort options for current module",
  " ^/^             Search across all modules",
  " ^n^             Find position of the next occurrence",
  " ^g^             Move to the first item or top of screen",
  " ^G^             Move to the last item or bottom of screen",
  "",
  "Examples can be found by running `man goaccess`.",
  "",
  "If you believe you have found a bug, please drop me",
  "an email with details.",
  "",
  "Feedback? Just shoot me an email to:",
  "hello@goaccess.io",
};


void
load_help_popup (WINDOW * main_win) {
  int c, quit = 1;
  size_t i, n;
  int y, x, h = 17, w = 64;
  int w2 = w - 2;
  WINDOW *win;
  GMenu *menu;

  n = (sizeof(help_main) / sizeof(help_main[0]));
  getmaxyx (stdscr, y, x);

  win = newwin (h, w, (y - h) / 2, (x - w) / 2);
  keypad (win, TRUE);
  wborder (win, '|', '|', '-', '-', '+', '+', '+', '+');


  menu = new_gmenu (win, 12, 60, 4, 2);
  menu->size = n;


  menu->items = (GItem *) xcalloc (n, sizeof (GItem));
  for (i = 0; i < n; ++i) {
    menu->items[i].name = alloc_string (help_main[i]);
    menu->items[i].checked = 0;
  }
  post_gmenu (menu);

  draw_header (win, dgettext (PACKAGE , "GoAccess Quick Help"), " %s", 1, 1, w2, color_panel_header);
  mvwprintw (win, 2, 2, dgettext (PACKAGE , "[UP/DOWN] to scroll - [q] to quit"));

  wrefresh (win);
  while (quit) {
    c = wgetch (stdscr);
    switch (c) {
    case KEY_DOWN:
      gmenu_driver (menu, REQ_DOWN);
      break;
    case KEY_UP:
      gmenu_driver (menu, REQ_UP);
      break;
    case KEY_RESIZE:
    case 'q':
      quit = 0;
      break;
    }
    wrefresh (win);
  }

  for (i = 0; i < n; ++i)
    free (menu->items[i].name);
  free (menu->items);
  free (menu);

  touchwin (main_win);
  close_win (win);
  wrefresh (main_win);
}
