# 0 "project/ish/emu/vec.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/emu/vec.c"
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 1 3 4
# 45 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 46 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 47 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 2 3 4


# 59 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
    
# 59 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
   typedef float float_t;
    typedef double double_t;
# 126 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 146 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 189 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinited(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinff(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfd(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnand(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormald(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitd(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750796873653722224568e-38F;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= ((double)2.22507385850720138309023271733240406e-308L);
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626267781732175260e-4932L;
}
# 323 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 567 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float __inff(void)
 ;
extern double __inf(void)
 ;
extern long double __infl(void)
 ;
extern float __nan(void)
 ;
# 603 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float __exp10f(float) ;
extern double __exp10(double) ;





extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 620 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;
# 651 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double);
extern int signgam;
# 758 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/math.h" 3 4
extern long int rinttol(double)
 ;

extern long int roundtol(double)
 ;

extern double drem(double, double)
 ;

extern int finite(double)
 ;

extern double gamma(double)
 ;

extern double significand(double)
 ;



struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};





# 2 "project/ish/emu/vec.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
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
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 2 3 4
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
# 3 "project/ish/emu/vec.c" 2

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/vec.h" 1



# 1 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/cpu.h" 1



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
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
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/ish/emu/vec.h" 2





void vec_zero128_copy128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_zero128_copy64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_zero128_copy32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_zero64_copy64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_zero64_copy32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_zero32_copy32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);

void vec_merge32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_merge64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);
void vec_merge128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst);

void vec_imm_shiftl_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union xmm_reg *dst);
void vec_imm_shiftl_q64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union mm_reg *dst);
void vec_imm_shiftr_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union xmm_reg *dst);
void vec_imm_shiftr_q64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union mm_reg *dst);
void vec_imm_shiftl_dq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union xmm_reg *dst);
void vec_shiftl_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *amount, union xmm_reg *dst);
void vec_shiftr_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *amount, union xmm_reg *dst);
void vec_add_b128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_add_d128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_add_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_add_q64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst);
void vec_sub_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_mulu_dq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_mulu_dq64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst);

void vec_and128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_and64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst);
void vec_andn128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_or128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_xor128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_xor64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst);

void vec_min_ub128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);
void vec_max_ub128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst);

void vec_single_fadd64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);
void vec_single_fadd32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst);
void vec_single_fmul64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);
void vec_single_fmul32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst);
void vec_single_fsub64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);
void vec_single_fsub32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst);
void vec_single_fdiv64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);
void vec_single_fdiv32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst);
void vec_single_fsqrt64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);

void vec_single_fmax64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);
void vec_single_fmin64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst);
void vec_single_ucomi32(struct cpu_state *cpu, const float *src, const float *dst);
void vec_single_ucomi64(struct cpu_state *cpu, const double *src, const double *dst);
void vec_single_fcmp64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, union xmm_reg *dst, uint8_t type);

void vec_cvtsi2sd32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const int32_t *src, double *dst);
void vec_cvttsd2si64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, int32_t *dst);
void vec_cvtsd2ss64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, float *dst);
void vec_cvtsi2ss32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const int32_t *src, float *dst);
void vec_cvttss2si32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, int32_t *dst);
void vec_cvtss2sd32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, double *dst);


void vec_unpack_bw128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst);
void vec_unpack_dq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst);
void vec_unpack_dq64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union mm_reg *src, union mm_reg *dst);
void vec_unpack_qdq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst);
void vec_shuffle_lw128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst, uint8_t encoding);
void vec_shuffle_d128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst, uint8_t encoding);
void vec_compare_eqb128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst);
void vec_compare_eqd128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst);
void vec_movmask_b128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, uint32_t *dst);
void vec_fmovmask_d128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, uint32_t *dst);
void vec_extract_w128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, uint32_t *dst, uint8_t index);
# 5 "project/ish/emu/vec.c" 2


static inline void zero_xmm(union xmm_reg *xmm) {
    xmm->qw[0] = 0;
    xmm->qw[1] = 0;
}






void vec_zero128_copy128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) { 
# 17 "project/ish/emu/vec.c" 3 4
__builtin___memcpy_chk (
# 17 "project/ish/emu/vec.c"
dst
# 17 "project/ish/emu/vec.c" 3 4
, 
# 17 "project/ish/emu/vec.c"
src, 128/8
# 17 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 17 "project/ish/emu/vec.c"
dst
# 17 "project/ish/emu/vec.c" 3 4
, 0))
# 17 "project/ish/emu/vec.c"
; 
# 17 "project/ish/emu/vec.c" 3 4
__builtin___memset_chk (
# 17 "project/ish/emu/vec.c"
(char *) dst + 128/8
# 17 "project/ish/emu/vec.c" 3 4
, 
# 17 "project/ish/emu/vec.c"
0, (128 -128)/8
# 17 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 17 "project/ish/emu/vec.c"
(char *) dst + 128/8
# 17 "project/ish/emu/vec.c" 3 4
, 0))
# 17 "project/ish/emu/vec.c"
; }
void vec_zero128_copy64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) { 
# 18 "project/ish/emu/vec.c" 3 4
__builtin___memcpy_chk (
# 18 "project/ish/emu/vec.c"
dst
# 18 "project/ish/emu/vec.c" 3 4
, 
# 18 "project/ish/emu/vec.c"
src, 64/8
# 18 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 18 "project/ish/emu/vec.c"
dst
# 18 "project/ish/emu/vec.c" 3 4
, 0))
# 18 "project/ish/emu/vec.c"
; 
# 18 "project/ish/emu/vec.c" 3 4
__builtin___memset_chk (
# 18 "project/ish/emu/vec.c"
(char *) dst + 64/8
# 18 "project/ish/emu/vec.c" 3 4
, 
# 18 "project/ish/emu/vec.c"
0, (128 -64)/8
# 18 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 18 "project/ish/emu/vec.c"
(char *) dst + 64/8
# 18 "project/ish/emu/vec.c" 3 4
, 0))
# 18 "project/ish/emu/vec.c"
; }
void vec_zero128_copy32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) { 
# 19 "project/ish/emu/vec.c" 3 4
__builtin___memcpy_chk (
# 19 "project/ish/emu/vec.c"
dst
# 19 "project/ish/emu/vec.c" 3 4
, 
# 19 "project/ish/emu/vec.c"
src, 32/8
# 19 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 19 "project/ish/emu/vec.c"
dst
# 19 "project/ish/emu/vec.c" 3 4
, 0))
# 19 "project/ish/emu/vec.c"
; 
# 19 "project/ish/emu/vec.c" 3 4
__builtin___memset_chk (
# 19 "project/ish/emu/vec.c"
(char *) dst + 32/8
# 19 "project/ish/emu/vec.c" 3 4
, 
# 19 "project/ish/emu/vec.c"
0, (128 -32)/8
# 19 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 19 "project/ish/emu/vec.c"
(char *) dst + 32/8
# 19 "project/ish/emu/vec.c" 3 4
, 0))
# 19 "project/ish/emu/vec.c"
; }
void vec_zero64_copy64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) { 
# 20 "project/ish/emu/vec.c" 3 4
__builtin___memcpy_chk (
# 20 "project/ish/emu/vec.c"
dst
# 20 "project/ish/emu/vec.c" 3 4
, 
# 20 "project/ish/emu/vec.c"
src, 64/8
# 20 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 20 "project/ish/emu/vec.c"
dst
# 20 "project/ish/emu/vec.c" 3 4
, 0))
# 20 "project/ish/emu/vec.c"
; 
# 20 "project/ish/emu/vec.c" 3 4
__builtin___memset_chk (
# 20 "project/ish/emu/vec.c"
(char *) dst + 64/8
# 20 "project/ish/emu/vec.c" 3 4
, 
# 20 "project/ish/emu/vec.c"
0, (64 -64)/8
# 20 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 20 "project/ish/emu/vec.c"
(char *) dst + 64/8
# 20 "project/ish/emu/vec.c" 3 4
, 0))
# 20 "project/ish/emu/vec.c"
; }
void vec_zero64_copy32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) { 
# 21 "project/ish/emu/vec.c" 3 4
__builtin___memcpy_chk (
# 21 "project/ish/emu/vec.c"
dst
# 21 "project/ish/emu/vec.c" 3 4
, 
# 21 "project/ish/emu/vec.c"
src, 32/8
# 21 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 21 "project/ish/emu/vec.c"
dst
# 21 "project/ish/emu/vec.c" 3 4
, 0))
# 21 "project/ish/emu/vec.c"
; 
# 21 "project/ish/emu/vec.c" 3 4
__builtin___memset_chk (
# 21 "project/ish/emu/vec.c"
(char *) dst + 32/8
# 21 "project/ish/emu/vec.c" 3 4
, 
# 21 "project/ish/emu/vec.c"
0, (64 -32)/8
# 21 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 21 "project/ish/emu/vec.c"
(char *) dst + 32/8
# 21 "project/ish/emu/vec.c" 3 4
, 0))
# 21 "project/ish/emu/vec.c"
; }
void vec_zero32_copy32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) { 
# 22 "project/ish/emu/vec.c" 3 4
__builtin___memcpy_chk (
# 22 "project/ish/emu/vec.c"
dst
# 22 "project/ish/emu/vec.c" 3 4
, 
# 22 "project/ish/emu/vec.c"
src, 32/8
# 22 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 22 "project/ish/emu/vec.c"
dst
# 22 "project/ish/emu/vec.c" 3 4
, 0))
# 22 "project/ish/emu/vec.c"
; 
# 22 "project/ish/emu/vec.c" 3 4
__builtin___memset_chk (
# 22 "project/ish/emu/vec.c"
(char *) dst + 32/8
# 22 "project/ish/emu/vec.c" 3 4
, 
# 22 "project/ish/emu/vec.c"
0, (32 -32)/8
# 22 "project/ish/emu/vec.c" 3 4
, __builtin_object_size (
# 22 "project/ish/emu/vec.c"
(char *) dst + 32/8
# 22 "project/ish/emu/vec.c" 3 4
, 0))
# 22 "project/ish/emu/vec.c"
; }

void vec_merge32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) {
    
# 25 "project/ish/emu/vec.c" 3 4
   __builtin___memcpy_chk (
# 25 "project/ish/emu/vec.c"
   dst
# 25 "project/ish/emu/vec.c" 3 4
   , 
# 25 "project/ish/emu/vec.c"
   src, 4
# 25 "project/ish/emu/vec.c" 3 4
   , __builtin_object_size (
# 25 "project/ish/emu/vec.c"
   dst
# 25 "project/ish/emu/vec.c" 3 4
   , 0))
# 25 "project/ish/emu/vec.c"
                      ;
}
void vec_merge64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) {
    
# 28 "project/ish/emu/vec.c" 3 4
   __builtin___memcpy_chk (
# 28 "project/ish/emu/vec.c"
   dst
# 28 "project/ish/emu/vec.c" 3 4
   , 
# 28 "project/ish/emu/vec.c"
   src, 8
# 28 "project/ish/emu/vec.c" 3 4
   , __builtin_object_size (
# 28 "project/ish/emu/vec.c"
   dst
# 28 "project/ish/emu/vec.c" 3 4
   , 0))
# 28 "project/ish/emu/vec.c"
                      ;
}
void vec_merge128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const void *src, void *dst) {
    
# 31 "project/ish/emu/vec.c" 3 4
   __builtin___memcpy_chk (
# 31 "project/ish/emu/vec.c"
   dst
# 31 "project/ish/emu/vec.c" 3 4
   , 
# 31 "project/ish/emu/vec.c"
   src, 16
# 31 "project/ish/emu/vec.c" 3 4
   , __builtin_object_size (
# 31 "project/ish/emu/vec.c"
   dst
# 31 "project/ish/emu/vec.c" 3 4
   , 0))
# 31 "project/ish/emu/vec.c"
                       ;
}

void vec_imm_shiftl_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union xmm_reg *dst) {
    if (amount > 63) {
        zero_xmm(dst);
    } else {
        dst->qw[0] <<= amount;
        dst->qw[1] <<= amount;
    }
}
void vec_imm_shiftl_q64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union mm_reg *dst) {
    if (amount > 63)
        dst->qw = 0;
    else
        dst->qw <<= amount;
}

void vec_imm_shiftr_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union xmm_reg *dst) {
    if (amount > 63) {
        zero_xmm(dst);
    } else {
        dst->qw[0] >>= amount;
        dst->qw[1] >>= amount;
    }
}
void vec_imm_shiftr_q64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const uint8_t amount, union mm_reg *dst) {
    if (amount > 63)
        dst->qw = 0;
    else
        dst->qw >>= amount;
}

void vec_imm_shiftl_dq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), uint8_t amount, union xmm_reg *dst) {
    if (amount >= 16)
        zero_xmm(dst);
    else
        dst->u128 <<= amount * 8;
}

void vec_shiftl_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *amount, union xmm_reg *dst) {
    uint64_t amount_qw = amount->qw[0];

    if (amount_qw > 63) {
        zero_xmm(dst);
    } else {
        dst->qw[0] <<= amount_qw;
        dst->qw[1] <<= amount_qw;
    }
}

void vec_shiftr_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *amount, union xmm_reg *dst) {
    uint64_t amount_qw = amount->qw[0];

    if (amount_qw > 63) {
        zero_xmm(dst);
    } else {
        dst->qw[0] >>= amount_qw;
        dst->qw[1] >>= amount_qw;
    }
}

void vec_add_b128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    for (unsigned i = 0; i < (sizeof(src->u8)/sizeof((src->u8)[0])); i++)
        dst->u8[i] += src->u8[i];
}
void vec_add_d128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    for (unsigned i = 0; i < (sizeof(src->u32)/sizeof((src->u32)[0])); i++)
        dst->u32[i] += src->u32[i];
}
void vec_add_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] += src->qw[0];
    dst->qw[1] += src->qw[1];
}
void vec_add_q64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst) {
    dst->qw += src->qw;
}
void vec_sub_q128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] -= src->qw[0];
    dst->qw[1] -= src->qw[1];
}

void vec_mulu_dq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] = (uint64_t) src->u32[0] * dst->u32[0];
    dst->qw[1] = (uint64_t) src->u32[2] * dst->u32[2];
}
void vec_mulu_dq64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst) {
    dst->qw = (uint64_t) src->dw[0] * dst->dw[0];
}

void vec_and128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] &= src->qw[0];
    dst->qw[1] &= src->qw[1];
}
void vec_and64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst) {
    dst->qw &= src->qw;
}
void vec_andn128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] = ~dst->qw[0] & src->qw[0];
    dst->qw[1] = ~dst->qw[1] & src->qw[1];
}
void vec_or128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] |= src->qw[0];
    dst->qw[1] |= src->qw[1];
}
void vec_xor128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[0] ^= src->qw[0];
    dst->qw[1] ^= src->qw[1];
}
void vec_xor64(struct cpu_state *UNUSED_cpu __attribute__((unused)), union mm_reg *src, union mm_reg *dst) {
    dst->qw ^= src->qw;
}

void vec_min_ub128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    for (unsigned i = 0; i < (sizeof(src->u8)/sizeof((src->u8)[0])); i++)
        if (src->u8[i] < dst->u8[i])
            dst->u8[i] = src->u8[i];
}

void vec_max_ub128(struct cpu_state *UNUSED_cpu __attribute__((unused)), union xmm_reg *src, union xmm_reg *dst) {
    for (unsigned i = 0; i < (sizeof(src->u8)/sizeof((src->u8)[0])); i++)
        if (src->u8[i] > dst->u8[i])
            dst->u8[i] = src->u8[i];
}

static 
# 156 "project/ish/emu/vec.c" 3 4
      _Bool 
# 156 "project/ish/emu/vec.c"
           cmpd(double a, double b, int type) {
    
# 157 "project/ish/emu/vec.c" 3 4
   _Bool 
# 157 "project/ish/emu/vec.c"
        res;
    switch (type % 4) {
        case 0: res = a == b; break;
        case 1: res = a < b; break;
        case 2: res = a <= b; break;
        case 3: res = 
# 162 "project/ish/emu/vec.c" 3 4
                     ( sizeof(
# 162 "project/ish/emu/vec.c"
                     a
# 162 "project/ish/emu/vec.c" 3 4
                     ) == sizeof(float) ? __inline_isnanf((float)(
# 162 "project/ish/emu/vec.c"
                     a
# 162 "project/ish/emu/vec.c" 3 4
                     )) : sizeof(
# 162 "project/ish/emu/vec.c"
                     a
# 162 "project/ish/emu/vec.c" 3 4
                     ) == sizeof(double) ? __inline_isnand((double)(
# 162 "project/ish/emu/vec.c"
                     a
# 162 "project/ish/emu/vec.c" 3 4
                     )) : __inline_isnanl((long double)(
# 162 "project/ish/emu/vec.c"
                     a
# 162 "project/ish/emu/vec.c" 3 4
                     ))) 
# 162 "project/ish/emu/vec.c"
                              || 
# 162 "project/ish/emu/vec.c" 3 4
                                 ( sizeof(
# 162 "project/ish/emu/vec.c"
                                 b
# 162 "project/ish/emu/vec.c" 3 4
                                 ) == sizeof(float) ? __inline_isnanf((float)(
# 162 "project/ish/emu/vec.c"
                                 b
# 162 "project/ish/emu/vec.c" 3 4
                                 )) : sizeof(
# 162 "project/ish/emu/vec.c"
                                 b
# 162 "project/ish/emu/vec.c" 3 4
                                 ) == sizeof(double) ? __inline_isnand((double)(
# 162 "project/ish/emu/vec.c"
                                 b
# 162 "project/ish/emu/vec.c" 3 4
                                 )) : __inline_isnanl((long double)(
# 162 "project/ish/emu/vec.c"
                                 b
# 162 "project/ish/emu/vec.c" 3 4
                                 )))
# 162 "project/ish/emu/vec.c"
                                         ; break;
    }
    if (type >= 4) res = !res;
    return res;
}

void vec_single_fcmp64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, union xmm_reg *dst, uint8_t type) {
    dst->qw[0] = cmpd(dst->f64[0], *src, type) ? -1 : 0;
}

void vec_single_fadd64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) { *dst += *src; }
void vec_single_fadd32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst) { *dst += *src; }
void vec_single_fmul64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) { *dst *= *src; }
void vec_single_fmul32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst) { *dst *= *src; }
void vec_single_fsub64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) { *dst -= *src; }
void vec_single_fsub32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst) { *dst -= *src; }
void vec_single_fdiv64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) { *dst /= *src; }
void vec_single_fdiv32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, float *dst) { *dst /= *src; }

void vec_single_fsqrt64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) { *dst = sqrt(*src); }

void vec_single_fmax64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) {
    if (*src > *dst || 
# 184 "project/ish/emu/vec.c" 3 4
                      ( sizeof(
# 184 "project/ish/emu/vec.c"
                      *src
# 184 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(float) ? __inline_isnanf((float)(
# 184 "project/ish/emu/vec.c"
                      *src
# 184 "project/ish/emu/vec.c" 3 4
                      )) : sizeof(
# 184 "project/ish/emu/vec.c"
                      *src
# 184 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(double) ? __inline_isnand((double)(
# 184 "project/ish/emu/vec.c"
                      *src
# 184 "project/ish/emu/vec.c" 3 4
                      )) : __inline_isnanl((long double)(
# 184 "project/ish/emu/vec.c"
                      *src
# 184 "project/ish/emu/vec.c" 3 4
                      ))) 
# 184 "project/ish/emu/vec.c"
                                  || 
# 184 "project/ish/emu/vec.c" 3 4
                                     ( sizeof(
# 184 "project/ish/emu/vec.c"
                                     *dst
# 184 "project/ish/emu/vec.c" 3 4
                                     ) == sizeof(float) ? __inline_isnanf((float)(
# 184 "project/ish/emu/vec.c"
                                     *dst
# 184 "project/ish/emu/vec.c" 3 4
                                     )) : sizeof(
# 184 "project/ish/emu/vec.c"
                                     *dst
# 184 "project/ish/emu/vec.c" 3 4
                                     ) == sizeof(double) ? __inline_isnand((double)(
# 184 "project/ish/emu/vec.c"
                                     *dst
# 184 "project/ish/emu/vec.c" 3 4
                                     )) : __inline_isnanl((long double)(
# 184 "project/ish/emu/vec.c"
                                     *dst
# 184 "project/ish/emu/vec.c" 3 4
                                     )))
# 184 "project/ish/emu/vec.c"
                                                ) *dst = *src;
}
void vec_single_fmin64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, double *dst) {
    if (*src < *dst || 
# 187 "project/ish/emu/vec.c" 3 4
                      ( sizeof(
# 187 "project/ish/emu/vec.c"
                      *src
# 187 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(float) ? __inline_isnanf((float)(
# 187 "project/ish/emu/vec.c"
                      *src
# 187 "project/ish/emu/vec.c" 3 4
                      )) : sizeof(
# 187 "project/ish/emu/vec.c"
                      *src
# 187 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(double) ? __inline_isnand((double)(
# 187 "project/ish/emu/vec.c"
                      *src
# 187 "project/ish/emu/vec.c" 3 4
                      )) : __inline_isnanl((long double)(
# 187 "project/ish/emu/vec.c"
                      *src
# 187 "project/ish/emu/vec.c" 3 4
                      ))) 
# 187 "project/ish/emu/vec.c"
                                  || 
# 187 "project/ish/emu/vec.c" 3 4
                                     ( sizeof(
# 187 "project/ish/emu/vec.c"
                                     *dst
# 187 "project/ish/emu/vec.c" 3 4
                                     ) == sizeof(float) ? __inline_isnanf((float)(
# 187 "project/ish/emu/vec.c"
                                     *dst
# 187 "project/ish/emu/vec.c" 3 4
                                     )) : sizeof(
# 187 "project/ish/emu/vec.c"
                                     *dst
# 187 "project/ish/emu/vec.c" 3 4
                                     ) == sizeof(double) ? __inline_isnand((double)(
# 187 "project/ish/emu/vec.c"
                                     *dst
# 187 "project/ish/emu/vec.c" 3 4
                                     )) : __inline_isnanl((long double)(
# 187 "project/ish/emu/vec.c"
                                     *dst
# 187 "project/ish/emu/vec.c" 3 4
                                     )))
# 187 "project/ish/emu/vec.c"
                                                ) *dst = *src;
}

void vec_single_ucomi32(struct cpu_state *cpu, const float *src, const float *dst) {
    cpu->zf_res = cpu->pf_res = 0;
    cpu->zf = *src == *dst;
    cpu->cf = *src > *dst;
    cpu->pf = 0;
    if (
# 195 "project/ish/emu/vec.c" 3 4
       ( sizeof(
# 195 "project/ish/emu/vec.c"
       *src
# 195 "project/ish/emu/vec.c" 3 4
       ) == sizeof(float) ? __inline_isnanf((float)(
# 195 "project/ish/emu/vec.c"
       *src
# 195 "project/ish/emu/vec.c" 3 4
       )) : sizeof(
# 195 "project/ish/emu/vec.c"
       *src
# 195 "project/ish/emu/vec.c" 3 4
       ) == sizeof(double) ? __inline_isnand((double)(
# 195 "project/ish/emu/vec.c"
       *src
# 195 "project/ish/emu/vec.c" 3 4
       )) : __inline_isnanl((long double)(
# 195 "project/ish/emu/vec.c"
       *src
# 195 "project/ish/emu/vec.c" 3 4
       ))) 
# 195 "project/ish/emu/vec.c"
                   || 
# 195 "project/ish/emu/vec.c" 3 4
                      ( sizeof(
# 195 "project/ish/emu/vec.c"
                      *dst
# 195 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(float) ? __inline_isnanf((float)(
# 195 "project/ish/emu/vec.c"
                      *dst
# 195 "project/ish/emu/vec.c" 3 4
                      )) : sizeof(
# 195 "project/ish/emu/vec.c"
                      *dst
# 195 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(double) ? __inline_isnand((double)(
# 195 "project/ish/emu/vec.c"
                      *dst
# 195 "project/ish/emu/vec.c" 3 4
                      )) : __inline_isnanl((long double)(
# 195 "project/ish/emu/vec.c"
                      *dst
# 195 "project/ish/emu/vec.c" 3 4
                      )))
# 195 "project/ish/emu/vec.c"
                                 )
        cpu->zf = cpu->cf = cpu->pf = 1;
    cpu->of = cpu->sf = cpu->af = 0;
    cpu->sf_res = 0;
}

void vec_single_ucomi64(struct cpu_state *cpu, const double *src, const double *dst) {
    cpu->zf_res = cpu->pf_res = 0;
    cpu->zf = *src == *dst;
    cpu->cf = *src > *dst;
    cpu->pf = 0;
    if (
# 206 "project/ish/emu/vec.c" 3 4
       ( sizeof(
# 206 "project/ish/emu/vec.c"
       *src
# 206 "project/ish/emu/vec.c" 3 4
       ) == sizeof(float) ? __inline_isnanf((float)(
# 206 "project/ish/emu/vec.c"
       *src
# 206 "project/ish/emu/vec.c" 3 4
       )) : sizeof(
# 206 "project/ish/emu/vec.c"
       *src
# 206 "project/ish/emu/vec.c" 3 4
       ) == sizeof(double) ? __inline_isnand((double)(
# 206 "project/ish/emu/vec.c"
       *src
# 206 "project/ish/emu/vec.c" 3 4
       )) : __inline_isnanl((long double)(
# 206 "project/ish/emu/vec.c"
       *src
# 206 "project/ish/emu/vec.c" 3 4
       ))) 
# 206 "project/ish/emu/vec.c"
                   || 
# 206 "project/ish/emu/vec.c" 3 4
                      ( sizeof(
# 206 "project/ish/emu/vec.c"
                      *dst
# 206 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(float) ? __inline_isnanf((float)(
# 206 "project/ish/emu/vec.c"
                      *dst
# 206 "project/ish/emu/vec.c" 3 4
                      )) : sizeof(
# 206 "project/ish/emu/vec.c"
                      *dst
# 206 "project/ish/emu/vec.c" 3 4
                      ) == sizeof(double) ? __inline_isnand((double)(
# 206 "project/ish/emu/vec.c"
                      *dst
# 206 "project/ish/emu/vec.c" 3 4
                      )) : __inline_isnanl((long double)(
# 206 "project/ish/emu/vec.c"
                      *dst
# 206 "project/ish/emu/vec.c" 3 4
                      )))
# 206 "project/ish/emu/vec.c"
                                 )
        cpu->zf = cpu->cf = cpu->pf = 1;
    cpu->of = cpu->sf = cpu->af = 0;
    cpu->sf_res = 0;
}
# 224 "project/ish/emu/vec.c"
void vec_cvtsi2sd32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const int32_t *src, double *dst) { if (
# 224 "project/ish/emu/vec.c" 3 4
0
# 224 "project/ish/emu/vec.c"
) *dst = 
# 224 "project/ish/emu/vec.c" 3 4
(-2147483647 -1)
# 224 "project/ish/emu/vec.c"
; else *dst = *src; }
void vec_cvttsd2si64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, int32_t *dst) { if (
# 225 "project/ish/emu/vec.c" 3 4
( sizeof(
# 225 "project/ish/emu/vec.c"
*src
# 225 "project/ish/emu/vec.c" 3 4
) == sizeof(float) ? __inline_isnanf((float)(
# 225 "project/ish/emu/vec.c"
*src
# 225 "project/ish/emu/vec.c" 3 4
)) : sizeof(
# 225 "project/ish/emu/vec.c"
*src
# 225 "project/ish/emu/vec.c" 3 4
) == sizeof(double) ? __inline_isnand((double)(
# 225 "project/ish/emu/vec.c"
*src
# 225 "project/ish/emu/vec.c" 3 4
)) : __inline_isnanl((long double)(
# 225 "project/ish/emu/vec.c"
*src
# 225 "project/ish/emu/vec.c" 3 4
)))
# 225 "project/ish/emu/vec.c"
) *dst = 
# 225 "project/ish/emu/vec.c" 3 4
(-2147483647 -1)
# 225 "project/ish/emu/vec.c"
; else *dst = *src; }
void vec_cvtsd2ss64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const double *src, float *dst) { if (
# 226 "project/ish/emu/vec.c" 3 4
( sizeof(
# 226 "project/ish/emu/vec.c"
*src
# 226 "project/ish/emu/vec.c" 3 4
) == sizeof(float) ? __inline_isnanf((float)(
# 226 "project/ish/emu/vec.c"
*src
# 226 "project/ish/emu/vec.c" 3 4
)) : sizeof(
# 226 "project/ish/emu/vec.c"
*src
# 226 "project/ish/emu/vec.c" 3 4
) == sizeof(double) ? __inline_isnand((double)(
# 226 "project/ish/emu/vec.c"
*src
# 226 "project/ish/emu/vec.c" 3 4
)) : __inline_isnanl((long double)(
# 226 "project/ish/emu/vec.c"
*src
# 226 "project/ish/emu/vec.c" 3 4
)))
# 226 "project/ish/emu/vec.c"
) *dst = 
# 226 "project/ish/emu/vec.c" 3 4
(-2147483647 -1)
# 226 "project/ish/emu/vec.c"
; else *dst = *src; }
void vec_cvtsi2ss32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const int32_t *src, float *dst) { if (
# 227 "project/ish/emu/vec.c" 3 4
0
# 227 "project/ish/emu/vec.c"
) *dst = 
# 227 "project/ish/emu/vec.c" 3 4
(-2147483647 -1)
# 227 "project/ish/emu/vec.c"
; else *dst = *src; }
void vec_cvttss2si32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, int32_t *dst) { if (
# 228 "project/ish/emu/vec.c" 3 4
( sizeof(
# 228 "project/ish/emu/vec.c"
*src
# 228 "project/ish/emu/vec.c" 3 4
) == sizeof(float) ? __inline_isnanf((float)(
# 228 "project/ish/emu/vec.c"
*src
# 228 "project/ish/emu/vec.c" 3 4
)) : sizeof(
# 228 "project/ish/emu/vec.c"
*src
# 228 "project/ish/emu/vec.c" 3 4
) == sizeof(double) ? __inline_isnand((double)(
# 228 "project/ish/emu/vec.c"
*src
# 228 "project/ish/emu/vec.c" 3 4
)) : __inline_isnanl((long double)(
# 228 "project/ish/emu/vec.c"
*src
# 228 "project/ish/emu/vec.c" 3 4
)))
# 228 "project/ish/emu/vec.c"
) *dst = 
# 228 "project/ish/emu/vec.c" 3 4
(-2147483647 -1)
# 228 "project/ish/emu/vec.c"
; else *dst = *src; }
void vec_cvtss2sd32(struct cpu_state *UNUSED_cpu __attribute__((unused)), const float *src, double *dst) { if (
# 229 "project/ish/emu/vec.c" 3 4
( sizeof(
# 229 "project/ish/emu/vec.c"
*src
# 229 "project/ish/emu/vec.c" 3 4
) == sizeof(float) ? __inline_isnanf((float)(
# 229 "project/ish/emu/vec.c"
*src
# 229 "project/ish/emu/vec.c" 3 4
)) : sizeof(
# 229 "project/ish/emu/vec.c"
*src
# 229 "project/ish/emu/vec.c" 3 4
) == sizeof(double) ? __inline_isnand((double)(
# 229 "project/ish/emu/vec.c"
*src
# 229 "project/ish/emu/vec.c" 3 4
)) : __inline_isnanl((long double)(
# 229 "project/ish/emu/vec.c"
*src
# 229 "project/ish/emu/vec.c" 3 4
)))
# 229 "project/ish/emu/vec.c"
) *dst = 
# 229 "project/ish/emu/vec.c" 3 4
(-2147483647 -1)
# 229 "project/ish/emu/vec.c"
; else *dst = *src; }

void vec_unpack_bw128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst) {
    for (int i = 7; i >= 0; i--) {
        dst->u8[i*2 + 1] = src->u8[i];
        dst->u8[i*2] = dst->u8[i];
    }
}
void vec_unpack_dq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst) {
    dst->u32[3] = src->u32[1];
    dst->u32[2] = dst->u32[1];
    dst->u32[1] = src->u32[0];
}
void vec_unpack_dq64(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union mm_reg *src, union mm_reg *dst) {
    dst->dw[1] = src->dw[0];
}
void vec_unpack_qdq128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst) {
    dst->qw[1] = src->qw[0];
}

void vec_shuffle_lw128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst, uint8_t encoding) {
    union xmm_reg src_copy = *src;
    for (int i = 0; i < 4; i++)
        dst->u16[i] = src_copy.u16[(encoding >> (i*2)) % 4];
    dst->qw[1] = src->qw[1];
}
void vec_shuffle_d128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst, uint8_t encoding) {
    union xmm_reg src_copy = *src;
    for (int i = 0; i < 4; i++)
        dst->u32[i] = src_copy.u32[(encoding >> (i*2)) % 4];
}

void vec_compare_eqb128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst) {
    for (unsigned i = 0; i < (sizeof(src->u8)/sizeof((src->u8)[0])); i++)
        dst->u8[i] = dst->u8[i] == src->u8[i] ? ~0 : 0;
}
void vec_compare_eqd128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, union xmm_reg *dst) {
    for (unsigned i = 0; i < (sizeof(src->u32)/sizeof((src->u32)[0])); i++)
        dst->u32[i] = dst->u32[i] == src->u32[i] ? ~0 : 0;
}

void vec_movmask_b128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, uint32_t *dst) {
    *dst = 0;
    for (unsigned i = 0; i < (sizeof(src->u8)/sizeof((src->u8)[0])); i++) {
        if (src->u8[i] & (1 << 7))
            *dst |= 1 << i;
    }
}

void vec_fmovmask_d128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, uint32_t *dst) {
    *dst = 0;
    for (unsigned i = 0; i < (sizeof(src->f64)/sizeof((src->f64)[0])); i++) {
        if (
# 281 "project/ish/emu/vec.c" 3 4
           ( sizeof(
# 281 "project/ish/emu/vec.c"
           src->f64[i]
# 281 "project/ish/emu/vec.c" 3 4
           ) == sizeof(float) ? __inline_signbitf((float)(
# 281 "project/ish/emu/vec.c"
           src->f64[i]
# 281 "project/ish/emu/vec.c" 3 4
           )) : sizeof(
# 281 "project/ish/emu/vec.c"
           src->f64[i]
# 281 "project/ish/emu/vec.c" 3 4
           ) == sizeof(double) ? __inline_signbitd((double)(
# 281 "project/ish/emu/vec.c"
           src->f64[i]
# 281 "project/ish/emu/vec.c" 3 4
           )) : __inline_signbitl((long double)(
# 281 "project/ish/emu/vec.c"
           src->f64[i]
# 281 "project/ish/emu/vec.c" 3 4
           )))
# 281 "project/ish/emu/vec.c"
                               )
            *dst |= 1 << i;
    }
}

void vec_extract_w128(struct cpu_state *UNUSED_cpu __attribute__((unused)), const union xmm_reg *src, uint32_t *dst, uint8_t index) {
    *dst = src->u16[index % 8];
}
