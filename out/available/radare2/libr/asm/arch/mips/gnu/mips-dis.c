#define DT_STRTAB 5
#define sa_sigaction __sigaction_u.__sa_sigaction
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define XCNEWVEC(T,N) ((T *) xcalloc ((N), sizeof (T)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define bfd_mach_sparc_v9 7
#define bfd_mach_rs6k 6000
#define PRIO_MIN -20
#define CONST_STRNEQ(STR1,STR2) (strncmp ((STR1), (STR2), sizeof (STR2) - 1) == 0)
#define __UINT_LEAST16_MAX__ 0xffff
#define bfd_section_lma(bfd,ptr) ((ptr)->lma)
#define DF_1_ORIGIN 0x00000080
#define elf_link_hash_lookup(table,string,create,copy,follow) ((struct elf_link_hash_entry *) bfd_link_hash_lookup (&(table)->root, (string), (create), (copy), (follow)))
#define __FLT128_MAX_10_EXP__ 4932
#define bfd_mach_sh4 0x40
#define bfd_link_add_symbols(abfd,info) BFD_SEND (abfd, _bfd_link_add_symbols, (abfd, info))
#define SHN_LORESERVE 0xFF00
#define INSN_5400 0x01000000
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define RSS_UNDEF 0
#define E_MIPS_MACH_4100 0x00830000
#define INIT_DISASSEMBLE_INFO(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))
#define SEC_GROUP 0x4000000
#define bfd_is_com_section(ptr) (((ptr)->flags & SEC_IS_COMMON) != 0)
#define PT_NULL 0
#define bfd_mach_mips16000 16000
#define INSN_ISA3_32R2 17
#define DT_VERDEF 0x6ffffffc
#define AT_IGNORE 1
#define EI_NIDENT 16
#define bfd_mach_cr16c 1
#define E_MIPS_MACH_4111 0x00880000
#define SHT_HIUSER 0xFFFFFFFF
#define ATTRIBUTE_HOT __attribute__ ((__hot__))
#define ELF_INFO_TYPE_EH_FRAME 3
#define OP_MASK_SEL 0x7
#define SHT_MIPS_DELTASYM 0x7000001b
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define E_MIPS_MACH_4120 0x00870000
#define E_MIPS_MACH_SB1 0x008a0000
#define __IPHONE_14_5 140500
#define bfd_mach_r800 11
#define AFL_EXT_OCTEON 5
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define INSN_UPTO32 INSN_UPTO2 | ISAF(32) | ISAF(3_32) | ISAF(4_32)
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define bfd_mach_arc_5 5
#define bfd_mach_arc_6 6
#define bfd_mach_arc_8 8
#define E_MIPS_ARCH_32R2 0x70000000
#define E_MIPS_ARCH_32R6 0x90000000
#define SIGTTIN 21
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define SYM_CAT_H 
#define AT_ICACHEBSIZE 20
#define EF_MIPS_32BITMODE 0x00000100
#define INSN_UPTO64 INSN_UPTO5 | ISAF(64) | ISAF(32)
#define is_elf_hash_table(htab) (((struct bfd_link_hash_table *) (htab))->type == bfd_link_elf_hash_table)
#define EM_OLD_ALPHA 41
#define BFD_ABS_SECTION_NAME "*ABS*"
#define OP_MASK_FORMAT 0x7
#define bfd_mach_sparc_sparclite_le 6
#define EV_CURRENT 1
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)
#define SHF_MIPS_NAMES 0x02000000
#define MICROMIPSOP_MASK_EXTMSBD 0x1f
#define __not_tail_called 
#define va_start(v,l) __builtin_va_start(v,l)
#define AFL_ASE_DSPR2 0x00000002
#define AFL_ASE_DSPR3 0x00002000
#define __INT32_C(c) c
#define RLIM_NLIMITS 9
#define bfd_mach_ppc64 64
#define MINSIGSTKSZ 32768
#define __ORDER_LITTLE_ENDIAN__ 1234
#define H_PUT_S16 bfd_h_put_signed_16
#define OP_SH_RDDSP 16
#define __DARWIN_PDP_ENDIAN 3412
#define LL_DELAY_LOAD 0x00000010
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define bfd_mach_ppc_rs64iii 643
#define bfd_mach_h8300h 2
#define MICROMIPSOP_MASK_BBITIND 0
#define DT_MIPS_AUX_DYNAMIC 0x70000031
#define bfd_mach_h8300s 3
#define bfd_mach_ppc_e500mc 5001
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define __FLT32X_DECIMAL_DIG__ 17
#define __PIC__ 2
#define __IOS_PROHIBITED 
#define MICROMIPSOP_MASK_COPZ 0x7fffff
#define RHF_QUICKSTART 0x00000001
#define bfd_canonicalize_dynamic_symtab(abfd,asymbols) BFD_SEND (abfd, _bfd_canonicalize_dynamic_symtab, (abfd, asymbols))
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define DT_SONAME 14
#define SEC_LOAD 0x002
#define SEC_IS_COMMON 0x1000
#define MIPS16OP_SH_REGR32 0
#define AT_SUN_MMU 2015
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define SEC_THREAD_LOCAL 0x400
#define w_termsig w_T.w_Termsig
#define DT_MIPS_DELTA_INSTANCE 0x70000019
#define BFD_SEND_FMT(bfd,message,arglist) (((bfd)->xvec->message[(int) ((bfd)->format)]) arglist)
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define SEC_TIC54X_BLOCK 0x40000000
#define EM_BA2_NON_STANDARD 0x8472
#define EM_860 7
#define _ELF_COMMON_H 
#define DT_MIPS_PIXIE_INIT 0x70000023
#define ET_CORE 4
#define SIGPROF 27
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define NT_NETBSDCORE_FIRSTMACH 32
#define EM_H8_300H 47
#define __DBL_MIN_10_EXP__ (-307)
#define MICROMIPSOP_MASK_STYPE 0x1f
#define DT_SYMINSZ 0x6ffffdfe
#define EM_88K 5
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __cold __attribute__((__cold__))
#define SHT_INIT_ARRAY 14
#define bfd_mach_i386_i8086 2
#define __FLT32_HAS_DENORM__ 1
#define RSS_GP0 2
#define OP_MASK_SHAMT 0x1f
#define bfd_mach_ppc 32
#define bfd_mach_mips16 16
#define __swift_unavailable(_msg) 
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define SHT_MIPS_FDESC 0x70000011
#define SEC_LINK_DUPLICATES_DISCARD 0x0
#define __UINT_FAST8_MAX__ 0xff
#define SHT_MIPS_XLATE_OLD 0x70000028
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define __kpi_deprecated(_msg) 
#define _ERRNO_T 
#define MICROMIPSOP_SH_TRAP 12
#define SHT_MIPS_LOCSTR 0x70000018
#define DF_1_CONLFAT 0x00002000
#define INSN_COND_BRANCH_DELAY 0x00004000
#define __pic__ 2
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define OP_MASK_CODE10 0x3ff
#define __INT_LEAST8_MAX__ 0x7f
#define ISA_MIPS32R2 INSN_ISA32R2
#define ISA_MIPS32R3 INSN_ISA32R3
#define OEX_SMM 0x20000
#define ISA_MIPS32R5 INSN_ISA32R5
#define ISA_MIPS32R6 INSN_ISA32R6
#define OP_SH_MMISUB 6
#define __deprecated_enum_msg(_msg) 
#define bfd_mach_mips_octeon2 6502
#define bfd_section_name(bfd,ptr) ((ptr)->name)
#define __UINT_FAST16_TYPE__ short unsigned int
#define DT_MIPS_DELTA_CLASS 0x70000017
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define E_MIPS_MACH_OCTEON2 0x008d0000
#define EF_MIPS_UCODE 0x00000010
#define E_MIPS_MACH_OCTEON3 0x008e0000
#define OP_SH_MJ 0
#define STN_UNDEF 0
#define MICROMIPSOP_MASK_ALN 0
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define OP_MASK_EXTMSBD 0x1f
#define OP_MASK_BBITIND 0x1f
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define OP_SH_MN 0
#define ODK_IDENT 10
#define NT_WIN32PSTATUS 18
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define SEC_NO_FLAGS 0x000
#define SHN_HIRESERVE 0xFFFF
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define bfd_mach_fr450 450
#define __UINTMAX_TYPE__ long unsigned int
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define elf_section_type(sec) (elf_section_data(sec)->this_hdr.sh_type)
#define DT_NULL 0
#define PRIO_USER 2
#define DECLARE_GENERIC_PRINT_ADDRESS_FUNC() static void generic_print_address_func(bfd_vma address, struct disassemble_info *info) { if (!buf_global) { return; } r_strbuf_appendf (buf_global, "0x%08"PFMT64x, (ut64)address); }
#define IOPOL_APPLICATION IOPOL_STANDARD
#define elf_group_id(sec) (elf_section_data(sec)->group.id)
#define _QUAD_LOWWORD 0
#define STO_MIPS16 0xf0
#define __UINT32_MAX__ 0xffffffffU
#define bfd_mach_mips_interaptiv_mr2 736550
#define __PTHREAD_MUTEX_SIZE__ 56
#define OP_MASK_DSPSFT_7 0x7f
#define elf_sec_group(sec) (elf_section_data(sec)->sec_group)
#define __I386_MCONTEXT_H_ 
#define bfd_is_local_label_name(abfd,name) BFD_SEND (abfd, _bfd_is_local_label_name, (abfd, name))
#define SIGUSR1 30
#define RLIMIT_DATA 2
#define __TVOS_9_0 90000
#define OP_SH_SPEC 0
#define __FLT128_MIN_EXP__ (-16381)
#define IOPOL_PASSIVE 2
#define SHN_MIPS_TEXT (SHN_LORESERVE + 1)
#define OP_MASK_MMI 0x3f
#define WUNTRACED 0x00000002
#define __IPHONE_12_2 120200
#define INSN_ISA2 2
#define INSN_ISA4 4
#define bfd_mach_i960_core 1
#define UINT16_C(v) (v)
#define OP_SH_CODE 16
#define bfd_mach_msp41 41
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define DF_SYMBOLIC (1 << 1)
#define bfd_mach_h8300hn 4
#define EM_FR20 37
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define bfd_mach_mips7000 7000
#define EM_FR30 84
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define EF_MIPS_ARCH 0xf0000000
#define EM_M32C 0xFEB0
#define __FLT32X_HAS_QUIET_NAN__ 1
#define MICROMIPSOP_MASK_CODE 0x3ff
#define EM_PPC64 21
#define AFL_ASE_MASK 0x003effff
#define H_GET_S64 bfd_h_get_signed_64
#define __SERR 0x0040
#define __INT64_C(c) c ## LL
#define DF_1_NODELETE 0x00000008
#define SA_SIGINFO 0x0040
#define CPU_R8000 8000
#define OP_MASK_FZ 0x1f
#define bfd_mach_i960_ka_sa 2
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define CPU_VR4100 4100
#define SHN_MIPS_SUNDEFINED (SHN_LORESERVE + 4)
#define SHF_MIPS_STRING 0x80000000
#define MICROMIPSOP_MASK_DSPACC_S 0
#define __MAC_11_3 110300
#define EM_PARISC 15
#define MICROMIPSOP_SH_DSPSFT 16
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define INSN_MULT 0x04000000
#define BFD_NO_MORE_SYMBOLS ((symindex) ~0)
#define SI_USER 0x10001
#define ASTRDUP(X) (__extension__ ({ const char *const libiberty_optr = (X); const unsigned long libiberty_len = strlen (libiberty_optr) + 1; char *const libiberty_nptr = (char *const) alloca (libiberty_len); (char *) memcpy (libiberty_nptr, libiberty_optr, libiberty_len); }))
#define DT_GNU_CONFLICTSZ 0x6ffffdf6
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define EV_NONE 0
#define bfd_get_cacheable(abfd) ((abfd)->cacheable)
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define bfd_mach_ppc_602 602
#define bfd_mach_ppc_603 603
#define bfd_mach_ppc_604 604
#define bfd_mach_mips4400 4400
#define NAME(x,y) x ## NOSIZE ## _ ## y
#define H_PUT_S32 bfd_h_put_signed_32
#define __USER_LABEL_PREFIX__ _
#define bfd_mach_ppc_620 620
#define OLD_DT_LOOS 0x60000000
#define BFDLINK_H 
#define MIPS16OP_MASK_MOVE32Z 0x7
#define AFL_ASE_GINV 0x00020000
#define bfd_is_group_section(abfd,sec) BFD_SEND (abfd, _bfd_is_group_section, (abfd, sec))
#define bfd_mach_ppc_630 630
#define BSF_OBJECT 0x10000
#define ASE_EVA 0x00000008
#define WCONTINUED 0x00000010
#define MICROMIPSOP_SH_SA4 12
#define ILL_ILLOPC 1
#define DISASSEMBLE_DATA (1LL << 30)
#define bfd_mach_h8300sn 5
#define bfd_mach_cris_v10_v32 1032
#define BFD_NO_FLAGS 0x00
#define bfd_mach_h8300sx 6
#define __LDBL_HAS_INFINITY__ 1
#define DT_VERSYM 0x6ffffff0
#define ET_HIOS 0xFEFF
#define OP_SH_CCC 8
#define OP_SH_COPZ 0
#define __FLT32X_HAS_DENORM__ 1
#define _UINT8_T 
#define ATTRIBUTE_COLD __attribute__ ((__cold__))
#define __MAC_10_5 1050
#define hex_p(c) (hex_value (c) != _hex_bad)
#define EM_S390 22
#define DT_FINI 13
#define _SYS_RESOURCE_H_ 
#define bfd_asymbol_name(x) ((x)->name)
#define bfd_h_get_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx32, (ptr))
#define ELF64_MIPS_R_TYPE2(i) (((i) >> 8) & 0xff)
#define ELF64_MIPS_R_TYPE3(i) (((i) >> 16) & 0xff)
#define OP_MASK_UNSIGNED 0x1
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define _SYS__ENDIAN_H_ 
#define __FLT32_DIG__ 6
#define OP_MASK_WRDSP 0x3f
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SS_DISABLE 0x0004
#define OHWA0_R4KEOP_CLEAN 0x00000002
#define __FLT32_IS_IEC_60559__ 2
#define EM_XSTORMY16 0xad45
#define bfd_mach_h8300sxn 7
#define SIGIO 23
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define CPU_MIPS32R3 34
#define CPU_MIPS32R5 36
#define CPU_MIPS32R6 37
#define __API_AVAILABLE_GET_MACRO(...) 
#define MICROMIPSOP_MASK_CODE10 0x3ff
#define __abortlike __dead2 __cold __not_tail_called
#define MICROMIPSOP_MASK_CODE19 0
#define OP_MASK_FMT 0x1f
#define STO_DEFAULT STV_DEFAULT
#define XRESIZEVAR(T,P,S) ((T *) xrealloc ((P), (S)))
#define __strong 
#define AT_SUN_UID 2000
#define _ALLOCA_H_ 
#define BSF_KEEP 0x20
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define ASE_SMARTMIPS 0x00000100
#define PF_MASKOS 0x0FF00000
#define __FLT32X_HAS_INFINITY__ 1
#define __INT32_MAX__ 0x7fffffff
#define SIG_DFL (void (*)(int))0
#define ELF_ST_SET_MIPS_PIC(other) ((ELF_ST_IS_MIPS16 (other) ? ((other) & ~(STO_MIPS16 | STO_MIPS_FLAGS)) : ((other) & ~STO_MIPS_FLAGS)) | STO_MIPS_PIC)
#define OP_SH_IMM10 16
#define AFL_ASE_MIPS16 0x00000400
#define __INT_WIDTH__ 32
#define PT_MIPS_RTPROC 0x70000001
#define bfd_get_signed_8(abfd,ptr) (((*(unsigned char *) (ptr) & 0xff) ^ 0x80) - 0x80)
#define SIGEV_NONE 0
#define __WATCHOS_7_0 70000
#define XRESIZEVEC(T,P,N) ((T *) xrealloc ((void *) (P), sizeof (T) * (N)))
#define ru_first ru_ixrss
#define bfd_count_sections(abfd) ((abfd)->section_count)
#define w_retcode w_T.w_Retcode
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __DECIMAL_DIG__ 21
#define MICROMIPSOP_SH_EVAOFFSET 0
#define INSN2_WRITE_MDMX_ACC 0x00000004
#define SHT_MIPS_AUXSYM 0x70000016
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ELF_ST_SET_MIPS_PLT(other) ((ELF_ST_IS_MIPS16 (other) ? ((other) & (STO_MIPS16 | ~STO_MIPS_FLAGS)) : ((other) & ~STO_MIPS_FLAGS)) | STO_MIPS_PLT)
#define INSN_UPTO1 ISAF(1)
#define INSN_UPTO3 INSN_UPTO2 | ISAF(3) | ISAF(3_32) | ISAF(3_32R2)
#define INSN_UPTO4 INSN_UPTO3 | ISAF(4) | ISAF(4_32) | ISAF(4_32R2)
#define INSN_UPTO5 INSN_UPTO4 | ISAF(5) | ISAF(5_32R2)
#define BFD_JUMP_TABLE_DYNAMIC(NAME) NAME ##_get_dynamic_symtab_upper_bound, NAME ##_canonicalize_dynamic_symtab, NAME ##_get_synthetic_symtab, NAME ##_get_dynamic_reloc_upper_bound, NAME ##_canonicalize_dynamic_reloc
#define bfd_mach_arm_ep9312 11
#define bfd_relax_section(abfd,section,link_info,again) BFD_SEND (abfd, _bfd_relax_section, (abfd, section, link_info, again))
#define __FLT128_IS_IEC_60559__ 2
#define DT_MIPS_UNREFEXTNO 0x70000012
#define FP_PREC_64B 3
#define elf_symtab_shndx(bfd) (elf_tdata(bfd) -> symtab_shndx_section)
#define OP_SH_OFFSET10 0
#define OP_SH_OFFSET12 0
#define EM_CYGNUS_POWERPC 0x9025
#define HALF_BFD_SIZE_TYPE (((bfd_size_type) 1) << (8 * sizeof (bfd_size_type) / 2))
#define PTRDIFF_MAX INTMAX_MAX
#define DT_MIPS_BASE_ADDRESS 0x70000006
#define OP_SH_ALN 21
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SEG_FS 1
#define MICROMIPSOP_SH_MT_U 0
#define H_GET_16 bfd_h_get_16
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define OP_SH_UNSIGNED 16
#define __FXSR__ 1
#define bfd_mach_i386_i386 1
#define __va_list__ 
#define MICROMIPSOP_MASK_DELTA 0xffff
#define bfd_mach_sparc_64bit_p(mach) ((mach) >= bfd_mach_sparc_v9 && (mach) != bfd_mach_sparc_v8plusb)
#define MICROMIPSOP_SH_CODE2 6
#define MICROMIPSOP_MASK_SA4 0xf
#define bfd_get_dynamic_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_symtab_upper_bound, (abfd))
#define __SPI_AVAILABLE(...) 
#define EM_FIREPATH 78
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define NOARGS void
#define H_GET_32 bfd_h_get_32
#define L_tmpnam 1024
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __MMX__ 1
#define bfd_mach_sh4_nofpu 0x41
#define EM_XTENSA 94
#define OP_MASK_COP1NORM 0x1
#define PEX_USE_PIPES 0x2
#define AT_NOTELF 10
#define __MAC_10_14_1 101401
#define BSF_DYNAMIC 0x8000
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define OP_MASK_IMMX 0
#define INSN_ISA64R2 12
#define INSN_ISA64R3 13
#define INSN_ISA64R5 14
#define INSN_ISA64R6 15
#define fileno_unlocked(p) __sfileno(p)
#define H_GET_64 bfd_h_get_64
#define OP_SH_HICC 18
#define elf_gp(bfd) (elf_tdata(bfd) -> gp)
#define OP_MASK_COP1SPEC 0xf
#define PT_DYNAMIC 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define DT_MIPS_HIPAGENO 0x70000014
#define OHWA0_R4KEOP_CHECKED 0x00000001
#define CPU_MIPS64 64
#define _MCONTEXT_T 
#define PTRDIFF_MIN INTMAX_MIN
#define bfd_mach_sparc_v9_p(mach) ((mach) >= bfd_mach_sparc_v8plus && (mach) <= bfd_mach_sparc_v9b && (mach) != bfd_mach_sparc_sparclite_le)
#define sa_handler __sigaction_u.__sa_handler
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define MICROMIPSOP_MASK_DSPACC 0x3
#define __DARWIN_ONLY_VERS_1050 0
#define __sfileno(p) ((p)->_file)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define GNU_ABI_TAG_HURD 1
#define BSF_NO_FLAGS 0x00
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define WTERMSIG(x) (_WSTATUS(x))
#define EM_NONE 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define SYMINFO_BT_LOWRESERVE 0xff00
#define bfd_get_synthetic_symtab(abfd,count,syms,dyncount,dynsyms,ret) BFD_SEND (abfd, _bfd_get_synthetic_symtab, (abfd, count, syms, dyncount, dynsyms, ret))
#define MICROMIPSOP_MASK_OFFSET12 0xfff
#define __FLT32_HAS_INFINITY__ 1
#define EXIT_SUCCESS 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define SI_QUEUE 0x10002
#define ASE_MCU 0x00000010
#define __APPLE_API_UNSTABLE 
#define DT_MIPS_DELTA_SYM 0x7000001d
#define bfd_mach_fr300 300
#define __INT_FAST32_MAX__ 0x7fffffff
#define __LDBL_HAS_DENORM__ 1
#define __MAC_10_15_1 101501
#define CPU_MIPS32R2 33
#define SHN_UNDEF 0
#define _RLIMIT_POSIX_FLAG 0x1000
#define EM_MIPS 8
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define bfd_h_put_signed_16 bfd_h_put_16
#define INSN2_FORBIDDEN_SLOT 0x00008000
#define MICROMIPSOP_SH_DSPACC 14
#define w_stopsig w_S.w_Stopsig
#define bfd_gc_sections(abfd,link_info) BFD_SEND (abfd, _bfd_gc_sections, (abfd, link_info))
#define OP_SH_EVAOFFSET 7
#define _WSTOPPED 0177
#define _INT16_T 
#define bfd_h_put_signed_32 bfd_h_put_32
#define EM_S370 9
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define bfd_mach_xtensa 1
#define PT_SHLIB 5
#define bfd_valid_reloc_types(abfd) ((abfd)->xvec->valid_reloc_types)
#define _SSIZE_T 
#define sprintf_vma(s,x) sprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define FP_STATE_BYTES 512
#define PTRCONST void *const
#define CPU_OCTEON2 6502
#define OP_MASK_EVAOFFSET 0x1ff
#define INSN_WRITE_GPR_24 0x10000000
#define MICROMIPSOP_SH_SA3 13
#define ODK_FILL 5
#define bfd_mach_v850e1 '1'
#define VER_FLG_BASE 0x1
#define bfd_asymbol_bfd(x) ((x)->the_bfd)
#define AT_SUN_IFLUSH 2010
#define OP_SH_HINT 16
#define OLD_DT_HIOS 0x6fffffff
#define ATTRIBUTE_PACKED __attribute__ ((packed))
#define EM_VAX 75
#define bfd_h_put_signed_64 bfd_h_put_64
#define SEC_LINK_ONCE 0x20000
#define STO_HIDDEN STV_HIDDEN
#define __DARWIN_SUF_NON_CANCELABLE 
#define AFL_ASE_MT 0x00000040
#define bfd_mach_ppc_7400 7400
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define OP_SH_MTACC_D 13
#define MIPS_SVRS_ALL_STATICS 0xb
#define OP_SH_MTACC_T 18
#define bfd_mach_m16c 0x75
#define STO_MICROMIPS (2 << 6)
#define BFD_IN_MEMORY 0x800
#define ISA_MIPS32 INSN_ISA32
#define EM_960 19
#define _STRUCT_TIMEVAL struct timeval
#define STT_LOOS 10
#define DT_MIPS_DELTA_SYM_NO 0x7000001e
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define bfd_mach_h8300 1
#define _SYS_WAIT_H_ 
#define MICROMIPSOP_SH_SEL 11
#define __weak 
#define _DEV_T 
#define PT_MIPS_REGINFO 0x70000000
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define EF_MIPS_CPIC 0x00000004
#define __DBL_MAX_EXP__ 1024
#define AT_SUN_LDELF 2004
#define EM_MSP430_OLD 0x1059
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SHT_REL 9
#define MICROMIPSOP_MASK_BCC 0x7
#define RELOC_FOR_GLOBAL_SYMBOL(info,input_bfd,input_section,rel,r_symndx,symtab_hdr,sym_hashes,h,sec,relocation,unresolved_reloc,warned) do { if (!sym_hashes) return FALSE; h = sym_hashes[r_symndx - symtab_hdr->sh_info]; while (h->root.type == bfd_link_hash_indirect || h->root.type == bfd_link_hash_warning) h = (struct elf_link_hash_entry *) h->root.u.i.link; warned = FALSE; unresolved_reloc = FALSE; relocation = 0; if (h->root.type == bfd_link_hash_defined || h->root.type == bfd_link_hash_defweak) { sec = h->root.u.def.section; if (!sec || !sec->output_section) unresolved_reloc = TRUE; else relocation = (h->root.u.def.value + sec->output_section->vma + sec->output_offset); } else if (h->root.type == bfd_link_hash_undefweak) ; else if (info->unresolved_syms_in_objects == RM_IGNORE && ELF_ST_VISIBILITY (h->other) == STV_DEFAULT) ; else if (!info->relocatable) { bfd_boolean err; err = (info->unresolved_syms_in_objects == RM_GENERATE_ERROR || ELF_ST_VISIBILITY (h->other) != STV_DEFAULT); if (!info->callbacks->undefined_symbol (info, h->root.root.string, input_bfd, input_section, rel->r_offset, err)) return FALSE; warned = TRUE; } } while (0)
#define INLINE __inline__
#define bfd_get_section_flags(bfd,ptr) ((ptr)->flags + 0)
#define AFL_ASE_RESERVED1 0x00010000
#define MICROMIPSOP_SH_BP 14
#define AFL_ASE_MIPS16E2 0x00004000
#define OP_SH_COP1CMP 4
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define _VA_LIST_ 
#define RSS_GP 1
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define bfd_find_line(abfd,syms,sym,file,line) BFD_SEND (abfd, _bfd_find_line, (abfd, syms, sym, file, line))
#define ELFOSABI_MODESTO 11
#define SHT_MIPS_GPTAB 0x70000003
#define __FLT_IS_IEC_60559__ 2
#define EM_HUANY 81
#define _SYS_SIGNAL_H_ 
#define D_PAGED 0x100
#define MIPS_SVRS_ALL_ARGS 0xe
#define OP_MASK_MMISUB 0x1f
#define OP_OP_LWC1 0x31
#define OP_OP_LWC2 0x32
#define OP_OP_LWC3 0x33
#define PT_HIPROC 0x7FFFFFFF
#define GNU_ABI_TAG_SOLARIS 2
#define MICROMIPSOP_SH_EXTMSBD 11
#define elf_local_got_offsets(bfd) (elf_tdata(bfd) -> local_got.offsets)
#define EM_MIPS_X 51
#define BFD_JUMP_TABLE_ARCHIVE(NAME) NAME ##_slurp_armap, NAME ##_slurp_extended_name_table, NAME ##_construct_extended_name_table, NAME ##_truncate_arname, NAME ##_write_armap, NAME ##_read_ar_hdr, NAME ##_openr_next_archived_file, NAME ##_get_elt_at_index, NAME ##_generic_stat_arch_elt, NAME ##_update_armap_timestamp
#define __tune_core2__ 1
#define bfd_mach_sh4al_dsp 0x4d
#define _MIPS_H_ 
#define ASE_MSA 0x00000800
#define FPE_FLTOVF 2
#define __exported_push _Pragma("GCC visibility push(default)")
#define ELFOSABI_OPENVMS 13
#define bfd_usrdata(abfd) ((abfd)->usrdata)
#define PEX_STDERR_TO_STDOUT 0x8
#define _UINT32_T 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __kpi_deprecated_arm64_macos_unavailable 
#define DT_GNU_HASH 0x6ffffef5
#define __SIG_ATOMIC_WIDTH__ 32
#define INSN2_COND_BRANCH 0x00001000
#define CPU_R3000 3000
#define EXFUN(name,proto) name proto
#define __SPI_DEPRECATED(...) 
#define CPU_R4600 4600
#define PT_GNU_EH_FRAME (PT_LOOS + 0x474e550)
#define __FLT64X_MANT_DIG__ 64
#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
#define MICROMIPSOP_SH_BBITIND 0
#define VA_CLOSE(AP) } va_end(AP); }
#define WAKEMON_SET_DEFAULTS 0x08
#define bfd_mach_mcf_isa_b_nousp_mac 17
#define AT_SUN_LDSHDR 2005
#define bfd_mach_mips_loongson_2e 3001
#define __WATCHOS_5_2 50200
#define bfd_canonicalize_dynamic_reloc(abfd,arels,asyms) BFD_SEND (abfd, _bfd_canonicalize_dynamic_reloc, (abfd, arels, asyms))
#define bfd_is_target_special_symbol(abfd,sym) BFD_SEND (abfd, _bfd_is_target_special_symbol, (abfd, sym))
#define SEC_READONLY 0x008
#define SHT_LOOS 0x60000000
#define SIGALRM 14
#define __LONG_LONG_WIDTH__ 64
#define elf_known_obj_attributes_proc(bfd) (elf_known_obj_attributes (bfd) [OBJ_ATTR_PROC])
#define CLD_EXITED 1
#define EM_D10V 85
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define ASE_VIRT 0x00000200
#define PT_NOTE 4
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define EM_S390_OLD 0xa390
#define __INT32_TYPE__ int
#define ASE_LOONGSON_EXT2 0x01000000
#define INSN_WRITE_LO 0x00200000
#define _PTRDIFF_T 
#define bfd_mach_arm_unknown 0
#define MICROMIPSOP_MASK_RD 0x1f
#define AT_SUN_GID 2002
#define bfd_mach_alpha_ev4 0x10
#define bfd_mach_alpha_ev5 0x20
#define bfd_mach_alpha_ev6 0x30
#define __IDSTRING(name,string) static const char name[] __used = string
#define PT_LOPROC 0x70000000
#define DT_MIPS_DELTA_CLASSSYM 0x70000020
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define DF_1_GLOBAL 0x00000002
#define MICROMIPSOP_MASK_CACHE 0x1f
#define bfd_read(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_read", NULL, NULL, __FUNCTION__), bfd_bread ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define bfd_h_put_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define bfd_set_section_vma(bfd,ptr,val) (((ptr)->vma = (ptr)->lma = (val)), ((ptr)->user_set_vma = TRUE), TRUE)
#define ELF32_ST_BIND ELF_ST_BIND
#define WEXITED 0x00000004
#define H_GET_S8 bfd_h_get_signed_8
#define PEX_SUFFIX 0x4
#define bfd_mach_sparc_v8plusa 5
#define DT_MIPS_DYNSTR_ALIGN 0x7000002b
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define alloca(x) __builtin_alloca(x)
#define _USE_FORTIFY_LEVEL 2
#define __INT16_MAX__ 0x7fff
#define DT_AUXILIARY 0x7ffffffd
#define ELF_ST_TYPE(val) ((val) & 0xF)
#define NT_GNU_ABI_TAG 1
#define DT_INIT 12
#define DT_MOVETAB 0x6ffffefe
#define bfd_make_empty_symbol(abfd) BFD_SEND (abfd, _bfd_make_empty_symbol, (abfd))
#define EM_MIPS_RS3_LE 10
#define OHW_R8KPFETCH 0x00000002
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define bfd_mach_mips_xlr 887682
#define E_MIPS_ARCH_1 0x00000000
#define bfd_set_arch_mach(abfd,arch,mach) BFD_SEND ( abfd, _bfd_set_arch_mach, (abfd, arch, mach))
#define OBJ_ATTR_FIRST OBJ_ATTR_PROC
#define _ANSI_STDDEF_H 
#define bfd_mach_xc16xs 3
#define bfd_mach_iq10 2
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define DT_MIPS_CONFLICT 0x70000008
#define AFL_EXT_5900 6
#define ELFOSABI_HURD 4
#define INSN_WRITE_ALL 0x00000003
#define DF_1_DIRECT 0x00000100
#define IOPOL_DEFAULT 0
#define AT_FLAGS 8
#define SHT_GNU_LIBLIST 0x6ffffff7
#define DEFUN_VOID(name) name(void)
#define bfd_put_signed_32 bfd_put_32
#define AFL_EXT_10000 11
#define bfd_find_nearest_line(abfd,sec,syms,off,file,func,line) BFD_SEND (abfd, _bfd_find_nearest_line, (abfd, sec, syms, off, file, func, line))
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define AT_EUID 12
#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define NT_AUXV 6
#define __INT16_TYPE__ short int
#define bfd_section_list_prepend(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->prev = NULL; if (_abfd->sections) { _s->next = _abfd->sections; _abfd->sections->prev = _s; } else { _s->next = NULL; _abfd->section_last = _s; } _abfd->sections = _s; } while (0)
#define SEC_SORT_ENTRIES 0x10000
#define __LP64__ 1
#define DT_MIPS_FLAGS 0x70000005
#define bfd_elf_add_proc_attr_compat(BFD,INTVAL,STRVAL) bfd_elf_add_obj_attr_compat ((BFD), OBJ_ATTR_PROC, (INTVAL), (STRVAL))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define SHF_MASKOS 0x0FF00000
#define PF_R (1 << 2)
#define SIGINFO 29
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define elf_gp_size(bfd) (elf_tdata(bfd) -> gp_size)
#define __LDBL_MAX_EXP__ 16384
#define STV_DEFAULT 0
#define EOF (-1)
#define elf_link_hash_traverse(table,func,info) (bfd_link_hash_traverse (&(table)->root, (bfd_boolean (*) (struct bfd_link_hash_entry *, void *)) (func), (info)))
#define PF_W (1 << 1)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define __FLT64_MIN_EXP__ (-1021)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define OP_SH_OFFSET_A 6
#define OP_SH_OFFSET_B 3
#define OP_SH_OFFSET_C 6
#define MIPS16OP_MASK_RX 0x7
#define MIPS16OP_MASK_RY 0x7
#define MIPS16OP_MASK_RZ 0x7
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define FPE_INTDIV 7
#define BFD_ARCH_SIZE 64
#define OBJ_ATTR_LAST OBJ_ATTR_GNU
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define MICROMIPSOP_SH_TARGET 0
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IOPOL_ATIME_UPDATES_OFF 1
#define EM_H8S 48
#define __WATCHOS_AVAILABLE(_vers) 
#define CPU_SB1 12310201
#define MICROMIPSOP_SH_EXTLSB 6
#define AT_ENTRY 9
#define AFL_ASE_XPA 0x00001000
#define OEX_FPU_DIV0 0x08
#define DT_MIPS_SYMTABNO 0x70000011
#define bfd_mach_ppc_750 750
#define bfd_mach_arm_3 3
#define bfd_copy_private_symbol_data(ibfd,isymbol,obfd,osymbol) BFD_SEND (obfd, _bfd_copy_private_symbol_data, (ibfd, isymbol, obfd, osymbol))
#define ODK_NULL 0
#define MICROMIPSOP_SH_CACHE 21
#define __DARWIN_SUF_UNIX03 
#define bfd_mach_am33 330
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define SIGEV_THREAD 3
#define DOTS , ...
#define NT_PRXFPREG 0x46e62b7f
#define DT_FLAGS_1 0x6ffffffb
#define bfd_mach_mn10300 300
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __FLT_MANT_DIG__ 24
#define DT_RPATH 15
#define __IPHONE_5_0 50000
#define __VERSION__ "11.2.0"
#define OP_SH_BP 11
#define PT_SUNW_EH_FRAME PT_GNU_EH_FRAME
#define OP_MASK_CINSPOS 0x1f
#define __UINT64_C(c) c ## ULL
#define NT_TASKSTRUCT 4
#define MICROMIPSOP_MASK_FS 0x1f
#define ILL_ILLTRP 2
#define ELFOSABI_FREEBSD 9
#define DT_STRSZ 10
#define ILL_BADSTK 8
#define DT_PLTGOT 3
#define CPU_R10000 10000
#define NT_GNU_BUILD_ID 3
#define STB_WEAK 2
#define OP_MASK_DSPSFT 0x3f
#define HAS_LINENO 0x04
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define bfd_mach_mips_micromips 96
#define XOBNEW(O,T) ((T *) obstack_alloc ((O), sizeof (T)))
#define STT_RELC 8
#define EM_MN10200 90
#define H_GET_8 bfd_h_get_8
#define _SYS__TYPES_H_ 
#define PEXECUTE_ONE (PEXECUTE_FIRST + PEXECUTE_LAST)
#define OP_SH_BCC 18
#define BSF_WEAK 0x80
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define SYMINFO_CURRENT 1
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define __FLT128_MAX_EXP__ 16384
#define bfd_h_get_signed_8(abfd,ptr) bfd_get_signed_8 (abfd, ptr)
#define SHT_MIPS_SYMBOL_LIB 0x70000020
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define SIGBUS 10
#define BSF_OLD_COMMON 0x200
#define NT_VERSION 1
#define INSN_UNCOND_BRANCH_DELAY 0x00002000
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
#define SHT_SUNW_verdef 0x6ffffffd
#define __SLBF 0x0001
#define EF_MIPS_ARCH_ASE_MICROMIPS 0x02000000
#define bfd_mach_mips8000 8000
#define TRAP_TRACE 2
#define bfd_mach_mips_gs264e 3005
#define RENAME_SECLUDE 0x00000001
#define EM_BLACKFIN 106
#define __FLT32_MANT_DIG__ 24
#define _FSTDIO 
#define MIPS16OP_SH_IMM4 0
#define MIPS16OP_SH_IMM5 0
#define MIPS16OP_SH_IMM6 5
#define MIPS16OP_SH_IMM8 0
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __IPHONE_13_4 130400
#define PT_PHDR 6
#define SV_NODEFER SA_NODEFER
#define SYMTAB_AVAILABLE 1
#define _INTMAX_T 
#define DF_P1_LAZYLOAD 0x00000001
#define OBJ_ATTR_PROC 0
#define DT_CONFIG 0x6ffffefa
#define EM_H8_300 46
#define MICROMIPSOP_MASK_IMMO 0xf
#define __SRD 0x0004
#define ASE_LOONGSON_MMI 0x00200000
#define __SRW 0x0010
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define OP_SH_CINSLM1 11
#define INSN_UDI 0x20000000
#define __IOS_UNAVAILABLE 
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define EI_DATA 5
#define DT_HASH 4
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)
#define MICROMIPSOP_MASK_IMMY 0x1ff
#define bfd_mach_crx 1
#define DT_RUNPATH 29
#define bfd_mach_sh2a_or_sh3e 0x2a4
#define ELF_MIPS_IS_OPTIONAL(other) ((other) & STO_OPTIONAL)
#define bfd_mach_mips5400 5400
#define SIG_UNBLOCK 2
#define EI_OSABI 7
#define AFL_ASE_LOONGSON_EXT 0x00100000
#define GNU_ABI_TAG_NETBSD 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __SNBF 0x0002
#define ELF64_MIPS_R_TYPE(i) ((i) & 0xff)
#define DT_MIPS_RLD_TEXT_RESOLVE_ADDR 0x7000002d
#define DT_ADDRRNGHI 0x6ffffeff
#define __ORDER_PDP_ENDIAN__ 3412
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define OP_MASK_CODE2 0x3ff
#define OEX_FPU_MAX 0x1f00
#define __SWR 0x0008
#define OP_MASK_TRAP 0
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define DTF_1_PARINIT 0x00000001
#define bfd_debug_info_end(abfd) BFD_SEND (abfd, _bfd_debug_info_end, (abfd))
#define __DARWIN_NO_LONG_LONG 0
#define UINT64_MAX 18446744073709551615ULL
#define E_MIPS_MACH_5900 0x00920000
#define OP_SH_SHAMT 6
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define __PTHREAD_RWLOCK_SIZE__ 192
#define elf_group_name(sec) (elf_section_data(sec)->group.name)
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define DT_VERDEFNUM 0x6ffffffd
#define BSF_EXPORT BSF_GLOBAL
#define elf_other_obj_attributes_proc(bfd) (elf_other_obj_attributes (bfd) [OBJ_ATTR_PROC])
#define BSF_CONSTRUCTOR 0x800
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define __FLT64X_HAS_INFINITY__ 1
#define AFL_REG_NONE 0x00
#define SS_ONSTACK 0x0001
#define DT_ADDRRNGLO 0x6ffffe00
#define OHW_R10KLDL 0x00000010
#define EM_OLD_SPARCV9 11
#define __SIZE_TYPE__ long unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define MDMX_FMTSEL_IMM_OB 0x1e
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define MICROMIPSOP_MASK_INSMSB 0x1f
#define __INT8_TYPE__ signed char
#define SHN_MIPS_ACOMMON SHN_LORESERVE
#define AT_PLATFORM 15
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#define SHT_MIPS_LOCSYM 0x70000015
#define MDMX_FMTSEL_IMM_QH 0x1d
#define bfd_mach_mips12000 12000
#define OEX_FPU_MIN 0x1f
#define SYMINFO_NONE 0
#define DT_AUDIT 0x6ffffefc
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define bfd_mach_fr400 400
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define OEX_DISMISS 0x80000
#define bfd_header_big_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_BIG)
#define _RUNE_T 
#define _RELOC_MACROS_H 
#define MICROMIPSOP_SH_RS3 6
#define bfd_mach_arc_7 7
#define bfd_mach_mipsisa32 32
#define bfd_mach_ppc_ec603e 6031
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define DF_STATIC_TLS (1 << 4)
#define DT_NEEDED 1
#define INTPTR_MAX 9223372036854775807L
#define INSN_WRITE_SHIFT 0
#define __UINTMAX_C(c) c ## UL
#define MIPS16OP_SH_OP 11
#define DF_P1_GROUPPERM 0x00000002
#define FPE_FLTSUB 6
#define __SSE_MATH__ 1
#define PEXECUTE_VERBOSE 8
#define INSN_COND_BRANCH_LIKELY 0x00008000
#define AT_EGID 14
#define __k8 1
#define ELFOSABI_TRU64 10
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define AT_SUN_PLATFORM 2008
#define INSN2_ALIAS 0x00000001
#define DT_RELACOUNT 0x6ffffff9
#define SHT_LOPROC 0x70000000
#define __API_TO_BE_DEPRECATED 100000
#define MICROMIPSOP_MASK_CODE20 0
#define MICROMIPSOP_MASK_IMMEDIATE 0xffff
#define SIGCONT 19
#define MIPS16OP_SH_RX 8
#define MIPS16OP_SH_RY 5
#define MIPS16OP_SH_RZ 2
#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))
#define bfd_set_cacheable(abfd,bool) (((abfd)->cacheable = bool), TRUE)
#define STT_FUNC 2
#define __TVOS_14_5 140500
#define INT_LEAST64_MAX INT64_MAX
#define MICROMIPSOP_SH_SEQI 0
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define DF_1_INITFIRST 0x00000020
#define SHF_OS_NONCONFORMING (1 << 8)
#define INSN_WRITE_GPR_31 0x00000040
#define elf_bad_symtab(bfd) (elf_tdata(bfd) -> bad_symtab)
#define _W_INT(w) (*(int *)&(w))
#define bfd_mach_iq2000 1
#define __ATOMIC_RELAXED 0
#define bfd_has_map(abfd) ((abfd)->has_armap)
#define __signed signed
#define STT_OBJECT 1
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define DT_MIPS_RLD_VERSION 0x70000001
#define ELFCLASS32 1
#define elf_onesymtab(bfd) (elf_tdata(bfd) -> symtab_section)
#define EM_CYGNUS_V850 0x9080
#define INSN2_BRANCH_DELAY_16BIT 0x00000020
#define SHT_RELA 4
#define SHT_LOUSER 0x80000000
#define INTPTR_MIN (-INTPTR_MAX-1)
#define INT8_C(v) (v)
#define FP_CHOP 3
#define MICROMIPSOP_MASK_OFFSET10 0x3ff
#define CPU_OCTEON 6501
#define DT_SYMINENT 0x6ffffdff
#define DT_MIPS_LOCAL_GOTNO 0x7000000a
#define _IONBF 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define TRAP_BRKPT 1
#define AFL_REG_64 0x02
#define bfd_mach_m68010 3
#define MICROMIPSOP_MASK_CCC 0x7
#define bfd_mach_mcf_isa_b_float_mac 23
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define OP_MASK_TRUE 0x1
#define __FLT32X_MIN_EXP__ (-1021)
#define bfd_section_list_append(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->next = NULL; if (_abfd->section_last) { _s->prev = _abfd->section_last; _abfd->section_last->next = _s; } else { _s->prev = NULL; _abfd->sections = _s; } _abfd->section_last = _s; } while (0)
#define STO_MIPS_PIC 0x20
#define INT8_MAX 127
#define SEC_HAS_CONTENTS 0x100
#define __IPHONE_12_1 120100
#define EM_RISCV 243
#define __INT_FAST16_MAX__ 0x7fff
#define ELF32_R_SYM(i) ((i) >> 8)
#define CPU_R16000 16000
#define __IPHONE_12_3 120300
#define SYMINFO_BT_PARENT 0xfffe
#define INT_LEAST64_MIN INT64_MIN
#define elf_numsections(bfd) (elf_tdata(bfd) -> num_elf_sections)
#define __FLT64_DIG__ 15
#define bfd_big_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_BIG)
#define RHF_REQUICKSTART 0x00000400
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define __SYS_APPLEAPIOPTS_H__ 
#define EM_CYGNUS_FR30 0x3330
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define MIPS16OP_SH_MOVE32Z 0
#define INT32_C(v) (v)
#define EM_CYGNUS_M32R 0x9041
#define SHN_LOOS 0xFF20
#define EM_ARC 45
#define SHN_MIPS_DATA (SHN_LORESERVE + 2)
#define EM_ARM 40
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define bfd_mach_z80strict 1
#define AFL_REG_32 0x01
#define bfd_find_inliner_info(abfd,file,func,line) BFD_SEND (abfd, _bfd_find_inliner_info, (abfd, file, func, line))
#define SHT_HIPROC 0x7FFFFFFF
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define LL_IGNORE_INT_VER 0x00000002
#define __kpi_unavailable 
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define BFD_HOST_64BIT_LONG 0
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define INSN_4650 0x00010000
#define INSN_READ_1 0x00000004
#define bfd_write(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_write", NULL, NULL, __FUNCTION__), bfd_bwrite ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define bfd_mach_sparc_sparclite 3
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define STT_NOTYPE 0
#define MICROMIPSOP_SH_FZ 0
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define DT_MIPS_DELTA_INSTANCE_NO 0x7000001a
#define __PRAGMA_REDEFINE_EXTNAME 1
#define OP_SH_CODE10 11
#define OP_SH_CODE19 6
#define RHF_GUARANTEE_START_INIT 0x00000080
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define EM_AVR 83
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define OP_SH_CODE20 6
#define SYMINFO_FLG_LAZYLOAD 0x0008
#define INSN_ISA32R2 7
#define INSN_ISA32R3 8
#define INSN_ISA32R5 9
#define __INT_LEAST16_MAX__ 0x7fff
#define bfd_put_signed_16 bfd_put_16
#define INSN_OCTEON2 0x00000100
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SHT_MIPS_LINE 0x70000019
#define CPU_OCTEON3 6503
#define __SEG_GS 1
#define SEC_SMALL_DATA 0x800000
#define bfd_mach_i386_i386_intel_syntax 3
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define CPU_OCTEONP 6601
#define __WINT_TYPE__ int
#define MICROMIPSOP_SH_PREFX 11
#define EF_MIPS_OPTIONS_FIRST 0x00000080
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define INT64_MAX 9223372036854775807LL
#define SIGCHLD 20
#define elf_next_in_group(sec) (elf_section_data(sec)->next_in_group)
#define __APPLE_API_OBSOLETE 
#define OP_SH_WRDSP 11
#define EM_IP2K 101
#define EM_SPARC32PLUS 18
#define AT_UCACHEBSIZE 21
#define CPUMON_MAKE_FATAL 0x1000
#define DT_CHECKSUM 0x6ffffdf8
#define ELF64_R_TYPE(i) ((i) & 0xffffffff)
#define INSN_CHIP_MASK 0xc7ff4f60
#define DT_MIPS_OPTIONS 0x70000029
#define AFL_EXT_LOONGSON_2E 17
#define AFL_EXT_LOONGSON_2F 18
#define BFD_FORT_COMM_DEFAULT_VALUE 0
#define _MACHTYPES_H_ 
#define BFD_HOST_U_64_BIT unsigned long long
#define AT_SYSINFO 32
#define MICROMIPSOP_MASK_PREFX 0x1f
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define SYMBOL_REFERENCES_LOCAL(INFO,H) _bfd_elf_symbol_refs_local_p (H, INFO, 0)
#define bfd_mach_sh 1
#define AFL_ASE_LOONGSON_MMI 0x00040000
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define MICROMIPSOP_SH_STYPE 16
#define __TVOS_13_0 130000
#define AND ,
#define SIGSYS 12
#define bfd_put_signed_64 bfd_put_64
#define EM_PPC_OLD 17
#define XNEWVAR(T,S) ((T *) xmalloc ((S)))
#define __TVOS_13_2 130200
#define __SIZEOF_SHORT__ 2
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define EM_ST100 60
#define __swift_compiler_version_at_least(...) 1
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define __DARWIN_LITTLE_ENDIAN 1234
#define __SWIFT_UNAVAILABLE 
#define bfd_mach_ip2022 1
#define _IOLBF 1
#define ILL_PRVREG 6
#define FPE_FLTINV 5
#define __LITTLE_ENDIAN__ 1
#define bfd_copy_private_header_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_header_data, (ibfd, obfd))
#define EM_PCP 55
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define PEXECUTE_SEARCH 4
#define bfd_mach_m6812_default 0
#define DT_PLTRELSZ 2
#define _BSD_MACHINE_ENDIAN_H_ 
#define INSN_OCTEONP 0x00000200
#define __GNUC_MINOR__ 2
#define __FLT32X_DIG__ 15
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define SHT_SUNW_versym 0x6fffffff
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define VPARAMS(ARGS) ARGS
#define __WORDSIZE 64
#define bfd_mach_sh4_nommu_nofpu 0x42
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define MICROMIPSOP_MASK_BP 0x3
#define SHN_XINDEX 0xFFFF
#define DT_HIOS 0x6ffff000
#define __CONSTANT_CFSTRINGS__ 1
#define CLD_STOPPED 5
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define BSF_SECTION_SYM 0x100
#define ELFOSABI_NONE 0
#define EM_ST9PLUS 67
#define AT_SUN_LDNAME 2006
#define INSN_5500 0x02000000
#define BUS_ADRERR 2
#define OP_MASK_MT_H 0x1
#define __code_model_small__ 1
#define OP_MASK_MT_U 0x1
#define ASE_MIPS3D 0x00000040
#define __API_DEPRECATED_END 
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define AFL_ASE_CRC 0x00008000
#define INSN2_READ_MDMX_ACC 0x00000002
#define DT_FILTER 0x7fffffff
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define RHF_PIXIE 0x00000100
#define MICROMIPSOP_MASK_FD 0x1f
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define __WCHAR_TYPE__ int
#define MICROMIPSOP_MASK_FR 0x1f
#define MICROMIPSOP_MASK_FT 0x1f
#define __SIZEOF_FLOAT__ 4
#define MICROMIPSOP_MASK_FZ 0
#define bfd_mach_mips3000 3000
#define __API_UNAVAILABLE_END 
#define bfd_mach_mips4600 4600
#define ODK_GP_GROUP 9
#define OP_SH_DSPACC 11
#define AT_HWCAP 16
#define OP_MASK_SEQI 0x3ff
#define EM_V800 36
#define _SECURE__STRINGS_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define CPU_R4000 4000
#define EI_MAG1 1
#define ASE_MT 0x00000080
#define __FLT32_DECIMAL_DIG__ 9
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define SHT_MIPS_XLATE 0x70000024
#define CPU_R4010 4010
#define BFD_JUMP_TABLE_WRITE(NAME) NAME ##_set_arch_mach, NAME ##_set_section_contents
#define BUFSIZ 1024
#define OP_SH_DSPACC_S 21
#define ET_REL 1
#define ELF_SECTION_SIZE(sec_hdr,segment) (((sec_hdr->sh_flags & SHF_TLS) == 0 || sec_hdr->sh_type != SHT_NOBITS || segment->p_type == PT_TLS) ? sec_hdr->sh_size : 0)
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define bfd_mach_x86_64_intel_syntax 65
#define WNOWAIT 0x00000020
#define SHT_MIPS_ABIFLAGS 0x7000002a
#define bfd_mach_mips4650 4650
#define MICROMIPSOP_SH_CINSPOS 0
#define SHT_MIPS_DELTADECL 0x7000001f
#define EM_PPC 20
#define bfd_mach_ppc_860 860
#define __MACH__ 1
#define __amd64__ 1
#define NT_OPENBSD_IDENT 1
#define MICROMIPSOP_MASK_MB 0x7
#define MICROMIPSOP_MASK_MC 0x7
#define MICROMIPSOP_MASK_MD 0x7
#define MICROMIPSOP_MASK_ME 0x7
#define MICROMIPSOP_MASK_MF 0x7
#define MICROMIPSOP_MASK_MG 0x7
#define MICROMIPSOP_MASK_MH 0x7
#define MICROMIPSOP_MASK_ML 0x7
#define MICROMIPSOP_MASK_MM 0x7
#define MICROMIPSOP_MASK_MN 0x7
#define MICROMIPSOP_MASK_MQ 0x7
#define EF_MIPS_ABI 0x0000F000
#define align_power(addr,align) (((addr) + ((bfd_vma) 1 << (align)) - 1) & ((bfd_vma) -1 << (align)))
#define EM_V850 87
#define _UINT16_T 
#define bfd_section_size(bfd,ptr) ((ptr)->size)
#define OPAD_PREFIX 0x01
#define OP_MASK_COP1SCLR 0x4
#define bfd_mach_arm_2 1
#define bfd_mach_arm_4 5
#define STB_GLOBAL 1
#define MICROMIPSOP_MASK_RDDSP 0
#define bfd_mach_ppc_601 601
#define OP_SH_UDI1 6
#define BFD_JUMP_TABLE_LINK(NAME) NAME ##_sizeof_headers, NAME ##_bfd_get_relocated_section_contents, NAME ##_bfd_relax_section, NAME ##_bfd_link_hash_table_create, NAME ##_bfd_link_hash_table_free, NAME ##_bfd_link_add_symbols, NAME ##_bfd_link_just_syms, NAME ##_bfd_final_link, NAME ##_bfd_link_split_section, NAME ##_bfd_gc_sections, NAME ##_bfd_merge_sections, NAME ##_bfd_is_group_section, NAME ##_bfd_discard_group, NAME ##_section_already_linked
#define bfd_merge_sections(abfd,link_info) BFD_SEND (abfd, _bfd_merge_sections, (abfd, link_info))
#define __FLT_MAX_EXP__ 128
#define RHF_NONE 0x00000000
#define ELF_ST_SET_MICROMIPS(other) (((other) & ~STO_MIPS_ISA) | STO_MICROMIPS)
#define ET_HIPROC 0xFFFF
#define _RSIZE_T 
#define EM_MN10300 89
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define OP_SH_VECBYTE 22
#define __LASTBRANCH_MAX 32
#define bfd_mach_m68030 5
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define bfd_copy_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_bfd_data, (ibfd, obfd))
#define UINT_FAST64_MAX UINT64_MAX
#define bfd_mach_mcf_isa_b_nousp_emac 18
#define MICROMIPSOP_MASK_RT 0x1f
#define MICROMIPSOP_MASK_RZ 0
#define __UINT_LEAST32_TYPE__ unsigned int
#define __APPLE_API_EVOLVING 
#define bfd_get_section_limit(bfd,sec) (((sec)->rawsize ? (sec)->rawsize : (sec)->size) / bfd_octets_per_byte (bfd))
#define __SSE__ 1
#define AT_SUN_RUID 2001
#define __LDBL_MIN_EXP__ (-16381)
#define DT_TLSDESC_PLT 0x6ffffef6
#define _MACH_I386__STRUCTS_H_ 
#define bfd_get_file_flags(abfd) ((abfd)->flags)
#define SHT_GROUP 17
#define HOWTO_PREPARE(relocation,symbol) { if (symbol != NULL) { if (bfd_is_com_section (symbol->section)) { relocation = 0; } else { relocation = symbol->value; } } }
#define ELF_ST_IS_COMPRESSED(other) (ELF_ST_IS_MIPS16 (other) || ELF_ST_IS_MICROMIPS (other))
#define OP_MASK_TARGET 0x3ffffff
#define DT_GNU_LIBLIST 0x6ffffef9
#define stdout __stdoutp
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define bfd_merge_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_merge_private_bfd_data, (ibfd, obfd))
#define __WINT_WIDTH__ 32
#define __SMBF 0x0080
#define OP_MASK_EXTLSB OP_MASK_SHAMT
#define get_elf_backend_data(abfd) xvec_get_elf_backend_data ((abfd)->xvec)
#define SIGUSR2 31
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define SV_SIGINFO SA_SIGINFO
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define __FLT64X_IS_IEC_60559__ 2
#define AFL_EXT_XLR 1
#define bfd_ind_section_ptr ((asection *) &bfd_ind_section)
#define LL_DELTA 0x00000020
#define H_GET_S16 bfd_h_get_signed_16
#define MICROMIPSOP_MASK_RS3 0x1f
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define bfd_mach_sh3_nommu 0x31
#define _LP64 1
#define SIGEMT 7
#define __UINT8_C(c) c
#define EM_TINYJ 61
#define __FLT64_MAX_EXP__ 1024
#define _bfd_int64_high(x) ((unsigned long) (((x) >> 32) & 0xffffffff))
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define ELF32_MS_INFO(r,f) (((r) << 8) + ((f) & 0xff))
#define OP_MASK_VSEL 0x1f
#define MICROMIPSOP_MASK_OFFSET_A 0
#define MICROMIPSOP_MASK_OFFSET_B 0
#define MICROMIPSOP_MASK_OFFSET_C 0
#define bfd_mach_sh4a_nofpu 0x4b
#define __has_feature(x) 0
#define bfd_mach_mips5500 5500
#define bfd_elf_add_proc_attr_string(BFD,TAG,VALUE) bfd_elf_add_obj_attr_string ((BFD), OBJ_ATTR_PROC, (TAG), (VALUE))
#define BSF_WARNING 0x1000
#define ELFMAG0 0x7F
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'
#define SHN_LOPROC 0xFF00
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define _SIGSET_T 
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define OP_MASK_OP 0x3f
#define OP_MASK_CCC 0x7
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define bfd_h_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_32, (ptr))
#define bfd_h_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx32, (val, ptr))
#define MB_CUR_MAX __mb_cur_max
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define SEC_EXCLUDE 0x8000
#define STB_LOPROC 13
#define SHT_DYNSYM 11
#define DT_GNU_PRELINKED 0x6ffffdf5
#define NT_GNU_HWCAP 2
#define elf_dynsymtab(bfd) (elf_tdata(bfd) -> dynsymtab_section)
#define IOPOL_SCOPE_DARWIN_BG 2
#define __TVOS_11_3 110300
#define feof_unlocked(p) __sfeof(p)
#define __TVOS_11_4 110400
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define bfd_get_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_symtab_upper_bound, (abfd))
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define bfd_mach_arm_2a 2
#define ELF32_R_INFO(s,t) (((s) << 8) + ((t) & 0xff))
#define INSN_LOONGSON_2E 0x40000000
#define INSN_LOONGSON_2F 0x80000000
#define bfd_h_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_64, (ptr))
#define MAX_INT_RELS_PER_EXT_REL 3
#define DYNAMIC 0x40
#define elf_dynverref(bfd) (elf_tdata(bfd) -> dynverref_section)
#define _BSD_MACHINE_TYPES_H_ 
#define bfd_mach_sh_dsp 0x2d
#define __GNUC_STDC_INLINE__ 1
#define AT_SUN_HWCAP 2009
#define P_tmpdir "/var/tmp/"
#define PT_HIOS 0x6fffffff
#define _ELF_EXTERNAL_H 
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define AT_SECURE 23
#define INSN_MACRO 0xffffffff
#define INSN_UPTO2 INSN_UPTO1 | ISAF(2)
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define AT_SUN_EMUL_EXECFD 2013
#define __SMOD 0x2000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define DF_TEXTREL (1 << 2)
#define SEC_NEVER_LOAD 0x200
#define __DBL_DECIMAL_DIG__ 17
#define PF_X (1 << 0)
#define bfd_get_dynamic_symcount(abfd) ((abfd)->dynsymcount)
#define SV_INTERRUPT SA_RESTART
#define MICROMIPSOP_SH_IMM8 13
#define ELF_INFO_TYPE_MERGE 2
#define ASE_XPA_VIRT 0x00020000
#define __DEC_EVAL_METHOD__ 2
#define MICROMIPSOP_SH_IMMB 1
#define MICROMIPSOP_SH_IMMC 0
#define MICROMIPSOP_SH_IMMD 0
#define MICROMIPSOP_SH_IMME 0
#define MICROMIPSOP_SH_IMMF 0
#define ELF32_ST_INFO ELF_ST_INFO
#define MICROMIPSOP_SH_IMMH 0
#define MICROMIPSOP_SH_IMMI 0
#define MICROMIPSOP_SH_IMMJ 0
#define MICROMIPSOP_SH_IMML 0
#define MICROMIPSOP_SH_IMMM 1
#define MICROMIPSOP_SH_IMMN 4
#define MICROMIPSOP_SH_IMMO 0
#define MICROMIPSOP_SH_IMMP 0
#define MICROMIPSOP_SH_IMMQ 0
#define MICROMIPSOP_SH_IMMU 0
#define MICROMIPSOP_SH_IMMW 1
#define MICROMIPSOP_SH_IMMX 1
#define MICROMIPSOP_SH_IMMY 1
#define PT_GNU_RELRO (PT_LOOS + 0x474e552)
#define ELFOSABI_LINUX 3
#define VERSYM_HIDDEN 0x8000
#define SEC_CODE 0x010
#define RHF_CORD 0x00001000
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define OP_MASK_ALN 0x7
#define bfd_com_section_ptr ((asection *) &bfd_com_section)
#define VER_FLG_WEAK 0x2
#define SHT_SUNW_verneed 0x6ffffffe
#define STO_MIPS_FLAGS (~(STO_MIPS_ISA | ELF_ST_VISIBILITY (-1)))
#define SHT_MIPS_SHDR 0x70000010
#define bfd_mach_fr500 500
#define STV_PROTECTED 3
#define STO_PROTECTED STV_PROTECTED
#define SHT_MIPS_PACKSYM 0x70000008
#define __ORDER_BIG_ENDIAN__ 4321
#define bfd_put(bits,abfd,val,ptr) ((bits) == 8 ? bfd_put_8 (abfd, val, ptr) : (bits) == 16 ? bfd_put_16 (abfd, val, ptr) : (bits) == 32 ? bfd_put_32 (abfd, val, ptr) : (bits) == 64 ? bfd_put_64 (abfd, val, ptr) : (abort (), (void) 0))
#define __UINT64_TYPE__ long long unsigned int
#define RLIMIT_MEMLOCK 6
#define MIPS16OP_MASK_IMM4 0xf
#define MIPS16OP_MASK_IMM5 0x1f
#define MIPS16OP_MASK_IMM6 0x3f
#define MIPS16OP_MASK_IMM8 0xff
#define OP_OP_SWC1 0x39
#define _bfd_elf_read_minisymbols _bfd_generic_read_minisymbols
#define OP_OP_SWC3 0x3b
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define OP_SH_IMMC 0
#define AT_IGNOREPPC 22
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define DT_RELAENT 9
#define INSN_ISA3_32 16
#define bfd_mach_m32c 0x78
#define bfd_mach_msp11 11
#define bfd_mach_msp12 12
#define bfd_mach_msp13 13
#define bfd_mach_msp14 14
#define bfd_mach_m32r 1
#define bfd_mach_msp16 16
#define E_MIPS_MACH_GS264E 0x00A40000
#define INTMAX_MIN (-INTMAX_MAX-1)
#define _PTRDIFF_T_DECLARED 
#define bfd_mach_mcf_isa_aplus 13
#define EF_MIPS_ARCH_ASE_MDMX 0x08000000
#define _STDLIB_H_ 
#define bfd_mach_sh2 0x20
#define bfd_mach_sh3 0x30
#define bfd_mach_sh5 0x50
#define STB_HIPROC 15
#define bfd_mach_msp21 21
#define ELFOSABI_HPUX 1
#define DT_MIPS_CXX_FLAGS 0x70000022
#define _VA_LIST_T_H 
#define INT_FAST16_MAX INT16_MAX
#define BFD_JUMP_TABLE_RELOCS(NAME) NAME ##_get_reloc_upper_bound, NAME ##_canonicalize_reloc, NAME ##_bfd_reloc_type_lookup
#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED
#define bfd_mach_fr550 550
#define SEC_LINKER_CREATED 0x200000
#define EM_CYGNUS_D10V 0x7650
#define __UINT_FAST32_TYPE__ unsigned int
#define bfd_mach_msp31 31
#define bfd_mach_msp32 32
#define bfd_mach_msp33 33
#define FP_RND_NEAR 0
#define POLL_ERR 4
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define MICROMIPSOP_SH_DELTA 0
#define printf_vma(x) fprintf_vma(stdout,x)
#define STT_HIOS 12
#define __FLT32_MIN_10_EXP__ (-37)
#define bfd_mach_msp42 42
#define bfd_mach_msp43 43
#define bfd_mach_msp44 44
#define INSN_ISA32 6
#define bfd_make_debug_symbol(abfd,ptr,size) BFD_SEND (abfd, _bfd_make_debug_symbol, (abfd, ptr, size))
#define VER_NEED_CURRENT 1
#define ISA_MIPS64 INSN_ISA64
#define INSN_WRITE_1 0x00000001
#define INSN_WRITE_2 0x00000002
#define __alloca(size) __builtin_alloca(size)
#define BFD_ELF_VERSION_C_TYPE 1
#define INT_FAST64_MAX INT64_MAX
#define MIPS16OP_MASK_IMM11 0x7ff
#define SA_NOCLDWAIT 0x0020
#define AT_PAGESZ 6
#define MICROMIPSOP_MASK_IMM10 0x3ff
#define bfd_header_little_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_LITTLE)
#define opcodes_error_handler _bfd_error_handler
#define __SSE2__ 1
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define ODK_HWOR 8
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define __API_AVAILABLE_BEGIN(...) 
#define elf_dt_name(bfd) (elf_tdata(bfd) -> dt_name)
#define __SIZEOF_DOUBLE__ 8
#define ELFOSABI_AROS 15
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define DT_PLTPAD 0x6ffffefd
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define EM_IQ2000 0xFEBA
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define ELF_ST_SET_MIPS16(other) ((other) | STO_MIPS16)
#define __INT_LEAST32_WIDTH__ 32
#define OP_SH_VSEL 21
#define __API_DEPRECATED_BEGIN(...) 
#define __DRIVERKIT_20_0 200000
#define bfd_section_list_remove(ABFD,S) do { asection *_s = S; asection *_next = _s->next; asection *_prev = _s->prev; if (_prev) _prev->next = _next; else (ABFD)->sections = _next; if (_next) _next->prev = _prev; else (ABFD)->section_last = _prev; } while (0)
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define _QUAD_HIGHWORD 1
#define UINT8_C(v) (v)
#define XDELETE(P) free ((void*) (P))
#define ELFOSABI_NSK 14
#define __INT16_C(c) c
#define PEX_SAVE_TEMPS 0x4
#define xvec_get_elf_backend_data(xvec) ((const struct elf_backend_data *) (xvec)->backend_data)
#define OP_SH_IMMW 0
#define bfd_get_section(x) ((x)->section)
#define va_end(v) __builtin_va_end(v)
#define POLL_IN 1
#define DT_ENCODING 32
#define SHF_MIPS_MERGE 0x20000000
#define __INT_FAST16_WIDTH__ 16
#define USER_ADDR_NULL ((user_addr_t) 0)
#define bfd_h_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_16, (ptr))
#define ELFOSABI_OPENBSD 12
#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)
#define EM_PRISM 82
#define GRP_ENTRY_SIZE 4
#define ELF64_ST_INFO ELF_ST_INFO
#define INT_LEAST8_MIN INT8_MIN
#define LONG_DOUBLE long double
#define INT_FAST64_MIN INT64_MIN
#define __DBL_MAX_10_EXP__ 308
#define INSN_ISA1 1
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define DT_TEXTREL 22
#define OHW_R5KCVTL 0x00000008
#define INSN_ISA3 3
#define _CTERMID_H_ 
#define BSF_KEEP_G 0x40
#define INSN_ISA5 5
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define EM_NIOS32 0xFEBB
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define SIG_IGN (void (*)(int))1
#define bfd_read_minisymbols(b,d,m,s) BFD_SEND (b, _read_minisymbols, (b, d, m, s))
#define ELFOSABI_STANDALONE 255
#define PARAMS(ARGS) ARGS
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define bfd_mach_hppa20w 25
#define STT_SRELC 9
#define NT_SPU 1
#define DF_1_NOW 0x00000001
#define XNEWVEC(T,N) ((T *) xmalloc (sizeof (T) * (N)))
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define EM_D30V 86
#define EM_XTENSA_OLD 0xabc7
#define H_GET_S32 bfd_h_get_signed_32
#define INSN_UPTO64R3 INSN_UPTO64R2 | ISAF(64R3) | ISAF(32R3)
#define AT_SUN_RGID 2003
#define bfd_is_const_section(SEC) ( ((SEC) == bfd_abs_section_ptr) || ((SEC) == bfd_und_section_ptr) || ((SEC) == bfd_com_section_ptr) || ((SEC) == bfd_ind_section_ptr))
#define CPU_RM7000 7000
#define RHF_RLD_ORDER_SAFE 0x00004000
#define OP_SH_SA4 21
#define OP_MASK_PREFX 0x1f
#define ELF_ST_IS_MIPS_PLT(other) ((ELF_ST_IS_MIPS16 (other) ? ((other) & (~STO_MIPS16 & STO_MIPS_FLAGS)) : ((other) & STO_MIPS_FLAGS)) == STO_MIPS_PLT)
#define __UINTPTR_TYPE__ long unsigned int
#define HAS_SYMS 0x10
#define CLD_KILLED 2
#define OP_SH_RS3 0
#define EM_68HC05 72
#define EM_68HC08 71
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define XCONCAT2(a,b) CONCAT2(a,b)
#define __LDBL_MIN_10_EXP__ (-4931)
#define INSN_3900 0x00080000
#define XCONCAT3(a,b,c) CONCAT3(a,b,c)
#define __ATOMIC_HLE_ACQUIRE 65536
#define EM_68HC11 70
#define EM_68HC12 53
#define EM_68HC16 69
#define __DARWIN_NON_CANCELABLE 0
#define INSN_COPROC_MOVE 0x00010000
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define AFL_ASE_MDMX 0x00000010
#define ET_LOPROC 0xFF00
#define DT_FEATURE 0x6ffffdfc
#define EM_386 3
#define EM_MSP430 105
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define STB_LOCAL 0
#define __MAC_10_10 101000
#define EF_MIPS_ARCH_ASE_M16 0x04000000
#define SHT_SYMTAB 2
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define MICROMIPSOP_MASK_PERFREG 0
#define ELFOSABI_SOLARIS 6
#define SHT_GNU_verneed SHT_SUNW_verneed
#define H_PUT_16 bfd_h_put_16
#define MICROMIPSOP_MASK_MT_U 0
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _ELF_MIPS_H 
#define bfd_put_8(abfd,val,ptr) ((void) (*((unsigned char *) (ptr)) = (val) & 0xff))
#define DT_VERNEED 0x6ffffffe
#define bfd_mach_sh2a_or_sh4 0x2a3
#define __INT_LEAST64_WIDTH__ 64
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define INT_LEAST16_MAX INT16_MAX
#define SEC_KEEP 0x400000
#define H_PUT_32 bfd_h_put_32
#define EM_OPENRISC 92
#define __SSE3__ 1
#define ODK_HWAND 7
#define __UINT_FAST8_TYPE__ unsigned char
#define VA_FIXEDARG(AP,T,N) struct Qdmy
#define __P(protos) protos
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define NT_PSINFO 13
#define DT_SYMBOLIC 16
#define EM_486 6
#define EM_SCORE 135
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_3 90300
#define ASE_MSA64 0x00001000
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define EI_PAD 9
#define bfd_mach_maxq10 10
#define bfd_asymbol_value(x) (bfd_asymbol_base(x) + (x)->value)
#define bfd_mach_z80 3
#define bfd_link_hash_table_free(abfd,hash) BFD_SEND (abfd, _bfd_link_hash_table_free, (hash))
#define AT_SUN_LPAGESZ 2007
#define bfd_mach_maxq20 20
#define __STDC__ 1
#define SA_USERTRAMP 0x0100
#define ET_DYN 3
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define H_PUT_64 bfd_h_put_64
#define OP_MASK_UDI3 0x7fff
#define __enum_open 
#define DF_1_GROUP 0x00000004
#define BUS_ADRALN 1
#define __FLT32X_MAX_EXP__ 1024
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define INSN_4010 0x00020000
#define _PTRDIFF_T_ 
#define ODK_EXCEPTIONS 2
#define bfd_mach_ppc_rs64ii 642
#define __unused __attribute__((__unused__))
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define bfd_mach_mips9000 9000
#define __ATOMIC_ACQUIRE 2
#define AFL_ASE_DSP 0x00000001
#define INSN_4100 0x00040000
#define elf_dynverdef(bfd) (elf_tdata(bfd) -> dynverdef_section)
#define bfd_mach_mcf_isa_b_emac 21
#define MICROMIPSOP_MASK_SA3 0x7
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define bfd_mach_mips_sb1 12310201
#define MICROMIPSOP_SH_OFFSET10 6
#define MICROMIPSOP_SH_OFFSET12 0
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define _I386__ENDIAN_H_ 
#define bfd_abs_section_ptr ((asection *) &bfd_abs_section)
#define INT_LEAST16_MIN INT16_MIN
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define bfd_mach_sparc_v8plus 4
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define OP_SH_CODE2 6
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define OP_OP_COP0 0x10
#define OP_OP_COP1 0x11
#define OP_OP_COP3 0x13
#define __INTMAX_C(c) c ## L
#define CPU_R4111 4111
#define DT_FINI_ARRAY 26
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
#define MICROMIPSOP_MASK_SEL 0x7
#define ru_last ru_nivcsw
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
#define CONCAT4(a,b,c,d) XCONCAT2(CONCAT2(a,b),CONCAT2(c,d))
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define bfd_mach_mipsisa64r2 65
#define bfd_mach_mipsisa64r3 66
#define bfd_mach_mipsisa64r5 68
#define bfd_mach_mipsisa64r6 69
#define INSN_OCTEON3 0x00000040
#define ASE_GINV 0x00100000
#define __UINT8_MAX__ 0xff
#define bfd_mach_sparc_sparclet 2
#define EM_NCPU 56
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#define SHF_EXECINSTR (1 << 2)
#define INT16_C(v) (v)
#define STT_SECTION 3
#define __WINT_MAX__ 0x7fffffff
#define CPU_GS464E 3004
#define __FLT32_MIN_EXP__ (-125)
#define BSF_SYNTHETIC (1 << 21)
#define E_MIPS_MACH_OCTEON 0x008b0000
#define OP_SH_TRAP 0
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define STO_MIPS_PLT 0x8
#define OBJ_ATTR_GNU 1
#define OP_MASK_PERFREG 0x1f
#define SHF_STRINGS (1 << 5)
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define ELFDATA2LSB 1
#define bfd_get_section_lma(bfd,ptr) ((ptr)->lma + 0)
#define bfd_sizeof_headers(abfd,reloc) BFD_SEND (abfd, _bfd_sizeof_headers, (abfd, reloc))
#define bfd_mach_ppc_e500 500
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define MICROMIPSOP_MASK_TRAP 0xf
#define bfd_family_coff(abfd) (bfd_get_flavour (abfd) == bfd_target_coff_flavour || bfd_get_flavour (abfd) == bfd_target_xcoff_flavour)
#define __WCHAR_MAX__ 0x7fffffff
#define core_prstatus(bfd) (elf_tdata(bfd) -> prstatus)
#define MICROMIPSOP_SH_MT_H 0
#define INT16_MAX 32767
#define RLIMIT_AS 5
#define bfd_my_archive(abfd) ((abfd)->my_archive)
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define SEC_COFF_SHARED 0x20000000
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_IEC_559 2
#define ASE_EVA_R6 0x02000000
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define AFL_ASE_LOONGSON_EXT2 0x00200000
#define __FLT_EVAL_METHOD__ 0
#define E_MIPS_MACH_GS464 0x00A20000
#define putc_unlocked(x,fp) __sputc(x, fp)
#define AFL_EXT_5400 15
#define STV_HIDDEN 2
#define PEX_SEARCH 0x2
#define ELF_ST_IS_MIPS_PIC(other) (((other) & STO_MIPS_FLAGS) == STO_MIPS_PIC)
#define bfd_malloc malloc
#define __FLT64_DECIMAL_DIG__ 17
#define OPAD_POSTFIX 0x02
#define PT_GNU_STACK (PT_LOOS + 0x474e551)
#define __disable_tail_calls 
#define EM_SPARC 2
#define SHT_MIPS_DENSE 0x70000013
#define BFD_IS_RELAXABLE 0x200
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
#define bfd_get_start_address(abfd) ((abfd)->start_address)
#define VER_DEF_CURRENT 1
#define FOR_EACH_DISASSEMBLER_OPTION(OPT,OPTIONS) for ((OPT) = (OPTIONS); (OPT) != NULL; (OPT) = next_disassembler_option (OPT))
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define AT_SYSINFO_EHDR 33
#define ELF64_R_SYM(i) ((i) >> 32)
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define SHT_MIPS_DELTAINST 0x7000001c
#define MICROMIPSOP_MASK_CINSPOS 0
#define EM_ARC_A5 93
#define DT_MIPS_LOCALPAGE_GOTIDX 0x70000025
#define PTR void *
#define EM_H8_500 49
#define _hex_array_size 256
#define NT_FREEBSD_ABI_TAG 1
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define __MAC_10_12_2 101202
#define POLL_MSG 3
#define __IPHONE_13_0 130000
#define INT16_MIN -32768
#define bfd_little_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_LITTLE)
#define __FINITE_MATH_ONLY__ 0
#define STT_TLS 6
#define INSN_WRITE_HI 0x00100000
#define __IPHONE_13_2 130200
#define ELF64_ST_BIND ELF_ST_BIND
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define RUSAGE_CHILDREN -1
#define SHT_HIOS 0x6fffffff
#define EM_MT 0x2530
#define ELF_INFO_TYPE_STABS 1
#define DF_1_LOADFLTR 0x00000010
#define SIGFPE 8
#define bfd_mach_mips4010 4010
#define INSNLEN 4
#define DT_RELASZ 8
#define HAS_RELOC 0x01
#define LOONGSON2F_NOP_INSN 0x00200825
#define DT_RELCOUNT 0x6ffffffa
#define CPU_R5000 5000
#define SA_RESTART 0x0002
#define INSN_READ_LO 0x00080000
#define __FLT128_MANT_DIG__ 113
#define EMPTY_HOWTO(C) HOWTO ((C), 0, 0, 0, FALSE, 0, complain_overflow_dont, NULL, NULL, FALSE, 0, 0, FALSE)
#define INSN_UPTO64R2 INSN_UPTO64 | ISAF(64R2) | ISAF(32R2)
#define INSN_UPTO64R5 INSN_UPTO64R3 | ISAF(64R5) | ISAF(32R5)
#define INSN_UPTO64R6 INSN_UPTO64R5 | ISAF(64R6) | ISAF(32R6)
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define ASE_LOONGSON_EXT 0x00800000
#define OP_MASK_UDI1 0x1f
#define OP_MASK_UDI2 0x3ff
#define bfd_get_format(abfd) ((abfd)->format)
#define OP_MASK_UDI4 0xfffff
#define NSIG __DARWIN_NSIG
#define bfd_mach_d10v 1
#define DT_VALRNGLO 0x6ffffd00
#define INSN_ISA4_32R2 19
#define INSN2_UNCOND_BRANCH 0x00000800
#define WAKEMON_GET_PARAMS 0x04
#define EI_ABIVERSION 8
#define __restrict restrict
#define INSN2_READ_PC 0x00000400
#define SHF_WRITE (1 << 0)
#define SHT_MIPS_XHASH 0x7000002b
#define __SHRT_MAX__ 0x7fff
#define w_stopval w_S.w_Stopval
#define H_PUT_S8 bfd_h_put_signed_8
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define SHN_ABS 0xFFF1
#define PRIO_PGRP 1
#define ILL_ILLOPN 4
#define bfd_mach_s390_31 31
#define bfd_applicable_file_flags(abfd) ((abfd)->xvec->object_flags)
#define __FLT64X_MAX_10_EXP__ 4932
#define BSF_INDIRECT 0x2000
#define elf_hash_table(p) ((struct elf_link_hash_table *) ((p)->hash))
#define SIGTTOU 22
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define bfd_link_just_syms(abfd,sec,info) BFD_SEND (abfd, _bfd_link_just_syms, (sec, info))
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define DT_MIPS_DELTA_RELOC_NO 0x7000001c
#define START_RELOC_NUMBERS(name) enum name {
#define bfd_mach_xc16x 1
#define MICROMIPSOP_SH_IMMEDIATE 0
#define SHT_STRTAB 3
#define sigmask(m) (1 << ((m)-1))
#define INSN2_READ_SP 0x00000100
#define ODK_TAGS 6
#define __SNPT 0x0800
#define H_PUT_S64 bfd_h_put_signed_64
#define MICROMIPSOP_MASK_MTACC_D 0
#define AT_SUN_EXECNAME 2014
#define MICROMIPSOP_MASK_MTACC_T 0
#define E_MIPS_ABI_O32 0x00001000
#define bfd_section_list_insert_before(ABFD,B,S) do { asection *_b = B; asection *_s = S; asection *_prev = _b->prev; _s->prev = _prev; _s->next = _b; _b->prev = _s; if (_prev) _prev->next = _s; else (ABFD)->sections = _s; } while (0)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define elf_tdata(bfd) ((bfd) -> tdata.elf_obj_data)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define bfd_print_symbol(b,p,s,e) BFD_SEND (b, _bfd_print_symbol, (b,p,s,e))
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define INSN_HAS_RELOC (1LL << 31)
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define __APPLE_API_STANDARD 
#define DT_MIPS_INTERFACE_SIZE 0x7000002c
#define WCHAR_MIN (-WCHAR_MAX-1)
#define SEC_LINK_DUPLICATES_SAME_CONTENTS (SEC_LINK_DUPLICATES_ONE_ONLY | SEC_LINK_DUPLICATES_SAME_SIZE)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define MICROMIPSOP_SH_FD 11
#define MICROMIPSOP_SH_FR 6
#define MICROMIPSOP_SH_FS 16
#define MICROMIPSOP_SH_FT 21
#define E_MIPS_ABI_O64 0x00002000
#define INSN2_SHORT_ONLY 0x00010000
#define bfd_mach_mrisc2 2
#define SHT_FINI_ARRAY 15
#define EXEC_P 0x02
#define bfd_section_alignment(bfd,ptr) ((ptr)->alignment_power)
#define bfd_mach_bfin 1
#define bfd_mach_mipsisa64 64
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define ELF_ST_IS_MICROMIPS(other) (((other) & STO_MIPS_ISA) == STO_MICROMIPS)
#define STO_MIPS_ISA (3 << 6)
#define UINT_FAST16_MAX UINT16_MAX
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)
#define bfd_mach_d10v_ts2 2
#define bfd_mach_d10v_ts3 3
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define INSN_READ_SHIFT 2
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define bfd_mach_mips_octeon 6501
#define OP_OP_LDC1 0x35
#define OP_SH_SA3 21
#define _bfd_int64_low(x) ((unsigned long) (((x) & 0xffffffff)))
#define OP_OP_LDC2 0x36
#define AFL_FLAGS1_ODDSPREG 1
#define bfd_get_outsymbols(abfd) ((abfd)->outsymbols)
#define bfd_debug_info_accumulate(abfd,section) BFD_SEND (abfd, _bfd_debug_info_accumulate, (abfd, section))
#define FAKE_RELOC(name,number) name = number,
#define OP_OP_LDC3 0x37
#define OP_SH_DSPSFT_7 19
#define SHF_LINK_ORDER (1 << 7)
#define DT_MIPS_HIDDEN_GOTIDX 0x70000027
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define bfd_section_list_insert_after(ABFD,A,S) do { asection *_a = A; asection *_s = S; asection *_next = _a->next; _s->next = _next; _s->prev = _a; _a->next = _s; if (_next) _next->prev = _s; else (ABFD)->section_last = _s; } while (0)
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define OP_MASK_DELTA 0xffff
#define EM_M32R 88
#define MICROMIPSOP_SH_CODE10 16
#define MICROMIPSOP_SH_CODE19 0
#define RSS_LOC 3
#define MICROMIPSOP_SH_ML 4
#define RHF_DELTA_C_PLUS_PLUS 0x00000040
#define __result_use_check __attribute__((__warn_unused_result__))
#define bfd_mach_hppa10 10
#define bfd_mach_hppa11 11
#define SHF_MIPS_NODUPES 0x01000000
#define MICROMIPSOP_SH_MB 23
#define MICROMIPSOP_SH_MC 4
#define MICROMIPSOP_SH_MD 7
#define MICROMIPSOP_SH_ME 1
#define MICROMIPSOP_SH_MF 3
#define MICROMIPSOP_SH_MG 0
#define MICROMIPSOP_SH_MH 7
#define MICROMIPSOP_SH_MJ 0
#define __SIZEOF_WINT_T__ 4
#define MICROMIPSOP_SH_CODE20 0
#define MICROMIPSOP_SH_MM 1
#define MICROMIPSOP_SH_MP 5
#define MICROMIPSOP_SH_MQ 7
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define MICROMIPSOP_SH_MN 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define DT_MOVESZ 0x6ffffdfb
#define bfd_mach_hppa20 20
#define NT_PRPSINFO 3
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __WATCHOS_3_1_1 30101
#define INSN_ISA5_32R2 20
#define __PTRDIFF_WIDTH__ 64
#define bfd_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_putx32, ((val),(ptr)))
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define OP_SH_SEL 0
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define DT_USED 0x7ffffffe
#define __INT8_MAX__ 0x7f
#define CPU_MIPS16 16
#define DT_RELA 7
#define elf_num_globals(bfd) (elf_tdata(bfd) -> num_globals)
#define AT_SUN_LDDATA 2016
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define SYMINFO_FLG_COPY 0x0004
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define OP_SH_SEQI 6
#define EM_CRIS 76
#define bfd_mach_sh2a_nofpu 0x2b
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define getchar_unlocked() getc_unlocked(stdin)
#define PRIO_PROCESS 0
#define __PTHREAD_COND_SIZE__ 40
#define MICROMIPSOP_SH_RS 16
#define MICROMIPSOP_SH_RT 21
#define MICROMIPSOP_SH_RZ 0
#define bindtextdomain(Domainname,Dirname) while (0)
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define DF_1_NODUMP 0x00001000
#define elf_elfsections(bfd) (elf_tdata(bfd) -> elf_sect_ptr)
#define bfd_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_64, (ptr))
#define MICROMIPSOP_MASK_SEQI 0
#define OP_MASK_MTACC_D 0x3
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define OP_MASK_MTACC_T 0x3
#define DT_MIPS_RLD_MAP 0x70000016
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define DT_MIPS_PERF_SUFFIX 0x7000002e
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __END_DECLS 
#define bfd_mach_cris_v32 32
#define TMP_MAX 308915776
#define RHF_NO_MOVE 0x00000008
#define MICROMIPSOP_SH_OFFSET_B 0
#define MICROMIPSOP_SH_OFFSET_C 0
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define _BSD_MACHINE_SIGNAL_H_ 
#define bfd_mach_mips3900 3900
#define __STDC_HOSTED__ 1
#define WAKEMON_DISABLE 0x02
#define ET_EXEC 2
#define AT_SUN_EMUL_ENTRY 2012
#define EM_CRX 114
#define _bfd_elf_minisymbol_to_symbol _bfd_generic_minisymbol_to_symbol
#define E_MIPS_MACH_4010 0x00820000
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define _SECURE__COMMON_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define bfd_mach_avr1 1
#define bfd_mach_avr2 2
#define bfd_mach_avr3 3
#define bfd_mach_avr4 4
#define bfd_mach_avr5 5
#define bfd_mach_avr6 6
#define OP_SH_MT_H 4
#define OP_MASK_FUNCT 0x3f
#define OP_SH_MT_U 5
#define MICROMIPSOP_MASK_SHAMT 0x1f
#define CPU_R12000 12000
#define ACONCAT(ACONCAT_PARAMS) (libiberty_concat_ptr = (char *) alloca (concat_length ACONCAT_PARAMS + 1), concat_copy2 ACONCAT_PARAMS)
#define bfd_mach_sh2a_nofpu_or_sh3_nommu 0x2a2
#define SIGURG 16
#define OP_MASK_COP1CMP 0x3
#define BFD_JUMP_TABLE_CORE(NAME) NAME ##_core_file_failing_command, NAME ##_core_file_failing_signal, NAME ##_core_file_matches_executable_p
#define bfd_mach_ip2022ext 2
#define __DBL_DIG__ 15
#define DT_PREINIT_ARRAY 32
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define bfd_mach_tricore 4
#define bfd_h_get_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx16, (ptr))
#define OP_SH_FORMAT 21
#define MICROMIPSOP_MASK_MT_H 0
#define DT_RELSZ 18
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define MICROMIPSOP_SH_CODE 16
#define _U_INT64_T 
#define DT_MIPS_LIBLISTNO 0x70000010
#define __SHRT_WIDTH__ 16
#define bfd_get_filename(abfd) ((char *) (abfd)->filename)
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define IOPOL_IMPORTANT 1
#define E_MIPS_ABI_EABI32 0x00003000
#define STT_COMMON 5
#define SEC_STRINGS 0x2000000
#define GNU_ABI_TAG_LINUX 0
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define SA_ONSTACK 0x0001
#define bfd_get_16(abfd,ptr) BFD_SEND (abfd, bfd_getx16, (ptr))
#define DT_MIPS_COMPACT_SIZE 0x7000002f
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __DYNAMIC__ 1
#define LL_EXACT_MATCH 0x00000001
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define INSN_ISA4_32 18
#define EM_CR 103
#define NT_PRSTATUS 1
#define _LIBELF_H_ 1
#define RHF_NO_UNRES_UNDEF 0x00002000
#define bfd_mach_mips_gs464e 3004
#define COFF_SWAP_TABLE (void *) &bfd_coff_std_swap_table
#define bfd_mach_mips_gs464 3003
#define bfd_get_32(abfd,ptr) BFD_SEND (abfd, bfd_getx32, (ptr))
#define E_MIPS_ABI_EABI64 0x00004000
#define bfd_h_get_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx64, (ptr))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define SEC_IN_MEMORY 0x4000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define SHF_MIPS_ADDR 0x40000000
#define DIS_ASM_H 
#define SIGNED signed
#define _STDDEF_H 
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __LONG_MAX__ 0x7fffffffffffffffL
#define bfd_mach_tic3x 30
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define EF_MIPS_PIC 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define bfd_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_16, (ptr))
#define __MAC_10_7 1070
#define bfd_mach_tic4x 40
#define DT_MIPS_LOCAL_GOTIDX 0x70000026
#define __AVAILABILITY_VERSIONS__ 
#define bfd_get_64(abfd,ptr) BFD_SEND (abfd, bfd_getx64, (ptr))
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define SYMINFO_NUM 2
#define OP_MASK_OFFSET10 0
#define OP_MASK_OFFSET12 0xfff
#define __AVAILABILITY_INTERNAL_REGULAR 
#define bfd_printf_vma(abfd,x) bfd_fprintf_vma (abfd,stdout,x)
#define ODK_HWPATCH 4
#define SHT_MIPS_DELTACLASS 0x7000001d
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define EM_RCE 39
#define __GNUC__ 11
#define __APPLE__ 1
#define __UINT16_C(c) c
#define ELF_VER_CHR '@'
#define __PTRDIFF_TYPE__ long int
#define SHT_MIPS_EVENTS 0x70000021
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define OP_SH_EXTMSBD 11
#define __IPHONE_4_3 40300
#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))
#define __APPLE_API_STABLE 
#define ELF32_MS_REL_INDEX(i) ((i) >> 8)
#define MICROMIPSOP_SH_COPZ 3
#define AFL_EXT_4650 7
#define OP_SH_BBITIND 16
#define EM_IA_64 50
#define __FLT32X_MIN_10_EXP__ (-307)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define INSN_4111 0x00400000
#define __FLT64_MANT_DIG__ 53
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define INSN_4120 0x00800000
#define ET_LOOS 0xFE00
#define SHF_MIPS_GPREL 0x10000000
#define PF_MASKPROC 0xF0000000
#define bfd_mach_msp110 110
#define VER_DEF_NONE 0
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define MICROMIPSOP_MASK_EVAOFFSET 0x1ff
#define bfd_mach_ms1 1
#define bfd_mach_ms2 3
#define EF_MIPS_ARCH_ASE 0x0f000000
#define bfd_mach_arm_5TE 9
#define _T_PTRDIFF 
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define DECLARE_GENERIC_FPRINTF_FUNC() static int generic_fprintf_func(void *stream, const char *format, ...) { int ret; va_list ap; if (!buf_global || !format) { return 0; } va_start (ap, format); ret = r_strbuf_vappendf (buf_global, format, ap); va_end (ap); return ret; }
#define elf_dyn_lib_class(bfd) (elf_tdata(bfd) -> dyn_lib_class)
#define CLD_NOOP 0
#define E_MIPS_ARCH_32 0x50000000
#define L_ctermid 1024
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __FLT_HAS_DENORM__ 1
#define AFL_ASE_EVA 0x00000004
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define OP_MASK_CACHE 0x1f
#define ASE_MIPS16E2 0x00008000
#define XNEW(T) ((T *) xmalloc (sizeof (T)))
#define bfd_mach_s390_64 64
#define elf_known_obj_attributes(bfd) (elf_tdata (bfd) -> known_obj_attributes)
#define INT_FAST16_MIN INT16_MIN
#define _ID_T 
#define bfd_mach_mips14000 14000
#define EM_SH 42
#define SEEK_CUR 1
#define _OS__OSBYTEORDER_H 
#define PT_MIPS_ABIFLAGS 0x70000003
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define bfd_mach_m32r2 '2'
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define NT_LWPSTATUS 16
#define xmalloc malloc
#define __INTPTR_TYPE__ long int
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define OP_MASK_IMMA 0
#define OP_MASK_IMMB 0
#define OP_MASK_IMMC 0
#define OP_MASK_IMMF 0
#define OP_MASK_IMMH 0
#define OP_MASK_IMMJ 0
#define DT_PREINIT_ARRAYSZ 33
#define OP_MASK_IMML 0
#define OP_MASK_IMMM 0
#define OP_MASK_IMMN 0
#define OP_MASK_IMMO 0
#define OP_MASK_IMMQ 0
#define bfd_mach_m32rx 'x'
#define OP_MASK_IMMW 0
#define PRIO_DARWIN_PROCESS 4
#define OP_MASK_IMMY 0
#define OP_SH_COP1NORM 25
#define DT_MIPS_LIBLIST 0x70000009
#define SYMBOL_CALLS_LOCAL(INFO,H) _bfd_elf_symbol_refs_local_p (H, INFO, 1)
#define MICROMIPSOP_SH_PERFREG 0
#define _I386_SIGNAL_H_ 1
#define PT_MIPS_OPTIONS 0x70000002
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define VER_NDX_GLOBAL 1
#define OP_SH_COP1SPEC 21
#define EM_NDR1 57
#define MICROMIPSOP_SH_RDDSP 0
#define FPE_FLTDIV 1
#define ELFOSABI_AIX 7
#define CPU_LOONGSON_2F 3002
#define bfd_get(bits,abfd,ptr) ((bits) == 8 ? (bfd_vma) bfd_get_8 (abfd, ptr) : (bits) == 16 ? bfd_get_16 (abfd, ptr) : (bits) == 32 ? bfd_get_32 (abfd, ptr) : (bits) == 64 ? bfd_get_64 (abfd, ptr) : (abort (), (bfd_vma) - 1))
#define STT_FILE 4
#define __DBL_HAS_INFINITY__ 1
#define _T_PTRDIFF_ 
#define bfd_mach_z8001 1
#define bfd_mach_z8002 2
#define IOPOL_SCOPE_PROCESS 0
#define ELFDATA2MSB 2
#define MICROMIPSOP_SH_IMM10 16
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define SYMINFO_BT_SELF 0xffff
#define RSIZE_MAX (SIZE_MAX >> 1)
#define SHT_MIPS_UCODE 0x70000004
#define bfd_mach_arm_XScale 10
#define __DARWIN_OS_INLINE static inline
#define stdin __stdinp
#define bfd_zalloc calloc
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define SHT_MIPS_PIXIE 0x70000023
#define bfd_mach_mcf_isa_b_float_emac 24
#define AT_FPUCW 18
#define PEX_BINARY_INPUT 0x10
#define INSN2_VU0_CHANNEL_SUFFIX 0x00004000
#define BUS_NOOP 0
#define EM_PJ 91
#define OEX_PAGE0 0x10000
#define SHT_MIPS_OPTIONS 0x7000000d
#define EM_XC16X 0x4688
#define EM_CYGNUS_MEP 0xF00D
#define __TVOS_AVAILABLE(_vers) 
#define AFL_EXT_5500 16
#define MICROMIPSOP_MASK_WRDSP 0x3f
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define ELF32_MS_FLAGS(i) (i) & 0xff)
#define __INT_FAST16_TYPE__ short int
#define AT_SUN_CPU 2011
#define SA_64REGSET 0x0200
#define SEC_ROM 0x040
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define DT_GNU_LIBLISTSZ 0x6ffffdf7
#define EM_VPP550 17
#define __FLT64_HAS_DENORM__ 1
#define UINT_LEAST8_MAX UINT8_MAX
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define RUSAGE_INFO_V2 2
#define EM_ST19 74
#define SEC_COFF_SHARED_LIBRARY 0x10000000
#define DT_MIPS_GOTSYM 0x70000013
#define bfd_mach_ppc_403gc 4030
#define __FLT128_HAS_INFINITY__ 1
#define DF_1_INTERPOSE 0x00000400
#define NT_LWPSINFO 17
#define ELFOSABI_ARM 97
#define EF_MIPS_FP64 0x00000200
#define _bfd_generic_init_private_section_data _bfd_elf_init_private_section_data
#define SHT_MIPS_LIBLIST 0x70000000
#define SHT_SYMTAB_SHNDX 18
#define EM_ST7 68
#define CPU_VR5400 5400
#define SA_RESETHAND 0x0004
#define __TVOS_10_0_1 100001
#define bfd_h_get_8(abfd,ptr) bfd_get_8 (abfd, ptr)
#define dgettext(Domainname,Msgid) (Msgid)
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define EM_CYGNUS_MN10300 0xbeef
#define bfd_mach_mcf_isa_b_float 22
#define SEC_TIC54X_CLINK 0x80000000
#define SHT_NOBITS 8
#define __FLT64_MIN_10_EXP__ (-307)
#define __SOFF 0x1000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define BSF_FUNCTION 0x10
#define __SSTR 0x0200
#define ELFCLASSNONE 0
#define VER_NEED_NONE 0
#define bfd_free_cached_info(abfd) BFD_SEND (abfd, _bfd_free_cached_info, (abfd))
#define AT_GID 13
#define DTF_1_CONFEXP 0x00000002
#define RHS_NO_LIBRARY_REPLACEMENT 0x00000004
#define elf_other_obj_attributes(bfd) (elf_tdata (bfd) -> other_obj_attributes)
#define bfd_mach_frv 1
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define SHT_MIPS_PDESC 0x70000014
#define ODK_REGINFO 1
#define __unavailable 
#define bfd_mach_mips4100 4100
#define OP_SH_LOCC 8
#define bfd_copy_private_section_data(ibfd,isection,obfd,osection) BFD_SEND (obfd, _bfd_copy_private_section_data, (ibfd, isection, obfd, osection))
#define __amd64 1
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define bfd_mach_mips4111 4111
#define STB_LOOS 10
#define bfd_mach_mcf_isa_a_nodiv 9
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define SHT_MIPS_WHIRL 0x70000026
#define bfd_mach_mips4120 4120
#define MAC_OS_X_VERSION_10_5 1050
#define MIPS16OP_MASK_REG32R 0x1f
#define ANSI_PROTOTYPES 1
#define MICROMIPSOP_SH_IMMA 0
#define EM_OR32 0x8472
#define RELOC_NUMBER(name,number) name = number,
#define __FLT32_HAS_QUIET_NAN__ 1
#define ASE_XPA 0x00002000
#define SHF_ALLOC (1 << 1)
#define RHF_NOTPOT 0x00000002
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define bfd_mach_i960_ca 6
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define SHN_BAD ((unsigned) -1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define NT_FPREGS 12
#define _WCHAR_T 
#define OP_MASK_CINSLM1 0x1f
#define SHT_MIPS_CONTENT 0x7000000c
#define bfd_is_und_section(sec) ((sec) == bfd_und_section_ptr)
#define EM_MMIX 80
#define WAKEMON_MAKE_FATAL 0x10
#define DT_JMPREL 23
#define SIG_BLOCK 1
#define CPU_MIPS32 32
#define AFL_EXT_SB1 12
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define INSN_XLR 0x00000020
#define PRIO_DARWIN_THREAD 3
#define bfd_mach_arm_iWMMXt2 13
#define bfd_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_32, (ptr))
#define PT_TLS 7
#define SHN_COMMON 0xFFF2
#define SEC_HAS_GOT_REF 0x800
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define UINT64_C(v) (v ## ULL)
#define __IPHONE_2_0 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define SHN_MIPS_SCOMMON (SHN_LORESERVE + 3)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define bfd_mach_x86_64 64
#define AT_PHENT 4
#define STO_INTERNAL STV_INTERNAL
#define bfd_set_section_userdata(bfd,ptr,val) (((ptr)->userdata = (val)),TRUE)
#define __FLT32_MAX_EXP__ 128
#define bfd_section_vma(bfd,ptr) ((ptr)->vma)
#define NT_PSTATUS 10
#define bfd_get_section_alignment(bfd,ptr) ((ptr)->alignment_power + 0)
#define __SOPT 0x0400
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define E_MIPS_MACH_4650 0x00850000
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)
#define bfd_mach_z80full 7
#define SHF_INFO_LINK (1 << 6)
#define SEGV_NOOP 0
#define ELFOSABI_NETBSD 2
#define bfd_mach_i960_hx 8
#define __GXX_ABI_VERSION 1016
#define AFL_ASE_MCU 0x00000008
#define HAS_DEBUG 0x08
#define UINT_LEAST16_MAX UINT16_MAX
#define SHF_TLS (1 << 10)
#define bfd_mach_mipsisa32r2 33
#define bfd_mach_mipsisa32r3 34
#define bfd_mach_mipsisa32r5 36
#define bfd_mach_mipsisa32r6 37
#define INSN_READ_ALL 0x0000003c
#define dcgettext(Domainname,Msgid,Category) (Msgid)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define SHT_MIPS_OPTSYM 0x70000017
#define bfd_is_ind_section(sec) ((sec) == bfd_ind_section_ptr)
#define OP_SH_3BITPOS 12
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define SHT_MIPS_CONFLICT 0x70000002
#define INT8_MIN -128
#define WNOHANG 0x00000001
#define EF_MIPS_XGOT 0x00000008
#define _BSD_MACHINE__TYPES_H_ 
#define OP_SH_PREFX 11
#define __x86_64 1
#define __PTRDIFF_T 
#define ELF_COMMON_DEF_P(H) (!(H)->def_regular && !(H)->def_dynamic && (H)->root.type == bfd_link_hash_defined)
#define EM_SPARCV9 43
#define __PTHREAD_CONDATTR_SIZE__ 8
#define INSN_TLB 0x00000200
#define bfd_und_section_ptr ((asection *) &bfd_und_section)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define AT_DCACHEBSIZE 19
#define EM_MCORE 39
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define SHT_MIPS_IFACE 0x7000000b
#define _VA_LIST 
#define E_MIPS_MACH_XLR 0x008c0000
#define OP_SH_STYPE OP_SH_SHAMT
#define NT_NETBSDCORE_PROCINFO 1
#define EM_CYGNUS_D30V 0x7676
#define __OSX_AVAILABLE(_vers) 
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define __SIZEOF_INT__ 4
#define ELF_ST_INFO(bind,type) (((bind) << 4) + ((type) & 0xF))
#define elf_num_section_syms(bfd) (elf_tdata(bfd) -> num_section_syms)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define ElfNAME(X) NAME(Elf,X)
#define OP_MASK_OFFSET_A 0xff
#define OP_MASK_OFFSET_B 0xff
#define OP_MASK_OFFSET_C 0x1ff
#define BFD_ELF_VERSION_CXX_TYPE 2
#define BFD_ELF_VERSION_JAVA_TYPE 4
#define E_MIPS_MACH_GS464E 0x00A30000
#define __INT_FAST8_WIDTH__ 8
#define bfd_mach_mcf_isa_aplus_emac 15
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define SEC_DATA 0x020
#define SIGTRAP 5
#define E_MIPS_MACH_IAMR2 0x00930000
#define bfd_mach_mips5000 5000
#define __nonnull 
#define elf_sym_hashes(bfd) (elf_tdata(bfd) -> sym_hashes)
#define NUMOPCODES bfd_mips_num_opcodes
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define MICROMIPSOP_SH_ALN 0
#define INSN2_BRANCH_DELAY_32BIT 0x00000040
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define EM_DLX 0x5aa5
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define INT_LEAST8_MAX INT8_MAX
#define CPU_R6000 6000
#define XDELETEVEC(P) free ((void*) (P))
#define SEC_ALLOC 0x001
#define MICROMIPSOP_SH_MTACC_D 0
#define __has_extension(x) 0
#define OP_SH_TRUE 16
#define BSF_LOCAL 0x01
#define MICROMIPSOP_SH_MTACC_T 0
#define MICROMIPSOP_MASK_VECALIGN 0
#define E_MIPS_MACH_5500 0x00980000
#define PEXECUTE_FIRST 1
#define __FLT64X_DECIMAL_DIG__ 21
#define CPU_MIPS64R3 66
#define DT_INIT_ARRAY 25
#define __API_AVAILABLE_END 
#define SHT_SHLIB 10
#define __DBL_HAS_DENORM__ 1
#define bfd_mach_m68008 2
#define INT_LEAST32_MAX INT32_MAX
#define bfd_mach_i960_xa 5
#define bfd_is_abs_section(sec) ((sec) == bfd_abs_section_ptr)
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define CPU_R3900 3900
#define DT_PLTREL 20
#define AFL_ASE_MSA 0x00000200
#define CPU_R4650 4650
#define bfd_get_target(abfd) ((abfd)->xvec->name)
#define __OS_AVAILABILITY(_target,_availability) 
#define __WATCHOS_3_0 30000
#define bfd_mach_frvtomcat 499
#define DT_LOPROC 0x70000000
#define bfd_mach_m68020 4
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define INSN_10000 0x00100000
#define bfd_final_link(abfd,info) BFD_SEND (abfd, _bfd_final_link, (abfd, info))
#define __NO_INLINE__ 1
#define WILL_CALL_FINISH_DYNAMIC_SYMBOL(DYN,SHARED,H) ((DYN) && ((SHARED) || !(H)->forced_local) && ((H)->dynindx != -1 || (H)->forced_local))
#define USER_SPECIFIED_MACHINE_TYPE (1LL << 29)
#define AFL_ASE_MICROMIPS 0x00000800
#define bfd_mach_m68040 6
#define INSN_UPTO32R2 INSN_UPTO32 | ISAF(32R2) | ISAF(3_32R2) | ISAF(4_32R2) | ISAF(5_32R2)
#define INSN_UPTO32R3 INSN_UPTO32R2 | ISAF(32R3)
#define LOCAL_SYM_CACHE_SIZE 32
#define INSN_UPTO32R5 INSN_UPTO32R3 | ISAF(32R5)
#define INSN_UPTO32R6 INSN_UPTO32R5 | ISAF(32R6)
#define _SIZE_T 
#define bfd_canonicalize_symtab(abfd,location) BFD_SEND (abfd, _bfd_canonicalize_symtab, (abfd, location))
#define __enum_options 
#define __LDBL_DECIMAL_DIG__ 21
#define AFL_REG_128 0x03
#define OP_MASK_CODE19 0x7ffff
#define BFD_UND_SECTION_NAME "*UND*"
#define OP_OP_COP2 0x12
#define MICROMIPSOP_SH_IMMG 0
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define INSN_WRITE_COND_CODE 0x00000080
#define bfd_print_private_bfd_data(abfd,file) BFD_SEND (abfd, _bfd_print_private_bfd_data, (abfd, file))
#define OP_MASK_CODE20 0xfffff
#define bfd_mach_m68060 7
#define __used __attribute__((__used__))
#define __DBL_MANT_DIG__ 53
#define MICROMIPSOP_SH_DSPACC_S 0
#define __STDC_WANT_LIB_EXT1__ 1
#define BADSIG SIG_ERR
#define SEC_CONSTRUCTOR 0x080
#define DT_SYMINFO 0x6ffffeff
#define SV_RESETHAND SA_RESETHAND
#define __SIZEOF_LONG_LONG__ 8
#define INT_LEAST32_MIN INT32_MIN
#define RHF_GUARANTEE_INIT 0x00000020
#define BFD64 
#define CONST const
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define BFD_FAKE_SECTION(SEC,FLAGS,SYM,SYM_PTR,NAME,IDX) { NAME, IDX, 0, NULL, NULL, FLAGS, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (struct bfd_section *) &SEC, 0, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, 0, NULL, NULL, NULL, (struct bfd_symbol *) SYM, (struct bfd_symbol **) SYM_PTR, { NULL }, { NULL } }
#define STB_HIOS 12
#define _ELF_INTERNAL_H 
#define BFD_TRADITIONAL_FORMAT 0x400
#define MICROMIPSOP_SH_INSMSB 11
#define IOPOL_THROTTLE 3
#define __STRING(x) #x
#define bfd_mach_am33_2 332
#define SIGVTALRM 26
#define EM_ZSP 79
#define DT_MIPS_CONFLICTNO 0x7000000b
#define RHF_REQUICKSTARTED 0x00000800
#define RLIMIT_CPU 0
#define SEC_LINK_DUPLICATES_ONE_ONLY 0x80000
#define DT_MIPS_DELTA_RELOC 0x7000001b
#define core_prpsinfo(bfd) (elf_tdata(bfd) -> prpsinfo)
#define FP_D 0x02000000
#define FP_S 0x01000000
#define EM_X86_64 62
#define CPU_MIPS5 5
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define __API_DEPRECATED(...) 
#define E_MIPS_MACH_9000 0x00990000
#define FPE_INTOVF 8
#define MICROMIPSOP_MASK_DSPSFT_7 0
#define _OFF_T 
#define clearerr_unlocked(p) __sclearerr(p)
#define gettext(Msgid) (Msgid)
#define __MAC_10_12_4 101204
#define bfd_mach_sparc 1
#define ELF_ST_IS_MIPS16(other) (((other) & STO_MIPS16) == STO_MIPS16)
#define DT_HIPROC 0x7fffffff
#define elf_linked_to_section(sec) (elf_section_data(sec)->linked_to)
#define E_MIPS_ARCH_64 0x60000000
#define bfd_update_armap_timestamp(abfd) BFD_SEND (abfd, _bfd_update_armap_timestamp, (abfd))
#define HAS_LOAD_PAGE 0x1000
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define NT_ARCH 2
#define __FBSDID(s) 
#define EM_68K 4
#define __BIGGEST_ALIGNMENT__ 16
#define MICROMIPSOP_MASK_TARGET 0x3ffffff
#define STT_LOPROC 13
#define INT32_MAX 2147483647
#define OGP_GROUP 0x0000ffff
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define INSN_ISA_MASK 0x0000001ful
#define _U_INT8_T 
#define bfd_mach_sh2a 0x2a
#define MICROMIPSOP_MASK_EXTLSB 0x1f
#define SYMBOLIC_BIND(INFO,H) ((INFO)->symbolic || ((INFO)->dynamic && !(H)->dynamic))
#define ASE_LOONGSON_CAM 0x00400000
#define OEX_FPU_OFLO 0x04
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define PRIO_DARWIN_BG 0x1000
#define bfd_mach_sh3e 0x3e
#define OP_MASK_RS3 0
#define INSN_LOAD_MEMORY 0x00000800
#define BSF_DEBUGGING 0x08
#define __SALC 0x4000
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define bfd_mach_sh4a 0x4a
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define SHT_GNU_HASH 0x6ffffff6
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define RLIMIT_THREAD_CPULIMITS 0x3
#define _SYS_STDIO_H_ 
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define E_MIPS_MACH_5400 0x00910000
#define SIGSEGV 11
#define OP_MASK_DSPACC 0x3
#define RLIMIT_NPROC 7
#define IOPOL_STANDARD 5
#define __INT_FAST32_TYPE__ int
#define getc_unlocked(fp) __sgetc(fp)
#define bfd_mach_mcf_isa_b_nousp 16
#define LL_EXPORTS 0x00000008
#define H_PUT_8 bfd_h_put_8
#define DT_MIPS_IVERSION 0x70000004
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define INSN_INTERAPTIV_MR2 0x04000000
#define MICROMIPSOP_MASK_VECBYTE 0
#define _bfd_generic_find_line _bfd_elf_find_line
#define SHT_GNU_ATTRIBUTES 0x6ffffff5
#define OEX_FPU_INEX 0x01
#define OP_SH_MMI 0
#define SIG_ATOMIC_MIN INT32_MIN
#define INSN_READ_COND_CODE 0x00000100
#define __SAPP 0x0100
#define CPU_R4300 4300
#define PEX_BINARY_OUTPUT 0x20
#define CPU_R5900 5900
#define BSF_DEBUGGING_RELOC 0x20000
#define _INT64_T 
#define bfd_mach_sh2a_nofpu_or_sh4_nommu_nofpu 0x2a1
#define MIPS16OP_SH_REG32R 3
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define DF_ORIGIN (1 << 0)
#define AFL_ASE_VIRT 0x00000100
#define CPU_INTERAPTIV_MR2 736550
#define BFD_SEND(bfd,message,arglist) ((*((bfd)->xvec->message)) arglist)
#define __enum_closed 
#define bfd_mach_i960_jx 7
#define bfd_set_section(x,y) ((x)->section) = (y)
#define MDMX_FMTSEL_VEC_QH 0x15
#define bfd_mach_mips5 5
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define BSF_FILE 0x4000
#define EI_VERSION 6
#define ELF32_ST_VISIBILITY ELF_ST_VISIBILITY
#define PRIO_MAX 20
#define _UINTMAX_T 
#define EM_SPU 23
#define SIGSTKSZ 131072
#define ELFCLASS64 2
#define bfd_mach_mcf_isa_a 10
#define bfd_mach_mcf_isa_b 19
#define SHT_NULL 0
#define BSF_THREAD_LOCAL 0x40000
#define EI_CLASS 4
#define RHF_SGI_ONLY 0x00000010
#define DT_TLSDESC_GOT 0x6ffffef7
#define SHN_HIOS 0xFF3F
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define OP_MASK_RDDSP 0x3f
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __FLT128_DECIMAL_DIG__ 36
#define STT_HIPROC 15
#define OP_SH_PERFREG 1
#define DT_MIPS_MSYM 0x70000007
#define OP_SH_UDI2 6
#define OP_SH_UDI3 6
#define OP_SH_UDI4 6
#define ELF_IS_SECTION_IN_SEGMENT(sec_hdr,segment) (((((sec_hdr->sh_flags & SHF_TLS) != 0) && (segment->p_type == PT_TLS || segment->p_type == PT_LOAD)) || ((sec_hdr->sh_flags & SHF_TLS) == 0 && segment->p_type != PT_TLS)) && (sec_hdr->sh_type == SHT_NOBITS || ((bfd_vma) sec_hdr->sh_offset >= segment->p_offset && (sec_hdr->sh_offset + ELF_SECTION_SIZE(sec_hdr, segment) <= segment->p_offset + segment->p_filesz))) && ((sec_hdr->sh_flags & SHF_ALLOC) == 0 || (sec_hdr->sh_addr >= segment->p_vaddr && (sec_hdr->sh_addr + ELF_SECTION_SIZE(sec_hdr, segment) <= segment->p_vaddr + segment->p_memsz))))
#define CPU_UNKNOWN 0
#define BFD_JUMP_TABLE_GENERIC(NAME) NAME ##_close_and_cleanup, NAME ##_bfd_free_cached_info, NAME ##_new_section_hook, NAME ##_get_section_contents, NAME ##_get_section_contents_in_window
#define ELF_INFO_TYPE_NONE 0
#define __FLT_RADIX__ 2
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define ASE_VIRT64 0x00000400
#define ELF_ST_BIND(val) (((unsigned int)(val)) >> 4)
#define _hex_bad 99
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define DT_PLTPADSZ 0x6ffffdf9
#define OP_MASK_IMM8 0xff
#define OP_SH_FD 6
#define DT_MIPS_PROTECTED_GOTIDX 0x70000028
#define BFD_JUMP_TABLE_SYMBOLS(NAME) NAME ##_get_symtab_upper_bound, NAME ##_canonicalize_symtab, NAME ##_make_empty_symbol, NAME ##_print_symbol, NAME ##_get_symbol_info, NAME ##_bfd_is_local_label_name, NAME ##_bfd_is_target_special_symbol, NAME ##_get_lineno, NAME ##_find_nearest_line, _bfd_generic_find_line, NAME ##_find_inliner_info, NAME ##_bfd_make_debug_symbol, NAME ##_read_minisymbols, NAME ##_minisymbol_to_symbol
#define XCONCAT4(a,b,c,d) CONCAT4(a,b,c,d)
#define _U_INT32_T 
#define EM_SVX 73
#define bfd_asymbol_flavour(x) (bfd_asymbol_bfd(x)->xvec->flavour)
#define HOWTO(C,R,S,B,P,BI,O,SF,NAME,INPLACE,MASKSRC,MASKDST,PC) { (unsigned) C, R, S, B, P, BI, O, SF, NAME, INPLACE, MASKSRC, MASKDST, PC }
#define GRP_COMDAT 0x1
#define _UID_T 
#define PT_LOAD 1
#define RUSAGE_SELF 0
#define EM_CYGNUS_MN10200 0xdead
#define AFL_EXT_4010 8
#define ELF_IS_SECTION_IN_SEGMENT_FILE(sec_hdr,segment) (sec_hdr->sh_size > 0 && ELF_IS_SECTION_IN_SEGMENT (sec_hdr, segment))
#define SHF_MERGE (1 << 4)
#define ELF64_MIPS_R_SSYM(i) (((i) >> 24) & 0xff)
#define SIGPIPE 13
#define bfd_mach_sparc_v8plusb 9
#define MIPS16OP_SH_IMM11 0
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define OP_MASK_IMMI 0
#define SEEK_SET 0
#define RLIMIT_CORE 4
#define AT_CLKTCK 17
#define IOPOL_TYPE_DISK 0
#define ISA_UNKNOWN 0
#define DT_MIPS_RWPLT 0x70000034
#define XCNEW(T) ((T *) xcalloc (1, sizeof (T)))
#define MICROMIPSOP_MASK_RS 0x1f
#define __DARWIN_64_BIT_INO_T 1
#define AFL_EXT_INTERAPTIV_MR2 20
#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define OP_MASK_IMMP 0
#define __FLT32X_MANT_DIG__ 53
#define CPU_VR5500 5500
#define OP_SH_DELTA 0
#define OP_MASK_VECBYTE 0x7
#define SHT_MIPS_XLATE_DEBUG 0x70000025
#define DT_MIPS_GP_VALUE 0x70000030
#define MICROMIPSOP_MASK_3BITPOS 0x7
#define OP_MASK_IMMU 0
#define bfd_stat_arch_elt(abfd,stat) BFD_SEND (abfd, _bfd_stat_arch_elt,(abfd, stat))
#define BSF_NOT_AT_END 0x400
#define ASE_CRC 0x00040000
#define __x86_64__ 1
#define elfNAME(X) NAME(elf,X)
#define RLIMIT_RSS RLIMIT_AS
#define MAC_OS_VERSION_11_0 110000
#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))
#define UINT_FAST32_MAX UINT32_MAX
#define bfd_mach_ppc_403 403
#define EM_ALTERA_NIOS2 113
#define bfd_mach_fr30 0x46523330
#define ISA_MIPS1 INSN_ISA1
#define ISA_MIPS2 INSN_ISA2
#define ISA_MIPS3 INSN_ISA3
#define ISA_MIPS4 INSN_ISA4
#define ISA_MIPS5 INSN_ISA5
#define bfd_discard_group(abfd,sec) BFD_SEND (abfd, _bfd_discard_group, (abfd, sec))
#define DT_FINI_ARRAYSZ 28
#define __deprecated __attribute__((__deprecated__))
#define bfd_mach_mcf_isa_b_mac 20
#define POLL_OUT 2
#define bfd_mach_m6812 1
#define NT_NETBSD_IDENT 1
#define BSF_GLOBAL 0x02
#define E_MIPS_ARCH_64R6 0xa0000000
#define EM_CYGNUS_FRV 0x5441
#define INSN_COP 0x00000400
#define __UINT_FAST32_MAX__ 0xffffffffU
#define DT_MIPS_DELTA_CLASS_NO 0x70000018
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define bfd_mach_m68000 1
#define OP_MASK_VECALIGN 0x7
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define OP_MASK_BP 0x3
#define FP_RND_UP 2
#define DT_REL 17
#define __FLT_HAS_QUIET_NAN__ 1
#define RHF_DEFAULT_DELAY_LOAD 0x00000200
#define DT_MIPS_DELTA_CLASSSYM_NO 0x70000021
#define _STDINT_H_ 
#define BFD_LINKER_CREATED 0x2000
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define OP_MASK_CC 0x7
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define DT_DEPAUDIT 0x6ffffefb
#define __FLT_HAS_INFINITY__ 1
#define bfd_get_section_userdata(bfd,ptr) ((ptr)->userdata)
#define DT_MIPS_INTERFACE 0x7000002a
#define BFD_HOST_LONG_LONG 1
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define _BSD_PTRDIFF_T_ 
#define EM_CR16 115
#define SIGXFSZ 25
#define CPU_RM9000 9000
#define PT_INTERP 3
#define OP_MASK_SPEC 0x3f
#define SIGHUP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define AT_NULL 0
#define PT_LOOS 0x60000000
#define OP_MASK_FD 0x1f
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define OP_OP_SDC1 0x3d
#define OP_OP_SDC2 0x3e
#define OP_OP_SDC3 0x3f
#define __IPHONE_12_4 120400
#define NULL ((void *)0)
#define elf_local_got_refcounts(bfd) (elf_tdata(bfd) -> local_got.refcounts)
#define OP_MASK_FR 0x1f
#define OP_MASK_FS 0x1f
#define OP_MASK_FT 0x1f
#define MICROMIPSOP_MASK_CODE2 0x3ff
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define OP_SH_CINSPOS 6
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define OP_MASK_GE 0x01
#define BFD_DEFAULT_TARGET_SIZE 32
#define OP_MASK_CODE 0x3ff
#define __SIZE_WIDTH__ 64
#define __INTMAX_WIDTH__ 64
#define DEFUN(name,arglist,args) name(args)
#define OP_SH_FUNCT 0
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define NUM_SHDR_ENTRIES(shdr) ((shdr)->sh_size / (shdr)->sh_entsize)
#define bfd_mach_i960_kb_sb 3
#define bfd_mach_xc16xl 2
#define OP_SH_DSPSFT 20
#define __INT_LEAST8_TYPE__ signed char
#define DT_MIPS_RLD_MAP_REL 0x70000035
#define OEX_FPU_UFLO 0x02
#define DT_MIPS_ICHECKSUM 0x70000003
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define SHT_MIPS_PDR_EXCEPTION 0x70000029
#define __PTHREAD_SIZE__ 8176
#define MICROMIPSOP_SH_BCC 18
#define DT_MIPS_TIME_STAMP 0x70000002
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(v) (v ## UL)
#define __SIZEOF_POINTER__ 8
#define bfd_get_dynamic_reloc_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_reloc_upper_bound, (abfd))
#define SEC_MERGE 0x1000000
#define SEGV_ACCERR 2
#define OP_MASK_MB 0
#define OP_MASK_MC 0
#define OP_MASK_MD 0
#define OP_MASK_ME 0
#define OP_MASK_MF 0
#define OP_MASK_MG 0
#define OP_MASK_MH 0
#define OP_MASK_MJ 0
#define OP_MASK_ML 0
#define OP_MASK_MM 0
#define OP_MASK_MN 0
#define OP_MASK_MP 0
#define OP_MASK_MQ 0
#define SIGSTOP 17
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __STDIO_H_ 
#define OP_MASK_3BITPOS 0x7
#define bfd_section_already_linked(abfd,sec) BFD_SEND (abfd, _section_already_linked, (abfd, sec))
#define EI_MAG0 0
#define EI_MAG2 2
#define EI_MAG3 3
#define __FLT64_HAS_QUIET_NAN__ 1
#define _SECURE__STDIO_H_ 
#define EM_PDP10 64
#define EM_PDP11 65
#define INSN_READ_HI 0x00040000
#define bfd_put_signed_8 bfd_put_8
#define ELF64_R_INFO(s,t) (((bfd_vma) (s) << 31 << 1) + (bfd_vma) (t))
#define elf_dynversym(bfd) (elf_tdata(bfd) -> dynversym_section)
#define __BFD_H_SEEN__ 
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define bfd_mach_arm_iWMMXt 12
#define OPAD_SYMBOL 0x04
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define EM_RH32 38
#define STRINGX(s) #s
#define SYMINFO_FLG_PASSTHRU 0x0002
#define ELF_INFO_TYPE_JUST_SYMS 4
#define OP_SH_INSMSB 11
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define bfd_mach_mcf_isa_aplus_mac 14
#define SHT_MIPS_RELD 0x70000009
#define OP_MASK_RD 0x1f
#define SEC_RELOC 0x004
#define __PTHREAD_ATTR_SIZE__ 56
#define AFL_EXT_3900 10
#define bfd_mach_mcf_isa_a_mac 11
#define OP_MASK_RS 0x1f
#define OP_MASK_RT 0x1f
#define INSN2_READ_GPR_16 0x00002000
#define OP_MASK_RZ 0x1f
#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
#define DF_1_NOOPEN 0x00000040
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define DT_VERNEEDNUM 0x6fffffff
#define INT_FAST8_MAX INT8_MAX
#define AT_UID 11
#define POLL_HUP 6
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __GNUC_VA_LIST 
#define OP_MASK_COPZ 0x1ffffff
#define _GCC_MAX_ALIGN_T 
#define RLIMIT_NOFILE 8
#define WSTOPPED 0x00000008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define INSN_LOAD_COPROC 0x00001000
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _ANSIDECL_H 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define ISA_MIPS64R2 INSN_ISA64R2
#define ISA_MIPS64R3 INSN_ISA64R3
#define ISA_MIPS64R5 INSN_ISA64R5
#define ISA_MIPS64R6 INSN_ISA64R6
#define MICROMIPSOP_SH_OFFSET_A 0
#define DT_RELENT 19
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define bfd_get_symbol_leading_char(abfd) ((abfd)->xvec->symbol_leading_char)
#define __k8__ 1
#define bfd_mach_v850 1
#define __UINT16_TYPE__ short unsigned int
#define _SYS__PTHREAD_TYPES_H_ 
#define bfd_mach_arm_3M 4
#define OP_MASK_DSPACC_S 0x3
#define bfd_elf_add_proc_attr_int(BFD,TAG,VALUE) bfd_elf_add_obj_attr_int ((BFD), OBJ_ATTR_PROC, (TAG), (VALUE))
#define FALSE 0
#define OEX_FPU_INVAL 0x10
#define VOLATILE volatile
#define bfd_mach_arm_4T 6
#define ELFOSABI_IRIX 8
#define CPU_GS464 3003
#define basename basename_cannot_be_used_without_a_prototype
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define hex_value(c) ((unsigned int) _hex_value[(unsigned char) (c)])
#define bfd_mach_arm_5T 8
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define PRIO_DARWIN_NONUI 0x1001
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define MIPS16OP_MASK_OP 0x1f
#define DT_MIPS_XHASH 0x70000036
#define bfd_link_split_section(abfd,sec) BFD_SEND (abfd, _bfd_link_split_section, (abfd, sec))
#define OP_MASK_SA3 0x7
#define OP_MASK_SA4 0xf
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __FLT_DIG__ 6
#define OP_SH_FR 21
#define OP_SH_FS 11
#define OP_SH_FT 16
#define OP_SH_FZ 0
#define OHW_R5KEOP 0x00000004
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define bfd_mach_frvsimple 2
#define EM_ALPHA 0x9026
#define __FLT64X_MAX_EXP__ 16384
#define OP_SH_GE 17
#define __UINT_FAST64_TYPE__ long long unsigned int
#define bfd_mach_m6812s 2
#define bfd_mach_rs6k_rs2 6002
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define SHN_HIPROC 0xFF1F
#define bfd_mach_rs6k_rs1 6001
#define ASE_DSP64 0x00000002
#define OP_SH_CACHE 16
#define __INT_MAX__ 0x7fffffff
#define bfd_get_flavour(abfd) ((abfd)->xvec->flavour)
#define bfd_mach_rs6k_rsc 6003
#define UINT8_MAX 255
#define bfd_init_private_section_data(ibfd,isec,obfd,osec,link_info) BFD_SEND (obfd, _bfd_init_private_section_data, (ibfd, isec, obfd, osec, link_info))
#define E_MIPS_ARCH_64R2 0x80000000
#define elf_section_syms(bfd) (elf_tdata(bfd) -> section_syms)
#define EMPTY_RELOC(name) name,
#define UINT_FAST8_MAX UINT8_MAX
#define bfd_get_symcount(abfd) ((abfd)->symcount)
#define __TVOS_12_4 120400
#define SHT_DYNAMIC 6
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define INSN_OCTEON 0x00000800
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define bfd_mach_i960_mc 4
#define __INT64_TYPE__ long long int
#define DT_MOVEENT 0x6ffffdfa
#define AT_PHDR 3
#define SHT_PREINIT_ARRAY 16
#define bfd_link_hash_table_create(abfd) BFD_SEND (abfd, _bfd_link_hash_table_create, (abfd))
#define UINT32_C(v) (v ## U)
#define DT_POSFLAG_1 0x6ffffdfd
#define EM_PJ_OLD 99
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define OP_SH_MB 0
#define OP_SH_MC 0
#define OP_SH_MD 0
#define OP_SH_ME 0
#define OP_SH_MF 0
#define OP_SH_MG 0
#define OP_SH_MH 0
#define OP_SH_ML 0
#define OP_SH_MM 0
#define elf_section_flags(sec) (elf_section_data(sec)->this_hdr.sh_flags)
#define OP_SH_MP 0
#define OP_SH_MQ 0
#define CPU_LOONGSON_2E 3001
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define SHT_MIPS_REGINFO 0x70000006
#define EM_IP2K_OLD 0x8217
#define INT_FAST32_MIN INT32_MIN
#define OP_MASK_IMM10 0x3ff
#define elf_elfheader(bfd) (elf_tdata(bfd) -> elf_header)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define bfd_get_section_vma(bfd,ptr) ((ptr)->vma + 0)
#define SEC_DEBUGGING 0x2000
#define OP_SH_OP 26
#define DT_SYMENT 11
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define SHT_MIPS_DEBUG 0x70000005
#define ELF_ST_VISIBILITY(v) ((v) & 0x3)
#define XSTRING(s) STRINGX(s)
#define OP_SH_IMM8 16
#define OP_SH_IMMA 0
#define OP_SH_IMMB 0
#define OP_SH_IMMF 0
#define OP_SH_IMMG 0
#define OP_SH_IMMH 0
#define OP_SH_IMMI 0
#define OP_SH_IMMJ 0
#define OP_SH_IMML 0
#define OP_SH_IMMM 0
#define OP_SH_IMMN 0
#define OP_SH_IMMO 0
#define OP_SH_IMMP 0
#define OP_SH_IMMQ 0
#define DT_LOOS 0x6000000d
#define OP_SH_IMMU 0
#define OP_SH_IMMX 0
#define OP_SH_IMMY 0
#define __DARWIN_C_FULL 900000L
#define FOOTPRINT_INTERVAL_RESET 0x1
#define INSN_STORE_MEMORY 0x00800000
#define HAS_LOCALS 0x20
#define SHF_MASKPROC 0xF0000000
#define INSN_NO_DELAY_SLOT 0x00400000
#define FPE_NOOP 0
#define EF_MIPS_MACH 0x00FF0000
#define EM_JAVELIN 77
#define OP_SH_RD 11
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define OP_SH_RS 21
#define OP_SH_RT 16
#define ODK_PAD 3
#define MICROMIPSOP_MASK_IMM8 0xff
#define OP_SH_RZ 0
#define _MACH_MACHINE__STRUCTS_H_ 
#define bfd_mach_cris_v0_v10 255
#define MICROMIPSOP_MASK_IMMA 0x7f
#define MICROMIPSOP_MASK_IMMB 0x7
#define MICROMIPSOP_MASK_IMMC 0xf
#define MICROMIPSOP_MASK_IMMD 0x3ff
#define MICROMIPSOP_MASK_IMME 0x7f
#define MICROMIPSOP_MASK_IMMF 0xf
#define MICROMIPSOP_MASK_IMMG 0xf
#define MICROMIPSOP_MASK_IMMH 0xf
#define MICROMIPSOP_MASK_IMMI 0x7f
#define MICROMIPSOP_MASK_IMMJ 0xf
#define ASE_MDMX 0x00000020
#define MICROMIPSOP_MASK_IMML 0xf
#define MICROMIPSOP_MASK_IMMM 0x7
#define MICROMIPSOP_MASK_IMMN 0x3
#define MICROMIPSOP_MASK_IMMP 0x1f
#define MICROMIPSOP_MASK_IMMQ 0x7fffff
#define SV_ONSTACK SA_ONSTACK
#define MICROMIPSOP_MASK_IMMU 0x1f
#define MICROMIPSOP_MASK_IMMW 0x3f
#define MICROMIPSOP_MASK_IMMX 0xf
#define bfd_mach_mips4000 4000
#define SIGTSTP 18
#define __SIZEOF_INT128__ 16
#define bfd_section_removed_from_list(ABFD,S) ((S)->next ? (S)->next->prev != (S) : (ABFD)->section_last != (S))
#define DF_1_TRANS 0x00000200
#define bfd_get_output_section(x) ((x)->section->output_section)
#define PEX_RECORD_TIMES 0x1
#define __LDBL_MAX_10_EXP__ 4932
#define RLIMIT_FSIZE 1
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define EF_MIPS_ABI2 0x00000020
#define bfd_mach_mips6000 6000
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define AFL_ASE_MIPS3D 0x00000020
#define DT_VALRNGHI 0x6ffffdff
#define __API_AVAILABLE(...) 
#define ASE_MIPS16E2_MT 0x00010000
#define _INT8_T 
#define SIGKILL 9
#define BFD_HOST_64_BIT long long
#define __INT_LEAST32_TYPE__ int
#define EM_M32 1
#define SHT_GNU_versym SHT_SUNW_versym
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define DT_MIPS_SYMBOL_LIB 0x70000024
#define EF_MIPS_NOREORDER 0x00000001
#define INSN_5900 0x00004000
#define SHT_MIPS_MSYM 0x70000001
#define __GNUC_PATCHLEVEL__ 0
#define EM_FX66 66
#define ELF32_R_TYPE(i) ((i) & 0xff)
#define MICROMIPSOP_SH_SHAMT 11
#define OHW_R4KEOP 0x00000001
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define SEC_LINK_DUPLICATES_SAME_SIZE 0x100000
#define NUM_KNOWN_OBJ_ATTRIBUTES 32
#define MICROMIPSOP_MASK_MJ 0x1f
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define MAC_OS_X_VERSION_10_14 101400
#define _STDDEF_H_ 
#define bfd_minisymbol_to_symbol(b,d,m,f) BFD_SEND (b, _minisymbol_to_symbol, (b, d, m, f))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define DT_MIPS_PLTGOT 0x70000032
#define SHT_MIPS_TRANSLATE 0x70000022
#define EM_ME16 59
#define OP_MASK_INSMSB 0x1f
#define MICROMIPSOP_MASK_MP 0x1f
#define AT_EXECFD 2
#define bfd_mach_xstormy16 1
#define ferror_unlocked(p) __sferror(p)
#define LL_REQUIRE_MINOR 0x00000004
#define EM_AVR_OLD 0x1057
#define bfd_mach_v850e 'E'
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define E_MIPS_ARCH_2 0x10000000
#define E_MIPS_ARCH_3 0x20000000
#define E_MIPS_ARCH_4 0x30000000
#define E_MIPS_ARCH_5 0x40000000
#define __INT_FAST8_TYPE__ signed char
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define ELF32_ST_TYPE ELF_ST_TYPE
#define MIPS16OP_EXTRACT_REG32R(i) ((((i) >> 5) & 7) | ((i) & 0x18))
#define MICROMIPSOP_MASK_CINSLM1 0
#define OGP_SELF 0xffff0000
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define CPU_R4400 4400
#define va_arg(v,l) __builtin_va_arg(v,l)
#define DT_SYMTAB 6
#define WAIT_ANY (-1)
#define __UINT32_C(c) c ## U
#define BFD_COM_SECTION_NAME "*COM*"
#define MICROMIPSOP_SH_VECALIGN 0
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define ELFDATANONE 0
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define DF_BIND_NOW (1 << 3)
#define E_MIPS_MACH_3900 0x00810000
#define bfd_get_symbol_info(b,p,e) BFD_SEND (b, _bfd_get_symbol_info, (b,p,e))
#define __AVAILABILITY__ 
#define RENAME_SWAP 0x00000002
#define N_(String) (String)
#define STV_INTERNAL 1
#define MICROMIPSOP_SH_CINSLM1 0
#define __TYPES_H_ 
#define MDMX_FMTSEL_VEC_OB 0x16
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define bfd_set_private_flags(abfd,flags) BFD_SEND (abfd, _bfd_set_private_flags, (abfd, flags))
#define OP_MASK_STYPE OP_MASK_SHAMT
#define w_coredump w_T.w_Coredump
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define SEC_LINK_DUPLICATES 0x40000
#define CPU_MIPS64R2 65
#define CPU_MIPS64R5 68
#define CPU_MIPS64R6 69
#define CLD_DUMPED 3
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL 1
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define OP_MASK_HINT 0x1f
#define OP_OP_SWC2 0x3a
#define SHT_MIPS_EXTSYM 0x70000012
#define FOPEN_MAX 20
#define SHT_MIPS_RFDESC 0x7000001a
#define INSN2_READ_GPR_31 0x00000200
#define elf_section_data(sec) ((struct bfd_elf_section_data*)(sec)->used_by_bfd)
#define DT_DEBUG 21
#define WP_TEXT 0x80
#define OP_SH_IMMEDIATE 0
#define SHT_MIPS_PACKAGE 0x70000007
#define bfd_mach_sh3_dsp 0x3d
#define MICROMIPSOP_SH_RD 11
#define RLIM_SAVED_MAX RLIM_INFINITY
#define _STRING_H_ 
#define OP_SH_FMT 21
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define bfd_mach_mips10000 10000
#define elf_symbol_from(ABFD,S) (((S)->the_bfd->xvec->flavour == bfd_target_elf_flavour && (S)->the_bfd->tdata.elf_obj_data != 0) ? (elf_symbol_type *) (S) : 0)
#define ASE_DSPR2 0x00000004
#define ASE_DSPR3 0x00004000
#define AFL_ASE_SMARTMIPS 0x00000080
#define MIPS16OP_MASK_REGR32 0x1f
#define EM_COLDFIRE 52
#define INSN_ISA32R6 10
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define VER_NDX_LOCAL 0
#define BFD_JUMP_TABLE_COPY(NAME) NAME ##_bfd_copy_private_bfd_data, NAME ##_bfd_merge_private_bfd_data, _bfd_generic_init_private_section_data, NAME ##_bfd_copy_private_section_data, NAME ##_bfd_copy_private_symbol_data, NAME ##_bfd_copy_private_header_data, NAME ##_bfd_set_private_flags, NAME ##_bfd_print_private_bfd_data
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __IOS_AVAILABLE(_vers) 
#define bfd_debug_info_start(abfd) BFD_SEND (abfd, _bfd_debug_info_start, (abfd))
#define EM_STARCORE 58
#define INSN_COPROC_MEMORY_DELAY 0x00020000
#define bfd_mach_sh2e 0x2e
#define PEXECUTE_LAST 2
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define INIT_DISASSEMBLE_INFO_NO_ARCH(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))
#define bfd_set_section_alignment(bfd,ptr,val) (((ptr)->alignment_power = (val)),TRUE)
#define CPU_VR4120 4120
#define AFL_EXT_4100 9
#define __API_UNAVAILABLE_BEGIN(...) 
#define CPU_XLR 887682
#define __LONG_WIDTH__ 64
#define SHF_MIPS_LOCAL 0x04000000
#define PEX_LAST 0x1
#define DT_FLAGS 30
#define SIG_ERR ((void (*)(int))-1)
#define ELF_IS_SECTION_IN_SEGMENT_MEMORY(sec_hdr,segment) (ELF_SECTION_SIZE(sec_hdr, segment) > 0 && ELF_IS_SECTION_IN_SEGMENT (sec_hdr, segment))
#define WAKEMON_ENABLE 0x01
#define AFL_EXT_4111 13
#define bfd_mach_mips_octeon3 6503
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define NT_FPREGSET 2
#define __CHAR32_TYPE__ unsigned int
#define AFL_EXT_4120 14
#define INSN_ISA64 11
#define bfd_get_section_name(bfd,ptr) ((ptr)->name + 0)
#define EM_OPENRISC_OLD 0x3426
#define bfd_mach_mips_octeonp 6601
#define AT_PHNUM 5
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define OP_MASK_BCC 0x7
#define XOBFINISH(O,T) ((T) obstack_finish ((O)))
#define UINT_LEAST32_MAX UINT32_MAX
#define MICROMIPSOP_SH_VECBYTE 0
#define GNU_ABI_TAG_FREEBSD 3
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define ELF64_ST_VISIBILITY ELF_ST_VISIBILITY
#define OEX_FPDBUG 0x40000
#define SA_NODEFER 0x0010
#define EF_MIPS_NAN2008 0x00000400
#define DF_1_NODEFLIB 0x00000800
#define POLL_PRI 5
#define PROTO(type,name,arglist) type name arglist
#define SIGILL 4
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define AFL_ASE_LOONGSON_CAM 0x00080000
#define MICROMIPSOP_SH_DSPSFT_7 0
#define __FLT_MIN_10_EXP__ (-37)
#define DT_BIND_NOW 24
#define E_MIPS_MACH_LS2E 0x00A00000
#define E_MIPS_MACH_LS2F 0x00A10000
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define ELF64_ST_TYPE ELF_ST_TYPE
#define __AVAILABILITY_INTERNAL__ 
#define INSN_READ_GPR_24 0x08000000
#define __INTMAX_TYPE__ long int
#define SIGINT 2
#define bfd_mach_arm_5 7
#define ASE_CRC64 0x00080000
#define bfd_mach_mcf_isa_a_emac 12
#define AFL_EXT_OCTEON2 2
#define AFL_EXT_OCTEON3 19
#define bfd_mach_ppc_505 505
#define INSN2_WRITE_SP 0x00000080
#define VERSYM_VERSION 0x7fff
#define AFL_EXT_OCTEONP 3
#define BFD_RELOC_SPARC_DISP64 BFD_RELOC_64_PCREL
#define ASE_DSP 0x00000001
#define bfd_mach_mips4300 4300
#define SIGIOT SIGABRT
#define bfd_mach_mips5900 5900
#define OP_SH_VECALIGN 21
#define STO_OPTIONAL (1 << 2)
#define bfd_mach_cpu32 8
#define CPU_GS264E 3005
#define INSN_READ_2 0x00000008
#define INSN_READ_3 0x00000010
#define INSN_READ_4 0x00000020
#define __ATOMIC_CONSUME 1
#define SYMINFO_FLG_DIRECT 0x0001
#define bfd_h_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx16, (val, ptr))
#define __IPHONE_9_2 90200
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define bfd_mach_ia64_elf32 32
#define bfd_get_section_size(ptr) ((ptr)->size)
#define bfd_get_8(abfd,ptr) (*(unsigned char *) (ptr) & 0xff)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define EM_MMA 54
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define DT_INIT_ARRAYSZ 27
#define INTMAX_C(v) (v ## L)
#define DT_GNU_CONFLICT 0x6ffffef8
#define ILL_PRVOPC 3
#define elf_num_locals(bfd) (elf_tdata(bfd) -> num_locals)
#define OP_MASK_IMMG 0
#define CPU_R14000 14000
#define AT_BASE 7
#define SHT_MIPS_DWARF 0x7000001e
#define WCOREFLAG 0200
#define bfd_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_putx16, ((val),(ptr)))
#define SHF_GROUP (1 << 9)
#define bfd_mach_ia64_elf64 64
#define textdomain(Domainname) while (0)
#define MICROMIPSOP_MASK_DSPSFT 0x3f
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define __SEOF 0x0020
#define MAC_OS_X_VERSION_10_11_4 101104
#define bfd_applicable_section_flags(abfd) ((abfd)->xvec->section_flags)
#define SI_TIMER 0x10003
#define NEWHOWTO(FUNCTION,NAME,SIZE,REL,IN) HOWTO (0, 0, SIZE, 0, REL, 0, complain_overflow_dont, FUNCTION, NAME, FALSE, 0, 0, IN)
#define FP_RND_DOWN 1
#define bfd_h_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx64, (val, ptr))
#define elf_shstrtab(bfd) (elf_tdata(bfd) -> strtab_ptr)
#define bfd_get_elt_at_index(b,i) BFD_SEND (b, _bfd_get_elt_at_index, (b,i))
#define bfd_mach_msp15 15
#define __IPHONE_13_1 130100
#define __IPHONE_13_3 130300
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define sv_onstack sv_flags
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define SHT_GNU_verdef SHT_SUNW_verdef
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define __FLT128_HAS_DENORM__ 1
#define MICROMIPSOP_SH_WRDSP 14
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define bfd_mach_mips_loongson_2f 3002
#define SHT_PROGBITS 1
#define bfd_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_putx64, ((val), (ptr)))
#define __UINT32_TYPE__ unsigned int
#define BFD_RELOC_SPARC_64 BFD_RELOC_64
#define bfd_asymbol_base(x) ((x)->section->vma)
#define bfd_mach_sparc_v9a 8
#define bfd_mach_sparc_v9b 10
#define fprintf_vma(s,x) fprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define SIGTERM 15
#define SHF_MIPS_NOSTRIP 0x08000000
#define BFD_IND_SECTION_NAME "*IND*"
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define MICROMIPSOP_SH_CCC 13
#define INSN2_M_FP_D 0x00000010
#define INSN2_M_FP_S 0x00000008
#define MICROMIPSOP_SH_3BITPOS 21
#define elf_local_got_ents(bfd) (elf_tdata(bfd) -> local_got.ents)
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define bfd_h_put_signed_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define EM_TRICORE 44
#define SHT_NOTE 7
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define LIBIBERTY_H 
#define END_RELOC_NUMBERS(name) name };
#define SIGWINCH 28
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define __TVOS_14_3 140300
#define __LDBL_DIG__ 18
#define OP_SH_TARGET 0
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define _MODE_T 
#define OP_SH_EXTLSB OP_SH_SHAMT
#define ___int_ptrdiff_t_h 
#define INSN_SB1 0x00200000
#define OP_MASK_IMMEDIATE 0xffff
#define __APPLE_API_PRIVATE 
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __UINT_LEAST16_TYPE__ short unsigned int
#define bfd_mach_ppc_a35 35
#define XCNEWVAR(T,S) ((T *) xcalloc (1, (S)))
#define _U_INT16_T 
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define FP_PREC_53B 2
#define SHT_HASH 5
#define ET_NONE 0
#define SHT_MIPS_EH_REGION 0x70000027
#define FPE_FLTUND 3
#define elf_flags_init(bfd) (elf_tdata(bfd) -> flags_init)
#define _(String) (String)
