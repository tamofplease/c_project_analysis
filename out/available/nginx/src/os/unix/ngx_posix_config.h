#define ENETDOWN 50
#define TAILQ_CHECK_NEXT(elm,field) 
#define NGX_HTTP_PROXY_TEMP_PATH "proxy_temp"
#define IPV6_RTHDR_TYPE_0 0
#define SI_TIMER 0x10003
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define EV_VANISHED 0x0200
#define IPPROTO_SVMTP 82
#define NOTE_NSECONDS 0x00000004
#define PF_BOND ((uint32_t)0x626f6e64)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define NOTE_EXEC 0x20000000
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define PF_RESERVED_36 AF_RESERVED_36
#define _SMP_DB "spwd.db"
#define PRIO_MIN -20
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define NO_ADDRESS NO_DATA
#define __UINT_LEAST16_MAX__ 0xffff
#define NI_MAXSERV 32
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define IPV6CTL_KAME_VERSION 20
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define tcp6_seq tcp_seq
#define _PTHREAD_IMPL_H_ 
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define __ATOMIC_ACQUIRE 2
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define __FLT128_MAX_10_EXP__ 4932
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define IP_DEFAULT_MULTICAST_TTL 1
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define _PATH_PWD "/etc"
#define sa_sigaction __sigaction_u.__sa_sigaction
#define NOTE_FORK 0x40000000
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define IPV6CTL_TEMPVLTIME 34
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define MSG_HOLD 0x800
#define EUSERS 68
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define NOTE_CRITICAL 0x00000020
#define _T_WCHAR_ 
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define IPPROTO_IP 0
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define RLIM_SAVED_MAX RLIM_INFINITY
#define SO_SNDBUF 0x1001
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define NI_MAXHOST 1025
#define __DRIVERKIT_19_0 190000
#define SO_NREAD 0x1020
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define TIOCSPGRP _IOW('t', 118, int)
#define IPPROTO_SEP 33
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define NGX_HTTP_FASTCGI_TEMP_PATH "fastcgi_temp"
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define IPV6_PORTRANGE_HIGH 1
#define IPPROTO_IDPR 35
#define SV_RESETHAND SA_RESETHAND
#define O_ACCMODE 0x0003
#define MSG_WAITSTREAM 0x200
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define IP_UNBLOCK_SOURCE 73
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define IPV6_PORTRANGE_LOW 2
#define KEV_DL_RRC_STATE_CHANGED 28
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IPV6_LEAVE_GROUP 13
#define ru_last ru_nivcsw
#define NET_SERVICE_TYPE_VI 3
#define TCP_KEEPCNT 0x102
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define IP_RECVDSTADDR 7
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
#define IPV6CTL_MRTSTATS 7
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define _PATH_SMP_DB "/etc/spwd.db"
#define IPV6CTL_RTEXPIRE 25
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define IPPROTO_IPCOMP 108
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define AF_APPLETALK 16
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define AF_PPP 34
#define SOCK_RAW 3
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define NGX_HTTP_SCGI_TEMP_PATH "scgi_temp"
#define WCHAR_MAX __WCHAR_MAX__
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define AT_SYMLINK_FOLLOW 0x0040
#define IOV_MAX 16
#define TIME_UTC 1
#define __FLT32_MIN_EXP__ (-125)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define IP_TTL 4
#define NET_RT_TRASH 5
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define IPPROTO_HMP 20
#define IPV6_FW_FLUSH 32
#define IPPROTO_ND 77
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define EILSEQ 92
#define va_start(v,l) __builtin_va_start(v,l)
#define O_NOFOLLOW_ANY 0x20000000
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define SOCK_RDM 4
#define TIOCSSIZE TIOCSWINSZ
#define ITIMER_VIRTUAL 1
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define IPPROTO_VISA 70
#define __TVOS_AVAILABLE(_vers) 
#define EMLINK 31
#define _NETDB_H_ 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define IP_MAX_MEMBERSHIPS 4095
#define KEV_DL_AWDL_UNRESTRICTED 27
#define IPV6CTL_AUTO_FLOWLABEL 17
#define __WCHAR_MAX__ 0x7fffffff
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define FIOASYNC _IOW('f', 125, int)
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define EREMOTE 71
#define ENOSR 98
#define INT16_MAX 32767
#define MS_ASYNC 0x0001
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define NGX_HAVE_D_TYPE 1
#define RLIMIT_AS 5
#define __DARWIN_PDP_ENDIAN 3412
#define _WCHAR_T 
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define NOTE_NONE 0x00000080
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __GCC_IEC_559 2
#define NGX_HAVE_GETADDRINFO 1
#define RTLD_LOCAL 0x4
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define MCAST_LEAVE_SOURCE_GROUP 83
#define NOTE_FFNOP 0x00000000
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define __IOS_PROHIBITED 
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define F_SETLKW 9
#define __FLT_EVAL_METHOD__ 0
#define __KAME_VERSION "2009/apple-darwin"
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define _T_PTRDIFF 
#define _PTHREAD_T 
#define AF_INET6 30
#define MB_CUR_MAX __mb_cur_max
#define EVFILT_SIGNAL (-6)
#define TIOCMBIC _IOW('t', 107, int)
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define IP_FW_GET 44
#define NOTE_BACKGROUND 0x00000040
#define IN_LOOPBACKNET 127
#define IPPORT_HIFIRSTAUTO 49152
#define __DTF_READALL 0x0008
#define __disable_tail_calls 
#define IPPROTO_HELLO 63
#define FPE_NOOP 0
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define SIN6_LEN 
#define EVFILT_MACHPORT (-8)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _PATH_MP_DB "/etc/pwd.db"
#define _CTYPE_SWM 0xe0000000L
#define CLD_STOPPED 5
#define _CTYPE_SWS 30
#define NSIG __DARWIN_NSIG
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define w_termsig w_T.w_Termsig
#define MAP_32BIT 0x8000
#define FNONBLOCK O_NONBLOCK
#define GLOB_NOESCAPE 0x2000
#define _SOCKLEN_T 
#define SIG_IGN (void (*)(int))1
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _PATH_GROUP "/etc/group"
#define NGX_MAX_OFF_T_VALUE 9223372036854775807LL
#define _SUSECONDS_T 
#define MADV_FREE_REUSABLE 7
#define MAC_OS_X_VERSION_10_14_4 101404
#define SIGPROF 27
#define F_GETCODEDIR 72
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define EOWNERDEAD 105
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define DT_REG 8
#define F_ALLOCATEALL 0x00000004
#define bool _Bool
#define _SYS_MMAN_H_ 
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define DT_FIFO 1
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IPV6CTL_RIP6STATS 36
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define __SIG_ATOMIC_TYPE__ int
#define st_atime st_atimespec.tv_sec
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define GLOB_APPEND 0x0001
#define SHUT_RDWR 2
#define POLL_MSG 3
#define RTLD_DEFAULT ((void *) -2)
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define ENOTTY 25
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define __FINITE_MATH_ONLY__ 0
#define AT_EACCESS 0x0010
#define IPPROTO_MEAS 19
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define NGX_HAVE_IPV6_RECVPKTINFO 1
#define __cold __attribute__((__cold__))
#define INET_ADDRSTRLEN 16
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define pseudo_AF_KEY 29
#define EBADF 9
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define IPV6CTL_MAXFRAGPACKETS 9
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define BUS_NOOP 0
#define NOTE_LEEWAY 0x00000010
#define ERANGE 34
#define EAI_FAMILY 5
#define __FLT32_HAS_DENORM__ 1
#define ILL_BADSTK 8
#define _ALLOCA_H_ 
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define SIGFPE 8
#define TIOCPKT _IOW('t', 112, int)
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define TCP_MSS 512
#define F_RDADVISE 44
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define IPV6CTL_DEFHLIM 3
#define EAI_BADHINTS 12
#define __WATCHOS_PROHIBITED 
#define h_addr h_addr_list[0]
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define SA_RESTART 0x0002
#define _SYS_IOCTL_H_ 
#define ENOTRECOVERABLE 104
#define __FLT32_MAX_10_EXP__ 38
#define _FILESEC_T 
#define _WCHAR_T_DEFINED 
#define TH_ECE 0x40
#define SIGHUP 1
#define ETXTBSY 26
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define __INT8_C(c) c
#define _PW_KEYBYNAME '1'
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define _U_LONG 
#define EVFILT_SYSCOUNT 17
#define SIGCONT 19
#define MAX_SACK_BLKS 6
#define GLOB_ERR 0x0004
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define GLOB_NOMAGIC 0x0200
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define _ERRNO_T 
#define MSG_PEEK 0x2
#define F_GETFL 3
#define _STDLIB_H_ 
#define WAKEMON_GET_PARAMS 0x04
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define __DARWIN_IPPORT_RESERVED 1024
#define EVFILT_EXCEPT (-15)
#define KEV_DL_SIFMEDIA 5
#define NO_RECOVERY 3
#define TCPOPT_SACK_PERMITTED 4
#define NFDBITS __DARWIN_NFDBITS
#define F_SETLKWTIMEOUT 10
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define NGX_HAVE_GCC_VARIADIC_MACROS 1
#define __SHRT_MAX__ 0x7fff
#define PF_NDRV AF_NDRV
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define NGX_HAVE_STATFS 1
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define PRIO_PGRP 1
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define IPPROTO_IDP 22
#define IPPROTO_IGRP 88
#define S_IXOTH 0000001
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define SIGTTOU 22
#define LOCAL_PEEREPID 0x003
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define _BSD_MACHINE_SIGNAL_H_ 
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define SO_LINGER 0x0080
#define TIOCIXOFF _IO('t', 128)
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define IPPROTO_ADFS 68
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define __SNPT 0x0800
#define PF_RTIP pseudo_AF_RTIP
#define S_IFWHT 0160000
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define howmany(x,y) __DARWIN_howmany(x, y)
#define KEVENT_FLAG_NONE 0x000000
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define MSG_FLUSH 0x400
#define IPV6_2292HOPOPTS 22
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define IPPROTO_MHRP 48
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define PF_SIP AF_SIP
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define IPPROTO_ARGUS 13
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define SOMAXCONN 128
#define NETSVC_MRKNG_LVL_L2 1
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 36
#define INT_LEAST8_MAX INT8_MAX
#define LIST_FIRST(head) ((head)->lh_first)
#define NET_RT_IFLIST 3
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define __result_use_check __attribute__((__warn_unused_result__))
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define EAI_AGAIN 2
#define PRIO_USER 2
#define EV_POLL EV_FLAG0
#define __APPLE_API_STANDARD 
#define SIOCSHIWAT _IOW('s', 0, int)
#define IOPOL_APPLICATION IOPOL_STANDARD
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define _UUID_UUID_H 
#define KEV_INET_NEW_ADDR 1
#define NGX_HAVE_D_NAMLEN 1
#define _SYS_IOCCOM_H_ 
#define AI_ADDRCONFIG 0x00000400
#define MSG_RCVMORE 0x4000
#define _USER_SIGNAL_H 
#define RTLD_SELF ((void *) -3)
#define IN_CLASSB_NSHIFT 16
#define PROT_EXEC 0x04
#define O_NOCTTY 0x00020000
#define AF_E164 AF_ISDN
#define KEV_DL_AWDL_RESTRICTED 26
#define EV_EOF 0x8000
#define TIOCDSIMICROCODE _IO('t', 85)
#define NULL ((void *)0)
#define NETSVC_MRKNG_UNKNOWN 0
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define __PTHREAD_MUTEX_SIZE__ 56
#define INT64_MAX 9223372036854775807LL
#define __DARWIN_UNIX03 1
#define SLIST_FIRST(head) ((head)->slh_first)
#define AF_ECMA 8
#define NGX_HAVE_DLOPEN 1
#define NETDB_SUCCESS 0
#define SIGUSR1 30
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define UINT_FAST16_MAX UINT16_MAX
#define __FLT128_MIN_EXP__ (-16381)
#define ENOTBLK 15
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define F_ADDFILESIGS 61
#define MINCORE_ANONYMOUS 0x80
#define WUNTRACED 0x00000002
#define EPROTOTYPE 41
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define UINT16_C(v) (v)
#define SAE_ASSOCID_ANY 0
#define MSG_NEEDSA 0x10000
#define IP_MULTICAST_VIF 14
#define __FLT128_MIN_10_EXP__ (-4931)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_CTYPE_inline __header_inline
#define __FLT32X_IS_IEC_60559__ 2
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define ENOMSG 91
#define EXIT_FAILURE 1
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define IP_FW_RESETLOG 45
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define EAI_NONAME 8
#define IPV6CTL_AUTO_LINKLOCAL 35
#define KEV_DL_SUBCLASS 2
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define AI_V4MAPPED_CFG 0x00000200
#define ENOTDIR 20
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define PF_KEY pseudo_AF_KEY
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define AF_NS 6
#define IPV6CTL_GIF_HLIM 19
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define SO_REUSEADDR 0x0004
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define IPPROTO_ROUTING 43
#define EVFILT_VM (-12)
#define KEV_INET6_CHANGED_ADDR 2
#define AF_UTUN 38
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define TCP_RXT_FINDROP 0x100
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define _PATH_SERVICES "/etc/services"
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define PF_CCITT AF_CCITT
#define SA_SIGINFO 0x0040
#define SO_USELOOPBACK 0x0040
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TCPOLEN_CC 6
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define __KAME__ 
#define WSTOPPED 0x00000008
#define SO_DEBUG 0x0001
#define EQFULL 106
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define CLD_EXITED 1
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define EF_IS_SYNC_ROOT 0x00000004
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define TAILQ_CHECK_HEAD(head,field) 
#define TIOCSTART _IO('t', 110)
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define IPPROTO_LARP 91
#define PF_LAT AF_LAT
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define SI_USER 0x10001
#define _PW_KEYBYNUM '2'
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define _PASSWORD_NOUID 0x01
#define EMULTIHOP 95
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define S_IRWXO 0000007
#define _INT32_T 
#define S_IRWXU 0000700
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define TRASHIT(x) 
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define IPPROTO_SCTP 132
#define _SYS_TTYCOM_H_ 
#define NET_SERVICE_TYPE_AV 6
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define FIOSETOWN _IOW('f', 124, int)
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define CLOCK_REALTIME _CLOCK_REALTIME
#define __FLT32X_MANT_DIG__ 53
#define NET_SERVICE_TYPE_BE 0
#define IPCTL_INTRQMAXLEN 10
#define SF_ARCHIVED 0x00010000
#define ETIMEDOUT 60
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define AF_COIP 20
#define S_TYPEISSHM(buf) (0)
#define DIRBLKSIZ 1024
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define NGX_KQUEUE_UDATA_T (void *)
#define IPPROTO_EGP 8
#define __USER_LABEL_PREFIX__ _
#define SCHED_OTHER 1
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define SIOCSETVLAN SIOCSIFVLAN
#define SF_NOUNLINK 0x00100000
#define F_GETOWN 5
#define IPV6_FAITH 29
#define ENEEDAUTH 81
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define FIODTYPE _IOR('f', 122, int)
#define _SYS_QUEUE_H_ 
#define IPPROTO_EON 80
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define F_BARRIERFSYNC 85
#define TIOCSDTR _IO('t', 121)
#define IPCTL_RTMAXCACHE 7
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define RTLD_NODELETE 0x80
#define NGX_PCRE 1
#define NGX_ZLIB 1
#define WCONTINUED 0x00000010
#define NOTE_FUNLOCK 0x00000100
#define UINT_FAST64_MAX UINT64_MAX
#define F_PEOFPOSMODE 3
#define __STDC_HOSTED__ 1
#define WAKEMON_DISABLE 0x02
#define ILL_ILLOPC 1
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __alloca(size) __builtin_alloca(size)
#define POSIX_MADV_WILLNEED 3
#define MAC_OS_X_VERSION_10_12_1 101201
#define PF_NATM AF_NATM
#define NGX_CONF_PATH "conf/nginx.conf"
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define KEV_DL_MASTER_ELECTED 23
#define TIOCM_RTS 0004
#define SCOPE_DELIMITER '%'
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define RTLD_MAIN_ONLY ((void *) -5)
#define UINT64_MAX 18446744073709551615ULL
#define IPV6_FW_GET 34
#define TMP_MAX 308915776
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define FNDELAY O_NONBLOCK
#define FPE_FLTDIV 1
#define SIGURG 16
#define IP_IPSEC_POLICY 21
#define _PASSWORD_NOCHG 0x04
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define IPPROTO_PIM 103
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define S_TYPEISMQ(buf) (0)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define TCPOPT_SIGNATURE 19
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define EINTR 4
#define F_FREEZE_FS 53
#define _TIME_H_ 
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define MAP_FAILED ((void *)-1)
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define KEV_DL_SIFMTU 3
#define INT32_MIN (-INT32_MAX-1)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define KEV_INET_PORTINUSE 8
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define IPV6CTL_ADDRCTLPOLICY 38
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define IOPOL_IMPORTANT 1
#define EV_ENABLE 0x0004
#define AF_IMPLINK 3
#define SO_BROADCAST 0x0020
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define F_THAW_FS 54
#define __FLT32_IS_IEC_60559__ 2
#define PF_UNIX PF_LOCAL
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define __PTHREAD_RWLOCK_SIZE__ 192
#define F_SETBACKINGSTORE 70
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define ENOTCONN 57
#define KEV_DL_PROTO_DETACHED 15
#define POSIX_MADV_DONTNEED 4
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define NGX_PCRE2 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define MSG_DONTWAIT 0x80
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define O_EVTONLY 0x00008000
#define IPPROTO_AHIP 61
#define NI_NOFQDN 0x00000001
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __APPLE_API_EVOLVING 
#define _PASSWD "passwd"
#define PF_UNSPEC AF_UNSPEC
#define EF_NO_XATTRS 0x00000002
#define _BLKCNT_T 
#define TCPCI_OPT_WSCALE 0x00000004
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define MAP_HASSEMAPHORE 0x0200
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TIOCNXCL _IO('t', 14)
#define __strong 
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define st_ctime st_ctimespec.tv_sec
#define IPPORT_RESERVEDSTART 600
#define _WCHAR_T_ 
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define IPPROTO_ESP 50
#define __MAC_10_1 1010
#define GLOB_NOSORT 0x0020
#define EPERM 1
#define SIOCGLOWAT _IOR('s', 3, int)
#define NOTE_SIGNAL 0x08000000
#define O_EXLOCK 0x00000020
#define SO_WANTOOBFLAG 0x8000
#define _STDDEF_H 
#define KEV_INET_SUBCLASS 1
#define S_IWUSR 0000200
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define MSG_EOF 0x100
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define SO_ACCEPTCONN 0x0002
#define __INT32_MAX__ 0x7fffffff
#define MCAST_INCLUDE 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define NOTE_EXIT_DETAIL 0x02000000
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define EVFILT_VNODE (-4)
#define KEV_INET_ADDR_DELETED 3
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define AI_UNUSABLE 0x10000000
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define __AVAILABILITY_VERSIONS__ 
#define IP_TOS 3
#define __INT_WIDTH__ 32
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define O_NDELAY O_NONBLOCK
#define _I386__PARAM_H_ 
#define O_ASYNC 0x00000040
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define SIG_ERR ((void (*)(int))-1)
#define IPPROTO_PRM 21
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define SO_TYPE 0x1008
#define IPV6PORT_RESERVEDMIN 600
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define ELOOP 62
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define __WATCHOS_7_2 70200
#define MAP_PRIVATE 0x0002
#define ru_first ru_ixrss
#define TCP_CONNECTIONTIMEOUT 0x20
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define NET_SERVICE_TYPE_RV 5
#define IP_MULTICAST_LOOP 11
#define _INTPTR_T 
#define IP_RSVP_OFF 16
#define SO_DONTTRUNC 0x2000
#define __DECIMAL_DIG__ 21
#define _PATH_MASTERPASSWD_LOCK "/etc/ptmp"
#define NOTE_TRIGGER 0x01000000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define MADV_PAGEOUT 10
#define LOCK_EX 0x02
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __APPLE_API_STABLE 
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define O_EXCL 0x00000800
#define _CTYPE_G 0x00000800L
#define EAI_MAX 15
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define IPPROTO_WSN 74
#define ESTALE 70
#define IPPROTO_PUP 12
#define _SYS_ERRNO_H_ 
#define FIONREAD _IOR('f', 127, int)
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define IPCTL_FORWARDING 1
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define ENOTSOCK 38
#define KEV_DL_IF_DETACHING 10
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define SIG_ATOMIC_MIN INT32_MIN
#define EF_IS_PURGEABLE 0x00000008
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define PF_ECMA AF_ECMA
#define IPPROTO_TPXX 39
#define NET_SERVICE_TYPE_VO 4
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define SV_ONSTACK SA_ONSTACK
#define MADV_NORMAL POSIX_MADV_NORMAL
#define NGX_HAVE_SENDFILE 1
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define IP_PORTRANGE_DEFAULT 0
#define _CTYPE_R 0x00040000L
#define AI_DEFAULT (AI_V4MAPPED_CFG | AI_ADDRCONFIG)
#define SIGIO 23
#define IPV6_MAX_MEMBERSHIPS 4095
#define __FLT64_MANT_DIG__ 53
#define MAP_RESILIENT_MEDIA 0x4000
#define AT_REMOVEDIR 0x0080
#define EAUTH 80
#define EVFILT_PROC (-5)
#define NGX_HAVE_C99_VARIADIC_MACROS 1
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _FSBLKCNT_T 
#define IPV6CTL_SOURCECHECK 10
#define TCPOPT_SACK 5
#define O_SYMLINK 0x00200000
#define __SPI_AVAILABLE(...) 
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define AF_RESERVED_36 36
#define _DIRENT_H_ 
#define O_RDWR 0x0002
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define __FLT64X_MANT_DIG__ 64
#define ECHILD 10
#define NOTE_SECONDS 0x00000001
#define IPPROTO_IPIP IPPROTO_IPV4
#define IPPROTO_TCF 87
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define L_tmpnam 1024
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
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
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define __MMX__ 1
#define IPV6_2292PKTOPTIONS 25
#define NOTE_EXIT 0x80000000
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define IPV6_SOCKOPT_RESERVED1 3
#define L_ctermid 1024
#define IPPROTO_IGP 85
#define NOTE_ATTRIB 0x00000008
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define TCP_MAX_WINSHIFT 14
#define TCPOPT_FASTOPEN 34
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define EBADMSG 94
#define IPPROTO_TCP 6
#define SO_LINGER_SEC 0x1080
#define NGX_SUPPRESS_WARN 1
#define fileno_unlocked(p) __sfileno(p)
#define IP_RSVP_ON 15
#define LOCK_NB 0x04
#define SO_SNDLOWAT 0x1003
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define IOC_OUT (__uint32_t)0x40000000
#define INT_FAST16_MIN INT16_MIN
#define IN_CLASSC_NET 0xffffff00
#define DT_BLK 6
#define IPPROTO_3PC 34
#define IPPROTO_ENCAP 98
#define EVFILT_USER (-10)
#define EAI_MEMORY 6
#define NOTE_WRITE 0x00000002
#define O_DSYNC 0x400000
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define UF_OPAQUE 0x00000008
#define SEEK_CUR 1
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define EAI_FAIL 4
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __BIGGEST_ALIGNMENT__ 16
#define _MCONTEXT_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define AF_UNSPEC 0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define TIOCCBRK _IO('t', 122)
#define PRIO_DARWIN_NONUI 0x1001
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define IP_PORTRANGE_LOW 2
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define sigaddset(set,signo) (*(set) |= __sigbits(signo), 0)
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define _SYS_SOCKIO_H_ 
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define PRIO_DARWIN_PROCESS 4
#define _TIME_T 
#define _DLFCN_H_ 
#define PF_PIP pseudo_AF_PIP
#define IPCTL_KEEPFAITH 15
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MSG_DONTROUTE 0x4
#define _I386_SIGNAL_H_ 1
#define __pure 
#define TIOCSETAF _IOW('t', 22, struct termios)
#define WTERMSIG(x) (_WSTATUS(x))
#define S_IFLNK 0120000
#define IPPROTO_IPPC 67
#define CLD_NOOP 0
#define IPPROTO_OSPFIGP 89
#define IPPROTO_RCCMON 10
#define AF_SIP 24
#define _GCC_WCHAR_T 
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __APPLE_API_UNSTABLE 
#define LOCK_SH 0x01
#define MAP_ANON 0x1000
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define SIOCGETVLAN SIOCGIFVLAN
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define IPPROTO_INP 32
#define _SYS_TYPES_H_ 
#define SO_WANTMORE 0x4000
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define F_ADDFILESIGS_RETURN 97
#define TH_URG 0x20
#define TIOCSCTTY _IO('t', 97)
#define NGX_HAVE_CLOCK_MONOTONIC 1
#define UINT8_MAX 255
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define TIOCMGET _IOR('t', 106, int)
#define EWOULDBLOCK EAGAIN
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define F_SINGLE_WRITER 76
#define EVFILT_TIMER (-7)
#define NOTE_FFLAGSMASK 0x00ffffff
#define IP_FAITH 22
#define SCHED_FIFO 4
#define _WSTOPPED 0177
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define AF_SYSTEM 32
#define UF_COMPRESSED 0x00000020
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define EPIPE 32
#define GLOB_DOOFFS 0x0002
#define EAI_OVERFLOW 14
#define ENOATTR 93
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define FP_STATE_BYTES 512
#define AF_CHAOS 5
#define IPPROTO_IPV4 4
#define F_CHECK_LV 98
#define TCP_MAX_SACK 4
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define IP_NAT__XXX 55
#define MS_SYNC 0x0010
#define PF_PPP AF_PPP
#define CLD_KILLED 2
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define EAI_PROTOCOL 13
#define _RUNE_MAGIC_A "RuneMagA"
#define SA_64REGSET 0x0200
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define IPPROTO_KRYPTOLAN 65
#define IPPROTO_SDRP 42
#define POSIX_MADV_NORMAL 0
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define __WATCHOS_UNAVAILABLE 
#define IPPROTO_DIVERT 254
#define PF_MAX AF_MAX
#define TIOCSETD _IOW('t', 27, int)
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define __DARWIN_SUF_NON_CANCELABLE 
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define RUSAGE_INFO_V0 0
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define GLOB_LIMIT 0x1000
#define MINCORE_INCORE 0x1
#define MSG_EOR 0x8
#define TIOCGETA _IOR('t', 19, struct termios)
#define _PASSWORD_NOGID 0x02
#define EVFILT_AIO (-3)
#define NGX_HAVE_MSGHDR_MSG_CONTROL 1
#define TCP_NOPUSH 0x04
#define PROT_NONE 0x00
#define __FLT128_HAS_INFINITY__ 1
#define _STRUCT_TIMEVAL struct timeval
#define NGX_HAVE_IP_RECVDSTADDR 1
#define SIGABRT 6
#define NGX_PTR_SIZE 8
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define IPV6_2292DSTOPTS 23
#define NGX_GROUP "nobody"
#define SIGSTKSZ 131072
#define TIOCGETD _IOR('t', 26, int)
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define true 1
#define IPV6CTL_USE_DEFAULTZONE 39
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define EAI_SOCKTYPE 10
#define __weak 
#define PF_DATAKIT AF_DATAKIT
#define _DEV_T 
#define IPPROTO_TTP 84
#define TIOCPKT_STOP 0x04
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define __abortlike __dead2 __cold __not_tail_called
#define F_SETFD 2
#define SO_DONTROUTE 0x0010
#define GLOB_NOSPACE (-1)
#define __DBL_MAX_EXP__ 1024
#define SOL_SOCKET 0xffff
#define F_RDAHEAD 45
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define NGX_MAX_SIZE_T_VALUE 9223372036854775807LL
#define EV_FLAG0 0x1000
#define KEV_INET6_NEW_LL_ADDR 4
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define FFDSYNC O_DSYNC
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define IPPROTO_CMTP 38
#define __kpi_unavailable 
#define NOTE_EXIT_MEMORY 0x00020000
#define _PATH_MASTERPASSWD "/etc/master.passwd"
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define DT_UNKNOWN 0
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define _VA_LIST_ 
#define S_BLKSIZE 512
#define SIGINT 2
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ETOOMANYREFS 59
#define _SCHED_H_ 
#define F_GETSIGSINFO 105
#define EPFNOSUPPORT 46
#define __amd64 1
#define IPPROTO_HOPOPTS 0
#define SO_TIMESTAMP 0x0400
#define IPV6CTL_MRTPROTO 8
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define _SYS_SIGNAL_H_ 
#define TIOCM_DSR 0400
#define IPPROTO_RSVP 46
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define IPV6_UNICAST_HOPS 4
#define PF_VLAN ((uint32_t)0x766c616e)
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EVFILT_READ (-1)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define EV_ONESHOT 0x0010
#define IPPROTO_BHA 49
#define _PTRDIFF_T_DECLARED 
#define TIOCM_DTR 0002
#define __AVAILABILITY__ 
#define sigemptyset(set) (*(set) = 0, 0)
#define TCP_NOTSENT_LOWAT 0x201
#define __tune_core2__ 1
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define KEV_INET_ARPCOLLISION 7
#define FPE_FLTOVF 2
#define KEV_DL_SIFMETRICS 2
#define ENAMETOOLONG 63
#define __ATOMIC_HLE_ACQUIRE 65536
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define MCAST_EXCLUDE 2
#define _NETINET6_IN6_H_ 
#define _UINT32_T 
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define TIOCPTYUNLK _IO('t', 82)
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _PATH_PASSWD "/etc/passwd"
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define O_NONBLOCK 0x00000004
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define __MAC_10_14_1 101401
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define WAKEMON_MAKE_FATAL 0x10
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define __dead 
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define __FLT64X_MIN_EXP__ (-16381)
#define IPV6_PORTRANGE_DEFAULT 0
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define __WATCHOS_5_2 50200
#define _MMAP 
#define IPPROTO_BLT 30
#define EV_DISABLE 0x0008
#define _SECURE__COMMON_H_ 
#define IPV6_FW_DEL 31
#define SIOCGHIWAT _IOR('s', 1, int)
#define IOC_VOID (__uint32_t)0x20000000
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define errno (*__error())
#define MAP_NORESERVE 0x0040
#define UINT64_C(v) (v ## ULL)
#define IPCTL_MAXID 17
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define NGX_SIG_ATOMIC_T_SIZE 4
#define EV_RECEIPT 0x0040
#define TIOCPKT_NOSTOP 0x10
#define AI_CANONNAME 0x00000002
#define NGX_PID_PATH "logs/nginx.pid"
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define SO_NKE 0x1021
#define IP_DUMMYNET_DEL 61
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define SUN_LEN(su) (sizeof(*(su)) - sizeof((su)->sun_path) + strlen((su)->sun_path))
#define __API_DEPRECATED_END 
#define AF_PUP 4
#define __SOPT 0x0400
#define EPROCUNAVAIL 76
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define SAE_CONNID_ANY 0
#define CONNECT_DATA_AUTHENTICATED 0x4
#define UINTPTR_MAX 18446744073709551615UL
#define IPPROTO_IGMP 2
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define NGX_HTTP_UPSTREAM_ZONE 1
#define stdout __stdoutp
#define IPV6CTL_PREFER_TEMPADDR 37
#define _PTRDIFF_T 
#define SIOCATMARK _IOR('s', 7, int)
#define KEV_DL_SIFFLAGS 1
#define RTLD_NEXT ((void *) -1)
#define TCPOLEN_WINDOW 3
#define NETDB_INTERNAL -1
#define SIOCSLOWAT _IOW('s', 2, int)
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define MSG_HAVEMORE 0x2000
#define EV_ADD 0x0001
#define IPPROTO_RAW 255
#define IPPROTO_APES 99
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define NGX_HAVE_PWRITEV 1
#define NGX_HTTP_GZIP 1
#define UF_NODUMP 0x00000001
#define MAP_FILE 0x0000
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define IPCTL_ACCEPTSOURCEROUTE 13
#define NGX_HAVE_FIONBIO 1
#define NGX_HAVE_TIMER_EVENT 1
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define IPCTL_DEFTTL 3
#define ITIMER_REAL 0
#define GLOB_MAXPATH GLOB_LIMIT
#define O_WRONLY 0x0001
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define IP_FW_ADD 40
#define INT8_MIN -128
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define WNOHANG 0x00000001
#define alloca(size) __alloca(size)
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define PF_IPX AF_IPX
#define UF_DATAVAULT 0x00000080
#define __x86_64 1
#define TCPOLEN_MAXSEG 4
#define TIOCMODG _IOR('t', 3, int)
#define SEGV_ACCERR 2
#define _SYS_DIRENT_H 
#define TIOCMODS _IOW('t', 4, int)
#define __PTRDIFF_T 
#define __SALC 0x4000
#define IPCTL_SENDREDIRECTS 2
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define MCAST_LEAVE_GROUP 81
#define TIOCSBRK _IO('t', 123)
#define MCL_FUTURE 0x0002
#define FASYNC O_ASYNC
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define LIST_CHECK_NEXT(elm,field) 
#define __INT_FAST64_TYPE__ long long int
#define TIOCCONS _IOW('t', 98, int)
#define MAP_NOCACHE 0x0400
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define IPPROTO_WBMON 78
#define S_TYPEISTMO(buf) (0)
#define ICMP6_FILTER 18
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define S_IRWXG 0000070
#define ENOBUFS 55
#define IPV6_RECVTCLASS 35
#define KEV_DL_IFDELEGATE_CHANGED 25
#define _ANSI_STDDEF_H 
#define IPV6CTL_TEMPPLTIME 33
#define NGX_HAVE_PREAD 1
#define IPPROTO_SRPC 90
#define F_PREALLOCATE 42
#define NI_WITHSCOPEID 0x00000020
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define PF_ISO AF_ISO
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define __SMBF 0x0080
#define IOPOL_DEFAULT 0
#define UF_SETTABLE 0x0000ffff
#define DST_WET 3
#define __OSX_AVAILABLE(_vers) 
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define TH_SYN 0x02
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SO_RCVLOWAT 0x1004
#define NI_NUMERICSCOPE 0x00000100
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define NGX_OFF_T_LEN (sizeof("-9223372036854775808") - 1)
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define IPPROTO_MTP 92
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define TIOCPTYGRANT _IO('t', 84)
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define PF_COIP AF_COIP
#define PF_ISDN AF_ISDN
#define IP_OLD_FW_GET 54
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define __LP64__ 1
#define NGX_CONFIGURE ""
#define IPV6_IPSEC_POLICY 28
#define UTIME_NOW -1
#define IPPROTO_MUX 18
#define IPV6_MULTICAST_IF 9
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define IPPROTO_CFTP 62
#define IPCTL_SOURCEROUTE 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SO_SNDTIMEO 0x1005
#define SIGUSR2 31
#define UF_TRACKED 0x00000040
#define F_TRIM_ACTIVE_FILE 100
#define sigismember(set,signo) ((*(set) & __sigbits(signo)) != 0)
#define IOPOL_TYPE_DISK 0
#define IP_DUMMYNET_GET 64
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define EISDIR 21
#define __nonnull 
#define S_IFREG 0100000
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define KEV_DL_LINK_ON 13
#define IPPROTO_XTP 36
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define __MSFILTERREQ_DEFINED 
#define _CACHED_RUNES (1 <<8 )
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define _PASSWORD_LEN 128
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define SOCK_MAXADDRLEN 255
#define NGX_ERROR_LOG_PATH "logs/error.log"
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define TCPOPT_WINDOW 3
#define WAIT_MYPGRP 0
#define IPPROTO_ST 7
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define IP_RECVTOS 27
#define __WATCHOS_4_1 40100
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define _SYS_FILIO_H_ 
#define IPV6CTL_ACCEPT_RTADV 12
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define IPPROTO_TP 29
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define INT8_C(v) (v)
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define SO_RCVTIMEO 0x1006
#define IN_CLASSC_HOST 0x000000ff
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define F_ADDFILESUPPL 104
#define MINCORE_COPIED 0x40
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define __FLT64X_DECIMAL_DIG__ 21
#define PF_OSI AF_ISO
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define __DBL_HAS_DENORM__ 1
#define _NET_NETKEV_H_ 
#define IPV6_2292HOPLIMIT 20
#define F_WRLCK 3
#define EIDRM 90
#define NGX_HAVE_F_NOCACHE 1
#define GETSIGSINFO_PLATFORM_BINARY 1
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define TCP6_MSS 1024
#define GLOB_QUOTE 0x0400
#define IPPROTO_SCCSP 96
#define NOTE_EXIT_CSERROR 0x00040000
#define IPV6CTL_SENDREDIRECTS 2
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define __LDBL_HAS_INFINITY__ 1
#define UF_HIDDEN 0x00008000
#define __OS_AVAILABILITY(_target,_availability) 
#define PF_INET6 AF_INET6
#define _FD_SET 
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define EDEVERR 83
#define IPPROTO_XNET 15
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define TIOCM_RNG 0200
#define MSG_CTRUNC 0x20
#define IP_RECVTTL 24
#define IPPROTO_INLSP 52
#define _PASSWORD_EFMT1 '_'
#define GLOB_MARK 0x0008
#define __FLT_DIG__ 6
#define IP_PKTINFO 26
#define __NO_INLINE__ 1
#define AF_CNT 21
#define IPV6CTL_LOG_INTERVAL 14
#define NGX_HAVE_STATVFS 1
#define SF_FIRMLINK 0x00800000
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define SO_NET_SERVICE_TYPE 0x1116
#define __DARWIN_NON_CANCELABLE 0
#define IPPROTO_TRUNK2 24
#define EV_OOBAND EV_FLAG1
#define S_TYPEISSEM(buf) (0)
#define __DEC_EVAL_METHOD__ 2
#define NGX_MAX_TIME_T_VALUE 9223372036854775807LL
#define TCPOLEN_FASTOPEN_REQ 2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define ECONNABORTED 53
#define RSIZE_MAX (SIZE_MAX >> 1)
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define PF_APPLETALK AF_APPLETALK
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define INT_LEAST8_MIN INT8_MIN
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __VERSION__ "11.2.0"
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define F_GETPATH_MTMINFO 71
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define PF_SYSTEM AF_SYSTEM
#define _SS_MAXSIZE 128
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define NOTE_FFAND 0x40000000
#define SO_KEEPALIVE 0x0008
#define ILL_ILLTRP 2
#define O_APPEND 0x00000008
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define SF_APPEND 0x00040000
#define _PTHREAD_RWLOCK_T 
#define _SECURE__STRINGS_H_ 
#define BADSIG SIG_ERR
#define IP_FW_DEL 41
#define KEV_DL_ISSUES 24
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define TIOCSTAT _IO('t', 101)
#define AF_INET 2
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define MINCORE_MODIFIED_OTHER 0x10
#define INT_LEAST32_MIN INT32_MIN
#define EVFILT_FS (-9)
#define IPV6CTL_KEEPFAITH 13
#define DST_EET 5
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define _SECURE__STRING_H_ 
#define _IN_PORT_T 
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define IPV6CTL_RTMAXCACHE 27
#define IN_CLASSB_MAX 65536
#define _SYS__TYPES_H_ 
#define EAI_SERVICE 9
#define IPPROTO_PGM 113
#define st_mtime st_mtimespec.tv_sec
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define sigfillset(set) (*(set) = ~(sigset_t)0, 0)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define RTLD_NOW 0x2
#define __STRING(x) #x
#define SO_OOBINLINE 0x0100
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define PF_INET AF_INET
#define TRAP_TRACE 2
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define ENOSTR 99
#define INADDR_ANY (u_int32_t)0x00000000
#define EBUSY 16
#define __SSTR 0x0200
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define RLIMIT_CPU 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define NGX_COMPILER "clang 13.0.0 (clang-1300.0.29.30)"
#define PROT_WRITE 0x02
#define F_GETPATH 50
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define KEV_INET_ARPRTRALIVE 10
#define _PASSWORD_CHGNOW -1
#define IPCTL_RTEXPIRE 5
#define DTF_REWIND 0x0004
#define NOTE_ABSOLUTE 0x00000008
#define RENAME_SECLUDE 0x00000001
#define __SLBF 0x0001
#define TIOCMSET _IOW('t', 109, int)
#define NOTE_EXTEND 0x00000004
#define __TVOS_11_4 110400
#define RLIMIT_RSS RLIMIT_AS
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define IPPROTO_AX25 93
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define __FLT32_MANT_DIG__ 24
#define DT_SOCK 12
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define IN_CLASSB_NET 0xffff0000
#define F_ADDFILESIGS_INFO 103
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define TIOCPKT_START 0x08
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define clearerr_unlocked(p) __sclearerr(p)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define KEV_DL_NODE_PRESENCE 21
#define KEV_INET6_NEW_RTADV_ADDR 5
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SIOCGPGRP _IOR('s', 9, int)
#define _CLOCK_T 
#define FD_CLOEXEC 1
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define IP_MAX_SOCK_SRC_FILTER 128
#define pseudo_AF_PIP 25
#define _INTMAX_T 
#define NOTE_DELETE 0x00000001
#define _GID_T 
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define IPV6_MULTICAST_HOPS 10
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define S_IFMT 0170000
#define EFAULT 14
#define ngx_debug_init() 
#define DST_NONE 0
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define SEEK_HOLE 3
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define __SRW 0x0010
#define NGX_HAVE_GCC_ATOMIC 1
#define MADV_RANDOM POSIX_MADV_RANDOM
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define EFTYPE 79
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define POLL_ERR 4
#define __IOS_UNAVAILABLE 
#define AI_ALL 0x00000100
#define INT32_MAX 2147483647
#define KEV_DL_DELMULTI 8
#define IP_BOUND_IF 25
#define IPV6CTL_FORWSRCRT 5
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define _U_INT8_T 
#define TRY_AGAIN 2
#define _U_CHAR 
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define _ARPA_INET_H_ 
#define PRIO_DARWIN_BG 0x1000
#define O_TRUNC 0x00000400
#define PF_XTP pseudo_AF_XTP
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define MAP_RESERVED0080 0x0080
#define F_SETFL 4
#define DTF_HIDEW 0x0001
#define SIG_UNBLOCK 2
#define IP_MULTICAST_IF 9
#define _PATH_HOSTS "/etc/hosts"
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define _UINT64_T 
#define MAC_OS_X_VERSION_10_15_1 101501
#define NGX_SIZE_T_LEN (sizeof("-9223372036854775808") - 1)
#define AF_DLI 13
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define IP_MULTICAST_IFINDEX 66
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define NET_MAXID AF_MAX
#define _SYS_EVENT_H_ 
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define TH_PUSH 0x08
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define WEXITED 0x00000004
#define INT_FAST8_MIN INT8_MIN
#define __DARWIN_MAXPATHLEN 1024
#define PF_PUP AF_PUP
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define F_NODIRECT 62
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define FILESEC_GUID FILESEC_UUID
#define TCPOPT_TIMESTAMP 8
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define MAP_UNIX03 0x40000
#define SIGSEGV 11
#define NET_RT_DUMP2 7
#define TIOCM_CAR 0100
#define _Null_unspecified 
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define s6_addr __u6_addr.__u6_addr8
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define LOCAL_PEEREUUID 0x005
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define NGX_HTTP_SSI 1
#define IN_CLASSD_HOST 0x0fffffff
#define AF_ROUTE 17
#define __DARWIN_NO_LONG_LONG 0
#define IPV6_PORTRANGE 14
#define FOOTPRINT_INTERVAL_RESET 0x1
#define _SYS_RESOURCE_H_ 
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define GLOB_ALTDIRFUNC 0x0040
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define IPPROTO_NVPII 11
#define _SYS_UN_H_ 
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define MCAST_BLOCK_SOURCE 84
#define SIG_DFL (void (*)(int))0
#define O_RDONLY 0x0000
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define _PATH_PROTOCOLS "/etc/protocols"
#define __UINT_LEAST16_TYPE__ short unsigned int
#define IPPROTO_TRUNK1 23
#define __SAPP 0x0100
#define S_IREAD S_IRUSR
#define IPPROTO_UDP 17
#define _KEY_T 
#define IN_CLASSA_NET 0xff000000
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define MSG_SEND 0x1000
#define _INT64_T 
#define IPV6_FW_ADD 30
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define SS_ONSTACK 0x0001
#define _STDARG_H 
#define EDOM 33
#define TCP_FASTOPEN 0x105
#define EADDRNOTAVAIL 49
#define INT_LEAST32_MAX INT32_MAX
#define ESHUTDOWN 58
#define __need___va_list 
#define NGX_HAVE_LITTLE_ENDIAN 1
#define O_DP_GETRAWENCRYPTED 0x0001
#define F_SETLK 8
#define TH_FIN 0x01
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define _OFF_T 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define _PASSWORD_WARNDAYS 14
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define ETIME 101
#define __FLT_IS_IEC_60559__ 2
#define TCP_MAXSEG 0x02
#define IPPROTO_LEAF2 26
#define F_SETOWN 6
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define __CTYPE_H_ 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define TTYDISC 0
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define NI_NUMERICSERV 0x00000008
#define __FLT64X_DIG__ 18
#define FWRITE 0x00000002
#define IP_DONTFRAG 28
#define _PATH_PWD_MKDB "/usr/sbin/pwd_mkdb"
#define _SYS_FCNTL_H_ 
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define __INT8_TYPE__ signed char
#define _UINTMAX_T 
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define PF_CNT AF_CNT
#define IP_PORTRANGE_HIGH 1
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define EPWROFF 82
#define IP_RECVPKTINFO IP_PKTINFO
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SF_DATALESS 0x40000000
#define F_GLOBAL_NOCACHE 55
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define TH_ACK 0x10
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _SYS_SOCKET_H_ 
#define _toupper(c) __toupper(c)
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define NGX_HAVE_INET6 1
#define QMD_TRACE_HEAD(head) 
#define tcp6hdr tcphdr
#define RLIMIT_NPROC 7
#define NGX_HTTP_CLIENT_TEMP_PATH "client_body_temp"
#define __SOFF 0x1000
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define AI_V4MAPPED 0x00000800
#define __FLT_RADIX__ 2
#define IPV6CTL_MAXID 51
#define SO_REUSEPORT 0x0200
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define SIG_HOLD (void (*)(int))5
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define IOC_IN (__uint32_t)0x80000000
#define F_FULLFSYNC 51
#define minor(x) ((int32_t)((x) & 0xffffff))
#define FPE_INTOVF 8
#define EHOSTUNREACH 65
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define IP_DROP_MEMBERSHIP 13
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define __SSE_MATH__ 1
#define _U_INT32_T 
#define NOTE_CHILD 0x00000004
#define MADV_WILLNEED POSIX_MADV_WILLNEED
#define IP_OLD_FW_ADD 50
#define __k8 1
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define BUFSIZ 1024
#define _FSFILCNT_T 
#define IP_FW_ZERO 43
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define IP_RETOPTS 8
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define IP_DEFAULT_MULTICAST_LOOP 1
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define MSG_TRUNC 0x10
#define IP_MIN_MEMBERSHIPS 31
#define _UID_T 
#define AF_NDRV 27
#define NGX_CPU_CACHE_LINE 64
#define TCPOPT_CC 11
#define MADV_FREE 5
#define EV_CLEAR 0x0020
#define INT_LEAST64_MAX INT64_MAX
#define O_SYNC 0x0080
#define __WATCHOS_3_1_1 30101
#define TH_RST 0x04
#define NGX_HAVE_SYSVSHM 1
#define TAILQ_CHECK_PREV(elm,field) 
#define TCP_NOOPT 0x08
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define AT_REALDEV 0x0200
#define EOVERFLOW 84
#define PERSIST_TIMEOUT 0x40
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define SCHED_RR 2
#define O_CLOEXEC 0x01000000
#define __SIZEOF_PTRDIFF_T__ 8
#define _WCHAR_T_H 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define IP_OLD_FW_DEL 51
#define _W_INT(w) (*(int *)&(w))
#define IPV6_MIN_MEMBERSHIPS 31
#define EAI_NODATA 7
#define KEV_INET6_ADDR_DELETED 3
#define IPPROTO_ICMPV6 58
#define _ID_T 
#define __MISMATCH_TAGS_POP 
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define IPPORT_USERRESERVED 5000
#define AF_OSI AF_ISO
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define IPV6CTL_RR_PRUNE 22
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define NOTE_FFCOPY 0xc0000000
#define IN_CLASSA_MAX 128
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define TCP_CONNECTION_INFO 0x106
#define __DARWIN_64_BIT_INO_T 1
#define MADV_DONTNEED POSIX_MADV_DONTNEED
#define S_IFCHR 0020000
#define IPPROTO_SATMON 69
#define __TVOS_14_0 140000
#define MS_DEACTIVATE 0x0008
#define IP_OLD_FW_FLUSH 52
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define IPV6CTL_MAXIFPREFIXES 47
#define FP_CHOP 3
#define IP_MSFILTER 74
#define NOTE_RENAME 0x00000020
#define DST_MET 4
#define MAP_SHARED 0x0001
#define S_IFDIR 0040000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define EPROCLIM 67
#define TRAP_BRKPT 1
#define NGX_HAVE_FIONREAD 1
#define __LDBL_DIG__ 18
#define IP_BLOCK_SOURCE 72
#define TIOCSTI _IOW('t', 114, char)
#define PROT_READ 0x01
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define INT8_MAX 127
#define UINT_FAST32_MAX UINT32_MAX
#define O_CREAT 0x00000200
#define EPROTO 100
#define ENODEV 19
#define _USE_FORTIFY_LEVEL 2
#define F_ALLOCATECONTIG 0x00000002
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define __INT_FAST16_MAX__ 0x7fff
#define KEV_INET6_SUBCLASS 6
#define __PTHREAD_SIZE__ 8176
#define __deprecated __attribute__((__deprecated__))
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define INT_LEAST64_MIN INT64_MIN
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define GLOB_NOMATCH (-3)
#define F_SETNOSIGPIPE 73
#define NGX_HTTP_X_FORWARDED_FOR 1
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define S_ISVTX 0001000
#define EROFS 30
#define SIOCSPGRP _IOW('s', 8, int)
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define TCPCI_OPT_SACK 0x00000002
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define EBADMACHO 88
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define TIOCDRAIN _IO('t', 94)
#define IPV6CTL_MCAST_PMTU 44
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 5
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define IPPROTO_AH 51
#define INT32_C(v) (v)
#define __FLT_MAX_10_EXP__ 38
#define POLL_OUT 2
#define NET_SERVICE_TYPE_BK 1
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define __SEOF 0x0020
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define IPPROTO_SWIPE 53
#define GLOB_MAGCHAR 0x0100
#define MADV_ZERO_WIRED_PAGES 6
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define ENODATA 96
#define MADV_FREE_REUSE 8
#define IP_DUMMYNET_FLUSH 62
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
#define NI_DGRAM 0x00000010
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define MCAST_UNBLOCK_SOURCE 85
#define IP_HDRINCL 2
#define PF_LINK AF_LINK
#define NOTE_REVOKE 0x00000040
#define _BSD_PTRDIFF_T_ 
#define IPV6_TCLASS 36
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SIGXFSZ 25
#define MCAST_JOIN_SOURCE_GROUP 82
#define O_FSYNC O_SYNC
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define F_VOLPOSMODE 4
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define LIST_CHECK_HEAD(head,field) 
#define __INT_FAST32_WIDTH__ 32
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define TCP_KEEPALIVE 0x10
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define __SERR 0x0040
#define _tolower(c) __tolower(c)
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define E2BIG 7
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define F_GETPROTECTIONCLASS 63
#define _PW_KEYBYUID '3'
#define NGX_HAVE_CLEAR_EVENT 1
#define SI_MESGQ 0x10005
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __INT_LEAST16_MAX__ 0x7fff
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define NO_DATA 4
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define IPPROTO_ETHERIP 97
#define IPV6CTL_DEFMCASTHLIM 18
#define TCP_SENDMOREACKS 0x103
#define NGX_PREFIX "/usr/local/nginx/"
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define EDEADLK 11
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define PTRDIFF_MAX INTMAX_MAX
#define __SEG_GS 1
#define EADDRINUSE 48
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define HOST_NOT_FOUND 1
#define __SIG_ATOMIC_WIDTH__ 32
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define F_SETSIZE 43
#define __MISMATCH_TAGS_PUSH 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define IP_DUMMYNET_CONFIGURE 60
#define SIGCHLD 20
#define __APPLE_API_OBSOLETE 
#define IPV6CTL_HDRNESTLIMIT 15
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB 0x1
#define AF_LAT 14
#define IPV6CTL_STATS 6
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define IPCTL_DIRECTEDBROADCAST 9
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define __STDC_VERSION__ 201710L
#define SOL_LOCAL 0
#define NGX_HTTP_CACHE 1
#define NGX_HTTP_UWSGI_TEMP_PATH "uwsgi_temp"
#define CPUMON_MAKE_FATAL 0x1000
#define PF_NETBIOS AF_NETBIOS
#define __SIZEOF_INT__ 4
#define MAP_COPY MAP_PRIVATE
#define SO_PEERLABEL 0x1011
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define _PTHREAD_COND_T 
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define POSIX_MADV_RANDOM 1
#define _MACHTYPES_H_ 
#define IPPROTO_IDRP 45
#define MINCORE_PAGED_OUT 0x20
#define __INT_FAST8_MAX__ 0x7f
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define UINTMAX_C(v) (v ## UL)
#define NOTE_LINK 0x00000010
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IPV6_2292RTHDR 24
#define NGX_HAVE_TCP_FASTOPEN 1
#define RUSAGE_SELF 0
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define ECONNRESET 54
#define _SYS_STDIO_H_ 
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define IN_CLASSD_NET 0xf0000000
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define SIGSYS 12
#define AF_SNA 11
#define TIOCEXCL _IO('t', 13)
#define SIGSTOP 17
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define TCPOLEN_SACK_PERMITTED 2
#define ENXIO 6
#define NGX_HAVE_REUSEPORT 1
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define IPV6_FW_ZERO 33
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define EBADRPC 72
#define __DARWIN_LITTLE_ENDIAN 1234
#define IPV6CTL_USE_DEPRECATED 21
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define IP_MAX_SOCK_MUTE_FILTER 128
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define IP_FW_FLUSH 42
#define pseudo_AF_XTP 19
#define __LITTLE_ENDIAN__ 1
#define IN_CLASSB_HOST 0x0000ffff
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define TIOCPKT_FLUSHREAD 0x01
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define AF_MAX 41
#define MCAST_JOIN_GROUP 80
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define MCL_CURRENT 0x0001
#define INET6_ADDRSTRLEN 46
#define IPPROTO_NSP 31
#define IPPROTO_WBEXPAK 79
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define IN_CLASSA_NSHIFT 24
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define FAPPEND O_APPEND
#define NGX_LISTEN_BACKLOG 511
#define O_ALERT 0x20000000
#define __FLT32X_DIG__ 15
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define KEV_DL_IF_DETACHED 11
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define EV_ERROR 0x4000
#define PF_DLI AF_DLI
#define TTCP_CLIENT_SND_WND 4096
#define __WORDSIZE 64
#define TCPCI_OPT_ECN 0x00000008
#define EV_DELETE 0x0002
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define SCM_RIGHTS 0x01
#define IPPORT_HILASTAUTO 65535
#define NGX_HAVE_SC_NPROCESSORS_ONLN 1
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define NGX_HAVE_PWRITE 1
#define __SRD 0x0004
#define EVFILT_WRITE (-2)
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define INT_FAST8_MAX INT8_MAX
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define IPV6CTL_FORWARDING 1
#define UUID_DEFINE(name,u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15) static const uuid_t name __attribute__ ((unused)) = {u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15}
#define AI_NUMERICSERV 0x00001000
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __GNUC_VA_LIST 
#define ELAST 106
#define _GCC_MAX_ALIGN_T 
#define RLIMIT_NOFILE 8
#define AF_VSOCK 40
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define AT_SYMLINK_NOFOLLOW 0x0020
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define NET_SERVICE_TYPE_RD 8
#define KEV_DL_SIFGENERIC 6
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define POSIX_MADV_SEQUENTIAL 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define TCP_MINMSS 216
#define AF_ISO 7
#define IPPROTO_CPNX 72
#define TIOCSIG _IO('t', 95)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define FFSYNC O_FSYNC
#define ESOCKTNOSUPPORT 44
#define AF_LOCAL AF_UNIX
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define NGX_HAVE_SCHED_YIELD 1
#define _GLOB_H_ 
#define _SYS__PTHREAD_TYPES_H_ 
#define IPCTL_RTMINEXPIRE 6
#define NOTE_EXITSTATUS 0x04000000
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define GLOB_ABEND GLOB_ABORTED
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define GLOB_TILDE 0x0800
#define __STDIO_H_ 
#define TIOCSTOP _IO('t', 111)
#define IP_RECVIF 20
#define IPPROTO_ICMP 1
#define S_IEXEC S_IXUSR
#define NOTE_FFOR 0x80000000
#define TIOCPKT_IOCTL 0x40
#define __pic__ 2
#define NET_SERVICE_TYPE_OAM 7
#define TIOCGSIZE TIOCGWINSZ
#define NGX_HAVE_MAP_ANON 1
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define NET_RT_MAXID 11
#define LOCAL_PEERPID 0x002
#define IPPROTO_GGP 3
#define NOTE_TRACK 0x00000001
#define MAX_TCPOPTLEN 40
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define SIGALRM 14
#define __STDC_WANT_LIB_EXT1__ 1
#define IPPROTO_DONE 257
#define SLIPDISC 4
#define IPPROTO_RDP 27
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define FP_RND_DOWN 1
#define IPPROTO_IPV6 41
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define NGX_DARWIN_ATOMIC 1
#define _NLINK_T 
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define MAP_NOEXTEND 0x0100
#define IN_CLASSD_NSHIFT 28
#define EDESTADDRREQ 39
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define NOTE_PDATAMASK 0x000fffff
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define IPPROTO_PVP 75
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define IPV6CTL_RTMINEXPIRE 26
#define SO_LABEL 0x1010
#define NGX_TIME_T_SIZE 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define _SYS_STAT_H_ 
#define KEV_INET6_DEFROUTER 6
#define _WCHAR_T_DECLARED 
#define __UINT_FAST64_TYPE__ long long unsigned int
#define KEV_DL_NODE_ABSENCE 22
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define WNOWAIT 0x00000020
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define _RUNETYPE_H_ 
#define TIOCFLUSH _IOW('t', 16, int)
#define GLOB_BRACE 0x0080
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define EXIT_SUCCESS 0
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define KEV_DL_IFCAP_CHANGED 19
#define INADDR_NONE 0xffffffff
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define UINT_FAST8_MAX UINT8_MAX
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define w_retcode w_T.w_Retcode
#define F_GETFD 1
#define _CADDR_T 
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define SCM_CREDS 0x03
#define DT_WHT 14
#define F_GETNOSIGPIPE 74
#define IPCTL_FASTFORWARDING 14
#define _CT_RUNE_T 
#define AI_PASSIVE 0x00000001
#define SF_SUPPORTED 0x009f0000
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define _UINT16_T 
#define IPPROTO_FRAGMENT 44
#define IPV6CTL_MAXIFDEFROUTERS 48
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define AF_NETBIOS 33
#define EPROTONOSUPPORT 43
#define _U_INT 
#define TCP_MAXHLEN (0xf<<2)
#define F_GETPATH_NOFIRMLINK 102
#define IPPROTO_MICP 95
#define GLOB_NOCHECK 0x0010
#define IPV6_BOUND_IF 125
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define NGX_CRYPT 1
#define _CTYPE_T 0x00100000L
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define O_SHLOCK 0x00000010
#define TCP_ENABLE_ECN 0x104
#define EIO 5
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define _CTYPE_U 0x00008000L
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define NI_NAMEREQD 0x00000004
#define EV_FLAG1 0x2000
#define ENETUNREACH 51
#define IPPROTO_IPCV 71
#define EXDEV 18
#define O_DIRECTORY 0x00100000
#define _PTHREAD_MUTEXATTR_T 
#define IPV6PORT_ANONMAX 65535
#define S_IRGRP 0000040
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _IONBF 2
#define TCPOLEN_SACK 8
#define __DBL_MANT_DIG__ 53
#define TRACEBUF 
#define _RSIZE_T 
#define EV_DISPATCH 0x0080
#define IPV6CTL_V6ONLY 24
#define NGX_SMP 1
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define SO_UPCALLCLOSEWAIT 0x1027
#define EV_SYSFLAGS 0xF000
#define F_TRANSCODEKEY 75
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define EDQUOT 69
#define _MASTERPASSWD "master.passwd"
#define IPPROTO_VINES 83
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define NGX_HAVE_OPENAT 1
#define __SSE__ 1
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _CTYPE_C 0x00000200L
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
#define TABLDISC 3
#define AF_HYLINK 15
#define FIONCLEX _IO('f', 2)
#define IPPROTO_VMTP 81
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define CPF_OVERWRITE 0x0001
#define FPE_FLTINV 5
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define IPPROTO_GMTP 100
#define __NULLABILITY_COMPLETENESS_PUSH 
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define __MACH__ 1
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define LOCAL_PEERUUID 0x004
#define ENOSPC 28
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define IP_OPTIONS 1
#define ENOEXEC 8
#define __WINT_WIDTH__ 32
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define EOF (-1)
#define __INT_LEAST8_MAX__ 0x7f
#define SO_RCVBUF 0x1002
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define RLIMIT_DATA 2
#define FIOCLEX _IO('f', 1)
#define _RUNE_T 
#define NOTE_USECONDS 0x00000002
#define SV_SIGINFO SA_SIGINFO
#define TCPOLEN_TIMESTAMP 10
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define SIGTSTP 18
#define S_IRUSR 0000400
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define IPV6CTL_MAXFRAGS 41
#define __FLT64X_IS_IEC_60559__ 2
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define F_GETLKPID 66
#define TCP_MAXWIN 65535
#define TIOCEXT _IOW('t', 96, int)
#define __LDBL_MAX_10_EXP__ 4932
#define IP_ADD_MEMBERSHIP 12
#define TIOCSCONS _IO('t', 99)
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define RLIMIT_FSIZE 1
#define TIOCOUTQ _IOR('t', 115, int)
#define MAP_RESILIENT_CODESIGN 0x2000
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define EMSGSIZE 40
#define IPCTL_INTRQDROPS 11
#define IPV6_RTHDR_LOOSE 0
#define IPPROTO_IL 40
#define IPPROTO_DSTOPTS 60
#define IPV6PORT_ANONMIN 49152
#define SO_NOADDRERR 0x1023
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _LP64 1
#define SIGEMT 7
#define KEV_INET_SIFNETMASK 6
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define TCP_KEEPINTVL 0x101
#define __UINT8_C(c) c
#define IP_OLD_FW_ZERO 53
#define RLIMIT_MEMLOCK 6
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define SOCK_DGRAM 2
#define __API_AVAILABLE(...) 
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE 59
#define TIOCPKT_DATA 0x00
#define _INT8_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define TH_CWR 0x80
#define TIOCUCNTL _IOW('t', 102, int)
#define ESRCH 3
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define WINT_MIN INT32_MIN
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define IPPROTO_RVD 66
#define __API_UNAVAILABLE(...) 
#define EHOSTDOWN 64
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define PF_SNA AF_SNA
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define __wchar_t__ 
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define EAI_ADDRFAMILY 1
#define __has_feature(x) 0
#define AF_LINK 18
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define ENOLCK 77
#define KEV_DL_ADDMULTI 7
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define ENFILE 23
#define ENOMEM 12
#define AF_IEEE80211 37
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define __DYLDDL_DRIVERKIT_UNAVAILABLE __API_UNAVAILABLE(driverkit)
#define NGX_HAVE_NONALIGNED 1
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define AF_CCITT 10
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define GLOB_NOSYS (-4)
#define NET_SERVICE_TYPE_SIG 2
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define __FLT128_HAS_QUIET_NAN__ 1
#define MAP_TRANSLATED_ALLOW_EXECUTE 0x20000
#define ENOSYS 78
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define ECANCELED 89
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define TCP_NODELAY 0x01
#define __MAC_10_11_2 101102
#define MADV_SEQUENTIAL POSIX_MADV_SEQUENTIAL
#define IOPOL_SCOPE_DARWIN_BG 2
#define SF_RESTRICTED 0x00080000
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define QMD_TRACE_ELEM(elem) 
#define __DARWIN_FD_SETSIZE 1024
#define TIOCM_LE 0001
#define S_IWRITE S_IWUSR
#define SONPX_SETOPTSHUT 0x000000001
#define NGX_HAVE_UNIX_DOMAIN 1
#define TCPOPT_MAXSEG 2
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define EBADARCH 86
#define IPPROTO_BRSATMON 76
#define KEV_INET_SIFBRDADDR 5
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define MCAST_UNDEFINED 0
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define WAIT_ANY (-1)
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define IP_PORTRANGE 19
#define __GNUC_STDC_INLINE__ 1
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define P_tmpdir "/var/tmp/"
#define __INT_WCHAR_T_H 
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define MAP_JIT 0x0800
#define ENOTSUP 45
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define SOCK_SEQPACKET 5
#define MINSIGSTKSZ 32768
#define __TYPES_H_ 
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define AF_DATAKIT 9
#define __INT_FAST8_WIDTH__ 8
#define IPPROTO_LEAF1 25
#define w_coredump w_T.w_Coredump
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define TIOCPKT_DOSTOP 0x20
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define _SIZE_T 
#define IPV6_RTHDR_STRICT 1
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define TIOCREMOTE _IOW('t', 105, int)
#define NET_RT_FLAGS_PRIV 10
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define NGX_LOCK_PATH "logs/nginx.lock"
#define IPPROTO_PIGP 9
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _CRMASK (~(_CACHED_RUNES - 1))
#define NOTE_FFCTRLMASK 0xc0000000
#define UTIME_OMIT -2
#define SOCK_STREAM 1
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define TIOCIXON _IO('t', 129)
#define IP_RSVP_VIF_ON 17
#define FOPEN_MAX 20
#define NGX_USER "nobody"
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define NGX_HAVE_LOCALTIME_R 1
#define _MACH_I386__STRUCTS_H_ 
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define IPCTL_GIF_TTL 16
#define NGX_TIME_T_LEN (sizeof("-9223372036854775808") - 1)
#define _PASSWORD_NOEXP 0x08
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define WCOREFLAG 0200
#define TIOCM_RI TIOCM_RNG
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define KEV_INET_CHANGED_ADDR 2
#define F_ADDSIGS 59
#define stderr __stderrp
#define AF_NATM 31
#define DTTOIF(dirtype) ((dirtype) << 12)
#define TIOCPKT_FLUSHWRITE 0x02
#define IP_MAX_GROUP_SRC_FILTER 512
#define TIOCM_SR 0020
#define _STRUCT_TIMESPEC struct timespec
#define TIOCM_ST 0010
#define __INTMAX_WIDTH__ 64
#define RTLD_GLOBAL 0x8
#define RTLD_FIRST 0x100
#define IPCTL_STATS 12
#define _SA_FAMILY_T 
#define IP_MULTICAST_TTL 10
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define _RLIMIT_POSIX_FLAG 0x1000
#define NOTE_VM_PRESSURE 0x80000000
#define RLIM_NLIMITS 9
#define EF_IS_SPARSE 0x00000010
#define _UUID_STRING_T 
#define PF_IMPLINK AF_IMPLINK
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define EISCONN 56
#define IOPOL_PASSIVE 2
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define EAI_SYSTEM 11
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define __DTF_SKIPREAD 0x0010
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define SIGEV_THREAD 3
#define __IOS_AVAILABLE(_vers) 
#define NGX_HAVE_KQUEUE 1
#define TIOCMBIS _IOW('t', 108, int)
#define NGX_HAVE_GMTOFF 1
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define AF_UNIX 1
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define SF_SYNTHETIC 0xc0000000
#define pseudo_AF_HDRCMPLT 35
#define IPPROTO_IRTP 28
#define USER_FSIGNATURES_CDHASH_LEN 20
#define F_FINDSIGS 78
#define F_SETPROTECTIONCLASS 64
#define sigmask(m) (1 << ((m)-1))
#define _NETINET_IN_H_ 
#define _VA_LIST_T_H 
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define AT_FDCWD -2
#define __PIC__ 2
#define SO_NWRITE 0x1024
#define _STDINT_H_ 
#define _SIGSET_T 
#define AI_NUMERICHOST 0x00000004
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define TIOCSETA _IOW('t', 20, struct termios)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define _STRUCT_IOVEC 
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 42
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define NGX_HAVE_IP_PKTINFO 1
#define NGX_SYS_NERR 107
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLL_IN 1
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define PPPDISC 5
#define __exported __attribute__((__visibility__("default")))
#define _VA_LIST 
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define MAP_RENAME 0x0020
#define _NETINET_TCP_H_ 
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define NGX_CONF_PREFIX "conf/"
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define UINT_LEAST32_MAX UINT32_MAX
#define EMFILE 24
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define FP_PREC_64B 3
#define SA_NOCLDWAIT 0x0020
#define __va_list__ 
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define S_IWGRP 0000020
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IPV6_V6ONLY 27
#define SA_NODEFER 0x0010
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define TCPOLEN_SIGNATURE 18
#define st_birthtime st_birthtimespec.tv_sec
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define RTLD_NOLOAD 0x10
#define __SSE2__ 1
#define SO_ERROR 0x1007
#define TIOCCDTR _IO('t', 120)
#define _SYS_WAIT_H_ 
#define KEV_DL_PROTO_ATTACHED 14
#define SIGILL 4
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define __API_AVAILABLE_BEGIN(...) 
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define IPPROTO_MAX 256
#define __INT32_TYPE__ int
#define F_GETPROTECTIONLEVEL 77
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define MAP_FIXED 0x0010
#define __improbable(x) (x)
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define IPPROTO_DDP 37
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define IP_STRIPHDR 23
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IN_MULTICAST(i) IN_CLASSD(i)
#define __INT_LEAST32_WIDTH__ 32
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define NGX_HTTP_LOG_PATH "logs/access.log"
#define IPPROTO_NHRP 54
#define LOCAL_PEERTOKEN 0x006
#define _QUAD_HIGHWORD 1
#define SIGIOT SIGABRT
#define SO_NUMRCVPKT 0x1112
#define MINCORE_REFERENCED_OTHER 0x8
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define S_IXGRP 0000010
#define NGX_HAVE_POSIX_MEMALIGN 1
#define EBADEXEC 85
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define IPPROTO_DGP 86
#define PF_UTUN AF_UTUN
#define EV_UDATA_SPECIFIC 0x0100
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define NGX_SBIN_PATH "sbin/nginx"
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define IPV6PORT_RESERVED 1024
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define O_POPUP 0x80000000
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define KEV_DL_SIFPHYS 4
#define ILL_PRVOPC 3
#define _PATH_NETWORKS "/etc/networks"
#define NGX_HAVE_GCC_BSWAP64 1
#define TCPOPT_NOP 1
#define ENOPOLICY 103
#define ESPIPE 29
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define ECONNREFUSED 61
#define INT_FAST64_MIN INT64_MIN
#define ESHLIBVERS 87
#define EAGAIN 35
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define __DBL_MAX_10_EXP__ 308
#define NI_NUMERICHOST 0x00000002
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define __NULLABILITY_COMPLETENESS_POP 
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define SO_NP_EXTENSIONS 0x1083
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define UIOCCMD(n) _IO('u', n)
#define S_ISUID 0004000
#define IPPROTO_EMCON 14
#define __DARWIN_OS_INLINE static inline
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _T_PTRDIFF_ 
#define F_FLUSH_DATA 40
#define __DARWIN_MAXNAMLEN 255
#define __INT16_C(c) c
#define _INO64_T 
#define SCM_TIMESTAMP 0x02
#define _CTERMID_H_ 
#define IPPROTO_SATEXPAK 64
#define LIST_CHECK_PREV(elm,field) 
#define CONNECT_DATA_IDEMPOTENT 0x2
#define F_PATHPKG_CHECK 52
#define MS_INVALIDATE 0x0002
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define _U_SHORT 
#define __STDC__ 1
#define LOCAL_PEERCRED 0x001
#define IPV6CTL_DAD_COUNT 16
#define NOTE_OOB 0x00000002
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define EEXIST 17
#define MINCORE_REFERENCED 0x2
#define __PTRDIFF_TYPE__ long int
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define _PWD_H_ 
#define S_IWOTH 0000002
#define DT_LNK 10
#define MADV_CAN_REUSE 9
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
#define NOTE_LOWAT 0x00000001
#define sv_onstack sv_flags
#define AF_ISDN 28
#define EPROGMISMATCH 75
#define PF_CHAOS AF_CHAOS
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define TCPOPT_CCNEW 12
#define IPV6_MULTICAST_LOOP 11
#define IPV6CTL_MAXDYNROUTES 49
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define EAI_BADFLAGS 3
#define _SYS_UIO_H_ 
#define PRIO_DARWIN_THREAD 3
#define IOCPARM_MASK 0x1fff
#define __WATCHOS_AVAILABLE(_vers) 
#define ENOENT 2
#define F_LOG2PHYS_EXT 65
#define PF_HYLINK AF_HYLINK
#define _PTHREAD_KEY_T 
#define GLOB_ABORTED (-2)
#define __FLT32X_MIN_10_EXP__ (-307)
#define sigdelset(set,signo) (*(set) &= ~__sigbits(signo), 0)
#define SF_SETTABLE 0x3fff0000
#define IPV6_2292NEXTHOP 21
#define __UINTPTR_TYPE__ long unsigned int
#define IP_RSVP_VIF_OFF 18
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define TIOCM_CTS 0040
#define _SSIZE_T 
#define __SNBF 0x0002
#define __TVOS_10_0_1 100001
#define TIOCSETAW _IOW('t', 21, struct termios)
#define SHUT_RD 0
#define __WCHAR_T__ 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define IPPROTO_IPEIP 94
#define IN_CLASSA_HOST 0x00ffffff
#define __DTF_ATEND 0x0020
#define MAP_ANONYMOUS MAP_ANON
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define TIOCM_CD TIOCM_CAR
#define LOCK_UN 0x08
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define AF_IPX 23
#define MS_KILLPAGES 0x0004
#define MINCORE_MODIFIED 0x4
#define F_GETLK 7
#define _NGX_POSIX_CONFIG_H_INCLUDED_ 
#define IPPROTO_CPHB 73
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define UINT8_C(v) (v)
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define __enum_closed 
#define PRIO_MAX 20
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define __FLT128_DECIMAL_DIG__ 36
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define TIOCNOTTY _IO('t', 113)
#define _GRP_H_ 
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define NOTE_TRACKERR 0x00000002
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define PF_NS AF_NS
#define S_IROTH 0000004
#define va_copy(d,s) __builtin_va_copy(d,s)
#define IPV6_CHECKSUM 26
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define SO_RANDOMPORT 0x1082
#define _MODE_T 
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define DTF_NODUP 0x0002
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define NET_RT_STAT 4
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define S_IFSOCK 0140000
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define KEV_DL_QOS_MODE_CHANGED 29
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define RTLD_LAZY 0x1
#define RLIMIT_THREAD_CPULIMITS 0x3
#define SHUT_WR 1
#define _MP_DB "pwd.db"
#define PF_VSOCK AF_VSOCK
#define _MACH_MACHINE__STRUCTS_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define UF_APPEND 0x00000004
#define _U_INT16_T 
#define __P(protos) protos
#define F_CHKCLEAN 41
#define F_PUNCHHOLE 99
#define TIOCGPGRP _IOR('t', 119, int)
#define NOTE_VM_ERROR 0x10000000
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define NET_RT_DUMP 1
#define FP_PREC_53B 2
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define AI_MASK (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST | AI_NUMERICSERV | AI_ADDRCONFIG)
#define PF_LOCAL AF_LOCAL
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define IP_RECVRETOPTS 6
#define FPE_FLTUND 3
#define TCPOPT_CCECHO 13
#define CPF_IGNORE_MODE 0x0002
