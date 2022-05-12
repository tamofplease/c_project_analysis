#define bfd_link_hash_table_free(abfd,hash) BFD_SEND (abfd, _bfd_link_hash_table_free, (hash))
#define bfd_mach_v850 1
#define bfd_set_section_alignment(bfd,ptr,val) (((ptr)->alignment_power = (val)),TRUE)
#define bfd_mach_maxq20 20
#define SI_TIMER 0x10003
#define HAS_LOAD_PAGE 0x1000
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define H_PUT_64 bfd_h_put_64
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HAVE_PTY __UNIX__ && LIBC_HAVE_FORK && !__sun
#define _SC_XOPEN_UNIX 115
#define ut64 unsigned long long
#define SEC_GROUP 0x4000000
#define _SYS__TYPES_H_ 
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define XCNEWVEC(T,N) ((T *) xcalloc ((N), sizeof (T)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define bfd_mach_msp13 13
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define PRIO_MIN -20
#define bfd_mach_ppc_rs64ii 642
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define _SC_RE_DUP_MAX 16
#define bfd_mach_m32r 1
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define _POSIX2_SW_DEV 200112L
#define bfd_mach_sh3 0x30
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define ST64_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST64_MAX - (x))) || (((x) < 0) && (a) < ST64_MIN - (x)))
#define RE_DUP_MAX 255
#define _SC_NGROUPS_MAX 4
#define SZT_MIN UT64_MIN
#define sa_sigaction __sigaction_u.__sa_sigaction
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define bfd_mach_sparc_v9 7
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define HAVE_LIB_SSL 0
#define _SC_SPIN_LOCKS 80
#define _SC_2_VERSION 17
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define DST_CAN 6
#define _SC_IPV6 118
#define ut8p_lq(x) ((x)[7]|((x)[6]<<8)|((x)[5]<<16)|((x)[4]<<24)|((x)[3]<<32)|((x)[2]<<40)|((x)[1]<<48)|((x)[0]<<56))
#define _I386__ENDIAN_H_ 
#define bfd_mach_mips16000 16000
#define bfd_h_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_32, (ptr))
#define INT_LEAST16_MIN INT16_MIN
#define _SC_XOPEN_REALTIME 111
#define _ASSERT_H_ 
#define bfd_mach_cr16c 1
#define st32 int
#define R_OK (1<<2)
#define _SC_LINE_MAX 15
#define RLIM_SAVED_MAX RLIM_INFINITY
#define ELF_INFO_TYPE_EH_FRAME 3
#define __IPHONE_14_2 140200
#define bfd_mach_m68060 7
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define hex_p(c) (hex_value (c) != _hex_bad)
#define ut8p_lw(x) ((x)[1]|((x)[0]<<8))
#define bfd_mach_m32c 0x78
#define __DRIVERKIT_19_0 190000
#define bfd_mach_r800 11
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define B1100 12
#define NL_NMAX 1
#define HAVE_LIBUV 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define R_MAX(x,y) (((x)>(y))?(x):(y))
#define SV_RESETHAND SA_RESETHAND
#define O_ACCMODE 0x0003
#define ILL_ILLTRP 2
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define bfd_mach_mipsisa32 32
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define HAVE_JEMALLOC 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define UT32_MAX 0xFFFFFFFFU
#define _CS_PATH 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define bfd_mach_sparc_64bit_p(mach) ((mach) >= bfd_mach_sparc_v9 && (mach) != bfd_mach_sparc_v8plusb)
#define ru_last ru_nivcsw
#define _XOPEN_CRYPT (1)
#define _SC_COLL_WEIGHTS_MAX 13
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define PEX_SAVE_TEMPS 0x4
#define bfd_mach_mcf_isa_a_mac 11
#define SHRT_MAX __SHRT_MAX__
#define CONCAT3(a,b,c) a ##b ##c
#define FFSYNC O_FSYNC
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define bfd_mach_mipsisa64r2 65
#define bfd_mach_mipsisa64r3 66
#define bfd_mach_mipsisa64r5 68
#define bfd_mach_mipsisa64r6 69
#define R_JOIN_4_PATHS(p1,p2,p3,p4) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define _U_INT64_T 
#define BFD_JUMP_TABLE_SYMBOLS(NAME) NAME ##_get_symtab_upper_bound, NAME ##_canonicalize_symtab, NAME ##_make_empty_symbol, NAME ##_print_symbol, NAME ##_get_symbol_info, NAME ##_bfd_is_local_label_name, NAME ##_bfd_is_target_special_symbol, NAME ##_get_lineno, NAME ##_find_nearest_line, _bfd_generic_find_line, NAME ##_find_inliner_info, NAME ##_bfd_make_debug_symbol, NAME ##_read_minisymbols, NAME ##_minisymbol_to_symbol
#define __UINT8_MAX__ 0xff
#define _SC_SEMAPHORES 37
#define __SCHAR_WIDTH__ 8
#define bfd_mach_sparc_sparclet 2
#define bfd_mach_i960_ca 6
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _XOPEN_UNIX (1)
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define WCHAR_MAX __WCHAR_MAX__
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define _SC_TTY_NAME_MAX 101
#define _SC_XBS5_ILP32_OFF32 122
#define TIME_UTC 1
#define __FLT32_MIN_EXP__ (-125)
#define PIPE_BUF 512
#define _POSIX_SPIN_LOCKS (-1)
#define __DARWIN_NON_CANCELABLE 0
#define F_GETOWN 5
#define bfd_mach_d10v_ts3 3
#define bfd_mach_sparc_sparclite_le 6
#define ATTRIBUTE_HOT __attribute__ ((__hot__))
#define R_MODE_RADARE 0x001
#define UINT_LEAST64_MAX UINT64_MAX
#define bfd_section_list_insert_after(ABFD,A,S) do { asection *_a = A; asection *_s = S; asection *_next = _a->next; _s->next = _next; _s->prev = _a; _a->next = _s; if (_next) _next->prev = _s; else (ABFD)->section_last = _s; } while (0)
#define _CDEFS_H_ 
#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _POSIX2_BC_DIM_MAX 2048
#define NL_SETMAX 255
#define va_start(v,l) __builtin_va_start(v,l)
#define O_NOFOLLOW_ANY 0x20000000
#define _PC_CASE_PRESERVING 12
#define R2_VERSION_COMMIT 27746
#define typeof(arg) __typeof__(arg)
#define bfd_get_section_lma(bfd,ptr) ((ptr)->lma + 0)
#define ITIMER_VIRTUAL 1
#define bfd_sizeof_headers(abfd,reloc) BFD_SEND (abfd, _bfd_sizeof_headers, (abfd, reloc))
#define DT_LNK 10
#define _POSIX_TTY_NAME_MAX 9
#define _PTHREAD_CONDATTR_T 
#define bfd_mach_ppc_e500 500
#define bfd_mach_ppc64 64
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __exported_push _Pragma("GCC visibility push(default)")
#define SEC_READONLY 0x008
#define bfd_family_coff(abfd) (bfd_get_flavour (abfd) == bfd_target_coff_flavour || bfd_get_flavour (abfd) == bfd_target_xcoff_flavour)
#define __WCHAR_MAX__ 0x7fffffff
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define _SC_2_C_DEV 19
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define R_JOIN_2_PATHS(p1,p2) p1 R_SYS_DIR p2
#define bfd_mach_i960_jx 7
#define INT16_MAX 32767
#define RLIMIT_AS 5
#define bfd_mach_ppc_620 620
#define __DARWIN_PDP_ENDIAN 3412
#define _WCHAR_T 
#define bfd_my_archive(abfd) ((abfd)->my_archive)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define SEC_COFF_SHARED 0x20000000
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define SEC_LINKER_CREATED 0x200000
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define R_LIB_VERSION_HEADER(x) R_API const char *x ##_version(void)
#define __GCC_IEC_559 2
#define bfd_mach_ppc_e500mc 5001
#define bfd_mach_tic3x 30
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define _CS_DARWIN_USER_DIR 65536
#define UT32_MIN 0U
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define __IOS_PROHIBITED 
#define bfd_h_put_signed_32 bfd_h_put_32
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF 57
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define bfd_get_elt_at_index(b,i) BFD_SEND (b, _bfd_get_elt_at_index, (b,i))
#define putc_unlocked(x,fp) __sputc(x, fp)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define R_NEW(x) (x*)malloc(sizeof(x))
#define MB_CUR_MAX __mb_cur_max
#define ut8p_bd(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24))
#define __API_DEPRECATED_END 
#define _SC_XOPEN_STREAMS 114
#define _SC_THREAD_PRIO_INHERIT 87
#define bfd_mach_msp14 14
#define __WATCHOS_4_0 40000
#define _I386_LIMITS_H_ 
#define bfd_malloc malloc
#define SEC_IS_COMMON 0x1000
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define _XOPEN_VERSION 600
#define _POSIX_SS_REPL_MAX 4
#define _SC_CPUTIME 68
#define __disable_tail_calls 
#define FPE_NOOP 0
#define BFD_IS_RELAXABLE 0x200
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
#define _CTYPE_SWM 0xe0000000L
#define CLD_STOPPED 5
#define _CTYPE_SWS 30
#define NSIG __DARWIN_NSIG
#define LINK_MAX 32767
#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define bfd_h_get_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx16, (ptr))
#define SEC_ROM 0x040
#define w_termsig w_T.w_Termsig
#define FNONBLOCK O_NONBLOCK
#define BFD_SEND_FMT(bfd,message,arglist) (((bfd)->xvec->message[(int) ((bfd)->format)]) arglist)
#define bfd_mach_am33_2 332
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _SC_TRACE_USER_EVENT_MAX 130
#define R_REF_FUNCTIONS(s,n) static inline void n ##_ref(s *x) { x->R_REF_NAME++; } static inline void n ##_unref(s *x) { r_unref (x, n ##_free); }
#define MAC_OS_X_VERSION_10_14_4 101404
#define SEC_THREAD_LOCAL 0x400
#define SIGPROF 27
#define R_BORROW 
#define BSF_WEAK 0x80
#define DST_NONE 0
#define F_GETCODEDIR 72
#define DT_REG 8
#define F_ALLOCATEALL 0x00000004
#define bool _Bool
#define _SC_2_PBS_ACCOUNTING 60
#define DT_FIFO 1
#define _hex_array_size 256
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define st_atime st_atimespec.tv_sec
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define bfd_mach_d10v 1
#define POLL_MSG 3
#define _SC_THREAD_PRIO_PROTECT 88
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define bfd_little_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_LITTLE)
#define __FINITE_MATH_ONLY__ 0
#define bfd_mach_msp32 32
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define __cold __attribute__((__cold__))
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")
#define _SC_MEMLOCK_RANGE 31
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define B1000 8
#define _SC_XBS5_ILP32_OFFBIG 123
#define bfd_mach_arm_ep9312 11
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define _SC_SHARED_MEMORY_OBJECTS 39
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define ELF_INFO_TYPE_STABS 1
#define __FLT32_HAS_DENORM__ 1
#define _ALLOCA_H_ 
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define _POSIX_SYMLINK_MAX 255
#define bfd_mach_ppc 32
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define SIGFPE 8
#define bfd_mach_mips16 16
#define B1111 15
#define bfd_mach_mips4010 4010
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define ut8 unsigned char
#define bfd_mach_hppa10 10
#define bfd_mach_mips4100 4100
#define F_RDADVISE 44
#define _T_PTRDIFF 
#define SEC_LINK_DUPLICATES_DISCARD 0x0
#define __UINT_FAST8_MAX__ 0xff
#define __WATCHOS_PROHIBITED 
#define HAS_RELOC 0x01
#define bfd_link_add_symbols(abfd,info) BFD_SEND (abfd, _bfd_link_add_symbols, (abfd, info))
#define _LIMITS_H___ 
#define DST_AUST 2
#define bfd_set_section_userdata(bfd,ptr,val) (((ptr)->userdata = (val)),TRUE)
#define __FLT32_MAX_10_EXP__ 38
#define _FILESEC_T 
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define UT16_SUB_OVFCHK(a,b) UT16_ADD_OVFCHK(a,-(b))
#define SIGHUP 1
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define EMPTY_HOWTO(C) HOWTO ((C), 0, 0, 0, FALSE, 0, complain_overflow_dont, NULL, NULL, FALSE, 0, 0, FALSE)
#define __INT8_C(c) c
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")
#define ACCESSX_MAX_DESCRIPTORS 100
#define B10101 21
#define bfd_relax_section(abfd,section,link_info,again) BFD_SEND (abfd, _bfd_relax_section, (abfd, section, link_info, again))
#define H_PUT_S16 bfd_h_put_signed_16
#define _U_LONG 
#define SIGCONT 19
#define __INT_LEAST8_WIDTH__ 8
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UNIX__ 1
#define _ERRNO_T 
#define B10110 22
#define F_GETFL 3
#define sprintf_vma(s,x) sprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define R_ALIGNED(x) __attribute__((aligned(x)))
#define WAKEMON_GET_PARAMS 0x04
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define BFD_ABS_SECTION_NAME "*ABS*"
#define NFDBITS __DARWIN_NFDBITS
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define __SHRT_MAX__ 0x7fff
#define R_SYS_ENDIAN_LITTLE 1
#define w_stopval w_S.w_Stopval
#define H_PUT_S8 bfd_h_put_signed_8
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define bfd_section_name(bfd,ptr) ((ptr)->name)
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define FILESEC_GUID FILESEC_UUID
#define __FLT64X_MAX_10_EXP__ 4932
#define BSF_INDIRECT 0x2000
#define S_IXOTH 0000001
#define R_IN 
#define R_PERM_SHAR 8
#define bfd_applicable_section_flags(abfd) ((abfd)->xvec->section_flags)
#define SIGTTOU 22
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define _POSIX_SYNCHRONIZED_IO (-1)
#define bfd_link_just_syms(abfd,sec,info) BFD_SEND (abfd, _bfd_link_just_syms, (sec, info))
#define UT64_16U 0xFFFFFFFFFFFF0000ULL
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define _SC_THREAD_KEYS_MAX 86
#define SIGSTKSZ 131072
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define B10111 23
#define _POSIX2_UPE 200112L
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define __SNPT 0x0800
#define H_PUT_S64 bfd_h_put_signed_64
#define DT_DIR 4
#define _POSIX_VERSION 200112L
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define _SC_NPROCESSORS_ONLN 58
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define SEC_NO_FLAGS 0x000
#define bfd_copy_private_symbol_data(ibfd,isymbol,obfd,osymbol) BFD_SEND (obfd, _bfd_copy_private_symbol_data, (ibfd, isymbol, obfd, osymbol))
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#define RENAME_EXCL 0x00000004
#define bfd_mach_sh4 0x40
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define R_PERM_CREAT 64
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define F_VOLPOSMODE 4
#define FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define _SC_SYMLOOP_MAX 120
#define bfd_print_symbol(b,p,s,e) BFD_SEND (b, _bfd_print_symbol, (b,p,s,e))
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define INT_LEAST8_MAX INT8_MAX
#define bfd_mach_i960_kb_sb 3
#define __result_use_check __attribute__((__warn_unused_result__))
#define TODO(x) eprintf(__func__"  " x)
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define _DELETE_OK (1<<12)
#define PRIO_USER 2
#define _PC_NAME_CHARS_MAX 10
#define __APPLE_API_STANDARD 
#define DECLARE_GENERIC_PRINT_ADDRESS_FUNC() static void generic_print_address_func(bfd_vma address, struct disassemble_info *info) { if (!buf_global) { return; } r_strbuf_appendf (buf_global, "0x%08"PFMT64x, (ut64)address); }
#define IOPOL_APPLICATION IOPOL_STANDARD
#define WCHAR_MIN (-WCHAR_MAX-1)
#define SEC_LINK_DUPLICATES_SAME_CONTENTS (SEC_LINK_DUPLICATES_ONE_ONLY | SEC_LINK_DUPLICATES_SAME_SIZE)
#define __unavailable 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define B0001 1
#define _POSIX_SPAWN (-1)
#define SF_FIRMLINK 0x00800000
#define R_PACKED(__Declaration__) __Declaration__ __attribute__((__packed__))
#define _PTHREAD_T 
#define R_PERM_RW (R_PERM_R|R_PERM_W)
#define R_PERM_RX (R_PERM_R|R_PERM_X)
#define ST16_ADD_OVFCHK(a,b) ((((b) > 0) && ((a) > ST16_MAX - (b))) || (((b) < 0) && ((a) < ST16_MIN - (b))))
#define NULL ((void *)0)
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define _POSIX_READER_WRITER_LOCKS 200112L
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __PTHREAD_MUTEX_SIZE__ 56
#define INT64_MAX 9223372036854775807LL
#define B0010 2
#define __DARWIN_UNIX03 1
#define bfd_mach_hppa11 11
#define bfd_section_alignment(bfd,ptr) ((ptr)->alignment_power)
#define _POSIX_AIO_MAX 1
#define _POSIX_PIPE_BUF 512
#define bfd_is_local_label_name(abfd,name) BFD_SEND (abfd, _bfd_is_local_label_name, (abfd, name))
#define PASS_MAX 128
#define SIGUSR1 30
#define bfd_get_filename(abfd) ((char *) (abfd)->filename)
#define mips mips
#define R_MODE_SET 0x002
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define SSZT_MIN ST64_MIN
#define bfd_get_symbol_info(b,p,e) BFD_SEND (b, _bfd_get_symbol_info, (b,p,e))
#define UT8_MAX 0xFFU
#define UINT_FAST16_MAX UINT16_MAX
#define __FLT128_MIN_EXP__ (-16381)
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)
#define bfd_mach_d10v_ts2 2
#define IOPOL_PASSIVE 2
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define F_ADDFILESIGS 61
#define WUNTRACED 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define _SC_SHELL 78
#define NZERO 20
#define bfd_mach_i960_core 1
#define _bfd_int64_low(x) ((unsigned long) (((x) & 0xffffffff)))
#define UINT16_C(v) (v)
#define LIBC_HAVE_PLEDGE 0
#define R_BIT_SET(x,y) (((ut8*)x)[y>>4] |= (1<<(y&0xf)))
#define XDELETE(P) free ((void*) (P))
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define bfd_get_outsymbols(abfd) ((abfd)->outsymbols)
#define bfd_debug_info_accumulate(abfd,section) BFD_SEND (abfd, _bfd_debug_info_accumulate, (abfd, section))
#define bfd_mach_msp43 43
#define __FLT128_MIN_10_EXP__ (-4931)
#define bfd_mach_h8300hn 4
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_CTYPE_inline __header_inline
#define __FLT32X_IS_IEC_60559__ 2
#define bfd_mach_msp44 44
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define _PC_PRIO_IO 19
#define _SYS_UNISTD_H_ 
#define EXIT_FAILURE 1
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define R_PERM_WX (R_PERM_W|R_PERM_X)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define _POSIX_AIO_LISTIO_MAX 2
#define _SYS_SELECT_H_ 
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define bfd_mach_mips7000 7000
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define R_SYS_DIR "/"
#define SEC_STRINGS 0x2000000
#define HAVE_LIB_MAGIC 0
#define IS_WHITECHAR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r')
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define UNSIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { (void)(a); return !b; }
#define B0111 7
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define EXEC_P 0x02
#define HAVE_LIB_XXHASH 0
#define bfd_mach_mips_loongson_2e 3001
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define _POSIX2_PBS_MESSAGE (-1)
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define R_SYS_BITS (R_SYS_BITS_32 | R_SYS_BITS_64)
#define _SC_2_UPE 25
#define UT64_MAX 0xFFFFFFFFFFFFFFFFULL
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define R_BTW(x,y,z) (((x)>=(y))&&((y)<=(z)))?y:x
#define __SERR 0x0040
#define SA_SIGINFO 0x0040
#define ST8_MAX 0x7F
#define bfd_mach_hppa20 20
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define H_GET_S64 bfd_h_get_signed_64
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define bfd_mach_i960_ka_sa 2
#define WSTOPPED 0x00000008
#define bfd_h_put_signed_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define CLD_EXITED 1
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define _POSIX_TIMEOUTS (-1)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define EF_IS_SYNC_ROOT 0x00000004
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define STDOUT_FILENO 1
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define BFD_JUMP_TABLE_LINK(NAME) NAME ##_sizeof_headers, NAME ##_bfd_get_relocated_section_contents, NAME ##_bfd_relax_section, NAME ##_bfd_link_hash_table_create, NAME ##_bfd_link_hash_table_free, NAME ##_bfd_link_add_symbols, NAME ##_bfd_link_just_syms, NAME ##_bfd_final_link, NAME ##_bfd_link_split_section, NAME ##_bfd_gc_sections, NAME ##_bfd_merge_sections, NAME ##_bfd_is_group_section, NAME ##_bfd_discard_group, NAME ##_section_already_linked
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define UT64_8U 0xFFFFFFFFFFFFFF00ULL
#define R_CHECKS_LEVEL 2
#define _RPERM_OK (1<<19)
#define _BLKSIZE_T 
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define S_IRWXO 0000007
#define S_IRWXU 0000700
#define bfd_h_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_16, (ptr))
#define FNDELAY O_NONBLOCK
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define bfd_mach_ppc_602 602
#define bfd_mach_ppc_603 603
#define bfd_mach_ppc_604 604
#define bfd_get_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_symtab_upper_bound, (abfd))
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define bfd_copy_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_bfd_data, (ibfd, obfd))
#define EF_IS_PURGEABLE 0x00000008
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define HEAPTYPE(x) static x* x ##_new(x n) { x *m = malloc(sizeof (x)); return m? *m = n, m: m; }
#define getchar_unlocked() getc_unlocked(stdin)
#define bfd_mach_mips4400 4400
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define bfd_is_group_section(abfd,sec) BFD_SEND (abfd, _bfd_is_group_section, (abfd, sec))
#define B11000 24
#define B11001 25
#define CLOCK_REALTIME _CLOCK_REALTIME
#define _SC_2_PBS_MESSAGE 63
#define R_SYS_ENVSEP ":"
#define __FLT32X_MANT_DIG__ 53
#define bfd_mach_mips_micromips 96
#define R_PTR_ALIGN(v,t) ((char *)(((size_t)(v) ) & ~(t - 1)))
#define USE_PTRACE_WRAP 0
#define SSZT_MAX ST64_MAX
#define BFD_JUMP_TABLE_RELOCS(NAME) NAME ##_get_reloc_upper_bound, NAME ##_canonicalize_reloc, NAME ##_bfd_reloc_type_lookup
#define _SC_VERSION 8
#define _SC_AIO_LISTIO_MAX 42
#define S_TYPEISSHM(buf) (0)
#define H_PUT_S32 bfd_h_put_signed_32
#define DIRBLKSIZ 1024
#define B11010 26
#define B11011 27
#define __USER_LABEL_PREFIX__ _
#define _SC_JOB_CONTROL 6
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define UT32_ALIGN(x) (x + (x - (x % sizeof (ut32))))
#define _SC_SIGQUEUE_MAX 51
#define CHAR_BIT __CHAR_BIT__
#define BFD_ARCH_SIZE 64
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __SWR 0x0008
#define bfd_mach_ppc_630 630
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define F_BARRIERFSYNC 85
#define _SC_BC_SCALE_MAX 11
#define __END_DECLS 
#define bfd_mach_cris_v32 32
#define bfd_h_get_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx32, (ptr))
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define _BSD_MACHINE_SIGNAL_H_ 
#define WCONTINUED 0x00000010
#define bfd_mach_mips3900 3900
#define __DARWIN_NO_LONG_LONG 0
#define UT64_MIN 0ULL
#define UINT_FAST64_MAX UINT64_MAX
#define F_PEOFPOSMODE 3
#define bfd_mach_avr3 3
#define __STDC_HOSTED__ 1
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define ST8_MIN (-ST8_MAX - 1)
#define WAKEMON_DISABLE 0x02
#define ILL_ILLOPC 1
#define _SC_2_PBS_CHECKPOINT 61
#define bfd_mach_h8300sn 5
#define bfd_mach_cris_v10_v32 1032
#define BFD_NO_FLAGS 0x00
#define BSF_OBJECT 0x10000
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define BSF_NOT_AT_END 0x400
#define R_VERSION_H 1
#define _SECURE__COMMON_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define UID_MAX 2147483647U
#define USE_LIB_MAGIC 0
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define SIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { if (a > 0) { if (b > 0) { return a > type_max / b; } return b < type_min / a; } if (b > 0) { return a < type_min / b; } return a && b < type_max / a; }
#define bfd_mach_avr1 1
#define bfd_mach_avr2 2
#define bfd_mach_avr4 4
#define __alloca(size) __builtin_alloca(size)
#define _POSIX_THREAD_KEYS_MAX 128
#define _READ_OK (1<<9)
#define ATTRIBUTE_COLD __attribute__ ((__cold__))
#define _XOPEN_ENH_I18N (1)
#define UT32_SUB_OVFCHK(a,b) UT32_ADD_OVFCHK(a,-(b))
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define ST8_SUB_OVFCHK(a,b) ST8_ADD_OVFCHK(a,-(b))
#define _PC_PIPE_BUF 6
#define UINT64_MAX 18446744073709551615ULL
#define bfd_asymbol_name(x) ((x)->name)
#define TMP_MAX 308915776
#define R_DIM(x,y,z) (((x)<(y))?(y):((x)>(z))?(z):(x))
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define BFD_JUMP_TABLE_CORE(NAME) NAME ##_core_file_failing_command, NAME ##_core_file_failing_signal, NAME ##_core_file_matches_executable_p
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define S_TYPEISMQ(buf) (0)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define R_BIT_TOGGLE(x,y) ( R_BIT_CHK (x, y) ? R_BIT_UNSET (x, y): R_BIT_SET (x, y))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define S_IFMT 0170000
#define _TIME_H_ 
#define H_GET_8 bfd_h_get_8
#define _SC_TRACE_EVENT_FILTER 98
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define INT32_MIN (-INT32_MAX-1)
#define SIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_mid,type_max) static inline bool overflow_name(type_base a, type_base b) { return (!b || (a == type_mid && b == type_max)); }
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define bfd_get_32(abfd,ptr) BFD_SEND (abfd, bfd_getx32, (ptr))
#define SS_DISABLE 0x0004
#define R_HIDDEN __attribute__((visibility("hidden")))
#define H_GET_16 bfd_h_get_16
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define bfd_h_put_signed_64 bfd_h_put_64
#define _SC_TIMER_MAX 52
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define IOPOL_IMPORTANT 1
#define bfd_mach_h8300s 3
#define __DARWIN_C_ANSI 010000L
#define F_THAW_FS 54
#define __FLT32_IS_IEC_60559__ 2
#define R_SYS_ENDIAN 0
#define bfd_mach_h8300sxn 7
#define __PTHREAD_RWLOCK_SIZE__ 192
#define F_SETBACKINGSTORE 70
#define bfd_get_16(abfd,ptr) BFD_SEND (abfd, bfd_getx16, (ptr))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define ut16 unsigned short
#define bfd_is_const_section(SEC) ( ((SEC) == bfd_abs_section_ptr) || ((SEC) == bfd_und_section_ptr) || ((SEC) == bfd_com_section_ptr) || ((SEC) == bfd_ind_section_ptr))
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define r_sys_perror(x) r_sys_perror_str(x);
#define __API_AVAILABLE_GET_MACRO(...) 
#define O_EVTONLY 0x00008000
#define NL_ARGMAX 9
#define __IPHONE_13_4 130400
#define NEWHOWTO(FUNCTION,NAME,SIZE,REL,IN) HOWTO (0, 0, SIZE, 0, REL, 0, complain_overflow_dont, FUNCTION, NAME, FALSE, 0, 0, IN)
#define SYNC_VOLUME_FULLSYNC 0x01
#define __APPLE_API_EVOLVING 
#define EF_NO_XATTRS 0x00000002
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)
#define _BLKCNT_T 
#define _POSIX_NAME_MAX 14
#define SEC_LINK_ONCE 0x20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define bfd_h_get_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx64, (ptr))
#define __strong 
#define _REXT_OK (1<<17)
#define st_ctime st_ctimespec.tv_sec
#define BSF_KEEP 0x20
#define SEC_IN_MEMORY 0x4000
#define R_BIT_CHK(x,y) (*(x) & (1<<(y)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define MONOTONIC_NETBSD (__NetBSD__ && __NetBSD_Version__ >= 700000000)
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define SIGNED signed
#define bfd_section_vma(bfd,ptr) ((ptr)->vma)
#define O_EXLOCK 0x00000020
#define _STDDEF_H 
#define S_IWUSR 0000200
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _SC_MEMLOCK 30
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define _VA_LIST_DEFINED 
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define FUNC_ATTR_USED __attribute__((used))
#define __INT32_MAX__ 0x7fffffff
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define bfd_mach_tic4x 40
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define uint32 unsigned int
#define __SIZEOF_LONG__ 8
#define O_NDELAY O_NONBLOCK
#define O_ASYNC 0x00000040
#define __AVAILABILITY_INTERNAL_REGULAR 
#define bfd_printf_vma(abfd,x) bfd_fprintf_vma (abfd,stdout,x)
#define SIG_ERR ((void (*)(int))-1)
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define PFMTSZo "zo"
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define __APPLE__ 1
#define XRESIZEVEC(T,P,N) ((T *) xrealloc ((void *) (P), sizeof (T) * (N)))
#define __UINT16_C(c) c
#define DIS_ASM_H 
#define __WATCHOS_7_2 70200
#define SEC_RELOC 0x004
#define ru_first ru_ixrss
#define bfd_count_sections(abfd) ((abfd)->section_count)
#define bfd_mach_sh5 0x50
#define _INTPTR_T 
#define _SC_TRACE_LOG 100
#define R_MEM_ALIGN(x) ((void *)(size_t)(((ut64)(size_t)x) & 0xfffffffffffff000LL))
#define SEC_LOAD 0x002
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define _SC_MEMORY_PROTECTION 32
#define LOCK_EX 0x02
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define F_DUPFD 0
#define CONCAT4(a,b,c,d) XCONCAT2(CONCAT2(a,b),CONCAT2(c,d))
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))
#define __APPLE_API_STABLE 
#define BC_STRING_MAX 1000
#define BFD_JUMP_TABLE_DYNAMIC(NAME) NAME ##_get_dynamic_symtab_upper_bound, NAME ##_canonicalize_dynamic_symtab, NAME ##_get_synthetic_symtab, NAME ##_get_dynamic_reloc_upper_bound, NAME ##_canonicalize_dynamic_reloc
#define HAS_CLOCK_MONOTONIC 0
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define st16 short
#define MAX_INPUT 1024
#define _CTYPE_G 0x00000800L
#define __FLT128_IS_IEC_60559__ 2
#define bfd_get_section_alignment(bfd,ptr) ((ptr)->alignment_power + 0)
#define PEX_SEARCH 0x2
#define FP_PREC_64B 3
#define B_IS_SET(x,n) (((x) & (1ULL << (n)))? 1: 0)
#define _PC_FILESIZEBITS 18
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define CTA(x,y,z) (x+CTO(y,z))
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define SIG_ATOMIC_MIN INT32_MIN
#define bfd_read_minisymbols(b,d,m,s) BFD_SEND (b, _read_minisymbols, (b, d, m, s))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define _SC_CLOCK_SELECTION 67
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define ARG_MAX (1024 * 1024)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define SV_ONSTACK SA_ONSTACK
#define B1101 13
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define R_FREE(x) { free((void *)x); x = NULL; }
#define _CTYPE_R 0x00040000L
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define SIGIO 23
#define __FLT64_MANT_DIG__ 53
#define _VA_LIST 
#define bfd_mach_mcf_isa_b_emac 21
#define AT_REMOVEDIR 0x0080
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define bfd_mach_i386_i386 1
#define __va_list__ 
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define ATTRIBUTE_PACKED __attribute__ ((packed))
#define O_SYMLINK 0x00200000
#define _POSIX_REGEXP 200112L
#define bfd_get_dynamic_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_symtab_upper_bound, (abfd))
#define FUNC_ATTR_MALLOC __attribute__((malloc))
#define __SPI_AVAILABLE(...) 
#define R_MODE_JSON 0x008
#define bfd_mach_msp110 110
#define _DIRENT_H_ 
#define O_RDWR 0x0002
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define bfd_mach_s390_31 31
#define __FLT64X_MANT_DIG__ 64
#define NOARGS void
#define _SC_XBS5_LPBIG_OFFBIG 125
#define bfd_mach_ms1 1
#define bfd_mach_ms2 3
#define L_tmpnam 1024
#define ut8p_bw(x) ((x)[0]|((x)[1]<<8))
#define __DYNAMIC__ 1
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define UINT8_C(v) (v)
#define st64 long long
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
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
#define F_SPECULATIVE_READ 101
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define DECLARE_GENERIC_FPRINTF_FUNC() static int generic_fprintf_func(void *stream, const char *format, ...) { int ret; va_list ap; if (!buf_global || !format) { return 0; } va_start (ap, format); ret = r_strbuf_vappendf (buf_global, format, ap); va_end (ap); return ret; }
#define SA_ONSTACK 0x0001
#define QUAD_MAX LLONG_MAX
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define __MMX__ 1
#define R_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define bfd_canonicalize_symtab(abfd,location) BFD_SEND (abfd, _bfd_canonicalize_symtab, (abfd, location))
#define bfd_mach_sh4_nofpu 0x41
#define bfd_mach_z80full 7
#define L_ctermid 1024
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define R_MIN_DEFINED 
#define bfd_link_split_section(abfd,sec) BFD_SEND (abfd, _bfd_link_split_section, (abfd, sec))
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define HAVE_FORK 1
#define _POSIX_THREAD_THREADS_MAX 64
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define ELF_INFO_TYPE_NONE 0
#define bfd_put_signed_16 bfd_put_16
#define bfd_mach_s390_64 64
#define fileno_unlocked(p) __sfileno(p)
#define LOCK_NB 0x04
#define _SC_ARG_MAX 1
#define ZERO_FILL(x) memset (&x, 0, sizeof (x))
#define INT_FAST16_MIN INT16_MIN
#define _SC_V6_ILP32_OFF32 103
#define DT_BLK 6
#define bfd_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_64, (ptr))
#define bfd_mach_mips14000 14000
#define bfd_mach_ppc_7400 7400
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define UF_OPAQUE 0x00000008
#define SEEK_CUR 1
#define bfd_copy_private_section_data(ibfd,isection,obfd,osection) BFD_SEND (obfd, _bfd_copy_private_section_data, (ibfd, isection, obfd, osection))
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define BFD_COM_SECTION_NAME "*COM*"
#define _MCONTEXT_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define STDERR_FILENO 2
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define r_offsetof(type,member) offsetof(type, member)
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define NGROUPS_MAX 16
#define bfd_mach_m32rx 'x'
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define r_ref(x) x->R_REF_NAME++;
#define _TIME_T 
#define OPEN_MAX 10240
#define _POSIX_SEM_NSEMS_MAX 256
#define R_STR_UTIL_H 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define _I386_SIGNAL_H_ 1
#define __pure 
#define bfd_mach_mn10300 300
#define WTERMSIG(x) (_WSTATUS(x))
#define S_IFLNK 0120000
#define PEX_BINARY_OUTPUT 0x20
#define CLD_NOOP 0
#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define _SC_XOPEN_REALTIME_THREADS 112
#define bfd_get_synthetic_symtab(abfd,count,syms,dyncount,dynsyms,ret) BFD_SEND (abfd, _bfd_get_synthetic_symtab, (abfd, count, syms, dyncount, dynsyms, ret))
#define EXIT_SUCCESS 0
#define FPE_FLTDIV 1
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SF_ARCHIVED 0x00010000
#define bfd_get(bits,abfd,ptr) ((bits) == 8 ? (bfd_vma) bfd_get_8 (abfd, ptr) : (bits) == 16 ? bfd_get_16 (abfd, ptr) : (bits) == 32 ? bfd_get_32 (abfd, ptr) : (bits) == 64 ? bfd_get_64 (abfd, ptr) : (abort (), (bfd_vma) - 1))
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define bfd_mach_msp15 15
#define _PC_SYMLINK_MAX 24
#define _SYS_TYPES_H_ 
#define _PC_CHOWN_RESTRICTED 7
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define BFD_RELOC_SPARC_DISP64 BFD_RELOC_64_PCREL
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _POSIX_NGROUPS_MAX 8
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define HAVE_CLOCK_NANOSLEEP 0
#define bfd_h_put_signed_16 bfd_h_put_16
#define bfd_mach_fr300 300
#define bfd_mach_mcf_isa_b_float_emac 24
#define __enum_open 
#define UINT8_MAX 255
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define bfd_zalloc calloc
#define _PC_2_SYMLINKS 15
#define bfd_find_line(abfd,syms,sym,file,line) BFD_SEND (abfd, _bfd_find_line, (abfd, syms, sym, file, line))
#define LOCK_UN 0x08
#define _POSIX_TIMER_MAX 32
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define IS_OCTAL(x) ((x) >= '0' && (x) <= '7')
#define F_SINGLE_WRITER 76
#define bfd_gc_sections(abfd,link_info) BFD_SEND (abfd, _bfd_gc_sections, (abfd, link_info))
#define R_IPI 
#define NL_LANGMAX 14
#define _SC_CLK_TCK 3
#define SYM_CAT_H 
#define PEX_BINARY_INPUT 0x10
#define UT32_ADD_OVFCHK(x,y) ((UT32_MAX - (x)) < (y))
#define _WSTOPPED 0177
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define UF_COMPRESSED 0x00000020
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define _POSIX_PATH_MAX 256
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define bfd_mach_xtensa 1
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define bfd_valid_reloc_types(abfd) ((abfd)->xvec->valid_reloc_types)
#define _SSIZE_T 
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define FP_STATE_BYTES 512
#define PTRCONST void *const
#define LONG_MIN (-LONG_MAX - 1L)
#define F_CHECK_LV 98
#define __DTF_SKIPREAD 0x0010
#define DTTOIF(dirtype) ((dirtype) << 12)
#define bfd_mach_arm_3M 4
#define CLD_KILLED 2
#define HAVE_ARC4RANDOM_UNIFORM 0
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define _RUNE_MAGIC_A "RuneMagA"
#define SA_64REGSET 0x0200
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define R_MODE_ARRAY 0x010
#define _SC_XOPEN_SHM 113
#define bfd_asymbol_bfd(x) ((x)->the_bfd)
#define SI_USER 0x10001
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define MONOTONIC_APPLE (__APPLE__ && CLOCK_MONOTONIC_RAW)
#define _PC_MIN_HOLE_SIZE 27
#define bfd_mach_arm_4 5
#define __DARWIN_SUF_NON_CANCELABLE 
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define RUSAGE_INFO_V0 0
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define bfd_mach_ppc_a35 35
#define bfd_mach_m16c 0x75
#define _POSIX_MAX_INPUT 255
#define bfd_is_target_special_symbol(abfd,sym) BFD_SEND (abfd, _bfd_is_target_special_symbol, (abfd, sym))
#define _WATTR_OK (1<<16)
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define ut8p_b(x) ((x)[0])
#define bfd_mach_h8300h 2
#define SEC_COFF_SHARED_LIBRARY 0x10000000
#define _JBLEN ((9 * 2) + 3 + 16)
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define _STRUCT_TIMEVAL struct timeval
#define INFINITY (1.0f/0.0f)
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define CTO(y,z) ((size_t) &((y*)0)->z)
#define FUNC_ATTR_PURE __attribute__ ((pure))
#define _LIMITS_H_ 
#define _POSIX_MEMORY_PROTECTION 200112L
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define bfd_applicable_file_flags(abfd) ((abfd)->xvec->object_flags)
#define ST64_MIN ((st64)(-ST64_MAX-1))
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define bfd_mach_h8300 1
#define _PC_REC_XFER_ALIGN 23
#define true 1
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define _SC_XOPEN_CRYPT 108
#define R_OUT 
#define _SC_RAW_SOCKETS 119
#define bfd_h_get_8(abfd,ptr) bfd_get_8 (abfd, ptr)
#define __weak 
#define _DEV_T 
#define F_PREALLOCATE 42
#define bfd_mach_mcf_isa_b_float 22
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define __abortlike __dead2 __cold __not_tail_called
#define F_SETFD 2
#define UT32_GT0 0x80000000U
#define XCNEW(T) ((T *) xcalloc (1, sizeof (T)))
#define __DBL_MAX_EXP__ 1024
#define F_RDAHEAD 45
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define BC_DIM_MAX 2048
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define bfd_mach_rs6k 6000
#define BFD_NO_MORE_SYMBOLS ((symindex) ~0)
#define _POSIX_DELAYTIMER_MAX 32
#define R_REF_NAME refcount
#define __SSTR 0x0200
#define _POSIX_TRACE_NAME_MAX 8
#define bfd_get_section_flags(bfd,ptr) ((ptr)->flags + 0)
#define FFDSYNC O_DSYNC
#define __kpi_unavailable 
#define R_ROUND(x,y) ((x)%(y))?(x)+((y)-((x)%(y))):(x)
#define bfd_free_cached_info(abfd) BFD_SEND (abfd, _bfd_free_cached_info, (abfd))
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define bfd_mach_mips_gs464 3003
#define DT_UNKNOWN 0
#define bfd_mach_m68008 2
#define bfd_mach_frv 1
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define S_BLKSIZE 512
#define SIGINT 2
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define _SC_STREAM_MAX 26
#define S_IREAD S_IRUSR
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define _SC_GETPW_R_SIZE_MAX 71
#define _POSIX_SSIZE_MAX 32767
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define PFMTDPTR "td"
#define FUNC_ATTR_ALWAYS_INLINE __attribute__((always_inline))
#define _SYS_SIGNAL_H_ 
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define bfd_mach_mips3000 3000
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define bfd_mach_mips_gs464e 3004
#define PEX_LAST 0x1
#define _PTRDIFF_T_DECLARED 
#define BFD_HOST_64BIT_LONG 0
#define _SC_2_PBS_LOCATE 62
#define LIBC_HAVE_PTRACE 1
#define __AVAILABILITY__ 
#define PEX_USE_PIPES 0x2
#define ANSI_PROTOTYPES 1
#define sigmask(m) (1 << ((m)-1))
#define __tune_core2__ 1
#define bfd_mach_fr550 550
#define bfd_mach_z80 3
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define bfd_mach_sh4al_dsp 0x4d
#define FPE_FLTOVF 2
#define _SC_SS_REPL_MAX 126
#define __ATOMIC_HLE_ACQUIRE 65536
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define bfd_stat_arch_elt(abfd,stat) BFD_SEND (abfd, _bfd_stat_arch_elt,(abfd, stat))
#define bfd_usrdata(abfd) ((abfd)->usrdata)
#define _UINT32_T 
#define bfd_abs_section_ptr ((asection *) &bfd_abs_section)
#define COLL_WEIGHTS_MAX 2
#define _PC_VDISABLE 9
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define bfd_mach_mips_interaptiv_mr2 736550
#define bfd_mach_mips4120 4120
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define O_NONBLOCK 0x00000004
#define bfd_is_und_section(sec) ((sec) == bfd_und_section_ptr)
#define EXFUN(name,proto) name proto
#define WAKEMON_MAKE_FATAL 0x10
#define R_EMPTY2 {{ 0 }}
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define __dead 
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
#define UT64_ALIGN(x) (x + (x - (x % sizeof (ut64))))
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define FUNC_ATTR_ALLOC_SIZE_PROD(x,y) __attribute__((alloc_size(x,y)))
#define VA_CLOSE(AP) } va_end(AP); }
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define B10001 17
#define bfd_mach_mips4600 4600
#define ST32_MAX 0x7FFFFFFF
#define __WATCHOS_5_2 50200
#define _SC_THREAD_THREADS_MAX 94
#define bfd_canonicalize_dynamic_reloc(abfd,arels,asyms) BFD_SEND (abfd, _bfd_canonicalize_dynamic_reloc, (abfd, arels, asyms))
#define SEC_HAS_GOT_REF 0x800
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define UT8_SUB_OVFCHK(a,b) UT8_ADD_OVFCHK(a,-(b))
#define R2_INCDIR "/usr/local/include/libr"
#define UINT64_C(v) (v ## ULL)
#define SEC_SMALL_DATA 0x800000
#define BFD_IN_MEMORY 0x800
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define BSF_LOCAL 0x01
#define _SC_ADVISORY_INFO 65
#define LIBIBERTY_H 
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define F_GETLKPID 66
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define bfd_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_16, (ptr))
#define VOLATILE volatile
#define __SOPT 0x0400
#define HAS_LOCALS 0x20
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define SEC_TIC54X_CLINK 0x80000000
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define UINTPTR_MAX 18446744073709551615UL
#define bfd_mach_ppc_403gc 4030
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define stdout __stdoutp
#define _PTRDIFF_T 
#define bfd_mach_x86_64_intel_syntax 65
#define bfd_mach_arm_unknown 0
#define _PC_NO_TRUNC 8
#define DISASSEMBLE_DATA (1LL << 30)
#define SEC_NEVER_LOAD 0x200
#define bfd_mach_i960_hx 8
#define bfd_mach_alpha_ev4 0x10
#define bfd_mach_alpha_ev5 0x20
#define bfd_mach_alpha_ev6 0x30
#define __GXX_ABI_VERSION 1016
#define UT32_HI(x) ((ut32)(((ut64)(x))>>32)&UT32_MAX)
#define __IDSTRING(name,string) static const char name[] __used = string
#define _SC_PAGESIZE 29
#define _SC_XOPEN_XCU_VERSION 121
#define HAS_DEBUG 0x08
#define UINT_LEAST16_MAX UINT16_MAX
#define R_OWN 
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define bfd_h_put_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define SSZT_SUB_OVFCHK(a,b) SSZT_ADD_OVFCHK(a,-(b))
#define bfd_mach_mipsisa32r2 33
#define bfd_mach_mipsisa32r3 34
#define bfd_mach_mipsisa32r5 36
#define bfd_mach_mipsisa32r6 37
#define UF_NODUMP 0x00000001
#define _UINT64_T 
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define R_HEAP 
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define WEXITED 0x00000004
#define _PC_LINK_MAX 1
#define B0100 4
#define B0101 5
#define bfd_is_ind_section(sec) ((sec) == bfd_ind_section_ptr)
#define R_INOUT 
#define MONOTONIC_LINUX (__linux__ && _POSIX_C_SOURCE >= 199309L)
#define __ILP32_OFF32 (-1)
#define B1110 14
#define XNEW(T) ((T *) xmalloc (sizeof (T)))
#define _BSD_I386__TYPES_H_ 
#define PEX_SUFFIX 0x4
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define _POSIX_SHELL 200112L
#define WNOHANG 0x00000001
#define alloca(x) __builtin_alloca(x)
#define __INT16_MAX__ 0x7fff
#define R_JOIN_5_PATHS(p1,p2,p3,p4,p5) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4 R_SYS_DIR p5
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define __x86_64 1
#define bfd_set_section_vma(bfd,ptr,val) (((ptr)->vma = (ptr)->lma = (val)), ((ptr)->user_set_vma = TRUE), TRUE)
#define bfd_get_start_address(abfd) ((abfd)->start_address)
#define _INT32_T 
#define SEGV_ACCERR 2
#define _POSIX2_C_BIND 200112L
#define bfd_get_section_limit(bfd,sec) (((sec)->rawsize ? (sec)->rawsize : (sec)->size) / bfd_octets_per_byte (bfd))
#define _SYS_DIRENT_H 
#define O_NOCTTY 0x00020000
#define __PTRDIFF_T 
#define bfd_mach_msp21 21
#define __SALC 0x4000
#define bfd_make_empty_symbol(abfd) BFD_SEND (abfd, _bfd_make_empty_symbol, (abfd))
#define __PTHREAD_CONDATTR_SIZE__ 8
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define UT32_LO(x) ((ut32)((x)&UT32_MAX))
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define FASYNC O_ASYNC
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define ST32_MIN (-ST32_MAX-1)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define bfd_mach_i960_mc 4
#define L_INCR SEEK_CUR
#define __INT_FAST64_TYPE__ long long int
#define bfd_mach_msp41 41
#define INLINE __inline__
#define bfd_mach_mips_xlr 887682
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define F_LOCK 1
#define S_TYPEISTMO(buf) (0)
#define _POSIX2_FORT_RUN 200112L
#define UT8_MIN 0x00U
#define _SC_MQ_OPEN_MAX 46
#define _XOPEN_STREAMS (-1)
#define _GID_T 
#define S_IRWXG 0000070
#define F_GETFD 1
#define DYNAMIC 0x40
#define _ANSI_STDDEF_H 
#define LIBC_HAVE_FORK 1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define R_UNUSED __attribute__((__unused__))
#define XRESIZEVAR(T,P,S) ((T *) xrealloc ((P), (S)))
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define __SMBF 0x0080
#define IOPOL_DEFAULT 0
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define UF_SETTABLE 0x0000ffff
#define __KFBSD__ 0
#define DEFUN_VOID(name) name(void)
#define DST_WET 3
#define __OSX_AVAILABLE(_vers) 
#define H_GET_64 bfd_h_get_64
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define SEC_HAS_CONTENTS 0x100
#define R_MODE_SIMPLE 0x004
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define F_SETLKWTIMEOUT 10
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define bfd_put_signed_32 bfd_put_32
#define __ILP32_OFFBIG (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define bfd_mach_arc_6 6
#define __SIZE_TYPE__ long unsigned int
#define bfd_find_nearest_line(abfd,sec,syms,off,file,func,line) BFD_SEND (abfd, _bfd_find_nearest_line, (abfd, sec, syms, off, file, func, line))
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define __not_tail_called 
#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __LP64__ 1
#define _POSIX2_BC_STRING_MAX 1000
#define UTIME_NOW -1
#define S_ISVTX 0001000
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define bfd_mach_arc_7 7
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define _POSIX_CLOCKRES_MIN 20000000
#define _POSIX_JOB_CONTROL 200112L
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SIGUSR2 31
#define SEC_DATA 0x020
#define BSF_FILE 0x4000
#define F_TRIM_ACTIVE_FILE 100
#define _APPEND_OK (1<<13)
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define UQUAD_MAX ULLONG_MAX
#define F_GETLK 7
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define __nonnull 
#define S_IFREG 0100000
#define bfd_set_section(x,y) ((x)->section) = (y)
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define bfd_section_list_insert_before(ABFD,B,S) do { asection *_b = B; asection *_s = S; asection *_prev = _b->prev; _s->prev = _prev; _s->next = _b; _b->prev = _s; if (_prev) _prev->next = _s; else (ABFD)->sections = _s; } while (0)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define _CACHED_RUNES (1 <<8 )
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define O_DSYNC 0x400000
#define bfd_mach_sparc_v9_p(mach) ((mach) >= bfd_mach_sparc_v8plus && (mach) <= bfd_mach_sparc_v9b && (mach) != bfd_mach_sparc_sparclite_le)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define CHAR_MAX SCHAR_MAX
#define B_UNSET(x,n) ((x) &= ~(1ULL << (n)))
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define _SC_TRACE_EVENT_NAME_MAX 127
#define WP_TEXT 0x80
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define XDELETEVEC(P) free ((void*) (P))
#define __WATCHOS_4_1 40100
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define TARGET_OS_IPHONE 0
#define SEC_ALLOC 0x001
#define BFD64 
#define INT8_C(v) (v)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define bfd_mach_h8300sx 6
#define B11100 28
#define B11101 29
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define bfd_mach_sh2a_nofpu 0x2b
#define F_ADDFILESUPPL 104
#define B_EVEN(x) (((x) & 1) == 0)
#define _SC_FILE_LOCKING 69
#define __FLT64X_DECIMAL_DIG__ 21
#define SIZE_T_MAX ULONG_MAX
#define bfd_mach_mcf_isa_b_nousp_emac 18
#define R2_TYPES_BASE_H 
#define B11110 30
#define B11111 31
#define bfd_print_private_bfd_data(abfd,file) BFD_SEND (abfd, _bfd_print_private_bfd_data, (abfd, file))
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define __DBL_HAS_DENORM__ 1
#define bfd_mach_i960_xa 5
#define F_WRLCK 3
#define GETSIGSINFO_PLATFORM_BINARY 1
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define _PC_NAME_MAX 4
#define hex_value(c) ((unsigned int) _hex_value[(unsigned char) (c)])
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define _SC_ASYNCHRONOUS_IO 28
#define __LDBL_HAS_INFINITY__ 1
#define _PC_MAX_CANON 2
#define __OS_AVAILABILITY(_target,_availability) 
#define BSF_DYNAMIC 0x8000
#define bfd_mach_frvtomcat 499
#define EQUIV_CLASS_MAX 2
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define bfd_mach_m68020 4
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define bfd_mach_ppc_601 601
#define _SYS_SYSLIMITS_H_ 
#define BFD_JUMP_TABLE_ARCHIVE(NAME) NAME ##_slurp_armap, NAME ##_slurp_extended_name_table, NAME ##_construct_extended_name_table, NAME ##_truncate_arname, NAME ##_write_armap, NAME ##_read_ar_hdr, NAME ##_openr_next_archived_file, NAME ##_get_elt_at_index, NAME ##_generic_stat_arch_elt, NAME ##_update_armap_timestamp
#define __FLT_DIG__ 6
#define SF_SUPPORTED 0x009f0000
#define __NO_INLINE__ 1
#define bfd_mach_ppc_750 750
#define WANT_DYLINK 1
#define USER_SPECIFIED_MACHINE_TYPE (1LL << 29)
#define DEBUGGER 1
#define B_ODD(x) (!B_EVEN((x)))
#define O_EXCL 0x00000800
#define CLOCKS_PER_SEC 1000000
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define _SC_V6_LP64_OFF64 105
#define S_TYPEISSEM(buf) (0)
#define BSF_SECTION_SYM 0x100
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define bfd_mach_am33 330
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define bfd_mach_m68040 6
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated(_msg)))
#define RSIZE_MAX (SIZE_MAX >> 1)
#define _SC_TRACE 97
#define CONCAT2(a,b) a ##b
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define SIGEV_THREAD 3
#define DOTS , ...
#define bfd_mach_x86_64 64
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define CHAR_MIN SCHAR_MIN
#define MAX_CANON 1024
#define __FLT_MANT_DIG__ 24
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define __LDBL_DECIMAL_DIG__ 21
#define _SC_GETGR_R_SIZE_MAX 70
#define BFD_FAKE_SECTION(SEC,FLAGS,SYM,SYM_PTR,NAME,IDX) { NAME, IDX, 0, NULL, NULL, FLAGS, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (struct bfd_section *) &SEC, 0, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, 0, NULL, NULL, NULL, (struct bfd_symbol *) SYM, (struct bfd_symbol **) SYM_PTR, { NULL }, { NULL } }
#define _SC_V6_LPBIG_OFFBIG 106
#define INT_LEAST8_MIN INT8_MIN
#define bfd_mach_mipsisa64 64
#define __VERSION__ "11.2.0"
#define ut8p_bq(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24)|((x)[4]<<32)|((x)[5]<<40)|((x)[6]<<48)|((x)[7]<<56))
#define FUNC_ATTR_ALLOC_SIZE(x) __attribute__((alloc_size(x)))
#define _SC_TRACE_NAME_MAX 128
#define HAVE_SYSTEM 1
#define HALF_BFD_SIZE_TYPE (((bfd_size_type) 1) << (8 * sizeof (bfd_size_type) / 2))
#define FOR_EACH_DISASSEMBLER_OPTION(OPT,OPTIONS) for ((OPT) = (OPTIONS); (OPT) != NULL; (OPT) = next_disassembler_option (OPT))
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define VA_FIXEDARG(AP,T,N) struct Qdmy
#define __UINT64_C(c) c ## ULL
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define IS_NULLSTR(x) (!(x) || !*(x))
#define _SC_THREAD_ATTR_STACKSIZE 83
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#define O_APPEND 0x00000008
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define SF_APPEND 0x00040000
#define _PC_CASE_SENSITIVE 11
#define _PTHREAD_RWLOCK_T 
#define _SECURE__STRINGS_H_ 
#define BADSIG SIG_ERR
#define AT_EACCESS 0x0010
#define SEC_CONSTRUCTOR 0x080
#define B1001 9
#define ILL_BADSTK 8
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define basename basename_cannot_be_used_without_a_prototype
#define _XOPEN_NAME_MAX 255
#define INT_LEAST32_MIN INT32_MIN
#define UT8_ADD_OVFCHK(x,y) ((UT8_MAX - (x)) < (y))
#define bfd_mach_arm_5TE 9
#define B1010 10
#define B1011 11
#define DST_EET 5
#define XTENSA_LIBISA_H 
#define INT_FAST16_MAX INT16_MAX
#define CONST const
#define __APPLE_API_PRIVATE 
#define _SECURE__STRING_H_ 
#define _IN_PORT_T 
#define _UNISTD_H_ 
#define XOBNEW(O,T) ((T *) obstack_alloc ((O), sizeof (T)))
#define bfd_mach_mips8000 8000
#define _SC_EXPR_NEST_MAX 14
#define bfd_mach_mips_loongson_2f 3002
#define _SC_2_PBS_TRACK 64
#define BFD_TRADITIONAL_FORMAT 0x400
#define _SC_TIMERS 41
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define PEXECUTE_ONE (PEXECUTE_FIRST + PEXECUTE_LAST)
#define st_mtime st_mtimespec.tv_sec
#define __INT_LEAST32_MAX__ 0x7fffffff
#define bfd_mach_mips4000 4000
#define UF_HIDDEN 0x00008000
#define LINE_MAX 2048
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define TRAP_TRACE 2
#define ASTRDUP(X) (__extension__ ({ const char *const libiberty_optr = (X); const unsigned long libiberty_len = strlen (libiberty_optr) + 1; char *const libiberty_nptr = (char *const) alloca (libiberty_len); (char *) memcpy (libiberty_nptr, libiberty_optr, libiberty_len); }))
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define bfd_h_get_signed_8(abfd,ptr) bfd_get_signed_8 (abfd, ptr)
#define RLIMIT_CPU 0
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define F_GETPATH 50
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define F_ULOCK 0
#define bfd_mach_mips_gs264e 3005
#define BSF_OLD_COMMON 0x200
#define bfd_mach_mips5 5
#define DTF_REWIND 0x0004
#define UT16_ALIGN(x) (x + (x - (x % sizeof (ut16))))
#define RENAME_SECLUDE 0x00000001
#define _POSIX2_EXPR_NEST_MAX 32
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
#define __SLBF 0x0001
#define BSF_CONSTRUCTOR 0x800
#define RLIMIT_RSS RLIMIT_AS
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define _SC_FSYNC 38
#define __FLT32_MANT_DIG__ 24
#define DT_SOCK 12
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define PRIO_DARWIN_NONUI 0x1001
#define F_ADDFILESIGS_INFO 103
#define __LP64_OFF64 (1)
#define __API_DEPRECATED_BEGIN(...) 
#define clearerr_unlocked(p) __sclearerr(p)
#define LIBC_HAVE_PRIV_SET 0
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define bfd_mach_sparc 1
#define PFMT64o "llo"
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define _CLOCK_T 
#define _SC_PRIORITY_SCHEDULING 35
#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define PFMT64x "llx"
#define _INTMAX_T 
#define ST64_SUB_OVFCHK(a,b) ST64_ADD_OVFCHK(a,-(b))
#define _SC_2_LOCALEDEF 23
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define _CHOWN_OK (1<<21)
#define R_BETWEEN(x,y,z) (((y)>=(x)) && ((y)<=(z)))
#define F_FREEZE_FS 53
#define O_DIRECTORY 0x00100000
#define SSIZE_MAX LONG_MAX
#define __SRD 0x0004
#define SEEK_HOLE 3
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define _SC_SEM_VALUE_MAX 50
#define ST64_MAX ((st64)0x7FFFFFFFFFFFFFFFULL)
#define R_TYPES_OVERFLOW_H 
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define POLL_ERR 4
#define AT_FDCWD -2
#define H_GET_S8 bfd_h_get_signed_8
#define __IOS_UNAVAILABLE 
#define BFD_FORT_COMM_DEFAULT_VALUE 0
#define _SC_MQ_PRIO_MAX 75
#define INT32_MAX 2147483647
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define _U_INT8_T 
#define R_JOIN_3_PATHS(p1,p2,p3) p1 R_SYS_DIR p2 R_SYS_DIR p3
#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define _U_CHAR 
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define bfd_mach_crx 1
#define _PC_ASYNC_IO 17
#define PRIO_DARWIN_BG 0x1000
#define SEC_EXCLUDE 0x8000
#define bfd_mach_avr5 5
#define R_API __attribute__((visibility("default")))
#define PEXECUTE_FIRST 1
#define __FLT128_HAS_DENORM__ 1
#define BFD_HOST_U_64_BIT unsigned long long
#define bfd_mach_sh3e 0x3e
#define bfd_mach_mips5400 5400
#define F_SETFL 4
#define DTF_HIDEW 0x0001
#define SIG_UNBLOCK 2
#define BSF_DEBUGGING 0x08
#define _POSIX_RTSIG_MAX 8
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define FPE_INTOVF 8
#define __SNBF 0x0002
#define MAC_OS_X_VERSION_10_15_1 101501
#define _SC_READER_WRITER_LOCKS 76
#define st8 signed char
#define __FLT128_DIG__ 33
#define bfd_mach_sh4a 0x4a
#define __OSX_UNAVAILABLE 
#define R_MAX_DEFINED 
#define __INT32_C(c) c
#define R_MODE_EQUAL 0x080
#define __ORDER_PDP_ENDIAN__ 3412
#define WANT_THREADS 1
#define _POSIX_MEMLOCK (-1)
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define INT_FAST8_MIN INT8_MIN
#define __DARWIN_MAXPATHLEN 1024
#define bfd_mach_sh2e 0x2e
#define F_NODIRECT 62
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SEC_MERGE 0x1000000
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define _Null_unspecified 
#define R_ENDIAN_H 
#define RLIMIT_NPROC 7
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define bfd_debug_info_end(abfd) BFD_SEND (abfd, _bfd_debug_info_end, (abfd))
#define bfd_section_list_append(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->next = NULL; if (_abfd->section_last) { _s->prev = _abfd->section_last; _abfd->section_last->next = _s; } else { _s->prev = NULL; _abfd->sections = _s; } _abfd->section_last = _s; } while (0)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define _SYS_RESOURCE_H_ 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define bfd_mach_xc16x 1
#define SIG_DFL (void (*)(int))0
#define O_RDONLY 0x0000
#define bfd_get_section_name(bfd,ptr) ((ptr)->name + 0)
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_OK 0
#define BSF_EXPORT BSF_GLOBAL
#define _PC_PATH_MAX 5
#define _XOPEN_REALTIME_THREADS (-1)
#define __SAPP 0x0100
#define F_GETSIGSINFO 105
#define _KEY_T 
#define __packed __attribute__((__packed__))
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define _INT64_T 
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define _POSIX_CHILD_MAX 25
#define DST_MET 4
#define SS_ONSTACK 0x0001
#define _STDARG_H 
#define R2_ETCDIR "/etc"
#define bfd_mach_sh2a_nofpu_or_sh4_nommu_nofpu 0x2a1
#define INT_LEAST32_MAX INT32_MAX
#define O_DP_GETRAWENCRYPTED 0x0001
#define F_SETLK 8
#define bfd_mach_ppc_rs64iii 643
#define R2_TYPES_H 
#define _SC_2_FORT_RUN 22
#define UT16_MIN 0U
#define BFD_SEND(bfd,message,arglist) ((*((bfd)->xvec->message)) arglist)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define bfd_canonicalize_dynamic_symtab(abfd,asymbols) BFD_SEND (abfd, _bfd_canonicalize_dynamic_symtab, (abfd, asymbols))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define _POSIX_THREADS 200112L
#define F_ADDFILESIGS_RETURN 97
#define _POSIX_THREAD_CPUTIME (-1)
#define F_SETOWN 6
#define __CTYPE_H_ 
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define UT16_ADD_OVFCHK(x,y) ((UT16_MAX - (x)) < (y))
#define FWRITE 0x00000002
#define _SYS_FCNTL_H_ 
#define XNEWVAR(T,S) ((T *) xmalloc ((S)))
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#define __INT8_TYPE__ signed char
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define _UINTMAX_T 
#define _SC_PRIORITIZED_IO 34
#define bfd_mach_mcf_isa_a 10
#define bfd_mach_mcf_isa_b 19
#define UT8_GT0 0x80U
#define BSF_THREAD_LOCAL 0x40000
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SF_DATALESS 0x40000000
#define F_GLOBAL_NOCACHE 55
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define _SC_THREAD_SPORADIC_SERVER 92
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _toupper(c) __toupper(c)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define bfd_mach_fr400 400
#define F_TLOCK 2
#define __SOFF 0x1000
#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x
#define PEX_STDERR_TO_STDOUT 0x8
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define bfd_mach_arc_5 5
#define BFD_JUMP_TABLE_GENERIC(NAME) NAME ##_close_and_cleanup, NAME ##_bfd_free_cached_info, NAME ##_new_section_hook, NAME ##_get_section_contents, NAME ##_get_section_contents_in_window
#define __FLT_RADIX__ 2
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define bfd_asymbol_base(x) ((x)->section->vma)
#define SIG_HOLD (void (*)(int))5
#define bfd_mach_mips4300 4300
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define bfd_mach_mcf_isa_aplus 13
#define O_SYNC 0x0080
#define SEC_TIC54X_BLOCK 0x40000000
#define F_FULLFSYNC 51
#define minor(x) ((int32_t)((x) & 0xffffff))
#define _hex_bad 99
#define R2_CONFIGURE_H 
#define r_unref(x,f) { assert (x->R_REF_NAME> 0); if (!--(x->R_REF_NAME)) { f(x); } }
#define bfd_final_link(abfd,info) BFD_SEND (abfd, _bfd_final_link, (abfd, info))
#define bfd_set_private_flags(abfd,flags) BFD_SEND (abfd, _bfd_set_private_flags, (abfd, flags))
#define UT64_GT0 0x8000000000000000ULL
#define PTHREAD_STACK_MIN 8192
#define XCONCAT2(a,b) CONCAT2(a,b)
#define XCONCAT4(a,b,c,d) CONCAT4(a,b,c,d)
#define __SSE_MATH__ 1
#define bfd_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_32, (ptr))
#define _U_INT32_T 
#define B_SET(x,n) ((x) |= (1ULL << (n)))
#define _POSIX_ARG_MAX 4096
#define _SC_THREADS 96
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __k8 1
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define BUFSIZ 1024
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define bfd_read(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_read", NULL, NULL, __FUNCTION__), bfd_bread ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define bfd_asymbol_flavour(x) (bfd_asymbol_bfd(x)->xvec->flavour)
#define HOWTO(C,R,S,B,P,BI,O,SF,NAME,INPLACE,MASKSRC,MASKDST,PC) { (unsigned) C, R, S, B, P, BI, O, SF, NAME, INPLACE, MASKSRC, MASKDST, PC }
#define R_MODE_CLASSDUMP 0x040
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define F_TEST 3
#define _UID_T 
#define bfd_mach_sparc_v8plusa 5
#define bfd_set_cacheable(abfd,bool) (((abfd)->cacheable = bool), TRUE)
#define INTMAX_C(v) (v ## L)
#define _POSIX_MQ_OPEN_MAX 8
#define UF_TRACKED 0x00000040
#define UT64_LT0 0x7FFFFFFFFFFFFFFFULL
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define AT_REALDEV 0x0200
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define bfd_mach_sparc_v8plusb 9
#define BSF_NO_FLAGS 0x00
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define O_CLOEXEC 0x01000000
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define bfd_mach_arm_2 1
#define _W_INT(w) (*(int *)&(w))
#define _ID_T 
#define _POSIX2_PBS_CHECKPOINT (-1)
#define bfd_has_map(abfd) ((abfd)->has_armap)
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define __TVOS_AVAILABLE(_vers) 
#define SYNC_VOLUME_WAIT 0x02
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define bfd_mach_fr450 450
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define bfd_get_64(abfd,ptr) BFD_SEND (abfd, bfd_getx64, (ptr))
#define __DARWIN_64_BIT_INO_T 1
#define R2_LIBDIR "/usr/local/lib"
#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)
#define __TVOS_14_0 140000
#define bfd_mach_mips_sb1 12310201
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define PFMTSZd "zd"
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define PFMTSZu "zu"
#define INTPTR_MIN (-INTPTR_MAX-1)
#define opcodes_error_handler _bfd_error_handler
#define PFMTSZx "zx"
#define FP_CHOP 3
#define BSF_FUNCTION 0x10
#define _WRITE_OK (1<<10)
#define _SC_DELAYTIMER_MAX 45
#define S_IFDIR 0040000
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define TRAP_BRKPT 1
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 18
#define SF_NOUNLINK 0x00100000
#define bfd_get_signed_8(abfd,ptr) (((*(unsigned char *) (ptr) & 0xff) ^ 0x80) - 0x80)
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define bfd_mach_mcf_isa_b_float_mac 23
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define R_PERM_ACCESS 32
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))
#define INT8_MAX 127
#define UINT_FAST32_MAX UINT32_MAX
#define O_CREAT 0x00000200
#define bfd_mach_ppc_403 403
#define _SC_SAVED_IDS 7
#define bfd_link_hash_table_create(abfd) BFD_SEND (abfd, _bfd_link_hash_table_create, (abfd))
#define bfd_mach_fr30 0x46523330
#define R2_VERSION_NUMBER 50504
#define _EXECUTE_OK (1<<11)
#define PFMT32d "d"
#define F_ALLOCATECONTIG 0x00000002
#define __INT_FAST16_MAX__ 0x7fff
#define bfd_discard_group(abfd,sec) BFD_SEND (abfd, _bfd_discard_group, (abfd, sec))
#define _BSD_MACHINE__TYPES_H_ 
#define R_SYS_BASE ((ut64)0x100000000)
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define PERROR_WITH_FILELINE 0
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define bfd_mach_mcf_isa_b_nousp_mac 17
#define R_NEWS(x,y) (x*)malloc(sizeof(x)*(y))
#define R_EMPTY { 0 }
#define bfd_mach_m6812 1
#define INT_LEAST64_MIN INT64_MIN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define _POSIX_MONOTONIC_CLOCK (-1)
#define bfd_is_com_section(ptr) (((ptr)->flags & SEC_IS_COMMON) != 0)
#define F_SETNOSIGPIPE 73
#define __FLT64_DIG__ 15
#define ST32_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST32_MAX - (x))) || (((x) < 0) && (a) < ST32_MIN - (x)))
#define _SC_XBS5_LP64_OFF64 124
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define WANT_CAPSTONE 1
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define BFD_HOST_64_BIT long long
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define bfd_mach_m68000 1
#define R_NULLABLE 
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define _SUSECONDS_T 
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _SC_THREAD_ATTR_STACKADDR 82
#define INT32_C(v) (v)
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define POLL_OUT 2
#define bfd_mach_iq2000 1
#define _SC_TIMEOUTS 95
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define __SEOF 0x0020
#define USE_LIB_XXHASH 0
#define F_DUPFD_CLOEXEC 67
#define ACONCAT(ACONCAT_PARAMS) (libiberty_concat_ptr = (char *) alloca (concat_length ACONCAT_PARAMS + 1), concat_copy2 ACONCAT_PARAMS)
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define bfd_mach_mips6000 6000
#define bfd_update_armap_timestamp(abfd) BFD_SEND (abfd, _bfd_update_armap_timestamp, (abfd))
#define __FLT64X_HAS_DENORM__ 1
#define bfd_mach_z80strict 1
#define _PC_SYNC_IO 25
#define __dead2 __attribute__((__noreturn__))
#define bfd_find_inliner_info(abfd,file,func,line) BFD_SEND (abfd, _bfd_find_inliner_info, (abfd, file, func, line))
#define _XOPEN_SHM (1)
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define bfd_section_lma(bfd,ptr) ((ptr)->lma)
#define bfd_get_section(x) ((x)->section)
#define bfd_get_section_userdata(bfd,ptr) ((ptr)->userdata)
#define _POSIX_TIMERS (-1)
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
#define R_NEW_COPY(x,y) x=(void*)malloc(sizeof(y));memcpy(x,y,sizeof(y))
#define BFD_HOST_LONG_LONG 1
#define bfd_get_target(abfd) ((abfd)->xvec->name)
#define R2_VERSION "5.5.4"
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define B0000 0
#define B0110 6
#define R_DEPRECATE 
#define R_NEWS0(x,y) (x*)calloc(y,sizeof(x))
#define _BSD_PTRDIFF_T_ 
#define bfd_write(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_write", NULL, NULL, __FUNCTION__), bfd_bwrite ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define SIGXFSZ 25
#define bfd_mach_i386_i8086 2
#define O_FSYNC O_SYNC
#define __kpi_deprecated(_msg) 
#define bfd_mach_sparc_sparclite 3
#define __UINT_FAST16_TYPE__ short unsigned int
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define ST16_SUB_OVFCHK(a,b) ST16_ADD_OVFCHK(a,-(b))
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define R_BIT_UNSET(x,y) (((ut8*)x)[y>>4] &= ~(1<<(y&0xf)))
#define _POSIX2_FORT_DEV (-1)
#define INIT_DISASSEMBLE_INFO(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _POSIX_RAW_SOCKETS (-1)
#define _tolower(c) __tolower(c)
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define R_PTR_MOVE(d,s) d=s;s=NULL;
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define bfd_mach_arm_XScale 10
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define EXPR_NEST_MAX 32
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
#define INT_MIN (-INT_MAX - 1)
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define container_of(ptr,type,member) ((type *)((char *)(__typeof__(((type *)0)->member) *){ptr} - offsetof(type, member)))
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define _SC_V6_ILP32_OFFBIG 104
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define PTRDIFF_MAX INTMAX_MAX
#define _FD_SET 
#define HAVE_GPERF 1
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define bfd_get_dynamic_symcount(abfd) ((abfd)->dynsymcount)
#define S_IROTH 0000004
#define PFMT32o "o"
#define __SIG_ATOMIC_WIDTH__ 32
#define bfd_mach_mips5000 5000
#define _POSIX2_PBS_TRACK (-1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define F_SETSIZE 43
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define bfd_mach_v850e 'E'
#define ut8p_ld(x) ((x)[3]|((x)[2]<<8)|((x)[1]<<16)|((x)[0]<<24))
#define SIGCHLD 20
#define bfd_mach_xc16xl 2
#define PFMT32x "x"
#define bfd_mach_xc16xs 3
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define bfd_mach_msp33 33
#define R2_VERSION_MINOR 5
#define _PC_AUTH_OPAQUE_NP 14
#define __STDC_VERSION__ 201710L
#define CPUMON_MAKE_FATAL 0x1000
#define __SIZEOF_INT__ 4
#define __PTHREAD_SIZE__ 8176
#define _WEXT_OK (1<<18)
#define _PTHREAD_COND_T 
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define XCNEWVAR(T,S) ((T *) xcalloc (1, (S)))
#define _MACHTYPES_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(v) (v ## UL)
#define MAC_OS_X_VERSION_10_12_1 101201
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define bfd_mach_sh 1
#define RUSAGE_SELF 0
#define _POSIX_CLOCK_SELECTION (-1)
#define _SYS_STDIO_H_ 
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define bfd_mach_msp42 42
#define AND ,
#define _POSIX_TRACE_SYS_MAX 8
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define SIGSYS 12
#define bfd_put_signed_64 bfd_put_64
#define SIGSTOP 17
#define PFMT32u "u"
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define _SC_THREAD_CPUTIME 84
#define SA_NOCLDSTOP 0x0008
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define _POSIX2_PBS (-1)
#define SEC_LINK_DUPLICATES_SAME_SIZE 0x100000
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define __DARWIN_LITTLE_ENDIAN 1234
#define bfd_section_already_linked(abfd,sec) BFD_SEND (abfd, _section_already_linked, (abfd, sec))
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _PC_ALLOC_SIZE_MIN 16
#define _IOLBF 1
#define bfd_mach_m6812_default 0
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define __LITTLE_ENDIAN__ 1
#define bfd_copy_private_header_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_header_data, (ibfd, obfd))
#define SSZT_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > SSIZE_MAX - (x))) || (((x) < 0) && (a) < SSIZE_MIN - (x)))
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define PEXECUTE_SEARCH 4
#define L_XTND SEEK_END
#define __BFD_H_SEEN__ 
#define bfd_mach_i386_i386_intel_syntax 3
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define CTI(x,y,z) (*((size_t*)(CTA(x,y,z))))
#define bfd_mach_arm_iWMMXt 12
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define _XOPEN_IOV_MAX 16
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define FAPPEND O_APPEND
#define O_ALERT 0x20000000
#define __FLT32X_DIG__ 15
#define _OFF_T 
#define XNEWVEC(T,N) ((T *) xmalloc (sizeof (T) * (N)))
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define TRUE 1
#define _PC_EXTENDED_SECURITY_NP 13
#define VPARAMS(ARGS) ARGS
#define _POSIX2_PBS_LOCATE (-1)
#define ELF_INFO_TYPE_JUST_SYMS 4
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
#define _PC_REC_MIN_XFER_SIZE 22
#define __PTHREAD_ATTR_SIZE__ 56
#define SEC_SORT_ENTRIES 0x10000
#define __CONSTANT_CFSTRINGS__ 1
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define HAVE_PTRACE 1
#define bfd_get_format(abfd) ((abfd)->format)
#define bfd_get_section_size(ptr) ((ptr)->size)
#define false 0
#define POLL_HUP 6
#define HAS_CLOCK_NANOSLEEP 0
#define _SC_TRACE_SYS_MAX 129
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define _POSIX_NO_TRUNC 200112L
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define RLIMIT_NOFILE 8
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define AT_SYMLINK_NOFOLLOW 0x0020
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define _ANSIDECL_H 1
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define bfd_mach_mcf_isa_b_mac 20
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define _POSIX2_LOCALEDEF 200112L
#define FILENAME_MAX 1024
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define UT16_MAX 0xFFFFU
#define bfd_get_8(abfd,ptr) (*(unsigned char *) (ptr) & 0xff)
#define bfd_get_symbol_leading_char(abfd) ((abfd)->xvec->symbol_leading_char)
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define _SC_XOPEN_ENH_I18N 109
#define LDBLFMT "Lf"
#define UT64_ADD_OVFCHK(x,y) ((UT64_MAX - (x)) < (y))
#define NBBY __DARWIN_NBBY
#define FALSE 0
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define _POSIX_MEMLOCK_RANGE (-1)
#define __STDIO_H_ 
#define S_IEXEC S_IXUSR
#define B0011 3
#define bfd_mach_arc_8 8
#define bfd_mach_arm_4T 6
#define __pic__ 2
#define H_GET_S32 bfd_h_get_signed_32
#define R_SYS_ENDIAN_BIG 2
#define R_MODE_SIMPLEST 0x020
#define bfd_mach_mcf_isa_aplus_emac 15
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define SEC_DEBUGGING 0x2000
#define HAS_LINENO 0x04
#define bfd_mach_arm_5T 8
#define SIGALRM 14
#define __STDC_WANT_LIB_EXT1__ 1
#define _XOPEN_PATH_MAX 1024
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define FP_RND_DOWN 1
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define BSF_GLOBAL 0x02
#define R_NEW0(x) (x*)calloc(1,sizeof(x))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define BFD_JUMP_TABLE_WRITE(NAME) NAME ##_set_arch_mach, NAME ##_set_section_contents
#define xmalloc malloc
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define bfd_mach_sh2a_nofpu_or_sh3_nommu 0x2a2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define bfd_mach_frvsimple 2
#define __FLT64X_MAX_EXP__ 16384
#define _SYS_STAT_H_ 
#define __UINT_FAST64_TYPE__ long long unsigned int
#define bfd_mach_rs6k_rs2 6002
#define FUNC_ATTR_CONST __attribute__((const))
#define WNOWAIT 0x00000020
#define _SC_2_PBS 59
#define R_ABS(x) (((x)<0)?-(x):(x))
#define bfd_mach_m6812s 2
#define __BSD__ 0
#define R2_PREFIX "/usr/local"
#define _RUNETYPE_H_ 
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define bfd_und_section_ptr ((asection *) &bfd_und_section)
#define bfd_mach_rs6k_rs1 6001
#define STDIN_FILENO 0
#define UINT_FAST8_MAX UINT8_MAX
#define bfd_mach_tricore 4
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define w_retcode w_T.w_Retcode
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define _CADDR_T 
#define DT_WHT 14
#define bfd_mach_mips4650 4650
#define R_PTR_ALIGN_NEXT(v,t) ((char *)(((size_t)(v) + (t - 1)) & ~(t - 1)))
#define F_GETNOSIGPIPE 74
#define bfd_mach_rs6k_rsc 6003
#define NL_MSGMAX 32767
#define align_power(addr,align) (((addr) + ((bfd_vma) 1 << (align)) - 1) & ((bfd_vma) -1 << (align)))
#define S_IFCHR 0020000
#define _UINT16_T 
#define _POSIX_ADVISORY_INFO (-1)
#define bfd_section_size(bfd,ptr) ((ptr)->size)
#define __LPBIG_OFFBIG (1)
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _U_INT 
#define LLONG_MAX __LONG_LONG_MAX__
#define F_GETPATH_NOFIRMLINK 102
#define bfd_get_symcount(abfd) ((abfd)->symcount)
#define HAVE_EXPLICIT_BZERO 0
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define R_SYS_TMP "TMPDIR"
#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")
#define _CTYPE_T 0x00100000L
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define O_SHLOCK 0x00000010
#define bfd_merge_sections(abfd,link_info) BFD_SEND (abfd, _bfd_merge_sections, (abfd, link_info))
#define __FLT_MAX_EXP__ 128
#define _CTYPE_U 0x00008000L
#define bfd_make_debug_symbol(abfd,ptr,size) BFD_SEND (abfd, _bfd_make_debug_symbol, (abfd, ptr, size))
#define _SC_AIO_PRIO_DELTA_MAX 44
#define _SC_MONOTONIC_CLOCK 74
#define BFD_DEFAULT_TARGET_SIZE 32
#define R_SYS_OS "darwin"
#define _PTHREAD_MUTEXATTR_T 
#define S_IRGRP 0000040
#define ST32_SUB_OVFCHK(a,b) ST32_ADD_OVFCHK(a,-(b))
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define bfd_mach_mcf_isa_b_nousp 16
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define __LASTBRANCH_MAX 32
#define bfd_mach_m68030 5
#define bfd_mach_sparc_v8plus 4
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define bfd_mach_ppc_860 860
#define _POSIX_TRACE (-1)
#define _POSIX_SEM_VALUE_MAX 32767
#define F_TRANSCODEKEY 75
#define INT_FAST32_MIN INT32_MIN
#define bfd_mach_arm_5 7
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define _POSIX_FSYNC 200112L
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define bfd_get_section_vma(bfd,ptr) ((ptr)->vma + 0)
#define __SSE__ 1
#define bfd_mach_sh2a_or_sh4 0x2a3
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _CTYPE_C 0x00000200L
#define _CTYPE_D 0x00000400L
#define _CTYPE_I 0x00080000L
#define _CTYPE_L 0x00001000L
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define POLL_PRI 5
#define _CTYPE_S 0x00004000L
#define _CTYPE_X 0x00010000L
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define XTENSA_UNDEFINED -1
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _bfd_int64_high(x) ((unsigned long) (((x) >> 32) & 0xffffffff))
#define bfd_get_file_flags(abfd) ((abfd)->flags)
#define H_GET_32 bfd_h_get_32
#define CPF_OVERWRITE 0x0001
#define FPE_FLTINV 5
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define ASCII_MAX 127
#define D_PAGED 0x100
#define _POSIX_MAX_CANON 255
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define B_TOGGLE(x,n) ((x) ^= (1ULL << (n)))
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define bfd_merge_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_merge_private_bfd_data, (ibfd, obfd))
#define SZT_MAX UT64_MAX
#define __WINT_WIDTH__ 32
#define R_IFNULL(x) 
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define EOF (-1)
#define bfd_get_flavour(abfd) ((abfd)->xvec->flavour)
#define __INT_LEAST8_MAX__ 0x7f
#define R2_VERSION_PATCH 4
#define bfd_mach_bfin 1
#define B4(a,b,c,d) ((a<<12)|(b<<8)|(c<<4)|(d))
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define RLIMIT_DATA 2
#define _RUNE_T 
#define LIBC_HAVE_SYSTEM 1
#define bfd_mach_cris_v0_v10 255
#define bfd_set_arch_mach(abfd,arch,mach) BFD_SEND ( abfd, _bfd_set_arch_mach, (abfd, arch, mach))
#define SV_SIGINFO SA_SIGINFO
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define SIGTSTP 18
#define S_IRUSR 0000400
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define __FLT64X_IS_IEC_60559__ 2
#define bfd_section_removed_from_list(ABFD,S) ((S)->next ? (S)->next->prev != (S) : (ABFD)->section_last != (S))
#define bfd_get_output_section(x) ((x)->section->output_section)
#define bfd_big_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_BIG)
#define bfd_ind_section_ptr ((asection *) &bfd_ind_section)
#define R_MIN(x,y) (((x)>(y))?(y):(x))
#define PEX_RECORD_TIMES 0x1
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES (-1)
#define H_GET_S16 bfd_h_get_signed_16
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define RLIMIT_FSIZE 1
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _SC_ATEXIT_MAX 107
#define bfd_mach_mips4111 4111
#define _SC_THREAD_STACK_MIN 93
#define boolt int
#define bfd_mach_m32r2 '2'
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define bfd_mach_sh3_nommu 0x31
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _LP64 1
#define R_NONNULL 
#define SIGEMT 7
#define bfd_mach_sh3_dsp 0x3d
#define __UINT8_C(c) c
#define NAN (0.0f/0.0f)
#define FUNC_ATTR_ALLOC_ALIGN(x) __attribute__((alloc_align(x)))
#define RLIMIT_MEMLOCK 6
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define R_SYS_HOME "HOME"
#define FS "/"
#define IOV_MAX 1024
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define WINT_MIN INT32_MIN
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define EF_IS_SPARSE 0x00000010
#define __API_UNAVAILABLE(...) 
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define bfd_mach_mcf_isa_a_nodiv 9
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define bfd_mach_sh4a_nofpu 0x4b
#define R_PERM_PRIV 16
#define __has_feature(x) 0
#define _POSIX2_LINE_MAX 2048
#define __GNUC_PATCHLEVEL__ 0
#define BSF_WARNING 0x1000
#define S_IWOTH 0000002
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define ASCII_MIN 32
#define F_SETLKW 9
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define H_PUT_8 bfd_h_put_8
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define _SC_IOV_MAX 56
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define _SC_PASS_MAX 131
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define R_SYS_ENDIAN_BI 3
#define UT32_LT0 0x7FFFFFFFU
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define bfd_mach_ip2022 1
#define R_MODE_PRINT 0x000
#define bfd_minisymbol_to_symbol(b,d,m,f) BFD_SEND (b, _minisymbol_to_symbol, (b, d, m, f))
#define bfd_put_signed_8 bfd_put_8
#define _POSIX_MAPPED_FILES 200112L
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 0x00000400
#define CLK_TCK __DARWIN_CLK_TCK
#define PTR void *
#define BITS2BYTES(x) (((x)/8)+(((x)%8)?1:0))
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _SC_LOGIN_NAME_MAX 73
#define OFF_MAX LLONG_MAX
#define SA_RESTART 0x0002
#define bfd_mach_xstormy16 1
#define B10000 16
#define __DTF_READALL 0x0008
#define S_IFWHT 0160000
#define R_NEWCOPY(x,y) (x*)r_new_copy(sizeof(x), y)
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define SF_RESTRICTED 0x00080000
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define _POSIX_CPUTIME (-1)
#define __DARWIN_FD_SETSIZE 1024
#define __TVOS_11_4 110400
#define B10010 18
#define B10011 19
#define S_IWRITE S_IWUSR
#define AT_SYMLINK_FOLLOW 0x0040
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define O_WRONLY 0x0001
#define bfd_mach_arm_2a 2
#define _BSD_SETJMP_H 
#define IOPOL_TYPE_DISK 0
#define COFF_SWAP_TABLE (void *) &bfd_coff_std_swap_table
#define bfd_h_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_64, (ptr))
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define BFD_UND_SECTION_NAME "*UND*"
#define CLD_TRAPPED 4
#define IS_SEPARATOR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r' || (x) == ' '|| (x) == ',' || (x) == ';' || (x) == ':' || (x) == '[' || (x) == ']' || (x) == '(' || (x) == ')' || (x) == '{' || (x) == '}')
#define WAIT_ANY (-1)
#define _SC_CHILD_MAX 2
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define _SC_2_CHAR_TERM 20
#define __GETHOSTUUID_H 
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define bfd_mach_sh_dsp 0x2d
#define __GNUC_STDC_INLINE__ 1
#define ELF_INFO_TYPE_MERGE 2
#define P_tmpdir "/var/tmp/"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define bfd_mach_maxq10 10
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define bfd_put(bits,abfd,val,ptr) ((bits) == 8 ? bfd_put_8 (abfd, val, ptr) : (bits) == 16 ? bfd_put_16 (abfd, val, ptr) : (bits) == 32 ? bfd_put_32 (abfd, val, ptr) : (bits) == 64 ? bfd_put_64 (abfd, val, ptr) : (abort (), (void) 0))
#define XSTRING(s) STRINGX(s)
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define bfd_mach_z8001 1
#define _POSIX_MESSAGE_PASSING (-1)
#define MINSIGSTKSZ 32768
#define _SC_REGEXP 77
#define __TYPES_H_ 
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define w_coredump w_T.w_Coredump
#define _POSIX_MQ_PRIO_MAX 32
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define SEC_LINK_DUPLICATES 0x40000
#define BSF_DEBUGGING_RELOC 0x20000
#define MAX(a,b) (((a)) > ((b)) ? ((a)) : ((b)))
#define bfd_mach_iq10 2
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define _SIZE_T 
#define _POSIX2_VERSION 200112L
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL 1
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _CRMASK (~(_CACHED_RUNES - 1))
#define QUAD_MIN LLONG_MIN
#define UTIME_OMIT -2
#define FOPEN_MAX 20
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _MACH_I386__STRUCTS_H_ 
#define R_PERM_R 4
#define WCOREFLAG 0200
#define SEC_CODE 0x010
#define R_PERM_W 2
#define R_PERM_X 1
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define bfd_com_section_ptr ((asection *) &bfd_com_section)
#define F_ADDSIGS 59
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define stderr __stderrp
#define _USE_FORTIFY_LEVEL 2
#define SZT_ADD_OVFCHK(x,y) ((SIZE_MAX - (x)) < (y))
#define _SC_THREAD_PROCESS_SHARED 90
#define bfd_mach_ppc_ec603e 6031
#define PFMT64d "lld"
#define OFF_MIN LLONG_MIN
#define _SC_REALTIME_SIGNALS 36
#define bfd_mach_fr500 500
#define _FILE_OFFSET_BITS 64
#define bfd_get_dynamic_reloc_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_reloc_upper_bound, (abfd))
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define PEXECUTE_VERBOSE 8
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define bfd_mach_mcf_isa_aplus_mac 14
#define _RLIMIT_POSIX_FLAG 0x1000
#define ST8_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST8_MAX - (x))) || ((x) < 0 && (a) < ST8_MIN - (x)))
#define MONOTONIC_UNIX (MONOTONIC_APPLE || MONOTONIC_LINUX || MONOTONIC_FREEBSD || MONOTONIC_NETBSD)
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define RLIM_NLIMITS 9
#define bfd_mach_mips10000 10000
#define L_SET SEEK_SET
#define R2_VERSION_MAJOR 5
#define bfd_mach_mips_octeon 6501
#define HAVE_EXPLICIT_MEMSET 0
#define bfd_mach_mips12000 12000
#define __UINT32_C(c) c ## U
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define ITIMER_PROF 2
#define bfd_mach_sh2a 0x2a
#define UNSIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { return (a > 0 && b > 0 && a > type_max / b); }
#define BFD_JUMP_TABLE_COPY(NAME) NAME ##_bfd_copy_private_bfd_data, NAME ##_bfd_merge_private_bfd_data, _bfd_generic_init_private_section_data, NAME ##_bfd_copy_private_section_data, NAME ##_bfd_copy_private_symbol_data, NAME ##_bfd_copy_private_header_data, NAME ##_bfd_set_private_flags, NAME ##_bfd_print_private_bfd_data
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define CHARCLASS_NAME_MAX 14
#define __IOS_AVAILABLE(_vers) 
#define bfd_debug_info_start(abfd) BFD_SEND (abfd, _bfd_debug_info_start, (abfd))
#define bfd_mach_msp11 11
#define bfd_mach_msp12 12
#define bfd_mach_msp16 16
#define _POSIX_BARRIERS (-1)
#define _SC_SYNCHRONIZED_IO 40
#define INTMAX_MIN (-INTMAX_MAX-1)
#define PEXECUTE_LAST 2
#define _SC_TRACE_INHERIT 99
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define SF_SYNTHETIC 0xc0000000
#define _STDLIB_H_ 
#define bfd_mach_sh2 0x20
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define F_FINDSIGS 78
#define F_SETPROTECTIONCLASS 64
#define _VA_LIST_T_H 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define HOWTO_PREPARE(relocation,symbol) { if (symbol != NULL) { if (bfd_is_com_section (symbol->section)) { relocation = 0; } else { relocation = symbol->value; } } }
#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED
#define bfd_mach_avr6 6
#define __PIC__ 2
#define _STDINT_H_ 
#define _SIGSET_T 
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define bfd_mach_msp31 31
#define O_NOFOLLOW 0x00000100
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define CHILD_MAX 266
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define bfd_mach_mips5500 5500
#define bfd_mach_mips_octeon2 6502
#define bfd_mach_mips_octeon3 6503
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _INO64_T 
#define HHXFMT "hhx"
#define cut8 const unsigned char
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define printf_vma(x) fprintf_vma(stdout,x)
#define SEGV_NOOP 0
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define bfd_mach_mips_octeonp 6601
#define WITH_GPL 1
#define LONG_BIT 64
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
#define _I386__LIMITS_H_ 
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define XOBFINISH(O,T) ((T) obstack_finish ((O)))
#define INT_FAST64_MAX INT64_MAX
#define INSN_HAS_RELOC (1LL << 31)
#define UINT_LEAST32_MAX UINT32_MAX
#define R_SYS_ARCH "x86"
#define SA_NOCLDWAIT 0x0020
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define S_IWGRP 0000020
#define NL_TEXTMAX 2048
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define BFD_LINKER_CREATED 0x2000
#define SA_NODEFER 0x0010
#define st_birthtime st_birthtimespec.tv_sec
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define _POSIX2_CHAR_TERM 200112L
#define bfd_header_little_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_LITTLE)
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define __SSE2__ 1
#define PROTO(type,name,arglist) type name arglist
#define _SYS_WAIT_H_ 
#define _SC_2_FORT_DEV 21
#define SIGILL 4
#define __API_AVAILABLE_BEGIN(...) 
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define F_GETPROTECTIONLEVEL 77
#define _SC_2_SW_DEV 24
#define _POSIX_PRIORITIZED_IO (-1)
#define ST16_MAX 0x7FFF
#define __SIZEOF_DOUBLE__ 8
#define _POSIX_TRACE_LOG (-1)
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define bfd_mach_arm_3 3
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __DRIVERKIT_20_0 200000
#define bfd_mach_mcf_isa_a_emac 12
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define bfd_mach_z8002 2
#define bfd_mach_ppc_505 505
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define bfd_section_list_remove(ABFD,S) do { asection *_s = S; asection *_next = _s->next; asection *_prev = _s->prev; if (_prev) _prev->next = _next; else (ABFD)->sections = _next; if (_next) _next->prev = _prev; else (ABFD)->section_last = _prev; } while (0)
#define _QUAD_HIGHWORD 1
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define bfd_header_big_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_BIG)
#define SIGIOT SIGABRT
#define _PC_MAX_INPUT 3
#define bfd_mach_mips5900 5900
#define R_SYS_ENDIAN_NONE 0
#define OPCODES_SIGJMP_BUF void*
#define bfd_mach_cpu32 8
#define _V6_LP64_OFF64 __LP64_OFF64
#define IS_HEXCHAR(x) (((x) >= '0' && (x) <= '9') || ((x) >= 'a' && (x) <= 'f') || ((x) >= 'A' && (x) <= 'F'))
#define S_IXGRP 0000010
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define POLL_IN 1
#define __ATOMIC_CONSUME 1
#define bfd_h_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx16, (val, ptr))
#define BSF_KEEP_G 0x40
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define bfd_mach_ia64_elf32 32
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define bfd_mach_v850e1 '1'
#define STRINGX(s) #s
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define HAVE_EPRINTF 1
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define O_POPUP 0x80000000
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)
#define bfd_mach_ip2022ext 2
#define ARRAY_SIZE(a) (sizeof (a) / sizeof ((a)[0]))
#define HAVE_REGEXP 1
#define ILL_PRVOPC 3
#define bfd_is_abs_section(sec) ((sec) == bfd_abs_section_ptr)
#define _RATTR_OK (1<<15)
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define bfd_h_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx32, (val, ptr))
#define __pure2 __attribute__((__const__))
#define __DBL_MAX_10_EXP__ 308
#define R_ARRAY_SIZE(x) (sizeof (x) / sizeof ((x)[0]))
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define bfd_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_putx16, ((val),(ptr)))
#define S_ISUID 0004000
#define R2_GITTAP "5.5.4"
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define SZT_SUB_OVFCHK(a,b) SZT_ADD_OVFCHK(a,-(b))
#define __DARWIN_OS_INLINE static inline
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _T_PTRDIFF_ 
#define F_FLUSH_DATA 40
#define __DARWIN_MAXNAMLEN 255
#define __INT16_C(c) c
#define R2_DATDIR "/usr/local/share"
#define _CTERMID_H_ 
#define LONG_DOUBLE long double
#define F_PATHPKG_CHECK 52
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define _WPERM_OK (1<<20)
#define PFMT64u "llu"
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define _SC_PHYS_PAGES 200
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define _U_SHORT 
#define __STDC__ 1
#define ST16_MIN (-ST16_MAX-1)
#define PARAMS(ARGS) ARGS
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define bfd_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_putx32, ((val),(ptr)))
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define r_ref_init(x) x->R_REF_NAME = 1
#define bfd_mach_hppa20w 25
#define bfd_mach_ia64_elf64 64
#define static_assert _Static_assert
#define __PTRDIFF_TYPE__ long int
#define bfd_h_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx64, (val, ptr))
#define HAVE_SIGACTION 0
#define bfd_mach_mips9000 9000
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define stdin __stdinp
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define OPCODES_SIGSETJMP(buf) nothing()
#define bfd_mach_mrisc2 2
#define _SC_HOST_NAME_MAX 72
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define bfd_get_cacheable(abfd) ((abfd)->cacheable)
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define bfd_section_list_prepend(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->prev = NULL; if (_abfd->sections) { _s->next = _abfd->sections; _abfd->sections->prev = _s; } else { _s->next = NULL; _abfd->section_last = _s; } _abfd->sections = _s; } while (0)
#define PRIO_DARWIN_THREAD 3
#define __WATCHOS_AVAILABLE(_vers) 
#define IS_WHITESPACE(x) ((x) == ' ' || (x) == '\t')
#define F_LOG2PHYS_EXT 65
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define bfd_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_putx64, ((val), (ptr)))
#define X_OK (1<<0)
#define _PTHREAD_KEY_T 
#define ITIMER_REAL 0
#define BFD_RELOC_SPARC_64 BFD_RELOC_64
#define __FLT32X_MIN_10_EXP__ (-307)
#define R_REF_TYPE RRef R_REF_NAME
#define FD_CLOEXEC 1
#define SF_SETTABLE 0x3fff0000
#define CONST_STRNEQ(STR1,STR2) (strncmp ((STR1), (STR2), sizeof (STR2) - 1) == 0)
#define __UINTPTR_TYPE__ long unsigned int
#define bfd_mach_m68010 3
#define bfd_mach_sh2a_or_sh3e 0x2a4
#define HAS_SYMS 0x10
#define bfd_mach_sparc_v9a 8
#define bfd_mach_sparc_v9b 10
#define fprintf_vma(s,x) fprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define F_GETPATH_MTMINFO 71
#define __TVOS_10_0_1 100001
#define PTHREAD_KEYS_MAX 512
#define BFD_IND_SECTION_NAME "*IND*"
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define bfd_mach_arm_iWMMXt2 13
#define __LDBL_MIN_10_EXP__ (-4931)
#define XCONCAT3(a,b,c) CONCAT3(a,b,c)
#define __DTF_ATEND 0x0020
#define _SC_SPAWN 79
#define _PC_REC_INCR_XFER_SIZE 20
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define R_LIB_VERSION(x) R_API const char *x ##_version(void) { return "" R2_GITTAP; }
#define ILL_NOOP 0
#define __DARWIN_CLK_TCK 100
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define INIT_DISASSEMBLE_INFO_NO_ARCH(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define SEC_LINK_DUPLICATES_ONE_ONLY 0x80000
#define UT64_SUB_OVFCHK(a,b) UT64_ADD_OVFCHK(a,-(b))
#define MONOTONIC_FREEBSD (__FreeBSD__ && __FreeBSD_version >= 1101000)
#define CTS(x,y,z,t,v) {t* _=(t*)CTA(x,y,z);*_=v;}
#define XTENSA_ISA_VERSION 7000
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define WORD_BIT 32
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define O_BINARY 0
#define __enum_closed 
#define PRIO_MAX 20
#define __FLT128_DECIMAL_DIG__ 36
#define R2_BIRTH "2022-04-30__12:15:59"
#define IS_PRINTABLE(x) ((x) >=' ' && (x) <= '~')
#define UT16_GT0 0x8000U
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define __FLT32_HAS_QUIET_NAN__ 1
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define va_copy(d,s) __builtin_va_copy(d,s)
#define H_PUT_16 bfd_h_put_16
#define INT_FAST8_MAX INT8_MAX
#define _SC_BC_BASE_MAX 9
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define DTF_NODUP 0x0002
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define _SC_BC_DIM_MAX 10
#define bfd_init_private_section_data(ibfd,isec,obfd,osec,link_info) BFD_SEND (obfd, _bfd_init_private_section_data, (ibfd, isec, obfd, osec, link_info))
#define bfd_put_8(abfd,val,ptr) ((void) (*((unsigned char *) (ptr)) = (val) & 0xff))
#define R_PERM_RWX (R_PERM_R|R_PERM_W|R_PERM_X)
#define PATH_MAX 1024
#define S_IFSOCK 0140000
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define B10100 20
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define BC_BASE_MAX 99
#define MB_LEN_MAX 6
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define _MACH_MACHINE__STRUCTS_H_ 
#define SIG_IGN (void (*)(int))1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define SEC_KEEP 0x400000
#define H_PUT_32 bfd_h_put_32
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define UF_APPEND 0x00000004
#define _GNU_SOURCE 
#define _POSIX_SAVED_IDS 200112L
#define _U_INT16_T 
#define UT64_32U 0xFFFFFFFF00000000ULL
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define __P(protos) protos
#define F_CHKCLEAN 41
#define F_PUNCHHOLE 99
#define ut32 unsigned int
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define OPCODES_SIGLONGJMP(buf,val) nothing()
#define FP_PREC_53B 2
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define S_IFIFO 0010000
#define __ATOMIC_RELEASE 3
#define _NLINK_T 
#define FPE_FLTUND 3
#define bfd_asymbol_value(x) (bfd_asymbol_base(x) + (x)->value)
#define CPF_IGNORE_MODE 0x0002
