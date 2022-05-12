#define sa_sigaction __sigaction_u.__sa_sigaction
#define TCP_KEEPCNT 0x102
#define R_BIN_ENTRY_TYPE_PREINIT 5
#define JEMALLOC_RESTRICT_RETURN 
#define CACHELINE_CEILING(s) (((s) + CACHELINE_MASK) & ~CACHELINE_MASK)
#define iaalloc JEMALLOC_N(iaalloc)
#define _Nullable 
#define ctl_postfork_child JEMALLOC_N(ctl_postfork_child)
#define tsd_boot0 JEMALLOC_N(tsd_boot0)
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HAVE_PTY __UNIX__ && LIBC_HAVE_FORK && !__sun
#define TCPOPT_SACK_PERMITTED 4
#define EMULTIHOP 95
#define ut64 unsigned long long
#define EAI_BADHINTS 12
#define ut8p_ld(x) ((x)[3]|((x)[2]<<8)|((x)[1]<<16)|((x)[0]<<24))
#define qr(a_type) struct { a_type *qre_next; a_type *qre_prev; }
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define extent_node_prof_tctx_get JEMALLOC_N(extent_node_prof_tctx_get)
#define _UINT64_T 
#define R_PRINT_FLAGS_SECTION 0x00200000
#define TIOCDSIMICROCODE _IO('t', 85)
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define PF_RESERVED_36 AF_RESERVED_36
#define R_ANAL_ARCHINFO_INV_OP_SIZE 2
#define PRIO_MIN -20
#define clrnd(i) (i)
#define IS_WHITECHAR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r')
#define __UINT_LEAST16_MAX__ 0xffff
#define arena_mapbits_unallocated_set JEMALLOC_N(arena_mapbits_unallocated_set)
#define tcp6_seq tcp_seq
#define _PTHREAD_IMPL_H_ 
#define R_LIB_SYMFUNC "radare_plugin_function"
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define Color_BBGCYAN "\x1b[106m"
#define _POSIX2_SW_DEV 200112L
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define ST64_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST64_MAX - (x))) || (((x) < 0) && (a) < ST64_MIN - (x)))
#define RE_DUP_MAX 255
#define DW_AT_external 0x3f
#define DW_AT_decl_column 0x39
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define _SC_NGROUPS_MAX 4
#define tsd_tsd JEMALLOC_N(tsd_tsd)
#define HAVE_SIGACTION 0
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define qr_reverse_foreach(var,a_qr,a_field) for ((var) = ((a_qr) != NULL) ? qr_prev(a_qr, a_field) : NULL; (var) != NULL; (var) = (((var) != (a_qr)) ? (var)->a_field.qre_prev : NULL))
#define r_io_submap_from(sm) (r_io_map_begin (sm))
#define arena_decay_ticks JEMALLOC_N(arena_decay_ticks)
#define PZERO 22
#define R_CORE_PRJ_ANAL_SEEK 0x0400
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define R_HASH_SIZE_CRC32_XFER 4
#define _SC_SPIN_LOCKS 80
#define DW_OP_reg0 0x50
#define PAGE_MASK ((size_t)(PAGE - 1))
#define _PC_MAX_INPUT 3
#define _WATTR_OK (1<<16)
#define _T_WCHAR_ 
#define DW_OP_reg1 0x51
#define _SC_IPV6 118
#define JEMALLOC_OVERRIDE_MEMALIGN 
#define R_BIG_FORMAT_STR_LEN 9
#define MCAST_JOIN_GROUP 80
#define JEMALLOC_VALGRIND_QUARANTINE_DEFAULT (ZU(1) << 24)
#define NI_MAXSERV 32
#define DW_AT_GNU_pubtypes 0x2135
#define DW_CFA_same_value 0x08
#define _SC_XOPEN_REALTIME 111
#define _GCC_MAX_ALIGN_T 
#define __UINTPTR_TYPE__ long unsigned int
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define R_NONNULL 
#define DW_OP_eq 0x29
#define _SYS_QOS_H 
#define R_CORE_PRJ_IO_MAPS 0x0004
#define R_HAVE_CRC64 1
#define DW_OP_reg5 0x55
#define R_REGEX_ERANGE 11
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define RUNE_CORNER_TL "┌"
#define u2rz JEMALLOC_N(u2rz)
#define prof_prefork0 JEMALLOC_N(prof_prefork0)
#define R_BIN_REQ_SYMBOLS 0x000004
#define CHUNK_MAP_STATE_MASK ((size_t)0x3U)
#define _SC_EXPR_NEST_MAX 14
#define arena_reset JEMALLOC_N(arena_reset)
#define IPPROTO_SEP 33
#define SIGBUS 10
#define BLKDEV_IOSIZE 2048
#define PENDIN 0x20000000
#define tsd_cleanup_wrapper JEMALLOC_N(tsd_cleanup_wrapper)
#define prof_prefork1 JEMALLOC_N(prof_prefork1)
#define NL_NMAX 1
#define HAVE_LIBUV 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define WITNESS_RANK_CTL 1U
#define IPPROTO_IDPR 35
#define tsd_arenas_tdata_bypassp_get JEMALLOC_N(tsd_arenas_tdata_bypassp_get)
#define DWARF_FALSE 0
#define IPPROTO_NVPII 11
#define TCACHE_GC_INCR ((TCACHE_GC_SWEEP / JM_NBINS) + ((TCACHE_GC_SWEEP / JM_NBINS == 0) ? 0 : 1))
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define r_rbtree_iter_has(it) ((it)->len)
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define R_BIN_DBG_STATIC 0x02
#define R_BIN_REQ_RELOCS 0x002000
#define HAVE_JEMALLOC 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define tsd_tcache_set JEMALLOC_N(tsd_tcache_set)
#define UT32_MAX 0xFFFFFFFFU
#define ivsalloc JEMALLOC_N(ivsalloc)
#define _XOPEN_CRYPT (1)
#define R_HASH_SIZE_CRC64_ECMA182 8
#define _TIME_H_ 
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define arena_get JEMALLOC_N(arena_get)
#define DW_OP_reg27 0x6b
#define SHRT_MAX __SHRT_MAX__
#define IPPROTO_IPCOMP 108
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define JEMALLOC_USE_SYSCALL 
#define arenas_tdata_bypass_cleanup JEMALLOC_N(arenas_tdata_bypass_cleanup)
#define DW_AT_decimal_scale 0x5c
#define SIGTTIN 21
#define DW_OP_bra 0x28
#define __INT8_MAX__ 0x7f
#define PT_FIRSTMACH 32
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define FF0 0x00000000
#define FF1 0x00004000
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define ph_merge_siblings(a_type,a_field,a_phn,a_cmp,r_phn) do { a_type *head = NULL; a_type *tail = NULL; a_type *phn0 = a_phn; a_type *phn1 = phn_next_get(a_type, a_field, phn0); if (phn1 != NULL) { a_type *phnrest = phn_next_get(a_type, a_field, phn1); if (phnrest != NULL) phn_prev_set(a_type, a_field, phnrest, NULL); phn_prev_set(a_type, a_field, phn0, NULL); phn_next_set(a_type, a_field, phn0, NULL); phn_prev_set(a_type, a_field, phn1, NULL); phn_next_set(a_type, a_field, phn1, NULL); phn_merge(a_type, a_field, phn0, phn1, a_cmp, phn0); head = tail = phn0; phn0 = phnrest; while (phn0 != NULL) { phn1 = phn_next_get(a_type, a_field, phn0); if (phn1 != NULL) { phnrest = phn_next_get(a_type, a_field, phn1); if (phnrest != NULL) { phn_prev_set(a_type, a_field, phnrest, NULL); } phn_prev_set(a_type, a_field, phn0, NULL); phn_next_set(a_type, a_field, phn0, NULL); phn_prev_set(a_type, a_field, phn1, NULL); phn_next_set(a_type, a_field, phn1, NULL); phn_merge(a_type, a_field, phn0, phn1, a_cmp, phn0); phn_next_set(a_type, a_field, tail, phn0); tail = phn0; phn0 = phnrest; } else { phn_next_set(a_type, a_field, tail, phn0); tail = phn0; phn0 = NULL; } } phn0 = head; phn1 = phn_next_get(a_type, a_field, phn0); if (phn1 != NULL) { while (true) { head = phn_next_get(a_type, a_field, phn1); assert(phn_prev_get(a_type, a_field, phn0) == NULL); phn_next_set(a_type, a_field, phn0, NULL); assert(phn_prev_get(a_type, a_field, phn1) == NULL); phn_next_set(a_type, a_field, phn1, NULL); phn_merge(a_type, a_field, phn0, phn1, a_cmp, phn0); if (head == NULL) break; phn_next_set(a_type, a_field, tail, phn0); tail = phn0; phn0 = head; phn1 = phn_next_get(a_type, a_field, phn0); } } } r_phn = phn0; } while (0)
#define arena_miscelm_get_mutable JEMALLOC_N(arena_miscelm_get_mutable)
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define DW_LNS_set_file 0x04
#define CREAD 0x00000800
#define arena_prof_accum_locked JEMALLOC_N(arena_prof_accum_locked)
#define EDESTADDRREQ 39
#define R_MALLOC_WRAPPER 0
#define DW_CFA_register 0x09
#define DW_OP_const2u 0x0a
#define _SC_XBS5_ILP32_OFF32 122
#define PARENB 0x00001000
#define PIPE_BUF 512
#define IP_TTL 4
#define DW_AT_GNU_all_tail_call_sites 0x2116
#define NET_RT_TRASH 5
#define extent_node_init JEMALLOC_N(extent_node_init)
#define R_MODE_RADARE 0x001
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define DW_AT_declaration 0x3c
#define stderr __stderrp
#define DW_TAG_partial_unit 0x3c
#define RTR_MAX_HOSTS 255
#define extent_node_committed_get JEMALLOC_N(extent_node_committed_get)
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define B10100 20
#define DW_FORM_ref2 0x12
#define VARIABLE_ARRAY(type,name,count) type name[(count)]
#define va_start(v,l) __builtin_va_start(v,l)
#define R_BIN_REQ_SECTIONS 0x000008
#define R2_VERSION_COMMIT 27746
#define PRIiLEAST8 PRIi8
#define SOCK_RDM 4
#define TH_CWR 0x80
#define TIOCSSIZE TIOCSWINSZ
#define ITIMER_VIRTUAL 1
#define __INT32_C(c) c
#define DT_LNK 10
#define RTLD_NOLOAD 0x10
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define DW_AT_export_symbols 0x89
#define MINSIGSTKSZ 32768
#define IPPROTO_VISA 70
#define IPV6_CHECKSUM 26
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define MCAST_UNBLOCK_SOURCE 85
#define IP_MAX_MEMBERSHIPS 4095
#define PROF_PREFIX_DEFAULT ""
#define tsd_arenas_tdata_bypass_set JEMALLOC_N(tsd_arenas_tdata_bypass_set)
#define AI_NUMERICSERV 0x00001000
#define HAVE_LIB_SSL 0
#define IPV6CTL_AUTO_FLOWLABEL 17
#define VALUE_TYPE ut64
#define tcache_alloc_large JEMALLOC_N(tcache_alloc_large)
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define R_JOIN_2_PATHS(p1,p2) p1 R_SYS_DIR p2
#define R_PROTOBUF_H 
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define DW_OP_hi_user 0xff
#define DW_AT_associated 0x4f
#define __DARWIN_PDP_ENDIAN 3412
#define pack_print(i,reg,pack_type_index) r_cons_printf (pack_format[pack_type_index], i != 0 ? " " : "", reg);
#define SNAP_PAGE_SIZE 4096
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define CLASS_PRIVATE 0xC0
#define R_BIN_REQ_EXTRACT 0x001000
#define _SYS_PTRACE_H_ 
#define r_vector_enumerate(vec,it,i) if (!r_vector_empty (vec)) for (it = (void *)(vec)->a, i = 0; i < (vec)->len; it = (void *)((char *)it + (vec)->elem_size), i++)
#define Color_BBGGREEN "\x1b[102m"
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define RColor_BGBLACK RCOLOR(ALPHA_BG, 12, 12, 12, 0x00, 0x00, 0x00, 0)
#define UT32_MIN 0U
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define TIOCSBRK _IO('t', 123)
#define __IOS_PROHIBITED 
#define FILE_OPAND 0
#define DW_AT_call_file 0x58
#define DW_ATE_float 0x04
#define MALLOCX_ZERO_GET(flags) ((bool)(flags & MALLOCX_ZERO))
#define opt_junk JEMALLOC_N(opt_junk)
#define TTYDEF_IFLAG (BRKINT | ICRNL | IMAXBEL | IXON | IXANY)
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define PRIBIO 16
#define spin_init JEMALLOC_N(spin_init)
#define R_ANAL_ARCHINFO_MIN_OP_SIZE 0
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define R_NEW(x) (x*)malloc(sizeof(x))
#define R_HASH_SIZE_CRC64_XZ 8
#define ut8p_bd(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24))
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define IPPROTO_WBEXPAK 79
#define R_REGEX_INVARG 16
#define _SC_THREAD_PRIO_INHERIT 87
#define ut8p_bq(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24)|((x)[4]<<32)|((x)[5]<<40)|((x)[6]<<48)|((x)[7]<<56))
#define TAG_UTCTIME 0x17
#define ut8p_bw(x) ((x)[0]|((x)[1]<<8))
#define prng_range_u64 JEMALLOC_N(prng_range_u64)
#define _SC_PHYS_PAGES 200
#define R_MAGIC_NO_CHECK_ELF 0x010000
#define Color_HLDELETE Color_BGDELETE Color_DELETE
#define IP_FW_GET 44
#define IPPROTO_FRAGMENT 44
#define _XOPEN_VERSION 600
#define r_vector_foreach(vec,it) if (!r_vector_empty (vec)) for (it = (void *)(vec)->a; (char *)it != (char *)(vec)->a + ((vec)->len * (vec)->elem_size); it = (void *)((char *)it + (vec)->elem_size))
#define DW_FORM_sdata 0x0d
#define IPPORT_HIFIRSTAUTO 49152
#define arena_redzone_corruption JEMALLOC_N(arena_redzone_corruption)
#define r_vector_upper_bound(vec,x,i,cmp) do { size_t h = (vec)->len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp (x, ((char *)(vec)->a + (vec)->elem_size * m))) < 0) { h = m; } else { i = m + 1; } } } while (0)
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define R_HASH_HAMDIST (1ULL << R_HASH_IDX_HAMDIST)
#define M_PI 3.14159265358979323846264338327950288
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define _LIMITS_H_ 
#define R_LINE_BUFSIZE 4096
#define DW_TAG_inlined_subroutine 0x1d
#define SDB_OPTION_SYNC (1 << 0)
#define _POSIX_PATH_MAX 256
#define _CTYPE_SWM 0xe0000000L
#define _CTYPE_SWS 30
#define DW_FORM_ref_sup4 0x1c
#define witness_owner JEMALLOC_N(witness_owner)
#define w_termsig w_T.w_Termsig
#define MAP_32BIT 0x8000
#define R_BIN_DBG_STRIPPED 0x01
#define __ILP32_OFF32 (-1)
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")
#define __x86_64 1
#define R_CORE_BIN_ACC_INITFINI 0x200000
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define DW_OP_reg2 0x52
#define R_ASM_GET_NAME(x,y,z) (x && x->binb.bin && x->binb.get_name)? x->binb.get_name (x->binb.bin, y, z, x->pseudo): NULL
#define witness_lock_error JEMALLOC_N(witness_lock_error)
#define EQUIV_CLASS_MAX 2
#define IPPROTO_XNET 15
#define PTHREAD_PROCESS_SHARED 1
#define qr_next(a_qr,a_field) ((a_qr)->a_field.qre_next)
#define __INTPTR_WIDTH__ 64
#define BSD4_4 1
#define SIGPROF 27
#define R_BORROW 
#define LG_DIRTY_MULT_DEFAULT 3
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define r_return_if_fail(expr) do { if (!(expr)) { H_LOG_ (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", R_FUNCTION, #expr, __LINE__); return; } } while (0)
#define bool _Bool
#define run_quantize_floor JEMALLOC_N(run_quantize_floor)
#define _SC_CPUTIME 68
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define R_HASH_PARITY (1ULL << R_HASH_IDX_PARITY)
#define R_HAVE_CRC32_EXTRA 1
#define M_LOG10E 0.434294481903251827651128918916605082
#define ls_foreach_safe(list,it,tmp,pos) if ((list)) for (it = list->head; it && (pos = it->data) && ((tmp = it->n) || 1); it = tmp)
#define FILE_LEQUAD 25
#define __DBL_MIN_10_EXP__ (-307)
#define DW_ATE_unsigned_fixed 0x0e
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define BITMAP_GROUPS_L1(nbits) BITMAP_BITS2GROUPS(BITMAP_BITS2GROUPS(nbits))
#define UTCRC_C(x) ((utcrc)(x))
#define tcache_bin_info JEMALLOC_N(tcache_bin_info)
#define SV_INTERRUPT SA_RESTART
#define qr_foreach(var,a_qr,a_field) for ((var) = (a_qr); (var) != NULL; (var) = (((var)->a_field.qre_next != (a_qr)) ? (var)->a_field.qre_next : NULL))
#define IPPROTO_MEAS 19
#define iqalloc JEMALLOC_N(iqalloc)
#define PRIi32 "i"
#define __cold __attribute__((__cold__))
#define R_FLAGS_FS_SYSCALLS "syscalls"
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")
#define _SC_MEMLOCK_RANGE 31
#define tsd_arenas_tdata_get JEMALLOC_N(tsd_arenas_tdata_get)
#define DW_CFA_nop 0x00
#define DIRSEP '/'
#define __SIG_ATOMIC_WIDTH__ 32
#define IPCTL_INTRQDROPS 11
#define KEV_DL_SIFMTU 3
#define SDB_OPTION_NOSTAMP (1 << 1)
#define DW_OP_reg6 0x56
#define IPPROTO_TRUNK1 23
#define IPPROTO_TRUNK2 24
#define unlikely(x) __builtin_expect(!!(x), 0)
#define extent_size_quantize_floor JEMALLOC_N(extent_size_quantize_floor)
#define JEMALLOC_GLIBC_MEMALIGN_HOOK 
#define INLCR 0x00000040
#define LG_TCACHE_MAXCLASS_DEFAULT 15
#define __FLT32_HAS_DENORM__ 1
#define DW_FORM_ref_addr 0x10
#define S_ISGID 0002000
#define R_SELWIDGET_MAXH 15
#define S_IFBLK 0060000
#define B1110 14
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define tsd_arenap_get JEMALLOC_N(tsd_arenap_get)
#define CSTART CTRL('q')
#define arena_mapbits_large_get JEMALLOC_N(arena_mapbits_large_get)
#define __swift_unavailable(_msg) 
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define rbtn_right_set(a_type,a_field,a_node,a_right) do { (a_node)->a_field.rbn_right_red = (a_type *) (((uintptr_t) a_right) | (((uintptr_t) (a_node)->a_field.rbn_right_red) & ((size_t)1))); } while (0)
#define R_HASH_SIZE_SHA256 32
#define F_RDADVISE 44
#define large_maxclass JEMALLOC_N(large_maxclass)
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define DW_OP_reg8 0x58
#define r_flist_foreach(it,pos) r_flist_rewind(it); while (r_flist_next (it) && (pos = r_flist_get (it)))
#define h_addr h_addr_list[0]
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define __kpi_deprecated(_msg) 
#define R_TIME_PROFILE_BEGIN do{}while(0)
#define SCNdLEAST8 SCNd8
#define R_SIGN_COL_DELEM ':'
#define BRAILE_SIX $01+$10+$20+$21+$30+$31
#define R_FLAGS_FS_FUNCTIONS "functions"
#define _WCHAR_T_DEFINED 
#define R_LOG(lvl,tag,fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, lvl, tag, fmtstr, ##__VA_ARGS__);
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define TH_ECE 0x40
#define DW_LANG_Fortran03 0x0022
#define DW_AT_extension 0x54
#define ENOMEM 12
#define ut8p_lq(x) ((x)[7]|((x)[6]<<8)|((x)[5]<<16)|((x)[4]<<24)|((x)[3]<<32)|((x)[2]<<40)|((x)[1]<<48)|((x)[0]<<56))
#define IPPROTO_MUX 18
#define pages_map JEMALLOC_N(pages_map)
#define ut8p_lw(x) ((x)[1]|((x)[0]<<8))
#define __pic__ 2
#define PH_H_ 
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define B10101 21
#define R_STR_DUP(x) ((x) ? strdup ((x)) : NULL)
#define R_PRINT_STRUCT (1 << 9)
#define _ASSERT_H_ 
#define arena_bitselm_get_const JEMALLOC_N(arena_bitselm_get_const)
#define NOKERNINFO 0x02000000
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define r_oflist_free(x) r_oflist_deserialize (x), r_list_free (x)
#define ql_remove(a_head,a_elm,a_field) do { if (ql_first(a_head) == (a_elm)) { ql_first(a_head) = qr_next(ql_first(a_head), a_field); } if (ql_first(a_head) != (a_elm)) { qr_remove((a_elm), a_field); } else { ql_first(a_head) = NULL; } } while (0)
#define IPPROTO_IPPC 67
#define __INT_LEAST8_MAX__ 0x7f
#define _ERRNO_T 
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define MACRO_LIMIT 1024
#define B10110 22
#define phn_next_get(a_type,a_field,a_phn) (a_phn->a_field.phn_next)
#define R_ANAL_THRESHOLDFCN 0.7F
#define je_aligned_alloc aligned_alloc
#define atomic_write_u JEMALLOC_N(atomic_write_u)
#define arena_dss_prec_set JEMALLOC_N(arena_dss_prec_set)
#define R_PTR_ALIGN(v,t) ((char *)(((size_t)(v) ) & ~(t - 1)))
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define IN_CLASSB_NSHIFT 16
#define R_VERSION_H 1
#define __DARWIN_IPPORT_RESERVED 1024
#define KEV_DL_SIFMEDIA 5
#define __deprecated_enum_msg(_msg) 
#define likely(x) __builtin_expect(!!(x), 1)
#define R_HASH_FLETCHER8 (1ULL << R_HASH_IDX_FLETCHER8)
#define RUNE_ARROW_RIGHT ">"
#define chunk_hooks_set JEMALLOC_N(chunk_hooks_set)
#define R_SYS_ENDIAN_LITTLE 1
#define DW_LNS_const_add_pc 0x08
#define pages_trim JEMALLOC_N(pages_trim)
#define DW_AT_is_optional 0x21
#define PT_FORCEQUOTA 30
#define __RCSID(s) __IDSTRING(rcsid,s)
#define DW_OP_call_frame_cfa 0x9c
#define R_LOG_SILLY(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_SILLY, NULL, fmtstr, ##__VA_ARGS__);
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define CHUNK_HOOKS_INITIALIZER { NULL, NULL, NULL, NULL, NULL, NULL, NULL }
#define IPPROTO_IGRP 88
#define S_IXOTH 0000001
#define tsd_tcache_enabled_set JEMALLOC_N(tsd_tcache_enabled_set)
#define TCPOPT_TIMESTAMP 8
#define DW_OP_lit10 0x3a
#define DW_OP_lit12 0x3c
#define DW_OP_lit13 0x3d
#define R2_SKIP_LIST_H 
#define DW_OP_lit15 0x3f
#define DW_OP_lit17 0x41
#define LOCAL_PEEREPID 0x003
#define ECHOCTL 0x00000040
#define UNSIGNED 0x08
#define prof_thread_name_set JEMALLOC_N(prof_thread_name_set)
#define R_HASH_CRC16_CITT (1ULL << R_HASH_IDX_CRC16_CITT)
#define _PTHREAD_MUTEX_T 
#define R2_BP_H 
#define VWERASE 4
#define R_CORE_CMD_OK 0
#define R_BIN_REQ_HEADER 0x2000000
#define __FLT64X_IS_IEC_60559__ 2
#define IPV6_PORTRANGE 14
#define DW_UT_split_compile 0x05
#define DW_OP_lit21 0x45
#define DW_OP_lit23 0x47
#define DW_OP_lit24 0x48
#define DW_OP_lit27 0x4b
#define DW_OP_lit28 0x4c
#define B10111 23
#define TIOCIXOFF _IO('t', 128)
#define _POSIX2_UPE 200112L
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define arena_dalloc_bin_junked_locked JEMALLOC_N(arena_dalloc_bin_junked_locked)
#define DW_FORM_line_ptr 0x1f
#define witness_assert_owner JEMALLOC_N(witness_assert_owner)
#define SSZT_SUB_OVFCHK(a,b) SSZT_ADD_OVFCHK(a,-(b))
#define SCNd16 "hd"
#define rbtn_color_set(a_type,a_field,a_node,a_red) do { (a_node)->a_field.rbn_right_red = (a_type *) ((((intptr_t) (a_node)->a_field.rbn_right_red) & ((ssize_t)-2)) | ((ssize_t)a_red)); } while (0)
#define DW_ATE_signed_fixed 0x0d
#define DW_OP_lit30 0x4e
#define static_assert _Static_assert
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define DW_OP_lit1 0x31
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define IPV6_2292HOPOPTS 22
#define IPPROTO_MHRP 48
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define DW_OP_lit3 0x33
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define R_MODE_ARRAY 0x010
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define DW_OP_lit4 0x34
#define NETSVC_MRKNG_LVL_L2 1
#define FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define _SC_SYMLOOP_MAX 120
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define ql_reverse_foreach(a_var,a_head,a_field) qr_reverse_foreach((a_var), ql_first(a_head), a_field)
#define valgrind_make_mem_defined JEMALLOC_N(valgrind_make_mem_defined)
#define R_REGEX_EMPTY 14
#define R_REGEX_ILLSEQ 17
#define TODO(x) eprintf(__func__"  " x)
#define SCNd32 "d"
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define _DELETE_OK (1<<12)
#define R_CONS_GREP_WORDS 10
#define PRIO_USER 2
#define _POSIX_THREAD_CPUTIME (-1)
#define DW_ID_up_case 0x01
#define Color_BLACK "\x1b[30m"
#define IOPOL_APPLICATION IOPOL_STANDARD
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define _SC_THREAD_PRIO_PROTECT 88
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define TIOCEXCL _IO('t', 13)
#define AI_ADDRCONFIG 0x00000400
#define B0001 1
#define DW_LANG_Fortran90 0x0008
#define F_BARRIERFSYNC 85
#define DW_LANG_Fortran95 0x000e
#define DW_OP_reg16 0x60
#define R_BIN_METH_VIRTUAL 0x0000000000000200L
#define IPV6_BOUND_IF 125
#define R_PERM_RW (R_PERM_R|R_PERM_W)
#define R_PERM_RX (R_PERM_R|R_PERM_X)
#define R_BIN_REQ_HASHES 0x40000000
#define R_BIN_REQ_OPERATION 0x000020
#define __UINT32_MAX__ 0xffffffffU
#define JEMALLOC_C11ATOMICS 1
#define PRNG_A_32 UINT32_C(1103515241)
#define __bool_true_false_are_defined 1
#define R_EGG_OS_WATCHOS 0x14945c70
#define __PTHREAD_MUTEX_SIZE__ 56
#define extent_tree_ad_next JEMALLOC_N(extent_tree_ad_next)
#define B0010 2
#define B0011 3
#define R_MIN_DEFINED 
#define __SIZE_T 
#define DEV_BSIZE 512
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define SCNd64 __SCN_64_LENGTH_MODIFIER__ "d"
#define _POSIX_PIPE_BUF 512
#define __I386_MCONTEXT_H_ 
#define DSS_PREC_DEFAULT dss_prec_secondary
#define SIGUSR1 30
#define USE_MONOTONIC_CLOCK 0
#define pow2_ceil_u64 JEMALLOC_N(pow2_ceil_u64)
#define __TVOS_9_2 90200
#define tsd_narenas_tdata_set JEMALLOC_N(tsd_narenas_tdata_set)
#define UT8_MAX 0xFFU
#define R_REGEX_EXTENDED 0001
#define MALLOC_MUTEX_TYPE PTHREAD_MUTEX_DEFAULT
#define R_HASH_ENTROPY (1ULL << R_HASH_IDX_ENTROPY)
#define PT_DENY_ATTACH 31
#define __FLT128_MIN_EXP__ (-16381)
#define tsd_iarena_get JEMALLOC_N(tsd_iarena_get)
#define RUNECODE_CURVE_CORNER_BL 0xd5
#define R_IO_UNDOS 64
#define bitmap_init JEMALLOC_N(bitmap_init)
#define RUNECODE_CURVE_CORNER_BR 0xd4
#define IOPOL_PASSIVE 2
#define RTREE_NODE_INITIALIZING ((rtree_node_elm_t *)0x1)
#define VEOF 0
#define VEOL 1
#define arena_miscelm_to_rpages JEMALLOC_N(arena_miscelm_to_rpages)
#define DW_ATE_boolean 0x02
#define WUNTRACED 0x00000002
#define DW_TAG_template_type_param 0x2f
#define DW_TAG_template_value_parameter 0x30
#define NZERO 20
#define __IPHONE_12_4 120400
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define UINT16_C(v) (v)
#define arenas JEMALLOC_N(arenas)
#define IPV6CTL_V6ONLY 24
#define R_FLAG_ZONE_USE_SDB 0
#define R_CORE_LOADLIBS_ENV 1
#define TCP_KEEPALIVE 0x10
#define FILE_LEQLDATE 31
#define DW_FORM_strx1 0x25
#define IP_MULTICAST_VIF 14
#define rbtn_first(a_type,a_field,a_rbt,a_root,r_node) do { (r_node) = (a_root); if ((r_node) != NULL) { for (; rbtn_left_get(a_type, a_field, (r_node)) != NULL; (r_node) = rbtn_left_get(a_type, a_field, (r_node))) { } } } while (0)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define TRY_AGAIN 2
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define R_BIG_DTYPE_TMP ut64
#define _SYS_TIME_H_ 
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define DW_TAG_shared_type 0x40
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define R_PERM_WX (R_PERM_W|R_PERM_X)
#define _SIZE_T_DEFINED_ 
#define R_BIN_METH_FILEPRIVATE 0x0000000000000080L
#define _BSD_MACHINE_PARAM_H_ 
#define IPV6CTL_AUTO_LINKLOCAL 35
#define ls_iter_cur(x) x->p
#define R_FLAGS_FS_RELOCS "relocs"
#define R_IO_SEEK_CUR 1
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define R_FLAGS_FS_SIGNS "sign"
#define __SCHAR_MAX__ 0x7f
#define PRINTF_RA(fmt,...) PRINTF_A ("%s", fmt, pal->invalid, __VA_ARGS__)
#define arena_dalloc_bin JEMALLOC_N(arena_dalloc_bin)
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define R_BIN_METH_SYNTHETIC 0x0000000000020000L
#define R2_CMD_H 
#define R2_CONFIG_H 
#define AF_ECMA 8
#define NFDBITS __DARWIN_NFDBITS
#define __FLT32X_HAS_QUIET_NAN__ 1
#define AI_V4MAPPED_CFG 0x00000200
#define extent_node_sn_set JEMALLOC_N(extent_node_sn_set)
#define KEV_INET6_CHANGED_ADDR 2
#define DW_TAG_inheritance 0x1c
#define R_SYS_BITS (R_SYS_BITS_32 | R_SYS_BITS_64)
#define IPPROTO_EON 80
#define __INT64_C(c) c ## LL
#define DEFINE_CMD_ARGV_GROUP_WITH_CHILD(core,name,parent) RCmdDesc *name ##_cd = r_cmd_desc_group_new (core->rcmd, parent, #name, name ##_handler, &name ##_help, &name ##_group_help); r_warn_if_fail (name ##_cd)
#define SCNuLEAST64 SCNu64
#define SA_SIGINFO 0x0040
#define R_REGEX_ITOA 0400
#define DW_TAG_condition 0x3f
#define r_skiplist_length(list) (list->size)
#define R_BIN_METH_PRIVATE 0x0000000000000008L
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define IPCTL_FORWARDING 1
#define QUANTUM ((unsigned int)(1U << LG_QUANTUM))
#define DW_OP_breg1 0x71
#define DW_OP_breg3 0x73
#define DW_OP_breg4 0x74
#define DW_OP_breg8 0x78
#define DW_OP_breg9 0x79
#define __MAC_11_3 110300
#define hash_rotl_32 JEMALLOC_N(hash_rotl_32)
#define R_CONS_CURSOR_DOWN "\x1b[B"
#define _SYS_TERMIOS_H_ 
#define TIOCSTART _IO('t', 110)
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define PF_LAT AF_LAT
#define MSG_NEEDSA 0x10000
#define TCP_NOTSENT_LOWAT 0x201
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define CHUNK_CEILING(s) (((s) + chunksize_mask) & ~chunksize_mask)
#define R_BIN_DBG_LINENUMS 0x04
#define FILE_LDATE 14
#define _SC_THREAD_THREADS_MAX 94
#define NO_ADDRESS NO_DATA
#define LG_BITMAP_MAXBITS LG_RUN_MAXREGS
#define SI_USER 0x10001
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define LG_LARGE_MINCLASS 14
#define _SC_2_UPE 25
#define __SIZEOF_INT__ 4
#define S_IRWXO 0000007
#define S_IRWXU 0000700
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define VSTATUS 18
#define Color_BGWHITE "\x1b[47m"
#define Color_BLUE "\x1b[34m"
#define DW_INL_declared_inlined 0x03
#define opt_junk_alloc JEMALLOC_N(opt_junk_alloc)
#define IPPROTO_SCTP 132
#define _SYS_TTYCOM_H_ 
#define arena_lg_dirty_mult_get JEMALLOC_N(arena_lg_dirty_mult_get)
#define PF_VLAN ((uint32_t)0x766c616e)
#define SCNxFAST64 SCNx64
#define S_IFMT 0170000
#define ALTWERASE 0x00000200
#define B11000 24
#define B11001 25
#define PT_READ_D 2
#define CLOCK_REALTIME _CLOCK_REALTIME
#define JEMALLOC_ALWAYS_INLINE_C static inline JEMALLOC_ATTR(always_inline)
#define IPCTL_INTRQMAXLEN 10
#define __IPHONE_5_1 50100
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define Color_RESET_TERMINAL "\x1b" "c\x1b(K\x1b[0m\x1b[J\x1b[?25h"
#define SCNd8 __PRI_8_LENGTH_MODIFIER__ "d"
#define HAVE_ARC4RANDOM_UNIFORM 0
#define PRIuFAST16 PRIu16
#define _SC_VERSION 8
#define R_PRINT_FLAGS_HDROFF 0x00008000
#define _SC_RE_DUP_MAX 16
#define DW_LANG_Dylan 0x0020
#define IPPROTO_EGP 8
#define B11010 26
#define B11011 27
#define __USER_LABEL_PREFIX__ _
#define TCACHE_NSLOTS_LARGE 20
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define UT32_ALIGN(x) (x + (x - (x % sizeof (ut32))))
#define DW_FORM_addrx1 0x29
#define DW_FORM_addrx2 0x2a
#define DW_FORM_addrx3 0x2b
#define DW_FORM_addrx4 0x2c
#define FILE_UNUSED_1 0x08
#define FILE_UNUSED_2 0x10
#define FILE_UNUSED_3 0x20
#define R_HASH_CRC15_CAN (1ULL << R_HASH_IDX_CRC15_CAN)
#define ENEEDAUTH 81
#define chunk_dalloc_cache JEMALLOC_N(chunk_dalloc_cache)
#define SCNx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define atomic_cas_uint64 JEMALLOC_N(atomic_cas_uint64)
#define NeXTBSD 1995064
#define DW_AT_deleted 0x8a
#define DW_ATE_decimal_float 0x0f
#define DW_AT_use_location 0x4a
#define DW_FORM_ref_sup8 0x24
#define PTHREAD_CANCEL_DEFERRED 0x02
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define MAP_PRIVATE 0x0002
#define MACRO_WEAK_SYM __attribute__ ((weak))
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define RTLD_NODELETE 0x80
#define CREPRINT CTRL('r')
#define WCONTINUED 0x00000010
#define FP_SUBNORMAL 5
#define JEMALLOC_NO_DEMANGLE 
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define IP_RECVIF 20
#define R_BIN_TYPE_SPECIAL_SYM_STR "SPCL"
#define ILL_ILLOPC 1
#define extent_tree_szsnad_next JEMALLOC_N(extent_tree_szsnad_next)
#define MCLBYTES (1 << MCLSHIFT)
#define NAN __builtin_nanf("0x7fc00000")
#define rbtn_red_get(a_type,a_field,a_node) ((bool) (((uintptr_t) (a_node)->a_field.rbn_right_red) & ((size_t)1)))
#define witness_postfork_child JEMALLOC_N(witness_postfork_child)
#define __LDBL_HAS_INFINITY__ 1
#define index2size_compute JEMALLOC_N(index2size_compute)
#define R_CORE_ANAL_GRAPHLINES 1
#define DW_LNS_set_prologue_end 0x0a
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define r_socket_connect_unix(a,b) r_socket_connect (a, b, b, R_SOCKET_PROTO_UNIX, 0)
#define USE_LIB_MAGIC 0
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define R_SYS_ARCH "x86"
#define R_BIN_REQ_SIZE 0x040000
#define _UINT8_T 
#define TCPOLEN_SIGNATURE 18
#define r_pvector_foreach_prev(vec,it) for (it = ((vec)->v.len == 0 ? NULL : (void **)(vec)->v.a + (vec)->v.len - 1); it != NULL && it != (void **)(vec)->v.a - 1; it--)
#define R_SYS_ENDIAN_BI 3
#define DW_AT_call_line 0x59
#define phn_lchild_set(a_type,a_field,a_phn,a_lchild) do { a_phn->a_field.phn_lchild = a_lchild; } while (0)
#define DW_AT_GNU_pubnames 0x2134
#define IPPROTO_ETHERIP 97
#define arena_init JEMALLOC_N(arena_init)
#define DW_LANG_Rust 0x001c
#define Color_BBGBLUE "\x1b[104m"
#define IS_WHITESPACE(x) ((x) == ' ' || (x) == '\t')
#define FSHIFT 11
#define _SYS_RESOURCE_H_ 
#define ARGPREFIX "arg"
#define M_PI_4 0.785398163397448309615660845819875721
#define POLLSTANDARD (POLLIN|POLLPRI|POLLOUT|POLLRDNORM|POLLRDBAND| POLLWRBAND|POLLERR|POLLHUP|POLLNVAL)
#define tsd_prof_tdata_set JEMALLOC_N(tsd_prof_tdata_set)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define _BSD_SIZE_T_DEFINED_ 
#define SF_RESTRICTED 0x00080000
#define _SYS__ENDIAN_H_ 
#define HAVE_SYSTEM 1
#define R_BIT_TOGGLE(x,y) ( R_BIT_CHK (x, y) ? R_BIT_UNSET (x, y): R_BIT_SET (x, y))
#define __FLT32_DIG__ 6
#define FILE_LESTRING16 19
#define MS_ASYNC 0x0001
#define R_TH_LOCK_T pthread_mutex_t
#define REDZONE_MINSIZE 16
#define _SC_TRACE_EVENT_FILTER 98
#define MAP_FAILED ((void *)-1)
#define R_MAGIC_MIME (R_MAGIC_MIME_TYPE|R_MAGIC_MIME_ENCODING)
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define r_sys_mkdir_failed() (errno != EEXIST)
#define DW_LNS_set_isa 0x0c
#define _POSIX_TRACE_SYS_MAX 8
#define DW_UT_type 0x02
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define R_HIDDEN __attribute__((visibility("hidden")))
#define IPV6CTL_KAME_VERSION 20
#define tcache_dalloc_small JEMALLOC_N(tcache_dalloc_small)
#define ql_head_initializer(a_head) {NULL}
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define R_ANAL_ADDR_TYPE_LIBRARY 1 << 9
#define r_socket_connect_udp(a,b,c,d) r_socket_connect (a, b, c, R_SOCKET_PROTO_UDP, d)
#define RUNECODE_LINE_UP 0xd1
#define TTCP_CLIENT_SND_WND 4096
#define Color_BGGREEN "\x1b[42m"
#define R_BIN_DBG_RELOCS 0x10
#define DW_AT_macro_info 0x43
#define R_MAGIC_NONE 0x000000
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define dss_prec_names JEMALLOC_N(dss_prec_names)
#define NSTIME_SEC_MAX KQU(18446744072)
#define RUNECODE_CURVE_CORNER_TL 0xd2
#define __DARWIN_C_ANSI 010000L
#define RUNECODE_CURVE_CORNER_TR 0xd3
#define SO_BROADCAST 0x0020
#define PCATCH 0x100
#define huge_ralloc_no_move JEMALLOC_N(huge_ralloc_no_move)
#define atomic_write_p JEMALLOC_N(atomic_write_p)
#define DW_LNS_copy 0x01
#define R_SYS_ENDIAN 0
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define rtree_node_valid JEMALLOC_N(rtree_node_valid)
#define F_SETBACKINGSTORE 70
#define TCP_CONNECTIONTIMEOUT 0x20
#define DW_LANG_Modula2 0x000a
#define atomic_write_z JEMALLOC_N(atomic_write_z)
#define SIGIO 23
#define DW_DSC_range 0x01
#define TCPOPT_WINDOW 3
#define TCOON 2
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define R_BIN_BIND_HIOS_STR "HIOS"
#define IPPROTO_ENCAP 98
#define R_SOCKET_PROTO_TCP IPPROTO_TCP
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define _SC_HOST_NAME_MAX 72
#define __UINT_LEAST32_TYPE__ unsigned int
#define __API_AVAILABLE_GET_MACRO(...) 
#define IPPROTO_AHIP 61
#define r_warn_if_reached() do { r_assert_log (R_LOGLVL_WARN, "(%s:%d):%s%s code should not be reached\n", __FILE__, __LINE__, R_FUNCTION, R_FUNCTION[0] ? ":" : ""); } while (0)
#define witness_assert_depth_to_rank JEMALLOC_N(witness_assert_depth_to_rank)
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define SYNC_VOLUME_FULLSYNC 0x01
#define M16KCLSHIFT 14
#define EF_NO_XATTRS 0x00000002
#define BSDLY 0x00008000
#define _POSIX_NAME_MAX 14
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define R_CORE_PRJ_FCNS 0x0040
#define R2_LIST_H 
#define r_rbtree_iter_while_prev(it,data,struc,rb) for (; r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_prev (&(it)))
#define DW_AT_picture_string 0x60
#define TIOCNXCL _IO('t', 14)
#define R_UTF8_LEFT_POINTING_MAGNIFYING_GLASS "🔍"
#define __strong 
#define AF_CNT 21
#define st_ctime st_ctimespec.tv_sec
#define R_HASH_SIZE_HAMDIST 1
#define r_io_range_new() R_NEW0(RIORange)
#define je_rallocx rallocx
#define _ALLOCA_H_ 
#define R2_FLIST_H 
#define DW_ATE_numeric_string 0x0b
#define __SIZEOF_SHORT__ 2
#define R_BIT_CHK(x,y) (*(x) & (1<<(y)))
#define MALLOCX_ARENA(a) ((((int)(a))+1) << 20)
#define IP_BOUND_IF 25
#define RUNECODESTR_LINE_HORIZ "\xce"
#define FORM_CONSTRUCTED 0x20
#define RB_COMPACT 
#define DW_LNE_hi_user 0xff
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define DW_AT_frame_base 0x40
#define DW_AT_default_value 0x1e
#define arena_metadata_allocated_sub JEMALLOC_N(arena_metadata_allocated_sub)
#define tsd_arenas_tdata_set JEMALLOC_N(tsd_arenas_tdata_set)
#define O_EXLOCK 0x00000020
#define SV_SIGINFO SA_SIGINFO
#define KEV_INET_SUBCLASS 1
#define IP_MULTICAST_LOOP 11
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _SC_MEMLOCK 30
#define R_CRYPTO_ROT 1ULL<<8
#define R_BIN_METH_ABSTRACT 0x0000000000001000L
#define __FLT32X_HAS_INFINITY__ 1
#define R_MAGIC_PRESERVE_ATIME 0x000080
#define pind2sz_compute JEMALLOC_N(pind2sz_compute)
#define SO_ACCEPTCONN 0x0002
#define RBitword ut64
#define ql_last(a_head,a_field) ((ql_first(a_head) != NULL) ? qr_prev(ql_first(a_head), a_field) : NULL)
#define __INT32_MAX__ 0x7fffffff
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define math_errhandling (__math_errhandling())
#define NL1 0x00000100
#define NL2 0x00000200
#define NL3 0x00000300
#define FMTx64 PRIx64
#define R_HASH_MOD255 (1ULL << R_HASH_IDX_MOD255)
#define r_socket_connect_tcp(a,b,c,d) r_socket_connect (a, b, c, R_SOCKET_PROTO_TCP, d)
#define tsd_thread_deallocated_get JEMALLOC_N(tsd_thread_deallocated_get)
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define arena_prof_tctx_get JEMALLOC_N(arena_prof_tctx_get)
#define Color_GREEN "\x1b[32m"
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define DW_UT_compile 0x01
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define DW_TAG_namelist_item 0x2c
#define arena_ralloc_no_move JEMALLOC_N(arena_ralloc_no_move)
#define __SIZE_WIDTH__ 64
#define S_ISVTX 0001000
#define extent_node_addr_set JEMALLOC_N(extent_node_addr_set)
#define FP_ILOGB0 (-2147483647 - 1)
#define SIGEV_NONE 0
#define PTR_MASK (SIZEOF_PTR - 1)
#define SO_TYPE 0x1008
#define ql_elm(a_type) qr(a_type)
#define RTLD_LOCAL 0x4
#define SCM_RIGHTS 0x01
#define SCNu16 "hu"
#define R_CRYPTO_AES_CBC 1ULL<<4
#define ru_first ru_ixrss
#define DW_LANG_Ada83 0x0003
#define __WATCHOS_7_3 70300
#define Color_MAGENTA "\x1b[35m"
#define DW_AT_identifier_case 0x42
#define w_retcode w_T.w_Retcode
#define DW_OP_breg10 0x7a
#define DW_OP_breg11 0x7b
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define RBTREE_H 
#define DW_OP_breg15 0x7f
#define DW_OP_breg16 0x80
#define DW_OP_breg18 0x82
#define __DECIMAL_DIG__ 21
#define Color_YELLOW "\x1b[33m"
#define LOCK_EX 0x02
#define F_DUPFD 0
#define DW_OP_breg21 0x85
#define DW_OP_breg22 0x86
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define DW_OP_breg26 0x8a
#define DW_OP_breg27 0x8b
#define DW_OP_breg28 0x8c
#define DW_OP_breg29 0x8d
#define FPE_INTDIV 7
#define SCNuLEAST8 SCNu8
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define ENETDOWN 50
#define ESTALE 70
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define FP_PREC_64B 3
#define R_ANAL_GET_NAME(x,y,z) (x && x->binb.bin && x->binb.get_name)? x->binb.get_name (x->binb.bin, y, z): NULL
#define chunksize_mask JEMALLOC_N(chunksize_mask)
#define _SC_2_SW_DEV 24
#define DW_OP_breg31 0x8f
#define _SYS_ERRNO_H_ 
#define _PC_FILESIZEBITS 18
#define HAVE_REGEXP 1
#define R2_FLAGS_H 
#define isgreater(x,y) __builtin_isgreater((x),(y))
#define r_interval_tree_foreach_prev(tree,it,dat) if ((tree)->root) for ((it) = r_rbtree_last (&(tree)->root->node); r_rbtree_iter_has (&it) && (dat = r_rbtree_iter_get (&it, RIntervalNode, node)->data); r_rbtree_iter_prev (&(it)))
#define _WPERM_OK (1<<20)
#define MONOTONIC_APPLE (__APPLE__ && CLOCK_MONOTONIC_RAW)
#define SHUT_RDWR 2
#define chunk_deregister JEMALLOC_N(chunk_deregister)
#define KEV_DL_IF_DETACHING 10
#define qr_before_insert(a_qrelm,a_qr,a_field) do { (a_qr)->a_field.qre_prev = (a_qrelm)->a_field.qre_prev; (a_qr)->a_field.qre_next = (a_qrelm); (a_qr)->a_field.qre_prev->a_field.qre_next = (a_qr); (a_qrelm)->a_field.qre_prev = (a_qr); } while (0)
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define IN_CLASSA_HOST 0x00ffffff
#define TAG_INTEGER 0x02
#define DW_AT_GNU_all_source_call_sites 0x2118
#define _POSIX_LOGIN_NAME_MAX 9
#define R_MAGIC_CHECK 0x000040
#define PTRDIFF_MAX INTMAX_MAX
#define PAGE_ADDR2BASE(a) ((void *)((uintptr_t)(a) & ~PAGE_MASK))
#define MCAST_LEAVE_SOURCE_GROUP 83
#define R_ASM_ARCH_BF R_SYS_ARCH_BF
#define R_HASH_SHA256 (1ULL << R_HASH_IDX_SHA256)
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define R_BIN_METH_FINAL 0x0000000000000100L
#define R_BIN_TYPE_OBJECT_STR "OBJ"
#define __UINT_LEAST16_TYPE__ short unsigned int
#define arena_chunk_cache_maybe_remove JEMALLOC_N(arena_chunk_cache_maybe_remove)
#define IPPROTO_XTP 36
#define PRIX8 __PRI_8_LENGTH_MODIFIER__ "X"
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define hash_get_block_64 JEMALLOC_N(hash_get_block_64)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define qr_prev(a_qr,a_field) ((a_qr)->a_field.qre_prev)
#define QI(q) ((int64_t)q)
#define _CTYPE_R 0x00040000L
#define arena_malloc JEMALLOC_N(arena_malloc)
#define R_BIN_ENTRY_TYPE_PROGRAM 0
#define __DARWIN_MAXNAMLEN 255
#define extent_tree_szsnad_prev JEMALLOC_N(extent_tree_szsnad_prev)
#define WINT_MIN INT32_MIN
#define ROFList_Parent RList
#define malloc_tsd_externs(a_name,a_type) extern __thread a_type a_name ##tsd_tls; extern pthread_key_t a_name ##tsd_tsd; extern bool a_name ##tsd_booted;
#define R_ASM_ARCH_JAVA R_SYS_ARCH_JAVA
#define STRING_COMPACT_BLANK BIT(0)
#define EAUTH 80
#define prof_gdump JEMALLOC_N(prof_gdump)
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define Color_BGDELETE "\x1b[48;5;52m"
#define DW_OP_lit14 0x3e
#define MADV_FREE_REUSABLE 7
#define MAC_OS_X_VERSION_10_11_4 101104
#define R_MODE_JSON 0x008
#define BITMAP_GROUP_NBITS_MASK (BITMAP_GROUP_NBITS-1)
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define R_ANAL_ADDR_TYPE_REG 1 << 7
#define DW_OP_deref_size 0x94
#define DW_OP_lit16 0x40
#define IEXTEN 0x00000400
#define DW_TAG_subrange_type 0x21
#define L_tmpnam 1024
#define R_PRINT_FLAGS_RAINBOW 0x00004000
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define R_BP_CONT_NORMAL 0
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define F_SPECULATIVE_READ 101
#define DW_AT_artificial 0x34
#define IPPROTO_TCF 87
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define __MMX__ 1
#define IPPROTO_TCP 6
#define R_CORE_PRJ_ANAL_HINTS 0x0080
#define R_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define chunk_boot JEMALLOC_N(chunk_boot)
#define CHAR_REGEX_OFFSET_START 's'
#define FILE_MEDATE 21
#define nstime_idivide JEMALLOC_N(nstime_idivide)
#define TAB0 0x00000000
#define TAB1 0x00000400
#define TAB2 0x00000800
#define TAB3 0x00000004
#define IPV6_SOCKOPT_RESERVED1 3
#define DW_LANG_C 0x0002
#define PTHREAD_CANCEL_ENABLE 0x01
#define HOWMANY (256 * 1024)
#define SD_SEND 1
#define SDB_VSZ 0xffffff
#define R_GRAPH_FORMAT_GML 3
#define RUNE_LONG_LINE_HORIZ "―"
#define TCPOPT_FASTOPEN 34
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define R_REGEX_STARTEND 00004
#define RTR_PROTOCOL_UDP 2
#define SO_LINGER_SEC 0x1080
#define PRIoLEAST32 PRIo32
#define tsd_quarantine_get JEMALLOC_N(tsd_quarantine_get)
#define R_UNUSED __attribute__((__unused__))
#define LOCK_NB 0x04
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define FILE_FMT_QUAD 3
#define PWAIT 32
#define extent_tree_ad_reverse_iter_recurse JEMALLOC_N(extent_tree_ad_reverse_iter_recurse)
#define R_MAGIC_NO_CHECK_APPTYPE 0x008000
#define nstime_imultiply JEMALLOC_N(nstime_imultiply)
#define extent_tree_szsnad_first JEMALLOC_N(extent_tree_szsnad_first)
#define EAI_MEMORY 6
#define EAI_MAX 15
#define PRIdLEAST16 PRId16
#define R_CRYPTO_RC4 1ULL<<1
#define F_NOCACHE 48
#define M_1_PI 0.318309886183790671537767526745028724
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define r_list_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head; it && (pos = it->data, tmp = it->n, 1); it = tmp)
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define __BIGGEST_ALIGNMENT__ 16
#define R_PRINT_STRING_ZEROEND 2
#define isfinite(x) ( sizeof(x) == sizeof(float) ? __inline_isfinitef((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isfinited((double)(x)) : __inline_isfinitel((long double)(x)))
#define _SC_BC_STRING_MAX 12
#define _MCONTEXT_T 
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define CHUNK_MAP_DIRTY ((size_t)0x10U)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define opt_prof_thread_active_init JEMALLOC_N(opt_prof_thread_active_init)
#define STDERR_FILENO 2
#define witness_prefork JEMALLOC_N(witness_prefork)
#define __DARWIN_ONLY_VERS_1050 0
#define DW_TAG_enumeration_type 0x04
#define __sfileno(p) ((p)->_file)
#define extent_tree_ad_prev JEMALLOC_N(extent_tree_ad_prev)
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define FILE_DATE 6
#define PRIoLEAST64 PRIo64
#define signbit(x) ( sizeof(x) == sizeof(float) ? __inline_signbitf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_signbitd((double)(x)) : __inline_signbitl((long double)(x)))
#define DW_OP_addr 0x03
#define _DLFCN_H_ 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define DW_AT_linkage_name 0x6e
#define __pure 
#define R_INVALID_SOCKET -1
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define WTERMSIG(x) (_WSTATUS(x))
#define DW_OP_shra 0x26
#define CR3 0x00003000
#define FMTu32 PRIu32
#define PROF_BT_MAX 128
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define LINE_CROSS 1
#define R_HASH_SIZE_CRC32_ECMA_267 4
#define FIONCLEX _IO('f', 2)
#define __FLT32_HAS_INFINITY__ 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define EXIT_SUCCESS 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define LOP_STANDARD 3
#define PT_CONTINUE 7
#define PRIiFAST16 PRIi16
#define MALLOCX_ARENA_MASK ((int)~0xfffff)
#define SI_QUEUE 0x10002
#define atomic_add_u JEMALLOC_N(atomic_add_u)
#define __APPLE_API_UNSTABLE 
#define UINT_LEAST8_MAX UINT8_MAX
#define _POSIX_SIGQUEUE_MAX 32
#define R_LOG_ERROR(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_ERROR, NULL, fmtstr, ##__VA_ARGS__);
#define LOCK_SH 0x01
#define GHT ut64
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define AF_LINK 18
#define arena_dalloc_junk_large JEMALLOC_N(arena_dalloc_junk_large)
#define __INT_FAST32_MAX__ 0x7fffffff
#define __LDBL_HAS_DENORM__ 1
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define SIOCGETVLAN SIOCGIFVLAN
#define arena_mapbits_small_set JEMALLOC_N(arena_mapbits_small_set)
#define __MAC_10_15_1 101501
#define RUNECODESTR_LINE_VERT "\xc8"
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define PRIdLEAST64 PRId64
#define _RLIMIT_POSIX_FLAG 0x1000
#define SO_NREAD 0x1020
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _SC_SIGQUEUE_MAX 51
#define CDSUSP CTRL('y')
#define LOP_DISCARD 2
#define DW_AT_digit_count 0x5f
#define PRId8 __PRI_8_LENGTH_MODIFIER__ "d"
#define VMIN 16
#define arena_mapbits_size_decode JEMALLOC_N(arena_mapbits_size_decode)
#define PRIiFAST32 PRIi32
#define isinf(x) ( sizeof(x) == sizeof(float) ? __inline_isinff((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isinfd((double)(x)) : __inline_isinfl((long double)(x)))
#define TIOCMGET _IOR('t', 106, int)
#define _MACH_I386__STRUCTS_H_ 
#define LOCK_UN 0x08
#define w_stopsig w_S.w_Stopsig
#define __TERMIOS_H__ 
#define F_PUNCHHOLE 99
#define r_list_iter_cur(x) (x)->p
#define NL_LANGMAX 14
#define R_SEARCH_AES_BOX_SIZE 31
#define R_CONS_CLEAR_FROM_CURSOR_TO_END "\x1b[0J\r"
#define RColor_BLACK RCOLOR(ALPHA_FG, 12, 12, 12, 0x00, 0x00, 0x00, 0)
#define _SC_2_VERSION 17
#define chunk_alloc_base JEMALLOC_N(chunk_alloc_base)
#define _WSTOPPED 0177
#define _INT16_T 
#define tsd_witness_forkp_get JEMALLOC_N(tsd_witness_forkp_get)
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define EPIPE 32
#define SMOOTHSTEP STEP( 1, UINT64_C(0x0000000000000014), 0.005, 0.000001240643750) STEP( 2, UINT64_C(0x00000000000000a5), 0.010, 0.000009850600000) STEP( 3, UINT64_C(0x0000000000000229), 0.015, 0.000032995181250) STEP( 4, UINT64_C(0x0000000000000516), 0.020, 0.000077619200000) STEP( 5, UINT64_C(0x00000000000009dc), 0.025, 0.000150449218750) STEP( 6, UINT64_C(0x00000000000010e8), 0.030, 0.000257995800000) STEP( 7, UINT64_C(0x0000000000001aa4), 0.035, 0.000406555756250) STEP( 8, UINT64_C(0x0000000000002777), 0.040, 0.000602214400000) STEP( 9, UINT64_C(0x00000000000037c2), 0.045, 0.000850847793750) STEP( 10, UINT64_C(0x0000000000004be6), 0.050, 0.001158125000000) STEP( 11, UINT64_C(0x000000000000643c), 0.055, 0.001529510331250) STEP( 12, UINT64_C(0x000000000000811f), 0.060, 0.001970265600000) STEP( 13, UINT64_C(0x000000000000a2e2), 0.065, 0.002485452368750) STEP( 14, UINT64_C(0x000000000000c9d8), 0.070, 0.003079934200000) STEP( 15, UINT64_C(0x000000000000f64f), 0.075, 0.003758378906250) STEP( 16, UINT64_C(0x0000000000012891), 0.080, 0.004525260800000) STEP( 17, UINT64_C(0x00000000000160e7), 0.085, 0.005384862943750) STEP( 18, UINT64_C(0x0000000000019f95), 0.090, 0.006341279400000) STEP( 19, UINT64_C(0x000000000001e4dc), 0.095, 0.007398417481250) STEP( 20, UINT64_C(0x00000000000230fc), 0.100, 0.008560000000000) STEP( 21, UINT64_C(0x0000000000028430), 0.105, 0.009829567518750) STEP( 22, UINT64_C(0x000000000002deb0), 0.110, 0.011210480600000) STEP( 23, UINT64_C(0x00000000000340b1), 0.115, 0.012705922056250) STEP( 24, UINT64_C(0x000000000003aa67), 0.120, 0.014318899200000) STEP( 25, UINT64_C(0x0000000000041c00), 0.125, 0.016052246093750) STEP( 26, UINT64_C(0x00000000000495a8), 0.130, 0.017908625800000) STEP( 27, UINT64_C(0x000000000005178b), 0.135, 0.019890532631250) STEP( 28, UINT64_C(0x000000000005a1cf), 0.140, 0.022000294400000) STEP( 29, UINT64_C(0x0000000000063498), 0.145, 0.024240074668750) STEP( 30, UINT64_C(0x000000000006d009), 0.150, 0.026611875000000) STEP( 31, UINT64_C(0x000000000007743f), 0.155, 0.029117537206250) STEP( 32, UINT64_C(0x0000000000082157), 0.160, 0.031758745600000) STEP( 33, UINT64_C(0x000000000008d76b), 0.165, 0.034537029243750) STEP( 34, UINT64_C(0x0000000000099691), 0.170, 0.037453764200000) STEP( 35, UINT64_C(0x00000000000a5edf), 0.175, 0.040510175781250) STEP( 36, UINT64_C(0x00000000000b3067), 0.180, 0.043707340800000) STEP( 37, UINT64_C(0x00000000000c0b38), 0.185, 0.047046189818750) STEP( 38, UINT64_C(0x00000000000cef5e), 0.190, 0.050527509400000) STEP( 39, UINT64_C(0x00000000000ddce6), 0.195, 0.054151944356250) STEP( 40, UINT64_C(0x00000000000ed3d8), 0.200, 0.057920000000000) STEP( 41, UINT64_C(0x00000000000fd439), 0.205, 0.061832044393750) STEP( 42, UINT64_C(0x000000000010de0e), 0.210, 0.065888310600000) STEP( 43, UINT64_C(0x000000000011f158), 0.215, 0.070088898931250) STEP( 44, UINT64_C(0x0000000000130e17), 0.220, 0.074433779200000) STEP( 45, UINT64_C(0x0000000000143448), 0.225, 0.078922792968750) STEP( 46, UINT64_C(0x00000000001563e7), 0.230, 0.083555655800000) STEP( 47, UINT64_C(0x0000000000169cec), 0.235, 0.088331959506250) STEP( 48, UINT64_C(0x000000000017df4f), 0.240, 0.093251174400000) STEP( 49, UINT64_C(0x0000000000192b04), 0.245, 0.098312651543750) STEP( 50, UINT64_C(0x00000000001a8000), 0.250, 0.103515625000000) STEP( 51, UINT64_C(0x00000000001bde32), 0.255, 0.108859214081250) STEP( 52, UINT64_C(0x00000000001d458b), 0.260, 0.114342425600000) STEP( 53, UINT64_C(0x00000000001eb5f8), 0.265, 0.119964156118750) STEP( 54, UINT64_C(0x0000000000202f65), 0.270, 0.125723194200000) STEP( 55, UINT64_C(0x000000000021b1bb), 0.275, 0.131618222656250) STEP( 56, UINT64_C(0x0000000000233ce3), 0.280, 0.137647820800000) STEP( 57, UINT64_C(0x000000000024d0c3), 0.285, 0.143810466693750) STEP( 58, UINT64_C(0x0000000000266d40), 0.290, 0.150104539400000) STEP( 59, UINT64_C(0x000000000028123d), 0.295, 0.156528321231250) STEP( 60, UINT64_C(0x000000000029bf9c), 0.300, 0.163080000000000) STEP( 61, UINT64_C(0x00000000002b753d), 0.305, 0.169757671268750) STEP( 62, UINT64_C(0x00000000002d32fe), 0.310, 0.176559340600000) STEP( 63, UINT64_C(0x00000000002ef8bc), 0.315, 0.183482925806250) STEP( 64, UINT64_C(0x000000000030c654), 0.320, 0.190526259200000) STEP( 65, UINT64_C(0x0000000000329b9f), 0.325, 0.197687089843750) STEP( 66, UINT64_C(0x0000000000347875), 0.330, 0.204963085800000) STEP( 67, UINT64_C(0x0000000000365cb0), 0.335, 0.212351836381250) STEP( 68, UINT64_C(0x0000000000384825), 0.340, 0.219850854400000) STEP( 69, UINT64_C(0x00000000003a3aa8), 0.345, 0.227457578418750) STEP( 70, UINT64_C(0x00000000003c340f), 0.350, 0.235169375000000) STEP( 71, UINT64_C(0x00000000003e342b), 0.355, 0.242983540956250) STEP( 72, UINT64_C(0x0000000000403ace), 0.360, 0.250897305600000) STEP( 73, UINT64_C(0x00000000004247c8), 0.365, 0.258907832993750) STEP( 74, UINT64_C(0x0000000000445ae9), 0.370, 0.267012224200000) STEP( 75, UINT64_C(0x0000000000467400), 0.375, 0.275207519531250) STEP( 76, UINT64_C(0x00000000004892d8), 0.380, 0.283490700800000) STEP( 77, UINT64_C(0x00000000004ab740), 0.385, 0.291858693568750) STEP( 78, UINT64_C(0x00000000004ce102), 0.390, 0.300308369400000) STEP( 79, UINT64_C(0x00000000004f0fe9), 0.395, 0.308836548106250) STEP( 80, UINT64_C(0x00000000005143bf), 0.400, 0.317440000000000) STEP( 81, UINT64_C(0x0000000000537c4d), 0.405, 0.326115448143750) STEP( 82, UINT64_C(0x000000000055b95b), 0.410, 0.334859570600000) STEP( 83, UINT64_C(0x000000000057fab1), 0.415, 0.343669002681250) STEP( 84, UINT64_C(0x00000000005a4015), 0.420, 0.352540339200000) STEP( 85, UINT64_C(0x00000000005c894e), 0.425, 0.361470136718750) STEP( 86, UINT64_C(0x00000000005ed622), 0.430, 0.370454915800000) STEP( 87, UINT64_C(0x0000000000612655), 0.435, 0.379491163256250) STEP( 88, UINT64_C(0x00000000006379ac), 0.440, 0.388575334400000) STEP( 89, UINT64_C(0x000000000065cfeb), 0.445, 0.397703855293750) STEP( 90, UINT64_C(0x00000000006828d6), 0.450, 0.406873125000000) STEP( 91, UINT64_C(0x00000000006a842f), 0.455, 0.416079517831250) STEP( 92, UINT64_C(0x00000000006ce1bb), 0.460, 0.425319385600000) STEP( 93, UINT64_C(0x00000000006f413a), 0.465, 0.434589059868750) STEP( 94, UINT64_C(0x000000000071a270), 0.470, 0.443884854200000) STEP( 95, UINT64_C(0x000000000074051d), 0.475, 0.453203066406250) STEP( 96, UINT64_C(0x0000000000766905), 0.480, 0.462539980800000) STEP( 97, UINT64_C(0x000000000078cde7), 0.485, 0.471891870443750) STEP( 98, UINT64_C(0x00000000007b3387), 0.490, 0.481254999400000) STEP( 99, UINT64_C(0x00000000007d99a4), 0.495, 0.490625624981250) STEP( 100, UINT64_C(0x0000000000800000), 0.500, 0.500000000000000) STEP( 101, UINT64_C(0x000000000082665b), 0.505, 0.509374375018750) STEP( 102, UINT64_C(0x000000000084cc78), 0.510, 0.518745000600000) STEP( 103, UINT64_C(0x0000000000873218), 0.515, 0.528108129556250) STEP( 104, UINT64_C(0x00000000008996fa), 0.520, 0.537460019200000) STEP( 105, UINT64_C(0x00000000008bfae2), 0.525, 0.546796933593750) STEP( 106, UINT64_C(0x00000000008e5d8f), 0.530, 0.556115145800000) STEP( 107, UINT64_C(0x000000000090bec5), 0.535, 0.565410940131250) STEP( 108, UINT64_C(0x0000000000931e44), 0.540, 0.574680614400000) STEP( 109, UINT64_C(0x0000000000957bd0), 0.545, 0.583920482168750) STEP( 110, UINT64_C(0x000000000097d729), 0.550, 0.593126875000000) STEP( 111, UINT64_C(0x00000000009a3014), 0.555, 0.602296144706250) STEP( 112, UINT64_C(0x00000000009c8653), 0.560, 0.611424665600000) STEP( 113, UINT64_C(0x00000000009ed9aa), 0.565, 0.620508836743750) STEP( 114, UINT64_C(0x0000000000a129dd), 0.570, 0.629545084200000) STEP( 115, UINT64_C(0x0000000000a376b1), 0.575, 0.638529863281250) STEP( 116, UINT64_C(0x0000000000a5bfea), 0.580, 0.647459660800000) STEP( 117, UINT64_C(0x0000000000a8054e), 0.585, 0.656330997318750) STEP( 118, UINT64_C(0x0000000000aa46a4), 0.590, 0.665140429400000) STEP( 119, UINT64_C(0x0000000000ac83b2), 0.595, 0.673884551856250) STEP( 120, UINT64_C(0x0000000000aebc40), 0.600, 0.682560000000000) STEP( 121, UINT64_C(0x0000000000b0f016), 0.605, 0.691163451893750) STEP( 122, UINT64_C(0x0000000000b31efd), 0.610, 0.699691630600000) STEP( 123, UINT64_C(0x0000000000b548bf), 0.615, 0.708141306431250) STEP( 124, UINT64_C(0x0000000000b76d27), 0.620, 0.716509299200000) STEP( 125, UINT64_C(0x0000000000b98c00), 0.625, 0.724792480468750) STEP( 126, UINT64_C(0x0000000000bba516), 0.630, 0.732987775800000) STEP( 127, UINT64_C(0x0000000000bdb837), 0.635, 0.741092167006250) STEP( 128, UINT64_C(0x0000000000bfc531), 0.640, 0.749102694400000) STEP( 129, UINT64_C(0x0000000000c1cbd4), 0.645, 0.757016459043750) STEP( 130, UINT64_C(0x0000000000c3cbf0), 0.650, 0.764830625000000) STEP( 131, UINT64_C(0x0000000000c5c557), 0.655, 0.772542421581250) STEP( 132, UINT64_C(0x0000000000c7b7da), 0.660, 0.780149145600000) STEP( 133, UINT64_C(0x0000000000c9a34f), 0.665, 0.787648163618750) STEP( 134, UINT64_C(0x0000000000cb878a), 0.670, 0.795036914200000) STEP( 135, UINT64_C(0x0000000000cd6460), 0.675, 0.802312910156250) STEP( 136, UINT64_C(0x0000000000cf39ab), 0.680, 0.809473740800000) STEP( 137, UINT64_C(0x0000000000d10743), 0.685, 0.816517074193750) STEP( 138, UINT64_C(0x0000000000d2cd01), 0.690, 0.823440659400000) STEP( 139, UINT64_C(0x0000000000d48ac2), 0.695, 0.830242328731250) STEP( 140, UINT64_C(0x0000000000d64063), 0.700, 0.836920000000000) STEP( 141, UINT64_C(0x0000000000d7edc2), 0.705, 0.843471678768750) STEP( 142, UINT64_C(0x0000000000d992bf), 0.710, 0.849895460600000) STEP( 143, UINT64_C(0x0000000000db2f3c), 0.715, 0.856189533306250) STEP( 144, UINT64_C(0x0000000000dcc31c), 0.720, 0.862352179200000) STEP( 145, UINT64_C(0x0000000000de4e44), 0.725, 0.868381777343750) STEP( 146, UINT64_C(0x0000000000dfd09a), 0.730, 0.874276805800000) STEP( 147, UINT64_C(0x0000000000e14a07), 0.735, 0.880035843881250) STEP( 148, UINT64_C(0x0000000000e2ba74), 0.740, 0.885657574400000) STEP( 149, UINT64_C(0x0000000000e421cd), 0.745, 0.891140785918750) STEP( 150, UINT64_C(0x0000000000e58000), 0.750, 0.896484375000000) STEP( 151, UINT64_C(0x0000000000e6d4fb), 0.755, 0.901687348456250) STEP( 152, UINT64_C(0x0000000000e820b0), 0.760, 0.906748825600000) STEP( 153, UINT64_C(0x0000000000e96313), 0.765, 0.911668040493750) STEP( 154, UINT64_C(0x0000000000ea9c18), 0.770, 0.916444344200000) STEP( 155, UINT64_C(0x0000000000ebcbb7), 0.775, 0.921077207031250) STEP( 156, UINT64_C(0x0000000000ecf1e8), 0.780, 0.925566220800000) STEP( 157, UINT64_C(0x0000000000ee0ea7), 0.785, 0.929911101068750) STEP( 158, UINT64_C(0x0000000000ef21f1), 0.790, 0.934111689400000) STEP( 159, UINT64_C(0x0000000000f02bc6), 0.795, 0.938167955606250) STEP( 160, UINT64_C(0x0000000000f12c27), 0.800, 0.942080000000000) STEP( 161, UINT64_C(0x0000000000f22319), 0.805, 0.945848055643750) STEP( 162, UINT64_C(0x0000000000f310a1), 0.810, 0.949472490600000) STEP( 163, UINT64_C(0x0000000000f3f4c7), 0.815, 0.952953810181250) STEP( 164, UINT64_C(0x0000000000f4cf98), 0.820, 0.956292659200000) STEP( 165, UINT64_C(0x0000000000f5a120), 0.825, 0.959489824218750) STEP( 166, UINT64_C(0x0000000000f6696e), 0.830, 0.962546235800000) STEP( 167, UINT64_C(0x0000000000f72894), 0.835, 0.965462970756250) STEP( 168, UINT64_C(0x0000000000f7dea8), 0.840, 0.968241254400000) STEP( 169, UINT64_C(0x0000000000f88bc0), 0.845, 0.970882462793750) STEP( 170, UINT64_C(0x0000000000f92ff6), 0.850, 0.973388125000000) STEP( 171, UINT64_C(0x0000000000f9cb67), 0.855, 0.975759925331250) STEP( 172, UINT64_C(0x0000000000fa5e30), 0.860, 0.977999705600000) STEP( 173, UINT64_C(0x0000000000fae874), 0.865, 0.980109467368750) STEP( 174, UINT64_C(0x0000000000fb6a57), 0.870, 0.982091374200000) STEP( 175, UINT64_C(0x0000000000fbe400), 0.875, 0.983947753906250) STEP( 176, UINT64_C(0x0000000000fc5598), 0.880, 0.985681100800000) STEP( 177, UINT64_C(0x0000000000fcbf4e), 0.885, 0.987294077943750) STEP( 178, UINT64_C(0x0000000000fd214f), 0.890, 0.988789519400000) STEP( 179, UINT64_C(0x0000000000fd7bcf), 0.895, 0.990170432481250) STEP( 180, UINT64_C(0x0000000000fdcf03), 0.900, 0.991440000000000) STEP( 181, UINT64_C(0x0000000000fe1b23), 0.905, 0.992601582518750) STEP( 182, UINT64_C(0x0000000000fe606a), 0.910, 0.993658720600000) STEP( 183, UINT64_C(0x0000000000fe9f18), 0.915, 0.994615137056250) STEP( 184, UINT64_C(0x0000000000fed76e), 0.920, 0.995474739200000) STEP( 185, UINT64_C(0x0000000000ff09b0), 0.925, 0.996241621093750) STEP( 186, UINT64_C(0x0000000000ff3627), 0.930, 0.996920065800000) STEP( 187, UINT64_C(0x0000000000ff5d1d), 0.935, 0.997514547631250) STEP( 188, UINT64_C(0x0000000000ff7ee0), 0.940, 0.998029734400000) STEP( 189, UINT64_C(0x0000000000ff9bc3), 0.945, 0.998470489668750) STEP( 190, UINT64_C(0x0000000000ffb419), 0.950, 0.998841875000000) STEP( 191, UINT64_C(0x0000000000ffc83d), 0.955, 0.999149152206250) STEP( 192, UINT64_C(0x0000000000ffd888), 0.960, 0.999397785600000) STEP( 193, UINT64_C(0x0000000000ffe55b), 0.965, 0.999593444243750) STEP( 194, UINT64_C(0x0000000000ffef17), 0.970, 0.999742004200000) STEP( 195, UINT64_C(0x0000000000fff623), 0.975, 0.999849550781250) STEP( 196, UINT64_C(0x0000000000fffae9), 0.980, 0.999922380800000) STEP( 197, UINT64_C(0x0000000000fffdd6), 0.985, 0.999967004818750) STEP( 198, UINT64_C(0x0000000000ffff5a), 0.990, 0.999990149400000) STEP( 199, UINT64_C(0x0000000000ffffeb), 0.995, 0.999998759356250) STEP( 200, UINT64_C(0x0000000001000000), 1.000, 1.000000000000000)
#define TCP_MSS 512
#define PINOD 8
#define R_ASM_ARCH_NONE R_SYS_ARCH_NONE
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define FP_STATE_BYTES 512
#define IP_RECVOPTS 5
#define LONG_MIN (-LONG_MAX - 1L)
#define ql_first(a_head) ((a_head)->qlh_first)
#define R_CONS_CURSOR_RESTORE "\x1b[u"
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define PRIiFAST64 PRIi64
#define R_ANAL_ADDR_TYPE_SEQUENCE 1 << 11
#define TERMUX_PREFIX "/data/data/com.termux/files/usr"
#define CDB_H 
#define rbtn_rotate_right(a_type,a_field,a_node,r_node) do { (r_node) = rbtn_left_get(a_type, a_field, (a_node)); rbtn_left_set(a_type, a_field, (a_node), rbtn_right_get(a_type, a_field, (r_node))); rbtn_right_set(a_type, a_field, (r_node), (a_node)); } while (0)
#define SOCK_MAXADDRLEN 255
#define IP_NAT__XXX 55
#define ASN1_OID_LEN 64
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define ph_gen(a_attr,a_prefix,a_ph_type,a_type,a_field,a_cmp) a_attr void a_prefix ##new(a_ph_type *ph) { memset(ph, 0, sizeof(ph(a_type))); } a_attr bool a_prefix ##empty(a_ph_type *ph) { return (ph->ph_root == NULL); } a_attr a_type * a_prefix ##first(a_ph_type *ph) { if (ph->ph_root == NULL) return (NULL); ph_merge_aux(a_type, a_field, ph, a_cmp); return (ph->ph_root); } a_attr void a_prefix ##insert(a_ph_type *ph, a_type *phn) { memset(&phn->a_field, 0, sizeof(phn(a_type))); if (ph->ph_root == NULL) ph->ph_root = phn; else { phn_next_set(a_type, a_field, phn, phn_next_get(a_type, a_field, ph->ph_root)); if (phn_next_get(a_type, a_field, ph->ph_root) != NULL) { phn_prev_set(a_type, a_field, phn_next_get(a_type, a_field, ph->ph_root), phn); } phn_prev_set(a_type, a_field, phn, ph->ph_root); phn_next_set(a_type, a_field, ph->ph_root, phn); } } a_attr a_type * a_prefix ##remove_first(a_ph_type *ph) { a_type *ret; if (ph->ph_root == NULL) return (NULL); ph_merge_aux(a_type, a_field, ph, a_cmp); ret = ph->ph_root; ph_merge_children(a_type, a_field, ph->ph_root, a_cmp, ph->ph_root); return (ret); } a_attr void a_prefix ##remove(a_ph_type *ph, a_type *phn) { a_type *replace, *parent; if (ph->ph_root == phn) { ph_merge_aux(a_type, a_field, ph, a_cmp); if (ph->ph_root == phn) { ph_merge_children(a_type, a_field, ph->ph_root, a_cmp, ph->ph_root); return; } } if ((parent = phn_prev_get(a_type, a_field, phn)) != NULL) { if (phn_lchild_get(a_type, a_field, parent) != phn) parent = NULL; } ph_merge_children(a_type, a_field, phn, a_cmp, replace); if (replace != NULL) { if (parent != NULL) { phn_prev_set(a_type, a_field, replace, parent); phn_lchild_set(a_type, a_field, parent, replace); } else { phn_prev_set(a_type, a_field, replace, phn_prev_get(a_type, a_field, phn)); if (phn_prev_get(a_type, a_field, phn) != NULL) { phn_next_set(a_type, a_field, phn_prev_get(a_type, a_field, phn), replace); } } phn_next_set(a_type, a_field, replace, phn_next_get(a_type, a_field, phn)); if (phn_next_get(a_type, a_field, phn) != NULL) { phn_prev_set(a_type, a_field, phn_next_get(a_type, a_field, phn), replace); } } else { if (parent != NULL) { a_type *next = phn_next_get(a_type, a_field, phn); phn_lchild_set(a_type, a_field, parent, next); if (next != NULL) { phn_prev_set(a_type, a_field, next, parent); } } else { assert(phn_prev_get(a_type, a_field, phn) != NULL); phn_next_set(a_type, a_field, phn_prev_get(a_type, a_field, phn), phn_next_get(a_type, a_field, phn)); } if (phn_next_get(a_type, a_field, phn) != NULL) { phn_prev_set(a_type, a_field, phn_next_get(a_type, a_field, phn), phn_prev_get(a_type, a_field, phn)); } } }
#define INET_ADDRSTRLEN 16
#define _RUNE_MAGIC_A "RuneMagA"
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define r_cmd_desc_children_foreach(root,it_cd) r_pvector_foreach (&root->children, it_cd)
#define ALIGNMENT_ADDR2BASE(a,alignment) ((void *)((uintptr_t)(a) & ((~(alignment)) + 1)))
#define IPPROTO_KRYPTOLAN 65
#define IPPROTO_SDRP 42
#define R_SYSCALL_ARGS 7
#define _BLKSIZE_T 
#define R_CORE_LOADLIBS_HOME 2
#define PRIi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define _PC_MIN_HOLE_SIZE 27
#define DW_AT_const_expr 0x6c
#define r_oflist_deserialize(x) free (x->array - 1), x->array = 0
#define EBADMSG 94
#define JEMALLOC_PURGE_MADVISE_DONTNEED 
#define __DARWIN_SUF_NON_CANCELABLE 
#define TIOCCBRK _IO('t', 122)
#define SO_WANTMORE 0x4000
#define je_sallocx sallocx
#define tsd_witnesses_set JEMALLOC_N(tsd_witnesses_set)
#define SCNiLEAST16 SCNi16
#define DW_TAG_try_block 0x32
#define R_ASM_ARCH_PPC R_SYS_ARCH_PPC
#define DW_LNE_HP_pop_context 0x13
#define R2_IO_H 
#define DW_OP_lit20 0x44
#define _STRUCT_TIMEVAL struct timeval
#define R_GRAPH_FORMAT_NO 0
#define NI_NOFQDN 0x00000001
#define atomic_read_u(p) atomic_add_u(p, 0)
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define SCNoLEAST64 SCNo64
#define FUNC_ATTR_PURE __attribute__ ((pure))
#define arena_prof_accum JEMALLOC_N(arena_prof_accum)
#define BITMAP_MAXBITS (ZU(1) << LG_BITMAP_MAXBITS)
#define R_HASH_CRC32_ECMA_267 (1ULL << R_HASH_IDX_CRC32_ECMA_267)
#define _SYS_WAIT_H_ 
#define DW_OP_consts 0x11
#define SCNiLEAST32 SCNi32
#define IPV6CTL_USE_DEFAULTZONE 39
#define DW_TAG_ptr_to_member_type 0x1f
#define _SC_XOPEN_CRYPT 108
#define DW_OP_lit25 0x49
#define arena_mapbits_unzeroed_get JEMALLOC_N(arena_mapbits_unzeroed_get)
#define _U_INT32_T 
#define DW_FORM_ref_sig8 0x20
#define __weak 
#define _DEV_T 
#define IPPROTO_TTP 84
#define B14400 14400
#define R_TH_COND_T pthread_cond_t
#define __abortlike __dead2 __cold __not_tail_called
#define UT32_GT0 0x80000000U
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define R2_TH_H 
#define __DBL_MAX_EXP__ 1024
#define DW_OP_rot 0x17
#define r_return_val_if_fail(expr,val) do { if (!(expr)) { H_LOG_ (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", R_FUNCTION, #expr, __LINE__); return (val); } } while (0)
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define arena_mapbits_get JEMALLOC_N(arena_mapbits_get)
#define OVERFLOW 3
#define JEMALLOC_ALWAYS_INLINE static inline JEMALLOC_ATTR(unused) JEMALLOC_ATTR(always_inline)
#define R_HASH_SIZE_CRC32D 4
#define DW_AT_virtuality 0x4c
#define KEV_INET6_NEW_LL_ADDR 4
#define R_REF_NAME refcount
#define RUNECODE_LINE_VERT 0xc8
#define quarantine JEMALLOC_N(quarantine)
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define POLLATTRIB 0x0400
#define IPPROTO_CMTP 38
#define __SSE2_MATH__ 1
#define R_BIN_ENTRY_TYPE_FINI 3
#define __ATOMIC_HLE_RELEASE 131072
#define DW_AT_visibility 0x17
#define DW_AT_location 0x02
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define FILE_OPXOR 2
#define PRIo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define SCNiLEAST64 SCNi64
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define IPPROTO_GMTP 100
#define ETOOMANYREFS 59
#define STR_IS_NULL(x) (!x || !x[0])
#define r_rbtree_iter_while(it,data,struc,rb) for (; r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_next (&(it)))
#define _PC_NAME_CHARS_MAX 10
#define prof_gdump_get JEMALLOC_N(prof_gdump_get)
#define NUM_INT_PACK_TYPES 4
#define DW_LANG_C_plus_plus_14 0x0021
#define mips mips
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS 0
#define IPV6CTL_MRTPROTO 8
#define _POSIX_SSIZE_MAX 32767
#define je_mallocx mallocx
#define MAXUPRC CHILD_MAX
#define WITNESS_RANK_ARENA_NODE_CACHE 11U
#define LG_BITMAP_GROUP_NBITS (LG_SIZEOF_BITMAP + 3)
#define witness_assert_lockless JEMALLOC_N(witness_assert_lockless)
#define FUNC_ATTR_ALWAYS_INLINE __attribute__((always_inline))
#define extent_tree_ad_iter_recurse JEMALLOC_N(extent_tree_ad_iter_recurse)
#define DW_FORM_sec_offset 0x17
#define _SYS_SIGNAL_H_ 
#define mb_write JEMALLOC_N(mb_write)
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define R2_FS_H 
#define _SC_ASYNCHRONOUS_IO 28
#define SCNdFAST16 SCNd16
#define R_MIDFLAGS_SYMALIGN 3
#define IPV6_UNICAST_HOPS 4
#define IPPROTO_BRSATMON 76
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define DW_TAG_enumerator 0x28
#define R_ROUND(x,y) ((x)%(y))?(x)+((y)-((x)%(y))):(x)
#define R_BIG_DTYPE ut32
#define arena_miscelm_get_const JEMALLOC_N(arena_miscelm_get_const)
#define MINCORE_INCORE 0x1
#define r_flist_rewind(it) while(it!=*it) it--; it++;
#define R_ANAL_OP_TYPE_MASK 0x8000ffff
#define LIBC_HAVE_PTRACE 1
#define DW_TAG_namespace 0x39
#define R_MAGIC_ERROR 0x000200
#define je_malloc_message malloc_message
#define R_PRINT_FLAGS_CURSOR 0x00000004
#define __tune_core2__ 1
#define arena_mapbits_large_set JEMALLOC_N(arena_mapbits_large_set)
#define DW_AT_inline 0x20
#define xmallctlbymib(mib,miblen,oldp,oldlenp,newp,newlen) do { if (je_mallctlbymib(mib, miblen, oldp, oldlenp, newp, newlen) != 0) { malloc_write( "<jemalloc>: Failure in xmallctlbymib()\n"); abort(); } } while (0)
#define p2rz JEMALLOC_N(p2rz)
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define KEV_DL_SIFMETRICS 2
#define __ATOMIC_HLE_ACQUIRE 65536
#define JEMALLOC_ALLOC_SIZE2(s1,s2) 
#define _PTRDIFF_T 
#define SCNdFAST32 SCNd32
#define DW_LANG_D 0x0013
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define prof_thread_active_set JEMALLOC_N(prof_thread_active_set)
#define _PC_VDISABLE 9
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define isless(x,y) __builtin_isless((x),(y))
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define IP_DUMMYNET_FLUSH 62
#define __kpi_deprecated_arm64_macos_unavailable 
#define TAG_SET 0x11
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define rtree_delete JEMALLOC_N(rtree_delete)
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define MAXHOSTNAMELEN 256
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define st_atime st_atimespec.tv_sec
#define phn_prev_get(a_type,a_field,a_phn) (a_phn->a_field.phn_prev)
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define R_CRYPTO_SERPENT 1ULL<<13
#define RUNE_LINE_CROSS "┼"
#define __SPI_DEPRECATED(...) 
#define DW_AT_data_member_location 0x38
#define R_REG_COND_LO 7
#define _POSIX_CPUTIME (-1)
#define __FLT64X_MANT_DIG__ 64
#define PTHREAD_CREATE_DETACHED 2
#define R_BIN_REQ_INITFINI 0x10000000
#define FUNC_ATTR_ALLOC_SIZE_PROD(x,y) __attribute__((alloc_size(x,y)))
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define WAKEMON_SET_DEFAULTS 0x08
#define COMP_UNIT_CAPACITY 8
#define AI_MASK (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST | AI_NUMERICSERV | AI_ADDRCONFIG)
#define DW_MACINFO_end_file 0x04
#define extent_tree_ad_iter JEMALLOC_N(extent_tree_ad_iter)
#define __SIZEOF_WINT_T__ 4
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define PRIxLEAST8 PRIx8
#define ferror_unlocked(p) __sferror(p)
#define ST32_MAX 0x7FFFFFFF
#define __WATCHOS_5_2 50200
#define MAXFRAG 8
#define atomic_sub_uint32 JEMALLOC_N(atomic_sub_uint32)
#define SDB_KEYSIZE 32
#define SCNdFAST64 SCNd64
#define set_errno JEMALLOC_N(set_errno)
#define tsd_narenas_tdatap_get JEMALLOC_N(tsd_narenas_tdatap_get)
#define TIOCSPGRP _IOW('t', 118, int)
#define IOC_VOID (__uint32_t)0x20000000
#define R2_INCDIR "/usr/local/include/libr"
#define TCP_ENABLE_ECN 0x104
#define MAGIC_NO_CHECK_TROFF 0x000000
#define __LONG_LONG_WIDTH__ 64
#define R_STATIC_ASSERT(x) switch (0) { case 0: case (x):; }
#define CHUNK_MAP_FLAGS_MASK ((size_t)0x1cU)
#define DW_OP_const8s 0x0f
#define tcache_event_hard JEMALLOC_N(tcache_event_hard)
#define MALLOCX_TCACHE_MAX 0xffd
#define O_DP_GETRAWENCRYPTED 0x0001
#define CLD_EXITED 1
#define TIOCPKT_NOSTOP 0x10
#define R_PRINT_UNIONMODE (1 << 5)
#define JEMALLOC_CC_SILENCE_INIT(v) = v
#define DW_CFA_def_cfa_sf 0x12
#define prng_range_zu JEMALLOC_N(prng_range_zu)
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define SUN_LEN(su) (sizeof(*(su)) - sizeof((su)->sun_path) + strlen((su)->sun_path))
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define AF_CHAOS 5
#define S_IRGRP 0000040
#define prof_active_get JEMALLOC_N(prof_active_get)
#define iralloct_realign JEMALLOC_N(iralloct_realign)
#define R_OUT 
#define UINTPTR_MAX 18446744073709551615UL
#define R_MAGIC_NO_CHECK_SOFT 0x004000
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define hash JEMALLOC_N(hash)
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define FMTxPTR PRIxPTR
#define str_flags _u._s._flags
#define __ATOMIC_SEQ_CST 5
#define DELAY(n) { int N = (n); while (--N > 0); }
#define DW_CFA_def_cfa_register 0x0d
#define rbtn_left_get(a_type,a_field,a_node) ((a_node)->a_field.rbn_left)
#define NETDB_INTERNAL -1
#define je_malloc malloc
#define RColor_BRED RCOLOR(ALPHA_FG, 231, 72, 86, 0x00, 0x00, 0x00, 9)
#define isnan(x) ( sizeof(x) == sizeof(float) ? __inline_isnanf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x)) : __inline_isnanl((long double)(x)))
#define DEFINE_CMD_ARGV_DESC_INNER(core,name,c_name,parent) RCmdDesc *c_name ##_cd = r_cmd_desc_inner_new (core->rcmd, parent, #name, &c_name ##_help); r_warn_if_fail (c_name ##_cd)
#define SIOCSLOWAT _IOW('s', 2, int)
#define IPV6CTL_RTMAXCACHE 27
#define __IDSTRING(name,string) static const char name[] __used = string
#define MATH_ERREXCEPT 2
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define RColor_BBGBLACK RCOLOR(ALPHA_BG, 118, 118, 118, 0x00, 0x00, 0x00, 8)
#define R_CONS_CURSOR_SAVE "\x1b[s"
#define R_PRINT_FLAGS_COMMENT 0x00000400
#define MSG_HAVEMORE 0x2000
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define IPPROTO_APES 99
#define R_OWN 
#define DW_MACINFO_vendor_ext 0xff
#define R_BIN_METH_STATIC 0x0000000000000002L
#define R_CONS_INVERT(x,y) (y? (x?Color_INVERT: Color_INVERT_RESET): (x?"[":"]"))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define prof_gdump_val JEMALLOC_N(prof_gdump_val)
#define UF_NODUMP 0x00000001
#define LG_RUN_MAXREGS (LG_PAGE - LG_TINY_MIN)
#define R_HEAP 
#define WEXITED 0x00000004
#define BITMAP_GROUPS_2_LEVEL(nbits) (BITMAP_GROUPS_1_LEVEL(nbits) + BITMAP_GROUPS_L1(nbits))
#define JEMALLOC_CC_SILENCE 
#define F_GETOWN 5
#define TSDN_NULL ((tsdn_t *)0)
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define KQI(q) QI(q ##LL)
#define IPCTL_DEFTTL 3
#define B0100 4
#define B0101 5
#define MONOTONIC_LINUX (__linux__ && _POSIX_C_SOURCE >= 199309L)
#define SDB_KSZ 0xff
#define R_UTIL_TABLE_H 
#define IP_FW_ADD 40
#define opt_purge JEMALLOC_N(opt_purge)
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define _SC_XBS5_LPBIG_OFFBIG 125
#define alloca(size) __alloca(size)
#define _USE_FORTIFY_LEVEL 2
#define __INT16_MAX__ 0x7fff
#define jemalloc_prefork JEMALLOC_N(jemalloc_prefork)
#define DW_LNE_HP_define_proc 0x20
#define B0111 7
#define WITNESS_INITIALIZER(rank) {"initializer", rank, NULL, {NULL, NULL}}
#define opt_prof_leak JEMALLOC_N(opt_prof_leak)
#define DW_OP_stack_value 0x9f
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define R_IO_SEEK_END 2
#define RColor_BBGYELLOW RCOLOR(ALPHA_BG, 249, 241, 165, 0x00, 0x00, 0x00, 11)
#define _SYS_DIRENT_H 
#define qr_split(a_qr_a,a_qr_b,a_field) qr_meld((a_qr_a), (a_qr_b), a_field)
#define MAXPHYS (128 * 1024)
#define arena_mapbitsp_get_mutable JEMALLOC_N(arena_mapbitsp_get_mutable)
#define NBBY __DARWIN_NBBY
#define DW_OP_breg0 0x70
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define JM_NBINS 36
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define ST32_MIN (-ST32_MAX-1)
#define AF_MAX 41
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define _SYS_POLL_H_ 
#define xmallctlnametomib(name,mibp,miblenp) do { if (je_mallctlnametomib(name, mibp, miblenp) != 0) { malloc_printf("<jemalloc>: Failure in " "xmallctlnametomib(\"%s\", ...)\n", name); abort(); } } while (0)
#define MAP_NOCACHE 0x0400
#define R_EGG_INCDIR_PATH "/lib/radare2/" R2_VERSION "/egg"
#define SDB_HT_PP_H 
#define PTHREAD_INHERIT_SCHED 1
#define CDSR_OFLOW 0x00080000
#define VLNEXT 14
#define R_HEX_H 
#define _SC_MQ_OPEN_MAX 46
#define IPV6CTL_KEEPFAITH 13
#define opt_quarantine JEMALLOC_N(opt_quarantine)
#define CORNER_BL 5
#define IPV6_RECVTCLASS 35
#define R_MAGIC_MIME_ENCODING 0x000400
#define _ANSI_STDDEF_H 
#define IPV6CTL_TEMPPLTIME 33
#define R_BIN_REQ_VERSIONINFO 0x800000
#define AI_DEFAULT (AI_V4MAPPED_CFG | AI_ADDRCONFIG)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define JEMALLOC_GLIBC_MALLOC_HOOK 
#define TABDLY 0x00000c04
#define NI_WITHSCOPEID 0x00000020
#define extent_node_dirty_insert JEMALLOC_N(extent_node_dirty_insert)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define DECAY_NTICKS_PER_UPDATE 1000
#define PTHREAD_CANCEL_DISABLE 0x00
#define __APPLE_API_OBSOLETE 
#define R_CORE_CMD_INVALID -1
#define prof_idump JEMALLOC_N(prof_idump)
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define IOPOL_DEFAULT 0
#define __KFBSD__ 0
#define R_HASH_SIZE_CRC16 2
#define DST_WET 3
#define idalloctm JEMALLOC_N(idalloctm)
#define hash_fmix_32 JEMALLOC_N(hash_fmix_32)
#define extent_node_dirty_remove JEMALLOC_N(extent_node_dirty_remove)
#define TTYDEF_CFLAG (CREAD | CS8 | HUPCL)
#define DW_OP_breg6 0x76
#define __IOS_AVAILABLE(_vers) 
#define SO_RCVLOWAT 0x1004
#define arena_decay_tick JEMALLOC_N(arena_decay_tick)
#define opt_abort JEMALLOC_N(opt_abort)
#define __SIZE_TYPE__ long unsigned int
#define IPPROTO_MTP 92
#define __signed signed
#define IMAXBEL 0x00002000
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define TIOCPTYGRANT _IO('t', 84)
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define ls_length(x) x->length
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define M_2_SQRTPI 1.12837916709551257389615890312154517
#define PF_ISDN AF_ISDN
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define PROF_TDATA_STATE_REINCARNATED ((prof_tdata_t *)(uintptr_t)1)
#define STRING_DEFAULT_RANGE 100
#define UT64_ADD_OVFCHK(x,y) ((UT64_MAX - (x)) < (y))
#define UTIME_NOW -1
#define R_PRINT_FLAGS_ALIGN 0x00040000
#define JEMALLOC_ATTR(s) __attribute__((s))
#define HAVE_CAPSICUM 0
#define extent_tree_ad_new JEMALLOC_N(extent_tree_ad_new)
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define prof_free JEMALLOC_N(prof_free)
#define RColor_BGYELLOW RCOLOR(ALPHA_BG, 193, 156, 0, 0x00, 0x00, 0x00, 3)
#define _POSIX_JOB_CONTROL 200112L
#define IPPROTO_CFTP 62
#define IPCTL_SOURCEROUTE 8
#define R_ULEB128_H 
#define SIGINFO 29
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __DARWIN_CTYPE_inline __header_inline
#define SHA384_BLOCK_LENGTH 128
#define DW_AT_call_value 0x7e
#define DW_OP_lo_user 0xe0
#define MALLOCX_LG_ALIGN(la) ((int)(la))
#define sigismember(set,signo) ((*(set) & __sigbits(signo)) != 0)
#define EOF (-1)
#define tcache_postfork_child JEMALLOC_N(tcache_postfork_child)
#define IP_DUMMYNET_GET 64
#define DW_OP_lit18 0x42
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define R2_REG_H 
#define S_IFREG 0100000
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define DW_AT_type 0x49
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define CROUND (CBLOCK - 1)
#define R_SANDBOX_H 
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __SPI_AVAILABLE(...) 
#define R_BIN_METH_NATIVE 0x0000000000004000L
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define _CACHED_RUNES (1 <<8 )
#define CRTS_IFLOW 0x00020000
#define PF_MAX AF_MAX
#define DT_SOCK 12
#define ctl_boot JEMALLOC_N(ctl_boot)
#define chunk_lookup JEMALLOC_N(chunk_lookup)
#define CHAR_MAX SCHAR_MAX
#define thread_deallocated_cleanup JEMALLOC_N(thread_deallocated_cleanup)
#define R2_SYSCALL_H 
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define R_ANAL_ADDR_TYPE_HEAP 1 << 5
#define map_misc_offset JEMALLOC_N(map_misc_offset)
#define DW_OP_piece 0x93
#define SEEK_DATA 4
#define PROF_DUMP_BUFSIZE 65536
#define MAXDOMNAMELEN 256
#define IP_RECVTOS 27
#define malloc_tsd_cleanup_register JEMALLOC_N(malloc_tsd_cleanup_register)
#define TCP_MAXSEG 0x02
#define _SYS_FILIO_H_ 
#define DW_AT_reference 0x77
#define prof_malloc JEMALLOC_N(prof_malloc)
#define R_BIN_REQ_STRINGS 0x000080
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define WITNESS_RANK_PROF_DUMP_SEQ WITNESS_RANK_LEAF
#define R_REGEX_NOTEOL 00002
#define POLLWRBAND 0x0100
#define IN_CLASSC_HOST 0x000000ff
#define R_CONS_GREP_COUNT 10
#define R_BIN_METH_MUTATING 0x0000000000000800L
#define B11100 28
#define B11101 29
#define R_FS_FILE_TYPE_MOUNTPOINT 'm'
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define F_ADDFILESUPPL 104
#define B_EVEN(x) (((x) & 1) == 0)
#define IP_TOS 3
#define rtree_set JEMALLOC_N(rtree_set)
#define _SC_FILE_LOCKING 69
#define R_ASM_ARCH_M68K R_SYS_ARCH_M68K
#define PF_SIP AF_SIP
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define IPV6PORT_RESERVED 1024
#define pseudo_AF_PIP 25
#define TAG_BOOLEAN 0x01
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define FILE_INVALID 0
#define B11110 30
#define B11111 31
#define r_list_iter_free(x) (x)
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define tsd_narenas_tdata_get JEMALLOC_N(tsd_narenas_tdata_get)
#define IOPOL_ATIME_UPDATES_OFF 1
#define R_UTF8_CIRCLE "\u25EF"
#define DW_LNE_HP_set_file_line_column 0x14
#define MCLOFSET (MCLBYTES - 1)
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 90
#define VTDLY 0x00010000
#define pages_commit JEMALLOC_N(pages_commit)
#define opt_prof_gdump JEMALLOC_N(opt_prof_gdump)
#define RENAME_SWAP 0x00000002
#define DW_OP_plus_uconst 0x23
#define DW_FORM_data16 0x1e
#define _PC_NAME_MAX 4
#define Color_BBGWHITE "\x1b[107m"
#define DW_FORM_block1 0x0a
#define DW_FORM_block2 0x03
#define TCP6_MSS 1024
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define NOFLSH 0x80000000
#define IPPROTO_SCCSP 96
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define VT1 0x00010000
#define _PC_MAX_CANON 2
#define DW_AT_pure 0x67
#define PF_INET6 AF_INET6
#define opt_prof_active JEMALLOC_N(opt_prof_active)
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define ONOCR 0x00000020
#define RUNE_LINE_VERT "│"
#define ffs_llu JEMALLOC_N(ffs_llu)
#define extent_tree_ad_first JEMALLOC_N(extent_tree_ad_first)
#define IP_RECVTTL 24
#define isunordered(x,y) __builtin_isunordered((x),(y))
#define R_PRINT_DOT (1 << 7)
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define R_MAGIC_COMPRESS 0x000004
#define arena_mapbits_decommitted_get JEMALLOC_N(arena_mapbits_decommitted_get)
#define R_BUF_CUR 1
#define DEBUGGER 1
#define R_HASH_SIZE_CRC32Q 4
#define DW_FORM_string 0x08
#define ql_tail_remove(a_head,a_type,a_field) do { a_type *t = ql_last(a_head, a_field); ql_remove((a_head), t, a_field); } while (0)
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define DW_AT_trampoline 0x56
#define DW_AT_call_target 0x83
#define IGNBRK 0x00000001
#define R_IO_SEEK_SET 0
#define _SC_V6_LP64_OFF64 105
#define DW_OP_call_ref 0x9a
#define LS_H 
#define R_HASH_SSDEEP (1ULL << R_HASH_IDX_SSDEEP)
#define __DARWIN_SUF_UNIX03 
#define TCPOLEN_FASTOPEN_REQ 2
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated(_msg)))
#define _SC_REALTIME_SIGNALS 36
#define KEV_INET_CHANGED_ADDR 2
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define TN_KEY_FMT "%"PFMT64u
#define SCNiMAX __SCN_MAX_LENGTH_MODIFIER__ "i"
#define JEMALLOC_HAVE_SECURE_GETENV 
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define PSPIN 0x800
#define extent_tree_szsnad_iter_recurse JEMALLOC_N(extent_tree_szsnad_iter_recurse)
#define CHAR_MIN SCHAR_MIN
#define __STDC_VERSION__ 201710L
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __FLT_MANT_DIG__ 24
#define extent_tree_ad_search JEMALLOC_N(extent_tree_ad_search)
#define R_ABS(x) (((x)<0)?-(x):(x))
#define base_prefork JEMALLOC_N(base_prefork)
#define __IPHONE_5_0 50000
#define DW_OP_xderef_size 0x95
#define S_IFCHR 0020000
#define R_SOCKET_PROTO_DEFAULT R_SOCKET_PROTO_TCP
#define F_GETPATH_MTMINFO 71
#define RColor_BGRED RCOLOR(ALPHA_BG, 197, 15, 31, 0x00, 0x00, 0x00, 1)
#define PRIuPTR "lu"
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define __UINT64_C(c) c ## ULL
#define _XOPEN_PATH_MAX 1024
#define IS_NULLSTR(x) (!(x) || !*(x))
#define PRIXLEAST16 PRIX16
#define RUNECODE_ARROW_LEFT 0xcd
#define R_REGEX_EESCAPE 5
#define MSG_WAITSTREAM 0x200
#define ffs_lu JEMALLOC_N(ffs_lu)
#define IPPROTO_ESP 50
#define ql_head_remove(a_head,a_type,a_field) do { a_type *t = ql_first(a_head); ql_remove((a_head), t, a_field); } while (0)
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define SF_APPEND 0x00040000
#define MAXLOGNAME 255
#define JEMALLOC_INTERNAL_FFSL __builtin_ffsl
#define DW_OP_constu 0x10
#define arena_run_regind JEMALLOC_N(arena_run_regind)
#define DW_TAG_string_type 0x12
#define _SUSECONDS_T 
#define AT_EACCESS 0x0010
#define B1000 8
#define B1001 9
#define buferror JEMALLOC_N(buferror)
#define KEV_DL_ISSUES 24
#define NET_RT_STAT 4
#define _POSIX_VERSION 200112L
#define FILE_CHECK 1
#define FILE_LEQDATE 28
#define R_ANAL_ADDR_TYPE_READ 1 << 1
#define DW_AT_lower_bound 0x22
#define PRIXLEAST32 PRIX32
#define SF_FIRMLINK 0x00800000
#define islessequal(x,y) __builtin_islessequal((x),(y))
#define B1010 10
#define B1011 11
#define __INT_WCHAR_T_H 
#define WITNESS_RANK_PROF_DUMP 4U
#define ASN1_CLASS 0xC0
#define VTIME 17
#define VDISCARD 15
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define _UNISTD_H_ 
#define PTHREAD_PRIO_INHERIT 1
#define MALLOCX_ZERO ((int)0x40)
#define _PC_REC_INCR_XFER_SIZE 20
#define rbt_node_new(a_type,a_field,a_rbt,a_node) do { assert(((uintptr_t)(a_node) & 0x1) == 0); rbtn_left_set(a_type, a_field, (a_node), NULL); rbtn_right_set(a_type, a_field, (a_node), NULL); rbtn_red_set(a_type, a_field, (a_node)); } while (0)
#define SDB_KT ut32
#define _SYS__TYPES_H_ 
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define ENOTSOCK 38
#define FP_SUPERNORMAL 6
#define R_REG_COND_LOE 8
#define O_RDWR 0x0002
#define purge_mode_names JEMALLOC_N(purge_mode_names)
#define JEMALLOC_OVERRIDE_VALLOC 
#define _SYS_SOCKIO_H_ 
#define RHash struct r_hash_t
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _T_PTRDIFF_ 
#define WEOF __DARWIN_WEOF
#define MSG_FLUSH 0x400
#define DW_VIS_qualified 0x03
#define EPERM 1
#define DW_EXTENDED_OPCODE 0
#define R_HAVE_CRC64_EXTRA 1
#define TCP_NOPUSH 0x04
#define __SSTR 0x0200
#define __FLT128_MAX_EXP__ 16384
#define ENOTDIR 20
#define PRIXLEAST64 PRIX64
#define prof_tdata_get JEMALLOC_N(prof_tdata_get)
#define PTHREAD_MUTEX_NORMAL 0
#define R_BIN_BIND_NUM_STR "NUM"
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define MAXMAGIS 8192
#define PF_ECMA AF_ECMA
#define DW_AT_addr_base 0x73
#define JEMALLOC_VALGRIND_MAKE_MEM_UNDEFINED(ptr,usize) do {} while (0)
#define R_BIG_SSCANF_FORMAT_STR "%8x"
#define PROT_WRITE 0x02
#define F_GETPATH 50
#define RColor_GREEN RCOLOR(ALPHA_FG, 19, 161, 14, 0x00, 0x00, 0x00, 2)
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define R2_ASM_H 
#define CN_RO 0x000010
#define KEV_INET_ARPRTRALIVE 10
#define quarantine_alloc_hook_work JEMALLOC_N(quarantine_alloc_hook_work)
#define R_CORE_BIN_ACC_VERSIONINFO 0x10000
#define DTF_REWIND 0x0004
#define R_HASH_PCPRINT (1ULL << R_HASH_IDX_PCPRINT)
#define UT16_ALIGN(x) (x + (x - (x % sizeof (ut16))))
#define PF_CHAOS AF_CHAOS
#define R_JOIN_5_PATHS(p1,p2,p3,p4,p5) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4 R_SYS_DIR p5
#define __SLBF 0x0001
#define TIOCMSET _IOW('t', 109, int)
#define tsd_quarantinep_get JEMALLOC_N(tsd_quarantinep_get)
#define R2_MAGIC_H 
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define TRAP_TRACE 2
#define R_CORE_BIN_ACC_ALL 0x504FFF
#define RENAME_SECLUDE 0x00000001
#define R_BUF_SET 0
#define malloc_mutex_lock JEMALLOC_N(malloc_mutex_lock)
#define __FLT32_MANT_DIG__ 24
#define IPV6_MULTICAST_HOPS 10
#define HUGE_MAXCLASS ((((size_t)1) << 62) + (((size_t)3) << 60))
#define prng_state_next_zu JEMALLOC_N(prng_state_next_zu)
#define _SYS_SIZE_T_H 
#define _FSTDIO 
#define NET_MAXID AF_MAX
#define RLIMIT_NPROC 7
#define __LP64_OFF64 (1)
#define __API_DEPRECATED_BEGIN(...) 
#define IPV6_PORTRANGE_HIGH 1
#define _STDDEF_H 
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define FP_QNAN FP_NAN
#define R_BIN_REQ_SRCLINE 0x000400
#define LIBC_HAVE_PRIV_SET 0
#define __WATCHOS_3_0 30000
#define R_BIN_REQ_INFO 0x000010
#define DW_AT_namelist_item 0x44
#define KEV_DL_RRC_STATE_CHANGED 28
#define SV_NODEFER SA_NODEFER
#define LONG_CEILING(a) (((a) + LONG_MASK) & ~LONG_MASK)
#define STRING_IGNORE_UPPERCASE BIT(3)
#define R_PRINT_STRING_WRAP 8
#define sigdelset(set,signo) (*(set) &= ~__sigbits(signo), 0)
#define R_CONS_KEY_ESC 0x1b
#define R_EGG_OS_FREEBSD 0x73a72944
#define R_NULLABLE 
#define __SIZE_T__ 
#define nhbins JEMALLOC_N(nhbins)
#define _INTMAX_T 
#define FILE_OPDIVIDE 6
#define arena_cleanup JEMALLOC_N(arena_cleanup)
#define JEMALLOC_HAVE_ATTR_ALLOC_SIZE 
#define O_DIRECTORY 0x00100000
#define __SRD 0x0004
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define __SRW 0x0010
#define TAG_BMPSTRING 0x1E
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define extent_node_addr_get JEMALLOC_N(extent_node_addr_get)
#define pow2_ceil_zu JEMALLOC_N(pow2_ceil_zu)
#define _SC_SEM_VALUE_MAX 50
#define R_RUN_PROFILE_NARGS 512
#define DW_AT_call_column 0x57
#define __IOS_UNAVAILABLE 
#define MAP_RENAME 0x0020
#define KEV_DL_DELMULTI 8
#define Color_CYAN "\x1b[36m"
#define R_FLAGS_FS_SEGMENTS "segments"
#define chunk_alloc_cache JEMALLOC_N(chunk_alloc_cache)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SDB_SS ","
#define FFSYNC O_FSYNC
#define bitmap_unset JEMALLOC_N(bitmap_unset)
#define IPV6CTL_FORWSRCRT 5
#define DW_OP_const4u 0x0c
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define __FLT64X_DIG__ 18
#define R_CORE_ASMQJMPS_LETTERS 26
#define PROF_TDATA_STATE_PURGATORY ((prof_tdata_t *)(uintptr_t)2)
#define r_crbtree_foreach(tree,iter,stuff) for (iter = tree? r_crbtree_first_node (tree): NULL, stuff = iter? iter->data: NULL; iter; iter = r_rbnode_next (iter), stuff = iter? iter->data: NULL)
#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define DW_OP_neg 0x1f
#define valgrind_make_mem_undefined JEMALLOC_N(valgrind_make_mem_undefined)
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define DW_OP_div 0x1b
#define NL_TEXTMAX 2048
#define ELOOP 62
#define F_GETPROTECTIONLEVEL 77
#define arena_prefork2 JEMALLOC_N(arena_prefork2)
#define FILE_MELDATE 22
#define PT_ATTACH ePtAttachDeprecated
#define UF_HIDDEN 0x00008000
#define R_API __attribute__((visibility("default")))
#define CDTR_IFLOW 0x00040000
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define F_SETFD 2
#define F_SETFL 4
#define FILE_BELONG 8
#define DW_OP_reg20 0x64
#define Color_BGBLACK "\x1b[40m"
#define SIG_UNBLOCK 2
#define _POSIX_RTSIG_MAX 8
#define R_EGG_OS_WINDOWS 0x05b7de9a
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define R_HASH_CRC64_ECMA182 (1ULL << R_HASH_IDX_CRC64_ECMA182)
#define ESIL_STACK_NAME "esil.ram"
#define R_HAVE_CRC24 1
#define R_CORE_PRJ_EVAL 0x0002
#define DW_OP_reg12 0x5c
#define DW_LNE_set_discriminator 0x04
#define st8 signed char
#define arena_decay_time_set JEMALLOC_N(arena_decay_time_set)
#define DW_OP_reg13 0x5d
#define TIOCPKT_STOP 0x04
#define FP_SNAN FP_NAN
#define IN_CLASSB_MAX 65536
#define R_MAX_DEFINED 
#define PRINTF_BA(fmt,...) PRINTF_A ("%s", fmt, pal->num, __VA_ARGS__)
#define IPPROTO_CPHB 73
#define __ORDER_PDP_ENDIAN__ 3412
#define WANT_THREADS 1
#define atomic_write_uint32 JEMALLOC_N(atomic_write_uint32)
#define ffs_zu JEMALLOC_N(ffs_zu)
#define RUNECODESTR_CURVE_CORNER_BL "\xd5"
#define _POSIX_MEMLOCK (-1)
#define RUNECODESTR_CURVE_CORNER_BR "\xd4"
#define pages_unmap JEMALLOC_N(pages_unmap)
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define narenas_auto JEMALLOC_N(narenas_auto)
#define arena_ichoose JEMALLOC_N(arena_ichoose)
#define __SWR 0x0008
#define LG_MAXOBJS_INIT 10
#define phn_merge_ordered(a_type,a_field,a_phn0,a_phn1,a_cmp) do { a_type *phn0child; assert(a_phn0 != NULL); assert(a_phn1 != NULL); assert(a_cmp(a_phn0, a_phn1) <= 0); phn_prev_set(a_type, a_field, a_phn1, a_phn0); phn0child = phn_lchild_get(a_type, a_field, a_phn0); phn_next_set(a_type, a_field, a_phn1, phn0child); if (phn0child != NULL) phn_prev_set(a_type, a_field, phn0child, a_phn1); phn_lchild_set(a_type, a_field, a_phn0, a_phn1); } while (0)
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define isthreaded true
#define R_HASH_XOR (1ULL << R_HASH_IDX_XOR)
#define SIOCSHIWAT _IOW('s', 0, int)
#define DW_AT_call_origin 0x7f
#define DW_LNS_negate_stmt 0x06
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define R_HASH_SHA384 (1ULL << R_HASH_IDX_SHA384)
#define DW_OP_reg25 0x69
#define R_ENDIAN_H 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define s6_addr __u6_addr.__u6_addr8
#define USE_MMAN HAVE_MMAN
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define R_REGEX_PEND 0040
#define CBRK CEOL
#define CSTOP CTRL('s')
#define DW_OP_reg26 0x6a
#define DW_LNS_set_epilogue_begin 0x0b
#define __DARWIN_NO_LONG_LONG 0
#define CONS_BUFSZ 0x4f00
#define UINT64_MAX 18446744073709551615ULL
#define PAGE_CEILING(s) (((s) + PAGE_MASK) & ~PAGE_MASK)
#define KEV_INET_PORTINUSE 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __PTHREAD_RWLOCK_SIZE__ 192
#define RTLD_GLOBAL 0x8
#define size2index_lookup JEMALLOC_N(size2index_lookup)
#define _SYS_UN_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define NO_RECOVERY 3
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define EINVAL 22
#define DW_FORM_strx 0x1a
#define quarantine_cleanup JEMALLOC_N(quarantine_cleanup)
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define _STRUCT_TIMESPEC struct timespec
#define SEEFLAG -2
#define DW_FORM_indirect 0x16
#define IP_MULTICAST_TTL 10
#define IPPROTO_UDP 17
#define DW_OP_breg24 0x88
#define CN_INT 0x000002
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define DW_LANG_Julia 0x001f
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6CTL_MAXFRAGS 41
#define IPV6_FW_ADD 30
#define __DTF_ATEND 0x0020
#define SS_ONSTACK 0x0001
#define PF_DATAKIT AF_DATAKIT
#define DW_OP_breg25 0x89
#define PF_NDRV AF_NDRV
#define NPSIZES 199
#define F_SETLK 8
#define _SC_2_FORT_RUN 22
#define _BSD_SIZE_T_ 
#define arena_stats_merge JEMALLOC_N(arena_stats_merge)
#define DW_TAG_hi_user 0xffff
#define AF_UTUN 38
#define JEMALLOC_VALGRIND_MAKE_MEM_DEFINED(ptr,usize) do {} while (0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define BUFFER_H 
#define IPV6CTL_RIP6STATS 36
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define NI_NUMERICSERV 0x00000008
#define AF_INET 2
#define PTHREAD_PRIO_PROTECT 2
#define Color_RESET "\x1b[0m"
#define FWRITE 0x00000002
#define bt_init JEMALLOC_N(bt_init)
#define IP_DONTFRAG 28
#define TAG_ENUMERATED 0x0A
#define RTREE_BITS_PER_LEVEL (1U << LG_RTREE_BITS_PER_LEVEL)
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define DW_AT_static_link 0x48
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define _SC_PRIORITIZED_IO 34
#define WITNESS_RANK_PROF_THREAD_ACTIVE_INIT WITNESS_RANK_LEAF
#define CLBYTES (CLSIZE*NBPG)
#define R_BIN_REQ_PDB_DWNLD 0x100000
#define F_RDAHEAD 45
#define UT8_GT0 0x80U
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define LG_PROF_SAMPLE_DEFAULT 19
#define DW_OP_abs 0x19
#define IP_RECVPKTINFO IP_PKTINFO
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define F_GLOBAL_NOCACHE 55
#define R_ASM_ARCH_SH R_SYS_ARCH_SH
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define MAXPHYSIO MAXPHYS
#define JEMALLOC_TLS 
#define _QUAD_HIGHWORD 1
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define R_HASH_SIZE_CRC32_POSIX 4
#define DW_AT_call_tail_call 0x82
#define R_BIN_REQ_CLASSES 0x010000
#define _SC_V6_ILP32_OFFBIG 104
#define _SC_TRACE_LOG 100
#define RUNNING_ON_VALGRIND ((unsigned)0)
#define TCION 4
#define SO_NOADDRERR 0x1023
#define TAG_EOC 0x00
#define _SYS_SOCKET_H_ 
#define _toupper(c) __toupper(c)
#define chunk_alloc_dss JEMALLOC_N(chunk_alloc_dss)
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define chunk_dalloc_wrapper JEMALLOC_N(chunk_dalloc_wrapper)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define NL0 0x00000000
#define opt_prof_prefix JEMALLOC_N(opt_prof_prefix)
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define TAG_UTF8STRING 0x0C
#define R_PRINT_STRING_ESC_NL 32
#define DW_OP_lit11 0x3b
#define base_postfork_parent JEMALLOC_N(base_postfork_parent)
#define R_HASH_SIZE_SHA1 20
#define tsd_tcachep_get JEMALLOC_N(tsd_tcachep_get)
#define B600 600
#define _RUNE_T 
#define IP_OLD_FW_FLUSH 52
#define ffs_u32 JEMALLOC_N(ffs_u32)
#define PT_READ_U 3
#define __MAC_10_11_4 101104
#define IOV_MAX 1024
#define rb_new(a_type,a_field,a_rbt) do { (a_rbt)->rbt_root = NULL; } while (0)
#define R_BIG_MAX_VAL (R_BIG_DTYPE_TMP) UT32_MAX
#define R_MAGIC_SYMLINK 0x000002
#define SDB_SET_H 
#define PRIdLEAST8 PRId8
#define _r_calloc r_calloc
#define R_HASH_CRC32C (1ULL << R_HASH_IDX_CRC32C)
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define ctl_bymib JEMALLOC_N(ctl_bymib)
#define INTPTR_MAX 9223372036854775807L
#define ql_next(a_head,a_elm,a_field) ((ql_last(a_head, a_field) != (a_elm)) ? qr_next((a_elm), a_field) : NULL)
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 0x0080
#define F_FULLFSYNC 51
#define DW_FORM_ref1 0x11
#define minor(x) ((int32_t)((x) & 0xffffff))
#define r_unref(x,f) { assert (x->R_REF_NAME> 0); if (!--(x->R_REF_NAME)) { f(x); } }
#define IP_DROP_MEMBERSHIP 13
#define UINT_LEAST32_MAX UINT32_MAX
#define PTHREAD_STACK_MIN 8192
#define __SSE_MATH__ 1
#define R2_BIRTH "2022-04-30__12:15:59"
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define B_SET(x,n) ((x) |= (1ULL << (n)))
#define tcache_postfork_parent JEMALLOC_N(tcache_postfork_parent)
#define _SC_THREADS 96
#define UNDERFLOW 4
#define extent_tree_ad_reverse_iter_start JEMALLOC_N(extent_tree_ad_reverse_iter_start)
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define R_SELWIDGET_DIR_UP 0
#define R_MIDFLAGS_REALIGN 2
#define BRAILE_EIG $00+$01+$10+$11+$20+$21+$30+$31
#define SIGSYS 12
#define DW_LANG_Cobol74 0x0005
#define arena_new JEMALLOC_N(arena_new)
#define R_MODE_CLASSDUMP 0x040
#define DW_AT_entry_pc 0x52
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define stats_cactive_get JEMALLOC_N(stats_cactive_get)
#define va_copy(d,s) __builtin_va_copy(d,s)
#define O_CLOEXEC 0x01000000
#define DW_LANG_Cobol85 0x0006
#define nstime_divide JEMALLOC_N(nstime_divide)
#define PRIu16 "hu"
#define R_ANAL_ARCHINFO_MAX_OP_SIZE 1
#define DW_AT_use_UTF8 0x53
#define REGEX_OFFSET_START BIT(4)
#define R_CORE_BIN_ACC_INFO 0x002
#define POSIX_MADV_SEQUENTIAL 2
#define r_malloc(x) malloc((x))
#define R_BIT_SET(x,y) (((ut8*)x)[y>>4] |= (1<<(y&0xf)))
#define INT_LEAST64_MAX INT64_MAX
#define OFDEL 0x00020000
#define _PATH_SERVICES "/etc/services"
#define __WATCHOS_3_1_1 30101
#define IOC_OUT (__uint32_t)0x40000000
#define atomic_cas_uint32 JEMALLOC_N(atomic_cas_uint32)
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define DW_AT_name 0x03
#define prof_tdata_init JEMALLOC_N(prof_tdata_init)
#define TIOCSDTR _IO('t', 121)
#define lg_prof_sample JEMALLOC_N(lg_prof_sample)
#define DW_OP_lit19 0x43
#define chunk_hooks_get JEMALLOC_N(chunk_hooks_get)
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define R_BIN_SIZEOF_STRINGS 512
#define DW_TAG_const_type 0x26
#define RTR_PROTOCOL_RAP 0
#define extent_tree_szsnad_remove JEMALLOC_N(extent_tree_szsnad_remove)
#define JEMALLOC_INTERNAL_FFS __builtin_ffs
#define R_EMPTY { 0 }
#define TCSAFLUSH 2
#define DW_FORM_block4 0x04
#define HUD_BUF_SIZE 512
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define IPV6_MIN_MEMBERSHIPS 31
#define tsd_arena_set JEMALLOC_N(tsd_arena_set)
#define KEV_INET6_ADDR_DELETED 3
#define _POSIX_TIMER_MAX 32
#define _ID_T 
#define qr_new(a_qr,a_field) do { (a_qr)->a_field.qre_next = (a_qr); (a_qr)->a_field.qre_prev = (a_qr); } while (0)
#define IPPORT_USERRESERVED 5000
#define AF_OSI AF_ISO
#define DW_CFA_lo_user 0x1c
#define IPV6CTL_RR_PRUNE 22
#define arena_decay_time_default_get JEMALLOC_N(arena_decay_time_default_get)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define DW_ATE_signed 0x05
#define DW_OP_reg23 0x67
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define IN_CLASSA_MAX 128
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define s2u_compute JEMALLOC_N(s2u_compute)
#define TAG_VISIBLESTRING 0x1A
#define DW_OP_reg24 0x68
#define TCP_CONNECTION_INFO 0x106
#define UT64_ALIGN(x) (x + (x - (x % sizeof (ut64))))
#define R2_LIBDIR "/usr/local/lib"
#define RUNECODESTR_CURVE_CORNER_TL "\xd2"
#define hash_x86_32 JEMALLOC_N(hash_x86_32)
#define RUNECODESTR_CURVE_CORNER_TR "\xd3"
#define IPPROTO_VINES 83
#define arena_prefork1 JEMALLOC_N(arena_prefork1)
#define DW_AT_friend 0x41
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define HUGE_VALL __builtin_huge_vall()
#define tcache_boot JEMALLOC_N(tcache_boot)
#define SCNoMAX __SCN_MAX_LENGTH_MODIFIER__ "o"
#define EAI_AGAIN 2
#define INTPTR_MIN (-INTPTR_MAX-1)
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define RColor_MAGENTA RCOLOR(ALPHA_FG, 136, 23, 152, 0x00, 0x00, 0x00, 5)
#define INT8_C(v) (v)
#define FP_CHOP 3
#define $10 2
#define DW_OP_reg29 0x6d
#define r_str_array(x,y) ((y>=0 && y<(sizeof(x)/sizeof(*x)))?x[y]:"")
#define R_UTF8_SEE_NO_EVIL_MONKEY "🙈"
#define IP_PORTRANGE_HIGH 1
#define VERASE 3
#define _SC_DELAYTIMER_MAX 45
#define PRIu64 __PRI_64_LENGTH_MODIFIER__ "u"
#define S_IFDIR 0040000
#define _SCHED_H_ 
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define VT0 0x00000000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define EBUSY 16
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define EPROCLIM 67
#define SAE_CONNID_ANY 0
#define TRAP_BRKPT 1
#define tcache_flush JEMALLOC_N(tcache_flush)
#define _GID_T 
#define DW_VIRTUALITY_none 0x00
#define $20 4
#define TIOCSTI _IOW('t', 114, char)
#define R_BIG_ARRAY_SIZE (512 / R_BIG_WORD_SIZE)
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define ctob(x) ((x)<<PGSHIFT)
#define __FLT64_IS_IEC_60559__ 2
#define R_HASH_SIZE_CRC32_JAMCRC 4
#define __FLT32X_MIN_EXP__ (-1021)
#define R_CORE_BLOCKSIZE_MAX 0x3200000
#define __SDB_HT_H 
#define $30 (1 << 8)
#define _SC_SAVED_IDS 7
#define HT_(name) HtPU ##name
#define PRIxLEAST16 PRIx16
#define DW_TAG_imported_module 0x3a
#define R2_VERSION_NUMBER 50504
#define atomic_sub_p JEMALLOC_N(atomic_sub_p)
#define arena_rd_to_miscelm JEMALLOC_N(arena_rd_to_miscelm)
#define PFMT32d "d"
#define __INT_FAST16_MAX__ 0x7fff
#define CONFIG_H 
#define MALLOCX_ALIGN_GET_SPECIFIED(flags) (ZU(1) << (flags & MALLOCX_LG_ALIGN_MASK))
#define DW_OP_xderef 0x18
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define R_NEWS(x,y) (x*)malloc(sizeof(x)*(y))
#define DW_AT_call_pc 0x81
#define RColor_BYELLOW RCOLOR(ALPHA_FG, 249, 241, 165, 0x00, 0x00, 0x00, 11)
#define INT_LEAST64_MIN INT64_MIN
#define __DTF_SKIPREAD 0x0010
#define DOT_STYLE_NORMAL 0
#define R_CORE_BIN_ACC_SECTIONS_MAPPING 0x40000000
#define F_SETNOSIGPIPE 73
#define DW_AT_GNU_call_site_data_value 0x2112
#define PRIxLEAST32 PRIx32
#define size2index JEMALLOC_N(size2index)
#define FILE_BEQUAD 26
#define DW_OP_shr 0x25
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define arena_decay_time_default_set JEMALLOC_N(arena_decay_time_default_set)
#define EROFS 30
#define DW_ATE_unsigned 0x07
#define SIOCSPGRP _IOW('s', 8, int)
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define tcache_alloc_small JEMALLOC_N(tcache_alloc_small)
#define WANT_CAPSTONE 1
#define DW_AT_call_all_tail_calls 0x7c
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define LONG_MASK (LONG - 1)
#define __SYS_APPLEAPIOPTS_H__ 
#define SCNi16 "hi"
#define _SC_SEMAPHORES 37
#define extent_node_arena_set JEMALLOC_N(extent_node_arena_set)
#define tsd_thread_allocatedp_get JEMALLOC_N(tsd_thread_allocatedp_get)
#define R_BIN_REQ_CREATE 0x008000
#define tcache_cleanup JEMALLOC_N(tcache_cleanup)
#define DW_OP_pick 0x15
#define je_valloc valloc
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define R_REGEX_DUMP 0200
#define FILE_LESHORT 10
#define DW_TAG_base_type 0x24
#define FILE_FMT_FLOAT 4
#define r_oflist_array(x) x->array? x->array: (x->array = r_oflist_serialize (x)), x->array
#define __SEOF 0x0020
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __WCHAR_T__ 
#define arena_mapbitsp_read JEMALLOC_N(arena_mapbitsp_read)
#define IPPROTO_SWIPE 53
#define _POSIX2_PBS_CHECKPOINT (-1)
#define DW_OP_lt 0x2d
#define R_AGRAPH_MODE_OFFSET 1
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define DW_AT_GNU_macros 0x2119
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define je_mallctlnametomib mallctlnametomib
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define PRIxLEAST64 PRIx64
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define NI_DGRAM 0x00000010
#define PRIxFAST16 PRIx16
#define R2_VERSION "5.5.4"
#define L_INCR SEEK_CUR
#define R_CONS_KEY_F10 0xfa
#define R_CONS_KEY_F12 0xfc
#define B0000 0
#define IP_HDRINCL 2
#define PF_LINK AF_LINK
#define R_CORE_BIN_ACC_MEM 0x4000
#define IPV6_TCLASS 36
#define Color_WHITE "\x1b[37m"
#define PFMTx PFMT64x
#define RColor_CYAN RCOLOR(ALPHA_FG, 58, 150, 221, 0x00, 0x00, 0x00, 6)
#define DW_OP_regx 0x90
#define pages_nohuge JEMALLOC_N(pages_nohuge)
#define DW_LNE_HP_negate_is_UV_update 0x11
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define PRIX16 "hX"
#define CTS(x,y,z,t,v) {t* _=(t*)CTA(x,y,z);*_=v;}
#define MD5_CTX R_MD5_CTX
#define fpclassify(x) ( sizeof(x) == sizeof(float) ? __fpclassifyf((float)(x)) : sizeof(x) == sizeof(double) ? __fpclassifyd((double)(x)) : __fpclassifyl((long double)(x)))
#define CHUNK_MAP_BININD_SHIFT 5
#define ST16_SUB_OVFCHK(a,b) ST16_ADD_OVFCHK(a,-(b))
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define atomic_add_p JEMALLOC_N(atomic_add_p)
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define R_BIT_UNSET(x,y) (((ut8*)x)[y>>4] &= ~(1<<(y&0xf)))
#define arena_node_alloc JEMALLOC_N(arena_node_alloc)
#define _POSIX_RAW_SOCKETS (-1)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define __SERR 0x0040
#define PRIxFAST32 PRIx32
#define __PRAGMA_REDEFINE_EXTNAME 1
#define DEFINE_CMD_ARGV_DESC(core,name,parent) DEFINE_CMD_ARGV_DESC_SPECIAL (core, name, name, parent)
#define CSTATUS CTRL('t')
#define va_end(v) __builtin_va_end(v)
#define S_TYPEISMQ(buf) (0)
#define OFILL 0x00000080
#define EXPR_NEST_MAX 32
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define PRIX32 "X"
#define DW_OP_skip 0x2f
#define R_CRYPTO_AES_ECB 1ULL<<3
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_4 70400
#define __SEG_FS 1
#define DW_AT_call_all_calls 0x7a
#define __INT_LEAST16_MAX__ 0x7fff
#define CKILL CTRL('u')
#define R_BIN_REQ_FIELDS 0x000100
#define DW_FORM_strx2 0x26
#define container_of(ptr,type,member) ((type *)((char *)(__typeof__(((type *)0)->member) *){ptr} - offsetof(type, member)))
#define IGNCR 0x00000080
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define TCP_RXT_FINDROP 0x100
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 11
#define isqalloc JEMALLOC_N(isqalloc)
#define arena_basic_stats_merge JEMALLOC_N(arena_basic_stats_merge)
#define _FD_SET 
#define LG_CHUNK_DEFAULT 21
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define R_BIN_TYPE_SECTION_STR "SECT"
#define FILE_OPMINUS 4
#define DEFINE_CMD_ARGV_DESC_SPECIAL(core,name,c_name,parent) DEFINE_CMD_ARGV_DESC_DETAIL (core, name, c_name, parent, c_name ##_handler, &c_name ##_help)
#define DW_FORM_rnglistx 0x23
#define SMOOTHSTEP_NSTEPS 200
#define _POSIX2_PBS_TRACK (-1)
#define malloc_mutex_boot JEMALLOC_N(malloc_mutex_boot)
#define _SC_THREAD_KEYS_MAX 86
#define PRIxFAST64 PRIx64
#define __INT_LEAST64_TYPE__ long long int
#define INT64_MAX 9223372036854775807LL
#define DW_FORM_strx4 0x28
#define DOT_STYLE_CONDITIONAL 1
#define R2_REGEX_H 
#define SIGCHLD 20
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define MAXPRI 127
#define __INT16_TYPE__ short int
#define DW_OP_minus 0x1c
#define CHUNK_MAP_UNZEROED ((size_t)0x08U)
#define arena_postfork_child JEMALLOC_N(arena_postfork_child)
#define PRIX64 __PRI_64_LENGTH_MODIFIER__ "X"
#define prof_boot0 JEMALLOC_N(prof_boot0)
#define R2_VERSION_MINOR 5
#define Color_BGGRAY "\x1b[100m"
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define R_HASH_SIZE_ADLER32 4
#define R_EGG_OS_NAME "darwin"
#define CPUMON_MAKE_FATAL 0x1000
#define R_BIN_METH_BRIDGE 0x0000000000008000L
#define R_CONS_GREP_WORD_SIZE 64
#define DW_CFA_def_cfa 0x0c
#define R_NUM_H 
#define DW_OP_reg31 0x6f
#define _WEXT_OK (1<<18)
#define DT_UNKNOWN 0
#define R_LOG_WARN(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_WARN, NULL, fmtstr, ##__VA_ARGS__);
#define _MACHTYPES_H_ 
#define B1800 1800
#define DW_OP_reg10 0x5a
#define DW_OP_reg11 0x5b
#define TH_FIN 0x01
#define IPPROTO_IDRP 45
#define DW_OP_reg14 0x5e
#define DW_OP_reg15 0x5f
#define DW_OP_reg17 0x61
#define DW_OP_reg18 0x62
#define DW_OP_reg19 0x63
#define PFMT32x "x"
#define _POSIX_FSYNC 200112L
#define clbase(i) (i)
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 3
#define FILE_FMT_STR 2
#define cdb_datapos(c) ((c)->dpos)
#define DB_ARG(x) r_str_word_get0(str, x)
#define CLASS_UNIVERSAL 0x00
#define IPPROTO_NONE 59
#define R_ANAL_FCN_VARKIND_LOCAL 'v'
#define R_REGEX_BACKR 02000
#define AT_REALDEV 0x0200
#define DW_OP_reg30 0x6e
#define DW_OP_reg21 0x65
#define DW_OP_reg22 0x66
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define IN_CLASSD_NET 0xf0000000
#define DW_OP_reg28 0x6c
#define __TVOS_13_0 130000
#define MALLOCX_ALIGN(a) ((int)(((size_t)(a) < (size_t)INT_MAX) ? ffs((int)(a))-1 : ffs((int)(((size_t)(a))>>32))+31))
#define tsd_prof_tdata_get JEMALLOC_N(tsd_prof_tdata_get)
#define IXANY 0x00000800
#define je_mallctl mallctl
#define MSG_RCVMORE 0x4000
#define __TVOS_13_2 130200
#define r_utf16_to_utf8(wc) r_utf16_to_utf8_l ((wchar_t *)wc, -1)
#define PFMT32o "o"
#define R_HASH_ALL ((1ULL << R_MIN(63, R_HASH_NUM_INDICES))-1)
#define PFMT32u "u"
#define RUNE_CORNER_BL "└"
#define POLLWRITE 0x1000
#define _POSIX2_PBS (-1)
#define RUNE_CORNER_BR "┘"
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define R_MAGIC_MIME_TYPE 0x000010
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define IPV6_FW_ZERO 33
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define NCCS 20
#define _I386_PARAM_H_ 
#define SCNdMAX __SCN_MAX_LENGTH_MODIFIER__ "d"
#define EDEVERR 83
#define PRINT_YA(msg) r_cons_printf ("%s" msg Color_RESET, pal->offset)
#define __SWIFT_UNAVAILABLE 
#define ILL_PRVREG 6
#define r_free(x) free((x))
#define FPE_FLTINV 5
#define R_NSEC_PER_USEC 1000ULL
#define __LITTLE_ENDIAN__ 1
#define FILE_SEARCH 20
#define VQUIT 9
#define IN_CLASSB_HOST 0x0000ffff
#define IPPROTO_SRPC 90
#define R_HASH_SIZE_FLETCHER8 1
#define JEMALLOC_ALLOCATOR 
#define DW_AT_endianity 0x65
#define F_SETLKW 9
#define CN_RW 0x000020
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define R2_MAIN_H 
#define FOREACHOP(GENERATE) GENERATE(NOP) GENERATE(UNK) GENERATE(JCC) GENERATE(STR) GENERATE(STM) GENERATE(LDM) GENERATE(ADD) GENERATE(SUB) GENERATE(NEG) GENERATE(MUL) GENERATE(DIV) GENERATE(MOD) GENERATE(SMUL) GENERATE(SDIV) GENERATE(SMOD) GENERATE(SHL) GENERATE(SHR) GENERATE(AND) GENERATE(OR) GENERATE(XOR) GENERATE(NOT) GENERATE(EQ) GENERATE(LT)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define pages_huge JEMALLOC_N(pages_huge)
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define RUNECODE_ARROW_RIGHT 0xcc
#define R_REGEX_BADBR 10
#define tsd_arenas_tdata_bypass_get JEMALLOC_N(tsd_arenas_tdata_bypass_get)
#define IPPROTO_NSP 31
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ls_tail(x) x->tail
#define __GNUC_MINOR__ 2
#define O_POPUP 0x80000000
#define R_BIN_REQ_ENTRIES 0x000001
#define __FLT32X_DIG__ 15
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define malloc_vcprintf JEMALLOC_N(malloc_vcprintf)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define FILE_BESHORT 7
#define __WORDSIZE 64
#define prof_alloc_prep JEMALLOC_N(prof_alloc_prep)
#define phn_merge(a_type,a_field,a_phn0,a_phn1,a_cmp,r_phn) do { if (a_phn0 == NULL) r_phn = a_phn1; else if (a_phn1 == NULL) r_phn = a_phn0; else if (a_cmp(a_phn0, a_phn1) < 0) { phn_merge_ordered(a_type, a_field, a_phn0, a_phn1, a_cmp); r_phn = a_phn0; } else { phn_merge_ordered(a_type, a_field, a_phn1, a_phn0, a_cmp); r_phn = a_phn1; } } while (0)
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define r_warn_if_fail(expr) do { if (!(expr)) { r_assert_log (R_LOGLVL_WARN, "WARNING (%s:%d):%s%s runtime check failed: (%s)\n", __FILE__, __LINE__, R_FUNCTION, R_FUNCTION[0] ? ":" : "", #expr); } } while (0)
#define R_HASH_SIZE_CRC8_SMBUS 1
#define SDB_OPTION_ALL 0xff
#define _PC_REC_MIN_XFER_SIZE 22
#define R_CORE_PRJ_DBG_BREAK 0x0800
#define CIGNORE 0x00000001
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define MAP_HASSEMAPHORE 0x0200
#define IXON 0x00000200
#define PRIXLEAST8 PRIX8
#define ENAMETOOLONG 63
#define __CONSTANT_CFSTRINGS__ 1
#define DW_TAG_unspecified_type 0x3b
#define R_REF_FUNCTIONS(s,n) static inline void n ##_ref(s *x) { x->R_REF_NAME++; } static inline void n ##_unref(s *x) { r_unref (x, n ##_free); }
#define Color_RESET_NOBG "\x1b[27;22;24;25;28;39m"
#define arena_malloc_large JEMALLOC_N(arena_malloc_large)
#define LG_QUANTUM 4
#define DW_LNS_fixed_advance_pc 0x09
#define CLD_STOPPED 5
#define __SCN_MAX_LENGTH_MODIFIER__ "j"
#define R_HASH_SIZE_SHA512 64
#define CRTSCTS (CCTS_OFLOW | CRTS_IFLOW)
#define __DBL_HAS_QUIET_NAN__ 1
#define DW_OP_lit31 0x4f
#define R_HASH_FLETCHER16 (1ULL << R_HASH_IDX_FLETCHER16)
#define R_CORE_FOREIGN_ADDR -1
#define LG_SIZEOF_BITMAP LG_SIZEOF_LONG
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define DW_END_hi_user 0xff
#define Color_BCYAN "\x1b[96m"
#define EXTPROC 0x00000800
#define HAS_CLOCK_NANOSLEEP 0
#define DWARF_INIT_LEN_64 0xffffffff
#define ELAST 106
#define AF_VSOCK 40
#define prng_range_u32 JEMALLOC_N(prng_range_u32)
#define atomic_cas_p JEMALLOC_N(atomic_cas_p)
#define __code_model_small__ 1
#define JEMALLOC_DSS 
#define AF_COIP 20
#define VREPRINT 6
#define AT_SYMLINK_NOFOLLOW 0x0020
#define R_HASH_SIZE_CRC64 8
#define SIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { if (a > 0) { if (b > 0) { return a > type_max / b; } return b < type_min / a; } if (b > 0) { return a < type_min / b; } return a && b < type_max / a; }
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define tsd_witness_fork_set JEMALLOC_N(tsd_witness_fork_set)
#define DW_AT_byte_stride 0x51
#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")
#define lg_floor JEMALLOC_N(lg_floor)
#define ASN1_LENSHORT 0x7F
#define TIOCSIG _IO('t', 95)
#define tsd_tcache_get JEMALLOC_N(tsd_tcache_get)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define ESOCKTNOSUPPORT 44
#define Color_BBLACK Color_GRAY
#define AF_LOCAL AF_UNIX
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define tsd_initialized JEMALLOC_N(tsd_initialized)
#define __SIZEOF_FLOAT__ 4
#define F_ALLOCATECONTIG 0x00000002
#define WITNESS_RANK_ARENA_HUGE WITNESS_RANK_LEAF
#define _SC_XOPEN_ENH_I18N 109
#define TCP_KEEPINTVL 0x101
#define USER_ADDR_NULL ((user_addr_t) 0)
#define tcache_alloc_easy JEMALLOC_N(tcache_alloc_easy)
#define bitmap_get JEMALLOC_N(bitmap_get)
#define _POSIX_TRACE_NAME_MAX 8
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define atomic_cas_z JEMALLOC_N(atomic_cas_z)
#define DW_AT_abstract_origin 0x31
#define __API_UNAVAILABLE_END 
#define PARODD 0x00002000
#define DW_OP_reg7 0x57
#define R_IPI 
#define IPV6_V6ONLY 27
#define R_LOG_FATAL(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_FATAL, NULL, fmtstr, ##__VA_ARGS__);
#define OPOST 0x00000001
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define run_quantize_ceil JEMALLOC_N(run_quantize_ceil)
#define R_MODE_SIMPLEST 0x020
#define NET_RT_MAXID 11
#define LOCAL_PEERPID 0x002
#define R_SYS_BITS_27 16
#define IPPROTO_GGP 3
#define BRKINT 0x00000002
#define SCNxPTR "lx"
#define DW_OP_over 0x14
#define _SECURE__STRINGS_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define FP_RND_DOWN 1
#define R2_EGG_H 
#define NBPG 4096
#define JEMALLOC_VERSION_MINOR 5
#define R_NEW0(x) (x*)calloc(1,sizeof(x))
#define __FLT32_DECIMAL_DIG__ 9
#define DW_AT_high_pc 0x12
#define R_REG_COND_LE 12
#define R_REG_COND_LT 11
#define malloc_vsnprintf JEMALLOC_N(malloc_vsnprintf)
#define R_ASM_ARCH_MIPS R_SYS_ARCH_MIPS
#define R_EVENT_H 
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define a0malloc JEMALLOC_N(a0malloc)
#define BUFSIZ 1024
#define DW_ATE_hi_user 0xff
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define arena_aalloc JEMALLOC_N(arena_aalloc)
#define __MATH__ 
#define TAG_VIDEOTEXSTRING 0x15
#define ctl_byname JEMALLOC_N(ctl_byname)
#define KEV_INET6_DEFROUTER 6
#define _WCHAR_T_DECLARED 
#define rtree_child_tryread JEMALLOC_N(rtree_child_tryread)
#define ckh_remove JEMALLOC_N(ckh_remove)
#define MAP_SHARED 0x0001
#define DW_TAG_union_type 0x17
#define R_REGEX_ENOSYS (-1)
#define R_REG_COND_NE 1
#define M_LN10 2.30258509299404568401799145468436421
#define PRIXFAST8 PRIX8
#define DW_ATE_imaginary_float 0x09
#define JEMALLOC_INTERNAL_DEFS_H_ 
#define R_ASM_ARCH_ARM R_SYS_ARCH_ARM
#define R_CRYPTO_XOR 1ULL<<12
#define CEOF CTRL('d')
#define INADDR_NONE 0xffffffff
#define _SC_2_PBS 59
#define TIOCGPGRP _IOR('t', 119, int)
#define R_SIGNAL_H 
#define F_GETPATH_NOFIRMLINK 102
#define JEMALLOC_HAVE_ATTR_FORMAT_PRINTF 
#define R_BIN_METH_INTERNAL 0x0000000000000020L
#define IP_OLD_FW_ZERO 53
#define IP_PORTRANGE 19
#define __MACH__ 1
#define __amd64__ 1
#define SCM_CREDS 0x03
#define R_HASH_CRC64 (1ULL << R_HASH_IDX_CRC64)
#define R_PTR_ALIGN_NEXT(v,t) ((char *)(((size_t)(v) + (t - 1)) & ~(t - 1)))
#define opt_redzone JEMALLOC_N(opt_redzone)
#define F_GETNOSIGPIPE 74
#define __DARWIN_LITTLE_ENDIAN 1234
#define FILE_BYTE 1
#define SCNoFAST16 SCNo16
#define CBLOCK 64
#define R2_TIME_H 
#define R_PJ_H 1
#define DW_OP_breg12 0x7c
#define R_USEC_PER_MSEC 1000ULL
#define F_GETSIGSINFO 105
#define FILE_SHORT 2
#define DW_OP_breg13 0x7d
#define NBPW sizeof(int)
#define _UINT16_T 
#define R_CORE_BIN_ACC_CLASSES 0x400
#define __LPBIG_OFFBIG (1)
#define ICANON 0x00000100
#define _I386__PARAM_H_ 
#define PRIXMAX __PRI_MAX_LENGTH_MODIFIER__ "X"
#define DW_AT_elemental 0x66
#define AF_NETBIOS 33
#define EPROTONOSUPPORT 43
#define UINT_MAX (INT_MAX * 2U + 1U)
#define RTREE_HEIGHT_MAX ((1U << (LG_SIZEOF_PTR+3)) / RTREE_BITS_PER_LEVEL)
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define _U_INT 
#define FMTx32 PRIx32
#define TCP_MAXHLEN (0xf<<2)
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define IPV6_MAX_MEMBERSHIPS 4095
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define POLLIN 0x0001
#define SCNoFAST32 SCNo32
#define IPPROTO_MICP 95
#define _IOLBF 1
#define R_CODEC_ALL 0xFFFF
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define DW_OP_breg19 0x83
#define DW_TAG_catch_block 0x25
#define Ht_(name) ht_pu_ ##name
#define O_SHLOCK 0x00000010
#define R_PRINT_STRING_URLENCODE 4
#define SCNuMAX __SCN_MAX_LENGTH_MODIFIER__ "u"
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define B1100 12
#define B1101 13
#define RUNE_CORNER_TR "┐"
#define TIOCPKT_FLUSHWRITE 0x02
#define DW_TAG_variable 0x34
#define BRAILE_TWO $00+$01+$11+$20+$30+$31
#define IPPROTO_IPCV 71
#define __DARWIN_WCTYPE_TOP_inline __header_inline
#define IN_LOOPBACKNET 127
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define r_flist_get(it) *(it++)
#define _PTHREAD_MUTEXATTR_T 
#define R_HASH_SIZE_CRC32_BZIP2 4
#define ST32_SUB_OVFCHK(a,b) ST32_ADD_OVFCHK(a,-(b))
#define B1111 15
#define tsd_quarantine_set JEMALLOC_N(tsd_quarantine_set)
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define R_CONS_GET_CURSOR_POSITION "\x1b[6n"
#define TCPOLEN_SACK 8
#define ___int_size_t_h 
#define _RSIZE_T 
#define MALLOC_MUTEX_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, WITNESS_INITIALIZER(WITNESS_RANK_OMIT)}
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX_REALTIME_SIGNALS (-1)
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define FILE_QLDATE 30
#define PDROP 0x400
#define CCEQ(val,c) ((c) == (val) ? (val) != _POSIX_VDISABLE : 0)
#define IPV6_RTHDR_LOOSE 0
#define __LASTBRANCH_MAX 32
#define extent_tree_szsnad_last JEMALLOC_N(extent_tree_szsnad_last)
#define SCNoFAST64 SCNo64
#define DW_INL_not_inlined 0x00
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define PTHREAD_MUTEX_ERRORCHECK 1
#define SO_UPCALLCLOSEWAIT 0x1027
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define r_io_submap_to(sm) (r_io_map_to (sm))
#define je_free free
#define CN_BOOL 0x000001
#define R_POOL_H 
#define SDB_OPTION_JOURNAL (1 << 3)
#define CR2 0x00002000
#define __APPLE_API_EVOLVING 
#define __SSE__ 1
#define VEOL2 2
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define _CTYPE_D 0x00000400L
#define _CTYPE_G 0x00000800L
#define tsdn_tsd JEMALLOC_N(tsdn_tsd)
#define _CTYPE_I 0x00080000L
#define _CTYPE_L 0x00001000L
#define FNDELAY O_NONBLOCK
#define IPPROTO_GRE 47
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define _CTYPE_S 0x00004000L
#define _CTYPE_T 0x00100000L
#define _CTYPE_U 0x00008000L
#define _CTYPE_X 0x00010000L
#define F_TRANSCODEKEY 75
#define __LDBL_MIN_EXP__ (-16381)
#define arena_dalloc_junk_small JEMALLOC_N(arena_dalloc_junk_small)
#define LG_SIZEOF_INT 2
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define IPPROTO_VMTP 81
#define R_EGG_OS_IOS 0x0ad58830
#define IS_OCTAL(x) ((x) >= '0' && (x) <= '7')
#define GHT_MAX UT64_MAX
#define atomic_read_p(p) atomic_add_p(p, NULL)
#define IPPROTO_TPXX 39
#define R_ASM_ARCH_ARC R_SYS_ARCH_ARC
#define witness_depth_error JEMALLOC_N(witness_depth_error)
#define DW_AT_decimal_sign 0x5e
#define ARROW_RIGHT 8
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define _POSIX_MAX_CANON 255
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define DW_AT_low_pc 0x11
#define Colors_PLAIN { Color_BLACK, Color_RED, Color_WHITE, Color_GREEN, Color_MAGENTA, Color_YELLOW, Color_CYAN, Color_BLUE, Color_GRAY}
#define JEMALLOC_VERSION_MAJOR 4
#define pseudo_AF_XTP 19
#define SCNu32 "u"
#define _APPEND_OK (1<<13)
#define stdout __stdoutp
#define size2index_compute JEMALLOC_N(size2index_compute)
#define INDIROFFADD 0x04
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define IP_OPTIONS 1
#define NL_SETMAX 255
#define __WINT_WIDTH__ 32
#define DW_CFA_remember_state 0x0a
#define __SMBF 0x0080
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define LINE_UP 3
#define IUTF8 0x00004000
#define malloc_cprintf JEMALLOC_N(malloc_cprintf)
#define r_cons_print(x) r_cons_strcat (x)
#define R_RBTREE_MAX_HEIGHT 62
#define R_CORE_BIN_ACC_IMPORTS 0x020
#define INDIR 0x01
#define SIGUSR2 31
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define R2_PDB_H 
#define __FLT32X_MAX_10_EXP__ 308
#define R_REG_COND_OF 4
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define FILE_COMPILE 2
#define RLIMIT_DATA 2
#define SO_WANTOOBFLAG 0x8000
#define DW_CFA_restore 0xc0
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define ls_push(x,y) ls_append(x,y)
#define CDB_HPLIST 1000
#define R_UTF8_DOOR "🚪"
#define O_RDONLY 0x0000
#define PPAUSE 40
#define TCP_FASTOPEN 0x105
#define witness_fork_cleanup JEMALLOC_N(witness_fork_cleanup)
#define JEMALLOC_MAPS_COALESCE 
#define pind2sz_tab JEMALLOC_N(pind2sz_tab)
#define r_pvector_lower_bound(vec,x,i,cmp) do { size_t h = (vec)->v.len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp ((x), ((void **)(vec)->v.a)[m])) > 0) { i = m + 1; } else { h = m; } } } while (0)
#define _PTHREAD_RWLOCK_T 
#define SCNu64 __SCN_64_LENGTH_MODIFIER__ "u"
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define EMSGSIZE 40
#define DW_OP_lit22 0x46
#define _SC_ATEXIT_MAX 107
#define IPPROTO_DSTOPTS 60
#define _tolower(c) __tolower(c)
#define R_CORE_BIN_ACC_RAW_STRINGS 0x40000
#define extent_node_committed_set JEMALLOC_N(extent_node_committed_set)
#define B28800 28800
#define R_CORE_ANAL_JSON_FORMAT_DISASM 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define MCAST_INCLUDE 1
#define _PC_ALLOC_SIZE_MIN 16
#define DW_CC_program 0x02
#define _LP64 1
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define rbtn_right_get(a_type,a_field,a_node) ((a_type *) (((intptr_t) (a_node)->a_field.rbn_right_red) & ((ssize_t)-2)))
#define ___WCTYPE_H_ 
#define extent_node_zeroed_get JEMALLOC_N(extent_node_zeroed_get)
#define DW_AT_ordering 0x09
#define SIGEMT 7
#define KEV_INET_SIFNETMASK 6
#define DW_CFA_val_expression 0x16
#define __UINT8_C(c) c
#define JEMALLOC_HAVE_PTHREAD_MUTEX_ADAPTIVE_NP 
#define tcaches_create JEMALLOC_N(tcaches_create)
#define EFBIG 27
#define X_TLOSS 1.41484755040568800000e+16
#define __FLT64_MAX_EXP__ 1024
#define INT_FAST64_MIN INT64_MIN
#define powerof2(x) ((((x)-1)&(x))==0)
#define TIOCPKT_DATA 0x00
#define IPPROTO_RSVP 46
#define decay_ticker_get JEMALLOC_N(decay_ticker_get)
#define _MBSTATE_T 
#define r_io_bind_init(x) memset(&x,0,sizeof(x))
#define R_SYS_HOME "HOME"
#define R_ANAL_ESIL_GOTO_LIMIT 4096
#define IPPROTO_RVD 66
#define TIOCEXT _IOW('t', 96, int)
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define rbtn_last(a_type,a_field,a_rbt,a_root,r_node) do { (r_node) = (a_root); if ((r_node) != NULL) { for (; rbtn_right_get(a_type, a_field, (r_node)) != NULL; (r_node) = rbtn_right_get(a_type, a_field, (r_node))) { } } } while (0)
#define DW_CFA_advance_loc 0x40
#define ffs_u64 JEMALLOC_N(ffs_u64)
#define __API_UNAVAILABLE(...) 
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define arena_dalloc_large JEMALLOC_N(arena_dalloc_large)
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define PF_SNA AF_SNA
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define Color_INSERT Color_BGREEN
#define __UINT64_TYPE__ long long unsigned int
#define R_PERM_PRIV 16
#define EAI_ADDRFAMILY 1
#define __has_feature(x) 0
#define _PTHREAD_H 
#define R_PRINT_FLAGS_DIFFOUT 0x00000100
#define _PTHREAD_T 
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define NO_DATA 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")
#define ticker_read JEMALLOC_N(ticker_read)
#define arena_mapbits_internal_set JEMALLOC_N(arena_mapbits_internal_set)
#define KEV_DL_ADDMULTI 7
#define _SC_REGEXP 77
#define AF_IEEE80211 37
#define BUFERROR_BUF 64
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION
#define arena_dss_prec_get JEMALLOC_N(arena_dss_prec_get)
#define MALLOC_TSD_CLEANUPS_MAX 2
#define EAGAIN 35
#define _XOPEN_NAME_MAX 255
#define _SC_IOV_MAX 56
#define _SC_PASS_MAX 131
#define RColor_BLUE RCOLOR(ALPHA_FG, 0, 55, 218, 0x00, 0x00, 0x00, 4)
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define W32DBG_WRAP 
#define SCNiFAST8 SCNi8
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define WITNESS_RANK_OMIT 0U
#define AF_CCITT 10
#define OXTABS 0x00000004
#define ONLRET 0x00000040
#define NET_SERVICE_TYPE_SIG 2
#define _POSIX_MAPPED_FILES 200112L
#define MB_CUR_MAX __mb_cur_max
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 0x00000400
#define DW_AT_const_value 0x1c
#define MAP_TRANSLATED_ALLOW_EXECUTE 0x20000
#define sdb_json_format_free(x) free ((x)->buf)
#define DW_END_lo_user 0x40
#define malloc_tsd_boot0 JEMALLOC_N(malloc_tsd_boot0)
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define FMTuPTR PRIuPTR
#define R_INTERVAL_H 
#define DW_OP_breg20 0x84
#define R_NEWCOPY(x,y) (x*)r_new_copy(sizeof(x), y)
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define DW_TAG_imported_declaration 0x08
#define __TVOS_11_3 110300
#define feof_unlocked(p) __sfeof(p)
#define R_CORE_BIN_ACC_SECTIONS 0x080
#define DW_TAG_structure_type 0x13
#define tsd_prof_tdatap_get JEMALLOC_N(tsd_prof_tdatap_get)
#define RColor_BBGMAGENTA RCOLOR(ALPHA_BG, 180, 0, 158, 0x00, 0x00, 0x00, 13)
#define PRIiMAX __PRI_MAX_LENGTH_MODIFIER__ "i"
#define chunk_purge_wrapper JEMALLOC_N(chunk_purge_wrapper)
#define R_BTW(x,y,z) (((x)>=(y))&&((y)<=(z)))?y:x
#define __TVOS_11_4 110400
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define EF_IS_SYNC_ROOT 0x00000004
#define bootstrap_free JEMALLOC_N(bootstrap_free)
#define AT_SYMLINK_FOLLOW 0x0040
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define INT8_MAX 127
#define O_WRONLY 0x0001
#define R_SEARCH_DISTANCE_MAX 10
#define ENOTCONN 57
#define WITNESS_RANK_ARENAS 3U
#define KEV_INET_SIFBRDADDR 5
#define STRING_COMPACT_OPTIONAL_BLANK BIT(1)
#define SCNuLEAST16 SCNu16
#define IP_FW_FLUSH 42
#define atomic_read_z(p) atomic_add_z(p, 0)
#define IS_SEPARATOR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r' || (x) == ' '|| (x) == ',' || (x) == ';' || (x) == ':' || (x) == '[' || (x) == ']' || (x) == '(' || (x) == ')' || (x) == '{' || (x) == '}')
#define opt_xmalloc JEMALLOC_N(opt_xmalloc)
#define DW_AT_str_offsets_base 0x72
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define rbtn_left_set(a_type,a_field,a_node,a_left) do { (a_node)->a_field.rbn_left = a_left; } while (0)
#define S_IFLNK 0120000
#define DW_AT_GNU_call_site_target 0x2113
#define R_REGEX_BASIC 0000
#define ql_foreach(a_var,a_head,a_field) qr_foreach((a_var), ql_first(a_head), a_field)
#define ULLFMT "ll"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SDB_MAX_PATH 256
#define R_HASH_SIZE_PARITY 1
#define POLLERR 0x0008
#define EPFNOSUPPORT 46
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define DW_ATE_UTF 0x10
#define __SMOD 0x2000
#define R_BIN_REQ_UNK 0x000000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define CSUSP CTRL('z')
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define _XOPEN_STREAMS (-1)
#define R_EGG_OS_OSX 0x0ad593a1
#define arena_ptr_small_binind_get JEMALLOC_N(arena_ptr_small_binind_get)
#define _POSIX_MQ_PRIO_MAX 32
#define bitmap_size JEMALLOC_N(bitmap_size)
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 53
#define _SIZE_T 
#define NET_RT_FLAGS_PRIV 10
#define DW_TAG_friend 0x2a
#define _WCTYPE_T 
#define R_MODE_SET 0x002
#define R_BIN_REQ_LISTARCHS 0x004000
#define _SC_2_PBS_TRACK 64
#define DW_OP_bit_piece 0x9d
#define DW_AT_GNU_call_site_value 0x2111
#define _CRMASK (~(_CACHED_RUNES - 1))
#define SOCK_STREAM 1
#define r_flist_next(it) *it!=0
#define ctl_postfork_parent JEMALLOC_N(ctl_postfork_parent)
#define OPEN_MAX 10240
#define R_CRYPTO_CPS2 1ULL<<10
#define psz2u JEMALLOC_N(psz2u)
#define __APPLE_API_STABLE 
#define IPPROTO_ICMPV6 58
#define R_PERM_R 4
#define DW_TAG_with_stmt 0x22
#define R_PERM_W 2
#define R_PERM_X 1
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define R_HASH_SIZE_LUHN 1
#define F_ADDSIGS 59
#define DW_AT_comp_dir 0x1b
#define R_CORE_BLOCKSIZE 0x100
#define NCARGS ARG_MAX
#define AF_NATM 31
#define SZT_ADD_OVFCHK(x,y) ((SIZE_MAX - (x)) < (y))
#define _SC_THREAD_PROCESS_SHARED 90
#define MAXstring 32
#define OFF_MIN LLONG_MIN
#define _FILE_OFFSET_BITS 64
#define tcache_bin_flush_large JEMALLOC_N(tcache_bin_flush_large)
#define IP_MAX_SOCK_MUTE_FILTER 128
#define SDB_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define ALIGNMENT_ADDR2OFFSET(a,alignment) ((size_t)((uintptr_t)(a) & (alignment - 1)))
#define B50 50
#define __INTMAX_WIDTH__ 64
#define __ATOMIC_ACQ_REL 4
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define _SA_FAMILY_T 
#define __ORDER_BIG_ENDIAN__ 4321
#define ialloc JEMALLOC_N(ialloc)
#define MINCORE_PAGED_OUT 0x20
#define r_oflist_append(x,y) r_oflist_deserialize (x), r_list_append (x, y)
#define KVLSZ 4
#define SDB_VERSION "1.8.3"
#define je_posix_memalign posix_memalign
#define nstime_nsec JEMALLOC_N(nstime_nsec)
#define tsd_tsdn JEMALLOC_N(tsd_tsdn)
#define RLIMIT_MEMLOCK 6
#define EF_IS_SPARSE 0x00000010
#define PF_IMPLINK AF_IMPLINK
#define O_EXCL 0x00000800
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define IPPROTO_BHA 49
#define PTHREAD_SCOPE_SYSTEM 1
#define PRIdFAST32 PRId32
#define _POSIX2_VERSION 200112L
#define EISCONN 56
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define B75 75
#define UNSIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { return (a > 0 && b > 0 && a > type_max / b); }
#define R_CORE_PRJ_SECTIONS 0x0008
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define SIGEV_THREAD 3
#define DECAY_TIME_DEFAULT 10
#define DW_CFA_def_cfa_offset_sf 0x13
#define R_HASH_FLETCHER32 (1ULL << R_HASH_IDX_FLETCHER32)
#define r_list_foreach(list,it,pos) if (list) for (it = list->head; it && (pos = it->data, 1); it = it->n)
#define MALLOC_PRINTF_BUFSIZE 4096
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define extent_node_dirty_linkage_init JEMALLOC_N(extent_node_dirty_linkage_init)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define atomic_add_uint64 JEMALLOC_N(atomic_add_uint64)
#define AF_UNIX 1
#define _SC_TRACE_INHERIT 99
#define CHUNK_MAP_DECOMMITTED ((size_t)0x04U)
#define extent_node_sn_get JEMALLOC_N(extent_node_sn_get)
#define DW_FORM_loclistx 0x22
#define BRAILE_FIV $00+$01+$10+$21+$30
#define opt_utrace JEMALLOC_N(opt_utrace)
#define IP_RECVRETOPTS 6
#define SF_SYNTHETIC 0xc0000000
#define _STDLIB_H_ 
#define IPPROTO_SVMTP 82
#define PAGE ((size_t)(1U << LG_PAGE))
#define F_FINDSIGS 78
#define EUSERS 68
#define malloc_mutex_init JEMALLOC_N(malloc_mutex_init)
#define NLBINS 29
#define MAXINTERP 64
#define _VA_LIST_T_H 
#define AF_PPP 34
#define INT_FAST16_MAX INT16_MAX
#define Color_BBLUE "\x1b[94m"
#define __PIC__ 2
#define RUNECODESTR_CORNER_BL "\xcb"
#define RUNECODESTR_CORNER_BR "\xca"
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define PRIdFAST64 PRId64
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define FP_RND_NEAR 0
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define R_SEARCH_KEYWORD_TYPE_STRING 's'
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define POLL_ERR 4
#define arena_mapbitsp_get_const JEMALLOC_N(arena_mapbitsp_get_const)
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define TIOCSETD _IOW('t', 27, int)
#define DW_MACINFO_start_file 0x03
#define DW_LNE_HP_set_routine_name 0x15
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define DW_LNE_HP_push_context 0x12
#define PRINTF_YA(fmt,...) PRINTF_A ("%s", fmt, pal->offset, __VA_ARGS__)
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define HT_NULL_VALUE 0
#define tcache_arena_reassociate JEMALLOC_N(tcache_arena_reassociate)
#define r_flist_unref(x) x
#define UF_TRACKED 0x00000040
#define FP_INFINITE 2
#define R_HASH_FLETCHER64 (1ULL << R_HASH_IDX_FLETCHER64)
#define in_valgrind JEMALLOC_N(in_valgrind)
#define EQFULL 106
#define MAX(a,b) (((a)>(b))?(a):(b))
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DW_AT_binary_scale 0x5b
#define __alloca(size) __builtin_alloca(size)
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define R_GETOPT_H 1
#define INT_FAST64_MAX INT64_MAX
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define R_ASM_ARCH_X86 R_SYS_ARCH_X86
#define S_IWGRP 0000020
#define LG_SIZEOF_PTR 3
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define MINCORE_ANONYMOUS 0x80
#define isnormal(x) ( sizeof(x) == sizeof(float) ? __inline_isnormalf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnormald((double)(x)) : __inline_isnormall((long double)(x)))
#define RUNECODESTR_LINE_CROSS "\xc9"
#define SA_NOCLDWAIT 0x0020
#define R_HASH_XORPAIR (1ULL << R_HASH_IDX_XORPAIR)
#define __va_list__ 
#define bitmap_info_init JEMALLOC_N(bitmap_info_init)
#define huge_prof_tctx_get JEMALLOC_N(huge_prof_tctx_get)
#define arena_prof_accum_impl JEMALLOC_N(arena_prof_accum_impl)
#define ASN1_LENLONG 0x80
#define r_str_cat(x,y) memmove ((x) + strlen (x), (y), strlen (y) + 1);
#define SO_SNDLOWAT 0x1003
#define DW_AT_rnglists_base 0x74
#define R2_PREFIX "/usr/local"
#define _POSIX2_CHAR_TERM 200112L
#define __SSE2__ 1
#define __PRI_8_LENGTH_MODIFIER__ "hh"
#define SO_ERROR 0x1007
#define R_AGRAPH_MODE_TINY 3
#define TIOCCDTR _IO('t', 120)
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define _SC_2_FORT_DEV 21
#define PTHREAD_MUTEX_RECURSIVE 2
#define DW_FORM_ref8 0x14
#define prof_alloc_rollback JEMALLOC_N(prof_alloc_rollback)
#define __API_AVAILABLE_BEGIN(...) 
#define AF_PUP 4
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define MAP_FIXED 0x0010
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
#define DW_OP_breg30 0x8e
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define LG_CACHELINE 6
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define WITNESS_RANK_CORE 9U
#define R_ANNOTATEDCODE_H 
#define DW_AT_explicit 0x63
#define JEMALLOC_TCACHE 
#define IPPROTO_NHRP 54
#define R_BIN_METH_VARARGS 0x0000000000010000L
#define MCAST_BLOCK_SOURCE 84
#define R_TH_SEM_T sem_t *
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define IN_CLASSA_NET 0xff000000
#define SEM_FAILED ((sem_t *)-1)
#define DW_LNS_set_column 0x05
#define _T_SIZE 
#define DW_OP_drop 0x13
#define TCPOPT_CC 11
#define UINT8_C(v) (v)
#define IP_MULTICAST_IF 9
#define s2u_lookup JEMALLOC_N(s2u_lookup)
#define FILE_OPINDIRECT 0x80
#define POLLEXTEND 0x0200
#define __INT16_C(c) c
#define R_MAGIC_RAW 0x000100
#define R_SYS_ENDIAN_NONE 0
#define opt_prof_final JEMALLOC_N(opt_prof_final)
#define FILE_OPOR 1
#define _V6_LP64_OFF64 __LP64_OFF64
#define RColor_BGGRAY RColor_BBGBLACK
#define extent_tree_szsnad_reverse_iter JEMALLOC_N(extent_tree_szsnad_reverse_iter)
#define DTTOIF(dirtype) ((dirtype) << 12)
#define ph_proto(a_attr,a_prefix,a_ph_type,a_type) a_attr void a_prefix ##new(a_ph_type *ph); a_attr bool a_prefix ##empty(a_ph_type *ph); a_attr a_type *a_prefix ##first(a_ph_type *ph); a_attr void a_prefix ##insert(a_ph_type *ph, a_type *phn); a_attr a_type *a_prefix ##remove_first(a_ph_type *ph); a_attr void a_prefix ##remove(a_ph_type *ph, a_type *phn);
#define _POSIX2_C_BIND 200112L
#define FAPPEND O_APPEND
#define POLL_IN 1
#define malloc_tsd_boot1 JEMALLOC_N(malloc_tsd_boot1)
#define R_LOG_H 
#define r_utf8_to_utf16(cstring) r_utf8_to_utf16_l ((char *)cstring, -1)
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define PF_UTUN AF_UTUN
#define MALLOC_TSD O(tcache, tcache_t *) O(thread_allocated, uint64_t) O(thread_deallocated, uint64_t) O(prof_tdata, prof_tdata_t *) O(iarena, arena_t *) O(arena, arena_t *) O(arenas_tdata, arena_tdata_t *) O(narenas_tdata, unsigned) O(arenas_tdata_bypass, bool) O(tcache_enabled, tcache_enabled_t) O(quarantine, quarantine_t *) O(witnesses, witness_list_t) O(witness_fork, bool)
#define DW_AT_alignment 0x88
#define _R_UTIL_ALLOC_H_ 1
#define DW_LANG_Fortran77 0x0007
#define DW_TAG_namelist 0x2b
#define DW_AT_language 0x13
#define TIOCSTAT _IO('t', 101)
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _SC_TRACE_SYS_MAX 129
#define CHUNK_MAP_BININD_MASK (BININD_INVALID << CHUNK_MAP_BININD_SHIFT)
#define R_REG_COND_CARRY 2
#define MAP_UNIX03 0x40000
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define ONOEOT 0x00000008
#define R_SPACES_H 
#define phn_lchild_get(a_type,a_field,a_phn) (a_phn->a_field.phn_lchild)
#define TIOCGSIZE TIOCGWINSZ
#define BITWORD_BITS_SHIFT 6
#define LARGE_MINCLASS (ZU(1) << LG_LARGE_MINCLASS)
#define SIZE_T_MAX ULONG_MAX
#define JEMALLOC_VALGRIND_MAKE_MEM_NOACCESS(ptr,usize) do {} while (0)
#define extent_tree_szsnad_nsearch JEMALLOC_N(extent_tree_szsnad_nsearch)
#define PF_INET AF_INET
#define _CTERMID_H_ 
#define DW_FORM_data1 0x0b
#define DW_FORM_data2 0x05
#define DW_FORM_data4 0x06
#define DW_FORM_data8 0x07
#define ENOPOLICY 103
#define ECONNREFUSED 61
#define _RATTR_OK (1<<15)
#define ASN1_FORM 0x20
#define R_FLAGS_FS_REGISTERS "registers"
#define _POSIX2_C_DEV 200112L
#define RBinSectionOffset r_offsetof(RBinSection, offset)
#define R_ANAL_OP_HINT_MASK 0xf0000000
#define DW_AT_stmt_list 0x10
#define R_REGEX_ICASE 0002
#define R_ANAL_ARCHINFO_ALIGN 4
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define __DBL_MAX_10_EXP__ 308
#define NI_NUMERICHOST 0x00000002
#define RUNECODE_CORNER_BL 0xcb
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define RUNECODE_CORNER_BR 0xca
#define BRAILE_FUR $00+$10+$11+$21+$31
#define extent_tree_ad_iter_start JEMALLOC_N(extent_tree_ad_iter_start)
#define PTTYBLOCK 0x200
#define R_LIB_SYMNAME "radare_plugin"
#define R_BIN_TYPE_STATIC_STR "STATIC"
#define DW_TAG_typedef 0x16
#define RTLD_FIRST 0x100
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _POSIX_TRACE_LOG (-1)
#define R_ASM_GET_OFFSET(x,y,z) (x && x->binb.bin && x->binb.get_offset)? x->binb.get_offset (x->binb.bin, y, z): -1
#define stats_cactive_sub JEMALLOC_N(stats_cactive_sub)
#define IPPROTO_SATEXPAK 64
#define TTYDEF_SPEED (B9600)
#define JEMALLOC_PRIVATE_NAMESPACE je_
#define WITNESS_RANK_MIN 1U
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define Color_BGRED "\x1b[41m"
#define arena_mapbits_small_runind_get JEMALLOC_N(arena_mapbits_small_runind_get)
#define R_MODE_EQUAL 0x080
#define R_REG_COND_OVERFLOW 4
#define SDB_MIN_KEY 1
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define RCOLOR(a,r,g,b,bgr,bgg,bgb,id16) (RColor) {0, a, r, g, b, bgr, bgg, bgb, id16}
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SIG_IGN (void (*)(int))1
#define DW_AT_mutable 0x61
#define VSTART 12
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define opt_stats_print JEMALLOC_N(opt_stats_print)
#define a0get JEMALLOC_N(a0get)
#define extent_tree_szsnad_search JEMALLOC_N(extent_tree_szsnad_search)
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define EF_IS_PURGEABLE 0x00000008
#define r_ref_init(x) x->R_REF_NAME = 1
#define TAG_NULL 0x05
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define R_HASH_CRC64_XZ (1ULL << R_HASH_IDX_CRC64_XZ)
#define R_HASH_SIZE_XXHASH 4
#define chunk_npages JEMALLOC_N(chunk_npages)
#define MADV_CAN_REUSE 9
#define UT8_SUB_OVFCHK(a,b) UT8_ADD_OVFCHK(a,-(b))
#define DW_ACCESS_private 0x03
#define DW_CFA_val_offset 0x14
#define BITMAP_GROUPS_1_LEVEL(nbits) BITMAP_GROUPS_L0(nbits)
#define arena_lg_dirty_mult_set JEMALLOC_N(arena_lg_dirty_mult_set)
#define __FLT64_MANT_DIG__ 53
#define FILE_QUAD 24
#define R_ASM_ARCH_XAP R_SYS_ARCH_XAP
#define EPROGMISMATCH 75
#define DW_OP_deref 0x06
#define _USER_SIGNAL_H 
#define tsd_booted JEMALLOC_N(tsd_booted)
#define TCPOPT_CCNEW 12
#define SF_DATALESS 0x40000000
#define R_HASH_SIZE_CRC32 4
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define DW_OP_breg5 0x75
#define R_PRINT_MUSTSET (1 << 4)
#define _SC_2_PBS_CHECKPOINT 61
#define DOMAIN 1
#define TCP_MINMSS 216
#define R_HASH_SIZE_CRC16_HDLC 2
#define HAVE_PTHREAD_NP 1
#define extent_tree_ad_nsearch JEMALLOC_N(extent_tree_ad_nsearch)
#define BIT(A) (1 << (A))
#define F_LOG2PHYS_EXT 65
#define __MATH_H__ 
#define R_REGEX_ECTYPE 4
#define atomic_read_uint32(p) atomic_add_uint32(p, 0)
#define BC_STRING_MAX 1000
#define JEMALLOC_HAS_ALLOCA_H 1
#define WITNESS_RANK_PROF_TDATA 7U
#define prof_boot1 JEMALLOC_N(prof_boot1)
#define IPV6_2292NEXTHOP 21
#define arena_sdalloc JEMALLOC_N(arena_sdalloc)
#define IP_RSVP_VIF_OFF 18
#define DW_OP_dup 0x12
#define MS_INVALIDATE 0x0002
#define DW_ATE_signed_char 0x06
#define UF_IMMUTABLE 0x00000002
#define malloc_mutex_assert_owner JEMALLOC_N(malloc_mutex_assert_owner)
#define CLD_KILLED 2
#define _SSIZE_T 
#define R_PRINT_SEEFLAGS (1 << 2)
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define __FLT128_DIG__ 33
#define ql_before_insert(a_head,a_qlelm,a_elm,a_field) do { qr_before_insert((a_qlelm), (a_elm), a_field); if (ql_first(a_head) == (a_qlelm)) { ql_first(a_head) = (a_elm); } } while (0)
#define R_CORE_BIN_ACC_STRINGS 0x001
#define SHUT_RD 0
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define RUNECODESTR_CORNER_TR "\xd0"
#define r_str_cpy(x,y) memmove ((x), (y), strlen (y) + 1);
#define FILE_NAMES_SIZE 39
#define RColor_YELLOW RCOLOR(ALPHA_FG, 193, 156, 0, 0x00, 0x00, 0x00, 3)
#define S_IREAD S_IRUSR
#define buffer_PEEK(s) ( (s)->x + (s)->n )
#define PROF_NCTX_LOCKS 1024
#define IPV6CTL_MCAST_PMTU 44
#define CTRL(x) (x&037)
#define _SC_SPAWN 79
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define CTO(y,z) ((size_t) &((y*)0)->z)
#define DW_AT_GNU_dwo_id 0x2131
#define __PRI_MAX_LENGTH_MODIFIER__ "j"
#define __DARWIN_NON_CANCELABLE 0
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define IOPOL_THROTTLE 3
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define AF_IPX 23
#define R_STRPOOL_INC 1024
#define _CHOWN_OK (1<<21)
#define MONOTONIC_FREEBSD (__FreeBSD__ && __FreeBSD_version >= 1101000)
#define PRIo16 "ho"
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define PRINT_BA(msg) r_cons_printf ("%s" msg Color_RESET, pal->num)
#define arena_bin_info JEMALLOC_N(arena_bin_info)
#define R_AXML_H 
#define SSZT_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > SSIZE_MAX - (x))) || (((x) < 0) && (a) < SSIZE_MIN - (x)))
#define R_HASH_SIZE_ENTROPY 0
#define R2_CONFIGURE_H 
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define UT64_LT0 0x7FFFFFFFFFFFFFFFULL
#define R_HASH_CRC32_JAMCRC (1ULL << R_HASH_IDX_CRC32_JAMCRC)
#define __MAC_10_10 101000
#define DW_OP_bregx 0x92
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define DW_CC_nocall 0x03
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define __MAC_10_12 101200
#define opt_lg_tcache_max JEMALLOC_N(opt_lg_tcache_max)
#define PRIo32 "o"
#define R_MEM_H 
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define psz2ind JEMALLOC_N(psz2ind)
#define DTF_NODUP 0x0002
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define R_HASH_LUHN (1ULL << R_HASH_IDX_LUHN)
#define PATH_MAX 1024
#define AF_ISO 7
#define PRIoMAX __PRI_MAX_LENGTH_MODIFIER__ "o"
#define TIOCSTOP _IO('t', 111)
#define TCP_NOOPT 0x08
#define CHUNK_MAP_BININD_INVALID CHUNK_MAP_BININD_MASK
#define RColor_BMAGENTA RCOLOR(ALPHA_FG, 180, 0, 158, 0x00, 0x00, 0x00, 13)
#define RTLD_LAZY 0x1
#define SHUT_WR 1
#define ckh_pointer_keycomp JEMALLOC_N(ckh_pointer_keycomp)
#define BC_BASE_MAX 99
#define MB_LEN_MAX 6
#define ZI(z) ((ssize_t)z)
#define JEMALLOC_NOTHROW JEMALLOC_ATTR(nothrow)
#define tsd_set JEMALLOC_N(tsd_set)
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define __INT_LEAST64_WIDTH__ 64
#define FILE_PSTRING 13
#define ECHOKE 0x00000001
#define Color_BGMAGENTA "\x1b[45m"
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define PRIoLEAST8 PRIo8
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define R_REG_COND_NEGATIVE 3
#define ipalloc JEMALLOC_N(ipalloc)
#define _GNU_SOURCE 
#define SCNuLEAST32 SCNu32
#define LG_SIZEOF_LONG_LONG 3
#define _POSIX_SAVED_IDS 200112L
#define SCNi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define IPPROTO_BLT 30
#define R2_DIFF_H 
#define __P(protos) protos
#define arena_prof_tctx_set JEMALLOC_N(arena_prof_tctx_set)
#define arena_dalloc JEMALLOC_N(arena_dalloc)
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define DW_TAG_common_inclusion 0x1b
#define R_HASH_CRC64_WE (1ULL << R_HASH_IDX_CRC64_WE)
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define PRIo64 __PRI_64_LENGTH_MODIFIER__ "o"
#define huge_ralloc JEMALLOC_N(huge_ralloc)
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define PRIXFAST16 PRIX16
#define __IPHONE_8_2 80200
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define BS0 0x00000000
#define BS1 0x00008000
#define R2_GITTAP "5.5.4"
#define __ATOMIC_RELEASE 3
#define arena_prof_promoted JEMALLOC_N(arena_prof_promoted)
#define BSD 199506
#define SDB_RS ','
#define nstime_sec JEMALLOC_N(nstime_sec)
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define MAP_JIT 0x0800
#define __DARWIN_CLK_TCK 100
#define RUNECODE_MAX 0xd6
#define FUNC_ATTR_ALLOC_SIZE(x) __attribute__((alloc_size(x)))
#define _T_WCHAR 
#define CHUNK_MAP_ALLOCATED ((size_t)0x01U)
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define FIXINC_WRAP_MATH_H_MATH_EXCEPTION 1
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define IP_UNBLOCK_SOURCE 73
#define ECHONL 0x00000010
#define IPV6_RTHDR_TYPE_0 0
#define LG_CKH_BUCKET_CELLS (LG_CACHELINE - LG_SIZEOF_PTR - 1)
#define je_nallocx nallocx
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define jemalloc_postfork_child JEMALLOC_N(jemalloc_postfork_child)
#define BITMAP_GROUPS_L3(nbits) BITMAP_BITS2GROUPS(BITMAP_BITS2GROUPS(BITMAP_BITS2GROUPS( BITMAP_BITS2GROUPS((nbits)))))
#define _SC_XOPEN_UNIX 115
#define BUS_ADRALN 1
#define TCACHE_NSLOTS_SMALL_MIN 20
#define FILE_BEDOUBLE 37
#define __FLT32X_MAX_EXP__ 1024
#define B9600 9600
#define PUSER 50
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define witness_init JEMALLOC_N(witness_init)
#define bootstrap_calloc JEMALLOC_N(bootstrap_calloc)
#define extent_tree_ad_empty JEMALLOC_N(extent_tree_ad_empty)
#define R_BUF_END 2
#define arena_maxrun JEMALLOC_N(arena_maxrun)
#define M_SQRT1_2 0.707106781186547524400844362104849039
#define NOGROUP 65535
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define JEMALLOC_ARG_CONCAT(...) __VA_ARGS__
#define SAE_ASSOCID_ANY 0
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define opt_dss JEMALLOC_N(opt_dss)
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define RUNECODE_CORNER_TL 0xcf
#define R_ZIGN_HASH R_HASH_SHA256
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define R_ANAL_ADDR_TYPE_ASCII 1 << 10
#define ls_unref(x) x
#define KZU(z) ZU(z ##ULL)
#define __ATOMIC_ACQUIRE 2
#define rb_node(a_type) struct { a_type *rbn_left; a_type *rbn_right_red; }
#define _POSIX2_BC_SCALE_MAX 99
#define RUN_MAXREGS (1U << LG_RUN_MAXREGS)
#define __STDC_WANT_LIB_EXT1__ 1
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define KEV_DL_PROTO_DETACHED 15
#define IP_DEFAULT_MULTICAST_TTL 1
#define DW_MACINFO_define 0x01
#define FILE_OPINVERSE 0x40
#define R_REGEX_NEWLINE 0010
#define PRIXFAST64 PRIX64
#define LG_PAGE 12
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define MAX_MAP_SIZE 1024*1024*512
#define RB_H_ 
#define R_LOG_VERBOSE(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_VERBOSE, NULL, fmtstr, ##__VA_ARGS__);
#define R_EGG_OS_DARWIN 0xd86d1ae2
#define IPV6CTL_TEMPVLTIME 34
#define RTLD_NOW 0x2
#define DW_AT_discr_value 0x16
#define CLSIZELOG2 0
#define UF_COMPRESSED 0x00000020
#define DW_ACCESS_protected 0x02
#define _SC_TIMEOUTS 95
#define pages_decommit JEMALLOC_N(pages_decommit)
#define qr_remove(a_qr,a_field) do { (a_qr)->a_field.qre_prev->a_field.qre_next = (a_qr)->a_field.qre_next; (a_qr)->a_field.qre_next->a_field.qre_prev = (a_qr)->a_field.qre_prev; (a_qr)->a_field.qre_next = (a_qr); (a_qr)->a_field.qre_prev = (a_qr); } while (0)
#define huge_prof_tctx_reset JEMALLOC_N(huge_prof_tctx_reset)
#define KEY_TO_HASH(x) ((ut32)(uintptr_t)(x))
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define SDB_H 
#define ls_iter_next(x) (x?1:0)
#define rtree_subkey JEMALLOC_N(rtree_subkey)
#define tsd_thread_allocated_get JEMALLOC_N(tsd_thread_allocated_get)
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define R_PRINT_FLAGS_BGFILL 0x00100000
#define R_REGEX_NOSUB 0004
#define RUNE_ARROW_LEFT "<"
#define PLOCK 36
#define R_HASH_CRC16_USB (1ULL << R_HASH_IDX_CRC16_USB)
#define __UINT_FAST16_TYPE__ short unsigned int
#define R_HASH_CRC64_ISO (1ULL << R_HASH_IDX_CRC64_ISO)
#define DW_LANG_lo_user 0x8000
#define TCSASOFT 0x10
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define IPPROTO_CPNX 72
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IPCTL_GIF_TTL 16
#define WITNESS_RANK_TCACHES 2U
#define _POSIX_PRIORITIZED_IO (-1)
#define chunk_dss_prec_set JEMALLOC_N(chunk_dss_prec_set)
#define DW_TAG_compile_unit 0x11
#define __DRIVERKIT_19_0 190000
#define extent_node_arena_get JEMALLOC_N(extent_node_arena_get)
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define DW_CFA_expression 0x10
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define R_BIN_TYPE_UNKNOWN_STR "UNK"
#define MSG_HOLD 0x800
#define __INTMAX_C(c) c ## L
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define prof_thread_active_init_get JEMALLOC_N(prof_thread_active_init_get)
#define FILE_OPS "&|^+-*/%"
#define PTHREAD_SCOPE_PROCESS 2
#define prof_sample_threshold_update JEMALLOC_N(prof_sample_threshold_update)
#define TSD_INITIALIZER { tsd_state_uninitialized, NULL, 0, 0, NULL, NULL, NULL, NULL, 0, false, tcache_enabled_default, NULL, ql_head_initializer(witnesses), false }
#define R_HASH_CRC32 (1ULL << R_HASH_IDX_CRC32)
#define PTHREAD_CANCELED ((void *) 1)
#define map_bias JEMALLOC_N(map_bias)
#define RColor_BGGREEN RCOLOR(ALPHA_BG, 19, 161, 14, 0x00, 0x00, 0x00, 2)
#define FILE_BEFLOAT 34
#define TIOCM_CAR 0100
#define RUNECODE_MIN 0xc8
#define DW_AT_string_length_byte_size 0x70
#define O_ACCMODE 0x0003
#define ILL_ILLTRP 2
#define MAX_SACK_BLKS 6
#define SIG_HOLD (void (*)(int))5
#define TIOCPKT_IOCTL 0x40
#define IPV6_LEAVE_GROUP 13
#define ru_last ru_nivcsw
#define stats_print JEMALLOC_N(stats_print)
#define FP_NAN 1
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define FIOGETOWN _IOR('f', 123, int)
#define DW_ATE_packed_decimal 0x0a
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define IPV6CTL_MRTSTATS 7
#define IPV6CTL_RTEXPIRE 25
#define TCIFLUSH 1
#define DW_AT_return_addr 0x2a
#define R_LIB_ENV "R2_LIBR_PLUGINS"
#define R_FS_FILE_TYPE_DELETED 'x'
#define AF_APPLETALK 16
#define __WATCHOS_1_0 10000
#define R_PERM_ACCESS 32
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define JEMALLOC_HAVE_ATTR_FORMAT_GNU_PRINTF 
#define atomic_add_z JEMALLOC_N(atomic_add_z)
#define R_CORE_PRJ_XREFS 0x0020
#define R_JOIN_4_PATHS(p1,p2,p3,p4) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define DW_OP_mod 0x1d
#define NLDLY 0x00000300
#define tsd_fetch JEMALLOC_N(tsd_fetch)
#define DW_TAG_subprogram 0x2e
#define _SC_TYPED_MEMORY_OBJECTS 102
#define MALLOCX_TCACHE_MASK ((int)~0xfff000ffU)
#define ENOMSG 91
#define PRIiLEAST16 PRIi16
#define DT_WHT 14
#define R_CORE_BIN_ACC_SIZE 0x1000
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define SD_BOTH 2
#define _SC_2_C_DEV 19
#define R_BIN_TYPE_LOPROC_STR "LOPROC"
#define __FLT32_MIN_EXP__ (-125)
#define PRINTF_A(color,fmt,...) r_cons_printf (color fmt Color_RESET, __VA_ARGS__)
#define _SYS_UNISTD_H_ 
#define R_CONS_CLEAR_SCREEN "\x1b[2J\r"
#define r_io_map_set_size(map,new_size) do { map->itv.size = new_size; } while (0)
#define BITMAP_GROUPS_3_LEVEL(nbits) (BITMAP_GROUPS_2_LEVEL(nbits) + BITMAP_GROUPS_L2(nbits))
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define IPPROTO_HMP 20
#define R_DEPRECATE 
#define IPV6_FW_FLUSH 32
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define MADV_FREE_REUSE 8
#define arena_nthreads_dec JEMALLOC_N(arena_nthreads_dec)
#define _POSIX2_BC_DIM_MAX 2048
#define DW_UT_split_type 0x06
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 92
#define prof_tctx_set JEMALLOC_N(prof_tctx_set)
#define O_NOFOLLOW_ANY 0x20000000
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define typeof(arg) __typeof__(arg)
#define MAP_RESILIENT_CODESIGN 0x2000
#define ESPIPE 29
#define JEMALLOC_HAVE_CLOCK_MONOTONIC 1
#define _POSIX_TTY_NAME_MAX 9
#define DW_AT_GNU_addr_base 0x2133
#define PROT_NONE 0x00
#define B1200 1200
#define prof_thread_name_get JEMALLOC_N(prof_thread_name_get)
#define _NETDB_H_ 
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define M_PI_2 1.57079632679489661923132169163975144
#define KEV_DL_AWDL_UNRESTRICTED 27
#define IN_MULTICAST(i) IN_CLASSD(i)
#define CONS_PALETTE_SIZE 22
#define PRIdMAX __PRI_MAX_LENGTH_MODIFIER__ "d"
#define __WCHAR_MAX__ 0x7fffffff
#define witness_owner_error JEMALLOC_N(witness_owner_error)
#define sa2u JEMALLOC_N(sa2u)
#define _SC_TTY_NAME_MAX 101
#define FIOASYNC _IOW('f', 125, int)
#define QUANTUM_CEILING(a) (((a) + QUANTUM_MASK) & ~QUANTUM_MASK)
#define DW_CFA_val_offset_sf 0x15
#define ql_tail_insert(a_head,a_elm,a_field) do { if (ql_first(a_head) != NULL) { qr_before_insert(ql_first(a_head), (a_elm), a_field); } ql_first(a_head) = qr_next((a_elm), a_field); } while (0)
#define DW_OP_lit26 0x4a
#define INT16_MAX 32767
#define __INT_LEAST16_WIDTH__ 16
#define R_CORE_PRJ_ANAL_MACROS 0x0200
#define RLIMIT_AS 5
#define R_AGRAPH_MODE_COMMENTS 5
#define __STDC__ 1
#define SHA256_BLOCK_LENGTH 64
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define R_SYS_H 
#define S_TYPEISSHM(buf) (0)
#define arena_alloc_junk_small JEMALLOC_N(arena_alloc_junk_small)
#define opt_prof JEMALLOC_N(opt_prof)
#define R_SOCKET_PROTO_CAN 0xc42b05
#define R_LIB_VERSION_HEADER(x) R_API const char *x ##_version(void)
#define __GCC_IEC_559 2
#define SCNiFAST32 SCNi32
#define DW_OP_mul 0x1e
#define tsd_witnesses_get JEMALLOC_N(tsd_witnesses_get)
#define arena_lg_dirty_mult_default_set JEMALLOC_N(arena_lg_dirty_mult_default_set)
#define _IOFBF 0
#define malloc_tsd_protos(a_attr,a_name,a_type) a_attr bool a_name ##tsd_boot0(void); a_attr void a_name ##tsd_boot1(void); a_attr bool a_name ##tsd_boot(void); a_attr bool a_name ##tsd_booted_get(void); a_attr a_type * a_name ##tsd_get(bool init); a_attr void a_name ##tsd_set(a_type *val);
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define DW_LANG_PLI 0x000f
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define R_UTF8_WHITE_HEAVY_CHECK_MARK "✅"
#define valgrind_make_mem_noaccess JEMALLOC_N(valgrind_make_mem_noaccess)
#define CMASK 022
#define _SC_NPROCESSORS_CONF 57
#define arena_dalloc_large_junked_locked JEMALLOC_N(arena_dalloc_large_junked_locked)
#define __KAME_VERSION "2009/apple-darwin"
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define r_codemeta_add_annotation r_codemeta_add_item
#define R_INOUT 
#define chunk_dss_mergeable JEMALLOC_N(chunk_dss_mergeable)
#define _SC_XOPEN_STREAMS 114
#define PT_STEP 9
#define DW_OP_lit29 0x4d
#define __FXSR__ 1
#define JEMALLOC_THP 
#define DW_TAG_interface_type 0x38
#define ctl_prefork JEMALLOC_N(ctl_prefork)
#define R_ASCII_TABLE_H 
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define r_io_submap_contain(sm,addr) r_io_map_contain (sm, addr)
#define arena_mapbits_binind_get JEMALLOC_N(arena_mapbits_binind_get)
#define F_ADDFILESIGS_RETURN 97
#define _POSIX_SS_REPL_MAX 4
#define KEV_DL_SUBCLASS 2
#define __disable_tail_calls 
#define Color_BBGRED "\x1b[101m"
#define DW_AT_bit_offset 0x0c
#define Color_BGREEN "\x1b[92m"
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define isalloc JEMALLOC_N(isalloc)
#define IOPOL_UTILITY 4
#define DW_OP_form_tls_address 0x9b
#define FORM_PRIMITIVE 0x00
#define LINK_MAX 32767
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define R_BIN_REQ_TRYCATCH 0x100000000
#define FNONBLOCK O_NONBLOCK
#define INT8_MIN -128
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define BRAILE_NIN $00+$01+$10+$11+$21+$30
#define AF_NS 6
#define islessgreater(x,y) __builtin_islessgreater((x),(y))
#define PF_COIP AF_COIP
#define FILE_FLOAT 33
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define PF_OSI AF_ISO
#define _SC_TRACE_USER_EVENT_MAX 130
#define R_HASH_SHA512 (1ULL << R_HASH_IDX_SHA512)
#define R_HASH_CRC32_BZIP2 (1ULL << R_HASH_IDX_CRC32_BZIP2)
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define DW_OP_lit9 0x39
#define R_REGEX_NOSPEC 0020
#define TCIOFLUSH 3
#define DST_NONE 0
#define SCNuFAST64 SCNu64
#define EOWNERDEAD 105
#define M_E 2.71828182845904523536028747135266250
#define F_ALLOCATEALL 0x00000004
#define _SYS_MMAN_H_ 
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define __AVAILABILITY_INTERNAL__ 
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define R_LOG_DEBUG(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_DEBUG, NULL, fmtstr, ##__VA_ARGS__);
#define IOC_IN (__uint32_t)0x80000000
#define _RAsmPlugin struct r_asm_plugin_t
#define HAVE_PTHREAD 1
#define POLL_MSG 3
#define WITH_GPL 1
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define CLOFSET (CLSIZE*NBPG-1)
#define TCPCI_OPT_SACK 0x00000002
#define ls_foreach(list,it,pos) if ((list)) for (it = (list)->head; it && (pos = it->data); it = it->n)
#define __FINITE_MATH_ONLY__ 0
#define __IPHONE_13_1 130100
#define tcache_dalloc_large JEMALLOC_N(tcache_dalloc_large)
#define PT_DETACH 11
#define SD_RECEIVE 0
#define chunk_hooks_default JEMALLOC_N(chunk_hooks_default)
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define arena_purge JEMALLOC_N(arena_purge)
#define DW_AT_data_location 0x50
#define JEMALLOC_VERSION_GID "04380e79f1e2428bd0ad000bbc6e3d2dfc6b66a5"
#define tcache_event JEMALLOC_N(tcache_event)
#define MAGIC_NO_CHECK_FORTRAN 0x000000
#define R_SOCKET_PROTO_NONE 0
#define R_ANAL_CC_MAXARG 16
#define TH_RST 0x04
#define DW_TAG_imported_unit 0x3d
#define JEMALLOC_VERSION_NREV 0
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG 123
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define TAG_GENERALSTRING 0x1B
#define _SC_SHARED_MEMORY_OBJECTS 39
#define DW_ID_case_insensitive 0x03
#define IXOFF 0x00000400
#define arena_bin_index JEMALLOC_N(arena_bin_index)
#define ERANGE 34
#define DW_CFA_offse_extended 0x05
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define ILL_BADSTK 8
#define _INCLUDE_R_LIST_HEAD_H_ 
#define JEMALLOC_EXPORT JEMALLOC_ATTR(visibility("default"))
#define arena_bitselm_get_mutable JEMALLOC_N(arena_bitselm_get_mutable)
#define SIGFPE 8
#define BITMAP_GROUP_NBITS (ZU(1) << LG_BITMAP_GROUP_NBITS)
#define ut8 unsigned char
#define arena_mapbits_dirty_get JEMALLOC_N(arena_mapbits_dirty_get)
#define opt_thp JEMALLOC_N(opt_thp)
#define rtree_val_read JEMALLOC_N(rtree_val_read)
#define OFF_MAX LLONG_MAX
#define O_EVTONLY 0x00008000
#define malloc_tsd_data(a_attr,a_name,a_type,a_initializer) a_attr __thread a_type JEMALLOC_TLS_MODEL a_name ##tsd_tls = a_initializer; a_attr pthread_key_t a_name ##tsd_tsd; a_attr bool a_name ##tsd_booted = false;
#define IPV6CTL_DEFHLIM 3
#define R_TH_TID pthread_t
#define R_UTF8_KEYBOARD "⌨"
#define SA_RESTART 0x0002
#define __size_t 
#define TIOCM_CTS 0040
#define phn_next_set(a_type,a_field,a_phn,a_next) do { a_phn->a_field.phn_next = a_next; } while (0)
#define R_PRINT_FLAGS_ADDRMOD 0x00000002
#define UT16_SUB_OVFCHK(a,b) UT16_ADD_OVFCHK(a,-(b))
#define ETXTBSY 26
#define JEMALLOC_TLS_MODEL __attribute__((tls_model("initial-exec")))
#define DW_END_little 0x02
#define DW_LNE_lo_user 0x80
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define R_CRYPTO_AES_WRAP 1ULL<<5
#define SCNxLEAST32 SCNx32
#define _U_LONG 
#define R_FLAGS_FS_RESOURCES "resources"
#define SIGCONT 19
#define R_IO_DESC_CACHE_SIZE (sizeof(ut64) * 8)
#define NSIG __DARWIN_NSIG
#define PRIXFAST32 PRIX32
#define TAG_GENERALIZEDTIME 0x18
#define _CS_DARWIN_USER_DIR 65536
#define __UNIX__ 1
#define ACCESSX_MAX_DESCRIPTORS 100
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define R_SELWIDGET_MAXW 30
#define MSG_PEEK 0x2
#define DW_AT_discr_list 0x3d
#define IPPROTO_ROUTING 43
#define WAKEMON_GET_PARAMS 0x04
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict restrict
#define R_NUMCALC_STRSZ 1024
#define R_CRYPTO_ROR 1ULL<<6
#define _SC_BC_SCALE_MAX 11
#define R2_SOCKET_H 
#define DW_TAG_lo_user 0x4080
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define R_CORE_PRJ_FLAGS 0x0001
#define MALLOCX_TCACHE_NONE MALLOCX_TCACHE(-1)
#define __SHRT_MAX__ 0x7fff
#define POLLRDBAND 0x0080
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define R_PRINT_FLAGS_REFS 0x00000080
#define rbtn_rotate_left(a_type,a_field,a_node,r_node) do { (r_node) = rbtn_right_get(a_type, a_field, (a_node)); rbtn_right_set(a_type, a_field, (a_node), rbtn_left_get(a_type, a_field, (r_node))); rbtn_left_set(a_type, a_field, (r_node), (a_node)); } while (0)
#define PRIO_PGRP 1
#define ILL_ILLOPN 4
#define POSIX_MADV_RANDOM 1
#define R_PRINT_ISFIELD (1 << 1)
#define __FLT64X_MAX_10_EXP__ 4932
#define R_PERM_SHAR 8
#define SIGTTOU 22
#define arena_maybe_purge JEMALLOC_N(arena_maybe_purge)
#define R_FLAGS_FS_CLASSES "classes"
#define malloc_strtoumax JEMALLOC_N(malloc_strtoumax)
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define R_STR_CONSTPOOL_H 
#define PRIuMAX __PRI_MAX_LENGTH_MODIFIER__ "u"
#define arena_tdata_get JEMALLOC_N(arena_tdata_get)
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define DW_AT_base_types 0x35
#define r_spaces_foreach(sp,it,s) r_crbtree_foreach ((sp)->spaces, (it), (s))
#define _NLINK_T 
#define IPPROTO_DIVERT 254
#define DW_LNS_advance_pc 0x02
#define SIGSTKSZ 131072
#define prof_interval JEMALLOC_N(prof_interval)
#define sigmask(m) (1 << ((m)-1))
#define R_CORE_BIN_ACC_SIGNATURE 0x20000
#define opt_lg_prof_interval JEMALLOC_N(opt_lg_prof_interval)
#define IPPROTO_ADFS 68
#define IPV6CTL_FORWARDING 1
#define IS_HEXCHAR(x) (((x) >= '0' && (x) <= '9') || ((x) >= 'a' && (x) <= 'f') || ((x) >= 'A' && (x) <= 'F'))
#define R_BIN_TYPE_HIPROC_STR "HIPROC"
#define __SNPT 0x0800
#define TN_KEY_LEN 32
#define DW_LANG_ObjC_plus_plus 0x0011
#define S_IFWHT 0160000
#define iarena_cleanup JEMALLOC_N(iarena_cleanup)
#define pind2sz JEMALLOC_N(pind2sz)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define _SC_THREAD_STACK_MIN 93
#define RENAME_EXCL 0x00000004
#define DW_UT_skeleton 0x04
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define IPPROTO_ARGUS 13
#define R_PERM_CREAT 64
#define _SC_JOB_CONTROL 6
#define PVM 4
#define index2size_lookup JEMALLOC_N(index2size_lookup)
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define DW_TAG_pointer_type 0x0f
#define JEMALLOC_CONFIG_MALLOC_CONF ""
#define EINPROGRESS 36
#define NET_RT_IFLIST 3
#define R_STR_ISNOTEMPTY(x) ((x) && *(x))
#define _PC_ASYNC_IO 17
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define JEMALLOC_THREADED_INIT 
#define chunk_register JEMALLOC_N(chunk_register)
#define nstime_update JEMALLOC_N(nstime_update)
#define JEMALLOC_USABLE_SIZE_CONST 
#define _SYS_STAT_H_ 
#define __APPLE_API_STANDARD 
#define R_CORE_LOADLIBS_CONFIG 8
#define WCHAR_MIN (-WCHAR_MAX-1)
#define SOL_LOCAL 0
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define JEMALLOC_HAVE_CLOCK_MONOTONIC_COARSE 1
#define KEV_INET_NEW_ADDR 1
#define malloc_tsd_types(a_name,a_type) 
#define _SYS_IOCCOM_H_ 
#define RTLD_SELF ((void *) -3)
#define R_CONS_CURSOR_LEFT "\x1b[D"
#define SCNo16 "ho"
#define AF_E164 AF_ISDN
#define CHUNK_ADDR2BASE(a) ((void *)((uintptr_t)(a) & ~chunksize_mask))
#define R_PACKED(__Declaration__) __Declaration__ __attribute__((__packed__))
#define _PC_AUTH_OPAQUE_NP 14
#define ST16_ADD_OVFCHK(a,b) ((((b) > 0) && ((a) > ST16_MAX - (b))) || (((b) < 0) && ((a) < ST16_MIN - (b))))
#define DW_AT_call_all_source_calls 0x7b
#define WITNESS_RANK_BASE 12U
#define _POSIX_READER_WRITER_LOCKS 200112L
#define R_PKCS7_H 
#define PFMTCRCx PFMT64x
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define FILE_BESTRING16 18
#define r_cmd_parsed_args_foreach_arg(args,i,arg) for ((i) = 1; (i) < (args->argc) && ((arg) = (args)->argv[i]); (i)++)
#define _POSIX_AIO_MAX 1
#define TCACHE_GC_SWEEP 8192
#define FLUSHO 0x00800000
#define NETDB_SUCCESS 0
#define INT_LEAST32_MIN INT32_MIN
#define R2_HASH_H 
#define DW_AT_count 0x37
#define SCNo32 "o"
#define FILE_LEDOUBLE 38
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define DW_LNE_end_sequence 0x01
#define UINT_FAST16_MAX UINT16_MAX
#define F_SETPROTECTIONCLASS 64
#define ENOTBLK 15
#define R_PRINT_VALUE (1 << 6)
#define OFFADD 0x02
#define nstime_ns JEMALLOC_N(nstime_ns)
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define R_HAVE_CRC15_EXTRA 1
#define ARROW_LEFT 9
#define R_SYS_OS "darwin"
#define F_ADDFILESIGS 61
#define DW_CFA_hi_user 0x3f
#define MS_KILLPAGES 0x0004
#define TAG_IA5STRING 0x16
#define FILE_OPMODULO 7
#define EPROTOTYPE 41
#define r_io_range_free(x) free(x)
#define _SC_SHELL 78
#define extent_tree_ad_destroy_recurse JEMALLOC_N(extent_tree_ad_destroy_recurse)
#define r_vector_foreach_prev(vec,it) if (!r_vector_empty (vec)) for (it = (void *)((char *)(vec)->a + (((vec)->len - 1)* (vec)->elem_size)); (char *)it != (char *)(vec)->a; it = (void *)((char *)it - (vec)->elem_size))
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define R_AGRAPH_MODE_SUMMARY 4
#define _PTHREAD_COND_T 
#define extent_tree_ad_remove JEMALLOC_N(extent_tree_ad_remove)
#define LIBC_HAVE_PLEDGE 0
#define R_GRAPH_FORMAT_JSON 2
#define PRIu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define ALIGN(p) __DARWIN_ALIGN(p)
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define DW_AT_discr 0x15
#define DW_AT_segment 0x46
#define _BSD_SEMAPHORE_H 
#define __FLT128_MIN_10_EXP__ (-4931)
#define MONOTONIC_UNIX (MONOTONIC_APPLE || MONOTONIC_LINUX || MONOTONIC_FREEBSD || MONOTONIC_NETBSD)
#define VDSUSP 11
#define __FLT32X_IS_IEC_60559__ 2
#define R2_LANG_H 
#define SCNo64 __SCN_64_LENGTH_MODIFIER__ "o"
#define B_ODD(x) (!B_EVEN((x)))
#define SCNxFAST16 SCNx16
#define TCPOPT_SACK 5
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define CHAR_IGNORE_UPPERCASE 'C'
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define EAI_NONAME 8
#define _POSIX_AIO_LISTIO_MAX 2
#define __FLT64X_MIN_EXP__ (-16381)
#define HHXFMT "hhx"
#define CORNER_TR 6
#define _SYS_PARAM_H_ 
#define prof_bt_count JEMALLOC_N(prof_bt_count)
#define FILE_BEQLDATE 32
#define __DARWIN_NBBY 8
#define quarantine_alloc_hook JEMALLOC_N(quarantine_alloc_hook)
#define _POSIX_SPIN_LOCKS (-1)
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define HAVE_LIB_MAGIC 0
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define IPV6CTL_GIF_HLIM 19
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define CONS_MAX_ATTR_SZ 16
#define _POSIX_SYNCHRONIZED_IO (-1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define nstime_subtract JEMALLOC_N(nstime_subtract)
#define VSTOP 13
#define HAVE_LIB_XXHASH 0
#define FP_PREC_24B 0
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define UT64_MAX 0xFFFFFFFFFFFFFFFFULL
#define R_BIN_METH_MIRANDA 0x0000000000080000L
#define O_SYMLINK 0x00200000
#define MINCORE_REFERENCED 0x2
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
#define ckh_insert JEMALLOC_N(ckh_insert)
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TCPOLEN_CC 6
#define PT_ATTACHEXC 14
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define hash_get_block_32 JEMALLOC_N(hash_get_block_32)
#define __PTRDIFF_WIDTH__ 64
#define IPPROTO_WSN 74
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define Color_BGCYAN "\x1b[46m"
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define O_APPEND 0x00000008
#define IPPROTO_MAX 256
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define ipallocztm JEMALLOC_N(ipallocztm)
#define Color_BBGBLACK Color_BGGRAY
#define DW_TAG_member 0x0d
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define PTR_CEILING(a) (((a) + PTR_MASK) & ~PTR_MASK)
#define R_CORE_BIN_ACC_LIBS 0x200
#define FP_NORMAL 4
#define SDB_NUM_BUFSZ 64
#define MAXPATHLEN PATH_MAX
#define BINTEST 0x20
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define je_xallocx xallocx
#define IPPROTO_LARP 91
#define _SC_2_C_BIND 18
#define R_PUNYCODE_H 
#define _POSIX_LINK_MAX 8
#define DW_UT_lo_user 0x80
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define COLL_WEIGHTS_MAX 2
#define TCACHE_STATE_REINCARNATED ((tcache_t *)(uintptr_t)2)
#define BITMAP_BITS2GROUPS(nbits) ((nbits + BITMAP_GROUP_NBITS_MASK) >> LG_BITMAP_GROUP_NBITS)
#define R_CHECKS_LEVEL 2
#define arena_choose_impl JEMALLOC_N(arena_choose_impl)
#define DW_DS_unsigned 0x01
#define _RPERM_OK (1<<19)
#define R_CTYPES_H 
#define JEMALLOC_INTERNAL_DECLS_H 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define CPU_SPINWAIT __asm__ volatile("pause")
#define CHARCLASS_NAME_MAX 14
#define DW_ATE_unsigned_char 0x08
#define __CHAR16_TYPE__ short unsigned int
#define _MMAP 
#define TINY_MIN (1U << LG_TINY_MIN)
#define R_X509_H 
#define B10010 18
#define AF_RESERVED_36 36
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define R_PRINT_QUIET (1 << 8)
#define B10011 19
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define TIOCM_RNG 0200
#define R_CORE_ANAL_GRAPHDIFF 4
#define IPV6_IPSEC_POLICY 28
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define NET_SERVICE_TYPE_AV 6
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define FILE_OPS_MASK 0x07
#define DW_DS_leading_separate 0x04
#define R_UTF8_BLOCK "\u2588"
#define B7200 7200
#define getchar_unlocked() getc_unlocked(stdin)
#define INPCK 0x00000010
#define PRIO_PROCESS 0
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define R_SYS_ENVSEP ":"
#define R_GRAPH_H 
#define NET_SERVICE_TYPE_BE 0
#define DW_FORM_ref_udata 0x15
#define NET_SERVICE_TYPE_BK 1
#define _XOPEN_REALTIME_THREADS (-1)
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define SSZT_MAX ST64_MAX
#define ETIMEDOUT 60
#define ckh_string_keycomp JEMALLOC_N(ckh_string_keycomp)
#define _WCHAR_H_ 
#define _SC_AIO_LISTIO_MAX 42
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define R_BIN_METH_PROTECTED 0x0000000000000010L
#define R_HASH_SIZE_FLETCHER16 2
#define tcache_bin_flush_small JEMALLOC_N(tcache_bin_flush_small)
#define DW_CFA_def_cfa_expression 0x0f
#define SCHED_OTHER 1
#define DW_AT_threads_scaled 0x62
#define _R_LIST_C 
#define TCACHE_STATE_PURGATORY ((tcache_t *)(uintptr_t)3)
#define ls_iter_get(x) x->data; x=x->n
#define R_CORE_ANAL_STAR 64
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define FIODTYPE _IOR('f', 122, int)
#define PRIuLEAST32 PRIu32
#define CHUNK_MAP_RUNIND_SHIFT (CHUNK_MAP_BININD_SHIFT + 8)
#define JEMALLOC_VALGRIND_REALLOC(maybe_moved,tsdn,ptr,usize,ptr_maybe_null,old_ptr,old_usize,old_rzsize,old_ptr_maybe_null,zero) do {} while (0)
#define R_ASSERT_H 
#define arena_chunk_alloc_huge JEMALLOC_N(arena_chunk_alloc_huge)
#define __END_DECLS 
#define M_2_PI 0.636619772367581343075535053490057448
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define _BSD_MACHINE_SIGNAL_H_ 
#define R_HASH_SIZE_FLETCHER32 4
#define DW_TAG_namelist_items 0x2c
#define UT64_MIN 0ULL
#define F_PEOFPOSMODE 3
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define LOCAL_PEERUUID 0x004
#define ST8_MIN (-ST8_MAX - 1)
#define R2_VERSION_PATCH 4
#define R_HASH_SIZE_SSDEEP 128
#define R_HASH_CRC32_XFER (1ULL << R_HASH_IDX_CRC32_XFER)
#define DW_CFA_advance_loc1 0x02
#define TAG_SEQUENCE 0x10
#define LG_PROF_INTERVAL_DEFAULT -1
#define DW_CFA_advance_loc4 0x04
#define AF_LAT 14
#define r_flist_t void**
#define __PRI_64_LENGTH_MODIFIER__ "ll"
#define R2_HEAP_JEMALLOC_H 
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define __FLT32_IS_IEC_60559__ 2
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define PT_READ_I 1
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define R_UTF8_H 
#define _SC_2_PBS_MESSAGE 63
#define MALLOCX_LG_ALIGN_MASK ((int)0x3f)
#define DTF_HIDEW 0x0001
#define POSIX_MADV_WILLNEED 3
#define _SYS_FCNTL_H_ 
#define _READ_OK (1<<9)
#define PRIuLEAST64 PRIu64
#define IPV6_2292HOPLIMIT 20
#define RUNECODE_LINE_HORIZ 0xce
#define _T_PTRDIFF 
#define PF_NATM AF_NATM
#define DEFINE_CMD_OLDINPUT_DESC(core,name,parent) RCmdDesc *name ##_cd = r_cmd_desc_oldinput_new (core->rcmd, parent, #name, name ##_handler_old, &name ##_help); r_warn_if_fail (name ##_cd)
#define SO_NUMRCVPKT 0x1112
#define prof_gdump_set JEMALLOC_N(prof_gdump_set)
#define _XOPEN_ENH_I18N (1)
#define B230400 230400
#define TIOCM_RTS 0004
#define prng_lg_range_zu JEMALLOC_N(prng_lg_range_zu)
#define SCOPE_DELIMITER '%'
#define UT32_SUB_OVFCHK(a,b) UT32_ADD_OVFCHK(a,-(b))
#define TCPOLEN_SACK_PERMITTED 2
#define Color_BGYELLOW "\x1b[43m"
#define NeXTBSD4_0 0
#define arena_miscelm_to_pageind JEMALLOC_N(arena_miscelm_to_pageind)
#define KEV_DL_QOS_MODE_CHANGED 29
#define R_HASH_SIZE_FLETCHER64 8
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define IP_MULTICAST_IFINDEX 66
#define prof_active JEMALLOC_N(prof_active)
#define IP_RSVP_OFF 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define IPPROTO_PIM 103
#define index2size JEMALLOC_N(index2size)
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define ENOTTY 25
#define tsd_thread_deallocated_set JEMALLOC_N(tsd_thread_deallocated_set)
#define R_ASN1_H 
#define R_CORE_LOADLIBS_ALL UT32_MAX
#define _r_malloc r_malloc
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define EINTR 4
#define AF_INET6 30
#define POSIX_MADV_NORMAL 0
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define RLIM_NLIMITS 9
#define r_return_if_reached() do { H_LOG_ (R_LOGLVL_ERROR, "file %s: line %d (%s): should not be reached\n", __FILE__, __LINE__, R_FUNCTION); return; } while (0)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define _FILESEC_T 
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define EBADARCH 86
#define _U_INT64_T 
#define IPV6CTL_ADDRCTLPOLICY 38
#define _POSIX_SPAWN (-1)
#define JEMALLOC_CACHE_OBLIVIOUS 
#define __SHRT_WIDTH__ 16
#define SOCK_DGRAM 2
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define SSZT_MIN ST64_MIN
#define R_BIN_METH_CONST 0x0000000000000400L
#define IOPOL_IMPORTANT 1
#define DW_LANG_ObjC 0x0010
#define SO_LINGER 0x0080
#define prof_lookup JEMALLOC_N(prof_lookup)
#define s2u JEMALLOC_N(s2u)
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define TMP_MAX 308915776
#define F_THAW_FS 54
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define R2_RBTREE_H 
#define extent_tree_szsnad_new JEMALLOC_N(extent_tree_szsnad_new)
#define EAI_SERVICE 9
#define SA_ONSTACK 0x0001
#define R2_CRYPTO_H 
#define __GNU 
#define IOPOL_TYPE_DISK 0
#define R_LINE_HISTSIZE 256
#define r_list_push(x,y) r_list_append ((x), (y))
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define RUNE_CURVE_CORNER_BL "╰"
#define UT16_GT0 0x8000U
#define RUNE_CURVE_CORNER_BR "╯"
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define r_sys_perror(x) r_sys_perror_str(x);
#define R_BIN_REQ_RESOURCES 0x8000000
#define IPPROTO_IPEIP 94
#define DW_TAG_type_unit 0x41
#define R_BIN_REQ_HELP 0x000040
#define IPV6CTL_STATS 6
#define extent_tree_ad_destroy JEMALLOC_N(extent_tree_ad_destroy)
#define hash_x86_128 JEMALLOC_N(hash_x86_128)
#define atomic_sub_u JEMALLOC_N(atomic_sub_u)
#define atomic_sub_z JEMALLOC_N(atomic_sub_z)
#define WAKEMON_DISABLE 0x02
#define DW_TAG_common_block 0x1a
#define opt_decay_time JEMALLOC_N(opt_decay_time)
#define R_CONS_CURSOR_RIGHT "\x1b[C"
#define SHELL_PATH "/bin/sh"
#define _BLKCNT_T 
#define R_CORE_PRJ_ALL 0xFFFF
#define TCPCI_OPT_WSCALE 0x00000004
#define _REXT_OK (1<<17)
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define R_CRYPTO_RC6 1ULL<<2
#define DW_TAG_access_declaration 0x23
#define _WCHAR_T_ 
#define SO_NET_SERVICE_TYPE 0x1116
#define IPPROTO_DONE 257
#define __MAC_10_1 1010
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define R_FLAGS_FS_SYMBOLS_SECTIONS "symbols.sections"
#define SIOCGLOWAT _IOR('s', 3, int)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define EAI_FAMILY 5
#define TAG_PRINTABLESTRING 0x13
#define ql_prev(a_head,a_elm,a_field) ((ql_first(a_head) != (a_elm)) ? qr_prev((a_elm), a_field) : NULL)
#define IPCTL_RTEXPIRE 5
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define _POSIX2_PBS_ACCOUNTING (-1)
#define TCACHE_NSLOTS_SMALL_MAX 200
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define str_range _u._s._count
#define MATH_ERRNO 1
#define DW_AT_recursive 0x68
#define __MAC_10_5 1050
#define R2_DEBUG_H 
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define witness_assert_depth JEMALLOC_N(witness_assert_depth)
#define SCNoLEAST16 SCNo16
#define JEMALLOC_H_INLINES 
#define R_HASH_SIZE_SHA384 48
#define HAVE_MMAN 1
#define __MAC_10_7 1070
#define WITNESS_RANK_ARENA_BIN WITNESS_RANK_LEAF
#define __AVAILABILITY_VERSIONS__ 
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define DW_TAG_array_type 0x01
#define prof_reset JEMALLOC_N(prof_reset)
#define FILENAME_MAX 1024
#define _PC_CASE_PRESERVING 12
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define R_REGEX_EPAREN 8
#define _PTHREAD_KEY_T 
#define IPPROTO_PRM 21
#define POLLRDNORM 0x0040
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define R_HASH_NBITS (8*sizeof(ut64))
#define IPV6PORT_RESERVEDMIN 600
#define PRIoFAST16 PRIo16
#define DW_AT_vtable_elem_location 0x4d
#define R_CODEC_NONE 0ULL
#define __GNUC__ 11
#define __APPLE__ 1
#define LG_SIZEOF_INTMAX_T 3
#define R_MODE_PRINT 0x000
#define __UINT16_C(c) c
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define prof_tdata_count JEMALLOC_N(prof_tdata_count)
#define NET_SERVICE_TYPE_RD 8
#define IPPROTO_ST 7
#define JEMALLOC_VERSION_BUGFIX 0
#define FILE_STRING 5
#define SCNoLEAST32 SCNo32
#define NET_SERVICE_TYPE_RV 5
#define DW_AT_GNU_call_site_target_clobbered 0x2114
#define R_MEM_ALIGN(x) ((void *)(size_t)(((ut64)(size_t)x) & 0xfffffffffffff000LL))
#define ql_head(a_type) struct { a_type *qlh_first; }
#define NI_NAMEREQD 0x00000004
#define SO_DONTTRUNC 0x2000
#define _POSIX2_RE_DUP_MAX 255
#define DW_AT_common_reference 0x1a
#define CR0 0x00000000
#define CR1 0x00001000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define PATHSEP ':'
#define DW_TAG_constant 0x27
#define SCNdLEAST16 SCNd16
#define _SIGSET_T 
#define SING 2
#define PRIoFAST32 PRIo32
#define R_NSEC_PER_SEC 1000000000ULL
#define extent_node_prof_tctx_set JEMALLOC_N(extent_node_prof_tctx_set)
#define IPPROTO_INLSP 52
#define CS6 0x00000100
#define CS7 0x00000200
#define CS8 0x00000300
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define arena_prefork0 JEMALLOC_N(arena_prefork0)
#define st16 short
#define R_FILE_H 
#define IPPROTO_PUP 12
#define DW_TAG_entry_point 0x03
#define B_IS_SET(x,n) (((x) & (1ULL << (n)))? 1: 0)
#define R_BIN_REQ_SEGMENTS 0x20000000
#define R_REG_COND_CF 2
#define R_REG_COND_HI 5
#define CTA(x,y,z) (x+CTO(y,z))
#define CTI(x,y,z) (*((size_t*)(CTA(x,y,z))))
#define SCNdLEAST32 SCNd32
#define IPPROTO_PVP 75
#define thread_allocated_cleanup JEMALLOC_N(thread_allocated_cleanup)
#define arena_ralloc JEMALLOC_N(arena_ralloc)
#define R_CORE_CMD_EXIT -2
#define R_EGG_OS_MACOS 0x5cb23c16
#define st32 int
#define DW_AT_GNU_dwo_name 0x2130
#define NET_SERVICE_TYPE_VI 3
#define ARG_MAX (1024 * 1024)
#define NET_SERVICE_TYPE_VO 4
#define R_HASH_ADLER32 (1ULL << R_HASH_IDX_ADLER32)
#define ENOSR 98
#define PRIoFAST64 PRIo64
#define FILE_MELONG 23
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define MADV_NORMAL POSIX_MADV_NORMAL
#define IP_OLD_FW_DEL 51
#define arena_ralloc_junk_large JEMALLOC_N(arena_ralloc_junk_large)
#define r_list_iter_next(x) ((x)? 1: 0)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define malloc_tsd_malloc JEMALLOC_N(malloc_tsd_malloc)
#define MAC_OS_X_VERSION_10_14_6 101406
#define R_FREE(x) { free((void *)x); x = NULL; }
#define opt_lg_prof_sample JEMALLOC_N(opt_lg_prof_sample)
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define PVFS 20
#define DW_OP_breg17 0x81
#define _SC_NPROCESSORS_ONLN 58
#define R_ALIGNED(x) __attribute__((aligned(x)))
#define MAP_RESILIENT_MEDIA 0x4000
#define IPPROTO_IDP 22
#define FP_ILOGBNAN (-2147483647 - 1)
#define R_CRYPTO_DES_ECB 1ULL<<11
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#define DW_FORM_flag_present 0x19
#define DW_UT_partial 0x03
#define PRIoLEAST16 PRIo16
#define IPV6CTL_SOURCECHECK 10
#define SCNxFAST8 SCNx8
#define AI_V4MAPPED 0x00000800
#define FUNC_ATTR_MALLOC __attribute__((malloc))
#define SCNdLEAST64 SCNd64
#define O_NOCTTY 0x00020000
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define IPPROTO_IPIP IPPROTO_IPV4
#define tcache_maxclass JEMALLOC_N(tcache_maxclass)
#define R_ASM_ARCH_I8080 R_SYS_ARCH_I8080
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define SONPX_SETOPTSHUT 0x000000001
#define WORD_BIT 32
#define st64 long long
#define rtree_subtree_read JEMALLOC_N(rtree_subtree_read)
#define IOCPARM_MASK 0x1fff
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define VKILL 5
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define _INO_T 
#define IPV6_2292PKTOPTIONS 25
#define CLD_NOOP 0
#define DW_ORD_row_major 0x00
#define R_HASH_CRC32_POSIX (1ULL << R_HASH_IDX_CRC32_POSIX)
#define R_PRINT_FLAGS_HEADER 0x00000008
#define R_MIDFLAGS_SHOW 1
#define MAXDESC 64
#define RColor_BBGGREEN RCOLOR(ALPHA_BG, 22, 198, 12, 0x00, 0x00, 0x00, 10)
#define R_PRINT_STRING_WIDE32 16
#define L_ctermid 1024
#define CDB_MAX_VALUE 0xffffff
#define IPPROTO_IGP 85
#define ls_iter_unref(x) x
#define DW_AT_GNU_deleted 0x211a
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define HAVE_FORK 1
#define DW_LNE_HP_negate_post_semantics 0x17
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define huge_palloc JEMALLOC_N(huge_palloc)
#define R_REGEX_BADRPT 13
#define IP_RSVP_ON 15
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define _SC_ARG_MAX 1
#define FMTd32 PRId32
#define ZERO_FILL(x) memset (&x, 0, sizeof (x))
#define narenas_tdata_cleanup JEMALLOC_N(narenas_tdata_cleanup)
#define INT_FAST16_MIN INT16_MIN
#define DW_DS_trailing_overpunch 0x03
#define CLSIZE 1
#define SMALL_MAXCLASS ((((size_t)1) << 13) + (((size_t)3) << 11))
#define DT_BLK 6
#define R_CORE_PRJ_ANAL_TYPES 0x0100
#define SIGTSTP 18
#define IPPROTO_3PC 34
#define ISTRIP 0x00000020
#define __GETHOSTUUID_H 
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define UF_OPAQUE 0x00000008
#define SEEK_CUR 1
#define EAI_FAIL 4
#define CLOCAL 0x00008000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define FFDLY 0x00004000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define DW_OP_breg2 0x72
#define AF_ROUTE 17
#define CLK_TCK __DARWIN_CLK_TCK
#define IP_PORTRANGE_LOW 2
#define R_HASH_SIZE_CRC15_CAN 2
#define _NETINET_IN_H_ 
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define R_SPACES_MAX 512
#define SCNxFAST32 SCNx32
#define _POSIX_HOST_NAME_MAX 255
#define Color_RED "\x1b[31m"
#define RUNE_CURVE_CORNER_TL "╭"
#define R2_VECTOR_H 
#define RUNE_CURVE_CORNER_TR "╮"
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define DW_OP_not 0x20
#define DW_OP_breg7 0x77
#define jemalloc_postfork_parent JEMALLOC_N(jemalloc_postfork_parent)
#define MCL_CURRENT 0x0001
#define _TIME_T 
#define tsd_wrapper_get JEMALLOC_N(tsd_wrapper_get)
#define PF_PIP pseudo_AF_PIP
#define IPCTL_KEEPFAITH 15
#define R_STR_UTIL_H 
#define MSG_DONTROUTE 0x4
#define EXTA 19200
#define EXTB 38400
#define _I386_SIGNAL_H_ 1
#define IPPROTO_HELLO 63
#define R_UTF8_VS16 "\xef\xb8\x8f"
#define r_io_map_to(map) ( r_itv_end (map->itv) - 1 )
#define R_STACK_H 
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define __IPHONE_3_0 30000
#define __WCHAR_TYPE__ int
#define DW_TAG_set_type 0x20
#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define IPPROTO_OSPFIGP 89
#define _SC_XOPEN_REALTIME_THREADS 112
#define FILE_LELONG 11
#define FPE_FLTDIV 1
#define CHUNK_MAP_SIZE_MASK (~(CHUNK_MAP_BININD_MASK | CHUNK_MAP_FLAGS_MASK | CHUNK_MAP_STATE_MASK))
#define R_ANAL_ADDR_TYPE_EXEC 1
#define JEMALLOC_INLINE_C static inline
#define rtree_child_read JEMALLOC_N(rtree_child_read)
#define WINT_MAX INT32_MAX
#define DW_AT_small 0x5d
#define PROF_NTDATA_LOCKS 256
#define KEY_TYPE void *
#define MAXBSIZE (256 * 4096)
#define USE_VARSUBS 0
#define R_BIN_TYPE_HIOS_STR "HIOS"
#define R_REGEX_ATOI 255
#define MAP_ANON 0x1000
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define arena_chunk_ralloc_huge_shrink JEMALLOC_N(arena_chunk_ralloc_huge_shrink)
#define __DBL_HAS_INFINITY__ 1
#define IOPOL_SCOPE_PROCESS 0
#define IPPROTO_INP 32
#define LONG ((unsigned int)(1U << LG_SIZEOF_LONG))
#define R_PRINT_FLAGS_UNALLOC 0x00080000
#define _PC_SYMLINK_MAX 24
#define DW_AT_string_length 0x19
#define PASS_MAX 128
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define extent_tree_szsnad_iter JEMALLOC_N(extent_tree_szsnad_iter)
#define _POSIX_NGROUPS_MAX 8
#define RSIZE_MAX (SIZE_MAX >> 1)
#define Color_RESET_ALL "\x1b[0m\x1b[49m"
#define IP_STRIPHDR 23
#define TH_URG 0x20
#define TIOCSCTTY _IO('t', 97)
#define HAVE_CLOCK_NANOSLEEP 0
#define R_HASH_CRC32D (1ULL << R_HASH_IDX_CRC32D)
#define __DTF_READALL 0x0008
#define ISIG 0x00000080
#define __DARWIN_OS_INLINE static inline
#define R_USEC_PER_SEC 1000000ULL
#define arena_extent_sn_next JEMALLOC_N(arena_extent_sn_next)
#define stdin __stdinp
#define PRIi16 "hi"
#define _PC_2_SYMLINKS 15
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define PGSHIFT 12
#define __null_unspecified 
#define F_SINGLE_WRITER 76
#define FILE_FMT_NUM 1
#define assert_not_implemented(e) do { if (unlikely(config_debug && !(e))) not_implemented(); } while (0)
#define _SC_CLK_TCK 3
#define Color_DELETE Color_BRED
#define IP_FAITH 22
#define arena_mapbits_unallocated_size_set JEMALLOC_N(arena_mapbits_unallocated_size_set)
#define SCHED_FIFO 4
#define R_CORE_BIN_ACC_SEGMENTS 0x400000
#define Color_RESET_BG "\x1b[49m"
#define malloc_mutex_prefork JEMALLOC_N(malloc_mutex_prefork)
#define AF_SYSTEM 32
#define IPV6CTL_DAD_COUNT 16
#define CN_STR 0x000008
#define P_tmpdir "/var/tmp/"
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define DW_AT_ranges 0x55
#define ENOATTR 93
#define DW_VIRTUALITY_virtual 0x01
#define ls_empty(x) (!x || !x->length)
#define DW_LNE_HP_negate_front_end_logical 0x19
#define a0dalloc JEMALLOC_N(a0dalloc)
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define IPPROTO_IPV4 4
#define IPPROTO_IPV6 41
#define F_CHECK_LV 98
#define IPCTL_RTMINEXPIRE 6
#define R_STR_H 
#define __TVOS_AVAILABLE(_vers) 
#define FILE_OPADD 3
#define MS_SYNC 0x0010
#define ticker_tick JEMALLOC_N(ticker_tick)
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define PF_PPP AF_PPP
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define Color_BGBLUE "\x1b[44m"
#define size2index_tab JEMALLOC_N(size2index_tab)
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define R_DIM(x,y,z) (((x)<(y))?(y):((x)>(z))?(z):(x))
#define EAI_PROTOCOL 13
#define SA_64REGSET 0x0200
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define _SIZE_T_DEFINED 
#define DW_LANG_Python 0x0014
#define je_sdallocx sdallocx
#define rtree_new JEMALLOC_N(rtree_new)
#define DW_ATE_lo_user 0x80
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define MSIZE (1 << MSIZESHIFT)
#define DW_TAG_null_entry 0x00
#define __WATCHOS_UNAVAILABLE 
#define DW_TAG_module 0x1e
#define SCHED_RR 2
#define _POSIX_NO_TRUNC 200112L
#define ECHILD 10
#define SCNdFAST8 SCNd8
#define _SC_V6_ILP32_OFF32 103
#define PRIi64 __PRI_64_LENGTH_MODIFIER__ "i"
#define _POSIX_REGEXP 200112L
#define __FLT64_HAS_DENORM__ 1
#define ffs_u JEMALLOC_N(ffs_u)
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define tsd_booted_get JEMALLOC_N(tsd_booted_get)
#define POSIX_MADV_DONTNEED 4
#define je_malloc_conf malloc_conf
#define R2_BIN_DWARF_H 
#define TIOCGETA _IOR('t', 19, struct termios)
#define RTR_PROTOCOL_HTTP 3
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define RUSAGE_INFO_V4 4
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define WITNESS_RANK_PROF_ACTIVE WITNESS_RANK_LEAF
#define R_DES_H 
#define S_TYPEISTMO(buf) (0)
#define PRIdFAST8 PRId8
#define INFINITY HUGE_VALF
#define MACRO_LABELS 20
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define _POSIX_MEMORY_PROTECTION 200112L
#define R_BIN_TYPE_NUM_STR "NUM"
#define TIOCGETD _IOR('t', 26, int)
#define R_PRINT_FLAGS_COLOR 0x00000001
#define RColor_BGWHITE RCOLOR(ALPHA_BG, 204, 204, 204, 0x00, 0x00, 0x00, 7)
#define R_ANAL_COND_SINGLE(x) (!x->arg[1] || x->arg[0]==x->arg[1])
#define true 1
#define SA_RESETHAND 0x0004
#define __TVOS_10_0_1 100001
#define EAI_SOCKTYPE 10
#define SIN6_LEN 
#define _SC_RAW_SOCKETS 119
#define IPCTL_FASTFORWARDING 14
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define _POSIX2_LOCALEDEF 200112L
#define WITNESS_RANK_PROF_GDUMP WITNESS_RANK_LEAF
#define r_list_iter_get(x) (x)->data; (x)=(x)->n
#define DW_FORM_addr 0x01
#define PF_PUP AF_PUP
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define SOL_SOCKET 0xffff
#define _SC_THREAD_SPORADIC_SERVER 92
#define R_CORE_BIN_ACC_EXPORTS 0x8000
#define $21 32
#define __SOFF 0x1000
#define R_CORE_BIN_ACC_DWARF 0x800
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define prof_postfork_child JEMALLOC_N(prof_postfork_child)
#define R_UTF32_H 
#define Color_BBGYELLOW "\x1b[103m"
#define opt_lg_dirty_mult JEMALLOC_N(opt_lg_dirty_mult)
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define buffer_SEEK(s,len) ( ( (s)->p -= (len) ) , ( (s)->n += (len) ) )
#define extent_size_quantize_ceil JEMALLOC_N(extent_size_quantize_ceil)
#define FFDSYNC O_DSYNC
#define valgrind_freelike_block JEMALLOC_N(valgrind_freelike_block)
#define R_PRINT_MUSTSEE (1)
#define __kpi_unavailable 
#define R_SYS_BITS_16 2
#define r_realloc(x,y) realloc((x),(y))
#define SMOOTHSTEP_VARIANT "smoother"
#define R_BIN_BIND_GLOBAL_STR "GLOBAL"
#define CINTR CTRL('c')
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define TLOSS 5
#define S_BLKSIZE 512
#define BRAILE_ONE $00+$01+$11+$21+$31
#define tcache_alloc_small_hard JEMALLOC_N(tcache_alloc_small_hard)
#define IPV6CTL_LOG_INTERVAL 14
#define _SC_STREAM_MAX 26
#define _STRUCT_IOVEC 
#define __amd64 1
#define CEOL 0xff
#define CEOT CEOF
#define DW_OP_reg3 0x53
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define PFMTDPTR "td"
#define WITNESS_RANK_PROF_TDATAS 6U
#define R_ANAL_GET_OFFSET(x,y,z) (x && x->binb.bin && x->binb.get_offset)? x->binb.get_offset (x->binb.bin, y, z): -1
#define r_list_foreach_prev_safe(list,it,tmp,pos) for (it = list->tail; it && (pos = it->data, tmp = it->p, 1); it = tmp)
#define R_SYS_BITS_32 4
#define TIOCM_DSR 0400
#define DW_OP_reg4 0x54
#define iralloct JEMALLOC_N(iralloct)
#define SEGV_MAPERR 1
#define SDB_MAX_GPERF_KEYS 15000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define __PTHREAD_ONCE_SIZE__ 8
#define R_EGG_OS_BEOS 0x506108be
#define PF_DLI AF_DLI
#define RUNECODE_CORNER_TR 0xd0
#define R_CORE_ANAL_GRAPHBODY 2
#define DW_DSC_label 0x00
#define DW_DS_trailing_separate 0x05
#define DW_AT_rvalue_reference 0x78
#define _PTRDIFF_T_DECLARED 
#define TIOCM_DTR 0002
#define MAC_OS_X_VERSION_10_5 1050
#define arena_metadata_allocated_get JEMALLOC_N(arena_metadata_allocated_get)
#define rtree_start_level JEMALLOC_N(rtree_start_level)
#define _SC_2_PBS_LOCATE 62
#define tsd_init_finish JEMALLOC_N(tsd_init_finish)
#define __SCN_64_LENGTH_MODIFIER__ "ll"
#define PRINT_GA(msg) r_cons_printf ("%s" msg Color_RESET, pal->args)
#define sigemptyset(set) (*(set) = 0, 0)
#define B_UNSET(x,n) ((x) &= ~(1ULL << (n)))
#define R_MAGIC_NO_CHECK_ASCII 0x020000
#define R_UTF8_SKULL_AND_CROSSBONES "☠"
#define WITNESS_RANK_INIT 1U
#define PRIx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define R_CORE_ANAL_KEYVALUE 16
#define KEV_INET_ARPCOLLISION 7
#define R_CORE_ASMQJMPS_MAX_LETTERS (26 * 26 * 26 * 26 * 26)
#define DW_ATE_complex_float 0x03
#define MADV_PAGEOUT 10
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define R_BIN_REQ_SIGNATURE 0x80000000
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 2
#define _NETINET6_IN6_H_ 
#define JEMALLOC_VALGRIND_MALLOC(cond,tsdn,ptr,usize,zero) do {} while (0)
#define R_BIN_BIND_UNKNOWN_STR "UNKNOWN"
#define malloc_tsd_funcs(a_attr,a_name,a_type,a_initializer,a_cleanup) a_attr bool a_name ##tsd_boot0(void) { if (a_cleanup != malloc_tsd_no_cleanup) { if (pthread_key_create(&a_name ##tsd_tsd, a_cleanup) != 0) return (true); } a_name ##tsd_booted = true; return (false); } a_attr void a_name ##tsd_boot1(void) { } a_attr bool a_name ##tsd_boot(void) { return (a_name ##tsd_boot0()); } a_attr bool a_name ##tsd_booted_get(void) { return (a_name ##tsd_booted); } a_attr bool a_name ##tsd_get_allocates(void) { return (false); } a_attr a_type * a_name ##tsd_get(bool init) { assert(a_name ##tsd_booted); return (&a_name ##tsd_tls); } a_attr void a_name ##tsd_set(a_type *val) { assert(a_name ##tsd_booted); a_name ##tsd_tls = (*val); if (a_cleanup != malloc_tsd_no_cleanup) { if (pthread_setspecific(a_name ##tsd_tsd, (void *)(&a_name ##tsd_tls))) { malloc_write("<jemalloc>: Error" " setting TSD for "#a_name"\n"); if (opt_abort) abort(); } } }
#define DW_OP_reg9 0x59
#define CRPRNT CREPRINT
#define IPPROTO_AH 51
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define prof_tdata_reinit JEMALLOC_N(prof_tdata_reinit)
#define rtree_subtree_tryread JEMALLOC_N(rtree_subtree_tryread)
#define R_SYS_BITS_64 8
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define DW_VIRTUALITY_pure_virtual 0x02
#define _WCHAR_T 
#define O_NONBLOCK 0x00000004
#define SCNiPTR "li"
#define DW_LANG_C11 0x001d
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define R_VLOG(lvl,tag,fmtstr,args) r_vlog (MACRO_LOG_FUNC, __FILE__, __LINE__, lvl, tag, fmtstr, args);
#define R_BIN_MAX_ARCH 1024
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define WAKEMON_MAKE_FATAL 0x10
#define R_EMPTY2 {{ 0 }}
#define TCSADRAIN 1
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define WITNESS_RANK_PROF_NEXT_THR_UID WITNESS_RANK_LEAF
#define JEMALLOC_FREE_JUNK ((uint8_t)0x5a)
#define SDB_NUM_BASE 16
#define arena_postfork_parent JEMALLOC_N(arena_postfork_parent)
#define R_W32_H 
#define R_PRINT_FLAGS_COMPACT 0x00000800
#define _SYS_SELECT_H_ 
#define r_oflist_destroy(x) r_oflist_deserialize (x)
#define SIZE_MAX UINTPTR_MAX
#define IP_MAX_GROUP_SRC_FILTER 512
#define PRIO_DARWIN_THREAD 3
#define r_io_map_set_begin(map,new_addr) do { map->itv.addr = new_addr; } while (0)
#define PRIiLEAST32 PRIi32
#define ASN1_JSON_EMPTY "{}"
#define FMTdPTR PRIdPTR
#define _SECURE__COMMON_H_ 
#define IPV6_FW_DEL 31
#define ST8_SUB_OVFCHK(a,b) ST8_ADD_OVFCHK(a,-(b))
#define SIOCGHIWAT _IOR('s', 1, int)
#define R_REGEX_ECOLLATE 3
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define __VERSION__ "11.2.0"
#define tsdn_fetch JEMALLOC_N(tsdn_fetch)
#define PF_UNSPEC AF_UNSPEC
#define PT_THUPDATE 13
#define UINT64_C(v) (v ## ULL)
#define IPCTL_MAXID 17
#define R_SYS_DEVNULL "/dev/null"
#define __IPHONE_2_0 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __LDBL_MIN_10_EXP__ (-4931)
#define R_BIN_BIND_LOOS_STR "LOOS"
#define TCPOLEN_TIMESTAMP 10
#define tsd_cleanup JEMALLOC_N(tsd_cleanup)
#define R_MIN(x,y) (((x)>(y))?(y):(x))
#define JEMALLOC_H_ 
#define R_CRYPTO_ROL 1ULL<<7
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define SO_NKE 0x1021
#define IP_DUMMYNET_DEL 61
#define R_BIN_REQ_PACKAGE 0x1000000
#define JEMALLOC_HAS_RESTRICT 1
#define prng_state_next_u64 JEMALLOC_N(prng_state_next_u64)
#define __SOPT 0x0400
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define IPPORT_RESERVEDSTART 600
#define S_IWUSR 0000200
#define PRIiFAST8 PRIi8
#define CONNECT_DATA_AUTHENTICATED 0x4
#define IPPROTO_IGMP 2
#define R_ASM_ARCH_SPARC R_SYS_ARCH_SPARC
#define SCNoLEAST8 SCNo8
#define TAG_NUMERICSTRING 0x12
#define PRIiLEAST64 PRIi64
#define SIOCATMARK _IOR('s', 7, int)
#define KEV_DL_SIFFLAGS 1
#define POLLNVAL 0x0020
#define RTLD_NEXT ((void *) -1)
#define DW_AT_call_data_value 0x86
#define __GXX_ABI_VERSION 1016
#define UT32_HI(x) ((ut32)(((ut64)(x))>>32)&UT32_MAX)
#define R_CONS_KEY_F3 0xf3
#define R_CONS_KEY_F8 0xf8
#define R_CONS_KEY_F9 0xf9
#define xmallctl(name,oldp,oldlenp,newp,newlen) do { if (je_mallctl(name, oldp, oldlenp, newp, newlen) != 0) { malloc_printf( "<jemalloc>: Failure in xmallctl(\"%s\", ...)\n", name); abort(); } } while (0)
#define opt_zero JEMALLOC_N(opt_zero)
#define _SC_PAGESIZE 29
#define je_dallocx dallocx
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define IP_MIN_MEMBERSHIPS 31
#define ECHOE 0x00000002
#define INADDR_ANY (u_int32_t)0x00000000
#define ECHOK 0x00000004
#define MADV_RANDOM POSIX_MADV_RANDOM
#define R_CRYPTO_RC2 1ULL
#define R_PRINT_FLAGS_ADDRDEC 0x00000200
#define DW_OP_breg23 0x87
#define extent_node_size_get JEMALLOC_N(extent_node_size_get)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define base_alloc JEMALLOC_N(base_alloc)
#define DW_AT_encoding 0x3e
#define phn_prev_set(a_type,a_field,a_phn,a_prev) do { a_phn->a_field.phn_prev = a_prev; } while (0)
#define _PC_LINK_MAX 1
#define TH_ACK 0x10
#define DW_LANG_C89 0x0001
#define ITIMER_REAL 0
#define _BSD_I386__TYPES_H_ 
#define DW_ID_case_sensitive 0x00
#define R_ANAL_ADDR_TYPE_FUNC 1 << 4
#define IPPROTO_IL 40
#define B134 134
#define buffer_PUTC(s,c) ( ((s)->n != (s)->p) ? ( (s)->x[(s)->p++] = (c), 0 ) : buffer_put((s),&(c),1) )
#define IPPROTO_IP 0
#define UINT32_MAX 4294967295U
#define _POSIX_SHELL 200112L
#define WNOHANG 0x00000001
#define _BSD_MACHINE__TYPES_H_ 
#define malloc_mutex_assert_not_owner JEMALLOC_N(malloc_mutex_assert_not_owner)
#define _XOPEN_SHM (1)
#define R_ANAL_THRESHOLDBB 0.7F
#define DW_LANG_C99 0x000c
#define PF_IPX AF_IPX
#define tcache_enabled_get JEMALLOC_N(tcache_enabled_get)
#define TIOCMODG _IOR('t', 3, int)
#define SEGV_ACCERR 2
#define TIOCMODS _IOW('t', 4, int)
#define R_CORE_BIN_ACC_RELOCS 0x010
#define __PTRDIFF_T 
#define __packed __attribute__((__packed__))
#define R_EGG_OS_DEFAULT R_EGG_OS_OSX
#define IPCTL_SENDREDIRECTS 2
#define __PTHREAD_CONDATTR_SIZE__ 8
#define EREMOTE 71
#define UT32_LO(x) ((ut32)((x)&UT32_MAX))
#define je_malloc_stats_print malloc_stats_print
#define MCL_FUTURE 0x0002
#define B150 150
#define _POSIX_ADVISORY_INFO (-1)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define F_GETFL 3
#define PURGE_DEFAULT purge_mode_ratio
#define arena_choose JEMALLOC_N(arena_choose)
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define IPPROTO_WBMON 78
#define CHAR_COMPACT_BLANK 'B'
#define extent_tree_ad_reverse_iter JEMALLOC_N(extent_tree_ad_reverse_iter)
#define _POSIX2_FORT_RUN 200112L
#define UT8_MIN 0x00U
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define __DBL_DECIMAL_DIG__ 17
#define S_IRWXG 0000070
#define TAG_OBJDESCRIPTOR 0x07
#define R_BIN_REQ_EXPORTS 0x400000
#define KEV_DL_IFDELEGATE_CHANGED 25
#define SDB_MAX_KEY 0xff
#define r_io_map_from r_io_map_begin
#define CLASS_CONTEXT 0x80
#define R_CONS_KEY_F11 0xfb
#define TIOCPKT_DOSTOP 0x20
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define R_CACHE_H 
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define R_TH_FUNCTION(x) RThreadFunctionRet (*x)(struct r_th_t *)
#define PF_ISO AF_ISO
#define EADDRINUSE 48
#define _VA_LIST 
#define DW_FORM_udata 0x0f
#define atomic_sub_uint64 JEMALLOC_N(atomic_sub_uint64)
#define R_BIN_REQ_ALL UT64_MAX
#define fileno_unlocked(p) __sfileno(p)
#define R_BASE64_H 
#define R_STRBUF_SAFEGET(sb) (r_strbuf_get (sb) ? r_strbuf_get (sb) : "")
#define rb_proto(a_attr,a_prefix,a_rbt_type,a_type) a_attr void a_prefix ##new(a_rbt_type *rbtree); a_attr bool a_prefix ##empty(a_rbt_type *rbtree); a_attr a_type * a_prefix ##first(a_rbt_type *rbtree); a_attr a_type * a_prefix ##last(a_rbt_type *rbtree); a_attr a_type * a_prefix ##next(a_rbt_type *rbtree, a_type *node); a_attr a_type * a_prefix ##prev(a_rbt_type *rbtree, a_type *node); a_attr a_type * a_prefix ##search(a_rbt_type *rbtree, const a_type *key); a_attr a_type * a_prefix ##nsearch(a_rbt_type *rbtree, const a_type *key); a_attr a_type * a_prefix ##psearch(a_rbt_type *rbtree, const a_type *key); a_attr void a_prefix ##insert(a_rbt_type *rbtree, a_type *node); a_attr void a_prefix ##remove(a_rbt_type *rbtree, a_type *node); a_attr a_type * a_prefix ##iter(a_rbt_type *rbtree, a_type *start, a_type *(*cb)( a_rbt_type *, a_type *, void *), void *arg); a_attr a_type * a_prefix ##reverse_iter(a_rbt_type *rbtree, a_type *start, a_type *(*cb)(a_rbt_type *, a_type *, void *), void *arg); a_attr void a_prefix ##destroy(a_rbt_type *rbtree, void (*cb)(a_type *, void *), void *arg);
#define PRIx16 "hx"
#define IN_CLASSA_NSHIFT 24
#define TCPOLEN_WINDOW 3
#define UF_SETTABLE 0x0000ffff
#define __OSX_AVAILABLE(_vers) 
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define USE_PTRACE_WRAP 0
#define IPPROTO_ND 77
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define NI_NUMERICSCOPE 0x00000100
#define __ILP32_OFFBIG (-1)
#define DW_LNS_set_basic_block 0x07
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define PRIuFAST64 PRIu64
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __SIZEOF_POINTER__ 8
#define STRING_IGNORE_CASE (STRING_IGNORE_LOWERCASE|STRING_IGNORE_UPPERCASE)
#define _PTHREAD_QOS_H 
#define DW_LNS_advance_line 0x03
#define R_GRAPH_FORMAT_GMLFCN 1
#define R_PRINT_FLAGS_SPARSE 0x00000010
#define __not_tail_called 
#define tsd_iarena_set JEMALLOC_N(tsd_iarena_set)
#define R_CRYPTO_BLOWFISH 1ULL<<9
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define UNUSED __attribute__((__unused__))
#define PRIx32 "x"
#define MAKE_ENUM(OP) REIL_ ##OP,
#define IP_OLD_FW_GET 54
#define R_MAGIC_DEVICES 0x000008
#define R_SEARCH_KEYWORD_TYPE_BINARY 'i'
#define R_ASM_ARCH_Z80 R_SYS_ARCH_Z80
#define SCNu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define ST32_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST32_MAX - (x))) || (((x) < 0) && (a) < ST32_MIN - (x)))
#define IPV6_MULTICAST_IF 9
#define RColor_BGCYAN RCOLOR(ALPHA_BG, 58, 150, 221, 0x00, 0x00, 0x00, 6)
#define R_CONS_KEY_F4 0xf4
#define FILE_REGEX 17
#define R_HASH_CRC32_MPEG2 (1ULL << R_HASH_IDX_CRC32_MPEG2)
#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO 0x1005
#define R_PRINT_STRING_WIDE 1
#define je_calloc calloc
#define F_TRIM_ACTIVE_FILE 100
#define R_MAGIC_DEBUG 0x000001
#define UQUAD_MAX ULLONG_MAX
#define F_GETLK 7
#define nstime_add JEMALLOC_N(nstime_add)
#define RUNECODESTR_MIN 0xc8
#define SIGTRAP 5
#define EISDIR 21
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define __nonnull 
#define witnesses_cleanup JEMALLOC_N(witnesses_cleanup)
#define PGOFSET (NBPG-1)
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define KEV_DL_LINK_ON 13
#define IGNPAR 0x00000004
#define PRIx64 __PRI_64_LENGTH_MODIFIER__ "x"
#define UT64_16U 0xFFFFFFFFFFFF0000ULL
#define O_DSYNC 0x400000
#define MAP_ANONYMOUS MAP_ANON
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define R_CORE_BIN_ACC_HASHES 0x10000000
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define NL_ARGMAX 9
#define ut8p_b(x) ((x)[0])
#define INT_LEAST8_MAX INT8_MAX
#define arena_run_to_miscelm JEMALLOC_N(arena_run_to_miscelm)
#define TAG_BITSTRING 0x03
#define DW_DS_leading_overpunch 0x02
#define bitmap_full JEMALLOC_N(bitmap_full)
#define TAG_T61STRING 0x14
#define prof_gdump_get_unlocked JEMALLOC_N(prof_gdump_get_unlocked)
#define VSUSP 10
#define __WATCHOS_4_1 40100
#define prof_tdata_cleanup JEMALLOC_N(prof_tdata_cleanup)
#define MAP_NORESERVE 0x0040
#define DW_AT_noreturn 0x87
#define TCPOPT_EOL 0
#define AI_UNUSABLE 0x10000000
#define __FLT64_MIN_10_EXP__ (-307)
#define R2_CORE_H 
#define TARGET_OS_IPHONE 0
#define IPPROTO_TP 29
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define __has_extension(x) 0
#define R_BITMAP_H 
#define R_TREE_H 
#define SOCK_RAW 3
#define DW_END_default 0x00
#define DW_FORM_ref4 0x13
#define BUFFER_OUTSIZE 8192
#define R_BIN_REQ_MAIN 0x000800
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define JEMALLOC_VALGRIND_FREE(ptr,rzsize) do {} while (0)
#define arena_salloc JEMALLOC_N(arena_salloc)
#define __FLT64X_DECIMAL_DIG__ 21
#define R_BIN_METH_SYNCHRONIZED 0x0000000000002000L
#define R_UTF8_POLICE_CARS_REVOLVING_LIGHT "🚨"
#define DEV_BSHIFT 9
#define prof_dump_header JEMALLOC_N(prof_dump_header)
#define R2_TYPES_BASE_H 
#define prof_mdump JEMALLOC_N(prof_mdump)
#define __API_AVAILABLE_END 
#define DW_AT_GNU_ranges_base 0x2132
#define __DBL_HAS_DENORM__ 1
#define R_SYS_DIR "/"
#define INT_LEAST32_MAX INT32_MAX
#define _NET_NETKEV_H_ 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define GETSIGSINFO_PLATFORM_BINARY 1
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define R_SIGN_TYPEMAX 16
#define FPE_FLTSUB 6
#define SCNoFAST8 SCNo8
#define R_BIN_DBG_SYMS 0x08
#define R_REG_COND_LAST 13
#define DOT_STYLE_BACKEDGE 2
#define IPV6CTL_MAXFRAGPACKETS 9
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define IPV6CTL_SENDREDIRECTS 2
#define CHAR_BIT __CHAR_BIT__
#define PARMRK 0x00000008
#define __OS_AVAILABILITY(_target,_availability) 
#define R_BIN_DWARF_INFO_HEADER_FILE_LENGTH(x) (sizeof (x->file)/sizeof(*(x->file)))
#define arena_decay_time_get JEMALLOC_N(arena_decay_time_get)
#define R_BIG_WORD_SIZE 4
#define DW_FORM_exprloc 0x18
#define chunk_alloc_mmap JEMALLOC_N(chunk_alloc_mmap)
#define DW_OP_ge 0x2a
#define HUGE_VAL __builtin_huge_val()
#define R_CONS_KEY_F1 0xf1
#define DW_OP_gt 0x2b
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define IPV6CTL_HDRNESTLIMIT 15
#define IP_FW_RESETLOG 45
#define _SC_BC_BASE_MAX 9
#define chunk_alloc_wrapper JEMALLOC_N(chunk_alloc_wrapper)
#define MSG_CTRUNC 0x20
#define R_CONS_KEY_F2 0xf2
#define R_CORE_BIN_ACC_ENTRIES 0x008
#define extent_tree_szsnad_destroy JEMALLOC_N(extent_tree_szsnad_destroy)
#define WITNESS_RANK_ARENA_CHUNKS 10U
#define SDB_OPTION_FS (1 << 2)
#define SF_SUPPORTED 0x009f0000
#define __NO_INLINE__ 1
#define opt_narenas JEMALLOC_N(opt_narenas)
#define Color_BBGMAGENTA "\x1b[105m"
#define arena_mapbitsp_write JEMALLOC_N(arena_mapbitsp_write)
#define WANT_DYLINK 1
#define DW_CC_hi_user 0xff
#define CORNER_BR 4
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define ipalloct JEMALLOC_N(ipalloct)
#define Color_BWHITE "\x1b[97m"
#define _WRITE_OK (1<<10)
#define R_HASH_SIZE_MD4 16
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define R_HASH_SIZE_MD5 16
#define KZI(z) ZI(z ##LL)
#define R_BIN_REQ_PDB 0x080000
#define R_CONS_KEY_F5 0xf5
#define IPCTL_STATS 12
#define R_DEFAULT_LOGLVL R_LOGLVL_WARN
#define stoc(x) (x)
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define R_HASH_SIZE_CRC24 3
#define IP_PKTINFO 26
#define ls_head(x) x->head
#define R_CONS_KEY_F6 0xf6
#define __enum_options 
#define R_HASH_CRC16_HDLC (1ULL << R_HASH_IDX_CRC16_HDLC)
#define FSCALE (1<<FSHIFT)
#define MAX_CANON 1024
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define INT_LEAST8_MIN INT8_MIN
#define R_CONS_KEY_F7 0xf7
#define r_flist_iterator(x) x
#define errno (*__error())
#define _SC_TRACE_NAME_MAX 128
#define DW_TAG_lexical_block 0x0b
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __MAC_10_11 101100
#define sdb_aforeach(x,y) { char *next; if (y) for (x=y;;) { x = sdb_anext (x, &next);
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define RTLD_MAIN_ONLY ((void *) -5)
#define PF_SYSTEM AF_SYSTEM
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define LOP_SPECIAL 4
#define ph_merge_aux(a_type,a_field,a_ph,a_cmp) do { a_type *phn = phn_next_get(a_type, a_field, a_ph->ph_root); if (phn != NULL) { phn_prev_set(a_type, a_field, a_ph->ph_root, NULL); phn_next_set(a_type, a_field, a_ph->ph_root, NULL); phn_prev_set(a_type, a_field, phn, NULL); ph_merge_siblings(a_type, a_field, phn, a_cmp, phn); assert(phn_next_get(a_type, a_field, phn) == NULL); phn_merge(a_type, a_field, a_ph->ph_root, phn, a_cmp, a_ph->ph_root); } } while (0)
#define prof_realloc JEMALLOC_N(prof_realloc)
#define R_PRINT_JSON_DEPTH_LIMIT 128
#define STRING_IGNORE_LOWERCASE BIT(2)
#define SO_KEEPALIVE 0x0008
#define __DBL_MANT_DIG__ 53
#define R_HASH_MD4 (1ULL << R_HASH_IDX_MD4)
#define R_HASH_MD5 (1ULL << R_HASH_IDX_MD5)
#define R2_ANAL_H 
#define DW_AT_hi_user 0x3fff
#define _PC_CASE_SENSITIVE 11
#define huge_dalloc JEMALLOC_N(huge_dalloc)
#define DW_OP_le 0x2c
#define r_skiplist_islast(list,el) (el->forward[0] == list->head)
#define CHAR_IGNORE_LOWERCASE 'c'
#define _SOCKLEN_T 
#define BADSIG SIG_ERR
#define JSONOUTPUT -3
#define _FSFILCNT_T 
#define B115200 115200
#define SV_RESETHAND SA_RESETHAND
#define ctos(x) (x)
#define MINCORE_MODIFIED_OTHER 0x10
#define R_CORE_BIN_ACC_MAIN 0x004
#define KEV_DL_AWDL_RESTRICTED 26
#define DST_EET 5
#define huge_malloc JEMALLOC_N(huge_malloc)
#define _IN_PORT_T 
#define CERASE 0177
#define prof_dump_open JEMALLOC_N(prof_dump_open)
#define _NETINET_TCP_H_ 
#define SIZEOF_PTR (1U << LG_SIZEOF_PTR)
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define DW_OP_ne 0x2e
#define JEMALLOC_HAVE_PTHREAD_ATFORK 
#define HUGE MAXFLOAT
#define SCNi32 "i"
#define rbtn_red_set(a_type,a_field,a_node) do { (a_node)->a_field.rbn_right_red = (a_type *) (((uintptr_t) (a_node)->a_field.rbn_right_red) | ((size_t)1)); } while (0)
#define DW_CFA_offset 0x80
#define RColor_RED RCOLOR(ALPHA_FG, 197, 15, 31, 0x00, 0x00, 0x00, 1)
#define SDB_LIST_UNSORTED 0
#define ECHO 0x00000008
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define st_mtime st_mtimespec.tv_sec
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define sigfillset(set) (*(set) = ~(sigset_t)0, 0)
#define FILE_LEDATE 12
#define R_BIN_ENTRY_TYPE_TLS 4
#define LINE_MAX 2048
#define DW_OP_or 0x21
#define __STRING(x) #x
#define SO_OOBINLINE 0x0100
#define NGROUPS_MAX 16
#define R_BIN_REQ_DLOPEN 0x200000
#define SIGVTALRM 26
#define FMTd64 PRId64
#define R_BIN_TYPE_COMMON_STR "COMMON"
#define nhclasses JEMALLOC_N(nhclasses)
#define TCP_MAX_SACK 4
#define ls_iterator(x) (x)?(x)->head:NULL
#define R_PRINT_FLAGS_SEGOFF 0x00000020
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define malloc_mutex_postfork_parent JEMALLOC_N(malloc_mutex_postfork_parent)
#define JEMALLOC_HAVE_MADVISE 
#define FILE_LOAD 0
#define RLIMIT_CPU 0
#define B110 110
#define prof_backtrace JEMALLOC_N(prof_backtrace)
#define IPPROTO_AX25 93
#define tsd_iarenap_get JEMALLOC_N(tsd_iarenap_get)
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define R_PRINT_FLAGS_STYLE 0x00010000
#define R_ASM_ARCH_HPPA R_SYS_ARCH_HPPA
#define LIBC_HAVE_FORK 1
#define PSOCK 24
#define F_SETLKWTIMEOUT 10
#define SCNi64 __SCN_64_LENGTH_MODIFIER__ "i"
#define ncpus JEMALLOC_N(ncpus)
#define F_ULOCK 0
#define SI_ASYNCIO 0x10004
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define ABBREV_DECL_CAP 8
#define R_CORE_BIN_ACC_HEADER 0x80000
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define DW_TAG_reference_type 0x10
#define _SC_TRACE 97
#define R_CORE_PRJ_META 0x0010
#define __LDBL_DECIMAL_DIG__ 21
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define arena_chunk_ralloc_huge_expand JEMALLOC_N(arena_chunk_ralloc_huge_expand)
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define _SC_FSYNC 38
#define R_LIB_SEPARATOR "."
#define __API_DEPRECATED(...) 
#define R_BIN_TYPE_LOOS_STR "LOOS"
#define PROT_EXEC 0x04
#define __MAC_10_12_2 101202
#define FPE_INTOVF 8
#define F_ADDFILESIGS_INFO 103
#define chunk_dss_boot JEMALLOC_N(chunk_dss_boot)
#define TIOCPKT_START 0x08
#define DW_TAG_template_alias 0x43
#define DW_AT_priority 0x45
#define _OFF_T 
#define __SDB_WINDOWS__ 0
#define RUNECODESTR_ARROW_LEFT "\xcd"
#define clearerr_unlocked(p) __sclearerr(p)
#define ckh_string_hash JEMALLOC_N(ckh_string_hash)
#define KEV_DL_NODE_PRESENCE 21
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 81
#define JEMALLOC_N(n) je_ ##n
#define ql_after_insert(a_qlelm,a_elm,a_field) qr_after_insert((a_qlelm), (a_elm), a_field)
#define SIOCGPGRP _IOR('s', 9, int)
#define PFMT64o "llo"
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define PFMT64x "llx"
#define huge_prof_tctx_set JEMALLOC_N(huge_prof_tctx_set)
#define WITNESS_RANK_ARENA 9U
#define IP_MAX_SOCK_SRC_FILTER 128
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define arena_chunk_ralloc_huge_similar JEMALLOC_N(arena_chunk_ralloc_huge_similar)
#define ST64_SUB_OVFCHK(a,b) ST64_ADD_OVFCHK(a,-(b))
#define TIOCUCNTL _IOW('t', 102, int)
#define _SC_2_LOCALEDEF 23
#define PROF_PRINTF_BUFSIZE 128
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define R2_LIB_H 
#define LOOKUP_MAXCLASS ((((size_t)1) << 11) + (((size_t)4) << 9))
#define R_BETWEEN(x,y,z) (((y)>=(x)) && ((y)<=(z)))
#define F_FREEZE_FS 53
#define SSIZE_MAX LONG_MAX
#define arena_mapbits_large_binind_set JEMALLOC_N(arena_mapbits_large_binind_set)
#define arena_boot JEMALLOC_N(arena_boot)
#define arena_quarantine_junk_small JEMALLOC_N(arena_quarantine_junk_small)
#define Color_GRAY "\x1b[90m"
#define __FBSDID(s) 
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define BRAILE_TRI $00+$01+$11+$21+$30+$31
#define R_CONS_CLEAR_LINE "\x1b[2K\r"
#define FUNC_ATTR_USED __attribute__((used))
#define ST64_MAX ((st64)0x7FFFFFFFFFFFFFFFULL)
#define CMIN 1
#define prof_thread_active_init_set JEMALLOC_N(prof_thread_active_init_set)
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define R_TYPES_OVERFLOW_H 
#define AT_FDCWD -2
#define MAXFLOAT 0x1.fffffep+127f
#define LG_SIZEOF_LONG 3
#define extent_tree_szsnad_iter_start JEMALLOC_N(extent_tree_szsnad_iter_start)
#define DW_AT_stride_size 0x2e
#define _SC_MQ_PRIO_MAX 75
#define R_BIN_TYPE_NOTYPE_STR "NOTYPE"
#define DW_TAG_class_type 0x02
#define INT32_MAX 2147483647
#define RTR_PROTOCOL_UNIX 4
#define R_BIN_METH_CLASS 0x0000000000000001L
#define FIOSETOWN _IOW('f', 124, int)
#define JEMALLOC_VERSION "4.5.0-0-g04380e79f1e2428bd0ad000bbc6e3d2dfc6b66a5"
#define UT16_MAX 0xFFFFU
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define DW_AT_import 0x18
#define R_JOIN_3_PATHS(p1,p2,p3) p1 R_SYS_DIR p2 R_SYS_DIR p3
#define RColor_NULL RCOLOR(0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, -1)
#define HAVE_EXPLICIT_MEMSET 0
#define tsd_thread_allocated_set JEMALLOC_N(tsd_thread_allocated_set)
#define _PATH_PROTOCOLS "/etc/protocols"
#define R2_UTIL_H 
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define _ARPA_INET_H_ 
#define PRIO_DARWIN_BG 0x1000
#define NI_MAXHOST 1025
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define R_CRYPTO_NONE 0ULL
#define PF_XTP pseudo_AF_XTP
#define CHECK_POINT_LIMIT 0x100000
#define DW_AT_calling_convention 0x36
#define DW_MACINFO_undef 0x02
#define MAP_RESERVED0080 0x0080
#define _POSIX2_EQUIV_CLASS_MAX 2
#define r_io_submap_overlap(bd,sm) r_itv_overlap(bd->itv, sm->itv)
#define FILE_OPMULTIPLY 5
#define __SALC 0x4000
#define IP_IPSEC_POLICY 21
#define witness_not_owner_error JEMALLOC_N(witness_not_owner_error)
#define MAC_OS_X_VERSION_10_15_1 101501
#define _SC_READER_WRITER_LOCKS 76
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")
#define JEMALLOC_HAVE_ATTR 
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define ql_elm_new(a_elm,a_field) qr_new((a_elm), a_field)
#define SCNiLEAST8 SCNi8
#define MINCORE_COPIED 0x40
#define R2_BIN_H 
#define PTRDIFF_MIN INTMAX_MIN
#define nstime_monotonic JEMALLOC_N(nstime_monotonic)
#define TH_PUSH 0x08
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define _POSIX_OPEN_MAX 20
#define MAC_OS_VERSION_11_0 110000
#define JEMALLOC_USE_CXX_THROW 
#define prof_postfork_parent JEMALLOC_N(prof_postfork_parent)
#define IP_ADD_MEMBERSHIP 12
#define F_NODIRECT 62
#define R_FLAGS_FS_STRINGS "strings"
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define FILESEC_GUID FILESEC_UUID
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define cdb_datalen(c) ((c)->dlen)
#define DW_AT_MIPS_linkage_name 0x2007
#define NET_RT_DUMP2 7
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define r_oflist_prepend(x,y) r_oflist_deserialize (x), r_list_prepend (x, y)
#define R_TIME_PROFILE_END do{}while(0)
#define TTYDEF_OFLAG (OPOST | ONLCR)
#define _SC_MESSAGE_PASSING 33
#define IOPOL_STANDARD 5
#define LOCAL_PEEREUUID 0x005
#define tcache_create JEMALLOC_N(tcache_create)
#define __INT_FAST32_TYPE__ int
#define R_BIN_METH_PUBLIC 0x0000000000000004L
#define R_AGRAPH_MODE_NORMAL 0
#define getc_unlocked(fp) __sgetc(fp)
#define _SYS_TTYDEFAULTS_H_ 
#define IN_CLASSD_HOST 0x0fffffff
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define tsd_arena_get JEMALLOC_N(tsd_arena_get)
#define CQUIT 034
#define BUFFER_INIT(op,fd,buf,len) { (buf), 0, (len), (fd), (op) }
#define TCPOPT_SIGNATURE 19
#define DW_TAG_formal_parameter 0x05
#define R_FUNCTION ((const char*) (__func__))
#define R_CORE_LOADLIBS_SYSTEM 4
#define RColor_BBGCYAN RCOLOR(ALPHA_BG, 97, 214, 214, 0x00, 0x00, 0x00, 14)
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define r_oflist_delete(x,y) r_oflist_deserialize (x), r_list_delete (x, y)
#define COND_IF 1
#define LOCAL_PEERTOKEN 0x006
#define FILE_BELDATE 15
#define SIG_DFL (void (*)(int))0
#define tcache_get_hard JEMALLOC_N(tcache_get_hard)
#define JEMALLOC_INLINE static inline
#define SIG_ATOMIC_MIN INT32_MIN
#define F_OK 0
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define _PC_PATH_MAX 5
#define __SAPP 0x0100
#define R_REGEX_ASSERT 15
#define R2_SEARCH_H 
#define _GCC_PTRDIFF_T 
#define _KEY_T 
#define NGROUPS NGROUPS_MAX
#define base_postfork_child JEMALLOC_N(base_postfork_child)
#define R_REGEX_BADPAT 2
#define _INT64_T 
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define TIOCDRAIN _IO('t', 94)
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define get_errno JEMALLOC_N(get_errno)
#define _POSIX_MAX_INPUT 255
#define r_vector_lower_bound(vec,x,i,cmp) do { size_t h = (vec)->len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp (x, ((char *)(vec)->a + (vec)->elem_size * m))) > 0) { i = m + 1; } else { h = m; } } } while (0)
#define ST64_MIN ((st64)(-ST64_MAX-1))
#define _STDARG_H 
#define R2_ETCDIR "/etc"
#define RColor_BGBLUE RCOLOR(ALPHA_BG, 0, 55, 218, 0x00, 0x00, 0x00, 4)
#define tsd_boot JEMALLOC_N(tsd_boot)
#define ESHUTDOWN 58
#define DW_CFA_offset_extended_sf 0x11
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define _SC_TIMER_MAX 52
#define DW_AT_signature 0x69
#define R2_TYPES_H 
#define JEMALLOC_FILL 
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define UT16_MIN 0U
#define JEMALLOC_CXX_THROW 
#define SDB_MAX_VALUE 0xffffff
#define __enum_closed 
#define DW_CC_normal 0x01
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200112L
#define ql_head_insert(a_head,a_elm,a_field) do { if (ql_first(a_head) != NULL) { qr_before_insert(ql_first(a_head), (a_elm), a_field); } ql_first(a_head) = (a_elm); } while (0)
#define _PC_NO_TRUNC 8
#define F_SETOWN 6
#define DW_TAG_restrict_type 0x37
#define F_PREALLOCATE 42
#define TAG_OID 0x06
#define __CTYPE_H_ 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT8_TYPE__ signed char
#define hash_x64_128 JEMALLOC_N(hash_x64_128)
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define NSIZES 232
#define AF_DLI 13
#define UT16_ADD_OVFCHK(x,y) ((UT16_MAX - (x)) < (y))
#define tsd_init_head JEMALLOC_N(tsd_init_head)
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define R_ANAL_ARCHINFO_DATA_ALIGN 8
#define R_CORE_BIN_ACC_SYMBOLS 0x040
#define DW_LANG_Swift 0x001e
#define TTYDISC 0
#define _UINTMAX_T 
#define prof_active_set JEMALLOC_N(prof_active_set)
#define arena_mapbits_unallocated_size_get JEMALLOC_N(arena_mapbits_unallocated_size_get)
#define EPWROFF 82
#define TCPOLEN_MAXSEG 4
#define DW_CFA_restore_state 0x0b
#define ALIGNMENT_CEILING(s,alignment) (((s) + (alignment - 1)) & ((~(alignment)) + 1))
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define M_LOG2E 1.44269504088896340735992468100189214
#define ckh_count JEMALLOC_N(ckh_count)
#define DW_AT_defaulted 0x8b
#define pseudo_AF_KEY 29
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define CLNEXT CTRL('v')
#define DW_TAG_unspecified_parameters 0x18
#define R_HASH_SHA1 (1ULL << R_HASH_IDX_SHA1)
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define R2_AGRAPH_H 
#define HUGE_VALF __builtin_huge_valf()
#define RColor_BGMAGENTA RCOLOR(ALPHA_BG, 136, 23, 152, 0x00, 0x00, 0x00, 5)
#define __FLT128_DECIMAL_DIG__ 36
#define PRIxMAX __PRI_MAX_LENGTH_MODIFIER__ "x"
#define _MACH_PORT_T 
#define tsd_tls JEMALLOC_N(tsd_tls)
#define CSIZE 0x00000300
#define R_CORE_ASMQJMPS_LEN_LETTERS 5
#define KEV_DL_IFCAP_CHANGED 19
#define tcp6hdr tcphdr
#define F_TLOCK 2
#define OCRNL 0x00000010
#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x
#define LG_TINY_MIN 3
#define rb_gen(a_attr,a_prefix,a_rbt_type,a_type,a_field,a_cmp) a_attr void a_prefix ##new(a_rbt_type *rbtree) { rb_new(a_type, a_field, rbtree); } a_attr bool a_prefix ##empty(a_rbt_type *rbtree) { return (rbtree->rbt_root == NULL); } a_attr a_type * a_prefix ##first(a_rbt_type *rbtree) { a_type *ret; rbtn_first(a_type, a_field, rbtree, rbtree->rbt_root, ret); return (ret); } a_attr a_type * a_prefix ##last(a_rbt_type *rbtree) { a_type *ret; rbtn_last(a_type, a_field, rbtree, rbtree->rbt_root, ret); return (ret); } a_attr a_type * a_prefix ##next(a_rbt_type *rbtree, a_type *node) { a_type *ret; if (rbtn_right_get(a_type, a_field, node) != NULL) { rbtn_first(a_type, a_field, rbtree, rbtn_right_get(a_type, a_field, node), ret); } else { a_type *tnode = rbtree->rbt_root; assert(tnode != NULL); ret = NULL; while (true) { int cmp = (a_cmp)(node, tnode); if (cmp < 0) { ret = tnode; tnode = rbtn_left_get(a_type, a_field, tnode); } else if (cmp > 0) { tnode = rbtn_right_get(a_type, a_field, tnode); } else { break; } assert(tnode != NULL); } } return (ret); } a_attr a_type * a_prefix ##prev(a_rbt_type *rbtree, a_type *node) { a_type *ret; if (rbtn_left_get(a_type, a_field, node) != NULL) { rbtn_last(a_type, a_field, rbtree, rbtn_left_get(a_type, a_field, node), ret); } else { a_type *tnode = rbtree->rbt_root; assert(tnode != NULL); ret = NULL; while (true) { int cmp = (a_cmp)(node, tnode); if (cmp < 0) { tnode = rbtn_left_get(a_type, a_field, tnode); } else if (cmp > 0) { ret = tnode; tnode = rbtn_right_get(a_type, a_field, tnode); } else { break; } assert(tnode != NULL); } } return (ret); } a_attr a_type * a_prefix ##search(a_rbt_type *rbtree, const a_type *key) { a_type *ret; int cmp; ret = rbtree->rbt_root; while (ret != NULL && (cmp = (a_cmp)(key, ret)) != 0) { if (cmp < 0) { ret = rbtn_left_get(a_type, a_field, ret); } else { ret = rbtn_right_get(a_type, a_field, ret); } } return (ret); } a_attr a_type * a_prefix ##nsearch(a_rbt_type *rbtree, const a_type *key) { a_type *ret; a_type *tnode = rbtree->rbt_root; ret = NULL; while (tnode != NULL) { int cmp = (a_cmp)(key, tnode); if (cmp < 0) { ret = tnode; tnode = rbtn_left_get(a_type, a_field, tnode); } else if (cmp > 0) { tnode = rbtn_right_get(a_type, a_field, tnode); } else { ret = tnode; break; } } return (ret); } a_attr a_type * a_prefix ##psearch(a_rbt_type *rbtree, const a_type *key) { a_type *ret; a_type *tnode = rbtree->rbt_root; ret = NULL; while (tnode != NULL) { int cmp = (a_cmp)(key, tnode); if (cmp < 0) { tnode = rbtn_left_get(a_type, a_field, tnode); } else if (cmp > 0) { ret = tnode; tnode = rbtn_right_get(a_type, a_field, tnode); } else { ret = tnode; break; } } return (ret); } a_attr void a_prefix ##insert(a_rbt_type *rbtree, a_type *node) { struct { a_type *node; int cmp; } path[sizeof(void *) << 4], *pathp; rbt_node_new(a_type, a_field, rbtree, node); path->node = rbtree->rbt_root; for (pathp = path; pathp->node != NULL; pathp++) { int cmp = pathp->cmp = a_cmp(node, pathp->node); assert(cmp != 0); if (cmp < 0) { pathp[1].node = rbtn_left_get(a_type, a_field, pathp->node); } else { pathp[1].node = rbtn_right_get(a_type, a_field, pathp->node); } } pathp->node = node; for (pathp--; (uintptr_t)pathp >= (uintptr_t)path; pathp--) { a_type *cnode = pathp->node; if (pathp->cmp < 0) { a_type *left = pathp[1].node; rbtn_left_set(a_type, a_field, cnode, left); if (rbtn_red_get(a_type, a_field, left)) { a_type *leftleft = rbtn_left_get(a_type, a_field, left); if (leftleft != NULL && rbtn_red_get(a_type, a_field, leftleft)) { a_type *tnode; rbtn_black_set(a_type, a_field, leftleft); rbtn_rotate_right(a_type, a_field, cnode, tnode); cnode = tnode; } } else { return; } } else { a_type *right = pathp[1].node; rbtn_right_set(a_type, a_field, cnode, right); if (rbtn_red_get(a_type, a_field, right)) { a_type *left = rbtn_left_get(a_type, a_field, cnode); if (left != NULL && rbtn_red_get(a_type, a_field, left)) { rbtn_black_set(a_type, a_field, left); rbtn_black_set(a_type, a_field, right); rbtn_red_set(a_type, a_field, cnode); } else { a_type *tnode; bool tred = rbtn_red_get(a_type, a_field, cnode); rbtn_rotate_left(a_type, a_field, cnode, tnode); rbtn_color_set(a_type, a_field, tnode, tred); rbtn_red_set(a_type, a_field, cnode); cnode = tnode; } } else { return; } } pathp->node = cnode; } rbtree->rbt_root = path->node; rbtn_black_set(a_type, a_field, rbtree->rbt_root); } a_attr void a_prefix ##remove(a_rbt_type *rbtree, a_type *node) { struct { a_type *node; int cmp; } *pathp, *nodep, path[sizeof(void *) << 4]; nodep = NULL; path->node = rbtree->rbt_root; for (pathp = path; pathp->node != NULL; pathp++) { int cmp = pathp->cmp = a_cmp(node, pathp->node); if (cmp < 0) { pathp[1].node = rbtn_left_get(a_type, a_field, pathp->node); } else { pathp[1].node = rbtn_right_get(a_type, a_field, pathp->node); if (cmp == 0) { pathp->cmp = 1; nodep = pathp; for (pathp++; pathp->node != NULL; pathp++) { pathp->cmp = -1; pathp[1].node = rbtn_left_get(a_type, a_field, pathp->node); } break; } } } assert(nodep->node == node); pathp--; if (pathp->node != node) { bool tred = rbtn_red_get(a_type, a_field, pathp->node); rbtn_color_set(a_type, a_field, pathp->node, rbtn_red_get(a_type, a_field, node)); rbtn_left_set(a_type, a_field, pathp->node, rbtn_left_get(a_type, a_field, node)); rbtn_right_set(a_type, a_field, pathp->node, rbtn_right_get(a_type, a_field, node)); rbtn_color_set(a_type, a_field, node, tred); nodep->node = pathp->node; pathp->node = node; if (nodep == path) { rbtree->rbt_root = nodep->node; } else { if (nodep[-1].cmp < 0) { rbtn_left_set(a_type, a_field, nodep[-1].node, nodep->node); } else { rbtn_right_set(a_type, a_field, nodep[-1].node, nodep->node); } } } else { a_type *left = rbtn_left_get(a_type, a_field, node); if (left != NULL) { assert(!rbtn_red_get(a_type, a_field, node)); assert(rbtn_red_get(a_type, a_field, left)); rbtn_black_set(a_type, a_field, left); if (pathp == path) { rbtree->rbt_root = left; } else { if (pathp[-1].cmp < 0) { rbtn_left_set(a_type, a_field, pathp[-1].node, left); } else { rbtn_right_set(a_type, a_field, pathp[-1].node, left); } } return; } else if (pathp == path) { rbtree->rbt_root = NULL; return; } } if (rbtn_red_get(a_type, a_field, pathp->node)) { assert(pathp[-1].cmp < 0); rbtn_left_set(a_type, a_field, pathp[-1].node, NULL); return; } pathp->node = NULL; for (pathp--; (uintptr_t)pathp >= (uintptr_t)path; pathp--) { assert(pathp->cmp != 0); if (pathp->cmp < 0) { rbtn_left_set(a_type, a_field, pathp->node, pathp[1].node); if (rbtn_red_get(a_type, a_field, pathp->node)) { a_type *right = rbtn_right_get(a_type, a_field, pathp->node); a_type *rightleft = rbtn_left_get(a_type, a_field, right); a_type *tnode; if (rightleft != NULL && rbtn_red_get(a_type, a_field, rightleft)) { rbtn_black_set(a_type, a_field, pathp->node); rbtn_rotate_right(a_type, a_field, right, tnode); rbtn_right_set(a_type, a_field, pathp->node, tnode); rbtn_rotate_left(a_type, a_field, pathp->node, tnode); } else { rbtn_rotate_left(a_type, a_field, pathp->node, tnode); } assert((uintptr_t)pathp > (uintptr_t)path); if (pathp[-1].cmp < 0) { rbtn_left_set(a_type, a_field, pathp[-1].node, tnode); } else { rbtn_right_set(a_type, a_field, pathp[-1].node, tnode); } return; } else { a_type *right = rbtn_right_get(a_type, a_field, pathp->node); a_type *rightleft = rbtn_left_get(a_type, a_field, right); if (rightleft != NULL && rbtn_red_get(a_type, a_field, rightleft)) { a_type *tnode; rbtn_black_set(a_type, a_field, rightleft); rbtn_rotate_right(a_type, a_field, right, tnode); rbtn_right_set(a_type, a_field, pathp->node, tnode); rbtn_rotate_left(a_type, a_field, pathp->node, tnode); if (pathp == path) { rbtree->rbt_root = tnode; } else { if (pathp[-1].cmp < 0) { rbtn_left_set(a_type, a_field, pathp[-1].node, tnode); } else { rbtn_right_set(a_type, a_field, pathp[-1].node, tnode); } } return; } else { a_type *tnode; rbtn_red_set(a_type, a_field, pathp->node); rbtn_rotate_left(a_type, a_field, pathp->node, tnode); pathp->node = tnode; } } } else { a_type *left; rbtn_right_set(a_type, a_field, pathp->node, pathp[1].node); left = rbtn_left_get(a_type, a_field, pathp->node); if (rbtn_red_get(a_type, a_field, left)) { a_type *tnode; a_type *leftright = rbtn_right_get(a_type, a_field, left); a_type *leftrightleft = rbtn_left_get(a_type, a_field, leftright); if (leftrightleft != NULL && rbtn_red_get(a_type, a_field, leftrightleft)) { a_type *unode; rbtn_black_set(a_type, a_field, leftrightleft); rbtn_rotate_right(a_type, a_field, pathp->node, unode); rbtn_rotate_right(a_type, a_field, pathp->node, tnode); rbtn_right_set(a_type, a_field, unode, tnode); rbtn_rotate_left(a_type, a_field, unode, tnode); } else { assert(leftright != NULL); rbtn_red_set(a_type, a_field, leftright); rbtn_rotate_right(a_type, a_field, pathp->node, tnode); rbtn_black_set(a_type, a_field, tnode); } if (pathp == path) { rbtree->rbt_root = tnode; } else { if (pathp[-1].cmp < 0) { rbtn_left_set(a_type, a_field, pathp[-1].node, tnode); } else { rbtn_right_set(a_type, a_field, pathp[-1].node, tnode); } } return; } else if (rbtn_red_get(a_type, a_field, pathp->node)) { a_type *leftleft = rbtn_left_get(a_type, a_field, left); if (leftleft != NULL && rbtn_red_get(a_type, a_field, leftleft)) { a_type *tnode; rbtn_black_set(a_type, a_field, pathp->node); rbtn_red_set(a_type, a_field, left); rbtn_black_set(a_type, a_field, leftleft); rbtn_rotate_right(a_type, a_field, pathp->node, tnode); assert((uintptr_t)pathp > (uintptr_t)path); if (pathp[-1].cmp < 0) { rbtn_left_set(a_type, a_field, pathp[-1].node, tnode); } else { rbtn_right_set(a_type, a_field, pathp[-1].node, tnode); } return; } else { rbtn_red_set(a_type, a_field, left); rbtn_black_set(a_type, a_field, pathp->node); return; } } else { a_type *leftleft = rbtn_left_get(a_type, a_field, left); if (leftleft != NULL && rbtn_red_get(a_type, a_field, leftleft)) { a_type *tnode; rbtn_black_set(a_type, a_field, leftleft); rbtn_rotate_right(a_type, a_field, pathp->node, tnode); if (pathp == path) { rbtree->rbt_root = tnode; } else { if (pathp[-1].cmp < 0) { rbtn_left_set(a_type, a_field, pathp[-1].node, tnode); } else { rbtn_right_set(a_type, a_field, pathp[-1].node, tnode); } } return; } else { rbtn_red_set(a_type, a_field, left); } } } } rbtree->rbt_root = path->node; assert(!rbtn_red_get(a_type, a_field, rbtree->rbt_root)); } a_attr a_type * a_prefix ##iter_recurse(a_rbt_type *rbtree, a_type *node, a_type *(*cb)(a_rbt_type *, a_type *, void *), void *arg) { if (node == NULL) { return (NULL); } else { a_type *ret; if ((ret = a_prefix ##iter_recurse(rbtree, rbtn_left_get(a_type, a_field, node), cb, arg)) != NULL || (ret = cb(rbtree, node, arg)) != NULL) { return (ret); } return (a_prefix ##iter_recurse(rbtree, rbtn_right_get(a_type, a_field, node), cb, arg)); } } a_attr a_type * a_prefix ##iter_start(a_rbt_type *rbtree, a_type *start, a_type *node, a_type *(*cb)(a_rbt_type *, a_type *, void *), void *arg) { int cmp = a_cmp(start, node); if (cmp < 0) { a_type *ret; if ((ret = a_prefix ##iter_start(rbtree, start, rbtn_left_get(a_type, a_field, node), cb, arg)) != NULL || (ret = cb(rbtree, node, arg)) != NULL) { return (ret); } return (a_prefix ##iter_recurse(rbtree, rbtn_right_get(a_type, a_field, node), cb, arg)); } else if (cmp > 0) { return (a_prefix ##iter_start(rbtree, start, rbtn_right_get(a_type, a_field, node), cb, arg)); } else { a_type *ret; if ((ret = cb(rbtree, node, arg)) != NULL) { return (ret); } return (a_prefix ##iter_recurse(rbtree, rbtn_right_get(a_type, a_field, node), cb, arg)); } } a_attr a_type * a_prefix ##iter(a_rbt_type *rbtree, a_type *start, a_type *(*cb)( a_rbt_type *, a_type *, void *), void *arg) { a_type *ret; if (start != NULL) { ret = a_prefix ##iter_start(rbtree, start, rbtree->rbt_root, cb, arg); } else { ret = a_prefix ##iter_recurse(rbtree, rbtree->rbt_root, cb, arg); } return (ret); } a_attr a_type * a_prefix ##reverse_iter_recurse(a_rbt_type *rbtree, a_type *node, a_type *(*cb)(a_rbt_type *, a_type *, void *), void *arg) { if (node == NULL) { return (NULL); } else { a_type *ret; if ((ret = a_prefix ##reverse_iter_recurse(rbtree, rbtn_right_get(a_type, a_field, node), cb, arg)) != NULL || (ret = cb(rbtree, node, arg)) != NULL) { return (ret); } return (a_prefix ##reverse_iter_recurse(rbtree, rbtn_left_get(a_type, a_field, node), cb, arg)); } } a_attr a_type * a_prefix ##reverse_iter_start(a_rbt_type *rbtree, a_type *start, a_type *node, a_type *(*cb)(a_rbt_type *, a_type *, void *), void *arg) { int cmp = a_cmp(start, node); if (cmp > 0) { a_type *ret; if ((ret = a_prefix ##reverse_iter_start(rbtree, start, rbtn_right_get(a_type, a_field, node), cb, arg)) != NULL || (ret = cb(rbtree, node, arg)) != NULL) { return (ret); } return (a_prefix ##reverse_iter_recurse(rbtree, rbtn_left_get(a_type, a_field, node), cb, arg)); } else if (cmp < 0) { return (a_prefix ##reverse_iter_start(rbtree, start, rbtn_left_get(a_type, a_field, node), cb, arg)); } else { a_type *ret; if ((ret = cb(rbtree, node, arg)) != NULL) { return (ret); } return (a_prefix ##reverse_iter_recurse(rbtree, rbtn_left_get(a_type, a_field, node), cb, arg)); } } a_attr a_type * a_prefix ##reverse_iter(a_rbt_type *rbtree, a_type *start, a_type *(*cb)(a_rbt_type *, a_type *, void *), void *arg) { a_type *ret; if (start != NULL) { ret = a_prefix ##reverse_iter_start(rbtree, start, rbtree->rbt_root, cb, arg); } else { ret = a_prefix ##reverse_iter_recurse(rbtree, rbtree->rbt_root, cb, arg); } return (ret); } a_attr void a_prefix ##destroy_recurse(a_rbt_type *rbtree, a_type *node, void (*cb)( a_type *, void *), void *arg) { if (node == NULL) { return; } a_prefix ##destroy_recurse(rbtree, rbtn_left_get(a_type, a_field, node), cb, arg); rbtn_left_set(a_type, a_field, (node), NULL); a_prefix ##destroy_recurse(rbtree, rbtn_right_get(a_type, a_field, node), cb, arg); rbtn_right_set(a_type, a_field, (node), NULL); if (cb) { cb(node, arg); } } a_attr void a_prefix ##destroy(a_rbt_type *rbtree, void (*cb)(a_type *, void *), void *arg) { a_prefix ##destroy_recurse(rbtree, rbtree->rbt_root, cb, arg); rbtree->rbt_root = NULL; }
#define DW_AT_data_bit_offset 0x6b
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define tsd_boot1 JEMALLOC_N(tsd_boot1)
#define MAXCOMLEN 16
#define PRNG_C_32 UINT32_C(12347)
#define B19200 19200
#define __FLT_RADIX__ 2
#define IPV6CTL_MAXID 51
#define SMOOTHSTEP_BFP 24
#define SO_REUSEPORT 0x0200
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define DW_TAG_dwarf_procedure 0x36
#define tsd_tcache_enabledp_get JEMALLOC_N(tsd_tcache_enabledp_get)
#define HEAPTYPE(x) static x* x ##_new(x n) { x *m = malloc(sizeof (x)); return m? *m = n, m: m; }
#define Color_BGINSERT "\x1b[48;5;22m"
#define R_FLAG_NAME_SIZE 512
#define POLLOUT 0x0004
#define R_BIN_BIND_WEAK_STR "WEAK"
#define DW_OP_call4 0x99
#define SCNdPTR "ld"
#define R_BIN_REQ_LISTPLUGINS 0x4000000
#define R_HASH_SIZE_CRC64_WE 8
#define r_io_map_end(map) r_itv_end (map->itv)
#define EAI_BADFLAGS 3
#define UT64_GT0 0x8000000000000000ULL
#define DW_LNE_HP_set_sequence 0x16
#define SCNxLEAST16 SCNx16
#define FILE_BEQDATE 29
#define _POSIX_ARG_MAX 4096
#define R_REGEX_NOMATCH 1
#define _SC_SS_REPL_MAX 126
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define IP_OLD_FW_ADD 50
#define Color_BLINK "\x1b[5m"
#define MAGIC_IS_STRING(t) ((t) == FILE_STRING || (t) == FILE_PSTRING || (t) == FILE_BESTRING16 || (t) == FILE_LESTRING16 || (t) == FILE_REGEX || (t) == FILE_SEARCH || (t) == FILE_DEFAULT)
#define DEBUG_INFO_CAPACITY 8
#define IP_FW_ZERO 43
#define IP_RETOPTS 8
#define PRNG_C_64 UINT64_C(1442695040888963407)
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define stats_cactive JEMALLOC_N(stats_cactive)
#define DW_TAG_LAST 0x44
#define IP_DEFAULT_MULTICAST_LOOP 1
#define tsd_fetch_impl JEMALLOC_N(tsd_fetch_impl)
#define MSG_TRUNC 0x10
#define QU(q) ((uint64_t)q)
#define __QOS_CLASS_AVAILABLE(...) 
#define F_TEST 3
#define _UID_T 
#define TCOFLUSH 2
#define RUSAGE_SELF 0
#define CHUNK_MAP_SIZE_SHIFT (CHUNK_MAP_RUNIND_SHIFT - LG_PAGE)
#define R_BIN_BIND_LOPROC_STR "LOPROC"
#define extent_tree_szsnad_reverse_iter_start JEMALLOC_N(extent_tree_szsnad_reverse_iter_start)
#define IPV6_2292DSTOPTS 23
#define R2_PARSE_H 
#define arg(x) r_str_word_get0(s,x)
#define R_HASH_SIZE_CRC32C 4
#define R_HASH_SIZE_CRC64_ISO 8
#define _POSIX_TIMEOUTS (-1)
#define not_reached() do { if (config_debug) { eprintf( "<jemalloc>: %s:%d: Unreachable code reached\n", __FILE__, __LINE__); abort(); } unreachable(); } while (0)
#define SCNx32 "x"
#define prof_active_get_unlocked JEMALLOC_N(prof_active_get_unlocked)
#define arena_malloc_hard JEMALLOC_N(arena_malloc_hard)
#define witness_lock JEMALLOC_N(witness_lock)
#define R_HASH_SIZE_CRC32_MPEG2 4
#define EOVERFLOW 84
#define PERSIST_TIMEOUT 0x40
#define sigaddset(set,signo) (*(set) |= __sigbits(signo), 0)
#define S_IRUSR 0000400
#define SIGPIPE 13
#define R_FLAGS_FS_IMPORTS "imports"
#define base_stats_get JEMALLOC_N(base_stats_get)
#define $31 (2 << 8)
#define DW_LNE_HP_negate_function_exit 0x18
#define BUS_ADRERR 2
#define r_io_map_begin(map) r_itv_begin (map->itv)
#define chunk_in_dss JEMALLOC_N(chunk_in_dss)
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define DW_LANG_Java 0x000b
#define _WCHAR_T_H 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define RLIMIT_CORE 4
#define R_EGG_OS_W32 0x0ad5fbb3
#define DW_LANG_hi_user 0xffff
#define EAI_NODATA 7
#define R_MAGIC_CONTINUE 0x000020
#define WITNESS_RANK_DSS WITNESS_RANK_LEAF
#define MALLOCX_TCACHE_GET(flags) (((unsigned)((flags & MALLOCX_TCACHE_MASK) >> 8)) - 2)
#define NOFILE 256
#define R_CORE_ASMQJMPS_NUM 10
#define MADV_FREE 5
#define r_list_empty(x) (!(x) || !(x)->length)
#define CACHELINE_MASK (CACHELINE - 1)
#define SCNxLEAST64 SCNx64
#define RColor_WHITE RCOLOR(ALPHA_FG, 204, 204, 204, 0x00, 0x00, 0x00, 7)
#define LG_SIZE_CLASS_GROUP 2
#define arena_tdata_get_hard JEMALLOC_N(arena_tdata_get_hard)
#define SO_TIMESTAMP 0x0400
#define NOSPACE 0x10
#define spin_adaptive JEMALLOC_N(spin_adaptive)
#define __DARWIN_64_BIT_INO_T 1
#define R_CODEC_B64 1ULL
#define MADV_DONTNEED POSIX_MADV_DONTNEED
#define num_mask _u._mask
#define IPPROTO_SATMON 69
#define __TVOS_14_0 140000
#define __FLT32X_MANT_DIG__ 53
#define SCNx64 __SCN_64_LENGTH_MODIFIER__ "x"
#define MS_DEACTIVATE 0x0008
#define arena_mapbits_allocated_get JEMALLOC_N(arena_mapbits_allocated_get)
#define __TVOS_14_1 140100
#define PFMTSZd "zd"
#define PFMTSZo "zo"
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define PFMTSZu "zu"
#define cassert(c) do { if (unlikely(!(c))) not_reached(); } while (0)
#define PFMTSZx "zx"
#define IPV6CTL_MAXIFPREFIXES 47
#define PFMT64u "llu"
#define IP_MSFILTER 74
#define ZIGN_HASH "sha256"
#define LG_TINY_MAXCLASS 3
#define malloc_write JEMALLOC_N(malloc_write)
#define EAI_OVERFLOW 14
#define SIOCSETVLAN SIOCSIFVLAN
#define tsdn_null JEMALLOC_N(tsdn_null)
#define JEMALLOC_ALIGNED(s) JEMALLOC_ATTR(aligned(s))
#define SCNoPTR "lo"
#define _GCC_LIMITS_H_ 
#define R_BIN_TYPE_FUNC_STR "FUNC"
#define SF_NOUNLINK 0x00100000
#define FILE_FMT_NONE 0
#define IP_BLOCK_SOURCE 72
#define W_OK (1<<1)
#define PROT_READ 0x01
#define DW_AT_object_pointer 0x64
#define __x86_64__ 1
#define _SIZE_T_ 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define DW_AT_address_class 0x33
#define RLIMIT_RSS RLIMIT_AS
#define R_BIG_H 
#define H_LOG_(loglevel,fmt,...) r_assert_log (loglevel, fmt, __VA_ARGS__)
#define R_REG_COND_NEG 3
#define UINT_FAST32_MAX UINT32_MAX
#define JEMALLOC_FORMAT_PRINTF(s,i) JEMALLOC_ATTR(format(gnu_printf, s, i))
#define R_CODEC_B91 1ULL<<1
#define O_CREAT 0x00000200
#define _SYS_SYSLIMITS_H_ 
#define B38400 38400
#define EPROTO 100
#define DW_UT_hi_user 0xff
#define R_REGEX_NOTBOL 00001
#define ENODEV 19
#define RUNECODESTR_MAX 0xd5
#define _EXECUTE_OK (1<<11)
#define PRIdLEAST32 PRId32
#define __GNUC_STDC_INLINE__ 1
#define VERSIONNO 5
#define KEV_INET6_SUBCLASS 6
#define ckh_pointer_hash JEMALLOC_N(ckh_pointer_hash)
#define DW_FORM_strp_sup 0x1d
#define __PTHREAD_SIZE__ 8176
#define R_HASH_SIZE_MOD255 1
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define PERROR_WITH_FILELINE 0
#define r_calloc(x,y) calloc((x),(y))
#define R_EGG_OS_LINUX 0x5ca62a43
#define IPV6_FAITH 29
#define POLL_OUT 2
#define R_ANAL_ADDR_TYPE_FLAG 1 << 3
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define _POSIX_MONOTONIC_CLOCK (-1)
#define TAG_GRAPHICSTRING 0x19
#define DW_TAG_variant 0x19
#define arenas_tdata_cleanup JEMALLOC_N(arenas_tdata_cleanup)
#define _SC_2_PBS_ACCOUNTING 60
#define R_BUF_H 
#define R_EGG_INCDIR_ENV "EGG_INCDIR"
#define MINCORE_MODIFIED 0x4
#define witness_postfork_parent JEMALLOC_N(witness_postfork_parent)
#define _SC_XBS5_LP64_OFF64 124
#define malloc_snprintf JEMALLOC_N(malloc_snprintf)
#define R_ID_STORAGE_H 
#define huge_salloc JEMALLOC_N(huge_salloc)
#define DW_OP_nop 0x96
#define __UINT_FAST32_MAX__ 0xffffffffU
#define r_io_map_size(map) r_itv_size (map->itv)
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define DW_TAG_volatile_type 0x35
#define extent_tree_szsnad_empty JEMALLOC_N(extent_tree_szsnad_empty)
#define R_REG_COND_GE 9
#define prof_boot2 JEMALLOC_N(prof_boot2)
#define R_BIN_ENTRY_TYPE_INIT 2
#define DT_REG 8
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define __FLT_HAS_QUIET_NAN__ 1
#define DW_AT_macros 0x79
#define CS5 0x00000000
#define _SC_THREAD_ATTR_STACKADDR 82
#define R_HASH_SIZE_CRC16_USB 2
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define PT_KILL 8
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define MADV_ZERO_WIRED_PAGES 6
#define ONLCR 0x00000002
#define TAG_UNIVERSALSTRING 0x1C
#define DW_AT_call_return_pc 0x7d
#define R_ANAL_ADDR_TYPE_PROGRAM 1 << 8
#define witness_unlock JEMALLOC_N(witness_unlock)
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define R_SYS_BITS_8 1
#define FILE_MAGICSIZE (32 * 6)
#define LINE_HORIZ 2
#define USE_LIB_XXHASH 0
#define DWARF_TRUE 1
#define __FLT64X_HAS_DENORM__ 1
#define iallocztm JEMALLOC_N(iallocztm)
#define _PC_SYNC_IO 25
#define R_PRINT_JSON (1 << 3)
#define DW_FORM_flag 0x0c
#define __dead2 __attribute__((__noreturn__))
#define PLOSS 6
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _SC_SEM_NSEMS_MAX 49
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT_HAS_INFINITY__ 1
#define ENODATA 96
#define DW_AT_sibling 0x01
#define SO_SNDBUF 0x1001
#define __SNBF 0x0002
#define R_NEW_COPY(x,y) x=(void*)malloc(sizeof(y));memcpy(x,y,sizeof(y))
#define tsd_witnessesp_get JEMALLOC_N(tsd_witnessesp_get)
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define __WCTYPE_H_ 
#define SDB_API __attribute__ ((visibility ("default")))
#define S_IFSOCK 0140000
#define $11 16
#define _I386_LIMITS_H_ 
#define R_NEWS0(x,y) (x*)calloc(y,sizeof(x))
#define _BSD_PTRDIFF_T_ 
#define DW_AT_decl_file 0x3a
#define ASCTIME_BUF_MINLEN (26)
#define PRIXPTR "lX"
#define RColor_BBLACK RCOLOR(ALPHA_FG, 118, 118, 118, 0x00, 0x00, 0x00, 8)
#define SIGXFSZ 25
#define R_ANAL_ADDR_TYPE_WRITE 1 << 2
#define MCAST_JOIN_SOURCE_GROUP 82
#define O_FSYNC O_SYNC
#define ctl_nametomib JEMALLOC_N(ctl_nametomib)
#define F_PATHPKG_CHECK 52
#define SIGHUP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define DW_OP_lit0 0x30
#define ls_foreach_prev(list,it,pos) if ((list)) for (it = list->tail; it && (pos = it->data); it = it->p)
#define DW_OP_lit2 0x32
#define F_VOLPOSMODE 4
#define DW_OP_lit5 0x35
#define DW_OP_lit6 0x36
#define DW_OP_lit7 0x37
#define DW_OP_lit8 0x38
#define B0110 6
#define __INT_FAST32_WIDTH__ 32
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __FLT_DECIMAL_DIG__ 9
#define NULL ((void *)0)
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define RTLD_DEFAULT ((void *) -2)
#define extent_node_achunk_set JEMALLOC_N(extent_node_achunk_set)
#define __FLT64X_MAX_EXP__ 16384
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _POSIX_SEM_NSEMS_MAX 256
#define DW_AT_dwo_name 0x76
#define SCNuPTR "lu"
#define E2BIG 7
#define sdb_aforeach_next(x) if (!next) break; *(next-1) = ','; x = next; } }
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define __PTHREAD_COND_SIZE__ 40
#define r_list_iterator(x) (x)? (x)->head: NULL
#define O_ASYNC 0x00000040
#define CFLUSH CDISCARD
#define ECHOPRT 0x00000020
#define R_LIB_VERSION(x) R_API const char *x ##_version(void) { return "" R2_GITTAP; }
#define PROF_CKH_MINITEMS 64
#define INT_MIN (-INT_MAX - 1)
#define DW_ATE_address 0x01
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define IPV6CTL_DEFMCASTHLIM 18
#define TCP_SENDMOREACKS 0x103
#define AF_SIP 24
#define B200 200
#define AF_NDRV 27
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define R_PRINT_FLAGS_SECSUB 0x00002000
#define _PC_REC_XFER_ALIGN 23
#define HOST_NOT_FOUND 1
#define POLLHUP 0x0010
#define RColor_BCYAN RCOLOR(ALPHA_FG, 97, 214, 214, 0x00, 0x00, 0x00, 14)
#define DES_KEY_SIZE 8
#define R_REGEX_EBRACE 9
#define arena_tcache_fill_small JEMALLOC_N(arena_tcache_fill_small)
#define F_SETSIZE 43
#define R_REGEX_EBRACK 7
#define R_BASE91_H 
#define _SC_MEMORY_PROTECTION 32
#define phn(a_type) struct { a_type *phn_prev; a_type *phn_next; a_type *phn_lchild; }
#define R_MAGIC_NO_CHECK_TAR 0x002000
#define IN_CLASSB_NET 0xffff0000
#define R_REGEX_TRACE 00400
#define R_HASH_NONE 0
#define IP_DUMMYNET_CONFIGURE 60
#define R_BIN_METH_OPEN 0x0000000000000040L
#define R_REG_COND_GT 10
#define ICMP6_FILTER 18
#define B57600 57600
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB 0x1
#define JEMALLOC_HAVE_BUILTIN_CLZ 
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define R_BIG_SPRINTF_FORMAT_STR "%.08x"
#define MBIGCLSHIFT 12
#define ESIL_INTERNAL_PREFIX '$'
#define malloc_mutex_postfork_child JEMALLOC_N(malloc_mutex_postfork_child)
#define PF_NETBIOS AF_NETBIOS
#define R_MALLOC_GLOBAL 0
#define UT32_ADD_OVFCHK(x,y) ((UT32_MAX - (x)) < (y))
#define MAP_COPY MAP_PRIVATE
#define DW_AT_rank 0x71
#define SYNC_VOLUME_WAIT 0x02
#define SO_PEERLABEL 0x1011
#define DW_FORM_block 0x09
#define SO_DEBUG 0x0001
#define SEEK_HOLE 3
#define chunksize JEMALLOC_N(chunksize)
#define UINTMAX_C(v) (v ## UL)
#define RBinSectionName r_offsetof(RBinSection, name)
#define DW_TAG_rvalue_reference_type 0x42
#define R_SOCKET_PROTO_UDP IPPROTO_UDP
#define IPV6_2292RTHDR 24
#define DW_VIS_local 0x01
#define _RUNETYPE_H_ 
#define ECONNRESET 54
#define TAG_OCTETSTRING 0x04
#define _SYS_STDIO_H_ 
#define DST_MET 4
#define EBADMACHO 88
#define R_HASH_CRC24 (1ULL << R_HASH_IDX_CRC24)
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define AF_SNA 11
#define MALLOCX_ALIGN_GET(flags) (MALLOCX_ALIGN_GET_SPECIFIED(flags) & (SIZE_T_MAX-1))
#define R_CONS_CMD_DEPTH 100
#define FUNC_ATTR_CONST __attribute__((const))
#define unreachable() JEMALLOC_INTERNAL_UNREACHABLE()
#define HAVE_GPERF 1
#define SIGSTOP 17
#define __TVOS_13_3 130300
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define ENXIO 6
#define __TVOS_13_4 130400
#define _SC_THREAD_CPUTIME 84
#define TIOCPKT_FLUSHREAD 0x01
#define _PC_EXTENDED_SECURITY_NP 13
#define $00 1
#define SCNuFAST16 SCNu16
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define R_STR_ISEMPTY(x) (!(x) || !*(x))
#define __STDIO_H_ 
#define R_BIN_BIND_HIPROC_STR "HIPROC"
#define NET_SERVICE_TYPE_OAM 7
#define DW_AT_byte_size 0x0b
#define DW_TAG_template_type_parameter 0x2f
#define __FLT64_HAS_QUIET_NAN__ 1
#define _SECURE__STDIO_H_ 
#define WNOWAIT 0x00000020
#define r_flag_bind_init(x) memset(&x,0,sizeof(x))
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define $01 8
#define RColor_BBGWHITE RCOLOR(ALPHA_BG, 242, 242, 242, 0x00, 0x00, 0x00, 15)
#define SZT_MAX UT64_MAX
#define extent_tree_ad_insert JEMALLOC_N(extent_tree_ad_insert)
#define DW_LNE_define_file 0x03
#define R_RANGE_H 
#define R_LIB_EXT "dylib"
#define ckh_iter JEMALLOC_N(ckh_iter)
#define qr_meld(a_qr_a,a_qr_b,a_field) do { void *t; (a_qr_a)->a_field.qre_prev->a_field.qre_next = (a_qr_b); (a_qr_b)->a_field.qre_prev->a_field.qre_next = (a_qr_a); t = (a_qr_a)->a_field.qre_prev; (a_qr_a)->a_field.qre_prev = (a_qr_b)->a_field.qre_prev; (a_qr_b)->a_field.qre_prev = t; } while (0)
#define R_FLAGS_FS_SYMBOLS "symbols"
#define JEMALLOC_PROC_SYS_VM_OVERCOMMIT_MEMORY 
#define L_XTND SEEK_END
#define SCNuFAST32 SCNu32
#define PRIdFAST16 PRId16
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define RColor_BBGRED RCOLOR(ALPHA_BG, 231, 72, 86, 0x00, 0x00, 0x00, 9)
#define INET6_ADDRSTRLEN 46
#define tsd_tcache_enabled_get JEMALLOC_N(tsd_tcache_enabled_get)
#define R_SKYLINE_H 
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define KQU(q) QU(q ##ULL)
#define IPV6CTL_ACCEPT_RTADV 12
#define UIOCCMD(n) _IO('u', n)
#define O_ALERT 0x20000000
#define TAG_REAL 0x09
#define KEV_DL_IF_DETACHED 11
#define POLLWRNORM POLLOUT
#define chunk_dss_prec_get JEMALLOC_N(chunk_dss_prec_get)
#define NUM_PACK_TYPES 6
#define RColor_GRAY RColor_BBLACK
#define _POSIX2_PBS_LOCATE (-1)
#define TCPCI_OPT_ECN 0x00000008
#define DW_ACCESS_public 0x01
#define RColor_BWHITE RCOLOR(ALPHA_FG, 242, 242, 242, 0x00, 0x00, 0x00, 15)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define IPPORT_HILASTAUTO 65535
#define r_ref(x) x->R_REF_NAME++;
#define Color_INVERT "\x1b[7m"
#define __PTHREAD_ATTR_SIZE__ 56
#define nlclasses JEMALLOC_N(nlclasses)
#define PRINT_A(color,msg) r_cons_print (color msg Color_RESET)
#define __exported_push _Pragma("GCC visibility push(default)")
#define DW_AT_producer 0x25
#define S_ISTXT S_ISVTX
#define F_GETCODEDIR 72
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define arena_nthreads_inc JEMALLOC_N(arena_nthreads_inc)
#define HAVE_PTRACE 1
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define CBQSIZE (CBLOCK/NBBY)
#define R_REGEX_ESPACE 12
#define witness_assert_not_owner JEMALLOC_N(witness_assert_not_owner)
#define RColor_BBGBLUE RCOLOR(ALPHA_BG, 59, 120, 255, 0x00, 0x00, 0x00, 12)
#define __GNUC_VA_LIST 
#define RLIMIT_NOFILE 8
#define WSTOPPED 0x00000008
#define DW_TAG_label 0x0a
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define R_REG_COND_EQ 0
#define prof_thread_active_get JEMALLOC_N(prof_thread_active_get)
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define extent_node_size_set JEMALLOC_N(extent_node_size_set)
#define _XOPEN_REALTIME (-1)
#define KEV_DL_SIFGENERIC 6
#define DW_OP_fbreg 0x91
#define arena_metadata_allocated_add JEMALLOC_N(arena_metadata_allocated_add)
#define DW_AT_upper_bound 0x2f
#define FILE_LELDATE 16
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define B76800 76800
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define FILE_NAME_LEN 256
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define PRIuFAST32 PRIu32
#define IPPROTO_RAW 255
#define RUNE_LINE_HORIZ "─"
#define __k8__ 1
#define __UINT16_TYPE__ short unsigned int
#define R_CRYPTO_ALL 0xFFFF
#define extent_tree_szsnad_insert JEMALLOC_N(extent_tree_szsnad_insert)
#define DW_LANG_Ada95 0x000d
#define nstime_init JEMALLOC_N(nstime_init)
#define R_PRINT_FLAGS_NONASCII 0x00020000
#define _SYS__PTHREAD_TYPES_H_ 
#define _CTYPE_C 0x00000200L
#define PRIiPTR "li"
#define R_SOCKET_PROTO_UNIX 0x1337
#define SIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_mid,type_max) static inline bool overflow_name(type_base a, type_base b) { return (!b || (a == type_mid && b == type_max)); }
#define MINCORE_REFERENCED_OTHER 0x8
#define SZT_MIN UT64_MIN
#define DW_AT_bit_size 0x0d
#define R_EGG_PLUGIN_SHELLCODE 0
#define _POSIX_MEMLOCK_RANGE (-1)
#define chunks_rtree JEMALLOC_N(chunks_rtree)
#define __LP64__ 1
#define DW_TAG_packed_type 0x2d
#define IPPROTO_ICMP 1
#define S_IEXEC S_IXUSR
#define R_PANELS_H 
#define __API_DEPRECATED_END 
#define IPV6CTL_PREFER_TEMPADDR 37
#define JEMALLOC_STATS 
#define KEV_INET6_NEW_RTADV_ADDR 5
#define TAG_EXTERNAL 0x08
#define DW_TAG_file_type 0x29
#define R_SYS_ENDIAN_BIG 2
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define arena_mapbits_size_encode JEMALLOC_N(arena_mapbits_size_encode)
#define DW_AT_allocated 0x4e
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define RFList void**
#define DW_OP_and 0x1a
#define tcache_get JEMALLOC_N(tcache_get)
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define CHUNK_ADDR2OFFSET(a) ((size_t)((uintptr_t)(a) & chunksize_mask))
#define R_CMD_MAXLEN 4096
#define R_UTF16_H 
#define MAX_TCPOPTLEN 40
#define SIGALRM 14
#define SLIPDISC 4
#define IPPROTO_RDP 27
#define _SC_CLOCK_SELECTION 67
#define chunk_dalloc_mmap JEMALLOC_N(chunk_dalloc_mmap)
#define __MAC_10_12_1 101201
#define PRIO_DARWIN_NONUI 0x1001
#define __LDBL_MAX_EXP__ 16384
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define R_HASH_BASE91 (1ULL << R_HASH_IDX_BASE91)
#define rb_tree(a_type) struct { a_type *rbt_root; }
#define MAP_NOEXTEND 0x0100
#define IN_CLASSD_NSHIFT 28
#define DW_AT_call_parameter 0x80
#define EADDRNOTAVAIL 49
#define ETIME 101
#define IPPROTO_RCCMON 10
#define Color_BMAGENTA "\x1b[95m"
#define AF_DATAKIT 9
#define JEMALLOC_SECTION(s) JEMALLOC_ATTR(section(s))
#define RColor_BGREEN RCOLOR(ALPHA_FG, 22, 198, 12, 0x00, 0x00, 0x00, 10)
#define __FLT_DIG__ 6
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define zone_register JEMALLOC_N(zone_register)
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define MAGICNO 0xF11E041C
#define PRIMASK 0x0ff
#define IPV6CTL_RTMINEXPIRE 26
#define R_BIN_REQ_SECTIONS_MAPPING 0x200000000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define R_PTR_MOVE(d,s) d=s;s=NULL;
#define DW_TAG_mutable_type 0x3e
#define r_offsetof(type,member) offsetof(type, member)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define _OS__OSBYTEORDER_H 
#define IP_FW_DEL 41
#define EBADRPC 72
#define R_STRBUF_H 
#define tsd_thread_deallocatedp_get JEMALLOC_N(tsd_thread_deallocatedp_get)
#define narenas_total_get JEMALLOC_N(narenas_total_get)
#define DW_AT_string_length_bit_size 0x6f
#define __BSD__ 0
#define TIOCFLUSH _IOW('t', 16, int)
#define je_mallctlbymib mallctlbymib
#define R_BIN_METH_STRICT 0x0000000000040000L
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define R_HASH_CRC32Q (1ULL << R_HASH_IDX_CRC32Q)
#define STDIN_FILENO 0
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define UINT_FAST8_MAX UINT8_MAX
#define MAP_FILE 0x0000
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define rtree_val_write JEMALLOC_N(rtree_val_write)
#define F_GETFD 1
#define R_FS_FILE_TYPE_REGULAR 'r'
#define MADV_WILLNEED POSIX_MADV_WILLNEED
#define _CT_RUNE_T 
#define DSS_DEFAULT "secondary"
#define UINT8_MAX 255
#define HUPCL 0x00004000
#define DW_AT_loclists_base 0x8c
#define arena_chunk_cache_maybe_insert JEMALLOC_N(arena_chunk_cache_maybe_insert)
#define qr_after_insert(a_qrelm,a_qr,a_field) do { (a_qr)->a_field.qre_next = (a_qrelm)->a_field.qre_next; (a_qr)->a_field.qre_prev = (a_qrelm); (a_qr)->a_field.qre_next->a_field.qre_prev = (a_qr); (a_qrelm)->a_field.qre_next = (a_qr); } while (0)
#define DEFINE_CMD_ARGV_DESC_DETAIL(core,name,c_name,parent,handler,help) RCmdDesc *c_name ##_cd = r_cmd_desc_argv_new (core->rcmd, parent, #name, handler, help); r_warn_if_fail (c_name ##_cd)
#define CONS_MAX_USER 102400
#define IPV6CTL_MAXIFDEFROUTERS 48
#define Color_BRED "\x1b[91m"
#define TCP_MAX_WINSHIFT 14
#define FILE_DEFAULT 3
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define _POSIX_CLOCKRES_MIN 20000000
#define Color_INVERT_RESET "\x1b[27m"
#define opt_lg_chunk JEMALLOC_N(opt_lg_chunk)
#define _T_SIZE_ 
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define R_TIME_PROFILE_ENABLED 0
#define LLONG_MAX __LONG_LONG_MAX__
#define DW_TAG_thrown_type 0x31
#define PF_CNT AF_CNT
#define ENOTRECOVERABLE 104
#define r_rbtree_iter_get(it,struc,rb) (container_of ((it)->path[(it)->len-1], struc, rb))
#define R_BIN_TYPE_TLS_STR "TLS"
#define R_LOG_INFO(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_INFO, NULL, fmtstr, ##__VA_ARGS__);
#define __TVOS_12_4 120400
#define HAVE_EXPLICIT_BZERO 0
#define BITMAP_GROUPS_4_LEVEL(nbits) (BITMAP_GROUPS_3_LEVEL(nbits) + BITMAP_GROUPS_L3(nbits))
#define TAG_EMBEDDED_PDV 0x0B
#define ticker_init JEMALLOC_N(ticker_init)
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define TIOCPTYUNLK _IO('t', 82)
#define iralloc JEMALLOC_N(iralloc)
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define TCIOFF 3
#define EIO 5
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define R_MAX(x,y) (((x)>(y))?(x):(y))
#define prof_sample_accum_update JEMALLOC_N(prof_sample_accum_update)
#define R_HASH_CRC16 (1ULL << R_HASH_IDX_CRC16)
#define LG_RTREE_BITS_PER_LEVEL 4
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define R_AGRAPH_MODE_MAX 6
#define _SC_AIO_PRIO_DELTA_MAX 44
#define ENETUNREACH 51
#define EXDEV 18
#define R_HASH_BASE64 (1ULL << R_HASH_IDX_BASE64)
#define tcaches_get JEMALLOC_N(tcaches_get)
#define R_BIN_BIND_LOCAL_STR "LOCAL"
#define r_io_map_contain(map,addr) r_itv_contain (map->itv, addr)
#define BSD4_3 1
#define _SC_ADVISORY_INFO 65
#define IPV6PORT_ANONMAX 65535
#define PRIxPTR "lx"
#define UINT32_C(v) (v ## U)
#define nstime_init2 JEMALLOC_N(nstime_init2)
#define _POSIX_SYMLINK_MAX 255
#define TIOCPKT _IOW('t', 112, int)
#define DW_OP_breg14 0x7e
#define TTYDEF_LFLAG (ECHO | ICANON | ISIG | IEXTEN | ECHOE|ECHOKE|ECHOCTL)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define R_FS_PARTITIONS_LENGTH (int)(sizeof (partitions)/sizeof(RFSPartitionType)-1)
#define COND_ELIF 2
#define prof_malloc_sample_object JEMALLOC_N(prof_malloc_sample_object)
#define PFMT64d "lld"
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define extent_tree_ad_last JEMALLOC_N(extent_tree_ad_last)
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_TRACE (-1)
#define extent_node_zeroed_set JEMALLOC_N(extent_node_zeroed_set)
#define PRINTF_GA(fmt,...) PRINTF_A ("%s", fmt, pal->args, __VA_ARGS__)
#define FILE_DOUBLE 36
#define R_CORE_BIN_ACC_PDB 0x2000
#define CLASS_APPLICATION 0x40
#define arena_palloc JEMALLOC_N(arena_palloc)
#define INT_FAST32_MIN INT32_MIN
#define DW_AT_variable_parameter 0x4b
#define CHUNK_MAP_LARGE ((size_t)0x02U)
#define arena_chunk_dalloc_huge JEMALLOC_N(arena_chunk_dalloc_huge)
#define __WINT_TYPE__ int
#define EDQUOT 69
#define STDOUT_FILENO 1
#define PT_SIGEXC 12
#define R_FS_FILE_TYPE_MOUNT 'm'
#define SEM_VALUE_MAX 32767
#define bitmap_set JEMALLOC_N(bitmap_set)
#define index2size_tab JEMALLOC_N(index2size_tab)
#define tcache_prefork JEMALLOC_N(tcache_prefork)
#define IPCTL_RTMAXCACHE 7
#define TYPES_H 
#define R_REF_TYPE RRef R_REF_NAME
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define TABLDISC 3
#define R_PRINT_FLAGS_OFFSET 0x00000040
#define AF_HYLINK 15
#define R_HASH_PUNYCODE (1ULL << R_HASH_IDX_PUNYCODE)
#define DW_INL_declared_not_inlined 0x02
#define DW_OP_shl 0x24
#define IP_RECVDSTADDR 7
#define _CADDR_T 
#define R_FS_FILE_TYPE_DIRECTORY 'd'
#define CPF_OVERWRITE 0x0001
#define BC_DIM_MAX 2048
#define r_egg_get_shellcodes(x) x->plugins
#define __KAME__ 
#define ASCII_MAX 127
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define __DARWIN_C_FULL 900000L
#define not_implemented() do { if (config_debug) { eprintf("<jemalloc>: %s:%d: Not implemented\n", __FILE__, __LINE__); abort(); } } while (0)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define RUNECODESTR_ARROW_RIGHT "\xcc"
#define B_TOGGLE(x,n) ((x) ^= (1ULL << (n)))
#define ENOSPC 28
#define EPROCUNAVAIL 76
#define IPCTL_ACCEPTSOURCEROUTE 13
#define ENOEXEC 8
#define R_REG_COND_HE 6
#define R_CORE_BIN_ACC_FIELDS 0x100
#define CONS_COLORS_SIZE 21
#define FPE_NOOP 0
#define R_ANAL_ADDR_TYPE_STACK 1 << 6
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define R_IFNULL(x) 
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define SDB_HT_PU_H 
#define B0 0
#define tcache_salloc JEMALLOC_N(tcache_salloc)
#define B4(a,b,c,d) ((a<<12)|(b<<8)|(c<<4)|(d))
#define SO_RCVBUF 0x1002
#define _POSIX2_PBS_MESSAGE (-1)
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define FIOCLEX _IO('f', 1)
#define _MACH_MACHINE__STRUCTS_H_ 
#define R_EGG_PLUGIN_ENCODER 1
#define PF_RTIP pseudo_AF_RTIP
#define ASN1_TAG 0x1F
#define R_NAME_H 
#define SV_ONSTACK SA_ONSTACK
#define prng_state_next_u32 JEMALLOC_N(prng_state_next_u32)
#define R_BIN_TYPE_FILE_STR "FILE"
#define R_CORE_BIN_ACC_RESOURCES 0x100000
#define JEMALLOC_INTERNAL_UNREACHABLE __builtin_unreachable
#define tsd_arenas_tdatap_get JEMALLOC_N(tsd_arenas_tdatap_get)
#define __SIZEOF_INT128__ 16
#define arena_lg_dirty_mult_default_get JEMALLOC_N(arena_lg_dirty_mult_default_get)
#define MACRO_LOG_FUNC __func__
#define R_ASM_ARCH_MSIL R_SYS_ARCH_MSIL
#define F_GETLKPID 66
#define TCP_MAXWIN 65535
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES (-1)
#define __ATOMIC_RELAXED 0
#define AI_ALL 0x00000100
#define RLIMIT_FSIZE 1
#define WITNESS_RANK_PROF_BT2GCTX 5U
#define BRAILE_SEV $00+$01+$11+$20+$30
#define CRDLY 0x00003000
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define LDBLFMT "Lf"
#define buffer_GETC(s,c) ( ((s)->p > 0) ? ( *(c) = (s)->x[(s)->n], buffer_SEEK((s),1), 1 ) : buffer_get((s),(c),1) )
#define PTHREAD_PROCESS_PRIVATE 2
#define IPV6PORT_ANONMIN 49152
#define EFTYPE 79
#define boolt int
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define BC_SCALE_MAX 99
#define r_bin_dwarf_line_new(o,a,f,l) o->address=a, o->file = strdup (r_str_get (f)), o->line = l, o->column =0,o
#define EDOM 33
#define DW_CFA_advance_loc2 0x03
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define prof_tctx_reset JEMALLOC_N(prof_tctx_reset)
#define ENOSTR 99
#define rtree_child_read_hard JEMALLOC_N(rtree_child_read_hard)
#define DW_AT_call_target_clobbered 0x84
#define prng_lg_range_u64 JEMALLOC_N(prng_lg_range_u64)
#define extent_tree_szsnad_reverse_iter_recurse JEMALLOC_N(extent_tree_szsnad_reverse_iter_recurse)
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define DW_CFA_restore_extended 0x06
#define CHAR_COMPACT_OPTIONAL_BLANK 'b'
#define FUNC_ATTR_ALLOC_ALIGN(x) __attribute__((alloc_align(x)))
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define CORNER_TL 6
#define __API_AVAILABLE(...) 
#define r_rbtree_foreach_prev(root,it,data,struc,rb) for ((it) = r_rbtree_last (root); r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_prev (&(it)))
#define _INT8_T 
#define SIGKILL 9
#define DW_AT_decl_line 0x3b
#define FREAD 0x00000001
#define FS "/"
#define ESRCH 3
#define ixalloc JEMALLOC_N(ixalloc)
#define RUNECODESTR_CORNER_TL "\xcf"
#define IPV6_FW_GET 34
#define __INT_LEAST32_TYPE__ int
#define je_realloc realloc
#define CWERASE CTRL('w')
#define EHOSTDOWN 64
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define __wchar_t__ 
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define tsd_witness_fork_get JEMALLOC_N(tsd_witness_fork_get)
#define ticker_ticks JEMALLOC_N(ticker_ticks)
#define COND_ELSE 3
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define tcaches_destroy JEMALLOC_N(tcaches_destroy)
#define arena_migrate JEMALLOC_N(arena_migrate)
#define DW_ID_down_case 0x02
#define tcaches_flush JEMALLOC_N(tcaches_flush)
#define _POSIX2_LINE_MAX 2048
#define r_skiplist_foreach(list,it,pos) if (list) for (it = list->head->forward[0]; it != list->head && ((pos = it->data) || 1); it = it->forward[0])
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define R_CORE_BIN_ACC_SOURCE 0x800000
#define BITMAP_GROUPS_MAX BITMAP_BITS2GROUPS(BITMAP_MAXBITS)
#define DEBUG_ABBREV_CAP 32
#define SCNiFAST16 SCNi16
#define idalloc JEMALLOC_N(idalloc)
#define R_CONS_COLOR(x) R_CONS_COLOR_DEF (x, "")
#define ENOLCK 77
#define ENFILE 23
#define ASCII_MIN 32
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define r_sys_breakpoint() __builtin_trap()
#define _UUID_T 
#define MSG_DONTWAIT 0x80
#define R_IN 
#define malloc_mutex_unlock JEMALLOC_N(malloc_mutex_unlock)
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define __DYLDDL_DRIVERKIT_UNAVAILABLE __API_UNAVAILABLE(driverkit)
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define UT32_LT0 0x7FFFFFFFU
#define _STDDEF_H_ 
#define _XOPEN_UNIX (1)
#define B4800 4800
#define isgreaterequal(x,y) __builtin_isgreaterequal((x),(y))
#define ConsP(x) (core->cons && core->cons->context->pal.x)? core->cons->context->pal.x
#define R_BP_MAXPIDS 10
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define R_REGEX_LARGE 01000
#define ENOSYS 78
#define extent_tree_szsnad_psearch JEMALLOC_N(extent_tree_szsnad_psearch)
#define _SC_LOGIN_NAME_MAX 73
#define ECANCELED 89
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define B10000 16
#define B10001 17
#define JEMALLOC_NOINLINE JEMALLOC_ATTR(noinline)
#define AI_PASSIVE 0x00000001
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define COND_NONE 0
#define R_FLAGS_FS_SECTIONS "sections"
#define MADV_SEQUENTIAL POSIX_MADV_SEQUENTIAL
#define ph(a_type) struct { a_type *ph_root; }
#define __INT_FAST8_TYPE__ signed char
#define DW_OP_push_object_address 0x97
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define PRINT_RA(msg) r_cons_printf ("%s" msg Color_RESET, pal->invalid)
#define DW_AT_specification 0x47
#define _SC_TIMERS 41
#define LIBC_HAVE_SYSTEM 1
#define NTBINS 1
#define UT64_8U 0xFFFFFFFFFFFFFF00ULL
#define TIOCM_LE 0001
#define S_IWRITE S_IWUSR
#define DW_LANG_UPC 0x0012
#define DIRBLKSIZ 1024
#define CCAR_OFLOW 0x00100000
#define DW_FORM_strx3 0x27
#define R_HASH_XXHASH (1ULL << R_HASH_IDX_XXHASH)
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define MCAST_UNDEFINED 0
#define DW_FORM_implicit_const 0x21
#define AT_REMOVEDIR 0x0080
#define SCNiFAST64 SCNi64
#define WAIT_ANY (-1)
#define _SC_2_CHAR_TERM 20
#define RColor_BBLUE RCOLOR(ALPHA_FG, 59, 120, 255, 0x00, 0x00, 0x00, 12)
#define SCNxMAX __SCN_MAX_LENGTH_MODIFIER__ "x"
#define DW_AT_GNU_tail_call 0x2115
#define SCNo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define _SYS_TYPES_H_ 
#define TIOCOUTQ _IOR('t', 115, int)
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define SDB_MODE 0644
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define malloc_tsd_no_cleanup JEMALLOC_N(malloc_tsd_no_cleanup)
#define SDB_LIST_SORTED 1
#define R_NSEC_PER_MSEC 1000000ULL
#define ENOTSUP 45
#define __AVAILABILITY__ 
#define FILE_BEDATE 9
#define atomic_write_uint64 JEMALLOC_N(atomic_write_uint64)
#define MONOTONIC_NETBSD (__NetBSD__ && __NetBSD_Version__ >= 700000000)
#define SOCK_SEQPACKET 5
#define PTHREAD_PRIO_NONE 0
#define R_OK (1<<2)
#define __TYPES_H_ 
#define R_BIN_TYPE_METH_STR "METH"
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define JEMALLOC_ALLOC_SIZE(s) 
#define R_MODE_SIMPLE 0x004
#define IPV6_PORTRANGE_LOW 2
#define pow2_ceil_u32 JEMALLOC_N(pow2_ceil_u32)
#define __INT_FAST8_WIDTH__ 8
#define CCTS_OFLOW 0x00010000
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define IP_PORTRANGE_DEFAULT 0
#define JEMALLOC_INTERNAL_FFSLL __builtin_ffsll
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define ckh_delete JEMALLOC_N(ckh_delete)
#define TIOCREMOTE _IOW('t', 105, int)
#define ICRNL 0x00000100
#define R_CORE_ANAL_JSON 8
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define r_interval_tree_foreach(tree,it,dat) if ((tree)->root) for ((it) = r_rbtree_first (&(tree)->root->node); r_rbtree_iter_has (&it) && (dat = r_interval_tree_iter_get (&it)->data); r_rbtree_iter_next (&(it)))
#define SO_RCVTIMEO 0x1006
#define PRIxFAST8 PRIx8
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define SDB_IPI __attribute__ ((visibility ("hidden")))
#define __DARWIN_VERS_1050 1
#define atomic_read_uint64(p) atomic_add_uint64(p, 0)
#define PT_TRACE_ME 0
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define IPPROTO_PIGP 9
#define tcaches JEMALLOC_N(tcaches)
#define WITNESS_RANK_PROF_GCTX 8U
#define _SYS_SEMAPHORE_H_ 
#define _r_realloc r_realloc
#define _PATH_HOSTS "/etc/hosts"
#define QUAD_MIN LLONG_MIN
#define UTIME_OMIT -2
#define EAI_SYSTEM 11
#define IPPROTO_PGM 113
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define TIOCIXON _IO('t', 129)
#define IP_RSVP_VIF_ON 17
#define R_STRPOOL_H 
#define FOPEN_MAX 20
#define PRIuLEAST16 PRIu16
#define MSIZESHIFT 8
#define POLLPRI 0x0002
#define bitmap_sfu JEMALLOC_N(bitmap_sfu)
#define tcache_stats_merge JEMALLOC_N(tcache_stats_merge)
#define CLOFF CLOFSET
#define isdalloct JEMALLOC_N(isdalloct)
#define LINE_VERT 0
#define TIOCM_RI TIOCM_RNG
#define R_CORE_BIN_ACC_TRYCATCH 0x20000000
#define DW_VIS_exported 0x02
#define R_HASH_CRC8_SMBUS (1ULL << R_HASH_IDX_CRC8_SMBUS)
#define LOP_EXTENDED 1
#define tsd_wrapper_set JEMALLOC_N(tsd_wrapper_set)
#define DW_TAG_subroutine_type 0x15
#define FILE_QDATE 27
#define tcache_enabled_cleanup JEMALLOC_N(tcache_enabled_cleanup)
#define RLIM_SAVED_MAX RLIM_INFINITY
#define arena_nthreads_get JEMALLOC_N(arena_nthreads_get)
#define __DARWIN_MAXPATHLEN 1024
#define RUNECODE_LINE_CROSS 0xc9
#define TIOCM_SR 0020
#define TIOCM_ST 0010
#define IPV6CTL_USE_DEPRECATED 21
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define DW_AT_enum_class 0x6d
#define R_MAGIC_NO_CHECK_TOKENS 0x100000
#define DW_CHILDREN_yes 0x01
#define OO(x) (ut64)(arena + r_offsetof (arena_t, x))
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define R2_CONS_H 
#define _GCC_SIZE_T 
#define R_SYS_TMP "TMPDIR"
#define ST8_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST8_MAX - (x))) || ((x) < 0 && (a) < ST8_MIN - (x)))
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define SIZE_CLASSES SC( 0, 3, 3, 0, no, yes, 3) SC( 1, 3, 3, 1, no, yes, 3) SC( 2, 4, 4, 1, no, yes, 4) SC( 3, 4, 4, 2, no, yes, 4) SC( 4, 4, 4, 3, no, yes, 4) SC( 5, 6, 4, 1, no, yes, 4) SC( 6, 6, 4, 2, no, yes, 4) SC( 7, 6, 4, 3, no, yes, 4) SC( 8, 6, 4, 4, no, yes, 4) SC( 9, 7, 5, 1, no, yes, 5) SC( 10, 7, 5, 2, no, yes, 5) SC( 11, 7, 5, 3, no, yes, 5) SC( 12, 7, 5, 4, no, yes, 5) SC( 13, 8, 6, 1, no, yes, 6) SC( 14, 8, 6, 2, no, yes, 6) SC( 15, 8, 6, 3, no, yes, 6) SC( 16, 8, 6, 4, no, yes, 6) SC( 17, 9, 7, 1, no, yes, 7) SC( 18, 9, 7, 2, no, yes, 7) SC( 19, 9, 7, 3, no, yes, 7) SC( 20, 9, 7, 4, no, yes, 7) SC( 21, 10, 8, 1, no, yes, 8) SC( 22, 10, 8, 2, no, yes, 8) SC( 23, 10, 8, 3, no, yes, 8) SC( 24, 10, 8, 4, no, yes, 8) SC( 25, 11, 9, 1, no, yes, 9) SC( 26, 11, 9, 2, no, yes, 9) SC( 27, 11, 9, 3, no, yes, 9) SC( 28, 11, 9, 4, yes, yes, 9) SC( 29, 12, 10, 1, no, yes, no) SC( 30, 12, 10, 2, no, yes, no) SC( 31, 12, 10, 3, no, yes, no) SC( 32, 12, 10, 4, yes, yes, no) SC( 33, 13, 11, 1, no, yes, no) SC( 34, 13, 11, 2, yes, yes, no) SC( 35, 13, 11, 3, no, yes, no) SC( 36, 13, 11, 4, yes, no, no) SC( 37, 14, 12, 1, yes, no, no) SC( 38, 14, 12, 2, yes, no, no) SC( 39, 14, 12, 3, yes, no, no) SC( 40, 14, 12, 4, yes, no, no) SC( 41, 15, 13, 1, yes, no, no) SC( 42, 15, 13, 2, yes, no, no) SC( 43, 15, 13, 3, yes, no, no) SC( 44, 15, 13, 4, yes, no, no) SC( 45, 16, 14, 1, yes, no, no) SC( 46, 16, 14, 2, yes, no, no) SC( 47, 16, 14, 3, yes, no, no) SC( 48, 16, 14, 4, yes, no, no) SC( 49, 17, 15, 1, yes, no, no) SC( 50, 17, 15, 2, yes, no, no) SC( 51, 17, 15, 3, yes, no, no) SC( 52, 17, 15, 4, yes, no, no) SC( 53, 18, 16, 1, yes, no, no) SC( 54, 18, 16, 2, yes, no, no) SC( 55, 18, 16, 3, yes, no, no) SC( 56, 18, 16, 4, yes, no, no) SC( 57, 19, 17, 1, yes, no, no) SC( 58, 19, 17, 2, yes, no, no) SC( 59, 19, 17, 3, yes, no, no) SC( 60, 19, 17, 4, yes, no, no) SC( 61, 20, 18, 1, yes, no, no) SC( 62, 20, 18, 2, yes, no, no) SC( 63, 20, 18, 3, yes, no, no) SC( 64, 20, 18, 4, yes, no, no) SC( 65, 21, 19, 1, yes, no, no) SC( 66, 21, 19, 2, yes, no, no) SC( 67, 21, 19, 3, yes, no, no) SC( 68, 21, 19, 4, yes, no, no) SC( 69, 22, 20, 1, yes, no, no) SC( 70, 22, 20, 2, yes, no, no) SC( 71, 22, 20, 3, yes, no, no) SC( 72, 22, 20, 4, yes, no, no) SC( 73, 23, 21, 1, yes, no, no) SC( 74, 23, 21, 2, yes, no, no) SC( 75, 23, 21, 3, yes, no, no) SC( 76, 23, 21, 4, yes, no, no) SC( 77, 24, 22, 1, yes, no, no) SC( 78, 24, 22, 2, yes, no, no) SC( 79, 24, 22, 3, yes, no, no) SC( 80, 24, 22, 4, yes, no, no) SC( 81, 25, 23, 1, yes, no, no) SC( 82, 25, 23, 2, yes, no, no) SC( 83, 25, 23, 3, yes, no, no) SC( 84, 25, 23, 4, yes, no, no) SC( 85, 26, 24, 1, yes, no, no) SC( 86, 26, 24, 2, yes, no, no) SC( 87, 26, 24, 3, yes, no, no) SC( 88, 26, 24, 4, yes, no, no) SC( 89, 27, 25, 1, yes, no, no) SC( 90, 27, 25, 2, yes, no, no) SC( 91, 27, 25, 3, yes, no, no) SC( 92, 27, 25, 4, yes, no, no) SC( 93, 28, 26, 1, yes, no, no) SC( 94, 28, 26, 2, yes, no, no) SC( 95, 28, 26, 3, yes, no, no) SC( 96, 28, 26, 4, yes, no, no) SC( 97, 29, 27, 1, yes, no, no) SC( 98, 29, 27, 2, yes, no, no) SC( 99, 29, 27, 3, yes, no, no) SC(100, 29, 27, 4, yes, no, no) SC(101, 30, 28, 1, yes, no, no) SC(102, 30, 28, 2, yes, no, no) SC(103, 30, 28, 3, yes, no, no) SC(104, 30, 28, 4, yes, no, no) SC(105, 31, 29, 1, yes, no, no) SC(106, 31, 29, 2, yes, no, no) SC(107, 31, 29, 3, yes, no, no) SC(108, 31, 29, 4, yes, no, no) SC(109, 32, 30, 1, yes, no, no) SC(110, 32, 30, 2, yes, no, no) SC(111, 32, 30, 3, yes, no, no) SC(112, 32, 30, 4, yes, no, no) SC(113, 33, 31, 1, yes, no, no) SC(114, 33, 31, 2, yes, no, no) SC(115, 33, 31, 3, yes, no, no) SC(116, 33, 31, 4, yes, no, no) SC(117, 34, 32, 1, yes, no, no) SC(118, 34, 32, 2, yes, no, no) SC(119, 34, 32, 3, yes, no, no) SC(120, 34, 32, 4, yes, no, no) SC(121, 35, 33, 1, yes, no, no) SC(122, 35, 33, 2, yes, no, no) SC(123, 35, 33, 3, yes, no, no) SC(124, 35, 33, 4, yes, no, no) SC(125, 36, 34, 1, yes, no, no) SC(126, 36, 34, 2, yes, no, no) SC(127, 36, 34, 3, yes, no, no) SC(128, 36, 34, 4, yes, no, no) SC(129, 37, 35, 1, yes, no, no) SC(130, 37, 35, 2, yes, no, no) SC(131, 37, 35, 3, yes, no, no) SC(132, 37, 35, 4, yes, no, no) SC(133, 38, 36, 1, yes, no, no) SC(134, 38, 36, 2, yes, no, no) SC(135, 38, 36, 3, yes, no, no) SC(136, 38, 36, 4, yes, no, no) SC(137, 39, 37, 1, yes, no, no) SC(138, 39, 37, 2, yes, no, no) SC(139, 39, 37, 3, yes, no, no) SC(140, 39, 37, 4, yes, no, no) SC(141, 40, 38, 1, yes, no, no) SC(142, 40, 38, 2, yes, no, no) SC(143, 40, 38, 3, yes, no, no) SC(144, 40, 38, 4, yes, no, no) SC(145, 41, 39, 1, yes, no, no) SC(146, 41, 39, 2, yes, no, no) SC(147, 41, 39, 3, yes, no, no) SC(148, 41, 39, 4, yes, no, no) SC(149, 42, 40, 1, yes, no, no) SC(150, 42, 40, 2, yes, no, no) SC(151, 42, 40, 3, yes, no, no) SC(152, 42, 40, 4, yes, no, no) SC(153, 43, 41, 1, yes, no, no) SC(154, 43, 41, 2, yes, no, no) SC(155, 43, 41, 3, yes, no, no) SC(156, 43, 41, 4, yes, no, no) SC(157, 44, 42, 1, yes, no, no) SC(158, 44, 42, 2, yes, no, no) SC(159, 44, 42, 3, yes, no, no) SC(160, 44, 42, 4, yes, no, no) SC(161, 45, 43, 1, yes, no, no) SC(162, 45, 43, 2, yes, no, no) SC(163, 45, 43, 3, yes, no, no) SC(164, 45, 43, 4, yes, no, no) SC(165, 46, 44, 1, yes, no, no) SC(166, 46, 44, 2, yes, no, no) SC(167, 46, 44, 3, yes, no, no) SC(168, 46, 44, 4, yes, no, no) SC(169, 47, 45, 1, yes, no, no) SC(170, 47, 45, 2, yes, no, no) SC(171, 47, 45, 3, yes, no, no) SC(172, 47, 45, 4, yes, no, no) SC(173, 48, 46, 1, yes, no, no) SC(174, 48, 46, 2, yes, no, no) SC(175, 48, 46, 3, yes, no, no) SC(176, 48, 46, 4, yes, no, no) SC(177, 49, 47, 1, yes, no, no) SC(178, 49, 47, 2, yes, no, no) SC(179, 49, 47, 3, yes, no, no) SC(180, 49, 47, 4, yes, no, no) SC(181, 50, 48, 1, yes, no, no) SC(182, 50, 48, 2, yes, no, no) SC(183, 50, 48, 3, yes, no, no) SC(184, 50, 48, 4, yes, no, no) SC(185, 51, 49, 1, yes, no, no) SC(186, 51, 49, 2, yes, no, no) SC(187, 51, 49, 3, yes, no, no) SC(188, 51, 49, 4, yes, no, no) SC(189, 52, 50, 1, yes, no, no) SC(190, 52, 50, 2, yes, no, no) SC(191, 52, 50, 3, yes, no, no) SC(192, 52, 50, 4, yes, no, no) SC(193, 53, 51, 1, yes, no, no) SC(194, 53, 51, 2, yes, no, no) SC(195, 53, 51, 3, yes, no, no) SC(196, 53, 51, 4, yes, no, no) SC(197, 54, 52, 1, yes, no, no) SC(198, 54, 52, 2, yes, no, no) SC(199, 54, 52, 3, yes, no, no) SC(200, 54, 52, 4, yes, no, no) SC(201, 55, 53, 1, yes, no, no) SC(202, 55, 53, 2, yes, no, no) SC(203, 55, 53, 3, yes, no, no) SC(204, 55, 53, 4, yes, no, no) SC(205, 56, 54, 1, yes, no, no) SC(206, 56, 54, 2, yes, no, no) SC(207, 56, 54, 3, yes, no, no) SC(208, 56, 54, 4, yes, no, no) SC(209, 57, 55, 1, yes, no, no) SC(210, 57, 55, 2, yes, no, no) SC(211, 57, 55, 3, yes, no, no) SC(212, 57, 55, 4, yes, no, no) SC(213, 58, 56, 1, yes, no, no) SC(214, 58, 56, 2, yes, no, no) SC(215, 58, 56, 3, yes, no, no) SC(216, 58, 56, 4, yes, no, no) SC(217, 59, 57, 1, yes, no, no) SC(218, 59, 57, 2, yes, no, no) SC(219, 59, 57, 3, yes, no, no) SC(220, 59, 57, 4, yes, no, no) SC(221, 60, 58, 1, yes, no, no) SC(222, 60, 58, 2, yes, no, no) SC(223, 60, 58, 3, yes, no, no) SC(224, 60, 58, 4, yes, no, no) SC(225, 61, 59, 1, yes, no, no) SC(226, 61, 59, 2, yes, no, no) SC(227, 61, 59, 3, yes, no, no) SC(228, 61, 59, 4, yes, no, no) SC(229, 62, 60, 1, yes, no, no) SC(230, 62, 60, 2, yes, no, no) SC(231, 62, 60, 3, yes, no, no)
#define ckh_search JEMALLOC_N(ckh_search)
#define SHA512_BLOCK_LENGTH 128
#define CDB_HASHSTART 5381
#define L_SET SEEK_SET
#define TOSTOP 0x00400000
#define R_GRAPH_FORMAT_DOT 4
#define DW_LNE_set_address 0x02
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define r_rbtree_foreach(root,it,data,struc,rb) for ((it) = r_rbtree_first (root); r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_next (&(it)))
#define FILE_LONG 4
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define __size_t__ 
#define DW_OP_const1u 0x08
#define R_PRINT_FLAGS_NONHEX 0x00001000
#define nstime_compare JEMALLOC_N(nstime_compare)
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define R_HASH_SIZE_CRC16_CITT 2
#define R_EDGES_X_INC 4
#define PRIoPTR "lo"
#define rbtn_black_set(a_type,a_field,a_node) do { (a_node)->a_field.rbn_right_red = (a_type *) (((intptr_t) (a_node)->a_field.rbn_right_red) & ((ssize_t)-2)); } while (0)
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define TIOCMBIC _IOW('t', 107, int)
#define _PC_CHOWN_RESTRICTED 7
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define _POSIX_BARRIERS (-1)
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define PSWP 0
#define opt_prof_accum JEMALLOC_N(opt_prof_accum)
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define rtree_get JEMALLOC_N(rtree_get)
#define pseudo_AF_HDRCMPLT 35
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define DW_CFA_set_loc 0x01
#define UNSIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { (void)(a); return !b; }
#define r_list_foreach_prev(list,it,pos) if (list) for (it = list->tail; it && (pos = it->data, 1); it = it->p)
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define _SC_XOPEN_SHM 113
#define __LONG_WIDTH__ 64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define SO_NWRITE 0x1024
#define _STDINT_H_ 
#define SIG_ERR ((void (*)(int))-1)
#define AI_NUMERICHOST 0x00000004
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define _r_free r_free
#define WAKEMON_ENABLE 0x01
#define arena_node_dalloc JEMALLOC_N(arena_node_dalloc)
#define CHILD_MAX 266
#define BUFFER_INSIZE 8192
#define DW_OP_const4s 0x0d
#define R_INTERVALTREE_H 
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define opt_tcache JEMALLOC_N(opt_tcache)
#define CDB_MAX_KEY 0xff
#define cut8 const unsigned char
#define extent_tree_ad_psearch JEMALLOC_N(extent_tree_ad_psearch)
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 42
#define DW_AT_GNU_all_call_sites 0x2117
#define IPCTL_DIRECTEDBROADCAST 9
#define TIOCCONS _IOW('t', 98, int)
#define JEMALLOC_ALLOC_JUNK ((uint8_t)0xa5)
#define tcache_enabled_set JEMALLOC_N(tcache_enabled_set)
#define DW_OP_xor 0x27
#define LONG_BIT 64
#define MSG_SEND 0x1000
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define PPPDISC 5
#define __exported __attribute__((__visibility__("default")))
#define nstime_copy JEMALLOC_N(nstime_copy)
#define CTIME 0
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define R_HASH_SIZE_XOR 1
#define tsd_get_allocates JEMALLOC_N(tsd_get_allocates)
#define esilprintf(op,fmt,...) r_strbuf_setf (&op->esil, fmt, ##__VA_ARGS__)
#define R_ASM_ARCH_LM32 R_SYS_ARCH_LM32
#define MHTNO 0
#define FIONREAD _IOR('f', 127, int)
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define EMFILE 24
#define _INTTYPES_H_ 
#define BITMAP_GROUPS_L0(nbits) BITMAP_BITS2GROUPS(nbits)
#define BITMAP_GROUPS_L2(nbits) BITMAP_BITS2GROUPS(BITMAP_BITS2GROUPS(BITMAP_BITS2GROUPS((nbits))))
#define HAS_CLOCK_MONOTONIC 0
#define FILE_FMT_DOUBLE 5
#define ZU(z) ((size_t)z)
#define R2_SIGN_H 
#define w_coredump w_T.w_Coredump
#define arena_prof_tctx_reset JEMALLOC_N(arena_prof_tctx_reset)
#define INT32_C(v) (v)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define SCNxLEAST8 SCNx8
#define SA_NODEFER 0x0010
#define arena_mapbits_large_size_get JEMALLOC_N(arena_mapbits_large_size_get)
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define st_birthtime st_birthtimespec.tv_sec
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define FP_ZERO 3
#define POLL_PRI 5
#define opt_junk_free JEMALLOC_N(opt_junk_free)
#define NODEV (dev_t)(-1)
#define KEV_DL_PROTO_ATTACHED 14
#define R_SELWIDGET_DIR_DOWN 1
#define SIGILL 4
#define IPPROTO_IRTP 28
#define MSG_EOF 0x100
#define r_oflist_serialize(x) x->array = r_flist_new (r_list_length (x)), { int idx = 0; void *ptr; RListIter *iter; r_list_foreach (x, iter, ptr) r_flist_set (x->array, idx++, ptr); } x->array;
#define HtName_(name) name ##PU
#define extent_tree_szsnad_destroy_recurse JEMALLOC_N(extent_tree_szsnad_destroy_recurse)
#define MSG_EOR 0x8
#define r_pvector_foreach(vec,it) for (it = (void **)(vec)->v.a; it != (void **)(vec)->v.a + (vec)->v.len; it++)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define DW_OP_const8u 0x0e
#define bootstrap_malloc JEMALLOC_N(bootstrap_malloc)
#define R_ASM_ARCH_OBJD R_SYS_ARCH_OBJD
#define ST16_MAX 0x7FFF
#define ENOBUFS 55
#define __FLT_MIN_10_EXP__ (-37)
#define arena_prefork3 JEMALLOC_N(arena_prefork3)
#define DW_FORM_addrx 0x1b
#define IPPROTO_DDP 37
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define POLLNLINK 0x0800
#define QUANTUM_MASK (QUANTUM - 1)
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define VARPREFIX "var"
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define _SS_MAXSIZE 128
#define PROF_TDATA_STATE_MAX PROF_TDATA_STATE_PURGATORY
#define __INTMAX_TYPE__ long int
#define DW_LANG_C_plus_plus 0x0004
#define TEXTTEST 0
#define SIGINT 2
#define EFAULT 14
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define SO_LABEL 0x1010
#define R_AGRAPH_MODE_MINI 2
#define _SC_V6_LPBIG_OFFBIG 106
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define SDB_OPTION_NONE 0
#define R_CONS_CURSOR_UP "\x1b[A"
#define TCOOFF 1
#define ckh_new JEMALLOC_N(ckh_new)
#define R_GRAPH_FORMAT_CMD 5
#define SIGIOT SIGABRT
#define R2_VERSION_MAJOR 5
#define MHTSZ 32
#define EWOULDBLOCK EAGAIN
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define PRIu32 "u"
#define R_FS_FILE_TYPE_SPECIAL 's'
#define DW_ATE_edited 0x0c
#define extent_node_achunk_get JEMALLOC_N(extent_node_achunk_get)
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define __IPHONE_9_0 90000
#define S_IXGRP 0000010
#define DW_CFA_def_cfa_offset 0x0e
#define R_QUEUE_H 
#define EBADEXEC 85
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define __ATOMIC_CONSUME 1
#define IPPROTO_DGP 86
#define R_MIDFLAGS_HIDE 0
#define DW_LANG_Fortran08 0x0023
#define DW_AT_start_scope 0x2c
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define FILE_LEFLOAT 35
#define PRIuLEAST8 PRIu8
#define PF_KEY pseudo_AF_KEY
#define atomic_cas_u JEMALLOC_N(atomic_cas_u)
#define _U_CHAR 
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define CSTOPB 0x00000400
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define arena_choose_hard JEMALLOC_N(arena_choose_hard)
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define pages_purge JEMALLOC_N(pages_purge)
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define DW_CFA_undefined 0x07
#define INTMAX_C(v) (v ## L)
#define tsd_get JEMALLOC_N(tsd_get)
#define DW_OP_plus 0x22
#define ILL_PRVOPC 3
#define _PATH_NETWORKS "/etc/networks"
#define atomic_add_uint32 JEMALLOC_N(atomic_add_uint32)
#define TCPOPT_NOP 1
#define DW_INL_inlined 0x01
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define TIOCSCONS _IO('t', 99)
#define ESHLIBVERS 87
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define pages_boot JEMALLOC_N(pages_boot)
#define DW_OP_swap 0x16
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define ticker_copy JEMALLOC_N(ticker_copy)
#define hash_fmix_64 JEMALLOC_N(hash_fmix_64)
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define tsd_nominal JEMALLOC_N(tsd_nominal)
#define R_ARRAY_SIZE(x) (sizeof (x) / sizeof ((x)[0]))
#define DW_OP_const1s 0x09
#define R_BIN_REQ_IMPORTS 0x000002
#define WCOREFLAG 0200
#define SO_NP_EXTENSIONS 0x1083
#define S_ISUID 0004000
#define KEV_DL_MASTER_ELECTED 23
#define r_list_foreach_iter(list,it) if (list) for (it = list->head; it; it = it->n)
#define SZT_SUB_OVFCHK(a,b) SZT_ADD_OVFCHK(a,-(b))
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define IPPROTO_EMCON 14
#define stats_cactive_add JEMALLOC_N(stats_cactive_add)
#define F_FLUSH_DATA 40
#define _INO64_T 
#define RUNECODESTR_LINE_UP "\xd1"
#define R2_DATDIR "/usr/local/share"
#define R_HASH_SIZE_PCPRINT 1
#define SCM_TIMESTAMP 0x02
#define pind2sz_lookup JEMALLOC_N(pind2sz_lookup)
#define IPV6_PORTRANGE_DEFAULT 0
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define MALLOCX_ARENA_MAX 0xffe
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define R2_BIND_H 
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define _U_SHORT 
#define SI_TIMER 0x10003
#define LOCAL_PEERCRED 0x001
#define ST16_MIN (-ST16_MAX-1)
#define DW_AT_main_subprogram 0x6a
#define TCP_NODELAY 0x01
#define R_BIN_REQ_DWARF 0x020000
#define R_BIN_METH_DECLARED_SYNCHRONIZED 0x0000000000200000L
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define CACHELINE 64
#define R_CONS_COLOR_DEF(x,def) ((core->cons && core->cons->context->pal.x)? core->cons->context->pal.x: def)
#define _I386__LIMITS_H_ 
#define DW_FORM_strp 0x0e
#define R_HASH_SIZE_XORPAIR 2
#define R_BIN_REQ_LIBS 0x000200
#define MALLOCX_TCACHE(tc) ((int)(((tc)+2) << 8))
#define SOMAXCONN 128
#define __IPHONE_13_0 130000
#define SDB_HT_UP_H 
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define REIL_OP_STRING(STRING) #STRING,
#define sv_onstack sv_flags
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define MALLOCX_ARENA_GET(flags) (((unsigned)(((unsigned)flags) >> 20)) - 1)
#define AF_ISDN 28
#define IN_CLASSC_NET 0xffffff00
#define TCSANOW 0
#define R_CODEC_PUNYCODE 1ULL<<2
#define R_BIN_METH_CONSTRUCTOR 0x0000000000100000L
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define ql_new(a_head) do { (a_head)->qlh_first = NULL; } while (0)
#define r_return_val_if_reached(val) do { H_LOG_ (R_LOGLVL_ERROR, "file %s: line %d (%s): should not be reached\n", __FILE__, __LINE__, R_FUNCTION); return (val); } while (0)
#define IPV6_MULTICAST_LOOP 11
#define IPV6CTL_MAXDYNROUTES 49
#define _INT32_T 
#define MDMBUF 0x00100000
#define DW_END_big 0x01
#define __WATCHOS_AVAILABLE(_vers) 
#define prof_tctx_get JEMALLOC_N(prof_tctx_get)
#define PRIdPTR "ld"
#define Color_HLINSERT Color_BGINSERT Color_INSERT
#define DW_AT_lo_user 0x2000
#define AF_IMPLINK 3
#define ENOENT 2
#define PF_HYLINK AF_HYLINK
#define _SYS_IOCTL_H_ 
#define B2400 2400
#define tsd_init_check_recursion JEMALLOC_N(tsd_init_check_recursion)
#define R_DEBRUIJN_H 
#define B300 300
#define DW_AT_description 0x5a
#define M_SQRT2 1.41421356237309504880168872420969808
#define __UINT32_TYPE__ unsigned int
#define R2_PRINT_H 
#define __FLT32X_MIN_10_EXP__ (-307)
#define arena_dalloc_small JEMALLOC_N(arena_dalloc_small)
#define Color_BYELLOW "\x1b[93m"
#define PRId16 "hd"
#define DW_LANG_Pascal83 0x0009
#define ASN1_JSON_NULL "null"
#define RUNE_LINE_UP "↑"
#define REBASE_PADDR(o,l,type_t) do { RListIter *_it; type_t *_el; r_list_foreach ((l), _it, _el) { _el->paddr += (o)->loadaddr; } } while (0)
#define __MSFILTERREQ_DEFINED 
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define DW_OP_const2s 0x0b
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define TIOCSETAF _IOW('t', 22, struct termios)
#define FMTu64 PRIu64
#define SIGTERM 15
#define WITNESS_RANK_LEAF 0xffffffffU
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define _POSIX_TIMERS (-1)
#define PTHREAD_KEYS_MAX 512
#define TIOCSETAW _IOW('t', 21, struct termios)
#define TIOCMBIS _IOW('t', 108, int)
#define JEMALLOC_HAVE_MADVISE_HUGE 
#define r_flag_space_foreach(f,it,s) r_spaces_foreach (&(f)->spaces, (it), (s))
#define BININD_INVALID ((size_t)0xffU)
#define AI_CANONNAME 0x00000002
#define DW_AT_accessibility 0x32
#define R_REGEX_ESUBREG 6
#define USERMODE(x) (((x) & 3) == 3)
#define r_list_tail(x) ((x)? (x)->tail: NULL)
#define PRId32 "d"
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define RTR_PROTOCOL_TCP 1
#define MCLSHIFT 11
#define TCACHE_STATE_MAX TCACHE_STATE_PURGATORY
#define dtob(x) ((x)<<DEV_BSHIFT)
#define TIOCM_CD TIOCM_CAR
#define huge_dalloc_junk JEMALLOC_N(huge_dalloc_junk)
#define DES_BLOCK_SIZE 8
#define huge_aalloc JEMALLOC_N(huge_aalloc)
#define DW_AT_prototyped 0x27
#define __SIZEOF_LONG_LONG__ 8
#define UT8_ADD_OVFCHK(x,y) ((UT8_MAX - (x)) < (y))
#define _SC_SYNCHRONIZED_IO 40
#define EHOSTUNREACH 65
#define malloc_tsd_dalloc JEMALLOC_N(malloc_tsd_dalloc)
#define DW_AT_containing_type 0x1d
#define DT_FIFO 1
#define UT64_SUB_OVFCHK(a,b) UT64_ADD_OVFCHK(a,-(b))
#define DW_TAG_variant_part 0x33
#define R_BIN_ENTRY_TYPE_MAIN 1
#define RLIMIT_STACK 3
#define r_list_head(x) ((x)? (x)->head: NULL)
#define PRIO_MAX 20
#define SDB_MIN_VALUE 1
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define hash_rotl_64 JEMALLOC_N(hash_rotl_64)
#define _POSIX_THREAD_KEYS_MAX 128
#define DW_OP_call2 0x98
#define IS_PRINTABLE(x) ((x) >=' ' && (x) <= '~')
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define _DIRENT_H_ 
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __LDBL_DIG__ 18
#define TIOCNOTTY _IO('t', 113)
#define R_SYS_BASE ((ut64)0x100000000)
#define PRId64 __PRI_64_LENGTH_MODIFIER__ "d"
#define ph_merge_children(a_type,a_field,a_phn,a_cmp,r_phn) do { a_type *lchild = phn_lchild_get(a_type, a_field, a_phn); if (lchild == NULL) r_phn = NULL; else { ph_merge_siblings(a_type, a_field, lchild, a_cmp, r_phn); } } while (0)
#define VINTR 8
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define CPF_IGNORE_MODE 0x0002
#define PF_NS AF_NS
#define S_IROTH 0000004
#define PT_WRITE_D 5
#define INT_FAST8_MAX INT8_MAX
#define PT_WRITE_I 4
#define prof_free_sampled_object JEMALLOC_N(prof_free_sampled_object)
#define IPPROTO_LEAF1 25
#define IPPROTO_LEAF2 26
#define SO_RANDOMPORT 0x1082
#define PT_WRITE_U 6
#define _MODE_T 
#define INCLUDE_HEAP_JEMALLOC_STD_C 
#define DW_TAG_template_value_param 0x30
#define DW_CHILDREN_no 0x00
#define ___int_ptrdiff_t_h 
#define rtree_subtree_read_hard JEMALLOC_N(rtree_subtree_read_hard)
#define GH(x) x ##_64
#define _SC_BC_DIM_MAX 10
#define prng_lg_range_u32 JEMALLOC_N(prng_lg_range_u32)
#define R_PERM_RWX (R_PERM_R|R_PERM_W|R_PERM_X)
#define ut16 unsigned short
#define je_memalign memalign
#define __APPLE_API_PRIVATE 
#define base_boot JEMALLOC_N(base_boot)
#define CDISCARD CTRL('o')
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define CDB_MAKE_H 
#define KEV_DL_NODE_ABSENCE 22
#define DW_AT_call_data_location 0x85
#define DW_OP_implicit_value 0x9e
#define RLIMIT_THREAD_CPULIMITS 0x3
#define O_BINARY 0
#define DW_CC_lo_user 0x40
#define PF_VSOCK AF_VSOCK
#define TH_SYN 0x02
#define JEMALLOC_INTERNAL_H 
#define PRNG_A_64 UINT64_C(6364136223846793005)
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define PRIoFAST8 PRIo8
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define PRIuFAST8 PRIu8
#define BITS2BYTES(x) (((x)/8)+(((x)%8)?1:0))
#define M_LN2 0.693147180559945309417232121458176568
#define MAXSYMLINKS 32
#define UF_APPEND 0x00000004
#define _U_INT16_T 
#define UT64_32U 0xFFFFFFFF00000000ULL
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define F_CHKCLEAN 41
#define ut32 unsigned int
#define R_MAGIC_NO_CHECK_COMPRESS 0x001000
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define NET_RT_DUMP 1
#define FP_PREC_53B 2
#define PF_LOCAL AF_LOCAL
#define malloc_printf JEMALLOC_N(malloc_printf)
#define TCACHE_STATE_DISABLED ((tcache_t *)(uintptr_t)1)
#define DW_ORD_col_major 0x01
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define SCNuFAST8 SCNu8
#define __WCHAR_T 
#define TCPOPT_MAXSEG 2
#define r_skiplist_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head->forward[0]; it != list->head && ((pos = it->data) || 1) && ((tmp = it->forward[0]) || 1); it = tmp)
#define FPE_FLTUND 3
#define TCPOPT_CCECHO 13
#define R_EGG_FORMAT_DEFAULT "mach0"
#define R_CONS_GREP_TOKENS 64
#define SF_SETTABLE 0x3fff0000
#define KEV_DL_SIFPHYS 4
#define X_OK (1<<0)
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
