# 0 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
# 0 "<built-in>"
#define __STDC__ 1
# 0 "<built-in>"
#define __STDC_VERSION__ 201710L
# 0 "<built-in>"
#define __STDC_UTF_16__ 1
# 0 "<built-in>"
#define __STDC_UTF_32__ 1
# 0 "<built-in>"
#define __STDC_HOSTED__ 1
# 0 "<built-in>"
#define __GNUC__ 11
# 0 "<built-in>"
#define __GNUC_MINOR__ 2
# 0 "<built-in>"
#define __GNUC_PATCHLEVEL__ 0
# 0 "<built-in>"
#define __VERSION__ "11.2.0"
# 0 "<built-in>"
#define __ATOMIC_RELAXED 0
# 0 "<built-in>"
#define __ATOMIC_SEQ_CST 5
# 0 "<built-in>"
#define __ATOMIC_ACQUIRE 2
# 0 "<built-in>"
#define __ATOMIC_RELEASE 3
# 0 "<built-in>"
#define __ATOMIC_ACQ_REL 4
# 0 "<built-in>"
#define __ATOMIC_CONSUME 1
# 0 "<built-in>"
#define __pic__ 2
# 0 "<built-in>"
#define __PIC__ 2
# 0 "<built-in>"
#define __FINITE_MATH_ONLY__ 0
# 0 "<built-in>"
#define _LP64 1
# 0 "<built-in>"
#define __LP64__ 1
# 0 "<built-in>"
#define __SIZEOF_INT__ 4
# 0 "<built-in>"
#define __SIZEOF_LONG__ 8
# 0 "<built-in>"
#define __SIZEOF_LONG_LONG__ 8
# 0 "<built-in>"
#define __SIZEOF_SHORT__ 2
# 0 "<built-in>"
#define __SIZEOF_FLOAT__ 4
# 0 "<built-in>"
#define __SIZEOF_DOUBLE__ 8
# 0 "<built-in>"
#define __SIZEOF_LONG_DOUBLE__ 16
# 0 "<built-in>"
#define __SIZEOF_SIZE_T__ 8
# 0 "<built-in>"
#define __CHAR_BIT__ 8
# 0 "<built-in>"
#define __BIGGEST_ALIGNMENT__ 16
# 0 "<built-in>"
#define __ORDER_LITTLE_ENDIAN__ 1234
# 0 "<built-in>"
#define __ORDER_BIG_ENDIAN__ 4321
# 0 "<built-in>"
#define __ORDER_PDP_ENDIAN__ 3412
# 0 "<built-in>"
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
# 0 "<built-in>"
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
# 0 "<built-in>"
#define __SIZEOF_POINTER__ 8
# 0 "<built-in>"
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
# 0 "<built-in>"
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
# 0 "<built-in>"
#define __SIZE_TYPE__ long unsigned int
# 0 "<built-in>"
#define __PTRDIFF_TYPE__ long int
# 0 "<built-in>"
#define __WCHAR_TYPE__ int
# 0 "<built-in>"
#define __WINT_TYPE__ int
# 0 "<built-in>"
#define __INTMAX_TYPE__ long int
# 0 "<built-in>"
#define __UINTMAX_TYPE__ long unsigned int
# 0 "<built-in>"
#define __CHAR16_TYPE__ short unsigned int
# 0 "<built-in>"
#define __CHAR32_TYPE__ unsigned int
# 0 "<built-in>"
#define __SIG_ATOMIC_TYPE__ int
# 0 "<built-in>"
#define __INT8_TYPE__ signed char
# 0 "<built-in>"
#define __INT16_TYPE__ short int
# 0 "<built-in>"
#define __INT32_TYPE__ int
# 0 "<built-in>"
#define __INT64_TYPE__ long long int
# 0 "<built-in>"
#define __UINT8_TYPE__ unsigned char
# 0 "<built-in>"
#define __UINT16_TYPE__ short unsigned int
# 0 "<built-in>"
#define __UINT32_TYPE__ unsigned int
# 0 "<built-in>"
#define __UINT64_TYPE__ long long unsigned int
# 0 "<built-in>"
#define __INT_LEAST8_TYPE__ signed char
# 0 "<built-in>"
#define __INT_LEAST16_TYPE__ short int
# 0 "<built-in>"
#define __INT_LEAST32_TYPE__ int
# 0 "<built-in>"
#define __INT_LEAST64_TYPE__ long long int
# 0 "<built-in>"
#define __UINT_LEAST8_TYPE__ unsigned char
# 0 "<built-in>"
#define __UINT_LEAST16_TYPE__ short unsigned int
# 0 "<built-in>"
#define __UINT_LEAST32_TYPE__ unsigned int
# 0 "<built-in>"
#define __UINT_LEAST64_TYPE__ long long unsigned int
# 0 "<built-in>"
#define __INT_FAST8_TYPE__ signed char
# 0 "<built-in>"
#define __INT_FAST16_TYPE__ short int
# 0 "<built-in>"
#define __INT_FAST32_TYPE__ int
# 0 "<built-in>"
#define __INT_FAST64_TYPE__ long long int
# 0 "<built-in>"
#define __UINT_FAST8_TYPE__ unsigned char
# 0 "<built-in>"
#define __UINT_FAST16_TYPE__ short unsigned int
# 0 "<built-in>"
#define __UINT_FAST32_TYPE__ unsigned int
# 0 "<built-in>"
#define __UINT_FAST64_TYPE__ long long unsigned int
# 0 "<built-in>"
#define __INTPTR_TYPE__ long int
# 0 "<built-in>"
#define __UINTPTR_TYPE__ long unsigned int
# 0 "<built-in>"
#define __GXX_ABI_VERSION 1016
# 0 "<built-in>"
#define __SCHAR_MAX__ 0x7f
# 0 "<built-in>"
#define __SHRT_MAX__ 0x7fff
# 0 "<built-in>"
#define __INT_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __LONG_MAX__ 0x7fffffffffffffffL
# 0 "<built-in>"
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
# 0 "<built-in>"
#define __WCHAR_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
# 0 "<built-in>"
#define __WINT_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
# 0 "<built-in>"
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
# 0 "<built-in>"
#define __SIZE_MAX__ 0xffffffffffffffffUL
# 0 "<built-in>"
#define __SCHAR_WIDTH__ 8
# 0 "<built-in>"
#define __SHRT_WIDTH__ 16
# 0 "<built-in>"
#define __INT_WIDTH__ 32
# 0 "<built-in>"
#define __LONG_WIDTH__ 64
# 0 "<built-in>"
#define __LONG_LONG_WIDTH__ 64
# 0 "<built-in>"
#define __WCHAR_WIDTH__ 32
# 0 "<built-in>"
#define __WINT_WIDTH__ 32
# 0 "<built-in>"
#define __PTRDIFF_WIDTH__ 64
# 0 "<built-in>"
#define __SIZE_WIDTH__ 64
# 0 "<built-in>"
#define __INTMAX_MAX__ 0x7fffffffffffffffL
# 0 "<built-in>"
#define __INTMAX_C(c) c ## L
# 0 "<built-in>"
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
# 0 "<built-in>"
#define __UINTMAX_C(c) c ## UL
# 0 "<built-in>"
#define __INTMAX_WIDTH__ 64
# 0 "<built-in>"
#define __SIG_ATOMIC_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
# 0 "<built-in>"
#define __SIG_ATOMIC_WIDTH__ 32
# 0 "<built-in>"
#define __INT8_MAX__ 0x7f
# 0 "<built-in>"
#define __INT16_MAX__ 0x7fff
# 0 "<built-in>"
#define __INT32_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __INT64_MAX__ 0x7fffffffffffffffLL
# 0 "<built-in>"
#define __UINT8_MAX__ 0xff
# 0 "<built-in>"
#define __UINT16_MAX__ 0xffff
# 0 "<built-in>"
#define __UINT32_MAX__ 0xffffffffU
# 0 "<built-in>"
#define __UINT64_MAX__ 0xffffffffffffffffULL
# 0 "<built-in>"
#define __INT_LEAST8_MAX__ 0x7f
# 0 "<built-in>"
#define __INT8_C(c) c
# 0 "<built-in>"
#define __INT_LEAST8_WIDTH__ 8
# 0 "<built-in>"
#define __INT_LEAST16_MAX__ 0x7fff
# 0 "<built-in>"
#define __INT16_C(c) c
# 0 "<built-in>"
#define __INT_LEAST16_WIDTH__ 16
# 0 "<built-in>"
#define __INT_LEAST32_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __INT32_C(c) c
# 0 "<built-in>"
#define __INT_LEAST32_WIDTH__ 32
# 0 "<built-in>"
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
# 0 "<built-in>"
#define __INT64_C(c) c ## LL
# 0 "<built-in>"
#define __INT_LEAST64_WIDTH__ 64
# 0 "<built-in>"
#define __UINT_LEAST8_MAX__ 0xff
# 0 "<built-in>"
#define __UINT8_C(c) c
# 0 "<built-in>"
#define __UINT_LEAST16_MAX__ 0xffff
# 0 "<built-in>"
#define __UINT16_C(c) c
# 0 "<built-in>"
#define __UINT_LEAST32_MAX__ 0xffffffffU
# 0 "<built-in>"
#define __UINT32_C(c) c ## U
# 0 "<built-in>"
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
# 0 "<built-in>"
#define __UINT64_C(c) c ## ULL
# 0 "<built-in>"
#define __INT_FAST8_MAX__ 0x7f
# 0 "<built-in>"
#define __INT_FAST8_WIDTH__ 8
# 0 "<built-in>"
#define __INT_FAST16_MAX__ 0x7fff
# 0 "<built-in>"
#define __INT_FAST16_WIDTH__ 16
# 0 "<built-in>"
#define __INT_FAST32_MAX__ 0x7fffffff
# 0 "<built-in>"
#define __INT_FAST32_WIDTH__ 32
# 0 "<built-in>"
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
# 0 "<built-in>"
#define __INT_FAST64_WIDTH__ 64
# 0 "<built-in>"
#define __UINT_FAST8_MAX__ 0xff
# 0 "<built-in>"
#define __UINT_FAST16_MAX__ 0xffff
# 0 "<built-in>"
#define __UINT_FAST32_MAX__ 0xffffffffU
# 0 "<built-in>"
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
# 0 "<built-in>"
#define __INTPTR_MAX__ 0x7fffffffffffffffL
# 0 "<built-in>"
#define __INTPTR_WIDTH__ 64
# 0 "<built-in>"
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
# 0 "<built-in>"
#define __GCC_IEC_559 2
# 0 "<built-in>"
#define __GCC_IEC_559_COMPLEX 2
# 0 "<built-in>"
#define __FLT_EVAL_METHOD__ 0
# 0 "<built-in>"
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
# 0 "<built-in>"
#define __DEC_EVAL_METHOD__ 2
# 0 "<built-in>"
#define __FLT_RADIX__ 2
# 0 "<built-in>"
#define __FLT_MANT_DIG__ 24
# 0 "<built-in>"
#define __FLT_DIG__ 6
# 0 "<built-in>"
#define __FLT_MIN_EXP__ (-125)
# 0 "<built-in>"
#define __FLT_MIN_10_EXP__ (-37)
# 0 "<built-in>"
#define __FLT_MAX_EXP__ 128
# 0 "<built-in>"
#define __FLT_MAX_10_EXP__ 38
# 0 "<built-in>"
#define __FLT_DECIMAL_DIG__ 9
# 0 "<built-in>"
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
# 0 "<built-in>"
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
# 0 "<built-in>"
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
# 0 "<built-in>"
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
# 0 "<built-in>"
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
# 0 "<built-in>"
#define __FLT_HAS_DENORM__ 1
# 0 "<built-in>"
#define __FLT_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __FLT_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __FLT_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __DBL_MANT_DIG__ 53
# 0 "<built-in>"
#define __DBL_DIG__ 15
# 0 "<built-in>"
#define __DBL_MIN_EXP__ (-1021)
# 0 "<built-in>"
#define __DBL_MIN_10_EXP__ (-307)
# 0 "<built-in>"
#define __DBL_MAX_EXP__ 1024
# 0 "<built-in>"
#define __DBL_MAX_10_EXP__ 308
# 0 "<built-in>"
#define __DBL_DECIMAL_DIG__ 17
# 0 "<built-in>"
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
# 0 "<built-in>"
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
# 0 "<built-in>"
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
# 0 "<built-in>"
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
# 0 "<built-in>"
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
# 0 "<built-in>"
#define __DBL_HAS_DENORM__ 1
# 0 "<built-in>"
#define __DBL_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __DBL_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __DBL_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __LDBL_MANT_DIG__ 64
# 0 "<built-in>"
#define __LDBL_DIG__ 18
# 0 "<built-in>"
#define __LDBL_MIN_EXP__ (-16381)
# 0 "<built-in>"
#define __LDBL_MIN_10_EXP__ (-4931)
# 0 "<built-in>"
#define __LDBL_MAX_EXP__ 16384
# 0 "<built-in>"
#define __LDBL_MAX_10_EXP__ 4932
# 0 "<built-in>"
#define __DECIMAL_DIG__ 21
# 0 "<built-in>"
#define __LDBL_DECIMAL_DIG__ 21
# 0 "<built-in>"
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
# 0 "<built-in>"
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
# 0 "<built-in>"
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
# 0 "<built-in>"
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
# 0 "<built-in>"
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
# 0 "<built-in>"
#define __LDBL_HAS_DENORM__ 1
# 0 "<built-in>"
#define __LDBL_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __LDBL_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __LDBL_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __FLT32_MANT_DIG__ 24
# 0 "<built-in>"
#define __FLT32_DIG__ 6
# 0 "<built-in>"
#define __FLT32_MIN_EXP__ (-125)
# 0 "<built-in>"
#define __FLT32_MIN_10_EXP__ (-37)
# 0 "<built-in>"
#define __FLT32_MAX_EXP__ 128
# 0 "<built-in>"
#define __FLT32_MAX_10_EXP__ 38
# 0 "<built-in>"
#define __FLT32_DECIMAL_DIG__ 9
# 0 "<built-in>"
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
# 0 "<built-in>"
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
# 0 "<built-in>"
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
# 0 "<built-in>"
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
# 0 "<built-in>"
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
# 0 "<built-in>"
#define __FLT32_HAS_DENORM__ 1
# 0 "<built-in>"
#define __FLT32_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __FLT32_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __FLT32_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __FLT64_MANT_DIG__ 53
# 0 "<built-in>"
#define __FLT64_DIG__ 15
# 0 "<built-in>"
#define __FLT64_MIN_EXP__ (-1021)
# 0 "<built-in>"
#define __FLT64_MIN_10_EXP__ (-307)
# 0 "<built-in>"
#define __FLT64_MAX_EXP__ 1024
# 0 "<built-in>"
#define __FLT64_MAX_10_EXP__ 308
# 0 "<built-in>"
#define __FLT64_DECIMAL_DIG__ 17
# 0 "<built-in>"
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
# 0 "<built-in>"
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
# 0 "<built-in>"
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
# 0 "<built-in>"
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
# 0 "<built-in>"
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
# 0 "<built-in>"
#define __FLT64_HAS_DENORM__ 1
# 0 "<built-in>"
#define __FLT64_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __FLT64_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __FLT64_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __FLT128_MANT_DIG__ 113
# 0 "<built-in>"
#define __FLT128_DIG__ 33
# 0 "<built-in>"
#define __FLT128_MIN_EXP__ (-16381)
# 0 "<built-in>"
#define __FLT128_MIN_10_EXP__ (-4931)
# 0 "<built-in>"
#define __FLT128_MAX_EXP__ 16384
# 0 "<built-in>"
#define __FLT128_MAX_10_EXP__ 4932
# 0 "<built-in>"
#define __FLT128_DECIMAL_DIG__ 36
# 0 "<built-in>"
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
# 0 "<built-in>"
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
# 0 "<built-in>"
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
# 0 "<built-in>"
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
# 0 "<built-in>"
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
# 0 "<built-in>"
#define __FLT128_HAS_DENORM__ 1
# 0 "<built-in>"
#define __FLT128_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __FLT128_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __FLT128_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __FLT32X_MANT_DIG__ 53
# 0 "<built-in>"
#define __FLT32X_DIG__ 15
# 0 "<built-in>"
#define __FLT32X_MIN_EXP__ (-1021)
# 0 "<built-in>"
#define __FLT32X_MIN_10_EXP__ (-307)
# 0 "<built-in>"
#define __FLT32X_MAX_EXP__ 1024
# 0 "<built-in>"
#define __FLT32X_MAX_10_EXP__ 308
# 0 "<built-in>"
#define __FLT32X_DECIMAL_DIG__ 17
# 0 "<built-in>"
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
# 0 "<built-in>"
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
# 0 "<built-in>"
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
# 0 "<built-in>"
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
# 0 "<built-in>"
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
# 0 "<built-in>"
#define __FLT32X_HAS_DENORM__ 1
# 0 "<built-in>"
#define __FLT32X_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __FLT32X_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __FLT32X_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __FLT64X_MANT_DIG__ 64
# 0 "<built-in>"
#define __FLT64X_DIG__ 18
# 0 "<built-in>"
#define __FLT64X_MIN_EXP__ (-16381)
# 0 "<built-in>"
#define __FLT64X_MIN_10_EXP__ (-4931)
# 0 "<built-in>"
#define __FLT64X_MAX_EXP__ 16384
# 0 "<built-in>"
#define __FLT64X_MAX_10_EXP__ 4932
# 0 "<built-in>"
#define __FLT64X_DECIMAL_DIG__ 21
# 0 "<built-in>"
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
# 0 "<built-in>"
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
# 0 "<built-in>"
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
# 0 "<built-in>"
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
# 0 "<built-in>"
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
# 0 "<built-in>"
#define __FLT64X_HAS_DENORM__ 1
# 0 "<built-in>"
#define __FLT64X_HAS_INFINITY__ 1
# 0 "<built-in>"
#define __FLT64X_HAS_QUIET_NAN__ 1
# 0 "<built-in>"
#define __FLT64X_IS_IEC_60559__ 2
# 0 "<built-in>"
#define __REGISTER_PREFIX__ 
# 0 "<built-in>"
#define __USER_LABEL_PREFIX__ _
# 0 "<built-in>"
#define __GNUC_STDC_INLINE__ 1
# 0 "<built-in>"
#define __NO_INLINE__ 1
# 0 "<built-in>"
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
# 0 "<built-in>"
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
# 0 "<built-in>"
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
# 0 "<built-in>"
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
# 0 "<built-in>"
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_INT_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
# 0 "<built-in>"
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
# 0 "<built-in>"
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
# 0 "<built-in>"
#define __HAVE_SPECULATION_SAFE_VALUE 1
# 0 "<built-in>"
#define __PRAGMA_REDEFINE_EXTNAME 1
# 0 "<built-in>"
#define __SIZEOF_INT128__ 16
# 0 "<built-in>"
#define __SIZEOF_WCHAR_T__ 4
# 0 "<built-in>"
#define __SIZEOF_WINT_T__ 4
# 0 "<built-in>"
#define __SIZEOF_PTRDIFF_T__ 8
# 0 "<built-in>"
#define __amd64 1
# 0 "<built-in>"
#define __amd64__ 1
# 0 "<built-in>"
#define __x86_64 1
# 0 "<built-in>"
#define __x86_64__ 1
# 0 "<built-in>"
#define __SIZEOF_FLOAT80__ 16
# 0 "<built-in>"
#define __SIZEOF_FLOAT128__ 16
# 0 "<built-in>"
#define __ATOMIC_HLE_ACQUIRE 65536
# 0 "<built-in>"
#define __ATOMIC_HLE_RELEASE 131072
# 0 "<built-in>"
#define __GCC_ASM_FLAG_OUTPUTS__ 1
# 0 "<built-in>"
#define __k8 1
# 0 "<built-in>"
#define __k8__ 1
# 0 "<built-in>"
#define __tune_core2__ 1
# 0 "<built-in>"
#define __code_model_small__ 1
# 0 "<built-in>"
#define __MMX__ 1
# 0 "<built-in>"
#define __SSE__ 1
# 0 "<built-in>"
#define __SSE2__ 1
# 0 "<built-in>"
#define __SSE3__ 1
# 0 "<built-in>"
#define __FXSR__ 1
# 0 "<built-in>"
#define __SSE_MATH__ 1
# 0 "<built-in>"
#define __SSE2_MATH__ 1
# 0 "<built-in>"
#define __MMX_WITH_SSE__ 1
# 0 "<built-in>"
#define __SEG_FS 1
# 0 "<built-in>"
#define __SEG_GS 1
# 0 "<built-in>"
#define __LITTLE_ENDIAN__ 1
# 0 "<built-in>"
#define __MACH__ 1
# 0 "<built-in>"
#define __APPLE__ 1
# 0 "<built-in>"
#define __APPLE_CC__ 1
# 0 "<built-in>"
#define __CONSTANT_CFSTRINGS__ 1
# 0 "<built-in>"
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
# 0 "<built-in>"
#define __strong 
# 0 "<built-in>"
#define __weak 
# 0 "<command-line>"
#define __DYNAMIC__ 1
# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
#define _STRING_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
#define __TYPES_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
#define _SYS__TYPES_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define _CDEFS_H_ 





#define __BEGIN_DECLS 
#define __END_DECLS 
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __has_feature(x) 0





#define __has_extension(x) 0
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __P(protos) protos
#define __CONCAT(x,y) x ## y
#define __STRING(x) #x

#define __const const
#define __signed signed
#define __volatile volatile
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __dead2 __attribute__((__noreturn__))
#define __pure2 __attribute__((__const__))




#define __unused __attribute__((__unused__))




#define __used __attribute__((__used__))





#define __cold __attribute__((__cold__))
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __exported __attribute__((__visibility__("default")))
#define __exported_push _Pragma("GCC visibility push(default)")
#define __exported_pop _Pragma("GCC visibility pop")
# 196 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __deprecated __attribute__((__deprecated__))



#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))







#define __deprecated_enum_msg(_msg) 


#define __kpi_deprecated(_msg) 







#define __unavailable 


#define __kpi_unavailable 

#define __kpi_deprecated_arm64_macos_unavailable 



#define __dead 
#define __pure 
# 239 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __restrict restrict
# 248 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __nullable 


#define __nonnull 


#define __null_unspecified 


#define _Nullable 


#define _Nonnull 


#define _Null_unspecified 
# 274 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __disable_tail_calls 
# 286 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __not_tail_called 
# 295 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __result_use_check __attribute__((__warn_unused_result__))
# 307 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __swift_unavailable(_msg) 
# 316 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __abortlike __dead2 __cold __not_tail_called
# 341 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __header_inline extern __inline __attribute__((__gnu_inline__))
# 352 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
# 371 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")


#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))

#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))

#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))


#define __IDSTRING(name,string) static const char name[] __used = string


#define __COPYRIGHT(s) __IDSTRING(copyright,s)



#define __RCSID(s) __IDSTRING(rcsid,s)



#define __SCCSID(s) __IDSTRING(sccsid,s)



#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)




#define __FBSDID(s) 



#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)



#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)



#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
# 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
# 496 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __DARWIN_ONLY_VERS_1050 0
# 528 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_UNIX03 1
# 564 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_64_BIT_INO_T 1
# 575 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_VERS_1050 1




#define __DARWIN_NON_CANCELABLE 0







#define __DARWIN_SUF_UNIX03 
# 597 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
# 607 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_SUF_1050 "$1050"
# 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_SUF_NON_CANCELABLE 
# 626 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"




#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)

#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)

#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 3 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 





#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 



#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x





#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4




#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 3 4
#define ___POSIX_C_DEPRECATED_STARTING_198808L 





#define ___POSIX_C_DEPRECATED_STARTING_199009L 





#define ___POSIX_C_DEPRECATED_STARTING_199209L 





#define ___POSIX_C_DEPRECATED_STARTING_199309L 





#define ___POSIX_C_DEPRECATED_STARTING_199506L 





#define ___POSIX_C_DEPRECATED_STARTING_200112L 





#define ___POSIX_C_DEPRECATED_STARTING_200809L 
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4

#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver







#define __DARWIN_C_ANSI 010000L
#define __DARWIN_C_FULL 900000L






#define __DARWIN_C_LEVEL __DARWIN_C_FULL







#define __STDC_WANT_LIB_EXT1__ 1
# 752 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __DARWIN_NO_LONG_LONG 0
# 764 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define _DARWIN_FEATURE_64_BIT_INODE 1
# 790 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1







#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
# 809 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)







#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
# 833 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")





#define __enum_open 
#define __enum_closed 





#define __enum_options 
# 866 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open

#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed

#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options

#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 3 4
#define _BSD_MACHINE__TYPES_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4
#define _BSD_I386__TYPES_H_ 








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
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
#define __DARWIN_NULL ((void *)0)


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
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
#define _SYS__PTHREAD_TYPES_H_ 





#define __PTHREAD_SIZE__ 8176
#define __PTHREAD_ATTR_SIZE__ 56
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __PTHREAD_MUTEX_SIZE__ 56
#define __PTHREAD_CONDATTR_SIZE__ 8
#define __PTHREAD_COND_SIZE__ 40
#define __PTHREAD_ONCE_SIZE__ 8
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
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


#define __offsetof(type,field) __builtin_offsetof(type, field)
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 2 3 4



#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))

#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))






typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;





#define __DARWIN_WCHAR_MAX __WCHAR_MAX__





#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)



#define __DARWIN_WEOF ((__darwin_wint_t)-1)





#define _FORTIFY_SOURCE 2
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __AVAILABILITY__ 
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __API_TO_BE_DEPRECATED 100000


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/AvailabilityVersions.h" 3 4
#define __AVAILABILITY_VERSIONS__ 

#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __MAC_10_10 101000
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __MAC_10_11 101100
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define __MAC_10_12 101200
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define __MAC_10_13 101300
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __MAC_10_14 101400
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_10_15 101500
#define __MAC_10_15_1 101501
#define __MAC_10_15_4 101504
#define __MAC_10_16 101600
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define __MAC_11_3 110300


#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_2 80200
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500


#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define __TVOS_10_0 100000
#define __TVOS_10_0_1 100001
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __TVOS_11_3 110300
#define __TVOS_11_4 110400
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500

#define __WATCHOS_1_0 10000
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_1_1 30101
#define __WATCHOS_3_2 30200
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_2 50200
#define __WATCHOS_5_3 50300
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400







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
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_15_1 101501
#define MAC_OS_X_VERSION_10_16 101600
#define MAC_OS_VERSION_11_0 110000



#define __DRIVERKIT_19_0 190000
#define __DRIVERKIT_20_0 200000
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __AVAILABILITY_INTERNAL__ 
# 49 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
# 102 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
# 118 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))




#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))






#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define __AVAILABILITY_INTERNAL_REGULAR 
# 157 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
# 4703 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __API_AVAILABLE_GET_MACRO(...) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
# 4745 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/AvailabilityInternal.h" 3 4
#define __swift_compiler_version_at_least(...) 1







#define __SPI_AVAILABLE(...) 
# 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 2 3 4
# 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __OS_AVAILABILITY(_target,_availability) 
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
# 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 






#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
# 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __OSX_UNAVAILABLE 



#define __OSX_AVAILABLE(_vers) 



#define __OSX_DEPRECATED(_start,_dep,_msg) 
# 264 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __IOS_UNAVAILABLE 



#define __IOS_PROHIBITED 



#define __IOS_AVAILABLE(_vers) 



#define __IOS_DEPRECATED(_start,_dep,_msg) 
# 291 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __TVOS_UNAVAILABLE 



#define __TVOS_PROHIBITED 



#define __TVOS_AVAILABLE(_vers) 



#define __TVOS_DEPRECATED(_start,_dep,_msg) 
# 318 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __WATCHOS_UNAVAILABLE 



#define __WATCHOS_PROHIBITED 



#define __WATCHOS_AVAILABLE(_vers) 



#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
# 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __SWIFT_UNAVAILABLE 



#define __SWIFT_UNAVAILABLE_MSG(_msg) 
# 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __API_AVAILABLE(...) 
#define __API_AVAILABLE_BEGIN(...) 
#define __API_AVAILABLE_END 
#define __API_DEPRECATED(...) 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __API_DEPRECATED_BEGIN(...) 
#define __API_DEPRECATED_END 
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define __API_UNAVAILABLE(...) 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __API_UNAVAILABLE_END 
# 475 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/Availability.h" 3 4
#define __SPI_DEPRECATED(...) 



#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
#define _SIZE_T 

typedef __darwin_size_t size_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 3 4
#define NULL __DARWIN_NULL
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
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
#define _RSIZE_T 
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
#define _BSD_MACHINE_TYPES_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
#define _MACHTYPES_H_ 
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
#define _INT8_T 
typedef signed char int8_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
#define _INT16_T 
typedef short int16_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
#define _INT32_T 
typedef int int32_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
#define _INT64_T 
typedef long long int64_t;
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
#define _U_INT8_T 
typedef unsigned char u_int8_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
#define _U_INT16_T 
typedef unsigned short u_int16_t;
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
#define _U_INT32_T 
typedef unsigned int u_int32_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
#define _U_INT64_T 
typedef unsigned long long u_int64_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
#define _INTPTR_T 
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
#define _UINTPTR_T 
typedef unsigned long uintptr_t;
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 2 3 4



typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
#define USER_ADDR_NULL ((user_addr_t) 0)
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))





typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 2 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 2 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
#define _ERRNO_T 
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) ;






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
#define _SSIZE_T 

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
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 3 4
#define _STRINGS_H_ 










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
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 3 4
#define _SECURE__STRINGS_H_ 



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 3 4
#define _SECURE__COMMON_H_ 

#undef _USE_FORTIFY_LEVEL


#define _USE_FORTIFY_LEVEL 2







#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_strings.h" 3 4
#undef bcopy

#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))




#undef bzero

#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 3 4
#define _SECURE__STRING_H_ 
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 3 4
#define __HAS_FIXED_CHK_PROTOTYPES 0
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 3 4
#undef memcpy

#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))




#undef memmove

#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))




#undef memset

#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))




#undef strcpy

#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))





#undef stpcpy

#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))






#undef stpncpy

#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
# 125 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_string.h" 3 4
#undef strncpy

#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))




#undef strcat

#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))





#undef strncat

#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))




#undef __HAS_FIXED_CHK_PROTOTYPES
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 4 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 11 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1

#define __need___va_list 
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
#undef __need___va_list




#define __GNUC_VA_LIST 
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 76 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define _STDIO_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
#define __STDIO_H_ 
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
#define _VA_LIST_T 

typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stdio.h" 3 4
#define _SYS_STDIO_H_ 








int renameat(int, const char *, int, const char *) ;



#define RENAME_SECLUDE 0x00000001
#define RENAME_SWAP 0x00000002
#define RENAME_EXCL 0x00000004
int renamex_np(const char *, const char *, unsigned int) ;
int renameatx_np(int, const char *, int, const char *, unsigned int) ;




# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;

#define _FSTDIO 
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


#define __SLBF 0x0001
#define __SNBF 0x0002
#define __SRD 0x0004
#define __SWR 0x0008

#define __SRW 0x0010
#define __SEOF 0x0020
#define __SERR 0x0040
#define __SMBF 0x0080
#define __SAPP 0x0100
#define __SSTR 0x0200
#define __SOPT 0x0400
#define __SNPT 0x0800
#define __SOFF 0x1000
#define __SMOD 0x2000
#define __SALC 0x4000
#define __SIGN 0x8000
# 113 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

#define BUFSIZ 1024
#define EOF (-1)


#define FOPEN_MAX 20
#define FILENAME_MAX 1024



#define P_tmpdir "/var/tmp/"

#define L_tmpnam 1024
#define TMP_MAX 308915776


#define SEEK_SET 0


#define SEEK_CUR 1


#define SEEK_END 2


#define stdin __stdinp
#define stdout __stdoutp
#define stderr __stderrp
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

# 216 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define L_ctermid 1024


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctermid.h" 3 4
#define _CTERMID_H_ 





char *ctermid(char *);


# 220 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4




FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);

# 237 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define __swift_unavailable_on(osx_msg,ios_msg) __swift_unavailable(osx_msg)




int pclose(FILE *) ;



FILE *popen(const char *, const char *) __asm("_" "popen" ) ;




#undef __swift_unavailable_on
# 262 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4

int __srget(FILE *);
int __svfscanf(FILE *, const char *, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);






#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 294 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define __sfileno(p) ((p)->_file)


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



#define getc_unlocked(fp) __sgetc(fp)
#define putc_unlocked(x,fp) __sputc(x, fp)


#define getchar_unlocked() getc_unlocked(stdin)
#define putchar_unlocked(x) putc_unlocked(x, stdout)
# 338 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_off_t.h" 3 4
#define _OFF_T 

typedef __darwin_off_t off_t;
# 339 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4


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

#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)

#define feof_unlocked(p) __sfeof(p)
#define ferror_unlocked(p) __sferror(p)
#define clearerr_unlocked(p) __sclearerr(p)
#define fileno_unlocked(p) __sfileno(p)
# 421 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
#define _SECURE__STDIO_H_ 
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);

#undef sprintf
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)





extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);

#undef snprintf
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)




extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);

#undef vsprintf
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)




extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);

#undef vsnprintf
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
# 422 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 1 3 4
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
#define _STDLIB_H_ 






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
#define _SYS_WAIT_H_ 
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_pid_t.h" 3 4
#define _PID_T 

typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_id_t.h" 3 4
#define _ID_T 

typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
#define _SYS_SIGNAL_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/appleapiopts.h" 3 4
#define __SYS_APPLEAPIOPTS_H__ 



#define __APPLE_API_STANDARD 



#define __APPLE_API_STABLE 





#define __APPLE_API_EVOLVING 



#define __APPLE_API_UNSTABLE 



#define __APPLE_API_PRIVATE 



#define __APPLE_API_OBSOLETE 
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4


#define __DARWIN_NSIG 32


#define NSIG __DARWIN_NSIG


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 3 4
#define _BSD_MACHINE_SIGNAL_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/signal.h" 3 4
#define _I386_SIGNAL_H_ 1




typedef int sig_atomic_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

#define SIGHUP 1
#define SIGINT 2
#define SIGQUIT 3
#define SIGILL 4
#define SIGTRAP 5
#define SIGABRT 6



#define SIGIOT SIGABRT
#define SIGEMT 7

#define SIGFPE 8
#define SIGKILL 9
#define SIGBUS 10
#define SIGSEGV 11
#define SIGSYS 12
#define SIGPIPE 13
#define SIGALRM 14
#define SIGTERM 15
#define SIGURG 16
#define SIGSTOP 17
#define SIGTSTP 18
#define SIGCONT 19
#define SIGCHLD 20
#define SIGTTIN 21
#define SIGTTOU 22

#define SIGIO 23

#define SIGXCPU 24
#define SIGXFSZ 25
#define SIGVTALRM 26
#define SIGPROF 27

#define SIGWINCH 28
#define SIGINFO 29

#define SIGUSR1 30
#define SIGUSR2 31







#define SIG_DFL (void (*)(int))0
#define SIG_IGN (void (*)(int))1
#define SIG_HOLD (void (*)(int))5
#define SIG_ERR ((void (*)(int))-1)
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
#define __I386_MCONTEXT_H_ 



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 3 4
#define _MACH_MACHINE__STRUCTS_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _MACH_I386__STRUCTS_H_ 
# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
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
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
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

#define FP_PREC_24B 0
#define FP_PREC_53B 2
#define FP_PREC_64B 3

    __rc :2,

#define FP_RND_NEAR 0
#define FP_RND_DOWN 1
#define FP_RND_UP 2
#define FP_CHOP 3

             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_FP_STATUS struct __darwin_fp_status
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
# 193 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 212 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
struct __darwin_ymm_reg
{
 char __ymm_reg[32];
};
# 244 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
struct __darwin_zmm_reg
{
 char __zmm_reg[64];
};
# 258 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
struct __darwin_opmask_reg
{
 char __opmask_reg[8];
};
# 276 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define FP_STATE_BYTES 512



#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
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

#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
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

#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
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
# 574 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 594 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
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

#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
struct __x86_instruction_state
{
        int __insn_stream_valid_bytes;
        int __insn_offset;
 int __out_of_synch;




#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
        __uint8_t __insn_bytes[(2448 - 64 - 4)];
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
 __uint8_t __insn_cacheline[64];
};

#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
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

#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
struct __last_branch_state
{
        int __lbr_count;
 __uint32_t __lbr_supported_tsx : 1,
     __lbr_supported_cycle_count : 1,
     __reserved : 30;
#define __LASTBRANCH_MAX 32
 struct __last_branch_record __lbrs[32];
};
# 701 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
struct __x86_pagein_state
{
 int __pagein_error;
};






#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
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
# 770 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
struct __darwin_x86_thread_full_state64
{
 struct __darwin_x86_thread_state64 __ss64;
 __uint64_t __ds;
 __uint64_t __es;
 __uint64_t __ss;
 __uint64_t __gsbase;
};
# 793 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
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

#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
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

#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
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
# 1251 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 1271 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
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
# 1299 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/i386/_structs.h" 3 4
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
struct __darwin_x86_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 2 3 4



#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};

#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};


#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
struct __darwin_mcontext_avx512_32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx512_state __fs;
};
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};

#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
struct __darwin_mcontext64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};

#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};

#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
struct __darwin_mcontext_avx64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};


#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
struct __darwin_mcontext_avx512_64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};

#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
struct __darwin_mcontext_avx512_64_full
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_full_state64 __ss;
 struct __darwin_x86_avx512_state64 __fs;
};
# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_mcontext.h" 3 4
#define _MCONTEXT_T 

typedef struct __darwin_mcontext64 *mcontext_t;
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
#define _PTHREAD_ATTR_T 

typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack






struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ucontext.h" 3 4
#define _STRUCT_UCONTEXT struct __darwin_ucontext





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
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
#define _SIGSET_T 

typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uid_t.h" 3 4
#define _UID_T 

typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};

#define SIGEV_NONE 0
#define SIGEV_SIGNAL 1
#define SIGEV_THREAD 3

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
# 206 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4
#define ILL_NOOP 0

#define ILL_ILLOPC 1
#define ILL_ILLTRP 2
#define ILL_PRVOPC 3
#define ILL_ILLOPN 4
#define ILL_ILLADR 5
#define ILL_PRVREG 6
#define ILL_COPROC 7
#define ILL_BADSTK 8



#define FPE_NOOP 0

#define FPE_FLTDIV 1
#define FPE_FLTOVF 2
#define FPE_FLTUND 3
#define FPE_FLTRES 4
#define FPE_FLTINV 5
#define FPE_FLTSUB 6
#define FPE_INTDIV 7
#define FPE_INTOVF 8



#define SEGV_NOOP 0

#define SEGV_MAPERR 1
#define SEGV_ACCERR 2



#define BUS_NOOP 0

#define BUS_ADRALN 1
#define BUS_ADRERR 2
#define BUS_OBJERR 3


#define TRAP_BRKPT 1
#define TRAP_TRACE 2



#define CLD_NOOP 0

#define CLD_EXITED 1
#define CLD_KILLED 2
#define CLD_DUMPED 3
#define CLD_TRAPPED 4
#define CLD_STOPPED 5
#define CLD_CONTINUED 6


#define POLL_IN 1
#define POLL_OUT 2
#define POLL_MSG 3
#define POLL_ERR 4
#define POLL_PRI 5
#define POLL_HUP 6


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




#define sa_handler __sigaction_u.__sa_handler
#define sa_sigaction __sigaction_u.__sa_sigaction

#define SA_ONSTACK 0x0001
#define SA_RESTART 0x0002
#define SA_RESETHAND 0x0004
#define SA_NOCLDSTOP 0x0008
#define SA_NODEFER 0x0010
#define SA_NOCLDWAIT 0x0020
#define SA_SIGINFO 0x0040

#define SA_USERTRAMP 0x0100

#define SA_64REGSET 0x0200





#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)




#define SIG_BLOCK 1
#define SIG_UNBLOCK 2
#define SIG_SETMASK 3


#define SI_USER 0x10001
#define SI_QUEUE 0x10002
#define SI_TIMER 0x10003
#define SI_ASYNCIO 0x10004
#define SI_MESGQ 0x10005


typedef void (*sig_t)(int);






#define SS_ONSTACK 0x0001
#define SS_DISABLE 0x0004
#define MINSIGSTKSZ 32768
#define SIGSTKSZ 131072






struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};

#define SV_ONSTACK SA_ONSTACK
#define SV_INTERRUPT SA_RESTART
#define SV_RESETHAND SA_RESETHAND
#define SV_NODEFER SA_NODEFER
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define SV_SIGINFO SA_SIGINFO

#define sv_onstack sv_flags





struct sigstack {
 char *ss_sp;
 int ss_onstack;
};






#define sigmask(m) (1 << ((m)-1))


#define BADSIG SIG_ERR
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/signal.h" 3 4

    void(*signal(int, void (*)(int)))(int);

# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
#define _SYS_RESOURCE_H_ 






# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 16 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
#define _STDINT_H_ 


#define __WORDSIZE 64
# 32 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint8_t.h" 3 4
#define _UINT8_T 
typedef unsigned char uint8_t;
# 33 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint16_t.h" 3 4
#define _UINT16_T 
typedef unsigned short uint16_t;
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint32_t.h" 3 4
#define _UINT32_T 
typedef unsigned int uint32_t;
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uint64_t.h" 3 4
#define _UINT64_T 
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
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_intmax_t.h" 3 4
#define _INTMAX_T 

typedef long int intmax_t;
# 68 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types/_uintmax_t.h" 3 4
#define _UINTMAX_T 

typedef long unsigned int uintmax_t;
# 69 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4


#define INT8_C(v) (v)
#define INT16_C(v) (v)
#define INT32_C(v) (v)
#define INT64_C(v) (v ## LL)

#define UINT8_C(v) (v)
#define UINT16_C(v) (v)
#define UINT32_C(v) (v ## U)
#define UINT64_C(v) (v ## ULL)


#define INTMAX_C(v) (v ## L)
#define UINTMAX_C(v) (v ## UL)
# 105 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
#define INT8_MAX 127
#define INT16_MAX 32767
#define INT32_MAX 2147483647
#define INT64_MAX 9223372036854775807LL

#define INT8_MIN -128
#define INT16_MIN -32768






#define INT32_MIN (-INT32_MAX-1)
#define INT64_MIN (-INT64_MAX-1)

#define UINT8_MAX 255
#define UINT16_MAX 65535
#define UINT32_MAX 4294967295U
#define UINT64_MAX 18446744073709551615ULL


#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST64_MIN INT64_MIN

#define INT_LEAST8_MAX INT8_MAX
#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST32_MAX INT32_MAX
#define INT_LEAST64_MAX INT64_MAX

#define UINT_LEAST8_MAX UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX


#define INT_FAST8_MIN INT8_MIN
#define INT_FAST16_MIN INT16_MIN
#define INT_FAST32_MIN INT32_MIN
#define INT_FAST64_MIN INT64_MIN

#define INT_FAST8_MAX INT8_MAX
#define INT_FAST16_MAX INT16_MAX
#define INT_FAST32_MAX INT32_MAX
#define INT_FAST64_MAX INT64_MAX

#define UINT_FAST8_MAX UINT8_MAX
#define UINT_FAST16_MAX UINT16_MAX
#define UINT_FAST32_MAX UINT32_MAX
#define UINT_FAST64_MAX UINT64_MAX




#define INTPTR_MAX 9223372036854775807L



#define INTPTR_MIN (-INTPTR_MAX-1)


#define UINTPTR_MAX 18446744073709551615UL





#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define INTMAX_MIN (-INTMAX_MAX-1)



#define PTRDIFF_MIN INTMAX_MIN
#define PTRDIFF_MAX INTMAX_MAX





#define SIZE_MAX UINTPTR_MAX


#define RSIZE_MAX (SIZE_MAX >> 1)




#define WCHAR_MAX __WCHAR_MAX__
# 209 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
#define WCHAR_MIN (-WCHAR_MAX-1)



#define WINT_MIN INT32_MIN
#define WINT_MAX INT32_MAX

#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_ATOMIC_MAX INT32_MAX
# 10 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval.h" 3 4
#define _STRUCT_TIMEVAL struct timeval




struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
#define PRIO_PROCESS 0
#define PRIO_PGRP 1
#define PRIO_USER 2


#define PRIO_DARWIN_THREAD 3
#define PRIO_DARWIN_PROCESS 4





#define PRIO_MIN -20
#define PRIO_MAX 20






#define PRIO_DARWIN_BG 0x1000





#define PRIO_DARWIN_NONUI 0x1001
# 140 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
#define RUSAGE_SELF 0
#define RUSAGE_CHILDREN -1
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;
#define ru_first ru_ixrss
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
#define ru_last ru_nivcsw

};





#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5




#define RU_PROC_RUNS_RESLIDE 0x00000001

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
# 382 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define RLIM_SAVED_MAX RLIM_INFINITY
#define RLIM_SAVED_CUR RLIM_INFINITY





#define RLIMIT_CPU 0
#define RLIMIT_FSIZE 1
#define RLIMIT_DATA 2
#define RLIMIT_STACK 3
#define RLIMIT_CORE 4
#define RLIMIT_AS 5

#define RLIMIT_RSS RLIMIT_AS
#define RLIMIT_MEMLOCK 6
#define RLIMIT_NPROC 7

#define RLIMIT_NOFILE 8

#define RLIM_NLIMITS 9

#define _RLIMIT_POSIX_FLAG 0x1000





struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};







#define RLIMIT_WAKEUPS_MONITOR 0x1
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define RLIMIT_THREAD_CPULIMITS 0x3
#define RLIMIT_FOOTPRINT_INTERVAL 0x4




#define WAKEMON_ENABLE 0x01
#define WAKEMON_DISABLE 0x02
#define WAKEMON_GET_PARAMS 0x04
#define WAKEMON_SET_DEFAULTS 0x08
#define WAKEMON_MAKE_FATAL 0x10




#define CPUMON_MAKE_FATAL 0x1000




#define FOOTPRINT_INTERVAL_RESET 0x1

struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};




#define IOPOL_TYPE_DISK 0
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8


#define IOPOL_SCOPE_PROCESS 0
#define IOPOL_SCOPE_THREAD 1
#define IOPOL_SCOPE_DARWIN_BG 2


#define IOPOL_DEFAULT 0
#define IOPOL_IMPORTANT 1
#define IOPOL_PASSIVE 2
#define IOPOL_THROTTLE 3
#define IOPOL_UTILITY 4
#define IOPOL_STANDARD 5


#define IOPOL_APPLICATION IOPOL_STANDARD
#define IOPOL_NORMAL IOPOL_IMPORTANT


#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define IOPOL_ATIME_UPDATES_OFF 1

#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2

#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1

#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1

#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1

#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1

#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1





int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 2 3 4
# 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
#define WNOHANG 0x00000001
#define WUNTRACED 0x00000002
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
#define _W_INT(w) (*(int *)&(w))
#define WCOREFLAG 0200



#define _WSTATUS(x) (_W_INT(x) & 0177)
#define _WSTOPPED 0177






#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)




#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define WTERMSIG(x) (_WSTATUS(x))

#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)

#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
# 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
#define WEXITED 0x00000004


#define WSTOPPED 0x00000008

#define WCONTINUED 0x00000010
#define WNOWAIT 0x00000020
# 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4
#define WAIT_ANY (-1)
#define WAIT_MYPGRP 0

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/endian.h" 3 4
#define _BSD_MACHINE_ENDIAN_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 3 4
#define _I386__ENDIAN_H_ 
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/endian.h" 3 4
#define _QUAD_HIGHWORD 1
#define _QUAD_LOWWORD 0





#define __DARWIN_LITTLE_ENDIAN 1234
#define __DARWIN_BIG_ENDIAN 4321
#define __DARWIN_PDP_ENDIAN 3412

#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN



#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN

#define BYTE_ORDER __DARWIN_BYTE_ORDER

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 1 3 4
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 3 4
#define _SYS__ENDIAN_H_ 
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
#define _OS__OSBYTEORDER_H 
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))



#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))





#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
#define __DARWIN_OS_INLINE static inline
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3 4
#define _OS__OSBYTEORDERI386_H 
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







#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))


#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))


#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_endian.h" 2 3 4

#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define htons(x) __DARWIN_OSSwapInt16(x)

#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define htonl(x) __DARWIN_OSSwapInt32(x)



#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define htonll(x) __DARWIN_OSSwapInt64(x)

#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define HTONLL(x) (x) = htonll((__uint64_t)x)
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
#define w_termsig w_T.w_Termsig
#define w_coredump w_T.w_Coredump
#define w_retcode w_T.w_Retcode
#define w_stopval w_S.w_Stopval
#define w_stopsig w_S.w_Stopsig
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/alloca.h" 3 4
#define _ALLOCA_H_ 






void *alloca(size_t);




#undef alloca
#undef __alloca
#define alloca(size) __alloca(size)
#define __alloca(size) __builtin_alloca(size)
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
#define _CT_RUNE_T 

typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rune_t.h" 3 4
#define _RUNE_T 

typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
#define _WCHAR_T 

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




#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX 0x7fffffff
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
#define MB_CUR_MAX __mb_cur_max
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/malloc/_malloc.h" 3 4
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
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





#define __swift_unavailable_on(osx_msg,ios_msg) __swift_unavailable(osx_msg)





int system(const char *) __asm("_" "system" );

#undef __swift_unavailable_on

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
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_dev_t.h" 3 4
#define _DEV_T 

typedef __darwin_dev_t dev_t;
# 261 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_mode_t.h" 3 4
#define _MODE_T 

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








# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2

# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 1

#define INS_H 

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 1 3 4

#define R2_TYPES_H 

#undef _FILE_OFFSET_BITS
#define _FILE_OFFSET_BITS 64


# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_util/r_str_util.h" 1 3 4

#define R_STR_UTIL_H 





#define IS_NULLSTR(x) (!(x) || !*(x))
#define IS_WHITECHAR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r')
#define IS_SEPARATOR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r' || (x) == ' '|| (x) == ',' || (x) == ';' || (x) == ':' || (x) == '[' || (x) == ']' || (x) == '(' || (x) == ')' || (x) == '{' || (x) == '}')


#define IS_HEXCHAR(x) (((x) >= '0' && (x) <= '9') || ((x) >= 'a' && (x) <= 'f') || ((x) >= 'A' && (x) <= 'F'))
#define IS_PRINTABLE(x) ((x) >=' ' && (x) <= '~')
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define IS_OCTAL(x) ((x) >= '0' && (x) <= '7')
#define IS_WHITESPACE(x) ((x) == ' ' || (x) == '\t')
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 1 3 4

#define R2_CONFIGURE_H 

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_version.h" 1 3 4

#define R_VERSION_H 1
#define R2_VERSION_COMMIT 27746
#define R2_VERSION "5.5.4"
#define R2_VERSION_MAJOR 5
#define R2_VERSION_MINOR 5
#define R2_VERSION_PATCH 4
#define R2_VERSION_NUMBER 50504
#define R2_GITTAP "5.5.4"
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define R2_BIRTH "2022-04-30__12:15:59"
# 5 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 2 3 4

#define R_CHECKS_LEVEL 2
#define DEBUGGER 1
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define HAVE_ARC4RANDOM_UNIFORM 0
#define HAVE_EXPLICIT_BZERO 0
#define HAVE_EXPLICIT_MEMSET 0
#define HAVE_CLOCK_NANOSLEEP 0
#define HAVE_SIGACTION 0
#define WANT_THREADS 1
#define WANT_CAPSTONE 1

#define HAVE_GPERF 1

#define HAVE_GPERF 1
# 53 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_userconf.h" 3 4
#define R2_PREFIX "/usr/local"
#define R2_ETCDIR "/etc"
#define R2_LIBDIR "/usr/local/lib"
#define R2_INCDIR "/usr/local/include/libr"
#define R2_DATDIR "/usr/local/share"
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION

#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")


#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")

#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")

#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")

#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")

#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")

#define HAVE_LIB_MAGIC 0
#define USE_LIB_MAGIC 0
#define HAVE_LIB_XXHASH 0
#define USE_LIB_XXHASH 0


#define HAVE_LIB_SSL 0


#define HAVE_LIBUV 1




#define HAVE_PTRACE 1


#define USE_PTRACE_WRAP 0
#define HAVE_FORK 1
#define WANT_DYLINK 1
#define WITH_GPL 1




#define HAVE_JEMALLOC 1
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 39 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 



typedef long int ptrdiff_t;
# 155 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)




#define _GCC_MAX_ALIGN_T 



typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 1 3 4
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4
#undef assert
#undef __assert
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;










#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)




#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/assert.h" 3 4
#define _ASSERT_H_ 



#define static_assert _Static_assert
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4



#undef __BSD__
#undef __KFBSD__
#undef __UNIX__
#undef __WINDOWS__

#define R_MODE_PRINT 0x000
#define R_MODE_RADARE 0x001
#define R_MODE_SET 0x002
#define R_MODE_SIMPLE 0x004
#define R_MODE_JSON 0x008
#define R_MODE_ARRAY 0x010
#define R_MODE_SIMPLEST 0x020
#define R_MODE_CLASSDUMP 0x040
#define R_MODE_EQUAL 0x080

#define R_IN 
#define R_OUT 
#define R_INOUT 
#define R_OWN 
#define R_BORROW 
#define R_NONNULL 
#define R_NULLABLE 
#define R_DEPRECATE 
#define R_IFNULL(x) 

#define R_UNUSED __attribute__((__unused__))
# 63 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_PERM_R 4
#define R_PERM_W 2
#define R_PERM_X 1
#define R_PERM_RW (R_PERM_R|R_PERM_W)
#define R_PERM_RX (R_PERM_R|R_PERM_X)
#define R_PERM_RWX (R_PERM_R|R_PERM_W|R_PERM_X)
#define R_PERM_WX (R_PERM_W|R_PERM_X)
#define R_PERM_SHAR 8
#define R_PERM_PRIV 16
#define R_PERM_ACCESS 32
#define R_PERM_CREAT 64



#undef mips
#define mips mips
# 88 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define TARGET_OS_IPHONE 0


#undef LIBC_HAVE_SYSTEM
#undef HAVE_SYSTEM







#define LIBC_HAVE_SYSTEM 1
#define HAVE_SYSTEM 1





#define LIBC_HAVE_PTRACE 1



#define LIBC_HAVE_FORK 1
# 125 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define LIBC_HAVE_PLEDGE 0





#define LIBC_HAVE_PRIV_SET 0



#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x







#define __KFBSD__ 0
# 169 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#undef HAVE_PTY




#define HAVE_PTY __UNIX__ && LIBC_HAVE_FORK && !__sun





#define __BSD__ 0
#define __UNIX__ 1
# 208 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define FUNC_ATTR_MALLOC __attribute__((malloc))
#define FUNC_ATTR_ALLOC_SIZE(x) __attribute__((alloc_size(x)))
#define FUNC_ATTR_ALLOC_SIZE_PROD(x,y) __attribute__((alloc_size(x,y)))
#define FUNC_ATTR_ALLOC_ALIGN(x) __attribute__((alloc_align(x)))
#define FUNC_ATTR_PURE __attribute__ ((pure))
#define FUNC_ATTR_CONST __attribute__((const))
#define FUNC_ATTR_USED __attribute__((used))
#define FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define FUNC_ATTR_ALWAYS_INLINE __attribute__((always_inline))
# 239 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))




# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 1 3 4

#define R2_TYPES_BASE_H 





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/ctype.h" 3 4
#define _CTYPE_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
#define __CTYPE_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
#define _RUNETYPE_H_ 
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_wint_t.h" 3 4
#define _WINT_T 

typedef __darwin_wint_t wint_t;
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/runetype.h" 2 3 4



#define _CACHED_RUNES (1 <<8 )
#define _CRMASK (~(_CACHED_RUNES - 1))




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

#define _RUNE_MAGIC_A "RuneMagA"


extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 2 3 4

#define _CTYPE_A 0x00000100L
#define _CTYPE_C 0x00000200L
#define _CTYPE_D 0x00000400L
#define _CTYPE_G 0x00000800L
#define _CTYPE_L 0x00001000L
#define _CTYPE_P 0x00002000L
#define _CTYPE_S 0x00004000L
#define _CTYPE_U 0x00008000L
#define _CTYPE_X 0x00010000L
#define _CTYPE_B 0x00020000L
#define _CTYPE_R 0x00040000L
#define _CTYPE_I 0x00080000L
#define _CTYPE_T 0x00100000L
#define _CTYPE_Q 0x00200000L
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define _CTYPE_SWM 0xe0000000L
#define _CTYPE_SWS 30
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_ctype.h" 3 4
#define __DARWIN_CTYPE_inline __header_inline

#define __DARWIN_CTYPE_TOP_inline __header_inline
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



#define _tolower(c) __tolower(c)
#define _toupper(c) __toupper(c)

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
# 9 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
#define _SYS_TYPES_H_ 
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_char.h" 3 4
#define _U_CHAR 
typedef unsigned char u_char;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_short.h" 3 4
#define _U_SHORT 
typedef unsigned short u_short;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_u_int.h" 3 4
#define _U_INT 
typedef unsigned int u_int;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef unsigned long u_long;
#define _U_LONG 

typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_caddr_t.h" 3 4
#define _CADDR_T 
typedef char * caddr_t;
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
#define _BLKCNT_T 

typedef __darwin_blkcnt_t blkcnt_t;
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
#define _BLKSIZE_T 

typedef __darwin_blksize_t blksize_t;
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_gid_t.h" 3 4
#define _GID_T 

typedef __darwin_gid_t gid_t;
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_addr_t.h" 3 4
#define _IN_ADDR_T 

typedef __uint32_t in_addr_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_in_port_t.h" 3 4
#define _IN_PORT_T 

typedef __uint16_t in_port_t;
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino_t.h" 3 4
#define _INO_T 

typedef __darwin_ino_t ino_t;
# 113 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
#define _INO64_T 

typedef __darwin_ino64_t ino64_t;
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_key_t.h" 3 4
#define _KEY_T 

typedef __int32_t key_t;
# 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
#define _NLINK_T 

typedef __uint16_t nlink_t;
# 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 158 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define minor(x) ((int32_t)((x) & 0xffffff))
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_clock_t.h" 3 4
#define _CLOCK_T 

typedef __darwin_clock_t clock_t;
# 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_time_t.h" 3 4
#define _TIME_T 

typedef __darwin_time_t time_t;
# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
#define _USECONDS_T 

typedef __darwin_useconds_t useconds_t;
# 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
#define _SUSECONDS_T 

typedef __darwin_suseconds_t suseconds_t;
# 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 3 4
#define _FD_SET 
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_def.h" 3 4
#define __DARWIN_FD_SETSIZE 1024

#define __DARWIN_NBBY 8
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))


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


#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))






#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))




#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4

#define NBBY __DARWIN_NBBY
#define NFDBITS __DARWIN_NFDBITS
#define howmany(x,y) __DARWIN_howmany(x, y)
typedef __int32_t fd_mask;







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_setsize.h" 3 4
#define FD_SETSIZE __DARWIN_FD_SETSIZE
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_set.h" 3 4
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
# 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_clr.h" 3 4
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_zero.h" 3 4
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
# 201 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_isset.h" 3 4
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
# 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fd_copy.h" 3 4
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
#define _PTHREAD_COND_T 

typedef __darwin_pthread_cond_t pthread_cond_t;
# 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
#define _PTHREAD_CONDATTR_T 

typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 218 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
#define _PTHREAD_MUTEX_T 

typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
#define _PTHREAD_MUTEXATTR_T 

typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
#define _PTHREAD_ONCE_T 

typedef __darwin_pthread_once_t pthread_once_t;
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
#define _PTHREAD_RWLOCK_T 

typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 222 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
#define _PTHREAD_RWLOCKATTR_T 

typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
#define _PTHREAD_T 

typedef __darwin_pthread_t pthread_t;
# 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
#define _PTHREAD_KEY_T 

typedef __darwin_pthread_key_t pthread_key_t;
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
#define _FSBLKCNT_T 

typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
#define _FSFILCNT_T 

typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 234 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/types.h" 2 3 4
# 10 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 30 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
#define _GCC_LIMITS_H_ 



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 1 3 4





#define _GCC_NEXT_LIMITS_H 
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 203 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 3 4
#define _LIMITS_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
#define _I386_LIMITS_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 3 4
#define _I386__LIMITS_H_ 

#define __DARWIN_CLK_TCK 100
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 2 3 4

#define CHAR_BIT 8
#define MB_LEN_MAX 6


#define CLK_TCK __DARWIN_CLK_TCK
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
#define SCHAR_MAX 127
#define SCHAR_MIN (-128)

#define UCHAR_MAX 255
#define CHAR_MAX 127
#define CHAR_MIN (-128)

#define USHRT_MAX 65535
#define SHRT_MAX 32767
#define SHRT_MIN (-32768)

#define UINT_MAX 0xffffffff
#define INT_MAX 2147483647
#define INT_MIN (-2147483647-1)


#define ULONG_MAX 0xffffffffffffffffUL
#define LONG_MAX 0x7fffffffffffffffL
#define LONG_MIN (-0x7fffffffffffffffL-1)






#define ULLONG_MAX 0xffffffffffffffffULL
#define LLONG_MAX 0x7fffffffffffffffLL
#define LLONG_MIN (-0x7fffffffffffffffLL-1)



#define LONG_BIT 64



#define SSIZE_MAX LONG_MAX
#define WORD_BIT 32


#define SIZE_T_MAX ULONG_MAX

#define UQUAD_MAX ULLONG_MAX
#define QUAD_MAX LLONG_MAX
#define QUAD_MIN LLONG_MIN
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 3 4
#define _SYS_SYSLIMITS_H_ 







#define ARG_MAX (1024 * 1024)
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 3 4
#define CHILD_MAX 266
#define GID_MAX 2147483647U

#define LINK_MAX 32767
#define MAX_CANON 1024
#define MAX_INPUT 1024
#define NAME_MAX 255
#define NGROUPS_MAX 16

#define UID_MAX 2147483647U

#define OPEN_MAX 10240


#define PATH_MAX 1024
#define PIPE_BUF 512

#define BC_BASE_MAX 99
#define BC_DIM_MAX 2048
#define BC_SCALE_MAX 99
#define BC_STRING_MAX 1000
#define CHARCLASS_NAME_MAX 14
#define COLL_WEIGHTS_MAX 2
#define EQUIV_CLASS_MAX 2
#define EXPR_NEST_MAX 32
#define LINE_MAX 2048
#define RE_DUP_MAX 255


#define NZERO 20
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4


#define _POSIX_ARG_MAX 4096
#define _POSIX_CHILD_MAX 25
#define _POSIX_LINK_MAX 8
#define _POSIX_MAX_CANON 255
#define _POSIX_MAX_INPUT 255
#define _POSIX_NAME_MAX 14
#define _POSIX_NGROUPS_MAX 8
#define _POSIX_OPEN_MAX 20
#define _POSIX_PATH_MAX 256
#define _POSIX_PIPE_BUF 512
#define _POSIX_SSIZE_MAX 32767
#define _POSIX_STREAM_MAX 8
#define _POSIX_TZNAME_MAX 6

#define _POSIX2_BC_BASE_MAX 99
#define _POSIX2_BC_DIM_MAX 2048
#define _POSIX2_BC_SCALE_MAX 99
#define _POSIX2_BC_STRING_MAX 1000
#define _POSIX2_EQUIV_CLASS_MAX 2
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX2_LINE_MAX 2048
#define _POSIX2_RE_DUP_MAX 255



#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_AIO_MAX 1
#define _POSIX_DELAYTIMER_MAX 32
#define _POSIX_MQ_OPEN_MAX 8
#define _POSIX_MQ_PRIO_MAX 32
#define _POSIX_RTSIG_MAX 8
#define _POSIX_SEM_NSEMS_MAX 256
#define _POSIX_SEM_VALUE_MAX 32767
#define _POSIX_SIGQUEUE_MAX 32
#define _POSIX_TIMER_MAX 32

#define _POSIX_CLOCKRES_MIN 20000000



#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define _POSIX_THREAD_KEYS_MAX 128
#define _POSIX_THREAD_THREADS_MAX 64

#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define PTHREAD_KEYS_MAX 512



#define PTHREAD_STACK_MIN 8192




#define _POSIX_HOST_NAME_MAX 255
#define _POSIX_LOGIN_NAME_MAX 9
#define _POSIX_SS_REPL_MAX 4
#define _POSIX_SYMLINK_MAX 255
#define _POSIX_SYMLOOP_MAX 8
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define _POSIX_TRACE_NAME_MAX 8
#define _POSIX_TRACE_SYS_MAX 8
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define _POSIX_TTY_NAME_MAX 9
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define _POSIX2_COLL_WEIGHTS_MAX 2

#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX



#define OFF_MIN LLONG_MIN
#define OFF_MAX LLONG_MAX







#define PASS_MAX 128


#define NL_ARGMAX 9
#define NL_LANGMAX 14
#define NL_MSGMAX 32767
#define NL_NMAX 1
#define NL_SETMAX 255
#define NL_TEXTMAX 2048

#define _XOPEN_IOV_MAX 16
#define IOV_MAX 1024
#define _XOPEN_NAME_MAX 255
#define _XOPEN_PATH_MAX 1024
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
#undef _GCC_NEXT_LIMITS_H
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 60 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
#define _LIMITS_H___ 


#undef CHAR_BIT
#define CHAR_BIT __CHAR_BIT__







#undef SCHAR_MIN
#define SCHAR_MIN (-SCHAR_MAX - 1)
#undef SCHAR_MAX
#define SCHAR_MAX __SCHAR_MAX__


#undef UCHAR_MAX



#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
# 96 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
#undef CHAR_MIN
#define CHAR_MIN SCHAR_MIN
#undef CHAR_MAX
#define CHAR_MAX SCHAR_MAX



#undef SHRT_MIN
#define SHRT_MIN (-SHRT_MAX - 1)
#undef SHRT_MAX
#define SHRT_MAX __SHRT_MAX__


#undef USHRT_MAX



#define USHRT_MAX (SHRT_MAX * 2 + 1)



#undef INT_MIN
#define INT_MIN (-INT_MAX - 1)
#undef INT_MAX
#define INT_MAX __INT_MAX__


#undef UINT_MAX
#define UINT_MAX (INT_MAX * 2U + 1U)



#undef LONG_MIN
#define LONG_MIN (-LONG_MAX - 1L)
#undef LONG_MAX
#define LONG_MAX __LONG_MAX__


#undef ULONG_MAX
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)



#undef LLONG_MIN
#define LLONG_MIN (-LLONG_MAX - 1LL)
#undef LLONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__


#undef ULLONG_MAX
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)




#undef LONG_LONG_MIN
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#undef LONG_LONG_MAX
#define LONG_LONG_MAX __LONG_LONG_MAX__


#undef ULONG_LONG_MAX
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
# 11 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4

#define cut8 const unsigned char
#define ut64 unsigned long long
#define st64 long long
#define ut32 unsigned int
#define st32 int
#define ut16 unsigned short
#define st16 short
#define ut8 unsigned char
#define st8 signed char
#define boolt int




#define R_ALIGNED(x) __attribute__((aligned(x)))


typedef __attribute__((aligned(1))) unsigned short uut16;
typedef __attribute__((aligned(1))) unsigned int uut32;
typedef __attribute__((aligned(1))) unsigned long long uut64;
typedef __attribute__((aligned(1))) short ust16;
typedef __attribute__((aligned(1))) int ust32;
typedef __attribute__((aligned(1))) long long ust64;

typedef union {
 unsigned char v8;
 unsigned short v16;
 unsigned int v32;
 unsigned long long v64;
} utAny;

typedef struct _ut80 {
 unsigned long long Low;
 unsigned short High;
} ut80;
typedef struct _ut96 {
 unsigned long long Low;
 unsigned int High;
} ut96;
typedef struct _ut128 {
 unsigned long long Low;
 long long High;
} ut128;
typedef struct _ut256 {
 ut128 Low;
 ut128 High;
} ut256;
typedef struct _utX {
 ut80 v80;
 ut96 v96;
 ut128 v128;
 ut256 v256;
} utX;

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool




#define true 1
#define false 0
# 50 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 67 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4

#define R_EMPTY { 0 }
#define R_EMPTY2 {{ 0 }}


#undef UT64_MAX
#undef UT64_GT0
#undef UT64_LT0
#undef UT64_MIN
#undef UT32_MAX
#undef UT32_MIN
#undef UT16_MIN
#undef UT8_MIN
#define ST64_MAX ((st64)0x7FFFFFFFFFFFFFFFULL)
#define ST64_MIN ((st64)(-ST64_MAX-1))
#define UT64_MAX 0xFFFFFFFFFFFFFFFFULL
#define UT64_GT0 0x8000000000000000ULL
#define UT64_LT0 0x7FFFFFFFFFFFFFFFULL
#define UT64_MIN 0ULL
#define UT64_32U 0xFFFFFFFF00000000ULL
#define UT64_16U 0xFFFFFFFFFFFF0000ULL
#define UT64_8U 0xFFFFFFFFFFFFFF00ULL
#define UT32_MIN 0U
#define UT16_MIN 0U
#define UT32_GT0 0x80000000U
#define UT32_LT0 0x7FFFFFFFU
#define ST32_MAX 0x7FFFFFFF
#define ST32_MIN (-ST32_MAX-1)
#define UT32_MAX 0xFFFFFFFFU
#define UT32_MIN 0U
#define ST16_MAX 0x7FFF
#define ST16_MIN (-ST16_MAX-1)
#define UT16_GT0 0x8000U
#define UT16_MAX 0xFFFFU
#define ST8_MAX 0x7F
#define ST8_MIN (-ST8_MAX - 1)
#define UT8_GT0 0x80U
#define UT8_MAX 0xFFU
#define UT8_MIN 0x00U
#define ASCII_MIN 32
#define ASCII_MAX 127







#define SZT_MAX UT64_MAX
#define SZT_MIN UT64_MIN
#define SSZT_MAX ST64_MAX
#define SSZT_MIN ST64_MIN


#define UT64_ALIGN(x) (x + (x - (x % sizeof (ut64))))
#define UT32_ALIGN(x) (x + (x - (x % sizeof (ut32))))
#define UT16_ALIGN(x) (x + (x - (x % sizeof (ut16))))

#define UT32_LO(x) ((ut32)((x)&UT32_MAX))
#define UT32_HI(x) ((ut32)(((ut64)(x))>>32)&UT32_MAX)

#define R_BETWEEN(x,y,z) (((y)>=(x)) && ((y)<=(z)))
#define R_ROUND(x,y) ((x)%(y))?(x)+((y)-((x)%(y))):(x)
#define R_DIM(x,y,z) (((x)<(y))?(y):((x)>(z))?(z):(x))

#define R_MAX(x,y) (((x)>(y))?(x):(y))
#define R_MAX_DEFINED 


#define R_MIN(x,y) (((x)>(y))?(y):(x))
#define R_MIN_DEFINED 

#define R_ABS(x) (((x)<0)?-(x):(x))
#define R_BTW(x,y,z) (((x)>=(y))&&((y)<=(z)))?y:x

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 1 3 4

#define R_TYPES_OVERFLOW_H 
# 13 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 3 4
#define SZT_ADD_OVFCHK(x,y) ((SIZE_MAX - (x)) < (y))
#define SSZT_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > SSIZE_MAX - (x))) || (((x) < 0) && (a) < SSIZE_MIN - (x)))
#define UT64_ADD_OVFCHK(x,y) ((UT64_MAX - (x)) < (y))
#define ST64_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST64_MAX - (x))) || (((x) < 0) && (a) < ST64_MIN - (x)))
#define UT32_ADD_OVFCHK(x,y) ((UT32_MAX - (x)) < (y))
#define ST32_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST32_MAX - (x))) || (((x) < 0) && (a) < ST32_MIN - (x)))
#define UT16_ADD_OVFCHK(x,y) ((UT16_MAX - (x)) < (y))
#define ST16_ADD_OVFCHK(a,b) ((((b) > 0) && ((a) > ST16_MAX - (b))) || (((b) < 0) && ((a) < ST16_MIN - (b))))
#define UT8_ADD_OVFCHK(x,y) ((UT8_MAX - (x)) < (y))
#define ST8_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST8_MAX - (x))) || ((x) < 0 && (a) < ST8_MIN - (x)))




#define SZT_SUB_OVFCHK(a,b) SZT_ADD_OVFCHK(a,-(b))
#define SSZT_SUB_OVFCHK(a,b) SSZT_ADD_OVFCHK(a,-(b))
#define UT64_SUB_OVFCHK(a,b) UT64_ADD_OVFCHK(a,-(b))
#define ST64_SUB_OVFCHK(a,b) ST64_ADD_OVFCHK(a,-(b))
#define UT32_SUB_OVFCHK(a,b) UT32_ADD_OVFCHK(a,-(b))
#define ST32_SUB_OVFCHK(a,b) ST32_ADD_OVFCHK(a,-(b))
#define UT16_SUB_OVFCHK(a,b) UT16_ADD_OVFCHK(a,-(b))
#define ST16_SUB_OVFCHK(a,b) ST16_ADD_OVFCHK(a,-(b))
#define UT8_SUB_OVFCHK(a,b) UT8_ADD_OVFCHK(a,-(b))
#define ST8_SUB_OVFCHK(a,b) ST8_ADD_OVFCHK(a,-(b))


#define UNSIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { return (a > 0 && b > 0 && a > type_max / b); }




#define SIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { if (a > 0) { if (b > 0) { return a > type_max / b; } return b < type_min / a; } if (b > 0) { return a < type_min / b; } return a && b < type_max / a; }
# 54 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_overflow.h" 3 4
#define SIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_mid,type_max) static inline bool overflow_name(type_base a, type_base b) { return (!b || (a == type_mid && b == type_max)); }



#define UNSIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { (void)(a); return !b; }





static inline _Bool ST8_DIV_OVFCHK(unsigned char a, unsigned char b) { return (!b || (a == 0x80U && b == 0xFFU)); }
static inline _Bool ST16_DIV_OVFCHK(unsigned short a, unsigned short b) { return (!b || (a == 0x8000U && b == 0xFFFFU)); }
static inline _Bool ST32_DIV_OVFCHK(unsigned int a, unsigned int b) { return (!b || (a == 0x80000000U && b == 0xFFFFFFFFU)); }
static inline _Bool ST64_DIV_OVFCHK(unsigned long long a, unsigned long long b) { return (!b || (a == 0x8000000000000000ULL && b == 0xFFFFFFFFFFFFFFFFULL)); }
static inline _Bool UT8_DIV_OVFCHK(unsigned char a, unsigned char b) { (void)(a); return !b; }
static inline _Bool UT16_DIV_OVFCHK(unsigned short a, unsigned short b) { (void)(a); return !b; }
static inline _Bool UT32_DIV_OVFCHK(unsigned int a, unsigned int b) { (void)(a); return !b; }
static inline _Bool UT64_DIV_OVFCHK(unsigned long long a, unsigned long long b) { (void)(a); return !b; }


static inline _Bool ST8_MUL_OVFCHK(signed char a, signed char b) { if (a > 0) { if (b > 0) { return a > 0x7F / b; } return b < (-0x7F - 1) / a; } if (b > 0) { return a < (-0x7F - 1) / b; } return a && b < 0x7F / a; }
static inline _Bool ST16_MUL_OVFCHK(short a, short b) { if (a > 0) { if (b > 0) { return a > 0x7FFF / b; } return b < (-0x7FFF -1) / a; } if (b > 0) { return a < (-0x7FFF -1) / b; } return a && b < 0x7FFF / a; }
static inline _Bool ST32_MUL_OVFCHK(int a, int b) { if (a > 0) { if (b > 0) { return a > 0x7FFFFFFF / b; } return b < (-0x7FFFFFFF -1) / a; } if (b > 0) { return a < (-0x7FFFFFFF -1) / b; } return a && b < 0x7FFFFFFF / a; }
static inline _Bool ST64_MUL_OVFCHK(long long a, long long b) { if (a > 0) { if (b > 0) { return a > ((long long)0x7FFFFFFFFFFFFFFFULL) / b; } return b < ((long long)(-((long long)0x7FFFFFFFFFFFFFFFULL)-1)) / a; } if (b > 0) { return a < ((long long)(-((long long)0x7FFFFFFFFFFFFFFFULL)-1)) / b; } return a && b < ((long long)0x7FFFFFFFFFFFFFFFULL) / a; }
static inline _Bool SZT_MUL_OVFCHK(size_t a, size_t b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFFFFFFFFFULL / b); }
static inline _Bool UT8_MUL_OVFCHK(unsigned char a, unsigned char b) { return (a > 0 && b > 0 && a > 0xFFU / b); }
static inline _Bool UT16_MUL_OVFCHK(unsigned short a, unsigned short b) { return (a > 0 && b > 0 && a > 0xFFFFU / b); }
static inline _Bool UT32_MUL_OVFCHK(unsigned int a, unsigned int b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFU / b); }
static inline _Bool UT64_MUL_OVFCHK(unsigned long long a, unsigned long long b) { return (a > 0 && b > 0 && a > 0xFFFFFFFFFFFFFFFFULL / b); }
# 143 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 2 3 4


#define B_IS_SET(x,n) (((x) & (1ULL << (n)))? 1: 0)
#define B_SET(x,n) ((x) |= (1ULL << (n)))
#define B_EVEN(x) (((x) & 1) == 0)
#define B_ODD(x) (!B_EVEN((x)))
#define B_UNSET(x,n) ((x) &= ~(1ULL << (n)))
#define B_TOGGLE(x,n) ((x) ^= (1ULL << (n)))

#define B11111 31
#define B11110 30
#define B11101 29
#define B11100 28
#define B11011 27
#define B11010 26
#define B11001 25
#define B11000 24
#define B10111 23
#define B10110 22
#define B10101 21
#define B10100 20
#define B10011 19
#define B10010 18
#define B10001 17
#define B10000 16
#define B1111 15
#define B1110 14
#define B1101 13
#define B1100 12
#define B1011 11
#define B1010 10
#define B1001 9
#define B1000 8
#define B0111 7
#define B0110 6
#define B0101 5
#define B0100 4
#define B0011 3
#define B0010 2
#define B0001 1
#define B0000 0
#undef B
#define B4(a,b,c,d) ((a<<12)|(b<<8)|(c<<4)|(d))



#define INFINITY (1.0f/0.0f)



#define NAN (0.0f/0.0f)
# 212 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
#define R_PACKED(__Declaration__) __Declaration__ __attribute__((__packed__))
# 222 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types_base.h" 3 4
#define HEAPTYPE(x) static x* x ##_new(x n) { x *m = malloc(sizeof (x)); return m? *m = n, m: m; }
# 245 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4

#undef _FILE_OFFSET_BITS
#define _FILE_OFFSET_BITS 64
#undef _GNU_SOURCE
#define _GNU_SOURCE 




# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 31 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
#define _STDARG_H 
#define _ANSI_STDARG_H_ 

#undef __need___va_list
# 47 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v,l) __builtin_va_arg(v,l)


#define va_copy(d,s) __builtin_va_copy(d,s)

#define __va_copy(d,s) __builtin_va_copy(d,s)
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;





#define _VA_LIST_ 


#define _VA_LIST 


#define _VA_LIST_DEFINED 


#define _VA_LIST_T_H 


#define __va_list__ 
# 255 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 1 3 4
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#define _SYS_FCNTL_H_ 
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#define O_RDONLY 0x0000
#define O_WRONLY 0x0001
#define O_RDWR 0x0002
#define O_ACCMODE 0x0003
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#define FREAD 0x00000001
#define FWRITE 0x00000002

#define O_NONBLOCK 0x00000004
#define O_APPEND 0x00000008

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_sync.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_sync.h" 3 4
#define O_SYNC 0x0080
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4


#define O_SHLOCK 0x00000010
#define O_EXLOCK 0x00000020
#define O_ASYNC 0x00000040
#define O_FSYNC O_SYNC
#define O_NOFOLLOW 0x00000100

#define O_CREAT 0x00000200
#define O_TRUNC 0x00000400
#define O_EXCL 0x00000800


#define O_EVTONLY 0x00008000



#define O_NOCTTY 0x00020000



#define O_DIRECTORY 0x00100000
#define O_SYMLINK 0x00200000



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_o_dsync.h" 3 4
#define O_DSYNC 0x400000
# 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4



#define O_CLOEXEC 0x01000000




#define O_NOFOLLOW_ANY 0x20000000







#define AT_FDCWD -2




#define AT_EACCESS 0x0010
#define AT_SYMLINK_NOFOLLOW 0x0020
#define AT_SYMLINK_FOLLOW 0x0040
#define AT_REMOVEDIR 0x0080

#define AT_REALDEV 0x0200
#define AT_FDONLY 0x0400





#define O_DP_GETRAWENCRYPTED 0x0001
#define O_DP_GETRAWUNENCRYPTED 0x0002
# 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#define FAPPEND O_APPEND
#define FASYNC O_ASYNC
#define FFSYNC O_FSYNC
#define FFDSYNC O_DSYNC
#define FNONBLOCK O_NONBLOCK
#define FNDELAY O_NONBLOCK
#define O_NDELAY O_NONBLOCK







#define CPF_OVERWRITE 0x0001
#define CPF_IGNORE_MODE 0x0002
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)







#define F_DUPFD 0
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
#define F_GETOWN 5
#define F_SETOWN 6
#define F_GETLK 7
#define F_SETLK 8
#define F_SETLKW 9

#define F_SETLKWTIMEOUT 10


#define F_FLUSH_DATA 40
#define F_CHKCLEAN 41
#define F_PREALLOCATE 42
#define F_SETSIZE 43
#define F_RDADVISE 44
#define F_RDAHEAD 45



#define F_NOCACHE 48
#define F_LOG2PHYS 49
#define F_GETPATH 50
#define F_FULLFSYNC 51
#define F_PATHPKG_CHECK 52
#define F_FREEZE_FS 53
#define F_THAW_FS 54
#define F_GLOBAL_NOCACHE 55


#define F_ADDSIGS 59


#define F_ADDFILESIGS 61

#define F_NODIRECT 62


#define F_GETPROTECTIONCLASS 63
#define F_SETPROTECTIONCLASS 64

#define F_LOG2PHYS_EXT 65

#define F_GETLKPID 66




#define F_SETBACKINGSTORE 70
#define F_GETPATH_MTMINFO 71

#define F_GETCODEDIR 72

#define F_SETNOSIGPIPE 73
#define F_GETNOSIGPIPE 74

#define F_TRANSCODEKEY 75

#define F_SINGLE_WRITER 76


#define F_GETPROTECTIONLEVEL 77

#define F_FINDSIGS 78


#define F_ADDFILESIGS_FOR_DYLD_SIM 83


#define F_BARRIERFSYNC 85


#define F_ADDFILESIGS_RETURN 97
#define F_CHECK_LV 98

#define F_PUNCHHOLE 99

#define F_TRIM_ACTIVE_FILE 100

#define F_SPECULATIVE_READ 101

#define F_GETPATH_NOFIRMLINK 102

#define F_ADDFILESIGS_INFO 103
#define F_ADDFILESUPPL 104
#define F_GETSIGSINFO 105


#define FCNTL_FS_SPECIFIC_BASE 0x00010000




#define F_DUPFD_CLOEXEC 67



#define FD_CLOEXEC 1


#define F_RDLCK 1
#define F_UNLCK 2
#define F_WRLCK 3






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 3 4
#define SEEK_HOLE 3



#define SEEK_DATA 4
# 326 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_s_ifmt.h" 3 4
#define S_IFMT 0170000
#define S_IFIFO 0010000
#define S_IFCHR 0020000
#define S_IFDIR 0040000
#define S_IFBLK 0060000
#define S_IFREG 0100000
#define S_IFLNK 0120000
#define S_IFSOCK 0140000

#define S_IFWHT 0160000




#define S_IRWXU 0000700
#define S_IRUSR 0000400
#define S_IWUSR 0000200
#define S_IXUSR 0000100

#define S_IRWXG 0000070
#define S_IRGRP 0000040
#define S_IWGRP 0000020
#define S_IXGRP 0000010

#define S_IRWXO 0000007
#define S_IROTH 0000004
#define S_IWOTH 0000002
#define S_IXOTH 0000001

#define S_ISUID 0004000
#define S_ISGID 0002000
#define S_ISVTX 0001000


#define S_ISTXT S_ISVTX
#define S_IREAD S_IRUSR
#define S_IWRITE S_IWUSR
#define S_IEXEC S_IXUSR
# 332 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 2 3 4




#define F_ALLOCATECONTIG 0x00000002
#define F_ALLOCATEALL 0x00000004



#define F_PEOFPOSMODE 3

#define F_VOLPOSMODE 4






struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timespec.h" 3 4
#define _STRUCT_TIMESPEC struct timespec



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
# 390 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/fcntl.h" 3 4
#define USER_FSIGNATURES_CDHASH_LEN 20
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






#define GETSIGSINFO_PLATFORM_BINARY 1


typedef struct fgetsigsinfo {
 off_t fg_file_start;
 int fg_info_request;
 int fg_sig_is_platform;
} fgetsigsinfo_t;



#define LOCK_SH 0x01
#define LOCK_EX 0x02
#define LOCK_NB 0x04
#define LOCK_UN 0x08



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

#define O_POPUP 0x80000000
#define O_ALERT 0x20000000







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
#define _FILESEC_T 
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


#define FILESEC_GUID FILESEC_UUID



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
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _FILESEC_REMOVE_ACL ((void *)1)


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 2 3 4
# 256 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_endian.h" 1 3 4

#define R_ENDIAN_H 







static inline unsigned char r_read_ble8(const void *src) {
 if (!src) {
  return 0xFFU;
 }
 return *(const unsigned char *)src;
}

static inline unsigned char r_read_at_ble8(const void *src, size_t offset) {
 return r_read_ble8 (((const unsigned char*)src) + offset);
}

static inline void r_write_ble8(void *dest, unsigned char val) {
 *(unsigned char *)dest = val;
}

static inline void r_write_at_ble8(void *dest, unsigned char val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_ble8 (d, val);
}



static inline unsigned char r_read_be8(const void *src) {
 return r_read_ble8 (src);
}

static inline unsigned char r_read_at_be8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_be8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_be8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_be16(const void *src) {
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[0]) << 8) | (((unsigned short)s[1]) << 0);
}

static inline unsigned short r_read_at_be16(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be16 (s);
}

static inline void r_write_be16(void *dest, unsigned short val) {
 r_write_be8 (dest, val >> 8);
 r_write_at_be8 (dest, (unsigned char)val, sizeof (unsigned char));
}

static inline void r_write_at_be16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be16 (d, val);
}

static inline unsigned int r_read_be32(const void *src) {
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[0]) << 24) | (((unsigned int)s[1]) << 16) |
  (((unsigned int)s[2]) << 8) | (((unsigned int)s[3]) << 0);
}

static inline unsigned int r_read_at_be32(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be32 (s);
}

static inline void r_write_be32(void *dest, unsigned int val) {
 r_write_be16 (dest, val >> 16);
 r_write_at_be16 (dest, val, sizeof (unsigned short));
}

static inline void r_write_be24(void *_dest, unsigned int val) {
 unsigned char *dest = (unsigned char*)_dest;
 r_write_be8 (dest++, val >> 16);
 r_write_be8 (dest++, val >> 8);
 r_write_be8 (dest, val);
}

static inline void r_write_at_be32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be32 (d, val);
}

static inline unsigned long long r_read_be64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_be32 (src))) << 32;
 val |= r_read_at_be32 (src, sizeof (unsigned int));
 return val;
}

static inline unsigned long long r_read_at_be64(const void *src, size_t offset) {
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_be64 (s);
}

static inline void r_write_be64(void *dest, unsigned long long val) {
 r_write_be32 (dest, val >> 32);
 r_write_at_be32 (dest, (unsigned int)val, sizeof (unsigned int));
}

static inline void r_write_at_be64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_be64 (d, val);
}



static inline unsigned char r_read_le8(const void *src) {
 if (!src) {
  return 0xFFU;
 }
 return r_read_ble8 (src);
}

static inline unsigned char r_read_at_le8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_le8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_le8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_le16(const void *src) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[1]) << 8) | (((unsigned short)s[0]) << 0);
}

static inline unsigned short r_read_at_le16(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_le16 (s);
}

static inline void r_write_le16(void *dest, unsigned short val) {
 r_write_le8 (dest, (unsigned char)val);
 r_write_at_le8 (dest, val >> 8, sizeof (unsigned char));
}

static inline void r_write_at_le16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char *)dest + offset;
 r_write_le16 (d, val);
}

static inline void r_write_le24(void *_dest, unsigned int val) {
 unsigned char* dest = (unsigned char*)_dest;
 r_write_le8 (dest++, val);
 r_write_le8 (dest++, val >> 8);
 r_write_le8 (dest, val >> 16);
}

static inline unsigned int r_read_le32(const void *src) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[3]) << 24) | (((unsigned int)s[2]) << 16) |
  (((unsigned int)s[1]) << 8) | (((unsigned int)s[0]) << 0);
}

static inline unsigned int r_read_at_le32(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_le32 (s);
}

static inline void r_write_le32(void *dest, unsigned int val) {
 r_write_le16 (dest, val);
 r_write_at_le16 (dest, val >> 16, sizeof (unsigned short));
}

static inline void r_write_at_le32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = ((unsigned char*)dest) + offset;
 r_write_le32 (d, val);
}

static inline unsigned long long r_read_le64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_at_le32 (src, sizeof (unsigned int)))) << 32;
 val |= r_read_le32 (src);
 return val;
}

static inline unsigned long long r_read_at_le64(const void *src, size_t offset) {
 const unsigned char *s = ((const unsigned char*)src) + offset;
 return r_read_le64 (s);
}

static inline void r_write_le64(void *dest, unsigned long long val) {
 r_write_le32 (dest, (unsigned int)val);
 r_write_at_le32 (dest, val >> 32, sizeof (unsigned int));
}

static inline void r_write_at_le64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_le64 (d, val);
}



static inline unsigned char r_read_me8(const void *src) {
 return src ? r_read_ble8 (src): 0xFFU;
}

static inline unsigned char r_read_at_me8(const void *src, size_t offset) {
 return r_read_at_ble8 (src, offset);
}

static inline void r_write_me8(void *dest, unsigned char val) {
 r_write_ble8 (dest, val);
}

static inline void r_write_at_me8(void *dest, unsigned char val, size_t offset) {
 r_write_at_ble8 (dest, val, offset);
}

static inline unsigned short r_read_me16(const void *src) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned short)s[0]) << 8) | (((unsigned short)s[1]) << 0);
}

static inline unsigned short r_read_at_me16(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_me16 (s);
}

static inline void r_write_me16(void *dest, unsigned short val) {
 r_write_me8 (dest, val >> 8);
 r_write_at_me8 (dest, (unsigned char)val, sizeof (unsigned char));
}

static inline void r_write_at_me16(void *dest, unsigned short val, size_t offset) {
 unsigned char *d = (unsigned char *)dest + offset;
 r_write_me16 (d, val);
}

static inline unsigned int r_read_me32(const void *src) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src;
 return (((unsigned int)s[2]) << 24) | (((unsigned int)s[1]) << 16) |
  (((unsigned int)s[0]) << 8) | (((unsigned int)s[1]) << 0);
}

static inline unsigned int r_read_at_me32(const void *src, size_t offset) {
 if (!src) {
  return 0xFFFFFFFFU;
 }
 const unsigned char *s = (const unsigned char*)src + offset;
 return r_read_me32 (s);
}

static inline void r_write_me32(void *dest, unsigned int val) {
 r_write_me16 (dest, val);
 r_write_at_me16 (dest, val >> 16, sizeof (unsigned short));
}

static inline void r_write_at_me32(void *dest, unsigned int val, size_t offset) {
 unsigned char *d = ((unsigned char*)dest) + offset;
 r_write_me32 (d, val);
}

static inline unsigned long long r_read_me64(const void *src) {
 unsigned long long val = ((unsigned long long)(r_read_at_me32 (src, sizeof (unsigned int)))) << 32;
 val |= r_read_me32 (src);
 return val;
}

static inline unsigned long long r_read_at_me64(const void *src, size_t offset) {
 const unsigned char *s = ((const unsigned char*)src) + offset;
 return r_read_me64 (s);
}

static inline void r_write_me64(void *dest, unsigned long long val) {
 r_write_me32 (dest, (unsigned int)val);
 r_write_at_me32 (dest, val >> 32, sizeof (unsigned int));
}

static inline void r_write_at_me64(void *dest, unsigned long long val, size_t offset) {
 unsigned char *d = (unsigned char*)dest + offset;
 r_write_me64 (d, val);
}



static inline unsigned short r_read_ble16(const void *src, _Bool big_endian) {
 return big_endian? r_read_be16 (src): r_read_le16 (src);
}

static inline unsigned int r_read_ble32(const void *src, _Bool big_endian) {
 return big_endian? r_read_be32 (src): r_read_le32 (src);
}

static inline unsigned long long r_read_ble64(const void *src, _Bool big_endian) {
 return big_endian? r_read_be64 (src): r_read_le64 (src);
}

static inline unsigned short r_read_at_ble16(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be16 (src, offset) : r_read_at_le16 (src, offset);
}

static inline unsigned int r_read_at_ble32(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be32 (src, offset) : r_read_at_le32 (src, offset);
}

static inline unsigned long long r_read_at_ble64(const void *src, size_t offset, _Bool big_endian) {
 return big_endian ? r_read_at_be64 (src, offset) : r_read_at_le64 (src, offset);
}

static inline unsigned long long r_read_ble(const void *src, _Bool big_endian, int size) {
 switch (size) {
 case 8:
  return (unsigned long long) ((const unsigned char*)src)[0];
 case 16:
  return r_read_ble16 (src, big_endian);
 case 32:
  return r_read_ble32 (src, big_endian);
 case 64:
  return r_read_ble64 (src, big_endian);
 default:
  return 0xFFFFFFFFFFFFFFFFULL;
 }
}

static inline void r_write_ble16(void *dest, unsigned short val, _Bool big_endian) {
 big_endian? r_write_be16 (dest, val): r_write_le16 (dest, val);
}

static inline void r_write_ble24(void *dest, unsigned int val, _Bool big_endian) {
 big_endian? r_write_be24 (dest, val): r_write_le24 (dest, val);
}

static inline void r_write_ble32(void *dest, unsigned int val, _Bool big_endian) {
 big_endian? r_write_be32 (dest, val): r_write_le32 (dest, val);
}

static inline void r_write_ble64(void *dest, unsigned long long val, _Bool big_endian) {
 big_endian? r_write_be64 (dest, val): r_write_le64 (dest, val);
}

static inline void r_write_ble(void *dst, unsigned long long val, _Bool big_endian, int size) {
 switch (size) {
 case 8:
  ((unsigned char*)dst)[0] = (unsigned char) val;
  break;
 case 16:
  r_write_ble16 (dst, (unsigned short) val, big_endian);
  break;
 case 24:
  r_write_ble24 (dst, (unsigned int) val, big_endian);
  break;
 case 32:
  r_write_ble32 (dst, (unsigned int) val, big_endian);
  break;
 case 64:
  r_write_ble64 (dst, val, big_endian);
  break;
 default:
  break;
 }
}


#define ut8p_b(x) ((x)[0])
#define ut8p_bw(x) ((x)[0]|((x)[1]<<8))
#define ut8p_bd(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24))
#define ut8p_bq(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24)|((x)[4]<<32)|((x)[5]<<40)|((x)[6]<<48)|((x)[7]<<56))
#define ut8p_lw(x) ((x)[1]|((x)[0]<<8))
#define ut8p_ld(x) ((x)[3]|((x)[2]<<8)|((x)[1]<<16)|((x)[0]<<24))
#define ut8p_lq(x) ((x)[7]|((x)[6]<<8)|((x)[5]<<16)|((x)[4]<<24)|((x)[3]<<32)|((x)[2]<<40)|((x)[1]<<48)|((x)[0]<<56))


static inline unsigned short r_swap_ut16(unsigned short val) {
 return (val << 8) | (val >> 8 );
}

static inline short r_swap_st16(short val) {
 val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | (val >> 16);
}

static inline unsigned int r_swap_ut32(unsigned int val) {
 val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | (val >> 16);
}

static inline int r_swap_st32(int val) {
 val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF );
 return (val << 16) | ((val >> 16) & 0xFFFF);
}

static inline unsigned long long r_swap_ut64(unsigned long long val) {
 val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
 val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
 return (val << 32) | (val >> 32);
}

static inline long long r_swap_st64(long long val) {
 val = ((val << 8) & 0xFF00FF00FF00FF00ULL ) | ((val >> 8) & 0x00FF00FF00FF00FFULL );
 val = ((val << 16) & 0xFFFF0000FFFF0000ULL ) | ((val >> 16) & 0x0000FFFF0000FFFFULL );
 return (val << 32) | ((val >> 32) & 0xFFFFFFFFULL);
}


static inline int UT64_ADD(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (0xFFFFFFFFFFFFFFFFULL - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT64_MUL(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (a && 0xFFFFFFFFFFFFFFFFULL / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT64_SUB(unsigned long long *r, unsigned long long a, unsigned long long b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT32_ADD(unsigned int *r, unsigned int a, unsigned int b) {
 if (0xFFFFFFFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT32_MUL(unsigned int *r, unsigned int a, unsigned int b) {
 if (a && 0xFFFFFFFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT32_SUB(unsigned int *r, unsigned int a, unsigned int b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT16_ADD(unsigned short *r, unsigned short a, unsigned short b) {
 if (0xFFFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT16_MUL(unsigned short *r, unsigned short a, unsigned short b) {
 if (a && 0xFFFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT16_SUB(unsigned short *r, unsigned short a, unsigned short b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}

static inline int UT8_ADD(unsigned char *r, unsigned char a, unsigned char b) {
 if (0xFFU - a < b) {
  return 0;
 }
 if (r) {
  *r = a + b;
 }
 return 1;
}

static inline int UT8_MUL(unsigned char *r, unsigned char a, unsigned char b) {
 if (a && 0xFFU / a < b) {
  return 0;
 }
 if (r) {
  *r = a * b;
 }
 return 1;
}

static inline int UT8_SUB(unsigned char *r, unsigned char a, unsigned char b) {
 if (b > a) {
  return 0;
 }
 if (r) {
  *r = a - b;
 }
 return 1;
}
# 257 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4





#define TODO(x) eprintf(__func__"  " x)


#undef FS







#define FS "/"
#define R_SYS_DIR "/"
#define R_SYS_ENVSEP ":"
#define R_SYS_HOME "HOME"
#define R_SYS_TMP "TMPDIR"


#define R_JOIN_2_PATHS(p1,p2) p1 R_SYS_DIR p2
#define R_JOIN_3_PATHS(p1,p2,p3) p1 R_SYS_DIR p2 R_SYS_DIR p3
#define R_JOIN_4_PATHS(p1,p2,p3,p4) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4
#define R_JOIN_5_PATHS(p1,p2,p3,p4,p5) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4 R_SYS_DIR p5


#define __packed __attribute__((__packed__))


typedef int (*PrintfCallback)(const char *str, ...) __attribute__ ((format (printf, 1, 2)));


#define CTO(y,z) ((size_t) &((y*)0)->z)
#define CTA(x,y,z) (x+CTO(y,z))
#define CTI(x,y,z) (*((size_t*)(CTA(x,y,z))))
#define CTS(x,y,z,t,v) {t* _=(t*)CTA(x,y,z);*_=v;}





#define R_IPI 




#define R_HEAP 
# 319 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_API __attribute__((visibility("default")))





#define R_HIDDEN __attribute__((visibility("hidden")))

#define R_LIB_VERSION_HEADER(x) R_API const char *x ##_version(void)

#define R_LIB_VERSION(x) R_API const char *x ##_version(void) { return "" R2_GITTAP; }


#define BITS2BYTES(x) (((x)/8)+(((x)%8)?1:0))
#define ZERO_FILL(x) memset (&x, 0, sizeof (x))
#define R_NEWS0(x,y) (x*)calloc(y,sizeof(x))
#define R_NEWS(x,y) (x*)malloc(sizeof(x)*(y))
#define R_NEW0(x) (x*)calloc(1,sizeof(x))
#define R_NEW(x) (x*)malloc(sizeof(x))
#define R_NEWCOPY(x,y) (x*)r_new_copy(sizeof(x), y)

static inline void *r_new_copy(int size, void *data) {
 void *a = malloc(size);
 if (a) {
  __builtin___memcpy_chk (a, data, size, __builtin_object_size (a, 0));
 }
 return a;
}

#define R_NEW_COPY(x,y) x=(void*)malloc(sizeof(y));memcpy(x,y,sizeof(y))
#define R_MEM_ALIGN(x) ((void *)(size_t)(((ut64)(size_t)x) & 0xfffffffffffff000LL))
#define R_ARRAY_SIZE(x) (sizeof (x) / sizeof ((x)[0]))
#define R_PTR_MOVE(d,s) d=s;s=NULL;

#define R_PTR_ALIGN(v,t) ((char *)(((size_t)(v) ) & ~(t - 1)))


#define R_PTR_ALIGN_NEXT(v,t) ((char *)(((size_t)(v) + (t - 1)) & ~(t - 1)))



#define R_BIT_SET(x,y) (((ut8*)x)[y>>4] |= (1<<(y&0xf)))
#define R_BIT_UNSET(x,y) (((ut8*)x)[y>>4] &= ~(1<<(y&0xf)))
#define R_BIT_TOGGLE(x,y) ( R_BIT_CHK (x, y) ? R_BIT_UNSET (x, y): R_BIT_SET (x, y))



#define R_BIT_CHK(x,y) (*(x) & (1<<(y)))






#define PERROR_WITH_FILELINE 0
# 386 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define r_sys_perror(x) r_sys_perror_str(x);




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 1 3 4
# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define _SYS_STAT_H_ 
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

#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
# 158 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 231 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define st_atime st_atimespec.tv_sec
#define st_mtime st_mtimespec.tv_sec
#define st_ctime st_ctimespec.tv_sec
#define st_birthtime st_birthtimespec.tv_sec
# 249 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)

#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
# 275 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define S_TYPEISMQ(buf) (0)
#define S_TYPEISSEM(buf) (0)
#define S_TYPEISSHM(buf) (0)
# 293 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define S_TYPEISTMO(buf) (0)



#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)

#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)

#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

#define S_BLKSIZE 512






#define UF_SETTABLE 0x0000ffff
#define UF_NODUMP 0x00000001
#define UF_IMMUTABLE 0x00000002
#define UF_APPEND 0x00000004
#define UF_OPAQUE 0x00000008





#define UF_COMPRESSED 0x00000020



#define UF_TRACKED 0x00000040

#define UF_DATAVAULT 0x00000080



#define UF_HIDDEN 0x00008000




#define SF_SUPPORTED 0x009f0000
#define SF_SETTABLE 0x3fff0000
#define SF_SYNTHETIC 0xc0000000
#define SF_ARCHIVED 0x00010000
#define SF_IMMUTABLE 0x00020000
#define SF_APPEND 0x00040000
#define SF_RESTRICTED 0x00080000
#define SF_NOUNLINK 0x00100000
# 351 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define SF_FIRMLINK 0x00800000







#define SF_DATALESS 0x40000000
# 368 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/stat.h" 3 4
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define EF_NO_XATTRS 0x00000002
#define EF_IS_SYNC_ROOT 0x00000004
#define EF_IS_PURGEABLE 0x00000008
#define EF_IS_SPARSE 0x00000010
#define EF_IS_SYNTHETIC 0x00000020






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

#define UTIME_NOW -1
#define UTIME_OMIT -2

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




# 392 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/fcntl.h" 1 3 4
# 393 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 1 3 4
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/dirent.h" 3 4
#define _DIRENT_H_ 





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#define _SYS_DIRENT_H 







#define __DARWIN_MAXNAMLEN 255

#pragma pack(4)
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
#pragma pack()

#define __DARWIN_MAXPATHLEN 1024

#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/dirent.h" 3 4
struct dirent { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[1024]; };





#define d_fileno d_ino
#define MAXNAMLEN __DARWIN_MAXNAMLEN



#define DT_UNKNOWN 0
#define DT_FIFO 1
#define DT_CHR 2
#define DT_DIR 4
#define DT_BLK 6
#define DT_REG 8
#define DT_LNK 10
#define DT_SOCK 12
#define DT_WHT 14




#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define DTTOIF(dirtype) ((dirtype) << 12)
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




#define DIRBLKSIZ 1024


#define DTF_HIDEW 0x0001
#define DTF_NODUP 0x0002
#define DTF_REWIND 0x0004
#define __DTF_READALL 0x0008
#define __DTF_SKIPREAD 0x0010
#define __DTF_ATEND 0x0020







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


# 394 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
#define _UNISTD_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
#define _SYS_UNISTD_H_ 
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 3 4
#define _POSIX_VERSION 200112L
#define _POSIX2_VERSION 200112L



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_posix_vdisable.h" 3 4
#define _POSIX_VDISABLE ((unsigned char)'\377')
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4

#define _POSIX_THREAD_KEYS_MAX 128


#define F_OK 0
#define X_OK (1<<0)
#define W_OK (1<<1)
#define R_OK (1<<2)







#define _READ_OK (1<<9)
#define _WRITE_OK (1<<10)
#define _EXECUTE_OK (1<<11)
#define _DELETE_OK (1<<12)
#define _APPEND_OK (1<<13)
#define _RMFILE_OK (1<<14)
#define _RATTR_OK (1<<15)
#define _WATTR_OK (1<<16)
#define _REXT_OK (1<<17)
#define _WEXT_OK (1<<18)
#define _RPERM_OK (1<<19)
#define _WPERM_OK (1<<20)
#define _CHOWN_OK (1<<21)

#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/unistd.h" 2 3 4



#define L_SET SEEK_SET
#define L_INCR SEEK_CUR
#define L_XTND SEEK_END



struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
#define ACCESSX_MAX_DESCRIPTORS 100
#define ACCESSX_MAX_TABLESIZE (16 * 1024)



#define _PC_LINK_MAX 1
#define _PC_MAX_CANON 2
#define _PC_MAX_INPUT 3
#define _PC_NAME_MAX 4
#define _PC_PATH_MAX 5
#define _PC_PIPE_BUF 6
#define _PC_CHOWN_RESTRICTED 7
#define _PC_NO_TRUNC 8
#define _PC_VDISABLE 9


#define _PC_NAME_CHARS_MAX 10
#define _PC_CASE_SENSITIVE 11
#define _PC_CASE_PRESERVING 12
#define _PC_EXTENDED_SECURITY_NP 13
#define _PC_AUTH_OPAQUE_NP 14


#define _PC_2_SYMLINKS 15
#define _PC_ALLOC_SIZE_MIN 16
#define _PC_ASYNC_IO 17
#define _PC_FILESIZEBITS 18
#define _PC_PRIO_IO 19
#define _PC_REC_INCR_XFER_SIZE 20
#define _PC_REC_MAX_XFER_SIZE 21
#define _PC_REC_MIN_XFER_SIZE 22
#define _PC_REC_XFER_ALIGN 23
#define _PC_SYMLINK_MAX 24
#define _PC_SYNC_IO 25
#define _PC_XATTR_SIZE_BITS 26
#define _PC_MIN_HOLE_SIZE 27


#define _CS_PATH 1
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
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2




#define _XOPEN_VERSION 600
#define _XOPEN_XCU_VERSION 4



#define _POSIX_ADVISORY_INFO (-1)
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define _POSIX_BARRIERS (-1)
#define _POSIX_CHOWN_RESTRICTED 200112L
#define _POSIX_CLOCK_SELECTION (-1)
#define _POSIX_CPUTIME (-1)
#define _POSIX_FSYNC 200112L
#define _POSIX_IPV6 200112L
#define _POSIX_JOB_CONTROL 200112L
#define _POSIX_MAPPED_FILES 200112L
#define _POSIX_MEMLOCK (-1)
#define _POSIX_MEMLOCK_RANGE (-1)
#define _POSIX_MEMORY_PROTECTION 200112L
#define _POSIX_MESSAGE_PASSING (-1)
#define _POSIX_MONOTONIC_CLOCK (-1)
#define _POSIX_NO_TRUNC 200112L
#define _POSIX_PRIORITIZED_IO (-1)
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define _POSIX_RAW_SOCKETS (-1)
#define _POSIX_READER_WRITER_LOCKS 200112L
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_REGEXP 200112L
#define _POSIX_SAVED_IDS 200112L
#define _POSIX_SEMAPHORES (-1)
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define _POSIX_SHELL 200112L
#define _POSIX_SPAWN (-1)
#define _POSIX_SPIN_LOCKS (-1)
#define _POSIX_SPORADIC_SERVER (-1)
#define _POSIX_SYNCHRONIZED_IO (-1)
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define _POSIX_THREAD_CPUTIME (-1)
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define _POSIX_THREADS 200112L
#define _POSIX_TIMEOUTS (-1)
#define _POSIX_TIMERS (-1)
#define _POSIX_TRACE (-1)
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define _POSIX_TRACE_INHERIT (-1)
#define _POSIX_TRACE_LOG (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)





#define _POSIX2_C_BIND 200112L
#define _POSIX2_C_DEV 200112L
#define _POSIX2_CHAR_TERM 200112L
#define _POSIX2_FORT_DEV (-1)
#define _POSIX2_FORT_RUN 200112L
#define _POSIX2_LOCALEDEF 200112L
#define _POSIX2_PBS (-1)
#define _POSIX2_PBS_ACCOUNTING (-1)
#define _POSIX2_PBS_CHECKPOINT (-1)
#define _POSIX2_PBS_LOCATE (-1)
#define _POSIX2_PBS_MESSAGE (-1)
#define _POSIX2_PBS_TRACK (-1)
#define _POSIX2_SW_DEV 200112L
#define _POSIX2_UPE 200112L


#define __ILP32_OFF32 (-1)
#define __ILP32_OFFBIG (-1)

#define __LP64_OFF64 (1)
#define __LPBIG_OFFBIG (1)


#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG



#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG



#define _V6_ILP32_OFF32 __ILP32_OFF32
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define _V6_LP64_OFF64 __LP64_OFF64
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG




#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG



#define _XOPEN_CRYPT (1)
#define _XOPEN_ENH_I18N (1)
#define _XOPEN_LEGACY (-1)
#define _XOPEN_REALTIME (-1)
#define _XOPEN_REALTIME_THREADS (-1)
#define _XOPEN_SHM (1)
#define _XOPEN_STREAMS (-1)
#define _XOPEN_UNIX (1)



#define _SC_ARG_MAX 1
#define _SC_CHILD_MAX 2
#define _SC_CLK_TCK 3
#define _SC_NGROUPS_MAX 4
#define _SC_OPEN_MAX 5
#define _SC_JOB_CONTROL 6
#define _SC_SAVED_IDS 7
#define _SC_VERSION 8
#define _SC_BC_BASE_MAX 9
#define _SC_BC_DIM_MAX 10
#define _SC_BC_SCALE_MAX 11
#define _SC_BC_STRING_MAX 12
#define _SC_COLL_WEIGHTS_MAX 13
#define _SC_EXPR_NEST_MAX 14
#define _SC_LINE_MAX 15
#define _SC_RE_DUP_MAX 16
#define _SC_2_VERSION 17
#define _SC_2_C_BIND 18
#define _SC_2_C_DEV 19
#define _SC_2_CHAR_TERM 20
#define _SC_2_FORT_DEV 21
#define _SC_2_FORT_RUN 22
#define _SC_2_LOCALEDEF 23
#define _SC_2_SW_DEV 24
#define _SC_2_UPE 25
#define _SC_STREAM_MAX 26
#define _SC_TZNAME_MAX 27


#define _SC_ASYNCHRONOUS_IO 28
#define _SC_PAGESIZE 29
#define _SC_MEMLOCK 30
#define _SC_MEMLOCK_RANGE 31
#define _SC_MEMORY_PROTECTION 32
#define _SC_MESSAGE_PASSING 33
#define _SC_PRIORITIZED_IO 34
#define _SC_PRIORITY_SCHEDULING 35
#define _SC_REALTIME_SIGNALS 36
#define _SC_SEMAPHORES 37
#define _SC_FSYNC 38
#define _SC_SHARED_MEMORY_OBJECTS 39
#define _SC_SYNCHRONIZED_IO 40
#define _SC_TIMERS 41
#define _SC_AIO_LISTIO_MAX 42
#define _SC_AIO_MAX 43
#define _SC_AIO_PRIO_DELTA_MAX 44
#define _SC_DELAYTIMER_MAX 45
#define _SC_MQ_OPEN_MAX 46
#define _SC_MAPPED_FILES 47
#define _SC_RTSIG_MAX 48
#define _SC_SEM_NSEMS_MAX 49
#define _SC_SEM_VALUE_MAX 50
#define _SC_SIGQUEUE_MAX 51
#define _SC_TIMER_MAX 52



#define _SC_NPROCESSORS_CONF 57
#define _SC_NPROCESSORS_ONLN 58



#define _SC_2_PBS 59
#define _SC_2_PBS_ACCOUNTING 60
#define _SC_2_PBS_CHECKPOINT 61
#define _SC_2_PBS_LOCATE 62
#define _SC_2_PBS_MESSAGE 63
#define _SC_2_PBS_TRACK 64
#define _SC_ADVISORY_INFO 65
#define _SC_BARRIERS 66
#define _SC_CLOCK_SELECTION 67
#define _SC_CPUTIME 68
#define _SC_FILE_LOCKING 69
#define _SC_GETGR_R_SIZE_MAX 70
#define _SC_GETPW_R_SIZE_MAX 71
#define _SC_HOST_NAME_MAX 72
#define _SC_LOGIN_NAME_MAX 73
#define _SC_MONOTONIC_CLOCK 74
#define _SC_MQ_PRIO_MAX 75
#define _SC_READER_WRITER_LOCKS 76
#define _SC_REGEXP 77
#define _SC_SHELL 78
#define _SC_SPAWN 79
#define _SC_SPIN_LOCKS 80
#define _SC_SPORADIC_SERVER 81
#define _SC_THREAD_ATTR_STACKADDR 82
#define _SC_THREAD_ATTR_STACKSIZE 83
#define _SC_THREAD_CPUTIME 84
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define _SC_THREAD_KEYS_MAX 86
#define _SC_THREAD_PRIO_INHERIT 87
#define _SC_THREAD_PRIO_PROTECT 88
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define _SC_THREAD_PROCESS_SHARED 90
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define _SC_THREAD_SPORADIC_SERVER 92
#define _SC_THREAD_STACK_MIN 93
#define _SC_THREAD_THREADS_MAX 94
#define _SC_TIMEOUTS 95
#define _SC_THREADS 96
#define _SC_TRACE 97
#define _SC_TRACE_EVENT_FILTER 98
#define _SC_TRACE_INHERIT 99
#define _SC_TRACE_LOG 100
#define _SC_TTY_NAME_MAX 101
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _SC_V6_ILP32_OFF32 103
#define _SC_V6_ILP32_OFFBIG 104
#define _SC_V6_LP64_OFF64 105
#define _SC_V6_LPBIG_OFFBIG 106
#define _SC_IPV6 118
#define _SC_RAW_SOCKETS 119
#define _SC_SYMLOOP_MAX 120



#define _SC_ATEXIT_MAX 107
#define _SC_IOV_MAX 56
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _SC_XOPEN_CRYPT 108
#define _SC_XOPEN_ENH_I18N 109
#define _SC_XOPEN_LEGACY 110
#define _SC_XOPEN_REALTIME 111
#define _SC_XOPEN_REALTIME_THREADS 112
#define _SC_XOPEN_SHM 113
#define _SC_XOPEN_STREAMS 114
#define _SC_XOPEN_UNIX 115
#define _SC_XOPEN_VERSION 116
#define _SC_XOPEN_XCU_VERSION 121




#define _SC_XBS5_ILP32_OFF32 122
#define _SC_XBS5_ILP32_OFFBIG 123
#define _SC_XBS5_LP64_OFF64 124
#define _SC_XBS5_LPBIG_OFFBIG 125



#define _SC_SS_REPL_MAX 126
#define _SC_TRACE_EVENT_NAME_MAX 127
#define _SC_TRACE_NAME_MAX 128
#define _SC_TRACE_SYS_MAX 129
#define _SC_TRACE_USER_EVENT_MAX 130




#define _SC_PASS_MAX 131




#define _SC_PHYS_PAGES 200
# 377 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14




#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35



#define _CS_DARWIN_USER_DIR 65536
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define _CS_DARWIN_USER_CACHE_DIR 65538
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

# 527 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 3 4
#define F_ULOCK 0
#define F_LOCK 1
#define F_TLOCK 2
#define F_TEST 3







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
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4
#define _SYS_SELECT_H_ 
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 3 4



int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)




__asm("_" "pselect" "$1050")




;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_select.h" 3 4
#define _SYS__SELECT_H_ 





int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)





__asm("_" "select" "$1050")




;
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/select.h" 2 3 4


# 636 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/unistd.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_uuid_t.h" 3 4
#define _UUID_T 

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
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/gethostuuid.h" 3 4
#define __GETHOSTUUID_H 
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

#define SYNC_VOLUME_FULLSYNC 0x01
#define SYNC_VOLUME_WAIT 0x02

int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;


# 395 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 1 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
#define _SYS_TIME_H_ 
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_timeval64.h" 3 4
#define _STRUCT_TIMEVAL64 



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





#define ITIMER_REAL 0
#define ITIMER_VIRTUAL 1
#define ITIMER_PROF 2
# 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }



#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }




struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
#define DST_NONE 0
#define DST_USA 1
#define DST_AUST 2
#define DST_WET 3
#define DST_MET 4
#define DST_EET 5
#define DST_CAN 6


#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))



#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
# 167 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 3 4
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)




struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/time.h" 3 4
#define _TIME_H_ 
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


#define CLOCKS_PER_SEC 1000000







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







#define __CLOCK_AVAILABILITY 


typedef enum {
_CLOCK_REALTIME = 0,
#define CLOCK_REALTIME _CLOCK_REALTIME
_CLOCK_MONOTONIC = 6,
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC

_CLOCK_MONOTONIC_RAW = 4,
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
_CLOCK_MONOTONIC_RAW_APPROX = 5,
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
_CLOCK_UPTIME_RAW = 8,
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
_CLOCK_UPTIME_RAW_APPROX = 9,
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX

_CLOCK_PROCESS_CPUTIME_ID = 12,
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
_CLOCK_THREAD_CPUTIME_ID = 16
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);



__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);




int clock_settime(clockid_t __clock_id, const struct timespec *__tp);

#undef __CLOCK_AVAILABILITY







#define TIME_UTC 1

int timespec_get(struct timespec *ts, int base);



# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/time.h" 2 3 4





int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);



int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


# 396 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 2 3 4
# 404 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#define HAVE_EPRINTF 1



#define typeof(arg) __typeof__(arg)



#define r_offsetof(type,member) offsetof(type, member)
# 423 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_FREE(x) { free((void *)x); x = NULL; }




#define HAVE_REGEXP 1
# 443 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define PFMT64x "llx"
#define PFMT64d "lld"
#define PFMT64u "llu"
#define PFMT64o "llo"
#define PFMTSZx "zx"
#define PFMTSZd "zd"
#define PFMTSZu "zu"
#define PFMTSZo "zo"
#define LDBLFMT "Lf"
#define HHXFMT "hhx"


#define PFMTDPTR "td"

#define PFMT32x "x"
#define PFMT32d "d"
#define PFMT32u "u"
#define PFMT32o "o"


#define O_BINARY 0






#define R_SYS_BASE ((ut64)0x100000000)
# 494 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_SYS_ARCH "x86"
#define R_SYS_BITS (R_SYS_BITS_32 | R_SYS_BITS_64)
#define R_SYS_ENDIAN 0
# 565 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_SYS_ENDIAN_NONE 0
#define R_SYS_ENDIAN_LITTLE 1
#define R_SYS_ENDIAN_BIG 2
#define R_SYS_ENDIAN_BI 3

typedef enum {
 R_SYS_ARCH_NONE = 0,
 R_SYS_ARCH_X86,
 R_SYS_ARCH_ARM,
 R_SYS_ARCH_PPC,
 R_SYS_ARCH_M68K,
 R_SYS_ARCH_JAVA,
 R_SYS_ARCH_MIPS,
 R_SYS_ARCH_SPARC,
 R_SYS_ARCH_XAP,
 R_SYS_ARCH_MSIL,
 R_SYS_ARCH_OBJD,
 R_SYS_ARCH_BF,
 R_SYS_ARCH_SH,
 R_SYS_ARCH_AVR,
 R_SYS_ARCH_DALVIK,
 R_SYS_ARCH_Z80,
 R_SYS_ARCH_ARC,
 R_SYS_ARCH_I8080,
 R_SYS_ARCH_RAR,
 R_SYS_ARCH_8051,
 R_SYS_ARCH_TMS320,
 R_SYS_ARCH_EBC,
 R_SYS_ARCH_H8300,
 R_SYS_ARCH_CR16,
 R_SYS_ARCH_V850,
 R_SYS_ARCH_S390,
 R_SYS_ARCH_XCORE,
 R_SYS_ARCH_PROPELLER,
 R_SYS_ARCH_MSP430,
 R_SYS_ARCH_CRIS,
 R_SYS_ARCH_HPPA,
 R_SYS_ARCH_V810,
 R_SYS_ARCH_LM32,
 R_SYS_ARCH_RISCV
} RSysArch;

#define MONOTONIC_LINUX (__linux__ && _POSIX_C_SOURCE >= 199309L)
#define MONOTONIC_FREEBSD (__FreeBSD__ && __FreeBSD_version >= 1101000)
#define MONOTONIC_NETBSD (__NetBSD__ && __NetBSD_Version__ >= 700000000)
#define MONOTONIC_APPLE (__APPLE__ && CLOCK_MONOTONIC_RAW)
#define MONOTONIC_UNIX (MONOTONIC_APPLE || MONOTONIC_LINUX || MONOTONIC_FREEBSD || MONOTONIC_NETBSD)


#define HAS_CLOCK_NANOSLEEP 0







#define HAS_CLOCK_MONOTONIC 0
# 633 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
#define R_SYS_OS "darwin"
# 654 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/include/r_types.h" 3 4
static inline void r_run_call1(void *fcn, void *arg1) {
 ((void (*)(void *))(fcn))(arg1);
}

static inline void r_run_call2(void *fcn, void *arg1, void *arg2) {
 ((void (*)(void *, void *))(fcn))(arg1, arg2);
}

static inline void r_run_call3(void *fcn, void *arg1, void *arg2, void *arg3) {
 ((void (*)(void *, void *, void *))(fcn))(arg1, arg2, arg3);
}

static inline void r_run_call4(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4) {
 ((void (*)(void *, void *, void *, void *))(fcn))(arg1, arg2, arg3, arg4);
}

static inline void r_run_call5(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
 ((void (*)(void *, void *, void *, void *, void *))(fcn))(arg1, arg2, arg3, arg4, arg5);
}

static inline void r_run_call6(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6) {
 ((void (*)(void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6);
}

static inline void r_run_call7(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

static inline void r_run_call8(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

static inline void r_run_call9(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8, void *arg9) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

static inline void r_run_call10(void *fcn, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5,
 void *arg6, void *arg7, void *arg8, void *arg9, void *arg10) {
 ((void (*)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *))(fcn))
  (arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}





#define container_of(ptr,type,member) ((type *)((char *)(__typeof__(((type *)0)->member) *){ptr} - offsetof(type, member)))




typedef int RRef;

#define R_REF_NAME refcount
#define r_ref(x) x->R_REF_NAME++;
#define r_ref_init(x) x->R_REF_NAME = 1
#define r_unref(x,f) { assert (x->R_REF_NAME> 0); if (!--(x->R_REF_NAME)) { f(x); } }

#define R_REF_TYPE RRef R_REF_NAME
#define R_REF_FUNCTIONS(s,n) static inline void n ##_ref(s *x) { x->R_REF_NAME++; } static inline void n ##_unref(s *x) { r_unref (x, n ##_free); }
# 5 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 2
# 1 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 1

#define UUTILS_H 


#define C55PLUS_DEBUG 0


# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
char *strcat_dup(char *s1, char *s2, 
# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 3 4
                                    int 
# 7 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
                                         n_free);
char *get_hex_str(
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h" 3 4
                 unsigned int 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/utils.h"
                      hex_num);
# 6 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 2



# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
unsigned int 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
    get_ins_len(
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                unsigned char 
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                    opcode);



# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
    get_ins_part(
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                 unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                      pos, 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h" 3 4
                           unsigned int 
# 11 "project/radare2/libr/asm/arch/tms320/c55x_plus/ins.h"
                                len);
# 8 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 2


char *get_tc2_tc1(
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                 unsigned int 
# 10 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                      ins_bits) {
 char *res = "tc1";
 if (ins_bits) {
  if (ins_bits != 1) {
   fprintf(
# 14 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          __stderrp
# 14 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                , "Invalid instruction TC2 or TC1 (%d)\n", ins_bits);
   return 
# 15 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
         ((void *)0)
# 15 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
             ;
  }
  res = "tc2";
 }
 return strdup (res);
}

char *get_trans_reg(
# 22 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                   unsigned int 
# 22 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                        ins_bits) {
 char *res = 
# 23 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 23 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (ins_bits) {
 case 6:
  res = "trn0";
  break;
 case 7:
  res = "trn1";
  break;
 case 4:
  res = "trn2";
  break;
 case 5:
  res = "trn3";
  break;
 case 2:
  res = "trn4";
  break;
 case 3:
  res = "trn5";
  break;
 case 0:
  res = "trn6";
  break;
 case 1:
  res = "trn7";
  break;

 default:
  fprintf (
# 52 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          __stderrp
# 52 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                , "Invalid transaction instruction 0x%x\n", ins_bits);
 }
 return res? strdup (res): 
# 54 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                          ((void *)0)
# 54 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
}

char *get_AR_regs_class1(
# 57 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                        unsigned int 
# 57 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                             ins_bits) {
 
# 58 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
unsigned int 
# 58 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
     op = (ins_bits >> 4) & 7;
 char *res = (char *)calloc (1, 50);
 if (!res) {
  return 
# 61 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
        ((void *)0)
# 61 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
            ;
 }
 switch (op) {
 case 0:
  
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar-%ld", (long int)ins_bits & 0xF
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 65 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
  break;
 case 1:
  
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar+%ld", (long int)ins_bits & 0xF
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 68 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
  break;
 case 2:
  
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar%ld(t0)", (long int)ins_bits & 0xF
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 71 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                     ;
  break;
 case 3:
  
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*ar%ld", (long int)ins_bits & 0xF
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 74 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
  break;
 case 4:
  
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld-t0)", (long int)ins_bits & 0xF
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 77 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 case 5:
  
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld-t1)", (long int)ins_bits & 0xF
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 80 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 case 6:
  
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld+t0)", (long int)ins_bits & 0xF
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 83 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 case 7:
  
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 res
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "*(ar%ld+t1)", (long int)ins_bits & 0xF
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 86 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                      ;
  break;
 }
 return res;
}

char *get_AR_regs_class2(
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                        unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                             ins_bits, 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                       unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                            *ret_len, 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                                      unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                           ins_pos, 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                                                    unsigned int 
# 92 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                         idx) {
 
# 93 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
unsigned char 
# 93 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    op, op2, reg_num, type;
 char *res = 
# 94 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 94 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 op = ins_bits >> 6;
 op2 = ins_bits & 3;
 reg_num = (ins_bits >> 2) & 0xF;
 if (ret_len) {
  *ret_len = 0;
 }

 res = malloc(50);
 if (!res) {
  return 
# 105 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
        ((void *)0)
# 105 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
            ;
 }
 if(op2 == 2) {
  if(op) {
   
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "*ar%ld(short(#0x%lx))", (long int)reg_num, (long int)idx * op
# 109 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
                                           
# 110 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                          ;
  } else {
   
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "*ar%ld", (long int)reg_num
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
# 112 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                           ;
  }
 } else {
  type = (op >> 3 | 2 * op2);
  if(type == 6) {
   
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "@#0x%lx", (long int)idx * (reg_num | 16 * (op & 7))
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
# 117 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                    ;
  } else if(type == 7) {
   
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  __builtin___sprintf_chk (
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 0, __builtin_object_size (
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  res
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  , 2 > 1 ? 1 : 0), 
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
  "*sp(#0x%lx)", (long int)idx * (reg_num | 16 * (op & 7))
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
  )
# 119 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                        ;
  } else {
   type = idx | 16 * op;
   switch(type) {
   case 0:
    
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld-", (long int)reg_num
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 124 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 1:
    
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld+", (long int)reg_num
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 127 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 2:
    
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t0)", (long int)reg_num
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 130 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 3:
    
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t1)", (long int)reg_num
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 133 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 4:
    
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t0)", (long int)reg_num
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 136 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 5:
    
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t1)", (long int)reg_num
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 139 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 6:
    
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t0)", (long int)reg_num
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 142 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 7:
    
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t1)", (long int)reg_num
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 145 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 8:
    
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*-ar%ld", (long int)reg_num
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 148 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 9:
    
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*+ar%ld", (long int)reg_num
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 151 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                             ;
    break;
   case 10:
    
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t2)", (long int)reg_num
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 154 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 11:
    
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t3)", (long int)reg_num
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 157 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                ;
    break;
   case 12:
    
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t2)", (long int)reg_num
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 160 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 13:
    
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t3)", (long int)reg_num
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 163 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 14:
    
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t2)", (long int)reg_num
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 166 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 15:
    
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t3)", (long int)reg_num
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 169 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
    break;
   case 16:
    
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld-t0b)", (long int)reg_num
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 172 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
    break;
   case 17:
    
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*(ar%ld+t0b)", (long int)reg_num
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 175 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                  ;
    break;
   case 18:
    
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t0<<#1)", (long int)reg_num
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 178 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                    ;
    break;
   case 19:
    
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(t1<<#1)", (long int)reg_num
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 181 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                    ;
    break;
   case 23:
    
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   __builtin___sprintf_chk (
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 0, __builtin_object_size (
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   res
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   , 2 > 1 ? 1 : 0), 
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
   "*ar%ld(xar15)", (long int)reg_num
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
   )
# 184 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                   ;
    break;

   case 24:
   case 25:
   case 26:
   case 27:
    idx = get_ins_part(ins_pos, 2);
    if(ret_len) {
     *ret_len = 2;
    }
    switch (type) {
    case 24:
     
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*ar%ld(#%ld)", (long int)reg_num, (long int)op * idx
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 197 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                       ;
     break;
    case 25:
     
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*+ar%ld(#%ld)", (long int)reg_num, (long int)op * idx
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 200 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                        ;
     break;
    case 26:
     
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*abs16(#0x%lx)", (long int)idx
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 203 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
     break;
    default:
     
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*port(#0x%lx)", (long int)idx
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 206 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                 ;
     break;
    }
    break;
   case 28:
   case 29:
   case 30:
    idx = get_ins_part(ins_pos, 3);
    if(ret_len) {
     *ret_len = 3;
    }
    switch (type) {
    case 28:
     
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*ar%ld(#0x%lx)", (long int)reg_num, (long int)idx * op
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 219 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                         ;
     break;
    case 29:
     
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*+ar%ld(#0x%lx)", (long int)reg_num, (long int)idx * op
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 222 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                                                          ;
     break;
    default:
     
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    __builtin___sprintf_chk (
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 0, __builtin_object_size (
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    res
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    , 2 > 1 ? 1 : 0), 
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
    "*(#0x%lx)", (long int)idx
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
    )
# 225 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                            ;
     break;
    }

    break;
   }
  }
 }

 return res;
}

char *get_reg_pair(
# 237 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                  unsigned int 
# 237 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                       idx) {
 char *res = 
# 238 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 238 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 1: res = "ac0, ac2"; break;
 case 2: res = "ac1, ac3"; break;
 case 3: res = "pair(ac0), pair(ac2)"; break;
 case 4: res = "ar0, ar1"; break;
 case 5: res = "ar0, ar2"; break;
 case 6: res = "ar1, ar3"; break;
 case 7: res = "pair(ar0), pair(ar2)"; break;
 case 9: res = "t0, t2"; break;
 case 10: res = "t1, t3"; break;
 case 11: res = "pair(t0), pair(t2)"; break;
 case 21: res = "ar4, t0"; break;
 case 22: res = "ar5, t1"; break;
 case 23: res = "pair(ar4), pair(t0)"; break;
 case 25: res = "ar6, t2"; break;
 case 26: res = "ar7, t3"; break;
 case 27: res = "pair(ar6), pair(t2)"; break;
 case 31: res = "block(ar4), block(t0)"; break;
 default: res = 
# 258 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 258 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 261 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 261 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }

 return res;
}

char *get_reg_name_3(
# 268 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 268 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 269 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 269 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0: res = "ac0"; break;
 case 1: res = "ac1"; break;
 case 2: res = "ac2"; break;
 case 3: res = "ac3"; break;
 case 4: res = "ac4"; break;
 case 5: res = "ac5"; break;
 case 6: res = "ac6"; break;
 case 7: res = "ac7"; break;
 case 8: res = "ac8"; break;
 case 9: res = "ac9"; break;
 case 10: res = "ac10"; break;
 case 11: res = "ac11"; break;
 case 12: res = "ac12"; break;
 case 13: res = "ac13"; break;
 case 14: res = "ac14"; break;
 case 15: res = "ac15"; break;
 case 16: res = "ac16"; break;
 case 17: res = "ac17"; break;
 case 18: res = "ac18"; break;
 case 19: res = "ac19"; break;
 case 20: res = "ac20"; break;
 case 21: res = "ac21"; break;
 case 22: res = "ac22"; break;
 case 23: res = "ac23"; break;
 case 24: res = "ac24"; break;
 case 25: res = "ac25"; break;
 case 26: res = "ac26"; break;
 case 27: res = "ac27"; break;
 case 28: res = "ac28"; break;
 case 29: res = "ac29"; break;
 case 30: res = "ac30"; break;
 case 31: res = "ac31"; break;
 case 32: res = "xar0"; break;
 case 33: res = "xar1"; break;
 case 34: res = "xar2"; break;
 case 35: res = "xar3"; break;
 case 36: res = "xar4"; break;
 case 37: res = "xar5"; break;
 case 38: res = "xar6"; break;
 case 39: res = "xar7"; break;
 case 40: res = "xar8"; break;
 case 41: res = "xar9"; break;
 case 42: res = "xar10"; break;
 case 43: res = "xar11"; break;
 case 44: res = "xar12"; break;
 case 45: res = "xar13"; break;
 case 46: res = "xar14"; break;
 case 47: res = "xar15"; break;
 case 52: res = "xssp"; break;
 case 53: res = "xsp"; break;
 case 54: res = "xdp"; break;
 default: res = 
# 323 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 323 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 326 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 326 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }
 return res;
}


char *get_reg_name_2(
# 333 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 333 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 334 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 334 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0: res = "ar0"; break;
 case 1: res = "ar1"; break;
 case 2: res = "ar2"; break;
 case 3: res = "ar3"; break;
 case 4: res = "ar4"; break;
 case 5: res = "ar5"; break;
 case 6: res = "ar6"; break;
 case 7: res = "ar7"; break;
 case 8: res = "ar8"; break;
 case 9: res = "ar9"; break;
 case 10: res = "ar10"; break;
 case 11: res = "ar11"; break;
 case 12: res = "ar12"; break;
 case 13: res = "ar13"; break;
 case 14: res = "ar14"; break;
 case 15: res = "ar15"; break;
 case 16: res = "t0"; break;
 case 17: res = "t1"; break;
 case 18: res = "t2"; break;
 case 19: res = "t3"; break;
 case 20: res = "ssp"; break;
 case 21: res = "sp"; break;
 case 22: res = "dp"; break;
 case 32: res = "xar0"; break;
 case 33: res = "xar1"; break;
 case 34: res = "xar2"; break;
 case 35: res = "xar3"; break;
 case 36: res = "xar4"; break;
 case 37: res = "xar5"; break;
 case 38: res = "xar6"; break;
 case 39: res = "xar7"; break;
 case 40: res = "xar8"; break;
 case 41: res = "xar9"; break;
 case 42: res = "xar10"; break;
 case 43: res = "xar11"; break;
 case 44: res = "xar12"; break;
 case 45: res = "xar13"; break;
 case 46: res = "xar14"; break;
 case 47: res = "xar15"; break;
 case 52: res = "xssp"; break;
 case 53: res = "xsp"; break;
 case 54: res = "xdp"; break;
 default: res = 
# 379 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 379 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 382 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 382 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }

 return res;
}

char *get_reg_name_1(
# 389 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 389 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 390 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 390 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0: res = "ac0"; break;
 case 1: res = "ac1"; break;
 case 2: res = "ac2"; break;
 case 3: res = "ac3"; break;
 case 4: res = "ac4"; break;
 case 5: res = "ac5"; break;
 case 6: res = "ac6"; break;
 case 7: res = "ac7"; break;
 case 8: res = "ac8"; break;
 case 9: res = "ac9"; break;
 case 10: res = "ac10"; break;
 case 11: res = "ac11"; break;
 case 12: res = "ac12"; break;
 case 13: res = "ac13"; break;
 case 14: res = "ac14"; break;
 case 15: res = "ac15"; break;
 case 16: res = "ac16"; break;
 case 17: res = "ac17"; break;
 case 18: res = "ac18"; break;
 case 19: res = "ac19"; break;
 case 20: res = "ac20"; break;
 case 21: res = "ac21"; break;
 case 22: res = "ac22"; break;
 case 23: res = "ac23"; break;
 case 24: res = "ac24"; break;
 case 25: res = "ac25"; break;
 case 26: res = "ac26"; break;
 case 27: res = "ac27"; break;
 case 28: res = "ac28"; break;
 case 29: res = "ac29"; break;
 case 30: res = "ac30"; break;
 case 31: res = "ac31"; break;
 case 32: res = "ar0"; break;
 case 33: res = "ar1"; break;
 case 34: res = "ar2"; break;
 case 35: res = "ar3"; break;
 case 36: res = "ar4"; break;
 case 37: res = "ar5"; break;
 case 38: res = "ar6"; break;
 case 39: res = "ar7"; break;
 case 40: res = "ar8"; break;
 case 41: res = "ar9"; break;
 case 42: res = "ar10"; break;
 case 43: res = "ar11"; break;
 case 44: res = "ar12"; break;
 case 45: res = "ar13"; break;
 case 46: res = "ar14"; break;
 case 47: res = "ar15"; break;
 case 48: res = "t0"; break;
 case 49: res = "t1"; break;
 case 50: res = "t2"; break;
 case 51: res = "t3"; break;
 case 52: res = "ssp"; break;
 case 53: res = "sp"; break;
 case 54: res = "dp"; break;
 case 56: res = "csr"; break;
 case 57: res = "rptc"; break;
 case 58: res = "brc0"; break;
 case 59: res = "brc1"; break;
 case 62: res = "config"; break;
 case 63: res = "cpurev"; break;
 case 64: res = "ac0.h"; break;
 case 65: res = "ac1.h"; break;
 case 66: res = "ac2.h"; break;
 case 67: res = "ac3.h"; break;
 case 68: res = "ac4.h"; break;
 case 69: res = "ac5.h"; break;
 case 70: res = "ac6.h"; break;
 case 71: res = "ac7.h"; break;
 case 72: res = "ac8.h"; break;
 case 73: res = "ac9.h"; break;
 case 74: res = "ac10.h"; break;
 case 75: res = "ac11.h"; break;
 case 76: res = "ac12.h"; break;
 case 77: res = "ac13.h"; break;
 case 78: res = "ac14.h"; break;
 case 79: res = "ac15.h"; break;
 case 80: res = "ac16.h"; break;
 case 81: res = "ac17.h"; break;
 case 82: res = "ac18.h"; break;
 case 83: res = "ac19.h"; break;
 case 84: res = "ac20.h"; break;
 case 85: res = "ac21.h"; break;
 case 86: res = "ac22.h"; break;
 case 87: res = "ac23.h"; break;
 case 88: res = "ac24.h"; break;
 case 89: res = "ac25.h"; break;
 case 90: res = "ac26.h"; break;
 case 91: res = "ac27.h"; break;
 case 92: res = "ac28.h"; break;
 case 93: res = "ac29.h"; break;
 case 94: res = "ac30.h"; break;
 case 95: res = "ac31.h"; break;
 case 96: res = "ac0.l"; break;
 case 97: res = "ac1.l"; break;
 case 98: res = "ac2.l"; break;
 case 99: res = "ac3.l"; break;
 case 100: res = "ac4.l"; break;
 case 101: res = "ac5.l"; break;
 case 102: res = "ac6.l"; break;
 case 103: res = "ac7.l"; break;
 case 104: res = "ac8.l"; break;
 case 105: res = "ac9.l"; break;
 case 106: res = "ac10.l"; break;
 case 107: res = "ac11.l"; break;
 case 108: res = "ac12.l"; break;
 case 109: res = "ac13.l"; break;
 case 110: res = "ac14.l"; break;
 case 111: res = "ac15.l"; break;
 case 112: res = "ac16.l"; break;
 case 113: res = "ac17.l"; break;
 case 114: res = "ac18.l"; break;
 case 115: res = "ac19.l"; break;
 case 116: res = "ac20.l"; break;
 case 117: res = "ac21.l"; break;
 case 118: res = "ac22.l"; break;
 case 119: res = "ac23.l"; break;
 case 120: res = "ac24.l"; break;
 case 121: res = "ac25.l"; break;
 case 122: res = "ac26.l"; break;
 case 123: res = "ac27.l"; break;
 case 124: res = "ac28.l"; break;
 case 125: res = "ac29.l"; break;
 case 126: res = "ac30.l"; break;
 case 127: res = "ac31.l"; break;
 case 128: res = "xar0"; break;
 case 129: res = "xar1"; break;
 case 130: res = "xar2"; break;
 case 131: res = "xar3"; break;
 case 132: res = "xar4"; break;
 case 133: res = "xar5"; break;
 case 134: res = "xar6"; break;
 case 135: res = "xar7"; break;
 case 136: res = "xar8"; break;
 case 137: res = "xar9"; break;
 case 138: res = "xar10"; break;
 case 139: res = "xar11"; break;
 case 140: res = "xar12"; break;
 case 141: res = "xar13"; break;
 case 142: res = "xar14"; break;
 case 143: res = "xar15"; break;
 case 148: res = "xssp"; break;
 case 149: res = "xsp"; break;
 case 150: res = "xdp"; break;
 case 152: res = "rsa0"; break;
 case 153: res = "rsa1"; break;
 case 154: res = "rea0"; break;
 case 155: res = "rea1"; break;
 case 156: res = "dbgpaddr"; break;
 case 157: res = "dbgpdata"; break;
 case 159: res = "reta"; break;
 case 160: res = "xar0.h"; break;
 case 161: res = "xar1.h"; break;
 case 162: res = "xar2.h"; break;
 case 163: res = "xar3.h"; break;
 case 164: res = "xar4.h"; break;
 case 165: res = "xar5.h"; break;
 case 166: res = "xar6.h"; break;
 case 167: res = "xar7.h"; break;
 case 168: res = "xar8.h"; break;
 case 169: res = "xar9.h"; break;
 case 170: res = "xar10.h"; break;
 case 171: res = "xar11.h"; break;
 case 172: res = "xar12.h"; break;
 case 173: res = "xar13.h"; break;
 case 174: res = "xar14.h"; break;
 case 175: res = "xar15.h"; break;
 case 180: res = "xssp.h"; break;
 case 181: res = "xsp.h"; break;
 case 182: res = "xdp.h"; break;
 case 183: res = "pdp"; break;
 case 184: res = "bsa01"; break;
 case 185: res = "bsa23"; break;
 case 186: res = "bsa45"; break;
 case 187: res = "bsa67"; break;
 case 188: res = "bsac"; break;
 case 189:
  res = "bkc";
  break;
 case 190: res = "bk03"; break;
 case 191: res = "bk47"; break;
 case 192: res = "ac0.g"; break;
 case 193: res = "ac1.g"; break;
 case 194: res = "ac2.g"; break;
 case 195: res = "ac3.g"; break;
 case 196: res = "ac4.g"; break;
 case 197: res = "ac5.g"; break;
 case 198: res = "ac6.g"; break;
 case 199: res = "ac7.g"; break;
 case 200: res = "ac8.g"; break;
 case 201: res = "ac9.g"; break;
 case 202: res = "ac10.g"; break;
 case 203: res = "ac11.g"; break;
 case 204: res = "ac12.g"; break;
 case 205: res = "ac13.g"; break;
 case 206: res = "ac14.g"; break;
 case 207: res = "ac15.g"; break;
 case 208: res = "ac16.g"; break;
 case 209: res = "ac17.g"; break;
 case 210: res = "ac18.g"; break;
 case 211: res = "ac19.g"; break;
 case 212: res = "ac20.g"; break;
 case 213: res = "ac21.g"; break;
 case 214: res = "ac22.g"; break;
 case 215: res = "ac23.g"; break;
 case 216: res = "ac24.g"; break;
 case 217: res = "ac25.g"; break;
 case 218: res = "ac26.g"; break;
 case 219: res = "ac27.g"; break;
 case 220: res = "ac28.g"; break;
 case 221: res = "ac29.g"; break;
 case 222: res = "ac30.g"; break;
 case 223: res = "ac31.g"; break;
 case 224: res = "st0"; break;
 case 225: res = "st1"; break;
 case 226: res = "st2"; break;
 case 227: res = "st3"; break;
 case 228: res = "st0_55"; break;
 case 229: res = "st1_55"; break;
 case 231: res = "st3_55"; break;
 case 232: res = "ier0"; break;
 case 233: res = "ier1"; break;
 case 234: res = "ifr0"; break;
 case 235: res = "ifr1"; break;
 case 236: res = "dbier0"; break;
 case 237: res = "dbier1"; break;
 case 238: res = "ivpd"; break;
 case 239: res = "ivph"; break;
 case 240: res = "rsa0.h"; break;
 case 241: res = "rsa1.h"; break;
 case 242: res = "rea0.h"; break;
 case 243: res = "rea1.h"; break;
 case 244: res = "bios"; break;
 case 245: res = "brs1"; break;
 case 246: res = "iir"; break;
 case 247: res = "ber"; break;
 case 248: res = "rsa0.l"; break;
 case 249: res = "rsa1.l"; break;
 case 250: res = "rea0.l"; break;
 case 251: res = "rea1.l"; break;
 case 252: res = "tsdr"; break;
 default: res = 
# 634 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               ((void *)0)
# 634 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   ;
 }

 if (res != 
# 637 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 637 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
  res = strdup (res);
 }

 return res;
}


char *get_status_regs_and_bits(char *reg_arg, int reg_bit) {
 char *res = 
# 646 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 646 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;
 if (!strncmp (reg_arg, "ST0", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st0_dp07";
   break;
  case 1:
   res = "st0_dp08";
   break;
  case 2:
   res = "st0_dp09";
   break;
  case 3:
   res = "st0_dp10";
   break;
  case 4:
   res = "st0_dp11";
   break;
  case 5:
   res = "st0_dp12";
   break;
  case 6:
   res = "st0_dp13";
   break;
  case 7:
   res = "st0_dp14";
   break;
  case 8:
   res = "st0_dp15";
   break;
  case 9:
   res = "st0_acov1";
   break;
  case 10:
   res = "st0_acov0";
   break;
  case 11:
   res = "st0_carry";
   break;
  case 12:
   res = "st0_tc2";
   break;
  case 13:
   res = "st0_tc1";
   break;
  case 14:
   res = "st0_acov3";
   break;
  case 15:
   res = "st0_acov2";
   break;
  }
 } else if (!strncmp (reg_arg, "ST1", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st1_dr2_00";
   break;
  case 1:
   res = "st1_dr2_01";
   break;
  case 2:
   res = "st1_dr2_02";
   break;
  case 3:
   res = "st1_dr2_03";
   break;
  case 4:
   res = "st1_dr2_04";
   break;
  case 5:
   res = "st1_c54cm";
   break;
  case 6:
   res = "st1_frct";
   break;
  case 7:
   res = "st1_c16";
   break;
  case 8:
   res = "st1_sxmd";
   break;
  case 9:
   res = "st1_satd";
   break;
  case 10:
   res = "st1_m40";
   break;
  case 11:
   res = "st1_intm";
   break;
  case 12:
   res = "st1_hm";
   break;
  case 13:
   res = "st1_xf";
   break;
  case 14:
   res = "st1_cpl";
   break;
  case 15:
   res = "st1_braf";
   break;
  }
 } else if (!strncmp (reg_arg, "ST2", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st2_ar0lc";
   break;
  case 1:
   res = "st2_ar1lc";
   break;
  case 2:
   res = "st2_ar2lc";
   break;
  case 3:
   res = "st2_ar3lc";
   break;
  case 4:
   res = "st2_ar4lc";
   break;
  case 5:
   res = "st2_ar5lc";
   break;
  case 6:
   res = "st2_ar6lc";
   break;
  case 7:
   res = "st2_ar7lc";
   break;
  case 8:
   res = "st2_cdplc";
   break;
  case 9:
   res = "st2_govf";
   break;
  case 10:
   res = "st2_rdm";
   break;
  case 11:
   res = "st2_eallow";
   break;
  case 12:
   res = "st2_dbgm";
   break;
  case 13:
   res = "st2_xcnd";
   break;
  case 14:
   res = "st2_xcna";
   break;
  case 15:
   res = "st2_arms";
   break;
  }
 } else if (!strncmp (reg_arg, "ST3", 3)) {
  switch (reg_bit) {
  case 0:
   res = "st3_sst";
   break;
  case 1:
   res = "st3_smul";
   break;
  case 2:
   res = "st3_clkoff";
   break;
  case 3:
   res = "st3_bptr";
   break;
  case 4:
   res = "st3_avis";
   break;
  case 5:
   res = "st3_sata";
   break;
  case 6:
   res = "st3_mpnmc";
   break;
  case 7:
   res = "st3_cberr";
   break;
  case 8:
   res = "st3_homp";
   break;
  case 9:
   res = "st3_homr";
   break;
  case 10:
   res = "st3_homx";
   break;
  case 11:
   res = "st3_homy";
   break;
  case 12:
   res = "st3_hint";
   break;
  case 13:
   res = "st3_caclr";
   break;
  case 14:
   res = "st3_caen";
   break;
  case 15:
   res = "st3_cafrz";
   break;
  }
 }

 if (res != 
# 853 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
           ((void *)0)
# 853 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
               ) {
         res = strdup (res);
 }

 return res;
}


char *get_reg_name_4(
# 861 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                    unsigned int 
# 861 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                         idx) {
 char *res = 
# 862 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 862 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;

 switch (idx) {
 case 0:
  res = "ac0";
  break;
 case 1:
  res = "ac1";
  break;
 case 2:
  res = "ac2";
  break;
 case 3:
  res = "ac3";
  break;
 case 4:
  res = "ac4";
  break;
 case 5:
  res = "ac5";
  break;
 case 6:
  res = "ac6";
  break;
 case 7:
  res = "ac7";
  break;
 case 8:
  res = "t0";
  break;
 case 9:
  res = "t1";
  break;
 case 10:
  res = "t2";
  break;
 case 11:
  res = "t3";
  break;
 case 16:
  res = "ar0";
  break;
 case 17:
  res = "ar1";
  break;
 case 18:
  res = "ar2";
  break;
 case 19:
  res = "ar3";
  break;
 case 20:
  res = "ar4";
  break;
 case 21:
  res = "ar5";
  break;
 case 22:
  res = "ar6";
  break;
 case 23:
  res = "ar7";
  break;
 case 24:
  res = "ac0.l";
  break;
 case 25:
  res = "ac1.l";
  break;
 case 26:
  res = "ac2.l";
  break;
 case 27:
  res = "ac3.l";
  break;
 case 28:
  res = "ac4.l";
  break;
 case 29:
  res = "ac5.l";
  break;
 case 30:
  res = "ac6.l";
  break;
 case 31:
  res = "ac7.l";
  break;
 }
 return res? strdup (res): 
# 950 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                          ((void *)0)
# 950 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
}

char *get_opers(
# 953 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
               unsigned char 
# 953 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                   oper_byte) {
 switch (oper_byte) {
 case 0xE0u:
  return strdup ("overflow(ac0)");
 case 0xE1u:
  return strdup ("overflow(ac1)");
 case 0xE2u:
  return strdup ("overflow(ac2)");
 case 0xE3u:
  return strdup ("overflow(ac3)");
 case 0xE4u:
  return strdup ("tc1");
 case 0xE5u:
  return strdup ("tc2");
 case 0xE6u:
  return strdup ("carry");
 case 0xE7u:
  return strdup ("overflow(govf)");
 case 0xE8u:
  return strdup ("tc1 & tc2");
 case 0xE9u:
  return strdup ("tc1 & !tc2");
 case 0xEAu:
  return strdup ("!tc1 & tc2");
 case 0xEBu:
  return strdup ("!tc1 & !tc2");
 case 0xECu:
  return strdup ("word_mode");
 case 0xEDu:
  return strdup ("byte_mode");
 case 0xF0u:
  return strdup ("!overflow(ac0)");
 case 0xF1u:
  return strdup ("!overflow(ac1)");
 case 0xF2u:
  return strdup ("!overflow(ac2)");
 case 0xF3u:
  return strdup ("!overflow(ac3)");
 case 0xF4u:
  return strdup ("!tc1");
 case 0xF5u:
  return strdup ("!tc2");
 case 0xF6u:
  return strdup ("!carry");
 case 0xF7u:
  return strdup ("!overflow(govf)");
 case 0xF8u:
  return strdup ("tc1 | tc2");
 case 0xF9u:
  return strdup ("tc1 | !tc2");
 case 0xFAu:
  return strdup ("!tc1 | tc2");
 case 0xFBu:
  return strdup ("!tc1 | !tc2");
 case 0xFCu:
  return strdup ("tc1 ^ tc2");
 case 0xFDu:
  return strdup ("tc1 ^ !tc2");
 case 0xFEu:
  return strdup ("!tc1 ^ tc2");
 case 0xFFu:
  return strdup("!tc1 ^ !tc2");
 default: {
  
# 1016 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 unsigned char 
# 1016 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
     oper_type = oper_byte >> 5;
  if (oper_type != 6) {
   char *reg_name = get_reg_name_4 (oper_byte & 0x1F);
   switch (oper_type) {
   case 1u:
    return strcat_dup (reg_name, " != #0", 1);
   case 0u:
    return strcat_dup (reg_name, " == #0", 1);
   case 2u:
    return strcat_dup (reg_name, " < #0", 1);
   case 3u:
    return strcat_dup (reg_name, " >= #0", 1);
   case 4u:
    return strcat_dup (reg_name, " > #0", 1);
   case 5u:
    return strcat_dup (reg_name, " <= #0", 1);
   default:
    free (reg_name);
    return 
# 1034 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          ((void *)0)
# 1034 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
              ;
   }
  }
  char *reg_name = get_reg_name_1 ((oper_byte & 0xF) + 128);
  oper_type = (oper_byte >> 4) - 12;
  if (oper_type) {
   if (oper_type != 1) {
    free (reg_name);
    return 
# 1042 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
          ((void *)0)
# 1042 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
              ;
   }
   return strcat_dup (reg_name, " != #0", 1);
  } else {


   return strcat_dup (reg_name, " == #0", 1);
  }
 }
 }
}

char *get_cmp_op(
# 1054 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                unsigned int 
# 1054 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                     idx) {
 const char *res = 
# 1055 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                  ((void *)0)
# 1055 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                      ;
 switch (idx) {
 case 0: res = "=="; break;
 case 1: res = "!="; break;
 case 2: res = "<"; break;
 case 3: res = ">="; break;
 }
 return res? strdup (res): 
# 1062 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                          ((void *)0)
# 1062 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
}

char *get_sim_reg (char *reg_arg, 
# 1065 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
                                 unsigned int 
# 1065 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                                      ins_bits) {
 
# 1066 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
int 
# 1066 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
     code;
 char *res = 
# 1067 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
            ((void *)0)
# 1067 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                ;
 char *aux;
 code = ins_bits & 3;
 switch (code) {
 case 0:
  if(reg_arg && strchr (reg_arg, 'w')) {
   if(code == 62) {
    return strdup ("sim0");
   }
   if(code == 63) {
    return strdup ("sim0");
   }
  }
  aux = get_reg_name_1 (ins_bits >> 2);
  res = strcat_dup ("@", aux, 2);
  break;
 case 2:
  aux = (char *)calloc (1, 50);
  if (!aux) {
   return 
# 1086 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
         ((void *)0)
# 1086 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
             ;
  }
  
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 __builtin___sprintf_chk (
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 aux
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 0, __builtin_object_size (
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 aux
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 , 2 > 1 ? 1 : 0), 
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
 "@#0x%x", code
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c" 3 4
 )
# 1088 "project/radare2/libr/asm/arch/tms320/c55x_plus/decode_funcs.c"
                              ;
  res = aux;
  break;
 case 1:
 case 3:
  res = strdup ("<reserved>");
  break;
 }
 return res;
}