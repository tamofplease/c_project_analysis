#define sa_sigaction __sigaction_u.__sa_sigaction
#define TCP_KEEPCNT 0x102
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define HW_AVAILCPU 25
#define SQLITE_MISUSE 21
#define A_GETSTAT 12
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define __ILP32_OFFBIG (-1)
#define TCPOPT_SACK_PERMITTED 4
#define EMULTIHOP 95
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define AF_MAX 41
#define PF_RESERVED_36 AF_RESERVED_36
#define PRIO_MIN -20
#define __UINT_LEAST16_MAX__ 0xffff
#define SQLITE_FCNTL_SYNC 21
#define _PTHREAD_IMPL_H_ 
#define __DBL_DECIMAL_DIG__ 17
#define HW_PRODUCT 27
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define __FLT128_MAX_10_EXP__ 4932
#define A_GETKMASK 4
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define _SC_NGROUPS_MAX 4
#define SQLITE_PREPARE_NORMALIZE 0x02
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define PZERO 22
#define KERN_RAGE_THREAD 2
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define SQLITE_MUTEX_STATIC_VFS1 11
#define SQLITE_MUTEX_STATIC_VFS2 12
#define SQLITE_MUTEX_STATIC_VFS3 13
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define CALLS_H 
#define _SC_SPIN_LOCKS 80
#define _SC_2_VERSION 17
#define _WATTR_OK (1<<16)
#define _T_WCHAR_ 
#define MAC_OS_X_VERSION_10_0 1000
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _IONBF 2
#define _SC_XOPEN_REALTIME 111
#define KERN_MAXID 72
#define _SYS_QOS_H 
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define IP_TOS 3
#define SQLITE_VTAB_DIRECTONLY 3
#define A_SETKMASK 5
#define _SC_EXPR_NEST_MAX 14
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define IPPROTO_SEP 33
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define NL_NMAX 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define IPPROTO_IDPR 35
#define RLIM_INFINITY_ ((rlim_t_) -1)
#define IPPROTO_NVPII 11
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define SQLITE_FCNTL_DATA_VERSION 35
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define _PTHREAD_QOS_H 
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SIGKILL_ 9
#define _XOPEN_CRYPT (1)
#define KERN_OSTYPE 1
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define _TIME_H_ 
#define A_OLDSETPOLICY 3
#define EWOULDBLOCK EAGAIN
#define SHRT_MAX __SHRT_MAX__
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define IPPROTO_IPCOMP 108
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define MPG_IMMOVABLE_RECEIVE 0x02
#define SIGTTIN 21
#define _EXDEV -18
#define _ESRMNT -69
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define DEBUG_debug DEBUG_all
#define IPPROTO_IDRP 45
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define VM_MAXID 6
#define SOCK_RAW 3
#define KIPC_MAX_DATALEN 7
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define AUDIT_TRIGGER_READ_FILE 3
#define PTRACE_SINGLESTEP_ 9
#define EDESTADDRREQ 39
#define _SC_XBS5_ILP32_OFF32 122
#define TIME_UTC 1
#define PIPE_BUF 512
#define IP_TTL 4
#define NET_RT_TRASH 5
#define A_GETCWD 8
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define MISC_H 
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define HW_MODEL 2
#define rdtsc() ({ uint32_t low, high; __asm__ volatile("rdtsc" : "=a" (high), "=d" (low)); ((uint64_t) high) << 32 | low; })
#define HW_L1ICACHESIZE 17
#define __improbable(x) (x)
#define __not_tail_called 
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define SQLITE_AVAILABLE __API_AVAILABLE
#define SOCK_RDM 4
#define TH_CWR 0x80
#define ITIMER_VIRTUAL 1
#define RLIM_NLIMITS 9
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define IPPROTO_VISA 70
#define IPV6_CHECKSUM 26
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define IP_MAX_MEMBERSHIPS 4095
#define SIGHUP_ 1
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define MS_READONLY_ (1 << 0)
#define IPV6CTL_AUTO_FLOWLABEL 17
#define P_SSTEP 0
#define BLKDEV_IOSIZE 2048
#define _SC_AIO_PRIO_DELTA_MAX 44
#define SQLITE_CHECKPOINT_PASSIVE 0
#define USER_POSIX2_FORT_RUN 15
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define __DARWIN_PDP_ENDIAN 3412
#define P_RESV11 0x08000000
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define IPPROTO_ROUTING 43
#define SQLITE_CANTOPEN_SYMLINK (SQLITE_CANTOPEN | (6<<8))
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define MCAST_LEAVE_SOURCE_GROUP 83
#define __FLT32X_DECIMAL_DIG__ 17
#define _ENOPROTOOPT -92
#define __IOS_PROHIBITED 
#define NeXTBSD4_0 0
#define _SC_SPORADIC_SERVER 81
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define _ESHUTDOWN -108
#define EVFILT_SIGNAL (-6)
#define _SC_THREAD_PRIO_INHERIT 87
#define MPO_TEMPOWNER 0x04
#define SQLITE_CREATE_VTABLE 29
#define SIGXCPU_ 24
#define IP_FW_GET 44
#define _XOPEN_VERSION 600
#define _EUSERS -87
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _LIMITS_H_ 
#define P_SELECT 0x00000040
#define USERMODE(x) (((x) & 3) == 3)
#define w_termsig w_T.w_Termsig
#define __ILP32_OFF32 (-1)
#define _ESRCH -3
#define CRF_NOMEMBERD 0x00000001
#define __x86_64 1
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define KERN_HOSTID 11
#define EQUIV_CLASS_MAX 2
#define IPPROTO_XNET 15
#define PTHREAD_PROCESS_SHARED 1
#define RLIMIT_RSS_ 5
#define SIGPROF 27
#define _ENAMETOOLONG -36
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define bool _Bool
#define _SC_CPUTIME 68
#define AUDIT_TRIGGER_ROTATE_USER 6
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define KERN_UNOPENEVT_PROC 2
#define __SIG_ATOMIC_TYPE__ int
#define SQLITE_CONFIG_SINGLETHREAD 1
#define A_GETSINFO_ADDR 32
#define CTLFLAG_SECURE 0x08000000
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define PF_CCITT AF_CCITT
#define __DBL_MIN_10_EXP__ (-307)
#define ENOTTY 25
#define KERN_PROC 14
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define KERN_PROF 16
#define SQLITE_CONSTRAINT 19
#define SIGXFSZ 25
#define A_SETSFLAGS 40
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define __cold __attribute__((__cold__))
#define _SC_MEMLOCK_RANGE 31
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define SQLITE_EXTERN extern
#define IPPROTO_TRUNK1 23
#define IPPROTO_TRUNK2 24
#define __FLT32_HAS_DENORM__ 1
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define TCP_MSS 512
#define HW_USERMEM 6
#define IPV6CTL_HDRNESTLIMIT 15
#define __UINT_FAST8_MAX__ 0xff
#define DEV_H 
#define PATH_MAX 1024
#define NGROUPS NGROUPS_MAX
#define SQLITE_FCNTL_RESERVE_BYTES 38
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define SQLITE3_TEXT 3
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define ENOMEM 12
#define EPROC_SLEADER 0x02
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define AF_INET6_ PF_INET6_
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _ASSERT_H_ 
#define FTS5_TOKENIZE_QUERY 0x0001
#define _EOVERFLOW -75
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define DEBUG_strace DEBUG_all
#define _ERRNO_T 
#define _EAGAIN -11
#define AT_IPC_SHM ((unsigned char)3)
#define EV_EOF 0x8000
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define IN_CLASSB_NSHIFT 16
#define __DARWIN_IPPORT_RESERVED 1024
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define __deprecated_enum_msg(_msg) 
#define SQLITE_SCANSTAT_NVISIT 1
#define NFDBITS __DARWIN_NFDBITS
#define __RCSID(s) __IDSTRING(rcsid,s)
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define __UINT_FAST16_TYPE__ short unsigned int
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define __DARWIN_C_ANSI 010000L
#define MPO_QLIMIT 0x02
#define KERN_KDTHRMAP 12
#define SQLITE_PREPARE_NO_VTAB 0x04
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define _PTHREAD_MUTEX_T 
#define _EEXIST -17
#define __FLT64X_IS_IEC_60559__ 2
#define IPV6_PORTRANGE 14
#define TIME_H 
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define A_GETCLASS 22
#define _POSIX2_UPE 200112L
#define MPO_INSERT_SEND_RIGHT 0x10
#define _str(x) #x
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define TCPOLEN_SACK 8
#define howmany(x,y) __DARWIN_howmany(x, y)
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define NAME_MAX 255
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define MSG_FLUSH 0x400
#define IPV6_2292HOPOPTS 22
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define PF_SIP AF_SIP
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define SQLITE_FCNTL_LOCKSTATE 1
#define NETSVC_MRKNG_LVL_L2 1
#define _SC_SYMLOOP_MAX 120
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define SIDL 1
#define HW_MACHINE_ARCH 12
#define IOPOL_UTILITY 4
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define CTLFLAG_NOAUTO 0x02000000
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define P_CLASSIC P_TRANSLATED
#define PRIO_USER 2
#define _POSIX_THREAD_CPUTIME (-1)
#define P_TIMEOUT 0x00000400
#define IOPOL_APPLICATION IOPOL_STANDARD
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define _SC_THREAD_PRIO_PROTECT 88
#define TH_RST 0x04
#define _QUAD_LOWWORD 0
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define CTLTYPE_STRING 3
#define AUDIT_ARGE 0x0008
#define AUDIT_ARGV 0x0004
#define IPV6_BOUND_IF 125
#define USER_MAXID 21
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define __PTHREAD_MUTEX_SIZE__ 56
#define _POSIX_PIPE_BUF 512
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define SIGUSR1 30
#define RLIMIT_DATA 2
#define __TVOS_9_0 90000
#define PF_SNA AF_SNA
#define _POSIX2_EXPR_NEST_MAX 32
#define _EOPNOTSUPP -95
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define SQLITE_DIRECTONLY 0x000080000
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define __FLT128_MIN_EXP__ (-16381)
#define IOPOL_PASSIVE 2
#define WUNTRACED 0x00000002
#define SIGTTOU_ 22
#define NZERO 20
#define __IPHONE_12_4 120400
#define UINT16_C(v) (v)
#define IPV6CTL_V6ONLY 24
#define NOTE_CHILD 0x00000004
#define IP_MULTICAST_VIF 14
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define CTL_NET 4
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ENOMSG 91
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define __INT_LEAST16_WIDTH__ 16
#define dtob(x) ((x)<<DEV_BSHIFT)
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define _EISCONN -106
#define AF_ECMA 8
#define KEV_INET6_CHANGED_ADDR 2
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define __INT64_C(c) c ## LL
#define SA_SIGINFO 0x0040
#define AC_F 0
#define IPV6_V6ONLY_ 26
#define _EPROTOTYPE -91
#define SQLITE_LOCK_EXCLUSIVE 4
#define AC_W 2
#define AC_X 1
#define __CHAR16_TYPE__ short unsigned int
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define IPCTL_FORWARDING 1
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define __MAC_11_3 110300
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define KERN_KDGETREG 9
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define PF_LAT AF_LAT
#define TCP_NOTSENT_LOWAT 0x201
#define __APPLE_API_OBSOLETE 
#define KERN_SAFEBOOT 66
#define SQLITE_VTAB_INNOCUOUS 2
#define _SC_THREAD_THREADS_MAX 94
#define CTL_KERN 1
#define _BLKSIZE_T 
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define KERN_POSIX 58
#define TCP_RXT_FINDROP 0x100
#define __SIZEOF_INT__ 4
#define __ATOMIC_CONSUME 1
#define KERN_KDENABLE 3
#define A_SETCTLMODE 42
#define CTLTYPE_INT 2
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define P_REBOOT 0x00200000
#define SQLITE_FCNTL_PDB 30
#define CLOCK_REALTIME _CLOCK_REALTIME
#define IPCTL_INTRQMAXLEN 10
#define _ETIME -62
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define SO_DOMAIN_ 39
#define O_RDONLY_ 0
#define _SC_VERSION 8
#define _SC_RE_DUP_MAX 16
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define IPPROTO_EGP 8
#define __USER_LABEL_PREFIX__ _
#define MCLOFSET (MCLBYTES - 1)
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define SQLITE_MUTEX_STATIC_OPEN 4
#define IPV6_FAITH 29
#define ENEEDAUTH 81
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define SQLITE_LIMIT_COLUMN 2
#define _SYS_QUEUE_H_ 
#define _ELIBEXEC -83
#define PTHREAD_CANCEL_DEFERRED 0x02
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define WCONTINUED 0x00000010
#define UINT_FAST64_MAX UINT64_MAX
#define __TVOS_11_3 110300
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define ILL_ILLOPC 1
#define MCLBYTES (1 << MCLSHIFT)
#define __LDBL_HAS_INFINITY__ 1
#define _EPFNOSUPPORT -96
#define SIGSTOP_ 19
#define TCPOLEN_SIGNATURE 18
#define __MAC_10_5 1050
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define IPPROTO_ETHERIP 97
#define _SYS_RESOURCE_H_ 
#define _ECONNABORTED -103
#define SQLITE_PRAGMA 19
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define NOTE_FORK 0x40000000
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define _ELIBBAD -80
#define _SYS__ENDIAN_H_ 
#define __FLT32_DIG__ 6
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define _SC_TRACE_EVENT_FILTER 98
#define MACH_PORT_INFO_EXT 7
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define IPV6CTL_KAME_VERSION 20
#define KEV_INET_PORTINUSE 8
#define LOCK_NB_ 4
#define SIGCHLD_ 17
#define __FLT32_IS_IEC_60559__ 2
#define __GNUC__ 11
#define HW_VECTORUNIT 13
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define O_CREAT_ (1 << 6)
#define ILL_COPROC 7
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define IPPROTO_EON 80
#define SO_BROADCAST 0x0020
#define _EILSEQ -84
#define SQLITE_TRACE_STMT 0x01
#define TCP_CONNECTIONTIMEOUT 0x20
#define FLOAT80_H 
#define SIGIO 23
#define KEV_DL_PROTO_DETACHED 15
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define FD_H 
#define IPPROTO_ENCAP 98
#define __STDC_UTF_16__ 1
#define _ESPIPE -29
#define __DBL_IS_IEC_60559__ 2
#define PF_CHAOS AF_CHAOS
#define SQLITE_LIMIT_WORKER_THREADS 11
#define __API_AVAILABLE_GET_MACRO(...) 
#define MMAP_ANONYMOUS 0x20
#define IPPROTO_AHIP 61
#define CTL_DEBUG 5
#define KERN_LOW_PRI_WINDOW 56
#define SQLITE_INTERRUPT 9
#define P_NOCLDSTOP 0x00000008
#define __abortlike __dead2 __cold __not_tail_called
#define SYNC_VOLUME_FULLSYNC 0x01
#define M16KCLSHIFT 14
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define EDQUOT 69
#define SQLITE_FULL 13
#define HW_L2SETTINGS 19
#define __strong 
#define AF_CNT 21
#define _ALLOCA_H_ 
#define IPV6PORT_RESERVEDMIN 600
#define KERN_KDBUFWAIT 23
#define IPPROTO_ESP 50
#define SQLITE_FCNTL_PERSIST_WAL 10
#define SV_SIGINFO SA_SIGINFO
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define KEV_INET_SUBCLASS 1
#define _SC_MEMLOCK 30
#define __FLT32X_HAS_INFINITY__ 1
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define SI_TIMER_ -2
#define __INT32_MAX__ 0x7fffffff
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define STDOUT_FILENO 1
#define __INT_WIDTH__ 32
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define __STDC_WANT_LIB_EXT1__ 1
#define NOTE_EXTEND 0x00000004
#define SIGEV_NONE 0
#define SO_TYPE 0x1008
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define KERNEL_PTRACE_H 
#define SCM_RIGHTS 0x01
#define PUSER 50
#define ru_first ru_ixrss
#define __WATCHOS_7_3 70300
#define NOTE_TRACK 0x00000001
#define w_retcode w_T.w_Retcode
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __DECIMAL_DIG__ 21
#define SQLITE_UTF16LE 2
#define _EADV -68
#define P_WEXIT 0x00002000
#define BYTES_ROUND_UP(bytes) (PAGE_ROUND_UP(bytes) << PAGE_BITS)
#define IP_RETOPTS_ 7
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define ESTALE 70
#define _SC_2_SW_DEV 24
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define _WCHAR_T_DEFINED_ 
#define _PC_FILESIZEBITS 18
#define KERN_PROCARGS 38
#define _WPERM_OK (1<<20)
#define AUC_UNSET 0
#define KEV_DL_IF_DETACHING 10
#define IPV6CTL_MCAST_PMTU 44
#define _POSIX_LOGIN_NAME_MAX 9
#define KERN_AIOMAX 46
#define KERN_VNODE 13
#define PF_INET6_ 10
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define NOTE_EXEC 0x20000000
#define CTL_DEBUG_NAME 0
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define IPV6CTL_MAXFRAGS 41
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define _DELETE_OK (1<<12)
#define AUDIT_TRIGGER_MAX 8
#define UNAME_LENGTH 65
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define EAUTH 80
#define __va_list__ 
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define _SC_XOPEN_VERSION 116
#define make_attr(_type,thing) ((struct attr) {.type = attr_ ##_type, ._type = thing})
#define _FSBLKCNT_T 
#define IPPROTO_LARP 91
#define SQLITE_LIMIT_SQL_LENGTH 1
#define AF_RESERVED_36 36
#define KERN_JOB_CONTROL 19
#define SQLITE_CONFIG_SERIALIZED 3
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define CLOCK_MONOTONIC_ 1
#define ECHILD 10
#define KERN_SHREG_PRIVATIZABLE 54
#define L_tmpnam 1024
#define _PC_MIN_HOLE_SIZE 27
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define AC_R 4
#define _EREMOTEIO -121
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define PTRACE_GETSIGINFO_ 0x4202
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define IPPROTO_TCF 87
#define KERN_PROC_ALL 0
#define __MMX__ 1
#define PTHREAD_CANCEL_ENABLE 0x01
#define KERN_PROCARGS2 49
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define TCPOPT_FASTOPEN 34
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define EBADMSG 94
#define _ECONNREFUSED -111
#define SO_LINGER_SEC 0x1080
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define SO_SNDLOWAT 0x1003
#define COMAPT_MAXLOGNAME 12
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define MSG_CTRUNC 0x20
#define SQLITE_LOCK_SHARED 1
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define SQLITE_SYNC_NORMAL 0x00002
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define PTRDIFF_MIN INTMAX_MIN
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define SQLITE_STATUS_PARSER_STACK 6
#define STDERR_FILENO 2
#define __DARWIN_ONLY_VERS_1050 0
#define __sfileno(p) ((p)->_file)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define DEV_BLOCK 0
#define TCPOPT_CC 11
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define MEMORY_H 
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define SA_NODEFER 0x0010
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define __pure 
#define IPV6CTL_TEMPVLTIME 34
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define WTERMSIG(x) (_WSTATUS(x))
#define SYSCTL_DEF_ENABLED 
#define _EHOSTDOWN -112
#define SOCK_DGRAM_ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define list_for_each_safe(list,item,tmp) for (item = (list)->next, tmp = item->next; item != (list); item = tmp, tmp = item->next)
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define _POSIX_REGEXP 200112L
#define A_GETEXPAFTER 43
#define IPPROTO_RCCMON 10
#define __FLT32_HAS_INFINITY__ 1
#define EXIT_SUCCESS 0
#define A_SETPOLICY 34
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define KERN_KDWRITEMAP 18
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define AF_LINK 18
#define __INT_FAST32_MAX__ 0x7fffffff
#define __LDBL_HAS_DENORM__ 1
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define SQLITE_CREATE_VIEW 8
#define __MAC_10_15_1 101501
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define _RLIMIT_POSIX_FLAG 0x1000
#define ITIMER_PROF 2
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define _PC_CHOWN_RESTRICTED 7
#define user_put(addr,var) user_write(addr, &(var), sizeof(var))
#define SO_NREAD 0x1020
#define SQLITE_IGNORE 2
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _SC_SIGQUEUE_MAX 51
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __enum_open 
#define _MACH_I386__STRUCTS_H_ 
#define SQLITE_FCNTL_CKPT_START 39
#define w_stopsig w_S.w_Stopsig
#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNTILFIRSTUSERAUTHENTICATION 0x00300000
#define NL_LANGMAX 14
#define KERN_TFP_POLICY_DENY 0
#define NOTE_FFLAGSMASK 0x00ffffff
#define SQLITE_SHM_UNLOCK 1
#define KERN_NTP_PLL 27
#define CTL_HW 6
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define KERN_RAGEVNODE 68
#define _WSTOPPED 0177
#define _INT16_T 
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define HW_L3CACHESIZE 22
#define EPIPE 32
#define FP_STATE_BYTES 512
#define USER_BC_BASE_MAX 2
#define SA_NODEFER_ 0x40000000
#define fallthrough __attribute__((fallthrough))
#define LONG_MIN (-LONG_MAX - 1L)
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define _BSD_SETJMP_H 
#define IP_NAT__XXX 55
#define AQ_LOWATER 10
#define SQLITE_SCHEMA 17
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SQLITE_CONFIG_MMAP_SIZE 22
#define INET_ADDRSTRLEN 16
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define IPPROTO_KRYPTOLAN 65
#define KERN_OSVERSION 65
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_CONFIG_MEMSTATUS 9
#define KERN_THALTSTACK 63
#define SQLITE_TESTCTRL_IMPOSTER 25
#define SI_USER 0x10001
#define FS_H 
#define TRACEBUF 
#define KERN_CLOCKRATE 12
#define NOTE_SIGNAL 0x08000000
#define __DARWIN_SUF_NON_CANCELABLE 
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define SO_WANTMORE 0x4000
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define USER_POSIX2_LOCALEDEF 16
#define _JBLEN ((9 * 2) + 3 + 16)
#define KERN_MAXFILES 7
#define must_check __attribute__((warn_unused_result))
#define _STRUCT_TIMEVAL struct timeval
#define KERN_DUMMY 33
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define AUDIT_TRIGGER_LOW_SPACE 1
#define SIGSTKSZ 131072
#define _SYS_WAIT_H_ 
#define IPV6CTL_USE_DEFAULTZONE 39
#define _SC_XOPEN_CRYPT 108
#define SEGV_MAPERR_ 1
#define SOCKADDR_DATA_MAX 108
#define HW_FLOATINGPT 11
#define __weak 
#define _SC_IPV6 118
#define _DEV_T 
#define IPPROTO_TTP 84
#define CTL_VFS 3
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define IPPROTO_PVP 75
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define __DBL_MAX_EXP__ 1024
#define RLIMIT_FSIZE_ 1
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SI_KERNEL_ 128
#define KERN_TTY 69
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define PTRACE_TRACEME_ 0
#define IPPROTO_MAX 256
#define _SC_LOGIN_NAME_MAX 73
#define __FLT_MAX_10_EXP__ 38
#define IPPROTO_CMTP 38
#define NOTE_EXIT_MEMORY 0x00020000
#define _MACH_I386_BOOLEAN_H_ 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define IPPROTO_GMTP 100
#define KERN_TFP_POLICY 1
#define ETOOMANYREFS 59
#define _PC_NAME_CHARS_MAX 10
#define P_EXEC 0x00004000
#define _POSIX_TZNAME_MAX 6
#define IPV6CTL_MRTPROTO 8
#define _POSIX_SSIZE_MAX 32767
#define MSG_CTRUNC_ 0x8
#define MAXUPRC CHILD_MAX
#define SQLITE_FCNTL_PRAGMA 14
#define _SYS_SIGNAL_H_ 
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define IPV6_UNICAST_HOPS 4
#define IPPROTO_BRSATMON 76
#define RESOURCE_H 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EVFILT_READ (-1)
#define EV_ONESHOT 0x0010
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define P_ADVLOCK 0x00000001
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define FPE_FLTOVF 2
#define KEV_DL_SIFMETRICS 2
#define __ATOMIC_HLE_ACQUIRE 65536
#define _PTRDIFF_T 
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define _PC_VDISABLE 9
#define LEAK_DEBUG 0
#define P_RESV7 0x00800000
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define IP_DUMMYNET_FLUSH 62
#define __kpi_deprecated_arm64_macos_unavailable 
#define _ENOSYS -38
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define _glue(a,b) a ##b
#define MAXHOSTNAMELEN 256
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define RLIMIT_MSGQUEUE_ 12
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define __SPI_DEPRECATED(...) 
#define _POSIX_CPUTIME (-1)
#define _EAFNOSUPPORT -97
#define __FLT64X_MANT_DIG__ 64
#define PTHREAD_CREATE_DETACHED 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define WMESGLEN 7
#define WAKEMON_SET_DEFAULTS 0x08
#define __SIZEOF_WINT_T__ 4
#define RLIMIT_DATA_ 2
#define KERN_COREDUMP 51
#define __WATCHOS_5_2 50200
#define list_first_entry(list,type,member) list_entry((list)->next, type, member)
#define TCP_ENABLE_ECN 0x104
#define __LONG_LONG_WIDTH__ 64
#define _ETXTBSY -26
#define EV_RECEIPT 0x0040
#define AUC_AUDITING 1
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define AF_CHAOS 5
#define _POSIX_NAME_MAX 14
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define _SC_THREAD_KEYS_MAX 86
#define stdout __stdoutp
#define SQLITE_FCNTL_FILE_POINTER 7
#define SIGUSR2_ 12
#define KERN_PROC_RUID 6
#define KERN_THREADNAME 71
#define TRACE_memory TRACE__NOP
#define KERN_KDEFLAGS 1
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define CTLFLAG_MASKED 0x04000000
#define PTRACE_POKEDATA_ 5
#define SQLITE_SOURCE_ID "2020-06-18 14:16:19 02c344aceaea0d177dd42e62c8541e3cab4a26c757ba33b3a31a43ccc7d4aapl"
#define MSG_HAVEMORE 0x2000
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define _POSIX_SPORADIC_SERVER (-1)
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define IPPROTO_APES 99
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define KERN_HOSTNAME 10
#define WEXITED 0x00000004
#define SQLITE_DBCONFIG_DQS_DML 1013
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define KERN_MAXPARTITIONS 23
#define IPCTL_DEFTTL 3
#define p_back p_un.p_st1.__p_back
#define powerof2(x) ((((x)-1)&(x))==0)
#define IP_FW_ADD 40
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define _SC_XBS5_LPBIG_OFFBIG 125
#define alloca(size) __alloca(size)
#define _USE_FORTIFY_LEVEL 2
#define __INT16_MAX__ 0x7fff
#define SQLITE_OPEN_MEMORY 0x00000080
#define SQLITE_MUTEX_STATIC_MASTER 2
#define _SYS_DIRENT_H 
#define SQLITE_STATUS_SCRATCH_USED 3
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define MAXPHYS (128 * 1024)
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define AT_SYMLINK_NOFOLLOW_ 0x100
#define IPV6CTL_RTMINEXPIRE 26
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define P_DIRTY_DEFER 0x00000004
#define KERN_IPC 32
#define PTHREAD_INHERIT_SCHED 1
#define IPCTL_INTRQDROPS 11
#define _SC_MQ_OPEN_MAX 46
#define _GID_T 
#define KERN_AIOPROCMAX 47
#define _ANSI_STDDEF_H 
#define IPV6CTL_TEMPPLTIME 33
#define __INT_LEAST32_MAX__ 0x7fffffff
#define PTHREAD_CANCEL_DISABLE 0x00
#define TCP_NOOPT 0x08
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define MPO_TG_BLOCK_TRACKING 0x200
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define IOPOL_DEFAULT 0
#define DST_WET 3
#define KEVENT_FLAG_NONE 0x000000
#define TH_SYN 0x02
#define SO_RCVLOWAT 0x1004
#define __SIZE_TYPE__ long unsigned int
#define IPPROTO_MTP 92
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define IPPROTO_MUX 18
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define _POSIX_CLOCKRES_MIN 20000000
#define _POSIX_JOB_CONTROL 200112L
#define _ENOTBLK -15
#define IPPROTO_CFTP 62
#define IPCTL_SOURCEROUTE 8
#define SIGINFO 29
#define SQLITE_CONFIG_MULTITHREAD 2
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define ATOMIC_FLAG_INIT { 0 }
#define IP_DUMMYNET_GET 64
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define A_SENDTRIGGER 31
#define __FLT64_MIN_EXP__ (-1021)
#define SQLITE_CONFIG_MUTEX 10
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __SPI_AVAILABLE(...) 
#define KERN_BOOTFILE 28
#define __MSFILTERREQ_DEFINED 
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define PF_MAX AF_MAX
#define DT_SOCK 12
#define CHAR_MAX SCHAR_MAX
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define MAXDOMNAMELEN 256
#define IP_RECVTOS 27
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define IN_CLASSC_HOST 0x000000ff
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define _SC_FILE_LOCKING 69
#define __strncpy_safe __attribute__((nonstring))
#define pseudo_AF_PIP 25
#define RE_DUP_MAX 255
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IOPOL_ATIME_UPDATES_OFF 1
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define HW_NCPU 3
#define SQLITE_DETERMINISTIC 0x000000800
#define _PC_NAME_MAX 4
#define TCP6_MSS 1024
#define EV_DISPATCH 0x0080
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define _POSIX_THREADS 200112L
#define _PC_MAX_CANON 2
#define PF_INET6 AF_INET6
#define EDEVERR 83
#define PF_INET_ 2
#define IP_RECVTTL 24
#define IPPROTO_INLSP 52
#define NBPG 4096
#define MAX_GROUPS 32
#define SQLITE_CONFIG_LOG 16
#define NBPW sizeof(int)
#define IPV6CTL_LOG_INTERVAL 14
#define CBQSIZE (CBLOCK/NBBY)
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define SIGTTIN_ 21
#define EV_OOBAND EV_FLAG1
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define TCPOLEN_FASTOPEN_REQ 2
#define FIONREAD_ 0x541b
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _SC_JOB_CONTROL 6
#define _SC_REALTIME_SIGNALS 36
#define P_CONTINUED 0x00000080
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define SIGEV_THREAD 3
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define PSPIN 0x800
#define CHAR_MIN SCHAR_MIN
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define SO_PROTOCOL_ 38
#define AUDIT_SCNT 0x0400
#define _ENODATA -61
#define __IPHONE_5_0 50000
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KIPC_SOQLIMITCOMPAT 10
#define __VERSION__ "11.2.0"
#define _EMULTIHOP -72
#define __IPHONE_5_1 50100
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define IP_PKTINFO 26
#define __UINT64_C(c) c ## ULL
#define _XOPEN_PATH_MAX 1024
#define ILL_ILLTRP 2
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define _MACH_PORT_T 
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define _SUSECONDS_T 
#define SQLITE_MUTEX_STATIC_LRU 6
#define SQLITE_MUTEX_STATIC_MEM2 4
#define ILL_BADSTK 8
#define KEV_DL_ISSUES 24
#define NET_RT_STAT 4
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define _POSIX_VERSION 200112L
#define TCP_MAX_WINSHIFT 14
#define KERN_OPENEVT_PROC 1
#define SQLITE_TESTCTRL_FIRST 5
#define IPV6_2292DSTOPTS 23
#define IP_RECVTTL_ 12
#define __INT_WCHAR_T_H 
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define sint(size) glue3(int,size,_t)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define _UNISTD_H_ 
#define SIGINT_ 2
#define PTHREAD_PRIO_INHERIT 1
#define SS_ONSTACK_ 1
#define SQLITE_LOCK_NONE 0
#define _PC_REC_INCR_XFER_SIZE 20
#define TCPCI_OPT_WSCALE 0x00000004
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define ENOTSOCK 38
#define IPPROTO_PGM 113
#define SZOMB 5
#define TH_ECE 0x40
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define AT_IPC_MSG ((unsigned char)1)
#define TCP_NOPUSH 0x04
#define __FLT128_MAX_EXP__ 16384
#define ENOTDIR 20
#define PTHREAD_MUTEX_NORMAL 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define PF_ECMA AF_ECMA
#define DEV_CHAR 1
#define SIGBUS 10
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SQLITE_DBCONFIG_TRUSTED_SCHEMA 1017
#define KEV_INET_ARPRTRALIVE 10
#define DTF_REWIND 0x0004
#define SO_LINGER_ 13
#define CTL_MACHDEP 7
#define NOTE_ABSOLUTE 0x00000008
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define __SLBF 0x0001
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define TRAP_TRACE 2
#define RENAME_SECLUDE 0x00000001
#define __FLT32_MANT_DIG__ 24
#define IPV6_MULTICAST_HOPS 10
#define _FSTDIO 
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define NET_MAXID AF_MAX
#define RLIMIT_NPROC 7
#define _ECHILD -10
#define _STDDEF_H 
#define __WATCHOS_3_0 30000
#define KEV_DL_RRC_STATE_CHANGED 28
#define SIG_DFL_ 0
#define SV_NODEFER SA_NODEFER
#define USER_POSIX2_C_DEV 12
#define SO_KEEPALIVE_ 9
#define _INTMAX_T 
#define __SRD 0x0004
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define __SRW 0x0010
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define TCP_CONGESTION_ 13
#define __IOS_UNAVAILABLE 
#define KEV_DL_DELMULTI 8
#define SQLITE_CONFIG_MALLOC 4
#define __IPHONE_13_7 130700
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define IPV6CTL_FORWSRCRT 5
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define __FLT64X_DIG__ 18
#define P_SUGID 0x00000100
#define PTRACE_PEEKUSER_ 3
#define SQLITE_CONFIG_PAGECACHE 7
#define SQLITE_DROP_VIEW 17
#define NL_TEXTMAX 2048
#define ELOOP 62
#define _ENOPKG -65
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define SIG_UNBLOCK 2
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define _POSIX_RTSIG_MAX 8
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define SQLITE_INTEGER 1
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define HW_MACHINE 1
#define IN_CLASSB_MAX 65536
#define IP_MULTICAST_IFINDEX 66
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define IPPROTO_CPHB 73
#define __ORDER_PDP_ENDIAN__ 3412
#define _POSIX_MEMLOCK (-1)
#define USER_TZNAME_MAX 20
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define str(x) _str(x)
#define __SWR 0x0008
#define SQLITE_FCNTL_TRACE 19
#define IPPROTO_MHRP 48
#define MS_NOEXEC_ (1 << 3)
#define P_INMEM 0
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define s6_addr __u6_addr.__u6_addr8
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define SQLITE_TOOBIG 18
#define IN_CLASSD_NET 0xf0000000
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define __DARWIN_NO_LONG_LONG 0
#define UINT64_MAX 18446744073709551615ULL
#define KERN_UNRAGE_PROC 3
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __INT_FAST8_MAX__ 0x7f
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define SI_TKILL_ -6
#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNLESSOPEN 0x00200000
#define IPPROTO_UDP 17
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6_FW_ADD 30
#define __DTF_ATEND 0x0020
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define SS_ONSTACK 0x0001
#define PF_DATAKIT AF_DATAKIT
#define PF_NDRV AF_NDRV
#define _POSIX_TRACE_SYS_MAX 8
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define CTLFLAG_LOCKED 0x00800000
#define AF_UTUN 38
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define NOTE_CRITICAL 0x00000020
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define IPV6CTL_KEEPFAITH 13
#define UTIL_TIMER_H 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _SQLITE3RTREE_H_ 
#define AF_INET 2
#define PTHREAD_PRIO_PROTECT 2
#define __INT8_TYPE__ signed char
#define IP_DONTFRAG 28
#define GUARD_TYPE_MACH_PORT 0x1
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define SQLITE_SCANSTAT_SELECTID 5
#define _SC_PRIORITIZED_IO 34
#define trylock(lock) trylock(lock, __FILE__, __LINE__)
#define EIDRM 90
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define SQLITE_TRACE_CLOSE 0x08
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define MAXPHYSIO MAXPHYS
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define _SC_V6_ILP32_OFFBIG 104
#define SO_NOADDRERR 0x1023
#define _EPIPE -32
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define _SYS_SOCKET_H_ 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define KIPC_NMBCLUSTERS 9
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __MAC_10_11_2 101102
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define _RUNE_T 
#define MPO_DENAP_RECEIVER 0x40
#define KERN_PROC_TTY 4
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define PTRACE_CONT_ 7
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define AU_CLASS_MASK_RESERVED 0x10000000
#define minor(x) ((int32_t)((x) & 0xffffff))
#define IP_MULTICAST_IF 9
#define WORD_BIT 32
#define IP_DROP_MEMBERSHIP 13
#define PTHREAD_STACK_MIN 8192
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define __SSE_MATH__ 1
#define _SC_SAVED_IDS 7
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define SQLITE_CREATE_INDEX 1
#define SQLITE_OPEN_FILEPROTECTION_NONE 0x00400000
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define NOTE_FFNOP 0x00000000
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define EMU_H 
#define _SYS_PROC_H_ 
#define AF_OPS (1 << 3)
#define SIGCONT 19
#define CTLTYPE_OPAQUE 5
#define MPO_IMPORTANCE_RECEIVER 0x08
#define SQLITE_CDECL 
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define INT_LEAST64_MAX INT64_MAX
#define A_SETCLASS 23
#define __WATCHOS_3_1_1 30101
#define _POSIX_TRACE (-1)
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define IP_OLD_FW_DEL 51
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define KEV_INET6_ADDR_DELETED 3
#define AUDIT_WINDATA 0x0020
#define _ID_T 
#define _POSIX2_PBS_CHECKPOINT (-1)
#define IPPORT_USERRESERVED 5000
#define PARTLY_WITHIN 1
#define AF_OSI AF_ISO
#define EPWROFF 82
#define IPPORT_HIFIRSTAUTO 49152
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define CMSG_NEXT_(cmsg) ((uint8_t *)(cmsg) + CMSG_LEN_(cmsg))
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define IN_CLASSA_MAX 128
#define MPG_FLAGS_NONE (0x00ull)
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define _SYS_NAMELEN 256
#define TCP_CONNECTION_INFO 0x106
#define KERN_KDGETENTROPY 16
#define IPPROTO_VINES 83
#define SQLITE_READONLY 8
#define INTPTR_MIN (-INTPTR_MAX-1)
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define FP_CHOP 3
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define SO_REUSEADDR_ 2
#define IP_PORTRANGE_HIGH 1
#define _WRITE_OK (1<<10)
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define _SC_DELAYTIMER_MAX 45
#define _SCHED_H_ 
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define EBUSY 16
#define PVFS 20
#define EPROCLIM 67
#define SAE_CONNID_ANY 0
#define TRAP_BRKPT 1
#define _EISDIR -21
#define KEV_INET6_NEW_LL_ADDR 4
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define KERN_SYMFILE 37
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define DEBUG_verbose DEBUG_all
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define va_start(v,l) __builtin_va_start(v,l)
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define __INT_FAST16_MAX__ 0x7fff
#define MSG_OOB 0x1
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define SQLITE_CONFIG_SCRATCH 6
#define HW_MEMSIZE 24
#define INT_LEAST64_MIN INT64_MIN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define SOCK_CLOEXEC_ 0x80000
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define _POSIX2_LINE_MAX 2048
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define __SYS_APPLEAPIOPTS_H__ 
#define SIGSYS 12
#define SQLITE_CALLBACK 
#define RLIMIT_RTTIME_ 15
#define CLOFF CLOFSET
#define KERN_OSRELDATE 26
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define INT32_C(v) (v)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define __SEOF 0x0020
#define KERN_RAGE_PROC 1
#define MSG_DONTWAIT_ 0x40
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define IPPROTO_SWIPE 53
#define _EREMOTE -66
#define KERN_COREFILE 50
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define _POSIX_TIMERS (-1)
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define KIPC_SOCKBUF_WASTE 2
#define MS_SILENT_ (1 << 15)
#define L_INCR SEEK_CUR
#define MCAST_UNBLOCK_SOURCE 85
#define SOCK_RAW_ 3
#define IP_HDRINCL 2
#define IPV6_TCLASS 36
#define NUM_SIGS 64
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define __kpi_deprecated(_msg) 
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define P_FSTRACE 0
#define _KEY_T 
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define LIST_CHECK_HEAD(head,field) 
#define _POSIX_RAW_SOCKETS (-1)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define __SERR 0x0040
#define UTIL_SYNC_H 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __FXSR__ 1
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define IP_RECVIF 20
#define EXPR_NEST_MAX 32
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define CTL_MAXID 9
#define __INT_LEAST16_MAX__ 0x7fff
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define _SC_2_UPE 25
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 11
#define _FD_SET 
#define __SEG_GS 1
#define EADDRINUSE 48
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define EV_FLAG0 0x1000
#define EV_FLAG1 0x2000
#define CLSIZE 1
#define __SIG_ATOMIC_WIDTH__ 32
#define P_DIRTY_MARKED 0x00000080
#define _POSIX2_PBS_TRACK (-1)
#define __MISMATCH_TAGS_PUSH 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define _SC_TRACE_LOG 100
#define __INT_LEAST64_TYPE__ long long int
#define INT64_MAX 9223372036854775807LL
#define SIGCHLD 20
#define SIGSEGV_ 11
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define _BSM_AUDIT_H 
#define MAXPRI 127
#define __INT16_TYPE__ short int
#define KEV_DL_SIFGENERIC 6
#define FULLY_WITHIN 2
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define MAXLOGNAME 255
#define CPUMON_MAKE_FATAL 0x1000
#define SQLITE_FCNTL_SIZE_HINT 5
#define __TVOS_13_0 130000
#define _WEXT_OK (1<<18)
#define DT_UNKNOWN 0
#define _MACHTYPES_H_ 
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define TH_FIN 0x01
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define TCP_MAXSEG 0x02
#define DEFAULT_CHANNEL verbose
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define RUSAGE_SELF 0
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define __TVOS_13_2 130200
#define SQLITE_CONFIG_PMASZ 25
#define _SQLITE3_H_ 
#define SQLITE_EXPERIMENTAL 
#define IP_OLD_FW_FLUSH 52
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define NOTE_LINK 0x00000010
#define BYTES_ROUND_DOWN(bytes) (PAGE(bytes) << PAGE_BITS)
#define _POSIX2_PBS (-1)
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define _SYS__SELECT_H_ 
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define IPV6_FW_ZERO 33
#define NOTE_WRITE 0x00000002
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define __DARWIN_LITTLE_ENDIAN 1234
#define _I386_PARAM_H_ 
#define __SWIFT_UNAVAILABLE 
#define _PC_ALLOC_SIZE_MIN 16
#define ILL_PRVREG 6
#define SQLITE_BLOB 4
#define FPE_FLTINV 5
#define pseudo_AF_XTP 19
#define __LITTLE_ENDIAN__ 1
#define IN_CLASSB_HOST 0x0000ffff
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define USER_STREAM_MAX 19
#define list_for_each_entry_safe(list,item,tmp,member) for (item = list_first_entry(list, typeof(*(item)), member), tmp = list_next_entry(item, member); &item->member != (list); item = tmp, tmp = list_next_entry(item, member))
#define KERN_POSIX1 17
#define HW_TB_FREQ 23
#define HW_PHYSMEM 5
#define CTLFLAG_EXPERIMENT 0x00100000
#define IPPROTO_NSP 31
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define NOTE_LEEWAY 0x00000010
#define __GNUC_MINOR__ 2
#define SQLITE_LIMIT_LENGTH 0
#define _ECONNRESET -104
#define __FLT32X_DIG__ 15
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define __WORDSIZE 64
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define INT64_MIN (-INT64_MAX-1)
#define BITS_H 
#define _PC_REC_MIN_XFER_SIZE 22
#define USER_POSIX2_SW_DEV 17
#define KERN_SPECULATIVE_READS 64
#define SQLITE_MUTEX_STATIC_MEM 3
#define __CONSTANT_CFSTRINGS__ 1
#define __INT_FAST16_WIDTH__ 16
#define CLD_STOPPED 5
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define IPV6CTL_FORWARDING 1
#define MACH_PORT_QLIMIT_BASIC (5)
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define ELAST 106
#define AF_VSOCK 40
#define SIGALRM_ 14
#define list_entry(item,type,member) container_of(item, type, member)
#define __code_model_small__ 1
#define AF_COIP 20
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define SIGSTKFLT_ 16
#define TCPOLEN_SACK_PERMITTED 2
#define SIGPIPE_ 13
#define SQLITE_FCNTL_RBU 26
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define ESOCKTNOSUPPORT 44
#define AF_LOCAL AF_UNIX
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define __WCHAR_TYPE__ int
#define SOCK_NONBLOCK_ 0x800
#define __SIZEOF_FLOAT__ 4
#define _SC_XOPEN_ENH_I18N 109
#define KERN_UNRAGE_THREAD 4
#define SQLITE_CONFIG_GETPCACHE 15
#define _POSIX_TRACE_NAME_MAX 8
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define SQLITE_FORMAT 24
#define XUCRED_VERSION 0
#define NOTE_RENAME 0x00000020
#define PRIBIO 16
#define VM_METER 1
#define DEBUG_memory DEBUG_all
#define SQLITE_STMTSTATUS_SORT 2
#define NET_RT_MAXID 11
#define IPPROTO_GGP 3
#define _SECURE__STRINGS_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define FP_RND_DOWN 1
#define _SYS__TYPES_H_ 
#define __FLT32_DECIMAL_DIG__ 9
#define SQLITE_FAIL 3
#define P_OWEUPC 0x00008000
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define TCPOLEN_MAXSEG 4
#define bitfield unsigned int
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define BUFSIZ 1024
#define A_SETFSIZE 26
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define MACH_PORT_RECEIVE_STATUS 2
#define KEV_INET6_DEFROUTER 6
#define _WCHAR_T_DECLARED 
#define MBIGCLSHIFT 12
#define WNOWAIT 0x00000020
#define SQLITE_DBSTATUS_CACHE_USED 1
#define P_FORCEQUOTA 0x20000000
#define _SC_2_PBS 59
#define FTS5_TOKENIZE_AUX 0x0008
#define IP_PORTRANGE 19
#define _CADDR_T 
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define __MACH__ 1
#define __amd64__ 1
#define SCM_CREDS 0x03
#define CBLOCK 64
#define _UINT16_T 
#define IPPROTO_FRAGMENT 44
#define SQLITE_EMPTY 16
#define __LPBIG_OFFBIG (1)
#define _I386__PARAM_H_ 
#define SQLITE_ROLLBACK 1
#define AF_NETBIOS 33
#define LSEEK_CUR 1
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _U_INT 
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define TCP_MAXHLEN (0xf<<2)
#define KERN_FILE 15
#define IPV6_MAX_MEMBERSHIPS 4095
#define IN_CLASSC_NET 0xffffff00
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define _IOLBF 1
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define BITS_SIZE(bits) ((((bits) - 1) / 8) + 1)
#define SQLITE_OPEN_CREATE 0x00000004
#define KERN_MAXFILESPERPROC 29
#define __FLT_MAX_EXP__ 128
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define CTLTYPE_QUAD 4
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define IPPROTO_IPCV 71
#define SQLITE_SUBTYPE 0x000100000
#define IPV6_PORTRANGE_HIGH 1
#define IN_LOOPBACKNET 127
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define _PTHREAD_MUTEXATTR_T 
#define KERN_KDCPUMAP 24
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define __swift_unavailable(_msg) 
#define KERN_LOGSIGEXIT 36
#define CMSG_NXTHDR_(cmsg,mhdr_end) ((cmsg)->len < sizeof (struct cmsghdr_) || CMSG_LEN_(cmsg) + sizeof(struct cmsghdr_) >= (size_t) (mhdr_end - (uint8_t *)(cmsg)) ? NULL : (struct cmsghdr_ *)CMSG_NEXT_(cmsg))
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define _RSIZE_T 
#define _POSIX_REALTIME_SIGNALS (-1)
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define KERN_PROC_LCID 7
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define PTHREAD_MUTEX_ERRORCHECK 1
#define SO_UPCALLCLOSEWAIT 0x1027
#define _POSIX_SEM_VALUE_MAX 32767
#define __UINT_LEAST32_TYPE__ unsigned int
#define __APPLE_API_EVOLVING 
#define __SSE__ 1
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define IPPROTO_GRE 47
#define KERN_CLASSIC KERN_TRANSLATE
#define __LDBL_MIN_EXP__ (-16381)
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define IPPROTO_VMTP 81
#define MMAP_SHARED 0x1
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define __pic__ 2
#define P_ANONYMOUS (1 << 6)
#define _EDOTDOT -73
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define _POSIX_MAX_CANON 255
#define A_GETKAUDIT 29
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define IP_OPTIONS 1
#define NL_SETMAX 255
#define __WINT_WIDTH__ 32
#define __SMBF 0x0080
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define __INT_LEAST8_MAX__ 0x7f
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define SIGUSR2 31
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define USER_BC_STRING_MAX 5
#define NOTE_USECONDS 0x00000002
#define _ELOOP -40
#define SO_WANTOOBFLAG 0x8000
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define PPAUSE 40
#define SQLITE_MUTEX_STATIC_APP3 10
#define TCP_FASTOPEN 0x105
#define _SC_2_FORT_RUN 22
#define SIG_ERR_ -1
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ZF_FLAG (1 << 6)
#define __signed signed
#define _EBADFD -77
#define EMSGSIZE 40
#define _SC_ATEXIT_MAX 107
#define __INT_LEAST32_TYPE__ int
#define KIPC_MAX_PROTOHDR 5
#define ZF_RES (1 << 1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define MCAST_INCLUDE 1
#define SQLITE_INNOCUOUS 0x000200000
#define _LP64 1
#define SIGEMT 7
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define KEV_INET_SIFNETMASK 6
#define TCP_KEEPINTVL 0x101
#define __UINT8_C(c) c
#define SQLITE_SAVEPOINT 32
#define EFBIG 27
#define HW_DISKSTATS 9
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE 59
#define IPPROTO_RSVP 46
#define P_WRITABLE(flags) (flags & P_WRITE && !(flags & P_COW))
#define IOV_MAX 1024
#define IPPROTO_RVD 66
#define WINT_MIN INT32_MIN
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define _PTHREAD_H 
#define VM_MACHFACTOR 4
#define BAD_PAGE 0x10000
#define _PTHREAD_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define USER_BC_SCALE_MAX 4
#define RLIMIT_MEMLOCK_ 8
#define KEV_DL_ADDMULTI 7
#define _EPROTO -71
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define _ENODEV -19
#define IN_CLASSD_HOST 0x0fffffff
#define AF_IEEE80211 37
#define SQLITE_CONFIG_GETMALLOC 5
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define _SC_IOV_MAX 56
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define _SC_PASS_MAX 131
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define AF_CCITT 10
#define NET_SERVICE_TYPE_SIG 2
#define _POSIX_MAPPED_FILES 200112L
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define P_PPWAIT 0x00000010
#define MB_CUR_MAX __mb_cur_max
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define OFF_MAX LLONG_MAX
#define MMAP_PRIVATE 0x2
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define AU_DEFAUDITID (uid_t)(-1)
#define P_DELAYIDLESLEEP 0x00040000
#define QMD_TRACE_ELEM(elem) 
#define __TVOS_11_4 110400
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define SQLITE_DEPRECATED_WITH_REPLACEMENT __API_DEPRECATED_WITH_REPLACEMENT
#define SONPX_SETOPTSHUT 0x000000001
#define P_WRITE (1 << 1)
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define TCPOPT_MAXSEG 2
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define EBADARCH 86
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define ENOTCONN 57
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_BUSY 5
#define KEV_INET_SIFBRDADDR 5
#define SQLITE_ATTACH 24
#define SO_RCVBUF_ 8
#define IN_CLASSB_NET 0xffff0000
#define A_SETCOND 38
#define IP_FW_FLUSH 42
#define TRACE_instr TRACE__NOP
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define SQLITE_CREATE_TEMP_VIEW 6
#define MACH_PORT_QLIMIT_SMALL (16)
#define P_tmpdir "/var/tmp/"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SQLITE_ABORT 4
#define PSOCK 24
#define EPFNOSUPPORT 46
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define list_for_each_entry(list,item,member) for (item = list_entry((list)->next, typeof(*item), member); &item->member != (list); item = list_entry(item->member.next, typeof(*item), member))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define IPV6_PORTRANGE_DEFAULT 0
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define RUSAGE_INFO_V3 3
#define _POSIX2_BC_BASE_MAX 99
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define _POSIX_MQ_PRIO_MAX 32
#define SV_INTERRUPT SA_RESTART
#define __DEC_EVAL_METHOD__ 2
#define IPPROTO_IGRP 88
#define _SIZE_T 
#define NET_RT_FLAGS_PRIV 10
#define AT_FDCWD_ -100
#define SQLITE_INSERT 18
#define _SC_2_PBS_TRACK 64
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define _POSIX2_SW_DEV 200112L
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#define NOTE_FFCTRLMASK 0xc0000000
#define SOCK_STREAM 1
#define MSIZE (1 << MSIZESHIFT)
#define OPEN_MAX 10240
#define SQLITE_IOERR_DATA (SQLITE_IOERR | (32<<8))
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_DROP_TEMP_INDEX 12
#define IPPROTO_ICMPV6 58
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define AUDIT_GROUP 0x0080
#define AF_NATM 31
#define OFF_MIN LLONG_MIN
#define MSG_PEEK_ 0x2
#define EVFILT_MACHPORT (-8)
#define AUDIT_TRAIL 0x0100
#define IP_MAX_SOCK_MUTE_FILTER 128
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define _SA_FAMILY_T 
#define SO_ACCEPTCONN 0x0002
#define _ENETDOWN -100
#define __ORDER_BIG_ENDIAN__ 4321
#define RLIMIT_MEMLOCK 6
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define PF_IMPLINK AF_IMPLINK
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define IPPROTO_BHA 49
#define PTHREAD_SCOPE_SYSTEM 1
#define _POSIX2_VERSION 200112L
#define IP_RSVP_VIF_ON 17
#define EISCONN 56
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SQLITE_OPEN_URI 0x00000040
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define SQLITE_NOTFOUND 12
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define KERN_KDREADCURTHRMAP 21
#define INTMAX_MIN (-INTMAX_MAX-1)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define AF_UNIX 1
#define _SC_TRACE_INHERIT 99
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define IP_RECVRETOPTS 6
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define _STDLIB_H_ 
#define IPPROTO_SVMTP 82
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define _EADDRNOTAVAIL -99
#define EUSERS 68
#define sigmask(m) (1 << ((m)-1))
#define _ENOTEMPTY -39
#define _ELIBSCN -81
#define MAXINTERP 64
#define _VA_LIST_T_H 
#define AF_PPP 34
#define INT_FAST16_MAX INT16_MAX
#define IPCTL_KEEPFAITH 15
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __PIC__ 2
#define PTRACE_SETFPREGS_ 15
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define ENETDOWN 50
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define FP_RND_NEAR 0
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define POLL_ERR 4
#define PTHREAD_EXPLICIT_SCHED 2
#define EINTR 4
#define _REG(n) union { dword_t e ##n; word_t n; }
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define _EBUSY -16
#define EV_POLL EV_FLAG0
#define HW_BUS_FREQ 14
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define AQ_BUFSZ MAXAUDITDATA
#define EQFULL 106
#define SQLITE_DROP_TEMP_TABLE 13
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define AUDIT_PATH 0x0200
#define __alloca(size) __builtin_alloca(size)
#define SQLITE_RECURSIVE 33
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define _MACH_I386_VM_TYPES_H_ 
#define FP_PREC_64B 3
#define SA_NOCLDWAIT 0x0020
#define _POSIX2_CHAR_TERM 200112L
#define SO_ERROR 0x1007
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define _SC_2_FORT_DEV 21
#define PTHREAD_MUTEX_RECURSIVE 2
#define SQLITE_TEXT 3
#define AF_PUP 4
#define __INT32_TYPE__ int
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define _FTS5_H 
#define _SC_TRACE_EVENT_NAME_MAX 127
#define LIST_CHECK_NEXT(elm,field) 
#define _EROFS -30
#define __SIZEOF_DOUBLE__ 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __FLT_MANT_DIG__ 24
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define IPV6_RTHDR_STRICT 1
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define __API_DEPRECATED_BEGIN(...) 
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define __DRIVERKIT_20_0 200000
#define RLIMIT_NLIMITS_ 16
#define IPPROTO_NHRP 54
#define MCAST_BLOCK_SOURCE 84
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define IN_CLASSA_NET 0xff000000
#define FS_PROC_H 
#define _QUAD_HIGHWORD 1
#define UINT8_C(v) (v)
#define __INT16_C(c) c
#define PLATFORM_H 
#define _V6_LP64_OFF64 __LP64_OFF64
#define DTTOIF(dirtype) ((dirtype) << 12)
#define _POSIX2_C_BIND 200112L
#define va_end(v) __builtin_va_end(v)
#define PF_UTUN AF_UTUN
#define EV_UDATA_SPECIFIC 0x0100
#define _EUCLEAN -117
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define IPV6_TCLASS_ 67
#define _SC_TRACE_SYS_MAX 129
#define SQLITE_SHM_LOCK 2
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define USER_ADDR_NULL ((user_addr_t) 0)
#define SQLITE_RANGE 25
#define SIZE_T_MAX ULONG_MAX
#define PF_INET AF_INET
#define SQLITE_DBSTATUS_STMT_USED 3
#define ENOPOLICY 103
#define ECONNREFUSED 61
#define _RATTR_OK (1<<15)
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define EAGAIN 35
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define __DBL_MAX_10_EXP__ 308
#define __tune_core2__ 1
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define RENAME_SWAP 0x00000002
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define PTTYBLOCK 0x200
#define _POSIX_TRACE_LOG (-1)
#define RLIMIT_CORE_ 4
#define _CTERMID_H_ 
#define IPPROTO_SATEXPAK 64
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define A_OLDGETCOND 20
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define __FLT64X_MIN_EXP__ (-16381)
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define P_RWX (P_READ | P_WRITE | P_EXEC)
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SIG_IGN (void (*)(int))1
#define _ENETRESET -102
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define NOTE_OOB 0x00000002
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define SQLITE_LOCK_PENDING 3
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define A_GETSFLAGS 39
#define __PTRDIFF_TYPE__ long int
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define DT_LNK 10
#define AF_FLAG (1 << 4)
#define __I386_MCONTEXT_H_ 
#define HW_EPOCH 10
#define EPROGMISMATCH 75
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define TCPOPT_CCNEW 12
#define _POSIX2_PBS_ACCOUNTING (-1)
#define SQLITE_MUTEX_RECURSIVE 1
#define _SC_2_PBS_CHECKPOINT 61
#define TCP_MINMSS 216
#define NOTE_BACKGROUND 0x00000040
#define SQLITE_FCNTL_VFSNAME 12
#define MACH_PORT_QLIMIT_ZERO (0)
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SQLITE_FCNTL_VFS_POINTER 27
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IPV6_2292NEXTHOP 21
#define IP_RSVP_VIF_OFF 18
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define CLD_KILLED 2
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define SQLITE_TRACE_ROW 0x04
#define IPCTL_RTMAXCACHE 7
#define SHUT_RD 0
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define MACH_PORT_LIMITS_INFO 1
#define SOCK_MAXADDRLEN 255
#define NOTE_PDATAMASK 0x000fffff
#define SQLITE_DEPRECATED 
#define IN_CLASSA_HOST 0x00ffffff
#define SQLITE_NOMEM 7
#define _SC_SPAWN 79
#define _STDNORETURN_H 
#define A_GETCOND 37
#define O_TRUNC_ (1 << 9)
#define __DARWIN_NON_CANCELABLE 0
#define KERN_NETBOOT 40
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define NeXTBSD 1995064
#define IOPOL_THROTTLE 3
#define AF_IPX 23
#define AUDIT_PUBLIC 0x0800
#define EVFILT_VNODE (-4)
#define _CHOWN_OK (1<<21)
#define A_SETEXPAFTER 44
#define FIOCLEX_ 0x5451
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define _EDQUOT -122
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define EROFS 30
#define _POSIX_OPEN_MAX 20
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define TTCP_CLIENT_SND_WND 4096
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define R_OK (1<<2)
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define KERN_KDREMOVE 7
#define __MAC_10_10 101000
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _STDARG_H 
#define __FLT_DECIMAL_DIG__ 9
#define __MAC_10_13 101300
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define _ENOSPC -28
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define DTF_NODUP 0x0002
#define __MAC_10_15 101500
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define AF_ISO 7
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define RLIMIT_AS_ 9
#define SHUT_WR 1
#define BC_BASE_MAX 99
#define _ENOTDIR -20
#define MB_LEN_MAX 6
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define __INT_LEAST64_WIDTH__ 64
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define _POSIX_SAVED_IDS 200112L
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define SO_RCVTIMEO 0x1006
#define __P(protos) protos
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _POSIX_BARRIERS (-1)
#define KERN_PROCDELAYTERM 53
#define NOCRED ((kauth_cred_t )0)
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define _NLINK_T 
#define BSD 199506
#define EALREADY 37
#define FS_SOCKRESTART_H 
#define __IPHONE_8_4 80400
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define __DARWIN_CLK_TCK 100
#define _T_WCHAR 
#define AF_INET_ PF_INET_
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define _ENOSTR -60
#define IP_UNBLOCK_SOURCE 73
#define IPV6_RTHDR_TYPE_0 0
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define VM_LOADAVG 2
#define KERN_SAVED_IDS 20
#define PF_SYSTEM AF_SYSTEM
#define _SC_XOPEN_UNIX 115
#define O_WRONLY_ (1 << 0)
#define BUS_ADRALN 1
#define __FLT32X_MAX_EXP__ 1024
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define CTLTYPE_NODE 1
#define KERN_KDTEST 19
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define SAE_ASSOCID_ANY 0
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define __unused __attribute__((__unused__))
#define _STDBOOL_H 
#define PF_VLAN ((uint32_t)0x766c616e)
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define _STDATOMIC_H 
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define TCPOPT_WINDOW 3
#define _ENOLCK -37
#define _ENFILE -23
#define IP_DEFAULT_MULTICAST_TTL 1
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define IPV6CTL_MAXIFPREFIXES 47
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define AUDITDEV_FILENAME "audit"
#define CLSIZELOG2 0
#define _SC_TIMEOUTS 95
#define NCARGS ARG_MAX
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define SQLITE_CONFIG_URI 17
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define IPPROTO_CPNX 72
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IPCTL_GIF_TTL 16
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define _POSIX_PRIORITIZED_IO (-1)
#define __DRIVERKIT_19_0 190000
#define SQLITE_CANTOPEN 14
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define MSG_HOLD 0x800
#define __INTMAX_C(c) c ## L
#define __LP64_OFF64 (1)
#define PTHREAD_SCOPE_PROCESS 2
#define KERN_KDSETBUF 4
#define PTHREAD_CANCELED ((void *) 1)
#define USER_POSIX2_UPE 18
#define MSG_WAITSTREAM 0x200
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
#define SIGNAL_H 
#define IPV6_LEAVE_GROUP 13
#define ru_last ru_nivcsw
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
#define EAFNOSUPPORT 47
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define IPV6CTL_MRTSTATS 7
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define IPV6CTL_RTEXPIRE 25
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define IPV6_SOCKOPT_RESERVED1 3
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define __NULLABILITY_COMPLETENESS_PUSH 
#define USER_COLL_WEIGHTS_MAX 6
#define _SC_TYPED_MEMORY_OBJECTS 102
#define static_assert _Static_assert
#define DT_WHT 14
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define _SC_2_C_DEV 19
#define EV_SYSFLAGS 0xF000
#define RLIMIT_LOCKS_ 10
#define __FLT32_MIN_EXP__ (-125)
#define _SYS_UNISTD_H_ 
#define SQLITE_FCNTL_LAST_ERRNO 4
#define AUDIT_TRIGGER_MIN 1
#define SQLITE_STATUS_MEMORY_USED 0
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define IPPROTO_HMP 20
#define NOTE_FFAND 0x40000000
#define IPV6_FW_FLUSH 32
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define _POSIX2_BC_DIM_MAX 2048
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define EILSEQ 92
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define ESPIPE 29
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define TASK_H 
#define _POSIX_TTY_NAME_MAX 9
#define __TVOS_AVAILABLE(_vers) 
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define KEV_DL_AWDL_UNRESTRICTED 27
#define ENAMETOOLONG 63
#define KERN_OSREV 3
#define __WCHAR_MAX__ 0x7fffffff
#define AF_APPLETALK 16
#define _SC_TTY_NAME_MAX 101
#define _SYS_UTSNAME_H 
#define INT16_MAX 32767
#define CTLFLAG_KERN 0x01000000
#define RLIMIT_AS 5
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define SQLITE_IOERR 10
#define SQLITE_ACCESS_READ 2
#define NOTE_NONE 0x00000080
#define __GCC_IEC_559 2
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define SQLITE_TESTCTRL_BYTEORDER 22
#define IP_FW_RESETLOG 45
#define MAX_NAME 256
#define _IOFBF 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define __SSTR 0x0200
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define EVFILT_AIO (-3)
#define _SC_NPROCESSORS_CONF 57
#define P_PHYSIO 0
#define __KAME_VERSION "2009/apple-darwin"
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define _SC_XOPEN_STREAMS 114
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define SSIZE_MAX LONG_MAX
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define __DTF_READALL 0x0008
#define __disable_tail_calls 
#define IP_TTL_ 2
#define glue(a,b) _glue(a, b)
#define SIN6_LEN 
#define CTLFLAG_NOLOCK 0x20000000
#define KERN_NISDOMAINNAME 22
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define _EFBIG -27
#define LINK_MAX 32767
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define KERN_AFFINITY 43
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define EV_ENABLE 0x0004
#define AF_NS 6
#define PF_COIP AF_COIP
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define SQLITE_CONFIG_GETMUTEX 11
#define _SC_TRACE_USER_EVENT_MAX 130
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define SQLITE_ERROR 1
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DST_NONE 0
#define EOWNERDEAD 105
#define SIG_UNBLOCK_ 1
#define MINSIGSTKSZ_ 2048
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define O_ACCMODE_ 3
#define POLL_MSG 3
#define SIGQUIT_ 3
#define INT16_MIN -32768
#define __QOS_CLASS_AVAILABLE(...) 
#define TCPCI_OPT_SACK 0x00000002
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define __FINITE_MATH_ONLY__ 0
#define __IPHONE_13_2 130200
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define _SC_XBS5_ILP32_OFFBIG 123
#define SQLITE_WARNING 28
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define __SSE2__ 1
#define RUSAGE_CHILDREN -1
#define _SC_SHARED_MEMORY_OBJECTS 39
#define ERANGE 34
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define _SYS_LOCK_H_ 
#define _EFAULT -14
#define SQLITE_NULL 5
#define SCHAR_MAX __SCHAR_MAX__
#define use(...) __use(0, ##__VA_ARGS__)
#define SIGFPE 8
#define A_OLDGETPOLICY 2
#define IPV6CTL_DEFHLIM 3
#define KERN_KDEBUG 24
#define INT_FAST8_MAX INT8_MAX
#define RLIMIT_RTPRIO_ 14
#define LIST_CHECK_PREV(elm,field) 
#define ETXTBSY 26
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define _U_LONG 
#define EVFILT_SYSCOUNT 17
#define MAX_SACK_BLKS 6
#define NSIG __DARWIN_NSIG
#define __INTMAX_TYPE__ long int
#define SQLITE_ACCESS_EXISTS 0
#define _MACH_MACHINE_VM_TYPES_H_ 
#define _CS_DARWIN_USER_DIR 65536
#define ACCESSX_MAX_DESCRIPTORS 100
#define MSG_PEEK 0x2
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define WAKEMON_GET_PARAMS 0x04
#define __restrict restrict
#define _ENOTSOCK -88
#define _SC_BC_SCALE_MAX 11
#define SSTOP 4
#define __SHRT_MAX__ 0x7fff
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define ILL_ILLOPN 4
#define KERN_LOW_PRI_DELAY 57
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __FLT64X_MAX_10_EXP__ 4932
#define NOTE_EXIT_DETAIL 0x02000000
#define SIGTTOU 22
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define EEXIST 17
#define __LDBL_IS_IEC_60559__ 2
#define P_CONTROLT 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define KERN_TFP_POLICY_DEFAULT 2
#define _ERANGE -34
#define IPPROTO_DIVERT 254
#define A_GETFSIZE 27
#define SQLITE_CREATE_TEMP_INDEX 3
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define IPPROTO_ADFS 68
#define _EDOM -33
#define __SNPT 0x0800
#define NOGROUP 65535
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define _SC_THREAD_STACK_MIN 93
#define RENAME_EXCL 0x00000004
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define IPPROTO_ARGUS 13
#define _SC_V6_LP64_OFF64 105
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define O_EXCL_ (1 << 7)
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 36
#define LIST_FIRST(head) ((head)->lh_first)
#define NET_RT_IFLIST 3
#define _ENOENT -2
#define _SC_SEM_VALUE_MAX 50
#define _PC_ASYNC_IO 17
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define flatten __attribute__((flatten))
#define KERN_KDPIDEX 14
#define SQLITE_MUTEX_STATIC_PRNG 5
#define __APPLE_API_STANDARD 
#define MACH_PORT_TEMPOWNER 4
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define WCHAR_MIN (-WCHAR_MAX-1)
#define IPV6CTL_RR_PRUNE 22
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define KEV_INET_NEW_ADDR 1
#define _ENOTSUP _EOPNOTSUPP
#define AF_E164 AF_ISDN
#define _PC_AUTH_OPAQUE_NP 14
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define _POSIX_READER_WRITER_LOCKS 200112L
#define SQLITE_FCNTL_BUSYHANDLER 15
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define _POSIX_FSYNC 200112L
#define A_OLDSETCOND 21
#define _POSIX_AIO_MAX 1
#define SIGTSTP_ 20
#define __LDBL_MAX_EXP__ 16384
#define CLOCK_PROCESS_CPUTIME_ID_ 2
#define SQLITE_DENY 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define _MACH_MACHINE_BOOLEAN_H_ 
#define UINT_FAST16_MAX UINT16_MAX
#define ENOTBLK 15
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define KERN_CLASSICHANDLER KERN_EXEC
#define NOTE_EXIT_CSERROR 0x00040000
#define __SIZEOF_SHORT__ 2
#define EPROTOTYPE 41
#define EVFILT_WRITE (-2)
#define _SC_SHELL 78
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define printk ish_printk
#define SA_RESETHAND_ 0x80000000
#define _PTHREAD_COND_T 
#define SQLITE_CREATE_TEMP_TABLE 4
#define ALIGN(p) __DARWIN_ALIGN(p)
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define _SYS_VM_H 
#define CLOCK_REALTIME_ 0
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define IP_RECVTOS_ 13
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define _POSIX_AIO_LISTIO_MAX 2
#define KERN_KDSETRTCDEC 15
#define KEV_DL_SUBCLASS 2
#define KIPC_MAX_HDR 6
#define _SYS_PARAM_H_ 
#define __DARWIN_NBBY 8
#define _POSIX_SPIN_LOCKS (-1)
#define __FLT128_MANT_DIG__ 113
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KERN_PROC_SESSION 3
#define IPV6CTL_GIF_HLIM 19
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define _POSIX_SYNCHRONIZED_IO (-1)
#define FP_PREC_24B 0
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define __DARWIN_FD_SETSIZE 1024
#define SRUN 2
#define SO_USELOOPBACK 0x0040
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TCPOLEN_CC 6
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __PTRDIFF_WIDTH__ 64
#define IPPROTO_WSN 74
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define P_LP64 0x00000004
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define MSG_WAITALL_ 0x100
#define __INT8_MAX__ 0x7f
#define SQLITE_DROP_INDEX 10
#define PGSHIFT 12
#define TAILQ_CHECK_HEAD(head,field) 
#define MAXPATHLEN PATH_MAX
#define AU_FS_MINFREE 20
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define SQLITE_CREATE_TABLE 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define AUDIT_PERZONE 0x2000
#define PINOD 8
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define COLL_WEIGHTS_MAX 2
#define _RPERM_OK (1<<19)
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define SO_DEBUG 0x0001
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define SQLITE_DROP_VTABLE 30
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define IPV6_IPSEC_POLICY 28
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define SQLITE_OPEN_FILEPROTECTION_MASK 0x00700000
#define getchar_unlocked() getc_unlocked(stdin)
#define PRIO_PROCESS 0
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define NET_SERVICE_TYPE_BE 0
#define _XOPEN_REALTIME_THREADS (-1)
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define SQLITE_TESTCTRL_ALWAYS 13
#define ETIMEDOUT 60
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define _IN_PORT_T 
#define SQLITE_MISMATCH 20
#define SCHED_OTHER 1
#define KERN_MAXPROC 6
#define P_PROFIL 0x00000020
#define SQLITE_ANY 5
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define KERN_KDPIDTR 11
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define SIG_IGN_ 1
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define EMU_CPU_MEM_H 
#define TRACE_verbose TRACE__NOP
#define O_APPEND_ (1 << 10)
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define WAKEMON_DISABLE 0x02
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define SOCK_SEQPACKET 5
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define _SECURE__COMMON_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_UTF16 4
#define UID_MAX 2147483647U
#define _SC_2_PBS_MESSAGE 63
#define DTF_HIDEW 0x0001
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define _READ_OK (1<<9)
#define __WATCHOS_AVAILABLE(_vers) 
#define SQLITE_DROP_TABLE 11
#define NOTE_REVOKE 0x00000040
#define MACH_PORT_DENAP_RECEIVER 6
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define SO_NUMRCVPKT 0x1112
#define NOTE_FFCOPY 0xc0000000
#define _XOPEN_ENH_I18N (1)
#define KEV_DL_MASTER_ELECTED 23
#define SQLITE_STATUS_PAGECACHE_USED 1
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define A_SETQCTRL 36
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define MAC_OS_X_VERSION_10_12_4 101204
#define KEV_DL_QOS_MODE_CHANGED 29
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define _EACCES -13
#define IP_IPSEC_POLICY 21
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define DEBUG_all 0
#define IPPROTO_PIM 103
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define __DBL_DIG__ 15
#define uint(size) glue3(uint,size,_t)
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define forceinline inline __attribute__((always_inline))
#define SQLITE_CONSTRAINT_PINNED (SQLITE_CONSTRAINT |(11<<8))
#define AF_INET6 30
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define KEV_DL_SIFMTU 3
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SHRT_MIN (-SHRT_MAX - 1)
#define MEM_PGDIR_SIZE (1 << 10)
#define KEV_DL_SIFMEDIA 5
#define P_SYSTEM 0x00000200
#define _U_INT64_T 
#define _POSIX_SPAWN (-1)
#define __SHRT_WIDTH__ 16
#define SOCK_DGRAM 2
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IOPOL_IMPORTANT 1
#define SQLITE_REPLACE 5
#define SO_LINGER 0x0080
#define KERN_SUGID_COREDUMP 52
#define ICMP6_FILTER_ 1
#define CMASK 022
#define TMP_MAX 308915776
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define SQLITE_DETACH 25
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define SA_ONSTACK 0x0001
#define _APPEND_OK (1<<13)
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define _EMLINK -31
#define ILL_ILLADR 5
#define _ELIBMAX -82
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define IPPROTO_IPEIP 94
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define P_COW (1 << 4)
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SO_PEERCRED_ 17
#define _BLKCNT_T 
#define DELAY(n) { int N = (n); while (--N > 0); }
#define SQLITE_AUTH 23
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_MUTEX_STATIC_APP2 9
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _REXT_OK (1<<17)
#define MACH_PORT_NULL 0
#define _SC_THREAD_PROCESS_SHARED 90
#define SQLITE_CONFIG_HEAP 8
#define ITIMER_REAL_ 0
#define _WCHAR_T_ 
#define SO_NET_SERVICE_TYPE 0x1116
#define list_for_each(list,item) for (item = (list)->next; item != (list); item = item->next)
#define PF_RTIP pseudo_AF_RTIP
#define IPPROTO_DONE 257
#define PF_RES (1 << 0)
#define IP_FW_DEL 41
#define EPERM 1
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define FSHIFT 11
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define O_NONBLOCK_ (1 << 11)
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __MAC_10_7 1070
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define __AVAILABILITY_VERSIONS__ 
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT 3
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define _PC_CASE_PRESERVING 12
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define IPPROTO_PRM 21
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define MSG_RCVMORE 0x4000
#define DEV_BSIZE 512
#define __APPLE__ 1
#define __UINT16_C(c) c
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define NET_SERVICE_TYPE_RD 8
#define SQLITE_TRACE_PROFILE 0x02
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define NET_SERVICE_TYPE_RV 5
#define IP_MULTICAST_LOOP 11
#define SS_DISABLE_ 2
#define KIPC_SOMAXCONN 3
#define IP_RSVP_OFF 16
#define SO_DONTTRUNC 0x2000
#define _POSIX2_RE_DUP_MAX 255
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define __IPHONE_4_0 40000
#define KIPC_MBSTAT 8
#define FIONCLEX_ 0x5450
#define SQLITE_CONFIG_PCACHE 14
#define _SIGSET_T 
#define __APPLE_API_STABLE 
#define KERN_SECURELVL 9
#define IPPROTO_PUP 12
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define _SC_THREADS 96
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define NOTE_TRACKERR 0x00000002
#define _ENOTTY -25
#define clbase(i) (i)
#define NET_SERVICE_TYPE_VI 3
#define IPPROTO_TPXX 39
#define NET_SERVICE_TYPE_VO 4
#define ENOSR 98
#define __FLT32X_MIN_10_EXP__ (-307)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define P_NOSWAP 0
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define __FLT64_MANT_DIG__ 53
#define IPPROTO_IDP 22
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define EVFILT_PROC (-5)
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define IPV6CTL_SOURCECHECK 10
#define HW_DISKNAMES 8
#define __TVOS_14_0 140000
#define _BSD_MACHINE_SIGNAL_H_ 
#define SQLITE_REINDEX 27
#define IPPROTO_IPIP IPPROTO_IPV4
#define MPG_STRICT 0x01
#define LSEEK_END 2
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define _T_PTRDIFF 
#define PTRACE_KILL_ 8
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define _INO_T 
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define IPV6_2292PKTOPTIONS 25
#define CLD_NOOP 0
#define _ENOMEM -12
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define SO_TIMESTAMP_ 29
#define A_SETUMASK 14
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define PF_FLAG (1 << 2)
#define L_ctermid 1024
#define IPPROTO_IGP 85
#define has_feature __has_feature
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define FSCALE (1<<FSHIFT)
#define CTLTYPE 0xf
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define IPPROTO_TCP 6
#define P_ADOPTPERSONA 0x04000000
#define IP_RSVP_ON 15
#define _SC_ARG_MAX 1
#define INT_FAST16_MIN INT16_MIN
#define SI_USER_ 0
#define DT_BLK 6
#define IPPROTO_3PC 34
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define EVFILT_USER (-10)
#define SQLITE_APICALL 
#define __FLT64_DECIMAL_DIG__ 17
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define SEEK_CUR 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define AF_ROUTE 17
#define PTRACE_EVENT_FORK_ 1
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define _EINPROGRESS -115
#define IP_PORTRANGE_LOW 2
#define _NETINET_IN_H_ 
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define _POSIX_HOST_NAME_MAX 255
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _TIME_T 
#define P_RESV9 0x02000000
#define PF_PIP pseudo_AF_PIP
#define __UINT16_TYPE__ short unsigned int
#define __UINTPTR_TYPE__ long unsigned int
#define MSG_DONTROUTE 0x4
#define _I386_SIGNAL_H_ 1
#define IPPROTO_HELLO 63
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define IPPROTO_IPPC 67
#define PTRACE_PEEKTEXT_ 1
#define IPPROTO_OSPFIGP 89
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _SC_XOPEN_REALTIME_THREADS 112
#define FPE_FLTDIV 1
#define NOTE_EXIT 0x80000000
#define __KAME__ 
#define SIGUSR1_ 10
#define MAXBSIZE (256 * 4096)
#define USER_BC_DIM_MAX 3
#define CTL_VM 2
#define SQLITE_SHM_NLOCK 8
#define __DBL_HAS_INFINITY__ 1
#define _T_PTRDIFF_ 
#define IOPOL_SCOPE_PROCESS 0
#define IPPROTO_INP 32
#define _PC_SYMLINK_MAX 24
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define LONG_BIT 64
#define _POSIX_NGROUPS_MAX 8
#define RSIZE_MAX (SIZE_MAX >> 1)
#define IP_STRIPHDR 23
#define TH_URG 0x20
#define _EREMCHG -78
#define _POSIX_SS_REPL_MAX 4
#define stdin __stdinp
#define _PC_2_SYMLINKS 15
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define _EHOSTUNREACH -113
#define _SC_CLK_TCK 3
#define FTS5_TOKENIZE_PREFIX 0x0002
#define IP_FAITH 22
#define SCHED_FIFO 4
#define _KAUTH_CRED_T 
#define AF_SYSTEM 32
#define _POSIX_PATH_MAX 256
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define ENOATTR 93
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define IPPROTO_IPV4 4
#define IPPROTO_IPV6 41
#define KERN_UPDATEINTERVAL 25
#define IPCTL_RTMINEXPIRE 6
#define SIGCONT_ 18
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define PF_PPP AF_PPP
#define IPPROTO_SCTP 132
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define SA_64REGSET 0x0200
#define TRACE_debug TRACE__NOP
#define _EISNAM -120
#define __MMX_WITH_SSE__ 1
#define KERN_KDSETREG 8
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define __WATCHOS_UNAVAILABLE 
#define SCHED_RR 2
#define _POSIX_NO_TRUNC 200112L
#define IPV6CTL_ADDRCTLPOLICY 38
#define _SC_V6_ILP32_OFF32 103
#define SQLITE_LIMIT_ATTACHED 7
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define _EIO -5
#define __FLT64_HAS_DENORM__ 1
#define UINT_LEAST8_MAX UINT8_MAX
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define MEM_WRITE_PTRACE 2
#define _EBADF -9
#define _SC_ASYNCHRONOUS_IO 28
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define __FLT128_HAS_INFINITY__ 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define zero_init(type) ((type[1]){}[0])
#define O_DIRECTORY_ (1 << 16)
#define SQLITE_ACCESS_READWRITE 1
#define _POSIX_MEMORY_PROTECTION 200112L
#define O_CLOEXEC_ (1 << 19)
#define true 1
#define SA_RESETHAND 0x0004
#define __TVOS_10_0_1 100001
#define SQLITE_OPEN_WAL 0x00080000
#define _SC_RAW_SOCKETS 119
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define SQLITE_VERSION_NUMBER 3032003
#define _POSIX2_LOCALEDEF 200112L
#define CTLFLAG_RD 0x80000000
#define PF_PUP AF_PUP
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define SOL_SOCKET 0xffff
#define _SC_THREAD_SPORADIC_SERVER 92
#define __SOFF 0x1000
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define cr_gid cr_groups[0]
#define __kpi_unavailable 
#define HW_TARGET 26
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define EREMOTE 71
#define PF_ISDN AF_ISDN
#define SQLITE_MUTEX_STATIC_LRU2 7
#define __unavailable 
#define AUC_DISABLED -1
#define USER_EXPR_NEST_MAX 7
#define _SC_STREAM_MAX 26
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define _STRUCT_IOVEC 
#define __amd64 1
#define BUS_OBJERR 3
#define __UINT_FAST16_MAX__ 0xffff
#define KIPC_MAXSOCKBUF 1
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define PF_DLI AF_DLI
#define _PTRDIFF_T_DECLARED 
#define KERN_TRANSLATE 44
#define SQLITE_CORRUPT 11
#define _SC_2_PBS_LOCATE 62
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define SQLITE_FCNTL_WAL_BLOCK 24
#define IPV6PORT_RESERVED 1024
#define CTLFLAG_WR 0x40000000
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 2
#define _NETINET6_IN6_H_ 
#define P_AFFINITY 0x00010000
#define IPPROTO_AH 51
#define A_GETPOLICY 33
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _WCHAR_T 
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define WAKEMON_MAKE_FATAL 0x10
#define debugger __asm__("int3")
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define USER_POSIX2_FORT_DEV 14
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define _SYS_SELECT_H_ 
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define SIZE_MAX UINTPTR_MAX
#define P_NOREMOTEHANG 0x80000000
#define PRIO_DARWIN_THREAD 3
#define IPPROTO_BLT 30
#define EV_DISABLE 0x0008
#define IPV6_FW_DEL 31
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define USER_LINE_MAX 8
#define _EDESTADDRREQ -89
#define PF_UNSPEC AF_UNSPEC
#define UINT64_C(v) (v ## ULL)
#define IPCTL_MAXID 17
#define __IPHONE_2_0 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define KERNEL_MM_H 
#define TCPOPT_SACK 5
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define HW_CACHELINE 16
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define SO_NKE 0x1021
#define KERN_TFP 61
#define IPV6_UNICAST_HOPS_ 16
#define KERN_CHECKOPENEVT 70
#define __SOPT 0x0400
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define IPPORT_RESERVEDSTART 600
#define KERN_MAXVNODES 5
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define CONNECT_DATA_AUTHENTICATED 0x4
#define TRAP_TRACE_ 2
#define IPPROTO_IGMP 2
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define SQLITE_UTF16BE 3
#define KEV_DL_SIFFLAGS 1
#define SQLITE_TESTCTRL_LAST 29
#define __GXX_ABI_VERSION 1016
#define A_GETQCTRL 35
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define _SC_PAGESIZE 29
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define IP_MIN_MEMBERSHIPS 31
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define INADDR_ANY (u_int32_t)0x00000000
#define _EMSGSIZE -90
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define NOTE_VM_ERROR 0x10000000
#define DF_FLAG (1 << 10)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define SO_TYPE_ 3
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define _PC_LINK_MAX 1
#define TH_ACK 0x10
#define ITIMER_REAL 0
#define _BSD_I386__TYPES_H_ 
#define TAILQ_CHECK_NEXT(elm,field) 
#define SQLITE_CHECKPOINT_FULL 1
#define IPPROTO_IP 0
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define _POSIX_SHELL 200112L
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define WNOHANG 0x00000001
#define _BSD_MACHINE__TYPES_H_ 
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define _XOPEN_SHM (1)
#define RLIMIT_SIGPENDING_ 11
#define PF_IPX AF_IPX
#define SQLITE_FUNCTION 31
#define SEGV_ACCERR 2
#define __PTRDIFF_T 
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define KERN_USRSTACK KERN_USRSTACK64
#define IPCTL_SENDREDIRECTS 2
#define __PTHREAD_CONDATTR_SIZE__ 8
#define AUDIT_CNT 0x0001
#define _POSIX_ADVISORY_INFO (-1)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define USER_CS_PATH 1
#define TCP_INFO_ 11
#define SQLITE_UPDATE 23
#define SQLITE_SCANSTAT_NLOOP 0
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define F_LOCK 1
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define IPPROTO_WBMON 78
#define PTRACE_SETOPTIONS_ 0x4200
#define _POSIX2_FORT_RUN 200112L
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define _XOPEN_STREAMS (-1)
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define KEV_DL_IFDELEGATE_CHANGED 25
#define IP_PORTRANGE_DEFAULT 0
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define PF_ISO AF_ISO
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define _VA_LIST 
#define fileno_unlocked(p) __sfileno(p)
#define IN_CLASSA_NSHIFT 24
#define _ESOCKTNOSUPPORT -94
#define __OSX_AVAILABLE(_vers) 
#define A_SETSMASK 15
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define SQLITE_STATUS_MALLOC_SIZE 5
#define IPPROTO_ND 77
#define MPO_FILTER_MSG 0x100
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define P_TRANSLATED 0x00020000
#define SQLITE_FCNTL_ZIPVFS 25
#define EV_VANISHED 0x0200
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define MAXAUDITDATA (0x8000 - 1)
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define IPPROTO_DGP 86
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define IP_OLD_FW_GET 54
#define IPV6_MULTICAST_IF 9
#define _ENOTCONN -107
#define ITIMER_VIRTUAL_ 1
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define __INT_FAST8_WIDTH__ 8
#define IP_HDRINCL_ 3
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO 0x1005
#define _ESTALE -116
#define UQUAD_MAX ULLONG_MAX
#define SIGTRAP 5
#define EISDIR 21
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define __nonnull 
#define SQLITE_PERM 3
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define HW_CPU_FREQ 15
#define SQLITE_FCNTL_TEMPFILENAME 16
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define SHUT_RDWR 2
#define KEV_DL_LINK_ON 13
#define IPPROTO_XTP 36
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define SOL_SOCKET_ 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define SQLITE_DBCONFIG_MAX 1017
#define KERN_VERSION 4
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define NL_ARGMAX 9
#define INT_LEAST8_MAX INT8_MAX
#define KERN_BOOTTIME 21
#define IPPROTO_ST 7
#define MEM_PAGES (1 << 20)
#define LOCK_DEBUG 0
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define IPPROTO_TP 29
#define INT8_C(v) (v)
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SIGPWR_ 30
#define __has_extension(x) 0
#define P_DIRTY_TRACK 0x00000001
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define __volatile volatile
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define __FLT64X_DECIMAL_DIG__ 21
#define KEV_INET_ARPCOLLISION 7
#define DEV_BSHIFT 9
#define IP_MSFILTER 74
#define PF_OSI AF_ISO
#define PF_LINK AF_LINK
#define _EPROTONOSUPPORT -93
#define SQLITE_CONFIG_PCACHE2 18
#define __API_AVAILABLE_END 
#define SQLITE_NOTADB 26
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define HW_L2CACHESIZE 20
#define _NET_NETKEV_H_ 
#define USER_POSIX2_VERSION 10
#define SYS_ERRNO_H 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define FPE_FLTSUB 6
#define feof_unlocked(p) __sfeof(p)
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define IPV6CTL_SENDREDIRECTS 2
#define CHAR_BIT __CHAR_BIT__
#define SQLITE_SHM_SHARED 4
#define __OS_AVAILABILITY(_target,_availability) 
#define _EINTR -4
#define list_next_entry(item,member) list_entry((item)->member.next, typeof(*(item)), member)
#define SQLITE_INTERNAL 2
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define _SC_BC_BASE_MAX 9
#define TRASHIT(x) 
#define __NO_INLINE__ 1
#define P_DIRTY 0x00000008
#define ARG_MAX (1024 * 1024)
#define SIGIOT_ 6
#define CLOCKS_PER_SEC 1000000
#define MSG_OOB_ 0x1
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define SQLITE_CREATE_TRIGGER 7
#define ECONNABORTED 53
#define IPCTL_STATS 12
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define _SC_TRACE 97
#define CMSG_LEN_(cmsg) (((cmsg)->len + sizeof(dword_t) - 1) & ~(dword_t)(sizeof(dword_t) - 1))
#define __enum_options 
#define MAX_CANON 1024
#define INT_LEAST8_MIN INT8_MIN
#define P_SHARED (1 << 7)
#define errno (*__error())
#define _SC_NPROCESSORS_ONLN 58
#define _SC_TRACE_NAME_MAX 128
#define HW_MAXID 28
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_14 101400
#define TCPOLEN_WINDOW 3
#define __MAC_10_16 101600
#define PGOFSET (NBPG-1)
#define clrnd(i) (i)
#define EVFILT_FS (-9)
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define AF_LOCAL_ PF_LOCAL_
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define SO_KEEPALIVE 0x0008
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define __DBL_MANT_DIG__ 53
#define NET_SERVICE_TYPE_AV 6
#define SLIST_FIRST(head) ((head)->slh_first)
#define _PC_CASE_SENSITIVE 11
#define _PTHREAD_RWLOCK_T 
#define _SOCKLEN_T 
#define BADSIG SIG_ERR
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define _FSFILCNT_T 
#define SIG_BLOCK_ 0
#define _EPERM -1
#define SV_RESETHAND SA_RESETHAND
#define INT_LEAST32_MIN INT32_MIN
#define KEV_DL_AWDL_RESTRICTED 26
#define DST_EET 5
#define _NETINET_TCP_H_ 
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define IPV6CTL_RTMAXCACHE 27
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define VM_SWAPUSAGE 5
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define SQLITE_DEPRECATED_NO_REPLACEMENT __API_DEPRECATED
#define __DARWIN_VERS_1050 1
#define SQLITE_CORRUPT_INDEX (SQLITE_CORRUPT | (3<<8))
#define LINE_MAX 2048
#define __STRING(x) #x
#define SO_OOBINLINE 0x0100
#define NGROUPS_MAX 16
#define SQLITE_SCANSTAT_EXPLAIN 4
#define SIGVTALRM 26
#define O_NOCTTY_ (1 << 8)
#define TCP_MAX_SACK 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define _ENOLINK -67
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define RLIMIT_CPU 0
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define IPPROTO_AX25 93
#define user_get_task(task,addr,var) user_read_task(task, addr, &(var), sizeof(var))
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define SQLITE_STMTSTATUS_MEMUSED 99
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define CTLFLAG_OID2 0x00400000
#define F_ULOCK 0
#define SI_ASYNCIO 0x10004
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define stoc(x) (x)
#define __LDBL_DECIMAL_DIG__ 21
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define _SC_FSYNC 38
#define __API_DEPRECATED(...) 
#define __MAC_10_12_2 101202
#define FPE_INTOVF 8
#define _OFF_T 
#define clearerr_unlocked(p) __sclearerr(p)
#define KEV_DL_NODE_PRESENCE 21
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 81
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define LOCK_UN_ 8
#define IP_MAX_SOCK_SRC_FILTER 128
#define _ESTRPIPE -86
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define _SC_2_LOCALEDEF 23
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define MEM_READ 0
#define DEBUG_instr DEBUG_all
#define __FBSDID(s) 
#define P_TRACED 0x00000800
#define HW_PAGESIZE 7
#define CTL_USER 8
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define A_OLDSETQCTRL 7
#define SQLITE_DELETE 9
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define SQLITE_ANALYZE 28
#define _SC_MQ_PRIO_MAX 75
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX 2147483647
#define __INT32_C(c) c
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define P_NOSHLIB 0x10000000
#define SQLITE_COPY 0
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define SQLITE_OPEN_READONLY 0x00000001
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define RUSAGE_CHILDREN_ -1
#define PRIO_DARWIN_BG 0x1000
#define SQLITE_PROTOCOL 15
#define PF_XTP pseudo_AF_XTP
#define RLIMIT_NPROC_ 6
#define CTLFLAG_ANYBODY 0x10000000
#define LIST_INITIALIZER(x) {.prev = &x, .next = &x}
#define _MCONTEXT_T 
#define __SALC 0x4000
#define AU_ASSIGN_ASID -1
#define MAC_OS_X_VERSION_10_15_1 101501
#define _SC_READER_WRITER_LOCKS 76
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define __FLT128_DIG__ 33
#define SIGWINCH_ 28
#define AUDIT_USER 0x0040
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define TH_PUSH 0x08
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define IP_ADD_MEMBERSHIP 12
#define KERN_PROC_PGRP 2
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define MPO_CONTEXT_AS_GUARD 0x01
#define TCP_DEFER_ACCEPT_ 9
#define TCPOPT_TIMESTAMP 8
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define NET_RT_DUMP2 7
#define _SYS_ERRNO_H_ 
#define CRF_MAC_ENFORCE 0x00000002
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define EVFILT_VM (-12)
#define _EMFILE -24
#define __INT_FAST32_TYPE__ int
#define getc_unlocked(fp) __sgetc(fp)
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define NOTE_NSECONDS 0x00000004
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define MS_NOSUID_ (1 << 1)
#define TCPOPT_SIGNATURE 19
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define SIG_DFL (void (*)(int))0
#define _ENONET -64
#define SIG_ATOMIC_MIN INT32_MIN
#define F_OK 0
#define _PC_PATH_MAX 5
#define SQLITE_BUSY_TIMEOUT (SQLITE_BUSY | (3<<8))
#define NOTE_ATTRIB 0x00000008
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define __SAPP 0x0100
#define AUDIT_TRIGGER_INITIALIZE 7
#define _INT64_T 
#define SQLITE_CHECKPOINT_RESTART 2
#define _POSIX_MAX_INPUT 255
#define SIGILL_ 4
#define ESHUTDOWN 58
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define _SC_TIMER_MAX 52
#define FOPEN_MAX 20
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __enum_closed 
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define typecheck(type,x) ({type _x = x; x;})
#define IPV6_V6ONLY 27
#define _PC_NO_TRUNC 8
#define _ECOMM -70
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define _ENOTUNIQ -76
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define _MACH_PORT_H_ 
#define AF_DLI 13
#define NOTE_DELETE 0x00000001
#define SQLITE_OPEN_FILEPROTECTION_COMPLETE 0x00100000
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define _UINTMAX_T 
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_DROP_TEMP_VIEW 15
#define SIGTRAP_ 5
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define pseudo_AF_KEY 29
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define _ECANCELED -125
#define __FLT128_DECIMAL_DIG__ 36
#define KEV_DL_IFCAP_CHANGED 19
#define tcp6hdr tcphdr
#define F_TLOCK 2
#define KERN_AIOTHREADS 48
#define IPPROTO_SCCSP 96
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define MAXCOMLEN 16
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define __FLT_RADIX__ 2
#define IPV6CTL_MAXID 51
#define KERN_NGROUPS 18
#define SO_REUSEPORT 0x0200
#define __INT_LEAST16_TYPE__ short int
#define SQLITE_DROP_TRIGGER 16
#define AQ_MAXBUFSZ 1048576
#define KEV_INET6_NEW_RTADV_ADDR 5
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define LIST_H 
#define lock(lock) __lock(lock, __FILE__, __LINE__)
#define IPPROTO_SDRP 42
#define PVM 4
#define _U_INT32_T 
#define _POSIX_ARG_MAX 4096
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define SO_BROADCAST_ 6
#define IP_FW_ZERO 43
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define KIPC_MAX_LINKHDR 4
#define p_starttime p_un.__p_starttime
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define IP_DEFAULT_MULTICAST_LOOP 1
#define MSG_TRUNC 0x10
#define CLOFSET (CLSIZE*NBPG-1)
#define F_TEST 3
#define _UID_T 
#define _POSIX_TIMEOUTS (-1)
#define TAILQ_CHECK_PREV(elm,field) 
#define FS_FAKEFS_API_H 
#define EOVERFLOW 84
#define PERSIST_TIMEOUT 0x40
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define SIGPIPE 13
#define LOCK_SH_ 1
#define BUS_ADRERR 2
#define _MACH_MACHINE__STRUCTS_H_ 
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define _WCHAR_T_H 
#define SQLITE_DESERIALIZE_READONLY 4
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define RLIMIT_CORE 4
#define CLBYTES (CLSIZE*NBPG)
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define IPV6_MIN_MEMBERSHIPS 31
#define IOPOL_TYPE_DISK 0
#define __MISMATCH_TAGS_POP 
#define PRIMASK 0x0ff
#define NOFILE 256
#define SEGV_ACCERR_ 2
#define SQLITE_FCNTL_CKPT_DONE 37
#define RLIMIT_STACK_ 3
#define SO_TIMESTAMP 0x0400
#define IPV6CTL_MAXDYNROUTES 49
#define MEM_WRITE 1
#define SYS_SOCK_H 
#define KERN_PS_STRINGS 34
#define __DARWIN_64_BIT_INO_T 1
#define LSEEK_SET 0
#define IP_DUMMYNET_DEL 61
#define IPPROTO_SATMON 69
#define QMD_TRACE_HEAD(head) 
#define __FLT32X_MANT_DIG__ 53
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define KERN_PROC_PID 1
#define P_GROWSDOWN (1 << 3)
#define _POSIX_IPV6 200112L
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define USER_POSIX2_C_BIND 11
#define KERN_USRSTACK32 35
#define __TVOS_14_5 140500
#define _GCC_LIMITS_H_ 
#define IP_BLOCK_SOURCE 72
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define ENODEV 19
#define _EBADMSG -74
#define __x86_64__ 1
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define RLIMIT_RSS RLIMIT_AS
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define _SYS_SYSLIMITS_H_ 
#define IP_RETOPTS 8
#define EPROTO 100
#define _EXECUTE_OK (1<<11)
#define KEV_INET6_SUBCLASS 6
#define __PTHREAD_SIZE__ 8176
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define KERN_USRSTACK64 59
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define _SSIZE_T 
#define OID_AUTO (-1)
#define POLL_OUT 2
#define CTL_UNSPEC 0
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define SQLITE_PREPARE_PERSISTENT 0x01
#define AF_DATAKIT 9
#define _POSIX_MONOTONIC_CLOCK (-1)
#define _SC_2_PBS_ACCOUNTING 60
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define _SC_XBS5_LP64_OFF64 124
#define __UINT_FAST32_MAX__ 0xffffffffU
#define FIONBIO_ 0x5421
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define PTRACE_SETREGS_ 13
#define MINSIGSTKSZ 32768
#define DT_REG 8
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 5
#define SQLITE_UTF16_ALIGNED 8
#define _STDINT_H_ 
#define _SC_THREAD_ATTR_STACKADDR 82
#define _POSIX_TRACE_INHERIT (-1)
#define P_DEPENDENCY_CAPABLE 0x00100000
#define A_SETPMASK 25
#define SIGSYS_ 31
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define SQLITE_NOTICE 27
#define PF_LOCAL_ 1
#define IP_MULTICAST_TTL 10
#define _PC_SYNC_IO 25
#define __dead2 __attribute__((__noreturn__))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define _SC_AIO_LISTIO_MAX 42
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define ENODATA 96
#define SO_SNDBUF 0x1001
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define _I386_LIMITS_H_ 
#define _BSD_PTRDIFF_T_ 
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define P_DIRTY_BUSY 0x00000040
#define IPPROTO_MEAS 19
#define MCAST_JOIN_SOURCE_GROUP 82
#define P_RESV6 0x00400000
#define P_CHECKOPENEVT 0x00080000
#define SIGHUP 1
#define SQLITE_NOLFS 22
#define __exported_pop _Pragma("GCC visibility pop")
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define USER_POSIX2_CHAR_TERM 13
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define SQLITE_SHM_EXCLUSIVE 8
#define TCP_KEEPALIVE 0x10
#define NULL ((void *)0)
#define IPV6CTL_AUTO_LINKLOCAL 35
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define _ENOSR -63
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _POSIX_SEM_NSEMS_MAX 256
#define E2BIG 7
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define SIGPROF_ 27
#define __PTHREAD_COND_SIZE__ 40
#define __no_instrument_msan 
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define __SIZE_WIDTH__ 64
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define INT_MIN (-INT_MAX - 1)
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define IPV6CTL_DEFMCASTHLIM 18
#define TCP_SENDMOREACKS 0x103
#define AF_SIP 24
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define AF_NDRV 27
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define PTRDIFF_MAX INTMAX_MAX
#define NOT_WITHIN 0
#define _PC_REC_XFER_ALIGN 23
#define IPPROTO_HOPOPTS 0
#define SQLITE_TESTCTRL_RESERVE 14
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define _SC_MEMORY_PROTECTION 32
#define IP_DUMMYNET_CONFIGURE 60
#define ICMP6_FILTER 18
#define __INT_LEAST8_TYPE__ signed char
#define _ETIMEDOUT -110
#define _ENOEXEC -8
#define IPV6CTL_STATS 6
#define KERN_KDREADTR 10
#define SIGVTALRM_ 26
#define SQLITE_STATUS_MALLOC_COUNT 9
#define __STDC_VERSION__ 201710L
#define PF_NETBIOS AF_NETBIOS
#define _ENOTNAM -118
#define SYNC_VOLUME_WAIT 0x02
#define SO_PEERLABEL 0x1011
#define CTL_DEBUG_MAXID 20
#define PLOCK 36
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define USER_RE_DUP_MAX 9
#define SEEK_HOLE 3
#define UINTMAX_C(v) (v ## UL)
#define SCM_RIGHTS_ 1
#define KERN_ARGMAX 8
#define __SIZEOF_POINTER__ 8
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define FS_FIX_PATH_H 
#define IPV6_2292RTHDR 24
#define KERN_KDDFLAGS 2
#define ECONNRESET 54
#define _SYS_STDIO_H_ 
#define DST_MET 4
#define AUDIT_TRIGGER_NO_SPACE 5
#define EBADMACHO 88
#define _ENOBUFS -105
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define AF_SNA 11
#define SIGSTOP 17
#define MACH_PORT_SRIGHTS_NONE 0
#define __TVOS_13_3 130300
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define ENXIO 6
#define __TVOS_13_4 130400
#define _SC_THREAD_CPUTIME 84
#define _PC_EXTENDED_SECURITY_NP 13
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __STDIO_H_ 
#define EBADRPC 72
#define NET_SERVICE_TYPE_OAM 7
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define _SECURE__STDIO_H_ 
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define PDROP 0x400
#define KERN_KDWRITETR 17
#define _MODE_T 
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define SQLITE_CONFIG_LOOKASIDE 13
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define user_put_task(task,addr,var) user_write_task(task, addr, &(var), sizeof(var))
#define L_XTND SEEK_END
#define MCAST_JOIN_GROUP 80
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define INET6_ADDRSTRLEN 46
#define MACH_PORT_QLIMIT_LARGE (1024)
#define noreturn _Noreturn
#define IPPROTO_WBEXPAK 79
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define KEV_DL_IF_DETACHED 11
#define SO_SNDBUF_ 7
#define _POSIX2_PBS_LOCATE (-1)
#define TCPCI_OPT_ECN 0x00000008
#define SQLITE_OPEN_READWRITE 0x00000002
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define IPPORT_HILASTAUTO 65535
#define FS_STAT_H 
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define SQLITE_TRANSACTION 22
#define _SC_BC_DIM_MAX 10
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define A_SETKAUDIT 30
#define _SYS_UCRED_H_ 
#define __GNUC_VA_LIST 
#define AU_DEFAUDITSID 0
#define _GCC_MAX_ALIGN_T 
#define RLIMIT_NOFILE 8
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define WSTOPPED 0x00000008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define IP_TOS_ 1
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define SQLITE_FCNTL_MMAP_SIZE 18
#define AF_LAT 14
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define _ETOOMANYREFS -109
#define AUDIT_AHLT 0x0002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define NOTE_TRIGGER 0x01000000
#define SQLITE_MUTEX_STATIC_PMEM 7
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define A_OLDGETQCTRL 6
#define IPPROTO_RAW 255
#define __k8__ 1
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define _SYS__PTHREAD_TYPES_H_ 
#define MS_NODEV_ (1 << 2)
#define NOTE_EXITSTATUS 0x04000000
#define IP_RECVPKTINFO IP_PKTINFO
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define FALSE 0
#define HW_L1DCACHESIZE 18
#define MSG_TRUNC_ 0x20
#define _POSIX_MEMLOCK_RANGE (-1)
#define IPPROTO_ICMP 1
#define __API_DEPRECATED_END 
#define IPV6CTL_PREFER_TEMPADDR 37
#define NOTE_FFOR 0x80000000
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define SQLITE_UTF8 1
#define p_forw p_un.p_st1.__p_forw
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define MAX_TCPOPTLEN 40
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define SIGALRM 14
#define TCP_NODELAY_ 1
#define IPPROTO_RDP 27
#define _SC_CLOCK_SELECTION 67
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define __MAC_10_12_1 101201
#define PRIO_DARWIN_NONUI 0x1001
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define RUSAGE_SELF_ 0
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define IN_CLASSD_NSHIFT 28
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define _EINVAL -22
#define _EADDRINUSE -98
#define EADDRNOTAVAIL 49
#define ETIME 101
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define __FLT_DIG__ 6
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define _SYS_EVENT_H_ 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __FLT64X_MAX_EXP__ 16384
#define EBADF 9
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define _SC_SS_REPL_MAX 126
#define __UINT_FAST64_TYPE__ long long unsigned int
#define _OS__OSBYTEORDER_H 
#define IPV6_RTHDR_LOOSE 0
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define SQLITE_ALTER_TABLE 26
#define SQLITE_STDCALL SQLITE_APICALL
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define STDIN_FILENO 0
#define UINT_FAST8_MAX UINT8_MAX
#define SIG_SETMASK_ 2
#define __INT_MAX__ 0x7fffffff
#define SF_FLAG (1 << 7)
#define KERN_EXEC 45
#define __DTF_SKIPREAD 0x0010
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define UINT8_MAX 255
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define IPV6CTL_MAXIFDEFROUTERS 48
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define NOTE_FUNLOCK 0x00000100
#define LLONG_MAX __LONG_LONG_MAX__
#define PF_CNT AF_CNT
#define ENOTRECOVERABLE 104
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define MSG_NEEDSA 0x10000
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define _EALREADY -114
#define AUDIT_SEQ 0x0010
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define __INT64_TYPE__ long long int
#define EIO 5
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define ENETUNREACH 51
#define EXDEV 18
#define _SC_PHYS_PAGES 200
#define KERN_SYSV 42
#define BSD4_3 1
#define BSD4_4 1
#define _SC_ADVISORY_INFO 65
#define IPV6PORT_ANONMAX 65535
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define UINT32_C(v) (v ## U)
#define _POSIX_SYMLINK_MAX 255
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define TRACE_strace TRACE__NOP
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define EVFILT_EXCEPT (-15)
#define AU_IPv4 4
#define AU_IPv6 16
#define SQLITE_VERSION "3.32.3"
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define IP_MTU_DISCOVER_ 10
#define SQLITE_API 
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define AF_HYLINK 15
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define user_get(addr,var) user_read(addr, &(var), sizeof(var))
#define P_READ (1 << 0)
#define P_DISABLE_ASLR 0x00001000
#define BC_DIM_MAX 2048
#define CTL_DEBUG_VALUE 1
#define NOTE_LOWAT 0x00000001
#define SQLITE_FLOAT 2
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define IP_OLD_FW_ADD 50
#define ENOSPC 28
#define EPROCUNAVAIL 76
#define SI_QUEUE 0x10002
#define IPCTL_ACCEPTSOURCEROUTE 13
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define ENOEXEC 8
#define KERN_MAXPROCPERUID 30
#define FPE_NOOP 0
#define SQLITE_DROP_TEMP_TRIGGER 14
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define EOF (-1)
#define AQ_HIWATER 100
#define SO_RCVBUF 0x1002
#define _POSIX2_PBS_MESSAGE (-1)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define TCPOLEN_TIMESTAMP 10
#define SV_ONSTACK SA_ONSTACK
#define SIGTSTP 18
#define __SIZEOF_INT128__ 16
#define CF (cpu->cf)
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define _EBFONT -59
#define AUDIT_ZONENAME 0x1000
#define TCP_MAXWIN 65535
#define __LDBL_MAX_10_EXP__ 4932
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define _POSIX_SEMAPHORES (-1)
#define SQLITE_OK_SYMLINK (SQLITE_OK | (2<<8))
#define __ATOMIC_RELAXED 0
#define RLIMIT_FSIZE 1
#define glue3(a,b,c) glue(a, glue(b, c))
#define ctob(x) ((x)<<PGSHIFT)
#define PWAIT 32
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define P_DIRTY_TERMINATED 0x00000020
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define ctos(x) (x)
#define PTHREAD_PROCESS_PRIVATE 2
#define IPPROTO_IL 40
#define IPV6PORT_ANONMIN 49152
#define EFTYPE 79
#define BC_SCALE_MAX 99
#define EDOM 33
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define KERN_PROC_UID 5
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define ENOSTR 99
#define KERN_KDWRITEMAP_V3 27
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define SIGTERM_ 15
#define INADDR_NONE 0xffffffff
#define IP_OLD_FW_ZERO 53
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define __API_AVAILABLE(...) 
#define _INT8_T 
#define SIGKILL 9
#define ESRCH 3
#define IPV6_FW_GET 34
#define IPPROTO_DSTOPTS 60
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define _SC_REGEXP 77
#define EHOSTDOWN 64
#define FTS5_TOKEN_COLOCATED 0x0001
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define __wchar_t__ 
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define MPO_STRICT 0x20
#define SQLITE_DBCONFIG_LEGACY_FILE_FORMAT 1016
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define ENOLCK 77
#define ENFILE 23
#define IPV6CTL_RIP6STATS 36
#define _UUID_T 
#define MSG_DONTWAIT 0x80
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define _STDDEF_H_ 
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define _XOPEN_UNIX (1)
#define SQLITE_READ 20
#define MAC_OS_X_VERSION_10_16 101600
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define CLK_TCK __DARWIN_CLK_TCK
#define ENOSYS 78
#define ECANCELED 89
#define SSLEEP 3
#define MAX_AUDIT_RECORDS 20
#define SA_RESTART 0x0002
#define SIGURG_ 23
#define ferror_unlocked(p) __sferror(p)
#define CTL_MAXNAME 12
#define CLOCK_REALTIME_COARSE_ 5
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define PAGE_BITS 12
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __INT_FAST8_TYPE__ signed char
#define SQLITE_FCNTL_HAS_MOVED 20
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define _SC_TIMERS 41
#define CHARCLASS_NAME_MAX 14
#define IPV6_RECVTCLASS 35
#define DIRBLKSIZ 1024
#define EV_ERROR 0x4000
#define PTRACE_POKETEXT_ 4
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define SQLITE_SCANSTAT_EST 2
#define MCAST_UNDEFINED 0
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _SC_SEMAPHORES 37
#define ITIMER_PROF_ 2
#define EV_DELETE 0x0002
#define WAIT_ANY (-1)
#define _SC_2_CHAR_TERM 20
#define __GETHOSTUUID_H 
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define _SYS_TYPES_H_ 
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define is_gcc(version) (__GNUC__ >= version)
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define EVFILT_TIMER (-7)
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define LOCK_EX_ 2
#define PTRACE_GETREGS_ 12
#define CROUND (CBLOCK - 1)
#define A_GETPINFO_ADDR 28
#define ENOTSUP 45
#define __AVAILABILITY__ 
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define A_GETCTLMODE 41
#define PTHREAD_PRIO_NONE 0
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __TYPES_H_ 
#define SQLITE_TESTCTRL_ASSERT 12
#define __DARWIN_NSIG 32
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define __STDC_UTF_32__ 1
#define IPV6_PORTRANGE_LOW 2
#define OF (cpu->of)
#define w_coredump w_T.w_Coredump
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define IPV6CTL_MAXFRAGPACKETS 9
#define CLD_DUMPED 3
#define P_THCWD 0x01000000
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL 1
#define KERN_NX_PROTECTION 60
#define IPPROTO_SRPC 90
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define _PTHREAD_ONCE_T 
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define IPPROTO_PIGP 9
#define QUAD_MIN LLONG_MIN
#define UTIL_DEBUG_H 
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define SQLITE_ROW 100
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define MSIZESHIFT 8
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define _ERESTART -85
#define SQLITE_OK 0
#define KERN_KDGETBUF 5
#define __API_AVAILABLE_BEGIN(...) 
#define KEV_INET_CHANGED_ADDR 2
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define RLIM_SAVED_MAX RLIM_INFINITY
#define IP_MAX_GROUP_SRC_FILTER 512
#define __DARWIN_MAXPATHLEN 1024
#define PASS_MAX 128
#define IPV6CTL_USE_DEPRECATED 21
#define _SYS_SYSCTL_H_ 
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define _STRING_H_ 
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define NOTE_VM_PRESSURE 0x80000000
#define L_SET SEEK_SET
#define LSCALE 1000
#define has_attribute __has_attribute
#define A_SETSTAT 13
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define SQLITE_STMTSTATUS_RUN 6
#define KERN_PROCNAME 62
#define ESHLIBVERS 87
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define tcp6_seq tcp_seq
#define RLIMIT_NICE_ 13
#define PTRACE_PEEKDATA_ 2
#define MCLSHIFT 11
#define _SC_SYNCHRONIZED_IO 40
#define PSWP 0
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define pseudo_AF_HDRCMPLT 35
#define IPPROTO_IRTP 28
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define _SC_XOPEN_SHM 113
#define __LONG_WIDTH__ 64
#define PCATCH 0x100
#define SO_NWRITE 0x1024
#define BC_STRING_MAX 1000
#define SIG_ERR ((void (*)(int))-1)
#define _UINT8_T 
#define WAKEMON_ENABLE 0x01
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define CHILD_MAX 266
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define SQLITE_DONE 101
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define SOCK_STREAM_ 1
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 42
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define AQ_MAXHIGH 10000
#define MMAP_FIXED 0x10
#define IPCTL_DIRECTEDBROADCAST 9
#define AUC_NOAUDIT 2
#define MSG_SEND 0x1000
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define __exported __attribute__((__visibility__("default")))
#define EPROTONOSUPPORT 43
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define UINT_LEAST32_MAX UINT32_MAX
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define EMFILE 24
#define _ENAVAIL -119
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define O_RDWR_ (1 << 1)
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define SQLITE_DBSTATUS_MAX 12
#define POLL_PRI 5
#define NODEV (dev_t)(-1)
#define KEV_DL_PROTO_ATTACHED 14
#define SIGILL 4
#define MSG_EOF 0x100
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define MSG_EOR 0x8
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define MAX_PID (1 << 15)
#define ENOBUFS 55
#define MAX_PATH 4096
#define __FLT_MIN_10_EXP__ (-37)
#define RLIMIT_CPU_ 0
#define IPPROTO_DDP 37
#define MSG_NOSIGNAL 0x80000
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define IN_MULTICAST(i) IN_CLASSD(i)
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define _SS_MAXSIZE 128
#define __AVAILABILITY_INTERNAL__ 
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define SQLITE_LOCK_RESERVED 2
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define AT_IPC_SEM ((unsigned char)2)
#define SIGINT 2
#define PF_LOCAL AF_LOCAL
#define PF_NATM AF_NATM
#define EFAULT 14
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define SO_LABEL 0x1010
#define _SC_V6_LPBIG_OFFBIG 106
#define SQLITE_SYSAPI 
#define EPROC_CTTY 0x01
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define SIGIOT SIGABRT
#define SIGIO_ 29
#define _POSIX_TIMER_MAX 32
#define __FLT32X_HAS_QUIET_NAN__ 1
#define SIGBUS_ 7
#define NOTE_SECONDS 0x00000001
#define EBADEXEC 85
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define SIGFPE_ 8
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define FSCRED ((kauth_cred_t )-1)
#define _MACH_BOOLEAN_H_ 
#define SQLITE_SELECT 21
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define PF_KEY pseudo_AF_KEY
#define _U_CHAR 
#define NET_SERVICE_TYPE_BK 1
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define INTMAX_C(v) (v ## L)
#define SQLITE_FCNTL_OVERWRITE 11
#define ILL_PRVOPC 3
#define TCPOPT_NOP 1
#define P_NOCLDWAIT 0x40000000
#define _E2BIG -7
#define __SMOD 0x2000
#define SQLITE_LIMIT_VDBE_OP 5
#define PAGE_SIZE (1 << PAGE_BITS)
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define __NULLABILITY_COMPLETENESS_POP 
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define SQLITE_CONFIG_GETPCACHE2 19
#define WCOREFLAG 0200
#define SO_NP_EXTENSIONS 0x1083
#define A_GETPINFO 24
#define MAX(a,b) (((a)>(b))?(a):(b))
#define IPPROTO_EMCON 14
#define __DARWIN_OS_INLINE static inline
#define __DARWIN_MAXNAMLEN 255
#define _INO64_T 
#define POLL_IN 1
#define SCM_TIMESTAMP 0x02
#define SIGABRT_ 6
#define KERN_OSRELEASE 2
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define MAC_OS_X_VERSION_10_11_4 101104
#define KERN_KDSETUP 6
#define _U_SHORT 
#define SI_TIMER 0x10003
#define IPV6CTL_DAD_COUNT 16
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define EV_ADD 0x0001
#define _I386__LIMITS_H_ 
#define SO_ERROR_ 4
#define SA_SIGINFO_ 4
#define SOMAXCONN 128
#define MAXFRAG 8
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define SQLITE_SYNC_DATAONLY 0x00010
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define IP_BOUND_IF 25
#define DST_USA 1
#define SQLITE_STMTSTATUS_VM_STEP 4
#define sv_onstack sv_flags
#define _ENETUNREACH -101
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define AF_ISDN 28
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define _SC_HOST_NAME_MAX 72
#define OID_AUTO_START 100
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define IPV6_MULTICAST_LOOP 11
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define SQLITE_SCANSTAT_NAME 3
#define SQLITE_LOCKED 6
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define SQLITE_STMTSTATUS_REPREPARE 5
#define IPV6_2292HOPLIMIT 20
#define SQLITE_CONFIG_SQLLOG 21
#define AF_IMPLINK 3
#define ENOENT 2
#define PF_HYLINK AF_HYLINK
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define A_GETCAR 9
#define IPCTL_FASTFORWARDING 14
#define _ELIBACC -79
#define SQLITE_TESTCTRL_ISINIT 23
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define SQLITE_MUTEX_FAST 0
#define _PTHREAD_KEY_T 
#define HW_BYTEORDER 4
#define superuser() (current != NULL && current->euid == 0)
#define CLD_EXITED 1
#define __UINT32_TYPE__ unsigned int
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define _ENXIO -6
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define __SNBF 0x0002
#define SIGTERM 15
#define IPPROTO_MICP 95
#define PTHREAD_KEYS_MAX 512
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define RLIMIT_NOFILE_ 7
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define IPV6CTL_ACCEPT_RTADV 12
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define __SIZEOF_LONG_LONG__ 8
#define _BSD_MACHINE_PARAM_H_ 
#define EHOSTUNREACH 65
#define DT_FIFO 1
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define PRIO_MAX 20
#define _POSIX_THREAD_KEYS_MAX 128
#define _EDEADLK -35
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define IPCTL_RTEXPIRE 5
#define SIGWINCH 28
#define _DIRENT_H_ 
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define __TVOS_14_3 140300
#define __LDBL_DIG__ 18
#define EV_CLEAR 0x0020
#define PTRACE_GETFPREGS_ 14
#define _PID_T 
#define PF_NS AF_NS
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define IPPROTO_LEAF1 25
#define IPPROTO_LEAF2 26
#define SO_RANDOMPORT 0x1082
#define MSG_EOR_ 0x80
#define ___int_ptrdiff_t_h 
#define TIMERS_MAX 16
#define __APPLE_API_PRIVATE 
#define KERN_KDWRITETR_V3 28
#define SIGXFSZ_ 25
#define KERN_KDSET_TYPEFILTER 22
#define KEV_DL_NODE_ABSENCE 22
#define RLIMIT_THREAD_CPULIMITS 0x3
#define PF_VSOCK AF_VSOCK
#define MACH_PORT_DNREQUESTS_SIZE 3
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define HW_L3SETTINGS 21
#define _U_INT16_T 
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define NET_RT_DUMP 1
#define FP_PREC_53B 2
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __WCHAR_T 
#define TCP_NODELAY 0x01
#define FPE_FLTUND 3
#define TCPOPT_CCECHO 13
#define KEV_DL_SIFPHYS 4
#define X_OK (1<<0)
#define MAXSYMLINKS 32
