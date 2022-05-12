#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define _SYS__TYPES_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define M_SQRT1_2 0.707106781186547524400844362104849039
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define _T_WCHAR_ 
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define _ASSERT_H_ 
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define __INTMAX_C(c) c ## L
#define isunordered(x,y) __builtin_isunordered((x),(y))
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define FP_NAN 1
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define WCHAR_MAX __WCHAR_MAX__
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define __FLT32_MIN_EXP__ (-125)
#define INT8_MAX 127
#define UINT_LEAST64_MAX UINT64_MAX
#define MISC_H 
#define _CDEFS_H_ 
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _PTHREAD_CONDATTR_T 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __WCHAR_MAX__ 0x7fffffff
#define forceinline inline __attribute__((always_inline))
#define INT16_MAX 32767
#define M_E 2.71828182845904523536028747135266250
#define __DARWIN_PDP_ENDIAN 3412
#define _WCHAR_T 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define htons(x) __DARWIN_OSSwapInt16(x)
#define __GCC_IEC_559 2
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define __FLT32X_DECIMAL_DIG__ 17
#define __IOS_PROHIBITED 
#define __FLT_EVAL_METHOD__ 0
#define _PTHREAD_T 
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define MAXFLOAT 0x1.fffffep+127f
#define __disable_tail_calls 
#define glue(a,b) _glue(a, b)
#define M_PI 3.14159265358979323846264338327950288
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define MAC_OS_X_VERSION_10_14_4 101404
#define bool _Bool
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define __FINITE_MATH_ONLY__ 0
#define __cold __attribute__((__cold__))
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define UINT32_C(v) (v ## U)
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define __FLT32_HAS_DENORM__ 1
#define FP_INFINITE 2
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define _T_PTRDIFF 
#define __UINT_FAST8_MAX__ 0xff
#define __WATCHOS_PROHIBITED 
#define __FLT32_MAX_10_EXP__ 38
#define INT_FAST8_MAX INT8_MAX
#define _WCHAR_T_DEFINED 
#define __INT8_C(c) c
#define _U_LONG 
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define _ERRNO_T 
#define __restrict restrict
#define NFDBITS __DARWIN_NFDBITS
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define howmany(x,y) __DARWIN_howmany(x, y)
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define FP_ILOGBNAN (-2147483647 - 1)
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __result_use_check __attribute__((__warn_unused_result__))
#define flatten __attribute__((flatten))
#define __APPLE_API_STANDARD 
#define WCHAR_MIN (-WCHAR_MAX-1)
#define HUGE_VALF __builtin_huge_valf()
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define HUGE_VALL __builtin_huge_vall()
#define NULL ((void *)0)
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define __PTHREAD_MUTEX_SIZE__ 56
#define INT64_MAX 9223372036854775807LL
#define __DARWIN_UNIX03 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define M_PI_2 1.57079632679489661923132169163975144
#define UINT_FAST16_MAX UINT16_MAX
#define __FLT128_MIN_EXP__ (-16381)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define UINT16_C(v) (v)
#define FIXINC_WRAP_MATH_H_MATH_EXCEPTION 1
#define __FLT128_MIN_10_EXP__ (-4931)
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __MAC_11_1 110100
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define FP_NORMAL 4
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define _INT32_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define __USER_LABEL_PREFIX__ _
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define FP_ILOGB0 (-2147483647 - 1)
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define EMU_CPU_MEM_H 
#define __STDC_HOSTED__ 1
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_4 101204
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define uint(size) glue3(uint,size,_t)
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define INT32_MIN (-INT32_MAX-1)
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define __FLT32_IS_IEC_60559__ 2
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define __API_AVAILABLE_GET_MACRO(...) 
#define __APPLE_API_EVOLVING 
#define _BLKCNT_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __strong 
#define _WCHAR_T_ 
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define isless(x,y) __builtin_isless((x),(y))
#define _STDDEF_H 
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define MATH_ERRNO 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __AVAILABILITY_INTERNAL_REGULAR 
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define __WATCHOS_7_2 70200
#define M_2_PI 0.636619772367581343075535053490057448
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define __DECIMAL_DIG__ 21
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define SING 2
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __APPLE_API_STABLE 
#define __FLT128_IS_IEC_60559__ 2
#define __APPLE_API_PRIVATE 
#define SIG_ATOMIC_MIN INT32_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define _QUAD_LOWWORD 0
#define __FLT64_MANT_DIG__ 53
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _FSBLKCNT_T 
#define __SPI_AVAILABLE(...) 
#define __FLT64X_MANT_DIG__ 64
#define _INO_T 
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define UINT8_C(v) (v)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __GNUC__ 11
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define UINT_LEAST8_MAX UINT8_MAX
#define __MMX__ 1
#define PF_FLAG (1 << 2)
#define has_feature __has_feature
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define INT_FAST16_MIN INT16_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __BIGGEST_ALIGNMENT__ 16
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define M_PI_4 0.785398163397448309615660845819875721
#define __FLT64_MAX_10_EXP__ 308
#define _TIME_T 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define _GCC_WCHAR_T 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __APPLE_API_UNSTABLE 
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define _SYS_TYPES_H_ 
#define UINT8_MAX 255
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define fallthrough __attribute__((fallthrough))
#define islessgreater(x,y) __builtin_islessgreater((x),(y))
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define FLOAT80_H 
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define __WATCHOS_UNAVAILABLE 
#define __DARWIN_SUF_NON_CANCELABLE 
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define MEM_WRITE_PTRACE 2
#define fpu_ucomi fpu_comi
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define INFINITY HUGE_VALF
#define _GCC_WRAP_STDINT_H 
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define true 1
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define __weak 
#define _DEV_T 
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define OVERFLOW 3
#define __kpi_unavailable 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define __amd64 1
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __PTHREAD_ONCE_SIZE__ 8
#define _PTRDIFF_T_DECLARED 
#define _str(x) #x
#define __AVAILABILITY__ 
#define __tune_core2__ 1
#define __ATOMIC_HLE_ACQUIRE 65536
#define _UINT32_T 
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _glue(a,b) a ##b
#define __MAC_10_14_1 101401
#define __SPI_DEPRECATED(...) 
#define __dead 
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define __WATCHOS_5_0 50000
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define __SIZEOF_WINT_T__ 4
#define __WATCHOS_5_2 50200
#define _SECURE__COMMON_H_ 
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define UINTPTR_MAX 18446744073709551615UL
#define _PTRDIFF_T 
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define DF_FLAG (1 << 10)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define TLOSS 5
#define math_errhandling (__math_errhandling())
#define M_LOG2E 1.44269504088896340735992468100189214
#define _BSD_I386__TYPES_H_ 
#define isnan(x) ( sizeof(x) == sizeof(float) ? __inline_isnanf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x)) : __inline_isnanl((long double)(x)))
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __INT16_MAX__ 0x7fff
#define __x86_64 1
#define __PTRDIFF_T 
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NBBY __DARWIN_NBBY
#define ZF_FLAG (1 << 6)
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __INT_FAST64_TYPE__ long long int
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define _ANSI_STDDEF_H 
#define HUGE_VAL __builtin_huge_val()
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __OSX_AVAILABLE(_vers) 
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define FP_SUPERNORMAL 6
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define M_2_SQRTPI 1.12837916709551257389615890312154517
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define OF (cpu->of)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __nonnull 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define INT_LEAST8_MAX INT8_MAX
#define __WATCHOS_4_1 40100
#define __FLT64_MIN_10_EXP__ (-307)
#define INT8_C(v) (v)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define X_TLOSS 1.41484755040568800000e+16
#define __LDBL_HAS_INFINITY__ 1
#define __OS_AVAILABILITY(_target,_availability) 
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define __DARWIN_NON_CANCELABLE 0
#define __DEC_EVAL_METHOD__ 2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define __enum_options 
#define isnormal(x) ( sizeof(x) == sizeof(float) ? __inline_isnormalf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnormald((double)(x)) : __inline_isnormall((long double)(x)))
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define INT_LEAST8_MIN INT8_MIN
#define __VERSION__ "11.2.0"
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define FP_SUBNORMAL 5
#define _SECURE__STRINGS_H_ 
#define INT_LEAST32_MIN INT32_MIN
#define islessequal(x,y) __builtin_islessequal((x),(y))
#define sint(size) glue3(int,size,_t)
#define INT_FAST16_MAX INT16_MAX
#define _SECURE__STRING_H_ 
#define _IN_PORT_T 
#define HUGE MAXFLOAT
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _CLOCK_T 
#define _INTMAX_T 
#define _GID_T 
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define MEM_READ 0
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __IOS_UNAVAILABLE 
#define INT32_MAX 2147483647
#define _U_INT8_T 
#define _U_CHAR 
#define fpush(f) fpu_push(cpu, f)
#define _STDNORETURN_H 
#define __FLT128_HAS_DENORM__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define _UINT64_T 
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define FP_SNAN FP_NAN
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define str(x) _str(x)
#define INT_FAST8_MIN INT8_MIN
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define _Null_unspecified 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define __DARWIN_NO_LONG_LONG 0
#define UINT64_MAX 18446744073709551615ULL
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define CF (cpu->cf)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define _KEY_T 
#define __MAC_10_15_4 101504
#define _INT64_T 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define typecheck(type,x) ({type _x = x; x;})
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define __INT8_TYPE__ signed char
#define _UINTMAX_T 
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _REG(n) union { dword_t e ##n; word_t n; }
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define isgreater(x,y) __builtin_isgreater((x),(y))
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define minor(x) ((int32_t)((x) & 0xffffff))
#define __SSE_MATH__ 1
#define _U_INT32_T 
#define __k8 1
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define EMU_H 
#define _UID_T 
#define AF_OPS (1 << 3)
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __SIZEOF_PTRDIFF_T__ 8
#define _WCHAR_T_H 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define __MATH_H__ 
#define _ID_T 
#define __TVOS_AVAILABLE(_vers) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define MEM_WRITE 1
#define __DARWIN_64_BIT_INO_T 1
#define __TVOS_14_0 140000
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __LDBL_DIG__ 18
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define _USE_FORTIFY_LEVEL 2
#define ST(i) cpu->fp[(cpu->top + i) % 8]
#define __INT_FAST16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define __deprecated __attribute__((__deprecated__))
#define INT_LEAST64_MIN INT64_MIN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define _SUSECONDS_T 
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define INT32_C(v) (v)
#define __FLT_MAX_10_EXP__ 38
#define FP_ZERO 3
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define _BSD_PTRDIFF_T_ 
#define _OFF_T 
#define __kpi_deprecated(_msg) 
#define fpclassify(x) ( sizeof(x) == sizeof(float) ? __fpclassifyf((float)(x)) : sizeof(x) == sizeof(double) ? __fpclassifyd((double)(x)) : __fpclassifyl((long double)(x)))
#define __UINT_FAST16_TYPE__ short unsigned int
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define __no_instrument_msan 
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __SEG_FS 1
#define _PID_T 
#define __INT_LEAST16_MAX__ 0x7fff
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _FD_SET 
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __INT_LEAST64_TYPE__ long long int
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define __PTHREAD_SIZE__ 8176
#define _PTHREAD_COND_T 
#define _MACHTYPES_H_ 
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(v) (v ## UL)
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define __DARWIN_LITTLE_ENDIAN 1234
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define __SWIFT_UNAVAILABLE 
#define __TVOS_UNAVAILABLE 
#define __LITTLE_ENDIAN__ 1
#define isfinite(x) ( sizeof(x) == sizeof(float) ? __inline_isfinitef((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isfinited((double)(x)) : __inline_isfinitel((long double)(x)))
#define isinf(x) ( sizeof(x) == sizeof(float) ? __inline_isinff((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isinfd((double)(x)) : __inline_isinfl((long double)(x)))
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define noreturn _Noreturn
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define __FLT32X_DIG__ 15
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define __WORDSIZE 64
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define signbit(x) ( sizeof(x) == sizeof(float) ? __inline_signbitf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_signbitd((double)(x)) : __inline_signbitl((long double)(x)))
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define false 0
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define _GCC_MAX_ALIGN_T 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define __API_UNAVAILABLE_END 
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define _NLINK_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define bitfield unsigned int
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define _WCHAR_T_DECLARED 
#define __UINT_FAST64_TYPE__ long long unsigned int
#define PLOSS 6
#define M_LN10 2.30258509299404568401799145468436421
#define UINT_FAST8_MAX UINT8_MAX
#define __INT_MAX__ 0x7fffffff
#define _CADDR_T 
#define _UINT16_T 
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define _U_INT 
#define M_SQRT2 1.41421356237309504880168872420969808
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define __FLT_MAX_EXP__ 128
#define _PTHREAD_MUTEXATTR_T 
#define MATH_ERREXCEPT 2
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define SF_FLAG (1 << 7)
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX UINT64_MAX
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define __LDBL_MIN_EXP__ (-16381)
#define zero_init(type) ((type[1]){}[0])
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define __amd64__ 1
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define __WINT_WIDTH__ 32
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define __FLT64X_IS_IEC_60559__ 2
#define fpu_ucom fpu_com
#define __LDBL_MAX_10_EXP__ 4932
#define _PTHREAD_RWLOCK_T 
#define __ATOMIC_RELAXED 0
#define __signed signed
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define ZF_RES (1 << 1)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _PTHREAD_ATTR_T 
#define _LP64 1
#define __UINT8_C(c) c
#define NAN __builtin_nanf("0x7fc00000")
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define __wchar_t__ 
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define BAD_PAGE 0x10000
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define MAC_OS_X_VERSION_10_10 101000
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define isgreaterequal(x,y) __builtin_isgreaterequal((x),(y))
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define __MATH__ 
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define PAGE_BITS 12
#define __INT_FAST8_TYPE__ signed char
#define __DARWIN_FD_SETSIZE 1024
#define __TVOS_11_4 110400
#define FP_QNAN FP_NAN
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define PF_RES (1 << 0)
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define __INT_WCHAR_T_H 
#define __FLT64_HAS_DENORM__ 1
#define is_gcc(version) (__GNUC__ >= version)
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define __TYPES_H_ 
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define use(...) __use(0, ##__VA_ARGS__)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define M_LOG10E 0.434294481903251827651128918916605082
#define __INTMAX_WIDTH__ 64
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define _STRING_H_ 
#define has_attribute __has_attribute
#define __UINT32_C(c) c ## U
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __IOS_AVAILABLE(_vers) 
#define INTMAX_MIN (-INTMAX_MAX-1)
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define __TVOS_11_3 110300
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _INO64_T 
#define UNDERFLOW 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define INT_FAST64_MAX INT64_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define M_1_PI 0.318309886183790671537767526745028724
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __SSE2__ 1
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define _QUAD_HIGHWORD 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __strncpy_safe __attribute__((nonstring))
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define INT_FAST64_MIN INT64_MIN
#define PAGE_SIZE (1 << PAGE_BITS)
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define __DARWIN_OS_INLINE static inline
#define _T_PTRDIFF_ 
#define __INT16_C(c) c
#define _U_SHORT 
#define __STDC__ 1
#define EMU_FPU_H 
#define static_assert _Static_assert
#define __PTRDIFF_TYPE__ long int
#define AF_FLAG (1 << 4)
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define DOMAIN 1
#define __WATCHOS_AVAILABLE(_vers) 
#define M_LN2 0.693147180559945309417232121458176568
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define _PTHREAD_KEY_T 
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define _SSIZE_T 
#define __TVOS_10_0_1 100001
#define __WCHAR_T__ 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define __SIZEOF_LONG_LONG__ 8
#define _GCC_PTRDIFF_T 
#define __enum_closed 
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _PTHREAD_ONCE_T 
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __enum_open 
#define PTRDIFF_MAX INTMAX_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define rdtsc() ({ uint32_t low, high; __asm__ volatile("rdtsc" : "=a" (high), "=d" (low)); ((uint64_t) high) << 32 | low; })
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define glue3(a,b,c) glue(a, glue(b, c))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define _U_INT16_T 
#define __P(protos) protos
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
