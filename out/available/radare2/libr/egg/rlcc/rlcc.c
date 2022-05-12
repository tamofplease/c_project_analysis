#define MPC_VERSION_NUM(a,b,c) (((a) << 16L) | ((b) << 8) | (c))
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define mpz_cmp_si(Z,SI) (__builtin_constant_p ((SI) >= 0) && (SI) >= 0 ? mpz_cmp_ui (Z, __GMP_CAST (unsigned long, SI)) : _mpz_cmp_si (Z,SI))
#define _Nullable 
#define __MPC_DECLSPEC __GMP_DECLSPEC
#define __DBL_MIN_EXP__ (-1021)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define mpz_cmp_ui(Z,UI) (__builtin_constant_p (UI) && (UI) == 0 ? mpz_sgn (Z) : _mpz_cmp_ui (Z,UI))
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define __FLT128_MAX_10_EXP__ 4932
#define mpz_com __gmpz_com
#define RE_DUP_MAX 255
#define mpq_set __gmpq_set
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __GMPN_AORS(cout,wp,xp,xsize,yp,ysize,FUNCTION,TEST) do { mp_size_t __gmp_i; mp_limb_t __gmp_x; __gmp_i = (ysize); if (__gmp_i != 0) { if (FUNCTION (wp, xp, yp, __gmp_i)) { do { if (__gmp_i >= (xsize)) { (cout) = 1; goto __gmp_done; } __gmp_x = (xp)[__gmp_i]; } while (TEST); } } if ((wp) != (xp)) __GMPN_COPY_REST (wp, xp, xsize, __gmp_i); (cout) = 0; __gmp_done: ; } while (0)
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define _T_WCHAR_ 
#define _mpz_cmp_si __gmpz_cmp_si
#define mpz_cmpabs_ui __gmpz_cmpabs_ui
#define MPFR_EMAX_MAX mpfr_get_emax_max()
#define MPFR_VALUE_OF(x) (0 ? (x) : (x))
#define CHAR_BIT __CHAR_BIT__
#define MPFR_FLAGS_INEXACT 8
#define mpq_set_f __gmpq_set_f
#define mpq_sgn(Q) ((Q)->_mp_num._mp_size < 0 ? -1 : (Q)->_mp_num._mp_size > 0)
#define mp_prec_t mpfr_prec_t
#define mpn_cnd_swap __MPN(cnd_swap)
#define MPFR_DECL_INIT(_x,_p) MPFR_EXTENSION mp_limb_t __gmpfr_local_tab_ ##_x[((_p)-1)/GMP_NUMB_BITS+1]; MPFR_EXTENSION mpfr_t _x = {{(_p),1,__MPFR_EXP_NAN,__gmpfr_local_tab_ ##_x}}
#define mpz_addmul __gmpz_addmul
#define mpn_zero_p __MPN(zero_p)
#define _mpz_cmp_ui __gmpz_cmp_ui
#define __INTMAX_C(c) c ## L
#define MPFR_VERSION_PATCHLEVEL 0
#define NL_NMAX 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define mpfr_cmp_si(_f,_s) (__builtin_constant_p (_s) && (mpfr_long) (_s) >= 0 ? mpfr_cmp_ui ((_f), (mpfr_ulong) (mpfr_long) (_s)) : mpfr_cmp_si_2exp ((_f), (_s), 0))
#define mpz_mdivmod_ui(q,r,n,d) (((r) == 0) ? mpz_fdiv_q_ui (q,n,d) : mpz_fdiv_qr_ui (q,r,n,d))
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define gmp_sprintf __gmp_sprintf
#define mpq_get_num __gmpq_get_num
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define SHRT_MAX __SHRT_MAX__
#define mpz_fdiv_qr __gmpz_fdiv_qr
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define mpn_sec_add_1 __MPN(sec_add_1)
#define mpfr_regular_p(_x) ((_x)->_mpfr_exp > __MPFR_EXP_INF)
#define __UINT8_MAX__ 0xff
#define mpfr_mul_ui(_f,_g,_u,_r) (__builtin_constant_p (_u) && (mpfr_ulong) (_u) >= 1 && ((mpfr_ulong) (_u) & ((mpfr_ulong) (_u) - 1)) == 0 ? mpfr_mul_2si((_f), (_g), __builtin_ctzl (_u), (_r)) : mpfr_mul_ui ((_f), (_g), (_u), (_r)))
#define __SCHAR_WIDTH__ 8
#define gmp_snprintf __gmp_snprintf
#define __WINT_MAX__ 0x7fffffff
#define __GMPN_COPY_REST(dst,src,size,start) do { mp_size_t __gmp_j; __GMP_CRAY_Pragma ("_CRI ivdep"); for (__gmp_j = (start); __gmp_j < (size); __gmp_j++) (dst)[__gmp_j] = (src)[__gmp_j]; } while (0)
#define GMP_NAIL_MASK (~ GMP_NUMB_MASK)
#define __FLT32_MIN_EXP__ (-125)
#define PIPE_BUF 512
#define _CDEFS_H_ 
#define mpfr_init_set_ui(x,i,rnd) ( mpfr_init(x), mpfr_set_ui((x), (i), (rnd)) )
#define _POSIX2_BC_DIM_MAX 2048
#define MPC_RNDDN MPC_RND (MPFR_RNDD,MPFR_RNDN)
#define mpz_fdiv_ui __gmpz_fdiv_ui
#define _POSIX_TTY_NAME_MAX 9
#define mpf_cmp_ui __gmpf_cmp_ui
#define MPFR_EMAX_MIN mpfr_get_emax_min()
#define MPC_INEX_NEG(inex) (((inex) == 2) ? -1 : ((inex) == 0) ? 0 : 1)
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __WCHAR_MAX__ 0x7fffffff
#define mpn_nand_n __MPN(nand_n)
#define MPC_RNDDU MPC_RND (MPFR_RNDD,MPFR_RNDU)
#define mpz_gcd __gmpz_gcd
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define mpn_copyd __MPN(copyd)
#define mpn_copyi __MPN(copyi)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define mpf_get_si __gmpf_get_si
#define __GCC_IEC_559 2
#define mpn_ior_n __MPN(ior_n)
#define mpz_get_d __gmpz_get_d
#define __FLT32X_DECIMAL_DIG__ 17
#define mpz_lucnum2_ui __gmpz_lucnum2_ui
#define __FLT_EVAL_METHOD__ 0
#define SHRT_MIN (-SHRT_MAX - 1)
#define mpz_perfect_square_p __gmpz_perfect_square_p
#define mpf_init_set_si __gmpf_init_set_si
#define mpf_get_ui __gmpf_get_ui
#define ARG_MAX (1024 * 1024)
#define mpq_abs __gmpq_abs
#define __FLT64_DECIMAL_DIG__ 17
#define _POSIX_SS_REPL_MAX 4
#define __disable_tail_calls 
#define _LIMITS_H_ 
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define mpn_popcount __MPN(popcount)
#define mpfr_init_set_d(x,d,rnd) ( mpfr_init(x), mpfr_set_d((x), (d), (rnd)) )
#define mpfr_init_set_f(x,y,rnd) ( mpfr_init(x), mpfr_set_f((x), (y), (rnd)) )
#define LINK_MAX 32767
#define mpfr_init_set_q(x,i,rnd) ( mpfr_init(x), mpfr_set_q((x), (i), (rnd)) )
#define __mpfr_default_fp_bit_precision (mpfr_get_default_fp_bit_precision())
#define mpfr_init_set_z(x,i,rnd) ( mpfr_init(x), mpfr_set_z((x), (i), (rnd)) )
#define mpf_init_set_ui __gmpf_init_set_ui
#define __DARWIN_SUF_1050 "$1050"
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define EQUIV_CLASS_MAX 2
#define gmp_vscanf __gmp_vscanf
#define mpn_gcd_1 __MPN(gcd_1)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define mpn_sub_1 __MPN(sub_1)
#define mpf_init __gmpf_init
#define mpf_set_str __gmpf_set_str
#define __DBL_MIN_10_EXP__ (-307)
#define mpq_div_2exp __gmpq_div_2exp
#define mpn_sub_n __MPN(sub_n)
#define __FINITE_MATH_ONLY__ 0
#define mpf_neg __gmpf_neg
#define mpz_tdiv_qr __gmpz_tdiv_qr
#define __cold __attribute__((__cold__))
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32_HAS_DENORM__ 1
#define CLK_TCK __DARWIN_CLK_TCK
#define gmp_randinit_lc_2exp_size __gmp_randinit_lc_2exp_size
#define _POSIX_SYMLINK_MAX 255
#define MPC_INEX(inex_re,inex_im) (MPC_INEX_POS(inex_re) | (MPC_INEX_POS(inex_im) << 2))
#define __GMP_H__ 
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define mpq_set_den __gmpq_set_den
#define __UINT_FAST8_MAX__ 0xff
#define PATH_MAX 1024
#define _LIMITS_H___ 
#define mpz_mul_2exp __gmpz_mul_2exp
#define __size_t 
#define mpn_cnd_add_n __MPN(cnd_add_n)
#define mpn_sizeinbase __MPN(sizeinbase)
#define __FLT32_MAX_10_EXP__ 38
#define _WCHAR_T_DEFINED 
#define mpz_fdiv_r __gmpz_fdiv_r
#define __GMP_CRAY_Pragma(str) 
#define __INT8_C(c) c
#define mpf_ui_sub __gmpf_ui_sub
#define mpz_init_set_si __gmpz_init_set_si
#define __MPFR_DECLSPEC __GMP_DECLSPEC
#define __INT_LEAST8_WIDTH__ 8
#define MPFR_VERSION_NUM(a,b,c) (((a) << 16L) | ((b) << 8) | (c))
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define mpz_congruent_ui_p __gmpz_congruent_ui_p
#define __GNU_MP_RELEASE (__GNU_MP_VERSION * 10000 + __GNU_MP_VERSION_MINOR * 100 + __GNU_MP_VERSION_PATCHLEVEL)
#define mpz_cmp_d __gmpz_cmp_d
#define __restrict restrict
#define __MPFR_EXP_INF (2 - __MPFR_EXP_MAX)
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define mpfr_floor(a,b) mpfr_rint((a), (b), MPFR_RNDD)
#define mpf_get_default_prec __gmpf_get_default_prec
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define __GMPN_ADDCB(r,x,y) ((r) < (y))
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __LDBL_IS_IEC_60559__ 2
#define mpf_reldiff __gmpf_reldiff
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define mpfr_init_set_ld(x,d,rnd) ( mpfr_init(x), mpfr_set_ld((x), (d), (rnd)) )
#define __FLT64X_HAS_QUIET_NAN__ 1
#define mpz_cmpabs_d __gmpz_cmpabs_d
#define __GMP_CC "clang"
#define NAME_MAX 255
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __result_use_check __attribute__((__warn_unused_result__))
#define mpz_primorial_ui __gmpz_primorial_ui
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define mpz_cdiv_q_2exp __gmpz_cdiv_q_2exp
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define mpz_divisible_ui_p __gmpz_divisible_ui_p
#define mpz_limbs_finish __gmpz_limbs_finish
#define _mpq_cmp_ui __gmpq_cmp_ui
#define mpz_sqrt __gmpz_sqrt
#define __UINT32_MAX__ 0xffffffffU
#define mpfr_abs(a,b,r) mpfr_set4(a,b,r,1)
#define __DARWIN_UNIX03 1
#define _POSIX_AIO_MAX 1
#define __SIZE_T 
#define mpf_add_ui __gmpf_add_ui
#define _POSIX_PIPE_BUF 512
#define _POSIX2_EXPR_NEST_MAX 32
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define _MPFR_PREC_FORMAT 3
#define __FLT128_MIN_EXP__ (-16381)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define mpfr_init_set_si(x,i,rnd) ( mpfr_init(x), mpfr_set_si((x), (i), (rnd)) )
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define NZERO 20
#define __MPFR_EXP_MAX ((mpfr_exp_t) (((mpfr_uexp_t) -1) >> 1))
#define mpn_perfect_power_p __MPN(perfect_power_p)
#define gmp_fscanf __gmp_fscanf
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define mpn_random __MPN(random)
#define mpc_realref(x) ((x)->re)
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define _POSIX_AIO_LISTIO_MAX 2
#define mpf_set_prec __gmpf_set_prec
#define mpz_out_str __gmpz_out_str
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define mpf_ceil __gmpf_ceil
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define mpfr_set(a,b,r) mpfr_set4(a,b,r,MPFR_SIGN(b))
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define mpz_kronecker mpz_jacobi
#define mpfr_nan_p(_x) ((_x)->_mpfr_exp == __MPFR_EXP_NAN)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __INT_WCHAR_T_H 
#define mpf_init_set __gmpf_init_set
#define _POSIX_THREAD_THREADS_MAX 64
#define mpfr_sgn(_x) ((_x)->_mpfr_exp < __MPFR_EXP_INF ? (mpfr_nan_p (_x) ? mpfr_set_erangeflag () : (mpfr_void) 0), 0 : MPFR_SIGN (_x))
#define _POSIX_MQ_OPEN_MAX 8
#define _POSIX_LINK_MAX 8
#define mpz_set_d __gmpz_set_d
#define mpz_set_f __gmpz_set_f
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define mpn_perfect_square_p __MPN(perfect_square_p)
#define mpz_random2 __gmpz_random2
#define _POSIX2_BC_STRING_MAX 1000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define mpn_zero __MPN(zero)
#define mpz_fdiv_q_ui __gmpz_fdiv_q_ui
#define __USER_LABEL_PREFIX__ _
#define mpf_div_ui __gmpf_div_ui
#define mpz_init2 __gmpz_init2
#define mpz_ui_sub __gmpz_ui_sub
#define __GMP_LIBGMP_DLL 0
#define mpn_com __MPN(com)
#define gmp_randinit_default __gmp_randinit_default
#define mpf_fits_sint_p __gmpf_fits_sint_p
#define mpz_eor __gmpz_xor
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define mpz_inits __gmpz_inits
#define mpq_numref(Q) (&((Q)->_mp_num))
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define __STDC_HOSTED__ 1
#define mpf_sqrt __gmpf_sqrt
#define mpz_init_set_ui __gmpz_init_set_ui
#define mpz_out_raw __gmpz_out_raw
#define mpz_div_2exp mpz_fdiv_q_2exp
#define UID_MAX 2147483647U
#define mpq_set_ui __gmpq_set_ui
#define mpz_divexact __gmpz_divexact
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define _BSD_SIZE_T_DEFINED_ 
#define MPC_RNDDD MPC_RND (MPFR_RNDD,MPFR_RNDD)
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define mpf_set_si __gmpf_set_si
#define MPC_RNDDZ MPC_RND (MPFR_RNDD,MPFR_RNDZ)
#define mpz_divmod_ui mpz_fdiv_qr_ui
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define mpq_get_den __gmpq_get_den
#define _POSIX_TRACE_SYS_MAX 8
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __GMP_HAVE_HOST_CPU_FAMILY_power 0
#define __SHRT_WIDTH__ 16
#define mpz_jacobi __gmpz_jacobi
#define _Nonnull 
#define mpz_root __gmpz_root
#define __GNU_MP_VERSION_PATCHLEVEL 1
#define mpf_set_ui __gmpf_set_ui
#define __FLT32_IS_IEC_60559__ 2
#define mpfr_set_fr mpfr_set
#define MPC_INEX1(inex) (inex & 15)
#define MPC_INEX2(inex) (inex >> 4)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define mpz_inp_str __gmpz_inp_str
#define _SIZE_T_DEFINED 
#define mpz_cdiv_r_2exp __gmpz_cdiv_r_2exp
#define gmp_vasprintf __gmp_vasprintf
#define _POSIX_NAME_MAX 14
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __strong 
#define _WCHAR_T_ 
#define mpz_fits_sint_p __gmpz_fits_sint_p
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define _XOPEN_PATH_MAX 1024
#define _STDDEF_H 
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __GMP_HAVE_HOST_CPU_FAMILY_powerpc 0
#define mpfr_div_si(_f,_g,_s,_r) (__builtin_constant_p (_s) && (mpfr_long) (_s) >= 0 ? mpfr_div_ui ((_f), (_g), (mpfr_ulong) (mpfr_long) (_s), (_r)) : mpfr_div_si ((_f), (_g), (_s), (_r)))
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define mpf_out_str __gmpf_out_str
#define mpz_mdivmod mpz_fdiv_qr
#define __APPLE__ 1
#define __GMP_DECLSPEC_EXPORT __declspec(__dllexport__)
#define __UINT16_C(c) c
#define mpn_random2 __MPN(random2)
#define mpz_div mpz_fdiv_q
#define mpf_fits_slong_p __gmpf_fits_slong_p
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define mpz_mfac_uiui __gmpz_mfac_uiui
#define mpfr_div_ui(_f,_g,_u,_r) (__builtin_constant_p (_u) && (mpfr_ulong) (_u) >= 1 && ((mpfr_ulong) (_u) & ((mpfr_ulong) (_u) - 1)) == 0 ? mpfr_mul_2si((_f), (_g), - __builtin_ctzl (_u), (_r)) : mpfr_div_ui ((_f), (_g), (_u), (_r)))
#define MPC_RNDND MPC_RND (MPFR_RNDN,MPFR_RNDD)
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define MPC_RNDNZ MPC_RND (MPFR_RNDN,MPFR_RNDZ)
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __GNU_MP__ 6
#define BC_STRING_MAX 1000
#define MAX_INPUT 1024
#define __FLT128_IS_IEC_60559__ 2
#define mpz_millerrabin __gmpz_millerrabin
#define mpz_divexact_ui __gmpz_divexact_ui
#define mpn_sec_sqr __MPN(sec_sqr)
#define mpq_set_str __gmpq_set_str
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define mpz_cmp __gmpz_cmp
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define mpf_pow_ui __gmpf_pow_ui
#define gmp_randclear __gmp_randclear
#define __FLT64_MANT_DIG__ 53
#define eprintf(x,y...) fprintf(stderr,x, ##y)
#define mpfr_set_si(_f,_s,_r) (__builtin_constant_p (_s) && (mpfr_long) (_s) >= 0 ? mpfr_set_ui ((_f), (mpfr_ulong) (mpfr_long) (_s), (_r)) : mpfr_set_si_2exp ((_f), (_s), 0, (_r)))
#define __FLT64X_MANT_DIG__ 64
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define _T_PTRDIFF 
#define __GNUC__ 11
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define QUAD_MAX LLONG_MAX
#define MPC_RNDUD MPC_RND (MPFR_RNDU,MPFR_RNDD)
#define mpz_invert __gmpz_invert
#define __MMX__ 1
#define MPC_RNDUN MPC_RND (MPFR_RNDU,MPFR_RNDN)
#define MPC_RNDUU MPC_RND (MPFR_RNDU,MPFR_RNDU)
#define mpf_trunc __gmpf_trunc
#define mpfr_set_ui(_f,_u,_r) (__builtin_constant_p (_u) && (mpfr_ulong) (_u) == 0 ? __extension__ ({ mpfr_ptr _p = (_f); _p->_mpfr_sign = 1; _p->_mpfr_exp = __MPFR_EXP_ZERO; (mpfr_void) (_r); 0; }) : mpfr_set_ui_2exp ((_f), (_u), 0, (_r)))
#define __mpfr_emax (mpfr_get_emax())
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define mpn_add __MPN(add)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define mpn_div_qr_2 __MPN(div_qr_2)
#define SSIZE_MAX LONG_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __BIGGEST_ALIGNMENT__ 16
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define LONG_MAX __LONG_MAX__
#define mpf_random2 __gmpf_random2
#define mpz_fdiv_q_2exp __gmpz_fdiv_q_2exp
#define __DARWIN_ONLY_VERS_1050 0
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define gmp_randseed_ui __gmp_randseed_ui
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define NGROUPS_MAX 16
#define MPC_RNDZD MPC_RND (MPFR_RNDZ,MPFR_RNDD)
#define mpn_cnd_sub_n __MPN(cnd_sub_n)
#define MPC_RNDZN MPC_RND (MPFR_RNDZ,MPFR_RNDN)
#define MPC_RNDUZ MPC_RND (MPFR_RNDU,MPFR_RNDZ)
#define _POSIX_SEM_NSEMS_MAX 256
#define mpz_odd_p(z) (((z)->_mp_size != 0) & __GMP_CAST (int, (z)->_mp_d[0]))
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define mpn_sec_tabselect __MPN(sec_tabselect)
#define mpf_fits_sshort_p __gmpf_fits_sshort_p
#define MPC_VERSION_MINOR 2
#define _GCC_WCHAR_T 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _POSIX_SIGQUEUE_MAX 32
#define mpf_cmp_d __gmpf_cmp_d
#define mpn_nior_n __MPN(nior_n)
#define __INT_FAST32_MAX__ 0x7fffffff
#define GMP_RNDD MPFR_RNDD
#define mpf_cmp_z __gmpf_cmp_z
#define GMP_RNDN MPFR_RNDN
#define __DBL_HAS_INFINITY__ 1
#define GMP_RNDU MPFR_RNDU
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define mpz_scan1 __gmpz_scan1
#define LONG_BIT 64
#define _POSIX_NGROUPS_MAX 8
#define __mpfr_emin (mpfr_get_emin())
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define __GMPN_CMP(result,xp,yp,size) do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_y; (result) = 0; __gmp_i = (size); while (--__gmp_i >= 0) { __gmp_x = (xp)[__gmp_i]; __gmp_y = (yp)[__gmp_i]; if (__gmp_x != __gmp_y) { (result) = (__gmp_x > __gmp_y ? 1 : -1); break; } } } while (0)
#define mpf_urandomb __gmpf_urandomb
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define NL_LANGMAX 14
#define MPFR_FLAGS_DIVBY0 32
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _POSIX_PATH_MAX 256
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define mpq_clears __gmpq_clears
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define LONG_MIN (-LONG_MAX - 1L)
#define mpf_mul __gmpf_mul
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define __MMX_WITH_SSE__ 1
#define mpz_setbit __gmpz_setbit
#define _WCHAR_T_DEFINED_ 
#define mpq_clear __gmpq_clear
#define mpz_ui_kronecker __gmpz_ui_kronecker
#define __DARWIN_SUF_NON_CANCELABLE 
#define mpf_clears __gmpf_clears
#define __LDBL_HAS_DENORM__ 1
#define NL_ARGMAX 9
#define mpfr_custom_get_mantissa mpfr_custom_get_significand
#define __FLT128_HAS_INFINITY__ 1
#define mpz_set __gmpz_set
#define mpf_inp_str __gmpf_inp_str
#define GID_MAX 2147483647U
#define mpq_inits __gmpq_inits
#define mpz_array_init __gmpz_array_init
#define __weak 
#define mpz_sgn(Z) ((Z)->_mp_size < 0 ? -1 : (Z)->_mp_size > 0)
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define mpz_remove __gmpz_remove
#define __WCHAR_WIDTH__ 32
#define MPC_VERSION_MAJOR 1
#define BC_DIM_MAX 2048
#define __GMP_NOTHROW 
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __MPFR_SENTINEL_ATTR __attribute__ ((__sentinel__))
#define mpz_fdiv_r_ui __gmpz_fdiv_r_ui
#define __GMPZ_FITS_UTYPE_P(z,maxval) mp_size_t __gmp_n = z->_mp_size; mp_ptr __gmp_p = z->_mp_d; return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval));
#define _POSIX_TRACE_NAME_MAX 8
#define __kpi_unavailable 
#define __GMP_INLINE_PROTOTYPES 1
#define __SSE2_MATH__ 1
#define mpq_equal __gmpq_equal
#define __ATOMIC_HLE_RELEASE 131072
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define mpn_sec_sub_1 __MPN(sec_sub_1)
#define mpn_iorn_n __MPN(iorn_n)
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define mpz_tdiv_ui __gmpz_tdiv_ui
#define MPC_RNDNU MPC_RND (MPFR_RNDN,MPFR_RNDU)
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define mpz_cdiv_q __gmpz_cdiv_q
#define mpz_cdiv_r __gmpz_cdiv_r
#define mpfr_custom_get_exp(x) ((x)->_mpfr_exp)
#define _PTRDIFF_T_DECLARED 
#define MPFR_PREC_MAX ((mpfr_prec_t) ((((mpfr_uprec_t) -1) >> 1) - 256))
#define __tune_core2__ 1
#define mpn_sub __MPN(sub)
#define __ATOMIC_HLE_ACQUIRE 65536
#define MPFR_EMIN_DEFAULT (-(MPFR_EMAX_DEFAULT))
#define mpz_get_str __gmpz_get_str
#define _T_WCHAR 
#define COLL_WEIGHTS_MAX 2
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define mpf_set_d __gmpf_set_d
#define mpf_set_q __gmpf_set_q
#define _WCHAR_T 
#define mpf_set_z __gmpf_set_z
#define gmp_asprintf __gmp_asprintf
#define mpz_mod_2exp mpz_fdiv_r_2exp
#define __dead 
#define __GMPN_ADD_1(cout,dst,src,n,v) __GMPN_AORS_1(cout, dst, src, n, v, +, __GMPN_ADDCB)
#define __FLT64X_MIN_EXP__ (-16381)
#define __SIZEOF_WINT_T__ 4
#define mpq_get_str __gmpq_get_str
#define mpf_fits_uint_p __gmpf_fits_uint_p
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define mpz_get_si __gmpz_get_si
#define mpq_mul_2exp __gmpq_mul_2exp
#define mpf_init2 __gmpf_init2
#define __FLT32_MAX_EXP__ 128
#define mpz_fdiv_r_2exp __gmpz_fdiv_r_2exp
#define mpz_tdiv_q_2exp __gmpz_tdiv_q_2exp
#define mpz_mdiv mpz_fdiv_q
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define mpf_inits __gmpf_inits
#define _PTRDIFF_T 
#define mpz_congruent_2exp_p __gmpz_congruent_2exp_p
#define mpz_init_set __gmpz_init_set
#define mpz_get_ui __gmpz_get_ui
#define mpz_abs __gmpz_abs
#define mpq_add __gmpq_add
#define MPFR_EXTENSION 
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define mpf_cmp __gmpf_cmp
#define MPFR_PREC_MIN 1
#define mpn_divrem_2 __MPN(divrem_2)
#define MPFR_VERSION_STRING "4.1.0"
#define __FLT_MIN_EXP__ (-125)
#define mpn_submul_1 __MPN(submul_1)
#define mpf_sub_ui __gmpf_sub_ui
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define mpz_init_set_d __gmpz_init_set_d
#define mpz_sub __gmpz_sub
#define mpf_sqrt_ui __gmpf_sqrt_ui
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __INT16_MAX__ 0x7fff
#define gmp_sscanf __gmp_sscanf
#define NL_SETMAX 255
#define __x86_64 1
#define __PTRDIFF_T 
#define mpz_get_d_2exp __gmpz_get_d_2exp
#define __GMPN_ADD(cout,wp,xp,xsize,yp,ysize) __GMPN_AORS (cout, wp, xp, xsize, yp, ysize, mpn_add_n, (((wp)[__gmp_i++] = (__gmp_x + 1) & GMP_NUMB_MASK) == 0))
#define mpz_tdiv_q_ui __gmpz_tdiv_q_ui
#define mpz_lcm __gmpz_lcm
#define _BSD_SIZE_T_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define _POSIX_CLOCKRES_MIN 20000000
#define mpz_add_ui __gmpz_add_ui
#define __INT_FAST64_TYPE__ long long int
#define mpq_sub __gmpq_sub
#define _ANSI_STDDEF_H 
#define __MPFR_EXP_NAN (1 - __MPFR_EXP_MAX)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define mpfr_custom_init_set(x,k,e,p,m) do { mpfr_ptr _x = (x); mpfr_exp_t _e; mpfr_kind_t _t; mpfr_int _s, _k; _k = (k); if (_k >= 0) { _t = (mpfr_kind_t) _k; _s = 1; } else { _t = (mpfr_kind_t) - _k; _s = -1; } _e = _t == MPFR_REGULAR_KIND ? (e) : _t == MPFR_NAN_KIND ? __MPFR_EXP_NAN : _t == MPFR_INF_KIND ? __MPFR_EXP_INF : __MPFR_EXP_ZERO; _x->_mpfr_prec = (p); _x->_mpfr_sign = _s; _x->_mpfr_exp = _e; _x->_mpfr_d = (mp_limb_t*) (m); } while (0)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define mpz_fits_sshort_p __gmpz_fits_sshort_p
#define mpz_cdiv_r_ui __gmpz_cdiv_r_ui
#define mpz_fits_uint_p __gmpz_fits_uint_p
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define mpz_bin_uiui __gmpz_bin_uiui
#define mpz_sqrtrem __gmpz_sqrtrem
#define __not_tail_called 
#define mpn_scan0 __MPN(scan0)
#define mpn_scan1 __MPN(scan1)
#define __LP64__ 1
#define __GMPN_SUB(cout,wp,xp,xsize,yp,ysize) __GMPN_AORS (cout, wp, xp, xsize, yp, ysize, mpn_sub_n, (((wp)[__gmp_i++] = (__gmp_x - 1) & GMP_NUMB_MASK), __gmp_x == 0))
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define MPC_RND_RE(x) ((mpfr_rnd_t)((x) & 0x0F))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __GMP_DECLSPEC_IMPORT __declspec(__dllimport__)
#define mpn_sec_mul_itch __MPN(sec_mul_itch)
#define UQUAD_MAX ULLONG_MAX
#define mpn_and_n __MPN(and_n)
#define __nonnull 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define mpz_and __gmpz_and
#define mpn_lshift __MPN(lshift)
#define mpn_div_qr_1 __MPN(div_qr_1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define CHAR_MAX SCHAR_MAX
#define __FLT64_MIN_10_EXP__ (-307)
#define gmp_randinit_lc_2exp __gmp_randinit_lc_2exp
#define __has_extension(x) 0
#define MPC_RND(r1,r2) (((int)(r1)) + ((int)(r2) << 4))
#define mpfr_init_set(x,y,rnd) ( mpfr_init(x), mpfr_set((x), (y), (rnd)) )
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define MPFR_FLAGS_NAN 4
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define mpfr_custom_get_significand(x) ((mpfr_void*)((x)->_mpfr_d))
#define __DBL_HAS_DENORM__ 1
#define MPC_SET_X_Y(real_t,imag_t,z,real_value,imag_value,rnd) { int _inex_re, _inex_im; _inex_re = (mpfr_set_ ## real_t) (mpc_realref (z), (real_value), MPC_RND_RE (rnd)); _inex_im = (mpfr_set_ ## imag_t) (mpc_imagref (z), (imag_value), MPC_RND_IM (rnd)); return MPC_INEX (_inex_re, _inex_im); }
#define mpn_divrem_1 __MPN(divrem_1)
#define __MPFR_H 
#define gmp_vfprintf __gmp_vfprintf
#define __GMP_ABS(x) ((x) >= 0 ? (x) : -(x))
#define mpz_divmod mpz_fdiv_qr
#define __LDBL_HAS_INFINITY__ 1
#define mpz_mdiv_ui mpz_fdiv_q_ui
#define mpz_cmpabs __gmpz_cmpabs
#define mpn_rshift __MPN(rshift)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define mpz_mmod_ui(r,n,d) (((r) == 0) ? mpz_fdiv_ui (n,d) : mpz_fdiv_r_ui (r,n,d))
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define mpz_powm_sec __gmpz_powm_sec
#define __DARWIN_NON_CANCELABLE 0
#define __GMPN_SUBCB(r,x,y) ((x) < (y))
#define MPFR_FLAGS_ERANGE 16
#define mpn_mul_n __MPN(mul_n)
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define MPC_RND_IM(x) ((mpfr_rnd_t)((x) >> 4))
#define mpz_bin_ui __gmpz_bin_ui
#define MPFR_USE_C99_FEATURE 1
#define __enum_options 
#define CHAR_MIN SCHAR_MIN
#define MAX_CANON 1024
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define __VERSION__ "11.2.0"
#define mpz_cdiv_ui __gmpz_cdiv_ui
#define mpz_fdiv_qr_ui __gmpz_fdiv_qr_ui
#define mp_bits_per_limb __gmp_bits_per_limb
#define mpfr_cmp_abs mpfr_cmpabs
#define __GNU_MP_VERSION 6
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define mpz_gcdext __gmpz_gcdext
#define gmp_vprintf __gmp_vprintf
#define gmp_vsnprintf __gmp_vsnprintf
#define mpz_tdiv_r_2exp __gmpz_tdiv_r_2exp
#define MPFR_DEPRECATED __attribute__ ((__deprecated__))
#define mpz_set_fr mpfr_get_z
#define gmp_scanf __gmp_scanf
#define __gmp_default_rounding_mode (mpfr_get_default_rounding_mode())
#define mpz_roinit_n __gmpz_roinit_n
#define __INT_LEAST32_MAX__ 0x7fffffff
#define mpn_sqrtrem __MPN(sqrtrem)
#define LINE_MAX 2048
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _T_PTRDIFF_ 
#define mpz_tdiv_q __gmpz_tdiv_q
#define mpz_tdiv_r __gmpz_tdiv_r
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define mp_set_memory_functions __gmp_set_memory_functions
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define MPFR_EMIN_MAX mpfr_get_emin_max()
#define _POSIX_STREAM_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define _SYS_SIZE_T_H 
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define mpn_sec_div_r_itch __MPN(sec_div_r_itch)
#define __SIZE_T__ 
#define mpz_fac_ui __gmpz_fac_ui
#define mpf_get_prec __gmpf_get_prec
#define mpf_floor __gmpf_floor
#define __FBSDID(s) 
#define mpn_set_str __MPN(set_str)
#define mpq_inp_str __gmpq_inp_str
#define mpz_div_ui mpz_fdiv_q_ui
#define mpz_mod_ui mpz_fdiv_r_ui
#define gmp_randinit __gmp_randinit
#define mpn_divmod(qp,np,nsize,dp,dsize) mpn_divrem (qp, __GMP_CAST (mp_size_t, 0), np, nsize, dp, dsize)
#define NL_TEXTMAX 2048
#define mpz_powm __gmpz_powm
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define gmp_errno __gmp_errno
#define mpfr_zero_p(_x) ((_x)->_mpfr_exp == __MPFR_EXP_ZERO)
#define _POSIX_RTSIG_MAX 8
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __FLT128_DIG__ 33
#define __GNU_MP_VERSION_MINOR 2
#define mpz_add __gmpz_add
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define mpz_tdiv_qr_ui __gmpz_tdiv_qr_ui
#define MPFR_EMIN_MIN mpfr_get_emin_min()
#define mpz_urandomb __gmpz_urandomb
#define mpz_urandomm __gmpz_urandomm
#define _Null_unspecified 
#define mpfr_custom_init(m,p) do {} while (0)
#define __GMP_CAST(type,expr) ((type) (expr))
#define __INT_FAST32_TYPE__ int
#define mpz_set_si __gmpz_set_si
#define mpz_combit __gmpz_combit
#define __DARWIN_NO_LONG_LONG 0
#define mpz_cdiv_qr __gmpz_cdiv_qr
#define __UINT_LEAST16_TYPE__ short unsigned int
#define mpz_clrbit __gmpz_clrbit
#define mpz_addmul_ui __gmpz_addmul_ui
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define mpz_tstbit __gmpz_tstbit
#define mpz_set_ui __gmpz_set_ui
#define _POSIX_CHILD_MAX 25
#define _POSIX_MAX_INPUT 255
#define MPFR_FLAGS_UNDERFLOW 1
#define mpz_2fac_ui __gmpz_2fac_ui
#define mpfr_get_exp(_x) MPFR_VALUE_OF((_x)->_mpfr_exp)
#define mpn_addmul_1 __MPN(addmul_1)
#define mpz_realloc __gmpz_realloc
#define mpfr_custom_get_kind(x) ( (x)->_mpfr_exp > __MPFR_EXP_INF ? (mpfr_int) MPFR_REGULAR_KIND * MPFR_SIGN (x) : (x)->_mpfr_exp == __MPFR_EXP_INF ? (mpfr_int) MPFR_INF_KIND * MPFR_SIGN (x) : (x)->_mpfr_exp == __MPFR_EXP_NAN ? (mpfr_int) MPFR_NAN_KIND : (mpfr_int) MPFR_ZERO_KIND * MPFR_SIGN (x) )
#define mpz_set_q __gmpz_set_q
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define _SIZE_T_DECLARED 
#define __FLT_IS_IEC_60559__ 2
#define mpz_fits_ushort_p __gmpz_fits_ushort_p
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __GMP_CFLAGS "-O2 -pedantic -fomit-frame-pointer -m64 -mtune=nehalem -march=nehalem"
#define __FLT64X_DIG__ 18
#define GMP_LIMB_BITS 64
#define __INT8_TYPE__ signed char
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define mpfr_round_nearest_away(func,rop,...) (mpfr_round_nearest_away_begin(rop), mpfr_round_nearest_away_end((rop), func((rop), __VA_ARGS__, MPFR_RNDN)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define mpf_set_prec_raw __gmpf_set_prec_raw
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __GMPN_SUB_1(cout,dst,src,n,v) __GMPN_AORS_1(cout, dst, src, n, v, -, __GMPN_SUBCB)
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __UINTMAX_C(c) c ## UL
#define mpz_limbs_write __gmpz_limbs_write
#define WORD_BIT 32
#define PTHREAD_STACK_MIN 8192
#define __SSE_MATH__ 1
#define _POSIX_ARG_MAX 4096
#define __MPC_H 
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __k8 1
#define GMP_NUMB_MASK ((~ __GMP_CAST (mp_limb_t, 0)) >> GMP_NAIL_BITS)
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define mpz_lucnum_ui __gmpz_lucnum_ui
#define mpf_div_2exp __gmpf_div_2exp
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define gmp_version __gmp_version
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define mpq_inv __gmpq_inv
#define mpfr_setsign(a,b,s,r) mpfr_set4(a,b,r,(s) ? -1 : 1)
#define mpz_pow_ui __gmpz_pow_ui
#define mpfr_cmp_ui(_f,_u) (__builtin_constant_p (_u) && (mpfr_ulong) (_u) == 0 ? (mpfr_sgn) (_f) : mpfr_cmp_ui_2exp ((_f), (_u), 0))
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define _SYS_SYSLIMITS_H_ 
#define gmp_urandomm_ui __gmp_urandomm_ui
#define SIZE_T_MAX ULONG_MAX
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define MPC_VERSION MPC_VERSION_NUM(MPC_VERSION_MAJOR,MPC_VERSION_MINOR,MPC_VERSION_PATCHLEVEL)
#define __DARWIN_64_BIT_INO_T 1
#define mpn_sec_invert __MPN(sec_invert)
#define mpn_sec_sqr_itch __MPN(sec_sqr_itch)
#define gmp_randseed __gmp_randseed
#define mpz_even_p(z) (! mpz_odd_p (z))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define mpz_divisible_p __gmpz_divisible_p
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 18
#define _POSIX2_EQUIV_CLASS_MAX 2
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define _SIZE_T_ 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define __FLT32X_MIN_EXP__ (-1021)
#define MPC_INEX_POS(inex) (((inex) < 0) ? 2 : ((inex) == 0) ? 0 : 1)
#define mpq_neg __gmpq_neg
#define __GMP_UNLIKELY(cond) __builtin_expect ((cond) != 0, 0)
#define _WCHAR_T_H 
#define mpc_imagref(x) ((x)->im)
#define __MPFR_EXP_ZERO (0 - __MPFR_EXP_MAX)
#define mpn_sec_div_qr __MPN(sec_div_qr)
#define mpn_sec_mul __MPN(sec_mul)
#define __INT_FAST16_MAX__ 0x7fff
#define mpq_cmp_si(q,n,d) (__builtin_constant_p ((n) >= 0) && (n) >= 0 ? mpq_cmp_ui (q, __GMP_CAST (unsigned long, n), d) : _mpq_cmp_si (q, n, d))
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define mpf_set_default_prec __gmpf_set_default_prec
#define mpn_mul __MPN(mul)
#define __FLT64_DIG__ 15
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define _POSIX2_LINE_MAX 2048
#define __UINT_FAST32_MAX__ 0xffffffffU
#define mpq_cmp_ui(Q,NUI,DUI) (__builtin_constant_p (NUI) && (NUI) == 0 ? mpq_sgn (Q) : __builtin_constant_p ((NUI) == (DUI)) && (NUI) == (DUI) ? mpz_cmp (mpq_numref (Q), mpq_denref (Q)) : _mpq_cmp_ui (Q,NUI,DUI))
#define mpz_ior __gmpz_ior
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define mpz_legendre mpz_jacobi
#define NULL ((void *)0)
#define gmp_randinit_set __gmp_randinit_set
#define __FLT_HAS_QUIET_NAN__ 1
#define mpf_cmp_si __gmpf_cmp_si
#define __FLT_MAX_10_EXP__ 38
#define mpc_ui_sub(x,y,z,r) mpc_ui_ui_sub (x, y, 0ul, z, r)
#define mpq_cmp __gmpq_cmp
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define __GMP_MP_SIZE_T_INT 0
#define gmp_fprintf __gmp_fprintf
#define __dead2 __attribute__((__noreturn__))
#define mpn_divexact_by3c __MPN(divexact_by3c)
#define _mpq_cmp_si __gmpq_cmp_si
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define mpn_sec_div_r __MPN(sec_div_r)
#define _I386_LIMITS_H_ 
#define mpn_xnor_n __MPN(xnor_n)
#define _BSD_PTRDIFF_T_ 
#define mpz_init_set_str __gmpz_init_set_str
#define __kpi_deprecated(_msg) 
#define mpz_fdiv_q __gmpz_fdiv_q
#define __UINT_FAST16_TYPE__ short unsigned int
#define mpn_andn_n __MPN(andn_n)
#define gmp_randinit_mt __gmp_randinit_mt
#define __INT_FAST32_WIDTH__ 32
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define mpz_limbs_read __gmpz_limbs_read
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define mpfr_mul_si(_f,_g,_s,_r) (__builtin_constant_p (_s) && (mpfr_long) (_s) >= 0 ? mpfr_mul_ui ((_f), (_g), (mpfr_ulong) (mpfr_long) (_s), (_r)) : mpfr_mul_si ((_f), (_g), (_s), (_r)))
#define EXPR_NEST_MAX 32
#define __SIZE_WIDTH__ 64
#define __SEG_FS 1
#define mpn_divexact_by3(dst,src,size) mpn_divexact_by3c (dst, src, size, __GMP_CAST (mp_limb_t, 0))
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define MPC_RNDZZ MPC_RND (MPFR_RNDZ,MPFR_RNDZ)
#define MPFR_VERSION MPFR_VERSION_NUM(MPFR_VERSION_MAJOR,MPFR_VERSION_MINOR,MPFR_VERSION_PATCHLEVEL)
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __INT_LEAST64_TYPE__ long long int
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define mpz_clears __gmpz_clears
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define mpn_sec_sub_1_itch __MPN(sec_sub_1_itch)
#define mpn_gcdext __MPN(gcdext)
#define MPC_INEX_IM(inex) MPC_INEX_NEG((inex) >> 2)
#define __INT_FAST8_MAX__ 0x7f
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define mpz_si_kronecker __gmpz_si_kronecker
#define mpz_realloc2 __gmpz_realloc2
#define mpz_fib_ui __gmpz_fib_ui
#define __FLT64_HAS_QUIET_NAN__ 1
#define __LITTLE_ENDIAN__ 1
#define mpf_init_set_str __gmpf_init_set_str
#define mpq_cmp_z __gmpq_cmp_z
#define __FLT32_MIN_10_EXP__ (-37)
#define _XOPEN_IOV_MAX 16
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define mp_rnd_t mpfr_rnd_t
#define __FLT32X_DIG__ 15
#define mpz_init __gmpz_init
#define __GMPN_AORS_1(cout,dst,src,n,v,OP,CB) do { mp_size_t __gmp_i; mp_limb_t __gmp_x, __gmp_r; __gmp_x = (src)[0]; __gmp_r = __gmp_x OP (v); (dst)[0] = __gmp_r; if (CB (__gmp_r, __gmp_x, (v))) { (cout) = 1; for (__gmp_i = 1; __gmp_i < (n);) { __gmp_x = (src)[__gmp_i]; __gmp_r = __gmp_x OP 1; (dst)[__gmp_i] = __gmp_r; ++__gmp_i; if (!CB (__gmp_r, __gmp_x, 1)) { if ((src) != (dst)) __GMPN_COPY_REST (dst, src, n, __gmp_i); (cout) = 0; break; } } } else { if ((src) != (dst)) __GMPN_COPY_REST (dst, src, n, 1); (cout) = 0; } } while (0)
#define __PTRDIFF_WIDTH__ 64
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define __GMP_DECLSPEC 
#define __GMPN_COPY(dst,src,size) __GMPN_COPY_REST (dst, src, size, 0)
#define mpz_swap __gmpz_swap
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define MPZ_ROINIT_N(xp,xs) {{0, (xs),(xp) }}
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define mpf_div __gmpf_div
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define MPFR_SIGN(x) ((x)->_mpfr_sign)
#define _GCC_MAX_ALIGN_T 
#define gmp_vfscanf __gmp_vfscanf
#define mpf_fits_ushort_p __gmpf_fits_ushort_p
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define mpfr_custom_get_size(p) ((mpfr_size_t) (((p)+GMP_NUMB_BITS-1)/GMP_NUMB_BITS*sizeof (mp_limb_t)))
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _mpz_realloc __gmpz_realloc
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define __STDC_WANT_LIB_EXT1__ 1
#define mpz_ui_pow_ui __gmpz_ui_pow_ui
#define MPFR_RETURNS_NONNULL __attribute__ ((__returns_nonnull__))
#define mpz_mod __gmpz_mod
#define mpz_hamdist __gmpz_hamdist
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define mpn_sec_div_qr_itch __MPN(sec_div_qr_itch)
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define mpz_nextprime __gmpz_nextprime
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define GMP_NUMB_MAX GMP_NUMB_MASK
#define mpz_clear __gmpz_clear
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define mpn_gcd_11 __MPN(gcd_11)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __FLT64X_MAX_EXP__ 16384
#define _WCHAR_T_DECLARED 
#define __UINT_FAST64_TYPE__ long long unsigned int
#define mpf_dump __gmpf_dump
#define mpz_limbs_modify __gmpz_limbs_modify
#define __GMP_MAX(h,i) ((h) > (i) ? (h) : (i))
#define MPC_RNDZU MPC_RND (MPFR_RNDZ,MPFR_RNDU)
#define mpz_fib2_ui __gmpz_fib2_ui
#define mpq_denref(Q) (&((Q)->_mp_den))
#define __INT_MAX__ 0x7fffffff
#define mpz_export __gmpz_export
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _T_SIZE_ 
#define LLONG_MAX __LONG_LONG_MAX__
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define mpz_perfect_power_p __gmpz_perfect_power_p
#define mpf_eq __gmpf_eq
#define mpz_congruent_p __gmpz_congruent_p
#define mpz_powm_ui __gmpz_powm_ui
#define mpz_mul __gmpz_mul
#define __INT64_TYPE__ long long int
#define mpz_cdiv_q_ui __gmpz_cdiv_q_ui
#define mpq_set_d __gmpq_set_d
#define __FLT_MAX_EXP__ 128
#define mpq_set_z __gmpq_set_z
#define mpfr_copysign(a,b,c,r) mpfr_set4(a,b,r,MPFR_SIGN(c))
#define mpz_lcm_ui __gmpz_lcm_ui
#define gmp_obstack_printf __gmp_obstack_printf
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define mp_get_memory_functions __gmp_get_memory_functions
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define MPC_RNDNN MPC_RND (MPFR_RNDN,MPFR_RNDN)
#define mpf_swap __gmpf_swap
#define mpz_tdiv_r_ui __gmpz_tdiv_r_ui
#define mpn_preinv_mod_1 __MPN(preinv_mod_1)
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define mpfr_trunc(a,b) mpfr_rint((a), (b), MPFR_RNDZ)
#define _POSIX_SEM_VALUE_MAX 32767
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define mpn_sec_add_1_itch __MPN(sec_add_1_itch)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define mpfr_round_prec(x,r,p) mpfr_prec_round(x,p,r)
#define __GMP_EXTERN_INLINE extern __inline__ __attribute__ ((__gnu_inline__))
#define __LDBL_MIN_EXP__ (-16381)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_MAX_CANON 255
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define mpn_divexact_1 __MPN(divexact_1)
#define __amd64__ 1
#define __WINT_WIDTH__ 32
#define mpfr_signbit(x) (MPFR_SIGN(x) < 0)
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define __SIZEOF_INT128__ 16
#define __FLT64X_IS_IEC_60559__ 2
#define mpz_submul __gmpz_submul
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define mpz_xor __gmpz_xor
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define mpn_mul_1 __MPN(mul_1)
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define _LP64 1
#define __UINT8_C(c) c
#define mpf_set __gmpf_set
#define __FLT64_MAX_EXP__ 1024
#define IOV_MAX 1024
#define mpn_hamdist __MPN(hamdist)
#define __INT_LEAST32_TYPE__ int
#define mpfr_cmp(b,c) mpfr_cmp3(b, c, 1)
#define mpfr_mul_2exp(y,x,n,r) mpfr_mul_2ui((y),(x),(n),(r))
#define mpn_divrem __MPN(divrem)
#define __wchar_t__ 
#define __SIZEOF_WCHAR_T__ 4
#define mpfr_get_prec(_x) MPFR_VALUE_OF((_x)->_mpfr_prec)
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define mpq_get_d __gmpq_get_d
#define mpf_sgn(F) ((F)->_mp_size < 0 ? -1 : (F)->_mp_size > 0)
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define mpf_get_str __gmpf_get_str
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define mpz_fits_ulong_p __gmpz_fits_ulong_p
#define mpq_set_si __gmpq_set_si
#define _STDDEF_H_ 
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define mpz_getlimbn __gmpz_getlimbn
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define mpn_gcdext_1 __MPN(gcdext_1)
#define MPFR_VERSION_MINOR 1
#define OFF_MAX LLONG_MAX
#define mpn_sec_powm __MPN(sec_powm)
#define __INT_FAST8_TYPE__ signed char
#define mpz_popcount __gmpz_popcount
#define CHARCLASS_NAME_MAX 14
#define mpz_gcd_ui __gmpz_gcd_ui
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define mpf_get_d __gmpf_get_d
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define gmp_vsprintf __gmp_vsprintf
#define mpq_init __gmpq_init
#define __GNUC_STDC_INLINE__ 1
#define mpf_mul_ui __gmpf_mul_ui
#define mpq_swap __gmpq_swap
#define __FLT64_HAS_DENORM__ 1
#define mpz_fits_slong_p __gmpz_fits_slong_p
#define mpq_mul __gmpq_mul
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define MPC_VERSION_PATCHLEVEL 1
#define mpz_scan0 __gmpz_scan0
#define _POSIX2_BC_BASE_MAX 99
#define __DBL_DECIMAL_DIG__ 17
#define mpz_divisible_2exp_p __gmpz_divisible_2exp_p
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define _POSIX_MQ_PRIO_MAX 32
#define __FXSR__ 1
#define _SIZE_T 
#define MPC_VERSION_STRING "1.2.1"
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define mpn_neg __MPN(neg)
#define mpfr_round(a,b) mpfr_rint((a), (b), MPFR_RNDNA)
#define QUAD_MIN LLONG_MIN
#define OPEN_MAX 10240
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define mpq_out_str __gmpq_out_str
#define mpz_dump __gmpz_dump
#define OFF_MIN LLONG_MIN
#define GMP_NAIL_BITS 0
#define mpf_fits_ulong_p __gmpf_fits_ulong_p
#define __INTMAX_WIDTH__ 64
#define _GCC_SIZE_T 
#define mpf_abs __gmpf_abs
#define mpf_mul_2exp __gmpf_mul_2exp
#define mpz_submul_ui __gmpz_submul_ui
#define __UINT32_C(c) c ## U
#define GMP_NUMB_BITS (GMP_LIMB_BITS - GMP_NAIL_BITS)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define __size_t__ 
#define mpn_add_1 __MPN(add_1)
#define mpf_add __gmpf_add
#define mpn_cmp __MPN(cmp)
#define MPC_INEX12(inex1,inex2) (inex1 | (inex2 << 4))
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define mpf_sub __gmpf_sub
#define __GMP_GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define MPFR_VERSION_MAJOR 4
#define mpn_add_n __MPN(add_n)
#define mpn_divmod_1(qp,np,nsize,dlimb) mpn_divrem_1 (qp, __GMP_CAST (mp_size_t, 0), np, nsize, dlimb)
#define mpfr_version (mpfr_get_version())
#define mpz_inp_raw __gmpz_inp_raw
#define mpfr_get_z_exp mpfr_get_z_2exp
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define CHILD_MAX 266
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define mpfr_custom_move(x,m) do { ((x)->_mpfr_d = (mp_limb_t*)(m)); } while (0)
#define mpz_mmod mpz_fdiv_r
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __exported __attribute__((__visibility__("default")))
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define mpfr_div_2exp(y,x,n,r) mpfr_div_2ui((y),(x),(n),(r))
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __SSE2__ 1
#define mpq_set_num __gmpq_set_num
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define mpfr_ceil(a,b) mpfr_rint((a), (b), MPFR_RNDU)
#define __SIZEOF_DOUBLE__ 8
#define MPC_INEX_RE(inex) MPC_INEX_NEG((inex) & 3)
#define mpz_cdiv_qr_ui __gmpz_cdiv_qr_ui
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define mpn_pow_1 __MPN(pow_1)
#define GMP_RNDZ MPFR_RNDZ
#define mpq_div __gmpq_div
#define _T_SIZE 
#define _POSIX_TIMER_MAX 32
#define __GMP_DECLSPEC_XX 
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define mpc_cmp_si(x,y) ( mpc_cmp_si_si ((x), (y), 0l) )
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define mpn_mod_1 __MPN(mod_1)
#define gmp_obstack_vprintf __gmp_obstack_vprintf
#define mpn_sqr __MPN(sqr)
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define MPFR_EMAX_DEFAULT ((mpfr_exp_t) (((mpfr_ulong) 1 << 30) - 1))
#define gmp_printf __gmp_printf
#define mpn_gcd __MPN(gcd)
#define MPFR_FLAGS_OVERFLOW 2
#define _MPFR_EXP_FORMAT _MPFR_PREC_FORMAT
#define gmp_urandomb_ui __gmp_urandomb_ui
#define __INT16_C(c) c
#define __STDC__ 1
#define mpf_size __gmpf_size
#define mpf_init_set_d __gmpf_init_set_d
#define __PTRDIFF_TYPE__ long int
#define _I386__LIMITS_H_ 
#define mpf_get_d_2exp __gmpf_get_d_2exp
#define __ATOMIC_SEQ_CST 5
#define mpz_kronecker_si __gmpz_kronecker_si
#define MPFR_FLAGS_ALL (MPFR_FLAGS_UNDERFLOW | MPFR_FLAGS_OVERFLOW | MPFR_FLAGS_NAN | MPFR_FLAGS_INEXACT | MPFR_FLAGS_ERANGE | MPFR_FLAGS_DIVBY0)
#define mpf_ui_div __gmpf_ui_div
#define mpz_mul_si __gmpz_mul_si
#define __GMP_ATTRIBUTE_PURE __attribute__ ((__pure__))
#define __FLT32X_MIN_10_EXP__ (-307)
#define mpn_sec_powm_itch __MPN(sec_powm_itch)
#define mpf_clear __gmpf_clear
#define __UINTPTR_TYPE__ long unsigned int
#define mpz_kronecker_ui __gmpz_kronecker_ui
#define mpn_tdiv_qr __MPN(tdiv_qr)
#define mpz_import __gmpz_import
#define PTHREAD_KEYS_MAX 512
#define mpz_mul_ui __gmpz_mul_ui
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define mpn_xor_n __MPN(xor_n)
#define PASS_MAX 128
#define __SIZEOF_LONG_LONG__ 8
#define mpz_random __gmpz_random
#define mpz_set_str __gmpz_set_str
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define mpz_sub_ui __gmpz_sub_ui
#define mpf_integer_p __gmpf_integer_p
#define _GCC_PTRDIFF_T 
#define __enum_closed 
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define mpz_probab_prime_p __gmpz_probab_prime_p
#define __enum_open 
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define mpz_rootrem __gmpz_rootrem
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __DARWIN_CLK_TCK 100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define mpz_neg __gmpz_neg
#define mpn_sec_invert_itch __MPN(sec_invert_itch)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define BC_BASE_MAX 99
#define mpq_canonicalize __gmpq_canonicalize
#define MB_LEN_MAX 6
#define mpz_size __gmpz_size
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define gmp_vsscanf __gmp_vsscanf
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define mpz_rrandomb __gmpz_rrandomb
#define __P(protos) protos
#define mpn_get_str __MPN(get_str)
#define mpfr_inf_p(_x) ((_x)->_mpfr_exp == __MPFR_EXP_INF)
#define mpz_sizeinbase __gmpz_sizeinbase
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define __GMP_LIKELY(cond) __builtin_expect ((cond) != 0, 1)
#define __MPN(x) __gmpn_ ##x
