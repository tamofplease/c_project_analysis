#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define __UINT_LEAST16_MAX__ 0xffff
#define __FLT128_MAX_10_EXP__ 4932
#define ARCH_FEATURE_BTI ((uint64_t)1<<1)
#define HaveFJCVTZSExt() (ctx->features1 & ARCH_FEATURE_FJCVTZSExt)
#define _T_WCHAR_ 
#define HasSPE() (ctx->features0 & ARCH_FEATURE_SPE)
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __INT_FAST8_TYPE__ signed char
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __API_UNAVAILABLE_BEGIN(...) 
#define HaveBF16Ext() (ctx->features1 & ARCH_FEATURE_BF16Ext)
#define OPTIONAL_EXTEND_AMOUNT_32(EXCEPTIONAL_REG) ShiftType st = DecodeRegExtend(ctx->option); if(st == ShiftType_UXTW) { if(EXCEPTIONAL_REG==31 && ctx->imm3 != 0) { st = ShiftType_LSL; } } instr->operands[i-1].shiftType = st; instr->operands[i-1].shiftValue = ctx->shift; if(ctx->shift) { instr->operands[i-1].shiftValueUsed = 1; }
#define ADD_OPERAND_SA ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->a);
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define ADD_OPERAND_SD ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->d);
#define __INT32_C(c) c
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define ADD_OPERAND_NZCV ADD_OPERAND_IMM32(ctx->nzcv, 0)
#define __FLT32X_DECIMAL_DIG__ 17
#define __PIC__ 2
#define __IOS_PROHIBITED 
#define OPTIONAL_SHIFT_AMOUNT if(!(ctx->shift_type==1 && ctx->shift_amount==0)) { instr->operands[i-1].shiftType = ctx->shift_type; instr->operands[i-1].shiftValue = ctx->shift_amount; instr->operands[i-1].shiftValueUsed = 1; } else { instr->operands[i-1].shiftValueUsed = 0; }
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define __x86_64 1
#define __DARWIN_SUF_1050 "$1050"
#define __INT_LEAST8_WIDTH__ 8
#define ADD_OPERAND_SYSTEMREG_SENSE { SystemReg sr = ((ctx->sys_op0<<14)|(ctx->sys_op1<<11)|(ctx->sys_crn<<7)|(ctx->sys_crm<<3)|ctx->sys_op2); const char *name = get_system_register_name(sr); if(name[0]) { ADD_OPERAND_SYSTEMREG(sr); } else { ADD_OPERAND_SYSTEMREG_IMPL_SPEC; } }
#define bool _Bool
#define LAST_OPERAND_LSL_12 LAST_OPERAND_SHIFT(ShiftType_LSL, 12)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define __DBL_MIN_10_EXP__ (-307)
#define ADD_OPERAND_OPTIONAL_PATTERN_MUL { bool print_mul = ctx->imm != 1; bool print_pattern = print_mul || ctx->pattern != 0x1f; if(print_pattern) { ADD_OPERAND_PATTERN; } if(print_mul) { ADD_OPERAND_STR_IMM("mul", ctx->imm); } }
#define __cold __attribute__((__cold__))
#define HaveSelfHostedTrace() (ctx->features1 & ARCH_FEATURE_SelfHostedTrace)
#define ARCH_FEATURE_PAuth ((uint64_t)1<<20)
#define __FLT32_HAS_DENORM__ 1
#define HaveFlagFormatExt() (ctx->features1 & ARCH_FEATURE_FlagFormatExt)
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __UINT_FAST8_MAX__ 0xff
#define ARCH_FEATURE_DITExt ((uint64_t)1<<7)
#define _WCHAR_T_DEFINED 
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __PTHREAD_CONDATTR_SIZE__ 8
#define ADD_OPERAND_XT1 ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->t);
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define ADD_OPERAND_XT2 ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->t2);
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define _ERRNO_T 
#define ZeroExtend(X,Y) (uint64_t)(X)
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ARCH_FEATURE_SVEFP64MatMulExt ((uint64_t)1<<43)
#define OPTIONAL_EXTEND_AMOUNT(SPECIAL_LSL) instr->operands[i-1].shiftType = ctx->extend_type; instr->operands[i-1].shiftValue = ctx->shift; if(ctx->option == SPECIAL_LSL) { if(ctx->shift) { instr->operands[i-1].shiftType = ShiftType_LSL; instr->operands[i-1].shiftValueUsed = 1; } else instr->operands[i-1].shiftType = ShiftType_NONE; } else { instr->operands[i-1].shiftValueUsed = ctx->shift ? 1 : 0; }
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define UINT(x) (unsigned int)(x)
#define __UINTMAX_TYPE__ long unsigned int
#define __unavailable 
#define _1H ARRSPEC_1HALF
#define HasLS64_V() (ctx->features0 & ARCH_FEATURE_LS64_V)
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define ADD_OPERAND_LSB ADD_OPERAND_IMM32(lsb, 0)
#define __PTHREAD_MUTEX_SIZE__ 56
#define REG_W_BASE 0
#define __TVOS_9_0 90000
#define __TVOS_9_2 90200
#define __FLT128_MIN_EXP__ (-16381)
#define __IPHONE_12_0 120000
#define UINT16_C(v) (v)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define ARCH_FEATURE_LS64 ((uint64_t)1<<15)
#define __INT_LEAST16_WIDTH__ 16
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __INT64_C(c) c ## LL
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define HasWFxT() (ctx->features0 & ARCH_FEATURE_WFxT)
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define __SIZEOF_INT__ 4
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __USER_LABEL_PREFIX__ _
#define EL2 2
#define EL3 3
#define _UINT8_T 
#define HaveAtomicExt() (ctx->features1 & ARCH_FEATURE_AtomicExt)
#define __MAC_10_5 1050
#define __MAC_10_7 1070
#define HasRAS() (ctx->features0 & ARCH_FEATURE_RAS)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define ARCH_FEATURE_XS ((uint64_t)1<<31)
#define __FLT32_DIG__ 6
#define __MAC_10_9 1090
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WATCHOS_PROHIBITED 
#define __FLT32_IS_IEC_60559__ 2
#define __GNUC__ 11
#define HasRDM() (ctx->features0 & ARCH_FEATURE_RDM)
#define HaveTLBIRANGE() (1)
#define HasMTE2() (ctx->features0 & ARCH_FEATURE_MTE2)
#define HasPAuth() (ctx->features0 & ARCH_FEATURE_PAuth)
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define HaveSHA3Ext() (ctx->features1 & ARCH_FEATURE_SHA3Ext)
#define __API_AVAILABLE_GET_MACRO(...) 
#define __IPHONE_13_4 130400
#define __abortlike __dead2 __cold __not_tail_called
#define HasFlagM() (ctx->features0 & ARCH_FEATURE_FlagM)
#define __strong 
#define FPCR_GET_Stride(X) SLICE(X,21,20)
#define __IPHONE_13_7 130700
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __FLT32X_HAS_INFINITY__ 1
#define ADD_OPERAND_MULTIREG_4(REG_BASE,ARR_SPEC,REGNUM) ; instr->operands[i].operandClass = MULTI_REG; instr->operands[i].reg[0] = REG(REGSET_ZR, REG_BASE, REGNUM); instr->operands[i].reg[1] = REG(REGSET_ZR, REG_BASE, (REGNUM+1)%32); instr->operands[i].reg[2] = REG(REGSET_ZR, REG_BASE, (REGNUM+2)%32); instr->operands[i].reg[3] = REG(REGSET_ZR, REG_BASE, (REGNUM+3)%32); instr->operands[i].arrSpec = ARR_SPEC; i++;
#define ARCH_FEATURE_BF16Ext ((uint64_t)1<<2)
#define __INT32_MAX__ 0x7fffffff
#define ADD_OPERAND_MULTIREG_2_LANE(REG_BASE,ARR_SPEC,REGNUM) ; ADD_OPERAND_MULTIREG_2(REG_BASE, ARR_SPEC, REGNUM); instr->operands[i-1].laneUsed = 1; instr->operands[i-1].lane = ctx->index;
#define __INT_WIDTH__ 32
#define __SSE__ 1
#define __DECIMAL_DIG__ 21
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define NOT(X,X_WIDTH) ((X) ^ BITMASK(X_WIDTH))
#define __FLT128_IS_IEC_60559__ 2
#define HaveBTIExt() (ctx->features1 & ARCH_FEATURE_BTIExt)
#define PTRDIFF_MAX INTMAX_MAX
#define ADD_OPERAND_WN_SP ADD_OPERAND_REG(REGSET_SP, REG_W_BASE, ctx->n);
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SEG_FS 1
#define ARCH_FEATURE_CRCExt ((uint64_t)1<<5)
#define MAC_OS_X_VERSION_10_11_4 101104
#define ADD_OPERAND_DD ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->d);
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define UNDEFINED { return DECODE_STATUS_UNDEFINED; }
#define __MMX__ 1
#define FPCR_GET_DZE(X) SLICE(X,9,9)
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define HaveSHA512Ext() (ctx->features1 & ARCH_FEATURE_SHA512Ext)
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define HaveSVEFP64MatMulExt() (ctx->features1 & ARCH_FEATURE_SVEFP64MatMulExt)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __BIGGEST_ALIGNMENT__ 16
#define REGSET_SP 0
#define PTRDIFF_MIN INTMAX_MIN
#define __DARWIN_ONLY_VERS_1050 0
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __FLT64_MAX_10_EXP__ 308
#define SInt(X,X_WIDTH) SignExtend((X),(X_WIDTH))
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define ADD_OPERAND_WA ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->a);
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define ARCH_FEATURE_RAS ((uint64_t)1<<21)
#define __INT_FAST32_MAX__ 0x7fffffff
#define __MAC_10_15_1 101501
#define UINTPTR_MAX 18446744073709551615UL
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define HaveQRDMLAHExt() (ctx->features1 & ARCH_FEATURE_QRDMLAHExt)
#define FPCR_UFE ((uint64_t)1 << 11)
#define ARCH_FEATURE_RDM ((uint64_t)1<<22)
#define _INT16_T 
#define __INTPTR_WIDTH__ 64
#define ADD_OPERAND_DT ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->t);
#define ADD_OPERAND_WT_PLUS_1 ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, (ctx->t+1)%32);
#define REG(SP_OR_ZR,REG_BASE,REG_NUM) regMap[(SP_OR_ZR)][(REG_BASE)][(REG_NUM)]
#define ADD_OPERAND_STR_IMM(STRING,VALUE) instr->operands[i].operandClass = STR_IMM; instr->operands[i].immediate = VALUE; instr->operands[i].signedImm = 0; strcpy(instr->operands[i].name, STRING); i++;
#define __DARWIN_SUF_NON_CANCELABLE 
#define __LDBL_HAS_DENORM__ 1
#define ARCH_FEATURE_QRDMLAHExt ((uint64_t)1<<25)
#define _GCC_WRAP_STDINT_H 
#define __weak 
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define ARCH_FEATURE_FlagManipulateExt ((uint64_t)1<<17)
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ADD_OPERAND_ZREG_T(REGNUM,ARR_SPEC) ADD_OPERAND_REG_T(REG_Z_BASE, ARR_SPEC, REGNUM)
#define DECODE_STATUS_UNDEFINED -4
#define ADD_OPERAND_WS ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->s);
#define HaveSVE() (ctx->features1 & ARCH_FEATURE_SVE)
#define __tune_core2__ 1
#define __ATOMIC_HLE_ACQUIRE 65536
#define _UINT32_T 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define ARCH_FEATURE_SVEFP32MatMulExt ((uint64_t)1<<42)
#define __kpi_deprecated_arm64_macos_unavailable 
#define HasBF16() (ctx->features0 & ARCH_FEATURE_BF16)
#define __SIG_ATOMIC_WIDTH__ 32
#define ADD_OPERAND_IMM2 ADD_OPERAND_IMM32(imm2, 0)
#define __WATCHOS_5_2 50200
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define ADD_OPERAND_IMM8 ADD_OPERAND_IMM32(imm8, 0)
#define __INT32_TYPE__ int
#define _PTRDIFF_T 
#define __IDSTRING(name,string) static const char name[] __used = string
#define UINT32_C(v) (v ## U)
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define HasLRCPC2() (ctx->features0 & ARCH_FEATURE_LRCPC2)
#define INT64_MAX 9223372036854775807LL
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ADD_OPERAND_IMM32(VALUE,SIGNED) instr->operands[i].operandClass = IMM32; instr->operands[i].signedImm = SIGNED; instr->operands[i].immediate = VALUE; i++;
#define _USE_FORTIFY_LEVEL 2
#define EncodingLabeled64Bit() (encoding64)
#define ADD_OPERAND_XM ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->m);
#define __WINT_WIDTH__ 32
#define ADD_OPERAND_XN ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->n);
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define ADD_OPERAND_MEM_EXTENDED(BASE,REGNUM0,REGNUM1) instr->operands[i].operandClass = MEM_EXTENDED; instr->operands[i].reg[0] = REG(REGSET_SP, REG_X_BASE, REGNUM0); instr->operands[i].reg[1] = REG(REGSET_ZR, BASE, REGNUM1); i++;
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define ADD_OPERAND_XM_SP ADD_OPERAND_REG(REGSET_SP, REG_X_BASE, ctx->m);
#define _ANSI_STDDEF_H 
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __SIZEOF_DOUBLE__ 8
#define HaveBit128PMULLExt() (ctx->features1 & ARCH_FEATURE_Bit128PMULLExt)
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define MAX_OPERANDS 5
#define __LP64__ 1
#define ADD_OPERAND_MULTIREG_4_LANE(REG_BASE,ARR_SPEC,REGNUM) ; ADD_OPERAND_MULTIREG_4(REG_BASE, ARR_SPEC, REGNUM) instr->operands[i-1].laneUsed = 1; instr->operands[i-1].lane = ctx->index;
#define __deprecated_enum_msg(_msg) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define ADD_OPERAND_MEM_XN_SP ADD_OPERAND_MEM_REG(REGSET_SP, REG_X_BASE, ctx->n);
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __SPI_AVAILABLE(...) 
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define REG_P_BASE 9
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __INTMAX_WIDTH__ 64
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define ADD_OPERAND_QD ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->d);
#define __FLT_IS_IEC_60559__ 2
#define ADD_OPERAND_IMM64(VALUE,SIGNED) instr->operands[i].operandClass = IMM64; instr->operands[i].signedImm = SIGNED; instr->operands[i].immediate = VALUE; i++;
#define ARCH_FEATURE_SM3Ext ((uint64_t)1<<32)
#define _4S ARRSPEC_4SINGLES
#define UNREACHABLE { return DECODE_STATUS_UNREACHABLE; }
#define REG_X_BASE 1
#define ARCH_FEATURE_RASExt ((uint64_t)1<<26)
#define __FLT_MANT_DIG__ 24
#define __VERSION__ "11.2.0"
#define ARCH_FEATURE_StatisticalProfiling ((uint64_t)1<<45)
#define HasSHA512() (ctx->features0 & ARCH_FEATURE_SHA512)
#define __UINT64_C(c) c ## ULL
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define ADD_OPERAND_WM_SP ADD_OPERAND_REG(REGSET_SP, REG_W_BASE, ctx->m);
#define ADD_OPERAND_CONST ADD_OPERAND_IMM64(const_, 0)
#define ARCH_FEATURE_DGH ((uint64_t)1<<2)
#define __INT_WCHAR_T_H 
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define __TVOS_11_4 110400
#define ADD_OPERAND_COND_NEG instr->operands[i].operandClass = CONDITION; instr->operands[i].cond = table_cond_neg[ctx->condition]; i++;
#define __FLT32_MANT_DIG__ 24
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __WATCHOS_3_0 30000
#define _INTMAX_T 
#define ADD_OPERAND_XD ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->d);
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define HasSM3() (ctx->features0 & ARCH_FEATURE_SM3)
#define HasSM4() (ctx->features0 & ARCH_FEATURE_SM4)
#define __IOS_UNAVAILABLE 
#define FPCR_GET_FZ16(X) SLICE(X,19,19)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define ADD_OPERAND_WDN ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->dn);
#define __ORDER_PDP_ENDIAN__ 3412
#define _2S ARRSPEC_2SINGLES
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define __MAC_11_3 110300
#define __DARWIN_NO_LONG_LONG 0
#define UINT64_MAX 18446744073709551615ULL
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __INT_FAST8_MAX__ 0x7f
#define HaveAESExt() (ctx->features1 & ARCH_FEATURE_AESExt)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __MAC_10_15_4 101504
#define __FLT64X_HAS_INFINITY__ 1
#define __INT16_MAX__ 0x7fff
#define __SIZE_TYPE__ long unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT8_TYPE__ signed char
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define DECODE_STATUS_UNMATCHED -2
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define ARCH_FEATURE_FeatLS64 ((uint64_t)1<<13)
#define HaveNVExt() (ctx->features1 & ARCH_FEATURE_NVExt)
#define TRUE true
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define ADD_OPERAND_FIMM ADD_OPERAND_FLOAT32(fimm)
#define HaveSVE2SM4() (ctx->features1 & ARCH_FEATURE_SVE2SM4)
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define ARCH_FEATURE_NVExt ((uint64_t)1<<22)
#define ARCH_FEATURE_SHA3 ((uint64_t)1<<23)
#define __SSE_MATH__ 1
#define HaveUAOExt() (ctx->features1 & ARCH_FEATURE_UAOExt)
#define ARCH_FEATURE_LRCPC ((uint64_t)1<<13)
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define __API_TO_BE_DEPRECATED 100000
#define __TVOS_14_5 140500
#define ADD_OPERAND_FLOAT32(VALUE) instr->operands[i].operandClass = FIMM32; ImmFloatUnion *ifu = (ImmFloatUnion *)&(instr->operands[i].immediate); ifu->ui = VALUE; i++;
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define HasLOR() (ctx->features0 & ARCH_FEATURE_LOR)
#define INTPTR_MIN (-INTPTR_MAX-1)
#define INT8_C(v) (v)
#define ADD_OPERAND_MEM_EXTENDED_T(BASE0,REGNUM0,BASE1,REGNUM1,ARR_SPEC) instr->operands[i].operandClass = MEM_EXTENDED; instr->operands[i].reg[0] = REG(REGSET_SP, BASE0, REGNUM0); instr->operands[i].reg[1] = REG(REGSET_ZR, BASE1, REGNUM1); instr->operands[i].arrSpec = ARR_SPEC; i++;
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __nullable 
#define __FLT32X_MIN_EXP__ (-1021)
#define __INT_FAST16_MAX__ 0x7fff
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define ARCH_FEATURE_FlagM ((uint64_t)1<<8)
#define FPCR_GET_RMode(X) SLICE(X,23,22)
#define HasLSE() (ctx->features0 & ARCH_FEATURE_LSE)
#define INT_LEAST64_MIN INT64_MIN
#define __FLT64_DIG__ 15
#define ARCH_FEATURE_SPE ((uint64_t)1<<27)
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define HasFRINTTS() (ctx->features0 & ARCH_FEATURE_FRINTTS)
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define ADD_OPERAND_MEM_EXTENDED_T_SHIFT(BASE0,REGNUM0,SZ0,BASE1,REGNUM1,SZ1,SHIFT_TYPE,SHIFT_AMT,SHIFT_USED) instr->operands[i].operandClass = MEM_EXTENDED; instr->operands[i].reg[0] = REG(REGSET_SP, BASE0, REGNUM0); instr->operands[i].reg[1] = REG(REGSET_ZR, BASE1, REGNUM1); instr->operands[i].arrSpec = SZ1; instr->operands[i].shiftType = SHIFT_TYPE; instr->operands[i].shiftValue = SHIFT_AMT; instr->operands[i].shiftValueUsed = SHIFT_USED; i += 1;
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define __kpi_deprecated(_msg) 
#define ARCH_FEATURE_LS64_V ((uint64_t)1<<16)
#define FPCR_OFE ((uint64_t)1 << 10)
#define ARCH_FEATURE_SVE ((uint64_t)1<<35)
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __INT_LEAST16_MAX__ 0x7fff
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __INT_LEAST64_TYPE__ long long int
#define __INT16_TYPE__ short int
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define FPCR_RMode (uint64_t)0xC00000
#define OPTIONAL_EXTEND_AMOUNT_0 instr->operands[i-1].shiftType = ctx->extend_type; instr->operands[i-1].shiftValue = 0; instr->operands[i-1].shiftValueUsed = ctx->S ? 1 : 0;
#define HaveFeatXS() (ctx->features1 & ARCH_FEATURE_FeatXS)
#define _4H ARRSPEC_4HALVES
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define _MACHTYPES_H_ 
#define __TVOS_13_2 130200
#define __TVOS_13_0 130000
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define __swift_compiler_version_at_least(...) 1
#define ARCH_FEATURE_FRINTTS ((uint64_t)1<<7)
#define __SWIFT_UNAVAILABLE 
#define __LITTLE_ENDIAN__ 1
#define ABCDEFGH ((ctx->a<<7)|(ctx->b<<6)|(ctx->c<<5)|(ctx->d<<4)|(ctx->e<<3)|(ctx->f<<2)|(ctx->g<<1)|ctx->h)
#define HaveSHA256Ext() (ctx->features1 & ARCH_FEATURE_SHA256Ext)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32X_DIG__ 15
#define ARCH_FEATURE_SHA1Ext ((uint64_t)1<<28)
#define __WORDSIZE 64
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __CONSTANT_CFSTRINGS__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define CONCAT(A,B,B_WIDTH) (((A)<<(B_WIDTH))|(B))
#define __FLT64X_IS_IEC_60559__ 2
#define __code_model_small__ 1
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define HaveFeatWFxT() (ctx->features1 & ARCH_FEATURE_FeatWFxT)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define __WCHAR_TYPE__ int
#define __SIZEOF_FLOAT__ 4
#define __API_UNAVAILABLE_END 
#define HaveRASExt() (ctx->features1 & ARCH_FEATURE_RASExt)
#define _SECURE__STRINGS_H_ 
#define ARCH_FEATURE_LSE ((uint64_t)1<<17)
#define HasLRCPC() (ctx->features0 & ARCH_FEATURE_LRCPC)
#define ADD_OPERAND_IMM6 ADD_OPERAND_IMM32(imm6, 0)
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define _WCHAR_T_DECLARED 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define FPCR_AHP ((uint64_t)1 << 26)
#define __MACH__ 1
#define __amd64__ 1
#define HavePANExt() (ctx->features1 & ARCH_FEATURE_PANExt)
#define _UINT16_T 
#define ARCH_FEATURE_SVE2AES ((uint64_t)1<<37)
#define EncodingLabeled32Bit() (encoding32)
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define ADD_OPERAND_MULTIREG_3(REG_BASE,ARR_SPEC,REGNUM) ; instr->operands[i].operandClass = MULTI_REG; instr->operands[i].reg[0] = REG(REGSET_ZR, REG_BASE, REGNUM); instr->operands[i].reg[1] = REG(REGSET_ZR, REG_BASE, (REGNUM+1)%32); instr->operands[i].reg[2] = REG(REGSET_ZR, REG_BASE, (REGNUM+2)%32); instr->operands[i].arrSpec = ARR_SPEC; i++;
#define __FLT_MAX_EXP__ 128
#define __swift_unavailable(_msg) 
#define _RSIZE_T 
#define ADD_OPERAND_MEM_POST_INDEX_REG(REGSET,BASE,REGNUM,REG_PIDX) instr->operands[i].operandClass = MEM_POST_IDX; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); instr->operands[i].reg[1] = REG(REGSET_ZR, REG_X_BASE, REG_PIDX);
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define UINT_FAST64_MAX UINT64_MAX
#define __UINT_LEAST32_TYPE__ unsigned int
#define ADD_OPERAND_XN_SP ADD_OPERAND_REG(REGSET_SP, REG_X_BASE, ctx->n);
#define __LDBL_MIN_EXP__ (-16381)
#define __pic__ 2
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __INT_LEAST8_MAX__ 0x7f
#define _1B ARRSPEC_1BYTE
#define _1D ARRSPEC_1DOUBLE
#define _1S ARRSPEC_1SINGLE
#define __FLT32X_MAX_10_EXP__ 308
#define ARCH_FEATURE_WFxT ((uint64_t)1<<30)
#define _2D ARRSPEC_2DOUBLES
#define _2H ARRSPEC_2HALVES
#define FPCR_GET_Len(X) SLICE(X,18,16)
#define __signed signed
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define _4B ARRSPEC_4BYTES
#define HaveFCADDExt() (ctx->features1 & ARCH_FEATURE_FCADDExt)
#define _LP64 1
#define HasTME() (ctx->features0 & ARCH_FEATURE_TME)
#define __UINT8_C(c) c
#define __FLT64_MAX_EXP__ 1024
#define ADD_OPERAND_XT_SP ADD_OPERAND_REG(REGSET_SP, REG_X_BASE, ctx->t);
#define __API_UNAVAILABLE(...) 
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define ADD_OPERAND_XDN ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->Rdn);
#define _8H ARRSPEC_8HALVES
#define __SIZE_WIDTH__ 64
#define __FLT128_HAS_QUIET_NAN__ 1
#define HavePACExt() (ctx->features1 & ARCH_FEATURE_PACExt)
#define __TVOS_11_3 110300
#define ARCH_FEATURE_SM4Ext ((uint64_t)1<<33)
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __wchar_t__ 
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define __DBL_MAX_10_EXP__ 308
#define __FLT64_HAS_DENORM__ 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DEC_EVAL_METHOD__ 2
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define ARCH_FEATURE_MTE2 ((uint64_t)1<<19)
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define ARCH_FEATURE_I8MM ((uint64_t)1<<10)
#define ARCH_FEATURE_PANExt ((uint64_t)1<<24)
#define FPCR_GET_UFE(X) SLICE(X,11,11)
#define __ORDER_BIG_ENDIAN__ 4321
#define ARCH_FEATURE_DotProd ((uint64_t)1<<3)
#define __UINT32_C(c) c ## U
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define INTMAX_MIN (-INTMAX_MAX-1)
#define _1Q ARRSPEC_FULL
#define __INT8_MAX__ 0x7f
#define INT_FAST16_MAX INT16_MAX
#define __UINT_FAST32_TYPE__ unsigned int
#define ARCH_FEATURE_TRF ((uint64_t)1<<29)
#define ARCH_FEATURE_Int8MatMulExt ((uint64_t)1<<19)
#define HaveSM4Ext() (ctx->features1 & ARCH_FEATURE_SM4Ext)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define INT(x) (signed int)(x)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __STDC_VERSION__ 201710L
#define INT_FAST64_MAX INT64_MAX
#define __SSE2__ 1
#define __API_AVAILABLE_BEGIN(...) 
#define ADD_OPERAND_QDN ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->n);
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __INT_LEAST32_WIDTH__ 32
#define ARCH_FEATURE_TME ((uint64_t)1<<28)
#define __API_DEPRECATED_BEGIN(...) 
#define __DRIVERKIT_20_0 200000
#define FPCR_DN ((uint64_t)1 << 25)
#define UINT8_C(v) (v)
#define __FLT32X_HAS_QUIET_NAN__ 1
#define FPCR_FZ ((uint64_t)1 << 24)
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define HasMTE() (ctx->features0 & ARCH_FEATURE_MTE)
#define USER_ADDR_NULL ((user_addr_t) 0)
#define INT_FAST64_MIN INT64_MIN
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define __INT16_C(c) c
#define FPCR_IDE ((uint64_t)1 << 15)
#define __STDC__ 1
#define ADD_OPERAND_XDN_SP ADD_OPERAND_REG(REGSET_SP, REG_X_BASE, ctx->n);
#define __PTRDIFF_TYPE__ long int
#define __PTHREAD_COND_SIZE__ 40
#define __UINTPTR_TYPE__ long unsigned int
#define HasFHM() (ctx->features0 & ARCH_FEATURE_FHM)
#define DECODE_STATUS_RESERVED -1
#define _SSIZE_T 
#define __LDBL_MIN_10_EXP__ (-4931)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __DARWIN_C_FULL 900000L
#define DECODE_STATUS_ASSERT_FAILED -8
#define __DARWIN_NON_CANCELABLE 0
#define ADD_OPERAND_QT1 ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->t);
#define ADD_OPERAND_QT2 ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->t2);
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define DECODE_STATUS_END_OF_INSTRUCTION -5
#define __MAC_10_10 101000
#define __MAC_10_12 101200
#define __FLT_DECIMAL_DIG__ 9
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _8B ARRSPEC_8BYTES
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __FLT_MIN_10_EXP__ (-37)
#define FPCR_IOE ((uint64_t)1 << 8)
#define _U_INT32_T 
#define __INT_LEAST64_WIDTH__ 64
#define INT_LEAST16_MAX INT16_MAX
#define __UINT_FAST8_TYPE__ unsigned char
#define ARCH_FEATURES_ALL 0xFFFFFFFFFFFFFFFF
#define __P(protos) protos
#define HaveTLBIOS() (1)
#define __IPHONE_8_2 80200
#define HaveSVE2PMULL128() (ctx->features1 & ARCH_FEATURE_SVE2PMULL128)
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_3 90300
#define __ATOMIC_RELEASE 3
#define _T_WCHAR 
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define __enum_open 
#define __FLT32X_MAX_EXP__ 1024
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define _PTRDIFF_T_ 
#define __unused __attribute__((__unused__))
#define _STDBOOL_H 
#define __ATOMIC_ACQUIRE 2
#define ARCH_FEATURE_FlagFormatExt ((uint64_t)1<<16)
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define ARCH_FEATURE_BF16 ((uint64_t)1<<0)
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define INT_LEAST16_MIN INT16_MIN
#define FPCR_IXE ((uint64_t)1 << 12)
#define HaveDGHExt() (ctx->features1 & ARCH_FEATURE_DGHExt)
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define ARCH_FEATURE_MTE ((uint64_t)1<<18)
#define __INTMAX_C(c) c ## L
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
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __UINT8_MAX__ 0xff
#define INT16_C(v) (v)
#define ADD_OPERAND_MULTIREG_1(REG_BASE,ARR_SPEC,REGNUM) ; instr->operands[i].operandClass = MULTI_REG; instr->operands[i].reg[0] = REG(REGSET_ZR, REG_BASE, REGNUM); instr->operands[i].arrSpec = ARR_SPEC; i++;
#define ADD_OPERAND_MULTIREG_2(REG_BASE,ARR_SPEC,REGNUM) ; instr->operands[i].operandClass = MULTI_REG; instr->operands[i].reg[0] = REG(REGSET_ZR, REG_BASE, REGNUM); instr->operands[i].reg[1] = REG(REGSET_ZR, REG_BASE, (REGNUM+1)%32); instr->operands[i].arrSpec = ARR_SPEC; i++;
#define __WINT_MAX__ 0x7fffffff
#define ADD_OPERAND_HM ADD_OPERAND_REG(REGSET_ZR, REG_H_BASE, ctx->m);
#define ADD_OPERAND_PRED_REG_QUAL(REGNUM,QUALIFIER) ADD_OPERAND_PRED_REG(REGNUM); instr->operands[i-1].pred_qual = QUALIFIER;
#define __FLT32_MIN_EXP__ (-125)
#define INT8_MAX 127
#define UINT_LEAST64_MAX UINT64_MAX
#define _CDEFS_H_ 
#define __FLT128_MANT_DIG__ 113
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define FPCR_GET_OFE(X) SLICE(X,10,10)
#define REG_V_BASE 2
#define __WCHAR_MAX__ 0x7fffffff
#define INT16_MAX 32767
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define __FLT_EVAL_METHOD__ 0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FXSR__ 1
#define __FLT64_DECIMAL_DIG__ 17
#define __disable_tail_calls 
#define HasSHA3() (ctx->features0 & ARCH_FEATURE_SHA3)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define HaveSBExt() (ctx->features1 & ARCH_FEATURE_SBExt)
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define INT16_MIN -32768
#define __FINITE_MATH_ONLY__ 0
#define ARCH_FEATURE_SBExt ((uint64_t)1<<27)
#define __SCHAR_MAX__ 0x7f
#define __SPI_DEPRECATED(...) 
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MAX INT8_MAX
#define ADD_OPERAND_VREG_T(REGNUM,ARR_SPEC) ADD_OPERAND_REG_T(REG_V_BASE, ARR_SPEC, REGNUM)
#define FPCR_GET_AHP(X) SLICE(X,26,26)
#define HasFCMA() (ctx->features0 & ARCH_FEATURE_FCMA)
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define INDEX ctx->index
#define REG_B_BASE 3
#define __restrict restrict
#define __SHRT_MAX__ 0x7fff
#define ARCH_FEATURE_FHM ((uint64_t)1<<5)
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __FLT64X_MAX_10_EXP__ 4932
#define HaveSVE2SHA3() (ctx->features1 & ARCH_FEATURE_SVE2SHA3)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define ARCH_FEATURE_SSBSExt ((uint64_t)1<<34)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define __APPLE_CC__ 1
#define ARCH_FEATURE_JSCVT ((uint64_t)1<<11)
#define INT_FAST8_MIN INT8_MIN
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __LDBL_MAX_EXP__ 16384
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define UINT_FAST16_MAX UINT16_MAX
#define ADD_OPERAND_MULTIREG_1_LANE(REG_BASE,ARR_SPEC,REGNUM) ; ADD_OPERAND_MULTIREG_1(REG_BASE, ARR_SPEC, REGNUM); instr->operands[i-1].laneUsed = 1; instr->operands[i-1].lane = ctx->index;
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define FPCR_Stride (uint64_t)0x300000
#define HaveDITExt() (ctx->features1 & ARCH_FEATURE_DITExt)
#define ADD_OPERAND_COND instr->operands[i].operandClass = CONDITION; instr->operands[i].cond = table_cond[ctx->condition]; i++;
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define DECODE_STATUS_OK 0
#define MAX_NAME 16
#define HasI8MM() (ctx->features0 & ARCH_FEATURE_I8MM)
#define ARCH_FEATURE_SHA512 ((uint64_t)1<<24)
#define __result_use_check __attribute__((__warn_unused_result__))
#define __SIZEOF_WINT_T__ 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define ARCH_FEATURE_FP16MulNoRoundingToFP32Ext ((uint64_t)1<<12)
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define ARCH_FEATURE_FP16Ext ((uint64_t)1<<11)
#define ADD_OPERAND_WT1 ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->t);
#define ARCH_FEATURE_BTIExt ((uint64_t)1<<3)
#define _FORTIFY_SOURCE 2
#define ARCH_FEATURE_LRCPC2 ((uint64_t)1<<14)
#define ARCH_FEATURE_FP16 ((uint64_t)1<<6)
#define Halted() ctx->halted
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define HaveTME() (ctx->features1 & ARCH_FEATURE_TME)
#define ADD_OPERAND_MEM_POST_INDEX(REGSET,BASE,REGNUM,OFFSET) instr->operands[i].operandClass = MEM_POST_IDX; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); instr->operands[i].immediate = OFFSET; instr->operands[i].signedImm = 1;
#define UNMATCHED { return DECODE_STATUS_UNMATCHED; }
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __END_DECLS 
#define ADD_OPERAND_PRED_REG(REGNUM) ADD_OPERAND_REG(REGSET_ZR, REG_P_BASE, REGNUM);
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define ADD_OPERAND_ZREG_T_LANE(REGNUM,ARR_SPEC,INDEX_VALUE) ADD_OPERAND_ZREG_T(REGNUM, ARR_SPEC) instr->operands[i-1].lane = INDEX_VALUE; instr->operands[i-1].laneUsed = 1;
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __STDC_HOSTED__ 1
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define ADD_OPERAND_XT_PLUS_1 ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, (ctx->t+1)%32);
#define __DBL_DIG__ 15
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define _U_INT64_T 
#define __SHRT_WIDTH__ 16
#define ARCH_FEATURE_FeatWFxT ((uint64_t)1<<14)
#define __TVOS_9_1 90100
#define _Nonnull 
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define ARCH_FEATURE_SHA256Ext ((uint64_t)1<<29)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define _WCHAR_T_ 
#define __MAC_10_0 1000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define REGSET_ZR 1
#define _STDDEF_H 
#define __LONG_MAX__ 0x7fffffffffffffffL
#define ADD_OPERAND_NAME(VALUE) instr->operands[i].operandClass = NAME; strcpy(instr->operands[i].name, VALUE); i++;
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __LONG_LONG_WIDTH__ 64
#define __AVAILABILITY_VERSIONS__ 
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define ADD_OPERAND_HT ADD_OPERAND_REG(REGSET_ZR, REG_H_BASE, ctx->t);
#define __AVAILABILITY_INTERNAL_REGULAR 
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define _SYS__TYPES_H_ 
#define ARCH_FEATURE_SVE2BitPerm ((uint64_t)1<<38)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define ADD_OPERAND_BT ADD_OPERAND_REG(REGSET_ZR, REG_B_BASE, ctx->t);
#define ADD_OPERAND_LABEL instr->operands[i].operandClass = LABEL; instr->operands[i].immediate = eaddr; i++;
#define ADD_OPERAND_WT_SP ADD_OPERAND_REG(REGSET_SP, REG_W_BASE, ctx->n);
#define ADD_OPERAND_DA ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->a);
#define ADD_OPERAND_DM ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->m);
#define ADD_OPERAND_DN ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->n);
#define UNALLOCATED(X) {dec->encoding = (X); return DECODE_STATUS_UNALLOCATED; }
#define ADD_OPERAND_WD_SP ADD_OPERAND_REG(REGSET_SP, REG_W_BASE, ctx->d);
#define HasJSCVT() (ctx->features0 & ARCH_FEATURE_JSCVT)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define HaveDCPoP() (1)
#define __FLT64_MANT_DIG__ 53
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT64X_MANT_DIG__ 64
#define ADD_OPERAND_HA ADD_OPERAND_REG(REGSET_ZR, REG_H_BASE, ctx->a);
#define ADD_OPERAND_HD ADD_OPERAND_REG(REGSET_ZR, REG_H_BASE, ctx->d);
#define ADD_OPERAND_HN ADD_OPERAND_REG(REGSET_ZR, REG_H_BASE, ctx->n);
#define _T_PTRDIFF 
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __LDBL_DIG__ 18
#define DECODE_STATUS_UNALLOCATED -3
#define INT_FAST16_MIN INT16_MIN
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define __WATCHOS_2_1 20100
#define REG_D_BASE 6
#define ARCH_FEATURE_AtomicExt ((uint64_t)1<<1)
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _GCC_WCHAR_T 
#define __DBL_HAS_INFINITY__ 1
#define _T_PTRDIFF_ 
#define ADD_OPERAND_QA ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->a);
#define RSIZE_MAX (SIZE_MAX >> 1)
#define ADD_OPERAND_QM ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->m);
#define ADD_OPERAND_QN ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->n);
#define ADD_OPERAND_QT ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->t);
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define ADD_OPERAND_SM ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->m);
#define ADD_OPERAND_SN ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->n);
#define ADD_OPERAND_ST ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->t);
#define HaveCRCExt() (ctx->features1 & ARCH_FEATURE_CRCExt)
#define _SYS__PTHREAD_TYPES_H_ 
#define DECODE_STATUS_LOST -6
#define __TVOS_AVAILABLE(_vers) 
#define ARCH_FEATURE_SVE2PMULL128 ((uint64_t)1<<39)
#define HasDGH() (ctx->features0 & ARCH_FEATURE_DGH)
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define __WATCHOS_UNAVAILABLE 
#define UINT_LEAST8_MAX UINT8_MAX
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define ADD_OPERAND_WD ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->d);
#define ADD_OPERAND_WM ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->m);
#define ADD_OPERAND_WN ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->n);
#define __FLT128_HAS_INFINITY__ 1
#define HaveVirtHostExt() (ctx->features1 & ARCH_FEATURE_VirtHostExt)
#define ADD_OPERAND_XT ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->t);
#define true 1
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define ADD_OPERAND_ZD ADD_OPERAND_REG(REGSET_ZR, REG_Z_BASE, ctx->d);
#define ADD_OPERAND_ZM ADD_OPERAND_REG(REGSET_ZR, REG_Z_BASE, ctx->m);
#define ADD_OPERAND_ZN ADD_OPERAND_REG(REGSET_ZR, REG_Z_BASE, ctx->n);
#define ADD_OPERAND_ZT ADD_OPERAND_REG(REGSET_ZR, REG_Z_BASE, ctx->t);
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define ADD_OPERAND_MULTIREG_3_LANE(REG_BASE,ARR_SPEC,REGNUM) ; ADD_OPERAND_MULTIREG_3(REG_BASE, ARR_SPEC, REGNUM) instr->operands[i-1].laneUsed = 1; instr->operands[i-1].lane = ctx->index;
#define HasTRF() (ctx->features0 & ARCH_FEATURE_TRF)
#define __kpi_unavailable 
#define ADD_OPERAND_WT ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->t);;
#define __amd64 1
#define __UINT_FAST16_MAX__ 0xffff
#define __PTHREAD_ONCE_SIZE__ 8
#define TAG_GRANULE (1<<LOG2_TAG_GRANULE)
#define _PTRDIFF_T_DECLARED 
#define MAC_OS_X_VERSION_10_5 1050
#define __FLT32_HAS_QUIET_NAN__ 1
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define ARCH_FEATURE_FJCVTZSExt ((uint64_t)1<<10)
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _WCHAR_T 
#define __DARWIN_64_BIT_INO_T 1
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define HaveInt8MatMulExt() (ctx->features1 & ARCH_FEATURE_Int8MatMulExt)
#define _SECURE__COMMON_H_ 
#define ARCH_FEATURE_SHA512Ext ((uint64_t)1<<31)
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define HaveFrintExt() (ctx->features1 & ARCH_FEATURE_FrintExt)
#define UINT64_C(v) (v ## ULL)
#define __IPHONE_2_0 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __FLT32_MAX_EXP__ 128
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define __GXX_ABI_VERSION 1016
#define UINT_LEAST16_MAX UINT16_MAX
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define HaveSVEFP32MatMulExt() (ctx->features1 & ARCH_FEATURE_SVEFP32MatMulExt)
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define ADD_OPERAND_MEM_REG_OFFSET_T(REGSET,BASE,REGNUM,OFFSET,ARR_SPEC) instr->operands[i].operandClass = MEM_OFFSET; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); instr->operands[i].arrSpec = ARR_SPEC; instr->operands[i].immediate = OFFSET; instr->operands[i].signedImm = 1; i++;
#define HasDotProd() (ctx->features0 & ARCH_FEATURE_DotProd)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define SetBTypeCompatible(X) ctx->BTypeCompatible = (X)
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT64X_DIG__ 18
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __OSX_AVAILABLE(_vers) 
#define ADD_OPERAND_REG(REGSET,BASE,REGNUM) instr->operands[i].operandClass = REG; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); i++;
#define REG_Z_BASE 8
#define __not_tail_called 
#define HaveDCCVADP() (1)
#define ARCH_FEATURE_Bit128PMULLExt ((uint64_t)1<<4)
#define OPTIONAL_EXTEND_AMOUNT_64_BEHAVIOR0 ShiftType st = DecodeRegExtend(ctx->option); if(ctx->Rn==31 && ctx->option == 3) { st = ShiftType_LSL; if(ctx->imm3 == 0) st = ShiftType_NONE; } if(st != ShiftType_NONE) { instr->operands[i-1].shiftType = st; instr->operands[i-1].shiftValue = ctx->shift; instr->operands[i-1].shiftValueUsed = 1; } if(!ctx->shift) { instr->operands[i-1].shiftValueUsed = 0; }
#define __nonnull 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define INT_LEAST8_MAX INT8_MAX
#define __FLT64_MIN_10_EXP__ (-307)
#define __has_extension(x) 0
#define __FLT64X_DECIMAL_DIG__ 21
#define ADD_OPERAND_XA ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->a);
#define __API_AVAILABLE_END 
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define ADD_OPERAND_DT1 ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->t);
#define SetBTypeNext(X) ctx->BTypeNext = (X)
#define __OS_AVAILABILITY(_target,_availability) 
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define ADD_OPERAND_ROTATE ADD_OPERAND_IMM32(rotate, 0)
#define __NO_INLINE__ 1
#define DECODE_STATUS_UNREACHABLE -7
#define ADD_OPERAND_REG_T(BASE,ARR_SPEC,REGNUM) instr->operands[i].operandClass = REG; instr->operands[i].reg[0] = REG(REGSET_ZR, BASE, REGNUM); instr->operands[i].arrSpec = ARR_SPEC; i++;
#define ADD_OPERAND_PRED_REG_T(REGNUM,ARR_SPEC) ADD_OPERAND_PRED_REG(REGNUM); instr->operands[i-1].arrSpec = ARR_SPEC;
#define _SIZE_T 
#define __enum_options 
#define INT_LEAST8_MIN INT8_MIN
#define __MAC_10_11 101100
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __used __attribute__((__used__))
#define __DBL_MANT_DIG__ 53
#define ARCH_FEATURE_VirtHostExt ((uint64_t)1<<48)
#define __STDC_WANT_LIB_EXT1__ 1
#define __GNUC_MINOR__ 2
#define INT_LEAST32_MIN INT32_MIN
#define ADD_OPERAND_XS ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, ctx->s);
#define ARCH_FEATURE_SVE2SHA3 ((uint64_t)1<<40)
#define HaveStatisticalProfiling() (ctx->features1 & ARCH_FEATURE_StatisticalProfiling)
#define __STRING(x) #x
#define ADD_OPERAND_MEM_REG_OFFSET(REGSET,BASE,REGNUM,OFFSET) instr->operands[i].operandClass = MEM_OFFSET; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); instr->operands[i].immediate = OFFSET; instr->operands[i].signedImm = 1; i++;
#define ARCH_FEATURE_FlagM2 ((uint64_t)1<<9)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define ADD_OPERAND_ST1 ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->t);
#define ADD_OPERAND_ST2 ADD_OPERAND_REG(REGSET_ZR, REG_S_BASE, ctx->t2);
#define HaveSHA1Ext() (ctx->features1 & ARCH_FEATURE_SHA1Ext)
#define __LDBL_DECIMAL_DIG__ 21
#define __API_DEPRECATED(...) 
#define ARCH_FEATURE_SHA3Ext ((uint64_t)1<<30)
#define ADD_OPERAND_SYSTEMREG_IMPL_SPEC instr->operands[i].operandClass = IMPLEMENTATION_SPECIFIC; instr->operands[i].implspec[0] = ctx->sys_op0; instr->operands[i].implspec[1] = ctx->sys_op1; instr->operands[i].implspec[2] = ctx->sys_crn; instr->operands[i].implspec[3] = ctx->sys_crm; instr->operands[i].implspec[4] = ctx->sys_op2; i++;
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define HaveSM3Ext() (ctx->features1 & ARCH_FEATURE_SM3Ext)
#define __FBSDID(s) 
#define HasLS64() (ctx->features0 & ARCH_FEATURE_LS64)
#define INT32_MAX 2147483647
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define _U_INT8_T 
#define HaveFP16MulNoRoundingToFP32Ext() (ctx->features1 & ARCH_FEATURE_FP16MulNoRoundingToFP32Ext)
#define ARCH_FEATURE_SVE2 ((uint64_t)1<<36)
#define __FLT32_DECIMAL_DIG__ 9
#define MAC_OS_X_VERSION_10_15_1 101501
#define ARCH_FEATURE_UAOExt ((uint64_t)1<<47)
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define __FLT32_MAX_10_EXP__ 38
#define __INT_FAST32_TYPE__ int
#define __FLT64_IS_IEC_60559__ 2
#define SIG_ATOMIC_MIN INT32_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define ARCH_FEATURE_SM3 ((uint64_t)1<<25)
#define HasFP16() (ctx->features0 & ARCH_FEATURE_FP16)
#define _INT64_T 
#define ARCH_FEATURE_SM4 ((uint64_t)1<<26)
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define FPCR_GET_IDE(X) SLICE(X,15,15)
#define ADD_OPERAND_XS_PLUS_1 ADD_OPERAND_REG(REGSET_ZR, REG_X_BASE, (ctx->s+1)%32);
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define ARCH_FEATURE_AESExt ((uint64_t)1<<0)
#define _UINTMAX_T 
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define SEE { return DECODE_STATUS_LOST; }
#define __WATCHOS_2_0 20000
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __WATCHOS_2_2 20200
#define ADD_OPERAND_DT2 ADD_OPERAND_REG(REGSET_ZR, REG_D_BASE, ctx->t2);
#define OPTIONAL_EXTEND_AMOUNT_64_BEHAVIOR1 ShiftType st = DecodeRegExtend(ctx->option); if((ctx->Rd==31 || ctx->Rn==31) && ctx->option == 3) { st = ShiftType_LSL; if(ctx->imm3 == 0) st = ShiftType_NONE; } if(st != ShiftType_NONE) { instr->operands[i-1].shiftType = st; instr->operands[i-1].shiftValue = ctx->shift; instr->operands[i-1].shiftValueUsed = 1; } if(!ctx->shift) { instr->operands[i-1].shiftValueUsed = 0; }
#define FPCR_GET_IOE(X) SLICE(X,8,8)
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define ADD_OPERAND_VREG_T_LANE(REGNUM,ARR_SPEC,INDEX_VALUE) ADD_OPERAND_VREG_T(REGNUM, ARR_SPEC) instr->operands[i-1].lane = INDEX_VALUE; instr->operands[i-1].laneUsed = 1;
#define ADD_OPERAND_MEM_PRE_INDEX(REGSET,BASE,REGNUM,OFFSET) instr->operands[i].operandClass = MEM_PRE_IDX; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); instr->operands[i].immediate = OFFSET; instr->operands[i].signedImm = 1;
#define DECODE_STATUS_ERROR_OPERANDS -9
#define __FLT32X_MANT_DIG__ 53
#define __TVOS_14_2 140200
#define HaveSVE2AES() (ctx->features1 & ARCH_FEATURE_SVE2AES)
#define __PTRDIFF_WIDTH__ 64
#define ARCH_FEATURE_FeatXS ((uint64_t)1<<15)
#define __x86_64__ 1
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define _WCHAR_T_H 
#define _BSD_MACHINE__TYPES_H_ 
#define __deprecated __attribute__((__deprecated__))
#define HaveFlagManipulateExt() (ctx->features1 & ARCH_FEATURE_FlagManipulateExt)
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FPCR_GET_IXE(X) SLICE(X,12,12)
#define HaveSSBSExt() (ctx->features1 & ARCH_FEATURE_SSBSExt)
#define _STDINT_H_ 
#define FPCR_DZE ((uint64_t)1 << 9)
#define __FLT_MAX_10_EXP__ 38
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define __FLT_HAS_INFINITY__ 1
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define _BSD_PTRDIFF_T_ 
#define ADD_OPERAND_IMM0 ADD_OPERAND_IMM32(0, 0)
#define HaveDOTPExt() (ctx->features1 & ARCH_FEATURE_DOTPExt)
#define __exported_pop _Pragma("GCC visibility pop")
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define NULL ((void *)0)
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define ADD_OPERAND_IMM1 ADD_OPERAND_IMM32(imm1, 0)
#define ADD_OPERAND_WIDTH ADD_OPERAND_IMM32(width, 0)
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define LOG2_TAG_GRANULE 4
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __PTHREAD_SIZE__ 8176
#define UINTMAX_C(v) (v ## UL)
#define REG_PF_BASE 10
#define __SIZEOF_POINTER__ 8
#define REG_H_BASE 4
#define HaveSVE2BitPerm() (ctx->features1 & ARCH_FEATURE_SVE2BitPerm)
#define IMMR ctx->immr
#define IMMS ctx->imms
#define BITMASK(N) (((uint64_t)1<<(N))-1)
#define ARCH_FEATURE_SelfHostedTrace ((uint64_t)1<<44)
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __FLT64_HAS_QUIET_NAN__ 1
#define __PTRDIFF_T 
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define REG_Q_BASE 7
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define OPTIONAL_EXTEND_LSL0 if(ctx->S) { instr->operands[i-1].shiftType = ShiftType_LSL; instr->operands[i-1].shiftValue = 0; instr->operands[i-1].shiftValueUsed = 1; } else instr->operands[i-1].shiftType = ShiftType_NONE;
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __FLT64_HAS_INFINITY__ 1
#define false 0
#define HasXS() (ctx->features0 & ARCH_FEATURE_XS)
#define ARCH_FEATURE_LOR ((uint64_t)1<<12)
#define HaveSVE2() (ctx->features1 & ARCH_FEATURE_SVE2)
#define _GCC_MAX_ALIGN_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define assert(X) if(!(X)) { return DECODE_STATUS_ASSERT_FAILED; }
#define ADD_OPERAND_MEM_REG_OFFSET_VL(REGSET,BASE,REGNUM,OFFSET) ADD_OPERAND_MEM_REG_OFFSET(REGSET, BASE, REGNUM, OFFSET); instr->operands[i-1].mul_vl = 1;
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define LSL(X,Y) ((X)<<(Y))
#define ARCH_FEATURE_FCMA ((uint64_t)1<<4)
#define __k8__ 1
#define __UINT16_TYPE__ short unsigned int
#define HaveMTEExt() (ctx->features1 & ARCH_FEATURE_MTEExt)
#define FALSE false
#define ADD_OPERAND_WT2 ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, ctx->t2);
#define __API_DEPRECATED_END 
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __FLT_DIG__ 6
#define ADD_OPERAND_MEM_REG(REGSET,BASE,REGNUM) instr->operands[i].operandClass = MEM_REG; instr->operands[i].reg[0] = REG(REGSET, BASE, REGNUM); i++
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define UINT_FAST8_MAX UINT8_MAX
#define HaveFeatLS64() (ctx->features1 & ARCH_FEATURE_FeatLS64)
#define __INT_MAX__ 0x7fffffff
#define UINT8_MAX 255
#define REG_S_BASE 5
#define ADD_OPERAND_XT2_SP ADD_OPERAND_REG(REGSET_SP, REG_X_BASE, ctx->t2);
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define RESERVED(X) { return DECODE_STATUS_RESERVED; }
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define ARCH_FEATURE_PACExt ((uint64_t)1<<23)
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define EL0 0
#define EL1 1
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define ADD_OPERAND_OPTIONAL_PATTERN if(ctx->pattern != 0x1f) { ADD_OPERAND_PATTERN; }
#define _16B ARRSPEC_16BYTES
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ADD_OPERAND_FBITS ADD_OPERAND_IMM32(fbits, 0)
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define LAST_OPERAND_SHIFT(SHIFT_TYPE,SHIFT_VALUE) instr->operands[i-1].shiftType = SHIFT_TYPE; instr->operands[i-1].shiftValue = SHIFT_VALUE; instr->operands[i-1].shiftValueUsed = 1;
#define __SIZEOF_INT128__ 16
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define HaveMTE2Ext() (ctx->features1 & ARCH_FEATURE_MTE2Ext)
#define ARCH_FEATURE_MTEExt ((uint64_t)1<<21)
#define __API_AVAILABLE(...) 
#define _INT8_T 
#define MAX_REGISTERS 5
#define __INT_LEAST32_TYPE__ int
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define ENDOFINSTRUCTION { return DECODE_STATUS_END_OF_INSTRUCTION; }
#define __SIZEOF_WCHAR_T__ 4
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define ARCH_FEATURE_DOTPExt ((uint64_t)1<<8)
#define HasFlagM2() (ctx->features0 & ARCH_FEATURE_FlagM2)
#define SLICE(X,MSB,LSB) (((X)>>(LSB)) & BITMASK((MSB)-(LSB)+1))
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define __SSE3__ 1
#define ADD_OPERAND_WS_PLUS_1 ADD_OPERAND_REG(REGSET_ZR, REG_W_BASE, (ctx->s+1)%32);
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define __LDBL_HAS_INFINITY__ 1
#define __AVAILABILITY__ 
#define FPCR_GET_DN(X) SLICE(X,25,25)
#define __TYPES_H_ 
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define OK(X) {instr->encoding = (X); instr->operation = enc_to_oper(X); rc = DECODE_STATUS_OK; }
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_VERS_1050 1
#define FPCR_GET_FZ(X) SLICE(X,24,24)
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _STRING_H_ 
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __FLT_HAS_QUIET_NAN__ 1
#define __IOS_AVAILABLE(_vers) 
#define ADD_OPERAND_PATTERN if(ctx->pattern>0b1101 && ctx->pattern<0b11101) { ADD_OPERAND_IMM32(ctx->pattern, 0); } else { ADD_OPERAND_NAME(pattern_lookup(ctx->pattern, ctx->imm)); }
#define HaveFP16Ext() (ctx->features1 & ARCH_FEATURE_FP16Ext)
#define __LONG_WIDTH__ 64
#define ARCH_FEATURE_SVE2SM4 ((uint64_t)1<<41)
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define FPCR_FZ16 ((uint64_t)1 << 19)
#define ARCH_FEATURE_FrintExt ((uint64_t)1<<18)
#define __CHAR32_TYPE__ unsigned int
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define FPCR_Len (uint64_t)0x30000
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define ARCH_FEATURE_MTE2Ext ((uint64_t)1<<20)
#define UINT_LEAST32_MAX UINT32_MAX
#define INT32_C(v) (v)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define INSWORD (ctx->insword)
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define HasBTI() (ctx->features0 & ARCH_FEATURE_BTI)
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define ADD_OPERAND_QS ADD_OPERAND_REG(REGSET_ZR, REG_Q_BASE, ctx->s);
#define __ATOMIC_CONSUME 1
#define __IPHONE_9_2 90200
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define INTMAX_C(v) (v ## L)
#define ADD_OPERAND_SYSTEMREG(R) instr->operands[i].operandClass = SYS_REG; instr->operands[i].sysreg = (R); i++;
#define ARCH_FEATURE_FCADDExt ((uint64_t)1<<9)
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define DecodeBitMasksCheckUndefined(N,imms) if((N==0 && (imms==0x3D || imms==0x3B || imms==0x37 || imms==0x2F || imms==0x1F)) || (N==1 && imms==0x3F)) { return DECODE_STATUS_UNDEFINED; }
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __FLT128_HAS_DENORM__ 1
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define __WATCHOS_AVAILABLE(_vers) 
#define __UINT32_TYPE__ unsigned int
#define __FLT32X_MIN_10_EXP__ (-307)
#define __TVOS_10_0_1 100001
#define __WCHAR_T__ 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define ARCH_FEATURE_DGHExt ((uint64_t)1<<6)
#define __SIZEOF_LONG_LONG__ 8
#define ADD_OPERAND_XD_SP ADD_OPERAND_REG(REGSET_SP, REG_X_BASE, ctx->d);
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _GCC_PTRDIFF_T 
#define __enum_closed 
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define ___int_ptrdiff_t_h 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define _U_INT16_T 
