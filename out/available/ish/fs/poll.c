#define TAILQ_CHECK_NEXT(elm,field) 
#define SQLITE_MISUSE 21
#define SI_TIMER 0x10003
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _EHOSTUNREACH -113
#define _POSIX_TRACE_SYS_MAX 8
#define _Nullable 
#define _EUCLEAN -117
#define O_CLOEXEC_ (1 << 19)
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define EV_VANISHED 0x0200
#define _SC_XOPEN_UNIX 115
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define DEBUG_debug DEBUG_all
#define PRIO_MIN -20
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define SIG_UNBLOCK_ 1
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define _EOVERFLOW -75
#define SQLITE_FCNTL_SYNC 21
#define _PTHREAD_IMPL_H_ 
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define __ATOMIC_ACQUIRE 2
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define _ENOLCK -37
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define _ENFILE -23
#define _SC_NGROUPS_MAX 4
#define O_EXCL_ (1 << 7)
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define sa_sigaction __sigaction_u.__sa_sigaction
#define NOTE_FORK 0x40000000
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define SQLITE_CHECKPOINT_RESTART 2
#define __GCC_IEC_559_COMPLEX 2
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define SQLITE_MUTEX_STATIC_VFS1 11
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define _SC_SPIN_LOCKS 80
#define _PC_MAX_INPUT 3
#define __UINT_LEAST8_TYPE__ unsigned char
#define _WATTR_OK (1<<16)
#define __SIZEOF_FLOAT80__ 16
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _T_WCHAR_ 
#define _I386__ENDIAN_H_ 
#define SQLITE_BUSY_TIMEOUT (SQLITE_BUSY | (3<<8))
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define INT_LEAST16_MIN INT16_MIN
#define _SC_XOPEN_REALTIME 111
#define SEGV_ACCERR_ 2
#define _ASSERT_H_ 
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define _SC_LINE_MAX 15
#define RLIM_SAVED_MAX RLIM_INFINITY
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define _POSIX_PRIORITIZED_IO (-1)
#define SQLITE_VTAB_DIRECTONLY 3
#define SIGWINCH_ 28
#define __DRIVERKIT_19_0 190000
#define SQLITE_CANTOPEN 14
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define __LP64_OFF64 (1)
#define PTHREAD_SCOPE_PROCESS 2
#define SQLITE_PREPARE_NORMALIZE 0x02
#define NL_NMAX 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define PTHREAD_CANCELED ((void *) 1)
#define SV_RESETHAND SA_RESETHAND
#define RLIM_INFINITY_ ((rlim_t_) -1)
#define O_ACCMODE 0x0003
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define SQLITE_FCNTL_DATA_VERSION 35
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define _CS_PATH 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
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
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define SHRT_MAX __SHRT_MAX__
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define NOTE_TRACKERR 0x00000002
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _XOPEN_UNIX (1)
#define WCHAR_MAX __WCHAR_MAX__
#define _EHOSTDOWN -112
#define _ENOSTR -60
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define _SC_XOPEN_SHM 113
#define SQLITE_MUTEX_STATIC_PRNG 5
#define _SC_TTY_NAME_MAX 101
#define _SC_XBS5_ILP32_OFF32 122
#define _SC_BARRIERS 66
#define RLIMIT_LOCKS_ 10
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define uint(size) glue3(uint,size,_t)
#define __FLT32_MIN_EXP__ (-125)
#define PIPE_BUF 512
#define _POSIX_SPIN_LOCKS (-1)
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define ENOEXEC 8
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define MISC_H 
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define SQLITE_CHECKPOINT_PASSIVE 0
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _POSIX2_BC_DIM_MAX 2048
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define L_INCR SEEK_CUR
#define O_NOFOLLOW_ANY 0x20000000
#define SQLITE_AVAILABLE __API_AVAILABLE
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define SLIST_FIRST(head) ((head)->slh_first)
#define _POSIX_TTY_NAME_MAX 9
#define _PTHREAD_CONDATTR_T 
#define MINSIGSTKSZ 32768
#define CHAR_MAX SCHAR_MAX
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define __WCHAR_MAX__ 0x7fffffff
#define _SC_2_C_DEV 19
#define forceinline inline __attribute__((always_inline))
#define EREMOTE 71
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define ENOSR 98
#define INT16_MAX 32767
#define RLIMIT_AS 5
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define __DARWIN_PDP_ENDIAN 3412
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
#define htons(x) __DARWIN_OSSwapInt16(x)
#define SQLITE_ACCESS_READ 2
#define SQLITE_CANTOPEN_SYMLINK (SQLITE_CANTOPEN | (6<<8))
#define __GCC_IEC_559 2
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define SQLITE_TESTCTRL_BYTEORDER 22
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define ERPCMISMATCH 73
#define NOTE_FFNOP 0x00000000
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _ENOPROTOOPT -92
#define __IOS_PROHIBITED 
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF 57
#define SQLITE_CONSTRAINT_PINNED (SQLITE_CONSTRAINT |(11<<8))
#define _SC_SPORADIC_SERVER 81
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define _T_PTRDIFF 
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define _PTHREAD_T 
#define MB_CUR_MAX __mb_cur_max
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define EVFILT_SIGNAL (-6)
#define _SC_XOPEN_STREAMS 114
#define _SC_THREAD_PRIO_INHERIT 87
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define __WATCHOS_4_0 40000
#define SQLITE_CREATE_VTABLE 29
#define __FLT64_DECIMAL_DIG__ 17
#define SIGKILL_ 9
#define SQLITE_SUBTYPE 0x000100000
#define _XOPEN_VERSION 600
#define _EUSERS -87
#define __DTF_READALL 0x0008
#define __disable_tail_calls 
#define FPE_NOOP 0
#define glue(a,b) _glue(a, b)
#define SCHED_RR 2
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define SA_SIGINFO_ 4
#define CLD_STOPPED 5
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define NSIG __DARWIN_NSIG
#define LINK_MAX 32767
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define w_termsig w_T.w_Termsig
#define FNONBLOCK O_NONBLOCK
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define EV_ENABLE 0x0004
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define _SC_TRACE_USER_EVENT_MAX 130
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define MAC_OS_X_VERSION_10_14_4 101404
#define PTHREAD_PROCESS_SHARED 1
#define SQLITE_ERROR 1
#define RLIMIT_RSS_ 5
#define SIGPROF 27
#define _ENAMETOOLONG -36
#define EOWNERDEAD 105
#define DT_REG 8
#define F_ALLOCATEALL 0x00000004
#define MINSIGSTKSZ_ 2048
#define bool _Bool
#define _SC_CPUTIME 68
#define O_WRONLY_ (1 << 0)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define SQLITE_CONFIG_SINGLETHREAD 1
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define SIGQUIT_ 3
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define ENOTTY 25
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define __FINITE_MATH_ONLY__ 0
#define AT_EACCESS 0x0010
#define NUM_SIGS 64
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define __cold __attribute__((__cold__))
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define _SC_MEMLOCK_RANGE 31
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define _SC_XBS5_ILP32_OFFBIG 123
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_EMPTY 16
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define _CS_DARWIN_USER_DIR 65536
#define SQLITE_EXTERN extern
#define _SC_SHARED_MEMORY_OBJECTS 39
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define SQLITE_MUTEX_STATIC_MEM2 4
#define BUS_NOOP 0
#define NOTE_LEEWAY 0x00000010
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define ERANGE 34
#define __FLT32_HAS_DENORM__ 1
#define ILL_BADSTK 8
#define _EFAULT -14
#define _ALLOCA_H_ 
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define _POSIX_SYMLINK_MAX 255
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define SIGFPE 8
#define _ENETUNREACH -101
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define ENOATTR 93
#define SQLITE_STMTSTATUS_VM_STEP 4
#define F_RDADVISE 44
#define OFF_MAX LLONG_MAX
#define __UINT_FAST8_MAX__ 0xff
#define DEV_H 
#define __WATCHOS_PROHIBITED 
#define DEBUG_memory DEBUG_all
#define _EREMCHG -78
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define _LIMITS_H___ 
#define SA_RESTART 0x0002
#define __FLT32_MAX_10_EXP__ 38
#define _FILESEC_T 
#define INT_FAST8_MAX INT8_MAX
#define _WCHAR_T_DEFINED 
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define SIGHUP 1
#define ETXTBSY 26
#define __INT8_C(c) c
#define _ESRCH -3
#define ACCESSX_MAX_DESCRIPTORS 100
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define _U_LONG 
#define EVFILT_SYSCOUNT 17
#define SIGCONT 19
#define TRACE_strace TRACE__NOP
#define FTS5_TOKENIZE_QUERY 0x0001
#define ENOLINK 97
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define SQLITE_ACCESS_EXISTS 0
#define DEBUG_strace DEBUG_all
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define _ERRNO_T 
#define _ENOTCONN -107
#define F_GETFL 3
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define WAKEMON_GET_PARAMS 0x04
#define __restrict restrict
#define _SC_BC_SCALE_MAX 11
#define NFDBITS __DARWIN_NFDBITS
#define SIG_BLOCK_ 0
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define __SHRT_MAX__ 0x7fff
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define POLLRDBAND 0x0080
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define __DARWIN_C_ANSI 010000L
#define SQLITE_ANY 5
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __FLT64X_MAX_10_EXP__ 4932
#define CLOCK_REALTIME_COARSE_ 5
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define S_IXOTH 0000001
#define EVFILT_EXCEPT (-15)
#define SQLITE_DROP_TEMP_INDEX 12
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define SIGTTOU 22
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define _BSD_MACHINE_SIGNAL_H_ 
#define _POSIX_SYNCHRONIZED_IO (-1)
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define _POSIX2_UPE 200112L
#define _POSIX2_BC_BASE_MAX 99
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define POLL_READ 1
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define _EDOM -33
#define __SNPT 0x0800
#define S_IFWHT 0160000
#define FAPPEND O_APPEND
#define _POSIX_VERSION 200112L
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define KEVENT_FLAG_NONE 0x000000
#define _EAGAIN -11
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define SQLITE_SCANSTAT_EXPLAIN 4
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define _POSIX_MAX_INPUT 255
#define RENAME_EXCL 0x00000004
#define _EISCONN -106
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define SQLITE_FCNTL_LOCKSTATE 1
#define _SC_V6_LP64_OFF64 105
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define _ENOTBLK -15
#define _SC_SYMLOOP_MAX 120
#define USER_FSIGNATURES_CDHASH_LEN 20
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define LIST_FIRST(head) ((head)->lh_first)
#define _ENOENT -2
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define __result_use_check __attribute__((__warn_unused_result__))
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define SQLITE_CREATE_TEMP_INDEX 3
#define flatten __attribute__((flatten))
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define PRIO_USER 2
#define ENOPROTOOPT 42
#define __APPLE_API_STANDARD 
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define SQLITE_VERSION "3.32.3"
#define IOPOL_APPLICATION IOPOL_STANDARD
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define P_EXEC (1 << 2)
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define S_IWUSR 0000200
#define EUSERS 68
#define _POSIX_SPAWN (-1)
#define _PC_AUTH_OPAQUE_NP 14
#define NULL ((void *)0)
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define _POSIX_READER_WRITER_LOCKS 200112L
#define SQLITE_FCNTL_BUSYHANDLER 15
#define __PTHREAD_MUTEX_SIZE__ 56
#define EDQUOT 69
#define __DARWIN_UNIX03 1
#define _EPFNOSUPPORT -96
#define _POSIX_AIO_MAX 1
#define SIGTSTP_ 20
#define _POSIX_PIPE_BUF 512
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define SIGUSR1 30
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define NOTE_EXITSTATUS 0x04000000
#define SQLITE_SCANSTAT_NLOOP 0
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define LSEEK_CUR 1
#define UINT_FAST16_MAX UINT16_MAX
#define F_SETPROTECTIONCLASS 64
#define __FLT128_MIN_EXP__ (-16381)
#define SQLITE_FCNTL_HAS_MOVED 20
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define F_ADDFILESIGS 61
#define _POSIX_TZNAME_MAX 6
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define WUNTRACED 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define SIGTTOU_ 22
#define _SC_SHELL 78
#define __pure2 __attribute__((__const__))
#define SA_RESETHAND_ 0x80000000
#define SQLITE_SHM_EXCLUSIVE 8
#define SQLITE_CREATE_TEMP_TABLE 4
#define FS_FIX_PATH_H 
#define UINT16_C(v) (v)
#define CLOCK_REALTIME_ 0
#define __FLT128_MIN_10_EXP__ (-4931)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define O_NONBLOCK_ (1 << 11)
#define __FLT32X_IS_IEC_60559__ 2
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define SQLITE_SCANSTAT_NVISIT 1
#define ENOMSG 91
#define _PC_PRIO_IO 19
#define _SYS_UNISTD_H_ 
#define EXIT_FAILURE 1
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define MAX_NAME 256
#define _SYS_SELECT_H_ 
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define EVFILT_VM (-12)
#define POLL_NVAL 32
#define _ENODEV -19
#define O_CREAT_ (1 << 6)
#define __SERR 0x0040
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define EDESTADDRREQ 39
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define _SC_TIMERS 41
#define FP_PREC_24B 0
#define SA_SIGINFO 0x0040
#define AC_F 0
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define AC_W 2
#define AC_X 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define EPROTOTYPE 41
#define WSTOPPED 0x00000008
#define EQFULL 106
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define _POSIX_TIMEOUTS (-1)
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define SIGSEGV_ 11
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define SQLITE_DROP_INDEX 10
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define TAILQ_CHECK_HEAD(head,field) 
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define SQLITE_CREATE_TABLE 2
#define _SC_2_C_BIND 18
#define SQLITE_FCNTL_CKPT_START 39
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define SQLITE_VTAB_INNOCUOUS 2
#define _SC_THREAD_THREADS_MAX 94
#define _ENOTSOCK -88
#define _RPERM_OK (1<<19)
#define UTIL_SYNC_H 
#define SI_USER 0x10001
#define RLIMIT_NLIMITS_ 16
#define EMULTIHOP 95
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define S_IRWXO 0000007
#define _INT32_T 
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define SQLITE_DROP_VTABLE 30
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define SQLITE_OPEN_FILEPROTECTION_MASK 0x00700000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define FS_STAT_H 
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define SQLITE_FCNTL_PDB 30
#define CLOCK_REALTIME _CLOCK_REALTIME
#define __FLT32X_MANT_DIG__ 53
#define _XOPEN_REALTIME_THREADS (-1)
#define SQLITE_TESTCTRL_ALWAYS 13
#define SQLITE_STATUS_MALLOC_SIZE 5
#define ETIMEDOUT 60
#define O_RDONLY_ 0
#define _SC_VERSION 8
#define DIRBLKSIZ 1024
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define SQLITE_CONFIG_SERIALIZED 3
#define SQLITE_MISMATCH 20
#define __USER_LABEL_PREFIX__ _
#define SCHED_OTHER 1
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define SQLITE_CDECL 
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define F_GETOWN 5
#define SQLITE_MUTEX_STATIC_OPEN 4
#define BITS_SIZE(bits) ((((bits) - 1) / 8) + 1)
#define CHAR_BIT __CHAR_BIT__
#define ENEEDAUTH 81
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define ATOMIC_FLAG_INIT { 0 }
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define _POSIX2_EQUIV_CLASS_MAX 2
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define _ESHUTDOWN -108
#define _SYS_QUEUE_H_ 
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define F_BARRIERFSYNC 85
#define SQLITE_CONFIG_MMAP_SIZE 22
#define PTHREAD_CANCEL_DEFERRED 0x02
#define __END_DECLS 
#define _GCC_LIMITS_H_ 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define SIG_IGN_ 1
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define WCONTINUED 0x00000010
#define NOTE_FUNLOCK 0x00000100
#define EMU_CPU_MEM_H 
#define TRACE_verbose TRACE__NOP
#define O_APPEND_ (1 << 10)
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define WAKEMON_DISABLE 0x02
#define ILL_ILLOPC 1
#define LOCK_DEBUG 0
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_UTF16 4
#define SQLITE_FCNTL_TEMPFILENAME 16
#define SIGSTOP_ 19
#define NOTE_NONE 0x00000080
#define _SC_2_PBS_MESSAGE 63
#define __alloca(size) __builtin_alloca(size)
#define _READ_OK (1<<9)
#define MAC_OS_X_VERSION_10_12_1 101201
#define _XOPEN_ENH_I18N (1)
#define _EILSEQ -84
#define SQLITE_STATUS_PAGECACHE_USED 1
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define _ETOOMANYREFS -109
#define _PC_PIPE_BUF 6
#define TMP_MAX 308915776
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define FPE_FLTDIV 1
#define POLLSTANDARD (POLLIN|POLLPRI|POLLOUT|POLLRDNORM|POLLRDBAND| POLLWRBAND|POLLERR|POLLHUP|POLLNVAL)
#define _SC_TZNAME_MAX 27
#define _POSIX2_BC_SCALE_MAX 99
#define _EACCES -13
#define F_THAW_FS 54
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define DEBUG_all 0
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define TIME_UTC 1
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define S_IFMT 0170000
#define _TIME_H_ 
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define INT32_MIN (-INT32_MAX-1)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define SS_DISABLE 0x0004
#define MEM_PGDIR_SIZE (1 << 10)
#define SIGCHLD_ 17
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define _SC_TIMER_MAX 52
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define CHARCLASS_NAME_MAX 14
#define IOPOL_IMPORTANT 1
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define SQLITE_REPLACE 5
#define _EPROTOTYPE -91
#define EPROCUNAVAIL 76
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define _STDLIB_H_ 
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define NOTE_TRACK 0x00000001
#define ENOENT 2
#define __FLT32_IS_IEC_60559__ 2
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define SQLITE_LOCK_EXCLUSIVE 4
#define SQLITE_FCNTL_FILE_POINTER 7
#define SQLITE_TRACE_STMT 0x01
#define __PTHREAD_RWLOCK_SIZE__ 192
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define ENOTCONN 57
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define SQLITE_DETACH 25
#define FD_H 
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define ILL_ILLADR 5
#define AT_FDCWD -2
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define _ESPIPE -29
#define S_IWGRP 0000020
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define __DBL_IS_IEC_60559__ 2
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define SQLITE_NOTICE 27
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define S_IFREG 0100000
#define NL_ARGMAX 9
#define SQLITE_INTERRUPT 9
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define SYNC_VOLUME_FULLSYNC 0x01
#define __APPLE_API_EVOLVING 
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define P_COW (1 << 4)
#define _BLKCNT_T 
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define SQLITE_FULL 13
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define F_DUPFD_CLOEXEC 67
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __strong 
#define _REXT_OK (1<<17)
#define _POSIX_DELAYTIMER_MAX 32
#define _POSIX_TRACE_NAME_MAX 8
#define ITIMER_REAL_ 0
#define _WCHAR_T_ 
#define list_for_each(list,item) for (item = (list)->next; item != (list); item = item->next)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define NOTE_SIGNAL 0x08000000
#define SQLITE_FCNTL_PERSIST_WAL 10
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define _STDDEF_H 
#define RLIMIT_RTTIME_ 15
#define _SC_MEMLOCK 30
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define _VA_LIST_DEFINED 
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define SI_TIMER_ -2
#define __INT32_MAX__ 0x7fffffff
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define SEGV_ACCERR 2
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define NOTE_EXIT_DETAIL 0x02000000
#define _EIO -5
#define SQLITE_DROP_VIEW 17
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _EREMOTE -66
#define STDOUT_FILENO 1
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define O_NDELAY O_NONBLOCK
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define _PC_CASE_PRESERVING 12
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIG_ERR ((void (*)(int))-1)
#define _EXDEV -18
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define F_NOCACHE 48
#define __APPLE__ 1
#define EMFILE 24
#define __UINT16_C(c) c
#define __WATCHOS_7_2 70200
#define ru_first ru_ixrss
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define S_IRWXU 0000700
#define _INTPTR_T 
#define SS_DISABLE_ 2
#define UINT_LEAST8_MAX UINT8_MAX
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define NOTE_TRIGGER 0x01000000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define SQLITE_DESERIALIZE_READONLY 4
#define SQLITE_UTF16LE 2
#define RESOURCE_H 
#define LOCK_EX 0x02
#define w_retcode w_T.w_Retcode
#define FIONCLEX_ 0x5450
#define AT_FDCWD_ -100
#define BYTES_ROUND_UP(bytes) (PAGE_ROUND_UP(bytes) << PAGE_BITS)
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __APPLE_API_STABLE 
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define O_EXCL 0x00000800
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define ESTALE 70
#define _SC_2_SW_DEV 24
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define FS_H 
#define _PC_FILESIZEBITS 18
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define _WPERM_OK (1<<20)
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define ENOTSOCK 38
#define _ENOTTY -25
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define SIG_ATOMIC_MIN INT32_MIN
#define SQLITE_LIMIT_ATTACHED 7
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define F_SETBACKINGSTORE 70
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define SV_ONSTACK SA_ONSTACK
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define _DELETE_OK (1<<12)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define SIGIO 23
#define __FLT64_MANT_DIG__ 53
#define AT_REMOVEDIR 0x0080
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define O_EVTONLY 0x00008000
#define EAUTH 80
#define EVFILT_PROC (-5)
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _SC_XOPEN_VERSION 116
#define make_attr(_type,thing) ((struct attr) {.type = attr_ ##_type, ._type = thing})
#define _FSBLKCNT_T 
#define _POSIX_NO_TRUNC 200112L
#define O_SYMLINK 0x00200000
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define __SPI_AVAILABLE(...) 
#define SQLITE_LIMIT_SQL_LENGTH 1
#define _DIRENT_H_ 
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define __FLT64X_MANT_DIG__ 64
#define SQLITE_REINDEX 27
#define ECHILD 10
#define NOTE_SECONDS 0x00000001
#define EINPROGRESS 36
#define _SC_XBS5_LPBIG_OFFBIG 125
#define L_tmpnam 1024
#define LSEEK_END 2
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define AC_R 4
#define _EREMOTEIO -121
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define UINT8_C(v) (v)
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
#define _POSIX_PATH_MAX 256
#define SA_ONSTACK 0x0001
#define QUAD_MAX LLONG_MAX
#define _INO_T 
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define __MMX__ 1
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define NOTE_EXIT 0x80000000
#define PF_FLAG (1 << 2)
#define PTHREAD_CANCEL_ENABLE 0x01
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define NOTE_ATTRIB 0x00000008
#define has_feature __has_feature
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define _POSIX_THREAD_THREADS_MAX 64
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define EBADMSG 94
#define _ECONNREFUSED -111
#define LOCK_NB 0x04
#define _SC_ARG_MAX 1
#define ESOCKTNOSUPPORT 44
#define BITS_H 
#define INT_FAST16_MIN INT16_MIN
#define _SC_V6_ILP32_OFF32 103
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define SI_USER_ 0
#define DT_BLK 6
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define SQLITE_LOCK_SHARED 1
#define EV_CLEAR 0x0020
#define SQLITE_APICALL 
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define __GETHOSTUUID_H 
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SIGXCPU_ 24
#define SEEK_CUR 1
#define SQLITE_SYNC_NORMAL 0x00002
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define NOTE_WRITE 0x00000002
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define _EINPROGRESS -115
#define PRIO_DARWIN_NONUI 0x1001
#define STDERR_FILENO 2
#define CHILD_MAX 266
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define DEV_BLOCK 0
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define MEMORY_H 
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define NGROUPS_MAX 16
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define _TIME_T 
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define _POSIX_SEM_NSEMS_MAX 256
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define _I386_SIGNAL_H_ 1
#define __pure 
#define WTERMSIG(x) (_WSTATUS(x))
#define CLD_NOOP 0
#define _SC_XOPEN_REALTIME_THREADS 112
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define SQLITE_SCHEMA 17
#define _GCC_WCHAR_T 
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define SQLITE_CREATE_VIEW 8
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define NL_TEXTMAX 2048
#define _PC_SYMLINK_MAX 24
#define _SYS_TYPES_H_ 
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define SQLITE3_TEXT 3
#define SQLITE_IGNORE 2
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SQLITE_SHM_NLOCK 8
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define _ECOMM -70
#define UINT8_MAX 255
#define __SIZEOF_FLOAT__ 4
#define SQLITE_DBCONFIG_TRUSTED_SCHEMA 1017
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define O_RDONLY 0x0000
#define _PC_2_SYMLINKS 15
#define EWOULDBLOCK EAGAIN
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNTILFIRSTUSERAUTHENTICATION 0x00300000
#define F_SINGLE_WRITER 76
#define NL_LANGMAX 14
#define _SC_CLK_TCK 3
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define NOTE_FFLAGSMASK 0x00ffffff
#define _SC_2_VERSION 17
#define _POSIX2_CHAR_TERM 200112L
#define SQLITE_SHM_UNLOCK 1
#define SCHED_FIFO 4
#define _WSTOPPED 0177
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define NOTE_FFCOPY 0xc0000000
#define _POSIX_MQ_OPEN_MAX 8
#define EDEADLK 11
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define EPIPE 32
#define DEBUG_instr DEBUG_all
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define _EBFONT -59
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define FP_STATE_BYTES 512
#define _SC_TIMEOUTS 95
#define fallthrough __attribute__((fallthrough))
#define LONG_MIN (-LONG_MAX - 1L)
#define F_CHECK_LV 98
#define _ESRMNT -69
#define SQLITE_CREATE_INDEX 1
#define L_ctermid 1024
#define SIGCONT_ 18
#define _BSD_SETJMP_H 
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define CLD_KILLED 2
#define _PC_REC_MAX_XFER_SIZE 21
#define SQLITE_NULL 5
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define SA_64REGSET 0x0200
#define FLOAT80_H 
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define TRACE_debug TRACE__NOP
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_CONFIG_MEMSTATUS 9
#define _ENOMEM -12
#define SQLITE_TESTCTRL_IMPOSTER 25
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define __WATCHOS_UNAVAILABLE 
#define TRACEBUF 
#define _PC_MIN_HOLE_SIZE 27
#define __DARWIN_SUF_NON_CANCELABLE 
#define _POSIX_REGEXP 200112L
#define _SC_CHILD_MAX 2
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define MEM_WRITE_PTRACE 2
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define NOT_WITHIN 0
#define EVFILT_AIO (-3)
#define _EBADF -9
#define TIME_H 
#define SQLITE_ABORT 4
#define _JBLEN ((9 * 2) + 3 + 16)
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define POLL_ONESHOT (1 << 30)
#define _STRUCT_TIMEVAL struct timeval
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define _LIMITS_H_ 
#define SQLITE_ACCESS_READWRITE 1
#define _POSIX_MEMORY_PROTECTION 200112L
#define SIGSTKSZ 131072
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define _SYS_EVENT_H_ 
#define _PC_REC_XFER_ALIGN 23
#define true 1
#define SA_RESETHAND 0x0004
#define F_PEOFPOSMODE 3
#define _VA_LIST 
#define SIGTERM 15
#define _SC_XOPEN_CRYPT 108
#define SEGV_MAPERR_ 1
#define SQLITE_OPEN_WAL 0x00080000
#define _SC_RAW_SOCKETS 119
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define __weak 
#define _DEV_T 
#define _SC_ATEXIT_MAX 107
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define RLIMIT_FSIZE_ 1
#define _POSIX_LINK_MAX 8
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define BC_DIM_MAX 2048
#define SI_KERNEL_ 128
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define _ELIBMAX -82
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define POLLATTRIB 0x0400
#define FFDSYNC O_DSYNC
#define __kpi_unavailable 
#define NOTE_EXIT_MEMORY 0x00020000
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define DT_UNKNOWN 0
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define F_ULOCK 0
#define SIGINT 2
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ETOOMANYREFS 59
#define _SC_STREAM_MAX 26
#define S_IREAD S_IRUSR
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define EPFNOSUPPORT 46
#define __amd64 1
#define _POSIX_SSIZE_MAX 32767
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define SQLITE_FCNTL_PRAGMA 14
#define MEM_PAGES (1 << 20)
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define _SYS_SIGNAL_H_ 
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define EVFILT_READ (-1)
#define SQLITE_SYNC_DATAONLY 0x00010
#define EV_ONESHOT 0x0010
#define _PTRDIFF_T_DECLARED 
#define SQLITE_CORRUPT 11
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define _SC_2_PBS_LOCATE 62
#define _str(x) #x
#define __AVAILABILITY__ 
#define SQLITE_FCNTL_WAL_BLOCK 24
#define __tune_core2__ 1
#define SIGURG_ 23
#define O_FSYNC O_SYNC
#define FIONBIO_ 0x5421
#define FPE_FLTOVF 2
#define _SC_SS_REPL_MAX 126
#define __ATOMIC_HLE_ACQUIRE 65536
#define _EMLINK -31
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define FTS5_TOKENIZE_PREFIX 0x0002
#define SHRT_MIN (-SHRT_MAX - 1)
#define _UINT32_T 
#define _T_WCHAR 
#define SQLITE_MUTEX_STATIC_MEM 3
#define MAX_PID (1 << 15)
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define _PC_VDISABLE 9
#define LEAK_DEBUG 0
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define RLIMIT_CPU 0
#define _SC_XOPEN_LEGACY 110
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define EV_POLL EV_FLAG0
#define _glue(a,b) a ##b
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define O_NONBLOCK 0x00000004
#define __MAC_10_14_1 101401
#define _EPERM -1
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define WAKEMON_MAKE_FATAL 0x10
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define __dead 
#define _EAFNOSUPPORT -97
#define PTHREAD_CREATE_DETACHED 2
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define RLIMIT_DATA_ 2
#define ferror_unlocked(p) __sferror(p)
#define S_IEXEC S_IXUSR
#define __WATCHOS_5_2 50200
#define EV_DISABLE 0x0008
#define list_first_entry(list,type,member) list_entry((list)->next, type, member)
#define _SECURE__COMMON_H_ 
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define errno (*__error())
#define _EDESTADDRREQ -89
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define _SC_ADVISORY_INFO 65
#define EV_RECEIPT 0x0040
#define SQLITE_LOCKED 6
#define KERNEL_MM_H 
#define _SC_MEMORY_PROTECTION 32
#define _SQLITE3_H_ 
#define _SC_ASYNCHRONOUS_IO 28
#define O_DP_GETRAWENCRYPTED 0x0001
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define F_GETLKPID 66
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define __SOPT 0x0400
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define TRAP_TRACE_ 2
#define UINTPTR_MAX 18446744073709551615UL
#define stdout __stdoutp
#define SIGUSR2_ 12
#define _PTRDIFF_T 
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define TRACE_memory TRACE__NOP
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define _SC_PAGESIZE 29
#define SQLITE_SOURCE_ID "2020-06-18 14:16:19 02c344aceaea0d177dd42e62c8541e3cab4a26c757ba33b3a31a43ccc7d4aapl"
#define _POSIX_SPORADIC_SERVER (-1)
#define _SC_XOPEN_XCU_VERSION 121
#define _EDQUOT -122
#define UINT_LEAST16_MAX UINT16_MAX
#define RLIMIT_SIGPENDING_ 11
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define _EMSGSIZE -90
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define DF_FLAG (1 << 10)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define POLLNVAL 0x0020
#define _SC_READER_WRITER_LOCKS 76
#define SQLITE_DBCONFIG_DQS_DML 1013
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define ENOSTR 99
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define _PC_LINK_MAX 1
#define INT64_MAX 9223372036854775807LL
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define __ILP32_OFF32 (-1)
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define NL_SETMAX 255
#define INT8_MIN -128
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define _POSIX_SHELL 200112L
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define WNOHANG 0x00000001
#define alloca(size) __alloca(size)
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define _XOPEN_SHM (1)
#define SQLITE_OPEN_MEMORY 0x00000080
#define __x86_64 1
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define _SYS_DIRENT_H 
#define _EISDIR -21
#define SQLITE_STATUS_SCRATCH_USED 3
#define O_NOCTTY 0x00020000
#define __PTRDIFF_T 
#define __SALC 0x4000
#define F_GETPATH_MTMINFO 71
#define _SYS_QOS_H 
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define FASYNC O_ASYNC
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define SQLITE_FCNTL_RESERVE_BYTES 38
#define _POSIX_ADVISORY_INFO (-1)
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define LIST_CHECK_NEXT(elm,field) 
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define __INT_FAST64_TYPE__ long long int
#define SQLITE_UPDATE 23
#define SQLITE_MUTEX_STATIC_APP2 9
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define F_LOCK 1
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define PTHREAD_INHERIT_SCHED 1
#define _POSIX2_FORT_RUN 200112L
#define _SC_MQ_OPEN_MAX 46
#define _XOPEN_STREAMS (-1)
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define S_IRWXG 0000070
#define ENOBUFS 55
#define FTS5_TOKEN_COLOCATED 0x0001
#define _ANSI_STDDEF_H 
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define F_PREALLOCATE 42
#define ENOTEMPTY 66
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define _ENOSPC -28
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define POLL_EDGETRIGGERED (1ul << 31)
#define fileno_unlocked(p) __sfileno(p)
#define PTHREAD_CANCEL_DISABLE 0x00
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define MAX_PATH 4096
#define __SMBF 0x0080
#define SQLITE_STMTSTATUS_SORT 2
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define SQLITE_INTEGER 1
#define _ESOCKTNOSUPPORT -94
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define __OSX_AVAILABLE(_vers) 
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define SQLITE_TESTCTRL_LAST 29
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define F_SETLKWTIMEOUT 10
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _STDATOMIC_H 
#define F_GETCODEDIR 72
#define __ILP32_OFFBIG (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define SQLITE_CHECKPOINT_FULL 1
#define __SIZE_TYPE__ long unsigned int
#define _PC_CHOWN_RESTRICTED 7
#define _PTHREAD_QOS_H 
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define __not_tail_called 
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __LP64__ 1
#define _POSIX2_BC_STRING_MAX 1000
#define unlikely(x) __builtin_expect((x), 0)
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define ITIMER_VIRTUAL_ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define _POSIX_CLOCKRES_MIN 20000000
#define _POSIX_JOB_CONTROL 200112L
#define OF (cpu->of)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define SQLITE_CONFIG_MULTITHREAD 2
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SIGUSR2 31
#define SQLITE_CONFIG_LOG 16
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define F_TRIM_ACTIVE_FILE 100
#define _ESTALE -116
#define IOPOL_TYPE_DISK 0
#define EOF (-1)
#define UQUAD_MAX ULLONG_MAX
#define _ELIBBAD -80
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define _EOPNOTSUPP -95
#define EISDIR 21
#define __nonnull 
#define SQLITE_PERM 3
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define SCHAR_MAX __SCHAR_MAX__
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define SQLITE_CONFIG_GETMUTEX 11
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
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
#define F_ALLOCATECONTIG 0x00000002
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define INT_LEAST8_MAX INT8_MAX
#define _SC_TRACE_EVENT_NAME_MAX 127
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define NOTE_EXEC 0x20000000
#define __WATCHOS_4_1 40100
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define __FLT64_MIN_10_EXP__ (-307)
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define INT8_C(v) (v)
#define __WATCHOS_4_3 40300
#define SIGPWR_ 30
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define F_ADDFILESUPPL 104
#define _SC_FILE_LOCKING 69
#define _I386_LIMITS_H_ 
#define LIST_CHECK_PREV(elm,field) 
#define __FLT64X_DECIMAL_DIG__ 21
#define SIZE_T_MAX ULONG_MAX
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define RE_DUP_MAX 255
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define SQLITE_SCANSTAT_EST 2
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define SQLITE_NOTADB 26
#define ENOTSUP 45
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define F_WRLCK 3
#define EIDRM 90
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define _SC_SIGQUEUE_MAX 51
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define FPE_FLTSUB 6
#define SQLITE_DETERMINISTIC 0x000000800
#define _PC_NAME_MAX 4
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define NOTE_EXIT_CSERROR 0x00040000
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define __LDBL_HAS_INFINITY__ 1
#define _PC_MAX_CANON 2
#define __OS_AVAILABILITY(_target,_availability) 
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define list_next_entry(item,member) list_entry((item)->member.next, typeof(*(item)), member)
#define EQUIV_CLASS_MAX 2
#define SQLITE_INTERNAL 2
#define EDEVERR 83
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define _SC_BC_BASE_MAX 9
#define SQLITE_SELECT 21
#define TRASHIT(x) 
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define _POSIX_NGROUPS_MAX 8
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define __DARWIN_NON_CANCELABLE 0
#define _WRITE_OK (1<<10)
#define _POSIX2_PBS_MESSAGE (-1)
#define EV_OOBAND EV_FLAG1
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define S_IWRITE S_IWUSR
#define FIONREAD_ 0x541b
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define ECONNABORTED 53
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define _EBADMSG -74
#define CHAR_MIN SCHAR_MIN
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define _SC_V6_LPBIG_OFFBIG 106
#define INT_LEAST8_MIN INT8_MIN
#define _ENODATA -61
#define P_SHARED (1 << 7)
#define __VERSION__ "11.2.0"
#define _SC_NPROCESSORS_ONLN 58
#define _PC_NO_TRUNC 8
#define _SC_TRACE_NAME_MAX 128
#define TIMERS_MAX 16
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define _EMULTIHOP -72
#define __IPHONE_5_1 50100
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define P_RWX (P_READ | P_WRITE | P_EXEC)
#define _SC_THREAD_ATTR_STACKSIZE 83
#define ILL_ILLTRP 2
#define O_APPEND 0x00000008
#define _MACH_PORT_T 
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define TASK_H 
#define NOTE_CRITICAL 0x00000020
#define _PC_CASE_SENSITIVE 11
#define _PTHREAD_RWLOCK_T 
#define _SECURE__STRINGS_H_ 
#define BADSIG SIG_ERR
#define CPUMON_MAKE_FATAL 0x1000
#define SQLITE_MUTEX_STATIC_LRU 6
#define O_CREAT 0x00000200
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define _SCHED_H_ 
#define _XOPEN_NAME_MAX 255
#define SQLITE_TESTCTRL_FIRST 5
#define INT_LEAST32_MIN INT32_MIN
#define EVFILT_FS (-9)
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define sint(size) glue3(int,size,_t)
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define _SECURE__STRING_H_ 
#define _IN_PORT_T 
#define _UNISTD_H_ 
#define SIGINT_ 2
#define SIGSYS_ 31
#define PTHREAD_PRIO_INHERIT 1
#define _ENOSR -63
#define _SC_EXPR_NEST_MAX 14
#define SS_ONSTACK_ 1
#define SQLITE_LOCK_NONE 0
#define _PC_REC_INCR_XFER_SIZE 20
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define _SC_CLOCK_SELECTION 67
#define _SYS__TYPES_H_ 
#define ENETDOWN 50
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define NOTE_BACKGROUND 0x00000040
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define SQLITE_DEPRECATED_NO_REPLACEMENT __API_DEPRECATED
#define __INT_LEAST32_MAX__ 0x7fffffff
#define SQLITE_CORRUPT_INDEX (SQLITE_CORRUPT | (3<<8))
#define LINE_MAX 2048
#define __STRING(x) #x
#define POLLRDNORM 0x0040
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define EPERM 1
#define O_NOCTTY_ (1 << 8)
#define TRAP_TRACE 2
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define EBUSY 16
#define __SSTR 0x0200
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define _ENOLINK -67
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define PTHREAD_MUTEX_NORMAL 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define DEV_CHAR 1
#define F_GETPATH 50
#define SIGXFSZ_ 25
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define SQLITE_STMTSTATUS_MEMUSED 99
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define SI_ASYNCIO 0x10004
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define RENAME_SECLUDE 0x00000001
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define _SYS_RESOURCE_H_ 
#define DTF_REWIND 0x0004
#define NOTE_ABSOLUTE 0x00000008
#define _SC_TRACE 97
#define _POSIX2_EXPR_NEST_MAX 32
#define __SLBF 0x0001
#define NOTE_EXTEND 0x00000004
#define EBADARCH 86
#define RLIMIT_RSS RLIMIT_AS
#define _POSIX_STREAM_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define _SC_FSYNC 38
#define __FLT32_MANT_DIG__ 24
#define DT_SOCK 12
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define _SC_TRACE_SYS_MAX 129
#define FWRITE 0x00000002
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define clearerr_unlocked(p) __sclearerr(p)
#define FS_REAL_H 
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define _CLOCK_T 
#define FD_CLOEXEC 1
#define _SC_PRIORITY_SCHEDULING 35
#define FS_POLL_H 
#define _INTMAX_T 
#define _SC_2_LOCALEDEF 23
#define _GID_T 
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define MEM_READ 0
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define _CHOWN_OK (1<<21)
#define F_FREEZE_FS 53
#define O_DIRECTORY 0x00100000
#define __SRD 0x0004
#define SQLITE_CREATE_TEMP_VIEW 6
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define EFTYPE 79
#define _SC_SEM_VALUE_MAX 50
#define SQLITE_DELETE 9
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define AT_SYMLINK_NOFOLLOW_ 0x100
#define SQLITE_ANALYZE 28
#define POLL_ERR 8
#define __IOS_UNAVAILABLE 
#define SQLITE_FCNTL_ZIPVFS 25
#define _SC_MQ_PRIO_MAX 75
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX 2147483647
#define POLL_WRITE 4
#define SQLITE_CONFIG_MALLOC 4
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_VERSION_NUMBER 3032003
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define SQLITE_COPY 0
#define PTHREAD_PRIO_PROTECT 2
#define _U_INT8_T 
#define SQLITE_OPEN_READONLY 0x00000001
#define _U_CHAR 
#define _POSIX2_LOCALEDEF 200112L
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define _PC_ASYNC_IO 17
#define PRIO_DARWIN_BG 0x1000
#define O_TRUNC 0x00000400
#define SQLITE_PROTOCOL 15
#define _ENOPKG -65
#define _EEXIST -17
#define _STDNORETURN_H 
#define SQLITE_CONFIG_GETPCACHE 15
#define __FLT128_HAS_DENORM__ 1
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define SQLITE_MUTEX_FAST 0
#define DTF_HIDEW 0x0001
#define SIG_UNBLOCK 2
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define _POSIX_RTSIG_MAX 8
#define _MCONTEXT_T 
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define _UINT64_T 
#define MAC_OS_X_VERSION_10_15_1 101501
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __NULLABILITY_COMPLETENESS_PUSH 
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define F_ADDFILESIGS_INFO 103
#define MAX_CANON 1024
#define _POSIX_MEMLOCK (-1)
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define str(x) _str(x)
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define WEXITED 0x00000004
#define INT_FAST8_MIN INT8_MIN
#define __DARWIN_MAXPATHLEN 1024
#define SQLITE_CONFIG_PAGECACHE 7
#define F_NODIRECT 62
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define FILESEC_GUID FILESEC_UUID
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define _SYS_ERRNO_H_ 
#define _Null_unspecified 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define _SC_MESSAGE_PASSING 33
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define NOTE_NSECONDS 0x00000004
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define __DARWIN_NO_LONG_LONG 0
#define FOOTPRINT_INTERVAL_RESET 0x1
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define UINT64_MAX 18446744073709551615ULL
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define CF (cpu->cf)
#define ECONNREFUSED 61
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define SIG_DFL (void (*)(int))0
#define _ENONET -64
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_OK 0
#define _PC_PATH_MAX 5
#define SI_TKILL_ -6
#define __SAPP 0x0100
#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNLESSOPEN 0x00200000
#define F_GETSIGSINFO 105
#define _SC_MONOTONIC_CLOCK 74
#define _KEY_T 
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define SQLITE_UTF16BE 3
#define _INT64_T 
#define _POSIX_CHILD_MAX 25
#define SS_ONSTACK 0x0001
#define _STDARG_H 
#define ECANCELED 89
#define SQLITE_SYSAPI 
#define EDOM 33
#define __LASTBRANCH_MAX 32
#define EADDRNOTAVAIL 49
#define superuser() (current != NULL && current->euid == 0)
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define F_SETLK 8
#define _SC_2_FORT_RUN 22
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define ESPIPE 29
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define ETIME 101
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define __FLT_IS_IEC_60559__ 2
#define _POSIX_THREADS 200112L
#define typecheck(type,x) ({type _x = x; x;})
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define _POSIX_THREAD_CPUTIME (-1)
#define F_SETOWN 6
#define _ENOTEMPTY -39
#define UTIL_TIMER_H 
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _ENOTUNIQ -76
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define _SQLITE3RTREE_H_ 
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define _SYS_SYSLIMITS_H_ 
#define SYS_ERRNO_H 
#define __FLT64X_DIG__ 18
#define _EFBIG -27
#define list_for_each_safe(list,item,tmp) for (item = (list)->next, tmp = item->next; item != (list); item = tmp, tmp = item->next)
#define NOTE_DELETE 0x00000001
#define SQLITE_OPEN_FILEPROTECTION_COMPLETE 0x00100000
#define _SYS_FCNTL_H_ 
#define __INT8_TYPE__ signed char
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define SQLITE_SCANSTAT_SELECTID 5
#define _UINTMAX_T 
#define _SC_PRIORITIZED_IO 34
#define NOTE_FFAND 0x40000000
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_DROP_TABLE 11
#define trylock(lock) trylock(lock, __FILE__, __LINE__)
#define COLL_WEIGHTS_MAX 2
#define FS_PROC_H 
#define SQLITE_DROP_TEMP_VIEW 15
#define OPEN_MAX 10240
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SQLITE_EXPERIMENTAL 
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define SIGTRAP_ 5
#define SQLITE_TRACE_CLOSE 0x08
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _ECHILD -10
#define _SC_V6_ILP32_OFFBIG 104
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define _SC_THREAD_SPORADIC_SERVER 92
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _REG(n) union { dword_t e ##n; word_t n; }
#define _ECANCELED -125
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define SQLITE_LIMIT_WORKER_THREADS 11
#define QMD_TRACE_HEAD(head) 
#define F_TLOCK 2
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define __SOFF 0x1000
#define _ETXTBSY -26
#define SQLITE_OK 0
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define __FLT_RADIX__ 2
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define __INT_LEAST16_TYPE__ short int
#define SIG_HOLD (void (*)(int))5
#define IOPOL_PASSIVE 2
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define O_ACCMODE_ 3
#define F_FULLFSYNC 51
#define _SC_RE_DUP_MAX 16
#define minor(x) ((int32_t)((x) & 0xffffff))
#define NOTE_PDATAMASK 0x000fffff
#define FPE_INTOVF 8
#define EHOSTUNREACH 65
#define POLLPRI 0x0002
#define SIGNAL_H 
#define _ENOSYS -38
#define PTHREAD_STACK_MIN 8192
#define lock(lock) __lock(lock, __FILE__, __LINE__)
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define __SSE_MATH__ 1
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define _U_INT32_T 
#define ENOTRECOVERABLE 104
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define NOTE_CHILD 0x00000004
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define __k8 1
#define EROFS 30
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define BUFSIZ 1024
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define EBADMACHO 88
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define __QOS_CLASS_AVAILABLE(...) 
#define F_TEST 3
#define EMU_H 
#define _UID_T 
#define ECONNRESET 54
#define va_copy(d,s) __builtin_va_copy(d,s)
#define AF_OPS (1 << 3)
#define _SC_THREAD_PRIO_PROTECT 88
#define ELOOP 62
#define INT_LEAST64_MAX INT64_MAX
#define SIGILL_ 4
#define O_SYNC 0x0080
#define __WATCHOS_3_1_1 30101
#define FS_FAKEFS_API_H 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define AT_REALDEV 0x0200
#define EOVERFLOW 84
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define O_CLOEXEC 0x01000000
#define __SIZEOF_PTRDIFF_T__ 8
#define _WCHAR_T_H 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define EAGAIN 35
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define SQLITE_FORMAT 24
#define _W_INT(w) (*(int *)&(w))
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define _ID_T 
#define _EPROTONOSUPPORT -93
#define _POSIX2_PBS_CHECKPOINT (-1)
#define _SC_REALTIME_SIGNALS 36
#define PARTLY_WITHIN 1
#define EPWROFF 82
#define __TVOS_AVAILABLE(_vers) 
#define SYNC_VOLUME_WAIT 0x02
#define SQLITE_FCNTL_CKPT_DONE 37
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define RLIMIT_STACK_ 3
#define RLIMIT_NPROC 7
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define MEM_WRITE 1
#define __DARWIN_64_BIT_INO_T 1
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define S_IFCHR 0020000
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define __TVOS_14_0 140000
#define SQLITE_MUTEX_STATIC_VFS2 12
#define P_GROWSDOWN (1 << 3)
#define SQLITE_READONLY 8
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define SQLITE_MUTEX_STATIC_VFS3 13
#define SQLITE_DBCONFIG_MAX 1017
#define FP_CHOP 3
#define __improbable(x) (x)
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define _SC_DELAYTIMER_MAX 45
#define S_IFDIR 0040000
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define EPROCLIM 67
#define TRAP_BRKPT 1
#define __LDBL_DIG__ 18
#define AT_SYMLINK_FOLLOW 0x0040
#define F_GLOBAL_NOCACHE 55
#define LIST_INITIALIZER(x) {.prev = &x, .next = &x}
#define W_OK (1<<1)
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define S_ISVTX 0001000
#define __FLT32X_MIN_EXP__ (-1021)
#define _ENOTSUP _EOPNOTSUPP
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define SQLITE_CREATE_TRIGGER 7
#define _SC_SAVED_IDS 7
#define DEBUG_verbose DEBUG_all
#define EPROTO 100
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define ENODEV 19
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define _USE_FORTIFY_LEVEL 2
#define _EXECUTE_OK (1<<11)
#define S_IFLNK 0120000
#define ENOTDIR 20
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define __INT_FAST16_MAX__ 0x7fff
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define __PTHREAD_SIZE__ 8176
#define FNDELAY O_NONBLOCK
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define SQLITE_ATTACH 24
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define SQLITE_CONFIG_SCRATCH 6
#define EMSGSIZE 40
#define SQLITE_PREPARE_PERSISTENT 0x01
#define INT_LEAST64_MIN INT64_MIN
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define _POSIX_MONOTONIC_CLOCK (-1)
#define _SC_PHYS_PAGES 200
#define _SC_TRACE_EVENT_FILTER 98
#define F_SETNOSIGPIPE 73
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define __FLT64_DIG__ 15
#define _SC_XBS5_LP64_OFF64 124
#define _POSIX2_LINE_MAX 2048
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define _SC_SEMAPHORES 37
#define SQLITE_CALLBACK 
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define WORD_BIT 32
#define _SUSECONDS_T 
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define _SC_THREAD_ATTR_STACKADDR 82
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define INT32_C(v) (v)
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define EV_EOF 0x8000
#define _SC_HOST_NAME_MAX 72
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define PTHREAD_PROCESS_PRIVATE 2
#define __FLT64X_HAS_DENORM__ 1
#define SQLITE_SHM_SHARED 4
#define _PC_SYNC_IO 25
#define __dead2 __attribute__((__noreturn__))
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _SC_AIO_LISTIO_MAX 42
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define ENODATA 96
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
#define EADDRINUSE 48
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define NOTE_REVOKE 0x00000040
#define _BSD_PTRDIFF_T_ 
#define EVFILT_TIMER (-7)
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SIGXFSZ 25
#define _OFF_T 
#define __kpi_deprecated(_msg) 
#define SQLITE_DROP_TRIGGER 16
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define SQLITE_NOLFS 22
#define EPROTONOSUPPORT 43
#define __UINT_FAST16_TYPE__ short unsigned int
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define F_VOLPOSMODE 4
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define LIST_CHECK_HEAD(head,field) 
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _POSIX_RAW_SOCKETS (-1)
#define SQLITE_DONE 101
#define list_for_each_entry(list,item,member) for (item = list_entry((list)->next, typeof(*item), member); &item->member != (list); item = list_entry(item->member.next, typeof(*item), member))
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _SYS_POLL_H_ 
#define E2BIG 7
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define EXPR_NEST_MAX 32
#define __no_instrument_msan 
#define SI_MESGQ 0x10005
#define SIGFPE_ 8
#define _ENOBUFS -105
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define __SEG_FS 1
#define _PID_T 
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define _SC_2_UPE 25
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _FD_SET 
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define NOTE_LINK 0x00000010
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define EV_FLAG0 0x1000
#define POLLHUP 0x0010
#define SQLITE_TESTCTRL_RESERVE 14
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define __SIG_ATOMIC_WIDTH__ 32
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define _POSIX2_PBS_TRACK (-1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define F_SETSIZE 43
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define POLLEXTEND 0x0200
#define _SC_THREAD_KEYS_MAX 86
#define __INT_LEAST64_TYPE__ long long int
#define BYTES_ROUND_DOWN(bytes) (PAGE(bytes) << PAGE_BITS)
#define SIGCHLD 20
#define __APPLE_API_OBSOLETE 
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define _ETIMEDOUT -110
#define _ENOEXEC -8
#define FULLY_WITHIN 2
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define SIGVTALRM_ 26
#define SQLITE_STATUS_MALLOC_COUNT 9
#define __STDC_VERSION__ 201710L
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define __SIZEOF_INT__ 4
#define _ENOTNAM -118
#define SQLITE_FUNCTION 31
#define _WEXT_OK (1<<18)
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define _PTHREAD_COND_T 
#define SEEK_HOLE 3
#define _MACHTYPES_H_ 
#define ARG_MAX (1024 * 1024)
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __INT_FAST8_MAX__ 0x7f
#define EVFILT_USER (-10)
#define UINTMAX_C(v) (v ## UL)
#define CPF_OVERWRITE 0x0001
#define DEFAULT_CHANNEL verbose
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_FCNTL_TRACE 19
#define RUSAGE_SELF 0
#define _POSIX_CLOCK_SELECTION (-1)
#define POLLWRITE 0x1000
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define _SYS_STDIO_H_ 
#define SQLITE_CONFIG_PMASZ 25
#define SIGSYS 12
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define HAVE_KQUEUE 1
#define ENXIO 6
#define SIGSTOP 17
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
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
#define _SC_IPV6 118
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define __DARWIN_LITTLE_ENDIAN 1234
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _PC_ALLOC_SIZE_MIN 16
#define _IOLBF 1
#define WNOWAIT 0x00000020
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define ENAMETOOLONG 63
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define SQLITE_BLOB 4
#define SQLITE_INNOCUOUS 0x000200000
#define __LITTLE_ENDIAN__ 1
#define O_DIRECTORY_ (1 << 16)
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define list_for_each_entry_safe(list,item,tmp,member) for (item = list_first_entry(list, typeof(*(item)), member), tmp = list_next_entry(item, member); &item->member != (list); item = tmp, tmp = list_next_entry(item, member))
#define SQLITE_CONSTRAINT 19
#define L_XTND SEEK_END
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define ENOTBLK 15
#define noreturn _Noreturn
#define SQLITE_CONFIG_URI 17
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define printk ish_printk
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define SQLITE_LIMIT_LENGTH 0
#define _ECONNRESET -104
#define O_ALERT 0x20000000
#define __FLT32X_DIG__ 15
#define LSEEK_SET 0
#define POLLWRNORM POLLOUT
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define _POSIX_NAME_MAX 14
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define S_IRGRP 0000040
#define _PC_EXTENDED_SECURITY_NP 13
#define _POSIX2_PBS_LOCATE (-1)
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define __WORDSIZE 64
#define O_SHLOCK 0x00000010
#define EV_DELETE 0x0002
#define SQLITE_OPEN_READWRITE 0x00000002
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define _E2BIG -7
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define _PC_REC_MIN_XFER_SIZE 22
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define SQLITE_TRANSACTION 22
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define false 0
#define POLL_HUP 16
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __GNUC_VA_LIST 
#define ELAST 106
#define _GCC_MAX_ALIGN_T 
#define RLIMIT_NOFILE 8
#define SIGALRM_ 14
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define RLIMIT_NPROC_ 6
#define list_entry(item,type,member) container_of(item, type, member)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define AT_SYMLINK_NOFOLLOW 0x0020
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define SQLITE_FCNTL_MMAP_SIZE 18
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define SIGSTKFLT_ 16
#define PRIO_DARWIN_THREAD 3
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define _EINVAL -22
#define SIGPIPE_ 13
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define SQLITE_OPEN_CREATE 0x00000004
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define CLD_EXITED 1
#define _XOPEN_IOV_MAX 16
#define SQLITE_MUTEX_STATIC_PMEM 7
#define SQLITE_FCNTL_RBU 26
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __MISMATCH_TAGS_POP 
#define _SYS__PTHREAD_TYPES_H_ 
#define _SC_XOPEN_ENH_I18N 109
#define SQLITE_MUTEX_STATIC_LRU2 7
#define __API_UNAVAILABLE_END 
#define _POSIX_MEMLOCK_RANGE (-1)
#define __STDIO_H_ 
#define NOTE_RENAME 0x00000020
#define NOTE_FFOR 0x80000000
#define __pic__ 2
#define SQLITE_TRACE_PROFILE 0x02
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define SIGALRM 14
#define __STDC_WANT_LIB_EXT1__ 1
#define _XOPEN_PATH_MAX 1024
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define FP_RND_DOWN 1
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define _NLINK_T 
#define RUSAGE_SELF_ 0
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define SQLITE_FAIL 3
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define bitfield unsigned int
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define INT_FAST32_MAX INT32_MAX
#define DT_FIFO 1
#define SQLITE_UTF16_ALIGNED 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define _PC_NAME_CHARS_MAX 10
#define EBADF 9
#define _WCHAR_T_DECLARED 
#define __UINT_FAST64_TYPE__ long long unsigned int
#define RLIMIT_MEMLOCK 6
#define SQLITE_LOCK_RESERVED 2
#define SQLITE_ALTER_TABLE 26
#define SQLITE_DBSTATUS_CACHE_USED 1
#define EXIT_SUCCESS 0
#define _SC_2_PBS 59
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define STDIN_FILENO 0
#define FTS5_TOKENIZE_AUX 0x0008
#define SIGURG 16
#define UINT_FAST8_MAX UINT8_MAX
#define SQLITE_WARNING 28
#define EOPNOTSUPP 102
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define _CADDR_T 
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define DT_WHT 14
#define F_GETNOSIGPIPE 74
#define SIG_SETMASK_ 2
#define _CT_RUNE_T 
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define _UINT16_T 
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define __LPBIG_OFFBIG (1)
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define _U_INT 
#define SSIZE_MAX LONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__
#define SQLITE_DBCONFIG_LEGACY_FILE_FORMAT 1016
#define F_GETPATH_NOFIRMLINK 102
#define F_GETFD 1
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define SQLITE_RANGE 25
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define _EALREADY -114
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define __INT64_TYPE__ long long int
#define EIO 5
#define __FLT_MAX_EXP__ 128
#define IOPOL_STANDARD 5
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define _SC_AIO_PRIO_DELTA_MAX 44
#define EV_FLAG1 0x2000
#define ENETUNREACH 51
#define EXDEV 18
#define EFAULT 14
#define _PTHREAD_MUTEXATTR_T 
#define __SEOF 0x0020
#define SIGPROF_ 27
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define _IONBF 2
#define RLIMIT_MSGQUEUE_ 12
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SIGIOT_ 6
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define EBADRPC 72
#define SF_FLAG (1 << 7)
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define PTHREAD_MUTEX_ERRORCHECK 1
#define _POSIX_TRACE (-1)
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define EV_SYSFLAGS 0xF000
#define F_TRANSCODEKEY 75
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define _POSIX_FSYNC 200112L
#define __SIZEOF_SHORT__ 2
#define NL_MSGMAX 32767
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define _ESTRPIPE -86
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define P_WRITABLE(flags) (flags & P_WRITE && !(flags & P_COW))
#define POLL_PRI 2
#define SQLITE_API 
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define zero_init(type) ((type[1]){}[0])
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define P_READ (1 << 0)
#define SIGTTIN_ 21
#define PASS_MAX 128
#define P_ANONYMOUS (1 << 6)
#define _EDOTDOT -73
#define FPE_FLTINV 5
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define NOTE_LOWAT 0x00000001
#define _POSIX_MAX_CANON 255
#define SQLITE_FLOAT 2
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define __MACH__ 1
#define ENOSPC 28
#define _APPEND_OK (1<<13)
#define __amd64__ 1
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define SQLITE_STATUS_MEMORY_USED 0
#define __WINT_WIDTH__ 32
#define SQLITE_DROP_TEMP_TRIGGER 14
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define RLIMIT_DATA 2
#define _RUNE_T 
#define NOTE_USECONDS 0x00000002
#define _ELOOP -40
#define SV_SIGINFO SA_SIGINFO
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define SIGTSTP 18
#define S_IRUSR 0000400
#define CLOCK_PROCESS_CPUTIME_ID_ 2
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define __FLT64X_IS_IEC_60559__ 2
#define SIG_ERR_ -1
#define __LDBL_MAX_10_EXP__ 4932
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define _POSIX_SEMAPHORES (-1)
#define ZF_FLAG (1 << 6)
#define SQLITE_OK_SYMLINK (SQLITE_OK | (2<<8))
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define RLIMIT_FSIZE 1
#define F_RDAHEAD 45
#define _EBADFD -77
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define _SC_THREAD_STACK_MIN 93
#define ZF_RES (1 << 1)
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _LP64 1
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define SQLITE_FCNTL_SIZE_HINT 5
#define SIGEMT 7
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define ESHUTDOWN 58
#define __UINT8_C(c) c
#define SIGTERM_ 15
#define SQLITE_SAVEPOINT 32
#define __API_AVAILABLE(...) 
#define EFBIG 27
#define SQLITE_CONFIG_PCACHE 14
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define SQLITE_TOOBIG 18
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define SQLITE_DENY 1
#define ESRCH 3
#define IOV_MAX 1024
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define _ELIBACC -79
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define EHOSTDOWN 64
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define __wchar_t__ 
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define GETSIGSINFO_PLATFORM_BINARY 1
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define _PTHREAD_H 
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})
#define BAD_PAGE 0x10000
#define debugger __asm__("int3")
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define RLIMIT_MEMLOCK_ 8
#define ENOLCK 77
#define _EPROTO -71
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define ENFILE 23
#define _SC_REGEXP 77
#define SQLITE_FCNTL_LAST_ERRNO 4
#define F_SETLKW 9
#define SQLITE_CONFIG_GETMALLOC 5
#define _UUID_T 
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define _SC_IOV_MAX 56
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define _ERESTART -85
#define _SC_PASS_MAX 131
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define O_RDWR 0x0002
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define SQLITE_READ 20
#define O_ASYNC 0x00000040
#define _POSIX_MAPPED_FILES 200112L
#define MAC_OS_X_VERSION_10_16 101600
#define F_ADDFILESIGS_RETURN 97
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define CLK_TCK __DARWIN_CLK_TCK
#define ENOSYS 78
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _SC_LOGIN_NAME_MAX 73
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define SQLITE_LIMIT_VDBE_OP 5
#define _POSIX_SS_REPL_MAX 4
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define PAGE_BITS 12
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define _POSIX_CPUTIME (-1)
#define QMD_TRACE_ELEM(elem) 
#define __DARWIN_FD_SETSIZE 1024
#define __TVOS_11_4 110400
#define SQLITE_DEPRECATED_WITH_REPLACEMENT __API_DEPRECATED_WITH_REPLACEMENT
#define P_WRITE (1 << 1)
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define _EADDRINUSE -98
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define EV_ERROR 0x4000
#define _SC_AIO_MAX 43
#define O_WRONLY 0x0001
#define SQLITE_BUSY 5
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define _SC_JOB_CONTROL 6
#define va_arg(v,l) __builtin_va_arg(v,l)
#define PF_RES (1 << 0)
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __MISMATCH_TAGS_PUSH 
#define ITIMER_PROF_ 2
#define WAIT_ANY (-1)
#define RUSAGE_INFO_V0 0
#define TRACE_instr TRACE__NOP
#define _SC_2_CHAR_TERM 20
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define __GNUC_STDC_INLINE__ 1
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define P_tmpdir "/var/tmp/"
#define SQLITE_STATUS_PARSER_STACK 6
#define __INT_WCHAR_T_H 
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define is_gcc(version) (__GNUC__ >= version)
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define POLLERR 0x0008
#define _EINTR -4
#define PTHREAD_SCOPE_SYSTEM 1
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define SQLITE_OPEN_FILEPROTECTION_NONE 0x00400000
#define _POSIX_MESSAGE_PASSING (-1)
#define PTHREAD_PRIO_NONE 0
#define R_OK (1<<2)
#define __TYPES_H_ 
#define SQLITE_TESTCTRL_ASSERT 12
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define w_coredump w_T.w_Coredump
#define _POSIX_MQ_PRIO_MAX 32
#define RUSAGE_INFO_V3 3
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define SQLITE_CONFIG_PCACHE2 18
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define _SIZE_T 
#define SQLITE_DIRECTONLY 0x000080000
#define _POSIX2_VERSION 200112L
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define SQLITE_INSERT 18
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define _SC_2_PBS_TRACK 64
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define _POSIX2_SW_DEV 200112L
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define use(...) __use(0, ##__VA_ARGS__)
#define RLIMIT_RTPRIO_ 14
#define QUAD_MIN LLONG_MIN
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define UTIL_DEBUG_H 
#define SQLITE_ROW 100
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define FOPEN_MAX 20
#define SQLITE_IOERR_DATA (SQLITE_IOERR | (32<<8))
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define WCOREFLAG 0200
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define F_ADDSIGS 59
#define stderr __stderrp
#define UID_MAX 2147483647U
#define DTTOIF(dirtype) ((dirtype) << 12)
#define _SC_THREAD_PROCESS_SHARED 90
#define OFF_MIN LLONG_MIN
#define EVFILT_MACHPORT (-8)
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define _POSIX_AIO_LISTIO_MAX 2
#define posit assert
#define SQLITE_LIMIT_COLUMN 2
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define _STRING_H_ 
#define SQLITE_STDCALL SQLITE_APICALL
#define _ENETDOWN -100
#define _RLIMIT_POSIX_FLAG 0x1000
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define NOTE_VM_PRESSURE 0x80000000
#define RLIM_NLIMITS 9
#define S_IFIFO 0010000
#define SQLITE_STMTSTATUS_RUN 6
#define L_SET SEEK_SET
#define MAX_GROUPS 32
#define has_attribute __has_attribute
#define __UINT32_C(c) c ## U
#define EALREADY 37
#define EISCONN 56
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define __DTF_SKIPREAD 0x0010
#define SQLITE_OPEN_URI 0x00000040
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define SQLITE_NOTFOUND 12
#define SIGEV_THREAD 3
#define __IOS_AVAILABLE(_vers) 
#define RLIMIT_NICE_ 13
#define _SC_SYNCHRONIZED_IO 40
#define INTMAX_MIN (-INTMAX_MAX-1)
#define _SC_TRACE_INHERIT 99
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define TAILQ_CHECK_PREV(elm,field) 
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define F_FINDSIGS 78
#define _EADDRNOTAVAIL -99
#define sigmask(m) (1 << ((m)-1))
#define _ELIBSCN -81
#define _VA_LIST_T_H 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __LONG_WIDTH__ 64
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define __PIC__ 2
#define BC_STRING_MAX 1000
#define _SIGSET_T 
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define PTHREAD_EXPLICIT_SCHED 2
#define EINTR 4
#define __RCSID(s) __IDSTRING(rcsid,s)
#define SQLITE_PREPARE_NO_VTAB 0x04
#define _INO64_T 
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define _EBUSY -16
#define SQLITE_ROLLBACK 1
#define __CHAR32_TYPE__ unsigned int
#define SQLITE_UTF8 1
#define SEGV_NOOP 0
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define LONG_BIT 64
#define SQLITE_DROP_TEMP_TABLE 13
#define __IPHONE_5_0 50000
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define SIGUSR1_ 10
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define _I386__LIMITS_H_ 
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define SQLITE_RECURSIVE 33
#define RLIMIT_CORE_ 4
#define INT_FAST64_MAX INT64_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define FP_PREC_64B 3
#define _EADV -68
#define SA_NOCLDWAIT 0x0020
#define _ENAVAIL -119
#define __va_list__ 
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define POLLWRBAND 0x0100
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define SA_NODEFER 0x0010
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define SQLITE_DBSTATUS_MAX 12
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define __SSE2__ 1
#define POLLOUT 0x0004
#define _SYS_WAIT_H_ 
#define _SC_2_FORT_DEV 21
#define ESHLIBVERS 87
#define PTHREAD_MUTEX_RECURSIVE 2
#define SIGILL 4
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define SQLITE_TEXT 3
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define F_GETPROTECTIONLEVEL 77
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define _FTS5_H 
#define _EROFS -30
#define __SIZEOF_DOUBLE__ 8
#define _POSIX_TRACE_LOG (-1)
#define O_EXLOCK 0x00000020
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RLIMIT_CPU_ 0
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define POLLNLINK 0x0800
#define EILSEQ 92
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define va_start(v,l) __builtin_va_start(v,l)
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define __unavailable 
#define RUSAGE_CHILDREN_ -1
#define __DRIVERKIT_20_0 200000
#define _QUAD_HIGHWORD 1
#define SIGIOT SIGABRT
#define SIGIO_ 29
#define _POSIX_TIMER_MAX 32
#define ENOMEM 12
#define _V6_LP64_OFF64 __LP64_OFF64
#define SIGBUS_ 7
#define S_IXGRP 0000010
#define EBADEXEC 85
#define __FLT32X_HAS_QUIET_NAN__ 1
#define _POSIX2_C_BIND 200112L
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define SQLITE_CONFIG_MUTEX 10
#define EV_UDATA_SPECIFIC 0x0100
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define SIG_DFL_ 0
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __strncpy_safe __attribute__((nonstring))
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define SQLITE_SHM_LOCK 2
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define FFSYNC O_FSYNC
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define O_POPUP 0x80000000
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define INTMAX_C(v) (v ## L)
#define _EPIPE -32
#define SQLITE_FCNTL_OVERWRITE 11
#define ILL_PRVOPC 3
#define SQLITE_DBSTATUS_STMT_USED 3
#define ENOPOLICY 103
#define _RATTR_OK (1<<15)
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define PAGE_SIZE (1 << PAGE_BITS)
#define __DBL_MAX_10_EXP__ 308
#define __NULLABILITY_COMPLETENESS_POP 
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define SQLITE_CONFIG_GETPCACHE2 19
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define IOPOL_DEFAULT 0
#define _MACH_I386__STRUCTS_H_ 
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define __DARWIN_OS_INLINE static inline
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _T_PTRDIFF_ 
#define F_FLUSH_DATA 40
#define __DARWIN_MAXNAMLEN 255
#define EV_DISPATCH 0x0080
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define F_PATHPKG_CHECK 52
#define SIGABRT_ 6
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define _SC_THREADS 96
#define _SC_2_PBS_ACCOUNTING 60
#define _ENETRESET -102
#define _U_SHORT 
#define __STDC__ 1
#define NOTE_OOB 0x00000002
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define SQLITE_LOCK_PENDING 3
#define EEXIST 17
#define NZERO 20
#define static_assert _Static_assert
#define __PTRDIFF_TYPE__ long int
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define NOTE_FFCTRLMASK 0xc0000000
#define EV_ADD 0x0001
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define DT_LNK 10
#define AF_FLAG (1 << 4)
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define _ETIME -62
#define stdin __stdinp
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define EPROGMISMATCH 75
#define LIST_H 
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define CLOCK_MONOTONIC_ 1
#define __ATOMIC_SEQ_CST 5
#define SIGHUP_ 1
#define SQLITE_SCANSTAT_NAME 3
#define __PTHREAD_COND_SIZE__ 40
#define SQLITE_IOERR 10
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define SQLITE_STMTSTATUS_REPREPARE 5
#define SQLITE_MUTEX_RECURSIVE 1
#define _SC_2_PBS_CHECKPOINT 61
#define __WATCHOS_AVAILABLE(_vers) 
#define SQLITE_CONFIG_SQLLOG 21
#define SQLITE_CONFIG_HEAP 8
#define F_LOG2PHYS_EXT 65
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define SQLITE_TESTCTRL_ISINIT 23
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define SQLITE_FCNTL_VFSNAME 12
#define _EMFILE -24
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define _PTHREAD_KEY_T 
#define POLLIN 0x0001
#define SQLITE_FCNTL_VFS_POINTER 27
#define __FLT32X_MIN_10_EXP__ (-307)
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_CONFIG_LOOKASIDE 13
#define __UINTPTR_TYPE__ long unsigned int
#define SA_NODEFER_ 0x40000000
#define _ENXIO -6
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define _SSIZE_T 
#define _ELIBEXEC -83
#define __SNBF 0x0002
#define SQLITE_TRACE_ROW 0x04
#define __TVOS_10_0_1 100001
#define PTHREAD_KEYS_MAX 512
#define RLIMIT_NOFILE_ 7
#define __WCHAR_T__ 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define SQLITE_DEPRECATED 
#define F_SETFL 4
#define SQLITE_NOMEM 7
#define __DTF_ATEND 0x0020
#define _SC_SPAWN 79
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define O_RDWR_ (1 << 1)
#define LOCK_UN 0x08
#define O_TRUNC_ (1 << 9)
#define ILL_NOOP 0
#define X_OK (1<<0)
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define SQLITE_PRAGMA 19
#define EACCES 13
#define _ERANGE -34
#define EVFILT_VNODE (-4)
#define FIOCLEX_ 0x5451
#define F_GETLK 7
#define SQLITE_MUTEX_STATIC_MASTER 2
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define _POSIX_OPEN_MAX 20
#define _POSIX_LOGIN_NAME_MAX 9
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define __enum_closed 
#define PRIO_MAX 20
#define _SC_TRACE_LOG 100
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define _EDEADLK -35
#define _ECONNABORTED -103
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define PTRDIFF_MAX INTMAX_MAX
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define S_IROTH 0000004
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define DTF_NODUP 0x0002
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define EVFILT_WRITE (-2)
#define _SC_BC_DIM_MAX 10
#define PATH_MAX 1024
#define S_IFSOCK 0140000
#define __DARWIN_CLK_TCK 100
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define rdtsc() ({ uint32_t low, high; __asm__ volatile("rdtsc" : "=a" (high), "=d" (low)); ((uint64_t) high) << 32 | low; })
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define RLIMIT_AS_ 9
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define BC_BASE_MAX 99
#define F_SETFD 2
#define _ENOTDIR -20
#define MB_LEN_MAX 6
#define _EISNAM -120
#define _POSIX_ARG_MAX 4096
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define _MACH_MACHINE__STRUCTS_H_ 
#define SIG_IGN (void (*)(int))1
#define glue3(a,b,c) glue(a, glue(b, c))
#define FS_SOCKRESTART_H 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define _POSIX_SAVED_IDS 200112L
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define _U_INT16_T 
#define __P(protos) protos
#define F_CHKCLEAN 41
#define F_PUNCHHOLE 99
#define NOTE_VM_ERROR 0x10000000
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _POSIX_BARRIERS (-1)
#define FP_PREC_53B 2
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define SQLITE_MUTEX_STATIC_APP3 10
#define FPE_FLTUND 3
#define SQLITE_AUTH 23
#define CPF_IGNORE_MODE 0x0002
