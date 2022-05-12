#define TAILQ_CHECK_NEXT(elm,field) 
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define SI_TIMER 0x10003
#define A_GETSTAT 12
#define HW_MODEL 2
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define VM_LOADAVG 2
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 95
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define NOTE_EXEC 0x20000000
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define PRIO_MIN -20
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define HW_PRODUCT 27
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define __FLT128_MAX_10_EXP__ 4932
#define RE_DUP_MAX 255
#define PUSER 50
#define sa_sigaction __sigaction_u.__sa_sigaction
#define NOTE_FORK 0x40000000
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define MAXAUDITDATA (0x8000 - 1)
#define PZERO 22
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define AUDITDEV_FILENAME "audit"
#define CLSIZELOG2 0
#define NCARGS ARG_MAX
#define KERN_CLASSICHANDLER KERN_EXEC
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define powerof2(x) ((((x)-1)&(x))==0)
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define CHAR_BIT __CHAR_BIT__
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __DRIVERKIT_19_0 190000
#define A_SETKMASK 5
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define NL_NMAX 1
#define KERN_KDSETBUF 4
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define SV_RESETHAND SA_RESETHAND
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ru_last ru_nivcsw
#define VM_SWAPUSAGE 5
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define SHRT_MAX __SHRT_MAX__
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define MPG_IMMOVABLE_RECEIVE 0x02
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define PT_FIRSTMACH 32
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define VM_MAXID 6
#define USER_COLL_WEIGHTS_MAX 6
#define WCHAR_MAX __WCHAR_MAX__
#define AUDIT_TRIGGER_READ_FILE 3
#define EDESTADDRREQ 39
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define __WINT_MAX__ 0x7fffffff
#define __FLT32_MIN_EXP__ (-125)
#define PIPE_BUF 512
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define UINT_LEAST64_MAX UINT64_MAX
#define _CDEFS_H_ 
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _POSIX2_BC_DIM_MAX 2048
#define EILSEQ 92
#define ESPIPE 29
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define ITIMER_VIRTUAL 1
#define SLIST_FIRST(head) ((head)->slh_first)
#define _POSIX_TTY_NAME_MAX 9
#define _PTHREAD_CONDATTR_T 
#define MACH_PORT_QLIMIT_LARGE (1024)
#define MINSIGSTKSZ 32768
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define ENAMETOOLONG 63
#define KERN_OSREV 3
#define P_SSTEP 0
#define __WCHAR_MAX__ 0x7fffffff
#define BLKDEV_IOSIZE 2048
#define HW_CPU_FREQ 15
#define _U_SHORT 
#define ENOSR 98
#define INT16_MAX 32767
#define CTLFLAG_KERN 0x01000000
#define RLIMIT_AS 5
#define __DARWIN_PDP_ENDIAN 3412
#define P_RESV11 0x08000000
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define EHOSTUNREACH 65
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define NOTE_NONE 0x00000080
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __GCC_IEC_559 2
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define NOTE_FFNOP 0x00000000
#define __FLT32X_DECIMAL_DIG__ 17
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define __IOS_PROHIBITED 
#define __FLT_EVAL_METHOD__ 0
#define NeXTBSD4_0 0
#define SHRT_MIN (-SHRT_MAX - 1)
#define P_PHYSIO 0
#define KERN_SAFEBOOT 66
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define EPROGUNAVAIL 74
#define KERN_AFFINITY 43
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define dtob(x) ((x)<<DEV_BSHIFT)
#define EVFILT_SIGNAL (-6)
#define ARG_MAX (1024 * 1024)
#define MPO_TEMPOWNER 0x04
#define __WATCHOS_4_0 40000
#define _BSD_MACHINE_PARAM_H_ 
#define __FLT64_DECIMAL_DIG__ 17
#define KERN_UNRAGE_PROC 3
#define _POSIX_SS_REPL_MAX 4
#define __disable_tail_calls 
#define FPE_NOOP 0
#define AUDIT_CNT 0x0001
#define _LIMITS_H_ 
#define CTLFLAG_NOLOCK 0x20000000
#define P_SELECT 0x00000040
#define KERN_NISDOMAINNAME 22
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define CLD_STOPPED 5
#define NSIG __DARWIN_NSIG
#define LINK_MAX 32767
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define CRF_NOMEMBERD 0x00000001
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 "$1050"
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define KERN_HOSTID 11
#define EQUIV_CLASS_MAX 2
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define MAC_OS_X_VERSION_10_14_4 101404
#define BSD4_4 1
#define SIGPROF 27
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DST_NONE 0
#define EOWNERDEAD 105
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define NOTE_NSECONDS 0x00000004
#define AUDIT_TRIGGER_ROTATE_USER 6
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define KERN_UNOPENEVT_PROC 2
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define MPG_STRICT 0x01
#define EV_EOF 0x8000
#define A_GETSINFO_ADDR 32
#define CTLFLAG_SECURE 0x08000000
#define POLL_MSG 3
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define __DBL_MIN_10_EXP__ (-307)
#define KERN_RAGE_PROC 1
#define __IPHONE_13_0 130000
#define INT16_MIN -32768
#define ENOTTY 25
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define A_GETPINFO_ADDR 28
#define __FINITE_MATH_ONLY__ 0
#define PT_DETACH 11
#define __cold __attribute__((__cold__))
#define KERN_KDWRITETR 17
#define A_OLDSETCOND 21
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define EBADF 9
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define RUSAGE_CHILDREN -1
#define EV_FLAG1 0x2000
#define NOTE_LEEWAY 0x00000010
#define ERANGE 34
#define __FLT32_HAS_DENORM__ 1
#define CLK_TCK __DARWIN_CLK_TCK
#define ECANCELED 89
#define _POSIX_SYMLINK_MAX 255
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define A_OLDGETPOLICY 2
#define SSLEEP 3
#define __UINT_FAST8_MAX__ 0xff
#define AT_IPC_SEM ((unsigned char)2)
#define PATH_MAX 1024
#define KERN_KDEBUG 24
#define NGROUPS NGROUPS_MAX
#define _LIMITS_H___ 
#define DST_AUST 2
#define SA_RESTART 0x0002
#define __FLT32_MAX_10_EXP__ 38
#define INT_FAST8_MAX INT8_MAX
#define SIGHUP 1
#define ETXTBSY 26
#define ENOMEM 12
#define EPROC_SLEADER 0x02
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define __INT8_C(c) c
#define _U_LONG 
#define EVFILT_SYSCOUNT 17
#define SIGCONT 19
#define P_PROFIL 0x00000020
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define KERN_SAVED_IDS 20
#define _ERRNO_T 
#define WAKEMON_GET_PARAMS 0x04
#define AT_IPC_SHM ((unsigned char)3)
#define FP_STATE_BYTES 512
#define __restrict restrict
#define SSTOP 4
#define NFDBITS __DARWIN_NFDBITS
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define KERN_LOW_PRI_DELAY 57
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define MPO_QLIMIT 0x02
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define NOTE_EXIT_DETAIL 0x02000000
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define KERN_KDTHRMAP 12
#define SIGTTOU 22
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define CTLTYPE_NODE 1
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define _BSD_MACHINE_SIGNAL_H_ 
#define A_SETKAUDIT 30
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define KERN_USRSTACK KERN_USRSTACK64
#define A_GETFSIZE 27
#define MPO_INSERT_SEND_RIGHT 0x10
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define NOGROUP 65535
#define MCLSHIFT 11
#define _SYS_UCRED_H_ 
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define NAME_MAX 255
#define KEVENT_FLAG_NONE 0x000000
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 36
#define LIST_FIRST(head) ((head)->lh_first)
#define SIDL 1
#define HW_MACHINE_ARCH 12
#define __result_use_check __attribute__((__warn_unused_result__))
#define KERN_KDPIDEX 14
#define EV_POLL EV_FLAG0
#define __APPLE_API_STANDARD 
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define IOPOL_APPLICATION IOPOL_STANDARD
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define KERN_BOOTTIME 21
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define AUDIT_ARGE 0x0008
#define _PTHREAD_T 
#define NULL __DARWIN_NULL
#define USER_MAXID 21
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define __UINT32_MAX__ 0xffffffffU
#define __PTHREAD_MUTEX_SIZE__ 56
#define MAC_OS_X_VERSION_10_13_4 101304
#define __DARWIN_UNIX03 1
#define USER_BC_BASE_MAX 2
#define _POSIX_AIO_MAX 1
#define DEV_BSIZE 512
#define _POSIX_PIPE_BUF 512
#define SIGUSR1 30
#define _POSIX2_EXPR_NEST_MAX 32
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define _MACH_MACHINE_BOOLEAN_H_ 
#define UINT_FAST16_MAX UINT16_MAX
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define PT_DENY_ATTACH 31
#define __FLT128_MIN_EXP__ (-16381)
#define ENOTBLK 15
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define EPROTOTYPE 41
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define NZERO 20
#define UINT16_C(v) (v)
#define KERN_TFP 61
#define ALIGN(p) __DARWIN_ALIGN(p)
#define _SYS_VM_H 
#define __FLT128_MIN_10_EXP__ (-4931)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
#define CTL_NET 4
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ENOMSG 91
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define _POSIX_AIO_LISTIO_MAX 2
#define KERN_KDSETRTCDEC 15
#define _SYS_SELECT_H_ 
#define KIPC_MAX_HDR 6
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _SYS_PARAM_H_ 
#define ENOTDIR 20
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define KERN_PROC_SESSION 3
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define EVFILT_VM (-12)
#define FP_PREC_24B 0
#define PRIO_DARWIN_THREAD 3
#define __INT64_C(c) c ## LL
#define HW_PHYSMEM 5
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define SRUN 2
#define SA_SIGINFO 0x0040
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define EQFULL 106
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define CLD_EXITED 1
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define P_LP64 0x00000004
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define _POSIX_MQ_OPEN_MAX 8
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define PGSHIFT 12
#define TAILQ_CHECK_HEAD(head,field) 
#define MAXPATHLEN PATH_MAX
#define AU_FS_MINFREE 20
#define KERN_KDGETREG 9
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define _POSIX_LINK_MAX 8
#define AUDIT_PERZONE 0x2000
#define PINOD 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define CTL_KERN 1
#define SI_USER 0x10001
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define _INT32_T 
#define CMASK 022
#define USER_POSIX2_FORT_RUN 15
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define KERN_KDENABLE 3
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define TRASHIT(x) 
#define RLIM_SAVED_MAX RLIM_INFINITY
#define _POSIX2_BC_STRING_MAX 1000
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define CTLTYPE_INT 2
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define PSOCK 24
#define KERN_TFP_POLICY_DEFAULT 2
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define P_REBOOT 0x00200000
#define CLOCK_REALTIME _CLOCK_REALTIME
#define __FLT32X_MANT_DIG__ 53
#define ETIMEDOUT 60
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define __USER_LABEL_PREFIX__ _
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define KERN_MAXPROC 6
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define ENEEDAUTH 81
#define ENODATA 96
#define __MAC_10_10_3 101003
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define KERN_KDPIDTR 11
#define _SYS_QUEUE_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define AUDIT_PATH 0x0200
#define __STDC_HOSTED__ 1
#define EVFILT_AIO (-3)
#define WAKEMON_DISABLE 0x02
#define ILL_ILLOPC 1
#define MCLBYTES (1 << MCLSHIFT)
#define p_forw p_un.p_st1.__p_forw
#define RLIM_SAVED_CUR RLIM_INFINITY
#define MPO_STRICT 0x20
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define UID_MAX 2147483647U
#define MAC_OS_X_VERSION_10_12_1 101201
#define MACH_PORT_DENAP_RECEIVER 6
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define USER_BC_STRING_MAX 5
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define UINT64_MAX 18446744073709551615ULL
#define SIGURG 16
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define KERN_AIOPROCMAX 47
#define A_GETKMASK 4
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define TIME_UTC 1
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define __FLT32_DIG__ 6
#define EINTR 4
#define _TIME_H_ 
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define MACH_PORT_INFO_EXT 7
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define _POSIX_TRACE_SYS_MAX 8
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define KERN_PROC_PID 1
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define P_SYSTEM 0x00000200
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define IOPOL_IMPORTANT 1
#define KERN_SUGID_COREDUMP 52
#define __FLT32_IS_IEC_60559__ 2
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define ENOTCONN 57
#define KERN_PROC_ALL 0
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define P_NOCLDSTOP 0x00000008
#define __APPLE_API_EVOLVING 
#define M16KCLSHIFT 14
#define CTL_USER 8
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define _BLKCNT_T 
#define _POSIX_NAME_MAX 14
#define DELAY(n) { int N = (n); while (--N > 0); }
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define KERN_KDREADTR 10
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define HW_L2SETTINGS 19
#define __strong 
#define _UINT8_T 
#define KERN_KDBUFWAIT 23
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define _XOPEN_PATH_MAX 1024
#define __MAC_10_1 1010
#define EPERM 1
#define NOTE_SIGNAL 0x08000000
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define FSHIFT 11
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define P_ADVLOCK 0x00000001
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define EVFILT_VNODE (-4)
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define A_SETCLASS 23
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define _I386__PARAM_H_ 
#define HW_MACHINE 1
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIG_ERR ((void (*)(int))-1)
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define __WATCHOS_7_2 70200
#define ru_first ru_ixrss
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define NOTE_TRACK 0x00000001
#define CBLOCK 64
#define _INTPTR_T 
#define PT_ATTACHEXC 14
#define KIPC_SOMAXCONN 3
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define NOTE_TRIGGER 0x01000000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define KERN_MAXID 72
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define P_WEXIT 0x00002000
#define _SIGSET_T 
#define AU_DEFAUDITID (uid_t)(-1)
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define SIGINFO 29
#define __APPLE_API_STABLE 
#define KERN_SECURELVL 9
#define BC_STRING_MAX 1000
#define MAX_INPUT 1024
#define __FLT128_IS_IEC_60559__ 2
#define ESTALE 70
#define _SYS_ERRNO_H_ 
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define A_OLDGETCOND 20
#define ENOTSOCK 38
#define KERN_AIOMAX 46
#define SIG_ATOMIC_MIN INT32_MIN
#define clbase(i) (i)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define CTL_DEBUG_NAME 0
#define MSIZE (1 << MSIZESHIFT)
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define SV_ONSTACK SA_ONSTACK
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define P_NOSWAP 0
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define AUDIT_TRIGGER_MAX 8
#define SIGIO 23
#define __FLT64_MANT_DIG__ 53
#define EV_DELETE 0x0002
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define EAUTH 80
#define EVFILT_PROC (-5)
#define _FSBLKCNT_T 
#define KERN_CLOCKRATE 12
#define HW_DISKNAMES 8
#define __SPI_AVAILABLE(...) 
#define QMD_TRACE_HEAD(head) 
#define KERN_JOB_CONTROL 19
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define __FLT64X_MANT_DIG__ 64
#define ECHILD 10
#define KERN_SHREG_PRIVATIZABLE 54
#define __DYNAMIC__ 1
#define EVFILT_WRITE (-2)
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
#define SA_ONSTACK 0x0001
#define QUAD_MAX LLONG_MAX
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define A_SETSFLAGS 40
#define __MMX__ 1
#define KERN_PROCARGS2 49
#define NOTE_ATTRIB 0x00000008
#define CTLTYPE 0xf
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define USER_LINE_MAX 8
#define AUDIT_WINDATA 0x0020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define P_ADOPTPERSONA 0x04000000
#define P_EXEC 0x00004000
#define INT_FAST16_MIN INT16_MIN
#define NOTE_TRACKERR 0x00000002
#define P_DEPENDENCY_CAPABLE 0x00100000
#define EVFILT_USER (-10)
#define NOTE_WRITE 0x00000002
#define SSIZE_MAX LONG_MAX
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __BIGGEST_ALIGNMENT__ 16
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define NGROUPS_MAX 16
#define PRIO_DARWIN_PROCESS 4
#define SA_NODEFER 0x0010
#define _TIME_T 
#define P_RESV7 0x00800000
#define P_RESV9 0x02000000
#define _POSIX_SEM_NSEMS_MAX 256
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define KERN_MAXPARTITIONS 23
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define _I386_SIGNAL_H_ 1
#define __pure 
#define SYSCTL_DEF_ENABLED 
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define __NULLABILITY_COMPLETENESS_PUSH 
#define CLD_NOOP 0
#define A_GETEXPAFTER 43
#define FPE_FLTDIV 1
#define A_SETPOLICY 34
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define PT_CONTINUE 7
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define MAXBSIZE (256 * 4096)
#define USER_BC_DIM_MAX 3
#define CTL_VM 2
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define _SYS_TYPES_H_ 
#define _RLIMIT_POSIX_FLAG 0x1000
#define LONG_BIT 64
#define _POSIX_NGROUPS_MAX 8
#define UINT8_MAX 255
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define NL_LANGMAX 14
#define EVFILT_TIMER (-7)
#define NOTE_FFLAGSMASK 0x00ffffff
#define KERN_NTP_PLL 27
#define KERN_RAGEVNODE 68
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _POSIX_PATH_MAX 256
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define HW_L3CACHESIZE 22
#define EPIPE 32
#define BUS_NOOP 0
#define ENOATTR 93
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define KERN_CHECKOPENEVT 70
#define LONG_MIN (-LONG_MAX - 1L)
#define KERN_UPDATEINTERVAL 25
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define AQ_LOWATER 10
#define CLD_KILLED 2
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define NOTE_EXIT 0x80000000
#define SA_64REGSET 0x0200
#define CTL_HW 6
#define KERN_OSVERSION 65
#define KERN_THALTSTACK 63
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define KERN_KDSETREG 8
#define __WATCHOS_UNAVAILABLE 
#define TRACEBUF 
#define EBADMSG 94
#define KIPC_MBSTAT 8
#define __DARWIN_SUF_NON_CANCELABLE 
#define RUSAGE_INFO_V0 0
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define NL_ARGMAX 9
#define KERN_MAXFILES 7
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define ctos(x) (x)
#define __FLT128_HAS_INFINITY__ 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define _STRUCT_TIMEVAL struct timeval
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define AUDIT_TRIGGER_LOW_SPACE 1
#define PLOCK 36
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define HW_FLOATINGPT 11
#define __weak 
#define FSCALE (1<<FSHIFT)
#define _DEV_T 
#define CTLFLAG_RD 0x80000000
#define CTL_VFS 3
#define __abortlike __dead2 __cold __not_tail_called
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define BC_DIM_MAX 2048
#define KERN_TTY 69
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define CROUND (CBLOCK - 1)
#define _POSIX_TRACE_NAME_MAX 8
#define __kpi_unavailable 
#define NOTE_EXIT_MEMORY 0x00020000
#define _MACH_I386_BOOLEAN_H_ 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define EREMOTE 71
#define CTL_DEBUG_VALUE 1
#define SIGINT 2
#define KERN_KDCPUMAP 24
#define AUC_DISABLED -1
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define USER_EXPR_NEST_MAX 7
#define __TVOS_PROHIBITED 
#define KERN_TFP_POLICY 1
#define ETOOMANYREFS 59
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define EPFNOSUPPORT 46
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define MAXUPRC CHILD_MAX
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define _MACH_MACHINE_VM_TYPES_H_ 
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define KERN_TFP_POLICY_DENY 0
#define KIPC_MAXSOCKBUF 1
#define ENOTSUP 45
#define _SYS_SIGNAL_H_ 
#define SEGV_MAPERR 1
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EVFILT_READ (-1)
#define EV_ONESHOT 0x0010
#define KERN_TRANSLATE 44
#define __AVAILABILITY__ 
#define sigmask(m) (1 << ((m)-1))
#define __tune_core2__ 1
#define CTLFLAG_WR 0x40000000
#define FPE_FLTOVF 2
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define __ATOMIC_HLE_ACQUIRE 65536
#define _UINT32_T 
#define COLL_WEIGHTS_MAX 2
#define P_AFFINITY 0x00010000
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define A_GETPOLICY 33
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define MAXHOSTNAMELEN 256
#define __MAC_10_14_1 101401
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define WAKEMON_MAKE_FATAL 0x10
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define __dead 
#define SIG_BLOCK 1
#define A_SETUMASK 14
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define USER_POSIX2_UPE 18
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define __FLT64X_MIN_EXP__ (-16381)
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define KERN_COREDUMP 51
#define __WATCHOS_5_2 50200
#define EV_DISABLE 0x0008
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define PT_THUPDATE 13
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define EV_RECEIPT 0x0040
#define HW_CACHELINE 16
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define EPROCUNAVAIL 76
#define KERN_MAXVNODES 5
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define UINTPTR_MAX 18446744073709551615UL
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define KERN_PROC_RUID 6
#define P_DIRTY_TRACK 0x00000001
#define KERN_KDEFLAGS 1
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define CTLFLAG_MASKED 0x04000000
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define NOTE_VM_ERROR 0x10000000
#define _UINT64_T 
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define KERN_HOSTNAME 10
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define INT64_MAX 9223372036854775807LL
#define VM_METER 1
#define AQ_MAXHIGH 10000
#define ITIMER_REAL 0
#define p_back p_un.p_st1.__p_back
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define NL_SETMAX 255
#define __x86_64 1
#define KERN_POSIX 58
#define SEGV_ACCERR 2
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define MAXPHYS (128 * 1024)
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define _POSIX_CLOCKRES_MIN 20000000
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define LIST_CHECK_NEXT(elm,field) 
#define __INT_FAST64_TYPE__ long long int
#define P_DIRTY_DEFER 0x00000004
#define KERN_IPC 32
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define KERN_LOGSIGEXIT 36
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define ENOBUFS 55
#define howmany(x,y) __DARWIN_howmany(x, y)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define EADDRINUSE 48
#define IOPOL_DEFAULT 0
#define DST_WET 3
#define __OSX_AVAILABLE(_vers) 
#define A_SETSMASK 15
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define P_TRANSLATED 0x00020000
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define EV_VANISHED 0x0200
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define KIPC_MAX_DATALEN 7
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define __LP64__ 1
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define A_GETCLASS 22
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SIGUSR2 31
#define UQUAD_MAX ULLONG_MAX
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define MACH_PORT_NULL 0
#define EISDIR 21
#define __nonnull 
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define A_SENDTRIGGER 31
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define A_GETQCTRL 35
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define KERN_BOOTFILE 28
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define CHAR_MAX SCHAR_MAX
#define KERN_VERSION 4
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define INT_LEAST8_MAX INT8_MAX
#define FPE_INTDIV 7
#define MAXDOMNAMELEN 256
#define __WATCHOS_4_1 40100
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define INT8_C(v) (v)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define LIST_CHECK_PREV(elm,field) 
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define HW_L2CACHESIZE 20
#define MCLOFSET (MCLBYTES - 1)
#define EIDRM 90
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define MPO_IMPORTANCE_RECEIVER 0x08
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define HW_DISKSTATS 9
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define __LDBL_HAS_INFINITY__ 1
#define __OS_AVAILABILITY(_target,_availability) 
#define A_SETFSIZE 26
#define EDEVERR 83
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define NBPG 4096
#define __FLT_DIG__ 6
#define NBPW sizeof(int)
#define __NO_INLINE__ 1
#define KERN_KDWRITEMAP 18
#define P_DIRTY 0x00000008
#define CBQSIZE (CBLOCK/NBBY)
#define KERN_UNRAGE_THREAD 4
#define HW_AVAILCPU 25
#define __DARWIN_NON_CANCELABLE 0
#define EV_OOBAND EV_FLAG1
#define A_SETCTLMODE 42
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define ECONNABORTED 53
#define P_CONTINUED 0x00000080
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define SIGEV_THREAD 3
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define CHAR_MIN SCHAR_MIN
#define MAX_CANON 1024
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define AUDIT_SCNT 0x0400
#define INT_LEAST8_MIN INT8_MIN
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KIPC_SOQLIMITCOMPAT 10
#define __VERSION__ "11.2.0"
#define HW_MAXID 28
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
#define clrnd(i) (i)
#define EVFILT_FS (-9)
#define __used __attribute__((__used__))
#define NOTE_FFAND 0x40000000
#define ILL_ILLTRP 2
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define _MACH_PORT_T 
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define NOTE_CRITICAL 0x00000020
#define _PTHREAD_RWLOCK_T 
#define PT_STEP 9
#define EV_ENABLE 0x0004
#define BADSIG SIG_ERR
#define ILL_BADSTK 8
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define AUDIT_TRIGGER_MIN 1
#define KERN_DUMMY 33
#define KERN_PS_STRINGS 34
#define INT_LEAST32_MIN INT32_MIN
#define DST_EET 5
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define _IN_PORT_T 
#define P_CONTROLT 0x00000002
#define p_starttime p_un.__p_starttime
#define _SYS__TYPES_H_ 
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define SZOMB 5
#define LINE_MAX 2048
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define TRAP_TRACE 2
#define AT_IPC_MSG ((unsigned char)1)
#define EBUSY 16
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define PVFS 20
#define RLIMIT_CPU 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define _SYS_USER_H_ 
#define CTLFLAG_OID2 0x00400000
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define CTL_DEBUG_MAXID 20
#define USER_POSIX2_VERSION 10
#define CTL_MACHDEP 7
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define NOTE_ABSOLUTE 0x00000008
#define stoc(x) (x)
#define NOTE_EXTEND 0x00000004
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define PRIO_DARWIN_NONUI 0x1001
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _MACH_I386_VM_TYPES_H_ 
#define _CLOCK_T 
#define AUDIT_PUBLIC 0x0800
#define _INTMAX_T 
#define _GID_T 
#define __IPHONE_13_5 130500
#define USER_RE_DUP_MAX 9
#define SIG_ATOMIC_MAX INT32_MAX
#define _MACH_PORT_H_ 
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define HW_PAGESIZE 7
#define EFTYPE 79
#define A_OLDSETQCTRL 7
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define POLL_ERR 4
#define __IOS_UNAVAILABLE 
#define FP_RND_DOWN 1
#define INT32_MAX 2147483647
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define _U_INT8_T 
#define P_SUGID 0x00000100
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define _U_CHAR 
#define NL_TEXTMAX 2048
#define KIPC_MAX_LINKHDR 4
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define PRIO_DARWIN_BG 0x1000
#define KERN_AIOTHREADS 48
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define SIG_UNBLOCK 2
#define _POSIX_RTSIG_MAX 8
#define _MCONTEXT_T 
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define AU_ASSIGN_ASID -1
#define MAC_OS_X_VERSION_10_15_1 101501
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define __FLT128_DIG__ 33
#define AUDIT_USER 0x0040
#define __OSX_UNAVAILABLE 
#define MACH_PORT_TEMPOWNER 4
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define _SYS_EVENT_H_ 
#define USER_TZNAME_MAX 20
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define INT_FAST8_MIN INT8_MIN
#define MPO_CONTEXT_AS_GUARD 0x01
#define SIGSEGV 11
#define CTLTYPE_STRING 3
#define P_INMEM 0
#define CRF_MAC_ENFORCE 0x00000002
#define _Null_unspecified 
#define RLIMIT_NPROC 7
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define __DARWIN_NO_LONG_LONG 0
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define _SYS_RESOURCE_H_ 
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define SIG_DFL (void (*)(int))0
#define EINVAL 22
#define __UINT_LEAST16_TYPE__ short unsigned int
#define _KEY_T 
#define AUDIT_TRIGGER_INITIALIZE 7
#define __MAC_10_15_4 101504
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _INT64_T 
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define _POSIX_CHILD_MAX 25
#define _POSIX_MAX_INPUT 255
#define SS_ONSTACK 0x0001
#define USER_POSIX2_FORT_DEV 14
#define ESHUTDOWN 58
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define CTLFLAG_LOCKED 0x00800000
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define PRIO_USER 2
#define __FLT_IS_IEC_60559__ 2
#define KERN_PROC_UID 5
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define NOTE_DELETE 0x00000001
#define GUARD_TYPE_MACH_PORT 0x1
#define USER_POSIX2_C_DEV 12
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define __INT8_TYPE__ signed char
#define NeXTBSD 1995064
#define _UINTMAX_T 
#define SIGSTKSZ 131072
#define KERN_OSRELDATE 26
#define AU_DEFAUDITSID 0
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define EPWROFF 82
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define MAXPHYSIO MAXPHYS
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define DEV_BSHIFT 9
#define __UINT32_TYPE__ unsigned int
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define KIPC_NMBCLUSTERS 9
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define PT_READ_D 2
#define COMAPT_MAXLOGNAME 12
#define PT_READ_I 1
#define MPO_DENAP_RECEIVER 0x40
#define KERN_PROC_TTY 4
#define PT_READ_U 3
#define MAXCOMLEN 16
#define __FLT_RADIX__ 2
#define KERN_NGROUPS 18
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define SIG_HOLD (void (*)(int))5
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define AQ_MAXBUFSZ 1048576
#define INTPTR_MAX 9223372036854775807L
#define MPO_FILTER_MSG 0x100
#define HW_NCPU 3
#define __UINTMAX_C(c) c ## UL
#define minor(x) ((int32_t)((x) & 0xffffff))
#define FPE_INTOVF 8
#define WORD_BIT 32
#define PTHREAD_STACK_MIN 8192
#define __SSE_MATH__ 1
#define _U_INT32_T 
#define _POSIX_ARG_MAX 4096
#define NOTE_CHILD 0x00000004
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __k8 1
#define P_TIMEOUT 0x00000400
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define CLOFSET (CLSIZE*NBPG-1)
#define _UID_T 
#define _SYS_PTRACE_H_ 
#define _SYS_PROC_H_ 
#define CTLTYPE_OPAQUE 5
#define ENOSTR 99
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define TAILQ_CHECK_PREV(elm,field) 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define EOVERFLOW 84
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define BUS_ADRERR 2
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SIZE_T_MAX ULONG_MAX
#define CLBYTES (CLSIZE*NBPG)
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define EWOULDBLOCK EAGAIN
#define _ID_T 
#define __MISMATCH_TAGS_POP 
#define PRIMASK 0x0ff
#define NOFILE 256
#define __TVOS_AVAILABLE(_vers) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define NOTE_FFCOPY 0xc0000000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_64_BIT_INO_T 1
#define KERN_KDGETENTROPY 16
#define __TVOS_14_0 140000
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define FP_CHOP 3
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define USER_POSIX2_C_BIND 11
#define A_OLDSETPOLICY 3
#define KERN_USRSTACK32 35
#define NOTE_RENAME 0x00000020
#define DST_MET 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define EPROCLIM 67
#define TRAP_BRKPT 1
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 18
#define KERN_SYMFILE 37
#define _POSIX2_EQUIV_CLASS_MAX 2
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define HW_TARGET 26
#define RLIMIT_RSS RLIMIT_AS
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define HW_BUS_FREQ 14
#define _SYS_SYSLIMITS_H_ 
#define EPROTO 100
#define ENODEV 19
#define __INT_FAST16_MAX__ 0x7fff
#define __PTHREAD_SIZE__ 8176
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define OID_AUTO (-1)
#define CTL_UNSPEC 0
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define cr_gid cr_groups[0]
#define __FLT64_DIG__ 15
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define _POSIX2_LINE_MAX 2048
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define SIGSYS 12
#define CLOFF CLOFSET
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define KERN_PROC 14
#define _SUSECONDS_T 
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define PT_ATTACH ePtAttachDeprecated
#define INT32_C(v) (v)
#define __FLT_MAX_10_EXP__ 38
#define PT_KILL 8
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define POLL_OUT 2
#define A_SETPMASK 25
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define KERN_COREFILE 50
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define __MAC_10_10_2 101002
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
#define KIPC_SOCKBUF_WASTE 2
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define USERMODE(x) (((x) & 3) == 3)
#define _I386_LIMITS_H_ 
#define NOTE_REVOKE 0x00000040
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SIGXFSZ 25
#define P_RESV6 0x00400000
#define MPG_FLAGS_NONE (0x00ull)
#define __kpi_deprecated(_msg) 
#define P_FSTRACE 0
#define __UINT_FAST16_TYPE__ short unsigned int
#define USER_POSIX2_CHAR_TERM 13
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define LIST_CHECK_HEAD(head,field) 
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define E2BIG 7
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define EXPR_NEST_MAX 32
#define SI_MESGQ 0x10005
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define _PID_T 
#define CTL_MAXID 9
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define HW_USERMEM 6
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define EDEADLK 11
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _FD_SET 
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define EV_FLAG0 0x1000
#define AUDIT_ARGV 0x0004
#define CLSIZE 1
#define __SIG_ATOMIC_WIDTH__ 32
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __MISMATCH_TAGS_PUSH 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define SIGCHLD 20
#define __APPLE_API_OBSOLETE 
#define _BSM_AUDIT_H 
#define MAXPRI 127
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define CTL_DEBUG 5
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define __STDC_VERSION__ 201710L
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define MAXLOGNAME 255
#define CPUMON_MAKE_FATAL 0x1000
#define __SIZEOF_INT__ 4
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define _PTHREAD_COND_T 
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define _MACHTYPES_H_ 
#define P_CLASSIC P_TRANSLATED
#define __INT_FAST8_MAX__ 0x7f
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define UINTMAX_C(v) (v ## UL)
#define KERN_ARGMAX 8
#define NOTE_LINK 0x00000010
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KERN_FILE 15
#define RUSAGE_SELF 0
#define KERN_KDDFLAGS 2
#define ECONNRESET 54
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define RLIM_NLIMITS 9
#define AUDIT_TRIGGER_NO_SPACE 5
#define EBADMACHO 88
#define SIGSTOP 17
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define MACH_PORT_SRIGHTS_NONE 0
#define __TVOS_13_3 130300
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define ENXIO 6
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define _SYS__SELECT_H_ 
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define EBADRPC 72
#define __DARWIN_LITTLE_ENDIAN 1234
#define _I386_PARAM_H_ 
#define SIGALRM 14
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define PDROP 0x400
#define __LITTLE_ENDIAN__ 1
#define KERN_KDSET_TYPEFILTER 22
#define HW_MEMSIZE 24
#define USER_STREAM_MAX 19
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define KERN_POSIX1 17
#define HW_TB_FREQ 23
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define KERN_USRSTACK64 59
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define __FLT32X_DIG__ 15
#define _OFF_T 
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define TRUE 1
#define EV_ERROR 0x4000
#define __WORDSIZE 64
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define USER_POSIX2_SW_DEV 17
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define POLL_HUP 6
#define MACH_PORT_QLIMIT_BASIC (5)
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define ELAST 106
#define RLIMIT_NOFILE 8
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define AUDIT_AHLT 0x0002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define AUC_AUDITING 1
#define KERN_KDTEST 19
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define A_OLDGETQCTRL 6
#define ESOCKTNOSUPPORT 44
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define NOTE_EXITSTATUS 0x04000000
#define KERN_SPECULATIVE_READS 64
#define FALSE 0
#define HW_L1DCACHESIZE 18
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define XUCRED_VERSION 0
#define P_DIRTY_BUSY 0x00000040
#define PRIBIO 16
#define NOTE_FFOR 0x80000000
#define P_FORCEQUOTA 0x20000000
#define KERN_LOW_PRI_WINDOW 56
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define INT_LEAST64_MIN INT64_MIN
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define P_TRACED 0x00000800
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define EADDRNOTAVAIL 49
#define ETIME 101
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define NOTE_PDATAMASK 0x000fffff
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define MBIGCLSHIFT 12
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define HW_L1ICACHESIZE 17
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define UINT_FAST8_MAX UINT8_MAX
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define __INT_MAX__ 0x7fffffff
#define _CADDR_T 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define KERN_EXEC 45
#define _UINT16_T 
#define __TVOS_12_1 120100
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define EPROTONOSUPPORT 43
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _U_INT 
#define LLONG_MAX __LONG_LONG_MAX__
#define ENOTRECOVERABLE 104
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define INT16_C(v) (v)
#define CTLFLAG_ANYBODY 0x10000000
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define AUDIT_SEQ 0x0010
#define __INT64_TYPE__ long long int
#define KERN_RAGE_THREAD 2
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define KERN_MAXFILESPERPROC 29
#define EIO 5
#define __FLT_MAX_EXP__ 128
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define CTLTYPE_QUAD 4
#define ENETUNREACH 51
#define EXDEV 18
#define KERN_SYSV 42
#define _PTHREAD_MUTEXATTR_T 
#define BSD4_3 1
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define EVFILT_EXCEPT (-15)
#define P_NOSHLIB 0x10000000
#define AU_IPv4 4
#define AU_IPv6 16
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define EV_DISPATCH 0x0080
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define EV_SYSFLAGS 0xF000
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define EDQUOT 69
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define PT_SIGEXC 12
#define __SSE__ 1
#define KERN_OPENEVT_PROC 1
#define POLL_PRI 5
#define KERN_CLASSIC KERN_TRANSLATE
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define FPE_FLTINV 5
#define P_DISABLE_ASLR 0x00001000
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define NOTE_LOWAT 0x00000001
#define __MAC_11_1 110100
#define _POSIX_MAX_CANON 255
#define A_GETKAUDIT 29
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define __MACH__ 1
#define ENOSPC 28
#define IOPOL_TYPE_DISK 0
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define ENOEXEC 8
#define USER_POSIX2_LOCALEDEF 16
#define __WINT_WIDTH__ 32
#define KERN_MAXPROCPERUID 30
#define AQ_HIWATER 100
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define KERN_PROF 16
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define RLIMIT_DATA 2
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define NOTE_USECONDS 0x00000002
#define SV_SIGINFO SA_SIGINFO
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define SIGTSTP 18
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define PPAUSE 40
#define __FLT64X_IS_IEC_60559__ 2
#define MACH_PORT_RECEIVE_STATUS 2
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define AUDIT_ZONENAME 0x1000
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define RLIMIT_FSIZE 1
#define ctob(x) ((x)<<PGSHIFT)
#define PWAIT 32
#define P_DIRTY_TERMINATED 0x00000020
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define EMSGSIZE 40
#define KIPC_MAX_PROTOHDR 5
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define EDOM 33
#define AUDIT_GROUP 0x0080
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _LP64 1
#define KERN_KDWRITEMAP_V3 27
#define SIGEMT 7
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define P_CHECKOPENEVT 0x00080000
#define __UINT8_C(c) c
#define RLIMIT_MEMLOCK 6
#define __API_AVAILABLE(...) 
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define SIGKILL 9
#define ESRCH 3
#define IOV_MAX 1024
#define KERN_PROC_LCID 7
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define __API_UNAVAILABLE(...) 
#define EHOSTDOWN 64
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define VM_MACHFACTOR 4
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define USER_BC_SCALE_MAX 4
#define ENOLCK 77
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define ENFILE 23
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define _OS__OSBYTEORDERI386_H 
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define USER_CS_PATH 1
#define MAC_OS_X_VERSION_10_15 101500
#define __PTHREAD_ONCE_SIZE__ 8
#define P_PPWAIT 0x00000010
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define ENOSYS 78
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _SYS_LOCK_H_ 
#define OFF_MAX LLONG_MAX
#define MAX_AUDIT_RECORDS 20
#define HW_L3SETTINGS 21
#define CTL_MAXNAME 12
#define R_DEBUG_REG_T struct user_regs_struct
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define IOPOL_SCOPE_DARWIN_BG 2
#define __INT_FAST8_TYPE__ signed char
#define NOTE_EXIT_CSERROR 0x00040000
#define P_DELAYIDLESLEEP 0x00040000
#define QMD_TRACE_ELEM(elem) 
#define __DARWIN_FD_SETSIZE 1024
#define __TVOS_11_4 110400
#define CHARCLASS_NAME_MAX 14
#define WMESGLEN 7
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define EBADARCH 86
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define A_GETCWD 8
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define A_SETCOND 38
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define _BSD_MACHINE_TYPES_H_ 
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define RUSAGE_INFO_V1 1
#define __GNUC_STDC_INLINE__ 1
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define MACH_PORT_QLIMIT_SMALL (16)
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define CTLFLAG_EXPERIMENT 0x00100000
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define A_GETCTLMODE 41
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __TYPES_H_ 
#define _POSIX2_BC_BASE_MAX 99
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define _POSIX_MQ_PRIO_MAX 32
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define CTLFLAG_NOAUTO 0x02000000
#define P_THCWD 0x01000000
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define KERN_NX_PROTECTION 60
#define __DARWIN_VERS_1050 1
#define PT_TRACE_ME 0
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define NOTE_FFCTRLMASK 0xc0000000
#define QUAD_MIN LLONG_MIN
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define MSIZESHIFT 8
#define OPEN_MAX 10240
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _MACH_I386__STRUCTS_H_ 
#define SIGFPE 8
#define KERN_KDGETBUF 5
#define P_NOREMOTEHANG 0x80000000
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define OFF_MIN LLONG_MIN
#define EVFILT_MACHPORT (-8)
#define AUDIT_TRAIL 0x0100
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define _SYS_SYSCTL_H_ 
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define NOTE_VM_PRESSURE 0x80000000
#define INT32_MIN (-INT32_MAX-1)
#define LSCALE 1000
#define A_SETSTAT 13
#define __UINT32_C(c) c ## U
#define EISCONN 56
#define IOPOL_PASSIVE 2
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define KERN_PROCNAME 62
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define ESHLIBVERS 87
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define KERN_KDREADCURTHRMAP 21
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define PT_FORCEQUOTA 30
#define INTMAX_MIN (-INTMAX_MAX-1)
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define EUSERS 68
#define MAXINTERP 64
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define PCATCH 0x100
#define __PIC__ 2
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define ENETDOWN 50
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define CHILD_MAX 266
#define __TVOS_11_3 110300
#define __RCSID(s) __IDSTRING(rcsid,s)
#define P_NOCLDWAIT 0x40000000
#define _INO64_T 
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define _STRUCT_IOVEC 
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 42
#define SEGV_NOOP 0
#define AQ_BUFSZ MAXAUDITDATA
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define HW_VECTORUNIT 13
#define AUC_NOAUDIT 2
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define KERN_PROCARGS 38
#define PSPIN 0x800
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define EMFILE 24
#define FP_PREC_64B 3
#define NOCRED ((kauth_cred_t )0)
#define SA_NOCLDWAIT 0x0020
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ELOOP 62
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define __SSE2__ 1
#define OID_AUTO_START 100
#define NODEV (dev_t)(-1)
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define __TVOS_10_2 100200
#define SIGILL 4
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define __improbable(x) (x)
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define MAXFRAG 8
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define __unavailable 
#define NOTE_FUNLOCK 0x00000100
#define __DRIVERKIT_20_0 200000
#define EFAULT 14
#define EPROC_CTTY 0x01
#define _QUAD_HIGHWORD 1
#define SIGIOT SIGABRT
#define _POSIX_TIMER_MAX 32
#define NOTE_SECONDS 0x00000001
#define EBADEXEC 85
#define __FLT32X_HAS_QUIET_NAN__ 1
#define POLL_IN 1
#define __ATOMIC_CONSUME 1
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define FSCRED ((kauth_cred_t )-1)
#define EV_UDATA_SPECIFIC 0x0100
#define _MACH_BOOLEAN_H_ 
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define KERN_PROC_PGRP 2
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define ILL_PRVOPC 3
#define ENOPOLICY 103
#define ECONNREFUSED 61
#define MPO_TG_BLOCK_TRACKING 0x200
#define INT_FAST64_MIN INT64_MIN
#define EAGAIN 35
#define __DBL_MAX_10_EXP__ 308
#define __NULLABILITY_COMPLETENESS_POP 
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define LINUX_DEBUG_H 
#define A_GETPINFO 24
#define PTTYBLOCK 0x200
#define MAX(a,b) (((a)>(b))?(a):(b))
#define __DARWIN_OS_INLINE static inline
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __INT16_C(c) c
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define KERN_KDSETUP 6
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define AUC_UNSET 0
#define DST_CAN 6
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define EEXIST 17
#define A_GETSFLAGS 39
#define __PTRDIFF_TYPE__ long int
#define EV_ADD 0x0001
#define _I386__LIMITS_H_ 
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define A_SETQCTRL 36
#define errno (*__error())
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define HW_EPOCH 10
#define EPROGMISMATCH 75
#define _KAUTH_CRED_T 
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define NOTE_OOB 0x00000002
#define _SYS_UIO_H_ 
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define __WATCHOS_AVAILABLE(_vers) 
#define ENOENT 2
#define NOTE_BACKGROUND 0x00000040
#define A_GETCAR 9
#define MACH_PORT_QLIMIT_ZERO (0)
#define _PTHREAD_KEY_T 
#define HW_BYTEORDER 4
#define __FLT32X_MIN_10_EXP__ (-307)
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __UINTPTR_TYPE__ long unsigned int
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define _SSIZE_T 
#define __TVOS_10_0_1 100001
#define PTHREAD_KEYS_MAX 512
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define KERN_OSTYPE 1
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define MACH_PORT_LIMITS_INFO 1
#define KERN_OSRELEASE 2
#define PASS_MAX 128
#define KERN_KDREMOVE 7
#define KERN_THREADNAME 71
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define A_GETCOND 37
#define KERN_NETBOOT 40
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define PSWP 0
#define A_SETEXPAFTER 44
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define EROFS 30
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define UINT8_C(v) (v)
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define RLIMIT_STACK 3
#define __enum_closed 
#define PRIO_MAX 20
#define P_OWEUPC 0x00008000
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define KERN_VNODE 13
#define EV_CLEAR 0x0020
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define PTRDIFF_MAX INTMAX_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define PT_WRITE_D 5
#define PT_WRITE_I 4
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define PT_WRITE_U 6
#define _MODE_T 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define AU_CLASS_MASK_RESERVED 0x10000000
#define __WATCHOS_PROHIBITED 
#define __DARWIN_CLK_TCK 100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define KERN_KDWRITETR_V3 28
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define BC_BASE_MAX 99
#define MACH_PORT_DNREQUESTS_SIZE 3
#define MB_LEN_MAX 6
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define PGOFSET (NBPG-1)
#define _MACH_MACHINE__STRUCTS_H_ 
#define SIG_IGN (void (*)(int))1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define _U_INT16_T 
#define PVM 4
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define __P(protos) protos
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define KERN_PROCDELAYTERM 53
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define FP_PREC_53B 2
#define P_DIRTY_MARKED 0x00000080
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define _NLINK_T 
#define BSD 199506
#define FPE_FLTUND 3
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define MAXSYMLINKS 32
