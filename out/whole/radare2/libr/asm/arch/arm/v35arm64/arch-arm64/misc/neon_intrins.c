# 0 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/misc/neon_intrins.c"
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
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/misc/neon_intrins.c"
int8x8_t vadd_s8(int8x8_t a, int8x8_t b);
int8x16_t vaddq_s8(int8x16_t a, int8x16_t b);
int16x4_t vadd_s16(int16x4_t a, int16x4_t b);
int16x8_t vaddq_s16(int16x8_t a, int16x8_t b);
int32x2_t vadd_s32(int32x2_t a, int32x2_t b);
int32x4_t vaddq_s32(int32x4_t a, int32x4_t b);
int64x1_t vadd_s64(int64x1_t a, int64x1_t b);
int64x2_t vaddq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vadd_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vaddq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vadd_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vaddq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vadd_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vaddq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vadd_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vaddq_u64(uint64x2_t a, uint64x2_t b);
float32x2_t vadd_f32(float32x2_t a, float32x2_t b);
float32x4_t vaddq_f32(float32x4_t a, float32x4_t b);
float64x1_t vadd_f64(float64x1_t a, float64x1_t b);
float64x2_t vaddq_f64(float64x2_t a, float64x2_t b);
int64_t vaddd_s64(int64_t a, int64_t b);
uint64_t vaddd_u64(uint64_t a, uint64_t b);
int16x8_t vaddl_s8(int8x8_t a, int8x8_t b);
int32x4_t vaddl_s16(int16x4_t a, int16x4_t b);
int64x2_t vaddl_s32(int32x2_t a, int32x2_t b);
uint16x8_t vaddl_u8(uint8x8_t a, uint8x8_t b);
uint32x4_t vaddl_u16(uint16x4_t a, uint16x4_t b);
uint64x2_t vaddl_u32(uint32x2_t a, uint32x2_t b);
int16x8_t vaddl_high_s8(int8x16_t a, int8x16_t b);
int32x4_t vaddl_high_s16(int16x8_t a, int16x8_t b);
int64x2_t vaddl_high_s32(int32x4_t a, int32x4_t b);
uint16x8_t vaddl_high_u8(uint8x16_t a, uint8x16_t b);
uint32x4_t vaddl_high_u16(uint16x8_t a, uint16x8_t b);
uint64x2_t vaddl_high_u32(uint32x4_t a, uint32x4_t b);
int16x8_t vaddw_s8(int16x8_t a, int8x8_t b);
int32x4_t vaddw_s16(int32x4_t a, int16x4_t b);
int64x2_t vaddw_s32(int64x2_t a, int32x2_t b);
uint16x8_t vaddw_u8(uint16x8_t a, uint8x8_t b);
uint32x4_t vaddw_u16(uint32x4_t a, uint16x4_t b);
uint64x2_t vaddw_u32(uint64x2_t a, uint32x2_t b);
int16x8_t vaddw_high_s8(int16x8_t a, int8x16_t b);
int32x4_t vaddw_high_s16(int32x4_t a, int16x8_t b);
int64x2_t vaddw_high_s32(int64x2_t a, int32x4_t b);
uint16x8_t vaddw_high_u8(uint16x8_t a, uint8x16_t b);
uint32x4_t vaddw_high_u16(uint32x4_t a, uint16x8_t b);
uint64x2_t vaddw_high_u32(uint64x2_t a, uint32x4_t b);
int8x8_t vhadd_s8(int8x8_t a, int8x8_t b);
int8x16_t vhaddq_s8(int8x16_t a, int8x16_t b);
int16x4_t vhadd_s16(int16x4_t a, int16x4_t b);
int16x8_t vhaddq_s16(int16x8_t a, int16x8_t b);
int32x2_t vhadd_s32(int32x2_t a, int32x2_t b);
int32x4_t vhaddq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vhadd_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vhaddq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vhadd_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vhaddq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vhadd_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vhaddq_u32(uint32x4_t a, uint32x4_t b);
int8x8_t vrhadd_s8(int8x8_t a, int8x8_t b);
int8x16_t vrhaddq_s8(int8x16_t a, int8x16_t b);
int16x4_t vrhadd_s16(int16x4_t a, int16x4_t b);
int16x8_t vrhaddq_s16(int16x8_t a, int16x8_t b);
int32x2_t vrhadd_s32(int32x2_t a, int32x2_t b);
int32x4_t vrhaddq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vrhadd_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vrhaddq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vrhadd_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vrhaddq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vrhadd_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vrhaddq_u32(uint32x4_t a, uint32x4_t b);
int8x8_t vqadd_s8(int8x8_t a, int8x8_t b);
int8x16_t vqaddq_s8(int8x16_t a, int8x16_t b);
int16x4_t vqadd_s16(int16x4_t a, int16x4_t b);
int16x8_t vqaddq_s16(int16x8_t a, int16x8_t b);
int32x2_t vqadd_s32(int32x2_t a, int32x2_t b);
int32x4_t vqaddq_s32(int32x4_t a, int32x4_t b);
int64x1_t vqadd_s64(int64x1_t a, int64x1_t b);
int64x2_t vqaddq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vqadd_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vqaddq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vqadd_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vqaddq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vqadd_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vqaddq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vqadd_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vqaddq_u64(uint64x2_t a, uint64x2_t b);
int8_t vqaddb_s8(int8_t a, int8_t b);
int16_t vqaddh_s16(int16_t a, int16_t b);
int32_t vqadds_s32(int32_t a, int32_t b);
int64_t vqaddd_s64(int64_t a, int64_t b);
uint8_t vqaddb_u8(uint8_t a, uint8_t b);
uint16_t vqaddh_u16(uint16_t a, uint16_t b);
uint32_t vqadds_u32(uint32_t a, uint32_t b);
uint64_t vqaddd_u64(uint64_t a, uint64_t b);
int8x8_t vuqadd_s8(int8x8_t a, uint8x8_t b);
int8x16_t vuqaddq_s8(int8x16_t a, uint8x16_t b);
int16x4_t vuqadd_s16(int16x4_t a, uint16x4_t b);
int16x8_t vuqaddq_s16(int16x8_t a, uint16x8_t b);
int32x2_t vuqadd_s32(int32x2_t a, uint32x2_t b);
int32x4_t vuqaddq_s32(int32x4_t a, uint32x4_t b);
int64x1_t vuqadd_s64(int64x1_t a, uint64x1_t b);
int64x2_t vuqaddq_s64(int64x2_t a, uint64x2_t b);
int8_t vuqaddb_s8(int8_t a, uint8_t b);
int16_t vuqaddh_s16(int16_t a, uint16_t b);
int32_t vuqadds_s32(int32_t a, uint32_t b);
int64_t vuqaddd_s64(int64_t a, uint64_t b);
uint8x8_t vsqadd_u8(uint8x8_t a, int8x8_t b);
uint8x16_t vsqaddq_u8(uint8x16_t a, int8x16_t b);
uint16x4_t vsqadd_u16(uint16x4_t a, int16x4_t b);
uint16x8_t vsqaddq_u16(uint16x8_t a, int16x8_t b);
uint32x2_t vsqadd_u32(uint32x2_t a, int32x2_t b);
uint32x4_t vsqaddq_u32(uint32x4_t a, int32x4_t b);
uint64x1_t vsqadd_u64(uint64x1_t a, int64x1_t b);
uint64x2_t vsqaddq_u64(uint64x2_t a, int64x2_t b);
uint8_t vsqaddb_u8(uint8_t a, int8_t b);
uint16_t vsqaddh_u16(uint16_t a, int16_t b);
uint32_t vsqadds_u32(uint32_t a, int32_t b);
uint64_t vsqaddd_u64(uint64_t a, int64_t b);
int8x8_t vaddhn_s16(int16x8_t a, int16x8_t b);
int16x4_t vaddhn_s32(int32x4_t a, int32x4_t b);
int32x2_t vaddhn_s64(int64x2_t a, int64x2_t b);
uint8x8_t vaddhn_u16(uint16x8_t a, uint16x8_t b);
uint16x4_t vaddhn_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vaddhn_u64(uint64x2_t a, uint64x2_t b);
int8x16_t vaddhn_high_s16(int8x8_t r, int16x8_t a, int16x8_t b);
int16x8_t vaddhn_high_s32(int16x4_t r, int32x4_t a, int32x4_t b);
int32x4_t vaddhn_high_s64(int32x2_t r, int64x2_t a, int64x2_t b);
uint8x16_t vaddhn_high_u16(uint8x8_t r, uint16x8_t a, uint16x8_t b);
uint16x8_t vaddhn_high_u32(uint16x4_t r, uint32x4_t a, uint32x4_t b);
uint32x4_t vaddhn_high_u64(uint32x2_t r, uint64x2_t a, uint64x2_t b);
int8x8_t vraddhn_s16(int16x8_t a, int16x8_t b);
int16x4_t vraddhn_s32(int32x4_t a, int32x4_t b);
int32x2_t vraddhn_s64(int64x2_t a, int64x2_t b);
uint8x8_t vraddhn_u16(uint16x8_t a, uint16x8_t b);
uint16x4_t vraddhn_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vraddhn_u64(uint64x2_t a, uint64x2_t b);
int8x16_t vraddhn_high_s16(int8x8_t r, int16x8_t a, int16x8_t b);
int16x8_t vraddhn_high_s32(int16x4_t r, int32x4_t a, int32x4_t b);
int32x4_t vraddhn_high_s64(int32x2_t r, int64x2_t a, int64x2_t b);
uint8x16_t vraddhn_high_u16(uint8x8_t r, uint16x8_t a, uint16x8_t b);
uint16x8_t vraddhn_high_u32(uint16x4_t r, uint32x4_t a, uint32x4_t b);
uint32x4_t vraddhn_high_u64(uint32x2_t r, uint64x2_t a, uint64x2_t b);
int8x8_t vmul_s8(int8x8_t a, int8x8_t b);
int8x16_t vmulq_s8(int8x16_t a, int8x16_t b);
int16x4_t vmul_s16(int16x4_t a, int16x4_t b);
int16x8_t vmulq_s16(int16x8_t a, int16x8_t b);
int32x2_t vmul_s32(int32x2_t a, int32x2_t b);
int32x4_t vmulq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vmul_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vmulq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vmul_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vmulq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vmul_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vmulq_u32(uint32x4_t a, uint32x4_t b);
float32x2_t vmul_f32(float32x2_t a, float32x2_t b);
float32x4_t vmulq_f32(float32x4_t a, float32x4_t b);
poly8x8_t vmul_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vmulq_p8(poly8x16_t a, poly8x16_t b);
float64x1_t vmul_f64(float64x1_t a, float64x1_t b);
float64x2_t vmulq_f64(float64x2_t a, float64x2_t b);
float32x2_t vmulx_f32(float32x2_t a, float32x2_t b);
float32x4_t vmulxq_f32(float32x4_t a, float32x4_t b);
float64x1_t vmulx_f64(float64x1_t a, float64x1_t b);
float64x2_t vmulxq_f64(float64x2_t a, float64x2_t b);
float32_t vmulxs_f32(float32_t a, float32_t b);
float64_t vmulxd_f64(float64_t a, float64_t b);
float32x2_t vmulx_lane_f32(float32x2_t a, float32x2_t v, const int lane);
float32x4_t vmulxq_lane_f32(float32x4_t a, float32x2_t v, const int lane);
float64x1_t vmulx_lane_f64(float64x1_t a, float64x1_t v, const int lane);
float64x2_t vmulxq_lane_f64(float64x2_t a, float64x1_t v, const int lane);
float32_t vmulxs_lane_f32(float32_t a, float32x2_t v, const int lane);
float64_t vmulxd_lane_f64(float64_t a, float64x1_t v, const int lane);
float32x2_t vmulx_laneq_f32(float32x2_t a, float32x4_t v, const int lane);
float32x4_t vmulxq_laneq_f32(float32x4_t a, float32x4_t v, const int lane);
float64x1_t vmulx_laneq_f64(float64x1_t a, float64x2_t v, const int lane);
float64x2_t vmulxq_laneq_f64(float64x2_t a, float64x2_t v, const int lane);
float32_t vmulxs_laneq_f32(float32_t a, float32x4_t v, const int lane);
float64_t vmulxd_laneq_f64(float64_t a, float64x2_t v, const int lane);
float32x2_t vdiv_f32(float32x2_t a, float32x2_t b);
float32x4_t vdivq_f32(float32x4_t a, float32x4_t b);
float64x1_t vdiv_f64(float64x1_t a, float64x1_t b);
float64x2_t vdivq_f64(float64x2_t a, float64x2_t b);
int8x8_t vmla_s8(int8x8_t a, int8x8_t b, int8x8_t c);
int8x16_t vmlaq_s8(int8x16_t a, int8x16_t b, int8x16_t c);
int16x4_t vmla_s16(int16x4_t a, int16x4_t b, int16x4_t c);
int16x8_t vmlaq_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x2_t vmla_s32(int32x2_t a, int32x2_t b, int32x2_t c);
int32x4_t vmlaq_s32(int32x4_t a, int32x4_t b, int32x4_t c);
uint8x8_t vmla_u8(uint8x8_t a, uint8x8_t b, uint8x8_t c);
uint8x16_t vmlaq_u8(uint8x16_t a, uint8x16_t b, uint8x16_t c);
uint16x4_t vmla_u16(uint16x4_t a, uint16x4_t b, uint16x4_t c);
uint16x8_t vmlaq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t c);
uint32x2_t vmla_u32(uint32x2_t a, uint32x2_t b, uint32x2_t c);
uint32x4_t vmlaq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
float32x2_t vmla_f32(float32x2_t a, float32x2_t b, float32x2_t c);
float32x4_t vmlaq_f32(float32x4_t a, float32x4_t b, float32x4_t c);
float64x1_t vmla_f64(float64x1_t a, float64x1_t b, float64x1_t c);
float64x2_t vmlaq_f64(float64x2_t a, float64x2_t b, float64x2_t c);
int16x8_t vmlal_s8(int16x8_t a, int8x8_t b, int8x8_t c);
int32x4_t vmlal_s16(int32x4_t a, int16x4_t b, int16x4_t c);
int64x2_t vmlal_s32(int64x2_t a, int32x2_t b, int32x2_t c);
uint16x8_t vmlal_u8(uint16x8_t a, uint8x8_t b, uint8x8_t c);
uint32x4_t vmlal_u16(uint32x4_t a, uint16x4_t b, uint16x4_t c);
uint64x2_t vmlal_u32(uint64x2_t a, uint32x2_t b, uint32x2_t c);
int16x8_t vmlal_high_s8(int16x8_t a, int8x16_t b, int8x16_t c);
int32x4_t vmlal_high_s16(int32x4_t a, int16x8_t b, int16x8_t c);
int64x2_t vmlal_high_s32(int64x2_t a, int32x4_t b, int32x4_t c);
uint16x8_t vmlal_high_u8(uint16x8_t a, uint8x16_t b, uint8x16_t c);
uint32x4_t vmlal_high_u16(uint32x4_t a, uint16x8_t b, uint16x8_t c);
uint64x2_t vmlal_high_u32(uint64x2_t a, uint32x4_t b, uint32x4_t c);
int8x8_t vmls_s8(int8x8_t a, int8x8_t b, int8x8_t c);
int8x16_t vmlsq_s8(int8x16_t a, int8x16_t b, int8x16_t c);
int16x4_t vmls_s16(int16x4_t a, int16x4_t b, int16x4_t c);
int16x8_t vmlsq_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x2_t vmls_s32(int32x2_t a, int32x2_t b, int32x2_t c);
int32x4_t vmlsq_s32(int32x4_t a, int32x4_t b, int32x4_t c);
uint8x8_t vmls_u8(uint8x8_t a, uint8x8_t b, uint8x8_t c);
uint8x16_t vmlsq_u8(uint8x16_t a, uint8x16_t b, uint8x16_t c);
uint16x4_t vmls_u16(uint16x4_t a, uint16x4_t b, uint16x4_t c);
uint16x8_t vmlsq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t c);
uint32x2_t vmls_u32(uint32x2_t a, uint32x2_t b, uint32x2_t c);
uint32x4_t vmlsq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
float32x2_t vmls_f32(float32x2_t a, float32x2_t b, float32x2_t c);
float32x4_t vmlsq_f32(float32x4_t a, float32x4_t b, float32x4_t c);
float64x1_t vmls_f64(float64x1_t a, float64x1_t b, float64x1_t c);
float64x2_t vmlsq_f64(float64x2_t a, float64x2_t b, float64x2_t c);
int16x8_t vmlsl_s8(int16x8_t a, int8x8_t b, int8x8_t c);
int32x4_t vmlsl_s16(int32x4_t a, int16x4_t b, int16x4_t c);
int64x2_t vmlsl_s32(int64x2_t a, int32x2_t b, int32x2_t c);
uint16x8_t vmlsl_u8(uint16x8_t a, uint8x8_t b, uint8x8_t c);
uint32x4_t vmlsl_u16(uint32x4_t a, uint16x4_t b, uint16x4_t c);
uint64x2_t vmlsl_u32(uint64x2_t a, uint32x2_t b, uint32x2_t c);
int16x8_t vmlsl_high_s8(int16x8_t a, int8x16_t b, int8x16_t c);
int32x4_t vmlsl_high_s16(int32x4_t a, int16x8_t b, int16x8_t c);
int64x2_t vmlsl_high_s32(int64x2_t a, int32x4_t b, int32x4_t c);
uint16x8_t vmlsl_high_u8(uint16x8_t a, uint8x16_t b, uint8x16_t c);
uint32x4_t vmlsl_high_u16(uint32x4_t a, uint16x8_t b, uint16x8_t c);
uint64x2_t vmlsl_high_u32(uint64x2_t a, uint32x4_t b, uint32x4_t c);
float32x2_t vfma_f32(float32x2_t a, float32x2_t b, float32x2_t c);
float32x4_t vfmaq_f32(float32x4_t a, float32x4_t b, float32x4_t c);
float64x1_t vfma_f64(float64x1_t a, float64x1_t b, float64x1_t c);
float64x2_t vfmaq_f64(float64x2_t a, float64x2_t b, float64x2_t c);
float32x2_t vfma_lane_f32(float32x2_t a, float32x2_t b, float32x2_t v, const int lane);
float32x4_t vfmaq_lane_f32(float32x4_t a, float32x4_t b, float32x2_t v, const int lane);
float64x1_t vfma_lane_f64(float64x1_t a, float64x1_t b, float64x1_t v, const int lane);
float64x2_t vfmaq_lane_f64(float64x2_t a, float64x2_t b, float64x1_t v, const int lane);
float32_t vfmas_lane_f32(float32_t a, float32_t b, float32x2_t v, const int lane);
float64_t vfmad_lane_f64(float64_t a, float64_t b, float64x1_t v, const int lane);
float32x2_t vfma_laneq_f32(float32x2_t a, float32x2_t b, float32x4_t v, const int lane);
float32x4_t vfmaq_laneq_f32(float32x4_t a, float32x4_t b, float32x4_t v, const int lane);
float64x1_t vfma_laneq_f64(float64x1_t a, float64x1_t b, float64x2_t v, const int lane);
float64x2_t vfmaq_laneq_f64(float64x2_t a, float64x2_t b, float64x2_t v, const int lane);
float32_t vfmas_laneq_f32(float32_t a, float32_t b, float32x4_t v, const int lane);
float64_t vfmad_laneq_f64(float64_t a, float64_t b, float64x2_t v, const int lane);
float32x2_t vfms_f32(float32x2_t a, float32x2_t b, float32x2_t c);
float32x4_t vfmsq_f32(float32x4_t a, float32x4_t b, float32x4_t c);
float64x1_t vfms_f64(float64x1_t a, float64x1_t b, float64x1_t c);
float64x2_t vfmsq_f64(float64x2_t a, float64x2_t b, float64x2_t c);
float32x2_t vfms_lane_f32(float32x2_t a, float32x2_t b, float32x2_t v, const int lane);
float32x4_t vfmsq_lane_f32(float32x4_t a, float32x4_t b, float32x2_t v, const int lane);
float64x1_t vfms_lane_f64(float64x1_t a, float64x1_t b, float64x1_t v, const int lane);
float64x2_t vfmsq_lane_f64(float64x2_t a, float64x2_t b, float64x1_t v, const int lane);
float32_t vfmss_lane_f32(float32_t a, float32_t b, float32x2_t v, const int lane);
float64_t vfmsd_lane_f64(float64_t a, float64_t b, float64x1_t v, const int lane);
float32x2_t vfms_laneq_f32(float32x2_t a, float32x2_t b, float32x4_t v, const int lane);
float32x4_t vfmsq_laneq_f32(float32x4_t a, float32x4_t b, float32x4_t v, const int lane);
float64x1_t vfms_laneq_f64(float64x1_t a, float64x1_t b, float64x2_t v, const int lane);
float64x2_t vfmsq_laneq_f64(float64x2_t a, float64x2_t b, float64x2_t v, const int lane);
float32_t vfmss_laneq_f32(float32_t a, float32_t b, float32x4_t v, const int lane);
float64_t vfmsd_laneq_f64(float64_t a, float64_t b, float64x2_t v, const int lane);
int16x4_t vqdmulh_s16(int16x4_t a, int16x4_t b);
int16x8_t vqdmulhq_s16(int16x8_t a, int16x8_t b);
int32x2_t vqdmulh_s32(int32x2_t a, int32x2_t b);
int32x4_t vqdmulhq_s32(int32x4_t a, int32x4_t b);
int16_t vqdmulhh_s16(int16_t a, int16_t b);
int32_t vqdmulhs_s32(int32_t a, int32_t b);
int16x4_t vqrdmulh_s16(int16x4_t a, int16x4_t b);
int16x8_t vqrdmulhq_s16(int16x8_t a, int16x8_t b);
int32x2_t vqrdmulh_s32(int32x2_t a, int32x2_t b);
int32x4_t vqrdmulhq_s32(int32x4_t a, int32x4_t b);
int16_t vqrdmulhh_s16(int16_t a, int16_t b);
int32_t vqrdmulhs_s32(int32_t a, int32_t b);
int32x4_t vqdmlal_s16(int32x4_t a, int16x4_t b, int16x4_t c);
int64x2_t vqdmlal_s32(int64x2_t a, int32x2_t b, int32x2_t c);
int32_t vqdmlalh_s16(int32_t a, int16_t b, int16_t c);
int64_t vqdmlals_s32(int64_t a, int32_t b, int32_t c);
int32x4_t vqdmlal_high_s16(int32x4_t a, int16x8_t b, int16x8_t c);
int64x2_t vqdmlal_high_s32(int64x2_t a, int32x4_t b, int32x4_t c);
int32x4_t vqdmlsl_s16(int32x4_t a, int16x4_t b, int16x4_t c);
int64x2_t vqdmlsl_s32(int64x2_t a, int32x2_t b, int32x2_t c);
int32_t vqdmlslh_s16(int32_t a, int16_t b, int16_t c);
int64_t vqdmlsls_s32(int64_t a, int32_t b, int32_t c);
int32x4_t vqdmlsl_high_s16(int32x4_t a, int16x8_t b, int16x8_t c);
int64x2_t vqdmlsl_high_s32(int64x2_t a, int32x4_t b, int32x4_t c);
int16x8_t vmull_s8(int8x8_t a, int8x8_t b);
int32x4_t vmull_s16(int16x4_t a, int16x4_t b);
int64x2_t vmull_s32(int32x2_t a, int32x2_t b);
uint16x8_t vmull_u8(uint8x8_t a, uint8x8_t b);
uint32x4_t vmull_u16(uint16x4_t a, uint16x4_t b);
uint64x2_t vmull_u32(uint32x2_t a, uint32x2_t b);
poly16x8_t vmull_p8(poly8x8_t a, poly8x8_t b);
int16x8_t vmull_high_s8(int8x16_t a, int8x16_t b);
int32x4_t vmull_high_s16(int16x8_t a, int16x8_t b);
int64x2_t vmull_high_s32(int32x4_t a, int32x4_t b);
uint16x8_t vmull_high_u8(uint8x16_t a, uint8x16_t b);
uint32x4_t vmull_high_u16(uint16x8_t a, uint16x8_t b);
uint64x2_t vmull_high_u32(uint32x4_t a, uint32x4_t b);
poly16x8_t vmull_high_p8(poly8x16_t a, poly8x16_t b);
int32x4_t vqdmull_s16(int16x4_t a, int16x4_t b);
int64x2_t vqdmull_s32(int32x2_t a, int32x2_t b);
int32_t vqdmullh_s16(int16_t a, int16_t b);
int64_t vqdmulls_s32(int32_t a, int32_t b);
int32x4_t vqdmull_high_s16(int16x8_t a, int16x8_t b);
int64x2_t vqdmull_high_s32(int32x4_t a, int32x4_t b);
int8x8_t vsub_s8(int8x8_t a, int8x8_t b);
int8x16_t vsubq_s8(int8x16_t a, int8x16_t b);
int16x4_t vsub_s16(int16x4_t a, int16x4_t b);
int16x8_t vsubq_s16(int16x8_t a, int16x8_t b);
int32x2_t vsub_s32(int32x2_t a, int32x2_t b);
int32x4_t vsubq_s32(int32x4_t a, int32x4_t b);
int64x1_t vsub_s64(int64x1_t a, int64x1_t b);
int64x2_t vsubq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vsub_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vsubq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vsub_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vsubq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vsub_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vsubq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vsub_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vsubq_u64(uint64x2_t a, uint64x2_t b);
float32x2_t vsub_f32(float32x2_t a, float32x2_t b);
float32x4_t vsubq_f32(float32x4_t a, float32x4_t b);
float64x1_t vsub_f64(float64x1_t a, float64x1_t b);
float64x2_t vsubq_f64(float64x2_t a, float64x2_t b);
int64_t vsubd_s64(int64_t a, int64_t b);
uint64_t vsubd_u64(uint64_t a, uint64_t b);
int16x8_t vsubl_s8(int8x8_t a, int8x8_t b);
int32x4_t vsubl_s16(int16x4_t a, int16x4_t b);
int64x2_t vsubl_s32(int32x2_t a, int32x2_t b);
uint16x8_t vsubl_u8(uint8x8_t a, uint8x8_t b);
uint32x4_t vsubl_u16(uint16x4_t a, uint16x4_t b);
uint64x2_t vsubl_u32(uint32x2_t a, uint32x2_t b);
int16x8_t vsubl_high_s8(int8x16_t a, int8x16_t b);
int32x4_t vsubl_high_s16(int16x8_t a, int16x8_t b);
int64x2_t vsubl_high_s32(int32x4_t a, int32x4_t b);
uint16x8_t vsubl_high_u8(uint8x16_t a, uint8x16_t b);
uint32x4_t vsubl_high_u16(uint16x8_t a, uint16x8_t b);
uint64x2_t vsubl_high_u32(uint32x4_t a, uint32x4_t b);
int16x8_t vsubw_s8(int16x8_t a, int8x8_t b);
int32x4_t vsubw_s16(int32x4_t a, int16x4_t b);
int64x2_t vsubw_s32(int64x2_t a, int32x2_t b);
uint16x8_t vsubw_u8(uint16x8_t a, uint8x8_t b);
uint32x4_t vsubw_u16(uint32x4_t a, uint16x4_t b);
uint64x2_t vsubw_u32(uint64x2_t a, uint32x2_t b);
int16x8_t vsubw_high_s8(int16x8_t a, int8x16_t b);
int32x4_t vsubw_high_s16(int32x4_t a, int16x8_t b);
int64x2_t vsubw_high_s32(int64x2_t a, int32x4_t b);
uint16x8_t vsubw_high_u8(uint16x8_t a, uint8x16_t b);
uint32x4_t vsubw_high_u16(uint32x4_t a, uint16x8_t b);
uint64x2_t vsubw_high_u32(uint64x2_t a, uint32x4_t b);
int8x8_t vhsub_s8(int8x8_t a, int8x8_t b);
int8x16_t vhsubq_s8(int8x16_t a, int8x16_t b);
int16x4_t vhsub_s16(int16x4_t a, int16x4_t b);
int16x8_t vhsubq_s16(int16x8_t a, int16x8_t b);
int32x2_t vhsub_s32(int32x2_t a, int32x2_t b);
int32x4_t vhsubq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vhsub_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vhsubq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vhsub_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vhsubq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vhsub_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vhsubq_u32(uint32x4_t a, uint32x4_t b);
int8x8_t vqsub_s8(int8x8_t a, int8x8_t b);
int8x16_t vqsubq_s8(int8x16_t a, int8x16_t b);
int16x4_t vqsub_s16(int16x4_t a, int16x4_t b);
int16x8_t vqsubq_s16(int16x8_t a, int16x8_t b);
int32x2_t vqsub_s32(int32x2_t a, int32x2_t b);
int32x4_t vqsubq_s32(int32x4_t a, int32x4_t b);
int64x1_t vqsub_s64(int64x1_t a, int64x1_t b);
int64x2_t vqsubq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vqsub_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vqsubq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vqsub_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vqsubq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vqsub_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vqsubq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vqsub_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vqsubq_u64(uint64x2_t a, uint64x2_t b);
int8_t vqsubb_s8(int8_t a, int8_t b);
int16_t vqsubh_s16(int16_t a, int16_t b);
int32_t vqsubs_s32(int32_t a, int32_t b);
int64_t vqsubd_s64(int64_t a, int64_t b);
uint8_t vqsubb_u8(uint8_t a, uint8_t b);
uint16_t vqsubh_u16(uint16_t a, uint16_t b);
uint32_t vqsubs_u32(uint32_t a, uint32_t b);
uint64_t vqsubd_u64(uint64_t a, uint64_t b);
int8x8_t vsubhn_s16(int16x8_t a, int16x8_t b);
int16x4_t vsubhn_s32(int32x4_t a, int32x4_t b);
int32x2_t vsubhn_s64(int64x2_t a, int64x2_t b);
uint8x8_t vsubhn_u16(uint16x8_t a, uint16x8_t b);
uint16x4_t vsubhn_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vsubhn_u64(uint64x2_t a, uint64x2_t b);
int8x16_t vsubhn_high_s16(int8x8_t r, int16x8_t a, int16x8_t b);
int16x8_t vsubhn_high_s32(int16x4_t r, int32x4_t a, int32x4_t b);
int32x4_t vsubhn_high_s64(int32x2_t r, int64x2_t a, int64x2_t b);
uint8x16_t vsubhn_high_u16(uint8x8_t r, uint16x8_t a, uint16x8_t b);
uint16x8_t vsubhn_high_u32(uint16x4_t r, uint32x4_t a, uint32x4_t b);
uint32x4_t vsubhn_high_u64(uint32x2_t r, uint64x2_t a, uint64x2_t b);
int8x8_t vrsubhn_s16(int16x8_t a, int16x8_t b);
int16x4_t vrsubhn_s32(int32x4_t a, int32x4_t b);
int32x2_t vrsubhn_s64(int64x2_t a, int64x2_t b);
uint8x8_t vrsubhn_u16(uint16x8_t a, uint16x8_t b);
uint16x4_t vrsubhn_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vrsubhn_u64(uint64x2_t a, uint64x2_t b);
int8x16_t vrsubhn_high_s16(int8x8_t r, int16x8_t a, int16x8_t b);
int16x8_t vrsubhn_high_s32(int16x4_t r, int32x4_t a, int32x4_t b);
int32x4_t vrsubhn_high_s64(int32x2_t r, int64x2_t a, int64x2_t b);
uint8x16_t vrsubhn_high_u16(uint8x8_t r, uint16x8_t a, uint16x8_t b);
uint16x8_t vrsubhn_high_u32(uint16x4_t r, uint32x4_t a, uint32x4_t b);
uint32x4_t vrsubhn_high_u64(uint32x2_t r, uint64x2_t a, uint64x2_t b);
uint8x8_t vceq_s8(int8x8_t a, int8x8_t b);
uint8x16_t vceqq_s8(int8x16_t a, int8x16_t b);
uint16x4_t vceq_s16(int16x4_t a, int16x4_t b);
uint16x8_t vceqq_s16(int16x8_t a, int16x8_t b);
uint32x2_t vceq_s32(int32x2_t a, int32x2_t b);
uint32x4_t vceqq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vceq_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vceqq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vceq_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vceqq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vceq_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vceqq_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vceq_f32(float32x2_t a, float32x2_t b);
uint32x4_t vceqq_f32(float32x4_t a, float32x4_t b);
uint8x8_t vceq_p8(poly8x8_t a, poly8x8_t b);
uint8x16_t vceqq_p8(poly8x16_t a, poly8x16_t b);
uint64x1_t vceq_s64(int64x1_t a, int64x1_t b);
uint64x2_t vceqq_s64(int64x2_t a, int64x2_t b);
uint64x1_t vceq_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vceqq_u64(uint64x2_t a, uint64x2_t b);
uint64x1_t vceq_p64(poly64x1_t a, poly64x1_t b);
uint64x2_t vceqq_p64(poly64x2_t a, poly64x2_t b);
uint64x1_t vceq_f64(float64x1_t a, float64x1_t b);
uint64x2_t vceqq_f64(float64x2_t a, float64x2_t b);
uint64_t vceqd_s64(int64_t a, int64_t b);
uint64_t vceqd_u64(uint64_t a, uint64_t b);
uint32_t vceqs_f32(float32_t a, float32_t b);
uint64_t vceqd_f64(float64_t a, float64_t b);
uint8x8_t vceqz_s8(int8x8_t a);
uint8x16_t vceqzq_s8(int8x16_t a);
uint16x4_t vceqz_s16(int16x4_t a);
uint16x8_t vceqzq_s16(int16x8_t a);
uint32x2_t vceqz_s32(int32x2_t a);
uint32x4_t vceqzq_s32(int32x4_t a);
uint8x8_t vceqz_u8(uint8x8_t a);
uint8x16_t vceqzq_u8(uint8x16_t a);
uint16x4_t vceqz_u16(uint16x4_t a);
uint16x8_t vceqzq_u16(uint16x8_t a);
uint32x2_t vceqz_u32(uint32x2_t a);
uint32x4_t vceqzq_u32(uint32x4_t a);
uint32x2_t vceqz_f32(float32x2_t a);
uint32x4_t vceqzq_f32(float32x4_t a);
uint8x8_t vceqz_p8(poly8x8_t a);
uint8x16_t vceqzq_p8(poly8x16_t a);
uint64x1_t vceqz_s64(int64x1_t a);
uint64x2_t vceqzq_s64(int64x2_t a);
uint64x1_t vceqz_u64(uint64x1_t a);
uint64x2_t vceqzq_u64(uint64x2_t a);
uint64x1_t vceqz_p64(poly64x1_t a);
uint64x2_t vceqzq_p64(poly64x2_t a);
uint64x1_t vceqz_f64(float64x1_t a);
uint64x2_t vceqzq_f64(float64x2_t a);
uint64_t vceqzd_s64(int64_t a);
uint64_t vceqzd_u64(uint64_t a);
uint32_t vceqzs_f32(float32_t a);
uint64_t vceqzd_f64(float64_t a);
uint8x8_t vcge_s8(int8x8_t a, int8x8_t b);
uint8x16_t vcgeq_s8(int8x16_t a, int8x16_t b);
uint16x4_t vcge_s16(int16x4_t a, int16x4_t b);
uint16x8_t vcgeq_s16(int16x8_t a, int16x8_t b);
uint32x2_t vcge_s32(int32x2_t a, int32x2_t b);
uint32x4_t vcgeq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vcge_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vcgeq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vcge_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vcgeq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vcge_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vcgeq_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vcge_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcgeq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcge_s64(int64x1_t a, int64x1_t b);
uint64x2_t vcgeq_s64(int64x2_t a, int64x2_t b);
uint64x1_t vcge_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vcgeq_u64(uint64x2_t a, uint64x2_t b);
uint64x1_t vcge_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcgeq_f64(float64x2_t a, float64x2_t b);
uint64_t vcged_s64(int64_t a, int64_t b);
uint64_t vcged_u64(uint64_t a, uint64_t b);
uint32_t vcges_f32(float32_t a, float32_t b);
uint64_t vcged_f64(float64_t a, float64_t b);
uint8x8_t vcgez_s8(int8x8_t a);
uint8x16_t vcgezq_s8(int8x16_t a);
uint16x4_t vcgez_s16(int16x4_t a);
uint16x8_t vcgezq_s16(int16x8_t a);
uint32x2_t vcgez_s32(int32x2_t a);
uint32x4_t vcgezq_s32(int32x4_t a);
uint64x1_t vcgez_s64(int64x1_t a);
uint64x2_t vcgezq_s64(int64x2_t a);
uint32x2_t vcgez_f32(float32x2_t a);
uint32x4_t vcgezq_f32(float32x4_t a);
uint64x1_t vcgez_f64(float64x1_t a);
uint64x2_t vcgezq_f64(float64x2_t a);
uint64_t vcgezd_s64(int64_t a);
uint32_t vcgezs_f32(float32_t a);
uint64_t vcgezd_f64(float64_t a);
uint8x8_t vcle_s8(int8x8_t a, int8x8_t b);
uint8x16_t vcleq_s8(int8x16_t a, int8x16_t b);
uint16x4_t vcle_s16(int16x4_t a, int16x4_t b);
uint16x8_t vcleq_s16(int16x8_t a, int16x8_t b);
uint32x2_t vcle_s32(int32x2_t a, int32x2_t b);
uint32x4_t vcleq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vcle_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vcleq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vcle_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vcleq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vcle_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vcleq_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vcle_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcleq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcle_s64(int64x1_t a, int64x1_t b);
uint64x2_t vcleq_s64(int64x2_t a, int64x2_t b);
uint64x1_t vcle_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vcleq_u64(uint64x2_t a, uint64x2_t b);
uint64x1_t vcle_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcleq_f64(float64x2_t a, float64x2_t b);
uint64_t vcled_s64(int64_t a, int64_t b);
uint64_t vcled_u64(uint64_t a, uint64_t b);
uint32_t vcles_f32(float32_t a, float32_t b);
uint64_t vcled_f64(float64_t a, float64_t b);
uint8x8_t vclez_s8(int8x8_t a);
uint8x16_t vclezq_s8(int8x16_t a);
uint16x4_t vclez_s16(int16x4_t a);
uint16x8_t vclezq_s16(int16x8_t a);
uint32x2_t vclez_s32(int32x2_t a);
uint32x4_t vclezq_s32(int32x4_t a);
uint64x1_t vclez_s64(int64x1_t a);
uint64x2_t vclezq_s64(int64x2_t a);
uint32x2_t vclez_f32(float32x2_t a);
uint32x4_t vclezq_f32(float32x4_t a);
uint64x1_t vclez_f64(float64x1_t a);
uint64x2_t vclezq_f64(float64x2_t a);
uint64_t vclezd_s64(int64_t a);
uint32_t vclezs_f32(float32_t a);
uint64_t vclezd_f64(float64_t a);
uint8x8_t vcgt_s8(int8x8_t a, int8x8_t b);
uint8x16_t vcgtq_s8(int8x16_t a, int8x16_t b);
uint16x4_t vcgt_s16(int16x4_t a, int16x4_t b);
uint16x8_t vcgtq_s16(int16x8_t a, int16x8_t b);
uint32x2_t vcgt_s32(int32x2_t a, int32x2_t b);
uint32x4_t vcgtq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vcgt_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vcgtq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vcgt_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vcgtq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vcgt_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vcgtq_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vcgt_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcgtq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcgt_s64(int64x1_t a, int64x1_t b);
uint64x2_t vcgtq_s64(int64x2_t a, int64x2_t b);
uint64x1_t vcgt_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vcgtq_u64(uint64x2_t a, uint64x2_t b);
uint64x1_t vcgt_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcgtq_f64(float64x2_t a, float64x2_t b);
uint64_t vcgtd_s64(int64_t a, int64_t b);
uint64_t vcgtd_u64(uint64_t a, uint64_t b);
uint32_t vcgts_f32(float32_t a, float32_t b);
uint64_t vcgtd_f64(float64_t a, float64_t b);
uint8x8_t vcgtz_s8(int8x8_t a);
uint8x16_t vcgtzq_s8(int8x16_t a);
uint16x4_t vcgtz_s16(int16x4_t a);
uint16x8_t vcgtzq_s16(int16x8_t a);
uint32x2_t vcgtz_s32(int32x2_t a);
uint32x4_t vcgtzq_s32(int32x4_t a);
uint64x1_t vcgtz_s64(int64x1_t a);
uint64x2_t vcgtzq_s64(int64x2_t a);
uint32x2_t vcgtz_f32(float32x2_t a);
uint32x4_t vcgtzq_f32(float32x4_t a);
uint64x1_t vcgtz_f64(float64x1_t a);
uint64x2_t vcgtzq_f64(float64x2_t a);
uint64_t vcgtzd_s64(int64_t a);
uint32_t vcgtzs_f32(float32_t a);
uint64_t vcgtzd_f64(float64_t a);
uint8x8_t vclt_s8(int8x8_t a, int8x8_t b);
uint8x16_t vcltq_s8(int8x16_t a, int8x16_t b);
uint16x4_t vclt_s16(int16x4_t a, int16x4_t b);
uint16x8_t vcltq_s16(int16x8_t a, int16x8_t b);
uint32x2_t vclt_s32(int32x2_t a, int32x2_t b);
uint32x4_t vcltq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vclt_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vcltq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vclt_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vcltq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vclt_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vcltq_u32(uint32x4_t a, uint32x4_t b);
uint32x2_t vclt_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcltq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vclt_s64(int64x1_t a, int64x1_t b);
uint64x2_t vcltq_s64(int64x2_t a, int64x2_t b);
uint64x1_t vclt_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vcltq_u64(uint64x2_t a, uint64x2_t b);
uint64x1_t vclt_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcltq_f64(float64x2_t a, float64x2_t b);
uint64_t vcltd_s64(int64_t a, int64_t b);
uint64_t vcltd_u64(uint64_t a, uint64_t b);
uint32_t vclts_f32(float32_t a, float32_t b);
uint64_t vcltd_f64(float64_t a, float64_t b);
uint8x8_t vcltz_s8(int8x8_t a);
uint8x16_t vcltzq_s8(int8x16_t a);
uint16x4_t vcltz_s16(int16x4_t a);
uint16x8_t vcltzq_s16(int16x8_t a);
uint32x2_t vcltz_s32(int32x2_t a);
uint32x4_t vcltzq_s32(int32x4_t a);
uint64x1_t vcltz_s64(int64x1_t a);
uint64x2_t vcltzq_s64(int64x2_t a);
uint32x2_t vcltz_f32(float32x2_t a);
uint32x4_t vcltzq_f32(float32x4_t a);
uint64x1_t vcltz_f64(float64x1_t a);
uint64x2_t vcltzq_f64(float64x2_t a);
uint64_t vcltzd_s64(int64_t a);
uint32_t vcltzs_f32(float32_t a);
uint64_t vcltzd_f64(float64_t a);
uint32x2_t vcage_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcageq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcage_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcageq_f64(float64x2_t a, float64x2_t b);
uint32_t vcages_f32(float32_t a, float32_t b);
uint64_t vcaged_f64(float64_t a, float64_t b);
uint32x2_t vcale_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcaleq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcale_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcaleq_f64(float64x2_t a, float64x2_t b);
uint32_t vcales_f32(float32_t a, float32_t b);
uint64_t vcaled_f64(float64_t a, float64_t b);
uint32x2_t vcagt_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcagtq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcagt_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcagtq_f64(float64x2_t a, float64x2_t b);
uint32_t vcagts_f32(float32_t a, float32_t b);
uint64_t vcagtd_f64(float64_t a, float64_t b);
uint32x2_t vcalt_f32(float32x2_t a, float32x2_t b);
uint32x4_t vcaltq_f32(float32x4_t a, float32x4_t b);
uint64x1_t vcalt_f64(float64x1_t a, float64x1_t b);
uint64x2_t vcaltq_f64(float64x2_t a, float64x2_t b);
uint32_t vcalts_f32(float32_t a, float32_t b);
uint64_t vcaltd_f64(float64_t a, float64_t b);
uint8x8_t vtst_s8(int8x8_t a, int8x8_t b);
uint8x16_t vtstq_s8(int8x16_t a, int8x16_t b);
uint16x4_t vtst_s16(int16x4_t a, int16x4_t b);
uint16x8_t vtstq_s16(int16x8_t a, int16x8_t b);
uint32x2_t vtst_s32(int32x2_t a, int32x2_t b);
uint32x4_t vtstq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vtst_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vtstq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vtst_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vtstq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vtst_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vtstq_u32(uint32x4_t a, uint32x4_t b);
uint8x8_t vtst_p8(poly8x8_t a, poly8x8_t b);
uint8x16_t vtstq_p8(poly8x16_t a, poly8x16_t b);
uint64x1_t vtst_s64(int64x1_t a, int64x1_t b);
uint64x2_t vtstq_s64(int64x2_t a, int64x2_t b);
uint64x1_t vtst_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vtstq_u64(uint64x2_t a, uint64x2_t b);
uint64x1_t vtst_p64(poly64x1_t a, poly64x1_t b);
uint64x2_t vtstq_p64(poly64x2_t a, poly64x2_t b);
uint64_t vtstd_s64(int64_t a, int64_t b);
uint64_t vtstd_u64(uint64_t a, uint64_t b);
int8x8_t vabd_s8(int8x8_t a, int8x8_t b);
int8x16_t vabdq_s8(int8x16_t a, int8x16_t b);
int16x4_t vabd_s16(int16x4_t a, int16x4_t b);
int16x8_t vabdq_s16(int16x8_t a, int16x8_t b);
int32x2_t vabd_s32(int32x2_t a, int32x2_t b);
int32x4_t vabdq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vabd_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vabdq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vabd_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vabdq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vabd_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vabdq_u32(uint32x4_t a, uint32x4_t b);
float32x2_t vabd_f32(float32x2_t a, float32x2_t b);
float32x4_t vabdq_f32(float32x4_t a, float32x4_t b);
float64x1_t vabd_f64(float64x1_t a, float64x1_t b);
float64x2_t vabdq_f64(float64x2_t a, float64x2_t b);
float32_t vabds_f32(float32_t a, float32_t b);
float64_t vabdd_f64(float64_t a, float64_t b);
int16x8_t vabdl_s8(int8x8_t a, int8x8_t b);
int32x4_t vabdl_s16(int16x4_t a, int16x4_t b);
int64x2_t vabdl_s32(int32x2_t a, int32x2_t b);
uint16x8_t vabdl_u8(uint8x8_t a, uint8x8_t b);
uint32x4_t vabdl_u16(uint16x4_t a, uint16x4_t b);
uint64x2_t vabdl_u32(uint32x2_t a, uint32x2_t b);
int16x8_t vabdl_high_s8(int8x16_t a, int8x16_t b);
int32x4_t vabdl_high_s16(int16x8_t a, int16x8_t b);
int64x2_t vabdl_high_s32(int32x4_t a, int32x4_t b);
uint16x8_t vabdl_high_u8(uint8x16_t a, uint8x16_t b);
uint32x4_t vabdl_high_u16(uint16x8_t a, uint16x8_t b);
uint64x2_t vabdl_high_u32(uint32x4_t a, uint32x4_t b);
int8x8_t vaba_s8(int8x8_t a, int8x8_t b, int8x8_t c);
int8x16_t vabaq_s8(int8x16_t a, int8x16_t b, int8x16_t c);
int16x4_t vaba_s16(int16x4_t a, int16x4_t b, int16x4_t c);
int16x8_t vabaq_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x2_t vaba_s32(int32x2_t a, int32x2_t b, int32x2_t c);
int32x4_t vabaq_s32(int32x4_t a, int32x4_t b, int32x4_t c);
uint8x8_t vaba_u8(uint8x8_t a, uint8x8_t b, uint8x8_t c);
uint8x16_t vabaq_u8(uint8x16_t a, uint8x16_t b, uint8x16_t c);
uint16x4_t vaba_u16(uint16x4_t a, uint16x4_t b, uint16x4_t c);
uint16x8_t vabaq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t c);
uint32x2_t vaba_u32(uint32x2_t a, uint32x2_t b, uint32x2_t c);
uint32x4_t vabaq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
int16x8_t vabal_s8(int16x8_t a, int8x8_t b, int8x8_t c);
int32x4_t vabal_s16(int32x4_t a, int16x4_t b, int16x4_t c);
int64x2_t vabal_s32(int64x2_t a, int32x2_t b, int32x2_t c);
uint16x8_t vabal_u8(uint16x8_t a, uint8x8_t b, uint8x8_t c);
uint32x4_t vabal_u16(uint32x4_t a, uint16x4_t b, uint16x4_t c);
uint64x2_t vabal_u32(uint64x2_t a, uint32x2_t b, uint32x2_t c);
int16x8_t vabal_high_s8(int16x8_t a, int8x16_t b, int8x16_t c);
int32x4_t vabal_high_s16(int32x4_t a, int16x8_t b, int16x8_t c);
int64x2_t vabal_high_s32(int64x2_t a, int32x4_t b, int32x4_t c);
uint16x8_t vabal_high_u8(uint16x8_t a, uint8x16_t b, uint8x16_t c);
uint32x4_t vabal_high_u16(uint32x4_t a, uint16x8_t b, uint16x8_t c);
uint64x2_t vabal_high_u32(uint64x2_t a, uint32x4_t b, uint32x4_t c);
int8x8_t vmax_s8(int8x8_t a, int8x8_t b);
int8x16_t vmaxq_s8(int8x16_t a, int8x16_t b);
int16x4_t vmax_s16(int16x4_t a, int16x4_t b);
int16x8_t vmaxq_s16(int16x8_t a, int16x8_t b);
int32x2_t vmax_s32(int32x2_t a, int32x2_t b);
int32x4_t vmaxq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vmax_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vmaxq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vmax_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vmaxq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vmax_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vmaxq_u32(uint32x4_t a, uint32x4_t b);
float32x2_t vmax_f32(float32x2_t a, float32x2_t b);
float32x4_t vmaxq_f32(float32x4_t a, float32x4_t b);
float64x1_t vmax_f64(float64x1_t a, float64x1_t b);
float64x2_t vmaxq_f64(float64x2_t a, float64x2_t b);
int8x8_t vmin_s8(int8x8_t a, int8x8_t b);
int8x16_t vminq_s8(int8x16_t a, int8x16_t b);
int16x4_t vmin_s16(int16x4_t a, int16x4_t b);
int16x8_t vminq_s16(int16x8_t a, int16x8_t b);
int32x2_t vmin_s32(int32x2_t a, int32x2_t b);
int32x4_t vminq_s32(int32x4_t a, int32x4_t b);
uint8x8_t vmin_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vminq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vmin_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vminq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vmin_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vminq_u32(uint32x4_t a, uint32x4_t b);
float32x2_t vmin_f32(float32x2_t a, float32x2_t b);
float32x4_t vminq_f32(float32x4_t a, float32x4_t b);
float64x1_t vmin_f64(float64x1_t a, float64x1_t b);
float64x2_t vminq_f64(float64x2_t a, float64x2_t b);
float32x2_t vmaxnm_f32(float32x2_t a, float32x2_t b);
float32x4_t vmaxnmq_f32(float32x4_t a, float32x4_t b);
float64x1_t vmaxnm_f64(float64x1_t a, float64x1_t b);
float64x2_t vmaxnmq_f64(float64x2_t a, float64x2_t b);
float32x2_t vminnm_f32(float32x2_t a, float32x2_t b);
float32x4_t vminnmq_f32(float32x4_t a, float32x4_t b);
float64x1_t vminnm_f64(float64x1_t a, float64x1_t b);
float64x2_t vminnmq_f64(float64x2_t a, float64x2_t b);
int8x8_t vshl_s8(int8x8_t a, int8x8_t b);
int8x16_t vshlq_s8(int8x16_t a, int8x16_t b);
int16x4_t vshl_s16(int16x4_t a, int16x4_t b);
int16x8_t vshlq_s16(int16x8_t a, int16x8_t b);
int32x2_t vshl_s32(int32x2_t a, int32x2_t b);
int32x4_t vshlq_s32(int32x4_t a, int32x4_t b);
int64x1_t vshl_s64(int64x1_t a, int64x1_t b);
int64x2_t vshlq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vshl_u8(uint8x8_t a, int8x8_t b);
uint8x16_t vshlq_u8(uint8x16_t a, int8x16_t b);
uint16x4_t vshl_u16(uint16x4_t a, int16x4_t b);
uint16x8_t vshlq_u16(uint16x8_t a, int16x8_t b);
uint32x2_t vshl_u32(uint32x2_t a, int32x2_t b);
uint32x4_t vshlq_u32(uint32x4_t a, int32x4_t b);
uint64x1_t vshl_u64(uint64x1_t a, int64x1_t b);
uint64x2_t vshlq_u64(uint64x2_t a, int64x2_t b);
int64_t vshld_s64(int64_t a, int64_t b);
uint64_t vshld_u64(uint64_t a, int64_t b);
int8x8_t vqshl_s8(int8x8_t a, int8x8_t b);
int8x16_t vqshlq_s8(int8x16_t a, int8x16_t b);
int16x4_t vqshl_s16(int16x4_t a, int16x4_t b);
int16x8_t vqshlq_s16(int16x8_t a, int16x8_t b);
int32x2_t vqshl_s32(int32x2_t a, int32x2_t b);
int32x4_t vqshlq_s32(int32x4_t a, int32x4_t b);
int64x1_t vqshl_s64(int64x1_t a, int64x1_t b);
int64x2_t vqshlq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vqshl_u8(uint8x8_t a, int8x8_t b);
uint8x16_t vqshlq_u8(uint8x16_t a, int8x16_t b);
uint16x4_t vqshl_u16(uint16x4_t a, int16x4_t b);
uint16x8_t vqshlq_u16(uint16x8_t a, int16x8_t b);
uint32x2_t vqshl_u32(uint32x2_t a, int32x2_t b);
uint32x4_t vqshlq_u32(uint32x4_t a, int32x4_t b);
uint64x1_t vqshl_u64(uint64x1_t a, int64x1_t b);
uint64x2_t vqshlq_u64(uint64x2_t a, int64x2_t b);
int8_t vqshlb_s8(int8_t a, int8_t b);
int16_t vqshlh_s16(int16_t a, int16_t b);
int32_t vqshls_s32(int32_t a, int32_t b);
int64_t vqshld_s64(int64_t a, int64_t b);
uint8_t vqshlb_u8(uint8_t a, int8_t b);
uint16_t vqshlh_u16(uint16_t a, int16_t b);
uint32_t vqshls_u32(uint32_t a, int32_t b);
uint64_t vqshld_u64(uint64_t a, int64_t b);
int8x8_t vrshl_s8(int8x8_t a, int8x8_t b);
int8x16_t vrshlq_s8(int8x16_t a, int8x16_t b);
int16x4_t vrshl_s16(int16x4_t a, int16x4_t b);
int16x8_t vrshlq_s16(int16x8_t a, int16x8_t b);
int32x2_t vrshl_s32(int32x2_t a, int32x2_t b);
int32x4_t vrshlq_s32(int32x4_t a, int32x4_t b);
int64x1_t vrshl_s64(int64x1_t a, int64x1_t b);
int64x2_t vrshlq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vrshl_u8(uint8x8_t a, int8x8_t b);
uint8x16_t vrshlq_u8(uint8x16_t a, int8x16_t b);
uint16x4_t vrshl_u16(uint16x4_t a, int16x4_t b);
uint16x8_t vrshlq_u16(uint16x8_t a, int16x8_t b);
uint32x2_t vrshl_u32(uint32x2_t a, int32x2_t b);
uint32x4_t vrshlq_u32(uint32x4_t a, int32x4_t b);
uint64x1_t vrshl_u64(uint64x1_t a, int64x1_t b);
uint64x2_t vrshlq_u64(uint64x2_t a, int64x2_t b);
int64_t vrshld_s64(int64_t a, int64_t b);
uint64_t vrshld_u64(uint64_t a, int64_t b);
int8x8_t vqrshl_s8(int8x8_t a, int8x8_t b);
int8x16_t vqrshlq_s8(int8x16_t a, int8x16_t b);
int16x4_t vqrshl_s16(int16x4_t a, int16x4_t b);
int16x8_t vqrshlq_s16(int16x8_t a, int16x8_t b);
int32x2_t vqrshl_s32(int32x2_t a, int32x2_t b);
int32x4_t vqrshlq_s32(int32x4_t a, int32x4_t b);
int64x1_t vqrshl_s64(int64x1_t a, int64x1_t b);
int64x2_t vqrshlq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vqrshl_u8(uint8x8_t a, int8x8_t b);
uint8x16_t vqrshlq_u8(uint8x16_t a, int8x16_t b);
uint16x4_t vqrshl_u16(uint16x4_t a, int16x4_t b);
uint16x8_t vqrshlq_u16(uint16x8_t a, int16x8_t b);
uint32x2_t vqrshl_u32(uint32x2_t a, int32x2_t b);
uint32x4_t vqrshlq_u32(uint32x4_t a, int32x4_t b);
uint64x1_t vqrshl_u64(uint64x1_t a, int64x1_t b);
uint64x2_t vqrshlq_u64(uint64x2_t a, int64x2_t b);
int8_t vqrshlb_s8(int8_t a, int8_t b);
int16_t vqrshlh_s16(int16_t a, int16_t b);
int32_t vqrshls_s32(int32_t a, int32_t b);
int64_t vqrshld_s64(int64_t a, int64_t b);
uint8_t vqrshlb_u8(uint8_t a, int8_t b);
uint16_t vqrshlh_u16(uint16_t a, int16_t b);
uint32_t vqrshls_u32(uint32_t a, int32_t b);
uint64_t vqrshld_u64(uint64_t a, int64_t b);
int8x8_t vshr_n_s8(int8x8_t a, const int n);
int8x16_t vshrq_n_s8(int8x16_t a, const int n);
int16x4_t vshr_n_s16(int16x4_t a, const int n);
int16x8_t vshrq_n_s16(int16x8_t a, const int n);
int32x2_t vshr_n_s32(int32x2_t a, const int n);
int32x4_t vshrq_n_s32(int32x4_t a, const int n);
int64x1_t vshr_n_s64(int64x1_t a, const int n);
int64x2_t vshrq_n_s64(int64x2_t a, const int n);
uint8x8_t vshr_n_u8(uint8x8_t a, const int n);
uint8x16_t vshrq_n_u8(uint8x16_t a, const int n);
uint16x4_t vshr_n_u16(uint16x4_t a, const int n);
uint16x8_t vshrq_n_u16(uint16x8_t a, const int n);
uint32x2_t vshr_n_u32(uint32x2_t a, const int n);
uint32x4_t vshrq_n_u32(uint32x4_t a, const int n);
uint64x1_t vshr_n_u64(uint64x1_t a, const int n);
uint64x2_t vshrq_n_u64(uint64x2_t a, const int n);
int64_t vshrd_n_s64(int64_t a, const int n);
uint64_t vshrd_n_u64(uint64_t a, const int n);
int8x8_t vshl_n_s8(int8x8_t a, const int n);
int8x16_t vshlq_n_s8(int8x16_t a, const int n);
int16x4_t vshl_n_s16(int16x4_t a, const int n);
int16x8_t vshlq_n_s16(int16x8_t a, const int n);
int32x2_t vshl_n_s32(int32x2_t a, const int n);
int32x4_t vshlq_n_s32(int32x4_t a, const int n);
int64x1_t vshl_n_s64(int64x1_t a, const int n);
int64x2_t vshlq_n_s64(int64x2_t a, const int n);
uint8x8_t vshl_n_u8(uint8x8_t a, const int n);
uint8x16_t vshlq_n_u8(uint8x16_t a, const int n);
uint16x4_t vshl_n_u16(uint16x4_t a, const int n);
uint16x8_t vshlq_n_u16(uint16x8_t a, const int n);
uint32x2_t vshl_n_u32(uint32x2_t a, const int n);
uint32x4_t vshlq_n_u32(uint32x4_t a, const int n);
uint64x1_t vshl_n_u64(uint64x1_t a, const int n);
uint64x2_t vshlq_n_u64(uint64x2_t a, const int n);
int64_t vshld_n_s64(int64_t a, const int n);
uint64_t vshld_n_u64(uint64_t a, const int n);
int8x8_t vrshr_n_s8(int8x8_t a, const int n);
int8x16_t vrshrq_n_s8(int8x16_t a, const int n);
int16x4_t vrshr_n_s16(int16x4_t a, const int n);
int16x8_t vrshrq_n_s16(int16x8_t a, const int n);
int32x2_t vrshr_n_s32(int32x2_t a, const int n);
int32x4_t vrshrq_n_s32(int32x4_t a, const int n);
int64x1_t vrshr_n_s64(int64x1_t a, const int n);
int64x2_t vrshrq_n_s64(int64x2_t a, const int n);
uint8x8_t vrshr_n_u8(uint8x8_t a, const int n);
uint8x16_t vrshrq_n_u8(uint8x16_t a, const int n);
uint16x4_t vrshr_n_u16(uint16x4_t a, const int n);
uint16x8_t vrshrq_n_u16(uint16x8_t a, const int n);
uint32x2_t vrshr_n_u32(uint32x2_t a, const int n);
uint32x4_t vrshrq_n_u32(uint32x4_t a, const int n);
uint64x1_t vrshr_n_u64(uint64x1_t a, const int n);
uint64x2_t vrshrq_n_u64(uint64x2_t a, const int n);
int64_t vrshrd_n_s64(int64_t a, const int n);
uint64_t vrshrd_n_u64(uint64_t a, const int n);
int8x8_t vsra_n_s8(int8x8_t a, int8x8_t b, const int n);
int8x16_t vsraq_n_s8(int8x16_t a, int8x16_t b, const int n);
int16x4_t vsra_n_s16(int16x4_t a, int16x4_t b, const int n);
int16x8_t vsraq_n_s16(int16x8_t a, int16x8_t b, const int n);
int32x2_t vsra_n_s32(int32x2_t a, int32x2_t b, const int n);
int32x4_t vsraq_n_s32(int32x4_t a, int32x4_t b, const int n);
int64x1_t vsra_n_s64(int64x1_t a, int64x1_t b, const int n);
int64x2_t vsraq_n_s64(int64x2_t a, int64x2_t b, const int n);
uint8x8_t vsra_n_u8(uint8x8_t a, uint8x8_t b, const int n);
uint8x16_t vsraq_n_u8(uint8x16_t a, uint8x16_t b, const int n);
uint16x4_t vsra_n_u16(uint16x4_t a, uint16x4_t b, const int n);
uint16x8_t vsraq_n_u16(uint16x8_t a, uint16x8_t b, const int n);
uint32x2_t vsra_n_u32(uint32x2_t a, uint32x2_t b, const int n);
uint32x4_t vsraq_n_u32(uint32x4_t a, uint32x4_t b, const int n);
uint64x1_t vsra_n_u64(uint64x1_t a, uint64x1_t b, const int n);
uint64x2_t vsraq_n_u64(uint64x2_t a, uint64x2_t b, const int n);
int64_t vsrad_n_s64(int64_t a, int64_t b, const int n);
uint64_t vsrad_n_u64(uint64_t a, uint64_t b, const int n);
int8x8_t vrsra_n_s8(int8x8_t a, int8x8_t b, const int n);
int8x16_t vrsraq_n_s8(int8x16_t a, int8x16_t b, const int n);
int16x4_t vrsra_n_s16(int16x4_t a, int16x4_t b, const int n);
int16x8_t vrsraq_n_s16(int16x8_t a, int16x8_t b, const int n);
int32x2_t vrsra_n_s32(int32x2_t a, int32x2_t b, const int n);
int32x4_t vrsraq_n_s32(int32x4_t a, int32x4_t b, const int n);
int64x1_t vrsra_n_s64(int64x1_t a, int64x1_t b, const int n);
int64x2_t vrsraq_n_s64(int64x2_t a, int64x2_t b, const int n);
uint8x8_t vrsra_n_u8(uint8x8_t a, uint8x8_t b, const int n);
uint8x16_t vrsraq_n_u8(uint8x16_t a, uint8x16_t b, const int n);
uint16x4_t vrsra_n_u16(uint16x4_t a, uint16x4_t b, const int n);
uint16x8_t vrsraq_n_u16(uint16x8_t a, uint16x8_t b, const int n);
uint32x2_t vrsra_n_u32(uint32x2_t a, uint32x2_t b, const int n);
uint32x4_t vrsraq_n_u32(uint32x4_t a, uint32x4_t b, const int n);
uint64x1_t vrsra_n_u64(uint64x1_t a, uint64x1_t b, const int n);
uint64x2_t vrsraq_n_u64(uint64x2_t a, uint64x2_t b, const int n);
int64_t vrsrad_n_s64(int64_t a, int64_t b, const int n);
uint64_t vrsrad_n_u64(uint64_t a, uint64_t b, const int n);
int8x8_t vqshl_n_s8(int8x8_t a, const int n);
int8x16_t vqshlq_n_s8(int8x16_t a, const int n);
int16x4_t vqshl_n_s16(int16x4_t a, const int n);
int16x8_t vqshlq_n_s16(int16x8_t a, const int n);
int32x2_t vqshl_n_s32(int32x2_t a, const int n);
int32x4_t vqshlq_n_s32(int32x4_t a, const int n);
int64x1_t vqshl_n_s64(int64x1_t a, const int n);
int64x2_t vqshlq_n_s64(int64x2_t a, const int n);
uint8x8_t vqshl_n_u8(uint8x8_t a, const int n);
uint8x16_t vqshlq_n_u8(uint8x16_t a, const int n);
uint16x4_t vqshl_n_u16(uint16x4_t a, const int n);
uint16x8_t vqshlq_n_u16(uint16x8_t a, const int n);
uint32x2_t vqshl_n_u32(uint32x2_t a, const int n);
uint32x4_t vqshlq_n_u32(uint32x4_t a, const int n);
uint64x1_t vqshl_n_u64(uint64x1_t a, const int n);
uint64x2_t vqshlq_n_u64(uint64x2_t a, const int n);
int8_t vqshlb_n_s8(int8_t a, const int n);
int16_t vqshlh_n_s16(int16_t a, const int n);
int32_t vqshls_n_s32(int32_t a, const int n);
int64_t vqshld_n_s64(int64_t a, const int n);
uint8_t vqshlb_n_u8(uint8_t a, const int n);
uint16_t vqshlh_n_u16(uint16_t a, const int n);
uint32_t vqshls_n_u32(uint32_t a, const int n);
uint64_t vqshld_n_u64(uint64_t a, const int n);
uint8x8_t vqshlu_n_s8(int8x8_t a, const int n);
uint8x16_t vqshluq_n_s8(int8x16_t a, const int n);
uint16x4_t vqshlu_n_s16(int16x4_t a, const int n);
uint16x8_t vqshluq_n_s16(int16x8_t a, const int n);
uint32x2_t vqshlu_n_s32(int32x2_t a, const int n);
uint32x4_t vqshluq_n_s32(int32x4_t a, const int n);
uint64x1_t vqshlu_n_s64(int64x1_t a, const int n);
uint64x2_t vqshluq_n_s64(int64x2_t a, const int n);
uint8_t vqshlub_n_s8(int8_t a, const int n);
uint16_t vqshluh_n_s16(int16_t a, const int n);
uint32_t vqshlus_n_s32(int32_t a, const int n);
uint64_t vqshlud_n_s64(int64_t a, const int n);
int8x8_t vshrn_n_s16(int16x8_t a, const int n);
int16x4_t vshrn_n_s32(int32x4_t a, const int n);
int32x2_t vshrn_n_s64(int64x2_t a, const int n);
uint8x8_t vshrn_n_u16(uint16x8_t a, const int n);
uint16x4_t vshrn_n_u32(uint32x4_t a, const int n);
uint32x2_t vshrn_n_u64(uint64x2_t a, const int n);
int8x16_t vshrn_high_n_s16(int8x8_t r, int16x8_t a, const int n);
int16x8_t vshrn_high_n_s32(int16x4_t r, int32x4_t a, const int n);
int32x4_t vshrn_high_n_s64(int32x2_t r, int64x2_t a, const int n);
uint8x16_t vshrn_high_n_u16(uint8x8_t r, uint16x8_t a, const int n);
uint16x8_t vshrn_high_n_u32(uint16x4_t r, uint32x4_t a, const int n);
uint32x4_t vshrn_high_n_u64(uint32x2_t r, uint64x2_t a, const int n);
uint8x8_t vqshrun_n_s16(int16x8_t a, const int n);
uint16x4_t vqshrun_n_s32(int32x4_t a, const int n);
uint32x2_t vqshrun_n_s64(int64x2_t a, const int n);
uint8_t vqshrunh_n_s16(int16_t a, const int n);
uint16_t vqshruns_n_s32(int32_t a, const int n);
uint32_t vqshrund_n_s64(int64_t a, const int n);
uint8x16_t vqshrun_high_n_s16(uint8x8_t r, int16x8_t a, const int n);
uint16x8_t vqshrun_high_n_s32(uint16x4_t r, int32x4_t a, const int n);
uint32x4_t vqshrun_high_n_s64(uint32x2_t r, int64x2_t a, const int n);
uint8x8_t vqrshrun_n_s16(int16x8_t a, const int n);
uint16x4_t vqrshrun_n_s32(int32x4_t a, const int n);
uint32x2_t vqrshrun_n_s64(int64x2_t a, const int n);
uint8_t vqrshrunh_n_s16(int16_t a, const int n);
uint16_t vqrshruns_n_s32(int32_t a, const int n);
uint32_t vqrshrund_n_s64(int64_t a, const int n);
uint8x16_t vqrshrun_high_n_s16(uint8x8_t r, int16x8_t a, const int n);
uint16x8_t vqrshrun_high_n_s32(uint16x4_t r, int32x4_t a, const int n);
uint32x4_t vqrshrun_high_n_s64(uint32x2_t r, int64x2_t a, const int n);
int8x8_t vqshrn_n_s16(int16x8_t a, const int n);
int16x4_t vqshrn_n_s32(int32x4_t a, const int n);
int32x2_t vqshrn_n_s64(int64x2_t a, const int n);
uint8x8_t vqshrn_n_u16(uint16x8_t a, const int n);
uint16x4_t vqshrn_n_u32(uint32x4_t a, const int n);
uint32x2_t vqshrn_n_u64(uint64x2_t a, const int n);
int8_t vqshrnh_n_s16(int16_t a, const int n);
int16_t vqshrns_n_s32(int32_t a, const int n);
int32_t vqshrnd_n_s64(int64_t a, const int n);
uint8_t vqshrnh_n_u16(uint16_t a, const int n);
uint16_t vqshrns_n_u32(uint32_t a, const int n);
uint32_t vqshrnd_n_u64(uint64_t a, const int n);
int8x16_t vqshrn_high_n_s16(int8x8_t r, int16x8_t a, const int n);
int16x8_t vqshrn_high_n_s32(int16x4_t r, int32x4_t a, const int n);
int32x4_t vqshrn_high_n_s64(int32x2_t r, int64x2_t a, const int n);
uint8x16_t vqshrn_high_n_u16(uint8x8_t r, uint16x8_t a, const int n);
uint16x8_t vqshrn_high_n_u32(uint16x4_t r, uint32x4_t a, const int n);
uint32x4_t vqshrn_high_n_u64(uint32x2_t r, uint64x2_t a, const int n);
int8x8_t vrshrn_n_s16(int16x8_t a, const int n);
int16x4_t vrshrn_n_s32(int32x4_t a, const int n);
int32x2_t vrshrn_n_s64(int64x2_t a, const int n);
uint8x8_t vrshrn_n_u16(uint16x8_t a, const int n);
uint16x4_t vrshrn_n_u32(uint32x4_t a, const int n);
uint32x2_t vrshrn_n_u64(uint64x2_t a, const int n);
int8x16_t vrshrn_high_n_s16(int8x8_t r, int16x8_t a, const int n);
int16x8_t vrshrn_high_n_s32(int16x4_t r, int32x4_t a, const int n);
int32x4_t vrshrn_high_n_s64(int32x2_t r, int64x2_t a, const int n);
uint8x16_t vrshrn_high_n_u16(uint8x8_t r, uint16x8_t a, const int n);
uint16x8_t vrshrn_high_n_u32(uint16x4_t r, uint32x4_t a, const int n);
uint32x4_t vrshrn_high_n_u64(uint32x2_t r, uint64x2_t a, const int n);
int8x8_t vqrshrn_n_s16(int16x8_t a, const int n);
int16x4_t vqrshrn_n_s32(int32x4_t a, const int n);
int32x2_t vqrshrn_n_s64(int64x2_t a, const int n);
uint8x8_t vqrshrn_n_u16(uint16x8_t a, const int n);
uint16x4_t vqrshrn_n_u32(uint32x4_t a, const int n);
uint32x2_t vqrshrn_n_u64(uint64x2_t a, const int n);
int8_t vqrshrnh_n_s16(int16_t a, const int n);
int16_t vqrshrns_n_s32(int32_t a, const int n);
int32_t vqrshrnd_n_s64(int64_t a, const int n);
uint8_t vqrshrnh_n_u16(uint16_t a, const int n);
uint16_t vqrshrns_n_u32(uint32_t a, const int n);
uint32_t vqrshrnd_n_u64(uint64_t a, const int n);
int8x16_t vqrshrn_high_n_s16(int8x8_t r, int16x8_t a, const int n);
int16x8_t vqrshrn_high_n_s32(int16x4_t r, int32x4_t a, const int n);
int32x4_t vqrshrn_high_n_s64(int32x2_t r, int64x2_t a, const int n);
uint8x16_t vqrshrn_high_n_u16(uint8x8_t r, uint16x8_t a, const int n);
uint16x8_t vqrshrn_high_n_u32(uint16x4_t r, uint32x4_t a, const int n);
uint32x4_t vqrshrn_high_n_u64(uint32x2_t r, uint64x2_t a, const int n);
int16x8_t vshll_n_s8(int8x8_t a, const int n);
int32x4_t vshll_n_s16(int16x4_t a, const int n);
int64x2_t vshll_n_s32(int32x2_t a, const int n);
uint16x8_t vshll_n_u8(uint8x8_t a, const int n);
uint32x4_t vshll_n_u16(uint16x4_t a, const int n);
uint64x2_t vshll_n_u32(uint32x2_t a, const int n);
int16x8_t vshll_high_n_s8(int8x16_t a, const int n);
int32x4_t vshll_high_n_s16(int16x8_t a, const int n);
int64x2_t vshll_high_n_s32(int32x4_t a, const int n);
uint16x8_t vshll_high_n_u8(uint8x16_t a, const int n);
uint32x4_t vshll_high_n_u16(uint16x8_t a, const int n);
uint64x2_t vshll_high_n_u32(uint32x4_t a, const int n);
int16x8_t vshll_n_s8(int8x8_t a, const int n);
int32x4_t vshll_n_s16(int16x4_t a, const int n);
int64x2_t vshll_n_s32(int32x2_t a, const int n);
uint16x8_t vshll_n_u8(uint8x8_t a, const int n);
uint32x4_t vshll_n_u16(uint16x4_t a, const int n);
uint64x2_t vshll_n_u32(uint32x2_t a, const int n);
int16x8_t vshll_high_n_s8(int8x16_t a, const int n);
int32x4_t vshll_high_n_s16(int16x8_t a, const int n);
int64x2_t vshll_high_n_s32(int32x4_t a, const int n);
uint16x8_t vshll_high_n_u8(uint8x16_t a, const int n);
uint32x4_t vshll_high_n_u16(uint16x8_t a, const int n);
uint64x2_t vshll_high_n_u32(uint32x4_t a, const int n);
int8x8_t vsri_n_s8(int8x8_t a, int8x8_t b, const int n);
int8x16_t vsriq_n_s8(int8x16_t a, int8x16_t b, const int n);
int16x4_t vsri_n_s16(int16x4_t a, int16x4_t b, const int n);
int16x8_t vsriq_n_s16(int16x8_t a, int16x8_t b, const int n);
int32x2_t vsri_n_s32(int32x2_t a, int32x2_t b, const int n);
int32x4_t vsriq_n_s32(int32x4_t a, int32x4_t b, const int n);
int64x1_t vsri_n_s64(int64x1_t a, int64x1_t b, const int n);
int64x2_t vsriq_n_s64(int64x2_t a, int64x2_t b, const int n);
uint8x8_t vsri_n_u8(uint8x8_t a, uint8x8_t b, const int n);
uint8x16_t vsriq_n_u8(uint8x16_t a, uint8x16_t b, const int n);
uint16x4_t vsri_n_u16(uint16x4_t a, uint16x4_t b, const int n);
uint16x8_t vsriq_n_u16(uint16x8_t a, uint16x8_t b, const int n);
uint32x2_t vsri_n_u32(uint32x2_t a, uint32x2_t b, const int n);
uint32x4_t vsriq_n_u32(uint32x4_t a, uint32x4_t b, const int n);
uint64x1_t vsri_n_u64(uint64x1_t a, uint64x1_t b, const int n);
uint64x2_t vsriq_n_u64(uint64x2_t a, uint64x2_t b, const int n);
poly64x1_t vsri_n_p64(poly64x1_t a, poly64x1_t b, const int n);
poly64x2_t vsriq_n_p64(poly64x2_t a, poly64x2_t b, const int n);
poly8x8_t vsri_n_p8(poly8x8_t a, poly8x8_t b, const int n);
poly8x16_t vsriq_n_p8(poly8x16_t a, poly8x16_t b, const int n);
poly16x4_t vsri_n_p16(poly16x4_t a, poly16x4_t b, const int n);
poly16x8_t vsriq_n_p16(poly16x8_t a, poly16x8_t b, const int n);
int64_t vsrid_n_s64(int64_t a, int64_t b, const int n);
uint64_t vsrid_n_u64(uint64_t a, uint64_t b, const int n);
int8x8_t vsli_n_s8(int8x8_t a, int8x8_t b, const int n);
int8x16_t vsliq_n_s8(int8x16_t a, int8x16_t b, const int n);
int16x4_t vsli_n_s16(int16x4_t a, int16x4_t b, const int n);
int16x8_t vsliq_n_s16(int16x8_t a, int16x8_t b, const int n);
int32x2_t vsli_n_s32(int32x2_t a, int32x2_t b, const int n);
int32x4_t vsliq_n_s32(int32x4_t a, int32x4_t b, const int n);
int64x1_t vsli_n_s64(int64x1_t a, int64x1_t b, const int n);
int64x2_t vsliq_n_s64(int64x2_t a, int64x2_t b, const int n);
uint8x8_t vsli_n_u8(uint8x8_t a, uint8x8_t b, const int n);
uint8x16_t vsliq_n_u8(uint8x16_t a, uint8x16_t b, const int n);
uint16x4_t vsli_n_u16(uint16x4_t a, uint16x4_t b, const int n);
uint16x8_t vsliq_n_u16(uint16x8_t a, uint16x8_t b, const int n);
uint32x2_t vsli_n_u32(uint32x2_t a, uint32x2_t b, const int n);
uint32x4_t vsliq_n_u32(uint32x4_t a, uint32x4_t b, const int n);
uint64x1_t vsli_n_u64(uint64x1_t a, uint64x1_t b, const int n);
uint64x2_t vsliq_n_u64(uint64x2_t a, uint64x2_t b, const int n);
poly64x1_t vsli_n_p64(poly64x1_t a, poly64x1_t b, const int n);
poly64x2_t vsliq_n_p64(poly64x2_t a, poly64x2_t b, const int n);
poly8x8_t vsli_n_p8(poly8x8_t a, poly8x8_t b, const int n);
poly8x16_t vsliq_n_p8(poly8x16_t a, poly8x16_t b, const int n);
poly16x4_t vsli_n_p16(poly16x4_t a, poly16x4_t b, const int n);
poly16x8_t vsliq_n_p16(poly16x8_t a, poly16x8_t b, const int n);
int64_t vslid_n_s64(int64_t a, int64_t b, const int n);
uint64_t vslid_n_u64(uint64_t a, uint64_t b, const int n);
int32x2_t vcvt_s32_f32(float32x2_t a);
int32x4_t vcvtq_s32_f32(float32x4_t a);
uint32x2_t vcvt_u32_f32(float32x2_t a);
uint32x4_t vcvtq_u32_f32(float32x4_t a);
int32x2_t vcvtn_s32_f32(float32x2_t a);
int32x4_t vcvtnq_s32_f32(float32x4_t a);
uint32x2_t vcvtn_u32_f32(float32x2_t a);
uint32x4_t vcvtnq_u32_f32(float32x4_t a);
int32x2_t vcvtm_s32_f32(float32x2_t a);
int32x4_t vcvtmq_s32_f32(float32x4_t a);
uint32x2_t vcvtm_u32_f32(float32x2_t a);
uint32x4_t vcvtmq_u32_f32(float32x4_t a);
int32x2_t vcvtp_s32_f32(float32x2_t a);
int32x4_t vcvtpq_s32_f32(float32x4_t a);
uint32x2_t vcvtp_u32_f32(float32x2_t a);
uint32x4_t vcvtpq_u32_f32(float32x4_t a);
int32x2_t vcvta_s32_f32(float32x2_t a);
int32x4_t vcvtaq_s32_f32(float32x4_t a);
uint32x2_t vcvta_u32_f32(float32x2_t a);
uint32x4_t vcvtaq_u32_f32(float32x4_t a);
int32_t vcvts_s32_f32(float32_t a);
uint32_t vcvts_u32_f32(float32_t a);
int32_t vcvtns_s32_f32(float32_t a);
uint32_t vcvtns_u32_f32(float32_t a);
int32_t vcvtms_s32_f32(float32_t a);
uint32_t vcvtms_u32_f32(float32_t a);
int32_t vcvtps_s32_f32(float32_t a);
uint32_t vcvtps_u32_f32(float32_t a);
int32_t vcvtas_s32_f32(float32_t a);
uint32_t vcvtas_u32_f32(float32_t a);
int64x1_t vcvt_s64_f64(float64x1_t a);
int64x2_t vcvtq_s64_f64(float64x2_t a);
uint64x1_t vcvt_u64_f64(float64x1_t a);
uint64x2_t vcvtq_u64_f64(float64x2_t a);
int64x1_t vcvtn_s64_f64(float64x1_t a);
int64x2_t vcvtnq_s64_f64(float64x2_t a);
uint64x1_t vcvtn_u64_f64(float64x1_t a);
uint64x2_t vcvtnq_u64_f64(float64x2_t a);
int64x1_t vcvtm_s64_f64(float64x1_t a);
int64x2_t vcvtmq_s64_f64(float64x2_t a);
uint64x1_t vcvtm_u64_f64(float64x1_t a);
uint64x2_t vcvtmq_u64_f64(float64x2_t a);
int64x1_t vcvtp_s64_f64(float64x1_t a);
int64x2_t vcvtpq_s64_f64(float64x2_t a);
uint64x1_t vcvtp_u64_f64(float64x1_t a);
uint64x2_t vcvtpq_u64_f64(float64x2_t a);
int64x1_t vcvta_s64_f64(float64x1_t a);
int64x2_t vcvtaq_s64_f64(float64x2_t a);
uint64x1_t vcvta_u64_f64(float64x1_t a);
uint64x2_t vcvtaq_u64_f64(float64x2_t a);
int64_t vcvtd_s64_f64(float64_t a);
uint64_t vcvtd_u64_f64(float64_t a);
int64_t vcvtnd_s64_f64(float64_t a);
uint64_t vcvtnd_u64_f64(float64_t a);
int64_t vcvtmd_s64_f64(float64_t a);
uint64_t vcvtmd_u64_f64(float64_t a);
int64_t vcvtpd_s64_f64(float64_t a);
uint64_t vcvtpd_u64_f64(float64_t a);
int64_t vcvtad_s64_f64(float64_t a);
uint64_t vcvtad_u64_f64(float64_t a);
int32x2_t vcvt_n_s32_f32(float32x2_t a, const int n);
int32x4_t vcvtq_n_s32_f32(float32x4_t a, const int n);
uint32x2_t vcvt_n_u32_f32(float32x2_t a, const int n);
uint32x4_t vcvtq_n_u32_f32(float32x4_t a, const int n);
int32_t vcvts_n_s32_f32(float32_t a, const int n);
uint32_t vcvts_n_u32_f32(float32_t a, const int n);
int64x1_t vcvt_n_s64_f64(float64x1_t a, const int n);
int64x2_t vcvtq_n_s64_f64(float64x2_t a, const int n);
uint64x1_t vcvt_n_u64_f64(float64x1_t a, const int n);
uint64x2_t vcvtq_n_u64_f64(float64x2_t a, const int n);
int64_t vcvtd_n_s64_f64(float64_t a, const int n);
uint64_t vcvtd_n_u64_f64(float64_t a, const int n);
float32x2_t vcvt_f32_s32(int32x2_t a);
float32x4_t vcvtq_f32_s32(int32x4_t a);
float32x2_t vcvt_f32_u32(uint32x2_t a);
float32x4_t vcvtq_f32_u32(uint32x4_t a);
float32_t vcvts_f32_s32(int32_t a);
float32_t vcvts_f32_u32(uint32_t a);
float64x1_t vcvt_f64_s64(int64x1_t a);
float64x2_t vcvtq_f64_s64(int64x2_t a);
float64x1_t vcvt_f64_u64(uint64x1_t a);
float64x2_t vcvtq_f64_u64(uint64x2_t a);
float64_t vcvtd_f64_s64(int64_t a);
float64_t vcvtd_f64_u64(uint64_t a);
float32x2_t vcvt_n_f32_s32(int32x2_t a, const int n);
float32x4_t vcvtq_n_f32_s32(int32x4_t a, const int n);
float32x2_t vcvt_n_f32_u32(uint32x2_t a, const int n);
float32x4_t vcvtq_n_f32_u32(uint32x4_t a, const int n);
float32_t vcvts_n_f32_s32(int32_t a, const int n);
float32_t vcvts_n_f32_u32(uint32_t a, const int n);
float64x1_t vcvt_n_f64_s64(int64x1_t a, const int n);
float64x2_t vcvtq_n_f64_s64(int64x2_t a, const int n);
float64x1_t vcvt_n_f64_u64(uint64x1_t a, const int n);
float64x2_t vcvtq_n_f64_u64(uint64x2_t a, const int n);
float64_t vcvtd_n_f64_s64(int64_t a, const int n);
float64_t vcvtd_n_f64_u64(uint64_t a, const int n);
float16x4_t vcvt_f16_f32(float32x4_t a);
float16x8_t vcvt_high_f16_f32(float16x4_t r, float32x4_t a);
float32x2_t vcvt_f32_f64(float64x2_t a);
float32x4_t vcvt_high_f32_f64(float32x2_t r, float64x2_t a);
float32x4_t vcvt_f32_f16(float16x4_t a);
float32x4_t vcvt_high_f32_f16(float16x8_t a);
float64x2_t vcvt_f64_f32(float32x2_t a);
float64x2_t vcvt_high_f64_f32(float32x4_t a);
float32x2_t vcvtx_f32_f64(float64x2_t a);
float32_t vcvtxd_f32_f64(float64_t a);
float32x4_t vcvtx_high_f32_f64(float32x2_t r, float64x2_t a);
float32x2_t vrnd_f32(float32x2_t a);
float32x4_t vrndq_f32(float32x4_t a);
float64x1_t vrnd_f64(float64x1_t a);
float64x2_t vrndq_f64(float64x2_t a);
float32x2_t vrndn_f32(float32x2_t a);
float32x4_t vrndnq_f32(float32x4_t a);
float64x1_t vrndn_f64(float64x1_t a);
float64x2_t vrndnq_f64(float64x2_t a);
float32_t vrndns_f32(float32_t a);
float32x2_t vrndm_f32(float32x2_t a);
float32x4_t vrndmq_f32(float32x4_t a);
float64x1_t vrndm_f64(float64x1_t a);
float64x2_t vrndmq_f64(float64x2_t a);
float32x2_t vrndp_f32(float32x2_t a);
float32x4_t vrndpq_f32(float32x4_t a);
float64x1_t vrndp_f64(float64x1_t a);
float64x2_t vrndpq_f64(float64x2_t a);
float32x2_t vrnda_f32(float32x2_t a);
float32x4_t vrndaq_f32(float32x4_t a);
float64x1_t vrnda_f64(float64x1_t a);
float64x2_t vrndaq_f64(float64x2_t a);
float32x2_t vrndi_f32(float32x2_t a);
float32x4_t vrndiq_f32(float32x4_t a);
float64x1_t vrndi_f64(float64x1_t a);
float64x2_t vrndiq_f64(float64x2_t a);
float32x2_t vrndx_f32(float32x2_t a);
float32x4_t vrndxq_f32(float32x4_t a);
float64x1_t vrndx_f64(float64x1_t a);
float64x2_t vrndxq_f64(float64x2_t a);
int8x8_t vmovn_s16(int16x8_t a);
int16x4_t vmovn_s32(int32x4_t a);
int32x2_t vmovn_s64(int64x2_t a);
uint8x8_t vmovn_u16(uint16x8_t a);
uint16x4_t vmovn_u32(uint32x4_t a);
uint32x2_t vmovn_u64(uint64x2_t a);
int8x16_t vmovn_high_s16(int8x8_t r, int16x8_t a);
int16x8_t vmovn_high_s32(int16x4_t r, int32x4_t a);
int32x4_t vmovn_high_s64(int32x2_t r, int64x2_t a);
uint8x16_t vmovn_high_u16(uint8x8_t r, uint16x8_t a);
uint16x8_t vmovn_high_u32(uint16x4_t r, uint32x4_t a);
uint32x4_t vmovn_high_u64(uint32x2_t r, uint64x2_t a);
int16x8_t vmovl_s8(int8x8_t a);
int32x4_t vmovl_s16(int16x4_t a);
int64x2_t vmovl_s32(int32x2_t a);
uint16x8_t vmovl_u8(uint8x8_t a);
uint32x4_t vmovl_u16(uint16x4_t a);
uint64x2_t vmovl_u32(uint32x2_t a);
int16x8_t vmovl_high_s8(int8x16_t a);
int32x4_t vmovl_high_s16(int16x8_t a);
int64x2_t vmovl_high_s32(int32x4_t a);
uint16x8_t vmovl_high_u8(uint8x16_t a);
uint32x4_t vmovl_high_u16(uint16x8_t a);
uint64x2_t vmovl_high_u32(uint32x4_t a);
int8x8_t vqmovn_s16(int16x8_t a);
int16x4_t vqmovn_s32(int32x4_t a);
int32x2_t vqmovn_s64(int64x2_t a);
uint8x8_t vqmovn_u16(uint16x8_t a);
uint16x4_t vqmovn_u32(uint32x4_t a);
uint32x2_t vqmovn_u64(uint64x2_t a);
int8_t vqmovnh_s16(int16_t a);
int16_t vqmovns_s32(int32_t a);
int32_t vqmovnd_s64(int64_t a);
uint8_t vqmovnh_u16(uint16_t a);
uint16_t vqmovns_u32(uint32_t a);
uint32_t vqmovnd_u64(uint64_t a);
int8x16_t vqmovn_high_s16(int8x8_t r, int16x8_t a);
int16x8_t vqmovn_high_s32(int16x4_t r, int32x4_t a);
int32x4_t vqmovn_high_s64(int32x2_t r, int64x2_t a);
uint8x16_t vqmovn_high_u16(uint8x8_t r, uint16x8_t a);
uint16x8_t vqmovn_high_u32(uint16x4_t r, uint32x4_t a);
uint32x4_t vqmovn_high_u64(uint32x2_t r, uint64x2_t a);
uint8x8_t vqmovun_s16(int16x8_t a);
uint16x4_t vqmovun_s32(int32x4_t a);
uint32x2_t vqmovun_s64(int64x2_t a);
uint8_t vqmovunh_s16(int16_t a);
uint16_t vqmovuns_s32(int32_t a);
uint32_t vqmovund_s64(int64_t a);
uint8x16_t vqmovun_high_s16(uint8x8_t r, int16x8_t a);
uint16x8_t vqmovun_high_s32(uint16x4_t r, int32x4_t a);
uint32x4_t vqmovun_high_s64(uint32x2_t r, int64x2_t a);
int16x4_t vmla_lane_s16(int16x4_t a, int16x4_t b, int16x4_t v, const int lane);
int16x8_t vmlaq_lane_s16(int16x8_t a, int16x8_t b, int16x4_t v, const int lane);
int32x2_t vmla_lane_s32(int32x2_t a, int32x2_t b, int32x2_t v, const int lane);
int32x4_t vmlaq_lane_s32(int32x4_t a, int32x4_t b, int32x2_t v, const int lane);
uint16x4_t vmla_lane_u16(uint16x4_t a, uint16x4_t b, uint16x4_t v, const int lane);
uint16x8_t vmlaq_lane_u16(uint16x8_t a, uint16x8_t b, uint16x4_t v, const int lane);
uint32x2_t vmla_lane_u32(uint32x2_t a, uint32x2_t b, uint32x2_t v, const int lane);
uint32x4_t vmlaq_lane_u32(uint32x4_t a, uint32x4_t b, uint32x2_t v, const int lane);
float32x2_t vmla_lane_f32(float32x2_t a, float32x2_t b, float32x2_t v, const int lane);
float32x4_t vmlaq_lane_f32(float32x4_t a, float32x4_t b, float32x2_t v, const int lane);
int16x4_t vmla_laneq_s16(int16x4_t a, int16x4_t b, int16x8_t v, const int lane);
int16x8_t vmlaq_laneq_s16(int16x8_t a, int16x8_t b, int16x8_t v, const int lane);
int32x2_t vmla_laneq_s32(int32x2_t a, int32x2_t b, int32x4_t v, const int lane);
int32x4_t vmlaq_laneq_s32(int32x4_t a, int32x4_t b, int32x4_t v, const int lane);
uint16x4_t vmla_laneq_u16(uint16x4_t a, uint16x4_t b, uint16x8_t v, const int lane);
uint16x8_t vmlaq_laneq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t v, const int lane);
uint32x2_t vmla_laneq_u32(uint32x2_t a, uint32x2_t b, uint32x4_t v, const int lane);
uint32x4_t vmlaq_laneq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t v, const int lane);
float32x2_t vmla_laneq_f32(float32x2_t a, float32x2_t b, float32x4_t v, const int lane);
float32x4_t vmlaq_laneq_f32(float32x4_t a, float32x4_t b, float32x4_t v, const int lane);
int32x4_t vmlal_lane_s16(int32x4_t a, int16x4_t b, int16x4_t v, const int lane);
int64x2_t vmlal_lane_s32(int64x2_t a, int32x2_t b, int32x2_t v, const int lane);
uint32x4_t vmlal_lane_u16(uint32x4_t a, uint16x4_t b, uint16x4_t v, const int lane);
uint64x2_t vmlal_lane_u32(uint64x2_t a, uint32x2_t b, uint32x2_t v, const int lane);
int32x4_t vmlal_high_lane_s16(int32x4_t a, int16x8_t b, int16x4_t v, const int lane);
int64x2_t vmlal_high_lane_s32(int64x2_t a, int32x4_t b, int32x2_t v, const int lane);
uint32x4_t vmlal_high_lane_u16(uint32x4_t a, uint16x8_t b, uint16x4_t v, const int lane);
uint64x2_t vmlal_high_lane_u32(uint64x2_t a, uint32x4_t b, uint32x2_t v, const int lane);
int32x4_t vmlal_laneq_s16(int32x4_t a, int16x4_t b, int16x8_t v, const int lane);
int64x2_t vmlal_laneq_s32(int64x2_t a, int32x2_t b, int32x4_t v, const int lane);
uint32x4_t vmlal_laneq_u16(uint32x4_t a, uint16x4_t b, uint16x8_t v, const int lane);
uint64x2_t vmlal_laneq_u32(uint64x2_t a, uint32x2_t b, uint32x4_t v, const int lane);
int32x4_t vmlal_high_laneq_s16(int32x4_t a, int16x8_t b, int16x8_t v, const int lane);
int64x2_t vmlal_high_laneq_s32(int64x2_t a, int32x4_t b, int32x4_t v, const int lane);
uint32x4_t vmlal_high_laneq_u16(uint32x4_t a, uint16x8_t b, uint16x8_t v, const int lane);
uint64x2_t vmlal_high_laneq_u32(uint64x2_t a, uint32x4_t b, uint32x4_t v, const int lane);
int32x4_t vqdmlal_lane_s16(int32x4_t a, int16x4_t b, int16x4_t v, const int lane);
int64x2_t vqdmlal_lane_s32(int64x2_t a, int32x2_t b, int32x2_t v, const int lane);
int32_t vqdmlalh_lane_s16(int32_t a, int16_t b, int16x4_t v, const int lane);
int64_t vqdmlals_lane_s32(int64_t a, int32_t b, int32x2_t v, const int lane);
int32x4_t vqdmlal_high_lane_s16(int32x4_t a, int16x8_t b, int16x4_t v, const int lane);
int64x2_t vqdmlal_high_lane_s32(int64x2_t a, int32x4_t b, int32x2_t v, const int lane);
int32x4_t vqdmlal_laneq_s16(int32x4_t a, int16x4_t b, int16x8_t v, const int lane);
int64x2_t vqdmlal_laneq_s32(int64x2_t a, int32x2_t b, int32x4_t v, const int lane);
int32_t vqdmlalh_laneq_s16(int32_t a, int16_t b, int16x8_t v, const int lane);
int64_t vqdmlals_laneq_s32(int64_t a, int32_t b, int32x4_t v, const int lane);
int32x4_t vqdmlal_high_laneq_s16(int32x4_t a, int16x8_t b, int16x8_t v, const int lane);
int64x2_t vqdmlal_high_laneq_s32(int64x2_t a, int32x4_t b, int32x4_t v, const int lane);
int16x4_t vmls_lane_s16(int16x4_t a, int16x4_t b, int16x4_t v, const int lane);
int16x8_t vmlsq_lane_s16(int16x8_t a, int16x8_t b, int16x4_t v, const int lane);
int32x2_t vmls_lane_s32(int32x2_t a, int32x2_t b, int32x2_t v, const int lane);
int32x4_t vmlsq_lane_s32(int32x4_t a, int32x4_t b, int32x2_t v, const int lane);
uint16x4_t vmls_lane_u16(uint16x4_t a, uint16x4_t b, uint16x4_t v, const int lane);
uint16x8_t vmlsq_lane_u16(uint16x8_t a, uint16x8_t b, uint16x4_t v, const int lane);
uint32x2_t vmls_lane_u32(uint32x2_t a, uint32x2_t b, uint32x2_t v, const int lane);
uint32x4_t vmlsq_lane_u32(uint32x4_t a, uint32x4_t b, uint32x2_t v, const int lane);
float32x2_t vmls_lane_f32(float32x2_t a, float32x2_t b, float32x2_t v, const int lane);
float32x4_t vmlsq_lane_f32(float32x4_t a, float32x4_t b, float32x2_t v, const int lane);
int16x4_t vmls_laneq_s16(int16x4_t a, int16x4_t b, int16x8_t v, const int lane);
int16x8_t vmlsq_laneq_s16(int16x8_t a, int16x8_t b, int16x8_t v, const int lane);
int32x2_t vmls_laneq_s32(int32x2_t a, int32x2_t b, int32x4_t v, const int lane);
int32x4_t vmlsq_laneq_s32(int32x4_t a, int32x4_t b, int32x4_t v, const int lane);
uint16x4_t vmls_laneq_u16(uint16x4_t a, uint16x4_t b, uint16x8_t v, const int lane);
uint16x8_t vmlsq_laneq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t v, const int lane);
uint32x2_t vmls_laneq_u32(uint32x2_t a, uint32x2_t b, uint32x4_t v, const int lane);
uint32x4_t vmlsq_laneq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t v, const int lane);
float32x2_t vmls_laneq_f32(float32x2_t a, float32x2_t b, float32x4_t v, const int lane);
float32x4_t vmlsq_laneq_f32(float32x4_t a, float32x4_t b, float32x4_t v, const int lane);
int32x4_t vmlsl_lane_s16(int32x4_t a, int16x4_t b, int16x4_t v, const int lane);
int64x2_t vmlsl_lane_s32(int64x2_t a, int32x2_t b, int32x2_t v, const int lane);
uint32x4_t vmlsl_lane_u16(uint32x4_t a, uint16x4_t b, uint16x4_t v, const int lane);
uint64x2_t vmlsl_lane_u32(uint64x2_t a, uint32x2_t b, uint32x2_t v, const int lane);
int32x4_t vmlsl_high_lane_s16(int32x4_t a, int16x8_t b, int16x4_t v, const int lane);
int64x2_t vmlsl_high_lane_s32(int64x2_t a, int32x4_t b, int32x2_t v, const int lane);
uint32x4_t vmlsl_high_lane_u16(uint32x4_t a, uint16x8_t b, uint16x4_t v, const int lane);
uint64x2_t vmlsl_high_lane_u32(uint64x2_t a, uint32x4_t b, uint32x2_t v, const int lane);
int32x4_t vmlsl_laneq_s16(int32x4_t a, int16x4_t b, int16x8_t v, const int lane);
int64x2_t vmlsl_laneq_s32(int64x2_t a, int32x2_t b, int32x4_t v, const int lane);
uint32x4_t vmlsl_laneq_u16(uint32x4_t a, uint16x4_t b, uint16x8_t v, const int lane);
uint64x2_t vmlsl_laneq_u32(uint64x2_t a, uint32x2_t b, uint32x4_t v, const int lane);
int32x4_t vmlsl_high_laneq_s16(int32x4_t a, int16x8_t b, int16x8_t v, const int lane);
int64x2_t vmlsl_high_laneq_s32(int64x2_t a, int32x4_t b, int32x4_t v, const int lane);
uint32x4_t vmlsl_high_laneq_u16(uint32x4_t a, uint16x8_t b, uint16x8_t v, const int lane);
uint64x2_t vmlsl_high_laneq_u32(uint64x2_t a, uint32x4_t b, uint32x4_t v, const int lane);
int32x4_t vqdmlsl_lane_s16(int32x4_t a, int16x4_t b, int16x4_t v, const int lane);
int64x2_t vqdmlsl_lane_s32(int64x2_t a, int32x2_t b, int32x2_t v, const int lane);
int32_t vqdmlslh_lane_s16(int32_t a, int16_t b, int16x4_t v, const int lane);
int64_t vqdmlsls_lane_s32(int64_t a, int32_t b, int32x2_t v, const int lane);
int32x4_t vqdmlsl_high_lane_s16(int32x4_t a, int16x8_t b, int16x4_t v, const int lane);
int64x2_t vqdmlsl_high_lane_s32(int64x2_t a, int32x4_t b, int32x2_t v, const int lane);
int32x4_t vqdmlsl_laneq_s16(int32x4_t a, int16x4_t b, int16x8_t v, const int lane);
int64x2_t vqdmlsl_laneq_s32(int64x2_t a, int32x2_t b, int32x4_t v, const int lane);
int32_t vqdmlslh_laneq_s16(int32_t a, int16_t b, int16x8_t v, const int lane);
int64_t vqdmlsls_laneq_s32(int64_t a, int32_t b, int32x4_t v, const int lane);
int32x4_t vqdmlsl_high_laneq_s16(int32x4_t a, int16x8_t b, int16x8_t v, const int lane);
int64x2_t vqdmlsl_high_laneq_s32(int64x2_t a, int32x4_t b, int32x4_t v, const int lane);
int16x4_t vmul_n_s16(int16x4_t a, int16_t b);
int16x8_t vmulq_n_s16(int16x8_t a, int16_t b);
int32x2_t vmul_n_s32(int32x2_t a, int32_t b);
int32x4_t vmulq_n_s32(int32x4_t a, int32_t b);
uint16x4_t vmul_n_u16(uint16x4_t a, uint16_t b);
uint16x8_t vmulq_n_u16(uint16x8_t a, uint16_t b);
uint32x2_t vmul_n_u32(uint32x2_t a, uint32_t b);
uint32x4_t vmulq_n_u32(uint32x4_t a, uint32_t b);
float32x2_t vmul_n_f32(float32x2_t a, float32_t b);
float32x4_t vmulq_n_f32(float32x4_t a, float32_t b);
float64x1_t vmul_n_f64(float64x1_t a, float64_t b);
float64x2_t vmulq_n_f64(float64x2_t a, float64_t b);
int16x4_t vmul_lane_s16(int16x4_t a, int16x4_t v, const int lane);
int16x8_t vmulq_lane_s16(int16x8_t a, int16x4_t v, const int lane);
int32x2_t vmul_lane_s32(int32x2_t a, int32x2_t v, const int lane);
int32x4_t vmulq_lane_s32(int32x4_t a, int32x2_t v, const int lane);
uint16x4_t vmul_lane_u16(uint16x4_t a, uint16x4_t v, const int lane);
uint16x8_t vmulq_lane_u16(uint16x8_t a, uint16x4_t v, const int lane);
uint32x2_t vmul_lane_u32(uint32x2_t a, uint32x2_t v, const int lane);
uint32x4_t vmulq_lane_u32(uint32x4_t a, uint32x2_t v, const int lane);
float32x2_t vmul_lane_f32(float32x2_t a, float32x2_t v, const int lane);
float32x4_t vmulq_lane_f32(float32x4_t a, float32x2_t v, const int lane);
float64x1_t vmul_lane_f64(float64x1_t a, float64x1_t v, const int lane);
float64x2_t vmulq_lane_f64(float64x2_t a, float64x1_t v, const int lane);
float32_t vmuls_lane_f32(float32_t a, float32x2_t v, const int lane);
float64_t vmuld_lane_f64(float64_t a, float64x1_t v, const int lane);
int16x4_t vmul_laneq_s16(int16x4_t a, int16x8_t v, const int lane);
int16x8_t vmulq_laneq_s16(int16x8_t a, int16x8_t v, const int lane);
int32x2_t vmul_laneq_s32(int32x2_t a, int32x4_t v, const int lane);
int32x4_t vmulq_laneq_s32(int32x4_t a, int32x4_t v, const int lane);
uint16x4_t vmul_laneq_u16(uint16x4_t a, uint16x8_t v, const int lane);
uint16x8_t vmulq_laneq_u16(uint16x8_t a, uint16x8_t v, const int lane);
uint32x2_t vmul_laneq_u32(uint32x2_t a, uint32x4_t v, const int lane);
uint32x4_t vmulq_laneq_u32(uint32x4_t a, uint32x4_t v, const int lane);
float32x2_t vmul_laneq_f32(float32x2_t a, float32x4_t v, const int lane);
float32x4_t vmulq_laneq_f32(float32x4_t a, float32x4_t v, const int lane);
float64x1_t vmul_laneq_f64(float64x1_t a, float64x2_t v, const int lane);
float64x2_t vmulq_laneq_f64(float64x2_t a, float64x2_t v, const int lane);
float32_t vmuls_laneq_f32(float32_t a, float32x4_t v, const int lane);
float64_t vmuld_laneq_f64(float64_t a, float64x2_t v, const int lane);
int32x4_t vmull_n_s16(int16x4_t a, int16_t b);
int64x2_t vmull_n_s32(int32x2_t a, int32_t b);
uint32x4_t vmull_n_u16(uint16x4_t a, uint16_t b);
uint64x2_t vmull_n_u32(uint32x2_t a, uint32_t b);
int32x4_t vmull_high_n_s16(int16x8_t a, int16_t b);
int64x2_t vmull_high_n_s32(int32x4_t a, int32_t b);
uint32x4_t vmull_high_n_u16(uint16x8_t a, uint16_t b);
uint64x2_t vmull_high_n_u32(uint32x4_t a, uint32_t b);
int32x4_t vmull_lane_s16(int16x4_t a, int16x4_t v, const int lane);
int64x2_t vmull_lane_s32(int32x2_t a, int32x2_t v, const int lane);
uint32x4_t vmull_lane_u16(uint16x4_t a, uint16x4_t v, const int lane);
uint64x2_t vmull_lane_u32(uint32x2_t a, uint32x2_t v, const int lane);
int32x4_t vmull_high_lane_s16(int16x8_t a, int16x4_t v, const int lane);
int64x2_t vmull_high_lane_s32(int32x4_t a, int32x2_t v, const int lane);
uint32x4_t vmull_high_lane_u16(uint16x8_t a, uint16x4_t v, const int lane);
uint64x2_t vmull_high_lane_u32(uint32x4_t a, uint32x2_t v, const int lane);
int32x4_t vmull_laneq_s16(int16x4_t a, int16x8_t v, const int lane);
int64x2_t vmull_laneq_s32(int32x2_t a, int32x4_t v, const int lane);
uint32x4_t vmull_laneq_u16(uint16x4_t a, uint16x8_t v, const int lane);
uint64x2_t vmull_laneq_u32(uint32x2_t a, uint32x4_t v, const int lane);
int32x4_t vmull_high_laneq_s16(int16x8_t a, int16x8_t v, const int lane);
int64x2_t vmull_high_laneq_s32(int32x4_t a, int32x4_t v, const int lane);
uint32x4_t vmull_high_laneq_u16(uint16x8_t a, uint16x8_t v, const int lane);
uint64x2_t vmull_high_laneq_u32(uint32x4_t a, uint32x4_t v, const int lane);
int32x4_t vqdmull_n_s16(int16x4_t a, int16_t b);
int64x2_t vqdmull_n_s32(int32x2_t a, int32_t b);
int32x4_t vqdmull_high_n_s16(int16x8_t a, int16_t b);
int64x2_t vqdmull_high_n_s32(int32x4_t a, int32_t b);
int32x4_t vqdmull_lane_s16(int16x4_t a, int16x4_t v, const int lane);
int64x2_t vqdmull_lane_s32(int32x2_t a, int32x2_t v, const int lane);
int32_t vqdmullh_lane_s16(int16_t a, int16x4_t v, const int lane);
int64_t vqdmulls_lane_s32(int32_t a, int32x2_t v, const int lane);
int32x4_t vqdmull_high_lane_s16(int16x8_t a, int16x4_t v, const int lane);
int64x2_t vqdmull_high_lane_s32(int32x4_t a, int32x2_t v, const int lane);
int32x4_t vqdmull_laneq_s16(int16x4_t a, int16x8_t v, const int lane);
int64x2_t vqdmull_laneq_s32(int32x2_t a, int32x4_t v, const int lane);
int32_t vqdmullh_laneq_s16(int16_t a, int16x8_t v, const int lane);
int64_t vqdmulls_laneq_s32(int32_t a, int32x4_t v, const int lane);
int32x4_t vqdmull_high_laneq_s16(int16x8_t a, int16x8_t v, const int lane);
int64x2_t vqdmull_high_laneq_s32(int32x4_t a, int32x4_t v, const int lane);
int16x4_t vqdmulh_n_s16(int16x4_t a, int16_t b);
int16x8_t vqdmulhq_n_s16(int16x8_t a, int16_t b);
int32x2_t vqdmulh_n_s32(int32x2_t a, int32_t b);
int32x4_t vqdmulhq_n_s32(int32x4_t a, int32_t b);
int16x4_t vqdmulh_lane_s16(int16x4_t a, int16x4_t v, const int lane);
int16x8_t vqdmulhq_lane_s16(int16x8_t a, int16x4_t v, const int lane);
int32x2_t vqdmulh_lane_s32(int32x2_t a, int32x2_t v, const int lane);
int32x4_t vqdmulhq_lane_s32(int32x4_t a, int32x2_t v, const int lane);
int16_t vqdmulhh_lane_s16(int16_t a, int16x4_t v, const int lane);
int32_t vqdmulhs_lane_s32(int32_t a, int32x2_t v, const int lane);
int16x4_t vqdmulh_laneq_s16(int16x4_t a, int16x8_t v, const int lane);
int16x8_t vqdmulhq_laneq_s16(int16x8_t a, int16x8_t v, const int lane);
int32x2_t vqdmulh_laneq_s32(int32x2_t a, int32x4_t v, const int lane);
int32x4_t vqdmulhq_laneq_s32(int32x4_t a, int32x4_t v, const int lane);
int16_t vqdmulhh_laneq_s16(int16_t a, int16x8_t v, const int lane);
int32_t vqdmulhs_laneq_s32(int32_t a, int32x4_t v, const int lane);
int16x4_t vqrdmulh_n_s16(int16x4_t a, int16_t b);
int16x8_t vqrdmulhq_n_s16(int16x8_t a, int16_t b);
int32x2_t vqrdmulh_n_s32(int32x2_t a, int32_t b);
int32x4_t vqrdmulhq_n_s32(int32x4_t a, int32_t b);
int16x4_t vqrdmulh_lane_s16(int16x4_t a, int16x4_t v, const int lane);
int16x8_t vqrdmulhq_lane_s16(int16x8_t a, int16x4_t v, const int lane);
int32x2_t vqrdmulh_lane_s32(int32x2_t a, int32x2_t v, const int lane);
int32x4_t vqrdmulhq_lane_s32(int32x4_t a, int32x2_t v, const int lane);
int16_t vqrdmulhh_lane_s16(int16_t a, int16x4_t v, const int lane);
int32_t vqrdmulhs_lane_s32(int32_t a, int32x2_t v, const int lane);
int16x4_t vqrdmulh_laneq_s16(int16x4_t a, int16x8_t v, const int lane);
int16x8_t vqrdmulhq_laneq_s16(int16x8_t a, int16x8_t v, const int lane);
int32x2_t vqrdmulh_laneq_s32(int32x2_t a, int32x4_t v, const int lane);
int32x4_t vqrdmulhq_laneq_s32(int32x4_t a, int32x4_t v, const int lane);
int16_t vqrdmulhh_laneq_s16(int16_t a, int16x8_t v, const int lane);
int32_t vqrdmulhs_laneq_s32(int32_t a, int32x4_t v, const int lane);
int16x4_t vmla_n_s16(int16x4_t a, int16x4_t b, int16_t c);
int16x8_t vmlaq_n_s16(int16x8_t a, int16x8_t b, int16_t c);
int32x2_t vmla_n_s32(int32x2_t a, int32x2_t b, int32_t c);
int32x4_t vmlaq_n_s32(int32x4_t a, int32x4_t b, int32_t c);
uint16x4_t vmla_n_u16(uint16x4_t a, uint16x4_t b, uint16_t c);
uint16x8_t vmlaq_n_u16(uint16x8_t a, uint16x8_t b, uint16_t c);
uint32x2_t vmla_n_u32(uint32x2_t a, uint32x2_t b, uint32_t c);
uint32x4_t vmlaq_n_u32(uint32x4_t a, uint32x4_t b, uint32_t c);
float32x2_t vmla_n_f32(float32x2_t a, float32x2_t b, float32_t c);
float32x4_t vmlaq_n_f32(float32x4_t a, float32x4_t b, float32_t c);
int32x4_t vmlal_n_s16(int32x4_t a, int16x4_t b, int16_t c);
int64x2_t vmlal_n_s32(int64x2_t a, int32x2_t b, int32_t c);
uint32x4_t vmlal_n_u16(uint32x4_t a, uint16x4_t b, uint16_t c);
uint64x2_t vmlal_n_u32(uint64x2_t a, uint32x2_t b, uint32_t c);
int32x4_t vmlal_high_n_s16(int32x4_t a, int16x8_t b, int16_t c);
int64x2_t vmlal_high_n_s32(int64x2_t a, int32x4_t b, int32_t c);
uint32x4_t vmlal_high_n_u16(uint32x4_t a, uint16x8_t b, uint16_t c);
uint64x2_t vmlal_high_n_u32(uint64x2_t a, uint32x4_t b, uint32_t c);
int32x4_t vqdmlal_n_s16(int32x4_t a, int16x4_t b, int16_t c);
int64x2_t vqdmlal_n_s32(int64x2_t a, int32x2_t b, int32_t c);
int32x4_t vqdmlal_high_n_s16(int32x4_t a, int16x8_t b, int16_t c);
int64x2_t vqdmlal_high_n_s32(int64x2_t a, int32x4_t b, int32_t c);
int16x4_t vmls_n_s16(int16x4_t a, int16x4_t b, int16_t c);
int16x8_t vmlsq_n_s16(int16x8_t a, int16x8_t b, int16_t c);
int32x2_t vmls_n_s32(int32x2_t a, int32x2_t b, int32_t c);
int32x4_t vmlsq_n_s32(int32x4_t a, int32x4_t b, int32_t c);
uint16x4_t vmls_n_u16(uint16x4_t a, uint16x4_t b, uint16_t c);
uint16x8_t vmlsq_n_u16(uint16x8_t a, uint16x8_t b, uint16_t c);
uint32x2_t vmls_n_u32(uint32x2_t a, uint32x2_t b, uint32_t c);
uint32x4_t vmlsq_n_u32(uint32x4_t a, uint32x4_t b, uint32_t c);
float32x2_t vmls_n_f32(float32x2_t a, float32x2_t b, float32_t c);
float32x4_t vmlsq_n_f32(float32x4_t a, float32x4_t b, float32_t c);
int32x4_t vmlsl_n_s16(int32x4_t a, int16x4_t b, int16_t c);
int64x2_t vmlsl_n_s32(int64x2_t a, int32x2_t b, int32_t c);
uint32x4_t vmlsl_n_u16(uint32x4_t a, uint16x4_t b, uint16_t c);
uint64x2_t vmlsl_n_u32(uint64x2_t a, uint32x2_t b, uint32_t c);
int32x4_t vmlsl_high_n_s16(int32x4_t a, int16x8_t b, int16_t c);
int64x2_t vmlsl_high_n_s32(int64x2_t a, int32x4_t b, int32_t c);
uint32x4_t vmlsl_high_n_u16(uint32x4_t a, uint16x8_t b, uint16_t c);
uint64x2_t vmlsl_high_n_u32(uint64x2_t a, uint32x4_t b, uint32_t c);
int32x4_t vqdmlsl_n_s16(int32x4_t a, int16x4_t b, int16_t c);
int64x2_t vqdmlsl_n_s32(int64x2_t a, int32x2_t b, int32_t c);
int32x4_t vqdmlsl_high_n_s16(int32x4_t a, int16x8_t b, int16_t c);
int64x2_t vqdmlsl_high_n_s32(int64x2_t a, int32x4_t b, int32_t c);
int8x8_t vabs_s8(int8x8_t a);
int8x16_t vabsq_s8(int8x16_t a);
int16x4_t vabs_s16(int16x4_t a);
int16x8_t vabsq_s16(int16x8_t a);
int32x2_t vabs_s32(int32x2_t a);
int32x4_t vabsq_s32(int32x4_t a);
float32x2_t vabs_f32(float32x2_t a);
float32x4_t vabsq_f32(float32x4_t a);
int64x1_t vabs_s64(int64x1_t a);
int64_t vabsd_s64(int64_t a);
int64x2_t vabsq_s64(int64x2_t a);
float64x1_t vabs_f64(float64x1_t a);
float64x2_t vabsq_f64(float64x2_t a);
int8x8_t vqabs_s8(int8x8_t a);
int8x16_t vqabsq_s8(int8x16_t a);
int16x4_t vqabs_s16(int16x4_t a);
int16x8_t vqabsq_s16(int16x8_t a);
int32x2_t vqabs_s32(int32x2_t a);
int32x4_t vqabsq_s32(int32x4_t a);
int64x1_t vqabs_s64(int64x1_t a);
int64x2_t vqabsq_s64(int64x2_t a);
int8_t vqabsb_s8(int8_t a);
int16_t vqabsh_s16(int16_t a);
int32_t vqabss_s32(int32_t a);
int64_t vqabsd_s64(int64_t a);
int8x8_t vneg_s8(int8x8_t a);
int8x16_t vnegq_s8(int8x16_t a);
int16x4_t vneg_s16(int16x4_t a);
int16x8_t vnegq_s16(int16x8_t a);
int32x2_t vneg_s32(int32x2_t a);
int32x4_t vnegq_s32(int32x4_t a);
float32x2_t vneg_f32(float32x2_t a);
float32x4_t vnegq_f32(float32x4_t a);
int64x1_t vneg_s64(int64x1_t a);
int64_t vnegd_s64(int64_t a);
int64x2_t vnegq_s64(int64x2_t a);
float64x1_t vneg_f64(float64x1_t a);
float64x2_t vnegq_f64(float64x2_t a);
int8x8_t vqneg_s8(int8x8_t a);
int8x16_t vqnegq_s8(int8x16_t a);
int16x4_t vqneg_s16(int16x4_t a);
int16x8_t vqnegq_s16(int16x8_t a);
int32x2_t vqneg_s32(int32x2_t a);
int32x4_t vqnegq_s32(int32x4_t a);
int64x1_t vqneg_s64(int64x1_t a);
int64x2_t vqnegq_s64(int64x2_t a);
int8_t vqnegb_s8(int8_t a);
int16_t vqnegh_s16(int16_t a);
int32_t vqnegs_s32(int32_t a);
int64_t vqnegd_s64(int64_t a);
int8x8_t vcls_s8(int8x8_t a);
int8x16_t vclsq_s8(int8x16_t a);
int16x4_t vcls_s16(int16x4_t a);
int16x8_t vclsq_s16(int16x8_t a);
int32x2_t vcls_s32(int32x2_t a);
int32x4_t vclsq_s32(int32x4_t a);
int8x8_t vcls_u8(uint8x8_t a);
int8x16_t vclsq_u8(uint8x16_t a);
int16x4_t vcls_u16(uint16x4_t a);
int16x8_t vclsq_u16(uint16x8_t a);
int32x2_t vcls_u32(uint32x2_t a);
int32x4_t vclsq_u32(uint32x4_t a);
int8x8_t vclz_s8(int8x8_t a);
int8x16_t vclzq_s8(int8x16_t a);
int16x4_t vclz_s16(int16x4_t a);
int16x8_t vclzq_s16(int16x8_t a);
int32x2_t vclz_s32(int32x2_t a);
int32x4_t vclzq_s32(int32x4_t a);
uint8x8_t vclz_u8(uint8x8_t a);
uint8x16_t vclzq_u8(uint8x16_t a);
uint16x4_t vclz_u16(uint16x4_t a);
uint16x8_t vclzq_u16(uint16x8_t a);
uint32x2_t vclz_u32(uint32x2_t a);
uint32x4_t vclzq_u32(uint32x4_t a);
int8x8_t vcnt_s8(int8x8_t a);
int8x16_t vcntq_s8(int8x16_t a);
uint8x8_t vcnt_u8(uint8x8_t a);
uint8x16_t vcntq_u8(uint8x16_t a);
poly8x8_t vcnt_p8(poly8x8_t a);
poly8x16_t vcntq_p8(poly8x16_t a);
uint32x2_t vrecpe_u32(uint32x2_t a);
uint32x4_t vrecpeq_u32(uint32x4_t a);
float32x2_t vrecpe_f32(float32x2_t a);
float32x4_t vrecpeq_f32(float32x4_t a);
float64x1_t vrecpe_f64(float64x1_t a);
float64x2_t vrecpeq_f64(float64x2_t a);
float32_t vrecpes_f32(float32_t a);
float64_t vrecped_f64(float64_t a);
float32x2_t vrecps_f32(float32x2_t a, float32x2_t b);
float32x4_t vrecpsq_f32(float32x4_t a, float32x4_t b);
float64x1_t vrecps_f64(float64x1_t a, float64x1_t b);
float64x2_t vrecpsq_f64(float64x2_t a, float64x2_t b);
float32_t vrecpss_f32(float32_t a, float32_t b);
float64_t vrecpsd_f64(float64_t a, float64_t b);
float32x2_t vsqrt_f32(float32x2_t a);
float32x4_t vsqrtq_f32(float32x4_t a);
float64x1_t vsqrt_f64(float64x1_t a);
float64x2_t vsqrtq_f64(float64x2_t a);
uint32x2_t vrsqrte_u32(uint32x2_t a);
uint32x4_t vrsqrteq_u32(uint32x4_t a);
float32x2_t vrsqrte_f32(float32x2_t a);
float32x4_t vrsqrteq_f32(float32x4_t a);
float64x1_t vrsqrte_f64(float64x1_t a);
float64x2_t vrsqrteq_f64(float64x2_t a);
float32_t vrsqrtes_f32(float32_t a);
float64_t vrsqrted_f64(float64_t a);
float32x2_t vrsqrts_f32(float32x2_t a, float32x2_t b);
float32x4_t vrsqrtsq_f32(float32x4_t a, float32x4_t b);
float64x1_t vrsqrts_f64(float64x1_t a, float64x1_t b);
float64x2_t vrsqrtsq_f64(float64x2_t a, float64x2_t b);
float32_t vrsqrtss_f32(float32_t a, float32_t b);
float64_t vrsqrtsd_f64(float64_t a, float64_t b);
int8x8_t vmvn_s8(int8x8_t a);
int8x16_t vmvnq_s8(int8x16_t a);
int16x4_t vmvn_s16(int16x4_t a);
int16x8_t vmvnq_s16(int16x8_t a);
int32x2_t vmvn_s32(int32x2_t a);
int32x4_t vmvnq_s32(int32x4_t a);
uint8x8_t vmvn_u8(uint8x8_t a);
uint8x16_t vmvnq_u8(uint8x16_t a);
uint16x4_t vmvn_u16(uint16x4_t a);
uint16x8_t vmvnq_u16(uint16x8_t a);
uint32x2_t vmvn_u32(uint32x2_t a);
uint32x4_t vmvnq_u32(uint32x4_t a);
poly8x8_t vmvn_p8(poly8x8_t a);
poly8x16_t vmvnq_p8(poly8x16_t a);
int8x8_t vand_s8(int8x8_t a, int8x8_t b);
int8x16_t vandq_s8(int8x16_t a, int8x16_t b);
int16x4_t vand_s16(int16x4_t a, int16x4_t b);
int16x8_t vandq_s16(int16x8_t a, int16x8_t b);
int32x2_t vand_s32(int32x2_t a, int32x2_t b);
int32x4_t vandq_s32(int32x4_t a, int32x4_t b);
int64x1_t vand_s64(int64x1_t a, int64x1_t b);
int64x2_t vandq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vand_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vandq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vand_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vandq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vand_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vandq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vand_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vandq_u64(uint64x2_t a, uint64x2_t b);
int8x8_t vorr_s8(int8x8_t a, int8x8_t b);
int8x16_t vorrq_s8(int8x16_t a, int8x16_t b);
int16x4_t vorr_s16(int16x4_t a, int16x4_t b);
int16x8_t vorrq_s16(int16x8_t a, int16x8_t b);
int32x2_t vorr_s32(int32x2_t a, int32x2_t b);
int32x4_t vorrq_s32(int32x4_t a, int32x4_t b);
int64x1_t vorr_s64(int64x1_t a, int64x1_t b);
int64x2_t vorrq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vorr_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vorrq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vorr_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vorrq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vorr_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vorrq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vorr_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vorrq_u64(uint64x2_t a, uint64x2_t b);
int8x8_t veor_s8(int8x8_t a, int8x8_t b);
int8x16_t veorq_s8(int8x16_t a, int8x16_t b);
int16x4_t veor_s16(int16x4_t a, int16x4_t b);
int16x8_t veorq_s16(int16x8_t a, int16x8_t b);
int32x2_t veor_s32(int32x2_t a, int32x2_t b);
int32x4_t veorq_s32(int32x4_t a, int32x4_t b);
int64x1_t veor_s64(int64x1_t a, int64x1_t b);
int64x2_t veorq_s64(int64x2_t a, int64x2_t b);
uint8x8_t veor_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t veorq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t veor_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t veorq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t veor_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t veorq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t veor_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t veorq_u64(uint64x2_t a, uint64x2_t b);
int8x8_t vbic_s8(int8x8_t a, int8x8_t b);
int8x16_t vbicq_s8(int8x16_t a, int8x16_t b);
int16x4_t vbic_s16(int16x4_t a, int16x4_t b);
int16x8_t vbicq_s16(int16x8_t a, int16x8_t b);
int32x2_t vbic_s32(int32x2_t a, int32x2_t b);
int32x4_t vbicq_s32(int32x4_t a, int32x4_t b);
int64x1_t vbic_s64(int64x1_t a, int64x1_t b);
int64x2_t vbicq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vbic_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vbicq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vbic_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vbicq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vbic_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vbicq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vbic_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vbicq_u64(uint64x2_t a, uint64x2_t b);
int8x8_t vorn_s8(int8x8_t a, int8x8_t b);
int8x16_t vornq_s8(int8x16_t a, int8x16_t b);
int16x4_t vorn_s16(int16x4_t a, int16x4_t b);
int16x8_t vornq_s16(int16x8_t a, int16x8_t b);
int32x2_t vorn_s32(int32x2_t a, int32x2_t b);
int32x4_t vornq_s32(int32x4_t a, int32x4_t b);
int64x1_t vorn_s64(int64x1_t a, int64x1_t b);
int64x2_t vornq_s64(int64x2_t a, int64x2_t b);
uint8x8_t vorn_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vornq_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vorn_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vornq_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vorn_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vornq_u32(uint32x4_t a, uint32x4_t b);
uint64x1_t vorn_u64(uint64x1_t a, uint64x1_t b);
uint64x2_t vornq_u64(uint64x2_t a, uint64x2_t b);
int8x8_t vbsl_s8(uint8x8_t a, int8x8_t b, int8x8_t c);
int8x16_t vbslq_s8(uint8x16_t a, int8x16_t b, int8x16_t c);
int16x4_t vbsl_s16(uint16x4_t a, int16x4_t b, int16x4_t c);
int16x8_t vbslq_s16(uint16x8_t a, int16x8_t b, int16x8_t c);
int32x2_t vbsl_s32(uint32x2_t a, int32x2_t b, int32x2_t c);
int32x4_t vbslq_s32(uint32x4_t a, int32x4_t b, int32x4_t c);
int64x1_t vbsl_s64(uint64x1_t a, int64x1_t b, int64x1_t c);
int64x2_t vbslq_s64(uint64x2_t a, int64x2_t b, int64x2_t c);
uint8x8_t vbsl_u8(uint8x8_t a, uint8x8_t b, uint8x8_t c);
uint8x16_t vbslq_u8(uint8x16_t a, uint8x16_t b, uint8x16_t c);
uint16x4_t vbsl_u16(uint16x4_t a, uint16x4_t b, uint16x4_t c);
uint16x8_t vbslq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t c);
uint32x2_t vbsl_u32(uint32x2_t a, uint32x2_t b, uint32x2_t c);
uint32x4_t vbslq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
uint64x1_t vbsl_u64(uint64x1_t a, uint64x1_t b, uint64x1_t c);
uint64x2_t vbslq_u64(uint64x2_t a, uint64x2_t b, uint64x2_t c);
poly64x1_t vbsl_p64(poly64x1_t a, poly64x1_t b, poly64x1_t c);
poly64x2_t vbslq_p64(poly64x2_t a, poly64x2_t b, poly64x2_t c);
float32x2_t vbsl_f32(uint32x2_t a, float32x2_t b, float32x2_t c);
float32x4_t vbslq_f32(uint32x4_t a, float32x4_t b, float32x4_t c);
poly8x8_t vbsl_p8(uint8x8_t a, poly8x8_t b, poly8x8_t c);
poly8x16_t vbslq_p8(uint8x16_t a, poly8x16_t b, poly8x16_t c);
poly16x4_t vbsl_p16(uint16x4_t a, poly16x4_t b, poly16x4_t c);
poly16x8_t vbslq_p16(uint16x8_t a, poly16x8_t b, poly16x8_t c);
float64x1_t vbsl_f64(uint64x1_t a, float64x1_t b, float64x1_t c);
float64x2_t vbslq_f64(uint64x2_t a, float64x2_t b, float64x2_t c);
int8x8_t vcopy_lane_s8(int8x8_t a, const int lane1, int8x8_t b, const int lane2);
int8x16_t vcopyq_lane_s8(int8x16_t a, const int lane1, int8x8_t b, const int lane2);
int16x4_t vcopy_lane_s16(int16x4_t a, const int lane1, int16x4_t b, const int lane2);
int16x8_t vcopyq_lane_s16(int16x8_t a, const int lane1, int16x4_t b, const int lane2);
int32x2_t vcopy_lane_s32(int32x2_t a, const int lane1, int32x2_t b, const int lane2);
int32x4_t vcopyq_lane_s32(int32x4_t a, const int lane1, int32x2_t b, const int lane2);
int64x1_t vcopy_lane_s64(int64x1_t a, const int lane1, int64x1_t b, const int lane2);
int64x2_t vcopyq_lane_s64(int64x2_t a, const int lane1, int64x1_t b, const int lane2);
uint8x8_t vcopy_lane_u8(uint8x8_t a, const int lane1, uint8x8_t b, const int lane2);
uint8x16_t vcopyq_lane_u8(uint8x16_t a, const int lane1, uint8x8_t b, const int lane2);
uint16x4_t vcopy_lane_u16(uint16x4_t a, const int lane1, uint16x4_t b, const int lane2);
uint16x8_t vcopyq_lane_u16(uint16x8_t a, const int lane1, uint16x4_t b, const int lane2);
uint32x2_t vcopy_lane_u32(uint32x2_t a, const int lane1, uint32x2_t b, const int lane2);
uint32x4_t vcopyq_lane_u32(uint32x4_t a, const int lane1, uint32x2_t b, const int lane2);
uint64x1_t vcopy_lane_u64(uint64x1_t a, const int lane1, uint64x1_t b, const int lane2);
uint64x2_t vcopyq_lane_u64(uint64x2_t a, const int lane1, uint64x1_t b, const int lane2);
poly64x1_t vcopy_lane_p64(poly64x1_t a, const int lane1, poly64x1_t b, const int lane2);
poly64x2_t vcopyq_lane_p64(poly64x2_t a, const int lane1, poly64x1_t b, const int lane2);
float32x2_t vcopy_lane_f32(float32x2_t a, const int lane1, float32x2_t b, const int lane2);
float32x4_t vcopyq_lane_f32(float32x4_t a, const int lane1, float32x2_t b, const int lane2);
float64x1_t vcopy_lane_f64(float64x1_t a, const int lane1, float64x1_t b, const int lane2);
float64x2_t vcopyq_lane_f64(float64x2_t a, const int lane1, float64x1_t b, const int lane2);
poly8x8_t vcopy_lane_p8(poly8x8_t a, const int lane1, poly8x8_t b, const int lane2);
poly8x16_t vcopyq_lane_p8(poly8x16_t a, const int lane1, poly8x8_t b, const int lane2);
poly16x4_t vcopy_lane_p16(poly16x4_t a, const int lane1, poly16x4_t b, const int lane2);
poly16x8_t vcopyq_lane_p16(poly16x8_t a, const int lane1, poly16x4_t b, const int lane2);
int8x8_t vcopy_laneq_s8(int8x8_t a, const int lane1, int8x16_t b, const int lane2);
int8x16_t vcopyq_laneq_s8(int8x16_t a, const int lane1, int8x16_t b, const int lane2);
int16x4_t vcopy_laneq_s16(int16x4_t a, const int lane1, int16x8_t b, const int lane2);
int16x8_t vcopyq_laneq_s16(int16x8_t a, const int lane1, int16x8_t b, const int lane2);
int32x2_t vcopy_laneq_s32(int32x2_t a, const int lane1, int32x4_t b, const int lane2);
int32x4_t vcopyq_laneq_s32(int32x4_t a, const int lane1, int32x4_t b, const int lane2);
int64x1_t vcopy_laneq_s64(int64x1_t a, const int lane1, int64x2_t b, const int lane2);
int64x2_t vcopyq_laneq_s64(int64x2_t a, const int lane1, int64x2_t b, const int lane2);
uint8x8_t vcopy_laneq_u8(uint8x8_t a, const int lane1, uint8x16_t b, const int lane2);
uint8x16_t vcopyq_laneq_u8(uint8x16_t a, const int lane1, uint8x16_t b, const int lane2);
uint16x4_t vcopy_laneq_u16(uint16x4_t a, const int lane1, uint16x8_t b, const int lane2);
uint16x8_t vcopyq_laneq_u16(uint16x8_t a, const int lane1, uint16x8_t b, const int lane2);
uint32x2_t vcopy_laneq_u32(uint32x2_t a, const int lane1, uint32x4_t b, const int lane2);
uint32x4_t vcopyq_laneq_u32(uint32x4_t a, const int lane1, uint32x4_t b, const int lane2);
uint64x1_t vcopy_laneq_u64(uint64x1_t a, const int lane1, uint64x2_t b, const int lane2);
uint64x2_t vcopyq_laneq_u64(uint64x2_t a, const int lane1, uint64x2_t b, const int lane2);
poly64x1_t vcopy_laneq_p64(poly64x1_t a, const int lane1, poly64x2_t b, const int lane2);
poly64x2_t vcopyq_laneq_p64(poly64x2_t a, const int lane1, poly64x2_t b, const int lane2);
float32x2_t vcopy_laneq_f32(float32x2_t a, const int lane1, float32x4_t b, const int lane2);
float32x4_t vcopyq_laneq_f32(float32x4_t a, const int lane1, float32x4_t b, const int lane2);
float64x1_t vcopy_laneq_f64(float64x1_t a, const int lane1, float64x2_t b, const int lane2);
float64x2_t vcopyq_laneq_f64(float64x2_t a, const int lane1, float64x2_t b, const int lane2);
poly8x8_t vcopy_laneq_p8(poly8x8_t a, const int lane1, poly8x16_t b, const int lane2);
poly8x16_t vcopyq_laneq_p8(poly8x16_t a, const int lane1, poly8x16_t b, const int lane2);
poly16x4_t vcopy_laneq_p16(poly16x4_t a, const int lane1, poly16x8_t b, const int lane2);
poly16x8_t vcopyq_laneq_p16(poly16x8_t a, const int lane1, poly16x8_t b, const int lane2);
int8x8_t vrbit_s8(int8x8_t a);
int8x16_t vrbitq_s8(int8x16_t a);
uint8x8_t vrbit_u8(uint8x8_t a);
uint8x16_t vrbitq_u8(uint8x16_t a);
poly8x8_t vrbit_p8(poly8x8_t a);
poly8x16_t vrbitq_p8(poly8x16_t a);
int8x8_t vcreate_s8(uint64_t a);
int16x4_t vcreate_s16(uint64_t a);
int32x2_t vcreate_s32(uint64_t a);
int64x1_t vcreate_s64(uint64_t a);
uint8x8_t vcreate_u8(uint64_t a);
uint16x4_t vcreate_u16(uint64_t a);
uint32x2_t vcreate_u32(uint64_t a);
uint64x1_t vcreate_u64(uint64_t a);
poly64x1_t vcreate_p64(uint64_t a);
float16x4_t vcreate_f16(uint64_t a);
float32x2_t vcreate_f32(uint64_t a);
poly8x8_t vcreate_p8(uint64_t a);
poly16x4_t vcreate_p16(uint64_t a);
float64x1_t vcreate_f64(uint64_t a);
int8x8_t vdup_n_s8(int8_t value);
int8x16_t vdupq_n_s8(int8_t value);
int16x4_t vdup_n_s16(int16_t value);
int16x8_t vdupq_n_s16(int16_t value);
int32x2_t vdup_n_s32(int32_t value);
int32x4_t vdupq_n_s32(int32_t value);
int64x1_t vdup_n_s64(int64_t value);
int64x2_t vdupq_n_s64(int64_t value);
uint8x8_t vdup_n_u8(uint8_t value);
uint8x16_t vdupq_n_u8(uint8_t value);
uint16x4_t vdup_n_u16(uint16_t value);
uint16x8_t vdupq_n_u16(uint16_t value);
uint32x2_t vdup_n_u32(uint32_t value);
uint32x4_t vdupq_n_u32(uint32_t value);
uint64x1_t vdup_n_u64(uint64_t value);
uint64x2_t vdupq_n_u64(uint64_t value);
poly64x1_t vdup_n_p64(poly64_t value);
poly64x2_t vdupq_n_p64(poly64_t value);
float32x2_t vdup_n_f32(float32_t value);
float32x4_t vdupq_n_f32(float32_t value);
poly8x8_t vdup_n_p8(poly8_t value);
poly8x16_t vdupq_n_p8(poly8_t value);
poly16x4_t vdup_n_p16(poly16_t value);
poly16x8_t vdupq_n_p16(poly16_t value);
float64x1_t vdup_n_f64(float64_t value);
float64x2_t vdupq_n_f64(float64_t value);
int8x8_t vmov_n_s8(int8_t value);
int8x16_t vmovq_n_s8(int8_t value);
int16x4_t vmov_n_s16(int16_t value);
int16x8_t vmovq_n_s16(int16_t value);
int32x2_t vmov_n_s32(int32_t value);
int32x4_t vmovq_n_s32(int32_t value);
int64x1_t vmov_n_s64(int64_t value);
int64x2_t vmovq_n_s64(int64_t value);
uint8x8_t vmov_n_u8(uint8_t value);
uint8x16_t vmovq_n_u8(uint8_t value);
uint16x4_t vmov_n_u16(uint16_t value);
uint16x8_t vmovq_n_u16(uint16_t value);
uint32x2_t vmov_n_u32(uint32_t value);
uint32x4_t vmovq_n_u32(uint32_t value);
uint64x1_t vmov_n_u64(uint64_t value);
uint64x2_t vmovq_n_u64(uint64_t value);
float32x2_t vmov_n_f32(float32_t value);
float32x4_t vmovq_n_f32(float32_t value);
poly8x8_t vmov_n_p8(poly8_t value);
poly8x16_t vmovq_n_p8(poly8_t value);
poly16x4_t vmov_n_p16(poly16_t value);
poly16x8_t vmovq_n_p16(poly16_t value);
float64x1_t vmov_n_f64(float64_t value);
float64x2_t vmovq_n_f64(float64_t value);
int8x8_t vdup_lane_s8(int8x8_t vec, const int lane);
int8x16_t vdupq_lane_s8(int8x8_t vec, const int lane);
int16x4_t vdup_lane_s16(int16x4_t vec, const int lane);
int16x8_t vdupq_lane_s16(int16x4_t vec, const int lane);
int32x2_t vdup_lane_s32(int32x2_t vec, const int lane);
int32x4_t vdupq_lane_s32(int32x2_t vec, const int lane);
int64x1_t vdup_lane_s64(int64x1_t vec, const int lane);
int64x2_t vdupq_lane_s64(int64x1_t vec, const int lane);
uint8x8_t vdup_lane_u8(uint8x8_t vec, const int lane);
uint8x16_t vdupq_lane_u8(uint8x8_t vec, const int lane);
uint16x4_t vdup_lane_u16(uint16x4_t vec, const int lane);
uint16x8_t vdupq_lane_u16(uint16x4_t vec, const int lane);
uint32x2_t vdup_lane_u32(uint32x2_t vec, const int lane);
uint32x4_t vdupq_lane_u32(uint32x2_t vec, const int lane);
uint64x1_t vdup_lane_u64(uint64x1_t vec, const int lane);
uint64x2_t vdupq_lane_u64(uint64x1_t vec, const int lane);
poly64x1_t vdup_lane_p64(poly64x1_t vec, const int lane);
poly64x2_t vdupq_lane_p64(poly64x1_t vec, const int lane);
float32x2_t vdup_lane_f32(float32x2_t vec, const int lane);
float32x4_t vdupq_lane_f32(float32x2_t vec, const int lane);
poly8x8_t vdup_lane_p8(poly8x8_t vec, const int lane);
poly8x16_t vdupq_lane_p8(poly8x8_t vec, const int lane);
poly16x4_t vdup_lane_p16(poly16x4_t vec, const int lane);
poly16x8_t vdupq_lane_p16(poly16x4_t vec, const int lane);
float64x1_t vdup_lane_f64(float64x1_t vec, const int lane);
float64x2_t vdupq_lane_f64(float64x1_t vec, const int lane);
int8x8_t vdup_laneq_s8(int8x16_t vec, const int lane);
int8x16_t vdupq_laneq_s8(int8x16_t vec, const int lane);
int16x4_t vdup_laneq_s16(int16x8_t vec, const int lane);
int16x8_t vdupq_laneq_s16(int16x8_t vec, const int lane);
int32x2_t vdup_laneq_s32(int32x4_t vec, const int lane);
int32x4_t vdupq_laneq_s32(int32x4_t vec, const int lane);
int64x1_t vdup_laneq_s64(int64x2_t vec, const int lane);
int64x2_t vdupq_laneq_s64(int64x2_t vec, const int lane);
uint8x8_t vdup_laneq_u8(uint8x16_t vec, const int lane);
uint8x16_t vdupq_laneq_u8(uint8x16_t vec, const int lane);
uint16x4_t vdup_laneq_u16(uint16x8_t vec, const int lane);
uint16x8_t vdupq_laneq_u16(uint16x8_t vec, const int lane);
uint32x2_t vdup_laneq_u32(uint32x4_t vec, const int lane);
uint32x4_t vdupq_laneq_u32(uint32x4_t vec, const int lane);
uint64x1_t vdup_laneq_u64(uint64x2_t vec, const int lane);
uint64x2_t vdupq_laneq_u64(uint64x2_t vec, const int lane);
poly64x1_t vdup_laneq_p64(poly64x2_t vec, const int lane);
poly64x2_t vdupq_laneq_p64(poly64x2_t vec, const int lane);
float32x2_t vdup_laneq_f32(float32x4_t vec, const int lane);
float32x4_t vdupq_laneq_f32(float32x4_t vec, const int lane);
poly8x8_t vdup_laneq_p8(poly8x16_t vec, const int lane);
poly8x16_t vdupq_laneq_p8(poly8x16_t vec, const int lane);
poly16x4_t vdup_laneq_p16(poly16x8_t vec, const int lane);
poly16x8_t vdupq_laneq_p16(poly16x8_t vec, const int lane);
float64x1_t vdup_laneq_f64(float64x2_t vec, const int lane);
float64x2_t vdupq_laneq_f64(float64x2_t vec, const int lane);
int8x16_t vcombine_s8(int8x8_t low, int8x8_t high);
int16x8_t vcombine_s16(int16x4_t low, int16x4_t high);
int32x4_t vcombine_s32(int32x2_t low, int32x2_t high);
int64x2_t vcombine_s64(int64x1_t low, int64x1_t high);
uint8x16_t vcombine_u8(uint8x8_t low, uint8x8_t high);
uint16x8_t vcombine_u16(uint16x4_t low, uint16x4_t high);
uint32x4_t vcombine_u32(uint32x2_t low, uint32x2_t high);
uint64x2_t vcombine_u64(uint64x1_t low, uint64x1_t high);
poly64x2_t vcombine_p64(poly64x1_t low, poly64x1_t high);
float16x8_t vcombine_f16(float16x4_t low, float16x4_t high);
float32x4_t vcombine_f32(float32x2_t low, float32x2_t high);
poly8x16_t vcombine_p8(poly8x8_t low, poly8x8_t high);
poly16x8_t vcombine_p16(poly16x4_t low, poly16x4_t high);
float64x2_t vcombine_f64(float64x1_t low, float64x1_t high);
int8x8_t vget_high_s8(int8x16_t a);
int16x4_t vget_high_s16(int16x8_t a);
int32x2_t vget_high_s32(int32x4_t a);
int64x1_t vget_high_s64(int64x2_t a);
uint8x8_t vget_high_u8(uint8x16_t a);
uint16x4_t vget_high_u16(uint16x8_t a);
uint32x2_t vget_high_u32(uint32x4_t a);
uint64x1_t vget_high_u64(uint64x2_t a);
poly64x1_t vget_high_p64(poly64x2_t a);
float16x4_t vget_high_f16(float16x8_t a);
float32x2_t vget_high_f32(float32x4_t a);
poly8x8_t vget_high_p8(poly8x16_t a);
poly16x4_t vget_high_p16(poly16x8_t a);
float64x1_t vget_high_f64(float64x2_t a);
int8x8_t vget_low_s8(int8x16_t a);
int16x4_t vget_low_s16(int16x8_t a);
int32x2_t vget_low_s32(int32x4_t a);
int64x1_t vget_low_s64(int64x2_t a);
uint8x8_t vget_low_u8(uint8x16_t a);
uint16x4_t vget_low_u16(uint16x8_t a);
uint32x2_t vget_low_u32(uint32x4_t a);
uint64x1_t vget_low_u64(uint64x2_t a);
poly64x1_t vget_low_p64(poly64x2_t a);
float16x4_t vget_low_f16(float16x8_t a);
float32x2_t vget_low_f32(float32x4_t a);
poly8x8_t vget_low_p8(poly8x16_t a);
poly16x4_t vget_low_p16(poly16x8_t a);
float64x1_t vget_low_f64(float64x2_t a);
int8_t vdupb_lane_s8(int8x8_t vec, const int lane);
int16_t vduph_lane_s16(int16x4_t vec, const int lane);
int32_t vdups_lane_s32(int32x2_t vec, const int lane);
int64_t vdupd_lane_s64(int64x1_t vec, const int lane);
uint8_t vdupb_lane_u8(uint8x8_t vec, const int lane);
uint16_t vduph_lane_u16(uint16x4_t vec, const int lane);
uint32_t vdups_lane_u32(uint32x2_t vec, const int lane);
uint64_t vdupd_lane_u64(uint64x1_t vec, const int lane);
float32_t vdups_lane_f32(float32x2_t vec, const int lane);
float64_t vdupd_lane_f64(float64x1_t vec, const int lane);
poly8_t vdupb_lane_p8(poly8x8_t vec, const int lane);
poly16_t vduph_lane_p16(poly16x4_t vec, const int lane);
int8_t vdupb_laneq_s8(int8x16_t vec, const int lane);
int16_t vduph_laneq_s16(int16x8_t vec, const int lane);
int32_t vdups_laneq_s32(int32x4_t vec, const int lane);
int64_t vdupd_laneq_s64(int64x2_t vec, const int lane);
uint8_t vdupb_laneq_u8(uint8x16_t vec, const int lane);
uint16_t vduph_laneq_u16(uint16x8_t vec, const int lane);
uint32_t vdups_laneq_u32(uint32x4_t vec, const int lane);
uint64_t vdupd_laneq_u64(uint64x2_t vec, const int lane);
float32_t vdups_laneq_f32(float32x4_t vec, const int lane);
float64_t vdupd_laneq_f64(float64x2_t vec, const int lane);
poly8_t vdupb_laneq_p8(poly8x16_t vec, const int lane);
poly16_t vduph_laneq_p16(poly16x8_t vec, const int lane);
int8x8_t vld1_s8(int8_t const * ptr);
int8x16_t vld1q_s8(int8_t const * ptr);
int16x4_t vld1_s16(int16_t const * ptr);
int16x8_t vld1q_s16(int16_t const * ptr);
int32x2_t vld1_s32(int32_t const * ptr);
int32x4_t vld1q_s32(int32_t const * ptr);
int64x1_t vld1_s64(int64_t const * ptr);
int64x2_t vld1q_s64(int64_t const * ptr);
uint8x8_t vld1_u8(uint8_t const * ptr);
uint8x16_t vld1q_u8(uint8_t const * ptr);
uint16x4_t vld1_u16(uint16_t const * ptr);
uint16x8_t vld1q_u16(uint16_t const * ptr);
uint32x2_t vld1_u32(uint32_t const * ptr);
uint32x4_t vld1q_u32(uint32_t const * ptr);
uint64x1_t vld1_u64(uint64_t const * ptr);
uint64x2_t vld1q_u64(uint64_t const * ptr);
poly64x1_t vld1_p64(poly64_t const * ptr);
poly64x2_t vld1q_p64(poly64_t const * ptr);
float16x4_t vld1_f16(float16_t const * ptr);
float16x8_t vld1q_f16(float16_t const * ptr);
float32x2_t vld1_f32(float32_t const * ptr);
float32x4_t vld1q_f32(float32_t const * ptr);
poly8x8_t vld1_p8(poly8_t const * ptr);
poly8x16_t vld1q_p8(poly8_t const * ptr);
poly16x4_t vld1_p16(poly16_t const * ptr);
poly16x8_t vld1q_p16(poly16_t const * ptr);
float64x1_t vld1_f64(float64_t const * ptr);
float64x2_t vld1q_f64(float64_t const * ptr);
int8x8_t vld1_lane_s8(int8_t const * ptr, int8x8_t src, const int lane);
int8x16_t vld1q_lane_s8(int8_t const * ptr, int8x16_t src, const int lane);
int16x4_t vld1_lane_s16(int16_t const * ptr, int16x4_t src, const int lane);
int16x8_t vld1q_lane_s16(int16_t const * ptr, int16x8_t src, const int lane);
int32x2_t vld1_lane_s32(int32_t const * ptr, int32x2_t src, const int lane);
int32x4_t vld1q_lane_s32(int32_t const * ptr, int32x4_t src, const int lane);
int64x1_t vld1_lane_s64(int64_t const * ptr, int64x1_t src, const int lane);
int64x2_t vld1q_lane_s64(int64_t const * ptr, int64x2_t src, const int lane);
uint8x8_t vld1_lane_u8(uint8_t const * ptr, uint8x8_t src, const int lane);
uint8x16_t vld1q_lane_u8(uint8_t const * ptr, uint8x16_t src, const int lane);
uint16x4_t vld1_lane_u16(uint16_t const * ptr, uint16x4_t src, const int lane);
uint16x8_t vld1q_lane_u16(uint16_t const * ptr, uint16x8_t src, const int lane);
uint32x2_t vld1_lane_u32(uint32_t const * ptr, uint32x2_t src, const int lane);
uint32x4_t vld1q_lane_u32(uint32_t const * ptr, uint32x4_t src, const int lane);
uint64x1_t vld1_lane_u64(uint64_t const * ptr, uint64x1_t src, const int lane);
uint64x2_t vld1q_lane_u64(uint64_t const * ptr, uint64x2_t src, const int lane);
poly64x1_t vld1_lane_p64(poly64_t const * ptr, poly64x1_t src, const int lane);
poly64x2_t vld1q_lane_p64(poly64_t const * ptr, poly64x2_t src, const int lane);
float16x4_t vld1_lane_f16(float16_t const * ptr, float16x4_t src, const int lane);
float16x8_t vld1q_lane_f16(float16_t const * ptr, float16x8_t src, const int lane);
float32x2_t vld1_lane_f32(float32_t const * ptr, float32x2_t src, const int lane);
float32x4_t vld1q_lane_f32(float32_t const * ptr, float32x4_t src, const int lane);
poly8x8_t vld1_lane_p8(poly8_t const * ptr, poly8x8_t src, const int lane);
poly8x16_t vld1q_lane_p8(poly8_t const * ptr, poly8x16_t src, const int lane);
poly16x4_t vld1_lane_p16(poly16_t const * ptr, poly16x4_t src, const int lane);
poly16x8_t vld1q_lane_p16(poly16_t const * ptr, poly16x8_t src, const int lane);
float64x1_t vld1_lane_f64(float64_t const * ptr, float64x1_t src, const int lane);
float64x2_t vld1q_lane_f64(float64_t const * ptr, float64x2_t src, const int lane);
int8x8_t vld1_dup_s8(int8_t const * ptr);
int8x16_t vld1q_dup_s8(int8_t const * ptr);
int16x4_t vld1_dup_s16(int16_t const * ptr);
int16x8_t vld1q_dup_s16(int16_t const * ptr);
int32x2_t vld1_dup_s32(int32_t const * ptr);
int32x4_t vld1q_dup_s32(int32_t const * ptr);
int64x1_t vld1_dup_s64(int64_t const * ptr);
int64x2_t vld1q_dup_s64(int64_t const * ptr);
uint8x8_t vld1_dup_u8(uint8_t const * ptr);
uint8x16_t vld1q_dup_u8(uint8_t const * ptr);
uint16x4_t vld1_dup_u16(uint16_t const * ptr);
uint16x8_t vld1q_dup_u16(uint16_t const * ptr);
uint32x2_t vld1_dup_u32(uint32_t const * ptr);
uint32x4_t vld1q_dup_u32(uint32_t const * ptr);
uint64x1_t vld1_dup_u64(uint64_t const * ptr);
uint64x2_t vld1q_dup_u64(uint64_t const * ptr);
poly64x1_t vld1_dup_p64(poly64_t const * ptr);
poly64x2_t vld1q_dup_p64(poly64_t const * ptr);
float16x4_t vld1_dup_f16(float16_t const * ptr);
float16x8_t vld1q_dup_f16(float16_t const * ptr);
float32x2_t vld1_dup_f32(float32_t const * ptr);
float32x4_t vld1q_dup_f32(float32_t const * ptr);
poly8x8_t vld1_dup_p8(poly8_t const * ptr);
poly8x16_t vld1q_dup_p8(poly8_t const * ptr);
poly16x4_t vld1_dup_p16(poly16_t const * ptr);
poly16x8_t vld1q_dup_p16(poly16_t const * ptr);
float64x1_t vld1_dup_f64(float64_t const * ptr);
float64x2_t vld1q_dup_f64(float64_t const * ptr);
void vst1_s8(int8_t * ptr, int8x8_t val);
void vst1q_s8(int8_t * ptr, int8x16_t val);
void vst1_s16(int16_t * ptr, int16x4_t val);
void vst1q_s16(int16_t * ptr, int16x8_t val);
void vst1_s32(int32_t * ptr, int32x2_t val);
void vst1q_s32(int32_t * ptr, int32x4_t val);
void vst1_s64(int64_t * ptr, int64x1_t val);
void vst1q_s64(int64_t * ptr, int64x2_t val);
void vst1_u8(uint8_t * ptr, uint8x8_t val);
void vst1q_u8(uint8_t * ptr, uint8x16_t val);
void vst1_u16(uint16_t * ptr, uint16x4_t val);
void vst1q_u16(uint16_t * ptr, uint16x8_t val);
void vst1_u32(uint32_t * ptr, uint32x2_t val);
void vst1q_u32(uint32_t * ptr, uint32x4_t val);
void vst1_u64(uint64_t * ptr, uint64x1_t val);
void vst1q_u64(uint64_t * ptr, uint64x2_t val);
void vst1_p64(poly64_t * ptr, poly64x1_t val);
void vst1q_p64(poly64_t * ptr, poly64x2_t val);
void vst1_f16(float16_t * ptr, float16x4_t val);
void vst1q_f16(float16_t * ptr, float16x8_t val);
void vst1_f32(float32_t * ptr, float32x2_t val);
void vst1q_f32(float32_t * ptr, float32x4_t val);
void vst1_p8(poly8_t * ptr, poly8x8_t val);
void vst1q_p8(poly8_t * ptr, poly8x16_t val);
void vst1_p16(poly16_t * ptr, poly16x4_t val);
void vst1q_p16(poly16_t * ptr, poly16x8_t val);
void vst1_f64(float64_t * ptr, float64x1_t val);
void vst1q_f64(float64_t * ptr, float64x2_t val);
void vst1_lane_s8(int8_t * ptr, int8x8_t val, const int lane);
void vst1q_lane_s8(int8_t * ptr, int8x16_t val, const int lane);
void vst1_lane_s16(int16_t * ptr, int16x4_t val, const int lane);
void vst1q_lane_s16(int16_t * ptr, int16x8_t val, const int lane);
void vst1_lane_s32(int32_t * ptr, int32x2_t val, const int lane);
void vst1q_lane_s32(int32_t * ptr, int32x4_t val, const int lane);
void vst1_lane_s64(int64_t * ptr, int64x1_t val, const int lane);
void vst1q_lane_s64(int64_t * ptr, int64x2_t val, const int lane);
void vst1_lane_u8(uint8_t * ptr, uint8x8_t val, const int lane);
void vst1q_lane_u8(uint8_t * ptr, uint8x16_t val, const int lane);
void vst1_lane_u16(uint16_t * ptr, uint16x4_t val, const int lane);
void vst1q_lane_u16(uint16_t * ptr, uint16x8_t val, const int lane);
void vst1_lane_u32(uint32_t * ptr, uint32x2_t val, const int lane);
void vst1q_lane_u32(uint32_t * ptr, uint32x4_t val, const int lane);
void vst1_lane_u64(uint64_t * ptr, uint64x1_t val, const int lane);
void vst1q_lane_u64(uint64_t * ptr, uint64x2_t val, const int lane);
void vst1_lane_p64(poly64_t * ptr, poly64x1_t val, const int lane);
void vst1q_lane_p64(poly64_t * ptr, poly64x2_t val, const int lane);
void vst1_lane_f16(float16_t * ptr, float16x4_t val, const int lane);
void vst1q_lane_f16(float16_t * ptr, float16x8_t val, const int lane);
void vst1_lane_f32(float32_t * ptr, float32x2_t val, const int lane);
void vst1q_lane_f32(float32_t * ptr, float32x4_t val, const int lane);
void vst1_lane_p8(poly8_t * ptr, poly8x8_t val, const int lane);
void vst1q_lane_p8(poly8_t * ptr, poly8x16_t val, const int lane);
void vst1_lane_p16(poly16_t * ptr, poly16x4_t val, const int lane);
void vst1q_lane_p16(poly16_t * ptr, poly16x8_t val, const int lane);
void vst1_lane_f64(float64_t * ptr, float64x1_t val, const int lane);
void vst1q_lane_f64(float64_t * ptr, float64x2_t val, const int lane);
int8x8x2_t vld2_s8(int8_t const * ptr);
int8x16x2_t vld2q_s8(int8_t const * ptr);
int16x4x2_t vld2_s16(int16_t const * ptr);
int16x8x2_t vld2q_s16(int16_t const * ptr);
int32x2x2_t vld2_s32(int32_t const * ptr);
int32x4x2_t vld2q_s32(int32_t const * ptr);
uint8x8x2_t vld2_u8(uint8_t const * ptr);
uint8x16x2_t vld2q_u8(uint8_t const * ptr);
uint16x4x2_t vld2_u16(uint16_t const * ptr);
uint16x8x2_t vld2q_u16(uint16_t const * ptr);
uint32x2x2_t vld2_u32(uint32_t const * ptr);
uint32x4x2_t vld2q_u32(uint32_t const * ptr);
float16x4x2_t vld2_f16(float16_t const * ptr);
float16x8x2_t vld2q_f16(float16_t const * ptr);
float32x2x2_t vld2_f32(float32_t const * ptr);
float32x4x2_t vld2q_f32(float32_t const * ptr);
poly8x8x2_t vld2_p8(poly8_t const * ptr);
poly8x16x2_t vld2q_p8(poly8_t const * ptr);
poly16x4x2_t vld2_p16(poly16_t const * ptr);
poly16x8x2_t vld2q_p16(poly16_t const * ptr);
int64x1x2_t vld2_s64(int64_t const * ptr);
uint64x1x2_t vld2_u64(uint64_t const * ptr);
poly64x1x2_t vld2_p64(poly64_t const * ptr);
int64x2x2_t vld2q_s64(int64_t const * ptr);
uint64x2x2_t vld2q_u64(uint64_t const * ptr);
poly64x2x2_t vld2q_p64(poly64_t const * ptr);
float64x1x2_t vld2_f64(float64_t const * ptr);
float64x2x2_t vld2q_f64(float64_t const * ptr);
int8x8x3_t vld3_s8(int8_t const * ptr);
int8x16x3_t vld3q_s8(int8_t const * ptr);
int16x4x3_t vld3_s16(int16_t const * ptr);
int16x8x3_t vld3q_s16(int16_t const * ptr);
int32x2x3_t vld3_s32(int32_t const * ptr);
int32x4x3_t vld3q_s32(int32_t const * ptr);
uint8x8x3_t vld3_u8(uint8_t const * ptr);
uint8x16x3_t vld3q_u8(uint8_t const * ptr);
uint16x4x3_t vld3_u16(uint16_t const * ptr);
uint16x8x3_t vld3q_u16(uint16_t const * ptr);
uint32x2x3_t vld3_u32(uint32_t const * ptr);
uint32x4x3_t vld3q_u32(uint32_t const * ptr);
float16x4x3_t vld3_f16(float16_t const * ptr);
float16x8x3_t vld3q_f16(float16_t const * ptr);
float32x2x3_t vld3_f32(float32_t const * ptr);
float32x4x3_t vld3q_f32(float32_t const * ptr);
poly8x8x3_t vld3_p8(poly8_t const * ptr);
poly8x16x3_t vld3q_p8(poly8_t const * ptr);
poly16x4x3_t vld3_p16(poly16_t const * ptr);
poly16x8x3_t vld3q_p16(poly16_t const * ptr);
int64x1x3_t vld3_s64(int64_t const * ptr);
uint64x1x3_t vld3_u64(uint64_t const * ptr);
poly64x1x3_t vld3_p64(poly64_t const * ptr);
int64x2x3_t vld3q_s64(int64_t const * ptr);
uint64x2x3_t vld3q_u64(uint64_t const * ptr);
poly64x2x3_t vld3q_p64(poly64_t const * ptr);
float64x1x3_t vld3_f64(float64_t const * ptr);
float64x2x3_t vld3q_f64(float64_t const * ptr);
int8x8x4_t vld4_s8(int8_t const * ptr);
int8x16x4_t vld4q_s8(int8_t const * ptr);
int16x4x4_t vld4_s16(int16_t const * ptr);
int16x8x4_t vld4q_s16(int16_t const * ptr);
int32x2x4_t vld4_s32(int32_t const * ptr);
int32x4x4_t vld4q_s32(int32_t const * ptr);
uint8x8x4_t vld4_u8(uint8_t const * ptr);
uint8x16x4_t vld4q_u8(uint8_t const * ptr);
uint16x4x4_t vld4_u16(uint16_t const * ptr);
uint16x8x4_t vld4q_u16(uint16_t const * ptr);
uint32x2x4_t vld4_u32(uint32_t const * ptr);
uint32x4x4_t vld4q_u32(uint32_t const * ptr);
float16x4x4_t vld4_f16(float16_t const * ptr);
float16x8x4_t vld4q_f16(float16_t const * ptr);
float32x2x4_t vld4_f32(float32_t const * ptr);
float32x4x4_t vld4q_f32(float32_t const * ptr);
poly8x8x4_t vld4_p8(poly8_t const * ptr);
poly8x16x4_t vld4q_p8(poly8_t const * ptr);
poly16x4x4_t vld4_p16(poly16_t const * ptr);
poly16x8x4_t vld4q_p16(poly16_t const * ptr);
int64x1x4_t vld4_s64(int64_t const * ptr);
uint64x1x4_t vld4_u64(uint64_t const * ptr);
poly64x1x4_t vld4_p64(poly64_t const * ptr);
int64x2x4_t vld4q_s64(int64_t const * ptr);
uint64x2x4_t vld4q_u64(uint64_t const * ptr);
poly64x2x4_t vld4q_p64(poly64_t const * ptr);
float64x1x4_t vld4_f64(float64_t const * ptr);
float64x2x4_t vld4q_f64(float64_t const * ptr);
int8x8x2_t vld2_dup_s8(int8_t const * ptr);
int8x16x2_t vld2q_dup_s8(int8_t const * ptr);
int16x4x2_t vld2_dup_s16(int16_t const * ptr);
int16x8x2_t vld2q_dup_s16(int16_t const * ptr);
int32x2x2_t vld2_dup_s32(int32_t const * ptr);
int32x4x2_t vld2q_dup_s32(int32_t const * ptr);
uint8x8x2_t vld2_dup_u8(uint8_t const * ptr);
uint8x16x2_t vld2q_dup_u8(uint8_t const * ptr);
uint16x4x2_t vld2_dup_u16(uint16_t const * ptr);
uint16x8x2_t vld2q_dup_u16(uint16_t const * ptr);
uint32x2x2_t vld2_dup_u32(uint32_t const * ptr);
uint32x4x2_t vld2q_dup_u32(uint32_t const * ptr);
float16x4x2_t vld2_dup_f16(float16_t const * ptr);
float16x8x2_t vld2q_dup_f16(float16_t const * ptr);
float32x2x2_t vld2_dup_f32(float32_t const * ptr);
float32x4x2_t vld2q_dup_f32(float32_t const * ptr);
poly8x8x2_t vld2_dup_p8(poly8_t const * ptr);
poly8x16x2_t vld2q_dup_p8(poly8_t const * ptr);
poly16x4x2_t vld2_dup_p16(poly16_t const * ptr);
poly16x8x2_t vld2q_dup_p16(poly16_t const * ptr);
int64x1x2_t vld2_dup_s64(int64_t const * ptr);
uint64x1x2_t vld2_dup_u64(uint64_t const * ptr);
poly64x1x2_t vld2_dup_p64(poly64_t const * ptr);
int64x2x2_t vld2q_dup_s64(int64_t const * ptr);
uint64x2x2_t vld2q_dup_u64(uint64_t const * ptr);
poly64x2x2_t vld2q_dup_p64(poly64_t const * ptr);
float64x1x2_t vld2_dup_f64(float64_t const * ptr);
float64x2x2_t vld2q_dup_f64(float64_t const * ptr);
int8x8x3_t vld3_dup_s8(int8_t const * ptr);
int8x16x3_t vld3q_dup_s8(int8_t const * ptr);
int16x4x3_t vld3_dup_s16(int16_t const * ptr);
int16x8x3_t vld3q_dup_s16(int16_t const * ptr);
int32x2x3_t vld3_dup_s32(int32_t const * ptr);
int32x4x3_t vld3q_dup_s32(int32_t const * ptr);
uint8x8x3_t vld3_dup_u8(uint8_t const * ptr);
uint8x16x3_t vld3q_dup_u8(uint8_t const * ptr);
uint16x4x3_t vld3_dup_u16(uint16_t const * ptr);
uint16x8x3_t vld3q_dup_u16(uint16_t const * ptr);
uint32x2x3_t vld3_dup_u32(uint32_t const * ptr);
uint32x4x3_t vld3q_dup_u32(uint32_t const * ptr);
float16x4x3_t vld3_dup_f16(float16_t const * ptr);
float16x8x3_t vld3q_dup_f16(float16_t const * ptr);
float32x2x3_t vld3_dup_f32(float32_t const * ptr);
float32x4x3_t vld3q_dup_f32(float32_t const * ptr);
poly8x8x3_t vld3_dup_p8(poly8_t const * ptr);
poly8x16x3_t vld3q_dup_p8(poly8_t const * ptr);
poly16x4x3_t vld3_dup_p16(poly16_t const * ptr);
poly16x8x3_t vld3q_dup_p16(poly16_t const * ptr);
int64x1x3_t vld3_dup_s64(int64_t const * ptr);
uint64x1x3_t vld3_dup_u64(uint64_t const * ptr);
poly64x1x3_t vld3_dup_p64(poly64_t const * ptr);
int64x2x3_t vld3q_dup_s64(int64_t const * ptr);
uint64x2x3_t vld3q_dup_u64(uint64_t const * ptr);
poly64x2x3_t vld3q_dup_p64(poly64_t const * ptr);
float64x1x3_t vld3_dup_f64(float64_t const * ptr);
float64x2x3_t vld3q_dup_f64(float64_t const * ptr);
int8x8x4_t vld4_dup_s8(int8_t const * ptr);
int8x16x4_t vld4q_dup_s8(int8_t const * ptr);
int16x4x4_t vld4_dup_s16(int16_t const * ptr);
int16x8x4_t vld4q_dup_s16(int16_t const * ptr);
int32x2x4_t vld4_dup_s32(int32_t const * ptr);
int32x4x4_t vld4q_dup_s32(int32_t const * ptr);
uint8x8x4_t vld4_dup_u8(uint8_t const * ptr);
uint8x16x4_t vld4q_dup_u8(uint8_t const * ptr);
uint16x4x4_t vld4_dup_u16(uint16_t const * ptr);
uint16x8x4_t vld4q_dup_u16(uint16_t const * ptr);
uint32x2x4_t vld4_dup_u32(uint32_t const * ptr);
uint32x4x4_t vld4q_dup_u32(uint32_t const * ptr);
float16x4x4_t vld4_dup_f16(float16_t const * ptr);
float16x8x4_t vld4q_dup_f16(float16_t const * ptr);
float32x2x4_t vld4_dup_f32(float32_t const * ptr);
float32x4x4_t vld4q_dup_f32(float32_t const * ptr);
poly8x8x4_t vld4_dup_p8(poly8_t const * ptr);
poly8x16x4_t vld4q_dup_p8(poly8_t const * ptr);
poly16x4x4_t vld4_dup_p16(poly16_t const * ptr);
poly16x8x4_t vld4q_dup_p16(poly16_t const * ptr);
int64x1x4_t vld4_dup_s64(int64_t const * ptr);
uint64x1x4_t vld4_dup_u64(uint64_t const * ptr);
poly64x1x4_t vld4_dup_p64(poly64_t const * ptr);
int64x2x4_t vld4q_dup_s64(int64_t const * ptr);
uint64x2x4_t vld4q_dup_u64(uint64_t const * ptr);
poly64x2x4_t vld4q_dup_p64(poly64_t const * ptr);
float64x1x4_t vld4_dup_f64(float64_t const * ptr);
float64x2x4_t vld4q_dup_f64(float64_t const * ptr);
void vst2_s8(int8_t * ptr, int8x8x2_t val);
void vst2q_s8(int8_t * ptr, int8x16x2_t val);
void vst2_s16(int16_t * ptr, int16x4x2_t val);
void vst2q_s16(int16_t * ptr, int16x8x2_t val);
void vst2_s32(int32_t * ptr, int32x2x2_t val);
void vst2q_s32(int32_t * ptr, int32x4x2_t val);
void vst2_u8(uint8_t * ptr, uint8x8x2_t val);
void vst2q_u8(uint8_t * ptr, uint8x16x2_t val);
void vst2_u16(uint16_t * ptr, uint16x4x2_t val);
void vst2q_u16(uint16_t * ptr, uint16x8x2_t val);
void vst2_u32(uint32_t * ptr, uint32x2x2_t val);
void vst2q_u32(uint32_t * ptr, uint32x4x2_t val);
void vst2_f16(float16_t * ptr, float16x4x2_t val);
void vst2q_f16(float16_t * ptr, float16x8x2_t val);
void vst2_f32(float32_t * ptr, float32x2x2_t val);
void vst2q_f32(float32_t * ptr, float32x4x2_t val);
void vst2_p8(poly8_t * ptr, poly8x8x2_t val);
void vst2q_p8(poly8_t * ptr, poly8x16x2_t val);
void vst2_p16(poly16_t * ptr, poly16x4x2_t val);
void vst2q_p16(poly16_t * ptr, poly16x8x2_t val);
void vst2_s64(int64_t * ptr, int64x1x2_t val);
void vst2_u64(uint64_t * ptr, uint64x1x2_t val);
void vst2_p64(poly64_t * ptr, poly64x1x2_t val);
void vst2q_s64(int64_t * ptr, int64x2x2_t val);
void vst2q_u64(uint64_t * ptr, uint64x2x2_t val);
void vst2q_p64(poly64_t * ptr, poly64x2x2_t val);
void vst2_f64(float64_t * ptr, float64x1x2_t val);
void vst2q_f64(float64_t * ptr, float64x2x2_t val);
void vst3_s8(int8_t * ptr, int8x8x3_t val);
void vst3q_s8(int8_t * ptr, int8x16x3_t val);
void vst3_s16(int16_t * ptr, int16x4x3_t val);
void vst3q_s16(int16_t * ptr, int16x8x3_t val);
void vst3_s32(int32_t * ptr, int32x2x3_t val);
void vst3q_s32(int32_t * ptr, int32x4x3_t val);
void vst3_u8(uint8_t * ptr, uint8x8x3_t val);
void vst3q_u8(uint8_t * ptr, uint8x16x3_t val);
void vst3_u16(uint16_t * ptr, uint16x4x3_t val);
void vst3q_u16(uint16_t * ptr, uint16x8x3_t val);
void vst3_u32(uint32_t * ptr, uint32x2x3_t val);
void vst3q_u32(uint32_t * ptr, uint32x4x3_t val);
void vst3_f16(float16_t * ptr, float16x4x3_t val);
void vst3q_f16(float16_t * ptr, float16x8x3_t val);
void vst3_f32(float32_t * ptr, float32x2x3_t val);
void vst3q_f32(float32_t * ptr, float32x4x3_t val);
void vst3_p8(poly8_t * ptr, poly8x8x3_t val);
void vst3q_p8(poly8_t * ptr, poly8x16x3_t val);
void vst3_p16(poly16_t * ptr, poly16x4x3_t val);
void vst3q_p16(poly16_t * ptr, poly16x8x3_t val);
void vst3_s64(int64_t * ptr, int64x1x3_t val);
void vst3_u64(uint64_t * ptr, uint64x1x3_t val);
void vst3_p64(poly64_t * ptr, poly64x1x3_t val);
void vst3q_s64(int64_t * ptr, int64x2x3_t val);
void vst3q_u64(uint64_t * ptr, uint64x2x3_t val);
void vst3q_p64(poly64_t * ptr, poly64x2x3_t val);
void vst3_f64(float64_t * ptr, float64x1x3_t val);
void vst3q_f64(float64_t * ptr, float64x2x3_t val);
void vst4_s8(int8_t * ptr, int8x8x4_t val);
void vst4q_s8(int8_t * ptr, int8x16x4_t val);
void vst4_s16(int16_t * ptr, int16x4x4_t val);
void vst4q_s16(int16_t * ptr, int16x8x4_t val);
void vst4_s32(int32_t * ptr, int32x2x4_t val);
void vst4q_s32(int32_t * ptr, int32x4x4_t val);
void vst4_u8(uint8_t * ptr, uint8x8x4_t val);
void vst4q_u8(uint8_t * ptr, uint8x16x4_t val);
void vst4_u16(uint16_t * ptr, uint16x4x4_t val);
void vst4q_u16(uint16_t * ptr, uint16x8x4_t val);
void vst4_u32(uint32_t * ptr, uint32x2x4_t val);
void vst4q_u32(uint32_t * ptr, uint32x4x4_t val);
void vst4_f16(float16_t * ptr, float16x4x4_t val);
void vst4q_f16(float16_t * ptr, float16x8x4_t val);
void vst4_f32(float32_t * ptr, float32x2x4_t val);
void vst4q_f32(float32_t * ptr, float32x4x4_t val);
void vst4_p8(poly8_t * ptr, poly8x8x4_t val);
void vst4q_p8(poly8_t * ptr, poly8x16x4_t val);
void vst4_p16(poly16_t * ptr, poly16x4x4_t val);
void vst4q_p16(poly16_t * ptr, poly16x8x4_t val);
void vst4_s64(int64_t * ptr, int64x1x4_t val);
void vst4_u64(uint64_t * ptr, uint64x1x4_t val);
void vst4_p64(poly64_t * ptr, poly64x1x4_t val);
void vst4q_s64(int64_t * ptr, int64x2x4_t val);
void vst4q_u64(uint64_t * ptr, uint64x2x4_t val);
void vst4q_p64(poly64_t * ptr, poly64x2x4_t val);
void vst4_f64(float64_t * ptr, float64x1x4_t val);
void vst4q_f64(float64_t * ptr, float64x2x4_t val);
int16x4x2_t vld2_lane_s16(int16_t const * ptr, int16x4x2_t src, const int lane);
int16x8x2_t vld2q_lane_s16(int16_t const * ptr, int16x8x2_t src, const int lane);
int32x2x2_t vld2_lane_s32(int32_t const * ptr, int32x2x2_t src, const int lane);
int32x4x2_t vld2q_lane_s32(int32_t const * ptr, int32x4x2_t src, const int lane);
uint16x4x2_t vld2_lane_u16(uint16_t const * ptr, uint16x4x2_t src, const int lane);
uint16x8x2_t vld2q_lane_u16(uint16_t const * ptr, uint16x8x2_t src, const int lane);
uint32x2x2_t vld2_lane_u32(uint32_t const * ptr, uint32x2x2_t src, const int lane);
uint32x4x2_t vld2q_lane_u32(uint32_t const * ptr, uint32x4x2_t src, const int lane);
float16x4x2_t vld2_lane_f16(float16_t const * ptr, float16x4x2_t src, const int lane);
float16x8x2_t vld2q_lane_f16(float16_t const * ptr, float16x8x2_t src, const int lane);
float32x2x2_t vld2_lane_f32(float32_t const * ptr, float32x2x2_t src, const int lane);
float32x4x2_t vld2q_lane_f32(float32_t const * ptr, float32x4x2_t src, const int lane);
poly16x4x2_t vld2_lane_p16(poly16_t const * ptr, poly16x4x2_t src, const int lane);
poly16x8x2_t vld2q_lane_p16(poly16_t const * ptr, poly16x8x2_t src, const int lane);
int8x8x2_t vld2_lane_s8(int8_t const * ptr, int8x8x2_t src, const int lane);
uint8x8x2_t vld2_lane_u8(uint8_t const * ptr, uint8x8x2_t src, const int lane);
poly8x8x2_t vld2_lane_p8(poly8_t const * ptr, poly8x8x2_t src, const int lane);
int8x16x2_t vld2q_lane_s8(int8_t const * ptr, int8x16x2_t src, const int lane);
uint8x16x2_t vld2q_lane_u8(uint8_t const * ptr, uint8x16x2_t src, const int lane);
poly8x16x2_t vld2q_lane_p8(poly8_t const * ptr, poly8x16x2_t src, const int lane);
int64x1x2_t vld2_lane_s64(int64_t const * ptr, int64x1x2_t src, const int lane);
int64x2x2_t vld2q_lane_s64(int64_t const * ptr, int64x2x2_t src, const int lane);
uint64x1x2_t vld2_lane_u64(uint64_t const * ptr, uint64x1x2_t src, const int lane);
uint64x2x2_t vld2q_lane_u64(uint64_t const * ptr, uint64x2x2_t src, const int lane);
poly64x1x2_t vld2_lane_p64(poly64_t const * ptr, poly64x1x2_t src, const int lane);
poly64x2x2_t vld2q_lane_p64(poly64_t const * ptr, poly64x2x2_t src, const int lane);
float64x1x2_t vld2_lane_f64(float64_t const * ptr, float64x1x2_t src, const int lane);
float64x2x2_t vld2q_lane_f64(float64_t const * ptr, float64x2x2_t src, const int lane);
int16x4x3_t vld3_lane_s16(int16_t const * ptr, int16x4x3_t src, const int lane);
int16x8x3_t vld3q_lane_s16(int16_t const * ptr, int16x8x3_t src, const int lane);
int32x2x3_t vld3_lane_s32(int32_t const * ptr, int32x2x3_t src, const int lane);
int32x4x3_t vld3q_lane_s32(int32_t const * ptr, int32x4x3_t src, const int lane);
uint16x4x3_t vld3_lane_u16(uint16_t const * ptr, uint16x4x3_t src, const int lane);
uint16x8x3_t vld3q_lane_u16(uint16_t const * ptr, uint16x8x3_t src, const int lane);
uint32x2x3_t vld3_lane_u32(uint32_t const * ptr, uint32x2x3_t src, const int lane);
uint32x4x3_t vld3q_lane_u32(uint32_t const * ptr, uint32x4x3_t src, const int lane);
float16x4x3_t vld3_lane_f16(float16_t const * ptr, float16x4x3_t src, const int lane);
float16x8x3_t vld3q_lane_f16(float16_t const * ptr, float16x8x3_t src, const int lane);
float32x2x3_t vld3_lane_f32(float32_t const * ptr, float32x2x3_t src, const int lane);
float32x4x3_t vld3q_lane_f32(float32_t const * ptr, float32x4x3_t src, const int lane);
poly16x4x3_t vld3_lane_p16(poly16_t const * ptr, poly16x4x3_t src, const int lane);
poly16x8x3_t vld3q_lane_p16(poly16_t const * ptr, poly16x8x3_t src, const int lane);
int8x8x3_t vld3_lane_s8(int8_t const * ptr, int8x8x3_t src, const int lane);
uint8x8x3_t vld3_lane_u8(uint8_t const * ptr, uint8x8x3_t src, const int lane);
poly8x8x3_t vld3_lane_p8(poly8_t const * ptr, poly8x8x3_t src, const int lane);
int8x16x3_t vld3q_lane_s8(int8_t const * ptr, int8x16x3_t src, const int lane);
uint8x16x3_t vld3q_lane_u8(uint8_t const * ptr, uint8x16x3_t src, const int lane);
poly8x16x3_t vld3q_lane_p8(poly8_t const * ptr, poly8x16x3_t src, const int lane);
int64x1x3_t vld3_lane_s64(int64_t const * ptr, int64x1x3_t src, const int lane);
int64x2x3_t vld3q_lane_s64(int64_t const * ptr, int64x2x3_t src, const int lane);
uint64x1x3_t vld3_lane_u64(uint64_t const * ptr, uint64x1x3_t src, const int lane);
uint64x2x3_t vld3q_lane_u64(uint64_t const * ptr, uint64x2x3_t src, const int lane);
poly64x1x3_t vld3_lane_p64(poly64_t const * ptr, poly64x1x3_t src, const int lane);
poly64x2x3_t vld3q_lane_p64(poly64_t const * ptr, poly64x2x3_t src, const int lane);
float64x1x3_t vld3_lane_f64(float64_t const * ptr, float64x1x3_t src, const int lane);
float64x2x3_t vld3q_lane_f64(float64_t const * ptr, float64x2x3_t src, const int lane);
int16x4x4_t vld4_lane_s16(int16_t const * ptr, int16x4x4_t src, const int lane);
int16x8x4_t vld4q_lane_s16(int16_t const * ptr, int16x8x4_t src, const int lane);
int32x2x4_t vld4_lane_s32(int32_t const * ptr, int32x2x4_t src, const int lane);
int32x4x4_t vld4q_lane_s32(int32_t const * ptr, int32x4x4_t src, const int lane);
uint16x4x4_t vld4_lane_u16(uint16_t const * ptr, uint16x4x4_t src, const int lane);
uint16x8x4_t vld4q_lane_u16(uint16_t const * ptr, uint16x8x4_t src, const int lane);
uint32x2x4_t vld4_lane_u32(uint32_t const * ptr, uint32x2x4_t src, const int lane);
uint32x4x4_t vld4q_lane_u32(uint32_t const * ptr, uint32x4x4_t src, const int lane);
float16x4x4_t vld4_lane_f16(float16_t const * ptr, float16x4x4_t src, const int lane);
float16x8x4_t vld4q_lane_f16(float16_t const * ptr, float16x8x4_t src, const int lane);
float32x2x4_t vld4_lane_f32(float32_t const * ptr, float32x2x4_t src, const int lane);
float32x4x4_t vld4q_lane_f32(float32_t const * ptr, float32x4x4_t src, const int lane);
poly16x4x4_t vld4_lane_p16(poly16_t const * ptr, poly16x4x4_t src, const int lane);
poly16x8x4_t vld4q_lane_p16(poly16_t const * ptr, poly16x8x4_t src, const int lane);
int8x8x4_t vld4_lane_s8(int8_t const * ptr, int8x8x4_t src, const int lane);
uint8x8x4_t vld4_lane_u8(uint8_t const * ptr, uint8x8x4_t src, const int lane);
poly8x8x4_t vld4_lane_p8(poly8_t const * ptr, poly8x8x4_t src, const int lane);
int8x16x4_t vld4q_lane_s8(int8_t const * ptr, int8x16x4_t src, const int lane);
uint8x16x4_t vld4q_lane_u8(uint8_t const * ptr, uint8x16x4_t src, const int lane);
poly8x16x4_t vld4q_lane_p8(poly8_t const * ptr, poly8x16x4_t src, const int lane);
int64x1x4_t vld4_lane_s64(int64_t const * ptr, int64x1x4_t src, const int lane);
int64x2x4_t vld4q_lane_s64(int64_t const * ptr, int64x2x4_t src, const int lane);
uint64x1x4_t vld4_lane_u64(uint64_t const * ptr, uint64x1x4_t src, const int lane);
uint64x2x4_t vld4q_lane_u64(uint64_t const * ptr, uint64x2x4_t src, const int lane);
poly64x1x4_t vld4_lane_p64(poly64_t const * ptr, poly64x1x4_t src, const int lane);
poly64x2x4_t vld4q_lane_p64(poly64_t const * ptr, poly64x2x4_t src, const int lane);
float64x1x4_t vld4_lane_f64(float64_t const * ptr, float64x1x4_t src, const int lane);
float64x2x4_t vld4q_lane_f64(float64_t const * ptr, float64x2x4_t src, const int lane);
void vst2_lane_s8(int8_t * ptr, int8x8x2_t val, const int lane);
void vst2_lane_u8(uint8_t * ptr, uint8x8x2_t val, const int lane);
void vst2_lane_p8(poly8_t * ptr, poly8x8x2_t val, const int lane);
void vst3_lane_s8(int8_t * ptr, int8x8x3_t val, const int lane);
void vst3_lane_u8(uint8_t * ptr, uint8x8x3_t val, const int lane);
void vst3_lane_p8(poly8_t * ptr, poly8x8x3_t val, const int lane);
void vst4_lane_s8(int8_t * ptr, int8x8x4_t val, const int lane);
void vst4_lane_u8(uint8_t * ptr, uint8x8x4_t val, const int lane);
void vst4_lane_p8(poly8_t * ptr, poly8x8x4_t val, const int lane);
void vst2_lane_s16(int16_t * ptr, int16x4x2_t val, const int lane);
void vst2q_lane_s16(int16_t * ptr, int16x8x2_t val, const int lane);
void vst2_lane_s32(int32_t * ptr, int32x2x2_t val, const int lane);
void vst2q_lane_s32(int32_t * ptr, int32x4x2_t val, const int lane);
void vst2_lane_u16(uint16_t * ptr, uint16x4x2_t val, const int lane);
void vst2q_lane_u16(uint16_t * ptr, uint16x8x2_t val, const int lane);
void vst2_lane_u32(uint32_t * ptr, uint32x2x2_t val, const int lane);
void vst2q_lane_u32(uint32_t * ptr, uint32x4x2_t val, const int lane);
void vst2_lane_f16(float16_t * ptr, float16x4x2_t val, const int lane);
void vst2q_lane_f16(float16_t * ptr, float16x8x2_t val, const int lane);
void vst2_lane_f32(float32_t * ptr, float32x2x2_t val, const int lane);
void vst2q_lane_f32(float32_t * ptr, float32x4x2_t val, const int lane);
void vst2_lane_p16(poly16_t * ptr, poly16x4x2_t val, const int lane);
void vst2q_lane_p16(poly16_t * ptr, poly16x8x2_t val, const int lane);
void vst2q_lane_s8(int8_t * ptr, int8x16x2_t val, const int lane);
void vst2q_lane_u8(uint8_t * ptr, uint8x16x2_t val, const int lane);
void vst2q_lane_p8(poly8_t * ptr, poly8x16x2_t val, const int lane);
void vst2_lane_s64(int64_t * ptr, int64x1x2_t val, const int lane);
void vst2q_lane_s64(int64_t * ptr, int64x2x2_t val, const int lane);
void vst2_lane_u64(uint64_t * ptr, uint64x1x2_t val, const int lane);
void vst2q_lane_u64(uint64_t * ptr, uint64x2x2_t val, const int lane);
void vst2_lane_p64(poly64_t * ptr, poly64x1x2_t val, const int lane);
void vst2q_lane_p64(poly64_t * ptr, poly64x2x2_t val, const int lane);
void vst2_lane_f64(float64_t * ptr, float64x1x2_t val, const int lane);
void vst2q_lane_f64(float64_t * ptr, float64x2x2_t val, const int lane);
void vst3_lane_s16(int16_t * ptr, int16x4x3_t val, const int lane);
void vst3q_lane_s16(int16_t * ptr, int16x8x3_t val, const int lane);
void vst3_lane_s32(int32_t * ptr, int32x2x3_t val, const int lane);
void vst3q_lane_s32(int32_t * ptr, int32x4x3_t val, const int lane);
void vst3_lane_u16(uint16_t * ptr, uint16x4x3_t val, const int lane);
void vst3q_lane_u16(uint16_t * ptr, uint16x8x3_t val, const int lane);
void vst3_lane_u32(uint32_t * ptr, uint32x2x3_t val, const int lane);
void vst3q_lane_u32(uint32_t * ptr, uint32x4x3_t val, const int lane);
void vst3_lane_f16(float16_t * ptr, float16x4x3_t val, const int lane);
void vst3q_lane_f16(float16_t * ptr, float16x8x3_t val, const int lane);
void vst3_lane_f32(float32_t * ptr, float32x2x3_t val, const int lane);
void vst3q_lane_f32(float32_t * ptr, float32x4x3_t val, const int lane);
void vst3_lane_p16(poly16_t * ptr, poly16x4x3_t val, const int lane);
void vst3q_lane_p16(poly16_t * ptr, poly16x8x3_t val, const int lane);
void vst3q_lane_s8(int8_t * ptr, int8x16x3_t val, const int lane);
void vst3q_lane_u8(uint8_t * ptr, uint8x16x3_t val, const int lane);
void vst3q_lane_p8(poly8_t * ptr, poly8x16x3_t val, const int lane);
void vst3_lane_s64(int64_t * ptr, int64x1x3_t val, const int lane);
void vst3q_lane_s64(int64_t * ptr, int64x2x3_t val, const int lane);
void vst3_lane_u64(uint64_t * ptr, uint64x1x3_t val, const int lane);
void vst3q_lane_u64(uint64_t * ptr, uint64x2x3_t val, const int lane);
void vst3_lane_p64(poly64_t * ptr, poly64x1x3_t val, const int lane);
void vst3q_lane_p64(poly64_t * ptr, poly64x2x3_t val, const int lane);
void vst3_lane_f64(float64_t * ptr, float64x1x3_t val, const int lane);
void vst3q_lane_f64(float64_t * ptr, float64x2x3_t val, const int lane);
void vst4_lane_s16(int16_t * ptr, int16x4x4_t val, const int lane);
void vst4q_lane_s16(int16_t * ptr, int16x8x4_t val, const int lane);
void vst4_lane_s32(int32_t * ptr, int32x2x4_t val, const int lane);
void vst4q_lane_s32(int32_t * ptr, int32x4x4_t val, const int lane);
void vst4_lane_u16(uint16_t * ptr, uint16x4x4_t val, const int lane);
void vst4q_lane_u16(uint16_t * ptr, uint16x8x4_t val, const int lane);
void vst4_lane_u32(uint32_t * ptr, uint32x2x4_t val, const int lane);
void vst4q_lane_u32(uint32_t * ptr, uint32x4x4_t val, const int lane);
void vst4_lane_f16(float16_t * ptr, float16x4x4_t val, const int lane);
void vst4q_lane_f16(float16_t * ptr, float16x8x4_t val, const int lane);
void vst4_lane_f32(float32_t * ptr, float32x2x4_t val, const int lane);
void vst4q_lane_f32(float32_t * ptr, float32x4x4_t val, const int lane);
void vst4_lane_p16(poly16_t * ptr, poly16x4x4_t val, const int lane);
void vst4q_lane_p16(poly16_t * ptr, poly16x8x4_t val, const int lane);
void vst4q_lane_s8(int8_t * ptr, int8x16x4_t val, const int lane);
void vst4q_lane_u8(uint8_t * ptr, uint8x16x4_t val, const int lane);
void vst4q_lane_p8(poly8_t * ptr, poly8x16x4_t val, const int lane);
void vst4_lane_s64(int64_t * ptr, int64x1x4_t val, const int lane);
void vst4q_lane_s64(int64_t * ptr, int64x2x4_t val, const int lane);
void vst4_lane_u64(uint64_t * ptr, uint64x1x4_t val, const int lane);
void vst4q_lane_u64(uint64_t * ptr, uint64x2x4_t val, const int lane);
void vst4_lane_p64(poly64_t * ptr, poly64x1x4_t val, const int lane);
void vst4q_lane_p64(poly64_t * ptr, poly64x2x4_t val, const int lane);
void vst4_lane_f64(float64_t * ptr, float64x1x4_t val, const int lane);
void vst4q_lane_f64(float64_t * ptr, float64x2x4_t val, const int lane);
void vst1_s8_x2(int8_t * ptr, int8x8x2_t val);
void vst1q_s8_x2(int8_t * ptr, int8x16x2_t val);
void vst1_s16_x2(int16_t * ptr, int16x4x2_t val);
void vst1q_s16_x2(int16_t * ptr, int16x8x2_t val);
void vst1_s32_x2(int32_t * ptr, int32x2x2_t val);
void vst1q_s32_x2(int32_t * ptr, int32x4x2_t val);
void vst1_u8_x2(uint8_t * ptr, uint8x8x2_t val);
void vst1q_u8_x2(uint8_t * ptr, uint8x16x2_t val);
void vst1_u16_x2(uint16_t * ptr, uint16x4x2_t val);
void vst1q_u16_x2(uint16_t * ptr, uint16x8x2_t val);
void vst1_u32_x2(uint32_t * ptr, uint32x2x2_t val);
void vst1q_u32_x2(uint32_t * ptr, uint32x4x2_t val);
void vst1_f16_x2(float16_t * ptr, float16x4x2_t val);
void vst1q_f16_x2(float16_t * ptr, float16x8x2_t val);
void vst1_f32_x2(float32_t * ptr, float32x2x2_t val);
void vst1q_f32_x2(float32_t * ptr, float32x4x2_t val);
void vst1_p8_x2(poly8_t * ptr, poly8x8x2_t val);
void vst1q_p8_x2(poly8_t * ptr, poly8x16x2_t val);
void vst1_p16_x2(poly16_t * ptr, poly16x4x2_t val);
void vst1q_p16_x2(poly16_t * ptr, poly16x8x2_t val);
void vst1_s64_x2(int64_t * ptr, int64x1x2_t val);
void vst1_u64_x2(uint64_t * ptr, uint64x1x2_t val);
void vst1_p64_x2(poly64_t * ptr, poly64x1x2_t val);
void vst1q_s64_x2(int64_t * ptr, int64x2x2_t val);
void vst1q_u64_x2(uint64_t * ptr, uint64x2x2_t val);
void vst1q_p64_x2(poly64_t * ptr, poly64x2x2_t val);
void vst1_f64_x2(float64_t * ptr, float64x1x2_t val);
void vst1q_f64_x2(float64_t * ptr, float64x2x2_t val);
void vst1_s8_x3(int8_t * ptr, int8x8x3_t val);
void vst1q_s8_x3(int8_t * ptr, int8x16x3_t val);
void vst1_s16_x3(int16_t * ptr, int16x4x3_t val);
void vst1q_s16_x3(int16_t * ptr, int16x8x3_t val);
void vst1_s32_x3(int32_t * ptr, int32x2x3_t val);
void vst1q_s32_x3(int32_t * ptr, int32x4x3_t val);
void vst1_u8_x3(uint8_t * ptr, uint8x8x3_t val);
void vst1q_u8_x3(uint8_t * ptr, uint8x16x3_t val);
void vst1_u16_x3(uint16_t * ptr, uint16x4x3_t val);
void vst1q_u16_x3(uint16_t * ptr, uint16x8x3_t val);
void vst1_u32_x3(uint32_t * ptr, uint32x2x3_t val);
void vst1q_u32_x3(uint32_t * ptr, uint32x4x3_t val);
void vst1_f16_x3(float16_t * ptr, float16x4x3_t val);
void vst1q_f16_x3(float16_t * ptr, float16x8x3_t val);
void vst1_f32_x3(float32_t * ptr, float32x2x3_t val);
void vst1q_f32_x3(float32_t * ptr, float32x4x3_t val);
void vst1_p8_x3(poly8_t * ptr, poly8x8x3_t val);
void vst1q_p8_x3(poly8_t * ptr, poly8x16x3_t val);
void vst1_p16_x3(poly16_t * ptr, poly16x4x3_t val);
void vst1q_p16_x3(poly16_t * ptr, poly16x8x3_t val);
void vst1_s64_x3(int64_t * ptr, int64x1x3_t val);
void vst1_u64_x3(uint64_t * ptr, uint64x1x3_t val);
void vst1_p64_x3(poly64_t * ptr, poly64x1x3_t val);
void vst1q_s64_x3(int64_t * ptr, int64x2x3_t val);
void vst1q_u64_x3(uint64_t * ptr, uint64x2x3_t val);
void vst1q_p64_x3(poly64_t * ptr, poly64x2x3_t val);
void vst1_f64_x3(float64_t * ptr, float64x1x3_t val);
void vst1q_f64_x3(float64_t * ptr, float64x2x3_t val);
void vst1_s8_x4(int8_t * ptr, int8x8x4_t val);
void vst1q_s8_x4(int8_t * ptr, int8x16x4_t val);
void vst1_s16_x4(int16_t * ptr, int16x4x4_t val);
void vst1q_s16_x4(int16_t * ptr, int16x8x4_t val);
void vst1_s32_x4(int32_t * ptr, int32x2x4_t val);
void vst1q_s32_x4(int32_t * ptr, int32x4x4_t val);
void vst1_u8_x4(uint8_t * ptr, uint8x8x4_t val);
void vst1q_u8_x4(uint8_t * ptr, uint8x16x4_t val);
void vst1_u16_x4(uint16_t * ptr, uint16x4x4_t val);
void vst1q_u16_x4(uint16_t * ptr, uint16x8x4_t val);
void vst1_u32_x4(uint32_t * ptr, uint32x2x4_t val);
void vst1q_u32_x4(uint32_t * ptr, uint32x4x4_t val);
void vst1_f16_x4(float16_t * ptr, float16x4x4_t val);
void vst1q_f16_x4(float16_t * ptr, float16x8x4_t val);
void vst1_f32_x4(float32_t * ptr, float32x2x4_t val);
void vst1q_f32_x4(float32_t * ptr, float32x4x4_t val);
void vst1_p8_x4(poly8_t * ptr, poly8x8x4_t val);
void vst1q_p8_x4(poly8_t * ptr, poly8x16x4_t val);
void vst1_p16_x4(poly16_t * ptr, poly16x4x4_t val);
void vst1q_p16_x4(poly16_t * ptr, poly16x8x4_t val);
void vst1_s64_x4(int64_t * ptr, int64x1x4_t val);
void vst1_u64_x4(uint64_t * ptr, uint64x1x4_t val);
void vst1_p64_x4(poly64_t * ptr, poly64x1x4_t val);
void vst1q_s64_x4(int64_t * ptr, int64x2x4_t val);
void vst1q_u64_x4(uint64_t * ptr, uint64x2x4_t val);
void vst1q_p64_x4(poly64_t * ptr, poly64x2x4_t val);
void vst1_f64_x4(float64_t * ptr, float64x1x4_t val);
void vst1q_f64_x4(float64_t * ptr, float64x2x4_t val);
int8x8x2_t vld1_s8_x2(int8_t const * ptr);
int8x16x2_t vld1q_s8_x2(int8_t const * ptr);
int16x4x2_t vld1_s16_x2(int16_t const * ptr);
int16x8x2_t vld1q_s16_x2(int16_t const * ptr);
int32x2x2_t vld1_s32_x2(int32_t const * ptr);
int32x4x2_t vld1q_s32_x2(int32_t const * ptr);
uint8x8x2_t vld1_u8_x2(uint8_t const * ptr);
uint8x16x2_t vld1q_u8_x2(uint8_t const * ptr);
uint16x4x2_t vld1_u16_x2(uint16_t const * ptr);
uint16x8x2_t vld1q_u16_x2(uint16_t const * ptr);
uint32x2x2_t vld1_u32_x2(uint32_t const * ptr);
uint32x4x2_t vld1q_u32_x2(uint32_t const * ptr);
float16x4x2_t vld1_f16_x2(float16_t const * ptr);
float16x8x2_t vld1q_f16_x2(float16_t const * ptr);
float32x2x2_t vld1_f32_x2(float32_t const * ptr);
float32x4x2_t vld1q_f32_x2(float32_t const * ptr);
poly8x8x2_t vld1_p8_x2(poly8_t const * ptr);
poly8x16x2_t vld1q_p8_x2(poly8_t const * ptr);
poly16x4x2_t vld1_p16_x2(poly16_t const * ptr);
poly16x8x2_t vld1q_p16_x2(poly16_t const * ptr);
int64x1x2_t vld1_s64_x2(int64_t const * ptr);
uint64x1x2_t vld1_u64_x2(uint64_t const * ptr);
poly64x1x2_t vld1_p64_x2(poly64_t const * ptr);
int64x2x2_t vld1q_s64_x2(int64_t const * ptr);
uint64x2x2_t vld1q_u64_x2(uint64_t const * ptr);
poly64x2x2_t vld1q_p64_x2(poly64_t const * ptr);
float64x1x2_t vld1_f64_x2(float64_t const * ptr);
float64x2x2_t vld1q_f64_x2(float64_t const * ptr);
int8x8x3_t vld1_s8_x3(int8_t const * ptr);
int8x16x3_t vld1q_s8_x3(int8_t const * ptr);
int16x4x3_t vld1_s16_x3(int16_t const * ptr);
int16x8x3_t vld1q_s16_x3(int16_t const * ptr);
int32x2x3_t vld1_s32_x3(int32_t const * ptr);
int32x4x3_t vld1q_s32_x3(int32_t const * ptr);
uint8x8x3_t vld1_u8_x3(uint8_t const * ptr);
uint8x16x3_t vld1q_u8_x3(uint8_t const * ptr);
uint16x4x3_t vld1_u16_x3(uint16_t const * ptr);
uint16x8x3_t vld1q_u16_x3(uint16_t const * ptr);
uint32x2x3_t vld1_u32_x3(uint32_t const * ptr);
uint32x4x3_t vld1q_u32_x3(uint32_t const * ptr);
float16x4x3_t vld1_f16_x3(float16_t const * ptr);
float16x8x3_t vld1q_f16_x3(float16_t const * ptr);
float32x2x3_t vld1_f32_x3(float32_t const * ptr);
float32x4x3_t vld1q_f32_x3(float32_t const * ptr);
poly8x8x3_t vld1_p8_x3(poly8_t const * ptr);
poly8x16x3_t vld1q_p8_x3(poly8_t const * ptr);
poly16x4x3_t vld1_p16_x3(poly16_t const * ptr);
poly16x8x3_t vld1q_p16_x3(poly16_t const * ptr);
int64x1x3_t vld1_s64_x3(int64_t const * ptr);
uint64x1x3_t vld1_u64_x3(uint64_t const * ptr);
poly64x1x3_t vld1_p64_x3(poly64_t const * ptr);
int64x2x3_t vld1q_s64_x3(int64_t const * ptr);
uint64x2x3_t vld1q_u64_x3(uint64_t const * ptr);
poly64x2x3_t vld1q_p64_x3(poly64_t const * ptr);
float64x1x3_t vld1_f64_x3(float64_t const * ptr);
float64x2x3_t vld1q_f64_x3(float64_t const * ptr);
int8x8x4_t vld1_s8_x4(int8_t const * ptr);
int8x16x4_t vld1q_s8_x4(int8_t const * ptr);
int16x4x4_t vld1_s16_x4(int16_t const * ptr);
int16x8x4_t vld1q_s16_x4(int16_t const * ptr);
int32x2x4_t vld1_s32_x4(int32_t const * ptr);
int32x4x4_t vld1q_s32_x4(int32_t const * ptr);
uint8x8x4_t vld1_u8_x4(uint8_t const * ptr);
uint8x16x4_t vld1q_u8_x4(uint8_t const * ptr);
uint16x4x4_t vld1_u16_x4(uint16_t const * ptr);
uint16x8x4_t vld1q_u16_x4(uint16_t const * ptr);
uint32x2x4_t vld1_u32_x4(uint32_t const * ptr);
uint32x4x4_t vld1q_u32_x4(uint32_t const * ptr);
float16x4x4_t vld1_f16_x4(float16_t const * ptr);
float16x8x4_t vld1q_f16_x4(float16_t const * ptr);
float32x2x4_t vld1_f32_x4(float32_t const * ptr);
float32x4x4_t vld1q_f32_x4(float32_t const * ptr);
poly8x8x4_t vld1_p8_x4(poly8_t const * ptr);
poly8x16x4_t vld1q_p8_x4(poly8_t const * ptr);
poly16x4x4_t vld1_p16_x4(poly16_t const * ptr);
poly16x8x4_t vld1q_p16_x4(poly16_t const * ptr);
int64x1x4_t vld1_s64_x4(int64_t const * ptr);
uint64x1x4_t vld1_u64_x4(uint64_t const * ptr);
poly64x1x4_t vld1_p64_x4(poly64_t const * ptr);
int64x2x4_t vld1q_s64_x4(int64_t const * ptr);
uint64x2x4_t vld1q_u64_x4(uint64_t const * ptr);
poly64x2x4_t vld1q_p64_x4(poly64_t const * ptr);
float64x1x4_t vld1_f64_x4(float64_t const * ptr);
float64x2x4_t vld1q_f64_x4(float64_t const * ptr);
int8x8_t vpadd_s8(int8x8_t a, int8x8_t b);
int16x4_t vpadd_s16(int16x4_t a, int16x4_t b);
int32x2_t vpadd_s32(int32x2_t a, int32x2_t b);
uint8x8_t vpadd_u8(uint8x8_t a, uint8x8_t b);
uint16x4_t vpadd_u16(uint16x4_t a, uint16x4_t b);
uint32x2_t vpadd_u32(uint32x2_t a, uint32x2_t b);
float32x2_t vpadd_f32(float32x2_t a, float32x2_t b);
int8x16_t vpaddq_s8(int8x16_t a, int8x16_t b);
int16x8_t vpaddq_s16(int16x8_t a, int16x8_t b);
int32x4_t vpaddq_s32(int32x4_t a, int32x4_t b);
int64x2_t vpaddq_s64(int64x2_t a, int64x2_t b);
uint8x16_t vpaddq_u8(uint8x16_t a, uint8x16_t b);
uint16x8_t vpaddq_u16(uint16x8_t a, uint16x8_t b);
uint32x4_t vpaddq_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vpaddq_u64(uint64x2_t a, uint64x2_t b);
float32x4_t vpaddq_f32(float32x4_t a, float32x4_t b);
float64x2_t vpaddq_f64(float64x2_t a, float64x2_t b);
int16x4_t vpaddl_s8(int8x8_t a);
int16x8_t vpaddlq_s8(int8x16_t a);
int32x2_t vpaddl_s16(int16x4_t a);
int32x4_t vpaddlq_s16(int16x8_t a);
int64x1_t vpaddl_s32(int32x2_t a);
int64x2_t vpaddlq_s32(int32x4_t a);
uint16x4_t vpaddl_u8(uint8x8_t a);
uint16x8_t vpaddlq_u8(uint8x16_t a);
uint32x2_t vpaddl_u16(uint16x4_t a);
uint32x4_t vpaddlq_u16(uint16x8_t a);
uint64x1_t vpaddl_u32(uint32x2_t a);
uint64x2_t vpaddlq_u32(uint32x4_t a);
int16x4_t vpadal_s8(int16x4_t a, int8x8_t b);
int16x8_t vpadalq_s8(int16x8_t a, int8x16_t b);
int32x2_t vpadal_s16(int32x2_t a, int16x4_t b);
int32x4_t vpadalq_s16(int32x4_t a, int16x8_t b);
int64x1_t vpadal_s32(int64x1_t a, int32x2_t b);
int64x2_t vpadalq_s32(int64x2_t a, int32x4_t b);
uint16x4_t vpadal_u8(uint16x4_t a, uint8x8_t b);
uint16x8_t vpadalq_u8(uint16x8_t a, uint8x16_t b);
uint32x2_t vpadal_u16(uint32x2_t a, uint16x4_t b);
uint32x4_t vpadalq_u16(uint32x4_t a, uint16x8_t b);
uint64x1_t vpadal_u32(uint64x1_t a, uint32x2_t b);
uint64x2_t vpadalq_u32(uint64x2_t a, uint32x4_t b);
int8x8_t vpmax_s8(int8x8_t a, int8x8_t b);
int16x4_t vpmax_s16(int16x4_t a, int16x4_t b);
int32x2_t vpmax_s32(int32x2_t a, int32x2_t b);
uint8x8_t vpmax_u8(uint8x8_t a, uint8x8_t b);
uint16x4_t vpmax_u16(uint16x4_t a, uint16x4_t b);
uint32x2_t vpmax_u32(uint32x2_t a, uint32x2_t b);
float32x2_t vpmax_f32(float32x2_t a, float32x2_t b);
int8x16_t vpmaxq_s8(int8x16_t a, int8x16_t b);
int16x8_t vpmaxq_s16(int16x8_t a, int16x8_t b);
int32x4_t vpmaxq_s32(int32x4_t a, int32x4_t b);
uint8x16_t vpmaxq_u8(uint8x16_t a, uint8x16_t b);
uint16x8_t vpmaxq_u16(uint16x8_t a, uint16x8_t b);
uint32x4_t vpmaxq_u32(uint32x4_t a, uint32x4_t b);
float32x4_t vpmaxq_f32(float32x4_t a, float32x4_t b);
float64x2_t vpmaxq_f64(float64x2_t a, float64x2_t b);
int8x8_t vpmin_s8(int8x8_t a, int8x8_t b);
int16x4_t vpmin_s16(int16x4_t a, int16x4_t b);
int32x2_t vpmin_s32(int32x2_t a, int32x2_t b);
uint8x8_t vpmin_u8(uint8x8_t a, uint8x8_t b);
uint16x4_t vpmin_u16(uint16x4_t a, uint16x4_t b);
uint32x2_t vpmin_u32(uint32x2_t a, uint32x2_t b);
float32x2_t vpmin_f32(float32x2_t a, float32x2_t b);
int8x16_t vpminq_s8(int8x16_t a, int8x16_t b);
int16x8_t vpminq_s16(int16x8_t a, int16x8_t b);
int32x4_t vpminq_s32(int32x4_t a, int32x4_t b);
uint8x16_t vpminq_u8(uint8x16_t a, uint8x16_t b);
uint16x8_t vpminq_u16(uint16x8_t a, uint16x8_t b);
uint32x4_t vpminq_u32(uint32x4_t a, uint32x4_t b);
float32x4_t vpminq_f32(float32x4_t a, float32x4_t b);
float64x2_t vpminq_f64(float64x2_t a, float64x2_t b);
float32x2_t vpmaxnm_f32(float32x2_t a, float32x2_t b);
float32x4_t vpmaxnmq_f32(float32x4_t a, float32x4_t b);
float64x2_t vpmaxnmq_f64(float64x2_t a, float64x2_t b);
float32x2_t vpminnm_f32(float32x2_t a, float32x2_t b);
float32x4_t vpminnmq_f32(float32x4_t a, float32x4_t b);
float64x2_t vpminnmq_f64(float64x2_t a, float64x2_t b);
int64_t vpaddd_s64(int64x2_t a);
uint64_t vpaddd_u64(uint64x2_t a);
float32_t vpadds_f32(float32x2_t a);
float64_t vpaddd_f64(float64x2_t a);
float32_t vpmaxs_f32(float32x2_t a);
float64_t vpmaxqd_f64(float64x2_t a);
float32_t vpmins_f32(float32x2_t a);
float64_t vpminqd_f64(float64x2_t a);
float32_t vpmaxnms_f32(float32x2_t a);
float64_t vpmaxnmqd_f64(float64x2_t a);
float32_t vpminnms_f32(float32x2_t a);
float64_t vpminnmqd_f64(float64x2_t a);
int8_t vaddv_s8(int8x8_t a);
int8_t vaddvq_s8(int8x16_t a);
int16_t vaddv_s16(int16x4_t a);
int16_t vaddvq_s16(int16x8_t a);
int32_t vaddv_s32(int32x2_t a);
int32_t vaddvq_s32(int32x4_t a);
int64_t vaddvq_s64(int64x2_t a);
uint8_t vaddv_u8(uint8x8_t a);
uint8_t vaddvq_u8(uint8x16_t a);
uint16_t vaddv_u16(uint16x4_t a);
uint16_t vaddvq_u16(uint16x8_t a);
uint32_t vaddv_u32(uint32x2_t a);
uint32_t vaddvq_u32(uint32x4_t a);
uint64_t vaddvq_u64(uint64x2_t a);
float32_t vaddv_f32(float32x2_t a);
float32_t vaddvq_f32(float32x4_t a);
float64_t vaddvq_f64(float64x2_t a);
int16_t vaddlv_s8(int8x8_t a);
int16_t vaddlvq_s8(int8x16_t a);
int32_t vaddlv_s16(int16x4_t a);
int32_t vaddlvq_s16(int16x8_t a);
int64_t vaddlv_s32(int32x2_t a);
int64_t vaddlvq_s32(int32x4_t a);
uint16_t vaddlv_u8(uint8x8_t a);
uint16_t vaddlvq_u8(uint8x16_t a);
uint32_t vaddlv_u16(uint16x4_t a);
uint32_t vaddlvq_u16(uint16x8_t a);
uint64_t vaddlv_u32(uint32x2_t a);
uint64_t vaddlvq_u32(uint32x4_t a);
int8_t vmaxv_s8(int8x8_t a);
int8_t vmaxvq_s8(int8x16_t a);
int16_t vmaxv_s16(int16x4_t a);
int16_t vmaxvq_s16(int16x8_t a);
int32_t vmaxv_s32(int32x2_t a);
int32_t vmaxvq_s32(int32x4_t a);
uint8_t vmaxv_u8(uint8x8_t a);
uint8_t vmaxvq_u8(uint8x16_t a);
uint16_t vmaxv_u16(uint16x4_t a);
uint16_t vmaxvq_u16(uint16x8_t a);
uint32_t vmaxv_u32(uint32x2_t a);
uint32_t vmaxvq_u32(uint32x4_t a);
float32_t vmaxv_f32(float32x2_t a);
float32_t vmaxvq_f32(float32x4_t a);
float64_t vmaxvq_f64(float64x2_t a);
int8_t vminv_s8(int8x8_t a);
int8_t vminvq_s8(int8x16_t a);
int16_t vminv_s16(int16x4_t a);
int16_t vminvq_s16(int16x8_t a);
int32_t vminv_s32(int32x2_t a);
int32_t vminvq_s32(int32x4_t a);
uint8_t vminv_u8(uint8x8_t a);
uint8_t vminvq_u8(uint8x16_t a);
uint16_t vminv_u16(uint16x4_t a);
uint16_t vminvq_u16(uint16x8_t a);
uint32_t vminv_u32(uint32x2_t a);
uint32_t vminvq_u32(uint32x4_t a);
float32_t vminv_f32(float32x2_t a);
float32_t vminvq_f32(float32x4_t a);
float64_t vminvq_f64(float64x2_t a);
float32_t vmaxnmv_f32(float32x2_t a);
float32_t vmaxnmvq_f32(float32x4_t a);
float64_t vmaxnmvq_f64(float64x2_t a);
float32_t vminnmv_f32(float32x2_t a);
float32_t vminnmvq_f32(float32x4_t a);
float64_t vminnmvq_f64(float64x2_t a);
int8x8_t vext_s8(int8x8_t a, int8x8_t b, const int n);
int8x16_t vextq_s8(int8x16_t a, int8x16_t b, const int n);
int16x4_t vext_s16(int16x4_t a, int16x4_t b, const int n);
int16x8_t vextq_s16(int16x8_t a, int16x8_t b, const int n);
int32x2_t vext_s32(int32x2_t a, int32x2_t b, const int n);
int32x4_t vextq_s32(int32x4_t a, int32x4_t b, const int n);
int64x1_t vext_s64(int64x1_t a, int64x1_t b, const int n);
int64x2_t vextq_s64(int64x2_t a, int64x2_t b, const int n);
uint8x8_t vext_u8(uint8x8_t a, uint8x8_t b, const int n);
uint8x16_t vextq_u8(uint8x16_t a, uint8x16_t b, const int n);
uint16x4_t vext_u16(uint16x4_t a, uint16x4_t b, const int n);
uint16x8_t vextq_u16(uint16x8_t a, uint16x8_t b, const int n);
uint32x2_t vext_u32(uint32x2_t a, uint32x2_t b, const int n);
uint32x4_t vextq_u32(uint32x4_t a, uint32x4_t b, const int n);
uint64x1_t vext_u64(uint64x1_t a, uint64x1_t b, const int n);
uint64x2_t vextq_u64(uint64x2_t a, uint64x2_t b, const int n);
poly64x1_t vext_p64(poly64x1_t a, poly64x1_t b, const int n);
poly64x2_t vextq_p64(poly64x2_t a, poly64x2_t b, const int n);
float32x2_t vext_f32(float32x2_t a, float32x2_t b, const int n);
float32x4_t vextq_f32(float32x4_t a, float32x4_t b, const int n);
float64x1_t vext_f64(float64x1_t a, float64x1_t b, const int n);
float64x2_t vextq_f64(float64x2_t a, float64x2_t b, const int n);
poly8x8_t vext_p8(poly8x8_t a, poly8x8_t b, const int n);
poly8x16_t vextq_p8(poly8x16_t a, poly8x16_t b, const int n);
poly16x4_t vext_p16(poly16x4_t a, poly16x4_t b, const int n);
poly16x8_t vextq_p16(poly16x8_t a, poly16x8_t b, const int n);
int8x8_t vrev64_s8(int8x8_t vec);
int8x16_t vrev64q_s8(int8x16_t vec);
int16x4_t vrev64_s16(int16x4_t vec);
int16x8_t vrev64q_s16(int16x8_t vec);
int32x2_t vrev64_s32(int32x2_t vec);
int32x4_t vrev64q_s32(int32x4_t vec);
uint8x8_t vrev64_u8(uint8x8_t vec);
uint8x16_t vrev64q_u8(uint8x16_t vec);
uint16x4_t vrev64_u16(uint16x4_t vec);
uint16x8_t vrev64q_u16(uint16x8_t vec);
uint32x2_t vrev64_u32(uint32x2_t vec);
uint32x4_t vrev64q_u32(uint32x4_t vec);
float32x2_t vrev64_f32(float32x2_t vec);
float32x4_t vrev64q_f32(float32x4_t vec);
poly8x8_t vrev64_p8(poly8x8_t vec);
poly8x16_t vrev64q_p8(poly8x16_t vec);
poly16x4_t vrev64_p16(poly16x4_t vec);
poly16x8_t vrev64q_p16(poly16x8_t vec);
int8x8_t vrev32_s8(int8x8_t vec);
int8x16_t vrev32q_s8(int8x16_t vec);
int16x4_t vrev32_s16(int16x4_t vec);
int16x8_t vrev32q_s16(int16x8_t vec);
uint8x8_t vrev32_u8(uint8x8_t vec);
uint8x16_t vrev32q_u8(uint8x16_t vec);
uint16x4_t vrev32_u16(uint16x4_t vec);
uint16x8_t vrev32q_u16(uint16x8_t vec);
poly8x8_t vrev32_p8(poly8x8_t vec);
poly8x16_t vrev32q_p8(poly8x16_t vec);
poly16x4_t vrev32_p16(poly16x4_t vec);
poly16x8_t vrev32q_p16(poly16x8_t vec);
int8x8_t vrev16_s8(int8x8_t vec);
int8x16_t vrev16q_s8(int8x16_t vec);
uint8x8_t vrev16_u8(uint8x8_t vec);
uint8x16_t vrev16q_u8(uint8x16_t vec);
poly8x8_t vrev16_p8(poly8x8_t vec);
poly8x16_t vrev16q_p8(poly8x16_t vec);
int8x8_t vzip1_s8(int8x8_t a, int8x8_t b);
int8x16_t vzip1q_s8(int8x16_t a, int8x16_t b);
int16x4_t vzip1_s16(int16x4_t a, int16x4_t b);
int16x8_t vzip1q_s16(int16x8_t a, int16x8_t b);
int32x2_t vzip1_s32(int32x2_t a, int32x2_t b);
int32x4_t vzip1q_s32(int32x4_t a, int32x4_t b);
int64x2_t vzip1q_s64(int64x2_t a, int64x2_t b);
uint8x8_t vzip1_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vzip1q_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vzip1_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vzip1q_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vzip1_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vzip1q_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vzip1q_u64(uint64x2_t a, uint64x2_t b);
poly64x2_t vzip1q_p64(poly64x2_t a, poly64x2_t b);
float32x2_t vzip1_f32(float32x2_t a, float32x2_t b);
float32x4_t vzip1q_f32(float32x4_t a, float32x4_t b);
float64x2_t vzip1q_f64(float64x2_t a, float64x2_t b);
poly8x8_t vzip1_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vzip1q_p8(poly8x16_t a, poly8x16_t b);
poly16x4_t vzip1_p16(poly16x4_t a, poly16x4_t b);
poly16x8_t vzip1q_p16(poly16x8_t a, poly16x8_t b);
int8x8_t vzip2_s8(int8x8_t a, int8x8_t b);
int8x16_t vzip2q_s8(int8x16_t a, int8x16_t b);
int16x4_t vzip2_s16(int16x4_t a, int16x4_t b);
int16x8_t vzip2q_s16(int16x8_t a, int16x8_t b);
int32x2_t vzip2_s32(int32x2_t a, int32x2_t b);
int32x4_t vzip2q_s32(int32x4_t a, int32x4_t b);
int64x2_t vzip2q_s64(int64x2_t a, int64x2_t b);
uint8x8_t vzip2_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vzip2q_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vzip2_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vzip2q_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vzip2_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vzip2q_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vzip2q_u64(uint64x2_t a, uint64x2_t b);
poly64x2_t vzip2q_p64(poly64x2_t a, poly64x2_t b);
float32x2_t vzip2_f32(float32x2_t a, float32x2_t b);
float32x4_t vzip2q_f32(float32x4_t a, float32x4_t b);
float64x2_t vzip2q_f64(float64x2_t a, float64x2_t b);
poly8x8_t vzip2_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vzip2q_p8(poly8x16_t a, poly8x16_t b);
poly16x4_t vzip2_p16(poly16x4_t a, poly16x4_t b);
poly16x8_t vzip2q_p16(poly16x8_t a, poly16x8_t b);
int8x8_t vuzp1_s8(int8x8_t a, int8x8_t b);
int8x16_t vuzp1q_s8(int8x16_t a, int8x16_t b);
int16x4_t vuzp1_s16(int16x4_t a, int16x4_t b);
int16x8_t vuzp1q_s16(int16x8_t a, int16x8_t b);
int32x2_t vuzp1_s32(int32x2_t a, int32x2_t b);
int32x4_t vuzp1q_s32(int32x4_t a, int32x4_t b);
int64x2_t vuzp1q_s64(int64x2_t a, int64x2_t b);
uint8x8_t vuzp1_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vuzp1q_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vuzp1_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vuzp1q_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vuzp1_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vuzp1q_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vuzp1q_u64(uint64x2_t a, uint64x2_t b);
poly64x2_t vuzp1q_p64(poly64x2_t a, poly64x2_t b);
float32x2_t vuzp1_f32(float32x2_t a, float32x2_t b);
float32x4_t vuzp1q_f32(float32x4_t a, float32x4_t b);
float64x2_t vuzp1q_f64(float64x2_t a, float64x2_t b);
poly8x8_t vuzp1_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vuzp1q_p8(poly8x16_t a, poly8x16_t b);
poly16x4_t vuzp1_p16(poly16x4_t a, poly16x4_t b);
poly16x8_t vuzp1q_p16(poly16x8_t a, poly16x8_t b);
int8x8_t vuzp2_s8(int8x8_t a, int8x8_t b);
int8x16_t vuzp2q_s8(int8x16_t a, int8x16_t b);
int16x4_t vuzp2_s16(int16x4_t a, int16x4_t b);
int16x8_t vuzp2q_s16(int16x8_t a, int16x8_t b);
int32x2_t vuzp2_s32(int32x2_t a, int32x2_t b);
int32x4_t vuzp2q_s32(int32x4_t a, int32x4_t b);
int64x2_t vuzp2q_s64(int64x2_t a, int64x2_t b);
uint8x8_t vuzp2_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vuzp2q_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vuzp2_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vuzp2q_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vuzp2_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vuzp2q_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vuzp2q_u64(uint64x2_t a, uint64x2_t b);
poly64x2_t vuzp2q_p64(poly64x2_t a, poly64x2_t b);
float32x2_t vuzp2_f32(float32x2_t a, float32x2_t b);
float32x4_t vuzp2q_f32(float32x4_t a, float32x4_t b);
float64x2_t vuzp2q_f64(float64x2_t a, float64x2_t b);
poly8x8_t vuzp2_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vuzp2q_p8(poly8x16_t a, poly8x16_t b);
poly16x4_t vuzp2_p16(poly16x4_t a, poly16x4_t b);
poly16x8_t vuzp2q_p16(poly16x8_t a, poly16x8_t b);
int8x8_t vtrn1_s8(int8x8_t a, int8x8_t b);
int8x16_t vtrn1q_s8(int8x16_t a, int8x16_t b);
int16x4_t vtrn1_s16(int16x4_t a, int16x4_t b);
int16x8_t vtrn1q_s16(int16x8_t a, int16x8_t b);
int32x2_t vtrn1_s32(int32x2_t a, int32x2_t b);
int32x4_t vtrn1q_s32(int32x4_t a, int32x4_t b);
int64x2_t vtrn1q_s64(int64x2_t a, int64x2_t b);
uint8x8_t vtrn1_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vtrn1q_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vtrn1_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vtrn1q_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vtrn1_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vtrn1q_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vtrn1q_u64(uint64x2_t a, uint64x2_t b);
poly64x2_t vtrn1q_p64(poly64x2_t a, poly64x2_t b);
float32x2_t vtrn1_f32(float32x2_t a, float32x2_t b);
float32x4_t vtrn1q_f32(float32x4_t a, float32x4_t b);
float64x2_t vtrn1q_f64(float64x2_t a, float64x2_t b);
poly8x8_t vtrn1_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vtrn1q_p8(poly8x16_t a, poly8x16_t b);
poly16x4_t vtrn1_p16(poly16x4_t a, poly16x4_t b);
poly16x8_t vtrn1q_p16(poly16x8_t a, poly16x8_t b);
int8x8_t vtrn2_s8(int8x8_t a, int8x8_t b);
int8x16_t vtrn2q_s8(int8x16_t a, int8x16_t b);
int16x4_t vtrn2_s16(int16x4_t a, int16x4_t b);
int16x8_t vtrn2q_s16(int16x8_t a, int16x8_t b);
int32x2_t vtrn2_s32(int32x2_t a, int32x2_t b);
int32x4_t vtrn2q_s32(int32x4_t a, int32x4_t b);
int64x2_t vtrn2q_s64(int64x2_t a, int64x2_t b);
uint8x8_t vtrn2_u8(uint8x8_t a, uint8x8_t b);
uint8x16_t vtrn2q_u8(uint8x16_t a, uint8x16_t b);
uint16x4_t vtrn2_u16(uint16x4_t a, uint16x4_t b);
uint16x8_t vtrn2q_u16(uint16x8_t a, uint16x8_t b);
uint32x2_t vtrn2_u32(uint32x2_t a, uint32x2_t b);
uint32x4_t vtrn2q_u32(uint32x4_t a, uint32x4_t b);
uint64x2_t vtrn2q_u64(uint64x2_t a, uint64x2_t b);
poly64x2_t vtrn2q_p64(poly64x2_t a, poly64x2_t b);
float32x2_t vtrn2_f32(float32x2_t a, float32x2_t b);
float32x4_t vtrn2q_f32(float32x4_t a, float32x4_t b);
float64x2_t vtrn2q_f64(float64x2_t a, float64x2_t b);
poly8x8_t vtrn2_p8(poly8x8_t a, poly8x8_t b);
poly8x16_t vtrn2q_p8(poly8x16_t a, poly8x16_t b);
poly16x4_t vtrn2_p16(poly16x4_t a, poly16x4_t b);
poly16x8_t vtrn2q_p16(poly16x8_t a, poly16x8_t b);
int8x8_t vtbl1_s8(int8x8_t a, int8x8_t idx);
uint8x8_t vtbl1_u8(uint8x8_t a, uint8x8_t idx);
poly8x8_t vtbl1_p8(poly8x8_t a, uint8x8_t idx);
int8x8_t vtbx1_s8(int8x8_t a, int8x8_t b, int8x8_t idx);
uint8x8_t vtbx1_u8(uint8x8_t a, uint8x8_t b, uint8x8_t idx);
poly8x8_t vtbx1_p8(poly8x8_t a, poly8x8_t b, uint8x8_t idx);
int8x8_t vtbl2_s8(int8x8x2_t a, int8x8_t idx);
uint8x8_t vtbl2_u8(uint8x8x2_t a, uint8x8_t idx);
poly8x8_t vtbl2_p8(poly8x8x2_t a, uint8x8_t idx);
int8x8_t vtbl3_s8(int8x8x3_t a, int8x8_t idx);
uint8x8_t vtbl3_u8(uint8x8x3_t a, uint8x8_t idx);
poly8x8_t vtbl3_p8(poly8x8x3_t a, uint8x8_t idx);
int8x8_t vtbl4_s8(int8x8x4_t a, int8x8_t idx);
uint8x8_t vtbl4_u8(uint8x8x4_t a, uint8x8_t idx);
poly8x8_t vtbl4_p8(poly8x8x4_t a, uint8x8_t idx);
int8x8_t vtbx2_s8(int8x8_t a, int8x8x2_t b, int8x8_t idx);
uint8x8_t vtbx2_u8(uint8x8_t a, uint8x8x2_t b, uint8x8_t idx);
poly8x8_t vtbx2_p8(poly8x8_t a, poly8x8x2_t b, uint8x8_t idx);
int8x8_t vtbx3_s8(int8x8_t a, int8x8x3_t b, int8x8_t idx);
uint8x8_t vtbx3_u8(uint8x8_t a, uint8x8x3_t b, uint8x8_t idx);
poly8x8_t vtbx3_p8(poly8x8_t a, poly8x8x3_t b, uint8x8_t idx);
int8x8_t vtbx4_s8(int8x8_t a, int8x8x4_t b, int8x8_t idx);
uint8x8_t vtbx4_u8(uint8x8_t a, uint8x8x4_t b, uint8x8_t idx);
poly8x8_t vtbx4_p8(poly8x8_t a, poly8x8x4_t b, uint8x8_t idx);
int8x8_t vqtbl1_s8(int8x16_t t, uint8x8_t idx);
int8x16_t vqtbl1q_s8(int8x16_t t, uint8x16_t idx);
uint8x8_t vqtbl1_u8(uint8x16_t t, uint8x8_t idx);
uint8x16_t vqtbl1q_u8(uint8x16_t t, uint8x16_t idx);
poly8x8_t vqtbl1_p8(poly8x16_t t, uint8x8_t idx);
poly8x16_t vqtbl1q_p8(poly8x16_t t, uint8x16_t idx);
int8x8_t vqtbx1_s8(int8x8_t a, int8x16_t t, uint8x8_t idx);
int8x16_t vqtbx1q_s8(int8x16_t a, int8x16_t t, uint8x16_t idx);
uint8x8_t vqtbx1_u8(uint8x8_t a, uint8x16_t t, uint8x8_t idx);
uint8x16_t vqtbx1q_u8(uint8x16_t a, uint8x16_t t, uint8x16_t idx);
poly8x8_t vqtbx1_p8(poly8x8_t a, poly8x16_t t, uint8x8_t idx);
poly8x16_t vqtbx1q_p8(poly8x16_t a, poly8x16_t t, uint8x16_t idx);
int8x8_t vqtbl2_s8(int8x16x2_t t, uint8x8_t idx);
int8x16_t vqtbl2q_s8(int8x16x2_t t, uint8x16_t idx);
uint8x8_t vqtbl2_u8(uint8x16x2_t t, uint8x8_t idx);
uint8x16_t vqtbl2q_u8(uint8x16x2_t t, uint8x16_t idx);
poly8x8_t vqtbl2_p8(poly8x16x2_t t, uint8x8_t idx);
poly8x16_t vqtbl2q_p8(poly8x16x2_t t, uint8x16_t idx);
int8x8_t vqtbl3_s8(int8x16x3_t t, uint8x8_t idx);
int8x16_t vqtbl3q_s8(int8x16x3_t t, uint8x16_t idx);
uint8x8_t vqtbl3_u8(uint8x16x3_t t, uint8x8_t idx);
uint8x16_t vqtbl3q_u8(uint8x16x3_t t, uint8x16_t idx);
poly8x8_t vqtbl3_p8(poly8x16x3_t t, uint8x8_t idx);
poly8x16_t vqtbl3q_p8(poly8x16x3_t t, uint8x16_t idx);
int8x8_t vqtbl4_s8(int8x16x4_t t, uint8x8_t idx);
int8x16_t vqtbl4q_s8(int8x16x4_t t, uint8x16_t idx);
uint8x8_t vqtbl4_u8(uint8x16x4_t t, uint8x8_t idx);
uint8x16_t vqtbl4q_u8(uint8x16x4_t t, uint8x16_t idx);
poly8x8_t vqtbl4_p8(poly8x16x4_t t, uint8x8_t idx);
poly8x16_t vqtbl4q_p8(poly8x16x4_t t, uint8x16_t idx);
int8x8_t vqtbx2_s8(int8x8_t a, int8x16x2_t t, uint8x8_t idx);
int8x16_t vqtbx2q_s8(int8x16_t a, int8x16x2_t t, uint8x16_t idx);
uint8x8_t vqtbx2_u8(uint8x8_t a, uint8x16x2_t t, uint8x8_t idx);
uint8x16_t vqtbx2q_u8(uint8x16_t a, uint8x16x2_t t, uint8x16_t idx);
poly8x8_t vqtbx2_p8(poly8x8_t a, poly8x16x2_t t, uint8x8_t idx);
poly8x16_t vqtbx2q_p8(poly8x16_t a, poly8x16x2_t t, uint8x16_t idx);
int8x8_t vqtbx3_s8(int8x8_t a, int8x16x3_t t, uint8x8_t idx);
int8x16_t vqtbx3q_s8(int8x16_t a, int8x16x3_t t, uint8x16_t idx);
uint8x8_t vqtbx3_u8(uint8x8_t a, uint8x16x3_t t, uint8x8_t idx);
uint8x16_t vqtbx3q_u8(uint8x16_t a, uint8x16x3_t t, uint8x16_t idx);
poly8x8_t vqtbx3_p8(poly8x8_t a, poly8x16x3_t t, uint8x8_t idx);
poly8x16_t vqtbx3q_p8(poly8x16_t a, poly8x16x3_t t, uint8x16_t idx);
int8x8_t vqtbx4_s8(int8x8_t a, int8x16x4_t t, uint8x8_t idx);
int8x16_t vqtbx4q_s8(int8x16_t a, int8x16x4_t t, uint8x16_t idx);
uint8x8_t vqtbx4_u8(uint8x8_t a, uint8x16x4_t t, uint8x8_t idx);
uint8x16_t vqtbx4q_u8(uint8x16_t a, uint8x16x4_t t, uint8x16_t idx);
poly8x8_t vqtbx4_p8(poly8x8_t a, poly8x16x4_t t, uint8x8_t idx);
poly8x16_t vqtbx4q_p8(poly8x16_t a, poly8x16x4_t t, uint8x16_t idx);
uint8_t vget_lane_u8(uint8x8_t v, const int lane);
uint16_t vget_lane_u16(uint16x4_t v, const int lane);
uint32_t vget_lane_u32(uint32x2_t v, const int lane);
uint64_t vget_lane_u64(uint64x1_t v, const int lane);
poly64_t vget_lane_p64(poly64x1_t v, const int lane);
int8_t vget_lane_s8(int8x8_t v, const int lane);
int16_t vget_lane_s16(int16x4_t v, const int lane);
int32_t vget_lane_s32(int32x2_t v, const int lane);
int64_t vget_lane_s64(int64x1_t v, const int lane);
poly8_t vget_lane_p8(poly8x8_t v, const int lane);
poly16_t vget_lane_p16(poly16x4_t v, const int lane);
float32_t vget_lane_f32(float32x2_t v, const int lane);
float64_t vget_lane_f64(float64x1_t v, const int lane);
uint8_t vgetq_lane_u8(uint8x16_t v, const int lane);
uint16_t vgetq_lane_u16(uint16x8_t v, const int lane);
uint32_t vgetq_lane_u32(uint32x4_t v, const int lane);
uint64_t vgetq_lane_u64(uint64x2_t v, const int lane);
poly64_t vgetq_lane_p64(poly64x2_t v, const int lane);
int8_t vgetq_lane_s8(int8x16_t v, const int lane);
int16_t vgetq_lane_s16(int16x8_t v, const int lane);
int32_t vgetq_lane_s32(int32x4_t v, const int lane);
int64_t vgetq_lane_s64(int64x2_t v, const int lane);
poly8_t vgetq_lane_p8(poly8x16_t v, const int lane);
poly16_t vgetq_lane_p16(poly16x8_t v, const int lane);
float16_t vget_lane_f16(float16x4_t v, const int lane);
float16_t vgetq_lane_f16(float16x8_t v, const int lane);
float32_t vgetq_lane_f32(float32x4_t v, const int lane);
float64_t vgetq_lane_f64(float64x2_t v, const int lane);
uint8x8_t vset_lane_u8(uint8_t a, uint8x8_t v, const int lane);
uint16x4_t vset_lane_u16(uint16_t a, uint16x4_t v, const int lane);
uint32x2_t vset_lane_u32(uint32_t a, uint32x2_t v, const int lane);
uint64x1_t vset_lane_u64(uint64_t a, uint64x1_t v, const int lane);
poly64x1_t vset_lane_p64(poly64_t a, poly64x1_t v, const int lane);
int8x8_t vset_lane_s8(int8_t a, int8x8_t v, const int lane);
int16x4_t vset_lane_s16(int16_t a, int16x4_t v, const int lane);
int32x2_t vset_lane_s32(int32_t a, int32x2_t v, const int lane);
int64x1_t vset_lane_s64(int64_t a, int64x1_t v, const int lane);
poly8x8_t vset_lane_p8(poly8_t a, poly8x8_t v, const int lane);
poly16x4_t vset_lane_p16(poly16_t a, poly16x4_t v, const int lane);
float16x4_t vset_lane_f16(float16_t a, float16x4_t v, const int lane);
float16x8_t vsetq_lane_f16(float16_t a, float16x8_t v, const int lane);
float32x2_t vset_lane_f32(float32_t a, float32x2_t v, const int lane);
float64x1_t vset_lane_f64(float64_t a, float64x1_t v, const int lane);
uint8x16_t vsetq_lane_u8(uint8_t a, uint8x16_t v, const int lane);
uint16x8_t vsetq_lane_u16(uint16_t a, uint16x8_t v, const int lane);
uint32x4_t vsetq_lane_u32(uint32_t a, uint32x4_t v, const int lane);
uint64x2_t vsetq_lane_u64(uint64_t a, uint64x2_t v, const int lane);
poly64x2_t vsetq_lane_p64(poly64_t a, poly64x2_t v, const int lane);
int8x16_t vsetq_lane_s8(int8_t a, int8x16_t v, const int lane);
int16x8_t vsetq_lane_s16(int16_t a, int16x8_t v, const int lane);
int32x4_t vsetq_lane_s32(int32_t a, int32x4_t v, const int lane);
int64x2_t vsetq_lane_s64(int64_t a, int64x2_t v, const int lane);
poly8x16_t vsetq_lane_p8(poly8_t a, poly8x16_t v, const int lane);
poly16x8_t vsetq_lane_p16(poly16_t a, poly16x8_t v, const int lane);
float32x4_t vsetq_lane_f32(float32_t a, float32x4_t v, const int lane);
float64x2_t vsetq_lane_f64(float64_t a, float64x2_t v, const int lane);
float32_t vrecpxs_f32(float32_t a);
float64_t vrecpxd_f64(float64_t a);
float32x2_t vfma_n_f32(float32x2_t a, float32x2_t b, float32_t n);
float32x4_t vfmaq_n_f32(float32x4_t a, float32x4_t b, float32_t n);
float32x2_t vfms_n_f32(float32x2_t a, float32x2_t b, float32_t n);
float32x4_t vfmsq_n_f32(float32x4_t a, float32x4_t b, float32_t n);
float64x1_t vfma_n_f64(float64x1_t a, float64x1_t b, float64_t n);
float64x2_t vfmaq_n_f64(float64x2_t a, float64x2_t b, float64_t n);
float64x1_t vfms_n_f64(float64x1_t a, float64x1_t b, float64_t n);
float64x2_t vfmsq_n_f64(float64x2_t a, float64x2_t b, float64_t n);
int8x8x2_t vtrn_s8(int8x8_t a, int8x8_t b);
int16x4x2_t vtrn_s16(int16x4_t a, int16x4_t b);
uint8x8x2_t vtrn_u8(uint8x8_t a, uint8x8_t b);
uint16x4x2_t vtrn_u16(uint16x4_t a, uint16x4_t b);
poly8x8x2_t vtrn_p8(poly8x8_t a, poly8x8_t b);
poly16x4x2_t vtrn_p16(poly16x4_t a, poly16x4_t b);
int32x2x2_t vtrn_s32(int32x2_t a, int32x2_t b);
float32x2x2_t vtrn_f32(float32x2_t a, float32x2_t b);
uint32x2x2_t vtrn_u32(uint32x2_t a, uint32x2_t b);
int8x16x2_t vtrnq_s8(int8x16_t a, int8x16_t b);
int16x8x2_t vtrnq_s16(int16x8_t a, int16x8_t b);
int32x4x2_t vtrnq_s32(int32x4_t a, int32x4_t b);
float32x4x2_t vtrnq_f32(float32x4_t a, float32x4_t b);
uint8x16x2_t vtrnq_u8(uint8x16_t a, uint8x16_t b);
uint16x8x2_t vtrnq_u16(uint16x8_t a, uint16x8_t b);
uint32x4x2_t vtrnq_u32(uint32x4_t a, uint32x4_t b);
poly8x16x2_t vtrnq_p8(poly8x16_t a, poly8x16_t b);
poly16x8x2_t vtrnq_p16(poly16x8_t a, poly16x8_t b);
int8x8x2_t vzip_s8(int8x8_t a, int8x8_t b);
int16x4x2_t vzip_s16(int16x4_t a, int16x4_t b);
uint8x8x2_t vzip_u8(uint8x8_t a, uint8x8_t b);
uint16x4x2_t vzip_u16(uint16x4_t a, uint16x4_t b);
poly8x8x2_t vzip_p8(poly8x8_t a, poly8x8_t b);
poly16x4x2_t vzip_p16(poly16x4_t a, poly16x4_t b);
int32x2x2_t vzip_s32(int32x2_t a, int32x2_t b);
float32x2x2_t vzip_f32(float32x2_t a, float32x2_t b);
uint32x2x2_t vzip_u32(uint32x2_t a, uint32x2_t b);
int8x16x2_t vzipq_s8(int8x16_t a, int8x16_t b);
int16x8x2_t vzipq_s16(int16x8_t a, int16x8_t b);
int32x4x2_t vzipq_s32(int32x4_t a, int32x4_t b);
float32x4x2_t vzipq_f32(float32x4_t a, float32x4_t b);
uint8x16x2_t vzipq_u8(uint8x16_t a, uint8x16_t b);
uint16x8x2_t vzipq_u16(uint16x8_t a, uint16x8_t b);
uint32x4x2_t vzipq_u32(uint32x4_t a, uint32x4_t b);
poly8x16x2_t vzipq_p8(poly8x16_t a, poly8x16_t b);
poly16x8x2_t vzipq_p16(poly16x8_t a, poly16x8_t b);
int8x8x2_t vuzp_s8(int8x8_t a, int8x8_t b);
int16x4x2_t vuzp_s16(int16x4_t a, int16x4_t b);
int32x2x2_t vuzp_s32(int32x2_t a, int32x2_t b);
float32x2x2_t vuzp_f32(float32x2_t a, float32x2_t b);
uint8x8x2_t vuzp_u8(uint8x8_t a, uint8x8_t b);
uint16x4x2_t vuzp_u16(uint16x4_t a, uint16x4_t b);
uint32x2x2_t vuzp_u32(uint32x2_t a, uint32x2_t b);
poly8x8x2_t vuzp_p8(poly8x8_t a, poly8x8_t b);
poly16x4x2_t vuzp_p16(poly16x4_t a, poly16x4_t b);
int8x16x2_t vuzpq_s8(int8x16_t a, int8x16_t b);
int16x8x2_t vuzpq_s16(int16x8_t a, int16x8_t b);
int32x4x2_t vuzpq_s32(int32x4_t a, int32x4_t b);
float32x4x2_t vuzpq_f32(float32x4_t a, float32x4_t b);
uint8x16x2_t vuzpq_u8(uint8x16_t a, uint8x16_t b);
uint16x8x2_t vuzpq_u16(uint16x8_t a, uint16x8_t b);
uint32x4x2_t vuzpq_u32(uint32x4_t a, uint32x4_t b);
poly8x16x2_t vuzpq_p8(poly8x16_t a, poly8x16_t b);
poly16x8x2_t vuzpq_p16(poly16x8_t a, poly16x8_t b);
int16x4_t vreinterpret_s16_s8(int8x8_t a);
int32x2_t vreinterpret_s32_s8(int8x8_t a);
float32x2_t vreinterpret_f32_s8(int8x8_t a);
uint8x8_t vreinterpret_u8_s8(int8x8_t a);
uint16x4_t vreinterpret_u16_s8(int8x8_t a);
uint32x2_t vreinterpret_u32_s8(int8x8_t a);
poly8x8_t vreinterpret_p8_s8(int8x8_t a);
poly16x4_t vreinterpret_p16_s8(int8x8_t a);
uint64x1_t vreinterpret_u64_s8(int8x8_t a);
int64x1_t vreinterpret_s64_s8(int8x8_t a);
float64x1_t vreinterpret_f64_s8(int8x8_t a);
poly64x1_t vreinterpret_p64_s8(int8x8_t a);
float16x4_t vreinterpret_f16_s8(int8x8_t a);
int8x8_t vreinterpret_s8_s16(int16x4_t a);
int32x2_t vreinterpret_s32_s16(int16x4_t a);
float32x2_t vreinterpret_f32_s16(int16x4_t a);
uint8x8_t vreinterpret_u8_s16(int16x4_t a);
uint16x4_t vreinterpret_u16_s16(int16x4_t a);
uint32x2_t vreinterpret_u32_s16(int16x4_t a);
poly8x8_t vreinterpret_p8_s16(int16x4_t a);
poly16x4_t vreinterpret_p16_s16(int16x4_t a);
uint64x1_t vreinterpret_u64_s16(int16x4_t a);
int64x1_t vreinterpret_s64_s16(int16x4_t a);
float64x1_t vreinterpret_f64_s16(int16x4_t a);
poly64x1_t vreinterpret_p64_s16(int16x4_t a);
float16x4_t vreinterpret_f16_s16(int16x4_t a);
int8x8_t vreinterpret_s8_s32(int32x2_t a);
int16x4_t vreinterpret_s16_s32(int32x2_t a);
float32x2_t vreinterpret_f32_s32(int32x2_t a);
uint8x8_t vreinterpret_u8_s32(int32x2_t a);
uint16x4_t vreinterpret_u16_s32(int32x2_t a);
uint32x2_t vreinterpret_u32_s32(int32x2_t a);
poly8x8_t vreinterpret_p8_s32(int32x2_t a);
poly16x4_t vreinterpret_p16_s32(int32x2_t a);
uint64x1_t vreinterpret_u64_s32(int32x2_t a);
int64x1_t vreinterpret_s64_s32(int32x2_t a);
float64x1_t vreinterpret_f64_s32(int32x2_t a);
poly64x1_t vreinterpret_p64_s32(int32x2_t a);
float16x4_t vreinterpret_f16_s32(int32x2_t a);
int8x8_t vreinterpret_s8_f32(float32x2_t a);
int16x4_t vreinterpret_s16_f32(float32x2_t a);
int32x2_t vreinterpret_s32_f32(float32x2_t a);
uint8x8_t vreinterpret_u8_f32(float32x2_t a);
uint16x4_t vreinterpret_u16_f32(float32x2_t a);
uint32x2_t vreinterpret_u32_f32(float32x2_t a);
poly8x8_t vreinterpret_p8_f32(float32x2_t a);
poly16x4_t vreinterpret_p16_f32(float32x2_t a);
uint64x1_t vreinterpret_u64_f32(float32x2_t a);
int64x1_t vreinterpret_s64_f32(float32x2_t a);
float64x1_t vreinterpret_f64_f32(float32x2_t a);
poly64x1_t vreinterpret_p64_f32(float32x2_t a);
poly64x1_t vreinterpret_p64_f64(float64x1_t a);
float16x4_t vreinterpret_f16_f32(float32x2_t a);
int8x8_t vreinterpret_s8_u8(uint8x8_t a);
int16x4_t vreinterpret_s16_u8(uint8x8_t a);
int32x2_t vreinterpret_s32_u8(uint8x8_t a);
float32x2_t vreinterpret_f32_u8(uint8x8_t a);
uint16x4_t vreinterpret_u16_u8(uint8x8_t a);
uint32x2_t vreinterpret_u32_u8(uint8x8_t a);
poly8x8_t vreinterpret_p8_u8(uint8x8_t a);
poly16x4_t vreinterpret_p16_u8(uint8x8_t a);
uint64x1_t vreinterpret_u64_u8(uint8x8_t a);
int64x1_t vreinterpret_s64_u8(uint8x8_t a);
float64x1_t vreinterpret_f64_u8(uint8x8_t a);
poly64x1_t vreinterpret_p64_u8(uint8x8_t a);
float16x4_t vreinterpret_f16_u8(uint8x8_t a);
int8x8_t vreinterpret_s8_u16(uint16x4_t a);
int16x4_t vreinterpret_s16_u16(uint16x4_t a);
int32x2_t vreinterpret_s32_u16(uint16x4_t a);
float32x2_t vreinterpret_f32_u16(uint16x4_t a);
uint8x8_t vreinterpret_u8_u16(uint16x4_t a);
uint32x2_t vreinterpret_u32_u16(uint16x4_t a);
poly8x8_t vreinterpret_p8_u16(uint16x4_t a);
poly16x4_t vreinterpret_p16_u16(uint16x4_t a);
uint64x1_t vreinterpret_u64_u16(uint16x4_t a);
int64x1_t vreinterpret_s64_u16(uint16x4_t a);
float64x1_t vreinterpret_f64_u16(uint16x4_t a);
poly64x1_t vreinterpret_p64_u16(uint16x4_t a);
float16x4_t vreinterpret_f16_u16(uint16x4_t a);
int8x8_t vreinterpret_s8_u32(uint32x2_t a);
int16x4_t vreinterpret_s16_u32(uint32x2_t a);
int32x2_t vreinterpret_s32_u32(uint32x2_t a);
float32x2_t vreinterpret_f32_u32(uint32x2_t a);
uint8x8_t vreinterpret_u8_u32(uint32x2_t a);
uint16x4_t vreinterpret_u16_u32(uint32x2_t a);
poly8x8_t vreinterpret_p8_u32(uint32x2_t a);
poly16x4_t vreinterpret_p16_u32(uint32x2_t a);
uint64x1_t vreinterpret_u64_u32(uint32x2_t a);
int64x1_t vreinterpret_s64_u32(uint32x2_t a);
float64x1_t vreinterpret_f64_u32(uint32x2_t a);
poly64x1_t vreinterpret_p64_u32(uint32x2_t a);
float16x4_t vreinterpret_f16_u32(uint32x2_t a);
int8x8_t vreinterpret_s8_p8(poly8x8_t a);
int16x4_t vreinterpret_s16_p8(poly8x8_t a);
int32x2_t vreinterpret_s32_p8(poly8x8_t a);
float32x2_t vreinterpret_f32_p8(poly8x8_t a);
uint8x8_t vreinterpret_u8_p8(poly8x8_t a);
uint16x4_t vreinterpret_u16_p8(poly8x8_t a);
uint32x2_t vreinterpret_u32_p8(poly8x8_t a);
poly16x4_t vreinterpret_p16_p8(poly8x8_t a);
uint64x1_t vreinterpret_u64_p8(poly8x8_t a);
int64x1_t vreinterpret_s64_p8(poly8x8_t a);
float64x1_t vreinterpret_f64_p8(poly8x8_t a);
poly64x1_t vreinterpret_p64_p8(poly8x8_t a);
float16x4_t vreinterpret_f16_p8(poly8x8_t a);
int8x8_t vreinterpret_s8_p16(poly16x4_t a);
int16x4_t vreinterpret_s16_p16(poly16x4_t a);
int32x2_t vreinterpret_s32_p16(poly16x4_t a);
float32x2_t vreinterpret_f32_p16(poly16x4_t a);
uint8x8_t vreinterpret_u8_p16(poly16x4_t a);
uint16x4_t vreinterpret_u16_p16(poly16x4_t a);
uint32x2_t vreinterpret_u32_p16(poly16x4_t a);
poly8x8_t vreinterpret_p8_p16(poly16x4_t a);
uint64x1_t vreinterpret_u64_p16(poly16x4_t a);
int64x1_t vreinterpret_s64_p16(poly16x4_t a);
float64x1_t vreinterpret_f64_p16(poly16x4_t a);
poly64x1_t vreinterpret_p64_p16(poly16x4_t a);
float16x4_t vreinterpret_f16_p16(poly16x4_t a);
int8x8_t vreinterpret_s8_u64(uint64x1_t a);
int16x4_t vreinterpret_s16_u64(uint64x1_t a);
int32x2_t vreinterpret_s32_u64(uint64x1_t a);
float32x2_t vreinterpret_f32_u64(uint64x1_t a);
uint8x8_t vreinterpret_u8_u64(uint64x1_t a);
uint16x4_t vreinterpret_u16_u64(uint64x1_t a);
uint32x2_t vreinterpret_u32_u64(uint64x1_t a);
poly8x8_t vreinterpret_p8_u64(uint64x1_t a);
poly16x4_t vreinterpret_p16_u64(uint64x1_t a);
int64x1_t vreinterpret_s64_u64(uint64x1_t a);
float64x1_t vreinterpret_f64_u64(uint64x1_t a);
poly64x1_t vreinterpret_p64_u64(uint64x1_t a);
float16x4_t vreinterpret_f16_u64(uint64x1_t a);
int8x8_t vreinterpret_s8_s64(int64x1_t a);
int16x4_t vreinterpret_s16_s64(int64x1_t a);
int32x2_t vreinterpret_s32_s64(int64x1_t a);
float32x2_t vreinterpret_f32_s64(int64x1_t a);
uint8x8_t vreinterpret_u8_s64(int64x1_t a);
uint16x4_t vreinterpret_u16_s64(int64x1_t a);
uint32x2_t vreinterpret_u32_s64(int64x1_t a);
poly8x8_t vreinterpret_p8_s64(int64x1_t a);
poly16x4_t vreinterpret_p16_s64(int64x1_t a);
uint64x1_t vreinterpret_u64_s64(int64x1_t a);
float64x1_t vreinterpret_f64_s64(int64x1_t a);
uint64x1_t vreinterpret_u64_p64(poly64x1_t a);
float16x4_t vreinterpret_f16_s64(int64x1_t a);
int8x8_t vreinterpret_s8_f16(float16x4_t a);
int16x4_t vreinterpret_s16_f16(float16x4_t a);
int32x2_t vreinterpret_s32_f16(float16x4_t a);
float32x2_t vreinterpret_f32_f16(float16x4_t a);
uint8x8_t vreinterpret_u8_f16(float16x4_t a);
uint16x4_t vreinterpret_u16_f16(float16x4_t a);
uint32x2_t vreinterpret_u32_f16(float16x4_t a);
poly8x8_t vreinterpret_p8_f16(float16x4_t a);
poly16x4_t vreinterpret_p16_f16(float16x4_t a);
uint64x1_t vreinterpret_u64_f16(float16x4_t a);
int64x1_t vreinterpret_s64_f16(float16x4_t a);
float64x1_t vreinterpret_f64_f16(float16x4_t a);
poly64x1_t vreinterpret_p64_f16(float16x4_t a);
int16x8_t vreinterpretq_s16_s8(int8x16_t a);
int32x4_t vreinterpretq_s32_s8(int8x16_t a);
float32x4_t vreinterpretq_f32_s8(int8x16_t a);
uint8x16_t vreinterpretq_u8_s8(int8x16_t a);
uint16x8_t vreinterpretq_u16_s8(int8x16_t a);
uint32x4_t vreinterpretq_u32_s8(int8x16_t a);
poly8x16_t vreinterpretq_p8_s8(int8x16_t a);
poly16x8_t vreinterpretq_p16_s8(int8x16_t a);
uint64x2_t vreinterpretq_u64_s8(int8x16_t a);
int64x2_t vreinterpretq_s64_s8(int8x16_t a);
float64x2_t vreinterpretq_f64_s8(int8x16_t a);
poly64x2_t vreinterpretq_p64_s8(int8x16_t a);
poly128_t vreinterpretq_p128_s8(int8x16_t a);
float16x8_t vreinterpretq_f16_s8(int8x16_t a);
int8x16_t vreinterpretq_s8_s16(int16x8_t a);
int32x4_t vreinterpretq_s32_s16(int16x8_t a);
float32x4_t vreinterpretq_f32_s16(int16x8_t a);
uint8x16_t vreinterpretq_u8_s16(int16x8_t a);
uint16x8_t vreinterpretq_u16_s16(int16x8_t a);
uint32x4_t vreinterpretq_u32_s16(int16x8_t a);
poly8x16_t vreinterpretq_p8_s16(int16x8_t a);
poly16x8_t vreinterpretq_p16_s16(int16x8_t a);
uint64x2_t vreinterpretq_u64_s16(int16x8_t a);
int64x2_t vreinterpretq_s64_s16(int16x8_t a);
float64x2_t vreinterpretq_f64_s16(int16x8_t a);
poly64x2_t vreinterpretq_p64_s16(int16x8_t a);
poly128_t vreinterpretq_p128_s16(int16x8_t a);
float16x8_t vreinterpretq_f16_s16(int16x8_t a);
int8x16_t vreinterpretq_s8_s32(int32x4_t a);
int16x8_t vreinterpretq_s16_s32(int32x4_t a);
float32x4_t vreinterpretq_f32_s32(int32x4_t a);
uint8x16_t vreinterpretq_u8_s32(int32x4_t a);
uint16x8_t vreinterpretq_u16_s32(int32x4_t a);
uint32x4_t vreinterpretq_u32_s32(int32x4_t a);
poly8x16_t vreinterpretq_p8_s32(int32x4_t a);
poly16x8_t vreinterpretq_p16_s32(int32x4_t a);
uint64x2_t vreinterpretq_u64_s32(int32x4_t a);
int64x2_t vreinterpretq_s64_s32(int32x4_t a);
float64x2_t vreinterpretq_f64_s32(int32x4_t a);
poly64x2_t vreinterpretq_p64_s32(int32x4_t a);
poly128_t vreinterpretq_p128_s32(int32x4_t a);
float16x8_t vreinterpretq_f16_s32(int32x4_t a);
int8x16_t vreinterpretq_s8_f32(float32x4_t a);
int16x8_t vreinterpretq_s16_f32(float32x4_t a);
int32x4_t vreinterpretq_s32_f32(float32x4_t a);
uint8x16_t vreinterpretq_u8_f32(float32x4_t a);
uint16x8_t vreinterpretq_u16_f32(float32x4_t a);
uint32x4_t vreinterpretq_u32_f32(float32x4_t a);
poly8x16_t vreinterpretq_p8_f32(float32x4_t a);
poly16x8_t vreinterpretq_p16_f32(float32x4_t a);
uint64x2_t vreinterpretq_u64_f32(float32x4_t a);
int64x2_t vreinterpretq_s64_f32(float32x4_t a);
float64x2_t vreinterpretq_f64_f32(float32x4_t a);
poly64x2_t vreinterpretq_p64_f32(float32x4_t a);
poly128_t vreinterpretq_p128_f32(float32x4_t a);
poly64x2_t vreinterpretq_p64_f64(float64x2_t a);
poly128_t vreinterpretq_p128_f64(float64x2_t a);
float16x8_t vreinterpretq_f16_f32(float32x4_t a);
int8x16_t vreinterpretq_s8_u8(uint8x16_t a);
int16x8_t vreinterpretq_s16_u8(uint8x16_t a);
int32x4_t vreinterpretq_s32_u8(uint8x16_t a);
float32x4_t vreinterpretq_f32_u8(uint8x16_t a);
uint16x8_t vreinterpretq_u16_u8(uint8x16_t a);
uint32x4_t vreinterpretq_u32_u8(uint8x16_t a);
poly8x16_t vreinterpretq_p8_u8(uint8x16_t a);
poly16x8_t vreinterpretq_p16_u8(uint8x16_t a);
uint64x2_t vreinterpretq_u64_u8(uint8x16_t a);
int64x2_t vreinterpretq_s64_u8(uint8x16_t a);
float64x2_t vreinterpretq_f64_u8(uint8x16_t a);
poly64x2_t vreinterpretq_p64_u8(uint8x16_t a);
poly128_t vreinterpretq_p128_u8(uint8x16_t a);
float16x8_t vreinterpretq_f16_u8(uint8x16_t a);
int8x16_t vreinterpretq_s8_u16(uint16x8_t a);
int16x8_t vreinterpretq_s16_u16(uint16x8_t a);
int32x4_t vreinterpretq_s32_u16(uint16x8_t a);
float32x4_t vreinterpretq_f32_u16(uint16x8_t a);
uint8x16_t vreinterpretq_u8_u16(uint16x8_t a);
uint32x4_t vreinterpretq_u32_u16(uint16x8_t a);
poly8x16_t vreinterpretq_p8_u16(uint16x8_t a);
poly16x8_t vreinterpretq_p16_u16(uint16x8_t a);
uint64x2_t vreinterpretq_u64_u16(uint16x8_t a);
int64x2_t vreinterpretq_s64_u16(uint16x8_t a);
float64x2_t vreinterpretq_f64_u16(uint16x8_t a);
poly64x2_t vreinterpretq_p64_u16(uint16x8_t a);
poly128_t vreinterpretq_p128_u16(uint16x8_t a);
float16x8_t vreinterpretq_f16_u16(uint16x8_t a);
int8x16_t vreinterpretq_s8_u32(uint32x4_t a);
int16x8_t vreinterpretq_s16_u32(uint32x4_t a);
int32x4_t vreinterpretq_s32_u32(uint32x4_t a);
float32x4_t vreinterpretq_f32_u32(uint32x4_t a);
uint8x16_t vreinterpretq_u8_u32(uint32x4_t a);
uint16x8_t vreinterpretq_u16_u32(uint32x4_t a);
poly8x16_t vreinterpretq_p8_u32(uint32x4_t a);
poly16x8_t vreinterpretq_p16_u32(uint32x4_t a);
uint64x2_t vreinterpretq_u64_u32(uint32x4_t a);
int64x2_t vreinterpretq_s64_u32(uint32x4_t a);
float64x2_t vreinterpretq_f64_u32(uint32x4_t a);
poly64x2_t vreinterpretq_p64_u32(uint32x4_t a);
poly128_t vreinterpretq_p128_u32(uint32x4_t a);
float16x8_t vreinterpretq_f16_u32(uint32x4_t a);
int8x16_t vreinterpretq_s8_p8(poly8x16_t a);
int16x8_t vreinterpretq_s16_p8(poly8x16_t a);
int32x4_t vreinterpretq_s32_p8(poly8x16_t a);
float32x4_t vreinterpretq_f32_p8(poly8x16_t a);
uint8x16_t vreinterpretq_u8_p8(poly8x16_t a);
uint16x8_t vreinterpretq_u16_p8(poly8x16_t a);
uint32x4_t vreinterpretq_u32_p8(poly8x16_t a);
poly16x8_t vreinterpretq_p16_p8(poly8x16_t a);
uint64x2_t vreinterpretq_u64_p8(poly8x16_t a);
int64x2_t vreinterpretq_s64_p8(poly8x16_t a);
float64x2_t vreinterpretq_f64_p8(poly8x16_t a);
poly64x2_t vreinterpretq_p64_p8(poly8x16_t a);
poly128_t vreinterpretq_p128_p8(poly8x16_t a);
float16x8_t vreinterpretq_f16_p8(poly8x16_t a);
int8x16_t vreinterpretq_s8_p16(poly16x8_t a);
int16x8_t vreinterpretq_s16_p16(poly16x8_t a);
int32x4_t vreinterpretq_s32_p16(poly16x8_t a);
float32x4_t vreinterpretq_f32_p16(poly16x8_t a);
uint8x16_t vreinterpretq_u8_p16(poly16x8_t a);
uint16x8_t vreinterpretq_u16_p16(poly16x8_t a);
uint32x4_t vreinterpretq_u32_p16(poly16x8_t a);
poly8x16_t vreinterpretq_p8_p16(poly16x8_t a);
uint64x2_t vreinterpretq_u64_p16(poly16x8_t a);
int64x2_t vreinterpretq_s64_p16(poly16x8_t a);
float64x2_t vreinterpretq_f64_p16(poly16x8_t a);
poly64x2_t vreinterpretq_p64_p16(poly16x8_t a);
poly128_t vreinterpretq_p128_p16(poly16x8_t a);
float16x8_t vreinterpretq_f16_p16(poly16x8_t a);
int8x16_t vreinterpretq_s8_u64(uint64x2_t a);
int16x8_t vreinterpretq_s16_u64(uint64x2_t a);
int32x4_t vreinterpretq_s32_u64(uint64x2_t a);
float32x4_t vreinterpretq_f32_u64(uint64x2_t a);
uint8x16_t vreinterpretq_u8_u64(uint64x2_t a);
uint16x8_t vreinterpretq_u16_u64(uint64x2_t a);
uint32x4_t vreinterpretq_u32_u64(uint64x2_t a);
poly8x16_t vreinterpretq_p8_u64(uint64x2_t a);
poly16x8_t vreinterpretq_p16_u64(uint64x2_t a);
int64x2_t vreinterpretq_s64_u64(uint64x2_t a);
float64x2_t vreinterpretq_f64_u64(uint64x2_t a);
float64x2_t vreinterpretq_f64_s64(int64x2_t a);
poly64x2_t vreinterpretq_p64_s64(int64x2_t a);
poly128_t vreinterpretq_p128_s64(int64x2_t a);
poly64x2_t vreinterpretq_p64_u64(uint64x2_t a);
poly128_t vreinterpretq_p128_u64(uint64x2_t a);
float16x8_t vreinterpretq_f16_u64(uint64x2_t a);
int8x16_t vreinterpretq_s8_s64(int64x2_t a);
int16x8_t vreinterpretq_s16_s64(int64x2_t a);
int32x4_t vreinterpretq_s32_s64(int64x2_t a);
float32x4_t vreinterpretq_f32_s64(int64x2_t a);
uint8x16_t vreinterpretq_u8_s64(int64x2_t a);
uint16x8_t vreinterpretq_u16_s64(int64x2_t a);
uint32x4_t vreinterpretq_u32_s64(int64x2_t a);
poly8x16_t vreinterpretq_p8_s64(int64x2_t a);
poly16x8_t vreinterpretq_p16_s64(int64x2_t a);
uint64x2_t vreinterpretq_u64_s64(int64x2_t a);
uint64x2_t vreinterpretq_u64_p64(poly64x2_t a);
float16x8_t vreinterpretq_f16_s64(int64x2_t a);
int8x16_t vreinterpretq_s8_f16(float16x8_t a);
int16x8_t vreinterpretq_s16_f16(float16x8_t a);
int32x4_t vreinterpretq_s32_f16(float16x8_t a);
float32x4_t vreinterpretq_f32_f16(float16x8_t a);
uint8x16_t vreinterpretq_u8_f16(float16x8_t a);
uint16x8_t vreinterpretq_u16_f16(float16x8_t a);
uint32x4_t vreinterpretq_u32_f16(float16x8_t a);
poly8x16_t vreinterpretq_p8_f16(float16x8_t a);
poly16x8_t vreinterpretq_p16_f16(float16x8_t a);
uint64x2_t vreinterpretq_u64_f16(float16x8_t a);
int64x2_t vreinterpretq_s64_f16(float16x8_t a);
float64x2_t vreinterpretq_f64_f16(float16x8_t a);
poly64x2_t vreinterpretq_p64_f16(float16x8_t a);
poly128_t vreinterpretq_p128_f16(float16x8_t a);
int8x8_t vreinterpret_s8_f64(float64x1_t a);
int16x4_t vreinterpret_s16_f64(float64x1_t a);
int32x2_t vreinterpret_s32_f64(float64x1_t a);
uint8x8_t vreinterpret_u8_f64(float64x1_t a);
uint16x4_t vreinterpret_u16_f64(float64x1_t a);
uint32x2_t vreinterpret_u32_f64(float64x1_t a);
poly8x8_t vreinterpret_p8_f64(float64x1_t a);
poly16x4_t vreinterpret_p16_f64(float64x1_t a);
uint64x1_t vreinterpret_u64_f64(float64x1_t a);
int64x1_t vreinterpret_s64_f64(float64x1_t a);
float16x4_t vreinterpret_f16_f64(float64x1_t a);
float32x2_t vreinterpret_f32_f64(float64x1_t a);
int8x16_t vreinterpretq_s8_f64(float64x2_t a);
int16x8_t vreinterpretq_s16_f64(float64x2_t a);
int32x4_t vreinterpretq_s32_f64(float64x2_t a);
uint8x16_t vreinterpretq_u8_f64(float64x2_t a);
uint16x8_t vreinterpretq_u16_f64(float64x2_t a);
uint32x4_t vreinterpretq_u32_f64(float64x2_t a);
poly8x16_t vreinterpretq_p8_f64(float64x2_t a);
poly16x8_t vreinterpretq_p16_f64(float64x2_t a);
uint64x2_t vreinterpretq_u64_f64(float64x2_t a);
int64x2_t vreinterpretq_s64_f64(float64x2_t a);
float16x8_t vreinterpretq_f16_f64(float64x2_t a);
float32x4_t vreinterpretq_f32_f64(float64x2_t a);
int8x8_t vreinterpret_s8_p64(poly64x1_t a);
int16x4_t vreinterpret_s16_p64(poly64x1_t a);
int32x2_t vreinterpret_s32_p64(poly64x1_t a);
uint8x8_t vreinterpret_u8_p64(poly64x1_t a);
uint16x4_t vreinterpret_u16_p64(poly64x1_t a);
uint32x2_t vreinterpret_u32_p64(poly64x1_t a);
poly8x8_t vreinterpret_p8_p64(poly64x1_t a);
poly16x4_t vreinterpret_p16_p64(poly64x1_t a);
int64x1_t vreinterpret_s64_p64(poly64x1_t a);
float64x1_t vreinterpret_f64_p64(poly64x1_t a);
float16x4_t vreinterpret_f16_p64(poly64x1_t a);
int8x16_t vreinterpretq_s8_p64(poly64x2_t a);
int16x8_t vreinterpretq_s16_p64(poly64x2_t a);
int32x4_t vreinterpretq_s32_p64(poly64x2_t a);
uint8x16_t vreinterpretq_u8_p64(poly64x2_t a);
uint16x8_t vreinterpretq_u16_p64(poly64x2_t a);
uint32x4_t vreinterpretq_u32_p64(poly64x2_t a);
poly8x16_t vreinterpretq_p8_p64(poly64x2_t a);
poly16x8_t vreinterpretq_p16_p64(poly64x2_t a);
int64x2_t vreinterpretq_s64_p64(poly64x2_t a);
float64x2_t vreinterpretq_f64_p64(poly64x2_t a);
float16x8_t vreinterpretq_f16_p64(poly64x2_t a);
int8x16_t vreinterpretq_s8_p128(poly128_t a);
int16x8_t vreinterpretq_s16_p128(poly128_t a);
int32x4_t vreinterpretq_s32_p128(poly128_t a);
uint8x16_t vreinterpretq_u8_p128(poly128_t a);
uint16x8_t vreinterpretq_u16_p128(poly128_t a);
uint32x4_t vreinterpretq_u32_p128(poly128_t a);
poly8x16_t vreinterpretq_p8_p128(poly128_t a);
poly16x8_t vreinterpretq_p16_p128(poly128_t a);
uint64x2_t vreinterpretq_u64_p128(poly128_t a);
int64x2_t vreinterpretq_s64_p128(poly128_t a);
float64x2_t vreinterpretq_f64_p128(poly128_t a);
float16x8_t vreinterpretq_f16_p128(poly128_t a);
poly128_t vldrq_p128(poly128_t const * ptr);
void vstrq_p128(poly128_t * ptr, poly128_t val);
uint8x16_t vaeseq_u8(uint8x16_t data, uint8x16_t key);
uint8x16_t vaesdq_u8(uint8x16_t data, uint8x16_t key);
uint8x16_t vaesmcq_u8(uint8x16_t data);
uint8x16_t vaesimcq_u8(uint8x16_t data);
uint32x4_t vsha1cq_u32(uint32x4_t hash_abcd, uint32_t hash_e, uint32x4_t wk);
uint32x4_t vsha1pq_u32(uint32x4_t hash_abcd, uint32_t hash_e, uint32x4_t wk);
uint32x4_t vsha1mq_u32(uint32x4_t hash_abcd, uint32_t hash_e, uint32x4_t wk);
uint32_t vsha1h_u32(uint32_t hash_e);
uint32x4_t vsha1su0q_u32(uint32x4_t w0_3, uint32x4_t w4_7, uint32x4_t w8_11);
uint32x4_t vsha1su1q_u32(uint32x4_t tw0_3, uint32x4_t w12_15);
uint32x4_t vsha256hq_u32(uint32x4_t hash_abcd, uint32x4_t hash_efgh, uint32x4_t wk);
uint32x4_t vsha256h2q_u32(uint32x4_t hash_efgh, uint32x4_t hash_abcd, uint32x4_t wk);
uint32x4_t vsha256su0q_u32(uint32x4_t w0_3, uint32x4_t w4_7);
uint32x4_t vsha256su1q_u32(uint32x4_t tw0_3, uint32x4_t w8_11, uint32x4_t w12_15);
poly128_t vmull_p64(poly64_t a, poly64_t b);
poly128_t vmull_high_p64(poly64x2_t a, poly64x2_t b);
poly8x8_t vadd_p8(poly8x8_t a, poly8x8_t b);
poly16x4_t vadd_p16(poly16x4_t a, poly16x4_t b);
poly64x1_t vadd_p64(poly64x1_t a, poly64x1_t b);
poly8x16_t vaddq_p8(poly8x16_t a, poly8x16_t b);
poly16x8_t vaddq_p16(poly16x8_t a, poly16x8_t b);
poly64x2_t vaddq_p64(poly64x2_t a, poly64x2_t b);
poly128_t vaddq_p128(poly128_t a, poly128_t b);
uint32_t __crc32b(uint32_t a, uint8_t b);
uint32_t __crc32h(uint32_t a, uint16_t b);
uint32_t __crc32w(uint32_t a, uint32_t b);
uint32_t __crc32d(uint32_t a, uint64_t b);
uint32_t __crc32cb(uint32_t a, uint8_t b);
uint32_t __crc32ch(uint32_t a, uint16_t b);
uint32_t __crc32cw(uint32_t a, uint32_t b);
uint32_t __crc32cd(uint32_t a, uint64_t b);
int16x4_t vqrdmlah_s16(int16x4_t a, int16x4_t b, int16x4_t c);
int32x2_t vqrdmlah_s32(int32x2_t a, int32x2_t b, int32x2_t c);
int16x8_t vqrdmlahq_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x4_t vqrdmlahq_s32(int32x4_t a, int32x4_t b, int32x4_t c);
int16x4_t vqrdmlsh_s16(int16x4_t a, int16x4_t b, int16x4_t c);
int32x2_t vqrdmlsh_s32(int32x2_t a, int32x2_t b, int32x2_t c);
int16x8_t vqrdmlshq_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x4_t vqrdmlshq_s32(int32x4_t a, int32x4_t b, int32x4_t c);
int16x4_t vqrdmlah_lane_s16(int16x4_t a, int16x4_t b, int16x4_t v, const int lane);
int16x8_t vqrdmlahq_lane_s16(int16x8_t a, int16x8_t b, int16x4_t v, const int lane);
int16x4_t vqrdmlah_laneq_s16(int16x4_t a, int16x4_t b, int16x8_t v, const int lane);
int16x8_t vqrdmlahq_laneq_s16(int16x8_t a, int16x8_t b, int16x8_t v, const int lane);
int32x2_t vqrdmlah_lane_s32(int32x2_t a, int32x2_t b, int32x2_t v, const int lane);
int32x4_t vqrdmlahq_lane_s32(int32x4_t a, int32x4_t b, int32x2_t v, const int lane);
int32x2_t vqrdmlah_laneq_s32(int32x2_t a, int32x2_t b, int32x4_t v, const int lane);
int32x4_t vqrdmlahq_laneq_s32(int32x4_t a, int32x4_t b, int32x4_t v, const int lane);
int16x4_t vqrdmlsh_lane_s16(int16x4_t a, int16x4_t b, int16x4_t v, const int lane);
int16x8_t vqrdmlshq_lane_s16(int16x8_t a, int16x8_t b, int16x4_t v, const int lane);
int16x4_t vqrdmlsh_laneq_s16(int16x4_t a, int16x4_t b, int16x8_t v, const int lane);
int16x8_t vqrdmlshq_laneq_s16(int16x8_t a, int16x8_t b, int16x8_t v, const int lane);
int32x2_t vqrdmlsh_lane_s32(int32x2_t a, int32x2_t b, int32x2_t v, const int lane);
int32x4_t vqrdmlshq_lane_s32(int32x4_t a, int32x4_t b, int32x2_t v, const int lane);
int32x2_t vqrdmlsh_laneq_s32(int32x2_t a, int32x2_t b, int32x4_t v, const int lane);
int32x4_t vqrdmlshq_laneq_s32(int32x4_t a, int32x4_t b, int32x4_t v, const int lane);
int16_t vqrdmlahh_s16(int16_t a, int16_t b, int16_t c);
int32_t vqrdmlahs_s32(int32_t a, int32_t b, int32_t c);
int16_t vqrdmlshh_s16(int16_t a, int16_t b, int16_t c);
int32_t vqrdmlshs_s32(int32_t a, int32_t b, int32_t c);
int16_t vqrdmlahh_lane_s16(int16_t a, int16_t b, int16x4_t v, const int lane);
int16_t vqrdmlahh_laneq_s16(int16_t a, int16_t b, int16x8_t v, const int lane);
int32_t vqrdmlahs_lane_s32(int32_t a, int32_t b, int32x2_t v, const int lane);
int32_t vqrdmlahs_laneq_s32(int32_t a, int32_t b, int32x4_t v, const int lane);
int16_t vqrdmlshh_lane_s16(int16_t a, int16_t b, int16x4_t v, const int lane);
int16_t vqrdmlshh_laneq_s16(int16_t a, int16_t b, int16x8_t v, const int lane);
int32_t vqrdmlshs_lane_s32(int32_t a, int32_t b, int32x2_t v, const int lane);
int32_t vqrdmlshs_laneq_s32(int32_t a, int32_t b, int32x4_t v, const int lane);
float16_t vabsh_f16(float16_t a);
uint16_t vceqzh_f16(float16_t a);
uint16_t vcgezh_f16(float16_t a);
uint16_t vcgtzh_f16(float16_t a);
uint16_t vclezh_f16(float16_t a);
uint16_t vcltzh_f16(float16_t a);
float16_t vcvth_f16_s16(int16_t a);
float16_t vcvth_f16_s32(int32_t a);
float16_t vcvth_f16_s64(int64_t a);
float16_t vcvth_f16_u16(uint16_t a);
float16_t vcvth_f16_u32(uint32_t a);
float16_t vcvth_f16_u64(uint64_t a);
int16_t vcvth_s16_f16(float16_t a);
int32_t vcvth_s32_f16(float16_t a);
int64_t vcvth_s64_f16(float16_t a);
uint16_t vcvth_u16_f16(float16_t a);
uint32_t vcvth_u32_f16(float16_t a);
uint64_t vcvth_u64_f16(float16_t a);
int16_t vcvtah_s16_f16(float16_t a);
int32_t vcvtah_s32_f16(float16_t a);
int64_t vcvtah_s64_f16(float16_t a);
uint16_t vcvtah_u16_f16(float16_t a);
uint32_t vcvtah_u32_f16(float16_t a);
uint64_t vcvtah_u64_f16(float16_t a);
int16_t vcvtmh_s16_f16(float16_t a);
int32_t vcvtmh_s32_f16(float16_t a);
int64_t vcvtmh_s64_f16(float16_t a);
uint16_t vcvtmh_u16_f16(float16_t a);
uint32_t vcvtmh_u32_f16(float16_t a);
uint64_t vcvtmh_u64_f16(float16_t a);
int16_t vcvtnh_s16_f16(float16_t a);
int32_t vcvtnh_s32_f16(float16_t a);
int64_t vcvtnh_s64_f16(float16_t a);
uint16_t vcvtnh_u16_f16(float16_t a);
uint32_t vcvtnh_u32_f16(float16_t a);
uint64_t vcvtnh_u64_f16(float16_t a);
int16_t vcvtph_s16_f16(float16_t a);
int32_t vcvtph_s32_f16(float16_t a);
int64_t vcvtph_s64_f16(float16_t a);
uint16_t vcvtph_u16_f16(float16_t a);
uint32_t vcvtph_u32_f16(float16_t a);
uint64_t vcvtph_u64_f16(float16_t a);
float16_t vnegh_f16(float16_t a);
float16_t vrecpeh_f16(float16_t a);
float16_t vrecpxh_f16(float16_t a);
float16_t vrndh_f16(float16_t a);
float16_t vrndah_f16(float16_t a);
float16_t vrndih_f16(float16_t a);
float16_t vrndmh_f16(float16_t a);
float16_t vrndnh_f16(float16_t a);
float16_t vrndph_f16(float16_t a);
float16_t vrndxh_f16(float16_t a);
float16_t vrsqrteh_f16(float16_t a);
float16_t vsqrth_f16(float16_t a);
float16_t vaddh_f16(float16_t a, float16_t b);
float16_t vabdh_f16(float16_t a, float16_t b);
uint16_t vcageh_f16(float16_t a, float16_t b);
uint16_t vcagth_f16(float16_t a, float16_t b);
uint16_t vcaleh_f16(float16_t a, float16_t b);
uint16_t vcalth_f16(float16_t a, float16_t b);
uint16_t vceqh_f16(float16_t a, float16_t b);
uint16_t vcgeh_f16(float16_t a, float16_t b);
uint16_t vcgth_f16(float16_t a, float16_t b);
uint16_t vcleh_f16(float16_t a, float16_t b);
uint16_t vclth_f16(float16_t a, float16_t b);
float16_t vcvth_n_f16_s16(int16_t a, const int n);
float16_t vcvth_n_f16_s32(int32_t a, const int n);
float16_t vcvth_n_f16_s64(int64_t a, const int n);
float16_t vcvth_n_f16_u16(uint16_t a, const int n);
float16_t vcvth_n_f16_u32(uint32_t a, const int n);
float16_t vcvth_n_f16_u64(uint64_t a, const int n);
int16_t vcvth_n_s16_f16(float16_t a, const int n);
int32_t vcvth_n_s32_f16(float16_t a, const int n);
int64_t vcvth_n_s64_f16(float16_t a, const int n);
uint16_t vcvth_n_u16_f16(float16_t a, const int n);
uint32_t vcvth_n_u32_f16(float16_t a, const int n);
uint64_t vcvth_n_u64_f16(float16_t a, const int n);
float16_t vdivh_f16(float16_t a, float16_t b);
float16_t vmaxh_f16(float16_t a, float16_t b);
float16_t vmaxnmh_f16(float16_t a, float16_t b);
float16_t vminh_f16(float16_t a, float16_t b);
float16_t vminnmh_f16(float16_t a, float16_t b);
float16_t vmulh_f16(float16_t a, float16_t b);
float16_t vmulxh_f16(float16_t a, float16_t b);
float16_t vrecpsh_f16(float16_t a, float16_t b);
float16_t vrsqrtsh_f16(float16_t a, float16_t b);
float16_t vsubh_f16(float16_t a, float16_t b);
float16_t vfmah_f16(float16_t a, float16_t b, float16_t c);
float16_t vfmsh_f16(float16_t a, float16_t b, float16_t c);
float16x4_t vabs_f16(float16x4_t a);
float16x8_t vabsq_f16(float16x8_t a);
uint16x4_t vceqz_f16(float16x4_t a);
uint16x8_t vceqzq_f16(float16x8_t a);
uint16x4_t vcgez_f16(float16x4_t a);
uint16x8_t vcgezq_f16(float16x8_t a);
uint16x4_t vcgtz_f16(float16x4_t a);
uint16x8_t vcgtzq_f16(float16x8_t a);
uint16x4_t vclez_f16(float16x4_t a);
uint16x8_t vclezq_f16(float16x8_t a);
uint16x4_t vcltz_f16(float16x4_t a);
uint16x8_t vcltzq_f16(float16x8_t a);
float16x4_t vcvt_f16_s16(int16x4_t a);
float16x8_t vcvtq_f16_s16(int16x8_t a);
float16x4_t vcvt_f16_u16(uint16x4_t a);
float16x8_t vcvtq_f16_u16(uint16x8_t a);
int16x4_t vcvt_s16_f16(float16x4_t a);
int16x8_t vcvtq_s16_f16(float16x8_t a);
uint16x4_t vcvt_u16_f16(float16x4_t a);
uint16x8_t vcvtq_u16_f16(float16x8_t a);
int16x4_t vcvta_s16_f16(float16x4_t a);
int16x8_t vcvtaq_s16_f16(float16x8_t a);
uint16x4_t vcvta_u16_f16(float16x4_t a);
uint16x8_t vcvtaq_u16_f16(float16x8_t a);
int16x4_t vcvtm_s16_f16(float16x4_t a);
int16x8_t vcvtmq_s16_f16(float16x8_t a);
uint16x4_t vcvtm_u16_f16(float16x4_t a);
uint16x8_t vcvtmq_u16_f16(float16x8_t a);
int16x4_t vcvtn_s16_f16(float16x4_t a);
int16x8_t vcvtnq_s16_f16(float16x8_t a);
uint16x4_t vcvtn_u16_f16(float16x4_t a);
uint16x8_t vcvtnq_u16_f16(float16x8_t a);
int16x4_t vcvtp_s16_f16(float16x4_t a);
int16x8_t vcvtpq_s16_f16(float16x8_t a);
uint16x4_t vcvtp_u16_f16(float16x4_t a);
uint16x8_t vcvtpq_u16_f16(float16x8_t a);
float16x4_t vneg_f16(float16x4_t a);
float16x8_t vnegq_f16(float16x8_t a);
float16x4_t vrecpe_f16(float16x4_t a);
float16x8_t vrecpeq_f16(float16x8_t a);
float16x4_t vrnd_f16(float16x4_t a);
float16x8_t vrndq_f16(float16x8_t a);
float16x4_t vrnda_f16(float16x4_t a);
float16x8_t vrndaq_f16(float16x8_t a);
float16x4_t vrndi_f16(float16x4_t a);
float16x8_t vrndiq_f16(float16x8_t a);
float16x4_t vrndm_f16(float16x4_t a);
float16x8_t vrndmq_f16(float16x8_t a);
float16x4_t vrndn_f16(float16x4_t a);
float16x8_t vrndnq_f16(float16x8_t a);
float16x4_t vrndp_f16(float16x4_t a);
float16x8_t vrndpq_f16(float16x8_t a);
float16x4_t vrndx_f16(float16x4_t a);
float16x8_t vrndxq_f16(float16x8_t a);
float16x4_t vrsqrte_f16(float16x4_t a);
float16x8_t vrsqrteq_f16(float16x8_t a);
float16x4_t vsqrt_f16(float16x4_t a);
float16x8_t vsqrtq_f16(float16x8_t a);
float16x4_t vadd_f16(float16x4_t a, float16x4_t b);
float16x8_t vaddq_f16(float16x8_t a, float16x8_t b);
float16x4_t vabd_f16(float16x4_t a, float16x4_t b);
float16x8_t vabdq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcage_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcageq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcagt_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcagtq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcale_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcaleq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcalt_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcaltq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vceq_f16(float16x4_t a, float16x4_t b);
uint16x8_t vceqq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcge_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcgeq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcgt_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcgtq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vcle_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcleq_f16(float16x8_t a, float16x8_t b);
uint16x4_t vclt_f16(float16x4_t a, float16x4_t b);
uint16x8_t vcltq_f16(float16x8_t a, float16x8_t b);
float16x4_t vcvt_n_f16_s16(int16x4_t a, const int n);
float16x8_t vcvtq_n_f16_s16(int16x8_t a, const int n);
float16x4_t vcvt_n_f16_u16(uint16x4_t a, const int n);
float16x8_t vcvtq_n_f16_u16(uint16x8_t a, const int n);
int16x4_t vcvt_n_s16_f16(float16x4_t a, const int n);
int16x8_t vcvtq_n_s16_f16(float16x8_t a, const int n);
uint16x4_t vcvt_n_u16_f16(float16x4_t a, const int n);
uint16x8_t vcvtq_n_u16_f16(float16x8_t a, const int n);
float16x4_t vdiv_f16(float16x4_t a, float16x4_t b);
float16x8_t vdivq_f16(float16x8_t a, float16x8_t b);
float16x4_t vmax_f16(float16x4_t a, float16x4_t b);
float16x8_t vmaxq_f16(float16x8_t a, float16x8_t b);
float16x4_t vmaxnm_f16(float16x4_t a, float16x4_t b);
float16x8_t vmaxnmq_f16(float16x8_t a, float16x8_t b);
float16x4_t vmin_f16(float16x4_t a, float16x4_t b);
float16x8_t vminq_f16(float16x8_t a, float16x8_t b);
float16x4_t vminnm_f16(float16x4_t a, float16x4_t b);
float16x8_t vminnmq_f16(float16x8_t a, float16x8_t b);
float16x4_t vmul_f16(float16x4_t a, float16x4_t b);
float16x8_t vmulq_f16(float16x8_t a, float16x8_t b);
float16x4_t vmulx_f16(float16x4_t a, float16x4_t b);
float16x8_t vmulxq_f16(float16x8_t a, float16x8_t b);
float16x4_t vpadd_f16(float16x4_t a, float16x4_t b);
float16x8_t vpaddq_f16(float16x8_t a, float16x8_t b);
float16x4_t vpmax_f16(float16x4_t a, float16x4_t b);
float16x8_t vpmaxq_f16(float16x8_t a, float16x8_t b);
float16x4_t vpmaxnm_f16(float16x4_t a, float16x4_t b);
float16x8_t vpmaxnmq_f16(float16x8_t a, float16x8_t b);
float16x4_t vpmin_f16(float16x4_t a, float16x4_t b);
float16x8_t vpminq_f16(float16x8_t a, float16x8_t b);
float16x4_t vpminnm_f16(float16x4_t a, float16x4_t b);
float16x8_t vpminnmq_f16(float16x8_t a, float16x8_t b);
float16x4_t vrecps_f16(float16x4_t a, float16x4_t b);
float16x8_t vrecpsq_f16(float16x8_t a, float16x8_t b);
float16x4_t vrsqrts_f16(float16x4_t a, float16x4_t b);
float16x8_t vrsqrtsq_f16(float16x8_t a, float16x8_t b);
float16x4_t vsub_f16(float16x4_t a, float16x4_t b);
float16x8_t vsubq_f16(float16x8_t a, float16x8_t b);
float16x4_t vfma_f16(float16x4_t a, float16x4_t b, float16x4_t c);
float16x8_t vfmaq_f16(float16x8_t a, float16x8_t b, float16x8_t c);
float16x4_t vfms_f16(float16x4_t a, float16x4_t b, float16x4_t c);
float16x8_t vfmsq_f16(float16x8_t a, float16x8_t b, float16x8_t c);
float16x4_t vfma_lane_f16(float16x4_t a, float16x4_t b, float16x4_t v, const int lane);
float16x8_t vfmaq_lane_f16(float16x8_t a, float16x8_t b, float16x4_t v, const int lane);
float16x4_t vfma_laneq_f16(float16x4_t a, float16x4_t b, float16x8_t v, const int lane);
float16x8_t vfmaq_laneq_f16(float16x8_t a, float16x8_t b, float16x8_t v, const int lane);
float16x4_t vfma_n_f16(float16x4_t a, float16x4_t b, float16_t n);
float16x8_t vfmaq_n_f16(float16x8_t a, float16x8_t b, float16_t n);
float16_t vfmah_lane_f16(float16_t a, float16_t b, float16x4_t v, const int lane);
float16_t vfmah_laneq_f16(float16_t a, float16_t b, float16x8_t v, const int lane);
float16x4_t vfms_lane_f16(float16x4_t a, float16x4_t b, float16x4_t v, const int lane);
float16x8_t vfmsq_lane_f16(float16x8_t a, float16x8_t b, float16x4_t v, const int lane);
float16x4_t vfms_laneq_f16(float16x4_t a, float16x4_t b, float16x8_t v, const int lane);
float16x8_t vfmsq_laneq_f16(float16x8_t a, float16x8_t b, float16x8_t v, const int lane);
float16x4_t vfms_n_f16(float16x4_t a, float16x4_t b, float16_t n);
float16x8_t vfmsq_n_f16(float16x8_t a, float16x8_t b, float16_t n);
float16_t vfmsh_lane_f16(float16_t a, float16_t b, float16x4_t v, const int lane);
float16_t vfmsh_laneq_f16(float16_t a, float16_t b, float16x8_t v, const int lane);
float16x4_t vmul_lane_f16(float16x4_t a, float16x4_t v, const int lane);
float16x8_t vmulq_lane_f16(float16x8_t a, float16x4_t v, const int lane);
float16x4_t vmul_laneq_f16(float16x4_t a, float16x8_t v, const int lane);
float16x8_t vmulq_laneq_f16(float16x8_t a, float16x8_t v, const int lane);
float16x4_t vmul_n_f16(float16x4_t a, float16_t n);
float16x8_t vmulq_n_f16(float16x8_t a, float16_t n);
float16_t vmulh_lane_f16(float16_t a, float16x4_t v, const int lane);
float16_t vmulh_laneq_f16(float16_t a, float16x8_t v, const int lane);
float16x4_t vmulx_lane_f16(float16x4_t a, float16x4_t v, const int lane);
float16x8_t vmulxq_lane_f16(float16x8_t a, float16x4_t v, const int lane);
float16x4_t vmulx_laneq_f16(float16x4_t a, float16x8_t v, const int lane);
float16x8_t vmulxq_laneq_f16(float16x8_t a, float16x8_t v, const int lane);
float16x4_t vmulx_n_f16(float16x4_t a, float16_t n);
float16x8_t vmulxq_n_f16(float16x8_t a, float16_t n);
float16_t vmulxh_lane_f16(float16_t a, float16x4_t v, const int lane);
float16_t vmulxh_laneq_f16(float16_t a, float16x8_t v, const int lane);
float16_t vmaxv_f16(float16x4_t a);
float16_t vmaxvq_f16(float16x8_t a);
float16_t vminv_f16(float16x4_t a);
float16_t vminvq_f16(float16x8_t a);
float16_t vmaxnmv_f16(float16x4_t a);
float16_t vmaxnmvq_f16(float16x8_t a);
float16_t vminnmv_f16(float16x4_t a);
float16_t vminnmvq_f16(float16x8_t a);
float16x4_t vbsl_f16(uint16x4_t a, float16x4_t b, float16x4_t c);
float16x8_t vbslq_f16(uint16x8_t a, float16x8_t b, float16x8_t c);
float16x4x2_t vzip_f16(float16x4_t a, float16x4_t b);
float16x8x2_t vzipq_f16(float16x8_t a, float16x8_t b);
float16x4x2_t vuzp_f16(float16x4_t a, float16x4_t b);
float16x8x2_t vuzpq_f16(float16x8_t a, float16x8_t b);
float16x4x2_t vtrn_f16(float16x4_t a, float16x4_t b);
float16x8x2_t vtrnq_f16(float16x8_t a, float16x8_t b);
float16x4_t vmov_n_f16(float16_t value);
float16x8_t vmovq_n_f16(float16_t value);
float16x4_t vdup_n_f16(float16_t value);
float16x8_t vdupq_n_f16(float16_t value);
float16x4_t vdup_lane_f16(float16x4_t vec, const int lane);
float16x8_t vdupq_lane_f16(float16x4_t vec, const int lane);
float16x4_t vext_f16(float16x4_t a, float16x4_t b, const int n);
float16x8_t vextq_f16(float16x8_t a, float16x8_t b, const int n);
float16x4_t vrev64_f16(float16x4_t vec);
float16x8_t vrev64q_f16(float16x8_t vec);
float16x4_t vzip1_f16(float16x4_t a, float16x4_t b);
float16x8_t vzip1q_f16(float16x8_t a, float16x8_t b);
float16x4_t vzip2_f16(float16x4_t a, float16x4_t b);
float16x8_t vzip2q_f16(float16x8_t a, float16x8_t b);
float16x4_t vuzp1_f16(float16x4_t a, float16x4_t b);
float16x8_t vuzp1q_f16(float16x8_t a, float16x8_t b);
float16x4_t vuzp2_f16(float16x4_t a, float16x4_t b);
float16x8_t vuzp2q_f16(float16x8_t a, float16x8_t b);
float16x4_t vtrn1_f16(float16x4_t a, float16x4_t b);
float16x8_t vtrn1q_f16(float16x8_t a, float16x8_t b);
float16x4_t vtrn2_f16(float16x4_t a, float16x4_t b);
float16x8_t vtrn2q_f16(float16x8_t a, float16x8_t b);
float16x4_t vdup_laneq_f16(float16x8_t vec, const int lane);
float16x8_t vdupq_laneq_f16(float16x8_t vec, const int lane);
float16_t vduph_lane_f16(float16x4_t vec, const int lane);
float16_t vduph_laneq_f16(float16x8_t vec, const int lane);
uint32x2_t vdot_u32(uint32x2_t r, uint8x8_t a, uint8x8_t b);
int32x2_t vdot_s32(int32x2_t r, int8x8_t a, int8x8_t b);
uint32x4_t vdotq_u32(uint32x4_t r, uint8x16_t a, uint8x16_t b);
int32x4_t vdotq_s32(int32x4_t r, int8x16_t a, int8x16_t b);
uint32x2_t vdot_lane_u32(uint32x2_t r, uint8x8_t a, uint8x8_t b, const int lane);
int32x2_t vdot_lane_s32(int32x2_t r, int8x8_t a, int8x8_t b, const int lane);
uint32x4_t vdotq_laneq_u32(uint32x4_t r, uint8x16_t a, uint8x16_t b, const int lane);
int32x4_t vdotq_laneq_s32(int32x4_t r, int8x16_t a, int8x16_t b, const int lane);
uint32x2_t vdot_laneq_u32(uint32x2_t r, uint8x8_t a, uint8x16_t b, const int lane);
int32x2_t vdot_laneq_s32(int32x2_t r, int8x8_t a, int8x16_t b, const int lane);
uint32x4_t vdotq_lane_u32(uint32x4_t r, uint8x16_t a, uint8x8_t b, const int lane);
int32x4_t vdotq_lane_s32(int32x4_t r, int8x16_t a, int8x8_t b, const int lane);
uint64x2_t vsha512hq_u64(uint64x2_t hash_ed, uint64x2_t hash_gf, uint64x2_t kwh_kwh2);
uint64x2_t vsha512h2q_u64(uint64x2_t sum_ab, uint64x2_t hash_c_, uint64x2_t hash_ab);
uint64x2_t vsha512su0q_u64(uint64x2_t w0_1, uint64x2_t w2_);
uint64x2_t vsha512su1q_u64(uint64x2_t s01_s02, uint64x2_t w14_15, uint64x2_t w9_10);
uint8x16_t veor3q_u8(uint8x16_t a, uint8x16_t b, uint8x16_t c);
uint16x8_t veor3q_u16(uint16x8_t a, uint16x8_t b, uint16x8_t c);
uint32x4_t veor3q_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
uint64x2_t veor3q_u64(uint64x2_t a, uint64x2_t b, uint64x2_t c);
int8x16_t veor3q_s8(int8x16_t a, int8x16_t b, int8x16_t c);
int16x8_t veor3q_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x4_t veor3q_s32(int32x4_t a, int32x4_t b, int32x4_t c);
int64x2_t veor3q_s64(int64x2_t a, int64x2_t b, int64x2_t c);
uint64x2_t vrax1q_u64(uint64x2_t a, uint64x2_t b);
uint64x2_t vxarq_u64(uint64x2_t a, uint64x2_t b, const int imm6);
uint8x16_t vbcaxq_u8(uint8x16_t a, uint8x16_t b, uint8x16_t c);
uint16x8_t vbcaxq_u16(uint16x8_t a, uint16x8_t b, uint16x8_t c);
uint32x4_t vbcaxq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
uint64x2_t vbcaxq_u64(uint64x2_t a, uint64x2_t b, uint64x2_t c);
int8x16_t vbcaxq_s8(int8x16_t a, int8x16_t b, int8x16_t c);
int16x8_t vbcaxq_s16(int16x8_t a, int16x8_t b, int16x8_t c);
int32x4_t vbcaxq_s32(int32x4_t a, int32x4_t b, int32x4_t c);
int64x2_t vbcaxq_s64(int64x2_t a, int64x2_t b, int64x2_t c);
uint32x4_t vsm3ss1q_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
uint32x4_t vsm3tt1aq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c, const int imm2);
uint32x4_t vsm3tt1bq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c, const int imm2);
uint32x4_t vsm3tt2aq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c, const int imm2);
uint32x4_t vsm3tt2bq_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c, const int imm2);
uint32x4_t vsm3partw1q_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
uint32x4_t vsm3partw2q_u32(uint32x4_t a, uint32x4_t b, uint32x4_t c);
uint32x4_t vsm4eq_u32(uint32x4_t a, uint32x4_t b);
uint32x4_t vsm4ekeyq_u32(uint32x4_t a, uint32x4_t b);
float32x2_t vfmlal_low_f16(float32x2_t r, float16x4_t a, float16x4_t b);
float32x2_t vfmlsl_low_f16(float32x2_t r, float16x4_t a, float16x4_t b);
float32x4_t vfmlalq_low_f16(float32x4_t r, float16x8_t a, float16x8_t b);
float32x4_t vfmlslq_low_f16(float32x4_t r, float16x8_t a, float16x8_t b);
float32x2_t vfmlal_high_f16(float32x2_t r, float16x4_t a, float16x4_t b);
float32x2_t vfmlsl_high_f16(float32x2_t r, float16x4_t a, float16x4_t b);
float32x4_t vfmlalq_high_f16(float32x4_t r, float16x8_t a, float16x8_t b);
float32x4_t vfmlslq_high_f16(float32x4_t r, float16x8_t a, float16x8_t b);
float32x2_t vfmlal_lane_low_f16(float32x2_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vfmlal_laneq_low_f16(float32x2_t r, float16x4_t a, float16x8_t b, const int lane);
float32x4_t vfmlalq_lane_low_f16(float32x4_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vfmlalq_laneq_low_f16(float32x4_t r, float16x8_t a, float16x8_t b, const int lane);
float32x2_t vfmlsl_lane_low_f16(float32x2_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vfmlsl_laneq_low_f16(float32x2_t r, float16x4_t a, float16x8_t b, const int lane);
float32x4_t vfmlslq_lane_low_f16(float32x4_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vfmlslq_laneq_low_f16(float32x4_t r, float16x8_t a, float16x8_t b, const int lane);
float32x2_t vfmlal_lane_high_f16(float32x2_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vfmlsl_lane_high_f16(float32x2_t r, float16x4_t a, float16x4_t b, const int lane);
float32x4_t vfmlalq_lane_high_f16(float32x4_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vfmlslq_lane_high_f16(float32x4_t r, float16x8_t a, float16x4_t b, const int lane);
float32x2_t vfmlal_laneq_high_f16(float32x2_t r, float16x4_t a, float16x8_t b, const int lane);
float32x2_t vfmlsl_laneq_high_f16(float32x2_t r, float16x4_t a, float16x8_t b, const int lane);
float32x4_t vfmlalq_laneq_high_f16(float32x4_t r, float16x8_t a, float16x8_t b, const int lane);
float32x4_t vfmlslq_laneq_high_f16(float32x4_t r, float16x8_t a, float16x8_t b, const int lane);
float16x4_t vcadd_rot90_f16(float16x4_t a, float16x4_t b);
float32x2_t vcadd_rot90_f32(float32x2_t a, float32x2_t b);
float16x8_t vcaddq_rot90_f16(float16x8_t a, float16x8_t b);
float32x4_t vcaddq_rot90_f32(float32x4_t a, float32x4_t b);
float64x2_t vcaddq_rot90_f64(float64x2_t a, float64x2_t b);
float16x4_t vcadd_rot270_f16(float16x4_t a, float16x4_t b);
float32x2_t vcadd_rot270_f32(float32x2_t a, float32x2_t b);
float16x8_t vcaddq_rot270_f16(float16x8_t a, float16x8_t b);
float32x4_t vcaddq_rot270_f32(float32x4_t a, float32x4_t b);
float64x2_t vcaddq_rot270_f64(float64x2_t a, float64x2_t b);
float16x4_t vcmla_f16(float16x4_t r, float16x4_t a, float16x4_t b);
float32x2_t vcmla_f32(float32x2_t r, float32x2_t a, float32x2_t b);
float16x4_t vcmla_lane_f16(float16x4_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vcmla_lane_f32(float32x2_t r, float32x2_t a, float32x2_t b, const int lane);
float16x4_t vcmla_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float16x4_t vcmla_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float32x2_t vcmla_laneq_f32(float32x2_t r, float32x2_t a, float32x4_t b, const int lane);
float16x8_t vcmlaq_f16(float16x8_t r, float16x8_t a, float16x8_t b);
float32x4_t vcmlaq_f32(float32x4_t r, float32x4_t a, float32x4_t b);
float64x2_t vcmlaq_f64(float64x2_t r, float64x2_t a, float64x2_t b);
float16x8_t vcmlaq_lane_f16(float16x8_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vcmlaq_lane_f32(float32x4_t r, float32x4_t a, float32x2_t b, const int lane);
float16x8_t vcmlaq_laneq_f16(float16x8_t r, float16x8_t a, float16x8_t b, const int lane);
float32x4_t vcmlaq_laneq_f32(float32x4_t r, float32x4_t a, float32x4_t b, const int lane);
float16x4_t vcmla_rot90_f16(float16x4_t r, float16x4_t a, float16x4_t b);
float32x2_t vcmla_rot90_f32(float32x2_t r, float32x2_t a, float32x2_t b);
float16x4_t vcmla_rot90_lane_f16(float16x4_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vcmla_rot90_lane_f32(float32x2_t r, float32x2_t a, float32x2_t b, const int lane);
float16x4_t vcmla_rot90_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float16x4_t vcmla_rot90_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float32x2_t vcmla_rot90_laneq_f32(float32x2_t r, float32x2_t a, float32x4_t b, const int lane);
float16x8_t vcmlaq_rot90_f16(float16x8_t r, float16x8_t a, float16x8_t b);
float32x4_t vcmlaq_rot90_f32(float32x4_t r, float32x4_t a, float32x4_t b);
float64x2_t vcmlaq_rot90_f64(float64x2_t r, float64x2_t a, float64x2_t b);
float16x8_t vcmlaq_rot90_lane_f16(float16x8_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vcmlaq_rot90_lane_f32(float32x4_t r, float32x4_t a, float32x2_t b, const int lane);
float16x8_t vcmlaq_rot90_laneq_f16(float16x8_t r, float16x8_t a, float16x8_t b, const int lane);
float32x4_t vcmlaq_rot90_laneq_f32(float32x4_t r, float32x4_t a, float32x4_t b, const int lane);
float16x4_t vcmla_rot180_f16(float16x4_t r, float16x4_t a, float16x4_t b);
float32x2_t vcmla_rot180_f32(float32x2_t r, float32x2_t a, float32x2_t b);
float16x4_t vcmla_rot180_lane_f16(float16x4_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vcmla_rot180_lane_f32(float32x2_t r, float32x2_t a, float32x2_t b, const int lane);
float16x4_t vcmla_rot180_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float16x4_t vcmla_rot180_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float32x2_t vcmla_rot180_laneq_f32(float32x2_t r, float32x2_t a, float32x4_t b, const int lane);
float16x8_t vcmlaq_rot180_f16(float16x8_t r, float16x8_t a, float16x8_t b);
float32x4_t vcmlaq_rot180_f32(float32x4_t r, float32x4_t a, float32x4_t b);
float64x2_t vcmlaq_rot180_f64(float64x2_t r, float64x2_t a, float64x2_t b);
float16x8_t vcmlaq_rot180_lane_f16(float16x8_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vcmlaq_rot180_lane_f32(float32x4_t r, float32x4_t a, float32x2_t b, const int lane);
float16x8_t vcmlaq_rot180_laneq_f16(float16x8_t r, float16x8_t a, float16x8_t b, const int lane);
float32x4_t vcmlaq_rot180_laneq_f32(float32x4_t r, float32x4_t a, float32x4_t b, const int lane);
float16x4_t vcmla_rot270_f16(float16x4_t r, float16x4_t a, float16x4_t b);
float32x2_t vcmla_rot270_f32(float32x2_t r, float32x2_t a, float32x2_t b);
float16x4_t vcmla_rot270_lane_f16(float16x4_t r, float16x4_t a, float16x4_t b, const int lane);
float32x2_t vcmla_rot270_lane_f32(float32x2_t r, float32x2_t a, float32x2_t b, const int lane);
float16x4_t vcmla_rot270_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float16x4_t vcmla_rot270_laneq_f16(float16x4_t r, float16x4_t a, float16x8_t b, const int lane);
float32x2_t vcmla_rot270_laneq_f32(float32x2_t r, float32x2_t a, float32x4_t b, const int lane);
float16x8_t vcmlaq_rot270_f16(float16x8_t r, float16x8_t a, float16x8_t b);
float32x4_t vcmlaq_rot270_f32(float32x4_t r, float32x4_t a, float32x4_t b);
float64x2_t vcmlaq_rot270_f64(float64x2_t r, float64x2_t a, float64x2_t b);
float16x8_t vcmlaq_rot270_lane_f16(float16x8_t r, float16x8_t a, float16x4_t b, const int lane);
float32x4_t vcmlaq_rot270_lane_f32(float32x4_t r, float32x4_t a, float32x2_t b, const int lane);
float16x8_t vcmlaq_rot270_laneq_f16(float16x8_t r, float16x8_t a, float16x8_t b, const int lane);
float32x4_t vcmlaq_rot270_laneq_f32(float32x4_t r, float32x4_t a, float32x4_t b, const int lane);
float32x2_t vrnd32z_f32(float32x2_t a);
float32x4_t vrnd32zq_f32(float32x4_t a);
float64x1_t vrnd32z_f64(float64x1_t a);
float64x2_t vrnd32zq_f64(float64x2_t a);
float32x2_t vrnd64z_f32(float32x2_t a);
float32x4_t vrnd64zq_f32(float32x4_t a);
float64x1_t vrnd64z_f64(float64x1_t a);
float64x2_t vrnd64zq_f64(float64x2_t a);
float32x2_t vrnd32x_f32(float32x2_t a);
float32x4_t vrnd32xq_f32(float32x4_t a);
float64x1_t vrnd32x_f64(float64x1_t a);
float64x2_t vrnd32xq_f64(float64x2_t a);
float32x2_t vrnd64x_f32(float32x2_t a);
float32x4_t vrnd64xq_f32(float32x4_t a);
float64x1_t vrnd64x_f64(float64x1_t a);
float64x2_t vrnd64xq_f64(float64x2_t a);
int32x4_t vmmlaq_s32(int32x4_t r, int8x16_t a, int8x16_t b);
uint32x4_t vmmlaq_u32(uint32x4_t r, uint8x16_t a, uint8x16_t b);
int32x4_t vusmmlaq_s32(int32x4_t r, uint8x16_t a, int8x16_t b);
int32x2_t vusdot_s32(int32x2_t r, uint8x8_t a, int8x8_t b);
int32x2_t vusdot_lane_s32(int32x2_t r, uint8x8_t a, int8x8_t b, const int lane);
int32x2_t vsudot_lane_s32(int32x2_t r, int8x8_t a, uint8x8_t b, const int lane);
int32x2_t vusdot_laneq_s32(int32x2_t r, uint8x8_t a, int8x16_t b, const int lane);
int32x2_t vsudot_laneq_s32(int32x2_t r, int8x8_t a, uint8x16_t b, const int lane);
int32x4_t vusdotq_s32(int32x4_t r, uint8x16_t a, int8x16_t b);
int32x4_t vusdotq_lane_s32(int32x4_t r, uint8x16_t a, int8x8_t b, const int lane);
int32x4_t vsudotq_lane_s32(int32x4_t r, int8x16_t a, uint8x8_t b, const int lane);
int32x4_t vusdotq_laneq_s32(int32x4_t r, uint8x16_t a, int8x16_t b, const int lane);
int32x4_t vsudotq_laneq_s32(int32x4_t r, int8x16_t a, uint8x16_t b, const int lane);
bfloat16x4_t vcreate_bf16(uint64_t a);
bfloat16x4_t vdup_n_bf16(bfloat16_t value);
bfloat16x8_t vdupq_n_bf16(bfloat16_t value);
bfloat16x4_t vdup_lane_bf16(bfloat16x4_t vec, const int lane);
bfloat16x8_t vdupq_lane_bf16(bfloat16x4_t vec, const int lane);
bfloat16x4_t vdup_laneq_bf16(bfloat16x8_t vec, const int lane);
bfloat16x8_t vdupq_laneq_bf16(bfloat16x8_t vec, const int lane);
bfloat16x8_t vcombine_bf16(bfloat16x4_t low, bfloat16x4_t high);
bfloat16x4_t vget_high_bf16(bfloat16x8_t a);
bfloat16x4_t vget_low_bf16(bfloat16x8_t a);
bfloat16_t vget_lane_bf16(bfloat16x4_t v, const int lane);
bfloat16_t vgetq_lane_bf16(bfloat16x8_t v, const int lane);
bfloat16x4_t vset_lane_bf16(bfloat16_t a, bfloat16x4_t v, const int lane);
bfloat16x8_t vsetq_lane_bf16(bfloat16_t a, bfloat16x8_t v, const int lane);
bfloat16_t vduph_lane_bf16(bfloat16x4_t vec, const int lane);
bfloat16_t vduph_laneq_bf16(bfloat16x8_t vec, const int lane);
bfloat16x4_t vld1_bf16(bfloat16_t const * ptr);
bfloat16x8_t vld1q_bf16(bfloat16_t const * ptr);
bfloat16x4_t vld1_lane_bf16(bfloat16_t const * ptr, bfloat16x4_t src, const int lane);
bfloat16x8_t vld1q_lane_bf16(bfloat16_t const * ptr, bfloat16x8_t src, const int lane);
bfloat16x4_t vld1_dup_bf16(bfloat16_t const * ptr);
bfloat16x8_t vld1q_dup_bf16(bfloat16_t const * ptr);
void vst1_bf16(bfloat16_t * ptr, bfloat16x4_t val);
void vst1q_bf16(bfloat16_t * ptr, bfloat16x8_t val);
void vst1_lane_bf16(bfloat16_t * ptr, bfloat16x4_t val, const int lane);
void vst1q_lane_bf16(bfloat16_t * ptr, bfloat16x8_t val, const int lane);
bfloat16x4x2_t vld2_bf16(bfloat16_t const * ptr);
bfloat16x8x2_t vld2q_bf16(bfloat16_t const * ptr);
bfloat16x4x3_t vld3_bf16(bfloat16_t const * ptr);
bfloat16x8x3_t vld3q_bf16(bfloat16_t const * ptr);
bfloat16x4x4_t vld4_bf16(bfloat16_t const * ptr);
bfloat16x8x4_t vld4q_bf16(bfloat16_t const * ptr);
bfloat16x4x2_t vld2_dup_bf16(bfloat16_t const * ptr);
bfloat16x8x2_t vld2q_dup_bf16(bfloat16_t const * ptr);
bfloat16x4x3_t vld3_dup_bf16(bfloat16_t const * ptr);
bfloat16x8x3_t vld3q_dup_bf16(bfloat16_t const * ptr);
bfloat16x4x4_t vld4_dup_bf16(bfloat16_t const * ptr);
bfloat16x8x4_t vld4q_dup_bf16(bfloat16_t const * ptr);
void vst2_bf16(bfloat16_t * ptr, bfloat16x4x2_t val);
void vst2q_bf16(bfloat16_t * ptr, bfloat16x8x2_t val);
void vst3_bf16(bfloat16_t * ptr, bfloat16x4x3_t val);
void vst3q_bf16(bfloat16_t * ptr, bfloat16x8x3_t val);
void vst4_bf16(bfloat16_t * ptr, bfloat16x4x4_t val);
void vst4q_bf16(bfloat16_t * ptr, bfloat16x8x4_t val);
bfloat16x4x2_t vld2_lane_bf16(bfloat16_t const * ptr, bfloat16x4x2_t src, const int lane);
bfloat16x8x2_t vld2q_lane_bf16(bfloat16_t const * ptr, bfloat16x8x2_t src, const int lane);
bfloat16x4x3_t vld3_lane_bf16(bfloat16_t const * ptr, bfloat16x4x3_t src, const int lane);
bfloat16x8x3_t vld3q_lane_bf16(bfloat16_t const * ptr, bfloat16x8x3_t src, const int lane);
bfloat16x4x4_t vld4_lane_bf16(bfloat16_t const * ptr, bfloat16x4x4_t src, const int lane);
bfloat16x8x4_t vld4q_lane_bf16(bfloat16_t const * ptr, bfloat16x8x4_t src, const int lane);
void vst2_lane_bf16(bfloat16_t * ptr, bfloat16x4x2_t val, const int lane);
void vst2q_lane_bf16(bfloat16_t * ptr, bfloat16x8x2_t val, const int lane);
void vst3_lane_bf16(bfloat16_t * ptr, bfloat16x4x3_t val, const int lane);
void vst3q_lane_bf16(bfloat16_t * ptr, bfloat16x8x3_t val, const int lane);
void vst4_lane_bf16(bfloat16_t * ptr, bfloat16x4x4_t val, const int lane);
void vst4q_lane_bf16(bfloat16_t * ptr, bfloat16x8x4_t val, const int lane);
void vst1_bf16_x2(bfloat16_t * ptr, bfloat16x4x2_t val);
void vst1q_bf16_x2(bfloat16_t * ptr, bfloat16x8x2_t val);
void vst1_bf16_x3(bfloat16_t * ptr, bfloat16x4x3_t val);
void vst1q_bf16_x3(bfloat16_t * ptr, bfloat16x8x3_t val);
void vst1_bf16_x4(bfloat16_t * ptr, bfloat16x4x4_t val);
void vst1q_bf16_x4(bfloat16_t * ptr, bfloat16x8x4_t val);
bfloat16x4x2_t vld1_bf16_x2(bfloat16_t const * ptr);
bfloat16x8x2_t vld1q_bf16_x2(bfloat16_t const * ptr);
bfloat16x4x3_t vld1_bf16_x3(bfloat16_t const * ptr);
bfloat16x8x3_t vld1q_bf16_x3(bfloat16_t const * ptr);
bfloat16x4x4_t vld1_bf16_x4(bfloat16_t const * ptr);
bfloat16x8x4_t vld1q_bf16_x4(bfloat16_t const * ptr);
bfloat16x4_t vreinterpret_bf16_s8(int8x8_t a);
bfloat16x4_t vreinterpret_bf16_s16(int16x4_t a);
bfloat16x4_t vreinterpret_bf16_s32(int32x2_t a);
bfloat16x4_t vreinterpret_bf16_f32(float32x2_t a);
bfloat16x4_t vreinterpret_bf16_u8(uint8x8_t a);
bfloat16x4_t vreinterpret_bf16_u16(uint16x4_t a);
bfloat16x4_t vreinterpret_bf16_u32(uint32x2_t a);
bfloat16x4_t vreinterpret_bf16_p8(poly8x8_t a);
bfloat16x4_t vreinterpret_bf16_p16(poly16x4_t a);
bfloat16x4_t vreinterpret_bf16_u64(uint64x1_t a);
bfloat16x4_t vreinterpret_bf16_s64(int64x1_t a);
bfloat16x8_t vreinterpretq_bf16_s8(int8x16_t a);
bfloat16x8_t vreinterpretq_bf16_s16(int16x8_t a);
bfloat16x8_t vreinterpretq_bf16_s32(int32x4_t a);
bfloat16x8_t vreinterpretq_bf16_f32(float32x4_t a);
bfloat16x8_t vreinterpretq_bf16_u8(uint8x16_t a);
bfloat16x8_t vreinterpretq_bf16_u16(uint16x8_t a);
bfloat16x8_t vreinterpretq_bf16_u32(uint32x4_t a);
bfloat16x8_t vreinterpretq_bf16_p8(poly8x16_t a);
bfloat16x8_t vreinterpretq_bf16_p16(poly16x8_t a);
bfloat16x8_t vreinterpretq_bf16_u64(uint64x2_t a);
bfloat16x8_t vreinterpretq_bf16_s64(int64x2_t a);
bfloat16x4_t vreinterpret_bf16_f64(float64x1_t a);
bfloat16x8_t vreinterpretq_bf16_f64(float64x2_t a);
bfloat16x4_t vreinterpret_bf16_p64(poly64x1_t a);
bfloat16x8_t vreinterpretq_bf16_p64(poly64x2_t a);
bfloat16x8_t vreinterpretq_bf16_p128(poly128_t a);
int8x8_t vreinterpret_s8_bf16(bfloat16x4_t a);
int16x4_t vreinterpret_s16_bf16(bfloat16x4_t a);
int32x2_t vreinterpret_s32_bf16(bfloat16x4_t a);
float32x2_t vreinterpret_f32_bf16(bfloat16x4_t a);
uint8x8_t vreinterpret_u8_bf16(bfloat16x4_t a);
uint16x4_t vreinterpret_u16_bf16(bfloat16x4_t a);
uint32x2_t vreinterpret_u32_bf16(bfloat16x4_t a);
poly8x8_t vreinterpret_p8_bf16(bfloat16x4_t a);
poly16x4_t vreinterpret_p16_bf16(bfloat16x4_t a);
uint64x1_t vreinterpret_u64_bf16(bfloat16x4_t a);
int64x1_t vreinterpret_s64_bf16(bfloat16x4_t a);
float64x1_t vreinterpret_f64_bf16(bfloat16x4_t a);
poly64x1_t vreinterpret_p64_bf16(bfloat16x4_t a);
int8x16_t vreinterpretq_s8_bf16(bfloat16x8_t a);
int16x8_t vreinterpretq_s16_bf16(bfloat16x8_t a);
int32x4_t vreinterpretq_s32_bf16(bfloat16x8_t a);
float32x4_t vreinterpretq_f32_bf16(bfloat16x8_t a);
uint8x16_t vreinterpretq_u8_bf16(bfloat16x8_t a);
uint16x8_t vreinterpretq_u16_bf16(bfloat16x8_t a);
uint32x4_t vreinterpretq_u32_bf16(bfloat16x8_t a);
poly8x16_t vreinterpretq_p8_bf16(bfloat16x8_t a);
poly16x8_t vreinterpretq_p16_bf16(bfloat16x8_t a);
uint64x2_t vreinterpretq_u64_bf16(bfloat16x8_t a);
int64x2_t vreinterpretq_s64_bf16(bfloat16x8_t a);
float64x2_t vreinterpretq_f64_bf16(bfloat16x8_t a);
poly64x2_t vreinterpretq_p64_bf16(bfloat16x8_t a);
poly128_t vreinterpretq_p128_bf16(bfloat16x8_t a);
float32x4_t vcvt_f32_bf16(bfloat16x4_t a);
float32x4_t vcvtq_low_f32_bf16(bfloat16x8_t a);
float32x4_t vcvtq_high_f32_bf16(bfloat16x8_t a);
bfloat16x4_t vcvt_bf16_f32(float32x4_t a);
bfloat16x8_t vcvtq_low_bf16_f32(float32x4_t a);
bfloat16x8_t vcvtq_high_bf16_f32(bfloat16x8_t inactive, float32x4_t a);
bfloat16_t vcvth_bf16_f32(float32_t a);
float32_t vcvtah_f32_bf16(bfloat16_t a);
bfloat16x4_t vcopy_lane_bf16(bfloat16x4_t a, const int lane1, bfloat16x4_t b, const int lane2);
bfloat16x8_t vcopyq_lane_bf16(bfloat16x8_t a, const int lane1, bfloat16x4_t b, const int lane2);
bfloat16x4_t vcopy_laneq_bf16(bfloat16x4_t a, const int lane1, bfloat16x8_t b, const int lane2);
bfloat16x8_t vcopyq_laneq_bf16(bfloat16x8_t a, const int lane1, bfloat16x8_t b, const int lane2);
float32x2_t vbfdot_f32(float32x2_t r, bfloat16x4_t a, bfloat16x4_t b);
float32x4_t vbfdotq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b);
float32x2_t vbfdot_lane_f32(float32x2_t r, bfloat16x4_t a, bfloat16x4_t b, const int lane);
float32x4_t vbfdotq_laneq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b, const int lane);
float32x2_t vbfdot_laneq_f32(float32x2_t r, bfloat16x4_t a, bfloat16x8_t b, const int lane);
float32x4_t vbfdotq_lane_f32(float32x4_t r, bfloat16x8_t a, bfloat16x4_t b, const int lane);
float32x4_t vbfmmlaq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b);
float32x4_t vbfmlalbq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b);
float32x4_t vbfmlaltq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b);
float32x4_t vbfmlalbq_lane_f32(float32x4_t r, bfloat16x8_t a, bfloat16x4_t b, const int lane);
float32x4_t vbfmlalbq_laneq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b, const int lane);
float32x4_t vbfmlaltq_lane_f32(float32x4_t r, bfloat16x8_t a, bfloat16x4_t b, const int lane);
float32x4_t vbfmlaltq_laneq_f32(float32x4_t r, bfloat16x8_t a, bfloat16x8_t b, const int lane);
