#define mu_assert_false(actual,message) do { bool act__ = (actual); if ((act__)) { char _meqstr[MU_BUF_SIZE]; snprintf (_meqstr, MU_BUF_SIZE, "%s: expected false, got true", (message)); mu_assert (_meqstr, false); } } while (0)
#define __DBL_MIN_EXP__ (-1021)
#define __UINT_LEAST16_MAX__ 0xffff
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define __INTMAX_C(c) c ## L
#define __CHAR_BIT__ 8
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define __WINT_MAX__ 0x7fffffff
#define __FLT32_MIN_EXP__ (-125)
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __WCHAR_MAX__ 0x7fffffff
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT_EVAL_METHOD__ 0
#define __FLT64_DECIMAL_DIG__ 17
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define TBLUE "\x1b[34m"
#define mu_sysfail(message) do { perror(message); mu_fail(message); } while(0)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define __DBL_MIN_10_EXP__ (-307)
#define __FINITE_MATH_ONLY__ 0
#define TRESET "\x1b[0m"
#define __FLT32X_MAX_EXP__ 1024
#define MU_TEST_BROKEN 1
#define __FLT32_HAS_DENORM__ 1
#define __UINT_FAST8_MAX__ 0xff
#define __FLT32_MAX_10_EXP__ 38
#define mu_assert_true(actual,message) do { bool act__ = (actual); if (!(act__)) { char _meqstr[MU_BUF_SIZE]; snprintf (_meqstr, MU_BUF_SIZE, "%s: expected true, got false", (message)); mu_assert (_meqstr, false); } } while (0)
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __FLT64X_MAX_10_EXP__ 4932
#define __LDBL_IS_IEC_60559__ 2
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define mu_assert_memeq(actual,expected,len,message) do { char _meqstr[MU_BUF_SIZE]; size_t _meqstr_len; const ut8 *act__ = (actual); const ut8 *exp__ = (expected); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected ", message); _meqstr_len = strlen (_meqstr); snprint_mem (_meqstr + _meqstr_len, MU_BUF_SIZE - _meqstr_len, (exp__), (len)); _meqstr_len = strlen (_meqstr); snprintf (_meqstr + _meqstr_len, MU_BUF_SIZE - _meqstr_len, ", got "); _meqstr_len = strlen (_meqstr); snprint_mem (_meqstr + _meqstr_len, MU_BUF_SIZE - _meqstr_len, (act__), (len)); mu_assert(_meqstr, memcmp((exp__), (act__), (len)) == 0); } while(0)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __UINT32_MAX__ 0xffffffffU
#define __FLT128_MIN_EXP__ (-16381)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define __INT_LEAST16_WIDTH__ 16
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define __INT64_C(c) c ## LL
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __FLT32X_MANT_DIG__ 53
#define mu_assert_streq_free(actual,expected,message) do { char *act2__ = (actual); mu_assert_streq (act2__, (expected), (message)); free (act2__); } while (0)
#define TYELLOW "\x1b[33m"
#define __USER_LABEL_PREFIX__ _
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __STDC_HOSTED__ 1
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __SHRT_WIDTH__ 16
#define __FLT32_IS_IEC_60559__ 2
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __strong 
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define mu_assert_nullable_streq(actual,expected,message) do { char _meqstr[MU_BUF_SIZE]; const char *act__ = (actual); const char *exp__ = (expected); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected %s, got %s.", (message), (exp__ ? exp__ : "NULL"), (act__ ? act__ : "NULL")); mu_assert(_meqstr, ((act__) == NULL && (exp__) == NULL) || ((act__) != NULL && (exp__) != NULL && strcmp((exp__), (act__)) == 0)); } while(0)
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define MU_ERR 0
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __APPLE__ 1
#define __UINT16_C(c) c
#define __DECIMAL_DIG__ 21
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __FLT128_IS_IEC_60559__ 2
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64X_MANT_DIG__ 64
#define __DYNAMIC__ 1
#define __GNUC__ 11
#define __MMX__ 1
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __BIGGEST_ALIGNMENT__ 16
#define __FLT64_MAX_10_EXP__ 308
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __INT_FAST32_MAX__ 0x7fffffff
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_FLOAT__ 4
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define __MMX_WITH_SSE__ 1
#define __LDBL_HAS_DENORM__ 1
#define __FLT128_HAS_INFINITY__ 1
#define __weak 
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __amd64 1
#define __tune_core2__ 1
#define __ATOMIC_HLE_ACQUIRE 65536
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __FLT64X_MIN_EXP__ (-16381)
#define __SIZEOF_WINT_T__ 4
#define mu_fail(message) do { mu_perror(message); if (mu_test_status != MU_TEST_BROKEN) return MU_ERR; } while(0)
#define __LONG_LONG_WIDTH__ 64
#define __FLT32_MAX_EXP__ 128
#define __GXX_ABI_VERSION 1016
#define TRED "\x1b[31m"
#define __FLT_MIN_EXP__ (-125)
#define __INT16_MAX__ 0x7fff
#define mu_assert_streq(actual,expected,message) do { char _meqstr[MU_BUF_SIZE]; const char *act__ = (actual); const char *exp__ = (expected); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected %s, got %s.", (message), (exp__), (act__)); mu_assert(_meqstr, strcmp((exp__), (act__)) == 0); } while(0)
#define __x86_64 1
#define __INT_FAST64_TYPE__ long long int
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __LP64__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define mu_cleanup_sysfail(label,message) do { mu_psyserror(message); retval = MU_ERR; goto label; } while(0)
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __DBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define __DEC_EVAL_METHOD__ 2
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define __VERSION__ "11.2.0"
#define __UINT64_C(c) c ## ULL
#define mu_assert_notnull(actual,message) do { char _meqstr[MU_BUF_SIZE]; const void *act__ = (actual); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected to not be NULL but it was.", (message)); mu_assert(_meqstr, (act__) != NULL); } while(0)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __FLT128_MAX_EXP__ 16384
#define __FLT32_MANT_DIG__ 24
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define mu_assert_neq(actual,expected,message) do { char _meqstr[MU_BUF_SIZE]; ut64 act__ = (ut64)(actual); ut64 exp__ = (ut64)(expected); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected not %" PFMT64d ", got %" PFMT64d ".", (message), (exp__), (act__)); mu_assert(_meqstr, (exp__) != (act__)); } while(0)
#define __FLT128_HAS_DENORM__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT128_DIG__ 33
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define mu_assert_ptrneq(actual,expected,message) do { char _meqstr[MU_BUF_SIZE]; const void *act__ = (actual); const void *exp__ = (expected); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected not %p, got %p.", (message), (exp__), (act__)); mu_assert (_meqstr, (exp__) != (act__)); } while (0)
#define __INT_FAST32_TYPE__ int
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define MU_TEST_UNBROKEN 0
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __FLT64X_DIG__ 18
#define mu_psyserror(message) do { perror(message); mu_perror(message); } while (0)
#define __INT8_TYPE__ signed char
#define mu_end do { printf(TGREEN "OK\n" TRESET); return MU_PASSED; } while(0)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __UINT32_TYPE__ unsigned int
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __UINTMAX_C(c) c ## UL
#define mu_assert_ptreq(actual,expected,message) do { char _meqstr[MU_BUF_SIZE]; const void *act__ = (actual); const void *exp__ = (expected); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected %p, got %p.", (message), (exp__), (act__)); mu_assert (_meqstr, (exp__) == (act__)); } while (0)
#define __SSE_MATH__ 1
#define __k8 1
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __SIZEOF_PTRDIFF_T__ 8
#define mu_run_test(test,...) mu_run_test_named (test, #test, __VA_ARGS__)
#define mu_cleanup_end do { if(retval == MU_PASSED) { mu_end; } else { return retval; } } while(0)
#define __LDBL_DIG__ 18
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define mu_assert_eq(actual,expected,message) do { ut64 act__ = (ut64)(actual); ut64 exp__ = (ut64)(expected); if ((exp__) != (act__)) { char _meqstr[MU_BUF_SIZE]; snprintf (_meqstr, MU_BUF_SIZE, "%s: expected %" PFMT64d ", got %" PFMT64d ".", (message), (ut64)(exp__), (ut64)(act__)); mu_assert(_meqstr, false); } } while(0)
#define __INT_FAST16_MAX__ 0x7fff
#define mu_run_test_named(test,name,...) do { int result; printf(TBOLD "%s" TRESET " ", name); result = test(__VA_ARGS__); tests_run++; tests_passed += result; } while (0)
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __FLT_HAS_QUIET_NAN__ 1
#define __FLT_MAX_10_EXP__ 38
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __FLT64X_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define TMAGENTA "\x1b[35m"
#define __UINT_FAST16_TYPE__ short unsigned int
#define __INT_FAST32_WIDTH__ 32
#define __CHAR16_TYPE__ short unsigned int
#define mu_cleanup_fail(label,message) do { mu_perror(message); retval = MU_ERR; goto label; } while(0)
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZE_WIDTH__ 64
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT_LEAST64_TYPE__ long long int
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define __INT_FAST8_MAX__ 0x7f
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define __FLT64_HAS_QUIET_NAN__ 1
#define __LITTLE_ENDIAN__ 1
#define MU_PASSED 1
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32X_DIG__ 15
#define __PTRDIFF_WIDTH__ 64
#define __LDBL_MANT_DIG__ 64
#define __CONSTANT_CFSTRINGS__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define mu_assert_null(actual,message) do { char _meqstr[MU_BUF_SIZE]; const void *act__ = (actual); snprintf (_meqstr, MU_BUF_SIZE, "%s: expected to be NULL but it wasn't.", (message)); mu_assert(_meqstr, (act__) == NULL); } while(0)
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INT_MAX__ 0x7fffffff
#define mu_assert_eq_fmt(actual,expected,message,fmt) do { ut64 act__ = (ut64)(actual); ut64 exp__ = (ut64)(expected); if ((exp__) != (act__)) { char _meqstr[MU_BUF_SIZE]; snprintf (_meqstr, MU_BUF_SIZE, "%s: expected "fmt", got "fmt".", (message), (exp__), (act__)); mu_assert(_meqstr, false); } } while(0)
#define __INT64_TYPE__ long long int
#define __FLT_MAX_EXP__ 128
#define mu_assert(message,test) do { if (!(test)) { mu_fail(message); mu_test_status = MU_TEST_UNBROKEN; } } while (0)
#define MU_BUF_SIZE 5120
#define __ORDER_BIG_ENDIAN__ 4321
#define __DBL_MANT_DIG__ 53
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define __LDBL_MIN_EXP__ (-16381)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __MACH__ 1
#define __amd64__ 1
#define __WINT_WIDTH__ 32
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __SIZEOF_INT128__ 16
#define __FLT64X_IS_IEC_60559__ 2
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define mu_ignore do { printf(TYELLOW "IGN\n" TRESET); return MU_PASSED; } while(0)
#define _LP64 1
#define __UINT8_C(c) c
#define __FLT64_MAX_EXP__ 1024
#define __INT_LEAST32_TYPE__ int
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __GNUC_PATCHLEVEL__ 0
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __INT_FAST8_TYPE__ signed char
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __GNUC_STDC_INLINE__ 1
#define __FLT64_HAS_DENORM__ 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define __FXSR__ 1
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define TERMCOLOR_H 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define TBOLD "\x1b[1m"
#define __INTMAX_WIDTH__ 64
#define mu_perror(message) do { if (mu_test_status != MU_TEST_BROKEN) { printf(TBOLD TRED "ERR\n[XX] Fail at line %d: " TRESET "%s\n\n", __LINE__, message); } else { printf(TBOLD TYELLOW "Broken at line %d: " TRESET "%s\n\n", __LINE__, message); } } while (0)
#define __UINT32_C(c) c ## U
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __SSE2__ 1
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define __INTMAX_TYPE__ long int
#define TCYAN "\x1b[36m"
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 2
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __DBL_MAX_10_EXP__ 308
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define __INT16_C(c) c
#define __STDC__ 1
#define __PTRDIFF_TYPE__ long int
#define __ATOMIC_SEQ_CST 5
#define TGREEN "\x1b[32m"
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define __LDBL_MIN_10_EXP__ (-4931)
#define __SIZEOF_LONG_LONG__ 8
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
