#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define _SYS__TYPES_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define X_RD(i) (((i) >> 23) & 0x1f)
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define L3_POPC_MASK (0xf00207fb)
#define L3_ARITH (0x10)
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define L3_SBR_OPCODE_MASK (0xf003f806)
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __DRIVERKIT_19_0 190000
#define __INTMAX_C(c) c ## L
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define L3_USE_SBR 
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
#define F_REL 0x80000
#define __WINT_MAX__ 0x7fffffff
#define __PTHREAD_ATTR_SIZE__ 56
#define __FLT32_MIN_EXP__ (-125)
#define ATTRIBUTE_HOT __attribute__ ((__hot__))
#define _CDEFS_H_ 
#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define L3_FULLWORD 2
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define X_OP2(i) (((i) >> 8) & 0x07)
#define X_RI_OP(i) (((i) >> 28) & 0x07)
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __WCHAR_MAX__ 0x7fffffff
#define F_CONDBR (F_BR|F_CONDITIONAL)
#define L3_SPLS (0xf0030000)
#define L3_LT 13
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
#define X_RS2(i) (((i) >> 11) & 0x1f)
#define VOLATILE volatile
#define L3_OP1(x) (((x)&0x7) << 0)
#define L3_OP2(x) (((x)&0x7) << 8)
#define RR_MOV_PAIR(f,op) GENERIC_PAIR(L3_RR_MASK|0x007c0000, L3_RR | ((f)?L3_RR_F:0) | L3_RR_OP(op) | (((op)&L3_ARITH)?1<<6:0) | ((op)==L3_SH?1<<7:0) )
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define __disable_tail_calls 
#define L3_USE_SLI 
#define L3_USE_SLS 
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define L3_USE_SPLS 
#define __DARWIN_SUF_1050 "$1050"
#define L3_RI_H (0x00010000)
#define MAC_OS_X_VERSION_10_14_4 101404
#define L3_RS2(x) (((x)&0x1f) << 11)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define __DBL_MIN_10_EXP__ (-307)
#define __FINITE_MATH_ONLY__ 0
#define X_RRM_OP(i) X_OP2(i)
#define __cold __attribute__((__cold__))
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32_HAS_DENORM__ 1
#define L3_RR_OPCODE_MASK (0xf0000003)
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __UINT_FAST8_MAX__ 0xff
#define LEADZ_PAIR(f) GENERIC_PAIR(L3_LEADZ_MASK, L3_LEADZ | ((f)?L3_LEADZ_F:0))
#define __WATCHOS_PROHIBITED 
#define __FLT32_MAX_10_EXP__ 38
#define L3_AND (0x04)
#define L3_SBR (0xf003c000)
#define __INT8_C(c) c
#define L3_SCC (0xe0000002)
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define L3_RI_OPCODE_MASK (0x80000000)
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
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define L3_RRR_F (0x00020000)
#define __SNPT 0x0800
#define L3_RRR_H (0x00010000)
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define X_RR_OP(i) X_OP2(i)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __result_use_check __attribute__((__warn_unused_result__))
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define NULL __DARWIN_NULL
#define L3_RRM_E (0x00000001)
#define __UINT32_MAX__ 0xffffffffU
#define __PTHREAD_MUTEX_SIZE__ 56
#define __DARWIN_UNIX03 1
#define L3_SBR_MASK (0xfe03f807)
#define L3_RRM_OPCODE_MASK (0xe0000000)
#define X_OP1(i) (((i) >> 0) & 0x07)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define RI_PAIR(op,f,h) GENERIC_PAIR(L3_RI_MASK, L3_RI | L3_RI_OP(op) | ((f)?L3_RI_F:0) | ((h)?L3_RI_H:0) )
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __FLT128_MIN_EXP__ (-16381)
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)
#define F_CONDITIONAL 0x40000
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
#define L3_RRR_MASK (0xf0000000)
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define L3_SH (0x07)
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define L3_RM_Q (0x00010000)
#define L3_RM_S (0x10000000)
#define L3_SLI_MASK (0xf0030000)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __MAC_11_1 110100
#define L3_SLI_OPCODE_MASK (0xf0030000)
#define _FORTIFY_SOURCE 2
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define L3_ADD (0x00)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define L3_SUB (0x02)
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define L3_SCC_MASK (0xff000003)
#define _INT32_T 
#define BR_PAIR(cond,r) GENERIC_PAIR(L3_BR_MASK, L3_BR | L3_BR_COND(cond) | ((r)?L3_BR_R:0) )
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define __USER_LABEL_PREFIX__ _
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define L3_SLS_OPCODE_MASK (0xf0020000)
#define F_HALF 0x10000
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define L3_UNSIGNED 1
#define __STDC_HOSTED__ 1
#define _STDIO_H_ 
#define L3_BRR_MASK (0xff000003)
#define RRM_PAIR(s,p,q,mode) GENERIC_PAIR(L3_RRM_MASK, L3_RRM | ((s)?L3_RRM_S:0) | ((p)?L3_RRM_P:0) | ((q)?L3_RRM_Q:0) | L3_RRM_MODE(mode) )
#define MAC_OS_X_VERSION_10_12_1 101201
#define L3_LEADZ_F L3_RR_F
#define MAC_OS_X_VERSION_10_12_4 101204
#define TMP_MAX 308915776
#define F_SLI 0x800
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
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
#define L3_RM_P (0x00020000)
#define __FLT32_IS_IEC_60559__ 2
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define L3_SIGNED 0
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define __API_AVAILABLE_GET_MACRO(...) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __strong 
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define SIGNED signed
#define __MAC_10_3 1030
#define L3_RI_MASK (0xf0030000)
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define POPC_PAIR(f) GENERIC_PAIR(L3_POPC_MASK, L3_POPC | ((f)?L3_POPC_F:0))
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __AVAILABILITY_INTERNAL_REGULAR 
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define __WATCHOS_7_2 70200
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define L3_FLAGS (0x08)
#define __DECIMAL_DIG__ 21
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))
#define __FLT128_IS_IEC_60559__ 2
#define lanai_opcode bfd_lanai_opcode
#define L3_RR_MASK (0xf00207fb)
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
#define ATTRIBUTE_PACKED __attribute__ ((packed))
#define __SPI_AVAILABLE(...) 
#define __FLT64X_MANT_DIG__ 64
#define NOARGS void
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
#define L3_RS1(x) (((x)&0x1f) << 18)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define fileno_unlocked(p) __sfileno(p)
#define F_SBR 0x4000
#define L3_SLS_CONST(x) ((((x)&0x1f) << 18) | ((x)&0xffff))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SEEK_CUR 1
#define __BIGGEST_ALIGNMENT__ 16
#define F_SCC 0x8000
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
#define L3_LEADZ (0xc0000002)
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define RI_MOV_PAIR(op,f,h) GENERIC_PAIR(L3_RI_MASK|L3_RS1(31), L3_RI|L3_RI_OP(op)|((f)?L3_RI_F:0)|((h)?L3_RI_H:0)|(((op)==L3_AND)?L3_RS1(1):0))
#define lanai_opcodes bfd_lanai_opcodes
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __INT_FAST32_MAX__ 0x7fffffff
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define L3_HALFWORD 0
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define F_BR 0x200
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define L3_SLS_HIBITS(x) (((x)&0x1f) << 18)
#define L3_BR_OPCODE_MASK (0xf0000002)
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define PTRCONST void *const
#define L3_SLS_S (0x00010000)
#define F_RELCONDBR (F_REL|F_BR|F_CONDITIONAL)
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define F_SLS 0x400
#define L3_UNSIGNED_BYTE ( L3_UNSIGNED | L3_BYTE )
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define __DARWIN_SUF_NON_CANCELABLE 
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define __FLT128_HAS_INFINITY__ 1
#define __weak 
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __kpi_unavailable 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define F_RRM 0x100
#define __amd64 1
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __PTHREAD_ONCE_SIZE__ 8
#define L3_SBR_OP(x) (((x)&0x7) << 8)
#define __AVAILABILITY__ 
#define ANSI_PROTOTYPES 1
#define __tune_core2__ 1
#define F_RRR 0x40
#define __ATOMIC_HLE_ACQUIRE 65536
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define L3_VC 8
#define __MAC_10_14_1 101401
#define EXFUN(name,proto) name proto
#define __SPI_DEPRECATED(...) 
#define __dead 
#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
#define VA_CLOSE(AP) } va_end(AP); }
#define __WATCHOS_5_0 50000
#define L3_SBR_COND(x) ((((x)&0xe) << 24) | ((x)&1) )
#define F_SPLS 0x1000
#define __FLT64X_MIN_EXP__ (-16381)
#define __SIZEOF_WINT_T__ 4
#define __WATCHOS_5_2 50200
#define _SECURE__COMMON_H_ 
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define L3_POPC_OPCODE_MASK L3_RR_OPCODE_MASK
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __FLT32_MAX_EXP__ 128
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define L3_SLI_CONST(x) ((((x)&0x1f) << 18) | ((x)&0xffff))
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
#define PCREL_SBR_PAIR(cond) GENERIC_PAIR(L3_SBR_MASK|L3_RS1(0x1f)| L3_SBR_OP(7), L3_SBR|L3_SBR_COND(cond)|L3_SBR_OP(L3_ADD)|L3_RS1(2)|L3_SBR_R)
#define _BSD_I386__TYPES_H_ 
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __INT16_MAX__ 0x7fff
#define __x86_64 1
#define __SALC 0x4000
#define __PTHREAD_CONDATTR_SIZE__ 8
#define L3_BRR_OPCODE_MASK (0xf1000002)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define L3_SPLS_MODE(x) (((x)&0x5) << 12)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __INT_FAST64_TYPE__ long long int
#define L3_BR_MASK (0xfe000003)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define L3_SI_F (0x00002000)
#define __SMBF 0x0080
#define L3_BR (0xe0000000)
#define DEFUN_VOID(name) name(void)
#define __OSX_AVAILABLE(_vers) 
#define L3_CC 4
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define L3_CS 5
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define __not_tail_called 
#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __LP64__ 1
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define L3_EQ 7
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __nonnull 
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define NUMOPCODES bfd_lanai_num_opcodes
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define L3_GE 12
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define L3_GT 14
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define L3_RRM_MODE(x) (((x)&0x7) << 0)
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define F_DATA_SIZE(X) (4>>((X)&0x30000))
#define L3_LEADZ_OPCODE_MASK L3_RR_OPCODE_MASK
#define L3_HI 2
#define __WATCHOS_4_1 40100
#define __FLT64_MIN_10_EXP__ (-307)
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define L3_RRR_OP1(x) (((x)&L3_OP_MASK) << 0)
#define __DBL_HAS_DENORM__ 1
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define L3_LE 15
#define __LDBL_HAS_INFINITY__ 1
#define L3_RRM_L (0x00000002)
#define __OS_AVAILABILITY(_target,_availability) 
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define F_BYTE 0x20000
#define L3_NE 6
#define __DARWIN_NON_CANCELABLE 0
#define __DEC_EVAL_METHOD__ 2
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define DOTS , ...
#define L3_OR (0x05)
#define L3_RI_F (0x00020000)
#define __enum_options 
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define RRR_PAIR() GENERIC_PAIR(L3_RRR_MASK, L3_RRR )
#define __VERSION__ "11.2.0"
#define L3_PL 10
#define L3_SBR_H (0x00000004)
#define L3_SBR_N (0x00000001)
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define VA_FIXEDARG(AP,T,N) struct Qdmy
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define X_RS1(i) (((i) >> 18) & 0x1f)
#define __used __attribute__((__used__))
#define L3_BR_CONST_MASK (0x01fffffc)
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#define F_RM 0x80
#define L3_RD(x) (((x)&0x1f) << 23)
#define L3_RI (0x00000000)
#define L3_RM (0x80000000)
#define L3_RR (0xc0000000)
#define F_RR 0x20
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define L3_BRR (0xe1000002)
#define L3_LEADZ_MASK (0xf00207fb)
#define __SSTR 0x0200
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define L3_VS 9
#define lanai_architecture bfd_lanai_architecture
#define RR_PAIR(f,op) GENERIC_PAIR(L3_RR_MASK, L3_RR | ((f)?L3_RR_F:0) | L3_RR_OP(op) | ((((op)&L3_OP_MASK)==L3_SH) ? ((op)&L3_ARITH?0xc0:0x80) : 0 ))
#define RENAME_SECLUDE 0x00000001
#define __SLBF 0x0001
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define L3_ADDC (0x01)
#define clearerr_unlocked(p) __sclearerr(p)
#define X_C10(i) ((i) & 0x3ff)
#define X_C16(i) ((i) & 0xffff)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define L3_XOR (0x06)
#define X_C21(i) (((i) & 0xffff) | (((i) & 0x7c0000)>>2))
#define X_C25(i) ((i) & 0x1fffffc)
#define __IPHONE_13_5 130500
#define __SRD 0x0004
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __IOS_UNAVAILABLE 
#define L3_SPLS_OPCODE_MASK (0xf0038000)
#define _U_INT8_T 
#define L3_RR_F (0x00020000)
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED
#define __FLT128_HAS_DENORM__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define _Null_unspecified 
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define __DARWIN_NO_LONG_LONG 0
#define L3_RI_OP(x) (((x)&L3_OP_MASK) << 28)
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __UINT_LEAST16_TYPE__ short unsigned int
#define L3_RRR_OP2(x) (((x)&L3_OP_MASK) << 8)
#define __SAPP 0x0100
#define L3_RRR_OPCODE_MASK (0xf0000000)
#define __MAC_10_15_4 101504
#define SLS_PAIR(s) GENERIC_PAIR(L3_SLS_MASK, L3_SLS | ((s)?L3_SLS_S:0) )
#define _INT64_T 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define L3_PUNT (0xf003ff47)
#define F_RI 0x10
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define L3_PUNT_MASK (0xf003ff47)
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#define __INT8_TYPE__ signed char
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define L3_RM_OPCODE_MASK (0xe0000000)
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __SOFF 0x1000
#define SEX(value,bits) ((((int)(value)) << ((8 * sizeof (int)) - bits) ) >> ((8 * sizeof (int)) - bits) )
#define GENERIC_PAIR(mask,high) (high),((mask)&~(high))
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __UINTMAX_C(c) c ## UL
#define L3_SUBB (0x03)
#define __SSE_MATH__ 1
#define _U_INT32_T 
#define L3_OP_MASK (0x07)
#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define __k8 1
#define BUFSIZ 1024
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define __WATCHOS_3_1_1 30101
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define L3_UNSIGNED_FULLWORD ( L3_UNSIGNED | L3_FULLWORD )
#define __SIZEOF_PTRDIFF_T__ 8
#define _OFF_T 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define __TVOS_AVAILABLE(_vers) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_64_BIT_INO_T 1
#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)
#define __TVOS_14_0 140000
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
#define X_RS3(i) (((i) >> 3) & 0x1f)
#define _USE_FORTIFY_LEVEL 2
#define __INT_FAST16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define __deprecated __attribute__((__deprecated__))
#define F_UNBR (F_BR)
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
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
#define L3_SCC_OPCODE_MASK (0xf1000002)
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define L3_LS 3
#define L3_SLS_MASK (0xf0030000)
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
#define L3_UGE L3_CC
#define L3_UGT L3_GT
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define L3_BR_COND(x) ((((x)&0xe) << 24) | ((x)&1) )
#define DEFUN(name,arglist,args) name(args)
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define L3_CONST_MASK (0x0000ffff)
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define L3_RRM_MASK (0xe0030007)
#define __INT_LEAST64_TYPE__ long long int
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define __PTHREAD_SIZE__ 8176
#define _MACHTYPES_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define L3_ULE L3_LE
#define L3_ULT L3_CS
#define _SYS_STDIO_H_ 
#define AND ,
#define L3_USE_SI 
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define SLI_PAIR() GENERIC_PAIR(L3_SLI_MASK, L3_SLI )
#define __swift_compiler_version_at_least(...) 1
#define L3_BYTE 4
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define __LITTLE_ENDIAN__ 1
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define __FLT32_MIN_10_EXP__ (-37)
#define SCC_PAIR(cond) GENERIC_PAIR (L3_SCC_MASK, L3_SCC | L3_BR_COND (cond))
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define __FLT32X_DIG__ 15
#define VPARAMS(ARGS) ARGS
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define L3_F 1
#define L3_T 0
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
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
#define _ANSIDECL_H 1
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
#define L3_SLI (0xf0020000)
#define _SYS__PTHREAD_TYPES_H_ 
#define __API_UNAVAILABLE_END 
#define __STDIO_H_ 
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define L3_SLS (0xf0000000)
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define L3_SIGNED_HALFWORD ( L3_SIGNED | L3_HALFWORD )
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INT_MAX__ 0x7fffffff
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define __INT64_TYPE__ long long int
#define __FLT_MAX_EXP__ 128
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define L3_RM_MASK (0xf0030000)
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define F_ALIAS 1
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
#define RM_PAIR(s,p,q) GENERIC_PAIR(L3_RM_MASK, L3_RM | ((s)?L3_RM_S:0) | ((p)?L3_RM_P:0) | ((q)?L3_RM_Q:0) )
#define __SIZEOF_INT128__ 16
#define __FLT64X_IS_IEC_60559__ 2
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define L3_POPC_F L3_RR_F
#define _LP64 1
#define __UINT8_C(c) c
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define L3_SPLS_P (0x00000800)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define L3_SPLS_Q (0x00000400)
#define __UINT64_TYPE__ long long unsigned int
#define PUNT_PAIR() GENERIC_PAIR(L3_PUNT_MASK, L3_PUNT )
#define __has_feature(x) 0
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define L3_SPLS_S (0x00002000)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define L3_SIGNED_BYTE ( L3_SIGNED | L3_BYTE )
#define MAC_OS_X_VERSION_10_10 101000
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define L3_SPLS_MASK (0xf003fc00)
#define MAC_OS_X_VERSION_10_15 101500
#define L3_BR_R (0x00000002)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define PTR void *
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define __TVOS_11_4 110400
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define L3_SPLS_CONST_MASK (0x000003ff)
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/var/tmp/"
#define __FLT64_HAS_DENORM__ 1
#define F_LEADZ 0x100000
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define __TYPES_H_ 
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define L3_SIGNED_FULLWORD ( L3_SIGNED | L3_FULLWORD )
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define FOPEN_MAX 20
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define stderr __stderrp
#define __INTMAX_WIDTH__ 64
#define CONST const
#define L3_RRM_OP(x) (((x)&L3_OP_MASK) << 8)
#define __UINT32_C(c) c ## U
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define F_RELUNBR (F_REL|F_BR)
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __IOS_AVAILABLE(_vers) 
#define X_RRR_OP2(i) X_OP2(i)
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED
#define __PIC__ 2
#define architecture_pname bfd_lanai_architecture_pname
#define __UINT_FAST32_TYPE__ unsigned int
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define SPLS_PAIR(s,mode,p,q) GENERIC_PAIR(L3_SPLS_MASK, L3_SPLS | L3_SPLS_MODE(mode) | ((s)?L3_SPLS_S:0) | ((p)?L3_SPLS_P:0) | ((q)?L3_SPLS_Q:0) )
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define ATTRIBUTE_COLD __attribute__ ((__cold__))
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define L3_UNSIGNED_HALFWORD ( L3_UNSIGNED | L3_HALFWORD )
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define L3_RRM (0xa0000000)
#define L3_RRR (0xd0000000)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define L3_RS3(x) (((x)&0x1f) << 3)
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __SSE2__ 1
#define PROTO(type,name,arglist) type name arglist
#define F_JSR 2
#define __API_AVAILABLE_BEGIN(...) 
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define F_POPC 0x200000
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define L3_RRM_P (0x00020000)
#define L3_RRM_Q (0x00010000)
#define L3_RRM_S (0x10000000)
#define __INT_LEAST32_WIDTH__ 32
#define L3_RRM_Y (0x00000004)
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define F_PUNT 0x2000
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define SBR_PAIR(cond,op,r) GENERIC_PAIR(L3_SBR_MASK, L3_SBR|L3_SBR_COND(cond)|L3_SBR_OP(op)|((r)?L3_SBR_R:0))
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
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define LONG_DOUBLE long double
#define __STDC__ 1
#define PARAMS(ARGS) ARGS
#define __PTRDIFF_TYPE__ long int
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define stdin __stdinp
#define L3_POPC (0xc0000003)
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define __WATCHOS_AVAILABLE(_vers) 
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define _SSIZE_T 
#define __SNBF 0x0002
#define __TVOS_10_0_1 100001
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define L3_RR_OP(x) (((x)&L3_OP_MASK) << 8)
#define X_RRR_OP1(i) X_OP1(i)
#define L3_PUNT_OPCODE_MASK (0xf003ff47)
#define __enum_closed 
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define L3_SBR_R (0x00000002)
#define __enum_open 
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define L3_MI 11
#define L3_SPLS_E (0x00001000)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define L3_SPLS_Y (0x00004000)
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define _U_INT16_T 
#define __P(protos) protos
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define F_FULL 0x00000
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
