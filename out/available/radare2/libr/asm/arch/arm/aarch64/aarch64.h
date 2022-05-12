#define bfd_link_hash_table_free(abfd,hash) BFD_SEND (abfd, _bfd_link_hash_table_free, (hash))
#define bfd_mach_maxq20 20
#define SI_TIMER 0x10003
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define H_PUT_64 bfd_h_put_64
#define __enum_open 
#define _STDLIB_H_ 
#define __DBL_MIN_EXP__ (-1021)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define _UINT64_T 
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define bfd_mach_sparc_v9 7
#define PRIO_MIN -20
#define bfd_mach_ppc_rs64ii 642
#define WAIT_ANY (-1)
#define __UINT_LEAST16_MAX__ 0xffff
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define bfd_mach_msp15 15
#define MAC_OS_X_VERSION_10_15_1 101501
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define F_GPRSIZE_IN_Q (1 << 10)
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define bfd_mach_mips_sb1 12310201
#define SV_ONSTACK SA_ONSTACK
#define SIGBUS 10
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define bfd_mach_mips16000 16000
#define bfd_abs_section_ptr ((asection *) &bfd_abs_section)
#define bfd_mach_mcf_isa_b_nousp_mac 17
#define bfd_mach_sparc_v8plus 4
#define bfd_mach_cr16c 1
#define RLIM_SAVED_MAX RLIM_INFINITY
#define ELF_INFO_TYPE_EH_FRAME 3
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __DRIVERKIT_19_0 190000
#define __INTMAX_C(c) c ## L
#define bfd_mach_r800 11
#define sa_sigaction __sigaction_u.__sa_sigaction
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define FPE_FLTRES 4
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define TRUE 1
#define __CHAR_BIT__ 8
#define bfd_mach_arc_5 5
#define bfd_mach_arc_6 6
#define bfd_mach_arc_8 8
#define ru_last ru_nivcsw
#define __API_UNAVAILABLE_BEGIN(...) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define CONCAT2(a,b) a ##b
#define CONCAT3(a,b,c) a ##b ##c
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define bfd_mach_mipsisa64r2 65
#define bfd_mach_mipsisa64r3 66
#define bfd_mach_mipsisa64r5 68
#define bfd_mach_mipsisa64r6 69
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define SYM_CAT_H 
#define bfd_mach_i386_i386_intel_syntax 3
#define __SCHAR_WIDTH__ 8
#define bfd_mach_sparc_sparclet 2
#define WCHAR_MAX __WCHAR_MAX__
#define SEC_RELOC 0x004
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define BFD_ABS_SECTION_NAME "*ABS*"
#define __FLT32_MIN_EXP__ (-125)
#define BFD_JUMP_TABLE_RELOCS(NAME) NAME ##_get_reloc_upper_bound, NAME ##_canonicalize_reloc, NAME ##_bfd_reloc_type_lookup
#define F_STRICT (1ULL << 28)
#define EXIT_FAILURE 1
#define bfd_mach_sparc_sparclite_le 6
#define INT8_MAX 127
#define ATTRIBUTE_HOT __attribute__ ((__hot__))
#define UINT_LEAST64_MAX UINT64_MAX
#define bfd_section_list_insert_after(ABFD,A,S) do { asection *_a = A; asection *_s = S; asection *_next = _a->next; _s->next = _next; _s->prev = _a; _a->next = _s; if (_next) _next->prev = _s; else (ABFD)->section_last = _s; } while (0)
#define _CDEFS_H_ 
#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define bfd_get_section_lma(bfd,ptr) ((ptr)->lma + 0)
#define bfd_sizeof_headers(abfd,reloc) BFD_SEND (abfd, _bfd_sizeof_headers, (abfd, reloc))
#define bfd_mach_mcf_isa_a_mac 11
#define INT32_MIN (-INT32_MAX-1)
#define bfd_mach_ppc_e500 500
#define bfd_mach_ppc64 64
#define __TVOS_AVAILABLE(_vers) 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define BUS_OBJERR 3
#define __exported_push _Pragma("GCC visibility push(default)")
#define bfd_family_coff(abfd) (bfd_get_flavour (abfd) == bfd_target_coff_flavour || bfd_get_flavour (abfd) == bfd_target_xcoff_flavour)
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define __WCHAR_MAX__ 0x7fffffff
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define SEC_THREAD_LOCAL 0x400
#define INT16_MAX 32767
#define RLIMIT_AS 5
#define F_OPD1_OPT (2 << 12)
#define __DARWIN_PDP_ENDIAN 3412
#define _WCHAR_T 
#define bfd_my_archive(abfd) ((abfd)->my_archive)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define SEC_COFF_SHARED 0x20000000
#define SEC_LINKER_CREATED 0x200000
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define bfd_mach_h8300h 2
#define __GCC_IEC_559 2
#define bfd_mach_ppc_e500mc 5001
#define IOPOL_TYPE_DISK 0
#define __FLT32X_DECIMAL_DIG__ 17
#define __IOS_PROHIBITED 
#define __FLT_EVAL_METHOD__ 0
#define bfd_canonicalize_dynamic_symtab(abfd,asymbols) BFD_SEND (abfd, _bfd_canonicalize_dynamic_symtab, (abfd, asymbols))
#define SEC_LOAD 0x002
#define __API_DEPRECATED_END 
#define __WATCHOS_4_0 40000
#define SEC_IS_COMMON 0x1000
#define __FLT64_DECIMAL_DIG__ 17
#define __disable_tail_calls 
#define FPE_NOOP 0
#define BFD_IS_RELAXABLE 0x200
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
#define H_GET_16 bfd_h_get_16
#define bfd_is_und_section(sec) ((sec) == bfd_und_section_ptr)
#define NSIG __DARWIN_NSIG
#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define bfd_h_get_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx16, (ptr))
#define __WATCHOS_4_3 40300
#define INT8_MIN -128
#define BFD_SEND_FMT(bfd,message,arglist) (((bfd)->xvec->message[(int) ((bfd)->format)]) arglist)
#define MAC_OS_X_VERSION_10_14_1 101401
#define __DARWIN_SUF_1050 "$1050"
#define MAC_OS_X_VERSION_10_14_4 101404
#define AARCH64_FEATURE_SHA2 0x200000000ULL
#define AARCH64_FEATURE_SHA3 0x400000000ULL
#define SIGPROF 27
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define POLL_MSG 3
#define __DBL_MIN_10_EXP__ (-307)
#define __IPHONE_13_0 130000
#define INT16_MIN -32768
#define bfd_little_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_LITTLE)
#define __FINITE_MATH_ONLY__ 0
#define __IPHONE_13_2 130200
#define bfd_mach_msp33 33
#define __cold __attribute__((__cold__))
#define __FLT32X_MAX_EXP__ 1024
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define BFD_ARCH_SIZE 64
#define ELF_INFO_TYPE_STABS 1
#define __FLT32_HAS_DENORM__ 1
#define _ALLOCA_H_ 
#define bfd_mach_ppc 32
#define bfd_mach_mips16 16
#define __swift_unavailable(_msg) 
#define bfd_mach_mips4010 4010
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define SEC_LINK_DUPLICATES_DISCARD 0x0
#define __UINT_FAST8_MAX__ 0xff
#define HAS_RELOC 0x01
#define AARCH64_FEATURE_V8_1 0x01000000
#define __FLT32_MAX_10_EXP__ 38
#define SIGHUP 1
#define EMPTY_HOWTO(C) HOWTO ((C), 0, 0, 0, FALSE, 0, complain_overflow_dont, NULL, NULL, FALSE, 0, 0, FALSE)
#define __INT8_C(c) c
#define OPCODE_AARCH64_H 
#define H_PUT_S16 bfd_h_put_signed_16
#define SIGCONT 19
#define __INT_LEAST8_WIDTH__ 8
#define bfd_mach_d10v 1
#define bfd_mach_arm_iWMMXt 12
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __TVOS_12_4 120400
#define sprintf_vma(s,x) sprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define WAKEMON_GET_PARAMS 0x04
#define FP_STATE_BYTES 512
#define __restrict restrict
#define __SHRT_MAX__ 0x7fff
#define w_stopval w_S.w_Stopval
#define H_PUT_S8 bfd_h_put_signed_8
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define bfd_section_name(bfd,ptr) ((ptr)->name)
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define bfd_applicable_file_flags(abfd) ((abfd)->xvec->object_flags)
#define __FLT64X_MAX_10_EXP__ 4932
#define BSF_INDIRECT 0x2000
#define SIG_IGN (void (*)(int))1
#define __IPHONE_10_0 100000
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define bfd_link_just_syms(abfd,sec,info) BFD_SEND (abfd, _bfd_link_just_syms, (sec, info))
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define INT_FAST16_MAX INT16_MAX
#define bfd_mach_xc16x 1
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define SIGSEGV 11
#define H_PUT_S64 bfd_h_put_signed_64
#define F_FPTYPE (1 << 7)
#define __UINT_LEAST8_MAX__ 0xff
#define SEC_NO_FLAGS 0x000
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define bfd_mach_sh5 0x50
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define bfd_mach_sh2a_or_sh3e 0x2a4
#define __result_use_check __attribute__((__warn_unused_result__))
#define BSF_GLOBAL 0x02
#define F_T (1 << 9)
#define PRIO_USER 2
#define bfd_mach_mipsisa32 32
#define IOPOL_APPLICATION IOPOL_STANDARD
#define WCHAR_MIN (-WCHAR_MAX-1)
#define SEC_LINK_DUPLICATES_SAME_CONTENTS (SEC_LINK_DUPLICATES_ONE_ONLY | SEC_LINK_DUPLICATES_SAME_SIZE)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define bfd_mach_h8300s 3
#define bfd_mach_mrisc2 2
#define __UINT32_MAX__ 0xffffffffU
#define bfd_mach_hppa10 10
#define INT64_MAX 9223372036854775807LL
#define bfd_mach_hppa11 11
#define bfd_section_alignment(bfd,ptr) ((ptr)->alignment_power)
#define IOPOL_SCOPE_DARWIN_BG 2
#define bfd_is_local_label_name(abfd,name) BFD_SEND (abfd, _bfd_is_local_label_name, (abfd, name))
#define bfd_mach_bfin 1
#define __TVOS_9_0 90000
#define H_GET_S16 bfd_h_get_signed_16
#define bfd_mach_mipsisa64 64
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define UINT_FAST16_MAX UINT16_MAX
#define __FLT128_MIN_EXP__ (-16381)
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)
#define bfd_mach_d10v_ts2 2
#define bfd_mach_d10v_ts3 3
#define bfd_mach_sparc_64bit_p(mach) ((mach) >= bfd_mach_sparc_v9 && (mach) != bfd_mach_sparc_v8plusb)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define WUNTRACED 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define bfd_mach_mips_octeon 6501
#define bfd_mach_i960_core 1
#define _bfd_int64_low(x) ((unsigned long) (((x) & 0xffffffff)))
#define UINT16_C(v) (v)
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define bfd_get_outsymbols(abfd) ((abfd)->outsymbols)
#define bfd_debug_info_accumulate(abfd,section) BFD_SEND (abfd, _bfd_debug_info_accumulate, (abfd, section))
#define IOPOL_IMPORTANT 1
#define bfd_mach_msp43 43
#define __FLT128_MIN_10_EXP__ (-4931)
#define bfd_mach_h8300hn 4
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define SEC_ROM 0x040
#define __FLT32X_IS_IEC_60559__ 2
#define BFD64 
#define F_DEFAULT(X) (((X) & 0x1f) << 15)
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define htons(x) __DARWIN_OSSwapInt16(x)
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define bfd_mach_mips7000 7000
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define EXEC_P 0x02
#define DEBUG_TRACE(M,...) ;
#define bfd_mach_mips_loongson_2e 3001
#define H_GET_S64 bfd_h_get_signed_64
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define FP_PREC_24B 0
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define SA_SIGINFO 0x0040
#define bfd_mach_hppa20 20
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __WATCHOS_3_1_1 30101
#define bfd_mach_i960_ka_sa 2
#define __LASTBRANCH_MAX 32
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define bfd_mach_arm_5TE 9
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define _FORTIFY_SOURCE 2
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define BFD_NO_MORE_SYMBOLS ((symindex) ~0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define SI_USER 0x10001
#define SIGTTOU 22
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define bfd_mach_sh2a_nofpu 0x2b
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define AARCH64_FEATURE_V8_3 0x00000040
#define bfd_mach_ppc_601 601
#define bfd_mach_ppc_602 602
#define bfd_mach_ppc_603 603
#define bfd_mach_ppc_604 604
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define bfd_mach_mips4400 4400
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define PRIO_MAX 20
#define AARCH64_FEATURE_V8_4 0x000000800ULL
#define H_PUT_S32 bfd_h_put_signed_32
#define __USER_LABEL_PREFIX__ _
#define bfd_mach_ppc_620 620
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define F_PSEUDO (1 << 21)
#define bfd_is_group_section(abfd,sec) BFD_SEND (abfd, _bfd_is_group_section, (abfd, sec))
#define bfd_mach_ppc_630 630
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define bfd_mach_cris_v32 32
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define AARCH64_ARCH_V8 AARCH64_FEATURE (AARCH64_FEATURE_V8, AARCH64_FEATURE_FP | AARCH64_FEATURE_SIMD)
#define bfd_link_split_section(abfd,sec) BFD_SEND (abfd, _bfd_link_split_section, (abfd, sec))
#define WCONTINUED 0x00000010
#define bfd_mach_mips3900 3900
#define __DARWIN_NO_LONG_LONG 0
#define UINT_FAST64_MAX UINT64_MAX
#define __STDC_HOSTED__ 1
#define WAKEMON_DISABLE 0x02
#define F_MISC (1 << 22)
#define ILL_ILLOPC 1
#define bfd_mach_h8300sn 5
#define bfd_mach_cris_v10_v32 1032
#define BFD_NO_FLAGS 0x00
#define bfd_mach_h8300sx 6
#define RLIM_SAVED_CUR RLIM_INFINITY
#define bfd_mach_avr1 1
#define bfd_mach_avr2 2
#define bfd_mach_avr3 3
#define bfd_mach_avr4 4
#define bfd_mach_avr5 5
#define __alloca(size) __builtin_alloca(size)
#define ATTRIBUTE_COLD __attribute__ ((__cold__))
#define __WATCHOS_AVAILABLE(_vers) 
#define BFD_RELOC_SPARC_DISP64 BFD_RELOC_64_PCREL
#define H_GET_32 bfd_h_get_32
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define UINT64_MAX 18446744073709551615ULL
#define bfd_asymbol_name(x) ((x)->name)
#define bfd_mach_sh2a_nofpu_or_sh3_nommu 0x2a2
#define BFD_JUMP_TABLE_CORE(NAME) NAME ##_core_file_failing_command, NAME ##_core_file_failing_signal, NAME ##_core_file_matches_executable_p
#define bfd_mach_rs6k 6000
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define bfd_mach_ip2022ext 2
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define __FLT32_DIG__ 6
#define ELF_INFO_TYPE_JUST_SYMS 4
#define bfd_mach_tricore 4
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define SS_DISABLE 0x0004
#define __IPHONE_11_1 110100
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __SHRT_WIDTH__ 16
#define bfd_get_filename(abfd) ((char *) (abfd)->filename)
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define SEC_STRINGS 0x2000000
#define bfd_h_get_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx32, (ptr))
#define __FLT32_IS_IEC_60559__ 2
#define bfd_mach_h8300sxn 7
#define __PTHREAD_RWLOCK_SIZE__ 192
#define bfd_mach_mips5000 5000
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define bfd_get_16(abfd,ptr) BFD_SEND (abfd, bfd_getx16, (ptr))
#define HALF_BFD_SIZE_TYPE (((bfd_size_type) 1) << (8 * sizeof (bfd_size_type) / 2))
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define __IPHONE_13_4 130400
#define __APPLE_API_EVOLVING 
#define bfd_mach_mips_gs464e 3004
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)
#define bfd_get_32(abfd,ptr) BFD_SEND (abfd, bfd_getx32, (ptr))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define bfd_h_get_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx64, (ptr))
#define __strong 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define BSF_KEEP 0x20
#define SEC_IN_MEMORY 0x4000
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define SIGNED signed
#define F_ALIAS (1 << 0)
#define SV_SIGINFO SA_SIGINFO
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define bfd_mach_tic3x 30
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define SIG_DFL (void (*)(int))0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define bfd_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_16, (ptr))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __MAC_10_7 1070
#define bfd_mach_tic4x 40
#define __AVAILABILITY_VERSIONS__ 
#define bfd_get_64(abfd,ptr) BFD_SEND (abfd, bfd_getx64, (ptr))
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define bfd_get_signed_8(abfd,ptr) (((*(unsigned char *) (ptr) & 0xff) ^ 0x80) - 0x80)
#define __AVAILABILITY_INTERNAL_REGULAR 
#define bfd_printf_vma(abfd,x) bfd_fprintf_vma (abfd,stdout,x)
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define SIG_ERR ((void (*)(int))-1)
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define __WATCHOS_7_2 70200
#define ru_first ru_ixrss
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define bfd_count_sections(abfd) ((abfd)->section_count)
#define AARCH64_CLEAR_FEATURE(TARG,F1,F2) do { (TARG) = (F1) &~ (F2); } while (0)
#define __DECIMAL_DIG__ 21
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))
#define __APPLE_API_STABLE 
#define BFD_JUMP_TABLE_DYNAMIC(NAME) NAME ##_get_dynamic_symtab_upper_bound, NAME ##_canonicalize_dynamic_symtab, NAME ##_get_synthetic_symtab, NAME ##_get_dynamic_reloc_upper_bound, NAME ##_canonicalize_dynamic_reloc
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define bfd_mach_arm_ep9312 11
#define __FLT128_IS_IEC_60559__ 2
#define FP_PREC_64B 3
#define ILL_ILLTRP 2
#define F_CONV (1 << 20)
#define SIG_ATOMIC_MIN INT32_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define bfd_asymbol_base(x) ((x)->section->vma)
#define MAC_OS_X_VERSION_10_14_6 101406
#define SIGIO 23
#define __FLT64_MANT_DIG__ 53
#define bfd_mach_mcf_isa_b_emac 21
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define bfd_mach_i386_i386 1
#define ATTRIBUTE_PACKED __attribute__ ((packed))
#define bfd_get_dynamic_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_symtab_upper_bound, (abfd))
#define MAC_OS_X_VERSION_10_11_4 101104
#define bfd_mach_msp110 110
#define bfd_link_add_symbols(abfd,info) BFD_SEND (abfd, _bfd_link_add_symbols, (abfd, info))
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define bfd_mach_s390_31 31
#define __FLT64X_MANT_DIG__ 64
#define NOARGS void
#define bfd_h_put_signed_64 bfd_h_put_64
#define bfd_mach_ms1 1
#define bfd_mach_ms2 3
#define __DYNAMIC__ 1
#define UINT8_C(v) (v)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __GNUC__ 11
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define SIGWINCH 28
#define UINT_LEAST8_MAX UINT8_MAX
#define AARCH64_FEATURE_PAN 0x00200000
#define __MMX__ 1
#define bfd_mach_sh4_nofpu 0x41
#define __IPHONE_10_1 100100
#define SEC_LINK_ONCE 0x20000
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define BSF_DYNAMIC 0x8000
#define __MAC_10_14_4 101404
#define bfd_mach_s390_64 64
#define H_GET_64 bfd_h_get_64
#define INT_FAST16_MIN INT16_MIN
#define _ID_T 
#define bfd_mach_mips14000 14000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __BIGGEST_ALIGNMENT__ 16
#define _OS__OSBYTEORDER_H 
#define BFD_COM_SECTION_NAME "*COM*"
#define _MCONTEXT_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define bfd_mach_m32r2 '2'
#define HTONS(x) (x) = htons((__uint16_t)x)
#define AARCH64_FEATURE_RAS 0x04000000
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define PRIO_DARWIN_NONUI 0x1001
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define bfd_make_debug_symbol(abfd,ptr,size) BFD_SEND (abfd, _bfd_make_debug_symbol, (abfd, ptr, size))
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define BSF_NO_FLAGS 0x00
#define __FLT64_MAX_10_EXP__ 308
#define bfd_mach_m32rx 'x'
#define PRIO_DARWIN_PROCESS 4
#define AARCH64_ANY AARCH64_FEATURE (-1, 0)
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define _I386_SIGNAL_H_ 1
#define __pure 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define WTERMSIG(x) (_WSTATUS(x))
#define CLD_NOOP 0
#define bfd_get_synthetic_symtab(abfd,count,syms,dyncount,dynsyms,ret) BFD_SEND (abfd, _bfd_get_synthetic_symtab, (abfd, count, syms, dyncount, dynsyms, ret))
#define EXIT_SUCCESS 0
#define FPE_FLTDIV 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __IPHONE_3_2 30200
#define bfd_get(bits,abfd,ptr) ((bits) == 8 ? (bfd_vma) bfd_get_8 (abfd, ptr) : (bits) == 16 ? bfd_get_16 (abfd, ptr) : (bits) == 32 ? bfd_get_32 (abfd, ptr) : (bits) == 64 ? bfd_get_64 (abfd, ptr) : (abort (), (bfd_vma) - 1))
#define __APPLE_API_UNSTABLE 
#define bfd_mach_fr300 300
#define __INT_FAST32_MAX__ 0x7fffffff
#define BFD_JUMP_TABLE_SYMBOLS(NAME) NAME ##_get_symtab_upper_bound, NAME ##_canonicalize_symtab, NAME ##_make_empty_symbol, NAME ##_print_symbol, NAME ##_get_symbol_info, NAME ##_bfd_is_local_label_name, NAME ##_bfd_is_target_special_symbol, NAME ##_get_lineno, NAME ##_find_nearest_line, _bfd_generic_find_line, NAME ##_find_inliner_info, NAME ##_bfd_make_debug_symbol, NAME ##_read_minisymbols, NAME ##_minisymbol_to_symbol
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define bfd_mach_z8001 1
#define __WATCHOS_6_0 60000
#define bfd_h_put_signed_16 bfd_h_put_16
#define __DARWIN_UNIX03 1
#define RAND_MAX 0x7fffffff
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define __WATCHOS_6_2 60200
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define bfd_gc_sections(abfd,link_info) BFD_SEND (abfd, _bfd_gc_sections, (abfd, link_info))
#define bfd_mach_mcf_isa_b_float_emac 24
#define F_P2 (2 << 2)
#define _INT16_T 
#define bfd_mach_ppc_7400 7400
#define bfd_h_put_signed_32 bfd_h_put_32
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define bfd_mach_xtensa 1
#define BUS_NOOP 0
#define bfd_valid_reloc_types(abfd) ((abfd)->xvec->valid_reloc_types)
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define bfd_get_section_alignment(bfd,ptr) ((ptr)->alignment_power + 0)
#define PTRCONST void *const
#define bfd_mach_arm_3M 4
#define CLD_KILLED 2
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define SA_64REGSET 0x0200
#define bfd_mach_v850e1 '1'
#define bfd_asymbol_bfd(x) ((x)->the_bfd)
#define SEC_GROUP 0x4000000
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define SA_ONSTACK 0x0001
#define __DARWIN_SUF_NON_CANCELABLE 
#define RUSAGE_INFO_V0 0
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define bfd_mach_m16c 0x75
#define __unused __attribute__((__unused__))
#define SEC_COFF_SHARED_LIBRARY 0x10000000
#define RUSAGE_INFO_V4 4
#define BFD_IN_MEMORY 0x800
#define bfd_mach_ppc_403gc 4030
#define __FLT128_HAS_INFINITY__ 1
#define _STRUCT_TIMEVAL struct timeval
#define SS_ONSTACK 0x0001
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define SA_RESETHAND 0x0004
#define IOPOL_SCOPE_THREAD 1
#define bfd_h_get_8(abfd,ptr) bfd_get_8 (abfd, ptr)
#define __weak 
#define _DEV_T 
#define bfd_mach_mcf_isa_b_float 22
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define __PTHREAD_ATTR_SIZE__ 56
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define BSF_FUNCTION 0x10
#define bfd_get_section_flags(bfd,ptr) ((ptr)->flags + 0)
#define __kpi_unavailable 
#define bfd_free_cached_info(abfd) BFD_SEND (abfd, _bfd_free_cached_info, (abfd))
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define bfd_mach_frv 1
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define _I386__ENDIAN_H_ 
#define SIGINT 2
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define bfd_mach_mips4100 4100
#define bfd_copy_private_section_data(ibfd,isection,obfd,osection) BFD_SEND (obfd, _bfd_copy_private_section_data, (ibfd, isection, obfd, osection))
#define __amd64 1
#define AARCH64_FEATURE_F16_FML 0x1000000000ULL
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define bfd_mach_mips4111 4111
#define _SYS_SIGNAL_H_ 
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define bfd_mach_mips3000 3000
#define bfd_mach_mips4120 4120
#define MAC_OS_X_VERSION_10_5 1050
#define __AVAILABILITY__ 
#define ANSI_PROTOTYPES 1
#define bfd_mach_mips_gs464 3003
#define BFD_JUMP_TABLE_ARCHIVE(NAME) NAME ##_slurp_armap, NAME ##_slurp_extended_name_table, NAME ##_construct_extended_name_table, NAME ##_truncate_arname, NAME ##_write_armap, NAME ##_read_ar_hdr, NAME ##_openr_next_archived_file, NAME ##_get_elt_at_index, NAME ##_generic_stat_arch_elt, NAME ##_update_armap_timestamp
#define __tune_core2__ 1
#define bfd_mach_sh4al_dsp 0x4d
#define FPE_FLTOVF 2
#define __ATOMIC_HLE_ACQUIRE 65536
#define bfd_usrdata(abfd) ((abfd)->usrdata)
#define _UINT32_T 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define bfd_mach_i960_ca 6
#define RLIMIT_CPU 0
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define EXFUN(name,proto) name proto
#define WAKEMON_MAKE_FATAL 0x10
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define __dead 
#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define VA_CLOSE(AP) } va_end(AP); }
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define INT_FAST8_MIN INT8_MIN
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define bfd_mach_mips_loongson_2f 3002
#define bfd_mach_arm_iWMMXt2 13
#define bfd_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_32, (ptr))
#define __WATCHOS_5_2 50200
#define bfd_canonicalize_dynamic_reloc(abfd,arels,asyms) BFD_SEND (abfd, _bfd_canonicalize_dynamic_reloc, (abfd, arels, asyms))
#define SEC_HAS_GOT_REF 0x800
#define bfd_is_target_special_symbol(abfd,sym) BFD_SEND (abfd, _bfd_is_target_special_symbol, (abfd, sym))
#define __IPHONE_11_0 110000
#define SEC_READONLY 0x008
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define bfd_set_section_userdata(bfd,ptr,val) (((ptr)->userdata = (val)),TRUE)
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define bfd_section_vma(bfd,ptr) ((ptr)->vma)
#define __WATCHOS_6_1 60100
#define VOLATILE volatile
#define HAS_LOCALS 0x20
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define AARCH64_FEATURE_SIMD 0x00040000
#define SEC_TIC54X_CLINK 0x80000000
#define UINTPTR_MAX 18446744073709551615UL
#define bfd_mach_z80full 7
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define SEGV_NOOP 0
#define bfd_mach_arm_unknown 0
#define w_termsig w_T.w_Termsig
#define bfd_mach_i960_hx 8
#define bfd_mach_alpha_ev4 0x10
#define bfd_mach_alpha_ev5 0x20
#define bfd_mach_alpha_ev6 0x30
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define HAS_DEBUG 0x08
#define UINT_LEAST16_MAX UINT16_MAX
#define bfd_read(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_read", NULL, NULL, __FUNCTION__), bfd_bread ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define bfd_h_put_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define bfd_mach_mipsisa32r2 33
#define bfd_mach_mipsisa32r3 34
#define bfd_mach_mipsisa32r5 36
#define bfd_mach_mipsisa32r6 37
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define __TYPES_H_ 
#define bfd_set_section_vma(bfd,ptr,val) (((ptr)->vma = (ptr)->lma = (val)), ((ptr)->user_set_vma = TRUE), TRUE)
#define WEXITED 0x00000004
#define AARCH64_FEATURE_RCPC 0x20000000
#define bfd_mach_i960_jx 7
#define H_GET_S8 bfd_h_get_signed_8
#define bfd_is_ind_section(sec) ((sec) == bfd_ind_section_ptr)
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define WNOHANG 0x00000001
#define alloca(size) __alloca(size)
#define __INT16_MAX__ 0x7fff
#define __SPI_AVAILABLE(...) 
#define __x86_64 1
#define _INT32_T 
#define SEGV_ACCERR 2
#define bfd_make_empty_symbol(abfd) BFD_SEND (abfd, _bfd_make_empty_symbol, (abfd))
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define bfd_mach_frvsimple 2
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define bfd_und_section_ptr ((asection *) &bfd_und_section)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define bfd_mach_i960_mc 4
#define __INT_FAST64_TYPE__ long long int
#define bfd_mach_mips_xlr 887682
#define bfd_set_arch_mach(abfd,arch,mach) BFD_SEND ( abfd, _bfd_set_arch_mach, (abfd, arch, mach))
#define DYNAMIC 0x40
#define bfd_mach_iq10 2
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define SEC_SMALL_DATA 0x800000
#define WINT_MIN INT32_MIN
#define IOPOL_DEFAULT 0
#define bfd_set_private_flags(abfd,flags) BFD_SEND (abfd, _bfd_set_private_flags, (abfd, flags))
#define DEFUN_VOID(name) name(void)
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define __IOS_AVAILABLE(_vers) 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define bfd_find_nearest_line(abfd,sec,syms,off,file,func,line) BFD_SEND (abfd, _bfd_find_nearest_line, (abfd, sec, syms, off, file, func, line))
#define AARCH64_MAX_OPND_NUM 6
#define __not_tail_called 
#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
#define BSF_LOCAL 0x01
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define SEC_SORT_ENTRIES 0x10000
#define __LP64__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define SIG_HOLD (void (*)(int))5
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define AARCH64_CPU_HAS_ALL_FEATURES(CPU,FEAT) ((~(CPU) & (FEAT)) == 0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SIGUSR2 31
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define AARCH64_CPU_HAS_FEATURE(CPU,FEAT) AARCH64_CPU_HAS_ALL_FEATURES (CPU,FEAT)
#define SEC_DATA 0x020
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __nonnull 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define bfd_section_list_insert_before(ABFD,B,S) do { asection *_b = B; asection *_s = S; asection *_prev = _b->prev; _s->prev = _prev; _s->next = _b; _b->prev = _s; if (_prev) _prev->next = _s; else (ABFD)->sections = _s; } while (0)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define bfd_mach_sparc_v9_p(mach) ((mach) >= bfd_mach_sparc_v8plus && (mach) <= bfd_mach_sparc_v9b && (mach) != bfd_mach_sparc_sparclite_le)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define SEC_TIC54X_BLOCK 0x40000000
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define INT_LEAST8_MAX INT8_MAX
#define bfd_mach_h8300 1
#define FPE_INTDIV 7
#define __WATCHOS_4_1 40100
#define __FLT64_MIN_10_EXP__ (-307)
#define SEC_ALLOC 0x001
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define bfd_get_dynamic_symcount(abfd) ((abfd)->dynsymcount)
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define AARCH64_CPU_HAS_ANY_FEATURES(CPU,FEAT) (((CPU) & (FEAT)) != 0)
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define bfd_write(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_write", NULL, NULL, __FUNCTION__), bfd_bwrite ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define __DBL_HAS_DENORM__ 1
#define bfd_mach_m68008 2
#define INT_LEAST32_MAX INT32_MAX
#define bfd_mach_i960_xa 5
#define bfd_is_abs_section(sec) ((sec) == bfd_abs_section_ptr)
#define AARCH64_FEATURE_CRYPTO 0x00010000
#define __MAC_10_11_4 101104
#define bfd_mach_v850 1
#define AARCH64_ARCH_V8_1 AARCH64_FEATURE (AARCH64_ARCH_V8, AARCH64_FEATURE_CRC | AARCH64_FEATURE_V8_1 | AARCH64_FEATURE_LSE | AARCH64_FEATURE_PAN | AARCH64_FEATURE_LOR | AARCH64_FEATURE_RDMA)
#define AARCH64_ARCH_V8_2 AARCH64_FEATURE (AARCH64_ARCH_V8_1, AARCH64_FEATURE_V8_2 | AARCH64_FEATURE_RAS)
#define AARCH64_ARCH_V8_3 AARCH64_FEATURE (AARCH64_ARCH_V8_2, AARCH64_FEATURE_V8_3 | AARCH64_FEATURE_RCPC | AARCH64_FEATURE_COMPNUM)
#define AARCH64_ARCH_V8_4 AARCH64_FEATURE (AARCH64_ARCH_V8_3, AARCH64_FEATURE_V8_4 | AARCH64_FEATURE_DOTPROD | AARCH64_FEATURE_F16_FML)
#define bfd_mach_m68010 3
#define __LDBL_HAS_INFINITY__ 1
#define bfd_get_target(abfd) ((abfd)->xvec->name)
#define __OS_AVAILABILITY(_target,_availability) 
#define RLIMIT_NOFILE 8
#define bfd_mach_frvtomcat 499
#define bfd_mach_m68020 4
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define __MAC_10_14_1 101401
#define bfd_final_link(abfd,info) BFD_SEND (abfd, _bfd_final_link, (abfd, info))
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define bfd_mach_ppc_750 750
#define bfd_copy_private_symbol_data(ibfd,isymbol,obfd,osymbol) BFD_SEND (obfd, _bfd_copy_private_symbol_data, (ibfd, isymbol, obfd, osymbol))
#define __DARWIN_NON_CANCELABLE 0
#define _U_INT32_T 
#define __DEC_EVAL_METHOD__ 2
#define bfd_mach_am33 330
#define bfd_mach_m68040 6
#define SIGEV_THREAD 3
#define DOTS , ...
#define bfd_canonicalize_symtab(abfd,location) BFD_SEND (abfd, _bfd_canonicalize_symtab, (abfd, location))
#define bfd_mach_mn10300 300
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define INT_LEAST8_MIN INT8_MIN
#define BFD_UND_SECTION_NAME "*UND*"
#define __VERSION__ "11.2.0"
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define VA_FIXEDARG(AP,T,N) struct Qdmy
#define bfd_print_private_bfd_data(abfd,file) BFD_SEND (abfd, _bfd_print_private_bfd_data, (abfd, file))
#define __UINT64_C(c) c ## ULL
#define bfd_mach_m68060 7
#define __used __attribute__((__used__))
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#define BADSIG SIG_ERR
#define CPUMON_MAKE_FATAL 0x1000
#define SEC_CONSTRUCTOR 0x080
#define ILL_BADSTK 8
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define bfd_merge_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_merge_private_bfd_data, (ibfd, obfd))
#define TRAP_TRACE 2
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define HAS_LINENO 0x04
#define CONST const
#define __APPLE_API_PRIVATE 
#define bfd_mach_mips_micromips 96
#define H_GET_8 bfd_h_get_8
#define PRIO_DARWIN_THREAD 3
#define bfd_stat_arch_elt(abfd,stat) BFD_SEND (abfd, _bfd_stat_arch_elt,(abfd, stat))
#define CLD_EXITED 1
#define BFD_TRADITIONAL_FORMAT 0x400
#define _SYS__TYPES_H_ 
#define __INT_LEAST32_MAX__ 0x7fffffff
#define IOPOL_THROTTLE 3
#define BSF_WEAK 0x80
#define __STRING(x) #x
#define bfd_mach_am33_2 332
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define bfd_h_get_signed_8(abfd,ptr) bfd_get_signed_8 (abfd, ptr)
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define F_SIZEQ (1 << 6)
#define bfd_mach_mips_gs264e 3005
#define BSF_OLD_COMMON 0x200
#define bfd_mach_mips5 5
#define _SYS_RESOURCE_H_ 
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define BFD_FAKE_SECTION(SEC,FLAGS,SYM,SYM_PTR,NAME,IDX) { NAME, IDX, 0, NULL, NULL, FLAGS, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (struct bfd_section *) &SEC, 0, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, 0, NULL, NULL, NULL, (struct bfd_symbol *) SYM, (struct bfd_symbol **) SYM_PTR, { NULL }, { NULL } }
#define RLIMIT_RSS RLIMIT_AS
#define bfd_mach_mips8000 8000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __MAC_10_12_4 101204
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __WATCHOS_3_0 30000
#define bfd_mach_sparc 1
#define AARCH64_MAX_QLF_SEQ_NUM 10
#define bfd_update_armap_timestamp(abfd) BFD_SEND (abfd, _bfd_update_armap_timestamp, (abfd))
#define _INTMAX_T 
#define __IPHONE_13_5 130500
#define HAS_LOAD_PAGE 0x1000
#define AARCH64_FEATURE_F16 0x02000000
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define F_OPD2_OPT (3 << 12)
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define SEC_HAS_CONTENTS 0x100
#define __IOS_UNAVAILABLE 
#define bfd_mach_ppc_rs64iii 643
#define __API_DEPRECATED(...) 
#define INT32_MAX 2147483647
#define _U_INT8_T 
#define __DARWIN_OS_INLINE static inline
#define bfd_mach_sh2a 0x2a
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define bfd_mach_crx 1
#define PRIO_DARWIN_BG 0x1000
#define __FLT128_HAS_DENORM__ 1
#define BFD_HOST_U_64_BIT unsigned long long
#define bfd_mach_sh3e 0x3e
#define bfd_mach_mips5400 5400
#define bfd_mach_avr6 6
#define SIG_UNBLOCK 2
#define BSF_DEBUGGING 0x08
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __FLT128_DIG__ 33
#define bfd_mach_sh4a 0x4a
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define _Null_unspecified 
#define IOPOL_STANDARD 5
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define bfd_debug_info_end(abfd) BFD_SEND (abfd, _bfd_debug_info_end, (abfd))
#define bfd_mach_m68000 1
#define bfd_mach_mcf_isa_b_nousp 16
#define FOOTPRINT_INTERVAL_RESET 0x1
#define H_PUT_8 bfd_h_put_8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define F_OD(X) (((X) & 0x7) << 24)
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define BSF_EXPORT BSF_GLOBAL
#define BSF_CONSTRUCTOR 0x800
#define __exported_pop _Pragma("GCC visibility pop")
#define F_P3 (3 << 2)
#define __MAC_10_15_4 101504
#define F_N (1 << 23)
#define BSF_DEBUGGING_RELOC 0x20000
#define _INT64_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define BFD_DEFAULT_TARGET_SIZE 32
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define bfd_h_put_signed_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define BFD_SEND(bfd,message,arglist) ((*((bfd)->xvec->message)) arglist)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __enum_closed 
#define bfd_set_section(x,y) ((x)->section) = (y)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define bfd_mach_x86_64 64
#define _OS__OSBYTEORDERI386_H 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __FLT64X_DIG__ 18
#define BSF_FILE 0x4000
#define F_SF (1 << 5)
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#define __INT8_TYPE__ signed char
#define _UINTMAX_T 
#define bfd_mach_mcf_isa_a 10
#define bfd_mach_mcf_isa_b 19
#define BSF_THREAD_LOCAL 0x40000
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define bfd_mach_mips12000 12000
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __MAC_10_14_6 101406
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define bfd_mach_fr400 400
#define RLIMIT_NPROC 7
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define __MAC_10_11_3 101103
#define __APPLE_API_STANDARD 
#define BFD_JUMP_TABLE_GENERIC(NAME) NAME ##_close_and_cleanup, NAME ##_bfd_free_cached_info, NAME ##_new_section_hook, NAME ##_get_section_contents, NAME ##_get_section_contents_in_window
#define SIG_BLOCK 1
#define ELF_INFO_TYPE_NONE 0
#define __FLT_RADIX__ 2
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define bfd_mach_arc_7 7
#define IOPOL_PASSIVE 2
#define bfd_mach_ppc_ec603e 6031
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define bfd_mach_mcf_isa_aplus 13
#define SIGABRT 6
#define FPE_INTOVF 8
#define FPE_FLTSUB 6
#define XCONCAT2(a,b) CONCAT2(a,b)
#define XCONCAT3(a,b,c) CONCAT3(a,b,c)
#define XCONCAT4(a,b,c,d) CONCAT4(a,b,c,d)
#define __SSE_MATH__ 1
#define AARCH64_FEATURE(core,coproc) ((core) | (coproc))
#define __k8 1
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define UINT_FAST32_MAX UINT32_MAX
#define bfd_asymbol_flavour(x) (bfd_asymbol_bfd(x)->xvec->flavour)
#define HOWTO(C,R,S,B,P,BI,O,SF,NAME,INPLACE,MASKSRC,MASKDST,PC) { (unsigned) C, R, S, B, P, BI, O, SF, NAME, INPLACE, MASKSRC, MASKDST, PC }
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define _UID_T 
#define bfd_set_cacheable(abfd,bool) (((abfd)->cacheable = bool), TRUE)
#define bfd_mach_fr450 450
#define INTMAX_C(v) (v ## L)
#define AARCH64_ARCH_NONE AARCH64_FEATURE (0, 0)
#define INT_LEAST64_MAX INT64_MAX
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define bfd_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_64, (ptr))
#define bfd_mach_sparc_v8plusa 5
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define bfd_mach_sparc_v8plusb 9
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define _W_INT(w) (*(int *)&(w))
#define bfd_mach_iq2000 1
#define bfd_has_map(abfd) ((abfd)->has_armap)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define WSTOPPED 0x00000008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define bfd_mach_mips_interaptiv_mr2 736550
#define __DARWIN_64_BIT_INO_T 1
#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)
#define __TVOS_14_0 140000
#define INLINE __inline__
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define INT8_C(v) (v)
#define FP_CHOP 3
#define __TVOS_14_5 140500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define TRAP_BRKPT 1
#define __LDBL_DIG__ 18
#define BSF_NOT_AT_END 0x400
#define bfd_mach_mcf_isa_b_float_mac 23
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))
#define bfd_section_list_append(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->next = NULL; if (_abfd->section_last) { _s->prev = _abfd->section_last; _abfd->section_last->next = _s; } else { _s->prev = NULL; _abfd->sections = _s; } _abfd->section_last = _s; } while (0)
#define bfd_mach_ppc_403 403
#define bfd_mach_fr30 0x46523330
#define __INT_FAST16_MAX__ 0x7fff
#define bfd_discard_group(abfd,sec) BFD_SEND (abfd, _bfd_discard_group, (abfd, sec))
#define _BSD_MACHINE__TYPES_H_ 
#define __deprecated __attribute__((__deprecated__))
#define bfd_mach_mcf_isa_b_mac 20
#define CONCAT4(a,b,c,d) XCONCAT2(CONCAT2(a,b),CONCAT2(c,d))
#define INT_LEAST64_MIN INT64_MIN
#define bfd_is_com_section(ptr) (((ptr)->flags & SEC_IS_COMMON) != 0)
#define __FLT64_DIG__ 15
#define bfd_big_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_BIG)
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define SEC_LINK_DUPLICATES_SAME_SIZE 0x100000
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define NULL __DARWIN_NULL
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define INT32_C(v) (v)
#define BFD_LINKER_CREATED 0x2000
#define __FLT_MAX_10_EXP__ 38
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __FLT64X_HAS_DENORM__ 1
#define bfd_mach_z80strict 1
#define __dead2 __attribute__((__noreturn__))
#define F_OPD0_OPT (1 << 12)
#define bfd_find_inliner_info(abfd,file,func,line) BFD_SEND (abfd, _bfd_find_inliner_info, (abfd, file, func, line))
#define POLL_OUT 2
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define bfd_section_lma(bfd,ptr) ((ptr)->lma)
#define bfd_get_section(x) ((x)->section)
#define bfd_get_section_userdata(bfd,ptr) ((ptr)->userdata)
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define BFD_HOST_64BIT_LONG 0
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define BFD_HOST_LONG_LONG 1
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define SIGXFSZ 25
#define bfd_mach_i386_i8086 2
#define __kpi_deprecated(_msg) 
#define bfd_mach_sparc_sparclite 3
#define __UINT_FAST16_TYPE__ short unsigned int
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define __PTHREAD_COND_SIZE__ 40
#define SI_MESGQ 0x10005
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define DEFUN(name,arglist,args) name(args)
#define __SEG_FS 1
#define _PID_T 
#define __INT_LEAST16_MAX__ 0x7fff
#define bfd_put_signed_16 bfd_put_16
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define bfd_mach_i960_kb_sb 3
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define SIGCHLD 20
#define bfd_mach_xc16xl 2
#define bfd_mach_xc16xs 3
#define __APPLE_API_OBSOLETE 
#define bfd_put_signed_32 bfd_put_32
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define SIGSTOP 17
#define __STDC_VERSION__ 201710L
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define __SIZEOF_INT__ 4
#define __PTHREAD_SIZE__ 8176
#define BFD_FORT_COMM_DEFAULT_VALUE 0
#define _MACHTYPES_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(v) (v ## UL)
#define SIG_ATOMIC_MAX INT32_MAX
#define MAC_OS_X_VERSION_10_12_1 101201
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define bfd_mach_sh 1
#define RUSAGE_SELF 0
#define MAC_OS_X_VERSION_10_12_2 101202
#define SEC_MERGE 0x1000000
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define AND ,
#define RLIM_NLIMITS 9
#define SIGSYS 12
#define bfd_put_signed_64 bfd_put_64
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define bfd_mach_m6812_default 0
#define SA_NOCLDSTOP 0x0008
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define __DARWIN_LITTLE_ENDIAN 1234
#define BSF_OBJECT 0x10000
#define bfd_section_already_linked(abfd,sec) BFD_SEND (abfd, _section_already_linked, (abfd, sec))
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define bfd_mach_ip2022 1
#define WNOWAIT 0x00000020
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define __LITTLE_ENDIAN__ 1
#define AARCH64_FEATURE_SM4 0x100000000ULL
#define bfd_mach_sh3_nommu 0x31
#define bfd_copy_private_header_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_header_data, (ibfd, obfd))
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define __BFD_H_SEEN__ 
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define STRINGX(s) #s
#define __FLT32X_DIG__ 15
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define VPARAMS(ARGS) ARGS
#define __WORDSIZE 64
#define bfd_mach_sh4_nommu_nofpu 0x42
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define bfd_mach_mcf_isa_aplus_mac 14
#define __CONSTANT_CFSTRINGS__ 1
#define bfd_get_start_address(abfd) ((abfd)->start_address)
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define BSF_SECTION_SYM 0x100
#define bfd_get_format(abfd) ((abfd)->format)
#define bfd_get_section_size(ptr) ((ptr)->size)
#define POLL_HUP 6
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define F_SSIZE (1 << 8)
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _ANSIDECL_H 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define bfd_mach_arm_2a 2
#define bfd_get_8(abfd,ptr) (*(unsigned char *) (ptr) & 0xff)
#define bfd_get_symbol_leading_char(abfd) ((abfd)->xvec->symbol_leading_char)
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __TVOS_PROHIBITED 
#define _SYS__PTHREAD_TYPES_H_ 
#define FALSE 0
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define __API_UNAVAILABLE_END 
#define MAC_OS_X_VERSION_10_6 1060
#define bfd_mach_mips4600 4600
#define bfd_mach_arm_4T 6
#define __pic__ 2
#define F_COND (1 << 4)
#define bfd_mach_mcf_isa_aplus_emac 15
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define bfd_mach_arm_5T 8
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define FP_RND_DOWN 1
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define __CONCAT(x,y) x ## y
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define bfd_mach_sh2a_nofpu_or_sh4_nommu_nofpu 0x2a1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define BFD_JUMP_TABLE_WRITE(NAME) NAME ##_set_arch_mach, NAME ##_set_section_contents
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define bfd_mach_m6812 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define bfd_mach_x86_64_intel_syntax 65
#define __FLT64X_MAX_EXP__ 16384
#define AARCH64_MERGE_FEATURE_SETS(TARG,F1,F2) do { (TARG) = (F1) | (F2); } while (0)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define bfd_mach_m6812s 2
#define bfd_mach_rs6k_rs2 6002
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define bfd_mach_rs6k_rs1 6001
#define bfd_mach_mips4650 4650
#define SIGURG 16
#define UINT_FAST8_MAX UINT8_MAX
#define __INT_MAX__ 0x7fffffff
#define bfd_get_flavour(abfd) ((abfd)->xvec->flavour)
#define w_retcode w_T.w_Retcode
#define bfd_mach_ppc_860 860
#define bfd_mach_rs6k_rsc 6003
#define _CT_RUNE_T 
#define MB_CUR_MAX __mb_cur_max
#define UINT8_MAX 255
#define align_power(addr,align) (((addr) + ((bfd_vma) 1 << (align)) - 1) & ((bfd_vma) -1 << (align)))
#define _UINT16_T 
#define bfd_section_size(bfd,ptr) ((ptr)->size)
#define bfd_init_private_section_data(ibfd,isec,obfd,osec,link_info) BFD_SEND (obfd, _bfd_init_private_section_data, (ibfd, isec, obfd, osec, link_info))
#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define __API_AVAILABLE(...) 
#define bfd_mach_arm_2 1
#define bfd_mach_arm_4 5
#define bfd_mach_arm_5 7
#define bfd_get_symcount(abfd) ((abfd)->symcount)
#define INT_LEAST16_MIN INT16_MIN
#define RUSAGE_CHILDREN -1
#define BFD_JUMP_TABLE_LINK(NAME) NAME ##_sizeof_headers, NAME ##_bfd_get_relocated_section_contents, NAME ##_bfd_relax_section, NAME ##_bfd_link_hash_table_create, NAME ##_bfd_link_hash_table_free, NAME ##_bfd_link_add_symbols, NAME ##_bfd_link_just_syms, NAME ##_bfd_final_link, NAME ##_bfd_link_split_section, NAME ##_bfd_gc_sections, NAME ##_bfd_merge_sections, NAME ##_bfd_is_group_section, NAME ##_bfd_discard_group, NAME ##_section_already_linked
#define CLD_STOPPED 5
#define __INT64_TYPE__ long long int
#define bfd_merge_sections(abfd,link_info) BFD_SEND (abfd, _bfd_merge_sections, (abfd, link_info))
#define __FLT_MAX_EXP__ 128
#define UINT32_C(v) (v ## U)
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _WSTOPPED 0177
#define __DBL_MANT_DIG__ 53
#define bfd_mach_m68030 5
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define bfd_copy_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_bfd_data, (ibfd, obfd))
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __deprecated_enum_msg(_msg) 
#define bfd_mach_mcf_isa_b_nousp_emac 18
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define bfd_get_section_limit(bfd,sec) (((sec)->rawsize ? (sec)->rawsize : (sec)->size) / bfd_octets_per_byte (bfd))
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define bfd_get_section_vma(bfd,ptr) ((ptr)->vma + 0)
#define __SSE__ 1
#define SEC_DEBUGGING 0x2000
#define POLL_PRI 5
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define XSTRING(s) STRINGX(s)
#define bfd_get_file_flags(abfd) ((abfd)->flags)
#define __PTHREAD_CONDATTR_SIZE__ 8
#define bfd_section_list_remove(ABFD,S) do { asection *_s = S; asection *_next = _s->next; asection *_prev = _s->prev; if (_prev) _prev->next = _next; else (ABFD)->sections = _next; if (_next) _next->prev = _prev; else (ABFD)->section_last = _prev; } while (0)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __MAC_11_1 110100
#define D_PAGED 0x100
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define INT_LEAST32_MIN INT32_MIN
#define __WINT_WIDTH__ 32
#define AARCH64_PCREL_OFFSET 0
#define __INT_LEAST8_MAX__ 0x7f
#define SIGUSR1 30
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define RLIMIT_DATA 2
#define _RUNE_T 
#define _MACH_MACHINE__STRUCTS_H_ 
#define bfd_mach_cris_v0_v10 255
#define F_HAS_ALIAS (1 << 1)
#define bfd_mach_mips4000 4000
#define SIGTSTP 18
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define __FLT64X_IS_IEC_60559__ 2
#define bfd_section_removed_from_list(ABFD,S) ((S)->next ? (S)->next->prev != (S) : (ABFD)->section_last != (S))
#define bfd_get_output_section(x) ((x)->section->output_section)
#define bfd_ind_section_ptr ((asection *) &bfd_ind_section)
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define RLIMIT_FSIZE 1
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define bfd_mach_mips6000 6000
#define F_SYS_READ (1ULL << 29)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _PTHREAD_ATTR_T 
#define SIGSTKSZ 131072
#define _LP64 1
#define SIGEMT 7
#define __UINT8_C(c) c
#define RLIMIT_MEMLOCK 6
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define SIGKILL 9
#define _bfd_int64_high(x) ((unsigned long) (((x) >> 32) & 0xffffffff))
#define BFD_HOST_64_BIT long long
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define bfd_mach_mcf_isa_a_nodiv 9
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define bfd_mach_sh4a_nofpu 0x4b
#define __has_feature(x) 0
#define bfd_mach_mips5500 5500
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define BSF_WARNING 0x1000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define _SIGSET_T 
#define MAC_OS_X_VERSION_10_10 101000
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define MAC_OS_X_VERSION_10_12 101200
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define F_P1 (1 << 2)
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define bfd_h_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_32, (ptr))
#define MAC_OS_X_VERSION_10_15 101500
#define bfd_minisymbol_to_symbol(b,d,m,f) BFD_SEND (b, _minisymbol_to_symbol, (b, d, m, f))
#define bfd_put_signed_8 bfd_put_8
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define SEC_EXCLUDE 0x8000
#define PTR void *
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define SA_RESTART 0x0002
#define bfd_mach_xstormy16 1
#define F_OPD4_OPT (5 << 12)
#define bfd_mach_v850e 'E'
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define __MAC_10_11_2 101102
#define __INT_FAST8_TYPE__ signed char
#define __TVOS_11_4 110400
#define bfd_get_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_symtab_upper_bound, (abfd))
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define COFF_SWAP_TABLE (void *) &bfd_coff_std_swap_table
#define bfd_h_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_64, (ptr))
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define CLD_TRAPPED 4
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define bfd_mach_sh_dsp 0x2d
#define __GNUC_STDC_INLINE__ 1
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V5 5
#define bfd_find_line(abfd,syms,sym,file,line) BFD_SEND (abfd, _bfd_find_line, (abfd, syms, sym, file, line))
#define bfd_put(bits,abfd,val,ptr) ((bits) == 8 ? bfd_put_8 (abfd, val, ptr) : (bits) == 16 ? bfd_put_16 (abfd, val, ptr) : (bits) == 32 ? bfd_put_32 (abfd, val, ptr) : (bits) == 64 ? bfd_put_64 (abfd, val, ptr) : (abort (), (void) 0))
#define bfd_get_symbol_info(b,p,e) BFD_SEND (b, _bfd_get_symbol_info, (b,p,e))
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define SEC_NEVER_LOAD 0x200
#define MINSIGSTKSZ 32768
#define bfd_mach_z8002 2
#define F_SYS_WRITE (1ULL << 30)
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define w_coredump w_T.w_Coredump
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define SEC_LINK_DUPLICATES 0x40000
#define AARCH64_FEATURE_RDMA 0x00800000
#define SV_INTERRUPT SA_RESTART
#define AARCH64_FEATURE_AES 0x800000000ULL
#define ELF_INFO_TYPE_MERGE 2
#define CLD_DUMPED 3
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define AARCH64_FEATURE_COMPNUM 0x40000000
#define AARCH64_FEATURE_CRC 0x00080000
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _MACH_I386__STRUCTS_H_ 
#define SIGFPE 8
#define WCOREFLAG 0200
#define SEC_CODE 0x010
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define bfd_com_section_ptr ((asection *) &bfd_com_section)
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define WP_TEXT 0x80
#define bfd_mach_sh3_dsp 0x3d
#define bfd_mach_fr500 500
#define bfd_get_dynamic_reloc_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_reloc_upper_bound, (abfd))
#define __INTMAX_WIDTH__ 64
#define AARCH64_FEATURE_SVE 0x10000000
#define _RLIMIT_POSIX_FLAG 0x1000
#define _INTPTR_T 
#define bfd_mach_mips10000 10000
#define bfd_h_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_16, (ptr))
#define __UINT32_C(c) c ## U
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define FPE_FLTUND 3
#define BFD_JUMP_TABLE_COPY(NAME) NAME ##_bfd_copy_private_bfd_data, NAME ##_bfd_merge_private_bfd_data, _bfd_generic_init_private_section_data, NAME ##_bfd_copy_private_section_data, NAME ##_bfd_copy_private_symbol_data, NAME ##_bfd_copy_private_header_data, NAME ##_bfd_set_private_flags, NAME ##_bfd_print_private_bfd_data
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __PTHREAD_MUTEX_SIZE__ 56
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define bfd_mach_m32c 0x78
#define bfd_debug_info_start(abfd) BFD_SEND (abfd, _bfd_debug_info_start, (abfd))
#define bfd_relax_section(abfd,section,link_info,again) BFD_SEND (abfd, _bfd_relax_section, (abfd, section, link_info, again))
#define bfd_mach_msp11 11
#define bfd_mach_msp12 12
#define bfd_mach_msp13 13
#define bfd_mach_mips9000 9000
#define bfd_mach_msp16 16
#define bfd_mach_sh2e 0x2e
#define INTMAX_MIN (-INTMAX_MAX-1)
#define bfd_set_section_alignment(bfd,ptr,val) (((ptr)->alignment_power = (val)),TRUE)
#define bfd_mach_sh2 0x20
#define bfd_mach_sh3 0x30
#define bfd_mach_sh4 0x40
#define bfd_print_symbol(b,p,s,e) BFD_SEND (b, _bfd_print_symbol, (b,p,s,e))
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define bfd_mach_msp21 21
#define sigmask(m) (1 << ((m)-1))
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define HOWTO_PREPARE(relocation,symbol) { if (symbol != NULL) { if (bfd_is_com_section (symbol->section)) { relocation = 0; } else { relocation = symbol->value; } } }
#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED
#define bfd_mach_fr550 550
#define F_LSE_SZ (1 << 27)
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define bfd_mach_msp31 31
#define bfd_mach_msp32 32
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define __TVOS_11_3 110300
#define AARCH64_FEATURE_V8_2 0x00000020
#define bfd_mach_mips_octeon2 6502
#define bfd_mach_mips_octeon3 6503
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define printf_vma(x) fprintf_vma(stdout,x)
#define bfd_mach_msp41 41
#define bfd_mach_msp42 42
#define bfd_mach_msp44 44
#define bfd_get_section_name(bfd,ptr) ((ptr)->name + 0)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLL_IN 1
#define bfd_mach_mips_octeonp 6601
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define INT_FAST64_MAX INT64_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define __MAC_10_13_4 101304
#define SA_NOCLDWAIT 0x0020
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SA_NODEFER 0x0010
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define bfd_header_little_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_LITTLE)
#define opcodes_error_handler _bfd_error_handler
#define __SSE2__ 1
#define PROTO(type,name,arglist) type name arglist
#define _SYS_WAIT_H_ 
#define SIGILL 4
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define AARCH64_FEATURE_DOTPROD 0x080000000
#define __SIZEOF_DOUBLE__ 8
#define F_OPD3_OPT (4 << 12)
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define bfd_link_hash_table_create(abfd) BFD_SEND (abfd, _bfd_link_hash_table_create, (abfd))
#define bfd_mach_arm_3 3
#define __AVAILABILITY_INTERNAL__ 
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define bfd_mach_mcf_isa_a_emac 12
#define AARCH64_FEATURE_PROFILE 0x08000000
#define bfd_mach_ppc_505 505
#define _QUAD_HIGHWORD 1
#define bfd_header_big_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_BIG)
#define bfd_mach_mips4300 4300
#define SIGIOT SIGABRT
#define SV_RESETHAND SA_RESETHAND
#define bfd_mach_mips5900 5900
#define RLIMIT_THREAD_CPULIMITS 0x3
#define bfd_mach_cpu32 8
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define bfd_h_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx16, (val, ptr))
#define F_LDS_SIZE (1 << 11)
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define bfd_mach_ia64_elf32 32
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define AARCH64_FEATURE_FP 0x00020000
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)
#define ILL_PRVOPC 3
#define BSF_KEEP_G 0x40
#define INT_FAST64_MIN INT64_MIN
#define bfd_h_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx32, (val, ptr))
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define bfd_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_putx16, ((val),(ptr)))
#define __INT16_C(c) c
#define LONG_DOUBLE long double
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define bfd_applicable_section_flags(abfd) ((abfd)->xvec->section_flags)
#define bfd_asymbol_value(x) (bfd_asymbol_base(x) + (x)->value)
#define __STDC__ 1
#define PARAMS(ARGS) ARGS
#define bfd_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_putx32, ((val),(ptr)))
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define bfd_mach_hppa20w 25
#define bfd_mach_ia64_elf64 64
#define NEWHOWTO(FUNCTION,NAME,SIZE,REL,IN) HOWTO (0, 0, SIZE, 0, REL, 0, complain_overflow_dont, FUNCTION, NAME, FALSE, 0, 0, IN)
#define __PTRDIFF_TYPE__ long int
#define bfd_h_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx64, (val, ptr))
#define bfd_mach_msp14 14
#define bfd_get_elt_at_index(b,i) BFD_SEND (b, _bfd_get_elt_at_index, (b,i))
#define bfd_mach_m32r 1
#define __IPHONE_13_1 130100
#define __IPHONE_13_3 130300
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define SIGTERM 15
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define bfd_get_cacheable(abfd) ((abfd)->cacheable)
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define __ATOMIC_SEQ_CST 5
#define H_GET_S32 bfd_h_get_signed_32
#define bfd_section_list_prepend(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->prev = NULL; if (_abfd->sections) { _s->next = _abfd->sections; _abfd->sections->prev = _s; } else { _s->next = NULL; _abfd->section_last = _s; } _abfd->sections = _s; } while (0)
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define bfd_is_const_section(SEC) ( ((SEC) == bfd_abs_section_ptr) || ((SEC) == bfd_und_section_ptr) || ((SEC) == bfd_com_section_ptr) || ((SEC) == bfd_ind_section_ptr))
#define bfd_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_putx64, ((val), (ptr)))
#define BFD_RELOC_SPARC_64 BFD_RELOC_64
#define __FLT32X_MIN_10_EXP__ (-307)
#define bfd_mach_maxq10 10
#define CONST_STRNEQ(STR1,STR2) (strncmp ((STR1), (STR2), sizeof (STR2) - 1) == 0)
#define __UINTPTR_TYPE__ long unsigned int
#define HAS_SYMS 0x10
#define bfd_mach_sparc_v9a 8
#define bfd_mach_sparc_v9b 10
#define fprintf_vma(s,x) fprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define __TVOS_10_0_1 100001
#define AARCH64_FEATURE_LOR 0x00400000
#define BFD_IND_SECTION_NAME "*IND*"
#define _BSD_MACHINE_SIGNAL_H_ 
#define __LDBL_MIN_10_EXP__ (-4931)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define DEBUG_TRACE_IF(C,M,...) ;
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define FPE_FLTINV 5
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define __SIZEOF_LONG_LONG__ 8
#define SEC_LINK_DUPLICATES_ONE_ONLY 0x80000
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define RLIMIT_STACK 3
#define POLL_ERR 4
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __MAC_10_10 101000
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define AARCH64_FEATURE_LSE 0x00100000
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define bfd_mach_arm_XScale 10
#define PTRDIFF_MAX INTMAX_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define H_PUT_16 bfd_h_put_16
#define INT_FAST8_MAX INT8_MAX
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define bfd_put_8(abfd,val,ptr) ((void) (*((unsigned char *) (ptr)) = (val) & 0xff))
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define bfd_mach_ppc_a35 35
#define bfd_mach_sh2a_or_sh4 0x2a3
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define INT_LEAST16_MAX INT16_MAX
#define SEC_KEEP 0x400000
#define H_PUT_32 bfd_h_put_32
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define __OSX_AVAILABLE(_vers) 
#define bfd_read_minisymbols(b,d,m,s) BFD_SEND (b, _read_minisymbols, (b, d, m, s))
#define _U_INT16_T 
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define __P(protos) protos
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define FP_PREC_53B 2
#define AARCH64_FEATURE_V8 0x00000001
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define bfd_mach_z80 3
