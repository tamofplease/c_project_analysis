#define TCP_KEEPCNT 0x102
#define SI_TIMER 0x10003
#define SD_BOTH 2
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define NI_NUMERICSCOPE 0x00000100
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define HAVE_PTY __UNIX__ && LIBC_HAVE_FORK && !__sun
#define _SC_XOPEN_UNIX 115
#define ls_iter_cur(x) x->p
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define PRIO_MIN -20
#define WAIT_ANY (-1)
#define __unused __attribute__((__unused__))
#define NO_ADDRESS NO_DATA
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define IPV6CTL_KAME_VERSION 20
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define _SC_RE_DUP_MAX 16
#define ls_unref(x) x
#define tcp6_seq tcp_seq
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define _POSIX2_SW_DEV 200112L
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define ST64_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST64_MAX - (x))) || (((x) < 0) && (a) < ST64_MIN - (x)))
#define RE_DUP_MAX 255
#define IP_DEFAULT_MULTICAST_TTL 1
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define _SC_NGROUPS_MAX 4
#define SZT_MIN UT64_MIN
#define sa_sigaction __sigaction_u.__sa_sigaction
#define PRIXFAST64 PRIX64
#define IP_FW_DEL 41
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define IPV6CTL_TEMPVLTIME 34
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define HAVE_LIB_SSL 0
#define _SC_SPIN_LOCKS 80
#define MSG_HOLD 0x800
#define KEY_TO_HASH(x) ((ut32)(uintptr_t)(x))
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define ls_iter_next(x) (x?1:0)
#define _SC_IPV6 118
#define ut8p_lq(x) ((x)[7]|((x)[6]<<8)|((x)[5]<<16)|((x)[4]<<24)|((x)[3]<<32)|((x)[2]<<40)|((x)[1]<<48)|((x)[0]<<56))
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define _SC_XOPEN_REALTIME 111
#define _ASSERT_H_ 
#define st32 int
#define IPPROTO_PVP 75
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define AF_CCITT 10
#define RLIM_SAVED_MAX RLIM_INFINITY
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define TCP_NOPUSH 0x04
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define _POSIX_PRIORITIZED_IO (-1)
#define ut8p_lw(x) ((x)[1]|((x)[0]<<8))
#define NI_MAXHOST 1025
#define __DRIVERKIT_19_0 190000
#define PDEBUG_ENOERR 0
#define SO_NREAD 0x1020
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define IP_OLD_FW_ADD 50
#define GDB_SIGNALS_H 
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define IPPROTO_SEP 33
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define B1100 12
#define SET_CHANNEL_DEBUG 1
#define NL_NMAX 1
#define HAVE_LIBUV 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VALUE_TYPE void *
#define R_MAX(x,y) (((x)>(y))?(x):(y))
#define IPPROTO_IDPR 35
#define SV_RESETHAND SA_RESETHAND
#define r_list_empty(x) (!(x) || !(x)->length)
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define IPPROTO_NVPII 11
#define O_ACCMODE 0x0003
#define MSG_WAITSTREAM 0x200
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define HAVE_JEMALLOC 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define IPV6_PORTRANGE_LOW 2
#define MAX_SACK_BLKS 6
#define UT32_MAX 0xFFFFFFFFU
#define _CS_PATH 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define r_list_iter_free(x) (x)
#define ru_last ru_nivcsw
#define NET_SERVICE_TYPE_VI 3
#define _XOPEN_CRYPT (1)
#define _SC_COLL_WEIGHTS_MAX 13
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define IP_RECVDSTADDR 7
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define IPV6CTL_MRTSTATS 7
#define _SC_THREAD_PRIO_PROTECT 88
#define SHRT_MAX __SHRT_MAX__
#define FFSYNC O_FSYNC
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define AF_APPLETALK 16
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define IPCTL_ACCEPTSOURCEROUTE 13
#define R_JOIN_4_PATHS(p1,p2,p3,p4) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define IPPROTO_UDP 17
#define AF_PPP 34
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _XOPEN_UNIX (1)
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define WCHAR_MAX __WCHAR_MAX__
#define R_RUN_PROFILE_NARGS 512
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define _SC_XOPEN_SHM 113
#define AT_SYMLINK_FOLLOW 0x0040
#define _SC_TTY_NAME_MAX 101
#define _SC_XBS5_ILP32_OFF32 122
#define TIME_UTC 1
#define __FLT32_MIN_EXP__ (-125)
#define PIPE_BUF 512
#define _POSIX_SPIN_LOCKS (-1)
#define PDEBUG_EQDBG 10
#define F_GETOWN 5
#define IP_TTL 4
#define AF_LAT 14
#define NET_RT_TRASH 5
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define R_MODE_RADARE 0x001
#define UINT_LEAST64_MAX UINT64_MAX
#define IPPROTO_HMP 20
#define IPV6_FW_FLUSH 32
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define INET6_ADDRSTRLEN 46
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _POSIX2_BC_DIM_MAX 2048
#define NL_SETMAX 255
#define L_INCR SEEK_CUR
#define O_NOFOLLOW_ANY 0x20000000
#define R2_VERSION_COMMIT 27746
#define typeof(arg) __typeof__(arg)
#define MONOTONIC_NETBSD (__NetBSD__ && __NetBSD_Version__ >= 700000000)
#define ITIMER_VIRTUAL 1
#define DT_LNK 10
#define LIBQNXR_H 
#define _POSIX_TTY_NAME_MAX 9
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define __TVOS_AVAILABLE(_vers) 
#define _NETDB_H_ 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define MCAST_UNBLOCK_SOURCE 85
#define SCNd64 __SCN_64_LENGTH_MODIFIER__ "d"
#define IP_MAX_MEMBERSHIPS 4095
#define IN_MULTICAST(i) IN_CLASSD(i)
#define IPV6CTL_AUTO_FLOWLABEL 17
#define PRIdMAX __PRI_MAX_LENGTH_MODIFIER__ "d"
#define __WCHAR_MAX__ 0x7fffffff
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define _SC_2_C_DEV 19
#define PRIiFAST8 PRIi8
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define R_JOIN_2_PATHS(p1,p2) p1 R_SYS_DIR p2
#define INT16_MAX 32767
#define RLIMIT_AS 5
#define __DARWIN_PDP_ENDIAN 3412
#define SDB_API __attribute__ ((visibility ("default")))
#define _WCHAR_T 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define R_SOCKET_PROTO_CAN 0xc42b05
#define R_LIB_VERSION_HEADER(x) R_API const char *x ##_version(void)
#define __GCC_IEC_559 2
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define MCAST_LEAVE_SOURCE_GROUP 83
#define _CS_DARWIN_USER_DIR 65536
#define UT32_MIN 0U
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define __IOS_PROHIBITED 
#define SDB_MIN_KEY 1
#define EAI_PROTOCOL 13
#define __FLT_EVAL_METHOD__ 0
#define DS_MSG_OKDATA_FLAG 0x40000000
#define _SC_NPROCESSORS_CONF 57
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define __KAME_VERSION "2009/apple-darwin"
#define putc_unlocked(x,fp) __sputc(x, fp)
#define _T_PTRDIFF 
#define _PTHREAD_T 
#define AF_INET6 30
#define R_NEW(x) (x*)malloc(sizeof(x))
#define MB_CUR_MAX __mb_cur_max
#define ut8p_bd(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24))
#define IPV6CTL_HDRNESTLIMIT 15
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define _SC_XOPEN_STREAMS 114
#define _SC_THREAD_PRIO_INHERIT 87
#define r_list_foreach(list,it,pos) if (list) for (it = list->head; it && (pos = it->data, 1); it = it->n)
#define __WATCHOS_4_0 40000
#define _I386_LIMITS_H_ 
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define _XOPEN_VERSION 600
#define IN_LOOPBACKNET 127
#define IPPORT_HIFIRSTAUTO 49152
#define _POSIX_SS_REPL_MAX 4
#define __disable_tail_calls 
#define FPE_NOOP 0
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define r_flist_get(it) *(it++)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define _CTYPE_SWM 0xe0000000L
#define CLD_STOPPED 5
#define _CTYPE_SWS 30
#define NSIG __DARWIN_NSIG
#define LINK_MAX 32767
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define w_termsig w_T.w_Termsig
#define EAI_OVERFLOW 14
#define __SMBF 0x0080
#define INT8_MIN -128
#define _SOCKLEN_T 
#define R2_BIRTH "2022-04-30__12:15:59"
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _SC_TRACE_USER_EVENT_MAX 130
#define IPPROTO_XNET 15
#define R_REF_FUNCTIONS(s,n) static inline void n ##_ref(s *x) { x->R_REF_NAME++; } static inline void n ##_unref(s *x) { r_unref (x, n ##_free); }
#define MAC_OS_X_VERSION_10_14_4 101404
#define PF_UNSPEC AF_UNSPEC
#define IPPROTO_LARP 91
#define SIGPROF 27
#define R_BORROW 
#define DST_NONE 0
#define F_GETCODEDIR 72
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define READ_TIMEOUT (250 * 1000)
#define IPV6CTL_RTMINEXPIRE 26
#define DT_REG 8
#define F_ALLOCATEALL 0x00000004
#define bool _Bool
#define _SC_2_PBS_ACCOUNTING 60
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define _SC_CPUTIME 68
#define IPV6CTL_RIP6STATS 36
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define __SIG_ATOMIC_TYPE__ int
#define st_atime st_atimespec.tv_sec
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define ULONGEST ut64
#define PDEBUG_ETHREAD 2
#define __SIGN 0x8000
#define POLL_MSG 3
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define __FINITE_MATH_ONLY__ 0
#define SD_RECEIVE 0
#define IPPROTO_MEAS 19
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define FNONBLOCK O_NONBLOCK
#define __cold __attribute__((__cold__))
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")
#define _SC_MEMLOCK_RANGE 31
#define INET_ADDRSTRLEN 16
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define TH_RST 0x04
#define PDEBUG_EQPSINFO 7
#define pseudo_AF_KEY 29
#define B1000 8
#define _SC_XBS5_ILP32_OFFBIG 123
#define KEV_DL_SIFMTU 3
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define _SC_SHARED_MEMORY_OBJECTS 39
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define IPV6_FAITH 29
#define EAI_FAMILY 5
#define __FLT32_HAS_DENORM__ 1
#define ut64 unsigned long long
#define _ALLOCA_H_ 
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define _POSIX_SYMLINK_MAX 255
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define SIGFPE 8
#define B1111 15
#define ls_head(x) x->head
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define ut8 unsigned char
#define TCP_MSS 512
#define F_RDADVISE 44
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define EAI_BADHINTS 12
#define __WATCHOS_PROHIBITED 
#define BUFFER_INSIZE 8192
#define SCNiFAST16 SCNi16
#define r_flist_foreach(it,pos) r_flist_rewind(it); while (r_flist_next (it) && (pos = r_flist_get (it)))
#define h_addr h_addr_list[0]
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define SCNdLEAST8 SCNd8
#define __FLT32_MAX_10_EXP__ 38
#define _FILESEC_T 
#define INT_FAST8_MAX INT8_MAX
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define UT16_SUB_OVFCHK(a,b) UT16_ADD_OVFCHK(a,-(b))
#define TH_ECE 0x40
#define SIGHUP 1
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define __INT8_C(c) c
#define __PTHREAD_CONDATTR_SIZE__ 8
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")
#define ACCESSX_MAX_DESCRIPTORS 100
#define B10101 21
#define _U_LONG 
#define PRIi64 __PRI_64_LENGTH_MODIFIER__ "i"
#define SIGCONT 19
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define PACKET_H 
#define __UNIX__ 1
#define _ERRNO_T 
#define B10110 22
#define F_GETFL 3
#define _STDLIB_H_ 
#define WAKEMON_GET_PARAMS 0x04
#define B10001 17
#define __restrict restrict
#define __DARWIN_IPPORT_RESERVED 1024
#define KEV_DL_SIFMEDIA 5
#define _SC_BC_SCALE_MAX 11
#define IPV6CTL_MCAST_PMTU 44
#define IPPROTO_SVMTP 82
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define __SHRT_MAX__ 0x7fff
#define R_SYS_ENDIAN_LITTLE 1
#define POLLRDBAND 0x0080
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define PRIO_PGRP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define MSG_PEEK 0x2
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define FILESEC_GUID FILESEC_UUID
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define SOCK_RDM 4
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define S_IXOTH 0000001
#define R_IN 
#define R_PERM_SHAR 8
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define SIGTTOU 22
#define IP_UNBLOCK_SOURCE 73
#define IPPROTO_TRUNK1 23
#define PF_PIP pseudo_AF_PIP
#define LOCAL_PEEREPID 0x003
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define _POSIX_SYNCHRONIZED_IO (-1)
#define PRIuMAX __PRI_MAX_LENGTH_MODIFIER__ "u"
#define UT64_16U 0xFFFFFFFFFFFF0000ULL
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define SO_LINGER 0x0080
#define _SC_THREAD_KEYS_MAX 86
#define SIGSTKSZ 131072
#define B10111 23
#define _POSIX2_UPE 200112L
#define _POSIX2_BC_BASE_MAX 99
#define IPPROTO_ADFS 68
#define r_list_push(x,y) r_list_append ((x), (y))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define SSZT_SUB_OVFCHK(a,b) SSZT_ADD_OVFCHK(a,-(b))
#define SCNd16 "hd"
#define DT_DIR 4
#define _POSIX_VERSION 200112L
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define ut8p_bq(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24)|((x)[4]<<32)|((x)[5]<<40)|((x)[6]<<48)|((x)[7]<<56))
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define MSG_FLUSH 0x400
#define IPV6_2292HOPOPTS 22
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define cdb_datalen(c) ((c)->dlen)
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#define PF_SIP AF_SIP
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define R_MODE_ARRAY 0x010
#define IPPROTO_ARGUS 13
#define _SC_V6_LP64_OFF64 105
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define F_VOLPOSMODE 4
#define SOMAXCONN 128
#define NETSVC_MRKNG_LVL_L2 1
#define FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define _SC_SYMLOOP_MAX 120
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define __result_use_check __attribute__((__warn_unused_result__))
#define TODO(x) eprintf(__func__"  " x)
#define INT_FAST8_MIN INT8_MIN
#define SCNd32 "d"
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define _DELETE_OK (1<<12)
#define EAI_AGAIN 2
#define PRIO_USER 2
#define _SYS_STAT_H_ 
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __APPLE_API_STANDARD 
#define IOPOL_APPLICATION IOPOL_STANDARD
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_NEW_ADDR 1
#define AI_ADDRCONFIG 0x00000400
#define B0001 1
#define _POSIX_SPAWN (-1)
#define SF_FIRMLINK 0x00800000
#define R_PACKED(__Declaration__) __Declaration__ __attribute__((__packed__))
#define R_PERM_RW (R_PERM_R|R_PERM_W)
#define _PC_AUTH_OPAQUE_NP 14
#define ST16_ADD_OVFCHK(a,b) ((((b) > 0) && ((a) > ST16_MAX - (b))) || (((b) < 0) && ((a) < ST16_MIN - (b))))
#define NULL ((void *)0)
#define __UINT32_MAX__ 0xffffffffU
#define SET_CHANNEL_TEXT 2
#define __bool_true_false_are_defined 1
#define _POSIX_READER_WRITER_LOCKS 200112L
#define __PTHREAD_MUTEX_SIZE__ 56
#define CONNECT_DATA_AUTHENTICATED 0x4
#define B0010 2
#define __DARWIN_UNIX03 1
#define AF_ECMA 8
#define _POSIX_AIO_MAX 1
#define NETDB_SUCCESS 0
#define _POSIX_PIPE_BUF 512
#define PASS_MAX 128
#define SIGUSR1 30
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define SCNo32 "o"
#define SCNxFAST16 SCNx16
#define USE_MONOTONIC_CLOCK 0
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define SSZT_MIN ST64_MIN
#define UT8_MAX 0xFFU
#define UINT_FAST16_MAX UINT16_MAX
#define SCNuFAST32 SCNu32
#define __FLT128_MIN_EXP__ (-16381)
#define SZT_ADD_OVFCHK(x,y) ((SIZE_MAX - (x)) < (y))
#define SO_NKE 0x1021
#define IOPOL_PASSIVE 2
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define F_ADDFILESIGS 61
#define PF_RESERVED_36 AF_RESERVED_36
#define WUNTRACED 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define _SC_SHELL 78
#define __pure2 __attribute__((__const__))
#define IPPROTO_CPNX 72
#define NZERO 20
#define SCNxLEAST64 SCNx64
#define UINT16_C(v) (v)
#define LIBC_HAVE_PLEDGE 0
#define R_BIT_SET(x,y) (((ut8*)x)[y>>4] |= (1<<(y&0xf)))
#define PF_BOND ((uint32_t)0x626f6e64)
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define SAE_ASSOCID_ANY 0
#define MSG_NEEDSA 0x10000
#define IP_MULTICAST_VIF 14
#define __FLT128_MIN_10_EXP__ (-4931)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define SDB_IPI __attribute__ ((visibility ("hidden")))
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_CTYPE_inline __header_inline
#define __FLT32X_IS_IEC_60559__ 2
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define SCNo64 __SCN_64_LENGTH_MODIFIER__ "o"
#define _PC_PRIO_IO 19
#define _SYS_UNISTD_H_ 
#define EXIT_FAILURE 1
#define TCPOPT_SACK 5
#define SCNdFAST32 SCNd32
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define IP_FW_RESETLOG 45
#define R_PERM_WX (R_PERM_W|R_PERM_X)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define EAI_NONAME 8
#define _POSIX_AIO_LISTIO_MAX 2
#define _SYS_SELECT_H_ 
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define KEV_DL_SIFGENERIC 6
#define AI_V4MAPPED_CFG 0x00000200
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define IPCTL_FASTFORWARDING 14
#define __FLT128_MANT_DIG__ 113
#define R_SYS_DIR "/"
#define HAVE_LIB_MAGIC 0
#define IS_WHITECHAR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r')
#define IPV6CTL_GIF_HLIM 19
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define _VA_LIST_T_H 
#define B0111 7
#define SO_REUSEADDR 0x0004
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define NFDBITS __DARWIN_NFDBITS
#define HAVE_LIB_XXHASH 0
#define IN_CLASSB_NSHIFT 16
#define KEV_INET6_CHANGED_ADDR 2
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define AF_UTUN 38
#define _POSIX2_PBS_MESSAGE (-1)
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define R_SYS_BITS (R_SYS_BITS_32 | R_SYS_BITS_64)
#define TCP_RXT_FINDROP 0x100
#define UT64_MAX 0xFFFFFFFFFFFFFFFFULL
#define __INT64_C(c) c ## LL
#define ICMP6_FILTER 18
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define SCNuLEAST64 SCNu64
#define __DARWIN_FD_SETSIZE 1024
#define ls_foreach_safe(list,it,tmp,pos) if ((list)) for (it = list->head; it && (pos = it->data) && ((tmp = it->n) || 1); it = tmp)
#define __SERR 0x0040
#define SA_SIGINFO 0x0040
#define SO_USELOOPBACK 0x0040
#define ST8_MAX 0x7F
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TCPOLEN_CC 6
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define __KAME__ 
#define WSTOPPED 0x00000008
#define SO_DEBUG 0x0001
#define IPPROTO_WSN 74
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define PDEBUG_EPROCFS 5
#define CLD_EXITED 1
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define _POSIX_TIMEOUTS (-1)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define _SC_THREAD_ATTR_STACKSIZE 83
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define EF_IS_SYNC_ROOT 0x00000004
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define SDB_NUM_BUFSZ 64
#define IPV6_LEAVE_GROUP 13
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define SCNoFAST64 SCNo64
#define STDOUT_FILENO 1
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define UT64_8U 0xFFFFFFFFFFFFFF00ULL
#define _SC_THREAD_THREADS_MAX 94
#define _RPERM_OK (1<<19)
#define _BLKSIZE_T 
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define PDEBUG_ESPAWN 4
#define S_IRWXO 0000007
#define _INT32_T 
#define S_IRWXU 0000700
#define SD_SEND 1
#define FNDELAY O_NONBLOCK
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define IPPROTO_SCTP 132
#define _POSIX2_BC_STRING_MAX 1000
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define EF_IS_PURGEABLE 0x00000008
#define NET_SERVICE_TYPE_AV 6
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define IPPORT_RESERVEDSTART 600
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define IS_NULLSTR(x) (!(x) || !*(x))
#define getchar_unlocked() getc_unlocked(stdin)
#define SCNxFAST64 SCNx64
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define B11000 24
#define B11001 25
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define CLOCK_REALTIME _CLOCK_REALTIME
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define R_SYS_ENVSEP ":"
#define __FLT32X_MANT_DIG__ 53
#define NET_SERVICE_TYPE_BE 0
#define IPCTL_INTRQMAXLEN 10
#define R_PTR_ALIGN(v,t) ((char *)(((size_t)(v) ) & ~(t - 1)))
#define USE_PTRACE_WRAP 0
#define SSZT_MAX ST64_MAX
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define PRIuFAST16 PRIu16
#define _SC_VERSION 8
#define _SC_AIO_LISTIO_MAX 42
#define S_TYPEISSHM(buf) (0)
#define SCNx32 "x"
#define DIRBLKSIZ 1024
#define B11010 26
#define B11011 27
#define __USER_LABEL_PREFIX__ _
#define _SC_JOB_CONTROL 6
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define ls_iter_get(x) x->data; x=x->n
#define UT32_ALIGN(x) (x + (x - (x % sizeof (ut32))))
#define _SC_SIGQUEUE_MAX 51
#define CHAR_BIT __CHAR_BIT__
#define PRIxPTR "lx"
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define SCNx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define PRIuLEAST32 PRIu32
#define SCNdFAST64 SCNd64
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define IPPROTO_EON 80
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define F_BARRIERFSYNC 85
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define IPCTL_RTMAXCACHE 7
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define _BSD_MACHINE_SIGNAL_H_ 
#define WCONTINUED 0x00000010
#define UT64_MIN 0ULL
#define F_PEOFPOSMODE 3
#define PRIxFAST32 PRIx32
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define PF_NDRV AF_NDRV
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define ST8_MIN (-ST8_MAX - 1)
#define WAKEMON_DISABLE 0x02
#define ILL_ILLOPC 1
#define _SC_2_PBS_CHECKPOINT 61
#define r_flist_t void**
#define __PRI_64_LENGTH_MODIFIER__ "ll"
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define R_VERSION_H 1
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define UID_MAX 2147483647U
#define r_socket_connect_unix(a,b) r_socket_connect (a, b, b, R_SOCKET_PROTO_UNIX, 0)
#define USE_LIB_MAGIC 0
#define _SC_2_PBS_MESSAGE 63
#define SIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { if (a > 0) { if (b > 0) { return a > type_max / b; } return b < type_min / a; } if (b > 0) { return a < type_min / b; } return a && b < type_max / a; }
#define __alloca(size) __builtin_alloca(size)
#define R_SYS_ARCH "x86"
#define _READ_OK (1<<9)
#define PRIuLEAST64 PRIu64
#define MAC_OS_X_VERSION_10_12_1 101201
#define IPV6_2292HOPLIMIT 20
#define PF_NATM AF_NATM
#define _XOPEN_ENH_I18N (1)
#define KEV_DL_MASTER_ELECTED 23
#define UT32_SUB_OVFCHK(a,b) UT32_ADD_OVFCHK(a,-(b))
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define ST8_SUB_OVFCHK(a,b) ST8_ADD_OVFCHK(a,-(b))
#define _SYS_RESOURCE_H_ 
#define TMP_MAX 308915776
#define PRIdPTR "ld"
#define R_DIM(x,y,z) (((x)<(y))?(y):((x)>(z))?(z):(x))
#define POLLSTANDARD (POLLIN|POLLPRI|POLLOUT|POLLRDNORM|POLLRDBAND| POLLWRBAND|POLLERR|POLLHUP|POLLNVAL)
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define IPPROTO_PIM 103
#define r_socket_connect_tcp(a,b,c,d) r_socket_connect (a, b, c, R_SOCKET_PROTO_TCP, d)
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define S_TYPEISMQ(buf) (0)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define SCNi32 "i"
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define R_BIT_TOGGLE(x,y) ( R_BIT_CHK (x, y) ? R_BIT_UNSET (x, y): R_BIT_SET (x, y))
#define TCPOPT_SIGNATURE 19
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define S_IFMT 0170000
#define _TIME_H_ 
#define _SC_TRACE_EVENT_FILTER 98
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define PRIXFAST32 PRIX32
#define INT32_MIN (-INT32_MAX-1)
#define SIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_mid,type_max) static inline bool overflow_name(type_base a, type_base b) { return (!b || (a == type_mid && b == type_max)); }
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SS_DISABLE 0x0004
#define R_HIDDEN __attribute__((visibility("hidden")))
#define KEV_INET_PORTINUSE 8
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define IPV6CTL_ADDRCTLPOLICY 38
#define _SC_TIMER_MAX 52
#define r_socket_connect_udp(a,b,c,d) r_socket_connect (a, b, c, R_SOCKET_PROTO_UDP, d)
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define IOPOL_IMPORTANT 1
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define AF_IMPLINK 3
#define SO_BROADCAST 0x0020
#define F_THAW_FS 54
#define __FLT32_IS_IEC_60559__ 2
#define PF_UNIX PF_LOCAL
#define R_SYS_ENDIAN 0
#define __PTHREAD_RWLOCK_SIZE__ 192
#define F_SETBACKINGSTORE 70
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define KEV_DL_PROTO_DETACHED 15
#define ut16 unsigned short
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define MHTNO 0
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define MSG_DONTWAIT 0x80
#define IP_MAX_GROUP_SRC_FILTER 512
#define SIGQUIT 3
#define r_sys_perror(x) r_sys_perror_str(x);
#define __API_AVAILABLE_GET_MACRO(...) 
#define O_EVTONLY 0x00008000
#define IPPROTO_AHIP 61
#define NL_ARGMAX 9
#define IPV6CTL_STATS 6
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define SYNC_VOLUME_FULLSYNC 0x01
#define __APPLE_API_EVOLVING 
#define EF_NO_XATTRS 0x00000002
#define _BLKCNT_T 
#define _POSIX_NAME_MAX 14
#define TCPCI_OPT_WSCALE 0x00000004
#define R2_LIST_H 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define IPPROTO_KRYPTOLAN 65
#define __strong 
#define _REXT_OK (1<<17)
#define st_ctime st_ctimespec.tv_sec
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define R2_FLIST_H 
#define SCNdFAST8 SCNd8
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define IPPROTO_ESP 50
#define __MAC_10_1 1010
#define O_EXLOCK 0x00000020
#define SO_WANTOOBFLAG 0x8000
#define _STDDEF_H 
#define KEV_INET_SUBCLASS 1
#define S_IWUSR 0000200
#define _SC_MEMLOCK 30
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define MSG_EOF 0x100
#define _VA_LIST_DEFINED 
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define FUNC_ATTR_USED __attribute__((used))
#define __INT32_MAX__ 0x7fffffff
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define SCNoLEAST16 SCNo16
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define IP_FW_GET 44
#define SO_NOADDRERR 0x1023
#define __AVAILABILITY_VERSIONS__ 
#define IP_TOS 3
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define O_NDELAY O_NONBLOCK
#define _I386__PARAM_H_ 
#define NOTIFY_MEMBER_SIZE(member) sizeof(member)
#define _PC_CASE_PRESERVING 12
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIG_ERR ((void (*)(int))-1)
#define IPPROTO_PRM 21
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define SO_TYPE 0x1008
#define IPV6PORT_RESERVEDMIN 600
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define PFMTSZo "zo"
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define __APPLE__ 1
#define __UINT16_C(c) c
#define SCM_RIGHTS 0x01
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define __WATCHOS_7_2 70200
#define ru_first ru_ixrss
#define TCP_CONNECTIONTIMEOUT 0x20
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define NET_SERVICE_TYPE_RV 5
#define IP_MULTICAST_LOOP 11
#define _INTPTR_T 
#define _SC_TRACE_LOG 100
#define R_MEM_ALIGN(x) ((void *)(size_t)(((ut64)(size_t)x) & 0xfffffffffffff000LL))
#define IP_RSVP_OFF 16
#define SO_DONTTRUNC 0x2000
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define _CTYPE_C 0x00000200L
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define PRIdFAST64 PRId64
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define PRIuFAST32 PRIu32
#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define SDB_MAX_KEY 0xff
#define __APPLE_API_STABLE 
#define BC_STRING_MAX 1000
#define HAS_CLOCK_MONOTONIC 0
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define st16 short
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define EAI_MAX 15
#define __FLT128_IS_IEC_60559__ 2
#define IPPROTO_PUP 12
#define FP_PREC_64B 3
#define PRIoLEAST16 PRIo16
#define B_IS_SET(x,n) (((x) & (1ULL << (n)))? 1: 0)
#define _SC_2_SW_DEV 24
#define __APPLE_API_PRIVATE 
#define _PC_FILESIZEBITS 18
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define _WPERM_OK (1<<20)
#define CTA(x,y,z) (x+CTO(y,z))
#define KEV_DL_IF_DETACHING 10
#define SCNdLEAST32 SCNd32
#define SIG_ATOMIC_MIN INT32_MIN
#define SCNd8 __PRI_8_LENGTH_MODIFIER__ "d"
#define IP_RECVIF 20
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define MSG_EOR 0x8
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define PF_ECMA AF_ECMA
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define NET_SERVICE_TYPE_VO 4
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define PRIoFAST64 PRIo64
#define SV_ONSTACK SA_ONSTACK
#define B1101 13
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define R_FREE(x) { free((void *)x); x = NULL; }
#define KEV_DL_RRC_STATE_CHANGED 28
#define _CTYPE_R 0x00040000L
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define SIGIO 23
#define _QUAD_LOWWORD 0
#define IPV6_MAX_MEMBERSHIPS 4095
#define __FLT64_MANT_DIG__ 53
#define R_ALIGNED(x) __attribute__((aligned(x)))
#define ROFList_Parent RList
#define IPPROTO_MHRP 48
#define AT_REMOVEDIR 0x0080
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define __va_list__ 
#define TCPOLEN_SIGNATURE 18
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define IPV6CTL_SOURCECHECK 10
#define SCNxFAST8 SCNx8
#define _POSIX_NO_TRUNC 200112L
#define O_SYMLINK 0x00200000
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define AI_V4MAPPED 0x00000800
#define FUNC_ATTR_MALLOC __attribute__((malloc))
#define PRId16 "hd"
#define __SPI_AVAILABLE(...) 
#define SCNdLEAST64 SCNd64
#define R_MODE_JSON 0x008
#define AF_RESERVED_36 36
#define _DIRENT_H_ 
#define SDB_KEYSIZE 32
#define O_RDWR 0x0002
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define __FLT64X_MANT_DIG__ 64
#define POLLRDNORM 0x0040
#define IPPROTO_IPIP IPPROTO_IPV4
#define IPPROTO_TCF 87
#define _SC_XBS5_LPBIG_OFFBIG 125
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
#define SA_ONSTACK 0x0001
#define QUAD_MAX LLONG_MAX
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define NO_RECOVERY 3
#define __MMX__ 1
#define AI_UNUSABLE 0x10000000
#define IPV6_2292PKTOPTIONS 25
#define R_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define L_ctermid 1024
#define CDB_MAX_VALUE 0xffffff
#define R_MIN_DEFINED 
#define IPPROTO_IGP 85
#define EAI_NODATA 7
#define MSG_NOT_SUPPORTED -1
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define HAVE_FORK 1
#define _POSIX_THREAD_THREADS_MAX 64
#define TCPOPT_FASTOPEN 34
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define IPPROTO_TCP 6
#define SO_LINGER_SEC 0x1080
#define PRIoLEAST32 PRIo32
#define R_UNUSED __attribute__((__unused__))
#define IP_RSVP_ON 15
#define LOCK_NB 0x04
#define SCNxLEAST8 SCNx8
#define _SC_ARG_MAX 1
#define ZERO_FILL(x) memset (&x, 0, sizeof (x))
#define INT_FAST16_MIN INT16_MIN
#define _SC_V6_ILP32_OFF32 103
#define IN_CLASSC_NET 0xffffff00
#define DT_BLK 6
#define IPPROTO_3PC 34
#define EAI_MEMORY 6
#define PRIdLEAST16 PRId16
#define SCNxMAX __SCN_MAX_LENGTH_MODIFIER__ "x"
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define UF_OPAQUE 0x00000008
#define r_list_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head; it && (pos = it->data, tmp = it->n, 1); it = tmp)
#define SEEK_CUR 1
#define AF_LOCAL AF_UNIX
#define EAI_FAIL 4
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define _MCONTEXT_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define AF_UNSPEC 0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define STDERR_FILENO 2
#define IP_PORTRANGE_LOW 2
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define _IONBF 2
#define SCNxFAST32 SCNx32
#define r_offsetof(type,member) offsetof(type, member)
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define NGROUPS_MAX 16
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define PRIoLEAST64 PRIo64
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define r_ref(x) x->R_REF_NAME++;
#define R_OUT 
#define _TIME_T 
#define _POSIX_SEM_NSEMS_MAX 256
#define R_STR_UTIL_H 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MSG_DONTROUTE 0x4
#define _I386_SIGNAL_H_ 1
#define __pure 
#define IPPROTO_HELLO 63
#define WTERMSIG(x) (_WSTATUS(x))
#define S_IFLNK 0120000
#define IPPROTO_IPPC 67
#define CLD_NOOP 0
#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define _SC_XOPEN_REALTIME_THREADS 112
#define IPPROTO_RCCMON 10
#define PRIdLEAST8 PRId8
#define AF_SIP 24
#define EXIT_SUCCESS 0
#define FPE_FLTDIV 1
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SF_ARCHIVED 0x00010000
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define IPPROTO_INP 32
#define _PC_SYMLINK_MAX 24
#define _SYS_TYPES_H_ 
#define PRIdLEAST64 PRId64
#define _PC_CHOWN_RESTRICTED 7
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _POSIX_NGROUPS_MAX 8
#define MCAST_JOIN_GROUP 80
#define PRId8 __PRI_8_LENGTH_MODIFIER__ "d"
#define TH_URG 0x20
#define HAVE_CLOCK_NANOSLEEP 0
#define AF_LINK 18
#define __DTF_READALL 0x0008
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define PRIi16 "hi"
#define SIGVTALRM 26
#define O_RDONLY 0x0000
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define _PC_2_SYMLINKS 15
#define LOCK_UN 0x08
#define _POSIX_TIMER_MAX 32
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define IS_OCTAL(x) ((x) >= '0' && (x) <= '7')
#define F_SINGLE_WRITER 76
#define SO_REUSESHAREUID 0x1025
#define R_IPI 
#define r_list_iter_cur(x) (x)->p
#define NL_LANGMAX 14
#define SO_NUMRCVPKT 0x1112
#define _SC_CLK_TCK 3
#define _SC_2_VERSION 17
#define IP_FAITH 22
#define UT32_ADD_OVFCHK(x,y) ((UT32_MAX - (x)) < (y))
#define _WSTOPPED 0177
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define AF_SYSTEM 32
#define _POSIX_MQ_OPEN_MAX 8
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define _POSIX_PATH_MAX 256
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define IPV6CTL_MAXFRAGS 41
#define SO_WANTMORE 0x4000
#define IPV6CTL_MAXFRAGPACKETS 9
#define CTI(x,y,z) (*((size_t*)(CTA(x,y,z))))
#define ls_empty(x) (!x || !x->length)
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define FP_STATE_BYTES 512
#define _SC_TIMEOUTS 95
#define AF_CHAOS 5
#define LONG_MIN (-LONG_MAX - 1L)
#define F_CHECK_LV 98
#define TCP_MAX_SACK 4
#define PRIiFAST64 PRIi64
#define PF_ISO AF_ISO
#define __DTF_SKIPREAD 0x0010
#define CDB_H 
#define IP_NAT__XXX 55
#define IPPROTO_ROUTING 43
#define PF_PPP AF_PPP
#define CLD_KILLED 2
#define HAVE_ARC4RANDOM_UNIFORM 0
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define _RUNE_MAGIC_A "RuneMagA"
#define SA_64REGSET 0x0200
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define ls_iter_unref(x) x
#define IPPROTO_SDRP 42
#define SI_USER 0x10001
#define __MMX_WITH_SSE__ 1
#define __PRI_8_LENGTH_MODIFIER__ "hh"
#define __WATCHOS_UNAVAILABLE 
#define IPPROTO_DIVERT 254
#define PRIi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define PF_MAX AF_MAX
#define MONOTONIC_APPLE (__APPLE__ && CLOCK_MONOTONIC_RAW)
#define _PC_MIN_HOLE_SIZE 27
#define __DARWIN_SUF_NON_CANCELABLE 
#define _POSIX_REGEXP 200112L
#define RUSAGE_INFO_V0 0
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define SHUT_WR 1
#define _POSIX_MAX_INPUT 255
#define _WATTR_OK (1<<16)
#define ut8p_b(x) ((x)[0])
#define TCP_KEEPINTVL 0x101
#define SDB_MODE 0644
#define POLLWRBAND 0x0100
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define SDB_MAX_PATH 256
#define _STRUCT_TIMEVAL struct timeval
#define NI_NOFQDN 0x00000001
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
#define ST64_MIN ((st64)(-ST64_MAX-1))
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define PDEBUG_EQPROXY 9
#define _PC_REC_XFER_ALIGN 23
#define true 1
#define SCNiLEAST32 SCNi32
#define IPV6CTL_USE_DEFAULTZONE 39
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define _SC_XOPEN_CRYPT 108
#define EAI_SOCKTYPE 10
#define SIN6_LEN 
#define _SC_RAW_SOCKETS 119
#define __weak 
#define PF_DATAKIT AF_DATAKIT
#define _DEV_T 
#define IPPROTO_TTP 84
#define r_list_iter_get(x) (x)->data; (x)=(x)->n
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define __abortlike __dead2 __cold __not_tail_called
#define F_SETFD 2
#define UT32_GT0 0x80000000U
#define SO_DONTROUTE 0x0010
#define __DBL_MAX_EXP__ 1024
#define SOL_SOCKET 0xffff
#define F_RDAHEAD 45
#define PF_LAT AF_LAT
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __WCHAR_WIDTH__ 32
#define SCNiLEAST16 SCNi16
#define __DARWIN_BIG_ENDIAN 4321
#define BC_DIM_MAX 2048
#define R_MODE_EQUAL 0x080
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define CDB_MAX_KEY 0xff
#define KEV_INET6_NEW_LL_ADDR 4
#define R_REF_NAME refcount
#define __SSTR 0x0200
#define _POSIX_TRACE_NAME_MAX 8
#define AF_DATAKIT 9
#define FFDSYNC O_DSYNC
#define IPPROTO_CMTP 38
#define __kpi_unavailable 
#define R_ROUND(x,y) ((x)%(y))?(x)+((y)-((x)%(y))):(x)
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define DT_UNKNOWN 0
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define S_BLKSIZE 512
#define PRIo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define SCNiLEAST64 SCNi64
#define SIGINT 2
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define __TVOS_PROHIBITED 
#define _SC_STREAM_MAX 26
#define S_IREAD S_IRUSR
#define _STRUCT_IOVEC 
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS 0
#define R_SOCKET_PROTO_TCP IPPROTO_TCP
#define SO_TIMESTAMP 0x0400
#define IPV6CTL_MRTPROTO 8
#define _POSIX_SSIZE_MAX 32767
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define PFMTDPTR "td"
#define FUNC_ATTR_ALWAYS_INLINE __attribute__((always_inline))
#define r_list_foreach_prev_safe(list,it,tmp,pos) for (it = list->tail; it && (pos = it->data, tmp = it->p, 1); it = tmp)
#define _SYS_SIGNAL_H_ 
#define SEGV_MAPERR 1
#define SDB_MAX_GPERF_KEYS 15000
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define __PTHREAD_ONCE_SIZE__ 8
#define SCNdFAST16 SCNd16
#define IPV6_UNICAST_HOPS 4
#define PF_VLAN ((uint32_t)0x766c616e)
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define DIRSEP '/'
#define IPPROTO_BHA 49
#define _PTRDIFF_T_DECLARED 
#define _SC_2_PBS_LOCATE 62
#define LIBC_HAVE_PTRACE 1
#define __AVAILABILITY__ 
#define NI_MAXSERV 32
#define TCP_NOTSENT_LOWAT 0x201
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define HtName_(name) name ##PP
#define __tune_core2__ 1
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define KEV_INET_ARPCOLLISION 7
#define FPE_FLTOVF 2
#define KEV_DL_SIFMETRICS 2
#define _SC_SS_REPL_MAX 126
#define __ATOMIC_HLE_ACQUIRE 65536
#define _PTRDIFF_T 
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define MCAST_EXCLUDE 2
#define _NETINET6_IN6_H_ 
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define COLL_WEIGHTS_MAX 2
#define _PC_VDISABLE 9
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define IPPROTO_AH 51
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define IPV6_RTHDR_TYPE_0 0
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define IPPROTO_CPHB 73
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define O_NONBLOCK 0x00000004
#define SCNiPTR "li"
#define __MAC_10_14_1 101401
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define WAKEMON_MAKE_FATAL 0x10
#define R_EMPTY2 {{ 0 }}
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define __dead 
#define UT64_ALIGN(x) (x + (x - (x % sizeof (ut64))))
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define FUNC_ATTR_ALLOC_SIZE_PROD(x,y) __attribute__((alloc_size(x,y)))
#define SDB_KSZ 0xff
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define __FLT64X_MIN_EXP__ (-16381)
#define r_oflist_destroy(x) r_oflist_deserialize (x)
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define PRIxLEAST8 PRIx8
#define ferror_unlocked(p) __sferror(p)
#define PRIiLEAST32 PRIi32
#define ST32_MAX 0x7FFFFFFF
#define __WATCHOS_5_2 50200
#define HEAPTYPE(x) static x* x ##_new(x n) { x *m = malloc(sizeof (x)); return m? *m = n, m: m; }
#define IPPROTO_BLT 30
#define R_CHECKS_LEVEL 2
#define _SECURE__COMMON_H_ 
#define IPV6_FW_DEL 31
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define UT8_SUB_OVFCHK(a,b) UT8_ADD_OVFCHK(a,-(b))
#define R2_INCDIR "/usr/local/include/libr"
#define UINT64_C(v) (v ## ULL)
#define IPCTL_MAXID 17
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define _SC_ADVISORY_INFO 65
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define _SC_MEMORY_PROTECTION 32
#define _SC_ASYNCHRONOUS_IO 28
#define O_DP_GETRAWENCRYPTED 0x0001
#define R_MIN(x,y) (((x)>(y))?(y):(x))
#define AI_CANONNAME 0x00000002
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define IP_DUMMYNET_DEL 61
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define HAVE_MMAN 1
#define SUN_LEN(su) (sizeof(*(su)) - sizeof((su)->sun_path) + strlen((su)->sun_path))
#define __API_DEPRECATED_END 
#define __SOPT 0x0400
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define SAE_CONNID_ANY 0
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define UINTPTR_MAX 18446744073709551615UL
#define IPPROTO_IGMP 2
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define PDEBUG_PROTOVER_MAJOR 0x00000000
#define PRIoFAST32 PRIo32
#define PRIx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define SET_CHANNEL_NAK 0xff
#define stdout __stdoutp
#define IPV6CTL_PREFER_TEMPADDR 37
#define PRIiLEAST64 PRIi64
#define KEV_DL_SIFFLAGS 1
#define TCPOLEN_WINDOW 3
#define NETDB_INTERNAL -1
#define __GXX_ABI_VERSION 1016
#define UT32_HI(x) ((ut32)(((ut64)(x))>>32)&UT32_MAX)
#define __IDSTRING(name,string) static const char name[] __used = string
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define ARCH_ARM_32 2
#define _SC_PAGESIZE 29
#define MSG_HAVEMORE 0x2000
#define _SC_XOPEN_XCU_VERSION 121
#define IPPROTO_RAW 255
#define UINT_LEAST16_MAX UINT16_MAX
#define IPPROTO_APES 99
#define R_OWN 
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define __SNPT 0x0800
#define UF_NODUMP 0x00000001
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define R_HEAP 
#define pseudo_AF_RTIP 22
#define NI_DGRAM 0x00000010
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define _SC_READER_WRITER_LOCKS 76
#define WEXITED 0x00000004
#define _PC_LINK_MAX 1
#define INT64_MAX 9223372036854775807LL
#define IPCTL_DEFTTL 3
#define B0100 4
#define B0101 5
#define MONOTONIC_LINUX (__linux__ && _POSIX_C_SOURCE >= 199309L)
#define __ILP32_OFF32 (-1)
#define B1110 14
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define SCNx64 __SCN_64_LENGTH_MODIFIER__ "x"
#define IP_FW_ADD 40
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define _POSIX_SHELL 200112L
#define WNOHANG 0x00000001
#define alloca(size) __alloca(size)
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define R_JOIN_5_PATHS(p1,p2,p3,p4,p5) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4 R_SYS_DIR p5
#define _XOPEN_SHM (1)
#define PF_IPX AF_IPX
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define UF_DATAVAULT 0x00000080
#define __x86_64 1
#define TCPOLEN_MAXSEG 4
#define SEGV_ACCERR 2
#define _POSIX2_C_BIND 200112L
#define _SYS_DIRENT_H 
#define IPCTL_DIRECTEDBROADCAST 9
#define sdb_aforeach(x,y) { char *next; if (y) for (x=y;;) { x = sdb_anext (x, &next);
#define O_NOCTTY 0x00020000
#define __PTRDIFF_T 
#define __SALC 0x4000
#define __packed __attribute__((__packed__))
#define IPCTL_SENDREDIRECTS 2
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define UT32_LO(x) ((ut32)((x)&UT32_MAX))
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define MCAST_LEAVE_GROUP 81
#define IP_RECVRETOPTS 6
#define FASYNC O_ASYNC
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define ST32_MIN (-ST32_MAX-1)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define __INT_FAST64_TYPE__ long long int
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define IPPROTO_WBMON 78
#define S_TYPEISTMO(buf) (0)
#define SDB_HT_PP_H 
#define _POSIX2_FORT_RUN 200112L
#define UT8_MIN 0x00U
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define _SC_MQ_OPEN_MAX 46
#define _XOPEN_STREAMS (-1)
#define _GID_T 
#define POLLNVAL 0x0020
#define IPV6CTL_KEEPFAITH 13
#define S_IRWXG 0000070
#define F_GETFD 1
#define KEV_DL_IFDELEGATE_CHANGED 25
#define SCNuLEAST8 SCNu8
#define _ANSI_STDDEF_H 
#define IPV6CTL_TEMPPLTIME 33
#define IPPROTO_SRPC 90
#define F_PREALLOCATE 42
#define NI_WITHSCOPEID 0x00000020
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define IPPROTO_ENCAP 98
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define WINT_MIN INT32_MIN
#define fileno_unlocked(p) __sfileno(p)
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define EXTRACT_SIGNED_INTEGER(addr,len) extract_signed_integer ((const ut8 *)addr, len, 0)
#define PRIx16 "hx"
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define IOPOL_DEFAULT 0
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define UF_SETTABLE 0x0000ffff
#define __KFBSD__ 0
#define DST_WET 3
#define __OSX_AVAILABLE(_vers) 
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define R_MODE_SIMPLE 0x004
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define F_SETLKWTIMEOUT 10
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SO_RCVLOWAT 0x1004
#define SCNuFAST64 SCNu64
#define __ILP32_OFFBIG (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SCN_64_LENGTH_MODIFIER__ "ll"
#define __SIZE_TYPE__ long unsigned int
#define IPPROTO_MTP 92
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define SCNi64 __SCN_64_LENGTH_MODIFIER__ "i"
#define __not_tail_called 
#define ls_length(x) x->length
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define PF_COIP AF_COIP
#define PRIx32 "x"
#define IP_OLD_FW_GET 54
#define __LP64__ 1
#define IPV6_IPSEC_POLICY 28
#define UTIME_NOW -1
#define IPPROTO_MUX 18
#define SCNu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define S_ISVTX 0001000
#define IPV6_MULTICAST_IF 9
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define _POSIX_CLOCKRES_MIN 20000000
#define _POSIX_JOB_CONTROL 200112L
#define IPPROTO_CFTP 62
#define PDEBUG_EPROCSTOP 6
#define IPCTL_SOURCEROUTE 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define SCNoMAX __SCN_MAX_LENGTH_MODIFIER__ "o"
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SO_SNDTIMEO 0x1005
#define SIGUSR2 31
#define F_TRIM_ACTIVE_FILE 100
#define _APPEND_OK (1<<13)
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define UQUAD_MAX ULLONG_MAX
#define IP_DUMMYNET_GET 64
#define F_GETLK 7
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define __nonnull 
#define S_IFREG 0100000
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define SCHAR_MAX __SCHAR_MAX__
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define KEV_DL_LINK_ON 13
#define IPPROTO_XTP 36
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define PRIx64 __PRI_64_LENGTH_MODIFIER__ "x"
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define _CACHED_RUNES (1 <<8 )
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define O_DSYNC 0x400000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define SOCK_MAXADDRLEN 255
#define CHAR_MAX SCHAR_MAX
#define B_UNSET(x,n) ((x) &= ~(1ULL << (n)))
#define _INTTYPES_H_ 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define TCPOPT_WINDOW 3
#define WAIT_MYPGRP 0
#define INT_LEAST8_MAX INT8_MAX
#define ST16_MAX 0x7FFF
#define IPPROTO_ST 7
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define _SYS_SYSLIMITS_H_ 
#define IP_RECVTOS 27
#define __WATCHOS_4_1 40100
#define IPV6CTL_ACCEPT_RTADV 12
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define TCPOPT_SACK_PERMITTED 4
#define R_BIT_CHK(x,y) (*(x) & (1<<(y)))
#define TARGET_OS_IPHONE 0
#define IPPROTO_TP 29
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define IN_CLASSC_HOST 0x000000ff
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define B11100 28
#define B11101 29
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define F_ADDFILESUPPL 104
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define _SC_FILE_LOCKING 69
#define __FLT64X_DECIMAL_DIG__ 21
#define AF_ISDN 28
#define SIZE_T_MAX ULONG_MAX
#define DS_MSG_NO_RESPONSE 0x80000000
#define PF_OSI AF_ISO
#define R2_TYPES_BASE_H 
#define QNXNTO_NSIG 57
#define B11110 30
#define B11111 31
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define TCP_MINMSS 216
#define F_WRLCK 3
#define GETSIGSINFO_PLATFORM_BINARY 1
#define BUFFER_H 
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define RENAME_SWAP 0x00000002
#define FPE_FLTSUB 6
#define SCNoFAST8 SCNo8
#define buffer_PUTC(s,c) ( ((s)->n != (s)->p) ? ( (s)->x[(s)->p++] = (c), 0 ) : buffer_put((s),&(c),1) )
#define _PC_NAME_MAX 4
#define TCP6_MSS 1024
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define PRIoFAST8 PRIo8
#define IPPROTO_SCCSP 96
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define IPV6CTL_SENDREDIRECTS 2
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define __LDBL_HAS_INFINITY__ 1
#define _PC_MAX_CANON 2
#define __OS_AVAILABILITY(_target,_availability) 
#define PF_INET6 AF_INET6
#define EQUIV_CLASS_MAX 2
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define _SC_BC_BASE_MAX 9
#define MSG_CTRUNC 0x20
#define IP_RECVTTL 24
#define IPPROTO_INLSP 52
#define TTCP_CLIENT_SND_WND 4096
#define SDB_OPTION_FS (1 << 2)
#define __FLT_DIG__ 6
#define SF_SUPPORTED 0x009f0000
#define IP_PKTINFO 26
#define __NO_INLINE__ 1
#define AF_CNT 21
#define IPV6CTL_LOG_INTERVAL 14
#define WANT_DYLINK 1
#define ARG_MAX (1024 * 1024)
#define DEBUGGER 1
#define B_ODD(x) (!B_EVEN((x)))
#define O_EXCL 0x00000800
#define CLOCKS_PER_SEC 1000000
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define SO_NET_SERVICE_TYPE 0x1116
#define __DARWIN_NON_CANCELABLE 0
#define R_PERM_CREAT 64
#define IPPROTO_TRUNK2 24
#define X86_32 ARCH_X86_32
#define S_TYPEISSEM(buf) (0)
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define TCPOLEN_FASTOPEN_REQ 2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define IPPROTO_IGRP 88
#define IPCTL_STATS 12
#define SO_SNDLOWAT 0x1003
#define IPV6CTL_RTEXPIRE 25
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define SIGEV_THREAD 3
#define PF_APPLETALK AF_APPLETALK
#define IPV6_2292PKTINFO 19
#define R_INVALID_SOCKET -1
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define IPV6_TCLASS 36
#define __enum_options 
#define CHAR_MIN SCHAR_MIN
#define MAX_CANON 1024
#define __FLT_MANT_DIG__ 24
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define __LDBL_DECIMAL_DIG__ 21
#define _SC_V6_LPBIG_OFFBIG 106
#define INT_LEAST8_MIN INT8_MIN
#define r_flist_iterator(x) x
#define __VERSION__ "11.2.0"
#define _SC_NPROCESSORS_ONLN 58
#define _PC_NO_TRUNC 8
#define _SC_TRACE_NAME_MAX 128
#define HAVE_SYSTEM 1
#define s6_addr __u6_addr.__u6_addr8
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define B_EVEN(x) (((x) & 1) == 0)
#define POLLATTRIB 0x0400
#define PF_SYSTEM AF_SYSTEM
#define _SS_MAXSIZE 128
#define _PTRDIFF_T_ 
#define IPPROTO_DONE 257
#define __used __attribute__((__used__))
#define PRIXLEAST16 PRIX16
#define SO_KEEPALIVE 0x0008
#define ILL_ILLTRP 2
#define O_APPEND 0x00000008
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define SF_APPEND 0x00040000
#define _PC_CASE_SENSITIVE 11
#define X86_64 ARCH_X86_64
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define _SECURE__STRINGS_H_ 
#define BADSIG SIG_ERR
#define AT_EACCESS 0x0010
#define B1001 9
#define ILL_BADSTK 8
#define KEV_DL_ISSUES 24
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define _XOPEN_NAME_MAX 255
#define AF_INET 2
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define INT_LEAST32_MIN INT32_MIN
#define PRIXLEAST32 PRIX32
#define UT8_ADD_OVFCHK(x,y) ((UT8_MAX - (x)) < (y))
#define DSHDR_MSG_BIG_ENDIAN 0x80
#define B1010 10
#define B1011 11
#define DST_EET 5
#define INT_FAST16_MAX INT16_MAX
#define _SECURE__STRING_H_ 
#define _IN_PORT_T 
#define _UNISTD_H_ 
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define POLLOUT 0x0004
#define _SC_EXPR_NEST_MAX 14
#define IPV6CTL_RTMAXCACHE 27
#define _PC_REC_INCR_XFER_SIZE 20
#define SDB_LIST_UNSORTED 0
#define SDB_KT ut32
#define _SC_CLOCK_SELECTION 67
#define _SYS__TYPES_H_ 
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define EAI_SERVICE 9
#define IPPROTO_PGM 113
#define st_mtime st_mtimespec.tv_sec
#define __INT_LEAST32_MAX__ 0x7fffffff
#define UF_HIDDEN 0x00008000
#define LINE_MAX 2048
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define PF_INET AF_INET
#define TRAP_TRACE 2
#define ls_iterator(x) (x)?(x)->head:NULL
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define INADDR_ANY (u_int32_t)0x00000000
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define PRIXLEAST64 PRIX64
#define RLIMIT_CPU 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define IPPROTO_AX25 93
#define F_GETPATH 50
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define LIBC_HAVE_FORK 1
#define DS_DATA_MAX_SIZE 1024
#define F_ULOCK 0
#define RENAME_SECLUDE 0x00000001
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define KEV_INET_ARPRTRALIVE 10
#define IPCTL_RTEXPIRE 5
#define DTF_REWIND 0x0004
#define UT16_ALIGN(x) (x + (x - (x % sizeof (ut16))))
#define _SC_TRACE 97
#define _POSIX2_EXPR_NEST_MAX 32
#define __SLBF 0x0001
#define RLIMIT_RSS RLIMIT_AS
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define _SC_FSYNC 38
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define __FLT32_MANT_DIG__ 24
#define DT_SOCK 12
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define IN_CLASSB_NET 0xffff0000
#define PRIO_DARWIN_NONUI 0x1001
#define F_ADDFILESIGS_INFO 103
#define ARM_64 ARCH_ARM_64
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define __LP64_OFF64 (1)
#define clearerr_unlocked(p) __sclearerr(p)
#define PRIX8 __PRI_8_LENGTH_MODIFIER__ "X"
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define KEV_DL_NODE_PRESENCE 21
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define PFMT64o "llo"
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define _CLOCK_T 
#define _SC_PRIORITY_SCHEDULING 35
#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define PFMT64x "llx"
#define SHUT_RDWR 2
#define IP_MAX_SOCK_SRC_FILTER 128
#define pseudo_AF_PIP 25
#define _INTMAX_T 
#define ST64_SUB_OVFCHK(a,b) ST64_ADD_OVFCHK(a,-(b))
#define _SC_2_LOCALEDEF 23
#define AF_NS 6
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define SCNuLEAST16 SCNu16
#define IPV6_MULTICAST_HOPS 10
#define _CHOWN_OK (1<<21)
#define R_BETWEEN(x,y,z) (((y)>=(x)) && ((y)<=(z)))
#define F_FREEZE_FS 53
#define O_DIRECTORY 0x00100000
#define SSIZE_MAX LONG_MAX
#define __SRD 0x0004
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define SEEK_HOLE 3
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define _SC_SEM_VALUE_MAX 50
#define AF_SNA 11
#define ST64_MAX ((st64)0x7FFFFFFFFFFFFFFFULL)
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define R_TYPES_OVERFLOW_H 
#define POLL_ERR 4
#define AT_FDCWD -2
#define __IOS_UNAVAILABLE 
#define AI_ALL 0x00000100
#define _SC_MQ_PRIO_MAX 75
#define INT32_MAX 2147483647
#define KEV_DL_DELMULTI 8
#define SDB_SS ","
#define PDEBUG_PROTOVER_MINOR 0x00000003
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define IPV6CTL_FORWSRCRT 5
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define _U_INT8_T 
#define R_JOIN_3_PATHS(p1,p2,p3) p1 R_SYS_DIR p2 R_SYS_DIR p3
#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define TRY_AGAIN 2
#define _PATH_PROTOCOLS "/etc/protocols"
#define _U_CHAR 
#define PRIX16 "hX"
#define _POSIX2_LOCALEDEF 200112L
#define NL_TEXTMAX 2048
#define PRIiFAST32 PRIi32
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define _ARPA_INET_H_ 
#define _PC_ASYNC_IO 17
#define PRIO_DARWIN_BG 0x1000
#define O_TRUNC 0x00000400
#define SSZT_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > SSIZE_MAX - (x))) || (((x) < 0) && (a) < SSIZE_MIN - (x)))
#define R_API __attribute__((visibility("default")))
#define PF_XTP pseudo_AF_XTP
#define __FLT128_HAS_DENORM__ 1
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define F_SETFL 4
#define DTF_HIDEW 0x0001
#define SIG_UNBLOCK 2
#define IP_MULTICAST_IF 9
#define _POSIX_RTSIG_MAX 8
#define IPPROTO_OSPFIGP 89
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define IP_IPSEC_POLICY 21
#define FPE_INTOVF 8
#define MAC_OS_X_VERSION_10_15_1 101501
#define IPV6_SOCKOPT_RESERVED1 3
#define AF_DLI 13
#define st8 signed char
#define __FLT128_DIG__ 33
#define KEV_INET_CHANGED_ADDR 2
#define __OSX_UNAVAILABLE 
#define IN_CLASSB_MAX 65536
#define R_MAX_DEFINED 
#define __INT32_C(c) c
#define SCNiLEAST8 SCNi8
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define __ORDER_PDP_ENDIAN__ 3412
#define WANT_THREADS 1
#define PRIo64 __PRI_64_LENGTH_MODIFIER__ "o"
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define _POSIX_MEMLOCK (-1)
#define TH_PUSH 0x08
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define __DARWIN_MAXPATHLEN 1024
#define PF_PUP AF_PUP
#define IP_ADD_MEMBERSHIP 12
#define F_NODIRECT 62
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define IN_CLASSD_NSHIFT 28
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define PF_KEY pseudo_AF_KEY
#define SIGSEGV 11
#define NET_RT_DUMP2 7
#define _Null_unspecified 
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define R_ENDIAN_H 
#define RLIMIT_NPROC 7
#define SO_ACCEPTCONN 0x0002
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define LOCAL_PEEREUUID 0x005
#define USE_MMAN HAVE_MMAN
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define IN_CLASSD_HOST 0x0fffffff
#define AF_ROUTE 17
#define __DARWIN_NO_LONG_LONG 0
#define IPV6_PORTRANGE 14
#define SCNi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define FOOTPRINT_INTERVAL_RESET 0x1
#define UINT64_MAX 18446744073709551615ULL
#define BUFFER_INIT(op,fd,buf,len) { (buf), 0, (len), (fd), (op) }
#define PRIoFAST16 PRIo16
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define r_oflist_delete(x,y) r_oflist_deserialize (x), r_list_delete (x, y)
#define LOCAL_PEERTOKEN 0x006
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define R2_SOCKET_H 
#define MCAST_BLOCK_SOURCE 84
#define SIG_DFL (void (*)(int))0
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define MCAST_INCLUDE 1
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_OK 0
#define _PC_PATH_MAX 5
#define _XOPEN_REALTIME_THREADS (-1)
#define __SAPP 0x0100
#define F_GETSIGSINFO 105
#define TCPOPT_MAXSEG 2
#define _KEY_T 
#define r_list_head(x) ((x)? (x)->head: NULL)
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define MSG_SEND 0x1000
#define ARM_32 ARCH_ARM_32
#define _INT64_T 
#define IPV6_FW_ADD 30
#define _POSIX_CHILD_MAX 25
#define DST_MET 4
#define SS_ONSTACK 0x0001
#define _STDARG_H 
#define R2_ETCDIR "/etc"
#define TCP_FASTOPEN 0x105
#define F_SETLK 8
#define TH_FIN 0x01
#define R2_TYPES_H 
#define _SC_2_FORT_RUN 22
#define UT16_MIN 0U
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define SDB_MAX_VALUE 0xffffff
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define _POSIX_THREADS 200112L
#define TCP_MAXSEG 0x02
#define F_ADDFILESIGS_RETURN 97
#define TS_TEXT_MAX_SIZE 100
#define _POSIX_THREAD_CPUTIME (-1)
#define F_SETOWN 6
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IPPROTO_ND 77
#define __CTYPE_H_ 
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define _INCLUDE_R_LIST_HEAD_H_ 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define NI_NUMERICSERV 0x00000008
#define __FLT64X_DIG__ 18
#define __SDB_HT_H 
#define UT16_ADD_OVFCHK(x,y) ((UT16_MAX - (x)) < (y))
#define FWRITE 0x00000002
#define IP_DONTFRAG 28
#define _SYS_FCNTL_H_ 
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define __INT8_TYPE__ signed char
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define _UINTMAX_T 
#define _SC_PRIORITIZED_IO 34
#define PF_CNT AF_CNT
#define IP_PORTRANGE_HIGH 1
#define UT8_GT0 0x80U
#define KEV_DL_SUBCLASS 2
#define MSG_RCVMORE 0x4000
#define IP_RECVPKTINFO IP_PKTINFO
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SF_DATALESS 0x40000000
#define F_GLOBAL_NOCACHE 55
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define F_GETLKPID 66
#define _SC_V6_ILP32_OFFBIG 104
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define _SC_THREAD_SPORADIC_SERVER 92
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _SYS_SOCKET_H_ 
#define PRIxMAX __PRI_MAX_LENGTH_MODIFIER__ "x"
#define _toupper(c) __toupper(c)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define ls_foreach_prev(list,it,pos) if ((list)) for (it = list->tail; it && (pos = it->data); it = it->p)
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define PF_ISDN AF_ISDN
#define F_TLOCK 2
#define __SOFF 0x1000
#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define _NETINET_IN_H_ 
#define __FLT_RADIX__ 2
#define IPV6CTL_MAXID 51
#define SO_REUSEPORT 0x0200
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define SIG_HOLD (void (*)(int))5
#define DS_DATA_RCV_SIZE(msg,total) ((total) - (sizeof(*(msg)) - DS_DATA_MAX_SIZE))
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 0x0080
#define F_FULLFSYNC 51
#define minor(x) ((int32_t)((x) & 0xffffff))
#define R2_CONFIGURE_H 
#define r_unref(x,f) { assert (x->R_REF_NAME> 0); if (!--(x->R_REF_NAME)) { f(x); } }
#define POLLPRI 0x0002
#define IP_DROP_MEMBERSHIP 13
#define UT64_GT0 0x8000000000000000ULL
#define PTHREAD_STACK_MIN 8192
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define __SSE_MATH__ 1
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define _U_INT32_T 
#define B_SET(x,n) ((x) |= (1ULL << (n)))
#define _POSIX_ARG_MAX 4096
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __k8 1
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define BUFSIZ 1024
#define _FSFILCNT_T 
#define IP_FW_ZERO 43
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define IP_RETOPTS 8
#define SCNx16 "hx"
#define ARCH_X86_32 1
#define R_MODE_CLASSDUMP 0x040
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define __DSMSGS_H__ 
#define KEV_DL_IF_ATTACHED 9
#define MSG_TRUNC 0x10
#define IP_MIN_MEMBERSHIPS 31
#define F_TEST 3
#define _UID_T 
#define AF_NDRV 27
#define TCPOPT_CC 11
#define SCNxLEAST32 SCNx32
#define PRIu16 "hu"
#define IPPROTO_EGP 8
#define UF_TRACKED 0x00000040
#define UT64_LT0 0x7FFFFFFFFFFFFFFFULL
#define INT_LEAST64_MAX INT64_MAX
#define _PATH_SERVICES "/etc/services"
#define __WATCHOS_3_1_1 30101
#define TCP_NOOPT 0x08
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define AT_REALDEV 0x0200
#define IPV6_FW_GET 34
#define PERSIST_TIMEOUT 0x40
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define IPPROTO_IP 0
#define TCP_RXT_CONNDROPTIME 0x80
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define O_CLOEXEC 0x01000000
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define PRIu32 "u"
#define IP_OLD_FW_DEL 51
#define ARCH_X86_64 0
#define _W_INT(w) (*(int *)&(w))
#define KVLSZ 4
#define KEV_INET6_ADDR_DELETED 3
#define IPPROTO_ICMPV6 58
#define _ID_T 
#define SCNu64 __SCN_64_LENGTH_MODIFIER__ "u"
#define _POSIX2_PBS_CHECKPOINT (-1)
#define IPPORT_USERRESERVED 5000
#define AF_OSI AF_ISO
#define _SYS_UN_H_ 
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define IPV6CTL_RR_PRUNE 22
#define SYNC_VOLUME_WAIT 0x02
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define IN_CLASSA_MAX 128
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define _SYS_STDIO_H_ 
#define TCP_CONNECTION_INFO 0x106
#define __DARWIN_64_BIT_INO_T 1
#define R2_LIBDIR "/usr/local/lib"
#define S_IFCHR 0020000
#define IPPROTO_SATMON 69
#define __TVOS_14_0 140000
#define IP_OLD_FW_FLUSH 52
#define PFMTSZd "zd"
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define PFMTSZu "zu"
#define INTPTR_MIN (-INTPTR_MAX-1)
#define PFMTSZx "zx"
#define IPV6CTL_MAXIFPREFIXES 47
#define INT8_C(v) (v)
#define FP_CHOP 3
#define IP_MSFILTER 74
#define _WRITE_OK (1<<10)
#define _SC_DELAYTIMER_MAX 45
#define PRIu64 __PRI_64_LENGTH_MODIFIER__ "u"
#define S_IFDIR 0040000
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define IPPROTO_MAX 256
#define TRAP_BRKPT 1
#define SCNoPTR "lo"
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 18
#define SF_NOUNLINK 0x00100000
#define IP_BLOCK_SOURCE 72
#define IP_MULTICAST_IFINDEX 66
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define R_PERM_ACCESS 32
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define O_CREAT 0x00000200
#define _SC_SAVED_IDS 7
#define TCPOLEN_SACK_PERMITTED 2
#define HT_(name) HtPP ##name
#define va_start(v,l) __builtin_va_start(v,l)
#define PRIxLEAST16 PRIx16
#define _USE_FORTIFY_LEVEL 2
#define R2_VERSION_NUMBER 50504
#define _EXECUTE_OK (1<<11)
#define PFMT32d "d"
#define F_ALLOCATECONTIG 0x00000002
#define PRIdLEAST32 PRId32
#define __INT_FAST16_MAX__ 0x7fff
#define KEV_INET6_SUBCLASS 6
#define __PTHREAD_SIZE__ 8176
#define CONFIG_H 
#define R_SYS_BASE ((ut64)0x100000000)
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define PERROR_WITH_FILELINE 0
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define R_NEWS(x,y) (x*)malloc(sizeof(x)*(y))
#define R_EMPTY { 0 }
#define INT_LEAST64_MIN INT64_MIN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define _POSIX_MONOTONIC_CLOCK (-1)
#define r_oflist_free(x) r_oflist_deserialize (x), r_list_free (x)
#define F_SETNOSIGPIPE 73
#define PRIxLEAST32 PRIx32
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define ST32_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST32_MAX - (x))) || (((x) < 0) && (a) < ST32_MIN - (x)))
#define _SC_XBS5_LP64_OFF64 124
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define TCPCI_OPT_SACK 0x00000002
#define IPPROTO_IPCOMP 108
#define WANT_CAPSTONE 1
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define SCNi16 "hi"
#define _SC_SEMAPHORES 37
#define PRId64 __PRI_64_LENGTH_MODIFIER__ "d"
#define R_NULLABLE 
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define SF_IMMUTABLE 0x00020000
#define FP_RND_UP 2
#define WORD_BIT 32
#define _SUSECONDS_T 
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 5
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define IPV6_2292NEXTHOP 21
#define _STDINT_H_ 
#define _SC_THREAD_ATTR_STACKADDR 82
#define ls_foreach(list,it,pos) if ((list)) for (it = (list)->head; it && (pos = it->data); it = it->n)
#define INT32_C(v) (v)
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define POLL_OUT 2
#define NET_SERVICE_TYPE_BK 1
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define r_oflist_array(x) x->array? x->array: (x->array = r_oflist_serialize (x)), x->array
#define __SEOF 0x0020
#define USE_LIB_XXHASH 0
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define _SC_ATEXIT_MAX 107
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO 25
#define IPV6CTL_AUTO_LINKLOCAL 35
#define __dead2 __attribute__((__noreturn__))
#define IPPROTO_SWIPE 53
#define TCP_MAX_WINSHIFT 14
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define AF_COIP 20
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define _POSIX_TIMERS (-1)
#define PRIxLEAST64 PRIx64
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
#define PRIxFAST16 PRIx16
#define R2_VERSION "5.5.4"
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define B0000 0
#define B0110 6
#define IP_HDRINCL 2
#define R_DEPRECATE 
#define PF_LINK AF_LINK
#define R_NEWS0(x,y) (x*)calloc(y,sizeof(x))
#define _BSD_PTRDIFF_T_ 
#define PRIXPTR "lX"
#define SIGXFSZ 25
#define SCNo16 "ho"
#define MCAST_JOIN_SOURCE_GROUP 82
#define O_FSYNC O_SYNC
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define AF_E164 AF_ISDN
#define ST16_SUB_OVFCHK(a,b) ST16_ADD_OVFCHK(a,-(b))
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define R_BIT_UNSET(x,y) (((ut8*)x)[y>>4] &= ~(1<<(y&0xf)))
#define LIBC_HAVE_PRIV_SET 0
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define TCP_KEEPALIVE 0x10
#define _POSIX_RAW_SOCKETS (-1)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define _tolower(c) __tolower(c)
#define SDB_OPTION_SYNC (1 << 0)
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define R_PTR_MOVE(d,s) d=s;s=NULL;
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _SYS_POLL_H_ 
#define SCNuPTR "lu"
#define sdb_aforeach_next(x) if (!next) break; *(next-1) = ','; x = next; } }
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define EXPR_NEST_MAX 32
#define KEV_INET6_DEFROUTER 6
#define SI_MESGQ 0x10005
#define PRIX32 "X"
#define r_list_iterator(x) (x)? (x)->head: NULL
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define _PID_T 
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define container_of(ptr,type,member) ((type *)((char *)(__typeof__(((type *)0)->member) *){ptr} - offsetof(type, member)))
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define IPV6CTL_DEFMCASTHLIM 18
#define _SC_2_UPE 25
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define PRIo32 "o"
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _FD_SET 
#define HAVE_GPERF 1
#define BITS2BYTES(x) (((x)/8)+(((x)%8)?1:0))
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define SDB_OPTION_JOURNAL (1 << 3)
#define POLLHUP 0x0010
#define S_IROTH 0000004
#define PFMT32o "o"
#define PRIiLEAST8 PRIi8
#define _NET_NETKEV_H_ 
#define IPV6CTL_USE_DEPRECATED 21
#define __SIG_ATOMIC_WIDTH__ 32
#define PF_LOCAL AF_LOCAL
#define _POSIX2_PBS_TRACK (-1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define F_SETSIZE 43
#define POLLEXTEND 0x0200
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define PRIxFAST64 PRIx64
#define __INT_LEAST64_TYPE__ long long int
#define IP_DUMMYNET_CONFIGURE 60
#define ut8p_ld(x) ((x)[3]|((x)[2]<<8)|((x)[1]<<16)|((x)[0]<<24))
#define SIGCHLD 20
#define PFMT32x "x"
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB 0x1
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define PRIX64 __PRI_64_LENGTH_MODIFIER__ "X"
#define R2_VERSION_MINOR 5
#define R_PERM_RX (R_PERM_R|R_PERM_X)
#define __STDC_VERSION__ 201710L
#define SOL_LOCAL 0
#define CPUMON_MAKE_FATAL 0x1000
#define PF_NETBIOS AF_NETBIOS
#define __SIZEOF_INT__ 4
#define SO_PEERLABEL 0x1011
#define IP_BOUND_IF 25
#define _WEXT_OK (1<<18)
#define SO_OOBINLINE 0x0100
#define _PTHREAD_COND_T 
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define _MACHTYPES_H_ 
#define IPPROTO_IDRP 45
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(v) (v ## UL)
#define PRIiFAST16 PRIi16
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define buffer_SEEK(s,len) ( ( (s)->p -= (len) ) , ( (s)->n += (len) ) )
#define cdb_datapos(c) ((c)->dpos)
#define IPV6_2292RTHDR 24
#define RUSAGE_SELF 0
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define _POSIX_CLOCK_SELECTION (-1)
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define IN_CLASSD_NET 0xf0000000
#define POLLWRITE 0x1000
#define _POSIX_TRACE_SYS_MAX 8
#define SIGSYS 12
#define r_oflist_append(x,y) r_oflist_deserialize (x), r_list_append (x, y)
#define SIGSTOP 17
#define PFMT32u "u"
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define _SC_THREAD_CPUTIME 84
#define SA_NOCLDSTOP 0x0008
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define _POSIX2_PBS (-1)
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define IPV6_RTHDR_LOOSE 0
#define __DARWIN_LITTLE_ENDIAN 1234
#define SCNdMAX __SCN_MAX_LENGTH_MODIFIER__ "d"
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _PC_ALLOC_SIZE_MIN 16
#define _IOLBF 1
#define ARCH_ARM_64 3
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define IPV6_FW_ZERO 33
#define TYPES_H 
#define IP_FW_FLUSH 42
#define pseudo_AF_XTP 19
#define __LITTLE_ENDIAN__ 1
#define IN_CLASSB_HOST 0x0000ffff
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define AF_MAX 41
#define L_XTND SEEK_END
#define SDB_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define r_list_iter_next(x) ((x)? 1: 0)
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define IPPROTO_NSP 31
#define SDB_H 
#define IPPROTO_WBEXPAK 79
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define _XOPEN_IOV_MAX 16
#define ls_tail(x) x->tail
#define IN_CLASSA_NSHIFT 24
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define FAPPEND O_APPEND
#define O_ALERT 0x20000000
#define __FLT32X_DIG__ 15
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define _OFF_T 
#define KEV_DL_IF_DETACHED 11
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define _PC_EXTENDED_SECURITY_NP 13
#define _POSIX2_PBS_LOCATE (-1)
#define __WORDSIZE 64
#define TCPCI_OPT_ECN 0x00000008
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define IPPORT_HILASTAUTO 65535
#define SDB_OPTION_ALL 0xff
#define _PC_REC_MIN_XFER_SIZE 22
#define __PTHREAD_ATTR_SIZE__ 56
#define PRIXLEAST8 PRIX8
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define __SCN_MAX_LENGTH_MODIFIER__ "j"
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define HAVE_PTRACE 1
#define PRIuLEAST8 PRIu8
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define HAS_CLOCK_NANOSLEEP 0
#define IPV6CTL_FORWARDING 1
#define IPV6CTL_DAD_COUNT 16
#define _SC_TRACE_SYS_MAX 129
#define AI_NUMERICSERV 0x00001000
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define R_SOCKET_PROTO_NONE 0
#define RLIMIT_NOFILE 8
#define PF_DLI AF_DLI
#define AF_VSOCK 40
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define AT_SYMLINK_NOFOLLOW 0x0020
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define NET_SERVICE_TYPE_RD 8
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define IPCTL_FORWARDING 1
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define __SDB_WINDOWS__ 0
#define FILENAME_MAX 1024
#define AF_ISO 7
#define SO_SNDBUF 0x1001
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define UT16_MAX 0xFFFFU
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define r_flist_unref(x) x
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define IPCTL_RTMINEXPIRE 6
#define _SC_XOPEN_ENH_I18N 109
#define LDBLFMT "Lf"
#define UT64_ADD_OVFCHK(x,y) ((UT64_MAX - (x)) < (y))
#define PRIoMAX __PRI_MAX_LENGTH_MODIFIER__ "o"
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define _POSIX_MEMLOCK_RANGE (-1)
#define __STDIO_H_ 
#define IPPROTO_ICMP 1
#define S_IEXEC S_IXUSR
#define B0011 3
#define KEV_INET6_NEW_RTADV_ADDR 5
#define __pic__ 2
#define NET_SERVICE_TYPE_OAM 7
#define R_SYS_ENDIAN_BIG 2
#define _T_PTRDIFF_ 
#define SCNoLEAST64 SCNo64
#define SCNoLEAST32 SCNo32
#define R_MODE_SIMPLEST 0x020
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define RFList void**
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define NET_RT_MAXID 11
#define LOCAL_PEERPID 0x002
#define IPPROTO_GGP 3
#define r_oflist_prepend(x,y) r_oflist_deserialize (x), r_list_prepend (x, y)
#define MAX_TCPOPTLEN 40
#define SCNxPTR "lx"
#define _CTYPE_G 0x00000800L
#define SIGALRM 14
#define __STDC_WANT_LIB_EXT1__ 1
#define _XOPEN_PATH_MAX 1024
#define IPPROTO_RDP 27
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define IPPROTO_IPV4 4
#define FP_RND_DOWN 1
#define IPPROTO_IPV6 41
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define R_NEW0(x) (x*)calloc(1,sizeof(x))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define DT_FIFO 1
#define SO_LABEL 0x1010
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define _PC_NAME_CHARS_MAX 10
#define __UINT_FAST64_TYPE__ long long unsigned int
#define KEV_DL_NODE_ABSENCE 22
#define FUNC_ATTR_CONST __attribute__((const))
#define WNOWAIT 0x00000020
#define _SC_2_PBS 59
#define R_ABS(x) (((x)<0)?-(x):(x))
#define PRIXFAST8 PRIX8
#define __BSD__ 0
#define R2_PREFIX "/usr/local"
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define _RUNETYPE_H_ 
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define OPEN_MAX 10240
#define KEV_DL_IFCAP_CHANGED 19
#define INADDR_NONE 0xffffffff
#define STDIN_FILENO 0
#define UINT_FAST8_MAX UINT8_MAX
#define tcp6hdr tcphdr
#define IP_OLD_FW_ZERO 53
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define w_retcode w_T.w_Retcode
#define _POSIX_ADVISORY_INFO (-1)
#define mips mips
#define SCM_CREDS 0x03
#define DT_WHT 14
#define R_PTR_ALIGN_NEXT(v,t) ((char *)(((size_t)(v) + (t - 1)) & ~(t - 1)))
#define F_GETNOSIGPIPE 74
#define NL_MSGMAX 32767
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define UINT8_MAX 255
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define _UINT16_T 
#define IPPROTO_FRAGMENT 44
#define IPV6CTL_MAXIFDEFROUTERS 48
#define SDB_OPTION_NOSTAMP (1 << 1)
#define __LPBIG_OFFBIG (1)
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define PRIXMAX __PRI_MAX_LENGTH_MODIFIER__ "X"
#define AF_NETBIOS 33
#define UINT_MAX (INT_MAX * 2U + 1U)
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define LLONG_MAX __LONG_LONG_MAX__
#define TCP_MAXHLEN (0xf<<2)
#define F_GETPATH_NOFIRMLINK 102
#define HAVE_EXPLICIT_BZERO 0
#define POLLIN 0x0001
#define SCNoFAST32 SCNo32
#define IPPROTO_MICP 95
#define R_INOUT 
#define IPV6_BOUND_IF 125
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define R_SYS_TMP "TMPDIR"
#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")
#define _CTYPE_T 0x00100000L
#define Ht_(name) ht_pp_ ##name
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define O_SHLOCK 0x00000010
#define TCP_ENABLE_ECN 0x104
#define SCNuMAX __SCN_MAX_LENGTH_MODIFIER__ "u"
#define __FLT_MAX_EXP__ 128
#define _CTYPE_U 0x00008000L
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define NI_NAMEREQD 0x00000004
#define _PC_MAX_INPUT 3
#define _SC_AIO_PRIO_DELTA_MAX 44
#define _SC_MONOTONIC_CLOCK 74
#define IPPROTO_IPCV 71
#define R_SYS_OS "darwin"
#define _PTHREAD_MUTEXATTR_T 
#define IPV6PORT_ANONMAX 65535
#define S_IRGRP 0000040
#define ST32_SUB_OVFCHK(a,b) ST32_ADD_OVFCHK(a,-(b))
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define TCPOLEN_SACK 8
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define IPV6_PORTRANGE_HIGH 1
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define IPV6CTL_V6ONLY 24
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define SO_UPCALLCLOSEWAIT 0x1027
#define _POSIX_TRACE (-1)
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define F_TRANSCODEKEY 75
#define INT_FAST32_MIN INT32_MIN
#define PRIdFAST8 PRId8
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define _POSIX_FSYNC 200112L
#define IPPROTO_VINES 83
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define SCNu16 "hu"
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define _CTYPE_D 0x00000400L
#define _CTYPE_I 0x00080000L
#define _CTYPE_L 0x00001000L
#define IPPROTO_GRE 47
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define POLL_PRI 5
#define _CTYPE_S 0x00004000L
#define _CTYPE_X 0x00010000L
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define AF_HYLINK 15
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define IPPROTO_VMTP 81
#define _CADDR_T 
#define IPPROTO_TPXX 39
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define CPF_OVERWRITE 0x0001
#define FPE_FLTINV 5
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define IPPROTO_GMTP 100
#define ASCII_MAX 127
#define _POSIX_MAX_CANON 255
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define B_TOGGLE(x,n) ((x) ^= (1ULL << (n)))
#define LOCAL_PEERUUID 0x004
#define SCNu32 "u"
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define IP_OPTIONS 1
#define SZT_MAX UT64_MAX
#define __WINT_WIDTH__ 32
#define R_IFNULL(x) 
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define EOF (-1)
#define __INT_LEAST8_MAX__ 0x7f
#define R2_VERSION_PATCH 4
#define B4(a,b,c,d) ((a<<12)|(b<<8)|(c<<4)|(d))
#define SO_RCVBUF 0x1002
#define LOCK_EX 0x02
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define R_MODE_SET 0x002
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define IPPROTO_IDP 22
#define RLIMIT_DATA 2
#define _RUNE_T 
#define LIBC_HAVE_SYSTEM 1
#define SV_SIGINFO SA_SIGINFO
#define TCPOLEN_TIMESTAMP 10
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define KEV_DL_QOS_MODE_CHANGED 29
#define KEV_DL_AWDL_RESTRICTED 26
#define SIGTSTP 18
#define S_IRUSR 0000400
#define ls_push(x,y) ls_append(x,y)
#define CDB_HPLIST 1000
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define __FLT64X_IS_IEC_60559__ 2
#define PF_CCITT AF_CCITT
#define TCP_MAXWIN 65535
#define KEY_TYPE void *
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES (-1)
#define _PTHREAD_RWLOCK_T 
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define RLIMIT_FSIZE 1
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define buffer_GETC(s,c) ( ((s)->p > 0) ? ( *(c) = (s)->x[(s)->n], buffer_SEEK((s),1), 1 ) : buffer_get((s),(c),1) )
#define IPPROTO_IL 40
#define IPPROTO_DSTOPTS 60
#define IPV6PORT_ANONMIN 49152
#define _SC_THREAD_STACK_MIN 93
#define boolt int
#define PF_CHAOS AF_CHAOS
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define TCPOPT_TIMESTAMP 8
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _LP64 1
#define R_NONNULL 
#define SIGEMT 7
#define KEV_INET_SIFNETMASK 6
#define __UINT8_C(c) c
#define NAN (0.0f/0.0f)
#define FUNC_ATTR_ALLOC_ALIGN(x) __attribute__((alloc_align(x)))
#define RLIMIT_MEMLOCK 6
#define SOCK_DGRAM 2
#define NOTIFY_HDR_SIZE offsetof (DShMsg_notify_t, un)
#define __API_AVAILABLE(...) 
#define SCNoFAST16 SCNo16
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE 59
#define IPPROTO_RSVP 46
#define _INT8_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define TH_CWR 0x80
#define R_SYS_HOME "HOME"
#define FS "/"
#define IOV_MAX 1024
#define _VA_LIST 
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define IPPROTO_RVD 66
#define EF_IS_SPARSE 0x00000010
#define __API_UNAVAILABLE(...) 
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define PF_SNA AF_SNA
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define R_PERM_PRIV 16
#define EAI_ADDRFAMILY 1
#define __has_feature(x) 0
#define IPPROTO_VISA 70
#define _POSIX2_LINE_MAX 2048
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")
#define KEV_DL_ADDMULTI 7
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define _SC_REGEXP 77
#define ASCII_MIN 32
#define F_SETLKW 9
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define FUNC_ATTR_ALLOC_SIZE(x) __attribute__((alloc_size(x)))
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define _SC_IOV_MAX 56
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define _SC_PASS_MAX 131
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define R_SYS_ENDIAN_BI 3
#define SCNiFAST8 SCNi8
#define UT32_LT0 0x7FFFFFFFU
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define R_MODE_PRINT 0x000
#define O_ASYNC 0x00000040
#define NET_SERVICE_TYPE_SIG 2
#define _POSIX_MAPPED_FILES 200112L
#define MAC_OS_X_VERSION_10_16 101600
#define SCNiFAST32 SCNi32
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define CLK_TCK __DARWIN_CLK_TCK
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define sdb_json_format_free(x) free ((x)->buf)
#define _SC_LOGIN_NAME_MAX 73
#define OFF_MAX LLONG_MAX
#define SA_RESTART 0x0002
#define B10000 16
#define EXTRACT_UNSIGNED_INTEGER(addr,len) extract_unsigned_integer ((const ut8 *)addr, len, 0)
#define SCNuFAST16 SCNu16
#define NET_MAXID AF_MAX
#define AI_PASSIVE 0x00000001
#define S_IFWHT 0160000
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define R_NEWCOPY(x,y) (x*)r_new_copy(sizeof(x), y)
#define SOCK_RAW 3
#define TCP_NODELAY 0x01
#define __MAC_10_11_2 101102
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define LS_H 
#define IOPOL_SCOPE_DARWIN_BG 2
#define SF_RESTRICTED 0x00080000
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define _POSIX_CPUTIME (-1)
#define PRIiMAX __PRI_MAX_LENGTH_MODIFIER__ "i"
#define _SC_TIMERS 41
#define __TVOS_11_4 110400
#define B10010 18
#define B10011 19
#define S_IWRITE S_IWUSR
#define SONPX_SETOPTSHUT 0x000000001
#define IPV6_RECVTCLASS 35
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define O_WRONLY 0x0001
#define r_oflist_deserialize(x) free (x->array - 1), x->array = 0
#define IOPOL_TYPE_DISK 0
#define IPPROTO_BRSATMON 76
#define KEV_INET_SIFBRDADDR 5
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define MCAST_UNDEFINED 0
#define SCNiFAST64 SCNi64
#define IS_SEPARATOR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r' || (x) == ' '|| (x) == ',' || (x) == ';' || (x) == ':' || (x) == '[' || (x) == ']' || (x) == '(' || (x) == ')' || (x) == '{' || (x) == '}')
#define _SC_CHILD_MAX 2
#define PRIi32 "i"
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define R_BTW(x,y,z) (((x)>=(y))&&((y)<=(z)))?y:x
#define _SC_2_CHAR_TERM 20
#define __GETHOSTUUID_H 
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define IP_PORTRANGE 19
#define __GNUC_STDC_INLINE__ 1
#define SCNo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define __SNBF 0x0002
#define P_tmpdir "/var/tmp/"
#define ULLFMT "ll"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define POLLERR 0x0008
#define SDB_LIST_SORTED 1
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define _POSIX_MESSAGE_PASSING (-1)
#define SOCK_SEQPACKET 5
#define MINSIGSTKSZ 32768
#define __TYPES_H_ 
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define IPPROTO_LEAF1 25
#define w_coredump w_T.w_Coredump
#define _POSIX_MQ_PRIO_MAX 32
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define IP_PORTRANGE_DEFAULT 0
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define _SIZE_T 
#define IPV6_RTHDR_STRICT 1
#define _POSIX2_VERSION 200112L
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define NET_RT_FLAGS_PRIV 10
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define PRIxFAST8 PRIx8
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define _SC_2_PBS_TRACK 64
#define IPPROTO_PIGP 9
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _CRMASK (~(_CACHED_RUNES - 1))
#define QUAD_MIN LLONG_MIN
#define UTIME_OMIT -2
#define SOCK_STREAM 1
#define r_flist_next(it) *it!=0
#define IP_RSVP_VIF_ON 17
#define FOPEN_MAX 20
#define PRIuLEAST16 PRIu16
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _MACH_I386__STRUCTS_H_ 
#define SDB_VSZ 0xffffff
#define IPCTL_GIF_TTL 16
#define R_PERM_R 4
#define WCOREFLAG 0200
#define R_PERM_W 2
#define R_PERM_X 1
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define F_ADDSIGS 59
#define stderr __stderrp
#define AF_NATM 31
#define DTTOIF(dirtype) ((dirtype) << 12)
#define _SC_THREAD_PROCESS_SHARED 90
#define PFMT64d "lld"
#define OFF_MIN LLONG_MIN
#define _SC_REALTIME_SIGNALS 36
#define _FILE_OFFSET_BITS 64
#define IP_MAX_SOCK_MUTE_FILTER 128
#define PRIdFAST16 PRId16
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define _SA_FAMILY_T 
#define IP_MULTICAST_TTL 10
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define R_SOCKET_PROTO_DEFAULT R_SOCKET_PROTO_TCP
#define _RLIMIT_POSIX_FLAG 0x1000
#define ST8_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST8_MAX - (x))) || ((x) < 0 && (a) < ST8_MIN - (x)))
#define MONOTONIC_UNIX (MONOTONIC_APPLE || MONOTONIC_LINUX || MONOTONIC_FREEBSD || MONOTONIC_NETBSD)
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define SDB_VERSION "1.8.3"
#define RLIM_NLIMITS 9
#define CDB_HASHSTART 5381
#define L_SET SEEK_SET
#define HAVE_EXPLICIT_MEMSET 0
#define PF_IMPLINK AF_IMPLINK
#define NET_RT_FLAGS 2
#define R2_GITTAP "5.5.4"
#define __UINT32_C(c) c ## U
#define IPPROTO_ETHERIP 97
#define PRIdFAST32 PRId32
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define EAI_SYSTEM 11
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define UNSIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { return (a > 0 && b > 0 && a > type_max / b); }
#define ARCH_H 
#define SDB_NUM_BASE 16
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define CHARCLASS_NAME_MAX 14
#define SCNiMAX __SCN_MAX_LENGTH_MODIFIER__ "i"
#define PRIoPTR "lo"
#define __IOS_AVAILABLE(_vers) 
#define _SC_SYNCHRONIZED_IO 40
#define INTMAX_MIN (-INTMAX_MAX-1)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define AF_UNIX 1
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define _SC_TRACE_INHERIT 99
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define SF_SYNTHETIC 0xc0000000
#define pseudo_AF_HDRCMPLT 35
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define F_FINDSIGS 78
#define F_SETPROTECTIONCLASS 64
#define sigmask(m) (1 << ((m)-1))
#define IN_CLASSA_NET 0xff000000
#define UNSIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { (void)(a); return !b; }
#define r_list_foreach_prev(list,it,pos) if (list) for (it = list->tail; it && (pos = it->data, 1); it = it->p)
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define __INT8_MAX__ 0x7f
#define IPCTL_KEEPFAITH 15
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define SO_NWRITE 0x1024
#define _SIGSET_T 
#define AI_NUMERICHOST 0x00000004
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define CHILD_MAX 266
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define UTILS_H 
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _INO64_T 
#define HHXFMT "hhx"
#define cut8 const unsigned char
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define AI_DEFAULT (AI_V4MAPPED_CFG | AI_ADDRCONFIG)
#define __CHAR32_TYPE__ unsigned int
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define HT_NULL_VALUE NULL
#define DS_MSG_OKSTATUS_FLAG 0x20000000
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define WITH_GPL 1
#define LONG_BIT 64
#define PDEBUG_ENOPTY 1
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define _I386__LIMITS_H_ 
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define _NETINET_TCP_H_ 
#define R_OK (1<<2)
#define PRId32 "d"
#define INT_FAST64_MAX INT64_MAX
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define UINT_LEAST32_MAX UINT32_MAX
#define R_SOCKET_PROTO_UDP IPPROTO_UDP
#define AF_PUP 4
#define SA_NOCLDWAIT 0x0020
#define r_flist_rewind(it) while(it!=*it) it--; it++;
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define S_IWGRP 0000020
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define IPV6_V6ONLY 27
#define SA_NODEFER 0x0010
#define st_birthtime st_birthtimespec.tv_sec
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define _POSIX2_CHAR_TERM 200112L
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define __SSE2__ 1
#define SO_ERROR 0x1007
#define _SYS_WAIT_H_ 
#define KEV_DL_PROTO_ATTACHED 14
#define _SC_2_FORT_DEV 21
#define SIGILL 4
#define IPPROTO_IRTP 28
#define r_oflist_serialize(x) x->array = r_flist_new (r_list_length (x)), { int idx = 0; void *ptr; RListIter *iter; r_list_foreach (x, iter, ptr) r_flist_set (x->array, idx++, ptr); } x->array;
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define F_GETPROTECTIONLEVEL 77
#define UNUSED __attribute__((__unused__))
#define PRIuPTR "lu"
#define r_oflist_length(x,y) r_list_length (x, y)
#define _SC_TRACE_EVENT_NAME_MAX 127
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define R_SOCKET_PROTO_UNIX 0x1337
#define IPPROTO_DDP 37
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define POLLNLINK 0x0800
#define IP_STRIPHDR 23
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IPV6CTL_DEFHLIM 3
#define __INT_LEAST32_WIDTH__ 32
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define IPPROTO_NHRP 54
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define SDB_OPTION_NONE 0
#define _QUAD_HIGHWORD 1
#define _U_INT 
#define SIGIOT SIGABRT
#define R2_VERSION_MAJOR 5
#define MHTSZ 32
#define R_SYS_ENDIAN_NONE 0
#define _V6_LP64_OFF64 __LP64_OFF64
#define IS_HEXCHAR(x) (((x) >= '0' && (x) <= '9') || ((x) >= 'a' && (x) <= 'f') || ((x) >= 'A' && (x) <= 'F'))
#define S_IXGRP 0000010
#define NET_RT_IFLIST 3
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define POLL_IN 1
#define __ATOMIC_CONSUME 1
#define IPPROTO_DGP 86
#define PF_UTUN AF_UTUN
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define IPV6PORT_RESERVED 1024
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define HAVE_EPRINTF 1
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define O_POPUP 0x80000000
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define SCNdPTR "ld"
#define INTMAX_C(v) (v ## L)
#define PRIu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define KEV_DL_SIFPHYS 4
#define HAVE_REGEXP 1
#define ILL_PRVOPC 3
#define _PATH_NETWORKS "/etc/networks"
#define SCNdLEAST16 SCNd16
#define TCPOPT_NOP 1
#define MSG_OK 0
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define _RATTR_OK (1<<15)
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define PDEBUG_EQMEMMODEL 8
#define _PATH_HOSTS "/etc/hosts"
#define __DBL_MAX_10_EXP__ 308
#define NI_NUMERICHOST 0x00000002
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define R_ARRAY_SIZE(x) (sizeof (x) / sizeof ((x)[0]))
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define SO_NP_EXTENSIONS 0x1083
#define TH_ACK 0x10
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define r_list_foreach_iter(list,it) if (list) for (it = list->head; it; it = it->n)
#define SZT_SUB_OVFCHK(a,b) SZT_ADD_OVFCHK(a,-(b))
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define IPPROTO_EMCON 14
#define __DARWIN_OS_INLINE static inline
#define _FILESEC_REMOVE_ACL ((void *)1)
#define SCNuFAST8 SCNu8
#define _POSIX_TRACE_LOG (-1)
#define F_FLUSH_DATA 40
#define __DARWIN_MAXNAMLEN 255
#define __INT16_C(c) c
#define R2_DATDIR "/usr/local/share"
#define SCM_TIMESTAMP 0x02
#define _CTERMID_H_ 
#define IPPROTO_SATEXPAK 64
#define CONNECT_DATA_IDEMPOTENT 0x2
#define IPV6_PORTRANGE_DEFAULT 0
#define F_PATHPKG_CHECK 52
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define _SC_THREADS 96
#define PFMT64u "llu"
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define R2_BIND_H 
#define _SC_PHYS_PAGES 200
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define _U_SHORT 
#define __STDC__ 1
#define LOCAL_PEERCRED 0x001
#define ST16_MIN (-ST16_MAX-1)
#define IP_DUMMYNET_FLUSH 62
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define r_ref_init(x) x->R_REF_NAME = 1
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#define static_assert _Static_assert
#define SO_RCVTIMEO 0x1006
#define HOST_NOT_FOUND 1
#define __PTRDIFF_TYPE__ long int
#define SET_CHANNEL_RESET 0
#define HAVE_SIGACTION 0
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define stdin __stdinp
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define _SC_HOST_NAME_MAX 72
#define SCOPE_DELIMITER '%'
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define TCPOPT_CCNEW 12
#define TCP_SENDMOREACKS 0x103
#define SCNoLEAST8 SCNo8
#define IPV6_MULTICAST_LOOP 11
#define IPV6CTL_MAXDYNROUTES 49
#define __ATOMIC_SEQ_CST 5
#define AF_IEEE80211 37
#define POLLWRNORM POLLOUT
#define __PTHREAD_COND_SIZE__ 40
#define EAI_BADFLAGS 3
#define IPCTL_INTRQDROPS 11
#define PRIO_DARWIN_THREAD 3
#define __WATCHOS_AVAILABLE(_vers) 
#define IS_WHITESPACE(x) ((x) == ' ' || (x) == '\t')
#define F_LOG2PHYS_EXT 65
#define PF_HYLINK AF_HYLINK
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define _PTHREAD_KEY_T 
#define KEV_DL_AWDL_UNRESTRICTED 27
#define ITIMER_REAL 0
#define __FLT32X_MIN_10_EXP__ (-307)
#define IPV6_MIN_MEMBERSHIPS 31
#define R_REF_TYPE RRef R_REF_NAME
#define FD_CLOEXEC 1
#define SF_SETTABLE 0x3fff0000
#define PRIuFAST64 PRIu64
#define __UINTPTR_TYPE__ long unsigned int
#define __MSFILTERREQ_DEFINED 
#define IP_RSVP_VIF_OFF 18
#define _SSIZE_T 
#define F_GETPATH_MTMINFO 71
#define __TVOS_10_0_1 100001
#define PTHREAD_KEYS_MAX 512
#define SHUT_RD 0
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define LONGEST st64
#define __LDBL_MIN_10_EXP__ (-4931)
#define IPPROTO_IPEIP 94
#define buffer_PEEK(s) ( (s)->x + (s)->n )
#define IN_CLASSA_HOST 0x00ffffff
#define MSG_ERROR_1 -2
#define r_list_tail(x) ((x)? (x)->tail: NULL)
#define __DTF_ATEND 0x0020
#define _SC_SPAWN 79
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define PF_RTIP pseudo_AF_RTIP
#define R_LIB_VERSION(x) R_API const char *x ##_version(void) { return "" R2_GITTAP; }
#define SCNxLEAST16 SCNx16
#define __PRI_MAX_LENGTH_MODIFIER__ "j"
#define ILL_NOOP 0
#define __DARWIN_CLK_TCK 100
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define AF_IPX 23
#define UT64_SUB_OVFCHK(a,b) UT64_ADD_OVFCHK(a,-(b))
#define NO_DATA 4
#define UF_COMPRESSED 0x00000020
#define MONOTONIC_FREEBSD (__FreeBSD__ && __FreeBSD_version >= 1101000)
#define PRIo16 "ho"
#define CTS(x,y,z,t,v) {t* _=(t*)CTA(x,y,z);*_=v;}
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define O_BINARY 0
#define __enum_closed 
#define PRIO_MAX 20
#define SDB_MIN_VALUE 1
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define IS_PRINTABLE(x) ((x) >=' ' && (x) <= '~')
#define UT16_GT0 0x8000U
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define PRIiPTR "li"
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define PTRDIFF_MAX INTMAX_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define PF_NS AF_NS
#define va_copy(d,s) __builtin_va_copy(d,s)
#define IPV6_CHECKSUM 26
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define PDEBUG_ECONINV 3
#define IPPROTO_LEAF2 26
#define SO_RANDOMPORT 0x1082
#define _MODE_T 
#define DTF_NODUP 0x0002
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define NET_RT_STAT 4
#define _SC_BC_DIM_MAX 10
#define BUFFER_OUTSIZE 8192
#define R_PERM_RWX (R_PERM_R|R_PERM_W|R_PERM_X)
#define PATH_MAX 1024
#define S_IFSOCK 0140000
#define X_OK (1<<0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define B10100 20
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define CDB_MAKE_H 
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define BC_BASE_MAX 99
#define PF_VSOCK AF_VSOCK
#define TH_SYN 0x02
#define MB_LEN_MAX 6
#define IPV6_2292DSTOPTS 23
#define _MACH_MACHINE__STRUCTS_H_ 
#define SIG_IGN (void (*)(int))1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define PRIoLEAST8 PRIo8
#define PRIuFAST8 PRIu8
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define UF_APPEND 0x00000004
#define _GNU_SOURCE 
#define SCNuLEAST32 SCNu32
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
#define _POSIX_BARRIERS (-1)
#define NET_RT_DUMP 1
#define FP_PREC_53B 2
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define AI_MASK (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST | AI_NUMERICSERV | AI_ADDRCONFIG)
#define PRIXFAST16 PRIX16
#define PRIiLEAST16 PRIi16
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
#define SDB_RS ','
#define FPE_FLTUND 3
#define TCPOPT_CCECHO 13
#define CPF_IGNORE_MODE 0x0002
