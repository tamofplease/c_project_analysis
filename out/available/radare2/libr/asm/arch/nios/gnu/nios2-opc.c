#define bfd_link_hash_table_free(abfd,hash) BFD_SEND (abfd, _bfd_link_hash_table_free, (hash))
#define bfd_mach_maxq20 20
#define IW_SHIFT_IMM5_MASK 0x1f
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define H_PUT_64 bfd_h_put_64
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define OP_LDBUIO 35
#define _SYS__TYPES_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define bfd_mach_msp13 13
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define bfd_mach_sparc_v9 7
#define bfd_mach_ppc_rs64ii 642
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define bfd_mach_mcf_isa_aplus_mac 14
#define bfd_mach_m32r 1
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define bfd_mach_mips5000 5000
#define OPX_CMPGEU 40
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define IW_CONTROL_REGNUM_SZ 4
#define bfd_mach_mips_sb1 12310201
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define bfd_mach_mips16000 16000
#define bfd_abs_section_ptr ((asection *) &bfd_abs_section)
#define bfd_mach_mcf_isa_b_nousp_mac 17
#define bfd_mach_sparc_v8plus 4
#define bfd_mach_cr16c 1
#define ELF_INFO_TYPE_EH_FRAME 3
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __DRIVERKIT_19_0 190000
#define bfd_mach_r800 11
#define IW_C_SZ 5
#define __INTMAX_C(c) c ## L
#define OP_MATCH_BNE OP_BNE
#define OP_MASK_NEXTPC ((OP_MASK_RRS | OP_MASK_RRT | OP_MASK_ROPX | OP_MASK_OP))
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define OP_MATCH_ORHI OP_ORHI
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define OPX_CMPEQ 32
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define bfd_mach_arc_5 5
#define bfd_mach_arc_6 6
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define CONCAT2(a,b) a ##b
#define CONCAT3(a,b,c) a ##b ##c
#define IW_IMM26_SZ 26
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define bfd_mach_mipsisa64r2 65
#define bfd_mach_mipsisa64r3 66
#define bfd_mach_mipsisa64r5 68
#define bfd_mach_mipsisa64r6 69
#define _U_INT64_T 
#define BFD_JUMP_TABLE_SYMBOLS(NAME) NAME ##_get_symtab_upper_bound, NAME ##_canonicalize_symtab, NAME ##_make_empty_symbol, NAME ##_print_symbol, NAME ##_get_symbol_info, NAME ##_bfd_is_local_label_name, NAME ##_bfd_is_target_special_symbol, NAME ##_get_lineno, NAME ##_find_nearest_line, _bfd_generic_find_line, NAME ##_find_inliner_info, NAME ##_bfd_make_debug_symbol, NAME ##_read_minisymbols, NAME ##_minisymbol_to_symbol
#define __UINT8_MAX__ 0xff
#define bfd_mach_i386_i386_intel_syntax 3
#define __SCHAR_WIDTH__ 8
#define OPX_CMPGE 8
#define bfd_mach_sparc_sparclet 2
#define __WINT_MAX__ 0x7fffffff
#define OP_BR 6
#define __PTHREAD_ATTR_SIZE__ 56
#define __FLT32_MIN_EXP__ (-125)
#define BFD_JUMP_TABLE_RELOCS(NAME) NAME ##_get_reloc_upper_bound, NAME ##_canonicalize_reloc, NAME ##_bfd_reloc_type_lookup
#define IW_OPX_MSB 16
#define bfd_mach_sparc_sparclite_le 6
#define ATTRIBUTE_HOT __attribute__ ((__hot__))
#define bfd_section_list_insert_after(ABFD,A,S) do { asection *_a = A; asection *_s = S; asection *_next = _a->next; _s->next = _next; _s->prev = _a; _a->next = _s; if (_next) _next->prev = _s; else (ABFD)->section_last = _s; } while (0)
#define OPX_SLLI 18
#define _CDEFS_H_ 
#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define OPX_HBREAK 53
#define bfd_get_section_lma(bfd,ptr) ((ptr)->lma + 0)
#define bfd_sizeof_headers(abfd,reloc) BFD_SEND (abfd, _bfd_sizeof_headers, (abfd, reloc))
#define bfd_mach_mcf_isa_a_mac 11
#define bfd_mach_ppc_e500 500
#define bfd_mach_ppc64 64
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define IW_IMM16_MSB 21
#define SEC_READONLY 0x008
#define bfd_family_coff(abfd) (bfd_get_flavour (abfd) == bfd_target_coff_flavour || bfd_get_flavour (abfd) == bfd_target_xcoff_flavour)
#define OPX_DIV 37
#define __WCHAR_MAX__ 0x7fffffff
#define OP_MASK_CACHE_OPX (IW_B_MASK << IW_B_LSB)
#define OPX_FLUSHI 12
#define OPX_CMPLT 16
#define bfd_my_archive(abfd) ((abfd)->my_archive)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define SEC_COFF_SHARED 0x20000000
#define SEC_LINKER_CREATED 0x200000
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define __GCC_IEC_559 2
#define bfd_mach_ppc_e500mc 5001
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define __IOS_PROHIBITED 
#define bfd_h_put_signed_32 bfd_h_put_32
#define __FLT_EVAL_METHOD__ 0
#define ELF_INFO_TYPE_NONE 0
#define OPX_CMPNE 24
#define bfd_get_elt_at_index(b,i) BFD_SEND (b, _bfd_get_elt_at_index, (b,i))
#define putc_unlocked(x,fp) __sputc(x, fp)
#define bfd_canonicalize_dynamic_symtab(abfd,asymbols) BFD_SEND (abfd, _bfd_canonicalize_dynamic_symtab, (abfd, asymbols))
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define IW_CONTROL_REGNUM_LSB 6
#define OP_MASK_ROLI ((OP_MASK_RRT | OP_MASK_ROPX | OP_MASK_OP))
#define __API_DEPRECATED_END 
#define OP_FLUSHD 59
#define bfd_mach_msp14 14
#define __WATCHOS_4_0 40000
#define SEC_IS_COMMON 0x1000
#define __FLT64_DECIMAL_DIG__ 17
#define OP_MASK_IOP (IW_OP_MASK << IW_OP_LSB)
#define __disable_tail_calls 
#define bfd_mach_msp15 15
#define BFD_IS_RELAXABLE 0x200
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
#define H_GET_16 bfd_h_get_16
#define bfd_is_und_section(sec) ((sec) == bfd_und_section_ptr)
#define OP_MATCH_XORHI OP_XORHI
#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define bfd_h_get_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx16, (ptr))
#define SEC_ROM 0x040
#define BFD_SEND_FMT(bfd,message,arglist) (((bfd)->xvec->message[(int) ((bfd)->format)]) arglist)
#define __DARWIN_SUF_1050 "$1050"
#define MAC_OS_X_VERSION_10_14_4 101404
#define OP_MATCH_CMPGE OPX_MATCH (OPX_CMPGE)
#define SEC_THREAD_LOCAL 0x400
#define BSF_WEAK 0x80
#define OP_MASK_IRS (IW_A_MASK << IW_A_LSB)
#define OP_MASK_IRT (IW_B_MASK << IW_B_LSB)
#define OPX_SYNC 54
#define OP_MASK_ROPX (IW_OPX_MASK << IW_OPX_LSB)
#define OP_MATCH_SRA OPX_MATCH (OPX_SRA)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define OP_SH_ROP IW_OP_LSB
#define __DBL_MIN_10_EXP__ (-307)
#define NIOS2_INSN_XORI 0x00000400
#define bfd_little_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_LITTLE)
#define __FINITE_MATH_ONLY__ 0
#define OPX_INITI 41
#define bfd_mach_msp33 33
#define __cold __attribute__((__cold__))
#define GET_IW_CONTROL_REGNUM(Iw) (((Iw) >> IW_CONTROL_REGNUM_LSB) & IW_CONTROL_REGNUM_MASK)
#define OP_MASK_SYNC ((OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP))
#define __FLT32X_MAX_EXP__ 1024
#define ELF_INFO_TYPE_STABS 1
#define __FLT32_HAS_DENORM__ 1
#define bfd_mach_ppc 32
#define bfd_mach_mips16 16
#define bfd_mach_mips4010 4010
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define OP_MATCH_CALL OP_CALL
#define bfd_mach_hppa10 10
#define SEC_LINK_DUPLICATES_DISCARD 0x0
#define __UINT_FAST8_MAX__ 0xff
#define IW_CONTROL_REGNUM_MASK 0xf
#define __WATCHOS_PROHIBITED 
#define HAS_RELOC 0x01
#define __FLT32_MAX_10_EXP__ 38
#define BSF_SECTION_SYM 0x100
#define OP_MATCH_SRL OPX_MATCH (OPX_SRL)
#define EMPTY_HOWTO(C) HOWTO ((C), 0, 0, 0, FALSE, 0, complain_overflow_dont, NULL, NULL, FALSE, 0, 0, FALSE)
#define __INT8_C(c) c
#define bfd_relax_section(abfd,section,link_info,again) BFD_SEND (abfd, _bfd_relax_section, (abfd, section, link_info, again))
#define H_PUT_S16 bfd_h_put_signed_16
#define __INT_LEAST8_WIDTH__ 8
#define bfd_mach_d10v 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define OPX_ADD 49
#define sprintf_vma(s,x) sprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define __SHRT_MAX__ 0x7fff
#define OPX_OR 22
#define H_PUT_S8 bfd_h_put_signed_8
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define OP_CMPEQI 32
#define bfd_section_name(bfd,ptr) ((ptr)->name)
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define BSF_INDIRECT 0x2000
#define OP_MATCH_LDHU OP_LDHU
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define bfd_link_just_syms(abfd,sec,info) BFD_SEND (abfd, _bfd_link_just_syms, (sec, info))
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define bfd_mach_xc16x 1
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define __SNPT 0x0800
#define H_PUT_S64 bfd_h_put_signed_64
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define SEC_NO_FLAGS 0x000
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define bfd_mach_sh5 0x50
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define OP_MASK_BREAK ((OP_MASK_RRS | OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP) & 0xfffff03f)
#define IW_OPX_MASK 0x3f
#define __result_use_check __attribute__((__warn_unused_result__))
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define IW_OPX_LSB 11
#define OP_MATCH_WRCTL OPX_MATCH (OPX_WRCTL)
#define bfd_mach_mipsisa32 32
#define SEC_LINK_DUPLICATES_SAME_CONTENTS (SEC_LINK_DUPLICATES_ONE_ONLY | SEC_LINK_DUPLICATES_SAME_SIZE)
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define bfd_mach_msp21 21
#define OP_LDHUIO 43
#define bfd_mach_h8300s 3
#define bfd_copy_private_section_data(ibfd,isection,obfd,osection) BFD_SEND (obfd, _bfd_copy_private_section_data, (ibfd, isection, obfd, osection))
#define bfd_mach_mrisc2 2
#define NULL __DARWIN_NULL
#define __UINT32_MAX__ 0xffffffffU
#define __PTHREAD_MUTEX_SIZE__ 56
#define __DARWIN_UNIX03 1
#define bfd_mach_hppa11 11
#define bfd_section_alignment(bfd,ptr) ((ptr)->alignment_power)
#define GET_IW_B(Iw) (((Iw) >> IW_B_LSB) & IW_B_MASK)
#define GET_IW_C(Iw) (((Iw) >> IW_C_LSB) & IW_C_MASK)
#define bfd_is_local_label_name(abfd,name) BFD_SEND (abfd, _bfd_is_local_label_name, (abfd, name))
#define bfd_mach_bfin 1
#define bfd_get_filename(abfd) ((char *) (abfd)->filename)
#define bfd_mach_mipsisa64 64
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define OP_MASK_FLUSHI ((OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP))
#define bfd_mach_tic3x 30
#define __FLT128_MIN_EXP__ (-16381)
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)
#define bfd_mach_d10v_ts2 2
#define bfd_mach_d10v_ts3 3
#define bfd_mach_sparc_64bit_p(mach) ((mach) >= bfd_mach_sparc_v9 && (mach) != bfd_mach_sparc_v8plusb)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define bfd_mach_i960_core 1
#define _bfd_int64_low(x) ((unsigned long) (((x) & 0xffffffff)))
#define bfd_get_outsymbols(abfd) ((abfd)->outsymbols)
#define bfd_debug_info_accumulate(abfd,section) BFD_SEND (abfd, _bfd_debug_info_accumulate, (abfd, section))
#define bfd_mach_msp43 43
#define __FLT128_MIN_10_EXP__ (-4931)
#define bfd_mach_h8300hn 4
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
#define OP_MATCH_BREAK ((0x1e << 17) | OPX_MATCH (OPX_BREAK))
#define OP_MATCH_CMPLTUI OP_CMPLTUI
#define BFD64 
#define __INT_LEAST16_WIDTH__ 16
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define bfd_mach_mips7000 7000
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define EXEC_P 0x02
#define bfd_mach_mips_loongson_2e 3001
#define bfd_get_section_name(bfd,ptr) ((ptr)->name + 0)
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define OP_MASK_CUSTOM_B 0x00008000
#define OPX_SLL 19
#define bfd_mach_hppa20 20
#define OP_MATCH_ADDI OP_ADDI
#define H_GET_S64 bfd_h_get_signed_64
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define bfd_mach_i960_ka_sa 2
#define OP_SH_CUSTOM_C 14
#define __MAC_11_1 110100
#define bfd_mach_arm_5TE 9
#define _FORTIFY_SOURCE 2
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define SYM_CAT_H 
#define BFD_NO_MORE_SYMBOLS ((symindex) ~0)
#define OP_INITDA 19
#define BFD_JUMP_TABLE_LINK(NAME) NAME ##_sizeof_headers, NAME ##_bfd_get_relocated_section_contents, NAME ##_bfd_relax_section, NAME ##_bfd_link_hash_table_create, NAME ##_bfd_link_hash_table_free, NAME ##_bfd_link_add_symbols, NAME ##_bfd_link_just_syms, NAME ##_bfd_final_link, NAME ##_bfd_link_split_section, NAME ##_bfd_gc_sections, NAME ##_bfd_merge_sections, NAME ##_bfd_is_group_section, NAME ##_bfd_discard_group, NAME ##_section_already_linked
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define bfd_mach_sh2a_nofpu 0x2b
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define bfd_mach_ppc_601 601
#define bfd_mach_ppc_602 602
#define bfd_mach_ppc_603 603
#define bfd_mach_ppc_604 604
#define OP_SH_CUSTOM_N 6
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define bfd_mach_mips4400 4400
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define bfd_is_group_section(abfd,sec) BFD_SEND (abfd, _bfd_is_group_section, (abfd, sec))
#define OP_MASK_INITI ((OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP))
#define __FLT32X_MANT_DIG__ 53
#define bfd_mach_mips_micromips 96
#define H_PUT_S32 bfd_h_put_signed_32
#define __USER_LABEL_PREFIX__ _
#define bfd_mach_ppc_620 620
#define OPX_SRA 59
#define NIOS2_INSN_CALL 0x00000040
#define OPX_SRL 27
#define SEC_STRINGS 0x2000000
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define OP_MATCH_TRAP ((0x1d << 17) | OPX_MATCH (OPX_TRAP))
#define OP_MASK_SRAI ((OP_MASK_RRT | OP_MASK_ROPX | OP_MASK_OP))
#define __SWR 0x0008
#define bfd_mach_ppc_630 630
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define OP_MATCH_SLL OPX_MATCH (OPX_SLL)
#define bfd_mach_cris_v32 32
#define bfd_h_get_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx32, (ptr))
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define bfd_mach_h8300h 2
#define bfd_mach_mips3900 3900
#define OP_SH_ROPX IW_OPX_LSB
#define __STDC_HOSTED__ 1
#define bfd_mach_h8300sn 5
#define bfd_mach_cris_v10_v32 1032
#define BFD_NO_FLAGS 0x00
#define _STDIO_H_ 
#define OP_LDB 7
#define OPX_SUB 57
#define bfd_mach_avr1 1
#define bfd_mach_avr2 2
#define bfd_mach_avr4 4
#define bfd_mach_avr5 5
#define ATTRIBUTE_COLD __attribute__ ((__cold__))
#define H_GET_32 bfd_h_get_32
#define MAC_OS_X_VERSION_10_12_4 101204
#define bfd_asymbol_name(x) ((x)->name)
#define TMP_MAX 308915776
#define bfd_mach_sh2a_nofpu_or_sh3_nommu 0x2a2
#define BFD_JUMP_TABLE_CORE(NAME) NAME ##_core_file_failing_command, NAME ##_core_file_failing_signal, NAME ##_core_file_matches_executable_p
#define bfd_mach_rs6k 6000
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define OP_MATCH_RET (0xf8000000 | OPX_MATCH (OPX_RET))
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define bfd_mach_tricore 4
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
#define OP_MATCH_MULXUU OPX_MATCH (OPX_MULXUU)
#define bfd_mach_h8300sxn 7
#define __PTHREAD_RWLOCK_SIZE__ 192
#define bfd_get_16(abfd,ptr) BFD_SEND (abfd, bfd_getx16, (ptr))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define bfd_is_const_section(SEC) ( ((SEC) == bfd_abs_section_ptr) || ((SEC) == bfd_und_section_ptr) || ((SEC) == bfd_com_section_ptr) || ((SEC) == bfd_ind_section_ptr))
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define OP_MATCH_STH OP_STH
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define OP_MATCH_STW OP_STW
#define __API_AVAILABLE_GET_MACRO(...) 
#define __IPHONE_13_4 130400
#define NEWHOWTO(FUNCTION,NAME,SIZE,REL,IN) HOWTO (0, 0, SIZE, 0, REL, 0, complain_overflow_dont, FUNCTION, NAME, FALSE, 0, 0, IN)
#define OP_MATCH_ADD OPX_MATCH (OPX_ADD)
#define bfd_applicable_file_flags(abfd) ((abfd)->xvec->object_flags)
#define OP_MATCH_CMPGEI OP_CMPGEI
#define OP_MATCH_CMPGEU OPX_MATCH (OPX_CMPGEU)
#define bfd_mach_mips_gs464e 3004
#define GET_IW_IMM16(Iw) (((Iw) >> IW_IMM16_LSB) & IW_IMM16_MASK)
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)
#define bfd_get_32(abfd,ptr) BFD_SEND (abfd, bfd_getx32, (ptr))
#define SEC_LINK_ONCE 0x20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define bfd_h_get_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx64, (ptr))
#define __strong 
#define BSF_KEEP 0x20
#define SEC_IN_MEMORY 0x4000
#define OP_MASK_SRLI ((OP_MASK_RRT | OP_MASK_ROPX | OP_MASK_OP))
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define SIGNED signed
#define bfd_section_vma(bfd,ptr) ((ptr)->vma)
#define __MAC_10_3 1030
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define OPX_AND 14
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define OP_MATCH_LDHIO OP_LDHIO
#define OP_MATCH_LDB OP_LDB
#define OP_ANDI 12
#define OP_MATCH_LDH OP_LDH
#define bfd_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_16, (ptr))
#define OP_MATCH_LDL OP_LDL
#define OP_SH_IMM16 IW_IMM16_LSB
#define bfd_mach_tic4x 40
#define __AVAILABILITY_VERSIONS__ 
#define bfd_get_64(abfd,ptr) BFD_SEND (abfd, bfd_getx64, (ptr))
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define bfd_get_signed_8(abfd,ptr) (((*(unsigned char *) (ptr) & 0xff) ^ 0x80) - 0x80)
#define OP_MATCH_OR OPX_MATCH (OPX_OR)
#define __AVAILABILITY_INTERNAL_REGULAR 
#define bfd_printf_vma(abfd,x) bfd_fprintf_vma (abfd,stdout,x)
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define OP_SH_IMM26 IW_IMM26_LSB
#define __APPLE__ 1
#define OP_MATCH_LDBUIO OP_LDBUIO
#define __UINT16_C(c) c
#define __WATCHOS_7_2 70200
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define bfd_count_sections(abfd) ((abfd)->section_count)
#define _INTPTR_T 
#define OPX_TRAP 45
#define SEC_LOAD 0x002
#define __DECIMAL_DIG__ 21
#define CONCAT4(a,b,c,d) XCONCAT2(CONCAT2(a,b),CONCAT2(c,d))
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))
#define BFD_JUMP_TABLE_DYNAMIC(NAME) NAME ##_get_dynamic_symtab_upper_bound, NAME ##_canonicalize_dynamic_symtab, NAME ##_get_synthetic_symtab, NAME ##_get_dynamic_reloc_upper_bound, NAME ##_canonicalize_dynamic_reloc
#define bfd_mach_arm_ep9312 11
#define __FLT128_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define bfd_asymbol_base(x) ((x)->section->vma)
#define OPX_MULXSS 31
#define OPX_MULXSU 23
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define OP_MATCH_AND OPX_MATCH (OPX_AND)
#define __FLT64_MANT_DIG__ 53
#define bfd_mach_mcf_isa_b_emac 21
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define bfd_mach_i386_i386 1
#define ATTRIBUTE_PACKED __attribute__ ((packed))
#define bfd_get_dynamic_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_symtab_upper_bound, (abfd))
#define __SPI_AVAILABLE(...) 
#define bfd_mach_msp110 110
#define bfd_mach_s390_31 31
#define __FLT64X_MANT_DIG__ 64
#define NOARGS void
#define bfd_h_put_signed_64 bfd_h_put_64
#define OPX_MULXUU 7
#define bfd_mach_ms1 1
#define bfd_mach_ms2 3
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
#define bfd_mach_sh4_nofpu 0x41
#define L_ctermid 1024
#define OP_MATCH_ROLI OPX_MATCH (OPX_ROLI)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define bfd_mach_s390_64 64
#define fileno_unlocked(p) __sfileno(p)
#define H_GET_64 bfd_h_get_64
#define bfd_mach_mips14000 14000
#define bfd_mach_ppc_7400 7400
#define bfd_set_section_userdata(bfd,ptr,val) (((ptr)->userdata = (val)),TRUE)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SEEK_CUR 1
#define __BIGGEST_ALIGNMENT__ 16
#define IW_SHIFT_IMM5_MSB 10
#define BFD_COM_SECTION_NAME "*COM*"
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define OP_MATCH_STC OP_STC
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define bfd_mach_m32r2 '2'
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define IW_OPX_SZ 6
#define OP_MATCH_OPX OP_OPX
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define BSF_CONSTRUCTOR 0x800
#define BSF_NO_FLAGS 0x00
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define bfd_mach_m32rx 'x'
#define OP_MASK_RRT (IW_B_MASK << IW_B_LSB)
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define OP_RDPRS 56
#define __pure 
#define bfd_mach_mn10300 300
#define bfd_get_synthetic_symtab(abfd,count,syms,dyncount,dynsyms,ret) BFD_SEND (abfd, _bfd_get_synthetic_symtab, (abfd, count, syms, dyncount, dynsyms, ret))
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define bfd_get(bits,abfd,ptr) ((bits) == 8 ? (bfd_vma) bfd_get_8 (abfd, ptr) : (bits) == 16 ? bfd_get_16 (abfd, ptr) : (bits) == 32 ? bfd_get_32 (abfd, ptr) : (bits) == 64 ? bfd_get_64 (abfd, ptr) : (abort (), (bfd_vma) - 1))
#define OP_MASK_RDCTL ((OP_MASK_RRS | OP_MASK_RRT | OP_MASK_ROPX | OP_MASK_OP))
#define __INT_FAST32_MAX__ 0x7fffffff
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define XSTRING(s) STRINGX(s)
#define bfd_mach_z8001 1
#define GET_IW_IMM26(Iw) (((Iw) >> IW_IMM26_LSB) & IW_IMM26_MASK)
#define bfd_mach_fr300 300
#define BFD_RELOC_SPARC_DISP64 BFD_RELOC_64_PCREL
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define bfd_h_put_signed_16 bfd_h_put_16
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define bfd_gc_sections(abfd,link_info) BFD_SEND (abfd, _bfd_gc_sections, (abfd, link_info))
#define bfd_mach_mcf_isa_b_float_emac 24
#define OP_MATCH_CMPNEI OP_CMPNEI
#define NIOS2_INSN_MACRO 0x80000000
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define bfd_mach_xtensa 1
#define bfd_valid_reloc_types(abfd) ((abfd)->xvec->valid_reloc_types)
#define OP_MASK_JMP ((OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define bfd_get_section_alignment(bfd,ptr) ((ptr)->alignment_power + 0)
#define PTRCONST void *const
#define OP_MATCH_CMPEQ OPX_MATCH (OPX_CMPEQ)
#define OP_STHIO 45
#define bfd_mach_arm_3M 4
#define IW_CONTROL_REGNUM_MSB 9
#define OP_MATCH_DIVU OPX_MATCH (OPX_DIVU)
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define bfd_mach_v850e1 '1'
#define OP_MATCH_ERET (0xef800000 | OPX_MATCH (OPX_ERET))
#define OP_MASK_JOP (IW_OP_MASK << IW_OP_LSB)
#define bfd_asymbol_bfd(x) ((x)->the_bfd)
#define SEC_GROUP 0x4000000
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define HALF_BFD_SIZE_TYPE (((bfd_size_type) 1) << (8 * sizeof (bfd_size_type) / 2))
#define __DARWIN_SUF_NON_CANCELABLE 
#define OP_STB 5
#define OP_STC 29
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define bfd_mach_m16c 0x75
#define OP_OPX 58
#define OP_STW 21
#define SEC_COFF_SHARED_LIBRARY 0x10000000
#define BFD_IN_MEMORY 0x800
#define bfd_mach_ppc_403gc 4030
#define __FLT128_HAS_INFINITY__ 1
#define OP_MATCH_NEXTPC OPX_MATCH (OPX_NEXTPC)
#define SEC_RELOC 0x004
#define bfd_mach_h8300 1
#define bfd_h_get_8(abfd,ptr) bfd_get_8 (abfd, ptr)
#define __weak 
#define OP_MATCH_BGEU OP_BGEU
#define bfd_mach_mcf_isa_b_float 22
#define __abortlike __dead2 __cold __not_tail_called
#define OP_MATCH_XORI OP_XORI
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define IW_B_SZ 5
#define OP_STH 13
#define IW_SHIFT_IMM5_LSB 6
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define OP_BEQ 38
#define OP_MATCH_CMPLT OPX_MATCH (OPX_CMPLT)
#define bfd_get_section_flags(bfd,ptr) ((ptr)->flags + 0)
#define OP_LDH 15
#define OP_LDL 31
#define __kpi_unavailable 
#define bfd_free_cached_info(abfd) BFD_SEND (abfd, _bfd_free_cached_info, (abfd))
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define bfd_mach_frv 1
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define __amd64 1
#define OP_MATCH_STB OP_STB
#define OP_MATCH_CMPNE OPX_MATCH (OPX_CMPNE)
#define OP_MATCH_BRET (0xf0000000 | OPX_MATCH (OPX_BRET))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define bfd_mach_mips4111 4111
#define __PTHREAD_ONCE_SIZE__ 8
#define OP_MATCH_BEQ OP_BEQ
#define bfd_mach_mips3000 3000
#define OP_MATCH_SUB OPX_MATCH (OPX_SUB)
#define bfd_mach_mips4120 4120
#define BFD_HOST_64BIT_LONG 0
#define __AVAILABILITY__ 
#define ANSI_PROTOTYPES 1
#define BFD_JUMP_TABLE_ARCHIVE(NAME) NAME ##_slurp_armap, NAME ##_slurp_extended_name_table, NAME ##_construct_extended_name_table, NAME ##_truncate_arname, NAME ##_write_armap, NAME ##_read_ar_hdr, NAME ##_openr_next_archived_file, NAME ##_get_elt_at_index, NAME ##_generic_stat_arch_elt, NAME ##_update_armap_timestamp
#define __tune_core2__ 1
#define BSF_GLOBAL 0x02
#define bfd_mach_sh4al_dsp 0x4d
#define __ATOMIC_HLE_ACQUIRE 65536
#define bfd_usrdata(abfd) ((abfd)->usrdata)
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define bfd_mach_i960_ca 6
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define __MAC_10_14_1 101401
#define EXFUN(name,proto) name proto
#define __SPI_DEPRECATED(...) 
#define __dead 
#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
#define VA_CLOSE(AP) } va_end(AP); }
#define __WATCHOS_5_0 50000
#define __FLT64X_MIN_EXP__ (-16381)
#define __SIZEOF_WINT_T__ 4
#define bfd_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_32, (ptr))
#define __WATCHOS_5_2 50200
#define OP_SH_RCTL 6
#define bfd_canonicalize_dynamic_reloc(abfd,arels,asyms) BFD_SEND (abfd, _bfd_canonicalize_dynamic_reloc, (abfd, arels, asyms))
#define _SECURE__COMMON_H_ 
#define OP_MATCH_INITD OP_INITD
#define SEC_HAS_GOT_REF 0x800
#define OP_MATCH_INITI OPX_MATCH (OPX_INITI)
#define bfd_is_target_special_symbol(abfd,sym) BFD_SEND (abfd, _bfd_is_target_special_symbol, (abfd, sym))
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define OP_MATCH_SYNC OPX_MATCH (OPX_SYNC)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define BSF_LOCAL 0x01
#define NIOS2_INSN_UBRANCH 0x00000010
#define __FLT32_MAX_EXP__ 128
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define OPX_WRPRS 20
#define VOLATILE volatile
#define __SOPT 0x0400
#define HAS_LOCALS 0x20
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define OP_FLUSHDA 27
#define SEC_TIC54X_CLINK 0x80000000
#define bfd_mach_z80full 7
#define stdout __stdoutp
#define bfd_mach_arm_unknown 0
#define bfd_mach_i960_hx 8
#define bfd_mach_alpha_ev4 0x10
#define bfd_mach_alpha_ev5 0x20
#define bfd_mach_alpha_ev6 0x30
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define HAS_DEBUG 0x08
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define bfd_h_put_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define bfd_mach_mipsisa32r2 33
#define bfd_mach_mipsisa32r3 34
#define bfd_mach_mipsisa32r5 36
#define bfd_mach_mipsisa32r6 37
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define bfd_set_section_vma(bfd,ptr,val) (((ptr)->vma = (ptr)->lma = (val)), ((ptr)->user_set_vma = TRUE), TRUE)
#define bfd_mach_i960_jx 7
#define H_GET_S8 bfd_h_get_signed_8
#define OP_MATCH_JMP OPX_MATCH (OPX_JMP)
#define bfd_is_ind_section(sec) ((sec) == bfd_ind_section_ptr)
#define _BSD_I386__TYPES_H_ 
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __INT16_MAX__ 0x7fff
#define __x86_64 1
#define OPX_ROLI 2
#define _INT32_T 
#define GET_IW_A(Iw) (((Iw) >> IW_A_LSB) & IW_A_MASK)
#define __SALC 0x4000
#define bfd_make_empty_symbol(abfd) BFD_SEND (abfd, _bfd_make_empty_symbol, (abfd))
#define __PTHREAD_CONDATTR_SIZE__ 8
#define OP_MASK 0xffffffff
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define bfd_und_section_ptr ((asection *) &bfd_und_section)
#define OP_MATCH_SRAI OPX_MATCH (OPX_SRAI)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define bfd_mach_i960_mc 4
#define __INT_FAST64_TYPE__ long long int
#define bfd_mach_msp41 41
#define INLINE __inline__
#define bfd_mach_mips_xlr 887682
#define DYNAMIC 0x40
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __SMBF 0x0080
#define OP_MATCH_ORI OP_ORI
#define bfd_set_private_flags(abfd,flags) BFD_SEND (abfd, _bfd_set_private_flags, (abfd, flags))
#define DEFUN_VOID(name) name(void)
#define __OSX_AVAILABLE(_vers) 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define bfd_put_signed_32 bfd_put_32
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define bfd_find_nearest_line(abfd,sec,syms,off,file,func,line) BFD_SEND (abfd, _bfd_find_nearest_line, (abfd, sec, syms, off, file, func, line))
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define __not_tail_called 
#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define SEC_SORT_ENTRIES 0x10000
#define __LP64__ 1
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define OP_MATCH_FLUSHI OPX_MATCH (OPX_FLUSHI)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define IW_IMM26_MASK 0x3ffffff
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define OP_MATCH_MULI OP_MULI
#define GET_IW_OP(Iw) (((Iw) >> IW_OP_LSB) & IW_OP_MASK)
#define SEC_DATA 0x020
#define GET_INSN_FIELD(X,i) (((i) & OP_MASK_ ##X) >> OP_SH_ ##X)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __nonnull 
#define bfd_set_section(x,y) ((x)->section) = (y)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define NUMOPCODES bfd_nios2_num_opcodes
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define OP_MATCH_DIV OPX_MATCH (OPX_DIV)
#define __FLT64_MIN_EXP__ (-1021)
#define bfd_section_list_insert_before(ABFD,B,S) do { asection *_b = B; asection *_s = S; asection *_prev = _b->prev; _s->prev = _prev; _s->next = _b; _b->prev = _s; if (_prev) _prev->next = _s; else (ABFD)->sections = _s; } while (0)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define bfd_mach_sh3_dsp 0x3d
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define bfd_mach_sparc_v9_p(mach) ((mach) >= bfd_mach_sparc_v8plus && (mach) <= bfd_mach_sparc_v9b && (mach) != bfd_mach_sparc_sparclite_le)
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
#define SEC_ALLOC 0x001
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define BSF_NOT_AT_END 0x400
#define OP_MATCH_RDCTL OPX_MATCH (OPX_RDCTL)
#define OP_MATCH_RDPRS OP_RDPRS
#define __FLT64X_DECIMAL_DIG__ 21
#define IW_B_MASK 0x1f
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define bfd_write(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_write", NULL, NULL, __FUNCTION__), bfd_bwrite ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define __DBL_HAS_DENORM__ 1
#define bfd_mach_m68008 2
#define bfd_mach_i960_xa 5
#define bfd_is_abs_section(sec) ((sec) == bfd_abs_section_ptr)
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define bfd_mach_v850 1
#define bfd_mach_m68010 3
#define __LDBL_HAS_INFINITY__ 1
#define bfd_get_target(abfd) ((abfd)->xvec->name)
#define __OS_AVAILABILITY(_target,_availability) 
#define BSF_DYNAMIC 0x8000
#define bfd_mach_frvtomcat 499
#define bfd_mach_m68020 4
#define ELF_INFO_TYPE_MERGE 2
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define OP_ORI 20
#define OPX_BREAK 52
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define bfd_mach_ppc_750 750
#define bfd_copy_private_symbol_data(ibfd,isymbol,obfd,osymbol) BFD_SEND (obfd, _bfd_copy_private_symbol_data, (ibfd, isymbol, obfd, osymbol))
#define __DARWIN_NON_CANCELABLE 0
#define bfd_print_private_bfd_data(abfd,file) BFD_SEND (abfd, _bfd_print_private_bfd_data, (abfd, file))
#define __DEC_EVAL_METHOD__ 2
#define bfd_mach_am33 330
#define bfd_mach_m68040 6
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define OP_MATCH_STHIO OP_STHIO
#define DOTS , ...
#define bfd_mach_x86_64 64
#define __enum_options 
#define OP_SH_IRD IW_B_LSB
#define __FLT_MANT_DIG__ 24
#define IW_A_SZ 5
#define __LDBL_DECIMAL_DIG__ 21
#define OP_SH_IRS IW_A_LSB
#define OP_SH_IRT IW_B_LSB
#define BFD_UND_SECTION_NAME "*UND*"
#define __VERSION__ "11.2.0"
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
#define bfd_mach_m68060 7
#define __used __attribute__((__used__))
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#define OPX_INTR 61
#define SEC_CONSTRUCTOR 0x080
#define OPX_ROL 3
#define bfd_merge_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_merge_private_bfd_data, (ibfd, obfd))
#define HAS_LINENO 0x04
#define CONST const
#define H_GET_8 bfd_h_get_8
#define bfd_mach_mips8000 8000
#define bfd_stat_arch_elt(abfd,stat) BFD_SEND (abfd, _bfd_stat_arch_elt,(abfd, stat))
#define BFD_TRADITIONAL_FORMAT 0x400
#define __INT_LEAST32_MAX__ 0x7fffffff
#define OP_MULI 36
#define __STRING(x) #x
#define bfd_mach_am33_2 332
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __SSTR 0x0200
#define _UINTPTR_T 
#define BSF_FILE 0x4000
#define __FLT128_MAX_EXP__ 16384
#define bfd_h_get_signed_8(abfd,ptr) bfd_get_signed_8 (abfd, ptr)
#define bfd_mach_mips_octeon 6501
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define bfd_mach_mips_gs264e 3005
#define BSF_OLD_COMMON 0x200
#define bfd_mach_mips5 5
#define OP_MATCH_LDBU OP_LDBU
#define RENAME_SECLUDE 0x00000001
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
#define __SLBF 0x0001
#define BFD_FAKE_SECTION(SEC,FLAGS,SYM,SYM_PTR,NAME,IDX) { NAME, IDX, 0, NULL, NULL, FLAGS, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (struct bfd_section *) &SEC, 0, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, 0, NULL, NULL, NULL, (struct bfd_symbol *) SYM, (struct bfd_symbol **) SYM_PTR, { NULL }, { NULL } }
#define OP_MATCH_BGE OP_BGE
#define OP_MASK_IRD (IW_B_MASK << IW_B_LSB)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define OP_MATCH_CMPGEUI OP_CMPGEUI
#define clearerr_unlocked(p) __sclearerr(p)
#define IW_C_MASK 0x1f
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define bfd_mach_sparc 1
#define __IPHONE_13_5 130500
#define OP_MASK_ROP (IW_OP_MASK << IW_OP_LSB)
#define OP_CMPNEI 24
#define __SRD 0x0004
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define NUMREGISTERS nios2_num_regs;
#define NIOS2_INSN_MACRO_MOVI 0x80000002
#define SEC_HAS_CONTENTS 0x100
#define __IOS_UNAVAILABLE 
#define bfd_mach_ppc_rs64iii 643
#define _U_INT8_T 
#define bfd_mach_sh2a 0x2a
#define OP_MATCH_BLT OP_BLT
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED
#define OP_MASK_RRD (IW_C_MASK << IW_C_LSB)
#define bfd_mach_crx 1
#define bfd_mach_sh2a_or_sh3e 0x2a4
#define __FLT128_HAS_DENORM__ 1
#define BFD_HOST_U_64_BIT unsigned long long
#define bfd_mach_sh3e 0x3e
#define bfd_mach_mips5400 5400
#define bfd_mach_avr6 6
#define BSF_DEBUGGING 0x08
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define bfd_mach_sh4a 0x4a
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define OP_MASK_TRAP ((OP_MASK_RRS | OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP) & 0xfffff83f)
#define _Null_unspecified 
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define bfd_debug_info_end(abfd) BFD_SEND (abfd, _bfd_debug_info_end, (abfd))
#define __DARWIN_NO_LONG_LONG 0
#define bfd_mach_mcf_isa_b_nousp 16
#define OP_MATCH_ANDHI OP_ANDHI
#define H_PUT_8 bfd_h_put_8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __UINT_LEAST16_TYPE__ short unsigned int
#define BSF_EXPORT BSF_GLOBAL
#define OPX_MUL 39
#define __SAPP 0x0100
#define __MAC_10_15_4 101504
#define BSF_DEBUGGING_RELOC 0x20000
#define _INT64_T 
#define bfd_mach_sh2a_nofpu_or_sh4_nommu_nofpu 0x2a1
#define OPX_FLUSHP 4
#define BFD_DEFAULT_TARGET_SIZE 32
#define bfd_h_put_signed_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define BFD_SEND(bfd,message,arglist) ((*((bfd)->xvec->message)) arglist)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define OP_ADDI 4
#define __FLT64X_DIG__ 18
#define SET_INSN_FIELD(X,i,j) ((i) = (((i) & ~OP_MASK_ ##X) | (((j) << OP_SH_ ##X) & OP_MASK_ ##X)))
#define IW_B_LSB 22
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#define __INT8_TYPE__ signed char
#define NIOS2_INSN_ORI 0x00000200
#define bfd_mach_mcf_isa_a 10
#define bfd_mach_mcf_isa_b 19
#define BSF_THREAD_LOCAL 0x40000
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define bfd_mach_mips12000 12000
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define TRUE 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define bfd_mach_fr400 400
#define __SOFF 0x1000
#define OP_MATCH_MUL OPX_MATCH (OPX_MUL)
#define BFD_JUMP_TABLE_GENERIC(NAME) NAME ##_close_and_cleanup, NAME ##_bfd_free_cached_info, NAME ##_new_section_hook, NAME ##_get_section_contents, NAME ##_get_section_contents_in_window
#define __FLT_RADIX__ 2
#define IW_OP_LSB 0
#define __INT_LEAST16_TYPE__ short int
#define OP_MATCH_STWIO OP_STWIO
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __UINTMAX_C(c) c ## UL
#define bfd_mach_mcf_isa_aplus 13
#define SEC_TIC54X_BLOCK 0x40000000
#define OP_MASK_SLLI ((OP_MASK_RRT | OP_MASK_ROPX | OP_MASK_OP))
#define bfd_section_list_append(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->next = NULL; if (_abfd->section_last) { _s->prev = _abfd->section_last; _abfd->section_last->next = _s; } else { _s->prev = NULL; _abfd->sections = _s; } _abfd->section_last = _s; } while (0)
#define XCONCAT2(a,b) CONCAT2(a,b)
#define XCONCAT3(a,b,c) CONCAT3(a,b,c)
#define XCONCAT4(a,b,c,d) CONCAT4(a,b,c,d)
#define __SSE_MATH__ 1
#define IW_IMM16_SZ 16
#define _U_INT32_T 
#define __k8 1
#define BUFSIZ 1024
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define bfd_read(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_read", NULL, NULL, __FUNCTION__), bfd_bread ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define bfd_asymbol_flavour(x) (bfd_asymbol_bfd(x)->xvec->flavour)
#define HOWTO(C,R,S,B,P,BI,O,SF,NAME,INPLACE,MASKSRC,MASKDST,PC) { (unsigned) C, R, S, B, P, BI, O, SF, NAME, INPLACE, MASKSRC, MASKDST, PC }
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define OP_MATCH_XOR OPX_MATCH (OPX_XOR)
#define bfd_set_cacheable(abfd,bool) (((abfd)->cacheable = bool), TRUE)
#define OP_MASK_IMM16 (IW_IMM16_MASK << IW_IMM16_LSB)
#define bfd_mach_fr450 450
#define __WATCHOS_3_1_1 30101
#define OP_CMPGEI 8
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define bfd_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_64, (ptr))
#define bfd_mach_sparc_v8plusb 9
#define __SIZEOF_PTRDIFF_T__ 8
#define _OFF_T 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define bfd_mach_iq2000 1
#define bfd_has_map(abfd) ((abfd)->has_armap)
#define __TVOS_AVAILABLE(_vers) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define OP_MATCH_LDW OP_LDW
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SEC_MERGE 0x1000000
#define bfd_mach_mips_interaptiv_mr2 736550
#define __DARWIN_64_BIT_INO_T 1
#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)
#define __TVOS_14_0 140000
#define OP_SH_JOP IW_OP_LSB
#define __TVOS_14_2 140200
#define BSF_FUNCTION 0x10
#define OPX_SRLI 26
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __LDBL_DIG__ 18
#define OP_BGE 14
#define bfd_mach_mcf_isa_b_float_mac 23
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))
#define bfd_mach_ppc_403 403
#define OPX_XOR 30
#define bfd_mach_fr30 0x46523330
#define _USE_FORTIFY_LEVEL 2
#define OP_MATCH_LDBIO OP_LDBIO
#define __INT_FAST16_MAX__ 0x7fff
#define bfd_discard_group(abfd,sec) BFD_SEND (abfd, _bfd_discard_group, (abfd, sec))
#define _BSD_MACHINE__TYPES_H_ 
#define __deprecated __attribute__((__deprecated__))
#define bfd_mach_m6812 1
#define bfd_is_com_section(ptr) (((ptr)->flags & SEC_IS_COMMON) != 0)
#define __FLT64_DIG__ 15
#define bfd_big_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_BIG)
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define OP_BLTU 54
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define __FLT_HAS_QUIET_NAN__ 1
#define IW_A_LSB 27
#define OP_LDWIO 55
#define BFD_LINKER_CREATED 0x2000
#define __FLT_MAX_10_EXP__ 38
#define OP_BLT 22
#define __SEOF 0x0020
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define bfd_update_armap_timestamp(abfd) BFD_SEND (abfd, _bfd_update_armap_timestamp, (abfd))
#define __FLT64X_HAS_DENORM__ 1
#define bfd_mach_z80strict 1
#define __dead2 __attribute__((__noreturn__))
#define bfd_find_inliner_info(abfd,file,func,line) BFD_SEND (abfd, _bfd_find_inliner_info, (abfd, file, func, line))
#define bfd_mach_mips_gs464 3003
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define bfd_section_lma(bfd,ptr) ((ptr)->lma)
#define bfd_get_section(x) ((x)->section)
#define bfd_get_section_userdata(bfd,ptr) ((ptr)->userdata)
#define WP_TEXT 0x80
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
#define BFD_HOST_LONG_LONG 1
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define OP_BNE 30
#define bfd_mach_i386_i8086 2
#define __kpi_deprecated(_msg) 
#define bfd_mach_sparc_sparclite 3
#define __UINT_FAST16_TYPE__ short unsigned int
#define OP_MATCH_CMPLTI OP_CMPLTI
#define OP_MATCH_CMPLTU OPX_MATCH (OPX_CMPLTU)
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
#define bfd_mach_arm_XScale 10
#define NIOS2_INSN_ADDI 0x00000080
#define OPX_CALLR 29
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define DEFUN(name,arglist,args) name(args)
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define bfd_put_signed_16 bfd_put_16
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define bfd_get_dynamic_symcount(abfd) ((abfd)->dynsymcount)
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define bfd_mach_i960_kb_sb 3
#define __INT_LEAST64_TYPE__ long long int
#define bfd_mach_xc16xl 2
#define bfd_mach_xc16xs 3
#define OP_MATCH_FLUSHD OP_FLUSHD
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define OP_MATCH_FLUSHP OPX_MATCH (OPX_FLUSHP)
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define HAS_LOAD_PAGE 0x1000
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define __PTHREAD_SIZE__ 8176
#define BFD_FORT_COMM_DEFAULT_VALUE 0
#define _MACHTYPES_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define MAC_OS_X_VERSION_10_12_1 101201
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define bfd_mach_sh 1
#define _SYS_STDIO_H_ 
#define AND ,
#define OP_SH_IOP IW_OP_LSB
#define bfd_put_signed_64 bfd_put_64
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define bfd_mach_m6812_default 0
#define __swift_compiler_version_at_least(...) 1
#define NIOS2_INSN_CBRANCH 0x00000020
#define OP_JMPI 1
#define BSF_OBJECT 0x10000
#define bfd_section_already_linked(abfd,sec) BFD_SEND (abfd, _section_already_linked, (abfd, sec))
#define NIOS2_INSN_MACRO_MOVIA 0x80000004
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define bfd_mach_ip2022 1
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define OP_CUSTOM 50
#define __LITTLE_ENDIAN__ 1
#define OP_XORI 28
#define bfd_copy_private_header_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_header_data, (ibfd, obfd))
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define __BFD_H_SEEN__ 
#define bfd_mach_arm_iWMMXt 12
#define OP_MATCH_WRPRS OPX_MATCH (OPX_WRPRS)
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define _NIOS2_H_ 
#define STRINGX(s) #s
#define __FLT32X_DIG__ 15
#define VPARAMS(ARGS) ARGS
#define ELF_INFO_TYPE_JUST_SYMS 4
#define bfd_mach_sh4_nommu_nofpu 0x42
#define OPX_ERET 1
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define OP_MATCH_LDWIO OP_LDWIO
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define OPX_NEXTPC 28
#define bfd_get_start_address(abfd) ((abfd)->start_address)
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define bfd_get_format(abfd) ((abfd)->format)
#define bfd_get_section_size(ptr) ((ptr)->size)
#define __GNUC_VA_LIST 
#define OP_LDBU 3
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _ANSIDECL_H 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define OP_CALL 0
#define bfd_mach_mcf_isa_b_mac 20
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define bfd_mach_arm_2a 2
#define bfd_get_8(abfd,ptr) (*(unsigned char *) (ptr) & 0xff)
#define bfd_get_symbol_leading_char(abfd) ((abfd)->xvec->symbol_leading_char)
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define bfd_mach_mips4100 4100
#define _SYS__PTHREAD_TYPES_H_ 
#define FALSE 0
#define OP_CMPLTUI 48
#define OP_MATCH_CMPEQI OP_CMPEQI
#define __API_UNAVAILABLE_END 
#define __STDIO_H_ 
#define bfd_mach_mips4600 4600
#define bfd_mach_arc_8 8
#define bfd_mach_arm_4T 6
#define __pic__ 2
#define H_GET_S32 bfd_h_get_signed_32
#define OP_MATCH_NOR OPX_MATCH (OPX_NOR)
#define bfd_mach_mcf_isa_aplus_emac 15
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define OP_LDBIO 39
#define bfd_mach_m68000 1
#define bfd_mach_arm_5T 8
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define OPX_NOR 6
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define IW_A_MASK 0x1f
#define NIOS2_INSN_MACRO_MOV 0x80000001
#define bfd_link_split_section(abfd,sec) BFD_SEND (abfd, _bfd_link_split_section, (abfd, sec))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define IW_OP_SZ 6
#define GET_IW_OPX(Iw) (((Iw) >> IW_OPX_LSB) & IW_OPX_MASK)
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define OP_LDHU 11
#define BFD_JUMP_TABLE_WRITE(NAME) NAME ##_set_arch_mach, NAME ##_set_section_contents
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define OP_CMPLTI 16
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define bfd_mach_x86_64_intel_syntax 65
#define bfd_mach_frvsimple 2
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define bfd_mach_m6812s 2
#define bfd_mach_rs6k_rs2 6002
#define bfd_mach_rs6k_rs1 6001
#define __INT_MAX__ 0x7fffffff
#define bfd_get_flavour(abfd) ((abfd)->xvec->flavour)
#define bfd_mach_ppc_860 860
#define bfd_mach_mips4650 4650
#define bfd_final_link(abfd,info) BFD_SEND (abfd, _bfd_final_link, (abfd, info))
#define bfd_mach_rs6k_rsc 6003
#define align_power(addr,align) (((addr) + ((bfd_vma) 1 << (align)) - 1) & ((bfd_vma) -1 << (align)))
#define bfd_section_size(bfd,ptr) ((ptr)->size)
#define bfd_init_private_section_data(ibfd,isec,obfd,osec,link_info) BFD_SEND (obfd, _bfd_init_private_section_data, (ibfd, isec, obfd, osec, link_info))
#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define bfd_mach_arm_2 1
#define bfd_mach_arm_4 5
#define bfd_mach_arm_5 7
#define bfd_get_symcount(abfd) ((abfd)->symcount)
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define OP_MASK_CACHE_RRS (IW_A_MASK << IW_A_LSB)
#define __INT64_TYPE__ long long int
#define OPX_CMPLTU 48
#define bfd_merge_sections(abfd,link_info) BFD_SEND (abfd, _bfd_merge_sections, (abfd, link_info))
#define __FLT_MAX_EXP__ 128
#define OP_XORHI 60
#define OPX_RET 5
#define BFD_ARCH_SIZE 64
#define OP_MASK_CALLR ((OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP))
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define bfd_mach_m68030 5
#define IW_C_MSB 21
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define bfd_copy_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_bfd_data, (ibfd, obfd))
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define bfd_mach_mcf_isa_b_nousp_emac 18
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define bfd_get_section_limit(bfd,sec) (((sec)->rawsize ? (sec)->rawsize : (sec)->size) / bfd_octets_per_byte (bfd))
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define bfd_get_section_vma(bfd,ptr) ((ptr)->vma + 0)
#define __SSE__ 1
#define bfd_mach_sh2a_or_sh4 0x2a3
#define SEC_DEBUGGING 0x2000
#define OP_SH_OP IW_OP_LSB
#define __LDBL_MIN_EXP__ (-16381)
#define OP_MASK_IMM26 (IW_IMM26_MASK << IW_IMM26_LSB)
#define OP_SH_IMM5 IW_SHIFT_IMM5_LSB
#define bfd_get_file_flags(abfd) ((abfd)->flags)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define D_PAGED 0x100
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define __amd64__ 1
#define __WINT_WIDTH__ 32
#define EOF (-1)
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define OP_STBIO 37
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define bfd_mach_cris_v0_v10 255
#define bfd_set_arch_mach(abfd,arch,mach) BFD_SEND ( abfd, _bfd_set_arch_mach, (abfd, arch, mach))
#define OP_MATCH_INITDA OP_INITDA
#define bfd_mach_mips4000 4000
#define __SIZEOF_INT128__ 16
#define __FLT64X_IS_IEC_60559__ 2
#define bfd_section_removed_from_list(ABFD,S) ((S)->next ? (S)->next->prev != (S) : (ABFD)->section_last != (S))
#define OPX_DIVU 36
#define bfd_get_output_section(x) ((x)->section->output_section)
#define bfd_ind_section_ptr ((asection *) &bfd_ind_section)
#define __LDBL_MAX_10_EXP__ 4932
#define H_GET_S16 bfd_h_get_signed_16
#define __ATOMIC_RELAXED 0
#define __signed signed
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define BFD_ABS_SECTION_NAME "*ABS*"
#define bfd_mach_mips6000 6000
#define OP_MASK_RCTL 0x000007c0
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define bfd_mach_sh3_nommu 0x31
#define _LP64 1
#define IW_OP_MASK 0x3f
#define IW_A_MSB 31
#define __UINT8_C(c) c
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define bfd_mach_sparc_v8plusa 5
#define _INT8_T 
#define _bfd_int64_high(x) ((unsigned long) (((x) >> 32) & 0xffffffff))
#define BFD_HOST_64_BIT long long
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define bfd_mach_mcf_isa_a_nodiv 9
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define OP_ANDHI 44
#define bfd_mach_sh4a_nofpu 0x4b
#define __has_feature(x) 0
#define bfd_mach_mips5500 5500
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define BSF_WARNING 0x1000
#define OP_MASK_CUSTOM_A 0x00010000
#define OP_MASK_CUSTOM_C 0x00004000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define OP_MASK_CUSTOM_N 0x00003fc0
#define OPX_SRAI 58
#define MAC_OS_X_VERSION_10_10 101000
#define OP_MASK_OP (IW_OP_MASK << IW_OP_LSB)
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define SEC_LINK_DUPLICATES_SAME_SIZE 0x100000
#define OP_MATCH_SLLI OPX_MATCH (OPX_SLLI)
#define IW_IMM26_MSB 31
#define bfd_h_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_32, (ptr))
#define bfd_link_add_symbols(abfd,info) BFD_SEND (abfd, _bfd_link_add_symbols, (abfd, info))
#define MAC_OS_X_VERSION_10_15 101500
#define bfd_minisymbol_to_symbol(b,d,m,f) BFD_SEND (b, _minisymbol_to_symbol, (b, d, m, f))
#define bfd_put_signed_8 bfd_put_8
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define SEC_EXCLUDE 0x8000
#define OPX_MATCH(code) ((code << IW_OPX_LSB) | OP_OPX)
#define PTR void *
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define bfd_mach_xstormy16 1
#define bfd_mach_v850e 'E'
#define bfd_mach_h8300sx 6
#define bfd_mach_ip2022ext 2
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define __TVOS_11_4 110400
#define bfd_get_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_symtab_upper_bound, (abfd))
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define COFF_SWAP_TABLE (void *) &bfd_coff_std_swap_table
#define bfd_h_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_64, (ptr))
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define NIOS2_INSN_ANDI 0x00000100
#define OP_MATCH_STBIO OP_STBIO
#define _BSD_MACHINE_TYPES_H_ 
#define bfd_mach_sh_dsp 0x2d
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/var/tmp/"
#define OP_SH_CUSTOM_A 16
#define __FLT64_HAS_DENORM__ 1
#define bfd_find_line(abfd,syms,sym,file,line) BFD_SEND (abfd, _bfd_find_line, (abfd, syms, sym, file, line))
#define OPX_WRCTL 46
#define IW_IMM16_LSB 6
#define bfd_put(bits,abfd,val,ptr) ((bits) == 8 ? bfd_put_8 (abfd, val, ptr) : (bits) == 16 ? bfd_put_16 (abfd, val, ptr) : (bits) == 32 ? bfd_put_32 (abfd, val, ptr) : (bits) == 64 ? bfd_put_64 (abfd, val, ptr) : (abort (), (void) 0))
#define bfd_get_symbol_info(b,p,e) BFD_SEND (b, _bfd_get_symbol_info, (b,p,e))
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define OP_SH_CUSTOM_B 15
#define SEC_NEVER_LOAD 0x200
#define __TYPES_H_ 
#define bfd_mach_z8002 2
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define OPX_BRET 9
#define __INT_FAST8_WIDTH__ 8
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define SEC_LINK_DUPLICATES 0x40000
#define bfd_mach_iq10 2
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define IW_B_MSB 26
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_VERS_1050 1
#define OP_MATCH_BLTU OP_BLTU
#define OP_STWIO 53
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define FOPEN_MAX 20
#define OP_MASK_WRCTL ((OP_MASK_RRT | OP_MASK_RRD | OP_MASK_ROPX | OP_MASK_OP))
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define IW_IMM26_LSB 6
#define SEC_CODE 0x010
#define bfd_com_section_ptr ((asection *) &bfd_com_section)
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define OP_MATCH_BR OP_BR
#define stderr __stderrp
#define bfd_mach_ppc_ec603e 6031
#define bfd_mach_fr500 500
#define bfd_get_dynamic_reloc_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_reloc_upper_bound, (abfd))
#define __INTMAX_WIDTH__ 64
#define IW_OP_MSB 5
#define OP_CMPGEUI 40
#define bfd_mach_mips10000 10000
#define bfd_h_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_16, (ptr))
#define bfd_mach_avr3 3
#define __UINT32_C(c) c ## U
#define OP_INITD 51
#define OPX_RDCTL 38
#define bfd_mach_arc_7 7
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define BFD_JUMP_TABLE_COPY(NAME) NAME ##_bfd_copy_private_bfd_data, NAME ##_bfd_merge_private_bfd_data, _bfd_generic_init_private_section_data, NAME ##_bfd_copy_private_section_data, NAME ##_bfd_copy_private_symbol_data, NAME ##_bfd_copy_private_header_data, NAME ##_bfd_set_private_flags, NAME ##_bfd_print_private_bfd_data
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define bfd_mach_m32c 0x78
#define __IOS_AVAILABLE(_vers) 
#define bfd_debug_info_start(abfd) BFD_SEND (abfd, _bfd_debug_info_start, (abfd))
#define bfd_mach_msp11 11
#define bfd_mach_msp12 12
#define bfd_mach_msp16 16
#define bfd_mach_sh2e 0x2e
#define bfd_set_section_alignment(bfd,ptr,val) (((ptr)->alignment_power = (val)),TRUE)
#define bfd_mach_sh2 0x20
#define bfd_mach_sh3 0x30
#define bfd_mach_sh4 0x40
#define bfd_print_symbol(b,p,s,e) BFD_SEND (b, _bfd_print_symbol, (b,p,s,e))
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define HOWTO_PREPARE(relocation,symbol) { if (symbol != NULL) { if (bfd_is_com_section (symbol->section)) { relocation = 0; } else { relocation = symbol->value; } } }
#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED
#define bfd_mach_fr550 550
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define bfd_mach_msp31 31
#define bfd_mach_msp32 32
#define bfd_canonicalize_symtab(abfd,location) BFD_SEND (abfd, _bfd_canonicalize_symtab, (abfd, location))
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define bfd_mach_mips_octeon2 6502
#define bfd_mach_mips_octeon3 6503
#define __RCSID(s) __IDSTRING(rcsid,s)
#define IW_SHIFT_IMM5_SZ 5
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define OP_MASK_IMM5 (IW_SHIFT_IMM5_MASK << IW_SHIFT_IMM5_LSB)
#define printf_vma(x) fprintf_vma(stdout,x)
#define bfd_mach_msp42 42
#define bfd_mach_msp44 44
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define bfd_make_debug_symbol(abfd,ptr,size) BFD_SEND (abfd, _bfd_make_debug_symbol, (abfd, ptr, size))
#define bfd_mach_mips_octeonp 6601
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define OPX_CRST 62
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define bfd_header_little_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_LITTLE)
#define opcodes_error_handler _bfd_error_handler
#define __SSE2__ 1
#define PROTO(type,name,arglist) type name arglist
#define OP_MATCH_JMPI OP_JMPI
#define OPX_JMP 13
#define __API_AVAILABLE_BEGIN(...) 
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define OP_MATCH_MULXSS OPX_MATCH (OPX_MULXSS)
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define bfd_link_hash_table_create(abfd) BFD_SEND (abfd, _bfd_link_hash_table_create, (abfd))
#define bfd_mach_arm_3 3
#define __AVAILABILITY_INTERNAL__ 
#define OPX_ROR 11
#define __INTMAX_TYPE__ long int
#define OP_ORHI 52
#define __unavailable 
#define OP_LDHIO 47
#define __DRIVERKIT_20_0 200000
#define bfd_mach_mcf_isa_a_emac 12
#define OP_MATCH_ANDI OP_ANDI
#define bfd_mach_ppc_505 505
#define bfd_section_list_remove(ABFD,S) do { asection *_s = S; asection *_next = _s->next; asection *_prev = _s->prev; if (_prev) _prev->next = _next; else (ABFD)->sections = _next; if (_next) _next->prev = _prev; else (ABFD)->section_last = _prev; } while (0)
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define bfd_header_big_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_BIG)
#define bfd_mach_mips4300 4300
#define bfd_mach_mips5900 5900
#define bfd_mach_cpu32 8
#define bfd_mach_maxq10 10
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define bfd_h_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx16, (val, ptr))
#define BSF_KEEP_G 0x40
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define bfd_mach_ia64_elf32 32
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define OP_MASK_RRS (IW_A_MASK << IW_A_LSB)
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)
#define SEC_SMALL_DATA 0x800000
#define bfd_h_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx32, (val, ptr))
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define bfd_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_putx16, ((val),(ptr)))
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define LONG_DOUBLE long double
#define __STDC__ 1
#define OP_SH_CACHE_OPX IW_B_LSB
#define OP_MATCH_ROL OPX_MATCH (OPX_ROL)
#define PARAMS(ARGS) ARGS
#define bfd_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_putx32, ((val),(ptr)))
#define OP_MATCH_ROR OPX_MATCH (OPX_ROR)
#define bfd_mach_hppa20w 25
#define bfd_mach_ia64_elf64 64
#define __PTRDIFF_TYPE__ long int
#define bfd_h_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx64, (val, ptr))
#define bfd_mach_mips9000 9000
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define stdin __stdinp
#define bfd_get_cacheable(abfd) ((abfd)->cacheable)
#define __ATOMIC_SEQ_CST 5
#define OP_MATCH_LDHUIO OP_LDHUIO
#define __PTHREAD_COND_SIZE__ 40
#define bfd_section_list_prepend(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->prev = NULL; if (_abfd->sections) { _s->next = _abfd->sections; _abfd->sections->prev = _s; } else { _s->next = NULL; _abfd->section_last = _s; } _abfd->sections = _s; } while (0)
#define bfd_mach_mips_loongson_2f 3002
#define __WATCHOS_AVAILABLE(_vers) 
#define OP_SH_TRAP_IMM5 6
#define bfd_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_putx64, ((val), (ptr)))
#define BFD_RELOC_SPARC_64 BFD_RELOC_64
#define __FLT32X_MIN_10_EXP__ (-307)
#define OP_SH_RRD IW_C_LSB
#define CONST_STRNEQ(STR1,STR2) (strncmp ((STR1), (STR2), sizeof (STR2) - 1) == 0)
#define OP_SH_RRS IW_A_LSB
#define OP_SH_RRT IW_B_LSB
#define __UINTPTR_TYPE__ long unsigned int
#define OP_MATCH_CUSTOM OP_CUSTOM
#define HAS_SYMS 0x10
#define OP_MASK_TRAP_IMM5 0x000007c0
#define bfd_mach_sparc_v9a 8
#define bfd_mach_sparc_v9b 10
#define fprintf_vma(s,x) fprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define _SSIZE_T 
#define IW_IMM16_MASK 0xffff
#define __SNBF 0x0002
#define __TVOS_10_0_1 100001
#define BFD_IND_SECTION_NAME "*IND*"
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define bfd_mach_arm_iWMMXt2 13
#define __LDBL_MIN_10_EXP__ (-4931)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define SEC_LINK_DUPLICATES_ONE_ONLY 0x80000
#define OP_MAX_CUSTOM_N 255
#define __enum_closed 
#define __FLT128_DECIMAL_DIG__ 36
#define OP_LDW 23
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __enum_open 
#define NIOS2_INSN_RELAXABLE 0x40000000
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define H_PUT_16 bfd_h_put_16
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define OP_MATCH_SRLI OPX_MATCH (OPX_SRLI)
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define bfd_put_8(abfd,val,ptr) ((void) (*((unsigned char *) (ptr)) = (val) & 0xff))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define OP_MATCH_MULXSU OPX_MATCH (OPX_MULXSU)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define bfd_mach_ppc_a35 35
#define OP_MATCH_CALLR ((0x1f << 17) | OPX_MATCH (OPX_CALLR))
#define bfd_applicable_section_flags(abfd) ((abfd)->xvec->section_flags)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define SEC_KEEP 0x400000
#define H_PUT_32 bfd_h_put_32
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define IW_C_LSB 17
#define bfd_read_minisymbols(b,d,m,s) BFD_SEND (b, _read_minisymbols, (b, d, m, s))
#define _U_INT16_T 
#define __P(protos) protos
#define OP_MATCH_FLUSHDA OP_FLUSHDA
#define OP_SH_CACHE_RRS IW_A_LSB
#define OP_BGEU 46
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define bfd_asymbol_value(x) (bfd_asymbol_base(x) + (x)->value)
#define bfd_mach_z80 3
