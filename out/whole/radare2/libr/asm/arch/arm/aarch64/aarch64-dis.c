# 0 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
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
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
# 21 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
# 1 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h" 1
# 36 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 115 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define _ANSIDECL_H 1
# 136 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
# 147 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ANSI_PROTOTYPES 1
#define PTR void *
#define PTRCONST void *const
#define LONG_DOUBLE long double




#define PARAMS(ARGS) ARGS


#define VPARAMS(ARGS) ARGS
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)





#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
#define VA_CLOSE(AP) } va_end(AP); }
#define VA_FIXEDARG(AP,T,N) struct Qdmy

#undef const
#undef volatile
#undef signed



#undef inline
# 188 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define CONST const
#define VOLATILE volatile
#define SIGNED signed

#define PROTO(type,name,arglist) type name arglist
#define EXFUN(name,proto) name proto
#define DEFUN(name,arglist,args) name(args)
#define DEFUN_VOID(name) name(void)
#define AND ,
#define DOTS , ...
#define NOARGS void
# 253 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
# 262 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED






#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))





#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED





#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))





#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
# 296 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
# 307 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)







#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)



#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)






#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))



#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)





#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
# 358 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
# 367 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 3 4
#define ATTRIBUTE_PACKED __attribute__ ((packed))





#define ATTRIBUTE_COLD __attribute__ ((__cold__))






#define ATTRIBUTE_HOT __attribute__ ((__hot__))
# 37 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h" 2
# 56 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h"
extern char *stpcpy (char *__dest, const char *__src);


#define opcodes_error_handler _bfd_error_handler
# 70 "project/radare2/libr/asm/arch/arm/aarch64/sysdep.h"
#define OPCODES_SIGJMP_BUF jmp_buf
#define OPCODES_SIGSETJMP(buf) setjmp(buf)
#define OPCODES_SIGLONGJMP(buf,val) longjmp((buf), (val))
# 22 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 1 3 4
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
#define DIS_ASM_H 





# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 1 3 4
# 11 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1

#define __need___va_list 
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
#undef __need___va_list




#define __GNUC_VA_LIST 

# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 2 3 4
# 76 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
#define _STDIO_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 3 4
#define __STDIO_H_ 

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
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
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
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
#define __TYPES_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types.h" 3 4
#define _SYS__TYPES_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/_types.h" 3 4
#define _BSD_MACHINE__TYPES_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_types.h" 3 4
#define _BSD_I386__TYPES_H_ 







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
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 3 4
#define _VA_LIST_T 
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
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_va_list.h" 2 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_size_t.h" 3 4
#define _SIZE_T 

typedef __darwin_size_t size_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_null.h" 3 4
#define NULL __DARWIN_NULL
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_stdio.h" 2 3 4

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

# 363 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
#define _SSIZE_T 

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

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_common.h" 3 4
#define _SECURE__COMMON_H_ 

#undef _USE_FORTIFY_LEVEL


#define _USE_FORTIFY_LEVEL 2







#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/secure/_stdio.h" 2 3 4
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
# 35 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
#define _STRING_H_ 
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
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
#define _RSIZE_T 

typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_errno_t.h" 3 4
#define _ERRNO_T 
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 2 3 4


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
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 1 3 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define __BFD_H_SEEN__ 





# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/ansidecl.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/symcat.h" 1 3 4
# 20 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/symcat.h" 3 4
#define SYM_CAT_H 


#define CONCAT2(a,b) a ##b
#define CONCAT3(a,b,c) a ##b ##c
#define CONCAT4(a,b,c,d) a ##b ##c ##d
#define STRINGX(s) #s
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/symcat.h" 3 4
#define XCONCAT2(a,b) CONCAT2(a,b)
#define XCONCAT3(a,b,c) CONCAT3(a,b,c)
#define XCONCAT4(a,b,c,d) CONCAT4(a,b,c,d)






#define XSTRING(s) STRINGX(s)
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 2 3 4







#undef CONCAT4
#define CONCAT4(a,b,c,d) XCONCAT2(CONCAT2(a,b),CONCAT2(c,d))






#define BFD_ARCH_SIZE 64


#define BFD_DEFAULT_TARGET_SIZE 32

#define BFD_HOST_64BIT_LONG 0
#define BFD_HOST_LONG_LONG 1

#define BFD_HOST_64_BIT long long
#define BFD_HOST_U_64_BIT unsigned long long
typedef long long bfd_int64_t;
typedef unsigned long long bfd_uint64_t;



#define BFD64 




#define INLINE __inline__






typedef struct bfd bfd;
# 91 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef int bfd_boolean;

#undef FALSE
#undef TRUE
#define FALSE 0
#define TRUE 1







typedef unsigned long long bfd_vma;
typedef long long bfd_signed_vma;
typedef unsigned long long bfd_size_type;
typedef unsigned long long symvalue;






#define _bfd_int64_low(x) ((unsigned long) (((x) & 0xffffffff)))
#define _bfd_int64_high(x) ((unsigned long) (((x) >> 32) & 0xffffffff))
#define fprintf_vma(s,x) fprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))

#define sprintf_vma(s,x) sprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
# 145 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define HALF_BFD_SIZE_TYPE (((bfd_size_type) 1) << (8 * sizeof (bfd_size_type) / 2))
# 159 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
typedef long long file_ptr;
typedef unsigned long long ufile_ptr;

extern void bfd_sprintf_vma (bfd *, char *, bfd_vma);
extern void bfd_fprintf_vma (bfd *, void *, bfd_vma);

#define printf_vma(x) fprintf_vma(stdout,x)
#define bfd_printf_vma(abfd,x) bfd_fprintf_vma (abfd,stdout,x)

typedef unsigned int flagword;
typedef unsigned char bfd_byte;



typedef enum bfd_format
{
  bfd_unknown = 0,
  bfd_object,
  bfd_archive,
  bfd_core,
  bfd_type_end
}
bfd_format;
# 191 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define BFD_NO_FLAGS 0x00


#define HAS_RELOC 0x01


#define EXEC_P 0x02



#define HAS_LINENO 0x04


#define HAS_DEBUG 0x08


#define HAS_SYMS 0x10



#define HAS_LOCALS 0x20


#define DYNAMIC 0x40




#define WP_TEXT 0x80



#define D_PAGED 0x100




#define BFD_IS_RELAXABLE 0x200





#define BFD_TRADITIONAL_FORMAT 0x400



#define BFD_IN_MEMORY 0x800


#define HAS_LOAD_PAGE 0x1000



#define BFD_LINKER_CREATED 0x2000




typedef unsigned long symindex;


typedef const struct reloc_howto_struct reloc_howto_type;

#define BFD_NO_MORE_SYMBOLS ((symindex) ~0)




#define bfd_get_section(x) ((x)->section)
#define bfd_get_output_section(x) ((x)->section->output_section)
#define bfd_set_section(x,y) ((x)->section) = (y)
#define bfd_asymbol_base(x) ((x)->section->vma)
#define bfd_asymbol_value(x) (bfd_asymbol_base(x) + (x)->value)
#define bfd_asymbol_name(x) ((x)->name)

#define bfd_asymbol_bfd(x) ((x)->the_bfd)
#define bfd_asymbol_flavour(x) (bfd_asymbol_bfd(x)->xvec->flavour)



typedef struct carsym
{
  char *name;
  file_ptr file_offset;
}
carsym;



struct orl
{
  char **name;
  union
  {
    file_ptr pos;
    bfd *abfd;
  } u;
  int namidx;
};


typedef struct lineno_cache_entry
{
  unsigned int line_number;
  union
  {
    struct bfd_symbol *sym;
    bfd_vma offset;
  } u;
}
alent;



#define align_power(addr,align) (((addr) + ((bfd_vma) 1 << (align)) - 1) & ((bfd_vma) -1 << (align)))


typedef struct bfd_section *sec_ptr;

#define bfd_get_section_name(bfd,ptr) ((ptr)->name + 0)
#define bfd_get_section_vma(bfd,ptr) ((ptr)->vma + 0)
#define bfd_get_section_lma(bfd,ptr) ((ptr)->lma + 0)
#define bfd_get_section_alignment(bfd,ptr) ((ptr)->alignment_power + 0)
#define bfd_section_name(bfd,ptr) ((ptr)->name)
#define bfd_section_size(bfd,ptr) ((ptr)->size)
#define bfd_get_section_size(ptr) ((ptr)->size)
#define bfd_section_vma(bfd,ptr) ((ptr)->vma)
#define bfd_section_lma(bfd,ptr) ((ptr)->lma)
#define bfd_section_alignment(bfd,ptr) ((ptr)->alignment_power)
#define bfd_get_section_flags(bfd,ptr) ((ptr)->flags + 0)
#define bfd_get_section_userdata(bfd,ptr) ((ptr)->userdata)

#define bfd_is_com_section(ptr) (((ptr)->flags & SEC_IS_COMMON) != 0)

#define bfd_set_section_vma(bfd,ptr,val) (((ptr)->vma = (ptr)->lma = (val)), ((ptr)->user_set_vma = TRUE), TRUE)
#define bfd_set_section_alignment(bfd,ptr,val) (((ptr)->alignment_power = (val)),TRUE)
#define bfd_set_section_userdata(bfd,ptr,val) (((ptr)->userdata = (val)),TRUE)

#define bfd_get_section_limit(bfd,sec) (((sec)->rawsize ? (sec)->rawsize : (sec)->size) / bfd_octets_per_byte (bfd))



typedef struct stat stat_type;

typedef enum bfd_print_symbol
{
  bfd_print_symbol_name,
  bfd_print_symbol_more,
  bfd_print_symbol_all
} bfd_print_symbol_type;



typedef struct _symbol_info
{
  symvalue value;
  char type;
  const char *name;
  unsigned char stab_type;
  char stab_other;
  short stab_desc;
  const char *stab_name;
} symbol_info;



extern const char *bfd_get_stab_name (int);






struct bfd_hash_entry
{

  struct bfd_hash_entry *next;

  const char *string;


  unsigned long hash;
};



struct bfd_hash_table
{

  struct bfd_hash_entry **table;

  unsigned int size;

  unsigned int entsize;







  struct bfd_hash_entry *(*newfunc)
    (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);


  void *memory;
};


extern bfd_boolean bfd_hash_table_init
  (struct bfd_hash_table *,
   struct bfd_hash_entry *(*) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int);


extern bfd_boolean bfd_hash_table_init_n
  (struct bfd_hash_table *,
   struct bfd_hash_entry *(*) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int, unsigned int);


extern void bfd_hash_table_free
  (struct bfd_hash_table *);





extern struct bfd_hash_entry *bfd_hash_lookup
  (struct bfd_hash_table *, const char *, bfd_boolean create,
   bfd_boolean copy);


extern void bfd_hash_replace
  (struct bfd_hash_table *, struct bfd_hash_entry *old,
   struct bfd_hash_entry *nw);


extern struct bfd_hash_entry *bfd_hash_newfunc
  (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);


extern void *bfd_hash_allocate
  (struct bfd_hash_table *, unsigned int);




extern void bfd_hash_traverse
  (struct bfd_hash_table *,
   bfd_boolean (*) (struct bfd_hash_entry *, void *),
   void *info);




extern void bfd_hash_set_default_size (bfd_size_type);




struct stab_info
{

  struct bfd_strtab_hash *strings;

  struct bfd_hash_table includes;

  struct bfd_section *stabstr;
};

#define COFF_SWAP_TABLE (void *) &bfd_coff_std_swap_table






extern bfd_size_type bfd_bread (void *, bfd_size_type, bfd *);
extern bfd_size_type bfd_bwrite (const void *, bfd_size_type, bfd *);
extern int bfd_seek (bfd *, file_ptr, int);
extern file_ptr bfd_tell (bfd *);
extern int bfd_flush (bfd *);
extern int bfd_stat (bfd *, struct stat *);



#define bfd_read(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_read", NULL, NULL, __FUNCTION__), bfd_bread ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))


#define bfd_write(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_write", NULL, NULL, __FUNCTION__), bfd_bwrite ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
# 506 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern void warn_deprecated (const char *, const char *, int, const char *);



#define bfd_get_filename(abfd) ((char *) (abfd)->filename)
#define bfd_get_cacheable(abfd) ((abfd)->cacheable)
#define bfd_get_format(abfd) ((abfd)->format)
#define bfd_get_target(abfd) ((abfd)->xvec->name)
#define bfd_get_flavour(abfd) ((abfd)->xvec->flavour)
#define bfd_family_coff(abfd) (bfd_get_flavour (abfd) == bfd_target_coff_flavour || bfd_get_flavour (abfd) == bfd_target_xcoff_flavour)


#define bfd_big_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_BIG)
#define bfd_little_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_LITTLE)
#define bfd_header_big_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_BIG)

#define bfd_header_little_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_LITTLE)

#define bfd_get_file_flags(abfd) ((abfd)->flags)
#define bfd_applicable_file_flags(abfd) ((abfd)->xvec->object_flags)
#define bfd_applicable_section_flags(abfd) ((abfd)->xvec->section_flags)
#define bfd_my_archive(abfd) ((abfd)->my_archive)
#define bfd_has_map(abfd) ((abfd)->has_armap)

#define bfd_valid_reloc_types(abfd) ((abfd)->xvec->valid_reloc_types)
#define bfd_usrdata(abfd) ((abfd)->usrdata)

#define bfd_get_start_address(abfd) ((abfd)->start_address)
#define bfd_get_symcount(abfd) ((abfd)->symcount)
#define bfd_get_outsymbols(abfd) ((abfd)->outsymbols)
#define bfd_count_sections(abfd) ((abfd)->section_count)

#define bfd_get_dynamic_symcount(abfd) ((abfd)->dynsymcount)

#define bfd_get_symbol_leading_char(abfd) ((abfd)->xvec->symbol_leading_char)

#define bfd_set_cacheable(abfd,bool) (((abfd)->cacheable = bool), TRUE)

extern bfd_boolean bfd_cache_close
  (bfd *abfd);


extern bfd_boolean bfd_cache_close_all (void);

extern bfd_boolean bfd_record_phdr
  (bfd *, unsigned long, bfd_boolean, flagword, bfd_boolean, bfd_vma,
   bfd_boolean, bfd_boolean, unsigned int, struct bfd_section **);



bfd_uint64_t bfd_getb64 (const void *);
bfd_uint64_t bfd_getl64 (const void *);
bfd_int64_t bfd_getb_signed_64 (const void *);
bfd_int64_t bfd_getl_signed_64 (const void *);
bfd_signed_vma bfd_getb_signed_32 (const void *);
bfd_signed_vma bfd_getl_signed_32 (const void *);






bfd_signed_vma bfd_getb_signed_16 (const void *);
bfd_signed_vma bfd_getl_signed_16 (const void *);
void bfd_putb64 (bfd_uint64_t, void *);
void bfd_putl64 (bfd_uint64_t, void *);
void bfd_putb32 (bfd_vma, void *);
void bfd_putl32 (bfd_vma, void *);
void bfd_putb16 (bfd_vma, void *);
void bfd_putl16 (bfd_vma, void *);




static inline bfd_uint64_t
bfd_get_bits (const void *p, int bits, bfd_boolean big_p)
{
  const bfd_byte *addr = (const bfd_byte *) p;
  bfd_uint64_t data;
  int i;
  int bytes;

  if (bits % 8 != 0)
    return 0;

  data = 0;
  bytes = bits / 8;
  for (i = 0; i < bytes; i++)
    {
      int addr_index = big_p ? i : bytes - i - 1;

      data = (data << 8) | addr[addr_index];
    }

  return data;
}
void bfd_put_bits (bfd_uint64_t, void *, int, bfd_boolean);

extern bfd_boolean bfd_section_already_linked_table_init (void);
extern void bfd_section_already_linked_table_free (void);




struct ecoff_debug_info;
struct ecoff_debug_swap;
struct ecoff_extr;
struct bfd_symbol;
struct bfd_link_info;
struct bfd_link_hash_entry;
struct bfd_elf_version_tree;

extern bfd_vma bfd_ecoff_get_gp_value
  (bfd * abfd);
extern bfd_boolean bfd_ecoff_set_gp_value
  (bfd *abfd, bfd_vma gp_value);
extern bfd_boolean bfd_ecoff_set_regmasks
  (bfd *abfd, unsigned long gprmask, unsigned long fprmask,
   unsigned long *cprmask);
extern void *bfd_ecoff_debug_init
  (bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, struct bfd_link_info *);
extern void bfd_ecoff_debug_free
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_accumulate
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, bfd *input_bfd,
   struct ecoff_debug_info *input_debug,
   const struct ecoff_debug_swap *input_swap, struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_accumulate_other
  (void *handle, bfd *output_bfd, struct ecoff_debug_info *output_debug,
   const struct ecoff_debug_swap *output_swap, bfd *input_bfd,
   struct bfd_link_info *);
extern bfd_boolean bfd_ecoff_debug_externals
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, bfd_boolean relocatable,
   bfd_boolean (*get_extr) (struct bfd_symbol *, struct ecoff_extr *),
   void (*set_index) (struct bfd_symbol *, bfd_size_type));
extern bfd_boolean bfd_ecoff_debug_one_external
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, const char *name,
   struct ecoff_extr *esym);
extern bfd_size_type bfd_ecoff_debug_size
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap);
extern bfd_boolean bfd_ecoff_write_debug
  (bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap, file_ptr where);
extern bfd_boolean bfd_ecoff_write_accumulated_debug
  (void *handle, bfd *abfd, struct ecoff_debug_info *debug,
   const struct ecoff_debug_swap *swap,
   struct bfd_link_info *info, file_ptr where);



struct bfd_link_needed_list
{
  struct bfd_link_needed_list *next;
  bfd *by;
  const char *name;
};

enum dynamic_lib_link_class {
  DYN_NORMAL = 0,
  DYN_AS_NEEDED = 1,
  DYN_DT_NEEDED = 2,
  DYN_NO_ADD_NEEDED = 4,
  DYN_NO_NEEDED = 8
};

extern bfd_boolean bfd_elf_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *, bfd_boolean,
   bfd_boolean);
extern struct bfd_link_needed_list *bfd_elf_get_needed_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_elf_get_bfd_needed_list
  (bfd *, struct bfd_link_needed_list **);
extern bfd_boolean bfd_elf_size_dynamic_sections
  (bfd *, const char *, const char *, const char *, const char * const *,
   struct bfd_link_info *, struct bfd_section **,
   struct bfd_elf_version_tree *);
extern bfd_boolean bfd_elf_size_dynsym_hash_dynstr
  (bfd *, struct bfd_link_info *);
extern void bfd_elf_set_dt_needed_name
  (bfd *, const char *);
extern const char *bfd_elf_get_dt_soname
  (bfd *);
extern void bfd_elf_set_dyn_lib_class
  (bfd *, int);
extern int bfd_elf_get_dyn_lib_class
  (bfd *);
extern struct bfd_link_needed_list *bfd_elf_get_runpath_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_elf_discard_info
  (bfd *, struct bfd_link_info *);
extern unsigned int _bfd_elf_default_action_discarded
  (struct bfd_section *);




extern long bfd_get_elf_phdr_upper_bound
  (bfd *abfd);
# 718 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern int bfd_get_elf_phdrs
  (bfd *abfd, void *phdrs);
# 733 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
extern bfd *bfd_elf_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma vma, bfd_byte *myaddr, int len));


extern int bfd_get_arch_size
  (bfd *);


extern int bfd_get_sign_extend_vma
  (bfd *);

extern struct bfd_section *_bfd_elf_tls_setup
  (bfd *, struct bfd_link_info *);

extern void _bfd_fix_excluded_sec_syms
  (bfd *, struct bfd_link_info *);

extern unsigned bfd_m68k_mach_to_features (int);

extern int bfd_m68k_features_to_mach (unsigned);

extern bfd_boolean bfd_m68k_elf32_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *,
   char **);

extern bfd_boolean bfd_bfin_elf32_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *,
   char **);



extern struct bfd_link_needed_list *bfd_sunos_get_needed_list
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_sunos_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_sunos_size_dynamic_sections
  (bfd *, struct bfd_link_info *, struct bfd_section **,
   struct bfd_section **, struct bfd_section **);



extern bfd_boolean bfd_i386linux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_m68klinux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean bfd_sparclinux_size_dynamic_sections
  (bfd *, struct bfd_link_info *);



struct _bfd_window_internal;
typedef struct _bfd_window_internal bfd_window_internal;

typedef struct _bfd_window
{

  void *data;
  bfd_size_type size;






  struct _bfd_window_internal *i;
}
bfd_window;

extern void bfd_init_window
  (bfd_window *);
extern void bfd_free_window
  (bfd_window *);
extern bfd_boolean bfd_get_file_window
  (bfd *, file_ptr, bfd_size_type, bfd_window *, bfd_boolean);



extern bfd_boolean bfd_xcoff_link_record_set
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_size_type);
extern bfd_boolean bfd_xcoff_import_symbol
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *, bfd_vma,
   const char *, const char *, const char *, unsigned int);
extern bfd_boolean bfd_xcoff_export_symbol
  (bfd *, struct bfd_link_info *, struct bfd_link_hash_entry *);
extern bfd_boolean bfd_xcoff_link_count_reloc
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_xcoff_record_link_assignment
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_xcoff_size_dynamic_sections
  (bfd *, struct bfd_link_info *, const char *, const char *,
   unsigned long, unsigned long, unsigned long, bfd_boolean,
   int, bfd_boolean, bfd_boolean, struct bfd_section **, bfd_boolean);
extern bfd_boolean bfd_xcoff_link_generate_rtinit
  (bfd *, const char *, const char *, bfd_boolean);


extern bfd_boolean bfd_xcoff_ar_archive_set_magic
  (bfd *, char *);




struct internal_syment;
union internal_auxent;


extern bfd_boolean bfd_coff_get_syment
  (bfd *, struct bfd_symbol *, struct internal_syment *);

extern bfd_boolean bfd_coff_get_auxent
  (bfd *, struct bfd_symbol *, int, union internal_auxent *);

extern bfd_boolean bfd_coff_set_symbol_class
  (bfd *, struct bfd_symbol *, unsigned int);

extern bfd_boolean bfd_m68k_coff_create_embedded_relocs
  (bfd *, struct bfd_link_info *, struct bfd_section *, struct bfd_section *, char **);


extern bfd_boolean bfd_arm_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_arm_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

extern bfd_boolean bfd_arm_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_arm_pe_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_arm_pe_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

extern bfd_boolean bfd_arm_pe_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_elf32_arm_allocate_interworking_sections
  (struct bfd_link_info *);

extern bfd_boolean bfd_elf32_arm_process_before_allocation
  (bfd *, struct bfd_link_info *, int);

void bfd_elf32_arm_set_target_relocs
  (struct bfd_link_info *, int, char *, int, int);

extern bfd_boolean bfd_elf32_arm_get_bfd_for_interworking
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf32_arm_add_glue_sections_to_bfd
  (bfd *, struct bfd_link_info *);


extern bfd_boolean bfd_is_arm_mapping_symbol_name
  (const char * name);


extern bfd_boolean bfd_arm_merge_machines
  (bfd *, bfd *);

extern bfd_boolean bfd_arm_update_notes
  (bfd *, const char *);

extern unsigned int bfd_arm_get_mach_from_notes
  (bfd *, const char *);


extern void bfd_ticoff_set_section_load_page
  (struct bfd_section *, int);

extern int bfd_ticoff_get_section_load_page
  (struct bfd_section *);


extern bfd_vma bfd_h8300_pad_address
  (bfd *, bfd_vma);


extern void bfd_elf32_ia64_after_parse
  (int);

extern void bfd_elf64_ia64_after_parse
  (int);






struct coff_comdat_info
{

  const char *name;





  long symbol;
};

extern struct coff_comdat_info *bfd_coff_get_comdat_section
  (bfd *, struct bfd_section *);


void bfd_init (void);


bfd *bfd_fopen (const char *filename, const char *target,
    const char *mode, int fd);

bfd *bfd_openr (const char *filename, const char *target);

bfd *bfd_fdopenr (const char *filename, const char *target, int fd);

bfd *bfd_openstreamr (const char *, const char *, void *);

bfd *bfd_openr_iovec (const char *filename, const char *target,
    void *(*open) (struct bfd *nbfd,
    void *open_closure),
    void *open_closure,
    file_ptr (*pread) (struct bfd *nbfd,
    void *stream,
    void *buf,
    file_ptr nbytes,
    file_ptr offset),
    int (*close) (struct bfd *nbfd,
    void *stream));

bfd *bfd_openw (const char *filename, const char *target);

bfd_boolean bfd_close (bfd *abfd);

bfd_boolean bfd_close_all_done (bfd *);

bfd *bfd_create (const char *filename, bfd *templ);

bfd_boolean bfd_make_writable (bfd *abfd);

bfd_boolean bfd_make_readable (bfd *abfd);

unsigned long bfd_calc_gnu_debuglink_crc32
   (unsigned long crc, const unsigned char *buf, bfd_size_type len);

char *bfd_follow_gnu_debuglink (bfd *abfd, const char *dir);

struct bfd_section *bfd_create_gnu_debuglink_section
   (bfd *abfd, const char *filename);

bfd_boolean bfd_fill_in_gnu_debuglink_section
   (bfd *abfd, struct bfd_section *sect, const char *filename);





#define bfd_put_8(abfd,val,ptr) ((void) (*((unsigned char *) (ptr)) = (val) & 0xff))

#define bfd_put_signed_8 bfd_put_8

#define bfd_get_8(abfd,ptr) (*(unsigned char *) (ptr) & 0xff)

#define bfd_get_signed_8(abfd,ptr) (((*(unsigned char *) (ptr) & 0xff) ^ 0x80) - 0x80)


#define bfd_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_putx16, ((val),(ptr)))

#define bfd_put_signed_16 bfd_put_16

#define bfd_get_16(abfd,ptr) BFD_SEND (abfd, bfd_getx16, (ptr))

#define bfd_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_16, (ptr))


#define bfd_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_putx32, ((val),(ptr)))

#define bfd_put_signed_32 bfd_put_32

#define bfd_get_32(abfd,ptr) BFD_SEND (abfd, bfd_getx32, (ptr))

#define bfd_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_32, (ptr))


#define bfd_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_putx64, ((val), (ptr)))

#define bfd_put_signed_64 bfd_put_64

#define bfd_get_64(abfd,ptr) BFD_SEND (abfd, bfd_getx64, (ptr))

#define bfd_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_64, (ptr))


#define bfd_get(bits,abfd,ptr) ((bits) == 8 ? (bfd_vma) bfd_get_8 (abfd, ptr) : (bits) == 16 ? bfd_get_16 (abfd, ptr) : (bits) == 32 ? bfd_get_32 (abfd, ptr) : (bits) == 64 ? bfd_get_64 (abfd, ptr) : (abort (), (bfd_vma) - 1))






#define bfd_put(bits,abfd,val,ptr) ((bits) == 8 ? bfd_put_8 (abfd, val, ptr) : (bits) == 16 ? bfd_put_16 (abfd, val, ptr) : (bits) == 32 ? bfd_put_32 (abfd, val, ptr) : (bits) == 64 ? bfd_put_64 (abfd, val, ptr) : (abort (), (void) 0))
# 1045 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_h_put_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)

#define bfd_h_put_signed_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)

#define bfd_h_get_8(abfd,ptr) bfd_get_8 (abfd, ptr)

#define bfd_h_get_signed_8(abfd,ptr) bfd_get_signed_8 (abfd, ptr)


#define bfd_h_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx16, (val, ptr))

#define bfd_h_put_signed_16 bfd_h_put_16

#define bfd_h_get_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx16, (ptr))

#define bfd_h_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_16, (ptr))


#define bfd_h_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx32, (val, ptr))

#define bfd_h_put_signed_32 bfd_h_put_32

#define bfd_h_get_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx32, (ptr))

#define bfd_h_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_32, (ptr))


#define bfd_h_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx64, (val, ptr))

#define bfd_h_put_signed_64 bfd_h_put_64

#define bfd_h_get_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx64, (ptr))

#define bfd_h_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_64, (ptr))




#define H_PUT_64 bfd_h_put_64
#define H_PUT_32 bfd_h_put_32
#define H_PUT_16 bfd_h_put_16
#define H_PUT_8 bfd_h_put_8
#define H_PUT_S64 bfd_h_put_signed_64
#define H_PUT_S32 bfd_h_put_signed_32
#define H_PUT_S16 bfd_h_put_signed_16
#define H_PUT_S8 bfd_h_put_signed_8
#define H_GET_64 bfd_h_get_64
#define H_GET_32 bfd_h_get_32
#define H_GET_16 bfd_h_get_16
#define H_GET_8 bfd_h_get_8
#define H_GET_S64 bfd_h_get_signed_64
#define H_GET_S32 bfd_h_get_signed_32
#define H_GET_S16 bfd_h_get_signed_16
#define H_GET_S8 bfd_h_get_signed_8



long bfd_get_mtime (bfd *abfd);

long bfd_get_size (bfd *abfd);



typedef struct bfd_section
{


  const char *name;


  int id;


  int index;


  struct bfd_section *next;


  struct bfd_section *prev;




  flagword flags;

#define SEC_NO_FLAGS 0x000



#define SEC_ALLOC 0x001



#define SEC_LOAD 0x002



#define SEC_RELOC 0x004


#define SEC_READONLY 0x008


#define SEC_CODE 0x010


#define SEC_DATA 0x020


#define SEC_ROM 0x040
# 1167 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define SEC_CONSTRUCTOR 0x080




#define SEC_HAS_CONTENTS 0x100



#define SEC_NEVER_LOAD 0x200


#define SEC_THREAD_LOCAL 0x400







#define SEC_HAS_GOT_REF 0x800






#define SEC_IS_COMMON 0x1000





#define SEC_DEBUGGING 0x2000




#define SEC_IN_MEMORY 0x4000




#define SEC_EXCLUDE 0x8000





#define SEC_SORT_ENTRIES 0x10000





#define SEC_LINK_ONCE 0x20000



#define SEC_LINK_DUPLICATES 0x40000



#define SEC_LINK_DUPLICATES_DISCARD 0x0




#define SEC_LINK_DUPLICATES_ONE_ONLY 0x80000



#define SEC_LINK_DUPLICATES_SAME_SIZE 0x100000




#define SEC_LINK_DUPLICATES_SAME_CONTENTS (SEC_LINK_DUPLICATES_ONE_ONLY | SEC_LINK_DUPLICATES_SAME_SIZE)






#define SEC_LINKER_CREATED 0x200000


#define SEC_KEEP 0x400000



#define SEC_SMALL_DATA 0x800000



#define SEC_MERGE 0x1000000




#define SEC_STRINGS 0x2000000


#define SEC_GROUP 0x4000000
# 1281 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define SEC_COFF_SHARED_LIBRARY 0x10000000



#define SEC_COFF_SHARED 0x20000000






#define SEC_TIC54X_BLOCK 0x40000000




#define SEC_TIC54X_CLINK 0x80000000






  unsigned int user_set_vma : 1;


  unsigned int linker_mark : 1;



  unsigned int linker_has_input : 1;


  unsigned int gc_mark : 1;
  unsigned int gc_mark_from_eh : 1;




  unsigned int segment_mark : 1;


  unsigned int sec_info_type:3;
#define ELF_INFO_TYPE_NONE 0
#define ELF_INFO_TYPE_STABS 1
#define ELF_INFO_TYPE_MERGE 2
#define ELF_INFO_TYPE_EH_FRAME 3
#define ELF_INFO_TYPE_JUST_SYMS 4


  unsigned int use_rela_p:1;





  unsigned int has_tls_reloc:1;


  unsigned int has_gp_reloc:1;


  unsigned int need_finalize_relax:1;


  unsigned int reloc_done : 1;
# 1356 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma vma;




  bfd_vma lma;




  bfd_size_type size;
# 1376 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_size_type rawsize;
# 1385 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma output_offset;


  struct bfd_section *output_section;



  unsigned int alignment_power;



  struct reloc_cache_entry *relocation;



  struct reloc_cache_entry **orelocation;


  unsigned reloc_count;





  file_ptr filepos;


  file_ptr rel_filepos;


  file_ptr line_filepos;


  void *userdata;



  unsigned char *contents;


  alent *lineno;


  unsigned int lineno_count;


  unsigned int entsize;



  struct bfd_section *kept_section;



  file_ptr moving_line_filepos;


  int target_index;

  void *used_by_bfd;



  struct relent_chain *constructor_chain;


  bfd *owner;


  struct bfd_symbol *symbol;
  struct bfd_symbol **symbol_ptr_ptr;





  union {
    struct bfd_link_order *link_order;
    struct bfd_section *s;
  } map_head, map_tail;
} asection;






#define BFD_ABS_SECTION_NAME "*ABS*"
#define BFD_UND_SECTION_NAME "*UND*"
#define BFD_COM_SECTION_NAME "*COM*"
#define BFD_IND_SECTION_NAME "*IND*"


extern asection bfd_abs_section;
#define bfd_abs_section_ptr ((asection *) &bfd_abs_section)
#define bfd_is_abs_section(sec) ((sec) == bfd_abs_section_ptr)

extern asection bfd_und_section;
#define bfd_und_section_ptr ((asection *) &bfd_und_section)
#define bfd_is_und_section(sec) ((sec) == bfd_und_section_ptr)

extern asection bfd_com_section;
#define bfd_com_section_ptr ((asection *) &bfd_com_section)

extern asection bfd_ind_section;
#define bfd_ind_section_ptr ((asection *) &bfd_ind_section)
#define bfd_is_ind_section(sec) ((sec) == bfd_ind_section_ptr)

#define bfd_is_const_section(SEC) ( ((SEC) == bfd_abs_section_ptr) || ((SEC) == bfd_und_section_ptr) || ((SEC) == bfd_com_section_ptr) || ((SEC) == bfd_ind_section_ptr))





extern const struct bfd_symbol * const bfd_abs_symbol;
extern const struct bfd_symbol * const bfd_com_symbol;
extern const struct bfd_symbol * const bfd_und_symbol;
extern const struct bfd_symbol * const bfd_ind_symbol;




#define bfd_section_list_remove(ABFD,S) do { asection *_s = S; asection *_next = _s->next; asection *_prev = _s->prev; if (_prev) _prev->next = _next; else (ABFD)->sections = _next; if (_next) _next->prev = _prev; else (ABFD)->section_last = _prev; } while (0)
# 1523 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_section_list_append(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->next = NULL; if (_abfd->section_last) { _s->prev = _abfd->section_last; _abfd->section_last->next = _s; } else { _s->prev = NULL; _abfd->sections = _s; } _abfd->section_last = _s; } while (0)
# 1542 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_section_list_prepend(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->prev = NULL; if (_abfd->sections) { _s->next = _abfd->sections; _abfd->sections->prev = _s; } else { _s->next = NULL; _abfd->section_last = _s; } _abfd->sections = _s; } while (0)
# 1561 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_section_list_insert_after(ABFD,A,S) do { asection *_a = A; asection *_s = S; asection *_next = _a->next; _s->next = _next; _s->prev = _a; _a->next = _s; if (_next) _next->prev = _s; else (ABFD)->section_last = _s; } while (0)
# 1576 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_section_list_insert_before(ABFD,B,S) do { asection *_b = B; asection *_s = S; asection *_prev = _b->prev; _s->prev = _prev; _s->next = _b; _b->prev = _s; if (_prev) _prev->next = _s; else (ABFD)->sections = _s; } while (0)
# 1591 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_section_removed_from_list(ABFD,S) ((S)->next ? (S)->next->prev != (S) : (ABFD)->section_last != (S))


#define BFD_FAKE_SECTION(SEC,FLAGS,SYM,SYM_PTR,NAME,IDX) { NAME, IDX, 0, NULL, NULL, FLAGS, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (struct bfd_section *) &SEC, 0, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, 0, NULL, NULL, NULL, (struct bfd_symbol *) SYM, (struct bfd_symbol **) SYM_PTR, { NULL }, { NULL } }
# 1635 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
void bfd_section_list_clear (bfd *);

asection *bfd_get_section_by_name (bfd *abfd, const char *name);

asection *bfd_get_section_by_name_if
   (bfd *abfd,
    const char *name,
    bfd_boolean (*func) (bfd *abfd, asection *sect, void *obj),
    void *obj);

char *bfd_get_unique_section_name
   (bfd *abfd, const char *templat, int *count);

asection *bfd_make_section_old_way (bfd *abfd, const char *name);

asection *bfd_make_section_anyway_with_flags
   (bfd *abfd, const char *name, flagword flags);

asection *bfd_make_section_anyway (bfd *abfd, const char *name);

asection *bfd_make_section_with_flags
   (bfd *, const char *name, flagword flags);

asection *bfd_make_section (bfd *, const char *name);

bfd_boolean bfd_set_section_flags
   (bfd *abfd, asection *sec, flagword flags);

void bfd_map_over_sections
   (bfd *abfd,
    void (*func) (bfd *abfd, asection *sect, void *obj),
    void *obj);

asection *bfd_sections_find_if
   (bfd *abfd,
    bfd_boolean (*operation) (bfd *abfd, asection *sect, void *obj),
    void *obj);

bfd_boolean bfd_set_section_size
   (bfd *abfd, asection *sec, bfd_size_type val);

bfd_boolean bfd_set_section_contents
   (bfd *abfd, asection *section, const void *data,
    file_ptr offset, bfd_size_type count);

bfd_boolean bfd_get_section_contents
   (bfd *abfd, asection *section, void *location, file_ptr offset,
    bfd_size_type count);

bfd_boolean bfd_malloc_and_get_section
   (bfd *abfd, asection *section, bfd_byte **buf);

bfd_boolean bfd_copy_private_section_data
   (bfd *ibfd, asection *isec, bfd *obfd, asection *osec);

#define bfd_copy_private_section_data(ibfd,isection,obfd,osection) BFD_SEND (obfd, _bfd_copy_private_section_data, (ibfd, isection, obfd, osection))


bfd_boolean bfd_generic_is_group_section (bfd *, const asection *sec);

bfd_boolean bfd_generic_discard_group (bfd *abfd, asection *group);


enum bfd_architecture
{
  bfd_arch_unknown,
  bfd_arch_obscure,
  bfd_arch_m68k,
#define bfd_mach_m68000 1
#define bfd_mach_m68008 2
#define bfd_mach_m68010 3
#define bfd_mach_m68020 4
#define bfd_mach_m68030 5
#define bfd_mach_m68040 6
#define bfd_mach_m68060 7
#define bfd_mach_cpu32 8
#define bfd_mach_mcf_isa_a_nodiv 9
#define bfd_mach_mcf_isa_a 10
#define bfd_mach_mcf_isa_a_mac 11
#define bfd_mach_mcf_isa_a_emac 12
#define bfd_mach_mcf_isa_aplus 13
#define bfd_mach_mcf_isa_aplus_mac 14
#define bfd_mach_mcf_isa_aplus_emac 15
#define bfd_mach_mcf_isa_b_nousp 16
#define bfd_mach_mcf_isa_b_nousp_mac 17
#define bfd_mach_mcf_isa_b_nousp_emac 18
#define bfd_mach_mcf_isa_b 19
#define bfd_mach_mcf_isa_b_mac 20
#define bfd_mach_mcf_isa_b_emac 21
#define bfd_mach_mcf_isa_b_float 22
#define bfd_mach_mcf_isa_b_float_mac 23
#define bfd_mach_mcf_isa_b_float_emac 24
  bfd_arch_vax,
  bfd_arch_i960,
# 1737 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define bfd_mach_i960_core 1
#define bfd_mach_i960_ka_sa 2
#define bfd_mach_i960_kb_sb 3
#define bfd_mach_i960_mc 4
#define bfd_mach_i960_xa 5
#define bfd_mach_i960_ca 6
#define bfd_mach_i960_jx 7
#define bfd_mach_i960_hx 8

  bfd_arch_or32,

  bfd_arch_sparc,
#define bfd_mach_sparc 1

#define bfd_mach_sparc_sparclet 2
#define bfd_mach_sparc_sparclite 3
#define bfd_mach_sparc_v8plus 4
#define bfd_mach_sparc_v8plusa 5
#define bfd_mach_sparc_sparclite_le 6
#define bfd_mach_sparc_v9 7
#define bfd_mach_sparc_v9a 8
#define bfd_mach_sparc_v8plusb 9
#define bfd_mach_sparc_v9b 10

#define bfd_mach_sparc_v9_p(mach) ((mach) >= bfd_mach_sparc_v8plus && (mach) <= bfd_mach_sparc_v9b && (mach) != bfd_mach_sparc_sparclite_le)



#define bfd_mach_sparc_64bit_p(mach) ((mach) >= bfd_mach_sparc_v9 && (mach) != bfd_mach_sparc_v8plusb)

  bfd_arch_mips,
#define bfd_mach_mips3000 3000
#define bfd_mach_mips3900 3900
#define bfd_mach_mips4000 4000
#define bfd_mach_mips4010 4010
#define bfd_mach_mips4100 4100
#define bfd_mach_mips4111 4111
#define bfd_mach_mips4120 4120
#define bfd_mach_mips4300 4300
#define bfd_mach_mips4400 4400
#define bfd_mach_mips4600 4600
#define bfd_mach_mips4650 4650
#define bfd_mach_mips5000 5000
#define bfd_mach_mips5400 5400
#define bfd_mach_mips5500 5500
#define bfd_mach_mips5900 5900
#define bfd_mach_mips6000 6000
#define bfd_mach_mips7000 7000
#define bfd_mach_mips8000 8000
#define bfd_mach_mips9000 9000
#define bfd_mach_mips10000 10000
#define bfd_mach_mips12000 12000
#define bfd_mach_mips14000 14000
#define bfd_mach_mips16000 16000
#define bfd_mach_mips16 16
#define bfd_mach_mips5 5
#define bfd_mach_mips_loongson_2e 3001
#define bfd_mach_mips_loongson_2f 3002
#define bfd_mach_mips_gs464 3003
#define bfd_mach_mips_gs464e 3004
#define bfd_mach_mips_gs264e 3005
#define bfd_mach_mips_sb1 12310201
#define bfd_mach_mips_octeon 6501
#define bfd_mach_mips_octeonp 6601
#define bfd_mach_mips_octeon2 6502
#define bfd_mach_mips_octeon3 6503
#define bfd_mach_mips_xlr 887682
#define bfd_mach_mips_interaptiv_mr2 736550
#define bfd_mach_mipsisa32 32
#define bfd_mach_mipsisa32r2 33
#define bfd_mach_mipsisa32r3 34
#define bfd_mach_mipsisa32r5 36
#define bfd_mach_mipsisa32r6 37
#define bfd_mach_mipsisa64 64
#define bfd_mach_mipsisa64r2 65
#define bfd_mach_mipsisa64r3 66
#define bfd_mach_mipsisa64r5 68
#define bfd_mach_mipsisa64r6 69
#define bfd_mach_mips_micromips 96
  bfd_arch_i386,
#define bfd_mach_i386_i386 1
#define bfd_mach_i386_i8086 2
#define bfd_mach_i386_i386_intel_syntax 3
#define bfd_mach_x86_64 64
#define bfd_mach_x86_64_intel_syntax 65
  bfd_arch_we32k,
  bfd_arch_tahoe,
  bfd_arch_i860,
  bfd_arch_i370,
  bfd_arch_romp,
  bfd_arch_convex,
  bfd_arch_m88k,
  bfd_arch_m98k,
  bfd_arch_pyramid,
  bfd_arch_h8300,
#define bfd_mach_h8300 1
#define bfd_mach_h8300h 2
#define bfd_mach_h8300s 3
#define bfd_mach_h8300hn 4
#define bfd_mach_h8300sn 5
#define bfd_mach_h8300sx 6
#define bfd_mach_h8300sxn 7
  bfd_arch_pdp11,
  bfd_arch_powerpc,
#define bfd_mach_ppc 32
#define bfd_mach_ppc64 64
#define bfd_mach_ppc_403 403
#define bfd_mach_ppc_403gc 4030
#define bfd_mach_ppc_505 505
#define bfd_mach_ppc_601 601
#define bfd_mach_ppc_602 602
#define bfd_mach_ppc_603 603
#define bfd_mach_ppc_ec603e 6031
#define bfd_mach_ppc_604 604
#define bfd_mach_ppc_620 620
#define bfd_mach_ppc_630 630
#define bfd_mach_ppc_750 750
#define bfd_mach_ppc_860 860
#define bfd_mach_ppc_a35 35
#define bfd_mach_ppc_rs64ii 642
#define bfd_mach_ppc_rs64iii 643
#define bfd_mach_ppc_7400 7400
#define bfd_mach_ppc_e500 500
#define bfd_mach_ppc_e500mc 5001
  bfd_arch_rs6000,
#define bfd_mach_rs6k 6000
#define bfd_mach_rs6k_rs1 6001
#define bfd_mach_rs6k_rsc 6003
#define bfd_mach_rs6k_rs2 6002
  bfd_arch_hppa,
#define bfd_mach_hppa10 10
#define bfd_mach_hppa11 11
#define bfd_mach_hppa20 20
#define bfd_mach_hppa20w 25
  bfd_arch_d10v,
#define bfd_mach_d10v 1
#define bfd_mach_d10v_ts2 2
#define bfd_mach_d10v_ts3 3
  bfd_arch_d30v,
  bfd_arch_dlx,
  bfd_arch_m68hc11,
  bfd_arch_m68hc12,
#define bfd_mach_m6812_default 0
#define bfd_mach_m6812 1
#define bfd_mach_m6812s 2
  bfd_arch_z8k,
#define bfd_mach_z8001 1
#define bfd_mach_z8002 2
  bfd_arch_h8500,
  bfd_arch_sh,
#define bfd_mach_sh 1
#define bfd_mach_sh2 0x20
#define bfd_mach_sh_dsp 0x2d
#define bfd_mach_sh2a 0x2a
#define bfd_mach_sh2a_nofpu 0x2b
#define bfd_mach_sh2a_nofpu_or_sh4_nommu_nofpu 0x2a1
#define bfd_mach_sh2a_nofpu_or_sh3_nommu 0x2a2
#define bfd_mach_sh2a_or_sh4 0x2a3
#define bfd_mach_sh2a_or_sh3e 0x2a4
#define bfd_mach_sh2e 0x2e
#define bfd_mach_sh3 0x30
#define bfd_mach_sh3_nommu 0x31
#define bfd_mach_sh3_dsp 0x3d
#define bfd_mach_sh3e 0x3e
#define bfd_mach_sh4 0x40
#define bfd_mach_sh4_nofpu 0x41
#define bfd_mach_sh4_nommu_nofpu 0x42
#define bfd_mach_sh4a 0x4a
#define bfd_mach_sh4a_nofpu 0x4b
#define bfd_mach_sh4al_dsp 0x4d
#define bfd_mach_sh5 0x50
  bfd_arch_alpha,
#define bfd_mach_alpha_ev4 0x10
#define bfd_mach_alpha_ev5 0x20
#define bfd_mach_alpha_ev6 0x30
  bfd_arch_arm,
#define bfd_mach_arm_unknown 0
#define bfd_mach_arm_2 1
#define bfd_mach_arm_2a 2
#define bfd_mach_arm_3 3
#define bfd_mach_arm_3M 4
#define bfd_mach_arm_4 5
#define bfd_mach_arm_4T 6
#define bfd_mach_arm_5 7
#define bfd_mach_arm_5T 8
#define bfd_mach_arm_5TE 9
#define bfd_mach_arm_XScale 10
#define bfd_mach_arm_ep9312 11
#define bfd_mach_arm_iWMMXt 12
#define bfd_mach_arm_iWMMXt2 13
  bfd_arch_ns32k,
  bfd_arch_w65,
  bfd_arch_tic30,
  bfd_arch_tic4x,
#define bfd_mach_tic3x 30
#define bfd_mach_tic4x 40
  bfd_arch_tic54x,
  bfd_arch_tic80,
  bfd_arch_v850,
#define bfd_mach_v850 1
#define bfd_mach_v850e 'E'
#define bfd_mach_v850e1 '1'
  bfd_arch_arc,
#define bfd_mach_arc_5 5
#define bfd_mach_arc_6 6
#define bfd_mach_arc_7 7
#define bfd_mach_arc_8 8
 bfd_arch_m32c,
#define bfd_mach_m16c 0x75
#define bfd_mach_m32c 0x78
  bfd_arch_m32r,
#define bfd_mach_m32r 1
#define bfd_mach_m32rx 'x'
#define bfd_mach_m32r2 '2'
  bfd_arch_mn10200,
  bfd_arch_mn10300,
#define bfd_mach_mn10300 300
#define bfd_mach_am33 330
#define bfd_mach_am33_2 332
  bfd_arch_fr30,
#define bfd_mach_fr30 0x46523330
  bfd_arch_frv,
#define bfd_mach_frv 1
#define bfd_mach_frvsimple 2
#define bfd_mach_fr300 300
#define bfd_mach_fr400 400
#define bfd_mach_fr450 450
#define bfd_mach_frvtomcat 499
#define bfd_mach_fr500 500
#define bfd_mach_fr550 550
  bfd_arch_mcore,
  bfd_arch_ia64,
#define bfd_mach_ia64_elf64 64
#define bfd_mach_ia64_elf32 32
  bfd_arch_ip2k,
#define bfd_mach_ip2022 1
#define bfd_mach_ip2022ext 2
 bfd_arch_iq2000,
#define bfd_mach_iq2000 1
#define bfd_mach_iq10 2
  bfd_arch_mt,
#define bfd_mach_ms1 1
#define bfd_mach_mrisc2 2
#define bfd_mach_ms2 3
  bfd_arch_pj,
  bfd_arch_avr,
#define bfd_mach_avr1 1
#define bfd_mach_avr2 2
#define bfd_mach_avr3 3
#define bfd_mach_avr4 4
#define bfd_mach_avr5 5
#define bfd_mach_avr6 6
  bfd_arch_bfin,
#define bfd_mach_bfin 1
  bfd_arch_cr16c,
#define bfd_mach_cr16c 1
  bfd_arch_crx,
#define bfd_mach_crx 1
  bfd_arch_cris,
#define bfd_mach_cris_v0_v10 255
#define bfd_mach_cris_v32 32
#define bfd_mach_cris_v10_v32 1032
  bfd_arch_s390,
#define bfd_mach_s390_31 31
#define bfd_mach_s390_64 64
  bfd_arch_openrisc,
  bfd_arch_mmix,
  bfd_arch_xstormy16,
#define bfd_mach_xstormy16 1
  bfd_arch_msp430,
#define bfd_mach_msp11 11
#define bfd_mach_msp110 110
#define bfd_mach_msp12 12
#define bfd_mach_msp13 13
#define bfd_mach_msp14 14
#define bfd_mach_msp15 15
#define bfd_mach_msp16 16
#define bfd_mach_msp21 21
#define bfd_mach_msp31 31
#define bfd_mach_msp32 32
#define bfd_mach_msp33 33
#define bfd_mach_msp41 41
#define bfd_mach_msp42 42
#define bfd_mach_msp43 43
#define bfd_mach_msp44 44
  bfd_arch_xc16x,
#define bfd_mach_xc16x 1
#define bfd_mach_xc16xl 2
#define bfd_mach_xc16xs 3
  bfd_arch_xtensa,
#define bfd_mach_xtensa 1
  bfd_arch_tricore,
#define bfd_mach_tricore 4
   bfd_arch_maxq,
#define bfd_mach_maxq10 10
#define bfd_mach_maxq20 20
  bfd_arch_z80,
#define bfd_mach_z80strict 1
#define bfd_mach_z80 3
#define bfd_mach_z80full 7
#define bfd_mach_r800 11
  bfd_arch_last
  };

typedef struct bfd_arch_info
{
  int bits_per_word;
  int bits_per_address;
  int bits_per_byte;
  enum bfd_architecture arch;
  unsigned long mach;
  const char *arch_name;
  const char *printable_name;
  unsigned int section_align_power;



  bfd_boolean the_default;
  const struct bfd_arch_info * (*compatible)
    (const struct bfd_arch_info *a, const struct bfd_arch_info *b);

  bfd_boolean (*scan) (const struct bfd_arch_info *, const char *);

  const struct bfd_arch_info *next;
}
bfd_arch_info_type;

const char *bfd_printable_name (bfd *abfd);

const bfd_arch_info_type *bfd_scan_arch (const char *string);

const char **bfd_arch_list (void);

const bfd_arch_info_type *bfd_arch_get_compatible
   (const bfd *abfd, const bfd *bbfd, bfd_boolean accept_unknowns);

void bfd_set_arch_info (bfd *abfd, const bfd_arch_info_type *arg);

enum bfd_architecture bfd_get_arch (bfd *abfd);

unsigned long bfd_get_mach (bfd *abfd);

unsigned int bfd_arch_bits_per_byte (bfd *abfd);

unsigned int bfd_arch_bits_per_address (bfd *abfd);

const bfd_arch_info_type *bfd_get_arch_info (bfd *abfd);

const bfd_arch_info_type *bfd_lookup_arch
   (enum bfd_architecture arch, unsigned long machine);

const char *bfd_printable_arch_mach
   (enum bfd_architecture arch, unsigned long machine);

unsigned int bfd_octets_per_byte (bfd *abfd);

unsigned int bfd_arch_mach_octets_per_byte
   (enum bfd_architecture arch, unsigned long machine);


typedef enum bfd_reloc_status
{

  bfd_reloc_ok,


  bfd_reloc_overflow,


  bfd_reloc_outofrange,


  bfd_reloc_continue,


  bfd_reloc_notsupported,


  bfd_reloc_other,


  bfd_reloc_undefined,





  bfd_reloc_dangerous
 }
 bfd_reloc_status_type;


typedef struct reloc_cache_entry
{

  struct bfd_symbol **sym_ptr_ptr;


  bfd_size_type address;


  bfd_vma addend;


  reloc_howto_type *howto;

}
arelent;

enum complain_overflow
{

  complain_overflow_dont,




  complain_overflow_bitfield,



  complain_overflow_signed,



  complain_overflow_unsigned
};

struct reloc_howto_struct
{






  unsigned int type;



  unsigned int rightshift;




  int size;



  unsigned int bitsize;





  bfd_boolean pc_relative;



  unsigned int bitpos;



  enum complain_overflow complain_on_overflow;





  bfd_reloc_status_type (*special_function)
    (bfd *, arelent *, struct bfd_symbol *, void *, asection *,
     bfd *, char **);


  char *name;
# 2228 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean partial_inplace;
# 2238 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_vma src_mask;



  bfd_vma dst_mask;







  bfd_boolean pcrel_offset;
};

#define HOWTO(C,R,S,B,P,BI,O,SF,NAME,INPLACE,MASKSRC,MASKDST,PC) { (unsigned) C, R, S, B, P, BI, O, SF, NAME, INPLACE, MASKSRC, MASKDST, PC }

#define NEWHOWTO(FUNCTION,NAME,SIZE,REL,IN) HOWTO (0, 0, SIZE, 0, REL, 0, complain_overflow_dont, FUNCTION, NAME, FALSE, 0, 0, IN)



#define EMPTY_HOWTO(C) HOWTO ((C), 0, 0, 0, FALSE, 0, complain_overflow_dont, NULL, NULL, FALSE, 0, 0, FALSE)



#define HOWTO_PREPARE(relocation,symbol) { if (symbol != NULL) { if (bfd_is_com_section (symbol->section)) { relocation = 0; } else { relocation = symbol->value; } } }
# 2278 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
unsigned int bfd_get_reloc_size (reloc_howto_type *);

typedef struct relent_chain
{
  arelent relent;
  struct relent_chain *next;
}
arelent_chain;

bfd_reloc_status_type bfd_check_overflow
   (enum complain_overflow how,
    unsigned int bitsize,
    unsigned int rightshift,
    unsigned int addrsize,
    bfd_vma relocation);

bfd_reloc_status_type bfd_perform_relocation
   (bfd *abfd,
    arelent *reloc_entry,
    void *data,
    asection *input_section,
    bfd *output_bfd,
    char **error_message);

bfd_reloc_status_type bfd_install_relocation
   (bfd *abfd,
    arelent *reloc_entry,
    void *data, bfd_vma data_start,
    asection *input_section,
    char **error_message);

enum bfd_reloc_code_real {
  _dummy_first_bfd_reloc_code_real,



  BFD_RELOC_64,
  BFD_RELOC_32,
  BFD_RELOC_26,
  BFD_RELOC_24,
  BFD_RELOC_16,
  BFD_RELOC_14,
  BFD_RELOC_8,






  BFD_RELOC_64_PCREL,
  BFD_RELOC_32_PCREL,
  BFD_RELOC_24_PCREL,
  BFD_RELOC_16_PCREL,
  BFD_RELOC_12_PCREL,
  BFD_RELOC_8_PCREL,


  BFD_RELOC_32_SECREL,


  BFD_RELOC_32_GOT_PCREL,
  BFD_RELOC_16_GOT_PCREL,
  BFD_RELOC_8_GOT_PCREL,
  BFD_RELOC_32_GOTOFF,
  BFD_RELOC_16_GOTOFF,
  BFD_RELOC_LO16_GOTOFF,
  BFD_RELOC_HI16_GOTOFF,
  BFD_RELOC_HI16_S_GOTOFF,
  BFD_RELOC_8_GOTOFF,
  BFD_RELOC_64_PLT_PCREL,
  BFD_RELOC_32_PLT_PCREL,
  BFD_RELOC_24_PLT_PCREL,
  BFD_RELOC_16_PLT_PCREL,
  BFD_RELOC_8_PLT_PCREL,
  BFD_RELOC_64_PLTOFF,
  BFD_RELOC_32_PLTOFF,
  BFD_RELOC_16_PLTOFF,
  BFD_RELOC_LO16_PLTOFF,
  BFD_RELOC_HI16_PLTOFF,
  BFD_RELOC_HI16_S_PLTOFF,
  BFD_RELOC_8_PLTOFF,


  BFD_RELOC_68K_GLOB_DAT,
  BFD_RELOC_68K_JMP_SLOT,
  BFD_RELOC_68K_RELATIVE,


  BFD_RELOC_32_BASEREL,
  BFD_RELOC_16_BASEREL,
  BFD_RELOC_LO16_BASEREL,
  BFD_RELOC_HI16_BASEREL,
  BFD_RELOC_HI16_S_BASEREL,
  BFD_RELOC_8_BASEREL,
  BFD_RELOC_RVA,


  BFD_RELOC_8_FFnn,







  BFD_RELOC_32_PCREL_S2,
  BFD_RELOC_16_PCREL_S2,
  BFD_RELOC_23_PCREL_S2,



  BFD_RELOC_HI22,
  BFD_RELOC_LO10,





  BFD_RELOC_GPREL16,
  BFD_RELOC_GPREL32,


  BFD_RELOC_I960_CALLJ,



  BFD_RELOC_NONE,
  BFD_RELOC_SPARC_WDISP22,
  BFD_RELOC_SPARC22,
  BFD_RELOC_SPARC13,
  BFD_RELOC_SPARC_GOT10,
  BFD_RELOC_SPARC_GOT13,
  BFD_RELOC_SPARC_GOT22,
  BFD_RELOC_SPARC_PC10,
  BFD_RELOC_SPARC_PC22,
  BFD_RELOC_SPARC_WPLT30,
  BFD_RELOC_SPARC_COPY,
  BFD_RELOC_SPARC_GLOB_DAT,
  BFD_RELOC_SPARC_JMP_SLOT,
  BFD_RELOC_SPARC_RELATIVE,
  BFD_RELOC_SPARC_UA16,
  BFD_RELOC_SPARC_UA32,
  BFD_RELOC_SPARC_UA64,


  BFD_RELOC_SPARC_BASE13,
  BFD_RELOC_SPARC_BASE22,


#define BFD_RELOC_SPARC_64 BFD_RELOC_64
  BFD_RELOC_SPARC_10,
  BFD_RELOC_SPARC_11,
  BFD_RELOC_SPARC_OLO10,
  BFD_RELOC_SPARC_HH22,
  BFD_RELOC_SPARC_HM10,
  BFD_RELOC_SPARC_LM22,
  BFD_RELOC_SPARC_PC_HH22,
  BFD_RELOC_SPARC_PC_HM10,
  BFD_RELOC_SPARC_PC_LM22,
  BFD_RELOC_SPARC_WDISP16,
  BFD_RELOC_SPARC_WDISP19,
  BFD_RELOC_SPARC_7,
  BFD_RELOC_SPARC_6,
  BFD_RELOC_SPARC_5,
#define BFD_RELOC_SPARC_DISP64 BFD_RELOC_64_PCREL
  BFD_RELOC_SPARC_PLT32,
  BFD_RELOC_SPARC_PLT64,
  BFD_RELOC_SPARC_HIX22,
  BFD_RELOC_SPARC_LOX10,
  BFD_RELOC_SPARC_H44,
  BFD_RELOC_SPARC_M44,
  BFD_RELOC_SPARC_L44,
  BFD_RELOC_SPARC_REGISTER,


  BFD_RELOC_SPARC_REV32,


  BFD_RELOC_SPARC_TLS_GD_HI22,
  BFD_RELOC_SPARC_TLS_GD_LO10,
  BFD_RELOC_SPARC_TLS_GD_ADD,
  BFD_RELOC_SPARC_TLS_GD_CALL,
  BFD_RELOC_SPARC_TLS_LDM_HI22,
  BFD_RELOC_SPARC_TLS_LDM_LO10,
  BFD_RELOC_SPARC_TLS_LDM_ADD,
  BFD_RELOC_SPARC_TLS_LDM_CALL,
  BFD_RELOC_SPARC_TLS_LDO_HIX22,
  BFD_RELOC_SPARC_TLS_LDO_LOX10,
  BFD_RELOC_SPARC_TLS_LDO_ADD,
  BFD_RELOC_SPARC_TLS_IE_HI22,
  BFD_RELOC_SPARC_TLS_IE_LO10,
  BFD_RELOC_SPARC_TLS_IE_LD,
  BFD_RELOC_SPARC_TLS_IE_LDX,
  BFD_RELOC_SPARC_TLS_IE_ADD,
  BFD_RELOC_SPARC_TLS_LE_HIX22,
  BFD_RELOC_SPARC_TLS_LE_LOX10,
  BFD_RELOC_SPARC_TLS_DTPMOD32,
  BFD_RELOC_SPARC_TLS_DTPMOD64,
  BFD_RELOC_SPARC_TLS_DTPOFF32,
  BFD_RELOC_SPARC_TLS_DTPOFF64,
  BFD_RELOC_SPARC_TLS_TPOFF32,
  BFD_RELOC_SPARC_TLS_TPOFF64,







  BFD_RELOC_ALPHA_GPDISP_HI16,





  BFD_RELOC_ALPHA_GPDISP_LO16,




  BFD_RELOC_ALPHA_GPDISP,
# 2523 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  BFD_RELOC_ALPHA_LITERAL,
  BFD_RELOC_ALPHA_ELF_LITERAL,
  BFD_RELOC_ALPHA_LITUSE,




  BFD_RELOC_ALPHA_HINT,



  BFD_RELOC_ALPHA_LINKAGE,



  BFD_RELOC_ALPHA_CODEADDR,



  BFD_RELOC_ALPHA_GPREL_HI16,
  BFD_RELOC_ALPHA_GPREL_LO16,




  BFD_RELOC_ALPHA_BRSGP,


  BFD_RELOC_ALPHA_TLSGD,
  BFD_RELOC_ALPHA_TLSLDM,
  BFD_RELOC_ALPHA_DTPMOD64,
  BFD_RELOC_ALPHA_GOTDTPREL16,
  BFD_RELOC_ALPHA_DTPREL64,
  BFD_RELOC_ALPHA_DTPREL_HI16,
  BFD_RELOC_ALPHA_DTPREL_LO16,
  BFD_RELOC_ALPHA_DTPREL16,
  BFD_RELOC_ALPHA_GOTTPREL16,
  BFD_RELOC_ALPHA_TPREL64,
  BFD_RELOC_ALPHA_TPREL_HI16,
  BFD_RELOC_ALPHA_TPREL_LO16,
  BFD_RELOC_ALPHA_TPREL16,



  BFD_RELOC_MIPS_JMP,


  BFD_RELOC_MIPS16_JMP,


  BFD_RELOC_MIPS16_GPREL,


  BFD_RELOC_HI16,





  BFD_RELOC_HI16_S,


  BFD_RELOC_LO16,


  BFD_RELOC_HI16_PCREL,


  BFD_RELOC_HI16_S_PCREL,


  BFD_RELOC_LO16_PCREL,


  BFD_RELOC_MIPS16_HI16,





  BFD_RELOC_MIPS16_HI16_S,


  BFD_RELOC_MIPS16_LO16,


  BFD_RELOC_MIPS_LITERAL,


  BFD_RELOC_MIPS_GOT16,
  BFD_RELOC_MIPS_CALL16,
  BFD_RELOC_MIPS_GOT_HI16,
  BFD_RELOC_MIPS_GOT_LO16,
  BFD_RELOC_MIPS_CALL_HI16,
  BFD_RELOC_MIPS_CALL_LO16,
  BFD_RELOC_MIPS_SUB,
  BFD_RELOC_MIPS_GOT_PAGE,
  BFD_RELOC_MIPS_GOT_OFST,
  BFD_RELOC_MIPS_GOT_DISP,
  BFD_RELOC_MIPS_SHIFT5,
  BFD_RELOC_MIPS_SHIFT6,
  BFD_RELOC_MIPS_INSERT_A,
  BFD_RELOC_MIPS_INSERT_B,
  BFD_RELOC_MIPS_DELETE,
  BFD_RELOC_MIPS_HIGHEST,
  BFD_RELOC_MIPS_HIGHER,
  BFD_RELOC_MIPS_SCN_DISP,
  BFD_RELOC_MIPS_REL16,
  BFD_RELOC_MIPS_RELGOT,
  BFD_RELOC_MIPS_JALR,
  BFD_RELOC_MIPS_TLS_DTPMOD32,
  BFD_RELOC_MIPS_TLS_DTPREL32,
  BFD_RELOC_MIPS_TLS_DTPMOD64,
  BFD_RELOC_MIPS_TLS_DTPREL64,
  BFD_RELOC_MIPS_TLS_GD,
  BFD_RELOC_MIPS_TLS_LDM,
  BFD_RELOC_MIPS_TLS_DTPREL_HI16,
  BFD_RELOC_MIPS_TLS_DTPREL_LO16,
  BFD_RELOC_MIPS_TLS_GOTTPREL,
  BFD_RELOC_MIPS_TLS_TPREL32,
  BFD_RELOC_MIPS_TLS_TPREL64,
  BFD_RELOC_MIPS_TLS_TPREL_HI16,
  BFD_RELOC_MIPS_TLS_TPREL_LO16,



  BFD_RELOC_MIPS_COPY,
  BFD_RELOC_MIPS_JUMP_SLOT,



  BFD_RELOC_FRV_LABEL16,
  BFD_RELOC_FRV_LABEL24,
  BFD_RELOC_FRV_LO16,
  BFD_RELOC_FRV_HI16,
  BFD_RELOC_FRV_GPREL12,
  BFD_RELOC_FRV_GPRELU12,
  BFD_RELOC_FRV_GPREL32,
  BFD_RELOC_FRV_GPRELHI,
  BFD_RELOC_FRV_GPRELLO,
  BFD_RELOC_FRV_GOT12,
  BFD_RELOC_FRV_GOTHI,
  BFD_RELOC_FRV_GOTLO,
  BFD_RELOC_FRV_FUNCDESC,
  BFD_RELOC_FRV_FUNCDESC_GOT12,
  BFD_RELOC_FRV_FUNCDESC_GOTHI,
  BFD_RELOC_FRV_FUNCDESC_GOTLO,
  BFD_RELOC_FRV_FUNCDESC_VALUE,
  BFD_RELOC_FRV_FUNCDESC_GOTOFF12,
  BFD_RELOC_FRV_FUNCDESC_GOTOFFHI,
  BFD_RELOC_FRV_FUNCDESC_GOTOFFLO,
  BFD_RELOC_FRV_GOTOFF12,
  BFD_RELOC_FRV_GOTOFFHI,
  BFD_RELOC_FRV_GOTOFFLO,
  BFD_RELOC_FRV_GETTLSOFF,
  BFD_RELOC_FRV_TLSDESC_VALUE,
  BFD_RELOC_FRV_GOTTLSDESC12,
  BFD_RELOC_FRV_GOTTLSDESCHI,
  BFD_RELOC_FRV_GOTTLSDESCLO,
  BFD_RELOC_FRV_TLSMOFF12,
  BFD_RELOC_FRV_TLSMOFFHI,
  BFD_RELOC_FRV_TLSMOFFLO,
  BFD_RELOC_FRV_GOTTLSOFF12,
  BFD_RELOC_FRV_GOTTLSOFFHI,
  BFD_RELOC_FRV_GOTTLSOFFLO,
  BFD_RELOC_FRV_TLSOFF,
  BFD_RELOC_FRV_TLSDESC_RELAX,
  BFD_RELOC_FRV_GETTLSOFF_RELAX,
  BFD_RELOC_FRV_TLSOFF_RELAX,
  BFD_RELOC_FRV_TLSMOFF,



  BFD_RELOC_MN10300_GOTOFF24,



  BFD_RELOC_MN10300_GOT32,



  BFD_RELOC_MN10300_GOT24,



  BFD_RELOC_MN10300_GOT16,


  BFD_RELOC_MN10300_COPY,


  BFD_RELOC_MN10300_GLOB_DAT,


  BFD_RELOC_MN10300_JMP_SLOT,


  BFD_RELOC_MN10300_RELATIVE,



  BFD_RELOC_386_GOT32,
  BFD_RELOC_386_PLT32,
  BFD_RELOC_386_COPY,
  BFD_RELOC_386_GLOB_DAT,
  BFD_RELOC_386_JUMP_SLOT,
  BFD_RELOC_386_RELATIVE,
  BFD_RELOC_386_GOTOFF,
  BFD_RELOC_386_GOTPC,
  BFD_RELOC_386_TLS_TPOFF,
  BFD_RELOC_386_TLS_IE,
  BFD_RELOC_386_TLS_GOTIE,
  BFD_RELOC_386_TLS_LE,
  BFD_RELOC_386_TLS_GD,
  BFD_RELOC_386_TLS_LDM,
  BFD_RELOC_386_TLS_LDO_32,
  BFD_RELOC_386_TLS_IE_32,
  BFD_RELOC_386_TLS_LE_32,
  BFD_RELOC_386_TLS_DTPMOD32,
  BFD_RELOC_386_TLS_DTPOFF32,
  BFD_RELOC_386_TLS_TPOFF32,
  BFD_RELOC_386_TLS_GOTDESC,
  BFD_RELOC_386_TLS_DESC_CALL,
  BFD_RELOC_386_TLS_DESC,


  BFD_RELOC_X86_64_GOT32,
  BFD_RELOC_X86_64_PLT32,
  BFD_RELOC_X86_64_COPY,
  BFD_RELOC_X86_64_GLOB_DAT,
  BFD_RELOC_X86_64_JUMP_SLOT,
  BFD_RELOC_X86_64_RELATIVE,
  BFD_RELOC_X86_64_GOTPCREL,
  BFD_RELOC_X86_64_32S,
  BFD_RELOC_X86_64_DTPMOD64,
  BFD_RELOC_X86_64_DTPOFF64,
  BFD_RELOC_X86_64_TPOFF64,
  BFD_RELOC_X86_64_TLSGD,
  BFD_RELOC_X86_64_TLSLD,
  BFD_RELOC_X86_64_DTPOFF32,
  BFD_RELOC_X86_64_GOTTPOFF,
  BFD_RELOC_X86_64_TPOFF32,
  BFD_RELOC_X86_64_GOTOFF64,
  BFD_RELOC_X86_64_GOTPC32,
  BFD_RELOC_X86_64_GOT64,
  BFD_RELOC_X86_64_GOTPCREL64,
  BFD_RELOC_X86_64_GOTPC64,
  BFD_RELOC_X86_64_GOTPLT64,
  BFD_RELOC_X86_64_PLTOFF64,
  BFD_RELOC_X86_64_GOTPC32_TLSDESC,
  BFD_RELOC_X86_64_TLSDESC_CALL,
  BFD_RELOC_X86_64_TLSDESC,


  BFD_RELOC_NS32K_IMM_8,
  BFD_RELOC_NS32K_IMM_16,
  BFD_RELOC_NS32K_IMM_32,
  BFD_RELOC_NS32K_IMM_8_PCREL,
  BFD_RELOC_NS32K_IMM_16_PCREL,
  BFD_RELOC_NS32K_IMM_32_PCREL,
  BFD_RELOC_NS32K_DISP_8,
  BFD_RELOC_NS32K_DISP_16,
  BFD_RELOC_NS32K_DISP_32,
  BFD_RELOC_NS32K_DISP_8_PCREL,
  BFD_RELOC_NS32K_DISP_16_PCREL,
  BFD_RELOC_NS32K_DISP_32_PCREL,


  BFD_RELOC_PDP11_DISP_8_PCREL,
  BFD_RELOC_PDP11_DISP_6_PCREL,


  BFD_RELOC_PJ_CODE_HI16,
  BFD_RELOC_PJ_CODE_LO16,
  BFD_RELOC_PJ_CODE_DIR16,
  BFD_RELOC_PJ_CODE_DIR32,
  BFD_RELOC_PJ_CODE_REL16,
  BFD_RELOC_PJ_CODE_REL32,


  BFD_RELOC_PPC_B26,
  BFD_RELOC_PPC_BA26,
  BFD_RELOC_PPC_TOC16,
  BFD_RELOC_PPC_B16,
  BFD_RELOC_PPC_B16_BRTAKEN,
  BFD_RELOC_PPC_B16_BRNTAKEN,
  BFD_RELOC_PPC_BA16,
  BFD_RELOC_PPC_BA16_BRTAKEN,
  BFD_RELOC_PPC_BA16_BRNTAKEN,
  BFD_RELOC_PPC_COPY,
  BFD_RELOC_PPC_GLOB_DAT,
  BFD_RELOC_PPC_JMP_SLOT,
  BFD_RELOC_PPC_RELATIVE,
  BFD_RELOC_PPC_LOCAL24PC,
  BFD_RELOC_PPC_EMB_NADDR32,
  BFD_RELOC_PPC_EMB_NADDR16,
  BFD_RELOC_PPC_EMB_NADDR16_LO,
  BFD_RELOC_PPC_EMB_NADDR16_HI,
  BFD_RELOC_PPC_EMB_NADDR16_HA,
  BFD_RELOC_PPC_EMB_SDAI16,
  BFD_RELOC_PPC_EMB_SDA2I16,
  BFD_RELOC_PPC_EMB_SDA2REL,
  BFD_RELOC_PPC_EMB_SDA21,
  BFD_RELOC_PPC_EMB_MRKREF,
  BFD_RELOC_PPC_EMB_RELSEC16,
  BFD_RELOC_PPC_EMB_RELST_LO,
  BFD_RELOC_PPC_EMB_RELST_HI,
  BFD_RELOC_PPC_EMB_RELST_HA,
  BFD_RELOC_PPC_EMB_BIT_FLD,
  BFD_RELOC_PPC_EMB_RELSDA,
  BFD_RELOC_PPC64_HIGHER,
  BFD_RELOC_PPC64_HIGHER_S,
  BFD_RELOC_PPC64_HIGHEST,
  BFD_RELOC_PPC64_HIGHEST_S,
  BFD_RELOC_PPC64_TOC16_LO,
  BFD_RELOC_PPC64_TOC16_HI,
  BFD_RELOC_PPC64_TOC16_HA,
  BFD_RELOC_PPC64_TOC,
  BFD_RELOC_PPC64_PLTGOT16,
  BFD_RELOC_PPC64_PLTGOT16_LO,
  BFD_RELOC_PPC64_PLTGOT16_HI,
  BFD_RELOC_PPC64_PLTGOT16_HA,
  BFD_RELOC_PPC64_ADDR16_DS,
  BFD_RELOC_PPC64_ADDR16_LO_DS,
  BFD_RELOC_PPC64_GOT16_DS,
  BFD_RELOC_PPC64_GOT16_LO_DS,
  BFD_RELOC_PPC64_PLT16_LO_DS,
  BFD_RELOC_PPC64_SECTOFF_DS,
  BFD_RELOC_PPC64_SECTOFF_LO_DS,
  BFD_RELOC_PPC64_TOC16_DS,
  BFD_RELOC_PPC64_TOC16_LO_DS,
  BFD_RELOC_PPC64_PLTGOT16_DS,
  BFD_RELOC_PPC64_PLTGOT16_LO_DS,


  BFD_RELOC_PPC_TLS,
  BFD_RELOC_PPC_DTPMOD,
  BFD_RELOC_PPC_TPREL16,
  BFD_RELOC_PPC_TPREL16_LO,
  BFD_RELOC_PPC_TPREL16_HI,
  BFD_RELOC_PPC_TPREL16_HA,
  BFD_RELOC_PPC_TPREL,
  BFD_RELOC_PPC_DTPREL16,
  BFD_RELOC_PPC_DTPREL16_LO,
  BFD_RELOC_PPC_DTPREL16_HI,
  BFD_RELOC_PPC_DTPREL16_HA,
  BFD_RELOC_PPC_DTPREL,
  BFD_RELOC_PPC_GOT_TLSGD16,
  BFD_RELOC_PPC_GOT_TLSGD16_LO,
  BFD_RELOC_PPC_GOT_TLSGD16_HI,
  BFD_RELOC_PPC_GOT_TLSGD16_HA,
  BFD_RELOC_PPC_GOT_TLSLD16,
  BFD_RELOC_PPC_GOT_TLSLD16_LO,
  BFD_RELOC_PPC_GOT_TLSLD16_HI,
  BFD_RELOC_PPC_GOT_TLSLD16_HA,
  BFD_RELOC_PPC_GOT_TPREL16,
  BFD_RELOC_PPC_GOT_TPREL16_LO,
  BFD_RELOC_PPC_GOT_TPREL16_HI,
  BFD_RELOC_PPC_GOT_TPREL16_HA,
  BFD_RELOC_PPC_GOT_DTPREL16,
  BFD_RELOC_PPC_GOT_DTPREL16_LO,
  BFD_RELOC_PPC_GOT_DTPREL16_HI,
  BFD_RELOC_PPC_GOT_DTPREL16_HA,
  BFD_RELOC_PPC64_TPREL16_DS,
  BFD_RELOC_PPC64_TPREL16_LO_DS,
  BFD_RELOC_PPC64_TPREL16_HIGHER,
  BFD_RELOC_PPC64_TPREL16_HIGHERA,
  BFD_RELOC_PPC64_TPREL16_HIGHEST,
  BFD_RELOC_PPC64_TPREL16_HIGHESTA,
  BFD_RELOC_PPC64_DTPREL16_DS,
  BFD_RELOC_PPC64_DTPREL16_LO_DS,
  BFD_RELOC_PPC64_DTPREL16_HIGHER,
  BFD_RELOC_PPC64_DTPREL16_HIGHERA,
  BFD_RELOC_PPC64_DTPREL16_HIGHEST,
  BFD_RELOC_PPC64_DTPREL16_HIGHESTA,


  BFD_RELOC_I370_D12,




  BFD_RELOC_CTOR,



  BFD_RELOC_ARM_PCREL_BRANCH,




  BFD_RELOC_ARM_PCREL_BLX,




  BFD_RELOC_THUMB_PCREL_BLX,


  BFD_RELOC_ARM_PCREL_CALL,


  BFD_RELOC_ARM_PCREL_JUMP,






  BFD_RELOC_THUMB_PCREL_BRANCH7,
  BFD_RELOC_THUMB_PCREL_BRANCH9,
  BFD_RELOC_THUMB_PCREL_BRANCH12,
  BFD_RELOC_THUMB_PCREL_BRANCH20,
  BFD_RELOC_THUMB_PCREL_BRANCH23,
  BFD_RELOC_THUMB_PCREL_BRANCH25,


  BFD_RELOC_ARM_OFFSET_IMM,


  BFD_RELOC_ARM_THUMB_OFFSET,



  BFD_RELOC_ARM_TARGET1,


  BFD_RELOC_ARM_ROSEGREL32,


  BFD_RELOC_ARM_SBREL32,




  BFD_RELOC_ARM_TARGET2,


  BFD_RELOC_ARM_PREL31,


  BFD_RELOC_ARM_JUMP_SLOT,
  BFD_RELOC_ARM_GLOB_DAT,
  BFD_RELOC_ARM_GOT32,
  BFD_RELOC_ARM_PLT32,
  BFD_RELOC_ARM_RELATIVE,
  BFD_RELOC_ARM_GOTOFF,
  BFD_RELOC_ARM_GOTPC,


  BFD_RELOC_ARM_TLS_GD32,
  BFD_RELOC_ARM_TLS_LDO32,
  BFD_RELOC_ARM_TLS_LDM32,
  BFD_RELOC_ARM_TLS_DTPOFF32,
  BFD_RELOC_ARM_TLS_DTPMOD32,
  BFD_RELOC_ARM_TLS_TPOFF32,
  BFD_RELOC_ARM_TLS_IE32,
  BFD_RELOC_ARM_TLS_LE32,



  BFD_RELOC_ARM_IMMEDIATE,
  BFD_RELOC_ARM_ADRL_IMMEDIATE,
  BFD_RELOC_ARM_T32_IMMEDIATE,
  BFD_RELOC_ARM_T32_IMM12,
  BFD_RELOC_ARM_T32_ADD_PC12,
  BFD_RELOC_ARM_SHIFT_IMM,
  BFD_RELOC_ARM_SMC,
  BFD_RELOC_ARM_SWI,
  BFD_RELOC_ARM_MULTI,
  BFD_RELOC_ARM_CP_OFF_IMM,
  BFD_RELOC_ARM_CP_OFF_IMM_S2,
  BFD_RELOC_ARM_T32_CP_OFF_IMM,
  BFD_RELOC_ARM_T32_CP_OFF_IMM_S2,
  BFD_RELOC_ARM_ADR_IMM,
  BFD_RELOC_ARM_LDR_IMM,
  BFD_RELOC_ARM_LITERAL,
  BFD_RELOC_ARM_IN_POOL,
  BFD_RELOC_ARM_OFFSET_IMM8,
  BFD_RELOC_ARM_T32_OFFSET_U8,
  BFD_RELOC_ARM_T32_OFFSET_IMM,
  BFD_RELOC_ARM_HWLITERAL,
  BFD_RELOC_ARM_THUMB_ADD,
  BFD_RELOC_ARM_THUMB_IMM,
  BFD_RELOC_ARM_THUMB_SHIFT,


  BFD_RELOC_SH_PCDISP8BY2,
  BFD_RELOC_SH_PCDISP12BY2,
  BFD_RELOC_SH_IMM3,
  BFD_RELOC_SH_IMM3U,
  BFD_RELOC_SH_DISP12,
  BFD_RELOC_SH_DISP12BY2,
  BFD_RELOC_SH_DISP12BY4,
  BFD_RELOC_SH_DISP12BY8,
  BFD_RELOC_SH_DISP20,
  BFD_RELOC_SH_DISP20BY8,
  BFD_RELOC_SH_IMM4,
  BFD_RELOC_SH_IMM4BY2,
  BFD_RELOC_SH_IMM4BY4,
  BFD_RELOC_SH_IMM8,
  BFD_RELOC_SH_IMM8BY2,
  BFD_RELOC_SH_IMM8BY4,
  BFD_RELOC_SH_PCRELIMM8BY2,
  BFD_RELOC_SH_PCRELIMM8BY4,
  BFD_RELOC_SH_SWITCH16,
  BFD_RELOC_SH_SWITCH32,
  BFD_RELOC_SH_USES,
  BFD_RELOC_SH_COUNT,
  BFD_RELOC_SH_ALIGN,
  BFD_RELOC_SH_CODE,
  BFD_RELOC_SH_DATA,
  BFD_RELOC_SH_LABEL,
  BFD_RELOC_SH_LOOP_START,
  BFD_RELOC_SH_LOOP_END,
  BFD_RELOC_SH_COPY,
  BFD_RELOC_SH_GLOB_DAT,
  BFD_RELOC_SH_JMP_SLOT,
  BFD_RELOC_SH_RELATIVE,
  BFD_RELOC_SH_GOTPC,
  BFD_RELOC_SH_GOT_LOW16,
  BFD_RELOC_SH_GOT_MEDLOW16,
  BFD_RELOC_SH_GOT_MEDHI16,
  BFD_RELOC_SH_GOT_HI16,
  BFD_RELOC_SH_GOTPLT_LOW16,
  BFD_RELOC_SH_GOTPLT_MEDLOW16,
  BFD_RELOC_SH_GOTPLT_MEDHI16,
  BFD_RELOC_SH_GOTPLT_HI16,
  BFD_RELOC_SH_PLT_LOW16,
  BFD_RELOC_SH_PLT_MEDLOW16,
  BFD_RELOC_SH_PLT_MEDHI16,
  BFD_RELOC_SH_PLT_HI16,
  BFD_RELOC_SH_GOTOFF_LOW16,
  BFD_RELOC_SH_GOTOFF_MEDLOW16,
  BFD_RELOC_SH_GOTOFF_MEDHI16,
  BFD_RELOC_SH_GOTOFF_HI16,
  BFD_RELOC_SH_GOTPC_LOW16,
  BFD_RELOC_SH_GOTPC_MEDLOW16,
  BFD_RELOC_SH_GOTPC_MEDHI16,
  BFD_RELOC_SH_GOTPC_HI16,
  BFD_RELOC_SH_COPY64,
  BFD_RELOC_SH_GLOB_DAT64,
  BFD_RELOC_SH_JMP_SLOT64,
  BFD_RELOC_SH_RELATIVE64,
  BFD_RELOC_SH_GOT10BY4,
  BFD_RELOC_SH_GOT10BY8,
  BFD_RELOC_SH_GOTPLT10BY4,
  BFD_RELOC_SH_GOTPLT10BY8,
  BFD_RELOC_SH_GOTPLT32,
  BFD_RELOC_SH_SHMEDIA_CODE,
  BFD_RELOC_SH_IMMU5,
  BFD_RELOC_SH_IMMS6,
  BFD_RELOC_SH_IMMS6BY32,
  BFD_RELOC_SH_IMMU6,
  BFD_RELOC_SH_IMMS10,
  BFD_RELOC_SH_IMMS10BY2,
  BFD_RELOC_SH_IMMS10BY4,
  BFD_RELOC_SH_IMMS10BY8,
  BFD_RELOC_SH_IMMS16,
  BFD_RELOC_SH_IMMU16,
  BFD_RELOC_SH_IMM_LOW16,
  BFD_RELOC_SH_IMM_LOW16_PCREL,
  BFD_RELOC_SH_IMM_MEDLOW16,
  BFD_RELOC_SH_IMM_MEDLOW16_PCREL,
  BFD_RELOC_SH_IMM_MEDHI16,
  BFD_RELOC_SH_IMM_MEDHI16_PCREL,
  BFD_RELOC_SH_IMM_HI16,
  BFD_RELOC_SH_IMM_HI16_PCREL,
  BFD_RELOC_SH_PT_16,
  BFD_RELOC_SH_TLS_GD_32,
  BFD_RELOC_SH_TLS_LD_32,
  BFD_RELOC_SH_TLS_LDO_32,
  BFD_RELOC_SH_TLS_IE_32,
  BFD_RELOC_SH_TLS_LE_32,
  BFD_RELOC_SH_TLS_DTPMOD32,
  BFD_RELOC_SH_TLS_DTPOFF32,
  BFD_RELOC_SH_TLS_TPOFF32,





  BFD_RELOC_ARC_B22_PCREL,




  BFD_RELOC_ARC_B26,


  BFD_RELOC_BFIN_16_IMM,


  BFD_RELOC_BFIN_16_HIGH,


  BFD_RELOC_BFIN_4_PCREL,


  BFD_RELOC_BFIN_5_PCREL,


  BFD_RELOC_BFIN_16_LOW,


  BFD_RELOC_BFIN_10_PCREL,


  BFD_RELOC_BFIN_11_PCREL,


  BFD_RELOC_BFIN_12_PCREL_JUMP,


  BFD_RELOC_BFIN_12_PCREL_JUMP_S,


  BFD_RELOC_BFIN_24_PCREL_CALL_X,


  BFD_RELOC_BFIN_24_PCREL_JUMP_L,


  BFD_RELOC_BFIN_GOT17M4,
  BFD_RELOC_BFIN_GOTHI,
  BFD_RELOC_BFIN_GOTLO,
  BFD_RELOC_BFIN_FUNCDESC,
  BFD_RELOC_BFIN_FUNCDESC_GOT17M4,
  BFD_RELOC_BFIN_FUNCDESC_GOTHI,
  BFD_RELOC_BFIN_FUNCDESC_GOTLO,
  BFD_RELOC_BFIN_FUNCDESC_VALUE,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFF17M4,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFFHI,
  BFD_RELOC_BFIN_FUNCDESC_GOTOFFLO,
  BFD_RELOC_BFIN_GOTOFF17M4,
  BFD_RELOC_BFIN_GOTOFFHI,
  BFD_RELOC_BFIN_GOTOFFLO,


  BFD_RELOC_BFIN_GOT,


  BFD_RELOC_BFIN_PLTPC,


  BFD_ARELOC_BFIN_PUSH,


  BFD_ARELOC_BFIN_CONST,


  BFD_ARELOC_BFIN_ADD,


  BFD_ARELOC_BFIN_SUB,


  BFD_ARELOC_BFIN_MULT,


  BFD_ARELOC_BFIN_DIV,


  BFD_ARELOC_BFIN_MOD,


  BFD_ARELOC_BFIN_LSHIFT,


  BFD_ARELOC_BFIN_RSHIFT,


  BFD_ARELOC_BFIN_AND,


  BFD_ARELOC_BFIN_OR,


  BFD_ARELOC_BFIN_XOR,


  BFD_ARELOC_BFIN_LAND,


  BFD_ARELOC_BFIN_LOR,


  BFD_ARELOC_BFIN_LEN,


  BFD_ARELOC_BFIN_NEG,


  BFD_ARELOC_BFIN_COMP,


  BFD_ARELOC_BFIN_PAGE,


  BFD_ARELOC_BFIN_HWPAGE,


  BFD_ARELOC_BFIN_ADDR,




  BFD_RELOC_D10V_10_PCREL_R,






  BFD_RELOC_D10V_10_PCREL_L,



  BFD_RELOC_D10V_18,



  BFD_RELOC_D10V_18_PCREL,



  BFD_RELOC_D30V_6,



  BFD_RELOC_D30V_9_PCREL,





  BFD_RELOC_D30V_9_PCREL_R,



  BFD_RELOC_D30V_15,



  BFD_RELOC_D30V_15_PCREL,





  BFD_RELOC_D30V_15_PCREL_R,



  BFD_RELOC_D30V_21,



  BFD_RELOC_D30V_21_PCREL,





  BFD_RELOC_D30V_21_PCREL_R,


  BFD_RELOC_D30V_32,


  BFD_RELOC_D30V_32_PCREL,


  BFD_RELOC_DLX_HI16_S,


  BFD_RELOC_DLX_LO16,


  BFD_RELOC_DLX_JMP26,


  BFD_RELOC_M32C_HI8,
  BFD_RELOC_M32C_RL_JUMP,
  BFD_RELOC_M32C_RL_1ADDR,
  BFD_RELOC_M32C_RL_2ADDR,



  BFD_RELOC_M32R_24,


  BFD_RELOC_M32R_10_PCREL,


  BFD_RELOC_M32R_18_PCREL,


  BFD_RELOC_M32R_26_PCREL,



  BFD_RELOC_M32R_HI16_ULO,



  BFD_RELOC_M32R_HI16_SLO,


  BFD_RELOC_M32R_LO16,



  BFD_RELOC_M32R_SDA16,


  BFD_RELOC_M32R_GOT24,
  BFD_RELOC_M32R_26_PLTREL,
  BFD_RELOC_M32R_COPY,
  BFD_RELOC_M32R_GLOB_DAT,
  BFD_RELOC_M32R_JMP_SLOT,
  BFD_RELOC_M32R_RELATIVE,
  BFD_RELOC_M32R_GOTOFF,
  BFD_RELOC_M32R_GOTOFF_HI_ULO,
  BFD_RELOC_M32R_GOTOFF_HI_SLO,
  BFD_RELOC_M32R_GOTOFF_LO,
  BFD_RELOC_M32R_GOTPC24,
  BFD_RELOC_M32R_GOT16_HI_ULO,
  BFD_RELOC_M32R_GOT16_HI_SLO,
  BFD_RELOC_M32R_GOT16_LO,
  BFD_RELOC_M32R_GOTPC_HI_ULO,
  BFD_RELOC_M32R_GOTPC_HI_SLO,
  BFD_RELOC_M32R_GOTPC_LO,



  BFD_RELOC_V850_9_PCREL,


  BFD_RELOC_V850_22_PCREL,


  BFD_RELOC_V850_SDA_16_16_OFFSET,



  BFD_RELOC_V850_SDA_15_16_OFFSET,


  BFD_RELOC_V850_ZDA_16_16_OFFSET,



  BFD_RELOC_V850_ZDA_15_16_OFFSET,



  BFD_RELOC_V850_TDA_6_8_OFFSET,



  BFD_RELOC_V850_TDA_7_8_OFFSET,


  BFD_RELOC_V850_TDA_7_7_OFFSET,


  BFD_RELOC_V850_TDA_16_16_OFFSET,



  BFD_RELOC_V850_TDA_4_5_OFFSET,


  BFD_RELOC_V850_TDA_4_4_OFFSET,



  BFD_RELOC_V850_SDA_16_16_SPLIT_OFFSET,



  BFD_RELOC_V850_ZDA_16_16_SPLIT_OFFSET,


  BFD_RELOC_V850_CALLT_6_7_OFFSET,


  BFD_RELOC_V850_CALLT_16_16_OFFSET,


  BFD_RELOC_V850_LONGCALL,


  BFD_RELOC_V850_LONGJUMP,


  BFD_RELOC_V850_ALIGN,



  BFD_RELOC_V850_LO16_SPLIT_OFFSET,


  BFD_RELOC_V850_16_PCREL,


  BFD_RELOC_V850_17_PCREL,


  BFD_RELOC_V850_23,


  BFD_RELOC_V850_32_PCREL,


  BFD_RELOC_V850_32_ABS,


  BFD_RELOC_V850_16_SPLIT_OFFSET,


  BFD_RELOC_V850_16_S1,


  BFD_RELOC_V850_LO16_S1,


  BFD_RELOC_V850_CALLT_15_16_OFFSET,


  BFD_RELOC_V850_32_GOTPCREL,


  BFD_RELOC_V850_16_GOT,


  BFD_RELOC_V850_32_GOT,


  BFD_RELOC_V850_22_PLT_PCREL,


  BFD_RELOC_V850_32_PLT_PCREL,


  BFD_RELOC_V850_COPY,


  BFD_RELOC_V850_GLOB_DAT,


  BFD_RELOC_V850_JMP_SLOT,


  BFD_RELOC_V850_RELATIVE,


  BFD_RELOC_V850_16_GOTOFF,


  BFD_RELOC_V850_32_GOTOFF,


  BFD_RELOC_V850_CODE,


  BFD_RELOC_V850_DATA,



  BFD_RELOC_MN10300_32_PCREL,



  BFD_RELOC_MN10300_16_PCREL,




  BFD_RELOC_TIC30_LDP,




  BFD_RELOC_TIC54X_PARTLS7,




  BFD_RELOC_TIC54X_PARTMS9,


  BFD_RELOC_TIC54X_23,




  BFD_RELOC_TIC54X_16_OF_23,




  BFD_RELOC_TIC54X_MS7_OF_23,


  BFD_RELOC_FR30_48,



  BFD_RELOC_FR30_20,



  BFD_RELOC_FR30_6_IN_4,



  BFD_RELOC_FR30_8_IN_8,



  BFD_RELOC_FR30_9_IN_8,



  BFD_RELOC_FR30_10_IN_8,



  BFD_RELOC_FR30_9_PCREL,



  BFD_RELOC_FR30_12_PCREL,


  BFD_RELOC_MCORE_PCREL_IMM8BY4,
  BFD_RELOC_MCORE_PCREL_IMM11BY2,
  BFD_RELOC_MCORE_PCREL_IMM4BY2,
  BFD_RELOC_MCORE_PCREL_32,
  BFD_RELOC_MCORE_PCREL_JSR_IMM11BY2,
  BFD_RELOC_MCORE_RVA,


  BFD_RELOC_MMIX_GETA,
  BFD_RELOC_MMIX_GETA_1,
  BFD_RELOC_MMIX_GETA_2,
  BFD_RELOC_MMIX_GETA_3,


  BFD_RELOC_MMIX_CBRANCH,
  BFD_RELOC_MMIX_CBRANCH_J,
  BFD_RELOC_MMIX_CBRANCH_1,
  BFD_RELOC_MMIX_CBRANCH_2,
  BFD_RELOC_MMIX_CBRANCH_3,


  BFD_RELOC_MMIX_PUSHJ,
  BFD_RELOC_MMIX_PUSHJ_1,
  BFD_RELOC_MMIX_PUSHJ_2,
  BFD_RELOC_MMIX_PUSHJ_3,
  BFD_RELOC_MMIX_PUSHJ_STUBBABLE,


  BFD_RELOC_MMIX_JMP,
  BFD_RELOC_MMIX_JMP_1,
  BFD_RELOC_MMIX_JMP_2,
  BFD_RELOC_MMIX_JMP_3,



  BFD_RELOC_MMIX_ADDR19,


  BFD_RELOC_MMIX_ADDR27,



  BFD_RELOC_MMIX_REG_OR_BYTE,



  BFD_RELOC_MMIX_REG,



  BFD_RELOC_MMIX_BASE_PLUS_OFFSET,



  BFD_RELOC_MMIX_LOCAL,



  BFD_RELOC_AVR_7_PCREL,



  BFD_RELOC_AVR_13_PCREL,



  BFD_RELOC_AVR_16_PM,



  BFD_RELOC_AVR_LO8_LDI,



  BFD_RELOC_AVR_HI8_LDI,



  BFD_RELOC_AVR_HH8_LDI,



  BFD_RELOC_AVR_MS8_LDI,



  BFD_RELOC_AVR_LO8_LDI_NEG,




  BFD_RELOC_AVR_HI8_LDI_NEG,




  BFD_RELOC_AVR_HH8_LDI_NEG,



  BFD_RELOC_AVR_MS8_LDI_NEG,



  BFD_RELOC_AVR_LO8_LDI_PM,





  BFD_RELOC_AVR_LO8_LDI_GS,



  BFD_RELOC_AVR_HI8_LDI_PM,





  BFD_RELOC_AVR_HI8_LDI_GS,



  BFD_RELOC_AVR_HH8_LDI_PM,



  BFD_RELOC_AVR_LO8_LDI_PM_NEG,




  BFD_RELOC_AVR_HI8_LDI_PM_NEG,




  BFD_RELOC_AVR_HH8_LDI_PM_NEG,



  BFD_RELOC_AVR_CALL,



  BFD_RELOC_AVR_LDI,



  BFD_RELOC_AVR_6,



  BFD_RELOC_AVR_6_ADIW,


  BFD_RELOC_390_12,


  BFD_RELOC_390_GOT12,


  BFD_RELOC_390_PLT32,


  BFD_RELOC_390_COPY,


  BFD_RELOC_390_GLOB_DAT,


  BFD_RELOC_390_JMP_SLOT,


  BFD_RELOC_390_RELATIVE,


  BFD_RELOC_390_GOTPC,


  BFD_RELOC_390_GOT16,


  BFD_RELOC_390_PC16DBL,


  BFD_RELOC_390_PLT16DBL,


  BFD_RELOC_390_PC32DBL,


  BFD_RELOC_390_PLT32DBL,


  BFD_RELOC_390_GOTPCDBL,


  BFD_RELOC_390_GOT64,


  BFD_RELOC_390_PLT64,


  BFD_RELOC_390_GOTENT,


  BFD_RELOC_390_GOTOFF64,


  BFD_RELOC_390_GOTPLT12,


  BFD_RELOC_390_GOTPLT16,


  BFD_RELOC_390_GOTPLT32,


  BFD_RELOC_390_GOTPLT64,


  BFD_RELOC_390_GOTPLTENT,


  BFD_RELOC_390_PLTOFF16,


  BFD_RELOC_390_PLTOFF32,


  BFD_RELOC_390_PLTOFF64,


  BFD_RELOC_390_TLS_LOAD,
  BFD_RELOC_390_TLS_GDCALL,
  BFD_RELOC_390_TLS_LDCALL,
  BFD_RELOC_390_TLS_GD32,
  BFD_RELOC_390_TLS_GD64,
  BFD_RELOC_390_TLS_GOTIE12,
  BFD_RELOC_390_TLS_GOTIE32,
  BFD_RELOC_390_TLS_GOTIE64,
  BFD_RELOC_390_TLS_LDM32,
  BFD_RELOC_390_TLS_LDM64,
  BFD_RELOC_390_TLS_IE32,
  BFD_RELOC_390_TLS_IE64,
  BFD_RELOC_390_TLS_IEENT,
  BFD_RELOC_390_TLS_LE32,
  BFD_RELOC_390_TLS_LE64,
  BFD_RELOC_390_TLS_LDO32,
  BFD_RELOC_390_TLS_LDO64,
  BFD_RELOC_390_TLS_DTPMOD,
  BFD_RELOC_390_TLS_DTPOFF,
  BFD_RELOC_390_TLS_TPOFF,


  BFD_RELOC_390_20,
  BFD_RELOC_390_GOT20,
  BFD_RELOC_390_GOTPLT20,
  BFD_RELOC_390_TLS_GOTIE20,


  BFD_RELOC_IP2K_FR9,


  BFD_RELOC_IP2K_BANK,


  BFD_RELOC_IP2K_ADDR16CJP,


  BFD_RELOC_IP2K_PAGE3,


  BFD_RELOC_IP2K_LO8DATA,
  BFD_RELOC_IP2K_HI8DATA,
  BFD_RELOC_IP2K_EX8DATA,


  BFD_RELOC_IP2K_LO8INSN,
  BFD_RELOC_IP2K_HI8INSN,


  BFD_RELOC_IP2K_PC_SKIP,


  BFD_RELOC_IP2K_TEXT,


  BFD_RELOC_IP2K_FR_OFFSET,


  BFD_RELOC_VPE4KMATH_DATA,
  BFD_RELOC_VPE4KMATH_INSN,
# 3873 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  BFD_RELOC_VTABLE_INHERIT,
  BFD_RELOC_VTABLE_ENTRY,


  BFD_RELOC_IA64_IMM14,
  BFD_RELOC_IA64_IMM22,
  BFD_RELOC_IA64_IMM64,
  BFD_RELOC_IA64_DIR32MSB,
  BFD_RELOC_IA64_DIR32LSB,
  BFD_RELOC_IA64_DIR64MSB,
  BFD_RELOC_IA64_DIR64LSB,
  BFD_RELOC_IA64_GPREL22,
  BFD_RELOC_IA64_GPREL64I,
  BFD_RELOC_IA64_GPREL32MSB,
  BFD_RELOC_IA64_GPREL32LSB,
  BFD_RELOC_IA64_GPREL64MSB,
  BFD_RELOC_IA64_GPREL64LSB,
  BFD_RELOC_IA64_LTOFF22,
  BFD_RELOC_IA64_LTOFF64I,
  BFD_RELOC_IA64_PLTOFF22,
  BFD_RELOC_IA64_PLTOFF64I,
  BFD_RELOC_IA64_PLTOFF64MSB,
  BFD_RELOC_IA64_PLTOFF64LSB,
  BFD_RELOC_IA64_FPTR64I,
  BFD_RELOC_IA64_FPTR32MSB,
  BFD_RELOC_IA64_FPTR32LSB,
  BFD_RELOC_IA64_FPTR64MSB,
  BFD_RELOC_IA64_FPTR64LSB,
  BFD_RELOC_IA64_PCREL21B,
  BFD_RELOC_IA64_PCREL21BI,
  BFD_RELOC_IA64_PCREL21M,
  BFD_RELOC_IA64_PCREL21F,
  BFD_RELOC_IA64_PCREL22,
  BFD_RELOC_IA64_PCREL60B,
  BFD_RELOC_IA64_PCREL64I,
  BFD_RELOC_IA64_PCREL32MSB,
  BFD_RELOC_IA64_PCREL32LSB,
  BFD_RELOC_IA64_PCREL64MSB,
  BFD_RELOC_IA64_PCREL64LSB,
  BFD_RELOC_IA64_LTOFF_FPTR22,
  BFD_RELOC_IA64_LTOFF_FPTR64I,
  BFD_RELOC_IA64_LTOFF_FPTR32MSB,
  BFD_RELOC_IA64_LTOFF_FPTR32LSB,
  BFD_RELOC_IA64_LTOFF_FPTR64MSB,
  BFD_RELOC_IA64_LTOFF_FPTR64LSB,
  BFD_RELOC_IA64_SEGREL32MSB,
  BFD_RELOC_IA64_SEGREL32LSB,
  BFD_RELOC_IA64_SEGREL64MSB,
  BFD_RELOC_IA64_SEGREL64LSB,
  BFD_RELOC_IA64_SECREL32MSB,
  BFD_RELOC_IA64_SECREL32LSB,
  BFD_RELOC_IA64_SECREL64MSB,
  BFD_RELOC_IA64_SECREL64LSB,
  BFD_RELOC_IA64_REL32MSB,
  BFD_RELOC_IA64_REL32LSB,
  BFD_RELOC_IA64_REL64MSB,
  BFD_RELOC_IA64_REL64LSB,
  BFD_RELOC_IA64_LTV32MSB,
  BFD_RELOC_IA64_LTV32LSB,
  BFD_RELOC_IA64_LTV64MSB,
  BFD_RELOC_IA64_LTV64LSB,
  BFD_RELOC_IA64_IPLTMSB,
  BFD_RELOC_IA64_IPLTLSB,
  BFD_RELOC_IA64_COPY,
  BFD_RELOC_IA64_LTOFF22X,
  BFD_RELOC_IA64_LDXMOV,
  BFD_RELOC_IA64_TPREL14,
  BFD_RELOC_IA64_TPREL22,
  BFD_RELOC_IA64_TPREL64I,
  BFD_RELOC_IA64_TPREL64MSB,
  BFD_RELOC_IA64_TPREL64LSB,
  BFD_RELOC_IA64_LTOFF_TPREL22,
  BFD_RELOC_IA64_DTPMOD64MSB,
  BFD_RELOC_IA64_DTPMOD64LSB,
  BFD_RELOC_IA64_LTOFF_DTPMOD22,
  BFD_RELOC_IA64_DTPREL14,
  BFD_RELOC_IA64_DTPREL22,
  BFD_RELOC_IA64_DTPREL64I,
  BFD_RELOC_IA64_DTPREL32MSB,
  BFD_RELOC_IA64_DTPREL32LSB,
  BFD_RELOC_IA64_DTPREL64MSB,
  BFD_RELOC_IA64_DTPREL64LSB,
  BFD_RELOC_IA64_LTOFF_DTPREL22,



  BFD_RELOC_M68HC11_HI8,



  BFD_RELOC_M68HC11_LO8,



  BFD_RELOC_M68HC11_3B,






  BFD_RELOC_M68HC11_RL_JUMP,





  BFD_RELOC_M68HC11_RL_GROUP,





  BFD_RELOC_M68HC11_LO16,





  BFD_RELOC_M68HC11_PAGE,





  BFD_RELOC_M68HC11_24,



  BFD_RELOC_M68HC12_5B,


  BFD_RELOC_16C_NUM08,
  BFD_RELOC_16C_NUM08_C,
  BFD_RELOC_16C_NUM16,
  BFD_RELOC_16C_NUM16_C,
  BFD_RELOC_16C_NUM32,
  BFD_RELOC_16C_NUM32_C,
  BFD_RELOC_16C_DISP04,
  BFD_RELOC_16C_DISP04_C,
  BFD_RELOC_16C_DISP08,
  BFD_RELOC_16C_DISP08_C,
  BFD_RELOC_16C_DISP16,
  BFD_RELOC_16C_DISP16_C,
  BFD_RELOC_16C_DISP24,
  BFD_RELOC_16C_DISP24_C,
  BFD_RELOC_16C_DISP24a,
  BFD_RELOC_16C_DISP24a_C,
  BFD_RELOC_16C_REG04,
  BFD_RELOC_16C_REG04_C,
  BFD_RELOC_16C_REG04a,
  BFD_RELOC_16C_REG04a_C,
  BFD_RELOC_16C_REG14,
  BFD_RELOC_16C_REG14_C,
  BFD_RELOC_16C_REG16,
  BFD_RELOC_16C_REG16_C,
  BFD_RELOC_16C_REG20,
  BFD_RELOC_16C_REG20_C,
  BFD_RELOC_16C_ABS20,
  BFD_RELOC_16C_ABS20_C,
  BFD_RELOC_16C_ABS24,
  BFD_RELOC_16C_ABS24_C,
  BFD_RELOC_16C_IMM04,
  BFD_RELOC_16C_IMM04_C,
  BFD_RELOC_16C_IMM16,
  BFD_RELOC_16C_IMM16_C,
  BFD_RELOC_16C_IMM20,
  BFD_RELOC_16C_IMM20_C,
  BFD_RELOC_16C_IMM24,
  BFD_RELOC_16C_IMM24_C,
  BFD_RELOC_16C_IMM32,
  BFD_RELOC_16C_IMM32_C,


  BFD_RELOC_CRX_REL4,
  BFD_RELOC_CRX_REL8,
  BFD_RELOC_CRX_REL8_CMP,
  BFD_RELOC_CRX_REL16,
  BFD_RELOC_CRX_REL24,
  BFD_RELOC_CRX_REL32,
  BFD_RELOC_CRX_REGREL12,
  BFD_RELOC_CRX_REGREL22,
  BFD_RELOC_CRX_REGREL28,
  BFD_RELOC_CRX_REGREL32,
  BFD_RELOC_CRX_ABS16,
  BFD_RELOC_CRX_ABS32,
  BFD_RELOC_CRX_NUM8,
  BFD_RELOC_CRX_NUM16,
  BFD_RELOC_CRX_NUM32,
  BFD_RELOC_CRX_IMM16,
  BFD_RELOC_CRX_IMM32,
  BFD_RELOC_CRX_SWITCH8,
  BFD_RELOC_CRX_SWITCH16,
  BFD_RELOC_CRX_SWITCH32,



  BFD_RELOC_CRIS_BDISP8,
  BFD_RELOC_CRIS_UNSIGNED_5,
  BFD_RELOC_CRIS_SIGNED_6,
  BFD_RELOC_CRIS_UNSIGNED_6,
  BFD_RELOC_CRIS_SIGNED_8,
  BFD_RELOC_CRIS_UNSIGNED_8,
  BFD_RELOC_CRIS_SIGNED_16,
  BFD_RELOC_CRIS_UNSIGNED_16,
  BFD_RELOC_CRIS_LAPCQ_OFFSET,
  BFD_RELOC_CRIS_UNSIGNED_4,


  BFD_RELOC_CRIS_COPY,
  BFD_RELOC_CRIS_GLOB_DAT,
  BFD_RELOC_CRIS_JUMP_SLOT,
  BFD_RELOC_CRIS_RELATIVE,


  BFD_RELOC_CRIS_32_GOT,


  BFD_RELOC_CRIS_16_GOT,


  BFD_RELOC_CRIS_32_GOTPLT,


  BFD_RELOC_CRIS_16_GOTPLT,


  BFD_RELOC_CRIS_32_GOTREL,


  BFD_RELOC_CRIS_32_PLT_GOTREL,


  BFD_RELOC_CRIS_32_PLT_PCREL,


  BFD_RELOC_860_COPY,
  BFD_RELOC_860_GLOB_DAT,
  BFD_RELOC_860_JUMP_SLOT,
  BFD_RELOC_860_RELATIVE,
  BFD_RELOC_860_PC26,
  BFD_RELOC_860_PLT26,
  BFD_RELOC_860_PC16,
  BFD_RELOC_860_LOW0,
  BFD_RELOC_860_SPLIT0,
  BFD_RELOC_860_LOW1,
  BFD_RELOC_860_SPLIT1,
  BFD_RELOC_860_LOW2,
  BFD_RELOC_860_SPLIT2,
  BFD_RELOC_860_LOW3,
  BFD_RELOC_860_LOGOT0,
  BFD_RELOC_860_SPGOT0,
  BFD_RELOC_860_LOGOT1,
  BFD_RELOC_860_SPGOT1,
  BFD_RELOC_860_LOGOTOFF0,
  BFD_RELOC_860_SPGOTOFF0,
  BFD_RELOC_860_LOGOTOFF1,
  BFD_RELOC_860_SPGOTOFF1,
  BFD_RELOC_860_LOGOTOFF2,
  BFD_RELOC_860_LOGOTOFF3,
  BFD_RELOC_860_LOPC,
  BFD_RELOC_860_HIGHADJ,
  BFD_RELOC_860_HAGOT,
  BFD_RELOC_860_HAGOTOFF,
  BFD_RELOC_860_HAPC,
  BFD_RELOC_860_HIGH,
  BFD_RELOC_860_HIGOT,
  BFD_RELOC_860_HIGOTOFF,


  BFD_RELOC_OPENRISC_ABS_26,
  BFD_RELOC_OPENRISC_REL_26,


  BFD_RELOC_H8_DIR16A8,
  BFD_RELOC_H8_DIR16R8,
  BFD_RELOC_H8_DIR24A8,
  BFD_RELOC_H8_DIR24R8,
  BFD_RELOC_H8_DIR32A16,


  BFD_RELOC_XSTORMY16_REL_12,
  BFD_RELOC_XSTORMY16_12,
  BFD_RELOC_XSTORMY16_24,
  BFD_RELOC_XSTORMY16_FPTR16,


  BFD_RELOC_XC16X_PAG,
  BFD_RELOC_XC16X_POF,
  BFD_RELOC_XC16X_SEG,
  BFD_RELOC_XC16X_SOF,


  BFD_RELOC_VAX_GLOB_DAT,
  BFD_RELOC_VAX_JMP_SLOT,
  BFD_RELOC_VAX_RELATIVE,


  BFD_RELOC_MT_PC16,


  BFD_RELOC_MT_HI16,


  BFD_RELOC_MT_LO16,


  BFD_RELOC_MT_GNU_VTINHERIT,


  BFD_RELOC_MT_GNU_VTENTRY,


  BFD_RELOC_MT_PCINSN8,


  BFD_RELOC_MSP430_10_PCREL,
  BFD_RELOC_MSP430_16_PCREL,
  BFD_RELOC_MSP430_16,
  BFD_RELOC_MSP430_16_PCREL_BYTE,
  BFD_RELOC_MSP430_16_BYTE,
  BFD_RELOC_MSP430_2X_PCREL,
  BFD_RELOC_MSP430_RL_PCREL,


  BFD_RELOC_IQ2000_OFFSET_16,
  BFD_RELOC_IQ2000_OFFSET_21,
  BFD_RELOC_IQ2000_UHI16,




  BFD_RELOC_XTENSA_RTLD,


  BFD_RELOC_XTENSA_GLOB_DAT,
  BFD_RELOC_XTENSA_JMP_SLOT,
  BFD_RELOC_XTENSA_RELATIVE,



  BFD_RELOC_XTENSA_PLT,







  BFD_RELOC_XTENSA_DIFF8,
  BFD_RELOC_XTENSA_DIFF16,
  BFD_RELOC_XTENSA_DIFF32,





  BFD_RELOC_XTENSA_SLOT0_OP,
  BFD_RELOC_XTENSA_SLOT1_OP,
  BFD_RELOC_XTENSA_SLOT2_OP,
  BFD_RELOC_XTENSA_SLOT3_OP,
  BFD_RELOC_XTENSA_SLOT4_OP,
  BFD_RELOC_XTENSA_SLOT5_OP,
  BFD_RELOC_XTENSA_SLOT6_OP,
  BFD_RELOC_XTENSA_SLOT7_OP,
  BFD_RELOC_XTENSA_SLOT8_OP,
  BFD_RELOC_XTENSA_SLOT9_OP,
  BFD_RELOC_XTENSA_SLOT10_OP,
  BFD_RELOC_XTENSA_SLOT11_OP,
  BFD_RELOC_XTENSA_SLOT12_OP,
  BFD_RELOC_XTENSA_SLOT13_OP,
  BFD_RELOC_XTENSA_SLOT14_OP,



  BFD_RELOC_XTENSA_SLOT0_ALT,
  BFD_RELOC_XTENSA_SLOT1_ALT,
  BFD_RELOC_XTENSA_SLOT2_ALT,
  BFD_RELOC_XTENSA_SLOT3_ALT,
  BFD_RELOC_XTENSA_SLOT4_ALT,
  BFD_RELOC_XTENSA_SLOT5_ALT,
  BFD_RELOC_XTENSA_SLOT6_ALT,
  BFD_RELOC_XTENSA_SLOT7_ALT,
  BFD_RELOC_XTENSA_SLOT8_ALT,
  BFD_RELOC_XTENSA_SLOT9_ALT,
  BFD_RELOC_XTENSA_SLOT10_ALT,
  BFD_RELOC_XTENSA_SLOT11_ALT,
  BFD_RELOC_XTENSA_SLOT12_ALT,
  BFD_RELOC_XTENSA_SLOT13_ALT,
  BFD_RELOC_XTENSA_SLOT14_ALT,



  BFD_RELOC_XTENSA_OP0,
  BFD_RELOC_XTENSA_OP1,
  BFD_RELOC_XTENSA_OP2,




  BFD_RELOC_XTENSA_ASM_EXPAND,





  BFD_RELOC_XTENSA_ASM_SIMPLIFY,


  BFD_RELOC_Z80_DISP8,


  BFD_RELOC_Z8K_DISP7,


  BFD_RELOC_Z8K_CALLR,


  BFD_RELOC_Z8K_IMM4L,
  BFD_RELOC_UNUSED };
typedef enum bfd_reloc_code_real bfd_reloc_code_real_type;
reloc_howto_type *bfd_reloc_type_lookup
   (bfd *abfd, bfd_reloc_code_real_type code);

const char *bfd_get_reloc_code_name (bfd_reloc_code_real_type code);



typedef struct bfd_symbol
{
# 4312 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  struct bfd *the_bfd;



  const char *name;




  symvalue value;


#define BSF_NO_FLAGS 0x00



#define BSF_LOCAL 0x01



#define BSF_GLOBAL 0x02



#define BSF_EXPORT BSF_GLOBAL







#define BSF_DEBUGGING 0x08



#define BSF_FUNCTION 0x10


#define BSF_KEEP 0x20
#define BSF_KEEP_G 0x40



#define BSF_WEAK 0x80



#define BSF_SECTION_SYM 0x100



#define BSF_OLD_COMMON 0x200


#define BFD_FORT_COMM_DEFAULT_VALUE 0






#define BSF_NOT_AT_END 0x400


#define BSF_CONSTRUCTOR 0x800





#define BSF_WARNING 0x1000



#define BSF_INDIRECT 0x2000



#define BSF_FILE 0x4000


#define BSF_DYNAMIC 0x8000



#define BSF_OBJECT 0x10000




#define BSF_DEBUGGING_RELOC 0x20000


#define BSF_THREAD_LOCAL 0x40000

  flagword flags;




  struct bfd_section *section;


  union
    {
      void *p;
      bfd_vma i;
    }
  udata;
}
asymbol;

#define bfd_get_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_symtab_upper_bound, (abfd))


bfd_boolean bfd_is_local_label (bfd *abfd, asymbol *sym);

bfd_boolean bfd_is_local_label_name (bfd *abfd, const char *name);

#define bfd_is_local_label_name(abfd,name) BFD_SEND (abfd, _bfd_is_local_label_name, (abfd, name))


bfd_boolean bfd_is_target_special_symbol (bfd *abfd, asymbol *sym);

#define bfd_is_target_special_symbol(abfd,sym) BFD_SEND (abfd, _bfd_is_target_special_symbol, (abfd, sym))


#define bfd_canonicalize_symtab(abfd,location) BFD_SEND (abfd, _bfd_canonicalize_symtab, (abfd, location))


bfd_boolean bfd_set_symtab
   (bfd *abfd, asymbol **location, unsigned int count);

void bfd_print_symbol_vandf (bfd *abfd, void *file, asymbol *symbol);

#define bfd_make_empty_symbol(abfd) BFD_SEND (abfd, _bfd_make_empty_symbol, (abfd))


asymbol *_bfd_generic_make_empty_symbol (bfd *);

#define bfd_make_debug_symbol(abfd,ptr,size) BFD_SEND (abfd, _bfd_make_debug_symbol, (abfd, ptr, size))


int bfd_decode_symclass (asymbol *symbol);

bfd_boolean bfd_is_undefined_symclass (int symclass);

void bfd_symbol_info (asymbol *symbol, symbol_info *ret);

bfd_boolean bfd_copy_private_symbol_data
   (bfd *ibfd, asymbol *isym, bfd *obfd, asymbol *osym);

#define bfd_copy_private_symbol_data(ibfd,isymbol,obfd,osymbol) BFD_SEND (obfd, _bfd_copy_private_symbol_data, (ibfd, isymbol, obfd, osymbol))




struct bfd
{

  unsigned int id;


  const char *filename;


  const struct bfd_target *xvec;



  void *iostream;
  const struct bfd_iovec *iovec;



  bfd_boolean cacheable;




  bfd_boolean target_defaulted;



  struct bfd *lru_prev, *lru_next;



  ufile_ptr where;


  bfd_boolean opened_once;



  bfd_boolean mtime_set;


  long mtime;


  int ifd;


  bfd_format format;


  enum bfd_direction
    {
      no_direction = 0,
      read_direction = 1,
      write_direction = 2,
      both_direction = 3
    }
  direction;


  flagword flags;




  ufile_ptr origin;



  bfd_boolean output_has_begun;


  struct bfd_hash_table section_htab;


  struct bfd_section *sections;


  struct bfd_section *section_last;


  unsigned int section_count;



  bfd_vma start_address;


  unsigned int symcount;


  struct bfd_symbol **outsymbols;


  unsigned int dynsymcount;


  const struct bfd_arch_info *arch_info;


  bfd_boolean no_export;


  void *arelt_data;
  struct bfd *my_archive;
  struct bfd *next;
  struct bfd *archive_head;
  bfd_boolean has_armap;


  struct bfd *link_next;



  int archive_pass;


  union
    {
      struct aout_data_struct *aout_data;
      struct artdata *aout_ar_data;
      struct _oasys_data *oasys_obj_data;
      struct _oasys_ar_data *oasys_ar_data;
      struct coff_tdata *coff_obj_data;
      struct pe_tdata *pe_obj_data;
      struct xcoff_tdata *xcoff_obj_data;
      struct ecoff_tdata *ecoff_obj_data;
      struct ieee_data_struct *ieee_data;
      struct ieee_ar_data_struct *ieee_ar_data;
      struct srec_data_struct *srec_data;
      struct ihex_data_struct *ihex_data;
      struct tekhex_data_struct *tekhex_data;
      struct elf_obj_tdata *elf_obj_data;
      struct nlm_obj_tdata *nlm_obj_data;
      struct bout_data_struct *bout_data;
      struct mmo_data_struct *mmo_data;
      struct sun_core_struct *sun_core_data;
      struct sco5_core_struct *sco5_core_data;
      struct trad_core_struct *trad_core_data;
      struct som_data_struct *som_data;
      struct hpux_core_struct *hpux_core_data;
      struct hppabsd_core_struct *hppabsd_core_data;
      struct sgi_core_struct *sgi_core_data;
      struct lynx_core_struct *lynx_core_data;
      struct osf_core_struct *osf_core_data;
      struct cisco_core_struct *cisco_core_data;
      struct versados_data_struct *versados_data;
      struct netbsd_core_struct *netbsd_core_data;
      struct mach_o_data_struct *mach_o_data;
      struct mach_o_fat_data_struct *mach_o_fat_data;
      struct bfd_pef_data_struct *pef_data;
      struct bfd_pef_xlib_data_struct *pef_xlib_data;
      struct bfd_sym_data_struct *sym_data;
      void *any;
    }
  tdata;


  void *usrdata;




  void *memory;
};

typedef enum bfd_error
{
  bfd_error_no_error = 0,
  bfd_error_system_call,
  bfd_error_invalid_target,
  bfd_error_wrong_format,
  bfd_error_wrong_object_format,
  bfd_error_invalid_operation,
  bfd_error_no_memory,
  bfd_error_no_symbols,
  bfd_error_no_armap,
  bfd_error_no_more_archived_files,
  bfd_error_malformed_archive,
  bfd_error_file_not_recognized,
  bfd_error_file_ambiguously_recognized,
  bfd_error_no_contents,
  bfd_error_nonrepresentable_section,
  bfd_error_no_debug_section,
  bfd_error_bad_value,
  bfd_error_file_truncated,
  bfd_error_file_too_big,
  bfd_error_invalid_error_code
}
bfd_error_type;

bfd_error_type bfd_get_error (void);

void bfd_set_error (bfd_error_type error_tag);

const char *bfd_errmsg (bfd_error_type error_tag);

void bfd_perror (const char *message);

typedef void (*bfd_error_plugin_type) (const char *, ...);

bfd_error_plugin_type bfd_set_error_handler (bfd_error_plugin_type);

void bfd_set_error_program_name (const char *);

bfd_error_plugin_type bfd_get_error_handler (void);

long bfd_get_reloc_upper_bound (bfd *abfd, asection *sect);

long bfd_canonicalize_reloc
   (bfd *abfd, asection *sec, arelent **loc, asymbol **syms);

void bfd_set_reloc
   (bfd *abfd, asection *sec, arelent **rel, unsigned int count);

bfd_boolean bfd_set_file_flags (bfd *abfd, flagword flags);

int bfd_get_arch_size (bfd *abfd);

int bfd_get_sign_extend_vma (bfd *abfd);

bfd_boolean bfd_set_start_address (bfd *abfd, bfd_vma vma);

unsigned int bfd_get_gp_size (bfd *abfd);

void bfd_set_gp_size (bfd *abfd, unsigned int i);

bfd_vma bfd_scan_vma (const char *string, const char **end, int base);

bfd_boolean bfd_copy_private_header_data (bfd *ibfd, bfd *obfd);

#define bfd_copy_private_header_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_header_data, (ibfd, obfd))


bfd_boolean bfd_copy_private_bfd_data (bfd *ibfd, bfd *obfd);

#define bfd_copy_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_bfd_data, (ibfd, obfd))


bfd_boolean bfd_merge_private_bfd_data (bfd *ibfd, bfd *obfd);

#define bfd_merge_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_merge_private_bfd_data, (ibfd, obfd))


bfd_boolean bfd_set_private_flags (bfd *abfd, flagword flags);

#define bfd_set_private_flags(abfd,flags) BFD_SEND (abfd, _bfd_set_private_flags, (abfd, flags))

#define bfd_sizeof_headers(abfd,reloc) BFD_SEND (abfd, _bfd_sizeof_headers, (abfd, reloc))


#define bfd_find_nearest_line(abfd,sec,syms,off,file,func,line) BFD_SEND (abfd, _bfd_find_nearest_line, (abfd, sec, syms, off, file, func, line))



#define bfd_find_line(abfd,syms,sym,file,line) BFD_SEND (abfd, _bfd_find_line, (abfd, syms, sym, file, line))



#define bfd_find_inliner_info(abfd,file,func,line) BFD_SEND (abfd, _bfd_find_inliner_info, (abfd, file, func, line))



#define bfd_debug_info_start(abfd) BFD_SEND (abfd, _bfd_debug_info_start, (abfd))


#define bfd_debug_info_end(abfd) BFD_SEND (abfd, _bfd_debug_info_end, (abfd))


#define bfd_debug_info_accumulate(abfd,section) BFD_SEND (abfd, _bfd_debug_info_accumulate, (abfd, section))


#define bfd_stat_arch_elt(abfd,stat) BFD_SEND (abfd, _bfd_stat_arch_elt,(abfd, stat))


#define bfd_update_armap_timestamp(abfd) BFD_SEND (abfd, _bfd_update_armap_timestamp, (abfd))


#define bfd_set_arch_mach(abfd,arch,mach) BFD_SEND ( abfd, _bfd_set_arch_mach, (abfd, arch, mach))


#define bfd_relax_section(abfd,section,link_info,again) BFD_SEND (abfd, _bfd_relax_section, (abfd, section, link_info, again))


#define bfd_gc_sections(abfd,link_info) BFD_SEND (abfd, _bfd_gc_sections, (abfd, link_info))


#define bfd_merge_sections(abfd,link_info) BFD_SEND (abfd, _bfd_merge_sections, (abfd, link_info))


#define bfd_is_group_section(abfd,sec) BFD_SEND (abfd, _bfd_is_group_section, (abfd, sec))


#define bfd_discard_group(abfd,sec) BFD_SEND (abfd, _bfd_discard_group, (abfd, sec))


#define bfd_link_hash_table_create(abfd) BFD_SEND (abfd, _bfd_link_hash_table_create, (abfd))


#define bfd_link_hash_table_free(abfd,hash) BFD_SEND (abfd, _bfd_link_hash_table_free, (hash))


#define bfd_link_add_symbols(abfd,info) BFD_SEND (abfd, _bfd_link_add_symbols, (abfd, info))


#define bfd_link_just_syms(abfd,sec,info) BFD_SEND (abfd, _bfd_link_just_syms, (sec, info))


#define bfd_final_link(abfd,info) BFD_SEND (abfd, _bfd_final_link, (abfd, info))


#define bfd_free_cached_info(abfd) BFD_SEND (abfd, _bfd_free_cached_info, (abfd))


#define bfd_get_dynamic_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_symtab_upper_bound, (abfd))


#define bfd_print_private_bfd_data(abfd,file) BFD_SEND (abfd, _bfd_print_private_bfd_data, (abfd, file))


#define bfd_canonicalize_dynamic_symtab(abfd,asymbols) BFD_SEND (abfd, _bfd_canonicalize_dynamic_symtab, (abfd, asymbols))


#define bfd_get_synthetic_symtab(abfd,count,syms,dyncount,dynsyms,ret) BFD_SEND (abfd, _bfd_get_synthetic_symtab, (abfd, count, syms, dyncount, dynsyms, ret))



#define bfd_get_dynamic_reloc_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_reloc_upper_bound, (abfd))


#define bfd_canonicalize_dynamic_reloc(abfd,arels,asyms) BFD_SEND (abfd, _bfd_canonicalize_dynamic_reloc, (abfd, arels, asyms))


extern bfd_byte *bfd_get_relocated_section_contents
  (bfd *, struct bfd_link_info *, struct bfd_link_order *, bfd_byte *,
   bfd_boolean, asymbol **);

bfd_boolean bfd_alt_mach_code (bfd *abfd, int alternative);

struct bfd_preserve
{
  void *marker;
  void *tdata;
  flagword flags;
  const struct bfd_arch_info *arch_info;
  struct bfd_section *sections;
  struct bfd_section *section_last;
  unsigned int section_count;
  struct bfd_hash_table section_htab;
};

bfd_boolean bfd_preserve_save (bfd *, struct bfd_preserve *);

void bfd_preserve_restore (bfd *, struct bfd_preserve *);

void bfd_preserve_finish (bfd *, struct bfd_preserve *);


symindex bfd_get_next_mapent
   (bfd *abfd, symindex previous, carsym **sym);

bfd_boolean bfd_set_archive_head (bfd *output, bfd *new_head);

bfd *bfd_openr_next_archived_file (bfd *archive, bfd *previous);


const char *bfd_core_file_failing_command (bfd *abfd);

int bfd_core_file_failing_signal (bfd *abfd);

bfd_boolean core_file_matches_executable_p
   (bfd *core_bfd, bfd *exec_bfd);

bfd_boolean generic_core_file_matches_executable_p
   (bfd *core_bfd, bfd *exec_bfd);


#define BFD_SEND(bfd,message,arglist) ((*((bfd)->xvec->message)) arglist)
# 4857 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
#define BFD_SEND_FMT(bfd,message,arglist) (((bfd)->xvec->message[(int) ((bfd)->format)]) arglist)
# 4868 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
enum bfd_flavour
{
  bfd_target_unknown_flavour,
  bfd_target_aout_flavour,
  bfd_target_coff_flavour,
  bfd_target_ecoff_flavour,
  bfd_target_xcoff_flavour,
  bfd_target_elf_flavour,
  bfd_target_ieee_flavour,
  bfd_target_nlm_flavour,
  bfd_target_oasys_flavour,
  bfd_target_tekhex_flavour,
  bfd_target_srec_flavour,
  bfd_target_ihex_flavour,
  bfd_target_som_flavour,
  bfd_target_os9k_flavour,
  bfd_target_versados_flavour,
  bfd_target_msdos_flavour,
  bfd_target_ovax_flavour,
  bfd_target_evax_flavour,
  bfd_target_mmo_flavour,
  bfd_target_mach_o_flavour,
  bfd_target_pef_flavour,
  bfd_target_pef_xlib_flavour,
  bfd_target_sym_flavour
};

enum bfd_endian { BFD_ENDIAN_BIG, BFD_ENDIAN_LITTLE, BFD_ENDIAN_UNKNOWN };


typedef struct bfd_link_info _bfd_link_info;

typedef struct bfd_target
{

  char *name;



  enum bfd_flavour flavour;


  enum bfd_endian byteorder;


  enum bfd_endian header_byteorder;



  flagword object_flags;



  flagword section_flags;



  char symbol_leading_char;


  char ar_pad_char;


  unsigned short ar_max_namelen;




  bfd_uint64_t (*bfd_getx64) (const void *);
  bfd_int64_t (*bfd_getx_signed_64) (const void *);
  void (*bfd_putx64) (bfd_uint64_t, void *);
  bfd_vma (*bfd_getx32) (const void *);
  bfd_signed_vma (*bfd_getx_signed_32) (const void *);
  void (*bfd_putx32) (bfd_vma, void *);
  bfd_vma (*bfd_getx16) (const void *);
  bfd_signed_vma (*bfd_getx_signed_16) (const void *);
  void (*bfd_putx16) (bfd_vma, void *);


  bfd_uint64_t (*bfd_h_getx64) (const void *);
  bfd_int64_t (*bfd_h_getx_signed_64) (const void *);
  void (*bfd_h_putx64) (bfd_uint64_t, void *);
  bfd_vma (*bfd_h_getx32) (const void *);
  bfd_signed_vma (*bfd_h_getx_signed_32) (const void *);
  void (*bfd_h_putx32) (bfd_vma, void *);
  bfd_vma (*bfd_h_getx16) (const void *);
  bfd_signed_vma (*bfd_h_getx_signed_16) (const void *);
  void (*bfd_h_putx16) (bfd_vma, void *);





  const struct bfd_target *(*_bfd_check_format[bfd_type_end]) (bfd *);


  bfd_boolean (*_bfd_set_format[bfd_type_end]) (bfd *);


  bfd_boolean (*_bfd_write_contents[bfd_type_end]) (bfd *);



#define BFD_JUMP_TABLE_GENERIC(NAME) NAME ##_close_and_cleanup, NAME ##_bfd_free_cached_info, NAME ##_new_section_hook, NAME ##_get_section_contents, NAME ##_get_section_contents_in_window







  bfd_boolean (*_close_and_cleanup) (bfd *);

  bfd_boolean (*_bfd_free_cached_info) (bfd *);

  bfd_boolean (*_new_section_hook) (bfd *, sec_ptr);

  bfd_boolean (*_bfd_get_section_contents)
    (bfd *, sec_ptr, void *, file_ptr, bfd_size_type);
  bfd_boolean (*_bfd_get_section_contents_in_window)
    (bfd *, sec_ptr, bfd_window *, file_ptr, bfd_size_type);


#define BFD_JUMP_TABLE_COPY(NAME) NAME ##_bfd_copy_private_bfd_data, NAME ##_bfd_merge_private_bfd_data, _bfd_generic_init_private_section_data, NAME ##_bfd_copy_private_section_data, NAME ##_bfd_copy_private_symbol_data, NAME ##_bfd_copy_private_header_data, NAME ##_bfd_set_private_flags, NAME ##_bfd_print_private_bfd_data
# 5003 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_bfd_copy_private_bfd_data) (bfd *, bfd *);


  bfd_boolean (*_bfd_merge_private_bfd_data) (bfd *, bfd *);


#define bfd_init_private_section_data(ibfd,isec,obfd,osec,link_info) BFD_SEND (obfd, _bfd_init_private_section_data, (ibfd, isec, obfd, osec, link_info))

  bfd_boolean (*_bfd_init_private_section_data)
    (bfd *, sec_ptr, bfd *, sec_ptr, struct bfd_link_info *);


  bfd_boolean (*_bfd_copy_private_section_data)
    (bfd *, sec_ptr, bfd *, sec_ptr);


  bfd_boolean (*_bfd_copy_private_symbol_data)
    (bfd *, asymbol *, bfd *, asymbol *);


  bfd_boolean (*_bfd_copy_private_header_data)
    (bfd *, bfd *);

  bfd_boolean (*_bfd_set_private_flags) (bfd *, flagword);


  bfd_boolean (*_bfd_print_private_bfd_data) (bfd *, void *);


#define BFD_JUMP_TABLE_CORE(NAME) NAME ##_core_file_failing_command, NAME ##_core_file_failing_signal, NAME ##_core_file_matches_executable_p




  char * (*_core_file_failing_command) (bfd *);
  int (*_core_file_failing_signal) (bfd *);
  bfd_boolean (*_core_file_matches_executable_p) (bfd *, bfd *);


#define BFD_JUMP_TABLE_ARCHIVE(NAME) NAME ##_slurp_armap, NAME ##_slurp_extended_name_table, NAME ##_construct_extended_name_table, NAME ##_truncate_arname, NAME ##_write_armap, NAME ##_read_ar_hdr, NAME ##_openr_next_archived_file, NAME ##_get_elt_at_index, NAME ##_generic_stat_arch_elt, NAME ##_update_armap_timestamp
# 5054 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  bfd_boolean (*_bfd_slurp_armap) (bfd *);
  bfd_boolean (*_bfd_slurp_extended_name_table) (bfd *);
  bfd_boolean (*_bfd_construct_extended_name_table)
    (bfd *, char **, bfd_size_type *, const char **);
  void (*_bfd_truncate_arname) (bfd *, const char *, char *);
  bfd_boolean (*write_armap)
    (bfd *, unsigned int, struct orl *, unsigned int, int);
  void * (*_bfd_read_ar_hdr_fn) (bfd *);
  bfd * (*openr_next_archived_file) (bfd *, bfd *);
#define bfd_get_elt_at_index(b,i) BFD_SEND (b, _bfd_get_elt_at_index, (b,i))
  bfd * (*_bfd_get_elt_at_index) (bfd *, symindex);
  int (*_bfd_stat_arch_elt) (bfd *, struct stat *);
  bfd_boolean (*_bfd_update_armap_timestamp) (bfd *);


#define BFD_JUMP_TABLE_SYMBOLS(NAME) NAME ##_get_symtab_upper_bound, NAME ##_canonicalize_symtab, NAME ##_make_empty_symbol, NAME ##_print_symbol, NAME ##_get_symbol_info, NAME ##_bfd_is_local_label_name, NAME ##_bfd_is_target_special_symbol, NAME ##_get_lineno, NAME ##_find_nearest_line, _bfd_generic_find_line, NAME ##_find_inliner_info, NAME ##_bfd_make_debug_symbol, NAME ##_read_minisymbols, NAME ##_minisymbol_to_symbol
# 5085 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  long (*_bfd_get_symtab_upper_bound) (bfd *);
  long (*_bfd_canonicalize_symtab)
    (bfd *, struct bfd_symbol **);
  struct bfd_symbol *
              (*_bfd_make_empty_symbol) (bfd *);
  void (*_bfd_print_symbol)
    (bfd *, void *, struct bfd_symbol *, bfd_print_symbol_type);
#define bfd_print_symbol(b,p,s,e) BFD_SEND (b, _bfd_print_symbol, (b,p,s,e))
  void (*_bfd_get_symbol_info)
    (bfd *, struct bfd_symbol *, symbol_info *);
#define bfd_get_symbol_info(b,p,e) BFD_SEND (b, _bfd_get_symbol_info, (b,p,e))
  bfd_boolean (*_bfd_is_local_label_name) (bfd *, const char *);
  bfd_boolean (*_bfd_is_target_special_symbol) (bfd *, asymbol *);
  alent * (*_get_lineno) (bfd *, struct bfd_symbol *);
  bfd_boolean (*_bfd_find_nearest_line)
    (bfd *, struct bfd_section *, struct bfd_symbol **, bfd_vma,
     const char **, const char **, unsigned int *);
  bfd_boolean (*_bfd_find_line)
    (bfd *, struct bfd_symbol **, struct bfd_symbol *,
     const char **, unsigned int *);
  bfd_boolean (*_bfd_find_inliner_info)
    (bfd *, const char **, const char **, unsigned int *);



  asymbol * (*_bfd_make_debug_symbol)
    (bfd *, void *, unsigned long size);
#define bfd_read_minisymbols(b,d,m,s) BFD_SEND (b, _read_minisymbols, (b, d, m, s))

  long (*_read_minisymbols)
    (bfd *, bfd_boolean, void **, unsigned int *);
#define bfd_minisymbol_to_symbol(b,d,m,f) BFD_SEND (b, _minisymbol_to_symbol, (b, d, m, f))

  asymbol * (*_minisymbol_to_symbol)
    (bfd *, bfd_boolean, const void *, asymbol *);


#define BFD_JUMP_TABLE_RELOCS(NAME) NAME ##_get_reloc_upper_bound, NAME ##_canonicalize_reloc, NAME ##_bfd_reloc_type_lookup




  long (*_get_reloc_upper_bound) (bfd *, sec_ptr);
  long (*_bfd_canonicalize_reloc)
    (bfd *, sec_ptr, arelent **, struct bfd_symbol **);

  reloc_howto_type *
              (*reloc_type_lookup) (bfd *, bfd_reloc_code_real_type);


#define BFD_JUMP_TABLE_WRITE(NAME) NAME ##_set_arch_mach, NAME ##_set_section_contents



  bfd_boolean (*_bfd_set_arch_mach)
    (bfd *, enum bfd_architecture, unsigned long);
  bfd_boolean (*_bfd_set_section_contents)
    (bfd *, sec_ptr, const void *, file_ptr, bfd_size_type);


#define BFD_JUMP_TABLE_LINK(NAME) NAME ##_sizeof_headers, NAME ##_bfd_get_relocated_section_contents, NAME ##_bfd_relax_section, NAME ##_bfd_link_hash_table_create, NAME ##_bfd_link_hash_table_free, NAME ##_bfd_link_add_symbols, NAME ##_bfd_link_just_syms, NAME ##_bfd_final_link, NAME ##_bfd_link_split_section, NAME ##_bfd_gc_sections, NAME ##_bfd_merge_sections, NAME ##_bfd_is_group_section, NAME ##_bfd_discard_group, NAME ##_section_already_linked
# 5161 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 3 4
  int (*_bfd_sizeof_headers) (bfd *, bfd_boolean);
  bfd_byte * (*_bfd_get_relocated_section_contents)
    (bfd *, struct bfd_link_info *, struct bfd_link_order *,
     bfd_byte *, bfd_boolean, struct bfd_symbol **);

  bfd_boolean (*_bfd_relax_section)
    (bfd *, struct bfd_section *, struct bfd_link_info *, bfd_boolean *);



  struct bfd_link_hash_table *
              (*_bfd_link_hash_table_create) (bfd *);


  void (*_bfd_link_hash_table_free) (struct bfd_link_hash_table *);


  bfd_boolean (*_bfd_link_add_symbols) (bfd *, struct bfd_link_info *);


  void (*_bfd_link_just_syms) (asection *, struct bfd_link_info *);



  bfd_boolean (*_bfd_final_link) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_link_split_section) (bfd *, struct bfd_section *);


  bfd_boolean (*_bfd_gc_sections) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_merge_sections) (bfd *, struct bfd_link_info *);


  bfd_boolean (*_bfd_is_group_section) (bfd *, const struct bfd_section *);


  bfd_boolean (*_bfd_discard_group) (bfd *, struct bfd_section *);



  void (*_section_already_linked) (bfd *, struct bfd_section *);


#define BFD_JUMP_TABLE_DYNAMIC(NAME) NAME ##_get_dynamic_symtab_upper_bound, NAME ##_canonicalize_dynamic_symtab, NAME ##_get_synthetic_symtab, NAME ##_get_dynamic_reloc_upper_bound, NAME ##_canonicalize_dynamic_reloc







  long (*_bfd_get_dynamic_symtab_upper_bound) (bfd *);

  long (*_bfd_canonicalize_dynamic_symtab)
    (bfd *, struct bfd_symbol **);

  long (*_bfd_get_synthetic_symtab)
    (bfd *, long, struct bfd_symbol **, long, struct bfd_symbol **,
     struct bfd_symbol **);

  long (*_bfd_get_dynamic_reloc_upper_bound) (bfd *);

  long (*_bfd_canonicalize_dynamic_reloc)
    (bfd *, arelent **, struct bfd_symbol **);


  const struct bfd_target * alternative_target;



  const void *backend_data;

} bfd_target;

bfd_boolean bfd_set_default_target (const char *name);

const bfd_target *bfd_find_target (const char *target_name, bfd *abfd);

const char ** bfd_target_list (void);

const bfd_target *bfd_search_for_target
   (int (*search_func) (const bfd_target *, void *),
    void *);


bfd_boolean bfd_check_format (bfd *abfd, bfd_format format);

bfd_boolean bfd_check_format_matches
   (bfd *abfd, bfd_format format, char ***matching);

bfd_boolean bfd_set_format (bfd *abfd, bfd_format format);

const char *bfd_format_string (bfd_format format);


bfd_boolean bfd_link_split_section (bfd *abfd, asection *sec);

#define bfd_link_split_section(abfd,sec) BFD_SEND (abfd, _bfd_link_split_section, (abfd, sec))


void bfd_section_already_linked (bfd *abfd, asection *sec);

#define bfd_section_already_linked(abfd,sec) BFD_SEND (abfd, _section_already_linked, (abfd, sec))



bfd_byte *bfd_simple_get_relocated_section_contents
   (bfd *abfd, asection *sec, bfd_byte *outbuf, asymbol **symbol_table);







static inline bfd_vma bfd_getl16 (const void *p) {
  const bfd_byte *addr = p;
  return (addr[1] << 8) | addr[0];
}

static inline bfd_vma bfd_getb16 (const void *p) {
  const bfd_byte *addr = p;
  return (addr[0] << 8) | addr[1];
}


static inline bfd_vma bfd_getb32 (const void *p) {
  const bfd_byte *addr = p;
  unsigned long v;

  v = (unsigned long) addr[0] << 24;
  v |= (unsigned long) addr[1] << 16;
  v |= (unsigned long) addr[2] << 8;
  v |= (unsigned long) addr[3];
  return v;
}

static inline bfd_vma bfd_getl32 (const void *p) {
  const bfd_byte *addr = p;
  unsigned long v;

  v = (unsigned long) addr[0];
  v |= (unsigned long) addr[1] << 8;
  v |= (unsigned long) addr[2] << 16;
  v |= (unsigned long) addr[3] << 24;
  return v;
}
#define CONST_STRNEQ(STR1,STR2) (strncmp ((STR1), (STR2), sizeof (STR2) - 1) == 0)
#define opcodes_error_handler _bfd_error_handler
# 37 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 2 3 4

#define bfd_zalloc calloc
#define bfd_malloc malloc
#define xmalloc malloc

  typedef int (*fprintf_ftype) (void *, const char*, ...) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__nonnull__ (2)));

enum dis_insn_type
{
  dis_noninsn,
  dis_nonbranch,
  dis_branch,
  dis_condbranch,
  dis_jsr,
  dis_condjsr,
  dis_dref,
  dis_dref2
};
# 66 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
typedef struct disassemble_info
{
  fprintf_ftype fprintf_func;
  void *stream;
  void *application_data;





  enum bfd_flavour flavour;

  enum bfd_architecture arch;

  unsigned long mach;

  enum bfd_endian endian;

  enum bfd_endian endian_code;




  void *insn_sets;




  asection *section;






  asymbol **symbols;

  int num_symbols;



  asymbol **symtab;
  int symtab_pos;
  int symtab_size;




  unsigned long flags;


#define INSN_HAS_RELOC (1LL << 31)

#define DISASSEMBLE_DATA (1LL << 30)


#define USER_SPECIFIED_MACHINE_TYPE (1LL << 29)


  void *private_data;






  int (*read_memory_func)
    (bfd_vma memaddr, bfd_byte *myaddr, unsigned int length,
     struct disassemble_info *dinfo);





  void (*memory_error_func)
    (int status, bfd_vma memaddr, struct disassemble_info *dinfo);


  void (*print_address_func)
    (bfd_vma addr, struct disassemble_info *dinfo);
# 154 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  int (* symbol_at_address_func)
    (bfd_vma addr, struct disassemble_info *dinfo);




  bfd_boolean (* symbol_is_valid)
    (asymbol *, struct disassemble_info *dinfo);


  bfd_byte *buffer;
  bfd_vma buffer_vma;
  unsigned int buffer_length;





  int bytes_per_line;






  int bytes_per_chunk;
  enum bfd_endian display_endian;



  unsigned int octets_per_byte;



  unsigned int skip_zeroes;







  unsigned int skip_zeroes_at_end;


  bfd_boolean disassembler_needs_relocs;
# 208 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
  char insn_info_valid;
  char branch_delay_insns;

  char data_size;
  enum dis_insn_type insn_type;
  bfd_vma target;

  bfd_vma target2;


  char * disassembler_options;







  bfd_vma stop_vma;

} disassemble_info;





typedef struct
{
  const char **name;
  const char **description;
} disasm_options_t;




typedef int (*disassembler_ftype) (bfd_vma, disassemble_info *);

extern int print_insn_aarch64 (bfd_vma, disassemble_info *);
extern int print_insn_alpha (bfd_vma, disassemble_info *);
extern int print_insn_avr (bfd_vma, disassemble_info *);
extern int print_insn_bfin (bfd_vma, disassemble_info *);
extern int print_insn_big_arm (bfd_vma, disassemble_info *);
extern int print_insn_big_mips (bfd_vma, disassemble_info *);
extern int print_insn_big_nios2 (bfd_vma, disassemble_info *);
extern int print_insn_big_powerpc (bfd_vma, disassemble_info *);
extern int print_insn_big_score (bfd_vma, disassemble_info *);
extern int print_insn_cr16 (bfd_vma, disassemble_info *);
extern int print_insn_crx (bfd_vma, disassemble_info *);
extern int print_insn_d10v (bfd_vma, disassemble_info *);
extern int print_insn_d30v (bfd_vma, disassemble_info *);
extern int print_insn_dlx (bfd_vma, disassemble_info *);
extern int print_insn_epiphany (bfd_vma, disassemble_info *);
extern int print_insn_fr30 (bfd_vma, disassemble_info *);
extern int print_insn_frv (bfd_vma, disassemble_info *);
extern int print_insn_ft32 (bfd_vma, disassemble_info *);
extern int print_insn_h8300 (bfd_vma, disassemble_info *);
extern int print_insn_h8300h (bfd_vma, disassemble_info *);
extern int print_insn_h8300s (bfd_vma, disassemble_info *);
extern int print_insn_h8500 (bfd_vma, disassemble_info *);
extern int print_insn_lanai (bfd_vma, disassemble_info *);
extern int print_insn_hppa (bfd_vma, disassemble_info *);
extern int print_insn_i370 (bfd_vma, disassemble_info *);
extern int print_insn_i386 (bfd_vma, disassemble_info *);
extern int print_insn_i386_att (bfd_vma, disassemble_info *);
extern int print_insn_i386_intel (bfd_vma, disassemble_info *);
extern int print_insn_i860 (bfd_vma, disassemble_info *);
extern int print_insn_i960 (bfd_vma, disassemble_info *);
extern int print_insn_ia64 (bfd_vma, disassemble_info *);
extern int print_insn_ip2k (bfd_vma, disassemble_info *);
extern int print_insn_iq2000 (bfd_vma, disassemble_info *);
extern int print_insn_little_arm (bfd_vma, disassemble_info *);
extern int print_insn_little_mips (bfd_vma, disassemble_info *);
extern int print_insn_little_nios2 (bfd_vma, disassemble_info *);
extern int print_insn_little_powerpc (bfd_vma, disassemble_info *);
extern int print_insn_riscv (bfd_vma, disassemble_info *);
extern int print_insn_little_score (bfd_vma, disassemble_info *);
extern int print_insn_lm32 (bfd_vma, disassemble_info *);
extern int print_insn_m32c (bfd_vma, disassemble_info *);
extern int print_insn_m32r (bfd_vma, disassemble_info *);
extern int print_insn_m68hc11 (bfd_vma, disassemble_info *);
extern int print_insn_m68hc12 (bfd_vma, disassemble_info *);
extern int print_insn_m9s12x (bfd_vma, disassemble_info *);
extern int print_insn_m9s12xg (bfd_vma, disassemble_info *);
extern int print_insn_m68k (bfd_vma, disassemble_info *);
extern int print_insn_m88k (bfd_vma, disassemble_info *);
extern int print_insn_mcore (bfd_vma, disassemble_info *);
extern int print_insn_mep (bfd_vma, disassemble_info *);
extern int print_insn_metag (bfd_vma, disassemble_info *);
extern int print_insn_microblaze (bfd_vma, disassemble_info *);
extern int print_insn_mmix (bfd_vma, disassemble_info *);
extern int print_insn_mn10200 (bfd_vma, disassemble_info *);
extern int print_insn_mn10300 (bfd_vma, disassemble_info *);
extern int print_insn_moxie (bfd_vma, disassemble_info *);
extern int print_insn_msp430 (bfd_vma, disassemble_info *);
extern int print_insn_mt (bfd_vma, disassemble_info *);
extern int print_insn_nds32 (bfd_vma, disassemble_info *);
extern int print_insn_ns32k (bfd_vma, disassemble_info *);
extern int print_insn_or1k (bfd_vma, disassemble_info *);
extern int print_insn_pdp11 (bfd_vma, disassemble_info *);
extern int print_insn_pj (bfd_vma, disassemble_info *);
extern int print_insn_pru (bfd_vma, disassemble_info *);
extern int print_insn_rs6000 (bfd_vma, disassemble_info *);
extern int print_insn_s390 (bfd_vma, disassemble_info *);
extern int print_insn_sh (bfd_vma, disassemble_info *);
extern int print_insn_sh64 (bfd_vma, disassemble_info *);
extern int print_insn_sh64x_media (bfd_vma, disassemble_info *);
extern int print_insn_sparc (bfd_vma, disassemble_info *);
extern int print_insn_spu (bfd_vma, disassemble_info *);
extern int print_insn_tic30 (bfd_vma, disassemble_info *);
extern int print_insn_tic4x (bfd_vma, disassemble_info *);
extern int print_insn_tic54x (bfd_vma, disassemble_info *);
extern int print_insn_tic6x (bfd_vma, disassemble_info *);
extern int print_insn_tic80 (bfd_vma, disassemble_info *);
extern int print_insn_tilegx (bfd_vma, disassemble_info *);
extern int print_insn_tilepro (bfd_vma, disassemble_info *);
extern int print_insn_v850 (bfd_vma, disassemble_info *);
extern int print_insn_vax (bfd_vma, disassemble_info *);
extern int print_insn_visium (bfd_vma, disassemble_info *);
extern int print_insn_w65 (bfd_vma, disassemble_info *);
extern int print_insn_xc16x (bfd_vma, disassemble_info *);
extern int print_insn_xgate (bfd_vma, disassemble_info *);
extern int print_insn_xstormy16 (bfd_vma, disassemble_info *);
extern int print_insn_xtensa (bfd_vma, disassemble_info *);
extern int print_insn_z80 (bfd_vma, disassemble_info *);
extern int print_insn_z8001 (bfd_vma, disassemble_info *);
extern int print_insn_z8002 (bfd_vma, disassemble_info *);
extern int print_insn_rx (bfd_vma, disassemble_info *);
extern int print_insn_rl78 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g10 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g13 (bfd_vma, disassemble_info *);
extern int print_insn_rl78_g14 (bfd_vma, disassemble_info *);

extern disassembler_ftype arc_get_disassembler (bfd *);
extern disassembler_ftype cris_get_disassembler (bfd *);
extern disassembler_ftype rl78_get_disassembler (bfd *);

extern void print_aarch64_disassembler_options (FILE *);
extern void print_i386_disassembler_options (FILE *);
extern void print_mips_disassembler_options (FILE *);
extern void print_ppc_disassembler_options (FILE *);
extern void print_riscv_disassembler_options (FILE *);
extern void print_arm_disassembler_options (FILE *);
extern void print_arc_disassembler_options (FILE *);
extern void print_s390_disassembler_options (FILE *);
extern bfd_boolean aarch64_symbol_is_valid (asymbol *, struct disassemble_info *);
extern bfd_boolean arm_symbol_is_valid (asymbol *, struct disassemble_info *);
extern void disassemble_init_powerpc (struct disassemble_info *);
extern void disassemble_init_s390 (struct disassemble_info *);
extern const disasm_options_t *disassembler_options_powerpc (void);
extern const disasm_options_t *disassembler_options_arm (void);
extern const disasm_options_t *disassembler_options_s390 (void);


extern disassembler_ftype disassembler (bfd *);



extern void disassemble_init_for_target (struct disassemble_info * dinfo);


extern void disassembler_usage (FILE *);


extern char *remove_whitespace_and_extra_commas (char *);



extern int disassembler_options_cmp (const char *, const char *);


static inline char *
next_disassembler_option (char *options)
{
  char *opt = strchr (options, ',');
  if (opt != ((void *)0))
    opt++;
  return opt;
}


#define FOR_EACH_DISASSEMBLER_OPTION(OPT,OPTIONS) for ((OPT) = (OPTIONS); (OPT) != NULL; (OPT) = next_disassembler_option (OPT))
# 399 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
extern int buffer_read_memory
  (bfd_vma, bfd_byte *, unsigned int, struct disassemble_info *);



extern void perror_memory (int, bfd_vma, struct disassemble_info *);





extern void generic_print_address
  (bfd_vma, struct disassemble_info *);


extern int generic_symbol_at_address
  (bfd_vma, struct disassemble_info *);


extern bfd_boolean generic_symbol_is_valid
  (asymbol *, struct disassemble_info *);



extern void init_disassemble_info (struct disassemble_info *dinfo, void *stream,
       fprintf_ftype fprintf_func);

extern int print_insn_tricore (bfd_vma memaddr, struct disassemble_info *info);


#define INIT_DISASSEMBLE_INFO(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))

#define INIT_DISASSEMBLE_INFO_NO_ARCH(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))


#define DECLARE_GENERIC_FPRINTF_FUNC() static int generic_fprintf_func(void *stream, const char *format, ...) { int ret; va_list ap; if (!buf_global || !format) { return 0; } va_start (ap, format); ret = r_strbuf_vappendf (buf_global, format, ap); va_end (ap); return ret; }
# 447 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/disas-asm.h" 3 4
#define DECLARE_GENERIC_PRINT_ADDRESS_FUNC() static void generic_print_address_func(bfd_vma address, struct disassemble_info *info) { if (!buf_global) { return; } r_strbuf_appendf (buf_global, "0x%08"PFMT64x, (ut64)address); }
# 23 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
#define LIBIBERTY_H 
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
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
# 260 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
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
# 46 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 2 3 4

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
# 48 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 2 3 4







extern void unlock_stream (FILE *);





extern void unlock_std_streams (void);





extern FILE *fopen_unlocked (const char *, const char *);
extern FILE *fdopen_unlocked (int, const char *);
extern FILE *freopen_unlocked (const char *, const char *, FILE *);




extern char **buildargv (const char *) __attribute__ ((__malloc__));



extern void freeargv (char **);




extern char **dupargv (char **) __attribute__ ((__malloc__));



extern void expandargv (int *, char ***);
# 106 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
#define basename basename_cannot_be_used_without_a_prototype





extern const char *lbasename (const char *);



extern char *lrealpath (const char *);





extern char *concat (const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__sentinel__));
# 131 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern char *reconcat (char *, const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__sentinel__));





extern unsigned long concat_length (const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy (char *, const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy2 (const char *, ...) __attribute__ ((__sentinel__));



extern char *libiberty_concat_ptr;





#define ACONCAT(ACONCAT_PARAMS) (libiberty_concat_ptr = (char *) alloca (concat_length ACONCAT_PARAMS + 1), concat_copy2 ACONCAT_PARAMS)





extern int fdmatch (int fd1, int fd2);
# 179 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern char * getpwd (void);
# 192 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern long get_run_time (void);




extern char *make_relative_prefix (const char *, const char *,
                                   const char *) __attribute__ ((__malloc__));



extern char *choose_temp_base (void) __attribute__ ((__malloc__));



extern char *make_temp_file (const char *) __attribute__ ((__malloc__));



extern int unlink_if_ordinary (const char *);



extern const char *spaces (int count);




extern int errno_max (void);




extern const char *strerrno (int);



extern int strtoerrno (const char *);



extern char *xstrerror (int);




extern int signo_max (void);
# 249 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *strsigno (int);



extern int strtosigno (const char *);



extern int xatexit (void (*fn) (void));



extern void xexit (int status) __attribute__ ((__noreturn__));



extern void xmalloc_set_program_name (const char *);


extern void xmalloc_failed (size_t) __attribute__ ((__noreturn__));





extern void *malloc (size_t) __attribute__ ((__malloc__));





extern void *xrealloc (void *, size_t);




extern void *xcalloc (size_t, size_t) __attribute__ ((__malloc__));



extern char *xstrdup (const char *) __attribute__ ((__malloc__));



extern char *xstrndup (const char *, size_t) __attribute__ ((__malloc__));



extern void *xmemdup (const void *, size_t, size_t) __attribute__ ((__malloc__));


extern double physmem_total (void);
extern double physmem_available (void);
# 317 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
#define XNEW(T) ((T *) xmalloc (sizeof (T)))
#define XCNEW(T) ((T *) xcalloc (1, sizeof (T)))
#define XDELETE(P) free ((void*) (P))



#define XNEWVEC(T,N) ((T *) xmalloc (sizeof (T) * (N)))
#define XCNEWVEC(T,N) ((T *) xcalloc ((N), sizeof (T)))
#define XRESIZEVEC(T,P,N) ((T *) xrealloc ((void *) (P), sizeof (T) * (N)))
#define XDELETEVEC(P) free ((void*) (P))



#define XNEWVAR(T,S) ((T *) xmalloc ((S)))
#define XCNEWVAR(T,S) ((T *) xcalloc (1, (S)))
#define XRESIZEVAR(T,P,S) ((T *) xrealloc ((P), (S)))



#define XOBNEW(O,T) ((T *) obstack_alloc ((O), sizeof (T)))
#define XOBFINISH(O,T) ((T) obstack_finish ((O)))



#define _hex_array_size 256
#define _hex_bad 99
extern const unsigned char _hex_value[256];
extern void hex_init (void);
#define hex_p(c) (hex_value (c) != _hex_bad)


#define hex_value(c) ((unsigned int) _hex_value[(unsigned char) (c)])




#define PEX_RECORD_TIMES 0x1


#define PEX_USE_PIPES 0x2


#define PEX_SAVE_TEMPS 0x4
# 369 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern struct pex_obj *pex_init (int flags, const char *pname,
     const char *tempbase);
# 379 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
#define PEX_LAST 0x1


#define PEX_SEARCH 0x2


#define PEX_SUFFIX 0x4


#define PEX_STDERR_TO_STDOUT 0x8



#define PEX_BINARY_INPUT 0x10






#define PEX_BINARY_OUTPUT 0x20
# 451 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *pex_run (struct pex_obj *obj, int flags,
       const char *executable, char * const *argv,
       const char *outname, const char *errname,
       int *err);
# 481 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern FILE *pex_write_input (struct pex_obj *obj, int binary);





extern FILE *pex_input_file (struct pex_obj *obj, int flags,
                             const char *in_name);






extern FILE *pex_input_pipe (struct pex_obj *obj, int binary);







extern FILE *pex_read_output (struct pex_obj *, int binary);





extern int pex_get_status (struct pex_obj *, int count, int *vector);






struct pex_time
{
  unsigned long user_seconds;
  unsigned long user_microseconds;
  unsigned long system_seconds;
  unsigned long system_microseconds;
};

extern int pex_get_times (struct pex_obj *, int count,
     struct pex_time *vector);



extern void pex_free (struct pex_obj *);
# 542 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/libiberty.h" 3 4
extern const char *pex_one (int flags, const char *executable,
       char * const *argv, const char *pname,
       const char *outname, const char *errname,
       int *status, int *err);







#define PEXECUTE_FIRST 1
#define PEXECUTE_LAST 2
#define PEXECUTE_ONE (PEXECUTE_FIRST + PEXECUTE_LAST)
#define PEXECUTE_SEARCH 4
#define PEXECUTE_VERBOSE 8



extern int pexecute (const char *, char * const *, const char *,
                     const char *, char **, char **, int);



extern int pwait (int, int *, int);






#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))







extern void *C_alloca (size_t) __attribute__ ((__malloc__));
#undef alloca

#define alloca(x) __builtin_alloca(x)
#undef C_ALLOCA
#define ASTRDUP(X) (__extension__ ({ const char *const libiberty_optr = (X); const unsigned long libiberty_len = strlen (libiberty_optr) + 1; char *const libiberty_nptr = (char *const) alloca (libiberty_len); (char *) memcpy (libiberty_nptr, libiberty_optr, libiberty_len); }))
# 24 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opintl.h" 1 3 4
# 45 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opintl.h" 3 4
#define gettext(Msgid) (Msgid)
#define dgettext(Domainname,Msgid) (Msgid)
#define dcgettext(Domainname,Msgid,Category) (Msgid)
#define textdomain(Domainname) while (0)
#define bindtextdomain(Domainname,Dirname) while (0)
#define _(String) (String)
#define N_(String) (String)
# 25 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 2
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h" 1
# 22 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
#define OPCODES_AARCH64_DIS_H 

# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 1
# 22 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
#define OPCODES_AARCH64_OPC_H 


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
# 26 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 2
# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 1
# 23 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
#define OPCODE_AARCH64_H 

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/mybfd.h" 1 3 4
# 26 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 2

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
# 28 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 2
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
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/resource.h" 3 4
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






void *__builtin_alloca(size_t);




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








# 29 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 2






#define AARCH64_PCREL_OFFSET 0


# 37 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
typedef uint32_t aarch64_insn;


#define AARCH64_FEATURE_SHA2 0x200000000ULL
#define AARCH64_FEATURE_AES 0x800000000ULL
#define AARCH64_FEATURE_V8_4 0x000000800ULL
#define AARCH64_FEATURE_SM4 0x100000000ULL
#define AARCH64_FEATURE_SHA3 0x400000000ULL
#define AARCH64_FEATURE_V8 0x00000001
#define AARCH64_FEATURE_V8_2 0x00000020
#define AARCH64_FEATURE_V8_3 0x00000040
#define AARCH64_FEATURE_CRYPTO 0x00010000
#define AARCH64_FEATURE_FP 0x00020000
#define AARCH64_FEATURE_SIMD 0x00040000
#define AARCH64_FEATURE_CRC 0x00080000
#define AARCH64_FEATURE_LSE 0x00100000
#define AARCH64_FEATURE_PAN 0x00200000
#define AARCH64_FEATURE_LOR 0x00400000
#define AARCH64_FEATURE_RDMA 0x00800000
#define AARCH64_FEATURE_V8_1 0x01000000
#define AARCH64_FEATURE_F16 0x02000000
#define AARCH64_FEATURE_RAS 0x04000000
#define AARCH64_FEATURE_PROFILE 0x08000000
#define AARCH64_FEATURE_SVE 0x10000000
#define AARCH64_FEATURE_RCPC 0x20000000
#define AARCH64_FEATURE_COMPNUM 0x40000000
#define AARCH64_FEATURE_DOTPROD 0x080000000
#define AARCH64_FEATURE_F16_FML 0x1000000000ULL


#define AARCH64_ARCH_V8 AARCH64_FEATURE (AARCH64_FEATURE_V8, AARCH64_FEATURE_FP | AARCH64_FEATURE_SIMD)


#define AARCH64_ARCH_V8_1 AARCH64_FEATURE (AARCH64_ARCH_V8, AARCH64_FEATURE_CRC | AARCH64_FEATURE_V8_1 | AARCH64_FEATURE_LSE | AARCH64_FEATURE_PAN | AARCH64_FEATURE_LOR | AARCH64_FEATURE_RDMA)






#define AARCH64_ARCH_V8_2 AARCH64_FEATURE (AARCH64_ARCH_V8_1, AARCH64_FEATURE_V8_2 | AARCH64_FEATURE_RAS)


#define AARCH64_ARCH_V8_3 AARCH64_FEATURE (AARCH64_ARCH_V8_2, AARCH64_FEATURE_V8_3 | AARCH64_FEATURE_RCPC | AARCH64_FEATURE_COMPNUM)



#define AARCH64_ARCH_V8_4 AARCH64_FEATURE (AARCH64_ARCH_V8_3, AARCH64_FEATURE_V8_4 | AARCH64_FEATURE_DOTPROD | AARCH64_FEATURE_F16_FML)




#define AARCH64_ARCH_NONE AARCH64_FEATURE (0, 0)
#define AARCH64_ANY AARCH64_FEATURE (-1, 0)


typedef unsigned long long aarch64_feature_set;

#define AARCH64_CPU_HAS_ALL_FEATURES(CPU,FEAT) ((~(CPU) & (FEAT)) == 0)


#define AARCH64_CPU_HAS_ANY_FEATURES(CPU,FEAT) (((CPU) & (FEAT)) != 0)


#define AARCH64_CPU_HAS_FEATURE(CPU,FEAT) AARCH64_CPU_HAS_ALL_FEATURES (CPU,FEAT)


#define AARCH64_MERGE_FEATURE_SETS(TARG,F1,F2) do { (TARG) = (F1) | (F2); } while (0)






#define AARCH64_CLEAR_FEATURE(TARG,F1,F2) do { (TARG) = (F1) &~ (F2); } while (0)






#define AARCH64_FEATURE(core,coproc) ((core) | (coproc))

enum aarch64_operand_class
{
  AARCH64_OPND_CLASS_NIL,
  AARCH64_OPND_CLASS_INT_REG,
  AARCH64_OPND_CLASS_MODIFIED_REG,
  AARCH64_OPND_CLASS_FP_REG,
  AARCH64_OPND_CLASS_SIMD_REG,
  AARCH64_OPND_CLASS_SIMD_ELEMENT,
  AARCH64_OPND_CLASS_SISD_REG,
  AARCH64_OPND_CLASS_SIMD_REGLIST,
  AARCH64_OPND_CLASS_SVE_REG,
  AARCH64_OPND_CLASS_PRED_REG,
  AARCH64_OPND_CLASS_ADDRESS,
  AARCH64_OPND_CLASS_IMMEDIATE,
  AARCH64_OPND_CLASS_SYSTEM,
  AARCH64_OPND_CLASS_COND,
};




enum aarch64_opnd
{
  AARCH64_OPND_NIL,

  AARCH64_OPND_Rd,
  AARCH64_OPND_Rn,
  AARCH64_OPND_Rm,
  AARCH64_OPND_Rt,
  AARCH64_OPND_Rt2,
  AARCH64_OPND_Rs,
  AARCH64_OPND_Ra,
  AARCH64_OPND_Rt_SYS,

  AARCH64_OPND_Rd_SP,
  AARCH64_OPND_Rn_SP,
  AARCH64_OPND_Rm_SP,
  AARCH64_OPND_PAIRREG,
  AARCH64_OPND_Rm_EXT,
  AARCH64_OPND_Rm_SFT,

  AARCH64_OPND_Fd,
  AARCH64_OPND_Fn,
  AARCH64_OPND_Fm,
  AARCH64_OPND_Fa,
  AARCH64_OPND_Ft,
  AARCH64_OPND_Ft2,

  AARCH64_OPND_Sd,
  AARCH64_OPND_Sn,
  AARCH64_OPND_Sm,

  AARCH64_OPND_Va,
  AARCH64_OPND_Vd,
  AARCH64_OPND_Vn,
  AARCH64_OPND_Vm,
  AARCH64_OPND_VdD1,
  AARCH64_OPND_VnD1,
  AARCH64_OPND_Ed,
  AARCH64_OPND_En,
  AARCH64_OPND_Em,
  AARCH64_OPND_Em16,

  AARCH64_OPND_LVn,
  AARCH64_OPND_LVt,
  AARCH64_OPND_LVt_AL,

  AARCH64_OPND_LEt,

  AARCH64_OPND_CRn,
  AARCH64_OPND_CRm,

  AARCH64_OPND_IDX,
  AARCH64_OPND_MASK,
  AARCH64_OPND_IMM_VLSL,
  AARCH64_OPND_IMM_VLSR,
  AARCH64_OPND_SIMD_IMM,
  AARCH64_OPND_SIMD_IMM_SFT,
  AARCH64_OPND_SIMD_FPIMM,
  AARCH64_OPND_SHLL_IMM,

  AARCH64_OPND_IMM0,
  AARCH64_OPND_FPIMM0,
  AARCH64_OPND_FPIMM,
  AARCH64_OPND_IMMR,
  AARCH64_OPND_IMMS,
  AARCH64_OPND_WIDTH,
  AARCH64_OPND_IMM,
  AARCH64_OPND_IMM_2,
  AARCH64_OPND_UIMM3_OP1,
  AARCH64_OPND_UIMM3_OP2,
  AARCH64_OPND_UIMM4,
  AARCH64_OPND_UIMM7,
  AARCH64_OPND_BIT_NUM,
  AARCH64_OPND_EXCEPTION,
  AARCH64_OPND_CCMP_IMM,
  AARCH64_OPND_SIMM5,
  AARCH64_OPND_NZCV,


  AARCH64_OPND_LIMM,
  AARCH64_OPND_AIMM,
  AARCH64_OPND_HALF,
  AARCH64_OPND_FBITS,
  AARCH64_OPND_IMM_MOV,
  AARCH64_OPND_IMM_ROT1,
  AARCH64_OPND_IMM_ROT2,
  AARCH64_OPND_IMM_ROT3,

  AARCH64_OPND_COND,
  AARCH64_OPND_COND1,

  AARCH64_OPND_ADDR_ADRP,
  AARCH64_OPND_ADDR_PCREL14,
  AARCH64_OPND_ADDR_PCREL19,
  AARCH64_OPND_ADDR_PCREL21,
  AARCH64_OPND_ADDR_PCREL26,

  AARCH64_OPND_ADDR_SIMPLE,
  AARCH64_OPND_ADDR_REGOFF,
  AARCH64_OPND_ADDR_SIMM7,
  AARCH64_OPND_ADDR_SIMM9,
  AARCH64_OPND_ADDR_SIMM9_2,






  AARCH64_OPND_ADDR_SIMM10,
  AARCH64_OPND_ADDR_UIMM12,
  AARCH64_OPND_SIMD_ADDR_SIMPLE,
  AARCH64_OPND_ADDR_OFFSET,
  AARCH64_OPND_SIMD_ADDR_POST,

  AARCH64_OPND_SYSREG,
  AARCH64_OPND_PSTATEFIELD,
  AARCH64_OPND_SYSREG_AT,
  AARCH64_OPND_SYSREG_DC,
  AARCH64_OPND_SYSREG_IC,
  AARCH64_OPND_SYSREG_TLBI,
  AARCH64_OPND_BARRIER,
  AARCH64_OPND_BARRIER_ISB,
  AARCH64_OPND_PRFOP,
  AARCH64_OPND_BARRIER_PSB,

  AARCH64_OPND_SVE_ADDR_RI_S4x16,
  AARCH64_OPND_SVE_ADDR_RI_S4xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x2xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x3xVL,
  AARCH64_OPND_SVE_ADDR_RI_S4x4xVL,
  AARCH64_OPND_SVE_ADDR_RI_S6xVL,
  AARCH64_OPND_SVE_ADDR_RI_S9xVL,
  AARCH64_OPND_SVE_ADDR_RI_U6,
  AARCH64_OPND_SVE_ADDR_RI_U6x2,
  AARCH64_OPND_SVE_ADDR_RI_U6x4,
  AARCH64_OPND_SVE_ADDR_RI_U6x8,
  AARCH64_OPND_SVE_ADDR_R,
  AARCH64_OPND_SVE_ADDR_RR,
  AARCH64_OPND_SVE_ADDR_RR_LSL1,
  AARCH64_OPND_SVE_ADDR_RR_LSL2,
  AARCH64_OPND_SVE_ADDR_RR_LSL3,
  AARCH64_OPND_SVE_ADDR_RX,
  AARCH64_OPND_SVE_ADDR_RX_LSL1,
  AARCH64_OPND_SVE_ADDR_RX_LSL2,
  AARCH64_OPND_SVE_ADDR_RX_LSL3,
  AARCH64_OPND_SVE_ADDR_RZ,
  AARCH64_OPND_SVE_ADDR_RZ_LSL1,
  AARCH64_OPND_SVE_ADDR_RZ_LSL2,
  AARCH64_OPND_SVE_ADDR_RZ_LSL3,
  AARCH64_OPND_SVE_ADDR_RZ_XTW_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW1_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW1_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW2_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW2_22,

  AARCH64_OPND_SVE_ADDR_RZ_XTW3_14,

  AARCH64_OPND_SVE_ADDR_RZ_XTW3_22,

  AARCH64_OPND_SVE_ADDR_ZI_U5,
  AARCH64_OPND_SVE_ADDR_ZI_U5x2,
  AARCH64_OPND_SVE_ADDR_ZI_U5x4,
  AARCH64_OPND_SVE_ADDR_ZI_U5x8,
  AARCH64_OPND_SVE_ADDR_ZZ_LSL,
  AARCH64_OPND_SVE_ADDR_ZZ_SXTW,
  AARCH64_OPND_SVE_ADDR_ZZ_UXTW,
  AARCH64_OPND_SVE_AIMM,
  AARCH64_OPND_SVE_ASIMM,
  AARCH64_OPND_SVE_FPIMM8,
  AARCH64_OPND_SVE_I1_HALF_ONE,
  AARCH64_OPND_SVE_I1_HALF_TWO,
  AARCH64_OPND_SVE_I1_ZERO_ONE,
  AARCH64_OPND_SVE_IMM_ROT1,
  AARCH64_OPND_SVE_IMM_ROT2,
  AARCH64_OPND_SVE_INV_LIMM,
  AARCH64_OPND_SVE_LIMM,
  AARCH64_OPND_SVE_LIMM_MOV,
  AARCH64_OPND_SVE_PATTERN,
  AARCH64_OPND_SVE_PATTERN_SCALED,
  AARCH64_OPND_SVE_PRFOP,
  AARCH64_OPND_SVE_Pd,
  AARCH64_OPND_SVE_Pg3,
  AARCH64_OPND_SVE_Pg4_5,
  AARCH64_OPND_SVE_Pg4_10,
  AARCH64_OPND_SVE_Pg4_16,
  AARCH64_OPND_SVE_Pm,
  AARCH64_OPND_SVE_Pn,
  AARCH64_OPND_SVE_Pt,
  AARCH64_OPND_SVE_Rm,
  AARCH64_OPND_SVE_Rn_SP,
  AARCH64_OPND_SVE_SHLIMM_PRED,
  AARCH64_OPND_SVE_SHLIMM_UNPRED,
  AARCH64_OPND_SVE_SHRIMM_PRED,
  AARCH64_OPND_SVE_SHRIMM_UNPRED,
  AARCH64_OPND_SVE_SIMM5,
  AARCH64_OPND_SVE_SIMM5B,
  AARCH64_OPND_SVE_SIMM6,
  AARCH64_OPND_SVE_SIMM8,
  AARCH64_OPND_SVE_UIMM3,
  AARCH64_OPND_SVE_UIMM7,
  AARCH64_OPND_SVE_UIMM8,
  AARCH64_OPND_SVE_UIMM8_53,
  AARCH64_OPND_SVE_VZn,
  AARCH64_OPND_SVE_Vd,
  AARCH64_OPND_SVE_Vm,
  AARCH64_OPND_SVE_Vn,
  AARCH64_OPND_SVE_Za_5,
  AARCH64_OPND_SVE_Za_16,
  AARCH64_OPND_SVE_Zd,
  AARCH64_OPND_SVE_Zm_5,
  AARCH64_OPND_SVE_Zm_16,
  AARCH64_OPND_SVE_Zm3_INDEX,
  AARCH64_OPND_SVE_Zm3_22_INDEX,
  AARCH64_OPND_SVE_Zm4_INDEX,
  AARCH64_OPND_SVE_Zn,
  AARCH64_OPND_SVE_Zn_INDEX,
  AARCH64_OPND_SVE_ZnxN,
  AARCH64_OPND_SVE_Zt,
  AARCH64_OPND_SVE_ZtxN,
  AARCH64_OPND_SM3_IMM2,
};






enum aarch64_opnd_qualifier
{

  AARCH64_OPND_QLF_NIL,



  AARCH64_OPND_QLF_W,
  AARCH64_OPND_QLF_X,
  AARCH64_OPND_QLF_WSP,
  AARCH64_OPND_QLF_SP,
# 397 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
  AARCH64_OPND_QLF_S_B,
  AARCH64_OPND_QLF_S_H,
  AARCH64_OPND_QLF_S_S,
  AARCH64_OPND_QLF_S_D,
  AARCH64_OPND_QLF_S_Q,




  AARCH64_OPND_QLF_S_4B,







  AARCH64_OPND_QLF_V_4B,
  AARCH64_OPND_QLF_V_8B,
  AARCH64_OPND_QLF_V_16B,
  AARCH64_OPND_QLF_V_2H,
  AARCH64_OPND_QLF_V_4H,
  AARCH64_OPND_QLF_V_8H,
  AARCH64_OPND_QLF_V_2S,
  AARCH64_OPND_QLF_V_4S,
  AARCH64_OPND_QLF_V_1D,
  AARCH64_OPND_QLF_V_2D,
  AARCH64_OPND_QLF_V_1Q,

  AARCH64_OPND_QLF_P_Z,
  AARCH64_OPND_QLF_P_M,


  AARCH64_OPND_QLF_CR,
  AARCH64_OPND_QLF_imm_0_7,
  AARCH64_OPND_QLF_imm_0_15,
  AARCH64_OPND_QLF_imm_0_31,
  AARCH64_OPND_QLF_imm_0_63,
  AARCH64_OPND_QLF_imm_1_32,
  AARCH64_OPND_QLF_imm_1_64,



  AARCH64_OPND_QLF_LSL,
  AARCH64_OPND_QLF_MSL,



  AARCH64_OPND_QLF_RETRIEVE,
};



enum aarch64_insn_class
{
  addsub_carry,
  addsub_ext,
  addsub_imm,
  addsub_shift,
  asimdall,
  asimddiff,
  asimdelem,
  asimdext,
  asimdimm,
  asimdins,
  asimdmisc,
  asimdperm,
  asimdsame,
  asimdshf,
  asimdtbl,
  asisddiff,
  asisdelem,
  asisdlse,
  asisdlsep,
  asisdlso,
  asisdlsop,
  asisdmisc,
  asisdone,
  asisdpair,
  asisdsame,
  asisdshf,
  bitfield,
  branch_imm,
  branch_reg,
  compbranch,
  condbranch,
  condcmp_imm,
  condcmp_reg,
  condsel,
  cryptoaes,
  cryptosha2,
  cryptosha3,
  dp_1src,
  dp_2src,
  dp_3src,
  exception,
  extract,
  float2fix,
  float2int,
  floatccmp,
  floatcmp,
  floatdp1,
  floatdp2,
  floatdp3,
  floatimm,
  floatsel,
  ldst_immpost,
  ldst_immpre,
  ldst_imm9,
  ldst_imm10,
  ldst_pos,
  ldst_regoff,
  ldst_unpriv,
  ldst_unscaled,
  ldstexcl,
  ldstnapair_offs,
  ldstpair_off,
  ldstpair_indexed,
  loadlit,
  log_imm,
  log_shift,
  lse_atomic,
  movewide,
  pcreladdr,
  ic_system,
  sve_cpy,
  sve_index,
  sve_limm,
  sve_misc,
  sve_movprfx,
  sve_pred_zm,
  sve_shift_pred,
  sve_shift_unpred,
  sve_size_bhs,
  sve_size_bhsd,
  sve_size_hsd,
  sve_size_sd,
  testbranch,
  cryptosm3,
  cryptosm4,
  dotproduct,
};



enum aarch64_op
{
  OP_NIL,
  OP_STRB_POS,
  OP_LDRB_POS,
  OP_LDRSB_POS,
  OP_STRH_POS,
  OP_LDRH_POS,
  OP_LDRSH_POS,
  OP_STR_POS,
  OP_LDR_POS,
  OP_STRF_POS,
  OP_LDRF_POS,
  OP_LDRSW_POS,
  OP_PRFM_POS,

  OP_STURB,
  OP_LDURB,
  OP_LDURSB,
  OP_STURH,
  OP_LDURH,
  OP_LDURSH,
  OP_STUR,
  OP_LDUR,
  OP_STURV,
  OP_LDURV,
  OP_LDURSW,
  OP_PRFUM,

  OP_LDR_LIT,
  OP_LDRV_LIT,
  OP_LDRSW_LIT,
  OP_PRFM_LIT,

  OP_ADD,
  OP_B,
  OP_BL,

  OP_MOVN,
  OP_MOVZ,
  OP_MOVK,

  OP_MOV_IMM_LOG,
  OP_MOV_IMM_WIDE,
  OP_MOV_IMM_WIDEN,

  OP_MOV_V,

  OP_ASR_IMM,
  OP_LSR_IMM,
  OP_LSL_IMM,

  OP_BIC,

  OP_UBFX,
  OP_BFXIL,
  OP_SBFX,
  OP_SBFIZ,
  OP_BFI,
  OP_BFC,
  OP_UBFIZ,
  OP_UXTB,
  OP_UXTH,
  OP_UXTW,

  OP_CINC,
  OP_CINV,
  OP_CNEG,
  OP_CSET,
  OP_CSETM,

  OP_FCVT,
  OP_FCVTN,
  OP_FCVTN2,
  OP_FCVTL,
  OP_FCVTL2,
  OP_FCVTXN_S,

  OP_ROR_IMM,

  OP_SXTL,
  OP_SXTL2,
  OP_UXTL,
  OP_UXTL2,

  OP_MOV_P_P,
  OP_MOV_Z_P_Z,
  OP_MOV_Z_V,
  OP_MOV_Z_Z,
  OP_MOV_Z_Zi,
  OP_MOVM_P_P_P,
  OP_MOVS_P_P,
  OP_MOVZS_P_P_P,
  OP_MOVZ_P_P_P,
  OP_NOTS_P_P_P_Z,
  OP_NOT_P_P_P_Z,

  OP_FCMLA_ELEM,

  OP_TOTAL_NUM,
};


#define AARCH64_MAX_OPND_NUM 6

#define AARCH64_MAX_QLF_SEQ_NUM 10

typedef unsigned char aarch64_opnd_qualifier_t;

typedef aarch64_opnd_qualifier_t
   aarch64_opnd_qualifier_seq_t [6];


static inline bfd_boolean
empty_qualifier_sequence_p (const aarch64_opnd_qualifier_t *qualifiers)
{
  int i;
  for (i = 0; i < 6; ++i)
    if (qualifiers[i] != AARCH64_OPND_QLF_NIL)
      return 
# 661 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
            0
# 661 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                 ;
  return 
# 662 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
        1
# 662 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
            ;
}



struct aarch64_opcode
{

  const char *name;



  aarch64_insn opcode;





  aarch64_insn mask;


  enum aarch64_insn_class iclass;


  enum aarch64_op op;


  const aarch64_feature_set *avariant;




  enum aarch64_opnd operands[6];





  aarch64_opnd_qualifier_seq_t qualifiers_list[10];


  uint32_t flags;



  unsigned char tied_operand;


  bfd_boolean (* verifier) (const struct aarch64_opcode *, const aarch64_insn);
};

typedef struct aarch64_opcode aarch64_opcode;


extern aarch64_opcode aarch64_opcode_table[];


#define F_ALIAS (1 << 0)
#define F_HAS_ALIAS (1 << 1)


#define F_P1 (1 << 2)
#define F_P2 (2 << 2)
#define F_P3 (3 << 2)

#define F_COND (1 << 4)

#define F_SF (1 << 5)

#define F_SIZEQ (1 << 6)

#define F_FPTYPE (1 << 7)

#define F_SSIZE (1 << 8)

#define F_T (1 << 9)

#define F_GPRSIZE_IN_Q (1 << 10)

#define F_LDS_SIZE (1 << 11)

#define F_OPD0_OPT (1 << 12)
#define F_OPD1_OPT (2 << 12)
#define F_OPD2_OPT (3 << 12)
#define F_OPD3_OPT (4 << 12)
#define F_OPD4_OPT (5 << 12)

#define F_DEFAULT(X) (((X) & 0x1f) << 15)





#define F_CONV (1 << 20)



#define F_PSEUDO (1 << 21)

#define F_MISC (1 << 22)

#define F_N (1 << 23)

#define F_OD(X) (((X) & 0x7) << 24)

#define F_LSE_SZ (1 << 27)

#define F_STRICT (1ULL << 28)

#define F_SYS_READ (1ULL << 29)

#define F_SYS_WRITE (1ULL << 30)


static inline bfd_boolean
alias_opcode_p (const aarch64_opcode *opcode)
{
  return (opcode->flags & (1 << 0)) ? 
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                    1 
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                         : 
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                           0
# 779 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                ;
}

static inline bfd_boolean
opcode_has_alias (const aarch64_opcode *opcode)
{
  return (opcode->flags & (1 << 1)) ? 
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                        1 
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                             : 
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                               0
# 785 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                    ;
}


static inline int
opcode_priority (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 2) & 0x3;
}

static inline bfd_boolean
pseudo_opcode_p (const aarch64_opcode *opcode)
{
  return (opcode->flags & (1 << 21)) != 0lu ? 
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                            1 
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                 : 
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                                   0
# 798 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                                                        ;
}

static inline bfd_boolean
optional_operand_p (const aarch64_opcode *opcode, unsigned int idx)
{
  return (((opcode->flags >> 12) & 0x7) == idx + 1)
    ? 
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
     1 
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
          : 
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
            0
# 805 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
                 ;
}

static inline aarch64_insn
get_optional_operand_default_value (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 15) & 0x1f;
}

static inline unsigned int
get_opcode_dependent_value (const aarch64_opcode *opcode)
{
  return (opcode->flags >> 24) & 0x7;
}

static inline bfd_boolean
opcode_has_special_coder (const aarch64_opcode *opcode)
{
  return (opcode->flags & ((1 << 5) | (1 << 27) | (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9)
   | (1 << 10) | (1 << 11) | (1 << 22) | (1 << 23) | (1 << 4))) ? 
# 824 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
                                                            1
    
# 825 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
   : 
# 825 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h" 3 4
     0
# 825 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
          ;
}

struct aarch64_name_value_pair
{
  const char * name;
  aarch64_insn value;
};

extern const struct aarch64_name_value_pair aarch64_operand_modifiers [];
extern const struct aarch64_name_value_pair aarch64_barrier_options [16];
extern const struct aarch64_name_value_pair aarch64_prfops [32];
extern const struct aarch64_name_value_pair aarch64_hint_options [];

typedef struct
{
  const char * name;
  aarch64_insn value;
  uint32_t flags;
} aarch64_sys_reg;

extern const aarch64_sys_reg aarch64_sys_regs [];
extern const aarch64_sys_reg aarch64_pstatefields [];
extern bfd_boolean aarch64_sys_reg_deprecated_p (const aarch64_sys_reg *);
extern bfd_boolean aarch64_sys_reg_supported_p (const aarch64_feature_set,
      const aarch64_sys_reg *);
extern bfd_boolean aarch64_pstatefield_supported_p (const aarch64_feature_set,
          const aarch64_sys_reg *);

typedef struct
{
  const char *name;
  uint32_t value;
  uint32_t flags ;
} aarch64_sys_ins_reg;

extern bfd_boolean aarch64_sys_ins_reg_has_xt (const aarch64_sys_ins_reg *);
extern bfd_boolean
aarch64_sys_ins_reg_supported_p (const aarch64_feature_set,
     const aarch64_sys_ins_reg *);

extern const aarch64_sys_ins_reg aarch64_sys_regs_ic [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_dc [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_at [];
extern const aarch64_sys_ins_reg aarch64_sys_regs_tlbi [];



enum aarch64_modifier_kind
{
  AARCH64_MOD_NONE,
  AARCH64_MOD_MSL,
  AARCH64_MOD_ROR,
  AARCH64_MOD_ASR,
  AARCH64_MOD_LSR,
  AARCH64_MOD_LSL,
  AARCH64_MOD_UXTB,
  AARCH64_MOD_UXTH,
  AARCH64_MOD_UXTW,
  AARCH64_MOD_UXTX,
  AARCH64_MOD_SXTB,
  AARCH64_MOD_SXTH,
  AARCH64_MOD_SXTW,
  AARCH64_MOD_SXTX,
  AARCH64_MOD_MUL,
  AARCH64_MOD_MUL_VL,
};

bfd_boolean
aarch64_extend_operator_p (enum aarch64_modifier_kind);

enum aarch64_modifier_kind
aarch64_get_operand_modifier (const struct aarch64_name_value_pair *);


typedef struct
{


  const char *names[4];
  aarch64_insn value;
} aarch64_cond;

extern const aarch64_cond aarch64_conds[16];

const aarch64_cond* get_cond_from_value (aarch64_insn value);
const aarch64_cond* get_inverted_cond (const aarch64_cond *cond);



struct aarch64_opnd_info
{
  enum aarch64_opnd type;
  aarch64_opnd_qualifier_t qualifier;
  int idx;

  union
    {
      struct
 {
   unsigned regno;
 } reg;
      struct
 {
   unsigned int regno;
   int64_t index;
 } reglane;

      struct
 {
   unsigned first_regno : 5;
   unsigned num_regs : 3;

   unsigned has_index : 1;

   int64_t index;
 } reglist;

      struct
 {
   int64_t value;
   unsigned is_fp : 1;
 } imm;

      struct
 {
   unsigned base_regno;
   struct
     {
       union
  {
    int imm;
    unsigned regno;
  };
       unsigned is_reg;
     } offset;
   unsigned pcrel : 1;
   unsigned writeback : 1;
   unsigned preind : 1;
   unsigned postind : 1;
 } addr;

      struct
 {

   aarch64_insn value;


   uint32_t flags;
 } sysreg;

      const aarch64_cond *cond;

      aarch64_insn pstatefield;
      const aarch64_sys_ins_reg *sysins_op;
      const struct aarch64_name_value_pair *barrier;
      const struct aarch64_name_value_pair *hint_option;
      const struct aarch64_name_value_pair *prfop;
    };



  struct
    {
      enum aarch64_modifier_kind kind;
      unsigned operator_present: 1;

      unsigned amount_present: 1;
      int64_t amount;
    } shifter;

  unsigned skip:1;







  unsigned present:1;

};

typedef struct aarch64_opnd_info aarch64_opnd_info;
# 1020 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
struct aarch64_inst
{

  aarch64_insn value;


  const aarch64_opcode *opcode;


  const aarch64_cond *cond;


  aarch64_opnd_info operands[6];
};

typedef struct aarch64_inst aarch64_inst;
# 1089 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
enum aarch64_operand_error_kind
{
  AARCH64_OPDE_NIL,
  AARCH64_OPDE_RECOVERABLE,
  AARCH64_OPDE_SYNTAX_ERROR,
  AARCH64_OPDE_FATAL_SYNTAX_ERROR,
  AARCH64_OPDE_INVALID_VARIANT,
  AARCH64_OPDE_UNTIED_OPERAND,
  AARCH64_OPDE_OUT_OF_RANGE,
  AARCH64_OPDE_UNALIGNED,
  AARCH64_OPDE_REG_LIST,
  AARCH64_OPDE_OTHER_ERROR
};


struct aarch64_operand_error
{
  enum aarch64_operand_error_kind kind;
  int index;
  const char *error;
  int data[3];
  bfd_boolean non_fatal;
};

typedef struct aarch64_operand_error aarch64_operand_error;



extern int
aarch64_opcode_encode (const aarch64_opcode *, const aarch64_inst *,
         aarch64_insn *, aarch64_opnd_qualifier_t *,
         aarch64_operand_error *);

extern const aarch64_opcode *
aarch64_replace_opcode (struct aarch64_inst *,
   const aarch64_opcode *);




extern const aarch64_opcode *
aarch64_get_opcode (enum aarch64_op);


extern void
aarch64_print_operand (char *, size_t, bfd_vma, const aarch64_opcode *,
         const aarch64_opnd_info *, int, int *, bfd_vma *,
         char **);



extern int
aarch64_operand_index (const enum aarch64_opnd *, enum aarch64_opnd);

extern aarch64_opnd_qualifier_t
aarch64_get_expected_qualifier (const aarch64_opnd_qualifier_seq_t *, int,
    const aarch64_opnd_qualifier_t, int);

extern int
aarch64_num_of_operands (const aarch64_opcode *);

extern int
aarch64_stack_pointer_p (const aarch64_opnd_info *);

extern int
aarch64_zero_register_p (const aarch64_opnd_info *);

extern int
aarch64_decode_insn (aarch64_insn, aarch64_inst *, bfd_boolean,
       aarch64_operand_error *errors);



extern unsigned char
aarch64_get_qualifier_esize (aarch64_opnd_qualifier_t);

extern enum aarch64_operand_class
aarch64_get_operand_class (enum aarch64_opnd);

extern const char *
aarch64_get_operand_name (enum aarch64_opnd);

extern const char *
aarch64_get_operand_desc (enum aarch64_opnd);

extern bfd_boolean
aarch64_sve_dupm_mov_immediate_p (uint64_t, int);
# 1195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64.h"
#define DEBUG_TRACE(M,...) ;
#define DEBUG_TRACE_IF(C,M,...) ;


extern const char *const aarch64_sve_pattern_array[32];
extern const char *const aarch64_sve_prfop_array[16];
# 27 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 2



enum aarch64_field_kind
{
  FLD_NIL,
  FLD_cond2,
  FLD_nzcv,
  FLD_defgh,
  FLD_abc,
  FLD_imm19,
  FLD_immhi,
  FLD_immlo,
  FLD_size,
  FLD_vldst_size,
  FLD_op,
  FLD_Q,
  FLD_Rt,
  FLD_Rd,
  FLD_Rn,
  FLD_Rt2,
  FLD_Ra,
  FLD_op2,
  FLD_CRm,
  FLD_CRn,
  FLD_op1,
  FLD_op0,
  FLD_imm3,
  FLD_cond,
  FLD_opcode,
  FLD_cmode,
  FLD_asisdlso_opcode,
  FLD_len,
  FLD_Rm,
  FLD_Rs,
  FLD_option,
  FLD_S,
  FLD_hw,
  FLD_opc,
  FLD_opc1,
  FLD_shift,
  FLD_type,
  FLD_ldst_size,
  FLD_imm6,
  FLD_imm6_2,
  FLD_imm4,
  FLD_imm4_2,
  FLD_imm5,
  FLD_imm7,
  FLD_imm8,
  FLD_imm9,
  FLD_imm12,
  FLD_imm14,
  FLD_imm16,
  FLD_imm26,
  FLD_imms,
  FLD_immr,
  FLD_immb,
  FLD_immh,
  FLD_S_imm10,
  FLD_N,
  FLD_index,
  FLD_index2,
  FLD_sf,
  FLD_lse_sz,
  FLD_H,
  FLD_L,
  FLD_M,
  FLD_b5,
  FLD_b40,
  FLD_scale,
  FLD_SVE_M_4,
  FLD_SVE_M_14,
  FLD_SVE_M_16,
  FLD_SVE_N,
  FLD_SVE_Pd,
  FLD_SVE_Pg3,
  FLD_SVE_Pg4_5,
  FLD_SVE_Pg4_10,
  FLD_SVE_Pg4_16,
  FLD_SVE_Pm,
  FLD_SVE_Pn,
  FLD_SVE_Pt,
  FLD_SVE_Rm,
  FLD_SVE_Rn,
  FLD_SVE_Vd,
  FLD_SVE_Vm,
  FLD_SVE_Vn,
  FLD_SVE_Za_5,
  FLD_SVE_Za_16,
  FLD_SVE_Zd,
  FLD_SVE_Zm_5,
  FLD_SVE_Zm_16,
  FLD_SVE_Zn,
  FLD_SVE_Zt,
  FLD_SVE_i1,
  FLD_SVE_i3h,
  FLD_SVE_imm3,
  FLD_SVE_imm4,
  FLD_SVE_imm5,
  FLD_SVE_imm5b,
  FLD_SVE_imm6,
  FLD_SVE_imm7,
  FLD_SVE_imm8,
  FLD_SVE_imm9,
  FLD_SVE_immr,
  FLD_SVE_imms,
  FLD_SVE_msz,
  FLD_SVE_pattern,
  FLD_SVE_prfop,
  FLD_SVE_rot1,
  FLD_SVE_rot2,
  FLD_SVE_sz,
  FLD_SVE_tsz,
  FLD_SVE_tszh,
  FLD_SVE_tszl_8,
  FLD_SVE_tszl_19,
  FLD_SVE_xs_14,
  FLD_SVE_xs_22,
  FLD_rotate1,
  FLD_rotate2,
  FLD_rotate3,
  FLD_SM3_imm2
};


struct aarch64_field
{
  int lsb;
  int width;
};

typedef struct aarch64_field aarch64_field;

extern const aarch64_field fields[];



struct aarch64_operand
{
  enum aarch64_operand_class op_class;



  const char *name;

  unsigned int flags;



  enum aarch64_field_kind fields[4];


  const char *desc;
};

typedef struct aarch64_operand aarch64_operand;

extern const aarch64_operand aarch64_operands[];



#define OPD_F_HAS_INSERTER 0x00000001
#define OPD_F_HAS_EXTRACTOR 0x00000002
#define OPD_F_SEXT 0x00000004
#define OPD_F_SHIFT_BY_2 0x00000008


#define OPD_F_MAYBE_SP 0x00000010
#define OPD_F_OD_MASK 0x000000e0
#define OPD_F_OD_LSB 5
#define OPD_F_NO_ZR 0x00000100



#undef F_DEPRECATED
#define F_DEPRECATED (1 << 0)

#undef F_ARCHEXT
#define F_ARCHEXT (1 << 1)

#undef F_HASXT
#define F_HASXT (1 << 2)


#undef F_REG_READ
#define F_REG_READ (1 << 3)


#undef F_REG_WRITE
#define F_REG_WRITE (1 << 4)


static inline bfd_boolean
operand_has_inserter (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000001) ? 
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                1 
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                     : 
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                       0
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                            ;
}

static inline bfd_boolean
operand_has_extractor (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000002) ? 
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                 1 
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                      : 
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                        0
# 229 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                             ;
}

static inline bfd_boolean
operand_need_sign_extension (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000004) ? 
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                        1 
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                             : 
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                               0
# 235 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                    ;
}

static inline bfd_boolean
operand_need_shift_by_two (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000008) ? 
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                              1 
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                   : 
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                     0
# 241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                          ;
}

static inline bfd_boolean
operand_maybe_stack_pointer (const aarch64_operand *operand)
{
  return (operand->flags & 0x00000010) ? 
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                            1 
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                 : 
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
                                                   0
# 247 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                        ;
}


static inline unsigned int
get_operand_specific_data (const aarch64_operand *operand)
{
  return (operand->flags & 0x000000e0) >> 5;
}


static inline unsigned
get_operand_field_width (const aarch64_operand *operand, unsigned n)
{
  
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 operand->fields[n] != FLD_NIL
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 261, 
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "operand->fields[n] != FLD_NIL"
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                       ;
  return fields[operand->fields[n]].width;
}


static inline unsigned
get_operand_fields_width (const aarch64_operand *operand)
{
  int i = 0;
  unsigned width = 0;
  while (operand->fields[i] != FLD_NIL)
    width += fields[operand->fields[i++]].width;
  
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 width > 0 && width < 32
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 273, 
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "width > 0 && width < 32"
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                 ;
  return width;
}

static inline const aarch64_operand *
get_operand_from_code (enum aarch64_opnd code)
{
  return aarch64_operands + code;
}



int aarch64_match_operands_constraint (aarch64_inst *,
           aarch64_operand_error *);


const char* aarch64_get_qualifier_name (aarch64_opnd_qualifier_t);
unsigned char aarch64_get_qualifier_nelem (aarch64_opnd_qualifier_t);
aarch64_insn aarch64_get_qualifier_standard_value (aarch64_opnd_qualifier_t);
int aarch64_find_best_match (const aarch64_inst *,
        const aarch64_opnd_qualifier_seq_t *,
        int, aarch64_opnd_qualifier_t *);

static inline void
reset_operand_qualifier (aarch64_inst *inst, int idx)
{
  
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 idx >=0 && idx < aarch64_num_of_operands (inst->opcode)
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 299, 
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "idx >=0 && idx < aarch64_num_of_operands (inst->opcode)"
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                                                 ;
  inst->operands[idx].qualifier = AARCH64_OPND_QLF_NIL;
}





static inline aarch64_insn
gen_mask (int width)
{
  return ((aarch64_insn) 1 << width) - 1;
}


static inline int
gen_sub_field (enum aarch64_field_kind kind, int lsb_rel, int width, aarch64_field *ret)
{
  const aarch64_field *field = &fields[kind];
  if (lsb_rel < 0 || width <= 0 || lsb_rel + width > field->width)
    return 0;
  ret->lsb = field->lsb + lsb_rel;
  ret->width = width;
  return 1;
}




static inline void
insert_field_2 (const aarch64_field *field, aarch64_insn *code,
  aarch64_insn value, aarch64_insn mask)
{
  
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 field->width < 32 && field->width >= 1 && field->lsb >= 0 && field->lsb + field->width <= 32
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 332, 
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "field->width < 32 && field->width >= 1 && field->lsb >= 0 && field->lsb + field->width <= 32"
# 332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
                                      
# 333 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                     ;
  value &= gen_mask (field->width);
  value <<= field->lsb;


  value &= ~mask;
  *code |= value;
}




static inline aarch64_insn
extract_field_2 (const aarch64_field *field, aarch64_insn code,
   aarch64_insn mask)
{
  aarch64_insn value;

  code &= ~mask;
  value = (code >> field->lsb) & gen_mask (field->width);
  return value;
}




static inline void
insert_field (enum aarch64_field_kind kind, aarch64_insn *code,
       aarch64_insn value, aarch64_insn mask)
{
  insert_field_2 (&fields[kind], code, value, mask);
}




static inline aarch64_insn
extract_field (enum aarch64_field_kind kind, aarch64_insn code,
        aarch64_insn mask)
{
  return extract_field_2 (&fields[kind], code, mask);
}

extern aarch64_insn
extract_fields (aarch64_insn code, aarch64_insn mask, ...);







static inline int
select_operand_for_sf_field_coding (const aarch64_opcode *opcode)
{
  int idx = -1;
  if (aarch64_get_operand_class (opcode->operands[0])
      == AARCH64_OPND_CLASS_INT_REG)

    idx = 0;
  else if (aarch64_get_operand_class (opcode->operands[1])
    == AARCH64_OPND_CLASS_INT_REG)

    idx = 1;
  else
    { 
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 398, 
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 398 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ; abort (); }
  return idx;
}





static inline int
select_operand_for_fptype_field_coding (const aarch64_opcode *opcode)
{
  int idx;
  if (aarch64_get_operand_class (opcode->operands[1])
      == AARCH64_OPND_CLASS_FP_REG)

    idx = 1;
  else if (aarch64_get_operand_class (opcode->operands[0])
    == AARCH64_OPND_CLASS_FP_REG)

    idx = 0;
  else
    { 
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 419, 
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 419 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ; abort (); }
  return idx;
}






static inline int
select_operand_for_scalar_size_field_coding (const aarch64_opcode *opcode)
{
  int src_size = 0, dst_size = 0;
  if (aarch64_get_operand_class (opcode->operands[0])
      == AARCH64_OPND_CLASS_SISD_REG)
    dst_size = aarch64_get_qualifier_esize (opcode->qualifiers_list[0][0]);
  if (aarch64_get_operand_class (opcode->operands[1])
      == AARCH64_OPND_CLASS_SISD_REG)
    src_size = aarch64_get_qualifier_esize (opcode->qualifiers_list[0][1]);
  if (src_size == dst_size && src_size == 0)
    { 
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 439, 
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 439 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ; abort (); }

  if (dst_size == 0 || dst_size == src_size << 1)
    return 1;
  else
    return 0;
}




int aarch64_select_operand_for_sizeq_field_coding (const aarch64_opcode *);



aarch64_insn aarch64_get_operand_modifier_value (enum aarch64_modifier_kind);
enum aarch64_modifier_kind
aarch64_get_operand_modifier_from_value (aarch64_insn, bfd_boolean);


bfd_boolean aarch64_wide_constant_p (int64_t, int, unsigned int *);
bfd_boolean aarch64_logical_immediate_p (uint64_t, int, aarch64_insn *);
int aarch64_shrink_expanded_imm8 (uint64_t);


static inline void
copy_operand_info (aarch64_inst *inst, int dst, int src)
{
  
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 dst >= 0 && src >= 0 && dst < 6 && src < 6
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 467, 
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "dst >= 0 && src >= 0 && dst < AARCH64_MAX_OPND_NUM && src < AARCH64_MAX_OPND_NUM"
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
                                 
# 468 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                ;
  
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 __builtin___memcpy_chk (
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 &inst->operands[dst]
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 , 
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 &inst->operands[src], sizeof (aarch64_opnd_info)
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 , __builtin_object_size (
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 &inst->operands[dst]
# 469 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 , 0))
                              
# 470 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                             ;
  inst->operands[dst].idx = dst;
}



static inline unsigned int
get_logsz (unsigned int size)
{
  const unsigned char ls[16] =
    {0, 1, -1, 2, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, 4};
  if (size > 16)
    {
      
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     (__builtin_expect(!(
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     0
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 483, 
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
     "0"
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
     ) : (void)0)
# 483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
               ;
      return -1;
    }
  
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 (__builtin_expect(!(
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 ls[size - 1] != (unsigned char)-1
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h", 486, 
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
 "ls[size - 1] != (unsigned char)-1"
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h" 3 4
 ) : (void)0)
# 486 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.h"
                                           ;
  return ls[size - 1];
}
# 25 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h" 2
# 36 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
const aarch64_opcode* aarch64_opcode_lookup (uint32_t);
const aarch64_opcode* aarch64_find_next_opcode (const aarch64_opcode *);
# 48 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.h"
const aarch64_opcode* aarch64_find_alias_opcode (const aarch64_opcode *);
const aarch64_opcode* aarch64_find_next_alias_opcode (const aarch64_opcode *);



bfd_boolean
aarch64_extract_operand (const aarch64_operand *, aarch64_opnd_info *,
    const aarch64_insn, const aarch64_inst *,
    aarch64_operand_error *);



#define AARCH64_DECL_OPD_EXTRACTOR(x) bfd_boolean aarch64_ ##x (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *)




bfd_boolean aarch64_ext_regno (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_regno_pair (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_regrt_sysins (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reglane (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reglist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ldst_reglist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ldst_reglist_r (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ldst_elemlist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_advsimd_imm_shift (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_shll_imm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm_half (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_advsimd_imm_modified (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_fpimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_fbits (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_aimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_limm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_inv_limm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_ft (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_simple (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_offset (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_regoff (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_simm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_simm10 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_addr_uimm12 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_simd_addr_post (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_cond (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sysreg (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_pstatefield (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sysins_op (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_barrier (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_hint (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_prfop (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reg_extended (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_reg_shifted (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s4 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s4xvl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s6xvl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_s9xvl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_ri_u6 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_rr_lsl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_rz_xtw (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zi_u5 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zz_lsl (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zz_sxtw (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_addr_zz_uxtw (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_aimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_asimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_float_half_one (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_float_half_two (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_float_zero_one (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_index (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_limm_mov (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_quad_index (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_reglist (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_scale (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_shlimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_sve_shrimm (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm_rotate1 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);
bfd_boolean aarch64_ext_imm_rotate2 (const aarch64_operand *, aarch64_opnd_info *, const aarch64_insn, const aarch64_inst *, aarch64_operand_error *);

#undef AARCH64_DECL_OPD_EXTRACTOR
# 26 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 2
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 1 3 4
# 24 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
#define _LIBELF_H_ 1

# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/common.h" 1 3 4
# 33 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/common.h" 3 4
#define _ELF_COMMON_H 



#define EI_MAG0 0
#define ELFMAG0 0x7F

#define EI_MAG1 1
#define ELFMAG1 'E'

#define EI_MAG2 2
#define ELFMAG2 'L'

#define EI_MAG3 3
#define ELFMAG3 'F'

#define EI_CLASS 4
#define ELFCLASSNONE 0
#define ELFCLASS32 1
#define ELFCLASS64 2

#define EI_DATA 5
#define ELFDATANONE 0
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

#define EI_VERSION 6

#define EI_OSABI 7
#define ELFOSABI_NONE 0
#define ELFOSABI_HPUX 1
#define ELFOSABI_NETBSD 2
#define ELFOSABI_LINUX 3
#define ELFOSABI_HURD 4
#define ELFOSABI_SOLARIS 6
#define ELFOSABI_AIX 7
#define ELFOSABI_IRIX 8
#define ELFOSABI_FREEBSD 9
#define ELFOSABI_TRU64 10
#define ELFOSABI_MODESTO 11
#define ELFOSABI_OPENBSD 12
#define ELFOSABI_OPENVMS 13
#define ELFOSABI_NSK 14
#define ELFOSABI_AROS 15
#define ELFOSABI_ARM 97
#define ELFOSABI_STANDALONE 255

#define EI_ABIVERSION 8

#define EI_PAD 9




#define ET_NONE 0
#define ET_REL 1
#define ET_EXEC 2
#define ET_DYN 3
#define ET_CORE 4
#define ET_LOOS 0xFE00
#define ET_HIOS 0xFEFF
#define ET_LOPROC 0xFF00
#define ET_HIPROC 0xFFFF





#define EM_NONE 0
#define EM_M32 1
#define EM_SPARC 2
#define EM_386 3
#define EM_68K 4
#define EM_88K 5
#define EM_486 6
#define EM_860 7
#define EM_MIPS 8
#define EM_S370 9
#define EM_MIPS_RS3_LE 10

#define EM_PARISC 15

#define EM_VPP550 17
#define EM_SPARC32PLUS 18
#define EM_960 19
#define EM_PPC 20
#define EM_PPC64 21
#define EM_S390 22
#define EM_SPU 23

#define EM_V800 36
#define EM_FR20 37
#define EM_RH32 38
#define EM_MCORE 39
#define EM_RCE 39
#define EM_ARM 40
#define EM_OLD_ALPHA 41
#define EM_SH 42
#define EM_SPARCV9 43
#define EM_TRICORE 44
#define EM_ARC 45
#define EM_H8_300 46
#define EM_H8_300H 47
#define EM_H8S 48
#define EM_H8_500 49
#define EM_IA_64 50
#define EM_MIPS_X 51
#define EM_COLDFIRE 52
#define EM_68HC12 53
#define EM_MMA 54
#define EM_PCP 55
#define EM_NCPU 56
#define EM_NDR1 57
#define EM_STARCORE 58
#define EM_ME16 59
#define EM_ST100 60
#define EM_TINYJ 61
#define EM_X86_64 62

#define EM_PDP10 64
#define EM_PDP11 65
#define EM_FX66 66
#define EM_ST9PLUS 67
#define EM_ST7 68
#define EM_68HC16 69
#define EM_68HC11 70
#define EM_68HC08 71
#define EM_68HC05 72
#define EM_SVX 73
#define EM_ST19 74
#define EM_VAX 75
#define EM_CRIS 76
#define EM_JAVELIN 77
#define EM_FIREPATH 78
#define EM_ZSP 79
#define EM_MMIX 80
#define EM_HUANY 81
#define EM_PRISM 82
#define EM_AVR 83
#define EM_FR30 84
#define EM_D10V 85
#define EM_D30V 86
#define EM_V850 87
#define EM_M32R 88
#define EM_MN10300 89
#define EM_MN10200 90
#define EM_PJ 91
#define EM_OPENRISC 92
#define EM_ARC_A5 93
#define EM_XTENSA 94
#define EM_IP2K 101
#define EM_CR 103
#define EM_MSP430 105
#define EM_BLACKFIN 106
#define EM_ALTERA_NIOS2 113
#define EM_CRX 114
#define EM_CR16 115
#define EM_SCORE 135
# 204 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/common.h" 3 4
#define EM_RISCV 243



#define EM_OLD_SPARCV9 11


#define EM_PPC_OLD 17


#define EM_PJ_OLD 99


#define EM_AVR_OLD 0x1057


#define EM_MSP430_OLD 0x1059


#define EM_MT 0x2530


#define EM_CYGNUS_FR30 0x3330


#define EM_OPENRISC_OLD 0x3426


#define EM_BA2_NON_STANDARD 0x8472


#define EM_DLX 0x5aa5


#define EM_CYGNUS_FRV 0x5441


#define EM_XC16X 0x4688


#define EM_CYGNUS_D10V 0x7650


#define EM_CYGNUS_D30V 0x7676


#define EM_IP2K_OLD 0x8217


#define EM_OR32 0x8472


#define EM_CYGNUS_POWERPC 0x9025


#define EM_ALPHA 0x9026


#define EM_CYGNUS_M32R 0x9041


#define EM_CYGNUS_V850 0x9080


#define EM_S390_OLD 0xa390


#define EM_XTENSA_OLD 0xabc7

#define EM_XSTORMY16 0xad45



#define EM_CYGNUS_MN10300 0xbeef
#define EM_CYGNUS_MN10200 0xdead


#define EM_M32C 0xFEB0


#define EM_IQ2000 0xFEBA


#define EM_NIOS32 0xFEBB

#define EM_CYGNUS_MEP 0xF00D





#define EV_NONE 0
#define EV_CURRENT 1



#define PT_NULL 0
#define PT_LOAD 1
#define PT_DYNAMIC 2
#define PT_INTERP 3
#define PT_NOTE 4
#define PT_SHLIB 5
#define PT_PHDR 6
#define PT_TLS 7
#define PT_LOOS 0x60000000
#define PT_HIOS 0x6fffffff
#define PT_LOPROC 0x70000000
#define PT_HIPROC 0x7FFFFFFF

#define PT_GNU_EH_FRAME (PT_LOOS + 0x474e550)
#define PT_SUNW_EH_FRAME PT_GNU_EH_FRAME
#define PT_GNU_STACK (PT_LOOS + 0x474e551)
#define PT_GNU_RELRO (PT_LOOS + 0x474e552)



#define PF_X (1 << 0)
#define PF_W (1 << 1)
#define PF_R (1 << 2)

#define PF_MASKOS 0x0FF00000
#define PF_MASKPROC 0xF0000000



#define SHT_NULL 0
#define SHT_PROGBITS 1
#define SHT_SYMTAB 2
#define SHT_STRTAB 3
#define SHT_RELA 4
#define SHT_HASH 5
#define SHT_DYNAMIC 6
#define SHT_NOTE 7
#define SHT_NOBITS 8
#define SHT_REL 9
#define SHT_SHLIB 10
#define SHT_DYNSYM 11

#define SHT_INIT_ARRAY 14
#define SHT_FINI_ARRAY 15
#define SHT_PREINIT_ARRAY 16
#define SHT_GROUP 17
#define SHT_SYMTAB_SHNDX 18

#define SHT_LOOS 0x60000000
#define SHT_HIOS 0x6fffffff

#define SHT_GNU_ATTRIBUTES 0x6ffffff5
#define SHT_GNU_HASH 0x6ffffff6
#define SHT_GNU_LIBLIST 0x6ffffff7




#define SHT_SUNW_verdef 0x6ffffffd
#define SHT_SUNW_verneed 0x6ffffffe
#define SHT_SUNW_versym 0x6fffffff

#define SHT_GNU_verdef SHT_SUNW_verdef
#define SHT_GNU_verneed SHT_SUNW_verneed
#define SHT_GNU_versym SHT_SUNW_versym

#define SHT_LOPROC 0x70000000
#define SHT_HIPROC 0x7FFFFFFF
#define SHT_LOUSER 0x80000000

#define SHT_HIUSER 0xFFFFFFFF



#define SHF_WRITE (1 << 0)
#define SHF_ALLOC (1 << 1)
#define SHF_EXECINSTR (1 << 2)
#define SHF_MERGE (1 << 4)
#define SHF_STRINGS (1 << 5)
#define SHF_INFO_LINK (1 << 6)
#define SHF_LINK_ORDER (1 << 7)
#define SHF_OS_NONCONFORMING (1 << 8)
#define SHF_GROUP (1 << 9)
#define SHF_TLS (1 << 10)


#define SHF_MASKOS 0x0FF00000
#define SHF_MASKPROC 0xF0000000



#define NT_PRSTATUS 1
#define NT_FPREGSET 2
#define NT_PRPSINFO 3
#define NT_TASKSTRUCT 4
#define NT_AUXV 6
#define NT_PRXFPREG 0x46e62b7f




#define NT_PSTATUS 10
#define NT_FPREGS 12
#define NT_PSINFO 13
#define NT_LWPSTATUS 16
#define NT_LWPSINFO 17
#define NT_WIN32PSTATUS 18





#define NT_NETBSDCORE_PROCINFO 1
#define NT_NETBSDCORE_FIRSTMACH 32




#define NT_SPU 1



#define NT_VERSION 1
#define NT_ARCH 2



#define NT_GNU_ABI_TAG 1
#define NT_GNU_HWCAP 2
#define NT_GNU_BUILD_ID 3


#define GNU_ABI_TAG_LINUX 0
#define GNU_ABI_TAG_HURD 1
#define GNU_ABI_TAG_SOLARIS 2
#define GNU_ABI_TAG_FREEBSD 3
#define GNU_ABI_TAG_NETBSD 4



#define NT_NETBSD_IDENT 1



#define NT_OPENBSD_IDENT 1



#define NT_FREEBSD_ABI_TAG 1





#define ELF_ST_BIND(val) (((unsigned int)(val)) >> 4)
#define ELF_ST_TYPE(val) ((val) & 0xF)
#define ELF_ST_INFO(bind,type) (((bind) << 4) + ((type) & 0xF))



#define ELF32_ST_BIND ELF_ST_BIND
#define ELF32_ST_TYPE ELF_ST_TYPE
#define ELF32_ST_INFO ELF_ST_INFO
#define ELF64_ST_BIND ELF_ST_BIND
#define ELF64_ST_TYPE ELF_ST_TYPE
#define ELF64_ST_INFO ELF_ST_INFO




#define ELF_ST_VISIBILITY(v) ((v) & 0x3)



#define ELF32_ST_VISIBILITY ELF_ST_VISIBILITY
#define ELF64_ST_VISIBILITY ELF_ST_VISIBILITY


#define STN_UNDEF 0

#define STB_LOCAL 0
#define STB_GLOBAL 1
#define STB_WEAK 2
#define STB_LOOS 10
#define STB_HIOS 12
#define STB_LOPROC 13
#define STB_HIPROC 15

#define STT_NOTYPE 0
#define STT_OBJECT 1
#define STT_FUNC 2
#define STT_SECTION 3
#define STT_FILE 4
#define STT_COMMON 5
#define STT_TLS 6
#define STT_RELC 8
#define STT_SRELC 9
#define STT_LOOS 10
#define STT_HIOS 12
#define STT_LOPROC 13
#define STT_HIPROC 15




#define SHN_UNDEF 0
#define SHN_LORESERVE 0xFF00
#define SHN_LOPROC 0xFF00
#define SHN_HIPROC 0xFF1F
#define SHN_LOOS 0xFF20
#define SHN_HIOS 0xFF3F
#define SHN_ABS 0xFFF1
#define SHN_COMMON 0xFFF2
#define SHN_XINDEX 0xFFFF
#define SHN_HIRESERVE 0xFFFF
#define SHN_BAD ((unsigned) -1)




#define STV_DEFAULT 0
#define STV_INTERNAL 1
#define STV_HIDDEN 2
#define STV_PROTECTED 3



#define ELF32_R_SYM(i) ((i) >> 8)
#define ELF32_R_TYPE(i) ((i) & 0xff)
#define ELF32_R_INFO(s,t) (((s) << 8) + ((t) & 0xff))

#define ELF64_R_SYM(i) ((i) >> 32)
#define ELF64_R_TYPE(i) ((i) & 0xffffffff)
#define ELF64_R_INFO(s,t) (((bfd_vma) (s) << 31 << 1) + (bfd_vma) (t))



#define DT_NULL 0
#define DT_NEEDED 1
#define DT_PLTRELSZ 2
#define DT_PLTGOT 3
#define DT_HASH 4
#define DT_STRTAB 5
#define DT_SYMTAB 6
#define DT_RELA 7
#define DT_RELASZ 8
#define DT_RELAENT 9
#define DT_STRSZ 10
#define DT_SYMENT 11
#define DT_INIT 12
#define DT_FINI 13
#define DT_SONAME 14
#define DT_RPATH 15
#define DT_SYMBOLIC 16
#define DT_REL 17
#define DT_RELSZ 18
#define DT_RELENT 19
#define DT_PLTREL 20
#define DT_DEBUG 21
#define DT_TEXTREL 22
#define DT_JMPREL 23
#define DT_BIND_NOW 24
#define DT_INIT_ARRAY 25
#define DT_FINI_ARRAY 26
#define DT_INIT_ARRAYSZ 27
#define DT_FINI_ARRAYSZ 28
#define DT_RUNPATH 29
#define DT_FLAGS 30
#define DT_ENCODING 32
#define DT_PREINIT_ARRAY 32
#define DT_PREINIT_ARRAYSZ 33




#define OLD_DT_LOOS 0x60000000
#define DT_LOOS 0x6000000d
#define DT_HIOS 0x6ffff000
#define OLD_DT_HIOS 0x6fffffff

#define DT_LOPROC 0x70000000
#define DT_HIPROC 0x7fffffff





#define DT_VALRNGLO 0x6ffffd00
#define DT_GNU_PRELINKED 0x6ffffdf5
#define DT_GNU_CONFLICTSZ 0x6ffffdf6
#define DT_GNU_LIBLISTSZ 0x6ffffdf7
#define DT_CHECKSUM 0x6ffffdf8
#define DT_PLTPADSZ 0x6ffffdf9
#define DT_MOVEENT 0x6ffffdfa
#define DT_MOVESZ 0x6ffffdfb
#define DT_FEATURE 0x6ffffdfc
#define DT_POSFLAG_1 0x6ffffdfd
#define DT_SYMINSZ 0x6ffffdfe
#define DT_SYMINENT 0x6ffffdff
#define DT_VALRNGHI 0x6ffffdff

#define DT_ADDRRNGLO 0x6ffffe00
#define DT_GNU_HASH 0x6ffffef5
#define DT_TLSDESC_PLT 0x6ffffef6
#define DT_TLSDESC_GOT 0x6ffffef7
#define DT_GNU_CONFLICT 0x6ffffef8
#define DT_GNU_LIBLIST 0x6ffffef9
#define DT_CONFIG 0x6ffffefa
#define DT_DEPAUDIT 0x6ffffefb
#define DT_AUDIT 0x6ffffefc
#define DT_PLTPAD 0x6ffffefd
#define DT_MOVETAB 0x6ffffefe
#define DT_SYMINFO 0x6ffffeff
#define DT_ADDRRNGHI 0x6ffffeff

#define DT_RELACOUNT 0x6ffffff9
#define DT_RELCOUNT 0x6ffffffa
#define DT_FLAGS_1 0x6ffffffb
#define DT_VERDEF 0x6ffffffc
#define DT_VERDEFNUM 0x6ffffffd
#define DT_VERNEED 0x6ffffffe
#define DT_VERNEEDNUM 0x6fffffff


#define DT_VERSYM 0x6ffffff0

#define DT_LOPROC 0x70000000
#define DT_HIPROC 0x7fffffff




#define DT_AUXILIARY 0x7ffffffd
#define DT_USED 0x7ffffffe
#define DT_FILTER 0x7fffffff



#define DTF_1_PARINIT 0x00000001






#define DTF_1_CONFEXP 0x00000002


#define DF_P1_LAZYLOAD 0x00000001
#define DF_P1_GROUPPERM 0x00000002


#define DF_1_NOW 0x00000001
#define DF_1_GLOBAL 0x00000002
#define DF_1_GROUP 0x00000004
#define DF_1_NODELETE 0x00000008
#define DF_1_LOADFLTR 0x00000010
#define DF_1_INITFIRST 0x00000020
#define DF_1_NOOPEN 0x00000040
#define DF_1_ORIGIN 0x00000080
#define DF_1_DIRECT 0x00000100
#define DF_1_TRANS 0x00000200
#define DF_1_INTERPOSE 0x00000400
#define DF_1_NODEFLIB 0x00000800
#define DF_1_NODUMP 0x00001000
#define DF_1_CONLFAT 0x00002000


#define DF_ORIGIN (1 << 0)
#define DF_SYMBOLIC (1 << 1)
#define DF_TEXTREL (1 << 2)
#define DF_BIND_NOW (1 << 3)
#define DF_STATIC_TLS (1 << 4)




#define VER_DEF_NONE 0
#define VER_DEF_CURRENT 1




#define VER_FLG_BASE 0x1
#define VER_FLG_WEAK 0x2



#define VER_NDX_LOCAL 0
#define VER_NDX_GLOBAL 1




#define VER_NEED_NONE 0
#define VER_NEED_CURRENT 1





#define VERSYM_HIDDEN 0x8000



#define VERSYM_VERSION 0x7fff







#define ELF_VER_CHR '@'



#define SYMINFO_BT_SELF 0xffff
#define SYMINFO_BT_PARENT 0xfffe
#define SYMINFO_BT_LOWRESERVE 0xff00



#define SYMINFO_FLG_DIRECT 0x0001
#define SYMINFO_FLG_PASSTHRU 0x0002
#define SYMINFO_FLG_COPY 0x0004
#define SYMINFO_FLG_LAZYLOAD 0x0008



#define SYMINFO_NONE 0
#define SYMINFO_CURRENT 1
#define SYMINFO_NUM 2



#define GRP_COMDAT 0x1



#define AT_NULL 0
#define AT_IGNORE 1
#define AT_EXECFD 2
#define AT_PHDR 3
#define AT_PHENT 4
#define AT_PHNUM 5
#define AT_PAGESZ 6
#define AT_BASE 7
#define AT_FLAGS 8
#define AT_ENTRY 9
#define AT_NOTELF 10
#define AT_UID 11
#define AT_EUID 12
#define AT_GID 13
#define AT_EGID 14
#define AT_CLKTCK 17
#define AT_PLATFORM 15
#define AT_HWCAP 16

#define AT_FPUCW 18
#define AT_DCACHEBSIZE 19
#define AT_ICACHEBSIZE 20
#define AT_UCACHEBSIZE 21
#define AT_IGNOREPPC 22
#define AT_SECURE 23


#define AT_SYSINFO 32
#define AT_SYSINFO_EHDR 33

#define AT_SUN_UID 2000
#define AT_SUN_RUID 2001
#define AT_SUN_GID 2002
#define AT_SUN_RGID 2003
#define AT_SUN_LDELF 2004
#define AT_SUN_LDSHDR 2005
#define AT_SUN_LDNAME 2006
#define AT_SUN_LPAGESZ 2007
#define AT_SUN_PLATFORM 2008
#define AT_SUN_HWCAP 2009

#define AT_SUN_IFLUSH 2010
#define AT_SUN_CPU 2011
#define AT_SUN_EMUL_ENTRY 2012
#define AT_SUN_EMUL_EXECFD 2013
#define AT_SUN_EXECNAME 2014
#define AT_SUN_MMU 2015
#define AT_SUN_LDDATA 2016
# 27 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 1 3 4
# 38 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 3 4
#define _ELF_INTERNAL_H 



#define EI_NIDENT 16


# 44 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 3 4
typedef struct elf_internal_ehdr {
  unsigned char e_ident[16];
  bfd_vma e_entry;
  bfd_size_type e_phoff;
  bfd_size_type e_shoff;
  unsigned long e_version;
  unsigned long e_flags;
  unsigned short e_type;
  unsigned short e_machine;
  unsigned int e_ehsize;
  unsigned int e_phentsize;
  unsigned int e_phnum;
  unsigned int e_shentsize;
  unsigned int e_shnum;
  unsigned int e_shstrndx;
} Elf_Internal_Ehdr;



struct elf_internal_phdr {
  unsigned long p_type;
  unsigned long p_flags;
  bfd_vma p_offset;
  bfd_vma p_vaddr;
  bfd_vma p_paddr;
  bfd_vma p_filesz;
  bfd_vma p_memsz;
  bfd_vma p_align;
};

typedef struct elf_internal_phdr Elf_Internal_Phdr;



typedef struct elf_internal_shdr {
  unsigned int sh_name;
  unsigned int sh_type;
  bfd_vma sh_flags;
  bfd_vma sh_addr;
  bfd_size_type sh_size;
  bfd_size_type sh_entsize;
  unsigned long sh_link;
  unsigned long sh_info;
  file_ptr sh_offset;
  unsigned int sh_addralign;


  asection * bfd_section;
  unsigned char *contents;
} Elf_Internal_Shdr;



struct elf_internal_sym {
  bfd_vma st_value;
  bfd_vma st_size;
  unsigned long st_name;
  unsigned char st_info;
  unsigned char st_other;
  unsigned int st_shndx;
};

typedef struct elf_internal_sym Elf_Internal_Sym;



typedef struct elf_internal_note {
  unsigned long namesz;
  unsigned long descsz;
  unsigned long type;
  char * namedata;
  char * descdata;
  bfd_vma descpos;
} Elf_Internal_Note;



typedef struct elf_internal_rela {
  bfd_vma r_offset;
  bfd_vma r_info;
  bfd_vma r_addend;
} Elf_Internal_Rela;



typedef struct elf_internal_dyn {

  bfd_vma d_tag;
  union {

    bfd_vma d_val;
    bfd_vma d_ptr;
  } d_un;
} Elf_Internal_Dyn;



typedef struct elf_internal_verdef {
  unsigned short vd_version;
  unsigned short vd_flags;
  unsigned short vd_ndx;
  unsigned short vd_cnt;
  unsigned long vd_hash;
  unsigned long vd_aux;
  unsigned long vd_next;



  bfd *vd_bfd;
  const char *vd_nodename;
  struct elf_internal_verdef *vd_nextdef;
  struct elf_internal_verdaux *vd_auxptr;
  unsigned int vd_exp_refno;
} Elf_Internal_Verdef;



typedef struct elf_internal_verdaux {
  unsigned long vda_name;
  unsigned long vda_next;



  const char *vda_nodename;
  struct elf_internal_verdaux *vda_nextptr;
} Elf_Internal_Verdaux;



typedef struct elf_internal_verneed {
  unsigned short vn_version;
  unsigned short vn_cnt;
  unsigned long vn_file;
  unsigned long vn_aux;
  unsigned long vn_next;



  bfd *vn_bfd;
  const char *vn_filename;
  struct elf_internal_vernaux *vn_auxptr;
  struct elf_internal_verneed *vn_nextref;
} Elf_Internal_Verneed;



typedef struct elf_internal_vernaux {
  unsigned long vna_hash;
  unsigned short vna_flags;
  unsigned short vna_other;
  unsigned long vna_name;
  unsigned long vna_next;



  const char *vna_nodename;
  struct elf_internal_vernaux *vna_nextptr;
} Elf_Internal_Vernaux;




typedef struct elf_internal_versym {
  unsigned short vs_vers;
} Elf_Internal_Versym;


typedef struct
{
  unsigned short int si_boundto;
  unsigned short int si_flags;
} Elf_Internal_Syminfo;


typedef struct
{
  bfd_vma a_type;
  bfd_vma a_val;
} Elf_Internal_Auxv;





struct elf_segment_map
{

  struct elf_segment_map *next;

  unsigned long p_type;

  unsigned long p_flags;

  bfd_vma p_paddr;

  bfd_vma p_vaddr_offset;

  bfd_vma p_align;


  unsigned int p_flags_valid : 1;


  unsigned int p_paddr_valid : 1;


  unsigned int p_align_valid : 1;

  unsigned int includes_filehdr : 1;

  unsigned int includes_phdrs : 1;

  unsigned int count;

  asection *sections[1];
};



#define ELF_SECTION_SIZE(sec_hdr,segment) (((sec_hdr->sh_flags & SHF_TLS) == 0 || sec_hdr->sh_type != SHT_NOBITS || segment->p_type == PT_TLS) ? sec_hdr->sh_size : 0)







#define ELF_IS_SECTION_IN_SEGMENT(sec_hdr,segment) (((((sec_hdr->sh_flags & SHF_TLS) != 0) && (segment->p_type == PT_TLS || segment->p_type == PT_LOAD)) || ((sec_hdr->sh_flags & SHF_TLS) == 0 && segment->p_type != PT_TLS)) && (sec_hdr->sh_type == SHT_NOBITS || ((bfd_vma) sec_hdr->sh_offset >= segment->p_offset && (sec_hdr->sh_offset + ELF_SECTION_SIZE(sec_hdr, segment) <= segment->p_offset + segment->p_filesz))) && ((sec_hdr->sh_flags & SHF_ALLOC) == 0 || (sec_hdr->sh_addr >= segment->p_vaddr && (sec_hdr->sh_addr + ELF_SECTION_SIZE(sec_hdr, segment) <= segment->p_vaddr + segment->p_memsz))))
# 290 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/internal.h" 3 4
#define ELF_IS_SECTION_IN_SEGMENT_FILE(sec_hdr,segment) (sec_hdr->sh_size > 0 && ELF_IS_SECTION_IN_SEGMENT (sec_hdr, segment))




#define ELF_IS_SECTION_IN_SEGMENT_MEMORY(sec_hdr,segment) (ELF_SECTION_SIZE(sec_hdr, segment) > 0 && ELF_IS_SECTION_IN_SEGMENT (sec_hdr, segment))
# 28 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/external.h" 1 3 4
# 36 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/external.h" 3 4
#define _ELF_EXTERNAL_H 



typedef struct {
  unsigned char e_ident[16];
  unsigned char e_type[2];
  unsigned char e_machine[2];
  unsigned char e_version[4];
  unsigned char e_entry[4];
  unsigned char e_phoff[4];
  unsigned char e_shoff[4];
  unsigned char e_flags[4];
  unsigned char e_ehsize[2];
  unsigned char e_phentsize[2];
  unsigned char e_phnum[2];
  unsigned char e_shentsize[2];
  unsigned char e_shnum[2];
  unsigned char e_shstrndx[2];
} Elf32_External_Ehdr;

typedef struct {
  unsigned char e_ident[16];
  unsigned char e_type[2];
  unsigned char e_machine[2];
  unsigned char e_version[4];
  unsigned char e_entry[8];
  unsigned char e_phoff[8];
  unsigned char e_shoff[8];
  unsigned char e_flags[4];
  unsigned char e_ehsize[2];
  unsigned char e_phentsize[2];
  unsigned char e_phnum[2];
  unsigned char e_shentsize[2];
  unsigned char e_shnum[2];
  unsigned char e_shstrndx[2];
} Elf64_External_Ehdr;



typedef struct {
  unsigned char p_type[4];
  unsigned char p_offset[4];
  unsigned char p_vaddr[4];
  unsigned char p_paddr[4];
  unsigned char p_filesz[4];
  unsigned char p_memsz[4];
  unsigned char p_flags[4];
  unsigned char p_align[4];
} Elf32_External_Phdr;

typedef struct {
  unsigned char p_type[4];
  unsigned char p_flags[4];
  unsigned char p_offset[8];
  unsigned char p_vaddr[8];
  unsigned char p_paddr[8];
  unsigned char p_filesz[8];
  unsigned char p_memsz[8];
  unsigned char p_align[8];
} Elf64_External_Phdr;



typedef struct {
  unsigned char sh_name[4];
  unsigned char sh_type[4];
  unsigned char sh_flags[4];
  unsigned char sh_addr[4];
  unsigned char sh_offset[4];
  unsigned char sh_size[4];
  unsigned char sh_link[4];
  unsigned char sh_info[4];
  unsigned char sh_addralign[4];
  unsigned char sh_entsize[4];
} Elf32_External_Shdr;

typedef struct {
  unsigned char sh_name[4];
  unsigned char sh_type[4];
  unsigned char sh_flags[8];
  unsigned char sh_addr[8];
  unsigned char sh_offset[8];
  unsigned char sh_size[8];
  unsigned char sh_link[4];
  unsigned char sh_info[4];
  unsigned char sh_addralign[8];
  unsigned char sh_entsize[8];
} Elf64_External_Shdr;



typedef struct {
  unsigned char st_name[4];
  unsigned char st_value[4];
  unsigned char st_size[4];
  unsigned char st_info[1];
  unsigned char st_other[1];
  unsigned char st_shndx[2];
} Elf32_External_Sym;

typedef struct {
  unsigned char st_name[4];
  unsigned char st_info[1];
  unsigned char st_other[1];
  unsigned char st_shndx[2];
  unsigned char st_value[8];
  unsigned char st_size[8];
} Elf64_External_Sym;

typedef struct {
  unsigned char est_shndx[4];
} Elf_External_Sym_Shndx;



typedef struct {
  unsigned char namesz[4];
  unsigned char descsz[4];
  unsigned char type[4];
  char name[1];
} Elf_External_Note;


typedef struct {
  unsigned char r_offset[4];
  unsigned char r_info[4];
} Elf32_External_Rel;

typedef struct {
  unsigned char r_offset[4];
  unsigned char r_info[4];
  unsigned char r_addend[4];
} Elf32_External_Rela;

typedef struct {
  unsigned char r_offset[8];
  unsigned char r_info[8];
} Elf64_External_Rel;

typedef struct {
  unsigned char r_offset[8];
  unsigned char r_info[8];
  unsigned char r_addend[8];
} Elf64_External_Rela;



typedef struct {
  unsigned char d_tag[4];
  union {
    unsigned char d_val[4];
    unsigned char d_ptr[4];
  } d_un;
} Elf32_External_Dyn;

typedef struct {
  unsigned char d_tag[8];
  union {
    unsigned char d_val[8];
    unsigned char d_ptr[8];
  } d_un;
} Elf64_External_Dyn;







typedef struct {
  unsigned char vd_version[2];
  unsigned char vd_flags[2];
  unsigned char vd_ndx[2];
  unsigned char vd_cnt[2];
  unsigned char vd_hash[4];
  unsigned char vd_aux[4];
  unsigned char vd_next[4];
} Elf_External_Verdef;



typedef struct {
  unsigned char vda_name[4];
  unsigned char vda_next[4];
} Elf_External_Verdaux;



typedef struct {
  unsigned char vn_version[2];
  unsigned char vn_cnt[2];
  unsigned char vn_file[4];
  unsigned char vn_aux[4];
  unsigned char vn_next[4];
} Elf_External_Verneed;



typedef struct {
  unsigned char vna_hash[4];
  unsigned char vna_flags[2];
  unsigned char vna_other[2];
  unsigned char vna_name[4];
  unsigned char vna_next[4];
} Elf_External_Vernaux;




typedef struct {
  unsigned char vs_vers[2];
} __attribute__ ((packed)) Elf_External_Versym;


typedef struct
{
  unsigned char si_boundto[2];
  unsigned char si_flags[2];
} Elf_External_Syminfo;



typedef struct
{
  unsigned char a_type[4];
  unsigned char a_val[4];
} Elf32_External_Auxv;

typedef struct
{
  unsigned char a_type[8];
  unsigned char a_val[8];
} Elf64_External_Auxv;



#define GRP_ENTRY_SIZE 4
# 29 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 1 3 4
# 23 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
#define BFDLINK_H 




enum bfd_link_strip
{
  strip_none,
  strip_debugger,
  strip_some,
  strip_all
};



enum bfd_link_discard
{
  discard_sec_merge,

  discard_none,
  discard_l,
  discard_all
};




enum bfd_link_hash_table_type
  {
    bfd_link_generic_hash_table,
    bfd_link_elf_hash_table
  };




enum bfd_link_hash_type
{
  bfd_link_hash_new,
  bfd_link_hash_undefined,
  bfd_link_hash_undefweak,
  bfd_link_hash_defined,
  bfd_link_hash_defweak,
  bfd_link_hash_common,
  bfd_link_hash_indirect,
  bfd_link_hash_warning
};

enum bfd_link_common_skip_ar_aymbols
{
  bfd_link_common_skip_none,
  bfd_link_common_skip_text,
  bfd_link_common_skip_data,
  bfd_link_common_skip_all
};




struct bfd_link_hash_entry
{

  struct bfd_hash_entry root;


  enum bfd_link_hash_type type;


  union
    {


      struct
 {
# 116 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
   struct bfd_link_hash_entry *next;
   bfd *abfd;
   bfd *weak;
 } undef;

      struct
 {
   struct bfd_link_hash_entry *next;
   asection *section;
   bfd_vma value;
 } def;

      struct
 {
   struct bfd_link_hash_entry *next;
   struct bfd_link_hash_entry *link;
   const char *warning;
 } i;

      struct
 {
   struct bfd_link_hash_entry *next;
# 147 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
   struct bfd_link_hash_common_entry
     {
       unsigned int alignment_power;
       asection *section;
     } *p;
   bfd_size_type size;
 } c;
    } u;
};




struct bfd_link_hash_table
{

  struct bfd_hash_table table;




  const bfd_target *creator;


  struct bfd_link_hash_entry *undefs;

  struct bfd_link_hash_entry *undefs_tail;

  enum bfd_link_hash_table_type type;
};




extern struct bfd_link_hash_entry *bfd_link_hash_lookup
  (struct bfd_link_hash_table *, const char *, bfd_boolean create,
   bfd_boolean copy, bfd_boolean follow);





extern struct bfd_link_hash_entry *bfd_wrapped_link_hash_lookup
  (bfd *, struct bfd_link_info *, const char *, bfd_boolean,
   bfd_boolean, bfd_boolean);


extern void bfd_link_hash_traverse
  (struct bfd_link_hash_table *,
    bfd_boolean (*) (struct bfd_link_hash_entry *, void *),
    void *);


extern void bfd_link_add_undef
  (struct bfd_link_hash_table *, struct bfd_link_hash_entry *);


extern void bfd_link_repair_undef_list
  (struct bfd_link_hash_table *table);

struct bfd_sym_chain
{
  struct bfd_sym_chain *next;
  const char *name;
};



enum report_method
{



  RM_NOT_YET_SET = 0,
  RM_IGNORE,
  RM_GENERATE_WARNING,
  RM_GENERATE_ERROR
};




struct bfd_link_info
{

  unsigned int relocatable: 1;



  unsigned int emitrelocations: 1;




  unsigned int task_link: 1;


  unsigned int shared: 1;


  unsigned int symbolic: 1;



  unsigned int export_dynamic: 1;


  unsigned int static_link: 1;





  unsigned int traditional_format: 1;



  unsigned int optimize: 1;


  unsigned int allow_multiple_definition: 1;


  unsigned int allow_undefined_version: 1;



  unsigned int create_default_symver: 1;



  unsigned int default_imported_symver: 1;



  unsigned int keep_memory: 1;



  unsigned int notice_all: 1;



  unsigned int nocopyreloc: 1;


  unsigned int new_dtags: 1;



  unsigned int combreloc: 1;



  unsigned int eh_frame_hdr: 1;


  unsigned int strip_discarded: 1;


  unsigned int pie: 1;


  unsigned int executable : 1;



  unsigned int execstack: 1;



  unsigned int noexecstack: 1;


  unsigned int relro: 1;



  unsigned int execheap: 1;



  unsigned int noexecheap: 1;


  unsigned int warn_shared_textrel: 1;


  unsigned int gc_sections: 1;






  enum report_method unresolved_syms_in_objects;



  enum report_method unresolved_syms_in_shared_libs;


  enum bfd_link_strip strip;


  enum bfd_link_discard discard;



  enum bfd_link_common_skip_ar_aymbols common_skip_ar_aymbols;




  char wrap_char;


  const struct bfd_link_callbacks *callbacks;


  struct bfd_link_hash_table *hash;



  struct bfd_hash_table *keep_hash;




  struct bfd_hash_table *notice_hash;



  struct bfd_hash_table *wrap_hash;



  bfd *input_bfds;






  asection *create_object_symbols_section;



  struct bfd_sym_chain *gc_sym_list;


  void *base_file;



  const char *init_function;



  const char *fini_function;





  int relax_pass;




  int pei386_auto_import;




  int pei386_runtime_pseudo_reloc;


  unsigned int spare_dynamic_tags;


  bfd_vma flags;


  bfd_vma flags_1;


  bfd_vma relro_start, relro_end;
};
# 444 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_link_callbacks
{




  bfd_boolean (*add_archive_element)
    (struct bfd_link_info *, bfd *abfd, const char *name);






  bfd_boolean (*multiple_definition)
    (struct bfd_link_info *, const char *name,
     bfd *obfd, asection *osec, bfd_vma oval,
     bfd *nbfd, asection *nsec, bfd_vma nval);
# 473 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
  bfd_boolean (*multiple_common)
    (struct bfd_link_info *, const char *name,
     bfd *obfd, enum bfd_link_hash_type otype, bfd_vma osize,
     bfd *nbfd, enum bfd_link_hash_type ntype, bfd_vma nsize);






  bfd_boolean (*add_to_set)
    (struct bfd_link_info *, struct bfd_link_hash_entry *entry,
     bfd_reloc_code_real_type reloc, bfd *abfd, asection *sec, bfd_vma value);






  bfd_boolean (*constructor)
    (struct bfd_link_info *, bfd_boolean constructor, const char *name,
     bfd *abfd, asection *sec, bfd_vma value);







  bfd_boolean (*warning)
    (struct bfd_link_info *, const char *warning, const char *symbol,
     bfd *abfd, asection *section, bfd_vma address);





  bfd_boolean (*undefined_symbol)
    (struct bfd_link_info *, const char *name, bfd *abfd,
     asection *section, bfd_vma address, bfd_boolean fatal);
# 521 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
  bfd_boolean (*reloc_overflow)
    (struct bfd_link_info *, struct bfd_link_hash_entry *entry,
     const char *name, const char *reloc_name, bfd_vma addend,
     bfd *abfd, asection *section, bfd_vma address);






  bfd_boolean (*reloc_dangerous)
    (struct bfd_link_info *, const char *message,
     bfd *abfd, asection *section, bfd_vma address);






  bfd_boolean (*unattached_reloc)
    (struct bfd_link_info *, const char *name,
     bfd *abfd, asection *section, bfd_vma address);




  bfd_boolean (*notice)
    (struct bfd_link_info *, const char *name,
     bfd *abfd, asection *section, bfd_vma address);

  void (*einfo)
    (const char *fmt, ...);
};






enum bfd_link_order_type
{
  bfd_undefined_link_order,
  bfd_indirect_link_order,
  bfd_data_link_order,
  bfd_section_reloc_link_order,
  bfd_symbol_reloc_link_order
};




struct bfd_link_order
{

  struct bfd_link_order *next;

  enum bfd_link_order_type type;

  bfd_vma offset;

  bfd_size_type size;

  union
    {
      struct
 {






   asection *section;
 } indirect;
      struct
 {




   unsigned int size;

   bfd_byte *contents;
 } data;
      struct
 {



   struct bfd_link_order_reloc *p;
 } reloc;
    } u;
};
# 627 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_link_order_reloc
{

  bfd_reloc_code_real_type reloc;

  union
    {



      asection *section;


      const char *name;
    } u;






  bfd_vma addend;
};


extern struct bfd_link_order *bfd_new_link_order (bfd *, asection *);
# 661 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/bfdlink.h" 3 4
struct bfd_elf_version_expr
{

  struct bfd_elf_version_expr *next;

  const char *pattern;

  const char *symbol;

  unsigned int symver : 1;

  unsigned int script : 1;

#define BFD_ELF_VERSION_C_TYPE 1
#define BFD_ELF_VERSION_CXX_TYPE 2
#define BFD_ELF_VERSION_JAVA_TYPE 4
  unsigned int mask : 3;
};

struct bfd_elf_version_expr_head
{

  struct bfd_elf_version_expr *list;

  void *htab;

  struct bfd_elf_version_expr *remaining;

  unsigned int mask;
};



struct bfd_elf_version_deps
{

  struct bfd_elf_version_deps *next;

  struct bfd_elf_version_tree *version_needed;
};



struct bfd_elf_version_tree
{

  struct bfd_elf_version_tree *next;

  const char *name;

  unsigned int vernum;

  struct bfd_elf_version_expr_head globals;

  struct bfd_elf_version_expr_head locals;

  struct bfd_elf_version_deps *deps;

  unsigned int name_indx;

  int used;

  struct bfd_elf_version_expr *(*match)
    (struct bfd_elf_version_expr_head *head,
     struct bfd_elf_version_expr *prev, const char *sym);
};
# 30 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 2 3 4




#define NUM_SHDR_ENTRIES(shdr) ((shdr)->sh_size / (shdr)->sh_entsize)
# 47 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
#define NAME(x,y) x ## NOSIZE ## _ ## y


#define ElfNAME(X) NAME(Elf,X)
#define elfNAME(X) NAME(elf,X)






typedef struct
{

  asymbol symbol;

  Elf_Internal_Sym internal_elf_sym;

  union
    {
      unsigned int hppa_arg_reloc;
      void *mips_extr;
      void *any;
    }
  tc_data;




  unsigned short version;

} elf_symbol_type;

struct elf_strtab_hash;
struct got_entry;
struct plt_entry;



struct elf_link_hash_entry
{
  struct bfd_link_hash_entry root;



  long indx;
# 106 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  long dynindx;
# 117 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  union gotplt_union
    {
      bfd_signed_vma refcount;
      bfd_vma offset;
      struct got_entry *glist;
      struct plt_entry *plist;
    } got;


  union gotplt_union plt;


  bfd_size_type size;


  unsigned int type : 8;


  unsigned int other : 8;


  unsigned int ref_regular : 1;

  unsigned int def_regular : 1;

  unsigned int ref_dynamic : 1;

  unsigned int def_dynamic : 1;

  unsigned int ref_regular_nonweak : 1;

  unsigned int dynamic_adjusted : 1;

  unsigned int needs_copy : 1;

  unsigned int needs_plt : 1;

  unsigned int non_elf : 1;

  unsigned int hidden : 1;

  unsigned int forced_local : 1;

  unsigned int dynamic : 1;

  unsigned int mark : 1;


  unsigned int non_got_ref : 1;



  unsigned int dynamic_def : 1;

  unsigned int dynamic_weak : 1;


  unsigned int pointer_equality_needed : 1;


  unsigned long dynstr_index;

  union
  {



    struct elf_link_hash_entry *weakdef;




    unsigned long elf_hash_value;
  } u;


  union
  {



    Elf_Internal_Verdef *verdef;



    struct bfd_elf_version_tree *vertree;
  } verinfo;

  struct
  {




    size_t size;
    bfd_boolean *used;


    struct elf_link_hash_entry *parent;
  } *vtable;
};







#define SYMBOL_REFERENCES_LOCAL(INFO,H) _bfd_elf_symbol_refs_local_p (H, INFO, 0)



#define SYMBOL_CALLS_LOCAL(INFO,H) _bfd_elf_symbol_refs_local_p (H, INFO, 1)




#define ELF_COMMON_DEF_P(H) (!(H)->def_regular && !(H)->def_dynamic && (H)->root.type == bfd_link_hash_defined)






struct elf_link_local_dynamic_entry
{
  struct elf_link_local_dynamic_entry *next;


  bfd *input_bfd;


  long input_indx;


  long dynindx;


  Elf_Internal_Sym isym;
};

struct elf_link_loaded_list
{
  struct elf_link_loaded_list *next;
  bfd *abfd;
};


struct eh_cie_fde
{

  struct eh_cie_fde *cie_inf;
  unsigned int size;
  unsigned int offset;
  unsigned int new_offset;
  unsigned char fde_encoding;
  unsigned char lsda_encoding;
  unsigned char lsda_offset;
  unsigned int cie : 1;
  unsigned int removed : 1;
  unsigned int add_augmentation_size : 1;
  unsigned int add_fde_encoding : 1;
  unsigned int make_relative : 1;
  unsigned int make_lsda_relative : 1;
  unsigned int need_lsda_relative : 1;
  unsigned int per_encoding_relative : 1;
  unsigned int *set_loc;
};

struct eh_frame_sec_info
{
  unsigned int count;
  struct eh_cie_fde entry[1];
};

struct eh_frame_array_ent
{
  bfd_vma initial_loc;
  bfd_vma fde;
};

struct htab;

struct eh_frame_hdr_info
{
  struct htab *cies;
  asection *hdr_sec;
  unsigned int fde_count, array_count;
  struct eh_frame_array_ent *array;



  bfd_boolean table;
  bfd_boolean offsets_adjusted;
};



struct elf_link_hash_table
{
  struct bfd_link_hash_table root;



  bfd_boolean dynamic_sections_created;



  bfd_boolean is_relocatable_executable;




  bfd *dynobj;





  union gotplt_union init_got_refcount;
  union gotplt_union init_plt_refcount;



  union gotplt_union init_got_offset;
  union gotplt_union init_plt_offset;



  bfd_size_type dynsymcount;



  struct elf_strtab_hash *dynstr;



  bfd_size_type bucketcount;



  struct bfd_link_needed_list *needed;




  asection *text_index_section;
  asection *data_index_section;


  struct elf_link_hash_entry *hgot;


  struct elf_link_hash_entry *hplt;


  void *merge_info;


  struct stab_info stab_info;


  struct eh_frame_hdr_info eh_info;


  struct elf_link_local_dynamic_entry *dynlocal;



  struct bfd_link_needed_list *runpath;


  asection *tls_sec;
  bfd_size_type tls_size;


  struct elf_link_loaded_list *loaded;
};



#define elf_link_hash_lookup(table,string,create,copy,follow) ((struct elf_link_hash_entry *) bfd_link_hash_lookup (&(table)->root, (string), (create), (copy), (follow)))






#define elf_link_hash_traverse(table,func,info) (bfd_link_hash_traverse (&(table)->root, (bfd_boolean (*) (struct bfd_link_hash_entry *, void *)) (func), (info)))







#define elf_hash_table(p) ((struct elf_link_hash_table *) ((p)->hash))


#define is_elf_hash_table(htab) (((struct bfd_link_hash_table *) (htab))->type == bfd_link_elf_hash_table)




#define LOCAL_SYM_CACHE_SIZE 32
struct sym_sec_cache
{
  bfd *abfd;
  unsigned long indx[32];
  unsigned int shndx[32];
};



struct elf_size_info {
  unsigned char sizeof_ehdr, sizeof_phdr, sizeof_shdr;
  unsigned char sizeof_rel, sizeof_rela, sizeof_sym, sizeof_dyn, sizeof_note;


  unsigned char sizeof_hash_entry;



  unsigned char int_rels_per_ext_rel;


#define MAX_INT_RELS_PER_EXT_REL 3

  unsigned char arch_size, log_file_align;
  unsigned char elfclass, ev_current;
  int (*write_out_phdrs)
    (bfd *, const Elf_Internal_Phdr *, unsigned int);
  bfd_boolean
    (*write_shdrs_and_ehdr) (bfd *);
  bfd_boolean (*checksum_contents)
    (bfd * , void (*) (const void *, size_t, void *), void *);
  void (*write_relocs)
    (bfd *, asection *, void *);
  bfd_boolean (*swap_symbol_in)
    (bfd *, const void *, const void *, Elf_Internal_Sym *);
  void (*swap_symbol_out)
    (bfd *, const Elf_Internal_Sym *, void *, void *);
  bfd_boolean (*slurp_reloc_table)
    (bfd *, asection *, asymbol **, bfd_boolean);
  long (*slurp_symbol_table)
    (bfd *, asymbol **, bfd_boolean);
  void (*swap_dyn_in)
    (bfd *, const void *, Elf_Internal_Dyn *);
  void (*swap_dyn_out)
    (bfd *, const Elf_Internal_Dyn *, void *);




  void (*swap_reloc_in)
    (bfd *, const bfd_byte *, Elf_Internal_Rela *);


  void (*swap_reloc_out)
    (bfd *, const Elf_Internal_Rela *, bfd_byte *);




  void (*swap_reloca_in)
    (bfd *, const bfd_byte *, Elf_Internal_Rela *);


  void (*swap_reloca_out)
    (bfd *, const Elf_Internal_Rela *, bfd_byte *);
};

#define elf_symbol_from(ABFD,S) (((S)->the_bfd->xvec->flavour == bfd_target_elf_flavour && (S)->the_bfd->tdata.elf_obj_data != 0) ? (elf_symbol_type *) (S) : 0)





enum elf_reloc_type_class {
  reloc_class_normal,
  reloc_class_relative,
  reloc_class_plt,
  reloc_class_copy
};

struct elf_reloc_cookie
{
  Elf_Internal_Rela *rels, *rel, *relend;
  Elf_Internal_Sym *locsyms;
  bfd *abfd;
  size_t locsymcount;
  size_t extsymoff;
  struct elf_link_hash_entry **sym_hashes;
  int r_sym_shift;
  bfd_boolean bad_symtab;
};



typedef enum {
  ict_none,
  ict_irix5,
  ict_irix6
} irix_compat_t;


struct bfd_elf_special_section
{
  const char *prefix;
  int prefix_length;






  int suffix_length;
  int type;
  int attr;
};

enum action_discarded
  {
    COMPLAIN = 1,
    PRETEND = 2
  };

typedef asection * (*elf_gc_mark_hook_fn)
  (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
   struct elf_link_hash_entry *, Elf_Internal_Sym *);

struct elf_backend_data
{

  enum bfd_architecture arch;


  int elf_machine_code;


  int elf_osabi;


  bfd_vma maxpagesize;




  bfd_vma minpagesize;


  bfd_vma commonpagesize;


  flagword dynamic_sec_flags;



  void (*elf_info_to_howto)
    (bfd *, arelent *, Elf_Internal_Rela *);



  void (*elf_info_to_howto_rel)
    (bfd *, arelent *, Elf_Internal_Rela *);






  bfd_boolean (*elf_backend_sym_is_global)
    (bfd *, asymbol *);
# 600 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_object_p)
    (bfd *);




  void (*elf_backend_symbol_processing)
    (bfd *, asymbol *);



  bfd_boolean (*elf_backend_symbol_table_processing)
    (bfd *, elf_symbol_type *, unsigned int);



  int (*elf_backend_get_symbol_type)
    (Elf_Internal_Sym *, int);



  struct elf_link_hash_entry * (*elf_backend_archive_symbol_lookup)
    (bfd *, struct bfd_link_info *, const char *);



  bfd_boolean (*elf_backend_name_local_section_symbols)
    (bfd *);





  bfd_boolean (*elf_backend_section_processing)
    (bfd *, Elf_Internal_Shdr *);



  bfd_boolean (*elf_backend_section_from_shdr)
    (bfd *, Elf_Internal_Shdr *, const char *, int);



  bfd_boolean (*elf_backend_section_flags)
    (flagword *, const Elf_Internal_Shdr *);



  const struct bfd_elf_special_section * (*get_sec_type_attr)
    (bfd *, asection *);



  bfd_boolean (*elf_backend_section_from_phdr)
    (bfd *, Elf_Internal_Phdr *, int, const char *);




  bfd_boolean (*elf_backend_fake_sections)
    (bfd *, Elf_Internal_Shdr *, asection *);





  bfd_boolean (*elf_backend_section_from_bfd_section)
    (bfd *, asection *, int *retval);
# 677 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_add_symbol_hook)
    (bfd *abfd, struct bfd_link_info *info, Elf_Internal_Sym *,
     const char **name, flagword *flags, asection **sec, bfd_vma *value);



  bfd_boolean (*elf_backend_link_output_symbol_hook)
    (struct bfd_link_info *info, const char *, Elf_Internal_Sym *,
     asection *, struct elf_link_hash_entry *);
# 695 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_create_dynamic_sections)
    (bfd *abfd, struct bfd_link_info *info);



  bfd_boolean (*elf_backend_omit_section_dynsym)
    (bfd *output_bfd, struct bfd_link_info *info, asection *osec);
# 713 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*check_relocs)
    (bfd *abfd, struct bfd_link_info *info, asection *o,
     const Elf_Internal_Rela *relocs);





  bfd_boolean (*check_directives)
    (bfd *abfd, struct bfd_link_info *info);





  bfd_boolean (*as_needed_cleanup)
    (bfd *abfd, struct bfd_link_info *info);
# 743 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_adjust_dynamic_symbol)
    (struct bfd_link_info *info, struct elf_link_hash_entry *h);





  bfd_boolean (*elf_backend_always_size_sections)
    (bfd *output_bfd, struct bfd_link_info *info);
# 763 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_size_dynamic_sections)
    (bfd *output_bfd, struct bfd_link_info *info);



  void (*elf_backend_init_index_section)
    (bfd *output_bfd, struct bfd_link_info *info);
# 802 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  int (*elf_backend_relocate_section)
    (bfd *output_bfd, struct bfd_link_info *info, bfd *input_bfd,
     asection *input_section, bfd_byte *contents, Elf_Internal_Rela *relocs,
     Elf_Internal_Sym *local_syms, asection **local_sections);
# 814 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  bfd_boolean (*elf_backend_finish_dynamic_symbol)
    (bfd *output_bfd, struct bfd_link_info *info,
     struct elf_link_hash_entry *h, Elf_Internal_Sym *sym);





  bfd_boolean (*elf_backend_finish_dynamic_sections)
    (bfd *output_bfd, struct bfd_link_info *info);



  void (*elf_backend_begin_write_processing)
    (bfd *, struct bfd_link_info *);




  void (*elf_backend_final_write_processing)
    (bfd *, bfd_boolean linker);




  int (*elf_backend_additional_program_headers)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_modify_segment_map)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_modify_program_headers)
    (bfd *, struct bfd_link_info *);



  bfd_boolean (*gc_mark_dynamic_ref)
    (struct elf_link_hash_entry *h, void *inf);



  elf_gc_mark_hook_fn gc_mark_hook;



  bfd_boolean (*gc_mark_extra_sections)
    (struct bfd_link_info *info, elf_gc_mark_hook_fn gc_mark_hook);




  bfd_boolean (*gc_sweep_hook)
    (bfd *abfd, struct bfd_link_info *info, asection *o,
     const Elf_Internal_Rela *relocs);




  void (*elf_backend_post_process_headers)
    (bfd *, struct bfd_link_info *);




  const char *(*elf_backend_print_symbol_all)
    (bfd *, void *, asymbol *);





  bfd_boolean (*elf_backend_output_arch_local_syms)
    (bfd *, struct bfd_link_info *, void *,
     bfd_boolean (*) (void *, const char *, Elf_Internal_Sym *, asection *,
        struct elf_link_hash_entry *));




  bfd_boolean (*elf_backend_output_arch_syms)
    (bfd *, struct bfd_link_info *, void *,
     bfd_boolean (*) (void *, const char *, Elf_Internal_Sym *, asection *,
        struct elf_link_hash_entry *));






  void (*elf_backend_copy_indirect_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *,
     struct elf_link_hash_entry *);



  void (*elf_backend_hide_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);



  bfd_boolean (*elf_backend_fixup_symbol)
    (struct bfd_link_info *, struct elf_link_hash_entry *);


  void (*elf_backend_merge_symbol_attribute)
    (struct elf_link_hash_entry *, const Elf_Internal_Sym *, bfd_boolean,
     bfd_boolean);



  bfd_boolean (*elf_backend_ignore_undef_symbol)
    (struct elf_link_hash_entry *);



  bfd_boolean (*elf_backend_emit_relocs)
    (bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *,
     struct elf_link_hash_entry **);



  unsigned int (*elf_backend_count_relocs)
    (asection *, Elf_Internal_Rela *);



  bfd_boolean (*elf_backend_grok_prstatus)
    (bfd *, Elf_Internal_Note *);



  bfd_boolean (*elf_backend_grok_psinfo)
    (bfd *, Elf_Internal_Note *);


  char *(*elf_backend_write_core_note)
    (bfd *abfd, char *buf, int *bufsiz, int note_type, ...);


  void (* elf_backend_sprintf_vma)
    (bfd *, char *, bfd_vma);
  void (* elf_backend_fprintf_vma)
    (bfd *, void *, bfd_vma);


  enum elf_reloc_type_class (*elf_backend_reloc_type_class)
    (const Elf_Internal_Rela *);



  bfd_boolean (*elf_backend_discard_info)
    (bfd *, struct elf_reloc_cookie *, struct bfd_link_info *);



  bfd_boolean (*elf_backend_ignore_discarded_relocs)
    (asection *);



  unsigned int (*action_discarded)
    (asection *);




  unsigned int (*elf_backend_eh_frame_address_size)
    (bfd *, asection *);




  bfd_boolean (*elf_backend_can_make_relative_eh_frame)
     (bfd *, struct bfd_link_info *, asection *);
  bfd_boolean (*elf_backend_can_make_lsda_relative_eh_frame)
     (bfd *, struct bfd_link_info *, asection *);





  bfd_byte (*elf_backend_encode_eh_address)
     (bfd *abfd, struct bfd_link_info *info,
      asection *osec, bfd_vma offset,
      asection *loc_sec, bfd_vma loc_offset,
      bfd_vma *encoded);



  bfd_boolean (*elf_backend_write_section)
    (bfd *, struct bfd_link_info *, asection *, bfd_byte *);



  irix_compat_t (*elf_backend_mips_irix_compat)
    (bfd *);

  reloc_howto_type *(*elf_backend_mips_rtype_to_howto)
    (unsigned int, bfd_boolean);



  const struct ecoff_debug_swap *elf_backend_ecoff_debug_swap;



  bfd *(*elf_backend_bfd_from_remote_memory)
     (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
      int (*target_read_memory) (bfd_vma vma, bfd_byte *myaddr, int len));



  bfd_vma (*plt_sym_val) (bfd_vma, const asection *, const arelent *);


  bfd_boolean (*common_definition) (Elf_Internal_Sym *);


  unsigned int (*common_section_index) (asection *);


  asection *(*common_section) (asection *);


  bfd_boolean (*merge_symbol) (struct bfd_link_info *,
          struct elf_link_hash_entry **,
          struct elf_link_hash_entry *,
          Elf_Internal_Sym *, asection **,
          bfd_vma *, unsigned int *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd *, asection **,
          bfd_boolean *, bfd_boolean *,
          bfd_boolean *, bfd_boolean *,
          bfd *, asection **);


  bfd_boolean (*elf_hash_symbol) (struct elf_link_hash_entry *);


  bfd_boolean (*is_function_type) (unsigned int type);


  bfd_error_plugin_type link_order_error_handler;


  const char *relplt_name;


  int elf_machine_alt1;
  int elf_machine_alt2;

  const struct elf_size_info *s;


  const struct bfd_elf_special_section *special_sections;



  bfd_vma got_header_size;


  const char *obj_attrs_vendor;


  const char *obj_attrs_section;



  int (*obj_attrs_arg_type) (int);


  unsigned int obj_attrs_section_type;





  unsigned collect : 1;





  unsigned type_change_ok : 1;




  unsigned may_use_rel_p : 1;




  unsigned may_use_rela_p : 1;






  unsigned default_use_rela_p : 1;




  unsigned rela_normal : 1;



  unsigned sign_extend_vma : 1;

  unsigned want_got_plt : 1;
  unsigned plt_readonly : 1;
  unsigned want_plt_sym : 1;
  unsigned plt_not_loaded : 1;
  unsigned plt_alignment : 4;
  unsigned can_gc_sections : 1;
  unsigned can_refcount : 1;
  unsigned want_got_sym : 1;
  unsigned want_dynbss : 1;




  unsigned want_p_paddr_set_to_zero : 1;





  unsigned default_execstack : 1;
};




struct bfd_elf_section_data
{

  Elf_Internal_Shdr this_hdr;



  Elf_Internal_Shdr rel_hdr;



  Elf_Internal_Shdr *rel_hdr2;


  unsigned int rel_count;


  unsigned int rel_count2;


  int this_idx;



  int rel_idx;



  int rel_idx2;





  int dynindx;


  asection *linked_to;



  struct elf_link_hash_entry **rel_hashes;




  Elf_Internal_Rela *relocs;



  void *local_dynrel;


  asection *sreloc;

  union {

    const char *name;


    struct bfd_symbol *id;
  } group;



  asection *sec_group;



  asection *next_in_group;


  void *sec_info;
};

#define elf_section_data(sec) ((struct bfd_elf_section_data*)(sec)->used_by_bfd)
#define elf_linked_to_section(sec) (elf_section_data(sec)->linked_to)
#define elf_section_type(sec) (elf_section_data(sec)->this_hdr.sh_type)
#define elf_section_flags(sec) (elf_section_data(sec)->this_hdr.sh_flags)
#define elf_group_name(sec) (elf_section_data(sec)->group.name)
#define elf_group_id(sec) (elf_section_data(sec)->group.id)
#define elf_next_in_group(sec) (elf_section_data(sec)->next_in_group)
#define elf_sec_group(sec) (elf_section_data(sec)->sec_group)

#define xvec_get_elf_backend_data(xvec) ((const struct elf_backend_data *) (xvec)->backend_data)


#define get_elf_backend_data(abfd) xvec_get_elf_backend_data ((abfd)->xvec)





struct elf_info_failed
{
  bfd_boolean failed;
  struct bfd_link_info *info;
  struct bfd_elf_version_tree *verdefs;
};




struct elf_assign_sym_version_info
{

  bfd *output_bfd;

  struct bfd_link_info *info;

  struct bfd_elf_version_tree *verdefs;

  bfd_boolean failed;
};




struct elf_find_verdep_info
{

  bfd *output_bfd;

  struct bfd_link_info *info;

  unsigned int vers;

  bfd_boolean failed;
};


#define NUM_KNOWN_OBJ_ATTRIBUTES 32





typedef struct obj_attribute
{
  int type;
  unsigned int i;
  char *s;
} obj_attribute;

typedef struct obj_attribute_list
{
  struct obj_attribute_list *next;
  int tag;
  obj_attribute attr;
} obj_attribute_list;




#define OBJ_ATTR_PROC 0
#define OBJ_ATTR_GNU 1
#define OBJ_ATTR_FIRST OBJ_ATTR_PROC
#define OBJ_ATTR_LAST OBJ_ATTR_GNU



enum
{
  Tag_NULL = 0,
  Tag_File = 1,
  Tag_Section = 2,
  Tag_Symbol = 3,
  Tag_compatibility = 32
};




struct elf_obj_tdata
{
  Elf_Internal_Ehdr elf_header[1];
  Elf_Internal_Shdr **elf_sect_ptr;
  Elf_Internal_Phdr *phdr;
  struct elf_segment_map *segment_map;
  struct elf_strtab_hash *strtab_ptr;
  int num_locals;
  int num_globals;
  unsigned int num_elf_sections;
  int num_section_syms;
  asymbol **section_syms;
  Elf_Internal_Shdr symtab_hdr;
  Elf_Internal_Shdr shstrtab_hdr;
  Elf_Internal_Shdr strtab_hdr;
  Elf_Internal_Shdr dynsymtab_hdr;
  Elf_Internal_Shdr dynstrtab_hdr;
  Elf_Internal_Shdr dynversym_hdr;
  Elf_Internal_Shdr dynverref_hdr;
  Elf_Internal_Shdr dynverdef_hdr;
  Elf_Internal_Shdr symtab_shndx_hdr;
  unsigned int symtab_section, shstrtab_section;
  unsigned int strtab_section, dynsymtab_section;
  unsigned int symtab_shndx_section;
  unsigned int dynversym_section, dynverdef_section, dynverref_section;
  file_ptr next_file_pos;
  bfd_vma gp;
  unsigned int gp_size;


  int core_signal;
  int core_pid;
  int core_lwpid;
  char* core_program;
  char* core_command;




  struct elf_link_hash_entry **sym_hashes;




  union
    {
      bfd_signed_vma *refcounts;
      bfd_vma *offsets;
      struct got_entry **ents;
    } local_got;
# 1389 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
  const char *dt_name;


  bfd_size_type program_header_size;


  void *line_info;





  struct mips_elf_find_line *find_line_info;


  struct dwarf1_debug *dwarf1_find_line_info;


  void *dwarf2_find_line_info;




  asection **local_stubs;
  asection **local_call_stubs;



  asection *eh_frame_hdr;

  Elf_Internal_Shdr **group_sect_ptr;
  int num_group;


  unsigned int cverdefs;


  unsigned int cverrefs;


  unsigned int stack_flags;


  bfd_boolean relro;


  Elf_Internal_Verdef *verdef;


  Elf_Internal_Verneed *verref;



  asymbol *elf_data_symbol;
  asymbol *elf_text_symbol;
  asection *elf_data_section;
  asection *elf_text_section;




  enum dynamic_lib_link_class dyn_lib_class;



  bfd_boolean linker;






  bfd_boolean bad_symtab;


  bfd_boolean flags_init;


  void *symbuf;

  obj_attribute known_obj_attributes[2][32];
  obj_attribute_list *other_obj_attributes[2];


  bfd_boolean (*after_write_object_contents) (bfd *);
  void *after_write_object_contents_info;
};

#define elf_tdata(bfd) ((bfd) -> tdata.elf_obj_data)
#define elf_elfheader(bfd) (elf_tdata(bfd) -> elf_header)
#define elf_elfsections(bfd) (elf_tdata(bfd) -> elf_sect_ptr)
#define elf_numsections(bfd) (elf_tdata(bfd) -> num_elf_sections)
#define elf_shstrtab(bfd) (elf_tdata(bfd) -> strtab_ptr)
#define elf_onesymtab(bfd) (elf_tdata(bfd) -> symtab_section)
#define elf_symtab_shndx(bfd) (elf_tdata(bfd) -> symtab_shndx_section)
#define elf_dynsymtab(bfd) (elf_tdata(bfd) -> dynsymtab_section)
#define elf_dynversym(bfd) (elf_tdata(bfd) -> dynversym_section)
#define elf_dynverdef(bfd) (elf_tdata(bfd) -> dynverdef_section)
#define elf_dynverref(bfd) (elf_tdata(bfd) -> dynverref_section)
#define elf_num_locals(bfd) (elf_tdata(bfd) -> num_locals)
#define elf_num_globals(bfd) (elf_tdata(bfd) -> num_globals)
#define elf_section_syms(bfd) (elf_tdata(bfd) -> section_syms)
#define elf_num_section_syms(bfd) (elf_tdata(bfd) -> num_section_syms)
#define core_prpsinfo(bfd) (elf_tdata(bfd) -> prpsinfo)
#define core_prstatus(bfd) (elf_tdata(bfd) -> prstatus)
#define elf_gp(bfd) (elf_tdata(bfd) -> gp)
#define elf_gp_size(bfd) (elf_tdata(bfd) -> gp_size)
#define elf_sym_hashes(bfd) (elf_tdata(bfd) -> sym_hashes)
#define elf_local_got_refcounts(bfd) (elf_tdata(bfd) -> local_got.refcounts)
#define elf_local_got_offsets(bfd) (elf_tdata(bfd) -> local_got.offsets)
#define elf_local_got_ents(bfd) (elf_tdata(bfd) -> local_got.ents)
#define elf_dt_name(bfd) (elf_tdata(bfd) -> dt_name)
#define elf_dyn_lib_class(bfd) (elf_tdata(bfd) -> dyn_lib_class)
#define elf_bad_symtab(bfd) (elf_tdata(bfd) -> bad_symtab)
#define elf_flags_init(bfd) (elf_tdata(bfd) -> flags_init)
#define elf_known_obj_attributes(bfd) (elf_tdata (bfd) -> known_obj_attributes)
#define elf_other_obj_attributes(bfd) (elf_tdata (bfd) -> other_obj_attributes)
#define elf_known_obj_attributes_proc(bfd) (elf_known_obj_attributes (bfd) [OBJ_ATTR_PROC])

#define elf_other_obj_attributes_proc(bfd) (elf_other_obj_attributes (bfd) [OBJ_ATTR_PROC])


extern void _bfd_elf_swap_verdef_in
  (bfd *, const Elf_External_Verdef *, Elf_Internal_Verdef *);
extern void _bfd_elf_swap_verdef_out
  (bfd *, const Elf_Internal_Verdef *, Elf_External_Verdef *);
extern void _bfd_elf_swap_verdaux_in
  (bfd *, const Elf_External_Verdaux *, Elf_Internal_Verdaux *);
extern void _bfd_elf_swap_verdaux_out
  (bfd *, const Elf_Internal_Verdaux *, Elf_External_Verdaux *);
extern void _bfd_elf_swap_verneed_in
  (bfd *, const Elf_External_Verneed *, Elf_Internal_Verneed *);
extern void _bfd_elf_swap_verneed_out
  (bfd *, const Elf_Internal_Verneed *, Elf_External_Verneed *);
extern void _bfd_elf_swap_vernaux_in
  (bfd *, const Elf_External_Vernaux *, Elf_Internal_Vernaux *);
extern void _bfd_elf_swap_vernaux_out
  (bfd *, const Elf_Internal_Vernaux *, Elf_External_Vernaux *);
extern void _bfd_elf_swap_versym_in
  (bfd *, const Elf_External_Versym *, Elf_Internal_Versym *);
extern void _bfd_elf_swap_versym_out
  (bfd *, const Elf_Internal_Versym *, Elf_External_Versym *);

extern int _bfd_elf_section_from_bfd_section
  (bfd *, asection *);
extern char *bfd_elf_string_from_elf_section
  (bfd *, unsigned, unsigned);
extern char *bfd_elf_get_str_section
  (bfd *, unsigned);
extern Elf_Internal_Sym *bfd_elf_get_elf_syms
  (bfd *, Elf_Internal_Shdr *, size_t, size_t, Elf_Internal_Sym *, void *,
   Elf_External_Sym_Shndx *);
extern const char *bfd_elf_sym_name
  (bfd *, Elf_Internal_Shdr *, Elf_Internal_Sym *, asection *);

extern bfd_boolean _bfd_elf_copy_private_bfd_data
  (bfd *, bfd *);
extern bfd_boolean _bfd_elf_print_private_bfd_data
  (bfd *, void *);
extern void bfd_elf_print_symbol
  (bfd *, void *, asymbol *, bfd_print_symbol_type);

extern void _bfd_elf_sprintf_vma
  (bfd *, char *, bfd_vma);
extern void _bfd_elf_fprintf_vma
  (bfd *, void *, bfd_vma);

extern unsigned int _bfd_elf_eh_frame_address_size
  (bfd *, asection *);
extern bfd_byte _bfd_elf_encode_eh_address
  (bfd *abfd, struct bfd_link_info *info, asection *osec, bfd_vma offset,
   asection *loc_sec, bfd_vma loc_offset, bfd_vma *encoded);
extern bfd_boolean _bfd_elf_can_make_relative
  (bfd *input_bfd, struct bfd_link_info *info, asection *eh_frame_section);

extern enum elf_reloc_type_class _bfd_elf_reloc_type_class
  (const Elf_Internal_Rela *);
extern bfd_vma _bfd_elf_rela_local_sym
  (bfd *, Elf_Internal_Sym *, asection **, Elf_Internal_Rela *);
extern bfd_vma _bfd_elf_rel_local_sym
  (bfd *, Elf_Internal_Sym *, asection **, bfd_vma);
extern bfd_vma _bfd_elf_section_offset
  (bfd *, struct bfd_link_info *, asection *, bfd_vma);

extern unsigned long bfd_elf_hash
  (const char *);
extern unsigned long bfd_elf_gnu_hash
  (const char *);

extern bfd_reloc_status_type bfd_elf_generic_reloc
  (bfd *, arelent *, asymbol *, void *, asection *, bfd *, char **);
extern bfd_boolean bfd_elf_mkobject
  (bfd *);
extern bfd_boolean bfd_elf_mkcorefile
  (bfd *);
extern Elf_Internal_Shdr *bfd_elf_find_section
  (bfd *, char *);
extern bfd_boolean _bfd_elf_make_section_from_shdr
  (bfd *, Elf_Internal_Shdr *, const char *, int);
extern bfd_boolean _bfd_elf_make_section_from_phdr
  (bfd *, Elf_Internal_Phdr *, int, const char *);
extern struct bfd_hash_entry *_bfd_elf_link_hash_newfunc
  (struct bfd_hash_entry *, struct bfd_hash_table *, const char *);
extern struct bfd_link_hash_table *_bfd_elf_link_hash_table_create
  (bfd *);
extern void _bfd_elf_link_hash_copy_indirect
  (struct bfd_link_info *, struct elf_link_hash_entry *,
   struct elf_link_hash_entry *);
extern void _bfd_elf_link_hash_hide_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *, bfd_boolean);
extern bfd_boolean _bfd_elf_link_hash_fixup_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *);
extern bfd_boolean _bfd_elf_link_hash_table_init
  (struct elf_link_hash_table *, bfd *,
   struct bfd_hash_entry *(*)
     (struct bfd_hash_entry *, struct bfd_hash_table *, const char *),
   unsigned int);
extern bfd_boolean _bfd_elf_slurp_version_tables
  (bfd *, bfd_boolean);
extern bfd_boolean _bfd_elf_merge_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_match_sections_by_type
  (bfd *, const asection *, bfd *, const asection *);
extern bfd_boolean bfd_elf_is_group_section
  (bfd *, const struct bfd_section *);
extern void _bfd_elf_section_already_linked
  (bfd *, struct bfd_section *, struct bfd_link_info *);
extern void bfd_elf_set_group_contents
  (bfd *, asection *, void *);
extern asection *_bfd_elf_check_kept_section
  (asection *, struct bfd_link_info *);
extern void _bfd_elf_link_just_syms
  (asection *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_copy_private_header_data
  (bfd *, bfd *);
extern bfd_boolean _bfd_elf_copy_private_symbol_data
  (bfd *, asymbol *, bfd *, asymbol *);
#define _bfd_generic_init_private_section_data _bfd_elf_init_private_section_data

extern bfd_boolean _bfd_elf_init_private_section_data
  (bfd *, asection *, bfd *, asection *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_copy_private_section_data
  (bfd *, asection *, bfd *, asection *);
extern bfd_boolean _bfd_elf_write_object_contents
  (bfd *);
extern bfd_boolean _bfd_elf_write_corefile_contents
  (bfd *);
extern bfd_boolean _bfd_elf_set_section_contents
  (bfd *, sec_ptr, const void *, file_ptr, bfd_size_type);
extern long _bfd_elf_get_symtab_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_symtab
  (bfd *, asymbol **);
extern long _bfd_elf_get_dynamic_symtab_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_dynamic_symtab
  (bfd *, asymbol **);
extern long _bfd_elf_get_synthetic_symtab
  (bfd *, long, asymbol **, long, asymbol **, asymbol **);
extern long _bfd_elf_get_reloc_upper_bound
  (bfd *, sec_ptr);
extern long _bfd_elf_canonicalize_reloc
  (bfd *, sec_ptr, arelent **, asymbol **);
extern long _bfd_elf_get_dynamic_reloc_upper_bound
  (bfd *);
extern long _bfd_elf_canonicalize_dynamic_reloc
  (bfd *, arelent **, asymbol **);
extern asymbol *_bfd_elf_make_empty_symbol
  (bfd *);
extern void _bfd_elf_get_symbol_info
  (bfd *, asymbol *, symbol_info *);
extern bfd_boolean _bfd_elf_is_local_label_name
  (bfd *, const char *);
extern alent *_bfd_elf_get_lineno
  (bfd *, asymbol *);
extern bfd_boolean _bfd_elf_set_arch_mach
  (bfd *, enum bfd_architecture, unsigned long);
extern bfd_boolean _bfd_elf_find_nearest_line
  (bfd *, asection *, asymbol **, bfd_vma, const char **, const char **,
   unsigned int *);
extern bfd_boolean _bfd_elf_find_line
  (bfd *, asymbol **, asymbol *, const char **, unsigned int *);
#define _bfd_generic_find_line _bfd_elf_find_line
extern bfd_boolean _bfd_elf_find_inliner_info
  (bfd *, const char **, const char **, unsigned int *);
#define _bfd_elf_read_minisymbols _bfd_generic_read_minisymbols
#define _bfd_elf_minisymbol_to_symbol _bfd_generic_minisymbol_to_symbol
extern int _bfd_elf_sizeof_headers
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_new_section_hook
  (bfd *, asection *);
extern bfd_boolean _bfd_elf_init_reloc_shdr
  (bfd *, Elf_Internal_Shdr *, asection *, bfd_boolean);
extern const struct bfd_elf_special_section *_bfd_elf_get_special_section
  (const char *, const struct bfd_elf_special_section *, unsigned int);
extern const struct bfd_elf_special_section *_bfd_elf_get_sec_type_attr
  (bfd *, asection *);


extern void _bfd_elf_no_info_to_howto
  (bfd *, arelent *, Elf_Internal_Rela *);

extern bfd_boolean bfd_section_from_shdr
  (bfd *, unsigned int shindex);
extern bfd_boolean bfd_section_from_phdr
  (bfd *, Elf_Internal_Phdr *, int);

extern int _bfd_elf_symbol_from_bfd_symbol
  (bfd *, asymbol **);

extern asection *bfd_section_from_r_symndx
  (bfd *, struct sym_sec_cache *, asection *, unsigned long);
extern asection *bfd_section_from_elf_index
  (bfd *, unsigned int);
extern struct bfd_strtab_hash *_bfd_elf_stringtab_init
  (void);

extern struct elf_strtab_hash * _bfd_elf_strtab_init
  (void);
extern void _bfd_elf_strtab_free
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_add
  (struct elf_strtab_hash *, const char *, bfd_boolean);
extern void _bfd_elf_strtab_addref
  (struct elf_strtab_hash *, bfd_size_type);
extern void _bfd_elf_strtab_delref
  (struct elf_strtab_hash *, bfd_size_type);
extern void _bfd_elf_strtab_clear_all_refs
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_size
  (struct elf_strtab_hash *);
extern bfd_size_type _bfd_elf_strtab_offset
  (struct elf_strtab_hash *, bfd_size_type);
extern bfd_boolean _bfd_elf_strtab_emit
  (bfd *, struct elf_strtab_hash *);
extern void _bfd_elf_strtab_finalize
  (struct elf_strtab_hash *);

extern bfd_boolean _bfd_elf_discard_section_eh_frame
  (bfd *, struct bfd_link_info *, asection *,
   bfd_boolean (*) (bfd_vma, void *), struct elf_reloc_cookie *);
extern bfd_boolean _bfd_elf_discard_section_eh_frame_hdr
  (bfd *, struct bfd_link_info *);
extern bfd_vma _bfd_elf_eh_frame_section_offset
  (bfd *, struct bfd_link_info *, asection *, bfd_vma);
extern bfd_boolean _bfd_elf_write_section_eh_frame
  (bfd *, struct bfd_link_info *, asection *, bfd_byte *);
extern bfd_boolean _bfd_elf_write_section_eh_frame_hdr
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_maybe_strip_eh_frame_hdr
  (struct bfd_link_info *);

extern bfd_boolean _bfd_elf_merge_symbol
  (bfd *, struct bfd_link_info *, const char *, Elf_Internal_Sym *,
   asection **, bfd_vma *, unsigned int *,
   struct elf_link_hash_entry **, bfd_boolean *,
   bfd_boolean *, bfd_boolean *, bfd_boolean *);

extern bfd_boolean _bfd_elf_hash_symbol (struct elf_link_hash_entry *);

extern bfd_boolean _bfd_elf_add_default_symbol
  (bfd *, struct bfd_link_info *, struct elf_link_hash_entry *,
   const char *, Elf_Internal_Sym *, asection **, bfd_vma *,
   bfd_boolean *, bfd_boolean);

extern bfd_boolean _bfd_elf_export_symbol
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_link_find_version_dependencies
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_link_assign_sym_version
  (struct elf_link_hash_entry *, void *);

extern long _bfd_elf_link_lookup_local_dynindx
  (struct bfd_link_info *, bfd *, long);
extern bfd_boolean _bfd_elf_compute_section_file_positions
  (bfd *, struct bfd_link_info *);
extern void _bfd_elf_assign_file_positions_for_relocs
  (bfd *);
extern file_ptr _bfd_elf_assign_file_position_for_section
  (Elf_Internal_Shdr *, file_ptr, bfd_boolean);

extern bfd_boolean _bfd_elf_validate_reloc
  (bfd *, arelent *);

extern bfd_boolean _bfd_elf_link_create_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_link_omit_section_dynsym
  (bfd *, struct bfd_link_info *, asection *);
extern bfd_boolean _bfd_elf_create_dynamic_sections
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_create_got_section
  (bfd *, struct bfd_link_info *);
extern struct elf_link_hash_entry *_bfd_elf_define_linkage_sym
  (bfd *, struct bfd_link_info *, asection *, const char *);
extern void _bfd_elf_init_1_index_section
  (bfd *, struct bfd_link_info *);
extern void _bfd_elf_init_2_index_sections
  (bfd *, struct bfd_link_info *);

extern bfd_boolean _bfd_elfcore_make_pseudosection
  (bfd *, char *, size_t, ufile_ptr);
extern char *_bfd_elfcore_strndup
  (bfd *, char *, size_t);

extern Elf_Internal_Rela *_bfd_elf_link_read_relocs
  (bfd *, asection *, void *, Elf_Internal_Rela *, bfd_boolean);

extern bfd_boolean _bfd_elf_link_size_reloc_section
  (bfd *, Elf_Internal_Shdr *, asection *);

extern bfd_boolean _bfd_elf_link_output_relocs
  (bfd *, asection *, Elf_Internal_Shdr *, Elf_Internal_Rela *,
   struct elf_link_hash_entry **);

extern bfd_boolean _bfd_elf_fix_symbol_flags
  (struct elf_link_hash_entry *, struct elf_info_failed *);

extern bfd_boolean _bfd_elf_adjust_dynamic_symbol
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_adjust_dynamic_copy
  (struct elf_link_hash_entry *, asection *);

extern bfd_boolean _bfd_elf_link_sec_merge_syms
  (struct elf_link_hash_entry *, void *);

extern bfd_boolean _bfd_elf_dynamic_symbol_p
  (struct elf_link_hash_entry *, struct bfd_link_info *, bfd_boolean);

extern bfd_boolean _bfd_elf_symbol_refs_local_p
  (struct elf_link_hash_entry *, struct bfd_link_info *, bfd_boolean);

extern bfd_boolean bfd_elf_match_symbols_in_sections
  (asection *, asection *, struct bfd_link_info *);

extern void bfd_elf_perform_complex_relocation
  (bfd * output_bfd __attribute__ ((__unused__)),
   struct bfd_link_info * info,
   bfd * input_bfd,
   asection * input_section,
   bfd_byte * contents,
   Elf_Internal_Rela * rel,
   Elf_Internal_Sym * local_syms,
   asection ** local_sections);

extern bfd_boolean _bfd_elf_setup_sections
  (bfd *);

extern void _bfd_elf_set_osabi (bfd * , struct bfd_link_info *);

extern const bfd_target *bfd_elf32_object_p
  (bfd *);
extern const bfd_target *bfd_elf32_core_file_p
  (bfd *);
extern char *bfd_elf32_core_file_failing_command
  (bfd *);
extern int bfd_elf32_core_file_failing_signal
  (bfd *);
extern bfd_boolean bfd_elf32_core_file_matches_executable_p
  (bfd *, bfd *);

extern bfd_boolean bfd_elf32_swap_symbol_in
  (bfd *, const void *, const void *, Elf_Internal_Sym *);
extern void bfd_elf32_swap_symbol_out
  (bfd *, const Elf_Internal_Sym *, void *, void *);
extern void bfd_elf32_swap_reloc_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf32_swap_reloc_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf32_swap_reloca_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf32_swap_reloca_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf32_swap_phdr_in
  (bfd *, const Elf32_External_Phdr *, Elf_Internal_Phdr *);
extern void bfd_elf32_swap_phdr_out
  (bfd *, const Elf_Internal_Phdr *, Elf32_External_Phdr *);
extern void bfd_elf32_swap_dyn_in
  (bfd *, const void *, Elf_Internal_Dyn *);
extern void bfd_elf32_swap_dyn_out
  (bfd *, const Elf_Internal_Dyn *, void *);
extern long bfd_elf32_slurp_symbol_table
  (bfd *, asymbol **, bfd_boolean);
extern bfd_boolean bfd_elf32_write_shdrs_and_ehdr
  (bfd *);
extern int bfd_elf32_write_out_phdrs
  (bfd *, const Elf_Internal_Phdr *, unsigned int);
extern bfd_boolean bfd_elf32_checksum_contents
  (bfd * , void (*) (const void *, size_t, void *), void *);
extern void bfd_elf32_write_relocs
  (bfd *, asection *, void *);
extern bfd_boolean bfd_elf32_slurp_reloc_table
  (bfd *, asection *, asymbol **, bfd_boolean);

extern const bfd_target *bfd_elf64_object_p
  (bfd *);
extern const bfd_target *bfd_elf64_core_file_p
  (bfd *);
extern char *bfd_elf64_core_file_failing_command
  (bfd *);
extern int bfd_elf64_core_file_failing_signal
  (bfd *);
extern bfd_boolean bfd_elf64_core_file_matches_executable_p
  (bfd *, bfd *);

extern bfd_boolean bfd_elf64_swap_symbol_in
  (bfd *, const void *, const void *, Elf_Internal_Sym *);
extern void bfd_elf64_swap_symbol_out
  (bfd *, const Elf_Internal_Sym *, void *, void *);
extern void bfd_elf64_swap_reloc_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf64_swap_reloc_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf64_swap_reloca_in
  (bfd *, const bfd_byte *, Elf_Internal_Rela *);
extern void bfd_elf64_swap_reloca_out
  (bfd *, const Elf_Internal_Rela *, bfd_byte *);
extern void bfd_elf64_swap_phdr_in
  (bfd *, const Elf64_External_Phdr *, Elf_Internal_Phdr *);
extern void bfd_elf64_swap_phdr_out
  (bfd *, const Elf_Internal_Phdr *, Elf64_External_Phdr *);
extern void bfd_elf64_swap_dyn_in
  (bfd *, const void *, Elf_Internal_Dyn *);
extern void bfd_elf64_swap_dyn_out
  (bfd *, const Elf_Internal_Dyn *, void *);
extern long bfd_elf64_slurp_symbol_table
  (bfd *, asymbol **, bfd_boolean);
extern bfd_boolean bfd_elf64_write_shdrs_and_ehdr
  (bfd *);
extern int bfd_elf64_write_out_phdrs
  (bfd *, const Elf_Internal_Phdr *, unsigned int);
extern bfd_boolean bfd_elf64_checksum_contents
  (bfd * , void (*) (const void *, size_t, void *), void *);
extern void bfd_elf64_write_relocs
  (bfd *, asection *, void *);
extern bfd_boolean bfd_elf64_slurp_reloc_table
  (bfd *, asection *, asymbol **, bfd_boolean);

extern struct elf_link_hash_entry *_bfd_elf_archive_symbol_lookup
  (bfd *, struct bfd_link_info *, const char *);
extern bfd_boolean bfd_elf_link_add_symbols
  (bfd *, struct bfd_link_info *);
extern bfd_boolean _bfd_elf_add_dynamic_entry
  (struct bfd_link_info *, bfd_vma, bfd_vma);

extern bfd_boolean bfd_elf_link_record_dynamic_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *);

extern int bfd_elf_link_record_local_dynamic_symbol
  (struct bfd_link_info *, bfd *, long);

extern void bfd_elf_link_mark_dynamic_symbol
  (struct bfd_link_info *, struct elf_link_hash_entry *,
   Elf_Internal_Sym *);

extern bfd_boolean _bfd_elf_close_and_cleanup
  (bfd *);

extern bfd_boolean _bfd_elf_common_definition
  (Elf_Internal_Sym *);

extern unsigned int _bfd_elf_common_section_index
  (asection *);

extern asection *_bfd_elf_common_section
  (asection *);

extern void _bfd_dwarf2_cleanup_debug_info
  (bfd *);

extern bfd_reloc_status_type _bfd_elf_rel_vtable_reloc_fn
  (bfd *, arelent *, struct bfd_symbol *, void *,
   asection *, bfd *, char **);

extern bfd_boolean bfd_elf_final_link
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_mark_dynamic_ref_symbol
  (struct elf_link_hash_entry *h, void *inf);

extern bfd_boolean bfd_elf_gc_sections
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_record_vtinherit
  (bfd *, asection *, struct elf_link_hash_entry *, bfd_vma);

extern bfd_boolean bfd_elf_gc_record_vtentry
  (bfd *, asection *, struct elf_link_hash_entry *, bfd_vma);

extern asection *_bfd_elf_gc_mark_hook
  (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
   struct elf_link_hash_entry *, Elf_Internal_Sym *);

extern bfd_boolean _bfd_elf_gc_mark
  (struct bfd_link_info *, asection *,
   asection * (*) (asection *, struct bfd_link_info *, Elf_Internal_Rela *,
     struct elf_link_hash_entry *, Elf_Internal_Sym *));

extern bfd_boolean bfd_elf_gc_common_finalize_got_offsets
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_gc_common_final_link
  (bfd *, struct bfd_link_info *);

extern bfd_boolean bfd_elf_reloc_symbol_deleted_p
  (bfd_vma, void *);

extern struct elf_segment_map * _bfd_elf_make_dynamic_segment
  (bfd *, asection *);

extern bfd_boolean _bfd_elf_map_sections_to_segments
  (bfd *, struct bfd_link_info *);

extern bfd_boolean _bfd_elf_is_function_type (unsigned int);


extern char *elfcore_write_note
  (bfd *, char *, int *, const char *, int, const void *, int);
extern char *elfcore_write_prpsinfo
  (bfd *, char *, int *, const char *, const char *);
extern char *elfcore_write_prstatus
  (bfd *, char *, int *, long, int, const void *);
extern char * elfcore_write_pstatus
  (bfd *, char *, int *, long, int, const void *);
extern char *elfcore_write_prfpreg
  (bfd *, char *, int *, const void *, int);
extern char *elfcore_write_prxfpreg
  (bfd *, char *, int *, const void *, int);
extern char *elfcore_write_lwpstatus
  (bfd *, char *, int *, long, int, const void *);

extern bfd *_bfd_elf32_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma, bfd_byte *, int));
extern bfd *_bfd_elf64_bfd_from_remote_memory
  (bfd *templ, bfd_vma ehdr_vma, bfd_vma *loadbasep,
   int (*target_read_memory) (bfd_vma, bfd_byte *, int));

extern bfd_vma bfd_elf_obj_attr_size (bfd *);
extern void bfd_elf_set_obj_attr_contents (bfd *, bfd_byte *, bfd_vma);
extern int bfd_elf_get_obj_attr_int (bfd *, int, int);
extern void bfd_elf_add_obj_attr_int (bfd *, int, int, unsigned int);
#define bfd_elf_add_proc_attr_int(BFD,TAG,VALUE) bfd_elf_add_obj_attr_int ((BFD), OBJ_ATTR_PROC, (TAG), (VALUE))

extern void bfd_elf_add_obj_attr_string (bfd *, int, int, const char *);
#define bfd_elf_add_proc_attr_string(BFD,TAG,VALUE) bfd_elf_add_obj_attr_string ((BFD), OBJ_ATTR_PROC, (TAG), (VALUE))

extern void bfd_elf_add_obj_attr_compat (bfd *, int, unsigned int,
      const char *);
#define bfd_elf_add_proc_attr_compat(BFD,INTVAL,STRVAL) bfd_elf_add_obj_attr_compat ((BFD), OBJ_ATTR_PROC, (INTVAL), (STRVAL))


extern char *_bfd_elf_attr_strdup (bfd *, const char *);
extern void _bfd_elf_copy_obj_attributes (bfd *, bfd *);
extern int _bfd_elf_obj_attrs_arg_type (bfd *, int, int);
extern void _bfd_elf_parse_attributes (bfd *, Elf_Internal_Shdr *);
extern bfd_boolean _bfd_elf_merge_object_attributes (bfd *, bfd *);


extern asection _bfd_elf_large_com_section;



extern bfd_boolean _sh_elf_set_mach_from_flags
  (bfd *);




#define WILL_CALL_FINISH_DYNAMIC_SYMBOL(DYN,SHARED,H) ((DYN) && ((SHARED) || !(H)->forced_local) && ((H)->dynindx != -1 || (H)->forced_local))






#define RELOC_FOR_GLOBAL_SYMBOL(info,input_bfd,input_section,rel,r_symndx,symtab_hdr,sym_hashes,h,sec,relocation,unresolved_reloc,warned) do { if (!sym_hashes) return FALSE; h = sym_hashes[r_symndx - symtab_hdr->sh_info]; while (h->root.type == bfd_link_hash_indirect || h->root.type == bfd_link_hash_warning) h = (struct elf_link_hash_entry *) h->root.u.i.link; warned = FALSE; unresolved_reloc = FALSE; relocation = 0; if (h->root.type == bfd_link_hash_defined || h->root.type == bfd_link_hash_defweak) { sec = h->root.u.def.section; if (!sec || !sec->output_section) unresolved_reloc = TRUE; else relocation = (h->root.u.def.value + sec->output_section->vma + sec->output_offset); } else if (h->root.type == bfd_link_hash_undefweak) ; else if (info->unresolved_syms_in_objects == RM_IGNORE && ELF_ST_VISIBILITY (h->other) == STV_DEFAULT) ; else if (!info->relocatable) { bfd_boolean err; err = (info->unresolved_syms_in_objects == RM_GENERATE_ERROR || ELF_ST_VISIBILITY (h->other) != STV_DEFAULT); if (!info->callbacks->undefined_symbol (info, h->root.root.string, input_bfd, input_section, rel->r_offset, err)) return FALSE; warned = TRUE; } } while (0)
# 2126 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf-bfd.h" 3 4
#define SYMBOLIC_BIND(INFO,H) ((INFO)->symbolic || ((INFO)->dynamic && !(H)->dynamic))
# 27 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 2

#define ERR_OK 0
#define ERR_UND -1
#define ERR_UNP -3
#define ERR_NYI -5

#define INSNLEN 4



# 36 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
enum map_type
{
  MAP_INSN,
  MAP_DATA
};

static enum map_type last_type;
static int last_mapping_sym = -1;
static bfd_vma last_mapping_addr = 0;


static int no_aliases = 0;
 static int no_notes = 1;


static void
set_default_aarch64_dis_options (struct disassemble_info *info 
# 52 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                              __attribute__ ((__unused__))
# 52 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                              )
{
}

static void
parse_aarch64_dis_option (const char *option, unsigned int len 
# 57 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                              __attribute__ ((__unused__))
# 57 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                              )
{

  if (
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (strncmp ((
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     option
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), (
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "no-aliases"
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), sizeof (
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "no-aliases"
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) - 1) == 0)
# 60 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                        )
    {
      no_aliases = 1;
      return;
    }

  if (
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (strncmp ((
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     option
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), (
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "aliases"
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), sizeof (
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "aliases"
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) - 1) == 0)
# 66 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                     )
    {
      no_aliases = 0;
      return;
    }

  if (
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (strncmp ((
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     option
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), (
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "no-notes"
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), sizeof (
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "no-notes"
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) - 1) == 0)
# 72 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                      )
    {
      no_notes = 1;
      return;
    }

  if (
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (strncmp ((
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     option
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), (
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "notes"
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), sizeof (
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "notes"
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) - 1) == 0)
# 78 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                   )
    {
      no_notes = 0;
      return;
    }
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  fprintf (
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          __stderrp
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                , 
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "unrecognised disassembler option: %s"
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )
# 93 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                           , option);
}

static void
parse_aarch64_dis_options (const char *options)
{
  const char *option_end;

  if (options == 
# 101 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                ((void *)0)
# 101 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                    )
    return;

  while (*options != '\0')
    {

      if (*options == ',')
 {
   options++;
   continue;
 }


      option_end = options + 1;
      while (*option_end != ',' && *option_end != '\0')
 option_end++;

      parse_aarch64_dis_option (options, option_end - options);



      options = option_end;
    }
}
# 138 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
aarch64_insn
extract_fields (aarch64_insn code, aarch64_insn mask, ...)
{
  uint32_t num;
  const aarch64_field *field;
  enum aarch64_field_kind kind;
  va_list va;

  
# 146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 __builtin_va_start(
# 146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 va
# 146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ,
# 146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 mask
# 146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 )
# 146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                    ;
  num = 
# 147 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       __builtin_va_arg(
# 147 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
       va
# 147 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       ,
# 147 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
       uint32_t
# 147 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       )
# 147 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                            ;
  
# 148 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 148 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 num <= 5
# 148 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 148, 
# 148 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "num <= 5"
# 148 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 148 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  ;
  aarch64_insn value = 0x0;
  while (num--)
    {
      kind = 
# 152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            __builtin_va_arg(
# 152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            va
# 152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            ,
# 152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            enum aarch64_field_kind
# 152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            )
# 152 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ;
      field = &fields[kind];
      value <<= field->width;
      value |= extract_field (kind, code, mask);
    }
  
# 157 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 __builtin_va_end(
# 157 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 va
# 157 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 )
# 157 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
  return value;
}




static aarch64_insn
extract_all_fields (const aarch64_operand *self, aarch64_insn code)
{
  aarch64_insn value;
  unsigned int i;
  enum aarch64_field_kind kind;

  value = 0;
  for (i = 0; i < 
# 172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                 (sizeof (
# 172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 self->fields
# 172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                 ) / sizeof ((
# 172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 self->fields
# 172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                 )[0])) 
# 172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                           && self->fields[i] != FLD_NIL; i++)
    {
      kind = self->fields[i];
      value <<= fields[kind].width;
      value |= extract_field (kind, code, 0);
    }
  return value;
}


static inline int32_t
sign_extend (aarch64_insn value, unsigned i)
{
  uint32_t ret = value;

  
# 187 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 187 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 i < 32
# 187 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 187, 
# 187 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "i < 32"
# 187 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 187 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
  if ((value >> i) & 0x1)
    {
      uint32_t val = (uint32_t)(-1) << i;
      ret = ret | val;
    }
  return (int32_t) ret;
}





static inline enum aarch64_opnd_qualifier
get_greg_qualifier_from_value (aarch64_insn value)
{
  enum aarch64_opnd_qualifier qualifier = AARCH64_OPND_QLF_W + value;
  
# 204 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 204 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 value <= 0x1 && aarch64_get_qualifier_standard_value (qualifier) == value
# 204 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 204, 
# 204 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "value <= 0x1 && aarch64_get_qualifier_standard_value (qualifier) == value"
# 204 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
                                                                
# 205 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                               ;
  return qualifier;
}




static inline enum aarch64_opnd_qualifier
get_vreg_qualifier_from_value (aarch64_insn value)
{
  enum aarch64_opnd_qualifier qualifier = AARCH64_OPND_QLF_V_8B + value;



  if (qualifier >= AARCH64_OPND_QLF_V_2H)
    qualifier += 1;

  
# 222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 value <= 0x8 && aarch64_get_qualifier_standard_value (qualifier) == value
# 222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 222, 
# 222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "value <= 0x8 && aarch64_get_qualifier_standard_value (qualifier) == value"
# 222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
                                                                
# 223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                               ;
  return qualifier;
}


static inline enum aarch64_opnd_qualifier
get_sreg_qualifier_from_value (aarch64_insn value)
{
  enum aarch64_opnd_qualifier qualifier = AARCH64_OPND_QLF_S_B + value;

  
# 233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 value <= 0x4 && aarch64_get_qualifier_standard_value (qualifier) == value
# 233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 233, 
# 233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "value <= 0x4 && aarch64_get_qualifier_standard_value (qualifier) == value"
# 233 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
                                                                
# 234 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                               ;
  return qualifier;
}






static aarch64_opnd_qualifier_t
get_expected_qualifier (const aarch64_inst *inst, int i)
{
  aarch64_opnd_qualifier_seq_t qualifiers;

  
# 248 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 248 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst->operands[i].qualifier == AARCH64_OPND_QLF_NIL
# 248 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 248, 
# 248 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "inst->operands[i].qualifier == AARCH64_OPND_QLF_NIL"
# 248 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 248 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                             ;
  if (aarch64_find_best_match (inst, inst->opcode->qualifiers_list,
          i, qualifiers))
    return qualifiers[i];
  else
    return AARCH64_OPND_QLF_NIL;
}



bfd_boolean
aarch64_ext_regno (const aarch64_operand *self, aarch64_opnd_info *info,
     const aarch64_insn code,
     const aarch64_inst *inst 
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                             __attribute__ ((__unused__))
# 261 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ,
     aarch64_operand_error *errors 
# 262 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 262 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  info->reg.regno = extract_field (self->fields[0], code, 0);
  return 
# 265 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 265 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}

bfd_boolean
aarch64_ext_regno_pair (const aarch64_operand *self 
# 269 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                   __attribute__ ((__unused__))
# 269 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                   , aarch64_opnd_info *info,
     const aarch64_insn code 
# 270 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 270 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
     const aarch64_inst *inst 
# 271 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                             __attribute__ ((__unused__))
# 271 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ,
     aarch64_operand_error *errors 
# 272 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 272 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  
# 274 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 274 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 info->idx == 1 || info->idx ==3
# 274 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 274, 
# 274 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "info->idx == 1 || info->idx ==3"
# 274 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
                    
# 275 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                   ;
  info->reg.regno = inst->operands[info->idx - 1].reg.regno + 1;
  return 
# 277 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 277 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_regrt_sysins (const aarch64_operand *self, aarch64_opnd_info *info,
     const aarch64_insn code,
     const aarch64_inst *inst 
# 284 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                             __attribute__ ((__unused__))
# 284 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ,
     aarch64_operand_error *errors 
# 285 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 285 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  info->reg.regno = extract_field (self->fields[0], code, 0);
  
# 288 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 288 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 info->idx == 1 && (aarch64_get_operand_class (inst->operands[0].type) == AARCH64_OPND_CLASS_SYSTEM)
# 288 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 288, 
# 288 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "info->idx == 1 && (aarch64_get_operand_class (inst->operands[0].type) == AARCH64_OPND_CLASS_SYSTEM)"
# 288 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)

                                     
# 290 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                    ;



  info->present = aarch64_sys_ins_reg_has_xt (inst->operands[0].sysins_op);

  return 
# 296 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 296 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_reglane (const aarch64_operand *self, aarch64_opnd_info *info,
       const aarch64_insn code,
       const aarch64_inst *inst 
# 303 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 303 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 304 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 304 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{

  info->reglane.regno = extract_field (self->fields[0], code,
           inst->opcode->mask);


  if (inst->opcode->iclass == asisdone
    || inst->opcode->iclass == asimdins)
    {
      if (info->type == AARCH64_OPND_En
   && inst->opcode->operands[0] == AARCH64_OPND_Ed)
 {
   unsigned shift;

   
# 319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  (__builtin_expect(!(
# 319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  info->idx == 1
# 319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 319, 
# 319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  "info->idx == 1"
# 319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  ) : (void)0)
# 319 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         ;
   aarch64_insn value = extract_field (FLD_imm4, code, 0);

   info->qualifier = get_expected_qualifier (inst, info->idx);
   shift = get_logsz (aarch64_get_qualifier_esize (info->qualifier));
   info->reglane.index = value >> shift;
 }
      else
 {







   int pos = -1;
   aarch64_insn value = extract_field (FLD_imm5, code, 0);
   while (++pos <= 3 && (value & 0x1) == 0)
     value >>= 1;
   if (pos > 3)
     return 
# 340 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
           0
# 340 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
   info->qualifier = get_sreg_qualifier_from_value (pos);
   info->reglane.index = (unsigned) (value >> 1);
 }
    }
  else if (inst->opcode->iclass == dotproduct)
    {

      info->qualifier = get_expected_qualifier (inst, info->idx);
      switch (info->qualifier)
 {
 case AARCH64_OPND_QLF_S_4B:

   info->reglane.index = extract_fields (code, 0, 2, FLD_H, FLD_L);
   info->reglane.regno &= 0x1f;
   break;
 default:
   return 
# 357 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         0
# 357 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
              ;
 }
    }
  else if (inst->opcode->iclass == cryptosm3)
    {

      info->reglane.index = extract_field (FLD_SM3_imm2, code, 0);
    }
  else
    {




      info->qualifier = get_expected_qualifier (inst, info->idx);
      switch (info->qualifier)
 {
 case AARCH64_OPND_QLF_S_H:
   if (info->type == AARCH64_OPND_Em16)
     {

       info->reglane.index = extract_fields (code, 0, 3, FLD_H, FLD_L,
          FLD_M);
       info->reglane.regno &= 0xf;
     }
   else
     {

       info->reglane.index = extract_fields (code, 0, 2, FLD_H, FLD_L);
     }
   break;
 case AARCH64_OPND_QLF_S_S:

   info->reglane.index = extract_fields (code, 0, 2, FLD_H, FLD_L);
   break;
 case AARCH64_OPND_QLF_S_D:

   info->reglane.index = extract_field (FLD_H, code, 0);
   break;
 default:
   return 
# 397 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         0
# 397 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
              ;
 }

      if (inst->opcode->op == OP_FCMLA_ELEM
   && info->qualifier != AARCH64_OPND_QLF_S_H)
 {

   if (info->reglane.index & 1)
     return 
# 405 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
           0
# 405 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
   info->reglane.index /= 2;
 }
    }

  return 
# 410 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 410 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}

bfd_boolean
aarch64_ext_reglist (const aarch64_operand *self, aarch64_opnd_info *info,
       const aarch64_insn code,
       const aarch64_inst *inst 
# 416 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 416 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 417 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 417 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{

  info->reglist.first_regno = extract_field (self->fields[0], code, 0);

  info->reglist.num_regs = extract_field (FLD_len, code, 0) + 1;
  return 
# 423 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 423 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_ldst_reglist (const aarch64_operand *self 
# 428 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                     __attribute__ ((__unused__))
# 428 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                     ,
     aarch64_opnd_info *info, const aarch64_insn code,
     const aarch64_inst *inst,
     aarch64_operand_error *errors 
# 431 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 431 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  aarch64_insn value;

  unsigned expected_num = get_opcode_dependent_value (inst->opcode);

  struct
    {
      unsigned is_reserved;
      unsigned num_regs;
      unsigned num_elements;
    } data [] =
  { {0, 4, 4},
      {1, 4, 4},
      {0, 4, 1},
      {0, 4, 2},
      {0, 3, 3},
      {1, 3, 3},
      {0, 3, 1},
      {0, 1, 1},
      {0, 2, 2},
      {1, 2, 2},
      {0, 2, 1},
  };


  info->reglist.first_regno = extract_field (FLD_Rt, code, 0);

  value = extract_field (FLD_opcode, code, 0);

  if (value >= 
# 461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
              (sizeof (
# 461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
              data
# 461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
              ) / sizeof ((
# 461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
              data
# 461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
              )[0]))
# 461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                               )
    return 
# 462 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 462 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
  if (expected_num != data[value].num_elements || data[value].is_reserved)
    return 
# 464 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 464 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
  info->reglist.num_regs = data[value].num_regs;

  return 
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_ldst_reglist_r (const aarch64_operand *self 
# 473 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                       __attribute__ ((__unused__))
# 473 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                       ,
       aarch64_opnd_info *info, const aarch64_insn code,
       const aarch64_inst *inst,
       aarch64_operand_error *errors 
# 476 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 476 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{
  aarch64_insn value;


  info->reglist.first_regno = extract_field (FLD_Rt, code, 0);

  value = extract_field (FLD_S, code, 0);



  info->reglist.num_regs = get_opcode_dependent_value (inst->opcode);
  
# 488 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 488 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 info->reglist.num_regs >= 1 && info->reglist.num_regs <= 4
# 488 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 488, 
# 488 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "info->reglist.num_regs >= 1 && info->reglist.num_regs <= 4"
# 488 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 488 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ;


  if (info->reglist.num_regs == 1 && value == (aarch64_insn) 1)
    info->reglist.num_regs = 2;

  return 
# 494 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 494 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_ldst_elemlist (const aarch64_operand *self 
# 500 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                      __attribute__ ((__unused__))
# 500 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                      ,
      aarch64_opnd_info *info, const aarch64_insn code,
      const aarch64_inst *inst 
# 502 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                              __attribute__ ((__unused__))
# 502 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                              ,
      aarch64_operand_error *errors 
# 503 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                   __attribute__ ((__unused__))
# 503 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                   )
{
  aarch64_field field = {0, 0};
  aarch64_insn QSsize;
  aarch64_insn opcodeh2;


  info->reglist.first_regno = extract_field (FLD_Rt, code, 0);


  gen_sub_field (FLD_asisdlso_opcode, 1, 2, &field);
  opcodeh2 = extract_field_2 (&field, code, 0);
  QSsize = extract_fields (code, 0, 3, FLD_Q, FLD_S, FLD_vldst_size);
  switch (opcodeh2)
    {
    case 0x0:
      info->qualifier = AARCH64_OPND_QLF_S_B;

      info->reglist.index = QSsize;
      break;
    case 0x1:
      if (QSsize & 0x1)

 return 
# 526 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 526 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      info->qualifier = AARCH64_OPND_QLF_S_H;

      info->reglist.index = QSsize >> 1;
      break;
    case 0x2:
      if ((QSsize >> 1) & 0x1)

 return 
# 534 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 534 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      if ((QSsize & 0x1) == 0)
 {
   info->qualifier = AARCH64_OPND_QLF_S_S;

   info->reglist.index = QSsize >> 2;
 }
      else
 {
   if (extract_field (FLD_S, code, 0))

     return 
# 545 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
           0
# 545 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
   info->qualifier = AARCH64_OPND_QLF_S_D;

   info->reglist.index = QSsize >> 3;
 }
      break;
    default:
      return 
# 552 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            0
# 552 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 ;
    }

  info->reglist.has_index = 1;
  info->reglist.num_regs = 0;


  info->reglist.num_regs = get_opcode_dependent_value (inst->opcode);
  
# 560 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 560 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 info->reglist.num_regs >= 1 && info->reglist.num_regs <= 4
# 560 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 560, 
# 560 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "info->reglist.num_regs >= 1 && info->reglist.num_regs <= 4"
# 560 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 560 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ;

  return 
# 562 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 562 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}





bfd_boolean
aarch64_ext_advsimd_imm_shift (const aarch64_operand *self 
# 570 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                          __attribute__ ((__unused__))
# 570 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                          ,
          aarch64_opnd_info *info, const aarch64_insn code,
          const aarch64_inst *inst,
          aarch64_operand_error *errors 
# 573 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                       __attribute__ ((__unused__))
# 573 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                       )
{
  int pos;
  aarch64_insn Q, imm, immh;
  enum aarch64_insn_class iclass = inst->opcode->iclass;

  immh = extract_field (FLD_immh, code, 0);
  if (immh == 0)
    return 
# 581 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 581 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
  imm = extract_fields (code, 0, 2, FLD_immh, FLD_immb);
  pos = 4;

  while (--pos >= 0 && (immh & 0x8) == 0)
    immh <<= 1;

  
# 588 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 588 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 (iclass == asimdshf || iclass == asisdshf) && (info->type == AARCH64_OPND_IMM_VLSR || info->type == AARCH64_OPND_IMM_VLSL)
# 588 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 588, 
# 588 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "(iclass == asimdshf || iclass == asisdshf) && (info->type == AARCH64_OPND_IMM_VLSR || info->type == AARCH64_OPND_IMM_VLSL)"
# 588 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)

                                               
# 590 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                              ;

  if (iclass == asimdshf)
    {
      Q = extract_field (FLD_Q, code, 0);
# 605 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      info->qualifier =
 get_vreg_qualifier_from_value ((pos << 1) | (int) Q);
    }
  else
    info->qualifier = get_sreg_qualifier_from_value (pos);

  if (info->type == AARCH64_OPND_IMM_VLSR)






    info->imm.value = (16 << pos) - imm;
  else







    info->imm.value = imm - (8 << pos);

  return 
# 629 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 629 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_shll_imm (const aarch64_operand *self 
# 634 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                 __attribute__ ((__unused__))
# 634 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                 ,
        aarch64_opnd_info *info, const aarch64_insn code,
        const aarch64_inst *inst 
# 636 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 636 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ,
        aarch64_operand_error *errors 
# 637 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                     __attribute__ ((__unused__))
# 637 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                     )
{
  int64_t imm;
  aarch64_insn val;
  val = extract_field (FLD_size, code, 0);
  switch (val)
    {
    case 0: imm = 8; break;
    case 1: imm = 16; break;
    case 2: imm = 32; break;
    default: return 
# 647 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                   0
# 647 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                        ;
    }
  info->imm.value = imm;
  return 
# 650 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 650 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_imm (const aarch64_operand *self, aarch64_opnd_info *info,
   const aarch64_insn code,
   const aarch64_inst *inst 
# 658 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                           __attribute__ ((__unused__))
# 658 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                           ,
   aarch64_operand_error *errors 
# 659 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 659 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                )
{
  int64_t imm;

  imm = extract_all_fields (self, code);

  if (operand_need_sign_extension (self))
    imm = sign_extend (imm, get_operand_fields_width (self) - 1);

  if (operand_need_shift_by_two (self))
    imm <<= 2;

  if (info->type == AARCH64_OPND_ADDR_ADRP)
    imm <<= 12;

  info->imm.value = imm;
  return 
# 675 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 675 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_imm_half (const aarch64_operand *self, aarch64_opnd_info *info,
        const aarch64_insn code,
        const aarch64_inst *inst 
# 682 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 682 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ,
        aarch64_operand_error *errors)
{
  aarch64_ext_imm (self, info, code, inst, errors);
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = extract_field (FLD_hw, code, 0) << 4;
  return 
# 688 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 688 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_advsimd_imm_modified (const aarch64_operand *self 
# 694 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                             __attribute__ ((__unused__))
# 694 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                             ,
      aarch64_opnd_info *info,
      const aarch64_insn code,
      const aarch64_inst *inst 
# 697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                              __attribute__ ((__unused__))
# 697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                              ,
      aarch64_operand_error *errors 
# 698 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                   __attribute__ ((__unused__))
# 698 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                   )
{
  uint64_t imm;
  enum aarch64_opnd_qualifier opnd0_qualifier = inst->operands[0].qualifier;
  aarch64_field field = {0, 0};

  
# 704 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 704 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 info->idx == 1
# 704 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 704, 
# 704 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "info->idx == 1"
# 704 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 704 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                        ;

  if (info->type == AARCH64_OPND_SIMD_FPIMM)
    info->imm.is_fp = 1;


  imm = extract_fields (code, 0, 2, FLD_abc, FLD_defgh);
  if (!info->imm.is_fp && aarch64_get_qualifier_esize (opnd0_qualifier) == 8)
    {





      int i;
      unsigned abcdefgh = imm;
      for (imm = 0ull, i = 0; i < 8; i++)
 if (((abcdefgh >> i) & 0x1) != 0)
   imm |= 0xffull << (8 * i);
    }
  info->imm.value = imm;


  info->qualifier = get_expected_qualifier (inst, info->idx);
  switch (info->qualifier)
    {
    case AARCH64_OPND_QLF_NIL:

      info->shifter.kind = AARCH64_MOD_NONE;
      return 1;
    case AARCH64_OPND_QLF_LSL:

      info->shifter.kind = AARCH64_MOD_LSL;
      switch (aarch64_get_qualifier_esize (opnd0_qualifier))
 {
 case 4: gen_sub_field (FLD_cmode, 1, 2, &field); break;
 case 2: gen_sub_field (FLD_cmode, 1, 1, &field); break;
 case 1: gen_sub_field (FLD_cmode, 1, 0, &field); break;
 default: 
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         (__builtin_expect(!(
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
         0
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 742, 
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
         "0"
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         ) : (void)0)
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                   ; return 
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            0
# 742 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                 ;
 }

      info->shifter.amount = extract_field_2 (&field, code, 0) << 3;
      break;
    case AARCH64_OPND_QLF_MSL:

      info->shifter.kind = AARCH64_MOD_MSL;
      gen_sub_field (FLD_cmode, 0, 1, &field);
      info->shifter.amount = extract_field_2 (&field, code, 0) ? 16 : 8;
      break;
    default:
      
# 754 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 754 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     0
# 754 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 754, 
# 754 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "0"
# 754 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
# 754 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
      return 
# 755 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            0
# 755 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 ;
    }

  return 
# 758 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 758 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_fpimm (const aarch64_operand *self, aarch64_opnd_info *info,
     const aarch64_insn code,
     const aarch64_inst *inst 
# 765 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                             __attribute__ ((__unused__))
# 765 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ,
     aarch64_operand_error *errors 
# 766 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 766 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  info->imm.value = extract_all_fields (self, code);
  info->imm.is_fp = 1;
  return 
# 770 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 770 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_imm_rotate1 (const aarch64_operand *self, aarch64_opnd_info *info,
    const aarch64_insn code,
    const aarch64_inst *inst 
# 777 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 777 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 778 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 778 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  uint64_t rot = extract_field (self->fields[0], code, 0);
  
# 781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 rot < 2U
# 781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 781, 
# 781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "rot < 2U"
# 781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  ;
  info->imm.value = rot * 180 + 90;
  return 
# 783 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 783 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_imm_rotate2 (const aarch64_operand *self, aarch64_opnd_info *info,
    const aarch64_insn code,
    const aarch64_inst *inst 
# 790 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 790 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 791 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 791 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  uint64_t rot = extract_field (self->fields[0], code, 0);
  
# 794 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 794 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 rot < 4U
# 794 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 794, 
# 794 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "rot < 4U"
# 794 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 794 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  ;
  info->imm.value = rot * 90;
  return 
# 796 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 796 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_fbits (const aarch64_operand *self 
# 801 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                              __attribute__ ((__unused__))
# 801 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                              ,
     aarch64_opnd_info *info, const aarch64_insn code,
     const aarch64_inst *inst 
# 803 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                             __attribute__ ((__unused__))
# 803 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ,
     aarch64_operand_error *errors 
# 804 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 804 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  info->imm.value = 64- extract_field (FLD_scale, code, 0);
  return 
# 807 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 807 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_aimm (const aarch64_operand *self 
# 813 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                             __attribute__ ((__unused__))
# 813 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                             ,
    aarch64_opnd_info *info, const aarch64_insn code,
    const aarch64_inst *inst 
# 815 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 815 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 816 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 816 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  aarch64_insn value;

  info->shifter.kind = AARCH64_MOD_LSL;

  value = extract_field (FLD_shift, code, 0);
  if (value >= 2)
    return 
# 824 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 824 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
  info->shifter.amount = value ? 12 : 0;

  info->imm.value = extract_field (FLD_imm12, code, 0);

  return 
# 829 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 829 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




static bfd_boolean
decode_limm (uint32_t esize, aarch64_insn value, int64_t *result)
{
  uint64_t imm, mask;
  uint32_t N, R, S;
  unsigned simd_size;


  S = value & 0x3f;
  R = (value >> 6) & 0x3f;
  N = (value >> 12) & 0x1;



  if (N != 0)
    {
      simd_size = 64;
      mask = 0xffffffffffffffffull;
    }
  else
    {
# 864 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      switch (S)
 {
 case 0x00 ... 0x1f: simd_size = 32; break;
 case 0x20 ... 0x2f: simd_size = 16; S &= 0xf; break;
 case 0x30 ... 0x37: simd_size = 8; S &= 0x7; break;
 case 0x38 ... 0x3b: simd_size = 4; S &= 0x3; break;
 case 0x3c ... 0x3d: simd_size = 2; S &= 0x1; break;
 default: return 
# 871 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                0
# 871 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                     ;
 }

      mask = (1ull << simd_size) - 1;

      R &= simd_size - 1;
    }

  if (simd_size > esize * 8)
    return 
# 880 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 880 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;


  if (S == simd_size - 1)
    return 
# 884 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 884 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;


  imm = (1ull << (S + 1)) - 1;

  if (R != 0)
    imm = ((imm << (simd_size - R)) & mask) | (imm >> R);

  switch (simd_size)
    {
    case 2: imm = (imm << 2) | imm;

    case 4: imm = (imm << 4) | imm;

    case 8: imm = (imm << 8) | imm;

    case 16: imm = (imm << 16) | imm;

    case 32: imm = (imm << 32) | imm;

    case 64: break;
    default: 
# 905 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            (__builtin_expect(!(
# 905 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            0
# 905 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 905, 
# 905 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            "0"
# 905 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            ) : (void)0)
# 905 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                      ; return 0;
    }

  *result = imm & ~((uint64_t) -1 << (esize * 4) << (esize * 4));

  return 
# 910 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 910 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_limm (const aarch64_operand *self,
    aarch64_opnd_info *info, const aarch64_insn code,
    const aarch64_inst *inst,
    aarch64_operand_error *errors 
# 918 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 918 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  uint32_t esize;
  aarch64_insn value;

  value = extract_fields (code, 0, 3, self->fields[0], self->fields[1],
     self->fields[2]);
  esize = aarch64_get_qualifier_esize (inst->operands[0].qualifier);
  return decode_limm (esize, value, &info->imm.value);
}


bfd_boolean
aarch64_ext_inv_limm (const aarch64_operand *self,
        aarch64_opnd_info *info, const aarch64_insn code,
        const aarch64_inst *inst,
        aarch64_operand_error *errors)
{
  if (!aarch64_ext_limm (self, info, code, inst, errors))
    return 
# 937 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 937 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
  info->imm.value = ~info->imm.value;
  return 
# 939 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 939 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_ft (const aarch64_operand *self 
# 945 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                           __attribute__ ((__unused__))
# 945 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                           ,
  aarch64_opnd_info *info,
  const aarch64_insn code, const aarch64_inst *inst,
  aarch64_operand_error *errors 
# 948 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 948 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               )
{
  aarch64_insn value;


  info->reg.regno = extract_field (FLD_Rt, code, 0);


  value = extract_field (FLD_ldst_size, code, 0);
  if (inst->opcode->iclass == ldstpair_indexed
      || inst->opcode->iclass == ldstnapair_offs
      || inst->opcode->iclass == ldstpair_off
      || inst->opcode->iclass == loadlit)
    {
      enum aarch64_opnd_qualifier qualifier;
      switch (value)
 {
 case 0: qualifier = AARCH64_OPND_QLF_S_S; break;
 case 1: qualifier = AARCH64_OPND_QLF_S_D; break;
 case 2: qualifier = AARCH64_OPND_QLF_S_Q; break;
 default: return 
# 968 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                0
# 968 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                     ;
 }
      info->qualifier = qualifier;
    }
  else
    {

      value = extract_fields (code, 0, 2, FLD_opc1, FLD_ldst_size);
      if (value > 0x4)
 return 
# 977 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 977 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      info->qualifier = get_sreg_qualifier_from_value (value);
    }

  return 
# 981 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 981 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_addr_simple (const aarch64_operand *self 
# 986 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                    __attribute__ ((__unused__))
# 986 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ,
    aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst 
# 989 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 989 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 990 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 990 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{

  info->addr.base_regno = extract_field (FLD_Rn, code, 0);
  return 
# 994 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 994 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_addr_offset (const aarch64_operand *self 
# 1000 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                    __attribute__ ((__unused__))
# 1000 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ,
    aarch64_opnd_info *info,
    aarch64_insn code, const aarch64_inst *inst,
    aarch64_operand_error *errors 
# 1003 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1003 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  info->qualifier = get_expected_qualifier (inst, info->idx);


  info->addr.base_regno = extract_field (self->fields[0], code, 0);


  aarch64_insn imm = extract_fields (code, 0, 1, self->fields[1]);
  info->addr.offset.imm = sign_extend (imm, 8);
  if (extract_field (self->fields[2], code, 0) == 1) {
    info->addr.writeback = 1;
    info->addr.preind = 1;
  }
  return 
# 1017 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1017 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_addr_regoff (const aarch64_operand *self 
# 1023 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                    __attribute__ ((__unused__))
# 1023 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ,
    aarch64_opnd_info *info,
    aarch64_insn code, const aarch64_inst *inst,
    aarch64_operand_error *errors 
# 1026 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1026 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  aarch64_insn S, value;


  info->addr.base_regno = extract_field (FLD_Rn, code, 0);

  info->addr.offset.regno = extract_field (FLD_Rm, code, 0);

  value = extract_field (FLD_option, code, 0);
  info->shifter.kind =
    aarch64_get_operand_modifier_from_value (value, 
# 1037 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                   1 
# 1037 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                      );


  if (info->shifter.kind == AARCH64_MOD_UXTX)
    info->shifter.kind = AARCH64_MOD_LSL;

  S = extract_field (FLD_S, code, 0);
  if (S == 0)
    {
      info->shifter.amount = 0;
      info->shifter.amount_present = 0;
    }
  else
    {
      int size;


      info->qualifier = get_expected_qualifier (inst, info->idx);


      size = aarch64_get_qualifier_esize (info->qualifier);
      info->shifter.amount = get_logsz (size);
      info->shifter.amount_present = 1;
    }

  return 
# 1062 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1062 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_addr_simm (const aarch64_operand *self, aarch64_opnd_info *info,
         aarch64_insn code, const aarch64_inst *inst,
         aarch64_operand_error *errors 
# 1069 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                      __attribute__ ((__unused__))
# 1069 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                      )
{
  aarch64_insn imm;
  info->qualifier = get_expected_qualifier (inst, info->idx);


  info->addr.base_regno = extract_field (FLD_Rn, code, 0);

  imm = extract_field (self->fields[0], code, 0);
  info->addr.offset.imm = sign_extend (imm, fields[self->fields[0]].width - 1);
  if (self->fields[0] == FLD_imm7)

    info->addr.offset.imm *= aarch64_get_qualifier_esize (info->qualifier);

  if (inst->opcode->iclass == ldst_unscaled
      || inst->opcode->iclass == ldstnapair_offs
      || inst->opcode->iclass == ldstpair_off
      || inst->opcode->iclass == ldst_unpriv)
    info->addr.writeback = 0;
  else
    {

      info->addr.writeback = 1;
      if (extract_field (self->fields[1], code, 0) == 1)
 info->addr.preind = 1;
      else
 info->addr.postind = 1;
    }

  return 
# 1098 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1098 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_addr_uimm12 (const aarch64_operand *self, aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst 
# 1105 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1105 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1106 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1106 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  int shift;
  info->qualifier = get_expected_qualifier (inst, info->idx);
  shift = get_logsz (aarch64_get_qualifier_esize (info->qualifier));

  info->addr.base_regno = extract_field (self->fields[0], code, 0);

  info->addr.offset.imm = extract_field (self->fields[1], code, 0) << shift;
  return 
# 1115 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1115 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_addr_simm10 (const aarch64_operand *self, aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst 
# 1122 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1122 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1123 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1123 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  aarch64_insn imm;

  info->qualifier = get_expected_qualifier (inst, info->idx);

  info->addr.base_regno = extract_field (self->fields[0], code, 0);

  imm = extract_fields (code, 0, 2, self->fields[1], self->fields[2]);
  info->addr.offset.imm = sign_extend (imm, 9) << 3;
  if (extract_field (self->fields[3], code, 0) == 1) {
    info->addr.writeback = 1;
    info->addr.preind = 1;
  }
  return 
# 1137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_simd_addr_post (const aarch64_operand *self 
# 1143 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                       __attribute__ ((__unused__))
# 1143 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                       ,
       aarch64_opnd_info *info,
       aarch64_insn code, const aarch64_inst *inst,
       aarch64_operand_error *errors 
# 1146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 1146 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{


  int is_ld1r = get_opcode_dependent_value (inst->opcode) == 1;


  info->addr.base_regno = extract_field (FLD_Rn, code, 0);

  info->addr.offset.regno = extract_field (FLD_Rm, code, 0);
  if (info->addr.offset.regno == 31)
    {
      if (inst->opcode->operands[0] == AARCH64_OPND_LVt_AL)

 info->addr.offset.imm = (is_ld1r ? 1
     : inst->operands[0].reglist.num_regs)
   * aarch64_get_qualifier_esize (inst->operands[0].qualifier);
      else
 info->addr.offset.imm = inst->operands[0].reglist.num_regs
   * aarch64_get_qualifier_esize (inst->operands[0].qualifier)
   * aarch64_get_qualifier_nelem (inst->operands[0].qualifier);
    }
  else
    info->addr.offset.is_reg = 1;
  info->addr.writeback = 1;

  return 
# 1172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_cond (const aarch64_operand *self 
# 1177 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                             __attribute__ ((__unused__))
# 1177 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                             ,
    aarch64_opnd_info *info,
    aarch64_insn code, const aarch64_inst *inst 
# 1179 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                               __attribute__ ((__unused__))
# 1179 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                               ,
    aarch64_operand_error *errors 
# 1180 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1180 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  aarch64_insn value;

  value = extract_field (FLD_cond, code, 0);
  info->cond = get_cond_from_value (value);
  return 
# 1186 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1186 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_sysreg (const aarch64_operand *self 
# 1191 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                               __attribute__ ((__unused__))
# 1191 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                               ,
      aarch64_opnd_info *info,
      aarch64_insn code,
      const aarch64_inst *inst 
# 1194 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                              __attribute__ ((__unused__))
# 1194 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                              ,
      aarch64_operand_error *errors 
# 1195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                   __attribute__ ((__unused__))
# 1195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                   )
{

  info->sysreg.value = extract_fields (code, 0, 5, FLD_op0, FLD_op1, FLD_CRn,
           FLD_CRm, FLD_op2);
  info->sysreg.flags = 0;



  if (inst->opcode->iclass == ic_system)
    {


      if ((inst->opcode->flags & ((1ULL << 29) | (1ULL << 30))) == (1ULL << 29))
 info->sysreg.flags = (1 << 3);
      else if ((inst->opcode->flags & ((1ULL << 29) | (1ULL << 30)))
        == (1ULL << 30))
 info->sysreg.flags = (1 << 4);
    }

  return 
# 1215 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1215 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_pstatefield (const aarch64_operand *self 
# 1220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                    __attribute__ ((__unused__))
# 1220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst 
# 1222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1222 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  int i;

  info->pstatefield = extract_fields (code, 0, 2, FLD_op1, FLD_op2);
  for (i = 0; aarch64_pstatefields[i].name; i++)
    if (aarch64_pstatefields[i].value == (aarch64_insn)info->pstatefield)
      return 
# 1230 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            1
# 1230 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;

  return 
# 1232 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        0
# 1232 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             ;
}


bfd_boolean
aarch64_ext_sysins_op (const aarch64_operand *self 
# 1237 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                  __attribute__ ((__unused__))
# 1237 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                  ,
         aarch64_opnd_info *info,
         aarch64_insn code,
         const aarch64_inst *inst 
# 1240 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1240 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ,
         aarch64_operand_error *errors 
# 1241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                      __attribute__ ((__unused__))
# 1241 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                      )
{
  int i;
  aarch64_insn value;
  const aarch64_sys_ins_reg *sysins_ops;

  value = extract_fields (code, 0, 5,
     FLD_op0, FLD_op1, FLD_CRn,
     FLD_CRm, FLD_op2);

  switch (info->type)
    {
    case AARCH64_OPND_SYSREG_AT: sysins_ops = aarch64_sys_regs_at; break;
    case AARCH64_OPND_SYSREG_DC: sysins_ops = aarch64_sys_regs_dc; break;
    case AARCH64_OPND_SYSREG_IC: sysins_ops = aarch64_sys_regs_ic; break;
    case AARCH64_OPND_SYSREG_TLBI: sysins_ops = aarch64_sys_regs_tlbi; break;
    default: 
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            (__builtin_expect(!(
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            0
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 1257, 
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            "0"
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            ) : (void)0)
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                      ; return 
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               0
# 1257 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                    ;
    }

  for (i = 0; sysins_ops[i].name; i++)
    if (sysins_ops[i].value == value)
      {
 info->sysins_op = sysins_ops + i;
 ;


                                                       ;
 return 
# 1268 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       1
# 1268 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
           ;
      }

  return 
# 1271 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        0
# 1271 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             ;
}



bfd_boolean
aarch64_ext_barrier (const aarch64_operand *self 
# 1277 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                __attribute__ ((__unused__))
# 1277 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                ,
       aarch64_opnd_info *info,
       aarch64_insn code,
       const aarch64_inst *inst 
# 1280 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 1280 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 1281 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 1281 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{

  info->barrier = aarch64_barrier_options + extract_field (FLD_CRm, code, 0);
  return 
# 1285 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1285 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_prfop (const aarch64_operand *self 
# 1292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                              __attribute__ ((__unused__))
# 1292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                              ,
     aarch64_opnd_info *info,
     aarch64_insn code, const aarch64_inst *inst 
# 1294 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                __attribute__ ((__unused__))
# 1294 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                ,
     aarch64_operand_error *errors 
# 1295 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 1295 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{

  info->prfop = aarch64_prfops + extract_field (FLD_Rt, code, 0);
  return 
# 1299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1299 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_hint (const aarch64_operand *self 
# 1306 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                             __attribute__ ((__unused__))
# 1306 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                             ,
    aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst 
# 1309 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1309 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1310 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1310 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{

  unsigned hint_number;
  int i;

  hint_number = extract_fields (code, 0, 2, FLD_CRm, FLD_op2);

  for (i = 0; aarch64_hint_options[i].name != 
# 1318 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                             ((void *)0)
# 1318 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ; i++)
    {
      if (hint_number == aarch64_hint_options[i].value)
 {
   info->hint_option = &(aarch64_hint_options[i]);
   return 
# 1323 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         1
# 1323 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             ;
 }
    }

  return 
# 1327 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        0
# 1327 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             ;
}



bfd_boolean
aarch64_ext_reg_extended (const aarch64_operand *self 
# 1333 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                     __attribute__ ((__unused__))
# 1333 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                     ,
     aarch64_opnd_info *info,
     aarch64_insn code,
     const aarch64_inst *inst 
# 1336 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                             __attribute__ ((__unused__))
# 1336 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ,
     aarch64_operand_error *errors 
# 1337 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 1337 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  aarch64_insn value;


  info->reg.regno = extract_field (FLD_Rm, code, 0);

  value = extract_field (FLD_option, code, 0);
  info->shifter.kind =
    aarch64_get_operand_modifier_from_value (value, 
# 1346 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                   1 
# 1346 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                      );

  info->shifter.amount = extract_field (FLD_imm3, code, 0);


  info->shifter.operator_present = 1;


  
# 1354 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 1354 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst->operands[0].qualifier != AARCH64_OPND_QLF_NIL
# 1354 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 1354, 
# 1354 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "inst->operands[0].qualifier != AARCH64_OPND_QLF_NIL"
# 1354 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 1354 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                             ;
  info->qualifier = AARCH64_OPND_QLF_W;
  if (inst->operands[0].qualifier == AARCH64_OPND_QLF_X
      && (info->shifter.kind == AARCH64_MOD_UXTX
   || info->shifter.kind == AARCH64_MOD_SXTX))
    info->qualifier = AARCH64_OPND_QLF_X;

  return 
# 1361 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1361 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_reg_shifted (const aarch64_operand *self 
# 1367 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                    __attribute__ ((__unused__))
# 1367 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                    ,
    aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst 
# 1370 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1370 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1371 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1371 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  aarch64_insn value;


  info->reg.regno = extract_field (FLD_Rm, code, 0);

  value = extract_field (FLD_shift, code, 0);
  info->shifter.kind =
    aarch64_get_operand_modifier_from_value (value, 
# 1380 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                                   0 
# 1380 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                       );
  if (info->shifter.kind == AARCH64_MOD_ROR
      && inst->opcode->iclass != log_shift)


    return 
# 1385 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 1385 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;

  info->shifter.amount = extract_field (FLD_imm6, code, 0);


  info->shifter.operator_present = 1;

  return 
# 1392 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1392 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}





static bfd_boolean
aarch64_ext_sve_addr_reg_mul_vl (const aarch64_operand *self,
     aarch64_opnd_info *info, aarch64_insn code,
     int64_t offset)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.imm = offset * (1 + get_operand_specific_data (self));
  info->addr.offset.is_reg = 
# 1406 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            0
# 1406 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                 ;
  info->addr.writeback = 
# 1407 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                        0
# 1407 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                             ;
  info->addr.preind = 
# 1408 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                     1
# 1408 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         ;
  if (offset != 0)
    info->shifter.kind = AARCH64_MOD_MUL_VL;
  info->shifter.amount = 1;
  info->shifter.operator_present = (info->addr.offset.imm != 0);
  info->shifter.amount_present = 
# 1413 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                0
# 1413 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                     ;
  return 
# 1414 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1414 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}





bfd_boolean
aarch64_ext_sve_addr_ri_s4xvl (const aarch64_operand *self,
          aarch64_opnd_info *info, aarch64_insn code,
          const aarch64_inst *inst 
# 1424 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 1424 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  ,
          aarch64_operand_error *errors 
# 1425 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                       __attribute__ ((__unused__))
# 1425 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                       )
{
  int offset;

  offset = extract_field (FLD_SVE_imm4, code, 0);
  offset = ((offset + 8) & 15) - 8;
  return aarch64_ext_sve_addr_reg_mul_vl (self, info, code, offset);
}





bfd_boolean
aarch64_ext_sve_addr_ri_s6xvl (const aarch64_operand *self,
          aarch64_opnd_info *info, aarch64_insn code,
          const aarch64_inst *inst 
# 1441 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 1441 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  ,
          aarch64_operand_error *errors 
# 1442 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                       __attribute__ ((__unused__))
# 1442 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                       )
{
  int offset;

  offset = extract_field (FLD_SVE_imm6, code, 0);
  offset = (((offset + 32) & 63) - 32);
  return aarch64_ext_sve_addr_reg_mul_vl (self, info, code, offset);
}






bfd_boolean
aarch64_ext_sve_addr_ri_s9xvl (const aarch64_operand *self,
          aarch64_opnd_info *info,
          aarch64_insn code,
          const aarch64_inst *inst 
# 1460 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 1460 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  ,
          aarch64_operand_error *errors 
# 1461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                       __attribute__ ((__unused__))
# 1461 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                       )
{
  int offset;

  offset = extract_fields (code, 0, 2, FLD_SVE_imm6, FLD_imm3);
  offset = (((offset + 256) & 511) - 256);
  return aarch64_ext_sve_addr_reg_mul_vl (self, info, code, offset);
}




static bfd_boolean
aarch64_ext_sve_addr_reg_imm (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         int64_t offset)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.imm = offset * (1 << get_operand_specific_data (self));
  info->addr.offset.is_reg = 
# 1480 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            0
# 1480 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                 ;
  info->addr.writeback = 
# 1481 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                        0
# 1481 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                             ;
  info->addr.preind = 
# 1482 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                     1
# 1482 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         ;
  info->shifter.operator_present = 
# 1483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  0
# 1483 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                       ;
  info->shifter.amount_present = 
# 1484 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                0
# 1484 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                     ;
  return 
# 1485 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1485 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_sve_addr_ri_s4 (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst 
# 1494 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 1494 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 1495 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 1495 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{
  int offset = sign_extend (extract_field (FLD_SVE_imm4, code, 0), 3);
  return aarch64_ext_sve_addr_reg_imm (self, info, code, offset);
}




bfd_boolean
aarch64_ext_sve_addr_ri_u6 (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst 
# 1507 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 1507 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 1508 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 1508 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{
  int offset = extract_field (FLD_SVE_imm6, code, 0);
  return aarch64_ext_sve_addr_reg_imm (self, info, code, offset);
}




bfd_boolean
aarch64_ext_sve_addr_rr_lsl (const aarch64_operand *self,
        aarch64_opnd_info *info, aarch64_insn code,
        const aarch64_inst *inst 
# 1520 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 1520 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ,
        aarch64_operand_error *errors 
# 1521 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                     __attribute__ ((__unused__))
# 1521 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                     )
{
  int index_regno;

  index_regno = extract_field (self->fields[1], code, 0);
  if (index_regno == 31 && (self->flags & 0x00000100) != 0)
    return 
# 1527 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 1527 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;

  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.regno = index_regno;
  info->addr.offset.is_reg = 
# 1531 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            1
# 1531 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                ;
  info->addr.writeback = 
# 1532 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                        0
# 1532 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                             ;
  info->addr.preind = 
# 1533 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                     1
# 1533 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         ;
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = get_operand_specific_data (self);
  info->shifter.operator_present = (info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  return 
# 1538 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1538 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}





bfd_boolean
aarch64_ext_sve_addr_rz_xtw (const aarch64_operand *self,
        aarch64_opnd_info *info, aarch64_insn code,
        const aarch64_inst *inst 
# 1548 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 1548 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ,
        aarch64_operand_error *errors 
# 1549 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                     __attribute__ ((__unused__))
# 1549 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                     )
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.regno = extract_field (self->fields[1], code, 0);
  info->addr.offset.is_reg = 
# 1553 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            1
# 1553 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                ;
  info->addr.writeback = 
# 1554 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                        0
# 1554 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                             ;
  info->addr.preind = 
# 1555 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                     1
# 1555 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         ;
  if (extract_field (self->fields[2], code, 0))
    info->shifter.kind = AARCH64_MOD_SXTW;
  else
    info->shifter.kind = AARCH64_MOD_UXTW;
  info->shifter.amount = get_operand_specific_data (self);
  info->shifter.operator_present = 
# 1561 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  1
# 1561 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                      ;
  info->shifter.amount_present = (info->shifter.amount != 0);
  return 
# 1563 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1563 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_sve_addr_zi_u5 (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst 
# 1572 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 1572 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 1573 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 1573 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{
  int offset = extract_field (FLD_imm5, code, 0);
  return aarch64_ext_sve_addr_reg_imm (self, info, code, offset);
}





static bfd_boolean
aarch64_ext_sve_addr_zz (const aarch64_operand *self, aarch64_opnd_info *info,
    aarch64_insn code, enum aarch64_modifier_kind kind)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.regno = extract_field (self->fields[1], code, 0);
  info->addr.offset.is_reg = 
# 1589 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            1
# 1589 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                ;
  info->addr.writeback = 
# 1590 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                        0
# 1590 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                             ;
  info->addr.preind = 
# 1591 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                     1
# 1591 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         ;
  info->shifter.kind = kind;
  info->shifter.amount = extract_field (FLD_SVE_msz, code, 0);
  info->shifter.operator_present = (kind != AARCH64_MOD_LSL
        || info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  return 
# 1597 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1597 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_sve_addr_zz_lsl (const aarch64_operand *self,
        aarch64_opnd_info *info, aarch64_insn code,
        const aarch64_inst *inst 
# 1606 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 1606 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ,
        aarch64_operand_error *errors 
# 1607 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                     __attribute__ ((__unused__))
# 1607 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                     )
{
  return aarch64_ext_sve_addr_zz (self, info, code, AARCH64_MOD_LSL);
}




bfd_boolean
aarch64_ext_sve_addr_zz_sxtw (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst 
# 1618 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1618 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ,
         aarch64_operand_error *errors 
# 1619 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                      __attribute__ ((__unused__))
# 1619 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                      )
{
  return aarch64_ext_sve_addr_zz (self, info, code, AARCH64_MOD_SXTW);
}




bfd_boolean
aarch64_ext_sve_addr_zz_uxtw (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst 
# 1630 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1630 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ,
         aarch64_operand_error *errors 
# 1631 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                      __attribute__ ((__unused__))
# 1631 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                      )
{
  return aarch64_ext_sve_addr_zz (self, info, code, AARCH64_MOD_UXTW);
}



static bfd_boolean
decode_sve_aimm (aarch64_opnd_info *info, int64_t value)
{
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = 0;
  if (info->imm.value & 0x100)
    {
      if (value == 0)

 info->shifter.amount = 8;
      else
 value *= 256;
    }
  info->shifter.operator_present = (info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  info->imm.value = value;
  return 
# 1654 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1654 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_sve_aimm (const aarch64_operand *self,
        aarch64_opnd_info *info, const aarch64_insn code,
        const aarch64_inst *inst,
        aarch64_operand_error *errors)
{
  return (aarch64_ext_imm (self, info, code, inst, errors)
   && decode_sve_aimm (info, (uint8_t) info->imm.value));
}


bfd_boolean
aarch64_ext_sve_asimm (const aarch64_operand *self,
         aarch64_opnd_info *info, const aarch64_insn code,
         const aarch64_inst *inst,
         aarch64_operand_error *errors)
{
  return (aarch64_ext_imm (self, info, code, inst, errors)
   && decode_sve_aimm (info, (int8_t) info->imm.value));
}



bfd_boolean
aarch64_ext_sve_float_half_one (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst 
# 1684 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1684 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1685 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1685 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  if (extract_field (self->fields[0], code, 0))
    info->imm.value = 0x3f800000;
  else
    info->imm.value = 0x3f000000;
  info->imm.is_fp = 
# 1691 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                   1
# 1691 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                       ;
  return 
# 1692 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1692 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_sve_float_half_two (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst 
# 1700 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1700 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1701 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1701 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  if (extract_field (self->fields[0], code, 0))
    info->imm.value = 0x40000000;
  else
    info->imm.value = 0x3f000000;
  info->imm.is_fp = 
# 1707 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                   1
# 1707 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                       ;
  return 
# 1708 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1708 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



bfd_boolean
aarch64_ext_sve_float_zero_one (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst 
# 1716 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1716 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  if (extract_field (self->fields[0], code, 0))
    info->imm.value = 0x3f800000;
  else
    info->imm.value = 0x0;
  info->imm.is_fp = 
# 1723 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                   1
# 1723 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                       ;
  return 
# 1724 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1724 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}





bfd_boolean
aarch64_ext_sve_index (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst 
# 1734 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1734 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ,
         aarch64_operand_error *errors 
# 1735 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                      __attribute__ ((__unused__))
# 1735 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                      )
{
  int val;

  info->reglane.regno = extract_field (self->fields[0], code, 0);
  val = extract_fields (code, 0, 2, FLD_SVE_tszh, FLD_imm5);
  if ((val & 31) == 0)
    return 0;
  while ((val & 1) == 0)
    val /= 2;
  info->reglane.index = val / 2;
  return 
# 1746 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1746 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_sve_limm_mov (const aarch64_operand *self,
     aarch64_opnd_info *info, const aarch64_insn code,
     const aarch64_inst *inst,
     aarch64_operand_error *errors)
{
  int esize = aarch64_get_qualifier_esize (inst->operands[0].qualifier);
  return (aarch64_ext_limm (self, info, code, inst, errors)
   && aarch64_sve_dupm_mov_immediate_p (info->imm.value, esize));
}




bfd_boolean
aarch64_ext_sve_quad_index (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst 
# 1767 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                               __attribute__ ((__unused__))
# 1767 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ,
       aarch64_operand_error *errors 
# 1768 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                    __attribute__ ((__unused__))
# 1768 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    )
{
  unsigned int reg_bits = get_operand_specific_data (self);
  unsigned int val = extract_all_fields (self, code);
  info->reglane.regno = val & ((1 << reg_bits) - 1);
  info->reglane.index = val >> reg_bits;
  return 
# 1774 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1774 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_sve_reglist (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst 
# 1783 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                            __attribute__ ((__unused__))
# 1783 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ,
    aarch64_operand_error *errors 
# 1784 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                 __attribute__ ((__unused__))
# 1784 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 )
{
  info->reglist.first_regno = extract_field (self->fields[0], code, 0);
  info->reglist.num_regs = get_opcode_dependent_value (inst->opcode);
  return 
# 1788 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1788 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}




bfd_boolean
aarch64_ext_sve_scale (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst, aarch64_operand_error *errors)
{
  int val;

  if (!aarch64_ext_imm (self, info, code, inst, errors))
    return 
# 1802 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 1802 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
  val = extract_field (FLD_SVE_imm4, code, 0);
  info->shifter.kind = AARCH64_MOD_MUL;
  info->shifter.amount = val + 1;
  info->shifter.operator_present = (val != 0);
  info->shifter.amount_present = (val != 0);
  return 
# 1808 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1808 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}



static uint64_t
get_top_bit (uint64_t value)
{
  while ((value & -value) != value)
    value -= value & -value;
  return value;
}


bfd_boolean
aarch64_ext_sve_shlimm (const aarch64_operand *self,
   aarch64_opnd_info *info, const aarch64_insn code,
   const aarch64_inst *inst, aarch64_operand_error *errors)
{
  if (!aarch64_ext_imm (self, info, code, inst, errors)
      || info->imm.value == 0)
    return 
# 1829 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 1829 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;

  info->imm.value -= get_top_bit (info->imm.value);
  return 
# 1832 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1832 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}


bfd_boolean
aarch64_ext_sve_shrimm (const aarch64_operand *self,
   aarch64_opnd_info *info, const aarch64_insn code,
   const aarch64_inst *inst, aarch64_operand_error *errors)
{
  if (!aarch64_ext_imm (self, info, code, inst, errors)
      || info->imm.value == 0)
    return 
# 1843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 1843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;

  info->imm.value = get_top_bit (info->imm.value) * 2 - info->imm.value;
  return 
# 1846 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 1846 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}
# 1869 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static enum aarch64_opnd_qualifier
get_qualifier_from_partial_encoding (aarch64_insn value,
         const enum aarch64_opnd_qualifier*
         candidates,
         aarch64_insn mask)
{
  int i;
  ;;
  for (i = 0; i < 10; i++)
    {
      aarch64_insn standard_value;
      if (candidates[i] == AARCH64_OPND_QLF_NIL)
 break;
      standard_value = aarch64_get_qualifier_standard_value (candidates[i]);
      if ((standard_value & mask) == (value & mask))
 return candidates[i];
    }
  return AARCH64_OPND_QLF_NIL;
}





static void
get_operand_possible_qualifiers (int idx,
     const aarch64_opnd_qualifier_seq_t *list,
     enum aarch64_opnd_qualifier *qualifiers)
{
  int i;
  for (i = 0; i < 10; i++)
    if ((qualifiers[i] = list[i][idx]) == AARCH64_OPND_QLF_NIL)
      break;
}






static int
decode_sizeq (aarch64_inst *inst)
{
  int idx;
  enum aarch64_opnd_qualifier qualifier;
  aarch64_insn code;
  aarch64_insn value, mask;
  enum aarch64_field_kind fld_sz;
  enum aarch64_opnd_qualifier candidates[10];

  if (inst->opcode->iclass == asisdlse
     || inst->opcode->iclass == asisdlsep
     || inst->opcode->iclass == asisdlso
     || inst->opcode->iclass == asisdlsop)
    fld_sz = FLD_vldst_size;
  else
    fld_sz = FLD_size;

  code = inst->value;
  value = extract_fields (code, inst->opcode->mask, 2, fld_sz, FLD_Q);



  mask = extract_fields (~inst->opcode->mask, 0, 2, fld_sz, FLD_Q);




  idx = aarch64_select_operand_for_sizeq_field_coding (inst->opcode);
  ;;



  if (mask == 0x7)
    {
      inst->operands[idx].qualifier = get_vreg_qualifier_from_value (value);
      return 1;
    }

  get_operand_possible_qualifiers (idx, inst->opcode->qualifiers_list,
       candidates);
# 1962 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  qualifier = get_qualifier_from_partial_encoding (value, candidates, mask);

  if (qualifier == AARCH64_OPND_QLF_NIL)
    return 0;

  inst->operands[idx].qualifier = qualifier;
  return 1;
}




static int
decode_asimd_fcvt (aarch64_inst *inst)
{
  aarch64_field field = {0, 0};
  aarch64_insn value;
  enum aarch64_opnd_qualifier qualifier;

  gen_sub_field (FLD_size, 0, 1, &field);
  value = extract_field_2 (&field, inst->value, 0);
  qualifier = value == 0 ? AARCH64_OPND_QLF_V_4S
    : AARCH64_OPND_QLF_V_2D;
  switch (inst->opcode->op)
    {
    case OP_FCVTN:
    case OP_FCVTN2:

      inst->operands[1].qualifier = qualifier;
      break;
    case OP_FCVTL:
    case OP_FCVTL2:

      inst->operands[0].qualifier = qualifier;
      break;
    default:
      
# 1998 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 1998 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     0
# 1998 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 1998, 
# 1998 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "0"
# 1998 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
# 1998 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
      return 0;
    }

  return 1;
}




static int
decode_asisd_fcvtxn (aarch64_inst *inst)
{
  aarch64_field field = {0, 0};
  gen_sub_field (FLD_size, 0, 1, &field);
  if (!extract_field_2 (&field, inst->value, 0))
    return 0;
  inst->operands[0].qualifier = AARCH64_OPND_QLF_S_S;
  return 1;
}


static int
decode_fcvt (aarch64_inst *inst)
{
  enum aarch64_opnd_qualifier qualifier;
  aarch64_insn value;
  const aarch64_field field = {15, 2};


  value = extract_field_2 (&field, inst->value, 0);
  switch (value)
    {
    case 0: qualifier = AARCH64_OPND_QLF_S_S; break;
    case 1: qualifier = AARCH64_OPND_QLF_S_D; break;
    case 3: qualifier = AARCH64_OPND_QLF_S_H; break;
    default: return 0;
    }
  inst->operands[0].qualifier = qualifier;

  return 1;
}




static int
do_misc_decoding (aarch64_inst *inst)
{
  unsigned int value;
  switch (inst->opcode->op)
    {
    case OP_FCVT:
      return decode_fcvt (inst);

    case OP_FCVTN:
    case OP_FCVTN2:
    case OP_FCVTL:
    case OP_FCVTL2:
      return decode_asimd_fcvt (inst);

    case OP_FCVTXN_S:
      return decode_asisd_fcvtxn (inst);

    case OP_MOV_P_P:
    case OP_MOVS_P_P:
      value = extract_field (FLD_SVE_Pn, inst->value, 0);
      return (value == extract_field (FLD_SVE_Pm, inst->value, 0)
       && value == extract_field (FLD_SVE_Pg4_10, inst->value, 0));

    case OP_MOV_Z_P_Z:
      return (extract_field (FLD_SVE_Zd, inst->value, 0)
       == extract_field (FLD_SVE_Zm_16, inst->value, 0));

    case OP_MOV_Z_V:

      value = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_imm5);
      return value > 0 && value <= 16 && value == (value & -value);

    case OP_MOV_Z_Z:
      return (extract_field (FLD_SVE_Zn, inst->value, 0)
       == extract_field (FLD_SVE_Zm_16, inst->value, 0));

    case OP_MOV_Z_Zi:

      value = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_imm5);
      return value > 0 && value != (value & -value);

    case OP_MOVM_P_P_P:
      return (extract_field (FLD_SVE_Pd, inst->value, 0)
       == extract_field (FLD_SVE_Pm, inst->value, 0));

    case OP_MOVZS_P_P_P:
    case OP_MOVZ_P_P_P:
      return (extract_field (FLD_SVE_Pn, inst->value, 0)
       == extract_field (FLD_SVE_Pm, inst->value, 0));

    case OP_NOTS_P_P_P_Z:
    case OP_NOT_P_P_P_Z:
      return (extract_field (FLD_SVE_Pm, inst->value, 0)
       == extract_field (FLD_SVE_Pg4_10, inst->value, 0));

    default:
      return 0;
    }
}







static int
do_special_decoding (aarch64_inst *inst)
{
  int idx;
  aarch64_insn value;

  if (inst->opcode->flags & (1 << 4))
    {
      value = extract_field (FLD_cond2, inst->value, 0);
      inst->cond = get_cond_from_value (value);
    }

  if (inst->opcode->flags & (1 << 5))
    {
      idx = select_operand_for_sf_field_coding (inst->opcode);
      value = extract_field (FLD_sf, inst->value, 0);
      inst->operands[idx].qualifier = get_greg_qualifier_from_value (value);
      if ((inst->opcode->flags & (1 << 23))
   && extract_field (FLD_N, inst->value, 0) != value)
 return 0;
    }

  if (inst->opcode->flags & (1 << 27))
    {
      idx = select_operand_for_sf_field_coding (inst->opcode);
      value = extract_field (FLD_lse_sz, inst->value, 0);
      inst->operands[idx].qualifier = get_greg_qualifier_from_value (value);
    }

  if (inst->opcode->flags & (1 << 6))
    return decode_sizeq (inst);

  if (inst->opcode->flags & (1 << 7))
    {
      idx = select_operand_for_fptype_field_coding (inst->opcode);
      value = extract_field (FLD_type, inst->value, 0);
      switch (value)
 {
 case 0: inst->operands[idx].qualifier = AARCH64_OPND_QLF_S_S; break;
 case 1: inst->operands[idx].qualifier = AARCH64_OPND_QLF_S_D; break;
 case 3: inst->operands[idx].qualifier = AARCH64_OPND_QLF_S_H; break;
 default: return 0;
 }
    }

  if (inst->opcode->flags & (1 << 8))
    {


      aarch64_insn mask;
      enum aarch64_opnd_qualifier candidates[10];
      idx = select_operand_for_scalar_size_field_coding (inst->opcode);
      value = extract_field (FLD_size, inst->value, inst->opcode->mask);
      mask = extract_field (FLD_size, ~inst->opcode->mask, 0);


      if (mask == 0x3)
 inst->operands[idx].qualifier = get_sreg_qualifier_from_value (value);
      else
 {
   get_operand_possible_qualifiers (idx, inst->opcode->qualifiers_list,
        candidates);
   inst->operands[idx].qualifier
     = get_qualifier_from_partial_encoding (value, candidates, mask);
 }
    }

  if (inst->opcode->flags & (1 << 9))
    {

      int num = 0;
      unsigned val, Q;
      
# 2183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 2183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     aarch64_get_operand_class (inst->opcode->operands[0]) == AARCH64_OPND_CLASS_SIMD_REG
# 2183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2183, 
# 2183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "aarch64_get_operand_class (inst->opcode->operands[0]) == AARCH64_OPND_CLASS_SIMD_REG"
# 2183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
                                      
# 2184 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                     ;
# 2195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      val = extract_field (FLD_imm5, inst->value, 0);
      while ((val & 0x1) == 0 && ++num <= 3)
 val >>= 1;
      if (num > 3)
 return 0;
      Q = (unsigned) extract_field (FLD_Q, inst->value, inst->opcode->mask);
      inst->operands[0].qualifier =
 get_vreg_qualifier_from_value ((num << 1) | Q);
    }

  if (inst->opcode->flags & (1 << 10))
    {


      idx = aarch64_operand_index (inst->opcode->operands, AARCH64_OPND_Rt);
      if (idx == -1)
 {


   
# 2214 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  (__builtin_expect(!(
# 2214 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  aarch64_get_operand_class (inst->opcode->operands[0]) == AARCH64_OPND_CLASS_INT_REG
# 2214 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2214, 
# 2214 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  "aarch64_get_operand_class (inst->opcode->operands[0]) == AARCH64_OPND_CLASS_INT_REG"
# 2214 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  ) : (void)0)
                                  
# 2215 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                 ;
   idx = 0;
 }
      
# 2218 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 2218 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     idx == 0 || idx == 1
# 2218 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2218, 
# 2218 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "idx == 0 || idx == 1"
# 2218 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
# 2218 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                  ;
      value = extract_field (FLD_Q, inst->value, 0);
      inst->operands[idx].qualifier = get_greg_qualifier_from_value (value);
    }

  if (inst->opcode->flags & (1 << 11))
    {
      aarch64_field field = {0, 0};
      
# 2226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 2226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     aarch64_get_operand_class (inst->opcode->operands[0]) == AARCH64_OPND_CLASS_INT_REG
# 2226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2226, 
# 2226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "aarch64_get_operand_class (inst->opcode->operands[0]) == AARCH64_OPND_CLASS_INT_REG"
# 2226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
                                     
# 2227 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                    ;
      gen_sub_field (FLD_opc, 0, 1, &field);
      value = extract_field_2 (&field, inst->value, 0);
      inst->operands[0].qualifier
 = value ? AARCH64_OPND_QLF_W : AARCH64_OPND_QLF_X;
    }


  if (inst->opcode->flags & (1 << 22))
    return do_misc_decoding (inst);

  return 1;
}






static int
convert_extr_to_ror (aarch64_inst *inst)
{
  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno)
    {
      copy_operand_info (inst, 2, 3);
      inst->operands[3].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}




static int
convert_shll_to_xtl (aarch64_inst *inst)
{
  if (inst->operands[2].imm.value == 0)
    {
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}





static int
convert_bfm_to_sr (aarch64_inst *inst)
{
  int64_t imms, val;

  imms = inst->operands[3].imm.value;
  val = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 31 : 63;
  if (imms == val)
    {
      inst->operands[3].type = AARCH64_OPND_NIL;
      return 1;
    }

  return 0;
}


static int
convert_orr_to_mov (aarch64_inst *inst)
{



  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno)
    {
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}






static int
convert_bfm_to_bfx (aarch64_inst *inst)
{
  int64_t immr, imms;

  immr = inst->operands[2].imm.value;
  imms = inst->operands[3].imm.value;
  if (imms >= immr)
    {
      int64_t lsb = immr;
      inst->operands[2].imm.value = lsb;
      inst->operands[3].imm.value = imms + 1 - lsb;


      reset_operand_qualifier (inst, 2);
      reset_operand_qualifier (inst, 3);
      return 1;
    }

  return 0;
}






static int
convert_bfm_to_bfi (aarch64_inst *inst)
{
  int64_t immr, imms, val;

  immr = inst->operands[2].imm.value;
  imms = inst->operands[3].imm.value;
  val = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 32 : 64;
  if (imms < immr)
    {
      inst->operands[2].imm.value = (val - immr) & (val - 1);
      inst->operands[3].imm.value = imms + 1;


      reset_operand_qualifier (inst, 2);
      reset_operand_qualifier (inst, 3);
      return 1;
    }

  return 0;
}






static int
convert_bfm_to_bfc (aarch64_inst *inst)
{
  int64_t immr, imms, val;


  
# 2372 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 2372 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst->operands[1].reg.regno == 0x1f
# 2372 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2372, 
# 2372 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "inst->operands[1].reg.regno == 0x1f"
# 2372 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 2372 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ;

  immr = inst->operands[2].imm.value;
  imms = inst->operands[3].imm.value;
  val = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 32 : 64;
  if (imms < immr)
    {

      copy_operand_info (inst, 1, 2);
      copy_operand_info (inst, 2, 3);
      inst->operands[3].type = AARCH64_OPND_NIL;


      inst->operands[1].imm.value = (val - immr) & (val - 1);
      inst->operands[2].imm.value = imms + 1;



      reset_operand_qualifier (inst, 1);
      reset_operand_qualifier (inst, 2);
      reset_operand_qualifier (inst, 3);

      return 1;
    }

  return 0;
}






static int
convert_ubfm_to_lsl (aarch64_inst *inst)
{
  int64_t immr = inst->operands[2].imm.value;
  int64_t imms = inst->operands[3].imm.value;
  int64_t val
    = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 31 : 63;

  if ((immr == 0 && imms == val) || immr == imms + 1)
    {
      inst->operands[3].type = AARCH64_OPND_NIL;
      inst->operands[2].imm.value = val - imms;
      return 1;
    }

  return 0;
}






static int
convert_from_csel (aarch64_inst *inst)
{
  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno
      && (inst->operands[3].cond->value & 0xe) != 0xe)
    {
      copy_operand_info (inst, 2, 3);
      inst->operands[2].cond = get_inverted_cond (inst->operands[3].cond);
      inst->operands[3].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}






static int
convert_csinc_to_cset (aarch64_inst *inst)
{
  if (inst->operands[1].reg.regno == 0x1f
      && inst->operands[2].reg.regno == 0x1f
      && (inst->operands[3].cond->value & 0xe) != 0xe)
    {
      copy_operand_info (inst, 1, 3);
      inst->operands[1].cond = get_inverted_cond (inst->operands[3].cond);
      inst->operands[3].type = AARCH64_OPND_NIL;
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}
# 2473 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static int
convert_movewide_to_mov (aarch64_inst *inst)
{
  uint64_t value = inst->operands[1].imm.value;

  if (value == 0 && inst->operands[1].shifter.amount != 0)
    return 0;
  inst->operands[1].type = AARCH64_OPND_IMM_MOV;
  inst->operands[1].shifter.kind = AARCH64_MOD_NONE;
  value <<= inst->operands[1].shifter.amount;


  if (inst->opcode->op == OP_MOVN)
    {
      int is32 = inst->operands[0].qualifier == AARCH64_OPND_QLF_W;
      value = ~value;

      if (aarch64_wide_constant_p (value, is32, 
# 2490 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                               ((void *)0)
# 2490 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                   ))
 return 0;
    }
  inst->operands[1].imm.value = value;
  inst->operands[1].shifter.amount = 0;
  return 1;
}
# 2508 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static int
convert_movebitmask_to_mov (aarch64_inst *inst)
{
  int is32;
  uint64_t value;


  
# 2515 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 2515 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst->operands[1].reg.regno == 0x1f
# 2515 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2515, 
# 2515 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "inst->operands[1].reg.regno == 0x1f"
# 2515 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 2515 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ;
  copy_operand_info (inst, 1, 2);
  is32 = inst->operands[0].qualifier == AARCH64_OPND_QLF_W;
  inst->operands[1].type = AARCH64_OPND_IMM_MOV;
  value = inst->operands[1].imm.value;


  if (inst->operands[0].reg.regno != 0x1f
      && (aarch64_wide_constant_p (value, is32, 
# 2523 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                               ((void *)0)
# 2523 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                   )
   || aarch64_wide_constant_p (~value, is32, 
# 2524 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                            ((void *)0)
# 2524 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                )))
    return 0;

  inst->operands[2].type = AARCH64_OPND_NIL;
  return 1;
}




static int
convert_to_alias (aarch64_inst *inst, const aarch64_opcode *alias)
{
  switch (alias->op)
    {
    case OP_ASR_IMM:
    case OP_LSR_IMM:
      return convert_bfm_to_sr (inst);
    case OP_LSL_IMM:
      return convert_ubfm_to_lsl (inst);
    case OP_CINC:
    case OP_CINV:
    case OP_CNEG:
      return convert_from_csel (inst);
    case OP_CSET:
    case OP_CSETM:
      return convert_csinc_to_cset (inst);
    case OP_UBFX:
    case OP_BFXIL:
    case OP_SBFX:
      return convert_bfm_to_bfx (inst);
    case OP_SBFIZ:
    case OP_BFI:
    case OP_UBFIZ:
      return convert_bfm_to_bfi (inst);
    case OP_BFC:
      return convert_bfm_to_bfc (inst);
    case OP_MOV_V:
      return convert_orr_to_mov (inst);
    case OP_MOV_IMM_WIDE:
    case OP_MOV_IMM_WIDEN:
      return convert_movewide_to_mov (inst);
    case OP_MOV_IMM_LOG:
      return convert_movebitmask_to_mov (inst);
    case OP_ROR_IMM:
      return convert_extr_to_ror (inst);
    case OP_SXTL:
    case OP_SXTL2:
    case OP_UXTL:
    case OP_UXTL2:
      return convert_shll_to_xtl (inst);
    default:
      return 0;
    }
}

static bfd_boolean
aarch64_opcode_decode (const aarch64_opcode *, const aarch64_insn,
         aarch64_inst *, int, aarch64_operand_error *errors);
# 2637 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static void
determine_disassembling_preference (struct aarch64_inst *inst,
        aarch64_operand_error *errors)
{
  const aarch64_opcode *opcode;
  const aarch64_opcode *alias;

  opcode = inst->opcode;


  if (!opcode_has_alias (opcode))
    return;

  alias = aarch64_find_alias_opcode (opcode);
  
# 2651 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 2651 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 alias
# 2651 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2651, 
# 2651 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "alias"
# 2651 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 2651 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;
# 2667 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  for (; alias; alias = aarch64_find_next_alias_opcode (alias))
    {
      ;;
      
# 2670 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 2670 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     alias_opcode_p (alias) || opcode_has_alias (opcode)
# 2670 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2670, 
# 2670 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "alias_opcode_p (alias) || opcode_has_alias (opcode)"
# 2670 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
# 2670 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                 ;




      if (pseudo_opcode_p (alias))
 {
   ;;
   continue;
 }

      if ((inst->value & alias->mask) != alias->opcode)
 {
   ;;
   continue;
 }


      if (aarch64_num_of_operands (alias) == 0 && alias->opcode == inst->value)
 {
   ;;
   aarch64_replace_opcode (inst, alias);
   return;
 }
      if (alias->flags & (1 << 20))
 {
   aarch64_inst copy;
   
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  __builtin___memcpy_chk (
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  &copy
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  , 
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  inst, sizeof (aarch64_inst)
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  , __builtin_object_size (
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  &copy
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  , 0))
# 2697 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ;


   if (convert_to_alias (&copy, alias) == 1)
     {
       aarch64_replace_opcode (&copy, alias);
       
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      (__builtin_expect(!(
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      aarch64_match_operands_constraint (&copy, 
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      ((void *)0)
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      )
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2703, 
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      "aarch64_match_operands_constraint (&copy, NULL)"
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      ) : (void)0)
# 2703 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                              ;
       ;;
       
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      __builtin___memcpy_chk (
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      inst
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      , 
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      &copy, sizeof (aarch64_inst)
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      , __builtin_object_size (
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      inst
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      , 0))
# 2705 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ;
       return;
     }
 }
      else
 {

   aarch64_inst temp;
   
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  __builtin___memset_chk (
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  &temp
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  , 
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  '\0', sizeof (aarch64_inst)
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  , __builtin_object_size (
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  &temp
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
  , 0))
# 2713 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                             ;
   if (aarch64_opcode_decode (alias, inst->value, &temp, 1, errors) == 1)
     {
       ;;
       
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      __builtin___memcpy_chk (
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      inst
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      , 
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      &temp, sizeof (aarch64_inst)
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      , __builtin_object_size (
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      inst
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
      , 0))
# 2717 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 ;
       return;
     }
 }
    }
}







static bfd_boolean
aarch64_decode_variant_using_iclass (aarch64_inst *inst)
{
  int i, variant;

  variant = 0;
  switch (inst->opcode->iclass)
    {
    case sve_cpy:
      variant = extract_fields (inst->value, 0, 2, FLD_size, FLD_SVE_M_14);
      break;

    case sve_index:
      i = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_imm5);
      if ((i & 31) == 0)
 return 
# 2745 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 2745 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      while ((i & 1) == 0)
 {
   i >>= 1;
   variant += 1;
 }
      break;

    case sve_limm:

      if ((inst->value & 0x20600) == 0x600)
 variant = 0;
      else if ((inst->value & 0x20400) == 0x400)
 variant = 1;
      else if ((inst->value & 0x20000) == 0)
 variant = 2;
      else
 variant = 3;
      break;

    case sve_misc:

      break;

    case sve_movprfx:
      variant = extract_fields (inst->value, 0, 2, FLD_size, FLD_SVE_M_16);
      break;

    case sve_pred_zm:
      variant = extract_field (FLD_SVE_M_4, inst->value, 0);
      break;

    case sve_shift_pred:
      i = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_SVE_tszl_8);
    sve_shift:
      if (i == 0)
 return 
# 2781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 2781 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      while (i != 1)
 {
   i >>= 1;
   variant += 1;
 }
      break;

    case sve_shift_unpred:
      i = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_SVE_tszl_19);
      goto sve_shift;

    case sve_size_bhs:
      variant = extract_field (FLD_size, inst->value, 0);
      if (variant >= 3)
 return 
# 2796 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 2796 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      break;

    case sve_size_bhsd:
      variant = extract_field (FLD_size, inst->value, 0);
      break;

    case sve_size_hsd:
      i = extract_field (FLD_size, inst->value, 0);
      if (i < 1)
 return 
# 2806 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
       0
# 2806 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
      variant = i - 1;
      break;

    case sve_size_sd:
      variant = extract_field (FLD_SVE_sz, inst->value, 0);
      break;

    default:

      return 
# 2816 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            1
# 2816 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
    }

  for (i = 0; i < 6; i++)
    inst->operands[i].qualifier = inst->opcode->qualifiers_list[variant][i];
  return 
# 2821 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        1
# 2821 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
            ;
}
# 2831 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static bfd_boolean
aarch64_opcode_decode (const aarch64_opcode *opcode, const aarch64_insn code,
         aarch64_inst *inst, int noaliases_p,
         aarch64_operand_error *errors)
{
  int i;

  ;;

  
# 2840 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 2840 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 opcode && inst
# 2840 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 2840, 
# 2840 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "opcode && inst"
# 2840 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 2840 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                        ;


  
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 __builtin___memset_chk (
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 , 
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 '\0', sizeof (aarch64_inst)
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 , __builtin_object_size (
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 , 0))
# 2843 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                           ;


  if ((code & opcode->mask) != (opcode->opcode & opcode->mask))
    {
      ;;
      goto decode_fail;
    }

  inst->opcode = opcode;
  inst->value = code;


  for (i = 0; i < 6; i++)
    {
      if (opcode->operands[i] == AARCH64_OPND_NIL)
 break;
      inst->operands[i].type = opcode->operands[i];
      inst->operands[i].idx = i;
    }


  if (opcode_has_special_coder (opcode) && do_special_decoding (inst) == 0)
    {
      ;;
      goto decode_fail;
    }



  if (!aarch64_decode_variant_using_iclass (inst))
    {
      ;;
      goto decode_fail;
    }


  for (i = 0; i < 6; i++)
    {
      const aarch64_operand *opnd;
      enum aarch64_opnd type;

      type = opcode->operands[i];
      if (type == AARCH64_OPND_NIL)
 break;
      opnd = &aarch64_operands[type];
      if (operand_has_extractor (opnd)
   && (! aarch64_extract_operand (opnd, &inst->operands[i], code, inst,
      errors)))
 {
   ;;
   goto decode_fail;
 }
    }


  if (opcode->verifier && ! opcode->verifier (opcode, code))
    {
      ;;
      goto decode_fail;
    }


  if (aarch64_match_operands_constraint (inst, 
# 2906 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                              ((void *)0)
# 2906 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  ) == 1)
    {





      if (!noaliases_p)
 determine_disassembling_preference (inst, errors);
      ;;
      return 
# 2916 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            1
# 2916 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
    }
  else
    {
      ;;
    }

decode_fail:
  return 
# 2924 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        0
# 2924 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             ;
}





static void
user_friendly_fixup (aarch64_inst *inst)
{
  switch (inst->opcode->iclass)
    {
    case testbranch:






      if (inst->operands[1].imm.value < 32)
 inst->operands[0].qualifier = AARCH64_OPND_QLF_W;
      break;
    default: break;
    }
}





int
aarch64_decode_insn (aarch64_insn insn, aarch64_inst *inst,
       bfd_boolean noaliases_p,
       aarch64_operand_error *errors)
{
  const aarch64_opcode *opcode = aarch64_opcode_lookup (insn);
# 2980 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
  while (opcode != 
# 2980 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  ((void *)0)
# 2980 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                      )
    {


      if (aarch64_opcode_decode (opcode, insn, inst, noaliases_p, errors) == 1)
 return 0;
      opcode = aarch64_find_next_opcode (opcode);
    }

  return -1;
}



static void
print_operands (bfd_vma pc, const aarch64_opcode *opcode,
  const aarch64_opnd_info *opnds, struct disassemble_info *info)
{
  int i, pcrel_p, num_printed;
  char *notes = 
# 2999 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
               ((void *)0)
# 2999 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                   ;
  for (i = 0, num_printed = 0; i < 6; i++)
    {
      char str[128];





      if (opcode->operands[i] == AARCH64_OPND_NIL
   || opnds[i].type == AARCH64_OPND_NIL)
 break;


      aarch64_print_operand (str, sizeof (str), pc, opcode, opnds, i, &pcrel_p,
        &info->target, &notes);


      if (str[0] != '\0')
 (*info->fprintf_func) (info->stream, "%s",
          num_printed++ == 0 ? " " : ", ");


      if (pcrel_p)
 (*info->print_address_func) (info->target, info);
      else
 (*info->fprintf_func) (info->stream, "%s", str);
    }

    if (notes && !no_notes)
      (*info->fprintf_func) (info->stream, " ; note: %s", notes);
}



static void
remove_dot_suffix (char *name, const aarch64_inst *inst)
{
  char *ptr;
  size_t len;

  ptr = strchr (inst->opcode->name, '.');
  
# 3041 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 3041 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 ptr && inst->cond
# 3041 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 3041, 
# 3041 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "ptr && inst->cond"
# 3041 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 3041 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                           ;
  len = ptr - inst->opcode->name;
  
# 3043 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 (__builtin_expect(!(
# 3043 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 len < 8
# 3043 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 3043, 
# 3043 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 "len < 8"
# 3043 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 ) : (void)0)
# 3043 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 ;
  
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 __builtin___strncpy_chk (
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 name
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 , 
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 inst->opcode->name, len
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 , __builtin_object_size (
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
 name
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
 , 2 > 1 ? 1 : 0))
# 3044 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                        ;
  name[len] = '\0';
}



static void
print_mnemonic_name (const aarch64_inst *inst, struct disassemble_info *info)
{
  if (inst->opcode->flags & (1 << 4))
    {



      char name[8];

      remove_dot_suffix (name, inst);
      (*info->fprintf_func) (info->stream, "%s.%s", name, inst->cond->names[0]);
    }
  else
    (*info->fprintf_func) (info->stream, "%s", inst->opcode->name);
}




static void
print_comment (const aarch64_inst *inst, struct disassemble_info *info)
{
return;
  if (inst->opcode->flags & (1 << 4))
    {
      char name[8];
      unsigned int i, num_conds;

      remove_dot_suffix (name, inst);
      num_conds = 
# 3080 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                 (sizeof (
# 3080 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 inst->cond->names
# 3080 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                 ) / sizeof ((
# 3080 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                 inst->cond->names
# 3080 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                 )[0]))
# 3080 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                               ;
      for (i = 1; i < num_conds && inst->cond->names[i]; i++)
 (*info->fprintf_func) (info->stream, "%s %s.%s",
          i == 1 ? "  //" : ",",
          name, inst->cond->names[i]);
    }
}



static void
print_aarch64_insn (bfd_vma pc, const aarch64_inst *inst,
      struct disassemble_info *info)
{
  print_mnemonic_name (inst, info);
  print_operands (pc, inst->opcode, inst->operands, info);
  print_comment (inst, info);
}



static void
print_insn_aarch64_word (bfd_vma pc,
    uint32_t word,
    struct disassemble_info *info,
    aarch64_operand_error *errors)
{
  static const char *err_msg[6] =
    {
      [0] = "_",
      [- -1] = "undefined",
      [- -3] = "unpredictable",
      [- -5] = "not-yet-implemented"
    };

  int ret;
  aarch64_inst inst;

  info->insn_info_valid = 1;
  info->branch_delay_insns = 0;
  info->data_size = 0;
  info->target = 0;
  info->target2 = 0;

  if (info->flags & 
# 3124 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                   (1LL << 31)
# 3124 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                 )





    pc = 0;

  ret = aarch64_decode_insn (word, &inst, no_aliases, errors);

  if (((word >> 21) & 0x3ff) == 1)
    {

      
# 3137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     (__builtin_expect(!(
# 3137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     ret != 0
# 3137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ), 0) ? __assert_rtn(__func__, "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c", 3137, 
# 3137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
     "ret != ERR_OK"
# 3137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
     ) : (void)0)
# 3137 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                           ;
      ret = -5;
    }

  switch (ret)
    {
    case -1:
    case -3:
    case -5:

      info->insn_type = dis_noninsn;

      (*info->fprintf_func) (info->stream,"%s", err_msg[-ret]);
      break;
    case 0:
      user_friendly_fixup (&inst);
      print_aarch64_insn (pc, &inst, info);
      break;
    default:
      abort ();
    }
}




bfd_boolean
aarch64_symbol_is_valid (asymbol * sym,
    struct disassemble_info * info 
# 3165 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  __attribute__ ((__unused__))
# 3165 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  )
{
  const char * name;

  if (sym == 
# 3169 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            ((void *)0)
# 3169 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                )
    return 
# 3170 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 3170 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;

  name = 
# 3172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        ((
# 3172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
        sym
# 3172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        )->name)
# 3172 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                              ;

  return name
    && (name[0] != '$'
 || (name[1] != 'x' && name[1] != 'd')
 || (name[2] != '\0' && name[2] != '.'));
}



static void
print_insn_data (bfd_vma pc 
# 3183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                           __attribute__ ((__unused__))
# 3183 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                           ,
   uint32_t word,
   struct disassemble_info *info,
   aarch64_operand_error *errors 
# 3186 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                __attribute__ ((__unused__))
# 3186 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                )
{
  switch (info->bytes_per_chunk)
    {
    case 1:
      info->fprintf_func (info->stream, ".byte 0x%02x", word);
      break;
    case 2:
      info->fprintf_func (info->stream, ".short 0x%04x", word);
      break;
    case 4:
      info->fprintf_func (info->stream, ".word 0x%08x", word);
      break;
    default:
      abort ();
    }
}




static int
get_sym_code_type (struct disassemble_info *info, int n,
     enum map_type *map_type)
{
  elf_symbol_type *es;
  unsigned int type;
  const char *name;


  if (info->section != 
# 3216 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                      ((void *)0) 
# 3216 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                           && info->section != info->symtab[n]->section)
    return 
# 3217 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
          0
# 3217 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
               ;

  es = *(elf_symbol_type **)(info->symtab + n);
  type = 
# 3220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        ((
# 3220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
        es->internal_elf_sym.st_info
# 3220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        ) & 0xF)
# 3220 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                  ;


  if (type == 
# 3223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
             2
# 3223 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                     )
    {
      *map_type = MAP_INSN;
      return 
# 3226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            1
# 3226 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
    }


  name = 
# 3230 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        ((
# 3230 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
        info->symtab[n]
# 3230 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        )->name)
# 3230 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                         ;
  if (name[0] == '$'
      && (name[1] == 'x' || name[1] == 'd')
      && (name[2] == '\0' || name[2] == '.'))
    {
      *map_type = (name[1] == 'x' ? MAP_INSN : MAP_DATA);
      return 
# 3236 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
            1
# 3236 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                ;
    }

  return 
# 3239 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        0
# 3239 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             ;
}



int
print_insn_aarch64 (bfd_vma pc,
      struct disassemble_info *info)
{
  bfd_byte buffer[4];
  int status;
  void (*printer) (bfd_vma, uint32_t, struct disassemble_info *,
       aarch64_operand_error *);
  bfd_boolean found = 
# 3252 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                       0
# 3252 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                            ;
  unsigned int size = 4;
  unsigned long data;
  aarch64_operand_error errors;

  if (info->disassembler_options)
    {
      set_default_aarch64_dis_options (info);

      parse_aarch64_dis_options (info->disassembler_options);


      info->disassembler_options = 
# 3264 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                                  ((void *)0)
# 3264 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                      ;
    }


  info->endian_code = BFD_ENDIAN_LITTLE;



  if (info->symtab_size != 0
      && 
# 3273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        (((
# 3273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
        *info->symtab
# 3273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
        )->the_bfd)->xvec->flavour) 
# 3273 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            == bfd_target_elf_flavour)
    {
      enum map_type type = MAP_INSN;
      int last_sym = -1;
      bfd_vma addr;
      int n;

      if (pc <= last_mapping_addr)
 last_mapping_sym = -1;



      n = info->symtab_pos + 1;
      if (n < last_mapping_sym)
 n = last_mapping_sym;


      for (; n < info->symtab_size; n++)
 {
   addr = 
# 3292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         (((
# 3292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
         info->symtab[n]
# 3292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         )->section->vma) + (
# 3292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
         info->symtab[n]
# 3292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
         )->value)
# 3292 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                            ;
   if (addr > pc)
     break;
   if (get_sym_code_type (info, n, &type))
     {
       last_sym = n;
       found = 
# 3298 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
              1
# 3298 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  ;
     }
 }

      if (!found)
 {
   n = info->symtab_pos;
   if (n < last_mapping_sym)
     n = last_mapping_sym;



   for (; n >= 0; n--)
     {
       if (get_sym_code_type (info, n, &type))
  {
    last_sym = n;
    break;
  }
     }
 }

      last_mapping_sym = last_sym;
      last_type = type;





      if (last_type == MAP_DATA)
 {
   size = 4 - (pc & 3);
   for (n = last_sym + 1; n < info->symtab_size; n++)
     {
       addr = 
# 3332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
             (((
# 3332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             info->symtab[n]
# 3332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
             )->section->vma) + (
# 3332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
             info->symtab[n]
# 3332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
             )->value)
# 3332 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                ;
       if (addr > pc)
  {
    if (addr - pc < size)
      size = addr - pc;
    break;
  }
     }



   if (size == 3)
     size = (pc & 1) ? 1 : 2;
 }
    }

  if (last_type == MAP_DATA)
    {

      info->bytes_per_chunk = size;
      info->display_endian = info->endian;
      printer = print_insn_data;
    }
  else
    {
      info->bytes_per_chunk = size = 4;
      info->display_endian = info->endian_code;
      printer = print_insn_aarch64_word;
    }

  status = (*info->read_memory_func) (pc, buffer, size, info);
  if (status != 0)
    {
      (*info->memory_error_func) (status, pc, info);
      return -1;
    }

  data = bfd_get_bits (buffer, size * 8,
         info->display_endian == BFD_ENDIAN_BIG);

  (*printer) (pc, data, info, &errors);

  return size;
}

void
print_aarch64_disassembler_options (FILE *stream)
{
  fprintf (stream, 
# 3380 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 3380 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "\nThe following AARCH64 specific disassembler options are supported for use\nwith the -M switch (multiple options should be separated by commas):\n"
# 3380 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )

                                                                        
# 3382 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                                       );

  fprintf (stream, 
# 3384 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 3384 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "\n  no-aliases         Don't print instruction aliases.\n"
# 3384 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )
                                                         
# 3385 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                        );

  fprintf (stream, 
# 3387 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 3387 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "\n  aliases            Do print instruction aliases.\n"
# 3387 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )
                                                      
# 3388 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                     );

  fprintf (stream, 
# 3390 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 3390 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "\n  no-notes         Don't print instruction notes.\n"
# 3390 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )
                                                     
# 3391 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                    );

  fprintf (stream, 
# 3393 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 3393 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "\n  notes            Do print instruction notes.\n"
# 3393 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )
                                                  
# 3394 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                                                 );






  fprintf (stream, 
# 3401 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  (
# 3401 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                  "\n"
# 3401 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c" 3 4
                  )
# 3401 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
                         );
}
