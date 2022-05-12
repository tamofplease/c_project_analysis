# 0 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode_fields32.c"
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
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode_fields32.c"

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




# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 155 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 181 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 





typedef long unsigned int size_t;
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
# 3 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode_fields32.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 1 3 4
# 16 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 3 4
#define _STDINT_H_ 


#define __WORDSIZE 64







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int8_t.h" 3 4
#define _INT8_T 
typedef signed char int8_t;
# 28 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int16_t.h" 3 4
#define _INT16_T 
typedef short int16_t;
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int32_t.h" 3 4
#define _INT32_T 
typedef int int32_t;
# 30 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_int64_t.h" 3 4
#define _INT64_T 
typedef long long int64_t;
# 31 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4

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
# 62 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
#define _INTPTR_T 
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/types.h" 3 4
#define _BSD_MACHINE_TYPES_H_ 


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
#define _MACHTYPES_H_ 
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/types.h" 3 4
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
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 63 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/stdint.h" 2 3 4




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
# 4 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode_fields32.c" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 29 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool




#define true 1
#define false 0
# 50 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 5 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode_fields32.c" 2

# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 1
       


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 5 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 1 3 4
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/string.h" 3 4
#define _STRING_H_ 

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 1 3 4
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/_types.h" 3 4
#define __TYPES_H_ 





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
# 7 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2

# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/feature_flags.h" 1

       

#define HasBF16() (ctx->features0 & ARCH_FEATURE_BF16)
#define HasBTI() (ctx->features0 & ARCH_FEATURE_BTI)
#define HasDGH() (ctx->features0 & ARCH_FEATURE_DGH)
#define HasDotProd() (ctx->features0 & ARCH_FEATURE_DotProd)
#define HasFCMA() (ctx->features0 & ARCH_FEATURE_FCMA)
#define HasFHM() (ctx->features0 & ARCH_FEATURE_FHM)
#define HasFP16() (ctx->features0 & ARCH_FEATURE_FP16)
#define HasFRINTTS() (ctx->features0 & ARCH_FEATURE_FRINTTS)
#define HasFlagM() (ctx->features0 & ARCH_FEATURE_FlagM)
#define HasFlagM2() (ctx->features0 & ARCH_FEATURE_FlagM2)
#define HasI8MM() (ctx->features0 & ARCH_FEATURE_I8MM)
#define HasJSCVT() (ctx->features0 & ARCH_FEATURE_JSCVT)
#define HasLOR() (ctx->features0 & ARCH_FEATURE_LOR)
#define HasLRCPC() (ctx->features0 & ARCH_FEATURE_LRCPC)
#define HasLRCPC2() (ctx->features0 & ARCH_FEATURE_LRCPC2)
#define HasLS64() (ctx->features0 & ARCH_FEATURE_LS64)
#define HasLS64_V() (ctx->features0 & ARCH_FEATURE_LS64_V)
#define HasLSE() (ctx->features0 & ARCH_FEATURE_LSE)
#define HasMTE() (ctx->features0 & ARCH_FEATURE_MTE)
#define HasMTE2() (ctx->features0 & ARCH_FEATURE_MTE2)
#define HasPAuth() (ctx->features0 & ARCH_FEATURE_PAuth)
#define HasRAS() (ctx->features0 & ARCH_FEATURE_RAS)
#define HasRDM() (ctx->features0 & ARCH_FEATURE_RDM)
#define HasSHA3() (ctx->features0 & ARCH_FEATURE_SHA3)
#define HasSHA512() (ctx->features0 & ARCH_FEATURE_SHA512)
#define HasSM3() (ctx->features0 & ARCH_FEATURE_SM3)
#define HasSM4() (ctx->features0 & ARCH_FEATURE_SM4)
#define HasSPE() (ctx->features0 & ARCH_FEATURE_SPE)
#define HasTME() (ctx->features0 & ARCH_FEATURE_TME)
#define HasTRF() (ctx->features0 & ARCH_FEATURE_TRF)
#define HasWFxT() (ctx->features0 & ARCH_FEATURE_WFxT)
#define HasXS() (ctx->features0 & ARCH_FEATURE_XS)


#define HaveAESExt() (ctx->features1 & ARCH_FEATURE_AESExt)
#define HaveAtomicExt() (ctx->features1 & ARCH_FEATURE_AtomicExt)
#define HaveBF16Ext() (ctx->features1 & ARCH_FEATURE_BF16Ext)
#define HaveBTIExt() (ctx->features1 & ARCH_FEATURE_BTIExt)
#define HaveBit128PMULLExt() (ctx->features1 & ARCH_FEATURE_Bit128PMULLExt)
#define HaveCRCExt() (ctx->features1 & ARCH_FEATURE_CRCExt)
#define HaveDGHExt() (ctx->features1 & ARCH_FEATURE_DGHExt)
#define HaveDITExt() (ctx->features1 & ARCH_FEATURE_DITExt)
#define HaveDOTPExt() (ctx->features1 & ARCH_FEATURE_DOTPExt)
#define HaveFCADDExt() (ctx->features1 & ARCH_FEATURE_FCADDExt)
#define HaveFJCVTZSExt() (ctx->features1 & ARCH_FEATURE_FJCVTZSExt)
#define HaveFP16Ext() (ctx->features1 & ARCH_FEATURE_FP16Ext)
#define HaveFP16MulNoRoundingToFP32Ext() (ctx->features1 & ARCH_FEATURE_FP16MulNoRoundingToFP32Ext)
#define HaveFeatLS64() (ctx->features1 & ARCH_FEATURE_FeatLS64)
#define HaveFeatWFxT() (ctx->features1 & ARCH_FEATURE_FeatWFxT)
#define HaveFeatXS() (ctx->features1 & ARCH_FEATURE_FeatXS)
#define HaveFlagFormatExt() (ctx->features1 & ARCH_FEATURE_FlagFormatExt)
#define HaveFlagManipulateExt() (ctx->features1 & ARCH_FEATURE_FlagManipulateExt)
#define HaveFrintExt() (ctx->features1 & ARCH_FEATURE_FrintExt)
#define HaveInt8MatMulExt() (ctx->features1 & ARCH_FEATURE_Int8MatMulExt)
#define HaveMTE2Ext() (ctx->features1 & ARCH_FEATURE_MTE2Ext)
#define HaveMTEExt() (ctx->features1 & ARCH_FEATURE_MTEExt)
#define HaveNVExt() (ctx->features1 & ARCH_FEATURE_NVExt)
#define HavePACExt() (ctx->features1 & ARCH_FEATURE_PACExt)
#define HavePANExt() (ctx->features1 & ARCH_FEATURE_PANExt)
#define HaveQRDMLAHExt() (ctx->features1 & ARCH_FEATURE_QRDMLAHExt)
#define HaveRASExt() (ctx->features1 & ARCH_FEATURE_RASExt)
#define HaveSBExt() (ctx->features1 & ARCH_FEATURE_SBExt)
#define HaveSHA1Ext() (ctx->features1 & ARCH_FEATURE_SHA1Ext)
#define HaveSHA256Ext() (ctx->features1 & ARCH_FEATURE_SHA256Ext)
#define HaveSHA3Ext() (ctx->features1 & ARCH_FEATURE_SHA3Ext)
#define HaveSHA512Ext() (ctx->features1 & ARCH_FEATURE_SHA512Ext)
#define HaveSM3Ext() (ctx->features1 & ARCH_FEATURE_SM3Ext)
#define HaveSM4Ext() (ctx->features1 & ARCH_FEATURE_SM4Ext)
#define HaveSSBSExt() (ctx->features1 & ARCH_FEATURE_SSBSExt)
#define HaveSVE() (ctx->features1 & ARCH_FEATURE_SVE)
#define HaveSVE2() (ctx->features1 & ARCH_FEATURE_SVE2)
#define HaveSVE2AES() (ctx->features1 & ARCH_FEATURE_SVE2AES)
#define HaveSVE2BitPerm() (ctx->features1 & ARCH_FEATURE_SVE2BitPerm)
#define HaveSVE2PMULL128() (ctx->features1 & ARCH_FEATURE_SVE2PMULL128)
#define HaveSVE2SHA3() (ctx->features1 & ARCH_FEATURE_SVE2SHA3)
#define HaveSVE2SM4() (ctx->features1 & ARCH_FEATURE_SVE2SM4)
#define HaveSVEFP32MatMulExt() (ctx->features1 & ARCH_FEATURE_SVEFP32MatMulExt)
#define HaveSVEFP64MatMulExt() (ctx->features1 & ARCH_FEATURE_SVEFP64MatMulExt)
#define HaveSelfHostedTrace() (ctx->features1 & ARCH_FEATURE_SelfHostedTrace)
#define HaveStatisticalProfiling() (ctx->features1 & ARCH_FEATURE_StatisticalProfiling)
#define HaveTME() (ctx->features1 & ARCH_FEATURE_TME)
#define HaveUAOExt() (ctx->features1 & ARCH_FEATURE_UAOExt)
#define HaveVirtHostExt() (ctx->features1 & ARCH_FEATURE_VirtHostExt)


#define ARCH_FEATURE_BF16 ((uint64_t)1<<0)
#define ARCH_FEATURE_BTI ((uint64_t)1<<1)
#define ARCH_FEATURE_DGH ((uint64_t)1<<2)
#define ARCH_FEATURE_DotProd ((uint64_t)1<<3)
#define ARCH_FEATURE_FCMA ((uint64_t)1<<4)
#define ARCH_FEATURE_FHM ((uint64_t)1<<5)
#define ARCH_FEATURE_FP16 ((uint64_t)1<<6)
#define ARCH_FEATURE_FRINTTS ((uint64_t)1<<7)
#define ARCH_FEATURE_FlagM ((uint64_t)1<<8)
#define ARCH_FEATURE_FlagM2 ((uint64_t)1<<9)
#define ARCH_FEATURE_I8MM ((uint64_t)1<<10)
#define ARCH_FEATURE_JSCVT ((uint64_t)1<<11)
#define ARCH_FEATURE_LOR ((uint64_t)1<<12)
#define ARCH_FEATURE_LRCPC ((uint64_t)1<<13)
#define ARCH_FEATURE_LRCPC2 ((uint64_t)1<<14)
#define ARCH_FEATURE_LS64 ((uint64_t)1<<15)
#define ARCH_FEATURE_LS64_V ((uint64_t)1<<16)
#define ARCH_FEATURE_LSE ((uint64_t)1<<17)
#define ARCH_FEATURE_MTE ((uint64_t)1<<18)
#define ARCH_FEATURE_MTE2 ((uint64_t)1<<19)
#define ARCH_FEATURE_PAuth ((uint64_t)1<<20)
#define ARCH_FEATURE_RAS ((uint64_t)1<<21)
#define ARCH_FEATURE_RDM ((uint64_t)1<<22)
#define ARCH_FEATURE_SHA3 ((uint64_t)1<<23)
#define ARCH_FEATURE_SHA512 ((uint64_t)1<<24)
#define ARCH_FEATURE_SM3 ((uint64_t)1<<25)
#define ARCH_FEATURE_SM4 ((uint64_t)1<<26)
#define ARCH_FEATURE_SPE ((uint64_t)1<<27)
#define ARCH_FEATURE_TME ((uint64_t)1<<28)
#define ARCH_FEATURE_TRF ((uint64_t)1<<29)
#define ARCH_FEATURE_WFxT ((uint64_t)1<<30)
#define ARCH_FEATURE_XS ((uint64_t)1<<31)


#define ARCH_FEATURE_AESExt ((uint64_t)1<<0)
#define ARCH_FEATURE_AtomicExt ((uint64_t)1<<1)
#define ARCH_FEATURE_BF16Ext ((uint64_t)1<<2)
#define ARCH_FEATURE_BTIExt ((uint64_t)1<<3)
#define ARCH_FEATURE_Bit128PMULLExt ((uint64_t)1<<4)
#define ARCH_FEATURE_CRCExt ((uint64_t)1<<5)
#define ARCH_FEATURE_DGHExt ((uint64_t)1<<6)
#define ARCH_FEATURE_DITExt ((uint64_t)1<<7)
#define ARCH_FEATURE_DOTPExt ((uint64_t)1<<8)
#define ARCH_FEATURE_FCADDExt ((uint64_t)1<<9)
#define ARCH_FEATURE_FJCVTZSExt ((uint64_t)1<<10)
#define ARCH_FEATURE_FP16Ext ((uint64_t)1<<11)
#define ARCH_FEATURE_FP16MulNoRoundingToFP32Ext ((uint64_t)1<<12)
#define ARCH_FEATURE_FeatLS64 ((uint64_t)1<<13)
#define ARCH_FEATURE_FeatWFxT ((uint64_t)1<<14)
#define ARCH_FEATURE_FeatXS ((uint64_t)1<<15)
#define ARCH_FEATURE_FlagFormatExt ((uint64_t)1<<16)
#define ARCH_FEATURE_FlagManipulateExt ((uint64_t)1<<17)
#define ARCH_FEATURE_FrintExt ((uint64_t)1<<18)
#define ARCH_FEATURE_Int8MatMulExt ((uint64_t)1<<19)
#define ARCH_FEATURE_MTE2Ext ((uint64_t)1<<20)
#define ARCH_FEATURE_MTEExt ((uint64_t)1<<21)
#define ARCH_FEATURE_NVExt ((uint64_t)1<<22)
#define ARCH_FEATURE_PACExt ((uint64_t)1<<23)
#define ARCH_FEATURE_PANExt ((uint64_t)1<<24)
#define ARCH_FEATURE_QRDMLAHExt ((uint64_t)1<<25)
#define ARCH_FEATURE_RASExt ((uint64_t)1<<26)
#define ARCH_FEATURE_SBExt ((uint64_t)1<<27)
#define ARCH_FEATURE_SHA1Ext ((uint64_t)1<<28)
#define ARCH_FEATURE_SHA256Ext ((uint64_t)1<<29)
#define ARCH_FEATURE_SHA3Ext ((uint64_t)1<<30)
#define ARCH_FEATURE_SHA512Ext ((uint64_t)1<<31)
#define ARCH_FEATURE_SM3Ext ((uint64_t)1<<32)
#define ARCH_FEATURE_SM4Ext ((uint64_t)1<<33)
#define ARCH_FEATURE_SSBSExt ((uint64_t)1<<34)
#define ARCH_FEATURE_SVE ((uint64_t)1<<35)
#define ARCH_FEATURE_SVE2 ((uint64_t)1<<36)
#define ARCH_FEATURE_SVE2AES ((uint64_t)1<<37)
#define ARCH_FEATURE_SVE2BitPerm ((uint64_t)1<<38)
#define ARCH_FEATURE_SVE2PMULL128 ((uint64_t)1<<39)
#define ARCH_FEATURE_SVE2SHA3 ((uint64_t)1<<40)
#define ARCH_FEATURE_SVE2SM4 ((uint64_t)1<<41)
#define ARCH_FEATURE_SVEFP32MatMulExt ((uint64_t)1<<42)
#define ARCH_FEATURE_SVEFP64MatMulExt ((uint64_t)1<<43)
#define ARCH_FEATURE_SelfHostedTrace ((uint64_t)1<<44)
#define ARCH_FEATURE_StatisticalProfiling ((uint64_t)1<<45)

#define ARCH_FEATURE_UAOExt ((uint64_t)1<<47)
#define ARCH_FEATURE_VirtHostExt ((uint64_t)1<<48)

#define ARCH_FEATURES_ALL 0xFFFFFFFFFFFFFFFF
# 9 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/operations.h" 1

       


# 4 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/operations.h"
enum Operation {
ARM64_ERROR=0,
ARM64_ABS=1,
ARM64_ADC=2,
ARM64_ADCLB=3,
ARM64_ADCLT=4,
ARM64_ADCS=5,
ARM64_ADD=6,
ARM64_ADDG=7,
ARM64_ADDHN=8,
ARM64_ADDHN2=9,
ARM64_ADDHNB=10,
ARM64_ADDHNT=11,
ARM64_ADDP=12,
ARM64_ADDPL=13,
ARM64_ADDS=14,
ARM64_ADDV=15,
ARM64_ADDVL=16,
ARM64_ADR=17,
ARM64_ADRP=18,
ARM64_AESD=19,
ARM64_AESE=20,
ARM64_AESIMC=21,
ARM64_AESMC=22,
ARM64_AND=23,
ARM64_ANDS=24,
ARM64_ANDV=25,
ARM64_ASR=26,
ARM64_ASRD=27,
ARM64_ASRR=28,
ARM64_ASRV=29,
ARM64_AT=30,
ARM64_AUTDA=31,
ARM64_AUTDB=32,
ARM64_AUTDZA=33,
ARM64_AUTDZB=34,
ARM64_AUTIA=35,
ARM64_AUTIA1716=36,
ARM64_AUTIASP=37,
ARM64_AUTIAZ=38,
ARM64_AUTIB=39,
ARM64_AUTIB1716=40,
ARM64_AUTIBSP=41,
ARM64_AUTIBZ=42,
ARM64_AUTIZA=43,
ARM64_AUTIZB=44,
ARM64_AXFLAG=45,
ARM64_B=46,
ARM64_BCAX=47,
ARM64_BDEP=48,
ARM64_BEXT=49,
ARM64_BFC=50,
ARM64_BFCVT=51,
ARM64_BFCVTN=52,
ARM64_BFCVTN2=53,
ARM64_BFCVTNT=54,
ARM64_BFDOT=55,
ARM64_BFI=56,
ARM64_BFM=57,
ARM64_BFMLAL=58,
ARM64_BFMLALB=59,
ARM64_BFMLALT=60,
ARM64_BFMMLA=61,
ARM64_BFXIL=62,
ARM64_BGRP=63,
ARM64_BIC=64,
ARM64_BICS=65,
ARM64_BIF=66,
ARM64_BIT=67,
ARM64_BL=68,
ARM64_BLR=69,
ARM64_BLRAA=70,
ARM64_BLRAAZ=71,
ARM64_BLRAB=72,
ARM64_BLRABZ=73,
ARM64_BR=74,
ARM64_BRAA=75,
ARM64_BRAAZ=76,
ARM64_BRAB=77,
ARM64_BRABZ=78,
ARM64_BRK=79,
ARM64_BRKA=80,
ARM64_BRKAS=81,
ARM64_BRKB=82,
ARM64_BRKBS=83,
ARM64_BRKN=84,
ARM64_BRKNS=85,
ARM64_BRKPA=86,
ARM64_BRKPAS=87,
ARM64_BRKPB=88,
ARM64_BRKPBS=89,
ARM64_BSL=90,
ARM64_BSL1N=91,
ARM64_BSL2N=92,
ARM64_BTI=93,
ARM64_B_AL=94,
ARM64_B_CC=95,
ARM64_B_CS=96,
ARM64_B_EQ=97,
ARM64_B_GE=98,
ARM64_B_GT=99,
ARM64_B_HI=100,
ARM64_B_LE=101,
ARM64_B_LS=102,
ARM64_B_LT=103,
ARM64_B_MI=104,
ARM64_B_NE=105,
ARM64_B_NV=106,
ARM64_B_PL=107,
ARM64_B_VC=108,
ARM64_B_VS=109,
ARM64_CADD=110,
ARM64_CAS=111,
ARM64_CASA=112,
ARM64_CASAB=113,
ARM64_CASAH=114,
ARM64_CASAL=115,
ARM64_CASALB=116,
ARM64_CASALH=117,
ARM64_CASB=118,
ARM64_CASH=119,
ARM64_CASL=120,
ARM64_CASLB=121,
ARM64_CASLH=122,
ARM64_CASP=123,
ARM64_CASPA=124,
ARM64_CASPAL=125,
ARM64_CASPL=126,
ARM64_CBNZ=127,
ARM64_CBZ=128,
ARM64_CCMN=129,
ARM64_CCMP=130,
ARM64_CDOT=131,
ARM64_CFINV=132,
ARM64_CFP=133,
ARM64_CINC=134,
ARM64_CINV=135,
ARM64_CLASTA=136,
ARM64_CLASTB=137,
ARM64_CLREX=138,
ARM64_CLS=139,
ARM64_CLZ=140,
ARM64_CMEQ=141,
ARM64_CMGE=142,
ARM64_CMGT=143,
ARM64_CMHI=144,
ARM64_CMHS=145,
ARM64_CMLA=146,
ARM64_CMLE=147,
ARM64_CMLT=148,
ARM64_CMN=149,
ARM64_CMP=150,
ARM64_CMPEQ=151,
ARM64_CMPGE=152,
ARM64_CMPGT=153,
ARM64_CMPHI=154,
ARM64_CMPHS=155,
ARM64_CMPLE=156,
ARM64_CMPLO=157,
ARM64_CMPLS=158,
ARM64_CMPLT=159,
ARM64_CMPNE=160,
ARM64_CMPP=161,
ARM64_CMTST=162,
ARM64_CNEG=163,
ARM64_CNOT=164,
ARM64_CNT=165,
ARM64_CNTB=166,
ARM64_CNTD=167,
ARM64_CNTH=168,
ARM64_CNTP=169,
ARM64_CNTW=170,
ARM64_COMPACT=171,
ARM64_CPP=172,
ARM64_CPY=173,
ARM64_CRC32B=174,
ARM64_CRC32CB=175,
ARM64_CRC32CH=176,
ARM64_CRC32CW=177,
ARM64_CRC32CX=178,
ARM64_CRC32H=179,
ARM64_CRC32W=180,
ARM64_CRC32X=181,
ARM64_CSDB=182,
ARM64_CSEL=183,
ARM64_CSET=184,
ARM64_CSETM=185,
ARM64_CSINC=186,
ARM64_CSINV=187,
ARM64_CSNEG=188,
ARM64_CTERMEQ=189,
ARM64_CTERMNE=190,
ARM64_DC=191,
ARM64_DCPS1=192,
ARM64_DCPS2=193,
ARM64_DCPS3=194,
ARM64_DECB=195,
ARM64_DECD=196,
ARM64_DECH=197,
ARM64_DECP=198,
ARM64_DECW=199,
ARM64_DGH=200,
ARM64_DMB=201,
ARM64_DRPS=202,
ARM64_DSB=203,
ARM64_DUP=204,
ARM64_DUPM=205,
ARM64_DVP=206,
ARM64_EON=207,
ARM64_EOR=208,
ARM64_EOR3=209,
ARM64_EORBT=210,
ARM64_EORS=211,
ARM64_EORTB=212,
ARM64_EORV=213,
ARM64_ERET=214,
ARM64_ERETAA=215,
ARM64_ERETAB=216,
ARM64_ESB=217,
ARM64_EXT=218,
ARM64_EXTR=219,
ARM64_FABD=220,
ARM64_FABS=221,
ARM64_FACGE=222,
ARM64_FACGT=223,
ARM64_FACLE=224,
ARM64_FACLT=225,
ARM64_FADD=226,
ARM64_FADDA=227,
ARM64_FADDP=228,
ARM64_FADDV=229,
ARM64_FCADD=230,
ARM64_FCCMP=231,
ARM64_FCCMPE=232,
ARM64_FCMEQ=233,
ARM64_FCMGE=234,
ARM64_FCMGT=235,
ARM64_FCMLA=236,
ARM64_FCMLE=237,
ARM64_FCMLT=238,
ARM64_FCMNE=239,
ARM64_FCMP=240,
ARM64_FCMPE=241,
ARM64_FCMUO=242,
ARM64_FCPY=243,
ARM64_FCSEL=244,
ARM64_FCVT=245,
ARM64_FCVTAS=246,
ARM64_FCVTAU=247,
ARM64_FCVTL=248,
ARM64_FCVTL2=249,
ARM64_FCVTLT=250,
ARM64_FCVTMS=251,
ARM64_FCVTMU=252,
ARM64_FCVTN=253,
ARM64_FCVTN2=254,
ARM64_FCVTNS=255,
ARM64_FCVTNT=256,
ARM64_FCVTNU=257,
ARM64_FCVTPS=258,
ARM64_FCVTPU=259,
ARM64_FCVTX=260,
ARM64_FCVTXN=261,
ARM64_FCVTXN2=262,
ARM64_FCVTXNT=263,
ARM64_FCVTZS=264,
ARM64_FCVTZU=265,
ARM64_FDIV=266,
ARM64_FDIVR=267,
ARM64_FDUP=268,
ARM64_FEXPA=269,
ARM64_FJCVTZS=270,
ARM64_FLOGB=271,
ARM64_FMAD=272,
ARM64_FMADD=273,
ARM64_FMAX=274,
ARM64_FMAXNM=275,
ARM64_FMAXNMP=276,
ARM64_FMAXNMV=277,
ARM64_FMAXP=278,
ARM64_FMAXV=279,
ARM64_FMIN=280,
ARM64_FMINNM=281,
ARM64_FMINNMP=282,
ARM64_FMINNMV=283,
ARM64_FMINP=284,
ARM64_FMINV=285,
ARM64_FMLA=286,
ARM64_FMLAL=287,
ARM64_FMLAL2=288,
ARM64_FMLALB=289,
ARM64_FMLALT=290,
ARM64_FMLS=291,
ARM64_FMLSL=292,
ARM64_FMLSL2=293,
ARM64_FMLSLB=294,
ARM64_FMLSLT=295,
ARM64_FMMLA=296,
ARM64_FMOV=297,
ARM64_FMSB=298,
ARM64_FMSUB=299,
ARM64_FMUL=300,
ARM64_FMULX=301,
ARM64_FNEG=302,
ARM64_FNMAD=303,
ARM64_FNMADD=304,
ARM64_FNMLA=305,
ARM64_FNMLS=306,
ARM64_FNMSB=307,
ARM64_FNMSUB=308,
ARM64_FNMUL=309,
ARM64_FRECPE=310,
ARM64_FRECPS=311,
ARM64_FRECPX=312,
ARM64_FRINT32X=313,
ARM64_FRINT32Z=314,
ARM64_FRINT64X=315,
ARM64_FRINT64Z=316,
ARM64_FRINTA=317,
ARM64_FRINTI=318,
ARM64_FRINTM=319,
ARM64_FRINTN=320,
ARM64_FRINTP=321,
ARM64_FRINTX=322,
ARM64_FRINTZ=323,
ARM64_FRSQRTE=324,
ARM64_FRSQRTS=325,
ARM64_FSCALE=326,
ARM64_FSQRT=327,
ARM64_FSUB=328,
ARM64_FSUBR=329,
ARM64_FTMAD=330,
ARM64_FTSMUL=331,
ARM64_FTSSEL=332,
ARM64_GMI=333,
ARM64_HINT=334,
ARM64_HISTCNT=335,
ARM64_HISTSEG=336,
ARM64_HLT=337,
ARM64_HVC=338,
ARM64_IC=339,
ARM64_INCB=340,
ARM64_INCD=341,
ARM64_INCH=342,
ARM64_INCP=343,
ARM64_INCW=344,
ARM64_INDEX=345,
ARM64_INS=346,
ARM64_INSR=347,
ARM64_IRG=348,
ARM64_ISB=349,
ARM64_LASTA=350,
ARM64_LASTB=351,
ARM64_LD1=352,
ARM64_LD1B=353,
ARM64_LD1D=354,
ARM64_LD1H=355,
ARM64_LD1R=356,
ARM64_LD1RB=357,
ARM64_LD1RD=358,
ARM64_LD1RH=359,
ARM64_LD1ROB=360,
ARM64_LD1ROD=361,
ARM64_LD1ROH=362,
ARM64_LD1ROW=363,
ARM64_LD1RQB=364,
ARM64_LD1RQD=365,
ARM64_LD1RQH=366,
ARM64_LD1RQW=367,
ARM64_LD1RSB=368,
ARM64_LD1RSH=369,
ARM64_LD1RSW=370,
ARM64_LD1RW=371,
ARM64_LD1SB=372,
ARM64_LD1SH=373,
ARM64_LD1SW=374,
ARM64_LD1W=375,
ARM64_LD2=376,
ARM64_LD2B=377,
ARM64_LD2D=378,
ARM64_LD2H=379,
ARM64_LD2R=380,
ARM64_LD2W=381,
ARM64_LD3=382,
ARM64_LD3B=383,
ARM64_LD3D=384,
ARM64_LD3H=385,
ARM64_LD3R=386,
ARM64_LD3W=387,
ARM64_LD4=388,
ARM64_LD4B=389,
ARM64_LD4D=390,
ARM64_LD4H=391,
ARM64_LD4R=392,
ARM64_LD4W=393,
ARM64_LD64B=394,
ARM64_LDADD=395,
ARM64_LDADDA=396,
ARM64_LDADDAB=397,
ARM64_LDADDAH=398,
ARM64_LDADDAL=399,
ARM64_LDADDALB=400,
ARM64_LDADDALH=401,
ARM64_LDADDB=402,
ARM64_LDADDH=403,
ARM64_LDADDL=404,
ARM64_LDADDLB=405,
ARM64_LDADDLH=406,
ARM64_LDAPR=407,
ARM64_LDAPRB=408,
ARM64_LDAPRH=409,
ARM64_LDAPUR=410,
ARM64_LDAPURB=411,
ARM64_LDAPURH=412,
ARM64_LDAPURSB=413,
ARM64_LDAPURSH=414,
ARM64_LDAPURSW=415,
ARM64_LDAR=416,
ARM64_LDARB=417,
ARM64_LDARH=418,
ARM64_LDAXP=419,
ARM64_LDAXR=420,
ARM64_LDAXRB=421,
ARM64_LDAXRH=422,
ARM64_LDCLR=423,
ARM64_LDCLRA=424,
ARM64_LDCLRAB=425,
ARM64_LDCLRAH=426,
ARM64_LDCLRAL=427,
ARM64_LDCLRALB=428,
ARM64_LDCLRALH=429,
ARM64_LDCLRB=430,
ARM64_LDCLRH=431,
ARM64_LDCLRL=432,
ARM64_LDCLRLB=433,
ARM64_LDCLRLH=434,
ARM64_LDEOR=435,
ARM64_LDEORA=436,
ARM64_LDEORAB=437,
ARM64_LDEORAH=438,
ARM64_LDEORAL=439,
ARM64_LDEORALB=440,
ARM64_LDEORALH=441,
ARM64_LDEORB=442,
ARM64_LDEORH=443,
ARM64_LDEORL=444,
ARM64_LDEORLB=445,
ARM64_LDEORLH=446,
ARM64_LDFF1B=447,
ARM64_LDFF1D=448,
ARM64_LDFF1H=449,
ARM64_LDFF1SB=450,
ARM64_LDFF1SH=451,
ARM64_LDFF1SW=452,
ARM64_LDFF1W=453,
ARM64_LDG=454,
ARM64_LDGM=455,
ARM64_LDLAR=456,
ARM64_LDLARB=457,
ARM64_LDLARH=458,
ARM64_LDNF1B=459,
ARM64_LDNF1D=460,
ARM64_LDNF1H=461,
ARM64_LDNF1SB=462,
ARM64_LDNF1SH=463,
ARM64_LDNF1SW=464,
ARM64_LDNF1W=465,
ARM64_LDNP=466,
ARM64_LDNT1B=467,
ARM64_LDNT1D=468,
ARM64_LDNT1H=469,
ARM64_LDNT1SB=470,
ARM64_LDNT1SH=471,
ARM64_LDNT1SW=472,
ARM64_LDNT1W=473,
ARM64_LDP=474,
ARM64_LDPSW=475,
ARM64_LDR=476,
ARM64_LDRAA=477,
ARM64_LDRAB=478,
ARM64_LDRB=479,
ARM64_LDRH=480,
ARM64_LDRSB=481,
ARM64_LDRSH=482,
ARM64_LDRSW=483,
ARM64_LDSET=484,
ARM64_LDSETA=485,
ARM64_LDSETAB=486,
ARM64_LDSETAH=487,
ARM64_LDSETAL=488,
ARM64_LDSETALB=489,
ARM64_LDSETALH=490,
ARM64_LDSETB=491,
ARM64_LDSETH=492,
ARM64_LDSETL=493,
ARM64_LDSETLB=494,
ARM64_LDSETLH=495,
ARM64_LDSMAX=496,
ARM64_LDSMAXA=497,
ARM64_LDSMAXAB=498,
ARM64_LDSMAXAH=499,
ARM64_LDSMAXAL=500,
ARM64_LDSMAXALB=501,
ARM64_LDSMAXALH=502,
ARM64_LDSMAXB=503,
ARM64_LDSMAXH=504,
ARM64_LDSMAXL=505,
ARM64_LDSMAXLB=506,
ARM64_LDSMAXLH=507,
ARM64_LDSMIN=508,
ARM64_LDSMINA=509,
ARM64_LDSMINAB=510,
ARM64_LDSMINAH=511,
ARM64_LDSMINAL=512,
ARM64_LDSMINALB=513,
ARM64_LDSMINALH=514,
ARM64_LDSMINB=515,
ARM64_LDSMINH=516,
ARM64_LDSMINL=517,
ARM64_LDSMINLB=518,
ARM64_LDSMINLH=519,
ARM64_LDTR=520,
ARM64_LDTRB=521,
ARM64_LDTRH=522,
ARM64_LDTRSB=523,
ARM64_LDTRSH=524,
ARM64_LDTRSW=525,
ARM64_LDUMAX=526,
ARM64_LDUMAXA=527,
ARM64_LDUMAXAB=528,
ARM64_LDUMAXAH=529,
ARM64_LDUMAXAL=530,
ARM64_LDUMAXALB=531,
ARM64_LDUMAXALH=532,
ARM64_LDUMAXB=533,
ARM64_LDUMAXH=534,
ARM64_LDUMAXL=535,
ARM64_LDUMAXLB=536,
ARM64_LDUMAXLH=537,
ARM64_LDUMIN=538,
ARM64_LDUMINA=539,
ARM64_LDUMINAB=540,
ARM64_LDUMINAH=541,
ARM64_LDUMINAL=542,
ARM64_LDUMINALB=543,
ARM64_LDUMINALH=544,
ARM64_LDUMINB=545,
ARM64_LDUMINH=546,
ARM64_LDUMINL=547,
ARM64_LDUMINLB=548,
ARM64_LDUMINLH=549,
ARM64_LDUR=550,
ARM64_LDURB=551,
ARM64_LDURH=552,
ARM64_LDURSB=553,
ARM64_LDURSH=554,
ARM64_LDURSW=555,
ARM64_LDXP=556,
ARM64_LDXR=557,
ARM64_LDXRB=558,
ARM64_LDXRH=559,
ARM64_LSL=560,
ARM64_LSLR=561,
ARM64_LSLV=562,
ARM64_LSR=563,
ARM64_LSRR=564,
ARM64_LSRV=565,
ARM64_MAD=566,
ARM64_MADD=567,
ARM64_MATCH=568,
ARM64_MLA=569,
ARM64_MLS=570,
ARM64_MNEG=571,
ARM64_MOV=572,
ARM64_MOVI=573,
ARM64_MOVK=574,
ARM64_MOVN=575,
ARM64_MOVPRFX=576,
ARM64_MOVS=577,
ARM64_MOVZ=578,
ARM64_MRS=579,
ARM64_MSB=580,
ARM64_MSR=581,
ARM64_MSUB=582,
ARM64_MUL=583,
ARM64_MVN=584,
ARM64_MVNI=585,
ARM64_NAND=586,
ARM64_NANDS=587,
ARM64_NBSL=588,
ARM64_NEG=589,
ARM64_NEGS=590,
ARM64_NGC=591,
ARM64_NGCS=592,
ARM64_NMATCH=593,
ARM64_NOP=594,
ARM64_NOR=595,
ARM64_NORS=596,
ARM64_NOT=597,
ARM64_NOTS=598,
ARM64_ORN=599,
ARM64_ORNS=600,
ARM64_ORR=601,
ARM64_ORRS=602,
ARM64_ORV=603,
ARM64_PACDA=604,
ARM64_PACDB=605,
ARM64_PACDZA=606,
ARM64_PACDZB=607,
ARM64_PACGA=608,
ARM64_PACIA=609,
ARM64_PACIA1716=610,
ARM64_PACIASP=611,
ARM64_PACIAZ=612,
ARM64_PACIB=613,
ARM64_PACIB1716=614,
ARM64_PACIBSP=615,
ARM64_PACIBZ=616,
ARM64_PACIZA=617,
ARM64_PACIZB=618,
ARM64_PFALSE=619,
ARM64_PFIRST=620,
ARM64_PMUL=621,
ARM64_PMULL=622,
ARM64_PMULL2=623,
ARM64_PMULLB=624,
ARM64_PMULLT=625,
ARM64_PNEXT=626,
ARM64_PRFB=627,
ARM64_PRFD=628,
ARM64_PRFH=629,
ARM64_PRFM=630,
ARM64_PRFUM=631,
ARM64_PRFW=632,
ARM64_PSB=633,
ARM64_PSSBB=634,
ARM64_PTEST=635,
ARM64_PTRUE=636,
ARM64_PTRUES=637,
ARM64_PUNPKHI=638,
ARM64_PUNPKLO=639,
ARM64_RADDHN=640,
ARM64_RADDHN2=641,
ARM64_RADDHNB=642,
ARM64_RADDHNT=643,
ARM64_RAX1=644,
ARM64_RBIT=645,
ARM64_RDFFR=646,
ARM64_RDFFRS=647,
ARM64_RDVL=648,
ARM64_RET=649,
ARM64_RETAA=650,
ARM64_RETAB=651,
ARM64_REV=652,
ARM64_REV16=653,
ARM64_REV32=654,
ARM64_REV64=655,
ARM64_REVB=656,
ARM64_REVH=657,
ARM64_REVW=658,
ARM64_RMIF=659,
ARM64_ROR=660,
ARM64_RORV=661,
ARM64_RSHRN=662,
ARM64_RSHRN2=663,
ARM64_RSHRNB=664,
ARM64_RSHRNT=665,
ARM64_RSUBHN=666,
ARM64_RSUBHN2=667,
ARM64_RSUBHNB=668,
ARM64_RSUBHNT=669,
ARM64_SABA=670,
ARM64_SABAL=671,
ARM64_SABAL2=672,
ARM64_SABALB=673,
ARM64_SABALT=674,
ARM64_SABD=675,
ARM64_SABDL=676,
ARM64_SABDL2=677,
ARM64_SABDLB=678,
ARM64_SABDLT=679,
ARM64_SADALP=680,
ARM64_SADDL=681,
ARM64_SADDL2=682,
ARM64_SADDLB=683,
ARM64_SADDLBT=684,
ARM64_SADDLP=685,
ARM64_SADDLT=686,
ARM64_SADDLV=687,
ARM64_SADDV=688,
ARM64_SADDW=689,
ARM64_SADDW2=690,
ARM64_SADDWB=691,
ARM64_SADDWT=692,
ARM64_SB=693,
ARM64_SBC=694,
ARM64_SBCLB=695,
ARM64_SBCLT=696,
ARM64_SBCS=697,
ARM64_SBFIZ=698,
ARM64_SBFM=699,
ARM64_SBFX=700,
ARM64_SCVTF=701,
ARM64_SDIV=702,
ARM64_SDIVR=703,
ARM64_SDOT=704,
ARM64_SEL=705,
ARM64_SETF16=706,
ARM64_SETF8=707,
ARM64_SETFFR=708,
ARM64_SEV=709,
ARM64_SEVL=710,
ARM64_SHA1C=711,
ARM64_SHA1H=712,
ARM64_SHA1M=713,
ARM64_SHA1P=714,
ARM64_SHA1SU0=715,
ARM64_SHA1SU1=716,
ARM64_SHA256H=717,
ARM64_SHA256H2=718,
ARM64_SHA256SU0=719,
ARM64_SHA256SU1=720,
ARM64_SHA512H=721,
ARM64_SHA512H2=722,
ARM64_SHA512SU0=723,
ARM64_SHA512SU1=724,
ARM64_SHADD=725,
ARM64_SHL=726,
ARM64_SHLL=727,
ARM64_SHLL2=728,
ARM64_SHRN=729,
ARM64_SHRN2=730,
ARM64_SHRNB=731,
ARM64_SHRNT=732,
ARM64_SHSUB=733,
ARM64_SHSUBR=734,
ARM64_SLI=735,
ARM64_SM3PARTW1=736,
ARM64_SM3PARTW2=737,
ARM64_SM3SS1=738,
ARM64_SM3TT1A=739,
ARM64_SM3TT1B=740,
ARM64_SM3TT2A=741,
ARM64_SM3TT2B=742,
ARM64_SM4E=743,
ARM64_SM4EKEY=744,
ARM64_SMADDL=745,
ARM64_SMAX=746,
ARM64_SMAXP=747,
ARM64_SMAXV=748,
ARM64_SMC=749,
ARM64_SMIN=750,
ARM64_SMINP=751,
ARM64_SMINV=752,
ARM64_SMLAL=753,
ARM64_SMLAL2=754,
ARM64_SMLALB=755,
ARM64_SMLALT=756,
ARM64_SMLSL=757,
ARM64_SMLSL2=758,
ARM64_SMLSLB=759,
ARM64_SMLSLT=760,
ARM64_SMMLA=761,
ARM64_SMNEGL=762,
ARM64_SMOV=763,
ARM64_SMSUBL=764,
ARM64_SMULH=765,
ARM64_SMULL=766,
ARM64_SMULL2=767,
ARM64_SMULLB=768,
ARM64_SMULLT=769,
ARM64_SPLICE=770,
ARM64_SQABS=771,
ARM64_SQADD=772,
ARM64_SQCADD=773,
ARM64_SQDECB=774,
ARM64_SQDECD=775,
ARM64_SQDECH=776,
ARM64_SQDECP=777,
ARM64_SQDECW=778,
ARM64_SQDMLAL=779,
ARM64_SQDMLAL2=780,
ARM64_SQDMLALB=781,
ARM64_SQDMLALBT=782,
ARM64_SQDMLALT=783,
ARM64_SQDMLSL=784,
ARM64_SQDMLSL2=785,
ARM64_SQDMLSLB=786,
ARM64_SQDMLSLBT=787,
ARM64_SQDMLSLT=788,
ARM64_SQDMULH=789,
ARM64_SQDMULL=790,
ARM64_SQDMULL2=791,
ARM64_SQDMULLB=792,
ARM64_SQDMULLT=793,
ARM64_SQINCB=794,
ARM64_SQINCD=795,
ARM64_SQINCH=796,
ARM64_SQINCP=797,
ARM64_SQINCW=798,
ARM64_SQNEG=799,
ARM64_SQRDCMLAH=800,
ARM64_SQRDMLAH=801,
ARM64_SQRDMLSH=802,
ARM64_SQRDMULH=803,
ARM64_SQRSHL=804,
ARM64_SQRSHLR=805,
ARM64_SQRSHRN=806,
ARM64_SQRSHRN2=807,
ARM64_SQRSHRNB=808,
ARM64_SQRSHRNT=809,
ARM64_SQRSHRUN=810,
ARM64_SQRSHRUN2=811,
ARM64_SQRSHRUNB=812,
ARM64_SQRSHRUNT=813,
ARM64_SQSHL=814,
ARM64_SQSHLR=815,
ARM64_SQSHLU=816,
ARM64_SQSHRN=817,
ARM64_SQSHRN2=818,
ARM64_SQSHRNB=819,
ARM64_SQSHRNT=820,
ARM64_SQSHRUN=821,
ARM64_SQSHRUN2=822,
ARM64_SQSHRUNB=823,
ARM64_SQSHRUNT=824,
ARM64_SQSUB=825,
ARM64_SQSUBR=826,
ARM64_SQXTN=827,
ARM64_SQXTN2=828,
ARM64_SQXTNB=829,
ARM64_SQXTNT=830,
ARM64_SQXTUN=831,
ARM64_SQXTUN2=832,
ARM64_SQXTUNB=833,
ARM64_SQXTUNT=834,
ARM64_SRHADD=835,
ARM64_SRI=836,
ARM64_SRSHL=837,
ARM64_SRSHLR=838,
ARM64_SRSHR=839,
ARM64_SRSRA=840,
ARM64_SSBB=841,
ARM64_SSHL=842,
ARM64_SSHLL=843,
ARM64_SSHLL2=844,
ARM64_SSHLLB=845,
ARM64_SSHLLT=846,
ARM64_SSHR=847,
ARM64_SSRA=848,
ARM64_SSUBL=849,
ARM64_SSUBL2=850,
ARM64_SSUBLB=851,
ARM64_SSUBLBT=852,
ARM64_SSUBLT=853,
ARM64_SSUBLTB=854,
ARM64_SSUBW=855,
ARM64_SSUBW2=856,
ARM64_SSUBWB=857,
ARM64_SSUBWT=858,
ARM64_ST1=859,
ARM64_ST1B=860,
ARM64_ST1D=861,
ARM64_ST1H=862,
ARM64_ST1W=863,
ARM64_ST2=864,
ARM64_ST2B=865,
ARM64_ST2D=866,
ARM64_ST2G=867,
ARM64_ST2H=868,
ARM64_ST2W=869,
ARM64_ST3=870,
ARM64_ST3B=871,
ARM64_ST3D=872,
ARM64_ST3H=873,
ARM64_ST3W=874,
ARM64_ST4=875,
ARM64_ST4B=876,
ARM64_ST4D=877,
ARM64_ST4H=878,
ARM64_ST4W=879,
ARM64_ST64B=880,
ARM64_ST64BV=881,
ARM64_ST64BV0=882,
ARM64_STADD=883,
ARM64_STADDB=884,
ARM64_STADDH=885,
ARM64_STADDL=886,
ARM64_STADDLB=887,
ARM64_STADDLH=888,
ARM64_STCLR=889,
ARM64_STCLRB=890,
ARM64_STCLRH=891,
ARM64_STCLRL=892,
ARM64_STCLRLB=893,
ARM64_STCLRLH=894,
ARM64_STEOR=895,
ARM64_STEORB=896,
ARM64_STEORH=897,
ARM64_STEORL=898,
ARM64_STEORLB=899,
ARM64_STEORLH=900,
ARM64_STG=901,
ARM64_STGM=902,
ARM64_STGP=903,
ARM64_STLLR=904,
ARM64_STLLRB=905,
ARM64_STLLRH=906,
ARM64_STLR=907,
ARM64_STLRB=908,
ARM64_STLRH=909,
ARM64_STLUR=910,
ARM64_STLURB=911,
ARM64_STLURH=912,
ARM64_STLXP=913,
ARM64_STLXR=914,
ARM64_STLXRB=915,
ARM64_STLXRH=916,
ARM64_STNP=917,
ARM64_STNT1B=918,
ARM64_STNT1D=919,
ARM64_STNT1H=920,
ARM64_STNT1W=921,
ARM64_STP=922,
ARM64_STR=923,
ARM64_STRB=924,
ARM64_STRH=925,
ARM64_STSET=926,
ARM64_STSETB=927,
ARM64_STSETH=928,
ARM64_STSETL=929,
ARM64_STSETLB=930,
ARM64_STSETLH=931,
ARM64_STSMAX=932,
ARM64_STSMAXB=933,
ARM64_STSMAXH=934,
ARM64_STSMAXL=935,
ARM64_STSMAXLB=936,
ARM64_STSMAXLH=937,
ARM64_STSMIN=938,
ARM64_STSMINB=939,
ARM64_STSMINH=940,
ARM64_STSMINL=941,
ARM64_STSMINLB=942,
ARM64_STSMINLH=943,
ARM64_STTR=944,
ARM64_STTRB=945,
ARM64_STTRH=946,
ARM64_STUMAX=947,
ARM64_STUMAXB=948,
ARM64_STUMAXH=949,
ARM64_STUMAXL=950,
ARM64_STUMAXLB=951,
ARM64_STUMAXLH=952,
ARM64_STUMIN=953,
ARM64_STUMINB=954,
ARM64_STUMINH=955,
ARM64_STUMINL=956,
ARM64_STUMINLB=957,
ARM64_STUMINLH=958,
ARM64_STUR=959,
ARM64_STURB=960,
ARM64_STURH=961,
ARM64_STXP=962,
ARM64_STXR=963,
ARM64_STXRB=964,
ARM64_STXRH=965,
ARM64_STZ2G=966,
ARM64_STZG=967,
ARM64_STZGM=968,
ARM64_SUB=969,
ARM64_SUBG=970,
ARM64_SUBHN=971,
ARM64_SUBHN2=972,
ARM64_SUBHNB=973,
ARM64_SUBHNT=974,
ARM64_SUBP=975,
ARM64_SUBPS=976,
ARM64_SUBR=977,
ARM64_SUBS=978,
ARM64_SUDOT=979,
ARM64_SUNPKHI=980,
ARM64_SUNPKLO=981,
ARM64_SUQADD=982,
ARM64_SVC=983,
ARM64_SWP=984,
ARM64_SWPA=985,
ARM64_SWPAB=986,
ARM64_SWPAH=987,
ARM64_SWPAL=988,
ARM64_SWPALB=989,
ARM64_SWPALH=990,
ARM64_SWPB=991,
ARM64_SWPH=992,
ARM64_SWPL=993,
ARM64_SWPLB=994,
ARM64_SWPLH=995,
ARM64_SXTB=996,
ARM64_SXTH=997,
ARM64_SXTL=998,
ARM64_SXTL2=999,
ARM64_SXTW=1000,
ARM64_SYS=1001,
ARM64_SYSL=1002,
ARM64_TBL=1003,
ARM64_TBNZ=1004,
ARM64_TBX=1005,
ARM64_TBZ=1006,
ARM64_TCANCEL=1007,
ARM64_TCOMMIT=1008,
ARM64_TLBI=1009,
ARM64_TRN1=1010,
ARM64_TRN2=1011,
ARM64_TSB=1012,
ARM64_TST=1013,
ARM64_TSTART=1014,
ARM64_TTEST=1015,
ARM64_UABA=1016,
ARM64_UABAL=1017,
ARM64_UABAL2=1018,
ARM64_UABALB=1019,
ARM64_UABALT=1020,
ARM64_UABD=1021,
ARM64_UABDL=1022,
ARM64_UABDL2=1023,
ARM64_UABDLB=1024,
ARM64_UABDLT=1025,
ARM64_UADALP=1026,
ARM64_UADDL=1027,
ARM64_UADDL2=1028,
ARM64_UADDLB=1029,
ARM64_UADDLP=1030,
ARM64_UADDLT=1031,
ARM64_UADDLV=1032,
ARM64_UADDV=1033,
ARM64_UADDW=1034,
ARM64_UADDW2=1035,
ARM64_UADDWB=1036,
ARM64_UADDWT=1037,
ARM64_UBFIZ=1038,
ARM64_UBFM=1039,
ARM64_UBFX=1040,
ARM64_UCVTF=1041,
ARM64_UDF=1042,
ARM64_UDIV=1043,
ARM64_UDIVR=1044,
ARM64_UDOT=1045,
ARM64_UHADD=1046,
ARM64_UHSUB=1047,
ARM64_UHSUBR=1048,
ARM64_UMADDL=1049,
ARM64_UMAX=1050,
ARM64_UMAXP=1051,
ARM64_UMAXV=1052,
ARM64_UMIN=1053,
ARM64_UMINP=1054,
ARM64_UMINV=1055,
ARM64_UMLAL=1056,
ARM64_UMLAL2=1057,
ARM64_UMLALB=1058,
ARM64_UMLALT=1059,
ARM64_UMLSL=1060,
ARM64_UMLSL2=1061,
ARM64_UMLSLB=1062,
ARM64_UMLSLT=1063,
ARM64_UMMLA=1064,
ARM64_UMNEGL=1065,
ARM64_UMOV=1066,
ARM64_UMSUBL=1067,
ARM64_UMULH=1068,
ARM64_UMULL=1069,
ARM64_UMULL2=1070,
ARM64_UMULLB=1071,
ARM64_UMULLT=1072,
ARM64_UQADD=1073,
ARM64_UQDECB=1074,
ARM64_UQDECD=1075,
ARM64_UQDECH=1076,
ARM64_UQDECP=1077,
ARM64_UQDECW=1078,
ARM64_UQINCB=1079,
ARM64_UQINCD=1080,
ARM64_UQINCH=1081,
ARM64_UQINCP=1082,
ARM64_UQINCW=1083,
ARM64_UQRSHL=1084,
ARM64_UQRSHLR=1085,
ARM64_UQRSHRN=1086,
ARM64_UQRSHRN2=1087,
ARM64_UQRSHRNB=1088,
ARM64_UQRSHRNT=1089,
ARM64_UQSHL=1090,
ARM64_UQSHLR=1091,
ARM64_UQSHRN=1092,
ARM64_UQSHRN2=1093,
ARM64_UQSHRNB=1094,
ARM64_UQSHRNT=1095,
ARM64_UQSUB=1096,
ARM64_UQSUBR=1097,
ARM64_UQXTN=1098,
ARM64_UQXTN2=1099,
ARM64_UQXTNB=1100,
ARM64_UQXTNT=1101,
ARM64_URECPE=1102,
ARM64_URHADD=1103,
ARM64_URSHL=1104,
ARM64_URSHLR=1105,
ARM64_URSHR=1106,
ARM64_URSQRTE=1107,
ARM64_URSRA=1108,
ARM64_USDOT=1109,
ARM64_USHL=1110,
ARM64_USHLL=1111,
ARM64_USHLL2=1112,
ARM64_USHLLB=1113,
ARM64_USHLLT=1114,
ARM64_USHR=1115,
ARM64_USMMLA=1116,
ARM64_USQADD=1117,
ARM64_USRA=1118,
ARM64_USUBL=1119,
ARM64_USUBL2=1120,
ARM64_USUBLB=1121,
ARM64_USUBLT=1122,
ARM64_USUBW=1123,
ARM64_USUBW2=1124,
ARM64_USUBWB=1125,
ARM64_USUBWT=1126,
ARM64_UUNPKHI=1127,
ARM64_UUNPKLO=1128,
ARM64_UXTB=1129,
ARM64_UXTH=1130,
ARM64_UXTL=1131,
ARM64_UXTL2=1132,
ARM64_UXTW=1133,
ARM64_UZP1=1134,
ARM64_UZP2=1135,
ARM64_WFE=1136,
ARM64_WFET=1137,
ARM64_WFI=1138,
ARM64_WFIT=1139,
ARM64_WHILEGE=1140,
ARM64_WHILEGT=1141,
ARM64_WHILEHI=1142,
ARM64_WHILEHS=1143,
ARM64_WHILELE=1144,
ARM64_WHILELO=1145,
ARM64_WHILELS=1146,
ARM64_WHILELT=1147,
ARM64_WHILERW=1148,
ARM64_WHILEWR=1149,
ARM64_WRFFR=1150,
ARM64_XAFLAG=1151,
ARM64_XAR=1152,
ARM64_XPACD=1153,
ARM64_XPACI=1154,
ARM64_XPACLRI=1155,
ARM64_XTN=1156,
ARM64_XTN2=1157,
ARM64_YIELD=1158,
ARM64_ZIP1=1159,
ARM64_ZIP2=1160,
};
const char *operation_to_str(enum Operation oper);
# 10 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/encodings_dec.h" 1

       





enum ENCODING {
ENC_UNKNOWN=0,
ENC_ABS_ASIMDMISC_R=1,
ENC_ABS_ASISDMISC_R=2,
ENC_ADCS_32_ADDSUB_CARRY=3,
ENC_ADCS_64_ADDSUB_CARRY=4,
ENC_ADC_32_ADDSUB_CARRY=5,
ENC_ADC_64_ADDSUB_CARRY=6,
ENC_ADDG_64_ADDSUB_IMMTAGS=7,
ENC_ADDHN_ASIMDDIFF_N=8,
ENC_ADDP_ASIMDSAME_ONLY=9,
ENC_ADDP_ASISDPAIR_ONLY=10,
ENC_ADDS_32S_ADDSUB_EXT=11,
ENC_ADDS_32S_ADDSUB_IMM=12,
ENC_ADDS_32_ADDSUB_SHIFT=13,
ENC_ADDS_64S_ADDSUB_EXT=14,
ENC_ADDS_64S_ADDSUB_IMM=15,
ENC_ADDS_64_ADDSUB_SHIFT=16,
ENC_ADDV_ASIMDALL_ONLY=17,
ENC_ADD_32_ADDSUB_EXT=18,
ENC_ADD_32_ADDSUB_IMM=19,
ENC_ADD_32_ADDSUB_SHIFT=20,
ENC_ADD_64_ADDSUB_EXT=21,
ENC_ADD_64_ADDSUB_IMM=22,
ENC_ADD_64_ADDSUB_SHIFT=23,
ENC_ADD_ASIMDSAME_ONLY=24,
ENC_ADD_ASISDSAME_ONLY=25,
ENC_ADRP_ONLY_PCRELADDR=26,
ENC_ADR_ONLY_PCRELADDR=27,
ENC_AESD_B_CRYPTOAES=28,
ENC_AESE_B_CRYPTOAES=29,
ENC_AESIMC_B_CRYPTOAES=30,
ENC_AESMC_B_CRYPTOAES=31,
ENC_ANDS_32S_LOG_IMM=32,
ENC_ANDS_32_LOG_SHIFT=33,
ENC_ANDS_64S_LOG_IMM=34,
ENC_ANDS_64_LOG_SHIFT=35,
ENC_AND_32_LOG_IMM=36,
ENC_AND_32_LOG_SHIFT=37,
ENC_AND_64_LOG_IMM=38,
ENC_AND_64_LOG_SHIFT=39,
ENC_AND_ASIMDSAME_ONLY=40,
ENC_ASRV_32_DP_2SRC=41,
ENC_ASRV_64_DP_2SRC=42,
ENC_ASR_ASRV_32_DP_2SRC=43,
ENC_ASR_ASRV_64_DP_2SRC=44,
ENC_ASR_SBFM_32M_BITFIELD=45,
ENC_ASR_SBFM_64M_BITFIELD=46,
ENC_AT_SYS_CR_SYSTEMINSTRS=47,
ENC_AUTDA_64P_DP_1SRC=48,
ENC_AUTDB_64P_DP_1SRC=49,
ENC_AUTDZA_64Z_DP_1SRC=50,
ENC_AUTDZB_64Z_DP_1SRC=51,
ENC_AUTIA1716_HI_HINTS=52,
ENC_AUTIASP_HI_HINTS=53,
ENC_AUTIAZ_HI_HINTS=54,
ENC_AUTIA_64P_DP_1SRC=55,
ENC_AUTIB1716_HI_HINTS=56,
ENC_AUTIBSP_HI_HINTS=57,
ENC_AUTIBZ_HI_HINTS=58,
ENC_AUTIB_64P_DP_1SRC=59,
ENC_AUTIZA_64Z_DP_1SRC=60,
ENC_AUTIZB_64Z_DP_1SRC=61,
ENC_AXFLAG_M_PSTATE=62,
ENC_BCAX_VVV16_CRYPTO4=63,
ENC_BFCVTN_ASIMDMISC_4S=64,
ENC_BFCVT_BS_FLOATDP1=65,
ENC_BFC_BFM_32M_BITFIELD=66,
ENC_BFC_BFM_64M_BITFIELD=67,
ENC_BFDOT_ASIMDELEM_E=68,
ENC_BFDOT_ASIMDSAME2_D=69,
ENC_BFI_BFM_32M_BITFIELD=70,
ENC_BFI_BFM_64M_BITFIELD=71,
ENC_BFMLAL_ASIMDELEM_F=72,
ENC_BFMLAL_ASIMDSAME2_F_=73,
ENC_BFMMLA_ASIMDSAME2_E=74,
ENC_BFM_32M_BITFIELD=75,
ENC_BFM_64M_BITFIELD=76,
ENC_BFXIL_BFM_32M_BITFIELD=77,
ENC_BFXIL_BFM_64M_BITFIELD=78,
ENC_BICS_32_LOG_SHIFT=79,
ENC_BICS_64_LOG_SHIFT=80,
ENC_BIC_32_LOG_SHIFT=81,
ENC_BIC_64_LOG_SHIFT=82,
ENC_BIC_AND_Z_ZI_=83,
ENC_BIC_ASIMDIMM_L_HL=84,
ENC_BIC_ASIMDIMM_L_SL=85,
ENC_BIC_ASIMDSAME_ONLY=86,
ENC_BIF_ASIMDSAME_ONLY=87,
ENC_BIT_ASIMDSAME_ONLY=88,
ENC_BLRAAZ_64_BRANCH_REG=89,
ENC_BLRAA_64P_BRANCH_REG=90,
ENC_BLRABZ_64_BRANCH_REG=91,
ENC_BLRAB_64P_BRANCH_REG=92,
ENC_BLR_64_BRANCH_REG=93,
ENC_BL_ONLY_BRANCH_IMM=94,
ENC_BRAAZ_64_BRANCH_REG=95,
ENC_BRAA_64P_BRANCH_REG=96,
ENC_BRABZ_64_BRANCH_REG=97,
ENC_BRAB_64P_BRANCH_REG=98,
ENC_BRK_EX_EXCEPTION=99,
ENC_BR_64_BRANCH_REG=100,
ENC_BSL_ASIMDSAME_ONLY=101,
ENC_BTI_HB_HINTS=102,
ENC_B_ONLY_BRANCH_IMM=103,
ENC_B_ONLY_CONDBRANCH=104,
ENC_CASAB_C32_COMSWAP=105,
ENC_CASAH_C32_COMSWAP=106,
ENC_CASALB_C32_COMSWAP=107,
ENC_CASALH_C32_COMSWAP=108,
ENC_CASAL_C32_COMSWAP=109,
ENC_CASAL_C64_COMSWAP=110,
ENC_CASA_C32_COMSWAP=111,
ENC_CASA_C64_COMSWAP=112,
ENC_CASB_C32_COMSWAP=113,
ENC_CASH_C32_COMSWAP=114,
ENC_CASLB_C32_COMSWAP=115,
ENC_CASLH_C32_COMSWAP=116,
ENC_CASL_C32_COMSWAP=117,
ENC_CASL_C64_COMSWAP=118,
ENC_CASPAL_CP32_COMSWAPPR=119,
ENC_CASPAL_CP64_COMSWAPPR=120,
ENC_CASPA_CP32_COMSWAPPR=121,
ENC_CASPA_CP64_COMSWAPPR=122,
ENC_CASPL_CP32_COMSWAPPR=123,
ENC_CASPL_CP64_COMSWAPPR=124,
ENC_CASP_CP32_COMSWAPPR=125,
ENC_CASP_CP64_COMSWAPPR=126,
ENC_CAS_C32_COMSWAP=127,
ENC_CAS_C64_COMSWAP=128,
ENC_CBNZ_32_COMPBRANCH=129,
ENC_CBNZ_64_COMPBRANCH=130,
ENC_CBZ_32_COMPBRANCH=131,
ENC_CBZ_64_COMPBRANCH=132,
ENC_CCMN_32_CONDCMP_IMM=133,
ENC_CCMN_32_CONDCMP_REG=134,
ENC_CCMN_64_CONDCMP_IMM=135,
ENC_CCMN_64_CONDCMP_REG=136,
ENC_CCMP_32_CONDCMP_IMM=137,
ENC_CCMP_32_CONDCMP_REG=138,
ENC_CCMP_64_CONDCMP_IMM=139,
ENC_CCMP_64_CONDCMP_REG=140,
ENC_CFINV_M_PSTATE=141,
ENC_CFP_SYS_CR_SYSTEMINSTRS=142,
ENC_CINC_CSINC_32_CONDSEL=143,
ENC_CINC_CSINC_64_CONDSEL=144,
ENC_CINV_CSINV_32_CONDSEL=145,
ENC_CINV_CSINV_64_CONDSEL=146,
ENC_CLREX_BN_BARRIERS=147,
ENC_CLS_32_DP_1SRC=148,
ENC_CLS_64_DP_1SRC=149,
ENC_CLS_ASIMDMISC_R=150,
ENC_CLZ_32_DP_1SRC=151,
ENC_CLZ_64_DP_1SRC=152,
ENC_CLZ_ASIMDMISC_R=153,
ENC_CMEQ_ASIMDMISC_Z=154,
ENC_CMEQ_ASIMDSAME_ONLY=155,
ENC_CMEQ_ASISDMISC_Z=156,
ENC_CMEQ_ASISDSAME_ONLY=157,
ENC_CMGE_ASIMDMISC_Z=158,
ENC_CMGE_ASIMDSAME_ONLY=159,
ENC_CMGE_ASISDMISC_Z=160,
ENC_CMGE_ASISDSAME_ONLY=161,
ENC_CMGT_ASIMDMISC_Z=162,
ENC_CMGT_ASIMDSAME_ONLY=163,
ENC_CMGT_ASISDMISC_Z=164,
ENC_CMGT_ASISDSAME_ONLY=165,
ENC_CMHI_ASIMDSAME_ONLY=166,
ENC_CMHI_ASISDSAME_ONLY=167,
ENC_CMHS_ASIMDSAME_ONLY=168,
ENC_CMHS_ASISDSAME_ONLY=169,
ENC_CMLE_ASIMDMISC_Z=170,
ENC_CMLE_ASISDMISC_Z=171,
ENC_CMLT_ASIMDMISC_Z=172,
ENC_CMLT_ASISDMISC_Z=173,
ENC_CMN_ADDS_32S_ADDSUB_EXT=174,
ENC_CMN_ADDS_32S_ADDSUB_IMM=175,
ENC_CMN_ADDS_32_ADDSUB_SHIFT=176,
ENC_CMN_ADDS_64S_ADDSUB_EXT=177,
ENC_CMN_ADDS_64S_ADDSUB_IMM=178,
ENC_CMN_ADDS_64_ADDSUB_SHIFT=179,
ENC_CMPLE_CMPGE_P_P_ZZ_=180,
ENC_CMPLO_CMPHI_P_P_ZZ_=181,
ENC_CMPLS_CMPHS_P_P_ZZ_=182,
ENC_CMPLT_CMPGT_P_P_ZZ_=183,
ENC_CMPP_SUBPS_64S_DP_2SRC=184,
ENC_CMP_SUBS_32S_ADDSUB_EXT=185,
ENC_CMP_SUBS_32S_ADDSUB_IMM=186,
ENC_CMP_SUBS_32_ADDSUB_SHIFT=187,
ENC_CMP_SUBS_64S_ADDSUB_EXT=188,
ENC_CMP_SUBS_64S_ADDSUB_IMM=189,
ENC_CMP_SUBS_64_ADDSUB_SHIFT=190,
ENC_CMTST_ASIMDSAME_ONLY=191,
ENC_CMTST_ASISDSAME_ONLY=192,
ENC_CNEG_CSNEG_32_CONDSEL=193,
ENC_CNEG_CSNEG_64_CONDSEL=194,
ENC_CNT_ASIMDMISC_R=195,
ENC_CPP_SYS_CR_SYSTEMINSTRS=196,
ENC_CRC32B_32C_DP_2SRC=197,
ENC_CRC32CB_32C_DP_2SRC=198,
ENC_CRC32CH_32C_DP_2SRC=199,
ENC_CRC32CW_32C_DP_2SRC=200,
ENC_CRC32CX_64C_DP_2SRC=201,
ENC_CRC32H_32C_DP_2SRC=202,
ENC_CRC32W_32C_DP_2SRC=203,
ENC_CRC32X_64C_DP_2SRC=204,
ENC_CSDB_HI_HINTS=205,
ENC_CSEL_32_CONDSEL=206,
ENC_CSEL_64_CONDSEL=207,
ENC_CSETM_CSINV_32_CONDSEL=208,
ENC_CSETM_CSINV_64_CONDSEL=209,
ENC_CSET_CSINC_32_CONDSEL=210,
ENC_CSET_CSINC_64_CONDSEL=211,
ENC_CSINC_32_CONDSEL=212,
ENC_CSINC_64_CONDSEL=213,
ENC_CSINV_32_CONDSEL=214,
ENC_CSINV_64_CONDSEL=215,
ENC_CSNEG_32_CONDSEL=216,
ENC_CSNEG_64_CONDSEL=217,
ENC_DCPS1_DC_EXCEPTION=218,
ENC_DCPS2_DC_EXCEPTION=219,
ENC_DCPS3_DC_EXCEPTION=220,
ENC_DC_SYS_CR_SYSTEMINSTRS=221,
ENC_DGH_HI_HINTS=222,
ENC_DMB_BO_BARRIERS=223,
ENC_DRPS_64E_BRANCH_REG=224,
ENC_DSB_BO_BARRIERS=225,
ENC_DSB_BON_BARRIERS=226,
ENC_DUP_ASIMDINS_DR_R=227,
ENC_DUP_ASIMDINS_DV_V=228,
ENC_DUP_ASISDONE_ONLY=229,
ENC_DVP_SYS_CR_SYSTEMINSTRS=230,
ENC_EON_32_LOG_SHIFT=231,
ENC_EON_64_LOG_SHIFT=232,
ENC_EON_EOR_Z_ZI_=233,
ENC_EOR3_VVV16_CRYPTO4=234,
ENC_EOR_32_LOG_IMM=235,
ENC_EOR_32_LOG_SHIFT=236,
ENC_EOR_64_LOG_IMM=237,
ENC_EOR_64_LOG_SHIFT=238,
ENC_EOR_ASIMDSAME_ONLY=239,
ENC_ERETAA_64E_BRANCH_REG=240,
ENC_ERETAB_64E_BRANCH_REG=241,
ENC_ERET_64E_BRANCH_REG=242,
ENC_ESB_HI_HINTS=243,
ENC_EXTR_32_EXTRACT=244,
ENC_EXTR_64_EXTRACT=245,
ENC_EXT_ASIMDEXT_ONLY=246,
ENC_FABD_ASIMDSAME_ONLY=247,
ENC_FABD_ASIMDSAMEFP16_ONLY=248,
ENC_FABD_ASISDSAME_ONLY=249,
ENC_FABD_ASISDSAMEFP16_ONLY=250,
ENC_FABS_D_FLOATDP1=251,
ENC_FABS_H_FLOATDP1=252,
ENC_FABS_S_FLOATDP1=253,
ENC_FABS_ASIMDMISC_R=254,
ENC_FABS_ASIMDMISCFP16_R=255,
ENC_FACGE_ASIMDSAME_ONLY=256,
ENC_FACGE_ASIMDSAMEFP16_ONLY=257,
ENC_FACGE_ASISDSAME_ONLY=258,
ENC_FACGE_ASISDSAMEFP16_ONLY=259,
ENC_FACGT_ASIMDSAME_ONLY=260,
ENC_FACGT_ASIMDSAMEFP16_ONLY=261,
ENC_FACGT_ASISDSAME_ONLY=262,
ENC_FACGT_ASISDSAMEFP16_ONLY=263,
ENC_FACLE_FACGE_P_P_ZZ_=264,
ENC_FACLT_FACGT_P_P_ZZ_=265,
ENC_FADDP_ASIMDSAME_ONLY=266,
ENC_FADDP_ASIMDSAMEFP16_ONLY=267,
ENC_FADDP_ASISDPAIR_ONLY_H=268,
ENC_FADDP_ASISDPAIR_ONLY_SD=269,
ENC_FADD_D_FLOATDP2=270,
ENC_FADD_H_FLOATDP2=271,
ENC_FADD_S_FLOATDP2=272,
ENC_FADD_ASIMDSAME_ONLY=273,
ENC_FADD_ASIMDSAMEFP16_ONLY=274,
ENC_FCADD_ASIMDSAME2_C=275,
ENC_FCCMPE_D_FLOATCCMP=276,
ENC_FCCMPE_H_FLOATCCMP=277,
ENC_FCCMPE_S_FLOATCCMP=278,
ENC_FCCMP_D_FLOATCCMP=279,
ENC_FCCMP_H_FLOATCCMP=280,
ENC_FCCMP_S_FLOATCCMP=281,
ENC_FCMEQ_ASIMDMISC_FZ=282,
ENC_FCMEQ_ASIMDMISCFP16_FZ=283,
ENC_FCMEQ_ASIMDSAME_ONLY=284,
ENC_FCMEQ_ASIMDSAMEFP16_ONLY=285,
ENC_FCMEQ_ASISDMISC_FZ=286,
ENC_FCMEQ_ASISDMISCFP16_FZ=287,
ENC_FCMEQ_ASISDSAME_ONLY=288,
ENC_FCMEQ_ASISDSAMEFP16_ONLY=289,
ENC_FCMGE_ASIMDMISC_FZ=290,
ENC_FCMGE_ASIMDMISCFP16_FZ=291,
ENC_FCMGE_ASIMDSAME_ONLY=292,
ENC_FCMGE_ASIMDSAMEFP16_ONLY=293,
ENC_FCMGE_ASISDMISC_FZ=294,
ENC_FCMGE_ASISDMISCFP16_FZ=295,
ENC_FCMGE_ASISDSAME_ONLY=296,
ENC_FCMGE_ASISDSAMEFP16_ONLY=297,
ENC_FCMGT_ASIMDMISC_FZ=298,
ENC_FCMGT_ASIMDMISCFP16_FZ=299,
ENC_FCMGT_ASIMDSAME_ONLY=300,
ENC_FCMGT_ASIMDSAMEFP16_ONLY=301,
ENC_FCMGT_ASISDMISC_FZ=302,
ENC_FCMGT_ASISDMISCFP16_FZ=303,
ENC_FCMGT_ASISDSAME_ONLY=304,
ENC_FCMGT_ASISDSAMEFP16_ONLY=305,
ENC_FCMLA_ASIMDELEM_C_H=306,
ENC_FCMLA_ASIMDELEM_C_S=307,
ENC_FCMLA_ASIMDSAME2_C=308,
ENC_FCMLE_ASIMDMISC_FZ=309,
ENC_FCMLE_ASIMDMISCFP16_FZ=310,
ENC_FCMLE_ASISDMISC_FZ=311,
ENC_FCMLE_ASISDMISCFP16_FZ=312,
ENC_FCMLE_FCMGE_P_P_ZZ_=313,
ENC_FCMLT_ASIMDMISC_FZ=314,
ENC_FCMLT_ASIMDMISCFP16_FZ=315,
ENC_FCMLT_ASISDMISC_FZ=316,
ENC_FCMLT_ASISDMISCFP16_FZ=317,
ENC_FCMLT_FCMGT_P_P_ZZ_=318,
ENC_FCMPE_DZ_FLOATCMP=319,
ENC_FCMPE_D_FLOATCMP=320,
ENC_FCMPE_HZ_FLOATCMP=321,
ENC_FCMPE_H_FLOATCMP=322,
ENC_FCMPE_SZ_FLOATCMP=323,
ENC_FCMPE_S_FLOATCMP=324,
ENC_FCMP_DZ_FLOATCMP=325,
ENC_FCMP_D_FLOATCMP=326,
ENC_FCMP_HZ_FLOATCMP=327,
ENC_FCMP_H_FLOATCMP=328,
ENC_FCMP_SZ_FLOATCMP=329,
ENC_FCMP_S_FLOATCMP=330,
ENC_FCSEL_D_FLOATSEL=331,
ENC_FCSEL_H_FLOATSEL=332,
ENC_FCSEL_S_FLOATSEL=333,
ENC_FCVTAS_32D_FLOAT2INT=334,
ENC_FCVTAS_32H_FLOAT2INT=335,
ENC_FCVTAS_32S_FLOAT2INT=336,
ENC_FCVTAS_64D_FLOAT2INT=337,
ENC_FCVTAS_64H_FLOAT2INT=338,
ENC_FCVTAS_64S_FLOAT2INT=339,
ENC_FCVTAS_ASIMDMISC_R=340,
ENC_FCVTAS_ASIMDMISCFP16_R=341,
ENC_FCVTAS_ASISDMISC_R=342,
ENC_FCVTAS_ASISDMISCFP16_R=343,
ENC_FCVTAU_32D_FLOAT2INT=344,
ENC_FCVTAU_32H_FLOAT2INT=345,
ENC_FCVTAU_32S_FLOAT2INT=346,
ENC_FCVTAU_64D_FLOAT2INT=347,
ENC_FCVTAU_64H_FLOAT2INT=348,
ENC_FCVTAU_64S_FLOAT2INT=349,
ENC_FCVTAU_ASIMDMISC_R=350,
ENC_FCVTAU_ASIMDMISCFP16_R=351,
ENC_FCVTAU_ASISDMISC_R=352,
ENC_FCVTAU_ASISDMISCFP16_R=353,
ENC_FCVTL_ASIMDMISC_L=354,
ENC_FCVTMS_32D_FLOAT2INT=355,
ENC_FCVTMS_32H_FLOAT2INT=356,
ENC_FCVTMS_32S_FLOAT2INT=357,
ENC_FCVTMS_64D_FLOAT2INT=358,
ENC_FCVTMS_64H_FLOAT2INT=359,
ENC_FCVTMS_64S_FLOAT2INT=360,
ENC_FCVTMS_ASIMDMISC_R=361,
ENC_FCVTMS_ASIMDMISCFP16_R=362,
ENC_FCVTMS_ASISDMISC_R=363,
ENC_FCVTMS_ASISDMISCFP16_R=364,
ENC_FCVTMU_32D_FLOAT2INT=365,
ENC_FCVTMU_32H_FLOAT2INT=366,
ENC_FCVTMU_32S_FLOAT2INT=367,
ENC_FCVTMU_64D_FLOAT2INT=368,
ENC_FCVTMU_64H_FLOAT2INT=369,
ENC_FCVTMU_64S_FLOAT2INT=370,
ENC_FCVTMU_ASIMDMISC_R=371,
ENC_FCVTMU_ASIMDMISCFP16_R=372,
ENC_FCVTMU_ASISDMISC_R=373,
ENC_FCVTMU_ASISDMISCFP16_R=374,
ENC_FCVTNS_32D_FLOAT2INT=375,
ENC_FCVTNS_32H_FLOAT2INT=376,
ENC_FCVTNS_32S_FLOAT2INT=377,
ENC_FCVTNS_64D_FLOAT2INT=378,
ENC_FCVTNS_64H_FLOAT2INT=379,
ENC_FCVTNS_64S_FLOAT2INT=380,
ENC_FCVTNS_ASIMDMISC_R=381,
ENC_FCVTNS_ASIMDMISCFP16_R=382,
ENC_FCVTNS_ASISDMISC_R=383,
ENC_FCVTNS_ASISDMISCFP16_R=384,
ENC_FCVTNU_32D_FLOAT2INT=385,
ENC_FCVTNU_32H_FLOAT2INT=386,
ENC_FCVTNU_32S_FLOAT2INT=387,
ENC_FCVTNU_64D_FLOAT2INT=388,
ENC_FCVTNU_64H_FLOAT2INT=389,
ENC_FCVTNU_64S_FLOAT2INT=390,
ENC_FCVTNU_ASIMDMISC_R=391,
ENC_FCVTNU_ASIMDMISCFP16_R=392,
ENC_FCVTNU_ASISDMISC_R=393,
ENC_FCVTNU_ASISDMISCFP16_R=394,
ENC_FCVTN_ASIMDMISC_N=395,
ENC_FCVTPS_32D_FLOAT2INT=396,
ENC_FCVTPS_32H_FLOAT2INT=397,
ENC_FCVTPS_32S_FLOAT2INT=398,
ENC_FCVTPS_64D_FLOAT2INT=399,
ENC_FCVTPS_64H_FLOAT2INT=400,
ENC_FCVTPS_64S_FLOAT2INT=401,
ENC_FCVTPS_ASIMDMISC_R=402,
ENC_FCVTPS_ASIMDMISCFP16_R=403,
ENC_FCVTPS_ASISDMISC_R=404,
ENC_FCVTPS_ASISDMISCFP16_R=405,
ENC_FCVTPU_32D_FLOAT2INT=406,
ENC_FCVTPU_32H_FLOAT2INT=407,
ENC_FCVTPU_32S_FLOAT2INT=408,
ENC_FCVTPU_64D_FLOAT2INT=409,
ENC_FCVTPU_64H_FLOAT2INT=410,
ENC_FCVTPU_64S_FLOAT2INT=411,
ENC_FCVTPU_ASIMDMISC_R=412,
ENC_FCVTPU_ASIMDMISCFP16_R=413,
ENC_FCVTPU_ASISDMISC_R=414,
ENC_FCVTPU_ASISDMISCFP16_R=415,
ENC_FCVTXN_ASIMDMISC_N=416,
ENC_FCVTXN_ASISDMISC_N=417,
ENC_FCVTZS_32D_FLOAT2FIX=418,
ENC_FCVTZS_32D_FLOAT2INT=419,
ENC_FCVTZS_32H_FLOAT2FIX=420,
ENC_FCVTZS_32H_FLOAT2INT=421,
ENC_FCVTZS_32S_FLOAT2FIX=422,
ENC_FCVTZS_32S_FLOAT2INT=423,
ENC_FCVTZS_64D_FLOAT2FIX=424,
ENC_FCVTZS_64D_FLOAT2INT=425,
ENC_FCVTZS_64H_FLOAT2FIX=426,
ENC_FCVTZS_64H_FLOAT2INT=427,
ENC_FCVTZS_64S_FLOAT2FIX=428,
ENC_FCVTZS_64S_FLOAT2INT=429,
ENC_FCVTZS_ASIMDMISC_R=430,
ENC_FCVTZS_ASIMDMISCFP16_R=431,
ENC_FCVTZS_ASIMDSHF_C=432,
ENC_FCVTZS_ASISDMISC_R=433,
ENC_FCVTZS_ASISDMISCFP16_R=434,
ENC_FCVTZS_ASISDSHF_C=435,
ENC_FCVTZU_32D_FLOAT2FIX=436,
ENC_FCVTZU_32D_FLOAT2INT=437,
ENC_FCVTZU_32H_FLOAT2FIX=438,
ENC_FCVTZU_32H_FLOAT2INT=439,
ENC_FCVTZU_32S_FLOAT2FIX=440,
ENC_FCVTZU_32S_FLOAT2INT=441,
ENC_FCVTZU_64D_FLOAT2FIX=442,
ENC_FCVTZU_64D_FLOAT2INT=443,
ENC_FCVTZU_64H_FLOAT2FIX=444,
ENC_FCVTZU_64H_FLOAT2INT=445,
ENC_FCVTZU_64S_FLOAT2FIX=446,
ENC_FCVTZU_64S_FLOAT2INT=447,
ENC_FCVTZU_ASIMDMISC_R=448,
ENC_FCVTZU_ASIMDMISCFP16_R=449,
ENC_FCVTZU_ASIMDSHF_C=450,
ENC_FCVTZU_ASISDMISC_R=451,
ENC_FCVTZU_ASISDMISCFP16_R=452,
ENC_FCVTZU_ASISDSHF_C=453,
ENC_FCVT_DH_FLOATDP1=454,
ENC_FCVT_DS_FLOATDP1=455,
ENC_FCVT_HD_FLOATDP1=456,
ENC_FCVT_HS_FLOATDP1=457,
ENC_FCVT_SD_FLOATDP1=458,
ENC_FCVT_SH_FLOATDP1=459,
ENC_FDIV_D_FLOATDP2=460,
ENC_FDIV_H_FLOATDP2=461,
ENC_FDIV_S_FLOATDP2=462,
ENC_FDIV_ASIMDSAME_ONLY=463,
ENC_FDIV_ASIMDSAMEFP16_ONLY=464,
ENC_FJCVTZS_32D_FLOAT2INT=465,
ENC_FMADD_D_FLOATDP3=466,
ENC_FMADD_H_FLOATDP3=467,
ENC_FMADD_S_FLOATDP3=468,
ENC_FMAXNMP_ASIMDSAME_ONLY=469,
ENC_FMAXNMP_ASIMDSAMEFP16_ONLY=470,
ENC_FMAXNMP_ASISDPAIR_ONLY_H=471,
ENC_FMAXNMP_ASISDPAIR_ONLY_SD=472,
ENC_FMAXNMV_ASIMDALL_ONLY_H=473,
ENC_FMAXNMV_ASIMDALL_ONLY_SD=474,
ENC_FMAXNM_D_FLOATDP2=475,
ENC_FMAXNM_H_FLOATDP2=476,
ENC_FMAXNM_S_FLOATDP2=477,
ENC_FMAXNM_ASIMDSAME_ONLY=478,
ENC_FMAXNM_ASIMDSAMEFP16_ONLY=479,
ENC_FMAXP_ASIMDSAME_ONLY=480,
ENC_FMAXP_ASIMDSAMEFP16_ONLY=481,
ENC_FMAXP_ASISDPAIR_ONLY_H=482,
ENC_FMAXP_ASISDPAIR_ONLY_SD=483,
ENC_FMAXV_ASIMDALL_ONLY_H=484,
ENC_FMAXV_ASIMDALL_ONLY_SD=485,
ENC_FMAX_D_FLOATDP2=486,
ENC_FMAX_H_FLOATDP2=487,
ENC_FMAX_S_FLOATDP2=488,
ENC_FMAX_ASIMDSAME_ONLY=489,
ENC_FMAX_ASIMDSAMEFP16_ONLY=490,
ENC_FMINNMP_ASIMDSAME_ONLY=491,
ENC_FMINNMP_ASIMDSAMEFP16_ONLY=492,
ENC_FMINNMP_ASISDPAIR_ONLY_H=493,
ENC_FMINNMP_ASISDPAIR_ONLY_SD=494,
ENC_FMINNMV_ASIMDALL_ONLY_H=495,
ENC_FMINNMV_ASIMDALL_ONLY_SD=496,
ENC_FMINNM_D_FLOATDP2=497,
ENC_FMINNM_H_FLOATDP2=498,
ENC_FMINNM_S_FLOATDP2=499,
ENC_FMINNM_ASIMDSAME_ONLY=500,
ENC_FMINNM_ASIMDSAMEFP16_ONLY=501,
ENC_FMINP_ASIMDSAME_ONLY=502,
ENC_FMINP_ASIMDSAMEFP16_ONLY=503,
ENC_FMINP_ASISDPAIR_ONLY_H=504,
ENC_FMINP_ASISDPAIR_ONLY_SD=505,
ENC_FMINV_ASIMDALL_ONLY_H=506,
ENC_FMINV_ASIMDALL_ONLY_SD=507,
ENC_FMIN_D_FLOATDP2=508,
ENC_FMIN_H_FLOATDP2=509,
ENC_FMIN_S_FLOATDP2=510,
ENC_FMIN_ASIMDSAME_ONLY=511,
ENC_FMIN_ASIMDSAMEFP16_ONLY=512,
ENC_FMLAL2_ASIMDELEM_LH=513,
ENC_FMLAL2_ASIMDSAME_F=514,
ENC_FMLAL_ASIMDELEM_LH=515,
ENC_FMLAL_ASIMDSAME_F=516,
ENC_FMLA_ASIMDELEM_RH_H=517,
ENC_FMLA_ASIMDELEM_R_SD=518,
ENC_FMLA_ASIMDSAME_ONLY=519,
ENC_FMLA_ASIMDSAMEFP16_ONLY=520,
ENC_FMLA_ASISDELEM_RH_H=521,
ENC_FMLA_ASISDELEM_R_SD=522,
ENC_FMLSL2_ASIMDELEM_LH=523,
ENC_FMLSL2_ASIMDSAME_F=524,
ENC_FMLSL_ASIMDELEM_LH=525,
ENC_FMLSL_ASIMDSAME_F=526,
ENC_FMLS_ASIMDELEM_RH_H=527,
ENC_FMLS_ASIMDELEM_R_SD=528,
ENC_FMLS_ASIMDSAME_ONLY=529,
ENC_FMLS_ASIMDSAMEFP16_ONLY=530,
ENC_FMLS_ASISDELEM_RH_H=531,
ENC_FMLS_ASISDELEM_R_SD=532,
ENC_FMOV_32H_FLOAT2INT=533,
ENC_FMOV_32S_FLOAT2INT=534,
ENC_FMOV_64D_FLOAT2INT=535,
ENC_FMOV_64H_FLOAT2INT=536,
ENC_FMOV_64VX_FLOAT2INT=537,
ENC_FMOV_D64_FLOAT2INT=538,
ENC_FMOV_D_FLOATDP1=539,
ENC_FMOV_D_FLOATIMM=540,
ENC_FMOV_H32_FLOAT2INT=541,
ENC_FMOV_H64_FLOAT2INT=542,
ENC_FMOV_H_FLOATDP1=543,
ENC_FMOV_H_FLOATIMM=544,
ENC_FMOV_S32_FLOAT2INT=545,
ENC_FMOV_S_FLOATDP1=546,
ENC_FMOV_S_FLOATIMM=547,
ENC_FMOV_V64I_FLOAT2INT=548,
ENC_FMOV_ASIMDIMM_D2_D=549,
ENC_FMOV_ASIMDIMM_H_H=550,
ENC_FMOV_ASIMDIMM_S_S=551,
ENC_FMOV_CPY_Z_P_I_=552,
ENC_FMOV_DUP_Z_I_=553,
ENC_FMOV_FCPY_Z_P_I_=554,
ENC_FMOV_FDUP_Z_I_=555,
ENC_FMSUB_D_FLOATDP3=556,
ENC_FMSUB_H_FLOATDP3=557,
ENC_FMSUB_S_FLOATDP3=558,
ENC_FMULX_ASIMDELEM_RH_H=559,
ENC_FMULX_ASIMDELEM_R_SD=560,
ENC_FMULX_ASIMDSAME_ONLY=561,
ENC_FMULX_ASIMDSAMEFP16_ONLY=562,
ENC_FMULX_ASISDELEM_RH_H=563,
ENC_FMULX_ASISDELEM_R_SD=564,
ENC_FMULX_ASISDSAME_ONLY=565,
ENC_FMULX_ASISDSAMEFP16_ONLY=566,
ENC_FMUL_D_FLOATDP2=567,
ENC_FMUL_H_FLOATDP2=568,
ENC_FMUL_S_FLOATDP2=569,
ENC_FMUL_ASIMDELEM_RH_H=570,
ENC_FMUL_ASIMDELEM_R_SD=571,
ENC_FMUL_ASIMDSAME_ONLY=572,
ENC_FMUL_ASIMDSAMEFP16_ONLY=573,
ENC_FMUL_ASISDELEM_RH_H=574,
ENC_FMUL_ASISDELEM_R_SD=575,
ENC_FNEG_D_FLOATDP1=576,
ENC_FNEG_H_FLOATDP1=577,
ENC_FNEG_S_FLOATDP1=578,
ENC_FNEG_ASIMDMISC_R=579,
ENC_FNEG_ASIMDMISCFP16_R=580,
ENC_FNMADD_D_FLOATDP3=581,
ENC_FNMADD_H_FLOATDP3=582,
ENC_FNMADD_S_FLOATDP3=583,
ENC_FNMSUB_D_FLOATDP3=584,
ENC_FNMSUB_H_FLOATDP3=585,
ENC_FNMSUB_S_FLOATDP3=586,
ENC_FNMUL_D_FLOATDP2=587,
ENC_FNMUL_H_FLOATDP2=588,
ENC_FNMUL_S_FLOATDP2=589,
ENC_FRECPE_ASIMDMISC_R=590,
ENC_FRECPE_ASIMDMISCFP16_R=591,
ENC_FRECPE_ASISDMISC_R=592,
ENC_FRECPE_ASISDMISCFP16_R=593,
ENC_FRECPS_ASIMDSAME_ONLY=594,
ENC_FRECPS_ASIMDSAMEFP16_ONLY=595,
ENC_FRECPS_ASISDSAME_ONLY=596,
ENC_FRECPS_ASISDSAMEFP16_ONLY=597,
ENC_FRECPX_ASISDMISC_R=598,
ENC_FRECPX_ASISDMISCFP16_R=599,
ENC_FRINT32X_D_FLOATDP1=600,
ENC_FRINT32X_S_FLOATDP1=601,
ENC_FRINT32X_ASIMDMISC_R=602,
ENC_FRINT32Z_D_FLOATDP1=603,
ENC_FRINT32Z_S_FLOATDP1=604,
ENC_FRINT32Z_ASIMDMISC_R=605,
ENC_FRINT64X_D_FLOATDP1=606,
ENC_FRINT64X_S_FLOATDP1=607,
ENC_FRINT64X_ASIMDMISC_R=608,
ENC_FRINT64Z_D_FLOATDP1=609,
ENC_FRINT64Z_S_FLOATDP1=610,
ENC_FRINT64Z_ASIMDMISC_R=611,
ENC_FRINTA_D_FLOATDP1=612,
ENC_FRINTA_H_FLOATDP1=613,
ENC_FRINTA_S_FLOATDP1=614,
ENC_FRINTA_ASIMDMISC_R=615,
ENC_FRINTA_ASIMDMISCFP16_R=616,
ENC_FRINTI_D_FLOATDP1=617,
ENC_FRINTI_H_FLOATDP1=618,
ENC_FRINTI_S_FLOATDP1=619,
ENC_FRINTI_ASIMDMISC_R=620,
ENC_FRINTI_ASIMDMISCFP16_R=621,
ENC_FRINTM_D_FLOATDP1=622,
ENC_FRINTM_H_FLOATDP1=623,
ENC_FRINTM_S_FLOATDP1=624,
ENC_FRINTM_ASIMDMISC_R=625,
ENC_FRINTM_ASIMDMISCFP16_R=626,
ENC_FRINTN_D_FLOATDP1=627,
ENC_FRINTN_H_FLOATDP1=628,
ENC_FRINTN_S_FLOATDP1=629,
ENC_FRINTN_ASIMDMISC_R=630,
ENC_FRINTN_ASIMDMISCFP16_R=631,
ENC_FRINTP_D_FLOATDP1=632,
ENC_FRINTP_H_FLOATDP1=633,
ENC_FRINTP_S_FLOATDP1=634,
ENC_FRINTP_ASIMDMISC_R=635,
ENC_FRINTP_ASIMDMISCFP16_R=636,
ENC_FRINTX_D_FLOATDP1=637,
ENC_FRINTX_H_FLOATDP1=638,
ENC_FRINTX_S_FLOATDP1=639,
ENC_FRINTX_ASIMDMISC_R=640,
ENC_FRINTX_ASIMDMISCFP16_R=641,
ENC_FRINTZ_D_FLOATDP1=642,
ENC_FRINTZ_H_FLOATDP1=643,
ENC_FRINTZ_S_FLOATDP1=644,
ENC_FRINTZ_ASIMDMISC_R=645,
ENC_FRINTZ_ASIMDMISCFP16_R=646,
ENC_FRSQRTE_ASIMDMISC_R=647,
ENC_FRSQRTE_ASIMDMISCFP16_R=648,
ENC_FRSQRTE_ASISDMISC_R=649,
ENC_FRSQRTE_ASISDMISCFP16_R=650,
ENC_FRSQRTS_ASIMDSAME_ONLY=651,
ENC_FRSQRTS_ASIMDSAMEFP16_ONLY=652,
ENC_FRSQRTS_ASISDSAME_ONLY=653,
ENC_FRSQRTS_ASISDSAMEFP16_ONLY=654,
ENC_FSQRT_D_FLOATDP1=655,
ENC_FSQRT_H_FLOATDP1=656,
ENC_FSQRT_S_FLOATDP1=657,
ENC_FSQRT_ASIMDMISC_R=658,
ENC_FSQRT_ASIMDMISCFP16_R=659,
ENC_FSUB_D_FLOATDP2=660,
ENC_FSUB_H_FLOATDP2=661,
ENC_FSUB_S_FLOATDP2=662,
ENC_FSUB_ASIMDSAME_ONLY=663,
ENC_FSUB_ASIMDSAMEFP16_ONLY=664,
ENC_GMI_64G_DP_2SRC=665,
ENC_HINT_HM_HINTS=666,
ENC_HLT_EX_EXCEPTION=667,
ENC_HVC_EX_EXCEPTION=668,
ENC_IC_SYS_CR_SYSTEMINSTRS=669,
ENC_INS_ASIMDINS_IR_R=670,
ENC_INS_ASIMDINS_IV_V=671,
ENC_IRG_64I_DP_2SRC=672,
ENC_ISB_BI_BARRIERS=673,
ENC_LD1R_ASISDLSO_R1=674,
ENC_LD1R_ASISDLSOP_R1_I=675,
ENC_LD1R_ASISDLSOP_RX1_R=676,
ENC_LD1_ASISDLSE_R1_1V=677,
ENC_LD1_ASISDLSE_R2_2V=678,
ENC_LD1_ASISDLSE_R3_3V=679,
ENC_LD1_ASISDLSE_R4_4V=680,
ENC_LD1_ASISDLSEP_I1_I1=681,
ENC_LD1_ASISDLSEP_I2_I2=682,
ENC_LD1_ASISDLSEP_I3_I3=683,
ENC_LD1_ASISDLSEP_I4_I4=684,
ENC_LD1_ASISDLSEP_R1_R1=685,
ENC_LD1_ASISDLSEP_R2_R2=686,
ENC_LD1_ASISDLSEP_R3_R3=687,
ENC_LD1_ASISDLSEP_R4_R4=688,
ENC_LD1_ASISDLSO_B1_1B=689,
ENC_LD1_ASISDLSO_D1_1D=690,
ENC_LD1_ASISDLSO_H1_1H=691,
ENC_LD1_ASISDLSO_S1_1S=692,
ENC_LD1_ASISDLSOP_B1_I1B=693,
ENC_LD1_ASISDLSOP_BX1_R1B=694,
ENC_LD1_ASISDLSOP_D1_I1D=695,
ENC_LD1_ASISDLSOP_DX1_R1D=696,
ENC_LD1_ASISDLSOP_H1_I1H=697,
ENC_LD1_ASISDLSOP_HX1_R1H=698,
ENC_LD1_ASISDLSOP_S1_I1S=699,
ENC_LD1_ASISDLSOP_SX1_R1S=700,
ENC_LD2R_ASISDLSO_R2=701,
ENC_LD2R_ASISDLSOP_R2_I=702,
ENC_LD2R_ASISDLSOP_RX2_R=703,
ENC_LD2_ASISDLSE_R2=704,
ENC_LD2_ASISDLSEP_I2_I=705,
ENC_LD2_ASISDLSEP_R2_R=706,
ENC_LD2_ASISDLSO_B2_2B=707,
ENC_LD2_ASISDLSO_D2_2D=708,
ENC_LD2_ASISDLSO_H2_2H=709,
ENC_LD2_ASISDLSO_S2_2S=710,
ENC_LD2_ASISDLSOP_B2_I2B=711,
ENC_LD2_ASISDLSOP_BX2_R2B=712,
ENC_LD2_ASISDLSOP_D2_I2D=713,
ENC_LD2_ASISDLSOP_DX2_R2D=714,
ENC_LD2_ASISDLSOP_H2_I2H=715,
ENC_LD2_ASISDLSOP_HX2_R2H=716,
ENC_LD2_ASISDLSOP_S2_I2S=717,
ENC_LD2_ASISDLSOP_SX2_R2S=718,
ENC_LD3R_ASISDLSO_R3=719,
ENC_LD3R_ASISDLSOP_R3_I=720,
ENC_LD3R_ASISDLSOP_RX3_R=721,
ENC_LD3_ASISDLSE_R3=722,
ENC_LD3_ASISDLSEP_I3_I=723,
ENC_LD3_ASISDLSEP_R3_R=724,
ENC_LD3_ASISDLSO_B3_3B=725,
ENC_LD3_ASISDLSO_D3_3D=726,
ENC_LD3_ASISDLSO_H3_3H=727,
ENC_LD3_ASISDLSO_S3_3S=728,
ENC_LD3_ASISDLSOP_B3_I3B=729,
ENC_LD3_ASISDLSOP_BX3_R3B=730,
ENC_LD3_ASISDLSOP_D3_I3D=731,
ENC_LD3_ASISDLSOP_DX3_R3D=732,
ENC_LD3_ASISDLSOP_H3_I3H=733,
ENC_LD3_ASISDLSOP_HX3_R3H=734,
ENC_LD3_ASISDLSOP_S3_I3S=735,
ENC_LD3_ASISDLSOP_SX3_R3S=736,
ENC_LD4R_ASISDLSO_R4=737,
ENC_LD4R_ASISDLSOP_R4_I=738,
ENC_LD4R_ASISDLSOP_RX4_R=739,
ENC_LD4_ASISDLSE_R4=740,
ENC_LD4_ASISDLSEP_I4_I=741,
ENC_LD4_ASISDLSEP_R4_R=742,
ENC_LD4_ASISDLSO_B4_4B=743,
ENC_LD4_ASISDLSO_D4_4D=744,
ENC_LD4_ASISDLSO_H4_4H=745,
ENC_LD4_ASISDLSO_S4_4S=746,
ENC_LD4_ASISDLSOP_B4_I4B=747,
ENC_LD4_ASISDLSOP_BX4_R4B=748,
ENC_LD4_ASISDLSOP_D4_I4D=749,
ENC_LD4_ASISDLSOP_DX4_R4D=750,
ENC_LD4_ASISDLSOP_H4_I4H=751,
ENC_LD4_ASISDLSOP_HX4_R4H=752,
ENC_LD4_ASISDLSOP_S4_I4S=753,
ENC_LD4_ASISDLSOP_SX4_R4S=754,
ENC_LD64B_64L_MEMOP=755,
ENC_LDADDAB_32_MEMOP=756,
ENC_LDADDAH_32_MEMOP=757,
ENC_LDADDALB_32_MEMOP=758,
ENC_LDADDALH_32_MEMOP=759,
ENC_LDADDAL_32_MEMOP=760,
ENC_LDADDAL_64_MEMOP=761,
ENC_LDADDA_32_MEMOP=762,
ENC_LDADDA_64_MEMOP=763,
ENC_LDADDB_32_MEMOP=764,
ENC_LDADDH_32_MEMOP=765,
ENC_LDADDLB_32_MEMOP=766,
ENC_LDADDLH_32_MEMOP=767,
ENC_LDADDL_32_MEMOP=768,
ENC_LDADDL_64_MEMOP=769,
ENC_LDADD_32_MEMOP=770,
ENC_LDADD_64_MEMOP=771,
ENC_LDAPRB_32L_MEMOP=772,
ENC_LDAPRH_32L_MEMOP=773,
ENC_LDAPR_32L_MEMOP=774,
ENC_LDAPR_64L_MEMOP=775,
ENC_LDAPURB_32_LDAPSTL_UNSCALED=776,
ENC_LDAPURH_32_LDAPSTL_UNSCALED=777,
ENC_LDAPURSB_32_LDAPSTL_UNSCALED=778,
ENC_LDAPURSB_64_LDAPSTL_UNSCALED=779,
ENC_LDAPURSH_32_LDAPSTL_UNSCALED=780,
ENC_LDAPURSH_64_LDAPSTL_UNSCALED=781,
ENC_LDAPURSW_64_LDAPSTL_UNSCALED=782,
ENC_LDAPUR_32_LDAPSTL_UNSCALED=783,
ENC_LDAPUR_64_LDAPSTL_UNSCALED=784,
ENC_LDARB_LR32_LDSTORD=785,
ENC_LDARH_LR32_LDSTORD=786,
ENC_LDAR_LR32_LDSTORD=787,
ENC_LDAR_LR64_LDSTORD=788,
ENC_LDAXP_LP32_LDSTEXCLP=789,
ENC_LDAXP_LP64_LDSTEXCLP=790,
ENC_LDAXRB_LR32_LDSTEXCLR=791,
ENC_LDAXRH_LR32_LDSTEXCLR=792,
ENC_LDAXR_LR32_LDSTEXCLR=793,
ENC_LDAXR_LR64_LDSTEXCLR=794,
ENC_LDCLRAB_32_MEMOP=795,
ENC_LDCLRAH_32_MEMOP=796,
ENC_LDCLRALB_32_MEMOP=797,
ENC_LDCLRALH_32_MEMOP=798,
ENC_LDCLRAL_32_MEMOP=799,
ENC_LDCLRAL_64_MEMOP=800,
ENC_LDCLRA_32_MEMOP=801,
ENC_LDCLRA_64_MEMOP=802,
ENC_LDCLRB_32_MEMOP=803,
ENC_LDCLRH_32_MEMOP=804,
ENC_LDCLRLB_32_MEMOP=805,
ENC_LDCLRLH_32_MEMOP=806,
ENC_LDCLRL_32_MEMOP=807,
ENC_LDCLRL_64_MEMOP=808,
ENC_LDCLR_32_MEMOP=809,
ENC_LDCLR_64_MEMOP=810,
ENC_LDEORAB_32_MEMOP=811,
ENC_LDEORAH_32_MEMOP=812,
ENC_LDEORALB_32_MEMOP=813,
ENC_LDEORALH_32_MEMOP=814,
ENC_LDEORAL_32_MEMOP=815,
ENC_LDEORAL_64_MEMOP=816,
ENC_LDEORA_32_MEMOP=817,
ENC_LDEORA_64_MEMOP=818,
ENC_LDEORB_32_MEMOP=819,
ENC_LDEORH_32_MEMOP=820,
ENC_LDEORLB_32_MEMOP=821,
ENC_LDEORLH_32_MEMOP=822,
ENC_LDEORL_32_MEMOP=823,
ENC_LDEORL_64_MEMOP=824,
ENC_LDEOR_32_MEMOP=825,
ENC_LDEOR_64_MEMOP=826,
ENC_LDGM_64BULK_LDSTTAGS=827,
ENC_LDG_64LOFFSET_LDSTTAGS=828,
ENC_LDLARB_LR32_LDSTORD=829,
ENC_LDLARH_LR32_LDSTORD=830,
ENC_LDLAR_LR32_LDSTORD=831,
ENC_LDLAR_LR64_LDSTORD=832,
ENC_LDNP_32_LDSTNAPAIR_OFFS=833,
ENC_LDNP_64_LDSTNAPAIR_OFFS=834,
ENC_LDNP_D_LDSTNAPAIR_OFFS=835,
ENC_LDNP_Q_LDSTNAPAIR_OFFS=836,
ENC_LDNP_S_LDSTNAPAIR_OFFS=837,
ENC_LDPSW_64_LDSTPAIR_OFF=838,
ENC_LDPSW_64_LDSTPAIR_POST=839,
ENC_LDPSW_64_LDSTPAIR_PRE=840,
ENC_LDP_32_LDSTPAIR_OFF=841,
ENC_LDP_32_LDSTPAIR_POST=842,
ENC_LDP_32_LDSTPAIR_PRE=843,
ENC_LDP_64_LDSTPAIR_OFF=844,
ENC_LDP_64_LDSTPAIR_POST=845,
ENC_LDP_64_LDSTPAIR_PRE=846,
ENC_LDP_D_LDSTPAIR_OFF=847,
ENC_LDP_D_LDSTPAIR_POST=848,
ENC_LDP_D_LDSTPAIR_PRE=849,
ENC_LDP_Q_LDSTPAIR_OFF=850,
ENC_LDP_Q_LDSTPAIR_POST=851,
ENC_LDP_Q_LDSTPAIR_PRE=852,
ENC_LDP_S_LDSTPAIR_OFF=853,
ENC_LDP_S_LDSTPAIR_POST=854,
ENC_LDP_S_LDSTPAIR_PRE=855,
ENC_LDRAA_64W_LDST_PAC=856,
ENC_LDRAA_64_LDST_PAC=857,
ENC_LDRAB_64W_LDST_PAC=858,
ENC_LDRAB_64_LDST_PAC=859,
ENC_LDRB_32BL_LDST_REGOFF=860,
ENC_LDRB_32B_LDST_REGOFF=861,
ENC_LDRB_32_LDST_IMMPOST=862,
ENC_LDRB_32_LDST_IMMPRE=863,
ENC_LDRB_32_LDST_POS=864,
ENC_LDRH_32_LDST_IMMPOST=865,
ENC_LDRH_32_LDST_IMMPRE=866,
ENC_LDRH_32_LDST_POS=867,
ENC_LDRH_32_LDST_REGOFF=868,
ENC_LDRSB_32BL_LDST_REGOFF=869,
ENC_LDRSB_32B_LDST_REGOFF=870,
ENC_LDRSB_32_LDST_IMMPOST=871,
ENC_LDRSB_32_LDST_IMMPRE=872,
ENC_LDRSB_32_LDST_POS=873,
ENC_LDRSB_64BL_LDST_REGOFF=874,
ENC_LDRSB_64B_LDST_REGOFF=875,
ENC_LDRSB_64_LDST_IMMPOST=876,
ENC_LDRSB_64_LDST_IMMPRE=877,
ENC_LDRSB_64_LDST_POS=878,
ENC_LDRSH_32_LDST_IMMPOST=879,
ENC_LDRSH_32_LDST_IMMPRE=880,
ENC_LDRSH_32_LDST_POS=881,
ENC_LDRSH_32_LDST_REGOFF=882,
ENC_LDRSH_64_LDST_IMMPOST=883,
ENC_LDRSH_64_LDST_IMMPRE=884,
ENC_LDRSH_64_LDST_POS=885,
ENC_LDRSH_64_LDST_REGOFF=886,
ENC_LDRSW_64_LDST_IMMPOST=887,
ENC_LDRSW_64_LDST_IMMPRE=888,
ENC_LDRSW_64_LDST_POS=889,
ENC_LDRSW_64_LDST_REGOFF=890,
ENC_LDRSW_64_LOADLIT=891,
ENC_LDR_32_LDST_IMMPOST=892,
ENC_LDR_32_LDST_IMMPRE=893,
ENC_LDR_32_LDST_POS=894,
ENC_LDR_32_LDST_REGOFF=895,
ENC_LDR_32_LOADLIT=896,
ENC_LDR_64_LDST_IMMPOST=897,
ENC_LDR_64_LDST_IMMPRE=898,
ENC_LDR_64_LDST_POS=899,
ENC_LDR_64_LDST_REGOFF=900,
ENC_LDR_64_LOADLIT=901,
ENC_LDR_BL_LDST_REGOFF=902,
ENC_LDR_B_LDST_IMMPOST=903,
ENC_LDR_B_LDST_IMMPRE=904,
ENC_LDR_B_LDST_POS=905,
ENC_LDR_B_LDST_REGOFF=906,
ENC_LDR_D_LDST_IMMPOST=907,
ENC_LDR_D_LDST_IMMPRE=908,
ENC_LDR_D_LDST_POS=909,
ENC_LDR_D_LDST_REGOFF=910,
ENC_LDR_D_LOADLIT=911,
ENC_LDR_H_LDST_IMMPOST=912,
ENC_LDR_H_LDST_IMMPRE=913,
ENC_LDR_H_LDST_POS=914,
ENC_LDR_H_LDST_REGOFF=915,
ENC_LDR_Q_LDST_IMMPOST=916,
ENC_LDR_Q_LDST_IMMPRE=917,
ENC_LDR_Q_LDST_POS=918,
ENC_LDR_Q_LDST_REGOFF=919,
ENC_LDR_Q_LOADLIT=920,
ENC_LDR_S_LDST_IMMPOST=921,
ENC_LDR_S_LDST_IMMPRE=922,
ENC_LDR_S_LDST_POS=923,
ENC_LDR_S_LDST_REGOFF=924,
ENC_LDR_S_LOADLIT=925,
ENC_LDSETAB_32_MEMOP=926,
ENC_LDSETAH_32_MEMOP=927,
ENC_LDSETALB_32_MEMOP=928,
ENC_LDSETALH_32_MEMOP=929,
ENC_LDSETAL_32_MEMOP=930,
ENC_LDSETAL_64_MEMOP=931,
ENC_LDSETA_32_MEMOP=932,
ENC_LDSETA_64_MEMOP=933,
ENC_LDSETB_32_MEMOP=934,
ENC_LDSETH_32_MEMOP=935,
ENC_LDSETLB_32_MEMOP=936,
ENC_LDSETLH_32_MEMOP=937,
ENC_LDSETL_32_MEMOP=938,
ENC_LDSETL_64_MEMOP=939,
ENC_LDSET_32_MEMOP=940,
ENC_LDSET_64_MEMOP=941,
ENC_LDSMAXAB_32_MEMOP=942,
ENC_LDSMAXAH_32_MEMOP=943,
ENC_LDSMAXALB_32_MEMOP=944,
ENC_LDSMAXALH_32_MEMOP=945,
ENC_LDSMAXAL_32_MEMOP=946,
ENC_LDSMAXAL_64_MEMOP=947,
ENC_LDSMAXA_32_MEMOP=948,
ENC_LDSMAXA_64_MEMOP=949,
ENC_LDSMAXB_32_MEMOP=950,
ENC_LDSMAXH_32_MEMOP=951,
ENC_LDSMAXLB_32_MEMOP=952,
ENC_LDSMAXLH_32_MEMOP=953,
ENC_LDSMAXL_32_MEMOP=954,
ENC_LDSMAXL_64_MEMOP=955,
ENC_LDSMAX_32_MEMOP=956,
ENC_LDSMAX_64_MEMOP=957,
ENC_LDSMINAB_32_MEMOP=958,
ENC_LDSMINAH_32_MEMOP=959,
ENC_LDSMINALB_32_MEMOP=960,
ENC_LDSMINALH_32_MEMOP=961,
ENC_LDSMINAL_32_MEMOP=962,
ENC_LDSMINAL_64_MEMOP=963,
ENC_LDSMINA_32_MEMOP=964,
ENC_LDSMINA_64_MEMOP=965,
ENC_LDSMINB_32_MEMOP=966,
ENC_LDSMINH_32_MEMOP=967,
ENC_LDSMINLB_32_MEMOP=968,
ENC_LDSMINLH_32_MEMOP=969,
ENC_LDSMINL_32_MEMOP=970,
ENC_LDSMINL_64_MEMOP=971,
ENC_LDSMIN_32_MEMOP=972,
ENC_LDSMIN_64_MEMOP=973,
ENC_LDTRB_32_LDST_UNPRIV=974,
ENC_LDTRH_32_LDST_UNPRIV=975,
ENC_LDTRSB_32_LDST_UNPRIV=976,
ENC_LDTRSB_64_LDST_UNPRIV=977,
ENC_LDTRSH_32_LDST_UNPRIV=978,
ENC_LDTRSH_64_LDST_UNPRIV=979,
ENC_LDTRSW_64_LDST_UNPRIV=980,
ENC_LDTR_32_LDST_UNPRIV=981,
ENC_LDTR_64_LDST_UNPRIV=982,
ENC_LDUMAXAB_32_MEMOP=983,
ENC_LDUMAXAH_32_MEMOP=984,
ENC_LDUMAXALB_32_MEMOP=985,
ENC_LDUMAXALH_32_MEMOP=986,
ENC_LDUMAXAL_32_MEMOP=987,
ENC_LDUMAXAL_64_MEMOP=988,
ENC_LDUMAXA_32_MEMOP=989,
ENC_LDUMAXA_64_MEMOP=990,
ENC_LDUMAXB_32_MEMOP=991,
ENC_LDUMAXH_32_MEMOP=992,
ENC_LDUMAXLB_32_MEMOP=993,
ENC_LDUMAXLH_32_MEMOP=994,
ENC_LDUMAXL_32_MEMOP=995,
ENC_LDUMAXL_64_MEMOP=996,
ENC_LDUMAX_32_MEMOP=997,
ENC_LDUMAX_64_MEMOP=998,
ENC_LDUMINAB_32_MEMOP=999,
ENC_LDUMINAH_32_MEMOP=1000,
ENC_LDUMINALB_32_MEMOP=1001,
ENC_LDUMINALH_32_MEMOP=1002,
ENC_LDUMINAL_32_MEMOP=1003,
ENC_LDUMINAL_64_MEMOP=1004,
ENC_LDUMINA_32_MEMOP=1005,
ENC_LDUMINA_64_MEMOP=1006,
ENC_LDUMINB_32_MEMOP=1007,
ENC_LDUMINH_32_MEMOP=1008,
ENC_LDUMINLB_32_MEMOP=1009,
ENC_LDUMINLH_32_MEMOP=1010,
ENC_LDUMINL_32_MEMOP=1011,
ENC_LDUMINL_64_MEMOP=1012,
ENC_LDUMIN_32_MEMOP=1013,
ENC_LDUMIN_64_MEMOP=1014,
ENC_LDURB_32_LDST_UNSCALED=1015,
ENC_LDURH_32_LDST_UNSCALED=1016,
ENC_LDURSB_32_LDST_UNSCALED=1017,
ENC_LDURSB_64_LDST_UNSCALED=1018,
ENC_LDURSH_32_LDST_UNSCALED=1019,
ENC_LDURSH_64_LDST_UNSCALED=1020,
ENC_LDURSW_64_LDST_UNSCALED=1021,
ENC_LDUR_32_LDST_UNSCALED=1022,
ENC_LDUR_64_LDST_UNSCALED=1023,
ENC_LDUR_B_LDST_UNSCALED=1024,
ENC_LDUR_D_LDST_UNSCALED=1025,
ENC_LDUR_H_LDST_UNSCALED=1026,
ENC_LDUR_Q_LDST_UNSCALED=1027,
ENC_LDUR_S_LDST_UNSCALED=1028,
ENC_LDXP_LP32_LDSTEXCLP=1029,
ENC_LDXP_LP64_LDSTEXCLP=1030,
ENC_LDXRB_LR32_LDSTEXCLR=1031,
ENC_LDXRH_LR32_LDSTEXCLR=1032,
ENC_LDXR_LR32_LDSTEXCLR=1033,
ENC_LDXR_LR64_LDSTEXCLR=1034,
ENC_LSLV_32_DP_2SRC=1035,
ENC_LSLV_64_DP_2SRC=1036,
ENC_LSL_LSLV_32_DP_2SRC=1037,
ENC_LSL_LSLV_64_DP_2SRC=1038,
ENC_LSL_UBFM_32M_BITFIELD=1039,
ENC_LSL_UBFM_64M_BITFIELD=1040,
ENC_LSRV_32_DP_2SRC=1041,
ENC_LSRV_64_DP_2SRC=1042,
ENC_LSR_LSRV_32_DP_2SRC=1043,
ENC_LSR_LSRV_64_DP_2SRC=1044,
ENC_LSR_UBFM_32M_BITFIELD=1045,
ENC_LSR_UBFM_64M_BITFIELD=1046,
ENC_MADD_32A_DP_3SRC=1047,
ENC_MADD_64A_DP_3SRC=1048,
ENC_MLA_ASIMDELEM_R=1049,
ENC_MLA_ASIMDSAME_ONLY=1050,
ENC_MLS_ASIMDELEM_R=1051,
ENC_MLS_ASIMDSAME_ONLY=1052,
ENC_MNEG_MSUB_32A_DP_3SRC=1053,
ENC_MNEG_MSUB_64A_DP_3SRC=1054,
ENC_MOVI_ASIMDIMM_D2_D=1055,
ENC_MOVI_ASIMDIMM_D_DS=1056,
ENC_MOVI_ASIMDIMM_L_HL=1057,
ENC_MOVI_ASIMDIMM_L_SL=1058,
ENC_MOVI_ASIMDIMM_M_SM=1059,
ENC_MOVI_ASIMDIMM_N_B=1060,
ENC_MOVK_32_MOVEWIDE=1061,
ENC_MOVK_64_MOVEWIDE=1062,
ENC_MOVN_32_MOVEWIDE=1063,
ENC_MOVN_64_MOVEWIDE=1064,
ENC_MOVS_ANDS_P_P_PP_Z=1065,
ENC_MOVS_ORRS_P_P_PP_Z=1066,
ENC_MOVZ_32_MOVEWIDE=1067,
ENC_MOVZ_64_MOVEWIDE=1068,
ENC_MOV_ADD_32_ADDSUB_IMM=1069,
ENC_MOV_ADD_64_ADDSUB_IMM=1070,
ENC_MOV_DUP_ASISDONE_ONLY=1071,
ENC_MOV_INS_ASIMDINS_IR_R=1072,
ENC_MOV_INS_ASIMDINS_IV_V=1073,
ENC_MOV_MOVN_32_MOVEWIDE=1074,
ENC_MOV_MOVN_64_MOVEWIDE=1075,
ENC_MOV_MOVZ_32_MOVEWIDE=1076,
ENC_MOV_MOVZ_64_MOVEWIDE=1077,
ENC_MOV_ORR_32_LOG_IMM=1078,
ENC_MOV_ORR_32_LOG_SHIFT=1079,
ENC_MOV_ORR_64_LOG_IMM=1080,
ENC_MOV_ORR_64_LOG_SHIFT=1081,
ENC_MOV_ORR_ASIMDSAME_ONLY=1082,
ENC_MOV_UMOV_ASIMDINS_W_W=1083,
ENC_MOV_UMOV_ASIMDINS_X_X=1084,
ENC_MOV_AND_P_P_PP_Z=1085,
ENC_MOV_CPY_Z_O_I_=1086,
ENC_MOV_CPY_Z_P_I_=1087,
ENC_MOV_CPY_Z_P_R_=1088,
ENC_MOV_CPY_Z_P_V_=1089,
ENC_MOV_DUP_Z_I_=1090,
ENC_MOV_DUP_Z_R_=1091,
ENC_MOV_DUP_Z_ZI_=1092,
ENC_MOV_DUP_Z_ZI_2=1093,
ENC_MOV_DUPM_Z_I_=1094,
ENC_MOV_ORR_P_P_PP_Z=1095,
ENC_MOV_ORR_Z_ZZ_=1096,
ENC_MOV_SEL_P_P_PP_=1097,
ENC_MOV_SEL_Z_P_ZZ_=1098,
ENC_MRS_RS_SYSTEMMOVE=1099,
ENC_MSR_SI_PSTATE=1100,
ENC_MSR_SR_SYSTEMMOVE=1101,
ENC_MSUB_32A_DP_3SRC=1102,
ENC_MSUB_64A_DP_3SRC=1103,
ENC_MUL_MADD_32A_DP_3SRC=1104,
ENC_MUL_MADD_64A_DP_3SRC=1105,
ENC_MUL_ASIMDELEM_R=1106,
ENC_MUL_ASIMDSAME_ONLY=1107,
ENC_MVNI_ASIMDIMM_L_HL=1108,
ENC_MVNI_ASIMDIMM_L_SL=1109,
ENC_MVNI_ASIMDIMM_M_SM=1110,
ENC_MVN_NOT_ASIMDMISC_R=1111,
ENC_MVN_ORN_32_LOG_SHIFT=1112,
ENC_MVN_ORN_64_LOG_SHIFT=1113,
ENC_NEGS_SUBS_32_ADDSUB_SHIFT=1114,
ENC_NEGS_SUBS_64_ADDSUB_SHIFT=1115,
ENC_NEG_SUB_32_ADDSUB_SHIFT=1116,
ENC_NEG_SUB_64_ADDSUB_SHIFT=1117,
ENC_NEG_ASIMDMISC_R=1118,
ENC_NEG_ASISDMISC_R=1119,
ENC_NGCS_SBCS_32_ADDSUB_CARRY=1120,
ENC_NGCS_SBCS_64_ADDSUB_CARRY=1121,
ENC_NGC_SBC_32_ADDSUB_CARRY=1122,
ENC_NGC_SBC_64_ADDSUB_CARRY=1123,
ENC_NOP_HI_HINTS=1124,
ENC_NOTS_EORS_P_P_PP_Z=1125,
ENC_NOT_ASIMDMISC_R=1126,
ENC_NOT_EOR_P_P_PP_Z=1127,
ENC_ORN_32_LOG_SHIFT=1128,
ENC_ORN_64_LOG_SHIFT=1129,
ENC_ORN_ASIMDSAME_ONLY=1130,
ENC_ORN_ORR_Z_ZI_=1131,
ENC_ORR_32_LOG_IMM=1132,
ENC_ORR_32_LOG_SHIFT=1133,
ENC_ORR_64_LOG_IMM=1134,
ENC_ORR_64_LOG_SHIFT=1135,
ENC_ORR_ASIMDIMM_L_HL=1136,
ENC_ORR_ASIMDIMM_L_SL=1137,
ENC_ORR_ASIMDSAME_ONLY=1138,
ENC_PACDA_64P_DP_1SRC=1139,
ENC_PACDB_64P_DP_1SRC=1140,
ENC_PACDZA_64Z_DP_1SRC=1141,
ENC_PACDZB_64Z_DP_1SRC=1142,
ENC_PACGA_64P_DP_2SRC=1143,
ENC_PACIA1716_HI_HINTS=1144,
ENC_PACIASP_HI_HINTS=1145,
ENC_PACIAZ_HI_HINTS=1146,
ENC_PACIA_64P_DP_1SRC=1147,
ENC_PACIB1716_HI_HINTS=1148,
ENC_PACIBSP_HI_HINTS=1149,
ENC_PACIBZ_HI_HINTS=1150,
ENC_PACIB_64P_DP_1SRC=1151,
ENC_PACIZA_64Z_DP_1SRC=1152,
ENC_PACIZB_64Z_DP_1SRC=1153,
ENC_PMULL_ASIMDDIFF_L=1154,
ENC_PMUL_ASIMDSAME_ONLY=1155,
ENC_PRFM_P_LDST_POS=1156,
ENC_PRFM_P_LDST_REGOFF=1157,
ENC_PRFM_P_LOADLIT=1158,
ENC_PRFUM_P_LDST_UNSCALED=1159,
ENC_PSB_HC_HINTS=1160,
ENC_PSSBB_DSB_BO_BARRIERS=1161,
ENC_RADDHN_ASIMDDIFF_N=1162,
ENC_RAX1_VVV2_CRYPTOSHA512_3=1163,
ENC_RBIT_32_DP_1SRC=1164,
ENC_RBIT_64_DP_1SRC=1165,
ENC_RBIT_ASIMDMISC_R=1166,
ENC_RESERVED_21_ASIMDELEM=1167,
ENC_RESERVED_35_ASIMDELEM=1168,
ENC_RESERVED_36_ASISDSAME=1169,
ENC_RESERVED_37_ASISDSAME=1170,
ENC_RESERVED_38_ASISDSAME=1171,
ENC_RESERVED_39_ASISDSAME=1172,
ENC_RESERVED_42_ASISDSAME=1173,
ENC_RESERVED_44_ASISDSAME=1174,
ENC_RESERVED_45_ASISDSAME=1175,
ENC_RESERVED_46_ASISDSAME=1176,
ENC_RESERVED_47_ASISDSAME=1177,
ENC_RESERVED_48_ASISDSAME=1178,
ENC_RESERVED_50_ASISDSAME=1179,
ENC_RESERVED_52_ASISDSAME=1180,
ENC_RESERVED_53_ASISDSAME=1181,
ENC_RESERVED_54_ASISDSAME=1182,
ENC_RESERVED_57_ASISDSAME=1183,
ENC_RESERVED_67_ASISDSAME=1184,
ENC_RESERVED_68_ASISDSAME=1185,
ENC_RESERVED_69_ASISDSAME=1186,
ENC_RESERVED_70_ASISDSAME=1187,
ENC_RESERVED_72_ASISDSAME=1188,
ENC_RESERVED_74_ASISDSAME=1189,
ENC_RETAA_64E_BRANCH_REG=1190,
ENC_RETAB_64E_BRANCH_REG=1191,
ENC_RET_64R_BRANCH_REG=1192,
ENC_REV16_32_DP_1SRC=1193,
ENC_REV16_64_DP_1SRC=1194,
ENC_REV16_ASIMDMISC_R=1195,
ENC_REV32_64_DP_1SRC=1196,
ENC_REV32_ASIMDMISC_R=1197,
ENC_REV64_REV_64_DP_1SRC=1198,
ENC_REV64_ASIMDMISC_R=1199,
ENC_REV_32_DP_1SRC=1200,
ENC_REV_64_DP_1SRC=1201,
ENC_RMIF_ONLY_RMIF=1202,
ENC_RORV_32_DP_2SRC=1203,
ENC_RORV_64_DP_2SRC=1204,
ENC_ROR_EXTR_32_EXTRACT=1205,
ENC_ROR_EXTR_64_EXTRACT=1206,
ENC_ROR_RORV_32_DP_2SRC=1207,
ENC_ROR_RORV_64_DP_2SRC=1208,
ENC_RSHRN_ASIMDSHF_N=1209,
ENC_RSUBHN_ASIMDDIFF_N=1210,
ENC_SABAL_ASIMDDIFF_L=1211,
ENC_SABA_ASIMDSAME_ONLY=1212,
ENC_SABDL_ASIMDDIFF_L=1213,
ENC_SABD_ASIMDSAME_ONLY=1214,
ENC_SADALP_ASIMDMISC_P=1215,
ENC_SADDLP_ASIMDMISC_P=1216,
ENC_SADDLV_ASIMDALL_ONLY=1217,
ENC_SADDL_ASIMDDIFF_L=1218,
ENC_SADDW_ASIMDDIFF_W=1219,
ENC_SBCS_32_ADDSUB_CARRY=1220,
ENC_SBCS_64_ADDSUB_CARRY=1221,
ENC_SBC_32_ADDSUB_CARRY=1222,
ENC_SBC_64_ADDSUB_CARRY=1223,
ENC_SBFIZ_SBFM_32M_BITFIELD=1224,
ENC_SBFIZ_SBFM_64M_BITFIELD=1225,
ENC_SBFM_32M_BITFIELD=1226,
ENC_SBFM_64M_BITFIELD=1227,
ENC_SBFX_SBFM_32M_BITFIELD=1228,
ENC_SBFX_SBFM_64M_BITFIELD=1229,
ENC_SB_ONLY_BARRIERS=1230,
ENC_SCVTF_D32_FLOAT2FIX=1231,
ENC_SCVTF_D32_FLOAT2INT=1232,
ENC_SCVTF_D64_FLOAT2FIX=1233,
ENC_SCVTF_D64_FLOAT2INT=1234,
ENC_SCVTF_H32_FLOAT2FIX=1235,
ENC_SCVTF_H32_FLOAT2INT=1236,
ENC_SCVTF_H64_FLOAT2FIX=1237,
ENC_SCVTF_H64_FLOAT2INT=1238,
ENC_SCVTF_S32_FLOAT2FIX=1239,
ENC_SCVTF_S32_FLOAT2INT=1240,
ENC_SCVTF_S64_FLOAT2FIX=1241,
ENC_SCVTF_S64_FLOAT2INT=1242,
ENC_SCVTF_ASIMDMISC_R=1243,
ENC_SCVTF_ASIMDMISCFP16_R=1244,
ENC_SCVTF_ASIMDSHF_C=1245,
ENC_SCVTF_ASISDMISC_R=1246,
ENC_SCVTF_ASISDMISCFP16_R=1247,
ENC_SCVTF_ASISDSHF_C=1248,
ENC_SDIV_32_DP_2SRC=1249,
ENC_SDIV_64_DP_2SRC=1250,
ENC_SDOT_ASIMDELEM_D=1251,
ENC_SDOT_ASIMDSAME2_D=1252,
ENC_SETF16_ONLY_SETF=1253,
ENC_SETF8_ONLY_SETF=1254,
ENC_SEVL_HI_HINTS=1255,
ENC_SEV_HI_HINTS=1256,
ENC_SHA1C_QSV_CRYPTOSHA3=1257,
ENC_SHA1H_SS_CRYPTOSHA2=1258,
ENC_SHA1M_QSV_CRYPTOSHA3=1259,
ENC_SHA1P_QSV_CRYPTOSHA3=1260,
ENC_SHA1SU0_VVV_CRYPTOSHA3=1261,
ENC_SHA1SU1_VV_CRYPTOSHA2=1262,
ENC_SHA256H2_QQV_CRYPTOSHA3=1263,
ENC_SHA256H_QQV_CRYPTOSHA3=1264,
ENC_SHA256SU0_VV_CRYPTOSHA2=1265,
ENC_SHA256SU1_VVV_CRYPTOSHA3=1266,
ENC_SHA512H2_QQV_CRYPTOSHA512_3=1267,
ENC_SHA512H_QQV_CRYPTOSHA512_3=1268,
ENC_SHA512SU0_VV2_CRYPTOSHA512_2=1269,
ENC_SHA512SU1_VVV2_CRYPTOSHA512_3=1270,
ENC_SHADD_ASIMDSAME_ONLY=1271,
ENC_SHLL_ASIMDMISC_S=1272,
ENC_SHL_ASIMDSHF_R=1273,
ENC_SHL_ASISDSHF_R=1274,
ENC_SHRN_ASIMDSHF_N=1275,
ENC_SHSUB_ASIMDSAME_ONLY=1276,
ENC_SLI_ASIMDSHF_R=1277,
ENC_SLI_ASISDSHF_R=1278,
ENC_SM3PARTW1_VVV4_CRYPTOSHA512_3=1279,
ENC_SM3PARTW2_VVV4_CRYPTOSHA512_3=1280,
ENC_SM3SS1_VVV4_CRYPTO4=1281,
ENC_SM3TT1A_VVV4_CRYPTO3_IMM2=1282,
ENC_SM3TT1B_VVV4_CRYPTO3_IMM2=1283,
ENC_SM3TT2A_VVV4_CRYPTO3_IMM2=1284,
ENC_SM3TT2B_VVV_CRYPTO3_IMM2=1285,
ENC_SM4EKEY_VVV4_CRYPTOSHA512_3=1286,
ENC_SM4E_VV4_CRYPTOSHA512_2=1287,
ENC_SMADDL_64WA_DP_3SRC=1288,
ENC_SMAXP_ASIMDSAME_ONLY=1289,
ENC_SMAXV_ASIMDALL_ONLY=1290,
ENC_SMAX_ASIMDSAME_ONLY=1291,
ENC_SMC_EX_EXCEPTION=1292,
ENC_SMINP_ASIMDSAME_ONLY=1293,
ENC_SMINV_ASIMDALL_ONLY=1294,
ENC_SMIN_ASIMDSAME_ONLY=1295,
ENC_SMLAL_ASIMDDIFF_L=1296,
ENC_SMLAL_ASIMDELEM_L=1297,
ENC_SMLSL_ASIMDDIFF_L=1298,
ENC_SMLSL_ASIMDELEM_L=1299,
ENC_SMMLA_ASIMDSAME2_G=1300,
ENC_SMNEGL_SMSUBL_64WA_DP_3SRC=1301,
ENC_SMOV_ASIMDINS_W_W=1302,
ENC_SMOV_ASIMDINS_X_X=1303,
ENC_SMSUBL_64WA_DP_3SRC=1304,
ENC_SMULH_64_DP_3SRC=1305,
ENC_SMULL_SMADDL_64WA_DP_3SRC=1306,
ENC_SMULL_ASIMDDIFF_L=1307,
ENC_SMULL_ASIMDELEM_L=1308,
ENC_SQABS_ASIMDMISC_R=1309,
ENC_SQABS_ASISDMISC_R=1310,
ENC_SQADD_ASIMDSAME_ONLY=1311,
ENC_SQADD_ASISDSAME_ONLY=1312,
ENC_SQDMLAL_ASIMDDIFF_L=1313,
ENC_SQDMLAL_ASIMDELEM_L=1314,
ENC_SQDMLAL_ASISDDIFF_ONLY=1315,
ENC_SQDMLAL_ASISDELEM_L=1316,
ENC_SQDMLSL_ASIMDDIFF_L=1317,
ENC_SQDMLSL_ASIMDELEM_L=1318,
ENC_SQDMLSL_ASISDDIFF_ONLY=1319,
ENC_SQDMLSL_ASISDELEM_L=1320,
ENC_SQDMULH_ASIMDELEM_R=1321,
ENC_SQDMULH_ASIMDSAME_ONLY=1322,
ENC_SQDMULH_ASISDELEM_R=1323,
ENC_SQDMULH_ASISDSAME_ONLY=1324,
ENC_SQDMULL_ASIMDDIFF_L=1325,
ENC_SQDMULL_ASIMDELEM_L=1326,
ENC_SQDMULL_ASISDDIFF_ONLY=1327,
ENC_SQDMULL_ASISDELEM_L=1328,
ENC_SQNEG_ASIMDMISC_R=1329,
ENC_SQNEG_ASISDMISC_R=1330,
ENC_SQRDMLAH_ASIMDELEM_R=1331,
ENC_SQRDMLAH_ASIMDSAME2_ONLY=1332,
ENC_SQRDMLAH_ASISDELEM_R=1333,
ENC_SQRDMLAH_ASISDSAME2_ONLY=1334,
ENC_SQRDMLSH_ASIMDELEM_R=1335,
ENC_SQRDMLSH_ASIMDSAME2_ONLY=1336,
ENC_SQRDMLSH_ASISDELEM_R=1337,
ENC_SQRDMLSH_ASISDSAME2_ONLY=1338,
ENC_SQRDMULH_ASIMDELEM_R=1339,
ENC_SQRDMULH_ASIMDSAME_ONLY=1340,
ENC_SQRDMULH_ASISDELEM_R=1341,
ENC_SQRDMULH_ASISDSAME_ONLY=1342,
ENC_SQRSHL_ASIMDSAME_ONLY=1343,
ENC_SQRSHL_ASISDSAME_ONLY=1344,
ENC_SQRSHRN_ASIMDSHF_N=1345,
ENC_SQRSHRN_ASISDSHF_N=1346,
ENC_SQRSHRUN_ASIMDSHF_N=1347,
ENC_SQRSHRUN_ASISDSHF_N=1348,
ENC_SQSHLU_ASIMDSHF_R=1349,
ENC_SQSHLU_ASISDSHF_R=1350,
ENC_SQSHL_ASIMDSAME_ONLY=1351,
ENC_SQSHL_ASIMDSHF_R=1352,
ENC_SQSHL_ASISDSAME_ONLY=1353,
ENC_SQSHL_ASISDSHF_R=1354,
ENC_SQSHRN_ASIMDSHF_N=1355,
ENC_SQSHRN_ASISDSHF_N=1356,
ENC_SQSHRUN_ASIMDSHF_N=1357,
ENC_SQSHRUN_ASISDSHF_N=1358,
ENC_SQSUB_ASIMDSAME_ONLY=1359,
ENC_SQSUB_ASISDSAME_ONLY=1360,
ENC_SQXTN_ASIMDMISC_N=1361,
ENC_SQXTN_ASISDMISC_N=1362,
ENC_SQXTUN_ASIMDMISC_N=1363,
ENC_SQXTUN_ASISDMISC_N=1364,
ENC_SRHADD_ASIMDSAME_ONLY=1365,
ENC_SRI_ASIMDSHF_R=1366,
ENC_SRI_ASISDSHF_R=1367,
ENC_SRSHL_ASIMDSAME_ONLY=1368,
ENC_SRSHL_ASISDSAME_ONLY=1369,
ENC_SRSHR_ASIMDSHF_R=1370,
ENC_SRSHR_ASISDSHF_R=1371,
ENC_SRSRA_ASIMDSHF_R=1372,
ENC_SRSRA_ASISDSHF_R=1373,
ENC_SSBB_DSB_BO_BARRIERS=1374,
ENC_SSHLL_ASIMDSHF_L=1375,
ENC_SSHL_ASIMDSAME_ONLY=1376,
ENC_SSHL_ASISDSAME_ONLY=1377,
ENC_SSHR_ASIMDSHF_R=1378,
ENC_SSHR_ASISDSHF_R=1379,
ENC_SSRA_ASIMDSHF_R=1380,
ENC_SSRA_ASISDSHF_R=1381,
ENC_SSUBL_ASIMDDIFF_L=1382,
ENC_SSUBW_ASIMDDIFF_W=1383,
ENC_ST1_ASISDLSE_R1_1V=1384,
ENC_ST1_ASISDLSE_R2_2V=1385,
ENC_ST1_ASISDLSE_R3_3V=1386,
ENC_ST1_ASISDLSE_R4_4V=1387,
ENC_ST1_ASISDLSEP_I1_I1=1388,
ENC_ST1_ASISDLSEP_I2_I2=1389,
ENC_ST1_ASISDLSEP_I3_I3=1390,
ENC_ST1_ASISDLSEP_I4_I4=1391,
ENC_ST1_ASISDLSEP_R1_R1=1392,
ENC_ST1_ASISDLSEP_R2_R2=1393,
ENC_ST1_ASISDLSEP_R3_R3=1394,
ENC_ST1_ASISDLSEP_R4_R4=1395,
ENC_ST1_ASISDLSO_B1_1B=1396,
ENC_ST1_ASISDLSO_D1_1D=1397,
ENC_ST1_ASISDLSO_H1_1H=1398,
ENC_ST1_ASISDLSO_S1_1S=1399,
ENC_ST1_ASISDLSOP_B1_I1B=1400,
ENC_ST1_ASISDLSOP_BX1_R1B=1401,
ENC_ST1_ASISDLSOP_D1_I1D=1402,
ENC_ST1_ASISDLSOP_DX1_R1D=1403,
ENC_ST1_ASISDLSOP_H1_I1H=1404,
ENC_ST1_ASISDLSOP_HX1_R1H=1405,
ENC_ST1_ASISDLSOP_S1_I1S=1406,
ENC_ST1_ASISDLSOP_SX1_R1S=1407,
ENC_ST2G_64SOFFSET_LDSTTAGS=1408,
ENC_ST2G_64SPOST_LDSTTAGS=1409,
ENC_ST2G_64SPRE_LDSTTAGS=1410,
ENC_ST2_ASISDLSE_R2=1411,
ENC_ST2_ASISDLSEP_I2_I=1412,
ENC_ST2_ASISDLSEP_R2_R=1413,
ENC_ST2_ASISDLSO_B2_2B=1414,
ENC_ST2_ASISDLSO_D2_2D=1415,
ENC_ST2_ASISDLSO_H2_2H=1416,
ENC_ST2_ASISDLSO_S2_2S=1417,
ENC_ST2_ASISDLSOP_B2_I2B=1418,
ENC_ST2_ASISDLSOP_BX2_R2B=1419,
ENC_ST2_ASISDLSOP_D2_I2D=1420,
ENC_ST2_ASISDLSOP_DX2_R2D=1421,
ENC_ST2_ASISDLSOP_H2_I2H=1422,
ENC_ST2_ASISDLSOP_HX2_R2H=1423,
ENC_ST2_ASISDLSOP_S2_I2S=1424,
ENC_ST2_ASISDLSOP_SX2_R2S=1425,
ENC_ST3_ASISDLSE_R3=1426,
ENC_ST3_ASISDLSEP_I3_I=1427,
ENC_ST3_ASISDLSEP_R3_R=1428,
ENC_ST3_ASISDLSO_B3_3B=1429,
ENC_ST3_ASISDLSO_D3_3D=1430,
ENC_ST3_ASISDLSO_H3_3H=1431,
ENC_ST3_ASISDLSO_S3_3S=1432,
ENC_ST3_ASISDLSOP_B3_I3B=1433,
ENC_ST3_ASISDLSOP_BX3_R3B=1434,
ENC_ST3_ASISDLSOP_D3_I3D=1435,
ENC_ST3_ASISDLSOP_DX3_R3D=1436,
ENC_ST3_ASISDLSOP_H3_I3H=1437,
ENC_ST3_ASISDLSOP_HX3_R3H=1438,
ENC_ST3_ASISDLSOP_S3_I3S=1439,
ENC_ST3_ASISDLSOP_SX3_R3S=1440,
ENC_ST4_ASISDLSE_R4=1441,
ENC_ST4_ASISDLSEP_I4_I=1442,
ENC_ST4_ASISDLSEP_R4_R=1443,
ENC_ST4_ASISDLSO_B4_4B=1444,
ENC_ST4_ASISDLSO_D4_4D=1445,
ENC_ST4_ASISDLSO_H4_4H=1446,
ENC_ST4_ASISDLSO_S4_4S=1447,
ENC_ST4_ASISDLSOP_B4_I4B=1448,
ENC_ST4_ASISDLSOP_BX4_R4B=1449,
ENC_ST4_ASISDLSOP_D4_I4D=1450,
ENC_ST4_ASISDLSOP_DX4_R4D=1451,
ENC_ST4_ASISDLSOP_H4_I4H=1452,
ENC_ST4_ASISDLSOP_HX4_R4H=1453,
ENC_ST4_ASISDLSOP_S4_I4S=1454,
ENC_ST4_ASISDLSOP_SX4_R4S=1455,
ENC_ST64BV0_64_MEMOP=1456,
ENC_ST64BV_64_MEMOP=1457,
ENC_ST64B_64L_MEMOP=1458,
ENC_STADDB_LDADDB_32_MEMOP=1459,
ENC_STADDH_LDADDH_32_MEMOP=1460,
ENC_STADDLB_LDADDLB_32_MEMOP=1461,
ENC_STADDLH_LDADDLH_32_MEMOP=1462,
ENC_STADDL_LDADDL_32_MEMOP=1463,
ENC_STADDL_LDADDL_64_MEMOP=1464,
ENC_STADD_LDADD_32_MEMOP=1465,
ENC_STADD_LDADD_64_MEMOP=1466,
ENC_STCLRB_LDCLRB_32_MEMOP=1467,
ENC_STCLRH_LDCLRH_32_MEMOP=1468,
ENC_STCLRLB_LDCLRLB_32_MEMOP=1469,
ENC_STCLRLH_LDCLRLH_32_MEMOP=1470,
ENC_STCLRL_LDCLRL_32_MEMOP=1471,
ENC_STCLRL_LDCLRL_64_MEMOP=1472,
ENC_STCLR_LDCLR_32_MEMOP=1473,
ENC_STCLR_LDCLR_64_MEMOP=1474,
ENC_STEORB_LDEORB_32_MEMOP=1475,
ENC_STEORH_LDEORH_32_MEMOP=1476,
ENC_STEORLB_LDEORLB_32_MEMOP=1477,
ENC_STEORLH_LDEORLH_32_MEMOP=1478,
ENC_STEORL_LDEORL_32_MEMOP=1479,
ENC_STEORL_LDEORL_64_MEMOP=1480,
ENC_STEOR_LDEOR_32_MEMOP=1481,
ENC_STEOR_LDEOR_64_MEMOP=1482,
ENC_STGM_64BULK_LDSTTAGS=1483,
ENC_STGP_64_LDSTPAIR_OFF=1484,
ENC_STGP_64_LDSTPAIR_POST=1485,
ENC_STGP_64_LDSTPAIR_PRE=1486,
ENC_STG_64SOFFSET_LDSTTAGS=1487,
ENC_STG_64SPOST_LDSTTAGS=1488,
ENC_STG_64SPRE_LDSTTAGS=1489,
ENC_STLLRB_SL32_LDSTORD=1490,
ENC_STLLRH_SL32_LDSTORD=1491,
ENC_STLLR_SL32_LDSTORD=1492,
ENC_STLLR_SL64_LDSTORD=1493,
ENC_STLRB_SL32_LDSTORD=1494,
ENC_STLRH_SL32_LDSTORD=1495,
ENC_STLR_SL32_LDSTORD=1496,
ENC_STLR_SL64_LDSTORD=1497,
ENC_STLURB_32_LDAPSTL_UNSCALED=1498,
ENC_STLURH_32_LDAPSTL_UNSCALED=1499,
ENC_STLUR_32_LDAPSTL_UNSCALED=1500,
ENC_STLUR_64_LDAPSTL_UNSCALED=1501,
ENC_STLXP_SP32_LDSTEXCLP=1502,
ENC_STLXP_SP64_LDSTEXCLP=1503,
ENC_STLXRB_SR32_LDSTEXCLR=1504,
ENC_STLXRH_SR32_LDSTEXCLR=1505,
ENC_STLXR_SR32_LDSTEXCLR=1506,
ENC_STLXR_SR64_LDSTEXCLR=1507,
ENC_STNP_32_LDSTNAPAIR_OFFS=1508,
ENC_STNP_64_LDSTNAPAIR_OFFS=1509,
ENC_STNP_D_LDSTNAPAIR_OFFS=1510,
ENC_STNP_Q_LDSTNAPAIR_OFFS=1511,
ENC_STNP_S_LDSTNAPAIR_OFFS=1512,
ENC_STP_32_LDSTPAIR_OFF=1513,
ENC_STP_32_LDSTPAIR_POST=1514,
ENC_STP_32_LDSTPAIR_PRE=1515,
ENC_STP_64_LDSTPAIR_OFF=1516,
ENC_STP_64_LDSTPAIR_POST=1517,
ENC_STP_64_LDSTPAIR_PRE=1518,
ENC_STP_D_LDSTPAIR_OFF=1519,
ENC_STP_D_LDSTPAIR_POST=1520,
ENC_STP_D_LDSTPAIR_PRE=1521,
ENC_STP_Q_LDSTPAIR_OFF=1522,
ENC_STP_Q_LDSTPAIR_POST=1523,
ENC_STP_Q_LDSTPAIR_PRE=1524,
ENC_STP_S_LDSTPAIR_OFF=1525,
ENC_STP_S_LDSTPAIR_POST=1526,
ENC_STP_S_LDSTPAIR_PRE=1527,
ENC_STRB_32BL_LDST_REGOFF=1528,
ENC_STRB_32B_LDST_REGOFF=1529,
ENC_STRB_32_LDST_IMMPOST=1530,
ENC_STRB_32_LDST_IMMPRE=1531,
ENC_STRB_32_LDST_POS=1532,
ENC_STRH_32_LDST_IMMPOST=1533,
ENC_STRH_32_LDST_IMMPRE=1534,
ENC_STRH_32_LDST_POS=1535,
ENC_STRH_32_LDST_REGOFF=1536,
ENC_STR_32_LDST_IMMPOST=1537,
ENC_STR_32_LDST_IMMPRE=1538,
ENC_STR_32_LDST_POS=1539,
ENC_STR_32_LDST_REGOFF=1540,
ENC_STR_64_LDST_IMMPOST=1541,
ENC_STR_64_LDST_IMMPRE=1542,
ENC_STR_64_LDST_POS=1543,
ENC_STR_64_LDST_REGOFF=1544,
ENC_STR_BL_LDST_REGOFF=1545,
ENC_STR_B_LDST_IMMPOST=1546,
ENC_STR_B_LDST_IMMPRE=1547,
ENC_STR_B_LDST_POS=1548,
ENC_STR_B_LDST_REGOFF=1549,
ENC_STR_D_LDST_IMMPOST=1550,
ENC_STR_D_LDST_IMMPRE=1551,
ENC_STR_D_LDST_POS=1552,
ENC_STR_D_LDST_REGOFF=1553,
ENC_STR_H_LDST_IMMPOST=1554,
ENC_STR_H_LDST_IMMPRE=1555,
ENC_STR_H_LDST_POS=1556,
ENC_STR_H_LDST_REGOFF=1557,
ENC_STR_Q_LDST_IMMPOST=1558,
ENC_STR_Q_LDST_IMMPRE=1559,
ENC_STR_Q_LDST_POS=1560,
ENC_STR_Q_LDST_REGOFF=1561,
ENC_STR_S_LDST_IMMPOST=1562,
ENC_STR_S_LDST_IMMPRE=1563,
ENC_STR_S_LDST_POS=1564,
ENC_STR_S_LDST_REGOFF=1565,
ENC_STSETB_LDSETB_32_MEMOP=1566,
ENC_STSETH_LDSETH_32_MEMOP=1567,
ENC_STSETLB_LDSETLB_32_MEMOP=1568,
ENC_STSETLH_LDSETLH_32_MEMOP=1569,
ENC_STSETL_LDSETL_32_MEMOP=1570,
ENC_STSETL_LDSETL_64_MEMOP=1571,
ENC_STSET_LDSET_32_MEMOP=1572,
ENC_STSET_LDSET_64_MEMOP=1573,
ENC_STSMAXB_LDSMAXB_32_MEMOP=1574,
ENC_STSMAXH_LDSMAXH_32_MEMOP=1575,
ENC_STSMAXLB_LDSMAXLB_32_MEMOP=1576,
ENC_STSMAXLH_LDSMAXLH_32_MEMOP=1577,
ENC_STSMAXL_LDSMAXL_32_MEMOP=1578,
ENC_STSMAXL_LDSMAXL_64_MEMOP=1579,
ENC_STSMAX_LDSMAX_32_MEMOP=1580,
ENC_STSMAX_LDSMAX_64_MEMOP=1581,
ENC_STSMINB_LDSMINB_32_MEMOP=1582,
ENC_STSMINH_LDSMINH_32_MEMOP=1583,
ENC_STSMINLB_LDSMINLB_32_MEMOP=1584,
ENC_STSMINLH_LDSMINLH_32_MEMOP=1585,
ENC_STSMINL_LDSMINL_32_MEMOP=1586,
ENC_STSMINL_LDSMINL_64_MEMOP=1587,
ENC_STSMIN_LDSMIN_32_MEMOP=1588,
ENC_STSMIN_LDSMIN_64_MEMOP=1589,
ENC_STTRB_32_LDST_UNPRIV=1590,
ENC_STTRH_32_LDST_UNPRIV=1591,
ENC_STTR_32_LDST_UNPRIV=1592,
ENC_STTR_64_LDST_UNPRIV=1593,
ENC_STUMAXB_LDUMAXB_32_MEMOP=1594,
ENC_STUMAXH_LDUMAXH_32_MEMOP=1595,
ENC_STUMAXLB_LDUMAXLB_32_MEMOP=1596,
ENC_STUMAXLH_LDUMAXLH_32_MEMOP=1597,
ENC_STUMAXL_LDUMAXL_32_MEMOP=1598,
ENC_STUMAXL_LDUMAXL_64_MEMOP=1599,
ENC_STUMAX_LDUMAX_32_MEMOP=1600,
ENC_STUMAX_LDUMAX_64_MEMOP=1601,
ENC_STUMINB_LDUMINB_32_MEMOP=1602,
ENC_STUMINH_LDUMINH_32_MEMOP=1603,
ENC_STUMINLB_LDUMINLB_32_MEMOP=1604,
ENC_STUMINLH_LDUMINLH_32_MEMOP=1605,
ENC_STUMINL_LDUMINL_32_MEMOP=1606,
ENC_STUMINL_LDUMINL_64_MEMOP=1607,
ENC_STUMIN_LDUMIN_32_MEMOP=1608,
ENC_STUMIN_LDUMIN_64_MEMOP=1609,
ENC_STURB_32_LDST_UNSCALED=1610,
ENC_STURH_32_LDST_UNSCALED=1611,
ENC_STUR_32_LDST_UNSCALED=1612,
ENC_STUR_64_LDST_UNSCALED=1613,
ENC_STUR_B_LDST_UNSCALED=1614,
ENC_STUR_D_LDST_UNSCALED=1615,
ENC_STUR_H_LDST_UNSCALED=1616,
ENC_STUR_Q_LDST_UNSCALED=1617,
ENC_STUR_S_LDST_UNSCALED=1618,
ENC_STXP_SP32_LDSTEXCLP=1619,
ENC_STXP_SP64_LDSTEXCLP=1620,
ENC_STXRB_SR32_LDSTEXCLR=1621,
ENC_STXRH_SR32_LDSTEXCLR=1622,
ENC_STXR_SR32_LDSTEXCLR=1623,
ENC_STXR_SR64_LDSTEXCLR=1624,
ENC_STZ2G_64SOFFSET_LDSTTAGS=1625,
ENC_STZ2G_64SPOST_LDSTTAGS=1626,
ENC_STZ2G_64SPRE_LDSTTAGS=1627,
ENC_STZGM_64BULK_LDSTTAGS=1628,
ENC_STZG_64SOFFSET_LDSTTAGS=1629,
ENC_STZG_64SPOST_LDSTTAGS=1630,
ENC_STZG_64SPRE_LDSTTAGS=1631,
ENC_SUBG_64_ADDSUB_IMMTAGS=1632,
ENC_SUBHN_ASIMDDIFF_N=1633,
ENC_SUBPS_64S_DP_2SRC=1634,
ENC_SUBP_64S_DP_2SRC=1635,
ENC_SUBS_32S_ADDSUB_EXT=1636,
ENC_SUBS_32S_ADDSUB_IMM=1637,
ENC_SUBS_32_ADDSUB_SHIFT=1638,
ENC_SUBS_64S_ADDSUB_EXT=1639,
ENC_SUBS_64S_ADDSUB_IMM=1640,
ENC_SUBS_64_ADDSUB_SHIFT=1641,
ENC_SUB_32_ADDSUB_EXT=1642,
ENC_SUB_32_ADDSUB_IMM=1643,
ENC_SUB_32_ADDSUB_SHIFT=1644,
ENC_SUB_64_ADDSUB_EXT=1645,
ENC_SUB_64_ADDSUB_IMM=1646,
ENC_SUB_64_ADDSUB_SHIFT=1647,
ENC_SUB_ASIMDSAME_ONLY=1648,
ENC_SUB_ASISDSAME_ONLY=1649,
ENC_SUDOT_ASIMDELEM_D=1650,
ENC_SUQADD_ASIMDMISC_R=1651,
ENC_SUQADD_ASISDMISC_R=1652,
ENC_SVC_EX_EXCEPTION=1653,
ENC_SWPAB_32_MEMOP=1654,
ENC_SWPAH_32_MEMOP=1655,
ENC_SWPALB_32_MEMOP=1656,
ENC_SWPALH_32_MEMOP=1657,
ENC_SWPAL_32_MEMOP=1658,
ENC_SWPAL_64_MEMOP=1659,
ENC_SWPA_32_MEMOP=1660,
ENC_SWPA_64_MEMOP=1661,
ENC_SWPB_32_MEMOP=1662,
ENC_SWPH_32_MEMOP=1663,
ENC_SWPLB_32_MEMOP=1664,
ENC_SWPLH_32_MEMOP=1665,
ENC_SWPL_32_MEMOP=1666,
ENC_SWPL_64_MEMOP=1667,
ENC_SWP_32_MEMOP=1668,
ENC_SWP_64_MEMOP=1669,
ENC_SXTB_SBFM_32M_BITFIELD=1670,
ENC_SXTB_SBFM_64M_BITFIELD=1671,
ENC_SXTH_SBFM_32M_BITFIELD=1672,
ENC_SXTH_SBFM_64M_BITFIELD=1673,
ENC_SXTL_SSHLL_ASIMDSHF_L=1674,
ENC_SXTW_SBFM_64M_BITFIELD=1675,
ENC_SYSL_RC_SYSTEMINSTRS=1676,
ENC_SYS_CR_SYSTEMINSTRS=1677,
ENC_TBL_ASIMDTBL_L1_1=1678,
ENC_TBL_ASIMDTBL_L2_2=1679,
ENC_TBL_ASIMDTBL_L3_3=1680,
ENC_TBL_ASIMDTBL_L4_4=1681,
ENC_TBNZ_ONLY_TESTBRANCH=1682,
ENC_TBX_ASIMDTBL_L1_1=1683,
ENC_TBX_ASIMDTBL_L2_2=1684,
ENC_TBX_ASIMDTBL_L3_3=1685,
ENC_TBX_ASIMDTBL_L4_4=1686,
ENC_TBZ_ONLY_TESTBRANCH=1687,
ENC_TCANCEL_EX_EXCEPTION=1688,
ENC_TCOMMIT_ONLY_BARRIERS=1689,
ENC_TLBI_SYS_CR_SYSTEMINSTRS=1690,
ENC_TRN1_ASIMDPERM_ONLY=1691,
ENC_TRN2_ASIMDPERM_ONLY=1692,
ENC_TSB_HC_HINTS=1693,
ENC_TSTART_BR_SYSTEMRESULT=1694,
ENC_TST_ANDS_32S_LOG_IMM=1695,
ENC_TST_ANDS_32_LOG_SHIFT=1696,
ENC_TST_ANDS_64S_LOG_IMM=1697,
ENC_TST_ANDS_64_LOG_SHIFT=1698,
ENC_TTEST_BR_SYSTEMRESULT=1699,
ENC_UABAL_ASIMDDIFF_L=1700,
ENC_UABA_ASIMDSAME_ONLY=1701,
ENC_UABDL_ASIMDDIFF_L=1702,
ENC_UABD_ASIMDSAME_ONLY=1703,
ENC_UADALP_ASIMDMISC_P=1704,
ENC_UADDLP_ASIMDMISC_P=1705,
ENC_UADDLV_ASIMDALL_ONLY=1706,
ENC_UADDL_ASIMDDIFF_L=1707,
ENC_UADDW_ASIMDDIFF_W=1708,
ENC_UBFIZ_UBFM_32M_BITFIELD=1709,
ENC_UBFIZ_UBFM_64M_BITFIELD=1710,
ENC_UBFM_32M_BITFIELD=1711,
ENC_UBFM_64M_BITFIELD=1712,
ENC_UBFX_UBFM_32M_BITFIELD=1713,
ENC_UBFX_UBFM_64M_BITFIELD=1714,
ENC_UCVTF_D32_FLOAT2FIX=1715,
ENC_UCVTF_D32_FLOAT2INT=1716,
ENC_UCVTF_D64_FLOAT2FIX=1717,
ENC_UCVTF_D64_FLOAT2INT=1718,
ENC_UCVTF_H32_FLOAT2FIX=1719,
ENC_UCVTF_H32_FLOAT2INT=1720,
ENC_UCVTF_H64_FLOAT2FIX=1721,
ENC_UCVTF_H64_FLOAT2INT=1722,
ENC_UCVTF_S32_FLOAT2FIX=1723,
ENC_UCVTF_S32_FLOAT2INT=1724,
ENC_UCVTF_S64_FLOAT2FIX=1725,
ENC_UCVTF_S64_FLOAT2INT=1726,
ENC_UCVTF_ASIMDMISC_R=1727,
ENC_UCVTF_ASIMDMISCFP16_R=1728,
ENC_UCVTF_ASIMDSHF_C=1729,
ENC_UCVTF_ASISDMISC_R=1730,
ENC_UCVTF_ASISDMISCFP16_R=1731,
ENC_UCVTF_ASISDSHF_C=1732,
ENC_UDF_ONLY_PERM_UNDEF=1733,
ENC_UDIV_32_DP_2SRC=1734,
ENC_UDIV_64_DP_2SRC=1735,
ENC_UDOT_ASIMDELEM_D=1736,
ENC_UDOT_ASIMDSAME2_D=1737,
ENC_UHADD_ASIMDSAME_ONLY=1738,
ENC_UHSUB_ASIMDSAME_ONLY=1739,
ENC_UMADDL_64WA_DP_3SRC=1740,
ENC_UMAXP_ASIMDSAME_ONLY=1741,
ENC_UMAXV_ASIMDALL_ONLY=1742,
ENC_UMAX_ASIMDSAME_ONLY=1743,
ENC_UMINP_ASIMDSAME_ONLY=1744,
ENC_UMINV_ASIMDALL_ONLY=1745,
ENC_UMIN_ASIMDSAME_ONLY=1746,
ENC_UMLAL_ASIMDDIFF_L=1747,
ENC_UMLAL_ASIMDELEM_L=1748,
ENC_UMLSL_ASIMDDIFF_L=1749,
ENC_UMLSL_ASIMDELEM_L=1750,
ENC_UMMLA_ASIMDSAME2_G=1751,
ENC_UMNEGL_UMSUBL_64WA_DP_3SRC=1752,
ENC_UMOV_ASIMDINS_W_W=1753,
ENC_UMOV_ASIMDINS_X_X=1754,
ENC_UMSUBL_64WA_DP_3SRC=1755,
ENC_UMULH_64_DP_3SRC=1756,
ENC_UMULL_UMADDL_64WA_DP_3SRC=1757,
ENC_UMULL_ASIMDDIFF_L=1758,
ENC_UMULL_ASIMDELEM_L=1759,
ENC_UNALLOCATED_100_ASIMDSAME=1760,
ENC_UNALLOCATED_10_ADDSUB_EXT=1761,
ENC_UNALLOCATED_10_ADDSUB_IMMTAGS=1762,
ENC_UNALLOCATED_10_ADDSUB_SHIFT=1763,
ENC_UNALLOCATED_10_BARRIERS=1764,
ENC_UNALLOCATED_10_BRANCH_REG=1765,
ENC_UNALLOCATED_10_COMSWAP=1766,
ENC_UNALLOCATED_10_COMSWAPPR=1767,
ENC_UNALLOCATED_10_CONDCMP_IMM=1768,
ENC_UNALLOCATED_10_CONDCMP_REG=1769,
ENC_UNALLOCATED_10_CONDSEL=1770,
ENC_UNALLOCATED_10_DP_1SRC=1771,
ENC_UNALLOCATED_10_EXCEPTION=1772,
ENC_UNALLOCATED_10_FLOAT2FIX=1773,
ENC_UNALLOCATED_10_FLOAT2INT=1774,
ENC_UNALLOCATED_10_FLOATCCMP=1775,
ENC_UNALLOCATED_10_FLOATCMP=1776,
ENC_UNALLOCATED_10_FLOATDP1=1777,
ENC_UNALLOCATED_10_FLOATDP2=1778,
ENC_UNALLOCATED_10_FLOATDP3=1779,
ENC_UNALLOCATED_10_FLOATIMM=1780,
ENC_UNALLOCATED_10_FLOATSEL=1781,
ENC_UNALLOCATED_10_LOG_IMM=1782,
ENC_UNALLOCATED_10_LOG_SHIFT=1783,
ENC_UNALLOCATED_10_MOVEWIDE=1784,
ENC_UNALLOCATED_10_PSTATE=1785,
ENC_UNALLOCATED_10_RMIF=1786,
ENC_UNALLOCATED_10_SETF=1787,
ENC_UNALLOCATED_10_SYSTEMRESULT=1788,
ENC_UNALLOCATED_11_ADDSUB_EXT=1789,
ENC_UNALLOCATED_11_ADDSUB_IMMTAGS=1790,
ENC_UNALLOCATED_11_ADDSUB_SHIFT=1791,
ENC_UNALLOCATED_11_ASIMDALL=1792,
ENC_UNALLOCATED_11_ASIMDELEM=1793,
ENC_UNALLOCATED_11_ASIMDEXT=1794,
ENC_UNALLOCATED_11_ASIMDINS=1795,
ENC_UNALLOCATED_11_ASIMDMISCFP16=1796,
ENC_UNALLOCATED_11_ASIMDPERM=1797,
ENC_UNALLOCATED_11_ASIMDSAME2=1798,
ENC_UNALLOCATED_11_ASIMDTBL=1799,
ENC_UNALLOCATED_11_ASISDDIFF=1800,
ENC_UNALLOCATED_11_ASISDELEM=1801,
ENC_UNALLOCATED_11_ASISDLSO=1802,
ENC_UNALLOCATED_11_ASISDLSOP=1803,
ENC_UNALLOCATED_11_ASISDMISC=1804,
ENC_UNALLOCATED_11_ASISDMISCFP16=1805,
ENC_UNALLOCATED_11_ASISDPAIR=1806,
ENC_UNALLOCATED_11_ASISDSAME=1807,
ENC_UNALLOCATED_11_ASISDSAME2=1808,
ENC_UNALLOCATED_11_ASISDSHF=1809,
ENC_UNALLOCATED_11_BARRIERS=1810,
ENC_UNALLOCATED_11_BITFIELD=1811,
ENC_UNALLOCATED_11_CONDBRANCH=1812,
ENC_UNALLOCATED_11_CONDCMP_IMM=1813,
ENC_UNALLOCATED_11_CONDCMP_REG=1814,
ENC_UNALLOCATED_11_CONDSEL=1815,
ENC_UNALLOCATED_11_CRYPTOAES=1816,
ENC_UNALLOCATED_11_CRYPTOSHA2=1817,
ENC_UNALLOCATED_11_CRYPTOSHA3=1818,
ENC_UNALLOCATED_11_CRYPTOSHA512_2=1819,
ENC_UNALLOCATED_11_DP_1SRC=1820,
ENC_UNALLOCATED_11_DP_2SRC=1821,
ENC_UNALLOCATED_11_EXTRACT=1822,
ENC_UNALLOCATED_11_FLOAT2FIX=1823,
ENC_UNALLOCATED_11_FLOAT2INT=1824,
ENC_UNALLOCATED_11_FLOATCCMP=1825,
ENC_UNALLOCATED_11_FLOATCMP=1826,
ENC_UNALLOCATED_11_FLOATDP1=1827,
ENC_UNALLOCATED_11_FLOATDP2=1828,
ENC_UNALLOCATED_11_FLOATDP3=1829,
ENC_UNALLOCATED_11_FLOATIMM=1830,
ENC_UNALLOCATED_11_FLOATSEL=1831,
ENC_UNALLOCATED_11_RMIF=1832,
ENC_UNALLOCATED_11_SETF=1833,
ENC_UNALLOCATED_11_SYSTEMRESULT=1834,
ENC_UNALLOCATED_120=1835,
ENC_UNALLOCATED_121=1836,
ENC_UNALLOCATED_122=1837,
ENC_UNALLOCATED_123=1838,
ENC_UNALLOCATED_124=1839,
ENC_UNALLOCATED_125=1840,
ENC_UNALLOCATED_126=1841,
ENC_UNALLOCATED_127=1842,
ENC_UNALLOCATED_128=1843,
ENC_UNALLOCATED_129=1844,
ENC_UNALLOCATED_12_ADDSUB_EXT=1845,
ENC_UNALLOCATED_12_ASIMDALL=1846,
ENC_UNALLOCATED_12_ASIMDEXT=1847,
ENC_UNALLOCATED_12_ASIMDINS=1848,
ENC_UNALLOCATED_12_ASIMDMISCFP16=1849,
ENC_UNALLOCATED_12_ASIMDTBL=1850,
ENC_UNALLOCATED_12_ASISDDIFF=1851,
ENC_UNALLOCATED_12_ASISDLSE=1852,
ENC_UNALLOCATED_12_ASISDMISC=1853,
ENC_UNALLOCATED_12_ASISDMISCFP16=1854,
ENC_UNALLOCATED_12_ASISDONE=1855,
ENC_UNALLOCATED_12_ASISDPAIR=1856,
ENC_UNALLOCATED_12_BARRIERS=1857,
ENC_UNALLOCATED_12_BITFIELD=1858,
ENC_UNALLOCATED_12_BRANCH_REG=1859,
ENC_UNALLOCATED_12_CONDBRANCH=1860,
ENC_UNALLOCATED_12_CONDCMP_IMM=1861,
ENC_UNALLOCATED_12_CONDCMP_REG=1862,
ENC_UNALLOCATED_12_CRYPTOAES=1863,
ENC_UNALLOCATED_12_CRYPTOSHA2=1864,
ENC_UNALLOCATED_12_CRYPTOSHA3=1865,
ENC_UNALLOCATED_12_DP_1SRC=1866,
ENC_UNALLOCATED_12_EXTRACT=1867,
ENC_UNALLOCATED_12_FLOAT2FIX=1868,
ENC_UNALLOCATED_12_FLOAT2INT=1869,
ENC_UNALLOCATED_12_FLOATCCMP=1870,
ENC_UNALLOCATED_12_FLOATCMP=1871,
ENC_UNALLOCATED_12_FLOATDP1=1872,
ENC_UNALLOCATED_12_FLOATDP2=1873,
ENC_UNALLOCATED_12_FLOATDP3=1874,
ENC_UNALLOCATED_12_FLOATIMM=1875,
ENC_UNALLOCATED_12_FLOATSEL=1876,
ENC_UNALLOCATED_12_LDSTNAPAIR_OFFS=1877,
ENC_UNALLOCATED_12_SYSTEMINSTRSWITHREG=1878,
ENC_UNALLOCATED_12_SYSTEMRESULT=1879,
ENC_UNALLOCATED_130=1880,
ENC_UNALLOCATED_131=1881,
ENC_UNALLOCATED_132=1882,
ENC_UNALLOCATED_133=1883,
ENC_UNALLOCATED_134=1884,
ENC_UNALLOCATED_135=1885,
ENC_UNALLOCATED_136=1886,
ENC_UNALLOCATED_137=1887,
ENC_UNALLOCATED_138=1888,
ENC_UNALLOCATED_139=1889,
ENC_UNALLOCATED_13_ADDSUB_EXT=1890,
ENC_UNALLOCATED_13_ASIMDELEM=1891,
ENC_UNALLOCATED_13_ASIMDMISCFP16=1892,
ENC_UNALLOCATED_13_ASIMDSAME2=1893,
ENC_UNALLOCATED_13_ASIMDSHF=1894,
ENC_UNALLOCATED_13_ASISDDIFF=1895,
ENC_UNALLOCATED_13_ASISDELEM=1896,
ENC_UNALLOCATED_13_ASISDLSEP=1897,
ENC_UNALLOCATED_13_ASISDMISCFP16=1898,
ENC_UNALLOCATED_13_ASISDONE=1899,
ENC_UNALLOCATED_13_ASISDSAME2=1900,
ENC_UNALLOCATED_13_ASISDSAMEFP16=1901,
ENC_UNALLOCATED_13_BRANCH_REG=1902,
ENC_UNALLOCATED_13_CRYPTOAES=1903,
ENC_UNALLOCATED_13_DP_1SRC=1904,
ENC_UNALLOCATED_13_EXTRACT=1905,
ENC_UNALLOCATED_13_FLOAT2FIX=1906,
ENC_UNALLOCATED_13_FLOAT2INT=1907,
ENC_UNALLOCATED_13_FLOATCMP=1908,
ENC_UNALLOCATED_13_FLOATDP2=1909,
ENC_UNALLOCATED_13_FLOATIMM=1910,
ENC_UNALLOCATED_13_LDSTTAGS=1911,
ENC_UNALLOCATED_13_MOVEWIDE=1912,
ENC_UNALLOCATED_13_RMIF=1913,
ENC_UNALLOCATED_13_SYSTEMINSTRSWITHREG=1914,
ENC_UNALLOCATED_13_SYSTEMRESULT=1915,
ENC_UNALLOCATED_140=1916,
ENC_UNALLOCATED_141=1917,
ENC_UNALLOCATED_142=1918,
ENC_UNALLOCATED_143=1919,
ENC_UNALLOCATED_144=1920,
ENC_UNALLOCATED_145=1921,
ENC_UNALLOCATED_146=1922,
ENC_UNALLOCATED_147=1923,
ENC_UNALLOCATED_148=1924,
ENC_UNALLOCATED_149=1925,
ENC_UNALLOCATED_14_ADDSUB_IMMTAGS=1926,
ENC_UNALLOCATED_14_ASIMDMISC=1927,
ENC_UNALLOCATED_14_ASISDELEM=1928,
ENC_UNALLOCATED_14_ASISDLSE=1929,
ENC_UNALLOCATED_14_ASISDLSO=1930,
ENC_UNALLOCATED_14_ASISDLSOP=1931,
ENC_UNALLOCATED_14_ASISDONE=1932,
ENC_UNALLOCATED_14_ASISDSAME=1933,
ENC_UNALLOCATED_14_ASISDSAMEFP16=1934,
ENC_UNALLOCATED_14_ASISDSHF=1935,
ENC_UNALLOCATED_14_BARRIERS=1936,
ENC_UNALLOCATED_14_CRYPTO4=1937,
ENC_UNALLOCATED_14_DP_1SRC=1938,
ENC_UNALLOCATED_14_DP_2SRC=1939,
ENC_UNALLOCATED_14_DP_3SRC=1940,
ENC_UNALLOCATED_14_FLOAT2FIX=1941,
ENC_UNALLOCATED_14_FLOAT2INT=1942,
ENC_UNALLOCATED_14_FLOATCMP=1943,
ENC_UNALLOCATED_14_FLOATDP2=1944,
ENC_UNALLOCATED_14_FLOATIMM=1945,
ENC_UNALLOCATED_14_LDST_PAC=1946,
ENC_UNALLOCATED_14_RMIF=1947,
ENC_UNALLOCATED_14_SETF=1948,
ENC_UNALLOCATED_14_SYSTEMINSTRSWITHREG=1949,
ENC_UNALLOCATED_150=1950,
ENC_UNALLOCATED_151=1951,
ENC_UNALLOCATED_152=1952,
ENC_UNALLOCATED_153=1953,
ENC_UNALLOCATED_154=1954,
ENC_UNALLOCATED_154_MEMOP=1955,
ENC_UNALLOCATED_155=1956,
ENC_UNALLOCATED_155_MEMOP=1957,
ENC_UNALLOCATED_156=1958,
ENC_UNALLOCATED_156_MEMOP=1959,
ENC_UNALLOCATED_157=1960,
ENC_UNALLOCATED_158=1961,
ENC_UNALLOCATED_158_MEMOP=1962,
ENC_UNALLOCATED_159=1963,
ENC_UNALLOCATED_159_MEMOP=1964,
ENC_UNALLOCATED_15_ASIMDALL=1965,
ENC_UNALLOCATED_15_ASIMDINS=1966,
ENC_UNALLOCATED_15_ASIMDPERM=1967,
ENC_UNALLOCATED_15_ASISDDIFF=1968,
ENC_UNALLOCATED_15_ASISDMISC=1969,
ENC_UNALLOCATED_15_ASISDONE=1970,
ENC_UNALLOCATED_15_ASISDSAME=1971,
ENC_UNALLOCATED_15_ASISDSAME2=1972,
ENC_UNALLOCATED_15_BRANCH_REG=1973,
ENC_UNALLOCATED_15_DP_1SRC=1974,
ENC_UNALLOCATED_15_DP_2SRC=1975,
ENC_UNALLOCATED_15_EXCEPTION=1976,
ENC_UNALLOCATED_15_FLOAT2FIX=1977,
ENC_UNALLOCATED_15_FLOATCMP=1978,
ENC_UNALLOCATED_15_FLOATDP2=1979,
ENC_UNALLOCATED_15_FLOATIMM=1980,
ENC_UNALLOCATED_15_LDST_PAC=1981,
ENC_UNALLOCATED_15_LDSTTAGS=1982,
ENC_UNALLOCATED_15_SETF=1983,
ENC_UNALLOCATED_160=1984,
ENC_UNALLOCATED_160_MEMOP=1985,
ENC_UNALLOCATED_161=1986,
ENC_UNALLOCATED_161_MEMOP=1987,
ENC_UNALLOCATED_162=1988,
ENC_UNALLOCATED_162_MEMOP=1989,
ENC_UNALLOCATED_163=1990,
ENC_UNALLOCATED_163_MEMOP=1991,
ENC_UNALLOCATED_164=1992,
ENC_UNALLOCATED_165=1993,
ENC_UNALLOCATED_165_MEMOP=1994,
ENC_UNALLOCATED_166=1995,
ENC_UNALLOCATED_166_MEMOP=1996,
ENC_UNALLOCATED_167=1997,
ENC_UNALLOCATED_167_MEMOP=1998,
ENC_UNALLOCATED_168=1999,
ENC_UNALLOCATED_168_MEMOP=2000,
ENC_UNALLOCATED_169=2001,
ENC_UNALLOCATED_169_MEMOP=2002,
ENC_UNALLOCATED_16_ASIMDALL=2003,
ENC_UNALLOCATED_16_ASIMDELEM=2004,
ENC_UNALLOCATED_16_ASIMDSAMEFP16=2005,
ENC_UNALLOCATED_16_ASIMDSHF=2006,
ENC_UNALLOCATED_16_ASISDDIFF=2007,
ENC_UNALLOCATED_16_ASISDELEM=2008,
ENC_UNALLOCATED_16_ASISDLSE=2009,
ENC_UNALLOCATED_16_ASISDLSEP=2010,
ENC_UNALLOCATED_16_ASISDLSO=2011,
ENC_UNALLOCATED_16_ASISDLSOP=2012,
ENC_UNALLOCATED_16_ASISDMISC=2013,
ENC_UNALLOCATED_16_ASISDSAME2=2014,
ENC_UNALLOCATED_16_CRYPTOSHA2=2015,
ENC_UNALLOCATED_16_DP_1SRC=2016,
ENC_UNALLOCATED_16_DP_3SRC=2017,
ENC_UNALLOCATED_16_EXCEPTION=2018,
ENC_UNALLOCATED_16_EXTRACT=2019,
ENC_UNALLOCATED_16_FLOAT2FIX=2020,
ENC_UNALLOCATED_16_FLOATCMP=2021,
ENC_UNALLOCATED_16_FLOATIMM=2022,
ENC_UNALLOCATED_16_SETF=2023,
ENC_UNALLOCATED_170=2024,
ENC_UNALLOCATED_170_MEMOP=2025,
ENC_UNALLOCATED_171=2026,
ENC_UNALLOCATED_172=2027,
ENC_UNALLOCATED_172_MEMOP=2028,
ENC_UNALLOCATED_173=2029,
ENC_UNALLOCATED_173_MEMOP=2030,
ENC_UNALLOCATED_174=2031,
ENC_UNALLOCATED_174_MEMOP=2032,
ENC_UNALLOCATED_175=2033,
ENC_UNALLOCATED_175_MEMOP=2034,
ENC_UNALLOCATED_176=2035,
ENC_UNALLOCATED_177=2036,
ENC_UNALLOCATED_178=2037,
ENC_UNALLOCATED_179=2038,
ENC_UNALLOCATED_17_ASIMDELEM=2039,
ENC_UNALLOCATED_17_ASIMDINS=2040,
ENC_UNALLOCATED_17_ASIMDSAME2=2041,
ENC_UNALLOCATED_17_ASISDELEM=2042,
ENC_UNALLOCATED_17_ASISDONE=2043,
ENC_UNALLOCATED_17_ASISDSAME2=2044,
ENC_UNALLOCATED_17_ASISDSAMEFP16=2045,
ENC_UNALLOCATED_17_ASISDSHF=2046,
ENC_UNALLOCATED_17_BARRIERS=2047,
ENC_UNALLOCATED_17_BRANCH_REG=2048,
ENC_UNALLOCATED_17_CRYPTOSHA2=2049,
ENC_UNALLOCATED_17_DP_1SRC=2050,
ENC_UNALLOCATED_17_EXTRACT=2051,
ENC_UNALLOCATED_17_FLOAT2FIX=2052,
ENC_UNALLOCATED_17_FLOATCMP=2053,
ENC_UNALLOCATED_17_FLOATDP1=2054,
ENC_UNALLOCATED_17_FLOATIMM=2055,
ENC_UNALLOCATED_17_LOADLIT=2056,
ENC_UNALLOCATED_17_SETF=2057,
ENC_UNALLOCATED_180=2058,
ENC_UNALLOCATED_180_MEMOP=2059,
ENC_UNALLOCATED_181=2060,
ENC_UNALLOCATED_181_MEMOP=2061,
ENC_UNALLOCATED_182=2062,
ENC_UNALLOCATED_182_MEMOP=2063,
ENC_UNALLOCATED_183=2064,
ENC_UNALLOCATED_183_MEMOP=2065,
ENC_UNALLOCATED_184=2066,
ENC_UNALLOCATED_185=2067,
ENC_UNALLOCATED_185_MEMOP=2068,
ENC_UNALLOCATED_186=2069,
ENC_UNALLOCATED_186_MEMOP=2070,
ENC_UNALLOCATED_187=2071,
ENC_UNALLOCATED_187_MEMOP=2072,
ENC_UNALLOCATED_188=2073,
ENC_UNALLOCATED_188_MEMOP=2074,
ENC_UNALLOCATED_189=2075,
ENC_UNALLOCATED_189_MEMOP=2076,
ENC_UNALLOCATED_18_ASIMDINS=2077,
ENC_UNALLOCATED_18_ASIMDSAMEFP16=2078,
ENC_UNALLOCATED_18_ASISDDIFF=2079,
ENC_UNALLOCATED_18_ASISDLSO=2080,
ENC_UNALLOCATED_18_ASISDLSOP=2081,
ENC_UNALLOCATED_18_BARRIERS=2082,
ENC_UNALLOCATED_18_BRANCH_REG=2083,
ENC_UNALLOCATED_18_CRYPTOAES=2084,
ENC_UNALLOCATED_18_CRYPTOSHA2=2085,
ENC_UNALLOCATED_18_CRYPTOSHA512_3=2086,
ENC_UNALLOCATED_18_DP_1SRC=2087,
ENC_UNALLOCATED_18_DP_3SRC=2088,
ENC_UNALLOCATED_18_EXCEPTION=2089,
ENC_UNALLOCATED_18_EXTRACT=2090,
ENC_UNALLOCATED_190=2091,
ENC_UNALLOCATED_191=2092,
ENC_UNALLOCATED_192=2093,
ENC_UNALLOCATED_193=2094,
ENC_UNALLOCATED_194=2095,
ENC_UNALLOCATED_195=2096,
ENC_UNALLOCATED_196=2097,
ENC_UNALLOCATED_197=2098,
ENC_UNALLOCATED_198=2099,
ENC_UNALLOCATED_199=2100,
ENC_UNALLOCATED_19_ASIMDALL=2101,
ENC_UNALLOCATED_19_ASIMDMISCFP16=2102,
ENC_UNALLOCATED_19_ASIMDSAME2=2103,
ENC_UNALLOCATED_19_ASIMDSHF=2104,
ENC_UNALLOCATED_19_ASISDDIFF=2105,
ENC_UNALLOCATED_19_ASISDELEM=2106,
ENC_UNALLOCATED_19_ASISDLSEP=2107,
ENC_UNALLOCATED_19_ASISDMISCFP16=2108,
ENC_UNALLOCATED_19_ASISDPAIR=2109,
ENC_UNALLOCATED_19_ASISDSAMEFP16=2110,
ENC_UNALLOCATED_19_BARRIERS=2111,
ENC_UNALLOCATED_19_BITFIELD=2112,
ENC_UNALLOCATED_19_BRANCH_REG=2113,
ENC_UNALLOCATED_19_CRYPTOAES=2114,
ENC_UNALLOCATED_19_CRYPTOSHA2=2115,
ENC_UNALLOCATED_19_DP_1SRC=2116,
ENC_UNALLOCATED_19_EXCEPTION=2117,
ENC_UNALLOCATED_19_FLOATDP1=2118,
ENC_UNALLOCATED_200=2119,
ENC_UNALLOCATED_201=2120,
ENC_UNALLOCATED_202=2121,
ENC_UNALLOCATED_203=2122,
ENC_UNALLOCATED_204=2123,
ENC_UNALLOCATED_205=2124,
ENC_UNALLOCATED_206=2125,
ENC_UNALLOCATED_207=2126,
ENC_UNALLOCATED_208=2127,
ENC_UNALLOCATED_209=2128,
ENC_UNALLOCATED_20_ASIMDSAME2=2129,
ENC_UNALLOCATED_20_ASISDELEM=2130,
ENC_UNALLOCATED_20_ASISDLSE=2131,
ENC_UNALLOCATED_20_ASISDMISCFP16=2132,
ENC_UNALLOCATED_20_ASISDPAIR=2133,
ENC_UNALLOCATED_20_ASISDSHF=2134,
ENC_UNALLOCATED_20_BARRIERS=2135,
ENC_UNALLOCATED_20_BRANCH_REG=2136,
ENC_UNALLOCATED_20_CRYPTOSHA3=2137,
ENC_UNALLOCATED_20_DP_1SRC=2138,
ENC_UNALLOCATED_20_DP_2SRC=2139,
ENC_UNALLOCATED_20_DP_3SRC=2140,
ENC_UNALLOCATED_210=2141,
ENC_UNALLOCATED_211=2142,
ENC_UNALLOCATED_212=2143,
ENC_UNALLOCATED_213=2144,
ENC_UNALLOCATED_214=2145,
ENC_UNALLOCATED_215=2146,
ENC_UNALLOCATED_216=2147,
ENC_UNALLOCATED_217=2148,
ENC_UNALLOCATED_218=2149,
ENC_UNALLOCATED_219=2150,
ENC_UNALLOCATED_21_ASIMDALL=2151,
ENC_UNALLOCATED_21_ASIMDINS=2152,
ENC_UNALLOCATED_21_ASIMDSAME2=2153,
ENC_UNALLOCATED_21_ASISDDIFF=2154,
ENC_UNALLOCATED_21_ASISDLSO=2155,
ENC_UNALLOCATED_21_ASISDLSOP=2156,
ENC_UNALLOCATED_21_ASISDMISCFP16=2157,
ENC_UNALLOCATED_21_ASISDSAMEFP16=2158,
ENC_UNALLOCATED_21_BRANCH_REG=2159,
ENC_UNALLOCATED_21_DP_1SRC=2160,
ENC_UNALLOCATED_21_DP_2SRC=2161,
ENC_UNALLOCATED_21_DP_3SRC=2162,
ENC_UNALLOCATED_21_EXCEPTION=2163,
ENC_UNALLOCATED_21_LDAPSTL_UNSCALED=2164,
ENC_UNALLOCATED_21_LDST_IMMPOST=2165,
ENC_UNALLOCATED_21_LDST_IMMPRE=2166,
ENC_UNALLOCATED_21_LDST_UNPRIV=2167,
ENC_UNALLOCATED_21_LDSTNAPAIR_OFFS=2168,
ENC_UNALLOCATED_220=2169,
ENC_UNALLOCATED_221=2170,
ENC_UNALLOCATED_222=2171,
ENC_UNALLOCATED_223=2172,
ENC_UNALLOCATED_224=2173,
ENC_UNALLOCATED_225=2174,
ENC_UNALLOCATED_226=2175,
ENC_UNALLOCATED_227=2176,
ENC_UNALLOCATED_228=2177,
ENC_UNALLOCATED_229=2178,
ENC_UNALLOCATED_22_ASIMDMISCFP16=2179,
ENC_UNALLOCATED_22_ASIMDSAME2=2180,
ENC_UNALLOCATED_22_ASIMDSHF=2181,
ENC_UNALLOCATED_22_ASISDDIFF=2182,
ENC_UNALLOCATED_22_ASISDELEM=2183,
ENC_UNALLOCATED_22_ASISDLSE=2184,
ENC_UNALLOCATED_22_ASISDMISCFP16=2185,
ENC_UNALLOCATED_22_DP_3SRC=2186,
ENC_UNALLOCATED_22_EXCEPTION=2187,
ENC_UNALLOCATED_22_LDSTPAIR_OFF=2188,
ENC_UNALLOCATED_22_LDSTPAIR_POST=2189,
ENC_UNALLOCATED_22_LDSTPAIR_PRE=2190,
ENC_UNALLOCATED_230=2191,
ENC_UNALLOCATED_231=2192,
ENC_UNALLOCATED_232=2193,
ENC_UNALLOCATED_233=2194,
ENC_UNALLOCATED_234=2195,
ENC_UNALLOCATED_235=2196,
ENC_UNALLOCATED_236=2197,
ENC_UNALLOCATED_237=2198,
ENC_UNALLOCATED_238=2199,
ENC_UNALLOCATED_239=2200,
ENC_UNALLOCATED_23_ASIMDSHF=2201,
ENC_UNALLOCATED_23_ASISDELEM=2202,
ENC_UNALLOCATED_23_ASISDLSE=2203,
ENC_UNALLOCATED_23_ASISDLSO=2204,
ENC_UNALLOCATED_23_ASISDLSOP=2205,
ENC_UNALLOCATED_23_ASISDSAMEFP16=2206,
ENC_UNALLOCATED_23_ASISDSHF=2207,
ENC_UNALLOCATED_23_BRANCH_REG=2208,
ENC_UNALLOCATED_23_DP_3SRC=2209,
ENC_UNALLOCATED_23_EXCEPTION=2210,
ENC_UNALLOCATED_240=2211,
ENC_UNALLOCATED_241=2212,
ENC_UNALLOCATED_242=2213,
ENC_UNALLOCATED_243=2214,
ENC_UNALLOCATED_244=2215,
ENC_UNALLOCATED_245=2216,
ENC_UNALLOCATED_246=2217,
ENC_UNALLOCATED_247=2218,
ENC_UNALLOCATED_248=2219,
ENC_UNALLOCATED_249=2220,
ENC_UNALLOCATED_24_ASIMDALL=2221,
ENC_UNALLOCATED_24_ASIMDINS=2222,
ENC_UNALLOCATED_24_ASIMDMISC=2223,
ENC_UNALLOCATED_24_ASISDMISC=2224,
ENC_UNALLOCATED_24_ASISDSHF=2225,
ENC_UNALLOCATED_24_BRANCH_REG=2226,
ENC_UNALLOCATED_24_DP_2SRC=2227,
ENC_UNALLOCATED_24_EXCEPTION=2228,
ENC_UNALLOCATED_24_LDAPSTL_UNSCALED=2229,
ENC_UNALLOCATED_24_LDST_IMMPOST=2230,
ENC_UNALLOCATED_24_LDST_IMMPRE=2231,
ENC_UNALLOCATED_24_LDST_POS=2232,
ENC_UNALLOCATED_24_LDST_UNPRIV=2233,
ENC_UNALLOCATED_24_LDST_UNSCALED=2234,
ENC_UNALLOCATED_250=2235,
ENC_UNALLOCATED_251=2236,
ENC_UNALLOCATED_252=2237,
ENC_UNALLOCATED_253=2238,
ENC_UNALLOCATED_254=2239,
ENC_UNALLOCATED_255=2240,
ENC_UNALLOCATED_256=2241,
ENC_UNALLOCATED_257=2242,
ENC_UNALLOCATED_258=2243,
ENC_UNALLOCATED_259=2244,
ENC_UNALLOCATED_25_ASIMDELEM=2245,
ENC_UNALLOCATED_25_ASIMDSAMEFP16=2246,
ENC_UNALLOCATED_25_ASIMDSHF=2247,
ENC_UNALLOCATED_25_ASISDELEM=2248,
ENC_UNALLOCATED_25_ASISDLSE=2249,
ENC_UNALLOCATED_25_ASISDLSO=2250,
ENC_UNALLOCATED_25_ASISDLSOP=2251,
ENC_UNALLOCATED_25_ASISDPAIR=2252,
ENC_UNALLOCATED_25_ASISDSAMEFP16=2253,
ENC_UNALLOCATED_25_BARRIERS=2254,
ENC_UNALLOCATED_25_DP_2SRC=2255,
ENC_UNALLOCATED_25_DP_3SRC=2256,
ENC_UNALLOCATED_25_LDAPSTL_UNSCALED=2257,
ENC_UNALLOCATED_25_LDST_UNPRIV=2258,
ENC_UNALLOCATED_260=2259,
ENC_UNALLOCATED_261=2260,
ENC_UNALLOCATED_262=2261,
ENC_UNALLOCATED_263=2262,
ENC_UNALLOCATED_264=2263,
ENC_UNALLOCATED_265=2264,
ENC_UNALLOCATED_266=2265,
ENC_UNALLOCATED_267=2266,
ENC_UNALLOCATED_268=2267,
ENC_UNALLOCATED_269=2268,
ENC_UNALLOCATED_26_ASIMDALL=2269,
ENC_UNALLOCATED_26_ASIMDELEM=2270,
ENC_UNALLOCATED_26_ASIMDIMM=2271,
ENC_UNALLOCATED_26_ASIMDMISCFP16=2272,
ENC_UNALLOCATED_26_ASIMDSAME2=2273,
ENC_UNALLOCATED_26_ASIMDSAMEFP16=2274,
ENC_UNALLOCATED_26_ASISDELEM=2275,
ENC_UNALLOCATED_26_ASISDLSEP=2276,
ENC_UNALLOCATED_26_ASISDLSO=2277,
ENC_UNALLOCATED_26_ASISDLSOP=2278,
ENC_UNALLOCATED_26_ASISDPAIR=2279,
ENC_UNALLOCATED_26_ASISDSHF=2280,
ENC_UNALLOCATED_26_BRANCH_REG=2281,
ENC_UNALLOCATED_26_FLOATDP1=2282,
ENC_UNALLOCATED_270=2283,
ENC_UNALLOCATED_271=2284,
ENC_UNALLOCATED_272=2285,
ENC_UNALLOCATED_273=2286,
ENC_UNALLOCATED_274=2287,
ENC_UNALLOCATED_275=2288,
ENC_UNALLOCATED_276=2289,
ENC_UNALLOCATED_277=2290,
ENC_UNALLOCATED_278=2291,
ENC_UNALLOCATED_279=2292,
ENC_UNALLOCATED_27_ASIMDALL=2293,
ENC_UNALLOCATED_27_ASIMDELEM=2294,
ENC_UNALLOCATED_27_ASIMDIMM=2295,
ENC_UNALLOCATED_27_ASIMDSAME2=2296,
ENC_UNALLOCATED_27_ASISDLSE=2297,
ENC_UNALLOCATED_27_ASISDMISC=2298,
ENC_UNALLOCATED_27_ASISDPAIR=2299,
ENC_UNALLOCATED_27_ASISDSAMEFP16=2300,
ENC_UNALLOCATED_27_DP_3SRC=2301,
ENC_UNALLOCATED_280=2302,
ENC_UNALLOCATED_281=2303,
ENC_UNALLOCATED_282=2304,
ENC_UNALLOCATED_283=2305,
ENC_UNALLOCATED_284=2306,
ENC_UNALLOCATED_285=2307,
ENC_UNALLOCATED_286=2308,
ENC_UNALLOCATED_287=2309,
ENC_UNALLOCATED_288=2310,
ENC_UNALLOCATED_289=2311,
ENC_UNALLOCATED_28_ASIMDIMM=2312,
ENC_UNALLOCATED_28_ASIMDSAME2=2313,
ENC_UNALLOCATED_28_ASIMDSHF=2314,
ENC_UNALLOCATED_28_ASISDELEM=2315,
ENC_UNALLOCATED_28_BRANCH_REG=2316,
ENC_UNALLOCATED_28_DP_1SRC=2317,
ENC_UNALLOCATED_28_EXCEPTION=2318,
ENC_UNALLOCATED_28_LDST_REGOFF=2319,
ENC_UNALLOCATED_290=2320,
ENC_UNALLOCATED_291=2321,
ENC_UNALLOCATED_292=2322,
ENC_UNALLOCATED_293=2323,
ENC_UNALLOCATED_294=2324,
ENC_UNALLOCATED_295=2325,
ENC_UNALLOCATED_296=2326,
ENC_UNALLOCATED_297=2327,
ENC_UNALLOCATED_298=2328,
ENC_UNALLOCATED_299=2329,
ENC_UNALLOCATED_29_ASIMDALL=2330,
ENC_UNALLOCATED_29_ASIMDELEM=2331,
ENC_UNALLOCATED_29_ASIMDIMM=2332,
ENC_UNALLOCATED_29_ASIMDSAMEFP16=2333,
ENC_UNALLOCATED_29_ASIMDSHF=2334,
ENC_UNALLOCATED_29_ASISDELEM=2335,
ENC_UNALLOCATED_29_ASISDLSE=2336,
ENC_UNALLOCATED_29_ASISDLSEP=2337,
ENC_UNALLOCATED_29_ASISDLSO=2338,
ENC_UNALLOCATED_29_ASISDLSOP=2339,
ENC_UNALLOCATED_29_ASISDPAIR=2340,
ENC_UNALLOCATED_29_ASISDSHF=2341,
ENC_UNALLOCATED_29_BRANCH_REG=2342,
ENC_UNALLOCATED_29_DP_3SRC=2343,
ENC_UNALLOCATED_29_EXCEPTION=2344,
ENC_UNALLOCATED_300=2345,
ENC_UNALLOCATED_301=2346,
ENC_UNALLOCATED_302=2347,
ENC_UNALLOCATED_30_ASIMDIMM=2348,
ENC_UNALLOCATED_30_ASISDLSEP=2349,
ENC_UNALLOCATED_30_ASISDPAIR=2350,
ENC_UNALLOCATED_30_ASISDSAME=2351,
ENC_UNALLOCATED_30_ASISDSHF=2352,
ENC_UNALLOCATED_30_BRANCH_REG=2353,
ENC_UNALLOCATED_30_DP_3SRC=2354,
ENC_UNALLOCATED_30_EXCEPTION=2355,
ENC_UNALLOCATED_31_ASIMDIMM=2356,
ENC_UNALLOCATED_31_ASIMDSAME2=2357,
ENC_UNALLOCATED_31_ASIMDSAMEFP16=2358,
ENC_UNALLOCATED_31_ASIMDSHF=2359,
ENC_UNALLOCATED_31_ASISDLSO=2360,
ENC_UNALLOCATED_31_ASISDLSOP=2361,
ENC_UNALLOCATED_31_BRANCH_REG=2362,
ENC_UNALLOCATED_31_DP_3SRC=2363,
ENC_UNALLOCATED_31_EXCEPTION=2364,
ENC_UNALLOCATED_32_ASIMDALL=2365,
ENC_UNALLOCATED_32_ASIMDDIFF=2366,
ENC_UNALLOCATED_32_ASIMDELEM=2367,
ENC_UNALLOCATED_32_ASIMDSAME2=2368,
ENC_UNALLOCATED_32_ASISDELEM=2369,
ENC_UNALLOCATED_32_ASISDSHF=2370,
ENC_UNALLOCATED_32_BRANCH_REG=2371,
ENC_UNALLOCATED_32_DP_3SRC=2372,
ENC_UNALLOCATED_32_EXCEPTION=2373,
ENC_UNALLOCATED_33_ASIMDELEM=2374,
ENC_UNALLOCATED_33_ASIMDSAMEFP16=2375,
ENC_UNALLOCATED_33_ASISDLSE=2376,
ENC_UNALLOCATED_33_ASISDLSEP=2377,
ENC_UNALLOCATED_33_ASISDLSO=2378,
ENC_UNALLOCATED_33_ASISDLSOP=2379,
ENC_UNALLOCATED_33_ASISDMISC=2380,
ENC_UNALLOCATED_33_ASISDMISCFP16=2381,
ENC_UNALLOCATED_33_FLOATDP1=2382,
ENC_UNALLOCATED_34_ASIMDALL=2383,
ENC_UNALLOCATED_34_ASIMDDIFF=2384,
ENC_UNALLOCATED_34_ASIMDMISC=2385,
ENC_UNALLOCATED_34_ASIMDSAME2=2386,
ENC_UNALLOCATED_34_ASIMDSHF=2387,
ENC_UNALLOCATED_34_ASISDLSO=2388,
ENC_UNALLOCATED_34_ASISDLSOP=2389,
ENC_UNALLOCATED_34_ASISDMISC=2390,
ENC_UNALLOCATED_34_BRANCH_REG=2391,
ENC_UNALLOCATED_34_DP_1SRC=2392,
ENC_UNALLOCATED_34_DP_2SRC=2393,
ENC_UNALLOCATED_34_FLOATDP1=2394,
ENC_UNALLOCATED_35_ASIMDALL=2395,
ENC_UNALLOCATED_35_ASIMDSAME2=2396,
ENC_UNALLOCATED_35_ASISDELEM=2397,
ENC_UNALLOCATED_35_ASISDLSE=2398,
ENC_UNALLOCATED_35_ASISDMISC=2399,
ENC_UNALLOCATED_35_ASISDSAME=2400,
ENC_UNALLOCATED_35_ASISDSHF=2401,
ENC_UNALLOCATED_35_BRANCH_REG=2402,
ENC_UNALLOCATED_35_DP_2SRC=2403,
ENC_UNALLOCATED_35_LDST_IMMPOST=2404,
ENC_UNALLOCATED_35_LDST_IMMPRE=2405,
ENC_UNALLOCATED_35_LDST_POS=2406,
ENC_UNALLOCATED_35_LDST_UNSCALED=2407,
ENC_UNALLOCATED_36_ASISDLSE=2408,
ENC_UNALLOCATED_36_ASISDLSEP=2409,
ENC_UNALLOCATED_36_ASISDMISC=2410,
ENC_UNALLOCATED_36_ASISDSHF=2411,
ENC_UNALLOCATED_36_DP_2SRC=2412,
ENC_UNALLOCATED_36_LDST_IMMPOST=2413,
ENC_UNALLOCATED_36_LDST_IMMPRE=2414,
ENC_UNALLOCATED_36_LDST_POS=2415,
ENC_UNALLOCATED_36_LDST_UNSCALED=2416,
ENC_UNALLOCATED_37_ASIMDMISC=2417,
ENC_UNALLOCATED_37_ASISDELEM=2418,
ENC_UNALLOCATED_37_ASISDLSO=2419,
ENC_UNALLOCATED_37_ASISDLSOP=2420,
ENC_UNALLOCATED_37_BRANCH_REG=2421,
ENC_UNALLOCATED_38_ASIMDDIFF=2422,
ENC_UNALLOCATED_38_ASIMDSAME2=2423,
ENC_UNALLOCATED_38_ASISDMISC=2424,
ENC_UNALLOCATED_38_ASISDMISCFP16=2425,
ENC_UNALLOCATED_38_ASISDSHF=2426,
ENC_UNALLOCATED_38_DP_2SRC=2427,
ENC_UNALLOCATED_39_ASIMDALL=2428,
ENC_UNALLOCATED_39_ASIMDELEM=2429,
ENC_UNALLOCATED_39_ASISDELEM=2430,
ENC_UNALLOCATED_39_ASISDLSEP=2431,
ENC_UNALLOCATED_39_ASISDLSO=2432,
ENC_UNALLOCATED_39_ASISDLSOP=2433,
ENC_UNALLOCATED_39_ASISDMISCFP16=2434,
ENC_UNALLOCATED_39_BRANCH_REG=2435,
ENC_UNALLOCATED_39_FLOAT2INT=2436,
ENC_UNALLOCATED_40_ASIMDALL=2437,
ENC_UNALLOCATED_40_ASIMDDIFF=2438,
ENC_UNALLOCATED_40_ASIMDELEM=2439,
ENC_UNALLOCATED_40_BRANCH_REG=2440,
ENC_UNALLOCATED_40_FLOAT2INT=2441,
ENC_UNALLOCATED_40_FLOATDP1=2442,
ENC_UNALLOCATED_41_ASIMDDIFF=2443,
ENC_UNALLOCATED_41_ASIMDMISCFP16=2444,
ENC_UNALLOCATED_41_ASISDLSO=2445,
ENC_UNALLOCATED_41_ASISDLSOP=2446,
ENC_UNALLOCATED_41_ASISDMISC=2447,
ENC_UNALLOCATED_41_ASISDMISCFP16=2448,
ENC_UNALLOCATED_41_BRANCH_REG=2449,
ENC_UNALLOCATED_41_FLOAT2INT=2450,
ENC_UNALLOCATED_41_LDST_REGOFF=2451,
ENC_UNALLOCATED_42_ASIMDELEM=2452,
ENC_UNALLOCATED_42_ASIMDSAMEFP16=2453,
ENC_UNALLOCATED_42_ASISDELEM=2454,
ENC_UNALLOCATED_42_ASISDLSO=2455,
ENC_UNALLOCATED_42_ASISDLSOP=2456,
ENC_UNALLOCATED_42_ASISDMISC=2457,
ENC_UNALLOCATED_42_BRANCH_REG=2458,
ENC_UNALLOCATED_42_LDST_REGOFF=2459,
ENC_UNALLOCATED_43_ASIMDMISC=2460,
ENC_UNALLOCATED_43_ASISDELEM=2461,
ENC_UNALLOCATED_43_ASISDSAME=2462,
ENC_UNALLOCATED_43_BRANCH_REG=2463,
ENC_UNALLOCATED_44_ASIMDELEM=2464,
ENC_UNALLOCATED_44_ASISDMISC=2465,
ENC_UNALLOCATED_44_ASISDSHF=2466,
ENC_UNALLOCATED_44_BRANCH_REG=2467,
ENC_UNALLOCATED_45_ASIMDSHF=2468,
ENC_UNALLOCATED_45_ASISDLSO=2469,
ENC_UNALLOCATED_45_ASISDLSOP=2470,
ENC_UNALLOCATED_45_ASISDMISC=2471,
ENC_UNALLOCATED_45_ASISDSHF=2472,
ENC_UNALLOCATED_46_ASIMDMISC=2473,
ENC_UNALLOCATED_46_ASIMDMISCFP16=2474,
ENC_UNALLOCATED_46_ASIMDSHF=2475,
ENC_UNALLOCATED_46_ASISDLSEP=2476,
ENC_UNALLOCATED_46_ASISDMISC=2477,
ENC_UNALLOCATED_46_BRANCH_REG=2478,
ENC_UNALLOCATED_47_ASIMDELEM=2479,
ENC_UNALLOCATED_47_ASIMDMISCFP16=2480,
ENC_UNALLOCATED_47_ASIMDSHF=2481,
ENC_UNALLOCATED_47_BRANCH_REG=2482,
ENC_UNALLOCATED_47_DP_2SRC=2483,
ENC_UNALLOCATED_48_ASIMDMISCFP16=2484,
ENC_UNALLOCATED_48_ASISDLSO=2485,
ENC_UNALLOCATED_48_ASISDLSOP=2486,
ENC_UNALLOCATED_48_ASISDSHF=2487,
ENC_UNALLOCATED_48_BRANCH_REG=2488,
ENC_UNALLOCATED_48_DP_2SRC=2489,
ENC_UNALLOCATED_48_FLOATDP1=2490,
ENC_UNALLOCATED_49_ASIMDMISC=2491,
ENC_UNALLOCATED_49_ASISDLSEP=2492,
ENC_UNALLOCATED_49_ASISDLSO=2493,
ENC_UNALLOCATED_49_ASISDLSOP=2494,
ENC_UNALLOCATED_49_ASISDSAME=2495,
ENC_UNALLOCATED_49_ASISDSHF=2496,
ENC_UNALLOCATED_49_BRANCH_REG=2497,
ENC_UNALLOCATED_49_DP_2SRC=2498,
ENC_UNALLOCATED_50_ASIMDSHF=2499,
ENC_UNALLOCATED_50_ASISDLSEP=2500,
ENC_UNALLOCATED_50_DP_2SRC=2501,
ENC_UNALLOCATED_51_ASIMDSHF=2502,
ENC_UNALLOCATED_51_ASISDLSO=2503,
ENC_UNALLOCATED_51_ASISDLSOP=2504,
ENC_UNALLOCATED_51_ASISDSAME=2505,
ENC_UNALLOCATED_51_BRANCH_REG=2506,
ENC_UNALLOCATED_51_DP_2SRC=2507,
ENC_UNALLOCATED_52_BRANCH_REG=2508,
ENC_UNALLOCATED_53_ASIMDELEM=2509,
ENC_UNALLOCATED_53_ASIMDMISC=2510,
ENC_UNALLOCATED_53_BRANCH_REG=2511,
ENC_UNALLOCATED_54_ASISDLSO=2512,
ENC_UNALLOCATED_54_ASISDLSOP=2513,
ENC_UNALLOCATED_55_ASIMDELEM=2514,
ENC_UNALLOCATED_55_BRANCH_REG=2515,
ENC_UNALLOCATED_55_FLOATDP1=2516,
ENC_UNALLOCATED_56_ASISDLSO=2517,
ENC_UNALLOCATED_56_ASISDLSOP=2518,
ENC_UNALLOCATED_56_BRANCH_REG=2519,
ENC_UNALLOCATED_56_FLOATDP1=2520,
ENC_UNALLOCATED_57_ASIMDELEM=2521,
ENC_UNALLOCATED_57_ASIMDMISC=2522,
ENC_UNALLOCATED_57_ASISDMISC=2523,
ENC_UNALLOCATED_57_BRANCH_REG=2524,
ENC_UNALLOCATED_57_FLOATDP1=2525,
ENC_UNALLOCATED_58_ASIMDMISC=2526,
ENC_UNALLOCATED_58_ASISDLSO=2527,
ENC_UNALLOCATED_58_ASISDLSOP=2528,
ENC_UNALLOCATED_58_ASISDSAME=2529,
ENC_UNALLOCATED_58_BRANCH_REG=2530,
ENC_UNALLOCATED_59_ASISDLSO=2531,
ENC_UNALLOCATED_59_ASISDLSOP=2532,
ENC_UNALLOCATED_59_BRANCH_REG=2533,
ENC_UNALLOCATED_60_ASIMDMISC=2534,
ENC_UNALLOCATED_60_BRANCH_REG=2535,
ENC_UNALLOCATED_61_ASIMDMISC=2536,
ENC_UNALLOCATED_61_ASISDLSO=2537,
ENC_UNALLOCATED_61_ASISDLSOP=2538,
ENC_UNALLOCATED_61_ASISDSAME=2539,
ENC_UNALLOCATED_61_BRANCH_REG=2540,
ENC_UNALLOCATED_62_ASISDMISC=2541,
ENC_UNALLOCATED_63_ASISDMISC=2542,
ENC_UNALLOCATED_63_ASISDSAME=2543,
ENC_UNALLOCATED_63_BRANCH_REG=2544,
ENC_UNALLOCATED_64_ASIMDSAME=2545,
ENC_UNALLOCATED_64_ASISDLSO=2546,
ENC_UNALLOCATED_64_ASISDLSOP=2547,
ENC_UNALLOCATED_64_BRANCH_REG=2548,
ENC_UNALLOCATED_64_FLOATDP1=2549,
ENC_UNALLOCATED_65_ASIMDMISC=2550,
ENC_UNALLOCATED_65_ASISDMISC=2551,
ENC_UNALLOCATED_65_ASISDSAME=2552,
ENC_UNALLOCATED_65_BRANCH_REG=2553,
ENC_UNALLOCATED_66_ASISDLSO=2554,
ENC_UNALLOCATED_66_ASISDLSOP=2555,
ENC_UNALLOCATED_66_BRANCH_REG=2556,
ENC_UNALLOCATED_67_BRANCH_REG=2557,
ENC_UNALLOCATED_68_ASISDLSO=2558,
ENC_UNALLOCATED_68_ASISDLSOP=2559,
ENC_UNALLOCATED_68_BRANCH_REG=2560,
ENC_UNALLOCATED_68_FLOAT2INT=2561,
ENC_UNALLOCATED_69_ASISDLSO=2562,
ENC_UNALLOCATED_69_ASISDLSOP=2563,
ENC_UNALLOCATED_69_FLOAT2INT=2564,
ENC_UNALLOCATED_70_FLOATDP1=2565,
ENC_UNALLOCATED_71_ASIMDSAME=2566,
ENC_UNALLOCATED_71_ASISDLSO=2567,
ENC_UNALLOCATED_71_ASISDLSOP=2568,
ENC_UNALLOCATED_71_BRANCH_REG=2569,
ENC_UNALLOCATED_71_FLOAT2INT=2570,
ENC_UNALLOCATED_72_BRANCH_REG=2571,
ENC_UNALLOCATED_72_FLOAT2INT=2572,
ENC_UNALLOCATED_73_BRANCH_REG=2573,
ENC_UNALLOCATED_73_FLOAT2INT=2574,
ENC_UNALLOCATED_73_FLOATDP1=2575,
ENC_UNALLOCATED_74_ASIMDSAME=2576,
ENC_UNALLOCATED_74_ASISDLSO=2577,
ENC_UNALLOCATED_74_ASISDLSOP=2578,
ENC_UNALLOCATED_74_BRANCH_REG=2579,
ENC_UNALLOCATED_75_BRANCH_REG=2580,
ENC_UNALLOCATED_76_ASISDLSO=2581,
ENC_UNALLOCATED_76_ASISDLSOP=2582,
ENC_UNALLOCATED_76_FLOAT2INT=2583,
ENC_UNALLOCATED_77_FLOAT2INT=2584,
ENC_UNALLOCATED_78_ASISDLSO=2585,
ENC_UNALLOCATED_78_ASISDLSOP=2586,
ENC_UNALLOCATED_78_BRANCH_REG=2587,
ENC_UNALLOCATED_78_FLOAT2INT=2588,
ENC_UNALLOCATED_79_ASISDLSO=2589,
ENC_UNALLOCATED_79_ASISDLSOP=2590,
ENC_UNALLOCATED_79_BRANCH_REG=2591,
ENC_UNALLOCATED_79_FLOAT2INT=2592,
ENC_UNALLOCATED_80_BRANCH_REG=2593,
ENC_UNALLOCATED_80_FLOAT2INT=2594,
ENC_UNALLOCATED_81_ASIMDSAME=2595,
ENC_UNALLOCATED_81_ASISDLSO=2596,
ENC_UNALLOCATED_81_ASISDLSOP=2597,
ENC_UNALLOCATED_81_BRANCH_REG=2598,
ENC_UNALLOCATED_82_ASIMDSAME=2599,
ENC_UNALLOCATED_82_BRANCH_REG=2600,
ENC_UNALLOCATED_83_BRANCH_REG=2601,
ENC_UNALLOCATED_85_ASIMDSAME=2602,
ENC_UNALLOCATED_88_ASIMDMISC=2603,
ENC_UNALLOCATED_88_ASIMDSAME=2604,
ENC_UNALLOCATED_91_ASIMDMISC=2605,
ENC_UNALLOCATED_91_ASIMDSAME=2606,
ENC_UQADD_ASIMDSAME_ONLY=2607,
ENC_UQADD_ASISDSAME_ONLY=2608,
ENC_UQRSHL_ASIMDSAME_ONLY=2609,
ENC_UQRSHL_ASISDSAME_ONLY=2610,
ENC_UQRSHRN_ASIMDSHF_N=2611,
ENC_UQRSHRN_ASISDSHF_N=2612,
ENC_UQSHL_ASIMDSAME_ONLY=2613,
ENC_UQSHL_ASIMDSHF_R=2614,
ENC_UQSHL_ASISDSAME_ONLY=2615,
ENC_UQSHL_ASISDSHF_R=2616,
ENC_UQSHRN_ASIMDSHF_N=2617,
ENC_UQSHRN_ASISDSHF_N=2618,
ENC_UQSUB_ASIMDSAME_ONLY=2619,
ENC_UQSUB_ASISDSAME_ONLY=2620,
ENC_UQXTN_ASIMDMISC_N=2621,
ENC_UQXTN_ASISDMISC_N=2622,
ENC_URECPE_ASIMDMISC_R=2623,
ENC_URHADD_ASIMDSAME_ONLY=2624,
ENC_URSHL_ASIMDSAME_ONLY=2625,
ENC_URSHL_ASISDSAME_ONLY=2626,
ENC_URSHR_ASIMDSHF_R=2627,
ENC_URSHR_ASISDSHF_R=2628,
ENC_URSQRTE_ASIMDMISC_R=2629,
ENC_URSRA_ASIMDSHF_R=2630,
ENC_URSRA_ASISDSHF_R=2631,
ENC_USDOT_ASIMDELEM_D=2632,
ENC_USDOT_ASIMDSAME2_D=2633,
ENC_USHLL_ASIMDSHF_L=2634,
ENC_USHL_ASIMDSAME_ONLY=2635,
ENC_USHL_ASISDSAME_ONLY=2636,
ENC_USHR_ASIMDSHF_R=2637,
ENC_USHR_ASISDSHF_R=2638,
ENC_USMMLA_ASIMDSAME2_G=2639,
ENC_USQADD_ASIMDMISC_R=2640,
ENC_USQADD_ASISDMISC_R=2641,
ENC_USRA_ASIMDSHF_R=2642,
ENC_USRA_ASISDSHF_R=2643,
ENC_USUBL_ASIMDDIFF_L=2644,
ENC_USUBW_ASIMDDIFF_W=2645,
ENC_UXTB_UBFM_32M_BITFIELD=2646,
ENC_UXTH_UBFM_32M_BITFIELD=2647,
ENC_UXTL_USHLL_ASIMDSHF_L=2648,
ENC_UZP1_ASIMDPERM_ONLY=2649,
ENC_UZP2_ASIMDPERM_ONLY=2650,
ENC_WFET_ONLY_SYSTEMINSTRSWITHREG=2651,
ENC_WFE_HI_HINTS=2652,
ENC_WFIT_ONLY_SYSTEMINSTRSWITHREG=2653,
ENC_WFI_HI_HINTS=2654,
ENC_XAFLAG_M_PSTATE=2655,
ENC_XAR_VVV2_CRYPTO3_IMM6=2656,
ENC_XPACD_64Z_DP_1SRC=2657,
ENC_XPACI_64Z_DP_1SRC=2658,
ENC_XPACLRI_HI_HINTS=2659,
ENC_XTN_ASIMDMISC_N=2660,
ENC_YIELD_HI_HINTS=2661,
ENC_ZIP1_ASIMDPERM_ONLY=2662,
ENC_ZIP2_ASIMDPERM_ONLY=2663,
ENC_ABS_Z_P_Z_=2664,
ENC_ADCLB_Z_ZZZ_=2665,
ENC_ADCLT_Z_ZZZ_=2666,
ENC_ADD_Z_P_ZZ_=2667,
ENC_ADD_Z_ZI_=2668,
ENC_ADD_Z_ZZ_=2669,
ENC_ADDHNB_Z_ZZ_=2670,
ENC_ADDHNT_Z_ZZ_=2671,
ENC_ADDP_Z_P_ZZ_=2672,
ENC_ADDPL_R_RI_=2673,
ENC_ADDVL_R_RI_=2674,
ENC_ADR_Z_AZ_D_S32_SCALED=2675,
ENC_ADR_Z_AZ_D_U32_SCALED=2676,
ENC_ADR_Z_AZ_SD_SAME_SCALED=2677,
ENC_AESD_Z_ZZ_=2678,
ENC_AESE_Z_ZZ_=2679,
ENC_AESIMC_Z_Z_=2680,
ENC_AESMC_Z_Z_=2681,
ENC_AND_P_P_PP_Z=2682,
ENC_AND_Z_P_ZZ_=2683,
ENC_AND_Z_ZI_=2684,
ENC_AND_Z_ZZ_=2685,
ENC_ANDS_P_P_PP_Z=2686,
ENC_ANDV_R_P_Z_=2687,
ENC_ASR_Z_P_ZI_=2688,
ENC_ASR_Z_P_ZW_=2689,
ENC_ASR_Z_P_ZZ_=2690,
ENC_ASR_Z_ZI_=2691,
ENC_ASR_Z_ZW_=2692,
ENC_ASRD_Z_P_ZI_=2693,
ENC_ASRR_Z_P_ZZ_=2694,
ENC_BCAX_Z_ZZZ_=2695,
ENC_BDEP_Z_ZZ_=2696,
ENC_BEXT_Z_ZZ_=2697,
ENC_BFCVT_Z_P_Z_S2BF=2698,
ENC_BFCVTNT_Z_P_Z_S2BF=2699,
ENC_BFDOT_Z_ZZZ_=2700,
ENC_BFDOT_Z_ZZZI_=2701,
ENC_BFMLALB_Z_ZZZ_=2702,
ENC_BFMLALB_Z_ZZZI_=2703,
ENC_BFMLALT_Z_ZZZ_=2704,
ENC_BFMLALT_Z_ZZZI_=2705,
ENC_BFMMLA_Z_ZZZ_=2706,
ENC_BGRP_Z_ZZ_=2707,
ENC_BIC_P_P_PP_Z=2708,
ENC_BIC_Z_P_ZZ_=2709,
ENC_BIC_Z_ZZ_=2710,
ENC_BICS_P_P_PP_Z=2711,
ENC_BRKA_P_P_P_=2712,
ENC_BRKAS_P_P_P_Z=2713,
ENC_BRKB_P_P_P_=2714,
ENC_BRKBS_P_P_P_Z=2715,
ENC_BRKN_P_P_PP_=2716,
ENC_BRKNS_P_P_PP_=2717,
ENC_BRKPA_P_P_PP_=2718,
ENC_BRKPAS_P_P_PP_=2719,
ENC_BRKPB_P_P_PP_=2720,
ENC_BRKPBS_P_P_PP_=2721,
ENC_BSL1N_Z_ZZZ_=2722,
ENC_BSL2N_Z_ZZZ_=2723,
ENC_BSL_Z_ZZZ_=2724,
ENC_CADD_Z_ZZ_=2725,
ENC_CDOT_Z_ZZZ_=2726,
ENC_CDOT_Z_ZZZI_D=2727,
ENC_CDOT_Z_ZZZI_S=2728,
ENC_CLASTA_R_P_Z_=2729,
ENC_CLASTA_V_P_Z_=2730,
ENC_CLASTA_Z_P_ZZ_=2731,
ENC_CLASTB_R_P_Z_=2732,
ENC_CLASTB_V_P_Z_=2733,
ENC_CLASTB_Z_P_ZZ_=2734,
ENC_CLS_Z_P_Z_=2735,
ENC_CLZ_Z_P_Z_=2736,
ENC_CMLA_Z_ZZZ_=2737,
ENC_CMLA_Z_ZZZI_H=2738,
ENC_CMLA_Z_ZZZI_S=2739,
ENC_CMPEQ_P_P_ZI_=2740,
ENC_CMPEQ_P_P_ZW_=2741,
ENC_CMPEQ_P_P_ZZ_=2742,
ENC_CMPGE_P_P_ZI_=2743,
ENC_CMPGE_P_P_ZW_=2744,
ENC_CMPGE_P_P_ZZ_=2745,
ENC_CMPGT_P_P_ZI_=2746,
ENC_CMPGT_P_P_ZW_=2747,
ENC_CMPGT_P_P_ZZ_=2748,
ENC_CMPHI_P_P_ZI_=2749,
ENC_CMPHI_P_P_ZW_=2750,
ENC_CMPHI_P_P_ZZ_=2751,
ENC_CMPHS_P_P_ZI_=2752,
ENC_CMPHS_P_P_ZW_=2753,
ENC_CMPHS_P_P_ZZ_=2754,
ENC_CMPLE_P_P_ZI_=2755,
ENC_CMPLE_P_P_ZW_=2756,
ENC_CMPLO_P_P_ZI_=2757,
ENC_CMPLO_P_P_ZW_=2758,
ENC_CMPLS_P_P_ZI_=2759,
ENC_CMPLS_P_P_ZW_=2760,
ENC_CMPLT_P_P_ZI_=2761,
ENC_CMPLT_P_P_ZW_=2762,
ENC_CMPNE_P_P_ZI_=2763,
ENC_CMPNE_P_P_ZW_=2764,
ENC_CMPNE_P_P_ZZ_=2765,
ENC_CNOT_Z_P_Z_=2766,
ENC_CNT_Z_P_Z_=2767,
ENC_CNTB_R_S_=2768,
ENC_CNTD_R_S_=2769,
ENC_CNTH_R_S_=2770,
ENC_CNTP_R_P_P_=2771,
ENC_CNTW_R_S_=2772,
ENC_COMPACT_Z_P_Z_=2773,
ENC_CPY_Z_O_I_=2774,
ENC_CPY_Z_P_I_=2775,
ENC_CPY_Z_P_R_=2776,
ENC_CPY_Z_P_V_=2777,
ENC_CTERMEQ_RR_=2778,
ENC_CTERMNE_RR_=2779,
ENC_DECB_R_RS_=2780,
ENC_DECD_R_RS_=2781,
ENC_DECD_Z_ZS_=2782,
ENC_DECH_R_RS_=2783,
ENC_DECH_Z_ZS_=2784,
ENC_DECP_R_P_R_=2785,
ENC_DECP_Z_P_Z_=2786,
ENC_DECW_R_RS_=2787,
ENC_DECW_Z_ZS_=2788,
ENC_DUP_Z_I_=2789,
ENC_DUP_Z_R_=2790,
ENC_DUP_Z_ZI_=2791,
ENC_DUPM_Z_I_=2792,
ENC_EOR3_Z_ZZZ_=2793,
ENC_EOR_P_P_PP_Z=2794,
ENC_EOR_Z_P_ZZ_=2795,
ENC_EOR_Z_ZI_=2796,
ENC_EOR_Z_ZZ_=2797,
ENC_EORBT_Z_ZZ_=2798,
ENC_EORS_P_P_PP_Z=2799,
ENC_EORTB_Z_ZZ_=2800,
ENC_EORV_R_P_Z_=2801,
ENC_EXT_Z_ZI_CON=2802,
ENC_EXT_Z_ZI_DES=2803,
ENC_FABD_Z_P_ZZ_=2804,
ENC_FABS_Z_P_Z_=2805,
ENC_FACGE_P_P_ZZ_=2806,
ENC_FACGT_P_P_ZZ_=2807,
ENC_FADD_Z_P_ZS_=2808,
ENC_FADD_Z_P_ZZ_=2809,
ENC_FADD_Z_ZZ_=2810,
ENC_FADDA_V_P_Z_=2811,
ENC_FADDP_Z_P_ZZ_=2812,
ENC_FADDV_V_P_Z_=2813,
ENC_FCADD_Z_P_ZZ_=2814,
ENC_FCMEQ_P_P_Z0_=2815,
ENC_FCMEQ_P_P_ZZ_=2816,
ENC_FCMGE_P_P_Z0_=2817,
ENC_FCMGE_P_P_ZZ_=2818,
ENC_FCMGT_P_P_Z0_=2819,
ENC_FCMGT_P_P_ZZ_=2820,
ENC_FCMLA_Z_P_ZZZ_=2821,
ENC_FCMLA_Z_ZZZI_H=2822,
ENC_FCMLA_Z_ZZZI_S=2823,
ENC_FCMLE_P_P_Z0_=2824,
ENC_FCMLT_P_P_Z0_=2825,
ENC_FCMNE_P_P_Z0_=2826,
ENC_FCMNE_P_P_ZZ_=2827,
ENC_FCMUO_P_P_ZZ_=2828,
ENC_FCPY_Z_P_I_=2829,
ENC_FCVT_Z_P_Z_D2H=2830,
ENC_FCVT_Z_P_Z_D2S=2831,
ENC_FCVT_Z_P_Z_H2D=2832,
ENC_FCVT_Z_P_Z_H2S=2833,
ENC_FCVT_Z_P_Z_S2D=2834,
ENC_FCVT_Z_P_Z_S2H=2835,
ENC_FCVTLT_Z_P_Z_H2S=2836,
ENC_FCVTLT_Z_P_Z_S2D=2837,
ENC_FCVTNT_Z_P_Z_D2S=2838,
ENC_FCVTNT_Z_P_Z_S2H=2839,
ENC_FCVTX_Z_P_Z_D2S=2840,
ENC_FCVTXNT_Z_P_Z_D2S=2841,
ENC_FCVTZS_Z_P_Z_D2W=2842,
ENC_FCVTZS_Z_P_Z_D2X=2843,
ENC_FCVTZS_Z_P_Z_FP162H=2844,
ENC_FCVTZS_Z_P_Z_FP162W=2845,
ENC_FCVTZS_Z_P_Z_FP162X=2846,
ENC_FCVTZS_Z_P_Z_S2W=2847,
ENC_FCVTZS_Z_P_Z_S2X=2848,
ENC_FCVTZU_Z_P_Z_D2W=2849,
ENC_FCVTZU_Z_P_Z_D2X=2850,
ENC_FCVTZU_Z_P_Z_FP162H=2851,
ENC_FCVTZU_Z_P_Z_FP162W=2852,
ENC_FCVTZU_Z_P_Z_FP162X=2853,
ENC_FCVTZU_Z_P_Z_S2W=2854,
ENC_FCVTZU_Z_P_Z_S2X=2855,
ENC_FDIV_Z_P_ZZ_=2856,
ENC_FDIVR_Z_P_ZZ_=2857,
ENC_FDUP_Z_I_=2858,
ENC_FEXPA_Z_Z_=2859,
ENC_FLOGB_Z_P_Z_=2860,
ENC_FMAD_Z_P_ZZZ_=2861,
ENC_FMAX_Z_P_ZS_=2862,
ENC_FMAX_Z_P_ZZ_=2863,
ENC_FMAXNM_Z_P_ZS_=2864,
ENC_FMAXNM_Z_P_ZZ_=2865,
ENC_FMAXNMP_Z_P_ZZ_=2866,
ENC_FMAXNMV_V_P_Z_=2867,
ENC_FMAXP_Z_P_ZZ_=2868,
ENC_FMAXV_V_P_Z_=2869,
ENC_FMIN_Z_P_ZS_=2870,
ENC_FMIN_Z_P_ZZ_=2871,
ENC_FMINNM_Z_P_ZS_=2872,
ENC_FMINNM_Z_P_ZZ_=2873,
ENC_FMINNMP_Z_P_ZZ_=2874,
ENC_FMINNMV_V_P_Z_=2875,
ENC_FMINP_Z_P_ZZ_=2876,
ENC_FMINV_V_P_Z_=2877,
ENC_FMLA_Z_P_ZZZ_=2878,
ENC_FMLA_Z_ZZZI_D=2879,
ENC_FMLA_Z_ZZZI_H=2880,
ENC_FMLA_Z_ZZZI_S=2881,
ENC_FMLALB_Z_ZZZ_=2882,
ENC_FMLALB_Z_ZZZI_S=2883,
ENC_FMLALT_Z_ZZZ_=2884,
ENC_FMLALT_Z_ZZZI_S=2885,
ENC_FMLS_Z_P_ZZZ_=2886,
ENC_FMLS_Z_ZZZI_D=2887,
ENC_FMLS_Z_ZZZI_H=2888,
ENC_FMLS_Z_ZZZI_S=2889,
ENC_FMLSLB_Z_ZZZ_=2890,
ENC_FMLSLB_Z_ZZZI_S=2891,
ENC_FMLSLT_Z_ZZZ_=2892,
ENC_FMLSLT_Z_ZZZI_S=2893,
ENC_FMMLA_Z_ZZZ_D=2894,
ENC_FMMLA_Z_ZZZ_S=2895,
ENC_FMSB_Z_P_ZZZ_=2896,
ENC_FMUL_Z_P_ZS_=2897,
ENC_FMUL_Z_P_ZZ_=2898,
ENC_FMUL_Z_ZZ_=2899,
ENC_FMUL_Z_ZZI_D=2900,
ENC_FMUL_Z_ZZI_H=2901,
ENC_FMUL_Z_ZZI_S=2902,
ENC_FMULX_Z_P_ZZ_=2903,
ENC_FNEG_Z_P_Z_=2904,
ENC_FNMAD_Z_P_ZZZ_=2905,
ENC_FNMLA_Z_P_ZZZ_=2906,
ENC_FNMLS_Z_P_ZZZ_=2907,
ENC_FNMSB_Z_P_ZZZ_=2908,
ENC_FRECPE_Z_Z_=2909,
ENC_FRECPS_Z_ZZ_=2910,
ENC_FRECPX_Z_P_Z_=2911,
ENC_FRINTA_Z_P_Z_=2912,
ENC_FRINTI_Z_P_Z_=2913,
ENC_FRINTM_Z_P_Z_=2914,
ENC_FRINTN_Z_P_Z_=2915,
ENC_FRINTP_Z_P_Z_=2916,
ENC_FRINTX_Z_P_Z_=2917,
ENC_FRINTZ_Z_P_Z_=2918,
ENC_FRSQRTE_Z_Z_=2919,
ENC_FRSQRTS_Z_ZZ_=2920,
ENC_FSCALE_Z_P_ZZ_=2921,
ENC_FSQRT_Z_P_Z_=2922,
ENC_FSUB_Z_P_ZS_=2923,
ENC_FSUB_Z_P_ZZ_=2924,
ENC_FSUB_Z_ZZ_=2925,
ENC_FSUBR_Z_P_ZS_=2926,
ENC_FSUBR_Z_P_ZZ_=2927,
ENC_FTMAD_Z_ZZI_=2928,
ENC_FTSMUL_Z_ZZ_=2929,
ENC_FTSSEL_Z_ZZ_=2930,
ENC_HISTCNT_Z_P_ZZ_=2931,
ENC_HISTSEG_Z_ZZ_=2932,
ENC_INCB_R_RS_=2933,
ENC_INCD_R_RS_=2934,
ENC_INCD_Z_ZS_=2935,
ENC_INCH_R_RS_=2936,
ENC_INCH_Z_ZS_=2937,
ENC_INCP_R_P_R_=2938,
ENC_INCP_Z_P_Z_=2939,
ENC_INCW_R_RS_=2940,
ENC_INCW_Z_ZS_=2941,
ENC_INDEX_Z_II_=2942,
ENC_INDEX_Z_IR_=2943,
ENC_INDEX_Z_RI_=2944,
ENC_INDEX_Z_RR_=2945,
ENC_INSR_Z_R_=2946,
ENC_INSR_Z_V_=2947,
ENC_LASTA_R_P_Z_=2948,
ENC_LASTA_V_P_Z_=2949,
ENC_LASTB_R_P_Z_=2950,
ENC_LASTB_V_P_Z_=2951,
ENC_LD1B_Z_P_AI_D=2952,
ENC_LD1B_Z_P_AI_S=2953,
ENC_LD1B_Z_P_BI_U16=2954,
ENC_LD1B_Z_P_BI_U32=2955,
ENC_LD1B_Z_P_BI_U64=2956,
ENC_LD1B_Z_P_BI_U8=2957,
ENC_LD1B_Z_P_BR_U16=2958,
ENC_LD1B_Z_P_BR_U32=2959,
ENC_LD1B_Z_P_BR_U64=2960,
ENC_LD1B_Z_P_BR_U8=2961,
ENC_LD1B_Z_P_BZ_D_64_UNSCALED=2962,
ENC_LD1B_Z_P_BZ_D_X32_UNSCALED=2963,
ENC_LD1B_Z_P_BZ_S_X32_UNSCALED=2964,
ENC_LD1D_Z_P_AI_D=2965,
ENC_LD1D_Z_P_BI_U64=2966,
ENC_LD1D_Z_P_BR_U64=2967,
ENC_LD1D_Z_P_BZ_D_64_SCALED=2968,
ENC_LD1D_Z_P_BZ_D_64_UNSCALED=2969,
ENC_LD1D_Z_P_BZ_D_X32_SCALED=2970,
ENC_LD1D_Z_P_BZ_D_X32_UNSCALED=2971,
ENC_LD1H_Z_P_AI_D=2972,
ENC_LD1H_Z_P_AI_S=2973,
ENC_LD1H_Z_P_BI_U16=2974,
ENC_LD1H_Z_P_BI_U32=2975,
ENC_LD1H_Z_P_BI_U64=2976,
ENC_LD1H_Z_P_BR_U16=2977,
ENC_LD1H_Z_P_BR_U32=2978,
ENC_LD1H_Z_P_BR_U64=2979,
ENC_LD1H_Z_P_BZ_D_64_SCALED=2980,
ENC_LD1H_Z_P_BZ_D_64_UNSCALED=2981,
ENC_LD1H_Z_P_BZ_D_X32_SCALED=2982,
ENC_LD1H_Z_P_BZ_D_X32_UNSCALED=2983,
ENC_LD1H_Z_P_BZ_S_X32_SCALED=2984,
ENC_LD1H_Z_P_BZ_S_X32_UNSCALED=2985,
ENC_LD1RB_Z_P_BI_U16=2986,
ENC_LD1RB_Z_P_BI_U32=2987,
ENC_LD1RB_Z_P_BI_U64=2988,
ENC_LD1RB_Z_P_BI_U8=2989,
ENC_LD1RD_Z_P_BI_U64=2990,
ENC_LD1RH_Z_P_BI_U16=2991,
ENC_LD1RH_Z_P_BI_U32=2992,
ENC_LD1RH_Z_P_BI_U64=2993,
ENC_LD1ROB_Z_P_BI_U8=2994,
ENC_LD1ROB_Z_P_BR_CONTIGUOUS=2995,
ENC_LD1ROD_Z_P_BI_U64=2996,
ENC_LD1ROD_Z_P_BR_CONTIGUOUS=2997,
ENC_LD1ROH_Z_P_BI_U16=2998,
ENC_LD1ROH_Z_P_BR_CONTIGUOUS=2999,
ENC_LD1ROW_Z_P_BI_U32=3000,
ENC_LD1ROW_Z_P_BR_CONTIGUOUS=3001,
ENC_LD1RQB_Z_P_BI_U8=3002,
ENC_LD1RQB_Z_P_BR_CONTIGUOUS=3003,
ENC_LD1RQD_Z_P_BI_U64=3004,
ENC_LD1RQD_Z_P_BR_CONTIGUOUS=3005,
ENC_LD1RQH_Z_P_BI_U16=3006,
ENC_LD1RQH_Z_P_BR_CONTIGUOUS=3007,
ENC_LD1RQW_Z_P_BI_U32=3008,
ENC_LD1RQW_Z_P_BR_CONTIGUOUS=3009,
ENC_LD1RSB_Z_P_BI_S16=3010,
ENC_LD1RSB_Z_P_BI_S32=3011,
ENC_LD1RSB_Z_P_BI_S64=3012,
ENC_LD1RSH_Z_P_BI_S32=3013,
ENC_LD1RSH_Z_P_BI_S64=3014,
ENC_LD1RSW_Z_P_BI_S64=3015,
ENC_LD1RW_Z_P_BI_U32=3016,
ENC_LD1RW_Z_P_BI_U64=3017,
ENC_LD1SB_Z_P_AI_D=3018,
ENC_LD1SB_Z_P_AI_S=3019,
ENC_LD1SB_Z_P_BI_S16=3020,
ENC_LD1SB_Z_P_BI_S32=3021,
ENC_LD1SB_Z_P_BI_S64=3022,
ENC_LD1SB_Z_P_BR_S16=3023,
ENC_LD1SB_Z_P_BR_S32=3024,
ENC_LD1SB_Z_P_BR_S64=3025,
ENC_LD1SB_Z_P_BZ_D_64_UNSCALED=3026,
ENC_LD1SB_Z_P_BZ_D_X32_UNSCALED=3027,
ENC_LD1SB_Z_P_BZ_S_X32_UNSCALED=3028,
ENC_LD1SH_Z_P_AI_D=3029,
ENC_LD1SH_Z_P_AI_S=3030,
ENC_LD1SH_Z_P_BI_S32=3031,
ENC_LD1SH_Z_P_BI_S64=3032,
ENC_LD1SH_Z_P_BR_S32=3033,
ENC_LD1SH_Z_P_BR_S64=3034,
ENC_LD1SH_Z_P_BZ_D_64_SCALED=3035,
ENC_LD1SH_Z_P_BZ_D_64_UNSCALED=3036,
ENC_LD1SH_Z_P_BZ_D_X32_SCALED=3037,
ENC_LD1SH_Z_P_BZ_D_X32_UNSCALED=3038,
ENC_LD1SH_Z_P_BZ_S_X32_SCALED=3039,
ENC_LD1SH_Z_P_BZ_S_X32_UNSCALED=3040,
ENC_LD1SW_Z_P_AI_D=3041,
ENC_LD1SW_Z_P_BI_S64=3042,
ENC_LD1SW_Z_P_BR_S64=3043,
ENC_LD1SW_Z_P_BZ_D_64_SCALED=3044,
ENC_LD1SW_Z_P_BZ_D_64_UNSCALED=3045,
ENC_LD1SW_Z_P_BZ_D_X32_SCALED=3046,
ENC_LD1SW_Z_P_BZ_D_X32_UNSCALED=3047,
ENC_LD1W_Z_P_AI_D=3048,
ENC_LD1W_Z_P_AI_S=3049,
ENC_LD1W_Z_P_BI_U32=3050,
ENC_LD1W_Z_P_BI_U64=3051,
ENC_LD1W_Z_P_BR_U32=3052,
ENC_LD1W_Z_P_BR_U64=3053,
ENC_LD1W_Z_P_BZ_D_64_SCALED=3054,
ENC_LD1W_Z_P_BZ_D_64_UNSCALED=3055,
ENC_LD1W_Z_P_BZ_D_X32_SCALED=3056,
ENC_LD1W_Z_P_BZ_D_X32_UNSCALED=3057,
ENC_LD1W_Z_P_BZ_S_X32_SCALED=3058,
ENC_LD1W_Z_P_BZ_S_X32_UNSCALED=3059,
ENC_LD2B_Z_P_BI_CONTIGUOUS=3060,
ENC_LD2B_Z_P_BR_CONTIGUOUS=3061,
ENC_LD2D_Z_P_BI_CONTIGUOUS=3062,
ENC_LD2D_Z_P_BR_CONTIGUOUS=3063,
ENC_LD2H_Z_P_BI_CONTIGUOUS=3064,
ENC_LD2H_Z_P_BR_CONTIGUOUS=3065,
ENC_LD2W_Z_P_BI_CONTIGUOUS=3066,
ENC_LD2W_Z_P_BR_CONTIGUOUS=3067,
ENC_LD3B_Z_P_BI_CONTIGUOUS=3068,
ENC_LD3B_Z_P_BR_CONTIGUOUS=3069,
ENC_LD3D_Z_P_BI_CONTIGUOUS=3070,
ENC_LD3D_Z_P_BR_CONTIGUOUS=3071,
ENC_LD3H_Z_P_BI_CONTIGUOUS=3072,
ENC_LD3H_Z_P_BR_CONTIGUOUS=3073,
ENC_LD3W_Z_P_BI_CONTIGUOUS=3074,
ENC_LD3W_Z_P_BR_CONTIGUOUS=3075,
ENC_LD4B_Z_P_BI_CONTIGUOUS=3076,
ENC_LD4B_Z_P_BR_CONTIGUOUS=3077,
ENC_LD4D_Z_P_BI_CONTIGUOUS=3078,
ENC_LD4D_Z_P_BR_CONTIGUOUS=3079,
ENC_LD4H_Z_P_BI_CONTIGUOUS=3080,
ENC_LD4H_Z_P_BR_CONTIGUOUS=3081,
ENC_LD4W_Z_P_BI_CONTIGUOUS=3082,
ENC_LD4W_Z_P_BR_CONTIGUOUS=3083,
ENC_LDFF1B_Z_P_AI_D=3084,
ENC_LDFF1B_Z_P_AI_S=3085,
ENC_LDFF1B_Z_P_BR_U16=3086,
ENC_LDFF1B_Z_P_BR_U32=3087,
ENC_LDFF1B_Z_P_BR_U64=3088,
ENC_LDFF1B_Z_P_BR_U8=3089,
ENC_LDFF1B_Z_P_BZ_D_64_UNSCALED=3090,
ENC_LDFF1B_Z_P_BZ_D_X32_UNSCALED=3091,
ENC_LDFF1B_Z_P_BZ_S_X32_UNSCALED=3092,
ENC_LDFF1D_Z_P_AI_D=3093,
ENC_LDFF1D_Z_P_BR_U64=3094,
ENC_LDFF1D_Z_P_BZ_D_64_SCALED=3095,
ENC_LDFF1D_Z_P_BZ_D_64_UNSCALED=3096,
ENC_LDFF1D_Z_P_BZ_D_X32_SCALED=3097,
ENC_LDFF1D_Z_P_BZ_D_X32_UNSCALED=3098,
ENC_LDFF1H_Z_P_AI_D=3099,
ENC_LDFF1H_Z_P_AI_S=3100,
ENC_LDFF1H_Z_P_BR_U16=3101,
ENC_LDFF1H_Z_P_BR_U32=3102,
ENC_LDFF1H_Z_P_BR_U64=3103,
ENC_LDFF1H_Z_P_BZ_D_64_SCALED=3104,
ENC_LDFF1H_Z_P_BZ_D_64_UNSCALED=3105,
ENC_LDFF1H_Z_P_BZ_D_X32_SCALED=3106,
ENC_LDFF1H_Z_P_BZ_D_X32_UNSCALED=3107,
ENC_LDFF1H_Z_P_BZ_S_X32_SCALED=3108,
ENC_LDFF1H_Z_P_BZ_S_X32_UNSCALED=3109,
ENC_LDFF1SB_Z_P_AI_D=3110,
ENC_LDFF1SB_Z_P_AI_S=3111,
ENC_LDFF1SB_Z_P_BR_S16=3112,
ENC_LDFF1SB_Z_P_BR_S32=3113,
ENC_LDFF1SB_Z_P_BR_S64=3114,
ENC_LDFF1SB_Z_P_BZ_D_64_UNSCALED=3115,
ENC_LDFF1SB_Z_P_BZ_D_X32_UNSCALED=3116,
ENC_LDFF1SB_Z_P_BZ_S_X32_UNSCALED=3117,
ENC_LDFF1SH_Z_P_AI_D=3118,
ENC_LDFF1SH_Z_P_AI_S=3119,
ENC_LDFF1SH_Z_P_BR_S32=3120,
ENC_LDFF1SH_Z_P_BR_S64=3121,
ENC_LDFF1SH_Z_P_BZ_D_64_SCALED=3122,
ENC_LDFF1SH_Z_P_BZ_D_64_UNSCALED=3123,
ENC_LDFF1SH_Z_P_BZ_D_X32_SCALED=3124,
ENC_LDFF1SH_Z_P_BZ_D_X32_UNSCALED=3125,
ENC_LDFF1SH_Z_P_BZ_S_X32_SCALED=3126,
ENC_LDFF1SH_Z_P_BZ_S_X32_UNSCALED=3127,
ENC_LDFF1SW_Z_P_AI_D=3128,
ENC_LDFF1SW_Z_P_BR_S64=3129,
ENC_LDFF1SW_Z_P_BZ_D_64_SCALED=3130,
ENC_LDFF1SW_Z_P_BZ_D_64_UNSCALED=3131,
ENC_LDFF1SW_Z_P_BZ_D_X32_SCALED=3132,
ENC_LDFF1SW_Z_P_BZ_D_X32_UNSCALED=3133,
ENC_LDFF1W_Z_P_AI_D=3134,
ENC_LDFF1W_Z_P_AI_S=3135,
ENC_LDFF1W_Z_P_BR_U32=3136,
ENC_LDFF1W_Z_P_BR_U64=3137,
ENC_LDFF1W_Z_P_BZ_D_64_SCALED=3138,
ENC_LDFF1W_Z_P_BZ_D_64_UNSCALED=3139,
ENC_LDFF1W_Z_P_BZ_D_X32_SCALED=3140,
ENC_LDFF1W_Z_P_BZ_D_X32_UNSCALED=3141,
ENC_LDFF1W_Z_P_BZ_S_X32_SCALED=3142,
ENC_LDFF1W_Z_P_BZ_S_X32_UNSCALED=3143,
ENC_LDNF1B_Z_P_BI_U16=3144,
ENC_LDNF1B_Z_P_BI_U32=3145,
ENC_LDNF1B_Z_P_BI_U64=3146,
ENC_LDNF1B_Z_P_BI_U8=3147,
ENC_LDNF1D_Z_P_BI_U64=3148,
ENC_LDNF1H_Z_P_BI_U16=3149,
ENC_LDNF1H_Z_P_BI_U32=3150,
ENC_LDNF1H_Z_P_BI_U64=3151,
ENC_LDNF1SB_Z_P_BI_S16=3152,
ENC_LDNF1SB_Z_P_BI_S32=3153,
ENC_LDNF1SB_Z_P_BI_S64=3154,
ENC_LDNF1SH_Z_P_BI_S32=3155,
ENC_LDNF1SH_Z_P_BI_S64=3156,
ENC_LDNF1SW_Z_P_BI_S64=3157,
ENC_LDNF1W_Z_P_BI_U32=3158,
ENC_LDNF1W_Z_P_BI_U64=3159,
ENC_LDNT1B_Z_P_AR_D_64_UNSCALED=3160,
ENC_LDNT1B_Z_P_AR_S_X32_UNSCALED=3161,
ENC_LDNT1B_Z_P_BI_CONTIGUOUS=3162,
ENC_LDNT1B_Z_P_BR_CONTIGUOUS=3163,
ENC_LDNT1D_Z_P_AR_D_64_UNSCALED=3164,
ENC_LDNT1D_Z_P_BI_CONTIGUOUS=3165,
ENC_LDNT1D_Z_P_BR_CONTIGUOUS=3166,
ENC_LDNT1H_Z_P_AR_D_64_UNSCALED=3167,
ENC_LDNT1H_Z_P_AR_S_X32_UNSCALED=3168,
ENC_LDNT1H_Z_P_BI_CONTIGUOUS=3169,
ENC_LDNT1H_Z_P_BR_CONTIGUOUS=3170,
ENC_LDNT1SB_Z_P_AR_D_64_UNSCALED=3171,
ENC_LDNT1SB_Z_P_AR_S_X32_UNSCALED=3172,
ENC_LDNT1SH_Z_P_AR_D_64_UNSCALED=3173,
ENC_LDNT1SH_Z_P_AR_S_X32_UNSCALED=3174,
ENC_LDNT1SW_Z_P_AR_D_64_UNSCALED=3175,
ENC_LDNT1W_Z_P_AR_D_64_UNSCALED=3176,
ENC_LDNT1W_Z_P_AR_S_X32_UNSCALED=3177,
ENC_LDNT1W_Z_P_BI_CONTIGUOUS=3178,
ENC_LDNT1W_Z_P_BR_CONTIGUOUS=3179,
ENC_LDR_P_BI_=3180,
ENC_LDR_Z_BI_=3181,
ENC_LSL_Z_P_ZI_=3182,
ENC_LSL_Z_P_ZW_=3183,
ENC_LSL_Z_P_ZZ_=3184,
ENC_LSL_Z_ZI_=3185,
ENC_LSL_Z_ZW_=3186,
ENC_LSLR_Z_P_ZZ_=3187,
ENC_LSR_Z_P_ZI_=3188,
ENC_LSR_Z_P_ZW_=3189,
ENC_LSR_Z_P_ZZ_=3190,
ENC_LSR_Z_ZI_=3191,
ENC_LSR_Z_ZW_=3192,
ENC_LSRR_Z_P_ZZ_=3193,
ENC_MAD_Z_P_ZZZ_=3194,
ENC_MATCH_P_P_ZZ_=3195,
ENC_MLA_Z_P_ZZZ_=3196,
ENC_MLA_Z_ZZZI_D=3197,
ENC_MLA_Z_ZZZI_H=3198,
ENC_MLA_Z_ZZZI_S=3199,
ENC_MLS_Z_P_ZZZ_=3200,
ENC_MLS_Z_ZZZI_D=3201,
ENC_MLS_Z_ZZZI_H=3202,
ENC_MLS_Z_ZZZI_S=3203,
ENC_MOVPRFX_Z_P_Z_=3204,
ENC_MOVPRFX_Z_Z_=3205,
ENC_MSB_Z_P_ZZZ_=3206,
ENC_MUL_Z_P_ZZ_=3207,
ENC_MUL_Z_ZI_=3208,
ENC_MUL_Z_ZZ_=3209,
ENC_MUL_Z_ZZI_D=3210,
ENC_MUL_Z_ZZI_H=3211,
ENC_MUL_Z_ZZI_S=3212,
ENC_NAND_P_P_PP_Z=3213,
ENC_NANDS_P_P_PP_Z=3214,
ENC_NBSL_Z_ZZZ_=3215,
ENC_NEG_Z_P_Z_=3216,
ENC_NMATCH_P_P_ZZ_=3217,
ENC_NOR_P_P_PP_Z=3218,
ENC_NORS_P_P_PP_Z=3219,
ENC_NOT_Z_P_Z_=3220,
ENC_ORN_P_P_PP_Z=3221,
ENC_ORNS_P_P_PP_Z=3222,
ENC_ORR_P_P_PP_Z=3223,
ENC_ORR_Z_P_ZZ_=3224,
ENC_ORR_Z_ZI_=3225,
ENC_ORR_Z_ZZ_=3226,
ENC_ORRS_P_P_PP_Z=3227,
ENC_ORV_R_P_Z_=3228,
ENC_PFALSE_P_=3229,
ENC_PFIRST_P_P_P_=3230,
ENC_PMUL_Z_ZZ_=3231,
ENC_PMULLB_Z_ZZ_=3232,
ENC_PMULLT_Z_ZZ_=3233,
ENC_PNEXT_P_P_P_=3234,
ENC_PRFB_I_P_AI_D=3235,
ENC_PRFB_I_P_AI_S=3236,
ENC_PRFB_I_P_BI_S=3237,
ENC_PRFB_I_P_BR_S=3238,
ENC_PRFB_I_P_BZ_D_64_SCALED=3239,
ENC_PRFB_I_P_BZ_D_X32_SCALED=3240,
ENC_PRFB_I_P_BZ_S_X32_SCALED=3241,
ENC_PRFD_I_P_AI_D=3242,
ENC_PRFD_I_P_AI_S=3243,
ENC_PRFD_I_P_BI_S=3244,
ENC_PRFD_I_P_BR_S=3245,
ENC_PRFD_I_P_BZ_D_64_SCALED=3246,
ENC_PRFD_I_P_BZ_D_X32_SCALED=3247,
ENC_PRFD_I_P_BZ_S_X32_SCALED=3248,
ENC_PRFH_I_P_AI_D=3249,
ENC_PRFH_I_P_AI_S=3250,
ENC_PRFH_I_P_BI_S=3251,
ENC_PRFH_I_P_BR_S=3252,
ENC_PRFH_I_P_BZ_D_64_SCALED=3253,
ENC_PRFH_I_P_BZ_D_X32_SCALED=3254,
ENC_PRFH_I_P_BZ_S_X32_SCALED=3255,
ENC_PRFW_I_P_AI_D=3256,
ENC_PRFW_I_P_AI_S=3257,
ENC_PRFW_I_P_BI_S=3258,
ENC_PRFW_I_P_BR_S=3259,
ENC_PRFW_I_P_BZ_D_64_SCALED=3260,
ENC_PRFW_I_P_BZ_D_X32_SCALED=3261,
ENC_PRFW_I_P_BZ_S_X32_SCALED=3262,
ENC_PTEST_P_P_=3263,
ENC_PTRUE_P_S_=3264,
ENC_PTRUES_P_S_=3265,
ENC_PUNPKHI_P_P_=3266,
ENC_PUNPKLO_P_P_=3267,
ENC_RADDHNB_Z_ZZ_=3268,
ENC_RADDHNT_Z_ZZ_=3269,
ENC_RAX1_Z_ZZ_=3270,
ENC_RBIT_Z_P_Z_=3271,
ENC_RDFFR_P_F_=3272,
ENC_RDFFR_P_P_F_=3273,
ENC_RDFFRS_P_P_F_=3274,
ENC_RDVL_R_I_=3275,
ENC_REV_P_P_=3276,
ENC_REV_Z_Z_=3277,
ENC_REVB_Z_Z_=3278,
ENC_REVH_Z_Z_=3279,
ENC_REVW_Z_Z_=3280,
ENC_RSHRNB_Z_ZI_=3281,
ENC_RSHRNT_Z_ZI_=3282,
ENC_RSUBHNB_Z_ZZ_=3283,
ENC_RSUBHNT_Z_ZZ_=3284,
ENC_SABA_Z_ZZZ_=3285,
ENC_SABALB_Z_ZZZ_=3286,
ENC_SABALT_Z_ZZZ_=3287,
ENC_SABD_Z_P_ZZ_=3288,
ENC_SABDLB_Z_ZZ_=3289,
ENC_SABDLT_Z_ZZ_=3290,
ENC_SADALP_Z_P_Z_=3291,
ENC_SADDLB_Z_ZZ_=3292,
ENC_SADDLBT_Z_ZZ_=3293,
ENC_SADDLT_Z_ZZ_=3294,
ENC_SADDV_R_P_Z_=3295,
ENC_SADDWB_Z_ZZ_=3296,
ENC_SADDWT_Z_ZZ_=3297,
ENC_SBCLB_Z_ZZZ_=3298,
ENC_SBCLT_Z_ZZZ_=3299,
ENC_SCVTF_Z_P_Z_H2FP16=3300,
ENC_SCVTF_Z_P_Z_W2D=3301,
ENC_SCVTF_Z_P_Z_W2FP16=3302,
ENC_SCVTF_Z_P_Z_W2S=3303,
ENC_SCVTF_Z_P_Z_X2D=3304,
ENC_SCVTF_Z_P_Z_X2FP16=3305,
ENC_SCVTF_Z_P_Z_X2S=3306,
ENC_SDIV_Z_P_ZZ_=3307,
ENC_SDIVR_Z_P_ZZ_=3308,
ENC_SDOT_Z_ZZZ_=3309,
ENC_SDOT_Z_ZZZI_D=3310,
ENC_SDOT_Z_ZZZI_S=3311,
ENC_SEL_P_P_PP_=3312,
ENC_SEL_Z_P_ZZ_=3313,
ENC_SETFFR_F_=3314,
ENC_SHADD_Z_P_ZZ_=3315,
ENC_SHRNB_Z_ZI_=3316,
ENC_SHRNT_Z_ZI_=3317,
ENC_SHSUB_Z_P_ZZ_=3318,
ENC_SHSUBR_Z_P_ZZ_=3319,
ENC_SLI_Z_ZZI_=3320,
ENC_SM4E_Z_ZZ_=3321,
ENC_SM4EKEY_Z_ZZ_=3322,
ENC_SMAX_Z_P_ZZ_=3323,
ENC_SMAX_Z_ZI_=3324,
ENC_SMAXP_Z_P_ZZ_=3325,
ENC_SMAXV_R_P_Z_=3326,
ENC_SMIN_Z_P_ZZ_=3327,
ENC_SMIN_Z_ZI_=3328,
ENC_SMINP_Z_P_ZZ_=3329,
ENC_SMINV_R_P_Z_=3330,
ENC_SMLALB_Z_ZZZ_=3331,
ENC_SMLALB_Z_ZZZI_D=3332,
ENC_SMLALB_Z_ZZZI_S=3333,
ENC_SMLALT_Z_ZZZ_=3334,
ENC_SMLALT_Z_ZZZI_D=3335,
ENC_SMLALT_Z_ZZZI_S=3336,
ENC_SMLSLB_Z_ZZZ_=3337,
ENC_SMLSLB_Z_ZZZI_D=3338,
ENC_SMLSLB_Z_ZZZI_S=3339,
ENC_SMLSLT_Z_ZZZ_=3340,
ENC_SMLSLT_Z_ZZZI_D=3341,
ENC_SMLSLT_Z_ZZZI_S=3342,
ENC_SMMLA_Z_ZZZ_=3343,
ENC_SMULH_Z_P_ZZ_=3344,
ENC_SMULH_Z_ZZ_=3345,
ENC_SMULLB_Z_ZZ_=3346,
ENC_SMULLB_Z_ZZI_D=3347,
ENC_SMULLB_Z_ZZI_S=3348,
ENC_SMULLT_Z_ZZ_=3349,
ENC_SMULLT_Z_ZZI_D=3350,
ENC_SMULLT_Z_ZZI_S=3351,
ENC_SPLICE_Z_P_ZZ_CON=3352,
ENC_SPLICE_Z_P_ZZ_DES=3353,
ENC_SQABS_Z_P_Z_=3354,
ENC_SQADD_Z_P_ZZ_=3355,
ENC_SQADD_Z_ZI_=3356,
ENC_SQADD_Z_ZZ_=3357,
ENC_SQCADD_Z_ZZ_=3358,
ENC_SQDECB_R_RS_SX=3359,
ENC_SQDECB_R_RS_X=3360,
ENC_SQDECD_R_RS_SX=3361,
ENC_SQDECD_R_RS_X=3362,
ENC_SQDECD_Z_ZS_=3363,
ENC_SQDECH_R_RS_SX=3364,
ENC_SQDECH_R_RS_X=3365,
ENC_SQDECH_Z_ZS_=3366,
ENC_SQDECP_R_P_R_SX=3367,
ENC_SQDECP_R_P_R_X=3368,
ENC_SQDECP_Z_P_Z_=3369,
ENC_SQDECW_R_RS_SX=3370,
ENC_SQDECW_R_RS_X=3371,
ENC_SQDECW_Z_ZS_=3372,
ENC_SQDMLALB_Z_ZZZ_=3373,
ENC_SQDMLALB_Z_ZZZI_D=3374,
ENC_SQDMLALB_Z_ZZZI_S=3375,
ENC_SQDMLALBT_Z_ZZZ_=3376,
ENC_SQDMLALT_Z_ZZZ_=3377,
ENC_SQDMLALT_Z_ZZZI_D=3378,
ENC_SQDMLALT_Z_ZZZI_S=3379,
ENC_SQDMLSLB_Z_ZZZ_=3380,
ENC_SQDMLSLB_Z_ZZZI_D=3381,
ENC_SQDMLSLB_Z_ZZZI_S=3382,
ENC_SQDMLSLBT_Z_ZZZ_=3383,
ENC_SQDMLSLT_Z_ZZZ_=3384,
ENC_SQDMLSLT_Z_ZZZI_D=3385,
ENC_SQDMLSLT_Z_ZZZI_S=3386,
ENC_SQDMULH_Z_ZZ_=3387,
ENC_SQDMULH_Z_ZZI_D=3388,
ENC_SQDMULH_Z_ZZI_H=3389,
ENC_SQDMULH_Z_ZZI_S=3390,
ENC_SQDMULLB_Z_ZZ_=3391,
ENC_SQDMULLB_Z_ZZI_D=3392,
ENC_SQDMULLB_Z_ZZI_S=3393,
ENC_SQDMULLT_Z_ZZ_=3394,
ENC_SQDMULLT_Z_ZZI_D=3395,
ENC_SQDMULLT_Z_ZZI_S=3396,
ENC_SQINCB_R_RS_SX=3397,
ENC_SQINCB_R_RS_X=3398,
ENC_SQINCD_R_RS_SX=3399,
ENC_SQINCD_R_RS_X=3400,
ENC_SQINCD_Z_ZS_=3401,
ENC_SQINCH_R_RS_SX=3402,
ENC_SQINCH_R_RS_X=3403,
ENC_SQINCH_Z_ZS_=3404,
ENC_SQINCP_R_P_R_SX=3405,
ENC_SQINCP_R_P_R_X=3406,
ENC_SQINCP_Z_P_Z_=3407,
ENC_SQINCW_R_RS_SX=3408,
ENC_SQINCW_R_RS_X=3409,
ENC_SQINCW_Z_ZS_=3410,
ENC_SQNEG_Z_P_Z_=3411,
ENC_SQRDCMLAH_Z_ZZZ_=3412,
ENC_SQRDCMLAH_Z_ZZZI_H=3413,
ENC_SQRDCMLAH_Z_ZZZI_S=3414,
ENC_SQRDMLAH_Z_ZZZ_=3415,
ENC_SQRDMLAH_Z_ZZZI_D=3416,
ENC_SQRDMLAH_Z_ZZZI_H=3417,
ENC_SQRDMLAH_Z_ZZZI_S=3418,
ENC_SQRDMLSH_Z_ZZZ_=3419,
ENC_SQRDMLSH_Z_ZZZI_D=3420,
ENC_SQRDMLSH_Z_ZZZI_H=3421,
ENC_SQRDMLSH_Z_ZZZI_S=3422,
ENC_SQRDMULH_Z_ZZ_=3423,
ENC_SQRDMULH_Z_ZZI_D=3424,
ENC_SQRDMULH_Z_ZZI_H=3425,
ENC_SQRDMULH_Z_ZZI_S=3426,
ENC_SQRSHL_Z_P_ZZ_=3427,
ENC_SQRSHLR_Z_P_ZZ_=3428,
ENC_SQRSHRNB_Z_ZI_=3429,
ENC_SQRSHRNT_Z_ZI_=3430,
ENC_SQRSHRUNB_Z_ZI_=3431,
ENC_SQRSHRUNT_Z_ZI_=3432,
ENC_SQSHL_Z_P_ZI_=3433,
ENC_SQSHL_Z_P_ZZ_=3434,
ENC_SQSHLR_Z_P_ZZ_=3435,
ENC_SQSHLU_Z_P_ZI_=3436,
ENC_SQSHRNB_Z_ZI_=3437,
ENC_SQSHRNT_Z_ZI_=3438,
ENC_SQSHRUNB_Z_ZI_=3439,
ENC_SQSHRUNT_Z_ZI_=3440,
ENC_SQSUB_Z_P_ZZ_=3441,
ENC_SQSUB_Z_ZI_=3442,
ENC_SQSUB_Z_ZZ_=3443,
ENC_SQSUBR_Z_P_ZZ_=3444,
ENC_SQXTNB_Z_ZZ_=3445,
ENC_SQXTNT_Z_ZZ_=3446,
ENC_SQXTUNB_Z_ZZ_=3447,
ENC_SQXTUNT_Z_ZZ_=3448,
ENC_SRHADD_Z_P_ZZ_=3449,
ENC_SRI_Z_ZZI_=3450,
ENC_SRSHL_Z_P_ZZ_=3451,
ENC_SRSHLR_Z_P_ZZ_=3452,
ENC_SRSHR_Z_P_ZI_=3453,
ENC_SRSRA_Z_ZI_=3454,
ENC_SSHLLB_Z_ZI_=3455,
ENC_SSHLLT_Z_ZI_=3456,
ENC_SSRA_Z_ZI_=3457,
ENC_SSUBLB_Z_ZZ_=3458,
ENC_SSUBLBT_Z_ZZ_=3459,
ENC_SSUBLT_Z_ZZ_=3460,
ENC_SSUBLTB_Z_ZZ_=3461,
ENC_SSUBWB_Z_ZZ_=3462,
ENC_SSUBWT_Z_ZZ_=3463,
ENC_ST1B_Z_P_AI_D=3464,
ENC_ST1B_Z_P_AI_S=3465,
ENC_ST1B_Z_P_BI_=3466,
ENC_ST1B_Z_P_BR_=3467,
ENC_ST1B_Z_P_BZ_D_64_UNSCALED=3468,
ENC_ST1B_Z_P_BZ_D_X32_UNSCALED=3469,
ENC_ST1B_Z_P_BZ_S_X32_UNSCALED=3470,
ENC_ST1D_Z_P_AI_D=3471,
ENC_ST1D_Z_P_BI_=3472,
ENC_ST1D_Z_P_BR_=3473,
ENC_ST1D_Z_P_BZ_D_64_SCALED=3474,
ENC_ST1D_Z_P_BZ_D_64_UNSCALED=3475,
ENC_ST1D_Z_P_BZ_D_X32_SCALED=3476,
ENC_ST1D_Z_P_BZ_D_X32_UNSCALED=3477,
ENC_ST1H_Z_P_AI_D=3478,
ENC_ST1H_Z_P_AI_S=3479,
ENC_ST1H_Z_P_BI_=3480,
ENC_ST1H_Z_P_BR_=3481,
ENC_ST1H_Z_P_BZ_D_64_SCALED=3482,
ENC_ST1H_Z_P_BZ_D_64_UNSCALED=3483,
ENC_ST1H_Z_P_BZ_D_X32_SCALED=3484,
ENC_ST1H_Z_P_BZ_D_X32_UNSCALED=3485,
ENC_ST1H_Z_P_BZ_S_X32_SCALED=3486,
ENC_ST1H_Z_P_BZ_S_X32_UNSCALED=3487,
ENC_ST1W_Z_P_AI_D=3488,
ENC_ST1W_Z_P_AI_S=3489,
ENC_ST1W_Z_P_BI_=3490,
ENC_ST1W_Z_P_BR_=3491,
ENC_ST1W_Z_P_BZ_D_64_SCALED=3492,
ENC_ST1W_Z_P_BZ_D_64_UNSCALED=3493,
ENC_ST1W_Z_P_BZ_D_X32_SCALED=3494,
ENC_ST1W_Z_P_BZ_D_X32_UNSCALED=3495,
ENC_ST1W_Z_P_BZ_S_X32_SCALED=3496,
ENC_ST1W_Z_P_BZ_S_X32_UNSCALED=3497,
ENC_ST2B_Z_P_BI_CONTIGUOUS=3498,
ENC_ST2B_Z_P_BR_CONTIGUOUS=3499,
ENC_ST2D_Z_P_BI_CONTIGUOUS=3500,
ENC_ST2D_Z_P_BR_CONTIGUOUS=3501,
ENC_ST2H_Z_P_BI_CONTIGUOUS=3502,
ENC_ST2H_Z_P_BR_CONTIGUOUS=3503,
ENC_ST2W_Z_P_BI_CONTIGUOUS=3504,
ENC_ST2W_Z_P_BR_CONTIGUOUS=3505,
ENC_ST3B_Z_P_BI_CONTIGUOUS=3506,
ENC_ST3B_Z_P_BR_CONTIGUOUS=3507,
ENC_ST3D_Z_P_BI_CONTIGUOUS=3508,
ENC_ST3D_Z_P_BR_CONTIGUOUS=3509,
ENC_ST3H_Z_P_BI_CONTIGUOUS=3510,
ENC_ST3H_Z_P_BR_CONTIGUOUS=3511,
ENC_ST3W_Z_P_BI_CONTIGUOUS=3512,
ENC_ST3W_Z_P_BR_CONTIGUOUS=3513,
ENC_ST4B_Z_P_BI_CONTIGUOUS=3514,
ENC_ST4B_Z_P_BR_CONTIGUOUS=3515,
ENC_ST4D_Z_P_BI_CONTIGUOUS=3516,
ENC_ST4D_Z_P_BR_CONTIGUOUS=3517,
ENC_ST4H_Z_P_BI_CONTIGUOUS=3518,
ENC_ST4H_Z_P_BR_CONTIGUOUS=3519,
ENC_ST4W_Z_P_BI_CONTIGUOUS=3520,
ENC_ST4W_Z_P_BR_CONTIGUOUS=3521,
ENC_STNT1B_Z_P_AR_D_64_UNSCALED=3522,
ENC_STNT1B_Z_P_AR_S_X32_UNSCALED=3523,
ENC_STNT1B_Z_P_BI_CONTIGUOUS=3524,
ENC_STNT1B_Z_P_BR_CONTIGUOUS=3525,
ENC_STNT1D_Z_P_AR_D_64_UNSCALED=3526,
ENC_STNT1D_Z_P_BI_CONTIGUOUS=3527,
ENC_STNT1D_Z_P_BR_CONTIGUOUS=3528,
ENC_STNT1H_Z_P_AR_D_64_UNSCALED=3529,
ENC_STNT1H_Z_P_AR_S_X32_UNSCALED=3530,
ENC_STNT1H_Z_P_BI_CONTIGUOUS=3531,
ENC_STNT1H_Z_P_BR_CONTIGUOUS=3532,
ENC_STNT1W_Z_P_AR_D_64_UNSCALED=3533,
ENC_STNT1W_Z_P_AR_S_X32_UNSCALED=3534,
ENC_STNT1W_Z_P_BI_CONTIGUOUS=3535,
ENC_STNT1W_Z_P_BR_CONTIGUOUS=3536,
ENC_STR_P_BI_=3537,
ENC_STR_Z_BI_=3538,
ENC_SUB_Z_P_ZZ_=3539,
ENC_SUB_Z_ZI_=3540,
ENC_SUB_Z_ZZ_=3541,
ENC_SUBHNB_Z_ZZ_=3542,
ENC_SUBHNT_Z_ZZ_=3543,
ENC_SUBR_Z_P_ZZ_=3544,
ENC_SUBR_Z_ZI_=3545,
ENC_SUDOT_Z_ZZZI_S=3546,
ENC_SUNPKHI_Z_Z_=3547,
ENC_SUNPKLO_Z_Z_=3548,
ENC_SUQADD_Z_P_ZZ_=3549,
ENC_SXTB_Z_P_Z_=3550,
ENC_SXTH_Z_P_Z_=3551,
ENC_SXTW_Z_P_Z_=3552,
ENC_TBL_Z_ZZ_1=3553,
ENC_TBL_Z_ZZ_2=3554,
ENC_TBX_Z_ZZ_=3555,
ENC_TRN1_P_PP_=3556,
ENC_TRN1_Z_ZZ_=3557,
ENC_TRN1_Z_ZZ_Q=3558,
ENC_TRN2_P_PP_=3559,
ENC_TRN2_Z_ZZ_=3560,
ENC_TRN2_Z_ZZ_Q=3561,
ENC_UABA_Z_ZZZ_=3562,
ENC_UABALB_Z_ZZZ_=3563,
ENC_UABALT_Z_ZZZ_=3564,
ENC_UABD_Z_P_ZZ_=3565,
ENC_UABDLB_Z_ZZ_=3566,
ENC_UABDLT_Z_ZZ_=3567,
ENC_UADALP_Z_P_Z_=3568,
ENC_UADDLB_Z_ZZ_=3569,
ENC_UADDLT_Z_ZZ_=3570,
ENC_UADDV_R_P_Z_=3571,
ENC_UADDWB_Z_ZZ_=3572,
ENC_UADDWT_Z_ZZ_=3573,
ENC_UCVTF_Z_P_Z_H2FP16=3574,
ENC_UCVTF_Z_P_Z_W2D=3575,
ENC_UCVTF_Z_P_Z_W2FP16=3576,
ENC_UCVTF_Z_P_Z_W2S=3577,
ENC_UCVTF_Z_P_Z_X2D=3578,
ENC_UCVTF_Z_P_Z_X2FP16=3579,
ENC_UCVTF_Z_P_Z_X2S=3580,
ENC_UDIV_Z_P_ZZ_=3581,
ENC_UDIVR_Z_P_ZZ_=3582,
ENC_UDOT_Z_ZZZ_=3583,
ENC_UDOT_Z_ZZZI_D=3584,
ENC_UDOT_Z_ZZZI_S=3585,
ENC_UHADD_Z_P_ZZ_=3586,
ENC_UHSUB_Z_P_ZZ_=3587,
ENC_UHSUBR_Z_P_ZZ_=3588,
ENC_UMAX_Z_P_ZZ_=3589,
ENC_UMAX_Z_ZI_=3590,
ENC_UMAXP_Z_P_ZZ_=3591,
ENC_UMAXV_R_P_Z_=3592,
ENC_UMIN_Z_P_ZZ_=3593,
ENC_UMIN_Z_ZI_=3594,
ENC_UMINP_Z_P_ZZ_=3595,
ENC_UMINV_R_P_Z_=3596,
ENC_UMLALB_Z_ZZZ_=3597,
ENC_UMLALB_Z_ZZZI_D=3598,
ENC_UMLALB_Z_ZZZI_S=3599,
ENC_UMLALT_Z_ZZZ_=3600,
ENC_UMLALT_Z_ZZZI_D=3601,
ENC_UMLALT_Z_ZZZI_S=3602,
ENC_UMLSLB_Z_ZZZ_=3603,
ENC_UMLSLB_Z_ZZZI_D=3604,
ENC_UMLSLB_Z_ZZZI_S=3605,
ENC_UMLSLT_Z_ZZZ_=3606,
ENC_UMLSLT_Z_ZZZI_D=3607,
ENC_UMLSLT_Z_ZZZI_S=3608,
ENC_UMMLA_Z_ZZZ_=3609,
ENC_UMULH_Z_P_ZZ_=3610,
ENC_UMULH_Z_ZZ_=3611,
ENC_UMULLB_Z_ZZ_=3612,
ENC_UMULLB_Z_ZZI_D=3613,
ENC_UMULLB_Z_ZZI_S=3614,
ENC_UMULLT_Z_ZZ_=3615,
ENC_UMULLT_Z_ZZI_D=3616,
ENC_UMULLT_Z_ZZI_S=3617,
ENC_UQADD_Z_P_ZZ_=3618,
ENC_UQADD_Z_ZI_=3619,
ENC_UQADD_Z_ZZ_=3620,
ENC_UQDECB_R_RS_UW=3621,
ENC_UQDECB_R_RS_X=3622,
ENC_UQDECD_R_RS_UW=3623,
ENC_UQDECD_R_RS_X=3624,
ENC_UQDECD_Z_ZS_=3625,
ENC_UQDECH_R_RS_UW=3626,
ENC_UQDECH_R_RS_X=3627,
ENC_UQDECH_Z_ZS_=3628,
ENC_UQDECP_R_P_R_UW=3629,
ENC_UQDECP_R_P_R_X=3630,
ENC_UQDECP_Z_P_Z_=3631,
ENC_UQDECW_R_RS_UW=3632,
ENC_UQDECW_R_RS_X=3633,
ENC_UQDECW_Z_ZS_=3634,
ENC_UQINCB_R_RS_UW=3635,
ENC_UQINCB_R_RS_X=3636,
ENC_UQINCD_R_RS_UW=3637,
ENC_UQINCD_R_RS_X=3638,
ENC_UQINCD_Z_ZS_=3639,
ENC_UQINCH_R_RS_UW=3640,
ENC_UQINCH_R_RS_X=3641,
ENC_UQINCH_Z_ZS_=3642,
ENC_UQINCP_R_P_R_UW=3643,
ENC_UQINCP_R_P_R_X=3644,
ENC_UQINCP_Z_P_Z_=3645,
ENC_UQINCW_R_RS_UW=3646,
ENC_UQINCW_R_RS_X=3647,
ENC_UQINCW_Z_ZS_=3648,
ENC_UQRSHL_Z_P_ZZ_=3649,
ENC_UQRSHLR_Z_P_ZZ_=3650,
ENC_UQRSHRNB_Z_ZI_=3651,
ENC_UQRSHRNT_Z_ZI_=3652,
ENC_UQSHL_Z_P_ZI_=3653,
ENC_UQSHL_Z_P_ZZ_=3654,
ENC_UQSHLR_Z_P_ZZ_=3655,
ENC_UQSHRNB_Z_ZI_=3656,
ENC_UQSHRNT_Z_ZI_=3657,
ENC_UQSUB_Z_P_ZZ_=3658,
ENC_UQSUB_Z_ZI_=3659,
ENC_UQSUB_Z_ZZ_=3660,
ENC_UQSUBR_Z_P_ZZ_=3661,
ENC_UQXTNB_Z_ZZ_=3662,
ENC_UQXTNT_Z_ZZ_=3663,
ENC_URECPE_Z_P_Z_=3664,
ENC_URHADD_Z_P_ZZ_=3665,
ENC_URSHL_Z_P_ZZ_=3666,
ENC_URSHLR_Z_P_ZZ_=3667,
ENC_URSHR_Z_P_ZI_=3668,
ENC_URSQRTE_Z_P_Z_=3669,
ENC_URSRA_Z_ZI_=3670,
ENC_USDOT_Z_ZZZ_S=3671,
ENC_USDOT_Z_ZZZI_S=3672,
ENC_USHLLB_Z_ZI_=3673,
ENC_USHLLT_Z_ZI_=3674,
ENC_USMMLA_Z_ZZZ_=3675,
ENC_USQADD_Z_P_ZZ_=3676,
ENC_USRA_Z_ZI_=3677,
ENC_USUBLB_Z_ZZ_=3678,
ENC_USUBLT_Z_ZZ_=3679,
ENC_USUBWB_Z_ZZ_=3680,
ENC_USUBWT_Z_ZZ_=3681,
ENC_UUNPKHI_Z_Z_=3682,
ENC_UUNPKLO_Z_Z_=3683,
ENC_UXTB_Z_P_Z_=3684,
ENC_UXTH_Z_P_Z_=3685,
ENC_UXTW_Z_P_Z_=3686,
ENC_UZP1_P_PP_=3687,
ENC_UZP1_Z_ZZ_=3688,
ENC_UZP1_Z_ZZ_Q=3689,
ENC_UZP2_P_PP_=3690,
ENC_UZP2_Z_ZZ_=3691,
ENC_UZP2_Z_ZZ_Q=3692,
ENC_WHILEGE_P_P_RR_=3693,
ENC_WHILEGT_P_P_RR_=3694,
ENC_WHILEHI_P_P_RR_=3695,
ENC_WHILEHS_P_P_RR_=3696,
ENC_WHILELE_P_P_RR_=3697,
ENC_WHILELO_P_P_RR_=3698,
ENC_WHILELS_P_P_RR_=3699,
ENC_WHILELT_P_P_RR_=3700,
ENC_WHILERW_P_RR_=3701,
ENC_WHILEWR_P_RR_=3702,
ENC_WRFFR_F_P_=3703,
ENC_XAR_Z_ZZI_=3704,
ENC_ZIP1_P_PP_=3705,
ENC_ZIP1_Z_ZZ_=3706,
ENC_ZIP1_Z_ZZ_Q=3707,
ENC_ZIP2_P_PP_=3708,
ENC_ZIP2_Z_ZZ_=3709,
ENC_ZIP2_Z_ZZ_Q=3710,
};
enum Operation enc_to_oper(enum ENCODING);
enum Operation enc_to_oper2(enum ENCODING);
# 11 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/regs.h" 1
       

# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 4 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/regs.h" 2

#undef REG_NONE
# 18 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/regs.h"
enum Register {
 REG_NONE,
 REG_W0, REG_W1, REG_W2, REG_W3, REG_W4, REG_W5, REG_W6, REG_W7,
 REG_W8, REG_W9, REG_W10, REG_W11, REG_W12, REG_W13, REG_W14, REG_W15,
 REG_W16, REG_W17, REG_W18, REG_W19, REG_W20, REG_W21, REG_W22, REG_W23,
 REG_W24, REG_W25, REG_W26, REG_W27, REG_W28, REG_W29, REG_W30, REG_WZR, REG_WSP,
 REG_X0, REG_X1, REG_X2, REG_X3, REG_X4, REG_X5, REG_X6, REG_X7,
 REG_X8, REG_X9, REG_X10, REG_X11, REG_X12, REG_X13, REG_X14, REG_X15,
 REG_X16, REG_X17, REG_X18, REG_X19, REG_X20, REG_X21, REG_X22, REG_X23,
 REG_X24, REG_X25, REG_X26, REG_X27, REG_X28, REG_X29, REG_X30, REG_XZR, REG_SP,
 REG_V0, REG_V1, REG_V2, REG_V3, REG_V4, REG_V5, REG_V6, REG_V7,
 REG_V8, REG_V9, REG_V10, REG_V11, REG_V12, REG_V13, REG_V14, REG_V15,
 REG_V16, REG_V17, REG_V18, REG_V19, REG_V20, REG_V21, REG_V22, REG_V23,
 REG_V24, REG_V25, REG_V26, REG_V27, REG_V28, REG_V29, REG_V30, REG_VZR, REG_V31,
 REG_B0, REG_B1, REG_B2, REG_B3, REG_B4, REG_B5, REG_B6, REG_B7,
 REG_B8, REG_B9, REG_B10, REG_B11, REG_B12, REG_B13, REG_B14, REG_B15,
 REG_B16, REG_B17, REG_B18, REG_B19, REG_B20, REG_B21, REG_B22, REG_B23,
 REG_B24, REG_B25, REG_B26, REG_B27, REG_B28, REG_B29, REG_B30, REG_BZR, REG_B31,
 REG_H0, REG_H1, REG_H2, REG_H3, REG_H4, REG_H5, REG_H6, REG_H7,
 REG_H8, REG_H9, REG_H10, REG_H11, REG_H12, REG_H13, REG_H14, REG_H15,
 REG_H16, REG_H17, REG_H18, REG_H19, REG_H20, REG_H21, REG_H22, REG_H23,
 REG_H24, REG_H25, REG_H26, REG_H27, REG_H28, REG_H29, REG_H30, REG_HZR, REG_H31,
 REG_S0, REG_S1, REG_S2, REG_S3, REG_S4, REG_S5, REG_S6, REG_S7,
 REG_S8, REG_S9, REG_S10, REG_S11, REG_S12, REG_S13, REG_S14, REG_S15,
 REG_S16, REG_S17, REG_S18, REG_S19, REG_S20, REG_S21, REG_S22, REG_S23,
 REG_S24, REG_S25, REG_S26, REG_S27, REG_S28, REG_S29, REG_S30, REG_SZR, REG_S31,
 REG_D0, REG_D1, REG_D2, REG_D3, REG_D4, REG_D5, REG_D6, REG_D7,
 REG_D8, REG_D9, REG_D10, REG_D11, REG_D12, REG_D13, REG_D14, REG_D15,
 REG_D16, REG_D17, REG_D18, REG_D19, REG_D20, REG_D21, REG_D22, REG_D23,
 REG_D24, REG_D25, REG_D26, REG_D27, REG_D28, REG_D29, REG_D30, REG_DZR, REG_D31,
 REG_Q0, REG_Q1, REG_Q2, REG_Q3, REG_Q4, REG_Q5, REG_Q6, REG_Q7,
 REG_Q8, REG_Q9, REG_Q10, REG_Q11, REG_Q12, REG_Q13, REG_Q14, REG_Q15,
 REG_Q16, REG_Q17, REG_Q18, REG_Q19, REG_Q20, REG_Q21, REG_Q22, REG_Q23,
 REG_Q24, REG_Q25, REG_Q26, REG_Q27, REG_Q28, REG_Q29, REG_Q30, REG_QZR, REG_Q31,

 REG_V0_B0, REG_V0_B1, REG_V0_B2, REG_V0_B3, REG_V0_B4, REG_V0_B5, REG_V0_B6, REG_V0_B7,
 REG_V0_B8, REG_V0_B9, REG_V0_B10, REG_V0_B11, REG_V0_B12, REG_V0_B13, REG_V0_B14, REG_V0_B15,
 REG_V1_B0, REG_V1_B1, REG_V1_B2, REG_V1_B3, REG_V1_B4, REG_V1_B5, REG_V1_B6, REG_V1_B7,
 REG_V1_B8, REG_V1_B9, REG_V1_B10, REG_V1_B11, REG_V1_B12, REG_V1_B13, REG_V1_B14, REG_V1_B15,
 REG_V2_B0, REG_V2_B1, REG_V2_B2, REG_V2_B3, REG_V2_B4, REG_V2_B5, REG_V2_B6, REG_V2_B7,
 REG_V2_B8, REG_V2_B9, REG_V2_B10, REG_V2_B11, REG_V2_B12, REG_V2_B13, REG_V2_B14, REG_V2_B15,
 REG_V3_B0, REG_V3_B1, REG_V3_B2, REG_V3_B3, REG_V3_B4, REG_V3_B5, REG_V3_B6, REG_V3_B7,
 REG_V3_B8, REG_V3_B9, REG_V3_B10, REG_V3_B11, REG_V3_B12, REG_V3_B13, REG_V3_B14, REG_V3_B15,
 REG_V4_B0, REG_V4_B1, REG_V4_B2, REG_V4_B3, REG_V4_B4, REG_V4_B5, REG_V4_B6, REG_V4_B7,
 REG_V4_B8, REG_V4_B9, REG_V4_B10, REG_V4_B11, REG_V4_B12, REG_V4_B13, REG_V4_B14, REG_V4_B15,
 REG_V5_B0, REG_V5_B1, REG_V5_B2, REG_V5_B3, REG_V5_B4, REG_V5_B5, REG_V5_B6, REG_V5_B7,
 REG_V5_B8, REG_V5_B9, REG_V5_B10, REG_V5_B11, REG_V5_B12, REG_V5_B13, REG_V5_B14, REG_V5_B15,
 REG_V6_B0, REG_V6_B1, REG_V6_B2, REG_V6_B3, REG_V6_B4, REG_V6_B5, REG_V6_B6, REG_V6_B7,
 REG_V6_B8, REG_V6_B9, REG_V6_B10, REG_V6_B11, REG_V6_B12, REG_V6_B13, REG_V6_B14, REG_V6_B15,
 REG_V7_B0, REG_V7_B1, REG_V7_B2, REG_V7_B3, REG_V7_B4, REG_V7_B5, REG_V7_B6, REG_V7_B7,
 REG_V7_B8, REG_V7_B9, REG_V7_B10, REG_V7_B11, REG_V7_B12, REG_V7_B13, REG_V7_B14, REG_V7_B15,
 REG_V8_B0, REG_V8_B1, REG_V8_B2, REG_V8_B3, REG_V8_B4, REG_V8_B5, REG_V8_B6, REG_V8_B7,
 REG_V8_B8, REG_V8_B9, REG_V8_B10, REG_V8_B11, REG_V8_B12, REG_V8_B13, REG_V8_B14, REG_V8_B15,
 REG_V9_B0, REG_V9_B1, REG_V9_B2, REG_V9_B3, REG_V9_B4, REG_V9_B5, REG_V9_B6, REG_V9_B7,
 REG_V9_B8, REG_V9_B9, REG_V9_B10, REG_V9_B11, REG_V9_B12, REG_V9_B13, REG_V9_B14, REG_V9_B15,
 REG_V10_B0, REG_V10_B1, REG_V10_B2, REG_V10_B3, REG_V10_B4, REG_V10_B5, REG_V10_B6, REG_V10_B7,
 REG_V10_B8, REG_V10_B9, REG_V10_B10, REG_V10_B11, REG_V10_B12, REG_V10_B13, REG_V10_B14, REG_V10_B15,
 REG_V11_B0, REG_V11_B1, REG_V11_B2, REG_V11_B3, REG_V11_B4, REG_V11_B5, REG_V11_B6, REG_V11_B7,
 REG_V11_B8, REG_V11_B9, REG_V11_B10, REG_V11_B11, REG_V11_B12, REG_V11_B13, REG_V11_B14, REG_V11_B15,
 REG_V12_B0, REG_V12_B1, REG_V12_B2, REG_V12_B3, REG_V12_B4, REG_V12_B5, REG_V12_B6, REG_V12_B7,
 REG_V12_B8, REG_V12_B9, REG_V12_B10, REG_V12_B11, REG_V12_B12, REG_V12_B13, REG_V12_B14, REG_V12_B15,
 REG_V13_B0, REG_V13_B1, REG_V13_B2, REG_V13_B3, REG_V13_B4, REG_V13_B5, REG_V13_B6, REG_V13_B7,
 REG_V13_B8, REG_V13_B9, REG_V13_B10, REG_V13_B11, REG_V13_B12, REG_V13_B13, REG_V13_B14, REG_V13_B15,
 REG_V14_B0, REG_V14_B1, REG_V14_B2, REG_V14_B3, REG_V14_B4, REG_V14_B5, REG_V14_B6, REG_V14_B7,
 REG_V14_B8, REG_V14_B9, REG_V14_B10, REG_V14_B11, REG_V14_B12, REG_V14_B13, REG_V14_B14, REG_V14_B15,
 REG_V15_B0, REG_V15_B1, REG_V15_B2, REG_V15_B3, REG_V15_B4, REG_V15_B5, REG_V15_B6, REG_V15_B7,
 REG_V15_B8, REG_V15_B9, REG_V15_B10, REG_V15_B11, REG_V15_B12, REG_V15_B13, REG_V15_B14, REG_V15_B15,
 REG_V16_B0, REG_V16_B1, REG_V16_B2, REG_V16_B3, REG_V16_B4, REG_V16_B5, REG_V16_B6, REG_V16_B7,
 REG_V16_B8, REG_V16_B9, REG_V16_B10, REG_V16_B11, REG_V16_B12, REG_V16_B13, REG_V16_B14, REG_V16_B15,
 REG_V17_B0, REG_V17_B1, REG_V17_B2, REG_V17_B3, REG_V17_B4, REG_V17_B5, REG_V17_B6, REG_V17_B7,
 REG_V17_B8, REG_V17_B9, REG_V17_B10, REG_V17_B11, REG_V17_B12, REG_V17_B13, REG_V17_B14, REG_V17_B15,
 REG_V18_B0, REG_V18_B1, REG_V18_B2, REG_V18_B3, REG_V18_B4, REG_V18_B5, REG_V18_B6, REG_V18_B7,
 REG_V18_B8, REG_V18_B9, REG_V18_B10, REG_V18_B11, REG_V18_B12, REG_V18_B13, REG_V18_B14, REG_V18_B15,
 REG_V19_B0, REG_V19_B1, REG_V19_B2, REG_V19_B3, REG_V19_B4, REG_V19_B5, REG_V19_B6, REG_V19_B7,
 REG_V19_B8, REG_V19_B9, REG_V19_B10, REG_V19_B11, REG_V19_B12, REG_V19_B13, REG_V19_B14, REG_V19_B15,
 REG_V20_B0, REG_V20_B1, REG_V20_B2, REG_V20_B3, REG_V20_B4, REG_V20_B5, REG_V20_B6, REG_V20_B7,
 REG_V20_B8, REG_V20_B9, REG_V20_B10, REG_V20_B11, REG_V20_B12, REG_V20_B13, REG_V20_B14, REG_V20_B15,
 REG_V21_B0, REG_V21_B1, REG_V21_B2, REG_V21_B3, REG_V21_B4, REG_V21_B5, REG_V21_B6, REG_V21_B7,
 REG_V21_B8, REG_V21_B9, REG_V21_B10, REG_V21_B11, REG_V21_B12, REG_V21_B13, REG_V21_B14, REG_V21_B15,
 REG_V22_B0, REG_V22_B1, REG_V22_B2, REG_V22_B3, REG_V22_B4, REG_V22_B5, REG_V22_B6, REG_V22_B7,
 REG_V22_B8, REG_V22_B9, REG_V22_B10, REG_V22_B11, REG_V22_B12, REG_V22_B13, REG_V22_B14, REG_V22_B15,
 REG_V23_B0, REG_V23_B1, REG_V23_B2, REG_V23_B3, REG_V23_B4, REG_V23_B5, REG_V23_B6, REG_V23_B7,
 REG_V23_B8, REG_V23_B9, REG_V23_B10, REG_V23_B11, REG_V23_B12, REG_V23_B13, REG_V23_B14, REG_V23_B15,
 REG_V24_B0, REG_V24_B1, REG_V24_B2, REG_V24_B3, REG_V24_B4, REG_V24_B5, REG_V24_B6, REG_V24_B7,
 REG_V24_B8, REG_V24_B9, REG_V24_B10, REG_V24_B11, REG_V24_B12, REG_V24_B13, REG_V24_B14, REG_V24_B15,
 REG_V25_B0, REG_V25_B1, REG_V25_B2, REG_V25_B3, REG_V25_B4, REG_V25_B5, REG_V25_B6, REG_V25_B7,
 REG_V25_B8, REG_V25_B9, REG_V25_B10, REG_V25_B11, REG_V25_B12, REG_V25_B13, REG_V25_B14, REG_V25_B15,
 REG_V26_B0, REG_V26_B1, REG_V26_B2, REG_V26_B3, REG_V26_B4, REG_V26_B5, REG_V26_B6, REG_V26_B7,
 REG_V26_B8, REG_V26_B9, REG_V26_B10, REG_V26_B11, REG_V26_B12, REG_V26_B13, REG_V26_B14, REG_V26_B15,
 REG_V27_B0, REG_V27_B1, REG_V27_B2, REG_V27_B3, REG_V27_B4, REG_V27_B5, REG_V27_B6, REG_V27_B7,
 REG_V27_B8, REG_V27_B9, REG_V27_B10, REG_V27_B11, REG_V27_B12, REG_V27_B13, REG_V27_B14, REG_V27_B15,
 REG_V28_B0, REG_V28_B1, REG_V28_B2, REG_V28_B3, REG_V28_B4, REG_V28_B5, REG_V28_B6, REG_V28_B7,
 REG_V28_B8, REG_V28_B9, REG_V28_B10, REG_V28_B11, REG_V28_B12, REG_V28_B13, REG_V28_B14, REG_V28_B15,
 REG_V29_B0, REG_V29_B1, REG_V29_B2, REG_V29_B3, REG_V29_B4, REG_V29_B5, REG_V29_B6, REG_V29_B7,
 REG_V29_B8, REG_V29_B9, REG_V29_B10, REG_V29_B11, REG_V29_B12, REG_V29_B13, REG_V29_B14, REG_V29_B15,
 REG_V30_B0, REG_V30_B1, REG_V30_B2, REG_V30_B3, REG_V30_B4, REG_V30_B5, REG_V30_B6, REG_V30_B7,
 REG_V30_B8, REG_V30_B9, REG_V30_B10, REG_V30_B11, REG_V30_B12, REG_V30_B13, REG_V30_B14, REG_V30_B15,
 REG_V31_B0, REG_V31_B1, REG_V31_B2, REG_V31_B3, REG_V31_B4, REG_V31_B5, REG_V31_B6, REG_V31_B7,
 REG_V31_B8, REG_V31_B9, REG_V31_B10, REG_V31_B11, REG_V31_B12, REG_V31_B13, REG_V31_B14, REG_V31_B15,

 REG_V0_H0, REG_V0_H1, REG_V0_H2, REG_V0_H3, REG_V0_H4, REG_V0_H5, REG_V0_H6, REG_V0_H7,
 REG_V1_H0, REG_V1_H1, REG_V1_H2, REG_V1_H3, REG_V1_H4, REG_V1_H5, REG_V1_H6, REG_V1_H7,
 REG_V2_H0, REG_V2_H1, REG_V2_H2, REG_V2_H3, REG_V2_H4, REG_V2_H5, REG_V2_H6, REG_V2_H7,
 REG_V3_H0, REG_V3_H1, REG_V3_H2, REG_V3_H3, REG_V3_H4, REG_V3_H5, REG_V3_H6, REG_V3_H7,
 REG_V4_H0, REG_V4_H1, REG_V4_H2, REG_V4_H3, REG_V4_H4, REG_V4_H5, REG_V4_H6, REG_V4_H7,
 REG_V5_H0, REG_V5_H1, REG_V5_H2, REG_V5_H3, REG_V5_H4, REG_V5_H5, REG_V5_H6, REG_V5_H7,
 REG_V6_H0, REG_V6_H1, REG_V6_H2, REG_V6_H3, REG_V6_H4, REG_V6_H5, REG_V6_H6, REG_V6_H7,
 REG_V7_H0, REG_V7_H1, REG_V7_H2, REG_V7_H3, REG_V7_H4, REG_V7_H5, REG_V7_H6, REG_V7_H7,
 REG_V8_H0, REG_V8_H1, REG_V8_H2, REG_V8_H3, REG_V8_H4, REG_V8_H5, REG_V8_H6, REG_V8_H7,
 REG_V9_H0, REG_V9_H1, REG_V9_H2, REG_V9_H3, REG_V9_H4, REG_V9_H5, REG_V9_H6, REG_V9_H7,
 REG_V10_H0, REG_V10_H1, REG_V10_H2, REG_V10_H3, REG_V10_H4, REG_V10_H5, REG_V10_H6, REG_V10_H7,
 REG_V11_H0, REG_V11_H1, REG_V11_H2, REG_V11_H3, REG_V11_H4, REG_V11_H5, REG_V11_H6, REG_V11_H7,
 REG_V12_H0, REG_V12_H1, REG_V12_H2, REG_V12_H3, REG_V12_H4, REG_V12_H5, REG_V12_H6, REG_V12_H7,
 REG_V13_H0, REG_V13_H1, REG_V13_H2, REG_V13_H3, REG_V13_H4, REG_V13_H5, REG_V13_H6, REG_V13_H7,
 REG_V14_H0, REG_V14_H1, REG_V14_H2, REG_V14_H3, REG_V14_H4, REG_V14_H5, REG_V14_H6, REG_V14_H7,
 REG_V15_H0, REG_V15_H1, REG_V15_H2, REG_V15_H3, REG_V15_H4, REG_V15_H5, REG_V15_H6, REG_V15_H7,
 REG_V16_H0, REG_V16_H1, REG_V16_H2, REG_V16_H3, REG_V16_H4, REG_V16_H5, REG_V16_H6, REG_V16_H7,
 REG_V17_H0, REG_V17_H1, REG_V17_H2, REG_V17_H3, REG_V17_H4, REG_V17_H5, REG_V17_H6, REG_V17_H7,
 REG_V18_H0, REG_V18_H1, REG_V18_H2, REG_V18_H3, REG_V18_H4, REG_V18_H5, REG_V18_H6, REG_V18_H7,
 REG_V19_H0, REG_V19_H1, REG_V19_H2, REG_V19_H3, REG_V19_H4, REG_V19_H5, REG_V19_H6, REG_V19_H7,
 REG_V20_H0, REG_V20_H1, REG_V20_H2, REG_V20_H3, REG_V20_H4, REG_V20_H5, REG_V20_H6, REG_V20_H7,
 REG_V21_H0, REG_V21_H1, REG_V21_H2, REG_V21_H3, REG_V21_H4, REG_V21_H5, REG_V21_H6, REG_V21_H7,
 REG_V22_H0, REG_V22_H1, REG_V22_H2, REG_V22_H3, REG_V22_H4, REG_V22_H5, REG_V22_H6, REG_V22_H7,
 REG_V23_H0, REG_V23_H1, REG_V23_H2, REG_V23_H3, REG_V23_H4, REG_V23_H5, REG_V23_H6, REG_V23_H7,
 REG_V24_H0, REG_V24_H1, REG_V24_H2, REG_V24_H3, REG_V24_H4, REG_V24_H5, REG_V24_H6, REG_V24_H7,
 REG_V25_H0, REG_V25_H1, REG_V25_H2, REG_V25_H3, REG_V25_H4, REG_V25_H5, REG_V25_H6, REG_V25_H7,
 REG_V26_H0, REG_V26_H1, REG_V26_H2, REG_V26_H3, REG_V26_H4, REG_V26_H5, REG_V26_H6, REG_V26_H7,
 REG_V27_H0, REG_V27_H1, REG_V27_H2, REG_V27_H3, REG_V27_H4, REG_V27_H5, REG_V27_H6, REG_V27_H7,
 REG_V28_H0, REG_V28_H1, REG_V28_H2, REG_V28_H3, REG_V28_H4, REG_V28_H5, REG_V28_H6, REG_V28_H7,
 REG_V29_H0, REG_V29_H1, REG_V29_H2, REG_V29_H3, REG_V29_H4, REG_V29_H5, REG_V29_H6, REG_V29_H7,
 REG_V30_H0, REG_V30_H1, REG_V30_H2, REG_V30_H3, REG_V30_H4, REG_V30_H5, REG_V30_H6, REG_V30_H7,
 REG_V31_H0, REG_V31_H1, REG_V31_H2, REG_V31_H3, REG_V31_H4, REG_V31_H5, REG_V31_H6, REG_V31_H7,

 REG_V0_S0, REG_V0_S1, REG_V0_S2, REG_V0_S3, REG_V1_S0, REG_V1_S1, REG_V1_S2, REG_V1_S3,
 REG_V2_S0, REG_V2_S1, REG_V2_S2, REG_V2_S3, REG_V3_S0, REG_V3_S1, REG_V3_S2, REG_V3_S3,
 REG_V4_S0, REG_V4_S1, REG_V4_S2, REG_V4_S3, REG_V5_S0, REG_V5_S1, REG_V5_S2, REG_V5_S3,
 REG_V6_S0, REG_V6_S1, REG_V6_S2, REG_V6_S3, REG_V7_S0, REG_V7_S1, REG_V7_S2, REG_V7_S3,
 REG_V8_S0, REG_V8_S1, REG_V8_S2, REG_V8_S3, REG_V9_S0, REG_V9_S1, REG_V9_S2, REG_V9_S3,
 REG_V10_S0, REG_V10_S1, REG_V10_S2, REG_V10_S3, REG_V11_S0, REG_V11_S1, REG_V11_S2, REG_V11_S3,
 REG_V12_S0, REG_V12_S1, REG_V12_S2, REG_V12_S3, REG_V13_S0, REG_V13_S1, REG_V13_S2, REG_V13_S3,
 REG_V14_S0, REG_V14_S1, REG_V14_S2, REG_V14_S3, REG_V15_S0, REG_V15_S1, REG_V15_S2, REG_V15_S3,
 REG_V16_S0, REG_V16_S1, REG_V16_S2, REG_V16_S3, REG_V17_S0, REG_V17_S1, REG_V17_S2, REG_V17_S3,
 REG_V18_S0, REG_V18_S1, REG_V18_S2, REG_V18_S3, REG_V19_S0, REG_V19_S1, REG_V19_S2, REG_V19_S3,
 REG_V20_S0, REG_V20_S1, REG_V20_S2, REG_V20_S3, REG_V21_S0, REG_V21_S1, REG_V21_S2, REG_V21_S3,
 REG_V22_S0, REG_V22_S1, REG_V22_S2, REG_V22_S3, REG_V23_S0, REG_V23_S1, REG_V23_S2, REG_V23_S3,
 REG_V24_S0, REG_V24_S1, REG_V24_S2, REG_V24_S3, REG_V25_S0, REG_V25_S1, REG_V25_S2, REG_V25_S3,
 REG_V26_S0, REG_V26_S1, REG_V26_S2, REG_V26_S3, REG_V27_S0, REG_V27_S1, REG_V27_S2, REG_V27_S3,
 REG_V28_S0, REG_V28_S1, REG_V28_S2, REG_V28_S3, REG_V29_S0, REG_V29_S1, REG_V29_S2, REG_V29_S3,
 REG_V30_S0, REG_V30_S1, REG_V30_S2, REG_V30_S3, REG_V31_S0, REG_V31_S1, REG_V31_S2, REG_V31_S3,

 REG_V0_D0, REG_V0_D1, REG_V1_D0, REG_V1_D1, REG_V2_D0, REG_V2_D1, REG_V3_D0, REG_V3_D1,
 REG_V4_D0, REG_V4_D1, REG_V5_D0, REG_V5_D1, REG_V6_D0, REG_V6_D1, REG_V7_D0, REG_V7_D1,
 REG_V8_D0, REG_V8_D1, REG_V9_D0, REG_V9_D1, REG_V10_D0, REG_V10_D1, REG_V11_D0, REG_V11_D1,
 REG_V12_D0, REG_V12_D1, REG_V13_D0, REG_V13_D1, REG_V14_D0, REG_V14_D1, REG_V15_D0, REG_V15_D1,
 REG_V16_D0, REG_V16_D1, REG_V17_D0, REG_V17_D1, REG_V18_D0, REG_V18_D1, REG_V19_D0, REG_V19_D1,
 REG_V20_D0, REG_V20_D1, REG_V21_D0, REG_V21_D1, REG_V22_D0, REG_V22_D1, REG_V23_D0, REG_V23_D1,
 REG_V24_D0, REG_V24_D1, REG_V25_D0, REG_V25_D1, REG_V26_D0, REG_V26_D1, REG_V27_D0, REG_V27_D1,
 REG_V28_D0, REG_V28_D1, REG_V29_D0, REG_V29_D1, REG_V30_D0, REG_V30_D1, REG_V31_D0, REG_V31_D1,


 REG_Z0, REG_Z1, REG_Z2, REG_Z3, REG_Z4, REG_Z5, REG_Z6, REG_Z7,
 REG_Z8, REG_Z9, REG_Z10, REG_Z11, REG_Z12, REG_Z13, REG_Z14, REG_Z15,
 REG_Z16, REG_Z17, REG_Z18, REG_Z19, REG_Z20, REG_Z21, REG_Z22, REG_Z23,
 REG_Z24, REG_Z25, REG_Z26, REG_Z27, REG_Z28, REG_Z29, REG_Z30, REG_ZZR, REG_Z31,
 REG_P0, REG_P1, REG_P2, REG_P3, REG_P4, REG_P5, REG_P6, REG_P7,
 REG_P8, REG_P9, REG_P10, REG_P11, REG_P12, REG_P13, REG_P14, REG_P15,
 REG_P16, REG_P17, REG_P18, REG_P19, REG_P20, REG_P21, REG_P22, REG_P23,
 REG_P24, REG_P25, REG_P26, REG_P27, REG_P28, REG_P29, REG_P30, REG_P31,
 REG_PF0, REG_PF1, REG_PF2, REG_PF3, REG_PF4, REG_PF5, REG_PF6, REG_PF7,
 REG_PF8, REG_PF9, REG_PF10, REG_PF11, REG_PF12, REG_PF13, REG_PF14, REG_PF15,
 REG_PF16, REG_PF17, REG_PF18, REG_PF19, REG_PF20, REG_PF21, REG_PF22, REG_PF23,
 REG_PF24, REG_PF25, REG_PF26, REG_PF27, REG_PF28, REG_PF29, REG_PF30, REG_PF31,
 REG_END
};




const char *get_register_name(enum Register);
size_t get_register_size(enum Register);
# 12 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.h" 1
       

enum SystemReg {
 SYSREG_NONE=32769,
 REG_OSDTRRX_EL1=32770,
 REG_DBGBVR0_EL1=32772,
 REG_DBGBCR0_EL1=32773,
 REG_DBGWVR0_EL1=32774,
 REG_DBGWCR0_EL1=32775,
 REG_DBGBVR1_EL1=32780,
 REG_DBGBCR1_EL1=32781,
 REG_DBGWVR1_EL1=32782,
 REG_DBGWCR1_EL1=32783,
 REG_MDCCINT_EL1=32784,
 REG_MDSCR_EL1=32786,
 REG_DBGBVR2_EL1=32788,
 REG_DBGBCR2_EL1=32789,
 REG_DBGWVR2_EL1=32790,
 REG_DBGWCR2_EL1=32791,
 REG_OSDTRTX_EL1=32794,
 REG_DBGBVR3_EL1=32796,
 REG_DBGBCR3_EL1=32797,
 REG_DBGWVR3_EL1=32798,
 REG_DBGWCR3_EL1=32799,
 REG_DBGBVR4_EL1=32804,
 REG_DBGBCR4_EL1=32805,
 REG_DBGWVR4_EL1=32806,
 REG_DBGWCR4_EL1=32807,
 REG_DBGBVR5_EL1=32812,
 REG_DBGBCR5_EL1=32813,
 REG_DBGWVR5_EL1=32814,
 REG_DBGWCR5_EL1=32815,
 REG_OSECCR_EL1=32818,
 REG_DBGBVR6_EL1=32820,
 REG_DBGBCR6_EL1=32821,
 REG_DBGWVR6_EL1=32822,
 REG_DBGWCR6_EL1=32823,
 REG_DBGBVR7_EL1=32828,
 REG_DBGBCR7_EL1=32829,
 REG_DBGWVR7_EL1=32830,
 REG_DBGWCR7_EL1=32831,
 REG_DBGBVR8_EL1=32836,
 REG_DBGBCR8_EL1=32837,
 REG_DBGWVR8_EL1=32838,
 REG_DBGWCR8_EL1=32839,
 REG_DBGBVR9_EL1=32844,
 REG_DBGBCR9_EL1=32845,
 REG_DBGWVR9_EL1=32846,
 REG_DBGWCR9_EL1=32847,
 REG_DBGBVR10_EL1=32852,
 REG_DBGBCR10_EL1=32853,
 REG_DBGWVR10_EL1=32854,
 REG_DBGWCR10_EL1=32855,
 REG_DBGBVR11_EL1=32860,
 REG_DBGBCR11_EL1=32861,
 REG_DBGWVR11_EL1=32862,
 REG_DBGWCR11_EL1=32863,
 REG_DBGBVR12_EL1=32868,
 REG_DBGBCR12_EL1=32869,
 REG_DBGWVR12_EL1=32870,
 REG_DBGWCR12_EL1=32871,
 REG_DBGBVR13_EL1=32876,
 REG_DBGBCR13_EL1=32877,
 REG_DBGWVR13_EL1=32878,
 REG_DBGWCR13_EL1=32879,
 REG_DBGBVR14_EL1=32884,
 REG_DBGBCR14_EL1=32885,
 REG_DBGWVR14_EL1=32886,
 REG_DBGWCR14_EL1=32887,
 REG_DBGBVR15_EL1=32892,
 REG_DBGBCR15_EL1=32893,
 REG_DBGWVR15_EL1=32894,
 REG_DBGWCR15_EL1=32895,
 REG_OSLAR_EL1=32900,
 REG_OSDLR_EL1=32924,
 REG_DBGPRCR_EL1=32932,
 REG_DBGCLAIMSET_EL1=33734,
 REG_DBGCLAIMCLR_EL1=33742,
 REG_TRCTRACEIDR=34817,
 REG_TRCVICTLR=34818,
 REG_TRCSEQEVR0=34820,
 REG_TRCCNTRLDVR0=34821,
 REG_TRCIMSPEC0=34823,
 REG_TRCPRGCTLR=34824,
 REG_TRCQCTLR=34825,
 REG_TRCVIIECTLR=34826,
 REG_TRCSEQEVR1=34828,
 REG_TRCCNTRLDVR1=34829,
 REG_TRCIMSPEC1=34831,
 REG_TRCPROCSELR=34832,
 REG_TRCVISSCTLR=34834,
 REG_TRCSEQEVR2=34836,
 REG_TRCCNTRLDVR2=34837,
 REG_TRCIMSPEC2=34839,
 REG_TRCVIPCSSCTLR=34842,
 REG_TRCCNTRLDVR3=34845,
 REG_TRCIMSPEC3=34847,
 REG_TRCCONFIGR=34848,
 REG_TRCCNTCTLR0=34853,
 REG_TRCIMSPEC4=34855,
 REG_TRCCNTCTLR1=34861,
 REG_TRCIMSPEC5=34863,
 REG_TRCAUXCTLR=34864,
 REG_TRCSEQRSTEVR=34868,
 REG_TRCCNTCTLR2=34869,
 REG_TRCIMSPEC6=34871,
 REG_TRCSEQSTR=34876,
 REG_TRCCNTCTLR3=34877,
 REG_TRCIMSPEC7=34879,
 REG_TRCEVENTCTL0R=34880,
 REG_TRCVDCTLR=34882,
 REG_TRCEXTINSELR=34884,
 REG_TRCCNTVR0=34885,
 REG_TRCEVENTCTL1R=34888,
 REG_TRCVDSACCTLR=34890,
 REG_TRCEXTINSELR1=34892,
 REG_TRCCNTVR1=34893,
 REG_TRCRSR=34896,
 REG_TRCVDARCCTLR=34898,
 REG_TRCEXTINSELR2=34900,
 REG_TRCCNTVR2=34901,
 REG_TRCSTALLCTLR=34904,
 REG_TRCEXTINSELR3=34908,
 REG_TRCCNTVR3=34909,
 REG_TRCTSCTLR=34912,
 REG_TRCSYNCPR=34920,
 REG_TRCCCCTLR=34928,
 REG_TRCBBCTLR=34936,
 REG_TRCRSCTLR16=34945,
 REG_TRCSSCCR0=34946,
 REG_TRCSSPCICR0=34947,
 REG_TRCOSLAR=34948,
 REG_TRCRSCTLR17=34953,
 REG_TRCSSCCR1=34954,
 REG_TRCSSPCICR1=34955,
 REG_TRCRSCTLR2=34960,
 REG_TRCRSCTLR18=34961,
 REG_TRCSSCCR2=34962,
 REG_TRCSSPCICR2=34963,
 REG_TRCRSCTLR3=34968,
 REG_TRCRSCTLR19=34969,
 REG_TRCSSCCR3=34970,
 REG_TRCSSPCICR3=34971,
 REG_TRCRSCTLR4=34976,
 REG_TRCRSCTLR20=34977,
 REG_TRCSSCCR4=34978,
 REG_TRCSSPCICR4=34979,
 REG_TRCPDCR=34980,
 REG_TRCRSCTLR5=34984,
 REG_TRCRSCTLR21=34985,
 REG_TRCSSCCR5=34986,
 REG_TRCSSPCICR5=34987,
 REG_TRCRSCTLR6=34992,
 REG_TRCRSCTLR22=34993,
 REG_TRCSSCCR6=34994,
 REG_TRCSSPCICR6=34995,
 REG_TRCRSCTLR7=35000,
 REG_TRCRSCTLR23=35001,
 REG_TRCSSCCR7=35002,
 REG_TRCSSPCICR7=35003,
 REG_TRCRSCTLR8=35008,
 REG_TRCRSCTLR24=35009,
 REG_TRCSSCSR0=35010,
 REG_TRCRSCTLR9=35016,
 REG_TRCRSCTLR25=35017,
 REG_TRCSSCSR1=35018,
 REG_TRCRSCTLR10=35024,
 REG_TRCRSCTLR26=35025,
 REG_TRCSSCSR2=35026,
 REG_TRCRSCTLR11=35032,
 REG_TRCRSCTLR27=35033,
 REG_TRCSSCSR3=35034,
 REG_TRCRSCTLR12=35040,
 REG_TRCRSCTLR28=35041,
 REG_TRCSSCSR4=35042,
 REG_TRCRSCTLR13=35048,
 REG_TRCRSCTLR29=35049,
 REG_TRCSSCSR5=35050,
 REG_TRCRSCTLR14=35056,
 REG_TRCRSCTLR30=35057,
 REG_TRCSSCSR6=35058,
 REG_TRCRSCTLR15=35064,
 REG_TRCRSCTLR31=35065,
 REG_TRCSSCSR7=35066,
 REG_TRCACVR0=35072,
 REG_TRCACVR8=35073,
 REG_TRCACATR0=35074,
 REG_TRCACATR8=35075,
 REG_TRCDVCVR0=35076,
 REG_TRCDVCVR4=35077,
 REG_TRCDVCMR0=35078,
 REG_TRCDVCMR4=35079,
 REG_TRCACVR1=35088,
 REG_TRCACVR9=35089,
 REG_TRCACATR1=35090,
 REG_TRCACATR9=35091,
 REG_TRCACVR2=35104,
 REG_TRCACVR10=35105,
 REG_TRCACATR2=35106,
 REG_TRCACATR10=35107,
 REG_TRCDVCVR1=35108,
 REG_TRCDVCVR5=35109,
 REG_TRCDVCMR1=35110,
 REG_TRCDVCMR5=35111,
 REG_TRCACVR3=35120,
 REG_TRCACVR11=35121,
 REG_TRCACATR3=35122,
 REG_TRCACATR11=35123,
 REG_TRCACVR4=35136,
 REG_TRCACVR12=35137,
 REG_TRCACATR4=35138,
 REG_TRCACATR12=35139,
 REG_TRCDVCVR2=35140,
 REG_TRCDVCVR6=35141,
 REG_TRCDVCMR2=35142,
 REG_TRCDVCMR6=35143,
 REG_TRCACVR5=35152,
 REG_TRCACVR13=35153,
 REG_TRCACATR5=35154,
 REG_TRCACATR13=35155,
 REG_TRCACVR6=35168,
 REG_TRCACVR14=35169,
 REG_TRCACATR6=35170,
 REG_TRCACATR14=35171,
 REG_TRCDVCVR3=35172,
 REG_TRCDVCVR7=35173,
 REG_TRCDVCMR3=35174,
 REG_TRCDVCMR7=35175,
 REG_TRCACVR7=35184,
 REG_TRCACVR15=35185,
 REG_TRCACATR7=35186,
 REG_TRCACATR15=35187,
 REG_TRCCIDCVR0=35200,
 REG_TRCVMIDCVR0=35201,
 REG_TRCCIDCCTLR0=35202,
 REG_TRCCIDCCTLR1=35210,
 REG_TRCCIDCVR1=35216,
 REG_TRCVMIDCVR1=35217,
 REG_TRCVMIDCCTLR0=35218,
 REG_TRCVMIDCCTLR1=35226,
 REG_TRCCIDCVR2=35232,
 REG_TRCVMIDCVR2=35233,
 REG_TRCCIDCVR3=35248,
 REG_TRCVMIDCVR3=35249,
 REG_TRCCIDCVR4=35264,
 REG_TRCVMIDCVR4=35265,
 REG_TRCCIDCVR5=35280,
 REG_TRCVMIDCVR5=35281,
 REG_TRCCIDCVR6=35296,
 REG_TRCVMIDCVR6=35297,
 REG_TRCCIDCVR7=35312,
 REG_TRCVMIDCVR7=35313,
 REG_TRCITCTRL=35716,
 REG_TRCCLAIMSET=35782,
 REG_TRCCLAIMCLR=35790,
 REG_TRCLAR=35814,
 REG_TEECR32_EL1=36864,
 REG_TEEHBR32_EL1=36992,
 REG_DBGDTR_EL0=38944,
 REG_DBGDTRTX_EL0=38952,
 REG_DBGVCR32_EL2=41016,
 REG_SCTLR_EL1=49280,
 REG_ACTLR_EL1=49281,
 REG_CPACR_EL1=49282,
 REG_RGSR_EL1=49285,
 REG_GCR_EL1=49286,
 REG_TRFCR_EL1=49297,
 REG_TTBR0_EL1=49408,
 REG_TTBR1_EL1=49409,
 REG_TCR_EL1=49410,
 REG_APIAKEYLO_EL1=49416,
 REG_APIAKEYHI_EL1=49417,
 REG_APIBKEYLO_EL1=49418,
 REG_APIBKEYHI_EL1=49419,
 REG_APDAKEYLO_EL1=49424,
 REG_APDAKEYHI_EL1=49425,
 REG_APDBKEYLO_EL1=49426,
 REG_APDBKEYHI_EL1=49427,
 REG_APGAKEYLO_EL1=49432,
 REG_APGAKEYHI_EL1=49433,
 REG_SPSR_EL1=49664,
 REG_ELR_EL1=49665,
 REG_SP_EL0=49672,
 REG_SPSEL=49680,
 REG_CURRENTEL=49682,
 REG_PAN=49683,
 REG_UAO=49684,
 REG_ICC_PMR_EL1=49712,
 REG_AFSR0_EL1=49800,
 REG_AFSR1_EL1=49801,
 REG_ESR_EL1=49808,
 REG_ERRSELR_EL1=49817,
 REG_ERXCTLR_EL1=49825,
 REG_ERXSTATUS_EL1=49826,
 REG_ERXADDR_EL1=49827,
 REG_ERXPFGCTL_EL1=49829,
 REG_ERXPFGCDN_EL1=49830,
 REG_ERXMISC0_EL1=49832,
 REG_ERXMISC1_EL1=49833,
 REG_ERXMISC2_EL1=49834,
 REG_ERXMISC3_EL1=49835,
 REG_ERXTS_EL1=49839,
 REG_TFSR_EL1=49840,
 REG_TFSRE0_EL1=49841,
 REG_FAR_EL1=49920,
 REG_PAR_EL1=50080,
 REG_PMSCR_EL1=50376,
 REG_PMSICR_EL1=50378,
 REG_PMSIRR_EL1=50379,
 REG_PMSFCR_EL1=50380,
 REG_PMSEVFR_EL1=50381,
 REG_PMSLATFR_EL1=50382,
 REG_PMSIDR_EL1=50383,
 REG_PMBLIMITR_EL1=50384,
 REG_PMBPTR_EL1=50385,
 REG_PMBSR_EL1=50387,
 REG_PMBIDR_EL1=50391,
 REG_TRBLIMITR_EL1=50392,
 REG_TRBPTR_EL1=50393,
 REG_TRBBASER_EL1=50394,
 REG_TRBSR_EL1=50395,
 REG_TRBMAR_EL1=50396,
 REG_TRBTRG_EL1=50398,
 REG_PMINTENSET_EL1=50417,
 REG_PMINTENCLR_EL1=50418,
 REG_PMMIR_EL1=50422,
 REG_MAIR_EL1=50448,
 REG_AMAIR_EL1=50456,
 REG_LORSA_EL1=50464,
 REG_LOREA_EL1=50465,
 REG_LORN_EL1=50466,
 REG_LORC_EL1=50467,
 REG_MPAM1_EL1=50472,
 REG_MPAM0_EL1=50473,
 REG_VBAR_EL1=50688,
 REG_RMR_EL1=50690,
 REG_DISR_EL1=50697,
 REG_ICC_EOIR0_EL1=50753,
 REG_ICC_BPR0_EL1=50755,
 REG_ICC_AP0R0_EL1=50756,
 REG_ICC_AP0R1_EL1=50757,
 REG_ICC_AP0R2_EL1=50758,
 REG_ICC_AP0R3_EL1=50759,
 REG_ICC_AP1R0_EL1=50760,
 REG_ICC_AP1R1_EL1=50761,
 REG_ICC_AP1R2_EL1=50762,
 REG_ICC_AP1R3_EL1=50763,
 REG_ICC_DIR_EL1=50777,
 REG_ICC_SGI1R_EL1=50781,
 REG_ICC_ASGI1R_EL1=50782,
 REG_ICC_SGI0R_EL1=50783,
 REG_ICC_EOIR1_EL1=50785,
 REG_ICC_BPR1_EL1=50787,
 REG_ICC_CTLR_EL1=50788,
 REG_ICC_SRE_EL1=50789,
 REG_ICC_IGRPEN0_EL1=50790,
 REG_ICC_IGRPEN1_EL1=50791,
 REG_ICC_SEIEN_EL1=50792,
 REG_CONTEXTIDR_EL1=50817,
 REG_TPIDR_EL1=50820,
 REG_SCXTNUM_EL1=50823,
 REG_CNTKCTL_EL1=50952,
 REG_CSSELR_EL1=53248,
 REG_NZCV=55824,
 REG_DAIFSET=55825,
 REG_DIT=55829,
 REG_SSBS=55830,
 REG_TCO=55831,
 REG_FPCR=55840,
 REG_FPSR=55841,
 REG_DSPSR_EL0=55848,
 REG_DLR_EL0=55849,
 REG_PMCR_EL0=56544,
 REG_PMCNTENSET_EL0=56545,
 REG_PMCNTENCLR_EL0=56546,
 REG_PMOVSCLR_EL0=56547,
 REG_PMSWINC_EL0=56548,
 REG_PMSELR_EL0=56549,
 REG_PMCCNTR_EL0=56552,
 REG_PMXEVTYPER_EL0=56553,
 REG_PMXEVCNTR_EL0=56554,
 REG_DAIFCLR=56557,
 REG_PMUSERENR_EL0=56560,
 REG_PMOVSSET_EL0=56563,
 REG_TPIDR_EL0=56962,
 REG_TPIDRRO_EL0=56963,
 REG_SCXTNUM_EL0=56967,
 REG_AMCR_EL0=56976,
 REG_AMUSERENR_EL0=56979,
 REG_AMCNTENCLR0_EL0=56980,
 REG_AMCNTENSET0_EL0=56981,
 REG_AMCNTENCLR1_EL0=56984,
 REG_AMCNTENSET1_EL0=56985,
 REG_AMEVCNTR00_EL0=56992,
 REG_AMEVCNTR01_EL0=56993,
 REG_AMEVCNTR02_EL0=56994,
 REG_AMEVCNTR03_EL0=56995,
 REG_AMEVCNTR10_EL0=57056,
 REG_AMEVCNTR11_EL0=57057,
 REG_AMEVCNTR12_EL0=57058,
 REG_AMEVCNTR13_EL0=57059,
 REG_AMEVCNTR14_EL0=57060,
 REG_AMEVCNTR15_EL0=57061,
 REG_AMEVCNTR16_EL0=57062,
 REG_AMEVCNTR17_EL0=57063,
 REG_AMEVCNTR18_EL0=57064,
 REG_AMEVCNTR19_EL0=57065,
 REG_AMEVCNTR110_EL0=57066,
 REG_AMEVCNTR111_EL0=57067,
 REG_AMEVCNTR112_EL0=57068,
 REG_AMEVCNTR113_EL0=57069,
 REG_AMEVCNTR114_EL0=57070,
 REG_AMEVCNTR115_EL0=57071,
 REG_AMEVTYPER10_EL0=57072,
 REG_AMEVTYPER11_EL0=57073,
 REG_AMEVTYPER12_EL0=57074,
 REG_AMEVTYPER13_EL0=57075,
 REG_AMEVTYPER14_EL0=57076,
 REG_AMEVTYPER15_EL0=57077,
 REG_AMEVTYPER16_EL0=57078,
 REG_AMEVTYPER17_EL0=57079,
 REG_AMEVTYPER18_EL0=57080,
 REG_AMEVTYPER19_EL0=57081,
 REG_AMEVTYPER110_EL0=57082,
 REG_AMEVTYPER111_EL0=57083,
 REG_AMEVTYPER112_EL0=57084,
 REG_AMEVTYPER113_EL0=57085,
 REG_AMEVTYPER114_EL0=57086,
 REG_AMEVTYPER115_EL0=57087,
 REG_CNTFRQ_EL0=57088,
 REG_CNTP_TVAL_EL0=57104,
 REG_CNTP_CTL_EL0=57105,
 REG_CNTP_CVAL_EL0=57106,
 REG_CNTV_TVAL_EL0=57112,
 REG_CNTV_CTL_EL0=57113,
 REG_CNTV_CVAL_EL0=57114,
 REG_PMEVCNTR0_EL0=57152,
 REG_PMEVCNTR1_EL0=57153,
 REG_PMEVCNTR2_EL0=57154,
 REG_PMEVCNTR3_EL0=57155,
 REG_PMEVCNTR4_EL0=57156,
 REG_PMEVCNTR5_EL0=57157,
 REG_PMEVCNTR6_EL0=57158,
 REG_PMEVCNTR7_EL0=57159,
 REG_PMEVCNTR8_EL0=57160,
 REG_PMEVCNTR9_EL0=57161,
 REG_PMEVCNTR10_EL0=57162,
 REG_PMEVCNTR11_EL0=57163,
 REG_PMEVCNTR12_EL0=57164,
 REG_PMEVCNTR13_EL0=57165,
 REG_PMEVCNTR14_EL0=57166,
 REG_PMEVCNTR15_EL0=57167,
 REG_PMEVCNTR16_EL0=57168,
 REG_PMEVCNTR17_EL0=57169,
 REG_PMEVCNTR18_EL0=57170,
 REG_PMEVCNTR19_EL0=57171,
 REG_PMEVCNTR20_EL0=57172,
 REG_PMEVCNTR21_EL0=57173,
 REG_PMEVCNTR22_EL0=57174,
 REG_PMEVCNTR23_EL0=57175,
 REG_PMEVCNTR24_EL0=57176,
 REG_PMEVCNTR25_EL0=57177,
 REG_PMEVCNTR26_EL0=57178,
 REG_PMEVCNTR27_EL0=57179,
 REG_PMEVCNTR28_EL0=57180,
 REG_PMEVCNTR29_EL0=57181,
 REG_PMEVCNTR30_EL0=57182,
 REG_PMEVTYPER0_EL0=57184,
 REG_PMEVTYPER1_EL0=57185,
 REG_PMEVTYPER2_EL0=57186,
 REG_PMEVTYPER3_EL0=57187,
 REG_PMEVTYPER4_EL0=57188,
 REG_PMEVTYPER5_EL0=57189,
 REG_PMEVTYPER6_EL0=57190,
 REG_PMEVTYPER7_EL0=57191,
 REG_PMEVTYPER8_EL0=57192,
 REG_PMEVTYPER9_EL0=57193,
 REG_PMEVTYPER10_EL0=57194,
 REG_PMEVTYPER11_EL0=57195,
 REG_PMEVTYPER12_EL0=57196,
 REG_PMEVTYPER13_EL0=57197,
 REG_PMEVTYPER14_EL0=57198,
 REG_PMEVTYPER15_EL0=57199,
 REG_PMEVTYPER16_EL0=57200,
 REG_PMEVTYPER17_EL0=57201,
 REG_PMEVTYPER18_EL0=57202,
 REG_PMEVTYPER19_EL0=57203,
 REG_PMEVTYPER20_EL0=57204,
 REG_PMEVTYPER21_EL0=57205,
 REG_PMEVTYPER22_EL0=57206,
 REG_PMEVTYPER23_EL0=57207,
 REG_PMEVTYPER24_EL0=57208,
 REG_PMEVTYPER25_EL0=57209,
 REG_PMEVTYPER26_EL0=57210,
 REG_PMEVTYPER27_EL0=57211,
 REG_PMEVTYPER28_EL0=57212,
 REG_PMEVTYPER29_EL0=57213,
 REG_PMEVTYPER30_EL0=57214,
 REG_PMCCFILTR_EL0=57215,
 REG_VPIDR_EL2=57344,
 REG_VMPIDR_EL2=57349,
 REG_SCTLR_EL2=57472,
 REG_ACTLR_EL2=57473,
 REG_HCR_EL2=57480,
 REG_MDCR_EL2=57481,
 REG_CPTR_EL2=57482,
 REG_HSTR_EL2=57483,
 REG_HACR_EL2=57487,
 REG_TRFCR_EL2=57489,
 REG_SDER32_EL2=57497,
 REG_TTBR0_EL2=57600,
 REG_TTBR1_EL2=57601,
 REG_TCR_EL2=57602,
 REG_VTTBR_EL2=57608,
 REG_VTCR_EL2=57610,
 REG_VNCR_EL2=57616,
 REG_VSTTBR_EL2=57648,
 REG_VSTCR_EL2=57650,
 REG_DACR32_EL2=57728,
 REG_SPSR_EL2=57856,
 REG_ELR_EL2=57857,
 REG_SP_EL1=57864,
 REG_SPSR_IRQ=57880,
 REG_SPSR_ABT=57881,
 REG_SPSR_UND=57882,
 REG_SPSR_FIQ=57883,
 REG_IFSR32_EL2=57985,
 REG_AFSR0_EL2=57992,
 REG_AFSR1_EL2=57993,
 REG_ESR_EL2=58000,
 REG_VSESR_EL2=58003,
 REG_FPEXC32_EL2=58008,
 REG_TFSR_EL2=58032,
 REG_FAR_EL2=58112,
 REG_HPFAR_EL2=58116,
 REG_PMSCR_EL2=58568,
 REG_MAIR_EL2=58640,
 REG_AMAIR_EL2=58648,
 REG_MPAMHCR_EL2=58656,
 REG_MPAMVPMV_EL2=58657,
 REG_MPAM2_EL2=58664,
 REG_MPAMVPM0_EL2=58672,
 REG_MPAMVPM1_EL2=58673,
 REG_MPAMVPM2_EL2=58674,
 REG_MPAMVPM3_EL2=58675,
 REG_MPAMVPM4_EL2=58676,
 REG_MPAMVPM5_EL2=58677,
 REG_MPAMVPM6_EL2=58678,
 REG_MPAMVPM7_EL2=58679,
 REG_VBAR_EL2=58880,
 REG_RMR_EL2=58882,
 REG_VDISR_EL2=58889,
 REG_ICH_AP0R0_EL2=58944,
 REG_ICH_AP0R1_EL2=58945,
 REG_ICH_AP0R2_EL2=58946,
 REG_ICH_AP0R3_EL2=58947,
 REG_ICH_AP1R0_EL2=58952,
 REG_ICH_AP1R1_EL2=58953,
 REG_ICH_AP1R2_EL2=58954,
 REG_ICH_AP1R3_EL2=58955,
 REG_ICH_VSEIR_EL2=58956,
 REG_ICC_SRE_EL2=58957,
 REG_ICH_HCR_EL2=58968,
 REG_ICH_MISR_EL2=58970,
 REG_ICH_VMCR_EL2=58975,
 REG_ICH_LR0_EL2=58976,
 REG_ICH_LR1_EL2=58977,
 REG_ICH_LR2_EL2=58978,
 REG_ICH_LR3_EL2=58979,
 REG_ICH_LR4_EL2=58980,
 REG_ICH_LR5_EL2=58981,
 REG_ICH_LR6_EL2=58982,
 REG_ICH_LR7_EL2=58983,
 REG_ICH_LR8_EL2=58984,
 REG_ICH_LR9_EL2=58985,
 REG_ICH_LR10_EL2=58986,
 REG_ICH_LR11_EL2=58987,
 REG_ICH_LR12_EL2=58988,
 REG_ICH_LR13_EL2=58989,
 REG_ICH_LR14_EL2=58990,
 REG_ICH_LR15_EL2=58991,
 REG_CONTEXTIDR_EL2=59009,
 REG_TPIDR_EL2=59010,
 REG_SCXTNUM_EL2=59015,
 REG_CNTVOFF_EL2=59139,
 REG_CNTHCTL_EL2=59144,
 REG_CNTHP_TVAL_EL2=59152,
 REG_CNTHP_CTL_EL2=59153,
 REG_CNTHP_CVAL_EL2=59154,
 REG_CNTHV_TVAL_EL2=59160,
 REG_CNTHV_CTL_EL2=59161,
 REG_CNTHV_CVAL_EL2=59162,
 REG_CNTHVS_TVAL_EL2=59168,
 REG_CNTHVS_CTL_EL2=59169,
 REG_CNTHVS_CVAL_EL2=59170,
 REG_CNTHPS_TVAL_EL2=59176,
 REG_CNTHPS_CTL_EL2=59177,
 REG_CNTHPS_CVAL_EL2=59178,
 REG_SCTLR_EL12=59520,
 REG_CPACR_EL12=59522,
 REG_TRFCR_EL12=59537,
 REG_TTBR0_EL12=59648,
 REG_TTBR1_EL12=59649,
 REG_TCR_EL12=59650,
 REG_SPSR_EL12=59904,
 REG_ELR_EL12=59905,
 REG_AFSR0_EL12=60040,
 REG_AFSR1_EL12=60041,
 REG_ESR_EL12=60048,
 REG_TFSR_EL12=60080,
 REG_FAR_EL12=60160,
 REG_PMSCR_EL12=60616,
 REG_MAIR_EL12=60688,
 REG_AMAIR_EL12=60696,
 REG_MPAM1_EL12=60712,
 REG_VBAR_EL12=60928,
 REG_CONTEXTIDR_EL12=61057,
 REG_SCXTNUM_EL12=61063,
 REG_CNTKCTL_EL12=61192,
 REG_CNTP_TVAL_EL02=61200,
 REG_CNTP_CTL_EL02=61201,
 REG_CNTP_CVAL_EL02=61202,
 REG_CNTV_TVAL_EL02=61208,
 REG_CNTV_CTL_EL02=61209,
 REG_CNTV_CVAL_EL02=61210,
 REG_SCTLR_EL3=61568,
 REG_ACTLR_EL3=61569,
 REG_SCR_EL3=61576,
 REG_SDER32_EL3=61577,
 REG_CPTR_EL3=61578,
 REG_MDCR_EL3=61593,
 REG_TTBR0_EL3=61696,
 REG_TCR_EL3=61698,
 REG_SPSR_EL3=61952,
 REG_ELR_EL3=61953,
 REG_SP_EL2=61960,
 REG_AFSR0_EL3=62088,
 REG_AFSR1_EL3=62089,
 REG_ESR_EL3=62096,
 REG_TFSR_EL3=62128,
 REG_FAR_EL3=62208,
 REG_MAIR_EL3=62736,
 REG_AMAIR_EL3=62744,
 REG_MPAM3_EL3=62760,
 REG_VBAR_EL3=62976,
 REG_RMR_EL3=62978,
 REG_ICC_CTLR_EL3=63076,
 REG_ICC_SRE_EL3=63077,
 REG_ICC_IGRPEN1_EL3=63079,
 REG_TPIDR_EL3=63106,
 REG_SCXTNUM_EL3=63111,
 REG_CNTPS_TVAL_EL1=65296,
 REG_CNTPS_CTL_EL1=65297,
 REG_CNTPS_CVAL_EL1=65298,

 REG_PSTATE_SPSEL=65299,

 SYSREG_UNKNOWN=65300,
 SYSREG_END=65301,
};




const char *get_system_register_name(enum SystemReg);
const char *get_system_register_name_decomposed(int op0, int op1, int CRn, int CRm, int op2);
# 13 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 2
# 22 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
typedef union {
 unsigned int ui;
 float fn;
} ImmFloatUnion;


enum ArrangementSpec {
 ARRSPEC_NONE=0,

 ARRSPEC_FULL=1,


 ARRSPEC_2DOUBLES=2,
 ARRSPEC_4SINGLES=3,
 ARRSPEC_8HALVES=4,
 ARRSPEC_16BYTES=5,


 ARRSPEC_1DOUBLE=6,
 ARRSPEC_2SINGLES=7,
 ARRSPEC_4HALVES=8,
 ARRSPEC_8BYTES=9,


 ARRSPEC_1SINGLE=10,
 ARRSPEC_2HALVES=11,
 ARRSPEC_4BYTES=12,


 ARRSPEC_1HALF=13,


 ARRSPEC_1BYTE=14,
};





#define DECODE_STATUS_OK 0
#define DECODE_STATUS_RESERVED -1
#define DECODE_STATUS_UNMATCHED -2
#define DECODE_STATUS_UNALLOCATED -3
#define DECODE_STATUS_UNDEFINED -4

#define DECODE_STATUS_END_OF_INSTRUCTION -5
#define DECODE_STATUS_LOST -6
#define DECODE_STATUS_UNREACHABLE -7
#define DECODE_STATUS_ASSERT_FAILED -8
#define DECODE_STATUS_ERROR_OPERANDS -9





#define FPCR_AHP ((uint64_t)1 << 26)
#define FPCR_DN ((uint64_t)1 << 25)
#define FPCR_FZ ((uint64_t)1 << 24)
#define FPCR_RMode (uint64_t)0xC00000
#define FPCR_Stride (uint64_t)0x300000
#define FPCR_FZ16 ((uint64_t)1 << 19)
#define FPCR_Len (uint64_t)0x30000
#define FPCR_IDE ((uint64_t)1 << 15)
#define FPCR_IXE ((uint64_t)1 << 12)
#define FPCR_UFE ((uint64_t)1 << 11)
#define FPCR_OFE ((uint64_t)1 << 10)
#define FPCR_DZE ((uint64_t)1 << 9)
#define FPCR_IOE ((uint64_t)1 << 8)

#define FPCR_GET_AHP(X) SLICE(X,26,26)
#define FPCR_GET_DN(X) SLICE(X,25,25)
#define FPCR_GET_FZ(X) SLICE(X,24,24)
#define FPCR_GET_RMode(X) SLICE(X,23,22)
#define FPCR_GET_Stride(X) SLICE(X,21,20)
#define FPCR_GET_FZ16(X) SLICE(X,19,19)
#define FPCR_GET_Len(X) SLICE(X,18,16)
#define FPCR_GET_IDE(X) SLICE(X,15,15)
#define FPCR_GET_IXE(X) SLICE(X,12,12)
#define FPCR_GET_UFE(X) SLICE(X,11,11)
#define FPCR_GET_OFE(X) SLICE(X,10,10)
#define FPCR_GET_DZE(X) SLICE(X,9,9)
#define FPCR_GET_IOE(X) SLICE(X,8,8)





typedef struct context_ {
 uint32_t insword;
 uint64_t address;
 uint64_t features0;
 uint64_t features1;


 uint8_t pstate_btype;
 uint8_t pstate_el;
 uint8_t pstate_uao;
 
# 119 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 119 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     BTypeCompatible;
 uint8_t BTypeNext;
 
# 121 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 121 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     halted;
 uint64_t FPCR;
 
# 123 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 123 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     EDSCR_HDE;


 uint64_t A;
 uint64_t ADD;
 uint64_t AccType_NORMAL;
 uint64_t AccType_STREAM;
 uint64_t AccType_UNPRIV;
 uint64_t AccType_VEC;
 uint64_t AccType_VECSTREAM;
 uint64_t B;
 uint64_t C;
 uint64_t CRm;
 uint64_t CRn;
 uint64_t dst, D;
 uint64_t E;
 uint64_t H;
 uint64_t HCR_EL2_E2H, HCR_EL2_NV, HCR_EL2_NV1, HCR_EL2_TGE;
 uint64_t k;
 uint64_t L;
 uint64_t LL;
 uint64_t M;
 uint64_t N;
 uint64_t O;
 uint64_t Op0, Op3;
 uint64_t P;
 uint64_t Pd, Pdm, Pdn, Pg, Pm, Pn, Pt;
 uint64_t Q, Qa, Qd, Qm, Qn, Qt, Qt2;
 uint64_t reason, retry;
 uint64_t R, Ra, Rd, Rdn, Rm, Rmhi, Rn, Rs, Rt, Rt2;
 uint64_t s1, s2, sel1, sel2, S, Sa, Sd, Sm, Sn, St, St2;
 uint64_t S10;
 uint64_t SCTLR_EL1_UMA;
 uint64_t T;
 uint64_t U;
 uint64_t US;
 uint64_t V, Va, Vd, Vdn, Vm, Vn, Vt, Vt2;
 uint64_t W, Wa, Wd, Wdn, Wm, Wn, Ws, Wt, Wt2;
 uint64_t Xa, Xd, Xdn, Xm, Xn, Xs, Xt, Xt2;
 uint64_t Z, Za, Zd, Zda, Zdn, Zm, Zn, Zt;
 uint64_t a;
 uint64_t abs;
 uint64_t ac;
 uint64_t acc;
 uint64_t acctype;
 uint64_t accumulate;
 uint64_t amount;
 uint64_t and_test;
 uint64_t asimdimm;
 uint64_t b;
 uint64_t b40;
 uint64_t b5;
 uint64_t bit_pos;
 uint64_t bit_val;
 uint64_t branch_type;
 uint64_t c;
 uint64_t cmode;
 uint64_t cmp, cmph, cmpl, cmp_eq, cmp_with_zero;
 uint64_t comment;
 uint64_t comparison;
 uint64_t cond;
 uint64_t condition;
 uint64_t container_size;
 uint64_t containers;
 uint64_t countop;
 uint64_t crc32c;
 uint64_t csize;
 uint64_t d, da, data, datasize, double_table;
 uint64_t dtype, dtypeh, dtypel;
 uint64_t d_esize;
 uint64_t decrypt;
 uint64_t destsize;
 uint64_t dm;
 uint64_t dn;
 uint64_t domain;
 uint64_t dst_index;
 uint64_t dst_unsigned;
 uint64_t dstsize;
 uint64_t e;
 uint64_t elements;
 uint64_t elements_per_container;
 uint64_t else_inc;
 uint64_t else_inv;
 uint64_t elsize;
 uint64_t eq;
 uint64_t esize;
 uint64_t exact;
 uint64_t extend;
 uint64_t extend_type;
 uint64_t f, ff;
 uint64_t field;
 uint64_t flags;
 uint64_t fltsize;
 uint64_t fpop;
 uint64_t fracbits;
 uint64_t ftype;
 uint64_t g;
 uint64_t h;
 uint64_t has_result;
 uint64_t hi;
 uint64_t hw;
 uint64_t i, i1, i2, i2h, i2l,i3h, i3l;
 uint64_t idxdsize;
 uint64_t imm;
 uint64_t imm1;
 uint64_t imm12;
 uint64_t imm13;
 uint64_t imm14;
 uint64_t imm16;
 uint64_t imm19;
 uint64_t imm2;
 uint64_t imm26;
 uint64_t imm3;
 uint64_t imm4;
 uint64_t imm5;
 uint64_t imm5b;
 uint64_t imm6;
 uint64_t imm64;
 uint64_t imm7;
 uint64_t imm8;
 uint64_t imm8h;
 uint64_t imm8l;
 uint64_t imm9;
 uint64_t imm9h;
 uint64_t imm9l;
 uint64_t immb;
 uint64_t immh;
 uint64_t immhi;
 uint64_t immlo;
 uint64_t immr;
 uint64_t imms;
 uint64_t index;
 uint64_t init_scale;
 uint64_t intsize;
 uint64_t int_U;
 uint64_t invert;
 uint64_t inzero;
 uint64_t isBefore;
 uint64_t is_tbl;
 uint64_t iszero;
 uint64_t ldacctype;
 uint64_t len;
 uint64_t level;
 uint64_t lsb;
 uint64_t lt;
 uint64_t m;
 uint64_t mask;
 uint64_t mbytes;
 uint64_t memop;
 uint64_t merging;
 uint64_t min;
 uint64_t min_EL;
 uint64_t minimum;
 uint64_t msb;
 uint64_t msize;
 uint64_t msz;
 uint64_t mulx_op;
 uint64_t n;
 uint64_t ne;
 uint64_t need_secure;
 uint64_t neg;
 uint64_t neg_i;
 uint64_t neg_r;
 uint64_t negated;
 uint64_t nreg;
 uint64_t nzcv;
 uint64_t nXS;
 uint64_t o0, o1, o2, o3;
 uint64_t offs_size;
 uint64_t offs_unsigned;
 uint64_t offset;
 uint64_t op1_neg;
 uint64_t op1_unsigned;
 uint64_t op, op0, op1, op2, op3, op4, op21, op31, op54;
 uint64_t op2_unsigned;
 uint64_t op3_neg;
 uint64_t opa_neg;
 uint64_t opc;
 uint64_t opc2;
 uint64_t opcode, opcode2;
 uint64_t operand;
 uint64_t operation_;
 uint64_t opt, option;
 uint64_t osize;
 uint64_t pac;
 uint64_t page;
 uint64_t pair;
 uint64_t pairs;
 uint64_t part;
 uint64_t part1;
 uint64_t pat;
 uint64_t pattern;
 uint64_t poly;
 uint64_t pos;
 uint64_t position;
 uint64_t postindex;
 uint64_t pref_hint;
 uint64_t prfop;
 uint64_t ptype;
 uint64_t rd;
 uint64_t read;
 uint64_t regs;
 uint64_t regsize;
 uint64_t replicate;
 uint64_t rmode;
 uint64_t rot;
 uint64_t round;
 uint64_t rounding;
 uint64_t rpt;
 uint64_t rsize;
 uint64_t rn_unknown, rt_unknown;
 uint64_t rw;
 uint64_t s;
 uint64_t s_esize;
 uint64_t saturating;
 uint64_t scale;
 uint64_t sel;
 uint64_t sel_a;
 uint64_t sel_b;
 uint64_t selem;
 uint64_t setflags;
 uint64_t sf;
 uint64_t sh;
 uint64_t shift;
 uint64_t shift_amount;
 uint64_t shift_type;
 uint64_t signal_all_nans;
 uint64_t signed_;
 uint64_t simm7;
 uint64_t size;
 uint64_t source_is_sp;
 uint64_t src_index;
 uint64_t src_unsigned;
 uint64_t srcsize;
 uint64_t ssize, ssz;
 uint64_t stacctype;
 uint64_t stream;
 uint64_t sub_i;
 uint64_t sub_op;
 uint64_t sub_r;
 uint64_t swsize;
 uint64_t sys_crm;
 uint64_t sys_crn;
 uint64_t sys_op0;
 uint64_t sys_op1;
 uint64_t sys_op2;
 uint64_t sz;
 uint64_t t, t2, tb;
 uint64_t tag_checked;
 uint64_t tag_offset;
 uint64_t target_level;
 uint64_t tmask;
 uint64_t tsize;
 uint64_t tsz;
 uint64_t tszh;
 uint64_t tszl;
 uint64_t types;
 uint64_t uimm4;
 uint64_t uimm6;
 uint64_t unpriv_at_el1;
 uint64_t unpriv_at_el2;
 uint64_t uns;
 uint64_t unsigned_;
 uint64_t use_key_a;
 uint64_t user_access_override;
 uint64_t wback;
 uint64_t wb_unknown;
 uint64_t wmask;
 uint64_t writeback;
 uint64_t xs;
 uint64_t Zk, zero_data;

} context;





enum OperandClass {
 NONE = 0,
 IMM32,
 IMM64,
 FIMM32,
 STR_IMM,
 REG,
 MULTI_REG,
 SYS_REG,
 MEM_REG,
 MEM_PRE_IDX,
 MEM_POST_IDX,
 MEM_OFFSET,
 MEM_EXTENDED,
 LABEL,
 CONDITION,
 NAME,
 IMPLEMENTATION_SPECIFIC
};

enum Condition {
 COND_EQ, COND_NE, COND_CS, COND_CC,
 COND_MI, COND_PL, COND_VS, COND_VC,
 COND_HI, COND_LS, COND_GE, COND_LT,
 COND_GT, COND_LE, COND_AL, COND_NV,
 END_CONDITION
};

enum ShiftType {
 ShiftType_NONE, ShiftType_LSL, ShiftType_LSR, ShiftType_ASR,
 ShiftType_ROR, ShiftType_UXTW, ShiftType_SXTW, ShiftType_SXTX,
 ShiftType_UXTX, ShiftType_SXTB, ShiftType_SXTH, ShiftType_UXTH,
 ShiftType_UXTB, ShiftType_MSL, ShiftType_END,
};

enum Group {
 GROUP_UNALLOCATED,
 GROUP_DATA_PROCESSING_IMM,
 GROUP_BRANCH_EXCEPTION_SYSTEM,
 GROUP_LOAD_STORE,
 GROUP_DATA_PROCESSING_REG,
 GROUP_DATA_PROCESSING_SIMD,
 GROUP_DATA_PROCESSING_SIMD2,
 END_GROUP
};


 typedef enum SystemReg SystemReg;
 typedef enum OperandClass OperandClass;
 typedef enum Register Register;
 typedef enum Condition Condition;
 typedef enum ShiftType ShiftType;
 typedef enum Operation Operation;
 typedef enum Group Group;
 typedef enum ArrangementSpec ArrangementSpec;


#define MAX_REGISTERS 5
#define MAX_NAME 16

struct InstructionOperand {
 OperandClass operandClass;
 ArrangementSpec arrSpec;
 Register reg[5];


 Condition cond;


 uint8_t implspec[5];


 SystemReg sysreg;

 
# 475 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 475 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     laneUsed;
 uint32_t lane;
 uint64_t immediate;
 ShiftType shiftType;
 
# 479 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 479 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     shiftValueUsed;
 uint32_t shiftValue;
 ShiftType extend;
 
# 482 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 482 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     signedImm;
 char pred_qual;
 
# 484 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 484 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     mul_vl;


 char name[16];
};


 typedef struct InstructionOperand InstructionOperand;


#define MAX_OPERANDS 5

struct Instruction {
 uint32_t insword;
 enum ENCODING encoding;

 enum Operation operation;
 InstructionOperand operands[5];

 
# 503 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h" 3 4
_Bool 
# 503 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.h"
     setflags;
};


typedef struct Instruction Instruction;






int aarch64_decompose(uint32_t instructionValue, Instruction *instr, uint64_t address);
size_t get_register_size(enum Register);
# 7 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode_fields32.c" 2

void decode_fields32(enum ENCODING enc, context *ctx, Instruction *instr)
{
 uint32_t insword = instr->insword;
 instr->encoding = enc;
 switch(enc) {
  case ENC_FMADD_H_FLOATDP3:
  case ENC_FMADD_S_FLOATDP3:
  case ENC_FMADD_D_FLOATDP3:
  case ENC_FMSUB_H_FLOATDP3:
  case ENC_FMSUB_S_FLOATDP3:
  case ENC_FMSUB_D_FLOATDP3:
  case ENC_FNMADD_H_FLOATDP3:
  case ENC_FNMADD_S_FLOATDP3:
  case ENC_FNMADD_D_FLOATDP3:
  case ENC_FNMSUB_H_FLOATDP3:
  case ENC_FNMSUB_S_FLOATDP3:
  case ENC_FNMSUB_D_FLOATDP3:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->o1 = (insword>>21)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->o0 = (insword>>15)&1;
   ctx->Ra = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCSEL_H_FLOATSEL:
  case ENC_FCSEL_S_FLOATSEL:
  case ENC_FCSEL_D_FLOATSEL:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->cond = (insword>>12)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCCMPE_H_FLOATCCMP:
  case ENC_FCCMPE_S_FLOATCCMP:
  case ENC_FCCMPE_D_FLOATCCMP:
  case ENC_FCCMP_H_FLOATCCMP:
  case ENC_FCCMP_S_FLOATCCMP:
  case ENC_FCCMP_D_FLOATCCMP:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->cond = (insword>>12)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->op = (insword>>4)&1;
   ctx->nzcv = insword&15;
   break;
  case ENC_FCMPE_H_FLOATCMP:
  case ENC_FCMPE_HZ_FLOATCMP:
  case ENC_FCMPE_S_FLOATCMP:
  case ENC_FCMPE_SZ_FLOATCMP:
  case ENC_FCMPE_D_FLOATCMP:
  case ENC_FCMPE_DZ_FLOATCMP:
  case ENC_FCMP_H_FLOATCMP:
  case ENC_FCMP_HZ_FLOATCMP:
  case ENC_FCMP_S_FLOATCMP:
  case ENC_FCMP_SZ_FLOATCMP:
  case ENC_FCMP_D_FLOATCMP:
  case ENC_FCMP_DZ_FLOATCMP:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->op = (insword>>14)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->opc = (insword>>3)&3;
   break;
  case ENC_FMUL_H_FLOATDP2:
  case ENC_FMUL_S_FLOATDP2:
  case ENC_FMUL_D_FLOATDP2:
  case ENC_FNMUL_H_FLOATDP2:
  case ENC_FNMUL_S_FLOATDP2:
  case ENC_FNMUL_D_FLOATDP2:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->op = (insword>>15)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FDIV_H_FLOATDP2:
  case ENC_FDIV_S_FLOATDP2:
  case ENC_FDIV_D_FLOATDP2:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FADD_H_FLOATDP2:
  case ENC_FADD_S_FLOATDP2:
  case ENC_FADD_D_FLOATDP2:
  case ENC_FSUB_H_FLOATDP2:
  case ENC_FSUB_S_FLOATDP2:
  case ENC_FSUB_D_FLOATDP2:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXNM_H_FLOATDP2:
  case ENC_FMAXNM_S_FLOATDP2:
  case ENC_FMAXNM_D_FLOATDP2:
  case ENC_FMAX_H_FLOATDP2:
  case ENC_FMAX_S_FLOATDP2:
  case ENC_FMAX_D_FLOATDP2:
  case ENC_FMINNM_H_FLOATDP2:
  case ENC_FMINNM_S_FLOATDP2:
  case ENC_FMINNM_D_FLOATDP2:
  case ENC_FMIN_H_FLOATDP2:
  case ENC_FMIN_S_FLOATDP2:
  case ENC_FMIN_D_FLOATDP2:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->op = (insword>>12)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMOV_H_FLOATIMM:
  case ENC_FMOV_S_FLOATIMM:
  case ENC_FMOV_D_FLOATIMM:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->imm8 = (insword>>13)&0xff;
   ctx->imm5 = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FRINT32X_S_FLOATDP1:
  case ENC_FRINT32X_D_FLOATDP1:
  case ENC_FRINT32Z_S_FLOATDP1:
  case ENC_FRINT32Z_D_FLOATDP1:
  case ENC_FRINT64X_S_FLOATDP1:
  case ENC_FRINT64X_D_FLOATDP1:
  case ENC_FRINT64Z_S_FLOATDP1:
  case ENC_FRINT64Z_D_FLOATDP1:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->op = (insword>>15)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABS_H_FLOATDP1:
  case ENC_FABS_S_FLOATDP1:
  case ENC_FABS_D_FLOATDP1:
  case ENC_FCVT_SH_FLOATDP1:
  case ENC_FCVT_DH_FLOATDP1:
  case ENC_FCVT_HS_FLOATDP1:
  case ENC_FCVT_DS_FLOATDP1:
  case ENC_FCVT_HD_FLOATDP1:
  case ENC_FCVT_SD_FLOATDP1:
  case ENC_FMOV_H_FLOATDP1:
  case ENC_FMOV_S_FLOATDP1:
  case ENC_FMOV_D_FLOATDP1:
  case ENC_FNEG_H_FLOATDP1:
  case ENC_FNEG_S_FLOATDP1:
  case ENC_FNEG_D_FLOATDP1:
  case ENC_FSQRT_H_FLOATDP1:
  case ENC_FSQRT_S_FLOATDP1:
  case ENC_FSQRT_D_FLOATDP1:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->opc = (insword>>15)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FRINTA_H_FLOATDP1:
  case ENC_FRINTA_S_FLOATDP1:
  case ENC_FRINTA_D_FLOATDP1:
  case ENC_FRINTI_H_FLOATDP1:
  case ENC_FRINTI_S_FLOATDP1:
  case ENC_FRINTI_D_FLOATDP1:
  case ENC_FRINTM_H_FLOATDP1:
  case ENC_FRINTM_S_FLOATDP1:
  case ENC_FRINTM_D_FLOATDP1:
  case ENC_FRINTN_H_FLOATDP1:
  case ENC_FRINTN_S_FLOATDP1:
  case ENC_FRINTN_D_FLOATDP1:
  case ENC_FRINTP_H_FLOATDP1:
  case ENC_FRINTP_S_FLOATDP1:
  case ENC_FRINTP_D_FLOATDP1:
  case ENC_FRINTX_H_FLOATDP1:
  case ENC_FRINTX_S_FLOATDP1:
  case ENC_FRINTX_D_FLOATDP1:
  case ENC_FRINTZ_H_FLOATDP1:
  case ENC_FRINTZ_S_FLOATDP1:
  case ENC_FRINTZ_D_FLOATDP1:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->rmode = (insword>>15)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BFCVT_BS_FLOATDP1:

   ctx->M = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ptype = (insword>>22)&3;
   ctx->opcode = (insword>>15)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_TBNZ_ONLY_TESTBRANCH:
  case ENC_TBZ_ONLY_TESTBRANCH:

   ctx->b5 = insword>>31;
   ctx->op = (insword>>24)&1;
   ctx->b40 = (insword>>19)&0x1f;
   ctx->imm14 = (insword>>5)&0x3fff;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_ADR_ONLY_PCRELADDR:
  case ENC_ADRP_ONLY_PCRELADDR:

   ctx->op = insword>>31;
   ctx->immlo = (insword>>29)&3;
   ctx->immhi = (insword>>5)&0x7ffff;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BL_ONLY_BRANCH_IMM:
  case ENC_B_ONLY_BRANCH_IMM:

   ctx->op = insword>>31;
   ctx->imm26 = insword&0x3ffffff;
   break;
  case ENC_LDNP_S_LDSTNAPAIR_OFFS:
  case ENC_LDNP_D_LDSTNAPAIR_OFFS:
  case ENC_LDNP_Q_LDSTNAPAIR_OFFS:
  case ENC_LDNP_32_LDSTNAPAIR_OFFS:
  case ENC_LDNP_64_LDSTNAPAIR_OFFS:
  case ENC_LDPSW_64_LDSTPAIR_POST:
  case ENC_LDPSW_64_LDSTPAIR_PRE:
  case ENC_LDPSW_64_LDSTPAIR_OFF:
  case ENC_LDP_S_LDSTPAIR_POST:
  case ENC_LDP_D_LDSTPAIR_POST:
  case ENC_LDP_Q_LDSTPAIR_POST:
  case ENC_LDP_S_LDSTPAIR_PRE:
  case ENC_LDP_D_LDSTPAIR_PRE:
  case ENC_LDP_Q_LDSTPAIR_PRE:
  case ENC_LDP_S_LDSTPAIR_OFF:
  case ENC_LDP_D_LDSTPAIR_OFF:
  case ENC_LDP_Q_LDSTPAIR_OFF:
  case ENC_LDP_32_LDSTPAIR_POST:
  case ENC_LDP_64_LDSTPAIR_POST:
  case ENC_LDP_32_LDSTPAIR_PRE:
  case ENC_LDP_64_LDSTPAIR_PRE:
  case ENC_LDP_32_LDSTPAIR_OFF:
  case ENC_LDP_64_LDSTPAIR_OFF:
  case ENC_STNP_S_LDSTNAPAIR_OFFS:
  case ENC_STNP_D_LDSTNAPAIR_OFFS:
  case ENC_STNP_Q_LDSTNAPAIR_OFFS:
  case ENC_STNP_32_LDSTNAPAIR_OFFS:
  case ENC_STNP_64_LDSTNAPAIR_OFFS:
  case ENC_STP_S_LDSTPAIR_POST:
  case ENC_STP_D_LDSTPAIR_POST:
  case ENC_STP_Q_LDSTPAIR_POST:
  case ENC_STP_S_LDSTPAIR_PRE:
  case ENC_STP_D_LDSTPAIR_PRE:
  case ENC_STP_Q_LDSTPAIR_PRE:
  case ENC_STP_S_LDSTPAIR_OFF:
  case ENC_STP_D_LDSTPAIR_OFF:
  case ENC_STP_Q_LDSTPAIR_OFF:
  case ENC_STP_32_LDSTPAIR_POST:
  case ENC_STP_64_LDSTPAIR_POST:
  case ENC_STP_32_LDSTPAIR_PRE:
  case ENC_STP_64_LDSTPAIR_PRE:
  case ENC_STP_32_LDSTPAIR_OFF:
  case ENC_STP_64_LDSTPAIR_OFF:

   ctx->opc = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->L = (insword>>22)&1;
   ctx->imm7 = (insword>>15)&0x7f;
   ctx->Rt2 = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_STGP_64_LDSTPAIR_POST:
  case ENC_STGP_64_LDSTPAIR_PRE:
  case ENC_STGP_64_LDSTPAIR_OFF:

   ctx->opc = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->L = (insword>>22)&1;
   ctx->simm7 = (insword>>15)&0x7f;
   ctx->Xt2 = (insword>>10)&0x1f;
   ctx->Xn = (insword>>5)&0x1f;
   ctx->Xt = insword&0x1f;
   break;
  case ENC_LDRSW_64_LOADLIT:
  case ENC_LDR_S_LOADLIT:
  case ENC_LDR_D_LOADLIT:
  case ENC_LDR_Q_LOADLIT:
  case ENC_LDR_32_LOADLIT:
  case ENC_LDR_64_LOADLIT:
  case ENC_PRFM_P_LOADLIT:

   ctx->opc = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->imm19 = (insword>>5)&0x7ffff;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_EXTR_32_EXTRACT:
  case ENC_EXTR_64_EXTRACT:
  case ENC_ROR_EXTR_32_EXTRACT:
  case ENC_ROR_EXTR_64_EXTRACT:

   ctx->sf = insword>>31;
   ctx->op21 = (insword>>29)&3;
   ctx->N = (insword>>22)&1;
   ctx->o0 = (insword>>21)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->imms = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SMADDL_64WA_DP_3SRC:
  case ENC_SMNEGL_SMSUBL_64WA_DP_3SRC:
  case ENC_SMSUBL_64WA_DP_3SRC:
  case ENC_SMULH_64_DP_3SRC:
  case ENC_SMULL_SMADDL_64WA_DP_3SRC:
  case ENC_UMADDL_64WA_DP_3SRC:
  case ENC_UMNEGL_UMSUBL_64WA_DP_3SRC:
  case ENC_UMSUBL_64WA_DP_3SRC:
  case ENC_UMULH_64_DP_3SRC:
  case ENC_UMULL_UMADDL_64WA_DP_3SRC:

   ctx->sf = insword>>31;
   ctx->op54 = (insword>>29)&3;
   ctx->U = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->o0 = (insword>>15)&1;
   ctx->Ra = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_MADD_32A_DP_3SRC:
  case ENC_MADD_64A_DP_3SRC:
  case ENC_MNEG_MSUB_32A_DP_3SRC:
  case ENC_MNEG_MSUB_64A_DP_3SRC:
  case ENC_MSUB_32A_DP_3SRC:
  case ENC_MSUB_64A_DP_3SRC:
  case ENC_MUL_MADD_32A_DP_3SRC:
  case ENC_MUL_MADD_64A_DP_3SRC:

   ctx->sf = insword>>31;
   ctx->op54 = (insword>>29)&3;
   ctx->op31 = (insword>>21)&7;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->o0 = (insword>>15)&1;
   ctx->Ra = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CINC_CSINC_32_CONDSEL:
  case ENC_CINC_CSINC_64_CONDSEL:
  case ENC_CINV_CSINV_32_CONDSEL:
  case ENC_CINV_CSINV_64_CONDSEL:
  case ENC_CNEG_CSNEG_32_CONDSEL:
  case ENC_CNEG_CSNEG_64_CONDSEL:
  case ENC_CSEL_32_CONDSEL:
  case ENC_CSEL_64_CONDSEL:
  case ENC_CSETM_CSINV_32_CONDSEL:
  case ENC_CSETM_CSINV_64_CONDSEL:
  case ENC_CSET_CSINC_32_CONDSEL:
  case ENC_CSET_CSINC_64_CONDSEL:
  case ENC_CSINC_32_CONDSEL:
  case ENC_CSINC_64_CONDSEL:
  case ENC_CSINV_32_CONDSEL:
  case ENC_CSINV_64_CONDSEL:
  case ENC_CSNEG_32_CONDSEL:
  case ENC_CSNEG_64_CONDSEL:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->cond = (insword>>12)&15;
   ctx->o2 = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CCMN_32_CONDCMP_REG:
  case ENC_CCMN_64_CONDCMP_REG:
  case ENC_CCMP_32_CONDCMP_REG:
  case ENC_CCMP_64_CONDCMP_REG:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->cond = (insword>>12)&15;
   ctx->o2 = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->o3 = (insword>>4)&1;
   ctx->nzcv = insword&15;
   break;
  case ENC_SDIV_32_DP_2SRC:
  case ENC_SDIV_64_DP_2SRC:
  case ENC_UDIV_32_DP_2SRC:
  case ENC_UDIV_64_DP_2SRC:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode2 = (insword>>11)&0x1f;
   ctx->o1 = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ASRV_32_DP_2SRC:
  case ENC_ASRV_64_DP_2SRC:
  case ENC_ASR_ASRV_32_DP_2SRC:
  case ENC_ASR_ASRV_64_DP_2SRC:
  case ENC_LSLV_32_DP_2SRC:
  case ENC_LSLV_64_DP_2SRC:
  case ENC_LSL_LSLV_32_DP_2SRC:
  case ENC_LSL_LSLV_64_DP_2SRC:
  case ENC_LSRV_32_DP_2SRC:
  case ENC_LSRV_64_DP_2SRC:
  case ENC_LSR_LSRV_32_DP_2SRC:
  case ENC_LSR_LSRV_64_DP_2SRC:
  case ENC_RORV_32_DP_2SRC:
  case ENC_RORV_64_DP_2SRC:
  case ENC_ROR_RORV_32_DP_2SRC:
  case ENC_ROR_RORV_64_DP_2SRC:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode2 = (insword>>12)&15;
   ctx->op2 = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CRC32B_32C_DP_2SRC:
  case ENC_CRC32H_32C_DP_2SRC:
  case ENC_CRC32W_32C_DP_2SRC:
  case ENC_CRC32X_64C_DP_2SRC:
  case ENC_CRC32CB_32C_DP_2SRC:
  case ENC_CRC32CH_32C_DP_2SRC:
  case ENC_CRC32CW_32C_DP_2SRC:
  case ENC_CRC32CX_64C_DP_2SRC:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode2 = (insword>>13)&7;
   ctx->C = (insword>>12)&1;
   ctx->sz = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_PACGA_64P_DP_2SRC:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode2 = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ADC_32_ADDSUB_CARRY:
  case ENC_ADC_64_ADDSUB_CARRY:
  case ENC_ADCS_32_ADDSUB_CARRY:
  case ENC_ADCS_64_ADDSUB_CARRY:
  case ENC_NGCS_SBCS_32_ADDSUB_CARRY:
  case ENC_NGCS_SBCS_64_ADDSUB_CARRY:
  case ENC_NGC_SBC_32_ADDSUB_CARRY:
  case ENC_NGC_SBC_64_ADDSUB_CARRY:
  case ENC_SBC_32_ADDSUB_CARRY:
  case ENC_SBC_64_ADDSUB_CARRY:
  case ENC_SBCS_32_ADDSUB_CARRY:
  case ENC_SBCS_64_ADDSUB_CARRY:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CCMN_32_CONDCMP_IMM:
  case ENC_CCMN_64_CONDCMP_IMM:
  case ENC_CCMP_32_CONDCMP_IMM:
  case ENC_CCMP_64_CONDCMP_IMM:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->cond = (insword>>12)&15;
   ctx->o2 = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->o3 = (insword>>4)&1;
   ctx->nzcv = insword&15;
   break;
  case ENC_RMIF_ONLY_RMIF:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->imm6 = (insword>>15)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->o2 = (insword>>4)&1;
   ctx->mask = insword&15;
   break;
  case ENC_SETF8_ONLY_SETF:
  case ENC_SETF16_ONLY_SETF:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->opcode2 = (insword>>15)&0x3f;
   ctx->sz = (insword>>14)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->o3 = (insword>>4)&1;
   ctx->mask = insword&15;
   break;
  case ENC_ADDG_64_ADDSUB_IMMTAGS:
  case ENC_SUBG_64_ADDSUB_IMMTAGS:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->o2 = (insword>>22)&1;
   ctx->uimm6 = (insword>>16)&0x3f;
   ctx->op3 = (insword>>14)&3;
   ctx->uimm4 = (insword>>10)&15;
   ctx->Xn = (insword>>5)&0x1f;
   ctx->Xd = insword&0x1f;
   break;
  case ENC_ADDS_32S_ADDSUB_IMM:
  case ENC_ADDS_64S_ADDSUB_IMM:
  case ENC_ADD_32_ADDSUB_IMM:
  case ENC_ADD_64_ADDSUB_IMM:
  case ENC_CMN_ADDS_32S_ADDSUB_IMM:
  case ENC_CMN_ADDS_64S_ADDSUB_IMM:
  case ENC_CMP_SUBS_32S_ADDSUB_IMM:
  case ENC_CMP_SUBS_64S_ADDSUB_IMM:
  case ENC_MOV_ADD_32_ADDSUB_IMM:
  case ENC_MOV_ADD_64_ADDSUB_IMM:
  case ENC_SUBS_32S_ADDSUB_IMM:
  case ENC_SUBS_64S_ADDSUB_IMM:
  case ENC_SUB_32_ADDSUB_IMM:
  case ENC_SUB_64_ADDSUB_IMM:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->sh = (insword>>22)&1;
   ctx->imm12 = (insword>>10)&0xfff;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ADDS_32S_ADDSUB_EXT:
  case ENC_ADDS_64S_ADDSUB_EXT:
  case ENC_ADD_32_ADDSUB_EXT:
  case ENC_ADD_64_ADDSUB_EXT:
  case ENC_CMN_ADDS_32S_ADDSUB_EXT:
  case ENC_CMN_ADDS_64S_ADDSUB_EXT:
  case ENC_CMP_SUBS_32S_ADDSUB_EXT:
  case ENC_CMP_SUBS_64S_ADDSUB_EXT:
  case ENC_SUBS_32S_ADDSUB_EXT:
  case ENC_SUBS_64S_ADDSUB_EXT:
  case ENC_SUB_32_ADDSUB_EXT:
  case ENC_SUB_64_ADDSUB_EXT:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->opt = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->option = (insword>>13)&7;
   ctx->imm3 = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ADDS_32_ADDSUB_SHIFT:
  case ENC_ADDS_64_ADDSUB_SHIFT:
  case ENC_ADD_32_ADDSUB_SHIFT:
  case ENC_ADD_64_ADDSUB_SHIFT:
  case ENC_CMN_ADDS_32_ADDSUB_SHIFT:
  case ENC_CMN_ADDS_64_ADDSUB_SHIFT:
  case ENC_CMP_SUBS_32_ADDSUB_SHIFT:
  case ENC_CMP_SUBS_64_ADDSUB_SHIFT:
  case ENC_NEGS_SUBS_32_ADDSUB_SHIFT:
  case ENC_NEGS_SUBS_64_ADDSUB_SHIFT:
  case ENC_NEG_SUB_32_ADDSUB_SHIFT:
  case ENC_NEG_SUB_64_ADDSUB_SHIFT:
  case ENC_SUBS_32_ADDSUB_SHIFT:
  case ENC_SUBS_64_ADDSUB_SHIFT:
  case ENC_SUB_32_ADDSUB_SHIFT:
  case ENC_SUB_64_ADDSUB_SHIFT:

   ctx->sf = insword>>31;
   ctx->op = (insword>>30)&1;
   ctx->S = (insword>>29)&1;
   ctx->shift = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->imm6 = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ANDS_32S_LOG_IMM:
  case ENC_ANDS_64S_LOG_IMM:
  case ENC_AND_32_LOG_IMM:
  case ENC_AND_64_LOG_IMM:
  case ENC_ASR_SBFM_32M_BITFIELD:
  case ENC_ASR_SBFM_64M_BITFIELD:
  case ENC_BFC_BFM_32M_BITFIELD:
  case ENC_BFC_BFM_64M_BITFIELD:
  case ENC_BFI_BFM_32M_BITFIELD:
  case ENC_BFI_BFM_64M_BITFIELD:
  case ENC_BFM_32M_BITFIELD:
  case ENC_BFM_64M_BITFIELD:
  case ENC_BFXIL_BFM_32M_BITFIELD:
  case ENC_BFXIL_BFM_64M_BITFIELD:
  case ENC_EOR_32_LOG_IMM:
  case ENC_EOR_64_LOG_IMM:
  case ENC_LSL_UBFM_32M_BITFIELD:
  case ENC_LSL_UBFM_64M_BITFIELD:
  case ENC_LSR_UBFM_32M_BITFIELD:
  case ENC_LSR_UBFM_64M_BITFIELD:
  case ENC_MOV_ORR_32_LOG_IMM:
  case ENC_MOV_ORR_64_LOG_IMM:
  case ENC_ORR_32_LOG_IMM:
  case ENC_ORR_64_LOG_IMM:
  case ENC_SBFIZ_SBFM_32M_BITFIELD:
  case ENC_SBFIZ_SBFM_64M_BITFIELD:
  case ENC_SBFM_32M_BITFIELD:
  case ENC_SBFM_64M_BITFIELD:
  case ENC_SBFX_SBFM_32M_BITFIELD:
  case ENC_SBFX_SBFM_64M_BITFIELD:
  case ENC_SXTB_SBFM_32M_BITFIELD:
  case ENC_SXTB_SBFM_64M_BITFIELD:
  case ENC_SXTH_SBFM_32M_BITFIELD:
  case ENC_SXTH_SBFM_64M_BITFIELD:
  case ENC_SXTW_SBFM_64M_BITFIELD:
  case ENC_TST_ANDS_32S_LOG_IMM:
  case ENC_TST_ANDS_64S_LOG_IMM:
  case ENC_UBFIZ_UBFM_32M_BITFIELD:
  case ENC_UBFIZ_UBFM_64M_BITFIELD:
  case ENC_UBFM_32M_BITFIELD:
  case ENC_UBFM_64M_BITFIELD:
  case ENC_UBFX_UBFM_32M_BITFIELD:
  case ENC_UBFX_UBFM_64M_BITFIELD:
  case ENC_UXTB_UBFM_32M_BITFIELD:
  case ENC_UXTH_UBFM_32M_BITFIELD:

   ctx->sf = insword>>31;
   ctx->opc = (insword>>29)&3;
   ctx->N = (insword>>22)&1;
   ctx->immr = (insword>>16)&0x3f;
   ctx->imms = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_MOVK_32_MOVEWIDE:
  case ENC_MOVK_64_MOVEWIDE:
  case ENC_MOVN_32_MOVEWIDE:
  case ENC_MOVN_64_MOVEWIDE:
  case ENC_MOVZ_32_MOVEWIDE:
  case ENC_MOVZ_64_MOVEWIDE:
  case ENC_MOV_MOVN_32_MOVEWIDE:
  case ENC_MOV_MOVN_64_MOVEWIDE:
  case ENC_MOV_MOVZ_32_MOVEWIDE:
  case ENC_MOV_MOVZ_64_MOVEWIDE:

   ctx->sf = insword>>31;
   ctx->opc = (insword>>29)&3;
   ctx->hw = (insword>>21)&3;
   ctx->imm16 = (insword>>5)&0xffff;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ANDS_32_LOG_SHIFT:
  case ENC_ANDS_64_LOG_SHIFT:
  case ENC_AND_32_LOG_SHIFT:
  case ENC_AND_64_LOG_SHIFT:
  case ENC_BICS_32_LOG_SHIFT:
  case ENC_BICS_64_LOG_SHIFT:
  case ENC_BIC_32_LOG_SHIFT:
  case ENC_BIC_64_LOG_SHIFT:
  case ENC_EON_32_LOG_SHIFT:
  case ENC_EON_64_LOG_SHIFT:
  case ENC_EOR_32_LOG_SHIFT:
  case ENC_EOR_64_LOG_SHIFT:
  case ENC_MOV_ORR_32_LOG_SHIFT:
  case ENC_MOV_ORR_64_LOG_SHIFT:
  case ENC_MVN_ORN_32_LOG_SHIFT:
  case ENC_MVN_ORN_64_LOG_SHIFT:
  case ENC_ORN_32_LOG_SHIFT:
  case ENC_ORN_64_LOG_SHIFT:
  case ENC_ORR_32_LOG_SHIFT:
  case ENC_ORR_64_LOG_SHIFT:
  case ENC_TST_ANDS_32_LOG_SHIFT:
  case ENC_TST_ANDS_64_LOG_SHIFT:

   ctx->sf = insword>>31;
   ctx->opc = (insword>>29)&3;
   ctx->shift = (insword>>22)&3;
   ctx->N = (insword>>21)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->imm6 = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CBNZ_32_COMPBRANCH:
  case ENC_CBNZ_64_COMPBRANCH:
  case ENC_CBZ_32_COMPBRANCH:
  case ENC_CBZ_64_COMPBRANCH:

   ctx->sf = insword>>31;
   ctx->op = (insword>>24)&1;
   ctx->imm19 = (insword>>5)&0x7ffff;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_CMPP_SUBPS_64S_DP_2SRC:
  case ENC_GMI_64G_DP_2SRC:
  case ENC_IRG_64I_DP_2SRC:
  case ENC_SUBP_64S_DP_2SRC:
  case ENC_SUBPS_64S_DP_2SRC:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->Xm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>10)&0x3f;
   ctx->Xn = (insword>>5)&0x1f;
   ctx->Xd = insword&0x1f;
   break;
  case ENC_CLS_32_DP_1SRC:
  case ENC_CLS_64_DP_1SRC:
  case ENC_CLZ_32_DP_1SRC:
  case ENC_CLZ_64_DP_1SRC:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->opcode2 = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->op = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_REV_32_DP_1SRC:
  case ENC_REV_64_DP_1SRC:
  case ENC_REV16_32_DP_1SRC:
  case ENC_REV16_64_DP_1SRC:
  case ENC_REV32_64_DP_1SRC:
  case ENC_REV64_REV_64_DP_1SRC:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->opcode2 = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&15;
   ctx->opc = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_RBIT_32_DP_1SRC:
  case ENC_RBIT_64_DP_1SRC:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->opcode2 = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&15;
   ctx->opcode = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_AUTDA_64P_DP_1SRC:
  case ENC_AUTDZA_64Z_DP_1SRC:
  case ENC_AUTDB_64P_DP_1SRC:
  case ENC_AUTDZB_64Z_DP_1SRC:
  case ENC_AUTIA_64P_DP_1SRC:
  case ENC_AUTIZA_64Z_DP_1SRC:
  case ENC_AUTIB_64P_DP_1SRC:
  case ENC_AUTIZB_64Z_DP_1SRC:
  case ENC_PACDA_64P_DP_1SRC:
  case ENC_PACDZA_64Z_DP_1SRC:
  case ENC_PACDB_64P_DP_1SRC:
  case ENC_PACDZB_64Z_DP_1SRC:
  case ENC_PACIA_64P_DP_1SRC:
  case ENC_PACIZA_64Z_DP_1SRC:
  case ENC_PACIB_64P_DP_1SRC:
  case ENC_PACIZB_64Z_DP_1SRC:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->opcode2 = (insword>>16)&0x1f;
   ctx->opcode = (insword>>15)&1;
   ctx->opcode = (insword>>14)&1;
   ctx->Z = (insword>>13)&1;
   ctx->opcode = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_XPACD_64Z_DP_1SRC:
  case ENC_XPACI_64Z_DP_1SRC:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->opcode2 = (insword>>16)&0x1f;
   ctx->opcode = (insword>>15)&1;
   ctx->opcode = (insword>>14)&1;
   ctx->opcode = (insword>>11)&7;
   ctx->D = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTZS_32H_FLOAT2FIX:
  case ENC_FCVTZS_64H_FLOAT2FIX:
  case ENC_FCVTZS_32S_FLOAT2FIX:
  case ENC_FCVTZS_64S_FLOAT2FIX:
  case ENC_FCVTZS_32D_FLOAT2FIX:
  case ENC_FCVTZS_64D_FLOAT2FIX:
  case ENC_FCVTZU_32H_FLOAT2FIX:
  case ENC_FCVTZU_64H_FLOAT2FIX:
  case ENC_FCVTZU_32S_FLOAT2FIX:
  case ENC_FCVTZU_64S_FLOAT2FIX:
  case ENC_FCVTZU_32D_FLOAT2FIX:
  case ENC_FCVTZU_64D_FLOAT2FIX:
  case ENC_SCVTF_H32_FLOAT2FIX:
  case ENC_SCVTF_S32_FLOAT2FIX:
  case ENC_SCVTF_D32_FLOAT2FIX:
  case ENC_SCVTF_H64_FLOAT2FIX:
  case ENC_SCVTF_S64_FLOAT2FIX:
  case ENC_SCVTF_D64_FLOAT2FIX:
  case ENC_UCVTF_H32_FLOAT2FIX:
  case ENC_UCVTF_S32_FLOAT2FIX:
  case ENC_UCVTF_D32_FLOAT2FIX:
  case ENC_UCVTF_H64_FLOAT2FIX:
  case ENC_UCVTF_S64_FLOAT2FIX:
  case ENC_UCVTF_D64_FLOAT2FIX:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->rmode = (insword>>19)&3;
   ctx->opcode = (insword>>16)&7;
   ctx->scale = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTAS_32H_FLOAT2INT:
  case ENC_FCVTAS_64H_FLOAT2INT:
  case ENC_FCVTAS_32S_FLOAT2INT:
  case ENC_FCVTAS_64S_FLOAT2INT:
  case ENC_FCVTAS_32D_FLOAT2INT:
  case ENC_FCVTAS_64D_FLOAT2INT:
  case ENC_FCVTAU_32H_FLOAT2INT:
  case ENC_FCVTAU_64H_FLOAT2INT:
  case ENC_FCVTAU_32S_FLOAT2INT:
  case ENC_FCVTAU_64S_FLOAT2INT:
  case ENC_FCVTAU_32D_FLOAT2INT:
  case ENC_FCVTAU_64D_FLOAT2INT:
  case ENC_FCVTMS_32H_FLOAT2INT:
  case ENC_FCVTMS_64H_FLOAT2INT:
  case ENC_FCVTMS_32S_FLOAT2INT:
  case ENC_FCVTMS_64S_FLOAT2INT:
  case ENC_FCVTMS_32D_FLOAT2INT:
  case ENC_FCVTMS_64D_FLOAT2INT:
  case ENC_FCVTMU_32H_FLOAT2INT:
  case ENC_FCVTMU_64H_FLOAT2INT:
  case ENC_FCVTMU_32S_FLOAT2INT:
  case ENC_FCVTMU_64S_FLOAT2INT:
  case ENC_FCVTMU_32D_FLOAT2INT:
  case ENC_FCVTMU_64D_FLOAT2INT:
  case ENC_FCVTNS_32H_FLOAT2INT:
  case ENC_FCVTNS_64H_FLOAT2INT:
  case ENC_FCVTNS_32S_FLOAT2INT:
  case ENC_FCVTNS_64S_FLOAT2INT:
  case ENC_FCVTNS_32D_FLOAT2INT:
  case ENC_FCVTNS_64D_FLOAT2INT:
  case ENC_FCVTNU_32H_FLOAT2INT:
  case ENC_FCVTNU_64H_FLOAT2INT:
  case ENC_FCVTNU_32S_FLOAT2INT:
  case ENC_FCVTNU_64S_FLOAT2INT:
  case ENC_FCVTNU_32D_FLOAT2INT:
  case ENC_FCVTNU_64D_FLOAT2INT:
  case ENC_FCVTPS_32H_FLOAT2INT:
  case ENC_FCVTPS_64H_FLOAT2INT:
  case ENC_FCVTPS_32S_FLOAT2INT:
  case ENC_FCVTPS_64S_FLOAT2INT:
  case ENC_FCVTPS_32D_FLOAT2INT:
  case ENC_FCVTPS_64D_FLOAT2INT:
  case ENC_FCVTPU_32H_FLOAT2INT:
  case ENC_FCVTPU_64H_FLOAT2INT:
  case ENC_FCVTPU_32S_FLOAT2INT:
  case ENC_FCVTPU_64S_FLOAT2INT:
  case ENC_FCVTPU_32D_FLOAT2INT:
  case ENC_FCVTPU_64D_FLOAT2INT:
  case ENC_FCVTZS_32H_FLOAT2INT:
  case ENC_FCVTZS_64H_FLOAT2INT:
  case ENC_FCVTZS_32S_FLOAT2INT:
  case ENC_FCVTZS_64S_FLOAT2INT:
  case ENC_FCVTZS_32D_FLOAT2INT:
  case ENC_FCVTZS_64D_FLOAT2INT:
  case ENC_FCVTZU_32H_FLOAT2INT:
  case ENC_FCVTZU_64H_FLOAT2INT:
  case ENC_FCVTZU_32S_FLOAT2INT:
  case ENC_FCVTZU_64S_FLOAT2INT:
  case ENC_FCVTZU_32D_FLOAT2INT:
  case ENC_FCVTZU_64D_FLOAT2INT:
  case ENC_FJCVTZS_32D_FLOAT2INT:
  case ENC_FMOV_32H_FLOAT2INT:
  case ENC_FMOV_64H_FLOAT2INT:
  case ENC_FMOV_H32_FLOAT2INT:
  case ENC_FMOV_S32_FLOAT2INT:
  case ENC_FMOV_32S_FLOAT2INT:
  case ENC_FMOV_H64_FLOAT2INT:
  case ENC_FMOV_D64_FLOAT2INT:
  case ENC_FMOV_V64I_FLOAT2INT:
  case ENC_FMOV_64D_FLOAT2INT:
  case ENC_FMOV_64VX_FLOAT2INT:
  case ENC_SCVTF_H32_FLOAT2INT:
  case ENC_SCVTF_S32_FLOAT2INT:
  case ENC_SCVTF_D32_FLOAT2INT:
  case ENC_SCVTF_H64_FLOAT2INT:
  case ENC_SCVTF_S64_FLOAT2INT:
  case ENC_SCVTF_D64_FLOAT2INT:
  case ENC_UCVTF_H32_FLOAT2INT:
  case ENC_UCVTF_S32_FLOAT2INT:
  case ENC_UCVTF_D32_FLOAT2INT:
  case ENC_UCVTF_H64_FLOAT2INT:
  case ENC_UCVTF_S64_FLOAT2INT:
  case ENC_UCVTF_D64_FLOAT2INT:

   ctx->sf = insword>>31;
   ctx->S = (insword>>29)&1;
   ctx->ftype = (insword>>22)&3;
   ctx->rmode = (insword>>19)&3;
   ctx->opcode = (insword>>16)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CAS_C32_COMSWAP:
  case ENC_CASA_C32_COMSWAP:
  case ENC_CASAL_C32_COMSWAP:
  case ENC_CASL_C32_COMSWAP:
  case ENC_CAS_C64_COMSWAP:
  case ENC_CASA_C64_COMSWAP:
  case ENC_CASAL_C64_COMSWAP:
  case ENC_CASL_C64_COMSWAP:
  case ENC_CASAB_C32_COMSWAP:
  case ENC_CASALB_C32_COMSWAP:
  case ENC_CASB_C32_COMSWAP:
  case ENC_CASLB_C32_COMSWAP:
  case ENC_CASAH_C32_COMSWAP:
  case ENC_CASALH_C32_COMSWAP:
  case ENC_CASH_C32_COMSWAP:
  case ENC_CASLH_C32_COMSWAP:

   ctx->size = insword>>30;
   ctx->L = (insword>>22)&1;
   ctx->Rs = (insword>>16)&0x1f;
   ctx->o0 = (insword>>15)&1;
   ctx->Rt2 = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LDAR_LR32_LDSTORD:
  case ENC_LDAR_LR64_LDSTORD:
  case ENC_LDARB_LR32_LDSTORD:
  case ENC_LDARH_LR32_LDSTORD:
  case ENC_LDAXR_LR32_LDSTEXCLR:
  case ENC_LDAXR_LR64_LDSTEXCLR:
  case ENC_LDAXRB_LR32_LDSTEXCLR:
  case ENC_LDAXRH_LR32_LDSTEXCLR:
  case ENC_LDLAR_LR32_LDSTORD:
  case ENC_LDLAR_LR64_LDSTORD:
  case ENC_LDLARB_LR32_LDSTORD:
  case ENC_LDLARH_LR32_LDSTORD:
  case ENC_LDXR_LR32_LDSTEXCLR:
  case ENC_LDXR_LR64_LDSTEXCLR:
  case ENC_LDXRB_LR32_LDSTEXCLR:
  case ENC_LDXRH_LR32_LDSTEXCLR:
  case ENC_STLLR_SL32_LDSTORD:
  case ENC_STLLR_SL64_LDSTORD:
  case ENC_STLLRB_SL32_LDSTORD:
  case ENC_STLLRH_SL32_LDSTORD:
  case ENC_STLR_SL32_LDSTORD:
  case ENC_STLR_SL64_LDSTORD:
  case ENC_STLRB_SL32_LDSTORD:
  case ENC_STLRH_SL32_LDSTORD:
  case ENC_STLXR_SR32_LDSTEXCLR:
  case ENC_STLXR_SR64_LDSTEXCLR:
  case ENC_STLXRB_SR32_LDSTEXCLR:
  case ENC_STLXRH_SR32_LDSTEXCLR:
  case ENC_STXR_SR32_LDSTEXCLR:
  case ENC_STXR_SR64_LDSTEXCLR:
  case ENC_STXRB_SR32_LDSTEXCLR:
  case ENC_STXRH_SR32_LDSTEXCLR:

   ctx->size = insword>>30;
   ctx->o2 = (insword>>23)&1;
   ctx->L = (insword>>22)&1;
   ctx->o1 = (insword>>21)&1;
   ctx->Rs = (insword>>16)&0x1f;
   ctx->o0 = (insword>>15)&1;
   ctx->Rt2 = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LDAPURB_32_LDAPSTL_UNSCALED:
  case ENC_LDAPURH_32_LDAPSTL_UNSCALED:
  case ENC_LDAPURSB_32_LDAPSTL_UNSCALED:
  case ENC_LDAPURSB_64_LDAPSTL_UNSCALED:
  case ENC_LDAPURSH_32_LDAPSTL_UNSCALED:
  case ENC_LDAPURSH_64_LDAPSTL_UNSCALED:
  case ENC_LDAPURSW_64_LDAPSTL_UNSCALED:
  case ENC_LDAPUR_32_LDAPSTL_UNSCALED:
  case ENC_LDAPUR_64_LDAPSTL_UNSCALED:
  case ENC_STLURB_32_LDAPSTL_UNSCALED:
  case ENC_STLURH_32_LDAPSTL_UNSCALED:
  case ENC_STLUR_32_LDAPSTL_UNSCALED:
  case ENC_STLUR_64_LDAPSTL_UNSCALED:

   ctx->size = insword>>30;
   ctx->opc = (insword>>22)&3;
   ctx->imm9 = (insword>>12)&0x1ff;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LD64B_64L_MEMOP:
  case ENC_LDADD_32_MEMOP:
  case ENC_LDADDA_32_MEMOP:
  case ENC_LDADDAL_32_MEMOP:
  case ENC_LDADDL_32_MEMOP:
  case ENC_LDADD_64_MEMOP:
  case ENC_LDADDA_64_MEMOP:
  case ENC_LDADDAL_64_MEMOP:
  case ENC_LDADDL_64_MEMOP:
  case ENC_LDADDAB_32_MEMOP:
  case ENC_LDADDALB_32_MEMOP:
  case ENC_LDADDB_32_MEMOP:
  case ENC_LDADDLB_32_MEMOP:
  case ENC_LDADDAH_32_MEMOP:
  case ENC_LDADDALH_32_MEMOP:
  case ENC_LDADDH_32_MEMOP:
  case ENC_LDADDLH_32_MEMOP:
  case ENC_LDAPR_32L_MEMOP:
  case ENC_LDAPR_64L_MEMOP:
  case ENC_LDAPRB_32L_MEMOP:
  case ENC_LDAPRH_32L_MEMOP:
  case ENC_LDCLR_32_MEMOP:
  case ENC_LDCLRA_32_MEMOP:
  case ENC_LDCLRAL_32_MEMOP:
  case ENC_LDCLRL_32_MEMOP:
  case ENC_LDCLR_64_MEMOP:
  case ENC_LDCLRA_64_MEMOP:
  case ENC_LDCLRAL_64_MEMOP:
  case ENC_LDCLRL_64_MEMOP:
  case ENC_LDCLRAB_32_MEMOP:
  case ENC_LDCLRALB_32_MEMOP:
  case ENC_LDCLRB_32_MEMOP:
  case ENC_LDCLRLB_32_MEMOP:
  case ENC_LDCLRAH_32_MEMOP:
  case ENC_LDCLRALH_32_MEMOP:
  case ENC_LDCLRH_32_MEMOP:
  case ENC_LDCLRLH_32_MEMOP:
  case ENC_LDEOR_32_MEMOP:
  case ENC_LDEORA_32_MEMOP:
  case ENC_LDEORAL_32_MEMOP:
  case ENC_LDEORL_32_MEMOP:
  case ENC_LDEOR_64_MEMOP:
  case ENC_LDEORA_64_MEMOP:
  case ENC_LDEORAL_64_MEMOP:
  case ENC_LDEORL_64_MEMOP:
  case ENC_LDEORAB_32_MEMOP:
  case ENC_LDEORALB_32_MEMOP:
  case ENC_LDEORB_32_MEMOP:
  case ENC_LDEORLB_32_MEMOP:
  case ENC_LDEORAH_32_MEMOP:
  case ENC_LDEORALH_32_MEMOP:
  case ENC_LDEORH_32_MEMOP:
  case ENC_LDEORLH_32_MEMOP:
  case ENC_LDSET_32_MEMOP:
  case ENC_LDSETA_32_MEMOP:
  case ENC_LDSETAL_32_MEMOP:
  case ENC_LDSETL_32_MEMOP:
  case ENC_LDSET_64_MEMOP:
  case ENC_LDSETA_64_MEMOP:
  case ENC_LDSETAL_64_MEMOP:
  case ENC_LDSETL_64_MEMOP:
  case ENC_LDSETAB_32_MEMOP:
  case ENC_LDSETALB_32_MEMOP:
  case ENC_LDSETB_32_MEMOP:
  case ENC_LDSETLB_32_MEMOP:
  case ENC_LDSETAH_32_MEMOP:
  case ENC_LDSETALH_32_MEMOP:
  case ENC_LDSETH_32_MEMOP:
  case ENC_LDSETLH_32_MEMOP:
  case ENC_LDSMAX_32_MEMOP:
  case ENC_LDSMAXA_32_MEMOP:
  case ENC_LDSMAXAL_32_MEMOP:
  case ENC_LDSMAXL_32_MEMOP:
  case ENC_LDSMAX_64_MEMOP:
  case ENC_LDSMAXA_64_MEMOP:
  case ENC_LDSMAXAL_64_MEMOP:
  case ENC_LDSMAXL_64_MEMOP:
  case ENC_LDSMAXAB_32_MEMOP:
  case ENC_LDSMAXALB_32_MEMOP:
  case ENC_LDSMAXB_32_MEMOP:
  case ENC_LDSMAXLB_32_MEMOP:
  case ENC_LDSMAXAH_32_MEMOP:
  case ENC_LDSMAXALH_32_MEMOP:
  case ENC_LDSMAXH_32_MEMOP:
  case ENC_LDSMAXLH_32_MEMOP:
  case ENC_LDSMIN_32_MEMOP:
  case ENC_LDSMINA_32_MEMOP:
  case ENC_LDSMINAL_32_MEMOP:
  case ENC_LDSMINL_32_MEMOP:
  case ENC_LDSMIN_64_MEMOP:
  case ENC_LDSMINA_64_MEMOP:
  case ENC_LDSMINAL_64_MEMOP:
  case ENC_LDSMINL_64_MEMOP:
  case ENC_LDSMINAB_32_MEMOP:
  case ENC_LDSMINALB_32_MEMOP:
  case ENC_LDSMINB_32_MEMOP:
  case ENC_LDSMINLB_32_MEMOP:
  case ENC_LDSMINAH_32_MEMOP:
  case ENC_LDSMINALH_32_MEMOP:
  case ENC_LDSMINH_32_MEMOP:
  case ENC_LDSMINLH_32_MEMOP:
  case ENC_LDUMAX_32_MEMOP:
  case ENC_LDUMAXA_32_MEMOP:
  case ENC_LDUMAXAL_32_MEMOP:
  case ENC_LDUMAXL_32_MEMOP:
  case ENC_LDUMAX_64_MEMOP:
  case ENC_LDUMAXA_64_MEMOP:
  case ENC_LDUMAXAL_64_MEMOP:
  case ENC_LDUMAXL_64_MEMOP:
  case ENC_LDUMAXAB_32_MEMOP:
  case ENC_LDUMAXALB_32_MEMOP:
  case ENC_LDUMAXB_32_MEMOP:
  case ENC_LDUMAXLB_32_MEMOP:
  case ENC_LDUMAXAH_32_MEMOP:
  case ENC_LDUMAXALH_32_MEMOP:
  case ENC_LDUMAXH_32_MEMOP:
  case ENC_LDUMAXLH_32_MEMOP:
  case ENC_LDUMIN_32_MEMOP:
  case ENC_LDUMINA_32_MEMOP:
  case ENC_LDUMINAL_32_MEMOP:
  case ENC_LDUMINL_32_MEMOP:
  case ENC_LDUMIN_64_MEMOP:
  case ENC_LDUMINA_64_MEMOP:
  case ENC_LDUMINAL_64_MEMOP:
  case ENC_LDUMINL_64_MEMOP:
  case ENC_LDUMINAB_32_MEMOP:
  case ENC_LDUMINALB_32_MEMOP:
  case ENC_LDUMINB_32_MEMOP:
  case ENC_LDUMINLB_32_MEMOP:
  case ENC_LDUMINAH_32_MEMOP:
  case ENC_LDUMINALH_32_MEMOP:
  case ENC_LDUMINH_32_MEMOP:
  case ENC_LDUMINLH_32_MEMOP:
  case ENC_ST64B_64L_MEMOP:
  case ENC_ST64BV_64_MEMOP:
  case ENC_ST64BV0_64_MEMOP:
  case ENC_STADDB_LDADDB_32_MEMOP:
  case ENC_STADDLB_LDADDLB_32_MEMOP:
  case ENC_STADDH_LDADDH_32_MEMOP:
  case ENC_STADDLH_LDADDLH_32_MEMOP:
  case ENC_STADD_LDADD_32_MEMOP:
  case ENC_STADDL_LDADDL_32_MEMOP:
  case ENC_STADD_LDADD_64_MEMOP:
  case ENC_STADDL_LDADDL_64_MEMOP:
  case ENC_STCLRB_LDCLRB_32_MEMOP:
  case ENC_STCLRLB_LDCLRLB_32_MEMOP:
  case ENC_STCLRH_LDCLRH_32_MEMOP:
  case ENC_STCLRLH_LDCLRLH_32_MEMOP:
  case ENC_STCLR_LDCLR_32_MEMOP:
  case ENC_STCLRL_LDCLRL_32_MEMOP:
  case ENC_STCLR_LDCLR_64_MEMOP:
  case ENC_STCLRL_LDCLRL_64_MEMOP:
  case ENC_STEORB_LDEORB_32_MEMOP:
  case ENC_STEORLB_LDEORLB_32_MEMOP:
  case ENC_STEORH_LDEORH_32_MEMOP:
  case ENC_STEORLH_LDEORLH_32_MEMOP:
  case ENC_STEOR_LDEOR_32_MEMOP:
  case ENC_STEORL_LDEORL_32_MEMOP:
  case ENC_STEOR_LDEOR_64_MEMOP:
  case ENC_STEORL_LDEORL_64_MEMOP:
  case ENC_STSETB_LDSETB_32_MEMOP:
  case ENC_STSETLB_LDSETLB_32_MEMOP:
  case ENC_STSETH_LDSETH_32_MEMOP:
  case ENC_STSETLH_LDSETLH_32_MEMOP:
  case ENC_STSET_LDSET_32_MEMOP:
  case ENC_STSETL_LDSETL_32_MEMOP:
  case ENC_STSET_LDSET_64_MEMOP:
  case ENC_STSETL_LDSETL_64_MEMOP:
  case ENC_STSMAXB_LDSMAXB_32_MEMOP:
  case ENC_STSMAXLB_LDSMAXLB_32_MEMOP:
  case ENC_STSMAXH_LDSMAXH_32_MEMOP:
  case ENC_STSMAXLH_LDSMAXLH_32_MEMOP:
  case ENC_STSMAX_LDSMAX_32_MEMOP:
  case ENC_STSMAXL_LDSMAXL_32_MEMOP:
  case ENC_STSMAX_LDSMAX_64_MEMOP:
  case ENC_STSMAXL_LDSMAXL_64_MEMOP:
  case ENC_STSMINB_LDSMINB_32_MEMOP:
  case ENC_STSMINLB_LDSMINLB_32_MEMOP:
  case ENC_STSMINH_LDSMINH_32_MEMOP:
  case ENC_STSMINLH_LDSMINLH_32_MEMOP:
  case ENC_STSMIN_LDSMIN_32_MEMOP:
  case ENC_STSMINL_LDSMINL_32_MEMOP:
  case ENC_STSMIN_LDSMIN_64_MEMOP:
  case ENC_STSMINL_LDSMINL_64_MEMOP:
  case ENC_STUMAXB_LDUMAXB_32_MEMOP:
  case ENC_STUMAXLB_LDUMAXLB_32_MEMOP:
  case ENC_STUMAXH_LDUMAXH_32_MEMOP:
  case ENC_STUMAXLH_LDUMAXLH_32_MEMOP:
  case ENC_STUMAX_LDUMAX_32_MEMOP:
  case ENC_STUMAXL_LDUMAXL_32_MEMOP:
  case ENC_STUMAX_LDUMAX_64_MEMOP:
  case ENC_STUMAXL_LDUMAXL_64_MEMOP:
  case ENC_STUMINB_LDUMINB_32_MEMOP:
  case ENC_STUMINLB_LDUMINLB_32_MEMOP:
  case ENC_STUMINH_LDUMINH_32_MEMOP:
  case ENC_STUMINLH_LDUMINLH_32_MEMOP:
  case ENC_STUMIN_LDUMIN_32_MEMOP:
  case ENC_STUMINL_LDUMINL_32_MEMOP:
  case ENC_STUMIN_LDUMIN_64_MEMOP:
  case ENC_STUMINL_LDUMINL_64_MEMOP:
  case ENC_SWP_32_MEMOP:
  case ENC_SWPA_32_MEMOP:
  case ENC_SWPAL_32_MEMOP:
  case ENC_SWPL_32_MEMOP:
  case ENC_SWP_64_MEMOP:
  case ENC_SWPA_64_MEMOP:
  case ENC_SWPAL_64_MEMOP:
  case ENC_SWPL_64_MEMOP:
  case ENC_SWPAB_32_MEMOP:
  case ENC_SWPALB_32_MEMOP:
  case ENC_SWPB_32_MEMOP:
  case ENC_SWPLB_32_MEMOP:
  case ENC_SWPAH_32_MEMOP:
  case ENC_SWPALH_32_MEMOP:
  case ENC_SWPH_32_MEMOP:
  case ENC_SWPLH_32_MEMOP:

   ctx->size = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->A = (insword>>23)&1;
   ctx->R = (insword>>22)&1;
   ctx->Rs = (insword>>16)&0x1f;
   ctx->o3 = (insword>>15)&1;
   ctx->opc = (insword>>12)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LDRAA_64_LDST_PAC:
  case ENC_LDRAA_64W_LDST_PAC:
  case ENC_LDRAB_64_LDST_PAC:
  case ENC_LDRAB_64W_LDST_PAC:

   ctx->size = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->M = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->imm9 = (insword>>12)&0x1ff;
   ctx->W = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LDRB_32_LDST_POS:
  case ENC_LDRH_32_LDST_POS:
  case ENC_LDRSB_32_LDST_POS:
  case ENC_LDRSB_64_LDST_POS:
  case ENC_LDRSH_32_LDST_POS:
  case ENC_LDRSH_64_LDST_POS:
  case ENC_LDRSW_64_LDST_POS:
  case ENC_LDR_B_LDST_POS:
  case ENC_LDR_H_LDST_POS:
  case ENC_LDR_S_LDST_POS:
  case ENC_LDR_D_LDST_POS:
  case ENC_LDR_Q_LDST_POS:
  case ENC_LDR_32_LDST_POS:
  case ENC_LDR_64_LDST_POS:
  case ENC_PRFM_P_LDST_POS:
  case ENC_STRB_32_LDST_POS:
  case ENC_STRH_32_LDST_POS:
  case ENC_STR_B_LDST_POS:
  case ENC_STR_H_LDST_POS:
  case ENC_STR_S_LDST_POS:
  case ENC_STR_D_LDST_POS:
  case ENC_STR_Q_LDST_POS:
  case ENC_STR_32_LDST_POS:
  case ENC_STR_64_LDST_POS:

   ctx->size = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->opc = (insword>>22)&3;
   ctx->imm12 = (insword>>10)&0xfff;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LDRB_32B_LDST_REGOFF:
  case ENC_LDRB_32BL_LDST_REGOFF:
  case ENC_LDRH_32_LDST_REGOFF:
  case ENC_LDRSB_32B_LDST_REGOFF:
  case ENC_LDRSB_32BL_LDST_REGOFF:
  case ENC_LDRSB_64B_LDST_REGOFF:
  case ENC_LDRSB_64BL_LDST_REGOFF:
  case ENC_LDRSH_32_LDST_REGOFF:
  case ENC_LDRSH_64_LDST_REGOFF:
  case ENC_LDRSW_64_LDST_REGOFF:
  case ENC_LDR_B_LDST_REGOFF:
  case ENC_LDR_BL_LDST_REGOFF:
  case ENC_LDR_H_LDST_REGOFF:
  case ENC_LDR_S_LDST_REGOFF:
  case ENC_LDR_D_LDST_REGOFF:
  case ENC_LDR_Q_LDST_REGOFF:
  case ENC_LDR_32_LDST_REGOFF:
  case ENC_LDR_64_LDST_REGOFF:
  case ENC_PRFM_P_LDST_REGOFF:
  case ENC_STRB_32B_LDST_REGOFF:
  case ENC_STRB_32BL_LDST_REGOFF:
  case ENC_STRH_32_LDST_REGOFF:
  case ENC_STR_B_LDST_REGOFF:
  case ENC_STR_BL_LDST_REGOFF:
  case ENC_STR_H_LDST_REGOFF:
  case ENC_STR_S_LDST_REGOFF:
  case ENC_STR_D_LDST_REGOFF:
  case ENC_STR_Q_LDST_REGOFF:
  case ENC_STR_32_LDST_REGOFF:
  case ENC_STR_64_LDST_REGOFF:

   ctx->size = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->opc = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->option = (insword>>13)&7;
   ctx->S = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LDRB_32_LDST_IMMPOST:
  case ENC_LDRB_32_LDST_IMMPRE:
  case ENC_LDRH_32_LDST_IMMPOST:
  case ENC_LDRH_32_LDST_IMMPRE:
  case ENC_LDRSB_32_LDST_IMMPOST:
  case ENC_LDRSB_64_LDST_IMMPOST:
  case ENC_LDRSB_32_LDST_IMMPRE:
  case ENC_LDRSB_64_LDST_IMMPRE:
  case ENC_LDRSH_32_LDST_IMMPOST:
  case ENC_LDRSH_64_LDST_IMMPOST:
  case ENC_LDRSH_32_LDST_IMMPRE:
  case ENC_LDRSH_64_LDST_IMMPRE:
  case ENC_LDRSW_64_LDST_IMMPOST:
  case ENC_LDRSW_64_LDST_IMMPRE:
  case ENC_LDR_B_LDST_IMMPOST:
  case ENC_LDR_H_LDST_IMMPOST:
  case ENC_LDR_S_LDST_IMMPOST:
  case ENC_LDR_D_LDST_IMMPOST:
  case ENC_LDR_Q_LDST_IMMPOST:
  case ENC_LDR_B_LDST_IMMPRE:
  case ENC_LDR_H_LDST_IMMPRE:
  case ENC_LDR_S_LDST_IMMPRE:
  case ENC_LDR_D_LDST_IMMPRE:
  case ENC_LDR_Q_LDST_IMMPRE:
  case ENC_LDR_32_LDST_IMMPOST:
  case ENC_LDR_64_LDST_IMMPOST:
  case ENC_LDR_32_LDST_IMMPRE:
  case ENC_LDR_64_LDST_IMMPRE:
  case ENC_LDTR_32_LDST_UNPRIV:
  case ENC_LDTR_64_LDST_UNPRIV:
  case ENC_LDTRB_32_LDST_UNPRIV:
  case ENC_LDTRH_32_LDST_UNPRIV:
  case ENC_LDTRSB_32_LDST_UNPRIV:
  case ENC_LDTRSB_64_LDST_UNPRIV:
  case ENC_LDTRSH_32_LDST_UNPRIV:
  case ENC_LDTRSH_64_LDST_UNPRIV:
  case ENC_LDTRSW_64_LDST_UNPRIV:
  case ENC_LDURB_32_LDST_UNSCALED:
  case ENC_LDURH_32_LDST_UNSCALED:
  case ENC_LDURSB_32_LDST_UNSCALED:
  case ENC_LDURSB_64_LDST_UNSCALED:
  case ENC_LDURSH_32_LDST_UNSCALED:
  case ENC_LDURSH_64_LDST_UNSCALED:
  case ENC_LDURSW_64_LDST_UNSCALED:
  case ENC_LDUR_B_LDST_UNSCALED:
  case ENC_LDUR_H_LDST_UNSCALED:
  case ENC_LDUR_S_LDST_UNSCALED:
  case ENC_LDUR_D_LDST_UNSCALED:
  case ENC_LDUR_Q_LDST_UNSCALED:
  case ENC_LDUR_32_LDST_UNSCALED:
  case ENC_LDUR_64_LDST_UNSCALED:
  case ENC_PRFUM_P_LDST_UNSCALED:
  case ENC_STRB_32_LDST_IMMPOST:
  case ENC_STRB_32_LDST_IMMPRE:
  case ENC_STRH_32_LDST_IMMPOST:
  case ENC_STRH_32_LDST_IMMPRE:
  case ENC_STR_B_LDST_IMMPOST:
  case ENC_STR_H_LDST_IMMPOST:
  case ENC_STR_S_LDST_IMMPOST:
  case ENC_STR_D_LDST_IMMPOST:
  case ENC_STR_Q_LDST_IMMPOST:
  case ENC_STR_B_LDST_IMMPRE:
  case ENC_STR_H_LDST_IMMPRE:
  case ENC_STR_S_LDST_IMMPRE:
  case ENC_STR_D_LDST_IMMPRE:
  case ENC_STR_Q_LDST_IMMPRE:
  case ENC_STR_32_LDST_IMMPOST:
  case ENC_STR_64_LDST_IMMPOST:
  case ENC_STR_32_LDST_IMMPRE:
  case ENC_STR_64_LDST_IMMPRE:
  case ENC_STTR_32_LDST_UNPRIV:
  case ENC_STTR_64_LDST_UNPRIV:
  case ENC_STTRB_32_LDST_UNPRIV:
  case ENC_STTRH_32_LDST_UNPRIV:
  case ENC_STURB_32_LDST_UNSCALED:
  case ENC_STURH_32_LDST_UNSCALED:
  case ENC_STUR_B_LDST_UNSCALED:
  case ENC_STUR_H_LDST_UNSCALED:
  case ENC_STUR_S_LDST_UNSCALED:
  case ENC_STUR_D_LDST_UNSCALED:
  case ENC_STUR_Q_LDST_UNSCALED:
  case ENC_STUR_32_LDST_UNSCALED:
  case ENC_STUR_64_LDST_UNSCALED:

   ctx->size = insword>>30;
   ctx->V = (insword>>26)&1;
   ctx->opc = (insword>>22)&3;
   ctx->imm9 = (insword>>12)&0x1ff;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_WFET_ONLY_SYSTEMINSTRSWITHREG:
  case ENC_WFIT_ONLY_SYSTEMINSTRSWITHREG:

   ctx->CRm = (insword>>8)&15;
   ctx->op2 = (insword>>5)&7;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_DSB_BON_BARRIERS:

   ctx->imm2 = (insword>>10)&3;
   ctx->op2 = (insword>>7)&1;
   ctx->op2 = (insword>>5)&3;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_SHA512SU0_VV2_CRYPTOSHA512_2:
  case ENC_SM4E_VV4_CRYPTOSHA512_2:

   ctx->opcode = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_UDF_ONLY_PERM_UNDEF:

   ctx->imm16 = insword&0xffff;
   break;
  case ENC_PUNPKHI_P_P_:
  case ENC_PUNPKLO_P_P_:

   ctx->H = (insword>>16)&1;
   ctx->Pn = (insword>>5)&15;
   ctx->Pd = insword&15;
   break;
  case ENC_MOV_DUPM_Z_I_:
  case ENC_DUPM_Z_I_:

   ctx->imm13 = (insword>>5)&0x1fff;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_XAR_VVV2_CRYPTO3_IMM6:

   ctx->Rm = (insword>>16)&0x1f;
   ctx->imm6 = (insword>>10)&0x3f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SM3TT1A_VVV4_CRYPTO3_IMM2:
  case ENC_SM3TT1B_VVV4_CRYPTO3_IMM2:
  case ENC_SM3TT2A_VVV4_CRYPTO3_IMM2:
  case ENC_SM3TT2B_VVV_CRYPTO3_IMM2:

   ctx->Rm = (insword>>16)&0x1f;
   ctx->imm2 = (insword>>12)&3;
   ctx->opcode = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_RAX1_VVV2_CRYPTOSHA512_3:
  case ENC_SHA512H2_QQV_CRYPTOSHA512_3:
  case ENC_SHA512H_QQV_CRYPTOSHA512_3:
  case ENC_SHA512SU1_VVV2_CRYPTOSHA512_3:
  case ENC_SM3PARTW1_VVV4_CRYPTOSHA512_3:
  case ENC_SM3PARTW2_VVV4_CRYPTOSHA512_3:
  case ENC_SM4EKEY_VVV4_CRYPTOSHA512_3:

   ctx->Rm = (insword>>16)&0x1f;
   ctx->O = (insword>>14)&1;
   ctx->opcode = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_PRFB_I_P_BZ_D_64_SCALED:
  case ENC_PRFD_I_P_BZ_D_64_SCALED:
  case ENC_PRFH_I_P_BZ_D_64_SCALED:
  case ENC_PRFW_I_P_BZ_D_64_SCALED:

   ctx->Zm = (insword>>16)&0x1f;
   ctx->msz = (insword>>13)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->prfop = insword&15;
   break;
  case ENC_EXT_Z_ZI_DES:

   ctx->imm8h = (insword>>16)&0x1f;
   ctx->imm8l = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_EXT_Z_ZI_CON:

   ctx->imm8h = (insword>>16)&0x1f;
   ctx->imm8l = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MRS_RS_SYSTEMMOVE:
  case ENC_MSR_SR_SYSTEMMOVE:

   ctx->L = (insword>>21)&1;
   ctx->op0 = (insword>>20)&1;
   ctx->o0 = (insword>>19)&1;
   ctx->op1 = (insword>>16)&7;
   ctx->CRn = (insword>>12)&15;
   ctx->CRm = (insword>>8)&15;
   ctx->op2 = (insword>>5)&7;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_AXFLAG_M_PSTATE:
  case ENC_CFINV_M_PSTATE:
  case ENC_MSR_SI_PSTATE:
  case ENC_XAFLAG_M_PSTATE:

   ctx->L = (insword>>21)&1;
   ctx->op0 = (insword>>19)&3;
   ctx->op1 = (insword>>16)&7;
   ctx->CRn = (insword>>12)&15;
   ctx->CRm = (insword>>8)&15;
   ctx->op2 = (insword>>5)&7;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_AT_SYS_CR_SYSTEMINSTRS:
  case ENC_AUTIA1716_HI_HINTS:
  case ENC_AUTIASP_HI_HINTS:
  case ENC_AUTIAZ_HI_HINTS:
  case ENC_AUTIB1716_HI_HINTS:
  case ENC_AUTIBSP_HI_HINTS:
  case ENC_AUTIBZ_HI_HINTS:
  case ENC_BTI_HB_HINTS:
  case ENC_CFP_SYS_CR_SYSTEMINSTRS:
  case ENC_CLREX_BN_BARRIERS:
  case ENC_CPP_SYS_CR_SYSTEMINSTRS:
  case ENC_CSDB_HI_HINTS:
  case ENC_DC_SYS_CR_SYSTEMINSTRS:
  case ENC_DGH_HI_HINTS:
  case ENC_DVP_SYS_CR_SYSTEMINSTRS:
  case ENC_ESB_HI_HINTS:
  case ENC_HINT_HM_HINTS:
  case ENC_IC_SYS_CR_SYSTEMINSTRS:
  case ENC_NOP_HI_HINTS:
  case ENC_PACIA1716_HI_HINTS:
  case ENC_PACIASP_HI_HINTS:
  case ENC_PACIAZ_HI_HINTS:
  case ENC_PACIB1716_HI_HINTS:
  case ENC_PACIBSP_HI_HINTS:
  case ENC_PACIBZ_HI_HINTS:
  case ENC_PSB_HC_HINTS:
  case ENC_SEV_HI_HINTS:
  case ENC_SEVL_HI_HINTS:
  case ENC_SYS_CR_SYSTEMINSTRS:
  case ENC_SYSL_RC_SYSTEMINSTRS:
  case ENC_TCOMMIT_ONLY_BARRIERS:
  case ENC_TLBI_SYS_CR_SYSTEMINSTRS:
  case ENC_TSB_HC_HINTS:
  case ENC_TSTART_BR_SYSTEMRESULT:
  case ENC_TTEST_BR_SYSTEMRESULT:
  case ENC_WFE_HI_HINTS:
  case ENC_WFI_HI_HINTS:
  case ENC_XPACLRI_HI_HINTS:
  case ENC_YIELD_HI_HINTS:

   ctx->L = (insword>>21)&1;
   ctx->op0 = (insword>>19)&3;
   ctx->op1 = (insword>>16)&7;
   ctx->CRn = (insword>>12)&15;
   ctx->CRm = (insword>>8)&15;
   ctx->op2 = (insword>>5)&7;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_DMB_BO_BARRIERS:
  case ENC_DSB_BO_BARRIERS:
  case ENC_ISB_BI_BARRIERS:
  case ENC_PSSBB_DSB_BO_BARRIERS:
  case ENC_SB_ONLY_BARRIERS:
  case ENC_SSBB_DSB_BO_BARRIERS:

   ctx->L = (insword>>21)&1;
   ctx->op0 = (insword>>19)&3;
   ctx->op1 = (insword>>16)&7;
   ctx->CRn = (insword>>12)&15;
   ctx->CRm = (insword>>8)&15;
   ctx->opc = (insword>>5)&3;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_PRFB_I_P_BI_S:
  case ENC_PRFD_I_P_BI_S:
  case ENC_PRFH_I_P_BI_S:
  case ENC_PRFW_I_P_BI_S:

   ctx->imm6 = (insword>>16)&0x3f;
   ctx->msz = (insword>>13)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->prfop = insword&15;
   break;
  case ENC_LDR_Z_BI_:
  case ENC_STR_Z_BI_:

   ctx->imm9h = (insword>>16)&0x3f;
   ctx->imm9l = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LDR_P_BI_:
  case ENC_STR_P_BI_:

   ctx->imm9h = (insword>>16)&0x3f;
   ctx->imm9l = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Pt = insword&15;
   break;
  case ENC_BCAX_VVV16_CRYPTO4:
  case ENC_EOR3_VVV16_CRYPTO4:
  case ENC_SM3SS1_VVV4_CRYPTO4:

   ctx->Op0 = (insword>>21)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Ra = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BRKN_P_P_PP_:
  case ENC_BRKNS_P_P_PP_:

   ctx->S = (insword>>22)&1;
   ctx->Pg = (insword>>10)&15;
   ctx->Pn = (insword>>5)&15;
   ctx->Pdm = insword&15;
   break;
  case ENC_BFMLALB_Z_ZZZ_:
  case ENC_BFMLALT_Z_ZZZ_:
  case ENC_FMLALB_Z_ZZZ_:
  case ENC_FMLALT_Z_ZZZ_:
  case ENC_FMLSLB_Z_ZZZ_:
  case ENC_FMLSLT_Z_ZZZ_:

   ctx->o2 = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>13)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_BFMLALB_Z_ZZZI_:
  case ENC_BFMLALT_Z_ZZZI_:
  case ENC_FMLALB_Z_ZZZI_S:
  case ENC_FMLALT_Z_ZZZI_S:
  case ENC_FMLSLB_Z_ZZZI_S:
  case ENC_FMLSLT_Z_ZZZI_S:

   ctx->o2 = (insword>>22)&1;
   ctx->i3h = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->op = (insword>>13)&1;
   ctx->i3l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_ADDPL_R_RI_:
  case ENC_ADDVL_R_RI_:

   ctx->op = (insword>>22)&1;
   ctx->Rn = (insword>>16)&0x1f;
   ctx->imm6 = (insword>>5)&0x3f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BFDOT_Z_ZZZ_:

   ctx->op = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_TRN1_Z_ZZ_Q:
  case ENC_TRN2_Z_ZZ_Q:
  case ENC_UZP1_Z_ZZ_Q:
  case ENC_UZP2_Z_ZZ_Q:
  case ENC_ZIP2_Z_ZZ_Q:
  case ENC_ZIP1_Z_ZZ_Q:

   ctx->op = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->H = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_BFDOT_Z_ZZZI_:

   ctx->op = (insword>>22)&1;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_RDVL_R_I_:

   ctx->op = (insword>>22)&1;
   ctx->opc2 = (insword>>17)&15;
   ctx->opc2 = (insword>>16)&1;
   ctx->imm6 = (insword>>5)&0x3f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SSHLLB_Z_ZI_:
  case ENC_SSHLLT_Z_ZI_:
  case ENC_USHLLB_Z_ZI_:
  case ENC_USHLLT_Z_ZI_:

   ctx->tszh = (insword>>22)&1;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_RSHRNB_Z_ZI_:
  case ENC_RSHRNT_Z_ZI_:
  case ENC_SHRNB_Z_ZI_:
  case ENC_SHRNT_Z_ZI_:
  case ENC_SQRSHRNB_Z_ZI_:
  case ENC_SQRSHRNT_Z_ZI_:
  case ENC_SQRSHRUNB_Z_ZI_:
  case ENC_SQRSHRUNT_Z_ZI_:
  case ENC_SQSHRNB_Z_ZI_:
  case ENC_SQSHRNT_Z_ZI_:
  case ENC_SQSHRUNB_Z_ZI_:
  case ENC_SQSHRUNT_Z_ZI_:
  case ENC_UQRSHRNB_Z_ZI_:
  case ENC_UQRSHRNT_Z_ZI_:
  case ENC_UQSHRNB_Z_ZI_:
  case ENC_UQSHRNT_Z_ZI_:

   ctx->tszh = (insword>>22)&1;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->op = (insword>>13)&1;
   ctx->U = (insword>>12)&1;
   ctx->R = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQXTUNB_Z_ZZ_:
  case ENC_SQXTUNT_Z_ZZ_:

   ctx->tszh = (insword>>22)&1;
   ctx->tszl = (insword>>19)&3;
   ctx->opc = (insword>>11)&3;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQXTNB_Z_ZZ_:
  case ENC_SQXTNT_Z_ZZ_:
  case ENC_UQXTNB_Z_ZZ_:
  case ENC_UQXTNT_Z_ZZ_:

   ctx->tszh = (insword>>22)&1;
   ctx->tszl = (insword>>19)&3;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_LD1H_Z_P_BZ_S_X32_SCALED:
  case ENC_LD1SH_Z_P_BZ_S_X32_SCALED:
  case ENC_LD1W_Z_P_BZ_S_X32_SCALED:
  case ENC_LDFF1H_Z_P_BZ_S_X32_SCALED:
  case ENC_LDFF1SH_Z_P_BZ_S_X32_SCALED:
  case ENC_LDFF1W_Z_P_BZ_S_X32_SCALED:

   ctx->xs = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->ff = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_PRFB_I_P_BZ_S_X32_SCALED:
  case ENC_PRFB_I_P_BZ_D_X32_SCALED:
  case ENC_PRFD_I_P_BZ_S_X32_SCALED:
  case ENC_PRFD_I_P_BZ_D_X32_SCALED:
  case ENC_PRFH_I_P_BZ_S_X32_SCALED:
  case ENC_PRFH_I_P_BZ_D_X32_SCALED:
  case ENC_PRFW_I_P_BZ_S_X32_SCALED:
  case ENC_PRFW_I_P_BZ_D_X32_SCALED:

   ctx->xs = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->msz = (insword>>13)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->prfop = insword&15;
   break;
  case ENC_BRKA_P_P_P_:
  case ENC_BRKAS_P_P_P_Z:
  case ENC_BRKB_P_P_P_:
  case ENC_BRKBS_P_P_P_Z:

   ctx->B = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pg = (insword>>10)&15;
   ctx->Pn = (insword>>5)&15;
   ctx->M = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_MOV_DUP_Z_ZI_:
  case ENC_MOV_DUP_Z_ZI_2:
  case ENC_DUP_Z_ZI_:

   ctx->imm2 = (insword>>22)&3;
   ctx->tsz = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_PFALSE_P_:
  case ENC_RDFFR_P_F_:

   ctx->op = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_RDFFR_P_P_F_:
  case ENC_RDFFRS_P_P_F_:

   ctx->op = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pg = (insword>>5)&15;
   ctx->Pd = insword&15;
   break;
  case ENC_PFIRST_P_P_P_:

   ctx->op = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pg = (insword>>5)&15;
   ctx->Pdn = insword&15;
   break;
  case ENC_MOVS_ANDS_P_P_PP_Z:
  case ENC_MOVS_ORRS_P_P_PP_Z:
  case ENC_MOV_AND_P_P_PP_Z:
  case ENC_MOV_ORR_P_P_PP_Z:
  case ENC_MOV_SEL_P_P_PP_:
  case ENC_NOTS_EORS_P_P_PP_Z:
  case ENC_NOT_EOR_P_P_PP_Z:
  case ENC_AND_P_P_PP_Z:
  case ENC_ANDS_P_P_PP_Z:
  case ENC_BIC_P_P_PP_Z:
  case ENC_BICS_P_P_PP_Z:
  case ENC_EOR_P_P_PP_Z:
  case ENC_EORS_P_P_PP_Z:
  case ENC_NAND_P_P_PP_Z:
  case ENC_NANDS_P_P_PP_Z:
  case ENC_NOR_P_P_PP_Z:
  case ENC_NORS_P_P_PP_Z:
  case ENC_ORN_P_P_PP_Z:
  case ENC_ORNS_P_P_PP_Z:
  case ENC_ORR_P_P_PP_Z:
  case ENC_ORRS_P_P_PP_Z:
  case ENC_SEL_P_P_PP_:

   ctx->op = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pm = (insword>>16)&15;
   ctx->Pg = (insword>>10)&15;
   ctx->o2 = (insword>>9)&1;
   ctx->Pn = (insword>>5)&15;
   ctx->o3 = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_BRKPA_P_P_PP_:
  case ENC_BRKPAS_P_P_PP_:
  case ENC_BRKPB_P_P_PP_:
  case ENC_BRKPBS_P_P_PP_:

   ctx->op = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pm = (insword>>16)&15;
   ctx->Pg = (insword>>10)&15;
   ctx->Pn = (insword>>5)&15;
   ctx->B = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_BRK_EX_EXCEPTION:
  case ENC_DCPS1_DC_EXCEPTION:
  case ENC_DCPS2_DC_EXCEPTION:
  case ENC_DCPS3_DC_EXCEPTION:
  case ENC_HLT_EX_EXCEPTION:
  case ENC_HVC_EX_EXCEPTION:
  case ENC_SMC_EX_EXCEPTION:
  case ENC_SVC_EX_EXCEPTION:
  case ENC_TCANCEL_EX_EXCEPTION:

   ctx->opc = (insword>>21)&7;
   ctx->imm16 = (insword>>5)&0xffff;
   ctx->op2 = (insword>>2)&7;
   ctx->LL = insword&3;
   break;
  case ENC_BIC_AND_Z_ZI_:
  case ENC_EON_EOR_Z_ZI_:
  case ENC_ORN_ORR_Z_ZI_:
  case ENC_AND_Z_ZI_:
  case ENC_EOR_Z_ZI_:
  case ENC_ORR_Z_ZI_:

   ctx->opc = (insword>>22)&3;
   ctx->imm13 = (insword>>5)&0x1fff;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_BFCVT_Z_P_Z_S2BF:
  case ENC_BFCVTNT_Z_P_Z_S2BF:
  case ENC_FCVT_Z_P_Z_H2S:
  case ENC_FCVT_Z_P_Z_H2D:
  case ENC_FCVT_Z_P_Z_S2H:
  case ENC_FCVT_Z_P_Z_S2D:
  case ENC_FCVT_Z_P_Z_D2H:
  case ENC_FCVT_Z_P_Z_D2S:
  case ENC_FCVTLT_Z_P_Z_H2S:
  case ENC_FCVTLT_Z_P_Z_S2D:
  case ENC_FCVTNT_Z_P_Z_S2H:
  case ENC_FCVTNT_Z_P_Z_D2S:
  case ENC_FCVTX_Z_P_Z_D2S:
  case ENC_FCVTXNT_Z_P_Z_D2S:

   ctx->opc = (insword>>22)&3;
   ctx->opc2 = (insword>>16)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FCVTZS_Z_P_Z_FP162H:
  case ENC_FCVTZS_Z_P_Z_FP162W:
  case ENC_FCVTZS_Z_P_Z_FP162X:
  case ENC_FCVTZS_Z_P_Z_S2W:
  case ENC_FCVTZS_Z_P_Z_S2X:
  case ENC_FCVTZS_Z_P_Z_D2W:
  case ENC_FCVTZS_Z_P_Z_D2X:
  case ENC_FCVTZU_Z_P_Z_FP162H:
  case ENC_FCVTZU_Z_P_Z_FP162W:
  case ENC_FCVTZU_Z_P_Z_FP162X:
  case ENC_FCVTZU_Z_P_Z_S2W:
  case ENC_FCVTZU_Z_P_Z_S2X:
  case ENC_FCVTZU_Z_P_Z_D2W:
  case ENC_FCVTZU_Z_P_Z_D2X:
  case ENC_SCVTF_Z_P_Z_H2FP16:
  case ENC_SCVTF_Z_P_Z_W2FP16:
  case ENC_SCVTF_Z_P_Z_W2S:
  case ENC_SCVTF_Z_P_Z_W2D:
  case ENC_SCVTF_Z_P_Z_X2FP16:
  case ENC_SCVTF_Z_P_Z_X2S:
  case ENC_SCVTF_Z_P_Z_X2D:
  case ENC_UCVTF_Z_P_Z_H2FP16:
  case ENC_UCVTF_Z_P_Z_W2FP16:
  case ENC_UCVTF_Z_P_Z_W2S:
  case ENC_UCVTF_Z_P_Z_W2D:
  case ENC_UCVTF_Z_P_Z_X2FP16:
  case ENC_UCVTF_Z_P_Z_X2S:
  case ENC_UCVTF_Z_P_Z_X2D:

   ctx->opc = (insword>>22)&3;
   ctx->opc2 = (insword>>17)&3;
   ctx->int_U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FLOGB_Z_P_Z_:

   ctx->opc = (insword>>22)&3;
   ctx->size = (insword>>17)&3;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MOV_ORR_Z_ZZ_:
  case ENC_AND_Z_ZZ_:
  case ENC_BIC_Z_ZZ_:
  case ENC_EOR_Z_ZZ_:
  case ENC_ORR_Z_ZZ_:

   ctx->opc = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_BFMMLA_Z_ZZZ_:
  case ENC_FMMLA_Z_ZZZ_S:
  case ENC_FMMLA_Z_ZZZ_D:

   ctx->opc = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_BCAX_Z_ZZZ_:
  case ENC_BSL1N_Z_ZZZ_:
  case ENC_BSL2N_Z_ZZZ_:
  case ENC_BSL_Z_ZZZ_:
  case ENC_EOR3_Z_ZZZ_:
  case ENC_NBSL_Z_ZZZ_:

   ctx->opc = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->o2 = (insword>>10)&1;
   ctx->Zk = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_ADR_Z_AZ_D_S32_SCALED:
  case ENC_ADR_Z_AZ_D_U32_SCALED:

   ctx->opc = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->msz = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_LDG_64LOFFSET_LDSTTAGS:
  case ENC_LDGM_64BULK_LDSTTAGS:
  case ENC_ST2G_64SPOST_LDSTTAGS:
  case ENC_ST2G_64SPRE_LDSTTAGS:
  case ENC_ST2G_64SOFFSET_LDSTTAGS:
  case ENC_STG_64SPOST_LDSTTAGS:
  case ENC_STG_64SPRE_LDSTTAGS:
  case ENC_STG_64SOFFSET_LDSTTAGS:
  case ENC_STGM_64BULK_LDSTTAGS:
  case ENC_STZ2G_64SPOST_LDSTTAGS:
  case ENC_STZ2G_64SPRE_LDSTTAGS:
  case ENC_STZ2G_64SOFFSET_LDSTTAGS:
  case ENC_STZG_64SPOST_LDSTTAGS:
  case ENC_STZG_64SPRE_LDSTTAGS:
  case ENC_STZG_64SOFFSET_LDSTTAGS:
  case ENC_STZGM_64BULK_LDSTTAGS:

   ctx->opc = (insword>>22)&3;
   ctx->imm9 = (insword>>12)&0x1ff;
   ctx->op2 = (insword>>10)&3;
   ctx->Xn = (insword>>5)&0x1f;
   ctx->Xt = insword&0x1f;
   break;
  case ENC_MOVPRFX_Z_Z_:

   ctx->opc = (insword>>22)&3;
   ctx->opc2 = (insword>>17)&15;
   ctx->opc2 = (insword>>16)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_INSR_Z_R_:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_MOV_DUP_Z_R_:
  case ENC_DUP_Z_R_:

   ctx->size = (insword>>22)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_INSR_Z_V_:

   ctx->size = (insword>>22)&3;
   ctx->Vm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_REV_Z_Z_:

   ctx->size = (insword>>22)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_PNEXT_P_P_P_:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>5)&15;
   ctx->Pdn = insword&15;
   break;
  case ENC_REV_P_P_:

   ctx->size = (insword>>22)&3;
   ctx->Pn = (insword>>5)&15;
   ctx->Pd = insword&15;
   break;
  case ENC_AESIMC_Z_Z_:
  case ENC_AESMC_Z_Z_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>10)&1;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_MOV_CPY_Z_P_R_:
  case ENC_CPY_Z_P_R_:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MOV_CPY_Z_P_V_:
  case ENC_CPY_Z_P_V_:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Vn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SPLICE_Z_P_ZZ_DES:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_COMPACT_Z_P_Z_:
  case ENC_SPLICE_Z_P_ZZ_CON:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_CLASTA_R_P_Z_:
  case ENC_CLASTB_R_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->B = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Rdn = insword&0x1f;
   break;
  case ENC_CLASTA_V_P_Z_:
  case ENC_CLASTB_V_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->B = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Vdn = insword&0x1f;
   break;
  case ENC_CLASTA_Z_P_ZZ_:
  case ENC_CLASTB_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->B = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_LASTA_R_P_Z_:
  case ENC_LASTB_R_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->B = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_LASTA_V_P_Z_:
  case ENC_LASTB_V_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->B = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Vd = insword&0x1f;
   break;
  case ENC_PTRUE_P_S_:
  case ENC_PTRUES_P_S_:

   ctx->size = (insword>>22)&3;
   ctx->S = (insword>>16)&1;
   ctx->pattern = (insword>>5)&0x1f;
   ctx->Pd = insword&15;
   break;
  case ENC_SADALP_Z_P_Z_:
  case ENC_UADALP_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_AESD_Z_ZZ_:
  case ENC_AESE_Z_ZZ_:
  case ENC_SM4E_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>16)&1;
   ctx->o2 = (insword>>10)&1;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_CADD_Z_ZZ_:
  case ENC_SQCADD_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>16)&1;
   ctx->rot = (insword>>10)&1;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SHA1H_SS_CRYPTOSHA2:
  case ENC_SHA1SU1_VV_CRYPTOSHA2:
  case ENC_SHA256SU0_VV_CRYPTOSHA2:

   ctx->size = (insword>>22)&3;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCADD_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->rot = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_AESD_B_CRYPTOAES:
  case ENC_AESE_B_CRYPTOAES:
  case ENC_AESIMC_B_CRYPTOAES:
  case ENC_AESMC_B_CRYPTOAES:

   ctx->size = (insword>>22)&3;
   ctx->D = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQDECP_Z_P_Z_:
  case ENC_SQINCP_Z_P_Z_:
  case ENC_UQDECP_Z_P_Z_:
  case ENC_UQINCP_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->D = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->opc = (insword>>9)&3;
   ctx->Pm = (insword>>5)&15;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SQDECP_R_P_R_SX:
  case ENC_SQDECP_R_P_R_X:
  case ENC_SQINCP_R_P_R_SX:
  case ENC_SQINCP_R_P_R_X:
  case ENC_UQDECP_R_P_R_UW:
  case ENC_UQDECP_R_P_R_X:
  case ENC_UQINCP_R_P_R_UW:
  case ENC_UQINCP_R_P_R_X:

   ctx->size = (insword>>22)&3;
   ctx->D = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->sf = (insword>>10)&1;
   ctx->op = (insword>>9)&1;
   ctx->Pm = (insword>>5)&15;
   ctx->Rdn = insword&0x1f;
   break;
  case ENC_MUL_Z_P_ZZ_:
  case ENC_SMULH_Z_P_ZZ_:
  case ENC_UMULH_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->H = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SDIV_Z_P_ZZ_:
  case ENC_SDIVR_Z_P_ZZ_:
  case ENC_UDIV_Z_P_ZZ_:
  case ENC_UDIVR_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->R = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SUNPKHI_Z_Z_:
  case ENC_SUNPKLO_Z_Z_:
  case ENC_UUNPKHI_Z_Z_:
  case ENC_UUNPKLO_Z_Z_:

   ctx->size = (insword>>22)&3;
   ctx->U = (insword>>17)&1;
   ctx->H = (insword>>16)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FCMEQ_P_P_Z0_:
  case ENC_FCMGT_P_P_Z0_:
  case ENC_FCMGE_P_P_Z0_:
  case ENC_FCMLT_P_P_Z0_:
  case ENC_FCMLE_P_P_Z0_:
  case ENC_FCMNE_P_P_Z0_:

   ctx->size = (insword>>22)&3;
   ctx->eq = (insword>>17)&1;
   ctx->lt = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_DECP_R_P_R_:
  case ENC_INCP_R_P_R_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>17)&1;
   ctx->D = (insword>>16)&1;
   ctx->opc2 = (insword>>9)&3;
   ctx->Pm = (insword>>5)&15;
   ctx->Rdn = insword&0x1f;
   break;
  case ENC_DECP_Z_P_Z_:
  case ENC_INCP_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>17)&1;
   ctx->D = (insword>>16)&1;
   ctx->opc2 = (insword>>9)&3;
   ctx->Pm = (insword>>5)&15;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SADDV_R_P_Z_:
  case ENC_SMAXV_R_P_Z_:
  case ENC_SMINV_R_P_Z_:
  case ENC_UADDV_R_P_Z_:
  case ENC_UMAXV_R_P_Z_:
  case ENC_UMINV_R_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Vd = insword&0x1f;
   break;
  case ENC_FADDA_V_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>16)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Vdn = insword&0x1f;
   break;
  case ENC_ANDV_R_P_Z_:
  case ENC_EORV_R_P_Z_:
  case ENC_ORV_R_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>16)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Vd = insword&0x1f;
   break;
  case ENC_FRECPX_Z_P_Z_:
  case ENC_FSQRT_Z_P_Z_:
  case ENC_RBIT_Z_P_Z_:
  case ENC_REVB_Z_Z_:
  case ENC_REVH_Z_Z_:
  case ENC_REVW_Z_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>16)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_ASR_Z_P_ZW_:
  case ENC_ASR_Z_P_ZZ_:
  case ENC_ASRR_Z_P_ZZ_:
  case ENC_LSL_Z_P_ZW_:
  case ENC_LSL_Z_P_ZZ_:
  case ENC_LSLR_Z_P_ZZ_:
  case ENC_LSR_Z_P_ZW_:
  case ENC_LSR_Z_P_ZZ_:
  case ENC_LSRR_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->R = (insword>>18)&1;
   ctx->L = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SHADD_Z_P_ZZ_:
  case ENC_SHSUB_Z_P_ZZ_:
  case ENC_SHSUBR_Z_P_ZZ_:
  case ENC_SRHADD_Z_P_ZZ_:
  case ENC_UHADD_Z_P_ZZ_:
  case ENC_UHSUB_Z_P_ZZ_:
  case ENC_UHSUBR_Z_P_ZZ_:
  case ENC_URHADD_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->R = (insword>>18)&1;
   ctx->S = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_FTMAD_Z_ZZI_:

   ctx->size = (insword>>22)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SQADD_Z_P_ZZ_:
  case ENC_SQSUB_Z_P_ZZ_:
  case ENC_SQSUBR_Z_P_ZZ_:
  case ENC_SUQADD_Z_P_ZZ_:
  case ENC_UQADD_Z_P_ZZ_:
  case ENC_UQSUB_Z_P_ZZ_:
  case ENC_UQSUBR_Z_P_ZZ_:
  case ENC_USQADD_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>18)&1;
   ctx->S = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_FRECPE_Z_Z_:
  case ENC_FRSQRTE_Z_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_ADD_Z_P_ZZ_:
  case ENC_AND_Z_P_ZZ_:
  case ENC_BIC_Z_P_ZZ_:
  case ENC_EOR_Z_P_ZZ_:
  case ENC_FADDP_Z_P_ZZ_:
  case ENC_FMAXNMP_Z_P_ZZ_:
  case ENC_FMAXP_Z_P_ZZ_:
  case ENC_FMINNMP_Z_P_ZZ_:
  case ENC_FMINP_Z_P_ZZ_:
  case ENC_ORR_Z_P_ZZ_:
  case ENC_SUB_Z_P_ZZ_:
  case ENC_SUBR_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_FADDV_V_P_Z_:
  case ENC_FMAXNMV_V_P_Z_:
  case ENC_FMAXV_V_P_Z_:
  case ENC_FMINNMV_V_P_Z_:
  case ENC_FMINV_V_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Vd = insword&0x1f;
   break;
  case ENC_ABS_Z_P_Z_:
  case ENC_CLS_Z_P_Z_:
  case ENC_CLZ_Z_P_Z_:
  case ENC_CNOT_Z_P_Z_:
  case ENC_CNT_Z_P_Z_:
  case ENC_FABS_Z_P_Z_:
  case ENC_FNEG_Z_P_Z_:
  case ENC_FRINTI_Z_P_Z_:
  case ENC_FRINTX_Z_P_Z_:
  case ENC_FRINTA_Z_P_Z_:
  case ENC_FRINTN_Z_P_Z_:
  case ENC_FRINTZ_Z_P_Z_:
  case ENC_FRINTM_Z_P_Z_:
  case ENC_FRINTP_Z_P_Z_:
  case ENC_NEG_Z_P_Z_:
  case ENC_NOT_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FADD_Z_P_ZS_:
  case ENC_FMAX_Z_P_ZS_:
  case ENC_FMAXNM_Z_P_ZS_:
  case ENC_FMIN_Z_P_ZS_:
  case ENC_FMINNM_Z_P_ZS_:
  case ENC_FMUL_Z_P_ZS_:
  case ENC_FSUB_Z_P_ZS_:
  case ENC_FSUBR_Z_P_ZS_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->i1 = (insword>>5)&1;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_CNTP_R_P_P_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->Pg = (insword>>10)&15;
   ctx->Pn = (insword>>5)&15;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_MUL_Z_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->o2 = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_ADD_Z_ZI_:
  case ENC_SUB_Z_ZI_:
  case ENC_SUBR_Z_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->opc = (insword>>16)&1;
   ctx->sh = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_MOVPRFX_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->M = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_ADDP_Z_P_ZZ_:
  case ENC_SABD_Z_P_ZZ_:
  case ENC_SMAX_Z_P_ZZ_:
  case ENC_SMAXP_Z_P_ZZ_:
  case ENC_SMIN_Z_P_ZZ_:
  case ENC_SMINP_Z_P_ZZ_:
  case ENC_UABD_Z_P_ZZ_:
  case ENC_UMAX_Z_P_ZZ_:
  case ENC_UMAXP_Z_P_ZZ_:
  case ENC_UMIN_Z_P_ZZ_:
  case ENC_UMINP_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_FMOV_FDUP_Z_I_:
  case ENC_FDUP_Z_I_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->o2 = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FMOV_DUP_Z_I_:
  case ENC_MOV_DUP_Z_I_:
  case ENC_DUP_Z_I_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&3;
   ctx->sh = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SXTB_Z_P_Z_:
  case ENC_SXTH_Z_P_Z_:
  case ENC_SXTW_Z_P_Z_:
  case ENC_UXTB_Z_P_Z_:
  case ENC_UXTH_Z_P_Z_:
  case ENC_UXTW_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SMAX_Z_ZI_:
  case ENC_SMIN_Z_ZI_:
  case ENC_UMAX_Z_ZI_:
  case ENC_UMIN_Z_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->U = (insword>>16)&1;
   ctx->o2 = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SQADD_Z_ZI_:
  case ENC_SQSUB_Z_ZI_:
  case ENC_UQADD_Z_ZI_:
  case ENC_UQSUB_Z_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->U = (insword>>16)&1;
   ctx->sh = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_FMOV_FCPY_Z_P_I_:
  case ENC_FCPY_Z_P_I_:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>16)&15;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FMOV_CPY_Z_P_I_:
  case ENC_MOV_CPY_Z_O_I_:
  case ENC_MOV_CPY_Z_P_I_:
  case ENC_CPY_Z_O_I_:
  case ENC_CPY_Z_P_I_:

   ctx->size = (insword>>22)&3;
   ctx->Pg = (insword>>16)&15;
   ctx->M = (insword>>14)&1;
   ctx->sh = (insword>>13)&1;
   ctx->imm8 = (insword>>5)&0xff;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_TRN1_P_PP_:
  case ENC_TRN2_P_PP_:
  case ENC_UZP1_P_PP_:
  case ENC_UZP2_P_PP_:
  case ENC_ZIP2_P_PP_:
  case ENC_ZIP1_P_PP_:

   ctx->size = (insword>>22)&3;
   ctx->Pm = (insword>>16)&15;
   ctx->opc = (insword>>11)&3;
   ctx->H = (insword>>10)&1;
   ctx->Pn = (insword>>5)&15;
   ctx->Pd = insword&15;
   break;
  case ENC_SQRSHL_Z_P_ZZ_:
  case ENC_SQRSHLR_Z_P_ZZ_:
  case ENC_SQSHL_Z_P_ZZ_:
  case ENC_SQSHLR_Z_P_ZZ_:
  case ENC_SRSHL_Z_P_ZZ_:
  case ENC_SRSHLR_Z_P_ZZ_:
  case ENC_UQRSHL_Z_P_ZZ_:
  case ENC_UQRSHLR_Z_P_ZZ_:
  case ENC_UQSHL_Z_P_ZZ_:
  case ENC_UQSHLR_Z_P_ZZ_:
  case ENC_URSHL_Z_P_ZZ_:
  case ENC_URSHLR_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Q = (insword>>19)&1;
   ctx->R = (insword>>18)&1;
   ctx->N = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SQABS_Z_P_Z_:
  case ENC_SQNEG_Z_P_Z_:
  case ENC_URECPE_Z_P_Z_:
  case ENC_URSQRTE_Z_P_Z_:

   ctx->size = (insword>>22)&3;
   ctx->Q = (insword>>19)&1;
   ctx->opc = (insword>>16)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_DECB_R_RS_:
  case ENC_DECD_R_RS_:
  case ENC_DECH_R_RS_:
  case ENC_DECW_R_RS_:
  case ENC_INCB_R_RS_:
  case ENC_INCD_R_RS_:
  case ENC_INCH_R_RS_:
  case ENC_INCW_R_RS_:

   ctx->size = (insword>>22)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->D = (insword>>10)&1;
   ctx->pattern = (insword>>5)&0x1f;
   ctx->Rdn = insword&0x1f;
   break;
  case ENC_DECD_Z_ZS_:
  case ENC_DECH_Z_ZS_:
  case ENC_DECW_Z_ZS_:
  case ENC_INCD_Z_ZS_:
  case ENC_INCH_Z_ZS_:
  case ENC_INCW_Z_ZS_:

   ctx->size = (insword>>22)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->D = (insword>>10)&1;
   ctx->pattern = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_CNTB_R_S_:
  case ENC_CNTD_R_S_:
  case ENC_CNTH_R_S_:
  case ENC_CNTW_R_S_:

   ctx->size = (insword>>22)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->op = (insword>>10)&1;
   ctx->pattern = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQDECD_Z_ZS_:
  case ENC_SQDECH_Z_ZS_:
  case ENC_SQDECW_Z_ZS_:
  case ENC_SQINCD_Z_ZS_:
  case ENC_SQINCH_Z_ZS_:
  case ENC_SQINCW_Z_ZS_:
  case ENC_UQDECD_Z_ZS_:
  case ENC_UQDECH_Z_ZS_:
  case ENC_UQDECW_Z_ZS_:
  case ENC_UQINCD_Z_ZS_:
  case ENC_UQINCH_Z_ZS_:
  case ENC_UQINCW_Z_ZS_:

   ctx->size = (insword>>22)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->D = (insword>>11)&1;
   ctx->U = (insword>>10)&1;
   ctx->pattern = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_FABD_Z_P_ZZ_:
  case ENC_FADD_Z_P_ZZ_:
  case ENC_FDIV_Z_P_ZZ_:
  case ENC_FDIVR_Z_P_ZZ_:
  case ENC_FMAX_Z_P_ZZ_:
  case ENC_FMAXNM_Z_P_ZZ_:
  case ENC_FMIN_Z_P_ZZ_:
  case ENC_FMINNM_Z_P_ZZ_:
  case ENC_FMUL_Z_P_ZZ_:
  case ENC_FMULX_Z_P_ZZ_:
  case ENC_FSCALE_Z_P_ZZ_:
  case ENC_FSUB_Z_P_ZZ_:
  case ENC_FSUBR_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&7;
   ctx->opc = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_INDEX_Z_RR_:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_WHILERW_P_RR_:
  case ENC_WHILEWR_P_RR_:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->rw = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_INDEX_Z_IR_:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->imm5 = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_WHILEGE_P_P_RR_:
  case ENC_WHILEGT_P_P_RR_:
  case ENC_WHILEHI_P_P_RR_:
  case ENC_WHILEHS_P_P_RR_:
  case ENC_WHILELE_P_P_RR_:
  case ENC_WHILELO_P_P_RR_:
  case ENC_WHILELS_P_P_RR_:
  case ENC_WHILELT_P_P_RR_:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->sf = (insword>>12)&1;
   ctx->U = (insword>>11)&1;
   ctx->lt = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->eq = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_SHA1C_QSV_CRYPTOSHA3:
  case ENC_SHA1M_QSV_CRYPTOSHA3:
  case ENC_SHA1P_QSV_CRYPTOSHA3:
  case ENC_SHA1SU0_VVV_CRYPTOSHA3:
  case ENC_SHA256SU1_VVV_CRYPTOSHA3:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SHA256H2_QQV_CRYPTOSHA3:
  case ENC_SHA256H_QQV_CRYPTOSHA3:

   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->P = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAD_Z_P_ZZZ_:
  case ENC_FMSB_Z_P_ZZZ_:
  case ENC_FNMAD_Z_P_ZZZ_:
  case ENC_FNMSB_Z_P_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Za = (insword>>16)&0x1f;
   ctx->N = (insword>>14)&1;
   ctx->op = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_CMPGT_P_P_ZW_:
  case ENC_CMPGE_P_P_ZW_:
  case ENC_CMPHI_P_P_ZW_:
  case ENC_CMPHS_P_P_ZW_:
  case ENC_CMPLT_P_P_ZW_:
  case ENC_CMPLE_P_P_ZW_:
  case ENC_CMPLO_P_P_ZW_:
  case ENC_CMPLS_P_P_ZW_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>15)&1;
   ctx->lt = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_FCMLE_FCMGE_P_P_ZZ_:
  case ENC_FCMLT_FCMGT_P_P_ZZ_:
  case ENC_FCMEQ_P_P_ZZ_:
  case ENC_FCMGT_P_P_ZZ_:
  case ENC_FCMGE_P_P_ZZ_:
  case ENC_FCMNE_P_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>15)&1;
   ctx->cmph = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->cmpl = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_CMPLE_CMPGE_P_P_ZZ_:
  case ENC_CMPLO_CMPHI_P_P_ZZ_:
  case ENC_CMPLS_CMPHS_P_P_ZZ_:
  case ENC_CMPLT_CMPGT_P_P_ZZ_:
  case ENC_CMPEQ_P_P_ZW_:
  case ENC_CMPNE_P_P_ZW_:
  case ENC_CMPEQ_P_P_ZZ_:
  case ENC_CMPGT_P_P_ZZ_:
  case ENC_CMPGE_P_P_ZZ_:
  case ENC_CMPHI_P_P_ZZ_:
  case ENC_CMPHS_P_P_ZZ_:
  case ENC_CMPNE_P_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>15)&1;
   ctx->o2 = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_FACLE_FACGE_P_P_ZZ_:
  case ENC_FACLT_FACGT_P_P_ZZ_:
  case ENC_FACGT_P_P_ZZ_:
  case ENC_FACGE_P_P_ZZ_:
  case ENC_FCMUO_P_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>15)&1;
   ctx->o2 = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->o3 = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_HISTSEG_Z_ZZ_:
  case ENC_TBL_Z_ZZ_1:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_USDOT_Z_ZZZ_S:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SQDMULH_Z_ZZ_:
  case ENC_SQRDMULH_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->R = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMLALBT_Z_ZZZ_:
  case ENC_SQDMLSLBT_Z_ZZZ_:
  case ENC_SQRDMLAH_Z_ZZZ_:
  case ENC_SQRDMLSH_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->S = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SABA_Z_ZZZ_:
  case ENC_SDOT_Z_ZZZ_:
  case ENC_UABA_Z_ZZZ_:
  case ENC_UDOT_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FTSSEL_Z_ZZ_:
  case ENC_RAX1_Z_ZZ_:
  case ENC_SM4EKEY_Z_ZZ_:
  case ENC_TBL_Z_ZZ_2:
  case ENC_TBX_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_EORBT_Z_ZZ_:
  case ENC_EORTB_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->tb = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMLALB_Z_ZZZ_:
  case ENC_SQDMLALT_Z_ZZZ_:
  case ENC_SQDMLSLB_Z_ZZZ_:
  case ENC_SQDMLSLT_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->S = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SADDLBT_Z_ZZ_:
  case ENC_SSUBLBT_Z_ZZ_:
  case ENC_SSUBLTB_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->S = (insword>>11)&1;
   ctx->tb = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SABALB_Z_ZZZ_:
  case ENC_SABALT_Z_ZZZ_:
  case ENC_UABALB_Z_ZZZ_:
  case ENC_UABALT_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_BDEP_Z_ZZ_:
  case ENC_BEXT_Z_ZZ_:
  case ENC_BGRP_Z_ZZ_:
  case ENC_LSL_Z_ZW_:
  case ENC_MUL_Z_ZZ_:
  case ENC_PMUL_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->opc = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_CDOT_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->rot = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_ASR_Z_ZW_:
  case ENC_LSR_Z_ZW_:
  case ENC_SMULH_Z_ZZ_:
  case ENC_UMULH_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_HISTCNT_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MATCH_P_P_ZZ_:
  case ENC_NMATCH_P_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->op = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_ADDHNB_Z_ZZ_:
  case ENC_ADDHNT_Z_ZZ_:
  case ENC_RADDHNB_Z_ZZ_:
  case ENC_RADDHNT_Z_ZZ_:
  case ENC_RSUBHNB_Z_ZZ_:
  case ENC_RSUBHNT_Z_ZZ_:
  case ENC_SUBHNB_Z_ZZ_:
  case ENC_SUBHNT_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->S = (insword>>12)&1;
   ctx->R = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SADDWB_Z_ZZ_:
  case ENC_SADDWT_Z_ZZ_:
  case ENC_SSUBWB_Z_ZZ_:
  case ENC_SSUBWT_Z_ZZ_:
  case ENC_UADDWB_Z_ZZ_:
  case ENC_UADDWT_Z_ZZ_:
  case ENC_USUBWB_Z_ZZ_:
  case ENC_USUBWT_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->S = (insword>>12)&1;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SMLALB_Z_ZZZ_:
  case ENC_SMLALT_Z_ZZZ_:
  case ENC_SMLSLB_Z_ZZZ_:
  case ENC_SMLSLT_Z_ZZZ_:
  case ENC_UMLALB_Z_ZZZ_:
  case ENC_UMLALT_Z_ZZZ_:
  case ENC_UMLSLB_Z_ZZZ_:
  case ENC_UMLSLT_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->S = (insword>>12)&1;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_PMULLB_Z_ZZ_:
  case ENC_PMULLT_Z_ZZ_:
  case ENC_SMULLB_Z_ZZ_:
  case ENC_SMULLT_Z_ZZ_:
  case ENC_SQDMULLB_Z_ZZ_:
  case ENC_SQDMULLT_Z_ZZ_:
  case ENC_UMULLB_Z_ZZ_:
  case ENC_UMULLT_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>12)&1;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_CMLA_Z_ZZZ_:
  case ENC_SQRDCMLAH_Z_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>12)&1;
   ctx->rot = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_ADD_Z_ZZ_:
  case ENC_FADD_Z_ZZ_:
  case ENC_FMUL_Z_ZZ_:
  case ENC_FRECPS_Z_ZZ_:
  case ENC_FRSQRTS_Z_ZZ_:
  case ENC_FSUB_Z_ZZ_:
  case ENC_FTSMUL_Z_ZZ_:
  case ENC_SUB_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->opc = (insword>>11)&3;
   ctx->opc = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_TRN1_Z_ZZ_:
  case ENC_TRN2_Z_ZZ_:
  case ENC_UZP1_Z_ZZ_:
  case ENC_UZP2_Z_ZZ_:
  case ENC_ZIP2_Z_ZZ_:
  case ENC_ZIP1_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->H = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQADD_Z_ZZ_:
  case ENC_SQSUB_Z_ZZ_:
  case ENC_UQADD_Z_ZZ_:
  case ENC_UQSUB_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MOV_SEL_Z_P_ZZ_:
  case ENC_SEL_Z_P_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&15;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MAD_Z_P_ZZZ_:
  case ENC_MSB_Z_P_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Za = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_MLA_Z_P_ZZZ_:
  case ENC_MLS_Z_P_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SABDLB_Z_ZZ_:
  case ENC_SABDLT_Z_ZZ_:
  case ENC_SADDLB_Z_ZZ_:
  case ENC_SADDLT_Z_ZZ_:
  case ENC_SSUBLB_Z_ZZ_:
  case ENC_SSUBLT_Z_ZZ_:
  case ENC_UABDLB_Z_ZZ_:
  case ENC_UABDLT_Z_ZZ_:
  case ENC_UADDLB_Z_ZZ_:
  case ENC_UADDLT_Z_ZZ_:
  case ENC_USUBLB_Z_ZZ_:
  case ENC_USUBLT_Z_ZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->op = (insword>>13)&1;
   ctx->S = (insword>>12)&1;
   ctx->U = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_FMLA_Z_P_ZZZ_:
  case ENC_FMLS_Z_P_ZZZ_:
  case ENC_FNMLA_Z_P_ZZZ_:
  case ENC_FNMLS_Z_P_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->N = (insword>>14)&1;
   ctx->op = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FCMLA_Z_P_ZZZ_:

   ctx->size = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->rot = (insword>>13)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FMUL_Z_ZZI_D:
  case ENC_MUL_Z_ZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i1 = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMULH_Z_ZZI_D:
  case ENC_SQRDMULH_Z_ZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i1 = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->R = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MLA_Z_ZZZI_D:
  case ENC_MLS_Z_ZZZI_D:
  case ENC_SQRDMLAH_Z_ZZZI_D:
  case ENC_SQRDMLSH_Z_ZZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i1 = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->S = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SDOT_Z_ZZZI_D:
  case ENC_UDOT_Z_ZZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i1 = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FMLA_Z_ZZZI_D:
  case ENC_FMLS_Z_ZZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i1 = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->op = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_CDOT_Z_ZZZI_D:
  case ENC_CMLA_Z_ZZZI_S:
  case ENC_FCMLA_Z_ZZZI_S:
  case ENC_SQRDCMLAH_Z_ZZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i1 = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->rot = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FMUL_Z_ZZI_S:
  case ENC_MUL_Z_ZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMULH_Z_ZZI_S:
  case ENC_SQRDMULH_Z_ZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->R = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MLA_Z_ZZZI_S:
  case ENC_MLS_Z_ZZZI_S:
  case ENC_SQRDMLAH_Z_ZZZI_S:
  case ENC_SQRDMLSH_Z_ZZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->S = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SDOT_Z_ZZZI_S:
  case ENC_SUDOT_Z_ZZZI_S:
  case ENC_UDOT_Z_ZZZI_S:
  case ENC_USDOT_Z_ZZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FMLA_Z_ZZZI_S:
  case ENC_FMLS_Z_ZZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->op = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_CDOT_Z_ZZZI_S:
  case ENC_CMLA_Z_ZZZI_H:
  case ENC_FCMLA_Z_ZZZI_H:
  case ENC_SQRDCMLAH_Z_ZZZI_H:

   ctx->size = (insword>>22)&3;
   ctx->i2 = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->rot = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SQDMULLB_Z_ZZI_D:
  case ENC_SQDMULLT_Z_ZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i2h = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->i2l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMLALB_Z_ZZZI_D:
  case ENC_SQDMLALT_Z_ZZZI_D:
  case ENC_SQDMLSLB_Z_ZZZI_D:
  case ENC_SQDMLSLT_Z_ZZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i2h = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->S = (insword>>12)&1;
   ctx->i2l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SMULLB_Z_ZZI_D:
  case ENC_SMULLT_Z_ZZI_D:
  case ENC_UMULLB_Z_ZZI_D:
  case ENC_UMULLT_Z_ZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i2h = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->U = (insword>>12)&1;
   ctx->i2l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SMLALB_Z_ZZZI_D:
  case ENC_SMLALT_Z_ZZZI_D:
  case ENC_SMLSLB_Z_ZZZI_D:
  case ENC_SMLSLT_Z_ZZZI_D:
  case ENC_UMLALB_Z_ZZZI_D:
  case ENC_UMLALT_Z_ZZZI_D:
  case ENC_UMLSLB_Z_ZZZI_D:
  case ENC_UMLSLT_Z_ZZZI_D:

   ctx->size = (insword>>22)&3;
   ctx->i2h = (insword>>20)&1;
   ctx->Zm = (insword>>16)&15;
   ctx->S = (insword>>13)&1;
   ctx->U = (insword>>12)&1;
   ctx->i2l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SQDMULLB_Z_ZZI_S:
  case ENC_SQDMULLT_Z_ZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i3h = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->i3l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMLALB_Z_ZZZI_S:
  case ENC_SQDMLALT_Z_ZZZI_S:
  case ENC_SQDMLSLB_Z_ZZZI_S:
  case ENC_SQDMLSLT_Z_ZZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i3h = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->S = (insword>>12)&1;
   ctx->i3l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_SMULLB_Z_ZZI_S:
  case ENC_SMULLT_Z_ZZI_S:
  case ENC_UMULLB_Z_ZZI_S:
  case ENC_UMULLT_Z_ZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i3h = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->U = (insword>>12)&1;
   ctx->i3l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SMLALB_Z_ZZZI_S:
  case ENC_SMLALT_Z_ZZZI_S:
  case ENC_SMLSLB_Z_ZZZI_S:
  case ENC_SMLSLT_Z_ZZZI_S:
  case ENC_UMLALB_Z_ZZZI_S:
  case ENC_UMLALT_Z_ZZZI_S:
  case ENC_UMLSLB_Z_ZZZI_S:
  case ENC_UMLSLT_Z_ZZZI_S:

   ctx->size = (insword>>22)&3;
   ctx->i3h = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->S = (insword>>13)&1;
   ctx->U = (insword>>12)&1;
   ctx->i3l = (insword>>11)&1;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_CMPGT_P_P_ZI_:
  case ENC_CMPGE_P_P_ZI_:
  case ENC_CMPLT_P_P_ZI_:
  case ENC_CMPLE_P_P_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->op = (insword>>15)&1;
   ctx->lt = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_CMPEQ_P_P_ZI_:
  case ENC_CMPNE_P_P_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->op = (insword>>15)&1;
   ctx->o2 = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_INDEX_Z_RI_:

   ctx->size = (insword>>22)&3;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_INDEX_Z_II_:

   ctx->size = (insword>>22)&3;
   ctx->imm5b = (insword>>16)&0x1f;
   ctx->imm5 = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_CMPHI_P_P_ZI_:
  case ENC_CMPHS_P_P_ZI_:
  case ENC_CMPLO_P_P_ZI_:
  case ENC_CMPLS_P_P_ZI_:

   ctx->size = (insword>>22)&3;
   ctx->imm7 = (insword>>14)&0x7f;
   ctx->lt = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   ctx->Pd = insword&15;
   break;
  case ENC_FEXPA_Z_Z_:

   ctx->size = (insword>>22)&3;
   ctx->opc = (insword>>17)&15;
   ctx->opc = (insword>>16)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDECB_R_RS_SX:
  case ENC_SQDECB_R_RS_X:
  case ENC_SQDECD_R_RS_SX:
  case ENC_SQDECD_R_RS_X:
  case ENC_SQDECH_R_RS_SX:
  case ENC_SQDECH_R_RS_X:
  case ENC_SQDECW_R_RS_SX:
  case ENC_SQDECW_R_RS_X:
  case ENC_SQINCB_R_RS_SX:
  case ENC_SQINCB_R_RS_X:
  case ENC_SQINCD_R_RS_SX:
  case ENC_SQINCD_R_RS_X:
  case ENC_SQINCH_R_RS_SX:
  case ENC_SQINCH_R_RS_X:
  case ENC_SQINCW_R_RS_SX:
  case ENC_SQINCW_R_RS_X:
  case ENC_UQDECB_R_RS_UW:
  case ENC_UQDECB_R_RS_X:
  case ENC_UQDECD_R_RS_UW:
  case ENC_UQDECD_R_RS_X:
  case ENC_UQDECH_R_RS_UW:
  case ENC_UQDECH_R_RS_X:
  case ENC_UQDECW_R_RS_UW:
  case ENC_UQDECW_R_RS_X:
  case ENC_UQINCB_R_RS_UW:
  case ENC_UQINCB_R_RS_X:
  case ENC_UQINCD_R_RS_UW:
  case ENC_UQINCD_R_RS_X:
  case ENC_UQINCH_R_RS_UW:
  case ENC_UQINCH_R_RS_X:
  case ENC_UQINCW_R_RS_UW:
  case ENC_UQINCW_R_RS_X:

   ctx->size = (insword>>22)&3;
   ctx->sf = (insword>>20)&1;
   ctx->imm4 = (insword>>16)&15;
   ctx->D = (insword>>11)&1;
   ctx->U = (insword>>10)&1;
   ctx->pattern = (insword>>5)&0x1f;
   ctx->Rdn = insword&0x1f;
   break;
  case ENC_ASR_Z_P_ZI_:
  case ENC_ASRD_Z_P_ZI_:
  case ENC_LSL_Z_P_ZI_:
  case ENC_LSR_Z_P_ZI_:
  case ENC_SQSHL_Z_P_ZI_:
  case ENC_SQSHLU_Z_P_ZI_:
  case ENC_SRSHR_Z_P_ZI_:
  case ENC_UQSHL_Z_P_ZI_:
  case ENC_URSHR_Z_P_ZI_:

   ctx->tszh = (insword>>22)&3;
   ctx->opc = (insword>>18)&3;
   ctx->L = (insword>>17)&1;
   ctx->U = (insword>>16)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->tszl = (insword>>8)&3;
   ctx->imm3 = (insword>>5)&7;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_XAR_Z_ZZI_:

   ctx->tszh = (insword>>22)&3;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->Zm = (insword>>5)&0x1f;
   ctx->Zdn = insword&0x1f;
   break;
  case ENC_SLI_Z_ZZI_:
  case ENC_SRI_Z_ZZI_:

   ctx->tszh = (insword>>22)&3;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->op = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SRSRA_Z_ZI_:
  case ENC_SSRA_Z_ZI_:
  case ENC_URSRA_Z_ZI_:
  case ENC_USRA_Z_ZI_:

   ctx->tszh = (insword>>22)&3;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->R = (insword>>11)&1;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_LSL_Z_ZI_:

   ctx->tszh = (insword>>22)&3;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->opc = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_ASR_Z_ZI_:
  case ENC_LSR_Z_ZI_:

   ctx->tszh = (insword>>22)&3;
   ctx->tszl = (insword>>19)&3;
   ctx->imm3 = (insword>>16)&7;
   ctx->U = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SMMLA_Z_ZZZ_:
  case ENC_UMMLA_Z_ZZZ_:
  case ENC_USMMLA_Z_ZZZ_:

   ctx->uns = (insword>>22)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FMUL_Z_ZZI_H:
  case ENC_MUL_Z_ZZI_H:

   ctx->i3h = (insword>>22)&1;
   ctx->i3l = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_SQDMULH_Z_ZZI_H:
  case ENC_SQRDMULH_Z_ZZI_H:

   ctx->i3h = (insword>>22)&1;
   ctx->i3l = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->R = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_MLA_Z_ZZZI_H:
  case ENC_MLS_Z_ZZZI_H:
  case ENC_SQRDMLAH_Z_ZZZI_H:
  case ENC_SQRDMLSH_Z_ZZZI_H:

   ctx->i3h = (insword>>22)&1;
   ctx->i3l = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->S = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_FMLA_Z_ZZZI_H:
  case ENC_FMLS_Z_ZZZI_H:

   ctx->i3h = (insword>>22)&1;
   ctx->i3l = (insword>>19)&3;
   ctx->Zm = (insword>>16)&7;
   ctx->op = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_ADCLB_Z_ZZZ_:
  case ENC_ADCLT_Z_ZZZ_:
  case ENC_SBCLB_Z_ZZZ_:
  case ENC_SBCLT_Z_ZZZ_:

   ctx->sz = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->T = (insword>>10)&1;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zda = insword&0x1f;
   break;
  case ENC_ADR_Z_AZ_SD_SAME_SCALED:

   ctx->sz = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->msz = (insword>>10)&3;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zd = insword&0x1f;
   break;
  case ENC_BLR_64_BRANCH_REG:
  case ENC_BLRAAZ_64_BRANCH_REG:
  case ENC_BLRAA_64P_BRANCH_REG:
  case ENC_BLRABZ_64_BRANCH_REG:
  case ENC_BLRAB_64P_BRANCH_REG:
  case ENC_BR_64_BRANCH_REG:
  case ENC_BRAAZ_64_BRANCH_REG:
  case ENC_BRAA_64P_BRANCH_REG:
  case ENC_BRABZ_64_BRANCH_REG:
  case ENC_BRAB_64P_BRANCH_REG:
  case ENC_RET_64R_BRANCH_REG:
  case ENC_RETAA_64E_BRANCH_REG:
  case ENC_RETAB_64E_BRANCH_REG:

   ctx->Z = (insword>>24)&1;
   ctx->opc = (insword>>23)&1;
   ctx->op = (insword>>21)&3;
   ctx->op2 = (insword>>16)&0x1f;
   ctx->op3 = (insword>>12)&15;
   ctx->A = (insword>>11)&1;
   ctx->M = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rm = insword&0x1f;
   break;
  case ENC_LD1B_Z_P_BR_U8:
  case ENC_LD1B_Z_P_BR_U16:
  case ENC_LD1B_Z_P_BR_U32:
  case ENC_LD1B_Z_P_BR_U64:
  case ENC_LD1D_Z_P_BR_U64:
  case ENC_LD1H_Z_P_BR_U16:
  case ENC_LD1H_Z_P_BR_U32:
  case ENC_LD1H_Z_P_BR_U64:
  case ENC_LD1SB_Z_P_BR_S16:
  case ENC_LD1SB_Z_P_BR_S32:
  case ENC_LD1SB_Z_P_BR_S64:
  case ENC_LD1SH_Z_P_BR_S32:
  case ENC_LD1SH_Z_P_BR_S64:
  case ENC_LD1SW_Z_P_BR_S64:
  case ENC_LD1W_Z_P_BR_U32:
  case ENC_LD1W_Z_P_BR_U64:
  case ENC_LDFF1B_Z_P_BR_U8:
  case ENC_LDFF1B_Z_P_BR_U16:
  case ENC_LDFF1B_Z_P_BR_U32:
  case ENC_LDFF1B_Z_P_BR_U64:
  case ENC_LDFF1D_Z_P_BR_U64:
  case ENC_LDFF1H_Z_P_BR_U16:
  case ENC_LDFF1H_Z_P_BR_U32:
  case ENC_LDFF1H_Z_P_BR_U64:
  case ENC_LDFF1SB_Z_P_BR_S16:
  case ENC_LDFF1SB_Z_P_BR_S32:
  case ENC_LDFF1SB_Z_P_BR_S64:
  case ENC_LDFF1SH_Z_P_BR_S32:
  case ENC_LDFF1SH_Z_P_BR_S64:
  case ENC_LDFF1SW_Z_P_BR_S64:
  case ENC_LDFF1W_Z_P_BR_U32:
  case ENC_LDFF1W_Z_P_BR_U64:

   ctx->dtype = (insword>>22)&7;
   ctx->dtype = (insword>>21)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1B_Z_P_BI_U8:
  case ENC_LD1B_Z_P_BI_U16:
  case ENC_LD1B_Z_P_BI_U32:
  case ENC_LD1B_Z_P_BI_U64:
  case ENC_LD1D_Z_P_BI_U64:
  case ENC_LD1H_Z_P_BI_U16:
  case ENC_LD1H_Z_P_BI_U32:
  case ENC_LD1H_Z_P_BI_U64:
  case ENC_LD1SB_Z_P_BI_S16:
  case ENC_LD1SB_Z_P_BI_S32:
  case ENC_LD1SB_Z_P_BI_S64:
  case ENC_LD1SH_Z_P_BI_S32:
  case ENC_LD1SH_Z_P_BI_S64:
  case ENC_LD1SW_Z_P_BI_S64:
  case ENC_LD1W_Z_P_BI_U32:
  case ENC_LD1W_Z_P_BI_U64:
  case ENC_LDNF1B_Z_P_BI_U8:
  case ENC_LDNF1B_Z_P_BI_U16:
  case ENC_LDNF1B_Z_P_BI_U32:
  case ENC_LDNF1B_Z_P_BI_U64:
  case ENC_LDNF1D_Z_P_BI_U64:
  case ENC_LDNF1H_Z_P_BI_U16:
  case ENC_LDNF1H_Z_P_BI_U32:
  case ENC_LDNF1H_Z_P_BI_U64:
  case ENC_LDNF1SB_Z_P_BI_S16:
  case ENC_LDNF1SB_Z_P_BI_S32:
  case ENC_LDNF1SB_Z_P_BI_S64:
  case ENC_LDNF1SH_Z_P_BI_S32:
  case ENC_LDNF1SH_Z_P_BI_S64:
  case ENC_LDNF1SW_Z_P_BI_S64:
  case ENC_LDNF1W_Z_P_BI_U32:
  case ENC_LDNF1W_Z_P_BI_U64:

   ctx->dtype = (insword>>22)&7;
   ctx->dtype = (insword>>21)&1;
   ctx->imm4 = (insword>>16)&15;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1RB_Z_P_BI_U8:
  case ENC_LD1RB_Z_P_BI_U16:
  case ENC_LD1RB_Z_P_BI_U32:
  case ENC_LD1RB_Z_P_BI_U64:
  case ENC_LD1RD_Z_P_BI_U64:
  case ENC_LD1RH_Z_P_BI_U16:
  case ENC_LD1RH_Z_P_BI_U32:
  case ENC_LD1RH_Z_P_BI_U64:
  case ENC_LD1RSB_Z_P_BI_S16:
  case ENC_LD1RSB_Z_P_BI_S32:
  case ENC_LD1RSB_Z_P_BI_S64:
  case ENC_LD1RSH_Z_P_BI_S32:
  case ENC_LD1RSH_Z_P_BI_S64:
  case ENC_LD1RSW_Z_P_BI_S64:
  case ENC_LD1RW_Z_P_BI_U32:
  case ENC_LD1RW_Z_P_BI_U64:

   ctx->dtypeh = (insword>>23)&3;
   ctx->imm6 = (insword>>16)&0x3f;
   ctx->dtypel = (insword>>13)&3;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD2B_Z_P_BR_CONTIGUOUS:
  case ENC_LD2D_Z_P_BR_CONTIGUOUS:
  case ENC_LD2H_Z_P_BR_CONTIGUOUS:
  case ENC_LD2W_Z_P_BR_CONTIGUOUS:
  case ENC_LD3B_Z_P_BR_CONTIGUOUS:
  case ENC_LD3D_Z_P_BR_CONTIGUOUS:
  case ENC_LD3H_Z_P_BR_CONTIGUOUS:
  case ENC_LD3W_Z_P_BR_CONTIGUOUS:
  case ENC_LD4B_Z_P_BR_CONTIGUOUS:
  case ENC_LD4D_Z_P_BR_CONTIGUOUS:
  case ENC_LD4H_Z_P_BR_CONTIGUOUS:
  case ENC_LD4W_Z_P_BR_CONTIGUOUS:
  case ENC_ST2B_Z_P_BR_CONTIGUOUS:
  case ENC_ST2D_Z_P_BR_CONTIGUOUS:
  case ENC_ST2H_Z_P_BR_CONTIGUOUS:
  case ENC_ST2W_Z_P_BR_CONTIGUOUS:
  case ENC_ST3B_Z_P_BR_CONTIGUOUS:
  case ENC_ST3D_Z_P_BR_CONTIGUOUS:
  case ENC_ST3H_Z_P_BR_CONTIGUOUS:
  case ENC_ST3W_Z_P_BR_CONTIGUOUS:
  case ENC_ST4B_Z_P_BR_CONTIGUOUS:
  case ENC_ST4D_Z_P_BR_CONTIGUOUS:
  case ENC_ST4H_Z_P_BR_CONTIGUOUS:
  case ENC_ST4W_Z_P_BR_CONTIGUOUS:

   ctx->msz = (insword>>23)&3;
   ctx->opc = (insword>>21)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD2B_Z_P_BI_CONTIGUOUS:
  case ENC_LD2D_Z_P_BI_CONTIGUOUS:
  case ENC_LD2H_Z_P_BI_CONTIGUOUS:
  case ENC_LD2W_Z_P_BI_CONTIGUOUS:
  case ENC_LD3B_Z_P_BI_CONTIGUOUS:
  case ENC_LD3D_Z_P_BI_CONTIGUOUS:
  case ENC_LD3H_Z_P_BI_CONTIGUOUS:
  case ENC_LD3W_Z_P_BI_CONTIGUOUS:
  case ENC_LD4B_Z_P_BI_CONTIGUOUS:
  case ENC_LD4D_Z_P_BI_CONTIGUOUS:
  case ENC_LD4H_Z_P_BI_CONTIGUOUS:
  case ENC_LD4W_Z_P_BI_CONTIGUOUS:
  case ENC_ST2B_Z_P_BI_CONTIGUOUS:
  case ENC_ST2D_Z_P_BI_CONTIGUOUS:
  case ENC_ST2H_Z_P_BI_CONTIGUOUS:
  case ENC_ST2W_Z_P_BI_CONTIGUOUS:
  case ENC_ST3B_Z_P_BI_CONTIGUOUS:
  case ENC_ST3D_Z_P_BI_CONTIGUOUS:
  case ENC_ST3H_Z_P_BI_CONTIGUOUS:
  case ENC_ST3W_Z_P_BI_CONTIGUOUS:
  case ENC_ST4B_Z_P_BI_CONTIGUOUS:
  case ENC_ST4D_Z_P_BI_CONTIGUOUS:
  case ENC_ST4H_Z_P_BI_CONTIGUOUS:
  case ENC_ST4W_Z_P_BI_CONTIGUOUS:

   ctx->msz = (insword>>23)&3;
   ctx->opc = (insword>>21)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_ST1B_Z_P_BI_:
  case ENC_ST1D_Z_P_BI_:
  case ENC_ST1H_Z_P_BI_:
  case ENC_ST1W_Z_P_BI_:

   ctx->msz = (insword>>23)&3;
   ctx->size = (insword>>21)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1ROB_Z_P_BR_CONTIGUOUS:
  case ENC_LD1ROD_Z_P_BR_CONTIGUOUS:
  case ENC_LD1ROH_Z_P_BR_CONTIGUOUS:
  case ENC_LD1ROW_Z_P_BR_CONTIGUOUS:
  case ENC_LD1RQB_Z_P_BR_CONTIGUOUS:
  case ENC_LD1RQD_Z_P_BR_CONTIGUOUS:
  case ENC_LD1RQH_Z_P_BR_CONTIGUOUS:
  case ENC_LD1RQW_Z_P_BR_CONTIGUOUS:

   ctx->msz = (insword>>23)&3;
   ctx->ssz = (insword>>21)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1ROB_Z_P_BI_U8:
  case ENC_LD1ROD_Z_P_BI_U64:
  case ENC_LD1ROH_Z_P_BI_U16:
  case ENC_LD1ROW_Z_P_BI_U32:
  case ENC_LD1RQB_Z_P_BI_U8:
  case ENC_LD1RQD_Z_P_BI_U64:
  case ENC_LD1RQH_Z_P_BI_U16:
  case ENC_LD1RQW_Z_P_BI_U32:

   ctx->msz = (insword>>23)&3;
   ctx->ssz = (insword>>21)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1B_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LD1D_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LD1H_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LD1SB_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LD1SH_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LD1SW_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LD1W_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1B_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1D_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1H_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1SB_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1SH_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1SW_Z_P_BZ_D_X32_UNSCALED:
  case ENC_LDFF1W_Z_P_BZ_D_X32_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->xs = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->ff = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LDNT1B_Z_P_BI_CONTIGUOUS:
  case ENC_LDNT1D_Z_P_BI_CONTIGUOUS:
  case ENC_LDNT1H_Z_P_BI_CONTIGUOUS:
  case ENC_LDNT1W_Z_P_BI_CONTIGUOUS:
  case ENC_STNT1B_Z_P_BI_CONTIGUOUS:
  case ENC_STNT1D_Z_P_BI_CONTIGUOUS:
  case ENC_STNT1H_Z_P_BI_CONTIGUOUS:
  case ENC_STNT1W_Z_P_BI_CONTIGUOUS:

   ctx->msz = (insword>>23)&3;
   ctx->imm4 = (insword>>16)&15;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LDNT1B_Z_P_BR_CONTIGUOUS:
  case ENC_LDNT1D_Z_P_BR_CONTIGUOUS:
  case ENC_LDNT1H_Z_P_BR_CONTIGUOUS:
  case ENC_LDNT1W_Z_P_BR_CONTIGUOUS:
  case ENC_STNT1B_Z_P_BR_CONTIGUOUS:
  case ENC_STNT1D_Z_P_BR_CONTIGUOUS:
  case ENC_STNT1H_Z_P_BR_CONTIGUOUS:
  case ENC_STNT1W_Z_P_BR_CONTIGUOUS:

   ctx->msz = (insword>>23)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_PRFB_I_P_BR_S:
  case ENC_PRFD_I_P_BR_S:
  case ENC_PRFH_I_P_BR_S:
  case ENC_PRFW_I_P_BR_S:

   ctx->msz = (insword>>23)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->prfop = insword&15;
   break;
  case ENC_STNT1B_Z_P_AR_S_X32_UNSCALED:
  case ENC_STNT1B_Z_P_AR_D_64_UNSCALED:
  case ENC_STNT1D_Z_P_AR_D_64_UNSCALED:
  case ENC_STNT1H_Z_P_AR_S_X32_UNSCALED:
  case ENC_STNT1H_Z_P_AR_D_64_UNSCALED:
  case ENC_STNT1W_Z_P_AR_S_X32_UNSCALED:
  case ENC_STNT1W_Z_P_AR_D_64_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LDNT1B_Z_P_AR_S_X32_UNSCALED:
  case ENC_LDNT1H_Z_P_AR_S_X32_UNSCALED:
  case ENC_LDNT1SB_Z_P_AR_S_X32_UNSCALED:
  case ENC_LDNT1SH_Z_P_AR_S_X32_UNSCALED:
  case ENC_LDNT1W_Z_P_AR_S_X32_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->U = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LDNT1B_Z_P_AR_D_64_UNSCALED:
  case ENC_LDNT1D_Z_P_AR_D_64_UNSCALED:
  case ENC_LDNT1H_Z_P_AR_D_64_UNSCALED:
  case ENC_LDNT1SB_Z_P_AR_D_64_UNSCALED:
  case ENC_LDNT1SH_Z_P_AR_D_64_UNSCALED:
  case ENC_LDNT1SW_Z_P_AR_D_64_UNSCALED:
  case ENC_LDNT1W_Z_P_AR_D_64_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_ST1B_Z_P_BZ_D_64_UNSCALED:
  case ENC_ST1D_Z_P_BZ_D_64_SCALED:
  case ENC_ST1D_Z_P_BZ_D_64_UNSCALED:
  case ENC_ST1H_Z_P_BZ_D_64_SCALED:
  case ENC_ST1H_Z_P_BZ_D_64_UNSCALED:
  case ENC_ST1W_Z_P_BZ_D_64_SCALED:
  case ENC_ST1W_Z_P_BZ_D_64_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1B_Z_P_BZ_D_64_UNSCALED:
  case ENC_LD1D_Z_P_BZ_D_64_UNSCALED:
  case ENC_LD1H_Z_P_BZ_D_64_UNSCALED:
  case ENC_LD1SB_Z_P_BZ_D_64_UNSCALED:
  case ENC_LD1SH_Z_P_BZ_D_64_UNSCALED:
  case ENC_LD1SW_Z_P_BZ_D_64_UNSCALED:
  case ENC_LD1W_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1B_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1D_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1H_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1SB_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1SH_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1SW_Z_P_BZ_D_64_UNSCALED:
  case ENC_LDFF1W_Z_P_BZ_D_64_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->ff = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_ST1B_Z_P_BZ_D_X32_UNSCALED:
  case ENC_ST1B_Z_P_BZ_S_X32_UNSCALED:
  case ENC_ST1D_Z_P_BZ_D_X32_SCALED:
  case ENC_ST1D_Z_P_BZ_D_X32_UNSCALED:
  case ENC_ST1H_Z_P_BZ_S_X32_SCALED:
  case ENC_ST1H_Z_P_BZ_D_X32_SCALED:
  case ENC_ST1H_Z_P_BZ_D_X32_UNSCALED:
  case ENC_ST1H_Z_P_BZ_S_X32_UNSCALED:
  case ENC_ST1W_Z_P_BZ_S_X32_SCALED:
  case ENC_ST1W_Z_P_BZ_D_X32_SCALED:
  case ENC_ST1W_Z_P_BZ_D_X32_UNSCALED:
  case ENC_ST1W_Z_P_BZ_S_X32_UNSCALED:

   ctx->msz = (insword>>23)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->xs = (insword>>14)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_ST1B_Z_P_AI_S:
  case ENC_ST1B_Z_P_AI_D:
  case ENC_ST1D_Z_P_AI_D:
  case ENC_ST1H_Z_P_AI_S:
  case ENC_ST1H_Z_P_AI_D:
  case ENC_ST1W_Z_P_AI_S:
  case ENC_ST1W_Z_P_AI_D:

   ctx->msz = (insword>>23)&3;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_PRFB_I_P_AI_S:
  case ENC_PRFB_I_P_AI_D:
  case ENC_PRFD_I_P_AI_S:
  case ENC_PRFD_I_P_AI_D:
  case ENC_PRFH_I_P_AI_S:
  case ENC_PRFH_I_P_AI_D:
  case ENC_PRFW_I_P_AI_S:
  case ENC_PRFW_I_P_AI_D:

   ctx->msz = (insword>>23)&3;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->prfop = insword&15;
   break;
  case ENC_LD1B_Z_P_AI_S:
  case ENC_LD1B_Z_P_AI_D:
  case ENC_LD1D_Z_P_AI_D:
  case ENC_LD1H_Z_P_AI_S:
  case ENC_LD1H_Z_P_AI_D:
  case ENC_LD1SB_Z_P_AI_S:
  case ENC_LD1SB_Z_P_AI_D:
  case ENC_LD1SH_Z_P_AI_S:
  case ENC_LD1SH_Z_P_AI_D:
  case ENC_LD1SW_Z_P_AI_D:
  case ENC_LD1W_Z_P_AI_S:
  case ENC_LD1W_Z_P_AI_D:
  case ENC_LDFF1B_Z_P_AI_S:
  case ENC_LDFF1B_Z_P_AI_D:
  case ENC_LDFF1D_Z_P_AI_D:
  case ENC_LDFF1H_Z_P_AI_S:
  case ENC_LDFF1H_Z_P_AI_D:
  case ENC_LDFF1SB_Z_P_AI_S:
  case ENC_LDFF1SB_Z_P_AI_D:
  case ENC_LDFF1SH_Z_P_AI_S:
  case ENC_LDFF1SH_Z_P_AI_D:
  case ENC_LDFF1SW_Z_P_AI_D:
  case ENC_LDFF1W_Z_P_AI_S:
  case ENC_LDFF1W_Z_P_AI_D:

   ctx->msz = (insword>>23)&3;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->ff = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Zn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_B_ONLY_CONDBRANCH:

   ctx->o1 = (insword>>24)&1;
   ctx->imm19 = (insword>>5)&0x7ffff;
   ctx->o0 = (insword>>4)&1;
   ctx->cond = insword&15;
   break;
  case ENC_ST1D_Z_P_BR_:

   ctx->opc = (insword>>23)&3;
   ctx->opc = (insword>>22)&1;
   ctx->o2 = (insword>>21)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_DRPS_64E_BRANCH_REG:

   ctx->opc = (insword>>21)&15;
   ctx->op2 = (insword>>16)&0x1f;
   ctx->op3 = (insword>>10)&0x3f;
   ctx->Rt = (insword>>5)&0x1f;
   ctx->op4 = insword&0x1f;
   break;
  case ENC_LD1B_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LD1D_Z_P_BZ_D_X32_SCALED:
  case ENC_LD1H_Z_P_BZ_D_X32_SCALED:
  case ENC_LD1H_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LD1SB_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LD1SH_Z_P_BZ_D_X32_SCALED:
  case ENC_LD1SH_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LD1SW_Z_P_BZ_D_X32_SCALED:
  case ENC_LD1W_Z_P_BZ_D_X32_SCALED:
  case ENC_LD1W_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LDFF1B_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LDFF1D_Z_P_BZ_D_X32_SCALED:
  case ENC_LDFF1H_Z_P_BZ_D_X32_SCALED:
  case ENC_LDFF1H_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LDFF1SB_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LDFF1SH_Z_P_BZ_D_X32_SCALED:
  case ENC_LDFF1SH_Z_P_BZ_S_X32_UNSCALED:
  case ENC_LDFF1SW_Z_P_BZ_D_X32_SCALED:
  case ENC_LDFF1W_Z_P_BZ_D_X32_SCALED:
  case ENC_LDFF1W_Z_P_BZ_S_X32_UNSCALED:

   ctx->opc = (insword>>23)&3;
   ctx->xs = (insword>>22)&1;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->ff = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_LD1D_Z_P_BZ_D_64_SCALED:
  case ENC_LD1H_Z_P_BZ_D_64_SCALED:
  case ENC_LD1SH_Z_P_BZ_D_64_SCALED:
  case ENC_LD1SW_Z_P_BZ_D_64_SCALED:
  case ENC_LD1W_Z_P_BZ_D_64_SCALED:
  case ENC_LDFF1D_Z_P_BZ_D_64_SCALED:
  case ENC_LDFF1H_Z_P_BZ_D_64_SCALED:
  case ENC_LDFF1SH_Z_P_BZ_D_64_SCALED:
  case ENC_LDFF1SW_Z_P_BZ_D_64_SCALED:
  case ENC_LDFF1W_Z_P_BZ_D_64_SCALED:

   ctx->opc = (insword>>23)&3;
   ctx->Zm = (insword>>16)&0x1f;
   ctx->U = (insword>>14)&1;
   ctx->ff = (insword>>13)&1;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_ERET_64E_BRANCH_REG:
  case ENC_ERETAA_64E_BRANCH_REG:
  case ENC_ERETAB_64E_BRANCH_REG:

   ctx->opc = (insword>>24)&1;
   ctx->opc = (insword>>21)&7;
   ctx->op2 = (insword>>16)&0x1f;
   ctx->op3 = (insword>>12)&15;
   ctx->A = (insword>>11)&1;
   ctx->M = (insword>>10)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->op4 = insword&0x1f;
   break;
  case ENC_ST1B_Z_P_BR_:
  case ENC_ST1H_Z_P_BR_:
  case ENC_ST1W_Z_P_BR_:

   ctx->size = (insword>>21)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Pg = (insword>>10)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Zt = insword&0x1f;
   break;
  case ENC_FCVTZS_ASISDSHF_C:
  case ENC_FCVTZU_ASISDSHF_C:
  case ENC_SCVTF_ASISDSHF_C:
  case ENC_SHL_ASISDSHF_R:
  case ENC_SLI_ASISDSHF_R:
  case ENC_SRI_ASISDSHF_R:
  case ENC_UCVTF_ASISDSHF_C:

   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRSHRN_ASISDSHF_N:
  case ENC_SQRSHRUN_ASISDSHF_N:
  case ENC_SQSHRN_ASISDSHF_N:
  case ENC_SQSHRUN_ASISDSHF_N:
  case ENC_UQRSHRN_ASISDSHF_N:
  case ENC_UQSHRN_ASISDSHF_N:

   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->op = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQSHLU_ASISDSHF_R:
  case ENC_SQSHL_ASISDSHF_R:
  case ENC_UQSHL_ASISDSHF_R:

   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SRSHR_ASISDSHF_R:
  case ENC_SRSRA_ASISDSHF_R:
  case ENC_SSHR_ASISDSHF_R:
  case ENC_SSRA_ASISDSHF_R:
  case ENC_URSHR_ASISDSHF_R:
  case ENC_URSRA_ASISDSHF_R:
  case ENC_USHR_ASISDSHF_R:
  case ENC_USRA_ASISDSHF_R:

   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->o1 = (insword>>13)&1;
   ctx->o0 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FACGE_ASISDSAME_ONLY:
  case ENC_FACGT_ASISDSAME_ONLY:
  case ENC_FCMEQ_ASISDSAME_ONLY:
  case ENC_FCMGE_ASISDSAME_ONLY:
  case ENC_FCMGT_ASISDSAME_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->E = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->ac = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FACGE_ASISDSAMEFP16_ONLY:
  case ENC_FACGT_ASISDSAMEFP16_ONLY:
  case ENC_FCMEQ_ASISDSAMEFP16_ONLY:
  case ENC_FCMGE_ASISDSAMEFP16_ONLY:
  case ENC_FCMGT_ASISDSAMEFP16_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->E = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->ac = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMLT_ASISDMISCFP16_FZ:
  case ENC_FRECPX_ASISDMISCFP16_R:
  case ENC_FRSQRTE_ASISDMISCFP16_R:
  case ENC_SCVTF_ASISDMISCFP16_R:
  case ENC_UCVTF_ASISDMISCFP16_R:

   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMEQ_ASISDMISCFP16_FZ:
  case ENC_FCMGE_ASISDMISCFP16_FZ:
  case ENC_FCMGT_ASISDMISCFP16_FZ:
  case ENC_FCMLE_ASISDMISCFP16_FZ:

   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABD_ASISDSAMEFP16_ONLY:
  case ENC_FMULX_ASISDSAMEFP16_ONLY:
  case ENC_FRECPS_ASISDSAMEFP16_ONLY:
  case ENC_FRSQRTS_ASISDSAMEFP16_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXNMP_ASISDPAIR_ONLY_H:
  case ENC_FMAXNMP_ASISDPAIR_ONLY_SD:
  case ENC_FMAXP_ASISDPAIR_ONLY_H:
  case ENC_FMAXP_ASISDPAIR_ONLY_SD:
  case ENC_FMINNMP_ASISDPAIR_ONLY_H:
  case ENC_FMINNMP_ASISDPAIR_ONLY_SD:
  case ENC_FMINP_ASISDPAIR_ONLY_H:
  case ENC_FMINP_ASISDPAIR_ONLY_SD:

   ctx->U = (insword>>29)&1;
   ctx->o1 = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTMS_ASISDMISC_R:
  case ENC_FCVTMU_ASISDMISC_R:
  case ENC_FCVTNS_ASISDMISC_R:
  case ENC_FCVTNU_ASISDMISC_R:
  case ENC_FCVTPS_ASISDMISC_R:
  case ENC_FCVTPU_ASISDMISC_R:
  case ENC_FCVTZS_ASISDMISC_R:
  case ENC_FCVTZU_ASISDMISC_R:

   ctx->U = (insword>>29)&1;
   ctx->o2 = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->o1 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTMS_ASISDMISCFP16_R:
  case ENC_FCVTMU_ASISDMISCFP16_R:
  case ENC_FCVTNS_ASISDMISCFP16_R:
  case ENC_FCVTNU_ASISDMISCFP16_R:
  case ENC_FCVTPS_ASISDMISCFP16_R:
  case ENC_FCVTPU_ASISDMISCFP16_R:
  case ENC_FCVTZS_ASISDMISCFP16_R:
  case ENC_FCVTZU_ASISDMISCFP16_R:

   ctx->U = (insword>>29)&1;
   ctx->o2 = (insword>>23)&1;
   ctx->o1 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTAS_ASISDMISCFP16_R:
  case ENC_FCVTAU_ASISDMISCFP16_R:
  case ENC_FRECPE_ASISDMISCFP16_R:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>23)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMULX_ASISDELEM_RH_H:
  case ENC_FMUL_ASISDELEM_RH_H:
  case ENC_SQDMULL_ASISDELEM_L:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>12)&15;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQDMULH_ASISDELEM_R:
  case ENC_SQRDMULH_ASISDELEM_R:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->op = (insword>>12)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRDMLAH_ASISDELEM_R:
  case ENC_SQRDMLSH_ASISDELEM_R:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->S = (insword>>13)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLA_ASISDELEM_RH_H:
  case ENC_FMLS_ASISDELEM_RH_H:
  case ENC_SQDMLAL_ASISDELEM_L:
  case ENC_SQDMLSL_ASISDELEM_L:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->o2 = (insword>>14)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ABS_ASISDMISC_R:
  case ENC_ADDP_ASISDPAIR_ONLY:
  case ENC_CMLT_ASISDMISC_Z:
  case ENC_NEG_ASISDMISC_R:
  case ENC_SQABS_ASISDMISC_R:
  case ENC_SQNEG_ASISDMISC_R:
  case ENC_SQXTN_ASISDMISC_N:
  case ENC_SQXTUN_ASISDMISC_N:
  case ENC_SUQADD_ASISDMISC_R:
  case ENC_UQXTN_ASISDMISC_N:
  case ENC_USQADD_ASISDMISC_R:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CMEQ_ASISDMISC_Z:
  case ENC_CMGE_ASISDMISC_Z:
  case ENC_CMGT_ASISDMISC_Z:
  case ENC_CMLE_ASISDMISC_Z:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ADD_ASISDSAME_ONLY:
  case ENC_CMEQ_ASISDSAME_ONLY:
  case ENC_CMTST_ASISDSAME_ONLY:
  case ENC_SQADD_ASISDSAME_ONLY:
  case ENC_SQDMULH_ASISDSAME_ONLY:
  case ENC_SQRDMULH_ASISDSAME_ONLY:
  case ENC_SQSUB_ASISDSAME_ONLY:
  case ENC_SUB_ASISDSAME_ONLY:
  case ENC_UQADD_ASISDSAME_ONLY:
  case ENC_UQSUB_ASISDSAME_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQDMULL_ASISDDIFF_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CMGE_ASISDSAME_ONLY:
  case ENC_CMGT_ASISDSAME_ONLY:
  case ENC_CMHI_ASISDSAME_ONLY:
  case ENC_CMHS_ASISDSAME_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->eq = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRSHL_ASISDSAME_ONLY:
  case ENC_SQSHL_ASISDSAME_ONLY:
  case ENC_SRSHL_ASISDSAME_ONLY:
  case ENC_SSHL_ASISDSAME_ONLY:
  case ENC_UQRSHL_ASISDSAME_ONLY:
  case ENC_UQSHL_ASISDSAME_ONLY:
  case ENC_URSHL_ASISDSAME_ONLY:
  case ENC_USHL_ASISDSAME_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->R = (insword>>12)&1;
   ctx->S = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQDMLAL_ASISDDIFF_ONLY:
  case ENC_SQDMLSL_ASISDDIFF_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->o1 = (insword>>13)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRDMLAH_ASISDSAME2_ONLY:
  case ENC_SQRDMLSH_ASISDSAME2_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->S = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMULX_ASISDELEM_R_SD:
  case ENC_FMUL_ASISDELEM_R_SD:

   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>12)&15;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLA_ASISDELEM_R_SD:
  case ENC_FMLS_ASISDELEM_R_SD:

   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->o2 = (insword>>14)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FADDP_ASISDPAIR_ONLY_H:
  case ENC_FADDP_ASISDPAIR_ONLY_SD:
  case ENC_FCMLT_ASISDMISC_FZ:
  case ENC_FCVTAS_ASISDMISC_R:
  case ENC_FCVTAU_ASISDMISC_R:
  case ENC_FCVTXN_ASISDMISC_N:
  case ENC_FRECPE_ASISDMISC_R:
  case ENC_FRECPX_ASISDMISC_R:
  case ENC_FRSQRTE_ASISDMISC_R:
  case ENC_SCVTF_ASISDMISC_R:
  case ENC_UCVTF_ASISDMISC_R:

   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMEQ_ASISDMISC_FZ:
  case ENC_FCMGE_ASISDMISC_FZ:
  case ENC_FCMGT_ASISDMISC_FZ:
  case ENC_FCMLE_ASISDMISC_FZ:

   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABD_ASISDSAME_ONLY:
  case ENC_FMULX_ASISDSAME_ONLY:
  case ENC_FRECPS_ASISDSAME_ONLY:
  case ENC_FRSQRTS_ASISDSAME_ONLY:

   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_DUP_ASISDONE_ONLY:
  case ENC_MOV_DUP_ASISDONE_ONLY:

   ctx->op = (insword>>29)&1;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->imm4 = (insword>>11)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_PTEST_P_P_:

   ctx->op = (insword>>23)&1;
   ctx->S = (insword>>22)&1;
   ctx->Pg = (insword>>10)&15;
   ctx->Pn = (insword>>5)&15;
   ctx->opc2 = insword&15;
   break;
  case ENC_CTERMEQ_RR_:
  case ENC_CTERMNE_RR_:

   ctx->op = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->ne = (insword>>4)&1;
   break;
  case ENC_SETFFR_F_:

   ctx->opc = (insword>>22)&3;
   break;
  case ENC_WRFFR_F_P_:

   ctx->opc = (insword>>22)&3;
   ctx->Pn = (insword>>5)&15;
   break;
  case ENC_FCVTZS_ASIMDSHF_C:
  case ENC_FCVTZU_ASIMDSHF_C:
  case ENC_SCVTF_ASIMDSHF_C:
  case ENC_SHL_ASIMDSHF_R:
  case ENC_SLI_ASIMDSHF_R:
  case ENC_SRI_ASIMDSHF_R:
  case ENC_SSHLL_ASIMDSHF_L:
  case ENC_SXTL_SSHLL_ASIMDSHF_L:
  case ENC_UCVTF_ASIMDSHF_C:
  case ENC_USHLL_ASIMDSHF_L:
  case ENC_UXTL_USHLL_ASIMDSHF_L:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_RSHRN_ASIMDSHF_N:
  case ENC_SHRN_ASIMDSHF_N:
  case ENC_SQRSHRN_ASIMDSHF_N:
  case ENC_SQRSHRUN_ASIMDSHF_N:
  case ENC_SQSHRN_ASIMDSHF_N:
  case ENC_SQSHRUN_ASIMDSHF_N:
  case ENC_UQRSHRN_ASIMDSHF_N:
  case ENC_UQSHRN_ASIMDSHF_N:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->op = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQSHLU_ASIMDSHF_R:
  case ENC_SQSHL_ASIMDSHF_R:
  case ENC_UQSHL_ASIMDSHF_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SRSHR_ASIMDSHF_R:
  case ENC_SRSRA_ASIMDSHF_R:
  case ENC_SSHR_ASIMDSHF_R:
  case ENC_SSRA_ASIMDSHF_R:
  case ENC_URSHR_ASIMDSHF_R:
  case ENC_URSRA_ASIMDSHF_R:
  case ENC_USHR_ASIMDSHF_R:
  case ENC_USRA_ASIMDSHF_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->immh = (insword>>19)&15;
   ctx->immb = (insword>>16)&7;
   ctx->o1 = (insword>>13)&1;
   ctx->o0 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FACGE_ASIMDSAME_ONLY:
  case ENC_FACGT_ASIMDSAME_ONLY:
  case ENC_FCMEQ_ASIMDSAME_ONLY:
  case ENC_FCMGE_ASIMDSAME_ONLY:
  case ENC_FCMGT_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->E = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->ac = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FACGE_ASIMDSAMEFP16_ONLY:
  case ENC_FACGT_ASIMDSAMEFP16_ONLY:
  case ENC_FCMEQ_ASIMDSAMEFP16_ONLY:
  case ENC_FCMGE_ASIMDSAMEFP16_ONLY:
  case ENC_FCMGT_ASIMDSAMEFP16_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->E = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->ac = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLAL_ASIMDSAME_F:
  case ENC_FMLAL2_ASIMDSAME_F:
  case ENC_FMLSL_ASIMDSAME_F:
  case ENC_FMLSL2_ASIMDSAME_F:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->S = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>15)&1;
   ctx->opcode = (insword>>11)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SUDOT_ASIMDELEM_D:
  case ENC_USDOT_ASIMDELEM_D:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->US = (insword>>23)&1;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>12)&15;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABS_ASIMDMISCFP16_R:
  case ENC_FCMLT_ASIMDMISCFP16_FZ:
  case ENC_FCVTAS_ASIMDMISCFP16_R:
  case ENC_FCVTAU_ASIMDMISCFP16_R:
  case ENC_FNEG_ASIMDMISCFP16_R:
  case ENC_FRECPE_ASIMDMISCFP16_R:
  case ENC_FRSQRTE_ASIMDMISCFP16_R:
  case ENC_FSQRT_ASIMDMISCFP16_R:
  case ENC_SCVTF_ASIMDMISCFP16_R:
  case ENC_UCVTF_ASIMDMISCFP16_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMEQ_ASIMDMISCFP16_FZ:
  case ENC_FCMGE_ASIMDMISCFP16_FZ:
  case ENC_FCMGT_ASIMDMISCFP16_FZ:
  case ENC_FCMLE_ASIMDMISCFP16_FZ:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXNMP_ASIMDSAMEFP16_ONLY:
  case ENC_FMAXNM_ASIMDSAMEFP16_ONLY:
  case ENC_FMINNMP_ASIMDSAMEFP16_ONLY:
  case ENC_FMINNM_ASIMDSAMEFP16_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->Op3 = (insword>>11)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABD_ASIMDSAMEFP16_ONLY:
  case ENC_FADDP_ASIMDSAMEFP16_ONLY:
  case ENC_FADD_ASIMDSAMEFP16_ONLY:
  case ENC_FDIV_ASIMDSAMEFP16_ONLY:
  case ENC_FMLA_ASIMDSAMEFP16_ONLY:
  case ENC_FMLS_ASIMDSAMEFP16_ONLY:
  case ENC_FMULX_ASIMDSAMEFP16_ONLY:
  case ENC_FMUL_ASIMDSAMEFP16_ONLY:
  case ENC_FRECPS_ASIMDSAMEFP16_ONLY:
  case ENC_FRSQRTS_ASIMDSAMEFP16_ONLY:
  case ENC_FSUB_ASIMDSAMEFP16_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->a = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXNMV_ASIMDALL_ONLY_SD:
  case ENC_FMAXV_ASIMDALL_ONLY_SD:
  case ENC_FMINNMV_ASIMDALL_ONLY_SD:
  case ENC_FMINV_ASIMDALL_ONLY_SD:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->o1 = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXNMP_ASIMDSAME_ONLY:
  case ENC_FMAXNM_ASIMDSAME_ONLY:
  case ENC_FMAXP_ASIMDSAME_ONLY:
  case ENC_FMAX_ASIMDSAME_ONLY:
  case ENC_FMINNMP_ASIMDSAME_ONLY:
  case ENC_FMINNM_ASIMDSAME_ONLY:
  case ENC_FMINP_ASIMDSAME_ONLY:
  case ENC_FMIN_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->o1 = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXP_ASIMDSAMEFP16_ONLY:
  case ENC_FMAX_ASIMDSAMEFP16_ONLY:
  case ENC_FMINP_ASIMDSAMEFP16_ONLY:
  case ENC_FMIN_ASIMDSAMEFP16_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->o1 = (insword>>23)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&7;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMAXNMV_ASIMDALL_ONLY_H:
  case ENC_FMAXV_ASIMDALL_ONLY_H:
  case ENC_FMINNMV_ASIMDALL_ONLY_H:
  case ENC_FMINV_ASIMDALL_ONLY_H:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->o1 = (insword>>23)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTMS_ASIMDMISC_R:
  case ENC_FCVTMU_ASIMDMISC_R:
  case ENC_FCVTNS_ASIMDMISC_R:
  case ENC_FCVTNU_ASIMDMISC_R:
  case ENC_FCVTPS_ASIMDMISC_R:
  case ENC_FCVTPU_ASIMDMISC_R:
  case ENC_FCVTZS_ASIMDMISC_R:
  case ENC_FCVTZU_ASIMDMISC_R:
  case ENC_FRINTA_ASIMDMISC_R:
  case ENC_FRINTI_ASIMDMISC_R:
  case ENC_FRINTM_ASIMDMISC_R:
  case ENC_FRINTN_ASIMDMISC_R:
  case ENC_FRINTP_ASIMDMISC_R:
  case ENC_FRINTX_ASIMDMISC_R:
  case ENC_FRINTZ_ASIMDMISC_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->o2 = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->o1 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCVTMS_ASIMDMISCFP16_R:
  case ENC_FCVTMU_ASIMDMISCFP16_R:
  case ENC_FCVTNS_ASIMDMISCFP16_R:
  case ENC_FCVTNU_ASIMDMISCFP16_R:
  case ENC_FCVTPS_ASIMDMISCFP16_R:
  case ENC_FCVTPU_ASIMDMISCFP16_R:
  case ENC_FCVTZS_ASIMDMISCFP16_R:
  case ENC_FCVTZU_ASIMDMISCFP16_R:
  case ENC_FRINTA_ASIMDMISCFP16_R:
  case ENC_FRINTI_ASIMDMISCFP16_R:
  case ENC_FRINTM_ASIMDMISCFP16_R:
  case ENC_FRINTN_ASIMDMISCFP16_R:
  case ENC_FRINTP_ASIMDMISCFP16_R:
  case ENC_FRINTX_ASIMDMISCFP16_R:
  case ENC_FRINTZ_ASIMDMISCFP16_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->o2 = (insword>>23)&1;
   ctx->o1 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLA_ASIMDSAME_ONLY:
  case ENC_FMLS_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->op = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BIF_ASIMDSAME_ONLY:
  case ENC_BIT_ASIMDSAME_ONLY:
  case ENC_BSL_ASIMDSAME_ONLY:
  case ENC_EOR_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->opc2 = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BFMLAL_ASIMDELEM_F:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>15)&1;
   ctx->opcode = (insword>>14)&1;
   ctx->opcode = (insword>>12)&3;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BFDOT_ASIMDELEM_E:
  case ENC_FMULX_ASIMDELEM_RH_H:
  case ENC_FMUL_ASIMDELEM_RH_H:
  case ENC_MUL_ASIMDELEM_R:
  case ENC_SDOT_ASIMDELEM_D:
  case ENC_SMULL_ASIMDELEM_L:
  case ENC_SQDMULL_ASIMDELEM_L:
  case ENC_UDOT_ASIMDELEM_D:
  case ENC_UMULL_ASIMDELEM_L:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>12)&15;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQDMULH_ASIMDELEM_R:
  case ENC_SQRDMULH_ASIMDELEM_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->op = (insword>>12)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRDMLAH_ASIMDELEM_R:
  case ENC_SQRDMLSH_ASIMDELEM_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->S = (insword>>13)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLA_ASIMDELEM_RH_H:
  case ENC_FMLS_ASIMDELEM_RH_H:
  case ENC_MLA_ASIMDELEM_R:
  case ENC_MLS_ASIMDELEM_R:
  case ENC_SMLAL_ASIMDELEM_L:
  case ENC_SMLSL_ASIMDELEM_L:
  case ENC_SQDMLAL_ASIMDELEM_L:
  case ENC_SQDMLSL_ASIMDELEM_L:
  case ENC_UMLAL_ASIMDELEM_L:
  case ENC_UMLSL_ASIMDELEM_L:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->o2 = (insword>>14)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMLA_ASIMDELEM_C_H:
  case ENC_FCMLA_ASIMDELEM_C_S:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->rot = (insword>>13)&3;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SMAXV_ASIMDALL_ONLY:
  case ENC_SMINV_ASIMDALL_ONLY:
  case ENC_UMAXV_ASIMDALL_ONLY:
  case ENC_UMINV_ASIMDALL_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>16)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ABS_ASIMDMISC_R:
  case ENC_ADDV_ASIMDALL_ONLY:
  case ENC_BFCVTN_ASIMDMISC_4S:
  case ENC_CLS_ASIMDMISC_R:
  case ENC_CLZ_ASIMDMISC_R:
  case ENC_CMLT_ASIMDMISC_Z:
  case ENC_CNT_ASIMDMISC_R:
  case ENC_MVN_NOT_ASIMDMISC_R:
  case ENC_NEG_ASIMDMISC_R:
  case ENC_NOT_ASIMDMISC_R:
  case ENC_RBIT_ASIMDMISC_R:
  case ENC_SADDLV_ASIMDALL_ONLY:
  case ENC_SHLL_ASIMDMISC_S:
  case ENC_SQABS_ASIMDMISC_R:
  case ENC_SQNEG_ASIMDMISC_R:
  case ENC_SQXTN_ASIMDMISC_N:
  case ENC_SQXTUN_ASIMDMISC_N:
  case ENC_SUQADD_ASIMDMISC_R:
  case ENC_UADDLV_ASIMDALL_ONLY:
  case ENC_UQXTN_ASIMDMISC_N:
  case ENC_USQADD_ASIMDMISC_R:
  case ENC_XTN_ASIMDMISC_N:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_REV16_ASIMDMISC_R:
  case ENC_REV32_ASIMDMISC_R:
  case ENC_REV64_ASIMDMISC_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->o0 = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CMEQ_ASIMDMISC_Z:
  case ENC_CMGE_ASIMDMISC_Z:
  case ENC_CMGT_ASIMDMISC_Z:
  case ENC_CMLE_ASIMDMISC_Z:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SADALP_ASIMDMISC_P:
  case ENC_SADDLP_ASIMDMISC_P:
  case ENC_UADALP_ASIMDMISC_P:
  case ENC_UADDLP_ASIMDMISC_P:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->op = (insword>>14)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ADDP_ASIMDSAME_ONLY:
  case ENC_ADD_ASIMDSAME_ONLY:
  case ENC_AND_ASIMDSAME_ONLY:
  case ENC_BIC_ASIMDSAME_ONLY:
  case ENC_CMEQ_ASIMDSAME_ONLY:
  case ENC_CMTST_ASIMDSAME_ONLY:
  case ENC_MLA_ASIMDSAME_ONLY:
  case ENC_MLS_ASIMDSAME_ONLY:
  case ENC_MOV_ORR_ASIMDSAME_ONLY:
  case ENC_MUL_ASIMDSAME_ONLY:
  case ENC_ORN_ASIMDSAME_ONLY:
  case ENC_ORR_ASIMDSAME_ONLY:
  case ENC_PMUL_ASIMDSAME_ONLY:
  case ENC_SHADD_ASIMDSAME_ONLY:
  case ENC_SHSUB_ASIMDSAME_ONLY:
  case ENC_SQADD_ASIMDSAME_ONLY:
  case ENC_SQDMULH_ASIMDSAME_ONLY:
  case ENC_SQRDMULH_ASIMDSAME_ONLY:
  case ENC_SQSUB_ASIMDSAME_ONLY:
  case ENC_SRHADD_ASIMDSAME_ONLY:
  case ENC_SUB_ASIMDSAME_ONLY:
  case ENC_UHADD_ASIMDSAME_ONLY:
  case ENC_UHSUB_ASIMDSAME_ONLY:
  case ENC_UQADD_ASIMDSAME_ONLY:
  case ENC_UQSUB_ASIMDSAME_ONLY:
  case ENC_URHADD_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_PMULL_ASIMDDIFF_L:
  case ENC_SMULL_ASIMDDIFF_L:
  case ENC_SQDMULL_ASIMDDIFF_L:
  case ENC_UMULL_ASIMDDIFF_L:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SABA_ASIMDSAME_ONLY:
  case ENC_SABD_ASIMDSAME_ONLY:
  case ENC_UABA_ASIMDSAME_ONLY:
  case ENC_UABD_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->ac = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CMGE_ASIMDSAME_ONLY:
  case ENC_CMGT_ASIMDSAME_ONLY:
  case ENC_CMHI_ASIMDSAME_ONLY:
  case ENC_CMHS_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->eq = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SMAXP_ASIMDSAME_ONLY:
  case ENC_SMAX_ASIMDSAME_ONLY:
  case ENC_SMINP_ASIMDSAME_ONLY:
  case ENC_SMIN_ASIMDSAME_ONLY:
  case ENC_UMAXP_ASIMDSAME_ONLY:
  case ENC_UMAX_ASIMDSAME_ONLY:
  case ENC_UMINP_ASIMDSAME_ONLY:
  case ENC_UMIN_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->o1 = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRSHL_ASIMDSAME_ONLY:
  case ENC_SQSHL_ASIMDSAME_ONLY:
  case ENC_SRSHL_ASIMDSAME_ONLY:
  case ENC_SSHL_ASIMDSAME_ONLY:
  case ENC_UQRSHL_ASIMDSAME_ONLY:
  case ENC_UQSHL_ASIMDSAME_ONLY:
  case ENC_URSHL_ASIMDSAME_ONLY:
  case ENC_USHL_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->R = (insword>>12)&1;
   ctx->S = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_ADDHN_ASIMDDIFF_N:
  case ENC_RADDHN_ASIMDDIFF_N:
  case ENC_RSUBHN_ASIMDDIFF_N:
  case ENC_SADDL_ASIMDDIFF_L:
  case ENC_SADDW_ASIMDDIFF_W:
  case ENC_SMLAL_ASIMDDIFF_L:
  case ENC_SMLSL_ASIMDDIFF_L:
  case ENC_SQDMLAL_ASIMDDIFF_L:
  case ENC_SQDMLSL_ASIMDDIFF_L:
  case ENC_SSUBL_ASIMDDIFF_L:
  case ENC_SSUBW_ASIMDDIFF_W:
  case ENC_SUBHN_ASIMDDIFF_N:
  case ENC_UADDL_ASIMDDIFF_L:
  case ENC_UADDW_ASIMDDIFF_W:
  case ENC_UMLAL_ASIMDDIFF_L:
  case ENC_UMLSL_ASIMDDIFF_L:
  case ENC_USUBL_ASIMDDIFF_L:
  case ENC_USUBW_ASIMDDIFF_W:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->o1 = (insword>>13)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SABAL_ASIMDDIFF_L:
  case ENC_SABDL_ASIMDDIFF_L:
  case ENC_UABAL_ASIMDDIFF_L:
  case ENC_UABDL_ASIMDDIFF_L:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->op = (insword>>13)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BFMLAL_ASIMDSAME2_F_:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>13)&3;
   ctx->opcode = (insword>>11)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BFDOT_ASIMDSAME2_D:
  case ENC_BFMMLA_ASIMDSAME2_E:
  case ENC_SDOT_ASIMDSAME2_D:
  case ENC_UDOT_ASIMDSAME2_D:
  case ENC_USDOT_ASIMDSAME2_D:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SMMLA_ASIMDSAME2_G:
  case ENC_UMMLA_ASIMDSAME2_G:
  case ENC_USMMLA_ASIMDSAME2_G:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->B = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_SQRDMLAH_ASIMDSAME2_ONLY:
  case ENC_SQRDMLSH_ASIMDSAME2_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->S = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMLA_ASIMDSAME2_C:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->rot = (insword>>11)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCADD_ASIMDSAME2_C:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->rot = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLAL_ASIMDELEM_LH:
  case ENC_FMLAL2_ASIMDELEM_LH:
  case ENC_FMLSL_ASIMDELEM_LH:
  case ENC_FMLSL2_ASIMDELEM_LH:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->size = (insword>>23)&1;
   ctx->sz = (insword>>22)&1;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>15)&1;
   ctx->S = (insword>>14)&1;
   ctx->opcode = (insword>>12)&3;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMULX_ASIMDELEM_R_SD:
  case ENC_FMUL_ASIMDELEM_R_SD:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->opcode = (insword>>12)&15;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FMLA_ASIMDELEM_R_SD:
  case ENC_FMLS_ASIMDELEM_R_SD:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->L = (insword>>21)&1;
   ctx->M = (insword>>20)&1;
   ctx->Rm = (insword>>16)&15;
   ctx->o2 = (insword>>14)&1;
   ctx->H = (insword>>11)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABS_ASIMDMISC_R:
  case ENC_FCMLT_ASIMDMISC_FZ:
  case ENC_FCVTAS_ASIMDMISC_R:
  case ENC_FCVTAU_ASIMDMISC_R:
  case ENC_FCVTL_ASIMDMISC_L:
  case ENC_FCVTN_ASIMDMISC_N:
  case ENC_FCVTXN_ASIMDMISC_N:
  case ENC_FNEG_ASIMDMISC_R:
  case ENC_FRECPE_ASIMDMISC_R:
  case ENC_FRSQRTE_ASIMDMISC_R:
  case ENC_FSQRT_ASIMDMISC_R:
  case ENC_SCVTF_ASIMDMISC_R:
  case ENC_UCVTF_ASIMDMISC_R:
  case ENC_URECPE_ASIMDMISC_R:
  case ENC_URSQRTE_ASIMDMISC_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->opcode = (insword>>12)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FCMEQ_ASIMDMISC_FZ:
  case ENC_FCMGE_ASIMDMISC_FZ:
  case ENC_FCMGT_ASIMDMISC_FZ:
  case ENC_FCMLE_ASIMDMISC_FZ:
  case ENC_FRINT32X_ASIMDMISC_R:
  case ENC_FRINT32Z_ASIMDMISC_R:
  case ENC_FRINT64X_ASIMDMISC_R:
  case ENC_FRINT64Z_ASIMDMISC_R:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_FABD_ASIMDSAME_ONLY:
  case ENC_FADDP_ASIMDSAME_ONLY:
  case ENC_FADD_ASIMDSAME_ONLY:
  case ENC_FDIV_ASIMDSAME_ONLY:
  case ENC_FMULX_ASIMDSAME_ONLY:
  case ENC_FMUL_ASIMDSAME_ONLY:
  case ENC_FRECPS_ASIMDSAME_ONLY:
  case ENC_FRSQRTS_ASIMDSAME_ONLY:
  case ENC_FSUB_ASIMDSAME_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->U = (insword>>29)&1;
   ctx->sz = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>11)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_BIC_ASIMDIMM_L_HL:
  case ENC_BIC_ASIMDIMM_L_SL:
  case ENC_FMOV_ASIMDIMM_H_H:
  case ENC_FMOV_ASIMDIMM_S_S:
  case ENC_FMOV_ASIMDIMM_D2_D:
  case ENC_MOVI_ASIMDIMM_N_B:
  case ENC_MOVI_ASIMDIMM_L_HL:
  case ENC_MOVI_ASIMDIMM_L_SL:
  case ENC_MOVI_ASIMDIMM_M_SM:
  case ENC_MOVI_ASIMDIMM_D_DS:
  case ENC_MOVI_ASIMDIMM_D2_D:
  case ENC_MVNI_ASIMDIMM_L_HL:
  case ENC_MVNI_ASIMDIMM_L_SL:
  case ENC_MVNI_ASIMDIMM_M_SM:
  case ENC_ORR_ASIMDIMM_L_HL:
  case ENC_ORR_ASIMDIMM_L_SL:

   ctx->Q = (insword>>30)&1;
   ctx->op = (insword>>29)&1;
   ctx->a = (insword>>18)&1;
   ctx->b = (insword>>17)&1;
   ctx->c = (insword>>16)&1;
   ctx->cmode = (insword>>12)&15;
   ctx->o2 = (insword>>11)&1;
   ctx->d = (insword>>9)&1;
   ctx->e = (insword>>8)&1;
   ctx->f = (insword>>7)&1;
   ctx->g = (insword>>6)&1;
   ctx->h = (insword>>5)&1;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_MOV_UMOV_ASIMDINS_W_W:
  case ENC_MOV_UMOV_ASIMDINS_X_X:
  case ENC_SMOV_ASIMDINS_W_W:
  case ENC_SMOV_ASIMDINS_X_X:
  case ENC_UMOV_ASIMDINS_W_W:
  case ENC_UMOV_ASIMDINS_X_X:

   ctx->Q = (insword>>30)&1;
   ctx->op = (insword>>29)&1;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->imm4 = (insword>>13)&3;
   ctx->imm4 = (insword>>11)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_DUP_ASIMDINS_DV_V:
  case ENC_DUP_ASIMDINS_DR_R:
  case ENC_INS_ASIMDINS_IV_V:
  case ENC_INS_ASIMDINS_IR_R:
  case ENC_MOV_INS_ASIMDINS_IV_V:
  case ENC_MOV_INS_ASIMDINS_IR_R:

   ctx->Q = (insword>>30)&1;
   ctx->op = (insword>>29)&1;
   ctx->imm5 = (insword>>16)&0x1f;
   ctx->imm4 = (insword>>11)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_LD1R_ASISDLSOP_R1_I:
  case ENC_LD1R_ASISDLSOP_RX1_R:
  case ENC_LD1_ASISDLSOP_B1_I1B:
  case ENC_LD1_ASISDLSOP_BX1_R1B:
  case ENC_LD1_ASISDLSOP_H1_I1H:
  case ENC_LD1_ASISDLSOP_HX1_R1H:
  case ENC_LD1_ASISDLSOP_S1_I1S:
  case ENC_LD1_ASISDLSOP_SX1_R1S:
  case ENC_LD1_ASISDLSOP_D1_I1D:
  case ENC_LD1_ASISDLSOP_DX1_R1D:
  case ENC_LD2R_ASISDLSOP_R2_I:
  case ENC_LD2R_ASISDLSOP_RX2_R:
  case ENC_LD2_ASISDLSOP_B2_I2B:
  case ENC_LD2_ASISDLSOP_BX2_R2B:
  case ENC_LD2_ASISDLSOP_H2_I2H:
  case ENC_LD2_ASISDLSOP_HX2_R2H:
  case ENC_LD2_ASISDLSOP_S2_I2S:
  case ENC_LD2_ASISDLSOP_SX2_R2S:
  case ENC_LD2_ASISDLSOP_D2_I2D:
  case ENC_LD2_ASISDLSOP_DX2_R2D:
  case ENC_LD3R_ASISDLSOP_R3_I:
  case ENC_LD3R_ASISDLSOP_RX3_R:
  case ENC_LD3_ASISDLSOP_B3_I3B:
  case ENC_LD3_ASISDLSOP_BX3_R3B:
  case ENC_LD3_ASISDLSOP_H3_I3H:
  case ENC_LD3_ASISDLSOP_HX3_R3H:
  case ENC_LD3_ASISDLSOP_S3_I3S:
  case ENC_LD3_ASISDLSOP_SX3_R3S:
  case ENC_LD3_ASISDLSOP_D3_I3D:
  case ENC_LD3_ASISDLSOP_DX3_R3D:
  case ENC_LD4R_ASISDLSOP_R4_I:
  case ENC_LD4R_ASISDLSOP_RX4_R:
  case ENC_LD4_ASISDLSOP_B4_I4B:
  case ENC_LD4_ASISDLSOP_BX4_R4B:
  case ENC_LD4_ASISDLSOP_H4_I4H:
  case ENC_LD4_ASISDLSOP_HX4_R4H:
  case ENC_LD4_ASISDLSOP_S4_I4S:
  case ENC_LD4_ASISDLSOP_SX4_R4S:
  case ENC_LD4_ASISDLSOP_D4_I4D:
  case ENC_LD4_ASISDLSOP_DX4_R4D:
  case ENC_ST1_ASISDLSOP_B1_I1B:
  case ENC_ST1_ASISDLSOP_BX1_R1B:
  case ENC_ST1_ASISDLSOP_H1_I1H:
  case ENC_ST1_ASISDLSOP_HX1_R1H:
  case ENC_ST1_ASISDLSOP_S1_I1S:
  case ENC_ST1_ASISDLSOP_SX1_R1S:
  case ENC_ST1_ASISDLSOP_D1_I1D:
  case ENC_ST1_ASISDLSOP_DX1_R1D:
  case ENC_ST2_ASISDLSOP_B2_I2B:
  case ENC_ST2_ASISDLSOP_BX2_R2B:
  case ENC_ST2_ASISDLSOP_H2_I2H:
  case ENC_ST2_ASISDLSOP_HX2_R2H:
  case ENC_ST2_ASISDLSOP_S2_I2S:
  case ENC_ST2_ASISDLSOP_SX2_R2S:
  case ENC_ST2_ASISDLSOP_D2_I2D:
  case ENC_ST2_ASISDLSOP_DX2_R2D:
  case ENC_ST3_ASISDLSOP_B3_I3B:
  case ENC_ST3_ASISDLSOP_BX3_R3B:
  case ENC_ST3_ASISDLSOP_H3_I3H:
  case ENC_ST3_ASISDLSOP_HX3_R3H:
  case ENC_ST3_ASISDLSOP_S3_I3S:
  case ENC_ST3_ASISDLSOP_SX3_R3S:
  case ENC_ST3_ASISDLSOP_D3_I3D:
  case ENC_ST3_ASISDLSOP_DX3_R3D:
  case ENC_ST4_ASISDLSOP_B4_I4B:
  case ENC_ST4_ASISDLSOP_BX4_R4B:
  case ENC_ST4_ASISDLSOP_H4_I4H:
  case ENC_ST4_ASISDLSOP_HX4_R4H:
  case ENC_ST4_ASISDLSOP_S4_I4S:
  case ENC_ST4_ASISDLSOP_SX4_R4S:
  case ENC_ST4_ASISDLSOP_D4_I4D:
  case ENC_ST4_ASISDLSOP_DX4_R4D:

   ctx->Q = (insword>>30)&1;
   ctx->L = (insword>>22)&1;
   ctx->R = (insword>>21)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>13)&7;
   ctx->S = (insword>>12)&1;
   ctx->size = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LD1R_ASISDLSO_R1:
  case ENC_LD1_ASISDLSO_B1_1B:
  case ENC_LD1_ASISDLSO_H1_1H:
  case ENC_LD1_ASISDLSO_S1_1S:
  case ENC_LD1_ASISDLSO_D1_1D:
  case ENC_LD2R_ASISDLSO_R2:
  case ENC_LD2_ASISDLSO_B2_2B:
  case ENC_LD2_ASISDLSO_H2_2H:
  case ENC_LD2_ASISDLSO_S2_2S:
  case ENC_LD2_ASISDLSO_D2_2D:
  case ENC_LD3R_ASISDLSO_R3:
  case ENC_LD3_ASISDLSO_B3_3B:
  case ENC_LD3_ASISDLSO_H3_3H:
  case ENC_LD3_ASISDLSO_S3_3S:
  case ENC_LD3_ASISDLSO_D3_3D:
  case ENC_LD4R_ASISDLSO_R4:
  case ENC_LD4_ASISDLSO_B4_4B:
  case ENC_LD4_ASISDLSO_H4_4H:
  case ENC_LD4_ASISDLSO_S4_4S:
  case ENC_LD4_ASISDLSO_D4_4D:
  case ENC_ST1_ASISDLSO_B1_1B:
  case ENC_ST1_ASISDLSO_H1_1H:
  case ENC_ST1_ASISDLSO_S1_1S:
  case ENC_ST1_ASISDLSO_D1_1D:
  case ENC_ST2_ASISDLSO_B2_2B:
  case ENC_ST2_ASISDLSO_H2_2H:
  case ENC_ST2_ASISDLSO_S2_2S:
  case ENC_ST2_ASISDLSO_D2_2D:
  case ENC_ST3_ASISDLSO_B3_3B:
  case ENC_ST3_ASISDLSO_H3_3H:
  case ENC_ST3_ASISDLSO_S3_3S:
  case ENC_ST3_ASISDLSO_D3_3D:
  case ENC_ST4_ASISDLSO_B4_4B:
  case ENC_ST4_ASISDLSO_H4_4H:
  case ENC_ST4_ASISDLSO_S4_4S:
  case ENC_ST4_ASISDLSO_D4_4D:

   ctx->Q = (insword>>30)&1;
   ctx->L = (insword>>22)&1;
   ctx->R = (insword>>21)&1;
   ctx->opcode = (insword>>13)&7;
   ctx->S = (insword>>12)&1;
   ctx->size = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LD1_ASISDLSE_R1_1V:
  case ENC_LD1_ASISDLSE_R2_2V:
  case ENC_LD1_ASISDLSE_R3_3V:
  case ENC_LD1_ASISDLSE_R4_4V:
  case ENC_LD2_ASISDLSE_R2:
  case ENC_LD3_ASISDLSE_R3:
  case ENC_LD4_ASISDLSE_R4:
  case ENC_ST1_ASISDLSE_R1_1V:
  case ENC_ST1_ASISDLSE_R2_2V:
  case ENC_ST1_ASISDLSE_R3_3V:
  case ENC_ST1_ASISDLSE_R4_4V:
  case ENC_ST2_ASISDLSE_R2:
  case ENC_ST3_ASISDLSE_R3:
  case ENC_ST4_ASISDLSE_R4:

   ctx->Q = (insword>>30)&1;
   ctx->L = (insword>>22)&1;
   ctx->opcode = (insword>>12)&15;
   ctx->size = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_LD1_ASISDLSEP_I1_I1:
  case ENC_LD1_ASISDLSEP_R1_R1:
  case ENC_LD1_ASISDLSEP_I2_I2:
  case ENC_LD1_ASISDLSEP_R2_R2:
  case ENC_LD1_ASISDLSEP_I3_I3:
  case ENC_LD1_ASISDLSEP_R3_R3:
  case ENC_LD1_ASISDLSEP_I4_I4:
  case ENC_LD1_ASISDLSEP_R4_R4:
  case ENC_LD2_ASISDLSEP_I2_I:
  case ENC_LD2_ASISDLSEP_R2_R:
  case ENC_LD3_ASISDLSEP_I3_I:
  case ENC_LD3_ASISDLSEP_R3_R:
  case ENC_LD4_ASISDLSEP_I4_I:
  case ENC_LD4_ASISDLSEP_R4_R:
  case ENC_ST1_ASISDLSEP_I1_I1:
  case ENC_ST1_ASISDLSEP_R1_R1:
  case ENC_ST1_ASISDLSEP_I2_I2:
  case ENC_ST1_ASISDLSEP_R2_R2:
  case ENC_ST1_ASISDLSEP_I3_I3:
  case ENC_ST1_ASISDLSEP_R3_R3:
  case ENC_ST1_ASISDLSEP_I4_I4:
  case ENC_ST1_ASISDLSEP_R4_R4:
  case ENC_ST2_ASISDLSEP_I2_I:
  case ENC_ST2_ASISDLSEP_R2_R:
  case ENC_ST3_ASISDLSEP_I3_I:
  case ENC_ST3_ASISDLSEP_R3_R:
  case ENC_ST4_ASISDLSEP_I4_I:
  case ENC_ST4_ASISDLSEP_R4_R:

   ctx->Q = (insword>>30)&1;
   ctx->L = (insword>>22)&1;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->opcode = (insword>>12)&15;
   ctx->size = (insword>>10)&3;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  case ENC_EXT_ASIMDEXT_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->op2 = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->imm4 = (insword>>11)&15;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_TBL_ASIMDTBL_L2_2:
  case ENC_TBL_ASIMDTBL_L3_3:
  case ENC_TBL_ASIMDTBL_L4_4:
  case ENC_TBL_ASIMDTBL_L1_1:
  case ENC_TBX_ASIMDTBL_L2_2:
  case ENC_TBX_ASIMDTBL_L3_3:
  case ENC_TBX_ASIMDTBL_L4_4:
  case ENC_TBX_ASIMDTBL_L1_1:

   ctx->Q = (insword>>30)&1;
   ctx->op2 = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->len = (insword>>13)&3;
   ctx->op = (insword>>12)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_TRN1_ASIMDPERM_ONLY:
  case ENC_TRN2_ASIMDPERM_ONLY:
  case ENC_UZP1_ASIMDPERM_ONLY:
  case ENC_UZP2_ASIMDPERM_ONLY:
  case ENC_ZIP1_ASIMDPERM_ONLY:
  case ENC_ZIP2_ASIMDPERM_ONLY:

   ctx->Q = (insword>>30)&1;
   ctx->size = (insword>>22)&3;
   ctx->Rm = (insword>>16)&0x1f;
   ctx->op = (insword>>14)&1;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rd = insword&0x1f;
   break;
  case ENC_CASP_CP32_COMSWAPPR:
  case ENC_CASPA_CP32_COMSWAPPR:
  case ENC_CASPAL_CP32_COMSWAPPR:
  case ENC_CASPL_CP32_COMSWAPPR:
  case ENC_CASP_CP64_COMSWAPPR:
  case ENC_CASPA_CP64_COMSWAPPR:
  case ENC_CASPAL_CP64_COMSWAPPR:
  case ENC_CASPL_CP64_COMSWAPPR:
  case ENC_LDAXP_LP32_LDSTEXCLP:
  case ENC_LDAXP_LP64_LDSTEXCLP:
  case ENC_LDXP_LP32_LDSTEXCLP:
  case ENC_LDXP_LP64_LDSTEXCLP:
  case ENC_STLXP_SP32_LDSTEXCLP:
  case ENC_STLXP_SP64_LDSTEXCLP:
  case ENC_STXP_SP32_LDSTEXCLP:
  case ENC_STXP_SP64_LDSTEXCLP:

   ctx->sz = (insword>>30)&1;
   ctx->o2 = (insword>>23)&1;
   ctx->L = (insword>>22)&1;
   ctx->o1 = (insword>>21)&1;
   ctx->Rs = (insword>>16)&0x1f;
   ctx->o0 = (insword>>15)&1;
   ctx->Rt2 = (insword>>10)&0x1f;
   ctx->Rn = (insword>>5)&0x1f;
   ctx->Rt = insword&0x1f;
   break;
  default:
   break;
 }
}
