#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define __INTMAX_C(c) c ## L
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
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
#define __WINT_MAX__ 0x7fffffff
#define __FLT32_MIN_EXP__ (-125)
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __WCHAR_MAX__ 0x7fffffff
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define __GCC_IEC_559 2
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define __IOS_PROHIBITED 
#define __FLT_EVAL_METHOD__ 0
#define putc_unlocked(x,fp) __sputc(x, fp)
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define __disable_tail_calls 
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _CTYPE_SWM 0xe0000000L
#define _CTYPE_SWS 30
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __DARWIN_SUF_1050 "$1050"
#define MAC_OS_X_VERSION_10_14_4 101404
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define __DBL_MIN_10_EXP__ (-307)
#define _CTYPE_H_ 
#define __FINITE_MATH_ONLY__ 0
#define __cold __attribute__((__cold__))
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32_HAS_DENORM__ 1
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __UINT_FAST8_MAX__ 0xff
#define __WATCHOS_PROHIBITED 
#define __FLT32_MAX_10_EXP__ 38
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define _ERRNO_T 
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define __SNPT 0x0800
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __result_use_check __attribute__((__warn_unused_result__))
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define NULL __DARWIN_NULL
#define __UINT32_MAX__ 0xffffffffU
#define __PTHREAD_MUTEX_SIZE__ 56
#define __DARWIN_UNIX03 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __FLT128_MIN_EXP__ (-16381)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define __FLT128_MIN_10_EXP__ (-4931)
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
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
#define _FORTIFY_SOURCE 2
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
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define __USER_LABEL_PREFIX__ _
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define __STDC_HOSTED__ 1
#define _STDIO_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_4 101204
#define TMP_MAX 308915776
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
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
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __strong 
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define __MAC_10_3 1030
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
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
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define __DECIMAL_DIG__ 21
#define __IPHONE_4_1 40100
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define _CTYPE_G 0x00000800L
#define __FLT128_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define __FLT64_MANT_DIG__ 53
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __SPI_AVAILABLE(...) 
#define __TVOS_14_0 140000
#define __FLT64X_MANT_DIG__ 64
#define L_tmpnam 1024
#define __DYNAMIC__ 1
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
#define __MMX__ 1
#define L_ctermid 1024
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define fileno_unlocked(p) __sfileno(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SEEK_CUR 1
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
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __INT_FAST32_MAX__ 0x7fffffff
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define _RUNE_MAGIC_A "RuneMagA"
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define __DARWIN_SUF_NON_CANCELABLE 
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define __FLT128_HAS_INFINITY__ 1
#define __weak 
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __kpi_unavailable 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define __amd64 1
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __PTHREAD_ONCE_SIZE__ 8
#define __AVAILABILITY__ 
#define __tune_core2__ 1
#define __ATOMIC_HLE_ACQUIRE 65536
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _WCHAR_T 
#define __MAC_10_14_1 101401
#define __SPI_DEPRECATED(...) 
#define __dead 
#define __WATCHOS_5_0 50000
#define __FLT64X_MIN_EXP__ (-16381)
#define __SIZEOF_WINT_T__ 4
#define __MAC_10_14_6 101406
#define __WATCHOS_5_2 50200
#define _SECURE__COMMON_H_ 
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __FLT32_MAX_EXP__ 128
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define __SOPT 0x0400
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define stdout __stdoutp
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define _BSD_I386__TYPES_H_ 
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define __x86_64 1
#define __SALC 0x4000
#define __PTHREAD_CONDATTR_SIZE__ 8
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __INT_FAST64_TYPE__ long long int
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __SMBF 0x0080
#define __OSX_AVAILABLE(_vers) 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __LP64__ 1
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __DARWIN_CTYPE_inline __header_inline
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __nonnull 
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define _CACHED_RUNES (1 <<8 )
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
#define __WATCHOS_4_1 40100
#define __FLT64_MIN_10_EXP__ (-307)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __FLT64X_DECIMAL_DIG__ 21
#define sdb_hash_c_netbsd_x86_32(x,y) gperf_netbsd_x86_32_hash(x)
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define __DBL_HAS_DENORM__ 1
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
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
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
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
#define __used __attribute__((__used__))
#define _SECURE__STRINGS_H_ 
#define _SECURE__STRING_H_ 
#define _SYS__TYPES_H_ 
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __SSTR 0x0200
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define RENAME_SECLUDE 0x00000001
#define __SLBF 0x0001
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define clearerr_unlocked(p) __sclearerr(p)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define __SRD 0x0004
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __IOS_UNAVAILABLE 
#define _U_INT8_T 
#define __FLT128_HAS_DENORM__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define _Null_unspecified 
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define __DARWIN_NO_LONG_LONG 0
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __SAPP 0x0100
#define __MAC_10_15_4 101504
#define _INT64_T 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define __CTYPE_H_ 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define __INT8_TYPE__ signed char
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _toupper(c) __toupper(c)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __SOFF 0x1000
#define _RUNE_T 
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __UINTMAX_C(c) c ## UL
#define __SSE_MATH__ 1
#define _U_INT32_T 
#define __k8 1
#define BUFSIZ 1024
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define __WATCHOS_3_1_1 30101
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __SIZEOF_PTRDIFF_T__ 8
#define _OFF_T 
#define __IPHONE_4_0 40000
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define __TVOS_AVAILABLE(_vers) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_64_BIT_INO_T 1
#define __TVOS_14_2 140200
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __LDBL_DIG__ 18
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define _USE_FORTIFY_LEVEL 2
#define __INT_FAST16_MAX__ 0x7fff
#define __PTHREAD_SIZE__ 8176
#define __deprecated __attribute__((__deprecated__))
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define __FLT_HAS_QUIET_NAN__ 1
#define __FLT_MAX_10_EXP__ 38
#define __SEOF 0x0020
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
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __SERR 0x0040
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __INT_LEAST64_TYPE__ long long int
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define _MACHTYPES_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define _SYS_STDIO_H_ 
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define __swift_compiler_version_at_least(...) 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define __LITTLE_ENDIAN__ 1
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define __FLT32X_DIG__ 15
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __GNUC_VA_LIST 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define __API_UNAVAILABLE_END 
#define __STDIO_H_ 
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define _RUNETYPE_H_ 
#define __INT_MAX__ 0x7fffffff
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define __FLT_MAX_EXP__ 128
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _CTYPE_C 0x00000200L
#define _CTYPE_D 0x00000400L
#define _CTYPE_I 0x00080000L
#define _CTYPE_L 0x00001000L
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define _CTYPE_R 0x00040000L
#define _CTYPE_S 0x00004000L
#define _CTYPE_T 0x00100000L
#define _CTYPE_U 0x00008000L
#define _CTYPE_X 0x00010000L
#define __LDBL_MIN_EXP__ (-16381)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define __amd64__ 1
#define __WINT_WIDTH__ 32
#define EOF (-1)
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define __SIZEOF_INT128__ 16
#define __FLT64X_IS_IEC_60559__ 2
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _tolower(c) __tolower(c)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _LP64 1
#define __UINT8_C(c) c
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define MAC_OS_X_VERSION_10_10 101000
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define __TVOS_11_4 110400
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/var/tmp/"
#define __FLT64_HAS_DENORM__ 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
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
#define _CRMASK (~(_CACHED_RUNES - 1))
#define FOPEN_MAX 20
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define stderr __stderrp
#define __INTMAX_WIDTH__ 64
#define _STRING_H_ 
#define __UINT32_C(c) c ## U
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __IOS_AVAILABLE(_vers) 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __SSE2__ 1
#define __API_AVAILABLE_BEGIN(...) 
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define __STDC__ 1
#define __PTRDIFF_TYPE__ long int
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define stdin __stdinp
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define __WATCHOS_AVAILABLE(_vers) 
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define _SSIZE_T 
#define __SNBF 0x0002
#define __TVOS_10_0_1 100001
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define __enum_closed 
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __enum_open 
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
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
#define __ATOMIC_RELEASE 3
