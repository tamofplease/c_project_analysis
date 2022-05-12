#define sa_sigaction __sigaction_u.__sa_sigaction
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HAVE_PTY __UNIX__ && LIBC_HAVE_FORK && !__sun
#define EMULTIHOP 95
#define ut64 unsigned long long
#define ut8p_ld(x) ((x)[3]|((x)[2]<<8)|((x)[1]<<16)|((x)[0]<<24))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define pseudo_AF_HDRCMPLT 35
#define bfd_mach_sparc_v9 7
#define bfd_mach_rs6k 6000
#define PF_RESERVED_36 AF_RESERVED_36
#define PRIO_MIN -20
#define __UINT_LEAST16_MAX__ 0xffff
#define _PTHREAD_IMPL_H_ 
#define __DBL_DECIMAL_DIG__ 17
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define Color_BBGCYAN "\x1b[106m"
#define _POSIX2_SW_DEV 200112L
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define ST64_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST64_MAX - (x))) || (((x) < 0) && (a) < ST64_MIN - (x)))
#define TAG_T61STRING 0x14
#define RE_DUP_MAX 255
#define _SC_NGROUPS_MAX 4
#define bfd_link_add_symbols(abfd,info) BFD_SEND (abfd, _bfd_link_add_symbols, (abfd, info))
#define __GNUC_VA_LIST 
#define RColor_BLACK RCOLOR(ALPHA_FG, 12, 12, 12, 0x00, 0x00, 0x00, 0)
#define _SIGSET_T 
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _SC_SPIN_LOCKS 80
#define MSG_HOLD 0x800
#define INIT_DISASSEMBLE_INFO(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))
#define SEC_GROUP 0x4000000
#define _WATTR_OK (1<<16)
#define _SC_IPV6 118
#define bfd_mach_mips16000 16000
#define R_BIG_FORMAT_STR_LEN 9
#define _SC_XOPEN_REALTIME 111
#define bfd_mach_cr16c 1
#define R_NONNULL 
#define _SYS_QOS_H 
#define ATTRIBUTE_HOT __attribute__ ((__hot__))
#define R_REGEX_ERANGE 11
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define ELF_INFO_TYPE_EH_FRAME 3
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define RUNE_CORNER_TL "┌"
#define PRIuPTR "lu"
#define _SC_EXPR_NEST_MAX 14
#define bfd_mach_r800 11
#define PENDIN 0x20000000
#define NL_NMAX 1
#define HAVE_LIBUV 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define _CS_DARWIN_USER_DIR 65536
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define r_rbtree_iter_has(it) ((it)->len)
#define UNSIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { (void)(a); return !b; }
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define HAVE_JEMALLOC 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define IMAXBEL 0x00002000
#define bfd_mach_arc_5 5
#define bfd_mach_arc_6 6
#define bfd_mach_arc_8 8
#define XTENSA_OPERAND_IS_UNKNOWN 0x00000008
#define _XOPEN_CRYPT (1)
#define ENOTSOCK 38
#define _TIME_H_ 
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define EWOULDBLOCK EAGAIN
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define SIGTTIN 21
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define SYM_CAT_H 
#define FF1 0x00004000
#define _SC_COLL_WEIGHTS_MAX 13
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define CREAD 0x00000800
#define EDESTADDRREQ 39
#define r_vector_lower_bound(vec,x,i,cmp) do { size_t h = (vec)->len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp (x, ((char *)(vec)->a + (vec)->elem_size * m))) > 0) { i = m + 1; } else { h = m; } } } while (0)
#define _SC_XBS5_ILP32_OFF32 122
#define BFD_ABS_SECTION_NAME "*ABS*"
#define PIPE_BUF 512
#define R_BIT_TOGGLE(x,y) ( R_BIT_CHK (x, y) ? R_BIT_UNSET (x, y): R_BIT_SET (x, y))
#define bfd_mach_sparc_sparclite_le 6
#define NET_RT_TRASH 5
#define R_MODE_RADARE 0x001
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define ATTRIBUTE_FPTR_PRINTF(m,n) ATTRIBUTE_PRINTF(m, n)
#define SF_SYNTHETIC 0xc0000000
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define B10100 20
#define va_start(v,l) __builtin_va_start(v,l)
#define PRIiLEAST8 PRIi8
#define SOCK_RDM 4
#define IOC_VOID (__uint32_t)0x20000000
#define __INT32_C(c) c
#define RLIM_NLIMITS 9
#define _PTHREAD_CONDATTR_T 
#define bfd_mach_ppc64 64
#define PF_DECnet AF_DECnet
#define MINSIGSTKSZ 32768
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define HAVE_LIB_SSL 0
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define R_JOIN_2_PATHS(p1,p2) p1 R_SYS_DIR p2
#define R_PROTOBUF_H 
#define EXTB 38400
#define __DARWIN_PDP_ENDIAN 3412
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define CLASS_PRIVATE 0xC0
#define bfd_mach_h8300h 2
#define bfd_mach_h8300s 3
#define r_vector_enumerate(vec,it,i) if (!r_vector_empty (vec)) for (it = (void *)(vec)->a, i = 0; i < (vec)->len; it = (void *)((char *)it + (vec)->elem_size), i++)
#define Color_BBGGREEN "\x1b[102m"
#define bfd_mach_ppc_e500mc 5001
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define RColor_BGBLACK RCOLOR(ALPHA_BG, 12, 12, 12, 0x00, 0x00, 0x00, 0)
#define UT32_MIN 0U
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define TIOCSBRK _IO('t', 123)
#define __PIC__ 2
#define __IOS_PROHIBITED 
#define TIOCM_RNG 0200
#define B19200 19200
#define TTYDEF_IFLAG (BRKINT | ICRNL | IMAXBEL | IXON | IXANY)
#define _SC_SPORADIC_SERVER 81
#define _ASSERT_H_ 
#define bfd_canonicalize_dynamic_symtab(abfd,asymbols) BFD_SEND (abfd, _bfd_canonicalize_dynamic_symtab, (abfd, asymbols))
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __DARWIN_WCTYPE_TOP_inline __header_inline
#define R_TH_LOCK_T pthread_mutex_t
#define R_NEW(x) (x*)malloc(sizeof(x))
#define AF_SYSTEM 32
#define SEC_LOAD 0x002
#define ut8p_bd(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24))
#define _SC_THREAD_PRIO_INHERIT 87
#define ut8p_bq(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24)|((x)[4]<<32)|((x)[5]<<40)|((x)[6]<<48)|((x)[7]<<56))
#define TAG_UTCTIME 0x17
#define ut8p_bw(x) ((x)[0]|((x)[1]<<8))
#define SEC_IS_COMMON 0x1000
#define _SC_PHYS_PAGES 200
#define _XOPEN_VERSION 600
#define r_vector_foreach(vec,it) if (!r_vector_empty (vec)) for (it = (void *)(vec)->a; (char *)it != (char *)(vec)->a + ((vec)->len * (vec)->elem_size); it = (void *)((char *)it + (vec)->elem_size))
#define r_vector_upper_bound(vec,x,i,cmp) do { size_t h = (vec)->len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp (x, ((char *)(vec)->a + (vec)->elem_size * m))) < 0) { h = m; } else { i = m + 1; } } } while (0)
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define _LIMITS_H_ 
#define R_LINE_BUFSIZE 4096
#define SDB_OPTION_SYNC (1 << 0)
#define SEC_THREAD_LOCAL 0x400
#define _CTYPE_SWM 0xe0000000L
#define _CTYPE_SWS 30
#define w_termsig w_T.w_Termsig
#define __ILP32_OFF32 (-1)
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")
#define BFD_SEND_FMT(bfd,message,arglist) (((bfd)->xvec->message[(int) ((bfd)->format)]) arglist)
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define SEC_TIC54X_BLOCK 0x40000000
#define EQUIV_CLASS_MAX 2
#define ASCTIME_BUF_MINLEN (26)
#define IGNBRK 0x00000001
#define PTHREAD_PROCESS_SHARED 1
#define SIGPROF 27
#define R_BORROW 
#define r_return_if_fail(expr) do { if (!(expr)) { H_LOG_ (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", R_FUNCTION, #expr, __LINE__); return; } } while (0)
#define bool _Bool
#define _SC_CPUTIME 68
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define ls_foreach_safe(list,it,tmp,pos) if ((list)) for (it = list->head; it && (pos = it->data) && ((tmp = it->n) || 1); it = tmp)
#define __DBL_MIN_10_EXP__ (-307)
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define bfd_mach_msp32 32
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define PRIi32 "i"
#define __cold __attribute__((__cold__))
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")
#define _SC_MEMLOCK_RANGE 31
#define S_IRGRP 0000040
#define r_sys_breakpoint() __builtin_trap()
#define DIRSEP '/'
#define pseudo_AF_KEY 29
#define KEV_DL_SIFMTU 3
#define SDB_OPTION_NOSTAMP (1 << 1)
#define bfd_mach_i386_i8086 2
#define INLCR 0x00000040
#define TTYDEF_LFLAG (ECHO | ICANON | ISIG | IEXTEN | ECHOE|ECHOKE|ECHOCTL)
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID 0002000
#define R_SELWIDGET_MAXH 15
#define S_IFBLK 0060000
#define B1110 14
#define bfd_mach_ppc 32
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define bfd_mach_mips16 16
#define F_NODIRECT 62
#define B1111 15
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define cut8 const unsigned char
#define F_RDADVISE 44
#define SEC_LINK_DUPLICATES_DISCARD 0x0
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define PATH_MAX 1024
#define BUFFER_INSIZE 8192
#define r_flist_foreach(it,pos) r_flist_rewind(it); while (r_flist_next (it) && (pos = r_flist_get (it)))
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define r_return_val_if_reached(val) do { H_LOG_ (R_LOGLVL_ERROR, "file %s: line %d (%s): should not be reached\n", __FILE__, __LINE__, R_FUNCTION); return (val); } while (0)
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define R_TIME_PROFILE_BEGIN do{}while(0)
#define SCNdLEAST8 SCNd8
#define R_LOG(lvl,tag,fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, lvl, tag, fmtstr, ##__VA_ARGS__);
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define ENOMEM 12
#define ut8p_lq(x) ((x)[7]|((x)[6]<<8)|((x)[5]<<16)|((x)[4]<<24)|((x)[3]<<32)|((x)[2]<<40)|((x)[1]<<48)|((x)[0]<<56))
#define ut8p_lw(x) ((x)[1]|((x)[0]<<8))
#define __pic__ 2
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define B10101 21
#define R_STR_DUP(x) ((x) ? strdup ((x)) : NULL)
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define _SYS_TTYCOM_H_ 
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define NOKERNINFO 0x02000000
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define r_oflist_free(x) r_oflist_deserialize (x), r_list_free (x)
#define HAVE_CAPSICUM 0
#define IUTF8 0x00004000
#define _ERRNO_T 
#define B10110 22
#define F_GETFL 3
#define R_PTR_ALIGN(v,t) ((char *)(((size_t)(v) ) & ~(t - 1)))
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define R_VERSION_H 1
#define KEV_DL_SIFMEDIA 5
#define __deprecated_enum_msg(_msg) 
#define RUNE_ARROW_RIGHT ">"
#define R_SYS_ENDIAN_LITTLE 1
#define R_CONS_GET_CURSOR_POSITION "\x1b[6n"
#define TIOCSETD _IOW('t', 27, int)
#define bfd_section_name(bfd,ptr) ((ptr)->name)
#define R_LOG_SILLY(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_SILLY, NULL, fmtstr, ##__VA_ARGS__);
#define MSG_PEEK 0x2
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define S_IXOTH 0000001
#define R2_SKIP_LIST_H 
#define ECHOCTL 0x00000040
#define _PTHREAD_MUTEX_T 
#define VWERASE 4
#define HAS_LINENO 0x04
#define ATTRIBUTE_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n))) ATTRIBUTE_NONNULL(m)
#define B10111 23
#define TIOCIXOFF _IO('t', 128)
#define _POSIX2_UPE 200112L
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define AF_COIP 20
#define SSZT_SUB_OVFCHK(a,b) SSZT_ADD_OVFCHK(a,-(b))
#define SCNd16 "hd"
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define SEC_NO_FLAGS 0x000
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define NETSVC_MRKNG_LVL_L2 1
#define FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define _SC_SYMLOOP_MAX 120
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define R_REGEX_EMPTY 14
#define R_REGEX_ILLSEQ 17
#define TODO(x) eprintf(__func__"  " x)
#define SCNd32 "d"
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define UT16_MAX 0xFFFFU
#define _DELETE_OK (1<<12)
#define R_CONS_GREP_WORDS 10
#define PRIO_USER 2
#define CHECK_INTERFACE_OPERAND(INTISA,OPC,ICLASS,IFOP,ERRVAL) do { if ((IFOP) < 0 || (IFOP) >= (ICLASS)->num_interfaceOperands) { xtisa_errno = xtensa_isa_bad_operand; sprintf (xtisa_error_msg, "invalid interface operand number (%d); " "opcode \"%s\" has %d interface operands", (IFOP), (INTISA)->opcodes[(OPC)].name, (ICLASS)->num_interfaceOperands); return (ERRVAL); } } while (0)
#define SIOCSHIWAT _IOW('s', 0, int)
#define DECLARE_GENERIC_PRINT_ADDRESS_FUNC() static void generic_print_address_func(bfd_vma address, struct disassemble_info *info) { if (!buf_global) { return; } r_strbuf_appendf (buf_global, "0x%08"PFMT64x, (ut64)address); }
#define IOPOL_APPLICATION IOPOL_STANDARD
#define _SC_THREAD_PRIO_PROTECT 88
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define _QUAD_LOWWORD 0
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define TIOCEXCL _IO('t', 13)
#define B0001 1
#define F_BARRIERFSYNC 85
#define R_PERM_RW (R_PERM_R|R_PERM_W)
#define R_PERM_RX (R_PERM_R|R_PERM_X)
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define SDB_OPTION_ALL 0xff
#define __PTHREAD_MUTEX_SIZE__ 56
#define B0010 2
#define B0011 3
#define R_MIN_DEFINED 
#define CEOF CTRL('d')
#define R_MALLOC_GLOBAL 0
#define SCNd64 __SCN_64_LENGTH_MODIFIER__ "d"
#define _POSIX_PIPE_BUF 512
#define __I386_MCONTEXT_H_ 
#define bfd_is_local_label_name(abfd,name) BFD_SEND (abfd, _bfd_is_local_label_name, (abfd, name))
#define SIGUSR1 30
#define RLIMIT_DATA 2
#define __TVOS_9_0 90000
#define USE_MONOTONIC_CLOCK 0
#define R_ASN1_H 
#define SCNuLEAST16 SCNu16
#define __TVOS_9_2 90200
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define UT8_MAX 0xFFU
#define R_REGEX_EXTENDED 0001
#define __FLT128_MIN_EXP__ (-16381)
#define RUNECODE_CURVE_CORNER_BL 0xd5
#define RUNECODE_CURVE_CORNER_BR 0xd4
#define IOPOL_PASSIVE 2
#define VEOF 0
#define VEOL 1
#define VERASE 3
#define WUNTRACED 0x00000002
#define TAG_REAL 0x09
#define NZERO 20
#define bfd_mach_i960_core 1
#define UINT16_C(v) (v)
#define XTENSA_OPERAND_IS_INVISIBLE 0x00000004
#define bfd_mach_msp41 41
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define SO_SNDTIMEO 0x1005
#define bfd_mach_h8300hn 4
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_CTYPE_inline __header_inline
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define R_PERM_WX (R_PERM_W|R_PERM_X)
#define ls_iter_cur(x) x->p
#define AF_LAT 14
#define bfd_mach_mips7000 7000
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define IS_WHITECHAR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r')
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define AF_ECMA 8
#define NFDBITS __DARWIN_NFDBITS
#define __FLT32X_HAS_QUIET_NAN__ 1
#define KEV_INET6_CHANGED_ADDR 2
#define H_GET_S64 bfd_h_get_signed_64
#define __SERR 0x0040
#define R_SYS_BITS (R_SYS_BITS_32 | R_SYS_BITS_64)
#define __INT64_C(c) c ## LL
#define SCNuLEAST64 SCNu64
#define SA_SIGINFO 0x0040
#define R_REGEX_ITOA 0400
#define r_skiplist_length(list) (list->size)
#define bfd_mach_i960_ka_sa 2
#define SO_LINGER 0x0080
#define EQFULL 106
#define CONS_MAX_USER 102400
#define __MAC_11_3 110300
#define R_CONS_CURSOR_DOWN "\x1b[B"
#define TIOCSTART _IO('t', 110)
#define TIOCPTYUNLK _IO('t', 82)
#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define PF_LAT AF_LAT
#define BFD_NO_MORE_SYMBOLS ((symindex) ~0)
#define MSG_NEEDSA 0x10000
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define _SC_THREAD_THREADS_MAX 94
#define SI_USER 0x10001
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define _SC_2_UPE 25
#define bfd_get_cacheable(abfd) ((abfd)->cacheable)
#define S_IRWXU 0000700
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define VSTATUS 18
#define Color_BGWHITE "\x1b[47m"
#define Color_BLUE "\x1b[34m"
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define bfd_mach_ppc_602 602
#define bfd_mach_ppc_603 603
#define bfd_mach_ppc_604 604
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define PF_VLAN ((uint32_t)0x766c616e)
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define bfd_mach_mips4400 4400
#define S_IFMT 0170000
#define ALTWERASE 0x00000200
#define B11000 24
#define B11001 25
#define CHECK_ALLOC_FOR_INIT(MEM,ERRVAL,ERRNO_P,ERROR_MSG_P) do { if ((MEM) == 0) { xtisa_errno = xtensa_isa_out_of_memory; strcpy (xtisa_error_msg, "out of memory"); if (ERRNO_P) *(ERRNO_P) = xtisa_errno; if (ERROR_MSG_P) *(ERROR_MSG_P) = xtisa_error_msg; return (ERRVAL); } } while (0)
#define SCNdFAST8 SCNd8
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define Color_RESET_TERMINAL "\x1b" "c\x1b(K\x1b[0m\x1b[J\x1b[?25h"
#define SCNd8 __PRI_8_LENGTH_MODIFIER__ "d"
#define PRIuFAST16 PRIu16
#define _SC_VERSION 8
#define R_NSEC_PER_SEC 1000000000ULL
#define H_PUT_S32 bfd_h_put_signed_32
#define PRIuLEAST16 PRIu16
#define B11010 26
#define B11011 27
#define __USER_LABEL_PREFIX__ _
#define bfd_mach_ppc_620 620
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define UT32_ALIGN(x) (x + (x - (x % sizeof (ut32))))
#define bfd_mach_arm_3 3
#define ENEEDAUTH 81
#define SCNx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define RUNECODE_CURVE_CORNER_TR 0xd3
#define bfd_is_group_section(abfd,sec) BFD_SEND (abfd, _bfd_is_group_section, (abfd, sec))
#define bfd_mach_ppc_630 630
#define BSF_OBJECT 0x10000
#define PTHREAD_CANCEL_DEFERRED 0x02
#define CREPRINT CTRL('r')
#define WCONTINUED 0x00000010
#define __FLT32_IS_IEC_60559__ 2
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define ILL_ILLOPC 1
#define DISASSEMBLE_DATA (1LL << 30)
#define NAN (0.0f/0.0f)
#define bfd_mach_h8300sn 5
#define bfd_mach_cris_v10_v32 1032
#define BFD_NO_FLAGS 0x00
#define bfd_mach_h8300sx 6
#define __LDBL_HAS_INFINITY__ 1
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define PRIi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define CONS_BUFSZ 0x4f00
#define USE_LIB_MAGIC 0
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define R_SYS_ARCH "x86"
#define _UINT8_T 
#define ATTRIBUTE_COLD __attribute__ ((__cold__))
#define r_pvector_foreach_prev(vec,it) for (it = ((vec)->v.len == 0 ? NULL : (void **)(vec)->v.a + (vec)->v.len - 1); it != NULL && it != (void **)(vec)->v.a - 1; it--)
#define __MAC_10_5 1050
#define Color_BBGBLUE "\x1b[104m"
#define IS_WHITESPACE(x) ((x) == ' ' || (x) == '\t')
#define __INT_FAST16_TYPE__ short int
#define _SYS_RESOURCE_H_ 
#define bfd_asymbol_name(x) ((x)->name)
#define bfd_h_get_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx32, (ptr))
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define SF_RESTRICTED 0x00080000
#define _SYS__ENDIAN_H_ 
#define HAVE_SYSTEM 1
#define __FLT32_DIG__ 6
#define OPOST 0x00000001
#define _SC_TRACE_EVENT_FILTER 98
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define r_sys_mkdir_failed() (errno != EEXIST)
#define _POSIX_TRACE_SYS_MAX 8
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define R_HIDDEN __attribute__((visibility("hidden")))
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define RUNECODE_LINE_UP 0xd1
#define R_POOL_H 
#define RUNECODE_CURVE_CORNER_TL 0xd2
#define SO_BROADCAST 0x0020
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define PRIu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define R_SYS_ENDIAN 0
#define bfd_mach_h8300sxn 7
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define F_SETBACKINGSTORE 70
#define MONOTONIC_APPLE (__APPLE__ && CLOCK_MONOTONIC_RAW)
#define SIGIO 23
#define KEV_DL_PROTO_DETACHED 15
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_AVAILABLE_GET_MACRO(...) 
#define r_warn_if_reached() do { r_assert_log (R_LOGLVL_WARN, "(%s:%d):%s%s code should not be reached\n", __FILE__, __LINE__, R_FUNCTION, R_FUNCTION[0] ? ":" : ""); } while (0)
#define r_oflist_delete(x,y) r_oflist_deserialize (x), r_list_delete (x, y)
#define __IPHONE_13_4 130400
#define bfd_mach_v850e1 '1'
#define SYNC_VOLUME_FULLSYNC 0x01
#define EF_NO_XATTRS 0x00000002
#define _POSIX_NAME_MAX 14
#define FIOSETOWN _IOW('f', 124, int)
#define R2_LIST_H 
#define r_rbtree_iter_while_prev(it,data,struc,rb) for (; r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_prev (&(it)))
#define TIOCNXCL _IO('t', 14)
#define R_UTF8_LEFT_POINTING_MAGNIFYING_GLASS "🔍"
#define AT_SYMLINK_FOLLOW 0x0040
#define AF_CNT 21
#define st_ctime st_ctimespec.tv_sec
#define XTENSA_OPCODE_IS_BRANCH 0x00000001
#define _ALLOCA_H_ 
#define BSF_KEEP 0x20
#define R2_FLIST_H 
#define R_BIT_CHK(x,y) (*(x) & (1<<(y)))
#define RUNECODESTR_LINE_HORIZ "\xce"
#define FORM_CONSTRUCTED 0x20
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define SO_WANTOOBFLAG 0x8000
#define KEV_INET_SUBCLASS 1
#define _SC_MEMLOCK 30
#define __FLT32X_HAS_INFINITY__ 1
#define SO_ACCEPTCONN 0x0002
#define RBitword ut64
#define __INT32_MAX__ 0x7fffffff
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define SIG_DFL (void (*)(int))0
#define UINT_LEAST32_MAX UINT32_MAX
#define NL2 0x00000200
#define NL3 0x00000300
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define __SIZE_WIDTH__ 64
#define S_ISVTX 0001000
#define SIGEV_NONE 0
#define SO_TYPE 0x1008
#define R_PERM_SHAR 8
#define SCM_RIGHTS 0x01
#define VEOL2 2
#define __signed signed
#define ECHOKE 0x00000001
#define ru_first ru_ixrss
#define bfd_count_sections(abfd) ((abfd)->section_count)
#define w_retcode w_T.w_Retcode
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define RBTREE_H 
#define __DECIMAL_DIG__ 21
#define LOCK_EX 0x02
#define SOCK_STREAM 1
#define ECHOPRT 0x00000020
#define _BLKSIZE_T 
#define F_DUPFD 0
#define TCIFLUSH 1
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define FPE_INTDIV 7
#define SCNuLEAST8 SCNu8
#define BFD_JUMP_TABLE_DYNAMIC(NAME) NAME ##_get_dynamic_symtab_upper_bound, NAME ##_canonicalize_dynamic_symtab, NAME ##_get_synthetic_symtab, NAME ##_get_dynamic_reloc_upper_bound, NAME ##_canonicalize_dynamic_reloc
#define bfd_mach_arm_ep9312 11
#define MAX_INPUT 1024
#define _CTYPE_G 0x00000800L
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define bfd_relax_section(abfd,section,link_info,again) BFD_SEND (abfd, _bfd_relax_section, (abfd, section, link_info, again))
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define ESTALE 70
#define FP_PREC_64B 3
#define _SC_2_SW_DEV 24
#define _SYS_ERRNO_H_ 
#define _SYS_FILIO_H_ 
#define _PC_FILESIZEBITS 18
#define HAVE_REGEXP 1
#define r_interval_tree_foreach_prev(tree,it,dat) if ((tree)->root) for ((it) = r_rbtree_last (&(tree)->root->node); r_rbtree_iter_has (&it) && (dat = r_rbtree_iter_get (&it, RIntervalNode, node)->data); r_rbtree_iter_prev (&(it)))
#define _WPERM_OK (1<<20)
#define SHUT_RDWR 2
#define KEV_DL_IF_DETACHING 10
#define TAG_INTEGER 0x02
#define _POSIX_LOGIN_NAME_MAX 9
#define PTRDIFF_MAX INTMAX_MAX
#define NET_SERVICE_TYPE_BE 0
#define __UINT_LEAST16_TYPE__ short unsigned int
#define FNDELAY O_NONBLOCK
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define H_GET_16 bfd_h_get_16
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define TIOCPKT_DOSTOP 0x20
#define WITH_GPL 1
#define __DARWIN_MAXNAMLEN 255
#define ROFList_Parent RList
#define bfd_mach_i386_i386 1
#define EAUTH 80
#define __va_list__ 
#define bfd_mach_sparc_64bit_p(mach) ((mach) >= bfd_mach_sparc_v9 && (mach) != bfd_mach_sparc_v8plusb)
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define Color_BGDELETE "\x1b[48;5;52m"
#define _POSIX_NO_TRUNC 200112L
#define bfd_get_dynamic_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_symtab_upper_bound, (abfd))
#define MAC_OS_X_VERSION_10_11_4 101104
#define R_MODE_JSON 0x008
#define AF_RESERVED_36 36
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define NOARGS void
#define bfd_h_put_signed_64 bfd_h_put_64
#define IEXTEN 0x00000400
#define L_tmpnam 1024
#define __DYNAMIC__ 1
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define F_SPECULATIVE_READ 101
#define PRIoLEAST16 PRIo16
#define __MMX__ 1
#define R_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define bfd_mach_sh4_nofpu 0x41
#define TAB0 0x00000000
#define TAB1 0x00000400
#define TAB2 0x00000800
#define bfd_link_split_section(abfd,sec) BFD_SEND (abfd, _bfd_link_split_section, (abfd, sec))
#define RUNE_LONG_LINE_HORIZ "―"
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define R_REGEX_STARTEND 00004
#define __SAPP 0x0100
#define SO_LINGER_SEC 0x1080
#define PRIoLEAST32 PRIo32
#define fileno_unlocked(p) __sfileno(p)
#define H_GET_64 bfd_h_get_64
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define IOC_OUT (__uint32_t)0x40000000
#define PRIdLEAST16 PRId16
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define _MCONTEXT_T 
#define PTRDIFF_MIN INTMAX_MIN
#define bfd_mach_sparc_v9_p(mach) ((mach) >= bfd_mach_sparc_v8plus && (mach) <= bfd_mach_sparc_v9b && (mach) != bfd_mach_sparc_sparclite_le)
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define TIOCCBRK _IO('t', 122)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define STDERR_FILENO 2
#define __DARWIN_ONLY_VERS_1050 0
#define __sfileno(p) ((p)->_file)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define R_BIG_SSCANF_FORMAT_STR "%8x"
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define BSF_NO_FLAGS 0x00
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define PRIdLEAST32 PRId32
#define PRIoLEAST64 PRIo64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define CR2 0x00002000
#define __pure 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define WTERMSIG(x) (_WSTATUS(x))
#define CR3 0x00003000
#define TIOCMBIC _IOW('t', 107, int)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define bfd_get_synthetic_symtab(abfd,count,syms,dyncount,dynsyms,ret) BFD_SEND (abfd, _bfd_get_synthetic_symtab, (abfd, count, syms, dyncount, dynsyms, ret))
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define r_str_array(x,y) ((y>=0 && y<(sizeof(x)/sizeof(*x)))?x[y]:"")
#define LINE_CROSS 1
#define FIONCLEX _IO('f', 2)
#define __FLT32_HAS_INFINITY__ 1
#define AF_SIP 24
#define EXIT_SUCCESS 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define PRIiFAST16 PRIi16
#define SI_QUEUE 0x10002
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define MACRO_WEAK_SYM __attribute__ ((weak))
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define bfd_mach_fr300 300
#define __INT_FAST32_MAX__ 0x7fffffff
#define __LDBL_HAS_DENORM__ 1
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define SIOCGETVLAN SIOCGIFVLAN
#define __MAC_10_15_1 101501
#define RUNECODESTR_LINE_VERT "\xc8"
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define PRIdLEAST64 PRId64
#define _RLIMIT_POSIX_FLAG 0x1000
#define B200 200
#define _PC_CHOWN_RESTRICTED 7
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _SC_SIGQUEUE_MAX 51
#define PRId8 __PRI_8_LENGTH_MODIFIER__ "d"
#define VMIN 16
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define bfd_h_put_signed_16 bfd_h_put_16
#define PRIiFAST32 PRIi32
#define TIOCMGET _IOR('t', 106, int)
#define LOCK_UN 0x08
#define w_stopsig w_S.w_Stopsig
#define __TERMIOS_H__ 
#define bfd_gc_sections(abfd,link_info) BFD_SEND (abfd, _bfd_gc_sections, (abfd, link_info))
#define r_list_iter_cur(x) (x)->p
#define NL_LANGMAX 14
#define R_CONS_CLEAR_FROM_CURSOR_TO_END "\x1b[0J\r"
#define _SC_2_VERSION 17
#define __IPHONE_3_0 30000
#define R_NUM_H 
#define _WSTOPPED 0177
#define _INT16_T 
#define bfd_h_put_signed_32 bfd_h_put_32
#define EDEADLK 11
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define EPIPE 32
#define bfd_mach_xtensa 1
#define bfd_valid_reloc_types(abfd) ((abfd)->xvec->valid_reloc_types)
#define sprintf_vma(s,x) sprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define FP_STATE_BYTES 512
#define PTRCONST void *const
#define R_LOG_INFO(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_INFO, NULL, fmtstr, ##__VA_ARGS__);
#define LONG_MIN (-LONG_MAX - 1L)
#define R_CONS_CURSOR_RESTORE "\x1b[u"
#define PRIiFAST64 PRIi64
#define PF_ISO AF_ISO
#define TERMUX_PREFIX "/data/data/com.termux/files/usr"
#define CDB_H 
#define SOCK_MAXADDRLEN 255
#define ASN1_OID_LEN 64
#define HAVE_ARC4RANDOM_UNIFORM 0
#define _RUNE_MAGIC_A "RuneMagA"
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define TCOON 2
#define R_MODE_ARRAY 0x010
#define EXDEV 18
#define bfd_asymbol_bfd(x) ((x)->the_bfd)
#define R_MEM_ALIGN(x) ((void *)(size_t)(((ut64)(size_t)x) & 0xfffffffffffff000LL))
#define ATTRIBUTE_PACKED __attribute__ ((packed))
#define HALF_BFD_SIZE_TYPE (((bfd_size_type) 1) << (8 * sizeof (bfd_size_type) / 2))
#define _PC_MIN_HOLE_SIZE 27
#define SEC_LINK_ONCE 0x20000
#define r_oflist_deserialize(x) free (x->array - 1), x->array = 0
#define EBADMSG 94
#define __DARWIN_SUF_NON_CANCELABLE 
#define bfd_mach_ppc_7400 7400
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define SO_WANTMORE 0x4000
#define SCNiLEAST16 SCNi16
#define bfd_mach_m16c 0x75
#define BFD_IN_MEMORY 0x800
#define _STRUCT_TIMEVAL struct timeval
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define SCNoLEAST64 SCNo64
#define bfd_section_list_remove(ABFD,S) do { asection *_s = S; asection *_next = _s->next; asection *_prev = _s->prev; if (_prev) _prev->next = _next; else (ABFD)->sections = _next; if (_next) _next->prev = _prev; else (ABFD)->section_last = _prev; } while (0)
#define SIGSTKSZ 131072
#define _SYS_WAIT_H_ 
#define S_IFCHR 0020000
#define SCNiLEAST32 SCNi32
#define _SC_XOPEN_CRYPT 108
#define __weak 
#define _DEV_T 
#define R_TH_COND_T pthread_cond_t
#define __abortlike __dead2 __cold __not_tail_called
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define R2_TH_H 
#define __DBL_MAX_EXP__ 1024
#define r_return_val_if_fail(expr,val) do { if (!(expr)) { H_LOG_ (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", R_FUNCTION, #expr, __LINE__); return (val); } } while (0)
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define INLINE __inline__
#define KEV_INET6_NEW_LL_ADDR 4
#define R_REF_NAME refcount
#define RUNECODE_LINE_VERT 0xc8
#define bfd_get_section_flags(bfd,ptr) ((ptr)->flags + 0)
#define AF_DATAKIT 9
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define HT_NULL_VALUE 0
#define PRIo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define SCNiLEAST64 SCNi64
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ETOOMANYREFS 59
#define STR_IS_NULL(x) (!x || !x[0])
#define r_rbtree_iter_while(it,data,struc,rb) for (; r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_next (&(it)))
#define _SYS_STAT_H_ 
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define MSG_DONTWAIT 0x80
#define FUNC_ATTR_ALWAYS_INLINE __attribute__((always_inline))
#define MSG_EOF 0x100
#define TIOCGSIZE TIOCGWINSZ
#define _SYS_SIGNAL_H_ 
#define D_PAGED 0x100
#define _SC_ASYNCHRONOUS_IO 28
#define SCNdFAST16 SCNd16
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define R_ROUND(x,y) ((x)%(y))?(x)+((y)-((x)%(y))):(x)
#define R_BIG_DTYPE ut32
#define r_flist_rewind(it) while(it!=*it) it--; it++;
#define LIBC_HAVE_PTRACE 1
#define BFD_JUMP_TABLE_ARCHIVE(NAME) NAME ##_slurp_armap, NAME ##_slurp_extended_name_table, NAME ##_construct_extended_name_table, NAME ##_truncate_arname, NAME ##_write_armap, NAME ##_read_ar_hdr, NAME ##_openr_next_archived_file, NAME ##_get_elt_at_index, NAME ##_generic_stat_arch_elt, NAME ##_update_armap_timestamp
#define __tune_core2__ 1
#define bfd_mach_sh4al_dsp 0x4d
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define KEV_DL_SIFMETRICS 2
#define __ATOMIC_HLE_ACQUIRE 65536
#define SCNdFAST32 SCNd32
#define bfd_usrdata(abfd) ((abfd)->usrdata)
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define _PC_VDISABLE 9
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define __kpi_deprecated_arm64_macos_unavailable 
#define TAG_SET 0x11
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define MSG_EOR 0x8
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define st_atime st_atimespec.tv_sec
#define EXFUN(name,proto) name proto
#define RUNE_LINE_CROSS "┼"
#define __SPI_DEPRECATED(...) 
#define _POSIX_CPUTIME (-1)
#define __FLT64X_MANT_DIG__ 64
#define ATTRIBUTE_NONNULL(m) __attribute__ ((__nonnull__ (m)))
#define PTHREAD_CREATE_DETACHED 2
#define FUNC_ATTR_ALLOC_SIZE_PROD(x,y) __attribute__((alloc_size(x,y)))
#define SONPX_SETOPTSHUT 0x000000001
#define VA_CLOSE(AP) } va_end(AP); }
#define IS_HEXCHAR(x) (((x) >= '0' && (x) <= '9') || ((x) >= 'a' && (x) <= 'f') || ((x) >= 'A' && (x) <= 'F'))
#define WAKEMON_SET_DEFAULTS 0x08
#define bfd_mach_mcf_isa_b_nousp_mac 17
#define bfd_mach_mips_loongson_2e 3001
#define B10001 17
#define ST32_MAX 0x7FFFFFFF
#define __WATCHOS_5_2 50200
#define SDB_KEYSIZE 32
#define SCNdFAST64 SCNd64
#define bfd_canonicalize_dynamic_reloc(abfd,arels,asyms) BFD_SEND (abfd, _bfd_canonicalize_dynamic_reloc, (abfd, arels, asyms))
#define TIOCSPGRP _IOW('t', 118, int)
#define SEC_READONLY 0x008
#define UT8_SUB_OVFCHK(a,b) UT8_ADD_OVFCHK(a,-(b))
#define R2_INCDIR "/usr/local/include/libr"
#define SIGALRM 14
#define __LONG_LONG_WIDTH__ 64
#define R_STATIC_ASSERT(x) switch (0) { case 0: case (x):; }
#define RUNECODE_CORNER_BR 0xca
#define O_DP_GETRAWENCRYPTED 0x0001
#define CLD_EXITED 1
#define TIOCPKT_NOSTOP 0x10
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define AF_PUP 4
#define SEC_TIC54X_CLINK 0x80000000
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define bfd_mach_arm_unknown 0
#define RColor_BRED RCOLOR(ALPHA_FG, 231, 72, 86, 0x00, 0x00, 0x00, 9)
#define bfd_mach_alpha_ev4 0x10
#define bfd_mach_alpha_ev5 0x20
#define bfd_mach_alpha_ev6 0x30
#define SIOCSLOWAT _IOW('s', 2, int)
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define RColor_BBGBLACK RCOLOR(ALPHA_BG, 118, 118, 118, 0x00, 0x00, 0x00, 8)
#define R_CONS_CURSOR_SAVE "\x1b[s"
#define MSG_HAVEMORE 0x2000
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define ONLCR 0x00000002
#define bfd_read(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_read", NULL, NULL, __FUNCTION__), bfd_bread ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define R_CONS_INVERT(x,y) (y? (x?Color_INVERT: Color_INVERT_RESET): (x?"[":"]"))
#define _STRUCT_IOVEC 
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define bfd_h_put_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define UF_NODUMP 0x00000001
#define R_HEAP 
#define bfd_set_section_vma(bfd,ptr,val) (((ptr)->vma = (ptr)->lma = (val)), ((ptr)->user_set_vma = TRUE), TRUE)
#define WEXITED 0x00000004
#define PASS_MAX 128
#define F_GETOWN 5
#define H_GET_S8 bfd_h_get_signed_8
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define B0100 4
#define B0101 5
#define MONOTONIC_LINUX (__linux__ && _POSIX_C_SOURCE >= 199309L)
#define SDB_KSZ 0xff
#define bfd_mach_sparc_v8plusa 5
#define bfd_mach_sparc_v8plusb 9
#define R_UTIL_TABLE_H 
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define _SC_XBS5_LPBIG_OFFBIG 125
#define alloca(size) __alloca(size)
#define _USE_FORTIFY_LEVEL 2
#define __INT16_MAX__ 0x7fff
#define B0111 7
#define RColor_BBGYELLOW RCOLOR(ALPHA_BG, 249, 241, 165, 0x00, 0x00, 0x00, 11)
#define _SYS_DIRENT_H 
#define bfd_make_empty_symbol(abfd) BFD_SEND (abfd, _bfd_make_empty_symbol, (abfd))
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define ST32_MIN (-ST32_MAX-1)
#define TIOCDSIMICROCODE _IO('t', 85)
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define TIOCCONS _IOW('t', 98, int)
#define bfd_mach_mips_xlr 887682
#define bfd_set_arch_mach(abfd,arch,mach) BFD_SEND ( abfd, _bfd_set_arch_mach, (abfd, arch, mach))
#define SDB_HT_PP_H 
#define PTHREAD_INHERIT_SCHED 1
#define CDSR_OFLOW 0x00080000
#define VLNEXT 14
#define R_HEX_H 
#define _SC_MQ_OPEN_MAX 46
#define Color_GREEN "\x1b[32m"
#define R_REGEX_NOTEOL 00002
#define CORNER_BL 5
#define ENOBUFS 55
#define _ANSI_STDDEF_H 
#define B57600 57600
#define bfd_mach_iq10 2
#define __INT_LEAST32_MAX__ 0x7fffffff
#define TABDLY 0x00000c04
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define PTHREAD_CANCEL_DISABLE 0x00
#define __APPLE_API_OBSOLETE 
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define IOPOL_DEFAULT 0
#define __KFBSD__ 0
#define DEFUN_VOID(name) name(void)
#define DST_WET 3
#define __IOS_AVAILABLE(_vers) 
#define SO_RCVLOWAT 0x1004
#define AF_UTUN 38
#define __strong 
#define bfd_find_nearest_line(abfd,sec,syms,off,file,func,line) BFD_SEND (abfd, _bfd_find_nearest_line, (abfd, sec, syms, off, file, func, line))
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define TIOCPTYGRANT _IO('t', 84)
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define ATTRIBUTE_SENTINEL __attribute__ ((__sentinel__))
#define ls_length(x) x->length
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define PF_ISDN AF_ISDN
#define __INT16_TYPE__ short int
#define SEC_SORT_ENTRIES 0x10000
#define R_BITMAP_H 
#define UT64_ADD_OVFCHK(x,y) ((UT64_MAX - (x)) < (y))
#define UTIME_NOW -1
#define R_TREE_H 
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define RColor_BGYELLOW RCOLOR(ALPHA_BG, 193, 156, 0, 0x00, 0x00, 0x00, 3)
#define _POSIX_JOB_CONTROL 200112L
#define R_ULEB128_H 
#define SIGINFO 29
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __LDBL_MAX_EXP__ 16384
#define sigismember(set,signo) ((*(set) & __sigbits(signo)) != 0)
#define EOF (-1)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define S_IFREG 0100000
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define R_CONS_GREP_COUNT 10
#define R_SANDBOX_H 
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __SPI_AVAILABLE(...) 
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define _CACHED_RUNES (1 <<8 )
#define CRTS_IFLOW 0x00020000
#define PF_MAX AF_MAX
#define DT_SOCK 12
#define CHAR_MAX SCHAR_MAX
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define UT32_GT0 0x80000000U
#define SEEK_DATA 4
#define uint32 unsigned int
#define PRIxPTR "lx"
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define B11100 28
#define B11101 29
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define F_ADDFILESUPPL 104
#define B_EVEN(x) (((x) & 1) == 0)
#define _SC_FILE_LOCKING 69
#define TAG_BOOLEAN 0x01
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define B11110 30
#define B11111 31
#define r_list_iter_free(x) (x)
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IOPOL_ATIME_UPDATES_OFF 1
#define R_UTF8_CIRCLE "\u25EF"
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 90
#define VTDLY 0x00010000
#define IXANY 0x00000800
#define _PC_NAME_MAX 4
#define Color_BBGWHITE "\x1b[107m"
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define NOFLSH 0x80000000
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define VT1 0x00010000
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define R_BIG_SPRINTF_FORMAT_STR "%.08x"
#define _PC_MAX_CANON 2
#define PF_INET6 AF_INET6
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define EDEVERR 83
#define RUNE_LINE_VERT "│"
#define bfd_mach_ppc_750 750
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define R_BUF_CUR 1
#define DEBUGGER 1
#define KEV_DL_AWDL_RESTRICTED 26
#define bfd_copy_private_symbol_data(ibfd,isymbol,obfd,osymbol) BFD_SEND (obfd, _bfd_copy_private_symbol_data, (ibfd, isymbol, obfd, osymbol))
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define R_PERM_CREAT 64
#define LS_H 
#define __DARWIN_SUF_UNIX03 
#define bfd_mach_am33 330
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define _SC_REALTIME_SIGNALS 36
#define KEV_INET_CHANGED_ADDR 2
#define SCNiMAX __SCN_MAX_LENGTH_MODIFIER__ "i"
#define DOTS , ...
#define bfd_mach_x86_64 64
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define CHAR_MIN SCHAR_MIN
#define __FLT_MANT_DIG__ 24
#define R_ABS(x) (((x)<0)?-(x):(x))
#define F_GETPATH_MTMINFO 71
#define RColor_BGRED RCOLOR(ALPHA_BG, 197, 15, 31, 0x00, 0x00, 0x00, 1)
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define __UINT64_C(c) c ## ULL
#define _XOPEN_PATH_MAX 1024
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define PRIXLEAST16 PRIX16
#define RUNECODE_ARROW_LEFT 0xcd
#define R_REGEX_EESCAPE 5
#define ILL_ILLTRP 2
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define PPPDISC 5
#define SF_APPEND 0x00040000
#define _SUSECONDS_T 
#define B1000 8
#define B1001 9
#define ILL_BADSTK 8
#define KEV_DL_ISSUES 24
#define NET_RT_STAT 4
#define SDB_MAX_GPERF_KEYS 15000
#define _NLINK_T 
#define _POSIX_VERSION 200112L
#define FIOCLEX _IO('f', 1)
#define PRIXLEAST32 PRIX32
#define B1010 10
#define B1011 11
#define ASN1_CLASS 0xC0
#define VTIME 17
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define bfd_mach_mips_micromips 96
#define _UNISTD_H_ 
#define PTHREAD_PRIO_INHERIT 1
#define H_GET_8 bfd_h_get_8
#define _PC_REC_INCR_XFER_SIZE 20
#define SDB_KT ut32
#define _SYS__TYPES_H_ 
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define O_RDWR 0x0002
#define bfd_mach_mips4000 4000
#define BSF_WEAK 0x80
#define _SYS_SOCKIO_H_ 
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define MSG_FLUSH 0x400
#define EPERM 1
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define __FLT128_MAX_EXP__ 16384
#define PRIXLEAST64 PRIX64
#define bfd_h_get_signed_8(abfd,ptr) bfd_get_signed_8 (abfd, ptr)
#define PTHREAD_MUTEX_NORMAL 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define PF_ECMA AF_ECMA
#define __used __attribute__((__used__))
#define F_GETPATH 50
#define SIGBUS 10
#define BSF_OLD_COMMON 0x200
#define KEV_INET_ARPRTRALIVE 10
#define DTF_REWIND 0x0004
#define UT16_ALIGN(x) (x + (x - (x % sizeof (ut16))))
#define ATTRIBUTE_PURE __attribute__ ((__pure__))
#define TCSANOW 0
#define R_JOIN_5_PATHS(p1,p2,p3,p4,p5) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4 R_SYS_DIR p5
#define __SLBF 0x0001
#define BFD_FAKE_SECTION(SEC,FLAGS,SYM,SYM_PTR,NAME,IDX) { NAME, IDX, 0, NULL, NULL, FLAGS, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (struct bfd_section *) &SEC, 0, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, 0, NULL, NULL, NULL, (struct bfd_symbol *) SYM, (struct bfd_symbol **) SYM_PTR, { NULL }, { NULL } }
#define O_EXLOCK 0x00000020
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define bfd_mach_mips8000 8000
#define _POSIX_STREAM_MAX 8
#define TRAP_TRACE 2
#define bfd_mach_mips_gs264e 3005
#define RENAME_SECLUDE 0x00000001
#define R_BUF_SET 0
#define __FLT32_MANT_DIG__ 24
#define _FSTDIO 
#define NET_MAXID AF_MAX
#define RLIMIT_NPROC 7
#define __LP64_OFF64 (1)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define LIBC_HAVE_PRIV_SET 0
#define RUSAGE_SELF 0
#define SV_NODEFER SA_NODEFER
#define R_CONS_KEY_ESC 0x1b
#define pseudo_AF_PIP 25
#define R_NULLABLE 
#define _POSIX_TRACE_INHERIT (-1)
#define _INTMAX_T 
#define O_DIRECTORY 0x00100000
#define __SRD 0x0004
#define __SRW 0x0010
#define TAG_BMPSTRING 0x1E
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define SDB_RS ','
#define __IOS_UNAVAILABLE 
#define SO_KEEPALIVE 0x0008
#define KEV_DL_DELMULTI 8
#define Color_CYAN "\x1b[36m"
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SDB_SS ","
#define FFSYNC O_FSYNC
#define B2400 2400
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define __FLT64X_DIG__ 18
#define r_crbtree_foreach(tree,iter,stuff) for (iter = tree? r_crbtree_first_node (tree): NULL, stuff = iter? iter->data: NULL; iter; iter = r_rbnode_next (iter), stuff = iter? iter->data: NULL)
#define S_IWRITE S_IWUSR
#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define VA_START(VA_LIST,VAR) va_start(VA_LIST, VAR)
#define NL_TEXTMAX 2048
#define F_GETPROTECTIONLEVEL 77
#define bfd_mach_crx 1
#define UF_HIDDEN 0x00008000
#define PTHREAD_CANCELED ((void *) 1)
#define R_API __attribute__((visibility("default")))
#define bfd_mach_sh2a_or_sh3e 0x2a4
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define F_SETFD 2
#define bfd_mach_mcf_isa_b_float 22
#define bfd_mach_mips5400 5400
#define F_SETFL 4
#define DTF_HIDEW 0x0001
#define SIG_UNBLOCK 2
#define _POSIX_RTSIG_MAX 8
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __SNBF 0x0002
#define st8 signed char
#define R_REGEX_ESPACE 12
#define R_MAX_DEFINED 
#define __ORDER_PDP_ENDIAN__ 3412
#define WANT_THREADS 1
#define RUNECODESTR_CURVE_CORNER_BL "\xd5"
#define _POSIX_MEMLOCK (-1)
#define RUNECODESTR_CURVE_CORNER_BR "\xd4"
#define TCSAFLUSH 2
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define __SWR 0x0008
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define R_ENDIAN_H 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define USE_MMAN HAVE_MMAN
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define R_REGEX_PEND 0040
#define CBRK CEOL
#define CSTOP CTRL('s')
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define bfd_debug_info_end(abfd) BFD_SEND (abfd, _bfd_debug_info_end, (abfd))
#define SO_REUSEPORT 0x0200
#define __DARWIN_NO_LONG_LONG 0
#define SCNi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define UINT64_MAX 18446744073709551615ULL
#define KEV_INET_PORTINUSE 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define __PTHREAD_RWLOCK_SIZE__ 192
#define R_UTF8_DOOR "🚪"
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define BSF_EXPORT BSF_GLOBAL
#define B50 50
#define BSF_CONSTRUCTOR 0x800
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define __FLT64X_HAS_INFINITY__ 1
#define __DTF_ATEND 0x0020
#define SS_ONSTACK 0x0001
#define PF_DATAKIT AF_DATAKIT
#define ECANCELED 89
#define F_SETLK 8
#define __SIZE_TYPE__ long unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define ENOTBLK 15
#define BUFFER_H 
#define _POSIX_THREAD_CPUTIME (-1)
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define AF_INET 2
#define PTHREAD_PRIO_PROTECT 2
#define Color_RESET "\x1b[0m"
#define __INT8_TYPE__ signed char
#define FWRITE 0x00000002
#define TAG_ENUMERATED 0x0A
#define ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#define R_OWN 
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define _SC_PRIORITIZED_IO 34
#define UT8_GT0 0x80U
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define TCOOFF 1
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define F_GLOBAL_NOCACHE 55
#define bfd_is_abs_section(sec) ((sec) == bfd_abs_section_ptr)
#define _GCC_MAX_ALIGN_T 
#define bfd_mach_mips12000 12000
#define SEM_FAILED ((sem_t *)-1)
#define _SC_V6_ILP32_OFFBIG 104
#define _SC_TRACE_LOG 100
#define TCION 4
#define SO_NOADDRERR 0x1023
#define TAG_EOC 0x00
#define _SYS_SOCKET_H_ 
#define _toupper(c) __toupper(c)
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define NL0 0x00000000
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define bfd_mach_fr400 400
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define NL1 0x00000100
#define TAG_UTF8STRING 0x0C
#define bfd_header_big_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_BIG)
#define TIOCPKT_FLUSHWRITE 0x02
#define _RUNE_T 
#define UT32_MAX 0xFFFFFFFFU
#define IOV_MAX 1024
#define R_BIG_MAX_VAL (R_BIG_DTYPE_TMP) UT32_MAX
#define PRIdLEAST8 PRId8
#define AND ,
#define __FLT32X_MIN_10_EXP__ (-307)
#define bfd_mach_arc_7 7
#define _r_calloc r_calloc
#define IOPOL_THROTTLE 3
#define bfd_mach_ppc_ec603e 6031
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 0x0080
#define F_FULLFSYNC 51
#define minor(x) ((int32_t)((x) & 0xffffff))
#define r_unref(x,f) { assert (x->R_REF_NAME> 0); if (!--(x->R_REF_NAME)) { f(x); } }
#define bfd_mach_v850 1
#define __SSE_MATH__ 1
#define SSZT_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > SSIZE_MAX - (x))) || (((x) < 0) && (a) < SSIZE_MIN - (x)))
#define bfd_mach_sh 1
#define B_SET(x,n) ((x) |= (1ULL << (n)))
#define bfd_mach_z80 3
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define _FSFILCNT_T 
#define R_SELWIDGET_DIR_UP 0
#define R_MODE_CLASSDUMP 0x040
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define ECONNRESET 54
#define SIGCONT 19
#define O_CLOEXEC 0x01000000
#define bfd_set_cacheable(abfd,bool) (((abfd)->cacheable = bool), TRUE)
#define PRIu16 "hu"
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define r_malloc(x) malloc((x))
#define R_BIT_SET(x,y) (((ut8*)x)[y>>4] |= (1<<(y&0xf)))
#define INT_LEAST64_MAX INT64_MAX
#define OFDEL 0x00020000
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define TIOCSDTR _IO('t', 121)
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define _CTYPE_SW0 0x20000000L
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define R_NAME_H 
#define PRIu32 "u"
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define KEV_INET6_ADDR_DELETED 3
#define bfd_mach_iq2000 1
#define AF_OSI AF_ISO
#define bfd_has_map(abfd) ((abfd)->has_armap)
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define CCAR_OFLOW 0x00100000
#define FFDSYNC O_DSYNC
#define TAG_VISIBLESTRING 0x1A
#define AF_IPX 23
#define _SYS_STDIO_H_ 
#define bfd_mach_mips_interaptiv_mr2 736550
#define UT64_ALIGN(x) (x + (x - (x % sizeof (ut64))))
#define RUNECODESTR_CURVE_CORNER_TL "\xd2"
#define RUNECODESTR_CURVE_CORNER_TR "\xd3"
#define SCNoMAX __SCN_MAX_LENGTH_MODIFIER__ "o"
#define INTPTR_MIN (-INTPTR_MAX-1)
#define RColor_MAGENTA RCOLOR(ALPHA_FG, 136, 23, 152, 0x00, 0x00, 0x00, 5)
#define INT8_C(v) (v)
#define FP_CHOP 3
#define R_UTF8_SEE_NO_EVIL_MONKEY "🙈"
#define _WRITE_OK (1<<10)
#define _SC_DELAYTIMER_MAX 45
#define PRIu64 __PRI_64_LENGTH_MODIFIER__ "u"
#define S_IFDIR 0040000
#define _IONBF 2
#define VT0 0x00000000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define EPROCLIM 67
#define SAE_CONNID_ANY 0
#define TRAP_BRKPT 1
#define bfd_mach_m68010 3
#define _GID_T 
#define Color_BBGYELLOW "\x1b[103m"
#define TIOCSTI _IOW('t', 114, char)
#define bfd_get_signed_8(abfd,ptr) (((*(unsigned char *) (ptr) & 0xff) ^ 0x80) - 0x80)
#define R_BIG_ARRAY_SIZE (512 / R_BIG_WORD_SIZE)
#define bfd_mach_mcf_isa_b_float_mac 23
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define __FLT32X_MIN_EXP__ (-1021)
#define HEAPTYPE(x) static x* x ##_new(x n) { x *m = malloc(sizeof (x)); return m? *m = n, m: m; }
#define bfd_section_list_append(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->next = NULL; if (_abfd->section_last) { _s->prev = _abfd->section_last; _abfd->section_last->next = _s; } else { _s->prev = NULL; _abfd->sections = _s; } _abfd->section_last = _s; } while (0)
#define SEC_HAS_CONTENTS 0x100
#define __SDB_HT_H 
#define _SC_SAVED_IDS 7
#define HT_(name) HtUP ##name
#define PRIxLEAST16 PRIx16
#define PFMT32d "d"
#define __INT_FAST16_MAX__ 0x7fff
#define CONFIG_H 
#define SHRT_MAX __SHRT_MAX__
#define XTENSA_OPERAND_IS_PCRELATIVE 0x00000002
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define R_NEWS(x,y) (x*)malloc(sizeof(x)*(y))
#define EMSGSIZE 40
#define RColor_BYELLOW RCOLOR(ALPHA_FG, 249, 241, 165, 0x00, 0x00, 0x00, 11)
#define INT_LEAST64_MIN INT64_MIN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define __DTF_SKIPREAD 0x0010
#define DOT_STYLE_NORMAL 0
#define F_SETNOSIGPIPE 73
#define PRIxLEAST32 PRIx32
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define ST32_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST32_MAX - (x))) || (((x) < 0) && (a) < ST32_MIN - (x)))
#define bfd_big_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_BIG)
#define EROFS 30
#define SIOCSPGRP _IOW('s', 8, int)
#define WANT_CAPSTONE 1
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define __SYS_APPLEAPIOPTS_H__ 
#define SCNi16 "hi"
#define _SC_SEMAPHORES 37
#define B230400 230400
#define SIGSYS 12
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define R_REGEX_DUMP 0200
#define INT32_C(v) (v)
#define r_oflist_array(x) x->array? x->array: (x->array = r_oflist_serialize (x)), x->array
#define __SEOF 0x0020
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define PTHREAD_PROCESS_PRIVATE 2
#define bfd_mach_z80strict 1
#define FUNC_ATTR_PURE __attribute__ ((pure))
#define bfd_find_inliner_info(abfd,file,func,line) BFD_SEND (abfd, _bfd_find_inliner_info, (abfd, file, func, line))
#define MSG_CTRUNC 0x20
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define bfd_section_lma(bfd,ptr) ((ptr)->lma)
#define _POSIX_TIMERS (-1)
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define PRIxLEAST64 PRIx64
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define PRIxFAST16 PRIx16
#define R2_VERSION "5.5.4"
#define L_INCR SEEK_CUR
#define R_CONS_KEY_F10 0xfa
#define R_CONS_KEY_F12 0xfc
#define B0000 0
#define PF_LINK AF_LINK
#define bfd_write(BUF,ELTSIZE,NITEMS,ABFD) (warn_deprecated ("bfd_write", NULL, NULL, __FUNCTION__), bfd_bwrite ((BUF), (ELTSIZE) * (NITEMS), (ABFD)))
#define Color_WHITE "\x1b[37m"
#define RColor_CYAN RCOLOR(ALPHA_FG, 58, 150, 221, 0x00, 0x00, 0x00, 6)
#define AF_SNA 11
#define __kpi_deprecated(_msg) 
#define PRIX16 "hX"
#define bfd_mach_sparc_sparclite 3
#define FF0 0x00000000
#define _KEY_T 
#define AF_E164 AF_ISDN
#define ST16_SUB_OVFCHK(a,b) ST16_ADD_OVFCHK(a,-(b))
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define R_BIT_UNSET(x,y) (((ut8*)x)[y>>4] &= ~(1<<(y&0xf)))
#define _POSIX_RAW_SOCKETS (-1)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define _POSIX2_C_BIND 200112L
#define __PRAGMA_REDEFINE_EXTNAME 1
#define UT8_MIN 0x00U
#define CSTATUS CTRL('t')
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define va_end(v) __builtin_va_end(v)
#define S_TYPEISMQ(buf) (0)
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define OFILL 0x00000080
#define EXPR_NEST_MAX 32
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define PRIX32 "X"
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define CKILL CTRL('u')
#define bfd_put_signed_16 bfd_put_16
#define container_of(ptr,type,member) ((type *)((char *)(__typeof__(((type *)0)->member) *){ptr} - offsetof(type, member)))
#define SZT_SUB_OVFCHK(a,b) SZT_ADD_OVFCHK(a,-(b))
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define _FD_SET 
#define __SEG_GS 1
#define SEC_SMALL_DATA 0x800000
#define bfd_mach_i386_i386_intel_syntax 3
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __WINT_TYPE__ int
#define __SIG_ATOMIC_WIDTH__ 32
#define _POSIX2_PBS_TRACK (-1)
#define r_utf8_to_utf16(cstring) r_utf8_to_utf16_l ((char *)cstring, -1)
#define _SC_THREAD_KEYS_MAX 86
#define PRIxFAST64 PRIx64
#define __INT_LEAST64_TYPE__ long long int
#define INT64_MAX 9223372036854775807LL
#define DOT_STYLE_CONDITIONAL 1
#define R2_REGEX_H 
#define SIGCHLD 20
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define bfd_put_signed_32 bfd_put_32
#define PRIX64 __PRI_64_LENGTH_MODIFIER__ "X"
#define R2_VERSION_MINOR 5
#define Color_BGGRAY "\x1b[100m"
#define CPUMON_MAKE_FATAL 0x1000
#define __SIZEOF_INT__ 4
#define BSDLY 0x00008000
#define _WEXT_OK (1<<18)
#define DT_UNKNOWN 0
#define EDOM 33
#define R_LOG_WARN(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_WARN, NULL, fmtstr, ##__VA_ARGS__);
#define BFD_FORT_COMM_DEFAULT_VALUE 0
#define _MACHTYPES_H_ 
#define B1800 1800
#define BFD_HOST_U_64_BIT unsigned long long
#define EDQUOT 69
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 3
#define cdb_datapos(c) ((c)->dpos)
#define CLASS_UNIVERSAL 0x00
#define R_REGEX_BACKR 02000
#define AT_REALDEV 0x0200
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define __TVOS_13_0 130000
#define _POSIX2_PBS_CHECKPOINT (-1)
#define bfd_put_signed_64 bfd_put_64
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define buffer_SEEK(s,len) ( ( (s)->p -= (len) ) , ( (s)->n += (len) ) )
#define MSG_RCVMORE 0x4000
#define __TVOS_13_2 130200
#define __SIZEOF_SHORT__ 2
#define r_utf16_to_utf8(wc) r_utf16_to_utf8_l ((wchar_t *)wc, -1)
#define PFMT32o "o"
#define PFMT32u "u"
#define PFMT32x "x"
#define RUNE_CORNER_BL "└"
#define _POSIX2_PBS (-1)
#define RUNE_CORNER_BR "┘"
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define __DARWIN_LITTLE_ENDIAN 1234
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define NCCS 20
#define SCNdMAX __SCN_MAX_LENGTH_MODIFIER__ "d"
#define __SWIFT_UNAVAILABLE 
#define bfd_mach_ip2022 1
#define _PTHREAD_RWLOCKATTR_T 
#define bfd_mach_m6812_default 0
#define ILL_PRVREG 6
#define r_free(x) free((x))
#define FPE_FLTINV 5
#define R_NSEC_PER_USEC 1000ULL
#define __LITTLE_ENDIAN__ 1
#define VQUIT 9
#define bfd_copy_private_header_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_header_data, (ibfd, obfd))
#define F_SETLKW 9
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define RUNECODE_ARROW_RIGHT 0xcc
#define AF_MAX 41
#define R_REGEX_BADBR 10
#define CHECK_FORMAT(INTISA,FMT,ERRVAL) do { if ((FMT) < 0 || (FMT) >= (INTISA)->num_formats) { xtisa_errno = xtensa_isa_bad_format; strcpy (xtisa_error_msg, "invalid format specifier"); return (ERRVAL); } } while (0)
#define _BSD_MACHINE_ENDIAN_H_ 
#define _XOPEN_IOV_MAX 16
#define ls_tail(x) x->tail
#define __GNUC_MINOR__ 2
#define O_POPUP 0x80000000
#define __FLT32X_DIG__ 15
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define VPARAMS(ARGS) ARGS
#define __WORDSIZE 64
#define bfd_mach_sh4_nommu_nofpu 0x42
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define S_BLKSIZE 512
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define r_warn_if_fail(expr) do { if (!(expr)) { r_assert_log (R_LOGLVL_WARN, "WARNING (%s:%d):%s%s runtime check failed: (%s)\n", __FILE__, __LINE__, R_FUNCTION, R_FUNCTION[0] ? ":" : "", #expr); } } while (0)
#define ___WCTYPE_H_ 
#define PF_NATM AF_NATM
#define _PC_REC_MIN_XFER_SIZE 22
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define PRIXLEAST8 PRIX8
#define __CONSTANT_CFSTRINGS__ 1
#define R_REF_FUNCTIONS(s,n) static inline void n ##_ref(s *x) { x->R_REF_NAME++; } static inline void n ##_unref(s *x) { r_unref (x, n ##_free); }
#define Color_RESET_NOBG "\x1b[27;22;24;25;28;39m"
#define CLD_STOPPED 5
#define __SCN_MAX_LENGTH_MODIFIER__ "j"
#define CRTSCTS (CCTS_OFLOW | CRTS_IFLOW)
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define BSF_SECTION_SYM 0x100
#define bfd_get_section_size(ptr) ((ptr)->size)
#define EXTPROC 0x00000800
#define HAS_CLOCK_NANOSLEEP 0
#define SO_RCVTIMEO 0x1006
#define ELAST 106
#define AF_VSOCK 40
#define __code_model_small__ 1
#define _SC_AIO_LISTIO_MAX 42
#define VREPRINT 6
#define AT_SYMLINK_NOFOLLOW 0x0020
#define SIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { if (a > 0) { if (b > 0) { return a > type_max / b; } return b < type_min / a; } if (b > 0) { return a < type_min / b; } return a && b < type_max / a; }
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define ASN1_LENSHORT 0x7F
#define TIOCSIG _IO('t', 95)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define ESOCKTNOSUPPORT 44
#define Color_BBLACK Color_GRAY
#define AF_LOCAL AF_UNIX
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define __WCHAR_TYPE__ int
#define __SIZEOF_FLOAT__ 4
#define MAC_OS_X_VERSION_10_5 1050
#define _SC_XOPEN_ENH_I18N 109
#define _POSIX_TRACE_NAME_MAX 8
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define ONOEOT 0x00000008
#define bfd_mach_mips3000 3000
#define __API_UNAVAILABLE_END 
#define MAC_OS_X_VERSION_10_6 1060
#define R_IPI 
#define bfd_mach_mips4600 4600
#define R_LOG_FATAL(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_FATAL, NULL, fmtstr, ##__VA_ARGS__);
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define CSTOPB 0x00000400
#define R_MODE_SIMPLEST 0x020
#define NET_RT_MAXID 11
#define R_SYS_BITS_27 16
#define BRKINT 0x00000002
#define SCNxPTR "lx"
#define bfd_mach_m68000 1
#define _SECURE__STRINGS_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define FP_RND_DOWN 1
#define B14400 14400
#define R_NEW0(x) (x*)calloc(1,sizeof(x))
#define __FLT32_DECIMAL_DIG__ 9
#define R_EVENT_H 
#define BFD_JUMP_TABLE_WRITE(NAME) NAME ##_set_arch_mach, NAME ##_set_section_contents
#define BUFSIZ 1024
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define r_list_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head; it && (pos = it->data, tmp = it->n, 1); it = tmp)
#define TAG_VIDEOTEXSTRING 0x15
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define bfd_mach_x86_64_intel_syntax 65
#define _PC_NAME_CHARS_MAX 10
#define PRIXFAST8 PRIX8
#define _SC_2_PBS 59
#define TIOCGPGRP _IOR('t', 119, int)
#define bfd_mach_mips4650 4650
#define PF_PIP pseudo_AF_PIP
#define F_GETPATH_NOFIRMLINK 102
#define bfd_mach_ppc_860 860
#define mips mips
#define __MACH__ 1
#define __amd64__ 1
#define SCM_CREDS 0x03
#define bfd_final_link(abfd,info) BFD_SEND (abfd, _bfd_final_link, (abfd, info))
#define R_PTR_ALIGN_NEXT(v,t) ((char *)(((size_t)(v) + (t - 1)) & ~(t - 1)))
#define F_GETNOSIGPIPE 74
#define SCNoFAST16 SCNo16
#define R2_TIME_H 
#define align_power(addr,align) (((addr) + ((bfd_vma) 1 << (align)) - 1) & ((bfd_vma) -1 << (align)))
#define R_USEC_PER_MSEC 1000ULL
#define F_GETSIGSINFO 105
#define _UINT16_T 
#define bfd_section_size(bfd,ptr) ((ptr)->size)
#define __LPBIG_OFFBIG (1)
#define __FLT64X_IS_IEC_60559__ 2
#define ICANON 0x00000100
#define ATTRIBUTE_NULL_PRINTF_1 ATTRIBUTE_NULL_PRINTF(1, 2)
#define _I386__PARAM_H_ 
#define PRIXMAX __PRI_MAX_LENGTH_MODIFIER__ "X"
#define AF_NETBIOS 33
#define EPROTONOSUPPORT 43
#define UINT_MAX (INT_MAX * 2U + 1U)
#define ATTRIBUTE_NULL_PRINTF_2 ATTRIBUTE_NULL_PRINTF(2, 3)
#define EREMOTE 71
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define bfd_mach_arm_4 5
#define _U_INT 
#define R_MALLOC_WRAPPER 0
#define bfd_mach_m68008 2
#define SCNoFAST32 SCNo32
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define _IOLBF 1
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define BFD_JUMP_TABLE_LINK(NAME) NAME ##_sizeof_headers, NAME ##_bfd_get_relocated_section_contents, NAME ##_bfd_relax_section, NAME ##_bfd_link_hash_table_create, NAME ##_bfd_link_hash_table_free, NAME ##_bfd_link_add_symbols, NAME ##_bfd_link_just_syms, NAME ##_bfd_final_link, NAME ##_bfd_link_split_section, NAME ##_bfd_gc_sections, NAME ##_bfd_merge_sections, NAME ##_bfd_is_group_section, NAME ##_bfd_discard_group, NAME ##_section_already_linked
#define ENOTRECOVERABLE 104
#define Ht_(name) ht_up_ ##name
#define O_SHLOCK 0x00000010
#define SCNuMAX __SCN_MAX_LENGTH_MODIFIER__ "u"
#define bfd_merge_sections(abfd,link_info) BFD_SEND (abfd, _bfd_merge_sections, (abfd, link_info))
#define __FLT_MAX_EXP__ 128
#define B1100 12
#define B1101 13
#define RUNE_CORNER_TR "┐"
#define B600 600
#define XTENSA_OPCODE_IS_JUMP 0x00000002
#define BFD_DEFAULT_TARGET_SIZE 32
#define r_flist_get(it) *(it++)
#define _PTHREAD_MUTEXATTR_T 
#define ST32_SUB_OVFCHK(a,b) ST32_ADD_OVFCHK(a,-(b))
#define TIOCPKT_DATA 0x00
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define _POSIX2_RE_DUP_MAX 255
#define _RSIZE_T 
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX_REALTIME_SIGNALS (-1)
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define CCEQ(val,c) ((c) == (val) ? (val) != _POSIX_VDISABLE : 0)
#define EBADRPC 72
#define bfd_mach_m68030 5
#define SCNoFAST64 SCNo64
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define bfd_copy_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_copy_private_bfd_data, (ibfd, obfd))
#define PTHREAD_MUTEX_ERRORCHECK 1
#define SO_UPCALLCLOSEWAIT 0x1027
#define UINT_FAST64_MAX UINT64_MAX
#define bfd_mach_mcf_isa_b_nousp_emac 18
#define _POSIX_SEM_VALUE_MAX 32767
#define SDB_OPTION_JOURNAL (1 << 3)
#define __UINT_LEAST32_TYPE__ unsigned int
#define __APPLE_API_EVOLVING 
#define bfd_get_section_limit(bfd,sec) (((sec)->rawsize ? (sec)->rawsize : (sec)->size) / bfd_octets_per_byte (bfd))
#define __SSE__ 1
#define SCNu16 "hu"
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _CTYPE_C 0x00000200L
#define _CTYPE_D 0x00000400L
#define _CTYPE_I 0x00080000L
#define _CTYPE_L 0x00001000L
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define _CTYPE_R 0x00040000L
#define _CTYPE_S 0x00004000L
#define _CTYPE_T 0x00100000L
#define _CTYPE_U 0x00008000L
#define _CTYPE_X 0x00010000L
#define F_TRANSCODEKEY 75
#define __LDBL_MIN_EXP__ (-16381)
#define XTENSA_UNDEFINED -1
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _MACH_I386__STRUCTS_H_ 
#define IS_OCTAL(x) ((x) >= '0' && (x) <= '7')
#define bfd_get_file_flags(abfd) ((abfd)->flags)
#define XTENSA_OPCODE_IS_CALL 0x00000008
#define ARROW_RIGHT 8
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define _POSIX_MAX_CANON 255
#define Colors_PLAIN { Color_BLACK, Color_RED, Color_WHITE, Color_GREEN, Color_MAGENTA, Color_YELLOW, Color_CYAN, Color_BLUE, Color_GRAY}
#define pseudo_AF_XTP 19
#define SCNu32 "u"
#define _APPEND_OK (1<<13)
#define stdout __stdoutp
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define bfd_merge_private_bfd_data(ibfd,obfd) BFD_SEND (obfd, _bfd_merge_private_bfd_data, (ibfd, obfd))
#define NL_SETMAX 255
#define __WINT_WIDTH__ 32
#define PARENB 0x00001000
#define __SMBF 0x0080
#define LINE_UP 3
#define __INT_LEAST8_MAX__ 0x7f
#define r_cons_print(x) r_cons_strcat (x)
#define R_RBTREE_MAX_HEIGHT 62
#define SIGUSR2 31
#define __FLT32X_MAX_10_EXP__ 308
#define IS_NULLSTR(x) (!(x) || !*(x))
#define _SYS_IOCTL_H_ 
#define SV_SIGINFO SA_SIGINFO
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define PF_SIP AF_SIP
#define ls_push(x,y) ls_append(x,y)
#define CDB_HPLIST 1000
#define BITWORD_BITS_SHIFT 6
#define O_RDONLY 0x0000
#define _SC_2_FORT_RUN 22
#define CHECK_FUNCUNIT(INTISA,FUN,ERRVAL) do { if ((FUN) < 0 || (FUN) >= (INTISA)->num_funcUnits) { xtisa_errno = xtensa_isa_bad_funcUnit; strcpy (xtisa_error_msg, "invalid functional unit specifier"); return (ERRVAL); } } while (0)
#define bfd_ind_section_ptr ((asection *) &bfd_ind_section)
#define TIOCEXT _IOW('t', 96, int)
#define r_pvector_lower_bound(vec,x,i,cmp) do { size_t h = (vec)->v.len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp ((x), ((void **)(vec)->v.a)[m])) > 0) { i = m + 1; } else { h = m; } } } while (0)
#define ECONNREFUSED 61
#define _PTHREAD_RWLOCK_T 
#define H_GET_S16 bfd_h_get_signed_16
#define SCNu64 __SCN_64_LENGTH_MODIFIER__ "u"
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define _SC_ATEXIT_MAX 107
#define TAG_SEQUENCE 0x10
#define _tolower(c) __tolower(c)
#define B28800 28800
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define PF_CHAOS AF_CHAOS
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _PC_ALLOC_SIZE_MIN 16
#define _LP64 1
#define SIGEMT 7
#define KEV_INET_SIFNETMASK 6
#define __UINT8_C(c) c
#define R_CONS_KEY_F11 0xfb
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define _MBSTATE_T 
#define _bfd_int64_high(x) ((unsigned long) (((x) >> 32) & 0xffffffff))
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define __API_UNAVAILABLE(...) 
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define PF_SNA AF_SNA
#define Color_INSERT Color_BGREEN
#define __UINT64_TYPE__ long long unsigned int
#define bfd_mach_sh4a_nofpu 0x4b
#define R_PERM_PRIV 16
#define __has_feature(x) 0
#define bfd_mach_mips5500 5500
#define _PTHREAD_T 
#define BSF_WARNING 0x1000
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define _SC_REGEXP 77
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define _SC_IOV_MAX 56
#define _SC_PASS_MAX 131
#define RColor_BLUE RCOLOR(ALPHA_FG, 0, 55, 218, 0x00, 0x00, 0x00, 4)
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define SCNiFAST8 SCNi8
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define bfd_h_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_32, (ptr))
#define AF_CCITT 10
#define R_MODE_PRINT 0x000
#define NET_SERVICE_TYPE_SIG 2
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define _POSIX_MAPPED_FILES 200112L
#define MB_CUR_MAX __mb_cur_max
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 0x00000400
#define PTR void *
#define sdb_json_format_free(x) free ((x)->buf)
#define OFF_MAX LLONG_MAX
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define R_INTERVAL_H 
#define R_NEWCOPY(x,y) (x*)r_new_copy(sizeof(x), y)
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define __TVOS_11_3 110300
#define feof_unlocked(p) __sfeof(p)
#define RColor_YELLOW RCOLOR(ALPHA_FG, 193, 156, 0, 0x00, 0x00, 0x00, 3)
#define RColor_BBGMAGENTA RCOLOR(ALPHA_BG, 180, 0, 158, 0x00, 0x00, 0x00, 13)
#define PRIiMAX __PRI_MAX_LENGTH_MODIFIER__ "i"
#define __TVOS_11_4 110400
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define EF_IS_SYNC_ROOT 0x00000004
#define bfd_get_symtab_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_symtab_upper_bound, (abfd))
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define CTIME 0
#define INT8_MAX 127
#define EBADARCH 86
#define ENOTCONN 57
#define COFF_SWAP_TABLE (void *) &bfd_coff_std_swap_table
#define bfd_h_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_64, (ptr))
#define DYNAMIC 0x40
#define IS_SEPARATOR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r' || (x) == ' '|| (x) == ',' || (x) == ';' || (x) == ':' || (x) == '[' || (x) == ']' || (x) == '(' || (x) == ')' || (x) == '{' || (x) == '}')
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define bfd_mach_sh_dsp 0x2d
#define S_IFLNK 0120000
#define R_REGEX_BASIC 0000
#define P_tmpdir "/var/tmp/"
#define ULLFMT "ll"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SDB_MAX_PATH 256
#define XTENSA_STATE_IS_SHARED_OR 0x00000002
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define SEC_NEVER_LOAD 0x200
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define _XOPEN_STREAMS (-1)
#define _POSIX_MQ_PRIO_MAX 32
#define bfd_get_dynamic_symcount(abfd) ((abfd)->dynsymcount)
#define SV_INTERRUPT SA_RESTART
#define ELF_INFO_TYPE_MERGE 2
#define __DEC_EVAL_METHOD__ 2
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define NET_RT_FLAGS_PRIV 10
#define _WCTYPE_T 
#define R_MODE_SET 0x002
#define _SC_2_PBS_TRACK 64
#define _CRMASK (~(_CACHED_RUNES - 1))
#define r_flist_next(it) *it!=0
#define TIME_UTC 1
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define __APPLE_API_STABLE 
#define R_PERM_R 4
#define SEC_CODE 0x010
#define R_PERM_W 2
#define R_PERM_X 1
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define B1200 1200
#define bfd_com_section_ptr ((asection *) &bfd_com_section)
#define F_ADDSIGS 59
#define AF_NATM 31
#define ATTRIBUTE_PRINTF_2 ATTRIBUTE_PRINTF(2, 3)
#define _SC_THREAD_PROCESS_SHARED 90
#define OFF_MIN LLONG_MIN
#define bfd_mach_fr500 500
#define _FILE_OFFSET_BITS 64
#define SDB_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define _STRUCT_TIMESPEC struct timespec
#define _SA_FAMILY_T 
#define __ORDER_BIG_ENDIAN__ 4321
#define r_oflist_append(x,y) r_oflist_deserialize (x), r_list_append (x, y)
#define KVLSZ 4
#define SDB_VERSION "1.8.3"
#define bfd_h_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx_signed_16, (ptr))
#define RLIMIT_MEMLOCK 6
#define EF_IS_SPARSE 0x00000010
#define PF_IMPLINK AF_IMPLINK
#define O_EXCL 0x00000800
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define PTHREAD_SCOPE_SYSTEM 1
#define PRIdFAST32 PRId32
#define _POSIX2_VERSION 200112L
#define EISCONN 56
#define bfd_mach_d10v_ts3 3
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define UNSIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { return (a > 0 && b > 0 && a > type_max / b); }
#define F_FREEZE_FS 53
#define _SC_GETGR_R_SIZE_MAX 70
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define bfd_mach_m32c 0x78
#define bfd_mach_msp11 11
#define bfd_mach_msp12 12
#define bfd_mach_msp13 13
#define bfd_mach_msp14 14
#define bfd_mach_m32r 1
#define bfd_mach_msp16 16
#define INTMAX_MIN (-INTMAX_MAX-1)
#define AF_UNIX 1
#define _SC_TRACE_INHERIT 99
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define _PTRDIFF_T_DECLARED 
#define bfd_mach_mcf_isa_aplus 13
#define R_UTF8_KEYBOARD "⌨"
#define _STDLIB_H_ 
#define bfd_mach_sh2 0x20
#define bfd_mach_sh3 0x30
#define bfd_mach_sh4 0x40
#define bfd_mach_sh5 0x50
#define F_FINDSIGS 78
#define bfd_mach_msp21 21
#define F_SETPROTECTIONCLASS 64
#define _VA_LIST_T_H 
#define AF_PPP 34
#define INT_FAST16_MAX INT16_MAX
#define BFD_JUMP_TABLE_RELOCS(NAME) NAME ##_get_reloc_upper_bound, NAME ##_canonicalize_reloc, NAME ##_bfd_reloc_type_lookup
#define Color_BBLUE "\x1b[94m"
#define ARG_UNUSED(NAME) NAME ATTRIBUTE_UNUSED
#define bfd_mach_fr550 550
#define SEC_LINKER_CREATED 0x200000
#define RUNECODESTR_CORNER_BL "\xcb"
#define RUNECODESTR_CORNER_BR "\xca"
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define PRIdFAST64 PRId64
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define bfd_mach_msp31 31
#define O_NOFOLLOW 0x00000100
#define bfd_mach_msp33 33
#define FP_RND_NEAR 0
#define POLL_ERR 4
#define _PTHREAD_H 
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define printf_vma(x) fprintf_vma(stdout,x)
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define r_flist_unref(x) x
#define UF_TRACKED 0x00000040
#define __FLT32_MIN_10_EXP__ (-37)
#define bfd_mach_msp42 42
#define bfd_mach_msp43 43
#define bfd_mach_msp44 44
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define bfd_make_debug_symbol(abfd,ptr,size) BFD_SEND (abfd, _bfd_make_debug_symbol, (abfd, ptr, size))
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define __alloca(size) __builtin_alloca(size)
#define R_GETOPT_H 1
#define INT_FAST64_MAX INT64_MAX
#define RUNECODESTR_LINE_CROSS "\xc9"
#define SA_NOCLDWAIT 0x0020
#define r_str_cat(x,y) memmove ((x) + strlen (x), (y), strlen (y) + 1);
#define SO_SNDLOWAT 0x1003
#define R2_PREFIX "/usr/local"
#define _POSIX2_CHAR_TERM 200112L
#define bfd_header_little_endian(abfd) ((abfd)->xvec->header_byteorder == BFD_ENDIAN_LITTLE)
#define MAX_CANON 1024
#define __SSE2__ 1
#define __PRI_8_LENGTH_MODIFIER__ "hh"
#define SO_ERROR 0x1007
#define TIOCCDTR _IO('t', 120)
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define _SC_2_FORT_DEV 21
#define PTHREAD_MUTEX_RECURSIVE 2
#define __API_AVAILABLE_BEGIN(...) 
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define R_MEM_H 
#define HAVE_EPRINTF 1
#define r_oflist_length(x,y) r_list_length (x, y)
#define _SC_TRACE_EVENT_NAME_MAX 127
#define FASYNC O_ASYNC
#define __SIZEOF_DOUBLE__ 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define KEV_DL_LINK_OFF 12
#define __INT_LEAST32_WIDTH__ 32
#define bfd_link_hash_table_create(abfd) BFD_SEND (abfd, _bfd_link_hash_table_create, (abfd))
#define __API_DEPRECATED_BEGIN(...) 
#define __DRIVERKIT_20_0 200000
#define R_TH_SEM_T sem_t *
#define bfd_mach_sh3_nommu 0x31
#define _QUAD_HIGHWORD 1
#define UINT8_C(v) (v)
#define __INT16_C(c) c
#define R_SYS_ENDIAN_NONE 0
#define _V6_LP64_OFF64 __LP64_OFF64
#define RColor_BGGRAY RColor_BBGBLACK
#define _SYS_SEMAPHORE_H_ 
#define DTTOIF(dirtype) ((dirtype) << 12)
#define bfd_get_section(x) ((x)->section)
#define F_ALLOCATECONTIG 0x00000002
#define POLL_IN 1
#define R_LOG_H 
#define PF_UTUN AF_UTUN
#define _R_UTIL_ALLOC_H_ 1
#define CHECK_STATE_OPERAND(INTISA,OPC,ICLASS,STOP,ERRVAL) do { if ((STOP) < 0 || (STOP) >= (ICLASS)->num_stateOperands) { xtisa_errno = xtensa_isa_bad_operand; sprintf (xtisa_error_msg, "invalid state operand number (%d); " "opcode \"%s\" has %d state operands", (STOP), (INTISA)->opcodes[(OPC)].name, (ICLASS)->num_stateOperands); return (ERRVAL); } } while (0)
#define R2_VERSION_COMMIT 27746
#define TIOCSTAT _IO('t', 101)
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _SC_TRACE_SYS_MAX 129
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define USER_ADDR_NULL ((user_addr_t) 0)
#define R_SPACES_H 
#define R_SIGNAL_H 
#define ATTRIBUTE_NULL_PRINTF_3 ATTRIBUTE_NULL_PRINTF(3, 4)
#define ATTRIBUTE_NULL_PRINTF_4 ATTRIBUTE_NULL_PRINTF(4, 5)
#define ATTRIBUTE_NULL_PRINTF_5 ATTRIBUTE_NULL_PRINTF(5, 6)
#define SIZE_T_MAX ULONG_MAX
#define PF_INET AF_INET
#define R_LOG_ERROR(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_ERROR, NULL, fmtstr, ##__VA_ARGS__);
#define ENOPOLICY 103
#define _RATTR_OK (1<<15)
#define LONG_DOUBLE long double
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define EAGAIN 35
#define R_REGEX_ICASE 0002
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define __DBL_MAX_10_EXP__ 308
#define RUNECODE_CORNER_BL 0xcb
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define RENAME_SWAP 0x00000002
#define KEV_DL_ADDMULTI 7
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _POSIX_TRACE_LOG (-1)
#define _CTERMID_H_ 
#define BSF_KEEP_G 0x40
#define TTYDEF_SPEED (B9600)
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define Color_BGRED "\x1b[41m"
#define ITIMER_VIRTUAL 1
#define _SC_THREADS 96
#define SDB_MIN_KEY 1
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define RCOLOR(a,r,g,b,bgr,bgg,bgb,id16) (RColor) {0, a, r, g, b, bgr, bgg, bgb, id16}
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SIG_IGN (void (*)(int))1
#define bfd_read_minisymbols(b,d,m,s) BFD_SEND (b, _read_minisymbols, (b, d, m, s))
#define VSTART 12
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define DST_CAN 6
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define r_ref_init(x) x->R_REF_NAME = 1
#define bfd_mach_hppa20w 25
#define DT_LNK 10
#define __VERSION__ "11.2.0"
#define R_EMPTY { 0 }
#define __FLT64_MANT_DIG__ 53
#define EPROGMISMATCH 75
#define SF_DATALESS 0x40000000
#define SCNoLEAST8 SCNo8
#define AF_IEEE80211 37
#define _SC_2_PBS_CHECKPOINT 61
#define F_LOG2PHYS_EXT 65
#define bfd_is_const_section(SEC) ( ((SEC) == bfd_abs_section_ptr) || ((SEC) == bfd_und_section_ptr) || ((SEC) == bfd_com_section_ptr) || ((SEC) == bfd_ind_section_ptr))
#define R_REGEX_ECTYPE 4
#define __TVOS_14_5 140500
#define BC_STRING_MAX 1000
#define CONST_STRNEQ(STR1,STR2) (strncmp ((STR1), (STR2), sizeof (STR2) - 1) == 0)
#define PTHREAD_STACK_MIN 8192
#define HAS_SYMS 0x10
#define CLD_KILLED 2
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")
#define SHUT_RD 0
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define XCONCAT2(a,b) CONCAT2(a,b)
#define RUNECODESTR_CORNER_TR "\xd0"
#define __LDBL_MIN_10_EXP__ (-4931)
#define S_IREAD S_IRUSR
#define XCONCAT3(a,b,c) CONCAT3(a,b,c)
#define buffer_PEEK(s) ( (s)->x + (s)->n )
#define _SC_SPAWN 79
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define PTHREAD_PRIO_NONE 0
#define __PRI_MAX_LENGTH_MODIFIER__ "j"
#define __DARWIN_NON_CANCELABLE 0
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define SEC_LINK_DUPLICATES_ONE_ONLY 0x80000
#define _CHOWN_OK (1<<21)
#define MONOTONIC_FREEBSD (__FreeBSD__ && __FreeBSD_version >= 1101000)
#define PRIo16 "ho"
#define CTS(x,y,z,t,v) {t* _=(t*)CTA(x,y,z);*_=v;}
#define F_GETLK 7
#define _POSIX_OPEN_MAX 20
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define R_AXML_H 
#define VALUE_TYPE void *
#define KEV_DL_SUBCLASS 2
#define R2_BIRTH "2022-04-30__12:15:59"
#define R2_CONFIGURE_H 
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define UT64_LT0 0x7FFFFFFFFFFFFFFFULL
#define __MAC_10_10 101000
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define __MAC_10_12 101200
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define PRIo32 "o"
#define H_PUT_16 bfd_h_put_16
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define DTF_NODUP 0x0002
#define bfd_put_8(abfd,val,ptr) ((void) (*((unsigned char *) (ptr)) = (val) & 0xff))
#define __MAC_10_16 101600
#define TIOCSTOP _IO('t', 111)
#define RColor_BMAGENTA RCOLOR(ALPHA_FG, 180, 0, 158, 0x00, 0x00, 0x00, 13)
#define SHUT_WR 1
#define BC_BASE_MAX 99
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define MB_LEN_MAX 6
#define bfd_mach_sh2a_or_sh4 0x2a3
#define __INT_LEAST64_WIDTH__ 64
#define Color_BGMAGENTA "\x1b[45m"
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define SEC_KEEP 0x400000
#define PRIoLEAST8 PRIo8
#define H_PUT_32 bfd_h_put_32
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __SSE3__ 1
#define bfd_mach_v850e 'E'
#define __UINT_FAST8_TYPE__ unsigned char
#define VA_FIXEDARG(AP,T,N) struct Qdmy
#define _GNU_SOURCE 
#define SCNuLEAST32 SCNu32
#define _FILESEC_T 
#define _POSIX_SAVED_IDS 200112L
#define ASN1_JSON_EMPTY "{}"
#define R2_DIFF_H 
#define __P(protos) protos
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _POSIX_BARRIERS (-1)
#define PRIo64 __PRI_64_LENGTH_MODIFIER__ "o"
#define PRIXFAST16 PRIX16
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define BS0 0x00000000
#define BS1 0x00008000
#define AF_APPLETALK 16
#define __ATOMIC_ACQ_REL 4
#define R2_GITTAP "5.5.4"
#define __ATOMIC_RELEASE 3
#define ENOTDIR 20
#define bfd_mach_maxq10 10
#define bfd_asymbol_value(x) (bfd_asymbol_base(x) + (x)->value)
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define __DARWIN_CLK_TCK 100
#define RUNECODE_MAX 0xd6
#define bfd_link_hash_table_free(abfd,hash) BFD_SEND (abfd, _bfd_link_hash_table_free, (hash))
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define bfd_mach_maxq20 20
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define H_PUT_64 bfd_h_put_64
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define __enum_open 
#define _SC_XOPEN_UNIX 115
#define BUS_ADRALN 1
#define __FLT32X_MAX_EXP__ 1024
#define B9600 9600
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define _PTRDIFF_T_ 
#define SAE_ASSOCID_ANY 0
#define bfd_mach_ppc_rs64ii 642
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define RUNECODE_CORNER_TL 0xcf
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define ls_unref(x) x
#define bfd_mach_mips9000 9000
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define CHECK_INTERFACE(INTISA,INTF,ERRVAL) do { if ((INTF) < 0 || (INTF) >= (INTISA)->num_interfaces) { xtisa_errno = xtensa_isa_bad_interface; strcpy (xtisa_error_msg, "invalid interface specifier"); return (ERRVAL); } } while (0)
#define R_REGEX_NEWLINE 0010
#define PRIXFAST64 PRIX64
#define bfd_mach_mcf_isa_b_emac 21
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define EPROCUNAVAIL 76
#define R_LOG_VERBOSE(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_VERBOSE, NULL, fmtstr, ##__VA_ARGS__);
#define bfd_mach_mips_sb1 12310201
#define UF_COMPRESSED 0x00000020
#define _SC_TIMEOUTS 95
#define CRPRNT CREPRINT
#define KEY_TO_HASH(x) ((ut32)(x))
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define SDB_H 
#define PARAMS(ARGS) ARGS
#define ls_iter_next(x) (x?1:0)
#define _I386__ENDIAN_H_ 
#define CHECK_SLOT(INTISA,FMT,SLOT,ERRVAL) do { if ((SLOT) < 0 || (SLOT) >= (INTISA)->formats[FMT].num_slots) { xtisa_errno = xtensa_isa_bad_slot; strcpy (xtisa_error_msg, "invalid slot specifier"); return (ERRVAL); } } while (0)
#define bfd_abs_section_ptr ((asection *) &bfd_abs_section)
#define INT_LEAST16_MIN INT16_MIN
#define R_REGEX_NOSUB 0004
#define bfd_mach_sparc_v8plus 4
#define RUNE_ARROW_LEFT "<"
#define __UINT_FAST16_TYPE__ short unsigned int
#define Color_INVERT "\x1b[7m"
#define XTENSA_INTERFACE_HAS_SIDE_EFFECT 0x00000001
#define TCSASOFT 0x10
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define OXTABS 0x00000004
#define _POSIX_PRIORITIZED_IO (-1)
#define __DRIVERKIT_19_0 190000
#define SO_NREAD 0x1020
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define EF_IS_PURGEABLE 0x00000008
#define __INTMAX_C(c) c ## L
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define TTYDEF_CFLAG (CREAD | CS8 | HUPCL)
#define PTHREAD_SCOPE_PROCESS 2
#define PRIX8 __PRI_8_LENGTH_MODIFIER__ "X"
#define RColor_BGGREEN RCOLOR(ALPHA_BG, 19, 161, 14, 0x00, 0x00, 0x00, 2)
#define TIOCM_CAR 0100
#define RUNECODE_MIN 0xc8
#define O_ACCMODE 0x0003
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
#define ru_last ru_nivcsw
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define FIOGETOWN _IOR('f', 123, int)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define CONCAT2(a,b) a ##b
#define CONCAT3(a,b,c) a ##b ##c
#define CONCAT4(a,b,c,d) XCONCAT2(CONCAT2(a,b),CONCAT2(c,d))
#define __WATCHOS_1_0 10000
#define R_PERM_ACCESS 32
#define CIGNORE 0x00000001
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define EEXIST 17
#define bfd_mach_mipsisa64r2 65
#define bfd_mach_mipsisa64r3 66
#define bfd_mach_mipsisa64r5 68
#define bfd_mach_mipsisa64r6 69
#define R_JOIN_4_PATHS(p1,p2,p3,p4) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define OPEN_MAX 10240
#define bfd_mach_sparc_sparclet 2
#define bfd_mach_i960_ca 6
#define R_BIG_DTYPE_TMP ut64
#define PF_PPP AF_PPP
#define ENOMSG 91
#define DT_WHT 14
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define SIOCGHIWAT _IOR('s', 1, int)
#define _SC_TTY_NAME_MAX 101
#define IXON 0x00000200
#define __FLT32_MIN_EXP__ (-125)
#define R_CONS_CLEAR_SCREEN "\x1b[2J\r"
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define R_DEPRECATE 
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define _POSIX2_BC_DIM_MAX 2048
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 92
#define O_NOFOLLOW_ANY 0x20000000
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define typeof(arg) __typeof__(arg)
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define ESPIPE 29
#define bfd_get_section_lma(bfd,ptr) ((ptr)->lma + 0)
#define bfd_sizeof_headers(abfd,reloc) BFD_SEND (abfd, _bfd_sizeof_headers, (abfd, reloc))
#define _POSIX_TTY_NAME_MAX 9
#define bfd_mach_ppc_e500 500
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define KEV_DL_AWDL_UNRESTRICTED 27
#define CONS_PALETTE_SIZE 22
#define bfd_family_coff(abfd) (bfd_get_flavour (abfd) == bfd_target_coff_flavour || bfd_get_flavour (abfd) == bfd_target_xcoff_flavour)
#define PRIdMAX __PRI_MAX_LENGTH_MODIFIER__ "d"
#define __WCHAR_MAX__ 0x7fffffff
#define _SC_2_C_DEV 19
#define FIOASYNC _IOW('f', 125, int)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define ASN1_LENLONG 0x80
#define INT16_MAX 32767
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define R_PANELS_H 
#define RLIMIT_AS 5
#define __STDC__ 1
#define bfd_my_archive(abfd) ((abfd)->my_archive)
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define SEC_COFF_SHARED 0x20000000
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define R_SYS_H 
#define S_TYPEISSHM(buf) (0)
#define R_LIB_VERSION_HEADER(x) R_API const char *x ##_version(void)
#define __GCC_IEC_559 2
#define SCNiFAST32 SCNi32
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define R_UTF8_WHITE_HEAVY_CHECK_MARK "✅"
#define _SC_NPROCESSORS_CONF 57
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define R_INOUT 
#define ECHONL 0x00000010
#define __API_DEPRECATED_END 
#define _SC_XOPEN_STREAMS 114
#define __FXSR__ 1
#define bfd_malloc malloc
#define R_ASCII_TABLE_H 
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define F_ADDFILESIGS_RETURN 97
#define _POSIX_SS_REPL_MAX 4
#define SDB_MIN_VALUE 1
#define __disable_tail_calls 
#define Color_BBGRED "\x1b[101m"
#define BFD_IS_RELAXABLE 0x200
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define Color_BGREEN "\x1b[92m"
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define ATTRIBUTE_ALIGNED_ALIGNOF(m) __attribute__ ((__aligned__ (__alignof__ (m))))
#define bfd_get_start_address(abfd) ((abfd)->start_address)
#define FOR_EACH_DISASSEMBLER_OPTION(OPT,OPTIONS) for ((OPT) = (OPTIONS); (OPT) != NULL; (OPT) = next_disassembler_option (OPT))
#define FORM_PRIMITIVE 0x00
#define LINK_MAX 32767
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define KEV_DL_IF_ATTACHED 9
#define FNONBLOCK O_NONBLOCK
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define _SOCKLEN_T 
#define AF_NS 6
#define PF_COIP AF_COIP
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define PF_OSI AF_ISO
#define _SC_TRACE_USER_EVENT_MAX 130
#define R_REGEX_NOSPEC 0020
#define TCIOFLUSH 3
#define R_REGEX_LARGE 01000
#define DST_NONE 0
#define SCNuFAST64 SCNu64
#define EOWNERDEAD 105
#define F_ALLOCATEALL 0x00000004
#define __AVAILABILITY_INTERNAL__ 
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define R_LOG_DEBUG(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_DEBUG, NULL, fmtstr, ##__VA_ARGS__);
#define HAVE_PTHREAD 1
#define POLL_MSG 3
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define ls_foreach(list,it,pos) if ((list)) for (it = (list)->head; it && (pos = it->data); it = it->n)
#define bfd_little_endian(abfd) ((abfd)->xvec->byteorder == BFD_ENDIAN_LITTLE)
#define __FINITE_MATH_ONLY__ 0
#define __IPHONE_13_2 130200
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG 123
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define TAG_GENERALSTRING 0x1B
#define _SC_SHARED_MEMORY_OBJECTS 39
#define ELF_INFO_TYPE_STABS 1
#define IXOFF 0x00000400
#define ERANGE 34
#define _INCLUDE_R_LIST_HEAD_H_ 
#define SIGFPE 8
#define bfd_mach_mips4010 4010
#define ut8 unsigned char
#define GCC_VERSION (__GNUC__ * 1000 + __GNUC_MINOR__)
#define O_EVTONLY 0x00008000
#define B115200 115200
#define SO_OOBINLINE 0x0100
#define HAS_RELOC 0x01
#define SA_RESTART 0x0002
#define TIOCM_CTS 0040
#define F_SETSIZE 43
#define UT16_SUB_OVFCHK(a,b) UT16_ADD_OVFCHK(a,-(b))
#define ETXTBSY 26
#define EMPTY_HOWTO(C) HOWTO ((C), 0, 0, 0, FALSE, 0, complain_overflow_dont, NULL, NULL, FALSE, 0, 0, FALSE)
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define TCOFLUSH 2
#define H_PUT_S16 bfd_h_put_signed_16
#define bfd_get_format(abfd) ((abfd)->format)
#define _U_LONG 
#define NSIG __DARWIN_NSIG
#define PRIXFAST32 PRIX32
#define TAG_GENERALIZEDTIME 0x18
#define bfd_mach_d10v 1
#define __UNIX__ 1
#define ACCESSX_MAX_DESCRIPTORS 100
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define WAKEMON_GET_PARAMS 0x04
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict restrict
#define R_NUMCALC_STRSZ 1024
#define _SC_BC_SCALE_MAX 11
#define __SHRT_MAX__ 0x7fff
#define PF_NDRV AF_NDRV
#define w_stopval w_S.w_Stopval
#define H_PUT_S8 bfd_h_put_signed_8
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define ILL_ILLOPN 4
#define bfd_mach_s390_31 31
#define R_SELWIDGET_MAXW 30
#define bfd_applicable_file_flags(abfd) ((abfd)->xvec->object_flags)
#define __FLT64X_MAX_10_EXP__ 4932
#define BSF_INDIRECT 0x2000
#define Color_BCYAN "\x1b[96m"
#define SIGTTOU 22
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define R_STR_CONSTPOOL_H 
#define bfd_link_just_syms(abfd,sec,info) BFD_SEND (abfd, _bfd_link_just_syms, (sec, info))
#define PRIuMAX __PRI_MAX_LENGTH_MODIFIER__ "u"
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define r_spaces_foreach(sp,it,s) r_crbtree_foreach ((sp)->spaces, (it), (s))
#define bfd_mach_xc16x 1
#define CORNER_TL 6
#define sigmask(m) (1 << ((m)-1))
#define __SNPT 0x0800
#define H_PUT_S64 bfd_h_put_signed_64
#define S_IFWHT 0160000
#define CONS_MAX_ATTR_SZ 16
#define bfd_section_list_insert_before(ABFD,B,S) do { asection *_b = B; asection *_s = S; asection *_prev = _b->prev; _s->prev = _prev; _s->next = _b; _b->prev = _s; if (_prev) _prev->next = _s; else (ABFD)->sections = _s; } while (0)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define _SC_THREAD_STACK_MIN 93
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define _SC_V6_LP64_OFF64 105
#define SOMAXCONN 128
#define XTENSA_LIBISA_H 
#define bfd_print_symbol(b,p,s,e) BFD_SEND (b, _bfd_print_symbol, (b,p,s,e))
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define INSN_HAS_RELOC (1LL << 31)
#define EINPROGRESS 36
#define NET_RT_IFLIST 3
#define _SC_SEM_VALUE_MAX 50
#define R_STR_ISNOTEMPTY(x) ((x) && *(x))
#define _PC_ASYNC_IO 17
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define __APPLE_API_STANDARD 
#define WCHAR_MIN (-WCHAR_MAX-1)
#define SEC_LINK_DUPLICATES_SAME_CONTENTS (SEC_LINK_DUPLICATES_ONE_ONLY | SEC_LINK_DUPLICATES_SAME_SIZE)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define KEV_INET_NEW_ADDR 1
#define _SYS_IOCCOM_H_ 
#define _USER_SIGNAL_H 
#define R_CONS_CURSOR_LEFT "\x1b[D"
#define EUSERS 68
#define SCNo16 "ho"
#define PF_KEY pseudo_AF_KEY
#define SO_RCVBUF 0x1002
#define R_PACKED(__Declaration__) __Declaration__ __attribute__((__packed__))
#define bfd_mach_mrisc2 2
#define _PC_AUTH_OPAQUE_NP 14
#define ST16_ADD_OVFCHK(a,b) ((((b) > 0) && ((a) > ST16_MAX - (b))) || (((b) < 0) && ((a) < ST16_MIN - (b))))
#define _POSIX_READER_WRITER_LOCKS 200112L
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define MSG_WAITSTREAM 0x200
#define bfd_section_alignment(bfd,ptr) ((ptr)->alignment_power)
#define _POSIX_AIO_MAX 1
#define RColor_BBGBLUE RCOLOR(ALPHA_BG, 59, 120, 255, 0x00, 0x00, 0x00, 12)
#define FLUSHO 0x00800000
#define INT_LEAST32_MIN INT32_MIN
#define bfd_mach_bfin 1
#define SCNo32 "o"
#define bfd_mach_mipsisa64 64
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __PTRDIFF_TYPE__ long int
#define UINT_FAST16_MAX UINT16_MAX
#define ATTRIBUTE_PRINTF_1 ATTRIBUTE_PRINTF(1, 2)
#define SZT_ADD_OVFCHK(x,y) ((SIZE_MAX - (x)) < (y))
#define ATTRIBUTE_PRINTF_3 ATTRIBUTE_PRINTF(3, 4)
#define ATTRIBUTE_PRINTF_4 ATTRIBUTE_PRINTF(4, 5)
#define ATTRIBUTE_PRINTF_5 ATTRIBUTE_PRINTF(5, 6)
#define bfd_mach_d10v_ts2 2
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define EFAULT 14
#define F_ADDFILESIGS 61
#define TAG_IA5STRING 0x16
#define EPROTOTYPE 41
#define _SC_SHELL 78
#define r_vector_foreach_prev(vec,it) if (!r_vector_empty (vec)) for (it = (void *)((char *)(vec)->a + (((vec)->len - 1)* (vec)->elem_size)); (char *)it != (char *)(vec)->a; it = (void *)((char *)it - (vec)->elem_size))
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define bfd_mach_mips_octeon 6501
#define _PTHREAD_COND_T 
#define _bfd_int64_low(x) ((unsigned long) (((x) & 0xffffffff)))
#define LIBC_HAVE_PLEDGE 0
#define bfd_get_outsymbols(abfd) ((abfd)->outsymbols)
#define bfd_debug_info_accumulate(abfd,section) BFD_SEND (abfd, _bfd_debug_info_accumulate, (abfd, section))
#define FUNC_ATTR_ALLOC_SIZE(x) __attribute__((alloc_size(x)))
#define _BSD_SEMAPHORE_H 
#define __FLT128_MIN_10_EXP__ (-4931)
#define MONOTONIC_UNIX (MONOTONIC_APPLE || MONOTONIC_LINUX || MONOTONIC_FREEBSD || MONOTONIC_NETBSD)
#define VDSUSP 11
#define __FLT32X_IS_IEC_60559__ 2
#define VSTOP 13
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define SCNo64 __SCN_64_LENGTH_MODIFIER__ "o"
#define _SYS_UNISTD_H_ 
#define BFD64 
#define bfd_section_list_insert_after(ABFD,A,S) do { asection *_a = A; asection *_s = S; asection *_next = _a->next; _s->next = _next; _s->prev = _a; _a->next = _s; if (_next) _next->prev = _s; else (ABFD)->section_last = _s; } while (0)
#define SCNxFAST16 SCNx16
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define _POSIX_AIO_LISTIO_MAX 2
#define _SYS_SELECT_H_ 
#define HHXFMT "hhx"
#define CORNER_TR 6
#define __DARWIN_NBBY 8
#define _POSIX_SPIN_LOCKS (-1)
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define HAVE_LIB_MAGIC 0
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define bfd_mach_hppa10 10
#define bfd_mach_hppa11 11
#define _POSIX_SYNCHRONIZED_IO (-1)
#define EXEC_P 0x02
#define HAVE_LIB_XXHASH 0
#define __SIZEOF_WINT_T__ 4
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define UT64_MAX 0xFFFFFFFFFFFFFFFFULL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __DARWIN_FD_SETSIZE 1024
#define PF_CCITT AF_CCITT
#define SO_USELOOPBACK 0x0040
#define ST8_MAX 0x7F
#define bfd_mach_hppa20 20
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __WATCHOS_3_1_1 30101
#define __PTRDIFF_WIDTH__ 64
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define Color_BGCYAN "\x1b[46m"
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define O_APPEND 0x00000008
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define Color_BBGBLACK Color_BGGRAY
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define __INT8_MAX__ 0x7f
#define SDB_NUM_BUFSZ 64
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define _SC_2_C_BIND 18
#define R_PUNYCODE_H 
#define _POSIX_LINK_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define COLL_WEIGHTS_MAX 2
#define R_CHECKS_LEVEL 2
#define _RPERM_OK (1<<19)
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define CHARCLASS_NAME_MAX 14
#define SO_DEBUG 0x0001
#define R_X509_H 
#define TIOCM_LE 0001
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define bfd_mach_sh2a_nofpu 0x2b
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define VDISCARD 15
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define NET_SERVICE_TYPE_AV 6
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define R_UTF8_BLOCK "\u2588"
#define B7200 7200
#define getchar_unlocked() getc_unlocked(stdin)
#define INPCK 0x00000010
#define PRIO_PROCESS 0
#define R_SYS_ENVSEP ":"
#define NET_SERVICE_TYPE_BK 1
#define VKILL 5
#define _XOPEN_REALTIME_THREADS (-1)
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define SSZT_MAX ST64_MAX
#define ETIMEDOUT 60
#define _WCHAR_H_ 
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define SCNx32 "x"
#define _IN_PORT_T 
#define bfd_get_signed_64(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_64, (ptr))
#define SCHED_OTHER 1
#define ls_iter_get(x) x->data; x=x->n
#define SF_NOUNLINK 0x00100000
#define bfd_section_list_prepend(ABFD,S) do { asection *_s = S; bfd *_abfd = ABFD; _s->prev = NULL; if (_abfd->sections) { _s->next = _abfd->sections; _abfd->sections->prev = _s; } else { _s->next = NULL; _abfd->section_last = _s; } _abfd->sections = _s; } while (0)
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define FIODTYPE _IOR('f', 122, int)
#define PRIuLEAST32 PRIu32
#define R_ASSERT_H 
#define __END_DECLS 
#define bfd_mach_cris_v32 32
#define TMP_MAX 308915776
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define _BSD_MACHINE_SIGNAL_H_ 
#define bfd_mach_mips3900 3900
#define UT64_MIN 0ULL
#define R_STRPOOL_INC 1024
#define F_PEOFPOSMODE 3
#define PRIxFAST32 PRIx32
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define ST8_MIN (-ST8_MAX - 1)
#define WAKEMON_DISABLE 0x02
#define KEV_DL_SIFGENERIC 6
#define r_flist_t void**
#define __PRI_64_LENGTH_MODIFIER__ "ll"
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define _SECURE__COMMON_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define R_UTF8_H 
#define _SC_2_PBS_MESSAGE 63
#define bfd_mach_avr1 1
#define bfd_mach_avr2 2
#define bfd_mach_avr3 3
#define bfd_mach_avr4 4
#define bfd_mach_avr5 5
#define bfd_mach_avr6 6
#define _SYS_FCNTL_H_ 
#define _READ_OK (1<<9)
#define PRIuLEAST64 PRIu64
#define __WATCHOS_AVAILABLE(_vers) 
#define RUNECODE_LINE_HORIZ 0xce
#define SO_NUMRCVPKT 0x1112
#define _XOPEN_ENH_I18N (1)
#define IGNCR 0x00000080
#define TIOCM_RTS 0004
#define H_GET_32 bfd_h_get_32
#define UT32_SUB_OVFCHK(a,b) UT32_ADD_OVFCHK(a,-(b))
#define Color_BGYELLOW "\x1b[43m"
#define bfd_mach_sh2a_nofpu_or_sh3_nommu 0x2a2
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define BFD_JUMP_TABLE_CORE(NAME) NAME ##_core_file_failing_command, NAME ##_core_file_failing_signal, NAME ##_core_file_matches_executable_p
#define ENOTTY 25
#define bfd_mach_ip2022ext 2
#define _r_malloc r_malloc
#define __DBL_DIG__ 15
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define CHECK_REGFILE(INTISA,RF,ERRVAL) do { if ((RF) < 0 || (RF) >= (INTISA)->num_regfiles) { xtisa_errno = xtensa_isa_bad_regfile; strcpy (xtisa_error_msg, "invalid regfile specifier"); return (ERRVAL); } } while (0)
#define EINTR 4
#define AF_INET6 30
#define bfd_mach_tricore 4
#define bfd_h_get_16(abfd,ptr) BFD_SEND (abfd, bfd_h_getx16, (ptr))
#define bfd_is_target_special_symbol(abfd,sym) BFD_SEND (abfd, _bfd_is_target_special_symbol, (abfd, sym))
#define r_return_if_reached() do { H_LOG_ (R_LOGLVL_ERROR, "file %s: line %d (%s): should not be reached\n", __FILE__, __LINE__, R_FUNCTION); return; } while (0)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SHRT_MIN (-SHRT_MAX - 1)
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define _U_INT64_T 
#define ECHILD 10
#define _POSIX_SPAWN (-1)
#define __SHRT_WIDTH__ 16
#define bfd_get_filename(abfd) ((char *) (abfd)->filename)
#define __TVOS_9_1 90100
#define SSZT_MIN ST64_MIN
#define IOPOL_IMPORTANT 1
#define SEC_STRINGS 0x2000000
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define F_THAW_FS 54
#define PF_UNIX PF_LOCAL
#define R2_RBTREE_H 
#define SA_ONSTACK 0x0001
#define bfd_get_16(abfd,ptr) BFD_SEND (abfd, bfd_getx16, (ptr))
#define __GNU 
#define IOPOL_TYPE_DISK 0
#define R_LINE_HISTSIZE 256
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define RUNE_CURVE_CORNER_BL "╰"
#define RUNE_CURVE_CORNER_BR "╯"
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define r_sys_perror(x) r_sys_perror_str(x);
#define bfd_mach_mips_gs464e 3004
#define KEV_INET_SIFBRDADDR 5
#define bfd_mach_mips_gs464 3003
#define SHELL_PATH "/bin/sh"
#define _BLKCNT_T 
#define bfd_get_32(abfd,ptr) BFD_SEND (abfd, bfd_getx32, (ptr))
#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")
#define bfd_h_get_64(abfd,ptr) BFD_SEND (abfd, bfd_h_getx64, (ptr))
#define _REXT_OK (1<<17)
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define SEC_IN_MEMORY 0x4000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define SO_NET_SERVICE_TYPE 0x1116
#define TIOCM_CD TIOCM_CAR
#define DIS_ASM_H 
#define __MAC_10_1 1010
#define SIGNED signed
#define SIOCGLOWAT _IOR('s', 3, int)
#define _STDDEF_H 
#define TAG_PRINTABLESTRING 0x13
#define R_BUF_END 2
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define bfd_mach_tic3x 30
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define CHECK_ALLOC(MEM,ERRVAL) do { if ((MEM) == 0) { xtisa_errno = xtensa_isa_out_of_memory; strcpy (xtisa_error_msg, "out of memory"); return (ERRVAL); } } while (0)
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define SCNoLEAST16 SCNo16
#define bfd_get_signed_16(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_16, (ptr))
#define __MAC_10_7 1070
#define bfd_mach_tic4x 40
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define __AVAILABILITY_VERSIONS__ 
#define bfd_get_64(abfd,ptr) BFD_SEND (abfd, bfd_getx64, (ptr))
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define _PC_CASE_PRESERVING 12
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define bfd_printf_vma(abfd,x) bfd_fprintf_vma (abfd,stdout,x)
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define R_REGEX_EPAREN 8
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define PRIoFAST16 PRIo16
#define __GNUC__ 11
#define __APPLE__ 1
#define __UINT16_C(c) c
#define ELOOP 62
#define NET_SERVICE_TYPE_RD 8
#define SCNoLEAST32 SCNo32
#define NET_SERVICE_TYPE_RV 5
#define SO_DONTTRUNC 0x2000
#define CR0 0x00000000
#define CR1 0x00001000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define SCNdLEAST16 SCNd16
#define PRIoFAST32 PRIo32
#define O_WRONLY 0x0001
#define ATTRIBUTE_NULL_PRINTF(m,n) __attribute__ ((__format__ (__printf__, m, n)))
#define CS6 0x00000100
#define CS7 0x00000200
#define CS8 0x00000300
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define st16 short
#define R_FILE_H 
#define B_IS_SET(x,n) (((x) & (1ULL << (n)))? 1: 0)
#define FIONREAD _IOR('f', 127, int)
#define KEV_DL_PROTO_ATTACHED 14
#define CTA(x,y,z) (x+CTO(y,z))
#define SIGEV_THREAD 3
#define CTI(x,y,z) (*((size_t*)(CTA(x,y,z))))
#define SCNdLEAST32 SCNd32
#define CTO(y,z) ((size_t) &((y*)0)->z)
#define st32 int
#define NET_SERVICE_TYPE_VI 3
#define ARG_MAX (1024 * 1024)
#define NET_SERVICE_TYPE_VO 4
#define R_SYS_BITS_16 2
#define ENOSR 98
#define PRIoFAST64 PRIo64
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define HUD_BUF_SIZE 512
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define R_FREE(x) { free((void *)x); x = NULL; }
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define _SC_NPROCESSORS_ONLN 58
#define R_ALIGNED(x) __attribute__((aligned(x)))
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define SCNxFAST8 SCNx8
#define O_SYMLINK 0x00200000
#define FUNC_ATTR_MALLOC __attribute__((malloc))
#define SCNdLEAST64 SCNd64
#define O_NOCTTY 0x00020000
#define bfd_mach_msp110 110
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define bfd_mach_ms1 1
#define bfd_mach_ms2 3
#define r_list_push(x,y) r_list_append ((x), (y))
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define WORD_BIT 32
#define st64 long long
#define bfd_mach_arm_5TE 9
#define IOCPARM_MASK 0x1fff
#define _T_PTRDIFF 
#define bfd_mach_arm_2a 2
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define DECLARE_GENERIC_FPRINTF_FUNC() static int generic_fprintf_func(void *stream, const char *format, ...) { int ret; va_list ap; if (!buf_global || !format) { return 0; } va_start (ap, format); ret = r_strbuf_vappendf (buf_global, format, ap); va_end (ap); return ret; }
#define _INO_T 
#define CLD_NOOP 0
#define __STDC_VERSION__ 201710L
#define RColor_BBGGREEN RCOLOR(ALPHA_BG, 22, 198, 12, 0x00, 0x00, 0x00, 10)
#define L_ctermid 1024
#define CDB_MAX_VALUE 0xffffff
#define ls_iter_unref(x) x
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define HAVE_FORK 1
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define R_REGEX_BADRPT 13
#define CQUIT 034
#define bfd_mach_s390_64 64
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define _SC_ARG_MAX 1
#define ZERO_FILL(x) memset (&x, 0, sizeof (x))
#define INT_FAST16_MIN INT16_MIN
#define DT_BLK 6
#define ISTRIP 0x00000020
#define _ID_T 
#define SCNxMAX __SCN_MAX_LENGTH_MODIFIER__ "x"
#define SSIZE_MAX LONG_MAX
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define bfd_mach_mips14000 14000
#define UF_OPAQUE 0x00000008
#define SEEK_CUR 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define FFDLY 0x00004000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define bfd_mach_m32r2 '2'
#define AF_ROUTE 17
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define __MAC_10_12_2 101202
#define xmalloc malloc
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define R_SPACES_MAX 512
#define SCNxFAST32 SCNx32
#define _POSIX_HOST_NAME_MAX 255
#define Color_RED "\x1b[31m"
#define RUNE_CURVE_CORNER_TL "╭"
#define bfd_mach_m32rx 'x'
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define _TIME_T 
#define _POSIX_SEM_NSEMS_MAX 256
#define R_STR_UTIL_H 
#define MSG_DONTROUTE 0x4
#define EXTA 19200
#define _I386_SIGNAL_H_ 1
#define R_UTF8_VS16 "\xef\xb8\x8f"
#define __GNUC_STDC_INLINE__ 1
#define R_STACK_H 
#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _SC_XOPEN_REALTIME_THREADS 112
#define FPE_FLTDIV 1
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define bfd_get(bits,abfd,ptr) ((bits) == 8 ? (bfd_vma) bfd_get_8 (abfd, ptr) : (bits) == 16 ? bfd_get_16 (abfd, ptr) : (bits) == 32 ? bfd_get_32 (abfd, ptr) : (bits) == 64 ? bfd_get_64 (abfd, ptr) : (abort (), (bfd_vma) - 1))
#define KEY_TYPE ut64
#define R_REGEX_ATOI 255
#define CONNECT_DATA_AUTHENTICATED 0x4
#define __DBL_HAS_INFINITY__ 1
#define _T_PTRDIFF_ 
#define bfd_mach_z8001 1
#define bfd_mach_z8002 2
#define IOPOL_SCOPE_PROCESS 0
#define _PC_SYMLINK_MAX 24
#define R_MODE_EQUAL 0x080
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define _POSIX_NGROUPS_MAX 8
#define RSIZE_MAX (SIZE_MAX >> 1)
#define Color_RESET_ALL "\x1b[0m\x1b[49m"
#define R_GRAPH_H 
#define TIOCSCTTY _IO('t', 97)
#define HAVE_CLOCK_NANOSLEEP 0
#define bfd_mach_arm_XScale 10
#define __DTF_READALL 0x0008
#define ISIG 0x00000080
#define __DARWIN_OS_INLINE static inline
#define R_USEC_PER_SEC 1000000ULL
#define stdin __stdinp
#define Color_YELLOW "\x1b[33m"
#define bfd_zalloc calloc
#define _PC_2_SYMLINKS 15
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define TIOCOUTQ _IOR('t', 115, int)
#define F_SINGLE_WRITER 76
#define bfd_mach_mcf_isa_b_float_emac 24
#define _SC_CLK_TCK 3
#define SCHED_FIFO 4
#define TAB3 0x00000004
#define _POSIX_PATH_MAX 256
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define ENOATTR 93
#define ls_empty(x) (!x || !x->length)
#define _SYS_TERMIOS_H_ 
#define AF_CHAOS 5
#define F_CHECK_LV 98
#define R_STR_H 
#define __TVOS_AVAILABLE(_vers) 
#define PTHREAD_CANCEL_ENABLE 0x01
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define Color_BGBLUE "\x1b[44m"
#define _PC_REC_MAX_XFER_SIZE 21
#define F_PATHPKG_CHECK 52
#define __FLT32X_HAS_DENORM__ 1
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define R_DIM(x,y,z) (((x)<(y))?(y):((x)>(z))?(z):(x))
#define SA_64REGSET 0x0200
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define SEC_ROM 0x040
#define __MMX_WITH_SSE__ 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define __WATCHOS_UNAVAILABLE 
#define SCHED_RR 2
#define RLIMIT_THREAD_CPULIMITS 0x3
#define _SC_V6_ILP32_OFF32 103
#define PRIi64 __PRI_64_LENGTH_MODIFIER__ "i"
#define _POSIX_REGEXP 200112L
#define __FLT64_HAS_DENORM__ 1
#define UINT_LEAST8_MAX UINT8_MAX
#define _CTYPE_SW1 0x40000000L
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define TIOCGETA _IOR('t', 19, struct termios)
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define SEC_COFF_SHARED_LIBRARY 0x10000000
#define RUSAGE_INFO_V4 4
#define bfd_mach_ppc_403gc 4030
#define TIOCSETAF _IOW('t', 22, struct termios)
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define S_TYPEISTMO(buf) (0)
#define PRIdFAST8 PRId8
#define INFINITY (1.0f/0.0f)
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define _POSIX_MEMORY_PROTECTION 200112L
#define RUNE_LINE_UP "↑"
#define TIOCGETD _IOR('t', 26, int)
#define RColor_BGWHITE RCOLOR(ALPHA_BG, 204, 204, 204, 0x00, 0x00, 0x00, 7)
#define true 1
#define SA_RESETHAND 0x0004
#define __TVOS_10_0_1 100001
#define R_OUT 
#define _SC_RAW_SOCKETS 119
#define bfd_h_get_8(abfd,ptr) bfd_get_8 (abfd, ptr)
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define _POSIX2_LOCALEDEF 200112L
#define Color_DELETE Color_BRED
#define r_list_iter_get(x) (x)->data; (x)=(x)->n
#define PF_PUP AF_PUP
#define __FLT64_MIN_10_EXP__ (-307)
#define SOL_SOCKET 0xffff
#define F_RDAHEAD 45
#define _SC_THREAD_SPORADIC_SERVER 92
#define __SOFF 0x1000
#define WEOF __DARWIN_WEOF
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define R_UTF32_H 
#define BSF_FUNCTION 0x10
#define __SSTR 0x0200
#define __kpi_unavailable 
#define r_realloc(x,y) realloc((x),(y))
#define bfd_free_cached_info(abfd) BFD_SEND (abfd, _bfd_free_cached_info, (abfd))
#define CINTR CTRL('c')
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define bfd_mach_frv 1
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define __unavailable 
#define ARROW_LEFT 9
#define SDB_LIST_SORTED 1
#define bfd_mach_mips4100 4100
#define _SC_STREAM_MAX 26
#define R_NSEC_PER_MSEC 1000000ULL
#define bfd_copy_private_section_data(ibfd,isection,obfd,osection) BFD_SEND (obfd, _bfd_copy_private_section_data, (ibfd, isection, obfd, osection))
#define __amd64 1
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define CEOT CEOF
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define PFMTDPTR "td"
#define KEV_DL_MASTER_ELECTED 23
#define bfd_mach_mips4111 4111
#define r_list_foreach_prev_safe(list,it,tmp,pos) for (it = list->tail; it && (pos = it->data, tmp = it->p, 1); it = tmp)
#define R_SYS_BITS_32 4
#define TIOCM_DSR 0400
#define bfd_mach_mcf_isa_a_nodiv 9
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define PF_DLI AF_DLI
#define RUNECODE_CORNER_TR 0xd0
#define CHECK_STATE(INTISA,ST,ERRVAL) do { if ((ST) < 0 || (ST) >= (INTISA)->num_states) { xtisa_errno = xtensa_isa_bad_state; strcpy (xtisa_error_msg, "invalid state specifier"); return (ERRVAL); } } while (0)
#define bfd_mach_mips4120 4120
#define TIOCM_DTR 0002
#define BFD_HOST_64BIT_LONG 0
#define _SC_2_PBS_LOCATE 62
#define ONOCR 0x00000020
#define __SCN_64_LENGTH_MODIFIER__ "ll"
#define ANSI_PROTOTYPES 1
#define sigemptyset(set) (*(set) = 0, 0)
#define B_UNSET(x,n) ((x) &= ~(1ULL << (n)))
#define R_UTF8_SKULL_AND_CROSSBONES "☠"
#define PARODD 0x00002000
#define PRIx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define KEV_INET_ARPCOLLISION 7
#define ENAMETOOLONG 63
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define __FLT32_HAS_QUIET_NAN__ 1
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define R_SYS_BITS_64 8
#define PRIiLEAST16 PRIi16
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _WCHAR_T 
#define O_NONBLOCK 0x00000004
#define SCNiPTR "li"
#define R_VLOG(lvl,tag,fmtstr,args) r_vlog (MACRO_LOG_FUNC, __FILE__, __LINE__, lvl, tag, fmtstr, args);
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define bfd_is_und_section(sec) ((sec) == bfd_und_section_ptr)
#define WAKEMON_MAKE_FATAL 0x10
#define R_EMPTY2 {{ 0 }}
#define TCSADRAIN 1
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define HAVE_SIGACTION 0
#define SDB_NUM_BASE 16
#define R_W32_H 
#define __FLT64X_MIN_EXP__ (-16381)
#define r_oflist_destroy(x) r_oflist_deserialize (x)
#define SIZE_MAX UINTPTR_MAX
#define CSTART CTRL('q')
#define PRIO_DARWIN_THREAD 3
#define bfd_mach_arm_iWMMXt2 13
#define PRIiLEAST32 PRIi32
#define bfd_get_signed_32(abfd,ptr) BFD_SEND (abfd, bfd_getx_signed_32, (ptr))
#define _PTRDIFF_T 
#define _PC_MAX_INPUT 3
#define TAG_NULL 0x05
#define SEC_HAS_GOT_REF 0x800
#define ST8_SUB_OVFCHK(a,b) ST8_ADD_OVFCHK(a,-(b))
#define R_REGEX_ECOLLATE 3
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define PF_UNSPEC AF_UNSPEC
#define UINT64_C(v) (v ## ULL)
#define Color_MAGENTA "\x1b[35m"
#define R_SYS_DEVNULL "/dev/null"
#define __IPHONE_2_0 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define r_str_cpy(x,y) memmove ((x), (y), strlen (y) + 1);
#define SO_LABEL 0x1010
#define R_MIN(x,y) (((x)>(y))?(y):(x))
#define bfd_set_section_userdata(bfd,ptr,val) (((ptr)->userdata = (val)),TRUE)
#define __FLT32_MAX_EXP__ 128
#define SIOCATMARK _IOR('s', 7, int)
#define SO_NKE 0x1021
#define bfd_section_vma(bfd,ptr) ((ptr)->vma)
#define HAVE_MMAN 1
#define bfd_get_section_alignment(bfd,ptr) ((ptr)->alignment_power + 0)
#define __SOPT 0x0400
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define S_IWUSR 0000200
#define PRIiFAST8 PRIi8
#define bfd_mach_z80full 7
#define SDB_HT_UP_H 
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define SEGV_NOOP 0
#define TAG_NUMERICSTRING 0x12
#define PRIiLEAST64 PRIi64
#define KEV_DL_SIFFLAGS 1
#define bfd_mach_i960_hx 8
#define __GXX_ABI_VERSION 1016
#define UT32_HI(x) ((ut32)(((ut64)(x))>>32)&UT32_MAX)
#define R_CONS_KEY_F3 0xf3
#define R_CONS_KEY_F8 0xf8
#define R_CONS_KEY_F9 0xf9
#define _SC_PAGESIZE 29
#define HAS_DEBUG 0x08
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define ECHOE 0x00000002
#define ECHOK 0x00000004
#define bfd_mach_mipsisa32r2 33
#define bfd_mach_mipsisa32r3 34
#define bfd_mach_mipsisa32r5 36
#define bfd_mach_mipsisa32r6 37
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define _SC_READER_WRITER_LOCKS 76
#define _PC_LINK_MAX 1
#define ITIMER_REAL 0
#define bfd_is_ind_section(sec) ((sec) == bfd_ind_section_ptr)
#define CSUSP CTRL('z')
#define _BSD_I386__TYPES_H_ 
#define buffer_PUTC(s,c) ( ((s)->n != (s)->p) ? ( (s)->x[(s)->p++] = (c), 0 ) : buffer_put((s),&(c),1) )
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define _POSIX_SHELL 200112L
#define WNOHANG 0x00000001
#define _BSD_MACHINE__TYPES_H_ 
#define __swift_unavailable(_msg) 
#define PF_IPX AF_IPX
#define __x86_64 1
#define TIOCMODG _IOR('t', 3, int)
#define SEGV_ACCERR 2
#define __PTRDIFF_T 
#define __packed __attribute__((__packed__))
#define __PTHREAD_CONDATTR_SIZE__ 8
#define UT32_LO(x) ((ut32)((x)&UT32_MAX))
#define B150 150
#define bfd_und_section_ptr ((asection *) &bfd_und_section)
#define _POSIX_ADVISORY_INFO (-1)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define _POSIX2_FORT_RUN 200112L
#define S_IRWXG 0000070
#define TAG_OBJDESCRIPTOR 0x07
#define KEV_DL_IFDELEGATE_CHANGED 25
#define SDB_MAX_KEY 0xff
#define CLASS_CONTEXT 0x80
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define SDB_VSZ 0xffffff
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define R_TH_FUNCTION(x) RThreadFunctionRet (*x)(struct r_th_t *)
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define _VA_LIST 
#define R_UNUSED __attribute__((__unused__))
#define R_BASE64_H 
#define R_STRBUF_SAFEGET(sb) (r_strbuf_get (sb) ? r_strbuf_get (sb) : "")
#define PRIx16 "hx"
#define __INT_FAST8_MAX__ 0x7f
#define UF_SETTABLE 0x0000ffff
#define __OSX_AVAILABLE(_vers) 
#define LOCK_NB 0x04
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define USE_PTRACE_WRAP 0
#define S_IRWXO 0000007
#define __ILP32_OFFBIG (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define _PTHREAD_QOS_H 
#define __not_tail_called 
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define UNUSED __attribute__((__unused__))
#define PRIx32 "x"
#define SCNu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define R_CONS_KEY_F4 0xf4
#define __INT_FAST8_WIDTH__ 8
#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define _POSIX_SYMLOOP_MAX 8
#define bfd_mach_mcf_isa_aplus_emac 15
#define R_REGEX_INVARG 16
#define SEC_DATA 0x020
#define F_TRIM_ACTIVE_FILE 100
#define UQUAD_MAX ULLONG_MAX
#define RUNECODESTR_MIN 0xc8
#define SIGTRAP 5
#define EISDIR 21
#define bfd_mach_mips5000 5000
#define __nonnull 
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define CCTS_OFLOW 0x00010000
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define _SYS_TTYDEFAULTS_H_ 
#define KEV_DL_LINK_ON 13
#define IGNPAR 0x00000004
#define PRIx64 __PRI_64_LENGTH_MODIFIER__ "x"
#define UT64_16U 0xFFFFFFFFFFFF0000ULL
#define O_DSYNC 0x400000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define NL_ARGMAX 9
#define ut8p_b(x) ((x)[0])
#define INT_LEAST8_MAX INT8_MAX
#define bfd_mach_h8300 1
#define TAG_BITSTRING 0x03
#define R_REGEX_NOMATCH 1
#define VSUSP 10
#define TARGET_OS_IPHONE 0
#define SEC_ALLOC 0x001
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define __has_extension(x) 0
#define BSF_LOCAL 0x01
#define SOCK_RAW 3
#define BUFFER_OUTSIZE 8192
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define __FLT64X_DECIMAL_DIG__ 21
#define R_UTF8_POLICE_CARS_REVOLVING_LIGHT "🚨"
#define R2_TYPES_BASE_H 
#define __API_AVAILABLE_END 
#define __DBL_HAS_DENORM__ 1
#define R_SYS_DIR "/"
#define INT_LEAST32_MAX INT32_MAX
#define _NET_NETKEV_H_ 
#define bfd_mach_i960_xa 5
#define GETSIGSINFO_PLATFORM_BINARY 1
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define SCNoFAST8 SCNo8
#define DOT_STYLE_BACKEDGE 2
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define CHAR_BIT __CHAR_BIT__
#define bfd_get_target(abfd) ((abfd)->xvec->name)
#define __OS_AVAILABILITY(_target,_availability) 
#define __WATCHOS_3_0 30000
#define R_BIG_WORD_SIZE 4
#define bfd_mach_frvtomcat 499
#define R_CONS_KEY_F1 0xf1
#define bfd_mach_m68020 4
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define bfd_mach_ppc_601 601
#define _SC_BC_BASE_MAX 9
#define R_CONS_KEY_F2 0xf2
#define SDB_OPTION_FS (1 << 2)
#define SF_SUPPORTED 0x009f0000
#define __NO_INLINE__ 1
#define RColor_BGCYAN RCOLOR(ALPHA_BG, 58, 150, 221, 0x00, 0x00, 0x00, 6)
#define Color_BBGMAGENTA "\x1b[105m"
#define WANT_DYLINK 1
#define USER_SPECIFIED_MACHINE_TYPE (1LL << 29)
#define CORNER_BR 4
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define Color_BWHITE "\x1b[97m"
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define bfd_mach_m68040 6
#define ECONNABORTED 53
#define R_DEFAULT_LOGLVL R_LOGLVL_WARN
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define bfd_canonicalize_symtab(abfd,location) BFD_SEND (abfd, _bfd_canonicalize_symtab, (abfd, location))
#define ls_head(x) x->head
#define R_CONS_KEY_F6 0xf6
#define __enum_options 
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define INT_LEAST8_MIN INT8_MIN
#define r_flist_iterator(x) x
#define BFD_UND_SECTION_NAME "*UND*"
#define _SC_TRACE_NAME_MAX 128
#define R_RANGE_H 
#define __MAC_10_11 101100
#define sdb_aforeach(x,y) { char *next; if (y) for (x=y;;) { x = sdb_anext (x, &next);
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define bfd_print_private_bfd_data(abfd,file) BFD_SEND (abfd, _bfd_print_private_bfd_data, (abfd, file))
#define PF_SYSTEM AF_SYSTEM
#define bfd_mach_m68060 7
#define R_PRINT_JSON_DEPTH_LIMIT 128
#define __DBL_MANT_DIG__ 53
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#define _PC_CASE_SENSITIVE 11
#define r_skiplist_islast(list,el) (el->forward[0] == list->head)
#define __STDC_WANT_LIB_EXT1__ 1
#define BADSIG SIG_ERR
#define HAVE_PTHREAD_NP 1
#define SEC_CONSTRUCTOR 0x080
#define R_TH_TID pthread_t
#define _SCHED_H_ 
#define SV_RESETHAND SA_RESETHAND
#define __SIZEOF_LONG_LONG__ 8
#define B_ODD(x) (!B_EVEN((x)))
#define DST_EET 5
#define F_UNLCK 2
#define CONST const
#define CERASE 0177
#define TIOCMSET _IOW('t', 109, int)
#define SCNi32 "i"
#define RColor_RED RCOLOR(ALPHA_FG, 197, 15, 31, 0x00, 0x00, 0x00, 1)
#define SDB_LIST_UNSORTED 0
#define ECHO 0x00000008
#define BFD_TRADITIONAL_FORMAT 0x400
#define ENETDOWN 50
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define st_mtime st_mtimespec.tv_sec
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define sigfillset(set) (*(set) = ~(sigset_t)0, 0)
#define LINE_MAX 2048
#define __STRING(x) #x
#define bfd_mach_am33_2 332
#define NGROUPS_MAX 16
#define SIGVTALRM 26
#define MAC_OS_VERSION_11_0 110000
#define ls_iterator(x) (x)?(x)->head:NULL
#define EBUSY 16
#define KEV_INET6_DEFROUTER 6
#define RLIMIT_CPU 0
#define B110 110
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define LIBC_HAVE_FORK 1
#define F_SETLKWTIMEOUT 10
#define SCNi64 __SCN_64_LENGTH_MODIFIER__ "i"
#define F_ULOCK 0
#define SI_ASYNCIO 0x10004
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define _SC_TRACE 97
#define __LDBL_DECIMAL_DIG__ 21
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define Color_BLACK "\x1b[30m"
#define _SC_FSYNC 38
#define __API_DEPRECATED(...) 
#define FPE_INTOVF 8
#define F_ADDFILESIGS_INFO 103
#define TIOCPKT_START 0x08
#define _OFF_T 
#define __SDB_WINDOWS__ 0
#define RUNECODESTR_ARROW_LEFT "\xcd"
#define clearerr_unlocked(p) __sclearerr(p)
#define __MAC_10_12_4 101204
#define KEV_DL_NODE_PRESENCE 21
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define bfd_mach_sparc 1
#define SIOCGPGRP _IOR('s', 9, int)
#define PFMT64o "llo"
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define _CLOCK_T 
#define SCNxFAST64 SCNx64
#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define PFMT64x "llx"
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define bfd_update_armap_timestamp(abfd) BFD_SEND (abfd, _bfd_update_armap_timestamp, (abfd))
#define ST64_SUB_OVFCHK(a,b) ST64_ADD_OVFCHK(a,-(b))
#define _SC_2_LOCALEDEF 23
#define R_LIB_VERSION(x) R_API const char *x ##_version(void) { return "" R2_GITTAP; }
#define HAS_LOAD_PAGE 0x1000
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define R_BETWEEN(x,y,z) (((y)>=(x)) && ((y)<=(z)))
#define Color_GRAY "\x1b[90m"
#define __FBSDID(s) 
#define EFTYPE 79
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define R_CONS_CLEAR_LINE "\x1b[2K\r"
#define __IPHONE_8_2 80200
#define FUNC_ATTR_USED __attribute__((used))
#define ST64_MAX ((st64)0x7FFFFFFFFFFFFFFFULL)
#define CMIN 1
#define AT_FDCWD -2
#define _SC_MQ_PRIO_MAX 75
#define INT32_MAX 2147483647
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define R_JOIN_3_PATHS(p1,p2,p3) p1 R_SYS_DIR p2 R_SYS_DIR p3
#define RColor_NULL RCOLOR(0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, -1)
#define r_rbtree_foreach(root,it,data,struc,rb) for ((it) = r_rbtree_first (root); r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_next (&(it)))
#define bfd_mach_sh2a 0x2a
#define R2_UTIL_H 
#define ATTRIBUTE_UNUSED_LABEL ATTRIBUTE_UNUSED
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define PRIO_DARWIN_BG 0x1000
#define SEC_EXCLUDE 0x8000
#define PF_XTP pseudo_AF_XTP
#define CLOCAL 0x00008000
#define CLOCK_REALTIME _CLOCK_REALTIME
#define bfd_mach_sh3e 0x3e
#define _POSIX2_EQUIV_CLASS_MAX 2
#define BSF_DEBUGGING 0x08
#define __SALC 0x4000
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define bfd_mach_sh4a 0x4a
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define SCNiLEAST8 SCNi8
#define H_LOG_(loglevel,fmt,...) r_assert_log (loglevel, fmt, __VA_ARGS__)
#define CEOL 0xff
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define XTENSA_STATE_IS_EXPORTED 0x00000001
#define FILESEC_GUID FILESEC_UUID
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define cdb_datalen(c) ((c)->dlen)
#define NET_RT_DUMP2 7
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define r_oflist_prepend(x,y) r_oflist_deserialize (x), r_list_prepend (x, y)
#define R_TIME_PROFILE_END do{}while(0)
#define TTYDEF_OFLAG (OPOST | ONLCR)
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define __INT_FAST32_TYPE__ int
#define getc_unlocked(fp) __sgetc(fp)
#define bfd_mach_mcf_isa_b_nousp 16
#define H_PUT_8 bfd_h_put_8
#define BUFFER_INIT(op,fd,buf,len) { (buf), 0, (len), (fd), (op) }
#define R_FUNCTION ((const char*) (__func__))
#define RColor_BBGCYAN RCOLOR(ALPHA_BG, 97, 214, 214, 0x00, 0x00, 0x00, 14)
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define S_IWGRP 0000020
#define R_CONS_CURSOR_RIGHT "\x1b[C"
#define R_CONS_KEY_F5 0xf5
#define SIG_ATOMIC_MIN INT32_MIN
#define F_OK 0
#define _PC_PATH_MAX 5
#define BSF_DYNAMIC 0x8000
#define R_REGEX_ASSERT 15
#define R_REGEX_BADPAT 2
#define MSG_SEND 0x1000
#define BSF_DEBUGGING_RELOC 0x20000
#define _INT64_T 
#define TIOCDRAIN _IO('t', 94)
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define _POSIX_MAX_INPUT 255
#define ST64_MIN ((st64)(-ST64_MAX-1))
#define _STDARG_H 
#define R2_ETCDIR "/etc"
#define r_list_head(x) ((x)? (x)->head: NULL)
#define RColor_BGBLUE RCOLOR(ALPHA_BG, 0, 55, 218, 0x00, 0x00, 0x00, 4)
#define __LASTBRANCH_MAX 32
#define EADDRNOTAVAIL 49
#define ESHUTDOWN 58
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define _SC_TIMER_MAX 52
#define R2_TYPES_H 
#define UT16_MIN 0U
#define BFD_SEND(bfd,message,arglist) ((*((bfd)->xvec->message)) arglist)
#define SDB_MAX_VALUE 0xffffff
#define __enum_closed 
#define bfd_mach_i960_jx 7
#define bfd_set_section(x,y) ((x)->section) = (y)
#define _POSIX_THREADS 200112L
#define bfd_mach_mn10300 300
#define _PC_NO_TRUNC 8
#define F_SETOWN 6
#define F_PREALLOCATE 42
#define TAG_OID 0x06
#define __CTYPE_H_ 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define bfd_mach_mips5 5
#define TTYDISC 0
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define BSF_FILE 0x4000
#define AF_DLI 13
#define UT16_ADD_OVFCHK(x,y) ((UT16_MAX - (x)) < (y))
#define PRIO_MAX 20
#define _UINTMAX_T 
#define bfd_mach_mcf_isa_a 10
#define bfd_mach_mcf_isa_b 19
#define BSF_THREAD_LOCAL 0x40000
#define EPWROFF 82
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define RColor_BGMAGENTA RCOLOR(ALPHA_BG, 136, 23, 152, 0x00, 0x00, 0x00, 5)
#define __FLT128_DECIMAL_DIG__ 36
#define PRIxMAX __PRI_MAX_LENGTH_MODIFIER__ "x"
#define CSIZE 0x00000300
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define KEV_DL_IFCAP_CHANGED 19
#define F_TLOCK 2
#define OCRNL 0x00000010
#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x
#define CHECK_OPERAND(INTISA,OPC,ICLASS,OPND,ERRVAL) do { if ((OPND) < 0 || (OPND) >= (ICLASS)->num_operands) { xtisa_errno = xtensa_isa_bad_operand; sprintf (xtisa_error_msg, "invalid operand number (%d); " "opcode \"%s\" has %d operands", (OPND), (INTISA)->opcodes[(OPC)].name, (ICLASS)->num_operands); return (ERRVAL); } } while (0)
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define BFD_JUMP_TABLE_GENERIC(NAME) NAME ##_close_and_cleanup, NAME ##_bfd_free_cached_info, NAME ##_new_section_hook, NAME ##_get_section_contents, NAME ##_get_section_contents_in_window
#define ELF_INFO_TYPE_NONE 0
#define __FLT_RADIX__ 2
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define IOC_IN (__uint32_t)0x80000000
#define Color_BGINSERT "\x1b[48;5;22m"
#define _SC_RE_DUP_MAX 16
#define SCNdPTR "ld"
#define UT64_GT0 0x8000000000000000ULL
#define BFD_JUMP_TABLE_SYMBOLS(NAME) NAME ##_get_symtab_upper_bound, NAME ##_canonicalize_symtab, NAME ##_make_empty_symbol, NAME ##_print_symbol, NAME ##_get_symbol_info, NAME ##_bfd_is_local_label_name, NAME ##_bfd_is_target_special_symbol, NAME ##_get_lineno, NAME ##_find_nearest_line, _bfd_generic_find_line, NAME ##_find_inliner_info, NAME ##_bfd_make_debug_symbol, NAME ##_read_minisymbols, NAME ##_minisymbol_to_symbol
#define XCONCAT4(a,b,c,d) CONCAT4(a,b,c,d)
#define SCNxLEAST16 SCNx16
#define _U_INT32_T 
#define _POSIX_ARG_MAX 4096
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define Color_BLINK "\x1b[5m"
#define EBADMACHO 88
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define SCNx16 "hx"
#define bfd_asymbol_flavour(x) (bfd_asymbol_bfd(x)->xvec->flavour)
#define HOWTO(C,R,S,B,P,BI,O,SF,NAME,INPLACE,MASKSRC,MASKDST,PC) { (unsigned) C, R, S, B, P, BI, O, SF, NAME, INPLACE, MASKSRC, MASKDST, PC }
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define MSG_TRUNC 0x10
#define __QOS_CLASS_AVAILABLE(...) 
#define F_TEST 3
#define _UID_T 
#define SCNxLEAST32 SCNx32
#define KEV_DL_RRC_STATE_CHANGED 28
#define B134 134
#define _POSIX_TIMEOUTS (-1)
#define EOVERFLOW 84
#define sigaddset(set,signo) (*(set) |= __sigbits(signo), 0)
#define S_IRUSR 0000400
#define SIGPIPE 13
#define BUS_ADRERR 2
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define RLIMIT_CORE 4
#define bfd_mach_arm_2 1
#define r_list_empty(x) (!(x) || !(x)->length)
#define SCNxLEAST64 SCNx64
#define RColor_WHITE RCOLOR(ALPHA_FG, 204, 204, 204, 0x00, 0x00, 0x00, 7)
#define bfd_mach_fr450 450
#define SO_TIMESTAMP 0x0400
#define XTENSA_ISA_INTERNAL_H 
#define __DARWIN_64_BIT_INO_T 1
#define ATTRIBUTE_FPTR_PRINTF_1 ATTRIBUTE_FPTR_PRINTF(1, 2)
#define ATTRIBUTE_FPTR_PRINTF_2 ATTRIBUTE_FPTR_PRINTF(2, 3)
#define ATTRIBUTE_FPTR_PRINTF_3 ATTRIBUTE_FPTR_PRINTF(3, 4)
#define ATTRIBUTE_FPTR_PRINTF_4 ATTRIBUTE_FPTR_PRINTF(4, 5)
#define ATTRIBUTE_FPTR_PRINTF_5 ATTRIBUTE_FPTR_PRINTF(5, 6)
#define __TVOS_14_0 140000
#define __FLT32X_MANT_DIG__ 53
#define SCNx64 __SCN_64_LENGTH_MODIFIER__ "x"
#define PFMTSZd "zd"
#define PFMTSZo "zo"
#define _POSIX_IPV6 200112L
#define PFMTSZu "zu"
#define PFMTSZx "zx"
#define PFMT64u "llu"
#define EPROTO 100
#define TIOCM_RI TIOCM_RNG
#define R2_VECTOR_H 
#define bfd_stat_arch_elt(abfd,stat) BFD_SEND (abfd, _bfd_stat_arch_elt,(abfd, stat))
#define SIOCSETVLAN SIOCSIFVLAN
#define SCNoPTR "lo"
#define _GCC_LIMITS_H_ 
#define RUNE_CURVE_CORNER_TR "╮"
#define BSF_NOT_AT_END 0x400
#define W_OK (1<<1)
#define __x86_64__ 1
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define RLIMIT_RSS RLIMIT_AS
#define R_BIG_H 
#define ATTRIBUTE_NORETURN __attribute__ ((__noreturn__))
#define UINT_FAST32_MAX UINT32_MAX
#define O_CREAT 0x00000200
#define bfd_mach_ppc_403 403
#define _SYS_SYSLIMITS_H_ 
#define B38400 38400
#define R_REGEX_NOTBOL 00001
#define ENODEV 19
#define bfd_mach_fr30 0x46523330
#define RUNECODESTR_MAX 0xd5
#define _EXECUTE_OK (1<<11)
#define PF_APPLETALK AF_APPLETALK
#define bfd_discard_group(abfd,sec) BFD_SEND (abfd, _bfd_discard_group, (abfd, sec))
#define KEV_INET6_SUBCLASS 6
#define __PTHREAD_SIZE__ 8176
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define PERROR_WITH_FILELINE 0
#define r_calloc(x,y) calloc((x),(y))
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define _SSIZE_T 
#define bfd_mach_mcf_isa_b_mac 20
#define POLL_OUT 2
#define bfd_mach_m6812 1
#define _POSIX_MONOTONIC_CLOCK (-1)
#define BSF_GLOBAL 0x02
#define TAG_GRAPHICSTRING 0x19
#define _SC_2_PBS_ACCOUNTING 60
#define R_BUF_H 
#define _SC_XBS5_LP64_OFF64 124
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define R_ID_STORAGE_H 
#define __UINT_FAST32_MAX__ 0xffffffffU
#define R2_VERSION_NUMBER 50504
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define MONOTONIC_NETBSD (__NetBSD__ && __NetBSD_Version__ >= 700000000)
#define DT_REG 8
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define __FLT_HAS_QUIET_NAN__ 1
#define _STDINT_H_ 
#define CS5 0x00000000
#define _SC_THREAD_ATTR_STACKADDR 82
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define _POSIX_DELAYTIMER_MAX 32
#define TAG_UNIVERSALSTRING 0x1C
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define R_SYS_BITS_8 1
#define LINE_HORIZ 2
#define USE_LIB_XXHASH 0
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO 25
#define __dead2 __attribute__((__noreturn__))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define _XOPEN_SHM (1)
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define ENODATA 96
#define bfd_get_section_userdata(bfd,ptr) ((ptr)->userdata)
#define SO_SNDBUF 0x1001
#define R_NEW_COPY(x,y) x=(void*)malloc(sizeof(y));memcpy(x,y,sizeof(y))
#define __UINTPTR_TYPE__ long unsigned int
#define BFD_HOST_LONG_LONG 1
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define __WCTYPE_H_ 
#define SDB_API __attribute__ ((visibility ("default")))
#define _I386_LIMITS_H_ 
#define R_NEWS0(x,y) (x*)calloc(y,sizeof(x))
#define _BSD_PTRDIFF_T_ 
#define PRIXPTR "lX"
#define RColor_BBLACK RCOLOR(ALPHA_FG, 118, 118, 118, 0x00, 0x00, 0x00, 8)
#define SIGXFSZ 25
#define O_FSYNC O_SYNC
#define SIGHUP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define ls_foreach_prev(list,it,pos) if ((list)) for (it = list->tail; it && (pos = it->data); it = it->p)
#define F_VOLPOSMODE 4
#define KEV_INET6_NEW_RTADV_ADDR 5
#define B0110 6
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __FLT_DECIMAL_DIG__ 9
#define NULL ((void *)0)
#define R_PKCS7_H 
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define __FLT64X_MAX_EXP__ 16384
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define SCNuPTR "lu"
#define E2BIG 7
#define sdb_aforeach_next(x) if (!next) break; *(next-1) = ','; x = next; } }
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define __PTHREAD_COND_SIZE__ 40
#define r_list_iterator(x) (x)? (x)->head: NULL
#define O_ASYNC 0x00000040
#define CFLUSH CDISCARD
#define __INTMAX_WIDTH__ 64
#define DEFUN(name,arglist,args) name(args)
#define INT_MIN (-INT_MAX - 1)
#define sigdelset(set,signo) (*(set) &= ~__sigbits(signo), 0)
#define AF_NDRV 27
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define _SC_SS_REPL_MAX 126
#define _PC_REC_XFER_ALIGN 23
#define RColor_BCYAN RCOLOR(ALPHA_FG, 97, 214, 214, 0x00, 0x00, 0x00, 14)
#define R_REGEX_EBRACE 9
#define bfd_mach_i960_kb_sb 3
#define R_BASE91_H 
#define _SC_MEMORY_PROTECTION 32
#define R_REGEX_TRACE 00400
#define bfd_mach_xc16xl 2
#define bfd_mach_xc16xs 3
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define PF_NETBIOS AF_NETBIOS
#define UT32_ADD_OVFCHK(x,y) ((UT32_MAX - (x)) < (y))
#define SYNC_VOLUME_WAIT 0x02
#define SO_PEERLABEL 0x1011
#define SEEK_HOLE 3
#define UINTMAX_C(v) (v ## UL)
#define TAG_OCTETSTRING 0x04
#define SEC_MERGE 0x1000000
#define R2_LIBDIR "/usr/local/lib"
#define DST_MET 4
#define R_CONS_KEY_F7 0xf7
#define R_CONS_CMD_DEPTH 100
#define R_STRBUF_H 
#define SO_RANDOMPORT 0x1082
#define HAVE_GPERF 1
#define SIGSTOP 17
#define ENXIO 6
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define _SC_THREAD_CPUTIME 84
#define TIOCPKT_FLUSHREAD 0x01
#define _PC_EXTENDED_SECURITY_NP 13
#define SCNuFAST16 SCNu16
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define R_STR_ISEMPTY(x) (!(x) || !*(x))
#define __STDIO_H_ 
#define NET_SERVICE_TYPE_OAM 7
#define bfd_section_already_linked(abfd,sec) BFD_SEND (abfd, _section_already_linked, (abfd, sec))
#define R_REGEX_ENOSYS (-1)
#define __FLT64_HAS_QUIET_NAN__ 1
#define _SECURE__STDIO_H_ 
#define WNOWAIT 0x00000020
#define TIOCMODS _IOW('t', 4, int)
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define RColor_BBGWHITE RCOLOR(ALPHA_BG, 242, 242, 242, 0x00, 0x00, 0x00, 15)
#define SZT_MAX UT64_MAX
#define bfd_put_signed_8 bfd_put_8
#define L_XTND SEEK_END
#define SCNuFAST32 SCNu32
#define PRIdFAST16 PRId16
#define __BFD_H_SEEN__ 
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define RColor_BBGRED RCOLOR(ALPHA_BG, 231, 72, 86, 0x00, 0x00, 0x00, 9)
#define bfd_mach_arm_iWMMXt 12
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define FAPPEND O_APPEND
#define STRINGX(s) #s
#define UIOCCMD(n) _IO('u', n)
#define O_ALERT 0x20000000
#define KEV_DL_IF_DETACHED 11
#define RColor_GRAY RColor_BBLACK
#define _POSIX2_PBS_LOCATE (-1)
#define ELF_INFO_TYPE_JUST_SYMS 4
#define RColor_BWHITE RCOLOR(ALPHA_FG, 242, 242, 242, 0x00, 0x00, 0x00, 15)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define bfd_mach_mcf_isa_aplus_mac 14
#define r_ref(x) x->R_REF_NAME++;
#define S_IFSOCK 0140000
#define SEC_RELOC 0x004
#define __PTHREAD_ATTR_SIZE__ 56
#define bfd_mach_mcf_isa_a_mac 11
#define __exported_push _Pragma("GCC visibility push(default)")
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define VA_OPEN(AP,VAR) { va_list AP; va_start(AP, VAR); { struct Qdmy
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define F_GETCODEDIR 72
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define HAVE_PTRACE 1
#define INT_FAST8_MAX INT8_MAX
#define false 0
#define POLL_HUP 6
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define RLIMIT_NOFILE 8
#define WSTOPPED 0x00000008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define _ANSIDECL_H 1
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define B76800 76800
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define AF_ISO 7
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define PRIuFAST32 PRIu32
#define RUNE_LINE_HORIZ "─"
#define bfd_get_symbol_leading_char(abfd) ((abfd)->xvec->symbol_leading_char)
#define __k8__ 1
#define __UINT16_TYPE__ short unsigned int
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define _SYS__PTHREAD_TYPES_H_ 
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define bfd_mach_arm_3M 4
#define PRIiPTR "li"
#define SIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_mid,type_max) static inline bool overflow_name(type_base a, type_base b) { return (!b || (a == type_mid && b == type_max)); }
#define FALSE 0
#define PRIoMAX __PRI_MAX_LENGTH_MODIFIER__ "o"
#define SZT_MIN UT64_MIN
#define _POSIX_MEMLOCK_RANGE (-1)
#define __LP64__ 1
#define S_IEXEC S_IXUSR
#define VOLATILE volatile
#define TIOCPKT_IOCTL 0x40
#define bfd_mach_arm_4T 6
#define TAG_EXTERNAL 0x08
#define H_GET_S32 bfd_h_get_signed_32
#define R_SYS_ENDIAN_BIG 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define RFList void**
#define ONLRET 0x00000040
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define R_UTF16_H 
#define bfd_mach_arm_5T 8
#define SLIPDISC 4
#define _SC_CLOCK_SELECTION 67
#define TIOCPKT_STOP 0x04
#define __MAC_10_12_1 101201
#define PRIO_DARWIN_NONUI 0x1001
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define KEV_INET_SIFDSTADDR 4
#define bfd_mach_sh2a_nofpu_or_sh4_nommu_nofpu 0x2a1
#define ETIME 101
#define Color_BMAGENTA "\x1b[95m"
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define RColor_BGREEN RCOLOR(ALPHA_FG, 22, 198, 12, 0x00, 0x00, 0x00, 10)
#define __FLT_DIG__ 6
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define bfd_mach_frvsimple 2
#define R_PTR_MOVE(d,s) d=s;s=NULL;
#define r_offsetof(type,member) offsetof(type, member)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define KEV_DL_NODE_ABSENCE 22
#define FUNC_ATTR_CONST __attribute__((const))
#define bfd_mach_m6812s 2
#define __BSD__ 0
#define _RUNETYPE_H_ 
#define TIOCFLUSH _IOW('t', 16, int)
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define NLDLY 0x00000300
#define bfd_mach_rs6k_rs1 6001
#define bfd_mach_rs6k_rs2 6002
#define STDIN_FILENO 0
#define UINT_FAST8_MAX UINT8_MAX
#define __INT_MAX__ 0x7fffffff
#define bfd_get_flavour(abfd) ((abfd)->xvec->flavour)
#define F_GETFD 1
#define bfd_mach_rs6k_rsc 6003
#define UINT8_MAX 255
#define HUPCL 0x00004000
#define Color_BRED "\x1b[91m"
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define _POSIX_CLOCKRES_MIN 20000000
#define Color_INVERT_RESET "\x1b[27m"
#define opcodes_error_handler _bfd_error_handler
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define R_TIME_PROFILE_ENABLED 0
#define LLONG_MAX __LONG_LONG_MAX__
#define r_rbtree_iter_get(it,struc,rb) (container_of ((it)->path[(it)->len-1], struc, rb))
#define bfd_get_symcount(abfd) ((abfd)->symcount)
#define __TVOS_12_4 120400
#define HAVE_EXPLICIT_BZERO 0
#define TAG_EMBEDDED_PDV 0x0B
#define MSG_OOB 0x1
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define bfd_mach_i960_mc 4
#define __INT64_TYPE__ long long int
#define TCIOFF 3
#define EIO 5
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define R_MAX(x,y) (((x)>(y))?(x):(y))
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define _SC_AIO_PRIO_DELTA_MAX 44
#define ENETUNREACH 51
#define _MACH_PORT_T 
#define _SC_ADVISORY_INFO 65
#define UINT32_C(v) (v ## U)
#define _POSIX_SYMLINK_MAX 255
#define TIOCPKT _IOW('t', 112, int)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define CLNEXT CTRL('v')
#define PFMT64d "lld"
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define PARMRK 0x00000008
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE (-1)
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define Color_HLDELETE Color_BGDELETE Color_DELETE
#define CLASS_APPLICATION 0x40
#define INT_FAST32_MIN INT32_MIN
#define R_TYPES_OVERFLOW_H 
#define _POSIX_FSYNC 200112L
#define STDOUT_FILENO 1
#define bfd_get_section_vma(bfd,ptr) ((ptr)->vma + 0)
#define SEM_VALUE_MAX 32767
#define SEC_DEBUGGING 0x2000
#define TYPES_H 
#define R_REF_TYPE RRef R_REF_NAME
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define TABLDISC 3
#define AF_HYLINK 15
#define XSTRING(s) STRINGX(s)
#define _CADDR_T 
#define CPF_OVERWRITE 0x0001
#define BC_DIM_MAX 2048
#define ASCII_MAX 127
#define __DARWIN_C_FULL 900000L
#define FOOTPRINT_INTERVAL_RESET 0x1
#define RUNECODESTR_ARROW_RIGHT "\xcc"
#define B_TOGGLE(x,n) ((x) ^= (1ULL << (n)))
#define ENOSPC 28
#define HAS_LOCALS 0x20
#define ENOEXEC 8
#define CONS_COLORS_SIZE 21
#define FPE_NOOP 0
#define R_IFNULL(x) 
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define bfd_mach_ppc_rs64iii 643
#define R2_VERSION_PATCH 4
#define B0 0
#define B4(a,b,c,d) ((a<<12)|(b<<8)|(c<<4)|(d))
#define EOPNOTSUPP 102
#define _POSIX2_PBS_MESSAGE (-1)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define _MACH_MACHINE__STRUCTS_H_ 
#define bfd_mach_cris_v0_v10 255
#define ASN1_TAG 0x1F
#define SV_ONSTACK SA_ONSTACK
#define SIGTSTP 18
#define __SIZEOF_INT128__ 16
#define MACRO_LOG_FUNC __func__
#define bfd_section_removed_from_list(ABFD,S) ((S)->next ? (S)->next->prev != (S) : (ABFD)->section_last != (S))
#define bfd_get_output_section(x) ((x)->section->output_section)
#define F_GETLKPID 66
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES (-1)
#define __ATOMIC_RELAXED 0
#define RLIMIT_FSIZE 1
#define CRDLY 0x00003000
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define LDBLFMT "Lf"
#define buffer_GETC(s,c) ( ((s)->p > 0) ? ( *(c) = (s)->x[(s)->n], buffer_SEEK((s),1), 1 ) : buffer_get((s),(c),1) )
#define bfd_mach_mips6000 6000
#define boolt int
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define BC_SCALE_MAX 99
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define ENOSTR 99
#define FUNC_ATTR_ALLOC_ALIGN(x) __attribute__((alloc_align(x)))
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define __API_AVAILABLE(...) 
#define r_rbtree_foreach_prev(root,it,data,struc,rb) for ((it) = r_rbtree_last (root); r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_prev (&(it)))
#define _INT8_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define BFD_HOST_64_BIT long long
#define TIOCUCNTL _IOW('t', 102, int)
#define FS "/"
#define ESRCH 3
#define RUNECODESTR_CORNER_TL "\xcf"
#define R_REGEX_EBRACK 7
#define __INT_LEAST32_TYPE__ int
#define CWERASE CTRL('w')
#define Color_BGGREEN "\x1b[42m"
#define EHOSTDOWN 64
#define AF_LINK 18
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define TIOCSSIZE TIOCSWINSZ
#define _POSIX2_LINE_MAX 2048
#define r_skiplist_foreach(list,it,pos) if (list) for (it = list->head->forward[0]; it != list->head && ((pos = it->data) || 1); it = it->forward[0])
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define SCNiFAST16 SCNi16
#define SF_FIRMLINK 0x00800000
#define ENOLCK 77
#define ENFILE 23
#define ASCII_MIN 32
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define R_PJ_H 1
#define R_IN 
#define SEC_LINK_DUPLICATES_SAME_SIZE 0x100000
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define R_SYS_ENDIAN_BI 3
#define UT32_LT0 0x7FFFFFFFU
#define BFD_ARCH_SIZE 64
#define _STDDEF_H_ 
#define _XOPEN_UNIX (1)
#define B4800 4800
#define bfd_minisymbol_to_symbol(b,d,m,f) BFD_SEND (b, _minisymbol_to_symbol, (b, d, m, f))
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define CLK_TCK __DARWIN_CLK_TCK
#define ENOSYS 78
#define _SC_LOGIN_NAME_MAX 73
#define bfd_mach_xstormy16 1
#define B10000 16
#define ferror_unlocked(p) __sferror(p)
#define S_IXUSR 0000100
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define R_CACHE_H 
#define __INT_FAST8_TYPE__ signed char
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define _SC_TIMERS 41
#define LIBC_HAVE_SYSTEM 1
#define UT64_8U 0xFFFFFFFFFFFFFF00ULL
#define B10010 18
#define B10011 19
#define DIRBLKSIZ 1024
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define _SC_JOB_CONTROL 6
#define va_arg(v,l) __builtin_va_arg(v,l)
#define r_list_iter_next(x) ((x)? 1: 0)
#define AT_REMOVEDIR 0x0080
#define SCNiFAST64 SCNi64
#define WAIT_ANY (-1)
#define R_BTW(x,y,z) (((x)>=(y))&&((y)<=(z)))?y:x
#define _SC_2_CHAR_TERM 20
#define RColor_BBLUE RCOLOR(ALPHA_FG, 59, 120, 255, 0x00, 0x00, 0x00, 12)
#define __GETHOSTUUID_H 
#define BFD_COM_SECTION_NAME "*COM*"
#define SCNo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define _SYS_TYPES_H_ 
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define SDB_MODE 0644
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define bfd_put(bits,abfd,val,ptr) ((bits) == 8 ? bfd_put_8 (abfd, val, ptr) : (bits) == 16 ? bfd_put_16 (abfd, val, ptr) : (bits) == 32 ? bfd_put_32 (abfd, val, ptr) : (bits) == 64 ? bfd_put_64 (abfd, val, ptr) : (abort (), (void) 0))
#define errno (*__error())
#define ENOTSUP 45
#define bfd_get_symbol_info(b,p,e) BFD_SEND (b, _bfd_get_symbol_info, (b,p,e))
#define __AVAILABILITY__ 
#define XTENSA_OPERAND_IS_REGISTER 0x00000001
#define SOCK_SEQPACKET 5
#define R_OK (1<<2)
#define __TYPES_H_ 
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define bfd_set_private_flags(abfd,flags) BFD_SEND (abfd, _bfd_set_private_flags, (abfd, flags))
#define R_MODE_SIMPLE 0x004
#define R_CTYPES_H 
#define w_coredump w_T.w_Coredump
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define SEC_LINK_DUPLICATES 0x40000
#define XTENSA_OPCODE_IS_LOOP 0x00000004
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define TIOCREMOTE _IOW('t', 105, int)
#define ICRNL 0x00000100
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define r_interval_tree_foreach(tree,it,dat) if ((tree)->root) for ((it) = r_rbtree_first (&(tree)->root->node); r_rbtree_iter_has (&it) && (dat = r_interval_tree_iter_get (&it)->data); r_rbtree_iter_next (&(it)))
#define SIGEV_SIGNAL 1
#define PRIxFAST8 PRIx8
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define SDB_IPI __attribute__ ((visibility ("hidden")))
#define __DARWIN_VERS_1050 1
#define RColor_GREEN RCOLOR(ALPHA_FG, 19, 161, 14, 0x00, 0x00, 0x00, 2)
#define _r_realloc r_realloc
#define QUAD_MIN LLONG_MIN
#define UTIME_OMIT -2
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define TIOCIXON _IO('t', 129)
#define R_STRPOOL_H 
#define FOPEN_MAX 20
#define LINE_VERT 0
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define WP_TEXT 0x80
#define bfd_mach_sh3_dsp 0x3d
#define bfd_get_dynamic_reloc_upper_bound(abfd) BFD_SEND (abfd, _bfd_get_dynamic_reloc_upper_bound, (abfd))
#define RLIM_SAVED_MAX RLIM_INFINITY
#define __DARWIN_MAXPATHLEN 1024
#define RUNECODE_LINE_CROSS 0xc9
#define TIOCM_SR 0020
#define TIOCM_ST 0010
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EF_IS_SYNTHETIC 0x00000020
#define B75 75
#define _STRING_H_ 
#define R2_CONS_H 
#define R_SYS_TMP "TMPDIR"
#define ST8_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST8_MAX - (x))) || ((x) < 0 && (a) < ST8_MIN - (x)))
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define bfd_init_private_section_data(ibfd,isec,obfd,osec,link_info) BFD_SEND (obfd, _bfd_init_private_section_data, (ibfd, isec, obfd, osec, link_info))
#define bfd_mach_mips10000 10000
#define CDB_HASHSTART 5381
#define L_SET SEEK_SET
#define TOSTOP 0x00400000
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define HAVE_EXPLICIT_MEMSET 0
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define ITIMER_PROF 2
#define BFD_JUMP_TABLE_COPY(NAME) NAME ##_bfd_copy_private_bfd_data, NAME ##_bfd_merge_private_bfd_data, _bfd_generic_init_private_section_data, NAME ##_bfd_copy_private_section_data, NAME ##_bfd_copy_private_symbol_data, NAME ##_bfd_copy_private_header_data, NAME ##_bfd_set_private_flags, NAME ##_bfd_print_private_bfd_data
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define R_EDGES_X_INC 4
#define PRIoPTR "lo"
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define RUNECODESTR_LINE_UP "\xd1"
#define bfd_debug_info_start(abfd) BFD_SEND (abfd, _bfd_debug_info_start, (abfd))
#define bfd_mach_sh2e 0x2e
#define TIOCMBIS _IOW('t', 108, int)
#define _SC_SYNCHRONIZED_IO 40
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define INIT_DISASSEMBLE_INFO_NO_ARCH(INFO,STREAM,FPRINTF_FUNC) init_disassemble_info (&(INFO), (STREAM), (fprintf_ftype) (FPRINTF_FUNC))
#define bfd_set_section_alignment(bfd,ptr,val) (((ptr)->alignment_power = (val)),TRUE)
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define r_list_foreach_prev(list,it,pos) if (list) for (it = list->tail; it && (pos = it->data, 1); it = it->p)
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define _SC_XOPEN_SHM 113
#define __LONG_WIDTH__ 64
#define HOWTO_PREPARE(relocation,symbol) { if (symbol != NULL) { if (bfd_is_com_section (symbol->section)) { relocation = 0; } else { relocation = symbol->value; } } }
#define SO_NWRITE 0x1024
#define SIG_ERR ((void (*)(int))-1)
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define _r_free r_free
#define WAKEMON_ENABLE 0x01
#define CHILD_MAX 266
#define bfd_mach_mips_octeon2 6502
#define bfd_mach_mips_octeon3 6503
#define R_INTERVALTREE_H 
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define CDB_MAX_KEY 0xff
#define bfd_find_line(abfd,syms,sym,file,line) BFD_SEND (abfd, _bfd_find_line, (abfd, syms, sym, file, line))
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define EPFNOSUPPORT 46
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 42
#define bfd_is_com_section(ptr) (((ptr)->flags & SEC_IS_COMMON) != 0)
#define bfd_get_section_name(bfd,ptr) ((ptr)->name + 0)
#define bfd_mach_mips_octeonp 6601
#define bfd_mach_mipsisa32 32
#define LONG_BIT 64
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define MHTNO 0
#define EMFILE 24
#define _INTTYPES_H_ 
#define HAS_CLOCK_MONOTONIC 0
#define CDSUSP CTRL('y')
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define SCNxLEAST8 SCNx8
#define BFD_LINKER_CREATED 0x2000
#define SA_NODEFER 0x0010
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define st_birthtime st_birthtimespec.tv_sec
#define CTRL(x) (x&037)
#define POLL_PRI 5
#define PROTO(type,name,arglist) type name arglist
#define ESHLIBVERS 87
#define R_SELWIDGET_DIR_DOWN 1
#define SIGILL 4
#define r_oflist_serialize(x) x->array = r_flist_new (r_list_length (x)), { int idx = 0; void *ptr; RListIter *iter; r_list_foreach (x, iter, ptr) r_flist_set (x->array, idx++, ptr); } x->array;
#define HtName_(name) name ##UP
#define r_pvector_foreach(vec,it) for (it = (void **)(vec)->v.a; it != (void **)(vec)->v.a + (vec)->v.len; it++)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define ST16_MAX 0x7FFF
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define _SS_MAXSIZE 128
#define AT_EACCESS 0x0010
#define __INTMAX_TYPE__ long int
#define SIGINT 2
#define bfd_mach_arm_5 7
#define R_SYS_OS "darwin"
#define bfd_mach_mcf_isa_a_emac 12
#define bfd_mach_ppc_505 505
#define _SC_V6_LPBIG_OFFBIG 106
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define SDB_OPTION_NONE 0
#define BFD_RELOC_SPARC_DISP64 BFD_RELOC_64_PCREL
#define R_CONS_CURSOR_UP "\x1b[A"
#define bfd_mach_mips4300 4300
#define SIGIOT SIGABRT
#define R2_VERSION_MAJOR 5
#define MHTSZ 32
#define bfd_mach_mips5900 5900
#define _POSIX_TIMER_MAX 32
#define bfd_mach_cpu32 8
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define S_IXGRP 0000010
#define R_QUEUE_H 
#define EBADEXEC 85
#define __ATOMIC_CONSUME 1
#define bfd_h_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx16, (val, ptr))
#define ASN1_FORM 0x20
#define bfd_mach_ia64_elf32 32
#define PRIuLEAST8 PRIu8
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define bfd_get_8(abfd,ptr) (*(unsigned char *) (ptr) & 0xff)
#define _U_CHAR 
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define Color_RESET_BG "\x1b[49m"
#define INTMAX_C(v) (v ## L)
#define ILL_PRVOPC 3
#define TIOCSCONS _IO('t', 99)
#define EADDRINUSE 48
#define R_SYS_HOME "HOME"
#define CHECK_OPCODE(INTISA,OPC,ERRVAL) do { if ((OPC) < 0 || (OPC) >= (INTISA)->num_opcodes) { xtisa_errno = xtensa_isa_bad_opcode; strcpy (xtisa_error_msg, "invalid opcode specifier"); return (ERRVAL); } } while (0)
#define bfd_h_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx32, (val, ptr))
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define R_ARRAY_SIZE(x) (sizeof (x) / sizeof ((x)[0]))
#define WCOREFLAG 0200
#define PF_CNT AF_CNT
#define SO_NP_EXTENSIONS 0x1083
#define bfd_put_16(abfd,val,ptr) BFD_SEND (abfd, bfd_putx16, ((val),(ptr)))
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define r_list_foreach_iter(list,it) if (list) for (it = list->head; it; it = it->n)
#define F_FLUSH_DATA 40
#define _INO64_T 
#define R2_DATDIR "/usr/local/share"
#define SCM_TIMESTAMP 0x02
#define bfd_mach_ia64_elf64 64
#define CDTR_IFLOW 0x00040000
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define bfd_applicable_section_flags(abfd) ((abfd)->xvec->section_flags)
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define _U_SHORT 
#define SI_TIMER 0x10003
#define ST16_MIN (-ST16_MAX-1)
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define bfd_put_32(abfd,val,ptr) BFD_SEND (abfd, bfd_putx32, ((val),(ptr)))
#define static_assert _Static_assert
#define NEWHOWTO(FUNCTION,NAME,SIZE,REL,IN) HOWTO (0, 0, SIZE, 0, REL, 0, complain_overflow_dont, FUNCTION, NAME, FALSE, 0, 0, IN)
#define bfd_h_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_h_putx64, (val, ptr))
#define r_list_foreach(list,it,pos) if (list) for (it = list->head; it && (pos = it->data, 1); it = it->n)
#define _I386__LIMITS_H_ 
#define bfd_get_elt_at_index(b,i) BFD_SEND (b, _bfd_get_elt_at_index, (b,i))
#define SOCK_DGRAM 2
#define bfd_mach_msp15 15
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_3 130300
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define sv_onstack sv_flags
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define PRIi16 "hi"
#define AF_ISDN 28
#define R_CONS_GREP_WORD_SIZE 64
#define _SC_HOST_NAME_MAX 72
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define MDMBUF 0x00100000
#define bfd_mach_mips_loongson_2f 3002
#define PRIdPTR "ld"
#define Color_HLINSERT Color_BGINSERT Color_INSERT
#define AF_IMPLINK 3
#define ENOENT 2
#define PF_HYLINK AF_HYLINK
#define bfd_put_64(abfd,val,ptr) BFD_SEND (abfd, bfd_putx64, ((val), (ptr)))
#define PRIxLEAST8 PRIx8
#define R_DEBRUIJN_H 
#define B300 300
#define _PTHREAD_KEY_T 
#define __UINT32_TYPE__ unsigned int
#define BFD_RELOC_SPARC_64 BFD_RELOC_64
#define bfd_asymbol_base(x) ((x)->section->vma)
#define Color_BYELLOW "\x1b[93m"
#define PRId16 "hd"
#define ASN1_JSON_NULL "null"
#define PRIuFAST64 PRIu64
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define bfd_mach_sparc_v9a 8
#define bfd_mach_sparc_v9b 10
#define fprintf_vma(s,x) fprintf ((s), "%08lx%08lx", _bfd_int64_high (x), _bfd_int64_low (x))
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define SIGTERM 15
#define PTHREAD_KEYS_MAX 512
#define TIOCSETAW _IOW('t', 21, struct termios)
#define BFD_IND_SECTION_NAME "*IND*"
#define R_REGEX_ESUBREG 6
#define r_list_tail(x) ((x)? (x)->tail: NULL)
#define PRId32 "d"
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define PF_RTIP pseudo_AF_RTIP
#define UT8_ADD_OVFCHK(x,y) ((UT8_MAX - (x)) < (y))
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define EHOSTUNREACH 65
#define Color_BGBLACK "\x1b[40m"
#define DT_FIFO 1
#define UT64_SUB_OVFCHK(a,b) UT64_ADD_OVFCHK(a,-(b))
#define XTENSA_ISA_VERSION 7000
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define bfd_h_put_signed_8(abfd,val,ptr) bfd_put_8 (abfd, val, ptr)
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define _POSIX_THREAD_KEYS_MAX 128
#define R_CONS_GREP_TOKENS 64
#define IS_PRINTABLE(x) ((x) >=' ' && (x) <= '~')
#define UT16_GT0 0x8000U
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define _DIRENT_H_ 
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define __TVOS_14_3 140300
#define __LDBL_DIG__ 18
#define TIOCNOTTY _IO('t', 113)
#define R_SYS_BASE ((ut64)0x100000000)
#define PRId64 __PRI_64_LENGTH_MODIFIER__ "d"
#define VINTR 8
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define KEV_DL_SIFPHYS 4
#define PF_NS AF_NS
#define S_IROTH 0000004
#define _MODE_T 
#define ___int_ptrdiff_t_h 
#define _SC_BC_DIM_MAX 10
#define CHECK_SYSREG(INTISA,SYSREG,ERRVAL) do { if ((SYSREG) < 0 || (SYSREG) >= (INTISA)->num_sysregs) { xtisa_errno = xtensa_isa_bad_sysreg; strcpy (xtisa_error_msg, "invalid sysreg specifier"); return (ERRVAL); } } while (0)
#define R_PERM_RWX (R_PERM_R|R_PERM_W|R_PERM_X)
#define ut16 unsigned short
#define KEV_DL_QOS_MODE_CHANGED 29
#define __APPLE_API_PRIVATE 
#define CDISCARD CTRL('o')
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define CDB_MAKE_H 
#define _OS__OSBYTEORDER_H 
#define bfd_mach_ppc_a35 35
#define O_BINARY 0
#define PF_VSOCK AF_VSOCK
#define PRIoFAST8 PRIo8
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define PRIuFAST8 PRIu8
#define BITS2BYTES(x) (((x)/8)+(((x)%8)?1:0))
#define UF_APPEND 0x00000004
#define _U_INT16_T 
#define UT64_32U 0xFFFFFFFF00000000ULL
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define F_CHKCLEAN 41
#define F_PUNCHHOLE 99
#define ut32 unsigned int
#define NET_RT_DUMP 1
#define FP_PREC_53B 2
#define PF_LOCAL AF_LOCAL
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define SCNuFAST8 SCNu8
#define r_skiplist_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head->forward[0]; it != list->head && ((pos = it->data) || 1) && ((tmp = it->forward[0]) || 1); it = tmp)
#define FPE_FLTUND 3
#define SF_SETTABLE 0x3fff0000
#define CPF_IGNORE_MODE 0x0002
#define X_OK (1<<0)
